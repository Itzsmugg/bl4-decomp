// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1483a2db4 FUN_1483a2db4 body=38 status=ok
// SIG undefined FUN_1483a2db4(void)

undefined8 FUN_1483a2db4(undefined8 param_1,int param_2)

{
  FUN_1483997ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a2de2 FUN_1483a2de2 body=75 status=ok
// SIG undefined FUN_1483a2de2(void)

undefined8 * FUN_1483a2de2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae74e30;
  FUN_148398478(param_1 + 0x32);
  FUN_148398478(param_1 + 0x2c);
  FUN_1483a1d22(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a2e2e FUN_1483a2e2e body=75 status=ok
// SIG undefined FUN_1483a2e2e(void)

undefined8 * FUN_1483a2e2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae74e80;
  FUN_148398478(param_1 + 0x19);
  FUN_148398478(param_1 + 0x13);
  FUN_1483997ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a2e7e FUN_1483a2e7e body=641 status=ok
// SIG undefined FUN_1483a2e7e(void)

void FUN_1483a2e7e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [36];
  int local_c4;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  uint local_70 [2];
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + 1;
  local_88 = 0;
  uStack_80 = 0;
  puVar8 = param_1 + 3;
  local_70[0] = 0;
  local_70[1] = 1;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = puVar8;
  if (*(int *)(param_1 + 6) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(local_70);
    iVar9 = *(int *)(param_1 + 6);
  }
  uStack_90 = CONCAT44(uStack_54,uStack_58);
  local_98 = local_60;
  iStack_94 = iStack_5c;
  local_a8 = local_70[0];
  uStack_a4 = local_70[1];
  uStack_a0 = (undefined4)uStack_68;
  uStack_9c = uStack_68._4_4_;
  local_b0 = plVar1;
  if ((iStack_5c != iVar9) || (uStack_68 != puVar8)) {
    local_b8 = param_1 + 8;
    local_c4 = iVar9;
    local_c0 = puVar8;
    do {
      FUN_146c03f0e(*param_1,local_70,*(undefined4 *)(*local_b0 + (longlong)iStack_94 * 0xc));
      lVar12 = 0;
      do {
        pcVar3 = (code *)*param_2;
        uVar2 = local_70[lVar12];
        if (pcVar3 == (code *)0x0) {
          if (uVar2 != 0xffffffff) goto LAB_1483a2fd0;
        }
        else {
          plVar10 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar10 = param_2 + 4;
          }
          local_4c = uVar2;
          uVar7 = (**(code **)(*plVar10 + 8))();
          bVar5 = (*pcVar3)(uVar7,&local_4c);
          if ((bVar5 & uVar2 != 0xffffffff) != 0) {
LAB_1483a2fd0:
            uVar4 = uStack_80;
            if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
              puVar8 = (undefined8 *)param_1[9];
              if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
                puVar8 = local_b8;
              }
              iVar9 = *(int *)((longlong)puVar8 +
                              (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar2) * 4);
              if (iVar9 != -1) {
                do {
                  if (*(uint *)(*plVar1 + (longlong)iVar9 * 0xc) == uVar2) goto LAB_1483a2fff;
                  iVar9 = *(int *)(*plVar1 + (longlong)iVar9 * 0xc + 4);
                } while (iVar9 != -1);
              }
            }
            lVar11 = (longlong)(int)uStack_80;
            uVar6 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
            if (uStack_80._4_4_ < uVar6) {
              FUN_1446f48e2(&local_88,uVar4 & 0xffffffff);
            }
            *(uint *)(local_88 + lVar11 * 4) = uVar2;
          }
        }
LAB_1483a2fff:
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
      lVar12 = local_88;
    } while (local_b0 != plVar1 ||
             ((undefined8 *)CONCAT44(uStack_9c,uStack_a0) != local_c0 || iStack_94 != local_c4));
    lVar11 = (longlong)(int)uStack_80;
    if (lVar11 != 0) {
      lVar13 = 0;
      do {
        local_b0 = (longlong *)CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar12 + lVar13));
        FUN_1447cbafe(plVar1,local_70,&local_b0,0);
        lVar13 = lVar13 + 4;
      } while (lVar11 * 4 != lVar13);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a3100 FUN_1483a3100 body=38 status=ok
// SIG undefined FUN_1483a3100(void)

undefined8 FUN_1483a3100(undefined8 param_1,int param_2)

{
  FUN_14837b538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a3126 FUN_1483a3126 body=175 status=ok
// SIG undefined FUN_1483a3126(void)

void FUN_1483a3126(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1483a40a6(param_1,&local_40,param_2);
  FUN_1483a40a6(param_1,&local_58,param_3);
  local_60 = (local_30 + local_48) * 0.5;
  local_68 = (local_38 + local_50) * 0.5;
  local_70 = (local_40 + local_58) * 0.5;
  FUN_1483a416a(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a31d6 FUN_1483a31d6 body=2624 status=ok
// SIG undefined FUN_1483a31d6(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x0001483a3372 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1483a31d6(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined ***pppuVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_188 [44];
  uint local_15c;
  longlong *local_158;
  undefined1 local_149;
  code *local_148 [2];
  undefined8 local_138 [6];
  undefined1 *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_149 = 1;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14ae74f80;
  puStack_a0 = &local_149;
  local_c8 = (code *)&LAB_1483a436e;
  if (param_2 == 2) {
    local_e8 = &PTR_LAB_14ae74fc0;
    local_c8 = (code *)&LAB_1483a440e;
  }
  else {
    if (param_2 != 1) goto LAB_1483a3378;
    local_e8 = &PTR_LAB_14ae74fa0;
    local_c8 = FUN_1483a43be;
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0x4ae74f80;
  uStack_64 = 1;
  uStack_60 = &local_149;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  local_88 = 0x483a436e;
  uStack_84 = 1;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  local_b8 = (undefined ***)0x0;
  local_a8 = local_e8;
  local_108 = &LAB_1483a436e;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  local_e8 = &PTR_LAB_14ae74f80;
  puStack_e0 = &local_149;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  local_f8 = 0;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  (*(code *)&LAB_1483a4394)();
LAB_1483a3378:
  uVar12 = (int)param_1[0x16] * 0x200 + *(int *)((longlong)param_1 + 0xb4);
  uVar13 = 0;
  if ((uVar12 != 0) && (uVar13 = 0, 0xfffd < (ushort)(**(short **)param_1[0x17] - 1U))) {
    uVar5 = 1;
    uVar15 = 1;
    if (1 < (int)uVar12) {
      uVar5 = uVar12;
    }
    do {
      uVar13 = uVar5;
      if (uVar5 == uVar15) break;
      uVar10 = uVar15 >> 9;
      uVar14 = uVar15 & 0x1ff;
      uVar13 = uVar15;
      uVar15 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[0x17])[uVar10] +
                                         (ulonglong)uVar14 * 2) - 1U));
  }
  if (uVar13 != uVar12) {
    do {
      pcVar3 = local_c8;
      if (((int)uVar13 < 0) ||
         ((int)param_1[0x16] * 0x200 + *(int *)((longlong)param_1 + 0xb4) <= (int)uVar13)) {
        bVar16 = false;
      }
      else {
        bVar16 = (ushort)(*(short *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar13 >> 9) * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      local_88._0_1_ = bVar16;
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      pcVar3 = local_c8;
      uVar11 = (ulonglong)(uVar13 >> 9);
      uVar8 = (ulonglong)(uVar13 & 0x1ff);
      local_88._0_1_ = *(short *)(*(longlong *)(param_1[0x17] + uVar11 * 8) + uVar8 * 2) == 1;
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      pcVar3 = local_c8;
      uVar5 = 0xffffffff;
      if ((((int)uVar13 < 0) ||
          ((int)param_1[0x16] * 0x200 + *(int *)((longlong)param_1 + 0xb4) <= (int)uVar13)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[0x17] + uVar11 * 8) + uVar8 * 2) - 1U))
         ) {
        local_88._0_1_ = false;
        uVar15 = 0xffffffff;
      }
      else {
        lVar2 = *(longlong *)(param_1[0x1e] + uVar11 * 8);
        uVar15 = *(uint *)(lVar2 + uVar8 * 0xc);
        uVar5 = *(uint *)(lVar2 + 4 + uVar8 * 0xc);
        if (((int)uVar15 < 0) ||
           ((int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc) <= (int)uVar15)) {
          local_88._0_1_ = false;
        }
        else {
          local_88._0_1_ =
               (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar15 >> 9) * 8) +
                                  (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe;
        }
      }
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      pcVar3 = local_c8;
      if (((int)uVar5 < 0) ||
         ((int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc) <= (int)uVar5)) {
        local_88._0_1_ = false;
      }
      else {
        local_88._0_1_ =
             (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar5 >> 9) * 8) +
                                (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      pcVar3 = local_c8;
      local_88 = CONCAT31(local_88._1_3_,(int)uVar15 < (int)uVar5);
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar5 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar12) {
        uVar5 = uVar12;
      }
      do {
        uVar15 = uVar5;
        if (uVar5 - 1 == uVar13) break;
        uVar13 = uVar13 + 1;
        uVar15 = uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (param_1[0x17] + (ulonglong)(uVar13 >> 9) * 8) +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar13 = uVar15;
    } while (uVar13 != uVar12);
  }
  if (((int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24) == 0) && (0 < (int)param_1[7]))
  {
    uVar13 = 0;
    do {
      pcVar3 = local_c8;
      if ((int)uVar13 < (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc)) {
        bVar16 = (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar13 >> 9) * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      else {
        bVar16 = false;
      }
      local_88 = CONCAT31(local_88._1_3_,bVar16);
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)param_1[7]);
  }
  uVar11 = 0;
  uVar13 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
  if ((uVar13 != 0) && (0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
    uVar11 = 1;
    uVar12 = 1;
    if (1 < (int)uVar13) {
      uVar11 = (ulonglong)uVar13;
    }
    do {
      uVar5 = uVar12;
      if ((uint)uVar11 == uVar5) goto LAB_1483a345e;
      uVar12 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar5 >> 9] +
                                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
    uVar11 = (ulonglong)uVar5;
  }
LAB_1483a345e:
  if ((uint)uVar11 != uVar13) {
    local_158 = param_1 + 8;
    local_15c = uVar13;
    do {
      pcVar3 = local_c8;
      uVar13 = (uint)uVar11;
      if (((int)uVar13 < 0) ||
         ((int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc) <= (int)uVar13)) {
        bVar16 = false;
      }
      else {
        bVar16 = (ushort)(*(short *)(*(longlong *)(param_1[2] + (uVar11 >> 9) * 8) +
                                    (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      local_88 = CONCAT31(local_88._1_3_,bVar16);
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      plVar4 = local_158;
      FUN_146be983e(&local_88,local_158,uVar11,0);
      if ((longlong *)CONCAT44(uStack_84,local_88) != plVar4) goto LAB_1483a3544;
      if (uStack_80 != uVar13) goto LAB_1483a3544;
      if ((int)uStack_70 != -1) goto LAB_1483a3544;
      pcVar3 = local_c8;
      iVar7 = uStack_70._4_4_;
      while (local_c8 = pcVar3, iVar7 != -1) {
LAB_1483a3544:
        do {
          uVar12 = local_68;
          pcVar3 = local_c8;
          if (((int)local_68 < 0) ||
             ((int)param_1[0x16] * 0x200 + *(int *)((longlong)param_1 + 0xb4) <= (int)local_68)) {
            bVar16 = false;
          }
          else {
            bVar16 = (ushort)(*(short *)(*(longlong *)
                                          (param_1[0x17] + (ulonglong)(local_68 >> 9) * 8) +
                                        (ulonglong)(local_68 & 0x1ff) * 2) - 1U) < 0xfffe;
          }
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          local_108._0_1_ = bVar16;
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          pcVar3 = local_c8;
          lVar2 = *(longlong *)(param_1[0x1e] + (ulonglong)(uVar12 >> 9) * 8);
          uVar8 = (ulonglong)(uVar12 & 0x1ff);
          local_108._0_1_ = true;
          if (*(uint *)(lVar2 + uVar8 * 0xc) != uVar13) {
            local_108._0_1_ = *(uint *)(lVar2 + uVar8 * 0xc + 4) == uVar13;
          }
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          lVar2 = *(longlong *)(param_1[0x1e] + (ulonglong)(uVar12 >> 9) * 8);
          uVar5 = *(uint *)(lVar2 + uVar8 * 0xc);
          uVar15 = *(uint *)(lVar2 + 4 + uVar8 * 0xc);
          uVar10 = 0xffffffff;
          if (uVar15 == uVar13) {
            uVar10 = uVar5;
          }
          if (uVar5 == uVar13) {
            uVar10 = uVar15;
          }
          uVar5 = FUN_1483a4254(param_1,uVar11,uVar10);
          pcVar3 = local_c8;
          local_108._0_1_ = uVar5 != 0xffffffff;
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          pcVar3 = local_c8;
          local_108._0_1_ = uVar5 == uVar12;
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          uVar5 = FUN_1483a4254(param_1,uVar10,uVar11);
          pcVar3 = local_c8;
          local_108._0_1_ = uVar5 != 0xffffffff;
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          pcVar3 = local_c8;
          local_108 = (undefined1 *)CONCAT71(local_108._1_7_,uVar5 == uVar12);
          pppuVar9 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar9 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar9)[1])();
          (*pcVar3)(uVar6,&local_108);
          if (local_78 == 0) {
            uStack_7c = 0xffffffff;
            uStack_70 = 0xffffffffffffffff;
            uStack_70._4_4_ = -1;
            uStack_70._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_88);
          }
        } while ((((longlong *)CONCAT44(uStack_84,local_88) != local_158) || (uStack_80 != uVar13))
                || (pcVar3 = local_c8, iVar7 = uStack_70._4_4_, (int)uStack_70 != -1));
      }
      uVar1 = *(ushort *)
               (*(longlong *)(param_1[2] + (uVar11 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 2);
      uVar12 = (uint)uVar1;
      iVar7 = 0;
      if (uVar1 == 0xffff) {
        uVar12 = 0;
      }
      uVar5 = *(uint *)(*(longlong *)(param_1[9] + (uVar11 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 4);
      if (uVar5 != 0xffffffff) {
        iVar7 = *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
      }
      local_88._1_3_ = (undefined3)((uint)local_88 >> 8);
      local_88 = CONCAT31(local_88._1_3_,iVar7 + 1U == uVar12);
      pppuVar9 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar9 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar12 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)local_15c) {
        uVar12 = local_15c;
      }
      do {
        if (uVar12 - 1 == (int)uVar11) {
          uVar11 = (ulonglong)uVar12;
          break;
        }
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar13 >> 9) * 8)
                                           + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar11 != local_15c);
  }
  local_148[0] = local_c8;
  local_138[0] = 0;
  if (local_c8 != (code *)0x0) {
    pppuVar9 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar9 = &local_a8;
    }
    (*(code *)**pppuVar9)(pppuVar9,local_138);
  }
  (**(code **)(*param_1 + 0x18))(param_1,local_148);
  uVar6 = CONCAT71((int7)(uVar11 >> 8),local_149);
  if (local_c8 != (code *)0x0) {
    pppuVar9 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar9 = local_b8;
    }
    (*(code *)(*pppuVar9)[2])(pppuVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a3c18 FUN_1483a3c18 body=348 status=ok
// SIG undefined FUN_1483a3c18(void)

void FUN_1483a3c18(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [31];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar6 = 0;
  if ((uVar8 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar7 = 1;
    uVar3 = 1;
    if (1 < (int)uVar8) {
      uVar7 = uVar8;
    }
    do {
      uVar6 = uVar7;
      if (uVar7 == uVar3) break;
      uVar5 = uVar3 >> 9;
      uVar9 = uVar3 & 0x1ff;
      uVar6 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar5] +
                                         (ulonglong)uVar9 * 2) - 1U));
  }
  if (uVar6 != uVar8) {
    do {
      FUN_1483a40a6(param_1,local_68,uVar6);
      local_49 = FUN_146bfed03(local_68);
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar2 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(uVar2,&local_49);
      uVar7 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar8) {
        uVar7 = uVar8;
      }
      do {
        uVar3 = uVar7;
        if (uVar7 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar3 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar3;
    } while (uVar6 != uVar8);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a3d76 FUN_1483a3d76 body=120 status=ok
// SIG undefined FUN_1483a3d76(void)

undefined8 * FUN_1483a3d76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae74f60;
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_141224b64(param_1 + 8);
  FUN_141224904(param_1 + 0x16);
  FUN_141040b84(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_1483a3e14(param_1 + 0x1d);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 1483a3dee FUN_1483a3dee body=38 status=ok
// SIG undefined FUN_1483a3dee(void)

undefined8 FUN_1483a3dee(undefined8 param_1,int param_2)

{
  FUN_1483a4068();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a3e14 FUN_1483a3e14 body=97 status=ok
// SIG undefined FUN_1483a3e14(void)

undefined8 * FUN_1483a3e14(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1800);
  memset(_Dst,0,0x1800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1483a3ec2(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1483a3e76 FUN_1483a3e76 body=38 status=ok
// SIG undefined FUN_1483a3e76(void)

undefined8 FUN_1483a3e76(undefined8 param_1,int param_2)

{
  FUN_1483a3f48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a3ec2 FUN_1483a3ec2 body=132 status=ok
// SIG undefined FUN_1483a3ec2(void)

void FUN_1483a3ec2(longlong param_1,int param_2)

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



// FUNCTION 1483a3f48 FUN_1483a3f48 body=87 status=ok
// SIG undefined FUN_1483a3f48(void)

void FUN_1483a3f48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae74f60;
  FUN_1483a3fa0(param_1 + 0x1e,0);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c64e(param_1 + 0x16);
  FUN_141082ade(param_1 + 8);
  FUN_14117c64e(param_1 + 1);
  return;
}



// FUNCTION 1483a3fa0 FUN_1483a3fa0 body=103 status=ok
// SIG undefined FUN_1483a3fa0(void)

void FUN_1483a3fa0(longlong *param_1,int param_2)

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
    FUN_1483a4008(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1483a4008 FUN_1483a4008 body=96 status=ok
// SIG undefined FUN_1483a4008(void)

void FUN_1483a4008(longlong param_1,int param_2)

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



// FUNCTION 1483a4068 FUN_1483a4068 body=62 status=ok
// SIG undefined FUN_1483a4068(void)

void FUN_1483a4068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae74f40;
  FUN_146bee5d0(param_1 + 0x23,0);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1483a3f48(param_1);
  return;
}



// FUNCTION 1483a40a6 FUN_1483a40a6 body=195 status=ok
// SIG undefined FUN_1483a40a6(void)

void FUN_1483a40a6(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (((-1 < (int)param_3) &&
      ((int)param_3 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8) +
                         (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar4 = param_3 * 3 + 2;
    lVar3 = *(longlong *)(param_1 + 0x118);
    uVar1 = *(undefined8 *)
             (*(longlong *)(lVar3 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 8);
    uVar4 = param_3 * 3 + 1;
    uVar2 = *(undefined8 *)
             (*(longlong *)(lVar3 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 8);
    *param_2 = *(undefined8 *)
                (*(longlong *)(lVar3 + (ulonglong)(param_3 * 3 >> 9) * 8) +
                (ulonglong)(param_3 * 3 & 0x1ff) * 8);
    param_2[1] = uVar2;
    param_2[2] = uVar1;
    return;
  }
  *param_2 = 0x7fefffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1483a416a FUN_1483a416a body=153 status=ok
// SIG undefined FUN_1483a416a(void)

int FUN_1483a416a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1483a4204();
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = param_2[2];
  iVar2 = iVar1 * 3 + 2;
  lVar3 = 0x10;
  do {
    FUN_146b9c256(param_1 + 0x110,(longlong)&local_40 + lVar3,iVar2);
    lVar3 = lVar3 + -8;
    iVar2 = iVar2 + -1;
  } while (lVar3 != -8);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4204 FUN_1483a4204 body=80 status=ok
// SIG undefined FUN_1483a4204(void)

int FUN_1483a4204(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c08aba(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 0x40) * 0x200 + *(int *)(param_1 + 0x44)) {
    FUN_146c8b31e(param_1 + 0x40,iVar1);
  }
  FUN_146c86b80(param_1 + 0x40,iVar1);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  return iVar1;
}



// FUNCTION 1483a4254 FUN_1483a4254 body=280 status=ok
// SIG undefined FUN_1483a4254(void)

uint FUN_1483a4254(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = param_3;
  if (param_2 < param_3) {
    iVar1 = param_2;
    param_2 = param_3;
  }
  lVar2 = param_1 + 0x40;
  FUN_146be983e(&local_58,lVar2,iVar1,0);
  if ((((local_58 != lVar2) || (local_50 != iVar1)) || ((int)local_40 != -1)) ||
     (local_40._4_4_ != -1)) {
    lVar3 = local_58;
    iVar4 = local_50;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(local_38 >> 9) * 8) + 4
                  + (ulonglong)(local_38 & 0x1ff) * 0xc) == param_2) goto LAB_1483a42bf;
      if (local_48 == 0) {
        local_4c = 0xffffffff;
        local_40 = 0xffffffffffffffff;
        local_40._4_4_ = -1;
        local_40._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_58);
        lVar3 = local_58;
        iVar4 = local_50;
      }
    } while (((lVar3 != lVar2) || (iVar4 != iVar1)) ||
            (((int)local_40 != -1 || (local_40._4_4_ != -1))));
  }
  local_38 = 0xffffffff;
LAB_1483a42bf:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a43a0 FUN_1483a43a0 body=29 status=ok
// SIG undefined FUN_1483a43a0(void)

undefined8 FUN_1483a43a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a43be FUN_1483a43be body=8 status=ok
// SIG undefined FUN_1483a43be(void)

void FUN_1483a43be(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 1483a43f0 FUN_1483a43f0 body=29 status=ok
// SIG undefined FUN_1483a43f0(void)

undefined8 FUN_1483a43f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a4440 FUN_1483a4440 body=29 status=ok
// SIG undefined FUN_1483a4440(void)

undefined8 FUN_1483a4440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a445e FUN_1483a445e body=210 status=ok
// SIG undefined FUN_1483a445e(void)

void FUN_1483a445e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  local_50 = param_4;
  iVar1 = FUN_1483a416a(param_1,&local_68);
  local_48 = *param_3;
  local_40 = param_3[1];
  local_38 = param_3[2];
  iVar2 = iVar1 * 3 + 2;
  lVar3 = 0x10;
  do {
    FUN_146b9c256(param_1 + 0x128,(longlong)&local_48 + lVar3,iVar2);
    lVar3 = lVar3 + -8;
    iVar2 = iVar2 + -1;
  } while (lVar3 != -8);
  FUN_146b9c256(param_1 + 0x140,&local_50,iVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4532 FUN_1483a4532 body=208 status=ok
// SIG undefined FUN_1483a4532(void)

void FUN_1483a4532(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = *(undefined8 *)(param_3 + 4);
  FUN_1483a4700(param_1,param_2,&local_68);
  local_48 = *param_4;
  local_40 = param_4[1];
  local_38 = param_4[2];
  iVar1 = (int)param_2 * 3 + 2;
  lVar2 = 0x10;
  do {
    FUN_146b9c256(param_1 + 0x128,(longlong)&local_48 + lVar2,iVar1);
    lVar2 = lVar2 + -8;
    iVar1 = iVar1 + -1;
  } while (lVar2 != -8);
  FUN_146b9c256(param_1 + 0x140,&stack0x00000028,param_2 & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4604 FUN_1483a4604 body=252 status=ok
// SIG undefined FUN_1483a4604(void)

undefined8 FUN_1483a4604(longlong param_1,uint param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 0xffffffff;
  if ((((-1 < (int)param_2) &&
       (uVar4 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc), (int)param_2 < (int)uVar4))
      && (param_3 < uVar4)) && (-1 < (int)param_3)) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (param_2 != param_3)) {
      if (1 < (ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8) +
                                 (ulonglong)(param_3 & 0x1ff) * 2) + 1U)) {
        iVar2 = FUN_1483a4254(param_1,param_2,param_3);
        uVar3 = 0xfffffffe;
        if (iVar2 == -1) {
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8) +
                            (ulonglong)(param_3 & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          iVar2 = *(int *)(param_1 + 0x108);
          if (*(int *)(param_1 + 0x108) < param_4 + 1) {
            iVar2 = param_4 + 1;
          }
          *(int *)(param_1 + 0x108) = iVar2;
          uVar3 = FUN_1483a47f2(param_1,param_2,param_3,param_4);
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
          *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
        }
      }
    }
  }
  return uVar3;
}



// FUNCTION 1483a4700 FUN_1483a4700 body=150 status=ok
// SIG undefined FUN_1483a4700(void)

void FUN_1483a4700(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1483a4798();
  if (cVar1 != '\0') {
    local_38 = *param_3;
    local_30 = param_3[1];
    local_28 = param_3[2];
    iVar3 = param_2 * 3 + 2;
    lVar2 = 0x10;
    do {
      FUN_146b9c256(param_1 + 0x110,(longlong)&local_38 + lVar2,iVar3);
      lVar2 = lVar2 + -8;
      iVar3 = iVar3 + -1;
    } while (lVar2 != -8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4798 FUN_1483a4798 body=90 status=ok
// SIG undefined FUN_1483a4798(void)

undefined4 FUN_1483a4798(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146c0943e(param_1 + 8);
  if ((char)uVar1 != '\0') {
    if (param_2 < *(int *)(param_1 + 0x40) * 0x200 + *(int *)(param_1 + 0x44)) {
      FUN_146c8b31e(param_1 + 0x40,param_2);
    }
    FUN_146c86b80(param_1 + 0x40,param_2);
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  }
  return uVar1;
}



// FUNCTION 1483a47f2 FUN_1483a47f2 body=156 status=ok
// SIG undefined FUN_1483a47f2(void)

undefined4 FUN_1483a47f2(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = param_2;
  if (param_3 < param_2) {
    iVar2 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  uVar1 = FUN_146c08aba(param_1 + 0xb0);
  local_3c = iVar2;
  local_38 = param_2;
  local_34 = param_4;
  FUN_1483a4890(param_1 + 0xe8,&local_3c,uVar1);
  FUN_146c86bd4(param_1 + 0x40,iVar2,uVar1);
  FUN_146c86bd4(param_1 + 0x40,param_2,uVar1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4890 FUN_1483a4890 body=101 status=ok
// SIG undefined FUN_1483a4890(void)

void FUN_1483a4890(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar3 = (uint)param_3;
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
      return;
    }
    FUN_1483a499a(param_1,param_3 & 0xffffffff);
  }
  FUN_1483a48f6(param_1,param_2);
  return;
}



// FUNCTION 1483a48f6 FUN_1483a48f6 body=163 status=ok
// SIG undefined FUN_1483a48f6(void)

void FUN_1483a48f6(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar3 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x1800);
      memset(_Dst,0,0x1800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_1483a3ec2(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar3 = *param_1;
    }
    iVar3 = iVar3 + 1;
    *param_1 = iVar3;
    param_1[1] = 0;
    uVar4 = 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8);
  *(undefined4 *)(lVar2 + 8 + (ulonglong)uVar4 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + (ulonglong)uVar4 * 0xc) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1483a499a FUN_1483a499a body=218 status=ok
// SIG undefined FUN_1483a499a(void)

void FUN_1483a499a(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_1483a4a74(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x1800);
        memset(_Dst,0,0x1800);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_1483a3ec2(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 1483a4a74 FUN_1483a4a74 body=106 status=ok
// SIG undefined FUN_1483a4a74(void)

void FUN_1483a4a74(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_1483a4ade(param_1);
    return;
  }
  return;
}



// FUNCTION 1483a4ade FUN_1483a4ade body=63 status=ok
// SIG undefined FUN_1483a4ade(void)

void FUN_1483a4ade(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483a4b1e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1483a4b1e FUN_1483a4b1e body=97 status=ok
// SIG undefined FUN_1483a4b1e(void)

ulonglong FUN_1483a4b1e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1483a4b80 FUN_1483a4b80 body=82 status=ok
// SIG undefined FUN_1483a4b80(void)

void FUN_1483a4b80(longlong *param_1)

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
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1483a4bd2(param_1);
  return;
}



// FUNCTION 1483a4bd2 FUN_1483a4bd2 body=48 status=ok
// SIG undefined FUN_1483a4bd2(void)

void FUN_1483a4bd2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1483a4c02 FUN_1483a4c02 body=112 status=ok
// SIG undefined FUN_1483a4c02(void)

void FUN_1483a4c02(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x20) == param_2)
        goto LAB_1483a4c0f;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1483a4c0f:
  if ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0 && lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    *param_3 = *(undefined8 *)(lVar3 + 8);
    param_3[1] = uVar1;
  }
  return;
}



// FUNCTION 1483a4c72 FUN_1483a4c72 body=153 status=ok
// SIG undefined FUN_1483a4c72(void)

undefined8 * FUN_1483a4c72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae74fe0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_1483a649e;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1483a4d0c FUN_1483a4d0c body=38 status=ok
// SIG undefined FUN_1483a4d0c(void)

undefined8 FUN_1483a4d0c(undefined8 param_1,int param_2)

{
  FUN_1483a64bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a4d3e FUN_1483a4d3e body=197 status=ok
// SIG undefined FUN_1483a4d3e(void)

undefined4 FUN_1483a4d3e(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a4de7;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1483a4de7;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_1483a6570(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_1483a4de7:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4e08 FUN_1483a4e08 body=164 status=ok
// SIG undefined FUN_1483a4e08(void)

bool FUN_1483a4e08(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
      return false;
    }
    iVar2 = *(int *)(param_1 + 0xcc);
  }
  FUN_1483a6a2e(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 1483a4eac FUN_1483a4eac body=76 status=ok
// SIG undefined FUN_1483a4eac(void)

void FUN_1483a4eac(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4efa FUN_1483a4efa body=152 status=ok
// SIG undefined FUN_1483a4efa(void)

undefined8 FUN_1483a4efa(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < iVar1) goto LAB_1483a4f6e;
  }
  else if (*(ulonglong *)(param_1 + 0x10) ==
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
    iVar1 = *(int *)(param_1 + 0xcc);
LAB_1483a4f6e:
    local_28 = param_4;
    FUN_1483a6eca(param_1,iVar1,param_2,param_3);
    if (*(int *)(param_3 + 1) != 0) {
      FUN_1483a7277(*param_3);
      uVar2 = 1;
      goto LAB_1483a4f51;
    }
  }
  uVar2 = 0;
LAB_1483a4f51:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a4f94 FUN_1483a4f94 body=237 status=ok
// SIG undefined FUN_1483a4f94(void)

undefined4 * FUN_1483a4f94(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0 [12];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_70 [3];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_110);
  if (iVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
  }
  else {
    local_128 = *param_3;
    uStack_124 = param_3[1];
    uStack_120 = param_3[2];
    uStack_11c = param_3[3];
    local_118 = *(undefined8 *)(param_3 + 4);
    local_138 = local_40;
    FUN_1483a692a(param_1[1],iVar1,local_70,local_58);
    local_f8 = local_118;
    local_108 = local_128;
    uStack_104 = uStack_124;
    uStack_100 = uStack_120;
    uStack_fc = uStack_11c;
    puVar3 = local_70;
    puVar4 = local_f0;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_146bd2a7a(&local_108);
    *(undefined8 *)(param_2 + 4) = local_80;
  }
  *param_2 = local_90;
  param_2[1] = uStack_8c;
  param_2[2] = uStack_88;
  param_2[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5082 FUN_1483a5082 body=157 status=ok
// SIG undefined FUN_1483a5082(void)

bool FUN_1483a5082(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a5101;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a5101:
    bVar1 = false;
    goto LAB_1483a5103;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_1483a7904(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_1483a5103:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5120 FUN_1483a5120 body=194 status=ok
// SIG undefined FUN_1483a5120(void)

undefined4
FUN_1483a5120(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a51c6;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1483a51c6;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_1483a7c68(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_1483a51c6:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a51e4 FUN_1483a51e4 body=156 status=ok
// SIG undefined FUN_1483a51e4(void)

undefined8 FUN_1483a51e4(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double *local_20;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) goto LAB_1483a5235;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a5235:
      uVar2 = 0;
      goto LAB_1483a5237;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_28 = *param_3;
  if (3.4028234663852886e+38 <= local_28) {
    local_28 = 3.4028234663852886e+38;
  }
  local_c = 0xffffffff;
  local_20 = param_3;
  uVar2 = FUN_1483a7fd8(local_28,iVar1,param_2);
LAB_1483a5237:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5282 FUN_1483a5282 body=316 status=ok
// SIG undefined FUN_1483a5282(void)

undefined8 *
FUN_1483a5282(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a5382;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a5382:
    *param_2 = 0xffffffffffffffff;
    goto LAB_1483a5389;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    dVar1 = dVar1 * dVar1;
    local_38 = dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_1483a83e8(dVar1,*(undefined4 *)(param_1 + 0xcc));
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_1483a5389:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a53c0 FUN_1483a53c0 body=422 status=ok
// SIG undefined FUN_1483a53c0(void)

void FUN_1483a53c0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar8 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar8 < 0) goto LAB_1483a5529;
  }
  else {
    if (param_1[2] !=
        (ulonglong)
        (uint)(*(int *)(*(longlong *)param_1[1] + 0x214) + *(int *)(*(longlong *)param_1[1] + 0x218)
              )) goto LAB_1483a5529;
    uVar8 = *(uint *)((longlong)param_1 + 0xcc);
  }
  lVar3 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar8 >> 9) * 8);
  lVar6 = (ulonglong)((uVar8 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar8 >> 9) * 8);
  local_80 = *(double *)(lVar3 + 0x10 + lVar6);
  dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar3 + 8 + lVar6);
  dVar2 = *(double *)(lVar4 + 8 + lVar6);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
  local_74 = 0;
  pcVar5 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar7 = (*pcVar5)(uVar9,&local_a8,&local_74);
  if (cVar7 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_1483a5529:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5568 FUN_1483a5568 body=1281 status=ok
// SIG undefined FUN_1483a5568(void)

void FUN_1483a5568(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_1483a56aa:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_1483a56aa;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5a6a FUN_1483a5a6a body=212 status=ok
// SIG undefined FUN_1483a5a6a(void)

bool FUN_1483a5a6a(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a5b16;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a5b16:
    bVar2 = false;
    goto LAB_1483a5b18;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_1483a9476;
  local_80 = param_3;
  iVar1 = FUN_1483a9122(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_1483a5b18:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5b40 FUN_1483a5b40 body=195 status=ok
// SIG undefined FUN_1483a5b40(void)

undefined8
FUN_1483a5b40(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_1483a5b95;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a5b95:
      uVar2 = 0;
      goto LAB_1483a5b97;
    }
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_1483a9d5a;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar2 = FUN_1483a948a(param_1,iVar1,param_2,param_3);
LAB_1483a5b97:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a5c04 FUN_1483a5c04 body=1009 status=ok
// SIG undefined FUN_1483a5c04(void)

uint FUN_1483a5c04(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  uint local_12c;
  longlong *local_128;
  longlong *local_120;
  int local_118;
  uint local_114;
  longlong *local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_1;
  local_120 = param_2;
  if ((*(int *)((longlong)param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < *(int *)((longlong)param_1 + 0xcc)) goto LAB_1483a5c7d;
  }
  else if (param_1[2] ==
           (ulonglong)
           (uint)(*(int *)(*(longlong *)param_1[1] + 0x214) +
                 *(int *)(*(longlong *)param_1[1] + 0x218))) {
LAB_1483a5c7d:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14ae750c0;
        local_88 = FUN_1483a9d6e;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_d4;
        *(undefined4 *)(param_3 + 1) = uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_cc;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_bc;
        *(undefined4 *)(param_3 + 4) = uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b4;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
      }
      cVar6 = FUN_1483a93b6(local_128,*(undefined4 *)((longlong)local_128 + 0xcc),param_3);
      if (cVar6 == '\0') goto LAB_1483a5c72;
    }
    plVar5 = local_120;
    local_118 = *(int *)(*local_120 + 0x140) * 0x200 + *(int *)(*local_120 + 0x144);
    if (local_118 < 1) {
      local_12c = 0;
      uVar7 = local_12c;
    }
    else {
      plVar1 = param_4 + 4;
      local_12c = (uint)CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      uVar12 = 0;
      iVar11 = 0;
      local_110 = plVar1;
      do {
        pcVar3 = (code *)*param_4;
        if (pcVar3 == (code *)0x0) {
          local_138 = &local_a8;
          FUN_1483a692a(local_120,iVar11,&local_d8,&uStack_c0);
        }
        else {
          lVar4 = *(longlong *)(plVar5[1] + 0x78);
          local_114 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                               (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
          uVar7 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                           (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
          uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4);
          lVar4 = *(longlong *)
                   (*(longlong *)(plVar5[1] + 0x48) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
          uVar9 = (ulonglong)((uVar2 & 0xff) << 3);
          local_100 = (double)*(float *)(lVar4 + 4 + uVar9);
          local_108 = (double)*(float *)(lVar4 + uVar9);
          local_f8 = 0;
          plVar10 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar10 = plVar1;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(&local_f0,uVar8,&local_108);
          local_c8 = local_e0;
          lVar4 = *(longlong *)
                   (*(longlong *)(plVar5[1] + 0x48) + (ulonglong)(uVar7 >> 5 & 0x3fffff8));
          uVar9 = (ulonglong)((uVar7 & 0xff) << 3);
          local_100 = (double)*(float *)(lVar4 + 4 + uVar9);
          local_108 = (double)*(float *)(lVar4 + uVar9);
          local_f8 = 0;
          pcVar3 = (code *)*param_4;
          plVar10 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar10 = plVar1;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(&local_f0,uVar8,&local_108);
          uStack_b0 = local_e0;
          lVar4 = *(longlong *)
                   (*(longlong *)(plVar5[1] + 0x48) + (ulonglong)(local_114 >> 5 & 0x3fffff8));
          uVar9 = (ulonglong)((local_114 & 0xff) << 3);
          local_100 = (double)*(float *)(lVar4 + 4 + uVar9);
          local_108 = (double)*(float *)(lVar4 + uVar9);
          local_f8 = 0;
          pcVar3 = (code *)*param_4;
          plVar10 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar10 = plVar1;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          (*pcVar3)(&local_f0,uVar8,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        plVar10 = local_128;
        cVar6 = (**(code **)(*local_128 + 0x88))(local_128,&local_d8,param_5);
        uVar7 = local_12c;
        if (cVar6 != '\0') break;
        iVar11 = iVar11 + 1;
        local_12c = (uint)CONCAT71((int7)((ulonglong)plVar10 >> 8),iVar11 < local_118);
        uVar12 = uVar12 + 3;
        uVar7 = local_12c;
      } while (local_118 != iVar11);
    }
    goto LAB_1483a5f46;
  }
LAB_1483a5c72:
  uVar7 = 0;
LAB_1483a5f46:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffff01;
}



// FUNCTION 1483a5ff6 FUN_1483a5ff6 body=570 status=ok
// SIG undefined FUN_1483a5ff6(void)

undefined8 *
FUN_1483a5ff6(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_1483aa74e;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_1483a608d;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x10) !=
        (ulonglong)
        (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
              *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1483a608d;
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_1483a9df4(param_1,iVar1,param_3,param_4);
LAB_1483a608d:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a6232 FUN_1483a6232 body=475 status=ok
// SIG undefined FUN_1483a6232(void)

undefined8 *
FUN_1483a6232(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_1483aad9a;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a62d8;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) goto LAB_1483a62d8;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_1483aac2e(param_1,param_2,param_3);
LAB_1483a62d8:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a640e FUN_1483a640e body=142 status=ok
// SIG undefined FUN_1483a640e(void)

undefined8 FUN_1483a640e(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483a647f;
  }
  else if (*(ulonglong *)(param_1 + 0x10) !=
           (ulonglong)
           (uint)(*(int *)(**(longlong **)(param_1 + 8) + 0x214) +
                 *(int *)(**(longlong **)(param_1 + 8) + 0x218))) {
LAB_1483a647f:
    uVar1 = 0;
    goto LAB_1483a6481;
  }
  local_10 = &local_19;
  local_18 = FUN_1483ab82c;
  local_28 = param_3;
  uVar1 = FUN_1483aac2e(param_1,0,param_2);
LAB_1483a6481:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a64bc FUN_1483a64bc body=180 status=ok
// SIG undefined FUN_1483a64bc(void)

void FUN_1483a64bc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae74fe0;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x0001483a6565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1483a6570 FUN_1483a6570 body=803 status=ok
// SIG undefined FUN_1483a6570(void)

undefined8
FUN_1483a6570(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,undefined4 *param_5,
             longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  longlong local_160;
  double *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [3];
  undefined1 local_a0 [24];
  undefined4 local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_158 = param_4;
  local_150 = param_3;
  while (puVar9 = local_150, *(int *)(param_1 + 200) <= (int)uVar10) {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      dVar13 = (double)FUN_1483a6894(param_1,~uVar8,local_150);
      uVar8 = ~uVar8;
      if (*local_158 < dVar13) goto LAB_1483a6854;
    }
    else {
      uVar8 = uVar8 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_1483a6894(param_1,uVar8,local_150);
      dVar14 = (double)FUN_1483a6894(param_1,uVar10,puVar9);
      pdVar3 = local_158;
      if (dVar14 <= dVar13) {
        if (*local_158 <= dVar14) goto LAB_1483a6854;
        local_160 = param_6;
        local_168 = param_5;
        FUN_1483a6570(param_1,uVar10,local_150,local_158);
        if (*pdVar3 <= dVar13) goto LAB_1483a6854;
      }
      else {
        if (*local_158 <= dVar13) goto LAB_1483a6854;
        local_160 = param_6;
        local_168 = param_5;
        FUN_1483a6570(param_1,uVar8,local_150,local_158);
        uVar8 = uVar10;
        if (*pdVar3 <= dVar14) goto LAB_1483a6854;
      }
    }
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
  }
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                   (ulonglong)(uVar10 & 0x1ff) * 4);
  if (0 < iVar12) {
    do {
      uVar10 = uVar10 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
               (ulonglong)(uVar10 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1483a67cb:
        local_168 = local_88;
        FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar1,local_b8,local_a0);
        local_138 = local_150[2];
        local_148 = *local_150;
        uStack_140 = local_150[1];
        puVar9 = local_b8;
        puVar11 = local_130;
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        dVar13 = (double)FUN_146bd2a7a(&local_148);
        if (dVar13 < *local_158) {
          *local_158 = dVar13;
          *param_5 = uVar1;
        }
      }
      else {
        local_148 = CONCAT44(local_148._4_4_,uVar1);
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_6 + 0x30);
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_148);
        if (cVar4 != '\0') goto LAB_1483a67cb;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
LAB_1483a6854:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1483a6894 FUN_1483a6894 body=150 status=ok
// SIG undefined FUN_1483a6894(void)

double FUN_1483a6894(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 1483a692a FUN_1483a692a body=260 status=ok
// SIG undefined FUN_1483a692a(void)

void FUN_1483a692a(longlong param_1,int param_2,double *param_3,double *param_4,double *param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = param_2 * 3 + 2;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
  uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                   (ulonglong)(uVar2 & 0x1ff) * 4);
  uVar5 = param_2 * 3 + 1;
  uVar5 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4);
  uVar3 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + (ulonglong)(uVar3 >> 5 & 0x3fffff8));
  uVar6 = (ulonglong)((uVar3 & 0xff) << 3);
  fVar1 = *(float *)(lVar4 + 4 + uVar6);
  *param_3 = (double)*(float *)(lVar4 + uVar6);
  param_3[1] = (double)fVar1;
  param_3[2] = 0.0;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + (ulonglong)(uVar5 >> 5 & 0x3fffff8));
  uVar6 = (ulonglong)((uVar5 & 0xff) << 3);
  fVar1 = *(float *)(lVar4 + 4 + uVar6);
  *param_4 = (double)*(float *)(lVar4 + uVar6);
  param_4[1] = (double)fVar1;
  param_4[2] = 0.0;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
  uVar6 = (ulonglong)((uVar2 & 0xff) << 3);
  fVar1 = *(float *)(lVar4 + 4 + uVar6);
  *param_5 = (double)*(float *)(lVar4 + uVar6);
  param_5[1] = (double)fVar1;
  param_5[2] = 0.0;
  return;
}



// FUNCTION 1483a6a2e FUN_1483a6a2e body=871 status=ok
// SIG undefined FUN_1483a6a2e(void)

void FUN_1483a6a2e(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                  undefined4 *param_5,undefined8 *param_6,longlong param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 *local_178;
  double *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [3];
  undefined1 local_b0 [24];
  undefined4 local_98 [6];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar7) {
    do {
      uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
      if ((int)uVar8 < 0) {
        uVar8 = ~uVar8;
        dVar14 = (double)FUN_1483a6d96(param_1,uVar8,local_178);
        bVar13 = *param_4 + 1e-08 < dVar14;
LAB_1483a6c4d:
        uVar11 = (ulonglong)uVar8;
        if (bVar13) goto LAB_1483a6d4f;
      }
      else {
        uVar8 = uVar8 - 1;
        uVar7 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
        uVar11 = (ulonglong)uVar7;
        dVar14 = (double)FUN_1483a6d96(param_1,uVar8,param_3);
        dVar15 = (double)FUN_1483a6d96(param_1,uVar11,param_3);
        if (dVar15 <= dVar14) {
          if (dVar15 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_1483a6a2e(param_1,uVar7,local_178,param_4);
            bVar13 = *param_4 + 1e-08 < dVar14;
            goto LAB_1483a6c4d;
          }
          goto LAB_1483a6d4f;
        }
        if (*param_4 + 1e-08 < dVar14) goto LAB_1483a6d4f;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_1483a6a2e(param_1,uVar8,local_178,param_4);
        if (*param_4 + 1e-08 < dVar15) goto LAB_1483a6d4f;
      }
      uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar11 >> 9) * 8) +
                       (ulonglong)((uint)uVar11 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar7);
  }
  iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar12) {
    do {
      uVar7 = uVar7 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1483a6b3d:
        local_198 = local_98;
        FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar1,local_c8,local_b0);
        local_168 = *local_178;
        uStack_160 = local_178[1];
        local_158 = local_178[2];
        uStack_150 = local_178[3];
        local_148 = *(undefined4 *)(local_178 + 4);
        uStack_144 = *(undefined4 *)((longlong)local_178 + 0x24);
        uStack_140 = *(undefined4 *)(local_178 + 5);
        uStack_13c = *(undefined4 *)((longlong)local_178 + 0x2c);
        puVar9 = local_c8;
        puVar10 = local_138;
        for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        cVar3 = FUN_146bd80f0(&local_168);
        if ((cVar3 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = uVar1;
          param_6[2] = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e0;
        }
      }
      else {
        local_168 = CONCAT44(local_168._4_4_,uVar1);
        plVar5 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar5 = (longlong *)(param_7 + 0x30);
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar2)(uVar4,&local_168);
        if (cVar3 != '\0') goto LAB_1483a6b3d;
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
LAB_1483a6d4f:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a6d96 FUN_1483a6d96 body=307 status=ok
// SIG undefined FUN_1483a6d96(void)

void FUN_1483a6d96(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 1483a6eca FUN_1483a6eca body=940 status=ok
// SIG undefined FUN_1483a6eca(void)

void FUN_1483a6eca(longlong param_1,uint param_2,undefined4 *param_3,longlong *param_4,
                  double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  double *pdVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  undefined4 *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [3];
  undefined1 local_d0 [24];
  double local_b8 [3];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar21 = SUB84(dVar2,0);
  uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar21 = 0xe0000000;
    uVar22 = 0x47efffff;
  }
  uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar12) {
    do {
      uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8)
                        + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar13 < 0) {
        uVar13 = ~uVar13;
        dVar2 = (double)FUN_1483a6d96(param_1,uVar13,local_1b8);
        bVar18 = (double)CONCAT44(uVar22,uVar21) + 1e-08 < dVar2;
LAB_1483a7126:
        uVar16 = (ulonglong)uVar13;
        if (bVar18) goto LAB_1483a720f;
      }
      else {
        uVar13 = uVar13 - 1;
        uVar12 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        uVar16 = (ulonglong)uVar12;
        dVar19 = (double)FUN_1483a6d96(param_1,uVar13,param_3);
        dVar20 = (double)FUN_1483a6d96(param_1,uVar16,param_3);
        dVar2 = (double)CONCAT44(uVar22,uVar21) + 1e-08;
        if (dVar20 <= dVar19) {
          if (dVar20 <= dVar2) {
            local_1c8 = param_5;
            FUN_1483a6eca(param_1,uVar12,local_1b8,param_4);
            bVar18 = dVar2 < dVar19;
            goto LAB_1483a7126;
          }
          goto LAB_1483a720f;
        }
        if (dVar2 < dVar19) goto LAB_1483a720f;
        local_1c8 = param_5;
        FUN_1483a6eca(param_1,uVar13,local_1b8,param_4);
        if (dVar2 < dVar20) goto LAB_1483a720f;
      }
      dVar2 = *param_5;
      uVar21 = SUB84(dVar2,0);
      uVar22 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar21 = 0xe0000000;
        uVar22 = 0x47efffff;
      }
      uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar16 >> 9) * 8) +
                        (ulonglong)((uint)uVar16 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar12);
  }
  iVar17 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
                   (ulonglong)(uVar12 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar17) {
    do {
      uVar12 = uVar12 + 1;
      uVar3 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
               (ulonglong)(uVar12 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_1483a6ff3:
        local_1c8 = local_b8;
        FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar3,local_e8,local_d0);
        local_188 = *local_1b8;
        uStack_184 = local_1b8[1];
        uStack_180 = local_1b8[2];
        uStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        uStack_174 = local_1b8[5];
        uStack_170 = local_1b8[6];
        uStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        uStack_164 = local_1b8[9];
        uStack_160 = local_1b8[10];
        uStack_15c = local_1b8[0xb];
        puVar14 = local_e8;
        puVar15 = local_158;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        cVar8 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar7 = local_1b0;
        if ((cVar8 != '\0') && (local_110 <= (double)CONCAT44(uVar22,uVar21) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar11 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar7;
          *(undefined4 *)(lVar6 + lVar11 * 0x28) = uVar3;
          *(double *)(lVar6 + 8 + lVar11 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar11 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar11 * 0x28) = local_198;
        }
      }
      else {
        pdVar10 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar10 = param_5 + 6;
        }
        local_188 = uVar3;
        uVar9 = (**(code **)((longlong)*pdVar10 + 8))();
        cVar8 = (*pcVar5)(uVar9,&local_188);
        if (cVar8 != '\0') goto LAB_1483a6ff3;
      }
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
LAB_1483a720f:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a7277 FUN_1483a7277 body=957 status=ok
// SIG undefined FUN_1483a7277(void)

void FUN_1483a7277(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar23 + fVar23);
    plVar15 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar15;
      puVar16 = (undefined8 *)plVar15[1];
      iVar18 = (int)plVar15[2];
      uVar12 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar10) >> 3) * -0x33333333 + 1;
      puVar17 = puVar16;
      puVar19 = puVar16;
      puVar20 = puVar10;
      if (iVar18 != 0) {
LAB_1483a7348:
        if (8 < (int)uVar12) {
          uVar13 = (ulonglong)(uVar12 >> 1);
          uVar1 = puVar10[uVar13 * 5 + 4];
          uVar2 = puVar10[uVar13 * 5];
          uVar3 = (puVar10 + uVar13 * 5)[1];
          uVar4 = puVar10[uVar13 * 5 + 2];
          uVar5 = (puVar10 + uVar13 * 5 + 2)[1];
          puVar10[uVar13 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar13 * 5 + 2] = puVar10[2];
          (puVar10 + uVar13 * 5 + 2)[1] = uVar8;
          puVar10[uVar13 * 5] = uVar6;
          (puVar10 + uVar13 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar14 = puVar16 + 5;
          puVar11 = puVar10;
          do {
            puVar17 = puVar11 + 5;
            puVar9 = puVar11 + 5;
            do {
              puVar21 = puVar9;
              puVar11 = puVar17;
              if (puVar16 < puVar11) break;
              puVar17 = puVar11 + 5;
              puVar9 = puVar21 + 5;
            } while ((double)puVar11[1] < (double)puVar10[1] ||
                     (double)puVar11[1] == (double)puVar10[1]);
            puVar9 = puVar14 + -10;
            do {
              puVar17 = puVar14;
              puVar22 = puVar9;
              puVar14 = puVar17 + -5;
              if (puVar14 <= puVar10) break;
              puVar9 = puVar22 + -5;
            } while ((double)puVar10[1] < (double)puVar17[-4] ||
                     (double)puVar10[1] == (double)puVar17[-4]);
            if (puVar14 < puVar11) goto LAB_1483a747b;
            uVar1 = puVar11[4];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar11[4] = puVar17[-1];
            uVar6 = *puVar14;
            uVar7 = puVar17[-4];
            uVar8 = puVar17[-2];
            puVar11[2] = puVar17[-3];
            puVar11[3] = uVar8;
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar17[-1] = uVar1;
            puVar17[-3] = uVar4;
            puVar17[-2] = uVar5;
            *puVar14 = uVar2;
            puVar17[-4] = uVar3;
          } while( true );
        }
        for (; puVar19 = puVar10, puVar17 = puVar10, puVar10 < puVar16; puVar16 = puVar16 + -5) {
          while (puVar20 = puVar19, puVar17 = puVar17 + 5, puVar17 <= puVar16) {
            puVar19 = puVar17;
            if ((double)puVar17[1] < (double)puVar20[1] || (double)puVar17[1] == (double)puVar20[1])
            {
              puVar19 = puVar20;
            }
          }
          local_48 = puVar20[4];
          local_68 = *puVar20;
          uStack_60 = puVar20[1];
          local_58 = puVar20[2];
          uStack_50 = puVar20[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar20[4] = puVar16[4];
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar20[2] = puVar16[2];
          puVar20[3] = uVar3;
          *puVar20 = uVar1;
          puVar20[1] = uVar2;
          puVar16[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_1483a7610;
      }
LAB_1483a7625:
      FUN_1483a7635(puVar10,uVar12,puVar17,param_4);
LAB_1483a7610:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1483a747b:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar17[-1];
  uVar1 = *puVar14;
  uVar2 = puVar17[-4];
  uVar3 = puVar17[-2];
  puVar10[2] = puVar17[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar17[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-3] = local_58;
  puVar17[-2] = uStack_50;
  *(undefined4 *)puVar14 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar22 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar21) {
    if (puVar11 < puVar16) {
      *plVar15 = (longlong)puVar11;
      plVar15[1] = (longlong)puVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar21 = puVar10;
    if (puVar14 <= puVar10 + 5) goto LAB_1483a7610;
  }
  else {
    if (puVar10 + 5 < puVar14) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar10 = puVar11;
    puVar17 = puVar16;
    puVar22 = puVar16;
    if (puVar16 <= puVar11) goto LAB_1483a7610;
  }
  uVar12 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3) * -0x33333333 + 1;
  puVar16 = puVar17;
  puVar19 = puVar22;
  puVar20 = puVar21;
  if (iVar18 == 0) goto LAB_1483a7625;
  goto LAB_1483a7348;
}



// FUNCTION 1483a7635 FUN_1483a7635 body=717 status=ok
// SIG undefined FUN_1483a7635(void)

void FUN_1483a7635(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x0001483a7669:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x0001483a7669;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a7904 FUN_1483a7904 body=866 status=ok
// SIG undefined FUN_1483a7904(void)

ulonglong FUN_1483a7904(longlong param_1,uint param_2,undefined8 *param_3,double *param_4,
                       undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  longlong local_160;
  undefined8 *local_158;
  double *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [3];
  undefined1 local_a0 [24];
  undefined4 local_88 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  local_158 = param_3;
  if ((int)uVar7 < *(int *)(param_1 + 200)) {
    local_150 = param_4;
    if (0 < (int)uVar8) {
      do {
        uVar7 = uVar7 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_6 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_1483a79fd:
          local_168 = local_88;
          FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar1,local_b8,local_a0);
          local_138 = local_158[2];
          local_148 = *local_158;
          uStack_140 = local_158[1];
          puVar10 = local_b8;
          puVar14 = local_130;
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar14 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar14 = puVar14 + 1;
          }
          dVar15 = (double)FUN_146bd2a7a(&local_148);
          if (dVar15 < *local_150) {
            *local_150 = dVar15;
            *param_5 = uVar1;
            uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
            goto LAB_1483a7ab3;
          }
        }
        else {
          local_148 = CONCAT44(local_148._4_4_,uVar1);
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4,&local_148);
          if (cVar3 != '\0') goto LAB_1483a79fd;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar12 = (undefined7)((ulonglong)param_4 >> 8);
    if ((int)uVar8 < 0) {
      dVar15 = (double)FUN_1483a6894(param_1,~uVar8,param_3);
      if (dVar15 <= *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar3 = FUN_1483a7904(param_1,~uVar8,local_158,param_4);
LAB_1483a7c5a:
        uVar11 = CONCAT71(uVar12,1);
        if (cVar3 != '\0') goto LAB_1483a7ab3;
      }
    }
    else {
      iVar9 = uVar8 - 1;
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      dVar15 = (double)FUN_1483a6894(param_1,iVar9,param_3);
      dVar16 = (double)FUN_1483a6894(param_1,iVar13,param_3);
      if (dVar16 <= dVar15) {
        if (dVar16 < *param_4) {
          local_160 = param_6;
          local_168 = param_5;
          cVar3 = FUN_1483a7904(param_1,iVar13,local_158,param_4);
          uVar11 = CONCAT71(uVar12,1);
          if (cVar3 != '\0') goto LAB_1483a7ab3;
          iVar13 = iVar9;
          if (dVar15 < *param_4) goto LAB_1483a7c24;
        }
      }
      else if (dVar15 < *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar3 = FUN_1483a7904(param_1,iVar9,local_158,param_4);
        uVar11 = CONCAT71(uVar12,1);
        if (cVar3 != '\0') goto LAB_1483a7ab3;
        if (dVar16 < *param_4) {
LAB_1483a7c24:
          local_160 = param_6;
          local_168 = param_5;
          cVar3 = FUN_1483a7904(param_1,iVar13,local_158,param_4);
          goto LAB_1483a7c5a;
        }
      }
    }
  }
  uVar11 = 0;
LAB_1483a7ab3:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1483a7c68 FUN_1483a7c68 body=879 status=ok
// SIG undefined FUN_1483a7c68(void)

void FUN_1483a7c68(longlong param_1,uint param_2,double *param_3,double *param_4,uint *param_5,
                  longlong param_6)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  uint local_7c [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar11) {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      dVar14 = (double)FUN_1483a6894(param_1,~uVar8,param_3);
      uVar8 = ~uVar8;
      if (*param_4 < dVar14) goto LAB_1483a7fa3;
    }
    else {
      uVar8 = uVar8 - 1;
      uVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4) - 1;
      dVar14 = (double)FUN_1483a6894(param_1,uVar8,param_3);
      dVar15 = (double)FUN_1483a6894(param_1,uVar11,param_3);
      if (dVar15 <= dVar14) {
        if (*param_4 <= dVar15) goto LAB_1483a7fa3;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1483a7c68(param_1,uVar11,param_3,param_4);
        if (*param_4 <= dVar14) goto LAB_1483a7fa3;
      }
      else {
        if (*param_4 <= dVar14) goto LAB_1483a7fa3;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1483a7c68(param_1,uVar8,param_3,param_4);
        uVar8 = uVar11;
        if (*param_4 <= dVar15) goto LAB_1483a7fa3;
      }
    }
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar12 = 1;
    do {
      uVar8 = *(uint *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar12 + uVar11 >> 9) * 8) +
                       (ulonglong)(iVar12 + uVar11 & 0x1ff) * 4);
      pcVar1 = *(code **)(param_6 + 0x10);
      if (pcVar1 == (code *)0x0) {
LAB_1483a7ea3:
        uVar7 = uVar8 * 3 + 2;
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x78);
        uVar9 = uVar8 * 3 + 1;
        local_7c[0] = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar8 * 3 >> 9) * 8) +
                               (ulonglong)(uVar8 * 3 & 0x1ff) * 4);
        local_7c[1] = *(undefined4 *)
                       (*(longlong *)(lVar5 + (ulonglong)(uVar9 >> 9) * 8) +
                       (ulonglong)(uVar9 & 0x1ff) * 4);
        local_7c[2] = *(undefined4 *)
                       (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
        lVar5 = 0;
        do {
          uVar8 = local_7c[lVar5];
          lVar2 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x48) +
                   (ulonglong)(uVar8 >> 5 & 0x3fffff8));
          uVar10 = (ulonglong)((uVar8 & 0xff) << 3);
          dVar15 = *param_3 - (double)*(float *)(lVar2 + uVar10);
          dVar14 = param_3[1] - (double)*(float *)(lVar2 + 4 + uVar10);
          dVar14 = param_3[2] * param_3[2] + dVar15 * dVar15 + dVar14 * dVar14;
          if (dVar14 < *param_4) {
            *param_4 = dVar14;
            *param_5 = uVar8;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
      }
      else {
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = local_88;
        }
        local_7c[0] = uVar8;
        uVar4 = (**(code **)(*plVar6 + 8))();
        cVar3 = (*pcVar1)(uVar4,local_7c);
        if (cVar3 != '\0') goto LAB_1483a7ea3;
      }
      bVar13 = iVar12 != local_8c;
      iVar12 = iVar12 + 1;
    } while (bVar13);
  }
LAB_1483a7fa3:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a7fd8 FUN_1483a7fd8 body=1038 status=ok
// SIG undefined FUN_1483a7fd8(void)

ulonglong FUN_1483a7fd8(longlong param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                       undefined8 *param_5,double *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  undefined7 uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  double *local_1f0;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1e0 = param_3;
  if ((int)uVar14 < *(int *)(param_1 + 200)) {
    iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      local_1d8 = param_3 + 6;
      do {
        uVar14 = uVar14 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar3 = (code *)param_6[2];
        if (pcVar3 == (code *)0x0) {
LAB_1483a80f2:
          local_1f8 = &local_1d0;
          FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar1,&local_1a0,&local_1b8);
          local_1f8 = &local_1d0;
          cVar5 = FUN_146bd896c(local_1e0,local_1d8,&local_1a0,&local_1b8);
          if (cVar5 != '\0') {
            local_188[2] = local_190;
            local_188[0] = local_1a0;
            local_188[1] = uStack_198;
            local_188[3] = local_1b8;
            uStack_168 = uStack_1b0;
            local_160 = local_1a8;
            local_158 = local_1d0;
            uStack_150 = uStack_1c8;
            local_148 = local_1c0;
            local_138 = *local_1e0;
            uStack_134 = local_1e0[1];
            uStack_130 = local_1e0[2];
            uStack_12c = local_1e0[3];
            local_128 = *(undefined8 *)(local_1e0 + 4);
            uStack_120 = *(undefined8 *)(local_1e0 + 6);
            local_118 = local_1e0[8];
            uStack_114 = local_1e0[9];
            uStack_110 = local_1e0[10];
            uStack_10c = local_1e0[0xb];
            puVar11 = local_188;
            puVar13 = local_108;
            for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            }
            cVar5 = FUN_146bd80f0(&local_138);
            if ((cVar5 != '\0') && (local_c0 < *param_6)) {
              uVar9 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
              goto LAB_1483a825b;
            }
          }
        }
        else {
          pdVar7 = (double *)param_6[4];
          if ((double *)param_6[4] == (double *)0x0) {
            pdVar7 = param_6 + 6;
          }
          local_138 = uVar1;
          uVar6 = (**(code **)((longlong)*pdVar7 + 8))();
          cVar5 = (*pcVar3)(uVar6,&local_138);
          if (cVar5 != '\0') goto LAB_1483a80f2;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((int)uVar2 < 0) {
      dVar4 = (double)FUN_1483a6d96(param_1,~uVar2,param_3);
      if (dVar4 <= (double)param_5 + 1e-08) {
        local_1f0 = param_6;
        local_1f8 = param_5;
        cVar5 = FUN_1483a7fd8(param_1,~uVar2,local_1e0,param_4);
LAB_1483a83da:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar5 != '\0') goto LAB_1483a825b;
      }
    }
    else {
      iVar12 = uVar2 - 1;
      iVar15 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) + -1;
      dVar16 = (double)FUN_1483a6d96(param_1,iVar12,param_3);
      dVar17 = (double)FUN_1483a6d96(param_1,iVar15,param_3);
      dVar4 = (double)param_5 + 1e-08;
      if (dVar17 <= dVar16) {
        if (dVar17 <= dVar4) {
          local_1f0 = param_6;
          local_1f8 = param_5;
          cVar5 = FUN_1483a7fd8(param_1,iVar15,local_1e0,param_4);
          iVar15 = iVar12;
          dVar17 = dVar16;
          goto joined_r0x0001483a8388;
        }
      }
      else if (dVar16 <= dVar4) {
        local_1f0 = param_6;
        local_1f8 = param_5;
        cVar5 = FUN_1483a7fd8(param_1,iVar12,local_1e0,param_4);
joined_r0x0001483a8388:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar5 != '\0') goto LAB_1483a825b;
        if (dVar17 <= dVar4) {
          local_1f0 = param_6;
          local_1f8 = param_5;
          cVar5 = FUN_1483a7fd8(param_1,iVar15,local_1e0,param_4);
          goto LAB_1483a83da;
        }
      }
    }
  }
  uVar9 = 0;
LAB_1483a825b:
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a83e8 FUN_1483a83e8 body=2503 status=ok
// SIG undefined FUN_1483a83e8(void)

void FUN_1483a83e8(longlong *param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  int local_2a0;
  double *local_298;
  undefined8 *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_270;
  longlong *local_268;
  int local_25c;
  ulonglong local_258;
  int local_24c;
  undefined8 *local_248;
  longlong *local_240;
  longlong *local_238;
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [3];
  undefined1 local_b0 [24];
  undefined4 local_98 [6];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar5 = *(uint *)(*(longlong *)(param_1[0xe] + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar13 = (int)param_1[0x19];
  local_270 = param_3;
  if (((int)uVar5 < iVar13) && ((int)uVar11 < *(int *)(param_3 + 200))) {
    local_25c = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
    local_24c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8)
                        + (ulonglong)(uVar11 & 0x1ff) * 4);
    local_210 = -1.0;
    local_258 = (ulonglong)uVar5;
    local_248 = param_4;
    if (0 < local_24c) {
      local_238 = (longlong *)(param_10 + 0x30);
      local_240 = param_4 + 4;
      local_268 = (longlong *)(param_9 + 0x30);
      local_258 = (ulonglong)(uVar5 + 1);
      iVar13 = 1;
      local_230 = (ulonglong)uVar11;
      do {
        uVar5 = iVar13 + (int)local_230;
        uVar18 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4);
        pcVar1 = *(code **)(param_10 + 0x10);
        if (pcVar1 == (code *)0x0) {
LAB_1483a85ca:
          local_2a8 = &local_e8;
          FUN_1483a692a(*(undefined8 *)(param_3 + 8),uVar18,&local_118,&local_100);
          plVar10 = local_240;
          puVar12 = local_248;
          pcVar1 = (code *)*local_248;
          if (pcVar1 != (code *)0x0) {
            plVar8 = (longlong *)local_248[2];
            if ((longlong *)local_248[2] == (longlong *)0x0) {
              plVar8 = local_240;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_118);
            local_108 = local_218;
            local_118._0_4_ = local_228;
            local_118._4_4_ = uStack_224;
            uStack_110 = uStack_220;
            uStack_10c = uStack_21c;
            pcVar1 = (code *)*puVar12;
            plVar8 = (longlong *)puVar12[2];
            if ((longlong *)puVar12[2] == (longlong *)0x0) {
              plVar8 = plVar10;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_100);
            local_f0 = local_218;
            local_100 = local_228;
            uStack_fc = uStack_224;
            uStack_f8 = uStack_220;
            uStack_f4 = uStack_21c;
            pcVar1 = (code *)*puVar12;
            plVar8 = (longlong *)puVar12[2];
            if ((longlong *)puVar12[2] == (longlong *)0x0) {
              plVar8 = plVar10;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            (*pcVar1)(&local_228,uVar6,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar12 = &local_118;
          puVar14 = local_1a8;
          for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          local_210 = -1.0;
          param_3 = local_270;
          if (0 < local_25c) {
            uVar7 = local_258 & 0xffffffff;
            iVar15 = local_25c;
            do {
              uVar22 = *(undefined4 *)
                        (*(longlong *)(param_1[0x17] + (uVar7 >> 9) * 8) +
                        (ulonglong)((uint)uVar7 & 0x1ff) * 4);
              pcVar1 = *(code **)(param_9 + 0x10);
              if (pcVar1 == (code *)0x0) {
LAB_1483a879f:
                local_2a8 = local_98;
                FUN_1483a692a(param_1[1],uVar22,local_c8,local_b0);
                param_3 = local_270;
                puVar12 = local_c8;
                puVar14 = local_160;
                for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *puVar14 = *puVar12;
                  puVar12 = puVar12 + 1;
                  puVar14 = puVar14 + 1;
                }
                local_210 = -1.0;
                dVar19 = (double)FUN_146bd8e44(&local_210);
                if (dVar19 < *param_7) {
                  *param_7 = dVar19;
                  *param_8 = CONCAT44(uVar18,uVar22);
                }
              }
              else {
                plVar10 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar10 = local_268;
                }
                local_228 = uVar22;
                uVar6 = (**(code **)(*plVar10 + 8))();
                cVar4 = (*pcVar1)(uVar6,&local_228);
                if (cVar4 != '\0') goto LAB_1483a879f;
              }
              uVar7 = (ulonglong)((uint)uVar7 + 1);
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
        }
        else {
          plVar10 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar10 = local_238;
          }
          local_228 = uVar18;
          uVar6 = (**(code **)(*plVar10 + 8))();
          cVar4 = (*pcVar1)(uVar6,&local_228);
          if (cVar4 != '\0') goto LAB_1483a85ca;
        }
        bVar17 = iVar13 != local_24c;
        iVar13 = iVar13 + 1;
      } while (bVar17);
    }
    goto LAB_1483a8b5e;
  }
  bVar17 = (param_6 & 1) == 0;
  if ((bVar17 || (int)uVar5 < iVar13) &&
      (*(int *)(param_3 + 200) <= (int)uVar11 || !bVar17 && (int)uVar5 >= iVar13)) {
    uVar7 = (ulonglong)((param_2 >> 9) << 3);
    lVar9 = *(longlong *)(param_1[0x11] + uVar7);
    lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar2 = *(longlong *)(param_1[0x14] + uVar7);
    local_1e8 = *(double *)(lVar9 + 0x10 + lVar3);
    dVar19 = *(double *)(lVar2 + 0x10 + lVar3);
    local_200 = local_1e8 - dVar19;
    local_1f0 = *(double *)(lVar9 + 8 + lVar3);
    dVar20 = *(double *)(lVar2 + 8 + lVar3);
    local_208 = local_1f0 - dVar20;
    local_210 = *(double *)(lVar9 + lVar3) - *(double *)(lVar2 + lVar3);
    local_1e8 = local_1e8 + dVar19;
    local_1f0 = local_1f0 + dVar20;
    local_1f8 = *(double *)(lVar9 + lVar3) + *(double *)(lVar2 + lVar3);
    uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4);
    local_268 = param_1;
    if ((int)uVar5 < 0) {
      FUN_1483a8db0(param_3,local_c8,~uVar5,param_4);
      dVar19 = (double)FUN_146bd8cba(local_c8,&local_210);
      if (*param_7 <= dVar19) goto LAB_1483a8b5e;
      local_280 = param_10;
      local_288 = param_9;
      local_290 = param_8;
      local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,~uVar5);
      plVar10 = local_268;
    }
    else {
      iVar13 = uVar5 - 1;
      iVar15 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                       (ulonglong)(uVar11 + 1 & 0x1ff) * 4) + -1;
      FUN_1483a8db0(param_3,local_c8,iVar13,param_4);
      FUN_1483a8db0(param_3,&local_118,iVar15,param_4);
      dVar20 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar21 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar19 = *param_7;
      uVar18 = SUB84(dVar19,0);
      uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (dVar20 <= dVar21) {
        if (dVar20 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar13);
          FUN_1483a83e8(local_268,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        iVar13 = iVar15;
        if ((double)CONCAT44(uVar22,uVar18) < dVar21 || (double)CONCAT44(uVar22,uVar18) == dVar21)
        goto LAB_1483a8b5e;
      }
      else {
        if (dVar21 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar15);
          FUN_1483a83e8(local_268,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar22,uVar18) < dVar20 || (double)CONCAT44(uVar22,uVar18) == dVar20)
        goto LAB_1483a8b5e;
      }
      local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,iVar13);
      plVar10 = local_268;
      param_3 = local_270;
      local_290 = param_8;
      local_288 = param_9;
      local_280 = param_10;
    }
  }
  else {
    FUN_1483a8db0(param_3,&local_210,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 >> 9) * 8) +
                       (ulonglong)(uVar5 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar19 = (double)FUN_1483a8f96(param_1,param_2,&local_210);
      if (*param_7 <= dVar19) goto LAB_1483a8b5e;
    }
    else {
      uVar11 = param_2 - 1;
      param_2 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4) - 1;
      dVar20 = (double)FUN_1483a8f96(param_1,uVar11,&local_210);
      dVar21 = (double)FUN_1483a8f96(param_1,param_2,&local_210);
      dVar19 = *param_7;
      uVar18 = SUB84(dVar19,0);
      uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (dVar20 <= dVar21) {
        if (dVar20 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
          FUN_1483a83e8(param_1,uVar11,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        bVar17 = (double)CONCAT44(uVar22,uVar18) == dVar21;
        bVar16 = (double)CONCAT44(uVar22,uVar18) < dVar21;
      }
      else {
        if (dVar21 < dVar19) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
          FUN_1483a83e8(param_1,param_2,local_270,param_4);
          uVar18 = SUB84(*param_7,0);
          uVar22 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        bVar17 = (double)CONCAT44(uVar22,uVar18) == dVar20;
        bVar16 = (double)CONCAT44(uVar22,uVar18) < dVar20;
        param_2 = uVar11;
      }
      if (bVar16 || bVar17) goto LAB_1483a8b5e;
    }
    local_288 = param_9;
    local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_5);
    plVar10 = param_1;
    param_3 = local_270;
    local_290 = param_8;
    local_280 = param_10;
  }
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  FUN_1483a83e8(plVar10,param_2,param_3,param_4);
LAB_1483a8b5e:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483a8db0 FUN_1483a8db0 body=484 status=ok
// SIG undefined FUN_1483a8db0(void)

double * FUN_1483a8db0(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_14ae750a0;
    local_88 = FUN_1483a909c;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a8f96 FUN_1483a8f96 body=260 status=ok
// SIG undefined FUN_1483a8f96(void)

void FUN_1483a8f96(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483a909c FUN_1483a909c body=62 status=ok
// SIG undefined FUN_1483a909c(void)

undefined8 FUN_1483a909c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 1483a9104 FUN_1483a9104 body=29 status=ok
// SIG undefined FUN_1483a9104(void)

undefined8 FUN_1483a9104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a9122 FUN_1483a9122 body=659 status=ok
// SIG undefined FUN_1483a9122(void)

int FUN_1483a9122(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined8 local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_d0 = param_3;
  if ((int)uVar7 < *(int *)(param_1 + 200)) {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                    (ulonglong)(uVar7 & 0x1ff) * 4);
    if (0 < iVar6) {
      do {
        uVar7 = uVar7 + 1;
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
        pcVar1 = *(code **)(param_6 + 0x10);
        if (pcVar1 == (code *)0x0) {
LAB_1483a9200:
          local_e8 = local_60;
          FUN_1483a692a(*(undefined8 *)(param_1 + 8),iVar3,local_90,local_78);
          cVar2 = (*(code *)*param_5)(param_5[1],local_d0,local_90);
          if (cVar2 != '\0') goto LAB_1483a9249;
        }
        else {
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          local_94 = iVar3;
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar2 = (*pcVar1)(uVar4,&local_94);
          if (cVar2 != '\0') goto LAB_1483a9200;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar3 = -1;
  }
  else {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      uVar8 = ~uVar8;
      cVar2 = FUN_1483a93b6(param_1,uVar8,param_4);
      iVar3 = -1;
      if (cVar2 == '\0') goto LAB_1483a9249;
      local_a8 = *param_5;
      local_e8 = &local_a8;
      local_a0 = param_5[1];
    }
    else {
      iVar6 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      cVar2 = FUN_1483a93b6(param_1,uVar8 - 1,param_4);
      if (cVar2 != '\0') {
        local_b8 = *param_5;
        local_e8 = &local_b8;
        local_b0 = param_5[1];
        local_e0 = param_6;
        iVar3 = FUN_1483a9122(param_1,uVar8 - 1,local_d0,param_4);
        if (iVar3 != -1) goto LAB_1483a9249;
      }
      uVar8 = iVar6 - 1;
      cVar2 = FUN_1483a93b6(param_1,uVar8,param_4);
      iVar3 = -1;
      if (cVar2 == '\0') goto LAB_1483a9249;
      local_c8 = *param_5;
      local_e8 = &local_c8;
      local_c0 = param_5[1];
    }
    local_e0 = param_6;
    iVar3 = FUN_1483a9122(param_1,uVar8,local_d0,param_4);
  }
LAB_1483a9249:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1483a93b6 FUN_1483a93b6 body=191 status=ok
// SIG undefined FUN_1483a93b6(void)

bool FUN_1483a93b6(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 1483a948a FUN_1483a948a body=2254 status=ok
// SIG undefined FUN_1483a948a(void)

ulonglong FUN_1483a948a(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 unaff_RBP;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  int local_220;
  undefined8 *local_218;
  longlong local_210;
  longlong local_208;
  int local_1f8;
  int local_1f4;
  longlong *local_1f0;
  ulonglong local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar23 = *(int *)(param_1 + 200);
  if (((int)uVar16 < iVar23) && ((int)uVar5 < *(int *)(param_3 + 200))) {
    local_1f4 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8)
                        + (ulonglong)(uVar5 & 0x1ff) * 4);
    if (0 < local_1f4) {
      local_1f8 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1f0 = param_4 + 4;
      local_1c8 = (longlong *)(param_8 + 0x30);
      local_1e8 = (ulonglong)(uVar16 + 1);
      uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      iVar23 = 1;
      local_1e0 = param_4;
      local_1d0 = (ulonglong)uVar5;
      do {
        uVar16 = iVar23 + (int)local_1d0;
        uVar6 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                 (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar7 = *(code **)(param_9 + 0x10);
        if (pcVar7 == (code *)0x0) {
LAB_1483a9660:
          local_228 = &local_118;
          FUN_1483a692a(*(undefined8 *)(param_3 + 8),uVar6,&local_148,&local_130);
          puVar14 = local_1e0;
          plVar20 = local_1f0;
          pcVar7 = (code *)*local_1e0;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_1e0[2];
            if ((longlong *)local_1e0[2] == (longlong *)0x0) {
              plVar19 = local_1f0;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_148);
            local_138 = local_150;
            local_148 = local_160;
            uStack_144 = uStack_15c;
            uStack_140 = uStack_158;
            uStack_13c = uStack_154;
            pcVar7 = (code *)*puVar14;
            plVar19 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar19 = plVar20;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_130);
            local_120 = local_150;
            local_130 = local_160;
            uStack_12c = uStack_15c;
            uStack_128 = uStack_158;
            uStack_124 = uStack_154;
            pcVar7 = (code *)*puVar14;
            plVar19 = (longlong *)puVar14[2];
            if ((longlong *)puVar14[2] == (longlong *)0x0) {
              plVar19 = plVar20;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_160,uVar17,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            uStack_114 = uStack_15c;
            uStack_110 = uStack_158;
            uStack_10c = uStack_154;
          }
          if (0 < local_1f8) {
            uVar21 = local_1e8 & 0xffffffff;
            iVar22 = local_1f8;
            do {
              uVar6 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar21 >> 9) * 8) +
                       (ulonglong)((uint)uVar21 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_8 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_1483a97f5:
                local_228 = local_c8;
                FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar6,&local_f8,&local_e0);
                cVar15 = (*(code *)*param_7)(param_7[1],&local_148,&local_f8);
                if (cVar15 != '\0') goto LAB_1483a98d2;
              }
              else {
                plVar20 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar20 = local_1c8;
                }
                local_160 = uVar6;
                uVar17 = (**(code **)(*plVar20 + 8))();
                cVar15 = (*pcVar7)(uVar17,&local_160);
                if (cVar15 != '\0') goto LAB_1483a97f5;
              }
              uVar21 = (ulonglong)((uint)uVar21 + 1);
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
        else {
          plVar20 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar20 = local_1d8;
          }
          local_160 = uVar6;
          uVar17 = (**(code **)(*plVar20 + 8))();
          cVar15 = (*pcVar7)(uVar17,&local_160);
          if (cVar15 != '\0') goto LAB_1483a9660;
        }
        bVar24 = iVar23 != local_1f4;
        uVar18 = CONCAT71((int7)(uVar18 >> 8),iVar23 < local_1f4);
        iVar23 = iVar23 + 1;
      } while (bVar24);
      goto LAB_1483a98d2;
    }
  }
  else {
    bVar24 = (param_6 & 1) == 0;
    if ((bVar24 || (int)uVar16 < iVar23) &&
        (*(int *)(param_3 + 200) <= (int)uVar5 || !bVar24 && (int)uVar16 >= iVar23)) {
      uVar18 = (ulonglong)((param_2 >> 9) << 3);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18);
      lVar13 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar18);
      dVar1 = *(double *)(lVar8 + 0x10 + lVar13);
      dVar2 = *(double *)(lVar9 + 0x10 + lVar13);
      dVar10 = dVar1 - dVar2;
      dVar3 = *(double *)(lVar8 + 8 + lVar13);
      dVar4 = *(double *)(lVar9 + 8 + lVar13);
      dVar11 = dVar3 - dVar4;
      dVar12 = *(double *)(lVar8 + lVar13) - *(double *)(lVar9 + lVar13);
      dVar1 = dVar1 + dVar2;
      dVar3 = dVar3 + dVar4;
      dVar2 = *(double *)(lVar8 + lVar13) + *(double *)(lVar9 + lVar13);
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 >> 9) * 8)
                        + (ulonglong)(uVar5 & 0x1ff) * 4);
      if ((int)uVar16 < 0) {
        FUN_1483a8db0(param_3,&local_f8,~uVar16,param_4);
        if ((((dVar2 <= local_f8) || (local_e0 <= dVar12)) ||
            ((dVar3 <= local_f0 || ((local_d8 <= dVar11 || (dVar1 <= local_e8)))))) ||
           (local_d0 <= dVar10)) goto LAB_1483a98d0;
        uVar17 = *param_7;
        local_218 = local_170;
      }
      else {
        iVar22 = uVar16 - 1;
        iVar23 = *(int *)(*(longlong *)
                           (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                         (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        FUN_1483a8db0(param_3,&local_f8,iVar22,param_4);
        if (((((local_f8 < dVar2) && (dVar12 < local_e0)) && (local_f0 < dVar3)) &&
            ((dVar11 < local_d8 && (local_e8 < dVar1)))) && (dVar10 < local_d0)) {
          local_180 = *param_7;
          local_218 = &local_180;
          local_178 = param_7[1];
          local_220 = param_6 + 1;
          local_208 = param_9;
          local_210 = param_8;
          local_228 = (undefined4 *)CONCAT44(local_228._4_4_,iVar22);
          cVar15 = FUN_1483a948a(param_1,param_2,param_3,param_4);
          uVar18 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
          if (cVar15 != '\0') goto LAB_1483a98d2;
        }
        param_5 = iVar23 - 1;
        FUN_1483a8db0(param_3,&local_148,param_5,param_4);
        uVar21 = 0;
        uVar18 = 0;
        if (((dVar2 <= (double)CONCAT44(uStack_144,local_148)) ||
            ((double)CONCAT44(uStack_12c,local_130) <= dVar12)) ||
           ((uVar18 = uVar21, dVar3 <= (double)CONCAT44(uStack_13c,uStack_140) ||
            ((((double)CONCAT44(uStack_124,uStack_128) <= dVar11 || (dVar1 <= local_138)) ||
             (local_120 <= dVar10)))))) goto LAB_1483a98d2;
        uVar17 = *param_7;
        local_218 = local_190;
      }
LAB_1483a9a62:
      *local_218 = uVar17;
      local_218[1] = param_7[1];
      local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
LAB_1483a9a9d:
      local_220 = param_6 + 1;
      local_208 = param_9;
      local_210 = param_8;
      uVar16 = FUN_1483a948a(param_1,param_2,param_3,param_4);
      uVar18 = (ulonglong)uVar16;
      goto LAB_1483a98d2;
    }
    FUN_1483a8db0(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                       + (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_1483a93b6(param_1,param_2,&local_f8);
      if (cVar15 != '\0') {
        local_1a0 = *param_7;
        local_218 = &local_1a0;
        local_198 = param_7[1];
        local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
        goto LAB_1483a9a9d;
      }
    }
    else {
      iVar22 = param_2 - 1;
      iVar23 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                       (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
      cVar15 = FUN_1483a93b6(param_1,iVar22,&local_f8);
      if (cVar15 != '\0') {
        local_1b0 = *param_7;
        local_218 = &local_1b0;
        local_1a8 = param_7[1];
        local_220 = param_6 + 1;
        local_208 = param_9;
        local_210 = param_8;
        local_228 = (undefined4 *)CONCAT44(local_228._4_4_,param_5);
        cVar15 = FUN_1483a948a(param_1,iVar22,param_3,param_4);
        uVar18 = CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
        if (cVar15 != '\0') goto LAB_1483a98d2;
      }
      param_2 = iVar23 - 1;
      cVar15 = FUN_1483a93b6(param_1,param_2,&local_f8);
      if (cVar15 != '\0') {
        uVar17 = *param_7;
        local_218 = local_1c0;
        goto LAB_1483a9a62;
      }
    }
  }
LAB_1483a98d0:
  uVar18 = 0;
LAB_1483a98d2:
  if ((local_b0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffff01;
}



// FUNCTION 1483a9d6e FUN_1483a9d6e body=62 status=ok
// SIG undefined FUN_1483a9d6e(void)

undefined8 FUN_1483a9d6e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 1483a9dd6 FUN_1483a9dd6 body=29 status=ok
// SIG undefined FUN_1483a9dd6(void)

undefined8 FUN_1483a9dd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483a9df4 FUN_1483a9df4 body=2393 status=ok
// SIG undefined FUN_1483a9df4(void)

void FUN_1483a9df4(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  undefined8 *puVar23;
  double *pdVar24;
  undefined8 *puVar25;
  double *pdVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_388 [32];
  undefined4 *local_368;
  int local_360;
  undefined8 local_358;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_330;
  int local_328;
  int local_324;
  undefined8 *local_320;
  longlong *local_318;
  ulonglong local_310;
  longlong *local_308;
  ulonglong local_300;
  longlong *local_2f8;
  undefined8 local_2f0 [2];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0 [2];
  undefined8 local_2c0 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0 [2];
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  double local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  double local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  double local_230 [4];
  double local_210;
  double local_208;
  undefined4 local_200 [6];
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar27 = *(int *)(param_1 + 200);
  local_330 = param_3;
  if (((int)uVar16 < iVar27) && ((int)uVar4 < *(int *)(param_3 + 200))) {
    local_324 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar4 >> 9) * 8)
                        + (ulonglong)(uVar4 & 0x1ff) * 4);
    local_320 = param_4;
    if (0 < local_324) {
      local_328 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 4);
      local_308 = (longlong *)(param_10 + 0x30);
      local_318 = param_4 + 4;
      local_2f8 = (longlong *)(param_9 + 0x30);
      local_310 = (ulonglong)(uVar16 + 1);
      iVar27 = 1;
      local_300 = (ulonglong)uVar4;
      do {
        uVar16 = iVar27 + (int)local_300;
        uVar5 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8) +
                 (ulonglong)(uVar16 & 0x1ff) * 4);
        pcVar7 = *(code **)(param_10 + 0x10);
        if (pcVar7 == (code *)0x0) {
LAB_1483aa000:
          local_368 = &local_248;
          FUN_1483a692a(*(undefined8 *)(param_3 + 8),uVar5,&local_278,&local_260);
          plVar21 = local_318;
          puVar23 = local_320;
          pcVar7 = (code *)*local_320;
          if (pcVar7 != (code *)0x0) {
            plVar19 = (longlong *)local_320[2];
            if ((longlong *)local_320[2] == (longlong *)0x0) {
              plVar19 = local_318;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_278);
            local_268 = local_280;
            local_278._0_4_ = local_290;
            local_278._4_4_ = uStack_28c;
            uStack_270 = uStack_288;
            uStack_26c = uStack_284;
            pcVar7 = (code *)*puVar23;
            plVar19 = (longlong *)puVar23[2];
            if ((longlong *)puVar23[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_260);
            local_250 = local_280;
            local_260 = local_290;
            uStack_25c = uStack_28c;
            uStack_258 = uStack_288;
            uStack_254 = uStack_284;
            pcVar7 = (code *)*puVar23;
            plVar19 = (longlong *)puVar23[2];
            if ((longlong *)puVar23[2] == (longlong *)0x0) {
              plVar19 = plVar21;
            }
            uVar17 = (**(code **)(*plVar19 + 8))();
            (*pcVar7)(&local_290,uVar17,&local_248);
            local_238 = local_280;
            local_248 = local_290;
            uStack_244 = uStack_28c;
            uStack_240 = uStack_288;
            uStack_23c = uStack_284;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar23 = &local_278;
          puVar25 = local_1e8;
          for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar25 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar25 = puVar25 + 1;
          }
          param_3 = local_330;
          if (0 < local_328) {
            uVar18 = local_310 & 0xffffffff;
            iVar22 = local_328;
            do {
              uVar6 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar18 >> 9) * 8) +
                       (ulonglong)((uint)uVar18 & 0x1ff) * 4);
              pcVar7 = *(code **)(param_9 + 0x10);
              if (pcVar7 == (code *)0x0) {
LAB_1483aa1c6:
                local_368 = local_200;
                FUN_1483a692a(*(undefined8 *)(param_1 + 8),uVar6,local_230,local_230 + 3);
                param_3 = local_330;
                local_14c = local_14c & 0xffffffff00000000;
                pdVar24 = local_230;
                pdVar26 = local_1a0;
                for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar26 = *pdVar24;
                  pdVar24 = pdVar24 + 1;
                  pdVar26 = pdVar26 + 1;
                }
                cVar15 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar15 != '\0') {
                  FUN_1483aa77c(local_1e8,uVar6,uVar5,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = local_2f8;
                }
                local_290 = uVar6;
                uVar17 = (**(code **)(*plVar21 + 8))();
                cVar15 = (*pcVar7)(uVar17,&local_290);
                if (cVar15 != '\0') goto LAB_1483aa1c6;
              }
              uVar18 = (ulonglong)((uint)uVar18 + 1);
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_308;
          }
          local_290 = uVar5;
          uVar17 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar7)(uVar17,&local_290);
          if (cVar15 != '\0') goto LAB_1483aa000;
        }
        bVar28 = iVar27 != local_324;
        iVar27 = iVar27 + 1;
      } while (bVar28);
    }
    goto LAB_1483aa4ee;
  }
  bVar28 = (param_6 & 1) == 0;
  if ((bVar28 || (int)uVar16 < iVar27) &&
      (*(int *)(param_3 + 200) <= (int)uVar4 || !bVar28 && (int)uVar16 >= iVar27)) {
    dVar1 = *(double *)(param_1 + 0x60);
    uVar18 = (ulonglong)((param_2 >> 9) << 3);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18);
    lVar14 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar18);
    dVar12 = *(double *)(lVar8 + lVar14) + dVar1;
    dVar10 = *(double *)(lVar8 + 8 + lVar14) + dVar1;
    dVar1 = dVar1 + *(double *)(lVar8 + 0x10 + lVar14);
    dVar2 = *(double *)(lVar20 + 0x10 + lVar14);
    dVar9 = dVar2 - dVar1;
    dVar3 = *(double *)(lVar20 + 8 + lVar14);
    dVar11 = dVar3 - dVar10;
    dVar13 = *(double *)(lVar20 + lVar14) - dVar12;
    dVar1 = dVar1 + dVar2;
    dVar10 = dVar10 + dVar3;
    dVar12 = dVar12 + *(double *)(lVar20 + lVar14);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar4 >> 9) * 8) +
                       (ulonglong)(uVar4 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_1483a8db0(param_3,local_230,param_5,param_4);
      if ((((dVar12 <= local_230[0]) || (local_230[3] <= dVar13)) ||
          ((dVar10 <= local_230[1] || ((local_210 <= dVar11 || (dVar1 <= local_230[2])))))) ||
         (local_208 <= dVar9)) goto LAB_1483aa4ee;
      uVar17 = *param_8;
      local_350 = local_2a0;
    }
    else {
      FUN_1483a8db0(param_3,local_230,param_5 - 1,param_4);
      if (((((local_230[0] < dVar12) && (dVar13 < local_230[3])) && (local_230[1] < dVar10)) &&
          ((dVar11 < local_210 && (local_230[2] < dVar1)))) && (dVar9 < local_208)) {
        local_2b0 = *param_8;
        local_350 = &local_2b0;
        local_2a8 = param_8[1];
        local_360 = param_6 + 1;
        local_340 = param_10;
        local_348 = param_9;
        local_358 = param_7;
        local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5 - 1);
        FUN_1483a9df4(param_1,param_2,local_330,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(local_330 + 0xb8) + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                        (ulonglong)(uVar4 + 1 & 0x1ff) * 4) - 1;
      FUN_1483a8db0(local_330,&local_278,param_5,param_4);
      if (((dVar12 <= (double)CONCAT44(local_278._4_4_,(undefined4)local_278)) ||
          ((double)CONCAT44(uStack_25c,local_260) <= dVar13)) ||
         ((dVar10 <= (double)CONCAT44(uStack_26c,uStack_270) ||
          ((((double)CONCAT44(uStack_254,uStack_258) <= dVar11 || (dVar1 <= local_268)) ||
           (local_250 <= dVar9)))))) goto LAB_1483aa4ee;
      uVar17 = *param_8;
      local_350 = local_2c0;
    }
  }
  else {
    FUN_1483a8db0(param_3,local_230,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 >> 9) * 8)
                       + (ulonglong)(uVar16 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar15 = FUN_1483a93b6(param_1,param_2,local_230);
      if (cVar15 == '\0') goto LAB_1483aa4ee;
      uVar17 = *param_8;
      local_350 = local_2d0;
    }
    else {
      cVar15 = FUN_1483a93b6(param_1,param_2 - 1,local_230);
      if (cVar15 != '\0') {
        local_2e0 = *param_8;
        local_350 = &local_2e0;
        local_2d8 = param_8[1];
        local_360 = param_6 + 1;
        local_340 = param_10;
        local_348 = param_9;
        local_358 = param_7;
        local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5);
        FUN_1483a9df4(param_1,param_2 - 1,local_330,param_4);
      }
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                        (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
      cVar15 = FUN_1483a93b6(param_1,param_2,local_230);
      if (cVar15 == '\0') goto LAB_1483aa4ee;
      uVar17 = *param_8;
      local_350 = local_2f0;
    }
  }
  *local_350 = uVar17;
  local_350[1] = param_8[1];
  local_360 = param_6 + 1;
  local_340 = param_10;
  local_348 = param_9;
  local_358 = param_7;
  local_368 = (undefined4 *)CONCAT44(local_368._4_4_,param_5);
  FUN_1483a9df4(param_1,param_2,local_330,param_4);
LAB_1483aa4ee:
  if ((local_b0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483aa74e FUN_1483aa74e body=45 status=ok
// SIG undefined FUN_1483aa74e(void)

bool FUN_1483aa74e(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 1483aa77c FUN_1483aa77c body=1201 status=ok
// SIG undefined FUN_1483aa77c(void)

void FUN_1483aa77c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_1483aa8b9;
    }
    if (iVar4 < 3) goto LAB_1483aa8b9;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_1483aa8b9;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_1483aa8b9;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_1483aa8b9:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483aac2e FUN_1483aac2e body=362 status=ok
// SIG undefined FUN_1483aac2e(void)

ulonglong FUN_1483aac2e(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_1483aadc8(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_1483aad6f;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_1483ab0cc(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_1483aad6f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 1483aad9a FUN_1483aad9a body=45 status=ok
// SIG undefined FUN_1483aad9a(void)

bool FUN_1483aad9a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 1483aadc8 FUN_1483aadc8 body=770 status=ok
// SIG undefined FUN_1483aadc8(void)

ulonglong FUN_1483aadc8(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  ulonglong local_238;
  longlong *local_230;
  int local_228 [6];
  uint local_210 [18];
  undefined8 local_1c8 [9];
  undefined8 local_180;
  undefined1 local_178;
  ulonglong local_174;
  undefined4 local_16c;
  undefined8 local_d8 [3];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined8 local_90 [3];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  pcVar2 = *(code **)(param_8 + 0x10);
  if (pcVar2 == (code *)0x0) {
LAB_1483aae6c:
    local_248 = local_60;
    FUN_1483a692a(*(undefined8 *)(param_1 + 8),(ulonglong)param_2,local_90,local_78);
    local_180 = 0x3e45798ee2308c3a;
    local_178 = 0;
    local_174 = 0;
    local_16c = 0;
    puVar8 = local_90;
    puVar10 = local_210;
    for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 2;
    }
    uVar7 = param_2 * 3 + 2;
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x78);
    uVar12 = param_2 * 3 + 1;
    local_228[3] = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(param_2 * 3 >> 9) * 8) +
                    (ulonglong)(param_2 * 3 & 0x1ff) * 4);
    local_228[4] = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                    (ulonglong)(uVar12 & 0x1ff) * 4);
    local_228[5] = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                    (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_3 < (int)param_4) {
      local_230 = (longlong *)(param_8 + 0x30);
      uVar9 = 0;
      local_238 = (ulonglong)param_2;
      do {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_8 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_1483aafaa:
          uVar7 = iVar1 * 3 + 2;
          lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x78);
          uVar12 = iVar1 * 3 + 1;
          local_228[0] = *(int *)(*(longlong *)(lVar5 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                                 (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
          local_228[1] = *(undefined4 *)
                          (*(longlong *)(lVar5 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4);
          local_228[2] = *(undefined4 *)
                          (*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                          (ulonglong)(uVar7 & 0x1ff) * 4);
          if (param_6 != '\0') {
            lVar5 = 0;
            do {
              lVar13 = 0;
              do {
                if (local_228[lVar5 + 3] == local_228[lVar13]) goto LAB_1483ab0b4;
                lVar13 = lVar13 + 1;
              } while (lVar13 != 3);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 3);
          }
          local_248 = local_a8;
          FUN_1483a692a(*(longlong *)(param_1 + 8),iVar1,local_d8,local_c0);
          local_174 = local_174 & 0xffffffff00000000;
          puVar8 = local_d8;
          puVar11 = local_1c8;
          for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          uVar7 = (*(code *)*param_7)(param_7[1],local_210);
          uVar9 = (ulonglong)uVar7;
          if ((char)uVar7 != '\0') {
            if (param_5 == 0) {
              uVar9 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
              break;
            }
            FUN_1483aa77c(local_210,local_238,iVar1,param_5);
          }
        }
        else {
          plVar6 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar6 = local_230;
          }
          local_228[0] = iVar1;
          uVar4 = (**(code **)(*plVar6 + 8))();
          cVar3 = (*pcVar2)(uVar4,local_228);
          if (cVar3 != '\0') goto LAB_1483aafaa;
        }
LAB_1483ab0b4:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_1483aae38;
    }
  }
  else {
    plVar6 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_8 + 0x20);
    }
    local_210[0] = param_2;
    uVar4 = (**(code **)(*plVar6 + 8))();
    cVar3 = (*pcVar2)(uVar4,local_210);
    if (cVar3 != '\0') goto LAB_1483aae6c;
  }
  uVar9 = 0;
LAB_1483aae38:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 1483ab0cc FUN_1483ab0cc body=1887 status=ok
// SIG undefined FUN_1483ab0cc(void)

ulonglong FUN_1483ab0cc(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_1483ab2c9;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1483ab0cc(param_1,~uVar12,0xffffffff,param_4);
joined_r0x0001483ab7b5:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_1483ab261;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_1483ab0cc(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_1483ab261;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_1483ab0cc(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_1483ab261;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_1483a93b6(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_1483ab0cc(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x0001483ab7b5;
          }
        }
        goto LAB_1483ab3ae;
      }
LAB_1483ab2c9:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_1483a93b6(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1483ab0cc(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x0001483ab5b7:
            if (bVar14 != 0) goto LAB_1483ab50c;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_1483a93b6(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_1483ab0cc(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_1483ab531;
LAB_1483ab50c:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_1483ab261;
        }
        uVar17 = 0;
LAB_1483ab531:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_1483a93b6(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_1483ab0cc(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x0001483ab5b7;
          }
        }
      }
LAB_1483ab3ae:
      uVar15 = uVar17;
      goto LAB_1483ab261;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_1483aadc8(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_1483ab50c;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_1483ab261;
    }
  }
  uVar15 = 0;
LAB_1483ab261:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 1483ab82c FUN_1483ab82c body=162 status=ok
// SIG undefined FUN_1483ab82c(void)

void FUN_1483ab82c(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ab8d0 FUN_1483ab8d0 body=132 status=ok
// SIG undefined FUN_1483ab8d0(void)

void FUN_1483ab8d0(longlong param_1,int param_2)

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



// FUNCTION 1483ab955 FUN_1483ab955 body=571 status=ok
// SIG undefined FUN_1483ab955(void)

ulonglong FUN_1483ab955(double *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  uint local_dc;
  int *local_d8;
  uint local_d0;
  uint local_cc;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  uint local_80;
  int local_7c;
  code *local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146be6fec(param_2);
  local_d8 = (int *)param_2[8];
  local_d0 = *local_d8 * 0x200 + local_d8[1];
  local_b8 = (longlong *)0x0;
  local_c8[0] = 0;
  local_cc = local_d0;
  FUN_146be715a(local_c8,param_2);
  if (local_80 != local_d0) {
    do {
      pcVar1 = local_78;
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      local_dc = local_80;
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(&local_f8,uVar2,&local_dc);
      if (param_1[3] * param_1[3] <
          (local_e8 - param_1[2]) * (local_e8 - param_1[2]) +
          (local_f8 - *param_1) * (local_f8 - *param_1) +
          (local_f0 - param_1[1]) * (local_f0 - param_1[1])) {
        if (local_c8[0] != 0) {
          plVar3 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar3 = local_a8;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_78 != (code *)0x0) {
          plVar3 = local_58;
          if (local_68 != (longlong *)0x0) {
            plVar3 = local_68;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        uVar4 = 0;
        goto LAB_1483aba13;
      }
      do {
        local_80 = local_80 + 1;
        if (local_7c <= (int)local_80) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_88 + 8) +
                                             (ulonglong)(local_80 >> 9) * 8) +
                                           (ulonglong)(local_80 & 0x1ff) * 2) - 1U));
    } while (local_d0 != local_80);
  }
  if (local_c8[0] != 0) {
    plVar3 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar3 = local_a8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1483aba13:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1483abb91 FUN_1483abb91 body=533 status=ok
// SIG undefined FUN_1483abb91(void)

ulonglong FUN_1483abb91(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  uint local_e0 [2];
  int *local_d8;
  uint local_d0;
  uint local_cc;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  uint local_80;
  int local_7c;
  code *local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146be6fec(param_2);
  local_d8 = (int *)param_2[8];
  local_d0 = *local_d8 * 0x200 + local_d8[1];
  local_b8 = (longlong *)0x0;
  local_c8[0] = 0;
  local_cc = local_d0;
  FUN_146be715a(local_c8,param_2);
  if (local_80 != local_d0) {
    do {
      pcVar1 = local_78;
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      local_e0[0] = local_80;
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(local_f8,uVar2,local_e0);
      dVar5 = (double)FUN_146c7eea6(param_1,local_f8,local_e0);
      if (*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x38) < dVar5) {
        if (local_c8[0] != 0) {
          plVar3 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar3 = local_a8;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_78 != (code *)0x0) {
          plVar3 = local_58;
          if (local_68 != (longlong *)0x0) {
            plVar3 = local_68;
          }
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        uVar4 = 0;
        goto LAB_1483abc4f;
      }
      do {
        local_80 = local_80 + 1;
        if (local_7c <= (int)local_80) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_88 + 8) +
                                             (ulonglong)(local_80 >> 9) * 8) +
                                           (ulonglong)(local_80 & 0x1ff) * 2) - 1U));
    } while (local_d0 != local_80);
  }
  if (local_c8[0] != 0) {
    plVar3 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar3 = local_a8;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1483abc4f:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1483abda7 FUN_1483abda7 body=519 status=ok
// SIG undefined FUN_1483abda7(void)

ulonglong FUN_1483abda7(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [28];
  uint local_dc;
  int *local_d8;
  uint local_d0;
  uint local_cc;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  uint local_80;
  int local_7c;
  code *local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146be6fec(param_2);
  local_d8 = (int *)param_2[8];
  local_d0 = *local_d8 * 0x200 + local_d8[1];
  local_b8 = (longlong *)0x0;
  local_c8[0] = 0;
  local_cc = local_d0;
  FUN_146be715a(local_c8,param_2);
  if (local_80 != local_d0) {
    do {
      pcVar1 = local_78;
      plVar4 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar4 = local_58;
      }
      local_dc = local_80;
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar1)(local_f8,uVar3,&local_dc);
      cVar2 = FUN_1483abfb0(param_1,local_f8);
      if (cVar2 == '\0') {
        if (local_c8[0] != 0) {
          plVar4 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar4 = local_a8;
          }
          (**(code **)(*plVar4 + 0x10))();
        }
        if (local_78 != (code *)0x0) {
          plVar4 = local_58;
          if (local_68 != (longlong *)0x0) {
            plVar4 = local_68;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        uVar5 = 0;
        goto LAB_1483abe65;
      }
      do {
        local_80 = local_80 + 1;
        if (local_7c <= (int)local_80) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_88 + 8) +
                                             (ulonglong)(local_80 >> 9) * 8) +
                                           (ulonglong)(local_80 & 0x1ff) * 2) - 1U));
    } while (local_d0 != local_80);
  }
  if (local_c8[0] != 0) {
    plVar4 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar4 = local_a8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1483abe65:
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1483abfb0 FUN_1483abfb0 body=273 status=ok
// SIG undefined FUN_1483abfb0(void)

bool FUN_1483abfb0(double *param_1,double *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2[2] - param_1[2];
  local_28 = param_2[1] - param_1[1];
  local_30 = *param_2 - *param_1;
  FUN_146bf2028(param_1 + 3,&local_48);
  uVar2 = -(ulonglong)(-local_48 <= local_48);
  if ((double)(~uVar2 & (ulonglong)-local_48 | (ulonglong)local_48 & uVar2) <= param_1[7]) {
    uVar2 = -(ulonglong)(-local_40 <= local_40);
    if ((double)(~uVar2 & (ulonglong)-local_40 | (ulonglong)local_40 & uVar2) <= param_1[8]) {
      uVar2 = -(ulonglong)(-local_38 <= local_38);
      bVar1 = (double)(~uVar2 & (ulonglong)-local_38 | (ulonglong)local_38 & uVar2) <= param_1[9];
      goto LAB_1483ac06f;
    }
  }
  bVar1 = false;
LAB_1483ac06f:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ac0c2 FUN_1483ac0c2 body=643 status=ok
// SIG undefined FUN_1483ac0c2(void)

ulonglong FUN_1483ac0c2(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  uint local_10c;
  int *local_108;
  uint local_100;
  uint local_fc;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  uint local_b0;
  int local_ac;
  code *local_a8;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    pdVar5 = (double *)*param_1;
    pdVar6 = pdVar5 + (longlong)*(int *)(param_1 + 1) * 4;
    do {
      FUN_146be6fec(param_2,&local_b8);
      local_108 = (int *)param_2[8];
      local_100 = *local_108 * 0x200 + local_108[1];
      local_e8 = (longlong *)0x0;
      local_f8[0] = 0;
      local_fc = local_100;
      FUN_146be715a(local_f8,param_2);
      if (local_b0 != local_100) {
        do {
          pcVar1 = local_a8;
          plVar3 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar3 = local_88;
          }
          local_10c = local_b0;
          uVar2 = (**(code **)(*plVar3 + 8))();
          (*pcVar1)(&local_128,uVar2,&local_10c);
          if (0.0 <= (pdVar5[2] * local_118 + *pdVar5 * local_128 + pdVar5[1] * local_120) -
                     pdVar5[3]) {
            if (local_f8[0] != 0) {
              plVar3 = local_d8;
              if (local_e8 != (longlong *)0x0) {
                plVar3 = local_e8;
              }
              (**(code **)(*plVar3 + 0x10))();
            }
            if (local_a8 != (code *)0x0) {
              plVar3 = local_88;
              if (local_98 != (longlong *)0x0) {
                plVar3 = local_98;
              }
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            uVar4 = 0;
            goto LAB_1483ac2f0;
          }
          do {
            local_b0 = local_b0 + 1;
            if (local_ac <= (int)local_b0) break;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(local_b8 + 8) +
                                                 (ulonglong)(local_b0 >> 9) * 8) +
                                               (ulonglong)(local_b0 & 0x1ff) * 2) - 1U));
        } while (local_100 != local_b0);
      }
      if (local_f8[0] != 0) {
        plVar3 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar3 = local_d8;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_a8 != (code *)0x0) {
        plVar3 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar3 = local_88;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      pdVar5 = pdVar5 + 4;
    } while (pdVar5 != pdVar6);
    uVar4 = CONCAT71((int7)((ulonglong)local_f8 >> 8),1);
  }
LAB_1483ac2f0:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1483ac346 FUN_1483ac346 body=132 status=ok
// SIG undefined FUN_1483ac346(void)

void FUN_1483ac346(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483ac3cb FUN_1483ac3cb body=311 status=ok
// SIG undefined FUN_1483ac3cb(void)

void FUN_1483ac3cb(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [48];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  undefined8 local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar1 = param_3[3];
  local_a0 = DAT_14c846520 * dVar1 + param_3[2];
  local_a8 = DAT_14c846518 * dVar1 + param_3[1];
  local_b0 = dVar1 * DAT_14c846510 + *param_3;
  local_b8 = param_3[2] - DAT_14c846520 * dVar1;
  local_c0 = param_3[1] - DAT_14c846518 * dVar1;
  local_c8 = *param_3 - dVar1 * DAT_14c846510;
  local_88 = 0;
  local_78 = &PTR_LAB_14ae750e0;
  local_98 = FUN_1483acd2e;
  local_70 = param_2;
  FUN_146bda188(local_f8,&local_c8);
  FUN_1483acb79(param_1,local_f8);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ac503 FUN_1483ac503 body=164 status=ok
// SIG undefined FUN_1483ac503(void)

void FUN_1483ac503(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  local_48 = &PTR_LAB_14ae75100;
  local_68[0] = FUN_1483ad698;
  local_40 = param_2;
  FUN_1483ad880(param_3,local_c8,*(undefined8 *)(param_3 + 0x38));
  FUN_146bda188(local_98,local_c8,local_68);
  FUN_1483acb79(param_1,local_98);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ac5a8 FUN_1483ac5a8 body=1488 status=ok
// SIG undefined FUN_1483ac5a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1483ac5a8(undefined8 param_1,double *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
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
  undefined1 auStack_258 [32];
  ulonglong local_238;
  ulonglong uStack_230;
  ulonglong local_228;
  ulonglong uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  uint local_18c;
  int *local_188;
  uint local_180;
  uint local_17c;
  longlong local_178 [2];
  longlong *local_168;
  longlong local_158 [4];
  longlong local_138;
  uint local_130;
  int local_12c;
  code *local_128;
  longlong *local_118;
  longlong local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1c0 = 0x7fefffffffffffff;
  local_1b8 = 0x7fefffffffffffff;
  local_1b0 = 0x7fefffffffffffff;
  local_1a8 = 0xffefffffffffffff;
  local_1a0 = 0xffefffffffffffff;
  local_198 = 0xffefffffffffffff;
  FUN_146be6fec(param_3);
  local_188 = (int *)param_3[8];
  local_180 = *local_188 * 0x200 + local_188[1];
  local_168 = (longlong *)0x0;
  local_178[0] = 0;
  local_17c = local_180;
  FUN_146be715a(local_178,param_3);
  uVar5 = local_1c0;
  uVar6 = local_1b8;
  uVar7 = local_1b0;
  uVar8 = local_1a8;
  uVar9 = local_1a0;
  uVar10 = local_198;
  if (local_130 != local_180) {
    local_208 = 0xffefffffffffffff;
    uStack_200 = 0;
    local_218 = 0x7fefffffffffffff;
    uStack_210 = 0;
    local_228 = 0xffefffffffffffff;
    uStack_220 = 0;
    local_238 = 0x7fefffffffffffff;
    uStack_230 = 0;
    dVar14 = -1.79769313486232e+308;
    local_1e8 = 0xffefffffffffffff;
    uStack_1e0 = 0;
    local_1f8 = 0x7fefffffffffffff;
    uStack_1f0 = 0;
    dVar18 = -1.79769313486232e+308;
    dVar20 = 0.0;
    dVar19 = 1.79769313486232e+308;
    dVar24 = 1.79769313486232e+308;
    dVar3 = -1.79769313486232e+308;
    dVar25 = 1.79769313486232e+308;
    do {
      pcVar4 = local_128;
      plVar13 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar13 = local_108;
      }
      local_18c = local_130;
      uVar12 = (**(code **)(*plVar13 + 8))();
      (*pcVar4)(&local_1d8,uVar12,&local_18c);
      dVar22 = local_1c8 - param_2[6];
      dVar15 = -*param_2;
      dVar17 = -param_2[1];
      dVar21 = param_2[2] * -1.0;
      dVar23 = param_2[3] * 1.0;
      dVar28 = local_1d8 - param_2[4];
      dVar29 = dStack_1d0 - param_2[5];
      dVar27 = dVar28 * dVar21 - dVar15 * dVar22;
      dVar26 = dVar29 * dVar15 - dVar28 * dVar17;
      dVar2 = dVar22 * dVar17 - dVar29 * dVar21;
      dVar2 = dVar2 + dVar2;
      dVar27 = dVar27 + dVar27;
      dVar26 = dVar26 + dVar26;
      auVar1 = *(undefined1 (*) [16])(param_2 + 8);
      auVar16 = divpd(_DAT_149934d80,auVar1);
      dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_) *
               ((dVar26 * dVar17 - dVar27 * dVar21) + dVar23 * dVar2 + dVar28);
      dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
               (*param_2 * dVar26 + dVar21 * dVar2 + dVar23 * dVar27 + dVar29);
      dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) &
                       (ulonglong)(1.0 / param_2[10])) *
               (dVar23 * dVar26 + dVar22 + (dVar27 * dVar15 - dVar2 * dVar17));
      local_238 = ~-(ulonglong)(dVar28 < dVar19) & local_238 |
                  -(ulonglong)(dVar28 < dVar19) & (ulonglong)dVar28;
      uStack_230 = ~(ulonglong)dVar21 & uStack_230 | (ulonglong)dVar21;
      dVar22 = dVar28;
      if (dVar19 <= dVar28) {
        dVar22 = dVar19;
      }
      dVar19 = dVar28;
      if (dVar28 <= dVar18) {
        dVar19 = dVar18;
      }
      local_228 = ~-(ulonglong)(dVar18 < dVar28) & local_228 |
                  -(ulonglong)(dVar18 < dVar28) & (ulonglong)dVar28;
      uStack_220 = ~(ulonglong)dVar20 & uStack_220 | (ulonglong)dVar20 & (ulonglong)dVar21;
      local_218 = ~-(ulonglong)(dVar21 < dVar24) & local_218 |
                  -(ulonglong)(dVar21 < dVar24) & (ulonglong)dVar21;
      uStack_210 = ~(ulonglong)dVar21 & uStack_210 | (ulonglong)dVar21;
      dVar28 = dVar21;
      if (dVar24 <= dVar21) {
        dVar28 = dVar24;
      }
      local_208 = ~-(ulonglong)(dVar3 < dVar21) & local_208 |
                  -(ulonglong)(dVar3 < dVar21) & (ulonglong)dVar21;
      uStack_200 = ~(ulonglong)dVar20 & uStack_200 | (ulonglong)dVar20 & (ulonglong)dVar21;
      dVar2 = dVar21;
      if (dVar21 <= dVar3) {
        dVar2 = dVar3;
      }
      local_1f8 = ~-(ulonglong)(dVar26 < dVar25) & local_1f8 |
                  -(ulonglong)(dVar26 < dVar25) & (ulonglong)dVar26;
      dVar27 = dVar26;
      if (dVar25 <= dVar26) {
        dVar27 = dVar25;
      }
      local_1e8 = ~-(ulonglong)(dVar14 < dVar26) & local_1e8 |
                  -(ulonglong)(dVar14 < dVar26) & (ulonglong)dVar26;
      if (dVar26 <= dVar14) {
        dVar26 = dVar14;
      }
      do {
        dVar14 = dVar26;
        local_130 = local_130 + 1;
        if (local_12c <= (int)local_130) break;
        dVar26 = dVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_138 + 8) +
                                             (ulonglong)(local_130 >> 9) * 8) +
                                           (ulonglong)(local_130 & 0x1ff) * 2) - 1U));
      dVar18 = dVar19;
      dVar20 = dVar21;
      dVar19 = dVar22;
      dVar24 = dVar28;
      dVar3 = dVar2;
      dVar25 = dVar27;
      uVar5 = local_238;
      uVar6 = local_218;
      uVar7 = local_1f8;
      uVar8 = local_228;
      uVar9 = local_208;
      uVar10 = local_1e8;
    } while (local_180 != local_130);
  }
  local_198 = uVar10;
  local_1a0 = uVar9;
  local_1a8 = uVar8;
  local_1b0 = uVar7;
  local_1b8 = uVar6;
  local_1c0 = uVar5;
  if (local_178[0] != 0) {
    plVar13 = local_168;
    if (local_168 == (longlong *)0x0) {
      plVar13 = local_158;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_128 != (code *)0x0) {
    if (local_118 == (longlong *)0x0) {
      local_118 = local_108;
    }
    (**(code **)(*local_118 + 0x10))();
  }
  uVar11 = FUN_1483acb79(param_1,&local_1c0);
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1483acb79 FUN_1483acb79 body=435 status=ok
// SIG undefined FUN_1483acb79(void)

undefined8 FUN_1483acb79(longlong *param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  int local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = (double)param_1[4];
  local_60[3] = (int)((*param_2 - (double)param_1[1]) / dVar1);
  local_60[4] = (int)((param_2[1] - (double)param_1[2]) / dVar1);
  local_60[5] = (int)((param_2[2] - (double)param_1[3]) / dVar1);
  local_60[0] = (int)((param_2[3] - (double)param_1[1]) / dVar1);
  local_60[1] = (int)((param_2[4] - (double)param_1[2]) / dVar1);
  local_60[2] = (int)((param_2[5] - (double)param_1[3]) / dVar1);
  lVar2 = 0;
  do {
    if ((local_60[lVar2 + 3] < 0) ||
       (*(int *)((longlong)param_1 + lVar2 * 4 + 0x28) <= local_60[lVar2])) goto LAB_1483acd03;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  uVar3 = 1;
  if (local_60[3] <= local_60[0]) {
    local_68 = (longlong *)*param_1;
    local_70 = (longlong)local_60[5];
    local_78 = (longlong)local_60[4];
    lVar7 = (longlong)local_60[3];
    lVar2 = lVar7 * 4;
    do {
      lVar6 = local_78;
      if (local_60[4] <= local_60[1]) {
        do {
          if (local_60[5] <= local_60[2]) {
            pfVar4 = (float *)(*local_68 + lVar2 +
                              (local_70 * *(int *)((longlong)local_68 + 0x14) + lVar6) *
                              (longlong)(int)local_68[2] * 4);
            iVar5 = (local_60[2] - local_60[5]) + 1;
            do {
              if (0.0 <= *pfVar4) goto LAB_1483acd03;
              pfVar4 = pfVar4 + (longlong)*(int *)((longlong)local_68 + 0x14) *
                                (longlong)(int)local_68[2];
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          lVar6 = lVar6 + 1;
        } while (local_60[1] + 1 != (int)lVar6);
      }
      lVar7 = lVar7 + 1;
      lVar2 = lVar2 + 4;
    } while (local_60[0] + 1 != (int)lVar7);
  }
LAB_1483acd05:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
LAB_1483acd03:
  uVar3 = 0;
  goto LAB_1483acd05;
}



// FUNCTION 1483acd2e FUN_1483acd2e body=28 status=ok
// SIG undefined FUN_1483acd2e(void)

undefined8 FUN_1483acd2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1483acd92(param_2,param_1);
  return param_1;
}



// FUNCTION 1483acd74 FUN_1483acd74 body=29 status=ok
// SIG undefined FUN_1483acd74(void)

undefined8 FUN_1483acd74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483acd92 FUN_1483acd92 body=388 status=ok
// SIG undefined FUN_1483acd92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1483acd92(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pdVar3 = (double *)*param_1;
  dVar13 = *param_3 - pdVar3[4];
  dVar14 = param_3[1] - pdVar3[5];
  dVar9 = param_3[2] - pdVar3[6];
  dVar8 = *pdVar3;
  auVar2 = *(undefined1 (*) [16])(pdVar3 + 8);
  dVar4 = -dVar8;
  dVar5 = -pdVar3[1];
  dVar11 = pdVar3[2] * -1.0;
  dVar12 = pdVar3[3] * 1.0;
  dVar15 = dVar13 * dVar11 - dVar4 * dVar9;
  dVar6 = dVar14 * dVar4 - dVar13 * dVar5;
  dVar7 = dVar9 * dVar5 - dVar14 * dVar11;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar15 + dVar15;
  dVar6 = dVar6 + dVar6;
  auVar10 = divpd(_DAT_149934d80,auVar2);
  dVar1 = pdVar3[10];
  *param_2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar6 * dVar5 - dVar15 * dVar11) + dVar12 * dVar7 + dVar13);
  param_2[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
               (dVar8 * dVar6 + dVar11 * dVar7 + dVar12 * dVar15 + dVar14);
  param_2[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * (dVar12 * dVar6 + dVar9 + (dVar15 * dVar4 - dVar7 * dVar5));
  return param_2;
}



// FUNCTION 1483acf16 FUN_1483acf16 body=1468 status=ok
// SIG undefined FUN_1483acf16(void)

void FUN_1483acf16(double *param_1,undefined8 param_2)

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
  undefined1 auStack_198 [40];
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
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar1 = param_1[3];
  dVar2 = param_1[4];
  dVar8 = dVar2 + dVar2;
  dVar3 = param_1[5];
  dVar10 = dVar3 + dVar3;
  dVar4 = param_1[6];
  dVar9 = dVar1 * (dVar1 + dVar1);
  dVar7 = (dVar1 + dVar1) * dVar4;
  local_150 = dVar1 * dVar10 + dVar8 * dVar4;
  local_160 = dVar1 * dVar8 - dVar4 * dVar10;
  local_168 = 1.0 - (dVar8 * dVar2 + dVar10 * dVar3);
  local_158 = dVar2 * dVar10 - dVar7;
  local_170 = 1.0 - (dVar10 * dVar3 + dVar9);
  dVar5 = dVar1 * dVar8 + dVar4 * dVar10;
  local_120 = 1.0 - (dVar8 * dVar2 + dVar9);
  dVar7 = dVar2 * dVar10 + dVar7;
  dVar2 = dVar1 * dVar10 - dVar8 * dVar4;
  local_118 = param_1[7];
  uStack_110 = 0;
  local_108 = param_1[8];
  uStack_100 = 0;
  local_e8 = param_1[9];
  uStack_e0 = 0;
  dVar9 = -local_e8;
  dVar6 = -local_108;
  dVar3 = -local_118;
  dVar10 = dVar7 * dVar6;
  local_140 = dVar2 * dVar3;
  local_128 = local_140 + dVar10;
  dVar4 = local_120 * dVar9;
  dVar1 = local_170 * dVar6;
  local_148 = dVar5 * dVar3;
  local_130 = local_148 + dVar1;
  dVar8 = local_158 * dVar9;
  dVar6 = dVar6 * local_160;
  dVar3 = dVar3 * local_168;
  local_f8 = dVar3 + dVar6;
  uStack_f0 = 0x8000000000000000;
  dVar9 = dVar9 * local_150;
  local_c8 = dVar4 + local_128 + param_1[2];
  local_d0 = dVar8 + local_130 + param_1[1];
  local_d8 = dVar9 + local_f8 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  dVar2 = dVar2 * local_118;
  local_138 = dVar10 + dVar2;
  dVar5 = dVar5 * local_118;
  dVar1 = dVar1 + dVar5;
  dVar10 = local_168 * local_118;
  dVar6 = dVar6 + dVar10;
  local_c8 = dVar4 + local_138 + param_1[2];
  local_d0 = dVar8 + dVar1 + param_1[1];
  local_d8 = dVar9 + dVar6 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  dVar7 = dVar7 * local_108;
  dVar2 = dVar2 + dVar7;
  local_170 = local_170 * local_108;
  dVar5 = dVar5 + local_170;
  local_160 = local_160 * local_108;
  local_168 = dVar10 + local_160;
  local_c8 = dVar4 + dVar2 + param_1[2];
  local_d0 = dVar8 + dVar5 + param_1[1];
  local_d8 = dVar9 + local_168 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  dVar7 = dVar7 + local_140;
  local_170 = local_170 + local_148;
  dVar3 = local_160 + dVar3;
  local_c8 = dVar4 + dVar7 + param_1[2];
  local_d0 = dVar8 + local_170 + param_1[1];
  local_d8 = dVar9 + dVar3 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  dVar8 = local_120 * local_e8;
  dVar9 = local_158 * local_e8;
  dVar4 = local_150 * local_e8;
  local_c8 = local_128 + dVar8 + param_1[2];
  local_d0 = local_130 + dVar9 + param_1[1];
  local_d8 = local_f8 + dVar4 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  local_c8 = local_138 + dVar8 + param_1[2];
  local_d0 = dVar1 + dVar9 + param_1[1];
  local_d8 = dVar6 + dVar4 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  local_c8 = dVar2 + dVar8 + param_1[2];
  local_d0 = dVar5 + dVar9 + param_1[1];
  local_d8 = local_168 + dVar4 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  local_c8 = dVar8 + dVar7 + param_1[2];
  local_d0 = dVar9 + local_170 + param_1[1];
  local_d8 = dVar4 + dVar3 + *param_1;
  FUN_1483ad4d4(param_2,&local_d8);
  if ((local_c0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ad4d4 FUN_1483ad4d4 body=451 status=ok
// SIG undefined FUN_1483ad4d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483ad4d4(longlong *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pdVar2 = (double *)*param_1;
  dVar11 = *param_2 - pdVar2[4];
  dVar12 = param_2[1] - pdVar2[5];
  dVar7 = param_2[2] - pdVar2[6];
  auVar1 = *(undefined1 (*) [16])(pdVar2 + 8);
  dVar3 = -*pdVar2;
  dVar4 = -pdVar2[1];
  dVar9 = pdVar2[2] * -1.0;
  dVar10 = pdVar2[3] * 1.0;
  dVar13 = dVar11 * dVar9 - dVar3 * dVar7;
  dVar5 = dVar12 * dVar3 - dVar11 * dVar4;
  dVar6 = dVar7 * dVar4 - dVar12 * dVar9;
  dVar6 = dVar6 + dVar6;
  dVar13 = dVar13 + dVar13;
  dVar5 = dVar5 + dVar5;
  auVar8 = divpd(_DAT_149934d80,auVar1);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar8._0_8_) *
             ((dVar5 * dVar4 - dVar13 * dVar9) + dVar10 * dVar6 + dVar11);
  dStack_70 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar8._8_8_) *
              (*pdVar2 * dVar5 + dVar9 * dVar6 + dVar10 * dVar13 + dVar12);
  local_68 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(pdVar2[10])) &
                     (ulonglong)(1.0 / pdVar2[10])) *
             (dVar10 * dVar5 + dVar7 + (dVar13 * dVar3 - dVar6 * dVar4));
  FUN_146ba5262(param_1[1]);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ad698 FUN_1483ad698 body=28 status=ok
// SIG undefined FUN_1483ad698(void)

undefined8 FUN_1483ad698(undefined8 param_1,undefined8 param_2)

{
  FUN_1483ad6fc(param_2,param_1);
  return param_1;
}



// FUNCTION 1483ad6de FUN_1483ad6de body=29 status=ok
// SIG undefined FUN_1483ad6de(void)

undefined8 FUN_1483ad6de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ad6fc FUN_1483ad6fc body=388 status=ok
// SIG undefined FUN_1483ad6fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1483ad6fc(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pdVar3 = (double *)*param_1;
  dVar13 = *param_3 - pdVar3[4];
  dVar14 = param_3[1] - pdVar3[5];
  dVar9 = param_3[2] - pdVar3[6];
  dVar8 = *pdVar3;
  auVar2 = *(undefined1 (*) [16])(pdVar3 + 8);
  dVar4 = -dVar8;
  dVar5 = -pdVar3[1];
  dVar11 = pdVar3[2] * -1.0;
  dVar12 = pdVar3[3] * 1.0;
  dVar15 = dVar13 * dVar11 - dVar4 * dVar9;
  dVar6 = dVar14 * dVar4 - dVar13 * dVar5;
  dVar7 = dVar9 * dVar5 - dVar14 * dVar11;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar15 + dVar15;
  dVar6 = dVar6 + dVar6;
  auVar10 = divpd(_DAT_149934d80,auVar2);
  dVar1 = pdVar3[10];
  *param_2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar6 * dVar5 - dVar15 * dVar11) + dVar12 * dVar7 + dVar13);
  param_2[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
               (dVar8 * dVar6 + dVar11 * dVar7 + dVar12 * dVar15 + dVar14);
  param_2[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * (dVar12 * dVar6 + dVar9 + (dVar15 * dVar4 - dVar7 * dVar5));
  return param_2;
}



// FUNCTION 1483ad880 FUN_1483ad880 body=262 status=ok
// SIG undefined FUN_1483ad880(void)

void FUN_1483ad880(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  param_2[2] = 1.79769313486232e+308;
  param_2[3] = -1.79769313486232e+308;
  param_2[4] = -1.79769313486232e+308;
  param_2[5] = -1.79769313486232e+308;
  dVar1 = *(double *)(param_1 + 0x30);
  lVar3 = 0;
  do {
    dVar4 = *(double *)(param_1 + lVar3 * 8);
    dVar2 = *(double *)(param_1 + 0x18 + lVar3 * 8);
    dVar5 = -dVar1 * dVar2 + dVar4;
    dVar4 = dVar2 * dVar1 + dVar4;
    param_2[lVar3] =
         (double)(~-(ulonglong)(dVar5 <= dVar4) & (ulonglong)dVar4 |
                 -(ulonglong)(dVar5 <= dVar4) & (ulonglong)dVar5);
    param_2[lVar3 + 3] =
         (double)(~-(ulonglong)(dVar4 <= dVar5) & (ulonglong)dVar4 |
                 (ulonglong)dVar5 & -(ulonglong)(dVar4 <= dVar5));
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  param_2[3] = param_2[3] + param_3;
  param_2[4] = param_2[4] + param_3;
  param_2[5] = param_2[5] + param_3;
  *param_2 = *param_2 - param_3;
  param_2[1] = param_2[1] - param_3;
  param_2[2] = param_2[2] - param_3;
  return;
}



// FUNCTION 1483ad986 FUN_1483ad986 body=50 status=ok
// SIG undefined FUN_1483ad986(void)

void FUN_1483ad986(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483ad9b8 FUN_1483ad9b8 body=38 status=ok
// SIG undefined FUN_1483ad9b8(void)

undefined8 FUN_1483ad9b8(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483ad9de FUN_1483ad9de body=206 status=ok
// SIG undefined FUN_1483ad9de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1483ad9de(double *param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1[7];
  uVar3 = (uint)DAT_149931e80;
  uVar4 = DAT_149931e80._4_4_;
  if (((param_3 >> 1 ^ param_3) & 1) == 0) {
    local_50 = (double)CONCAT44((uint)((ulonglong)local_50 >> 0x20) ^ uVar4,
                                SUB84(local_50,0) ^ uVar3);
  }
  local_48 = param_1[8];
  if ((param_3 - ((int)param_3 >> 0x1f) >> 1 & 1) == 0) {
    local_48 = (double)CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar4,
                                SUB84(local_48,0) ^ uVar3);
  }
  local_40 = param_1[9];
  if ((int)param_3 < 4) {
    local_40 = (double)CONCAT44((uint)((ulonglong)local_40 >> 0x20) ^ uVar4,
                                SUB84(local_40,0) ^ uVar3);
  }
  FUN_146bed047(&local_38,param_1 + 3);
  dVar1 = param_1[2];
  dVar2 = param_1[1];
  *param_2 = local_38 + *param_1;
  param_2[1] = local_30 + dVar2;
  param_2[2] = local_28 + dVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483adaae FUN_1483adaae body=102 status=ok
// SIG undefined FUN_1483adaae(void)

void FUN_1483adaae(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403e3958(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18)
    ;
    return;
  }
  return;
}



// FUNCTION 1483adb14 FUN_1483adb14 body=38 status=ok
// SIG undefined FUN_1483adb14(void)

undefined8 FUN_1483adb14(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483adb3a FUN_1483adb3a body=397 status=ok
// SIG undefined FUN_1483adb3a(void)

void FUN_1483adb3a(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar12 = (longlong)(int)((longlong *)param_2[1])[1];
  if (lVar12 < 1) {
    dVar17 = 0.0;
    dVar16 = 0.0;
  }
  else {
    lVar5 = *(longlong *)param_2[1];
    lVar6 = *(longlong *)*param_2;
    dVar16 = 0.0;
    lVar13 = 0;
    dVar17 = 0.0;
    do {
      lVar14 = (longlong)*(int *)(lVar5 + lVar13);
      dVar1 = *(double *)(lVar6 + lVar14 * 0x18);
      dVar18 = *(double *)(lVar6 + 8 + lVar14 * 0x18);
      lVar15 = (longlong)*(int *)(lVar5 + 4 + lVar13);
      dVar2 = *(double *)(lVar6 + 0x10 + lVar14 * 0x18);
      dVar3 = *(double *)(lVar6 + lVar15 * 0x18);
      lVar14 = (longlong)*(int *)(lVar5 + 8 + lVar13);
      dVar4 = *(double *)(lVar6 + lVar14 * 0x18);
      dVar10 = *(double *)(lVar6 + 0x10 + lVar15 * 0x18) - dVar2;
      dVar9 = *(double *)(lVar6 + 8 + lVar15 * 0x18) - dVar18;
      dVar11 = dVar3 - dVar1;
      dVar2 = *(double *)(lVar6 + 0x10 + lVar14 * 0x18) - dVar2;
      dVar18 = *(double *)(lVar6 + 8 + lVar14 * 0x18) - dVar18;
      dVar7 = dVar4 - dVar1;
      dVar8 = dVar7 * dVar9 - dVar11 * dVar18;
      dVar7 = dVar2 * dVar11 - dVar10 * dVar7;
      dVar18 = dVar18 * dVar10 - dVar2 * dVar9;
      dVar17 = dVar17 + SQRT(dVar8 * dVar8 + dVar18 * dVar18 + dVar7 * dVar7);
      dVar16 = dVar16 + (dVar1 + dVar3 + dVar4) * dVar18;
      lVar13 = lVar13 + 0xc;
    } while (lVar12 * 0xc != lVar13);
    dVar17 = dVar17 * 0.5;
    dVar16 = dVar16 * 0.16666666666666666;
  }
  *param_1 = dVar16;
  param_1[1] = dVar17;
  return;
}



// FUNCTION 1483adcc8 FUN_1483adcc8 body=38 status=ok
// SIG undefined FUN_1483adcc8(void)

undefined8 FUN_1483adcc8(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483adcee FUN_1483adcee body=1535 status=ok
// SIG undefined FUN_1483adcee(void)

void FUN_1483adcee(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  double dVar21;
  uint uVar22;
  undefined1 auStack_118 [32];
  double local_f8;
  undefined8 local_f0;
  uint local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar8 = *(int *)(param_1 + 0xb0);
  dVar19 = 1.5707963267948966;
  dVar18 = 1.5707963267948966 / (double)(iVar8 + -1);
  iVar5 = *(int *)(param_1 + 0xb4);
  dVar21 = 6.283185307179586 / (double)iVar5;
  dVar1 = *(double *)(param_1 + 0xa8);
  iVar9 = 0;
  if (1 < iVar8) {
    iVar7 = 1;
    iVar9 = 0;
    dVar3 = dVar18;
    do {
      if (0 < iVar5) {
        lVar10 = (longlong)iVar9 * 6 + 4;
        dVar4 = 0.0;
        lVar11 = 0;
        do {
          dVar13 = sin(dVar3);
          dVar14 = cos(dVar3);
          dVar15 = cos(dVar4);
          dVar16 = sin(dVar4);
          dVar17 = *(double *)(param_1 + 0xa0);
          lVar2 = *(longlong *)(param_1 + 8);
          *(double *)(lVar2 + -0x10 + lVar10 * 4) = dVar15 * dVar13 * dVar17 + 0.0;
          *(double *)(lVar2 + -8 + lVar10 * 4) = dVar16 * dVar13 * dVar17 + 0.0;
          *(double *)(lVar2 + lVar10 * 4) = dVar14 * dVar17 + dVar1;
          lVar2 = *(longlong *)(param_1 + 0x38);
          *(float *)(lVar2 + -8 + lVar10 * 2) = (float)(dVar15 * dVar13);
          *(float *)(lVar2 + -4 + lVar10 * 2) = (float)(dVar16 * dVar13);
          *(float *)(lVar2 + lVar10 * 2) = (float)dVar14;
          *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 4 + lVar11 * 4) =
               iVar9 + (int)lVar11;
          dVar4 = dVar4 + dVar21;
          iVar5 = *(int *)(param_1 + 0xb4);
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 6;
        } while ((int)lVar11 < iVar5);
        iVar9 = iVar9 + (int)lVar11;
        iVar8 = *(int *)(param_1 + 0xb0);
      }
      iVar7 = iVar7 + 1;
      dVar3 = dVar3 + dVar18;
    } while (iVar7 < iVar8);
  }
  iVar7 = *(int *)(param_1 + 0xb8);
  if (0 < iVar7) {
    dVar3 = 1.0 / ((double)iVar7 + 1.0);
    iVar8 = 0;
    dVar4 = dVar3;
    local_f8 = dVar18;
    do {
      if (0 < iVar5) {
        dVar18 = 0.0;
        dVar17 = (1.0 - dVar4) * 0.0;
        lVar10 = (longlong)iVar9 * 6 + 4;
        lVar11 = 0;
        do {
          dVar14 = sin(dVar18);
          dVar15 = cos(dVar18);
          dVar13 = *(double *)(param_1 + 0xa0);
          lVar2 = *(longlong *)(param_1 + 8);
          *(double *)(lVar2 + -0x10 + lVar10 * 4) = dVar15 * dVar13 + dVar17;
          *(double *)(lVar2 + -8 + lVar10 * 4) = dVar14 * dVar13 + dVar17;
          *(double *)(lVar2 + lVar10 * 4) = dVar13 * 0.0 + dVar1 * (1.0 - dVar4);
          lVar2 = *(longlong *)(param_1 + 0x38);
          *(float *)(lVar2 + -8 + lVar10 * 2) = (float)dVar15;
          *(float *)(lVar2 + -4 + lVar10 * 2) = (float)dVar14;
          *(undefined4 *)(lVar2 + lVar10 * 2) = 0;
          *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 4 + lVar11 * 4) =
               iVar9 + (int)lVar11;
          dVar18 = dVar18 + dVar21;
          iVar5 = *(int *)(param_1 + 0xb4);
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 6;
        } while ((int)lVar11 < iVar5);
        iVar9 = iVar9 + (int)lVar11;
        iVar7 = *(int *)(param_1 + 0xb8);
      }
      iVar8 = iVar8 + 1;
      dVar4 = dVar4 + dVar3;
    } while (iVar8 < iVar7);
    iVar8 = *(int *)(param_1 + 0xb0);
    dVar18 = local_f8;
  }
  if (1 < iVar8) {
    iVar7 = 1;
    do {
      if (0 < iVar5) {
        lVar10 = (longlong)iVar9 * 6 + 4;
        dVar3 = 0.0;
        lVar11 = 0;
        do {
          dVar17 = sin(dVar19);
          dVar13 = cos(dVar19);
          dVar14 = cos(dVar3);
          dVar15 = sin(dVar3);
          dVar4 = *(double *)(param_1 + 0xa0);
          lVar2 = *(longlong *)(param_1 + 8);
          *(double *)(lVar2 + -0x10 + lVar10 * 4) = dVar14 * dVar17 * dVar4;
          *(double *)(lVar2 + -8 + lVar10 * 4) = dVar15 * dVar17 * dVar4;
          *(double *)(lVar2 + lVar10 * 4) = dVar13 * dVar4;
          lVar2 = *(longlong *)(param_1 + 0x38);
          *(float *)(lVar2 + -8 + lVar10 * 2) = (float)(dVar14 * dVar17);
          *(float *)(lVar2 + -4 + lVar10 * 2) = (float)(dVar15 * dVar17);
          *(float *)(lVar2 + lVar10 * 2) = (float)dVar13;
          *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar9 * 4 + lVar11 * 4) =
               iVar9 + (int)lVar11;
          dVar3 = dVar3 + dVar21;
          iVar5 = *(int *)(param_1 + 0xb4);
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 6;
        } while ((int)lVar11 < iVar5);
        iVar9 = iVar9 + (int)lVar11;
        iVar8 = *(int *)(param_1 + 0xb0);
      }
      iVar7 = iVar7 + 1;
      dVar19 = dVar19 + dVar18;
    } while (iVar7 < iVar8);
  }
  uVar12 = DAT_14c84636c;
  local_e8 = DAT_14c84636c;
  local_f0 = CONCAT44(DAT_14c846364._4_4_,(uint)DAT_14c846364);
  dVar19 = *(double *)(param_1 + 0xa0);
  dVar18 = DAT_14c8463c8 * dVar19;
  dVar21 = DAT_14c8463c0 * dVar19;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar9;
  lVar11 = lVar6 * 0x18;
  *(double *)(lVar10 + lVar11) = dVar19 * DAT_14c8463b8 + 0.0;
  *(double *)(lVar10 + 8 + lVar11) = dVar21 + 0.0;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar1 + dVar18;
  lVar10 = *(longlong *)(param_1 + 0x38);
  lVar2 = lVar6 * 0xc;
  *(uint *)(lVar10 + 8 + lVar2) = uVar12;
  *(undefined8 *)(lVar10 + lVar2) = local_f0;
  *(int *)(*(longlong *)(param_1 + 0x48) + lVar6 * 4) = iVar9;
  uVar12 = DAT_14c84636c ^ 0x80000000;
  uVar20 = DAT_14c846364._4_4_ ^ 0x80000000;
  uVar22 = (uint)DAT_14c846364 ^ 0x80000000;
  dVar19 = -DAT_14c8463c8;
  dVar18 = -DAT_14c8463c0;
  dVar1 = *(double *)(param_1 + 0xa0);
  lVar10 = *(longlong *)(param_1 + 8);
  *(double *)(lVar10 + 0x18 + lVar11) = -DAT_14c8463b8 * dVar1;
  *(double *)(lVar10 + 0x20 + lVar11) = dVar18 * dVar1;
  *(double *)(lVar10 + 0x28 + lVar11) = dVar19 * dVar1;
  lVar10 = *(longlong *)(param_1 + 0x38);
  *(uint *)(lVar10 + 0xc + lVar2) = uVar22;
  *(uint *)(lVar10 + 0x10 + lVar2) = uVar20;
  *(uint *)(lVar10 + 0x14 + lVar2) = uVar12;
  *(int *)(*(longlong *)(param_1 + 0x48) + 4 + lVar6 * 4) = iVar9 + 1;
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ae2ee FUN_1483ae2ee body=541 status=ok
// SIG undefined FUN_1483ae2ee(void)

void FUN_1483ae2ee(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  float local_78;
  longlong local_70;
  int *local_68;
  float local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0xb0);
  fVar8 = -1.0 / (float)*(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  local_68 = &local_54;
  local_54 = 0;
  dVar1 = *(double *)(param_1 + 0xa0);
  iVar6 = iVar4 + -1;
  fVar9 = (float)(dVar1 + dVar1 + *(double *)(param_1 + 0xa8));
  fVar7 = (float)dVar1 / ((float)iVar6 * fVar9);
  local_78 = fVar7;
  local_70 = param_1;
  local_60 = fVar8;
  uVar3 = FUN_1483aea9c(&local_70,1,iVar6,fVar7);
  local_78 = (float)*(double *)(param_1 + 0xa8) / ((float)(*(int *)(param_1 + 0xb8) + 1) * fVar9);
  uVar3 = FUN_1483aea9c(&local_70,uVar3,*(int *)(param_1 + 0xb8),
                        (float)*(double *)(param_1 + 0xa0) / fVar9 + local_78);
  local_78 = fVar7;
  FUN_1483aea9c(&local_70,uVar3,*(int *)(param_1 + 0xb0) + -1,
                (float)(*(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0xa8)) / fVar9);
  if (0 < *(int *)(param_1 + 0xb4)) {
    iVar4 = (*(int *)(param_1 + 0xb8) + iVar4 * 2 + iVar5 + -2) * *(int *)(param_1 + 0xb4);
    fVar9 = fVar8 + 1.0;
    iVar5 = 0;
    fVar7 = fVar9;
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar2 + (longlong)local_54 * 8) = fVar7;
      *(undefined4 *)(lVar2 + 4 + (longlong)local_54 * 8) = 0;
      *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_54 * 4) = iVar4;
      iVar5 = iVar5 + 1;
      local_54 = local_54 + 1;
      fVar7 = fVar7 + fVar8;
    } while (iVar5 < *(int *)(param_1 + 0xb4));
    if (0 < *(int *)(param_1 + 0xb4)) {
      iVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x18);
        *(float *)(lVar2 + (longlong)local_54 * 8) = fVar9;
        *(undefined4 *)(lVar2 + 4 + (longlong)local_54 * 8) = 0x3f800000;
        *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_54 * 4) = iVar4 + 1;
        iVar5 = iVar5 + 1;
        local_54 = local_54 + 1;
        fVar9 = fVar9 + fVar8;
      } while (iVar5 < *(int *)(param_1 + 0xb4));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ae50c FUN_1483ae50c body=865 status=ok
// SIG undefined FUN_1483ae50c(void)

void FUN_1483ae50c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 in_XMM0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  
  iVar6 = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb0) * 2 + -2;
  if (1 < iVar6) {
    iVar7 = *(int *)(param_1 + 0xb4);
    auVar20 = pmovsxbd(in_XMM0,0x100);
    auVar21._0_8_ = auVar20._0_8_;
    auVar21._12_4_ = iVar7 + 1;
    auVar21._8_4_ = iVar7 + 2;
    auVar20._12_4_ = iVar7;
    auVar20._8_4_ = iVar7 + 1;
    auVar20._0_8_ = auVar21._0_8_;
    iVar7 = 1;
    uVar13 = 0;
    auVar22 = pmovsxbd(in_XMM3,0x2020202);
    iVar15 = 0;
    do {
      iVar18 = *(int *)(param_1 + 0xb4);
      if (1 < iVar18) {
        uVar13 = (ulonglong)(int)uVar13;
        lVar16 = uVar13 * 0xc;
        iVar17 = 0;
        do {
          iVar9 = auVar21._0_4_;
          iVar18 = auVar21._8_4_;
          iVar2 = auVar20._8_4_;
          iVar12 = auVar20._0_4_;
          bVar19 = *(char *)(param_1 + 0x98) != '\0';
          iVar3 = iVar12;
          if (bVar19) {
            iVar3 = iVar2;
          }
          lVar1 = *(longlong *)(param_1 + 0x58);
          *(int *)(lVar1 + lVar16) = iVar3;
          iVar3 = auVar20._4_4_;
          *(int *)(lVar1 + 4 + lVar16) = iVar3;
          iVar10 = iVar2;
          if (bVar19) {
            iVar10 = iVar12;
          }
          *(int *)(lVar1 + 8 + lVar16) = iVar10;
          *(int *)(*(longlong *)(param_1 + 0x88) + uVar13 * 4) = iVar15;
          iVar10 = iVar9;
          iVar11 = iVar18;
          if (*(char *)(param_1 + 0x98) != '\0') {
            iVar10 = iVar18;
            iVar11 = iVar9;
          }
          lVar1 = *(longlong *)(param_1 + 0x68);
          *(int *)(lVar1 + lVar16) = iVar10;
          iVar10 = auVar21._4_4_;
          *(int *)(lVar1 + 4 + lVar16) = iVar10;
          *(int *)(lVar1 + 8 + lVar16) = iVar11;
          iVar11 = iVar12;
          iVar8 = iVar2;
          if (*(char *)(param_1 + 0x98) != '\0') {
            iVar11 = iVar2;
            iVar8 = iVar12;
          }
          lVar1 = *(longlong *)(param_1 + 0x78);
          *(int *)(lVar1 + lVar16) = iVar11;
          *(int *)(lVar1 + 4 + lVar16) = iVar3;
          *(int *)(lVar1 + 8 + lVar16) = iVar8;
          bVar19 = *(char *)(param_1 + 0x98) != '\0';
          iVar11 = iVar2;
          if (bVar19) {
            iVar11 = iVar12;
          }
          lVar1 = *(longlong *)(param_1 + 0x58);
          *(int *)(lVar1 + 0xc + lVar16) = iVar11;
          iVar11 = auVar20._12_4_;
          *(int *)(lVar1 + 0x10 + lVar16) = iVar11;
          iVar8 = iVar12;
          if (bVar19) {
            iVar8 = iVar2;
          }
          *(int *)(lVar1 + 0x14 + lVar16) = iVar8;
          *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar13 * 4) = iVar15;
          iVar8 = iVar18;
          iVar4 = iVar9;
          if (*(char *)(param_1 + 0x98) != '\0') {
            iVar8 = iVar9;
            iVar4 = iVar18;
          }
          lVar1 = *(longlong *)(param_1 + 0x68);
          *(int *)(lVar1 + 0xc + lVar16) = iVar8;
          iVar8 = auVar21._12_4_;
          *(int *)(lVar1 + 0x10 + lVar16) = iVar8;
          *(int *)(lVar1 + 0x14 + lVar16) = iVar4;
          iVar4 = iVar2;
          iVar5 = iVar12;
          if (*(char *)(param_1 + 0x98) != '\0') {
            iVar4 = iVar12;
            iVar5 = iVar2;
          }
          lVar1 = *(longlong *)(param_1 + 0x78);
          *(int *)(lVar1 + 0xc + lVar16) = iVar4;
          *(int *)(lVar1 + 0x10 + lVar16) = iVar11;
          *(int *)(lVar1 + 0x14 + lVar16) = iVar5;
          auVar20._0_4_ = iVar12 + 1;
          auVar20._4_4_ = iVar3 + 1;
          auVar20._8_4_ = iVar2 + 1;
          auVar20._12_4_ = iVar11 + 1;
          auVar21._0_4_ = iVar9 + 1;
          auVar21._4_4_ = iVar10 + 1;
          auVar21._8_4_ = iVar18 + 1;
          auVar21._12_4_ = iVar8 + 1;
          uVar13 = uVar13 + 2;
          iVar15 = (uint)*(byte *)(param_1 + 0xbc) + iVar15;
          iVar17 = iVar17 + 1;
          iVar18 = *(int *)(param_1 + 0xb4);
          lVar16 = lVar16 + 0x18;
        } while (iVar17 < iVar18 + -1);
      }
      iVar17 = auVar21._8_4_;
      iVar2 = auVar20._4_4_;
      iVar10 = iVar2 - iVar18;
      iVar3 = auVar20._8_4_;
      iVar18 = iVar3 - iVar18;
      iVar11 = auVar20._0_4_;
      iVar9 = iVar11;
      iVar12 = iVar18;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar9 = iVar18;
        iVar12 = iVar11;
      }
      iVar8 = auVar21._0_4_;
      lVar16 = *(longlong *)(param_1 + 0x58);
      lVar14 = (longlong)(int)uVar13;
      lVar1 = lVar14 * 0xc;
      *(int *)(lVar16 + lVar1) = iVar9;
      *(int *)(lVar16 + 4 + lVar1) = iVar10;
      *(int *)(lVar16 + 8 + lVar1) = iVar12;
      *(int *)(*(longlong *)(param_1 + 0x88) + lVar14 * 4) = iVar15;
      iVar9 = iVar8;
      iVar12 = iVar17;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar9 = iVar17;
        iVar12 = iVar8;
      }
      lVar16 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar16 + lVar1) = iVar9;
      iVar9 = auVar21._4_4_;
      *(int *)(lVar16 + 4 + lVar1) = iVar9;
      *(int *)(lVar16 + 8 + lVar1) = iVar12;
      iVar12 = iVar18;
      iVar4 = iVar11;
      if (*(char *)(param_1 + 0x98) == '\0') {
        iVar12 = iVar11;
        iVar4 = iVar18;
      }
      lVar16 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar16 + lVar1) = iVar12;
      *(int *)(lVar16 + 4 + lVar1) = iVar10;
      *(int *)(lVar16 + 8 + lVar1) = iVar4;
      iVar12 = iVar3 - *(int *)(param_1 + 0xb4);
      bVar19 = *(char *)(param_1 + 0x98) != '\0';
      iVar18 = iVar12;
      if (bVar19) {
        iVar18 = iVar11;
      }
      lVar16 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar16 + 0xc + lVar1) = iVar18;
      iVar18 = auVar20._12_4_;
      *(int *)(lVar16 + 0x10 + lVar1) = iVar18;
      iVar10 = iVar11;
      if (bVar19) {
        iVar10 = iVar12;
      }
      *(int *)(lVar16 + 0x14 + lVar1) = iVar10;
      *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar14 * 4) = iVar15;
      iVar10 = iVar17;
      iVar4 = iVar8;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar10 = iVar8;
        iVar4 = iVar17;
      }
      lVar16 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar16 + 0xc + lVar1) = iVar10;
      iVar10 = auVar21._12_4_;
      *(int *)(lVar16 + 0x10 + lVar1) = iVar10;
      *(int *)(lVar16 + 0x14 + lVar1) = iVar4;
      iVar4 = iVar12;
      iVar5 = iVar11;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar4 = iVar11;
        iVar5 = iVar12;
      }
      lVar16 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar16 + 0xc + lVar1) = iVar4;
      *(int *)(lVar16 + 0x10 + lVar1) = iVar18;
      *(int *)(lVar16 + 0x14 + lVar1) = iVar5;
      auVar20._0_4_ = iVar11 + 1;
      auVar20._4_4_ = iVar2 + 1;
      auVar20._8_4_ = iVar3 + 1;
      auVar20._12_4_ = iVar18 + 1;
      auVar21._0_4_ = iVar8 + auVar22._0_4_;
      auVar21._4_4_ = iVar9 + auVar22._4_4_;
      auVar21._8_4_ = iVar17 + auVar22._8_4_;
      auVar21._12_4_ = iVar10 + auVar22._12_4_;
      uVar13 = (ulonglong)((int)uVar13 + 2);
      iVar15 = iVar15 + (uint)*(byte *)(param_1 + 0xbc);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar6);
  }
  return;
}



// FUNCTION 1483ae86e FUN_1483ae86e body=558 status=ok
// SIG undefined FUN_1483ae86e(void)

void FUN_1483ae86e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  
  uVar10 = *(uint *)(param_1 + 0xb4);
  if (0 < (int)uVar10) {
    iVar6 = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb0) * 2 + -2;
    iVar8 = (uVar10 + 1) * iVar6;
    iVar6 = iVar6 * uVar10;
    iVar1 = iVar6 + 1;
    uVar12 = (*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xb0) * 2 + -3) * uVar10;
    uVar14 = (ulonglong)uVar12;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      uVar14 = 0;
    }
    iVar5 = uVar12 * 2;
    lVar20 = (longlong)iVar5 * 3 + 2;
    uVar13 = 0;
    do {
      iVar19 = (int)uVar13;
      uVar16 = uVar13 + 1;
      iVar15 = (int)uVar16;
      uVar3 = (longlong)((ulonglong)(uint)(iVar15 >> 0x1f) << 0x20 | uVar16 & 0xffffffff) %
              (longlong)(int)uVar10;
      iVar9 = (int)uVar3;
      iVar11 = iVar19;
      iVar4 = iVar9;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar11 = iVar9;
        iVar4 = iVar19;
      }
      lVar2 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar2 + -8 + lVar20 * 4) = iVar11;
      *(int *)(lVar2 + -4 + lVar20 * 4) = iVar6;
      *(int *)(lVar2 + lVar20 * 4) = iVar4;
      *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar5 * 4 + uVar13 * 4) = (int)uVar14;
      iVar11 = iVar19;
      iVar4 = iVar15;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar11 = iVar15;
        iVar4 = iVar19;
      }
      lVar2 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar2 + -8 + lVar20 * 4) = iVar11;
      *(int *)(lVar2 + -4 + lVar20 * 4) = iVar8 + iVar19;
      *(int *)(lVar2 + lVar20 * 4) = iVar4;
      if (*(char *)(param_1 + 0x98) == '\0') {
        uVar3 = uVar13;
        iVar19 = iVar9;
      }
      lVar2 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar2 + -8 + lVar20 * 4) = (int)uVar3;
      *(int *)(lVar2 + -4 + lVar20 * 4) = iVar6;
      *(int *)(lVar2 + lVar20 * 4) = iVar19;
      uVar14 = (ulonglong)((uint)*(byte *)(param_1 + 0xbc) + (int)uVar14);
      uVar10 = *(uint *)(param_1 + 0xb4);
      lVar20 = lVar20 + 3;
      uVar13 = uVar16;
    } while (iVar15 < (int)uVar10);
    if (0 < (int)uVar10) {
      iVar6 = iVar6 - uVar10;
      uVar12 = ~uVar10;
      lVar20 = (longlong)(iVar5 + iVar15) * 3 + 2;
      iVar19 = iVar8 - uVar10;
      uVar13 = 0;
      do {
        uVar3 = uVar13 + 1;
        iVar4 = (int)uVar13;
        iVar18 = iVar8 + iVar4 + uVar10;
        iVar17 = iVar6 + iVar4;
        iVar9 = (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff)
                     % (longlong)(int)uVar10) + iVar6;
        bVar21 = *(char *)(param_1 + 0x98) != '\0';
        iVar11 = iVar17;
        if (bVar21) {
          iVar11 = iVar1;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
        *(int *)(lVar2 + -8 + lVar20 * 4) = iVar11;
        iVar11 = iVar1;
        if (bVar21) {
          iVar11 = iVar17;
        }
        *(int *)(lVar2 + -4 + lVar20 * 4) = iVar9;
        *(int *)(lVar2 + lVar20 * 4) = iVar11;
        iVar7 = uVar12 + iVar8 + iVar4;
        *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)(iVar5 + iVar15) * 4 + uVar13 * 4) =
             (int)uVar14;
        iVar11 = iVar18;
        if (*(char *)(param_1 + 0x98) == '\0') {
          iVar11 = iVar7;
          iVar7 = iVar18;
        }
        lVar2 = *(longlong *)(param_1 + 0x68);
        *(int *)(lVar2 + -8 + lVar20 * 4) = iVar11;
        *(int *)(lVar2 + -4 + lVar20 * 4) = iVar4 + iVar19;
        *(int *)(lVar2 + lVar20 * 4) = iVar7;
        iVar4 = iVar17;
        iVar11 = iVar1;
        if (*(char *)(param_1 + 0x98) != '\0') {
          iVar4 = iVar1;
          iVar11 = iVar17;
        }
        lVar2 = *(longlong *)(param_1 + 0x78);
        *(int *)(lVar2 + -8 + lVar20 * 4) = iVar4;
        *(int *)(lVar2 + -4 + lVar20 * 4) = iVar9;
        *(int *)(lVar2 + lVar20 * 4) = iVar11;
        uVar14 = (ulonglong)((int)uVar14 + (uint)*(byte *)(param_1 + 0xbc));
        uVar10 = *(uint *)(param_1 + 0xb4);
        lVar20 = lVar20 + 3;
        uVar13 = uVar3;
      } while ((int)uVar3 < (int)uVar10);
    }
  }
  return;
}



// FUNCTION 1483aea9c FUN_1483aea9c body=201 status=ok
// SIG undefined FUN_1483aea9c(void)

void FUN_1483aea9c(longlong *param_1,int param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (0 < param_3) {
    param_3 = param_3 + param_2;
    lVar2 = *param_1;
    do {
      fVar5 = 1.0;
      if (0 < *(int *)(lVar2 + 0xb4)) {
        iVar4 = 0;
        fVar5 = 1.0;
        do {
          iVar1 = *(int *)param_1[1];
          lVar3 = *(longlong *)(lVar2 + 0x18);
          *(float *)(lVar3 + (longlong)iVar1 * 8) = fVar5;
          *(float *)(lVar3 + 4 + (longlong)iVar1 * 8) = param_4;
          *(int *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)param_1[1] * 4) =
               *(int *)(lVar2 + 0xb4) * param_2 + iVar4;
          iVar4 = iVar4 + 1;
          *(int *)param_1[1] = *(int *)param_1[1] + 1;
          fVar5 = fVar5 + *(float *)(param_1 + 2);
        } while (iVar4 < *(int *)(lVar2 + 0xb4));
      }
      iVar4 = *(int *)param_1[1];
      lVar3 = *(longlong *)(lVar2 + 0x18);
      *(float *)(lVar3 + (longlong)iVar4 * 8) = fVar5;
      *(float *)(lVar3 + 4 + (longlong)iVar4 * 8) = param_4;
      *(int *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)param_1[1] * 4) =
           *(int *)(lVar2 + 0xb4) * param_2;
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + param_5;
    } while (param_2 < param_3);
  }
  return;
}



// FUNCTION 1483aeb66 FUN_1483aeb66 body=38 status=ok
// SIG undefined FUN_1483aeb66(void)

undefined8 FUN_1483aeb66(undefined8 param_1,int param_2)

{
  FUN_1483a1d22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483aeb92 FUN_1483aeb92 body=52 status=ok
// SIG undefined FUN_1483aeb92(void)

void FUN_1483aeb92(longlong *param_1)

{
  FUN_1483aebc6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483aebc6 FUN_1483aebc6 body=89 status=ok
// SIG undefined FUN_1483aebc6(void)

void FUN_1483aebc6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 1483aec20 FUN_1483aec20 body=97 status=ok
// SIG undefined FUN_1483aec20(void)

void FUN_1483aec20(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  memset(*(void **)(param_1 + 0x50),0,*(longlong *)(param_1 + 0x40) * 4 + 4);
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x58),0,*(longlong *)(param_1 + 0x40) << 2);
  }
  FUN_146de45bc(param_1 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10),
                *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



// FUNCTION 1483aec82 FUN_1483aec82 body=179 status=ok
// SIG undefined FUN_1483aec82(void)

void FUN_1483aec82(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined1 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a82cde();
  FUN_140056680(local_50,L"Matrix setup time");
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_30 = param_1 + 0x38;
  local_40 = 0;
  lVar1 = param_1 + 0x80;
  FUN_1483aed36(lVar1);
  FUN_14834db6e(lVar1);
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x30))();
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x28))(*(longlong **)(param_1 + 0xd0),lVar1,1);
  *(undefined1 *)(param_1 + 200) = 0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483aed36 FUN_1483aed36 body=49 status=ok
// SIG undefined FUN_1483aed36(void)

undefined8 FUN_1483aed36(undefined8 param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_1483aed68(param_1,param_2);
  }
  FUN_1483aed9d(param_1,param_2);
  return param_1;
}



// FUNCTION 1483aed68 FUN_1483aed68 body=53 status=ok
// SIG undefined FUN_1483aed68(void)

void FUN_1483aed68(longlong param_1,longlong param_2)

{
  FUN_146de45bc(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10),
                *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1483aed9d FUN_1483aed9d body=956 status=ok
// SIG undefined FUN_1483aed9d(void)

void FUN_1483aed9d(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 uStack_138;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong lStack_108;
  undefined1 local_100 [88];
  undefined8 local_a8;
  int local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_90 = *(undefined8 *)(param_2 + 8);
  local_88 = 0;
  local_80 = *(longlong *)(param_2 + 0x10);
  local_78 = 0;
  lVar8 = *(longlong *)(local_80 + 8);
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(local_80 + 0x10),lVar8);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar7 = lVar10;
    if (lVar10 < lVar3) {
      lVar7 = lVar3;
    }
    lVar9 = lVar3 * lVar10;
    if (lVar7 * 2 < lVar3 * lVar10) {
      lVar9 = lVar7 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar9 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
    }
    if (0 < lVar8) {
      lVar10 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar10 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4);
        FUN_1483af15a(local_100,local_98,lVar10);
        while (iVar6 = local_a0, uVar5 = local_a8, -1 < local_a0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar10 * 4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar10 * 4) = iVar1 + 1;
          lVar3 = *(longlong *)(param_1 + 0x38);
          FUN_146de554a(param_1 + 0x28,lVar3 + 1,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) = 0;
          *(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) = iVar6;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar5;
          FUN_1483af1e8(local_100);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar8);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar8 = *(longlong *)(param_1 + 8), -1 < lVar8)) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      lVar10 = lVar8;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) != 0) goto LAB_1483aef6e;
        bVar4 = 0 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar4);
      lVar10 = -1;
LAB_1483aef6e:
      if (lVar10 < lVar8) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar10 * 4) = uVar2;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(longlong *)(param_1 + 8));
      }
    }
  }
  else {
    local_148[0] = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    lStack_128 = 0;
    local_120 = 0;
    lStack_118 = 0;
    local_110 = 0;
    lStack_108 = 0;
    FUN_146de45bc(local_148,*(undefined8 *)(local_80 + 0x10),lVar8);
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar7 = lVar10;
    if (lVar10 < lVar3) {
      lVar7 = lVar3;
    }
    lVar9 = lVar3 * lVar10;
    if (lVar7 * 2 < lVar3 * lVar10) {
      lVar9 = lVar7 * 2;
    }
    if (lStack_108 < lVar9 + local_110) {
      FUN_146de55aa(&local_120);
    }
    if (0 < lVar8) {
      lVar10 = 0;
      do {
        *(undefined4 *)(local_130 + 4 + lVar10 * 4) = *(undefined4 *)(local_130 + lVar10 * 4);
        FUN_1483af15a(local_100,local_98,lVar10);
        while (iVar6 = local_a0, uVar5 = local_a8, lVar3 = local_110, -1 < local_a0) {
          iVar1 = *(int *)(local_130 + 4 + lVar10 * 4);
          *(int *)(local_130 + 4 + lVar10 * 4) = iVar1 + 1;
          FUN_146de554a(&local_120,local_110 + 1,0);
          *(undefined8 *)(local_120 + lVar3 * 8) = 0;
          *(int *)(lStack_118 + lVar3 * 4) = iVar6;
          *(undefined8 *)(local_120 + (longlong)iVar1 * 8) = uVar5;
          FUN_1483af1e8(local_100);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar8);
    }
    if ((lStack_128 == 0) && (-1 < local_140)) {
      lVar8 = local_140;
      do {
        if (*(int *)(local_130 + lVar8 * 4) != 0) goto joined_r0x0001483af0de;
        bVar4 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar4);
      lVar8 = -1;
joined_r0x0001483af0de:
      for (; lVar8 < local_140; lVar8 = lVar8 + 1) {
        *(undefined4 *)(local_130 + 4 + lVar8 * 4) = (undefined4)local_110;
      }
    }
    local_148[0] = 1;
    FUN_146de5a4e(param_1,local_148);
    FUN_146de5508(local_148);
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483af15a FUN_1483af15a body=142 status=ok
// SIG undefined FUN_1483af15a(void)

void FUN_1483af15a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  *param_1 = *(undefined8 *)(lVar1 + 0x28);
  param_1[1] = *(undefined8 *)(lVar1 + 0x30);
  param_1[2] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[3] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[4] = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[5] = *(undefined8 *)(lVar1 + 0x28);
  param_1[6] = *(undefined8 *)(lVar1 + 0x30);
  param_1[7] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[8] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[9] = lVar2;
  param_1[10] = param_2;
  FUN_1483af1e8();
  return;
}



// FUNCTION 1483af1e8 FUN_1483af1e8 body=178 status=ok
// SIG undefined FUN_1483af1e8(void)

void FUN_1483af1e8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = param_1[3];
  if (lVar2 < param_1[4]) {
    lVar3 = param_1[8];
    iVar1 = *(int *)(param_1[1] + lVar2 * 4);
    if (param_1[9] <= lVar3) {
LAB_1483af26b:
      *(int *)(param_1 + 0xc) = iVar1;
      param_1[0xb] = (longlong)(*(double *)(*param_1 + lVar2 * 8) + 0.0);
      param_1[3] = lVar2 + 1;
      return;
    }
    iVar4 = *(int *)(param_1[6] + lVar3 * 4);
    if (iVar1 == iVar4) {
      *(int *)(param_1 + 0xc) = iVar1;
      param_1[0xb] = (longlong)
                     (*(double *)(*param_1 + lVar2 * 8) + *(double *)(param_1[5] + lVar3 * 8));
      param_1[3] = lVar2 + 1;
      goto LAB_1483af261;
    }
    if (iVar1 < iVar4) goto LAB_1483af26b;
    if (iVar1 <= iVar4) goto LAB_1483af28a;
  }
  else {
    lVar3 = param_1[8];
    if (param_1[9] <= lVar3) {
LAB_1483af28a:
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      return;
    }
    iVar4 = *(int *)(param_1[6] + lVar3 * 4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  param_1[0xb] = (longlong)(*(double *)(param_1[5] + lVar3 * 8) + 0.0);
LAB_1483af261:
  param_1[8] = lVar3 + 1;
  return;
}



// FUNCTION 1483af29a FUN_1483af29a body=83 status=ok
// SIG undefined FUN_1483af29a(void)

undefined8 * FUN_1483af29a(undefined8 *param_1,ulonglong param_2)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400bd09c(0,param_2,1);
  FUN_1400bd09c(param_1 + 2,param_2 & 0xffffffff,1);
  FUN_1400bd09c(param_1 + 4,param_2 & 0xffffffff,1);
  return param_1;
}



// FUNCTION 1483af2ed FUN_1483af2ed body=235 status=ok
// SIG undefined FUN_1483af2ed(void)

void FUN_1483af2ed(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_146de3ce5(&local_98,param_2 + 8,&local_78);
  local_50[0] = 0x3ff0000000000000;
  local_68 = *(undefined8 *)(param_2 + 0x40);
  local_78 = *(undefined8 **)(param_2 + 0x30);
  puStack_70 = *(undefined8 **)(param_2 + 0x38);
  FUN_1483af3da(*(undefined8 *)(param_2 + 0x28),&local_78,&local_98,local_50);
  puStack_70 = &local_80;
  local_80 = local_98;
  local_50[0] = *param_1;
  local_40 = param_1[1];
  local_78 = local_50;
  local_68 = param_3;
  local_60 = param_1;
  FUN_1483af45e(&local_78);
  FUN_1400020a8(local_98);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483af3da FUN_1483af3da body=131 status=ok
// SIG undefined FUN_1483af3da(void)

void FUN_1483af3da(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < lVar7) {
    lVar4 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4) + lVar8;
      }
      if (lVar8 < lVar6) {
        dVar1 = *param_4;
        dVar2 = *(double *)(*param_2 + lVar4 * 8);
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar3 = *(longlong *)(param_1 + 0x30);
        do {
          lVar5 = (longlong)*(int *)(lVar3 + lVar8 * 4);
          *(double *)(*param_3 + lVar5 * 8) =
               *(double *)(lVar7 + lVar8 * 8) * dVar1 * dVar2 + *(double *)(*param_3 + lVar5 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar7 = *(longlong *)(param_1 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
  }
  return;
}



// FUNCTION 1483af45e FUN_1483af45e body=145 status=ok
// SIG undefined FUN_1483af45e(void)

void FUN_1483af45e(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483af4f0(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483af4f0(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483af4f0 FUN_1483af4f0 body=38 status=ok
// SIG undefined FUN_1483af4f0(void)

void FUN_1483af4f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483af516 FUN_1483af516 body=159 status=ok
// SIG undefined FUN_1483af516(void)

longlong * FUN_1483af516(longlong *param_1,longlong *param_2)

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
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 1483af5b6 FUN_1483af5b6 body=237 status=ok
// SIG undefined FUN_1483af5b6(void)

undefined8 * FUN_1483af5b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1408fdf90(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1408fdf90(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1408fdf90(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1483af6ce FUN_1483af6ce body=29 status=ok
// SIG undefined FUN_1483af6ce(void)

undefined8 FUN_1483af6ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483af712 FUN_1483af712 body=29 status=ok
// SIG undefined FUN_1483af712(void)

undefined8 FUN_1483af712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483af730 FUN_1483af730 body=228 status=ok
// SIG undefined FUN_1483af730(void)

void FUN_1483af730(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  int local_50;
  int iStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  iVar3 = (int)((ulonglong)param_4 >> 0x20);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  piVar2 = *(int **)(lVar1 + 0x90);
  if (piVar2 == *(int **)(lVar1 + 0x98)) {
    local_50 = param_2;
    iStack_4c = param_3;
    uStack_48 = param_4;
    FUN_14834da9e(lVar1 + 0x88,piVar2,&local_50);
    piVar2 = *(int **)(lVar1 + 0x90);
  }
  else {
    *piVar2 = param_2;
    piVar2[1] = param_3;
    piVar2[2] = (int)param_4;
    piVar2[3] = iVar3;
    piVar2 = (int *)(*(longlong *)(lVar1 + 0x90) + 0x10);
    *(int **)(lVar1 + 0x90) = piVar2;
  }
  iStack_4c = param_3 + *(int *)(lVar1 + 0xa0);
  local_50 = param_2 + *(int *)(lVar1 + 0xa0);
  if (piVar2 == *(int **)(lVar1 + 0x98)) {
    uStack_48 = param_4;
    FUN_14834da9e(lVar1 + 0x88,piVar2,&local_50);
  }
  else {
    *piVar2 = local_50;
    piVar2[1] = iStack_4c;
    piVar2[2] = (int)param_4;
    piVar2[3] = iVar3;
    *(longlong *)(lVar1 + 0x90) = *(longlong *)(lVar1 + 0x90) + 0x10;
    uStack_48 = param_4;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483af816 FUN_1483af816 body=242 status=ok
// SIG undefined FUN_1483af816(void)

void FUN_1483af816(longlong *param_1,void *param_2,undefined4 *param_3,undefined4 *param_4,
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
  return;
}



// FUNCTION 1483af908 FUN_1483af908 body=38 status=ok
// SIG undefined FUN_1483af908(void)

undefined8 FUN_1483af908(undefined8 param_1,int param_2)

{
  FUN_1483af92e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483af92e FUN_1483af92e body=84 status=ok
// SIG undefined FUN_1483af92e(void)

void FUN_1483af92e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae74ee0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1483af982(param_1 + 1);
  return;
}



// FUNCTION 1483af982 FUN_1483af982 body=52 status=ok
// SIG undefined FUN_1483af982(void)

void FUN_1483af982(longlong *param_1)

{
  FUN_1483af9b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483af9b6 FUN_1483af9b6 body=89 status=ok
// SIG undefined FUN_1483af9b6(void)

void FUN_1483af9b6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1483afa10 FUN_1483afa10 body=38 status=ok
// SIG undefined FUN_1483afa10(void)

undefined8 FUN_1483afa10(undefined8 param_1,int param_2)

{
  FUN_1483afa36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483afa36 FUN_1483afa36 body=101 status=ok
// SIG undefined FUN_1483afa36(void)

void FUN_1483afa36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae752b0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xa4) != -1) {
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0xffffffff00000000;
  }
  FUN_1483af92e(param_1);
  return;
}



// FUNCTION 1483afa9c FUN_1483afa9c body=38 status=ok
// SIG undefined FUN_1483afa9c(void)

undefined8 FUN_1483afa9c(undefined8 param_1,int param_2)

{
  FUN_1483a1dda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483afac2 FUN_1483afac2 body=628 status=ok
// SIG undefined FUN_1483afac2(void)

void FUN_1483afac2(longlong param_1,uint param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_4 = 1;
  local_138[0] = 0;
  local_130 = 0xffffffffffffffff;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  FUN_146de45bc(local_138,0,0);
  local_180[0] = 0;
  local_178 = 0xffffffffffffffff;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  FUN_146de45bc(local_180,0,0);
  local_188 = local_180;
  FUN_1483986ac(param_2,param_3,param_1 + 0x10,local_138);
  if ((param_2 & 0xfffffffd) == 0) {
    local_a8[0] = 0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_90 = local_128;
    uStack_88 = local_130;
    local_80 = 0xbff0000000000000;
    puStack_78 = local_138;
    puStack_68 = local_138;
    FUN_1483afd38(param_6,local_a8);
    local_a8[0] = 0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_90 = local_128;
    uStack_88 = local_130;
    local_80 = 0xbff0000000000000;
    puStack_78 = local_138;
    puStack_68 = local_180;
    FUN_1483afd38(param_7,local_a8);
  }
  else {
    local_f0[0] = 0;
    local_a8[0] = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_78 = (undefined1 *)0x0;
    local_70 = 0;
    puStack_68 = (undefined1 *)0x0;
    local_e8 = local_138;
    FUN_14836c438(local_a8,local_f0);
    local_f0[0] = 0;
    local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_d8 = uStack_98;
    local_d0 = local_a0;
    local_c8 = 0xbff0000000000000;
    local_c0 = local_a8;
    local_b0 = local_138;
    FUN_1483afd38(param_6,local_f0);
    local_f0[0] = 0;
    local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_d8 = uStack_98;
    local_d0 = local_a0;
    local_c8 = 0xbff0000000000000;
    local_c0 = local_a8;
    local_b0 = local_180;
    FUN_1483afd38(param_7,local_f0);
    FUN_146de5508(local_a8);
  }
  FUN_14834db6e(param_6);
  FUN_14834db6e(param_7);
  FUN_146de5508(local_180);
  FUN_146de5508(local_138);
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483afd38 FUN_1483afd38 body=267 status=ok
// SIG undefined FUN_1483afd38(void)

longlong FUN_1483afd38(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_146de45bc(local_68,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10),
                *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  FUN_1483afe44(local_68,param_2 + 8,*(undefined8 *)(param_2 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_50;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = local_60;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = local_40;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uStack_38;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_30;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_28;
  local_60 = uVar3;
  uStack_58 = uVar2;
  local_50 = uVar1;
  uStack_48 = uVar4;
  local_40 = uVar5;
  uStack_38 = uVar6;
  local_30 = uVar7;
  uStack_28 = uVar8;
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483afe44 FUN_1483afe44 body=115 status=ok
// SIG undefined FUN_1483afe44(void)

void FUN_1483afe44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1483b002c(local_68);
  FUN_1483afeb8(local_68,param_3,param_1);
  FUN_1483affea(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483afeb8 FUN_1483afeb8 body=305 status=ok
// SIG undefined FUN_1483afeb8(void)

void FUN_1483afeb8(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_2 + 8) < *(longlong *)(param_1 + 0x10)) {
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146de45bc(local_88);
    FUN_143b19b53(param_1,param_2,local_88,1);
    local_88[0] = 1;
    FUN_146de5a4e(param_3,local_88);
  }
  else {
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_146de45bc(local_88);
    FUN_143b19b53(param_1,param_2,local_88,0);
    local_d0[0] = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_146de620e(local_d0,local_88);
    local_d0[0] = 1;
    FUN_146de570e(param_3,local_d0);
    FUN_146de3a5a(local_d0);
  }
  FUN_146de5508(local_88);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483affea FUN_1483affea body=66 status=ok
// SIG undefined FUN_1483affea(void)

void FUN_1483affea(longlong param_1)

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



// FUNCTION 1483b002c FUN_1483b002c body=1225 status=ok
// SIG undefined FUN_1483b002c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483b002c(longlong param_1,char *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = *(double *)(param_2 + 0x20);
  lVar10 = *(longlong *)(param_2 + 0x28);
  lVar8 = *(longlong *)(lVar10 + 8);
  local_e8 = param_1;
  if (*param_2 == '\x01') {
    FUN_1483b04f6(param_1,*(undefined8 *)(lVar10 + 0x10),lVar8);
    *(undefined8 *)(local_e8 + 0x38) = 0;
    memset(*(void **)(local_e8 + 0x18),0,*(longlong *)(local_e8 + 8) * 8 + 8);
    if (*(void **)(local_e8 + 0x20) != (void *)0x0) {
      memset(*(void **)(local_e8 + 0x20),0,*(longlong *)(local_e8 + 8) << 3);
    }
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
    lVar14 = lVar13;
    if (lVar13 < lVar12) {
      lVar14 = lVar12;
    }
    lVar11 = lVar12 * lVar13;
    if (lVar14 * 2 < lVar12 * lVar13) {
      lVar11 = lVar14 * 2;
    }
    if (*(longlong *)(local_e8 + 0x40) < lVar11 + *(longlong *)(local_e8 + 0x38)) {
      FUN_1483b0638(local_e8 + 0x28);
    }
    lVar13 = local_e8;
    if (0 < lVar8) {
      local_d0 = local_e8 + 0x28;
      lVar12 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 8 + lVar12 * 8) =
             *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + lVar12 * 8);
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + lVar12 * 4);
        if (*(longlong *)(lVar10 + 0x20) == 0) {
          lVar11 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + 4 + lVar12 * 4);
        }
        else {
          lVar11 = *(int *)(*(longlong *)(lVar10 + 0x20) + lVar12 * 4) + lVar14;
        }
        if (lVar14 < lVar11) {
          local_d8 = *(longlong *)(lVar10 + 0x28);
          local_e0 = *(longlong *)(lVar10 + 0x30);
          do {
            dVar2 = *(double *)(local_d8 + lVar14 * 8);
            iVar3 = *(int *)(local_e0 + lVar14 * 4);
            lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 8 + lVar12 * 8);
            *(longlong *)(*(longlong *)(lVar13 + 0x18) + 8 + lVar12 * 8) = lVar4 + 1;
            lVar13 = *(longlong *)(lVar13 + 0x38);
            FUN_1483b06fe(local_d0,lVar13 + 1,0x3ff0000000000000);
            *(undefined8 *)(*(longlong *)(local_e8 + 0x28) + lVar13 * 8) = 0;
            *(longlong *)(*(longlong *)(local_e8 + 0x30) + lVar13 * 8) = (longlong)iVar3;
            *(double *)(*(longlong *)(local_e8 + 0x28) + lVar4 * 8) = dVar2 * dVar1;
            lVar14 = lVar14 + 1;
            lVar13 = local_e8;
          } while (lVar11 != lVar14);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar8);
    }
    if ((*(longlong *)(lVar13 + 0x20) == 0) && (lVar10 = *(longlong *)(lVar13 + 8), -1 < lVar10)) {
      uVar5 = *(undefined8 *)(lVar13 + 0x38);
      lVar8 = lVar10;
      do {
        if (*(longlong *)(*(longlong *)(lVar13 + 0x18) + lVar8 * 8) != 0) goto LAB_1483b0382;
        bVar6 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar6);
      lVar8 = -1;
LAB_1483b0382:
      if (lVar8 < lVar10) {
        do {
          *(undefined8 *)(*(longlong *)(local_e8 + 0x18) + 8 + lVar8 * 8) = uVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(longlong *)(local_e8 + 8));
      }
    }
  }
  else {
    local_c8[0] = 0;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    FUN_1483b04f6(local_c8,*(undefined8 *)(lVar10 + 0x10),lVar8);
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
    lVar14 = lVar13;
    if (lVar13 < lVar12) {
      lVar14 = lVar12;
    }
    lVar11 = lVar12 * lVar13;
    if (lVar14 * 2 < lVar12 * lVar13) {
      lVar11 = lVar14 * 2;
    }
    if ((longlong)local_90._8_8_ < lVar11 + local_90._0_8_) {
      FUN_1483b0638(local_a0);
    }
    if (0 < lVar8) {
      lVar13 = 0;
      local_e0 = lVar8;
      do {
        *(undefined8 *)(local_b0._0_8_ + 8 + lVar13 * 8) =
             *(undefined8 *)(local_b0._0_8_ + lVar13 * 8);
        lVar8 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + lVar13 * 4);
        if (*(longlong *)(lVar10 + 0x20) == 0) {
          lVar12 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + 4 + lVar13 * 4);
        }
        else {
          lVar12 = *(int *)(*(longlong *)(lVar10 + 0x20) + lVar13 * 4) + lVar8;
        }
        if (lVar8 < lVar12) {
          local_d8 = *(longlong *)(lVar10 + 0x28);
          lVar14 = *(longlong *)(lVar10 + 0x30);
          do {
            dVar2 = *(double *)(local_d8 + lVar8 * 8);
            iVar3 = *(int *)(lVar14 + lVar8 * 4);
            lVar11 = *(longlong *)(local_b0._0_8_ + 8 + lVar13 * 8);
            *(longlong *)(local_b0._0_8_ + 8 + lVar13 * 8) = lVar11 + 1;
            uVar5 = local_90._0_8_;
            FUN_1483b06fe(local_a0,local_90._0_8_ + 1,0x3ff0000000000000);
            *(undefined8 *)(local_a0._0_8_ + uVar5 * 8) = 0;
            *(longlong *)(local_a0._8_8_ + uVar5 * 8) = (longlong)iVar3;
            *(double *)(local_a0._0_8_ + lVar11 * 8) = dVar2 * dVar1;
            lVar8 = lVar8 + 1;
          } while (lVar12 != lVar8);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != local_e0);
    }
    auVar7 = _DAT_149931e80;
    if ((local_b0._8_8_ == 0) && (-1 < (longlong)local_c0._0_8_)) {
      lVar10 = local_c0._0_8_;
      do {
        if (*(longlong *)(local_b0._0_8_ + lVar10 * 8) != 0) goto LAB_1483b03e8;
        bVar6 = 0 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar6);
      lVar10 = -1;
LAB_1483b03e8:
      lVar8 = local_c0._0_8_ - lVar10;
      if (lVar8 != 0 && lVar10 <= (longlong)local_c0._0_8_) {
        lVar13 = lVar8 + -1;
        auVar15._8_4_ = (int)lVar13;
        auVar15._0_8_ = lVar13;
        auVar15._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
        lVar10 = local_b0._0_8_ + lVar10 * 8;
        uVar9 = 0;
        auVar16 = pmovsxbq(in_XMM1,0x100);
        auVar15 = auVar15 ^ _DAT_149931e80;
        do {
          if ((bool)(~(auVar15._0_8_ < (longlong)(uVar9 ^ auVar7._0_8_)) & 1)) {
            *(undefined8 *)(lVar10 + 8 + uVar9 * 8) = local_90._0_8_;
          }
          auVar17._8_4_ = (int)uVar9;
          auVar17._0_8_ = uVar9;
          auVar17._12_4_ = (int)(uVar9 >> 0x20);
          if ((longlong)((auVar17._8_8_ | auVar16._8_8_) ^ auVar7._8_8_) <= auVar15._8_8_) {
            *(undefined8 *)(lVar10 + 0x10 + uVar9 * 8) = local_90._0_8_;
          }
          uVar9 = uVar9 + 2;
        } while ((lVar8 + 1U & 0xfffffffffffffffe) != uVar9);
      }
    }
    local_c8[0] = 1;
    FUN_1483b059e(local_e8,local_c8);
    FUN_1483affea(local_c8);
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b04f6 FUN_1483b04f6 body=168 status=ok
// SIG undefined FUN_1483b04f6(void)

void FUN_1483b04f6(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(ulonglong *)(param_1 + 8) != param_3 || *(ulonglong *)(param_1 + 8) == 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    lVar1 = FUN_14001cc68(param_3 * 8 + 8 +
                          (ulonglong)((param_3 & 0x1fffffffffffffff) == 0x1fffffffffffffff));
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
  memset(*(void **)(param_1 + 0x18),0,param_3 * 8 + 8);
  return;
}



// FUNCTION 1483b059e FUN_1483b059e body=154 status=ok
// SIG undefined FUN_1483b059e(void)

char * FUN_1483b059e(char *param_1,char *param_2)

{
  size_t _Size;
  
  if (*param_2 == '\x01') {
    FUN_1483b0752(param_1,param_2);
  }
  else if (param_1 != param_2) {
    FUN_1483b04f6(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    if (*(longlong *)(param_2 + 0x20) == 0) {
      _Size = *(longlong *)(param_1 + 8) * 8 + 8;
      if (_Size != 0) {
        memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),_Size);
      }
      FUN_1483b07d4(param_1 + 0x28,param_2 + 0x28);
    }
    else {
      FUN_1483b082f(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 1483b0638 FUN_1483b0638 body=198 status=ok
// SIG undefined FUN_1483b0638(void)

void FUN_1483b0638(undefined8 *param_1,ulonglong param_2)

{
  void *_Src;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar1;
  void *_Src_00;
  
  uVar1 = -(ulonglong)(param_2 >> 0x3d != 0) | param_2 * 8;
  _Dst = (void *)FUN_144a7d36f(uVar1);
  _Dst_00 = (void *)FUN_144a7d36f(uVar1);
  _Src = (void *)*param_1;
  uVar1 = param_1[2];
  if ((longlong)param_2 <= (longlong)param_1[2]) {
    uVar1 = param_2;
  }
  if ((longlong)uVar1 < 1) {
    _Src_00 = (void *)param_1[1];
  }
  else {
    memcpy(_Dst,_Src,uVar1 << 3);
    _Src_00 = (void *)param_1[1];
    memcpy(_Dst_00,_Src_00,uVar1 << 3);
  }
  *param_1 = _Dst;
  param_1[1] = _Dst_00;
  param_1[3] = param_2;
  if (_Src_00 != (void *)0x0) {
    thunk_FUN_1400020a8(_Src_00);
  }
  if (_Src != (void *)0x0) {
    thunk_FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 1483b06fe FUN_1483b06fe body=84 status=ok
// SIG undefined FUN_1483b06fe(void)

void FUN_1483b06fe(longlong param_1,longlong param_2,double param_3)

{
  if (*(longlong *)(param_1 + 0x18) < param_2) {
    if ((longlong)((double)param_2 * param_3) < 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    FUN_1483b0638(param_1,(longlong)((double)param_2 * param_3) + param_2);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1483b0752 FUN_1483b0752 body=129 status=ok
// SIG undefined FUN_1483b0752(void)

void FUN_1483b0752(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  return;
}



// FUNCTION 1483b07d4 FUN_1483b07d4 body=91 status=ok
// SIG undefined FUN_1483b07d4(void)

undefined8 * FUN_1483b07d4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1483b06fe(param_1,param_2[2],0);
  if ((0 < (longlong)param_2[2]) && (param_1[2] != 0)) {
    memcpy((void *)*param_1,(void *)*param_2,param_1[2] << 3);
    if (param_1[2] != 0) {
      memcpy((void *)param_1[1],(void *)param_2[1],param_1[2] << 3);
    }
  }
  return param_1;
}



// FUNCTION 1483b082f FUN_1483b082f body=1177 status=ok
// SIG undefined FUN_1483b082f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483b082f(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = *(longlong *)(param_2 + 8);
  local_d8 = param_1;
  if (*param_2 == '\x01') {
    FUN_1483b04f6(param_1,*(undefined8 *)(param_2 + 0x10),lVar9);
    *(undefined8 *)(local_d8 + 0x38) = 0;
    memset(*(void **)(local_d8 + 0x18),0,*(longlong *)(local_d8 + 8) * 8 + 8);
    if (*(void **)(local_d8 + 0x20) != (void *)0x0) {
      memset(*(void **)(local_d8 + 0x20),0,*(longlong *)(local_d8 + 8) << 3);
    }
    lVar12 = *(longlong *)(param_2 + 8);
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar8 = lVar12;
    if (lVar12 < lVar11) {
      lVar8 = lVar11;
    }
    lVar10 = lVar11 * lVar12;
    if (lVar8 * 2 < lVar11 * lVar12) {
      lVar10 = lVar8 * 2;
    }
    if (*(longlong *)(local_d8 + 0x40) < lVar10 + *(longlong *)(local_d8 + 0x38)) {
      FUN_1483b0638(local_d8 + 0x28);
    }
    lVar12 = local_d8;
    if (0 < lVar9) {
      local_c0 = local_d8 + 0x28;
      lVar11 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar12 + 0x18) + 8 + lVar11 * 8) =
             *(undefined8 *)(*(longlong *)(lVar12 + 0x18) + lVar11 * 8);
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar11 * 8);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar11 * 8);
        }
        else {
          lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar11 * 8) + lVar8;
        }
        if (lVar8 < lVar10) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          local_d0 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar8 * 8);
            uVar2 = *(undefined8 *)(local_d0 + lVar8 * 8);
            lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 8 + lVar11 * 8);
            *(longlong *)(*(longlong *)(lVar12 + 0x18) + 8 + lVar11 * 8) = lVar3 + 1;
            lVar12 = *(longlong *)(lVar12 + 0x38);
            FUN_1483b06fe(local_c0,lVar12 + 1,0x3ff0000000000000);
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar12 * 8) = 0;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x30) + lVar12 * 8) = uVar2;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar3 * 8) = uVar1;
            lVar8 = lVar8 + 1;
            lVar12 = local_d8;
          } while (lVar10 != lVar8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar9);
    }
    if ((*(longlong *)(lVar12 + 0x20) == 0) && (lVar9 = *(longlong *)(lVar12 + 8), -1 < lVar9)) {
      uVar1 = *(undefined8 *)(lVar12 + 0x38);
      lVar11 = lVar9;
      do {
        if (*(longlong *)(*(longlong *)(lVar12 + 0x18) + lVar11 * 8) != 0) goto LAB_1483b0b5e;
        bVar4 = 0 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar4);
      lVar11 = -1;
LAB_1483b0b5e:
      if (lVar11 < lVar9) {
        do {
          *(undefined8 *)(*(longlong *)(local_d8 + 0x18) + 8 + lVar11 * 8) = uVar1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(longlong *)(local_d8 + 8));
      }
    }
  }
  else {
    local_b8[0] = 0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_90 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    FUN_1483b04f6(local_b8,*(undefined8 *)(param_2 + 0x10),lVar9);
    lVar12 = *(longlong *)(param_2 + 8);
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar8 = lVar12;
    if (lVar12 < lVar11) {
      lVar8 = lVar11;
    }
    lVar10 = lVar11 * lVar12;
    if (lVar8 * 2 < lVar11 * lVar12) {
      lVar10 = lVar8 * 2;
    }
    if ((longlong)local_80._8_8_ < lVar10 + local_80._0_8_) {
      FUN_1483b0638(local_90);
    }
    if (0 < lVar9) {
      lVar12 = 0;
      local_d0 = lVar9;
      do {
        *(undefined8 *)(local_a0._0_8_ + 8 + lVar12 * 8) =
             *(undefined8 *)(local_a0._0_8_ + lVar12 * 8);
        lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar12 * 8);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar12 * 8);
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar12 * 8) + lVar9;
        }
        if (lVar9 < lVar11) {
          local_c8 = *(longlong *)(param_2 + 0x28);
          lVar8 = *(longlong *)(param_2 + 0x30);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar9 * 8);
            uVar2 = *(undefined8 *)(lVar8 + lVar9 * 8);
            lVar10 = *(longlong *)(local_a0._0_8_ + 8 + lVar12 * 8);
            *(longlong *)(local_a0._0_8_ + 8 + lVar12 * 8) = lVar10 + 1;
            uVar6 = local_80._0_8_;
            FUN_1483b06fe(local_90,local_80._0_8_ + 1,0x3ff0000000000000);
            *(undefined8 *)(local_90._0_8_ + uVar6 * 8) = 0;
            *(undefined8 *)(local_90._8_8_ + uVar6 * 8) = uVar2;
            *(undefined8 *)(local_90._0_8_ + lVar10 * 8) = uVar1;
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != local_d0);
    }
    auVar5 = _DAT_149931e80;
    if ((local_a0._8_8_ == 0) && (-1 < (longlong)local_b0._0_8_)) {
      lVar9 = local_b0._0_8_;
      do {
        if (*(longlong *)(local_a0._0_8_ + lVar9 * 8) != 0) goto LAB_1483b0bc4;
        bVar4 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar4);
      lVar9 = -1;
LAB_1483b0bc4:
      lVar12 = local_b0._0_8_ - lVar9;
      if (lVar12 != 0 && lVar9 <= (longlong)local_b0._0_8_) {
        lVar11 = lVar12 + -1;
        auVar13._8_4_ = (int)lVar11;
        auVar13._0_8_ = lVar11;
        auVar13._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
        lVar9 = local_a0._0_8_ + lVar9 * 8;
        uVar7 = 0;
        auVar14 = pmovsxbq(in_XMM1,0x100);
        auVar13 = auVar13 ^ _DAT_149931e80;
        do {
          if ((bool)(~(auVar13._0_8_ < (longlong)(uVar7 ^ auVar5._0_8_)) & 1)) {
            *(undefined8 *)(lVar9 + 8 + uVar7 * 8) = local_80._0_8_;
          }
          auVar15._8_4_ = (int)uVar7;
          auVar15._0_8_ = uVar7;
          auVar15._12_4_ = (int)(uVar7 >> 0x20);
          if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar5._8_8_) <= auVar13._8_8_) {
            *(undefined8 *)(lVar9 + 0x10 + uVar7 * 8) = local_80._0_8_;
          }
          uVar7 = uVar7 + 2;
        } while ((lVar12 + 1U & 0xfffffffffffffffe) != uVar7);
      }
    }
    local_b8[0] = 1;
    FUN_1483b059e(local_d8,local_b8);
    FUN_1483affea(local_b8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b0d06 FUN_1483b0d06 body=29 status=ok
// SIG undefined FUN_1483b0d06(void)

undefined8 FUN_1483b0d06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b0d24 FUN_1483b0d24 body=106 status=ok
// SIG undefined FUN_1483b0d24(void)

void FUN_1483b0d24(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)(*param_1 + 8) * 0x200 + *(int *)(*param_1 + 0xc);
  FUN_1483b0de4(param_1 + 10,uVar4);
  if (0 < (int)uVar4) {
    lVar3 = 0;
    uVar5 = 0;
    do {
      lVar2 = param_1[0x1f];
      lVar1 = param_1[10];
      *(int *)(lVar1 + lVar3) = (int)uVar5;
      *(undefined8 *)(lVar1 + 4 + lVar3) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0x7fefffffffffffff;
      *(int *)(lVar1 + 0x18 + lVar3) = (int)lVar2;
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 1483b0d8e FUN_1483b0d8e body=34 status=ok
// SIG undefined FUN_1483b0d8e(void)

undefined8 FUN_1483b0d8e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1483a40a6(*(undefined8 *)*param_2,param_1,*param_3);
  return param_1;
}



// FUNCTION 1483b0dc6 FUN_1483b0dc6 body=29 status=ok
// SIG undefined FUN_1483b0dc6(void)

undefined8 FUN_1483b0dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b0de4 FUN_1483b0de4 body=71 status=ok
// SIG undefined FUN_1483b0de4(void)

void FUN_1483b0de4(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1483b0e2c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1483b0eb2();
      return;
    }
  }
  return;
}



// FUNCTION 1483b0e2c FUN_1483b0e2c body=132 status=ok
// SIG undefined FUN_1483b0e2c(void)

void FUN_1483b0e2c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483b0eb2 FUN_1483b0eb2 body=62 status=ok
// SIG undefined FUN_1483b0eb2(void)

void FUN_1483b0eb2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483b0ef0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1483b0ef0 FUN_1483b0ef0 body=93 status=ok
// SIG undefined FUN_1483b0ef0(void)

ulonglong FUN_1483b0ef0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1483b0f4e FUN_1483b0f4e body=132 status=ok
// SIG undefined FUN_1483b0f4e(void)

void FUN_1483b0f4e(longlong param_1,int param_2)

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



// FUNCTION 1483b0fd4 FUN_1483b0fd4 body=984 status=ok
// SIG undefined FUN_1483b0fd4(void)

void FUN_1483b0fd4(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_208 [40];
  longlong *local_1e0;
  undefined4 *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_128 = (undefined1 *)CONCAT44(local_128._4_4_,*param_2);
  pcVar3 = (code *)param_1[2];
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 6;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(&local_1b8,uVar5,&local_128);
  dVar1 = *(double *)(param_2 + 4);
  local_f8 = (code *)*param_1;
  local_100 = *param_2;
  local_118 = 0;
  local_108 = &PTR_LAB_14ae753c0;
  local_128 = &LAB_1483b13ae;
  local_1d8 = param_2;
  FUN_146c41260(local_f8 + 0x40,&local_b8,local_100,&local_128);
  FUN_146c41458(local_b8,&local_128,local_b0,local_a8);
  FUN_146c41662(local_b8,&local_198,local_b0,local_a8);
  local_1e0 = param_1 + 0xc;
  while ((((pcVar3 = local_f8, local_128 != local_198 || (local_120 != local_190)) ||
          ((int)local_110 != local_180)) || (local_110._4_4_ != local_17c))) {
    local_1d0 = local_108._0_4_;
    plVar6 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar6 = local_d8;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    iVar4 = (*pcVar3)(uVar5,&local_1d0);
    lVar7 = (longlong)iVar4;
    if (*(int *)(param_1[10] + 0x18 + lVar7 * 0x20) != *(int *)((longlong)param_1 + 0xfc)) {
      lVar8 = param_1[10] + lVar7 * 0x20;
      pcVar3 = (code *)param_1[2];
      plVar6 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar6 = param_1 + 6;
      }
      local_19c = iVar4;
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar3)(&local_1d0,uVar5,&local_19c);
      dVar9 = (double)CONCAT44(uStack_1cc,local_1d0) - local_1b8;
      dVar9 = SQRT((local_1c0 - local_1a8) * (local_1c0 - local_1a8) +
                   dVar9 * dVar9 + (local_1c8 - local_1b0) * (local_1c8 - local_1b0)) + dVar1;
      if ((((int)param_1[0x12] + 1 < iVar4) ||
          (uVar2 = *(uint *)(param_1[0x11] + lVar7 * 4), (int)uVar2 < 1)) ||
         (((int)param_1[0x10] < (int)uVar2 ||
          (*(int *)(*(longlong *)(param_1[0xe] + (ulonglong)(uVar2 >> 9) * 8) + 8 +
                   (ulonglong)(uVar2 & 0x1ff) * 0xc) < 1)))) {
        if (dVar9 < *(double *)(lVar8 + 0x10)) {
          *(undefined4 *)(lVar8 + 4) = *local_1d8;
          *(undefined4 *)(lVar8 + 8) = local_1d8[2];
          *(double *)(lVar8 + 0x10) = dVar9;
          FUN_146b9cbf0(local_1e0,iVar4,(float)dVar9);
        }
      }
      else if (dVar9 < *(double *)(lVar8 + 0x10)) {
        *(undefined4 *)(lVar8 + 4) = *local_1d8;
        *(undefined4 *)(lVar8 + 8) = local_1d8[2];
        *(double *)(lVar8 + 0x10) = dVar9;
        uVar2 = *(uint *)(param_1[0x11] + lVar7 * 4);
        *(float *)(*(longlong *)(param_1[0xe] + (ulonglong)(uVar2 >> 9) * 8) + 4 +
                  (ulonglong)(uVar2 & 0x1ff) * 0xc) = (float)dVar9;
        FUN_146bd2818(local_1e0);
      }
    }
    if ((int)local_118 == 0) {
      local_11c = 0xffffffff;
      local_110 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_128);
    }
  }
  if (local_168 != 0) {
    if (local_158 == (longlong *)0x0) {
      local_158 = local_148;
    }
    (**(code **)(*local_158 + 0x10))();
  }
  if (local_f8 != (code *)0x0) {
    plVar6 = local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar6 = local_e8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if (local_a8[0] != 0) {
    if (local_98 == (longlong *)0x0) {
      local_98 = local_88;
    }
    (**(code **)(*local_98 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b1416 FUN_1483b1416 body=29 status=ok
// SIG undefined FUN_1483b1416(void)

undefined8 FUN_1483b1416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b1434 FUN_1483b1434 body=138 status=ok
// SIG undefined FUN_1483b1434(void)

void FUN_1483b1434(longlong param_1)

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



// FUNCTION 1483b14be FUN_1483b14be body=97 status=ok
// SIG undefined FUN_1483b14be(void)

undefined8 * FUN_1483b14be(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x4000);
  memset(_Dst,0,0x4000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1483b1520(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1483b1520 FUN_1483b1520 body=132 status=ok
// SIG undefined FUN_1483b1520(void)

void FUN_1483b1520(longlong param_1,int param_2)

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



// FUNCTION 1483b15a6 FUN_1483b15a6 body=34 status=ok
// SIG undefined FUN_1483b15a6(void)

undefined8 FUN_1483b15a6(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1483a40a6(*(undefined8 *)*param_2,param_1,*param_3);
  return param_1;
}



// FUNCTION 1483b15de FUN_1483b15de body=29 status=ok
// SIG undefined FUN_1483b15de(void)

undefined8 FUN_1483b15de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b1600 FUN_1483b1600 body=132 status=ok
// SIG undefined FUN_1483b1600(void)

void FUN_1483b1600(longlong param_1,int param_2)

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



// FUNCTION 1483b1686 FUN_1483b1686 body=323 status=ok
// SIG undefined FUN_1483b1686(void)

longlong FUN_1483b1686(longlong param_1,uint param_2,char param_3)

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
            goto LAB_1483b1744;
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
    FUN_1483b1c62(param_1 + 0xf0,local_60);
    local_38 = &local_3c;
    local_30 = &local_64;
    FUN_140263e2a((longlong *)(param_1 + 0xa0),local_24,&local_38,0);
    uVar2 = local_64;
LAB_1483b1744:
    lVar3 = (ulonglong)((uVar2 & 0x1ff) << 5) +
            *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar2 >> 9) * 8);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1483b17ca FUN_1483b17ca body=1126 status=ok
// SIG undefined FUN_1483b17ca(void)

void FUN_1483b17ca(longlong *param_1,undefined4 *param_2)

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
  local_108 = &PTR_LAB_14ae753c0;
  local_128 = &LAB_1483b13ae;
  local_1f8 = param_2;
  FUN_146c41260(local_f8 + 0x40,&local_b8,local_100,&local_128);
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
    lVar6 = FUN_1483b1686(param_1,iVar4,1);
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
          goto LAB_1483b1976;
        }
      }
      *(undefined4 *)(lVar6 + 4) = *local_1f8;
      *(double *)(lVar6 + 0x10) = dVar8;
      *(undefined4 *)(lVar6 + 8) = local_1f8[2];
      FUN_146b9cbf0(local_1f0,iVar4,(float)dVar8);
    }
LAB_1483b1976:
    if ((int)local_118 == 0) {
      local_11c = 0xffffffff;
      local_110 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_128);
    }
  } while( true );
}



// FUNCTION 1483b1c32 FUN_1483b1c32 body=48 status=ok
// SIG undefined FUN_1483b1c32(void)

void FUN_1483b1c32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1483b1c62 FUN_1483b1c62 body=165 status=ok
// SIG undefined FUN_1483b1c62(void)

void FUN_1483b1c62(int *param_1,undefined8 *param_2)

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
        FUN_1483b1520(param_1 + 2,iVar2);
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



// FUNCTION 1483b1d08 FUN_1483b1d08 body=144 status=ok
// SIG undefined FUN_1483b1d08(void)

longlong FUN_1483b1d08(longlong param_1,uint param_2)

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



// FUNCTION 1483b1d98 FUN_1483b1d98 body=46 status=ok
// SIG undefined FUN_1483b1d98(void)

void FUN_1483b1d98(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_144ae9cc2();
  FUN_1483b1dc6(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 1483b1dc6 FUN_1483b1dc6 body=767 status=ok
// SIG undefined FUN_1483b1dc6(void)

void FUN_1483b1dc6(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [190];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar11 = &local_358;
    do {
      piVar3 = (int *)*plVar11;
      piVar12 = (int *)plVar11[1];
      iVar14 = (int)plVar11[2];
      iVar4 = (int)((ulonglong)((longlong)piVar12 - (longlong)piVar3) >> 2);
      piVar9 = piVar12;
      piVar16 = piVar3;
      if (iVar14 != 0) {
LAB_1483b1e91:
        uVar6 = iVar4 * -0x55555555 + 1;
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          iVar4 = piVar3[uVar7 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar3 + uVar7 * 3);
          piVar3[uVar7 * 3 + 2] = piVar3[2];
          *(undefined8 *)(piVar3 + uVar7 * 3) = *(undefined8 *)piVar3;
          piVar3[2] = iVar4;
          *(undefined8 *)piVar3 = uVar1;
          piVar8 = piVar12 + 3;
          piVar5 = piVar3;
          do {
            piVar2 = piVar5 + 3;
            piVar13 = piVar5 + 3;
            do {
              piVar5 = piVar13;
              piVar10 = piVar2;
              if (piVar12 < piVar5) break;
              piVar2 = piVar10 + 3;
              piVar13 = piVar5 + 3;
            } while (*piVar5 <= *piVar3);
            piVar2 = piVar8 + -6;
            do {
              piVar13 = piVar8;
              piVar17 = piVar2;
              piVar8 = piVar13 + -3;
              if (piVar8 <= piVar3) break;
              piVar2 = piVar17 + -3;
            } while (*piVar3 <= *piVar8);
            if (piVar8 < piVar5) goto LAB_1483b1f68;
            iVar4 = piVar5[2];
            uVar1 = *(undefined8 *)piVar5;
            piVar5[2] = piVar13[-1];
            *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
            piVar13[-1] = iVar4;
            *(undefined8 *)piVar8 = uVar1;
          } while( true );
        }
        if (piVar3 < piVar12) {
          do {
            piVar9 = piVar3;
            if (piVar3 + 3 <= piVar12) {
              piVar16 = piVar3 + 3;
              iVar14 = *piVar3;
              do {
                iVar4 = *piVar16;
                iVar15 = iVar14;
                if (iVar14 <= iVar4) {
                  iVar15 = iVar4;
                }
                if (iVar14 < iVar4) {
                  piVar9 = piVar16;
                }
                piVar16 = piVar16 + 3;
                iVar14 = iVar15;
              } while (piVar16 <= piVar12);
            }
            local_48 = piVar9[2];
            local_50 = *(undefined8 *)piVar9;
            piVar9[2] = piVar12[2];
            *(undefined8 *)piVar9 = *(undefined8 *)piVar12;
            piVar12[2] = local_48;
            *(undefined8 *)piVar12 = local_50;
            piVar12 = piVar12 + -3;
          } while (piVar3 < piVar12);
        }
        goto LAB_1483b20a4;
      }
LAB_1483b20b9:
      FUN_1483b20c6(piVar3);
LAB_1483b20a4:
      plVar11 = plVar11 + -3;
    } while (&local_358 <= plVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1483b1f68:
  local_48 = piVar3[2];
  local_50 = *(undefined8 *)piVar3;
  piVar3[2] = piVar13[-1];
  *(undefined8 *)piVar3 = *(undefined8 *)piVar8;
  piVar13[-1] = local_48;
  *(undefined8 *)piVar8 = local_50;
  iVar14 = iVar14 + -1;
  piVar13 = piVar13 + -6;
  if ((longlong)piVar17 - (longlong)piVar16 < (longlong)piVar9 - (longlong)piVar10) {
    if (piVar5 < piVar12) {
      *plVar11 = (longlong)piVar5;
      plVar11[1] = (longlong)piVar12;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    piVar10 = piVar3;
    if (piVar8 <= piVar3 + 3) goto LAB_1483b20a4;
  }
  else {
    if (piVar3 + 3 < piVar8) {
      *plVar11 = (longlong)piVar3;
      plVar11[1] = (longlong)piVar13;
      *(int *)(plVar11 + 2) = iVar14;
      plVar11 = plVar11 + 3;
    }
    piVar3 = piVar5;
    piVar13 = piVar12;
    piVar17 = piVar12;
    if (piVar12 <= piVar5) goto LAB_1483b20a4;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar10) >> 2);
  piVar12 = piVar13;
  piVar9 = piVar17;
  piVar16 = piVar10;
  if (iVar14 == 0) goto LAB_1483b20b9;
  goto LAB_1483b1e91;
}



// FUNCTION 1483b20c6 FUN_1483b20c6 body=554 status=ok
// SIG undefined FUN_1483b20c6(void)

void FUN_1483b20c6(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar6;
joined_r0x0001483b20fa:
    do {
      iVar8 = iVar6 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar6 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar8 * 0xc) <=
            *(int *)((longlong)param_1 + (longlong)iVar9 * 0xc))) {
          iVar8 = iVar9;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar6 * 0xc) <
            *(int *)((longlong)param_1 + (longlong)iVar8 * 0xc)) {
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar6 * 0xc);
          puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          local_18 = *(undefined4 *)(puVar2 + 1);
          local_20 = *puVar2;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = local_18;
          *puVar3 = local_20;
          iVar6 = iVar8;
          goto joined_r0x0001483b20fa;
        }
      }
      bVar11 = iVar10 != 0;
      iVar6 = iVar10 + -1;
      iVar10 = iVar6;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2 - 1;
      local_18 = *(undefined4 *)(param_1 + 1);
      local_20 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar7 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 8) = local_18;
      *(undefined8 *)((longlong)param_1 + uVar7 * 0xc) = local_20;
      if (param_2 != 2) {
        do {
          iVar6 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar9 = iVar8;
            if (((longlong)iVar6 < (longlong)uVar7) &&
               (*(int *)((longlong)param_1 + (longlong)iVar8 * 0xc) <=
                *(int *)((longlong)param_1 + (longlong)iVar6 * 0xc))) {
              iVar9 = iVar6;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0xc) <=
                *(int *)((longlong)param_1 + (longlong)iVar10 * 0xc)) break;
            puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
            puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar9 * 0xc);
            uVar4 = *(undefined4 *)(puVar2 + 1);
            uVar5 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *puVar2 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = uVar4;
            *puVar3 = uVar5;
            iVar6 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar1 = uVar7 - 1;
          local_18 = *(undefined4 *)(param_1 + 1);
          local_20 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_18;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_20;
          bVar11 = 2 < uVar7;
          uVar7 = uVar1;
        } while (bVar11);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483b22f2 FUN_1483b22f2 body=43 status=ok
// SIG undefined FUN_1483b22f2(void)

undefined8
FUN_1483b22f2(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  (*(code *)*param_2)(param_1,param_3,*param_4,*param_5);
  return param_1;
}



// FUNCTION 1483b2348 FUN_1483b2348 body=29 status=ok
// SIG undefined FUN_1483b2348(void)

undefined8 FUN_1483b2348(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b2366 FUN_1483b2366 body=87 status=ok
// SIG undefined FUN_1483b2366(void)

void FUN_1483b2366(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 < param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) < (ulonglong)(param_2 - lVar1)) {
      FUN_1483b23be();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < lVar1) && (*(longlong *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1483b2460();
      return;
    }
  }
  return;
}



// FUNCTION 1483b23be FUN_1483b23be body=161 status=ok
// SIG undefined FUN_1483b23be(void)

void FUN_1483b23be(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = uVar1;
    }
  }
  else {
    uVar2 = (uVar1 * 3 >> 3) + uVar1 + 0x10;
  }
  uVar3 = FUN_144a3809e(uVar2 * 0xc,4);
  uVar2 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar3 / 0xc)) {
    uVar2 = uVar3 / 0xc;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar2;
  FUN_140d2d5e4(param_1,param_2,uVar2,0xc,4);
  return;
}



// FUNCTION 1483b2460 FUN_1483b2460 body=67 status=ok
// SIG undefined FUN_1483b2460(void)

void FUN_1483b2460(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1483b24a4(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,0xc,4);
  }
  return;
}



// FUNCTION 1483b24a4 FUN_1483b24a4 body=121 status=ok
// SIG undefined FUN_1483b24a4(void)

ulonglong FUN_1483b24a4(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if ((((0x3fff < (param_3 - param_2) * 0xc) || ((longlong)(param_2 * 3) < (longlong)(param_3 * 2)))
      && (param_2 == 0 || 0x40 < (longlong)(param_3 - param_2))) &&
     (param_3 = param_2, 0 < (longlong)param_2)) {
    uVar1 = FUN_144a3809e(param_2 * 0xc,4);
    param_3 = uVar1 / 0xc;
  }
  return param_3;
}



// FUNCTION 1483b251e FUN_1483b251e body=87 status=ok
// SIG undefined FUN_1483b251e(void)

void FUN_1483b251e(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 < param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) < (ulonglong)(param_2 - lVar1)) {
      FUN_1483b2576();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < lVar1) && (*(longlong *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1483b2604();
      return;
    }
  }
  return;
}



// FUNCTION 1483b2576 FUN_1483b2576 body=141 status=ok
// SIG undefined FUN_1483b2576(void)

void FUN_1483b2576(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 4,0x10);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,0x10,0x10);
  return;
}



// FUNCTION 1483b2604 FUN_1483b2604 body=67 status=ok
// SIG undefined FUN_1483b2604(void)

void FUN_1483b2604(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1483b2648(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,0x10,0x10);
  }
  return;
}



// FUNCTION 1483b2648 FUN_1483b2648 body=100 status=ok
// SIG undefined FUN_1483b2648(void)

ulonglong FUN_1483b2648(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (((((param_3 - param_2 & 0xffffffffffffc00) != 0) ||
       ((longlong)(param_2 * 3) < (longlong)(param_3 * 2))) &&
      (param_2 == 0 || 0x40 < (longlong)(param_3 - param_2))) &&
     (param_3 = param_2, 0 < (longlong)param_2)) {
    uVar1 = FUN_144a3809e(param_2 << 4,0x10);
    param_3 = uVar1 >> 4;
  }
  return param_3;
}



// FUNCTION 1483b26ac FUN_1483b26ac body=98 status=ok
// SIG undefined FUN_1483b26ac(void)

void FUN_1483b26ac(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1483b270e FUN_1483b270e body=43 status=ok
// SIG undefined FUN_1483b270e(void)

void FUN_1483b270e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1483b273a FUN_1483b273a body=147 status=ok
// SIG undefined FUN_1483b273a(void)

void FUN_1483b273a(longlong param_1,int param_2)

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



// FUNCTION 1483b27ce FUN_1483b27ce body=101 status=ok
// SIG undefined FUN_1483b27ce(void)

void FUN_1483b27ce(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_1483b270e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1483b2834 FUN_1483b2834 body=63 status=ok
// SIG undefined FUN_1483b2834(void)

void FUN_1483b2834(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483b2874(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1483b2874 FUN_1483b2874 body=117 status=ok
// SIG undefined FUN_1483b2874(void)

ulonglong FUN_1483b2874(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 1483b28e9 FUN_1483b28e9 body=159 status=ok
// SIG undefined FUN_1483b28e9(void)

void FUN_1483b28e9(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14ae75630;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x7fefffffffffffff;
  puVar1[6] = 0xffefffffffffffff;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x7fefffffffffffff;
  puVar1[0xb] = 0xffefffffffffffff;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0x7fefffffffffffff;
  puVar1[0x10] = 0xffefffffffffffff;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0x7fefffffffffffff;
  puVar1[0x15] = 0xffefffffffffffff;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 1483b2996 FUN_1483b2996 body=29 status=ok
// SIG undefined FUN_1483b2996(void)

undefined8 FUN_1483b2996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483b29b4 FUN_1483b29b4 body=127 status=ok
// SIG undefined FUN_1483b29b4(void)

void FUN_1483b29b4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1483b2a34 FUN_1483b2a34 body=120 status=ok
// SIG undefined FUN_1483b2a34(void)

void FUN_1483b2a34(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  param_1[1] = 0;
  if (param_1[2] != param_3) {
    FUN_1467b10c2(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 1U;
    if ((ulonglong)param_1[2] < lVar1 + 1U) {
      FUN_1467b1212(param_1,lVar1);
    }
    *(undefined4 *)(*param_1 + lVar1 * 4) = *param_2;
  }
  return;
}



// FUNCTION 1483b2aae FUN_1483b2aae body=120 status=ok
// SIG undefined FUN_1483b2aae(void)

void FUN_1483b2aae(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  param_1[1] = 0;
  if (param_1[2] != param_3) {
    FUN_1483b2ba2(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 1U;
    if ((ulonglong)param_1[2] < lVar1 + 1U) {
      FUN_1483b2c02(param_1,lVar1);
    }
    *(undefined1 *)(*param_1 + lVar1) = *param_2;
  }
  return;
}



// FUNCTION 1483b2b28 FUN_1483b2b28 body=121 status=ok
// SIG undefined FUN_1483b2b28(void)

void FUN_1483b2b28(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  param_1[1] = 0;
  if (param_1[2] != param_3) {
    FUN_1483b2c88(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 1U;
    if ((ulonglong)param_1[2] < lVar1 + 1U) {
      FUN_1483b2cf2(param_1,lVar1);
    }
    *(undefined8 *)(*param_1 + lVar1 * 8) = *param_2;
  }
  return;
}



// FUNCTION 1483b2ba2 FUN_1483b2ba2 body=96 status=ok
// SIG undefined FUN_1483b2ba2(void)

void FUN_1483b2ba2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_144a3809e(param_2,1);
    lVar2 = 0x7fffffffffffffff;
    if (param_2 <= lVar1) {
      lVar2 = lVar1;
    }
  }
  if (lVar2 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar2;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar2,1,1);
  }
  return;
}



// FUNCTION 1483b2c02 FUN_1483b2c02 body=133 status=ok
// SIG undefined FUN_1483b2c02(void)

void FUN_1483b2c02(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  lVar2 = FUN_144a3809e(uVar3,1);
  lVar4 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= lVar2) {
    lVar4 = lVar2;
  }
  *(longlong *)(param_1 + 0x10) = lVar4;
  FUN_140d2d5e4(param_1,param_2,lVar4,1,1);
  return;
}



// FUNCTION 1483b2c88 FUN_1483b2c88 body=105 status=ok
// SIG undefined FUN_1483b2c88(void)

void FUN_1483b2c88(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 * 8,4);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3;
    }
  }
  if (uVar2 != *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1483b2cf2 FUN_1483b2cf2 body=141 status=ok
// SIG undefined FUN_1483b2cf2(void)

void FUN_1483b2cf2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 3,4);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,8,4);
  return;
}



// FUNCTION 1483b2d80 FUN_1483b2d80 body=228 status=ok
// SIG undefined FUN_1483b2d80(void)

undefined8
FUN_1483b2d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_146bdd936(param_1,param_2,param_4,param_5);
  iVar2 = FUN_146bdd936(param_2,param_3,param_4,param_5);
  iVar3 = FUN_146bdd936(param_3,param_1,param_4,param_5);
  if (((0.0 <= (double)iVar1 * (double)iVar3) && (0.0 <= (double)iVar1 * (double)iVar2)) &&
     (0.0 <= (double)iVar2 * (double)iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001483b2e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_14ae75b24 +
                      *(int *)(&DAT_14ae75b24 +
                              (ulonglong)
                              ((uint)(iVar2 == 0) + (uint)(iVar1 == 0) + (uint)(iVar3 == 0)) * 4)))
                      (&DAT_14ae75b24 +
                       *(int *)(&DAT_14ae75b24 +
                               (ulonglong)
                               ((uint)(iVar2 == 0) + (uint)(iVar1 == 0) + (uint)(iVar3 == 0)) * 4));
    return uVar4;
  }
  return 0;
}



// FUNCTION 1483b2f30 FUN_1483b2f30 body=141 status=ok
// SIG undefined FUN_1483b2f30(void)

void FUN_1483b2f30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 4,8);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,0x10,8);
  return;
}



// FUNCTION 1483b2fbe FUN_1483b2fbe body=220 status=ok
// SIG undefined FUN_1483b2fbe(void)

void FUN_1483b2fbe(longlong param_1,int param_2,double *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar11 = *(longlong *)(param_1 + 0x78);
  iVar4 = *(int *)(*(longlong *)(lVar11 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                  (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  uVar12 = param_2 * 3 + 1;
  iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar12 >> 9) * 8) +
                  (ulonglong)(uVar12 & 0x1ff) * 4);
  uVar12 = param_2 * 3 + 2;
  iVar6 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(uVar12 >> 9) * 8) +
                  (ulonglong)(uVar12 & 0x1ff) * 4);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  lVar11 = 0;
  do {
    iVar8 = (int)lVar11;
    uVar12 = iVar4 * 3 + iVar8;
    lVar7 = *(longlong *)(param_1 + 0x48);
    uVar9 = iVar5 * 3 + iVar8;
    uVar10 = iVar6 * 3 + iVar8;
    *(double *)(param_4 + lVar11 * 8) =
         (double)*(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 >> 9) * 8) +
                           (ulonglong)(uVar10 & 0x1ff) * 4) * dVar3 +
         (double)*(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar9 >> 9) * 8) +
                           (ulonglong)(uVar9 & 0x1ff) * 4) * dVar2 +
         (double)*(float *)(*(longlong *)(lVar7 + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 4) * dVar1;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  return;
}



// FUNCTION 1483b309a FUN_1483b309a body=263 status=ok
// SIG undefined FUN_1483b309a(void)

undefined4 * FUN_1483b309a(undefined4 *param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar16 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar15 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar2 + uVar15 * 0xc);
  lVar3 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar19 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar19 * 0x18);
  puVar17 = (undefined8 *)(lVar3 + uVar19 * 0x18);
  local_68[0] = *puVar17;
  local_68[1] = puVar17[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar15 * 0xc);
  lVar3 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar19 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar19 * 0x18);
  puVar17 = (undefined8 *)(lVar3 + uVar19 * 0x18);
  local_68[3] = *puVar17;
  uStack_48 = puVar17[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar15 * 0xc);
  lVar16 = *(longlong *)(lVar16 + (ulonglong)(uVar1 >> 9) * 8);
  uVar15 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18);
  puVar17 = (undefined8 *)(lVar16 + uVar15 * 0x18);
  local_38 = *puVar17;
  uStack_30 = puVar17[1];
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  uVar8 = param_4[4];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  uVar12 = param_4[9];
  uVar13 = param_4[10];
  uVar14 = param_4[0xb];
  param_1[8] = param_4[8];
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  param_1[0xb] = uVar14;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar11;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  puVar17 = local_68;
  puVar18 = (undefined8 *)(param_1 + 0xc);
  for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  FUN_146bd80f0(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b31a2 FUN_1483b31a2 body=31 status=ok
// SIG undefined FUN_1483b31a2(void)

void FUN_1483b31a2(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1483b31c2 FUN_1483b31c2 body=132 status=ok
// SIG undefined FUN_1483b31c2(void)

void FUN_1483b31c2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1483b3248 FUN_1483b3248 body=89 status=ok
// SIG undefined FUN_1483b3248(void)

void FUN_1483b3248(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_1483b32e0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1483b32a2 FUN_1483b32a2 body=62 status=ok
// SIG undefined FUN_1483b32a2(void)

void FUN_1483b32a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483b3310(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1483b32e0 FUN_1483b32e0 body=47 status=ok
// SIG undefined FUN_1483b32e0(void)

void FUN_1483b32e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483b3310 FUN_1483b3310 body=93 status=ok
// SIG undefined FUN_1483b3310(void)

ulonglong FUN_1483b3310(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1483b336e FUN_1483b336e body=132 status=ok
// SIG undefined FUN_1483b336e(void)

void FUN_1483b336e(longlong param_1,int param_2)

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



// FUNCTION 1483b33f4 FUN_1483b33f4 body=62 status=ok
// SIG undefined FUN_1483b33f4(void)

void FUN_1483b33f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483b3478(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1483b3432 FUN_1483b3432 body=70 status=ok
// SIG undefined FUN_1483b3432(void)

void FUN_1483b3432(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1483b3478 FUN_1483b3478 body=93 status=ok
// SIG undefined FUN_1483b3478(void)

ulonglong FUN_1483b3478(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1483b34d6 FUN_1483b34d6 body=177 status=ok
// SIG undefined FUN_1483b34d6(void)

longlong * FUN_1483b34d6(uint *param_1,longlong *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  if (param_4 < 1) {
    param_4 = 0;
  }
  uVar4 = param_1[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  iVar5 = ((int)uVar3 / (int)uVar4 + 1) - (uint)((int)uVar3 % (int)uVar4 == 0);
  iVar2 = param_3 / iVar5;
  param_3 = param_3 % iVar5;
  uVar7 = param_3 * uVar4 - param_4;
  if ((int)uVar3 <= (int)uVar7) {
    uVar7 = uVar3;
  }
  uVar8 = (ulonglong)uVar7;
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  uVar7 = param_1[3] * iVar2 - param_4;
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = uVar1;
  }
  if ((int)uVar7 < 1) {
    uVar7 = uVar6;
  }
  uVar4 = (param_3 + 1) * uVar4 + param_4;
  if ((int)uVar3 <= (int)uVar4) {
    uVar4 = uVar3;
  }
  if ((int)uVar4 < 1) {
    uVar4 = uVar6;
  }
  uVar3 = (iVar2 + 1) * param_1[3] + param_4;
  if ((int)uVar1 <= (int)uVar3) {
    uVar3 = uVar1;
  }
  if ((int)uVar3 < 1) {
    uVar3 = uVar6;
  }
  *param_2 = ((ulonglong)uVar7 << 0x20) + uVar8;
  param_2[1] = CONCAT44(uVar3,uVar4);
  *(uint *)(param_2 + 2) = uVar4 - (int)uVar8;
  *(uint *)((longlong)param_2 + 0x14) = uVar3 - uVar7;
  return param_2;
}



// FUNCTION 1483b3588 FUN_1483b3588 body=110 status=ok
// SIG undefined FUN_1483b3588(void)

void FUN_1483b3588(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 << 4,8);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4;
    }
  }
  if ((longlong)param_3 < (longlong)uVar2) {
    FUN_140d2d5e4(param_1,0,uVar2,0x10,8);
    param_3 = uVar2;
  }
  *(ulonglong *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 1483b35f6 FUN_1483b35f6 body=132 status=ok
// SIG undefined FUN_1483b35f6(void)

void FUN_1483b35f6(longlong param_1,int param_2)

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



// FUNCTION 1483b367b FUN_1483b367b body=73 status=ok
// SIG undefined FUN_1483b367b(void)

void FUN_1483b367b(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483b36c4 FUN_1483b36c4 body=138 status=ok
// SIG undefined FUN_1483b36c4(void)

undefined8 FUN_1483b36c4(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = (uint)((ulonglong)param_2 >> 0x20);
  pfVar1 = (float *)*param_1;
  fVar4 = (float)param_2 * *pfVar1;
  uVar3 = -(uint)(-fVar4 <= fVar4);
  fVar4 = (float)(~uVar3 & (uint)-fVar4 | (uint)fVar4 & uVar3);
  fVar7 = fVar4 * fVar4;
  if (1.0 <= fVar4) {
    fVar5 = 0.0;
    uVar3 = 0;
    if (2.0 <= fVar4) goto LAB_1483b371c;
    fVar5 = fVar4 * pfVar1[6] + fVar4 * fVar7 * pfVar1[4] + fVar7 * pfVar1[5];
    lVar2 = 0x1c;
  }
  else {
    fVar5 = fVar4 * fVar7 * pfVar1[1] + fVar7 * pfVar1[2];
    lVar2 = 0xc;
  }
  fVar5 = fVar5 + *(float *)((longlong)pfVar1 + lVar2);
  uVar3 = uVar6 & (uVar6 ^ 0x80000000);
LAB_1483b371c:
  return CONCAT44(uVar3,fVar5);
}



// FUNCTION 1483b374e FUN_1483b374e body=138 status=ok
// SIG undefined FUN_1483b374e(void)

undefined8 FUN_1483b374e(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = (uint)((ulonglong)param_2 >> 0x20);
  pfVar1 = (float *)*param_1;
  fVar4 = (float)param_2 * *pfVar1;
  uVar3 = -(uint)(-fVar4 <= fVar4);
  fVar4 = (float)(~uVar3 & (uint)-fVar4 | (uint)fVar4 & uVar3);
  fVar7 = fVar4 * fVar4;
  if (1.0 <= fVar4) {
    fVar5 = 0.0;
    uVar3 = 0;
    if (2.0 <= fVar4) goto LAB_1483b37a6;
    fVar5 = fVar4 * pfVar1[6] + fVar4 * fVar7 * pfVar1[4] + fVar7 * pfVar1[5];
    lVar2 = 0x1c;
  }
  else {
    fVar5 = fVar4 * fVar7 * pfVar1[1] + fVar7 * pfVar1[2];
    lVar2 = 0xc;
  }
  fVar5 = fVar5 + *(float *)((longlong)pfVar1 + lVar2);
  uVar3 = uVar6 & (uVar6 ^ 0x80000000);
LAB_1483b37a6:
  return CONCAT44(uVar3,fVar5);
}



// FUNCTION 1483b37d8 FUN_1483b37d8 body=326 status=ok
// SIG undefined FUN_1483b37d8(void)

undefined4 * FUN_1483b37d8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483b3920(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_1483b3a06(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1483b3b02(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b3920 FUN_1483b3920 body=229 status=ok
// SIG undefined FUN_1483b3920(void)

int * FUN_1483b3920(longlong *param_1,int *param_2)

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



// FUNCTION 1483b3a06 FUN_1483b3a06 body=137 status=ok
// SIG undefined FUN_1483b3a06(void)

undefined8 FUN_1483b3a06(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1483b3a90((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483b3a90 FUN_1483b3a90 body=114 status=ok
// SIG undefined FUN_1483b3a90(void)

void FUN_1483b3a90(longlong *param_1,int param_2)

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



// FUNCTION 1483b3b02 FUN_1483b3b02 body=477 status=ok
// SIG undefined FUN_1483b3b02(void)

void FUN_1483b3b02(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 1483b3ce0 FUN_1483b3ce0 body=1253 status=ok
// SIG undefined FUN_1483b3ce0(void)

float * FUN_1483b3ce0(longlong param_1,float *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  double *local_148;
  double *local_140;
  int local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar7 = *(ulonglong *)(param_3 + 0x38);
  uVar5 = param_3[0x3a];
  local_148 = &local_c0;
  FUN_146c3bf9c(*(undefined8 *)(param_1 + 0x68),*param_3,param_3 + 0x26,&local_a8);
  puVar1 = param_3 + 0x3c;
  local_148 = (double *)&local_cc;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),uVar7,uVar5,puVar1)
  ;
  fVar14 = SQRT(local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8);
  fVar15 = 1.0 / fVar14;
  if (0.0 < fVar14) {
    local_cc = local_cc * fVar15;
    fVar12 = local_c8 * fVar15;
  }
  else {
    local_cc = 0.0;
    fVar12 = 0.0;
  }
  local_c4 = (float)(-(uint)(0.0 < fVar14) & (uint)(local_c4 * fVar15));
  local_c8 = fVar12;
  fVar14 = local_cc;
  fVar15 = local_c4;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar9 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    lVar11 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x50);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar9 >> 0x10 ^ uVar9))
                               * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 0x20) == uVar7) {
          if (((undefined8 *)(lVar11 + 8) != (undefined8 *)0x0 && lVar11 != 0) &&
             (piVar8 = *(int **)(lVar11 + 8), piVar8 != (int *)0x0)) {
            local_12c = *(int *)(lVar11 + 0x14);
            uVar6 = *(undefined4 *)(lVar11 + 0x10);
            local_140 = &local_100;
            local_148 = &local_e8;
            (**(code **)(**(longlong **)(param_1 + 8) + 0x100))
                      (*(longlong **)(param_1 + 8),uVar7,param_3[0x3a],puVar1);
            local_140 = (double *)&local_108;
            local_148 = (double *)CONCAT44(local_148._4_4_,uVar6);
            (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))
                      (*(longlong **)(param_1 + 8),uVar7,uVar5,puVar1);
            local_128 = 0;
            uStack_120 = 0x3f80000000000000;
            local_90 = 0.0;
            if (0.0 <= local_108) {
              local_90 = 1.0;
              if ((double)local_108 <= 1.0) {
                local_90 = (double)local_108;
              }
            }
            local_88 = 0.0;
            if ((0.0 <= local_104) && (local_88 = 1.0, (double)local_104 <= 1.0)) {
              local_88 = (double)local_104;
            }
            local_88 = (double)piVar8[1] * local_88;
            local_90 = local_90 * (double)*piVar8;
            FUN_1483b7358(piVar8,&local_118,&local_90,&local_128);
            fVar13 = (local_110 + local_110) - DAT_14c846358;
            fVar12 = (local_114 + local_114) - DAT_14c846350._4_4_;
            fVar14 = (local_118 + local_118) - (float)DAT_14c846350;
            fVar15 = fVar13;
            if (local_12c == 0) {
              fVar16 = (float)local_100 * fVar12;
              fVar15 = local_c4 * fVar13 + (float)local_f0 * fVar12 + (float)local_d8 * fVar14;
              fVar12 = local_c8 * fVar13 + (float)local_f8 * fVar12 + (float)local_e0 * fVar14;
              fVar14 = fVar13 * local_cc + fVar16 + (float)local_e8 * fVar14;
            }
            fVar13 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12);
            fVar16 = 1.0 / fVar13;
            if (0.0 < fVar13) {
              fVar14 = fVar14 * fVar16;
              fVar12 = fVar12 * fVar16;
            }
            else {
              fVar14 = 0.0;
              fVar12 = 0.0;
            }
            fVar15 = (float)(-(uint)(0.0 < fVar13) & (uint)(fVar15 * fVar16));
          }
          break;
        }
        iVar10 = *(int *)(lVar11 + 0x18);
      } while (iVar10 != -1);
    }
  }
  dVar2 = *(double *)(param_3 + 0x36);
  dVar3 = *(double *)(param_3 + 0x34);
  dVar4 = *(double *)(param_3 + 0x32);
  *param_2 = (float)local_98 * fVar15 + (float)local_a8 * fVar14 + (float)local_a0 * fVar12;
  param_2[1] = (float)local_b0 * fVar15 + (float)local_c0 * fVar14 + (float)local_b8 * fVar12;
  param_2[2] = (float)dVar2 * fVar15 + (float)dVar4 * fVar14 + (float)dVar3 * fVar12;
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1483b41c6 FUN_1483b41c6 body=435 status=ok
// SIG undefined FUN_1483b41c6(void)

float * FUN_1483b41c6(longlong param_1,float *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  double *local_98;
  float local_8c;
  float local_88;
  float local_84;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = param_3[0x3a];
  local_98 = &local_80;
  FUN_146c3bf9c(*(undefined8 *)(param_1 + 0x68),*param_3,param_3 + 0x26,&local_68);
  local_98 = (double *)&local_8c;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
            (*(longlong **)(param_1 + 8),uVar5,uVar4,param_3 + 0x3c);
  fVar7 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88);
  fVar6 = 1.0 / fVar7;
  if (0.0 < fVar7) {
    local_8c = local_8c * fVar6;
    local_88 = local_88 * fVar6;
  }
  else {
    local_8c = 0.0;
    local_88 = 0.0;
  }
  fVar6 = (float)(-(uint)(0.0 < fVar7) & (uint)(local_84 * fVar6));
  dVar1 = *(double *)(param_3 + 0x36);
  dVar2 = *(double *)(param_3 + 0x34);
  dVar3 = *(double *)(param_3 + 0x32);
  *param_2 = (float)local_58 * fVar6 + (float)local_68 * local_8c + (float)local_60 * local_88;
  param_2[1] = (float)local_70 * fVar6 + (float)local_80 * local_8c + (float)local_78 * local_88;
  param_2[2] = (float)dVar1 * fVar6 + (float)dVar3 * local_8c + (float)dVar2 * local_88;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b437a FUN_1483b437a body=210 status=ok
// SIG undefined FUN_1483b437a(void)

double * FUN_1483b437a(int *param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 uStack_2c;
  double local_28;
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (param_1[1] == 1) {
    local_20[0] = *param_1;
    local_20[1] = 1;
    FUN_1483b444e(local_20,&local_30);
    dVar1 = (double)CONCAT44(uStack_2c,local_30);
    *param_2 = dVar1;
    param_2[1] = local_28;
    dVar1 = (1.0 - dVar1 * dVar1) - local_28 * local_28;
    param_2[2] = SQRT((double)(~-(ulonglong)(dVar1 <= 0.0) & (ulonglong)dVar1));
  }
  else if (param_1[1] == 0) {
    local_30 = *param_1 * 2;
    FUN_148303adc(&local_30,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b444e FUN_1483b444e body=285 status=ok
// SIG undefined FUN_1483b444e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1483b444e(int *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46900) {
    FUN_144b3d300(&DAT_14cb46900);
    in_XMM0_Qb = extraout_XMM0_Qb;
    if (DAT_14cb46900 == -1) {
      _DAT_14cb468f8 = 1.618033988749895;
      _Init_thread_footer(&DAT_14cb46900);
      in_XMM0_Qb = extraout_XMM0_Qb_00;
    }
  }
  dVar2 = (double)(param_3 + 1) / _DAT_14cb468f8;
  auVar4._8_4_ = (int)in_XMM0_Qb;
  auVar4._0_8_ = dVar2;
  auVar4._12_4_ = (int)((ulonglong)in_XMM0_Qb >> 0x20);
  auVar4 = roundsd(in_XMM1,auVar4,9);
  dVar2 = dVar2 - auVar4._0_8_;
  dVar1 = (double)(param_3 + 1) / (double)(*param_1 + 1);
  if (param_1[1] == 1) {
    dVar3 = dVar2 * 6.283185307179586;
    if (dVar1 < 0.0) {
      dVar1 = sqrt(dVar1);
    }
    else {
      dVar1 = SQRT(dVar1);
    }
    dVar2 = cos(dVar3);
    dVar2 = dVar2 * dVar1;
    dVar3 = sin(dVar3);
    dVar1 = dVar3 * dVar1;
  }
  *param_2 = dVar2;
  param_2[1] = dVar1;
  return param_2;
}



// FUNCTION 1483b456c FUN_1483b456c body=1928 status=ok
// SIG undefined FUN_1483b456c(void)

float * FUN_1483b456c(longlong param_1,float *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_298 [32];
  double *local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  float local_164;
  float local_160;
  float local_15c;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  longlong *local_138;
  longlong local_128 [4];
  undefined1 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = param_3[0x3a];
  local_278 = (double *)&local_164;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
            (*(longlong **)(param_1 + 0x38),uVar3,uVar2,param_3 + 0x3c);
  fVar18 = local_15c * local_15c + local_164 * local_164 + local_160 * local_160;
  if (1e-08 < fVar18) {
    fVar18 = 1.0 / SQRT(fVar18);
    local_164 = local_164 * fVar18;
    local_160 = local_160 * fVar18;
    local_15c = local_15c * fVar18;
    local_278 = &local_198;
    FUN_146c3bf9c(*(undefined8 *)(param_1 + 0x40),*param_3,param_3 + 0x26,&local_180);
    local_1a8 = *(undefined8 *)(param_3 + 0x40);
    local_278 = (double *)&local_1b8;
    local_1b8 = *(undefined8 *)(param_3 + 0x3c);
    uStack_1b0 = *(undefined8 *)(param_3 + 0x3e);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))
              (*(longlong **)(param_1 + 0x38),&local_1d0,uVar3,uVar2);
    local_248 = (double)local_15c;
    dStack_250 = (double)local_160;
    local_258 = (double)local_164;
    local_208 = local_258 * 9.999999747378752e-06 + local_1d0;
    dStack_200 = dStack_250 * 9.999999747378752e-06 + dStack_1c8;
    local_1f8 = local_248 * 9.999999747378752e-06 + local_1c0;
    local_1f0 = 0.0;
    dStack_1e8 = 0.0;
    local_1e0 = 0.0;
    local_1d8 = 1.0;
    local_148 = (double)DAT_14c8463c8;
    local_158 = DAT_14c8463b8;
    dStack_150 = (double)DAT_14c8463c0;
    local_1d0 = local_208;
    dStack_1c8 = dStack_200;
    local_1c0 = local_1f8;
    FUN_146bfb7f2(&local_1f0,&local_158);
    iVar9 = rand();
    dVar20 = local_1f0 * (local_1f0 + local_1f0);
    dVar14 = (local_1f0 + local_1f0) * local_1d8;
    dVar19 = local_1d8 * (dStack_1e8 + dStack_1e8);
    dVar6 = local_1f0 * (local_1e0 + local_1e0);
    dVar17 = (dStack_1e8 + dStack_1e8) * dStack_1e8;
    dVar7 = (local_1e0 + local_1e0) * dStack_1e8;
    dVar5 = (double)((float)(iVar9 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
            6.283185307179586 * 0.5;
    dVar12 = sin(dVar5);
    local_140 = cos(dVar5);
    local_158 = (dVar6 + dVar19) * dVar12;
    dStack_150 = (dVar7 - dVar14) * dVar12;
    local_148 = (1.0 - (dVar17 + dVar20)) * dVar12;
    FUN_1482ff674(&local_208,&local_158);
    local_148 = 0.0;
    local_138 = (longlong *)0x0;
    local_108 = 0;
    local_158 = *(double *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x58);
    dVar5 = DAT_14c8464e0;
    dVar6 = DAT_14c8464e8;
    dVar7 = DAT_14c8464f0;
    if ((longlong)iVar9 == 0) {
      dVar14 = 0.0;
      dVar12 = 0.0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x50);
      lVar11 = 0;
      dVar12 = 0.0;
      dVar14 = 0.0;
      do {
        local_218 = *(undefined8 *)(lVar4 + 0x10 + lVar11);
        puVar1 = (undefined8 *)(lVar4 + lVar11);
        local_228 = *puVar1;
        uStack_220 = puVar1[1];
        FUN_146bed047(&local_270,&local_1f0,&local_228);
        local_248 = local_1c0;
        local_258 = local_1d0;
        dStack_250 = dStack_1c8;
        local_230 = local_260;
        local_240 = local_270;
        dStack_238 = dStack_268;
        dVar17 = local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268;
        if (9.99999993922529e-09 < dVar17) {
          local_230 = 1.0 / SQRT(dVar17);
          local_240 = local_270 * local_230;
          dStack_238 = dStack_268 * local_230;
          local_230 = local_260 * local_230;
        }
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                          (*(longlong **)(param_1 + 0x38),&local_258,&local_158);
        dVar19 = (double)local_15c * local_230 +
                 (double)local_164 * local_240 + (double)local_160 * dStack_238;
        dVar17 = 1.0;
        if (dVar19 < *(double *)(param_1 + 0x48)) {
          dVar19 = dVar19 / *(double *)(param_1 + 0x48);
          dVar20 = 1.0;
          if (dVar19 <= 1.0) {
            dVar20 = dVar19;
          }
          dVar20 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar20);
          dVar17 = 0.0;
          if (0.0 <= dVar20) {
            dVar17 = dVar20;
          }
          dVar17 = (1.0 - dVar17) * 0.0 + dVar17;
          dVar17 = dVar17 * dVar17;
        }
        if (cVar8 == '\0') {
          dVar5 = dVar5 + local_170 * local_230 + local_180 * local_240 + local_178 * dStack_238;
          dVar6 = dVar6 + local_188 * local_230 + local_198 * local_240 + local_190 * dStack_238;
          dVar7 = dVar7 + local_230 * *(double *)(param_3 + 0x36) +
                          local_240 * *(double *)(param_3 + 0x32) +
                          dStack_238 * *(double *)(param_3 + 0x34);
        }
        else {
          dVar12 = dVar12 + dVar17;
        }
        dVar14 = dVar14 + dVar17;
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar11);
    }
    dVar15 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
    dVar17 = DAT_14cb46810;
    dVar19 = DAT_14cb46808;
    dVar20 = DAT_14cb46800;
    if (0.0 < dVar15) {
      dVar15 = 1.0 / dVar15;
      dVar17 = dVar7 * dVar15;
      dVar19 = dVar6 * dVar15;
      dVar20 = dVar5 * dVar15;
    }
    *param_2 = (float)(double)(-(ulonglong)(0.0001 < dVar14) & (ulonglong)(dVar12 / dVar14));
    param_2[1] = (float)dVar20;
    param_2[2] = (float)dVar19;
    param_2[3] = (float)dVar17;
    if (local_148 != 0.0) {
      plVar10 = local_138;
      if (local_138 == (longlong *)0x0) {
        plVar10 = local_128;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    fVar18 = (float)DAT_14cb46810;
    fVar13 = (float)DAT_14cb46808;
    fVar16 = (float)DAT_14cb46800;
    *param_2 = 0.0;
    param_2[1] = fVar16;
    param_2[2] = fVar13;
    param_2[3] = fVar18;
  }
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b4cf6 FUN_1483b4cf6 body=1719 status=ok
// SIG undefined FUN_1483b4cf6(void)

float * FUN_1483b4cf6(longlong param_1,float *param_2,longlong param_3,double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_258 [32];
  float *local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float local_154;
  float local_150;
  float local_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  longlong *local_128;
  longlong local_118 [4];
  undefined1 local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar6 = *(undefined8 *)(param_3 + 0xe0);
  uVar5 = *(undefined4 *)(param_3 + 0xe8);
  local_238 = &local_154;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
            (*(longlong **)(param_1 + 0x38),uVar6,uVar5,(undefined8 *)(param_3 + 0xf0));
  fVar15 = local_14c * local_14c + local_154 * local_154 + local_150 * local_150;
  if (1e-08 < fVar15) {
    fVar15 = 1.0 / SQRT(fVar15);
    local_154 = local_154 * fVar15;
    local_150 = local_150 * fVar15;
    local_14c = local_14c * fVar15;
    local_168 = *(undefined8 *)(param_3 + 0x100);
    local_238 = (float *)&local_178;
    local_178 = *(undefined8 *)(param_3 + 0xf0);
    uStack_170 = *(undefined8 *)(param_3 + 0xf8);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))
              (*(longlong **)(param_1 + 0x38),&local_190,uVar6,uVar5);
    local_208 = (double)local_14c;
    dStack_210 = (double)local_150;
    local_218 = (double)local_154;
    local_1c8 = local_218 * 9.999999747378752e-06 + local_190;
    dStack_1c0 = dStack_210 * 9.999999747378752e-06 + dStack_188;
    local_1b8 = local_208 * 9.999999747378752e-06 + local_180;
    local_1b0 = 0.0;
    dStack_1a8 = 0.0;
    local_1a0 = 0.0;
    local_198 = 1.0;
    local_138 = (double)DAT_14c8463c8;
    local_148 = DAT_14c8463b8;
    dStack_140 = (double)DAT_14c8463c0;
    local_190 = local_1c8;
    dStack_188 = dStack_1c0;
    local_180 = local_1b8;
    FUN_146bfb7f2(&local_1b0,&local_148);
    iVar9 = rand();
    dVar17 = local_1b0 * (local_1b0 + local_1b0);
    dVar13 = (local_1b0 + local_1b0) * local_198;
    dVar16 = local_198 * (dStack_1a8 + dStack_1a8);
    dVar3 = local_1b0 * (local_1a0 + local_1a0);
    dVar14 = (dStack_1a8 + dStack_1a8) * dStack_1a8;
    dVar4 = (local_1a0 + local_1a0) * dStack_1a8;
    dVar2 = (double)((float)(iVar9 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
            6.283185307179586 * 0.5;
    dVar12 = sin(dVar2);
    local_130 = cos(dVar2);
    local_148 = (dVar3 + dVar16) * dVar12;
    dStack_140 = (dVar4 - dVar13) * dVar12;
    local_138 = (1.0 - (dVar14 + dVar17)) * dVar12;
    FUN_1482ff674(&local_1c8,&local_148);
    local_138 = 0.0;
    local_128 = (longlong *)0x0;
    local_f8 = 0;
    local_148 = *(double *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x58);
    dVar2 = DAT_14c8464e0;
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    if ((longlong)iVar9 == 0) {
      dVar13 = 0.0;
      dVar12 = 0.0;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x50);
      lVar11 = 0;
      dVar12 = 0.0;
      dVar13 = 0.0;
      do {
        local_1d8 = *(undefined8 *)(lVar7 + 0x10 + lVar11);
        puVar1 = (undefined8 *)(lVar7 + lVar11);
        local_1e8 = *puVar1;
        uStack_1e0 = puVar1[1];
        FUN_146bed047(&local_230,&local_1b0,&local_1e8);
        local_208 = local_180;
        local_218 = local_190;
        dStack_210 = dStack_188;
        local_1f0 = local_220;
        local_200 = local_230;
        dStack_1f8 = dStack_228;
        dVar14 = local_220 * local_220 + local_230 * local_230 + dStack_228 * dStack_228;
        if (9.99999993922529e-09 < dVar14) {
          local_1f0 = 1.0 / SQRT(dVar14);
          local_200 = local_230 * local_1f0;
          dStack_1f8 = dStack_228 * local_1f0;
          local_1f0 = local_220 * local_1f0;
        }
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                          (*(longlong **)(param_1 + 0x38),&local_218,&local_148);
        dVar16 = (double)local_14c * local_1f0 +
                 (double)local_154 * local_200 + (double)local_150 * dStack_1f8;
        dVar14 = 1.0;
        if (dVar16 < *(double *)(param_1 + 0x48)) {
          dVar16 = dVar16 / *(double *)(param_1 + 0x48);
          dVar17 = 1.0;
          if (dVar16 <= 1.0) {
            dVar17 = dVar16;
          }
          dVar17 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar17);
          dVar14 = 0.0;
          if (0.0 <= dVar17) {
            dVar14 = dVar17;
          }
          dVar14 = (1.0 - dVar14) * 0.0 + dVar14;
          dVar14 = dVar14 * dVar14;
        }
        if (cVar8 == '\0') {
          dVar2 = dVar2 + local_200;
          dVar3 = dVar3 + dStack_1f8;
          dVar4 = dVar4 + local_1f0;
        }
        else {
          dVar12 = dVar12 + dVar14;
        }
        dVar13 = dVar13 + dVar14;
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar11);
    }
    dVar14 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
    if (dVar14 <= 0.0) {
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar4 = param_4[2];
    }
    else {
      dVar14 = 1.0 / dVar14;
      dVar4 = dVar4 * dVar14;
      dVar3 = dVar3 * dVar14;
      dVar2 = dVar2 * dVar14;
    }
    *param_2 = (float)(double)(-(ulonglong)(0.0001 < dVar13) & (ulonglong)(dVar12 / dVar13));
    param_2[1] = (float)dVar2;
    param_2[2] = (float)dVar3;
    param_2[3] = (float)dVar4;
    if (local_138 != 0.0) {
      plVar10 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar10 = local_118;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    dVar4 = *param_4;
    *param_2 = 0.0;
    param_2[1] = (float)dVar4;
    param_2[2] = (float)dVar3;
    param_2[3] = (float)dVar2;
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1483b53ae FUN_1483b53ae body=1588 status=ok
// SIG undefined FUN_1483b53ae(void)

float * FUN_1483b53ae(longlong param_1,float *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_248 [32];
  float *local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float local_144;
  float local_140;
  float local_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  longlong *local_118;
  longlong local_108 [4];
  undefined1 local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar3 = *(undefined8 *)(param_3 + 0xe0);
  uVar2 = *(undefined4 *)(param_3 + 0xe8);
  local_228 = &local_144;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
            (*(longlong **)(param_1 + 0x38),uVar3,uVar2,(undefined8 *)(param_3 + 0xf0));
  fVar18 = local_13c * local_13c + local_144 * local_144 + local_140 * local_140;
  if (1e-08 < fVar18) {
    fVar18 = 1.0 / SQRT(fVar18);
    local_144 = local_144 * fVar18;
    local_140 = local_140 * fVar18;
    local_13c = local_13c * fVar18;
    local_158 = *(undefined8 *)(param_3 + 0x100);
    local_228 = (float *)&local_168;
    local_168 = *(undefined8 *)(param_3 + 0xf0);
    uStack_160 = *(undefined8 *)(param_3 + 0xf8);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))
              (*(longlong **)(param_1 + 0x38),&local_180,uVar3,uVar2);
    local_1f8 = (double)local_13c;
    dStack_200 = (double)local_140;
    local_208 = (double)local_144;
    local_1b8 = local_208 * 9.999999747378752e-06 + local_180;
    dStack_1b0 = dStack_200 * 9.999999747378752e-06 + dStack_178;
    local_1a8 = local_1f8 * 9.999999747378752e-06 + local_170;
    local_1a0 = 0.0;
    dStack_198 = 0.0;
    local_190 = 0.0;
    local_188 = 1.0;
    local_128 = (double)DAT_14c8463c8;
    local_138 = DAT_14c8463b8;
    dStack_130 = (double)DAT_14c8463c0;
    local_180 = local_1b8;
    dStack_178 = dStack_1b0;
    local_170 = local_1a8;
    FUN_146bfb7f2(&local_1a0,&local_138);
    iVar9 = rand();
    dVar20 = local_1a0 * (local_1a0 + local_1a0);
    dVar15 = (local_1a0 + local_1a0) * local_188;
    dVar19 = local_188 * (dStack_198 + dStack_198);
    dVar6 = local_1a0 * (local_190 + local_190);
    dVar17 = (dStack_198 + dStack_198) * dStack_198;
    dVar7 = (local_190 + local_190) * dStack_198;
    dVar5 = (double)((float)(iVar9 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
            6.283185307179586 * 0.5;
    dVar13 = sin(dVar5);
    local_120 = cos(dVar5);
    local_138 = (dVar6 + dVar19) * dVar13;
    dStack_130 = (dVar7 - dVar15) * dVar13;
    local_128 = (1.0 - (dVar17 + dVar20)) * dVar13;
    FUN_1482ff674(&local_1b8,&local_138);
    dVar7 = DAT_14c8464f0;
    dVar6 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    local_128 = 0.0;
    local_118 = (longlong *)0x0;
    local_e8 = 0;
    local_138 = *(double *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar9 == 0) {
      dVar15 = 0.0;
      bVar12 = true;
      dVar13 = 0.0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x50);
      lVar11 = 0;
      dVar13 = 0.0;
      dVar15 = 0.0;
      do {
        local_1c8 = *(undefined8 *)(lVar4 + 0x10 + lVar11);
        puVar1 = (undefined8 *)(lVar4 + lVar11);
        local_1d8 = *puVar1;
        uStack_1d0 = puVar1[1];
        FUN_146bed047(&local_220,&local_1a0,&local_1d8);
        local_1f8 = local_170;
        local_208 = local_180;
        dStack_200 = dStack_178;
        local_1e0 = local_210;
        local_1f0 = local_220;
        dStack_1e8 = dStack_218;
        dVar17 = local_210 * local_210 + local_220 * local_220 + dStack_218 * dStack_218;
        if (9.99999993922529e-09 < dVar17) {
          local_1e0 = 1.0 / SQRT(dVar17);
          local_1f0 = local_220 * local_1e0;
          dStack_1e8 = dStack_218 * local_1e0;
          local_1e0 = local_210 * local_1e0;
        }
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                          (*(longlong **)(param_1 + 0x38),&local_208,&local_138);
        dVar19 = (double)local_13c * local_1e0 +
                 (double)local_144 * local_1f0 + (double)local_140 * dStack_1e8;
        dVar17 = 1.0;
        if (dVar19 < *(double *)(param_1 + 0x48)) {
          dVar19 = dVar19 / *(double *)(param_1 + 0x48);
          dVar20 = 1.0;
          if (dVar19 <= 1.0) {
            dVar20 = dVar19;
          }
          dVar20 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar20);
          dVar17 = 0.0;
          if (0.0 <= dVar20) {
            dVar17 = dVar20;
          }
          dVar17 = (1.0 - dVar17) * 0.0 + dVar17;
          dVar17 = dVar17 * dVar17;
        }
        if (cVar8 != '\0') {
          dVar13 = dVar13 + dVar17;
        }
        dVar15 = dVar15 + dVar17;
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar11);
      bVar12 = local_128 == 0.0;
    }
    *param_2 = (float)(double)(-(ulonglong)(0.0001 < dVar15) & (ulonglong)(dVar13 / dVar15));
    param_2[1] = (float)dVar5;
    param_2[2] = (float)dVar6;
    param_2[3] = (float)dVar7;
    if (!bVar12) {
      plVar10 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar10 = local_108;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    fVar18 = (float)DAT_14cb46810;
    fVar14 = (float)DAT_14cb46808;
    fVar16 = (float)DAT_14cb46800;
    *param_2 = 0.0;
    param_2[1] = fVar16;
    param_2[2] = fVar14;
    param_2[3] = fVar18;
  }
  if ((local_d0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b59e4 FUN_1483b59e4 body=1648 status=ok
// SIG undefined FUN_1483b59e4(void)

undefined4 * FUN_1483b59e4(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_258 [32];
  double *local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  float local_124;
  float local_120;
  float local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  longlong *local_f8;
  longlong local_e8 [4];
  undefined1 local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = param_3[0x3a];
  local_238 = (double *)&local_124;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
            (*(longlong **)(param_1 + 0x38),uVar3,uVar2,param_3 + 0x3c);
  fVar17 = local_11c * local_11c + local_124 * local_124 + local_120 * local_120;
  if (1e-08 < fVar17) {
    fVar17 = 1.0 / SQRT(fVar17);
    local_124 = local_124 * fVar17;
    local_120 = local_120 * fVar17;
    local_11c = local_11c * fVar17;
    local_238 = &local_158;
    FUN_146c3bf9c(*(undefined8 *)(param_1 + 0x40),*param_3,param_3 + 0x26,&local_140);
    local_168 = *(undefined8 *)(param_3 + 0x40);
    local_238 = (double *)&local_178;
    local_178 = *(undefined8 *)(param_3 + 0x3c);
    uStack_170 = *(undefined8 *)(param_3 + 0x3e);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))
              (*(longlong **)(param_1 + 0x38),&local_190,uVar3,uVar2);
    local_208 = (double)local_11c;
    dStack_210 = (double)local_120;
    local_218 = (double)local_124;
    local_1c8 = local_218 * 9.999999747378752e-06 + local_190;
    dStack_1c0 = dStack_210 * 9.999999747378752e-06 + dStack_188;
    local_1b8 = local_208 * 9.999999747378752e-06 + local_180;
    local_1b0 = 0.0;
    dStack_1a8 = 0.0;
    local_1a0 = 0.0;
    local_198 = 1.0;
    local_108 = (double)DAT_14c8463c8;
    local_118 = DAT_14c8463b8;
    dStack_110 = (double)DAT_14c8463c0;
    local_190 = local_1c8;
    dStack_188 = dStack_1c0;
    local_180 = local_1b8;
    FUN_146bfb7f2(&local_1b0,&local_118);
    iVar9 = rand();
    dVar19 = local_1b0 * (local_1b0 + local_1b0);
    dVar14 = (local_1b0 + local_1b0) * local_198;
    dVar18 = local_198 * (dStack_1a8 + dStack_1a8);
    dVar6 = local_1b0 * (local_1a0 + local_1a0);
    dVar16 = (dStack_1a8 + dStack_1a8) * dStack_1a8;
    dVar7 = (local_1a0 + local_1a0) * dStack_1a8;
    dVar5 = (double)((float)(iVar9 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
            6.283185307179586 * 0.5;
    dVar12 = sin(dVar5);
    local_100 = cos(dVar5);
    local_118 = (dVar6 + dVar18) * dVar12;
    dStack_110 = (dVar7 - dVar14) * dVar12;
    local_108 = (1.0 - (dVar16 + dVar19)) * dVar12;
    FUN_1482ff674(&local_1c8,&local_118);
    local_108 = 0.0;
    local_f8 = (longlong *)0x0;
    local_c8 = 0;
    local_118 = *(double *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x58);
    dVar5 = DAT_14c8464e0;
    dVar6 = DAT_14c8464e8;
    dVar7 = DAT_14c8464f0;
    if ((longlong)iVar9 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      lVar11 = 0;
      do {
        local_1d8 = *(undefined8 *)(lVar4 + 0x10 + lVar11);
        puVar1 = (undefined8 *)(lVar4 + lVar11);
        local_1e8 = *puVar1;
        uStack_1e0 = puVar1[1];
        FUN_146bed047(&local_230,&local_1b0,&local_1e8);
        local_208 = local_180;
        local_218 = local_190;
        dStack_210 = dStack_188;
        local_1f0 = local_220;
        local_200 = local_230;
        dStack_1f8 = dStack_228;
        dVar12 = local_220 * local_220 + local_230 * local_230 + dStack_228 * dStack_228;
        if (9.99999993922529e-09 < dVar12) {
          local_1f0 = 1.0 / SQRT(dVar12);
          local_200 = local_230 * local_1f0;
          dStack_1f8 = dStack_228 * local_1f0;
          local_1f0 = local_220 * local_1f0;
        }
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                          (*(longlong **)(param_1 + 0x38),&local_218,&local_118);
        if (cVar8 == '\0') {
          dVar5 = dVar5 + local_130 * local_1f0 + local_140 * local_200 + local_138 * dStack_1f8;
          dVar6 = dVar6 + local_148 * local_1f0 + local_158 * local_200 + local_150 * dStack_1f8;
          dVar7 = dVar7 + local_1f0 * *(double *)(param_3 + 0x36) +
                          local_200 * *(double *)(param_3 + 0x32) +
                          dStack_1f8 * *(double *)(param_3 + 0x34);
        }
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar11);
    }
    dVar12 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
    dVar14 = DAT_14cb46810;
    dVar16 = DAT_14cb46808;
    dVar18 = DAT_14cb46800;
    if (0.0 < dVar12) {
      dVar12 = 1.0 / dVar12;
      dVar14 = dVar7 * dVar12;
      dVar16 = dVar6 * dVar12;
      dVar18 = dVar5 * dVar12;
    }
    *param_2 = 0;
    param_2[1] = (float)dVar18;
    param_2[2] = (float)dVar16;
    param_2[3] = (float)dVar14;
    if (local_108 != 0.0) {
      plVar10 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar10 = local_e8;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    fVar17 = (float)DAT_14cb46810;
    fVar13 = (float)DAT_14cb46808;
    fVar15 = (float)DAT_14cb46800;
    *param_2 = 0;
    param_2[1] = fVar15;
    param_2[2] = fVar13;
    param_2[3] = fVar17;
  }
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1483b6056 FUN_1483b6056 body=1450 status=ok
// SIG undefined FUN_1483b6056(void)

undefined4 * FUN_1483b6056(longlong param_1,undefined4 *param_2,longlong param_3,double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_228 [32];
  float *local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  float local_124;
  float local_120;
  float local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  longlong *local_f8;
  longlong local_e8 [4];
  undefined1 local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar6 = *(undefined8 *)(param_3 + 0xe0);
  uVar5 = *(undefined4 *)(param_3 + 0xe8);
  local_208 = &local_124;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
            (*(longlong **)(param_1 + 0x38),uVar6,uVar5,(undefined8 *)(param_3 + 0xf0));
  fVar15 = local_11c * local_11c + local_124 * local_124 + local_120 * local_120;
  if (1e-08 < fVar15) {
    fVar15 = 1.0 / SQRT(fVar15);
    local_124 = local_124 * fVar15;
    local_120 = local_120 * fVar15;
    local_11c = local_11c * fVar15;
    local_138 = *(undefined8 *)(param_3 + 0x100);
    local_208 = (float *)&local_148;
    local_148 = *(undefined8 *)(param_3 + 0xf0);
    uStack_140 = *(undefined8 *)(param_3 + 0xf8);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))
              (*(longlong **)(param_1 + 0x38),&local_160,uVar6,uVar5);
    local_1d8 = (double)local_11c;
    dStack_1e0 = (double)local_120;
    local_1e8 = (double)local_124;
    local_198 = local_1e8 * 9.999999747378752e-06 + local_160;
    dStack_190 = dStack_1e0 * 9.999999747378752e-06 + dStack_158;
    local_188 = local_1d8 * 9.999999747378752e-06 + local_150;
    local_180 = 0.0;
    dStack_178 = 0.0;
    local_170 = 0.0;
    local_168 = 1.0;
    local_108 = (double)DAT_14c8463c8;
    local_118 = DAT_14c8463b8;
    dStack_110 = (double)DAT_14c8463c0;
    local_160 = local_198;
    dStack_158 = dStack_190;
    local_150 = local_188;
    FUN_146bfb7f2(&local_180,&local_118);
    iVar9 = rand();
    dVar17 = local_180 * (local_180 + local_180);
    dVar13 = (local_180 + local_180) * local_168;
    dVar16 = local_168 * (dStack_178 + dStack_178);
    dVar3 = local_180 * (local_170 + local_170);
    dVar14 = (dStack_178 + dStack_178) * dStack_178;
    dVar4 = (local_170 + local_170) * dStack_178;
    dVar2 = (double)((float)(iVar9 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
            6.283185307179586 * 0.5;
    dVar12 = sin(dVar2);
    local_100 = cos(dVar2);
    local_118 = (dVar3 + dVar16) * dVar12;
    dStack_110 = (dVar4 - dVar13) * dVar12;
    local_108 = (1.0 - (dVar14 + dVar17)) * dVar12;
    FUN_1482ff674(&local_198,&local_118);
    local_108 = 0.0;
    local_f8 = (longlong *)0x0;
    local_c8 = 0;
    local_118 = *(double *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x58);
    dVar2 = DAT_14c8464e0;
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    if ((longlong)iVar9 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
      lVar11 = 0;
      do {
        local_1a8 = *(undefined8 *)(lVar7 + 0x10 + lVar11);
        puVar1 = (undefined8 *)(lVar7 + lVar11);
        local_1b8 = *puVar1;
        uStack_1b0 = puVar1[1];
        FUN_146bed047(&local_200,&local_180,&local_1b8);
        local_1d8 = local_150;
        local_1e8 = local_160;
        dStack_1e0 = dStack_158;
        local_1c0 = local_1f0;
        local_1d0 = local_200;
        dStack_1c8 = dStack_1f8;
        dVar12 = local_1f0 * local_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8;
        if (9.99999993922529e-09 < dVar12) {
          local_1c0 = 1.0 / SQRT(dVar12);
          local_1d0 = local_200 * local_1c0;
          dStack_1c8 = dStack_1f8 * local_1c0;
          local_1c0 = local_1f0 * local_1c0;
        }
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))
                          (*(longlong **)(param_1 + 0x38),&local_1e8,&local_118);
        if (cVar8 == '\0') {
          dVar2 = dVar2 + local_1d0;
          dVar3 = dVar3 + dStack_1c8;
          dVar4 = dVar4 + local_1c0;
        }
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar11);
    }
    dVar12 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
    if (dVar12 <= 0.0) {
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar4 = param_4[2];
    }
    else {
      dVar12 = 1.0 / dVar12;
      dVar4 = dVar4 * dVar12;
      dVar3 = dVar3 * dVar12;
      dVar2 = dVar2 * dVar12;
    }
    *param_2 = 0;
    param_2[1] = (float)dVar2;
    param_2[2] = (float)dVar3;
    param_2[3] = (float)dVar4;
    if (local_108 != 0.0) {
      plVar10 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar10 = local_e8;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  else {
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    dVar4 = *param_4;
    *param_2 = 0;
    param_2[1] = (float)dVar4;
    param_2[2] = (float)dVar3;
    param_2[3] = (float)dVar2;
  }
  if ((local_b0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483b6602 FUN_1483b6602 body=256 status=ok
// SIG undefined FUN_1483b6602(void)

void FUN_1483b6602(longlong param_1,int param_2,double *param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                   (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  uVar10 = param_2 * 3 + 1;
  uVar10 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar10 >> 9) * 8) +
                    (ulonglong)(uVar10 & 0x1ff) * 4);
  uVar7 = param_2 * 3 + 2;
  uVar7 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) +
                   (ulonglong)(uVar7 & 0x1ff) * 4);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  uVar8 = 0;
  bVar6 = true;
  do {
    bVar9 = bVar6;
    lVar5 = *(longlong *)(param_1 + 0x48);
    *(double *)(param_4 + uVar8 * 8) =
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                           (uVar8 | uVar7 * 2 & 0x1fe) * 4) * dVar3 +
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                           (uVar8 | uVar10 * 2 & 0x1fe) * 4) * dVar2 +
         (double)*(float *)(*(longlong *)(lVar5 + (ulonglong)((uVar4 & 0x7fffffff) >> 8) * 8) +
                           (uVar8 | uVar4 * 2 & 0x1fe) * 4) * dVar1;
    uVar8 = 1;
    bVar6 = false;
  } while (bVar9);
  return;
}



// FUNCTION 1483b6702 FUN_1483b6702 body=481 status=ok
// SIG undefined FUN_1483b6702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1483b6702(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46a60) {
    FUN_144b3d300(&DAT_14cb46a60);
    if (DAT_14cb46a60 == -1) {
      _DAT_14cb46910 = 0x3f80000000000000;
      _DAT_14cb46918 = 0x3f8000003efefeff;
      _DAT_14cb46920 = 0x3f20a0a13f5dddde;
      uRam000000014cb46928 = 0x3f8000003f5dddde;
      _DAT_14cb46930 = 0x3f66e6e73f70f0f1;
      uRam000000014cb46938 = 0x3f8000003f0c8c8d;
      _DAT_14cb46940 = 0x3f7bfbfc3f189899;
      uRam000000014cb46948 = 0x3f8000003f189899;
      _DAT_14cb46950 = 0x3f44c4c53f30b0b1;
      uRam000000014cb46958 = 0x3f8000003f5ededf;
      _DAT_14cb46960 = 0x3f8000003efefeff;
      uRam000000014cb46968 = 0x3f8000003f54d4d5;
      _DAT_14cb46970 = 0x3f0080813f7afafb;
      uRam000000014cb46978 = 0x3f8000003ee4e4e5;
      _DAT_14cb46980 = 0x3f25a5a63f5adadb;
      uRam000000014cb46988 = 0x3f8000003e008081;
      _DAT_14cb46990 = 0x3f32b2b33e008081;
      uRam000000014cb46998 = 0x3f8000003f2aaaab;
      _DAT_14cb469a0 = 0x3eb8b8b93f4dcdce;
      uRam000000014cb469a8 = 0x3f8000003eb8b8b9;
      _DAT_14cb469b0 = 0x3f1696973f69e9ea;
      uRam000000014cb469b8 = 0x3f8000003ef4f4f5;
      _DAT_14cb469c0 = 0x3efefeff3f800000;
      uRam000000014cb469c8 = 0x3f8000003ea0a0a1;
      _DAT_14cb469d0 = 0x3f38b8b93f5ededf;
      uRam000000014cb469d8 = 0x3f8000003f078788;
      _DAT_14cb469e0 = 0x3f8000003f2dadae;
      uRam000000014cb469e8 = 0x3f8000003e3cbcbd;
      _DAT_14cb469f0 = 0x3f66e6e73f66e6e7;
      uRam000000014cb469f8 = 0x3f8000003f7afafb;
      _DAT_14cb46a00 = 0x3f4dcdce3ecccccd;
      uRam000000014cb46a08 = 0x3f8000003f2aaaab;
      _DAT_14cb46a10 = 0x3f3fbfc03f58d8d9;
      uRam000000014cb46a18 = 0x3f8000003f58d8d9;
      _DAT_14cb46a20 = 0x3f5ededf3f75f5f6;
      uRam000000014cb46a28 = 0x3f8000003f33b3b4;
      _DAT_14cb46a30 = 0x3f4ececf3f078788;
      uRam000000014cb46a38 = 0x3f8000003f7afafb;
      _DAT_14cb46a40 = 0x3f36b6b73f800000;
      uRam000000014cb46a48 = 0x3f8000003f41c1c2;
      _DAT_14cb46a50 = 0;
      uRam000000014cb46a54 = 0x3f7afafb;
      uRam000000014cb46a58 = 0x3f1a9a9b;
      uRam000000014cb46a5c = 0x3f800000;
      _Init_thread_footer(&DAT_14cb46a60);
    }
  }
  if (param_2 < 1) {
    uVar2 = 0x3f800000;
    uVar3 = 0x3f800000;
    uVar4 = 0x3f800000;
  }
  else {
    uVar1 = (param_2 - 1U) % 0x15 << 4;
    uVar4 = *(undefined4 *)(&DAT_14cb46910 + uVar1);
    uVar3 = *(undefined4 *)(&DAT_14cb46914 + uVar1);
    uVar2 = *(undefined4 *)(&DAT_14cb46918 + uVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  return param_1;
}



// FUNCTION 1483b68e4 FUN_1483b68e4 body=1777 status=ok
// SIG undefined FUN_1483b68e4(void)

float * FUN_1483b68e4(longlong param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_148 [32];
  float *local_128;
  double *local_120;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = *(ulonglong *)(param_3 + 0xe0);
  param_2[2] = *(float *)(param_1 + 0xa8);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0xa0);
  if (6 < *(int *)(param_1 + 8) - 1U) goto LAB_1483b6ab0;
  pfVar1 = (float *)(param_3 + 0xf0);
  uVar8 = *(undefined4 *)(param_3 + 0xe8);
  switch(*(int *)(param_1 + 8)) {
  case 1:
    local_128 = pfVar1;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
              (*(longlong **)(param_1 + 0x10),&local_b8,uVar3,uVar8);
    dVar16 = *(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70);
    dVar16 = ((double)CONCAT44(fStack_b4,local_b8) - *(double *)(param_1 + 0x70)) /
             (double)(-(ulonglong)(0.0 <= dVar16) & (ulonglong)dVar16);
    dVar12 = *(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78);
    dVar11 = ((double)CONCAT44(uStack_ac,fStack_b0) - *(double *)(param_1 + 0x78)) /
             (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
    dVar12 = *(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x80);
    dVar12 = (local_a8 - *(double *)(param_1 + 0x80)) /
             (double)(-(ulonglong)(0.0 <= dVar12) & (ulonglong)dVar12);
    break;
  case 2:
    local_128 = &local_c4;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe8))
                      (*(longlong **)(param_1 + 0x10),uVar3,uVar8,pfVar1);
    if (cVar5 == '\0') goto LAB_1483b6ab0;
    fVar14 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0);
    fVar15 = 1.0 / fVar14;
    if (0.0 < fVar14) {
      local_c4 = local_c4 * fVar15;
      fVar10 = local_c0 * fVar15;
    }
    else {
      local_c4 = 0.0;
      fVar10 = 0.0;
    }
    fVar15 = (float)(-(uint)(0.0 < fVar14) & (uint)(local_bc * fVar15));
    local_c0 = fVar10;
    local_bc = fVar15;
    fVar14 = local_c4;
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar9 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar6 >> 0x10 ^ uVar6))
                               * 4);
      if (iVar7 != -1) {
        do {
          lVar9 = *(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 0x20;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 0x20) == uVar3) {
            if (((undefined8 *)(lVar9 + 8) != (undefined8 *)0x0 && lVar9 != 0) &&
               (piVar4 = *(int **)(lVar9 + 8), piVar4 != (int *)0x0)) {
              local_10c = *(int *)(lVar9 + 0x14);
              uVar2 = *(undefined4 *)(lVar9 + 0x10);
              local_120 = &local_e0;
              local_128 = &local_b8;
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0x100))
                        (*(longlong **)(param_1 + 0x10),uVar3,*(undefined4 *)(param_3 + 0xe8),pfVar1
                        );
              local_120 = (double *)&local_e8;
              local_128 = (float *)CONCAT44(local_128._4_4_,uVar2);
              (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                        (*(longlong **)(param_1 + 0x10),uVar3,uVar8,pfVar1);
              local_108 = 0;
              uStack_100 = 0x3f80000000000000;
              local_a0 = 0.0;
              if (0.0 <= local_e8) {
                local_a0 = 1.0;
                if ((double)local_e8 <= 1.0) {
                  local_a0 = (double)local_e8;
                }
              }
              local_98 = 0.0;
              if ((0.0 <= local_e4) && (local_98 = 1.0, (double)local_e4 <= 1.0)) {
                local_98 = (double)local_e4;
              }
              local_98 = (double)piVar4[1] * local_98;
              local_a0 = local_a0 * (double)*piVar4;
              FUN_1483b7358(piVar4,&local_f8,&local_a0,&local_108);
              fVar13 = (local_f0 + local_f0) - DAT_14c846358;
              fVar10 = (local_f4 + local_f4) - DAT_14c846350._4_4_;
              fVar14 = (local_f8 + local_f8) - (float)DAT_14c846350;
              fVar15 = fVar13;
              if (local_10c == 0) {
                fVar17 = (float)local_e0 * fVar10;
                fVar15 = local_bc * fVar13 + (float)local_d0 * fVar10 + (float)local_a8 * fVar14;
                fVar10 = local_c0 * fVar13 +
                         (float)local_d8 * fVar10 +
                         (float)(double)CONCAT44(uStack_ac,fStack_b0) * fVar14;
                fVar14 = fVar13 * local_c4 +
                         fVar17 + (float)(double)CONCAT44(fStack_b4,local_b8) * fVar14;
              }
              fVar13 = SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar10 * fVar10);
              fVar17 = 1.0 / fVar13;
              if (0.0 < fVar13) {
                fVar14 = fVar14 * fVar17;
                fVar10 = fVar10 * fVar17;
              }
              else {
                fVar14 = 0.0;
                fVar10 = 0.0;
              }
              fVar15 = (float)(-(uint)(0.0 < fVar13) & (uint)(fVar15 * fVar17));
            }
            break;
          }
          iVar7 = *(int *)(lVar9 + 0x18);
        } while (iVar7 != -1);
      }
    }
    dVar16 = (double)fVar10 + DAT_14c846518;
    dVar12 = ((double)fVar15 + DAT_14c846520) * 0.5;
    *param_2 = (float)(((double)fVar14 + DAT_14c846510) * 0.5);
    param_2[1] = (float)(dVar16 * 0.5);
    goto LAB_1483b6aab;
  case 3:
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
              (*(longlong **)(param_1 + 0x10),&local_b8,uVar3,uVar8);
    dVar12 = (local_a8 + DAT_14c846520) * 0.5;
    dVar11 = ((double)CONCAT44(uStack_ac,fStack_b0) + DAT_14c846518) * 0.5;
    dVar16 = ((double)CONCAT44(fStack_b4,local_b8) + DAT_14c846510) * 0.5;
    break;
  case 4:
    local_120 = (double *)&local_b8;
    local_128 = (float *)((ulonglong)local_128 & 0xffffffff00000000);
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))
                      (*(longlong **)(param_1 + 0x10),uVar3,uVar8,pfVar1);
    if (cVar5 != '\0') {
      fVar14 = 1.0;
      if (local_b8 <= 1.0) {
        fVar14 = local_b8;
      }
      fVar15 = 1.0;
      if (fStack_b4 <= 1.0) {
        fVar15 = fStack_b4;
      }
      *param_2 = (float)(~-(uint)(local_b8 < 0.0) & (uint)fVar14);
      param_2[1] = (float)(~-(uint)(fStack_b4 < 0.0) & (uint)fVar15);
      param_2[2] = 0.0;
    }
    goto LAB_1483b6ab0;
  case 5:
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                      (*(longlong **)(param_1 + 0x10),uVar3,uVar8);
    goto LAB_1483b6fa7;
  case 6:
    local_128 = &local_b8;
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    fStack_b0 = 0.0;
    uStack_ac = 0x3f800000;
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf8))
                      (*(longlong **)(param_1 + 0x10),uVar3,uVar8,pfVar1);
    if (cVar5 != '\0') {
      *(ulonglong *)param_2 = CONCAT44(fStack_b4,local_b8);
      param_2[2] = fStack_b0;
    }
    goto LAB_1483b6ab0;
  case 7:
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
                      (*(longlong **)(param_1 + 0x10),uVar3,uVar8);
LAB_1483b6fa7:
    FUN_1483b6702(param_2,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_148);
  }
  *param_2 = (float)dVar16;
  param_2[1] = (float)dVar11;
LAB_1483b6aab:
  param_2[2] = (float)dVar12;
LAB_1483b6ab0:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


