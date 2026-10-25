// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148336bd8 FUN_148336bd8 body=243 status=ok
// SIG undefined FUN_148336bd8(void)

undefined8 *
FUN_148336bd8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 **local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_6 == 0) {
    *param_1 = 0;
  }
  else {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ae745a0;
    local_60 = param_6;
    local_88[0] = &LAB_1483728b4;
    uVar1 = FUN_14001cc68(0x80,0x10);
    local_98 = param_5;
    local_90 = local_88;
    FUN_14836ddcc(uVar1,param_2,param_3,param_4);
    *param_1 = uVar1;
    if (local_88[0] != (undefined1 *)0x0) {
      pppuVar2 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar2 = &local_68;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148336ccc FUN_148336ccc body=58 status=ok
// SIG undefined FUN_148336ccc(void)

undefined8 FUN_148336ccc(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14834dd76();
  if (cVar1 != '\0') {
    FUN_14834ddb8(param_1);
    cVar1 = FUN_14834de88(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_14834df2e(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148336d06 FUN_148336d06 body=149 status=ok
// SIG undefined FUN_148336d06(void)

undefined8 *
FUN_148336d06(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0x70) == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = param_3;
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_14ae746e0;
    puVar1[0xc] = FUN_1483731e6;
    puVar1[0xe] = 0;
    puVar1[0x10] = &PTR_LAB_14ae746c0;
    puVar1[0x11] = param_2;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 148336d9c FUN_148336d9c body=152 status=ok
// SIG undefined FUN_148336d9c(void)

undefined8 *
FUN_148336d9c(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = param_3;
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_14ae74770;
    puVar1[0xc] = &LAB_148373530;
    puVar1[0xe] = 0;
    puVar1[0x10] = &PTR_LAB_14ae74750;
    puVar1[0x11] = param_2;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 148336e34 FUN_148336e34 body=152 status=ok
// SIG undefined FUN_148336e34(void)

undefined8 *
FUN_148336e34(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = param_3;
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 4) = param_5;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *puVar1 = &PTR_FUN_14ae74800;
    puVar1[0xc] = &LAB_148373824;
    puVar1[0xe] = 0;
    puVar1[0x10] = &PTR_LAB_14ae747e0;
    puVar1[0x11] = param_2;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 148336ecc FUN_148336ecc body=82 status=ok
// SIG undefined FUN_148336ecc(void)

void FUN_148336ecc(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae74020;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14ae740a0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148336f1e FUN_148336f1e body=71 status=ok
// SIG undefined FUN_148336f1e(void)

char FUN_148336f1e(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 8);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 148336f66 FUN_148336f66 body=57 status=ok
// SIG undefined FUN_148336f66(void)

void FUN_148336f66(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148336fa0();
  if (iVar1 == 0) {
    iVar1 = FUN_1483372fe(*(undefined8 *)(param_1 + 8),param_1 + 0x50,param_1 + 0x10);
    if (iVar1 == 0) {
      FUN_1483370e2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148336fa0 FUN_148336fa0 body=321 status=ok
// SIG undefined FUN_148336fa0(void)

undefined8 FUN_148336fa0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + lVar3);
      if ((int)uVar1 < 0) {
        return 10;
      }
      if (*(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4) <= (int)uVar1) {
        return 10;
      }
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8)
                                      + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)) {
        return 10;
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar1 & 0x1ff) << 4)) != -1) {
        return 10;
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)*(int *)(param_1 + 0x30) * 4 != lVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x68) + lVar3);
      if ((int)uVar1 < 0) {
        return 10;
      }
      if (*(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4) <= (int)uVar1) {
        return 10;
      }
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8)
                                      + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)) {
        return 10;
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar1 & 0x1ff) << 4)) != -1) {
        return 10;
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)*(int *)(param_1 + 0x70) * 4 != lVar3);
  }
  FUN_146c5e534(param_1 + 0x10);
  FUN_146c5e534(param_1 + 0x50);
  return 0;
}



// FUNCTION 1483370e2 FUN_1483370e2 body=538 status=ok
// SIG undefined FUN_1483370e2(void)

undefined8 FUN_1483370e2(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = 100;
  if (((*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x70)) &&
      (iVar9 = *(int *)(param_1 + 0x20), iVar9 == *(int *)(param_1 + 0x30) + 1)) &&
     (*(int *)(param_1 + 0x60) == iVar9)) {
    local_50 = param_1;
    if (0 < iVar9) {
      uVar10 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)(int)uVar10 * 4);
        lVar12 = (longlong)(int)(~uVar10 + *(int *)(param_1 + 0x20));
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar12 * 4);
        if ((uVar1 != uVar2) && (-1 < (int)uVar1)) {
          lVar4 = *(longlong *)(param_1 + 8);
          uVar5 = *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24);
          if ((((int)uVar1 < (int)uVar5) && ((uVar2 < uVar5 && (-1 < (int)uVar2)))) &&
             (((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                                  (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe &&
              ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                                  (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
            iVar6 = FUN_146c061e0(lVar4,uVar1,uVar2);
            iVar11 = 0;
            iVar9 = 0;
            if ((iVar6 != -1) && (iVar9 = 0, (int)uVar10 < *(int *)(param_1 + 0x60) + -1)) {
              uVar5 = *(uint *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)(int)uVar10 * 4);
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + -4 + lVar12 * 4);
              if (uVar5 == uVar3) {
                iVar9 = 1;
              }
              else {
                iVar9 = iVar11;
                if (-1 < (int)uVar5) {
                  lVar12 = *(longlong *)(param_1 + 8);
                  uVar7 = *(int *)(lVar12 + 0x20) * 0x200 + *(int *)(lVar12 + 0x24);
                  if ((((((int)uVar5 < (int)uVar7) && (uVar3 < uVar7)) && (-1 < (int)uVar3)) &&
                      (((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x28) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe &&
                       ((ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar12 + 0x28) +
                                             (ulonglong)(uVar3 >> 9) * 8) +
                                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
                     (iVar6 = FUN_146c061e0(lVar12,uVar5,uVar3), iVar6 == -1)) {
                    uVar8 = FUN_143b09648(&local_50,uVar5,uVar3,uVar10 + 1);
                    iVar9 = 1;
                    if ((int)uVar8 != 0) goto LAB_1483372d5;
                  }
                }
              }
            }
            uVar8 = FUN_143b09648(&local_50,uVar1,uVar2,uVar10);
            if ((int)uVar8 != 0) goto LAB_1483372d5;
            uVar10 = iVar9 + uVar10;
            iVar9 = *(int *)(param_1 + 0x60);
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar9);
    }
    uVar8 = 0;
  }
LAB_1483372d5:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1483372fe FUN_1483372fe body=690 status=ok
// SIG undefined FUN_1483372fe(void)

undefined8 FUN_1483372fe(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_f8 [44];
  int local_cc;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar5 = *(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10);
  local_c8 = param_1;
  if (iVar5 != 0) {
    if (*(int *)(param_2 + 0x10) < *(int *)(param_3 + 0x10)) {
      param_3 = param_2;
    }
    local_cc = -iVar5;
    if (-iVar5 < 0) {
      local_cc = iVar5;
    }
    plVar13 = (longlong *)(param_3 + 0x18);
    local_c0 = param_3 + 8;
    local_cc = local_cc + (uint)(local_cc == 0);
    iVar5 = 0;
    local_b8 = plVar13;
    do {
      if ((longlong)*(int *)(param_3 + 0x20) < 1) {
        uVar9 = 0xffffffff;
        iVar11 = -1;
      }
      else {
        dVar18 = 0.0;
        uVar12 = 0xffffffff;
        uVar16 = 0;
        uVar9 = 0xffffffff;
        do {
          uVar1 = *(uint *)(*plVar13 + uVar16 * 4);
          lVar17 = *(longlong *)(local_c8[0x38] + (ulonglong)(uVar1 >> 9) * 8);
          uVar10 = (ulonglong)((uVar1 & 0x1ff) << 4);
          uVar2 = *(uint *)(lVar17 + uVar10);
          uVar3 = *(uint *)(lVar17 + 4 + uVar10);
          lVar17 = *(longlong *)(local_c8[2] + (ulonglong)(uVar2 >> 9) * 8);
          uVar10 = (ulonglong)uVar2 & 0x1ff;
          lVar15 = *(longlong *)(local_c8[2] + (ulonglong)(uVar3 >> 9) * 8);
          uVar14 = (ulonglong)uVar3 & 0x1ff;
          dVar20 = *(double *)(lVar15 + uVar14 * 0x18) - *(double *)(lVar17 + uVar10 * 0x18);
          dVar21 = *(double *)(lVar15 + 8 + uVar14 * 0x18) - *(double *)(lVar17 + 8 + uVar10 * 0x18)
          ;
          dVar19 = *(double *)(lVar15 + 0x10 + uVar14 * 0x18) -
                   *(double *)(lVar17 + 0x10 + uVar10 * 0x18);
          dVar19 = dVar19 * dVar19 + dVar20 * dVar20 + dVar21 * dVar21;
          iVar11 = (int)uVar12;
          if (dVar18 < dVar19) {
            uVar12 = uVar16 & 0xffffffff;
            iVar11 = (int)uVar16;
            dVar18 = dVar19;
            uVar9 = uVar1;
          }
          uVar16 = uVar16 + 1;
        } while ((longlong)*(int *)(param_3 + 0x20) != uVar16);
      }
      local_ac = 0xffffffff;
      iStack_a8 = -1;
      uStack_a4 = 0xffffffff;
      uStack_a0 = 0xffffffff;
      local_9c = 0xffffffffffffffff;
      local_8c = 0xffffffff;
      uStack_88 = 0xffffffff;
      uStack_84 = 0xffffffff;
      uStack_80 = 0xffffffff;
      local_7c = 0xffffffff;
      iVar6 = (**(code **)(*local_c8 + 0x30))(local_c8,uVar9,local_b0,0x3fe0000000000000);
      if (iVar6 != 0) {
        uVar8 = 0x15;
        goto LAB_148337345;
      }
      iVar6 = *(int *)(param_3 + 0x10);
      *(uint *)(param_3 + 0x10) = iVar6 + 1U;
      if (*(uint *)(param_3 + 0x14) < iVar6 + 1U) {
        FUN_1446f48e2(local_c0,iVar6);
      }
      iVar7 = iVar11 + 1;
      lVar15 = (longlong)iVar7;
      memmove((void *)(*(longlong *)(param_3 + 8) + lVar15 * 4 + 4),
              (void *)(*(longlong *)(param_3 + 8) + lVar15 * 4),
              (ulonglong)(uint)(iVar6 - iVar7) << 2);
      plVar13 = local_b8;
      *(undefined4 *)(*(longlong *)(param_3 + 8) + lVar15 * 4) = local_90;
      lVar17 = (longlong)iVar11;
      iVar4 = *(int *)(param_3 + 0x20);
      iVar6 = *(int *)(*(longlong *)(param_3 + 8) + lVar17 * 4);
      *(uint *)(param_3 + 0x20) = iVar4 + 1U;
      if (iStack_a8 != iVar6) {
        iVar11 = iVar7;
        lVar17 = lVar15;
      }
      if (*(uint *)(param_3 + 0x24) < iVar4 + 1U) {
        FUN_1446f48e2(local_b8,iVar4);
      }
      memmove((void *)(*plVar13 + lVar17 * 4 + 4),(void *)(*plVar13 + lVar17 * 4),
              (ulonglong)(uint)(iVar4 - iVar11) << 2);
      *(undefined4 *)(*plVar13 + lVar17 * 4) = uStack_84;
      iVar5 = iVar5 + 1;
    } while (iVar5 != local_cc);
  }
  uVar8 = 0;
LAB_148337345:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483375b2 FUN_1483375b2 body=97 status=ok
// SIG undefined FUN_1483375b2(void)

void FUN_1483375b2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x208);
  if (plVar2 == (longlong *)0x0) {
    FUN_14582ed12(*param_1);
    plVar2 = *(longlong **)(*param_1 + 0x208);
  }
  iVar1 = (**(code **)(*plVar2 + 0xa0))();
  if (param_2 < iVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148337610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_1 + 0x208) + 0xa8))
            (*(longlong **)(*param_1 + 0x208),param_2 + 1);
  return;
}



// FUNCTION 148337614 FUN_148337614 body=744 status=ok
// SIG undefined FUN_148337614(void)

ulonglong FUN_148337614(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (param_1[1] != param_2) {
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_144a1a59e(local_58,*(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc),1);
      FUN_146c19cce(param_1[1]);
      uVar9 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
      if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
        uVar8 = 1;
        uVar4 = 1;
        if (1 < (int)uVar9) {
          uVar8 = (ulonglong)uVar9;
        }
        do {
          uVar7 = uVar4;
          if ((uint)uVar8 == uVar7) goto LAB_148337692;
          uVar4 = uVar7 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar7 >> 9] +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar8 = (ulonglong)uVar7;
      }
LAB_148337692:
      if ((uint)uVar8 != uVar9) {
        do {
          uVar7 = (uint)uVar8;
          lVar1 = *(longlong *)
                   (*(longlong *)(param_2 + 0x48) + (ulonglong)((uint)(uVar8 >> 5) & 0x3fffff8));
          uVar5 = (ulonglong)((uVar7 & 0xff) << 3);
          local_64 = *(undefined4 *)(lVar1 + uVar5);
          local_60 = *(undefined4 *)(lVar1 + 4 + uVar5);
          uVar3 = FUN_146c2d0a4(param_1[1],&local_64);
          *(undefined4 *)(local_58[0] + (longlong)(int)uVar7 * 4) = uVar3;
          uVar4 = uVar7 + 1;
          if ((int)(uVar7 + 1) < (int)uVar9) {
            uVar4 = uVar9;
          }
          do {
            if (uVar4 - 1 == (int)uVar8) {
              uVar8 = (ulonglong)uVar4;
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x10) +
                                                 (ulonglong)(uVar7 >> 9) * 8) +
                                               (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        } while ((uint)uVar8 != uVar9);
      }
      lVar1 = *param_1;
      uVar8 = 0;
      uVar9 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
      if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
        uVar8 = 1;
        uVar4 = 1;
        if (1 < (int)uVar9) {
          uVar8 = (ulonglong)uVar9;
        }
        do {
          uVar7 = uVar4;
          if ((uint)uVar8 == uVar7) goto LAB_148337759;
          uVar4 = uVar7 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar7 >> 9] +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar8 = (ulonglong)uVar7;
      }
LAB_148337759:
      if ((uint)uVar8 != uVar9) {
        do {
          uVar4 = (int)uVar8 * 3;
          lVar2 = *(longlong *)(param_2 + 0x78);
          lVar6 = (longlong)
                  *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                          (ulonglong)(uVar4 & 0x1ff) * 4);
          if (-1 < lVar6) {
            uVar7 = uVar4 + 1;
            local_64 = *(undefined4 *)(local_58[0] + lVar6 * 4);
            local_60 = *(undefined4 *)
                        (local_58[0] +
                        (longlong)
                        *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar7 >> 9) * 8) +
                                (ulonglong)(uVar7 & 0x1ff) * 4) * 4);
            local_5c = *(undefined4 *)
                        (local_58[0] +
                        (longlong)
                        *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                                (ulonglong)(uVar4 + 2 & 0x1ff) * 4) * 4);
            FUN_146c01486(param_1[1],uVar8,&local_64,CONCAT71((uint7)(uint3)(uVar7 >> 0x11),1));
          }
          uVar4 = (int)uVar8 + 1;
          if ((int)uVar4 < (int)uVar9) {
            uVar4 = uVar9;
          }
          do {
            if (uVar4 - 1 == (int)uVar8) {
              uVar8 = (ulonglong)uVar4;
              break;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar1 + 0x148) +
                                                 (ulonglong)(uVar7 >> 9) * 8) +
                                               (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        } while ((uint)uVar8 != uVar9);
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1483378fe FUN_1483378fe body=733 status=ok
// SIG undefined FUN_1483378fe(void)

void FUN_1483378fe(longlong *param_1,longlong *param_2,byte *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = 1;
  local_60 = param_4;
  FUN_1448156a8(param_2,&DAT_149f3b668,*(int *)(*param_1 + 0x20) * 0x200 + *(int *)(*param_1 + 0x24)
               );
  FUN_146c19cce(param_1[1]);
  lVar10 = *param_1;
  uVar11 = *(int *)(lVar10 + 0x20) * 0x200 + *(int *)(lVar10 + 0x24);
  uVar8 = 0;
  if ((uVar11 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x28) - 1U))) {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    do {
      uVar8 = uVar5;
      if (uVar5 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar9 = uVar6 & 0x1ff;
      uVar8 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x28))[uVar7] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar8 != uVar11) {
    do {
      local_58 = DAT_14c84635c;
      uVar5 = FUN_146c2d0a4(param_1[1],&local_58);
      *(uint *)(*param_2 + (longlong)(int)uVar8 * 4) = uVar5;
      *param_3 = *param_3 & uVar5 == uVar8;
      if (local_60 != (longlong *)0x0) {
        iVar1 = (int)local_60[1];
        *(uint *)(local_60 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)local_60 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(local_60,iVar1);
        }
        *(uint *)(*local_60 + (longlong)iVar1 * 4) = uVar5;
      }
      uVar5 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar11) {
        uVar5 = uVar11;
      }
      do {
        uVar6 = uVar5;
        if (uVar5 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar6 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x28) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar6;
    } while (uVar8 != uVar11);
    lVar10 = *param_1;
  }
  uVar11 = *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144);
  uVar8 = 0;
  if ((uVar11 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar10 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    do {
      uVar8 = uVar5;
      if (uVar5 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar9 = uVar6 & 0x1ff;
      uVar8 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar10 + 0x148))[uVar7] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar8 != uVar11) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar2 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
      lVar4 = *param_2;
      local_58._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      local_58 = CONCAT44(*(undefined4 *)(lVar4 + (longlong)local_58._4_4_ * 4),
                          *(undefined4 *)(lVar4 + (longlong)(int)uVar3 * 4));
      local_50 = *(undefined4 *)
                  (lVar4 + (longlong)*(int *)(lVar2 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc) * 4);
      FUN_146c01486(param_1[1],uVar8,&local_58,1);
      uVar5 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar11) {
        uVar5 = uVar11;
      }
      do {
        uVar6 = uVar5;
        if (uVar5 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar6 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar10 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar6;
    } while (uVar8 != uVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148337bdc FUN_148337bdc body=868 status=ok
// SIG undefined FUN_148337bdc(void)

void FUN_148337bdc(int *param_1,longlong param_2,undefined8 param_3,double param_4,longlong *param_5
                  )

{
  float *pfVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_188 [36];
  uint local_164;
  int *local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  double local_140;
  double local_138;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 local_120 [56];
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  int *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar9 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = param_1;
  FUN_148373cc2(param_3);
  uVar7 = *param_1 * 0x200 + param_1[1];
  if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 2) - 1U))) {
    uVar9 = 1;
    uVar8 = 1;
    if (1 < (int)uVar7) {
      uVar9 = (ulonglong)uVar7;
    }
    do {
      uVar4 = uVar8;
      if ((uint)uVar9 == uVar4) goto LAB_148337c94;
      uVar8 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 2))[uVar4 >> 9] +
                                         (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
    uVar9 = (ulonglong)uVar4;
  }
LAB_148337c94:
  if ((uint)uVar9 != uVar7) {
    local_164 = uVar7;
    local_160 = param_1;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (uVar9 >> 9) * 8);
      uVar3 = (ulonglong)((uint)uVar9 & 0x1ff);
      local_e0 = *(undefined4 *)(lVar5 + 8 + uVar3 * 0xc);
      local_e8 = *(undefined8 *)(lVar5 + uVar3 * 0xc);
      FUN_146c14b3a(param_2,local_120,uVar9,0);
      local_12c = 0xffffffffffffffff;
      local_124 = 0xffffffff;
      lVar5 = 0;
      do {
        uVar7 = *(uint *)((longlong)&local_e8 + lVar5 * 4);
        lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
        uVar3 = (ulonglong)(uVar7 & 0x1ff);
        pfVar1 = (float *)(lVar6 + uVar3 * 0x18);
        local_158 = *pfVar1;
        fStack_154 = pfVar1[1];
        fStack_150 = pfVar1[2];
        fStack_14c = pfVar1[3];
        local_148 = *(undefined8 *)(lVar6 + 0x10 + uVar3 * 0x18);
        FUN_146bca7ae(local_120,&local_140,&local_158,2);
        local_140 = local_140 * param_4;
        local_138 = local_138 * param_4;
        fStack_154 = (float)local_138;
        local_158 = (float)local_140;
        uVar2 = FUN_146c2d0a4(param_3,&local_158);
        uVar3 = uStack_d0;
        *(undefined4 *)((longlong)&local_12c + lVar5 * 4) = uVar2;
        lVar6 = (longlong)(int)uStack_d0;
        uVar7 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar7);
        if (uStack_d0._4_4_ < uVar7) {
          FUN_1446f48e2(&local_d8,uVar3 & 0xffffffff);
          uVar2 = *(undefined4 *)((longlong)&local_12c + lVar5 * 4);
        }
        *(undefined4 *)(local_d8 + lVar6 * 4) = uVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      FUN_146c01486(param_3,uVar9,&local_12c,1);
      uVar7 = (uint)uVar9 + 1;
      if ((int)uVar7 < (int)local_164) {
        uVar7 = local_164;
      }
      do {
        if (uVar7 - 1 == (int)uVar9) {
          uVar9 = (ulonglong)uVar7;
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_160 + 2) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar9 != local_164);
  }
  if (&local_d8 == param_5 || param_5 == (longlong *)0x0) {
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_d8;
    local_d8 = 0;
    *(int *)(param_5 + 1) = (int)uStack_d0;
    *(uint *)((longlong)param_5 + 0xc) = uStack_d0._4_4_;
  }
  local_70 = 0;
  FUN_144a6bfa8();
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148337f42 FUN_148337f42 body=1182 status=ok
// SIG undefined FUN_148337f42(void)

void FUN_148337f42(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  double *param_5,longlong *param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_1a8 [40];
  uint *local_180;
  ulonglong local_178;
  uint *local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  undefined1 local_150 [24];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined1 local_cc [4];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_1a8;
  lVar13 = param_1[1];
  local_168 = param_4;
  if ((lVar13 != 0) && (lVar12 = param_2[1], (longlong)(int)lVar12 != 0)) {
    lVar4 = *param_2;
    lVar9 = 0;
    do {
      FUN_146c2d498(lVar13,*(undefined4 *)(lVar4 + lVar9),1);
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar12 * 4 != lVar9);
    puVar11 = (uint *)*param_2;
    dVar1 = *param_5;
    dVar2 = param_5[1];
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      uVar14 = -(ulonglong)(-dVar1 <= dVar1);
      uVar14 = -(ulonglong)
                (9.999999974752427e-07 <
                (double)(uVar14 & (ulonglong)dVar1 | ~uVar14 & (ulonglong)-dVar1));
      uVar15 = -(ulonglong)(-dVar2 <= dVar2);
      uVar15 = -(ulonglong)
                (9.999999974752427e-07 <
                (double)(uVar15 & (ulonglong)dVar2 | ~uVar15 & (ulonglong)-dVar2));
      local_180 = puVar11 + (int)param_2[1];
      do {
        uVar7 = *puVar11;
        local_178 = (ulonglong)uVar7;
        lVar13 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
        local_100 = *(undefined4 *)(lVar13 + 8 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_108 = *(undefined8 *)(lVar13 + (ulonglong)(uVar7 & 0x1ff) * 0xc);
        local_114 = 0xffffffffffffffff;
        local_10c = 0xffffffff;
        lVar13 = 0;
        local_170 = puVar11;
        do {
          uVar7 = *(uint *)((longlong)&local_108 + lVar13 * 4);
          if ((int)uStack_c0 != local_94) {
            puVar8 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar8 = local_90;
            }
            iVar3 = *(int *)(puVar8 + (ulonglong)(local_80 - 1U & uVar7) * 4);
            while (iVar3 != -1) {
              lVar12 = local_c8 + (longlong)iVar3 * 0x10;
              if (*(uint *)(local_c8 + (longlong)iVar3 * 0x10) == uVar7) {
                if ((lVar12 != 0) && ((undefined4 *)(lVar12 + 4) != (undefined4 *)0x0)) {
                  *(undefined4 *)((longlong)&local_114 + lVar13 * 4) = *(undefined4 *)(lVar12 + 4);
                  goto LAB_1483382d3;
                }
                break;
              }
              iVar3 = *(int *)(lVar12 + 8);
            }
          }
          lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          local_128 = *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          puVar10 = (undefined4 *)(lVar12 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          local_138 = *puVar10;
          uStack_134 = puVar10[1];
          uStack_130 = puVar10[2];
          uStack_12c = puVar10[3];
          (*(code *)*param_3)(local_150,param_3[1],&local_138);
          FUN_146bca7ae(local_168,&local_160,local_150,2);
          local_160 = local_160 *
                      (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar1) & uVar14);
          local_158 = local_158 *
                      (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar2) & uVar15);
          local_e0 = CONCAT44((float)local_158,(float)local_160);
          uVar6 = FUN_146c2d0a4(param_1[1],&local_e0);
          uVar5 = uStack_f0;
          puVar10 = (undefined4 *)((longlong)&local_114 + lVar13 * 4);
          *puVar10 = uVar6;
          lVar12 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_1446f48e2(&local_f8,uVar5 & 0xffffffff);
            uVar6 = *puVar10;
          }
          local_e0 = (longlong)&local_108 + lVar13 * 4;
          *(undefined4 *)(local_f8 + lVar12 * 4) = uVar6;
          local_d8 = puVar10;
          FUN_140263e2a(&local_c8,local_cc,&local_e0,0);
LAB_1483382d3:
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        FUN_146c01486(param_1[1],local_178,&local_114,1);
        puVar11 = local_170 + 1;
      } while (puVar11 != local_180);
    }
    if (&local_f8 == param_6 || param_6 == (longlong *)0x0) {
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_6 != 0) {
        FUN_1400020a8();
      }
      *param_6 = local_f8;
      local_f8 = 0;
      *(int *)(param_6 + 1) = (int)uStack_f0;
      *(uint *)((longlong)param_6 + 0xc) = uStack_f0._4_4_;
    }
    local_80 = 0;
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(&local_c8);
  }
  if ((local_70 ^ (ulonglong)local_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483383e2 FUN_1483383e2 body=1007 status=ok
// SIG undefined FUN_1483383e2(void)

ulonglong FUN_1483383e2(longlong param_1,undefined4 *param_2,uint *param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_338 [32];
  undefined4 *local_318;
  undefined8 *local_310;
  undefined8 local_308;
  char local_2f9;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  longlong local_298;
  undefined8 uStack_290;
  undefined4 local_280 [6];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  uint local_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined3 uStack_f0;
  undefined5 local_ed;
  undefined3 uStack_e8;
  undefined8 uStack_e5;
  undefined1 *local_dc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar3 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar5 = 0;
  if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar2 = 1;
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      uVar9 = uVar2;
      uVar5 = uVar3;
      if (uVar3 == uVar9) break;
      uVar2 = uVar9 + 1;
      uVar5 = uVar9;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar9 >> 9] +
                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  }
  *param_3 = uVar5;
  local_318 = (undefined4 *)CONCAT71(local_318._1_7_,1);
  FUN_146c393d4(local_280,param_1,uVar5,1);
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_e5 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_ed = 0;
  local_dc = &DAT_100000002;
  local_c8 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_108 = param_1;
  FUN_146c68b4c(&local_108);
  if ((int)local_f8 == 0) {
    uVar8 = 0;
    local_318 = local_280;
    FUN_146c14204(param_1,&local_268,*param_3,0);
    *(undefined8 *)(param_2 + 0xc) = local_238;
    *(undefined8 *)(param_2 + 8) = local_248;
    *(undefined8 *)(param_2 + 10) = uStack_240;
    *(undefined8 *)(param_2 + 4) = local_258;
    *(undefined8 *)(param_2 + 6) = uStack_250;
    *param_2 = local_268;
    param_2[1] = uStack_264;
    param_2[2] = uStack_260;
    param_2[3] = uStack_25c;
  }
  else {
    local_2f9 = param_4;
    iVar4 = FUN_146c68994(&local_108);
    local_298 = 0;
    uStack_290 = 0;
    lVar6 = (longlong)*(int *)(lStack_100 + 0x10 + (longlong)iVar4 * 0x40);
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar1 = *(longlong *)(lStack_100 + 8 + (longlong)iVar4 * 0x40);
      lVar7 = lVar6 * 4;
      lVar6 = 0;
      do {
        uVar8 = uStack_290;
        iVar4 = *(int *)(lVar1 + lVar6);
        lVar10 = (longlong)(int)uStack_290;
        uVar5 = (int)uStack_290 + 1;
        uStack_290 = CONCAT44(uStack_290._4_4_,uVar5);
        if (uStack_290._4_4_ < uVar5) {
          FUN_14489624a(&local_298,uVar8 & 0xffffffff);
        }
        *(double *)(local_298 + lVar10 * 0x10) = (double)iVar4;
        *(undefined8 *)(local_298 + 8 + lVar10 * 0x10) = 0;
        lVar6 = lVar6 + 4;
      } while (lVar7 != lVar6);
    }
    FUN_1483387d2(&local_268,param_1);
    FUN_148338a7e(&local_268,&local_298);
    if ((((int)local_110 < 0) ||
        (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)local_110)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) +
                                      (ulonglong)(local_110 >> 9) * 8) +
                                    (ulonglong)(local_110 & 0x1ff) * 2) - 1U))) {
      local_318 = local_280;
      uVar8 = 0;
      FUN_146c14204(param_1,&local_2d8,*param_3,0);
      *(undefined8 *)(param_2 + 0xc) = local_2a8;
      *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_2b4,local_2b8);
      *(ulonglong *)(param_2 + 10) = CONCAT44(uStack_2ac,uStack_2b0);
      *(undefined8 *)(param_2 + 4) = local_2c8;
      *(ulonglong *)(param_2 + 6) = CONCAT44(uStack_2bc,uStack_2c0);
      *param_2 = (undefined4)local_2d8;
      param_2[1] = local_2d8._4_4_;
      param_2[2] = (undefined4)uStack_2d0;
      param_2[3] = uStack_2d0._4_4_;
    }
    else {
      *param_3 = local_110;
      local_318 = (undefined4 *)CONCAT71(local_318._1_7_,1);
      uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      FUN_146c393d4(local_280,param_1,local_110,1);
      local_318 = local_280;
      FUN_146c14204(param_1,&local_2d8,local_110,0);
      *(undefined8 *)(param_2 + 0xc) = local_2a8;
      param_2[8] = local_2b8;
      param_2[9] = uStack_2b4;
      param_2[10] = uStack_2b0;
      param_2[0xb] = uStack_2ac;
      param_2[4] = (undefined4)local_2c8;
      param_2[5] = local_2c8._4_4_;
      param_2[6] = uStack_2c0;
      param_2[7] = uStack_2bc;
      *param_2 = (undefined4)local_2d8;
      param_2[1] = local_2d8._4_4_;
      param_2[2] = (undefined4)uStack_2d0;
      param_2[3] = uStack_2d0._4_4_;
      if (local_2f9 != '\0') {
        local_2c8 = DAT_14c846398;
        local_2d8 = DAT_14c846388;
        uStack_2d0 = DAT_14c846390;
        local_318 = &local_2f8;
        local_2e8 = DAT_14c8463b0;
        local_2f8 = (undefined4)DAT_14c8463a0;
        uStack_2f4 = DAT_14c8463a0._4_4_;
        uStack_2f0 = (undefined4)DAT_14c8463a8;
        uStack_2ec = DAT_14c8463a8._4_4_;
        local_308 = 0x3fee666666666666;
        local_310 = &local_2d8;
        FUN_148338b24(param_2,0,1,2);
      }
    }
    FUN_148338d34(&local_268);
    if (local_298 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1482f1656(&local_108);
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1483387d2 FUN_1483387d2 body=683 status=ok
// SIG undefined FUN_1483387d2(void)

longlong * FUN_1483387d2(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_148373d88(param_1 + 0x1e);
  FUN_146c3f08a(param_1 + 0x21);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x24);
  FUN_146bd223a(param_1 + 0x22);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  FUN_1448156a8(param_1 + 0x26,&local_98,iVar1 * 0x200 + iVar2);
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  local_d8 = param_1[2];
  uStack_90 = param_1[3];
  local_c8 = (longlong *)param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  lStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  lVar5 = local_68;
  lVar6 = uStack_60;
  local_88 = local_c8;
  lVar4 = uStack_80;
  local_98 = local_d8;
  lVar3 = uStack_90;
  param_1[8] = CONCAT44(uStack_a4,local_a8);
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = (longlong)&PTR_LAB_14ae74870;
  param_1[7] = (longlong)param_1;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_bc,uStack_c0);
  param_1[2] = (longlong)&LAB_148373dea;
  param_1[3] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  lStack_b0 = lStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  if (local_d8 != 0) {
    plVar7 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar7 = &local_b8;
    }
    uStack_90 = lVar3;
    uStack_80 = lVar4;
    local_68 = lVar5;
    uStack_60 = lVar6;
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined1 *)(param_1 + 10) = 0;
  local_d8 = param_1[0xc];
  uStack_90 = param_1[0xd];
  local_c8 = (longlong *)param_1[0xe];
  uStack_80 = param_1[0xf];
  local_78 = param_1[0x10];
  lStack_70 = param_1[0x11];
  local_68 = param_1[0x12];
  uStack_60 = param_1[0x13];
  lVar5 = local_68;
  lVar6 = uStack_60;
  local_88 = local_c8;
  lVar4 = uStack_80;
  local_98 = local_d8;
  lVar3 = uStack_90;
  param_1[0x12] = CONCAT44(uStack_a4,local_a8);
  param_1[0x13] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x10] = (longlong)&PTR_LAB_14ae749f0;
  param_1[0x11] = (longlong)&LAB_148373e54;
  param_1[0xe] = 0;
  param_1[0xf] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0xc] = (longlong)&LAB_148373e58;
  param_1[0xd] = CONCAT44(uStack_cc,uStack_d0);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  lStack_b0 = lStack_70;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_90 = lVar3;
  uStack_80 = lVar4;
  local_68 = lVar5;
  uStack_60 = lVar6;
  if (local_d8 != 0) {
    plVar7 = &local_b8;
    if (local_c8 != (longlong *)0x0) {
      plVar7 = local_c8;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148338a7e FUN_148338a7e body=165 status=ok
// SIG undefined FUN_148338a7e(void)

void FUN_148338a7e(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  iVar3 = (int)param_2[1];
  FUN_148373eaa(local_38,iVar3);
  if (0 < (longlong)iVar3) {
    lVar4 = 0;
    do {
      dVar1 = *(double *)(*param_2 + lVar4);
      uVar2 = *(undefined8 *)(*param_2 + 8 + lVar4);
      *(undefined4 *)(local_38[0] + lVar4) = 0xffffffff;
      *(int *)(local_38[0] + 4 + lVar4) = (int)dVar1;
      *(undefined8 *)(local_38[0] + 8 + lVar4) = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar4);
  }
  FUN_148373f18(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148338b24 FUN_148338b24 body=526 status=ok
// SIG undefined FUN_148338b24(void)

void FUN_148338b24(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  double *param_5,double *param_6,double param_7)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146bfcd44(param_1,&local_88,param_4);
  dVar2 = local_78 * param_5[2] + local_88 * *param_5 + local_80 * param_5[1];
  uVar1 = -(ulonglong)(-dVar2 <= dVar2);
  if (param_7 < (double)(~uVar1 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar1)) {
    param_5 = param_6;
  }
  FUN_146bfcd44(param_1,&local_a0,param_3);
  dVar2 = local_90 * param_5[2] + local_a0 * *param_5 + local_98 * param_5[1];
  FUN_146bfcd44(param_1,&local_b8,param_2);
  dVar3 = local_a8 * param_5[2] + local_b8 * *param_5 + local_b0 * param_5[1];
  uVar1 = -(ulonglong)(-dVar3 <= dVar3);
  dVar5 = (double)(~uVar1 & (ulonglong)-dVar3 | uVar1 & (ulonglong)dVar3);
  uVar1 = -(ulonglong)(-dVar2 <= dVar2);
  dVar4 = (double)(~uVar1 & (ulonglong)-dVar2 | uVar1 & (ulonglong)dVar2);
  if (dVar4 < dVar5) {
    dVar2 = dVar3;
  }
  local_a0 = *(double *)(&DAT_149931170 + (ulonglong)(dVar2 < 0.0) * 8);
  local_90 = param_5[2] * local_a0;
  local_98 = param_5[1] * local_a0;
  local_a0 = *param_5 * local_a0;
  FUN_1482ae2be(param_1,dVar5 <= dVar4,&local_a0,&local_88);
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148338d34 FUN_148338d34 body=188 status=ok
// SIG undefined FUN_148338d34(void)

void FUN_148338d34(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_146b9cd14(param_1 + 0x108);
  FUN_14834e518(param_1 + 0xf8,0);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x000148338de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148338df0 FUN_148338df0 body=239 status=ok
// SIG undefined FUN_148338df0(void)

undefined4
FUN_148338df0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_668 [32];
  undefined1 local_648;
  undefined4 local_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined1 local_600 [8];
  undefined1 local_5f8 [544];
  undefined1 local_3d8 [952];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_668;
  local_648 = 0;
  FUN_1482e14f4(local_600,param_1,param_2,0);
  local_628 = DAT_14c8464f0;
  local_638 = DAT_14c8464e0;
  uStack_630 = DAT_14c8464e8;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_610 = 0;
  local_608 = 0x3ff0000000000000;
  uVar1 = FUN_1483383e2(local_5f8,&local_638,&local_63c,1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_146be9b2a(local_3d8,local_63c);
    *param_4 = uVar2;
    *param_3 = (undefined4)local_638;
    param_3[1] = local_638._4_4_;
    param_3[2] = (undefined4)uStack_630;
    param_3[3] = uStack_630._4_4_;
    *(undefined8 *)(param_3 + 4) = local_628;
    *(undefined8 *)(param_3 + 6) = uStack_620;
    *(undefined8 *)(param_3 + 8) = uStack_618;
    *(undefined8 *)(param_3 + 10) = uStack_610;
    *(undefined8 *)(param_3 + 0xc) = local_608;
  }
  FUN_1482e1868(local_600);
  if ((local_20 ^ (ulonglong)auStack_668) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148338ee0 FUN_148338ee0 body=2777 status=ok
// SIG undefined FUN_148338ee0(void)

ulonglong FUN_148338ee0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,
                       undefined4 *param_4,double *param_5,undefined4 param_6,undefined8 param_7,
                       double param_8,longlong *param_9)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_a18 [32];
  undefined1 local_9f8;
  float local_9e4;
  float local_9e0;
  int local_9dc;
  longlong local_9d8;
  undefined8 uStack_9d0;
  longlong local_9c8 [3];
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  double local_988;
  undefined8 local_980;
  undefined4 local_978;
  undefined1 local_970 [8];
  undefined8 local_968;
  undefined8 local_960;
  undefined1 *local_958;
  double *local_950;
  double local_948;
  double dStack_940;
  double local_938;
  undefined8 local_930;
  longlong *plStack_928;
  undefined8 local_920;
  longlong local_918;
  longlong lStack_910;
  undefined8 local_908;
  undefined1 local_8f8;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined8 local_7f8;
  double local_7f0 [12];
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined1 local_778 [216];
  undefined1 local_6a0 [8];
  double local_698 [2];
  longlong local_688;
  int local_678;
  int local_674;
  undefined8 *local_670;
  longlong local_638;
  char local_628;
  longlong local_568;
  int local_558;
  int local_554;
  undefined8 *local_550;
  undefined1 local_3d0 [784];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  lVar14 = param_1[1];
  if ((lVar14 == 0) || (lVar21 = param_2[1], (longlong)(int)lVar21 == 0)) {
    uVar20 = 0;
  }
  else {
    lVar4 = *param_2;
    lVar16 = 0;
    do {
      FUN_146c2d498(lVar14,*(undefined4 *)(lVar4 + lVar16),1);
      lVar16 = lVar16 + 4;
    } while ((longlong)(int)lVar21 * 4 != lVar16);
    dVar2 = *param_5;
    dVar3 = param_5[1];
    local_9f8 = 0;
    FUN_1482e14f4(local_6a0,*param_1,param_2,0);
    local_950 = &local_948;
    local_958 = &LAB_143b0fad4;
    local_968 = *param_3;
    local_960 = param_3[1];
    FUN_146c3d222(local_698);
    FUN_146c38c5e(local_698,0);
    FUN_146c38cd0(local_698,param_6);
    FUN_146ba21d6(local_778,local_698,1);
    local_948 = 1.79769313486232e+308;
    local_938 = 0.0;
    plStack_928 = (longlong *)0x0;
    local_8f8 = 0;
    uVar8 = FUN_146bdde3a(local_778,param_4,local_970,&local_948);
    if (local_938 != 0.0) {
      plVar13 = plStack_928;
      if (plStack_928 == (longlong *)0x0) {
        plVar13 = &local_918;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    lVar14 = *(longlong *)(local_568 + (ulonglong)(uVar8 >> 9) * 8);
    lVar4 = (ulonglong)((uVar8 & 0x1ff) << 2) * 3;
    lVar21 = *(longlong *)(local_688 + (ulonglong)(*(uint *)(lVar14 + lVar4) >> 9) * 8);
    uVar20 = (ulonglong)*(uint *)(lVar14 + lVar4) & 0x1ff;
    pdVar17 = (double *)(lVar21 + uVar20 * 0x18);
    local_948 = *pdVar17;
    dStack_940 = pdVar17[1];
    local_938 = *(double *)(lVar21 + 0x10 + uVar20 * 0x18);
    uVar9 = *(uint *)(lVar14 + 4 + lVar4);
    lVar21 = *(longlong *)(local_688 + (ulonglong)(uVar9 >> 9) * 8);
    uVar20 = (ulonglong)uVar9 & 0x1ff;
    local_920 = *(undefined8 *)(lVar21 + 0x10 + uVar20 * 0x18);
    puVar1 = (undefined8 *)(lVar21 + uVar20 * 0x18);
    local_930 = *puVar1;
    plStack_928 = (longlong *)puVar1[1];
    uVar9 = *(uint *)(lVar14 + 8 + lVar4);
    lVar14 = *(longlong *)(local_688 + (ulonglong)(uVar9 >> 9) * 8);
    uVar20 = (ulonglong)uVar9 & 0x1ff;
    local_908 = *(undefined8 *)(lVar14 + 0x10 + uVar20 * 0x18);
    plVar13 = (longlong *)(lVar14 + uVar20 * 0x18);
    local_918 = *plVar13;
    lStack_910 = plVar13[1];
    local_7f8 = *(undefined8 *)(param_4 + 4);
    local_808 = *param_4;
    uStack_804 = param_4[1];
    uStack_800 = param_4[2];
    uStack_7fc = param_4[3];
    pdVar17 = &local_948;
    pdVar18 = local_7f0;
    for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
      *pdVar18 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar18 = pdVar18 + 1;
    }
    FUN_146bd2a7a(&local_808);
    lVar14 = *(longlong *)(local_568 + (ulonglong)(uVar8 >> 9) * 8);
    local_980 = *(undefined8 *)(lVar14 + lVar4);
    local_978 = *(undefined4 *)(lVar14 + 8 + lVar4);
    local_988 = *(double *)(param_4 + 0xc);
    dStack_9a0 = *(double *)(param_4 + 6);
    local_998 = *(double *)(param_4 + 8);
    dStack_990 = *(double *)(param_4 + 10);
    local_9c8[2] = local_790;
    uStack_9b0 = uStack_788;
    local_9a8 = local_780;
    dVar26 = dStack_9a0 * (dStack_9a0 + dStack_9a0);
    dVar5 = (dStack_9a0 + dStack_9a0) * local_988;
    dVar27 = local_988 * (local_998 + local_998);
    dVar28 = dStack_9a0 * (dStack_990 + dStack_990);
    dVar25 = (local_998 + local_998) * local_998;
    dVar6 = (dStack_990 + dStack_990) * local_998;
    pdVar17 = local_698;
    FUN_146c13dec(pdVar17,&local_948,uVar8);
    if ((1.0 - (dVar25 + dVar26)) * local_938 +
        (dVar28 + dVar27) * local_948 + (dVar6 - dVar5) * dStack_940 < 0.0) {
      dVar26 = local_998 + local_998;
      dVar5 = dStack_990 + dStack_990;
      dStack_940 = dVar26 * dStack_9a0 + local_988 * dVar5;
      local_938 = dStack_9a0 * dVar5 - dVar26 * local_988;
      local_948 = 1.0 - (dVar5 * dStack_990 + local_998 * dVar26);
      local_930 = 0x3c91a62633145c07;
      FUN_1482ff674();
    }
    uVar10 = 0;
    uVar24 = 0x3ff00000;
    if (param_8 <= 1.0) {
      uVar10 = SUB84(param_8,0);
      uVar24 = (int)((ulonglong)param_8 >> 0x20);
    }
    dVar5 = (double)(~-(ulonglong)(param_8 < 0.0) & CONCAT44(uVar24,uVar10));
    if (0.0 < dVar5) {
      uVar9 = local_678 * 0x200 + local_674;
      uVar8 = 0;
      if ((uVar9 != 0) && (uVar8 = 0, 0xfffd < (ushort)(*(short *)*local_670 - 1U))) {
        uVar11 = 1;
        uVar12 = 1;
        if (1 < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar8 = uVar11;
          if (uVar11 == uVar12) break;
          uVar15 = uVar12 >> 9;
          uVar19 = uVar12 & 0x1ff;
          uVar8 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)(local_670[uVar15] + (ulonglong)uVar19 * 2) - 1U));
      }
      if (uVar8 != uVar9) {
        dVar26 = 1.0 - dVar5;
        do {
          if (local_628 == '\x01') {
            lVar14 = *(longlong *)(local_638 + (ulonglong)(uVar8 >> 9) * 8);
            uVar20 = (ulonglong)(uVar8 & 0x1ff);
            *(float *)(lVar14 + uVar20 * 0xc) =
                 (float)((double)*(float *)(lVar14 + uVar20 * 0xc) * dVar26 +
                        (dStack_9a0 * (dStack_990 + dStack_990) +
                        (local_998 + local_998) * local_988) * dVar5);
            *(float *)(lVar14 + 4 + uVar20 * 0xc) =
                 (float)((double)*(float *)(lVar14 + 4 + uVar20 * 0xc) * dVar26 +
                        ((dStack_990 + dStack_990) * local_998 -
                        (dStack_9a0 + dStack_9a0) * local_988) * dVar5);
            *(float *)(lVar14 + 8 + uVar20 * 0xc) =
                 (float)((double)*(float *)(lVar14 + 8 + uVar20 * 0xc) * dVar26 +
                        (1.0 - (local_998 * (local_998 + local_998) +
                               dStack_9a0 * (dStack_9a0 + dStack_9a0))) * dVar5);
          }
          uVar11 = uVar8 + 1;
          if ((int)(uVar8 + 1) < (int)uVar9) {
            uVar11 = uVar9;
          }
          do {
            uVar12 = uVar11;
            if (uVar11 - 1 == uVar8) break;
            uVar8 = uVar8 + 1;
            uVar12 = uVar8;
          } while (0xfffd < (ushort)(*(short *)(local_670[uVar8 >> 9] +
                                               (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
          uVar8 = uVar12;
        } while (uVar8 != uVar9);
      }
    }
    FUN_1483301a8(&local_948,pdVar17);
    dStack_940 = (double)CONCAT71(dStack_940._1_7_,3);
    FUN_1483399ba(&local_948,local_9c8 + 2,&local_980,0x47efffffe0000000);
    local_9c8[0] = 0;
    local_9c8[1] = 0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    FUN_1448156a8(local_9c8,&DAT_149f3b668,local_678 * 0x200 + local_674);
    uVar9 = local_678 * 0x200 + local_674;
    uVar8 = 0;
    if ((uVar9 != 0) && (uVar8 = 0, 0xfffd < (ushort)(*(short *)*local_670 - 1U))) {
      uVar11 = 1;
      uVar12 = 1;
      if (1 < (int)uVar9) {
        uVar11 = uVar9;
      }
      do {
        uVar8 = uVar11;
        if (uVar11 == uVar12) break;
        uVar15 = uVar12 >> 9;
        uVar19 = uVar12 & 0x1ff;
        uVar8 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)(local_670[uVar15] + (ulonglong)uVar19 * 2) - 1U));
    }
    if (uVar8 != uVar9) {
      uVar20 = -(ulonglong)(-dVar2 <= dVar2);
      uVar23 = -(ulonglong)(-dVar3 <= dVar3);
      uVar20 = -(ulonglong)
                (9.999999974752427e-07 <
                (double)(uVar20 & (ulonglong)dVar2 | ~uVar20 & (ulonglong)-dVar2));
      uVar23 = -(ulonglong)
                (9.999999974752427e-07 <
                (double)(uVar23 & (ulonglong)dVar3 | ~uVar23 & (ulonglong)-dVar3));
      pdVar17 = &local_948;
      do {
        lVar14 = FUN_1483741d2(pdVar17,uVar8);
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0x20) == '\x01')) {
          local_9e0 = (float)(*(double *)(lVar14 + 0x18) *
                             (double)(~uVar23 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / dVar3) & uVar23));
          local_9e4 = (float)(*(double *)(lVar14 + 0x10) *
                             (double)(~uVar20 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / dVar2) & uVar20));
          uVar10 = FUN_146c2d0a4(param_1[1],&local_9e4);
          lVar14 = local_9c8[0];
          uVar7 = uStack_9d0;
          *(undefined4 *)(local_9c8[0] + (longlong)(int)uVar8 * 4) = uVar10;
          lVar21 = (longlong)(int)uStack_9d0;
          uVar11 = (int)uStack_9d0 + 1;
          uStack_9d0 = CONCAT44(uStack_9d0._4_4_,uVar11);
          if (uStack_9d0._4_4_ < uVar11) {
            FUN_1446f48e2(&local_9d8,uVar7 & 0xffffffff);
          }
          *(undefined4 *)(local_9d8 + lVar21 * 4) =
               *(undefined4 *)(lVar14 + (longlong)(int)uVar8 * 4);
        }
        uVar11 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar12 = uVar11;
          if (uVar11 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar12 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(local_670[uVar8 >> 9] + (ulonglong)(uVar8 & 0x1ff) * 2
                                             ) - 1U));
        uVar8 = uVar12;
      } while (uVar8 != uVar9);
    }
    uVar9 = local_558 * 0x200 + local_554;
    uVar8 = 0;
    if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)*local_550 - 1U))) {
      uVar11 = 1;
      uVar12 = 1;
      if (1 < (int)uVar9) {
        uVar11 = uVar9;
      }
      do {
        uVar8 = uVar11;
        if (uVar11 == uVar12) break;
        uVar15 = uVar12 >> 9;
        uVar19 = uVar12 & 0x1ff;
        uVar8 = uVar12;
        uVar12 = uVar12 + 1;
      } while (0xfffd < (ushort)(*(short *)(local_550[uVar15] + (ulonglong)uVar19 * 2) - 1U));
    }
    uVar20 = CONCAT71((int7)((ulonglong)pdVar17 >> 8),1);
    if (uVar8 != uVar9) {
      iVar22 = 0;
      do {
        lVar14 = *(longlong *)(local_568 + (ulonglong)(uVar8 >> 9) * 8);
        uVar20 = (ulonglong)(uVar8 & 0x1ff);
        local_9e4 = *(float *)(local_9c8[0] + (longlong)*(int *)(lVar14 + uVar20 * 0xc) * 4);
        local_9e0 = *(float *)(local_9c8[0] + (longlong)*(int *)(lVar14 + 4 + uVar20 * 0xc) * 4);
        local_9dc = *(int *)(local_9c8[0] + (longlong)*(int *)(lVar14 + 8 + uVar20 * 0xc) * 4);
        if (((local_9e4 == -NAN) || (local_9e0 == -NAN)) || (local_9dc == -1)) {
          iVar22 = iVar22 + 1;
        }
        else {
          uVar10 = FUN_146be9b2a(local_3d0,uVar8);
          FUN_146c01486(param_1[1],uVar10,&local_9e4,1);
        }
        uVar11 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar9) {
          uVar11 = uVar9;
        }
        do {
          uVar12 = uVar11;
          if (uVar11 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar12 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(local_550[uVar8 >> 9] + (ulonglong)(uVar8 & 0x1ff) * 2
                                             ) - 1U));
        uVar8 = uVar12;
      } while (uVar8 != uVar9);
      uVar20 = CONCAT71((int7)((ulonglong)local_3d0 >> 8),iVar22 == 0);
    }
    if (&local_9d8 == param_9 || param_9 == (longlong *)0x0) {
      if (local_9d8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_9 != 0) {
        FUN_1400020a8();
      }
      *param_9 = local_9d8;
      local_9d8 = 0;
      *(int *)(param_9 + 1) = (int)uStack_9d0;
      *(uint *)((longlong)param_9 + 0xc) = uStack_9d0._4_4_;
    }
    if (local_9c8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_148330418(&local_948);
    FUN_1457e5b52(local_778);
    FUN_1482e1868(local_6a0);
  }
  if ((local_c0 ^ (ulonglong)auStack_a18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1483399ba FUN_1483399ba body=341 status=ok
// SIG undefined FUN_1483399ba(void)

void FUN_1483399ba(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[0x24] = param_2[6];
  lVar8 = *param_2;
  lVar3 = param_2[1];
  lVar7 = param_2[2];
  lVar5 = param_2[3];
  lVar6 = param_2[5];
  param_1[0x22] = param_2[4];
  param_1[0x23] = lVar6;
  param_1[0x20] = lVar7;
  param_1[0x21] = lVar5;
  param_1[0x1e] = lVar8;
  param_1[0x1f] = lVar3;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  lVar8 = 0;
  do {
    uVar2 = *(uint *)(param_3 + lVar8 * 4);
    lVar7 = FUN_14836839c(param_1,uVar2,1);
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    local_78 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
    puVar1 = (undefined4 *)(lVar3 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    FUN_14836955a(param_1,&local_70,param_1 + 0x1e,&local_88);
    *(undefined8 *)(lVar7 + 0x10) = local_70;
    *(undefined8 *)(lVar7 + 0x18) = uStack_68;
    dVar4 = SQRT(*(double *)(lVar7 + 0x10) * *(double *)(lVar7 + 0x10) +
                 *(double *)(lVar7 + 0x18) * *(double *)(lVar7 + 0x18));
    *(double *)(lVar7 + 8) = dVar4;
    *(undefined1 *)(lVar7 + 0x20) = 1;
    FUN_146b9cbf0(param_1 + 0x17,uVar2,(float)dVar4);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  FUN_148368558(param_1,param_4);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148339b10 FUN_148339b10 body=76 status=ok
// SIG undefined FUN_148339b10(void)

void FUN_148339b10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined1 local_18;
  undefined2 local_17;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  local_17 = 0;
  local_18 = param_3;
  FUN_148339b5e(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148339b5e FUN_148339b5e body=3978 status=ok
// SIG undefined FUN_148339b5e(void)

ulonglong FUN_148339b5e(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  longlong **pplVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined1 local_488 [32];
  undefined1 local_468;
  char local_459;
  longlong *local_458;
  char *local_450;
  uint *local_448;
  uint local_43c;
  longlong *local_438;
  ulonglong local_430;
  undefined8 local_424;
  int local_41c;
  longlong local_418;
  undefined8 uStack_410;
  longlong *local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3dc;
  longlong local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  longlong *plStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 *local_398;
  undefined4 *puStack_390;
  longlong *local_388;
  undefined3 uStack_380;
  undefined5 uStack_37d;
  undefined4 uStack_378;
  undefined7 uStack_374;
  undefined1 uStack_36d;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined2 local_360;
  undefined1 local_35e;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  int local_2c4;
  undefined1 local_2c0 [8];
  undefined1 *local_2b8;
  int local_2b0;
  undefined4 local_2a0 [4];
  longlong local_290;
  int local_280;
  int local_27c;
  undefined8 *local_278;
  longlong local_170;
  int local_160;
  int local_15c;
  undefined8 *local_158;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)local_488;
  lVar17 = param_1[1];
  if ((lVar17 == 0) || (lVar29 = param_2[1], (longlong)(int)lVar29 == 0)) {
    uVar15 = 0;
    goto LAB_148339bb4;
  }
  local_459 = *param_3;
  local_458 = param_1;
  local_450 = param_3;
  local_438 = param_4;
  if (local_459 == '\0') {
    lVar3 = *param_2;
    lVar31 = 0;
    do {
      FUN_146c2d498(lVar17,*(undefined4 *)(lVar3 + lVar31));
      lVar31 = lVar31 + 4;
    } while ((longlong)(int)lVar29 * 4 != lVar31);
  }
  local_468 = 0;
  FUN_1411b354a(local_2a0,0,0,0);
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = (undefined1 *)0x0;
  local_2b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  plVar30 = local_458;
  if ((longlong)(int)param_2[1] != 0) {
    puVar25 = (uint *)*param_2;
    local_448 = puVar25 + (int)param_2[1];
    do {
      uVar21 = *puVar25;
      if (local_459 == '\0') {
        lVar17 = *(longlong *)(*(longlong *)(*plVar30 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
        uVar9 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
        local_3b8 = *(double *)(lVar17 + (ulonglong)(uVar21 & 0x1ff) * 0xc);
LAB_148339d9a:
        plStack_3b0 = (longlong *)CONCAT44(plStack_3b0._4_4_,uVar9);
        local_418 = -1;
        uStack_410 = CONCAT44(uStack_410._4_4_,0xffffffff);
        lVar17 = 0;
        do {
          uVar7 = *(uint *)((longlong)&local_3b8 + lVar17 * 4);
          if ((int)uStack_2f0 != local_2c4) {
            puVar13 = local_2b8;
            if (local_2b8 == (undefined1 *)0x0) {
              puVar13 = local_2c0;
            }
            iVar8 = *(int *)(puVar13 + (ulonglong)(local_2b0 - 1U & uVar7) * 4);
            while (iVar8 != -1) {
              lVar29 = local_2f8 + (longlong)iVar8 * 0x10;
              if (*(uint *)(local_2f8 + (longlong)iVar8 * 0x10) == uVar7) {
                if ((lVar29 != 0) && ((undefined4 *)(lVar29 + 4) != (undefined4 *)0x0)) {
                  *(undefined4 *)((longlong)&local_418 + lVar17 * 4) = *(undefined4 *)(lVar29 + 4);
                  goto LAB_148339f66;
                }
                break;
              }
              iVar8 = *(int *)(lVar29 + 8);
            }
          }
          if (local_459 != '\0') {
            uVar7 = *(uint *)(*(longlong *)
                               (*(longlong *)(plVar30[1] + 0x60) + (ulonglong)(uVar7 >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 4);
          }
          lVar29 = *(longlong *)(*(longlong *)(*plVar30 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          local_3f8 = *(longlong **)(lVar29 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          puVar2 = (undefined8 *)(lVar29 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          local_398 = (undefined4 *)*puVar2;
          local_408 = (longlong *)*puVar2;
          puStack_390 = (undefined4 *)puVar2[1];
          uStack_400 = (double)puVar2[1];
          uStack_378 = DAT_14c846338;
          uStack_380 = (undefined3)DAT_14c846330;
          uStack_37d = (undefined5)((ulonglong)DAT_14c846330 >> 0x18);
          local_36c = DAT_14c846338;
          uStack_374 = (undefined7)DAT_14c846330;
          uStack_36d = (undefined1)((ulonglong)DAT_14c846330 >> 0x38);
          uStack_368 = (undefined4)DAT_14c84635c;
          uStack_364 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
          local_360 = 0;
          local_35e = 0;
          local_388 = local_3f8;
          local_3dc = FUN_146c02208(local_2a0,&local_398);
          uVar15 = uStack_3c0;
          lVar29 = (longlong)(int)uStack_3c0;
          uVar7 = (int)uStack_3c0 + 1;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar7);
          if (uStack_3c0._4_4_ < uVar7) {
            FUN_1446f48e2(&local_3c8,uVar15 & 0xffffffff);
          }
          local_398 = (undefined4 *)((longlong)&local_3b8 + lVar17 * 4);
          *(undefined4 *)(local_3c8 + lVar29 * 4) = *local_398;
          puStack_390 = &local_3dc;
          FUN_140263e2a(&local_2f8,&local_424,&local_398,0);
          *(undefined4 *)((longlong)&local_418 + lVar17 * 4) = local_3dc;
          plVar30 = local_458;
LAB_148339f66:
          lVar17 = lVar17 + 1;
        } while (lVar17 != 3);
        FUN_146c01152(local_2a0,&local_418);
        uVar15 = uStack_3d0;
        lVar17 = (longlong)(int)uStack_3d0;
        uVar7 = (int)uStack_3d0 + 1;
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar7);
        if (uStack_3d0._4_4_ < uVar7) {
          FUN_1446f48e2(&local_3d8,uVar15 & 0xffffffff);
        }
        *(uint *)(local_3d8 + lVar17 * 4) = uVar21;
        plVar30 = local_458;
      }
      else {
        uVar7 = uVar21 * 3;
        lVar17 = *(longlong *)(plVar30[1] + 0x78);
        iVar8 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < iVar8) {
          uVar9 = *(undefined4 *)
                   (*(longlong *)(lVar17 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                   (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          local_3b8 = (double)CONCAT44(*(undefined4 *)
                                        (*(longlong *)(lVar17 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4),iVar8);
          goto LAB_148339d9a;
        }
      }
      puVar25 = puVar25 + 1;
    } while (puVar25 != local_448);
  }
  puStack_390 = (undefined4 *)0x0;
  uStack_378 = 0;
  uStack_374 = 0;
  local_388 = (longlong *)0x0;
  uStack_380 = 0;
  uStack_37d = 0;
  local_36c = 2;
  uStack_368 = 1;
  local_358 = 0;
  local_348 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_398 = local_2a0;
  FUN_146c68b4c(&local_398);
  iVar8 = FUN_146c689da(&local_398);
  pcVar4 = local_450;
  if (iVar8 == -1) {
    FUN_1482f1656(&local_398);
    uVar15 = 0;
  }
  else {
    plVar32 = (longlong *)(puStack_390 + (longlong)iVar8 * 0x10 + 2);
    uVar21 = puStack_390[(longlong)iVar8 * 0x10 + 4];
    uVar15 = (ulonglong)uVar21;
    if (local_450[1] == '\x01') {
      FUN_1483a1bd5(&local_408,local_2a0,local_450[2]);
      plVar18 = local_408;
      if (0 < (int)uVar21) {
        uVar23 = 0;
        do {
          local_408 = (longlong *)0x0;
          uStack_400 = 0.0;
          local_468 = 0;
          (**(code **)(*plVar18 + 8))(plVar18,*(undefined4 *)(*plVar32 + uVar23 * 4),0,&local_408);
          uVar23 = uVar23 + 1;
        } while (uVar15 != uVar23);
      }
      pplVar22 = &local_408;
      bVar20 = 0;
LAB_14833a125:
      local_408 = (longlong *)0x0;
      uStack_400 = 0.0;
      cVar6 = (**(code **)(*plVar18 + 0x30))(plVar18,local_2a0);
      plVar32 = local_438;
      if (cVar6 == '\0') {
        uVar15 = 0;
      }
      else {
        if ((bVar20 & 1) != 0) {
          dVar35 = (double)unaff_XMM8_Da - (double)local_408[(longlong)(int)pplVar22 * 2 + 1];
          dVar34 = (double)unaff_XMM7_Da - (double)local_408[(longlong)(int)pplVar22 * 2];
          if (((((dVar34 != 0.0) || (NAN(dVar34))) || (dVar35 != 0.0)) || (NAN(dVar35))) &&
             (0 < (longlong)(int)uStack_3c0)) {
            lVar17 = 0;
            do {
              *(double *)((longlong)local_408 + lVar17) =
                   *(double *)((longlong)local_408 + lVar17) + dVar34;
              *(double *)((longlong)local_408 + lVar17 + 8) =
                   *(double *)((longlong)local_408 + lVar17 + 8) + dVar35;
              lVar17 = lVar17 + 0x10;
            } while ((longlong)(int)uStack_3c0 * 0x10 != lVar17);
          }
        }
        if (local_459 == '\0') {
          local_3b8 = 0.0;
          plStack_3b0 = (longlong *)0x0;
          local_418 = 0;
          uStack_410 = 0;
          FUN_1448156a8(&local_3b8,&DAT_149f3b668,local_280 * 0x200 + local_27c);
          uVar7 = local_280 * 0x200 + local_27c;
          uVar21 = 0;
          if ((uVar7 != 0) && (uVar21 = 0, 0xfffd < (ushort)(*(short *)*local_278 - 1U))) {
            uVar10 = 1;
            uVar12 = 1;
            if (1 < (int)uVar7) {
              uVar10 = uVar7;
            }
            do {
              uVar21 = uVar10;
              if (uVar10 == uVar12) break;
              uVar16 = uVar12 >> 9;
              uVar26 = uVar12 & 0x1ff;
              uVar21 = uVar12;
              uVar12 = uVar12 + 1;
            } while (0xfffd < (ushort)(*(short *)(local_278[uVar16] + (ulonglong)uVar26 * 2) - 1U));
          }
          if (uVar21 != uVar7) {
            pplVar22 = (longlong **)&local_424;
            do {
              lVar17 = (longlong)(int)uVar21;
              local_424._4_4_ = (float)(double)local_408[lVar17 * 2 + 1];
              local_424._0_4_ = (float)(double)local_408[lVar17 * 2];
              uVar9 = FUN_146c2d0a4(local_458[1],pplVar22);
              dVar35 = local_3b8;
              uVar15 = uStack_410;
              *(undefined4 *)((longlong)local_3b8 + lVar17 * 4) = uVar9;
              lVar29 = (longlong)(int)uStack_410;
              uVar10 = (int)uStack_410 + 1;
              uStack_410 = CONCAT44(uStack_410._4_4_,uVar10);
              if (uStack_410._4_4_ < uVar10) {
                FUN_1446f48e2(&local_418,uVar15 & 0xffffffff);
              }
              *(undefined4 *)(local_418 + lVar29 * 4) =
                   *(undefined4 *)((longlong)dVar35 + lVar17 * 4);
              uVar10 = uVar21 + 1;
              if ((int)(uVar21 + 1) < (int)uVar7) {
                uVar10 = uVar7;
              }
              do {
                uVar12 = uVar10;
                if (uVar10 - 1 == uVar21) break;
                uVar21 = uVar21 + 1;
                uVar12 = uVar21;
              } while (0xfffd < (ushort)(*(short *)(local_278[uVar21 >> 9] +
                                                   (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
              uVar21 = uVar12;
            } while (uVar21 != uVar7);
          }
          uVar21 = 0;
          uVar7 = local_160 * 0x200 + local_15c;
          if ((uVar7 != 0) && (uVar21 = 0, 0xfffd < (ushort)(*(short *)*local_158 - 1U))) {
            uVar10 = 1;
            uVar12 = 1;
            if (1 < (int)uVar7) {
              uVar10 = uVar7;
            }
            do {
              uVar21 = uVar10;
              if (uVar10 == uVar12) break;
              uVar16 = uVar12 >> 9;
              uVar26 = uVar12 & 0x1ff;
              uVar21 = uVar12;
              uVar12 = uVar12 + 1;
            } while (0xfffd < (ushort)(*(short *)(local_158[uVar16] + (ulonglong)uVar26 * 2) - 1U));
          }
          uVar15 = CONCAT71((int7)((ulonglong)pplVar22 >> 8),1);
          if (uVar21 != uVar7) {
            iVar8 = 0;
            do {
              lVar17 = *(longlong *)(local_170 + (ulonglong)(uVar21 >> 9) * 8);
              uVar15 = (ulonglong)(uVar21 & 0x1ff);
              local_424._0_4_ =
                   *(float *)((longlong)local_3b8 + (longlong)*(int *)(lVar17 + uVar15 * 0xc) * 4);
              local_424._4_4_ =
                   *(float *)((longlong)local_3b8 +
                             (longlong)*(int *)(lVar17 + 4 + uVar15 * 0xc) * 4);
              local_41c = *(int *)((longlong)local_3b8 +
                                  (longlong)*(int *)(lVar17 + 8 + uVar15 * 0xc) * 4);
              if ((((float)local_424 == -NAN) || (local_424._4_4_ == -NAN)) || (local_41c == -1)) {
                iVar8 = iVar8 + 1;
              }
              else {
                FUN_146c01486(local_458[1],*(undefined4 *)(local_3d8 + (longlong)(int)uVar21 * 4),
                              &local_424,1);
              }
              uVar10 = uVar21 + 1;
              if ((int)(uVar21 + 1) < (int)uVar7) {
                uVar10 = uVar7;
              }
              do {
                uVar12 = uVar10;
                if (uVar10 - 1 == uVar21) break;
                uVar21 = uVar21 + 1;
                uVar12 = uVar21;
              } while (0xfffd < (ushort)(*(short *)(local_158[uVar21 >> 9] +
                                                   (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
              uVar21 = uVar12;
            } while (uVar21 != uVar7);
            uVar15 = CONCAT71((int7)((ulonglong)&local_424 >> 8),iVar8 == 0);
          }
          plVar30 = local_438;
          if (&local_418 == local_438 || local_438 == (longlong *)0x0) {
            if (local_418 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*local_438 != 0) {
              FUN_1400020a8();
            }
            *plVar30 = local_418;
            local_418 = 0;
            *(int *)(plVar30 + 1) = (int)uStack_410;
            *(uint *)((longlong)plVar30 + 0xc) = uStack_410._4_4_;
          }
          if (local_3b8 != 0.0) {
            FUN_1400020a8();
          }
        }
        else {
          if (0 < (longlong)(int)uStack_3c0) {
            lVar17 = 0;
            do {
              lVar29 = plVar30[1];
              uVar15 = (ulonglong)(*(uint *)(local_3c8 + lVar17) >> 5 & 0x3fffff8);
              dVar35 = *(double *)((longlong)local_408 + lVar17 * 4 + 8);
              uVar23 = (ulonglong)((*(uint *)(local_3c8 + lVar17) & 0xff) << 3);
              *(float *)(*(longlong *)(*(longlong *)(lVar29 + 0x48) + uVar15) + uVar23) =
                   (float)*(double *)((longlong)local_408 + lVar17 * 4);
              *(float *)(*(longlong *)(*(longlong *)(lVar29 + 0x48) + uVar15) + 4 + uVar23) =
                   (float)dVar35;
              lVar17 = lVar17 + 4;
            } while ((longlong)(int)uStack_3c0 * 4 != lVar17);
          }
          uVar15 = CONCAT71((int7)((ulonglong)pplVar22 >> 8),1);
          if (&local_3c8 != local_438 && local_438 != (longlong *)0x0) {
            if (*local_438 != 0) {
              FUN_1400020a8();
            }
            *plVar32 = local_3c8;
            local_3c8 = 0;
            *(int *)(plVar32 + 1) = (int)uStack_3c0;
            *(uint *)((longlong)plVar32 + 0xc) = uStack_3c0._4_4_;
            uStack_3c0 = 0;
          }
        }
      }
      if (local_408 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1483a1b93(&local_408,local_2a0);
      plVar18 = local_408;
      plVar30 = *(longlong **)(pcVar4 + 8);
      iVar8 = 0;
      bVar19 = 0;
      if (plVar30 != (longlong *)0x0) {
        plVar1 = plVar30 + 2;
        local_3b8 = 2.12199579096527e-314;
        plStack_3b0 = plVar1;
        local_3a8 = 0xffffffff;
        local_3a0 = 0;
        if ((int)plVar30[5] != 0) {
          FUN_1449c0562(&local_3b8);
          iVar8 = (int)plVar30[5];
        }
        uStack_400 = local_3b8;
        local_3f8 = plStack_3b0;
        local_3f0 = local_3a8;
        uVar5 = local_3f0;
        local_3e8 = local_3a0;
        local_3e4 = local_39c;
        local_3f0._4_4_ = (int)((ulonglong)local_3a8 >> 0x20);
        local_408 = plVar30;
        if ((local_3f0._4_4_ == iVar8) && (plStack_3b0 == plVar1)) {
          local_3f0 = local_3a8;
          bVar19 = 0;
          goto LAB_14833a2e3;
        }
        local_448 = (uint *)((ulonglong)local_448 & 0xffffffff00000000);
        local_450 = (char *)((ulonglong)local_450 & 0xffffffff00000000);
        iVar11 = local_3f0._4_4_;
        local_3f0 = uVar5;
        do {
          uVar7 = *(uint *)(*local_408 + (longlong)iVar11 * 0xc);
          if ((-1 < (int)uVar7) &&
             (lVar17 = local_458[1],
             (int)uVar7 < *(int *)(lVar17 + 8) * 0x200 + *(int *)(lVar17 + 0xc))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                                   (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe) {
              uVar10 = uVar7;
              if (local_459 == '\0') {
                uVar10 = *(uint *)(*(longlong *)
                                    (*(longlong *)(lVar17 + 0x60) + (ulonglong)(uVar7 >> 9) * 8) +
                                  (ulonglong)(uVar7 & 0x1ff) * 4);
              }
              if ((int)uStack_2f0 != local_2c4) {
                puVar13 = local_2b8;
                if (local_2b8 == (undefined1 *)0x0) {
                  puVar13 = local_2c0;
                }
                iVar11 = *(int *)(puVar13 + (ulonglong)(local_2b0 - 1U & uVar10) * 4);
                while (iVar11 != -1) {
                  lVar29 = local_2f8 + (longlong)iVar11 * 0x10;
                  if (*(uint *)(local_2f8 + (longlong)iVar11 * 0x10) == uVar10) {
                    puVar25 = (uint *)(lVar29 + 4);
                    if (puVar25 != (uint *)0x0 && lVar29 != 0) {
                      local_430 = (ulonglong)(uVar7 >> 8);
                      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x48) + local_430 * 8);
                      uVar23 = (ulonglong)((uVar7 & 0xff) * 2);
                      plStack_3b0 = (longlong *)(double)*(float *)(lVar17 + 4 + uVar23 * 4);
                      local_3b8 = (double)*(float *)(lVar17 + uVar23 * 4);
                      local_468 = 0;
                      (**(code **)(*plVar18 + 8))
                                (plVar18,*puVar25,puVar25 == (uint *)0x0 || lVar29 == 0,&local_3b8);
                      local_448 = (uint *)CONCAT44(local_448._4_4_,(int)local_448 + 1);
                      if (((ulonglong)local_450 & 1) == 0) {
                        lVar17 = *(longlong *)(*(longlong *)(local_458[1] + 0x48) + local_430 * 8);
                        unaff_XMM7_Da = *(float *)(lVar17 + uVar23 * 4);
                        unaff_XMM8_Da = *(float *)(lVar17 + (uVar23 + 1) * 4);
                        local_43c = *puVar25;
                        local_450 = (char *)CONCAT44(local_450._4_4_,
                                                     (int)CONCAT71((uint7)(uint3)(local_43c >> 8),1)
                                                    );
                      }
                    }
                    break;
                  }
                  iVar11 = *(int *)(lVar29 + 8);
                }
              }
            }
          }
          local_3f0 = CONCAT44(local_3f0._4_4_,(uint)local_3f0 & ~uStack_400._4_4_);
          FUN_1449c0562(&uStack_400);
          iVar11 = local_3f0._4_4_;
        } while (local_408 != plVar30 || (local_3f8 != plVar1 || local_3f0._4_4_ != iVar8));
        bVar20 = 0;
        if (((ulonglong)local_450 & 1) == 0) {
          bVar20 = (byte)local_450;
        }
        bVar19 = (byte)local_450;
        if ((int)local_448 < 2) goto LAB_14833a2e3;
LAB_14833a55b:
        pplVar22 = (longlong **)(ulonglong)local_43c;
        plVar30 = local_458;
        goto LAB_14833a125;
      }
LAB_14833a2e3:
      (**(code **)(*plVar18 + 0x20))(plVar18);
      uVar7 = 0xffffffff;
      uVar10 = 0xffffffff;
      if (0 < (int)uVar21) {
        uVar9 = 0;
        uVar33 = 0;
        uVar14 = 1;
        uVar23 = 0;
        do {
          uVar27 = uVar23 + 1;
          if (uVar27 < uVar15) {
            lVar17 = *plVar32;
            uVar21 = *(uint *)(lVar17 + uVar23 * 4);
            lVar29 = *(longlong *)(local_290 + (ulonglong)(uVar21 >> 9) * 8);
            uVar24 = (ulonglong)(uVar21 & 0x1ff);
            uVar23 = uVar14;
            do {
              uVar12 = *(uint *)(lVar17 + uVar23 * 4);
              lVar3 = *(longlong *)(local_290 + (ulonglong)(uVar12 >> 9) * 8);
              uVar28 = (ulonglong)(uVar12 & 0x1ff);
              dVar36 = *(double *)(lVar3 + uVar28 * 0x18) - *(double *)(lVar29 + uVar24 * 0x18);
              dVar35 = *(double *)(lVar3 + 8 + uVar28 * 0x18) -
                       *(double *)(lVar29 + 8 + uVar24 * 0x18);
              dVar34 = *(double *)(lVar3 + 0x10 + uVar28 * 0x18) -
                       *(double *)(lVar29 + 0x10 + uVar24 * 0x18);
              dVar35 = dVar34 * dVar34 + dVar36 * dVar36 + dVar35 * dVar35;
              if ((double)CONCAT44(uVar33,uVar9) <= dVar35 &&
                  dVar35 != (double)CONCAT44(uVar33,uVar9)) {
                uVar10 = uVar12;
                uVar7 = uVar21;
              }
              if (dVar35 <= (double)CONCAT44(uVar33,uVar9)) {
                dVar35 = (double)CONCAT44(uVar33,uVar9);
              }
              uVar23 = uVar23 + 1;
              uVar9 = SUB84(dVar35,0);
              uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
            } while (uVar15 != uVar23);
          }
          else {
            dVar35 = (double)CONCAT44(uVar33,uVar9);
          }
          uVar14 = uVar14 + 1;
          uVar9 = SUB84(dVar35,0);
          uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
          uVar23 = uVar27;
        } while (uVar27 != uVar15);
      }
      if ((uVar7 != 0xffffffff) || (uVar10 != 0xffffffff)) {
        local_408 = (longlong *)0x0;
        uStack_400 = 0.5;
        local_468 = 0;
        (**(code **)(*plVar18 + 8))(plVar18,uVar7,0x3ff0000000000000,&local_408);
        local_408 = (longlong *)0x3ff0000000000000;
        uStack_400 = 0.5;
        local_468 = 0;
        (**(code **)(*plVar18 + 8))(plVar18,uVar10,0x3ff0000000000000,&local_408);
        bVar20 = bVar19;
        goto LAB_14833a55b;
      }
      uVar15 = 0;
    }
    FUN_1482f1656(&local_398);
    if (plVar18 != (longlong *)0x0) {
      (**(code **)*plVar18)(plVar18,1);
    }
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  local_2b0 = 0;
  if (local_2b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_2f8);
  FUN_141082778(local_2a0);
LAB_148339bb4:
  if ((local_80 ^ (ulonglong)local_488) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833aaea FUN_14833aaea body=87 status=ok
// SIG undefined FUN_14833aaea(void)

void FUN_14833aaea(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_38 [32];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  local_17 = 1;
  local_18 = param_3;
  local_16 = param_4;
  FUN_148339b5e(param_1,param_2,&local_18,param_5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833ab42 FUN_14833ab42 body=2738 status=ok
// SIG undefined FUN_14833ab42(void)

void FUN_14833ab42(longlong *param_1,longlong ****param_2,undefined8 *param_3,double *param_4,
                  double *param_5,int param_6,longlong *param_7)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong ***ppplVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  bool bVar15;
  double *pdVar16;
  uint *puVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 local_2d8 [32];
  undefined1 **local_2b8;
  undefined4 local_2b0;
  uint **local_2a8;
  longlong *local_298;
  double *local_290;
  double *local_288;
  ulonglong local_280;
  double *local_278;
  longlong ***local_270;
  undefined8 *local_268;
  ulonglong local_260;
  ulonglong local_258;
  longlong local_250;
  float local_248;
  float local_244;
  double local_240 [4];
  double local_220;
  double local_218;
  uint local_20c;
  int local_208;
  uint local_204 [3];
  undefined8 local_1f8;
  undefined4 local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong ****local_1d8;
  double dStack_1d0;
  double local_1c8;
  uint **local_1c0;
  longlong ****local_1b8;
  longlong *local_1b0;
  undefined1 *local_1a8;
  uint ***local_1a0;
  undefined1 *local_198;
  longlong ****local_190;
  longlong local_188 [7];
  double local_150;
  double local_148;
  double local_140;
  longlong *local_138;
  undefined8 *local_130;
  undefined1 local_124 [4];
  uint *local_120;
  undefined8 local_118;
  double dStack_110;
  longlong ***local_108;
  longlong *plStack_100;
  longlong **local_f8;
  double *pdStack_f0;
  double *local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_2d8;
  lVar22 = param_1[1];
  local_288 = param_4;
  local_268 = param_3;
  if ((lVar22 == 0) || (uVar12 = (ulonglong)*(int *)(param_2 + 1), uVar12 == 0)) goto LAB_14833ab98;
  ppplVar5 = *param_2;
  lVar21 = 0;
  local_298 = param_1;
  local_280 = uVar12;
  do {
    FUN_146c2d498(lVar22,*(undefined4 *)((longlong)ppplVar5 + lVar21),1);
    uVar7 = local_280;
    plVar18 = local_298;
    lVar21 = lVar21 + 4;
  } while (uVar12 * 4 - lVar21 != 0);
  local_138 = local_298;
  local_130 = local_268;
  dVar2 = *param_5;
  dVar3 = param_5[1];
  uVar12 = -(ulonglong)(-dVar2 <= dVar2);
  uVar12 = -(ulonglong)
            (9.999999974752427e-07 <
            (double)(uVar12 & (ulonglong)dVar2 | ~uVar12 & (ulonglong)-dVar2));
  local_150 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar2) & uVar12);
  uVar12 = -(ulonglong)(-dVar3 <= dVar3);
  uVar12 = -(ulonglong)
            (9.999999974752427e-07 <
            (double)(uVar12 & (ulonglong)dVar3 | ~uVar12 & (ulonglong)-dVar3));
  local_148 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar3) & uVar12);
  dVar2 = param_5[2];
  uVar12 = -(ulonglong)(-dVar2 <= dVar2);
  uVar12 = -(ulonglong)
            (9.999999974752427e-07 <
            (double)(uVar12 & (ulonglong)dVar2 | ~uVar12 & (ulonglong)-dVar2));
  local_140 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar2) & uVar12);
  local_188[4] = 0;
  local_188[5] = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  iVar19 = (int)local_280;
  FUN_14051b394(local_188 + 4,local_280 & 0xffffffff,1);
  FUN_146c63922(local_188 + 2,uVar7 & 0xffffffff,1);
  local_188[0] = 0;
  local_188[1] = 0;
  FUN_144a1a59e(local_188,*(int *)(*plVar18 + 0x140) * 0x200 + *(int *)(*plVar18 + 0x144),1);
  plStack_100 = local_188 + 4;
  local_f8 = &local_138;
  pdStack_f0 = local_288;
  local_120 = (uint *)0x0;
  local_118 = (uint *)((ulonglong)local_118._4_4_ << 0x20);
  local_1c0 = (uint **)FUN_143b0fae6;
  local_2b0 = 0;
  iVar14 = 1;
  local_2a8 = &local_120;
  local_270 = (longlong ***)param_2;
  local_1b8 = &local_108;
  local_108 = (longlong ***)param_2;
  local_e8 = &local_150;
  uStack_e0 = local_188 + 2;
  uStack_d8 = local_188;
  FUN_1401f8d10(L"ParallelFor Task",uVar7 & 0xffffffff,1,&local_1c0);
  plVar18 = local_298;
  if (1 < param_6) {
    local_120 = (uint *)*local_298;
    local_118 = (uint *)0x0;
    dStack_110 = 0.0;
    local_a8 = 0;
    local_98 = &PTR_LAB_14ae74890;
    local_88 = local_188;
    local_b8 = &LAB_143b0fda2;
    local_90 = local_188 + 2;
    FUN_142984384(&local_120,local_270);
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_d0 = 0;
    local_e8 = (double *)0x0;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    local_f8 = (longlong **)0x0;
    pdStack_f0 = (double *)0x0;
    local_108 = (longlong ***)0x0;
    plStack_100 = (longlong *)0x0;
    local_2b8 = &local_198;
    local_198 = &LAB_14837425c;
    local_1b0 = local_188;
    local_1a8 = &LAB_143b0fe1e;
    local_1c0 = &local_120;
    local_1b8 = (longlong ****)(local_188 + 2);
    local_1a0 = &local_1c0;
    local_190 = (longlong ****)&local_1d8;
    FUN_14833b5f6(&local_108,*plVar18,&local_120);
    param_6 = param_6 + -1;
    bVar15 = false;
    local_1d8 = &local_108;
    do {
      if (param_6 <= iVar14) {
        local_1c0 = (uint **)&LAB_143b0fe48;
        local_1b8 = (longlong ****)&local_1d8;
        cVar8 = FUN_148341f7e(&local_108,iVar14);
        if (cVar8 == '\0') goto LAB_14833af4f;
      }
      iVar14 = iVar14 + 1;
      if (param_6 <= iVar14) {
        iVar14 = param_6;
      }
      bVar15 = true;
    } while( true );
  }
  goto LAB_14833b0d1;
LAB_14833af4f:
  bVar9 = FUN_14833b89c(&local_108,0x19);
  if (bVar15 || (bVar9 & 1) != 0) {
    local_290 = (double *)(longlong)(int)plStack_100;
    if (0 < (longlong)local_290) {
      local_278 = local_288 + 3;
      pdVar16 = (double *)0x0;
      do {
        if ((((longlong)pdVar16 < (longlong)(int)plStack_100) &&
            (*(char *)(local_108 + (longlong)pdVar16 * 6) != '\0')) &&
           (iVar14 = *(int *)(local_108 + (longlong)pdVar16 * 6 + 2), (longlong)iVar14 != 0)) {
          iVar19 = *(int *)((longlong)local_108 + (longlong)pdVar16 * 0x30 + 4);
          ppplVar5 = (longlong ***)local_108[(longlong)pdVar16 * 6 + 1];
          lVar22 = 0;
          do {
            iVar4 = *(int *)(local_188[0] + (longlong)*(int *)((longlong)ppplVar5 + lVar22) * 4);
            FUN_146bf2028(local_278,&local_1d8);
            local_1c0 = (uint **)((double)local_1d8 * local_150);
            local_1b8 = (longlong ****)(dStack_1d0 * local_148);
            local_1b0 = (longlong *)(local_1c8 * local_140);
            iVar6 = iVar19;
            if (0.0 < (double)(&local_1c0)[iVar19]) {
              iVar6 = iVar19 + 3;
            }
            *(ulonglong *)(local_188[2] + (longlong)iVar4 * 8) = CONCAT44(iVar6,iVar19);
            lVar22 = lVar22 + 4;
          } while ((longlong)iVar14 * 4 != lVar22);
        }
        pdVar16 = (double *)((longlong)pdVar16 + 1);
      } while (pdVar16 != local_290);
    }
  }
  FUN_14833badc(&local_108);
  FUN_146be9400(&local_118);
  iVar19 = (int)local_280;
LAB_14833b0d1:
  local_e8 = (double *)0x0;
  uStack_e0._0_4_ = 0;
  local_108 = (longlong ***)0x0;
  plStack_100 = (longlong *)0x0;
  uStack_e0._4_4_ = 0x80;
  uStack_d8._0_4_ = 0xffffffff;
  uStack_d8._4_4_ = 0;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  plVar18 = local_298;
  if (0 < iVar19) {
    local_290 = local_288 + 3;
    uVar12 = 0;
    do {
      uVar11 = *(uint *)((longlong)*local_270 + uVar12 * 4);
      local_260 = (ulonglong)uVar11;
      lVar22 = *(longlong *)(*(longlong *)(*plVar18 + 0x130) + (ulonglong)(uVar11 >> 9) * 8);
      local_1f0 = *(undefined4 *)(lVar22 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      local_1f8 = *(undefined8 *)(lVar22 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
      lVar22 = (longlong)*(int *)(local_188[2] + uVar12 * 8);
      iVar14 = *(int *)(local_188[2] + 4 + uVar12 * 8);
      local_258 = uVar12;
      FUN_146bf2028(local_290,&local_1c0,uVar12 * 0x18 + local_188[4]);
      iVar19 = -(uint)((double)(&local_1c0)[lVar22] < 0.0);
      if (0.0 < (double)(&local_1c0)[lVar22]) {
        iVar19 = 1;
      }
      local_278 = (double *)(longlong)*(int *)(&DAT_14ae731e8 + lVar22 * 4);
      local_250 = (longlong)*(int *)(&DAT_14ae731f4 + lVar22 * 4);
      local_204[0] = 0xffffffff;
      local_204[1] = 0xffffffff;
      local_204[2] = 0xffffffff;
      lVar21 = 0;
      do {
        uVar11 = *(uint *)((longlong)&local_1f8 + lVar21 * 4);
        local_20c = uVar11;
        local_208 = iVar14;
        uVar10 = FUN_1448eb174(&local_20c,8,0);
        if ((int)plStack_100 != uStack_d8._4_4_) {
          puVar13 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar13 = &uStack_d0;
          }
          uVar10 = *(uint *)((longlong)puVar13 + (ulonglong)(local_c0 - 1U & uVar10) * 4);
          while (uVar10 != 0xffffffff) {
            puVar17 = (uint *)((longlong)local_108 + (longlong)(int)uVar10 * 0x14);
            if ((*puVar17 == local_20c) &&
               (*(int *)((longlong)local_108 + (longlong)(int)uVar10 * 0x14 + 4) == local_208)) {
              if ((puVar17 != (uint *)0x0) && (puVar17 + 2 != (uint *)0x0)) {
                local_204[lVar21] = puVar17[2];
                goto LAB_14833b4d9;
              }
              break;
            }
            uVar10 = puVar17[3];
          }
        }
        lVar20 = *(longlong *)(*(longlong *)(*plVar18 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
        local_1c8 = *(double *)(lVar20 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
        plVar1 = (longlong *)(lVar20 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
        local_1d8 = (longlong ****)*plVar1;
        dStack_1d0 = (double)plVar1[1];
        (*(code *)*local_268)(local_240 + 3,local_268[1],&local_1d8);
        dStack_110 = local_218 - local_288[2];
        local_118 = (uint *)(local_220 - local_288[1]);
        local_120 = (uint *)(local_240[3] - *local_288);
        FUN_146bf2028(local_290,local_240,&local_120);
        local_240[0] = local_150 * local_240[0];
        local_240[1] = local_148 * local_240[1];
        local_240[2] = local_140 * local_240[2];
        local_244 = (float)local_240[local_250] * (float)*(int *)(&DAT_14ae7320c + lVar22 * 4);
        local_248 = (float)local_240[(longlong)local_278] *
                    (float)(*(int *)(&DAT_14ae73200 + lVar22 * 4) * iVar19);
        uVar11 = FUN_146c2d0a4(plVar18[1],&local_248);
        uVar12 = uStack_1e0;
        puVar17 = local_204 + lVar21;
        *puVar17 = uVar11;
        lVar20 = (longlong)(int)uStack_1e0;
        uVar10 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar10);
        if (uStack_1e0._4_4_ < uVar10) {
          FUN_1446f48e2(&local_1e8,uVar12 & 0xffffffff);
          uVar11 = *puVar17;
        }
        *(uint *)(local_1e8 + lVar20 * 4) = uVar11;
        local_120 = &local_20c;
        local_118 = puVar17;
        FUN_146fb1fa8(&local_108,local_124,&local_120,0);
        plVar18 = local_298;
LAB_14833b4d9:
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
      FUN_146c01486(plVar18[1],local_260,local_204);
      uVar12 = local_258 + 1;
    } while (uVar12 != local_280);
  }
  FUN_14833bb32(plVar18,&local_1e8);
  if (&local_1e8 == param_7 || param_7 == (longlong *)0x0) {
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_7 != 0) {
      FUN_1400020a8();
    }
    *param_7 = local_1e8;
    local_1e8 = 0;
    *(int *)(param_7 + 1) = (int)uStack_1e0;
    *(uint *)((longlong)param_7 + 0xc) = uStack_1e0._4_4_;
  }
  local_c0 = 0;
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146be7e8c(&local_108);
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  if (local_188[2] != 0) {
    FUN_1400020a8();
  }
  if (local_188[4] != 0) {
    FUN_1400020a8();
  }
LAB_14833ab98:
  if ((local_70 ^ (ulonglong)local_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833b5f6 FUN_14833b5f6 body=530 status=ok
// SIG undefined FUN_14833b5f6(void)

void FUN_14833b5f6(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  int *local_68;
  undefined8 local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = *(int *)(param_3 + 0x10);
  local_90 = param_3;
  local_88 = param_4;
  FUN_1483419a2(param_1,iVar8);
  local_78 = param_1 + 2;
  local_5c = CONCAT44(local_5c._4_4_,0xffffffff);
  FUN_1448156a8(local_78,&local_5c,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  local_80 = param_1 + 4;
  local_5c = 0xffffffffffffffff;
  local_54 = 0xffffffff;
  local_70 = param_2;
  FUN_146badbc8(local_80,&local_5c,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  if (0 < (longlong)iVar8) {
    lVar7 = 0;
    local_a0 = (longlong)iVar8;
    local_98 = param_1;
    do {
      lVar6 = local_90;
      plVar3 = local_98;
      FUN_14054c6c4(*local_98 + lVar7 * 0x30 + 8,
                    *(undefined8 *)(*(longlong *)(local_90 + 8) + lVar7 * 8));
      local_5c = CONCAT44(local_5c._4_4_,(int)lVar7);
      uVar5 = (*(code *)*local_88)(local_88[1],&local_5c);
      *(undefined4 *)(*plVar3 + 4 + lVar7 * 0x30) = uVar5;
      puVar2 = *(undefined8 **)(*(longlong *)(lVar6 + 8) + lVar7 * 8);
      lVar6 = (longlong)*(int *)(puVar2 + 1);
      if (lVar6 != 0) {
        piVar10 = (int *)*puVar2;
        local_68 = piVar10 + lVar6;
        do {
          iVar8 = *piVar10;
          lVar9 = (longlong)iVar8;
          *(int *)(*local_78 + lVar9 * 4) = (int)lVar7;
          FUN_146c03f0e(local_70,&local_5c,iVar8);
          lVar6 = 0;
          do {
            iVar1 = *(int *)((longlong)&local_5c + lVar6 * 4);
            if (-1 < iVar1) {
              local_50 = iVar8;
              local_4c = iVar1;
              cVar4 = (*(code *)*param_5)(param_5[1],&local_50,&local_4c);
              if (cVar4 == '\0') {
                *(undefined4 *)((longlong)&local_5c + lVar6 * 4) = 0xffffffff;
              }
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 3);
          lVar6 = *local_80;
          *(undefined4 *)(lVar6 + 8 + lVar9 * 0xc) = local_54;
          *(undefined8 *)(lVar6 + lVar9 * 0xc) = local_5c;
          piVar10 = piVar10 + 1;
        } while (piVar10 != local_68);
      }
      plVar3 = local_98;
      lVar6 = local_a0;
      lVar7 = lVar7 + 1;
    } while (lVar7 != local_a0);
    iVar8 = 0;
    do {
      FUN_148341a1e(plVar3,iVar8);
      iVar8 = iVar8 + 1;
    } while ((int)lVar6 != iVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833b80a FUN_14833b80a body=144 status=ok
// SIG undefined FUN_14833b80a(void)

undefined8 FUN_14833b80a(undefined8 param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = 1;
  uVar2 = 0;
  do {
    if (param_2 <= iVar3) {
      local_48 = *param_3;
      local_40 = param_3[1];
      cVar1 = FUN_148341f7e(param_1,iVar3,&local_48);
      if (cVar1 == '\0') {
        if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    iVar3 = iVar3 + 1;
    if (param_2 <= iVar3) {
      iVar3 = param_2;
    }
    uVar2 = 1;
  } while( true );
}



// FUNCTION 14833b89c FUN_14833b89c body=574 status=ok
// SIG undefined FUN_14833b89c(void)

ulonglong FUN_14833b89c(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [44];
  int local_9c;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  int local_7c;
  int *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = 0;
  local_68 = param_1;
  if (param_2 < 1) {
    local_9c = 0;
  }
  else {
    uVar8 = 1;
    uVar14 = 0;
    local_9c = param_2;
    while( true ) {
      local_78 = (int *)0x0;
      uStack_70 = 0;
      if ((longlong)(int)param_1[1] == 0) break;
      lVar12 = *param_1;
      local_88 = (longlong)(int)param_1[1] * 0x30 + lVar12;
      local_98 = uVar14;
      local_90 = uVar8;
      do {
        iVar1 = *(int *)(lVar12 + 0x10);
        if ((longlong)iVar1 != 0) {
          lVar4 = *(longlong *)(lVar12 + 8);
          lVar10 = 0;
          do {
            uVar2 = *(undefined4 *)(lVar4 + lVar10);
            uVar5 = FUN_143b0a100(&local_68,uVar2);
            uVar14 = uStack_70;
            if (((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[1])) &&
               (*(char *)(*param_1 + (ulonglong)uVar5 * 0x30) != '\0')) {
              lVar9 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_146be54b8(&local_78,uVar14 & 0xffffffff);
              }
              *(ulonglong *)(local_78 + lVar9 * 2) = CONCAT44(uVar5,uVar2);
            }
            lVar10 = lVar10 + 4;
          } while ((longlong)iVar1 * 4 != lVar10);
        }
        uVar14 = local_98;
        lVar12 = lVar12 + 0x30;
      } while (lVar12 != local_88);
      if ((longlong)(int)uStack_70 == 0) {
        if (local_78 != (int *)0x0) {
          FUN_1400020a8(local_78);
        }
        break;
      }
      piVar11 = local_78 + (longlong)(int)uStack_70 * 2;
      piVar13 = local_78;
      do {
        local_7c = *piVar13;
        iVar1 = *(int *)(param_1[2] + (longlong)local_7c * 4);
        iVar3 = piVar13[1];
        iVar7 = FUN_143b0a100(&local_68);
        if (iVar7 == iVar3) {
          FUN_1406b43d8((longlong)iVar1 * 0x30 + *param_1 + 8,&local_7c,0);
          lVar12 = *param_1 + (longlong)iVar3 * 0x30;
          iVar1 = *(int *)(lVar12 + 0x10);
          *(uint *)(lVar12 + 0x10) = iVar1 + 1U;
          if (*(uint *)(lVar12 + 0x14) < iVar1 + 1U) {
            FUN_1446f48e2((longlong *)(lVar12 + 8),iVar1);
          }
          *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar1 * 4) = local_7c;
          *(int *)(param_1[2] + (longlong)local_7c * 4) = iVar3;
          uVar14 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
        }
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar11);
      if (local_78 != (int *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = (ulonglong)((int)local_90 + 1);
      if ((int)local_90 == local_9c) break;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar14 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833badc FUN_14833badc body=86 status=ok
// SIG undefined FUN_14833badc(void)

void FUN_14833badc(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14834e5e0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14833bb32 FUN_14833bb32 body=115 status=ok
// SIG undefined FUN_14833bb32(void)

void FUN_14833bb32(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (lVar3 = param_2[1], 0 < (longlong)(int)lVar3)) {
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(*param_2 + lVar5 * 4);
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)(uVar1 & 0x1ff) * 4);
      cVar4 = FUN_146c2e366(*(longlong *)(param_1 + 8),uVar2);
      if (cVar4 != '\0') {
        FUN_146c2d83e(*(undefined8 *)(param_1 + 8),uVar2,param_2);
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  return;
}



// FUNCTION 14833bba6 FUN_14833bba6 body=2164 status=ok
// SIG undefined FUN_14833bba6(void)

void FUN_14833bba6(longlong *param_1,longlong *param_2,undefined8 *param_3,double *param_4,
                  double *param_5,float param_6,longlong *param_7)

{
  undefined8 *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  double dVar14;
  undefined1 local_2a8 [40];
  undefined4 local_280;
  uint **local_278;
  ulonglong local_270;
  longlong *local_268;
  longlong *local_260;
  double *local_258;
  undefined8 *local_250;
  ulonglong local_248;
  ulonglong local_240;
  float local_238;
  float fStack_234;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  uint local_204;
  int local_200;
  uint local_1fc [3];
  code *local_1f0;
  longlong **local_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [5];
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  longlong *local_170;
  undefined8 *local_168;
  undefined1 local_15c [4];
  uint *local_158;
  undefined8 uStack_150;
  double local_148;
  longlong *local_138;
  longlong **pplStack_130;
  longlong *local_128;
  double *local_120;
  double *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)local_2a8;
  lVar9 = param_1[1];
  local_250 = param_3;
  if ((lVar9 != 0) && (uVar6 = (ulonglong)(int)param_2[1], uVar6 != 0)) {
    lVar11 = *param_2;
    lVar10 = 0;
    local_270 = uVar6;
    local_268 = param_2;
    local_260 = param_1;
    do {
      FUN_146c2d498(lVar9,*(undefined4 *)(lVar11 + lVar10),1);
      plVar12 = local_260;
      lVar10 = lVar10 + 4;
    } while (uVar6 * 4 - lVar10 != 0);
    local_170 = local_260;
    local_168 = local_250;
    dVar14 = *param_5;
    dVar2 = param_5[1];
    uVar6 = -(ulonglong)(-dVar14 <= dVar14);
    uVar6 = -(ulonglong)
             (9.999999974752427e-07 <
             (double)(uVar6 & (ulonglong)dVar14 | ~uVar6 & (ulonglong)-dVar14));
    local_188 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar14) & uVar6);
    uVar6 = -(ulonglong)(-dVar2 <= dVar2);
    uVar6 = -(ulonglong)
             (9.999999974752427e-07 <
             (double)(uVar6 & (ulonglong)dVar2 | ~uVar6 & (ulonglong)-dVar2));
    local_180 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar2) & uVar6);
    dVar14 = param_5[2];
    uVar6 = -(ulonglong)(-dVar14 <= dVar14);
    uVar6 = -(ulonglong)
             (9.999999974752427e-07 <
             (double)(uVar6 & (ulonglong)dVar14 | ~uVar6 & (ulonglong)-dVar14));
    local_178 = (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)(1.0 / dVar14) & uVar6);
    local_190 = cos((double)(param_6 * 0.017453292));
    uVar6 = local_270;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    iVar8 = (int)local_270;
    FUN_14051b394(local_1b8 + 2,local_270 & 0xffffffff,1);
    FUN_146c63922(local_1b8,uVar6 & 0xffffffff,1);
    local_1e8 = &local_138;
    local_138 = local_268;
    pplStack_130 = &local_170;
    local_278 = &local_158;
    local_158 = (uint *)0x0;
    uStack_150 = (uint *)((ulonglong)uStack_150._4_4_ << 0x20);
    local_1f0 = FUN_143b0feae;
    local_280 = 0;
    local_128 = local_1b8 + 2;
    local_120 = param_4;
    local_118 = &local_188;
    local_110 = &local_190;
    local_108 = local_1b8;
    FUN_1401f8d10(L"ParallelFor Task",uVar6 & 0xffffffff);
    local_118 = (double *)0x0;
    local_110._0_4_ = 0;
    local_138 = (longlong *)0x0;
    pplStack_130 = (longlong **)0x0;
    local_110._4_4_ = 0x80;
    local_108._0_4_ = 0xffffffff;
    local_108._4_4_ = 0;
    local_f8 = (undefined1 *)0x0;
    local_f0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    if (0 < iVar8) {
      local_258 = param_4 + 3;
      uVar6 = 0;
      do {
        uVar5 = *(uint *)(*local_268 + uVar6 * 4);
        local_248 = (ulonglong)uVar5;
        lVar9 = *(longlong *)(*(longlong *)(*plVar12 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
        local_1d0 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        local_1d8 = *(undefined8 *)(lVar9 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
        lVar11 = (longlong)*(int *)(local_1b8[0] + uVar6 * 8);
        iVar8 = *(int *)(local_1b8[0] + 4 + uVar6 * 8);
        local_240 = uVar6;
        FUN_146bf2028(local_258,&local_1f0,uVar6 * 0x18 + local_1b8[2]);
        local_1fc[0] = 0xffffffff;
        local_1fc[1] = 0xffffffff;
        local_1fc[2] = 0xffffffff;
        lVar9 = 0;
        do {
          uVar5 = *(uint *)((longlong)&local_1d8 + lVar9 * 4);
          local_204 = uVar5;
          local_200 = iVar8;
          uVar3 = FUN_1448eb174(&local_204,8,0);
          if ((int)pplStack_130 != local_108._4_4_) {
            puVar7 = local_f8;
            if (local_f8 == (undefined1 *)0x0) {
              puVar7 = local_100;
            }
            uVar3 = *(uint *)(puVar7 + (ulonglong)(local_f0 - 1U & uVar3) * 4);
            while (uVar3 != 0xffffffff) {
              puVar13 = (uint *)((longlong)local_138 + (longlong)(int)uVar3 * 0x14);
              if ((*puVar13 == local_204) &&
                 (*(int *)((longlong)local_138 + (longlong)(int)uVar3 * 0x14 + 4) == local_200)) {
                if ((puVar13 != (uint *)0x0) && (puVar13 + 2 != (uint *)0x0)) {
                  local_1fc[lVar9] = puVar13[2];
                  goto LAB_14833c1f2;
                }
                break;
              }
              uVar3 = puVar13[3];
            }
          }
          lVar10 = *(longlong *)(*(longlong *)(*plVar12 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          local_148 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
          puVar1 = (undefined8 *)(lVar10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
          local_158 = (uint *)*puVar1;
          uStack_150 = (uint *)puVar1[1];
          (*(code *)*local_250)(&local_220,local_250[1],&local_158);
          local_148 = local_210 - param_4[2];
          uStack_150 = (uint *)(local_218 - param_4[1]);
          local_158 = (uint *)(local_220 - *param_4);
          FUN_146bf2028(local_258,&local_238,&local_158);
          dVar14 = local_188 * (double)CONCAT44(fStack_234,local_238);
          if (iVar8 < 3) {
            iVar4 = -(uint)((double)(&local_1f0)[lVar11] < 0.0);
            if (0.0 < (double)(&local_1f0)[lVar11]) {
              iVar4 = 1;
            }
            fStack_234 = (float)(local_180 * local_230) *
                         (float)*(int *)(&DAT_14ae7320c + lVar11 * 4);
            local_238 = (float)dVar14 * (float)(iVar4 * *(int *)(&DAT_14ae73200 + lVar11 * 4));
          }
          else {
            dVar2 = local_178 * local_228;
            dVar14 = atan2(local_180 * local_230,dVar14);
            if ((iVar8 != 4) || (-1.5707963267948966 <= dVar14)) {
              if (iVar8 == 3) {
                dVar14 = (double)(~-(ulonglong)(1.5707963267948966 < dVar14) & (ulonglong)dVar14 |
                                 (ulonglong)(dVar14 + -6.283185307179586) &
                                 -(ulonglong)(1.5707963267948966 < dVar14));
              }
            }
            else {
              dVar14 = dVar14 + 6.283185307179586;
            }
            fStack_234 = -(float)dVar2;
            local_238 = -((float)dVar14 * 0.31830987 + -1.0);
          }
          uVar5 = FUN_146c2d0a4(plVar12[1],&local_238);
          uVar6 = uStack_1c0;
          puVar13 = local_1fc + lVar9;
          *puVar13 = uVar5;
          lVar10 = (longlong)(int)uStack_1c0;
          uVar3 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar3);
          if (uStack_1c0._4_4_ < uVar3) {
            FUN_1446f48e2(&local_1c8,uVar6 & 0xffffffff);
            uVar5 = *puVar13;
          }
          *(uint *)(local_1c8 + lVar10 * 4) = uVar5;
          local_158 = &local_204;
          uStack_150 = puVar13;
          FUN_146fb1fa8(&local_138,local_15c,&local_158,0);
          plVar12 = local_260;
LAB_14833c1f2:
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        FUN_146c01486(plVar12[1],local_248,local_1fc);
        uVar6 = local_240 + 1;
      } while (uVar6 != local_270);
    }
    FUN_14833bb32(plVar12,&local_1c8);
    if (&local_1c8 == param_7 || param_7 == (longlong *)0x0) {
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_7 != 0) {
        FUN_1400020a8();
      }
      *param_7 = local_1c8;
      local_1c8 = 0;
      *(int *)(param_7 + 1) = (int)uStack_1c0;
      *(uint *)((longlong)param_7 + 0xc) = uStack_1c0._4_4_;
    }
    local_f0 = 0;
    if (local_f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146be7e8c(&local_138);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)local_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833c41c FUN_14833c41c body=1205 status=ok
// SIG undefined FUN_14833c41c(void)

ulonglong FUN_14833c41c(undefined8 *param_1,longlong *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  double *_X;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_cc;
  int local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_146bc645a(&local_f8,*param_1,param_2);
  dVar5 = dStack_f0;
  uVar13 = -(ulonglong)(-dStack_f0 <= dStack_f0);
  if ((double)(~uVar13 & (ulonglong)-dStack_f0 | uVar13 & (ulonglong)dStack_f0) <
      1.1920928955078125e-07) {
    uVar13 = 0;
    goto LAB_14833c4c7;
  }
  local_f8 = dStack_f0;
  sVar8 = _dtest();
  uVar13 = 0;
  if (0 < sVar8) goto LAB_14833c4c7;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_128 = 3.4028235e+38;
  fStack_124 = 3.4028235e+38;
  fStack_120 = -3.4028235e+38;
  fStack_11c = -3.4028235e+38;
  _X = (double *)FUN_14833c8d2(param_1[1],param_2);
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_2;
    lVar12 = 0;
    do {
      uVar11 = *(int *)(lVar2 + lVar12) * 3;
      lVar3 = *(longlong *)(param_1[1] + 0x78);
      iVar10 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                       (ulonglong)(uVar11 & 0x1ff) * 4);
      if (-1 < iVar10) {
        local_148 = *(undefined4 *)
                     (*(longlong *)(lVar3 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                     (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
        local_150 = (double *)
                    CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar3 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                              (ulonglong)(uVar11 + 1 & 0x1ff) * 4),iVar10);
        FUN_1447cbafe(&local_f8,&local_118,&local_150,0);
        FUN_1447cbafe(&local_f8,&local_118,(longlong)&local_150 + 4,0);
        FUN_1447cbafe(&local_f8,&local_118,&local_148,0);
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar12);
    if (((dStack_f0._0_4_ != local_c4) &&
        (uVar13 = -(ulonglong)(-(double)_X <= (double)_X),
        1.1920928955078125e-07 <=
        (double)(~uVar13 & (ulonglong)-(double)_X | uVar13 & (ulonglong)_X))) &&
       (local_150 = _X, sVar8 = _dtest(), sVar8 < 1)) {
      if (dVar5 < 0.0) {
        dVar5 = sqrt(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      if ((double)_X < 0.0) {
        dVar4 = sqrt((double)_X);
      }
      else {
        dVar4 = SQRT((double)_X);
      }
      local_150 = (double *)(dVar5 / dVar4);
      sVar8 = _dtest();
      if (sVar8 < 1) {
        fVar16 = (fStack_124 + fStack_11c) * 0.5;
        fVar15 = (local_128 + fStack_120) * 0.5;
        fVar17 = (float)DAT_14c84635c;
        fVar18 = DAT_14c84635c._4_4_;
        if (param_3 == '\0') {
          fVar17 = fVar15;
          fVar18 = fVar16;
        }
        local_118 = 0x100000000;
        local_108 = 0xffffffff;
        uStack_100 = 0;
        uStack_110 = local_e8;
        if (local_d0 == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_118);
          iVar10 = local_d0;
        }
        uStack_130 = CONCAT44(uStack_fc,uStack_100);
        local_138 = local_108;
        uVar7 = local_138;
        local_148 = (undefined4)local_118;
        uStack_144 = local_118._4_4_;
        uStack_140 = (undefined4)uStack_110;
        uStack_13c = uStack_110._4_4_;
        local_138._4_4_ = (int)((ulonglong)local_108 >> 0x20);
        local_150 = &local_f8;
        if ((local_138._4_4_ != iVar10) || (uStack_110 != local_e8)) {
          fVar14 = (float)(dVar5 / dVar4);
          iVar9 = local_138._4_4_;
          local_138 = uVar7;
          do {
            uVar11 = *(uint *)((longlong)*local_150 + (longlong)iVar9 * 0xc);
            lVar6 = param_1[1];
            uVar13 = (ulonglong)(uVar11 >> 5 & 0x3fffff8);
            lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar13);
            uVar11 = (uVar11 & 0xff) << 3;
            fVar1 = *(float *)(lVar2 + (ulonglong)(uVar11 | 4));
            *(float *)(lVar2 + (ulonglong)uVar11) =
                 (*(float *)(lVar2 + (ulonglong)uVar11) - fVar15) * fVar14 + fVar17;
            *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar13) + (ulonglong)(uVar11 | 4)
                      ) = (fVar1 - fVar16) * fVar14 + fVar18;
            local_138 = CONCAT44(local_138._4_4_,(uint)local_138 & ~uStack_144);
            FUN_1449c0562(&local_148);
            iVar9 = local_138._4_4_;
            uVar7 = local_138;
          } while (local_150 != &local_f8 ||
                   ((undefined1 *)CONCAT44(uStack_13c,uStack_140) != local_e8 ||
                   local_138._4_4_ != iVar10));
        }
        local_138 = uVar7;
        uVar13 = CONCAT71((int7)((ulonglong)&local_f8 >> 8),1);
        goto LAB_14833c6bf;
      }
    }
    uVar13 = 0;
  }
LAB_14833c6bf:
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_f8);
LAB_14833c4c7:
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14833c8d2 FUN_14833c8d2 body=659 status=ok
// SIG undefined FUN_14833c8d2(void)

double FUN_14833c8d2(longlong param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (param_3 != (float *)0x0) {
    param_3[0] = 3.4028235e+38;
    param_3[1] = 3.4028235e+38;
    *(undefined1 **)(param_3 + 2) = &DAT_ff7fffffff7fffff;
  }
  lVar11 = param_2[1];
  if ((longlong)(int)lVar11 == 0) {
    dVar17 = 0.0;
  }
  else {
    lVar8 = *param_2;
    dVar17 = 0.0;
    lVar13 = 0;
    do {
      uVar7 = *(int *)(lVar8 + lVar13) * 3;
      lVar9 = *(longlong *)(param_1 + 0x78);
      uVar16 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < (int)uVar16) {
        uVar6 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                         (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
        uVar7 = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                         (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
        uVar12 = (ulonglong)((uVar16 & 0xff) << 3);
        uVar15 = (ulonglong)((uVar7 & 0xff) << 3);
        uVar14 = (ulonglong)((uVar6 & 0xff) << 3);
        lVar9 = *(longlong *)(param_1 + 0x48);
        lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar16 >> 8) * 8);
        fVar18 = *(float *)(lVar10 + uVar12);
        fVar1 = *(float *)(lVar10 + 4 + uVar12);
        lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 5 & 0x3fffff8));
        fVar2 = *(float *)(lVar10 + uVar15);
        fVar3 = *(float *)(lVar10 + 4 + uVar15);
        lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar6 >> 5 & 0x3fffff8));
        fVar4 = *(float *)(lVar9 + uVar14);
        fVar5 = *(float *)(lVar9 + 4 + uVar14);
        if (param_3 != (float *)0x0) {
          fVar19 = *param_3;
          if (fVar18 < *param_3) {
            *param_3 = fVar18;
            fVar19 = fVar18;
          }
          fVar20 = param_3[2];
          if (param_3[2] < fVar18) {
            param_3[2] = fVar18;
            fVar20 = fVar18;
          }
          fVar21 = param_3[1];
          if (fVar1 < param_3[1]) {
            param_3[1] = fVar1;
            fVar21 = fVar1;
          }
          fVar22 = param_3[3];
          if (param_3[3] < fVar1) {
            param_3[3] = fVar1;
            fVar22 = fVar1;
          }
          if (fVar2 < fVar19) {
            *param_3 = fVar2;
            fVar19 = fVar2;
          }
          if (fVar20 < fVar2) {
            param_3[2] = fVar2;
            fVar20 = fVar2;
          }
          if (fVar3 < fVar21) {
            param_3[1] = fVar3;
            fVar21 = fVar3;
          }
          if (fVar22 < fVar3) {
            param_3[3] = fVar3;
            fVar22 = fVar3;
          }
          if (fVar4 < fVar19) {
            *param_3 = fVar4;
          }
          if (fVar20 < fVar4) {
            param_3[2] = fVar4;
          }
          if (fVar5 < fVar21) {
            param_3[1] = fVar5;
          }
          if (fVar22 < fVar5) {
            param_3[3] = fVar5;
          }
        }
        fVar18 = (fVar5 - fVar1) * (fVar2 - fVar18) - (fVar4 - fVar18) * (fVar3 - fVar1);
        uVar16 = -(uint)(-fVar18 <= fVar18);
        dVar17 = dVar17 + (double)((float)(~uVar16 & (uint)-fVar18 | (uint)fVar18 & uVar16) * 0.5);
      }
      lVar13 = lVar13 + 4;
    } while ((longlong)(int)lVar11 * 4 != lVar13);
  }
  return dVar17;
}



// FUNCTION 14833cb66 FUN_14833cb66 body=1043 status=ok
// SIG undefined FUN_14833cb66(void)

ulonglong FUN_14833cb66(longlong param_1,longlong *param_2,float *param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_138 [40];
  longlong local_110 [2];
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 *local_e8;
  undefined8 *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar12 = (float)(-(uint)(0.0 <= param_3[3] - param_3[1]) & (uint)(param_3[3] - param_3[1])) *
           (float)(-(uint)(0.0 <= param_3[2] - *param_3) & (uint)(param_3[2] - *param_3));
  dVar9 = (double)fVar12;
  dVar11 = dVar9;
  if (fVar12 < 0.0) {
    dVar11 = -dVar9;
  }
  if (dVar11 < 1.1920928955078125e-07) {
    uVar8 = 0;
    goto LAB_14833cc05;
  }
  local_c8 = dVar9;
  sVar6 = _dtest();
  uVar8 = 0;
  if (0 < sVar6) goto LAB_14833cc05;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0.0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 3.4028235e+38;
  fStack_d4 = 3.4028235e+38;
  fStack_d0 = -3.4028235e+38;
  fStack_cc = -3.4028235e+38;
  dVar9 = (double)FUN_14833c8d2(*(undefined8 *)(param_1 + 8),param_2);
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      uVar4 = *(int *)(lVar2 + lVar7) * 3;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      iVar1 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
      if (-1 < iVar1) {
        local_f8 = *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                             (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
        local_100 = (double)CONCAT44(*(undefined4 *)
                                      (*(longlong *)(lVar3 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                                      (ulonglong)(uVar4 + 1 & 0x1ff) * 4),iVar1);
        FUN_1447cbafe(&local_c8,local_110,&local_100,0);
        FUN_1447cbafe(&local_c8,local_110,(longlong)&local_100 + 4,0);
        FUN_1447cbafe(&local_c8,local_110,&local_f8,0);
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
    if ((((int)uStack_c0 != local_94) &&
        (uVar8 = -(ulonglong)(-dVar9 <= dVar9),
        1.1920928955078125e-07 <= (double)(~uVar8 & (ulonglong)-dVar9 | uVar8 & (ulonglong)dVar9)))
       && (local_100 = dVar9, sVar6 = _dtest(), sVar6 < 1)) {
      fVar12 = (float)(-(uint)(0.0 <= param_3[2] - *param_3) & (uint)(param_3[2] - *param_3)) /
               (float)(-(uint)(0.0 <= fStack_d0 - local_d8) & (uint)(fStack_d0 - local_d8));
      fVar13 = (float)(-(uint)(0.0 <= param_3[3] - param_3[1]) & (uint)(param_3[3] - param_3[1])) /
               (float)(-(uint)(0.0 <= fStack_cc - fStack_d4) & (uint)(fStack_cc - fStack_d4));
      fVar14 = fVar13;
      if ((param_4 != '\0') && (fVar14 = fVar12, fVar13 <= fVar12)) {
        fVar12 = fVar13;
        fVar14 = fVar13;
      }
      local_100 = (double)fVar12;
      sVar6 = _dtest();
      if (sVar6 < 1) {
        local_100 = (double)fVar14;
        sVar6 = _dtest(&local_100);
        if (sVar6 < 1) {
          fVar13 = (fStack_d4 + fStack_cc) * 0.5;
          fVar10 = (local_d8 + fStack_d0) * 0.5;
          local_ec = fVar13;
          local_f0 = fVar10;
          if (param_5 != '\0') {
            local_ec = (param_3[1] + param_3[3]) * 0.5;
            local_f0 = (*param_3 + param_3[2]) * 0.5;
          }
          local_100 = (double)CONCAT44(fVar13,fVar10);
          local_e8 = &LAB_143b102fc;
          local_f8 = fVar12;
          local_f4 = fVar14;
          local_e0 = &local_100;
          FUN_140619b9c(&local_c8,local_110);
          FUN_1483261e8(param_1,local_110,&local_e8);
          if (local_110[0] != 0) {
            FUN_1400020a8();
          }
          uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          goto LAB_14833cddb;
        }
      }
    }
    uVar8 = 0;
  }
LAB_14833cddb:
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_c8);
LAB_14833cc05:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14833cf7a FUN_14833cf7a body=2275 status=ok
// SIG undefined FUN_14833cf7a(void)

undefined4 FUN_14833cf7a(longlong param_1,undefined8 *param_2)

{
  longlong **pplVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
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
  undefined1 local_238 [44];
  float local_20c;
  int *local_208;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  int local_1b0;
  ulonglong local_1a8;
  longlong lStack_1a0;
  ulonglong local_198;
  longlong local_188;
  undefined8 uStack_180;
  undefined1 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_149;
  longlong local_148 [2];
  longlong *local_138 [2];
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_238;
  uVar6 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_188 = 0;
  uStack_180 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar15 = (int *)*param_2;
    local_208 = piVar15 + *(int *)(param_2 + 1);
    fVar24 = 3.4028235e+38;
    fVar23 = -3.4028235e+38;
    fVar26 = -3.4028235e+38;
    fVar27 = 3.4028235e+38;
    do {
      uVar7 = *piVar15 * 3;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      iVar11 = *(int *)(*(longlong *)(lVar12 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      if (-1 < iVar11) {
        local_1f0 = (longlong *)
                    CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar12 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                              (ulonglong)(uVar7 + 1 & 0x1ff) * 4),iVar11);
        local_1e8 = (undefined1 *)
                    CONCAT44(local_1e8._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(lVar12 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                              (ulonglong)(uVar7 + 2 & 0x1ff) * 4));
        lVar12 = 0;
        fVar19 = fVar23;
        fVar29 = fVar24;
        fVar28 = fVar27;
        do {
          local_1a8 = local_1a8 & 0xffffffffffffff00;
          FUN_1447cbafe(local_148,&local_170,(uint *)((longlong)&local_1f0 + lVar12),&local_1a8);
          uVar9 = uStack_180;
          fVar23 = fVar19;
          fVar24 = fVar29;
          fVar27 = fVar28;
          if ((char)local_1a8 == '\0') {
            uVar7 = *(uint *)((longlong)&local_1f0 + lVar12);
            lVar13 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) +
                      (ulonglong)(uVar7 >> 5 & 0x3fffff8));
            uVar16 = (ulonglong)((uVar7 & 0xff) << 3);
            fVar24 = *(float *)(lVar13 + uVar16);
            fVar23 = *(float *)(lVar13 + 4 + uVar16);
            lVar13 = (longlong)(int)uStack_180;
            uVar7 = (int)uStack_180 + 1;
            uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
            if (uStack_180._4_4_ < uVar7) {
              FUN_140752556(&local_188,uVar9 & 0xffffffff);
            }
            *(float *)(local_188 + lVar13 * 8) = fVar24;
            *(float *)(local_188 + 4 + lVar13 * 8) = fVar23;
            fVar27 = fVar24;
            if (fVar28 <= fVar24) {
              fVar27 = fVar28;
            }
            if (fVar24 <= fVar26) {
              fVar24 = fVar26;
            }
            fVar26 = fVar24;
            fVar24 = fVar23;
            if (fVar29 <= fVar23) {
              fVar24 = fVar29;
            }
            if (fVar23 <= fVar19) {
              fVar23 = fVar19;
            }
          }
          lVar12 = lVar12 + 4;
          fVar19 = fVar23;
          fVar29 = fVar24;
          fVar28 = fVar27;
        } while (lVar12 != 0xc);
      }
      piVar15 = piVar15 + 1;
    } while (piVar15 != local_208);
    if ((uStack_180 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      fVar19 = (fVar24 + fVar23) * 0.5;
      local_20c = (fVar27 + fVar26) * 0.5;
      if (0 < (int)uStack_180) {
        uVar9 = 0;
        do {
          *(float *)(local_188 + uVar9 * 8) = *(float *)(local_188 + uVar9 * 8) - local_20c;
          *(float *)(local_188 + 4 + uVar9 * 8) = *(float *)(local_188 + 4 + uVar9 * 8) - fVar19;
          uVar9 = uVar9 + 1;
        } while ((uStack_180 & 0xffffffff) != uVar9);
      }
      local_1b0 = (int)uStack_180;
      local_208 = (int *)CONCAT44(local_208._4_4_,fVar19);
      local_1a8 = 0;
      lStack_1a0 = 0;
      local_198 = 0;
      local_1c8 = &local_1b8;
      local_1b8 = local_188;
      local_1e8 = &local_149;
      local_1f0 = (longlong *)&LAB_146bf334c;
      uStack_168 = &local_1c8;
      local_170 = &LAB_146bf3338;
      uVar6 = FUN_146ba778e();
      if ((char)uVar6 != '\0') {
        local_1c8 = (longlong *)0x0;
        uStack_1c0 = 0;
        if ((int)local_198 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_198 & 0xffffffff);
        }
        if ((local_198 & 0xffffffff) != 0) {
          FUN_14171ef34(&local_1c8);
          if (0 < (int)local_198) {
            lVar12 = 0;
            do {
              lVar13 = local_188;
              iVar11 = *(int *)(lStack_1a0 + lVar12 * 4);
              lVar17 = (longlong)(int)(uint)uStack_1c0;
              uVar7 = (uint)uStack_1c0 + 1;
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar7);
              if (uStack_1c0._4_4_ < uVar7) {
                FUN_140752556(&local_1c8);
              }
              local_1c8[lVar17] = *(longlong *)(lVar13 + (longlong)iVar11 * 8);
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)local_198);
          }
        }
        lVar12 = (longlong)(int)(uint)uStack_1c0;
        uVar4 = local_1d8;
        if (-1 < lVar12) {
          uVar16 = lVar12 + (ulonglong)(lVar12 == 0);
          uVar9 = 0;
          fVar23 = (float)(-(uint)(0.0 <= fVar23 - fVar24) & (uint)(fVar23 - fVar24)) *
                   (float)(-(uint)(0.0 <= fVar26 - fVar27) & (uint)(fVar26 - fVar27));
          fVar26 = 0.0;
          fVar27 = 1.0;
          uVar5 = 0;
LAB_14833d3e7:
          do {
            local_1f8 = uVar5;
            local_200 = fVar27;
            local_1fc = fVar26;
            uVar7 = (uint)uVar9;
            uVar2 = uVar9 % (uStack_1c0 & 0xffffffff);
            fVar24 = *(float *)((longlong)local_1c8 + uVar2 * 8 + 4);
            uVar9 = (ulonglong)(uVar7 + 1);
            uVar3 = uVar9 % (uStack_1c0 & 0xffffffff);
            uVar14 = (ulonglong)(uVar7 + ((uint)uStack_1c0 >> 1));
            uVar10 = uVar14 / (uStack_1c0 & 0xffffffff);
            uVar14 = uVar14 % (uStack_1c0 & 0xffffffff);
            fVar26 = *(float *)((longlong)local_1c8 + uVar3 * 8 + 4) - fVar24;
            fVar27 = *(float *)(local_1c8 + uVar3) - *(float *)(local_1c8 + uVar2);
            fVar19 = SQRT(fVar27 * fVar27 + fVar26 * fVar26);
            if (0.0 < fVar19) {
              fVar27 = fVar27 * (1.0 / fVar19);
            }
            else {
              fVar27 = 0.0;
            }
            fVar26 = (float)(-(uint)(0.0 < fVar19) & (uint)(fVar26 * (1.0 / fVar19)));
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            fVar29 = (*(float *)(local_1c8 + uVar14) - *(float *)(local_1c8 + uVar2)) * fVar26 -
                     (*(float *)((longlong)local_1c8 + uVar14 * 8 + 4) - fVar24) * fVar27;
            fVar21 = 3.4028235e+38;
            fVar24 = -3.4028235e+38;
            fVar25 = -3.4028235e+38;
            lVar13 = lVar12 + 1;
            uVar14 = 0;
            fVar28 = 3.4028235e+38;
            do {
              lVar13 = lVar13 + -1;
              if (lVar13 == 0) {
                if (fVar19 * fVar29 < fVar23) {
                  fVar23 = fVar19 * fVar29;
                  uVar5 = CONCAT71((int7)(uVar10 >> 8),1);
                  if (uVar7 == (uint)uStack_1c0) goto LAB_14833d5e4;
                  goto LAB_14833d3e7;
                }
                break;
              }
              uVar10 = (uVar14 + 0xbf400001) / uVar16;
              fVar22 = *(float *)((longlong)local_1c8 + uVar14 * 8 + 4);
              fVar20 = fVar27 * *(float *)(local_1c8 + uVar14) + fVar26 * fVar22;
              fVar30 = fVar20;
              if (fVar21 <= fVar20) {
                fVar30 = fVar21;
              }
              fVar21 = fVar30;
              if (fVar20 <= fVar24) {
                fVar20 = fVar24;
              }
              fVar24 = fVar20;
              uVar18 = -(uint)(fVar24 - fVar21 <= fVar19);
              fVar19 = (float)(uVar18 & (uint)fVar19 | ~uVar18 & (uint)(fVar24 - fVar21));
              fVar30 = *(float *)(local_1c8 + uVar14) * fVar26 + fVar22 * -fVar27;
              fVar22 = fVar30;
              if (fVar28 <= fVar30) {
                fVar22 = fVar28;
              }
              if (fVar30 <= fVar25) {
                fVar30 = fVar25;
              }
              fVar25 = fVar30;
              uVar18 = -(uint)(fVar25 - fVar22 <= fVar29);
              fVar29 = (float)(uVar18 & (uint)fVar29 | ~uVar18 & (uint)(fVar25 - fVar22));
              uVar14 = (uVar14 + 0xbf400001) % uVar16;
              fVar28 = fVar22;
            } while (fVar29 * fVar19 <= fVar23);
            uVar9 = (ulonglong)(uVar7 + 1);
            fVar26 = local_1fc;
            fVar27 = local_200;
            uVar5 = local_1f8;
          } while (uVar7 != (uint)uStack_1c0);
          if ((char)local_1f8 != '\0') {
LAB_14833d5e4:
            fVar23 = atan2f(fVar26,fVar27);
            fVar26 = cosf(-fVar23);
            fVar23 = sinf(-fVar23);
            pplVar1 = (longlong **)(local_148 + 2);
            local_170 = &DAT_100000000;
            local_160 = 0xffffffff;
            uStack_158 = 0;
            uStack_168 = pplVar1;
            if (local_120 == 0) {
              iVar11 = 0;
            }
            else {
              FUN_1449c0562(&local_170);
              iVar11 = local_120;
            }
            fVar27 = local_20c;
            fVar24 = local_208._0_4_;
            uStack_1d0 = CONCAT44(uStack_154,uStack_158);
            local_1d8 = local_160;
            uVar4 = local_1d8;
            local_1e8 = local_170;
            uStack_1e0 = (undefined4)uStack_168;
            uStack_1dc = uStack_168._4_4_;
            local_1f0 = local_148;
            local_1d8._4_4_ = (int)((ulonglong)local_160 >> 0x20);
            if ((local_1d8._4_4_ != iVar11) || (uStack_168 != pplVar1)) {
              iVar8 = local_1d8._4_4_;
              local_1d8 = uVar4;
              do {
                uVar7 = *(uint *)(*local_1f0 + (longlong)iVar8 * 0xc);
                lVar12 = *(longlong *)(param_1 + 8);
                uVar9 = (ulonglong)(uVar7 >> 5 & 0x3fffff8);
                lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x48) + uVar9);
                uVar7 = (uVar7 & 0xff) << 3;
                fVar29 = *(float *)(lVar13 + (ulonglong)(uVar7 | 4)) - fVar24;
                fVar19 = *(float *)(lVar13 + (ulonglong)uVar7) - fVar27;
                *(float *)(lVar13 + (ulonglong)uVar7) = fVar19 * fVar26 + fVar29 * -fVar23 + fVar27;
                *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0x48) + uVar9) +
                          (ulonglong)(uVar7 | 4)) = fVar23 * fVar19 + fVar26 * fVar29 + fVar24;
                local_1d8 = CONCAT44(local_1d8._4_4_,(uint)local_1d8 & ~local_1e8._4_4_);
                FUN_1449c0562(&local_1e8);
                iVar8 = local_1d8._4_4_;
                uVar4 = local_1d8;
              } while (local_1f0 != local_148 ||
                       ((longlong **)CONCAT44(uStack_1dc,uStack_1e0) != pplVar1 ||
                       local_1d8._4_4_ != iVar11));
            }
          }
        }
        local_1d8 = uVar4;
        if (local_1c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (lStack_1a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_148);
  if ((local_f0 ^ (ulonglong)local_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14833d860 FUN_14833d860 body=117 status=ok
// SIG undefined FUN_14833d860(void)

void FUN_14833d860(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_142972d20(*(undefined8 *)(param_1 + 8));
  local_50 = *(undefined8 *)(param_1 + 8);
  local_48 = 0;
  local_38 = 0;
  local_40 = param_2;
  local_3c = param_3;
  FUN_143b09a9c();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833d8d6 FUN_14833d8d6 body=1402 status=ok
// SIG undefined FUN_14833d8d6(void)

undefined1
FUN_14833d8d6(longlong *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
             undefined8 *param_5)

{
  float fVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 local_13c;
  int *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar8 = (longlong *)FUN_14001cc68(0x10,0x10);
  local_148 = param_1;
  local_13c = param_2;
  local_138 = param_4;
  if (param_5 == (undefined8 *)0x0) {
    *plVar8 = 0;
    plVar8[1] = 0;
    lVar11 = *param_1;
    iVar7 = *(int *)(lVar11 + 0x170);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 != 0) {
      FUN_14481578e(plVar8);
      lVar11 = *local_148;
    }
    uVar12 = *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144);
    param_1 = local_148;
    uVar15 = 0;
    if ((uVar12 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x148) - 1U))) {
      uVar17 = 1;
      uVar18 = 1;
      if (1 < (int)uVar12) {
        uVar17 = uVar12;
      }
      do {
        uVar15 = uVar17;
        if (uVar17 == uVar18) break;
        uVar10 = uVar18 >> 9;
        uVar14 = uVar18 & 0x1ff;
        uVar15 = uVar18;
        uVar18 = uVar18 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar11 + 0x148))[uVar10] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
LAB_14833de2b:
    if (uVar15 != uVar12) {
      iVar7 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(plVar8,iVar7);
        param_1 = local_148;
      }
      *(uint *)(*plVar8 + (longlong)iVar7 * 4) = uVar15;
      uVar17 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar12) {
        uVar17 = uVar12;
      }
      uVar18 = uVar15;
      do {
        uVar15 = uVar17;
        if (uVar17 - 1 == uVar18) break;
        uVar15 = uVar18 + 1;
        uVar18 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar11 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      goto LAB_14833de2b;
    }
  }
  else {
    *plVar8 = 0;
    iVar7 = *(int *)(param_5 + 1);
    _Src = (void *)*param_5;
    *(int *)(plVar8 + 1) = iVar7;
    if ((longlong)iVar7 == 0) {
      *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(plVar8,iVar7,0);
      memcpy((void *)*plVar8,_Src,(longlong)iVar7 << 2);
      param_1 = local_148;
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  iVar7 = (int)plVar8[1];
  if ((longlong)iVar7 != 0) {
    uVar9 = (longlong)iVar7 * 3;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar9);
    }
    FUN_1400bac10(local_c8,uVar9 & 0xffffffff);
    iVar7 = 1;
    if (3 < (uint)uVar9) {
      uVar15 = ((uint)uVar9 | 1) + 0xe;
      iVar7 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 1 << ((byte)iVar7 & 0x1f);
    }
    if ((local_80 == 0) || (local_80 < iVar7)) {
      local_80 = iVar7;
      FUN_144a56d22();
    }
    lVar11 = plVar8[1];
    param_1 = local_148;
    if ((longlong)(int)lVar11 != 0) {
      lVar3 = *plVar8;
      lVar13 = 0;
      do {
        uVar15 = *(int *)(lVar3 + lVar13) * 3;
        lVar4 = *(longlong *)(param_1[1] + 0x78);
        iVar7 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar15 >> 9) * 8) +
                        (ulonglong)(uVar15 & 0x1ff) * 4);
        if (-1 < iVar7) {
          local_130 = (longlong *)
                      CONCAT44(*(undefined4 *)
                                (*(longlong *)(lVar4 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                                (ulonglong)(uVar15 + 1 & 0x1ff) * 4),iVar7);
          local_128 = CONCAT44(local_128._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(lVar4 + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                                (ulonglong)(uVar15 + 2 & 0x1ff) * 4));
          FUN_1447cbafe(local_c8,&local_e8,&local_130,0);
          FUN_1447cbafe(local_c8,&local_e8,(longlong)&local_130 + 4,0);
          FUN_1447cbafe(local_c8,&local_e8,&local_128,0);
          param_1 = local_148;
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar13);
    }
  }
  local_108 = param_1[1];
  local_f0 = 0;
  local_f8 = local_13c;
  local_100 = plVar8;
  local_f4 = param_3;
  uVar6 = FUN_143b09a9c();
  local_13c = CONCAT31(local_13c._1_3_,uVar6);
  iVar7 = local_138[1];
  iVar2 = *local_138;
  local_e8 = 0x100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  iVar16 = 0;
  local_e0 = local_b8;
  if (local_a0 != 0) {
    FUN_1449c0562(&local_e8);
    iVar16 = local_a0;
  }
  plVar5 = local_148;
  local_118 = local_d8;
  iStack_114 = iStack_d4;
  local_110 = local_d0;
  local_10c = local_cc;
  local_128 = local_e8;
  local_120 = local_e0;
  local_130 = local_c8;
  if ((iStack_d4 != iVar16) || (local_e0 != local_b8)) {
    do {
      uVar15 = *(uint *)(*local_130 + (longlong)iStack_114 * 0xc);
      lVar11 = plVar5[1];
      uVar9 = (ulonglong)(uVar15 >> 5 & 0x3fffff8);
      lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x48) + uVar9);
      uVar15 = (uVar15 & 0xff) << 3;
      fVar1 = *(float *)(lVar3 + (ulonglong)(uVar15 | 4));
      *(float *)(lVar3 + (ulonglong)uVar15) = *(float *)(lVar3 + (ulonglong)uVar15) + (float)iVar2;
      *(float *)(*(longlong *)(*(longlong *)(lVar11 + 0x48) + uVar9) + (ulonglong)(uVar15 | 4)) =
           fVar1 + (float)-iVar7;
      local_118 = local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while (local_130 != local_c8 || (local_120 != local_b8 || iStack_114 != iVar16));
  }
  if (plVar8 != (longlong *)0x0) {
    if (*plVar8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar8);
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_c8);
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (undefined1)local_13c;
}



// FUNCTION 14833de52 FUN_14833de52 body=1209 status=ok
// SIG undefined FUN_14833de52(void)

void FUN_14833de52(undefined *param_1,double *param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_218 [40];
  undefined4 local_1f0;
  int **local_1e8;
  undefined8 local_1d8;
  double local_1d0;
  code *local_1c8;
  longlong **local_1c0;
  double local_1b8;
  undefined *local_1b0;
  int *local_1a8;
  uint local_1a0;
  uint local_19c;
  longlong local_198 [2];
  longlong *local_188;
  longlong local_178 [4];
  undefined *local_158;
  undefined8 local_150;
  code *pcStack_148;
  undefined **local_138;
  undefined *local_130;
  undefined *local_128 [4];
  undefined **local_108;
  undefined **local_100;
  double **local_f8;
  undefined8 local_f0;
  double *local_e8 [4];
  int *local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_4[2] = DAT_14c8464f0;
  dVar11 = DAT_14c8464e8;
  *param_4 = DAT_14c8464e0;
  param_4[1] = dVar11;
  dVar11 = (param_2[2] + param_2[5]) * 0.5;
  dVar12 = (param_2[1] + param_2[4]) * 0.5;
  dVar1 = (*param_2 + param_2[3]) * 0.5;
  iVar9 = 0;
  pcStack_148 = (code *)0x0;
  local_138 = &PTR_DAT_149f363e0;
  local_158 = &DAT_146be727e;
  local_1d8 = param_3;
  local_1b0 = param_1;
  local_130 = param_1;
  FUN_146be708e(param_1 + 0x20,&local_108);
  FUN_146be6fec(&local_108,&local_158);
  local_1a0 = *local_c8 * 0x200 + local_c8[1];
  local_188 = (longlong *)0x0;
  local_198[0] = 0;
  local_1a8 = local_c8;
  local_19c = local_1a0;
  FUN_146be715a(local_198,&local_108);
  if ((uint)local_150 != local_1a0) {
    uVar5 = (uint)local_150;
    do {
      pcVar4 = pcStack_148;
      local_1d0 = (double)CONCAT44(local_1d0._4_4_,uVar5);
      ppuVar8 = local_138;
      if (local_138 == (undefined **)0x0) {
        ppuVar8 = local_128;
      }
      uVar6 = (**(code **)(*ppuVar8 + 8))();
      (*pcVar4)(&local_1c8,uVar6,&local_1d0);
      iVar9 = iVar9 + 1;
      dVar2 = 1.0 / (double)iVar9;
      *param_4 = dVar2 * (((double)local_1c8 - dVar1) - *param_4) + *param_4;
      param_4[1] = (((double)local_1c0 - dVar12) - param_4[1]) * dVar2 + param_4[1];
      param_4[2] = ((local_1b8 - dVar11) - param_4[2]) * dVar2 + param_4[2];
      iVar3 = local_150._4_4_;
      uVar5 = (uint)local_150;
      do {
        uVar5 = uVar5 + 1;
        local_150 = CONCAT44(local_150._4_4_,uVar5);
        if (iVar3 <= (int)uVar5) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_158 + 8) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    } while (local_1a0 != uVar5);
  }
  if (local_198[0] != 0) {
    plVar7 = local_188;
    if (local_188 == (longlong *)0x0) {
      plVar7 = local_178;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (pcStack_148 != (code *)0x0) {
    ppuVar8 = local_138;
    if (local_138 == (undefined **)0x0) {
      ppuVar8 = local_128;
    }
    (**(code **)(*ppuVar8 + 0x10))();
  }
  if (local_108 != (undefined **)0x0) {
    if (local_f8 == (double **)0x0) {
      local_f8 = local_e8;
    }
    (*(code *)(*local_f8)[2])();
  }
  *param_4 = dVar1 + *param_4;
  param_4[1] = dVar12 + param_4[1];
  param_4[2] = dVar11 + param_4[2];
  local_150 = 0;
  pcStack_148 = (code *)0x0;
  local_158 = param_1;
  FUN_146c37e28(&local_158,0,1);
  uVar6 = local_1d8;
  FUN_140b463b8(local_1d8,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  dVar11 = (double)(-(ulonglong)(0.0 <= param_2[5] - param_2[2]) &
                   (ulonglong)(param_2[5] - param_2[2]));
  dVar12 = (double)(-(ulonglong)(0.0 <= param_2[4] - param_2[1]) &
                   (ulonglong)(param_2[4] - param_2[1]));
  uVar10 = -(ulonglong)(dVar11 <= dVar12);
  dVar12 = (double)(~uVar10 & (ulonglong)dVar11 | uVar10 & (ulonglong)dVar12);
  dVar11 = (double)(-(ulonglong)(0.0 <= param_2[3] - *param_2) & (ulonglong)(param_2[3] - *param_2))
  ;
  uVar10 = -(ulonglong)(dVar12 <= dVar11);
  local_1d0 = 2.0 / (double)(uVar10 & (ulonglong)dVar11 | ~uVar10 & (ulonglong)dVar12);
  local_e8[0] = &local_1d0;
  local_108 = &local_1b0;
  local_f0 = uVar6;
  local_1e8 = &local_1a8;
  local_1a8 = (int *)0x0;
  local_1a0 = 0;
  local_1c8 = FUN_143b10332;
  local_1c0 = (longlong **)&local_108;
  local_1f0 = 0;
  local_100 = &local_158;
  local_f8 = (double **)param_4;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14833e30c FUN_14833e30c body=9146 status=ok
// SIG undefined FUN_14833e30c(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14833e30c(char *param_1,longlong param_2,double *param_3,longlong *param_4,
                       longlong *param_5)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *****ppppplVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *******ppppppplVar17;
  longlong lVar18;
  longlong *******ppppppplVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong *******ppppppplVar22;
  byte bVar23;
  undefined8 *puVar24;
  undefined7 uVar25;
  undefined8 *puVar26;
  int *piVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  uint uVar33;
  undefined8 *puVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  bool bVar41;
  ulonglong uVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  longlong lVar53;
  undefined1 auVar54 [16];
  longlong lVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  double dVar62;
  undefined1 auStack_a28 [32];
  longlong *local_a08;
  char *local_9f8;
  longlong *local_9f0;
  longlong *******local_9e8;
  double local_9e0;
  uint local_9d4;
  double *local_9d0;
  double local_9c8;
  longlong local_9c0;
  longlong local_9b8 [8];
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  longlong local_958 [8];
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  longlong local_8f8 [8];
  longlong *******local_8b8;
  longlong *******ppppppplStack_8b0;
  longlong *******local_8a8;
  longlong lStack_8a0;
  longlong lStack_898;
  longlong lStack_890;
  longlong local_888;
  double local_878;
  double local_870;
  double local_868;
  longlong ******local_860 [3];
  longlong ******local_848;
  longlong *******local_840;
  longlong *******local_838;
  longlong *******ppppppplStack_830;
  longlong *******local_828;
  double local_820;
  longlong *******local_818;
  undefined8 uStack_810;
  longlong local_808 [8];
  longlong local_7c8 [8];
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  longlong *******local_768;
  double dStack_760;
  double local_758;
  byte local_749;
  longlong local_748 [7];
  longlong local_710;
  longlong *******local_708;
  longlong *******ppppppplStack_700;
  longlong *******local_6f8;
  longlong ******local_6f0;
  char *local_6e8;
  double local_6e0;
  double local_6d8;
  code *local_6d0;
  undefined8 *local_6c8;
  double local_6c0;
  double local_6b8;
  double local_6b0;
  longlong ******local_6a8;
  ulonglong uStack_6a0;
  longlong *****local_698;
  int local_690;
  longlong local_688 [7];
  longlong *******local_650;
  longlong *******ppppppplStack_648;
  longlong *******local_640;
  longlong local_638;
  longlong lStack_630;
  longlong local_628;
  longlong lStack_620;
  longlong local_618;
  longlong lStack_610;
  longlong local_608;
  longlong local_600;
  longlong ******local_5f8;
  longlong *******ppppppplStack_5f0;
  longlong *local_5e8;
  undefined8 local_5d8;
  longlong *******ppppppplStack_5d0;
  longlong *local_5c8;
  undefined8 local_558;
  longlong ******pppppplStack_550;
  ulonglong local_548;
  ulonglong local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  longlong *******ppppppplStack_528;
  double local_520;
  double dStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  longlong *******ppppppplStack_4f8;
  longlong *******local_4f0;
  longlong *******ppppppplStack_4e8;
  longlong local_4d8;
  undefined8 uStack_4d0;
  longlong *****local_4c8 [2];
  longlong *****local_4b8;
  int local_4b0;
  uint local_4ac;
  int iStack_4a8;
  int local_4a4;
  undefined1 local_4a0 [8];
  undefined1 *local_498;
  uint local_490;
  longlong ******local_488;
  longlong *******ppppppplStack_480;
  longlong *local_478;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  undefined8 local_448;
  undefined4 local_440;
  _RTL_CRITICAL_SECTION local_438;
  double local_410;
  undefined4 local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  longlong *******local_3e8;
  undefined8 uStack_3e0;
  ulonglong uStack_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  *(longlong *)(param_1 + 8) = param_2;
  local_600 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x50) != 0)) {
    dVar52 = (double)(-(ulonglong)(0.0 <= param_3[5] - param_3[2]) &
                     (ulonglong)(param_3[5] - param_3[2]));
    dVar57 = (double)(-(ulonglong)(0.0 <= param_3[4] - param_3[1]) &
                     (ulonglong)(param_3[4] - param_3[1]));
    uVar42 = -(ulonglong)(dVar52 <= dVar57);
    dVar52 = (double)(~uVar42 & (ulonglong)dVar52 | uVar42 & (ulonglong)dVar57);
    dVar57 = (double)(-(ulonglong)(0.0 <= param_3[3] - *param_3) &
                     (ulonglong)(param_3[3] - *param_3));
    uVar42 = -(ulonglong)(dVar52 <= dVar57);
    dVar52 = (double)(uVar42 & (ulonglong)dVar57 | ~uVar42 & (ulonglong)dVar52);
    uVar59 = 0;
    uVar60 = 0x3ff00000;
    if (1.0 <= dVar52) {
      uVar59 = SUB84(dVar52,0);
      uVar60 = (undefined4)((ulonglong)dVar52 >> 0x20);
    }
    *(ulonglong *)(param_1 + 0x70) = CONCAT44(uVar60,uVar59);
    dVar57 = (double)CONCAT44(uVar60,uVar59) * 4.999999987376214e-07;
    dVar52 = param_3[5] - param_3[2];
    dVar52 = (double)(-(ulonglong)(0.0 <= dVar52) & (ulonglong)dVar52);
    dVar61 = param_3[4] - param_3[1];
    dVar61 = (double)(-(ulonglong)(0.0 <= dVar61) & (ulonglong)dVar61);
    uVar42 = -(ulonglong)(dVar52 <= dVar61);
    dVar61 = (double)(~uVar42 & (ulonglong)dVar52 | uVar42 & (ulonglong)dVar61);
    dVar52 = param_3[3] - *param_3;
    dVar52 = (double)(-(ulonglong)(0.0 <= dVar52) & (ulonglong)dVar52);
    uVar42 = -(ulonglong)(dVar61 <= dVar52);
    dVar52 = (double)(uVar42 & (ulonglong)dVar52 | ~uVar42 & (ulonglong)dVar61);
    if (dVar57 <= dVar52) {
      local_688[4] = 0;
      local_688[5] = 0;
      local_9f8 = param_1;
      local_9f0 = param_4;
      local_9d0 = param_3;
      FUN_14833de52(param_2,param_3,local_688 + 4,&local_650);
      uVar42 = 0;
      local_468 = 0;
      local_460 = 0;
      local_488 = (longlong ******)0x0;
      ppppppplStack_480 = (longlong *******)0x0;
      local_45c = 0xffffffff00000080;
      local_454 = 0;
      local_448 = 0;
      local_440 = 0;
      InitializeCriticalSection(&local_438);
      SetCriticalSectionSpinCount(&local_438,4000);
      local_408 = 0xffffffff;
      local_410 = (double)CONCAT44(uVar60,uVar59) * 9.999999974752427e-06;
      FUN_148340b68(&local_488,*(undefined4 *)(local_600 + 0x50));
      lVar11 = local_600;
      uVar8 = *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24);
      if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_600 + 0x28) - 1U))) {
        uVar42 = 1;
        uVar39 = 1;
        if (1 < (int)uVar8) {
          uVar42 = (ulonglong)uVar8;
        }
        do {
          uVar38 = uVar39;
          if ((uint)uVar42 == uVar38) goto LAB_14833e676;
          uVar39 = uVar38 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_600 + 0x28))[uVar38 >> 9] +
                                             (ulonglong)(uVar38 & 0x1ff) * 2) - 1U));
        uVar42 = (ulonglong)uVar38;
      }
LAB_14833e676:
      if ((uint)uVar42 != uVar8) {
        do {
          uVar38 = (uint)uVar42;
          local_4d8 = CONCAT44(local_4d8._4_4_,uVar38);
          lVar32 = *(longlong *)(*(longlong *)(local_600 + 0x10) + (uVar42 >> 9) * 8);
          uVar16 = (ulonglong)(uVar38 & 0x1ff);
          auVar54._0_8_ = *(double *)(lVar32 + 0x10 + uVar16 * 0x18) / local_410;
          auVar54._8_8_ = 0;
          auVar54 = roundsd(auVar54,auVar54,9);
          auVar51._0_8_ = *(double *)(lVar32 + 8 + uVar16 * 0x18) / local_410;
          auVar51._8_8_ = 0;
          auVar51 = roundsd(auVar51,auVar51,9);
          auVar47._0_8_ = *(double *)(lVar32 + uVar16 * 0x18) / local_410;
          auVar47._8_8_ = 0;
          auVar47 = roundsd(auVar47,auVar47,9);
          local_558 = (longlong *)CONCAT44((int)auVar51._0_8_,(int)auVar47._0_8_);
          pppppplStack_550 = (longlong ******)CONCAT44(pppppplStack_550._4_4_,(int)auVar54._0_8_);
          local_3f8 = (longlong *******)&local_558;
          uStack_3f0 = (longlong *******)&local_4d8;
          FUN_146be634e(&local_488,&local_5d8,&local_3f8,0);
          uVar39 = uVar38 + 1;
          if ((int)(uVar38 + 1) < (int)uVar8) {
            uVar39 = uVar8;
          }
          do {
            if (uVar39 - 1 == (int)uVar42) {
              uVar42 = (ulonglong)uVar39;
              break;
            }
            uVar38 = (int)uVar42 + 1;
            uVar42 = (ulonglong)uVar38;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar11 + 0x28) +
                                                 (ulonglong)(uVar38 >> 9) * 8) +
                                               (ulonglong)(uVar38 & 0x1ff) * 2) - 1U));
        } while ((uint)uVar42 != uVar8);
        uVar8 = *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24);
      }
      local_688[2] = 0;
      local_688[3] = 0;
      local_688[0] = 0;
      local_688[1] = 0;
      FUN_146bad868(local_688,uVar8);
      ppppppplVar19 = (longlong *******)0x0;
      local_4b8 = (longlong *****)0x0;
      local_4b0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4ac = 0x80;
      iStack_4a8 = -1;
      local_4a4 = 0;
      local_498 = (undefined1 *)0x0;
      local_490 = 0;
      uVar8 = *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24);
      if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_600 + 0x28) - 1U))) {
        ppppppplVar19 = (longlong *******)&DAT_00000001;
        uVar39 = 1;
        if (1 < (int)uVar8) {
          ppppppplVar19 = (longlong *******)(ulonglong)uVar8;
        }
        do {
          uVar38 = uVar39;
          if ((uint)ppppppplVar19 == uVar38) goto LAB_14833e833;
          uVar39 = uVar38 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_600 + 0x28))[uVar38 >> 9] +
                                             (ulonglong)(uVar38 & 0x1ff) * 2) - 1U));
        ppppppplVar19 = (longlong *******)(ulonglong)uVar38;
      }
LAB_14833e833:
      dVar61 = (double)CONCAT44(uVar60,uVar59) * 9.999999974752427e-07;
      if ((uint)ppppppplVar19 != uVar8) {
        dVar49 = 1.0 / (dVar61 * 3.0);
        local_9c0 = local_600;
        local_9d4 = uVar8;
        do {
          lVar11 = *(longlong *)
                    (*(longlong *)(local_600 + 0x10) + ((ulonglong)ppppppplVar19 >> 9) * 8);
          uVar42 = (ulonglong)((uint)ppppppplVar19 & 0x1ff);
          dVar44 = (double)local_650 - *(double *)(lVar11 + uVar42 * 0x18);
          dVar48 = (double)ppppppplStack_648 - *(double *)(lVar11 + 8 + uVar42 * 0x18);
          dVar45 = (double)local_640 - *(double *)(lVar11 + 0x10 + uVar42 * 0x18);
          dVar44 = SQRT(dVar45 * dVar45 + dVar48 * dVar48 + dVar44 * dVar44);
          dVar45 = dVar61 + dVar44;
          dVar44 = dVar44 - dVar61;
          dVar48 = dVar49 * dVar44;
          uVar8 = (int)ROUND(dVar48 + dVar48 + -0.5) >> 1;
          dVar48 = dVar49 * dVar45;
          iVar7 = (int)ROUND(dVar48 + dVar48 + -0.5) >> 1;
          local_9e0 = (double)CONCAT44(local_9e0._4_4_,iVar7);
          local_9e8 = ppppppplVar19;
          if ((int)uVar8 <= iVar7) {
            do {
              iVar40 = iStack_4a8;
              uVar42 = uStack_4d0;
              iVar7 = (int)uStack_4d0;
              if ((int)uStack_4d0 != local_4a4) {
                puVar10 = local_498;
                if (local_498 == (undefined1 *)0x0) {
                  puVar10 = local_4a0;
                }
                iVar31 = *(int *)(puVar10 + (ulonglong)(local_490 - 1 & uVar8) * 4);
                while (iVar31 != -1) {
                  lVar11 = local_4d8 + (longlong)iVar31 * 0x78;
                  if (*(uint *)(local_4d8 + (longlong)iVar31 * 0x78) == uVar8) {
                    if (lVar11 != 0) goto LAB_14833ed1e;
                    break;
                  }
                  iVar31 = *(int *)(lVar11 + 0x70);
                }
              }
              if (local_4a4 == 0) {
                uStack_4d0 = CONCAT44(uStack_4d0._4_4_,(int)uStack_4d0 + 1);
                if (uStack_4d0._4_4_ == iVar7) {
                  FUN_1410fd1ac(&local_4d8,uVar42 & 0xffffffff);
                }
                lVar11 = (longlong)iVar7;
                iVar40 = FUN_144a54ea4(local_4c8,1);
                ppppplVar9 = local_4b8;
                if (local_4b8 == (longlong *****)0x0) {
                  ppppplVar9 = (longlong *****)local_4c8;
                }
                iVar31 = iVar40 + 0x1f;
                if (-1 < iVar40) {
                  iVar31 = iVar40;
                }
                bVar6 = (byte)iVar40 & 0x1f;
                puVar1 = (uint *)((longlong)ppppplVar9 + (longlong)(iVar31 >> 5) * 4);
                *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
              }
              else {
                lVar11 = (longlong)iStack_4a8;
                iStack_4a8 = *(int *)(local_4d8 + 4 + lVar11 * 0x78);
                local_4a4 = local_4a4 + -1;
                iVar7 = iVar40;
                if (local_4a4 != 0) {
                  *(undefined4 *)(local_4d8 + (longlong)iStack_4a8 * 0x78) = 0xffffffff;
                }
              }
              lVar32 = local_4d8;
              uVar39 = 1 << ((byte)iVar7 & 0x1f);
              ppppplVar9 = local_4b8;
              if (local_4b8 == (longlong *****)0x0) {
                ppppplVar9 = (longlong *****)local_4c8;
              }
              iVar40 = iVar7 + 0x1f;
              if (-1 < iVar7) {
                iVar40 = iVar7;
              }
              puVar1 = (uint *)((longlong)ppppplVar9 + (longlong)(iVar40 >> 5) * 4);
              *puVar1 = *puVar1 | uVar39;
              iVar31 = local_4a4;
              uVar21 = 1;
              lVar11 = lVar11 * 0x78;
              _Src = (void *)(local_4d8 + lVar11);
              *(uint *)(local_4d8 + lVar11) = uVar8;
              *(undefined8 *)(local_4d8 + 0x68 + lVar11) = 0x400000000;
              *(undefined4 *)(local_4d8 + 0x70 + lVar11) = 0xffffffff;
              uVar38 = (int)uStack_4d0 - local_4a4;
              if (uVar38 != 1) {
                if ((int)uStack_4d0 != local_4a4) {
                  puVar10 = local_498;
                  if (local_498 == (undefined1 *)0x0) {
                    puVar10 = local_4a0;
                  }
                  iVar30 = *(int *)(puVar10 + (ulonglong)(local_490 - 1 & uVar8) * 4);
                  while (iVar30 != -1) {
                    _Dst = (void *)(local_4d8 + (longlong)iVar30 * 0x78);
                    if (*(uint *)(local_4d8 + (longlong)iVar30 * 0x78) == uVar8) {
                      memmove(_Dst,_Src,0x70);
                      if (iVar31 != 0) {
                        *(int *)(lVar32 + (longlong)iStack_4a8 * 0x78) = iVar7;
                      }
                      *(undefined4 *)(lVar32 + lVar11) = 0xffffffff;
                      iVar31 = -1;
                      if (0 < local_4a4) {
                        iVar31 = iStack_4a8;
                      }
                      *(int *)(lVar32 + 4 + lVar11) = iVar31;
                      iStack_4a8 = iVar7;
                      local_4a4 = local_4a4 + 1;
                      ppppplVar9 = local_4b8;
                      if (local_4b8 == (longlong *****)0x0) {
                        ppppplVar9 = (longlong *****)local_4c8;
                      }
                      puVar1 = (uint *)((longlong)ppppplVar9 + (longlong)(iVar40 >> 5) * 4);
                      *puVar1 = *puVar1 & (uVar39 ^ 0xffffffff);
                      ppppppplVar19 = local_9e8;
                      goto LAB_14833ed0e;
                    }
                    iVar30 = *(int *)((longlong)_Dst + 0x70);
                  }
                }
                ppppppplVar19 = local_9e8;
                if (3 < uVar38) {
                  uVar42 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
                  lVar32 = 0x3f;
                  if (uVar42 != 0) {
                    for (; uVar42 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                    }
                  }
                  uVar21 = 1 << ((byte)lVar32 & 0x1f);
                }
              }
              if (((int)uVar38 < 1) || ((int)uVar21 <= (int)local_490)) {
                uVar39 = local_490 - 1 & uVar8;
                *(uint *)((longlong)_Src + 0x74) = uVar39;
                puVar10 = local_498;
                if (local_498 == (undefined1 *)0x0) {
                  puVar10 = local_4a0;
                }
                *(undefined4 *)((longlong)_Src + 0x70) =
                     *(undefined4 *)
                      (puVar10 + ((longlong)(int)local_490 - 1U & (longlong)(int)uVar39) * 4);
                puVar10 = local_498;
                if (local_498 == (undefined1 *)0x0) {
                  puVar10 = local_4a0;
                }
                *(int *)(puVar10 + ((longlong)(int)local_490 - 1U & (longlong)(int)uVar39) * 4) =
                     iVar7;
              }
              else {
                local_490 = uVar21;
                if ((local_498 == (undefined1 *)0x0) ||
                   (FUN_1446efa72(&local_498,0,0,4), local_490 != 0)) {
                  uVar39 = local_490;
                  FUN_144a1cbf0(local_4a0,0,local_490,4);
                  if (0 < (int)uVar39) {
                    uVar38 = 0;
                    do {
                      puVar10 = local_498;
                      if (local_498 == (undefined1 *)0x0) {
                        puVar10 = local_4a0;
                      }
                      *(undefined4 *)(puVar10 + (ulonglong)(local_490 + 0x7fffffff & uVar38) * 4) =
                           0xffffffff;
                      uVar38 = uVar38 + 1;
                    } while (uVar39 != uVar38);
                  }
                  local_558 = (longlong *)&DAT_100000000;
                  pppppplStack_550 = local_4c8;
                  local_548 = 0xffffffff;
                  local_540 = local_540 & 0xffffffff00000000;
                  if (local_4b0 != 0) {
                    FUN_1449c0562(&local_558);
                  }
                  local_3f8 = (longlong *******)&local_4d8;
                  uStack_3e0 = local_548;
                  uStack_3d8 = local_540;
                  uStack_3f0 = (longlong *******)local_558;
                  local_3e8 = (longlong *******)pppppplStack_550;
                  while (uStack_3e0._4_4_ < *(int *)(local_3e8 + 3)) {
                    lVar32 = (longlong)*local_3f8;
                    lVar15 = (longlong)uStack_3e0._4_4_ * 0x78;
                    uVar42 = (longlong)(int)local_490 - 1U & (longlong)*(int *)(lVar32 + lVar15);
                    iVar7 = (int)uVar42;
                    *(int *)(lVar32 + 0x74 + lVar15) = iVar7;
                    puVar10 = local_498;
                    if (local_498 == (undefined1 *)0x0) {
                      puVar10 = local_4a0;
                    }
                    *(undefined4 *)(lVar32 + 0x70 + lVar15) =
                         *(undefined4 *)(puVar10 + ((longlong)(int)local_490 - 1U & uVar42) * 4);
                    puVar10 = local_498;
                    if (local_498 == (undefined1 *)0x0) {
                      puVar10 = local_4a0;
                    }
                    *(int *)(puVar10 + ((longlong)iVar7 & (longlong)(int)local_490 - 1U) * 4) =
                         uStack_3e0._4_4_;
                    uStack_3e0 = CONCAT44(uStack_3e0._4_4_,(uint)uStack_3e0 & ~uStack_3f0._4_4_);
                    FUN_1449c0562(&uStack_3f0);
                  }
                }
              }
LAB_14833ed0e:
              lVar11 = local_4d8 + lVar11;
LAB_14833ed1e:
              lVar32 = lVar11 + 8;
              iVar7 = *(int *)(lVar11 + 0x68);
              if ((longlong)iVar7 == 0) {
                iVar7 = 0;
LAB_14833ed9e:
                *(uint *)(lVar11 + 0x68) = iVar7 + 1U;
                if (*(uint *)(lVar11 + 0x6c) < iVar7 + 1U) {
                  FUN_143b1072e(lVar32,iVar7);
                }
                lVar15 = (longlong)iVar7;
                *(double *)(lVar32 + lVar15 * 0x18) = dVar44;
                *(double *)(lVar11 + 0x10 + lVar15 * 0x18) = dVar45;
                *(int *)(lVar11 + 0x18 + lVar15 * 0x18) = (int)ppppppplVar19;
              }
              else {
                lVar15 = 0;
                bVar41 = false;
                do {
                  pdVar2 = (double *)(lVar11 + 0x10 + lVar15);
                  if ((dVar44 < *pdVar2 || dVar44 == *pdVar2) &&
                     (*(double *)(lVar32 + lVar15) <= dVar45)) {
                    FUN_146b9cc7c(local_688,(ulonglong)ppppppplVar19 & 0xffffffff);
                    if (dVar44 < *(double *)(lVar32 + lVar15)) {
                      *(double *)(lVar32 + lVar15) = dVar44;
                    }
                    bVar41 = true;
                    pdVar2 = (double *)(lVar11 + 0x10 + lVar15);
                    if (*pdVar2 <= dVar45 && dVar45 != *pdVar2) {
                      *(double *)(lVar11 + 0x10 + lVar15) = dVar45;
                    }
                  }
                  lVar15 = lVar15 + 0x18;
                } while ((longlong)iVar7 * 0x18 != lVar15);
                if (!bVar41) {
                  iVar7 = *(int *)(lVar11 + 0x68);
                  goto LAB_14833ed9e;
                }
              }
              bVar41 = uVar8 != local_9e0._0_4_;
              uVar8 = uVar8 + 1;
            } while (bVar41);
          }
          uVar8 = (int)ppppppplVar19 + 1;
          if ((int)uVar8 < (int)local_9d4) {
            uVar8 = local_9d4;
          }
          do {
            if (uVar8 - 1 == (int)ppppppplVar19) {
              ppppppplVar19 = (longlong *******)(ulonglong)uVar8;
              break;
            }
            uVar39 = (int)ppppppplVar19 + 1;
            ppppppplVar19 = (longlong *******)(ulonglong)uVar39;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(local_9c0 + 0x28) +
                                                 (ulonglong)(uVar39 >> 9) * 8) +
                                               (ulonglong)(uVar39 & 0x1ff) * 2) - 1U));
        } while ((uint)ppppppplVar19 != local_9d4);
        uVar8 = *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24);
      }
      FUN_148340bca(local_688,&local_698,uVar8);
      local_6a8 = (longlong ******)0x0;
      uStack_6a0 = 1;
      FUN_1403e3958(&local_6a8,0);
      local_6a8[2] = (longlong *****)local_640;
      *local_6a8 = (longlong *****)local_650;
      local_6a8[1] = (longlong *****)ppppppplStack_648;
      local_6b0 = (local_9d0[2] + local_9d0[5]) * 0.5;
      local_6b8 = (local_9d0[1] + local_9d0[4]) * 0.5;
      local_6c0 = (*local_9d0 + local_9d0[3]) * 0.5;
      uStack_3f0 = (longlong *******)&local_6c0;
      local_3f8 = (longlong *******)&local_600;
      local_6c8 = &local_3f8;
      local_6d0 = FUN_143b1074e;
      local_3e8 = &local_6a8;
      FUN_148340ddc(local_688,&local_698);
      local_710 = local_600;
      local_708 = local_650;
      ppppppplStack_700 = ppppppplStack_648;
      local_6f8 = local_640;
      local_6f0 = (longlong ******)&local_488;
      local_6e8 = local_9f8;
      ppppppplStack_5d0 = (longlong *******)&local_8b8;
      local_558 = (longlong *)0x0;
      pppppplStack_550 = (longlong ******)0x0;
      local_548 = local_548 & 0xffffffff00000000;
      local_540 = 0;
      uStack_538 = 0;
      local_530 = 0;
      ppppppplStack_528 = (longlong *******)0x0;
      local_520 = 0.0;
      dStack_518 = 0.0;
      local_510 = 0;
      uStack_508 = 0;
      local_500 = 0;
      ppppppplStack_4f8 = (longlong *******)0x0;
      local_4f0 = (longlong *******)0x0;
      ppppppplStack_4e8 = (longlong *******)0x0;
      local_3f8 = (longlong *******)&LAB_143b10954;
      uStack_3f0 = &local_848;
      local_5d8 = (longlong ******)&LAB_143b10932;
      local_a08 = (longlong *)0x3f1a36e2eb1c432d;
      local_8b8 = &local_6a8;
      local_6e0 = dVar57;
      local_6d8 = dVar61;
      FUN_146ba91a4(&local_558,uStack_6a0 & 0xffffffff,&local_5d8,&local_3f8);
      bVar41 = (int)local_558 == 1;
      if ((int)local_558 < 2) {
        local_768 = (longlong *******)0x0;
        dStack_760 = 0.0;
        local_758 = 0.0;
        if (bVar41) {
          local_768 = ppppppplStack_528;
          dStack_760 = local_520;
          local_758 = dStack_518;
        }
        lVar11 = param_5[1];
        local_749 = bVar41;
        if ((longlong)(int)lVar11 != 0) {
          lVar32 = *param_5;
          lVar15 = 0;
          do {
            local_8a8 = *(longlong ********)(lVar32 + 0x10 + lVar15);
            local_8b8 = *(longlong ********)(lVar32 + lVar15);
            ppppppplStack_8b0 = (longlong *******)((undefined8 *)(lVar32 + lVar15))[1];
            if ((local_749 != 1) ||
               (dVar49 = (double)local_8a8 * local_758 +
                         (double)local_8b8 * (double)local_768 +
                         (double)ppppppplStack_8b0 * dStack_760,
               uVar42 = -(ulonglong)(-dVar49 <= dVar49),
               (double)(~uVar42 & (ulonglong)-dVar49 | (ulonglong)dVar49 & uVar42) < 0.0001)) {
              puVar24 = (undefined8 *)(lVar32 + lVar15);
              local_788 = *puVar24;
              uStack_780 = puVar24[1];
              local_778 = puVar24[2];
              cVar5 = FUN_143b09b68(&local_710,&local_788,&local_848);
              if (cVar5 != '\0') {
                uStack_3e0 = 0;
                uStack_3d8 = 0;
                lStack_3d0 = 0;
                lStack_3c8 = 0x3ff0000000000000;
                local_3f8 = local_650;
                uStack_3f0 = ppppppplStack_648;
                local_3e8 = local_640;
                local_5c8 = DAT_14c8463c8;
                local_5d8 = DAT_14c8463b8;
                ppppppplStack_5d0 = DAT_14c8463c0;
                FUN_146bfb7f2(&uStack_3e0,&local_5d8,&local_8b8);
                local_9f0[6] = lStack_3c8;
                local_9f0[4] = uStack_3d8;
                local_9f0[5] = lStack_3d0;
                local_9f0[2] = (longlong)local_3e8;
                local_9f0[3] = uStack_3e0;
                *local_9f0 = (longlong)local_3f8;
                local_9f0[1] = (longlong)uStack_3f0;
                lVar11 = *local_9f0;
                lVar32 = local_9f0[1];
                lVar15 = local_9f0[2];
                lVar18 = local_9f0[3];
                lVar53 = local_9f0[4];
                lVar55 = local_9f0[5];
                local_a08 = local_7c8;
                goto LAB_14833f40e;
              }
            }
            lVar15 = lVar15 + 0x18;
          } while ((longlong)(int)lVar11 * 0x18 != lVar15);
        }
        if ((local_749 & 1) != 0) {
          uVar39 = *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24);
          uVar8 = 0;
          if ((uVar39 != 0) &&
             (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_600 + 0x28) - 1U))) {
            uVar38 = 1;
            uVar21 = 1;
            if (1 < (int)uVar39) {
              uVar38 = uVar39;
            }
            do {
              uVar8 = uVar38;
              if (uVar38 == uVar21) break;
              uVar33 = uVar21 >> 9;
              uVar35 = uVar21 & 0x1ff;
              uVar8 = uVar21;
              uVar21 = uVar21 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_600 + 0x28))[uVar33] +
                                                 (ulonglong)uVar35 * 2) - 1U));
          }
          if (uVar8 != uVar39) {
            bVar41 = true;
            do {
              lVar11 = *(longlong *)(*(longlong *)(local_600 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
              uVar42 = (ulonglong)(uVar8 & 0x1ff);
              dVar48 = *(double *)(lVar11 + uVar42 * 0x18) - (double)local_650;
              dVar49 = *(double *)(lVar11 + 8 + uVar42 * 0x18) - (double)ppppppplStack_648;
              dVar44 = *(double *)(lVar11 + 0x10 + uVar42 * 0x18) - (double)local_640;
              dVar45 = dVar44 * local_758 + dVar48 * (double)local_768 + dStack_760 * dVar49;
              dVar48 = dVar48 - dVar45 * (double)local_768;
              dVar49 = dVar49 - dStack_760 * dVar45;
              dVar44 = dVar44 - local_758 * dVar45;
              dVar49 = dVar44 * dVar44 + dVar49 * dVar49 + dVar48 * dVar48;
              if (dVar57 < dVar49) goto LAB_14833fa0b;
              bVar41 = (bool)(bVar41 & dVar49 <= dVar57);
              uVar38 = uVar8 + 1;
              if ((int)(uVar8 + 1) < (int)uVar39) {
                uVar38 = uVar39;
              }
              do {
                uVar21 = uVar38;
                if (uVar38 - 1 == uVar8) break;
                uVar8 = uVar8 + 1;
                uVar21 = uVar8;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(local_600 + 0x28) +
                                                     (ulonglong)(uVar8 >> 9) * 8) +
                                                   (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
              uVar8 = uVar21;
            } while (uVar8 != uVar39);
            if (!bVar41) goto LAB_14833fa0b;
          }
          if (*local_9f8 == '\0') {
            if (0.0 <= local_758) {
              dVar57 = 1.0 / (local_758 + 1.0);
              local_8a8 = (longlong *******)-(double)local_768;
              dVar52 = (double)local_768 * (double)local_768 * dVar57;
              ppppppplStack_8b0 = (longlong *******)((double)local_8a8 * dStack_760 * dVar57);
            }
            else {
              dVar57 = 1.0 / (1.0 - local_758);
              dVar52 = (double)local_768 * (double)local_768 * dVar57;
              ppppppplStack_8b0 = (longlong *******)(-(double)local_768 * dStack_760 * dVar57);
              local_8a8 = local_768;
            }
            local_8b8 = (longlong *******)(1.0 - dVar52);
            uStack_3e0 = 0;
            uStack_3d8 = 0;
            lStack_3d0 = 0;
            lStack_3c8 = 0x3ff0000000000000;
            local_3f8 = local_650;
            uStack_3f0 = ppppppplStack_648;
            local_3e8 = local_640;
            local_5c8 = DAT_14c8463c8;
            local_5d8 = DAT_14c8463b8;
            ppppppplStack_5d0 = DAT_14c8463c0;
            FUN_146bfb7f2(&uStack_3e0);
            local_9f0[6] = lStack_3c8;
            local_9f0[4] = uStack_3d8;
            local_9f0[5] = lStack_3d0;
            local_9f0[2] = (longlong)local_3e8;
            local_9f0[3] = uStack_3e0;
            *local_9f0 = (longlong)local_3f8;
            local_9f0[1] = (longlong)uStack_3f0;
            lVar11 = *local_9f0;
            lVar32 = local_9f0[1];
            lVar15 = local_9f0[2];
            lVar18 = local_9f0[3];
            lVar53 = local_9f0[4];
            lVar55 = local_9f0[5];
            local_a08 = local_808;
            goto LAB_14833f40e;
          }
          goto LAB_14833f154;
        }
LAB_14833fa0b:
        local_818 = (longlong *******)0x0;
        uStack_810 = 0;
        if (local_690 < 1) {
          ppppppplVar19 = (longlong *******)0x0;
        }
        else {
          uVar42 = 0;
          do {
            uVar16 = uStack_810;
            iVar7 = *(int *)((longlong)local_698 + (longlong)(int)uVar42 * 4);
            lVar11 = (longlong)iVar7;
            iVar40 = *(int *)(local_688[0] + lVar11 * 4);
            if (iVar40 != iVar7) {
              piVar27 = (int *)(local_688[0] + lVar11 * 4);
              do {
                *piVar27 = *(int *)(local_688[0] + (longlong)iVar40 * 4);
                iVar7 = *(int *)(local_688[0] + lVar11 * 4);
                lVar11 = (longlong)iVar7;
                piVar27 = (int *)(local_688[0] + lVar11 * 4);
                iVar40 = *piVar27;
              } while (iVar40 != iVar7);
            }
            uVar8 = *(uint *)(local_688[2] + lVar11 * 4);
            lVar11 = (longlong)(int)uStack_810;
            uVar39 = (int)uStack_810 + 1;
            uStack_810 = CONCAT44(uStack_810._4_4_,uVar39);
            if (uStack_810._4_4_ < uVar39) {
              FUN_143b10958(&local_818,uVar16 & 0xffffffff);
            }
            ppppppplVar17 = local_818;
            uVar39 = uVar8 + (int)uVar42;
            local_818[lVar11] = (longlong ******)(uVar42 | (ulonglong)uVar8 << 0x20);
            uVar42 = (ulonglong)uVar39;
          } while ((int)uVar39 < local_690);
          iVar7 = (int)uStack_810;
          ppppppplVar19 = (longlong *******)(longlong)(int)uStack_810;
          if (1 < (longlong)ppppppplVar19) {
            memset(&local_3e8,0,0x2f0);
            local_3f8 = ppppppplVar17;
            uStack_3f0 = ppppppplVar17 + (longlong)((longlong)ppppppplVar19 + -1);
            fVar43 = logf((float)iVar7);
            local_3e8 = (longlong *******)CONCAT44(local_3e8._4_4_,(int)(longlong)(fVar43 + fVar43))
            ;
            plVar12 = &local_3f8;
            do {
              puVar14 = (undefined8 *)*plVar12;
              puVar26 = (undefined8 *)plVar12[1];
              iVar7 = (int)plVar12[2];
              iVar40 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar14) >> 3);
              uVar8 = iVar40 + 1;
              puVar20 = puVar14;
              puVar24 = puVar26;
              if (iVar7 != 0) {
LAB_14833fb56:
                if (8 < (int)uVar8) {
                  uVar3 = puVar14[uVar8 >> 1];
                  puVar14[uVar8 >> 1] = *puVar14;
                  *puVar14 = uVar3;
                  puVar34 = puVar24 + 1;
                  puVar13 = puVar14;
                  do {
                    puVar4 = puVar13 + 1;
                    puVar28 = puVar13 + 1;
                    do {
                      puVar13 = puVar28;
                      puVar36 = puVar4;
                      if (puVar24 < puVar13) break;
                      puVar4 = puVar36 + 1;
                      puVar28 = puVar13 + 1;
                    } while (*(int *)((longlong)puVar13 + 4) <= *(int *)((longlong)puVar14 + 4));
                    puVar4 = puVar34 + -2;
                    do {
                      puVar28 = puVar34;
                      puVar37 = puVar4;
                      puVar34 = puVar28 + -1;
                      if (puVar34 <= puVar14) break;
                      puVar4 = puVar37 + -1;
                    } while (*(int *)((longlong)puVar14 + 4) <= *(int *)((longlong)puVar28 + -4));
                    if (puVar34 < puVar13) goto LAB_14833fbd7;
                    uVar3 = *puVar13;
                    *puVar13 = *puVar34;
                    *puVar34 = uVar3;
                  } while( true );
                }
                for (; puVar26 = puVar14, puVar20 = puVar14, puVar14 < puVar24;
                    puVar24 = puVar24 + -1) {
                  while (puVar34 = puVar26, puVar26 = puVar20 + 1, puVar26 <= puVar24) {
                    piVar27 = (int *)((longlong)puVar20 + 0xc);
                    puVar20 = puVar26;
                    if (*piVar27 <= *(int *)((longlong)puVar34 + 4)) {
                      puVar26 = puVar34;
                    }
                  }
                  uVar3 = *puVar34;
                  *puVar34 = *puVar24;
                  *puVar24 = uVar3;
                }
                goto LAB_14833fdee;
              }
LAB_14833fc6a:
              if (uVar8 != 0) {
                iVar7 = (iVar40 - (iVar40 + -1 >> 0x1f)) + -1 >> 1;
                iVar40 = iVar7;
joined_r0x00014833fc8d:
                do {
                  iVar31 = iVar7 * 2 + 1;
                  if (iVar31 < (int)uVar8) {
                    iVar30 = iVar7 * 2 + 2;
                    if ((iVar30 < (int)uVar8) &&
                       (*(int *)((longlong)puVar14 + (longlong)iVar31 * 8 + 4) <=
                        *(int *)((longlong)puVar14 + (longlong)iVar30 * 8 + 4))) {
                      iVar31 = iVar30;
                    }
                    lVar32 = (longlong)iVar7;
                    lVar11 = (longlong)iVar31;
                    if (*(int *)((longlong)puVar14 + lVar32 * 8 + 4) <
                        *(int *)((longlong)puVar14 + lVar11 * 8 + 4)) {
                      uVar3 = puVar14[lVar32];
                      puVar14[lVar32] = puVar14[lVar11];
                      puVar14[lVar11] = uVar3;
                      iVar7 = iVar31;
                      goto joined_r0x00014833fc8d;
                    }
                  }
                  bVar41 = iVar40 != 0;
                  iVar7 = iVar40 + -1;
                  iVar40 = iVar7;
                } while (bVar41);
                if (1 < (int)uVar8) {
                  uVar42 = (ulonglong)uVar8;
                  uVar3 = *puVar14;
                  *puVar14 = puVar14[uVar42 - 1];
                  puVar14[uVar42 - 1] = uVar3;
                  if (uVar8 != 2) {
                    do {
                      uVar16 = uVar42 - 1;
                      iVar7 = 0;
                      iVar31 = 1;
                      iVar40 = 0;
                      do {
                        iVar7 = iVar7 + 2;
                        iVar30 = iVar31;
                        if (((longlong)iVar7 < (longlong)uVar16) &&
                           (*(int *)((longlong)puVar14 + (longlong)iVar31 * 8 + 4) <=
                            *(int *)((longlong)puVar14 + (longlong)iVar7 * 8 + 4))) {
                          iVar30 = iVar7;
                        }
                        lVar11 = (longlong)iVar40;
                        lVar32 = (longlong)iVar30;
                        if (*(int *)((longlong)puVar14 + lVar32 * 8 + 4) <=
                            *(int *)((longlong)puVar14 + lVar11 * 8 + 4)) break;
                        uVar3 = puVar14[lVar11];
                        puVar14[lVar11] = puVar14[lVar32];
                        puVar14[lVar32] = uVar3;
                        iVar7 = iVar30 * 2;
                        iVar31 = iVar30 * 2 + 1;
                        iVar40 = iVar30;
                      } while ((longlong)iVar31 < (longlong)uVar16);
                      uVar3 = *puVar14;
                      *puVar14 = puVar14[uVar42 - 2];
                      puVar14[uVar42 - 2] = uVar3;
                      uVar42 = uVar16;
                    } while (2 < uVar16);
                  }
                }
              }
LAB_14833fdee:
              plVar12 = plVar12 + -3;
            } while (&local_3f8 <= plVar12);
            ppppppplVar19 = (longlong *******)(uStack_810 & 0xffffffff);
          }
        }
        local_820 = dVar52 * 1e-08 * dVar52;
        local_848 = (longlong ******)&local_749;
        local_840 = (longlong *******)&local_768;
        local_838 = local_650;
        ppppppplStack_830 = ppppppplStack_648;
        local_828 = local_640;
        if ((int)ppppppplVar19 != 0) {
          ppppppplVar17 = local_818 + (int)ppppppplVar19;
          ppppppplVar19 = local_860;
          ppppppplVar22 = local_818;
          local_9e8 = ppppppplVar17;
          local_9c8 = dVar61;
          do {
            uVar8 = *(uint *)((longlong)local_698 + (longlong)*(int *)ppppppplVar22 * 4);
            if ((-1 < (int)uVar8) &&
               ((int)uVar8 < *(int *)(local_600 + 0x20) * 0x200 + *(int *)(local_600 + 0x24))) {
              uVar42 = (ulonglong)(uVar8 >> 9);
              uVar16 = (ulonglong)(uVar8 & 0x1ff);
              if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(local_600 + 0x28) + uVar42 * 8) +
                                      uVar16 * 2) - 1U) < 0xfffe) &&
                 (*(int *)((longlong)ppppppplVar22 + 4) != 1)) {
                local_5d8 = &local_698;
                local_5c8 = &local_600;
                local_3f8 = (longlong *******)0x0;
                uStack_3f0 = (longlong *******)0x0;
                local_3e8 = (longlong *******)((ulonglong)local_3e8 & 0xffffffff00000000);
                local_390 = 0;
                uStack_388 = 0;
                local_3a0 = 0;
                uStack_398 = 0;
                local_3b0 = 0;
                uStack_3a8 = 0;
                local_3c0 = 0;
                uStack_3b8 = 0;
                lStack_3d0 = 0;
                lStack_3c8 = 0;
                uStack_3e0 = 0;
                uStack_3d8 = 0;
                local_8b8 = (longlong *******)&LAB_143b10afe;
                local_5f8 = (longlong ******)&LAB_143b10ab2;
                local_a08 = (longlong *)0x3f1a36e2eb1c432d;
                ppppppplStack_8b0 = ppppppplVar19;
                ppppppplStack_5f0 = (longlong *******)&local_5d8;
                ppppppplStack_5d0 = ppppppplVar22;
                FUN_146ba91a4(&local_3f8,*(int *)((longlong)ppppppplVar22 + 4),&local_5f8,&local_8b8
                             );
                puVar24 = &local_3f8;
                ppppppplVar17 = (longlong *******)&local_5d8;
                for (lVar11 = 0xf; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *ppppppplVar17 = (longlong ******)*puVar24;
                  puVar24 = puVar24 + 1;
                  ppppppplVar17 = ppppppplVar17 + 1;
                }
                if (-1 < (int)local_3f8) {
                  lVar32 = 1;
                  lVar11 = 0;
                  do {
                    lVar15 = *(longlong *)(local_600 + 0x10);
                    iVar7 = *(int *)((longlong)ppppppplVar22 + 4);
                    if (0 < iVar7) {
                      uVar8 = *(uint *)((longlong)local_698 +
                                       ((longlong)*(int *)((longlong)&local_3f8 + lVar11 * 4 + 4) +
                                       (longlong)*(int *)ppppppplVar22) * 4);
                      lVar18 = (longlong)(int)uVar8;
                      lVar15 = *(longlong *)(lVar15 + (ulonglong)(uVar8 >> 9) * 8);
                      uVar29 = (ulonglong)(uVar8 & 0x1ff);
                      dVar52 = *(double *)(lVar15 + uVar29 * 0x18);
                      dVar57 = *(double *)(lVar15 + 8 + uVar29 * 0x18);
                      dVar61 = *(double *)(lVar15 + 0x10 + uVar29 * 0x18);
                      local_9e0 = *(double *)(local_688[4] + lVar18 * 0x18);
                      dVar49 = *(double *)(local_688[4] + 8 + lVar18 * 0x18);
                      dVar44 = *(double *)(local_688[4] + 0x10 + lVar18 * 0x18);
                      iVar40 = 0;
                      do {
                        lVar15 = 0;
                        do {
                          if (*(int *)((longlong)&local_5d8 + lVar15 * 4 + 4) == iVar40)
                          goto LAB_148340262;
                          lVar15 = lVar15 + 1;
                        } while (lVar32 != lVar15);
                        uVar8 = *(uint *)((longlong)local_698 +
                                         ((longlong)iVar40 + (longlong)*(int *)ppppppplVar22) * 4);
                        lVar15 = *(longlong *)
                                  (*(longlong *)(local_600 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
                        uVar29 = (ulonglong)(uVar8 & 0x1ff);
                        dVar45 = *(double *)(lVar15 + uVar29 * 0x18);
                        dVar48 = *(double *)(lVar15 + 8 + uVar29 * 0x18);
                        dVar58 = *(double *)(lVar15 + 0x10 + uVar29 * 0x18);
                        dVar46 = dVar58 - dVar61;
                        dVar50 = dVar48 - dVar57;
                        dVar62 = dVar45 - dVar52;
                        dVar56 = dVar46 * dVar46 + dVar62 * dVar62 + dVar50 * dVar50;
                        if ((9.99999993922529e-09 < dVar56) &&
                           (((local_749 != 1 ||
                             (local_9c8 <
                              ABS((dVar58 * local_758 +
                                  dVar45 * (double)local_768 + dVar48 * dStack_760) -
                                  (local_758 * dVar61 +
                                  (double)local_768 * dVar52 + dVar57 * dStack_760)))) &&
                            (lVar15 = (longlong)(int)uVar8,
                            dVar45 = *(double *)(local_688[4] + lVar15 * 0x18) - local_9e0,
                            dVar58 = *(double *)(local_688[4] + 8 + lVar15 * 0x18) - dVar49,
                            dVar48 = *(double *)(local_688[4] + 0x10 + lVar15 * 0x18) - dVar44,
                            dVar48 * dVar48 + dVar58 * dVar58 + dVar45 * dVar45 <= 1e-08)))) {
                          local_868 = 1.0 / SQRT(dVar56);
                          local_878 = dVar62 * local_868;
                          local_870 = dVar50 * local_868;
                          local_868 = dVar46 * local_868;
                          cVar5 = FUN_143b09b68(&local_710,&local_878,ppppppplVar19);
                          if (cVar5 != '\0') {
                            lStack_8a0 = 0;
                            lStack_898 = 0;
                            lStack_890 = 0;
                            local_888 = 0x3ff0000000000000;
                            local_8b8 = local_650;
                            ppppppplStack_8b0 = ppppppplStack_648;
                            local_8a8 = local_640;
                            local_5e8 = DAT_14c8463c8;
                            local_5f8 = DAT_14c8463b8;
                            ppppppplStack_5f0 = DAT_14c8463c0;
                            FUN_146bfb7f2(&lStack_8a0,&local_5f8,local_860);
                            local_9f0[6] = local_888;
                            local_9f0[4] = lStack_898;
                            local_9f0[5] = lStack_890;
                            local_9f0[2] = (longlong)local_8a8;
                            local_9f0[3] = lStack_8a0;
                            *local_9f0 = (longlong)local_8b8;
                            local_9f0[1] = (longlong)ppppppplStack_8b0;
                            lVar11 = *local_9f0;
                            lVar32 = local_9f0[1];
                            lVar15 = local_9f0[2];
                            lVar18 = local_9f0[3];
                            lVar53 = local_9f0[4];
                            lVar55 = local_9f0[5];
                            local_a08 = local_8f8;
                            goto LAB_1483403fc;
                          }
                          iVar7 = *(int *)((longlong)ppppppplVar22 + 4);
                        }
LAB_148340262:
                        iVar40 = iVar40 + 1;
                      } while (iVar40 < iVar7);
                      lVar15 = *(longlong *)(local_600 + 0x10);
                    }
                    lVar15 = *(longlong *)(lVar15 + uVar42 * 8);
                    local_908 = *(undefined8 *)(lVar15 + 0x10 + uVar16 * 0x18);
                    puVar24 = (undefined8 *)(lVar15 + uVar16 * 0x18);
                    local_918 = *puVar24;
                    uStack_910 = puVar24[1];
                    cVar5 = FUN_143b09f22(&local_848,&local_918,ppppppplVar19);
                    if (cVar5 != '\0') {
                      lStack_8a0 = 0;
                      lStack_898 = 0;
                      lStack_890 = 0;
                      local_888 = 0x3ff0000000000000;
                      local_8b8 = local_650;
                      ppppppplStack_8b0 = ppppppplStack_648;
                      local_8a8 = local_640;
                      local_5e8 = DAT_14c8463c8;
                      local_5f8 = DAT_14c8463b8;
                      ppppppplStack_5f0 = DAT_14c8463c0;
                      FUN_146bfb7f2(&lStack_8a0,&local_5f8,local_860);
                      local_9f0[6] = local_888;
                      local_9f0[4] = lStack_898;
                      local_9f0[5] = lStack_890;
                      local_9f0[2] = (longlong)local_8a8;
                      local_9f0[3] = lStack_8a0;
                      *local_9f0 = (longlong)local_8b8;
                      local_9f0[1] = (longlong)ppppppplStack_8b0;
                      lVar11 = *local_9f0;
                      lVar32 = local_9f0[1];
                      lVar15 = local_9f0[2];
                      lVar18 = local_9f0[3];
                      lVar53 = local_9f0[4];
                      lVar55 = local_9f0[5];
                      local_a08 = local_958;
                      goto LAB_1483403fc;
                    }
                    lVar32 = lVar32 + 1;
                    bVar41 = lVar11 < (int)local_3f8;
                    lVar11 = lVar11 + 1;
                  } while (bVar41);
                }
                iVar7 = *(int *)((longlong)ppppppplVar22 + 4);
                ppppppplVar17 = local_9e8;
                if (0 < iVar7) {
                  iVar40 = 0;
LAB_1483402e0:
                  if (-1 < (int)local_3f8) {
                    lVar11 = 0;
                    do {
                      if (*(int *)((longlong)&local_5d8 + lVar11 * 4 + 4) == iVar40)
                      goto LAB_14834034a;
                      lVar11 = lVar11 + 1;
                    } while (((ulonglong)local_3f8 & 0xffffffff) + 1 != lVar11);
                  }
                  lVar11 = *(longlong *)(*(longlong *)(local_600 + 0x10) + uVar42 * 8);
                  puVar24 = (undefined8 *)(lVar11 + uVar16 * 0x18);
                  local_978 = *puVar24;
                  uStack_970 = puVar24[1];
                  local_968 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
                  cVar5 = FUN_143b09f22(&local_848,&local_978,ppppppplVar19);
                  if (cVar5 == '\0') goto code_r0x000148340347;
                  lStack_8a0 = 0;
                  lStack_898 = 0;
                  lStack_890 = 0;
                  local_888 = 0x3ff0000000000000;
                  local_8b8 = local_650;
                  ppppppplStack_8b0 = ppppppplStack_648;
                  local_8a8 = local_640;
                  local_5e8 = DAT_14c8463c8;
                  local_5f8 = DAT_14c8463b8;
                  ppppppplStack_5f0 = DAT_14c8463c0;
                  FUN_146bfb7f2(&lStack_8a0,&local_5f8,local_860);
                  local_9f0[6] = local_888;
                  local_9f0[4] = lStack_898;
                  local_9f0[5] = lStack_890;
                  local_9f0[2] = (longlong)local_8a8;
                  local_9f0[3] = lStack_8a0;
                  *local_9f0 = (longlong)local_8b8;
                  local_9f0[1] = (longlong)ppppppplStack_8b0;
                  lVar11 = *local_9f0;
                  lVar32 = local_9f0[1];
                  lVar15 = local_9f0[2];
                  lVar18 = local_9f0[3];
                  lVar53 = local_9f0[4];
                  lVar55 = local_9f0[5];
                  local_a08 = local_9b8;
LAB_1483403fc:
                  *local_a08 = lVar11;
                  local_a08[1] = lVar32;
                  local_a08[2] = lVar15;
                  local_a08[3] = lVar18;
                  local_a08[4] = lVar53;
                  local_a08[5] = lVar55;
                  local_a08[6] = local_9f0[6];
                  bVar6 = FUN_148340eac(local_9f8,local_600,&local_488,local_688 + 4);
                  uVar25 = (undefined7)((ulonglong)&lStack_8a0 >> 8);
                  bVar23 = 1;
                  goto LAB_14833fe73;
                }
              }
            }
LAB_14833ff13:
            ppppppplVar22 = ppppppplVar22 + 1;
          } while (ppppppplVar22 != ppppppplVar17);
        }
        bVar6 = (byte)ppppppplVar19;
        bVar23 = 0;
        uVar25 = 0;
LAB_14833fe73:
        if (local_818 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        uVar42 = CONCAT71(uVar25,bVar23 & bVar6);
      }
      else {
        local_8a8 = ppppppplStack_4e8;
        local_8b8 = ppppppplStack_4f8;
        ppppppplStack_8b0 = local_4f0;
        if ((int)local_558 == 3) {
LAB_14833f154:
          uVar42 = 0;
        }
        else {
          uStack_3e0 = 0;
          uStack_3d8 = 0;
          lStack_3d0 = 0;
          lStack_3c8 = 0x3ff0000000000000;
          local_3f8 = local_650;
          uStack_3f0 = ppppppplStack_648;
          local_3e8 = local_640;
          local_5c8 = DAT_14c8463c8;
          local_5d8 = DAT_14c8463b8;
          ppppppplStack_5d0 = DAT_14c8463c0;
          FUN_146bfb7f2(&uStack_3e0,&local_5d8,&local_8b8);
          local_9f0[6] = lStack_3c8;
          local_9f0[4] = uStack_3d8;
          local_9f0[5] = lStack_3d0;
          local_9f0[2] = (longlong)local_3e8;
          local_9f0[3] = uStack_3e0;
          *local_9f0 = (longlong)local_3f8;
          local_9f0[1] = (longlong)uStack_3f0;
          lVar11 = *local_9f0;
          lVar32 = local_9f0[1];
          lVar15 = local_9f0[2];
          lVar18 = local_9f0[3];
          lVar53 = local_9f0[4];
          lVar55 = local_9f0[5];
          local_a08 = local_748;
LAB_14833f40e:
          *local_a08 = lVar11;
          local_a08[1] = lVar32;
          local_a08[2] = lVar15;
          local_a08[3] = lVar18;
          local_a08[4] = lVar53;
          local_a08[5] = lVar55;
          local_a08[6] = local_9f0[6];
          uVar8 = FUN_148340eac(local_9f8,local_600,&local_488,local_688 + 4);
          uVar42 = (ulonglong)uVar8;
        }
      }
      if (local_6a8 != (longlong ******)0x0) {
        FUN_1400020a8();
      }
      if (local_698 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      local_490 = 0;
      if (local_498 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_558 = (longlong *)&DAT_100000000;
      local_548 = 0xffffffff;
      local_540 = local_540 & 0xffffffff00000000;
      pppppplStack_550 = local_4c8;
      if (local_4b0 != 0) {
        FUN_1449c0562(&local_558);
      }
      local_3f8 = (longlong *******)&local_4d8;
      uStack_3f0 = (longlong *******)local_558;
      local_3e8 = (longlong *******)pppppplStack_550;
      uStack_3e0 = local_548;
      uVar16 = uStack_3e0;
      uStack_3d8 = local_540;
      uStack_3e0._4_4_ = (int)(local_548 >> 0x20);
      bVar41 = uStack_3e0._4_4_ < *(int *)(pppppplStack_550 + 3);
      uStack_3e0 = uVar16;
      if (bVar41) {
        do {
          uStack_3e0 = CONCAT44(uStack_3e0._4_4_,(uint)uStack_3e0 & ~uStack_3f0._4_4_);
          FUN_1449c0562(&uStack_3f0);
        } while (uStack_3e0._4_4_ < *(int *)(local_3e8 + 3));
      }
      uVar16 = uStack_4d0 >> 0x20;
      uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
      if ((int)uVar16 != 0) {
        FUN_1410fd13e(&local_4d8,0);
      }
      iStack_4a8 = 0xffffffff;
      local_4a4 = 0;
      local_4b0 = 0;
      if (0x80 < local_4ac) {
        local_4ac = 0x80;
        FUN_1446efbd8(local_4c8,0);
      }
      if (local_4b8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (local_4d8 != 0) {
        FUN_1400020a8();
      }
      if (local_688[2] != 0) {
        FUN_1400020a8();
      }
      if (local_688[0] != 0) {
        FUN_1400020a8();
      }
      FUN_146be6294(&local_488);
      if (local_688[4] != 0) {
        FUN_1400020a8();
      }
      goto LAB_14833e517;
    }
    if (*param_1 == '\0') {
      if ((int)param_5[1] == 0) {
        local_548 = DAT_14c8463b0;
        local_558 = DAT_14c8463a0;
        pppppplStack_550 = DAT_14c8463a8;
      }
      else {
        puVar24 = (undefined8 *)*param_5;
        local_548 = puVar24[2];
        local_558 = (longlong *)*puVar24;
        pppppplStack_550 = (longlong ******)puVar24[1];
      }
      local_3e8 = (longlong *******)((param_3[5] + param_3[2]) * 0.5);
      uStack_3f0 = (longlong *******)((param_3[4] + param_3[1]) * 0.5);
      local_3f8 = (longlong *******)((param_3[3] + *param_3) * 0.5);
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      lStack_3d0 = 0;
      lStack_3c8 = 0x3ff0000000000000;
      local_478 = DAT_14c8463c8;
      local_488 = DAT_14c8463b8;
      ppppppplStack_480 = DAT_14c8463c0;
      FUN_146bfb7f2(&uStack_3e0,&local_488,&local_558);
      param_4[6] = lStack_3c8;
      param_4[4] = uStack_3d8;
      param_4[5] = lStack_3d0;
      param_4[2] = (longlong)local_3e8;
      param_4[3] = uStack_3e0;
      *param_4 = (longlong)local_3f8;
      param_4[1] = (longlong)uStack_3f0;
      local_638 = *param_4;
      lStack_630 = param_4[1];
      local_628 = param_4[2];
      lStack_620 = param_4[3];
      local_618 = param_4[4];
      lStack_610 = param_4[5];
      local_608 = param_4[6];
      uVar8 = FUN_1483406c8(param_1,local_600,param_3);
      uVar42 = (ulonglong)uVar8;
      goto LAB_14833e517;
    }
  }
  uVar42 = 0;
LAB_14833e517:
  if ((local_f0 ^ (ulonglong)auStack_a28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar42 & 0xffffffff;
LAB_14833fbd7:
  uVar3 = *puVar14;
  *puVar14 = *puVar34;
  *puVar34 = uVar3;
  iVar7 = iVar7 + -1;
  puVar28 = puVar28 + -2;
  if ((longlong)puVar37 - (longlong)puVar20 < (longlong)puVar26 - (longlong)puVar36) {
    if (puVar13 < puVar24) {
      *plVar12 = (longlong)puVar13;
      plVar12[1] = (longlong)puVar24;
      *(int *)(plVar12 + 2) = iVar7;
      plVar12 = plVar12 + 3;
    }
    puVar36 = puVar14;
    puVar26 = puVar37;
    if (puVar34 <= puVar14 + 1) goto LAB_14833fdee;
  }
  else {
    if (puVar14 + 1 < puVar34) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)puVar28;
      *(int *)(plVar12 + 2) = iVar7;
      plVar12 = plVar12 + 3;
    }
    puVar14 = puVar13;
    puVar28 = puVar24;
    puVar26 = puVar24;
    if (puVar24 <= puVar13) goto LAB_14833fdee;
  }
  iVar40 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar36) >> 3);
  uVar8 = iVar40 + 1;
  puVar20 = puVar36;
  puVar24 = puVar28;
  if (iVar7 == 0) goto LAB_14833fc6a;
  goto LAB_14833fb56;
code_r0x000148340347:
  iVar7 = *(int *)((longlong)ppppppplVar22 + 4);
LAB_14834034a:
  iVar40 = iVar40 + 1;
  ppppppplVar17 = local_9e8;
  if (iVar7 <= iVar40) goto LAB_14833ff13;
  goto LAB_1483402e0;
}



// FUNCTION 1483406c8 FUN_1483406c8 body=1183 status=ok
// SIG undefined FUN_1483406c8(void)

ulonglong FUN_1483406c8(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  uint local_18c;
  longlong local_188 [2];
  double local_178;
  double local_170;
  double local_168;
  int local_15c;
  int local_158;
  int local_154;
  int *local_150;
  uint *local_148;
  undefined1 local_13c [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  _RTL_CRITICAL_SECTION local_e8;
  double local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(longlong *)(param_1 + 8) = param_2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x50) == 0)) {
    uVar7 = 0;
  }
  else {
    dVar9 = (double)(-(ulonglong)(0.0 <= param_3[5] - param_3[2]) &
                    (ulonglong)(param_3[5] - param_3[2]));
    dVar13 = (double)(-(ulonglong)(0.0 <= param_3[4] - param_3[1]) &
                     (ulonglong)(param_3[4] - param_3[1]));
    uVar7 = -(ulonglong)(dVar9 <= dVar13);
    dVar9 = (double)(~uVar7 & (ulonglong)dVar9 | uVar7 & (ulonglong)dVar13);
    dVar13 = (double)(-(ulonglong)(0.0 <= param_3[3] - *param_3) &
                     (ulonglong)(param_3[3] - *param_3));
    uVar7 = -(ulonglong)(dVar9 <= dVar13);
    dVar13 = (double)(uVar7 & (ulonglong)dVar13 | ~uVar7 & (ulonglong)dVar9);
    dVar9 = 1.0;
    if (1.0 <= dVar13) {
      dVar9 = dVar13;
    }
    *(double *)(param_1 + 0x70) = dVar9;
    local_188[0] = 0;
    local_188[1] = 0;
    FUN_14833de52(param_2,param_3,local_188,&local_178);
    dVar9 = param_4[3];
    dVar13 = param_4[4];
    dVar10 = param_4[5] + param_4[5];
    dVar1 = *(double *)(param_1 + 0x70);
    uVar7 = 0;
    if (ABS((1.0 - ((dVar13 + dVar13) * dVar13 + dVar9 * (dVar9 + dVar9))) *
            (local_168 - param_4[2]) +
            (dVar10 * dVar13 - (dVar9 + dVar9) * param_4[6]) * (local_170 - param_4[1]) +
            (dVar9 * dVar10 + param_4[6] * (dVar13 + dVar13)) * (local_178 - *param_4)) <=
        dVar1 * 4.999999987376214e-07) {
      local_118 = 0;
      local_110 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_10c = 0xffffffff00000080;
      local_104 = 0;
      local_f8 = 0;
      local_f0 = 0;
      InitializeCriticalSection(&local_e8);
      SetCriticalSectionSpinCount(&local_e8,4000);
      local_b8 = 0xffffffff;
      local_c0 = dVar1 * 9.999999974752427e-06;
      FUN_148340b68(&local_138,*(undefined4 *)(param_2 + 0x50));
      uVar5 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
      if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
        uVar7 = 1;
        uVar3 = 1;
        if (1 < (int)uVar5) {
          uVar7 = (ulonglong)uVar5;
        }
        do {
          uVar6 = uVar3;
          if ((uint)uVar7 == uVar6) goto LAB_1483409b8;
          uVar3 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar6 >> 9] +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        uVar7 = (ulonglong)uVar6;
      }
LAB_1483409b8:
      if ((uint)uVar7 != uVar5) {
        do {
          uVar6 = (uint)uVar7;
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (uVar7 >> 9) * 8);
          uVar4 = (ulonglong)(uVar6 & 0x1ff);
          auVar11._0_8_ = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) / local_c0;
          auVar11._8_8_ = 0;
          auVar12 = roundsd(auVar11,auVar11,9);
          local_154 = (int)auVar12._0_8_;
          auVar8._0_8_ = *(double *)(lVar2 + 8 + uVar4 * 0x18) / local_c0;
          auVar8._8_8_ = 0;
          auVar12 = roundsd(auVar8,auVar8,9);
          local_158 = (int)auVar12._0_8_;
          auVar12._0_8_ = *(double *)(lVar2 + uVar4 * 0x18) / local_c0;
          auVar12._8_8_ = 0;
          auVar12 = roundsd(auVar12,auVar12,9);
          local_15c = (int)auVar12._0_8_;
          local_150 = &local_15c;
          local_148 = &local_18c;
          local_18c = uVar6;
          FUN_146be634e(&local_138,local_13c,&local_150,0);
          uVar3 = uVar6 + 1;
          if ((int)(uVar6 + 1) < (int)uVar5) {
            uVar3 = uVar5;
          }
          do {
            if (uVar3 - 1 == (int)uVar7) {
              uVar7 = (ulonglong)uVar3;
              break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x28) +
                                                 (ulonglong)(uVar6 >> 9) * 8) +
                                               (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        } while ((uint)uVar7 != uVar5);
      }
      local_198 = param_4[6];
      local_1d8 = &local_1c8;
      local_1c8 = *param_4;
      dStack_1c0 = param_4[1];
      local_1b8 = param_4[2];
      dStack_1b0 = param_4[3];
      local_1a8 = param_4[4];
      dStack_1a0 = param_4[5];
      uVar5 = FUN_148340eac(param_1,param_2,&local_138,local_188);
      uVar7 = (ulonglong)uVar5;
      FUN_146be6294(&local_138);
    }
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148340b68 FUN_148340b68 body=96 status=ok
// SIG undefined FUN_148340b68(void)

void FUN_148340b68(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)param_2);
    }
    FUN_148374260(param_1,param_2);
    iVar1 = 1;
    if (3 < param_2) {
      uVar2 = (param_2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_146be6554(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148340bca FUN_148340bca body=529 status=ok
// SIG undefined FUN_148340bca(void)

longlong * FUN_148340bca(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint local_b4;
  uint *local_b0;
  int *local_a8;
  undefined1 local_9c [4];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar12 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a1a59e(param_2,param_3,1);
  if ((int)param_3 < 1) {
    local_50 = 0;
  }
  else {
    uVar11 = 0;
    uVar7 = (ulonglong)param_3;
    do {
      lVar2 = *param_1;
      uVar8 = (ulonglong)*(uint *)(lVar2 + uVar11 * 4);
      uVar10 = (uint)uVar11;
      uVar5 = uVar11;
      local_b4 = uVar10;
      if (uVar11 != uVar8) {
        puVar9 = (uint *)(lVar2 + uVar11 * 4);
        do {
          *puVar9 = *(uint *)(lVar2 + (longlong)(int)uVar8 * 4);
          lVar2 = *param_1;
          local_b4 = *(uint *)(lVar2 + uVar5 * 4);
          uVar5 = (ulonglong)(int)local_b4;
          puVar9 = (uint *)(lVar2 + uVar5 * 4);
          uVar8 = (ulonglong)*puVar9;
        } while (*puVar9 != local_b4);
      }
      iVar6 = *(int *)(param_1[2] + uVar5 * 4);
      if (iVar6 == 1) {
        iVar6 = (int)uVar7;
        uVar7 = (ulonglong)(iVar6 - 1);
        *(uint *)(*param_2 + -4 + (longlong)iVar6 * 4) = uVar10;
      }
      else {
        if ((int)uStack_90 != local_64) {
          puVar3 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar3 = local_60;
          }
          iVar1 = *(int *)(puVar3 + (ulonglong)(local_50 - 1U & local_b4) * 4);
          while (iVar1 != -1) {
            lVar2 = local_98 + (longlong)iVar1 * 0x10;
            if (*(uint *)(local_98 + (longlong)iVar1 * 0x10) == local_b4) {
              piVar4 = (int *)(lVar2 + 4);
              if (piVar4 != (int *)0x0 && lVar2 != 0) {
                iVar6 = *piVar4;
                *piVar4 = iVar6 + 1;
                *(uint *)(*param_2 + (longlong)iVar6 * 4) = uVar10;
                goto LAB_148340caa;
              }
              break;
            }
            iVar1 = *(int *)(lVar2 + 8);
          }
        }
        *(uint *)(*param_2 + (longlong)iVar12 * 4) = uVar10;
        local_b8 = iVar12 + 1;
        local_b0 = &local_b4;
        local_a8 = &local_b8;
        FUN_140c0fbee(&local_98,local_9c,&local_b0,0);
        iVar12 = iVar6 + iVar12;
      }
LAB_148340caa:
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148340ddc FUN_148340ddc body=207 status=ok
// SIG undefined FUN_148340ddc(void)

void FUN_148340ddc(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = 0;
  do {
    iVar6 = (int)param_2[1];
    if (iVar6 <= iVar5) break;
    lVar2 = (longlong)iVar5;
    iVar3 = *(int *)(*param_2 + lVar2 * 4);
    lVar8 = *param_1;
    lVar4 = (longlong)iVar3;
    iVar9 = *(int *)(lVar8 + lVar4 * 4);
    if (iVar9 != iVar3) {
      piVar7 = (int *)(lVar8 + lVar4 * 4);
      do {
        *piVar7 = *(int *)(lVar8 + (longlong)iVar9 * 4);
        lVar8 = *param_1;
        iVar3 = *(int *)(lVar8 + lVar4 * 4);
        lVar4 = (longlong)iVar3;
        piVar7 = (int *)(lVar8 + lVar4 * 4);
        iVar9 = *piVar7;
      } while (iVar9 != iVar3);
      iVar6 = (int)param_2[1];
    }
    iVar9 = *(int *)(param_1[2] + lVar4 * 4);
    iVar5 = iVar5 + iVar9;
    if (iVar6 < iVar5) break;
    local_50 = lVar2 * 4 + *param_2;
    local_48 = iVar9;
    local_3c = iVar3;
    cVar1 = (*(code *)*param_3)(param_3[1],&local_3c,&local_50);
  } while (cVar1 != '\0');
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148340eac FUN_148340eac body=1279 status=ok
// SIG undefined FUN_148340eac(void)

ulonglong FUN_148340eac(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined7 uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  double *pdVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double *local_c0;
  double *local_b8;
  double local_a8;
  double local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  code *local_80;
  longlong **local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined8 *)(param_1 + 0x40) = param_5[6];
  uVar5 = *param_5;
  uVar6 = param_5[1];
  uVar7 = param_5[2];
  uVar8 = param_5[3];
  uVar9 = param_5[5];
  *(undefined8 *)(param_1 + 0x30) = param_5[4];
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  dVar2 = (double)param_5[3];
  dVar3 = (double)param_5[4];
  dVar23 = (double)param_5[5] + (double)param_5[5];
  dVar4 = (double)param_5[6];
  *(double *)(param_1 + 0x48) = dVar2 * dVar23 + dVar4 * (dVar3 + dVar3);
  *(double *)(param_1 + 0x50) = dVar23 * dVar3 - (dVar2 + dVar2) * dVar4;
  *(double *)(param_1 + 0x58) = 1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2));
  plVar1 = (longlong *)(param_1 + 0x60);
  local_e8 = (longlong *)0x0;
  plStack_e0 = (longlong *)0xffffffff00000001;
  local_88 = param_2;
  FUN_1483413ae(plVar1,&local_e8,
                *(int *)(*(longlong *)(param_1 + 8) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 8) + 0x24));
  local_98 = 0;
  uStack_90 = 0;
  iVar13 = *(int *)(param_1 + 0x68);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  local_f8 = param_4;
  local_f0 = param_3;
  if (iVar13 != 0) {
    FUN_14481578e(&local_98);
  }
  uVar17 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  uVar14 = 0;
  if ((uVar17 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar17) {
      uVar10 = uVar17;
    }
    do {
      uVar14 = uVar10;
      if (uVar10 == uVar11) break;
      uVar18 = uVar11 >> 9;
      uVar20 = uVar11 & 0x1ff;
      uVar14 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar18] +
                                         (ulonglong)uVar20 * 2) - 1U));
  }
  if (uVar14 != uVar17) {
    do {
      uVar22 = uStack_90;
      lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
      uVar12 = (ulonglong)(uVar14 & 0x1ff);
      lVar21 = (longlong)(int)uVar14 * 0x10;
      *(double *)(*(longlong *)(param_1 + 0x60) + lVar21) =
           (*(double *)(lVar16 + 0x10 + uVar12 * 0x18) - *(double *)(param_1 + 0x20)) *
           *(double *)(param_1 + 0x58) +
           (*(double *)(lVar16 + uVar12 * 0x18) - *(double *)(param_1 + 0x10)) *
           *(double *)(param_1 + 0x48) +
           (*(double *)(lVar16 + 8 + uVar12 * 0x18) - *(double *)(param_1 + 0x18)) *
           *(double *)(param_1 + 0x50);
      if (*(double *)(*(longlong *)(param_1 + 0x60) + lVar21) <= 1e-08) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + lVar21 + 8) = 0;
      }
      else {
        lVar16 = (longlong)(int)uStack_90;
        uVar10 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
        if (uStack_90._4_4_ < uVar10) {
          FUN_1446f48e2(&local_98,uVar22 & 0xffffffff);
        }
        *(uint *)(local_98 + lVar16 * 4) = uVar14;
        *(undefined1 *)(*plVar1 + 8 + lVar21) = 1;
      }
      uVar10 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar17) {
        uVar10 = uVar17;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar11 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar11;
    } while (uVar14 != uVar17);
  }
  local_a0 = *(double *)(param_1 + 0x70) * 4.999999987376214e-07;
  local_b8 = &local_a0;
  local_a8 = *(double *)(param_1 + 0x70) * 9.999999974752427e-07;
  local_c0 = &local_a8;
  local_e8 = &local_98;
  local_d0 = local_f8;
  local_c8 = local_f0;
  local_108 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = FUN_143b10b02;
  local_78 = &local_e8;
  local_110 = 0;
  plStack_e0 = &local_88;
  local_d8 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uStack_90 & 0xffffffff,1);
  uVar17 = *(int *)(local_88 + 0x20) * 0x200 + *(int *)(local_88 + 0x24);
  uVar14 = 0;
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_88 + 0x28) - 1U))) {
    uVar10 = 1;
    uVar11 = 1;
    if (1 < (int)uVar17) {
      uVar10 = uVar17;
    }
    do {
      uVar14 = uVar10;
      if (uVar10 == uVar11) break;
      uVar18 = uVar11 >> 9;
      uVar20 = uVar11 & 0x1ff;
      uVar14 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_88 + 0x28))[uVar18] +
                                         (ulonglong)uVar20 * 2) - 1U));
  }
  uVar15 = (undefined7)((ulonglong)&local_88 >> 8);
  uVar22 = CONCAT71(uVar15,1);
  if (uVar14 != uVar17) {
    iVar13 = 0;
    do {
      lVar16 = (longlong)(int)uVar14 * 0x10;
      if (*(int *)(*plVar1 + 0xc + lVar16) < 0) {
        pdVar19 = (double *)(*plVar1 + lVar16);
        dVar2 = *pdVar19;
        uVar22 = -(ulonglong)(-dVar2 <= dVar2);
        if (local_a0 <= (double)(~uVar22 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar22)) {
          iVar13 = iVar13 + 1;
        }
        else {
          *(undefined1 *)(pdVar19 + 1) = 0;
          *(undefined1 *)(*plVar1 + 9 + lVar16) = 1;
        }
      }
      uVar10 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar17) {
        uVar10 = uVar17;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar11 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_88 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar11;
    } while (uVar14 != uVar17);
    uVar22 = CONCAT71(uVar15,iVar13 == 0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1483413ae FUN_1483413ae body=118 status=ok
// SIG undefined FUN_1483413ae(void)

void FUN_1483413ae(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1483743fc(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14837445c(param_1,iVar2);
    }
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
  }
  return;
}



// FUNCTION 148341426 FUN_148341426 body=332 status=ok
// SIG undefined FUN_148341426(void)

void FUN_148341426(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(param_1 + 0x50);
  dVar2 = *(double *)(param_1 + 0x58);
  dVar5 = (param_3[2] - *(double *)(param_1 + 0x20)) * dVar2 +
          (*param_3 - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x48) +
          (param_3[1] - *(double *)(param_1 + 0x18)) * dVar1;
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar5;
    *param_3 = *param_3 - *(double *)(param_1 + 0x48) * dVar5;
    param_3[1] = param_3[1] - dVar1 * dVar5;
    param_3[2] = param_3[2] - dVar2 * dVar5;
    dVar1 = *(double *)(param_1 + 0x50);
    dVar2 = *(double *)(param_1 + 0x58);
    dVar5 = param_3[5] * dVar2 + param_3[3] * *(double *)(param_1 + 0x48) + param_3[4] * dVar1;
    dVar5 = dVar5 + dVar5;
    param_3[3] = param_3[3] - dVar5 * *(double *)(param_1 + 0x48);
    param_3[4] = param_3[4] - dVar1 * dVar5;
    param_3[5] = param_3[5] - dVar2 * dVar5;
    param_3[6] = -param_3[6];
  }
  param_2[6] = param_3[6];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar5 = param_3[2];
  dVar3 = param_3[3];
  dVar4 = param_3[5];
  param_2[4] = param_3[4];
  param_2[5] = dVar4;
  param_2[2] = dVar5;
  param_2[3] = dVar3;
  *param_2 = dVar1;
  param_2[1] = dVar2;
  return;
}



// FUNCTION 148341572 FUN_148341572 body=151 status=ok
// SIG undefined FUN_148341572(void)

double * FUN_148341572(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *(double *)(param_1 + 0x50);
  dVar4 = *(double *)(param_1 + 0x58);
  dVar5 = (dVar1 - *(double *)(param_1 + 0x20)) * dVar4 +
          (*param_3 - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x48) +
          (dVar2 - *(double *)(param_1 + 0x18)) * dVar3;
  dVar5 = dVar5 + dVar5;
  *param_2 = *param_3 - dVar5 * *(double *)(param_1 + 0x48);
  param_2[1] = dVar2 - dVar3 * dVar5;
  param_2[2] = dVar1 - dVar4 * dVar5;
  return param_2;
}



// FUNCTION 14834160a FUN_14834160a body=236 status=ok
// SIG undefined FUN_14834160a(void)

void FUN_14834160a(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  if (param_4 != '\0') {
    iVar5 = (int)param_2[1];
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      FUN_14481578e(param_3);
    }
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      iVar5 = *(int *)(lVar2 + lVar6);
      lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 0x10;
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)iVar5 * 0x10) == '\x01') {
        iVar5 = *(int *)(lVar1 + 0xc);
LAB_14834168c:
        iVar7 = (int)param_3[1];
        uVar4 = iVar7 + 1;
        *(uint *)(param_3 + 1) = uVar4;
LAB_148341697:
        if (*(uint *)((longlong)param_3 + 0xc) < uVar4) {
          FUN_1446f48e2(param_3,iVar7);
        }
        *(int *)(*param_3 + (longlong)iVar7 * 4) = iVar5;
      }
      else {
        if ((*(char *)(lVar1 + 9) == '\0') && (-1 < *(int *)(lVar1 + 0xc))) goto LAB_14834168c;
        if (param_4 != '\0') {
          iVar7 = (int)param_3[1];
          uVar4 = iVar7 + 1;
          *(uint *)(param_3 + 1) = uVar4;
          iVar5 = -1;
          goto LAB_148341697;
        }
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar6);
  }
  return;
}



// FUNCTION 1483416f8 FUN_1483416f8 body=358 status=ok
// SIG undefined FUN_1483416f8(void)

void FUN_1483416f8(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar4 = param_2[1];
  if (0 < (longlong)(int)lVar4) {
    lVar7 = *param_2;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 9 + (longlong)*(int *)(lVar7 + lVar6 * 4) * 0x10
                   ) == '\x01') {
        lVar7 = *param_3;
        dVar1 = *(double *)(param_1 + 0x28);
        dVar10 = *(double *)(param_1 + 0x30);
        dVar9 = *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x38);
        dVar8 = dVar1 * dVar9 + *(double *)(param_1 + 0x40) * (dVar10 + dVar10);
        dVar11 = 1.0 - ((dVar10 + dVar10) * dVar10 + dVar1 * (dVar1 + dVar1));
        dVar2 = *(double *)(lVar7 + -8 + lVar5);
        dVar3 = *(double *)(lVar7 + -0x10 + lVar5);
        dVar10 = dVar9 * dVar10 - (dVar1 + dVar1) * *(double *)(param_1 + 0x40);
        dVar1 = (*(double *)(lVar7 + lVar5) - *(double *)(param_1 + 0x20)) * dVar11 +
                (dVar3 - *(double *)(param_1 + 0x10)) * dVar8 +
                (dVar2 - *(double *)(param_1 + 0x18)) * dVar10;
        *(double *)(lVar7 + -0x10 + lVar5) = dVar3 - dVar1 * dVar8;
        *(double *)(lVar7 + -8 + lVar5) = dVar2 - dVar10 * dVar1;
        *(double *)(lVar7 + lVar5) = *(double *)(lVar7 + lVar5) - dVar11 * dVar1;
        lVar7 = *param_2;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((int)lVar4 != lVar6);
  }
  return;
}



// FUNCTION 14834185e FUN_14834185e body=324 status=ok
// SIG undefined FUN_14834185e(void)

void FUN_14834185e(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  double dVar12;
  
  iVar5 = (int)param_2[1];
  FUN_14051b394(param_5,iVar5,0);
  if (0 < (longlong)iVar5) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      iVar6 = *(int *)(*param_3 + lVar10 * 4);
      if (-1 < (longlong)iVar6) {
        if (*(int *)(*param_2 + lVar10 * 4) == iVar6) {
          uVar7 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc + (longlong)iVar6 * 0x10);
          pdVar11 = (double *)
                    ((ulonglong)((uVar7 & 0x1ff) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar7 >> 9) * 8
                     ));
        }
        else {
          pdVar11 = (double *)(*param_4 + lVar9);
        }
        dVar1 = pdVar11[2];
        dVar2 = pdVar11[1];
        dVar3 = *(double *)(param_1 + 0x50);
        dVar4 = *(double *)(param_1 + 0x58);
        dVar12 = (dVar1 - *(double *)(param_1 + 0x20)) * dVar4 +
                 (*pdVar11 - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x48) +
                 (dVar2 - *(double *)(param_1 + 0x18)) * dVar3;
        dVar12 = dVar12 + dVar12;
        lVar8 = *param_5;
        *(double *)(lVar8 + lVar9) = *pdVar11 - dVar12 * *(double *)(param_1 + 0x48);
        *(double *)(lVar8 + 8 + lVar9) = dVar2 - dVar3 * dVar12;
        *(double *)(lVar8 + 0x10 + lVar9) = dVar1 - dVar4 * dVar12;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar5 != lVar10);
  }
  return;
}



// FUNCTION 1483419a2 FUN_1483419a2 body=122 status=ok
// SIG undefined FUN_1483419a2(void)

void FUN_1483419a2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148374502(param_1,iVar1);
    }
    FUN_1483744e1((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148374596(param_1,param_2,iVar1 - param_2);
    FUN_1483745fc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148341a1e FUN_148341a1e body=598 status=ok
// SIG undefined FUN_148341a1e(void)

void FUN_148341a1e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int *piVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [32];
  int *local_b8;
  undefined1 local_b0 [4];
  uint local_ac;
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1 + (longlong)param_2 * 0x30;
  lVar5 = *param_1 + (longlong)param_2 * 0x30;
  plVar9 = (longlong *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x20) = 0;
  if (*(int *)(lVar5 + 0x24) < 0) {
    FUN_1483746aa(plVar9);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
    piVar8 = *(int **)(lVar1 + 8);
    local_b8 = piVar8 + *(int *)(lVar1 + 0x10);
    do {
      lVar5 = (longlong)*piVar8;
      uVar3 = *(uint *)(param_1[2] + lVar5 * 4);
      local_a0 = *(undefined4 *)(param_1[4] + 8 + lVar5 * 0xc);
      local_a8 = *(undefined8 *)(param_1[4] + lVar5 * 0xc);
      lVar5 = 0;
      do {
        lVar6 = (longlong)*(int *)((longlong)&local_a8 + lVar5 * 4);
        if (lVar6 == -1) {
          *(undefined1 *)(lVar1 + 0x28) = 1;
        }
        else {
          local_ac = *(uint *)(param_1[2] + lVar6 * 4);
          if (local_ac == 0xffffffff) {
            *(undefined1 *)(lVar1 + 0x29) = 1;
          }
          else if (local_ac != uVar3) {
            if ((int)uStack_90 != local_64) {
              puVar7 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar7 = local_60;
              }
              for (iVar4 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & local_ac) * 4); iVar4 != -1
                  ; iVar4 = *(int *)(local_98 + (longlong)iVar4 * 0xc + 4)) {
                if (*(uint *)(local_98 + (longlong)iVar4 * 0xc) == local_ac) goto LAB_148341b5c;
              }
            }
            FUN_1447cbafe(&local_98,local_b0,&local_ac,0);
            uVar10 = (ulonglong)local_ac;
            iVar4 = *(int *)(lVar1 + 0x20);
            *(uint *)(lVar1 + 0x20) = iVar4 + 1U;
            if (*(uint *)(lVar1 + 0x24) < iVar4 + 1U) {
              FUN_1483746da(plVar9,iVar4);
            }
            *(ulonglong *)(*plVar9 + (longlong)iVar4 * 8) = uVar10;
LAB_148341b5c:
            if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
              lVar6 = 0;
              do {
                if (*(uint *)(*(longlong *)(lVar1 + 0x18) + lVar6) == local_ac) {
                  piVar2 = (int *)(*(longlong *)(lVar1 + 0x18) + 4 + lVar6);
                  *piVar2 = *piVar2 + 1;
                  break;
                }
                lVar6 = lVar6 + 8;
              } while ((longlong)*(int *)(lVar1 + 0x20) * 8 != lVar6);
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      piVar8 = piVar8 + 1;
    } while (piVar8 != local_b8);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148341c76 FUN_148341c76 body=529 status=ok
// SIG undefined FUN_148341c76(void)

void FUN_148341c76(longlong *param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  int *local_68;
  undefined8 local_5c;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = (int)param_3[1];
  local_90 = param_3;
  local_88 = param_4;
  FUN_1483419a2(param_1,iVar8);
  local_78 = param_1 + 2;
  local_5c = CONCAT44(local_5c._4_4_,0xffffffff);
  FUN_1448156a8(local_78,&local_5c,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  local_80 = param_1 + 4;
  local_5c = 0xffffffffffffffff;
  local_54 = 0xffffffff;
  local_70 = param_2;
  FUN_146badbc8(local_80,&local_5c,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144));
  if (0 < (longlong)iVar8) {
    lVar7 = 0;
    local_a0 = (longlong)iVar8;
    local_98 = param_1;
    do {
      plVar3 = local_90;
      plVar2 = local_98;
      lVar9 = lVar7 * 0x10;
      FUN_14054c6c4(*local_98 + lVar7 * 0x30 + 8,*local_90 + lVar9);
      local_5c = CONCAT44(local_5c._4_4_,(int)lVar7);
      uVar5 = (*(code *)*local_88)(local_88[1],&local_5c);
      *(undefined4 *)(*plVar2 + 4 + lVar7 * 0x30) = uVar5;
      lVar6 = (longlong)*(int *)(*plVar3 + 8 + lVar9);
      if (lVar6 != 0) {
        piVar10 = *(int **)(*plVar3 + lVar9);
        local_68 = piVar10 + lVar6;
        do {
          iVar8 = *piVar10;
          lVar9 = (longlong)iVar8;
          *(int *)(*local_78 + lVar9 * 4) = (int)lVar7;
          FUN_146c03f0e(local_70,&local_5c,iVar8);
          lVar6 = 0;
          do {
            iVar1 = *(int *)((longlong)&local_5c + lVar6 * 4);
            if (-1 < iVar1) {
              local_50 = iVar8;
              local_4c = iVar1;
              cVar4 = (*(code *)*param_5)(param_5[1],&local_50,&local_4c);
              if (cVar4 == '\0') {
                *(undefined4 *)((longlong)&local_5c + lVar6 * 4) = 0xffffffff;
              }
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 3);
          lVar6 = *local_80;
          *(undefined4 *)(lVar6 + 8 + lVar9 * 0xc) = local_54;
          *(undefined8 *)(lVar6 + lVar9 * 0xc) = local_5c;
          piVar10 = piVar10 + 1;
        } while (piVar10 != local_68);
      }
      plVar2 = local_98;
      lVar6 = local_a0;
      lVar7 = lVar7 + 1;
    } while (lVar7 != local_a0);
    iVar8 = 0;
    do {
      FUN_148341a1e(plVar2,iVar8);
      iVar8 = iVar8 + 1;
    } while ((int)lVar6 != iVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148341e88 FUN_148341e88 body=132 status=ok
// SIG undefined FUN_148341e88(void)

longlong * FUN_148341e88(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)param_1[1])) {
    lVar2 = *param_1;
    lVar3 = (ulonglong)param_3 * 0x30;
    if ((*(char *)(lVar2 + lVar3) != '\0') &&
       (lVar4 = (longlong)*(int *)(lVar2 + 0x20 + lVar3), lVar4 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 0x18 + lVar3);
      lVar3 = 0;
      do {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar3);
        lVar3 = lVar3 + 8;
      } while (lVar4 * 8 != lVar3);
    }
  }
  return param_2;
}



// FUNCTION 148341f0c FUN_148341f0c body=113 status=ok
// SIG undefined FUN_148341f0c(void)

longlong FUN_148341f0c(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)*(uint *)(param_1 + 1))) {
    if (*(uint *)(param_1 + 1) <= param_3) {
      return 0;
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    lVar2 = *param_1;
    lVar4 = (ulonglong)param_2 * 0x30;
    if (*(char *)(lVar2 + lVar4) == '\0') {
      return 0;
    }
    if ((*(char *)(lVar2 + (ulonglong)param_3 * 0x30) != '\0') &&
       (lVar3 = (longlong)*(int *)(lVar2 + 0x20 + lVar4), lVar3 != 0)) {
      lVar1 = lVar3 * 8;
      lVar5 = 0;
      do {
        bVar6 = *(uint *)(*(longlong *)(lVar2 + 0x18 + lVar4) + lVar5) == param_3;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
        if (bVar6) {
          return lVar3;
        }
        bVar6 = lVar1 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 148341f7e FUN_148341f7e body=2465 status=ok
// SIG undefined FUN_148341f7e(void)

ulonglong FUN_148341f7e(longlong *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  byte bVar7;
  uint uVar8;
  longlong *plVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  float *pfVar17;
  int iVar18;
  ulonglong uVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float *pfVar28;
  float *pfVar29;
  int *piVar30;
  int *piVar31;
  float *pfVar32;
  longlong lVar33;
  int *piVar34;
  int *piVar35;
  longlong lVar36;
  float *pfVar37;
  longlong lVar38;
  bool bVar39;
  float fVar40;
  undefined4 uVar41;
  undefined1 auStack_3e8 [40];
  longlong *local_3c0;
  int local_3b4;
  undefined8 *local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  undefined8 uStack_390;
  int local_37c;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [190];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_398 = 0;
  uStack_390 = 0;
  iVar25 = (int)param_1[1];
  local_3b0 = param_3;
  if (iVar25 < 1) {
    plVar9 = (longlong *)0;
    goto LAB_148342865;
  }
  lVar15 = 0x10;
  lVar33 = 0;
  local_3b4 = param_2;
  do {
    uVar14 = uStack_390;
    if ((*(char *)(*param_1 + -0x10 + lVar15) != '\0') && (*(int *)(*param_1 + lVar15) <= param_2))
    {
      lVar38 = (longlong)(int)uStack_390;
      uVar8 = (int)uStack_390 + 1;
      uStack_390 = CONCAT44(uStack_390._4_4_,uVar8);
      if (uStack_390._4_4_ < uVar8) {
        FUN_1446f48e2(&local_398,uVar14 & 0xffffffff);
        param_2 = local_3b4;
      }
      *(int *)(local_398 + lVar38 * 4) = (int)lVar33;
      iVar25 = (int)param_1[1];
    }
    lVar38 = local_398;
    lVar33 = lVar33 + 1;
    lVar15 = lVar15 + 0x30;
  } while (lVar33 < iVar25);
  iVar25 = (int)uStack_390;
  uVar14 = uStack_390 & 0xffffffff;
  if (uVar14 == 0) {
LAB_148342848:
    local_3c0 = (longlong *)0x0;
  }
  else {
    if (1 < (int)uStack_390) {
      memset(local_368,0,0x2f0);
      local_378 = lVar38;
      local_370 = lVar38 + uVar14 * 4 + -4;
      fVar40 = logf((float)iVar25);
      local_368[0] = (int)(longlong)(fVar40 + fVar40);
      local_3c0 = &local_378;
      do {
        piVar13 = (int *)*local_3c0;
        piVar23 = (int *)local_3c0[1];
        iVar25 = (int)local_3c0[2];
        iVar18 = (int)((ulonglong)((longlong)piVar23 - (longlong)piVar13) >> 2);
        uVar14 = (ulonglong)(iVar18 + 1);
        piVar34 = piVar13;
        piVar31 = piVar23;
        if (iVar25 != 0) {
LAB_1483420bc:
          if (8 < (int)(uint)uVar14) {
            uVar8 = (uint)uVar14 >> 1;
            iVar18 = piVar13[uVar8];
            piVar13[uVar8] = *piVar13;
            *piVar13 = iVar18;
            piVar30 = piVar23 + 1;
            piVar12 = piVar13;
            do {
              piVar5 = piVar12 + 1;
              piVar24 = piVar12 + 1;
              do {
                piVar12 = piVar24;
                piVar35 = piVar5;
                if (piVar23 < piVar12) break;
                piVar5 = piVar35 + 1;
                piVar24 = piVar12 + 1;
              } while (*(int *)(*param_1 + 0x10 + (longlong)*piVar12 * 0x30) <=
                       *(int *)(*param_1 + 0x10 + (longlong)*piVar13 * 0x30));
              piVar5 = piVar30 + -2;
              do {
                piVar24 = piVar30;
                piVar16 = piVar5;
                piVar30 = piVar24 + -1;
                if (piVar30 <= piVar13) break;
                piVar5 = piVar16 + -1;
              } while (*(int *)(*param_1 + 0x10 + (longlong)*piVar13 * 0x30) <=
                       *(int *)(*param_1 + 0x10 + (longlong)*piVar30 * 0x30));
              if (piVar30 < piVar12) goto LAB_148342175;
              iVar18 = *piVar12;
              *piVar12 = *piVar30;
              *piVar30 = iVar18;
            } while( true );
          }
          if (piVar13 < piVar23) {
            do {
              piVar34 = piVar13;
              if (piVar13 + 1 <= piVar23) {
                iVar25 = *piVar13;
                piVar31 = piVar13 + 1;
                do {
                  piVar30 = piVar31;
                  iVar18 = *piVar31;
                  if (*(int *)(*param_1 + 0x10 + (longlong)*piVar31 * 0x30) <=
                      *(int *)(*param_1 + 0x10 + (longlong)iVar25 * 0x30)) {
                    piVar30 = piVar34;
                    iVar18 = iVar25;
                  }
                  iVar25 = iVar18;
                  piVar34 = piVar30;
                  piVar31 = piVar31 + 1;
                } while (piVar31 <= piVar23);
              }
              iVar25 = *piVar34;
              *piVar34 = *piVar23;
              *piVar23 = iVar25;
              piVar23 = piVar23 + -1;
            } while (piVar13 < piVar23);
          }
          goto LAB_14834242f;
        }
LAB_14834221c:
        iVar25 = (int)uVar14;
        if (iVar25 != 0) {
          iVar18 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
          iVar27 = iVar18;
joined_r0x000148342243:
          do {
            iVar22 = iVar18 * 2 + 1;
            if (iVar22 < iVar25) {
              iVar26 = iVar18 * 2 + 2;
              lVar15 = *param_1;
              if ((iVar26 < iVar25) &&
                 (*(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar22] * 0x30) <=
                  *(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar26] * 0x30))) {
                iVar22 = iVar26;
              }
              iVar26 = piVar13[iVar18];
              if (*(int *)(lVar15 + 0x10 + (longlong)iVar26 * 0x30) <
                  *(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar22] * 0x30)) {
                piVar13[iVar18] = piVar13[iVar22];
                piVar13[iVar22] = iVar26;
                iVar18 = iVar22;
                goto joined_r0x000148342243;
              }
            }
            bVar39 = iVar27 != 0;
            iVar18 = iVar27 + -1;
            iVar27 = iVar18;
          } while (bVar39);
          if (1 < iVar25) {
            iVar18 = *piVar13;
            *piVar13 = piVar13[uVar14 - 1];
            piVar13[uVar14 - 1] = iVar18;
            if (iVar25 != 2) {
              do {
                uVar19 = uVar14 - 1;
                iVar25 = 0;
                iVar27 = 1;
                iVar18 = 0;
                do {
                  iVar25 = iVar25 + 2;
                  lVar15 = *param_1;
                  iVar22 = iVar27;
                  if (((longlong)iVar25 < (longlong)uVar19) &&
                     (*(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar27] * 0x30) <=
                      *(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar25] * 0x30))) {
                    iVar22 = iVar25;
                  }
                  iVar25 = piVar13[iVar18];
                  if (*(int *)(lVar15 + 0x10 + (longlong)piVar13[iVar22] * 0x30) <=
                      *(int *)(lVar15 + 0x10 + (longlong)iVar25 * 0x30)) break;
                  piVar13[iVar18] = piVar13[iVar22];
                  piVar13[iVar22] = iVar25;
                  iVar25 = iVar22 * 2;
                  iVar27 = iVar22 * 2 + 1;
                  iVar18 = iVar22;
                } while ((longlong)iVar27 < (longlong)uVar19);
                iVar25 = *piVar13;
                *piVar13 = piVar13[uVar14 - 2];
                piVar13[uVar14 - 2] = iVar25;
                uVar14 = uVar19;
              } while (2 < uVar19);
            }
          }
        }
LAB_14834242f:
        local_3c0 = local_3c0 + -3;
      } while (&local_378 <= local_3c0);
      uVar14 = uStack_390 & 0xffffffff;
      param_2 = local_3b4;
    }
    if ((int)uVar14 < 1) goto LAB_148342848;
    local_3c0 = (longlong *)0x0;
    lVar15 = 0;
    do {
      iVar25 = *(int *)(local_398 + lVar15 * 4);
      if ((-1 < (longlong)iVar25) && (iVar25 < (int)param_1[1])) {
        lVar33 = (longlong)iVar25 * 0x30;
        if ((*(char *)(*param_1 + lVar33) != '\0') &&
           (lVar33 = *param_1 + lVar33, *(int *)(lVar33 + 0x10) <= param_2)) {
          local_3a8 = 0;
          uStack_3a0 = 0;
          iVar18 = *(int *)(lVar33 + 0x20);
          if ((longlong)iVar18 != 0) {
            lVar33 = *(longlong *)(lVar33 + 0x18);
            lVar38 = 0;
            do {
              local_378 = CONCAT44(local_378._4_4_,*(undefined4 *)(lVar33 + lVar38));
              local_37c = iVar25;
              uVar41 = (*(code *)*local_3b0)(local_3b0[1],&local_37c,&local_378);
              uVar1 = *(undefined4 *)(lVar33 + lVar38);
              lVar36 = (longlong)(int)uStack_3a0;
              uVar8 = (int)uStack_3a0 + 1;
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar8);
              if (uStack_3a0._4_4_ < uVar8) {
                FUN_143b10f52(&local_3a8);
              }
              lVar3 = local_3a8;
              *(undefined4 *)(local_3a8 + lVar36 * 8) = uVar41;
              *(undefined4 *)(local_3a8 + 4 + lVar36 * 8) = uVar1;
              lVar38 = lVar38 + 8;
            } while ((longlong)iVar18 * 8 != lVar38);
            iVar18 = (int)uStack_3a0;
            uVar14 = uStack_3a0 & 0xffffffff;
            if (uVar14 != 0) {
              if (1 < (int)uStack_3a0) {
                memset(local_368,0,0x2f0);
                local_378 = lVar3;
                local_370 = lVar3 + uVar14 * 8 + -8;
                fVar40 = logf((float)iVar18);
                local_368[0] = (int)(longlong)(fVar40 + fVar40);
                plVar9 = &local_378;
                do {
                  pfVar11 = (float *)*plVar9;
                  pfVar20 = (float *)plVar9[1];
                  iVar18 = (int)plVar9[2];
                  iVar27 = (int)((ulonglong)((longlong)pfVar20 - (longlong)pfVar11) >> 3);
                  uVar8 = iVar27 + 1;
                  pfVar17 = pfVar11;
                  pfVar29 = pfVar20;
                  if (iVar18 != 0) {
LAB_14834258d:
                    if (8 < (int)uVar8) {
                      uVar2 = *(undefined8 *)(pfVar11 + (ulonglong)(uVar8 >> 1) * 2);
                      *(undefined8 *)(pfVar11 + (ulonglong)(uVar8 >> 1) * 2) =
                           *(undefined8 *)pfVar11;
                      *(undefined8 *)pfVar11 = uVar2;
                      pfVar28 = pfVar20 + 2;
                      pfVar10 = pfVar11;
                      do {
                        pfVar4 = pfVar10 + 2;
                        pfVar21 = pfVar10 + 2;
                        do {
                          pfVar10 = pfVar21;
                          pfVar32 = pfVar4;
                          if (pfVar20 < pfVar10) break;
                          pfVar4 = pfVar32 + 2;
                          pfVar21 = pfVar10 + 2;
                        } while (*pfVar11 < *pfVar10 || *pfVar11 == *pfVar10);
                        pfVar4 = pfVar28 + -4;
                        do {
                          pfVar21 = pfVar28;
                          pfVar37 = pfVar4;
                          pfVar28 = pfVar21 + -2;
                          if (pfVar28 <= pfVar11) break;
                          pfVar4 = pfVar37 + -2;
                        } while (*pfVar28 < *pfVar11 || *pfVar28 == *pfVar11);
                        if (pfVar28 < pfVar10) goto LAB_148342610;
                        uVar2 = *(undefined8 *)pfVar10;
                        *(undefined8 *)pfVar10 = *(undefined8 *)pfVar28;
                        *(undefined8 *)pfVar28 = uVar2;
                      } while( true );
                    }
                    if (pfVar11 < pfVar20) {
                      do {
                        pfVar17 = pfVar11;
                        if (pfVar11 + 2 <= pfVar20) {
                          fVar40 = *pfVar11;
                          pfVar29 = pfVar11 + 2;
                          do {
                            fVar6 = *pfVar29;
                            pfVar28 = pfVar29;
                            if (fVar40 <= *pfVar29) {
                              fVar6 = fVar40;
                              pfVar28 = pfVar17;
                            }
                            pfVar17 = pfVar28;
                            fVar40 = fVar6;
                            pfVar29 = pfVar29 + 2;
                          } while (pfVar29 <= pfVar20);
                        }
                        uVar2 = *(undefined8 *)pfVar17;
                        *(undefined8 *)pfVar17 = *(undefined8 *)pfVar20;
                        *(undefined8 *)pfVar20 = uVar2;
                        pfVar20 = pfVar20 + -2;
                      } while (pfVar11 < pfVar20);
                    }
                    goto LAB_14834282f;
                  }
LAB_1483426a4:
                  if (uVar8 != 0) {
                    iVar18 = (iVar27 - (iVar27 + -1 >> 0x1f)) + -1 >> 1;
                    iVar27 = iVar18;
joined_r0x0001483426c7:
                    do {
                      iVar22 = iVar18 * 2 + 1;
                      if (iVar22 < (int)uVar8) {
                        iVar26 = iVar18 * 2 + 2;
                        if ((iVar26 < (int)uVar8) &&
                           (pfVar11[(longlong)iVar26 * 2] < pfVar11[(longlong)iVar22 * 2] ||
                            pfVar11[(longlong)iVar26 * 2] == pfVar11[(longlong)iVar22 * 2])) {
                          iVar22 = iVar26;
                        }
                        lVar38 = (longlong)iVar18;
                        lVar33 = (longlong)iVar22;
                        if (pfVar11[lVar33 * 2] <= pfVar11[lVar38 * 2] &&
                            pfVar11[lVar38 * 2] != pfVar11[lVar33 * 2]) {
                          uVar2 = *(undefined8 *)(pfVar11 + lVar38 * 2);
                          *(undefined8 *)(pfVar11 + lVar38 * 2) =
                               *(undefined8 *)(pfVar11 + lVar33 * 2);
                          *(undefined8 *)(pfVar11 + lVar33 * 2) = uVar2;
                          iVar18 = iVar22;
                          goto joined_r0x0001483426c7;
                        }
                      }
                      bVar39 = iVar27 != 0;
                      iVar18 = iVar27 + -1;
                      iVar27 = iVar18;
                    } while (bVar39);
                    if (1 < (int)uVar8) {
                      uVar14 = (ulonglong)uVar8;
                      uVar2 = *(undefined8 *)pfVar11;
                      *(undefined8 *)pfVar11 = *(undefined8 *)(pfVar11 + uVar14 * 2 + -2);
                      *(undefined8 *)(pfVar11 + uVar14 * 2 + -2) = uVar2;
                      if (uVar8 != 2) {
                        do {
                          uVar14 = uVar14 - 1;
                          iVar18 = 0;
                          iVar22 = 1;
                          iVar27 = 0;
                          do {
                            iVar18 = iVar18 + 2;
                            iVar26 = iVar22;
                            if (((longlong)iVar18 < (longlong)uVar14) &&
                               (pfVar11[(longlong)iVar18 * 2] < pfVar11[(longlong)iVar22 * 2] ||
                                pfVar11[(longlong)iVar18 * 2] == pfVar11[(longlong)iVar22 * 2])) {
                              iVar26 = iVar18;
                            }
                            lVar33 = (longlong)iVar27;
                            lVar38 = (longlong)iVar26;
                            if (pfVar11[lVar33 * 2] < pfVar11[lVar38 * 2] ||
                                pfVar11[lVar33 * 2] == pfVar11[lVar38 * 2]) break;
                            uVar2 = *(undefined8 *)(pfVar11 + lVar33 * 2);
                            *(undefined8 *)(pfVar11 + lVar33 * 2) =
                                 *(undefined8 *)(pfVar11 + lVar38 * 2);
                            *(undefined8 *)(pfVar11 + lVar38 * 2) = uVar2;
                            iVar18 = iVar26 * 2;
                            iVar22 = iVar26 * 2 + 1;
                            iVar27 = iVar26;
                          } while ((longlong)iVar22 < (longlong)uVar14);
                          uVar2 = *(undefined8 *)pfVar11;
                          *(undefined8 *)pfVar11 = *(undefined8 *)(pfVar11 + uVar14 * 2 + -2);
                          *(undefined8 *)(pfVar11 + uVar14 * 2 + -2) = uVar2;
                        } while (2 < uVar14);
                      }
                    }
                  }
LAB_14834282f:
                  plVar9 = plVar9 + -3;
                } while (&local_378 <= plVar9);
              }
              bVar7 = FUN_148342920(param_1,iVar25,*(undefined4 *)(local_3a8 + 4));
              local_3c0 = (longlong *)
                          CONCAT71((int7)((ulonglong)local_3c0 >> 8),(byte)local_3c0 | bVar7);
            }
            param_2 = local_3b4;
            if (local_3a8 != 0) {
              FUN_1400020a8(local_3a8);
              param_2 = local_3b4;
            }
          }
          uVar14 = uStack_390 & 0xffffffff;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)uVar14);
  }
  plVar9 = local_3c0;
  if (local_398 != 0) {
    FUN_1400020a8();
    plVar9 = local_3c0;
  }
LAB_148342865:
  if ((local_70 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return (ulonglong)plVar9 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_148342175:
  iVar18 = *piVar13;
  *piVar13 = *piVar30;
  *piVar30 = iVar18;
  iVar25 = iVar25 + -1;
  piVar24 = piVar24 + -2;
  if ((longlong)piVar16 - (longlong)piVar34 < (longlong)piVar31 - (longlong)piVar35) {
    if (piVar12 < piVar23) {
      *local_3c0 = (longlong)piVar12;
      local_3c0[1] = (longlong)piVar23;
      *(int *)(local_3c0 + 2) = iVar25;
      local_3c0 = local_3c0 + 3;
    }
    piVar35 = piVar13;
    if (piVar30 <= piVar13 + 1) goto LAB_14834242f;
  }
  else {
    if (piVar13 + 1 < piVar30) {
      *local_3c0 = (longlong)piVar13;
      local_3c0[1] = (longlong)piVar24;
      *(int *)(local_3c0 + 2) = iVar25;
      local_3c0 = local_3c0 + 3;
    }
    piVar16 = piVar23;
    piVar13 = piVar12;
    piVar24 = piVar23;
    if (piVar23 <= piVar12) goto LAB_14834242f;
  }
  iVar18 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar35) >> 2);
  uVar14 = (ulonglong)(iVar18 + 1);
  piVar23 = piVar24;
  piVar34 = piVar35;
  piVar31 = piVar16;
  if (iVar25 == 0) goto LAB_14834221c;
  goto LAB_1483420bc;
LAB_148342610:
  uVar2 = *(undefined8 *)pfVar11;
  *(undefined8 *)pfVar11 = *(undefined8 *)pfVar28;
  *(undefined8 *)pfVar28 = uVar2;
  iVar18 = iVar18 + -1;
  pfVar21 = pfVar21 + -4;
  if ((longlong)pfVar37 - (longlong)pfVar17 < (longlong)pfVar29 - (longlong)pfVar32) {
    if (pfVar10 < pfVar20) {
      *plVar9 = (longlong)pfVar10;
      plVar9[1] = (longlong)pfVar20;
      *(int *)(plVar9 + 2) = iVar18;
      plVar9 = plVar9 + 3;
    }
    pfVar32 = pfVar11;
    if (pfVar28 <= pfVar11 + 2) goto LAB_14834282f;
  }
  else {
    if (pfVar11 + 2 < pfVar28) {
      *plVar9 = (longlong)pfVar11;
      plVar9[1] = (longlong)pfVar21;
      *(int *)(plVar9 + 2) = iVar18;
      plVar9 = plVar9 + 3;
    }
    pfVar11 = pfVar10;
    pfVar21 = pfVar20;
    pfVar37 = pfVar20;
    if (pfVar20 <= pfVar10) goto LAB_14834282f;
  }
  iVar27 = (int)((ulonglong)((longlong)pfVar37 - (longlong)pfVar32) >> 3);
  uVar8 = iVar27 + 1;
  pfVar17 = pfVar32;
  pfVar20 = pfVar21;
  pfVar29 = pfVar37;
  if (iVar18 == 0) goto LAB_1483426a4;
  goto LAB_14834258d;
}



// FUNCTION 148342920 FUN_148342920 body=300 status=ok
// SIG undefined FUN_148342920(void)

ulonglong FUN_148342920(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar7 = FUN_148341f0c();
  uVar11 = (ulonglong)uVar7;
  if ((char)uVar7 != '\0') {
    lVar5 = *param_1;
    lVar8 = (longlong)param_2 * 0x30;
    puVar1 = (undefined1 *)(lVar5 + lVar8);
    lVar9 = (longlong)*(int *)(lVar5 + 0x10 + lVar8);
    if (lVar9 != 0) {
      lVar6 = *(longlong *)(lVar5 + 8 + lVar8);
      lVar2 = lVar5 + (longlong)param_3 * 0x30;
      lVar10 = 0;
      do {
        iVar3 = *(int *)(lVar6 + lVar10);
        iVar4 = *(int *)(lVar2 + 0x10);
        uVar11 = (ulonglong)iVar4;
        *(uint *)(lVar2 + 0x10) = iVar4 + 1U;
        if (*(uint *)(lVar2 + 0x14) < iVar4 + 1U) {
          FUN_1446f48e2((longlong *)(lVar2 + 8),iVar4);
        }
        *(int *)(*(longlong *)(lVar2 + 8) + uVar11 * 4) = iVar3;
        *(int *)(param_1[2] + (longlong)iVar3 * 4) = param_3;
        lVar10 = lVar10 + 4;
      } while (lVar9 * 4 != lVar10);
    }
    *(undefined4 *)(puVar1 + 0x10) = 0;
    if (*(int *)(puVar1 + 0x14) < 0) {
      FUN_14481578e(lVar8 + lVar5 + 8,0);
    }
    *puVar1 = 0;
    iVar3 = *(int *)(puVar1 + 0x20);
    uVar11 = CONCAT71((int7)(uVar11 >> 8),(char)uVar7);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(puVar1 + 0x18);
      lVar8 = 0;
      do {
        FUN_148341a1e(param_1,*(undefined4 *)(lVar5 + lVar8));
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar3 * 8 != lVar8);
    }
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 148342a4c FUN_148342a4c body=135 status=ok
// SIG undefined FUN_148342a4c(void)

undefined8 * FUN_148342a4c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  param_1[2] = 0xffffffff00000000;
  param_1[1] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = param_2;
  FUN_148342ad4(param_1 + 1,param_3);
  FUN_148342b22(param_1);
  if (*(int *)((longlong)param_3 + 0xc) != -1) {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = 0;
    param_3[1] = -0x100000000;
  }
  return param_1;
}



// FUNCTION 148342ad4 FUN_148342ad4 body=78 status=ok
// SIG undefined FUN_148342ad4(void)

longlong * FUN_148342ad4(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      FUN_148374760(param_1);
    }
  }
  return param_1;
}



// FUNCTION 148342b22 FUN_148342b22 body=498 status=ok
// SIG undefined FUN_148342b22(void)

void FUN_148342b22(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = *(undefined8 *)*param_1;
  local_d8 = 0;
  uStack_d0 = 0;
  if (*(int *)((longlong)param_1 + 0x14) == -1) {
    local_b8 = 0;
    local_a8 = &PTR_LAB_14ae748b0;
    local_c8 = &LAB_143b110ac;
    local_a0 = param_1;
    FUN_142984024(&local_e0);
  }
  else {
    local_78 = 0;
    local_68 = &PTR_LAB_14ae748b0;
    local_88 = &LAB_143b110ac;
    local_60 = param_1;
    FUN_142984384(&local_e0,param_1 + 1);
  }
  if (0 < (int)uStack_d0) {
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(local_d8 + lVar6 * 8);
      local_f8 = (void *)0x0;
      local_f0 = *(int *)(puVar3 + 1);
      lVar7 = (longlong)local_f0;
      _Src = (void *)*puVar3;
      if (lVar7 == 0) {
        local_ec = 0;
      }
      else {
        FUN_144a06ca8(&local_f8,local_f0,0);
        memcpy(local_f8,_Src,lVar7 << 2);
      }
      FUN_148343170(local_e8,*param_1,&local_f8);
      uVar4 = FUN_1448eb174(local_e8,8,0);
      plVar5 = (longlong *)FUN_1483753a8(param_1 + 3,uVar4);
      puVar3 = *(undefined8 **)(local_d8 + lVar6 * 8);
      uVar1 = *(uint *)(puVar3 + 1);
      if ((longlong)(int)uVar1 != 0) {
        iVar2 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = uVar1 + iVar2;
        if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar2) < uVar1) {
          FUN_1446f48e2(plVar5,iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 4 + *plVar5),(void *)*puVar3,(longlong)(int)uVar1 << 2);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_d0);
  }
  FUN_146be9400(&local_d8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148342d16 FUN_148342d16 body=736 status=ok
// SIG undefined FUN_148342d16(void)

undefined4 FUN_148342d16(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_148306eb2(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1483747c4(&local_98,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_148374962();
    }
  }
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    FUN_148306eb2(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      piVar6 = (int *)((longlong)iStack_c4 * 0x20 + *local_e0);
      uVar3 = FUN_1448eb174(piVar6,8,0);
      if ((int)uStack_90 != local_64) {
        puVar1 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar1 = local_60;
        }
        iVar2 = *(int *)(puVar1 + (ulonglong)(local_50 - 1U & uVar3) * 4);
        if (iVar2 != -1) {
          do {
            lVar4 = (longlong)iVar2 * 0x10;
            if ((*(int *)(local_98 + lVar4) == *piVar6) &&
               (*(int *)(local_98 + 4 + lVar4) == piVar6[1])) goto LAB_148342f23;
            iVar2 = *(int *)(lVar4 + local_98 + 8);
          } while (iVar2 != -1);
        }
      }
      lVar5 = (longlong)iStack_c4;
      lVar4 = *local_e0;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_148306f12(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar5 * 0x20 + lVar4);
      FUN_148374b28(&local_98,&local_b8);
LAB_148342f23:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  lVar4 = param_2[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148374e2e(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return (int)lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148342ff8 FUN_148342ff8 body=375 status=ok
// SIG undefined FUN_148342ff8(void)

undefined8 * FUN_148342ff8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  uVar1 = FUN_1448eb174(&local_30,8,0);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar3 = param_1 + 0x50;
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      do {
        lVar5 = (longlong)iVar4 * 0x20;
        if ((*(int *)(lVar3 + lVar5) == (int)local_30) &&
           (*(int *)(lVar3 + 4 + lVar5) == local_30._4_4_)) {
          lVar3 = 0;
          uVar1 = FUN_1448eb174(&local_30,8,0);
          if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) goto LAB_1483430c9;
          lVar3 = param_1 + 0x50;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar3 = *(longlong *)(param_1 + 0x58);
          }
          iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar1) * 4);
          if (iVar4 == -1) goto LAB_14834315c;
          lVar5 = *(longlong *)(param_1 + 0x18);
          goto LAB_148343136;
        }
        iVar4 = *(int *)(lVar5 + lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  goto LAB_148343039;
  while (iVar4 = *(int *)(lVar3 + 0x18), iVar4 != -1) {
LAB_148343136:
    lVar6 = (longlong)iVar4 * 0x20;
    lVar3 = lVar5 + lVar6;
    if ((*(int *)(lVar5 + lVar6) == (int)local_30) &&
       (*(int *)(lVar5 + 4 + lVar6) == local_30._4_4_)) goto LAB_1483430c9;
  }
LAB_14834315c:
  lVar3 = 0;
LAB_1483430c9:
  puVar2 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  *param_2 = 0;
  iVar4 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_2,iVar4,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar4 << 2);
  }
LAB_148343039:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148343170 FUN_148343170 body=815 status=ok
// SIG undefined FUN_148343170(void)

undefined8 * FUN_148343170(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  float *local_148;
  longlong *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  uint local_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  lVar3 = param_3[1];
  bVar10 = true;
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_3;
    lVar9 = 0;
    local_140 = param_3;
    local_138 = param_1;
    do {
      local_148 = &local_e0;
      FUN_146c35244(param_2,*(undefined4 *)(lVar2 + lVar9),&local_130,&local_100);
      fVar12 = 1.0 - (local_130._4_4_ + local_100._4_4_ + local_dc) * 0.33333334;
      fVar11 = ((float)local_130 + (float)local_100 + local_e0) * 0.33333334;
      local_108 = CONCAT44((int)ROUND(fVar12 + fVar12 + -0.5) >> 1,
                           (int)ROUND(fVar11 + fVar11 + -0.5) >> 1);
      local_130 = (longlong *)((ulonglong)(uint)local_130._4_4_ << 0x20);
      uVar4 = FUN_1448eb174(&local_108,8,0);
      piVar5 = (int *)FUN_148374ebc(local_d8,uVar4,&local_108,&local_130);
      *piVar5 = *piVar5 + 1;
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar9);
    bVar10 = local_b0 == 0;
    param_1 = local_138;
    param_3 = local_140;
  }
  *param_1 = 0;
  local_100 = 0x100000000;
  local_f0 = 0xffffffff;
  iStack_ec = 0;
  local_e8 = 0;
  iVar6 = 0;
  local_f8 = local_c8;
  if (!bVar10) {
    FUN_1449c0562(&local_100);
    iVar6 = local_b0;
  }
  local_118 = local_f0;
  iStack_114 = iStack_ec;
  local_110 = local_e8;
  local_10c = local_e4;
  local_128 = local_100;
  local_120 = local_f8;
  uVar7 = *param_1;
  local_130 = local_d8;
  if ((iStack_ec != iVar6) || (local_f8 != local_c8)) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(*local_130 + 8 + (longlong)iStack_114 * 0x14);
      if (iVar8 < iVar1) {
        uVar7 = *(undefined8 *)(*local_130 + (longlong)iStack_114 * 0x14);
        iVar8 = iVar1;
      }
      local_118 = local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while (local_130 != local_d8 || (local_120 != local_c8 || iStack_114 != iVar6));
  }
  *param_1 = uVar7;
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_146be9348(local_d8);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483434a0 FUN_1483434a0 body=186 status=ok
// SIG undefined FUN_1483434a0(void)

undefined8 * FUN_1483434a0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = *(undefined8 *)(param_3 + 8);
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_88 = 0;
    local_78 = &PTR_LAB_14ae748d0;
    local_98 = &LAB_143b11130;
    local_70 = param_3;
    FUN_142984024(param_2);
  }
  else {
    local_48 = 0;
    local_38 = &PTR_LAB_14ae748d0;
    local_58[0] = &LAB_143b11130;
    local_30 = param_3;
    FUN_142984384(param_2,*(longlong *)(param_1 + 8),local_58);
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834355b FUN_14834355b body=1243 status=ok
// SIG undefined FUN_14834355b(void)

void FUN_14834355b(longlong *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [44];
  uint local_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8 [3];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *param_1;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_d8 = CONCAT44(local_d8._4_4_,0xffffffff);
  FUN_1448156a8(local_c8,&local_d8,*(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24));
  iVar12 = 0;
  uVar10 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U)) {
      uVar18 = 1;
      uVar4 = 1;
      if (1 < (int)uVar10) {
        uVar18 = uVar10;
      }
      do {
        uVar9 = uVar18;
        if (uVar18 == uVar4) break;
        uVar8 = uVar4 >> 9;
        uVar15 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar8] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
  }
  if (uVar9 != uVar10) {
    iVar12 = 0;
    do {
      cVar3 = FUN_146c1bd3e(param_1,uVar9,1);
      if (cVar3 != '\0') {
        *(int *)(local_c8[0] + (longlong)(int)uVar9 * 4) = iVar12;
        iVar12 = iVar12 + 1;
      }
      uVar18 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar10) {
        uVar18 = uVar10;
      }
      do {
        uVar4 = uVar18;
        if (uVar18 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar5 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar10);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_148343a38(&local_d8,iVar12);
  uVar9 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
  uVar10 = 0;
  if ((uVar9 != 0) && (uVar10 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
    uVar18 = 1;
    uVar4 = 1;
    if (1 < (int)uVar9) {
      uVar18 = uVar9;
    }
    do {
      uVar10 = uVar18;
      if (uVar18 == uVar4) break;
      uVar8 = uVar4 >> 9;
      uVar15 = uVar4 & 0x1ff;
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar8] + (ulonglong)uVar15 * 2)
                              - 1U));
  }
  if (uVar10 != uVar9) {
    uVar18 = 0x7a69;
    local_dc = uVar9;
    do {
      lVar5 = (longlong)
              *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if ((lVar5 != -1) && (lVar5 = (longlong)*(int *)(local_c8[0] + lVar5 * 4), lVar5 != -1)) {
        uVar4 = (uVar10 & 0x7fffffff) >> 8;
        lVar13 = *(longlong *)(param_1[9] + (ulonglong)uVar4 * 8);
        uVar17 = (ulonglong)(uVar10 * 2 & 0x1fe);
        fVar1 = *(float *)(lVar13 + uVar17 * 4);
        fVar2 = *(float *)(lVar13 + 4 + uVar17 * 4);
        lVar5 = lVar5 * 0x50;
        lVar13 = local_d8 + lVar5;
        lVar6 = *(longlong *)(local_d8 + 0x40 + lVar5);
        lVar7 = lVar6;
        if (lVar6 == 0) {
          lVar7 = lVar13;
        }
        iVar12 = *(int *)(local_d8 + 0x48 + lVar5);
        lVar5 = (longlong)iVar12;
        fVar20 = fVar2;
        fVar21 = fVar1;
        if (lVar5 != 0) {
          iVar14 = 0;
          fVar19 = 0.0001;
LAB_148343804:
          lVar16 = 0;
          do {
            if ((*(float *)(lVar7 + lVar16) == fVar21) &&
               (!NAN(*(float *)(lVar7 + lVar16)) && !NAN(fVar21))) {
              fVar22 = *(float *)(lVar7 + 4 + lVar16);
              if ((fVar22 == fVar20) && (!NAN(fVar22) && !NAN(fVar20))) goto LAB_148343830;
            }
            lVar16 = lVar16 + 8;
            if (lVar5 * 8 - lVar16 == 0) break;
          } while( true );
        }
LAB_1483438f9:
        *(uint *)(lVar13 + 0x48) = iVar12 + 1U;
        if (*(uint *)(lVar13 + 0x4c) < iVar12 + 1U) {
          FUN_148375b58(lVar13,iVar12);
          lVar6 = *(longlong *)(lVar13 + 0x40);
          uVar9 = local_dc;
        }
        if (lVar6 != 0) {
          lVar13 = lVar6;
        }
        *(float *)(lVar13 + lVar5 * 8) = fVar21;
        *(float *)(lVar13 + 4 + lVar5 * 8) = fVar20;
        uVar11 = (ulonglong)(uVar4 << 3);
        *(float *)(*(longlong *)(param_1[9] + uVar11) + uVar17 * 4) = fVar21;
        *(float *)(*(longlong *)(param_1[9] + uVar11) + (uVar17 + 1) * 4) = fVar20;
      }
      uVar4 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar9) {
        uVar4 = uVar9;
      }
      do {
        uVar8 = uVar4;
        if (uVar4 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar8 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar10 >> 9) * 8)
                                           + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar8;
    } while (uVar10 != uVar9);
  }
  FUN_148375959(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148343830:
  if (iVar14 == 0x19) goto LAB_1483438f9;
  do {
    do {
      fVar20 = (float)(uVar18 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0;
      fVar21 = fVar20 + fVar20 + -1.0;
      uVar18 = uVar18 * -0x4b9b4d07 + 0x9d6f2492;
      fVar20 = (float)(uVar18 >> 9 | 0x3f800000) + -1.0;
      fVar22 = fVar20 + fVar20 + -1.0;
      fVar20 = fVar21 * fVar21 + fVar22 * fVar22;
    } while (1.0 < fVar20);
  } while (fVar20 < 1e-06);
  fVar20 = SQRT(fVar20);
  if (0.0 < fVar20) {
    fVar21 = fVar21 * (1.0 / fVar20);
  }
  else {
    fVar21 = 0.0;
  }
  iVar14 = iVar14 + 1;
  fVar20 = (float)(-(uint)(0.0 < fVar20) & (uint)(fVar22 * (1.0 / fVar20))) * fVar19 + fVar2;
  fVar21 = fVar21 * fVar19 + fVar1;
  fVar19 = fVar19 + fVar19;
  goto LAB_148343804;
}



// FUNCTION 148343a38 FUN_148343a38 body=122 status=ok
// SIG undefined FUN_148343a38(void)

void FUN_148343a38(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483759b0(param_1,iVar1);
    }
    FUN_148375988((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148375a44(param_1,param_2,iVar1 - param_2);
    FUN_148375aaa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148343ab4 FUN_148343ab4 body=1720 status=ok
// SIG undefined FUN_148343ab4(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_148343ab4(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4,char *param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStack_198 [32];
  longlong *local_178;
  char *local_170;
  undefined8 *local_168;
  undefined4 local_160 [2];
  wchar_t *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  wchar_t *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_f8 [2];
  wchar_t *local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_90 [16];
  longlong local_80 [3];
  code *local_68;
  wchar_t **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  pcVar9 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *param_2 = 1;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[0] = param_3;
  cVar2 = FUN_14834416e(0,param_3,local_80,param_5);
  if (cVar2 == '\0') {
    local_130 = L"InitialPatchesFailed";
    local_128._0_4_ = 0x14;
    FUN_1446e940c(&local_110,&local_130);
    local_130 = L"PatchBasedMeshUVGenerator";
    local_128 = (longlong *)CONCAT44(local_128._4_4_,0x19);
    FUN_1446e940c(&local_58,&local_130);
    FUN_140208bae(local_90,&local_58,&local_110,L"Failed to compute initial patch set");
    FUN_1483442e0(param_2,local_90);
    goto LAB_148343d87;
  }
  if (pcVar9 != (char *)0x0) {
    if (*pcVar9 == '\0') {
      pcVar1 = *(code **)(pcVar9 + 0x70);
      plVar6 = *(longlong **)(pcVar9 + 0x80);
      if (*(longlong **)(pcVar9 + 0x80) == (longlong *)0x0) {
        plVar6 = (longlong *)(pcVar9 + 0x90);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar2 = (*pcVar1)(uVar5);
      *pcVar9 = cVar2;
      if (cVar2 == '\0') {
        local_178 = &local_a8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_170 = pcVar9;
        cVar2 = FUN_148344402(param_1,param_3);
        if (cVar2 == '\0') goto LAB_148343ea3;
        if (*pcVar9 == '\0') {
          pcVar1 = *(code **)(pcVar9 + 0x70);
          plVar6 = (longlong *)(pcVar9 + 0x90);
          if (*(longlong **)(pcVar9 + 0x80) != (longlong *)0x0) {
            plVar6 = *(longlong **)(pcVar9 + 0x80);
          }
          uVar5 = (**(code **)(*plVar6 + 8))(plVar6);
          cVar2 = (*pcVar1)(uVar5);
          *pcVar9 = cVar2;
          if (cVar2 == '\0') goto LAB_148343b68;
        }
        *param_2 = 2;
        goto LAB_148343f1a;
      }
    }
    *param_2 = 2;
    goto LAB_148343d87;
  }
  local_178 = &local_a8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_170 = (char *)0x0;
  cVar2 = FUN_148344402(param_1,param_3);
  if (cVar2 == '\0') {
LAB_148343ea3:
    local_130 = L"IslandMergingFailed";
    local_128._0_4_ = 0x13;
    FUN_1446e940c(&local_110,&local_130);
    local_130 = L"PatchBasedMeshUVGenerator";
    local_128 = (longlong *)CONCAT44(local_128._4_4_,0x19);
    FUN_1446e940c(&local_58,&local_130);
    FUN_140208bae(local_b8,&local_58,&local_110,L"Failed to merge UV islands");
    FUN_1483442e0(param_2,local_b8);
  }
  else {
LAB_148343b68:
    local_178 = local_c8;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_170 = pcVar9;
    iVar3 = FUN_148345c42(param_1,param_3,param_4,&local_a8);
    if (0 < iVar3) {
      local_130 = L"PartialSolvesFailed";
      local_128._0_4_ = 0x13;
      FUN_1446e940c(&local_58,&local_130);
      local_130 = L"PatchBasedMeshUVGenerator";
      local_128 = (longlong *)CONCAT44(local_128._4_4_,0x19);
      FUN_1446e940c(&local_68,&local_130);
      FUN_140208bae(&local_130,&local_68,&local_58,L"Failed to compute UVs for some UV islands");
      local_f8[0] = 0;
      local_f0 = local_130;
      if (local_130 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_130 + 8))();
      }
      local_e8 = local_128._0_4_;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      FUN_1402160b8(&local_110);
      local_e0 = local_110;
      FUN_148345df2(param_2,local_f8);
      if (local_130 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_130 + 0x10))();
      }
    }
    if (pcVar9 == (char *)0x0) {
LAB_148343c92:
      local_100 = 0xffffffff;
      local_110 = param_3;
      local_108 = param_4;
      if ((*(longlong **)(param_3 + 0x208) != (longlong *)0x0) &&
         (iVar3 = (**(code **)(**(longlong **)(param_3 + 0x208) + 0xa0))(), 0 < iVar3)) {
        lVar8 = 0;
        do {
          plVar6 = *(longlong **)(param_3 + 0x208);
          if (lVar8 < (int)plVar6[5]) {
            lVar4 = *(longlong *)(plVar6[4] + lVar8 * 8);
          }
          else {
            lVar4 = 0;
          }
          if (lVar4 == param_4) {
            local_100 = (undefined4)lVar8;
            break;
          }
          lVar8 = lVar8 + 1;
          iVar3 = (**(code **)(*plVar6 + 0xa0))();
        } while (lVar8 < iVar3);
      }
      if (*(char *)(param_1 + 0x48) == '\x01') {
        local_130 = (wchar_t *)&param_5;
        local_60 = &local_130;
        local_120 = &local_110;
        local_118 = &local_a8;
        local_168 = &local_58;
        local_58 = 0;
        local_50 = 0;
        local_68 = FUN_143b1118a;
        local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
        local_128 = local_c8;
        FUN_1401f8d10(L"ParallelFor Task",uStack_a0 & 0xffffffff,1);
        pcVar9 = param_5;
      }
      if (pcVar9 == (char *)0x0) {
LAB_148343fda:
        if ((*(char *)(param_1 + 0x49) == '\x01') &&
           (cVar2 = FUN_14833d860(&local_110,*(undefined4 *)(param_1 + 0x4c),
                                  *(undefined4 *)(param_1 + 0x50)), cVar2 == '\0')) {
          local_130 = L"IslandPackingFailed";
          local_128._0_4_ = 0x13;
          FUN_1446e940c(&local_58,&local_130);
          local_130 = L"PatchBasedMeshUVGenerator";
          local_128 = (longlong *)CONCAT44(local_128._4_4_,0x19);
          FUN_1446e940c(&local_68,&local_130);
          FUN_140208bae(&local_130,&local_68,&local_58,L"Failed to pack UV islands");
          local_160[0] = 0;
          local_158 = local_130;
          if (local_130 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_130 + 8))();
          }
          local_150 = local_128._0_4_;
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          FUN_1402160b8();
          FUN_148345df2(param_2,local_160);
          if (local_130 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_130 + 0x10))();
          }
        }
        pcVar9 = param_5;
        if (param_5 == (char *)0x0) {
LAB_14834400a:
          uVar7 = 0;
        }
        else {
          uVar7 = 2;
          if (*param_5 == '\0') {
            pcVar1 = *(code **)(param_5 + 0x70);
            plVar6 = (longlong *)(param_5 + 0x90);
            if (*(longlong **)(param_5 + 0x80) != (longlong *)0x0) {
              plVar6 = *(longlong **)(param_5 + 0x80);
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar2 = (*pcVar1)(uVar5);
            *pcVar9 = cVar2;
            if (cVar2 == '\0') goto LAB_14834400a;
          }
        }
      }
      else {
        uVar7 = 2;
        if (*pcVar9 == '\0') {
          pcVar1 = *(code **)(pcVar9 + 0x70);
          plVar6 = (longlong *)(pcVar9 + 0x90);
          if (*(longlong **)(pcVar9 + 0x80) != (longlong *)0x0) {
            plVar6 = *(longlong **)(pcVar9 + 0x80);
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          cVar2 = (*pcVar1)(uVar5);
          *pcVar9 = cVar2;
          if (cVar2 == '\0') goto LAB_148343fda;
        }
      }
      *param_2 = uVar7;
    }
    else {
      if (*pcVar9 == '\0') {
        pcVar1 = *(code **)(pcVar9 + 0x70);
        plVar6 = (longlong *)(pcVar9 + 0x90);
        if (*(longlong **)(pcVar9 + 0x80) != (longlong *)0x0) {
          plVar6 = *(longlong **)(pcVar9 + 0x80);
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar2 = (*pcVar1)(uVar5);
        *pcVar9 = cVar2;
        if (cVar2 == '\0') goto LAB_148343c92;
      }
      *param_2 = 2;
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_148343f1a:
  FUN_144716727(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
LAB_148343d87:
  FUN_146be9400(local_80 + 1);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14834416e FUN_14834416e body=368 status=ok
// SIG undefined FUN_14834416e(void)

ulonglong FUN_14834416e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148376df4(local_78);
  lVar3 = DAT_14cb46760;
  local_68 = 0;
  local_6c = *(undefined4 *)(param_1 + 3);
  uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
  uVar7 = param_1[2];
  cVar4 = FUN_144a8728e();
  if (cVar4 == '\0') {
    bVar5 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar5 ^ 1);
  }
  else {
    uVar6 = 0;
  }
  local_b8 = *param_1;
  if (*(int *)(lVar3 + uVar6 * 4) == 0) {
    local_88 = 0x3ff0000000000000;
    local_80 = 0x3ff0000000000000;
    local_90 = uVar7;
    cVar4 = FUN_143b129a8(local_78,*(undefined4 *)(param_1 + 1),uVar1);
  }
  else {
    local_a0 = 0x3ff0000000000000;
    local_98 = 0x3ff0000000000000;
    local_a8 = uVar7;
    cVar4 = FUN_148379ccc(local_78,*(undefined4 *)(param_1 + 1),uVar1);
  }
  if (cVar4 != '\0') {
    if (param_4 == (char *)0x0) {
LAB_148344259:
      uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      FUN_146c81aa0(param_3,local_60,1,0);
      goto LAB_1483442a2;
    }
    if (*param_4 == '\0') {
      pcVar2 = *(code **)(param_4 + 0x70);
      plVar8 = (longlong *)(param_4 + 0x90);
      if (*(longlong **)(param_4 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_4 + 0x80);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar4 = (*pcVar2)(uVar7);
      *param_4 = cVar4;
      if (cVar4 == '\0') goto LAB_148344259;
    }
  }
  uVar6 = 0;
LAB_1483442a2:
  FUN_148345e5a(local_78);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483442e0 FUN_1483442e0 body=289 status=ok
// SIG undefined FUN_1483442e0(void)

void FUN_1483442e0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 4;
  local_60 = 0;
  local_58 = (longlong *)*param_2;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)param_2[1];
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1402160b8();
  iVar2 = param_1[4];
  param_1[4] = iVar2 + 1U;
  if ((uint)param_1[5] < iVar2 + 1U) {
    FUN_14834e770(param_1 + 2,iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 0x30);
  *puVar1 = 0;
  FUN_14023423e(puVar1 + 2,&local_58);
  *(undefined8 *)(puVar1 + 6) = local_48;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 8) = uStack_40;
  uStack_40 = 0;
  puVar1[10] = (undefined4)local_38;
  puVar1[0xb] = local_38._4_4_;
  local_38 = 0;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148344402 FUN_148344402 body=6206 status=ok
// SIG undefined FUN_148344402(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_148344402(longlong ****param_1,longlong **param_2,undefined8 param_3,
                       undefined8 param_4,longlong *param_5,char *param_6)

{
  longlong ***ppplVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong **pplVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong ***ppplVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong ****pppplVar21;
  bool bVar22;
  longlong ***ppplVar23;
  ulonglong uVar24;
  longlong ***_Src;
  undefined8 *puVar25;
  longlong lVar26;
  longlong ***ppplVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong ***ppplVar31;
  longlong ***ppplVar32;
  longlong ***ppplVar33;
  longlong ***ppplVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_668 [32];
  code **local_648;
  undefined4 local_640;
  longlong ****local_638;
  longlong ****local_630;
  ulonglong local_628;
  int local_61c;
  longlong **local_618;
  longlong ***local_610;
  longlong ***local_608;
  undefined1 local_5fc [4];
  longlong ***local_5f8;
  undefined8 uStack_5f0;
  double *local_5e8;
  undefined8 uStack_5e0;
  longlong **local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8 [2];
  longlong ***local_5c0;
  undefined8 local_5b8;
  longlong ****local_5b0;
  code *local_5a8;
  longlong ****local_5a0;
  undefined8 local_598;
  longlong ****local_590;
  code *local_588;
  longlong ****local_580;
  longlong ***local_578;
  ulonglong uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  longlong ***local_538;
  longlong ****local_530;
  code *local_528;
  longlong ****pppplStack_520;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4fc;
  int local_4f4;
  undefined1 local_4f0 [8];
  undefined1 *local_4e8;
  int local_4e0;
  longlong ***local_4d8;
  undefined8 uStack_4d0;
  longlong *local_4c8 [2];
  undefined8 local_4b8;
  int local_4b0;
  undefined8 local_4ac;
  undefined4 local_4a4;
  longlong local_498;
  undefined4 local_490;
  longlong ****local_488;
  undefined8 uStack_480;
  longlong **pplStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined8 local_45c;
  int local_454;
  undefined1 local_450 [8];
  undefined1 *local_448;
  int local_440;
  longlong ***local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_e0;
  
  pcVar9 = param_6;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_668;
  local_618 = param_2;
  if (param_6 != (char *)0x0) {
    if (*param_6 == '\0') {
      pcVar6 = *(code **)(param_6 + 0x70);
      plVar20 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar20 = *(longlong **)(param_6 + 0x80);
      }
      uVar15 = (**(code **)(*plVar20 + 8))();
      cVar11 = (*pcVar6)(uVar15);
      *pcVar9 = cVar11;
      if (cVar11 == '\0') goto LAB_14834454f;
    }
    uVar17 = 0;
    goto LAB_1483444d0;
  }
LAB_14834454f:
  local_548 = 0;
  uStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_578 = (longlong ***)0x0;
  uStack_570 = 0;
  if (*param_1 == (longlong ***)0x0) {
    local_5a0 = (longlong ****)&local_488;
    local_648 = &local_5a8;
    local_5a8 = (code *)&LAB_14837425c;
    local_5b0 = &local_188;
    puVar25 = &local_5b8;
    puVar16 = &LAB_143b11288;
  }
  else {
    local_580 = (longlong ****)&local_488;
    local_648 = &local_588;
    local_588 = FUN_143b11210;
    local_590 = &local_188;
    puVar25 = &local_598;
    puVar16 = &LAB_143b1120c;
    local_488 = param_1;
  }
  *puVar25 = puVar16;
  FUN_14833b5f6(&local_578,local_618,param_4);
  pcVar9 = param_6;
  if (param_6 == (char *)0x0) {
LAB_148344622:
    local_4b8 = 0;
    local_4b0 = 0;
    local_4d8 = (longlong ***)0x0;
    uStack_4d0 = 0;
    local_4ac = 0xffffffff00000080;
    local_4a4 = 0;
    local_498 = 0;
    local_490 = 0;
    local_488 = (longlong ****)((ulonglong)local_488 & 0xffffffff00000000);
    uVar17 = uStack_570 & 0xffffffff;
    if (0 < (int)uStack_570) {
      uVar12 = 0;
      do {
        if ((-1 < (int)uVar12) && (*(char *)(local_578 + (ulonglong)uVar12 * 6) != '\0')) {
          FUN_1447cbafe(&local_4d8,&local_188,&local_488,0);
          uVar17 = uStack_570 & 0xffffffff;
          uVar12 = (uint)local_488;
        }
        uVar12 = uVar12 + 1;
        local_488 = (longlong ****)CONCAT44(local_488._4_4_,uVar12);
      } while ((int)uVar12 < (int)uVar17);
    }
    local_5c8[0] = *(undefined4 *)(param_1 + 7);
    local_5c0 = param_1[8];
    ppplVar1 = param_1[4];
    local_5d8 = (longlong **)0x0;
    uStack_5d0 = 0;
    FUN_148345e96(&local_5d8);
    local_488 = &local_578;
    pppplStack_520 = (longlong ****)&local_488;
    pplStack_478 = local_618;
    uStack_468 = &param_6;
    local_638 = &local_188;
    local_188 = (longlong ***)0x0;
    uStack_180 = (longlong **)((ulonglong)uStack_180._4_4_ << 0x20);
    local_528 = FUN_143b1128c;
    local_640 = 0;
    uStack_480 = &local_5d8;
    local_470 = (longlong **)local_5c8;
    FUN_1401f8d10(L"ParallelFor Task",uStack_570 & 0xffffffff,1);
    pcVar9 = param_6;
    if (param_6 == (char *)0x0) {
LAB_148344797:
      local_508 = 0;
      local_500 = 0;
      local_528 = (code *)0x0;
      pppplStack_520 = (longlong ****)0x0;
      local_4fc = 0xffffffff00000080;
      local_4f4 = 0;
      local_4e8 = (undefined1 *)0x0;
      local_4e0 = 0;
      local_5e8 = (double *)0x0;
      ppplVar33 = param_1[5];
      ppplVar23 = param_1[6];
      uStack_5e0._0_4_ = 1;
      uStack_5e0._4_4_ = 0;
      FUN_143b1227e(&local_5e8,0);
      iVar28 = (uint)uStack_5e0;
      *local_5e8 = (double)ppplVar1;
      local_5e8[1] = (double)ppplVar33;
      local_5e8[2] = (double)ppplVar23 * 0.125;
      ppplVar33 = param_1[5];
      ppplVar23 = param_1[6];
      lVar26 = (longlong)(int)(uint)uStack_5e0;
      uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
      if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
        FUN_143b1227e(&local_5e8,iVar28);
      }
      uVar12 = (uint)uStack_5e0;
      local_5e8[lVar26 * 3] = (double)ppplVar1;
      local_5e8[lVar26 * 3 + 1] = (double)ppplVar33;
      local_5e8[lVar26 * 3 + 2] = (double)ppplVar23 * 0.25;
      ppplVar33 = param_1[5];
      ppplVar23 = param_1[6];
      lVar26 = (longlong)(int)(uint)uStack_5e0;
      uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
      if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
        FUN_143b1227e(&local_5e8,uVar12);
      }
      uVar12 = (uint)uStack_5e0;
      local_5e8[lVar26 * 3] = (double)ppplVar1;
      local_5e8[lVar26 * 3 + 1] = (double)ppplVar33;
      local_5e8[lVar26 * 3 + 2] = (double)ppplVar23 * 0.5;
      ppplVar33 = param_1[5];
      ppplVar23 = param_1[6];
      lVar26 = (longlong)(int)(uint)uStack_5e0;
      uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
      if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
        FUN_143b1227e(&local_5e8,uVar12);
      }
      local_5e8[lVar26 * 3] = (double)ppplVar1;
      local_5e8[lVar26 * 3 + 1] = (double)ppplVar33;
      local_5e8[lVar26 * 3 + 2] = (double)ppplVar23;
      bVar22 = false;
      local_61c = 0;
      while (!bVar22) {
        lVar26 = (longlong)local_61c;
        dVar2 = local_5e8[lVar26 * 3];
        dVar3 = local_5e8[lVar26 * 3 + 1];
        dVar4 = local_5e8[lVar26 * 3 + 2];
        local_5f8 = (longlong ***)0x0;
        uStack_5f0 = 0;
        local_188 = (longlong ***)0x100000000;
        uStack_180 = local_4c8;
        local_178 = (longlong **)&DAT_ffffffff;
        uStack_170 = 0;
        if (local_4b0 == 0) {
          iVar28 = 0;
        }
        else {
          FUN_1449c0562(&local_188);
          iVar28 = local_4b0;
        }
        local_470 = local_178;
        pplVar5 = local_470;
        uStack_468 = (undefined8 *)CONCAT44(uStack_16c,uStack_170);
        uStack_480 = local_188;
        pplStack_478 = uStack_180;
        local_488 = &local_4d8;
        local_470._4_4_ = (int)((ulonglong)local_178 >> 0x20);
        if ((local_470._4_4_ != iVar28) || (uStack_180 != local_4c8)) {
          local_628 = CONCAT44(local_628._4_4_,iVar28);
          iVar14 = local_470._4_4_;
          local_470 = pplVar5;
          do {
            uVar12 = *(uint *)((longlong)*local_488 + (longlong)iVar14 * 0xc);
            FUN_148341e88(&local_578,&local_538,uVar12);
            if ((longlong)(int)local_530 != 0) {
              ppplVar33 = (longlong ***)((longlong)local_538 + (longlong)(int)local_530 * 4);
              ppplVar23 = local_538;
              do {
                uVar17 = uStack_5f0;
                iVar28 = *(int *)ppplVar23;
                if ((int)uVar12 < iVar28) {
                  if ((int)pppplStack_520 != local_4f4) {
                    puVar16 = local_4e8;
                    if (local_4e8 == (undefined1 *)0x0) {
                      puVar16 = local_4f0;
                    }
                    iVar14 = *(int *)(puVar16 +
                                     (ulonglong)
                                     (local_4e0 - 1U &
                                     (uVar12 * 0x40 + (uVar12 >> 2) + -0x61c88647 + iVar28 ^ uVar12)
                                     ) * 4);
                    while (iVar14 != -1) {
                      lVar26 = (longlong)iVar14 * 0x10;
                      if ((*(uint *)(local_528 + lVar26) == uVar12) &&
                         (*(int *)(local_528 + lVar26 + 4) == iVar28)) goto LAB_148344ba6;
                      iVar14 = *(int *)(local_528 + lVar26 + 8);
                    }
                  }
                  local_178 = DAT_14c8464f0;
                  local_188 = DAT_14c8464e0;
                  uStack_180 = DAT_14c8464e8;
                  lVar26 = (longlong)(int)uStack_5f0;
                  uVar13 = (int)uStack_5f0 + 1;
                  uStack_5f0 = CONCAT44(uStack_5f0._4_4_,uVar13);
                  if (uStack_5f0._4_4_ < uVar13) {
                    FUN_143b123ea(&local_5f8,uVar17 & 0xffffffff);
                  }
                  *(uint *)(local_5f8 + lVar26 * 0x14) = uVar12;
                  *(int *)((longlong)local_5f8 + lVar26 * 0xa0 + 4) = iVar28;
                  local_5f8[lVar26 * 0x14 + 1] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 2] = (longlong **)local_188;
                  (local_5f8 + lVar26 * 0x14 + 2)[1] = uStack_180;
                  local_5f8[lVar26 * 0x14 + 4] = local_178;
                  local_5f8[lVar26 * 0x14 + 5] = (longlong **)0x3ff0000000000000;
                  local_5f8[lVar26 * 0x14 + 6] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 7] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 8] = (longlong **)0xffefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 9] = (longlong **)0xffefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 10] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0xb] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0xc] = (longlong **)0x7fefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0xd] = (longlong **)0xffefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0xe] = (longlong **)0xffefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0xf] = (longlong **)0xffefffffffffffff;
                  local_5f8[lVar26 * 0x14 + 0x10] = (longlong **)0x0;
                  (local_5f8 + lVar26 * 0x14 + 0x10)[1] = (longlong **)0x0;
                  local_5f8[lVar26 * 0x14 + 0x12] = (longlong **)0x0;
                  local_5f8[lVar26 * 0x14 + 0x13] = (longlong **)0x3ff0000000000000;
                }
LAB_148344ba6:
                ppplVar23 = (longlong ***)((longlong)ppplVar23 + 4);
              } while (ppplVar23 != ppplVar33);
              iVar28 = (int)local_628;
            }
            if (local_538 != (longlong ***)0x0) {
              FUN_1400020a8(local_538);
            }
            local_470 = (longlong **)CONCAT44(local_470._4_4_,(uint)local_470 & ~uStack_480._4_4_);
            FUN_1449c0562(&uStack_480);
            iVar14 = local_470._4_4_;
          } while (local_488 != &local_4d8 ||
                   (pplStack_478 != local_4c8 || local_470._4_4_ != iVar28));
        }
        local_488 = &local_5f8;
        uStack_480 = (longlong ***)&local_578;
        pplStack_478 = local_618;
        local_470 = (longlong **)local_5c8;
        uStack_468 = &param_6;
        local_188 = (longlong ***)0x0;
        uStack_180 = (longlong **)((ulonglong)uStack_180 & 0xffffffff00000000);
        local_538 = (longlong ***)FUN_143b124f4;
        local_530 = (longlong ****)&local_488;
        local_638 = &local_188;
        local_640 = 0;
        FUN_1401f8d10(L"ParallelFor Task",uStack_5f0 & 0xffffffff,1,&local_538);
        pcVar9 = param_6;
        if (param_6 == (char *)0x0) {
LAB_148344d80:
          ppplVar33 = local_5f8;
          local_538 = &local_5d8;
          iVar28 = (int)uStack_5f0;
          lVar26 = (longlong)(int)uStack_5f0;
          if (1 < lVar26) {
            memset(&pplStack_478,0,0x2f0);
            local_488 = (longlong ****)ppplVar33;
            uStack_480 = ppplVar33 + lVar26 * 0x14 + -0x14;
            fVar35 = logf((float)iVar28);
            pplStack_478 = (longlong **)
                           CONCAT44(pplStack_478._4_4_,(int)(longlong)(fVar35 + fVar35));
            pppplVar21 = (longlong ****)&local_488;
            do {
              ppplVar23 = *pppplVar21;
              ppplVar27 = pppplVar21[1];
              iVar28 = *(int *)(pppplVar21 + 2);
              iVar14 = (int)((ulonglong)((longlong)ppplVar27 - (longlong)ppplVar23) >> 5) *
                       -0x33333333;
              uVar17 = (ulonglong)(iVar14 + 1);
              ppplVar32 = ppplVar23;
              ppplVar33 = ppplVar27;
              local_630 = pppplVar21;
              if (iVar28 != 0) {
LAB_148344e31:
                if (8 < (int)(uint)uVar17) {
                  local_628 = CONCAT44(local_628._4_4_,iVar28);
                  local_610 = ppplVar32;
                  local_608 = ppplVar27;
                  memcpy(&local_188,ppplVar23 + (ulonglong)((uint)uVar17 >> 1) * 0x14,0xa0);
                  memcpy(ppplVar23 + (ulonglong)((uint)uVar17 >> 1) * 0x14,ppplVar23,0xa0);
                  memcpy(ppplVar23,&local_188,0xa0);
                  ppplVar31 = ppplVar33 + 0x14;
                  _Src = ppplVar23;
                  do {
                    ppplVar27 = _Src + 0x14;
                    ppplVar10 = _Src + 0x14;
                    do {
                      _Src = ppplVar10;
                      ppplVar32 = ppplVar27;
                      if (ppplVar33 < _Src) break;
                      dVar36 = (double)FUN_143b126d8(&local_538,ppplVar23);
                      dVar37 = (double)FUN_143b126d8(&local_538,_Src);
                      ppplVar27 = ppplVar32 + 0x14;
                      ppplVar10 = _Src + 0x14;
                    } while (dVar37 <= dVar36);
                    ppplVar10 = ppplVar31 + -0x28;
                    do {
                      ppplVar34 = ppplVar31;
                      ppplVar27 = ppplVar10;
                      ppplVar31 = ppplVar34 + -0x14;
                      if (ppplVar31 <= ppplVar23) break;
                      dVar36 = (double)FUN_143b126d8(&local_538,ppplVar31);
                      dVar37 = (double)FUN_143b126d8(&local_538,ppplVar23);
                      ppplVar10 = ppplVar27 + -0x14;
                    } while (dVar37 <= dVar36);
                    if (ppplVar31 < _Src) goto LAB_148344f68;
                    memcpy(&local_188,_Src,0xa0);
                    memcpy(_Src,ppplVar31,0xa0);
                    memcpy(ppplVar31,&local_188,0xa0);
                  } while( true );
                }
                for (; pppplVar21 = local_630, ppplVar32 = ppplVar23, ppplVar27 = ppplVar23,
                    ppplVar23 < ppplVar33;
                    ppplVar33 = (longlong ***)((longlong)ppplVar33 + 0xffffffffffffff60)) {
                  while (ppplVar31 = ppplVar32, ppplVar27 = ppplVar27 + 0x14, ppplVar27 <= ppplVar33
                        ) {
                    dVar36 = (double)FUN_143b126d8(&local_538,ppplVar31);
                    dVar37 = (double)FUN_143b126d8(&local_538,ppplVar27);
                    ppplVar32 = ppplVar27;
                    if (dVar37 <= dVar36) {
                      ppplVar32 = ppplVar31;
                    }
                  }
                  memcpy(&local_188,ppplVar31,0xa0);
                  memcpy(ppplVar31,ppplVar33,0xa0);
                  memcpy(ppplVar33,&local_188,0xa0);
                }
                goto LAB_1483453e1;
              }
LAB_148345058:
              iVar28 = (int)uVar17;
              pppplVar21 = local_630;
              if (iVar28 != 0) {
                uVar12 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
                do {
                  local_628 = (ulonglong)uVar12;
                  uVar8 = local_628;
                  while (uVar13 = uVar12 * 2 + 1, (int)uVar13 < iVar28) {
                    uVar24 = (ulonglong)uVar13;
                    uVar12 = uVar12 * 2 + 2;
                    if ((int)uVar12 < iVar28) {
                      dVar36 = (double)FUN_143b126d8(&local_538,
                                                     ppplVar23 + (longlong)(int)uVar12 * 0x14);
                      dVar37 = (double)FUN_143b126d8(&local_538,
                                                     ppplVar23 + (longlong)(int)uVar13 * 0x14);
                      if (dVar37 <= dVar36) {
                        uVar24 = (ulonglong)uVar12;
                      }
                    }
                    uVar12 = (uint)uVar24;
                    ppplVar27 = ppplVar23 + (longlong)(int)uVar8 * 0x14;
                    ppplVar33 = ppplVar23 + (longlong)(int)uVar12 * 0x14;
                    dVar36 = (double)FUN_143b126d8(&local_538,ppplVar27);
                    dVar37 = (double)FUN_143b126d8(&local_538,ppplVar33);
                    if (dVar37 <= dVar36) break;
                    memcpy(&local_188,ppplVar27,0xa0);
                    memcpy(ppplVar27,ppplVar33,0xa0);
                    memcpy(ppplVar33,&local_188,0xa0);
                    uVar8 = uVar24;
                  }
                  uVar12 = (int)local_628 - 1;
                } while ((int)local_628 != 0);
                pppplVar21 = local_630;
                if (1 < iVar28) {
                  uVar17 = uVar17 - 1;
                  memcpy(&local_188,ppplVar23,0xa0);
                  memcpy(ppplVar23,ppplVar23 + uVar17 * 0x14,0xa0);
                  memcpy(ppplVar23 + uVar17 * 0x14,&local_188,0xa0);
                  pppplVar21 = local_630;
                  if (iVar28 != 2) {
                    do {
                      iVar28 = 0;
                      iVar30 = 1;
                      iVar14 = 0;
                      local_628 = uVar17;
                      do {
                        iVar28 = iVar28 + 2;
                        iVar29 = iVar30;
                        if ((longlong)iVar28 < (longlong)local_628) {
                          dVar36 = (double)FUN_143b126d8(&local_538,
                                                         ppplVar23 + (longlong)iVar28 * 0x14);
                          dVar37 = (double)FUN_143b126d8(&local_538,
                                                         ppplVar23 + (longlong)iVar30 * 0x14);
                          if (dVar37 <= dVar36) {
                            iVar29 = iVar28;
                          }
                        }
                        ppplVar27 = ppplVar23 + (longlong)iVar14 * 0x14;
                        ppplVar33 = ppplVar23 + (longlong)iVar29 * 0x14;
                        dVar36 = (double)FUN_143b126d8(&local_538,ppplVar27);
                        dVar37 = (double)FUN_143b126d8(&local_538,ppplVar33);
                        if (dVar37 <= dVar36) break;
                        memcpy(&local_188,ppplVar27,0xa0);
                        memcpy(ppplVar27,ppplVar33,0xa0);
                        memcpy(ppplVar33,&local_188,0xa0);
                        iVar28 = iVar29 * 2;
                        iVar30 = iVar29 * 2 + 1;
                        iVar14 = iVar29;
                      } while ((longlong)iVar30 < (longlong)local_628);
                      uVar8 = local_628;
                      uVar17 = local_628 - 1;
                      memcpy(&local_188,ppplVar23,0xa0);
                      memcpy(ppplVar23,ppplVar23 + uVar17 * 0x14,0xa0);
                      memcpy(ppplVar23 + uVar17 * 0x14,&local_188,0xa0);
                      pppplVar21 = local_630;
                    } while (2 < uVar8);
                  }
                }
              }
LAB_1483453e1:
              pppplVar21 = pppplVar21 + -3;
            } while (&local_488 <= pppplVar21);
          }
          uStack_468 = (undefined8 *)0x0;
          local_460 = 0;
          local_488 = (longlong ****)0x0;
          uStack_480 = (longlong ***)0x0;
          local_45c = 0xffffffff00000080;
          local_454 = 0;
          local_448 = (undefined1 *)0x0;
          local_440 = 0;
          bVar22 = true;
          if (0 < (int)uStack_5f0) {
            lVar26 = 0;
            do {
              ppplVar33 = local_5f8 + lVar26 * 0x14;
              uVar12 = *(uint *)(local_5f8 + lVar26 * 0x14);
              lVar18 = (longlong)(int)uVar12;
              if ((int)uStack_480 == local_454) {
                uVar12 = *(uint *)((longlong)ppplVar33 + 4);
              }
              else {
                puVar16 = local_448;
                if (local_448 == (undefined1 *)0x0) {
                  puVar16 = local_450;
                }
                for (iVar28 = *(int *)(puVar16 + (ulonglong)(local_440 - 1U & uVar12) * 4);
                    iVar28 != -1;
                    iVar28 = *(int *)((longlong)local_488 + (longlong)iVar28 * 0xc + 4)) {
                  if (*(uint *)((longlong)local_488 + (longlong)iVar28 * 0xc) == uVar12)
                  goto LAB_1483456ca;
                }
                uVar12 = *(uint *)((longlong)ppplVar33 + 4);
                for (iVar28 = *(int *)(puVar16 + (ulonglong)(local_440 - 1U & uVar12) * 4);
                    iVar28 != -1;
                    iVar28 = *(int *)((longlong)local_488 + (longlong)iVar28 * 0xc + 4)) {
                  if (*(uint *)((longlong)local_488 + (longlong)iVar28 * 0xc) == uVar12)
                  goto LAB_1483456ca;
                }
              }
              pplVar5 = ppplVar33[1];
              lVar19 = (longlong)(int)uVar12;
              dVar37 = (double)local_5d8[lVar18 * 0x13 + 3] * (double)local_5d8[lVar19 * 0x13 + 3] +
                       (double)local_5d8[lVar18 * 0x13 + 1] * (double)local_5d8[lVar19 * 0x13 + 1] +
                       (double)local_5d8[lVar18 * 0x13 + 2] * (double)local_5d8[lVar19 * 0x13 + 2];
              dVar36 = 1.0;
              if (dVar37 <= 1.0) {
                dVar36 = dVar37;
              }
              dVar36 = acos((double)(-(ulonglong)(dVar37 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar37 < -1.0) & (ulonglong)dVar36));
              if (((dVar4 <= dVar36 * 57.29577951308232) ||
                  (dVar3 < (double)ppplVar33[0x13] || dVar3 == (double)ppplVar33[0x13])) ||
                 ((double)ppplVar1 * 4.0 < (double)pplVar5)) {
LAB_148345654:
                local_188 = (longlong ***)*ppplVar33;
                FUN_1405dc450(&local_528,local_5fc,&local_188,0);
              }
              else if ((double)pplVar5 < dVar2) {
                cVar11 = FUN_148342920(&local_578,*(int *)((longlong)ppplVar33 + 4),
                                       *(int *)ppplVar33);
                if (cVar11 == '\0') goto LAB_148345654;
                memcpy(local_5d8 + (longlong)*(int *)ppplVar33 * 0x13,ppplVar33 + 1,0x98);
                FUN_144a7cc9e(&local_4d8,*(int *)((longlong)ppplVar33 + 4));
                bVar22 = false;
                FUN_1447cbafe(&local_488,&local_188,ppplVar33);
                FUN_1447cbafe(&local_488,&local_188,(int *)((longlong)ppplVar33 + 4));
              }
              pcVar9 = param_6;
              if (param_6 != (char *)0x0) {
                bVar7 = true;
                if (*param_6 != '\0') goto LAB_148345733;
                pcVar6 = *(code **)(param_6 + 0x70);
                plVar20 = (longlong *)(param_6 + 0x90);
                if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
                  plVar20 = *(longlong **)(param_6 + 0x80);
                }
                uVar15 = (**(code **)(*plVar20 + 8))();
                cVar11 = (*pcVar6)(uVar15);
                *pcVar9 = cVar11;
                if (cVar11 != '\0') goto LAB_148345733;
              }
LAB_1483456ca:
              lVar26 = lVar26 + 1;
            } while (lVar26 < (int)uStack_5f0);
          }
          pcVar9 = param_6;
          if (param_6 == (char *)0x0) {
LAB_14834571d:
            bVar7 = false;
            if ((bVar22) && (local_61c < (int)((uint)uStack_5e0 + -1))) {
              local_61c = local_61c + 1;
              FUN_148345f04(&local_528);
              bVar22 = false;
              bVar7 = false;
            }
          }
          else {
            bVar7 = true;
            if (*param_6 == '\0') {
              pcVar6 = *(code **)(param_6 + 0x70);
              plVar20 = (longlong *)(param_6 + 0x90);
              if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
                plVar20 = *(longlong **)(param_6 + 0x80);
              }
              uVar15 = (**(code **)(*plVar20 + 8))();
              cVar11 = (*pcVar6)(uVar15);
              *pcVar9 = cVar11;
              if (cVar11 == '\0') goto LAB_14834571d;
            }
          }
LAB_148345733:
          local_440 = 0;
          if (local_448 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_488);
        }
        else {
          bVar7 = true;
          bVar22 = true;
          if (*param_6 == '\0') {
            pcVar6 = *(code **)(param_6 + 0x70);
            plVar20 = (longlong *)(param_6 + 0x90);
            if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
              plVar20 = *(longlong **)(param_6 + 0x80);
            }
            (**(code **)(*plVar20 + 8))();
            cVar11 = (*pcVar6)();
            *pcVar9 = cVar11;
            if (cVar11 == '\0') goto LAB_148344d80;
          }
        }
        if (local_5f8 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
        if (bVar7) goto LAB_148345bae;
      }
      local_188 = (longlong ***)0x100000000;
      uStack_180 = local_4c8;
      local_178._0_4_ = 0xffffffff;
      local_178._4_4_ = 0;
      uStack_170 = 0;
      iVar28 = 0;
      if (local_4b0 != 0) {
        FUN_1449c0562(&local_188);
        iVar28 = local_4b0;
      }
      local_470._0_4_ = (uint)local_178;
      local_470._4_4_ = local_178._4_4_;
      uStack_468 = (undefined8 *)CONCAT44(uStack_16c,uStack_170);
      uStack_480 = local_188;
      pplStack_478 = uStack_180;
      local_488 = &local_4d8;
      if ((local_178._4_4_ == iVar28) && (uStack_180 == local_4c8)) {
        puVar25 = (undefined8 *)0x0;
      }
      else {
        puVar25 = (undefined8 *)0x0;
        do {
          iVar14 = *(int *)((longlong)*local_488 + (longlong)local_470._4_4_ * 0xc);
          lVar26 = (longlong)iVar14;
          if (((-1 < lVar26) && (iVar14 < (int)uStack_570)) &&
             (*(char *)(local_578 + lVar26 * 6) != '\0')) {
            puVar25 = (undefined8 *)
                      (ulonglong)((int)puVar25 + (uint)(0 < *(int *)(local_578 + lVar26 * 6 + 2)));
          }
          local_470._0_4_ = (uint)local_470 & ~uStack_480._4_4_;
          FUN_1449c0562(&uStack_480);
        } while (local_488 != &local_4d8 || (pplStack_478 != local_4c8 || local_470._4_4_ != iVar28)
                );
        if ((int)puVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(puVar25);
        }
      }
      if (*(int *)((longlong)param_5 + 0xc) < (int)puVar25) {
        FUN_1403b10bc(param_5,puVar25);
      }
      local_188 = (longlong ***)&DAT_100000000;
      uStack_180 = local_4c8;
      local_178 = (longlong **)&DAT_ffffffff;
      uStack_170 = 0;
      iVar28 = 0;
      if (local_4b0 != 0) {
        FUN_1449c0562(&local_188);
        iVar28 = local_4b0;
      }
      local_470 = local_178;
      pplVar5 = local_470;
      uStack_468 = (undefined8 *)CONCAT44(uStack_16c,uStack_170);
      uStack_480 = local_188;
      pplStack_478 = uStack_180;
      local_488 = &local_4d8;
      local_470._4_4_ = (int)((ulonglong)local_178 >> 0x20);
      if ((local_470._4_4_ == iVar28) && (uStack_180 == local_4c8)) {
LAB_148345a79:
        local_470 = pplVar5;
        uVar17 = CONCAT71((int7)((ulonglong)puVar25 >> 8),1);
      }
      else {
        puVar25 = &uStack_480;
        iVar14 = local_470._4_4_;
        local_470 = pplVar5;
        while( true ) {
          ppplVar1 = local_578;
          iVar14 = *(int *)((longlong)*local_488 + (longlong)iVar14 * 0xc);
          lVar26 = (longlong)iVar14;
          if (((-1 < lVar26) && (iVar14 < (int)uStack_570)) &&
             (*(char *)(local_578 + lVar26 * 6) != '\0')) {
            iVar14 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar14 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar14 + 1U) {
              FUN_140bfc2d4(param_5,iVar14);
            }
            lVar18 = *param_5;
            lVar19 = (longlong)iVar14 * 0x10;
            *(undefined8 *)(lVar18 + lVar19) = 0;
            *(longlong ***)(lVar18 + lVar19) = ppplVar1[lVar26 * 6 + 1];
            ppplVar1[lVar26 * 6 + 1] = (longlong **)0x0;
            *(undefined4 *)(lVar18 + 8 + lVar19) = *(undefined4 *)(ppplVar1 + lVar26 * 6 + 2);
            *(undefined4 *)(lVar18 + 0xc + lVar19) =
                 *(undefined4 *)((longlong)ppplVar1 + lVar26 * 0x30 + 0x14);
            ppplVar1[lVar26 * 6 + 2] = (longlong **)0x0;
          }
          pcVar9 = param_6;
          if (param_6 != (char *)0x0) break;
LAB_148345b57:
          local_470 = (longlong **)CONCAT44(local_470._4_4_,(uint)local_470 & ~uStack_480._4_4_);
          FUN_1449c0562(puVar25);
          iVar14 = local_470._4_4_;
          pplVar5 = local_470;
          if ((pplStack_478 == local_4c8 && local_470._4_4_ == iVar28) && local_488 == &local_4d8)
          goto LAB_148345a79;
        }
        if (*param_6 == '\0') {
          pcVar6 = *(code **)(param_6 + 0x70);
          plVar20 = (longlong *)(param_6 + 0x90);
          if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
            plVar20 = *(longlong **)(param_6 + 0x80);
          }
          uVar15 = (**(code **)(*plVar20 + 8))();
          cVar11 = (*pcVar6)(uVar15);
          *pcVar9 = cVar11;
          if (cVar11 == '\0') goto LAB_148345b57;
        }
LAB_148345bae:
        uVar17 = 0;
      }
      if (local_5e8 != (double *)0x0) {
        FUN_1400020a8();
      }
      local_4e0 = 0;
      if (local_4e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_144a6bfa8(&local_528);
      goto LAB_148345bec;
    }
    if (*param_6 == '\0') {
      pcVar6 = *(code **)(param_6 + 0x70);
      plVar20 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar20 = *(longlong **)(param_6 + 0x80);
      }
      uVar15 = (**(code **)(*plVar20 + 8))();
      cVar11 = (*pcVar6)(uVar15);
      *pcVar9 = cVar11;
      if (cVar11 == '\0') goto LAB_148344797;
    }
    uVar17 = 0;
LAB_148345bec:
    if (local_5d8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    local_490 = 0;
    if (local_498 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_4d8);
  }
  else {
    if (*param_6 == '\0') {
      pcVar6 = *(code **)(param_6 + 0x70);
      plVar20 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar20 = *(longlong **)(param_6 + 0x80);
      }
      uVar15 = (**(code **)(*plVar20 + 8))();
      cVar11 = (*pcVar6)(uVar15);
      *pcVar9 = cVar11;
      if (cVar11 == '\0') goto LAB_148344622;
    }
    uVar17 = 0;
  }
  FUN_14833badc(&local_578);
LAB_1483444d0:
  if ((local_e0 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
LAB_148344f68:
  memcpy(&local_188,ppplVar23,0xa0);
  memcpy(ppplVar23,ppplVar31,0xa0);
  memcpy(ppplVar31,&local_188,0xa0);
  iVar28 = (int)local_628 + -1;
  ppplVar34 = ppplVar34 + -0x28;
  if ((longlong)ppplVar27 - (longlong)local_610 < (longlong)local_608 - (longlong)ppplVar32) {
    pppplVar21 = local_630;
    if (_Src < ppplVar33) {
      *local_630 = _Src;
      local_630[1] = ppplVar33;
      *(int *)(local_630 + 2) = iVar28;
      pppplVar21 = local_630 + 3;
    }
    ppplVar32 = ppplVar23;
    if (ppplVar31 <= ppplVar23 + 0x14) goto LAB_1483453e1;
  }
  else {
    if (ppplVar23 + 0x14 < ppplVar31) {
      *local_630 = ppplVar23;
      local_630[1] = ppplVar34;
      *(int *)(local_630 + 2) = iVar28;
      local_630 = local_630 + 3;
    }
    pppplVar21 = local_630;
    ppplVar23 = _Src;
    ppplVar27 = ppplVar33;
    ppplVar34 = ppplVar33;
    if (ppplVar33 <= _Src) goto LAB_1483453e1;
  }
  local_630 = pppplVar21;
  iVar14 = (int)((ulonglong)((longlong)ppplVar27 - (longlong)ppplVar32) >> 5) * -0x33333333;
  uVar17 = (ulonglong)(iVar14 + 1);
  ppplVar33 = ppplVar34;
  if (iVar28 == 0) goto LAB_148345058;
  goto LAB_148344e31;
}



// FUNCTION 148345c42 FUN_148345c42 body=430 status=ok
// SIG undefined FUN_148345c42(void)

int FUN_148345c42(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                 longlong *param_5,char *param_6)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 local_71;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = *(undefined4 *)(param_1 + 0x38);
  local_50 = *(undefined8 *)(param_1 + 0x40);
  local_60 = 0xffffffff;
  local_90 = param_4;
  local_70 = param_2;
  local_68 = param_3;
  if ((*(longlong **)(param_2 + 0x208) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))(), 0 < iVar5)) {
    lVar9 = 0;
    do {
      plVar7 = *(longlong **)(param_2 + 0x208);
      if (lVar9 < (int)plVar7[5]) {
        lVar10 = *(longlong *)(plVar7[4] + lVar9 * 8);
      }
      else {
        lVar10 = 0;
      }
      if (lVar10 == param_3) {
        local_60 = (undefined4)lVar9;
        break;
      }
      lVar9 = lVar9 + 1;
      iVar5 = (**(code **)(*plVar7 + 0xa0))();
    } while (lVar9 < iVar5);
  }
  lVar9 = (longlong)(int)local_90[1];
  local_71 = 0;
  FUN_14475e60e(param_5,&local_71,(int)local_90[1]);
  if (lVar9 < 1) {
    iVar5 = 0;
  }
  else {
    local_88 = (longlong *)(param_6 + 0x90);
    lVar10 = 0;
    lVar11 = 0;
    iVar8 = 0;
    local_80 = lVar9;
    do {
      uVar3 = FUN_148325c62(&local_70,*local_90 + lVar10,local_58,0);
      *(undefined1 *)(*param_5 + lVar11) = uVar3;
      bVar1 = *(byte *)(*param_5 + lVar11);
      if (param_6 != (char *)0x0) {
        iVar5 = -1;
        if (*param_6 != '\0') break;
        pcVar2 = *(code **)(param_6 + 0x70);
        plVar7 = *(longlong **)(param_6 + 0x80);
        if (*(longlong **)(param_6 + 0x80) == (longlong *)0x0) {
          plVar7 = local_88;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar2)(uVar6);
        *param_6 = cVar4;
        lVar9 = local_80;
        if (cVar4 != '\0') break;
      }
      iVar8 = iVar8 + (bVar1 ^ 1);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
      iVar5 = iVar8;
    } while (lVar9 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 148345df2 FUN_148345df2 body=104 status=ok
// SIG undefined FUN_148345df2(void)

void FUN_148345df2(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14834e886((longlong *)(param_1 + 0x18),iVar1);
  }
  FUN_14834e804((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x18),param_2);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148345e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148345e5a FUN_148345e5a body=60 status=ok
// SIG undefined FUN_148345e5a(void)

void FUN_148345e5a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148345e96 FUN_148345e96 body=109 status=ok
// SIG undefined FUN_148345e96(void)

void FUN_148345e96(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148375cdc(param_1,iVar1);
    }
    FUN_148375c4c((longlong)iVar1 * 0x98 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148375d70(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148345f04 FUN_148345f04 body=68 status=ok
// SIG undefined FUN_148345f04(void)

void FUN_148345f04(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1483762c4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148345f48 FUN_148345f48 body=284 status=ok
// SIG undefined FUN_148345f48(void)

void FUN_148345f48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = 7;
  if (param_4 < 7) {
    iVar1 = param_4;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 2) = iVar1;
  param_1[3] = 0x3f1a36e2e0000000;
  param_1[4] = 0x3f33a92a28000000;
  param_1[5] = 0x4069000000000000;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0x4010000000000000;
  param_1[0x2b] = 0x4034000000000000;
  return;
}



// FUNCTION 148346064 FUN_148346064 body=417 status=ok
// SIG undefined FUN_148346064(void)

undefined8 FUN_148346064(longlong *param_1,char *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if ((((param_1[1] != 0) && (*param_1 != 0)) && (*(uint *)(param_1 + 2) < 8)) &&
     (plVar7 = *(longlong **)(*param_1 + 0x208), plVar7 != (longlong *)0x0)) {
    iVar5 = (**(code **)(*plVar7 + 0xa0))();
    uVar1 = *(uint *)(param_1 + 2);
    if ((int)uVar1 < iVar5) {
      if (((int)uVar1 < 0) || (*(int *)(*(longlong *)(*param_1 + 0x208) + 0x28) <= (int)uVar1)) {
        param_1[9] = 0;
      }
      else {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*param_1 + 0x208) + 0x20) + (ulonglong)uVar1 * 8);
        param_1[9] = lVar2;
        if (lVar2 != 0) {
          if ((int)uVar1 < *(int *)(*(longlong *)(param_1[1] + 0x208) + 0x28)) {
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[1] + 0x208) + 0x20) + (ulonglong)uVar1 * 8
                     );
            param_1[10] = lVar2;
            if (lVar2 != 0) {
              if (param_2 == (char *)0x0) {
                FUN_148346206(param_1);
              }
              else {
                if (*param_2 != '\0') {
                  return 0;
                }
                pcVar3 = *(code **)(param_2 + 0x70);
                plVar7 = *(longlong **)(param_2 + 0x80);
                if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
                  plVar7 = (longlong *)(param_2 + 0x90);
                }
                uVar6 = (**(code **)(*plVar7 + 8))();
                cVar4 = (*pcVar3)(uVar6);
                *param_2 = cVar4;
                if (cVar4 != '\0') {
                  return 0;
                }
                FUN_148346206(param_1);
                if (*param_2 != '\0') {
                  return 0;
                }
                pcVar3 = *(code **)(param_2 + 0x70);
                plVar7 = (longlong *)(param_2 + 0x90);
                if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
                  plVar7 = *(longlong **)(param_2 + 0x80);
                }
                uVar6 = (**(code **)(*plVar7 + 8))(plVar7);
                cVar4 = (*pcVar3)(uVar6);
                *param_2 = cVar4;
                if (cVar4 != '\0') {
                  return 0;
                }
              }
              if ((char)param_1[6] == '\x01') {
                FUN_148346456(param_1,param_2);
              }
              if (param_2 == (char *)0x0) {
LAB_1483461e4:
                uVar6 = FUN_1483467ac(param_1,param_2);
                return uVar6;
              }
              if (*param_2 == '\0') {
                pcVar3 = *(code **)(param_2 + 0x70);
                plVar7 = (longlong *)(param_2 + 0x90);
                if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
                  plVar7 = *(longlong **)(param_2 + 0x80);
                }
                uVar6 = (**(code **)(*plVar7 + 8))();
                cVar4 = (*pcVar3)(uVar6);
                *param_2 = cVar4;
                if (cVar4 == '\0') goto LAB_1483461e4;
              }
            }
          }
          else {
            param_1[10] = 0;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148346206 FUN_148346206 body=590 status=ok
// SIG undefined FUN_148346206(void)

void FUN_148346206(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_a8 [32];
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  uint *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = 0xe0000000;
  uVar14 = 0x3f1a36e2;
  dVar1 = *(double *)(param_1 + 0x20);
  if (9.999999747378752e-05 <= dVar1) {
    uVar13 = SUB84(dVar1,0);
    uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  uVar9 = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar5 + 10),4000);
  puVar5[0xf] = CONCAT44(uVar14,uVar13);
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  lVar2 = *(longlong *)(param_1 + 0x58);
  *(undefined8 **)(param_1 + 0x58) = puVar5;
  if (lVar2 != 0) {
    FUN_146be6294(lVar2);
    FUN_1400020a8(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  if ((uVar7 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar9 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar9 = (ulonglong)uVar7;
    }
    do {
      uVar8 = uVar4;
      if ((uint)uVar9 == uVar8) goto LAB_1483462d9;
      uVar4 = uVar8 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar8 >> 9] +
                                         (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    uVar9 = (ulonglong)uVar8;
  }
LAB_1483462d9:
  if ((uint)uVar9 != uVar7) {
    do {
      uVar8 = (uint)uVar9;
      lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (uVar9 >> 9) * 8);
      uVar6 = (ulonglong)(uVar8 & 0x1ff);
      dVar1 = *(double *)(*(longlong *)(param_1 + 0x58) + 0x78);
      auVar11._0_8_ = *(double *)(lVar3 + 0x10 + uVar6 * 0x18) / dVar1;
      auVar11._8_8_ = 0;
      auVar12 = roundsd(auVar11,auVar11,9);
      local_7c = (int)auVar12._0_8_;
      auVar10._0_8_ = *(double *)(lVar3 + 8 + uVar6 * 0x18) / dVar1;
      auVar10._8_8_ = 0;
      auVar12 = roundsd(auVar10,auVar10,9);
      local_80 = (int)auVar12._0_8_;
      auVar12._0_8_ = *(double *)(lVar3 + uVar6 * 0x18) / dVar1;
      auVar12._8_8_ = 0;
      auVar12 = roundsd(auVar12,auVar12,9);
      local_84 = (int)auVar12._0_8_;
      local_88 = uVar8;
      local_78 = &local_84;
      local_70 = &local_88;
      FUN_146be634e(*(longlong *)(param_1 + 0x58),local_64,&local_78,0);
      uVar4 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar7) {
        uVar4 = uVar7;
      }
      do {
        if (uVar4 - 1 == (int)uVar9) {
          uVar9 = (ulonglong)uVar4;
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x28) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar9 != uVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148346456 FUN_148346456 body=853 status=ok
// SIG undefined FUN_148346456(void)

void FUN_148346456(longlong param_1,char *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = &local_98;
  local_78 = 0;
  iVar15 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar9 = *(longlong **)(param_1 + 0x40);
  local_c8 = param_1;
  if (plVar9 == (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar11 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
    uVar14 = 0;
    if ((uVar11 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U))) {
      uVar13 = 1;
      uVar6 = 1;
      if (1 < (int)uVar11) {
        uVar13 = uVar11;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 == uVar6) break;
        uVar10 = uVar6 >> 9;
        uVar12 = uVar6 & 0x1ff;
        uVar14 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar10] +
                                           (ulonglong)uVar12 * 2) - 1U));
    }
    uVar8 = local_d8;
    if (uVar14 != uVar11) {
      uVar13 = 0;
      do {
        if ((param_2 != (char *)0x0) && (uVar13 = uVar13 + 1, (uVar13 & 0x3ff) == 0)) {
          uVar8 = local_d8;
          if (*param_2 != '\0') break;
          pcVar4 = *(code **)(param_2 + 0x70);
          plVar9 = *(longlong **)(param_2 + 0x80);
          if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_2 + 0x90);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar5 = (*pcVar4)(uVar8);
          *param_2 = cVar5;
          uVar8 = local_d8;
          if (cVar5 != '\0') break;
        }
        FUN_143b0a302(&local_c8,uVar14);
        uVar6 = uVar14 + 1;
        if ((int)(uVar14 + 1) < (int)uVar11) {
          uVar6 = uVar11;
        }
        do {
          uVar10 = uVar6;
          if (uVar6 - 1 == uVar14) break;
          uVar14 = uVar14 + 1;
          uVar10 = uVar14;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar3 + 0x148) +
                                               (ulonglong)(uVar14 >> 9) * 8) +
                                             (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
        uVar14 = uVar10;
        uVar8 = local_d8;
      } while (uVar14 != uVar11);
    }
  }
  else {
    plVar1 = plVar9 + 2;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_b0 = plVar1;
    if ((int)plVar9[5] != 0) {
      FUN_1449c0562(&local_b8);
      iVar15 = (int)plVar9[5];
    }
    local_d8 = local_a8;
    uVar8 = local_d8;
    local_d0 = local_a0;
    local_cc = local_9c;
    local_e8 = local_b8;
    local_e0 = local_b0;
    local_d8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_f0 = plVar9;
    if ((local_d8._4_4_ != iVar15) || (local_b0 != plVar1)) {
      local_f8 = (longlong *)(param_2 + 0x90);
      uVar14 = 0;
      iVar7 = local_d8._4_4_;
      local_100 = plVar9;
      local_d8 = uVar8;
      do {
        uVar2 = *(undefined4 *)(*local_f0 + (longlong)iVar7 * 0xc);
        if ((param_2 != (char *)0x0) && (uVar14 = uVar14 + 1, (uVar14 & 0x3ff) == 0)) {
          uVar8 = local_d8;
          if (*param_2 != '\0') break;
          pcVar4 = *(code **)(param_2 + 0x70);
          plVar9 = *(longlong **)(param_2 + 0x80);
          if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
            plVar9 = local_f8;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar5 = (*pcVar4)(uVar8);
          *param_2 = cVar5;
          plVar9 = local_100;
          uVar8 = local_d8;
          if (cVar5 != '\0') break;
        }
        FUN_143b0a302(&local_c8,uVar2);
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar7 = local_d8._4_4_;
        uVar8 = local_d8;
      } while (local_f0 != plVar9 || (local_e0 != plVar1 || local_d8._4_4_ != iVar15));
    }
  }
  local_d8 = uVar8;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483467ac FUN_1483467ac body=1443 status=ok
// SIG undefined FUN_1483467ac(void)

byte FUN_1483467ac(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  char cVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_1c8 [40];
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  ulonglong local_180;
  undefined1 local_174 [7];
  char local_16d;
  undefined4 local_16c;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_140;
  undefined8 *local_138;
  ulonglong local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1[0xb] == 0) {
    FUN_148346206(param_1);
  }
  uVar7 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1402226aa(param_1 + 0x20);
  FUN_145c688c4(*param_1,&local_108,1);
  local_f8 = (double)CONCAT44(uStack_dc,local_e0) - local_f8;
  local_f8 = (double)(-(ulonglong)(0.0 <= local_f8) & (ulonglong)local_f8);
  dVar21 = (double)(-(ulonglong)(0.0 <= local_e8 - dStack_100) & (ulonglong)(local_e8 - dStack_100))
  ;
  uVar19 = -(ulonglong)(local_f8 <= dVar21);
  dVar21 = (double)(~uVar19 & (ulonglong)local_f8 | uVar19 & (ulonglong)dVar21);
  dVar20 = (double)(-(ulonglong)(0.0 <= local_f0 - local_108) & (ulonglong)(local_f0 - local_108));
  uVar19 = -(ulonglong)(dVar21 <= dVar20);
  local_130 = uVar19 & (ulonglong)dVar20 | ~uVar19 & (ulonglong)dVar21;
  plVar10 = (longlong *)param_1[7];
  local_198 = param_1;
  local_140 = param_1;
  local_138 = &local_b8;
  if (plVar10 == (longlong *)0x0) {
    lVar15 = *param_1;
    uVar14 = *(int *)(lVar15 + 0x1d0) * 0x200 + *(int *)(lVar15 + 0x1d4);
    uVar12 = 0;
    if ((uVar14 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x1d8) - 1U))) {
      uVar13 = 1;
      uVar9 = 1;
      if (1 < (int)uVar14) {
        uVar13 = uVar14;
      }
      do {
        uVar12 = uVar13;
        if (uVar13 == uVar9) break;
        uVar11 = uVar9 >> 9;
        uVar17 = uVar9 & 0x1ff;
        uVar12 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar15 + 0x1d8))[uVar11] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    if (uVar12 == uVar14) {
      bVar16 = 1;
    }
    else {
      local_1a0 = (longlong *)(param_2 + 0x90);
      cVar18 = '\0';
      bVar16 = 1;
      do {
        if ((param_2 != (char *)0x0) && (cVar18 = cVar18 + '\x01', cVar18 == '\0')) {
          if (*param_2 != '\0') goto LAB_1483469f4;
          pcVar2 = *(code **)(param_2 + 0x70);
          plVar10 = *(longlong **)(param_2 + 0x80);
          if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
            plVar10 = local_1a0;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          cVar4 = (*pcVar2)(uVar8);
          *param_2 = cVar4;
          if (cVar4 != '\0') goto LAB_1483469f4;
        }
        bVar5 = FUN_143b0a4e4(&local_140,uVar12);
        bVar16 = bVar16 & bVar5;
        uVar13 = uVar12 + 1;
        if ((int)(uVar12 + 1) < (int)uVar14) {
          uVar13 = uVar14;
        }
        do {
          uVar9 = uVar13;
          if (uVar13 - 1 == uVar12) break;
          uVar12 = uVar12 + 1;
          uVar9 = uVar12;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar15 + 0x1d8) +
                                               (ulonglong)(uVar12 >> 9) * 8) +
                                             (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
        uVar12 = uVar9;
      } while (uVar12 != uVar14);
    }
  }
  else {
    local_e8 = 0.0;
    local_e0 = 0;
    local_108 = 0.0;
    dStack_100 = 0.0;
    uStack_dc = 0x80;
    uStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    plVar1 = plVar10 + 2;
    local_128 = 0x100000000;
    local_118 = 0xffffffff;
    local_110 = 0;
    local_120 = plVar1;
    if ((int)plVar10[5] != 0) {
      FUN_1449c0562(&local_128);
      uVar7 = (ulonglong)*(uint *)(plVar10 + 5);
    }
    local_150 = local_118;
    uVar8 = local_150;
    local_148 = local_110;
    local_144 = local_10c;
    local_160 = local_128;
    local_158 = local_120;
    local_150._4_4_ = (int)((ulonglong)local_118 >> 0x20);
    local_168 = plVar10;
    if (local_150._4_4_ == (int)uVar7) {
      bVar3 = true;
      bVar16 = 1;
      if (local_120 != plVar1) goto LAB_148346b44;
    }
    else {
LAB_148346b44:
      local_1a0 = (longlong *)(param_2 + 0x90);
      cVar18 = '\0';
      bVar16 = 1;
      iVar6 = local_150._4_4_;
      local_190 = plVar1;
      local_188 = plVar10;
      local_180 = uVar7;
      local_150 = uVar8;
      do {
        uVar12 = *(uint *)(*local_168 + (longlong)iVar6 * 0xc);
        lVar15 = *(longlong *)(*(longlong *)(*local_198 + 0x180) + (ulonglong)(uVar12 >> 9) * 8);
        uVar7 = (ulonglong)(uVar12 & 0x1ff);
        local_120 = (longlong *)CONCAT44(local_120._4_4_,*(undefined4 *)(lVar15 + 8 + uVar7 * 0xc));
        local_128 = *(undefined8 *)(lVar15 + uVar7 * 0xc);
        lVar15 = 0;
        do {
          if ((param_2 != (char *)0x0) && (cVar18 = cVar18 + '\x01', cVar18 == '\0')) {
            if (*param_2 == '\0') {
              pcVar2 = *(code **)(param_2 + 0x70);
              plVar10 = *(longlong **)(param_2 + 0x80);
              if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
                plVar10 = local_1a0;
              }
              uVar8 = (**(code **)(*plVar10 + 8))();
              cVar4 = (*pcVar2)(uVar8);
              *param_2 = cVar4;
              if (cVar4 == '\0') goto LAB_148346bd2;
            }
            bVar3 = false;
            uVar8 = local_150;
            goto LAB_1483469c2;
          }
LAB_148346bd2:
          local_16c = *(undefined4 *)((longlong)&local_128 + lVar15 * 4);
          local_16d = '\0';
          FUN_1447cbafe(&local_108,local_174,&local_16c,&local_16d);
          if (local_16d == '\0') {
            bVar5 = FUN_143b0a4e4(&local_140,local_16c);
            bVar16 = bVar16 & bVar5;
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~local_160._4_4_);
        FUN_1449c0562(&local_160);
        iVar6 = local_150._4_4_;
      } while (local_168 != local_188 ||
               (local_158 != local_190 || local_150._4_4_ != (int)local_180));
      bVar3 = true;
      uVar8 = local_150;
    }
LAB_1483469c2:
    local_150 = uVar8;
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_108);
    if (!bVar3) {
LAB_1483469f4:
      bVar5 = 0;
      goto LAB_1483469f6;
    }
  }
  FUN_148328bf2(&local_108,local_198[1],(int)local_198[2],1);
  bVar5 = FUN_146bcfc22(&local_b8,dStack_100,0);
  bVar5 = bVar5 & bVar16;
LAB_1483469f6:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 148346d50 FUN_148346d50 body=169 status=ok
// SIG undefined FUN_148346d50(void)

byte FUN_148346d50(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_2 == (char *)0x0) {
    bVar4 = FUN_148346064(param_1,0);
LAB_148346daf:
    bVar3 = FUN_148346dfa(param_1,param_2);
    bVar3 = bVar3 & bVar4;
  }
  else {
    if (*param_2 == '\0') {
      pcVar1 = *(code **)(param_2 + 0x70);
      plVar6 = *(longlong **)(param_2 + 0x80);
      if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
        plVar6 = (longlong *)(param_2 + 0x90);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar2 = (*pcVar1)(uVar5);
      *param_2 = cVar2;
      if ((cVar2 == '\0') && (bVar4 = FUN_148346064(param_1,param_2), *param_2 == '\0')) {
        pcVar1 = *(code **)(param_2 + 0x70);
        plVar6 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_2 + 0x80);
        }
        uVar5 = (**(code **)(*plVar6 + 8))(plVar6);
        cVar2 = (*pcVar1)(uVar5);
        *param_2 = cVar2;
        if (cVar2 == '\0') goto LAB_148346daf;
      }
    }
    bVar3 = 0;
  }
  return bVar3;
}



// FUNCTION 148346dfa FUN_148346dfa body=4109 status=ok
// SIG undefined FUN_148346dfa(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_148346dfa(longlong *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  undefined8 *unaff_RBX;
  undefined7 uVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  code *unaff_RSI;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  undefined1 auStack_2b8 [32];
  char *local_298;
  longlong *local_290;
  ulonglong local_288;
  uint local_280;
  uint local_27c;
  longlong *local_278;
  int local_270;
  uint local_26c;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined8 *puStack_250;
  longlong **local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong *plStack_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 auStack_200 [4];
  undefined4 local_1fc [4];
  undefined1 local_1ec [4];
  undefined8 local_1e8;
  longlong *local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc [3];
  longlong **local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong *local_190;
  undefined1 *local_178 [2];
  undefined8 local_168;
  undefined **local_158;
  longlong *local_150;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
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
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_278 = param_1 + 0x16;
  local_268 = param_1 + 0x18;
  local_238 = (longlong *)&DAT_100000000;
  plStack_228 = (longlong *)&DAT_ffffffff;
  local_220 = local_220 & 0xffffffff00000000;
  iVar25 = 0;
  local_288 = 0;
  uStack_230 = local_268;
  if ((int)param_1[0x1b] != 0) {
    FUN_1449c0562(&local_238);
    iVar25 = (int)param_1[0x1b];
  }
  local_120 = plStack_228;
  plVar17 = local_120;
  local_118 = local_220;
  uStack_130 = local_238;
  local_128 = uStack_230;
  local_138 = local_278;
  local_120._4_4_ = (int)((ulonglong)plStack_228 >> 0x20);
  local_298 = param_2;
  if ((local_120._4_4_ != iVar25) || (uStack_230 != local_268)) {
    local_260 = (longlong *)(param_2 + 0x90);
    local_288 = 0;
    unaff_RBX = (undefined8 *)&DAT_ffffffff;
    iVar9 = local_120._4_4_;
    local_270 = iVar25;
    local_120 = plVar17;
    do {
      pcVar24 = local_298;
      plStack_228 = (longlong *)
                    CONCAT44(plStack_228._4_4_,
                             *(undefined4 *)(*local_138 + 0x10 + (longlong)iVar9 * 0x1c));
      puVar1 = (undefined8 *)(*local_138 + (longlong)iVar9 * 0x1c);
      local_238 = (longlong *)*puVar1;
      uStack_230 = (longlong *)puVar1[1];
      if ((local_298 != (char *)0x0) &&
         (uVar32 = (int)local_288 + 1, local_288 = (ulonglong)uVar32, (uVar32 & 0x1ff) == 0)) {
        if (*local_298 == '\0') {
          unaff_RSI = *(code **)(local_298 + 0x70);
          plVar17 = *(longlong **)(local_298 + 0x80);
          if (*(longlong **)(local_298 + 0x80) == (longlong *)0x0) {
            plVar17 = local_260;
          }
          uVar14 = (**(code **)(*plVar17 + 8))();
          cVar7 = (*unaff_RSI)(uVar14);
          *pcVar24 = cVar7;
          if (cVar7 == '\0') goto LAB_148347237;
        }
        unaff_RBX = (undefined8 *)0x0;
        goto LAB_148347b7c;
      }
LAB_148347237:
      piVar10 = (int *)(*(longlong *)
                         (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)((uint)local_238 >> 9) * 8) +
                       (ulonglong)(((uint)local_238 & 0x1ff) << 4));
      iVar29 = *piVar10;
      iVar30 = piVar10[1];
      uVar32 = piVar10[2];
      local_258 = *(longlong **)piVar10;
      puStack_250 = *(undefined8 **)(piVar10 + 2);
      lVar26 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar32 >> 9) * 8);
      uVar11 = (ulonglong)(uVar32 & 0x1ff);
      iVar25 = *(int *)(lVar26 + uVar11 * 0xc);
      iVar9 = *(int *)(lVar26 + 4 + uVar11 * 0xc);
      iVar15 = *(int *)(lVar26 + 8 + uVar11 * 0xc);
      if (iVar25 == iVar29) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
        if (iVar9 != iVar29) {
          bVar6 = -(iVar15 != iVar29) | 2;
        }
      }
      if (iVar25 == iVar30) {
        cVar7 = '\0';
      }
      else {
        cVar7 = -1;
        if (iVar9 != iVar30) {
          cVar7 = '\x01';
          if (iVar15 == iVar30) {
            cVar7 = -2;
          }
        }
      }
      local_26c = (uint)((byte)(bVar6 + 3 + cVar7) % 3);
      unaff_RSI = (code *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      piVar10 = (int *)&local_258;
      lVar26 = 0;
      do {
        iVar25 = *piVar10;
        uVar32 = *(uint *)((longlong)&local_238 + lVar26 * 4 + 4);
        iVar9 = *(int *)((longlong)&uStack_230 + lVar26 * 4 + 4);
        lVar26 = *(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(uVar32 >> 9) * 8);
        uVar11 = (ulonglong)((uVar32 & 0x1ff) << 4);
        iVar30 = (int)((ulonglong)*(undefined8 *)(lVar26 + uVar11) >> 0x20);
        iVar29 = (int)*(undefined8 *)(lVar26 + uVar11);
        iVar15 = -1;
        if (iVar9 == iVar30) {
          iVar15 = iVar29;
        }
        if (iVar9 == iVar29) {
          iVar15 = iVar30;
        }
        iVar29 = iVar15;
        iVar30 = iVar9;
        if ((char)unaff_RSI == '\0') {
          iVar29 = iVar9;
          iVar30 = iVar15;
        }
        uVar13 = *(ulonglong *)(lVar26 + 8 + uVar11);
        local_27c = *(uint *)(lVar26 + 8 + uVar11);
        local_280 = *(uint *)(lVar26 + 0xc + uVar11);
        lVar26 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (uVar13 >> 9 & 0x7fffff) * 8);
        uVar11 = (ulonglong)((uint)uVar13 & 0x1ff);
        iVar15 = *(int *)(lVar26 + uVar11 * 0xc);
        iVar3 = *(int *)(lVar26 + 4 + uVar11 * 0xc);
        iVar4 = *(int *)(lVar26 + 8 + uVar11 * 0xc);
        if (iVar15 == iVar30) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
          if (iVar3 != iVar30) {
            bVar6 = -(iVar4 != iVar30) | 2;
          }
        }
        if (iVar15 == iVar29) {
          cVar7 = '\0';
        }
        else {
          cVar7 = -1;
          if ((iVar3 != iVar29) && (cVar7 = '\x01', iVar4 == iVar29)) {
            cVar7 = -2;
          }
        }
        local_290 = (longlong *)CONCAT44(local_290._4_4_,(int)unaff_RSI);
        if ((byte)local_26c != (byte)(bVar6 + 3 + cVar7) % 3) {
          local_27c = (uint)(uVar13 >> 0x20);
          local_280 = (uint)uVar13;
        }
        unaff_RSI = (code *)&DAT_00000001;
        lVar26 = 0;
        puVar12 = &local_27c;
        do {
          uVar32 = *(uint *)((longlong)&puStack_250 + lVar26 * 4);
          if (uVar32 != 0xffffffff) {
            lVar26 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar32 >> 9) * 8);
            uVar11 = (ulonglong)(uVar32 & 0x1ff);
            if (*(int *)(lVar26 + uVar11 * 0xc) == iVar25) {
              lVar31 = 0;
            }
            else {
              lVar31 = 1;
              if (*(int *)(lVar26 + uVar11 * 0xc + 4) != iVar25) {
                lVar31 = (ulonglong)(*(int *)(lVar26 + 8 + uVar11 * 0xc) == iVar25) * 3 + -1;
              }
            }
            uVar8 = uVar32 * 3 + 2;
            lVar26 = *(longlong *)(param_1[9] + 0x78);
            uVar23 = uVar32 * 3 + 1;
            local_1cc[1] = *(undefined4 *)
                            (*(longlong *)(lVar26 + (ulonglong)(uVar32 * 3 >> 9) * 8) +
                            (ulonglong)(uVar32 * 3 & 0x1ff) * 4);
            local_1cc[2] = *(undefined4 *)
                            (*(longlong *)(lVar26 + (ulonglong)(uVar23 >> 9) * 8) +
                            (ulonglong)(uVar23 & 0x1ff) * 4);
            local_1c0 = (longlong **)
                        CONCAT44(local_1c0._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar26 + (ulonglong)(uVar8 >> 9) * 8) +
                                  (ulonglong)(uVar8 & 0x1ff) * 4));
            local_1fc[3] = local_1cc[lVar31 + 1];
            uVar32 = *puVar12;
            if (uVar32 != 0xffffffff) {
              lVar26 = *(longlong *)
                        (*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar32 >> 9) * 8);
              uVar11 = (ulonglong)(uVar32 & 0x1ff);
              if (*(int *)(lVar26 + uVar11 * 0xc) == iVar9) {
                lVar31 = 0;
              }
              else {
                lVar31 = 1;
                if (*(int *)(lVar26 + uVar11 * 0xc + 4) != iVar9) {
                  lVar31 = (ulonglong)(*(int *)(lVar26 + 8 + uVar11 * 0xc) == iVar9) * 3 + -1;
                }
              }
              uVar8 = uVar32 * 3 + 2;
              lVar26 = *(longlong *)(param_1[10] + 0x78);
              uVar23 = uVar32 * 3 + 1;
              local_1fc[0] = *(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar32 * 3 >> 9) * 8) +
                              (ulonglong)(uVar32 * 3 & 0x1ff) * 4);
              local_1fc[1] = *(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar23 >> 9) * 8) +
                              (ulonglong)(uVar23 & 0x1ff) * 4);
              local_1fc[2] = *(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar8 >> 9) * 8) +
                              (ulonglong)(uVar8 & 0x1ff) * 4);
              uVar2 = local_1fc[lVar31];
              local_1e8 = (longlong *)CONCAT44(local_1fc[3],uVar2);
              uVar32 = FUN_1448eb174(&local_1e8,8,0);
              if ((int)uStack_e0 != local_b4) {
                puVar18 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar18 = local_b0;
                }
                iVar15 = *(int *)(puVar18 + (ulonglong)(local_a0 - 1U & uVar32) * 4);
                if (iVar15 != -1) {
                  do {
                    piVar10 = (int *)(local_e8 + (longlong)iVar15 * 0x14);
                    if ((*piVar10 == (uint)local_1e8) &&
                       (*(int *)(local_e8 + 4 + (longlong)iVar15 * 0x14) == local_1e8._4_4_)) {
                      if ((piVar10 != (int *)0x0) && (piVar10 + 2 != (int *)0x0)) {
                        *(undefined1 *)(piVar10 + 2) = 1;
                        goto LAB_14834761f;
                      }
                      break;
                    }
                    iVar15 = piVar10[3];
                  } while (iVar15 != -1);
                }
              }
              auStack_200[3] = 0;
              local_204 = local_1fc[3];
              local_1e8 = (longlong *)&local_208;
              local_1e0 = (longlong *)(auStack_200 + 3);
              local_208 = uVar2;
              FUN_148376408(&local_e8,local_1ec,&local_1e8);
LAB_14834761f:
              FUN_1447cbafe(&local_98,&local_1e8,local_1fc + 3,0);
            }
          }
          lVar26 = 1;
          cVar7 = (char)unaff_RSI;
          unaff_RSI = (code *)0x0;
          puVar12 = &local_280;
        } while (cVar7 != '\0');
        piVar10 = (int *)((longlong)&local_258 + 4);
      } while (((ulonglong)local_290 & 1) != 0);
      local_120 = (longlong *)CONCAT44(local_120._4_4_,(uint)local_120 & ~uStack_130._4_4_);
      FUN_1449c0562(&uStack_130);
      iVar9 = local_120._4_4_;
      plVar17 = local_120;
    } while (local_138 != local_278 || (local_128 != local_268 || local_120._4_4_ != local_270));
  }
  local_120 = plVar17;
  local_118 = 0;
  local_110 = 0;
  local_138 = (longlong *)0x0;
  uStack_130 = (longlong *)0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_1e8 = (longlong *)&DAT_100000000;
  local_1e0 = local_d8;
  local_1d8 = 0xffffffff;
  local_1d0 = 0;
  iVar25 = 0;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_1e8);
    iVar25 = local_c0;
  }
  local_220 = local_1d8;
  uVar11 = local_220;
  local_218 = local_1d0;
  local_214 = local_1cc[0];
  uStack_230 = local_1e8;
  plStack_228 = local_1e0;
  local_220._4_4_ = (int)(local_1d8 >> 0x20);
  local_238 = &local_e8;
  if ((local_220._4_4_ != iVar25) || (local_1e0 != local_d8)) {
    unaff_RBX = &uStack_230;
    local_290 = param_1 + 0x27;
    iVar9 = local_220._4_4_;
    local_220 = uVar11;
    do {
      plVar17 = *(longlong **)(*local_238 + (longlong)iVar9 * 0x14);
      uVar32 = *(uint *)(*local_238 + 8 + (longlong)iVar9 * 0x14);
      local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,uVar32);
      local_1e8._4_4_ = (uint)((ulonglong)plVar17 >> 0x20);
      if ((uVar32 & 1) == 0) {
        if ((int)param_1[0x21] != *(int *)((longlong)param_1 + 0x134)) {
          plVar19 = (longlong *)param_1[0x28];
          if ((longlong *)param_1[0x28] == (longlong *)0x0) {
            plVar19 = local_290;
          }
          iVar9 = *(int *)((longlong)plVar19 +
                          (ulonglong)((int)param_1[0x29] - 1U & local_1e8._4_4_) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(param_1[0x20] + (longlong)iVar9 * 0xc) == local_1e8._4_4_)
              goto LAB_14834782a;
              iVar9 = *(int *)(param_1[0x20] + (longlong)iVar9 * 0xc + 4);
            } while (iVar9 != -1);
          }
        }
      }
      else {
LAB_14834782a:
        lVar26 = param_1[10];
        lVar31 = *(longlong *)
                  (*(longlong *)(param_1[9] + 0x48) + (ulonglong)(local_1e8._4_4_ >> 5 & 0x3fffff8))
        ;
        uVar11 = (ulonglong)((local_1e8._4_4_ & 0xff) << 3);
        uVar2 = *(undefined4 *)(lVar31 + 4 + uVar11);
        local_1e8._0_4_ = (uint)plVar17;
        uVar13 = (ulonglong)((uint)local_1e8 >> 5 & 0x3fffff8);
        uVar28 = (ulonglong)(((uint)local_1e8 & 0xff) << 3);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar26 + 0x48) + uVar13) + uVar28) =
             *(undefined4 *)(lVar31 + uVar11);
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar26 + 0x48) + uVar13) + 4 + uVar28) = uVar2;
        local_1e8 = plVar17;
        FUN_1447cbafe(&local_138,&local_258,&local_1e8,0);
        plVar17 = local_1e8;
      }
      local_1e8 = plVar17;
      local_220 = CONCAT44(local_220._4_4_,(uint)local_220 & ~uStack_230._4_4_);
      FUN_1449c0562(unaff_RBX);
      iVar9 = local_220._4_4_;
      uVar11 = local_220;
    } while (local_238 != &local_e8 || (plStack_228 != local_d8 || local_220._4_4_ != iVar25));
  }
  local_220 = uVar11;
  pcVar24 = local_298;
  local_258 = param_1;
  puStack_250 = &local_98;
  local_248 = &local_138;
  plVar17 = (longlong *)param_1[7];
  uVar22 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (plVar17 == (longlong *)0x0) {
    lVar26 = param_1[9];
    uVar23 = *(int *)(lVar26 + 8) * 0x200 + *(int *)(lVar26 + 0xc);
    uVar32 = 0;
    if ((uVar23 != 0) &&
       (uVar32 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x10) - 1U))) {
      uVar8 = 1;
      uVar16 = 1;
      if (1 < (int)uVar23) {
        uVar8 = uVar23;
      }
      do {
        uVar32 = uVar8;
        if (uVar8 == uVar16) break;
        uVar21 = uVar16 >> 9;
        uVar27 = uVar16 & 0x1ff;
        uVar32 = uVar16;
        uVar16 = uVar16 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x10))[uVar21] +
                                           (ulonglong)uVar27 * 2) - 1U));
    }
    unaff_RBX = (undefined8 *)CONCAT71(uVar22,1);
    uVar11 = local_220;
    if (uVar32 != uVar23) {
      local_290 = (longlong *)(local_298 + 0x90);
      unaff_RBX = (undefined8 *)CONCAT71(uVar22,1);
      do {
        if ((local_298 != (char *)0x0) &&
           (uVar8 = (int)local_288 + 1, local_288 = (ulonglong)uVar8, (uVar8 & 0x1ff) == 0)) {
          if (*pcVar24 != '\0') goto LAB_1483471be;
          pcVar5 = *(code **)(pcVar24 + 0x70);
          plVar17 = *(longlong **)(pcVar24 + 0x80);
          if (*(longlong **)(pcVar24 + 0x80) == (longlong *)0x0) {
            plVar17 = local_290;
          }
          uVar14 = (**(code **)(*plVar17 + 8))();
          cVar7 = (*pcVar5)(uVar14);
          *pcVar24 = cVar7;
          if (cVar7 != '\0') goto LAB_1483471be;
        }
        bVar6 = FUN_143b0acb4(&local_258,uVar32);
        unaff_RBX = (undefined8 *)
                    CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(byte)unaff_RBX & bVar6);
        uVar8 = uVar32 + 1;
        if ((int)(uVar32 + 1) < (int)uVar23) {
          uVar8 = uVar23;
        }
        do {
          uVar16 = uVar8;
          if (uVar8 - 1 == uVar32) break;
          uVar32 = uVar32 + 1;
          uVar16 = uVar32;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar26 + 0x10) +
                                               (ulonglong)(uVar32 >> 9) * 8) +
                                             (ulonglong)(uVar32 & 0x1ff) * 2) - 1U));
        uVar32 = uVar16;
        uVar11 = local_220;
      } while (uVar32 != uVar23);
    }
  }
  else {
    local_290 = plVar17 + 2;
    local_1e8 = (longlong *)&DAT_100000000;
    local_1d8 = 0xffffffff;
    local_1d0 = 0;
    iVar25 = 0;
    local_1e0 = local_290;
    if ((int)plVar17[5] != 0) {
      FUN_1449c0562(&local_1e8);
      iVar25 = (int)plVar17[5];
    }
    local_220 = local_1d8;
    uVar11 = local_220;
    local_218 = local_1d0;
    local_214 = local_1cc[0];
    uStack_230 = local_1e8;
    plStack_228 = local_1e0;
    local_220._4_4_ = (int)(local_1d8 >> 0x20);
    if ((local_220._4_4_ != iVar25) ||
       (unaff_RBX = (undefined8 *)CONCAT71(uVar22,1), local_1e0 != local_290)) {
      plVar19 = (longlong *)(local_298 + 0x90);
      unaff_RBX = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      pcVar24 = local_298;
      iVar9 = local_220._4_4_;
      local_238 = plVar17;
      local_220 = uVar11;
      do {
        iVar9 = *(int *)(*local_238 + (longlong)iVar9 * 0xc);
        uVar23 = iVar9 * 3 + 2;
        lVar26 = *(longlong *)(param_1[9] + 0x78);
        uVar32 = iVar9 * 3 + 1;
        local_1e8 = (longlong *)
                    CONCAT44(*(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar32 >> 9) * 8) +
                              (ulonglong)(uVar32 & 0x1ff) * 4),
                             *(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)((uint)(iVar9 * 3) >> 9) * 8) +
                              (ulonglong)(iVar9 * 3 & 0x1ff) * 4));
        local_1e0 = (longlong *)
                    CONCAT44(local_1e0._4_4_,
                             *(undefined4 *)
                              (*(longlong *)(lVar26 + (ulonglong)(uVar23 >> 9) * 8) +
                              (ulonglong)(uVar23 & 0x1ff) * 4));
        lVar26 = 0;
        do {
          if ((pcVar24 != (char *)0x0) &&
             (uVar32 = (int)local_288 + 1, local_288 = (ulonglong)uVar32, (uVar32 & 0x1ff) == 0)) {
            if (*pcVar24 != '\0') goto LAB_1483471be;
            pcVar5 = *(code **)(local_298 + 0x70);
            plVar20 = *(longlong **)(local_298 + 0x80);
            if (*(longlong **)(local_298 + 0x80) == (longlong *)0x0) {
              plVar20 = plVar19;
            }
            uVar14 = (**(code **)(*plVar20 + 8))();
            cVar7 = (*pcVar5)(uVar14);
            *local_298 = cVar7;
            pcVar24 = local_298;
            if (cVar7 != '\0') goto LAB_1483471be;
          }
          bVar6 = FUN_143b0acb4(&local_258,*(undefined4 *)((longlong)&local_1e8 + lVar26 * 4));
          unaff_RBX = (undefined8 *)
                      CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(byte)unaff_RBX & bVar6);
          lVar26 = lVar26 + 1;
        } while (lVar26 != 3);
        local_220 = CONCAT44(local_220._4_4_,(uint)local_220 & ~uStack_230._4_4_);
        FUN_1449c0562(&uStack_230);
        iVar9 = local_220._4_4_;
        uVar11 = local_220;
      } while (local_238 != plVar17 || (plStack_228 != local_290 || local_220._4_4_ != iVar25));
    }
  }
  local_220 = uVar11;
  local_238 = (longlong *)param_1[1];
  uStack_230 = (longlong *)0x0;
  plStack_228 = (longlong *)0x0;
  if (param_1[8] == 0) {
    local_1a8 = 0;
    local_198 = &PTR_LAB_14ae74910;
    local_1b8 = &LAB_143b12890;
    local_190 = param_1;
    FUN_142984024(&local_238);
    pcVar24 = local_298;
  }
  else {
    local_168 = 0;
    local_158 = &PTR_LAB_14ae748f0;
    local_178[0] = &LAB_143b12836;
    local_150 = param_1;
    FUN_140619b9c(param_1[8],&local_1e8);
    FUN_142984384(&local_238,&local_1e8,local_178);
    pcVar24 = local_298;
    if (local_1e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_148328bf2(&local_1e8,param_1[1],(int)param_1[2],1);
  lVar26 = (longlong)(int)plStack_228;
  if (0 < lVar26) {
    plVar17 = (longlong *)(pcVar24 + 0x90);
    lVar31 = 0;
    do {
      if (pcVar24 != (char *)0x0) {
        if (*pcVar24 == '\0') {
          pcVar5 = *(code **)(local_298 + 0x70);
          plVar19 = *(longlong **)(local_298 + 0x80);
          if (*(longlong **)(local_298 + 0x80) == (longlong *)0x0) {
            plVar19 = plVar17;
          }
          uVar14 = (**(code **)(*plVar19 + 8))();
          cVar7 = (*pcVar5)(uVar14);
          *local_298 = cVar7;
          pcVar24 = local_298;
          if (cVar7 == '\0') goto LAB_148347ac3;
        }
        unaff_RBX = (undefined8 *)0x0;
        break;
      }
LAB_148347ac3:
      local_1cc[1] = CONCAT13(local_1cc[1]._3_1_,1);
      local_1c0 = &local_138;
      bVar6 = FUN_148339b5e(&local_1e8,uStack_230[lVar31],local_1cc + 1,0);
      unaff_RBX = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(byte)unaff_RBX & bVar6);
      lVar31 = lVar31 + 1;
    } while (lVar26 != lVar31);
  }
  FUN_146be9400(&uStack_230);
LAB_148347b52:
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_138);
LAB_148347b7c:
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14834fbf0(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return (ulonglong)unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1483471be:
  unaff_RBX = (undefined8 *)0x0;
  goto LAB_148347b52;
}



// FUNCTION 148347e08 FUN_148347e08 body=385 status=ok
// SIG undefined FUN_148347e08(void)

int FUN_148347e08(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined4 **local_90;
  longlong *local_88;
  undefined4 *local_80;
  int local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_44;
  undefined1 *local_40;
  longlong **local_38;
  undefined1 local_29;
  uint *local_28;
  int *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_44 = param_2;
  if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
    plVar4 = param_1 + 0x13;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x14];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x15] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = param_1[0xc];
      do {
        lVar1 = lVar3 + (longlong)iVar5 * 0x10;
        if (*(uint *)(lVar3 + (longlong)iVar5 * 0x10) == param_2) {
          if ((lVar1 != 0) && ((int *)(lVar1 + 4) != (int *)0x0)) {
            local_78[0] = *(int *)(lVar1 + 4);
            goto LAB_148347f5f;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_80 = &local_68;
  puVar2 = (undefined4 *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_38 = &local_88;
  local_20 = (int *)&local_29;
  local_90 = &local_28;
  local_28 = (uint *)&LAB_146c80466;
  local_98 = &local_40;
  local_40 = &LAB_143b127dc;
  local_88 = param_1;
  FUN_146c80058(param_1[0xb],local_78,local_80,param_1[3]);
  if (local_78[0] == -1) {
    local_78[0] = -1;
  }
  else {
    local_28 = &local_44;
    local_20 = local_78;
    FUN_140263e2a(param_1 + 0xc,&local_40,&local_28,0);
  }
LAB_148347f5f:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_78[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148347f8a FUN_148347f8a body=38 status=ok
// SIG undefined FUN_148347f8a(void)

undefined8 FUN_148347f8a(undefined8 param_1,int param_2)

{
  FUN_1483768e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148347fb4 FUN_148347fb4 body=62 status=ok
// SIG undefined FUN_148347fb4(void)

undefined8 * FUN_148347fb4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ae73180;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148347ff2 FUN_148347ff2 body=38 status=ok
// SIG undefined FUN_148347ff2(void)

undefined8 FUN_148347ff2(undefined8 param_1,int param_2)

{
  FUN_14837697e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148348018 FUN_148348018 body=57 status=ok
// SIG undefined FUN_148348018(void)

undefined8 * FUN_148348018(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae72d28;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148348052 FUN_148348052 body=38 status=ok
// SIG undefined FUN_148348052(void)

undefined8 FUN_148348052(undefined8 param_1,int param_2)

{
  FUN_1483328ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148348078 FUN_148348078 body=38 status=ok
// SIG undefined FUN_148348078(void)

undefined8 FUN_148348078(undefined8 param_1,int param_2)

{
  FUN_148315ddc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834809e FUN_14834809e body=38 status=ok
// SIG undefined FUN_14834809e(void)

undefined8 FUN_14834809e(undefined8 param_1,int param_2)

{
  FUN_148316aa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483480c8 FUN_1483480c8 body=38 status=ok
// SIG undefined FUN_1483480c8(void)

undefined8 FUN_1483480c8(undefined8 param_1,int param_2)

{
  FUN_148319084();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483480ee FUN_1483480ee body=120 status=ok
// SIG undefined FUN_1483480ee(void)

double FUN_1483480ee(undefined8 *param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = (longlong)*(int *)(param_1 + 1);
  dVar4 = 0.0;
  if (1 < lVar2) {
    pdVar1 = (double *)*param_1;
    lVar3 = 0x10;
    do {
      dVar5 = *(double *)((longlong)pdVar1 + lVar3 + -0x10) - *(double *)((longlong)pdVar1 + lVar3);
      dVar6 = *(double *)((longlong)pdVar1 + lVar3 + -8) - *(double *)((longlong)pdVar1 + lVar3 + 8)
      ;
      dVar4 = dVar4 + SQRT(dVar5 * dVar5 + dVar6 * dVar6);
      lVar3 = lVar3 + 0x10;
    } while (lVar2 * 0x10 != lVar3);
    dVar4 = dVar4 + SQRT((*pdVar1 - pdVar1[lVar2 * 2 + -2]) * (*pdVar1 - pdVar1[lVar2 * 2 + -2]) +
                         (pdVar1[1] - pdVar1[lVar2 * 2 + -1]) * (pdVar1[1] - pdVar1[lVar2 * 2 + -1])
                        );
  }
  return dVar4;
}



// FUNCTION 148348166 FUN_148348166 body=5277 status=ok
// SIG undefined FUN_148348166(void)

void FUN_148348166(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,char param_6,longlong *param_7,uint param_8,byte param_9,
                  longlong param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 *param_14,undefined8 *param_15)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  bool bVar35;
  byte bVar36;
  int iVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong *plVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  float fVar44;
  undefined1 auStack_188 [32];
  int local_168;
  int local_154;
  uint local_150;
  uint local_14c;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong *local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  uint local_d4;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar15 = *(uint *)(param_2 + 1);
  local_148 = (ulonglong)uVar15;
  local_110 = (ulonglong)(int)uVar15;
  bVar36 = *(byte *)(param_1 + 0xa1);
  local_150 = bVar36 ^ 1;
  uVar41 = uVar15 - local_150;
  uVar18 = (ulonglong)uVar41;
  local_154 = *(int *)(param_4 + 1) + uVar15;
  uVar29 = *(uint *)(param_3 + 1);
  uVar22 = (ulonglong)uVar29;
  local_a8 = (undefined4 *)0x0;
  uStack_a0 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  local_118 = param_2;
  local_f0 = param_3;
  local_d0 = param_4;
  if (bVar36 == 1) {
    uVar42 = *(uint *)(param_14 + 1);
    if ((int)uVar42 <= (int)uVar15) {
      if (uVar42 == uVar15) {
        pvVar4 = (void *)*param_14;
        uStack_a0 = (ulonglong)uVar15;
        if (uVar15 == 0) {
          uStack_a0 = 0;
          iVar31 = 0;
          uVar15 = 0;
        }
        else {
          FUN_1447c510a(&local_a8,uVar15,0);
          memcpy(local_a8,pvVar4,local_110 * 4);
          iVar31 = (int)uStack_a0;
          uVar15 = uStack_a0._4_4_;
        }
        puVar9 = local_a8;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar31 + 1U);
        if (uVar15 < iVar31 + 1U) {
          FUN_14475e4ac(&local_a8,iVar31);
        }
        local_a8[iVar31] = *puVar9;
        goto LAB_1483484c9;
      }
      goto LAB_148348279;
    }
  }
  else {
LAB_148348279:
    if ((bVar36 != 0) || (uVar42 = *(uint *)(param_14 + 1), (int)uVar42 < (int)uVar15)) {
      if (param_6 == '\0') {
        iVar31 = 0;
        uVar15 = 0;
        if (0 < (int)uVar41) {
          uVar15 = 0;
          do {
            uVar27 = uStack_a0;
            lVar38 = (longlong)(int)uStack_a0;
            uVar42 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar42);
            if (uStack_a0._4_4_ < uVar42) {
              FUN_14475e4ac(&local_a8,uVar27 & 0xffffffff);
            }
            local_a8[lVar38] = 1.0 - (float)(int)uVar15 / (float)(int)uVar41;
            uVar15 = uVar15 + 1;
          } while (uVar41 != uVar15);
          iVar31 = (int)uStack_a0;
          uVar15 = uStack_a0._4_4_;
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar31 + 1U);
        if (uVar15 < iVar31 + 1U) {
          FUN_14475e4ac(&local_a8,iVar31);
        }
        local_a8[iVar31] = 0;
      }
      else {
        uStack_a0 = 1;
        FUN_14475e4ac();
        *local_a8 = 0;
        fVar44 = 0.0;
        if (0 < (int)uVar41) {
          uVar15 = 1;
          lVar38 = 0;
          do {
            lVar23 = *param_2;
            lVar28 = ((ulonglong)uVar15 % uVar18) * 0x10;
            dVar1 = *(double *)(lVar23 + lVar28) - *(double *)(lVar23 + lVar38);
            dVar6 = *(double *)(lVar23 + 8 + lVar28) - *(double *)(lVar23 + 8 + lVar38);
            lVar23 = (longlong)(int)uStack_a0;
            uVar42 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar42);
            if (uStack_a0._4_4_ < uVar42) {
              FUN_14475e4ac();
            }
            fVar44 = fVar44 + (float)SQRT(dVar1 * dVar1 + dVar6 * dVar6);
            local_a8[lVar23] = fVar44;
            lVar38 = lVar38 + 0x10;
            uVar15 = uVar15 + 1;
            param_2 = local_118;
          } while (uVar18 << 4 != lVar38);
        }
        if (0 < (int)uStack_a0) {
          if (fVar44 <= 1e-06) {
            fVar44 = 1e-06;
          }
          lVar38 = 0;
          do {
            local_a8[lVar38] = (float)local_a8[lVar38] / fVar44;
            local_a8[lVar38] = 1.0 - (float)local_a8[lVar38];
            lVar38 = lVar38 + 1;
          } while (lVar38 < (int)uStack_a0);
        }
      }
      goto LAB_1483484c9;
    }
  }
  pvVar4 = (void *)*param_14;
  uStack_a0 = (ulonglong)uVar42;
  if (uVar42 == 0) {
    uStack_a0 = 0;
  }
  else {
    FUN_1447c510a(&local_a8,uVar42,0);
    memcpy(local_a8,pvVar4,(longlong)(int)uVar42 << 2);
  }
LAB_1483484c9:
  uVar39 = uStack_b0;
  uVar27 = local_148;
  local_f8 = CONCAT44(local_f8._4_4_,uVar41 + uVar29 + 1);
  uVar15 = *(uint *)(param_15 + 1);
  local_100 = uVar22;
  if ((int)uVar15 < (int)param_8) {
    if ((uVar15 == param_8 - 1 & param_9) == 1) {
      pvVar4 = (void *)*param_15;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
      if (uStack_b0._4_4_ == 0 && uVar15 == 0) {
        uStack_b0 = (ulonglong)uVar15;
      }
      else {
        FUN_1447c510a(&local_b8,uVar15);
        uVar27 = local_148;
        if (uVar15 != 0) {
          memcpy(local_b8,pvVar4,(longlong)(int)uVar15 << 2);
        }
      }
      uVar22 = uStack_b0;
      puVar9 = local_b8;
      lVar38 = (longlong)(int)uStack_b0;
      uVar15 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
      if (uStack_b0._4_4_ < uVar15) {
        FUN_14475e4ac(&local_b8,uVar22 & 0xffffffff);
      }
      local_b8[lVar38] = *puVar9;
    }
    else if (param_6 == '\0') {
      if (0 < (int)param_8) {
        uVar15 = 0;
        do {
          uVar22 = uStack_b0;
          lVar38 = (longlong)(int)uStack_b0;
          uVar29 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar29);
          if (uStack_b0._4_4_ < uVar29) {
            FUN_14475e4ac(&local_b8,uVar22 & 0xffffffff);
          }
          local_b8[lVar38] = 1.0 - (float)(int)uVar15 / (float)(int)(param_8 - 1);
          uVar15 = uVar15 + 1;
        } while (param_8 != uVar15);
      }
    }
    else {
      lVar38 = (longlong)(int)uStack_b0;
      uVar15 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
      if (uStack_b0._4_4_ < uVar15) {
        FUN_14475e4ac(&local_b8,uVar39 & 0xffffffff);
      }
      local_b8[lVar38] = 0;
      uVar15 = (int)param_7[1] - (uint)(param_9 ^ 1);
      fVar44 = 0.0;
      if (0 < (int)uVar15) {
        lVar38 = 0x10;
        uVar22 = 0;
        do {
          uVar27 = uStack_b0;
          uVar22 = uVar22 + 1;
          uVar39 = (longlong)((ulonglong)(uint)((int)uVar22 >> 0x1f) << 0x20 | uVar22 & 0xffffffff)
                   % (longlong)(int)param_7[1] & 0xffffffff;
          lVar23 = *param_7;
          dVar1 = *(double *)(lVar23 + uVar39 * 0x18) - *(double *)(lVar23 + -0x10 + lVar38);
          dVar6 = *(double *)(lVar23 + 8 + uVar39 * 0x18) - *(double *)(lVar23 + -8 + lVar38);
          dVar7 = *(double *)(lVar23 + 0x10 + uVar39 * 0x18) - *(double *)(lVar23 + lVar38);
          lVar23 = (longlong)(int)uStack_b0;
          uVar29 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar29);
          if (uStack_b0._4_4_ < uVar29) {
            FUN_14475e4ac(&local_b8,uVar27 & 0xffffffff);
          }
          fVar44 = fVar44 + (float)SQRT(dVar7 * dVar7 + dVar1 * dVar1 + dVar6 * dVar6);
          local_b8[lVar23] = fVar44;
          lVar38 = lVar38 + 0x18;
        } while (uVar15 != uVar22);
      }
      uVar27 = local_148;
      if (0 < (int)uStack_b0) {
        if (fVar44 <= 1e-06) {
          fVar44 = 1e-06;
        }
        lVar38 = 0;
        do {
          local_b8[lVar38] = (float)local_b8[lVar38] / fVar44;
          local_b8[lVar38] = 1.0 - (float)local_b8[lVar38];
          lVar38 = lVar38 + 1;
        } while (lVar38 < (int)uStack_b0);
      }
    }
  }
  else {
    pvVar4 = (void *)*param_15;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar15);
    if (uStack_b0._4_4_ == 0 && uVar15 == 0) {
      uStack_b0 = (ulonglong)uVar15;
    }
    else {
      FUN_1447c510a(&local_b8,uVar15);
      uVar27 = local_148;
      if (uVar15 != 0) {
        memcpy(local_b8,pvVar4,(longlong)(int)uVar15 << 2);
      }
    }
  }
  plVar40 = local_118;
  iVar31 = local_154;
  iVar17 = (int)uVar27;
  iVar20 = 0;
  if (param_9 != 0) {
    iVar20 = iVar17;
  }
  iVar10 = 0;
  if (param_9 != 0) {
    iVar10 = local_154;
  }
  iVar20 = iVar17 * param_8 - iVar20;
  iVar33 = (int)local_f8;
  iVar32 = (int)local_f8 * param_8;
  local_168 = local_154 * param_8 - iVar10;
  if ((int)param_8 < 2) {
    iVar32 = 0;
    local_168 = 0;
  }
  local_168 = local_168 + (int)param_5[1] * local_154;
  local_128 = CONCAT44(local_128._4_4_,param_8 - 1);
  uVar15 = uVar41 * (param_8 - 1);
  local_108 = (ulonglong)uVar15;
  iVar10 = uVar15 * 2;
  local_c8 = 0;
  uStack_c0 = 0;
  local_130 = uVar18;
  if (param_9 == 0) {
    lVar38 = 0;
    bVar43 = true;
    do {
      bVar35 = bVar43;
      *(int *)(param_1 + 0xa4 + lVar38 * 4) = iVar20;
      *(int *)(param_1 + 0xac + lVar38 * 4) = local_168;
      *(int *)(param_1 + 0xb4 + lVar38 * 4) = iVar32;
      *(int *)(param_1 + 0xbc + lVar38 * 4) = iVar10;
      iVar16 = (int)local_108;
      *(int *)(param_1 + 0xc4 + lVar38 * 4) = iVar16;
      iVar33 = *(int *)(param_10 + lVar38 * 4);
      if (iVar33 == 2) {
        iVar10 = iVar10 + uVar41;
        local_108 = (ulonglong)(iVar16 + 1);
        iVar32 = iVar32 + iVar17 + 1;
        local_168 = local_168 + iVar17 + 1;
        iVar20 = iVar20 + 1;
      }
      else if (iVar33 == 1) {
        iVar10 = iVar10 + iVar17 + -2;
        local_108 = (ulonglong)(iVar16 + 1);
        iVar32 = iVar32 + iVar17;
        local_168 = local_168 + iVar17;
      }
      lVar38 = 1;
      bVar43 = false;
    } while (bVar35);
    FUN_146c5e8c6(param_1);
    local_140 = (ulonglong)(iVar17 * (uint)local_128);
    uVar14 = CONCAT71((uint7)(uint3)(iVar17 * (uint)local_128 >> 8),1);
    lVar38 = 0;
    local_120 = uVar18;
    do {
      local_14c = (uint)uVar14;
      iVar20 = *(int *)(param_10 + lVar38 * 4);
      iVar17 = (int)lVar38;
      if (iVar20 == 2) {
        uVar2 = *(undefined4 *)(param_1 + 0xa4 + lVar38 * 4);
        if (0 < (int)uVar18) {
          iVar31 = iVar17 * (int)local_140;
          uVar3 = *(undefined4 *)(param_1 + 0xc4 + lVar38 * 4);
          local_138 = CONCAT44(local_138._4_4_,uVar3);
          lVar28 = (longlong)*(int *)(param_1 + 0xbc + lVar38 * 4);
          bVar36 = (byte)lVar38 ^ 1;
          lVar23 = lVar28 * 3 + 2;
          uVar18 = 0;
          do {
            uVar22 = uVar18 + 1;
            iVar20 = (int)((longlong)
                           ((ulonglong)(uint)((int)uVar22 >> 0x1f) << 0x20 | uVar22 & 0xffffffff) %
                          (longlong)(int)uVar27);
            iVar32 = iVar20 + iVar31;
            iVar10 = (int)uVar18;
            iVar16 = iVar31 + iVar10;
            iVar33 = iVar16;
            if (*(byte *)(param_1 + 0x98) != bVar36) {
              iVar33 = iVar32;
              iVar32 = iVar16;
            }
            lVar30 = *(longlong *)(param_1 + 0x58);
            *(int *)(lVar30 + -8 + lVar23 * 4) = iVar33;
            *(undefined4 *)(lVar30 + -4 + lVar23 * 4) = uVar2;
            *(int *)(lVar30 + lVar23 * 4) = iVar32;
            iVar33 = *(int *)(param_1 + 0xb4 + lVar38 * 4);
            iVar32 = iVar33 + iVar20;
            iVar16 = iVar10 + iVar33;
            if (*(byte *)(param_1 + 0x98) == bVar36) {
              iVar32 = iVar10 + iVar33;
              iVar16 = iVar33 + iVar20;
            }
            lVar30 = *(longlong *)(param_1 + 0x68);
            *(int *)(lVar30 + -8 + lVar23 * 4) = iVar32;
            *(int *)(lVar30 + -4 + lVar23 * 4) = iVar33 + (int)local_148;
            *(int *)(lVar30 + lVar23 * 4) = iVar16;
            iVar33 = *(int *)(param_1 + 0xac + lVar38 * 4);
            iVar32 = iVar20 + iVar33;
            iVar16 = iVar10 + iVar33;
            if (*(byte *)(param_1 + 0x98) == bVar36) {
              iVar32 = iVar10 + iVar33;
              iVar16 = iVar20 + iVar33;
            }
            lVar30 = *(longlong *)(param_1 + 0x78);
            *(int *)(lVar30 + -8 + lVar23 * 4) = iVar32;
            *(int *)(lVar30 + -4 + lVar23 * 4) = iVar33 + (int)local_148;
            *(int *)(lVar30 + lVar23 * 4) = iVar16;
            *(undefined4 *)(*(longlong *)(param_1 + 0x88) + lVar28 * 4 + uVar18 * 4) = uVar3;
            lVar23 = lVar23 + 3;
            uVar18 = uVar22;
            uVar27 = local_148;
          } while ((int)local_120 != (int)uVar22);
        }
        fVar44 = DAT_14c84635c._4_4_ + param_13._4_4_;
        lVar28 = (longlong)*(int *)(param_1 + 0xb4 + lVar38 * 4) + local_110;
        lVar23 = *(longlong *)(param_1 + 0x18);
        *(float *)(lVar23 + lVar28 * 8) = (float)DAT_14c84635c + (float)param_13;
        *(float *)(lVar23 + 4 + lVar28 * 8) = fVar44;
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar28 * 4) = uVar2;
        uVar14 = DAT_14c846330;
        lVar28 = (longlong)*(int *)(param_1 + 0xac + lVar38 * 4) + local_110;
        lVar23 = *(longlong *)(param_1 + 0x38);
        *(undefined4 *)(lVar23 + 8 + lVar28 * 0xc) = DAT_14c846338;
        *(undefined8 *)(lVar23 + lVar28 * 0xc) = uVar14;
        *(undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar28 * 4) = uVar2;
        plVar40 = local_118;
        uVar18 = local_130;
        iVar31 = local_154;
        if (0 < (int)uVar27) {
          lVar23 = 8;
          uVar22 = 0;
          do {
            dVar1 = *(double *)(*local_118 + lVar23);
            lVar28 = *(longlong *)(param_1 + 0x18);
            lVar30 = (longlong)*(int *)(param_1 + 0xb4 + lVar38 * 4) + uVar22;
            *(float *)(lVar28 + lVar30 * 8) =
                 (float)*(double *)(*local_118 + -8 + lVar23) * (float)param_12 + (float)param_13;
            *(float *)(lVar28 + 4 + lVar30 * 8) = (float)dVar1 * param_12._4_4_ + param_13._4_4_;
            iVar20 = (int)local_140 * iVar17 + (int)uVar22;
            *(int *)(*(longlong *)(param_1 + 0x28) + lVar30 * 4) = iVar20;
            uVar14 = DAT_14c846330;
            lVar28 = *(longlong *)(param_1 + 0x38);
            lVar30 = (longlong)*(int *)(param_1 + 0xac + lVar38 * 4) + uVar22;
            *(undefined4 *)(lVar28 + 8 + lVar30 * 0xc) = DAT_14c846338;
            *(undefined8 *)(lVar28 + lVar30 * 0xc) = uVar14;
            *(int *)(*(longlong *)(param_1 + 0x48) + lVar30 * 4) = iVar20;
            uVar22 = uVar22 + 1;
            lVar23 = lVar23 + 0x10;
          } while (uVar27 != uVar22);
        }
      }
      else if (iVar20 == 1) {
        FUN_146bd1316(plVar40,&local_c8,1);
        if ((longlong)(int)uStack_c0 != 0) {
          iVar31 = iVar17 * (int)local_140;
          uVar2 = *(undefined4 *)(param_1 + 0xc4 + lVar38 * 4);
          lVar23 = (longlong)*(int *)(param_1 + 0xbc + lVar38 * 4);
          bVar36 = (byte)lVar38 ^ 1;
          lVar30 = lVar23 << 2;
          lVar23 = lVar23 * 0xc + 8;
          lVar28 = 0;
          do {
            iVar33 = *(int *)(local_c8 + 8 + lVar28) + iVar31;
            iVar20 = *(int *)(local_c8 + 4 + lVar28);
            iVar32 = *(int *)(local_c8 + lVar28) + iVar31;
            iVar10 = iVar32;
            if (*(byte *)(param_1 + 0x98) != bVar36) {
              iVar10 = iVar33;
              iVar33 = iVar32;
            }
            lVar5 = *(longlong *)(param_1 + 0x58);
            *(int *)(lVar5 + -8 + lVar23) = iVar10;
            *(int *)(lVar5 + -4 + lVar23) = iVar20 + iVar31;
            *(int *)(lVar5 + lVar23) = iVar33;
            iVar20 = *(int *)(param_1 + 0xb4 + lVar38 * 4);
            iVar32 = *(int *)(local_c8 + 8 + lVar28) + iVar20;
            iVar10 = *(int *)(local_c8 + 4 + lVar28);
            iVar16 = iVar20 + *(int *)(local_c8 + lVar28);
            iVar33 = iVar16;
            if (*(byte *)(param_1 + 0x98) != bVar36) {
              iVar33 = iVar32;
              iVar32 = iVar16;
            }
            lVar5 = *(longlong *)(param_1 + 0x68);
            *(int *)(lVar5 + -8 + lVar23) = iVar33;
            *(int *)(lVar5 + -4 + lVar23) = iVar10 + iVar20;
            *(int *)(lVar5 + lVar23) = iVar32;
            iVar20 = *(int *)(param_1 + 0xac + lVar38 * 4);
            iVar32 = *(int *)(local_c8 + 8 + lVar28) + iVar20;
            iVar10 = *(int *)(local_c8 + 4 + lVar28);
            iVar16 = iVar20 + *(int *)(local_c8 + lVar28);
            iVar33 = iVar16;
            if (*(byte *)(param_1 + 0x98) != bVar36) {
              iVar33 = iVar32;
              iVar32 = iVar16;
            }
            lVar5 = *(longlong *)(param_1 + 0x78);
            *(int *)(lVar5 + -8 + lVar23) = iVar33;
            *(int *)(lVar5 + -4 + lVar23) = iVar10 + iVar20;
            *(int *)(lVar5 + lVar23) = iVar32;
            *(undefined4 *)(*(longlong *)(param_1 + 0x88) + lVar30) = uVar2;
            lVar30 = lVar30 + 4;
            lVar23 = lVar23 + 0xc;
            lVar28 = lVar28 + 0xc;
          } while ((longlong)(int)uStack_c0 * 0xc != lVar28);
        }
        uVar27 = local_148;
        uVar18 = local_130;
        iVar31 = local_154;
        if (0 < (int)local_148) {
          lVar23 = 8;
          uVar22 = 0;
          do {
            dVar1 = *(double *)(*plVar40 + lVar23);
            lVar28 = *(longlong *)(param_1 + 0x18);
            lVar30 = (longlong)*(int *)(param_1 + 0xb4 + lVar38 * 4) + uVar22;
            *(float *)(lVar28 + lVar30 * 8) =
                 ((float)*(double *)(*plVar40 + -8 + lVar23) * (float)param_12 + (float)param_13) *
                 (float)(iVar17 * 2 + -1);
            *(float *)(lVar28 + 4 + lVar30 * 8) = (float)dVar1 * param_12._4_4_ + param_13._4_4_;
            iVar20 = (int)local_140 * iVar17 + (int)uVar22;
            *(int *)(*(longlong *)(param_1 + 0x28) + lVar30 * 4) = iVar20;
            uVar14 = DAT_14c846330;
            lVar28 = *(longlong *)(param_1 + 0x38);
            lVar30 = (longlong)*(int *)(param_1 + 0xac + lVar38 * 4) + uVar22;
            *(undefined4 *)(lVar28 + 8 + lVar30 * 0xc) = DAT_14c846338;
            *(undefined8 *)(lVar28 + lVar30 * 0xc) = uVar14;
            *(int *)(*(longlong *)(param_1 + 0x48) + lVar30 * 4) = iVar20;
            uVar22 = uVar22 + 1;
            lVar23 = lVar23 + 0x10;
          } while (local_148 != uVar22);
        }
      }
      uVar41 = (uint)uVar18;
      lVar38 = 1;
      uVar14 = 0;
    } while ((local_14c & 1) != 0);
    iVar20 = 2;
    iVar33 = (int)local_f8;
  }
  else {
    FUN_146c5e8c6(param_1);
    iVar20 = 3;
  }
  uVar18 = local_108;
  if (iVar20 <= (int)param_8) {
    local_14c = param_8;
    if (param_9 != 0) {
      local_14c = (uint)local_128;
    }
    iVar20 = *(int *)(local_f0 + 1);
    local_e0 = CONCAT44(local_e0._4_4_,iVar20);
    if (iVar20 < 1) {
      iVar17 = -1;
    }
    else {
      iVar17 = *(int *)*local_f0;
    }
    iVar10 = (int)param_5[1] + local_14c;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,iVar10);
    uVar22 = local_128 & 0xffffffff;
    iVar32 = (int)uVar27;
    if ((int)uVar41 < 1) {
      lVar38 = 0;
      if (*(char *)(param_1 + 0xa1) != '\0') {
        uVar41 = 0;
      }
    }
    else {
      local_e8 = (longlong)iVar33;
      local_150 = ((int)local_100 + iVar32) - local_150;
      local_100 = (ulonglong)local_150;
      local_140 = CONCAT44(local_140._4_4_,1);
      iVar31 = 0;
      uVar39 = 0;
      uVar19 = 0;
      do {
        local_120 = uVar19;
        local_138 = uVar39;
        uVar19 = 0;
        uVar39 = local_120;
        do {
          fVar44 = (float)local_b8[uVar19];
          lVar38 = *(longlong *)(param_1 + 0x18);
          *(float *)(lVar38 + uVar39 * 2) = (float)local_a8[iVar31] * (float)param_11;
          *(float *)(lVar38 + 4 + uVar39 * 2) = fVar44 * param_11._4_4_;
          *(int *)(*(longlong *)(param_1 + 0x28) + uVar39) =
               (int)((longlong)
                     ((ulonglong)(uint)((int)uVar19 >> 0x1f) << 0x20 | uVar19 & 0xffffffff) %
                    (longlong)(int)local_14c) * iVar32 + iVar31;
          uVar19 = uVar19 + 1;
          uVar39 = uVar39 + local_e8 * 4;
        } while (param_8 != uVar19);
        if (iVar31 == iVar17) {
          if (iVar20 < 1) {
            iVar17 = -1;
          }
          else {
            iVar17 = *(int *)*local_f0;
          }
        }
        else {
          local_110 = CONCAT44(local_110._4_4_,iVar17);
          if (1 < (int)param_8) {
            lVar38 = (longlong)(iVar31 * 2) * 0xc;
            uVar39 = uVar22;
            iVar16 = (int)local_140;
            do {
              iVar21 = local_150 + iVar16;
              iVar26 = iVar16 + -1;
              iVar13 = iVar21;
              if (*(char *)(param_1 + 0x98) == '\0') {
                iVar26 = iVar21;
                iVar13 = iVar16 + -1;
              }
              lVar23 = *(longlong *)(param_1 + 0x68);
              *(int *)(lVar23 + lVar38) = iVar26;
              *(int *)(lVar23 + 4 + lVar38) = iVar16;
              *(int *)(lVar23 + 8 + lVar38) = iVar13;
              iVar37 = local_150 + 1 + iVar16;
              iVar26 = iVar37;
              iVar13 = iVar16;
              if (*(char *)(param_1 + 0x98) == '\0') {
                iVar26 = iVar16;
                iVar13 = iVar37;
              }
              lVar23 = *(longlong *)(param_1 + 0x68);
              *(int *)(lVar23 + 0xc + lVar38) = iVar26;
              *(int *)(lVar23 + 0x10 + lVar38) = iVar21;
              *(int *)(lVar23 + 0x14 + lVar38) = iVar13;
              lVar38 = lVar38 + (ulonglong)(uVar41 * 2) * 0xc;
              iVar16 = iVar16 + (int)local_f8;
              uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
          }
          iVar31 = iVar31 + 1;
        }
        local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
        uVar39 = local_138 + 1;
        uVar19 = local_120 + 4;
      } while (iVar31 < (int)(uint)local_130);
      uVar41 = 0;
      if (*(char *)(param_1 + 0xa1) == '\0') {
        uVar41 = (uint)local_130;
      }
      lVar38 = (longlong)(int)(local_138 + 1);
      iVar31 = local_154;
    }
    lVar38 = lVar38 << 2;
    uVar39 = 0;
    do {
      fVar44 = (float)local_b8[uVar39];
      lVar23 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar23 + lVar38 * 2) = (float)local_a8[(int)uStack_a0 + -1] * (float)param_11;
      *(float *)(lVar23 + 4 + lVar38 * 2) = fVar44 * param_11._4_4_;
      *(uint *)(*(longlong *)(param_1 + 0x28) + lVar38) =
           (int)((longlong)((ulonglong)(uint)((int)uVar39 >> 0x1f) << 0x20 | uVar39 & 0xffffffff) %
                (longlong)(int)local_14c) * iVar32 + uVar41;
      uVar39 = uVar39 + 1;
      lVar38 = lVar38 + (longlong)iVar33 * 4;
    } while (param_8 != uVar39);
    iVar20 = *(int *)(local_d0 + 1);
    local_e8 = CONCAT44(local_e8._4_4_,iVar20);
    if (iVar20 < 1) {
      local_150 = 0xffffffff;
    }
    else {
      local_150 = *(uint *)*local_d0;
    }
    local_128 = uVar22;
    if (0 < iVar32) {
      local_128 = -uVar22;
      local_e0 = (longlong)(int)((uint)local_130 * 2) * 4;
      local_f0 = (undefined8 *)((longlong)(int)((uint)local_130 * 2) * 0xc);
      local_138 = 0;
      uVar15 = 0;
      do {
        iVar17 = 0;
        uVar29 = 0;
        iVar33 = 0;
        do {
          iVar32 = ((int)uVar29 % (int)local_14c) * (int)uVar27 + uVar15;
          lVar38 = *(longlong *)(param_1 + 0x38);
          lVar23 = (longlong)((iVar17 % iVar10) * iVar31 + (int)local_138);
          *(undefined8 *)(lVar38 + lVar23 * 0xc) = 0;
          *(undefined4 *)(lVar38 + 8 + lVar23 * 0xc) = 0;
          *(int *)(*(longlong *)(param_1 + 0x48) + lVar23 * 4) = iVar32;
          if ((iVar33 < (int)param_5[1]) && (uVar29 == *(uint *)(*param_5 + (longlong)iVar33 * 4)))
          {
            iVar17 = iVar17 + 1;
            lVar38 = *(longlong *)(param_1 + 0x38);
            lVar23 = (longlong)((iVar17 % iVar10) * iVar31 + (int)local_138);
            *(undefined8 *)(lVar38 + lVar23 * 0xc) = 0;
            *(undefined4 *)(lVar38 + 8 + lVar23 * 0xc) = 0;
            *(int *)(*(longlong *)(param_1 + 0x48) + lVar23 * 4) = iVar32;
            iVar33 = iVar33 + 1;
          }
          uVar29 = uVar29 + 1;
          iVar17 = iVar17 + 1;
        } while (param_8 != uVar29);
        if (uVar15 == local_150) {
          uVar29 = uVar15;
          if (iVar20 < 1) {
            local_150 = 0xffffffff;
          }
          else {
            local_150 = *(uint *)*local_d0;
          }
        }
        else if ((int)uVar15 < (int)(uint)local_130) {
          uVar18 = (longlong)((int)local_138 + 1) % (longlong)iVar31;
          local_f8 = uVar18 & 0xffffffff;
          uVar29 = uVar15 + 1;
          uVar39 = (longlong)(int)uVar29 % (longlong)(int)uVar27;
          if (1 < (int)param_8) {
            lVar23 = (longlong)(int)(uVar15 * 2) * 4;
            lVar38 = (longlong)(int)(uVar15 * 2) * 0xc;
            iVar17 = (int)uVar39;
            local_100 = CONCAT44(local_100._4_4_,iVar17);
            uVar39 = uVar39 & 0xffffffff;
            local_140 = local_140 & 0xffffffff00000000;
            uVar19 = 0;
            uVar34 = 1;
            uVar41 = uVar15;
            uVar42 = uVar15;
            do {
              local_110 = uVar19;
              iVar31 = (int)uVar39;
              uVar8 = (uint)local_110;
              uVar11 = uVar8 + 1;
              local_120 = CONCAT44(local_120._4_4_,uVar11);
              uVar12 = (int)local_108 + -1 + (int)uVar34;
              uVar24 = uVar12;
              if (*(char *)(param_1 + 0xa0) != '\0') {
                uVar24 = uVar41;
              }
              *(uint *)(*(longlong *)(param_1 + 0x88) + lVar23) = uVar24;
              if (*(char *)(param_1 + 0xa0) != '\0') {
                uVar12 = uVar41;
              }
              *(uint *)(*(longlong *)(param_1 + 0x88) + 4 + lVar23) = uVar12;
              iVar33 = (int)((longlong)
                             ((ulonglong)(uint)((int)uVar34 >> 0x1f) << 0x20 | uVar34 & 0xffffffff)
                            % (longlong)(int)local_14c) * (int)uVar27;
              uVar24 = iVar33 + uVar15;
              uVar25 = uVar42;
              uVar12 = uVar24;
              if (*(char *)(param_1 + 0x98) == '\0') {
                uVar25 = uVar24;
                uVar12 = uVar42;
              }
              lVar28 = *(longlong *)(param_1 + 0x58);
              *(uint *)(lVar28 + lVar38) = uVar25;
              *(int *)(lVar28 + 4 + lVar38) = iVar31;
              *(uint *)(lVar28 + 8 + lVar38) = uVar12;
              iVar33 = iVar33 + iVar17;
              iVar16 = iVar33;
              iVar32 = iVar31;
              if (*(char *)(param_1 + 0x98) == '\0') {
                iVar16 = iVar31;
                iVar32 = iVar33;
              }
              lVar28 = *(longlong *)(param_1 + 0x58);
              *(int *)(lVar28 + 0xc + lVar38) = iVar16;
              *(uint *)(lVar28 + 0x10 + lVar38) = uVar24;
              *(int *)(lVar28 + 0x14 + lVar38) = iVar32;
              iVar21 = ((int)uVar11 % iVar10) * local_154;
              iVar13 = iVar21 + (int)local_138;
              iVar33 = (int)uVar18;
              iVar26 = uVar8 * local_154 + iVar33;
              iVar37 = uVar8 * local_154 + (int)local_138;
              iVar32 = iVar37;
              iVar16 = iVar13;
              if (*(char *)(param_1 + 0x98) == '\0') {
                iVar32 = iVar13;
                iVar16 = iVar37;
              }
              lVar28 = *(longlong *)(param_1 + 0x78);
              *(int *)(lVar28 + lVar38) = iVar32;
              *(int *)(lVar28 + 4 + lVar38) = iVar26;
              *(int *)(lVar28 + 8 + lVar38) = iVar16;
              iVar21 = iVar21 + iVar33;
              iVar33 = iVar21;
              if (*(char *)(param_1 + 0x98) == '\0') {
                iVar33 = iVar26;
                iVar26 = iVar21;
              }
              lVar28 = *(longlong *)(param_1 + 0x78);
              *(int *)(lVar28 + 0xc + lVar38) = iVar33;
              *(int *)(lVar28 + 0x10 + lVar38) = iVar13;
              *(int *)(lVar28 + 0x14 + lVar38) = iVar26;
              if ((int)local_140 < (int)param_5[1]) {
                bVar43 = uVar34 == *(uint *)(*param_5 + (longlong)(int)local_140 * 4);
                if (!bVar43) {
                  uVar11 = uVar8;
                }
                local_140 = CONCAT44(local_140._4_4_,(int)local_140 + (uint)bVar43);
                uVar11 = uVar11 + 1;
              }
              lVar38 = lVar38 + (longlong)local_f0;
              lVar23 = lVar23 + local_e0;
              uVar42 = uVar42 + (int)local_148;
              uVar39 = (ulonglong)(uint)(iVar31 + (int)local_148);
              uVar41 = uVar41 + (uint)local_130;
              bVar43 = uVar34 != uVar22;
              uVar19 = (ulonglong)uVar11;
              uVar27 = local_148;
              uVar34 = uVar34 + 1;
              iVar31 = local_154;
              local_d4 = uVar29;
            } while (bVar43);
          }
        }
        else {
          uVar29 = uVar15 + 1;
        }
        local_138 = (ulonglong)((int)local_138 + 1);
        uVar15 = uVar29;
        uVar18 = local_108 & 0xffffffff;
      } while ((int)uVar29 < (int)uVar27);
    }
  }
  local_108 = uVar18;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148349604 FUN_148349604 body=289 status=ok
// SIG undefined FUN_148349604(void)

double * FUN_148349604(double *param_1,undefined8 param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 1;
  FUN_148349726(param_2,param_3,&local_50,&local_60);
  dVar1 = local_50 - local_60;
  dVar3 = local_58 - local_48;
  dVar2 = SQRT(dVar3 * dVar3 + dVar1 * dVar1);
  if (0.0 < dVar2) {
    dVar2 = 1.0 / dVar2;
    *param_1 = dVar3 * dVar2;
    param_1[1] = dVar1 * dVar2;
  }
  else {
    local_58 = local_58 + local_48;
    local_60 = local_60 + local_50;
    dVar2 = SQRT(local_60 * local_60 + local_58 * local_58);
    if (dVar2 <= 0.0) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
    }
    else {
      dVar2 = 1.0 / dVar2;
      *param_1 = local_60 * dVar2;
      param_1[1] = local_58 * dVar2;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148349726 FUN_148349726 body=333 status=ok
// SIG undefined FUN_148349726(void)

void FUN_148349726(longlong *param_1,int param_2,double *param_3,double *param_4,char param_5)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  iVar3 = (int)param_1[1];
  pdVar1 = (double *)(*param_1 + (longlong)((param_2 + 1) % iVar3) * 0x10);
  dVar6 = pdVar1[1];
  *param_4 = *pdVar1;
  param_4[1] = dVar6;
  pdVar1 = (double *)(*param_1 + (longlong)((param_2 + iVar3 + -1) % iVar3) * 0x10);
  dVar6 = pdVar1[1];
  *param_3 = *pdVar1;
  param_3[1] = dVar6;
  lVar4 = *param_1;
  lVar5 = (longlong)param_2 * 0x10;
  *param_4 = *param_4 - *(double *)(lVar4 + lVar5);
  param_4[1] = param_4[1] - *(double *)(lVar4 + 8 + lVar5);
  lVar4 = *param_1;
  *param_3 = *param_3 - *(double *)(lVar4 + lVar5);
  param_3[1] = param_3[1] - *(double *)(lVar4 + 8 + lVar5);
  if (param_5 != '\0') {
    dVar6 = *param_4;
    dVar2 = param_4[1];
    dVar7 = SQRT(dVar6 * dVar6 + dVar2 * dVar2);
    if (0.0 < dVar7) {
      dVar6 = dVar6 * (1.0 / dVar7);
    }
    else {
      dVar6 = 0.0;
    }
    *param_4 = dVar6;
    param_4[1] = (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar2 * (1.0 / dVar7)));
    dVar6 = *param_3;
    dVar2 = param_3[1];
    dVar7 = SQRT(dVar6 * dVar6 + dVar2 * dVar2);
    if (dVar7 <= 0.0) {
      *param_3 = 0.0;
      param_3[1] = 0.0;
    }
    else {
      dVar7 = 1.0 / dVar7;
      *param_3 = dVar6 * dVar7;
      param_3[1] = dVar2 * dVar7;
    }
  }
  return;
}



// FUNCTION 148349873 FUN_148349873 body=476 status=ok
// SIG undefined FUN_148349873(void)

void FUN_148349873(longlong *param_1,int param_2,double *param_3,double *param_4,char param_5)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = (int)param_1[1];
  lVar4 = *param_1;
  lVar5 = (longlong)((param_2 + 1) % iVar3);
  param_4[2] = *(double *)(lVar4 + 0x10 + lVar5 * 0x18);
  pdVar1 = (double *)(lVar4 + lVar5 * 0x18);
  dVar6 = pdVar1[1];
  *param_4 = *pdVar1;
  param_4[1] = dVar6;
  lVar4 = *param_1;
  lVar5 = (longlong)((param_2 + iVar3 + -1) % iVar3);
  param_3[2] = *(double *)(lVar4 + 0x10 + lVar5 * 0x18);
  pdVar1 = (double *)(lVar4 + lVar5 * 0x18);
  dVar6 = pdVar1[1];
  *param_3 = *pdVar1;
  param_3[1] = dVar6;
  lVar4 = *param_1;
  lVar5 = (longlong)param_2 * 0x18;
  *param_4 = *param_4 - *(double *)(lVar4 + lVar5);
  param_4[1] = param_4[1] - *(double *)(lVar4 + 8 + lVar5);
  param_4[2] = param_4[2] - *(double *)(lVar4 + 0x10 + lVar5);
  lVar4 = *param_1;
  *param_3 = *param_3 - *(double *)(lVar4 + lVar5);
  param_3[1] = param_3[1] - *(double *)(lVar4 + 8 + lVar5);
  param_3[2] = param_3[2] - *(double *)(lVar4 + 0x10 + lVar5);
  if (param_5 != '\0') {
    dVar6 = *param_4;
    dVar7 = param_4[1];
    dVar2 = param_4[2];
    dVar8 = SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7);
    dVar9 = 1.0 / dVar8;
    if (0.0 < dVar8) {
      dVar6 = dVar6 * dVar9;
      dVar7 = dVar7 * dVar9;
    }
    else {
      dVar6 = 0.0;
      dVar7 = 0.0;
    }
    *param_4 = dVar6;
    param_4[1] = dVar7;
    param_4[2] = (double)(-(ulonglong)(0.0 < dVar8) & (ulonglong)(dVar2 * dVar9));
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar2 = param_3[2];
    dVar9 = SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar7 * dVar7);
    if (dVar9 <= 0.0) {
      *param_3 = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
    }
    else {
      dVar9 = 1.0 / dVar9;
      *param_3 = dVar6 * dVar9;
      param_3[1] = dVar7 * dVar9;
      param_3[2] = dVar2 * dVar9;
    }
  }
  return;
}



// FUNCTION 148349a4f FUN_148349a4f body=478 status=ok
// SIG undefined FUN_148349a4f(void)

void FUN_148349a4f(longlong *param_1,uint param_2,double *param_3,double *param_4,char param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar6 = (int)param_1[1] + -1;
  if ((int)(param_2 + 1) <= iVar6) {
    iVar6 = param_2 + 1;
  }
  uVar5 = 1;
  if (1 < (int)param_2) {
    uVar5 = (ulonglong)param_2;
  }
  lVar3 = *param_1;
  param_4[2] = *(double *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + (longlong)iVar6 * 0x18);
  dVar7 = pdVar1[1];
  *param_4 = *pdVar1;
  param_4[1] = dVar7;
  lVar3 = *param_1;
  param_3[2] = *(double *)(lVar3 + -8 + uVar5 * 0x18);
  pdVar1 = (double *)(lVar3 + -0x18 + uVar5 * 0x18);
  dVar7 = pdVar1[1];
  *param_3 = *pdVar1;
  param_3[1] = dVar7;
  lVar3 = *param_1;
  lVar4 = (longlong)(int)param_2 * 0x18;
  *param_4 = *param_4 - *(double *)(lVar3 + lVar4);
  param_4[1] = param_4[1] - *(double *)(lVar3 + 8 + lVar4);
  param_4[2] = param_4[2] - *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *param_1;
  *param_3 = *param_3 - *(double *)(lVar3 + lVar4);
  param_3[1] = param_3[1] - *(double *)(lVar3 + 8 + lVar4);
  param_3[2] = param_3[2] - *(double *)(lVar3 + 0x10 + lVar4);
  if (param_5 != '\0') {
    dVar7 = *param_4;
    dVar8 = param_4[1];
    dVar2 = param_4[2];
    dVar9 = SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar8 * dVar8);
    dVar10 = 1.0 / dVar9;
    if (0.0 < dVar9) {
      dVar7 = dVar7 * dVar10;
      dVar8 = dVar8 * dVar10;
    }
    else {
      dVar7 = 0.0;
      dVar8 = 0.0;
    }
    *param_4 = dVar7;
    param_4[1] = dVar8;
    param_4[2] = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar2 * dVar10));
    dVar7 = *param_3;
    dVar8 = param_3[1];
    dVar2 = param_3[2];
    dVar10 = SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar8 * dVar8);
    if (dVar10 <= 0.0) {
      *param_3 = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
    }
    else {
      dVar10 = 1.0 / dVar10;
      *param_3 = dVar7 * dVar10;
      param_3[1] = dVar8 * dVar10;
      param_3[2] = dVar2 * dVar10;
    }
  }
  return;
}



// FUNCTION 148349c2d FUN_148349c2d body=212 status=ok
// SIG undefined FUN_148349c2d(void)

ulonglong * FUN_148349c2d(ulonglong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar1 = (int)param_2[1];
  lVar2 = *param_2;
  lVar5 = (longlong)((param_3 + 1) % iVar1);
  lVar4 = (longlong)((param_3 + iVar1 + -1) % iVar1);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar5 * 0x18) - *(double *)(lVar2 + 0x10 + lVar4 * 0x18);
  dVar7 = *(double *)(lVar2 + 8 + lVar5 * 0x18) - *(double *)(lVar2 + 8 + lVar4 * 0x18);
  dVar8 = *(double *)(lVar2 + lVar5 * 0x18) - *(double *)(lVar2 + lVar4 * 0x18);
  dVar3 = SQRT(dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7);
  dVar9 = 0.0;
  dVar10 = 1.0 / dVar3;
  if (0.0 < dVar3) {
    dVar6 = dVar6 * dVar10;
    dVar9 = dVar7 * dVar10;
  }
  else {
    dVar6 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar3) & (ulonglong)(dVar8 * dVar10);
  param_1[1] = (ulonglong)dVar9;
  param_1[2] = (ulonglong)dVar6;
  return param_1;
}



// FUNCTION 148349d01 FUN_148349d01 body=211 status=ok
// SIG undefined FUN_148349d01(void)

void FUN_148349d01(ulonglong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar4 = (int)param_2[1] + -1;
  if ((int)(param_3 + 1) <= iVar4) {
    iVar4 = param_3 + 1;
  }
  uVar5 = 1;
  if (1 < (int)param_3) {
    uVar5 = (ulonglong)param_3;
  }
  lVar1 = *param_2;
  lVar3 = (longlong)iVar4;
  dVar6 = *(double *)(lVar1 + 0x10 + lVar3 * 0x18) - *(double *)(lVar1 + -8 + uVar5 * 0x18);
  dVar7 = *(double *)(lVar1 + 8 + lVar3 * 0x18) - *(double *)(lVar1 + -0x10 + uVar5 * 0x18);
  dVar10 = *(double *)(lVar1 + lVar3 * 0x18) - *(double *)(lVar1 + -0x18 + uVar5 * 0x18);
  dVar2 = SQRT(dVar6 * dVar6 + dVar10 * dVar10 + dVar7 * dVar7);
  dVar8 = 0.0;
  dVar9 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    dVar6 = dVar6 * dVar9;
    dVar8 = dVar7 * dVar9;
  }
  else {
    dVar6 = 0.0;
  }
  *param_1 = -(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar10 * dVar9);
  param_1[1] = (ulonglong)dVar8;
  param_1[2] = (ulonglong)dVar6;
  return;
}



// FUNCTION 148349dd4 FUN_148349dd4 body=38 status=ok
// SIG undefined FUN_148349dd4(void)

undefined8 FUN_148349dd4(undefined8 param_1,int param_2)

{
  FUN_14831cffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148349e7e FUN_148349e7e body=143 status=ok
// SIG undefined FUN_148349e7e(void)

longlong FUN_148349e7e(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_1482f5f8c(param_1);
  }
  FUN_148349f0e(param_1,param_2);
  FUN_14834a01c(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return param_1;
}



// FUNCTION 148349f0e FUN_148349f0e body=123 status=ok
// SIG undefined FUN_148349f0e(void)

undefined8 * FUN_148349f0e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148349f8a();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 148349f8a FUN_148349f8a body=146 status=ok
// SIG undefined FUN_148349f8a(void)

longlong * FUN_148349f8a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14834a01c FUN_14834a01c body=123 status=ok
// SIG undefined FUN_14834a01c(void)

undefined8 * FUN_14834a01c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14834a098();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14834a098 FUN_14834a098 body=146 status=ok
// SIG undefined FUN_14834a098(void)

longlong * FUN_14834a098(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14834a12a FUN_14834a12a body=522 status=ok
// SIG undefined FUN_14834a12a(void)

void FUN_14834a12a(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = *(int *)(param_1 + 0x1e0) * 0x200 + *(int *)(param_1 + 0x1e4);
  local_88 = 0;
  uStack_80 = 0;
  if (0 < (int)uVar7) {
    plVar1 = (longlong *)(param_1 + 0x10);
    uVar8 = 0;
    do {
      if ((int)uVar8 < *(int *)(param_1 + 0x1e0) * 0x200 + *(int *)(param_1 + 0x1e4)) {
        uVar4 = uVar8 & 0x1ff;
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x1e8) + (ulonglong)(uVar8 >> 9) * 8) +
                                (ulonglong)uVar4 * 2) - 1U) < 0xfffe) &&
           (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar8 >> 9) * 8),
           *(int *)(lVar9 + 0xc + (ulonglong)(uVar4 << 4)) != -1)) {
          uVar2 = *(ulonglong *)(lVar9 + (ulonglong)(uVar4 << 4));
          cVar3 = FUN_146c0b51e(plVar1,uVar2 & 0xffffffff);
          if (cVar3 != '\0') {
            cVar3 = FUN_146c0b51e(plVar1,uVar2 >> 0x20);
            if (cVar3 != '\0') {
              iVar5 = FUN_146be9b2a(param_1 + 0x230,uVar2 & 0xffffffff);
              iVar6 = FUN_146be9b2a(param_1 + 0x230,uVar2 >> 0x20);
              if (iVar6 != -1 && iVar5 != -1) {
                iVar5 = FUN_146c061e0(*(undefined8 *)(param_1 + 8),iVar5,iVar6);
                uVar2 = uStack_80;
                if (iVar5 != -1) {
                  lVar9 = (longlong)(int)uStack_80;
                  uVar4 = (int)uStack_80 + 1;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
                  if (uStack_80._4_4_ < uVar4) {
                    FUN_1446f48e2(&local_88,uVar2 & 0xffffffff);
                  }
                  *(uint *)(local_88 + lVar9 * 4) = uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
    if (0 < (int)uStack_80) {
      lVar9 = 0;
      do {
        local_c4 = 0xffffffff;
        uStack_c0 = 0xffffffff;
        uStack_bc = 0xffffffff;
        uStack_b8 = 0xffffffff;
        local_b4 = 0xffffffffffffffff;
        local_a4 = 0xffffffff;
        uStack_a0 = 0xffffffff;
        uStack_9c = 0xffffffff;
        uStack_98 = 0xffffffff;
        local_94 = 0xffffffff;
        (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(local_88 + lVar9 * 4),local_c8,0);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_80);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834a336 FUN_14834a336 body=38 status=ok
// SIG undefined FUN_14834a336(void)

undefined8 FUN_14834a336(undefined8 param_1,int param_2)

{
  FUN_14831e9f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834a362 FUN_14834a362 body=161 status=ok
// SIG undefined FUN_14834a362(void)

void FUN_14834a362(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x350);
  if (pcVar1 != (code *)0x0) {
    local_34 = *(undefined4 *)(param_5 + 0x20);
    plVar3 = (longlong *)(param_1 + 0x370);
    if (*(longlong **)(param_1 + 0x360) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x360);
    }
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = &local_34;
    (*pcVar1)(uVar2,&local_40,&local_3c,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834a404 FUN_14834a404 body=38 status=ok
// SIG undefined FUN_14834a404(void)

void FUN_14834a404(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1482fe62a(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14834a42a FUN_14834a42a body=47 status=ok
// SIG undefined FUN_14834a42a(void)

void FUN_14834a42a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14834a45a FUN_14834a45a body=38 status=ok
// SIG undefined FUN_14834a45a(void)

undefined8 FUN_14834a45a(undefined8 param_1,int param_2)

{
  FUN_1483660a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834a480 FUN_14834a480 body=608 status=ok
// SIG undefined FUN_14834a480(void)

void FUN_14834a480(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  uint local_74 [3];
  int local_68;
  uint local_64;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x248);
  uVar6 = 0;
  uVar8 = *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x1d8) - 1U)) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x1d8))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
  }
  if (uVar9 != uVar8) {
    local_80 = param_1 + 8;
    local_88 = param_1 + 0x118;
    local_90 = param_1 + 0xb8;
    uVar6 = 0;
    do {
      local_64 = uVar9;
      iVar1 = (**(code **)(*param_2 + 8))(param_2,uVar9);
      if (0 < iVar1) {
        local_98 = uVar6;
        FUN_1447cbafe(local_80,&local_60,&local_64,0);
        local_74[2] = (uint)local_98;
        local_58 = local_74 + 2;
        local_68 = iVar1;
        local_60 = &local_64;
        FUN_14834aa14(local_88,local_74,&local_60);
        iVar2 = (int)local_98;
        local_74[0] = local_64;
        local_74[1] = 0xffffffff;
        local_58 = local_74 + 2;
        local_74[2] = iVar2;
        local_68 = iVar1;
        local_60 = local_74;
        FUN_14834af3a(local_90,local_4c,&local_60);
        uVar6 = (ulonglong)(uint)(iVar2 + iVar1);
      }
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar4 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar3 + 0x1d8) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar8);
  }
  FUN_144a1a59e(param_1 + 0xa8,uVar6,1);
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar3 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0xa8) + lVar3 * 4) = *(int *)(param_1 + 0x250) + (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xb0));
  }
  FUN_1400bd09c(param_1 + 0x108,uVar6,1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834a6e2 FUN_14834a6e2 body=369 status=ok
// SIG undefined FUN_14834a6e2(void)

void FUN_14834a6e2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [44];
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = 0;
  if (*(int *)(param_1[0x49] + 0x140) * 0x200 + *(int *)(param_1[0x49] + 0x144) < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_64);
      if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_2 + 0x10))(param_2,local_64), 0 < iVar2))
      {
        local_60 = &local_64;
        local_6c = iVar4;
        local_68 = iVar2;
        local_58 = &local_6c;
        FUN_14834aa14(param_1 + 0x31,local_4c,&local_60,0);
        iVar4 = iVar4 + iVar2;
      }
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(param_1[0x49] + 0x140) * 0x200 + *(int *)(param_1[0x49] + 0x144));
  }
  FUN_144a1a59e(param_1 + 0x2d,iVar4,1);
  if ((longlong)(int)param_1[0x16] < 1) {
    iVar2 = (int)param_1[0x4a];
  }
  else {
    iVar2 = *(int *)(param_1[0x15] + -4 + (longlong)(int)param_1[0x16] * 4) + 1;
  }
  if (0 < (int)param_1[0x2e]) {
    lVar3 = 0;
    do {
      *(int *)(param_1[0x2d] + lVar3 * 4) = iVar2 + (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x2e]);
  }
  FUN_14051b394(param_1 + 0x2f,iVar4,1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834a854 FUN_14834a854 body=376 status=ok
// SIG undefined FUN_14834a854(void)

void FUN_14834a854(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [44];
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1[0x49] + 0x140) * 0x200 + *(int *)(param_1[0x49] + 0x144)) {
    iVar4 = 0;
    do {
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_64);
      if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_64), 0 < iVar2))
      {
        FUN_1447cbafe(param_1 + 0xb,&local_60,&local_64,0);
        local_58 = &local_6c;
        local_6c = iVar4;
        local_68 = iVar2;
        local_60 = &local_64;
        FUN_14834aa14(param_1 + 0x3f,local_4c,&local_60);
        iVar4 = iVar4 + iVar2;
      }
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(param_1[0x49] + 0x140) * 0x200 + *(int *)(param_1[0x49] + 0x144));
  }
  FUN_144a1a59e(param_1 + 0x3b,iVar4,1);
  if (0 < (int)param_1[0x3c]) {
    lVar3 = 0;
    do {
      *(int *)(param_1[0x3b] + lVar3 * 4) =
           *(int *)(param_1[0x49] + 0x140) * 0x200 + *(int *)(param_1[0x49] + 0x144) + (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x3c]);
  }
  FUN_146bd783c(param_1 + 0x3d,iVar4,1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834aa14 FUN_14834aa14 body=307 status=ok
// SIG undefined FUN_14834aa14(void)

undefined4 *
FUN_14834aa14(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14834ab48(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 1) = *puVar1;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14834ac2e(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14834ad96(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834ab48 FUN_14834ab48 body=230 status=ok
// SIG undefined FUN_14834ab48(void)

int * FUN_14834ab48(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14834ac2e FUN_14834ac2e body=154 status=ok
// SIG undefined FUN_14834ac2e(void)

void FUN_14834ac2e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_14834acc8(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_14834ac98;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_14834ac98:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 14834acc8 FUN_14834acc8 body=138 status=ok
// SIG undefined FUN_14834acc8(void)

void FUN_14834acc8(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14834ad52 FUN_14834ad52 body=68 status=ok
// SIG undefined FUN_14834ad52(void)

void FUN_14834ad52(longlong param_1,uint param_2)

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
  FUN_14834ad96(param_1);
  return;
}



// FUNCTION 14834ad96 FUN_14834ad96 body=419 status=ok
// SIG undefined FUN_14834ad96(void)

void FUN_14834ad96(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x14);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 14834af3a FUN_14834af3a body=307 status=ok
// SIG undefined FUN_14834af3a(void)

undefined4 * FUN_14834af3a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14834b06e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_1448eb174(local_40,8,0);
  cVar3 = FUN_14834b154(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14834b24e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834b06e FUN_14834b06e body=230 status=ok
// SIG undefined FUN_14834b06e(void)

int * FUN_14834b06e(longlong *param_1,int *param_2)

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



// FUNCTION 14834b154 FUN_14834b154 body=136 status=ok
// SIG undefined FUN_14834b154(void)

undefined8 FUN_14834b154(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18) == param_3[1])
           ) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14834b1dc(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14834b1dc FUN_14834b1dc body=114 status=ok
// SIG undefined FUN_14834b1dc(void)

void FUN_14834b1dc(longlong *param_1,int param_2)

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



// FUNCTION 14834b24e FUN_14834b24e body=446 status=ok
// SIG undefined FUN_14834b24e(void)

void FUN_14834b24e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834b40e FUN_14834b40e body=52 status=ok
// SIG undefined FUN_14834b40e(void)

void FUN_14834b40e(longlong *param_1)

{
  FUN_14834b442();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14834b442 FUN_14834b442 body=89 status=ok
// SIG undefined FUN_14834b442(void)

void FUN_14834b442(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 14834b49c FUN_14834b49c body=52 status=ok
// SIG undefined FUN_14834b49c(void)

void FUN_14834b49c(longlong *param_1)

{
  FUN_14834b4d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14834b4d0 FUN_14834b4d0 body=89 status=ok
// SIG undefined FUN_14834b4d0(void)

void FUN_14834b4d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14834b52a FUN_14834b52a body=103 status=ok
// SIG undefined FUN_14834b52a(void)

void FUN_14834b52a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_14834b592(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14834b592 FUN_14834b592 body=96 status=ok
// SIG undefined FUN_14834b592(void)

void FUN_14834b592(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 14834b5f2 FUN_14834b5f2 body=52 status=ok
// SIG undefined FUN_14834b5f2(void)

void FUN_14834b5f2(longlong *param_1)

{
  FUN_14834b626();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14834b626 FUN_14834b626 body=313 status=ok
// SIG undefined FUN_14834b626(void)

void FUN_14834b626(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834b760 FUN_14834b760 body=437 status=ok
// SIG undefined FUN_14834b760(void)

ulonglong FUN_14834b760(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_78 = 0;
  uStack_70 = 0;
  lVar5 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar5;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 == iVar7) && (uStack_60 == lVar5)) {
    uVar6 = 0;
  }
  else {
    do {
      uVar2 = *(undefined4 *)(*local_a0 + (longlong)iStack_84 * 0xc);
      cVar3 = FUN_14834bb5a(param_1,uVar2,param_2);
      uVar6 = uStack_70;
      if (cVar3 != '\0') {
        lVar9 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_1446f48e2(&local_78,uVar6 & 0xffffffff);
        }
        *(undefined4 *)(local_78 + lVar9 * 4) = uVar2;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar9 = local_78;
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar5 || iStack_84 != iVar7));
    lVar5 = (longlong)(int)uStack_70;
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      lVar8 = 0;
      do {
        FUN_144a7cc9e(plVar1,*(undefined4 *)(lVar9 + lVar8));
        lVar8 = lVar8 + 4;
      } while (lVar5 * 4 != lVar8);
      uVar6 = CONCAT71((int7)((ulonglong)plVar1 >> 8),0 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834b916 FUN_14834b916 body=578 status=ok
// SIG undefined FUN_14834b916(void)

ulonglong FUN_14834b916(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  uint local_68 [2];
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 1;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = param_1 + 3;
  local_68[0] = 0;
  local_68[1] = 1;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_a8;
  if (*(int *)(param_1 + 6) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(local_68);
    iVar11 = *(int *)(param_1 + 6);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = local_68[0];
  uStack_94 = local_68[1];
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 == iVar11) && (uStack_60 == local_a8)) {
    uVar7 = 0;
  }
  else {
    do {
      FUN_146c03f0e(*param_1,local_68,*(undefined4 *)(*local_a0 + (longlong)iStack_84 * 0xc));
      lVar10 = 0;
      do {
        uVar2 = local_68[lVar10];
        if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
          puVar5 = (undefined8 *)param_1[9];
          if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
            puVar5 = param_1 + 8;
          }
          iVar6 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar2) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*plVar1 + (longlong)iVar6 * 0xc) == uVar2) goto LAB_14834ba91;
              iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0xc + 4);
            } while (iVar6 != -1);
          }
        }
        cVar3 = FUN_14834bd02(param_1,uVar2,param_2);
        uVar7 = uStack_70;
        if (cVar3 != '\0') {
          lVar9 = (longlong)(int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_1446f48e2(&local_78,uVar7 & 0xffffffff);
          }
          *(uint *)(local_78 + lVar9 * 4) = uVar2;
        }
LAB_14834ba91:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar10 = local_78;
    } while (local_a0 != plVar1 ||
             ((undefined8 *)CONCAT44(uStack_8c,uStack_90) != local_a8 || iStack_84 != iVar11));
    lVar9 = (longlong)(int)uStack_70;
    if (lVar9 == 0) {
      uVar7 = 0;
    }
    else {
      lVar8 = 0;
      do {
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar10 + lVar8));
        FUN_1447cbafe(plVar1,local_68,&local_a0,0);
        lVar8 = lVar8 + 4;
      } while (lVar9 * 4 != lVar8);
      uVar7 = CONCAT71((int7)((ulonglong)plVar1 >> 8),0 < (int)uStack_70);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834bb5a FUN_14834bb5a body=204 status=ok
// SIG undefined FUN_14834bb5a(void)

byte FUN_14834bb5a(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0xc) == (uint)param_2) {
          local_38 = local_2c;
          FUN_14834bc28(param_1,param_2,&local_24,&local_28);
          bVar1 = 1;
          if (local_28 != 2 || local_24 != 1) {
            bVar1 = local_28 == 3 & local_24 == 0 & param_3;
          }
          goto LAB_14834bbbf;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  bVar1 = 0;
LAB_14834bbbf:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834bc28 FUN_14834bc28 body=216 status=ok
// SIG undefined FUN_14834bc28(void)

void FUN_14834bc28(undefined8 *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  uint local_34 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146c03f0e(*param_1,local_34,param_2);
  lVar2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  do {
    uVar1 = local_34[lVar2];
    piVar3 = param_5;
    if ((uVar1 != 0xffffffff) &&
       (piVar3 = param_4, *(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c))) {
      puVar4 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar4 = param_1 + 8;
      }
      iVar5 = *(int *)((longlong)puVar4 + (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar1) * 4);
      if (iVar5 != -1) {
        do {
          piVar3 = param_3;
          if (*(uint *)(param_1[1] + (longlong)iVar5 * 0xc) == uVar1) break;
          iVar5 = *(int *)(param_1[1] + (longlong)iVar5 * 0xc + 4);
          piVar3 = param_4;
        } while (iVar5 != -1);
      }
    }
    *piVar3 = *piVar3 + 1;
    lVar2 = lVar2 + 1;
    if (lVar2 == 3) {
      if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14834bd02 FUN_14834bd02 body=213 status=ok
// SIG undefined FUN_14834bd02(void)

undefined8 FUN_14834bd02(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0xc) == (uint)param_2)
        goto LAB_14834bdb7;
        iVar3 = *(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  local_38 = &local_2c;
  FUN_14834bc28(param_1,param_2,&local_24,&local_28);
  uVar2 = 1;
  if (local_24 != 1 || local_2c != 2) {
    if (local_24 == 2) {
      if ((local_2c == 1) || (local_28 == 1)) goto LAB_14834bdb9;
    }
    else if ((param_3 & local_24 == 3) != 0) goto LAB_14834bdb9;
LAB_14834bdb7:
    uVar2 = 0;
  }
LAB_14834bdb9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14834bdd8 FUN_14834bdd8 body=171 status=ok
// SIG undefined FUN_14834bdd8(void)

void FUN_14834bdd8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  
  *param_1 = param_2;
  iVar2 = param_2 + 0x3f;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar1 = (iVar2 >> 6) + 1;
  _Dst = *(void **)(param_1 + 6);
  if (param_1[8] <= iVar2 >> 6) {
    if (_Dst != (void *)0x0) {
      thunk_FUN_1400020a8();
    }
    param_1[8] = iVar1;
    lVar3 = -1;
    if (-0x80 < param_2) {
      lVar3 = (longlong)iVar1 << 3;
    }
    _Dst = (void *)FUN_144a7d36f(lVar3);
    *(void **)(param_1 + 6) = _Dst;
  }
  memset(_Dst,0,(longlong)(iVar1 * 8));
  param_1[4] = 0;
  if (param_1[5] < 0) {
    FUN_14481578e(param_1 + 2,0);
  }
  if (-1 < param_3) {
    if (param_1[5] < param_3) {
      FUN_14481578e(param_1 + 2,param_3);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 14834be84 FUN_14834be84 body=133 status=ok
// SIG undefined FUN_14834be84(void)

bool FUN_14834be84(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = param_2 + 0x3f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar4 = 1L << ((byte)param_2 & 0x3f);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)((int)uVar3 >> 6) * 8);
  if ((uVar2 >> ((ulonglong)param_2 & 0x3f) & 1) == 0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)((int)uVar3 >> 6) * 8) = uVar2 | uVar4;
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 8),iVar1);
    }
    *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4) = param_2;
  }
  return (uVar2 & uVar4) == 0;
}



// FUNCTION 14834bf0a FUN_14834bf0a body=217 status=ok
// SIG undefined FUN_14834bf0a(void)

void FUN_14834bf0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1400bac10(param_2,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar2)) {
      *(int *)(param_2 + 0x48) = iVar2;
      FUN_144a56d22(param_2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      local_3c = *(undefined4 *)(lVar1 + lVar4);
      FUN_1447cbafe(param_2,local_40,&local_3c,0);
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar2 * 4 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834bfee FUN_14834bfee body=217 status=ok
// SIG undefined FUN_14834bfee(void)

void FUN_14834bfee(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [7];
  char local_25;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_25 = '\0';
  local_24 = param_2;
  FUN_1447cbafe(lVar2 + 0x2f0,local_2c,&local_24,&local_25);
  if (local_25 == '\x01') {
    uVar3 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(local_24 >> 9) * 8) +
             (ulonglong)((local_24 & 0x1ff) << 4));
    uVar4 = uVar3 >> 0x20;
    if ((int)param_1[2] != (int)uVar3) {
      uVar4 = uVar3;
    }
    FUN_14834be84(lVar2 + 0x3f8,uVar4 & 0xffffffff);
    iVar1 = *(int *)(lVar2 + 0x398);
    *(uint *)(lVar2 + 0x398) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x39c) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(lVar2 + 0x390),iVar1);
    }
    *(uint *)(*(longlong *)(lVar2 + 0x390) + (longlong)iVar1 * 4) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834c0d0 FUN_14834c0d0 body=98 status=ok
// SIG undefined FUN_14834c0d0(void)

void FUN_14834c0d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*param_1 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
            8 + (ulonglong)((param_2 & 0x1ff) << 4)) >> 0x20;
  lVar1 = *param_1 + 0x420;
  FUN_14834be84(lVar1);
  if (uVar2 == 0xffffffff) {
    return;
  }
  FUN_14834be84(lVar1,uVar2);
  return;
}



// FUNCTION 14834c132 FUN_14834c132 body=122 status=ok
// SIG undefined FUN_14834c132(void)

void FUN_14834c132(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      uVar2 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(*(uint *)(lVar1 + lVar4) >> 9) * 8)
               + (ulonglong)((*(uint *)(lVar1 + lVar4) & 0x1ff) << 4));
      FUN_144a7cc9e(param_1 + 1,uVar2);
      FUN_144a7cc9e(param_1 + 1,uVar2 >> 0x20);
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  return;
}



// FUNCTION 14834c1ac FUN_14834c1ac body=350 status=ok
// SIG undefined FUN_14834c1ac(void)

undefined8 * FUN_14834c1ac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = param_2;
  FUN_14834c738(param_1 + 1);
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x654) = 1;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x6c4) = 1;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[1] = param_2;
  FUN_1482fe1c4(param_1 + 1,param_3,0xf);
  uVar1 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  iVar2 = *(int *)(param_1 + 0xdb);
  *(uint *)(param_1 + 0xdb) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0x6dc) - iVar2) < uVar1) {
    FUN_1446f48e2(param_1 + 0xda,iVar2);
  }
  else if (uVar1 == 0) {
    return param_1;
  }
  memcpy((void *)((longlong)iVar2 * 4 + param_1[0xda]),_Src,(longlong)(int)uVar1 << 2);
  return param_1;
}



// FUNCTION 14834c30a FUN_14834c30a body=1003 status=ok
// SIG undefined FUN_14834c30a(void)

void FUN_14834c30a(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  undefined8 *local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  if ((char)param_1[0x10] == '\x01') {
    local_e8 = CONCAT71((int7)((ulonglong)param_1[1] >> 8),*(undefined1 *)(param_1[1] + 0x70));
  }
  uVar13 = (int)param_1[6] * 0x200 + *(int *)((longlong)param_1 + 0x34);
  uVar14 = 0;
  if ((uVar13 != 0) && (uVar14 = 0, 0xfffd < (ushort)(**(short **)param_1[7] - 1U))) {
    uVar8 = 1;
    uVar10 = 1;
    if (1 < (int)uVar13) {
      uVar8 = uVar13;
    }
    do {
      uVar14 = uVar8;
      if (uVar8 == uVar10) break;
      uVar12 = uVar10 >> 9;
      uVar15 = uVar10 & 0x1ff;
      uVar14 = uVar10;
      uVar10 = uVar10 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[7])[uVar12] + (ulonglong)uVar15 * 2
                                         ) - 1U));
  }
  if (uVar14 != uVar13) {
    do {
      uVar8 = FUN_146be9b2a(param_1 + 0x46,uVar14);
      lVar3 = *(longlong *)(param_1[4] + (ulonglong)(uVar14 >> 9) * 8);
      uVar11 = (ulonglong)(uVar14 & 0x1ff);
      local_88[0] = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
      plVar1 = (longlong *)(lVar3 + uVar11 * 0x18);
      local_98 = *plVar1;
      uStack_90 = plVar1[1];
      lVar3 = *param_1;
      cVar7 = FUN_146bfed03(&local_98);
      if (cVar7 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar8 & 0x1ff) * 0x18) = local_88[0];
        puVar2 = (undefined4 *)(lVar4 + (ulonglong)(uVar8 & 0x1ff) * 0x18);
        *puVar2 = (undefined4)local_98;
        puVar2[1] = local_98._4_4_;
        puVar2[2] = (undefined4)uStack_90;
        puVar2[3] = uStack_90._4_4_;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if ((char)local_e8 != '\0') {
        local_e0 = (longlong *)DAT_14c846370;
        uVar5 = DAT_14c846378;
        if ((char)param_1[0x10] != '\0') {
          lVar3 = *(longlong *)(param_1[0xe] + (ulonglong)(uVar14 >> 9) * 8);
          local_e0 = (longlong *)*(undefined8 *)(lVar3 + uVar11 * 0xc);
          uVar5 = *(undefined4 *)(lVar3 + 8 + uVar11 * 0xc);
        }
        local_d8 = (double)CONCAT44(local_d8._4_4_,uVar5);
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (ulonglong)(uVar8 >> 9) * 8);
          *(undefined4 *)(lVar3 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc) = uVar5;
          *(longlong **)(lVar3 + (ulonglong)(uVar8 & 0x1ff) * 0xc) = local_e0;
        }
      }
      uVar8 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar13) {
        uVar8 = uVar13;
      }
      do {
        uVar10 = uVar8;
        if (uVar8 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar10 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[7] + (ulonglong)(uVar14 >> 9) * 8)
                                           + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar10;
    } while (uVar14 != uVar13);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145c3f772(&local_98,param_1 + 0xb2);
  local_b8 = 2.12199579096527e-314;
  local_a8 = 2.12199579047121e-314;
  local_a0 = 0;
  iVar16 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar16 = local_70;
  }
  local_c8 = local_a8;
  dVar6 = local_c8;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_e0 = &local_98;
  if ((local_c8._4_4_ != iVar16) || (local_b0 != local_88)) {
    iVar9 = local_c8._4_4_;
    local_c8 = dVar6;
    do {
      uVar14 = *(uint *)(*local_e0 + (longlong)iVar9 * 0xc);
      local_f8 = 1;
      FUN_146c393d4(&local_b8,*param_1,uVar14,1);
      if (*(char *)(*param_1 + 0x70) == '\x01') {
        lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (ulonglong)(uVar14 >> 9) * 8);
        uVar11 = (ulonglong)(uVar14 & 0x1ff);
        *(float *)(lVar3 + uVar11 * 0xc) = (float)local_b8;
        *(float *)(lVar3 + 4 + uVar11 * 0xc) = (float)(double)local_b0;
        *(float *)(lVar3 + 8 + uVar11 * 0xc) = (float)local_a8;
      }
      local_c8 = (double)CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
      FUN_1449c0562(&local_d8);
      iVar9 = local_c8._4_4_;
      dVar6 = local_c8;
    } while (local_e0 != &local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar16));
  }
  local_c8 = dVar6;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834c6f6 FUN_14834c6f6 body=66 status=ok
// SIG undefined FUN_14834c6f6(void)

void FUN_14834c6f6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FUN_1400020a8();
  }
  FUN_14834c810(param_1 + 0x658);
  FUN_14834c810(param_1 + 0x5e8);
  FUN_1482e1868(param_1 + 8);
  return;
}



// FUNCTION 14834c738 FUN_14834c738 body=216 status=ok
// SIG undefined FUN_14834c738(void)

undefined8 * FUN_14834c738(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1411b354a(param_1 + 1,0,0,0,0);
  FUN_146bfde60(param_1 + 0x45);
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 1;
  return param_1;
}



// FUNCTION 14834c810 FUN_14834c810 body=69 status=ok
// SIG undefined FUN_14834c810(void)

void FUN_14834c810(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14834c856 FUN_14834c856 body=581 status=ok
// SIG undefined FUN_14834c856(void)

void FUN_14834c856(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined4 local_98 [2];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 0x2f0;
  FUN_1402226aa(lVar1);
  lVar2 = param_1 + 0x2a0;
  FUN_1402226aa(lVar2);
  plVar3 = (longlong *)(param_1 + 0x340);
  FUN_145c3f772(plVar3,param_2);
  lVar4 = param_1 + 0x350;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar4;
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x368);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar3;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar4)) {
    do {
      local_a8 = iVar8;
      uVar5 = *(uint *)(*local_90 + (longlong)iStack_74 * 0xc);
      uVar9 = (ulonglong)(uVar5 >> 9);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + uVar9 * 8);
      lVar7 = (ulonglong)((uVar5 & 0x1ff) << 2) * 3;
      uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar6 + 8 + lVar7));
      local_68 = *(undefined8 *)(lVar6 + lVar7);
      FUN_1447cbafe(lVar2,&local_a0,&local_68,0);
      FUN_1447cbafe(lVar2,&local_a0,(longlong)&local_68 + 4,0);
      FUN_1447cbafe(lVar2,&local_a0,&uStack_60,0);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x180) + uVar9 * 8);
      local_98[0] = *(undefined4 *)(lVar6 + 8 + lVar7);
      local_a0 = *(undefined8 *)(lVar6 + lVar7);
      FUN_1447cbafe(lVar1,local_a4,&local_a0,0);
      FUN_1447cbafe(lVar1,local_a4,(longlong)&local_a0 + 4,0);
      FUN_1447cbafe(lVar1,local_a4,local_98,0);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      iVar8 = local_a8;
    } while (local_90 != plVar3 || (CONCAT44(uStack_7c,uStack_80) != lVar4 || iStack_74 != local_a8)
            );
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834ca9c FUN_14834ca9c body=38 status=ok
// SIG undefined FUN_14834ca9c(void)

undefined8 FUN_14834ca9c(undefined8 param_1,int param_2)

{
  FUN_1483323a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834cac2 FUN_14834cac2 body=359 status=ok
// SIG undefined FUN_14834cac2(void)

void FUN_14834cac2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong in_stack_00000028;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  uint local_3c;
  uint local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447cbafe(param_1 + 0x2a0,local_38,in_stack_00000028 + 0x20,0);
  lVar3 = param_1 + 0x2f0;
  FUN_1447cbafe(lVar3,local_38,in_stack_00000028 + 0x2c,0);
  cVar2 = FUN_14834d114(param_1,*(undefined4 *)(in_stack_00000028 + 0x30));
  if (cVar2 != '\0') {
    FUN_1447cbafe(lVar3,local_38,in_stack_00000028 + 0x30,0);
  }
  if (*(int *)(in_stack_00000028 + 0x34) != -1) {
    cVar2 = FUN_14834d114(param_1);
    if (cVar2 != '\0') {
      FUN_1447cbafe(lVar3,local_38,in_stack_00000028 + 0x34,0);
    }
  }
  local_38[0] = *(uint *)(in_stack_00000028 + 0x24);
  local_38[1] = *(undefined4 *)(in_stack_00000028 + 0x28);
  lVar3 = 0;
  do {
    local_3c = *(uint *)((longlong)local_38 + lVar3);
    if (((-1 < (int)local_3c) &&
        (lVar1 = *(longlong *)(param_1 + 8),
        (int)local_3c < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar1 + 0x148) + (ulonglong)(local_3c >> 9) * 8) +
                           (ulonglong)(local_3c & 0x1ff) * 2) - 1U) < 0xfffe)) {
      cVar2 = FUN_14834d1da(param_1);
      if (cVar2 != '\0') {
        FUN_1447cbafe(param_1 + 0x340,local_40,&local_3c,0);
      }
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834cc2a FUN_14834cc2a body=220 status=ok
// SIG undefined FUN_14834cc2a(void)

void FUN_14834cc2a(longlong param_1)

{
  longlong in_stack_00000028;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a7cc9e(param_1 + 0x340,*(undefined4 *)(in_stack_00000028 + 0x18));
  if (*(char *)(param_1 + 0x448) == '\x01') {
    FUN_1447cbafe(param_1 + 0x3a8,local_24,in_stack_00000028 + 0x18,0);
  }
  if (*(int *)(in_stack_00000028 + 0x1c) != -1) {
    FUN_144a7cc9e(param_1 + 0x340);
    if (*(char *)(param_1 + 0x448) == '\x01') {
      FUN_1447cbafe(param_1 + 0x3a8,local_24,in_stack_00000028 + 0x1c,0);
    }
  }
  FUN_144a7cc9e(param_1 + 0x2a0,*(undefined4 *)(in_stack_00000028 + 4));
  param_1 = param_1 + 0x2f0;
  FUN_144a7cc9e(param_1,*(undefined4 *)(in_stack_00000028 + 0x14));
  FUN_144a7cc9e(param_1,*(undefined4 *)(in_stack_00000028 + 0x20));
  if (*(int *)(in_stack_00000028 + 0x24) != -1) {
    FUN_144a7cc9e(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834cd08 FUN_14834cd08 body=126 status=ok
// SIG undefined FUN_14834cd08(void)

void FUN_14834cd08(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447cbafe(param_1 + 0x2f0,local_1c,param_3,0);
  FUN_1447cbafe(param_1 + 0x340,local_1c,param_3 + 0x14,0);
  FUN_1447cbafe(param_1 + 0x340,local_1c,param_3 + 0x18,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834cdac FUN_14834cdac body=200 status=ok
// SIG undefined FUN_14834cdac(void)

undefined4 FUN_14834cdac(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x3a0);
  iVar5 = iVar4 + 1;
  *(int *)(param_1 + 0x3a0) = iVar5;
  if (iVar5 < *(int *)(param_1 + 0x398)) {
    lVar2 = (longlong)iVar4 + 1;
    do {
      if (*(int *)(param_1 + 0x2f8) != *(int *)(param_1 + 0x324)) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x390) + lVar2 * 4);
        lVar3 = *(longlong *)(param_1 + 0x330);
        if (*(longlong *)(param_1 + 0x330) == 0) {
          lVar3 = param_1 + 0x328;
        }
        iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x338) - 1U & uVar1) * 4);
        if (iVar4 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar4 * 0xc) == uVar1) {
              *param_3 = 0;
              return *(undefined4 *)
                      (*(longlong *)(param_1 + 0x390) + (longlong)*(int *)(param_1 + 0x3a0) * 4);
            }
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar4 * 0xc + 4);
          } while (iVar4 != -1);
        }
      }
      lVar2 = lVar2 + 1;
      *(int *)(param_1 + 0x3a0) = (int)lVar2;
    } while (*(int *)(param_1 + 0x398) != (int)lVar2);
  }
  *param_3 = 1;
  return 0xffffffff;
}



// FUNCTION 14834ce74 FUN_14834ce74 body=669 status=ok
// SIG undefined FUN_14834ce74(void)

void FUN_14834ce74(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined8 *local_d8;
  longlong *local_c8;
  longlong **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  longlong **local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  longlong alStack_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar6 = param_1 + 0x8b;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(int *)((longlong)param_1 + 0x464) < 0) {
    FUN_14481578e(plVar6,0);
  }
  iVar7 = (int)param_1[0x55] - *(int *)((longlong)param_1 + 0x2d4);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)((longlong)param_1 + 0x464) < iVar7) {
    FUN_14481578e(plVar6);
  }
  plVar1 = param_1 + 0x54;
  plVar2 = param_1 + 0x56;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  uStack_a0 = 0;
  uStack_b0 = plVar2;
  if ((int)param_1[0x59] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar7 = (int)param_1[0x59];
  }
  alStack_68[0] = CONCAT44(uStack_9c,uStack_a0);
  local_70 = local_a8;
  iStack_6c = iStack_a4;
  local_80 = (undefined4)local_b8;
  uStack_7c = local_b8._4_4_;
  uStack_78 = (undefined4)uStack_b0;
  uStack_74 = uStack_b0._4_4_;
  local_88 = plVar1;
  if ((iStack_a4 != iVar7) || (uStack_b0 != plVar2)) {
    do {
      uVar4 = *(undefined4 *)(*local_88 + (longlong)iStack_6c * 0xc);
      iVar5 = (int)param_1[0x8c];
      *(uint *)(param_1 + 0x8c) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x464) < iVar5 + 1U) {
        FUN_1446f48e2(plVar6,iVar5);
      }
      *(undefined4 *)(*plVar6 + (longlong)iVar5 * 4) = uVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
  }
  uVar4 = (undefined4)param_1[0x8c];
  FUN_14051b394(param_1 + 0x8d,uVar4,0);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_88);
  local_b8 = 0;
  uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
  local_98 = &LAB_14834d2d2;
  local_e0 = 0;
  local_d8 = &local_b8;
  local_c8 = param_1;
  local_c0 = &local_88;
  local_90 = &local_c8;
  FUN_1401f8d10(L"ParallelFor Task",uVar4,1,&local_98);
  local_b8 = 0;
  uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
  local_98 = &LAB_14834d3c8;
  local_e0 = 0;
  local_d8 = &local_b8;
  local_c8 = param_1;
  local_90 = &local_c8;
  FUN_1401f8d10(L"ParallelFor Task",uVar4,1,&local_98);
  if (*(char *)(param_1[1] + 0x210) == '\x01') {
    LOCK();
    piVar3 = (int *)(param_1[1] + 0x214);
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  if (local_88 != (longlong *)0x0) {
    plVar6 = (longlong *)CONCAT44(uStack_74,uStack_78);
    if ((longlong *)CONCAT44(uStack_74,uStack_78) == (longlong *)0x0) {
      plVar6 = alStack_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d114 FUN_14834d114 body=198 status=ok
// SIG undefined FUN_14834d114(void)

undefined8 FUN_14834d114(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
    uVar3 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    lVar2 = param_1 + 0x2d8;
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x2e0);
    }
    uVar5 = *(int *)(param_1 + 0x2e8) - 1;
    uVar4 = (uint)uVar3;
    iVar6 = *(int *)(lVar2 + (ulonglong)(uVar5 & uVar4) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x2a0);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar6 * 0xc) == uVar4) {
          uVar4 = (uint)((ulonglong)uVar3 >> 0x20);
          iVar6 = *(int *)(lVar2 + (ulonglong)(uVar5 & uVar4) * 4);
          if (iVar6 == -1) {
            return 0;
          }
          do {
            bVar7 = *(uint *)(lVar1 + (longlong)iVar6 * 0xc) == uVar4;
            uVar3 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
            if (bVar7) {
              return uVar3;
            }
            iVar6 = *(int *)(lVar1 + (longlong)iVar6 * 0xc + 4);
          } while (iVar6 != -1);
          return uVar3;
        }
        iVar6 = *(int *)(lVar1 + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14834d1da FUN_14834d1da body=248 status=ok
// SIG undefined FUN_14834d1da(void)

undefined8 FUN_14834d1da(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 0x2f8) != *(int *)(param_1 + 0x324)) {
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x180) + (ulonglong)(param_2 >> 9) * 8);
    uVar7 = (ulonglong)(param_2 & 0x1ff);
    uVar1 = *(uint *)(lVar4 + uVar7 * 0xc);
    lVar5 = param_1 + 0x328;
    if (*(longlong *)(param_1 + 0x330) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x330);
    }
    uVar9 = *(int *)(param_1 + 0x338) - 1;
    iVar8 = *(int *)(lVar5 + (ulonglong)(uVar9 & uVar1) * 4);
    if (iVar8 != -1) {
      uVar2 = *(uint *)(lVar4 + 4 + uVar7 * 0xc);
      uVar3 = *(uint *)(lVar4 + 8 + uVar7 * 0xc);
      lVar4 = *(longlong *)(param_1 + 0x2f0);
      do {
        if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar1) {
          iVar8 = *(int *)(lVar5 + (ulonglong)(uVar9 & uVar2) * 4);
          while( true ) {
            if (iVar8 == -1) {
              return 0;
            }
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar2) break;
            iVar8 = *(int *)(lVar4 + (longlong)iVar8 * 0xc + 4);
          }
          iVar8 = *(int *)(lVar5 + (ulonglong)(uVar9 & uVar3) * 4);
          if (iVar8 == -1) {
            return 0;
          }
          do {
            bVar10 = *(uint *)(lVar4 + (longlong)iVar8 * 0xc) == uVar3;
            uVar6 = CONCAT71((int7)(int3)((uint)iVar8 >> 8),bVar10);
            if (bVar10) {
              return uVar6;
            }
            iVar8 = *(int *)(lVar4 + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
          return uVar6;
        }
        iVar8 = *(int *)(lVar4 + (longlong)iVar8 * 0xc + 4);
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 14834d2da FUN_14834d2da body=236 status=ok
// SIG undefined FUN_14834d2da(void)

void FUN_14834d2da(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char local_79;
  longlong local_78 [2];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)*param_1;
  lVar7 = (longlong)param_2;
  uVar5 = *(undefined4 *)(plVar2[0x8b] + lVar7 * 4);
  local_79 = '\0';
  plVar3 = (longlong *)param_1[1];
  local_78[0] = *plVar3;
  local_68[0] = 0;
  if (local_78[0] != 0) {
    plVar6 = plVar3 + 4;
    if ((longlong *)plVar3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[2];
    }
    (**(code **)*plVar6)(plVar6,local_68);
  }
  local_a8 = &local_79;
  (**(code **)(*plVar2 + 0x90))(plVar2,&local_98,uVar5,local_78);
  lVar4 = plVar2[0x8d];
  *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18) = local_88;
  puVar1 = (undefined4 *)(lVar4 + lVar7 * 0x18);
  *puVar1 = local_98;
  puVar1[1] = uStack_94;
  puVar1[2] = uStack_90;
  puVar1[3] = uStack_8c;
  uVar5 = 0xffffffff;
  if (local_79 == '\x01') {
    uVar5 = *(undefined4 *)(plVar2[0x8b] + lVar7 * 4);
  }
  *(undefined4 *)(plVar2[0x8b] + lVar7 * 4) = uVar5;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d3d0 FUN_14834d3d0 body=108 status=ok
// SIG undefined FUN_14834d3d0(void)

void FUN_14834d3d0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  
  lVar3 = *param_1;
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x458) + (longlong)param_2 * 4);
  if (-1 < (int)uVar2) {
    lVar4 = *(longlong *)(lVar3 + 8);
    puVar7 = (undefined8 *)((longlong)param_2 * 0x18 + *(longlong *)(lVar3 + 0x468));
    cVar6 = FUN_146bfed03(puVar7);
    if (cVar6 != '\0') {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18) = puVar7[2];
      uVar5 = puVar7[1];
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
      *puVar1 = *puVar7;
      puVar1[1] = uVar5;
    }
  }
  return;
}



// FUNCTION 14834d43c FUN_14834d43c body=38 status=ok
// SIG undefined FUN_14834d43c(void)

undefined8 FUN_14834d43c(undefined8 param_1,int param_2)

{
  FUN_1483323a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834d462 FUN_14834d462 body=247 status=ok
// SIG undefined FUN_14834d462(void)

void FUN_14834d462(longlong param_1)

{
  longlong lVar1;
  longlong in_stack_00000028;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447cbafe(param_1 + 0x2a0,local_2c,in_stack_00000028 + 0x20,0);
  lVar1 = param_1 + 0x2f0;
  FUN_1447cbafe(lVar1,local_2c,in_stack_00000028 + 0x2c,0);
  FUN_1447cbafe(lVar1,local_2c,in_stack_00000028 + 0x30,0);
  FUN_14834d6f2(param_1,*(undefined4 *)(in_stack_00000028 + 0x30));
  if (*(int *)(in_stack_00000028 + 0x34) != -1) {
    FUN_1447cbafe(lVar1,local_2c,(undefined4 *)(in_stack_00000028 + 0x34),0);
    FUN_14834d6f2(param_1,*(undefined4 *)(in_stack_00000028 + 0x34));
  }
  FUN_1447cbafe(param_1 + 0x340,local_2c,in_stack_00000028 + 0x24,0);
  if (*(int *)(in_stack_00000028 + 0x28) != -1) {
    FUN_1447cbafe(param_1 + 0x340,local_2c,in_stack_00000028 + 0x28,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d55a FUN_14834d55a body=226 status=ok
// SIG undefined FUN_14834d55a(void)

void FUN_14834d55a(longlong param_1,uint param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(ulonglong *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8)
              + (ulonglong)((param_2 & 0x1ff) << 4));
  FUN_1447cbafe(param_1 + 0x2a0,&local_48,&local_58,0);
  FUN_1447cbafe(param_1 + 0x2a0,&local_48,(longlong)&local_58 + 4,0);
  local_48 = FUN_14834d79a;
  local_50 = param_1;
  local_40 = &local_50;
  FUN_146c03fd0(*(undefined8 *)(param_1 + 8),local_58 & 0xffffffff,&local_48);
  local_48 = FUN_14834d79a;
  local_50 = param_1;
  local_40 = &local_50;
  FUN_146c03fd0(*(undefined8 *)(param_1 + 8),local_58._4_4_,&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d6d4 FUN_14834d6d4 body=29 status=ok
// SIG undefined FUN_14834d6d4(void)

undefined8 FUN_14834d6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834d6f2 FUN_14834d6f2 body=166 status=ok
// SIG undefined FUN_14834d6f2(void)

void FUN_14834d6f2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  local_40 = FUN_14834d79a;
  local_48 = param_1;
  local_38 = &local_48;
  FUN_146c03fd0(*(longlong *)(param_1 + 8),uVar1,&local_40);
  local_40 = FUN_14834d79a;
  local_48 = param_1;
  local_38 = &local_48;
  FUN_146c03fd0(*(undefined8 *)(param_1 + 8),uVar1 >> 0x20,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d79a FUN_14834d79a body=80 status=ok
// SIG undefined FUN_14834d79a(void)

void FUN_14834d79a(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1 + 0x340,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834d7ec FUN_14834d7ec body=16 status=ok
// SIG undefined FUN_14834d7ec(void)

void FUN_14834d7ec(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 14834d7fe FUN_14834d7fe body=110 status=ok
// SIG undefined FUN_14834d7fe(void)

void FUN_14834d7fe(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}



// FUNCTION 14834d86e FUN_14834d86e body=69 status=ok
// SIG undefined FUN_14834d86e(void)

undefined8 FUN_14834d86e(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xff < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 << 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14834d8b4 FUN_14834d8b4 body=240 status=ok
// SIG undefined FUN_14834d8b4(void)

longlong FUN_14834d8b4(longlong *param_1,void *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  lVar4 = (longlong)param_2 - lVar1;
  uVar5 = (param_1[1] - lVar1 >> 4) + 1;
  uVar3 = param_1[2] - lVar1 >> 4;
  uVar6 = (uVar3 >> 1) + uVar3;
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar6 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_14834d86e(param_1,uVar6);
  *(undefined4 *)((longlong)_Dst + lVar4) = *param_3;
  *(undefined4 *)((longlong)_Dst + lVar4 + 4) = *param_4;
  *(undefined8 *)((longlong)_Dst + lVar4 + 8) = *param_5;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + lVar4 + 0x10),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14834d7fe(param_1,_Dst,uVar5,uVar6);
  return (longlong)_Dst + lVar4;
}



// FUNCTION 14834d9ce FUN_14834d9ce body=29 status=ok
// SIG undefined FUN_14834d9ce(void)

undefined8 FUN_14834d9ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834d9ec FUN_14834d9ec body=124 status=ok
// SIG undefined FUN_14834d9ec(void)

void FUN_14834d9ec(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uStack_10 = *param_4;
  uStack_14 = *param_3;
  local_18 = *param_2;
  lVar1 = *param_1;
  puVar2 = *(undefined4 **)(lVar1 + 0x90);
  if (puVar2 == *(undefined4 **)(lVar1 + 0x98)) {
    FUN_14834da9e(lVar1 + 0x88,puVar2,&local_18);
  }
  else {
    uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
    *puVar2 = local_18;
    puVar2[1] = uStack_14;
    puVar2[2] = (undefined4)uStack_10;
    puVar2[3] = uStack_10._4_4_;
    *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) + 0x10;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834da80 FUN_14834da80 body=29 status=ok
// SIG undefined FUN_14834da80(void)

undefined8 FUN_14834da80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834da9e FUN_14834da9e body=207 status=ok
// SIG undefined FUN_14834da9e(void)

longlong FUN_14834da9e(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = *param_1;
  uVar7 = (param_1[1] - lVar3 >> 4) + 1;
  uVar6 = param_1[2] - lVar3 >> 4;
  uVar8 = (uVar6 >> 1) + uVar6;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar8 = 0xfffffffffffffff;
  }
  _Dst = (void *)FUN_14834d86e(param_1,uVar8);
  lVar1 = (longlong)_Dst + ((longlong)param_2 - lVar3);
  uVar5 = param_3[1];
  puVar2 = (undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar3));
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  pvVar4 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar4 != param_2) {
    memmove((void *)(lVar1 + 0x10),param_2,param_1[1] - (longlong)param_2);
  }
  FUN_14834d7fe(param_1,_Dst,uVar7,uVar8);
  return lVar1;
}



// FUNCTION 14834db6e FUN_14834db6e body=294 status=ok
// SIG undefined FUN_14834db6e(void)

void FUN_14834db6e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = **(undefined4 **)(param_1 + 0x20);
    if (1 < *(longlong *)(param_1 + 8)) {
      lVar2 = 1;
      do {
        lVar6 = *(longlong *)(param_1 + 0x18);
        iVar5 = *(int *)(lVar6 + lVar2 * 4);
        iVar1 = *(int *)(lVar6 + 4 + lVar2 * 4);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
        if (0 < iVar4 && iVar5 < iVar3) {
          lVar6 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x30) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 4 + lVar6 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 4 + lVar6 * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 8 + lVar6 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8 + lVar6 * 8);
            lVar6 = lVar6 + 1;
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
          } while (lVar6 < iVar4);
          lVar6 = *(longlong *)(param_1 + 0x18);
          iVar5 = *(int *)(lVar6 + lVar2 * 4);
        }
        lVar2 = lVar2 + 1;
        *(int *)(lVar6 + lVar2 * 4) = iVar4 + iVar5;
        iVar3 = iVar1;
      } while (lVar2 < *(longlong *)(param_1 + 8));
    }
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_146de554a(param_1 + 0x28,
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4)
                  ,0);
    if (*(longlong *)(param_1 + 0x38) < *(longlong *)(param_1 + 0x40)) {
      FUN_146de55aa(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 14834dc94 FUN_14834dc94 body=82 status=ok
// SIG undefined FUN_14834dc94(void)

void FUN_14834dc94(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14834dce8 FUN_14834dce8 body=69 status=ok
// SIG undefined FUN_14834dce8(void)

undefined8 * FUN_14834dce8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae73aa0;
  FUN_146c573a5(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834dd2e FUN_14834dd2e body=71 status=ok
// SIG undefined FUN_14834dd2e(void)

char FUN_14834dd2e(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 14834dd76 FUN_14834dd76 body=66 status=ok
// SIG undefined FUN_14834dd76(void)

undefined8 FUN_14834dd76(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((((lVar1 == 0) || (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) != 0)) ||
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) != 0)) ||
     (*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),-1 < *(int *)(param_1 + 0x10));
  }
  return uVar2;
}



// FUNCTION 14834ddb8 FUN_14834ddb8 body=206 status=ok
// SIG undefined FUN_14834ddb8(void)

void FUN_14834ddb8(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146fa8a16(param_1 + 0x38,*(undefined4 *)(param_1 + 0x2c),1);
  local_38 = 0;
  local_30 = 0xc00000000;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x50)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_146bea50a(local_68,(ulonglong)(((uint)uVar2 & 0x1ff) << 6) +
                             *(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20) +
                              (uVar2 >> 9 & 0x7fffff) * 8));
      FUN_146bea50a(*(longlong *)(param_1 + 0x38) + lVar1,local_68);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while ((longlong)uVar2 < (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50));
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834de88 FUN_14834de88 body=164 status=ok
// SIG undefined FUN_14834de88(void)

ulonglong FUN_14834de88(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = &local_38;
  local_50 = *(byte *)(param_1 + 4) ^ 1;
  local_48 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = &LAB_14834dfdc;
  local_38 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(param_1[1] + 0x1d0) * 0x200 + *(int *)(param_1[1] + 0x1d4),1);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834df2e FUN_14834df2e body=172 status=ok
// SIG undefined FUN_14834df2e(void)

ulonglong FUN_14834df2e(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined8 *local_48;
  longlong *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (1 < (int)param_1[2]) {
    local_28 = &local_38;
    local_50 = *(byte *)(param_1 + 4) ^ 1;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_14834e29c;
    local_38 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",
                  *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar1 = uVar1 ^ 1;
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834dfe4 FUN_14834dfe4 body=424 status=ok
// SIG undefined FUN_14834dfe4(void)

void FUN_14834dfe4(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108 [48];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [48];
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1 = (longlong *)*param_1;
  cVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (cVar2 == '\0') {
    uVar1 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)((param_2 & 0x1ff) << 4));
    local_58 = 0;
    local_50 = 0xc00000000;
    local_98 = 0;
    local_90 = 0xc00000000;
    FUN_146bea50a(local_88,(ulonglong)(((uint)uVar1 & 0x1ff) << 6) +
                           *(longlong *)
                            (*(longlong *)(param_1[9] + 0x20) + (uVar1 >> 9 & 0x7fffff) * 8));
    FUN_146bea50a(local_c8,(ulonglong)(((uint)(uVar1 >> 0x20) & 0x1ff) << 6) +
                           *(longlong *)(*(longlong *)(param_1[9] + 0x20) + (uVar1 >> 0x29) * 8));
    local_d8 = 0;
    local_d0 = 0xc00000000;
    iVar3 = (int)param_1[2];
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        iVar4 = iVar5 + 1;
        FUN_14834e18e(local_88,local_c8,local_108,(double)iVar4 / (double)(iVar3 + 1));
        FUN_146bea50a((longlong)(int)((int)param_1[2] * param_2 + (int)param_1[5] + iVar5) * 0x40 +
                      param_1[7],local_108);
        iVar3 = (int)param_1[2];
        iVar5 = iVar4;
      } while (iVar4 < iVar3);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834e18e FUN_14834e18e body=269 status=ok
// SIG undefined FUN_14834e18e(void)

void FUN_14834e18e(undefined8 param_1,undefined8 param_2,undefined4 *param_3,double param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  local_88 = &local_80;
  local_80 = 2;
  uStack_7c = 0xc;
  uStack_78 = 1;
  uStack_74 = 0x100;
  local_28 = 0;
  local_20 = 0xc00000000;
  local_70 = param_2;
  local_68 = param_1;
  local_60 = &local_58;
  FUN_146beae50(&local_60,&local_68,&local_70,(float)param_4);
  if (&local_58 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_28 == 0) {
      *(undefined8 *)(param_3 + 8) = local_38;
      *(undefined8 *)(param_3 + 10) = uStack_30;
      *(undefined8 *)(param_3 + 4) = local_48;
      *(undefined8 *)(param_3 + 6) = uStack_40;
      *param_3 = local_58;
      param_3[1] = uStack_54;
      param_3[2] = uStack_50;
      param_3[3] = uStack_4c;
    }
    if (*(longlong *)(param_3 + 0xc) != 0) {
      FUN_1400020a8(*(longlong *)(param_3 + 0xc));
    }
    *(longlong *)(param_3 + 0xc) = local_28;
    param_3[0xe] = (undefined4)local_20;
    param_3[0xf] = local_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834e2a4 FUN_14834e2a4 body=627 status=ok
// SIG undefined FUN_14834e2a4(void)

void FUN_14834e2a4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_168 [44];
  uint local_13c;
  int local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  undefined1 local_120 [48];
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [48];
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [48];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_1 = (longlong *)*param_1;
  local_13c = param_2;
  cVar6 = (**(code **)(*param_1 + 8))(param_1);
  if ((cVar6 == '\0') && (iVar7 = (int)param_1[2], 1 < iVar7)) {
    lVar1 = param_1[1];
    lVar5 = (ulonglong)((local_13c & 0x1ff) << 2) * 3;
    local_128 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0x130) + (ulonglong)(local_13c >> 9) * 8) + lVar5);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(local_13c >> 9) * 8);
    local_12c = *(uint *)(lVar2 + lVar5);
    local_130 = *(uint *)(lVar2 + 8 + lVar5);
    local_134 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(local_12c >> 9) * 8) +
                        (ulonglong)((local_12c & 0x1ff) << 4));
    local_138 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(local_130 >> 9) * 8) +
                        (ulonglong)((local_130 & 0x1ff) << 4));
    uVar10 = 1;
    iVar11 = 0;
    iVar9 = 0;
    do {
      uVar3 = ~uVar10 + iVar7;
      if (local_128 == local_134) {
        uVar3 = uVar10;
      }
      lVar1 = param_1[5];
      uVar4 = ~uVar10 + iVar7;
      if (local_128 == local_138) {
        uVar4 = uVar10;
      }
      iVar8 = iVar7 * local_130;
      local_70 = 0;
      local_68 = 0xc00000000;
      local_b0 = 0;
      local_a8 = 0xc00000000;
      local_124 = uVar10;
      FUN_146bea50a(local_a0,(longlong)(int)(iVar7 * local_12c + uVar3 + (int)lVar1) * 0x40 +
                             param_1[7]);
      FUN_146bea50a(local_e0,(longlong)(int)(iVar8 + uVar4 + (int)lVar1) * 0x40 + param_1[7]);
      local_f0 = 0;
      local_e8 = 0xc00000000;
      uVar10 = local_124 + 1;
      iVar7 = 1;
      do {
        FUN_14834e18e(local_a0,local_e0,local_120,(double)iVar7 / (double)(int)uVar10);
        FUN_146bea50a((longlong)
                      (int)((int)param_1[5] + (int)param_1[6] + iVar9 +
                           *(int *)((longlong)param_1 + 0x34) * local_13c) * 0x40 + param_1[7],
                      local_120);
        iVar9 = iVar9 + 1;
        iVar8 = iVar7 + iVar11;
        iVar7 = iVar7 + 1;
      } while (iVar8 != 1);
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      iVar7 = (int)param_1[2];
      iVar11 = iVar11 + -1;
    } while ((int)uVar10 < iVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834e518 FUN_14834e518 body=103 status=ok
// SIG undefined FUN_14834e518(void)

void FUN_14834e518(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_14834e580(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14834e580 FUN_14834e580 body=96 status=ok
// SIG undefined FUN_14834e580(void)

void FUN_14834e580(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 14834e5e0 FUN_14834e5e0 body=61 status=ok
// SIG undefined FUN_14834e5e0(void)

void FUN_14834e5e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14834e61e FUN_14834e61e body=29 status=ok
// SIG undefined FUN_14834e61e(void)

undefined8 FUN_14834e61e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14834e770 FUN_14834e770 body=147 status=ok
// SIG undefined FUN_14834e770(void)

void FUN_14834e770(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14834e804 FUN_14834e804 body=129 status=ok
// SIG undefined FUN_14834e804(void)

undefined4 * FUN_14834e804(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
  *param_1 = *param_2;
  plVar2 = *(longlong **)(param_2 + 2);
  *(longlong **)(param_1 + 2) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 14834e886 FUN_14834e886 body=147 status=ok
// SIG undefined FUN_14834e886(void)

void FUN_14834e886(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14834e91a FUN_14834e91a body=531 status=ok
// SIG undefined FUN_14834e91a(void)

undefined8 FUN_14834e91a(longlong param_1,longlong *param_2,int param_3,double param_4)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) < 0) {
    FUN_14834f3e8(param_1 + 0x140,0);
  }
  lVar10 = param_2[1];
  if ((longlong)(int)lVar10 != 0) {
    lVar7 = *param_2;
    pdVar13 = (double *)(lVar7 + 8);
    do {
      iVar3 = *(int *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x148) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
        FUN_14834f448(param_1 + 0x140,iVar3);
      }
      uVar6 = *(undefined4 *)((longlong)pdVar13 + -4);
      uVar8 = *(undefined4 *)pdVar13;
      uVar9 = *(undefined4 *)((longlong)pdVar13 + 4);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar3 * 0x10);
      *puVar1 = *(undefined4 *)(pdVar13 + -1);
      puVar1[1] = uVar6;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      iVar4 = *(int *)((longlong)pdVar13 + -4);
      if ((((*(int *)(param_1 + 0x138) + 1 < iVar4) ||
           (uVar5 = *(uint *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar4 * 4), (int)uVar5 < 1)
           ) || (*(int *)(param_1 + 0x128) < (int)uVar5)) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar5 >> 9) * 8) + 8 +
                  (ulonglong)(uVar5 & 0x1ff) * 0xc) < 1)) {
        lVar11 = FUN_14834ee3a(param_1,iVar4,1);
        dVar2 = *pdVar13;
        *(double *)(lVar11 + 0x10) = dVar2;
        *(undefined1 *)(lVar11 + 0x18) = 1;
        *(int *)(lVar11 + 8) = iVar3;
        FUN_146b9cbf0(param_1 + 0x108,iVar4,(float)dVar2);
      }
      pdVar14 = pdVar13 + 1;
      pdVar13 = pdVar13 + 2;
    } while (pdVar14 != (double *)((longlong)(int)lVar10 * 0x10 + lVar7));
  }
  if (0 < *(int *)(param_1 + 0x128)) {
    do {
      uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x118) + 0xc);
      FUN_146bd26ea(param_1 + 0x108,1);
      piVar12 = (int *)FUN_14834ee3a(param_1,uVar6,0);
      uVar15 = -(ulonglong)(*(double *)(param_1 + 0x150) <= *(double *)(piVar12 + 4));
      dVar2 = (double)(~uVar15 & (ulonglong)*(double *)(param_1 + 0x150) |
                      (ulonglong)*(double *)(piVar12 + 4) & uVar15);
      *(double *)(param_1 + 0x150) = dVar2;
      if (param_4 < dVar2) {
        return 0;
      }
      *(undefined1 *)(piVar12 + 6) = 1;
      iVar3 = *piVar12;
      *(int *)(param_1 + 0x158) = iVar3;
      if (iVar3 == param_3) {
        return 1;
      }
      FUN_14834ef7e(param_1,piVar12);
    } while (0 < *(int *)(param_1 + 0x128));
  }
  return 0;
}



// FUNCTION 14834eb2e FUN_14834eb2e body=249 status=ok
// SIG undefined FUN_14834eb2e(void)

ulonglong FUN_14834eb2e(undefined8 param_1,undefined4 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar3 = FUN_14834f684();
  if (lVar3 != 0) {
    uVar5 = 0;
    if (*(char *)(lVar3 + 0x18) == '\0') goto LAB_14834ec08;
    uVar2 = *(uint *)((longlong)param_3 + 0xc);
    if ((int)uVar2 < 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      FUN_14481578e(param_3,0);
      uVar5 = (ulonglong)*(uint *)(param_3 + 1);
      uVar2 = *(uint *)((longlong)param_3 + 0xc);
    }
    uVar4 = (int)uVar5 + 1;
    *(uint *)(param_3 + 1) = uVar4;
    if (uVar2 < uVar4) {
      FUN_1446f48e2(param_3,uVar5);
    }
    *(undefined4 *)(*param_3 + (longlong)(int)uVar5 * 4) = param_2;
    iVar6 = 0;
    if (0 < param_4) {
      iVar6 = param_4;
    }
    iVar6 = iVar6 + 1;
    do {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      iVar6 = iVar6 + -1;
      if ((iVar6 == 0) || (*(int *)(lVar3 + 4) == -1)) goto LAB_14834ec08;
      iVar1 = (int)param_3[1];
      uVar5 = (ulonglong)iVar1;
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(undefined4 *)(*param_3 + uVar5 * 4) = *(undefined4 *)(lVar3 + 4);
      lVar3 = FUN_14834f684(param_1);
    } while ((lVar3 != 0) && (*(char *)(lVar3 + 0x18) != '\0'));
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      uVar5 = 0;
      FUN_14481578e(param_3,0);
      goto LAB_14834ec08;
    }
  }
  uVar5 = 0;
LAB_14834ec08:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14834ec27 FUN_14834ec27 body=531 status=ok
// SIG undefined FUN_14834ec27(void)

double FUN_14834ec27(double *param_1,double *param_2)

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
  
  dVar1 = param_2[6];
  dVar8 = dVar1 + dVar1;
  dVar10 = param_2[5];
  dVar7 = param_2[4];
  dVar2 = param_2[3];
  dVar9 = param_2[2] - dVar1 * dVar10;
  dVar11 = *param_2 - dVar1 * dVar2;
  dVar12 = param_2[1] - dVar1 * dVar7;
  dVar1 = param_1[3];
  dVar3 = param_1[4];
  dVar4 = param_1[5];
  dVar5 = (dVar9 - param_1[2]) * dVar4 + (dVar11 - *param_1) * dVar1 + (dVar12 - param_1[1]) * dVar3
  ;
  dVar6 = dVar10 * dVar4 + dVar2 * dVar1 + dVar7 * dVar3;
  dVar9 = dVar9 - (dVar4 * dVar5 + param_1[2]);
  dVar12 = dVar12 - (dVar3 * dVar5 + param_1[1]);
  dVar11 = dVar11 - (dVar5 * dVar1 + *param_1);
  dVar10 = dVar10 - dVar4 * dVar6;
  dVar7 = dVar7 - dVar3 * dVar6;
  dVar2 = dVar2 - dVar6 * dVar1;
  return ((dVar7 * dVar12 + dVar11 * dVar2 + dVar9 * dVar10 +
          ((dVar10 * dVar10 + dVar2 * dVar2 + dVar7 * dVar7) * dVar8) / 3.0) * dVar8 +
         dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12) * dVar8;
}



// FUNCTION 14834ee3a FUN_14834ee3a body=323 status=ok
// SIG undefined FUN_14834ee3a(void)

longlong FUN_14834ee3a(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60 [4];
  undefined8 local_50;
  undefined1 local_48;
  uint local_3c;
  uint *local_38;
  uint *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = param_2;
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x10;
        if (*(uint *)(lVar3 + (longlong)iVar4 * 0x10) == param_2) {
          if ((uint *)(lVar1 + 4) != (uint *)0x0 && lVar1 != 0) {
            uVar2 = *(uint *)(lVar1 + 4);
            goto LAB_14834eef8;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  if (param_3 == '\0') {
    lVar3 = 0;
  }
  else {
    local_60[1] = 0xffffffff;
    local_60[2] = 0;
    local_50 = 0;
    local_48 = 0;
    local_64 = *(int *)(param_1 + 0xf0) * 0x200 + *(int *)(param_1 + 0xf4);
    local_60[0] = param_2;
    FUN_14834f4ce(param_1 + 0xf0,local_60);
    local_38 = &local_3c;
    local_30 = &local_64;
    FUN_140263e2a((longlong *)(param_1 + 0xa0),local_24,&local_38,0);
    uVar2 = local_64;
LAB_14834eef8:
    lVar3 = (ulonglong)((uVar2 & 0x1ff) << 5) +
            *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar2 >> 9) * 8);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14834ef7e FUN_14834ef7e body=1129 status=ok
// SIG undefined FUN_14834ef7e(void)

void FUN_14834ef7e(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  undefined1 auStack_228 [32];
  double *local_208;
  undefined4 *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  undefined1 *local_198;
  int local_190;
  int local_180;
  int local_17c;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  undefined1 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined4 local_100;
  code *local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_128 = (undefined1 *)CONCAT44(local_128._4_4_,*param_2);
  pcVar3 = (code *)param_1[2];
  local_1e0 = param_1 + 6;
  plVar7 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar7 = local_1e0;
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(&local_1c0,uVar5,&local_128);
  dVar1 = *(double *)(param_2 + 4);
  local_f8 = (code *)*param_1;
  local_100 = *param_2;
  local_118 = 0;
  local_108 = &PTR_LAB_149f3b7b0;
  local_128 = &LAB_146c413d0;
  local_1f8 = param_2;
  FUN_146c41260(local_f8 + 0xb8,&local_b8,local_100,&local_128);
  FUN_146c41458(local_b8,&local_128,local_b0,local_a8);
  FUN_146c41662(local_b8,&local_198,local_b0,local_a8);
  local_1e8 = param_1 + 0x10;
  local_1f0 = param_1 + 0x21;
  do {
    pcVar3 = local_f8;
    if ((((local_128 == local_198) && (local_120 == local_190)) && ((int)local_110 == local_180)) &&
       (local_110._4_4_ == local_17c)) {
      if (local_168 != 0) {
        if (local_158 == (longlong *)0x0) {
          local_158 = local_148;
        }
        (**(code **)(*local_158 + 0x10))();
      }
      if (local_f8 != (code *)0x0) {
        plVar7 = local_d8;
        if (local_e8 != (longlong *)0x0) {
          plVar7 = local_e8;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (local_a8[0] != 0) {
        if (local_98 == (longlong *)0x0) {
          local_98 = local_88;
        }
        (**(code **)(*local_98 + 0x10))();
      }
      if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_108._0_4_);
    plVar7 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar7 = local_d8;
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    iVar4 = (*pcVar3)(uVar5,&local_1d8);
    lVar6 = FUN_14834ee3a(param_1,iVar4,1);
    if (*(char *)(lVar6 + 0x18) == '\0') {
      pcVar3 = (code *)param_1[2];
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = local_1e0;
      }
      local_19c = iVar4;
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(&local_1d8,uVar5,&local_19c);
      dVar8 = SQRT((local_1c8 - local_1b0) * (local_1c8 - local_1b0) +
                   (local_1d8 - local_1c0) * (local_1d8 - local_1c0) +
                   (local_1d0 - local_1b8) * (local_1d0 - local_1b8));
      if ((char)param_1[10] == '\x01') {
        local_19c = *(int *)(param_1[0x28] + 4 + (longlong)(int)local_1f8[2] * 0x10);
        local_1a4 = *local_1f8;
        pcVar3 = (code *)param_1[0xc];
        plVar7 = (longlong *)param_1[0xe];
        if ((longlong *)param_1[0xe] == (longlong *)0x0) {
          plVar7 = local_1e8;
        }
        local_1d8 = dVar8;
        local_1a0 = iVar4;
        uVar5 = (**(code **)(*plVar7 + 8))();
        local_208 = &local_1d8;
        dVar8 = (double)(*pcVar3)(uVar5,&local_1a4,&local_1a0,&local_19c);
      }
      dVar8 = dVar8 + dVar1;
      if (iVar4 <= (int)param_1[0x27] + 1) {
        uVar2 = *(uint *)(param_1[0x26] + (longlong)iVar4 * 4);
        if (((0 < (int)uVar2) && ((int)uVar2 <= (int)param_1[0x25])) &&
           (0 < *(int *)(*(longlong *)(param_1[0x23] + (ulonglong)(uVar2 >> 9) * 8) + 8 +
                        (ulonglong)(uVar2 & 0x1ff) * 0xc))) {
          if (dVar8 < *(double *)(lVar6 + 0x10)) {
            *(undefined4 *)(lVar6 + 4) = *local_1f8;
            *(double *)(lVar6 + 0x10) = dVar8;
            *(undefined4 *)(lVar6 + 8) = local_1f8[2];
            uVar2 = *(uint *)(param_1[0x26] + (longlong)iVar4 * 4);
            *(float *)(*(longlong *)(param_1[0x23] + (ulonglong)(uVar2 >> 9) * 8) + 4 +
                      (ulonglong)(uVar2 & 0x1ff) * 0xc) = (float)dVar8;
            FUN_146bd2818(local_1f0);
          }
          goto LAB_14834f12d;
        }
      }
      *(undefined4 *)(lVar6 + 4) = *local_1f8;
      *(double *)(lVar6 + 0x10) = dVar8;
      *(undefined4 *)(lVar6 + 8) = local_1f8[2];
      FUN_146b9cbf0(local_1f0,iVar4,(float)dVar8);
    }
LAB_14834f12d:
    if ((int)local_118 == 0) {
      local_11c = 0xffffffff;
      local_110 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_128);
    }
  } while( true );
}



// FUNCTION 14834f3e8 FUN_14834f3e8 body=96 status=ok
// SIG undefined FUN_14834f3e8(void)

void FUN_14834f3e8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14834f448 FUN_14834f448 body=132 status=ok
// SIG undefined FUN_14834f448(void)

void FUN_14834f448(longlong param_1,int param_2)

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



// FUNCTION 14834f4ce FUN_14834f4ce body=165 status=ok
// SIG undefined FUN_14834f4ce(void)

void FUN_14834f4ce(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  
  iVar7 = *param_1;
  uVar8 = param_1[1];
  if (uVar8 == 0x200) {
    iVar2 = param_1[4];
    if (iVar7 == iVar2 + -1) {
      _Dst = (void *)FUN_14001cc68(0x4000);
      memset(_Dst,0,0x4000);
      param_1[4] = iVar2 + 1U;
      if ((uint)param_1[5] < iVar2 + 1U) {
        FUN_14834f574(param_1 + 2,iVar2);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) = _Dst;
      iVar7 = *param_1;
    }
    iVar7 = iVar7 + 1;
    *param_1 = iVar7;
    param_1[1] = 0;
    uVar8 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar7 * 8);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar8 * 0x20);
  *puVar1 = param_2[2];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar8 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 14834f574 FUN_14834f574 body=132 status=ok
// SIG undefined FUN_14834f574(void)

void FUN_14834f574(longlong param_1,int param_2)

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



// FUNCTION 14834f5fa FUN_14834f5fa body=138 status=ok
// SIG undefined FUN_14834f5fa(void)

void FUN_14834f5fa(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,8);
  }
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14834f684 FUN_14834f684 body=144 status=ok
// SIG undefined FUN_14834f684(void)

longlong FUN_14834f684(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar2 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x10) == param_2) {
          if ((uint *)(lVar2 + 4) != (uint *)0x0 && lVar2 != 0) {
            uVar1 = *(uint *)(lVar2 + 4);
            return (ulonglong)((uVar1 & 0x1ff) << 5) +
                   *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar1 >> 9) * 8);
          }
          return 0;
        }
        iVar3 = *(int *)(lVar2 + 8);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14834f714 FUN_14834f714 body=287 status=ok
// SIG undefined FUN_14834f714(void)

undefined4 * FUN_14834f714(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14834f834(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_14834f930(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14834fa40(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14834f834 FUN_14834f834 body=251 status=ok
// SIG undefined FUN_14834f834(void)

int * FUN_14834f834(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 14834f930 FUN_14834f930 body=144 status=ok
// SIG undefined FUN_14834f930(void)

undefined8 FUN_14834f930(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          piVar1[4] = param_3[4];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14834f9c0(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14834f9c0 FUN_14834f9c0 body=128 status=ok
// SIG undefined FUN_14834f9c0(void)

void FUN_14834f9c0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 14834fa40 FUN_14834fa40 body=430 status=ok
// SIG undefined FUN_14834fa40(void)

void FUN_14834fa40(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
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
  uVar5 = local_58;
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
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar5;
      do {
        lVar3 = *local_70;
        lVar4 = (longlong)iVar6 * 0x1c;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar4);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar5 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14834fbf0 FUN_14834fbf0 body=52 status=ok
// SIG undefined FUN_14834fbf0(void)

void FUN_14834fbf0(longlong *param_1)

{
  FUN_14834fc24();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14834fc24 FUN_14834fc24 body=89 status=ok
// SIG undefined FUN_14834fc24(void)

void FUN_14834fc24(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 14834fc7e FUN_14834fc7e body=143 status=ok
// SIG undefined FUN_14834fc7e(void)

void FUN_14834fc7e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14834fd0e FUN_14834fd0e body=147 status=ok
// SIG undefined FUN_14834fd0e(void)

void FUN_14834fd0e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14834fda2 FUN_14834fda2 body=47 status=ok
// SIG undefined FUN_14834fda2(void)

void FUN_14834fda2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14834fdd2 FUN_14834fdd2 body=112 status=ok
// SIG undefined FUN_14834fdd2(void)

void FUN_14834fdd2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14834fe42 FUN_14834fe42 body=147 status=ok
// SIG undefined FUN_14834fe42(void)

void FUN_14834fe42(longlong param_1,int param_2)

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



// FUNCTION 14834fed6 FUN_14834fed6 body=98 status=ok
// SIG undefined FUN_14834fed6(void)

void FUN_14834fed6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14834ff38 FUN_14834ff38 body=52 status=ok
// SIG undefined FUN_14834ff38(void)

void FUN_14834ff38(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146c7f310(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 14834ff6c FUN_14834ff6c body=98 status=ok
// SIG undefined FUN_14834ff6c(void)

void FUN_14834ff6c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14834ffce FUN_14834ffce body=52 status=ok
// SIG undefined FUN_14834ffce(void)

void FUN_14834ffce(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146c7f210(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148350002 FUN_148350002 body=332 status=ok
// SIG undefined FUN_148350002(void)

void FUN_148350002(double param_1,longlong *param_2,int param_3,int param_4,longlong *param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0 [40];
  undefined1 local_78 [8];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1448c4dd6(param_5,(int)param_2[1],1);
  iVar2 = param_3 + 1;
  if (iVar2 < param_4) {
    FUN_148279e70(local_a0,(longlong)param_3 * 0x10 + *param_2,(longlong)param_4 * 0x10 + *param_2);
    lVar3 = (longlong)iVar2 << 4;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    iVar4 = param_3;
    do {
      dVar6 = (double)FUN_146c7f000(local_a0,*param_2 + lVar3,local_78);
      uVar5 = -(ulonglong)((double)CONCAT44(uVar9,uVar8) < dVar6);
      auVar7._0_8_ = ~uVar5 & CONCAT44(uVar9,uVar8);
      auVar7._8_8_ = ~extraout_XMM0_Qb & CONCAT44(uVar11,uVar10);
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = (ulonglong)dVar6 & uVar5;
      auVar7 = auVar7 | auVar1;
      if ((double)CONCAT44(uVar9,uVar8) < dVar6) {
        iVar4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
      uVar8 = auVar7._0_4_;
      uVar9 = auVar7._4_4_;
      uVar10 = auVar7._8_4_;
      uVar11 = auVar7._12_4_;
    } while (param_4 != iVar2);
    if (param_1 * param_1 < auVar7._0_8_) {
      *(undefined1 *)(*param_5 + (longlong)iVar4) = 1;
      local_a8 = param_5;
      FUN_148350002(param_1,param_2,param_3,iVar4);
      local_a8 = param_5;
      FUN_148350002(param_1,param_2,iVar4,param_4);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148350176 FUN_148350176 body=370 status=ok
// SIG undefined FUN_148350176(void)

undefined8 *
FUN_148350176(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  
  *param_1 = param_2;
  puVar1 = param_1 + 1;
  FUN_14834c738(puVar1);
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x654) = 1;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x6c4) = 1;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  (*(code *)*param_4)(param_4[1],puVar1);
  param_1[1] = param_2;
  FUN_1482fe1c4(puVar1,param_3,0xf,1);
  uVar2 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  iVar3 = *(int *)(param_1 + 0xdb);
  *(uint *)(param_1 + 0xdb) = iVar3 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0x6dc) - iVar3) < uVar2) {
    FUN_1446f48e2(param_1 + 0xda,iVar3);
  }
  else if (uVar2 == 0) {
    return param_1;
  }
  memcpy((void *)((longlong)iVar3 * 4 + param_1[0xda]),_Src,(longlong)(int)uVar2 << 2);
  return param_1;
}



// FUNCTION 1483502e8 FUN_1483502e8 body=304 status=ok
// SIG undefined FUN_1483502e8(void)

undefined4 * FUN_1483502e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e37104(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_146e371ea(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146e37308(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148350488 FUN_148350488 body=29 status=ok
// SIG undefined FUN_148350488(void)

undefined8 FUN_148350488(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483504e4 FUN_1483504e4 body=29 status=ok
// SIG undefined FUN_1483504e4(void)

undefined8 FUN_1483504e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148350501 FUN_148350501 body=43 status=ok
// SIG undefined FUN_148350501(void)

void FUN_148350501(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0xd;
  }
  return;
}



// FUNCTION 14835052c FUN_14835052c body=143 status=ok
// SIG undefined FUN_14835052c(void)

void FUN_14835052c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483505bc FUN_1483505bc body=89 status=ok
// SIG undefined FUN_1483505bc(void)

void FUN_1483505bc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x68 + *param_1);
  FUN_148350654(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x68 + (longlong)_Dst),(longlong)iVar2 * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148350616 FUN_148350616 body=62 status=ok
// SIG undefined FUN_148350616(void)

void FUN_148350616(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148350712(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 148350654 FUN_148350654 body=38 status=ok
// SIG undefined FUN_148350654(void)

void FUN_148350654(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14835067a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 14835067a FUN_14835067a body=151 status=ok
// SIG undefined FUN_14835067a(void)

void FUN_14835067a(longlong *param_1)

{
  FUN_144716727(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148350712 FUN_148350712 body=104 status=ok
// SIG undefined FUN_148350712(void)

ulonglong FUN_148350712(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148350748;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_148350748:
  return param_2 & 0xffffffff;
}



// FUNCTION 14835077d FUN_14835077d body=43 status=ok
// SIG undefined FUN_14835077d(void)

void FUN_14835077d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1483507a8 FUN_1483507a8 body=132 status=ok
// SIG undefined FUN_1483507a8(void)

void FUN_1483507a8(longlong param_1,int param_2)

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



// FUNCTION 14835082e FUN_14835082e body=89 status=ok
// SIG undefined FUN_14835082e(void)

void FUN_14835082e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_14835077d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148350888 FUN_148350888 body=62 status=ok
// SIG undefined FUN_148350888(void)

void FUN_148350888(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483508c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1483508c6 FUN_1483508c6 body=93 status=ok
// SIG undefined FUN_1483508c6(void)

ulonglong FUN_1483508c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148350924 FUN_148350924 body=110 status=ok
// SIG undefined FUN_148350924(void)

void FUN_148350924(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148350a5c(param_1,iVar1);
    }
    FUN_148350a28((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148350af0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148350994 FUN_148350994 body=100 status=ok
// SIG undefined FUN_148350994(void)

undefined4 FUN_148350994(double *param_1,double *param_2)

{
  int iVar1;
  
  if (*param_1 <= *param_2) {
    if ((((param_1[1] <= param_2[1]) && (*param_2 <= param_1[2])) && (param_2[1] <= param_1[3])) &&
       (*param_1 <= param_2[2])) {
      iVar1 = -(uint)(param_2[3] <= param_1[3] && param_2[2] <= param_1[2]);
      return CONCAT31((int3)((uint)iVar1 >> 8),(byte)iVar1 & param_1[1] <= param_2[3]);
    }
  }
  return 0;
}



// FUNCTION 1483509f8 FUN_1483509f8 body=48 status=ok
// SIG undefined FUN_1483509f8(void)

void FUN_1483509f8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148350a28 FUN_148350a28 body=52 status=ok
// SIG undefined FUN_148350a28(void)

void FUN_148350a28(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar1[-3] = 0x7fefffffffffffff;
      puVar1[-2] = 0x7fefffffffffffff;
      puVar1[-1] = 0xffefffffffffffff;
      *puVar1 = 0xffefffffffffffff;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148350a5c FUN_148350a5c body=147 status=ok
// SIG undefined FUN_148350a5c(void)

void FUN_148350a5c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148350af0 FUN_148350af0 body=62 status=ok
// SIG undefined FUN_148350af0(void)

void FUN_148350af0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148350b2e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148350b2e FUN_148350b2e body=112 status=ok
// SIG undefined FUN_148350b2e(void)

ulonglong FUN_148350b2e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148350b68;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148350b68:
  return param_2 & 0xffffffff;
}



// FUNCTION 148350b9e FUN_148350b9e body=696 status=ok
// SIG undefined FUN_148350b9e(void)

void FUN_148350b9e(longlong param_1,uint param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar9 = &local_348;
    do {
      piVar5 = (int *)*plVar9;
      piVar10 = (int *)plVar9[1];
      iVar12 = (int)plVar9[2];
      uVar7 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar5) >> 2) + 1;
      piVar14 = piVar10;
      piVar13 = piVar5;
      if (iVar12 != 0) {
LAB_148350c64:
        if (8 < (int)uVar7) {
          iVar3 = piVar5[uVar7 >> 1];
          piVar5[uVar7 >> 1] = *piVar5;
          *piVar5 = iVar3;
          piVar8 = piVar10 + 1;
          piVar6 = piVar5;
          do {
            piVar4 = piVar6 + 1;
            piVar11 = piVar6 + 1;
            do {
              piVar15 = piVar11;
              piVar6 = piVar4;
              if (piVar10 < piVar6) break;
              dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)*piVar5 * 0x30);
              pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar6 * 0x30);
              piVar4 = piVar6 + 1;
              piVar11 = piVar15 + 1;
            } while (dVar2 < *pdVar1 || dVar2 == *pdVar1);
            piVar4 = piVar8 + -2;
            do {
              piVar11 = piVar8;
              piVar16 = piVar4;
              piVar8 = piVar11 + -1;
              if (piVar8 <= piVar5) break;
              dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)*piVar8 * 0x30);
              pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar5 * 0x30);
              piVar4 = piVar16 + -1;
            } while (dVar2 < *pdVar1 || dVar2 == *pdVar1);
            if (piVar8 < piVar6) goto LAB_148350d2b;
            iVar3 = *piVar6;
            *piVar6 = *piVar8;
            *piVar8 = iVar3;
          } while( true );
        }
        if (piVar5 < piVar10) {
          do {
            piVar14 = piVar5;
            if (piVar5 + 1 <= piVar10) {
              iVar12 = *piVar5;
              piVar13 = piVar5 + 1;
              do {
                dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)iVar12 * 0x30);
                pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar13 * 0x30);
                piVar8 = piVar13;
                iVar3 = *piVar13;
                if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
                  piVar8 = piVar14;
                  iVar3 = iVar12;
                }
                iVar12 = iVar3;
                piVar14 = piVar8;
                piVar13 = piVar13 + 1;
              } while (piVar13 <= piVar10);
            }
            iVar12 = *piVar14;
            *piVar14 = *piVar10;
            *piVar10 = iVar12;
            piVar10 = piVar10 + -1;
          } while (piVar5 < piVar10);
        }
        goto LAB_148350e2d;
      }
LAB_148350e47:
      FUN_148350e57(piVar5,uVar7,param_3);
LAB_148350e2d:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148350d2b:
  iVar3 = *piVar5;
  *piVar5 = *piVar8;
  *piVar8 = iVar3;
  iVar12 = iVar12 + -1;
  piVar11 = piVar11 + -2;
  if ((longlong)piVar16 - (longlong)piVar13 < (longlong)piVar14 - (longlong)piVar15) {
    if (piVar6 < piVar10) {
      *plVar9 = (longlong)piVar6;
      plVar9[1] = (longlong)piVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar15 = piVar5;
    if (piVar8 <= piVar5 + 1) goto LAB_148350e2d;
  }
  else {
    if (piVar5 + 1 < piVar8) {
      *plVar9 = (longlong)piVar5;
      plVar9[1] = (longlong)piVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar5 = piVar6;
    piVar11 = piVar10;
    piVar16 = piVar10;
    if (piVar10 <= piVar6) goto LAB_148350e2d;
  }
  uVar7 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar15) >> 2) + 1;
  piVar10 = piVar11;
  piVar14 = piVar16;
  piVar13 = piVar15;
  if (iVar12 == 0) goto LAB_148350e47;
  goto LAB_148350c64;
}



// FUNCTION 148350e57 FUN_148350e57 body=427 status=ok
// SIG undefined FUN_148350e57(void)

void FUN_148350e57(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x000148350e7c:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        lVar4 = *(longlong *)*param_3;
        if ((iVar9 < (int)param_2) &&
           (dVar2 = *(double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x30),
           pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x30),
           dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
          iVar8 = iVar9;
        }
        iVar9 = param_1[iVar5];
        dVar2 = *(double *)(lVar4 + (longlong)iVar9 * 0x30);
        pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x30);
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
          param_1[iVar5] = param_1[iVar8];
          param_1[iVar8] = iVar9;
          iVar5 = iVar8;
          goto joined_r0x000148350e7c;
        }
      }
      bVar11 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            lVar4 = *(longlong *)*param_3;
            iVar9 = iVar8;
            if (((longlong)iVar5 < (longlong)uVar7) &&
               (dVar2 = *(double *)(lVar4 + (longlong)(int)param_1[iVar5] * 0x30),
               pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x30),
               dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
              iVar9 = iVar5;
            }
            iVar5 = param_1[iVar10];
            dVar2 = *(double *)(lVar4 + (longlong)iVar5 * 0x30);
            pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x30);
            if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
            param_1[iVar10] = param_1[iVar9];
            param_1[iVar9] = iVar5;
            iVar5 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar3 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar3;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 148351002 FUN_148351002 body=147 status=ok
// SIG undefined FUN_148351002(void)

void FUN_148351002(longlong param_1,int param_2)

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



// FUNCTION 148351096 FUN_148351096 body=147 status=ok
// SIG undefined FUN_148351096(void)

void FUN_148351096(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


