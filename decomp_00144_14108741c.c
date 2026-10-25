// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14108741c FUN_14108741c body=1285 status=ok
// SIG undefined FUN_14108741c(void)

void FUN_14108741c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c75f1c4 < *(int *)(param_1 + 0x10)) {
    plVar14 = (longlong *)(param_1 + 8);
    local_b8 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
    FUN_141087ae2(&local_68,plVar14,param_2);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_141087922(&local_78,*(undefined4 *)(param_1 + 0x10));
    iVar2 = *(int *)(param_1 + 0x10);
    iVar6 = (int)uStack_80;
    uVar7 = iVar2 - (int)uStack_80;
    if ((int)uStack_80 < iVar2) {
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar2);
      if ((uint)(uStack_80._4_4_ - iVar6) < uVar7) {
        FUN_14475e4ac(&local_88);
      }
    }
    else {
      if (iVar2 < 0) goto LAB_1410878cd;
      if (iVar2 < (int)uStack_80) {
        uStack_80 = CONCAT44(uStack_80._4_4_,iVar2);
        FUN_1401fef06(&local_88);
      }
    }
    iVar2 = *(int *)(param_1 + 0x10);
    iVar6 = (int)uStack_90;
    uVar7 = iVar2 - (int)uStack_90;
    if ((int)uStack_90 < iVar2) {
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
      if ((uint)(uStack_90._4_4_ - iVar6) < uVar7) {
        FUN_14475e4ac(&local_98);
      }
    }
    else {
      if (iVar2 < 0) goto LAB_1410878cd;
      if (iVar2 < (int)uStack_90) {
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
        FUN_1401fef06(&local_98);
      }
    }
    iVar2 = *(int *)(param_1 + 0x10);
    iVar6 = (int)uStack_a0;
    uVar7 = iVar2 - (int)uStack_a0;
    if ((int)uStack_a0 < iVar2) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar2);
      if ((uint)(uStack_a0._4_4_ - iVar6) < uVar7) {
        FUN_1446f48e2(&local_a8);
      }
    }
    else {
      if (iVar2 < 0) {
LAB_1410878cd:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
      if (iVar2 < (int)uStack_a0) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar2);
        FUN_14479f406(&local_a8);
      }
    }
    if (local_60 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_60 + 1);
    }
    plVar1 = (longlong *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) <= local_60) {
      FUN_14481578e(plVar1);
    }
    local_b0 = plVar14;
    if (local_60 == 0) {
      uVar12 = 0;
    }
    else {
      plVar9 = local_68 + (longlong)local_60 * 2;
      lVar13 = 0;
      plVar14 = local_68;
      do {
        iVar2 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar13;
        lVar5 = plVar14[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar3 = *plVar14;
          lVar13 = (longlong)(int)lVar13;
          lVar8 = lVar13 * 0xc;
          lVar10 = 0;
          do {
            lVar11 = (longlong)*(int *)(lVar3 + lVar10);
            lVar4 = *(longlong *)(param_1 + 8);
            *(undefined4 *)(local_78 + 8 + lVar8) = *(undefined4 *)(lVar4 + 8 + lVar11 * 0xc);
            *(undefined8 *)(local_78 + lVar8) = *(undefined8 *)(lVar4 + lVar11 * 0xc);
            *(undefined4 *)(local_88 + lVar13 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4);
            *(undefined4 *)(local_98 + lVar13 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar11 * 4);
            *(int *)(local_a8 + lVar11 * 4) = (int)lVar13;
            lVar13 = lVar13 + 1;
            lVar8 = lVar8 + 0xc;
            lVar10 = lVar10 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar10);
        }
        uVar12 = (undefined4)lVar13;
        plVar14 = plVar14 + 2;
      } while (plVar14 != plVar9);
    }
    iVar2 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar12;
    if (local_b0 != &local_78) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0x20) != &local_88) {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x20) = local_88;
      local_88 = 0;
      *(int *)(param_1 + 0x28) = (int)uStack_80;
      *(int *)(param_1 + 0x2c) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    if ((longlong *)(param_1 + 0x30) != &local_98) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x30) = local_98;
      local_98 = 0;
      *(int *)(param_1 + 0x38) = (int)uStack_90;
      *(int *)(param_1 + 0x3c) = uStack_90._4_4_;
      uStack_90 = 0;
    }
    if (*(int *)(param_1 + 0x50) == (int)uStack_a0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140393c76(&local_58,*(int *)(param_1 + 0x50),1);
      if (0 < (int)uStack_a0) {
        lVar13 = 0;
        do {
          *(undefined1 *)(local_58 + *(int *)(local_a8 + lVar13 * 4)) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x48) + lVar13);
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_a0);
      }
      if ((longlong *)(param_1 + 0x48) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x48) = local_58;
        *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x54) = uStack_50._4_4_;
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_68,local_60);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141087922 FUN_141087922 body=77 status=ok
// SIG undefined FUN_141087922(void)

void FUN_141087922(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141087970();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8b5fc();
      return;
    }
  }
  return;
}



// FUNCTION 141087970 FUN_141087970 body=370 status=ok
// SIG undefined FUN_141087970(void)

void FUN_141087970(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410879f9;
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
LAB_1410879f9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 141087ae2 FUN_141087ae2 body=2967 status=ok
// SIG undefined FUN_141087ae2(void)

longlong *
FUN_141087ae2(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int *piVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong *plVar25;
  int *piVar26;
  undefined1 auStack_178 [40];
  uint local_150;
  uint local_14c;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  int *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  int *local_108;
  int *local_100;
  longlong local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_1 = 0;
  param_1[1] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_140 = param_1;
  local_128 = param_3;
  FUN_140bfc3e2(&local_c8,param_5 - param_4);
  FUN_14108867a(&local_d8,(int)param_2[1]);
  local_138 = (longlong)param_4;
  lVar19 = local_138 * -0x68 + local_c8;
  if (0 < (int)param_2[1]) {
    lVar20 = 8;
    lVar17 = 0;
    lVar24 = 0;
    do {
      lVar11 = *param_2;
      *(undefined4 *)(local_d8 + lVar17) = *(undefined4 *)(lVar11 + -8 + lVar20);
      *(undefined4 *)(local_d8 + 4 + lVar17) = *(undefined4 *)(lVar11 + -4 + lVar20);
      *(undefined4 *)(local_d8 + 0xc + lVar17) = *(undefined4 *)(lVar11 + lVar20);
      lVar10 = (longlong)*(int *)(lVar11 + -8 + lVar20) * 0x68;
      lVar14 = lVar19 + lVar10;
      iVar2 = *(int *)(lVar19 + 0x28 + lVar10);
      *(uint *)(lVar19 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(lVar19 + 0x2c + lVar10) < iVar2 + 1U) {
        local_148 = CONCAT44(local_148._4_4_,param_4);
        FUN_1400cc390(lVar14,iVar2);
        param_4 = (int)local_148;
      }
      lVar10 = *(longlong *)(lVar14 + 0x20);
      if (*(longlong *)(lVar14 + 0x20) == 0) {
        lVar10 = lVar14;
      }
      uVar23 = (undefined4)lVar24;
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar23;
      lVar10 = (longlong)*(int *)(lVar11 + -4 + lVar20) * 0x68;
      lVar14 = lVar19 + lVar10;
      iVar2 = *(int *)(lVar19 + 0x28 + lVar10);
      *(uint *)(lVar19 + 0x28 + lVar10) = iVar2 + 1U;
      if (*(uint *)(lVar19 + 0x2c + lVar10) < iVar2 + 1U) {
        local_148 = CONCAT44(local_148._4_4_,param_4);
        FUN_1400cc390(lVar14,iVar2);
        param_4 = (int)local_148;
      }
      lVar10 = *(longlong *)(lVar14 + 0x20);
      if (*(longlong *)(lVar14 + 0x20) == 0) {
        lVar10 = lVar14;
      }
      *(undefined4 *)(lVar10 + (longlong)iVar2 * 4) = uVar23;
      lVar11 = (longlong)*(int *)(lVar11 + lVar20) * 0x68;
      lVar14 = lVar19 + lVar11;
      iVar2 = *(int *)(lVar19 + 0x28 + lVar11);
      *(uint *)(lVar19 + 0x28 + lVar11) = iVar2 + 1U;
      if (*(uint *)(lVar19 + 0x2c + lVar11) < iVar2 + 1U) {
        FUN_1400cc390(lVar14,iVar2);
      }
      lVar11 = *(longlong *)(lVar14 + 0x20);
      if (*(longlong *)(lVar14 + 0x20) == 0) {
        lVar11 = lVar14;
      }
      *(undefined4 *)(lVar11 + (longlong)iVar2 * 4) = uVar23;
      lVar24 = lVar24 + 1;
      lVar17 = lVar17 + 0x10;
      lVar20 = lVar20 + 0xc;
    } while (lVar24 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  plVar25 = local_140;
  if (param_4 < param_5) {
    local_118 = 0xffffffff;
    lVar17 = local_138;
    do {
      fVar1 = *(float *)(*(longlong *)(local_128 + 0x90) + lVar17 * 4);
      uVar9 = (uint)lVar17;
      lVar20 = local_138;
      lVar24 = local_110;
      if ((int)uStack_b0 != local_84) {
        puVar13 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar13 = local_80;
        }
        for (iVar2 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & uVar9) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == uVar9) goto LAB_141087d4f;
        }
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
        }
        *local_e8 = uVar9;
        lVar14 = lVar19;
        lVar11 = lVar17;
        lVar20 = local_138;
        lVar24 = local_110;
        uVar7 = uStack_e0;
        while (local_138 = lVar11, local_110 = lVar14, bVar6 = (int)uStack_e0 != 0,
              uStack_e0 = uVar7, bVar6) {
          iVar2 = (int)uStack_e0 + -1;
          local_ec = local_e8[iVar2];
          lVar20 = (longlong)(int)local_ec;
          uStack_e0._4_4_ = (uint)(uVar7 >> 0x20);
          if (SBORROW4(0,(int)uStack_e0)) {
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
            if (uStack_e0._4_4_ != 0x7fffffff) {
              FUN_1446f48e2(&local_e8);
            }
            memset(local_e8 + -0x80000000,0,0xfffffffffffffffc);
          }
          else {
            if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar2);
            }
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar2);
          }
          piVar22 = (int *)(lVar20 * 0x68 + lVar19);
          FUN_1447cbafe(&local_b8,local_f0,&local_ec,0);
          piVar26 = *(int **)(piVar22 + 8);
          if (*(int **)(piVar22 + 8) == (int *)0x0) {
            piVar26 = piVar22;
          }
          if ((longlong)piVar22[10] != 0) {
            piVar12 = piVar26 + piVar22[10];
            do {
              iVar2 = *piVar26;
              lVar20 = (longlong)iVar2 * 0x10;
              if (*(int *)(local_d8 + 8 + lVar20) < 0) {
                puVar18 = (uint *)(local_d8 + lVar20);
                uVar9 = *puVar18;
                uVar3 = puVar18[1];
                uVar4 = puVar18[3];
                local_14c = 0xffffffff;
                if (uVar9 == local_ec) {
                  local_14c = uVar3;
                }
                uVar21 = 0xffffffff;
                if (uVar9 == local_ec) {
                  uVar21 = uVar4;
                }
                if (uVar3 == local_ec) {
                  local_14c = uVar9;
                  uVar21 = uVar4;
                }
                if (uVar4 == local_ec) {
                  uVar21 = uVar3;
                  local_14c = uVar9;
                }
                local_108 = piVar22 + 0xe;
                piVar16 = *(int **)(piVar22 + 0x16);
                piVar15 = piVar16;
                if (piVar16 == (int *)0x0) {
                  piVar15 = local_108;
                }
                iVar5 = piVar22[0x18];
                local_148 = (longlong)iVar5;
                if (local_148 != 0) {
                  uVar9 = piVar22[0xc];
                  do {
                    lVar17 = 0;
                    while (*(uint *)((longlong)piVar15 + lVar17) != uVar9) {
                      lVar17 = lVar17 + 4;
                      if (local_148 * 4 - lVar17 == 0) goto LAB_141087ef0;
                    }
                    uVar9 = uVar9 + 1;
                    piVar22[0xc] = uVar9;
                  } while( true );
                }
                uVar9 = piVar22[0xc];
LAB_141087ef0:
                local_f8 = (longlong)(int)local_14c;
                if ((local_14c != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_128 + 0x90) + local_f8 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar20 = local_f8 * 0x68 + lVar19;
                  lVar17 = *(longlong *)(lVar20 + 0x58);
                  if (*(longlong *)(lVar20 + 0x58) == 0) {
                    lVar17 = lVar20 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar20 + 0x60) != 0) {
                      lVar24 = 0;
                      do {
                        if (*(uint *)(lVar17 + lVar24) == uVar9) goto LAB_141087f78;
                        lVar24 = lVar24 + 4;
                      } while ((longlong)*(int *)(lVar20 + 0x60) << 2 != lVar24);
                    }
                    if (iVar5 == 0) break;
                    lVar24 = 0;
                    while (*(uint *)((longlong)piVar15 + lVar24) != uVar9) {
                      lVar24 = lVar24 + 4;
                      if (local_148 * 4 - lVar24 == 0) goto LAB_141087f82;
                    }
LAB_141087f78:
                    uVar9 = uVar9 + 1;
                  }
                }
LAB_141087f82:
                lVar20 = (longlong)(int)uVar21;
                if ((uVar21 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_128 + 0x90) + lVar20 * 4), fVar1 != 0.0
                    || (NAN(fVar1))))) {
                  lVar17 = lVar20 * 0x68 + lVar19;
                  plVar25 = local_140;
                  local_120 = lVar20;
                  if (local_14c == 0xffffffff) {
                    lVar24 = lVar17 + 0x38;
                    if (*(longlong *)(lVar17 + 0x58) != 0) {
                      lVar24 = *(longlong *)(lVar17 + 0x58);
                    }
                    while( true ) {
                      if (*(int *)(lVar17 + 0x60) != 0) {
                        lVar14 = 0;
                        do {
                          if (*(uint *)(lVar24 + lVar14) == uVar9) goto LAB_14108862e;
                          lVar14 = lVar14 + 4;
                        } while ((longlong)*(int *)(lVar17 + 0x60) << 2 != lVar14);
                      }
                      if (iVar5 == 0) break;
                      lVar14 = 0;
                      while (*(uint *)((longlong)piVar15 + lVar14) != uVar9) {
                        lVar14 = lVar14 + 4;
                        if (local_148 * 4 - lVar14 == 0) goto LAB_141088088;
                      }
LAB_14108862e:
                      uVar9 = uVar9 + 1;
                    }
                  }
                  else {
                    lVar24 = lVar17 + 0x38;
                    if (*(longlong *)(lVar17 + 0x58) != 0) {
                      lVar24 = *(longlong *)(lVar17 + 0x58);
                    }
                    lVar14 = lVar19 + local_f8 * 0x68;
                    while( true ) {
                      if (*(int *)(lVar17 + 0x60) != 0) {
                        lVar19 = 0;
                        do {
                          if (*(uint *)(lVar24 + lVar19) == uVar9) goto LAB_141088065;
                          lVar19 = lVar19 + 4;
                        } while ((longlong)*(int *)(lVar17 + 0x60) << 2 != lVar19);
                      }
                      lVar19 = *(longlong *)(lVar14 + 0x58);
                      if (*(longlong *)(lVar14 + 0x58) == 0) {
                        lVar19 = lVar14 + 0x38;
                      }
                      if ((longlong)*(int *)(lVar14 + 0x60) != 0) {
                        lVar11 = 0;
                        do {
                          if (*(uint *)(lVar19 + lVar11) == uVar9) goto LAB_141088065;
                          lVar11 = lVar11 + 4;
                        } while ((longlong)*(int *)(lVar14 + 0x60) * 4 != lVar11);
                      }
                      lVar19 = local_110;
                      if (iVar5 == 0) break;
                      lVar11 = 0;
                      while (*(uint *)((longlong)piVar15 + lVar11) != uVar9) {
                        lVar11 = lVar11 + 4;
                        if (local_148 * 4 - lVar11 == 0) goto LAB_141088088;
                      }
LAB_141088065:
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
LAB_141088088:
                iVar8 = (int)local_118;
                local_118 = local_118 & 0xffffffff;
                if (iVar8 <= (int)uVar9) {
                  local_118 = (ulonglong)uVar9;
                }
                piVar22[0x18] = iVar5 + 1U;
                local_150 = uVar21;
                local_130 = piVar12;
                local_100 = piVar16;
                if ((uint)piVar22[0x19] < iVar5 + 1U) {
                  FUN_1400cc390(local_108);
                  piVar16 = *(int **)(piVar22 + 0x16);
                }
                piVar12 = local_108;
                if (piVar16 != (int *)0x0) {
                  piVar12 = piVar16;
                }
                piVar12[local_148] = uVar9;
                puVar18[2] = uVar9;
                if (uVar9 == piVar22[0xc]) {
                  piVar22[0xc] = uVar9 + 1;
                }
                if ((int)plVar25[1] <= (int)local_118) {
                  FUN_140bfc200(plVar25,(int)local_118 + 1,CONCAT71((int7)(int3)(uVar21 >> 8),1));
                }
                lVar17 = *plVar25;
                lVar24 = (longlong)(int)puVar18[2] * 0x10;
                iVar5 = *(int *)(lVar17 + 8 + lVar24);
                *(uint *)(lVar17 + 8 + lVar24) = iVar5 + 1U;
                if (*(uint *)(lVar17 + 0xc + lVar24) < iVar5 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar17 + lVar24),iVar5);
                  plVar25 = local_140;
                }
                *(int *)(*(longlong *)(lVar17 + lVar24) + (longlong)iVar5 * 4) = iVar2;
                if ((local_14c != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_128 + 0x90) + local_f8 * 4),
                    fVar1 != 0.0 || (NAN(fVar1))))) {
                  lVar17 = lVar19 + local_f8 * 0x68;
                  iVar2 = *(int *)(lVar17 + 0x60);
                  *(uint *)(lVar17 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar17 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar17 + 0x38,iVar2);
                  }
                  uVar7 = uStack_e0;
                  lVar24 = *(longlong *)(lVar17 + 0x58);
                  if (*(longlong *)(lVar17 + 0x58) == 0) {
                    lVar24 = lVar17 + 0x38;
                  }
                  *(uint *)(lVar24 + (longlong)iVar2 * 4) = puVar18[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar13 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar13 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & local_14c) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == local_14c)
                      goto LAB_1410881fc;
                    }
                  }
                  lVar17 = (longlong)(int)uStack_e0;
                  uVar9 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                  if (uStack_e0._4_4_ < uVar9) {
                    FUN_1446f48e2(&local_e8,uVar7 & 0xffffffff);
                  }
                  local_e8[lVar17] = local_14c;
                }
LAB_1410881fc:
                piVar12 = local_130;
                lVar17 = local_138;
                if ((local_150 != 0xffffffff) &&
                   ((fVar1 = *(float *)(*(longlong *)(local_128 + 0x90) + lVar20 * 4), fVar1 != 0.0
                    || (NAN(fVar1))))) {
                  lVar17 = lVar19 + lVar20 * 0x68;
                  iVar2 = *(int *)(lVar17 + 0x60);
                  *(uint *)(lVar17 + 0x60) = iVar2 + 1U;
                  if (*(uint *)(lVar17 + 100) < iVar2 + 1U) {
                    FUN_1400cc390(lVar17 + 0x38,iVar2);
                  }
                  uVar7 = uStack_e0;
                  lVar20 = *(longlong *)(lVar17 + 0x58);
                  if (*(longlong *)(lVar17 + 0x58) == 0) {
                    lVar20 = lVar17 + 0x38;
                  }
                  *(uint *)(lVar20 + (longlong)iVar2 * 4) = puVar18[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar13 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar13 = local_80;
                    }
                    for (iVar2 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & local_150) * 4);
                        iVar2 != -1; iVar2 = *(int *)(local_b8 + (longlong)iVar2 * 0xc + 4)) {
                      piVar12 = local_130;
                      lVar17 = local_138;
                      if (*(uint *)(local_b8 + (longlong)iVar2 * 0xc) == local_150)
                      goto LAB_141087e37;
                    }
                  }
                  lVar17 = (longlong)(int)uStack_e0;
                  uVar9 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
                  if (uStack_e0._4_4_ < uVar9) {
                    FUN_1446f48e2(&local_e8,uVar7 & 0xffffffff);
                  }
                  local_e8[lVar17] = local_150;
                  piVar12 = local_130;
                  lVar17 = local_138;
                }
              }
LAB_141087e37:
              piVar26 = piVar26 + 1;
            } while (piVar26 != piVar12);
          }
          lVar14 = local_110;
          lVar11 = local_138;
          lVar20 = local_138;
          lVar24 = local_110;
          uVar7 = uStack_e0;
        }
      }
LAB_141087d4f:
      local_110 = lVar24;
      local_138 = lVar20;
      lVar17 = lVar17 + 1;
    } while ((int)lVar17 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
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
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar25;
}



// FUNCTION 14108867a FUN_14108867a body=128 status=ok
// SIG undefined FUN_14108867a(void)

void FUN_14108867a(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1410886fc(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + *param_1),
             (int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff),(ulonglong)uVar2 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146d9f048(param_1);
  return;
}



// FUNCTION 1410886fc FUN_1410886fc body=269 status=ok
// SIG undefined FUN_1410886fc(void)

void FUN_1410886fc(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14108880a FUN_14108880a body=505 status=ok
// SIG undefined FUN_14108880a(void)

void FUN_14108880a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  uStack_40 = (undefined4)local_28;
  uStack_3c = local_28._4_4_;
  uVar4 = FUN_141088a04();
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088a04 FUN_141088a04 body=114 status=ok
// SIG undefined FUN_141088a04(void)

undefined4 FUN_141088a04(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141088a78(param_1,&local_28);
  uVar3 = *(undefined4 *)(local_28 + 0xe4);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088a78 FUN_141088a78 body=144 status=ok
// SIG undefined FUN_141088a78(void)

undefined8 * FUN_141088a78(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088b0c FUN_141088b0c body=716 status=ok
// SIG undefined FUN_141088b0c(void)

void FUN_141088b0c(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  uStack_31 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else {
      if (pcVar1 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        uStack_38 = (undefined7)uVar2;
        uStack_31 = (undefined1)((ulonglong)uVar2 >> 0x38);
        goto LAB_141088bd2;
      }
      (*pcVar1)(uVar2,param_2,&uStack_38);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
LAB_141088bd2:
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_39);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_39);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
      local_39 = (undefined1)uVar2;
      uStack_38 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar1)(uVar2,param_2,&local_39);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT17(uStack_31,uStack_38);
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_141088dda(param_1,&local_58,puVar4);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088dda FUN_141088dda body=127 status=ok
// SIG undefined FUN_141088dda(void)

void FUN_141088dda(longlong param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar2);
  local_28 = param_2[2];
  if (*(longlong *)(param_1 + 0x28) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_140d137fe(*(longlong *)(param_1 + 0x28),&local_38);
    bVar1 = bVar1 ^ 1;
  }
  *param_3 = bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088e5a FUN_141088e5a body=151 status=ok
// SIG undefined FUN_141088e5a(void)

ulonglong FUN_141088e5a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_141088ed5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141088ed5;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      (**(code **)(param_1 + 0x28))(lVar4);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 141088ef2 FUN_141088ef2 body=72 status=ok
// SIG undefined FUN_141088ef2(void)

void FUN_141088ef2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_14106bb46(param_1,local_10,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141088f3c FUN_141088f3c body=40 status=ok
// SIG undefined FUN_141088f3c(void)

undefined8 FUN_141088f3c(undefined8 param_1,int param_2)

{
  FUN_141088f64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141088f64 FUN_141088f64 body=600 status=ok
// SIG undefined FUN_141088f64(void)

void FUN_141088f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b686a00;
  param_1[0x72] = &PTR_FUN_14b687070;
  param_1[0x73] = &PTR_FUN_14b687090;
  param_1[0x74] = &PTR_FUN_14b6870c0;
  param_1[0x75] = &PTR_FUN_14b6870d0;
  param_1[0x76] = &PTR_FUN_14b687140;
  param_1[0x77] = &PTR_FUN_14b687170;
  param_1[0x78] = &PTR_FUN_14b6871a0;
  param_1[0x7f] = &PTR_FUN_14b687250;
  param_1[0x80] = &PTR_FUN_14b6872c0;
  param_1[0x81] = &PTR_FUN_14b687330;
  param_1[0x82] = &PTR_FUN_14b687360;
  param_1[0x83] = &PTR_FUN_14b6873a0;
  param_1[0x84] = &PTR_FUN_14b687440;
  param_1[0x85] = &PTR_FUN_14b687460;
  param_1[0x89] = &PTR_FUN_14b687480;
  param_1[0x8a] = &PTR_FUN_14b687540;
  param_1[0x8b] = &PTR_FUN_14b6875c0;
  param_1[0x8c] = &PTR_FUN_14b687610;
  param_1[0x8d] = &PTR_FUN_14b687650;
  param_1[0x8e] = &PTR_FUN_14b687670;
  param_1[0x8f] = &PTR_FUN_14b687690;
  param_1[0x90] = &PTR_FUN_14b6876b0;
  param_1[0x91] = &PTR_FUN_14b6876d0;
  param_1[0x92] = &PTR_FUN_14b6876f0;
  param_1[0x93] = &PTR_FUN_14b687710;
  param_1[0x94] = &PTR_FUN_14b687730;
  param_1[0x95] = &PTR_FUN_14b687750;
  param_1[0x96] = &PTR_FUN_14b687770;
  param_1[0x34b] = &PTR_FUN_14b687790;
  param_1[0x352] = &PTR_FUN_14b6877a0;
  param_1[0x353] = &PTR_FUN_14b6877e0;
  param_1[0x354] = &PTR_FUN_14b687820;
  param_1[0x355] = &PTR_FUN_14b687870;
  param_1[0x356] = &PTR_FUN_14b6878a0;
  param_1[0x359] = &PTR_FUN_14b6878e0;
  param_1[0x35a] = &PTR_FUN_14b6878f0;
  param_1[0x35b] = &PTR_FUN_14b687920;
  param_1[0x35c] = &PTR_FUN_14b6879c0;
  FUN_1410891bc(param_1[0x4c0],*(undefined4 *)(param_1 + 0x4c1));
  if (param_1[0x4c0] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1410891bc FUN_1410891bc body=40 status=ok
// SIG undefined FUN_1410891bc(void)

void FUN_1410891bc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a2da94(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1410891e4 FUN_1410891e4 body=30 status=ok
// SIG undefined FUN_1410891e4(void)

void FUN_1410891e4(longlong param_1)

{
  FUN_140af926c(param_1 + 0x30);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141089202 FUN_141089202 body=360 status=ok
// SIG undefined FUN_141089202(void)

undefined8 * FUN_141089202(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + -0x80);
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      local_30 = 0;
      local_28 = 0x100000000;
      FUN_1410893f0(lVar1,&local_38,0);
      FUN_14108936c(param_2,&local_38);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108936c FUN_14108936c body=131 status=ok
// SIG undefined FUN_14108936c(void)

void FUN_14108936c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1407bea76(param_1,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(param_2 + 8) == 0) {
      lVar4 = param_2;
    }
    lVar3 = *param_1;
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)((longlong)iVar2 * 8 + lVar3 + lVar5 * 8) =
             *(undefined8 *)(lVar4 + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while (uVar1 != (uint)lVar5);
    }
    return;
  }
  return;
}



// FUNCTION 1410893f0 FUN_1410893f0 body=139 status=ok
// SIG undefined FUN_1410893f0(void)

void FUN_1410893f0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (*(int *)(param_2 + 0x14) < 0) {
    FUN_14899978c(param_2,0);
  }
  local_28 = FUN_140db3394();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_14108947c(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108947c FUN_14108947c body=1610 status=ok
// SIG undefined FUN_14108947c(void)

void FUN_14108947c(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  bool local_79;
  uint *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar14 = *param_2;
  if (lVar14 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1410898ea:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
    }
LAB_1410894eb:
    lVar10 = *param_2;
    local_79 = lVar10 != 0;
    if (lVar14 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
      }
      local_58 = lVar10;
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
      FUN_148999860(param_1,&local_58,param_4);
      goto LAB_141089a01;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1410898ea;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar14 = *param_2;
      goto LAB_1410894eb;
    }
    lVar10 = *param_2;
    local_79 = lVar10 != 0;
  }
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & local_79) == 1) {
      FUN_1456cec3c(lVar10);
    }
    puVar15 = (uint *)(param_1 + 0x250);
    iVar2 = *(int *)(param_1 + 0x268);
    if (iVar2 == 0) {
      uVar17 = 1;
      uVar12 = 0;
      iVar4 = 0;
      iVar11 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar15;
      }
      uVar16 = *puVar5;
      if (uVar16 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar17 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar17 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar17 == uVar12) goto LAB_141089a01;
          iVar11 = iVar11 + 0x20;
          uVar16 = puVar5[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar12 = 0;
        iVar11 = 0;
      }
      uVar17 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
        if (lVar14 != 0) {
          if ((DAT_14c950c29 & local_79) == 1) {
            local_78 = puVar15;
            local_70 = param_4;
            FUN_1456cec3c(lVar10);
            puVar15 = local_78;
            param_4 = local_70;
LAB_1410895d9:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_78 = puVar15;
              local_70 = param_4;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              puVar15 = local_78;
              param_4 = local_70;
              if (DAT_14cad00c8 == 0) goto LAB_1410897c4;
            }
            if (*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1410897c4;
            lVar13 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar13 = lVar10;
            }
          }
          else {
            if (lVar10 != 0) goto LAB_1410895d9;
LAB_1410897c4:
            lVar13 = 0;
          }
          if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
            lVar13 = (longlong)*(int *)(param_4 + 0x10);
            uVar9 = *(int *)(param_4 + 0x10) + 1;
            *(uint *)(param_4 + 0x10) = uVar9;
            if (*(uint *)(param_4 + 0x14) < uVar9) {
              local_78 = puVar15;
              local_70 = param_4;
              local_68 = lVar13;
              FUN_148999f0c(param_4,lVar13);
              lVar13 = local_68;
              puVar15 = local_78;
              param_4 = local_70;
            }
            lVar6 = *(longlong *)(param_4 + 8);
            if (*(longlong *)(param_4 + 8) == 0) {
              lVar6 = param_4;
            }
            *(longlong *)(lVar6 + lVar13 * 8) = lVar14;
          }
        }
        uVar16 = uVar16 & ~(uint)uVar17;
        puVar5 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar5 = puVar15;
        }
        iVar3 = *(int *)(param_1 + 0x268);
        iVar4 = (int)uVar12;
        lVar14 = (longlong)iVar4;
        uVar9 = puVar5[lVar14] & uVar16;
        if (uVar9 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar7) {
            lVar13 = 0;
            do {
              uVar9 = puVar5[lVar14 + lVar13 + 1];
              if (uVar9 != 0) {
                uVar12 = (ulonglong)(iVar4 + (int)lVar13 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1410896a1;
              }
              iVar11 = iVar11 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar8 - lVar14 != lVar13);
            uVar16 = 0xffffffff;
            iVar4 = iVar8;
          }
          uVar12 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_1410896a1:
          uVar17 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
  }
  else {
    local_60 = lVar10;
    if ((local_79 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar10);
    }
    FUN_148999c1a(param_1,&local_60,param_4);
  }
LAB_141089a01:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141089ae6 FUN_141089ae6 body=64 status=ok
// SIG undefined FUN_141089ae6(void)

void FUN_141089ae6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141089b26(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 141089b26 FUN_141089b26 body=117 status=ok
// SIG undefined FUN_141089b26(void)

ulonglong FUN_141089b26(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 141089b9c FUN_141089b9c body=228 status=ok
// SIG undefined FUN_141089b9c(void)

longlong FUN_141089b9c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba1538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_148b9e177;
    local_40 = FUN_1465af321;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakResurrectStation",
                  &DAT_14cba1538,&DAT_148b9e176);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba1538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141089c88 FUN_141089c88 body=228 status=ok
// SIG undefined FUN_141089c88(void)

longlong FUN_141089c88(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6a370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_146553df6;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c10;
    local_38 = &LAB_1487615fb;
    local_40 = &LAB_1460d5ac7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x658;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryModel",&DAT_14cb6a370,&DAT_1487615fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141089d6e FUN_141089d6e body=120 status=ok
// SIG undefined FUN_141089d6e(void)

void FUN_141089d6e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  
  lVar1 = param_1[0x10b];
  cVar3 = (**(code **)(*param_1 + 0x3c0))();
  uVar4 = 1;
  if (cVar3 != '\0') {
    uVar4 = (undefined4)param_1[0x20];
  }
  FUN_141089de6(lVar1,param_2,param_3,uVar4,param_1);
  plVar2 = (longlong *)param_1[0x106];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141089de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x300))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 141089de6 FUN_141089de6 body=3963 status=ok
// SIG undefined FUN_141089de6(void)

void FUN_141089de6(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong *local_a0;
  uint *local_98;
  int local_8c;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)FUN_140b95304(param_1,param_2,param_5,0);
  if (plVar1 != (longlong *)0x0) {
    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,param_4);
    if (DAT_14cae8b20 == 0) {
      local_c0 = &local_50;
      local_50 = (code *)&LAB_14355090c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_147b8e16d;
      local_d0 = (code *)&LAB_140810a38;
      local_d8 = L"Engine";
      local_e0 = 0x800000000;
      local_e8 = 0x10000000;
      local_f0 = 8;
      local_f8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_c0 = &local_50;
      local_50 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1468c5283;
      local_d0 = FUN_142809da0;
      local_d8 = L"Engine";
      local_e0 = 0x400000000;
      local_e8 = 0x10000000;
      local_f0 = 8;
      local_f8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar16 = *(longlong *)(param_2 + 0x20);
    if (lVar16 == 0) {
      lVar13 = 0;
    }
    else {
      iVar10 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < iVar10) ||
           (lVar13 = lVar16,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar10 * 8)
           != lVar2 + 0x30)) {
          lVar13 = 0;
        }
      } while ((lVar13 == 0) && (lVar16 = *(longlong *)(lVar16 + 0x20), lVar16 != 0));
    }
LAB_141089fd7:
    lVar16 = lVar13;
    lVar2 = lVar16;
    if (*(longlong *)(lVar16 + 0x20) != 0) goto code_r0x000141089fe6;
    goto LAB_141089ff7;
  }
  goto LAB_14108a537;
  while (iVar10 = *(int *)(lVar16 + 0x58), iVar10 != -1) {
LAB_14108aa83:
    lVar16 = *plVar20 + (longlong)iVar10 * 0x60;
    if (*(code **)(*plVar20 + (longlong)iVar10 * 0x60) == local_50) {
      if ((lVar16 + 8 != 0 && lVar16 != 0) &&
         (FUN_14021c410(lVar16 + 8,local_70), puVar9 = local_98,
         *(int *)(lVar16 + 0x10) == *(int *)(lVar16 + 0x3c))) {
        FUN_147be0eb0(local_a0,local_50);
        puVar9 = local_98;
      }
      break;
    }
  }
LAB_14108aadc:
  uVar23 = uVar23 & ~(uint)uVar15;
  puVar14 = *(uint **)(lVar2 + 0x50);
  if (*(uint **)(lVar2 + 0x50) == (uint *)0x0) {
    puVar14 = puVar9;
  }
  iVar10 = *(int *)(lVar2 + 0x58);
  iVar22 = (int)uVar24;
  lVar16 = (longlong)iVar22;
  uVar5 = puVar14[lVar16] & uVar23;
  if (uVar5 == 0) {
    iVar6 = iVar10 + 0x1e;
    if (-1 < iVar10 + -1) {
      iVar6 = iVar10 + -1;
    }
    iVar6 = iVar6 >> 5;
    iVar7 = iVar6;
    if (iVar6 < iVar22) {
      iVar7 = iVar22;
    }
    if (iVar6 <= iVar22) goto LAB_14108a523;
    lVar13 = 0;
    while( true ) {
      iVar25 = iVar25 + 0x20;
      uVar5 = puVar14[lVar16 + lVar13 + 1];
      if (uVar5 != 0) break;
      lVar13 = lVar13 + 1;
      if (iVar7 - lVar16 == lVar13) goto LAB_14108a523;
    }
    uVar24 = (ulonglong)(iVar22 + (int)lVar13 + 1);
    uVar23 = 0xffffffff;
  }
  uVar15 = (ulonglong)(-uVar5 & uVar5);
  uVar21 = uVar15 * 2 + 1;
  lVar16 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  iVar22 = (iVar25 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
  if (iVar10 <= iVar22) goto LAB_14108a523;
  goto LAB_14108a80b;
code_r0x000141089fe6:
  lVar13 = *(longlong *)(lVar16 + 0x20);
  if ((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) goto LAB_141089fd7;
  lVar2 = FUN_142840154(lVar16);
LAB_141089ff7:
  if (lVar2 == 0) {
    lVar13 = *(longlong *)(lVar16 + 0x20);
    goto LAB_141089fd7;
  }
  local_50 = *(code **)(lVar2 + 0x18);
  lVar2 = *plVar1;
  local_80 = plVar1;
  if (param_3 == 0) {
    uVar5 = 0;
    uVar23 = 0;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar23 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar23 = *(uint *)(lVar16 + 0x10);
      bVar26 = uVar23 == 0;
      if (bVar26) {
        *(uint *)(lVar16 + 0x10) = uVar11;
        uVar23 = 0;
      }
      UNLOCK();
      if (bVar26) {
        uVar23 = uVar11;
      }
    }
  }
  plVar1 = (longlong *)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100)) {
    lVar16 = lVar2 + 0x68;
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      lVar16 = *(longlong *)(lVar2 + 0x70);
    }
    iVar10 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar2 + 0x78) - 1U & (uVar23 ^ uVar5)) * 4);
    if (iVar10 != -1) {
      lVar16 = *plVar1;
      do {
        lVar13 = (longlong)iVar10 * 0x10;
        if ((*(uint *)(lVar16 + lVar13) == uVar5) && (*(uint *)(lVar16 + 4 + lVar13) == uVar23))
        goto LAB_14108a19b;
        iVar10 = *(int *)(lVar13 + lVar16 + 8);
      } while (iVar10 != -1);
    }
  }
  if (param_3 == 0) {
    local_58._0_4_ = 0;
    iVar10 = 0;
    uVar23 = (uint)local_58;
  }
  else {
    uVar23 = *(uint *)(param_3 + 0xc);
    local_58 = (ulonglong)uVar23;
    if ((int)uVar23 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar10 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar10 = *(int *)(lVar16 + 0x10);
      bVar26 = iVar10 == 0;
      if (bVar26) {
        *(int *)(lVar16 + 0x10) = iVar22;
        iVar10 = 0;
      }
      UNLOCK();
      uVar23 = (uint)local_58;
      if (bVar26) {
        iVar10 = iVar22;
      }
    }
  }
  local_58._0_4_ = uVar23;
  local_58 = CONCAT44(iVar10,(uint)local_58);
  FUN_140f0f33c(plVar1,local_5c,&local_58);
  if (param_3 == 0) {
    local_58._0_4_ = 0;
    uVar23 = 0;
    uVar5 = (uint)local_58;
  }
  else {
    uVar5 = *(uint *)(param_3 + 0xc);
    local_58 = (ulonglong)uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    uVar23 = *(uint *)(lVar16 + 0x10);
    if (*(uint *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar26) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar23 = *(uint *)(lVar16 + 0x10);
      bVar26 = uVar23 == 0;
      if (bVar26) {
        *(uint *)(lVar16 + 0x10) = uVar11;
        uVar23 = 0;
      }
      UNLOCK();
      uVar5 = (uint)local_58;
      if (bVar26) {
        uVar23 = uVar11;
      }
    }
  }
  local_58._0_4_ = uVar5;
  local_58 = CONCAT44(uVar23,(uint)local_58);
  piVar3 = (int *)FUN_14021c682(param_1 + 0x140,uVar23 ^ (uint)local_58);
  *piVar3 = *piVar3 + 1;
  if (DAT_14caf2744 == '\x01') {
    uVar5 = 0;
    local_58 = 0;
    uVar23 = 0;
    if (param_3 != 0) {
      uVar5 = *(uint *)(param_3 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar23 = *(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar23 = *(uint *)(lVar16 + 0x10);
        bVar26 = uVar23 == 0;
        if (bVar26) {
          *(uint *)(lVar16 + 0x10) = uVar11;
          uVar23 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar23 = uVar11;
        }
      }
      local_58 = CONCAT44(uVar23,uVar5);
    }
    uVar5 = uVar23 >> 0xd ^ uVar5 - uVar23;
    uVar11 = uVar5 << 8 ^ (-0x61c88647 - uVar23) - uVar5;
    uVar8 = uVar11 >> 0xd ^ (uVar23 - uVar5) - uVar11;
    uVar23 = uVar8 >> 0xc ^ (uVar5 - uVar11) - uVar8;
    uVar5 = uVar23 << 0x10 ^ (uVar11 - uVar8) - uVar23;
    uVar8 = uVar5 >> 5 ^ (uVar8 - uVar23) - uVar5;
    uVar11 = uVar8 >> 3 ^ (uVar23 - uVar5) - uVar8;
    uVar23 = uVar11 << 10 ^ (uVar5 - uVar8) - uVar11;
    uVar4 = FUN_147be1064(param_1 + 0x1e0,uVar23 >> 0xf ^ uVar8 - (uVar11 + uVar23),&local_58);
    if (*(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100) != (uint)local_a0) {
      uVar23 = (uint)((ulonglong)local_50 >> 0x10);
      uVar5 = (uint)local_50 & 0xffff;
      uVar4 = FUN_147be1880(uVar4,((uint)local_50 << 0x10 | uVar5) +
                                  (int)((ulonglong)local_50 >> 0x20) +
                                  (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar5 >> 4));
      FUN_140ae3264(uVar4,&local_58,local_80);
    }
  }
LAB_14108a19b:
  local_98 = (uint *)(lVar2 + 0x40);
  iVar10 = *(int *)(lVar2 + 0x58);
  local_70 = param_2;
  if (iVar10 == 0) {
    uVar24 = 1;
    uVar15 = 0;
    iVar25 = 0;
    iVar22 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar2 + 0x50);
    if (*(uint **)(lVar2 + 0x50) == (uint *)0x0) {
      puVar9 = local_98;
    }
    uVar23 = *puVar9;
    if (uVar23 == 0) {
      iVar22 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar22 = iVar10 + -1;
      }
      uVar15 = 0;
      uVar24 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar24 = uVar15;
      }
      iVar25 = 0;
      do {
        if (uVar24 == uVar15) goto LAB_14108a4ea;
        iVar25 = iVar25 + 0x20;
        uVar23 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar15 = 0;
      iVar25 = 0;
    }
    uVar24 = (ulonglong)(-uVar23 & uVar23);
    uVar21 = uVar24 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar22 = (iVar25 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar22) {
      iVar22 = iVar10;
    }
  }
  if (iVar22 < iVar10) {
    local_88 = param_1 + 0x1e0;
    uVar23 = 0xffffffff;
    do {
      iVar6 = *(int *)(*plVar1 + 4 + (longlong)iVar22 * 0x10);
      if (((iVar6 == 0) || (uVar5 = *(uint *)(*plVar1 + (longlong)iVar22 * 0x10), (int)uVar5 < 0))
         || (DAT_14c9647dc <= (int)uVar5)) {
        if (DAT_14caf2744 == '\x01') {
LAB_14108a478:
          uVar11 = 0;
          iVar10 = 0;
          goto LAB_14108a43f;
        }
LAB_14108a2f4:
        FUN_14096bd5a(plVar1,iVar22);
        iVar10 = *(int *)(lVar2 + 0x58);
      }
      else {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != iVar6)) ||
           (((*(uint *)(plVar20 + 1) & 0x10200000) != 0 || (lVar16 = *plVar20, lVar16 == 0)))) {
LAB_14108a2e7:
          if (DAT_14caf2744 == '\0') goto LAB_14108a2f4;
          uVar11 = 0;
          if (((DAT_14c9647dc <= (int)uVar5) ||
              (plVar20 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
              plVar20 == (longlong *)0x0)) || ((int)plVar20[2] != iVar6)) goto LAB_14108a478;
          iVar10 = 0;
          if ((*(uint *)(plVar20 + 1) & 0x10200000) == 0) {
            local_58 = 0;
            if (*plVar20 != 0) {
              uVar11 = *(uint *)(*plVar20 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar16 = 0;
              }
              iVar10 = *(int *)(lVar16 + 0x10);
              local_78 = param_1;
              if (*(int *)(lVar16 + 0x10) == 0) {
                LOCK();
                iVar10 = DAT_14c964868 + 1;
                UNLOCK();
                iVar6 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                uVar21 = (ulonglong)uVar11;
                DAT_14c964868 = iVar10;
                if (bVar26) {
                  local_8c = iVar6;
                  local_68 = (ulonglong)uVar11;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar6);
                  uVar21 = local_68;
                  iVar6 = local_8c;
                }
                uVar11 = (uint)uVar21;
                LOCK();
                iVar10 = *(int *)(lVar16 + 0x10);
                bVar26 = iVar10 == 0;
                if (bVar26) {
                  *(int *)(lVar16 + 0x10) = iVar6;
                  iVar10 = 0;
                }
                UNLOCK();
                param_1 = local_78;
                if (bVar26) {
                  iVar10 = iVar6;
                }
              }
              goto LAB_14108a43f;
            }
          }
          else {
LAB_14108a43f:
            local_58 = CONCAT44(iVar10,uVar11);
          }
          FUN_147be0c8e(local_88,&local_58);
          goto LAB_14108a2f4;
        }
        if ((*(uint *)(plVar20 + 1) & 0x10200000) != 0) {
          lVar16 = 0;
        }
        if (*(int *)(lVar16 + 0x134) == 1) goto LAB_14108a2e7;
      }
      uVar23 = uVar23 & ~(uint)uVar24;
      puVar9 = *(uint **)(lVar2 + 0x50);
      if (*(uint **)(lVar2 + 0x50) == (uint *)0x0) {
        puVar9 = local_98;
      }
      iVar22 = (int)uVar15;
      lVar16 = (longlong)iVar22;
      uVar5 = puVar9[lVar16] & uVar23;
      if (uVar5 == 0) {
        iVar6 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar6 = iVar10 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar22) {
          iVar7 = iVar22;
        }
        if (iVar6 <= iVar22) break;
        lVar13 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar5 = puVar9[lVar16 + lVar13 + 1];
          if (uVar5 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar16 == lVar13) goto LAB_14108a4ea;
        }
        uVar15 = (ulonglong)(iVar22 + (int)lVar13 + 1);
        uVar23 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar5 & uVar5);
      uVar21 = uVar24 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar22 = (iVar25 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar22 < iVar10);
  }
LAB_14108a4ea:
  plVar20 = local_80;
  if (*(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100) == (uint)local_a0) {
    FUN_140ae3264(param_1 + 0xa0,&local_58,local_80);
    if (DAT_14caf2744 == '\x01') {
      uVar23 = (uint)((ulonglong)local_50 >> 0x10);
      uVar5 = (uint)local_50 & 0xffff;
      uVar4 = FUN_147be1880(param_1 + 400,
                            ((uint)local_50 << 0x10 | uVar5) + (int)((ulonglong)local_50 >> 0x20) +
                            (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar5 >> 4));
      FUN_140ae3264(uVar4,&local_58,plVar20);
      iVar10 = *(int *)(lVar2 + 0x58);
      if (iVar10 == 0) {
        uVar15 = 1;
        uVar24 = 0;
        iVar25 = 0;
        iVar22 = 0;
      }
      else {
        puVar9 = *(uint **)(lVar2 + 0x50);
        if (*(uint **)(lVar2 + 0x50) == (uint *)0x0) {
          puVar9 = local_98;
        }
        uVar23 = *puVar9;
        if (uVar23 == 0) {
          iVar22 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar22 = iVar10 + -1;
          }
          uVar24 = 0;
          uVar15 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar15 = uVar24;
          }
          iVar25 = 0;
          do {
            if (uVar15 == uVar24) goto LAB_14108a523;
            iVar25 = iVar25 + 0x20;
            uVar23 = puVar9[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar24 = 0;
          iVar25 = 0;
        }
        uVar15 = (ulonglong)(-uVar23 & uVar23);
        uVar21 = uVar15 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar22 = (iVar25 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar22) {
          iVar22 = iVar10;
        }
      }
      if (iVar22 < iVar10) {
        local_80 = (longlong *)(param_1 + 0x218);
        uVar23 = 0xffffffff;
        puVar9 = local_98;
LAB_14108a80b:
        iVar10 = *(int *)(*plVar1 + 4 + (longlong)iVar22 * 0x10);
        uVar5 = 0;
        uVar11 = 0;
        if (iVar10 != 0) {
          uVar8 = *(uint *)(*plVar1 + (longlong)iVar22 * 0x10);
          uVar5 = 0;
          uVar11 = 0;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
            uVar11 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              uVar5 = 0;
              uVar11 = 0;
              plVar20 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (plVar20 != (longlong *)0x0) {
                uVar5 = 0;
                uVar11 = 0;
                if ((int)plVar20[2] == iVar10) {
                  uVar5 = 0;
                  uVar11 = 0;
                  if ((*(uint *)(plVar20 + 1) & 0x10200000) == 0) {
                    uVar5 = 0;
                    uVar11 = 0;
                    if (*plVar20 != 0) {
                      local_a0 = (longlong *)CONCAT44(local_a0._4_4_,uVar23);
                      uVar11 = *(uint *)(*plVar20 + 0xc);
                      if ((int)uVar11 < DAT_14c9647dc) {
                        lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                      }
                      else {
                        lVar16 = 0;
                      }
                      uVar5 = *(uint *)(lVar16 + 0x10);
                      if (*(uint *)(lVar16 + 0x10) == 0) {
                        LOCK();
                        iVar10 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar23 = DAT_14c964868 + 1;
                        bVar26 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar10;
                        if (bVar26) {
                          local_88 = CONCAT44(local_88._4_4_,uVar23);
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar23);
                          puVar9 = local_98;
                          uVar23 = (uint)local_88;
                        }
                        LOCK();
                        uVar5 = *(uint *)(lVar16 + 0x10);
                        bVar26 = uVar5 == 0;
                        if (bVar26) {
                          *(uint *)(lVar16 + 0x10) = uVar23;
                          uVar5 = 0;
                        }
                        UNLOCK();
                        if (bVar26) {
                          uVar5 = uVar23;
                        }
                      }
                      uVar23 = (uint)local_a0;
                    }
                  }
                }
              }
            }
          }
        }
        if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
          uVar12 = uVar5 >> 0xd ^ uVar11 - uVar5;
          uVar8 = uVar12 << 8 ^ (-0x61c88647 - uVar5) - uVar12;
          uVar17 = uVar8 >> 0xd ^ (uVar5 - uVar12) - uVar8;
          uVar19 = uVar17 >> 0xc ^ (uVar12 - uVar8) - uVar17;
          uVar12 = uVar19 << 0x10 ^ (uVar8 - uVar17) - uVar19;
          uVar8 = uVar12 >> 5 ^ (uVar17 - uVar19) - uVar12;
          uVar17 = uVar8 >> 3 ^ (uVar19 - uVar12) - uVar8;
          uVar12 = uVar17 << 10 ^ (uVar12 - uVar8) - uVar17;
          plVar20 = *(longlong **)(param_1 + 0x220);
          if (*(longlong **)(param_1 + 0x220) == (longlong *)0x0) {
            plVar20 = local_80;
          }
          iVar10 = *(int *)((longlong)plVar20 +
                           (ulonglong)
                           (*(int *)(param_1 + 0x228) - 1U &
                           (uVar12 >> 0xf ^ uVar8 - (uVar17 + uVar12))) * 4);
          if (iVar10 != -1) {
            lVar16 = *(longlong *)(param_1 + 0x1e0);
            do {
              lVar18 = (longlong)iVar10 * 0x60;
              lVar13 = lVar16 + lVar18;
              if ((*(uint *)(lVar16 + lVar18) == uVar11) &&
                 (*(uint *)(lVar16 + 4 + lVar18) == uVar5)) {
                plVar20 = (longlong *)(lVar13 + 8);
                if ((plVar20 != (longlong *)0x0 && lVar13 != 0) &&
                   (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 0x3c))) {
                  uVar5 = (uint)((ulonglong)local_50 >> 0x10);
                  uVar11 = (uint)local_50 & 0xffff;
                  lVar16 = lVar13 + 0x40;
                  if (*(longlong *)(lVar13 + 0x48) != 0) {
                    lVar16 = *(longlong *)(lVar13 + 0x48);
                  }
                  iVar10 = *(int *)(lVar16 + (ulonglong)
                                             (*(int *)(lVar13 + 0x50) - 1U &
                                             (int)((ulonglong)local_50 >> 0x20) +
                                             ((uint)local_50 << 0x10 | uVar11) +
                                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
                  local_a0 = plVar20;
                  if (iVar10 != -1) {
                    goto LAB_14108aa83;
                  }
                }
                break;
              }
              iVar10 = *(int *)(lVar13 + 0x58);
            } while (iVar10 != -1);
          }
        }
        goto LAB_14108aadc;
      }
    }
LAB_14108a523:
    FUN_14021c410(param_1 + 0x50,local_70);
  }
LAB_14108a537:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108ad62 FUN_14108ad62 body=109 status=ok
// SIG undefined FUN_14108ad62(void)

undefined8 * FUN_14108ad62(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14ad10170;
  param_1[5] = &PTR_FUN_14ad10430;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 14108add0 FUN_14108add0 body=282 status=ok
// SIG undefined FUN_14108add0(void)

void FUN_14108add0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined1 *)(param_1 + 0x1c6);
  *(undefined1 *)(param_1 + 0x1c6) = 1;
  iVar4 = *(int *)(param_1 + 0x158);
  if (0 < (longlong)iVar4) {
    lVar5 = *(longlong *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    lVar11 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + lVar11) + 0x58))();
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar4 * 8 != lVar11);
    if (lVar5 != 0) {
      FUN_1400020a8(lVar5);
    }
  }
  iVar4 = *(int *)(param_1 + 0x168);
  if (0 < (longlong)iVar4) {
    plVar6 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    plVar10 = plVar6;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 != (longlong *)0x0) {
        iVar9 = (int)plVar7[1];
        do {
          if (iVar9 == 0) goto LAB_14108aea7;
          LOCK();
          iVar8 = (int)plVar7[1];
          bVar12 = iVar9 == iVar8;
          if (bVar12) {
            *(int *)(plVar7 + 1) = iVar9 + 1;
            iVar8 = iVar9;
          }
          iVar9 = iVar8;
          UNLOCK();
        } while (!bVar12);
        if (*plVar10 != 0) {
          FUN_14108b11c();
        }
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
LAB_14108aea7:
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar6 + (longlong)iVar4 * 2);
    FUN_1457ef011(plVar6,iVar4);
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8(plVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x1c6) = uVar3;
  return;
}



// FUNCTION 14108aeea FUN_14108aeea body=560 status=ok
// SIG undefined FUN_14108aeea(void)

void FUN_14108aeea(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_140dcc79c(*(undefined8 *)(param_1 + 0x28));
  if (cVar3 != '\0') {
    lVar6 = FUN_140dcc81c(param_1);
    if (lVar6 != 0) {
      bVar4 = FUN_141042fba(lVar6);
      if (bVar4 - 4 < 2) {
        FUN_140f55e1a(param_1,0);
        FUN_143df1de6(param_1,0);
        iVar1 = *(int *)(param_1 + 0x140);
        lVar6 = param_1;
        if ((longlong)iVar1 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x138);
          lVar8 = 0;
          do {
            FUN_14891bc36(*(undefined8 *)(lVar9 + lVar8));
            lVar8 = lVar8 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar8);
        }
        do {
          lVar9 = lVar6;
          lVar6 = *(longlong *)(lVar9 + 0xb8);
        } while (*(longlong *)(lVar9 + 0xb8) != 0);
        if ((*(longlong *)(lVar9 + 0x98) == 0) && (*(longlong *)(lVar9 + 0xa0) == 0)) {
          bVar4 = 1;
          bVar2 = false;
        }
        else {
          bVar4 = FUN_140f3d9e2(param_1);
          bVar2 = true;
        }
        bVar5 = FUN_140f3da40(param_1);
        uVar7 = 1;
        if ((bVar4 & bVar5) == 0) {
          iVar1 = *(int *)(param_1 + 0x130);
          if ((longlong)iVar1 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x128);
            lVar9 = 0;
            do {
              cVar3 = FUN_140f3dae0(*(undefined8 *)(lVar6 + lVar9));
              if (cVar3 != '\0') {
                uVar7 = 2;
                goto LAB_14108b094;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar9);
          }
          iVar1 = *(int *)(param_1 + 0x120);
          if ((longlong)iVar1 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x118);
            lVar9 = 0;
            do {
              cVar3 = FUN_140f3dae0(*(undefined8 *)(lVar6 + lVar9));
              if (cVar3 != '\0') {
                uVar7 = 3;
                goto LAB_14108b094;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar9);
          }
        }
        else {
LAB_14108b094:
          FUN_143df56c8(param_1,uVar7);
        }
        if (bVar2) {
          local_48 = 0;
          uStack_40 = 0;
          FUN_14189d100(param_1,&local_48);
          lVar6 = local_48;
          lVar9 = (longlong)(int)uStack_40;
          if (lVar9 != 0) {
            lVar8 = 0;
            do {
              FUN_140f55e1a(*(undefined8 *)(lVar6 + lVar8),0);
              lVar8 = lVar8 + 8;
            } while (lVar9 * 8 != lVar8);
          }
          if (local_48 != 0) {
            FUN_1400020a8(local_48);
          }
        }
      }
      else if (((bVar4 == 1) && (cVar3 = FUN_140f71cda(param_1 + 0x70), cVar3 != '\0')) &&
              ((*(longlong *)(param_1 + 0xd0) == 0 ||
               (((lVar6 = FUN_140dcc81c(), lVar6 != 0 &&
                 (bVar4 = FUN_141042fba(lVar6), bVar4 < 0x12)) &&
                ((0x22200U >> (bVar4 & 0x1f) & 1) != 0)))))) {
        FUN_140dcc746(param_1,2);
      }
    }
    FUN_143df1560(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108b11c FUN_14108b11c body=38 status=ok
// SIG undefined FUN_14108b11c(void)

void FUN_14108b11c(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
    do {
      cVar1 = FUN_140d8564a(param_1,0);
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 14108b142 FUN_14108b142 body=246 status=ok
// SIG undefined FUN_14108b142(void)

longlong FUN_14108b142(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_14108b238();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 14108b238 FUN_14108b238 body=228 status=ok
// SIG undefined FUN_14108b238(void)

longlong FUN_14108b238(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb652f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598ebf0;
    local_38 = &LAB_148715fe5;
    local_40 = FUN_141857d0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillParamData",&DAT_14cb652f0,&DAT_148715fe4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb652f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108b31e FUN_14108b31e body=168 status=ok
// SIG undefined FUN_14108b31e(void)

undefined8 * FUN_14108b31e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    if (*(char *)(param_3 + 0x68) == '\0') {
      lVar1 = (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x38))(param_1 + 0xe0,param_3);
      lVar2 = lVar1 + 0x10;
      if (lVar1 == 0) {
        lVar2 = param_3 + 0x30;
      }
    }
    else {
      if ((((*(char *)(param_3 + 0x68) == '\x01') && (*(longlong *)(param_1 + 0x88) != 0)) &&
          (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) &&
         (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(), lVar2 != 0)) {
        FUN_1457ef238(lVar2,param_2,param_3);
        return param_2;
      }
      lVar2 = param_3 + 0x30;
    }
    FUN_14034cca6(param_2,lVar2);
  }
  return param_2;
}



// FUNCTION 14108b3c6 FUN_14108b3c6 body=195 status=ok
// SIG undefined FUN_14108b3c6(void)

undefined8 FUN_14108b3c6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1465612de(&local_38,param_4);
  FUN_146561204(lVar1 + 0x48,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14108b45f;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14108b45f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108b48a FUN_14108b48a body=40 status=ok
// SIG undefined FUN_14108b48a(void)

undefined8 FUN_14108b48a(undefined8 param_1,int param_2)

{
  FUN_14108b4b2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14108b4b2 FUN_14108b4b2 body=106 status=ok
// SIG undefined FUN_14108b4b2(void)

void FUN_14108b4b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b82bdf0;
  param_1[6] = &PTR_FUN_14b82c0b0;
  param_1[7] = &PTR_LAB_14b82c140;
  param_1[9] = &PTR_FUN_14b82c190;
  FUN_140bf96d8(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14108b524 FUN_14108b524 body=766 status=ok
// SIG undefined FUN_14108b524(void)

undefined8 * FUN_14108b524(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar2);
  *param_1 = &PTR_FUN_14b7ab830;
  param_1[5] = &PTR_FUN_14b7ac230;
  param_1[6] = &PTR_LAB_14b7ac270;
  param_1[0x55] = &PTR_FUN_14b7ac2c0;
  param_1[0x56] = &PTR_FUN_14b7ac340;
  param_1[0x57] = &PTR_FUN_14b7ac350;
  param_1[0xc4] = 0;
  local_38 = "Texture";
  local_30 = 7;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xc5] = (ulonglong)uVar1;
  local_38 = "PinTexture";
  local_30 = 10;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xc6] = (ulonglong)uVar1;
  local_38 = "PinOpacity";
  local_30 = 10;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[199] = (ulonglong)uVar1;
  local_38 = "UseBackground";
  local_30 = 0xd;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[200] = (ulonglong)uVar1;
  local_38 = "Background";
  local_30 = 10;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xc9] = (ulonglong)uVar1;
  local_38 = "PulseEnabled";
  local_30 = 0xc;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xca] = (ulonglong)uVar1;
  local_38 = "IsHidden";
  local_30 = 8;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xcb] = (ulonglong)uVar1;
  local_38 = "IsBlip";
  local_30 = 6;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[0xcc] = (ulonglong)uVar1;
  param_1[0xcd] = 0;
  *(undefined1 *)(param_1 + 0xce) = 1;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0x3e4ccccd00000000;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0x40900000;
  *(undefined4 *)(param_1 + 0xd8) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0x40400000;
  param_1[0xd9] = 0x4040000040400000;
  param_1[0xda] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d7) = 0;
  param_1[0xdc] = 0x3fc99999a0000000;
  param_1[0xdd] = 0x3fc99999a0000000;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x77b) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108b824 FUN_14108b824 body=129 status=ok
// SIG undefined FUN_14108b824(void)

undefined8
FUN_14108b824(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14108b8a6(lVar1,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14108b8a6 FUN_14108b8a6 body=401 status=ok
// SIG undefined FUN_14108b8a6(void)

void FUN_14108b8a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14009b010(&local_48,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_48;
    param_3[1] = (longlong)plStack_40;
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
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14009b010(&local_58,1,0);
  if (local_58 != 0) {
    FUN_1406114f4(local_58,*(undefined4 *)(param_1 + 0x4f0));
  }
  local_68 = DAT_14cbcf46c;
  local_60 = DAT_14cbcf474;
  FUN_1448075d0(&local_48);
  if (*param_3 != 0) {
    local_78 = 0;
    FUN_14014191c(*param_3,&local_48,&local_58,0);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108ba40 FUN_14108ba40 body=323 status=ok
// SIG undefined FUN_14108ba40(void)

undefined4 FUN_14108ba40(uint param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca223c8) {
    FUN_144b3d300(&DAT_14ca223c8);
    if (DAT_14ca223c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PathTracing",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14ca223c0 = 0;
      }
      else {
        DAT_14ca223c0 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14ca223c8);
    }
  }
  lVar2 = DAT_14ca223c0;
  if (DAT_14ca223c0 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar8 * 4) != 0;
  }
  cVar3 = FUN_14019108b((ulonglong)param_1);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT31((int3)((uint)~(&DAT_14ca814c8)[((ulonglong)param_1 & 0xffff) * 0xf] >> 8),
                     (~(&DAT_14ca814c8)[((ulonglong)param_1 & 0xffff) * 0xf] & 0x10400000) == 0 &
                     bVar9);
  }
  return uVar4;
}



// FUNCTION 14108bb84 FUN_14108bb84 body=95 status=ok
// SIG undefined FUN_14108bb84(void)

undefined8 * FUN_14108bb84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4dcfa0;
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14108bbe4 FUN_14108bbe4 body=159 status=ok
// SIG undefined FUN_14108bbe4(void)

void FUN_14108bbe4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4e0cc0;
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_14108bc84(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014108bc7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14108bc84 FUN_14108bc84 body=118 status=ok
// SIG undefined FUN_14108bc84(void)

void FUN_14108bc84(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14108bcfa FUN_14108bcfa body=1899 status=ok
// SIG undefined FUN_14108bcfa(void)

void FUN_14108bcfa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1468d96f0;
      local_f0 = 0;
      local_f8 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1409e12a0;
      local_f0 = 0;
      local_f8 = (undefined8 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_28);
    }
  }
  local_58 = local_58 & 0xffffff00;
  uStack_54 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1403a682c;
      local_f0 = 0;
      local_f8 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_58 = (uint)uVar3;
      uStack_54 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_58);
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_141710108;
      local_f0 = 0x1000000000000000;
      local_f8 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_78);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_78;
  uVar3 = FUN_14477b664(uStack_70);
  local_a0 = FUN_14477b664(uVar3);
  local_98 = local_68;
  local_d8 = CONCAT44(uStack_54,local_58);
  local_d0 = uStack_50;
  local_c8 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_c0 = FUN_14477b664(uVar3);
  local_b8 = local_38;
  local_b0 = lStack_30;
  if ((lStack_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lStack_30 + 0x50));
  }
  local_f8 = &local_a8;
  FUN_14108c466(&local_90,local_20,local_28,&local_d8);
  *param_3 = local_90;
  param_3[1] = local_88;
  param_3[2] = local_80;
  if ((lStack_30 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_30 + 0x50));
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108c466 FUN_14108c466 body=308 status=ok
// SIG undefined FUN_14108c466(void)

undefined8 *
FUN_14108c466(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0xffffffffffffffff;
    param_1[2] = 0;
    goto LAB_14108c4c9;
  }
  lVar5 = param_5[1];
  if (lVar5 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar3 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar3,L"WwiseSwitchDef");
    }
    lVar5 = FUN_14477b664(DAT_14cb25788);
    param_5[1] = lVar5;
  }
  lVar4 = param_5[2];
  if (((lVar4 == 0) && (lVar4 = 0, lVar5 != 0)) && (*param_5 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_14108c596:
      lVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_14108c596;
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_5);
    }
    param_5[2] = lVar4;
  }
  FUN_140b32deb(param_1,param_2,param_4,param_3,lVar4);
LAB_14108c4c9:
  if ((*(longlong *)(param_4 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x50));
  }
  return param_1;
}



// FUNCTION 14108c59a FUN_14108c59a body=188 status=ok
// SIG undefined FUN_14108c59a(void)

void FUN_14108c59a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x80);
  if (lVar9 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
    lVar8 = 0;
    do {
      plVar7 = (longlong *)FUN_140a62cae(*(undefined8 *)(lVar4 + lVar8));
      lVar5 = *plVar7;
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 == (longlong *)0x0) {
        if (lVar5 != 0) goto LAB_14108c5e5;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        if (lVar5 != 0) {
LAB_14108c5e5:
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_14108c656(param_2,iVar3);
          }
          lVar6 = *param_2;
          *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar5;
          *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar7;
          if (plVar7 == (longlong *)0x0) goto LAB_14108c61d;
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
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
LAB_14108c61d:
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  return;
}



// FUNCTION 14108c656 FUN_14108c656 body=269 status=ok
// SIG undefined FUN_14108c656(void)

void FUN_14108c656(longlong param_1,int param_2)

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



// FUNCTION 14108c772 FUN_14108c772 body=153 status=ok
// SIG undefined FUN_14108c772(void)

undefined8 * FUN_14108c772(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08b340;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x26);
  FUN_14108c80b(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14108c80b FUN_14108c80b body=77 status=ok
// SIG undefined FUN_14108c80b(void)

void FUN_14108c80b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14108c858 FUN_14108c858 body=58 status=ok
// SIG undefined FUN_14108c858(void)

void FUN_14108c858(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14108c892 FUN_14108c892 body=12 status=ok
// SIG undefined FUN_14108c892(void)

void FUN_14108c892(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014108c89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14108c89e FUN_14108c89e body=31 status=ok
// SIG undefined FUN_14108c89e(void)

undefined8 FUN_14108c89e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14108c8be FUN_14108c8be body=1345 status=ok
// SIG undefined FUN_14108c8be(void)

void FUN_14108c8be(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  longlong local_128;
  undefined8 uStack_120;
  code *local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  code *pcStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8 [6];
  longlong local_a8;
  ulonglong local_a0;
  undefined **local_98;
  undefined *local_90;
  longlong local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  fVar10 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
  lVar7 = param_2[5];
  lVar9 = param_2[10];
  FUN_14095dc64(param_1 + 0x120,param_2);
  local_108 = *(longlong *)(param_1 + 0x250);
  lStack_100 = CONCAT44(lStack_100._4_4_,fVar10);
  local_f8 = lVar7;
  FUN_1447cd2ec(param_1 + 0x138);
  local_128 = 0;
  uStack_120 = 0;
  FUN_14095e510(param_2,&local_128);
  if (0 < (int)uStack_120) {
    lVar8 = *(longlong *)(param_1 + 0x250);
    local_f8 = 0;
    pcStack_f0 = (code *)0x0;
    local_e8 = 0x3002;
    local_e0 = 0;
    local_a8 = 0;
    local_a0 = 0x200000000;
    FUN_1405c5fa2();
    local_90 = &DAT_14cb769e8;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = &PTR_FUN_14b0394b0;
    local_f8 = CONCAT44(local_f8._4_4_,fVar10);
    if (lVar8 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar8);
    }
    local_108 = lVar8;
    if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar7);
    }
    lStack_100 = lVar7;
    if (local_d8 != param_2 + 0xb) {
      plVar5 = param_2 + 0xb;
      if ((longlong *)param_2[0x11] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[0x11];
      }
      FUN_1400709d4(local_d8,plVar5,(int)param_2[0x12],local_a0 >> 0x20);
    }
    if (lVar9 == 0) {
      pcVar4 = (code *)0x0;
    }
    else {
      puVar1 = *(undefined4 **)(lVar9 + 8);
      puVar6 = &DAT_14c9485f0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar6 = puVar1;
      }
      if (DAT_14c947fe0 == 0) {
        lVar7 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar7);
        DAT_14c947fe0 = lVar7;
      }
      FUN_140045924(DAT_14c947fe0,&local_110,puVar6,1);
      pcVar4 = local_110;
    }
    if (pcStack_f0 != pcVar4) {
      local_e0 = 0;
    }
    pcStack_f0 = pcVar4;
    (*(code *)local_98[4])(&local_98,0);
    local_90 = (undefined *)param_2[0x14];
    FUN_1406022fe(&local_88,param_2 + 0x15);
    lVar7 = local_128;
    lVar9 = (longlong)(int)uStack_120;
    if (lVar9 != 0) {
      lVar8 = 0;
      do {
        if ((*(longlong *)(lVar7 + lVar8) != 0) &&
           (plVar5 = *(longlong **)(lVar7 + 8 + lVar8), plVar5 != (longlong *)0x0)) {
          lVar3 = (**(code **)(*plVar5 + 0x10))();
          FUN_14095dc64(lVar3 + 0x38,param_2);
          if (0.0 < fVar10) {
            if (*(longlong *)(lVar7 + lVar8) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = *(longlong **)(lVar7 + 8 + lVar8);
            }
            lVar3 = (**(code **)(*plVar5 + 0x10))();
            FUN_14108ce00(lVar3 + 0xa0,&local_108);
          }
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar9 * 0x10 != lVar8);
    }
    local_98 = (undefined **)&DAT_14a171d50;
    uVar2 = uStack_80 >> 0x20;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      FUN_140115c12(&local_88,0);
    }
    local_90 = (undefined *)0x0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  local_108 = 0;
  lStack_100 = 0;
  FUN_14095df6a(param_2,&local_108);
  lVar7 = local_108;
  lVar9 = (longlong)(int)lStack_100;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar8);
      if (lVar3 != 0) {
        if (DAT_14cb61cd0 == 0) {
          local_140 = &local_110;
          local_110 = FUN_141030f22;
          local_130 = FUN_14081d0ea;
          local_138 = &LAB_1463b31ae;
          local_148 = &LAB_1486dca4f;
          local_150 = &LAB_1464f50a6;
          local_158 = &DAT_149e063b2;
          local_160 = 0;
          local_168 = 0x10000004;
          local_170 = 8;
          local_178 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
          FUN_14095dc64(lVar3 + 0xd40,param_2);
        }
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  if ((longlong)(int)param_2[0x7d] != 0) {
    lVar7 = param_2[0x7c];
    lVar9 = (longlong)(int)param_2[0x7d] * 0x28;
    do {
      FUN_14108d01c(param_1 + 0x270,lVar7);
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  FUN_14095fcf4(param_1,param_2);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108ce00 FUN_14108ce00 body=538 status=ok
// SIG undefined FUN_14108ce00(void)

void FUN_14108ce00(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined1 local_90 [48];
  longlong local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined *local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = 0;
  local_a0 = 0x3002;
  local_98 = 0;
  local_60 = 0;
  local_58 = 0x200000000;
  FUN_1405c5fa2();
  local_48 = &DAT_14cb769e8;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = &PTR_FUN_14b0394b0;
  local_c0 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (local_c0 == 0) {
      local_c0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_c0 = *param_2;
    }
  }
  local_b8 = param_2[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_b8 == 0) {
      local_b8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_b8 = param_2[1];
    }
  }
  local_b0 = param_2[2];
  if ((param_2[3] != 0) || ((int)param_2[4] != 0x3002)) {
    local_98 = 0;
    local_a8 = param_2[3];
    local_a0 = (int)param_2[4];
  }
  ppuVar3 = &PTR_FUN_14b0394b0;
  if (&local_c0 != param_2) {
    plVar2 = param_2 + 6;
    if ((longlong *)param_2[0xc] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[0xc];
    }
    FUN_1400709d4(local_90,plVar2,(int)param_2[0xd],2);
    ppuVar3 = local_50;
  }
  (*(code *)ppuVar3[4])(&local_50,0);
  local_48 = (undefined *)param_2[0xf];
  FUN_1406022fe(&local_40,param_2 + 0x10);
  FUN_1447cd2ec(param_1,&local_c0);
  local_50 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_38 >> 0x20;
  uStack_38 = uStack_38 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_40,0);
  }
  local_48 = (undefined *)0x0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108d01c FUN_14108d01c body=183 status=ok
// SIG undefined FUN_14108d01c(void)

void FUN_14108d01c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = *(uint *)(param_2 + 0x18);
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar1 << 0x10 | uVar1 & 0xffff) + ((uVar1 & 0xffff) >> 4) +
                             ((uVar1 >> 0x10) << 0x13 | uVar1 >> 0x10)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x80;
        if (*(uint *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar3 * 0x80) == uVar1) {
          if (lVar4 == 0) {
            return;
          }
          lVar2 = FUN_1402179b4(lVar4);
          if ((*(byte *)(lVar2 + 0x19) & 0x10) == 0) {
            return;
          }
          fVar5 = (float)FUN_14108d0d4(lVar4);
          FUN_14095ee72(lVar4,fVar5 + *(float *)(param_2 + 0x20));
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x78);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14108d0d4 FUN_14108d0d4 body=60 status=ok
// SIG undefined FUN_14108d0d4(void)

undefined4 FUN_14108d0d4(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_1403ae288(param_1 + 0x38);
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x24);
  }
  else {
    lVar1 = FUN_140280ec4(param_1 + 0x38);
    puVar3 = (undefined4 *)(lVar1 + 200);
  }
  return *puVar3;
}



// FUNCTION 14108d110 FUN_14108d110 body=3674 status=ok
// SIG undefined FUN_14108d110(void)

void FUN_14108d110(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined *puVar19;
  int iVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong uVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  longlong *local_138;
  ulonglong local_130;
  int local_124;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  uint *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  int local_d0;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar20 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  local_124 = param_4;
  local_120 = param_1;
  local_110 = param_3;
  if ((((((iVar20 != 0) &&
         (uVar27 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar27)) &&
        ((int)uVar27 < DAT_14c9647dc)) &&
       ((plVar18 = (longlong *)
                   ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
        plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar20)))) &&
      ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
     (plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0)) {
    if (DAT_14cac9ca8 == 0) {
      local_150 = &local_f8;
      local_f8 = FUN_141030f22;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_14081d0ea;
      local_158 = &LAB_1478c0a72;
      local_160 = (code *)&LAB_1417b2375;
      local_168 = L"Engine";
      local_170 = 0x1000000000;
      local_178 = 0x10000004;
      local_180 = 8;
      local_188 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar18[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cb22108 == 0) {
        local_150 = &local_f8;
        local_f8 = FUN_1449e2820;
        local_140 = FUN_14081d0ea;
        local_148 = FUN_1427b09ee;
        local_158 = &LAB_147f28909;
        local_160 = FUN_1464376d6;
        local_168 = L"Engine";
        local_170 = 0;
        local_178 = 0x10004001;
        local_180 = 8;
        local_188 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      plVar9 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb22108);
      if (plVar9 != (longlong *)0x0) {
        if (DAT_14cb22108 == 0) {
          local_150 = &local_f8;
          local_f8 = FUN_1449e2820;
          local_140 = FUN_14081d0ea;
          local_148 = FUN_1427b09ee;
          local_158 = &LAB_147f28909;
          local_160 = FUN_1464376d6;
          local_168 = L"Engine";
          local_170 = 0;
          local_178 = 0x10004001;
          local_180 = 8;
          local_188 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
        }
        plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb22108);
        if ((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) {
          if (DAT_14cb223d8 == 0) {
            local_150 = &local_f8;
            local_f8 = FUN_1449e2820;
            local_140 = FUN_14081d0ea;
            local_148 = FUN_1427b09ee;
            local_158 = &LAB_147f29feb;
            local_160 = FUN_1464384fe;
            local_168 = L"Engine";
            local_170 = 0;
            local_178 = 0x10004001;
            local_180 = 8;
            local_188 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar9 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
          if (plVar9 != (longlong *)0x0) {
            if (DAT_14cb223d8 == 0) {
              local_150 = &local_f8;
              local_f8 = FUN_1449e2820;
              local_140 = FUN_14081d0ea;
              local_148 = FUN_1427b09ee;
              local_158 = &LAB_147f29feb;
              local_160 = FUN_1464384fe;
              local_168 = L"Engine";
              local_170 = 0;
              local_178 = 0x10004001;
              local_180 = 8;
              local_188 = 0x28;
              FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
            }
            plVar11 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
            if (((plVar9 != plVar11) && (plVar11 != (longlong *)0x0)) &&
               (local_118 = (**(code **)(*plVar11 + 0x10))(plVar11), local_118 != 0)) {
              lVar12 = *(longlong *)(local_120 + 0x48);
              local_f8 = (code *)((ulonglong)local_f8 & 0xffffffffffffff00);
              local_d0 = 0;
              local_138 = param_2;
              FUN_1456bb102(&local_f8,plVar18);
              pfVar22 = &local_c0;
              FUN_1447c3578(lVar12 + 0x108,pfVar22,&local_f8);
              if (local_a0 == 3) {
                uVar27 = 3;
                fVar29 = local_c0;
              }
              else {
                pfVar24 = &local_98;
                FUN_1400b56fe(pfVar24,&local_c0,3);
                fVar29 = local_98;
                if (local_78 == 0) {
                  fVar29 = 5.0;
                }
                pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
                if (pcVar5 != (code *)0x0) {
                  if (0x18 < local_80) {
                    pfVar24 = (float *)CONCAT44(uStack_94,local_98);
                  }
                  (*pcVar5)(pfVar24);
                }
                if (0x18 < local_80) {
                  FUN_1400020a8(CONCAT44(uStack_94,local_98));
                }
                uVar27 = (uint)local_a0;
              }
              pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar27 * 0x120));
              if (pcVar5 != (code *)0x0) {
                if (0x18 < local_a8) {
                  pfVar22 = (float *)CONCAT44(uStack_bc,local_c0);
                }
                (*pcVar5)(pfVar22);
              }
              if (0x18 < local_a8) {
                FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
              }
              lVar12 = DAT_14c9a3da0;
              if ((longlong)local_d0 != 0) {
                lVar13 = (longlong)local_d0 + -1;
                lVar25 = lVar13 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
                if (*(longlong *)(lVar12 + lVar25) != 0) {
                  FUN_1400020a8();
                }
                lVar12 = DAT_14c9a3da0;
                iVar20 = (int)lVar13;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
                }
                *(undefined4 *)(lVar12 + lVar25) = 0xffffffff;
                iVar8 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar8 = DAT_14c9a3dd0;
                }
                *(int *)(lVar12 + 4 + lVar25) = iVar8;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar19 = &DAT_14c9a3db0;
                if (DAT_14c9a3dc0 != (undefined *)0x0) {
                  puVar19 = DAT_14c9a3dc0;
                }
                iVar8 = iVar20 + 0x1f;
                if (-1 < iVar20) {
                  iVar8 = iVar20;
                }
                bVar6 = (byte)lVar13 & 0x1f;
                DAT_14c9a3dd0 = iVar20;
                *(uint *)(puVar19 + (longlong)(iVar8 >> 5) * 4) =
                     *(uint *)(puVar19 + (longlong)(iVar8 >> 5) * 4) &
                     (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                local_d0 = 0;
              }
              if (((char)local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_e8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_e8 + 0x10))();
                }
              }
              lVar12 = (**(code **)(*plVar10 + 0x28))(plVar10);
              uVar27 = *(uint *)(lVar12 + 0x78);
              uVar23 = (ulonglong)uVar27;
              local_100 = (uint *)(lVar12 + 0x60);
              if (uVar27 == 0) {
                uVar21 = 1;
                uVar26 = 0;
                uVar7 = 0;
                iVar20 = 0;
              }
              else {
                puVar17 = *(uint **)(lVar12 + 0x70);
                if (*(uint **)(lVar12 + 0x70) == (uint *)0x0) {
                  puVar17 = local_100;
                }
                uVar7 = *puVar17;
                if (uVar7 == 0) {
                  iVar20 = uVar27 + 0x1e;
                  if (-1 < (int)(uVar27 - 1)) {
                    iVar20 = uVar27 - 1;
                  }
                  uVar26 = 0;
                  uVar21 = (ulonglong)(uint)(iVar20 >> 5);
                  if (iVar20 >> 5 < 1) {
                    uVar21 = uVar26;
                  }
                  iVar20 = 0;
                  do {
                    if (uVar21 == uVar26) goto LAB_14108d755;
                    iVar20 = iVar20 + 0x20;
                    uVar7 = puVar17[uVar26 + 1];
                    uVar26 = uVar26 + 1;
                  } while (uVar7 == 0);
                }
                else {
                  uVar26 = 0;
                  iVar20 = 0;
                }
                uVar21 = (ulonglong)(-uVar7 & uVar7);
                uVar3 = uVar21 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar7 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                if ((int)uVar27 <= (int)uVar7) {
                  uVar7 = uVar27;
                }
              }
              if (uVar7 != uVar27) {
                local_108 = local_118 + 0x20;
                uVar27 = 0xffffffff;
                local_130 = uVar23;
                do {
                  iVar8 = *(int *)(*(longlong *)(lVar12 + 0x50) + 4 + (longlong)(int)uVar7 * 0x2b0);
                  if (iVar8 != 0) {
                    puVar17 = (uint *)(*(longlong *)(lVar12 + 0x50) + (longlong)(int)uVar7 * 0x2b0);
                    uVar7 = *puVar17;
                    if (((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
                       ((plVar18 = (longlong *)
                                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                        plVar18 != (longlong *)0x0 &&
                        ((((int)plVar18[2] == iVar8 && ((*(uint *)(plVar18 + 1) & 0x10200000) == 0))
                         && (plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0)))))) {
                      lVar13 = 8;
                      do {
                        if (*(float *)((longlong)puVar17 + lVar13) <= fVar29) {
                          plVar9 = *(longlong **)(local_118 + 0x18);
                          if (plVar9 != plVar18) {
                            if (plVar9 == (longlong *)0x0) {
                              uVar14 = 0;
                            }
                            else {
                              uVar14 = (**(code **)(*plVar9 + 0x180))();
                            }
                            if (DAT_14cb223d8 == 0) {
                              local_f8 = FUN_1449e2820;
                              local_140 = FUN_14081d0ea;
                              local_148 = FUN_1427b09ee;
                              local_150 = &local_f8;
                              local_158 = &LAB_147f29feb;
                              local_160 = FUN_1464384fe;
                              local_168 = L"Engine";
                              local_170 = 0;
                              local_178 = 0x10004001;
                              local_180 = 8;
                              local_188 = 0x28;
                              FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,
                                            &DAT_147f29fea);
                            }
                            plVar9 = (longlong *)
                                     (**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
                            if (plVar9 == (longlong *)0x0) {
LAB_14108d884:
                              local_f8 = (code *)0x0;
                              uStack_f0 = 0xffff;
                              local_e8 = (longlong *)0x0;
                            }
                            else {
                              if (DAT_14cb223d8 == 0) {
                                local_f8 = FUN_1449e2820;
                                local_140 = FUN_14081d0ea;
                                local_148 = FUN_1427b09ee;
                                local_150 = &local_f8;
                                local_158 = &LAB_147f29feb;
                                local_160 = FUN_1464384fe;
                                local_168 = L"Engine";
                                local_170 = 0;
                                local_178 = 0x10004001;
                                local_180 = 8;
                                local_188 = 0x28;
                                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,
                                              &DAT_147f29fea);
                              }
                              plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
                              if (((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
                                 (lVar13 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar13 == 0))
                              goto LAB_14108d884;
                              local_f8 = *(code **)(lVar13 + 0x20);
                              uStack_f0 = CONCAT62(uStack_f0._2_6_,*(undefined2 *)(lVar13 + 0x28));
                              local_e8 = *(longlong **)(lVar13 + 0x30);
                            }
                            iVar8 = FUN_1448618b0(local_108,&local_f8,uVar14);
                            uVar23 = local_130;
                            plVar9 = local_138;
                            if ((iVar8 == 2) &&
                               ((*(char *)(local_120 + 0xd8) != '\x01' ||
                                (lVar13 = (**(code **)(*plVar18 + 0x5e8))(plVar18), lVar13 != 0))))
                            {
                              if (DAT_14caf64b8 == 0) {
                                local_f8 = FUN_141030f22;
                                local_140 = FUN_14081d0ea;
                                local_148 = FUN_142b4754c;
                                local_150 = &local_f8;
                                local_158 = &LAB_147c45ce0;
                                local_160 = (code *)&LAB_1463f1ff4;
                                local_168 = L"Game";
                                local_170 = 0x4000000000;
                                local_178 = 0x10000004;
                                local_180 = 8;
                                local_188 = 0x428;
                                FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2
                                             );
                              }
                              if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
                                 (*(longlong *)
                                   (*(longlong *)(plVar18[2] + 0x30) +
                                   (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
                                  DAT_14caf64b8 + 0x30)) {
                                lVar13 = plVar18[0x39];
                                plVar9 = local_138;
                                if (lVar13 == 0) {
                                  local_e8 = DAT_14c8464f0;
                                  local_f8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,
                                                              (undefined4)DAT_14c8464e0);
                                  uStack_f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8
                                                      );
                                }
                                else {
                                  local_f8 = *(code **)(lVar13 + 0x260);
                                  uStack_f0 = *(undefined8 *)(lVar13 + 0x268);
                                  local_e8 = *(longlong **)(lVar13 + 0x270);
                                }
                              }
                              else {
                                (**(code **)(*plVar18 + 0x718))(plVar18,&local_f8);
                              }
                              iVar8 = (int)plVar9[1];
                              *(uint *)(plVar9 + 1) = iVar8 + 1U;
                              if (*(uint *)((longlong)plVar9 + 0xc) < iVar8 + 1U) {
                                FUN_1403e3958(plVar9,iVar8);
                              }
                              lVar13 = *plVar9;
                              *(longlong **)(lVar13 + 0x10 + (longlong)iVar8 * 0x18) = local_e8;
                              puVar2 = (undefined4 *)(lVar13 + (longlong)iVar8 * 0x18);
                              *puVar2 = (uint)local_f8;
                              puVar2[1] = local_f8._4_4_;
                              puVar2[2] = (undefined4)uStack_f0;
                              puVar2[3] = uStack_f0._4_4_;
                              uVar7 = *(uint *)((longlong)plVar18 + 0xc);
                              local_f8 = (code *)(ulonglong)uVar7;
                              if ((int)uVar7 < DAT_14c9647dc) {
                                lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                              }
                              else {
                                lVar13 = 0;
                              }
                              iVar8 = *(int *)(lVar13 + 0x10);
                              if (*(int *)(lVar13 + 0x10) == 0) {
                                LOCK();
                                iVar8 = DAT_14c964868 + 1;
                                UNLOCK();
                                iVar15 = DAT_14c964868 + 1;
                                bVar28 = DAT_14c964868 < 1000;
                                DAT_14c964868 = iVar8;
                                if (bVar28) {
                                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                ,0x23d,
                                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                ,iVar15);
                                }
                                LOCK();
                                iVar8 = *(int *)(lVar13 + 0x10);
                                bVar28 = iVar8 == 0;
                                if (bVar28) {
                                  *(int *)(lVar13 + 0x10) = iVar15;
                                  iVar8 = 0;
                                }
                                UNLOCK();
                                uVar7 = (uint)local_f8;
                                if (bVar28) {
                                  iVar8 = iVar15;
                                }
                              }
                              local_f8._0_4_ = uVar7;
                              local_f8 = (code *)CONCAT44(iVar8,(uint)local_f8);
                              FUN_14108df6c(local_110,&local_f8);
                              uVar23 = local_130;
                              if (local_124 <= (int)plVar9[1]) goto LAB_14108d755;
                            }
                          }
                          break;
                        }
                        lVar13 = lVar13 + 0x60;
                      } while (lVar13 != 0x2a8);
                    }
                  }
                  uVar27 = uVar27 & ~(uint)uVar21;
                  puVar17 = *(uint **)(lVar12 + 0x70);
                  if (*(uint **)(lVar12 + 0x70) == (uint *)0x0) {
                    puVar17 = local_100;
                  }
                  uVar4 = *(uint *)(lVar12 + 0x78);
                  iVar8 = (int)uVar26;
                  lVar13 = (longlong)iVar8;
                  uVar7 = puVar17[lVar13] & uVar27;
                  if (uVar7 == 0) {
                    iVar15 = uVar4 + 0x1e;
                    if (-1 < (int)(uVar4 - 1)) {
                      iVar15 = uVar4 - 1;
                    }
                    iVar15 = iVar15 >> 5;
                    iVar20 = iVar20 + 0x20;
                    iVar16 = iVar15;
                    if (iVar15 < iVar8) {
                      iVar16 = iVar8;
                    }
                    if (iVar8 < iVar15) {
                      lVar25 = 0;
                      do {
                        uVar7 = puVar17[lVar13 + lVar25 + 1];
                        if (uVar7 != 0) {
                          uVar26 = (ulonglong)(iVar8 + (int)lVar25 + 1);
                          uVar27 = 0xffffffff;
                          goto LAB_14108d721;
                        }
                        iVar20 = iVar20 + 0x20;
                        lVar25 = lVar25 + 1;
                      } while (iVar16 - lVar13 != lVar25);
                      uVar27 = 0xffffffff;
                      iVar8 = iVar16;
                    }
                    uVar26 = (ulonglong)(iVar8 + 1);
                    uVar23 = local_130;
                    uVar7 = uVar4;
                  }
                  else {
LAB_14108d721:
                    uVar21 = (ulonglong)(-uVar7 & uVar7);
                    uVar3 = uVar21 * 2 + 1;
                    lVar13 = 0x3f;
                    if (uVar3 != 0) {
                      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                      }
                    }
                    uVar7 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                    if ((int)uVar4 <= (int)uVar7) {
                      uVar7 = uVar4;
                    }
                  }
                } while (uVar7 != (uint)uVar23);
              }
            }
          }
        }
      }
    }
  }
LAB_14108d755:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108df6c FUN_14108df6c body=141 status=ok
// SIG undefined FUN_14108df6c(void)

int FUN_14108df6c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_14472d054(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457ef560(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 14108dffa FUN_14108dffa body=141 status=ok
// SIG undefined FUN_14108dffa(void)

void FUN_14108dffa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x10) & 1) != 0)) {
        FUN_1408256d2(lVar2 + 0x28);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    lVar4 = *(longlong *)(param_1 + 0x50);
  }
  FUN_14108e087(lVar4,uVar3);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1457ef65e(param_1 + 0x50);
    return;
  }
  return;
}



// FUNCTION 14108e087 FUN_14108e087 body=73 status=ok
// SIG undefined FUN_14108e087(void)

void FUN_14108e087(longlong param_1,int param_2)

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



// FUNCTION 14108e0d0 FUN_14108e0d0 body=9 status=ok
// SIG undefined FUN_14108e0d0(void)

void FUN_14108e0d0(longlong param_1)

{
  FUN_14108e0da(param_1 + 0x10);
  return;
}



// FUNCTION 14108e0da FUN_14108e0da body=274 status=ok
// SIG undefined FUN_14108e0da(void)

void FUN_14108e0da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0x14b3ef940;
  if ((param_1[5] != 0) && ((*(byte *)(param_1[5] + 0x10) & 1) != 0)) {
    FUN_1408256d2(param_1 + 5);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_1402191ca(param_1 + 3,0);
  }
  param_1[10] = 0;
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    param_1[0xb] = 0;
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
    plVar3 = (longlong *)param_1[0xb];
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
  FUN_1447cd778(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1407e878c(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014108e1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14108e1f3 FUN_14108e1f3 body=846 status=ok
// SIG undefined FUN_14108e1f3(void)

void FUN_14108e1f3(byte param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = DAT_14cb0cb30;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar12 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  iVar4 = DAT_14cb0d020;
  param_1 = *(int *)(lVar11 + uVar9 * 4) < 1 | param_1;
  lVar11 = (longlong)(int)DAT_14cb0d020;
  DAT_14cb0d020 = DAT_14cb0d020 + 1;
  if (DAT_14cb0d024 < DAT_14cb0d020) {
    FUN_147d87214(iVar4);
  }
  plVar8 = DAT_14cb0d018;
  if (DAT_14cb0d018 == (longlong *)0x0) {
    plVar8 = &DAT_14cb0d008;
  }
  plVar8[lVar11] = 0;
  FUN_1400fb146(plVar8 + lVar11,0);
  while (lVar11 = DAT_14cb0cb48, (int)(uint)(param_1 ^ 1) < (int)DAT_14cb0d020) {
    plVar8 = DAT_14cb0d018;
    if (DAT_14cb0d018 == (longlong *)0x0) {
      plVar8 = &DAT_14cb0d008;
    }
    FUN_1408e177a(plVar8,1);
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    if (DAT_14cb0d020 - 1 == 0) {
      DAT_14cb0d020 = 0;
    }
    else {
      memmove(plVar8,plVar8 + 1,(longlong)(int)(DAT_14cb0d020 - 1) << 3);
      DAT_14cb0d020 = DAT_14cb0d020 - 1;
    }
    FUN_143769da8();
  }
  iVar4 = *(int *)(lVar12 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar9 = 0;
  }
  else if (iVar4 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  iVar4 = *(int *)(lVar11 + uVar9 * 4);
  iVar10 = 1;
  if (param_1 == 0) {
    if (iVar4 < 2) {
      iVar5 = -(iVar4 + -2);
      goto LAB_14108e3aa;
    }
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
    if (iVar4 < 2) goto LAB_14108e3aa;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0d058) && (FUN_144b3d300(&DAT_14cb0d058), DAT_14cb0d058 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0d050 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
    _Init_thread_footer(&DAT_14cb0d058);
  }
  iVar4 = (**(code **)(*DAT_14cb0d050 + 0xb0))();
  iVar10 = 2 - (uint)(iVar4 == 0);
LAB_14108e3aa:
  iVar4 = DAT_14cb0d048;
  lVar12 = (longlong)(int)DAT_14cb0d048;
  DAT_14cb0d048 = DAT_14cb0d048 + 1;
  if (DAT_14cb0d04c < DAT_14cb0d048) {
    FUN_147d8731c(iVar4);
  }
  plVar8 = DAT_14cb0d040;
  if (DAT_14cb0d040 == (longlong *)0x0) {
    plVar8 = &DAT_14cb0d028;
  }
  plVar8[lVar12] = 0;
  FUN_1400fb146(plVar8 + lVar12,iVar10);
  cVar3 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,1);
  if (cVar3 == '\0') {
    (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
  }
  while (iVar5 < (int)DAT_14cb0d048) {
    plVar8 = DAT_14cb0d040;
    if (DAT_14cb0d040 == (longlong *)0x0) {
      plVar8 = &DAT_14cb0d028;
    }
    FUN_1408e177a(plVar8,1);
    plVar8 = DAT_14cb0d040;
    if (DAT_14cb0d040 == (longlong *)0x0) {
      plVar8 = &DAT_14cb0d028;
    }
    puVar2 = (undefined8 *)*plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    if (DAT_14cb0d048 - 1 == 0) {
      DAT_14cb0d048 = 0;
    }
    else {
      memmove(plVar8,plVar8 + 1,(longlong)(int)(DAT_14cb0d048 - 1) << 3);
      DAT_14cb0d048 = DAT_14cb0d048 - 1;
    }
    FUN_143769e3a();
  }
  return;
}



// FUNCTION 14108e542 FUN_14108e542 body=94 status=ok
// SIG undefined FUN_14108e542(void)

undefined8 * FUN_14108e542(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a8c06f0;
  return param_1;
}



// FUNCTION 14108e5a0 thunk_FUN_14108e5a6 body=5 status=ok
// SIG undefined thunk_FUN_14108e5a6(void)

longlong thunk_FUN_14108e5a6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(param_1,&DAT_149dfb77a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x10) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x28) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x30) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x40) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x48) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x58) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x60) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x70) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x78) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_140056680(&uStack_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x88) = uStack_38;
  *(undefined4 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_2c;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_140056680(&uStack_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0xa0) = uStack_38;
  *(undefined4 *)(param_1 + 0xa8) = uStack_30;
  *(undefined4 *)(param_1 + 0xac) = uStack_2c;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 2;
  *(undefined1 *)(param_1 + 0xc0) = 0x41;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108e5a6 FUN_14108e5a6 body=1271 status=ok
// SIG undefined FUN_14108e5a6(void)

longlong FUN_14108e5a6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(param_1,&DAT_149dfb77a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x10) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x28) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x30) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x40) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x48) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x58) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x60) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x70) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x78) = DAT_14c844848;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x88) = local_38;
  *(undefined4 *)(param_1 + 0x90) = local_30;
  *(undefined4 *)(param_1 + 0x94) = local_2c;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0xa0) = local_38;
  *(undefined4 *)(param_1 + 0xa8) = local_30;
  *(undefined4 *)(param_1 + 0xac) = local_2c;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 2;
  *(undefined1 *)(param_1 + 0xc0) = 0x41;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108ec43 FUN_14108ec43 body=80 status=ok
// SIG undefined FUN_14108ec43(void)

void FUN_14108ec43(void)

{
  int in_stack_00000038;
  
  if (in_stack_00000038 == 2) {
    FUN_14108ec93();
  }
  else {
    if (in_stack_00000038 == 1) {
      FUN_143155481();
      return;
    }
    if (in_stack_00000038 == 0) {
      FUN_143154fa3();
    }
  }
  return;
}



// FUNCTION 14108ec93 FUN_14108ec93 body=1245 status=ok
// SIG undefined FUN_14108ec93(void)

void FUN_14108ec93(ulonglong *param_1,ulonglong param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  void *_Src;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  void *pvVar20;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar21;
  uint uVar22;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_68;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar16 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar14 = FUN_1415e11ea();
  uVar15 = 0;
  FUN_1448e935e(uVar16,&local_58,uVar14,0);
  FUN_1415e11ea();
  lVar11 = local_58;
  if (local_58 != 0) {
    uVar15 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar16 = FUN_140029432(param_1,uVar15,0);
  param_1[0x37] = uVar15;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  lVar18 = FUN_144821ef4(param_1);
  FUN_144abcaea(lVar18,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar18,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar18,lVar11 + 0xec,&local_58,0);
  puVar21 = (undefined2 *)(lVar11 + 0xf8);
  FUN_144a86a8e(lVar18,puVar21,local_70);
  iVar12 = *(int *)(lVar18 + 0x30) + *(int *)(lVar18 + 0x20);
  iVar13 = iVar12 + *(int *)(lVar18 + 0x40);
  if (iVar13 != 0 && SCARRY4(iVar12,*(int *)(lVar18 + 0x40)) == iVar13 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 0xb;
    local_70 = uVar15;
    local_68 = param_3;
    local_64 = param_4;
    local_60 = puVar21;
    if ((undefined8 *)param_1[1] < puVar19) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar19 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar19;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    uVar16 = *(undefined8 *)(lVar18 + 0x38);
    uVar4 = *(undefined4 *)(lVar18 + 0x40);
    uVar14 = *(undefined8 *)(lVar18 + 0x28);
    uVar5 = *(undefined4 *)(lVar18 + 0x30);
    uVar8 = *(undefined8 *)(lVar18 + 0x18);
    uVar6 = *(undefined4 *)(lVar18 + 0x20);
    uVar9 = *(undefined8 *)(lVar18 + 8);
    uVar7 = *(undefined4 *)(lVar18 + 0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_70;
    puVar17[3] = uVar9;
    *(undefined4 *)(puVar17 + 4) = uVar7;
    puVar17[5] = uVar8;
    *(undefined4 *)(puVar17 + 6) = uVar6;
    puVar17[7] = uVar14;
    *(undefined4 *)(puVar17 + 8) = uVar5;
    puVar17[9] = uVar16;
    *(undefined4 *)(puVar17 + 10) = uVar4;
    *(undefined8 *)(lVar18 + 8) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
    *(undefined8 *)(lVar18 + 0x18) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0;
    *(undefined8 *)(lVar18 + 0x28) = 0;
    *(undefined4 *)(lVar18 + 0x30) = 0;
    *(undefined8 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x40) = 0;
    uVar15 = local_70;
    puVar21 = local_60;
    param_4 = local_64;
    param_3 = local_68;
  }
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar19 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar19) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar17 + 4;
  }
  *param_1 = (ulonglong)puVar19;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar17 + 2) = param_3 + 3U >> 2;
  *(uint *)((longlong)puVar17 + 0x14) = param_4 + 3U >> 2;
  *(uint *)(puVar17 + 3) = param_5 + 3 >> 2;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar22 = (uint)param_1[0x13];
    if (0 < (int)uVar22) {
      uVar22 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar22 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar11 + 0xfa) != '\0') && (*(char *)(lVar11 + 0xfb) != '\x06')) {
      uVar3 = *puVar21;
      *(uint *)(param_1 + 0x13) = uVar22 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar22 + 1) {
        FUN_1447477d8(puVar2,uVar22);
      }
      uVar10 = param_1[0x12];
      *(undefined2 *)(uVar10 + (longlong)(int)uVar22 * 4) = uVar3;
      *(undefined1 *)(uVar10 + 2 + (longlong)(int)uVar22 * 4) = 1;
      uVar22 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar22) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar19) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar19 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar19;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar20 = (void *)((ulonglong)uVar22 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar22 * 4;
        if ((void *)param_1[1] < pvVar20) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar20 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar20;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = uVar15;
        puVar17[3] = _Dst;
        *(uint *)(puVar17 + 4) = uVar22;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14108f17a FUN_14108f17a body=800 status=ok
// SIG undefined FUN_14108f17a(void)

undefined8 * FUN_14108f17a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x200000000;
  *param_1 = &PTR_FUN_14b6d6320;
  FUN_140e47e4e(param_1 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff7fffffff;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x3ff00000;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0x3ff0000000000000;
  param_1[0x87] = 0x3ff0000000000000;
  param_1[0x88] = 0x3ff0000000000000;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  param_1[0x20] = &PTR_FUN_14b6d6940;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0xffffffff7fffffff;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3ff00000;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0x3ff0000000000000;
  param_1[0xa9] = 0x3ff0000000000000;
  param_1[0xaa] = 0x3ff0000000000000;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0xffffffff7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x587) = 0;
  param_1[0xb0] = 0;
  FUN_140e47e4e(param_1 + 0xb2);
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0xffffffff7fffffff;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x113) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0x3ff00000;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0x3ff0000000000000;
  param_1[0x119] = 0x3ff0000000000000;
  param_1[0x11a] = 0x3ff0000000000000;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  param_1[0xb2] = &PTR_FUN_14b6d6940;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0xffffffff7fffffff;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined4 *)(param_1 + 0x135) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = 0x3ff00000;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x13a] = 0x3ff0000000000000;
  param_1[0x13b] = 0x3ff0000000000000;
  param_1[0x13c] = 0x3ff0000000000000;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  param_1[0x141] = 0xffffffff7fffffff;
  *(undefined4 *)((longlong)param_1 + 0xa17) = 0;
  param_1[0x142] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x22] = DAT_14cadddb8;
  param_1[0x24] = DAT_14cadddc8;
  *(undefined8 *)((longlong)param_1 + 0x224) = DAT_14cadddd0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = DAT_14cbc3c88;
  uVar1 = DAT_14cbc3c70;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = DAT_14cbc3c70;
  param_1[0xae] = DAT_14cbc3c78;
  param_1[0xb0] = DAT_14cadde00;
  *(undefined1 *)(param_1 + 0xb1) = 1;
  param_1[0x8c] = DAT_14cadde10;
  param_1[0xb4] = DAT_14cadddd8;
  param_1[0xb6] = DAT_14caddde8;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = DAT_14cadddf0;
  *(undefined8 *)((longlong)param_1 + 0x864) = DAT_14cbc3c90;
  *(undefined8 *)((longlong)param_1 + 0x974) = uVar1;
  param_1[0x140] = DAT_14cbc3c80;
  param_1[0x142] = DAT_14cadde20;
  param_1[0x11e] = DAT_14cadde30;
  return param_1;
}



// FUNCTION 14108f49a FUN_14108f49a body=1128 status=ok
// SIG undefined FUN_14108f49a(void)

void FUN_14108f49a(longlong *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar6 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  FUN_14108f902();
  cVar3 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
  if (cVar3 == '\0') {
    return;
  }
  dVar11 = (double)param_1[0x46];
  dVar5 = (double)param_1[0x47];
  dVar8 = (double)param_1[0x48];
  dVar9 = *param_2;
  dVar7 = param_2[1];
  dVar4 = param_2[2];
  dVar12 = (dVar9 * -dVar11 - dVar7 * dVar5) - dVar4 * dVar8;
  if (dVar12 <= 0.0) {
    if (0.0 <= dVar12) {
      return;
    }
    if (1.9 < *(float *)((longlong)param_1 + 0x49c) || *(float *)((longlong)param_1 + 0x49c) == 1.9)
    {
      return;
    }
    if ((*(byte *)(param_1 + 0x93) & 1) == 0) {
      return;
    }
    dVar6 = dVar4 * dVar8 + dVar9 * dVar11 + dVar7 * dVar5;
    dVar4 = dVar4 - dVar8 * dVar6;
    dVar7 = dVar7 - dVar5 * dVar6;
    dVar9 = dVar9 - dVar6 * dVar11;
LAB_14108f659:
    *param_2 = dVar9;
    param_2[1] = dVar7;
  }
  else {
    dVar12 = -dVar8 * *(double *)(param_3 + 0x50) +
             -dVar11 * *(double *)(param_3 + 0x40) + -dVar5 * *(double *)(param_3 + 0x48);
    if ((double)*(float *)(param_1 + 0x45) <= dVar12) {
      if (dVar12 <= 9.999999747378752e-05) goto LAB_14108f621;
    }
    else {
      cVar3 = (**(code **)(*param_1 + 0x878))(param_1,param_3);
      dVar9 = *param_2;
      dVar7 = param_2[1];
      dVar4 = param_2[2];
      if ((dVar12 <= 9.999999747378752e-05) || (cVar3 == '\0')) {
        dVar11 = (double)param_1[0x46];
        dVar5 = (double)param_1[0x47];
        dVar8 = (double)param_1[0x48];
LAB_14108f621:
        dVar6 = dVar4 * dVar8 + dVar9 * dVar11 + dVar7 * dVar5;
        dVar4 = dVar4 - dVar8 * dVar6;
        dVar7 = dVar7 - dVar5 * dVar6;
        dVar9 = dVar9 - dVar6 * dVar11;
        goto LAB_14108f659;
      }
    }
    dVar11 = dVar4 * dVar4 + dVar9 * dVar9 + dVar7 * dVar7;
    if (((dVar11 != 1.0) || (dVar5 = dVar4, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar11))) &&
       (dVar5 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar5 = dVar4 * dVar11;
      dVar8 = dVar7 * dVar11;
      dVar10 = dVar9 * dVar11;
    }
    dVar11 = SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1);
    dVar9 = (double)param_1[0x46];
    dVar7 = (double)param_1[0x47];
    dVar4 = (double)param_1[0x48];
    dVar12 = ((-dVar9 * dVar10 * dVar11 - dVar8 * dVar11 * dVar7) - dVar5 * dVar11 * dVar4) / dVar12
    ;
    dVar5 = dVar2 * dVar4 + dVar6 * dVar9 + dVar1 * dVar7;
    dVar11 = (double)(1.0 - *(float *)(param_3 + 4));
    dVar4 = ((dVar2 - dVar4 * dVar5) - dVar4 * dVar12) * dVar11;
    dVar1 = ((dVar1 - dVar7 * dVar5) - dVar7 * dVar12) * dVar11;
    dVar11 = ((dVar6 - dVar5 * dVar9) - dVar12 * dVar9) * dVar11;
    *param_2 = dVar11;
    param_2[1] = dVar1;
    param_2[2] = dVar4;
    dVar6 = (-(double)param_1[0x46] * dVar11 - (double)param_1[0x47] * dVar1) -
            (double)param_1[0x48] * dVar4;
    if (dVar6 <= (double)*(float *)((longlong)param_1 + 0x1fc)) {
      return;
    }
    dVar6 = (double)(float)((double)*(float *)((longlong)param_1 + 0x1fc) / dVar6);
    *param_2 = dVar11 * dVar6;
    param_2[1] = dVar1 * dVar6;
    dVar4 = dVar4 * dVar6;
  }
  param_2[2] = dVar4;
  return;
}



// FUNCTION 14108f902 FUN_14108f902 body=949 status=ok
// SIG undefined FUN_14108f902(void)

void FUN_14108f902(longlong *param_1,double *param_2,longlong param_3,double *param_4)

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
  undefined1 auStack_108 [32];
  double *local_e8;
  longlong local_e0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = param_2[2];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  local_a8 = *(double *)(param_3 + 0x50);
  local_b8 = *(double *)(param_3 + 0x40);
  dStack_b0 = *(double *)(param_3 + 0x48);
  dVar9 = *param_4;
  dVar5 = param_4[1];
  dVar6 = param_4[2];
  if (dVar6 * local_a8 + dVar9 * local_b8 + dVar5 * dStack_b0 <= 0.0) {
    dVar2 = local_b8 * dVar5 - dVar9 * dStack_b0;
    dVar7 = local_a8 * dVar9 - dVar6 * local_b8;
    dVar5 = dStack_b0 * dVar6 - dVar5 * local_a8;
    dVar9 = dVar2 * dVar2 + dVar5 * dVar5 + dVar7 * dVar7;
    if (((dVar9 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, local_88 = dVar2, NAN(dVar9))) &&
       (dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, local_88 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      dVar6 = dVar5 * dVar9;
      dVar8 = dVar7 * dVar9;
      local_88 = dVar2 * dVar9;
    }
    local_98._0_8_ =
         (double)(1.0 - *(float *)(param_3 + 4)) *
         (dVar1 * local_88 + dVar3 * dVar6 + dVar4 * dVar8);
    local_88 = local_88 * (double)local_98._0_8_;
    dVar8 = dVar8 * (double)local_98._0_8_;
    local_98._0_8_ = (double)local_98._0_8_ * dVar6;
    stack0xffffffffffffff70 = dVar8;
    if (dVar1 * local_88 + dVar3 * (double)local_98._0_8_ + dVar4 * dVar8 < 0.0) {
      local_88 = -local_88;
      local_98._8_4_ = SUB84(dVar8,0);
      local_98._0_8_ = -(double)local_98._0_8_;
      uStack_8c = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
    }
  }
  else {
    local_e8 = &local_b8;
    local_e0 = param_3;
    local_88 = dVar1;
    local_98._0_8_ = dVar3;
    unique0x10000ac4 = dVar4;
    (**(code **)(*param_1 + 0x500))
              (SUB84(local_b8,0),&local_d0,local_98,1.0 - *(float *)(param_3 + 4));
    local_88 = local_c0;
    stack0xffffffffffffff70 = dStack_c8;
    local_98._0_8_ = local_d0;
    if (dVar1 * local_c0 + dVar3 * local_d0 + dVar4 * dStack_c8 <= 0.0) {
      local_88 = DAT_14c8464f0;
      stack0xffffffffffffff70 = DAT_14c8464e8;
      local_98._0_8_ = DAT_14c8464e0;
    }
    else if (ABS(param_4[2] * local_a8 + *param_4 * local_b8 + param_4[1] * dStack_b0 + -1.0) <
             9.999999747378752e-05) {
      stack0xffffffffffffff70 = dStack_c8 + dStack_b0 * 0.009999999776482582;
      local_98._0_8_ = local_d0 + local_b8 * 0.009999999776482582;
      local_88 = local_c0 + local_a8 * 0.009999999776482582;
    }
  }
  param_2[2] = local_88;
  *(undefined4 *)param_2 = local_98._0_4_;
  *(undefined4 *)((longlong)param_2 + 4) = local_98._4_4_;
  *(undefined4 *)(param_2 + 1) = local_98._8_4_;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_8c;
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14108fcb8 FUN_14108fcb8 body=265 status=ok
// SIG undefined FUN_14108fcb8(void)

undefined8 FUN_14108fcb8(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
        if ((int)uVar1 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return 0;
        }
        plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x3c))) &&
           (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
            ((lVar3 = *plVar2, lVar3 != 0 && (*(char *)(lVar3 + 0x178) == '\x03')))))) {
          *(char *)(param_1 + 0x48) = param_2;
          FUN_14108fdc2(param_1);
          if (param_2 == '\0') {
            FUN_14069c588(lVar3);
            return 1;
          }
          if (*(char *)(param_1 + 0x57) == '\0') {
            return 1;
          }
          FUN_1410900b6(lVar3,*(char *)(param_1 + 0x57),*(undefined1 *)(param_1 + 0x48),0);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14108fdc2 FUN_14108fdc2 body=755 status=ok
// SIG undefined FUN_14108fdc2(void)

void FUN_14108fdc2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  byte local_bc;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x50) == '\x01') &&
     (plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x38), plVar6 != (longlong *)0x0)) {
    uVar7 = FUN_140eca14a();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_140eca14a();
      plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
      if (((plVar8 != (longlong *)0x0 && plVar6 != plVar8) &&
          (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0)) &&
         (FUN_145863238(lVar9 + 0x48,*(undefined4 *)(param_1 + 0x4c)),
         *(char *)(param_1 + 0x50) == '\x01')) {
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x48) != '\x01') ||
     (plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x38), plVar6 == (longlong *)0x0))
  goto LAB_14108fdf7;
  uVar7 = FUN_140eca14a();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
  if (plVar6 == (longlong *)0x0) goto LAB_14108fdf7;
  uVar7 = FUN_140eca14a();
  plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
  if ((plVar8 == (longlong *)0x0 || plVar6 == plVar8) ||
     (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 == 0)) goto LAB_14108fdf7;
  lVar10 = FUN_1408f3bda();
  bVar3 = *(byte *)(param_1 + 0x57);
  local_94 = 0;
  local_70 = 0;
  local_68 = 0;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  plVar11 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b967270;
  plVar6 = plVar11 + 2;
  FUN_148d13536(plVar6,lVar10 + (ulonglong)bVar3 * 0x18 + 0xa8);
  plVar8 = plStack_b0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar11 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    plVar12 = plStack_b0;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_b8 = plVar6;
    if (plVar11 == plStack_b0) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar8 = plStack_b0;
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = local_b8;
        plVar8 = plStack_b0;
        if (*piVar1 == 0) {
          lVar10 = *plVar11;
          plVar12 = plVar11;
LAB_14109001c:
          (**(code **)(lVar10 + 0x10))(plVar12);
          plVar6 = local_b8;
          plVar8 = plStack_b0;
        }
      }
    }
    else {
      plVar8 = plVar11;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar4 = (undefined8 *)*plStack_b0;
          plStack_b0 = plVar11;
          (*(code *)*puVar4)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_b8;
          plVar8 = plStack_b0;
          if (*piVar1 == 0) {
            lVar10 = *plVar12;
            goto LAB_14109001c;
          }
        }
      }
    }
  }
  plStack_b0 = plVar8;
  local_b8 = plVar6;
  FUN_140fbc5b2(lVar9 + 0x48,&local_c0,&local_b8);
  if (&local_c0 != (undefined4 *)(param_1 + 0x4c)) {
    if ((local_bc & 1) == 0) {
      if (*(char *)(param_1 + 0x50) != '\x01') goto LAB_141090058;
      uVar5 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = local_c0;
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x50) = uVar5;
  }
LAB_141090058:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_141519bc8(&local_b8);
LAB_14108fdf7:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410900b6 FUN_1410900b6 body=468 status=ok
// SIG undefined FUN_1410900b6(void)

void FUN_1410900b6(longlong param_1,uint param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148630fef;
      local_60 = FUN_1464b6a91;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
        lVar3 = FUN_14069c71e();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          lVar2 = FUN_1405831b2();
          if ((param_4 != '\0') && (*(longlong *)(lVar2 + 0xc7c) != 0)) {
            FUN_148d0db7c(plVar1,lVar2 + 0xc7c);
          }
          if ((*(longlong *)(lVar2 + 0xc88 + ((ulonglong)param_2 & 0xff) * 0x18) != 0) &&
             (*(int *)(lVar2 + ((ulonglong)param_2 & 0xff) * 0x18 + 0xc90) - 1U < 0xfffffffe)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410902a8 FUN_1410902a8 body=599 status=ok
// SIG undefined FUN_1410902a8(void)

void FUN_1410902a8(longlong param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x250) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x250) + 0x178) == '\x03')) &&
     (lVar3 = FUN_141090500(param_2), lVar3 != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x5b0);
    lVar8 = (longlong)*(int *)(param_1 + 0x5b8);
    if (lVar8 != 0) {
      iVar6 = 1;
      lVar11 = 0;
      plVar10 = plVar4;
      do {
        if ((*plVar10 == *param_2) && ((int)plVar10[1] == (int)param_2[1])) {
          if (iVar6 != 0) {
            lVar8 = FUN_14095dd8e(lVar3 + (ulonglong)*(byte *)(plVar4 + (lVar11 >> 0x20) * 4 + 3) *
                                          0x28 + 0x10);
            if (lVar8 != 0) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar8);
              }
              local_50 = 1;
              lVar1 = *(longlong *)(param_1 + 0x250);
              lVar7 = lVar1;
              local_58 = lVar8;
              if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar1);
                lVar7 = *(longlong *)(param_1 + 0x250);
              }
              local_48 = lVar1;
              FUN_14109058a(lVar7);
            }
            *(byte *)(plVar4 + (lVar11 >> 0x20) * 4 + 3) = param_3;
            if (param_3 != 0) goto LAB_141090362;
            iVar2 = *(int *)(param_1 + 0x5b8);
            iVar6 = iVar2 - iVar6;
            if (iVar6 != 0) {
              iVar9 = 1;
              if (iVar6 < 1) {
                iVar9 = iVar6;
              }
              memmove((void *)((lVar11 >> 0x20) * 0x20 + *(longlong *)(param_1 + 0x5b0)),
                      (void *)((longlong)(iVar2 - iVar9) * 0x20 + *(longlong *)(param_1 + 0x5b0)),
                      (longlong)iVar9 << 5);
              iVar2 = *(int *)(param_1 + 0x5b8);
            }
            *(int *)(param_1 + 0x5b8) = iVar2 + -1;
            goto LAB_141090397;
          }
          break;
        }
        plVar10 = plVar10 + 4;
        lVar11 = lVar11 + 0x100000000;
        iVar6 = iVar6 + 1;
      } while (plVar10 != plVar4 + lVar8 * 4);
    }
    if (param_3 != 0) {
      uVar5 = *(int *)(param_1 + 0x5b8) + 1;
      *(uint *)(param_1 + 0x5b8) = uVar5;
      if (*(uint *)(param_1 + 0x5bc) < uVar5) {
        FUN_141090758((undefined8 *)(param_1 + 0x5b0));
        plVar4 = *(longlong **)(param_1 + 0x5b0);
      }
      plVar4[lVar8 * 4] = *param_2;
      *(int *)(plVar4 + lVar8 * 4 + 1) = (int)param_2[1];
      plVar4[lVar8 * 4 + 2] = 0;
      *(byte *)(plVar4 + lVar8 * 4 + 3) = param_3;
LAB_141090362:
      lVar3 = FUN_14095dd8e(lVar3 + (ulonglong)(param_3 - 1) * 0x28 + 0x38);
      if (lVar3 != 0) {
        FUN_141090600(*(undefined8 *)(param_1 + 0x250),*(undefined8 *)(param_1 + 0x250),lVar3,0);
      }
    }
  }
LAB_141090397:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141090500 FUN_141090500 body=136 status=ok
// SIG undefined FUN_141090500(void)

longlong FUN_141090500(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cbc6798 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cbc6798,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109058a FUN_14109058a body=118 status=ok
// SIG undefined FUN_14109058a(void)

undefined8 FUN_14109058a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          uVar1 = FUN_143e47056(lVar4,param_2);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141090600 FUN_141090600 body=342 status=ok
// SIG undefined FUN_141090600(void)

undefined4 FUN_141090600(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0) {
    FUN_1418ae416();
    FUN_140cdcab8(param_3);
    FUN_140cdc9e6(param_3 + 0x150,&local_88);
    if ((local_88 & ~DAT_14cb8c708) == 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_48 = 0;
      if (param_2 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_80 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      local_88 = param_3;
      FUN_1418ae4b4(&local_58,param_4);
      uVar1 = FUN_1410b8ae0(param_1,&local_88);
      FUN_1409ed859(local_58,uStack_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      goto LAB_141090705;
    }
  }
  uVar1 = 0;
LAB_141090705:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141090758 FUN_141090758 body=255 status=ok
// SIG undefined FUN_141090758(void)

void FUN_141090758(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141090858 FUN_141090858 body=131 status=ok
// SIG undefined FUN_141090858(void)

undefined8 * FUN_141090858(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  int iVar3;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1410908dc(lVar1,param_1,0);
    if (param_3 != '\0') {
      iVar3 = 0;
      if (*(int *)(lVar1 + 0xd0) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = *(undefined2 **)(lVar1 + 200);
        iVar3 = *(int *)(lVar1 + 0xd0) + -1;
      }
      FUN_140c540b4(param_1,puVar2,iVar3,1);
    }
  }
  return param_1;
}



// FUNCTION 1410908dc FUN_1410908dc body=536 status=ok
// SIG undefined FUN_1410908dc(void)

longlong * FUN_1410908dc(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_1402cf98a();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_147b98996(lVar2,&local_58);
          if (&local_58 == param_2) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_2 != 0) {
              FUN_1400020a8();
            }
            *param_2 = local_58;
            local_58 = 0;
            *(undefined4 *)(param_2 + 1) = local_50;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
          }
          break;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((int)param_2[1] < 2) {
LAB_14109095f:
    lVar5 = param_1;
    lVar4 = lVar5;
    if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x00014109096e;
    goto LAB_14109097d;
  }
LAB_1410909d3:
  if (param_3 == '\0') {
    FUN_141090af6();
  }
  else {
    FUN_14094a6a4(&local_58,param_2,0);
  }
  if (&local_58 == param_2) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    *(undefined4 *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014109096e:
  param_1 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14109095f;
  lVar4 = FUN_142840154(lVar5);
LAB_14109097d:
  if (lVar4 == 0) {
    param_1 = *(longlong *)(lVar5 + 0x20);
    goto LAB_14109095f;
  }
  local_48 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  if (&local_58 == param_2) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
  goto LAB_1410909d3;
}



// FUNCTION 141090af6 FUN_141090af6 body=111 status=ok
// SIG undefined FUN_141090af6(void)

undefined8 FUN_141090af6(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar4 = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) {
      uVar5 = 0;
      goto LAB_141090b27;
    }
    uVar1 = uVar6 - 2;
    lVar3 = uVar6 - 2;
    uVar6 = uVar1;
  } while (*(short *)((longlong)puVar4 + lVar3) != 0x2f);
  uVar5 = (int)(uVar1 >> 1) + 1;
LAB_141090b27:
  uVar7 = iVar2 - 1;
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
    uVar7 = 0;
  }
  if ((int)uVar7 <= (int)uVar5) {
    uVar5 = uVar7;
  }
  uVar6 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar6 = 0;
  }
  FUN_14006620a(param_1,puVar4 + uVar6,uVar7 - (int)uVar6);
  return param_1;
}



// FUNCTION 141090b66 FUN_141090b66 body=1071 status=ok
// SIG undefined FUN_141090b66(void)

void FUN_141090b66(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  longlong local_2c8;
  longlong *local_2c0;
  undefined1 local_2b4 [12];
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  undefined4 local_290;
  longlong local_270;
  undefined1 *local_260;
  longlong *local_258;
  ulonglong *local_250;
  char local_248;
  undefined1 local_240;
  undefined1 local_23f [511];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2a8 = *(undefined8 *)(param_1 + 8);
  local_2a0 = *(undefined4 *)(param_1 + 0x10);
  FUN_140d89648(param_2,param_3);
  FUN_140d898de(param_2,local_2b4,param_3);
  lVar11 = param_3 + 0x2c0;
  lVar7 = FUN_1406b2efc(lVar11);
  lVar7 = FUN_140d22200(lVar7 + 0xb0,local_2b4);
  lVar8 = FUN_14109105e(param_2,param_3);
  if (lVar8 != 0) {
    lVar9 = FUN_1401bd7a2(lVar8);
    if (lVar9 != 0) {
      iVar5 = *(int *)(lVar7 + 0x10);
      *(uint *)(lVar7 + 0x10) = iVar5 + 1U;
      if (*(uint *)(lVar7 + 0x14) < iVar5 + 1U) {
        FUN_140c80c84((longlong *)(lVar7 + 8),iVar5);
      }
      plVar3 = (longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar5 * 0x18);
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      uVar10 = FUN_141090f96();
      lVar9 = 0;
      FUN_140005f6c(plVar3,uVar10,0,0);
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        uVar10 = FUN_141090f96();
        cVar6 = FUN_1448093f4(lVar7,uVar10);
        if (cVar6 == '\0') {
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar3;
          plVar3 = (longlong *)plVar3[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
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
      *(undefined1 *)(lVar9 + 0x10) = 1;
      local_260 = &local_240;
      local_248 = '\0';
      local_250 = &local_40;
      local_240 = 0x21;
      local_258 = (longlong *)local_23f;
      local_2d8 = 2;
      FUN_1408234aa(local_250,&local_298,lVar8,&DAT_14cb86eb8);
      FUN_14014e8d0(&local_298,&local_260);
      if (local_270 != 0) {
        FUN_1400020a8();
      }
      if (local_250 <= (ulonglong *)((longlong)local_258 + 1)) {
        FUN_145753a78(&local_260,1);
      }
      plVar3 = (longlong *)((longlong)local_258 + 1);
      *(undefined1 *)local_258 = 0;
      plVar1 = (longlong *)(lVar9 + 0x18);
      iVar5 = *(int *)(lVar9 + 0x20);
      *(uint *)(lVar9 + 0x20) = iVar5 + 1U;
      local_258 = plVar3;
      if (*(uint *)(lVar9 + 0x24) < iVar5 + 1U) {
        FUN_140c80c84(plVar1,iVar5);
      }
      puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x18);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      uVar10 = FUN_141091024();
      FUN_140005f6c(puVar4,uVar10,0,0);
      FUN_140822110(&local_298,&local_260,0);
      FUN_141090fd0(puVar4,&local_2c8);
      FUN_1408228f2(local_2c8 + 0x10,&local_298);
      if (local_2c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2c0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_2c0)(local_2c0);
          LOCK();
          piVar2 = (int *)((longlong)local_2c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_2c0 + 0x10))(local_2c0);
          }
        }
      }
      FUN_1447cd778(local_298,local_290);
      if (local_298 != 0) {
        FUN_1400020a8();
      }
      if (local_248 == '\x01') {
        FUN_1400020a8(local_260);
      }
      iVar5 = *(int *)(lVar9 + 0x20);
      *(uint *)(lVar9 + 0x20) = iVar5 + 1U;
      if (*(uint *)(lVar9 + 0x24) < iVar5 + 1U) {
        FUN_140c80c84(plVar1,iVar5);
      }
      puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x18);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      uVar10 = FUN_140c80c4a();
      FUN_140005f6c(puVar4,uVar10,0,0);
      FUN_140c80bf6(puVar4,&local_260);
      plVar3 = local_258;
      local_260[0x10] = 1;
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_258 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_258)(local_258);
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
  lVar7 = FUN_1406b2efc(lVar11);
  FUN_140d89482(lVar7 + 0x170,local_2b4);
  FUN_1412102a8(&local_260,param_3);
  lVar11 = FUN_1406b2efc(lVar11);
  FUN_140d89482(lVar11 + 0x170,&local_260);
  if ((local_40 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141090f96 FUN_141090f96 body=57 status=ok
// SIG undefined FUN_141090f96(void)

void FUN_141090f96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b840 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b840 = FUN_140002ddd(FUN_14652d1b9,uVar1,L"MissionActionCondition_Compound");
  }
  return;
}



// FUNCTION 141090fd0 FUN_141090fd0 body=83 status=ok
// SIG undefined FUN_141090fd0(void)

longlong * FUN_141090fd0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_141091024();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141091024 FUN_141091024 body=57 status=ok
// SIG undefined FUN_141091024(void)

void FUN_141091024(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b888 = FUN_140002ddd(FUN_14652d2de,uVar1,L"MissionActionCondition_FactExpression");
  }
  return;
}



// FUNCTION 14109105e FUN_14109105e body=180 status=ok
// SIG undefined FUN_14109105e(void)

longlong FUN_14109105e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((lVar2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x4c0))) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x4b8) + lVar4 * 8) == param_2) {
        if (lVar4 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x4b8) + -8 + lVar4 * 8);
        if (lVar2 == 0) {
          return 0;
        }
        piVar5 = &DAT_14c9485f0;
        if (*(int **)(lVar2 + 8) != (int *)0x0) {
          piVar5 = *(int **)(lVar2 + 8);
        }
        piVar3 = (int *)&DAT_14c948618;
        if (((*piVar5 != 0) && (iVar1 = piVar5[1], iVar1 != 0)) && (*piVar5 != DAT_14c948000)) {
          if ((iVar1 < 2) && (piVar5[9] < 1)) {
            piVar5 = piVar5 + 2;
          }
          else {
            piVar5 = *(int **)(piVar5 + 6);
          }
          if (0 < iVar1) {
            piVar3 = piVar5;
          }
        }
        if (*(int *)(param_2 + 0x3b0) != *piVar3) {
          return 0;
        }
        if (*(int *)(param_2 + 0x3b8) != piVar3[2]) {
          return 0;
        }
        return lVar2;
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(lVar2 + 0x4c0) != lVar4);
  }
  return 0;
}



// FUNCTION 141091112 FUN_141091112 body=177 status=ok
// SIG undefined FUN_141091112(void)

undefined8 * FUN_141091112(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4735f0;
  FUN_1410911c3(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1410911c3 FUN_1410911c3 body=62 status=ok
// SIG undefined FUN_1410911c3(void)

void FUN_1410911c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_141091201(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141091201 FUN_141091201 body=43 status=ok
// SIG undefined FUN_141091201(void)

void FUN_141091201(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1489fe760(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 14109122c FUN_14109122c body=718 status=ok
// SIG undefined FUN_14109122c(void)

void FUN_14109122c(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  double *pdVar24;
  double *pdVar25;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  ulonglong local_70;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  if (*(int *)((longlong)param_2 + 0x44) != 0) {
    uVar9 = *(uint *)(param_2 + 8);
    uVar21 = 0;
    if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1410912cd;
    puVar22 = (undefined8 *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if ((puVar22 != (undefined8 *)0x0) &&
       ((*(int *)(puVar22 + 2) == *(int *)((longlong)param_2 + 0x44) &&
        ((*(uint *)(puVar22 + 1) & 0x10200000) == 0)))) {
      uVar21 = *puVar22;
      goto LAB_1410912cd;
    }
  }
  uVar21 = 0;
LAB_1410912cd:
  FUN_141091604(0,uVar21,local_88);
  FUN_1410914fc(param_2,local_88,param_3);
  uVar9 = *(uint *)(param_2 + 1);
  iVar10 = (int)param_4[1];
  if (iVar10 < (int)uVar9) {
    *(uint *)(param_4 + 1) = uVar9;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar10) < uVar9 - iVar10) {
      FUN_140e16be0(param_4);
    }
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar10) {
      *(uint *)(param_4 + 1) = uVar9;
      FUN_1457ef6ee(param_4);
    }
  }
  if (0 < (int)uVar9) {
    if (0 < *(int *)(param_2[9] + 0x38)) {
      if (param_2[0x1d] == 0) {
        puVar22 = (undefined8 *)
                  ((ulonglong)((uint)*(ushort *)*param_2 * 0x60) + *(longlong *)(param_2[9] + 0x30))
        ;
      }
      else {
        puVar22 = *(undefined8 **)(param_2[0x1d] + 0x10);
      }
      uVar21 = puVar22[1];
      uVar17 = puVar22[2];
      uVar18 = puVar22[3];
      puVar11 = (undefined8 *)*param_4;
      *puVar11 = *puVar22;
      puVar11[1] = uVar21;
      puVar11[2] = uVar17;
      puVar11[3] = uVar18;
    }
    if (uVar9 != 1) {
      uVar19 = 1;
      lVar20 = 0xc;
      lVar23 = 0x60;
      do {
        if (param_2[0x1d] == 0) {
          pdVar25 = (double *)
                    ((ulonglong)((uint)*(ushort *)(*param_2 + uVar19 * 2) * 0x60) +
                    *(longlong *)(param_2[9] + 0x30));
        }
        else {
          pdVar25 = (double *)(*(longlong *)(param_2[0x1d] + 0x10) + lVar23);
        }
        lVar12 = *param_4;
        pdVar24 = (double *)((longlong)*(int *)(param_2[0x12] + uVar19 * 4) * 0x20 + lVar12);
        dVar13 = *pdVar25;
        dVar14 = pdVar25[1];
        dVar15 = pdVar25[2];
        dVar16 = pdVar25[3];
        dVar1 = pdVar24[3];
        dVar2 = pdVar24[3];
        dVar3 = *pdVar24;
        dVar4 = *pdVar24;
        dVar5 = pdVar24[1];
        dVar6 = pdVar24[1];
        dVar7 = pdVar24[2];
        dVar8 = pdVar24[2];
        pdVar25 = (double *)(lVar12 + -0x10 + lVar20 * 4);
        *pdVar25 = dVar14 * dVar7 * -1.0 + dVar15 * dVar5 + dVar16 * dVar3 * 1.0 + dVar13 * dVar1;
        pdVar25[1] = dVar13 * dVar8 * 1.0 + dVar16 * dVar6 + dVar15 * dVar4 * -1.0 + dVar14 * dVar2;
        pdVar25 = (double *)(lVar12 + lVar20 * 4);
        *pdVar25 = dVar16 * dVar7 * 1.0 + ((dVar3 * dVar14 * 1.0 + dVar1 * dVar15) - dVar13 * dVar5)
        ;
        pdVar25[1] = dVar15 * dVar8 * -1.0 +
                     ((dVar4 * dVar13 * -1.0 + dVar2 * dVar16) - dVar14 * dVar6);
        uVar19 = uVar19 + 1;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + 0x60;
      } while (uVar9 != uVar19);
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410914fc FUN_1410914fc body=220 status=ok
// SIG undefined FUN_1410914fc(void)

void FUN_1410914fc(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar3;
  FUN_1410915d8(param_3,uVar4);
  if ((int)param_2[1] < 1) {
    if (0 < (int)uVar3) {
      do {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1408f8cfa(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = 0xffffffff;
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      uVar2 = 0xffffffff;
      if ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x78)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + uVar5 * 4);
        if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_2[1])) {
          iVar1 = *(int *)(*param_2 + (longlong)iVar1 * 4);
          if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x88))) {
            uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 4);
          }
        }
      }
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1408f8cfa(param_3,iVar1);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 1410915d8 FUN_1410915d8 body=42 status=ok
// SIG undefined FUN_1410915d8(void)

void FUN_1410915d8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1447d6d9c();
    return;
  }
  return;
}



// FUNCTION 141091604 FUN_141091604 body=715 status=ok
// SIG undefined FUN_141091604(void)

void FUN_141091604(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  code *local_88;
  longlong **local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar10 = *(int *)(param_2 + 0x78);
  uVar1 = *(uint *)(param_3 + 1);
  uVar4 = (ulonglong)uVar1;
  if ((int)uVar1 < iVar10) {
    *(int *)(param_3 + 1) = iVar10;
    if (*(int *)((longlong)param_3 + 0xc) - uVar1 < iVar10 - uVar1) {
      FUN_1410918d2(param_3);
    }
  }
  else {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
    if (iVar10 < (int)uVar1) {
      *(int *)(param_3 + 1) = iVar10;
      FUN_14794b19a(param_3);
    }
  }
  memset((void *)*param_3,(int)CONCAT71((int7)(uVar4 >> 8),0xff),
         (ulonglong)(uint)((int)param_3[1] << 2));
  local_90 = &local_78;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_80 = &local_90;
  local_88 = FUN_1433f50c8;
  FUN_141091a34(param_1);
  if ((*(char *)(param_1 + 0xc0) != '\0') && (0 < (int)param_3[1])) {
    lVar5 = 0;
    do {
      lVar2 = *param_3;
      if (*(int *)(lVar2 + lVar5 * 4) == -1) {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x70) + lVar5 * 0xc);
        if ((int)uStack_70 != local_44) {
          uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar9 = (uint)lVar3 & 0xffff;
          puVar6 = local_38;
          if (local_38 == (undefined1 *)0x0) {
            puVar6 = local_40;
          }
          iVar10 = *(int *)(puVar6 + (ulonglong)
                                     (local_30 - 1U &
                                     (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9)
                                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
          while (iVar10 != -1) {
            plVar7 = (longlong *)(local_78 + (longlong)iVar10 * 0x18);
            if (*plVar7 == lVar3) goto LAB_141091777;
            iVar10 = (int)plVar7[2];
          }
        }
        plVar7 = (longlong *)0x0;
LAB_141091777:
        plVar11 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        if ((((lVar3 != 0) && (plVar11 != (longlong *)0x0)) && (lVar3 = *plVar11, lVar3 != 0)) &&
           (*(int *)(param_2 + 0xe8) != *(int *)(param_2 + 0x114))) {
          uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar9 = (uint)lVar3 & 0xffff;
          lVar8 = *(longlong *)(param_2 + 0x120);
          if (*(longlong *)(param_2 + 0x120) == 0) {
            lVar8 = param_2 + 0x118;
          }
          iVar10 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_2 + 0x128) - 1U &
                                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9)
                                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              plVar7 = (longlong *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar10 * 0x14);
              if (*plVar7 == lVar3) {
                if ((plVar7 != (longlong *)0x0) && (plVar7 + 1 != (longlong *)0x0)) {
                  iVar10 = (int)plVar7[1];
                  *(int *)(lVar2 + lVar5 * 4) = iVar10;
                  if ((longlong)iVar10 != -1) {
                    *(int *)(*param_3 + (longlong)iVar10 * 4) = (int)lVar5;
                  }
                  goto LAB_141091851;
                }
                break;
              }
              iVar10 = *(int *)((longlong)plVar7 + 0xc);
            } while (iVar10 != -1);
          }
        }
        *(undefined4 *)(lVar2 + lVar5 * 4) = 0xffffffff;
      }
LAB_141091851:
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_3[1]);
  }
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_78);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410918d2 FUN_1410918d2 body=353 status=ok
// SIG undefined FUN_1410918d2(void)

void FUN_1410918d2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141091957;
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
LAB_141091957:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 141091a34 FUN_141091a34 body=493 status=ok
// SIG undefined FUN_141091a34(void)

void FUN_141091a34(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  lVar12 = param_1[5];
  if (lVar12 != 0) {
    if (DAT_14cacd190 == 0) {
      uVar3 = FUN_140002dac();
      DAT_14cacd190 = FUN_140002ddd(FUN_1463aa189,uVar3,L"MirrorTableRow");
      if (DAT_14cacd190 == 0) {
        return;
      }
    }
    if ((*(int *)(DAT_14cacd190 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cacd190 + 0x38) * 8)
        == DAT_14cacd190 + 0x30)) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c0))();
      iVar2 = (int)plVar4[5];
      if (iVar2 == 0) {
        uVar15 = 1;
        uVar13 = 0;
        iVar11 = 0;
        iVar5 = 0;
      }
      else {
        puVar9 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar9 = (uint *)(plVar4 + 2);
        }
        uVar14 = *puVar9;
        if (uVar14 == 0) {
          iVar5 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar5 = iVar2 + -1;
          }
          uVar13 = 0;
          uVar15 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar15 = uVar13;
          }
          iVar11 = 0;
          do {
            if (uVar15 == uVar13) {
              return;
            }
            iVar11 = iVar11 + 0x20;
            uVar14 = puVar9[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar13 = 0;
          iVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 < iVar2) {
        uVar14 = 0xffffffff;
        do {
          lVar12 = *plVar4 + (longlong)iVar5 * 0x18;
          (*(code *)*param_2)(param_2[1],lVar12,*(undefined8 *)(lVar12 + 8));
          uVar14 = ~(uint)uVar15 & uVar14;
          puVar9 = (uint *)plVar4[4];
          if ((uint *)plVar4[4] == (uint *)0x0) {
            puVar9 = (uint *)(plVar4 + 2);
          }
          iVar2 = (int)plVar4[5];
          iVar5 = (int)uVar13;
          lVar12 = (longlong)iVar5;
          uVar6 = puVar9[lVar12] & uVar14;
          if (uVar6 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar8 = iVar7;
            if (iVar7 < iVar5) {
              iVar8 = iVar5;
            }
            if (iVar7 <= iVar5) {
              return;
            }
            lVar10 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar6 = puVar9[lVar12 + lVar10 + 1];
              if (uVar6 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar8 - lVar12 == lVar10) {
                return;
              }
            }
            uVar13 = (ulonglong)(iVar5 + (int)lVar10 + 1);
            uVar14 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar5 < iVar2);
      }
    }
  }
  return;
}



// FUNCTION 141091c22 FUN_141091c22 body=3265 status=ok
// SIG undefined FUN_141091c22(void)

void FUN_141091c22(longlong param_1,char param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  int *piVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  undefined1 auStack_f8 [44];
  uint local_cc;
  ulonglong local_c8;
  uint *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != '\0') {
    puVar10 = (uint *)(param_1 + 0x58);
    puVar27 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar27 = puVar10;
    }
    uVar15 = *(uint *)(param_1 + 0x70);
    if (0x1f < uVar15 + 0x1f) {
      local_b8 = (longlong *)(param_1 + 8);
      lVar20 = 0;
      do {
        uVar28 = *puVar27;
        if (uVar28 != 0) {
          iVar24 = 0;
          if (uVar28 != 0) {
            for (; (uVar28 >> iVar24 & 1) == 0; iVar24 = iVar24 + 1) {
            }
          }
          if (((int)uVar15 <= iVar24 - (int)lVar20) || (iVar24 + 1 == (int)lVar20)) break;
          uVar25 = 0;
          local_78 = (uint *)0x0;
          local_70 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_6c = 0x80;
          iStack_68 = -1;
          local_64 = 0;
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
          uVar28 = *(uint *)(param_1 + 0x30);
          local_a8 = puVar10;
          if (uVar28 == 0) {
            uVar30 = 1;
            uVar13 = 0;
            uVar26 = 0;
LAB_141091da1:
            if (uVar13 != uVar28) {
              uVar15 = 0xffffffff;
              local_c8 = (ulonglong)uVar28;
              local_c0 = (uint *)(param_1 + 0x18);
              do {
                iVar24 = iStack_68;
                uVar17 = uStack_90;
                puVar31 = (undefined4 *)((longlong)(int)uVar13 * 0x20 + *local_b8);
                local_b0 = CONCAT44(local_b0._4_4_,uVar15);
                local_cc = uVar26;
                if (local_64 == 0) {
                  iVar24 = (int)uStack_90;
                  uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
                  if (uStack_90._4_4_ == iVar24) {
                    FUN_1447711aa(&local_98,uVar17 & 0xffffffff);
                  }
                  iVar9 = local_70;
                  if (local_70 == 0) {
                    iVar8 = -1;
                  }
                  else {
                    iVar8 = local_70 + 0x1e;
                    if (-1 < local_70 + -1) {
                      iVar8 = local_70 + -1;
                    }
                    iVar8 = iVar8 >> 5;
                  }
                  iVar14 = local_70 + 1;
                  iVar16 = local_70 + 0x1f;
                  if (-1 < local_70) {
                    iVar16 = local_70;
                  }
                  if (iVar16 >> 5 == iVar8) {
                    local_70 = iVar14;
                  }
                  else {
                    if ((int)local_6c <= local_70) {
                      if (local_70 + 0x20U < 0xa0) {
                        local_6c = 0x80;
                      }
                      else {
                        uVar15 = local_70 + 0x20U >> 5;
                        local_a0 = (ulonglong)uVar15;
                        if (local_6c + 0x1f < 0xa0) {
                          uVar28 = 4;
                          if (4 < uVar15) {
                            uVar28 = uVar15;
                          }
                        }
                        else {
                          uVar28 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
                        }
                        uVar17 = FUN_144a3809e(uVar28 << 2,0);
                        iVar8 = (int)(uVar17 >> 2);
                        local_6c = 0xffffffe0;
                        if ((int)local_a0 <= iVar8) {
                          local_6c = iVar8 << 5;
                        }
                      }
                      FUN_1446efbd8(local_88,local_70);
                      iVar14 = local_70 + 1;
                    }
                    iVar8 = iVar14 + 0x1f;
                    if (-1 < iVar14) {
                      iVar8 = iVar14;
                    }
                    local_70 = iVar14;
                    if (iVar14 % 0x20 != 0) {
                      puVar10 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar10 = local_88;
                      }
                      bVar12 = -(char)(iVar14 % 0x20);
                      puVar10[iVar8 >> 5] =
                           (puVar10[iVar8 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
                    }
                  }
                  lVar20 = (longlong)iVar24;
                  puVar10 = local_78;
                  if (local_78 == (uint *)0x0) {
                    puVar10 = local_88;
                  }
                  bVar12 = (byte)iVar9 & 0x1f;
                  puVar10[iVar16 >> 5] =
                       puVar10[iVar16 >> 5] & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
                }
                else {
                  lVar20 = (longlong)iStack_68;
                  iStack_68 = *(int *)(local_98 + 4 + lVar20 * 0x20);
                  local_64 = local_64 + -1;
                  if (local_64 != 0) {
                    *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x20) = 0xffffffff;
                  }
                }
                puVar10 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar10 = local_88;
                }
                iVar9 = iVar24 + 0x1f;
                if (-1 < iVar24) {
                  iVar9 = iVar24;
                }
                puVar10[iVar9 >> 5] = puVar10[iVar9 >> 5] | 1 << ((byte)iVar24 & 0x1f);
                lVar20 = lVar20 * 0x20;
                puVar1 = (undefined4 *)(local_98 + lVar20);
                uVar15 = puVar31[4];
                *(uint *)(local_98 + lVar20) = uVar15;
                uVar4 = puVar31[1];
                uVar5 = puVar31[2];
                uVar6 = puVar31[3];
                puVar3 = (undefined4 *)(local_98 + 8 + lVar20);
                *puVar3 = *puVar31;
                puVar3[1] = uVar4;
                puVar3[2] = uVar5;
                puVar3[3] = uVar6;
                *(undefined4 *)(local_98 + 0x18 + lVar20) = 0xffffffff;
                uVar28 = (int)uStack_90 - local_64;
                if ((uVar28 != 0) && (uVar28 != 1)) {
                  puVar11 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar11 = local_60;
                  }
                  iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1 & uVar15) * 4);
                  while (iVar9 != -1) {
                    puVar31 = (undefined4 *)(local_98 + (longlong)iVar9 * 0x20);
                    if (*(uint *)(local_98 + (longlong)iVar9 * 0x20) == uVar15) {
                      uVar4 = *puVar1;
                      uVar5 = puVar1[1];
                      uVar6 = puVar1[2];
                      uVar7 = puVar1[3];
                      *(undefined8 *)(puVar31 + 4) = *(undefined8 *)(puVar1 + 4);
                      *puVar31 = uVar4;
                      puVar31[1] = uVar5;
                      puVar31[2] = uVar6;
                      puVar31[3] = uVar7;
                      FUN_1476a80c2(&local_98,iVar24);
                      goto LAB_141091fa0;
                    }
                    iVar9 = puVar31[6];
                  }
                }
                if (uVar28 < 4) {
                  uVar26 = 1;
                }
                else {
                  uVar17 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
                  lVar20 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  uVar26 = 1 << ((byte)lVar20 & 0x1f);
                }
                if (((int)uVar28 < 1) || ((int)uVar26 <= (int)local_50)) {
                  uVar15 = local_50 - 1 & uVar15;
                  puVar1[7] = uVar15;
                  puVar11 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar11 = local_60;
                  }
                  puVar1[6] = *(undefined4 *)
                               (puVar11 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar15) * 4
                               );
                  puVar11 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar11 = local_60;
                  }
                  *(int *)(puVar11 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar15) * 4) =
                       iVar24;
                }
                else {
                  local_50 = uVar26;
                  if (local_58 != (undefined1 *)0x0) {
                    FUN_1446efa72(&local_58,0,0,4);
                  }
                  uVar15 = local_50;
                  if (local_50 == 1) {
                    if (local_58 != (undefined1 *)0x0) {
                      FUN_1446efa72(&local_58,0,0,4);
                    }
LAB_141092107:
                    uVar28 = 0;
                    do {
                      puVar11 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar11 = local_60;
                      }
                      *(undefined4 *)(puVar11 + (ulonglong)(local_50 + 0x7fffffff & uVar28) * 4) =
                           0xffffffff;
                      uVar28 = uVar28 + 1;
                    } while (uVar15 != uVar28);
                  }
                  else {
                    if (local_50 == 0) goto LAB_141091fa0;
                    FUN_1446efa72(&local_58,0,local_50,4);
                    if (0 < (int)uVar15) goto LAB_141092107;
                  }
                  if (local_70 == 0) {
                    uVar17 = 0;
                    uVar23 = 1;
                    iVar24 = 0;
                    iVar9 = 0;
                  }
                  else {
                    puVar10 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar10 = local_88;
                    }
                    uVar15 = *puVar10;
                    if (uVar15 == 0) {
                      iVar24 = local_70 + 0x1e;
                      if (-1 < local_70 + -1) {
                        iVar24 = local_70 + -1;
                      }
                      uVar17 = 0;
                      uVar23 = (ulonglong)(uint)(iVar24 >> 5);
                      if (iVar24 >> 5 < 1) {
                        uVar23 = uVar17;
                      }
                      iVar9 = 0;
                      do {
                        if (uVar23 == uVar17) goto LAB_141091fa0;
                        iVar9 = iVar9 + 0x20;
                        uVar15 = puVar10[uVar17 + 1];
                        uVar17 = uVar17 + 1;
                      } while (uVar15 == 0);
                    }
                    else {
                      uVar17 = 0;
                      iVar9 = 0;
                    }
                    uVar23 = (ulonglong)(-uVar15 & uVar15);
                    uVar32 = uVar23 * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    iVar24 = (iVar9 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                    if (local_70 <= iVar24) {
                      iVar24 = local_70;
                    }
                  }
                  if (iVar24 < local_70) {
                    uVar15 = 0xffffffff;
                    do {
                      lVar20 = (longlong)iVar24 * 0x20;
                      uVar32 = (longlong)(int)local_50 - 1U & (longlong)*(int *)(local_98 + lVar20);
                      iVar8 = (int)uVar32;
                      *(int *)(local_98 + 0x1c + lVar20) = iVar8;
                      puVar11 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar11 = local_60;
                      }
                      *(undefined4 *)(local_98 + 0x18 + lVar20) =
                           *(undefined4 *)(puVar11 + ((longlong)(int)local_50 - 1U & uVar32) * 4);
                      puVar11 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar11 = local_60;
                      }
                      *(int *)(puVar11 + ((longlong)iVar8 & (longlong)(int)local_50 - 1U) * 4) =
                           iVar24;
                      uVar15 = ~(uint)uVar23 & uVar15;
                      puVar10 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar10 = local_88;
                      }
                      iVar24 = (int)uVar17;
                      lVar20 = (longlong)iVar24;
                      uVar28 = puVar10[lVar20] & uVar15;
                      if (uVar28 == 0) {
                        iVar8 = local_70 + 0x1e;
                        if (-1 < local_70 + -1) {
                          iVar8 = local_70 + -1;
                        }
                        iVar8 = iVar8 >> 5;
                        iVar16 = iVar8;
                        if (iVar8 < iVar24) {
                          iVar16 = iVar24;
                        }
                        if (iVar8 <= iVar24) break;
                        lVar22 = 0;
                        while( true ) {
                          iVar9 = iVar9 + 0x20;
                          uVar28 = puVar10[lVar20 + lVar22 + 1];
                          if (uVar28 != 0) break;
                          lVar22 = lVar22 + 1;
                          if (iVar16 - lVar20 == lVar22) goto LAB_141091fa0;
                        }
                        uVar17 = (ulonglong)(iVar24 + (int)lVar22 + 1);
                        uVar15 = 0xffffffff;
                      }
                      uVar23 = (ulonglong)(-uVar28 & uVar28);
                      uVar32 = uVar23 * 2 + 1;
                      lVar20 = 0x3f;
                      if (uVar32 != 0) {
                        for (; uVar32 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                        }
                      }
                      iVar24 = (iVar9 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                    } while (iVar24 < local_70);
                  }
                }
LAB_141091fa0:
                uVar15 = (uint)local_b0 & ~(uint)uVar30;
                puVar10 = *(uint **)(param_1 + 0x28);
                if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
                  puVar10 = local_c0;
                }
                uVar28 = *(uint *)(param_1 + 0x30);
                iVar24 = (int)uVar25;
                lVar20 = (longlong)iVar24;
                uVar13 = puVar10[lVar20] & uVar15;
                uVar26 = local_cc;
                if (uVar13 == 0) {
                  iVar9 = uVar28 + 0x1e;
                  if (-1 < (int)(uVar28 - 1)) {
                    iVar9 = uVar28 - 1;
                  }
                  iVar9 = iVar9 >> 5;
                  uVar26 = local_cc + 0x20;
                  iVar8 = iVar9;
                  if (iVar9 < iVar24) {
                    iVar8 = iVar24;
                  }
                  if (iVar24 < iVar9) {
                    lVar22 = 0;
                    do {
                      uVar13 = puVar10[lVar20 + lVar22 + 1];
                      if (uVar13 != 0) {
                        uVar25 = (ulonglong)(iVar24 + (int)lVar22 + 1);
                        uVar15 = 0xffffffff;
                        goto LAB_14109201e;
                      }
                      uVar26 = uVar26 + 0x20;
                      lVar22 = lVar22 + 1;
                    } while (iVar8 - lVar20 != lVar22);
                    uVar15 = 0xffffffff;
                    iVar24 = iVar8;
                  }
                  uVar25 = (ulonglong)(iVar24 + 1);
                  uVar13 = uVar28;
                }
                else {
LAB_14109201e:
                  uVar30 = (ulonglong)(-uVar13 & uVar13);
                  uVar17 = uVar30 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  uVar13 = (uVar26 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  if ((int)uVar28 <= (int)uVar13) {
                    uVar13 = uVar28;
                  }
                }
              } while (uVar13 != (uint)local_c8);
              uVar15 = *(uint *)(param_1 + 0x70);
            }
          }
          else {
            puVar10 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar10 = (uint *)(param_1 + 0x18);
            }
            uVar13 = *puVar10;
            if (uVar13 != 0) {
              uVar25 = 0;
              uVar26 = 0;
LAB_141091d7b:
              uVar30 = (ulonglong)(-uVar13 & uVar13);
              uVar17 = uVar30 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar13 = (uVar26 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar28 <= (int)uVar13) {
                uVar13 = uVar28;
              }
              goto LAB_141091da1;
            }
            iVar24 = uVar28 + 0x1e;
            if (-1 < (int)(uVar28 - 1)) {
              iVar24 = uVar28 - 1;
            }
            uVar25 = 0;
            uVar30 = (ulonglong)(uint)(iVar24 >> 5);
            if (iVar24 >> 5 < 1) {
              uVar30 = uVar25;
            }
            uVar26 = 0;
            while (uVar30 != uVar25) {
              uVar26 = uVar26 + 0x20;
              uVar13 = puVar10[uVar25 + 1];
              uVar25 = uVar25 + 1;
              if (uVar13 != 0) goto LAB_141091d7b;
            }
          }
          puVar10 = local_a8;
          if (uVar15 == 0) {
            uVar25 = 1;
            iVar24 = 0;
            uVar28 = 0;
            puVar27 = (uint *)0x0;
LAB_1410923c4:
            if ((int)uVar28 < (int)uVar15) {
              local_c8 = param_1 + 0x40;
              uVar15 = 0xffffffff;
              do {
                local_cc = uVar15;
                if ((int)uStack_90 != local_64) {
                  puVar11 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar11 = local_60;
                  }
                  iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1 & uVar28) * 4);
                  while (iVar9 != -1) {
                    lVar20 = local_98 + (longlong)iVar9 * 0x20;
                    if (*(uint *)(local_98 + (longlong)iVar9 * 0x20) == uVar28) {
                      if (((lVar20 + 8U & 0xfffffffffffffff7) != 0) &&
                         (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
                        local_b0 = *(ulonglong *)(lVar20 + 8);
                        lVar20 = *(longlong *)(lVar20 + 0x10);
                        uVar15 = ((uint)(local_b0 >> 0x14) & 0xffff ^ (uint)(local_b0 >> 4)) *
                                 -0x7a143595;
                        uVar26 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                        uVar26 = uVar26 >> 0x10 ^ uVar26;
                        uVar15 = (uint)((ulonglong)lVar20 >> 0x10);
                        uVar13 = (uint)lVar20 & 0xffff;
                        uVar30 = *(ulonglong *)(param_1 + 0x48);
                        if (*(ulonglong *)(param_1 + 0x48) == 0) {
                          uVar30 = local_c8;
                        }
                        iVar9 = *(int *)(uVar30 + ((longlong)
                                                   (int)(((uint)lVar20 << 0x10 | uVar13) +
                                                         (int)((ulonglong)lVar20 >> 0x20) +
                                                         (uVar15 << 0x13 | uVar15 & 0xffff) +
                                                         (uVar13 >> 4) + uVar26 * 0x40 +
                                                         (uVar26 >> 2) + 0x9e3779b9 ^ uVar26) &
                                                  (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
                        local_c0 = puVar27;
                        if (iVar9 != -1) {
                          lVar22 = *local_b8;
                          goto LAB_14109252e;
                        }
                      }
                      break;
                    }
                    iVar9 = *(int *)(lVar20 + 0x18);
                  }
                }
LAB_14109257a:
                FUN_1410928e4(param_3,uVar28);
                uVar15 = local_cc & ~(uint)uVar25;
                puVar18 = *(uint **)(param_1 + 0x68);
                if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
                  puVar18 = puVar10;
                }
                iVar9 = *(int *)(param_1 + 0x70);
                iVar8 = (int)puVar27;
                lVar20 = (longlong)iVar8;
                uVar28 = puVar18[lVar20] & uVar15;
                if (uVar28 == 0) {
                  iVar16 = iVar9 + 0x1e;
                  if (-1 < iVar9 + -1) {
                    iVar16 = iVar9 + -1;
                  }
                  iVar16 = iVar16 >> 5;
                  iVar14 = iVar16;
                  if (iVar16 < iVar8) {
                    iVar14 = iVar8;
                  }
                  if (iVar16 <= iVar8) break;
                  lVar22 = 0;
                  while( true ) {
                    iVar24 = iVar24 + 0x20;
                    uVar28 = puVar18[lVar20 + lVar22 + 1];
                    if (uVar28 != 0) break;
                    lVar22 = lVar22 + 1;
                    if (iVar14 - lVar20 == lVar22) goto LAB_14109280d;
                  }
                  puVar27 = (uint *)(ulonglong)(iVar8 + (int)lVar22 + 1);
                  uVar15 = 0xffffffff;
                }
                uVar25 = (ulonglong)(-uVar28 & uVar28);
                uVar30 = uVar25 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar30 != 0) {
                  for (; uVar30 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                uVar28 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              } while ((int)uVar28 < iVar9);
            }
          }
          else {
            puVar18 = *(uint **)(param_1 + 0x68);
            if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
              puVar18 = local_a8;
            }
            uVar28 = *puVar18;
            if (uVar28 != 0) {
              iVar24 = 0;
              puVar27 = (uint *)0x0;
LAB_1410923a0:
              uVar25 = (ulonglong)(-uVar28 & uVar28);
              uVar30 = uVar25 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar28 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar15 <= (int)uVar28) {
                uVar28 = uVar15;
              }
              goto LAB_1410923c4;
            }
            iVar24 = uVar15 + 0x1e;
            if (-1 < (int)(uVar15 - 1)) {
              iVar24 = uVar15 - 1;
            }
            puVar27 = (uint *)0x0;
            puVar21 = (uint *)(ulonglong)(uint)(iVar24 >> 5);
            if (iVar24 >> 5 < 1) {
              puVar21 = puVar27;
            }
            iVar24 = 0;
            while (puVar21 != puVar27) {
              iVar24 = iVar24 + 0x20;
              uVar28 = puVar18[(longlong)puVar27 + 1];
              puVar27 = (uint *)((longlong)puVar27 + 1);
              if (uVar28 != 0) goto LAB_1410923a0;
            }
          }
LAB_14109280d:
          *(undefined4 *)(param_1 + 0x70) = 0;
          local_50 = 0;
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          uVar25 = uStack_90 >> 0x20;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          if ((int)uVar25 != 0) {
            FUN_1446f4a44(&local_98,0);
          }
          iStack_68 = 0xffffffff;
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
          break;
        }
        lVar20 = lVar20 + -0x20;
        puVar27 = puVar27 + 1;
      } while ((ulonglong)(uVar15 + 0x1f & 0xffffffe0) + lVar20 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14109252e:
  lVar29 = (longlong)iVar9 * 0x20;
  lVar2 = lVar22 + lVar29;
  if ((*(ulonglong *)(lVar22 + lVar29) != local_b0) ||
     (*(longlong *)(lVar22 + 8 + lVar29) != lVar20)) goto LAB_14109254b;
  iVar8 = *(int *)(uVar30 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
  if (iVar8 == iVar9) {
    piVar19 = (int *)(uVar30 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
  }
  else {
    do {
      piVar19 = (int *)(lVar22 + (longlong)iVar8 * 0x20 + 0x18);
      iVar8 = *piVar19;
    } while (iVar8 != iVar9);
  }
  *piVar19 = *(int *)(lVar2 + 0x18);
  FUN_141092924(local_b8);
  goto LAB_14109257a;
LAB_14109254b:
  iVar9 = *(int *)(lVar2 + 0x18);
  if (iVar9 == -1) goto LAB_14109257a;
  goto LAB_14109252e;
}



// FUNCTION 1410928e4 FUN_1410928e4 body=64 status=ok
// SIG undefined FUN_1410928e4(void)

void FUN_1410928e4(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((-1 < (int)param_2) && (lVar2 = *param_1, (int)param_2 < *(int *)(lVar2 + 0x58))) {
    lVar3 = lVar2 + 0x40;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x50);
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4);
    if ((uVar1 >> (param_2 & 0x1f) & 1) != 0) {
      *(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) = uVar1 & ~(1 << ((byte)param_2 & 0x1f));
    }
  }
  return;
}



// FUNCTION 141092924 FUN_141092924 body=114 status=ok
// SIG undefined FUN_141092924(void)

void FUN_141092924(longlong *param_1,int param_2)

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



// FUNCTION 141092996 FUN_141092996 body=179 status=ok
// SIG undefined FUN_141092996(void)

undefined8 * FUN_141092996(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac7ac90;
  FUN_141092a49(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141092a49 FUN_141092a49 body=55 status=ok
// SIG undefined FUN_141092a49(void)

void FUN_141092a49(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x100);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141092a80 FUN_141092a80 body=103 status=ok
// SIG undefined FUN_141092a80(void)

ulonglong FUN_141092a80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_141092aca:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141092aca;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 141092af4 FUN_141092af4 body=118 status=ok
// SIG undefined FUN_141092af4(void)

void FUN_141092af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = param_2;
  FUN_140f15190(&local_28,param_3);
  FUN_1447cd2ec(param_1,&local_30);
  FUN_140ee7917(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141092b70 FUN_141092b70 body=221 status=ok
// SIG undefined FUN_141092b70(void)

longlong FUN_141092b70(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabc6c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147813c4d;
    local_40 = FUN_14636661c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaSource",&DAT_14cabc6c0,FUN_1463665fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc6c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141092c54 FUN_141092c54 body=221 status=ok
// SIG undefined FUN_141092c54(void)

longlong FUN_141092c54(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0c0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492f3f90;
    local_40 = FUN_14671d7ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeBaseNodeContainer",&DAT_14cc0c0b8,
                  FUN_14671d784);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0c0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141092d32 FUN_141092d32 body=234 status=ok
// SIG undefined FUN_141092d32(void)

ulonglong FUN_141092d32(LPCRITICAL_SECTION param_1,longlong param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  iVar3 = param_1[1].LockCount;
  if (0 < iVar3) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      p_Var1 = param_1[1].DebugInfo;
      if ((*(int *)((longlong)&p_Var1->CriticalSection + lVar7) != 0) &&
         (plVar4 = *(longlong **)((longlong)&p_Var1->Type + lVar7), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_40);
        if (local_40 == param_2) {
          if (*(int *)((longlong)&p_Var1->CriticalSection + lVar7) != 0) {
            plVar4 = (longlong *)((longlong)&p_Var1->Type + lVar7);
            puVar2 = (undefined8 *)*plVar4;
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,0);
              FUN_1446efa72(plVar4,0,0,0x10);
              *(undefined4 *)(plVar4 + 1) = 0;
            }
          }
          FUN_14109be94(param_1,0);
          uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_141092de8;
        }
        iVar3 = param_1[1].LockCount;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < iVar3);
  }
  uVar5 = 0;
LAB_141092de8:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141092e2a FUN_141092e2a body=96 status=ok
// SIG undefined FUN_141092e2a(void)

ulonglong FUN_141092e2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_141092e6d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141092e6d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 141092e92 FUN_141092e92 body=212 status=ok
// SIG undefined FUN_141092e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141092e92(void)

{
  if ((DAT_14ca4d06f & 2) == 0) {
    DAT_14ca4d06f = DAT_14ca4d06f | 2;
    _DAT_14ca4d010 = L"FMeshMaterialShader";
    _DAT_14ca4d028 = FUN_146826540;
    _DAT_14ca4d030 = FUN_146825d77;
    _DAT_14ca4d038 = FUN_146825fd6;
    _DAT_14ca4d040 = FUN_1407e02ea;
    _DAT_14ca4d048 = FUN_146826273;
    _DAT_14ca4d020 = FUN_1472ea1d2;
    _DAT_14ca4d060 = 0xffffffff00000108;
    _DAT_14ca4d068 = 8;
    DAT_14ca4d06c = 0;
    _DAT_14ca4d050 = &LAB_1472ea20a;
    FUN_1457ef814();
    FUN_1457ef78e();
    FUN_1407e00cc(&DAT_14ca4d008);
  }
  return &DAT_14ca4d008;
}



// FUNCTION 141092f66 FUN_141092f66 body=382 status=ok
// SIG undefined FUN_141092f66(void)

void FUN_141092f66(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined8 *_Src;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x890);
  if (((iVar3 != 0) && (iVar4 = *(int *)(param_1 + 0x418), -1 < iVar4)) && (iVar4 < iVar3)) {
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x888) +
             (longlong)(~(iVar4 % iVar3) + iVar3) * 0x28);
    bVar2 = *(byte *)(puVar1 + 4);
    local_40 = *(ushort *)(puVar1 + 3);
    if (local_40 < 0x19) {
      pppuVar7 = local_58;
      _Src = puVar1;
    }
    else {
      pppuVar7 = (undefined8 ***)FUN_14001cc68(local_40,0);
      _Src = (undefined8 *)*puVar1;
      local_58[0] = pppuVar7;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar5 == (code *)0x0) {
      memcpy(pppuVar7,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
    }
    else {
      (*pcVar5)();
    }
    local_38 = *(byte *)(puVar1 + 4);
    local_30 = 0;
    uStack_28 = 0;
    iVar3 = *(int *)(param_2 + 0x388);
    *(uint *)(param_2 + 0x388) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x38c) < iVar3 + 1U) {
      FUN_14052e0a0(param_2,iVar3);
    }
    lVar6 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar6 = param_2;
    }
    FUN_1410930e6((longlong)iVar3 * 0x38 + lVar6,local_58);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pppuVar7 = local_58;
      if (0x18 < local_40) {
        pppuVar7 = (undefined8 ***)local_58[0];
      }
      (*pcVar5)(pppuVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410930e6 FUN_1410930e6 body=147 status=ok
// SIG undefined FUN_1410930e6(void)

undefined8 * FUN_1410930e6(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  if (uVar2 < 0x19) {
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b8 + uVar4);
    if ((pcVar5 == (code *)0x0) &&
       (pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4), pcVar5 == (code *)0x0)) {
      memcpy(param_1,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar5)(param_1,param_2);
    }
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  return param_1;
}



// FUNCTION 14109317a FUN_14109317a body=517 status=ok
// SIG undefined FUN_14109317a(void)

ulonglong FUN_14109317a(longlong param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong unaff_RDI;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (*(int *)(param_1 + 0xb20) != 0) {
    puVar4 = *(uint **)(param_1 + 0xb30);
    uVar1 = *puVar4;
    if ((uint)(param_2 + *(int *)(*(longlong *)(param_1 + 0xb38) + (ulonglong)uVar1 * 4)) <=
        *(uint *)(param_1 + 0x8b8)) {
      uVar11 = *(int *)(param_1 + 0xb20) - 1;
      *(uint *)(param_1 + 0xb20) = uVar11;
      *puVar4 = puVar4[uVar11];
      *(undefined4 *)(*(longlong *)(param_1 + 0xb40) + (ulonglong)**(uint **)(param_1 + 0xb30) * 4)
           = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0xb40) + (ulonglong)uVar1 * 4) = 0xffffffff;
      uVar11 = *(uint *)(param_1 + 0xb20);
      if (1 < uVar11) {
        uVar2 = **(uint **)(param_1 + 0xb30);
        unaff_RDI = 0;
        uVar8 = 1;
        uVar10 = 0;
        do {
          uVar7 = (uint)uVar10;
          uVar9 = (int)unaff_RDI + 2;
          lVar12 = *(longlong *)(param_1 + 0xb30);
          lVar13 = *(longlong *)(param_1 + 0xb38);
          uVar6 = (uint)uVar8;
          if ((uVar9 < uVar11) &&
             (*(uint *)(lVar13 + (ulonglong)*(uint *)(lVar12 + (ulonglong)uVar9 * 4) * 4) <=
              *(uint *)(lVar13 + (ulonglong)*(uint *)(lVar12 + uVar8 * 4) * 4))) {
            uVar6 = uVar9;
          }
          uVar11 = *(uint *)(lVar12 + (ulonglong)uVar6 * 4);
          unaff_RDI = (ulonglong)uVar11;
          if (*(uint *)(lVar13 + (ulonglong)uVar2 * 4) <= *(uint *)(lVar13 + unaff_RDI * 4)) {
            if (uVar7 != 0) goto LAB_1410932a7;
            goto LAB_1410932c1;
          }
          *(uint *)(lVar12 + uVar10 * 4) = uVar11;
          *(uint *)(*(longlong *)(param_1 + 0xb40) +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xb30) + uVar10 * 4) * 4) = uVar7;
          unaff_RDI = (ulonglong)(uVar6 * 2);
          uVar7 = uVar6 * 2 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar11 = *(uint *)(param_1 + 0xb20);
          uVar10 = (ulonglong)uVar6;
        } while (uVar7 < uVar11);
        lVar12 = *(longlong *)(param_1 + 0xb30);
        uVar10 = (ulonglong)uVar6;
        uVar7 = uVar6;
LAB_1410932a7:
        *(uint *)(lVar12 + uVar10 * 4) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0xb40) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xb30) + uVar10 * 4) * 4) = uVar7;
      }
LAB_1410932c1:
      uVar10 = CONCAT71((int7)(unaff_RDI >> 8),1);
      if ((-1 < *(int *)(*(longlong *)(param_1 + 0x648) + (longlong)(int)uVar1 * 0x50)) &&
         (lVar13 = *(longlong *)(param_1 + 0x648) + (longlong)(int)uVar1 * 0x50,
         -1 < *(int *)(lVar13 + 4))) {
        cVar5 = '\0';
        FUN_1447f5dec(param_1,0,lVar13);
        uVar1 = *(uint *)(lVar13 + 0x24);
        uVar8 = (ulonglong)(*(uint *)(param_3 + 6) & uVar1);
        lVar13 = param_3[3];
        if (lVar13 != 0) {
          if (*(char *)(lVar13 + uVar8) < '\0') {
            cVar5 = '\0';
          }
          else {
            cVar5 = '\0';
            do {
              if (*(uint *)(param_3[4] + uVar8 * 4) == uVar1) goto LAB_1410931b4;
              uVar8 = (ulonglong)((int)uVar8 + 1);
              cVar5 = cVar5 + '\x01';
            } while (cVar5 <= *(char *)(lVar13 + uVar8));
          }
        }
        FUN_144776322(param_3 + 2,cVar5,param_3 + 2,uVar8,uVar1,uVar1);
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_144a78748(param_3,iVar3);
        }
        *(uint *)(*param_3 + (longlong)iVar3 * 4) = uVar1;
      }
      goto LAB_1410931b4;
    }
  }
  uVar10 = 0;
LAB_1410931b4:
  return uVar10 & 0xffffffff;
}



// FUNCTION 141093380 FUN_141093380 body=2742 status=ok
// SIG undefined FUN_141093380(void)

void FUN_141093380(longlong param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  float fVar29;
  undefined1 auStack_1b8 [32];
  uint local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  code *local_150;
  int local_13c;
  undefined8 *local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  uint local_114;
  uint *local_110;
  ulonglong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((((*(int *)(param_1 + 0x2c) != 0) && (uVar26 = *(uint *)(param_1 + 0x28), -1 < (int)uVar26))
       && ((int)uVar26 < DAT_14c9647dc)) &&
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
       plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0x2c))))) &&
     ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar15;
    }
    else {
      lVar20 = 0;
    }
    plVar15 = *(longlong **)(lVar20 + 0x1f0);
    if (plVar15 != (longlong *)0x0) {
      if (DAT_14cb5e538 == 0) {
        local_160 = &local_e8;
        local_e8 = &LAB_1417c5d06;
        local_150 = FUN_14081d0ea;
        local_158 = &LAB_1417ad04a;
        local_168 = &LAB_1486a7af7;
        local_170 = &LAB_1464e1631;
        local_178 = &DAT_149e063b2;
        local_180 = 0;
        local_188 = 0x1000000c;
        local_190 = 8;
        local_198 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
        plVar15 = *(longlong **)(lVar20 + 0x1f0);
        if (plVar15 == (longlong *)0x0) goto LAB_141093526;
      }
      if (((DAT_14cb5e538 != 0) && (lVar20 = plVar15[2], lVar20 != 0)) &&
         ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar20 + 0x38) &&
          ((*(longlong *)
             (*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
            DAT_14cb5e538 + 0x30 &&
           (cVar8 = (**(code **)(*plVar15 + 0x498))(), (byte)(cVar8 - 6U) < 3)))))) {
        uVar26 = *(uint *)(param_1 + 0x78);
        if (uVar26 == 0) {
          uVar17 = 1;
          uVar25 = 0;
          uVar9 = 0;
          iVar18 = 0;
        }
        else {
          puVar28 = *(uint **)(param_1 + 0x70);
          if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
            puVar28 = (uint *)(param_1 + 0x60);
          }
          uVar9 = *puVar28;
          if (uVar9 == 0) {
            iVar18 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar18 = uVar26 - 1;
            }
            uVar25 = 0;
            uVar17 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar17 = uVar25;
            }
            iVar18 = 0;
            do {
              if (uVar17 == uVar25) goto LAB_141093526;
              iVar18 = iVar18 + 0x20;
              uVar9 = puVar28[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar25 = 0;
            iVar18 = 0;
          }
          uVar17 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar17 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar9 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar9) {
            uVar9 = uVar26;
          }
        }
        if (uVar9 != uVar26) {
          uVar21 = 0xffffffff;
          local_130 = (ulonglong)uVar26;
          local_120 = param_1;
          local_110 = (uint *)(param_1 + 0x60);
          do {
            lVar20 = *(longlong *)(param_1 + 0x50);
            lVar10 = (longlong)(int)uVar9 * 0x78;
            puVar14 = (undefined8 *)(lVar20 + lVar10);
            plVar15 = (longlong *)(lVar20 + lVar10 + 8);
            puVar28 = (uint *)(lVar20 + lVar10 + 0x18);
            local_c8 = 0;
            uStack_c0 = 0;
            iVar24 = *(int *)(lVar20 + lVar10 + 0x30);
            local_13c = iVar18;
            local_128 = uVar17;
            local_114 = uVar21;
            local_108 = uVar25;
            if (iVar24 == 0) {
              uVar17 = 1;
              uVar25 = 0;
              iVar18 = 0;
              iVar27 = 0;
            }
            else {
              puVar11 = (uint *)puVar14[5];
              if ((uint *)puVar14[5] == (uint *)0x0) {
                puVar11 = puVar28;
              }
              uVar26 = *puVar11;
              if (uVar26 == 0) {
                iVar18 = iVar24 + 0x1e;
                if (-1 < iVar24 + -1) {
                  iVar18 = iVar24 + -1;
                }
                uVar25 = 0;
                uVar9 = iVar18 >> 5;
                if (iVar18 >> 5 < 1) {
                  uVar9 = 0;
                }
                iVar27 = 0;
                do {
                  if (uVar9 == uVar25) goto LAB_14109368d;
                  iVar27 = iVar27 + 0x20;
                  uVar26 = puVar11[uVar25 + 1];
                  uVar25 = uVar25 + 1;
                } while (uVar26 == 0);
              }
              else {
                uVar25 = 0;
                iVar27 = 0;
              }
              uVar17 = (ulonglong)(-uVar26 & uVar26);
              uVar1 = uVar17 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar18 = (iVar27 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar24 <= iVar18) {
                iVar18 = iVar24;
              }
            }
            if (iVar18 == iVar24) {
LAB_14109368d:
              cVar8 = FUN_144904448();
              iVar18 = local_13c;
              uVar26 = (uint)local_130;
              uVar9 = (uint)local_128;
              if (cVar8 != '\0') {
                FUN_14072d42a(puVar14 + 0xb,0);
                FUN_1457ef98c(plVar15);
              }
            }
            else {
              uVar26 = 0xffffffff;
              iVar13 = iVar24;
              local_138 = puVar14;
              do {
                uVar7 = uStack_c0;
                uVar1 = *(ulonglong *)(*plVar15 + (longlong)iVar18 * 0x10);
                if (((((uVar1 >> 0x20 != 0) && (uVar9 = (uint)uVar1, -1 < (int)uVar9)) &&
                     ((int)uVar9 < DAT_14c9647dc)) &&
                    ((plVar19 = (longlong *)
                                ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8))),
                     plVar19 != (longlong *)0x0 && ((int)plVar19[2] == (int)(uVar1 >> 0x20))))) &&
                   ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) {
                  if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                    lVar20 = *plVar19;
                  }
                  else {
                    lVar20 = 0;
                  }
                  uVar5 = *(undefined8 *)(lVar20 + 0x260);
                  uVar6 = *(undefined8 *)(lVar20 + 0x268);
                  uVar12 = *(undefined8 *)(lVar20 + 0x270);
                  lVar20 = (longlong)(int)uStack_c0;
                  uVar9 = (int)uStack_c0 + 1;
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
                  if (uStack_c0._4_4_ < uVar9) {
                    FUN_144796b16(&local_c8,uVar7 & 0xffffffff);
                    puVar14 = local_138;
                  }
                  lVar20 = lVar20 * 0x80;
                  *(undefined8 *)(local_c8 + lVar20) = 0;
                  ((undefined8 *)(local_c8 + lVar20))[1] = 0;
                  puVar2 = (undefined4 *)(local_c8 + 0x10 + lVar20);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  puVar2[2] = 0;
                  puVar2[3] = 0x3ff00000;
                  puVar3 = (undefined8 *)(local_c8 + 0x20 + lVar20);
                  *puVar3 = uVar5;
                  puVar3[1] = uVar6;
                  puVar3 = (undefined8 *)(local_c8 + 0x30 + lVar20);
                  *puVar3 = uVar12;
                  puVar3[1] = 0;
                  puVar3 = (undefined8 *)(local_c8 + 0x40 + lVar20);
                  *puVar3 = 0x3ff0000000000000;
                  puVar3[1] = 0x3ff0000000000000;
                  puVar3 = (undefined8 *)(local_c8 + 0x50 + lVar20);
                  *puVar3 = 0x3ff0000000000000;
                  puVar3[1] = 0;
                  *(undefined8 *)(local_c8 + 0x60 + lVar20) = 0x3f800000;
                  *(undefined2 *)(local_c8 + 0x68 + lVar20) = 0;
                  *(undefined8 *)(local_c8 + 0x6c + lVar20) = 0;
                  iVar13 = *(int *)(puVar14 + 6);
                }
                param_1 = local_120;
                uVar26 = uVar26 & ~(uint)uVar17;
                puVar11 = (uint *)puVar14[5];
                if ((uint *)puVar14[5] == (uint *)0x0) {
                  puVar11 = puVar28;
                }
                iVar18 = (int)uVar25;
                lVar20 = (longlong)iVar18;
                uVar9 = puVar11[lVar20] & uVar26;
                if (uVar9 == 0) {
                  iVar22 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar22 = iVar13 + -1;
                  }
                  iVar22 = iVar22 >> 5;
                  iVar27 = iVar27 + 0x20;
                  iVar23 = iVar22;
                  if (iVar22 < iVar18) {
                    iVar23 = iVar18;
                  }
                  if (iVar18 < iVar22) {
                    lVar10 = 0;
                    do {
                      uVar9 = puVar11[lVar20 + lVar10 + 1];
                      if (uVar9 != 0) {
                        uVar25 = (ulonglong)(iVar18 + (int)lVar10 + 1);
                        uVar26 = 0xffffffff;
                        goto LAB_141093857;
                      }
                      iVar27 = iVar27 + 0x20;
                      lVar10 = lVar10 + 1;
                    } while (iVar23 - lVar20 != lVar10);
                    uVar26 = 0xffffffff;
                    lVar20 = (longlong)iVar23;
                  }
                  uVar25 = lVar20 + 1U & 0xffffffff;
                  puVar14 = local_138;
                  iVar18 = iVar13;
                }
                else {
LAB_141093857:
                  uVar17 = (ulonglong)(-uVar9 & uVar9);
                  uVar1 = uVar17 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar18 = (iVar27 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  if (iVar13 <= iVar18) {
                    iVar18 = iVar13;
                  }
                }
              } while (iVar18 != iVar24);
              if ((int)uStack_c0 < 1) goto LAB_14109368d;
              plVar15 = puVar14 + 0xb;
              cVar8 = FUN_144904448(plVar15);
              iVar18 = local_13c;
              uVar26 = (uint)local_130;
              uVar9 = (uint)local_128;
              if (cVar8 == '\0') {
                lVar20 = *(longlong *)(param_1 + 0x40);
                if (lVar20 != 0) {
                  FUN_1400021e4(local_138,&local_e8);
                  local_198 = local_198 & 0xffffff00;
                  FUN_14084a140(lVar20,&local_d0,&local_e8,0);
                  if (local_e8 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_d0 != (longlong *)0x0) {
                    FUN_144904532(local_d0,&local_c8);
                    puVar14 = local_138;
                    local_e8 = (undefined1 *)*local_138;
                    local_e0 = 0;
                    uStack_d8 = 0;
                    local_198 = 0;
                    FUN_14071ab80(local_d0,&local_100,&local_e8,param_1);
                    puVar14[0xb] = local_100;
                    puVar14[0xc] = local_f8;
                    puVar14[0xd] = local_f0;
                    plVar19 = local_d0;
                    if (local_d0 != (longlong *)0x0) goto LAB_1410939a8;
                  }
                }
LAB_1410939d2:
                plVar15 = (longlong *)*plVar15;
                if (((plVar15 != (longlong *)0x0) && (local_138[0xc] != -1)) &&
                   (*plVar15 == local_138[0xc])) {
                  *(int *)(plVar15 + 0x21) = (int)plVar15[0x21] + 1;
                  lVar20 = FUN_1449e3f1e();
                  if (lVar20 != 0) {
                    fVar29 = (float)(int)uStack_c0;
                    lVar10 = *(longlong *)(lVar20 + 0x3d8);
                    if (lVar10 == 0) {
                      uVar12 = FUN_1407f787c();
                      lVar10 = FUN_14477b664(uVar12);
                      *(longlong *)(lVar20 + 0x3d8) = lVar10;
                    }
                    lVar16 = *(longlong *)(lVar20 + 0x3e0);
                    if (lVar16 == 0) {
                      if (lVar10 == 0) {
                        lVar16 = 0;
                      }
                      else {
                        lVar16 = 0;
                        if (*(longlong *)(lVar20 + 0x3d0) != 0) {
                          plVar19 = *(longlong **)(lVar10 + 0xb8);
                          if ((plVar19 == (longlong *)0x0) ||
                             (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
                            lVar16 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar19 + 0x110))(plVar19);
                            lVar16 = FUN_144aff482(uVar12,(longlong *)(lVar20 + 0x3d0));
                          }
                          *(longlong *)(lVar20 + 0x3e0) = lVar16;
                        }
                      }
                    }
                    local_198 = local_198 & 0xffffff00;
                    FUN_1447997cc(plVar15,lVar16,fVar29,0);
                  }
                  param_1 = local_120;
                  *(int *)(plVar15 + 0x21) = (int)plVar15[0x21] + -1;
                  if (((int)plVar15[0x26] < 1) &&
                     (FUN_1400847bc(plVar15 + 0x17,0), (int)plVar15[0x21] == 0)) {
                    FUN_140087e46(plVar15);
                    if (*plVar15 != -1) {
                      if (DAT_14cb259f8 == 0) goto LAB_1410936b5;
                      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar15);
                    }
                    if (DAT_14cb259f8 != 0) {
                      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar15);
                    }
                  }
                }
              }
              else {
                plVar19 = (longlong *)*plVar15;
                if (plVar19 != (longlong *)0x0) {
                  if ((local_138[0xc] != -1) && (*plVar19 == local_138[0xc])) {
                    *(int *)(plVar19 + 0x21) = (int)plVar19[0x21] + 1;
                    FUN_144904532(plVar19,&local_c8);
LAB_1410939a8:
                    *(int *)(plVar19 + 0x21) = (int)plVar19[0x21] + -1;
                    if (((int)plVar19[0x26] < 1) &&
                       (FUN_1400847bc(plVar19 + 0x17,0), (int)plVar19[0x21] == 0)) {
                      FUN_140087e46(plVar19);
                      if (*plVar19 != -1) {
                        if (DAT_14cb259f8 == 0) goto LAB_1410939d2;
                        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar19);
                      }
                      if (DAT_14cb259f8 != 0) {
                        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar19);
                      }
                    }
                  }
                  goto LAB_1410939d2;
                }
              }
            }
LAB_1410936b5:
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            uVar21 = local_114 & ~uVar9;
            puVar28 = *(uint **)(param_1 + 0x70);
            if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
              puVar28 = local_110;
            }
            uVar4 = *(uint *)(param_1 + 0x78);
            iVar24 = (int)local_108;
            lVar20 = (longlong)iVar24;
            uVar9 = puVar28[lVar20] & uVar21;
            uVar25 = local_108;
            if (uVar9 == 0) {
              iVar27 = uVar4 + 0x1e;
              if (-1 < (int)(uVar4 - 1)) {
                iVar27 = uVar4 - 1;
              }
              iVar27 = iVar27 >> 5;
              iVar18 = iVar18 + 0x20;
              iVar13 = iVar27;
              if (iVar27 < iVar24) {
                iVar13 = iVar24;
              }
              if (iVar24 < iVar27) {
                lVar10 = 0;
                do {
                  uVar9 = puVar28[lVar20 + lVar10 + 1];
                  if (uVar9 != 0) {
                    uVar25 = (ulonglong)(iVar24 + (int)lVar10 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_14109374b;
                  }
                  iVar18 = iVar18 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar13 - lVar20 != lVar10);
                uVar21 = 0xffffffff;
                iVar24 = iVar13;
              }
              uVar25 = (ulonglong)(iVar24 + 1);
              uVar26 = (uint)local_130;
              uVar17 = local_128;
              param_1 = local_120;
              uVar9 = uVar4;
            }
            else {
LAB_14109374b:
              uVar17 = (ulonglong)(-uVar9 & uVar9);
              uVar1 = uVar17 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar9 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar4 <= (int)uVar9) {
                uVar9 = uVar4;
              }
            }
          } while (uVar9 != uVar26);
        }
      }
    }
  }
LAB_141093526:
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141093e38 FUN_141093e38 body=127 status=ok
// SIG undefined FUN_141093e38(void)

void FUN_141093e38(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_3,0);
  lVar2 = *(longlong *)(param_3 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_3,0);
    lVar2 = *(longlong *)(param_3 + 0x30);
  }
  if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
    uVar1 = FUN_140d47262();
    FUN_1446e7478(param_3 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 141093eb8 FUN_141093eb8 body=73 status=ok
// SIG undefined FUN_141093eb8(void)

void FUN_141093eb8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181ad18(&DAT_14cb26350);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_14acb7a60;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 141093f02 FUN_141093f02 body=36 status=ok
// SIG undefined FUN_141093f02(void)

undefined8 FUN_141093f02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141093f26 FUN_141093f26 body=99 status=ok
// SIG undefined FUN_141093f26(void)

void FUN_141093f26(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_141093f8a(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141093f8a FUN_141093f8a body=131 status=ok
// SIG undefined FUN_141093f8a(void)

void FUN_141093f8a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14b42d5c4);
  iVar2 = FUN_1448332aa(plVar1,&DAT_14b42d5c4);
  if ((iVar2 < 0) && ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 1) != 0)) {
    (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a1c8bcc);
    switchD_143c3d4dc::caseD_20(param_1,param_2);
    return;
  }
  FUN_140a6acaa(param_1,param_2);
  return;
}



// FUNCTION 14109400e FUN_14109400e body=293 status=ok
// SIG undefined FUN_14109400e(void)

void FUN_14109400e(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  byte *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  int local_38;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)(uint)param_3 < *(int *)(*(longlong *)(param_1 + 0x30) + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xbe8) + 8 +
              (ulonglong)param_3 * 0x80 + (ulonglong)param_3 * 8);
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  local_29 = param_3;
  (**(code **)(*plVar2 + 0x340))(plVar2,local_40);
  if (local_38 != 0) {
    if (local_38 < 2) {
      local_41 = false;
    }
    else if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x1c8) & 2) == 0) {
      iVar1 = (**(code **)(*plVar2 + 0x3c8))(plVar2);
      local_41 = iVar1 == 1;
    }
    else {
      local_41 = true;
    }
    local_58 = &local_41;
    local_68 = &local_29;
    local_70 = param_2;
    local_60 = local_40;
    local_50 = param_1;
    FUN_141094134(&local_70,&DAT_14cbe7708);
    FUN_141094134(&local_70,&DAT_14cbe7710);
    FUN_141094134(&local_70,&DAT_14cbe7718);
    FUN_141094134(&local_70,&DAT_14cbe7720);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141094134 FUN_141094134 body=715 status=ok
// SIG undefined FUN_141094134(void)

void FUN_141094134(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  int local_b0;
  undefined1 local_ac;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_1[4];
  lVar3 = (longlong)*(int *)(*param_1 + 0x88);
  local_138 = param_2;
  if (lVar3 != 0) {
    plVar8 = *(longlong **)(*param_1 + 0x80);
    local_128 = plVar8 + lVar3 * 0x1b;
    do {
      if (((*plVar8 == *local_138) &&
          ((*(uint *)(plVar8 + 0xe) >> (*(byte *)param_1[1] & 0x1f) & 1) != 0)) &&
         (0 < *(int *)(param_1[2] + 8))) {
        lVar3 = 0;
        do {
          local_120 = *plVar8;
          local_118 = plVar8[1];
          local_110 = (undefined4)plVar8[2];
          uStack_10c = *(undefined4 *)((longlong)plVar8 + 0x14);
          uStack_108 = (undefined4)plVar8[3];
          uStack_104 = *(undefined4 *)((longlong)plVar8 + 0x1c);
          local_100 = (void *)0x0;
          local_f8 = (int)plVar8[5];
          lVar4 = (longlong)local_f8;
          _Src = (void *)plVar8[4];
          if (lVar4 == 0) {
            local_f4 = 0;
          }
          else {
            FUN_1446dd670(&local_100,local_f8,0);
            memcpy(local_100,_Src,lVar4 * 2);
          }
          local_f0 = 0;
          iVar1 = (int)plVar8[7];
          lVar4 = plVar8[6];
          local_e8 = iVar1;
          if (iVar1 == 0) {
            local_e4 = 0;
          }
          else {
            FUN_1405bd402(&local_f0,iVar1,0);
            FUN_1405bd2e2(local_f0,lVar4,iVar1);
          }
          local_e0 = plVar8[8];
          local_d8 = (undefined4)plVar8[9];
          local_d0 = 0;
          plVar5 = plVar8 + 0xb;
          plVar6 = local_c8;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar6 = *plVar5;
            plVar5 = plVar5 + 1;
            plVar6 = plVar6 + 1;
          }
          local_c8[0] = *(longlong *)(*(longlong *)param_1[2] + lVar3 * 8);
          lVar3 = lVar3 + 1;
          local_b8 = 0;
          if (*(char *)param_1[3] != '\0') {
            local_b8 = (undefined4)lVar3;
          }
          local_b0 = 1 << (*(byte *)param_1[1] & 0x1f);
          cVar2 = FUN_14144eb06(*param_1,&local_120);
          if (cVar2 == '\0') {
            FUN_140da8596(*param_1,&local_120,local_ac,*(undefined1 *)param_1[1]);
          }
          if (local_f0 != 0) {
            FUN_1400020a8();
          }
          if (local_100 != (void *)0x0) {
            FUN_1400020a8();
          }
        } while (lVar3 < *(int *)(param_1[2] + 8));
      }
      plVar8 = plVar8 + 0x1b;
    } while (plVar8 != local_128);
  }
  if (*(char *)(local_130 + 0xe5) == '\0') {
    lVar3 = (longlong)*(int *)(*param_1 + 0x98);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(*param_1 + 0x90);
      lVar7 = 0;
      do {
        if ((*(longlong *)(lVar4 + lVar7) == *local_138) && (*(int *)(lVar4 + 0x18 + lVar7) != 0)) {
          *(undefined1 *)(local_130 + 0xe5) = 1;
          break;
        }
        lVar7 = lVar7 + 0xf0;
      } while (lVar3 * 0xf0 - lVar7 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141094400 FUN_141094400 body=238 status=ok
// SIG undefined FUN_141094400(void)

void FUN_141094400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_c0;
  undefined2 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x71) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_b8 = *(undefined2 *)(lVar2 + 0xc);
    local_b0 = *(undefined2 *)(lVar1 + 0x70);
    local_a0 = 1;
    local_98 = 0;
    local_c0 = &PTR_FUN_14a4c7280;
    local_a8 = param_1 + 8;
    local_90 = local_b8;
    local_c8 = FUN_1410944f0();
    FUN_1410945d6(&local_c0,local_88,*(undefined2 *)(lVar1 + 0xf6));
    FUN_141094704(local_88,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410944f0 FUN_1410944f0 body=228 status=ok
// SIG undefined FUN_1410944f0(void)

longlong FUN_1410944f0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab5f70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633bf30;
    local_38 = &LAB_14766252d;
    local_40 = &LAB_145c01fd7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePiecewiseByteBlenderSystem",&DAT_14cab5f70
                  ,&DAT_14766252c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5f70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410945d6 FUN_1410945d6 body=301 status=ok
// SIG undefined FUN_1410945d6(void)

undefined8 *
FUN_1410945d6(longlong param_1,undefined8 *param_2,undefined2 param_3,longlong *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined8 unaff_R13;
  
  uVar3 = *(undefined2 *)(param_1 + 0x30);
  lVar6 = *param_4;
  if (lVar6 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar6);
  }
  if ((lVar6 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar6);
  }
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\x01') {
    unaff_R13 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  uVar4 = *(undefined2 *)(param_1 + 8);
  uVar5 = *(undefined2 *)(param_1 + 0x10);
  if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar6);
  }
  *(undefined2 *)(param_2 + 1) = uVar4;
  *(undefined2 *)(param_2 + 2) = uVar5;
  *(char *)(param_2 + 4) = cVar1;
  if (cVar1 != '\0') {
    param_2[3] = unaff_R13;
  }
  *(undefined2 *)(param_2 + 5) = param_3;
  *(undefined1 *)(param_2 + 7) = 1;
  param_2[6] = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar6);
  }
  *(undefined1 *)(param_2 + 8) = uVar2;
  *param_2 = &PTR_FUN_14a4c72a0;
  *(undefined2 *)(param_2 + 9) = uVar3;
  return param_2;
}



// FUNCTION 141094704 FUN_141094704 body=1008 status=ok
// SIG undefined FUN_141094704(void)

void FUN_141094704(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_108 [35];
  undefined1 local_e5;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined8 local_d0;
  longlong local_c8;
  undefined2 local_c0;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined4 local_ae;
  undefined8 local_a8;
  char local_a0;
  undefined2 local_98;
  longlong local_90;
  char local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_6c;
  undefined1 local_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  piVar8 = *(int **)(param_3 + 8);
  if (piVar8 == (int *)0x0) {
    local_d8 = 0;
    local_dc = 0;
    local_e0 = 0;
    local_e4 = 0;
  }
  else {
    local_e4 = *piVar8;
    local_e0 = piVar8[1];
    local_dc = piVar8[2];
    local_d8 = piVar8[3];
  }
  lVar15 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar9 = *(longlong *)(param_2 + 0x20);
  if (lVar9 != 0) {
    lVar16 = FUN_140bc7f26();
    if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
        == lVar16 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        local_d2 = *(undefined2 *)(lVar15 + 0x62);
        local_ae = *(undefined4 *)(lVar9 + 0x110);
        uStack_be = *(undefined4 *)(lVar9 + 0x100);
        uStack_b6 = *(undefined4 *)(lVar9 + 0x108);
        uStack_b2 = *(undefined4 *)(lVar9 + 0x10c);
        uStack_ba = (undefined2)*(undefined4 *)(lVar9 + 0x104);
        uStack_b8 = (undefined2)((uint)*(undefined4 *)(lVar9 + 0x104) >> 0x10);
        cVar14 = *(char *)(param_1 + 0x20);
        if (cVar14 == '\x01') {
          local_d0 = *(undefined8 *)(param_1 + 0x18);
        }
        local_e5 = *(undefined1 *)(param_1 + 0x40);
        uVar4 = *(undefined2 *)(param_1 + 8);
        local_d4 = *(undefined2 *)(param_1 + 0x10);
        uVar5 = *(undefined2 *)(param_1 + 0x28);
        cVar2 = *(char *)(param_1 + 0x38);
        local_c8 = param_4;
        if ((cVar2 == '\x01') &&
           (param_1 = *(longlong *)(param_1 + 0x30), (param_1 != 0 & DAT_14c950c29) == 1)) {
          FUN_1456cec3c(param_1);
        }
        local_4c = local_ae;
        uStack_58 = CONCAT22(uStack_b8,uStack_ba);
        local_5c = uStack_be;
        uStack_54 = uStack_b6;
        uStack_50 = uStack_b2;
        bVar12 = local_dc != 0;
        bVar13 = local_d8 != 0;
        bVar11 = local_e0 != 0;
        bVar10 = local_e4 != 0;
        uVar6 = *(undefined2 *)(lVar15 + 100);
        if ((cVar2 != '\0') && ((param_1 != 0 & DAT_14c950c29) == 1)) {
          FUN_1456cec3c(param_1);
        }
        puVar17 = (undefined8 *)FUN_14001cc68(0x80,8);
        lVar9 = local_c8;
        *puVar17 = &PTR_FUN_14a4c72e0;
        *(undefined2 *)(puVar17 + 1) = uVar4;
        *(undefined2 *)(puVar17 + 2) = local_d4;
        *(char *)(puVar17 + 4) = cVar14;
        if (cVar14 != '\0') {
          puVar17[3] = local_d0;
        }
        *(undefined2 *)(puVar17 + 5) = uVar5;
        *(char *)(puVar17 + 7) = cVar2;
        if ((cVar2 != '\0') && (puVar17[6] = param_1, (param_1 != 0 & DAT_14c950c29) == 1)) {
          FUN_1456cec3c(param_1);
        }
        *(undefined2 *)(puVar17 + 8) = local_d2;
        *(undefined1 *)(puVar17 + 0xb) = 1;
        *(undefined4 *)((longlong)puVar17 + 0x44) = local_5c;
        *(undefined4 *)(puVar17 + 9) = uStack_58;
        *(undefined4 *)((longlong)puVar17 + 0x4c) = uStack_54;
        *(undefined4 *)(puVar17 + 10) = uStack_50;
        *(undefined4 *)((longlong)puVar17 + 0x54) = local_4c;
        *(uint *)((longlong)puVar17 + 0x5c) =
             (uint)CONCAT12(((bVar12 || bVar13) || bVar11) || bVar10,uVar6);
        *(undefined1 *)(puVar17 + 0xe) = 1;
        *(int *)(puVar17 + 0xc) = local_e4;
        *(int *)((longlong)puVar17 + 100) = local_e0;
        *(int *)(puVar17 + 0xd) = local_dc;
        *(int *)((longlong)puVar17 + 0x6c) = local_d8;
        *(undefined1 *)(puVar17 + 0xf) = local_e5;
        *puVar17 = &PTR_FUN_14a4c72c0;
        iVar7 = *(int *)(lVar9 + 0x50);
        *(uint *)(lVar9 + 0x50) = iVar7 + 1U;
        if (*(uint *)(lVar9 + 0x54) < iVar7 + 1U) {
          FUN_140561fb4(lVar9,iVar7);
        }
        lVar15 = *(longlong *)(lVar9 + 0x48);
        if (*(longlong *)(lVar9 + 0x48) == 0) {
          lVar15 = lVar9;
        }
        puVar1 = (undefined8 *)(lVar15 + (longlong)iVar7 * 0x48);
        *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
        FUN_14055f024(puVar1);
        *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
        *puVar1 = puVar17;
      }
      else {
        cVar14 = FUN_145e0c77a(param_3);
        if (cVar14 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
        }
      }
      goto LAB_141094982;
    }
  }
  bVar12 = local_dc != 0;
  bVar13 = local_d8 != 0;
  bVar11 = local_e0 != 0;
  bVar10 = local_e4 != 0;
  uVar4 = *(undefined2 *)(lVar15 + 100);
  uVar3 = *(undefined1 *)(param_1 + 0x40);
  uStack_b8 = *(undefined2 *)(param_1 + 8);
  uStack_b2 = CONCAT22(*(undefined2 *)(param_1 + 0x10),(undefined2)uStack_b2);
  local_a0 = *(char *)(param_1 + 0x20);
  if (local_a0 == '\x01') {
    local_a8 = *(undefined8 *)(param_1 + 0x18);
  }
  local_98 = *(undefined2 *)(param_1 + 0x28);
  local_88 = *(char *)(param_1 + 0x38);
  if ((local_88 == '\x01') &&
     (local_90 = *(longlong *)(param_1 + 0x30), (local_90 != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c();
  }
  local_6c = 1;
  local_7c = local_e4;
  local_78 = local_e0;
  local_74 = local_dc;
  local_70 = local_d8;
  local_c0 = 0x7300;
  uStack_be = 0x14a4c;
  uStack_ba = 0;
  local_80 = (uint)CONCAT12(((bVar12 || bVar13) || bVar11) || bVar10,uVar4);
  local_68 = uVar3;
  FUN_14764e312(param_4);
LAB_141094982:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141094b14 FUN_141094b14 body=118 status=ok
// SIG undefined FUN_141094b14(void)

undefined8 * FUN_141094b14(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_1 = &PTR_FUN_14bad5c40;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  param_1[0xd] = lpCriticalSection;
  return param_1;
}



// FUNCTION 141094b8a FUN_141094b8a body=277 status=ok
// SIG undefined FUN_141094b8a(void)

undefined8 FUN_141094b8a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141094c99;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141094c99;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_141094c99:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141094c47;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_141094c47;
    }
  }
  uVar6 = 0;
LAB_141094c47:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141094ca0 FUN_141094ca0 body=174 status=ok
// SIG undefined FUN_141094ca0(void)

void FUN_141094ca0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x5c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        local_c = 0;
        local_20 = DAT_14cb8c198;
        local_18 = 0xffffffff;
        FUN_141094e00(uVar2,&local_20,1);
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141094d50 FUN_141094d50 body=174 status=ok
// SIG undefined FUN_141094d50(void)

void FUN_141094d50(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x5c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        local_c = 0;
        local_20 = DAT_14cb8c198;
        local_18 = 0xffffffff;
        FUN_141094e00(uVar2,&local_20,0);
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141094e00 FUN_141094e00 body=433 status=ok
// SIG undefined FUN_141094e00(void)

undefined4 FUN_141094e00(longlong *param_1,longlong *param_2,undefined1 param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  uVar5 = *(uint *)(param_2 + 1);
  if (lVar3 != 0 || uVar5 != 0xffffffff) {
    if ((int)uVar5 < 0) {
      lVar9 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
LAB_141094e59:
      if (uVar7 != 0) {
        uVar6 = (ulonglong)(int)uVar7;
        goto LAB_141094e6c;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 1);
      uVar6 = (ulonglong)uVar7;
      lVar9 = *param_1;
      if ((int)uVar7 <= (int)uVar5) goto LAB_141094e59;
      if (*(longlong *)(lVar9 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar3) {
LAB_141094eb8:
        lVar9 = (longlong)(int)uVar5 * 0x88 + lVar9;
        if (lVar9 != 0) {
          uVar10 = FUN_1406400be(param_1);
          fVar2 = *(float *)(lVar9 + 0x84);
          local_58 = *(undefined4 *)(lVar9 + 0x80);
          local_60 = *(undefined8 *)(lVar9 + 0x78);
          fVar11 = (float)uVar10;
          if (*(char *)(param_4 + 1) == '\x01') {
            fVar11 = *param_4;
          }
          uVar4 = FUN_140640470(lVar9,param_3,fVar11);
          if ((char)uVar4 != '\0') {
            uVar5 = -(uint)(fVar2 < 0.0);
            FUN_140640a12(param_1,lVar9,&local_60,
                          (ulonglong)(uVar5 & 0x7f7fffff) |
                          CONCAT44((int)((ulonglong)uVar10 >> 0x20),
                                   ~uVar5 & (uint)((float)uVar10 - fVar2)));
          }
          goto LAB_141094f42;
        }
        goto LAB_141094f40;
      }
LAB_141094e6c:
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + 0x68 + uVar8) == lVar3) {
          uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
          *(uint *)(param_2 + 1) = uVar5;
          if (uVar5 == 0xffffffff) goto LAB_141094f40;
          lVar9 = *param_1;
          goto LAB_141094eb8;
        }
        lVar1 = lVar9 + uVar8;
        uVar8 = uVar8 + 0x88;
      } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar9);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
LAB_141094f40:
  uVar4 = 0;
LAB_141094f42:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14109503c FUN_14109503c body=305 status=ok
// SIG undefined FUN_14109503c(void)

undefined8 * FUN_14109503c(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0d3180;
  FUN_140440628(param_1 + 0x33,&DAT_14cb7e480,0);
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 4;
  *(undefined4 *)(param_1 + 0x3b) = 0x43480000;
  *(undefined1 *)(param_1 + 0x3f) = 3;
  *(char *)(param_1 + 0x40) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x45) = 4;
  *(undefined4 *)(param_1 + 0x42) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x46) = 3;
  *(char *)(param_1 + 0x47) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x4f) = 4;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x50) = 2;
  *(byte *)(param_1 + 0x51) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x56) = 4;
  *(undefined4 *)(param_1 + 0x53) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x57) = 3;
  *(char *)(param_1 + 0x58) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x59] = 0x1000000000001;
  return param_1;
}



// FUNCTION 14109516e FUN_14109516e body=343 status=ok
// SIG undefined FUN_14109516e(void)

void FUN_14109516e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  uint local_54;
  longlong local_50;
  longlong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x80);
  local_50 = param_2;
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    uVar6 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    uVar6 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar3 >> 4);
    lVar2 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar2 = param_1 + 0xb8;
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar6) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x14) == param_2) {
          lVar2 = FUN_140316ff8();
          if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) goto LAB_141095280;
          lVar7 = param_1 + 0xb8;
          if (*(longlong *)(param_1 + 0xc0) != 0) {
            lVar7 = *(longlong *)(param_1 + 0xc0);
          }
          iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar6) * 4);
          if (iVar4 == -1) goto LAB_141095280;
          goto LAB_1410952ac;
        }
        iVar4 = *(int *)(*plVar1 + (longlong)iVar4 * 0x14 + 0xc);
      } while (iVar4 != -1);
    }
  }
  lVar2 = FUN_140316ff8();
  local_40 = &local_54;
  local_54 = (uint)*(ushort *)(lVar2 + 0x5c);
  local_48 = &local_50;
  FUN_1410952c6(plVar1,local_34,&local_48,0);
  goto LAB_141095246;
  while (iVar4 = *(int *)((longlong)plVar5 + 0xc), iVar4 != -1) {
LAB_1410952ac:
    plVar5 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x14);
    if (*plVar5 == param_2) goto LAB_141095282;
  }
LAB_141095280:
  plVar5 = (longlong *)0x0;
LAB_141095282:
  *(uint *)(plVar5 + 1) = (uint)*(ushort *)(lVar2 + 0x5c);
LAB_141095246:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410952c6 FUN_1410952c6 body=356 status=ok
// SIG undefined FUN_1410952c6(void)

undefined4 *
FUN_1410952c6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14487db2c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1401719bc(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_14487ddf8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109542c FUN_14109542c body=49 status=ok
// SIG undefined FUN_14109542c(void)

void FUN_14109542c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14109547a(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141095441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140b321f2(&DAT_14cb81a80);
  FUN_1410839ec(uVar2);
  return;
}



// FUNCTION 14109545e FUN_14109545e body=28 status=ok
// SIG undefined FUN_14109545e(void)

void FUN_14109545e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b321f2(&DAT_14cb81a80);
  FUN_1410839ec(uVar1);
  return;
}



// FUNCTION 14109547a FUN_14109547a body=191 status=ok
// SIG undefined FUN_14109547a(void)

longlong FUN_14109547a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14109553a();
  lVar3 = *param_1;
  if (DAT_14cb81a30 != DAT_14cb81a5c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb81a60;
    if (DAT_14cb81a68 != (undefined *)0x0) {
      puVar7 = DAT_14cb81a68;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb81a70 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb81a28 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb81a20;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14109553a FUN_14109553a body=152 status=ok
// SIG undefined FUN_14109553a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14109553a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81a78) {
    FUN_144b3d300(&DAT_14cb81a78);
    if (DAT_14cb81a78 == -1) {
      DAT_14cb81a48 = 0;
      DAT_14cb81a50 = 0;
      DAT_14cb81a28 = 0;
      _DAT_14cb81a30 = 0;
      _DAT_14cb81a54 = 0xffffffff00000080;
      DAT_14cb81a5c = 0;
      DAT_14cb81a68 = 0;
      DAT_14cb81a70 = 0;
      atexit(FUN_143d9315a);
      _Init_thread_footer(&DAT_14cb81a78);
      return;
    }
  }
  return;
}



// FUNCTION 1410955d2 FUN_1410955d2 body=38 status=ok
// SIG undefined FUN_1410955d2(void)

undefined8 FUN_1410955d2(undefined8 param_1,int param_2)

{
  FUN_1410955f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410955f8 FUN_1410955f8 body=504 status=ok
// SIG undefined FUN_1410955f8(void)

void FUN_1410955f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b419b40;
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_143df3992(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe5f06(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c646(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c52f(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c52f(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140e7c52f(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x20];
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
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140d06186(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[7];
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
  FUN_14189dae2(param_1);
  return;
}



// FUNCTION 1410957fe FUN_1410957fe body=155 status=ok
// SIG undefined FUN_1410957fe(void)

undefined8 * FUN_1410957fe(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b745c30;
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x510;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x3d0);
  lVar1 = 0x3d0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x290);
  FUN_14109589a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14109589a FUN_14109589a body=322 status=ok
// SIG undefined FUN_14109589a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14109589a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b138280;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1410959dc(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000141095988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410959dc FUN_1410959dc body=45 status=ok
// SIG undefined FUN_1410959dc(void)

void FUN_1410959dc(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 141095a0a FUN_141095a0a body=221 status=ok
// SIG undefined FUN_141095a0a(void)

longlong FUN_141095a0a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc062d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140bc9342;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149190ad7;
    local_40 = &LAB_145c6df00;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x5a0;
    FUN_14081cfa3(L"/Script/ControlRig",L"RigHierarchy",&DAT_14cc062d8,FUN_1466c7e30);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc062d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141095ae8 FUN_141095ae8 body=435 status=ok
// SIG undefined FUN_141095ae8(void)

void FUN_141095ae8(longlong param_1,void *param_2,uint param_3)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  void *local_60;
  undefined1 local_58 [12];
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x58);
  uVar7 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x5c) + iVar3) - 1U;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  local_60 = param_2;
  if (plVar4 == (longlong *)0x0) {
    iVar5 = 0;
  }
  else {
    if (0 < (int)param_3) {
      uVar6 = (ulonglong)param_3;
      do {
        (**(code **)(*plVar4 + 8))(plVar4,local_58);
        if ((local_4c & 4) != 0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
        }
        (**(code **)(*plVar4 + 8))(plVar4);
        if ((local_4c & 2) == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
        }
        else {
          memset(param_2,0,(longlong)(int)uVar7);
        }
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      iVar3 = *(int *)(param_1 + 0x58);
    }
    iVar5 = (int)plVar4[1];
  }
  if ((iVar5 < iVar3) && (plVar4 = *(longlong **)(param_1 + 0x70), plVar4 != (longlong *)0x0)) {
    do {
      uVar6 = (ulonglong)*(uint *)(plVar4 + 6);
      iVar3 = *(int *)((longlong)plVar4 + 0x34) * *(uint *)(plVar4 + 6) +
              *(int *)((longlong)plVar4 + 0x44);
      bVar1 = iVar3 <= iVar5;
      if ((0 < (int)param_3) && (iVar5 < iVar3)) {
        uVar8 = 0;
        do {
          pvVar2 = local_60;
          if (0 < (int)uVar6) {
            lVar9 = 0;
            do {
              if ((~plVar4[7] & 0x1000000200U) == 0) {
                memset((void *)((longlong)pvVar2 +
                               lVar9 * *(int *)((longlong)plVar4 + 0x34) +
                               (longlong)*(int *)((longlong)plVar4 + 0x44) +
                               uVar8 * (longlong)(int)uVar7),0,
                       (longlong)*(int *)((longlong)plVar4 + 0x34));
              }
              else {
                (**(code **)(*plVar4 + 0x140))();
              }
              lVar9 = lVar9 + 1;
              uVar6 = (ulonglong)(int)plVar4[6];
            } while (lVar9 < (longlong)uVar6);
          }
          uVar8 = uVar8 + 1;
          bVar1 = false;
        } while (uVar8 != param_3);
      }
    } while ((!bVar1) && (plVar4 = (longlong *)plVar4[9], plVar4 != (longlong *)0x0));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141095cac FUN_141095cac body=67 status=ok
// SIG undefined FUN_141095cac(void)

void FUN_141095cac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
    }
    FUN_1400020a8(lVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 141095cf0 FUN_141095cf0 body=250 status=ok
// SIG undefined FUN_141095cf0(void)

void FUN_141095cf0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  iVar5 = (int)param_2[1];
  if (iVar5 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x78);
    iVar2 = *(int *)((longlong)plVar3 + 0x34);
    if ((0 < iVar5) && ((plVar3[7] & 0x1040000000U) == 0)) {
      if ((bVar1 & 1) == 0) {
        uVar6 = *param_2;
      }
      else {
        uVar6 = *param_2;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_2;
        }
      }
      do {
        if ((plVar3[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar3 + 0x148))(plVar3,uVar6);
        }
        uVar6 = uVar6 + (longlong)iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if ((bVar1 & 1) == 0) {
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_14474d398(param_2,0,iVar2,uVar4);
        return;
      }
    }
    else if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1468c0360(param_2,0,iVar2,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 141095dea FUN_141095dea body=398 status=ok
// SIG undefined FUN_141095dea(void)

void FUN_141095dea(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [12];
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0xb1) & 0x60) == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    uVar5 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x5c) + iVar2) - 1U;
    plVar6 = *(longlong **)(param_1 + 0xb8);
    if (plVar6 == (longlong *)0x0) {
      iVar3 = 0;
    }
    else {
      (**(code **)(*plVar6 + 8))(plVar6,local_58);
      if ((0 < (int)param_3) && ((local_4c & 4) != 0)) {
        uVar4 = (ulonglong)param_3;
        lVar7 = param_2;
        do {
          (**(code **)(*plVar6 + 0x20))(plVar6,lVar7);
          lVar7 = lVar7 + (int)uVar5;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = (int)plVar6[1];
      iVar2 = *(int *)(param_1 + 0x58);
    }
    if ((iVar3 < iVar2) && (plVar6 = *(longlong **)(param_1 + 0x80), plVar6 != (longlong *)0x0)) {
      local_60 = (longlong)(int)uVar5;
      local_68 = (ulonglong)param_3;
      do {
        if (*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6] + *(int *)((longlong)plVar6 + 0x44)
            <= iVar3) break;
        if ((0 < (int)param_3) &&
           (lVar7 = param_2, uVar4 = local_68, (plVar6[7] & 0x1000000000U) == 0)) {
          do {
            if ((plVar6[7] & 0x1000000000U) == 0) {
              (**(code **)(*plVar6 + 0x148))(plVar6,*(int *)((longlong)plVar6 + 0x44) + lVar7);
            }
            uVar4 = uVar4 - 1;
            lVar7 = lVar7 + local_60;
          } while (uVar4 != 0);
        }
        plVar6 = (longlong *)plVar6[0xb];
      } while (plVar6 != (longlong *)0x0);
    }
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0xd0);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141095f96 FUN_141095f96 body=874 status=ok
// SIG undefined FUN_141095f96(void)

void FUN_141095f96(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  local_a8 = param_1;
  if (cVar6 == '\0') {
    local_a0 = param_1 + 0x51;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x54] == 0) {
      uVar14 = 1;
      uVar12 = 0xffffffff;
      iVar13 = 0;
      iVar16 = 0;
      iVar9 = 0;
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar14 = (ulonglong)local_90 >> 0x20;
      iVar13 = (int)param_1[0x54];
      iVar10 = (int)local_90;
      uVar12 = (uint)uStack_80;
      iVar9 = uStack_80._4_4_;
      iVar16 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar9 != iVar13 || local_88 != local_a0) {
      do {
        lVar7 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar9 * 0x20);
        if (((lVar7 != 0) && (*(byte **)(lVar7 + 0x48) != (byte *)0x0)) &&
           (((**(byte **)(lVar7 + 0x48) & 0x6b) == 3 &&
            (plVar15 = *(longlong **)(lVar7 + 0x30), plVar15 != (longlong *)0x0)))) {
          lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
          lVar8 = FUN_141096302();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar15);
          }
        }
        uVar12 = uVar12 & ~(uint)uVar14;
        plVar15 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar7 = (longlong)iVar10;
        uVar11 = *(uint *)((longlong)plVar15 + lVar7 * 4) & uVar12;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar5 = iVar9;
          if (iVar9 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar8 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar15 + lVar8 * 4 + lVar7 * 4 + 4);
              if (uVar11 != 0) {
                iVar10 = iVar10 + (int)lVar8 + 1;
                uVar12 = 0xffffffff;
                goto LAB_141096136;
              }
              iVar16 = iVar16 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar5 - lVar7 != lVar8);
            uVar12 = 0xffffffff;
            iVar10 = iVar5;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar3;
        }
        else {
LAB_141096136:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar14 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
        param_1 = local_a8;
      } while (iVar9 != iVar13 || plVar1 != local_a0);
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar15 = param_1 + 0x3b;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar15;
    if ((int)param_1[0x3e] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = (int)local_a8[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar7 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar13) || (local_78 = lVar7, plStack_60 != plVar15)) {
      do {
        local_78 = lVar7;
        plVar4 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar10 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar8 = FUN_141096302();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar4);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        lVar7 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar15 || local_78._4_4_ != iVar13));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141096302 FUN_141096302 body=57 status=ok
// SIG undefined FUN_141096302(void)

void FUN_141096302(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a800 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a800 = FUN_140002ddd(FUN_146527324,uVar1,L"ItemPoolListDef");
  }
  return;
}



// FUNCTION 14109633c FUN_14109633c body=67 status=ok
// SIG undefined FUN_14109633c(void)

void FUN_14109633c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141096380 FUN_141096380 body=38 status=ok
// SIG undefined FUN_141096380(void)

undefined8 FUN_141096380(undefined8 param_1,int param_2)

{
  FUN_1410963a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410963a6 FUN_1410963a6 body=556 status=ok
// SIG undefined FUN_1410963a6(void)

void FUN_1410963a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42fbe0;
  FUN_140e5c370();
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a4) = 0;
  }
  if (*(char *)(param_1 + 0x196) == '\x01') {
    *(undefined1 *)(param_1 + 0x196) = 0;
  }
  if (*(char *)(param_1 + 0x186) == '\x01') {
    *(undefined1 *)(param_1 + 0x186) = 0;
  }
  *(undefined4 *)(param_1 + 0x16b) = 0;
  if (param_1[0x16a] != 0) {
    FUN_1400020a8();
  }
  FUN_140e5ca44(param_1 + 0x162,0);
  if (param_1[0x166] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x161) = 0;
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  FUN_140e5c9ca(param_1 + 0x158,0);
  if (param_1[0x15c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  param_1[0x145] = &PTR_FUN_14a42d4a0;
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x151] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x149] != 0) {
    FUN_1400020a8();
  }
  param_1[0x13a] = &PTR_FUN_14a42d3b0;
  if (param_1[0x141] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x12f] = &PTR_FUN_14a42d3b0;
  if (param_1[0x136] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x134] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e066(param_1);
  return;
}



// FUNCTION 1410965d2 FUN_1410965d2 body=614 status=ok
// SIG undefined FUN_1410965d2(void)

void FUN_1410965d2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *_Src;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined6 uStack_8c;
  undefined2 uStack_86;
  undefined6 uStack_84;
  undefined8 uStack_7e;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 2;
  local_38 = 0;
  local_30 = 0x200000000;
  local_94 = 0;
  uStack_8c = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  uStack_7e = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar1;
      *(longlong *)(param_2 + 0x40) = lVar1;
      pcVar2 = *(code **)(*plVar6 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar6 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar6);
          if (cVar4 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar1,&local_a8);
            goto LAB_1410966e3;
          }
        }
        _Src = (longlong *)(lVar1 + *(int *)((longlong)plVar6 + 0x44));
        if (_Src != &local_a8) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_a8,_Src,(int)plVar6[6]);
          }
          else {
            memcpy(&local_a8,_Src,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_b0 = (undefined4)plVar6[6];
        local_b8 = 0;
        FUN_1400746b0(plVar6,&local_a8,lVar1,1);
      }
      else {
        (*pcVar2)(plVar6,&local_a8,lVar1);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
LAB_1410966e3:
  plVar6 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar6 = &local_a8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14109683a(param_1,plVar6);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109683a FUN_14109683a body=496 status=ok
// SIG undefined FUN_14109683a(void)

void FUN_14109683a(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) != *(char *)(param_1 + 0x8900)) {
    switch(*(char *)(param_1 + 0x8900)) {
    case '\x01':
      if ((((*(longlong *)(param_1 + 0x8918) == 0) || (*(longlong *)(param_1 + 0x8920) == 0)) &&
          ((*(char *)(param_1 + 0x8928) == '\0' &&
           ((*(char *)(param_1 + 0x8901) == '\0' && (*(longlong *)(param_1 + 0x8908) != 0)))))) &&
         (*(longlong *)(param_1 + 0x8910) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x80))(param_1 + 0x3b48);
      }
      break;
    case '\x02':
      if (((*(longlong *)(param_1 + 0x8918) == 0) || (*(longlong *)(param_1 + 0x8920) == 0)) &&
         ((*(char *)(param_1 + 0x8928) == '\0' &&
          (((*(char *)(param_1 + 0x8901) == '\0' && (*(longlong *)(param_1 + 0x8908) != 0)) &&
           (*(longlong *)(param_1 + 0x8910) != 0)))))) {
        (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x88))(param_1 + 0x3b48);
      }
      break;
    case '\x03':
      if (((*(longlong *)(param_1 + 0x8918) != 0) && (*(longlong *)(param_1 + 0x8920) != 0)) &&
         (((byte)(*(char *)(param_1 + 0x8901) - 1U) < 3 &&
          (*(longlong *)(param_2 + 0x40) != 0 && *(longlong *)(param_2 + 0x38) != 0)))) {
        (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x90))(param_1 + 0x3b48);
      }
      break;
    case '\x04':
      if ((((*(longlong *)(param_1 + 0x8918) != 0) && (*(longlong *)(param_1 + 0x8920) != 0)) &&
          ((*(byte *)(param_1 + 0x8901) & 0xfe) == 2)) &&
         (*(longlong *)(param_2 + 0x40) != 0 && *(longlong *)(param_2 + 0x38) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x98))(param_1 + 0x3b48);
      }
      break;
    case '\x05':
      (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x58))(param_1 + 0x3b48);
    }
    if (((*(longlong *)(param_1 + 0x8908) != 0) && (*(longlong *)(param_1 + 0x8910) != 0)) &&
       ((*(longlong *)(param_2 + 0x38) == 0 || (*(longlong *)(param_2 + 0x40) == 0)))) {
      FUN_1413f02b4(param_1 + 0x88d0);
      return;
    }
  }
  return;
}



// FUNCTION 141096aa8 FUN_141096aa8 body=214 status=ok
// SIG undefined FUN_141096aa8(void)

void FUN_141096aa8(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 1) {
    if (param_3 != 0) goto LAB_141096b0f;
    lVar2 = *param_2;
    if (param_1[0x5a] != lVar2) {
      param_1[0x5c] = 0;
    }
    param_1[0x5a] = lVar2;
    if (param_1[0x5b] != param_2[1]) {
      param_1[0x5c] = 0;
    }
    uVar1 = FUN_14477b664();
    lVar2 = FUN_14477b664(uVar1);
    param_1[0x5b] = lVar2;
    param_1[0x5c] = param_2[2];
  }
  lVar2 = *param_2;
  if (param_1[0x5d] != lVar2) {
    param_1[0x5f] = 0;
  }
  param_1[0x5d] = lVar2;
  if (param_1[0x5e] != param_2[1]) {
    param_1[0x5f] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[0x5e] = lVar2;
  param_1[0x5f] = param_2[2];
LAB_141096b0f:
                    /* WARNING: Could not recover jumptable at 0x000141096b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 141096b7e FUN_141096b7e body=1627 status=ok
// SIG undefined FUN_141096b7e(void)

void FUN_141096b7e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  lVar6 = param_1[0x5b];
  if (lVar6 == 0) {
    if (DAT_14cb25788 == 0) {
      uVar4 = FUN_140cd185c();
      DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
    }
    lVar6 = FUN_14477b664(DAT_14cb25788);
    param_1[0x5b] = lVar6;
  }
  plVar1 = param_1 + 0x5a;
  lVar5 = param_1[0x5c];
  if (lVar5 == 0) {
    if ((*plVar1 != 0) && (lVar6 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        param_1[0x5c] = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        param_1[0x5c] = lVar5;
        if (lVar5 != 0) {
          lVar6 = param_1[0x5b];
          goto LAB_141096d73;
        }
      }
    }
    lVar6 = param_1[0x5e];
    if (lVar6 == 0) {
      if (DAT_14cb25788 == 0) {
        uVar4 = FUN_140cd185c();
        DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
      }
      lVar6 = FUN_14477b664(DAT_14cb25788);
      param_1[0x5e] = lVar6;
    }
    plVar1 = param_1 + 0x5d;
    lVar5 = param_1[0x5f];
    if (lVar5 == 0) {
      if ((lVar6 != 0) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          param_1[0x5f] = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
          param_1[0x5f] = lVar5;
          if (lVar5 != 0) {
            lVar6 = param_1[0x5e];
            goto LAB_141096c64;
          }
        }
      }
      if (DAT_14cb253f8 == (longlong *)0x0) {
        local_60 = &local_30;
        local_30 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_147f6f09d;
        local_70 = &LAB_146201c25;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000006;
        local_90 = 8;
        local_98 = 0x480;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      plVar1 = DAT_14cb253f8;
      if (((DAT_14cb253f8[0x22] == 0) &&
          ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar1[0x22] == 0)) ||
         (lVar6 = DAT_14cb25be0, DAT_14cb25be0 == 0)) goto LAB_141096ca9;
      lVar7 = *(longlong *)(DAT_14cb25be0 + 0x1a8);
      if (lVar7 == 0) {
        if (DAT_14cb25788 == 0) {
          uVar4 = FUN_140cd185c();
          DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
        }
        lVar7 = FUN_14477b664(DAT_14cb25788);
        *(longlong *)(lVar6 + 0x1a8) = lVar7;
      }
      plVar1 = (longlong *)(lVar6 + 0x1a0);
      lVar5 = *(longlong *)(lVar6 + 0x1b0);
      if (lVar5 == 0) {
        if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_141096ca9;
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar6 + 0x1b0) = 0;
          goto LAB_141096ca9;
        }
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(lVar6 + 0x1b0) = lVar5;
        if (lVar5 == 0) goto LAB_141096ca9;
        lVar7 = *(longlong *)(lVar6 + 0x1a8);
      }
      if (lVar7 == 0) {
        if (DAT_14cb25788 == 0) {
          uVar4 = FUN_140cd185c();
          DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
        }
        lVar7 = FUN_14477b664(DAT_14cb25788);
        *(longlong *)(lVar6 + 0x1a8) = lVar7;
        lVar5 = *(longlong *)(lVar6 + 0x1b0);
        if (((lVar5 == 0) && (lVar5 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar5 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(lVar6 + 0x1b0) = lVar5;
        }
      }
    }
    else {
LAB_141096c64:
      if (lVar6 == 0) {
        if (DAT_14cb25788 == 0) {
          uVar4 = FUN_140cd185c();
          DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
        }
        lVar6 = FUN_14477b664(DAT_14cb25788);
        param_1[0x5e] = lVar6;
        lVar5 = param_1[0x5f];
        if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar5 = FUN_144aff482(uVar4,plVar1);
          }
          param_1[0x5f] = lVar5;
        }
      }
    }
  }
  else {
LAB_141096d73:
    if (lVar6 == 0) {
      if (DAT_14cb25788 == 0) {
        uVar4 = FUN_140cd185c();
        DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar4,L"WwiseSwitchDef");
      }
      lVar6 = FUN_14477b664(DAT_14cb25788);
      param_1[0x5b] = lVar6;
      lVar5 = param_1[0x5c];
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
        }
        param_1[0x5c] = lVar5;
      }
    }
  }
  local_38 = lVar5;
  if (lVar5 != 0) {
    local_30 = (code *)&local_38;
    local_40 = &local_30;
    local_48 = &LAB_1438a8ece;
    (**(code **)(*param_1 + 0x40))(param_1);
  }
LAB_141096ca9:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410971da FUN_1410971da body=209 status=ok
// SIG undefined FUN_1410971da(void)

void FUN_1410971da(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0(param_1);
  }
  FUN_14027ab42(&local_40,uVar5);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_38;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_1410972ac(local_40,param_1,param_2);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410972ac FUN_1410972ac body=325 status=ok
// SIG undefined FUN_1410972ac(void)

void FUN_1410972ac(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x168);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x128);
      iVar8 = iVar7;
      do {
        if (*(ulonglong *)(lVar5 + (longlong)iVar8 * 0x20) == param_2) goto LAB_141097339;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  goto LAB_14109737c;
  while (iVar7 = *(int *)(lVar6 + 0x18), iVar7 != -1) {
LAB_141097339:
    lVar6 = lVar5 + (longlong)iVar7 * 0x20;
    if (*(ulonglong *)(lVar5 + (longlong)iVar7 * 0x20) == param_2) goto LAB_14109734a;
  }
  lVar6 = 0;
LAB_14109734a:
  lVar5 = *(longlong *)(lVar6 + 8);
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xb8) == '\x01')) {
    *(undefined4 *)(lVar5 + 0xb0) = param_3;
  }
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
LAB_14109737c:
  lVar5 = *(longlong *)(param_1 + 0x188);
  if (lVar5 != 0) {
    lVar6 = FUN_14073fae1();
    FUN_1410973f2(lVar5,lVar6 + 0x200,param_3);
  }
  FUN_1410974b4(param_1);
  return;
}



// FUNCTION 1410973f2 FUN_1410973f2 body=192 status=ok
// SIG undefined FUN_1410973f2(void)

void FUN_1410973f2(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong **local_88;
  undefined4 local_74;
  longlong *local_70;
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  local_74 = param_3;
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      local_68 = &local_74;
      local_70 = param_2;
      FUN_144a405ac(param_1 + 0x970,&local_18,&local_70,0);
    }
    else {
      local_10 = 2;
      local_c = 0xffffffff;
      local_88 = &local_70;
      local_70 = (longlong *)((ulonglong)local_70 & 0xffffffffffffff00);
      local_68 = (undefined4 *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = lVar1;
      FUN_140042bb4(*(longlong *)(param_1 + 0x40),&local_18,lVar1,0);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410974b4 FUN_1410974b4 body=1629 status=ok
// SIG undefined FUN_1410974b4(void)

void FUN_1410974b4(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_108 [36];
  uint local_e4;
  longlong local_e0;
  undefined8 *local_d8;
  int local_cc;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  uint *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  uint *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar19 = (uint *)(param_1 + 0x138);
  local_88 = 0;
  uStack_80 = 0;
  uVar5 = *(uint *)(param_1 + 0x150);
  uVar17 = (ulonglong)uVar5;
  if (uVar5 == 0) {
    uVar13 = 1;
    uVar22 = 0;
    uVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x148);
    if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
      puVar3 = puVar19;
    }
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      iVar9 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar9 = uVar5 - 1;
      }
      uVar22 = 0;
      uVar13 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar13 = uVar22;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar22) goto LAB_141097984;
        iVar9 = iVar9 + 0x20;
        uVar2 = puVar3[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar22 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar2 & uVar2);
    uVar10 = uVar13 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar2 = (iVar9 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar2) {
      uVar2 = uVar5;
    }
  }
  if (uVar2 != uVar5) {
    plVar20 = (longlong *)(param_1 + 0x128);
    uVar5 = 0xffffffff;
    do {
      puVar15 = (undefined8 *)(*plVar20 + (longlong)(int)uVar2 * 0x20);
      lVar21 = *(longlong *)(*plVar20 + 8 + (longlong)(int)uVar2 * 0x20);
      if (lVar21 == 0) {
LAB_1410979eb:
        uVar10 = uStack_80;
        iVar14 = (int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        local_e4 = uVar5;
        local_e0 = param_1;
        if (uStack_80._4_4_ < uVar2) {
          FUN_1410d048a(&local_88,uVar10 & 0xffffffff);
        }
        *(undefined8 *)(local_88 + (longlong)iVar14 * 8) = *puVar15;
        param_1 = local_e0;
        uVar5 = local_e4;
      }
      else {
        if ((((*(int *)(lVar21 + 0x30) == 0) || (uVar2 = *(uint *)(lVar21 + 0x2c), (int)uVar2 < 0))
            || (DAT_14c9647dc <= (int)uVar2)) ||
           (((lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 == 0 ||
             (*(int *)(lVar8 + 0x10) != *(int *)(lVar21 + 0x30))) ||
            ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) {
          if (*(int *)(lVar21 + 0x50) != *(int *)(lVar21 + 0x7c)) {
            local_e4 = uVar5;
            local_d8 = puVar15;
            FUN_1457efef6(lVar21 + 0x48);
            FUN_1457efdbe(lVar21 + 0x48);
            puVar15 = local_d8;
            uVar5 = local_e4;
          }
        }
        else {
          local_90 = (uint *)(lVar21 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uVar2 = *(uint *)(lVar21 + 0x70);
          local_cc = iVar9;
          local_a8 = uVar13;
          local_a0 = plVar20;
          local_98 = uVar22;
          if (uVar2 == 0) {
            uVar10 = 1;
            uVar12 = 0;
            uVar4 = 0;
            iVar14 = 0;
          }
          else {
            puVar3 = *(uint **)(lVar21 + 0x68);
            if (*(uint **)(lVar21 + 0x68) == (uint *)0x0) {
              puVar3 = local_90;
            }
            uVar4 = *puVar3;
            if (uVar4 == 0) {
              iVar14 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar14 = uVar2 - 1;
              }
              uVar12 = 0;
              uVar10 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar10 = uVar12;
              }
              iVar14 = 0;
              do {
                local_e4 = uVar5;
                local_d8 = puVar15;
                if (uVar10 == uVar12) goto LAB_141097872;
                iVar14 = iVar14 + 0x20;
                uVar4 = puVar3[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar4 == 0);
            }
            else {
              uVar12 = 0;
              iVar14 = 0;
            }
            uVar10 = (ulonglong)(-uVar4 & uVar4);
            uVar1 = uVar10 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar4 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar4) {
              uVar4 = uVar2;
            }
          }
          local_e4 = uVar5;
          local_d8 = puVar15;
          if (uVar4 != uVar2) {
            local_c0 = (longlong *)(lVar21 + 0x48);
            uVar16 = 0xffffffff;
            local_c8 = uVar17;
            local_b8 = (ulonglong)uVar2;
            do {
              uVar17 = uStack_70;
              lVar8 = *local_c0;
              lVar11 = *(longlong *)(lVar8 + 8 + (longlong)(int)uVar4 * 0x20);
              if (((lVar11 == 0) || (*(int *)(lVar11 + 0x14) == 0)) ||
                 ((uVar5 = *(uint *)(lVar11 + 0x10), (int)uVar5 < 0 ||
                  ((((DAT_14c9647dc <= (int)uVar5 ||
                     (lVar18 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                     lVar18 == 0)) || (*(int *)(lVar18 + 0x10) != *(int *)(lVar11 + 0x14))) ||
                   ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))))) {
                lVar11 = (longlong)(int)uStack_70;
                uVar5 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                local_b0 = puVar19;
                if (uStack_70._4_4_ < uVar5) {
                  local_e0 = param_1;
                  FUN_140279b48(&local_78,uVar17 & 0xffffffff);
                  param_1 = local_e0;
                }
                *(undefined8 *)(local_78 + lVar11 * 8) =
                     *(undefined8 *)(lVar8 + (longlong)(int)uVar4 * 0x20);
                uVar2 = *(uint *)(lVar21 + 0x70);
                puVar19 = local_b0;
              }
              uVar16 = uVar16 & ~(uint)uVar10;
              puVar3 = *(uint **)(lVar21 + 0x68);
              if (*(uint **)(lVar21 + 0x68) == (uint *)0x0) {
                puVar3 = local_90;
              }
              iVar9 = (int)uVar12;
              lVar8 = (longlong)iVar9;
              uVar5 = puVar3[lVar8] & uVar16;
              if (uVar5 == 0) {
                iVar6 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar6 = uVar2 - 1;
                }
                iVar6 = iVar6 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar7 = iVar6;
                if (iVar6 < iVar9) {
                  iVar7 = iVar9;
                }
                if (iVar9 < iVar6) {
                  lVar11 = 0;
                  do {
                    uVar5 = puVar3[lVar8 + lVar11 + 1];
                    if (uVar5 != 0) {
                      uVar12 = (ulonglong)(iVar9 + (int)lVar11 + 1);
                      uVar16 = 0xffffffff;
                      goto LAB_1410977a0;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar11 = lVar11 + 1;
                  } while (iVar7 - lVar8 != lVar11);
                  uVar16 = 0xffffffff;
                  iVar9 = iVar7;
                }
                uVar12 = (ulonglong)(iVar9 + 1);
                uVar4 = uVar2;
              }
              else {
LAB_1410977a0:
                uVar10 = (ulonglong)(-uVar5 & uVar5);
                uVar17 = uVar10 * 2 + 1;
                lVar8 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                  }
                }
                uVar4 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
                if ((int)uVar2 <= (int)uVar4) {
                  uVar4 = uVar2;
                }
              }
            } while (uVar4 != (uint)local_b8);
            if ((longlong)(int)uStack_70 != 0) {
              lVar8 = (longlong)(int)uStack_70 << 3;
              lVar21 = local_78;
              do {
                FUN_14592f2a2(local_c0,lVar21);
                lVar21 = lVar21 + 8;
                lVar8 = lVar8 + -8;
              } while (lVar8 != 0);
            }
            uVar17 = local_c8;
            uVar13 = local_a8;
            puVar15 = local_d8;
            plVar20 = local_a0;
            uVar22 = local_98;
            iVar9 = local_cc;
            uVar5 = local_e4;
            if (local_78 != 0) {
              FUN_1400020a8(local_78);
              uVar13 = local_a8;
              puVar15 = local_d8;
              plVar20 = local_a0;
              uVar22 = local_98;
              iVar9 = local_cc;
              uVar5 = local_e4;
            }
          }
        }
LAB_141097872:
        lVar21 = puVar15[1];
        if ((*(int *)(lVar21 + 0x50) == *(int *)(lVar21 + 0x7c)) &&
           (*(char *)(lVar21 + 0xb8) == '\0')) goto LAB_1410979eb;
      }
      lVar21 = local_88;
      uVar5 = uVar5 & ~(uint)uVar13;
      puVar3 = *(uint **)(param_1 + 0x148);
      if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
        puVar3 = puVar19;
      }
      uVar4 = *(uint *)(param_1 + 0x150);
      iVar14 = (int)uVar22;
      lVar8 = (longlong)iVar14;
      uVar2 = puVar3[lVar8] & uVar5;
      if (uVar2 == 0) {
        iVar6 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar6 = uVar4 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar6) {
          lVar11 = 0;
          do {
            uVar2 = puVar3[lVar8 + lVar11 + 1];
            if (uVar2 != 0) {
              uVar22 = (ulonglong)(iVar14 + (int)lVar11 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1410978f5;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar7 - lVar8 != lVar11);
          uVar5 = 0xffffffff;
          iVar14 = iVar7;
        }
        uVar22 = (ulonglong)(iVar14 + 1);
        uVar2 = uVar4;
      }
      else {
LAB_1410978f5:
        uVar13 = (ulonglong)(-uVar2 & uVar2);
        uVar10 = uVar13 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar2 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar2) {
          uVar2 = uVar4;
        }
      }
    } while (uVar2 != (uint)uVar17);
    lVar8 = (longlong)(int)uStack_80;
    if (lVar8 != 0) {
      lVar11 = 0;
      do {
        FUN_1457f003a(plVar20,*(undefined8 *)(lVar21 + lVar11));
        lVar11 = lVar11 + 8;
      } while (lVar8 * 8 != lVar11);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
LAB_141097984:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141097b12 FUN_141097b12 body=38 status=ok
// SIG undefined FUN_141097b12(void)

undefined8 FUN_141097b12(undefined8 param_1,int param_2)

{
  FUN_141097b38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141097b38 FUN_141097b38 body=1061 status=ok
// SIG undefined FUN_141097b38(void)

void FUN_141097b38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint local_44;
  
  *param_1 = &PTR_FUN_14b41a0f0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140e02d42(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_140d06186(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar5 = param_1 + 0x26;
  puVar3 = (uint *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2b);
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar10 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[0x2a];
    if ((uint *)param_1[0x2a] == (uint *)0x0) {
      puVar8 = puVar3;
    }
    uVar6 = *puVar8;
    if (uVar6 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_141097c15;
        iVar10 = iVar10 + 0x20;
        uVar6 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar6 & uVar6);
    uVar9 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
  }
  if (iVar7 < iVar4) {
    local_44 = 0xffffffff;
    do {
      lVar13 = *plVar5;
      lVar14 = (longlong)iVar7 * 0x20;
      FUN_148911e5a(*(undefined8 *)(lVar13 + 8 + lVar14),*(undefined4 *)(lVar13 + 0x10 + lVar14));
      if (*(longlong *)(lVar13 + 8 + lVar14) != 0) {
        FUN_1400020a8();
      }
      local_44 = local_44 & ~(uint)uVar16;
      puVar8 = (uint *)param_1[0x2a];
      if ((uint *)param_1[0x2a] == (uint *)0x0) {
        puVar8 = puVar3;
      }
      iVar4 = *(int *)(param_1 + 0x2b);
      iVar7 = (int)uVar15;
      lVar13 = (longlong)iVar7;
      uVar6 = puVar8[lVar13] & local_44;
      if (uVar6 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        iVar12 = iVar11 >> 5;
        if (iVar11 >> 5 < iVar7) {
          iVar12 = iVar7;
        }
        lVar14 = 0;
        do {
          if (iVar12 - lVar13 == lVar14) goto LAB_141097c15;
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar8[lVar13 + lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar6 == 0);
        uVar15 = (ulonglong)(uint)(iVar7 + (int)lVar14);
        local_44 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar9 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar4);
  }
LAB_141097c15:
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (*(int *)((longlong)param_1 + 0x13c) != 0) {
    FUN_1446f4a44(plVar5,0);
  }
  param_1[0x2c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x15c)) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee4bb0(param_1 + 0x1c);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140f54f6a(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_143df39ca(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x16];
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
  plVar5 = (longlong *)param_1[0x11];
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
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140ce2412(param_1 + 6);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14189dae2(param_1);
  return;
}



// FUNCTION 141097f5e FUN_141097f5e body=387 status=ok
// SIG undefined FUN_141097f5e(void)

longlong * FUN_141097f5e(longlong *param_1,longlong *param_2,longlong *param_3,float param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  longlong local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  longlong local_78 [5];
  undefined1 local_50 [8];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb0))();
  local_48 = 0;
  auVar4._0_8_ = (double)param_4 * 10000000.0 + 0.5;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  local_98[0] = *param_3;
  local_88[0] = (longlong *)0x0;
  if (local_98[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_88);
  }
  local_b0 = local_50;
  local_b8 = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_a0,local_98,(longlong)auVar4._0_8_);
  plVar2 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_149f2a6a0;
  plVar2[2] = (longlong)&PTR_FUN_149f2a6b8;
  plVar2[3] = local_a0;
  *param_2 = (longlong)(plVar2 + 2);
  param_2[1] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_98[0] != 0) {
    plVar2 = local_88[0];
    if (local_88[0] == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410980ea FUN_1410980ea body=347 status=ok
// SIG undefined FUN_1410980ea(void)

undefined8 *
FUN_1410980ea(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,byte param_5,
             ulonglong *param_6)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  byte local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  byte local_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = (byte)param_6[1];
  uVar3 = local_28;
  if (bVar1 == 1) {
    uVar3 = *param_6;
  }
  if (((((bVar1 & (longlong)uVar3 < 0) == 0) && ((~param_5 & bVar1) == 0)) && (-1 < param_4)) &&
     (lVar2 = *param_3, lVar2 != 0)) {
    local_88 = (longlong *)param_3[2];
    param_3[2] = 0;
    local_78 = (undefined4)param_3[4];
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_70 = (undefined4)param_3[5];
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_68 = (undefined4)param_3[6];
    uStack_64 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_60 = (undefined4)param_3[7];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x3c);
    *param_3 = 0;
    if (bVar1 != 0) {
      local_58 = uVar3;
    }
    local_40 = 0;
    local_38 = 0;
    local_37 = param_5;
    local_98[0] = lVar2;
    local_50 = bVar1;
    local_48 = param_4;
    FUN_1410982c4(param_1 + 0x90,param_2,local_98);
    if (local_50 == 1) {
      local_50 = 0;
    }
    if (local_98[0] != 0) {
      plVar4 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_78;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    *param_2 = 0;
  }
  FUN_141098246(param_1);
  if ((char)param_6[1] == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141098246 FUN_141098246 body=125 status=ok
// SIG undefined FUN_141098246(void)

char FUN_141098246(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x5a8) != 0) {
    cVar2 = FUN_144b47210(*(undefined8 *)(param_1 + 0x40));
    return cVar2;
  }
  pcVar1 = (char *)(param_1 + 0x5af);
  LOCK();
  bVar3 = *(char *)(param_1 + 0x5af) == '\0';
  if (bVar3) {
    *(char *)(param_1 + 0x5af) = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_1447d2058();
  }
  if (*(int *)(param_1 + 0x5a8) == 0) {
    LOCK();
    *(undefined1 *)(param_1 + 0x5ae) = 1;
    UNLOCK();
  }
  else {
    FUN_144b47210();
  }
  LOCK();
  cVar2 = *pcVar1;
  bVar3 = cVar2 == '\x01';
  if (bVar3) {
    *pcVar1 = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  if (bVar3) {
    return cVar2;
  }
  cVar2 = FUN_14008cdb0(pcVar1);
  return cVar2;
}



// FUNCTION 1410982c4 FUN_1410982c4 body=445 status=ok
// SIG undefined FUN_1410982c4(void)

/* WARNING: Removing unreachable block (ram,0x000141098473) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x000141098477 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_1410982c4(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_b8;
  undefined8 local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  LOCK();
  UNLOCK();
  bVar7 = DAT_14c75ef78 == 0;
  lVar5 = DAT_14c75ef78;
  DAT_14c75ef78 = DAT_14c75ef78 + 1;
  if (bVar7) {
    LOCK();
    DAT_14c75ef78 = 2;
    UNLOCK();
    lVar5 = 2;
  }
  *param_2 = lVar5;
  lVar2 = *param_3;
  lVar3 = param_3[2];
  param_3[2] = 0;
  local_88 = param_3[6];
  uStack_80 = param_3[7];
  local_98 = param_3[4];
  lStack_90 = param_3[5];
  if (lVar2 != 0) {
    *param_3 = 0;
  }
  bVar6 = *(byte *)(param_3 + 9);
  if (bVar6 == 1) {
    local_78 = param_3[8];
  }
  local_58 = (undefined2)param_3[0xc];
  local_68 = (undefined4)param_3[10];
  uStack_64 = *(undefined4 *)((longlong)param_3 + 0x54);
  uStack_60 = (undefined4)param_3[0xb];
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0x5c);
  local_c8 = lVar5;
  local_b8 = lVar2;
  local_70 = bVar6;
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar4 = 0;
  puVar4[2] = lVar5;
  puVar4[4] = lVar2;
  puVar4[6] = lVar3;
  local_a8 = 0;
  *(undefined4 *)(puVar4 + 10) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar4 + 0x54) = local_88._4_4_;
  *(undefined4 *)(puVar4 + 0xb) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = uStack_80._4_4_;
  puVar4[8] = local_98;
  puVar4[9] = lStack_90;
  if (lVar2 != 0) {
    local_b8 = 0;
  }
  *(byte *)(puVar4 + 0xd) = bVar6;
  if (bVar6 != 0) {
    puVar4[0xc] = local_78;
  }
  *(undefined2 *)(puVar4 + 0x10) = local_58;
  *(undefined4 *)(puVar4 + 0xe) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x74) = uStack_64;
  *(undefined4 *)(puVar4 + 0xf) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_5c;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar4;
    UNLOCK();
    LOCK();
    *puVar1 = puVar4;
    UNLOCK();
    bVar6 = local_70;
  }
  if ((bVar6 & 1) != 0) {
    local_70 = 0;
  }
  if (local_b8 != 0) {
    (**(code **)(local_98 + 0x10))(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141098482 FUN_141098482 body=1598 status=ok
// SIG undefined FUN_141098482(void)

void FUN_141098482(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 *_Src;
  int *_Src_00;
  undefined2 *_Src_01;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined2 local_3a;
  int local_38;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1409f1a5c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_31);
            goto LAB_14109856a;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_31,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_31,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_31,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
LAB_14109856a:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_141098636;
          }
        }
        _Src_00 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_141098636:
  iVar5 = local_38;
  local_3a = 0;
  FUN_140e98e1a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_3a);
            goto LAB_1410986e5;
          }
        }
        _Src_01 = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != &local_3a) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_3a,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(&local_3a,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_3a,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_3a,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3a);
  }
LAB_1410986e5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar6 = (**(code **)(*param_1 + 0x740))(param_1,local_31,iVar5 != 0,local_3a);
  if (cVar6 == '\0') {
    FUN_1468998ea(L"ServerStopUsing_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x748))(param_1,local_31,iVar5 != 0,local_3a);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141098ac6 FUN_141098ac6 body=134 status=ok
// SIG undefined FUN_141098ac6(void)

void FUN_141098ac6(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  
  if ((int)(param_2 & 0xff) < (int)param_1[0x181]) {
    plVar2 = param_1 + 0x17f;
    if ((longlong *)param_1[0x180] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x180];
    }
    bVar1 = *(byte *)((longlong)plVar2 + (ulonglong)(param_2 & 0xff));
  }
  else {
    bVar1 = 0xff;
  }
  if (((int)(uint)bVar1 < (int)param_1[0x17e]) &&
     (plVar2 = *(longlong **)(param_1[0x17d] + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x338))(plVar2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x000141098b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x880))(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 141098b4c FUN_141098b4c body=60 status=ok
// SIG undefined FUN_141098b4c(void)

void FUN_141098b4c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14117c4f6(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_141098b88(param_1);
    return;
  }
  return;
}



// FUNCTION 141098b88 FUN_141098b88 body=74 status=ok
// SIG undefined FUN_141098b88(void)

void FUN_141098b88(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 141098bd2 FUN_141098bd2 body=535 status=ok
// SIG undefined FUN_141098bd2(void)

void FUN_141098bd2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 local_30 [3];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = *(char *)(param_2 + 0x20);
  if (cVar3 == '\x01') {
    cVar3 = FUN_141098e5a(param_1,param_2);
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x28) != 0) {
      if ((*(char *)(param_2 + 0x20) == '\x01') && (*(int *)(param_2 + 0x24) != -1)) {
        lVar1 = *(longlong *)(param_2 + 0x24);
        if (lVar1 == DAT_14cb8ae40) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        if (((int)lVar1 != -1) && (lVar1 == DAT_14cb8ae48)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
      goto LAB_141098cd1;
    }
    if (((*(char *)(param_2 + 0x20) != '\x01') || (*(int *)(param_2 + 0x24) == -1)) ||
       (*(longlong *)(param_2 + 0x24) != DAT_14cb8ae40)) goto LAB_141098cd1;
    local_24 = 0;
  }
  else {
    if (cVar3 == '\x04') {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x28);
      if (((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x3c))) &&
         (cVar3 = FUN_1410993ec(lVar1,param_2), cVar3 != '\0')) {
        if (*(longlong *)(param_2 + 0x24) != DAT_14cb8ae78) {
LAB_141098df2:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        *(byte *)(lVar1 + 0x89) = *(byte *)(lVar1 + 0x89) | 1;
      }
      goto LAB_141098cd1;
    }
    if (cVar3 == '\x02') {
      lVar1 = *(longlong *)(param_2 + 0x24);
      if ((*(int *)(param_2 + 0x24) == -1) || (lVar1 != DAT_14cb8ae08)) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x28);
        if (((int)lVar1 == -1) || (lVar1 != DAT_14cb8ae10)) {
          if (lVar2 != 0) goto LAB_141098df2;
        }
        else if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        goto LAB_141098cd1;
      }
      cVar3 = FUN_141098e5a(param_1,param_2);
      if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      uVar4 = FUN_1410998e4(param_2,&DAT_14cb8ae18);
      uVar4 = FUN_1457f042e(param_1,uVar4);
      puVar5 = local_30;
    }
    else {
      if (cVar3 != '\x03') goto LAB_141098cd1;
      uVar4 = FUN_14109ab08(param_1,param_2 + 0x24);
      puVar5 = local_38;
    }
    *puVar5 = uVar4;
    *(undefined1 *)(puVar5 + 1) = 1;
  }
  FUN_141099972(param_1,param_2);
LAB_141098cd1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141098e5a FUN_141098e5a body=176 status=ok
// SIG undefined FUN_141098e5a(void)

undefined8 FUN_141098e5a(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
    pcVar5 = *(char **)(param_1 + 0xd0);
    pcVar1 = pcVar5 + (longlong)*(int *)(param_1 + 0xd8) * 0x28;
    do {
      if (*pcVar5 == '\x01') {
        cVar4 = FUN_1457f094f(param_2);
        if ((longlong)*(int *)(pcVar5 + 0x10) != 0) {
          lVar6 = 0;
          do {
            if (*(char *)(*(longlong *)(pcVar5 + 8) + lVar6) == cVar4) goto LAB_141098e8a;
            lVar6 = lVar6 + 1;
          } while (*(int *)(pcVar5 + 0x10) != lVar6);
        }
      }
      else {
LAB_141098e8a:
        iVar2 = *(int *)(pcVar5 + 0x20);
        if ((longlong)iVar2 != 0) {
          lVar6 = *(longlong *)(pcVar5 + 0x18);
          lVar7 = 0;
          do {
            plVar3 = *(longlong **)(lVar6 + lVar7);
            if ((plVar3 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2), cVar4 == '\0')) {
              return 1;
            }
            lVar7 = lVar7 + 0x18;
          } while ((longlong)iVar2 * 0x18 != lVar7);
        }
      }
      pcVar5 = pcVar5 + 0x28;
    } while (pcVar5 != pcVar1);
  }
  return 0;
}



// FUNCTION 141098f0a FUN_141098f0a body=1198 status=ok
// SIG undefined FUN_141098f0a(void)

void FUN_141098f0a(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined8 ***local_100;
  undefined1 local_f4 [4];
  undefined8 ***local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((0 < *(int *)((longlong)param_1 + 0x3c)) || (cVar8 = FUN_1410993ec(), cVar8 == '\0'))
  goto LAB_14109907f;
  puVar1 = (uint *)(param_1 + 0xd);
  iVar9 = *(int *)((longlong)param_1 + 0x6c);
  if (iVar9 == 0) {
LAB_141098fcb:
    cVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    if (cVar8 != '\0') {
      if ((*(byte *)((longlong)param_1 + 0x89) & 2) == 0) {
        lVar11 = param_1[0xb];
        FUN_1410994b4(param_1,param_2,lVar11 + 0x80,1);
        FUN_141099676(param_1,param_2,lVar11 + 0x98,1);
        (**(code **)(*param_1 + 0x70))(param_1,param_2);
        if ((((*(int *)((longlong)param_1 + 0x6c) != 0) && (uVar5 = *puVar1, -1 < (int)uVar5)) &&
            (((int)uVar5 < DAT_14c9647dc &&
             ((lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar11 != 0
              && (*(int *)(lVar11 + 0x10) == *(int *)((longlong)param_1 + 0x6c))))))) &&
           (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 &&
            (lVar11 = FUN_14479d2ce(puVar1), *(char *)(lVar11 + 0x5c) == '\x02')))) {
          *(undefined1 *)(lVar11 + 0x5c) = 3;
          FUN_1457f03fe(lVar11);
        }
        FUN_141099460(param_1,param_2);
        if ((*(byte *)(param_1 + 0x11) & 8) == 0) {
          local_68 = 0;
          uVar10 = 0;
          local_60 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_5c = 0xffffffff00000080;
          local_54 = 0;
          local_48 = 0;
          local_40 = 0;
          if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
            uVar10 = (undefined4)param_1[8];
          }
          uStack_d8 = CONCAT62(uStack_d8._2_6_,4);
          local_f0 = (undefined8 ***)CONCAT44(local_f0._4_4_,uVar10);
          local_d0 = 2;
          local_108 = &DAT_14cb8ae20;
          local_100 = &local_f0;
          FUN_140881f5a(&local_88,local_f4,&local_108,0);
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
          if (pcVar6 != (code *)0x0) {
            ppppuVar12 = &local_f0;
            if (0x18 < (ushort)uStack_d8) {
              ppppuVar12 = (undefined8 ****)local_f0;
            }
            (*pcVar6)(ppppuVar12);
          }
          if (0x18 < (ushort)uStack_d8) {
            FUN_1400020a8(local_f0);
          }
          (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_88);
          lVar11 = param_1[0xb];
          local_f0 = (undefined8 ***)param_1[0xe];
          plVar7 = (longlong *)param_1[0xf];
          local_e8 = plVar7;
          if (plVar7 == (longlong *)0x0) {
            FUN_1457f07a4(lVar11,param_2,&local_f0,&local_88);
          }
          else {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            FUN_1457f07a4(lVar11,param_2,&local_f0,&local_88);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar3 = (int *)((longlong)plVar7 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
          }
          lVar11 = param_1[0xb];
          (**(code **)(*param_1 + 8))(param_1,&local_f0);
          local_e8 = (longlong *)DAT_14cb8ae08;
          local_c0 = 0;
          local_b8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_b4 = 0xffffffff00000080;
          local_ac = 0;
          local_a0 = 0;
          local_98 = 0;
          FUN_140725242(&local_e0,&local_88);
          local_90 = 1;
          FUN_14109984c(lVar11,param_2,&local_f0);
          local_98 = 0;
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_e0);
          local_40 = 0;
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_88);
        }
      }
      else if ((*(byte *)(param_1 + 0x11) & 0x82) == 0) {
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x80;
        (**(code **)(*param_1 + 0x68))(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
      }
      goto LAB_14109907f;
    }
  }
  else {
    uVar5 = *puVar1;
    if ((((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
        (lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar11 != 0)) &&
       ((*(int *)(lVar11 + 0x10) == iVar9 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
      lVar11 = FUN_14479d2ce(puVar1);
      if (*(char *)(lVar11 + 0x5c) == '\x01') goto LAB_14109907f;
      iVar9 = *(int *)((longlong)param_1 + 0x6c);
      if (iVar9 == 0) goto LAB_141098fcb;
    }
    uVar5 = *puVar1;
    if ((((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) ||
       ((lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar11 == 0 ||
        (((*(int *)(lVar11 + 0x10) != iVar9 || ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) ||
         (lVar11 = FUN_14479d2ce(puVar1), *(char *)(lVar11 + 0x5c) != '\x04'))))))
    goto LAB_141098fcb;
  }
  bVar4 = *(byte *)(param_1 + 0x11);
  if (((((bVar4 & 2) == 0) && (*(byte *)(param_1 + 0x11) = bVar4 | 2, (bVar4 & 0xc) != 0)) &&
      ((int)param_1[4] != 0)) && (param_1[3] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
  }
LAB_14109907f:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410993ec FUN_1410993ec body=115 status=ok
// SIG undefined FUN_1410993ec(void)

undefined8 FUN_1410993ec(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
    if ((char)param_2[4] == '\x01') {
      if ((*(byte *)(param_1 + 0x88) & 0x20) != 0) goto LAB_14109945b;
      if (*(char *)(param_1 + 0x84) == '\x01') {
        fVar1 = *(float *)(param_1 + 0x80);
        fVar4 = 0.0;
        if (*(longlong *)(*param_2 + 0x40) != 0) {
          lVar3 = FUN_1447210f0();
          if (lVar3 != 0) {
            fVar4 = (float)*(double *)(lVar3 + 0x6d0);
          }
        }
        if ((fVar1 == fVar4) && (!NAN(fVar1) && !NAN(fVar4))) goto LAB_14109945b;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_14109945b:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141099460 FUN_141099460 body=84 status=ok
// SIG undefined FUN_141099460(void)

void FUN_141099460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  if ((char)param_2[4] == '\x01') {
    fVar2 = 0.0;
    if (*(longlong *)(*param_2 + 0x40) != 0) {
      lVar1 = FUN_1447210f0();
      if (lVar1 != 0) {
        fVar2 = (float)*(double *)(lVar1 + 0x6d0);
      }
    }
    *(float *)(param_1 + 0x80) = fVar2;
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  return;
}



// FUNCTION 1410994b4 FUN_1410994b4 body=358 status=ok
// SIG undefined FUN_1410994b4(void)

void FUN_1410994b4(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(byte *)(param_1 + 0x88) & 8) == 0) {
    return;
  }
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  lVar6 = param_3[2];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*param_3 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_3[2] = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,param_3);
    param_3[2] = lVar6;
    if (lVar6 == 0) {
      return;
    }
    lVar5 = param_3[1];
  }
  lVar1 = *param_2;
  if (lVar5 == 0) {
    uVar4 = FUN_14110242a();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
    lVar6 = param_3[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_3 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,param_3);
      }
      param_3[2] = lVar6;
    }
  }
  cVar3 = FUN_14109961a(lVar1 + 0x48,lVar6,param_4,0);
  if (cVar3 == '\0') {
    return;
  }
  FUN_1447f69b6(lVar1 + 0x1f0);
  return;
}



// FUNCTION 14109961a FUN_14109961a body=92 status=ok
// SIG undefined FUN_14109961a(void)

undefined8 FUN_14109961a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) &&
     ((longlong)*(int *)(param_1 + 1) != 0)) {
    plVar1 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) * 0x90;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        FUN_140898270(param_1,plVar1,param_3,param_4,0);
        return 1;
      }
      plVar1 = plVar1 + 0x12;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 141099676 FUN_141099676 body=470 status=ok
// SIG undefined FUN_141099676(void)

void FUN_141099676(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x88) & 8) == 0) {
    return;
  }
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e391b0();
    lVar4 = FUN_14477b664(uVar3);
    param_3[1] = lVar4;
  }
  if (param_3[2] == 0) {
    if (*param_3 == 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_3[2] = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_3);
    param_3[2] = lVar4;
    if (lVar4 == 0) {
      return;
    }
    lVar4 = param_3[1];
  }
  uVar3 = *param_2;
  if (param_4 != '\0') {
    if (lVar4 == 0) {
      uVar5 = FUN_140e391b0();
      lVar4 = FUN_14477b664(uVar5);
      param_3[1] = lVar4;
      if (((param_3[2] == 0) && (lVar4 != 0)) && (*param_3 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar4 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar5,param_3);
        }
        param_3[2] = lVar4;
      }
    }
    FUN_1410b135e(uVar3);
    return;
  }
  if (lVar4 == 0) {
    uVar5 = FUN_140e391b0();
    lVar4 = FUN_14477b664(uVar5);
    param_3[1] = lVar4;
    if (((param_3[2] == 0) && (lVar4 != 0)) && (*param_3 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar5,param_3);
      }
      param_3[2] = lVar4;
    }
  }
  FUN_1457f0af6(uVar3);
  return;
}



// FUNCTION 14109984c FUN_14109984c body=151 status=ok
// SIG undefined FUN_14109984c(void)

void FUN_14109984c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  longlong local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x38;
    do {
      if (*plVar1 == *param_3) {
        if (plVar1 != (longlong *)0x0) {
          local_10 = param_3[1];
          local_14 = (undefined1)param_3[0xc];
          local_1c = *(undefined4 *)(param_2[1] + 0x78);
          local_24 = plVar1[2];
          local_18 = 0;
          FUN_1412352c8(*param_2,&local_24,param_3 + 2);
        }
        break;
      }
      plVar1 = plVar1 + 7;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410998e4 FUN_1410998e4 body=142 status=ok
// SIG undefined FUN_1410998e4(void)

void FUN_1410998e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x38) == lVar3) goto LAB_141099962;
        iVar4 = *(int *)(lVar6 + 0x30);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_141099962:
  lVar3 = lVar6 + 8;
  if (lVar6 == 0) {
    lVar3 = 0;
  }
  FUN_1405d5f74(lVar3);
  return;
}



// FUNCTION 141099972 FUN_141099972 body=2456 status=ok
// SIG undefined FUN_141099972(void)

void FUN_141099972(undefined4 param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong ****pppplVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong ****pppplVar13;
  longlong *plVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong in_RCX;
  longlong ****pppplVar17;
  longlong *****ppppplVar18;
  code *pcVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_a8 [32];
  longlong ****local_88;
  longlong *plStack_80;
  int local_78;
  int local_74;
  longlong ****local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2[2] + 0x28) != 0) {
LAB_14109a224:
    FUN_1457f106e(in_RCX,param_2);
    goto LAB_141099d4b;
  }
  lVar11 = *(longlong *)(in_RCX + 0xb8);
  if (lVar11 == 0) {
    uVar15 = FUN_14110242a();
    lVar11 = FUN_14477b664(uVar15);
    *(longlong *)(in_RCX + 0xb8) = lVar11;
    param_1 = extraout_XMM0_Da;
  }
  plVar14 = (longlong *)(in_RCX + 0xb0);
  lVar12 = *(longlong *)(in_RCX + 0xc0);
  if (lVar12 == 0) {
    if ((*plVar14 != 0) && (lVar11 != 0)) {
      plVar6 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar6 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar8 == '\0')) {
        *(undefined8 *)(in_RCX + 0xc0) = 0;
      }
      else {
        uVar15 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar12 = FUN_144aff482(uVar15,plVar14);
        *(longlong *)(in_RCX + 0xc0) = lVar12;
        if (lVar12 != 0) {
          lVar11 = *(longlong *)(in_RCX + 0xb8);
          param_1 = extraout_XMM0_Da_00;
          goto LAB_141099f1e;
        }
      }
    }
  }
  else {
LAB_141099f1e:
    lVar7 = *param_2;
    if (lVar11 == 0) {
      uVar15 = FUN_14110242a(param_1,lVar12);
      lVar11 = FUN_14477b664(uVar15);
      *(longlong *)(in_RCX + 0xb8) = lVar11;
      if (((*(longlong *)(in_RCX + 0xc0) == 0) && (lVar11 != 0)) && (*plVar14 != 0)) {
        plVar6 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar8 == '\0')) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar6 + 0x110))(plVar6);
          uVar15 = FUN_144aff482(uVar15,plVar14);
        }
        *(undefined8 *)(in_RCX + 0xc0) = uVar15;
      }
    }
    cVar8 = FUN_141491aa0(lVar7 + 0x48);
    if (cVar8 == '\0') goto LAB_14109a224;
  }
  if ((char)param_2[4] != '\x02') {
    FUN_14109a366(in_RCX,&local_70);
    pppplVar13 = local_70;
    if ((((longlong *****)local_70 != (longlong *****)0x0) &&
        (lVar11 = FUN_14109a60a(), lVar11 != 0)) &&
       ((*(int *)(lVar11 + 0x38) <= *(int *)(pppplVar13 + 7) &&
        ((longlong ***)pppplVar13[6][*(int *)(lVar11 + 0x38)] == (longlong ***)(lVar11 + 0x30))))) {
      pppplVar17 = (longlong ****)pppplVar13[0x22];
      if (pppplVar17 == (longlong ****)0x0) {
        FUN_140aa6c08(pppplVar13);
        pppplVar17 = (longlong ****)pppplVar13[0x22];
      }
      cVar8 = FUN_1457f0564(pppplVar17,*param_2,*(undefined8 *)(*param_2 + 0x40));
      if (cVar8 == '\0') goto LAB_14109a224;
    }
    if ((char)param_2[4] != '\x02') {
      uVar3 = *(undefined4 *)(in_RCX + 8);
      FUN_14109a366(in_RCX,&local_70);
      lVar11 = FUN_14109a6e8(param_2,&local_70,uVar3);
      if ((lVar11 != 0) && (*(char *)(lVar11 + 0x5c) == '\x01')) goto LAB_141099d4b;
    }
  }
  lVar11 = *param_2;
  if ((*(longlong *)(lVar11 + 0x88) != 0) &&
     ((*(longlong **)(lVar11 + 0x90) != (longlong *)0x0 &&
      (lVar12 = (**(code **)(**(longlong **)(lVar11 + 0x90) + 0x10))(), lVar12 != 0)))) {
    FUN_1407ae1a6(lVar12,&local_70,&DAT_14cb8c3a8);
    plVar14 = local_68;
    if (((longlong *****)local_70 != (longlong *****)0x0) && ((longlong)*(int *)(local_70 + 6) != 0)
       ) {
      pppplVar13 = (longlong ****)local_70[5];
      lVar12 = (longlong)*(int *)(local_70 + 6) * 0x48;
      do {
        if (pppplVar13[3] == *(longlong ****)(in_RCX + 0x60)) {
          if ((pppplVar13 != (longlong ****)0x0) && (*(char *)(pppplVar13 + 4) != '\0')) {
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_68 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            goto LAB_14109a224;
          }
          break;
        }
        pppplVar13 = pppplVar13 + 9;
        lVar12 = lVar12 + -0x48;
      } while (lVar12 != 0);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_68 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  iVar4 = *(int *)(lVar11 + 0xa0);
  if ((longlong)iVar4 != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x98);
    lVar12 = 0;
    do {
      cVar8 = FUN_14109a30c(*(undefined8 *)(lVar11 + lVar12),in_RCX + 0x58);
      if (cVar8 == '\0') goto LAB_14109a224;
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar4 * 8 != lVar12);
  }
  if ((char)param_2[4] == '\x02') {
    if ((param_3[1] & 1) != 0) {
      uVar10 = *param_3;
      goto LAB_141099b3c;
    }
LAB_141099f7c:
    plVar14 = (longlong *)0x0;
LAB_141099f7f:
    local_88 = (longlong ****)0x0;
    plStack_80 = (longlong *)0x0;
  }
  else {
    uVar3 = *(undefined4 *)(in_RCX + 8);
    FUN_14109a366(in_RCX,&local_70);
    plVar14 = (longlong *)FUN_14109a6e8(param_2,&local_70,uVar3);
    uVar10 = 0;
    if (plVar14 != (longlong *)0x0) {
      if ((char)param_2[4] == '\x03') {
        cVar8 = *(char *)((longlong)plVar14 + 0x5c);
      }
      else {
        FUN_140f980d0(*(undefined8 *)(param_2[2] + 0x10));
        *(undefined1 *)((longlong)plVar14 + 0x5c) = 0;
        if (*(int *)((longlong)plVar14 + 0x54) != -1) {
          *(undefined8 *)((longlong)plVar14 + 0x54) = 0xffffffff;
        }
        FUN_1457f06bc(plVar14);
        (**(code **)(*plVar14 + 0x2a8))(plVar14);
        FUN_1457f04fe(plVar14);
        cVar8 = *(char *)((longlong)plVar14 + 0x5c);
        if (cVar8 == '\x01') goto LAB_141099d4b;
      }
      if (cVar8 == '\x04') goto LAB_14109a224;
      uVar10 = FUN_14109ab08(in_RCX,(longlong)plVar14 + 0x54);
    }
    *param_3 = uVar10;
    *(undefined1 *)(param_3 + 1) = 1;
LAB_141099b3c:
    if (((int)uVar10 < 0) || (*(int *)(in_RCX + 0x40) <= (int)uVar10)) goto LAB_141099f7c;
    ppppplVar18 = *(longlong ******)(*(longlong *)(in_RCX + 0x38) + (ulonglong)uVar10 * 0x18);
    plVar14 = *(longlong **)(*(longlong *)(in_RCX + 0x38) + 8 + (ulonglong)uVar10 * 0x18);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar14 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      if (ppppplVar18 != (longlong *****)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        local_68 = plVar14;
        goto LAB_141099b96;
      }
      goto LAB_141099f7f;
    }
    if (ppppplVar18 == (longlong *****)0x0) goto LAB_141099f7c;
    local_68 = (longlong *)0x0;
LAB_141099b96:
    local_70 = (longlong ****)ppppplVar18;
    (*(code *)(*ppppplVar18)[3])(ppppplVar18,&local_88,param_2[2],&local_70);
    plVar6 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar14 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((longlong *****)local_88 == (longlong *****)0x0) {
    FUN_1457f106e(in_RCX,param_2);
  }
  else {
    lVar11 = param_2[2];
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    plVar14 = *(longlong **)(lVar11 + 0x30);
    *(longlong *****)(lVar11 + 0x28) = local_88;
    *(longlong **)(lVar11 + 0x30) = plStack_80;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar14 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    pppplVar13 = local_88;
    if ((*(byte *)(local_88 + 0x11) & 1) == 0) {
      bVar9 = (*(byte *)(local_88 + 0x11) & 0xf6 | (*(byte *)(*param_2 + 0x248) & 1) << 3) ^ 8;
      *(byte *)(local_88 + 0x11) = bVar9;
      *(byte *)(local_88 + 0x11) = bVar9 & 0xee | ((char)param_2[4] != '\x02') << 4;
      *(undefined4 *)(local_88 + 7) = *(undefined4 *)(*(longlong *)param_2[2] + 8);
      pppplVar17 = *(longlong *****)(param_2[2] + 0x10);
      pppplVar5 = *(longlong *****)(param_2[2] + 0x18);
      if (pppplVar5 == (longlong ****)0x0) {
        local_88[0xe] = (longlong ***)pppplVar17;
        pppplVar17 = (longlong ****)local_88[0xf];
        if (pppplVar17 != (longlong ****)0x0) {
          local_88[0xf] = (longlong ***)0x0;
LAB_14109a042:
          LOCK();
          pppplVar5 = pppplVar17 + 1;
          *(int *)pppplVar5 = *(int *)pppplVar5 + -1;
          UNLOCK();
          if (*(int *)pppplVar5 == 0) {
            (*(code *)**pppplVar17)(pppplVar17);
            LOCK();
            piVar2 = (int *)((longlong)pppplVar17 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2;
            UNLOCK();
joined_r0x00014109a07d:
            if (iVar4 == 0) {
              (*(code *)(*pppplVar17)[2])(pppplVar17);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(pppplVar5 + 1) = *(int *)(pppplVar5 + 1) + 1;
        UNLOCK();
        local_88[0xe] = (longlong ***)pppplVar17;
        pppplVar17 = (longlong ****)local_88[0xf];
        if (pppplVar5 == pppplVar17) {
          LOCK();
          pppplVar17 = pppplVar5 + 1;
          *(int *)pppplVar17 = *(int *)pppplVar17 + -1;
          UNLOCK();
          if (*(int *)pppplVar17 == 0) {
            (*(code *)**pppplVar5)(pppplVar5);
            LOCK();
            piVar2 = (int *)((longlong)pppplVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar4 = *piVar2;
            UNLOCK();
            pppplVar17 = pppplVar5;
            goto joined_r0x00014109a07d;
          }
        }
        else {
          local_88[0xf] = (longlong ***)pppplVar5;
          if (pppplVar17 != (longlong ****)0x0) goto LAB_14109a042;
        }
      }
      pppplVar13[0xd] = (longlong ***)*(longlong *****)(param_2[2] + 0x20);
      if (((ulonglong)pppplVar13[0x11] & 0x10) == 0) {
        pppplVar17 = (longlong ****)pppplVar13[0xb];
        pppplVar5 = (longlong ****)pppplVar13[0xf];
        if (pppplVar5 == (longlong ****)0x0) {
          FUN_14109b4da(pppplVar17,param_2);
        }
        else {
          LOCK();
          *(int *)(pppplVar5 + 1) = *(int *)(pppplVar5 + 1) + 1;
          UNLOCK();
          FUN_14109b4da(pppplVar17,param_2);
          LOCK();
          pppplVar17 = pppplVar5 + 1;
          *(int *)pppplVar17 = *(int *)pppplVar17 + -1;
          UNLOCK();
          if (*(int *)pppplVar17 == 0) {
            (*(code *)**pppplVar5)(pppplVar5);
            LOCK();
            piVar2 = (int *)((longlong)pppplVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pppplVar5)[2])(pppplVar5);
            }
          }
        }
        local_78 = FUN_1410998e4(param_2,&DAT_14cb8ae20);
      }
      else {
        local_78 = rand();
      }
      *(int *)(pppplVar13 + 8) = local_78;
      *(undefined1 *)((longlong)pppplVar13 + 0x44) = 1;
      lVar11 = (longlong)*(int *)(*(longlong *)param_2[2] + 0x30);
      local_74 = local_78;
      if (lVar11 != 0) {
        lVar12 = *(longlong *)(*(longlong *)param_2[2] + 0x28);
        lVar11 = lVar11 << 4;
        do {
          FUN_148974296(lVar12,&local_70,&local_78);
          iVar4 = *(int *)(pppplVar13 + 10);
          *(uint *)(pppplVar13 + 10) = iVar4 + 1U;
          if (*(uint *)((longlong)pppplVar13 + 0x54) < iVar4 + 1U) {
            FUN_140a4bb3a(pppplVar13 + 9,iVar4);
          }
          pppplVar17 = (longlong ****)(pppplVar13[9] + (longlong)iVar4 * 5);
          *(ushort *)(pppplVar17 + 3) = local_58;
          if (local_58 < 0x19) {
            uVar16 = (ulonglong)((uint)local_50 * 0x120);
            pcVar19 = *(code **)((longlong)&DAT_14c9a85b8 + uVar16);
            if ((pcVar19 == (code *)0x0) &&
               (pcVar19 = *(code **)((longlong)&DAT_14c9a85b0 + uVar16), pcVar19 == (code *)0x0)) {
              memcpy(pppplVar17,&local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar16));
            }
            else {
              (*pcVar19)(pppplVar17,&local_70);
            }
          }
          else {
            *pppplVar17 = (longlong ***)local_70;
            local_70 = (longlong ****)0x0;
            local_58 = 0;
          }
          *(byte *)(pppplVar17 + 4) = local_50;
          local_50 = 0;
          if (DAT_14c9a85d0 != (code *)0x0) {
            ppppplVar18 = &local_70;
            if (0x18 < local_58) {
              ppppplVar18 = (longlong *****)local_70;
            }
            (*DAT_14c9a85d0)(ppppplVar18);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70);
          }
          lVar12 = lVar12 + 0x10;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
      (*(code *)(*pppplVar13)[4])(pppplVar13,param_2);
      *(byte *)(pppplVar13 + 0x11) = *(byte *)(pppplVar13 + 0x11) | 1;
    }
    FUN_141098f0a(local_88,param_2);
    plVar14 = plStack_80;
    local_70 = local_88;
    local_68 = plStack_80;
    if (plStack_80 == (longlong *)0x0) {
      FUN_14109ab70(param_2,&local_70);
    }
    else {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      FUN_14109ab70(param_2);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar14 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  plVar14 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_80 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_141099d4b:
  if ((char)param_3[1] == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109a30c FUN_14109a30c body=89 status=ok
// SIG undefined FUN_14109a30c(void)

ulonglong FUN_14109a30c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
    do {
      cVar1 = FUN_1489749da(plVar2);
      if ((cVar1 != '\0') && (cVar1 = FUN_14897423e(*plVar2 + 0x58,param_2), cVar1 == '\0')) {
        uVar3 = 0;
        break;
      }
      plVar2 = plVar2 + 7;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14109a366 FUN_14109a366 body=670 status=ok
// SIG undefined FUN_14109a366(void)

longlong * FUN_14109a366(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (uint *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0xe4) == 0) {
LAB_14109a3da:
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(puVar1,lVar4);
        if (lVar4 == 0) goto LAB_14109a3e4;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_14109a44f;
    }
  }
  else {
    uVar2 = *puVar1;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14109a3da;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 == (longlong *)0x0) ||
       ((((int)plVar9[2] != *(int *)(param_1 + 0xe4) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))
        || (lVar4 = *plVar9, lVar4 == 0)))) goto LAB_14109a3da;
LAB_14109a44f:
    if (DAT_14c949118 == 0) {
      local_40 = FUN_140631fbe;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar5;
      FUN_1446f470e(local_38,L"Class",1);
      local_58 = &LAB_146891e90;
      local_60 = &LAB_146273097;
      local_70 = L"Engine";
      local_68 = 199;
      local_78 = 0x20;
      local_80 = 0x10000000;
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
      local_50 = &local_40;
      FUN_14574b4b2(lVar5);
      DAT_14c949118 = lVar5;
      uVar6 = FUN_144a7a812();
      lVar5 = DAT_14c949118;
      uVar7 = FUN_1449e2fb2();
      local_88 = L"Class";
      FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      lVar5 = FUN_14109a60a();
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
        lVar8 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar8 = lVar4;
        }
        *param_2 = lVar8;
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c();
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
        goto LAB_14109a3eb;
      }
    }
  }
LAB_14109a3e4:
  *param_2 = 0;
LAB_14109a3eb:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109a60a FUN_14109a60a body=221 status=ok
// SIG undefined FUN_14109a60a(void)

longlong FUN_14109a60a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb63be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486f6aa5;
    local_40 = FUN_143c65904;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillActionExecHandler",&DAT_14cb63be8,FUN_1464ff68a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109a6e8 FUN_14109a6e8 body=1055 status=ok
// SIG undefined FUN_14109a6e8(void)

undefined8 FUN_14109a6e8(undefined8 *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *param_2;
  if ((((lVar5 != 0) && (lVar4 = FUN_14109a60a(), lVar4 != 0)) &&
      (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     (lVar2 = *param_2,
     lVar2 != 0 &&
     *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
     lVar4 + 0x30)) {
    lVar5 = (longlong)*(int *)(param_1[1] + 0x50);
    if (lVar5 != 0) {
      plVar10 = *(longlong **)(param_1[1] + 0x48);
      lVar5 = lVar5 * 0x38;
      uVar8 = 0;
      do {
        if (*(int *)(*plVar10 + 8) == param_3) {
          if (plVar10 == (longlong *)0x0) goto LAB_14109a9f6;
          iVar3 = *(int *)((longlong)plVar10 + 0x24);
          if ((((iVar3 == 0) || (uVar1 = *(uint *)(plVar10 + 4), (int)uVar1 < 0)) ||
              ((DAT_14c9647dc <= (int)uVar1 ||
               ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0
                || (*(int *)(lVar5 + 0x10) != iVar3)))))) ||
             ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) {
            lVar5 = FUN_14109a60a();
            if (((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              lVar5 = 0;
            }
            else {
              lVar5 = *param_2;
            }
            lVar5 = FUN_14655f636(param_1[1],lVar5);
            local_58 = plVar10[2];
            local_50 = plVar10[3];
            if (local_50 != 0) {
              LOCK();
              *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
              UNLOCK();
            }
            local_68 = &local_58;
            FUN_14897460c(lVar5,*param_1,param_1[1],param_3);
            iVar3 = *(int *)(*plVar10 + 0xc);
            lVar4 = param_1[1];
            if (*(int *)(lVar5 + 0x30) != 3) {
              FUN_1446efa72((longlong *)(lVar5 + 0x28),0,3,0x10);
              *(undefined4 *)(lVar5 + 0x30) = 3;
            }
            puVar7 = *(undefined8 **)(lVar5 + 0x28);
            *puVar7 = &PTR_LAB_14b42a230;
            *(bool *)((longlong)puVar7 + 0xc) = iVar3 != -1;
            if (iVar3 != -1) {
              *(int *)(puVar7 + 1) = iVar3;
            }
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 1;
            lVar2 = DAT_14c758608 + 1;
            if (lVar6 == 0) {
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 2;
              lVar2 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar2;
            puVar7[2] = lVar6;
            *puVar7 = &PTR_FUN_14b42a1c0;
            puVar7[3] = 0;
            if (lVar4 == 0) {
              iVar3 = 0;
            }
            else {
              uVar1 = *(uint *)(lVar4 + 0xc);
              *(uint *)(puVar7 + 3) = uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              iVar3 = *(int *)(lVar4 + 0x10);
              if (*(int *)(lVar4 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                iVar9 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar9);
                }
                LOCK();
                iVar3 = *(int *)(lVar4 + 0x10);
                bVar11 = iVar3 == 0;
                if (bVar11) {
                  *(int *)(lVar4 + 0x10) = iVar9;
                  iVar3 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar3 = iVar9;
                }
              }
            }
            *(int *)((longlong)puVar7 + 0x1c) = iVar3;
            puVar7[4] = FUN_1458ee598;
            lVar4 = param_1[1];
            if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
            iVar3 = *(int *)(lVar4 + 0x40);
            *(uint *)(lVar4 + 0x40) = iVar3 + 1U;
            if (*(uint *)(lVar4 + 0x44) < iVar3 + 1U) {
              FUN_1465605c2((longlong *)(lVar4 + 0x38),iVar3);
            }
            *(longlong *)(*(longlong *)(lVar4 + 0x38) + (longlong)iVar3 * 8) = lVar5;
            if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
              if (lVar5 == 0) {
                plVar10[4] = 0;
                goto LAB_14109a9f6;
              }
            }
            else {
              FUN_1456cec3c(lVar5);
            }
            uVar1 = *(uint *)(lVar5 + 0xc);
            *(uint *)(plVar10 + 4) = uVar1;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar3 = *(int *)(lVar5 + 0x10);
            if (iVar3 == 0) {
              LOCK();
              iVar3 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar3;
              if (bVar11) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              uVar8 = 0;
              LOCK();
              iVar3 = *(int *)(lVar5 + 0x10);
              bVar11 = iVar3 == 0;
              if (bVar11) {
                *(int *)(lVar5 + 0x10) = iVar9;
                iVar3 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar3 = iVar9;
              }
              *(int *)((longlong)plVar10 + 0x24) = iVar3;
              if (iVar3 == 0) break;
            }
            else {
              *(int *)((longlong)plVar10 + 0x24) = iVar3;
            }
          }
          uVar1 = *(uint *)(plVar10 + 4);
          uVar8 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
            goto LAB_14109a9f6;
            uVar8 = *puVar7;
          }
          break;
        }
        plVar10 = plVar10 + 7;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      goto LAB_14109a9f8;
    }
  }
LAB_14109a9f6:
  uVar8 = 0;
LAB_14109a9f8:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14109ab08 FUN_14109ab08 body=104 status=ok
// SIG undefined FUN_14109ab08(void)

int FUN_14109ab08(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((int)*param_2 == -1) {
    return -(uint)(*(int *)(param_1 + 0x40) < 1);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar4);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x14) == *param_2)) {
        iVar3 = (int)(uVar4 >> 3) * -0x55555555;
        if (iVar3 < 0) {
          return -1;
        }
        if (iVar1 <= iVar3) {
          return -1;
        }
        return iVar3;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != uVar4);
  }
  return -1;
}



// FUNCTION 14109ab70 FUN_14109ab70 body=1402 status=ok
// SIG undefined FUN_14109ab70(void)

void FUN_14109ab70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = *param_2;
  if ((*(byte *)(lVar14 + 0x88) & 2) != 0) {
    lVar14 = param_1[2];
    *(undefined8 *)(lVar14 + 0x28) = 0;
    puVar4 = *(undefined8 **)(lVar14 + 0x30);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar14 + 0x30) = 0;
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar2 = (int *)((longlong)puVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
    goto LAB_14109ae8d;
  }
  lVar10 = param_1[1];
  if (*(int *)(lVar14 + 0x20) != 3) {
    FUN_1446efa72((longlong *)(lVar14 + 0x18),0,3,0x10);
    *(undefined4 *)(lVar14 + 0x20) = 3;
  }
  puVar4 = *(undefined8 **)(lVar14 + 0x18);
  *puVar4 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  puVar4[2] = lVar11;
  *puVar4 = &PTR_FUN_14b42a070;
  puVar4[3] = 0;
  if (lVar10 == 0) {
    iVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    *(uint *)(puVar4 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar9 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar9 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar9 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar9;
  puVar4[4] = FUN_140f97bc6;
  lVar14 = *param_2;
  lVar10 = param_1[1];
  if (*(int *)(lVar14 + 0x30) != 3) {
    FUN_1446efa72((longlong *)(lVar14 + 0x28),0,3,0x10);
    *(undefined4 *)(lVar14 + 0x30) = 3;
  }
  puVar4 = *(undefined8 **)(lVar14 + 0x28);
  *puVar4 = &PTR_LAB_14b42a150;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  puVar4[2] = lVar11;
  *puVar4 = &PTR_FUN_14b42a0e0;
  puVar4[3] = 0;
  if (lVar10 == 0) {
    iVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    *(uint *)(puVar4 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar9 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar9 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar9 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar9;
  puVar4[4] = FUN_143e35108;
  lVar14 = *(longlong *)param_1[2];
  if (*(longlong *)(lVar14 + 0x60) == 0) goto LAB_14109ae8d;
  if (((*(longlong *)(*param_1 + 0x88) == 0) ||
      (plVar5 = *(longlong **)(*param_1 + 0x90), plVar5 == (longlong *)0x0)) ||
     (lVar10 = (**(code **)(*plVar5 + 0x10))(), lVar10 == 0)) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_1407ae1a6(lVar10,&local_48,&DAT_14cb8c3a8);
    lVar10 = local_48;
    if (local_48 != 0) {
      lVar11 = *param_2;
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      lVar6 = *param_2;
      plVar7 = (longlong *)param_2[1];
      if (plVar7 == (longlong *)0x0) {
        *local_58 = &PTR_LAB_14b42a8e0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_58[2] = lVar13;
        *local_58 = &PTR_FUN_14b42a000;
        local_58[3] = lVar6;
        local_58[4] = 0;
        local_58[5] = lVar11;
        local_58[6] = plVar5;
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b42a8e0;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_58[2] = lVar13;
        *local_58 = &PTR_FUN_14b42a000;
        local_58[3] = lVar6;
        local_58[4] = plVar7;
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        local_58[5] = lVar11;
        local_58[6] = plVar5;
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
      FUN_14109b102(lVar10,local_60,lVar14 + 0x60,&local_58);
      if (local_50 == 0) {
LAB_14109ae5c:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_14109ae5c;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14109ae8d:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14109b102 FUN_14109b102 body=808 status=ok
// SIG undefined FUN_14109b102(void)

undefined8 *
FUN_14109b102(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong **param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_1407ae652(param_1,param_3);
  local_50 = (longlong *)0x0;
  local_48 = 0;
  if (&local_50 == param_4) {
    *param_2 = 0;
    goto LAB_14109b297;
  }
  local_40 = (longlong *)0x0;
  local_38 = 0;
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_4 + 1) == 0) {
    iVar9 = 0;
LAB_14109b3bf:
    local_38 = 0;
    local_40 = (longlong *)0x0;
    local_50 = plVar6;
    local_48 = iVar9;
LAB_14109b1cb:
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar1 = *param_4;
    iVar9 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14109b3bf;
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_40);
    iVar9 = local_38;
    plVar6 = local_40;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_14109b3bf;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_50 = plVar6;
    local_48 = iVar9;
    if (local_38 == 0) goto LAB_14109b1cb;
    if (local_40 != (longlong *)0x0) {
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
      goto LAB_14109b1cb;
    }
  }
  *param_2 = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_14109b297;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_14109b281;
    }
  }
  else {
    if (*(int *)((longlong)plVar5 + 0x14) < 1) {
      iVar9 = (int)plVar5[1];
      iVar4 = (int)plVar5[2] + -1;
      *(int *)(plVar5 + 2) = iVar4;
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
        if (0 < iVar9) {
          iVar7 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar5 + (longlong)iVar7 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar6 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar5,iVar7);
              FUN_14005b248(plVar5);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)plVar5[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(plVar5 + 2) = iVar7;
        if ((iVar7 < iVar9) && (*(int *)((longlong)plVar5 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    plVar6 = (longlong *)0x0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      plVar6 = local_40;
    }
    *param_2 = plVar6;
    iVar9 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar9 + 1U) {
      FUN_1447a71f6(plVar5,iVar9);
    }
    lVar2 = *plVar5;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar2 + lVar8) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar8) = 0;
    *(longlong **)(lVar2 + lVar8) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar8) = local_48;
LAB_14109b281:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14109b297:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14109b42c FUN_14109b42c body=172 status=ok
// SIG undefined FUN_14109b42c(void)

byte * FUN_14109b42c(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_78 [45];
  byte local_4b;
  byte local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 == 0) {
    bVar4 = 0;
    bVar5 = 0;
    bVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    bVar6 = 0;
    bVar5 = 0;
    bVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_4b);
        bVar6 = bVar6 | local_4b;
        bVar5 = bVar5 | local_4a;
        bVar4 = bVar4 | local_49;
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar7);
  }
  *param_2 = bVar6;
  param_2[1] = bVar5;
  param_2[2] = bVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109b4da FUN_14109b4da body=416 status=ok
// SIG undefined FUN_14109b4da(void)

void FUN_14109b4da(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x50)) {
    uVar11 = 0;
    do {
      lVar5 = FUN_14108b142(*(longlong *)(param_1 + 0x48) + uVar11 * 0x28);
      if (lVar5 != 0) {
        plVar1 = (longlong *)param_2[3];
        FUN_14655f5bd(&local_88,uVar11 & 0xffffffff);
        if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
          uVar4 = (uint)((ulonglong)local_88 >> 0x10);
          uVar9 = (uint)local_88 & 0xffff;
          plVar7 = plVar1 + 7;
          if ((longlong *)plVar1[8] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar1[8];
          }
          iVar10 = *(int *)((longlong)plVar7 +
                           (ulonglong)
                           ((int)plVar1[9] - 1U &
                           (int)((ulonglong)local_88 >> 0x20) + ((uint)local_88 << 0x10 | uVar9) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              lVar5 = *plVar1 + (longlong)iVar10 * 0x38;
              if (*(longlong *)(*plVar1 + (longlong)iVar10 * 0x38) == local_88) {
                if (lVar5 != -8 && lVar5 != 0) {
                  uVar2 = *param_2;
                  FUN_140c5894c(local_80);
                  uVar6 = FUN_14108b142(uVar11 * 0x28 + *(longlong *)(param_1 + 0x48));
                  FUN_14101bbec(uVar2,uVar6,local_80);
                  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120)
                                     );
                  if (pcVar3 != (code *)0x0) {
                    ppppuVar8 = local_78;
                    if (0x18 < local_60) {
                      ppppuVar8 = (undefined8 ****)local_78[0];
                    }
                    (*pcVar3)(ppppuVar8);
                  }
                  if (0x18 < local_60) {
                    FUN_1400020a8(local_78[0]);
                  }
                }
                break;
              }
              iVar10 = *(int *)(lVar5 + 0x30);
            } while (iVar10 != -1);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14109b67c FUN_14109b67c body=182 status=ok
// SIG undefined FUN_14109b67c(void)

longlong * FUN_14109b67c(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14109b734();
  FUN_14109b76e(param_1,&local_28,uVar3);
  if (local_28 != (longlong *)0x0) {
    lVar4 = (**(code **)(*local_28 + 8))(local_28);
    lVar5 = FUN_14109b734();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = local_28;
      }
      goto LAB_14109b6b6;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14109b6b6:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 14109b734 FUN_14109b734 body=57 status=ok
// SIG undefined FUN_14109b734(void)

void FUN_14109b734(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb639d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb639d8 = FUN_140002ddd(FUN_1464feb1c,uVar1,L"GbxSkillActionState_UserParams");
  }
  return;
}



// FUNCTION 14109b76e FUN_14109b76e body=107 status=ok
// SIG undefined FUN_14109b76e(void)

undefined8 * FUN_14109b76e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      cVar1 = FUN_1448093f4(*puVar2,param_3);
      if (cVar1 != '\0') {
        if (puVar2 != (undefined8 *)0x0) {
          *param_2 = *puVar2;
          lVar3 = puVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      puVar2 = puVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14109b7da FUN_14109b7da body=184 status=ok
// SIG undefined FUN_14109b7da(void)

void FUN_14109b7da(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  longlong *plStack_18;
  ulonglong uStack_10;
  
  if (*(int *)(param_1 + 0x1a) != *(int *)((longlong)param_1 + 0xfc)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar7 = param_1 + 0x20;
    if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[0x21];
    }
    iVar8 = *(int *)((longlong)puVar7 +
                    (ulonglong)(*(int *)(param_1 + 0x22) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar8 != -1) {
      do {
        lVar3 = param_1[0x19] + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(param_1[0x19] + (longlong)iVar8 * 0x20) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((*(byte *)(lVar3 + 0x14) & 1) != 0) {
            return;
          }
          if (*(int *)(lVar3 + 0x10) < 1) {
            return;
          }
          iVar8 = *(int *)(lVar3 + 0x10) + -1;
          *(int *)(lVar3 + 0x10) = iVar8;
          if (iVar8 != 0) {
            return;
          }
          uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
          plStack_18 = (longlong *)param_1[1];
          if (plStack_18 != (longlong *)0x0) {
            iVar8 = (int)plStack_18[1];
            uStack_20 = 0;
            goto LAB_140e9bb2a;
          }
          plStack_18 = (longlong *)0x0;
          uStack_20 = 0;
          goto LAB_140e9bb3d;
        }
        iVar8 = *(int *)(lVar3 + 0x18);
      } while (iVar8 != -1);
    }
  }
  return;
  while( true ) {
    LOCK();
    iVar5 = (int)plStack_18[1];
    bVar9 = iVar8 == iVar5;
    if (bVar9) {
      *(int *)(plStack_18 + 1) = iVar8 + 1;
      iVar5 = iVar8;
    }
    iVar8 = iVar5;
    UNLOCK();
    if (bVar9) break;
LAB_140e9bb2a:
    if (iVar8 == 0) {
      plStack_18 = (longlong *)0x0;
      goto LAB_140e9bb3d;
    }
  }
  uStack_20 = *param_1;
LAB_140e9bb3d:
  FUN_140e9bba4(param_1 + 0x16,&uStack_20);
  plVar4 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((uStack_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109b892 FUN_14109b892 body=235 status=ok
// SIG undefined FUN_14109b892(void)

void FUN_14109b892(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 0x40451eb8;
  puVar1 = param_1 + 4;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 10) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 4) = 0x40366666;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 10) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 4) = 0x400147ae;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 10) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 4) = 0x3faccccd;
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 10) < iVar2 + 1U) {
    FUN_14475e4ac(puVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 4) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x12) < iVar2 + 1U) {
    FUN_14475e4ac(param_1 + 0xc,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xc) + (longlong)iVar2 * 4) = 0x40370a3d;
  *(undefined8 *)(param_1 + 0x14) = 0x44fa0000458ca000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f6666663ecccccd;
  return;
}



// FUNCTION 14109b97e FUN_14109b97e body=292 status=ok
// SIG undefined FUN_14109b97e(void)

void FUN_14109b97e(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x3f333333;
  puVar1 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x30);
  }
  LOCK();
  UNLOCK();
  local_30 = DAT_14c761474 + 1;
  local_38 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,local_24,0,0x3f800000);
  LOCK();
  UNLOCK();
  local_30 = DAT_14c761474 + 1;
  local_38 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,local_24,0x41a00000,0x3f4ccccd);
  LOCK();
  UNLOCK();
  local_30 = DAT_14c761474 + 1;
  local_38 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,local_24,0x42700000,0x3ecccccd);
  LOCK();
  UNLOCK();
  local_30 = DAT_14c761474 + 1;
  local_38 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,local_24,0x42f00000,0x3e99999a);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109baa4 FUN_14109baa4 body=82 status=ok
// SIG undefined FUN_14109baa4(void)

void FUN_14109baa4(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *param_1 = &DAT_14a176f00;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 14109baf6 FUN_14109baf6 body=19 status=ok
// SIG undefined FUN_14109baf6(void)

undefined ** FUN_14109baf6(longlong param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_14c75ef90;
  if (*(undefined ***)(param_1 + 8) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 8);
  }
  return ppuVar1;
}



// FUNCTION 14109bb0a FUN_14109bb0a body=79 status=ok
// SIG undefined FUN_14109bb0a(void)

undefined8 * FUN_14109bb0a(undefined8 *param_1)

{
  FUN_14109bb5a();
  *param_1 = &PTR_FUN_14a8593d0;
  param_1[5] = &PTR_LAB_14a859990;
  param_1[6] = &PTR_LAB_14a8599d0;
  param_1[0x2f] = &PTR_LAB_14a859a20;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 14109bb5a FUN_14109bb5a body=174 status=ok
// SIG undefined FUN_14109bb5a(void)

undefined8 * FUN_14109bb5a(undefined8 *param_1)

{
  FUN_140bf6e12();
  *param_1 = &PTR_FUN_14a858000;
  param_1[5] = &PTR_LAB_14a858590;
  param_1[6] = &PTR_LAB_14a8585d0;
  param_1[0x2f] = &PTR_LAB_14a858620;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(byte *)((longlong)param_1 + 0x184) = *(byte *)((longlong)param_1 + 0x184) & 0xf0 | 9;
  param_1[0x31] = 0x100000100000000;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f000000bf800000;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xe0;
  param_1[0x3a] = 0;
  *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) | 0x80;
  return param_1;
}



// FUNCTION 14109bc08 FUN_14109bc08 body=228 status=ok
// SIG undefined FUN_14109bc08(void)

longlong FUN_14109bc08(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf7630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147c6e3a5;
    local_40 = &LAB_1459449b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x1a8;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkPhysicsComponent",&DAT_14caf7630,FUN_1463f59c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109bcee FUN_14109bcee body=317 status=ok
// SIG undefined FUN_14109bcee(void)

undefined8 *
FUN_14109bcee(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109be38 FUN_14109be38 body=92 status=ok
// SIG undefined FUN_14109be38(void)

void FUN_14109be38(longlong *param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = (longlong)param_2[1].DebugInfo;
  param_2[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  *(LONG *)(param_1 + 1) = param_2[1].LockCount;
  param_2[1].LockCount = 0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014109be7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14109be94 FUN_14109be94 body=177 status=ok
// SIG undefined FUN_14109be94(void)

void FUN_14109be94(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x3c) < 1) {
    if (param_2 == '\0') {
      iVar6 = *(int *)(param_1 + 0x30);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x30);
      iVar4 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar4;
      if (iVar6 < iVar4) {
        return;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x28);
    iVar4 = iVar6;
    if (0 < iVar6) {
      iVar5 = 0;
      do {
        if (((*(int *)(*plVar1 + 8 + (longlong)iVar5 * 0x10) == 0) ||
            (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar5 * 0x10), plVar2 == (longlong *)0x0))
           || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
          FUN_14005b288(plVar1,iVar5);
          FUN_14005b248(plVar1);
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar4 = *(int *)(param_1 + 0x30);
      } while (iVar5 < iVar4);
    }
    iVar5 = 2;
    if (2 < iVar4 * 2) {
      iVar5 = iVar4 * 2;
    }
    *(int *)(param_1 + 0x38) = iVar5;
    if ((iVar5 < iVar6) && (*(int *)(param_1 + 0x34) != iVar4)) {
      FUN_14045812c(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14109bf46 FUN_14109bf46 body=265 status=ok
// SIG undefined FUN_14109bf46(void)

void FUN_14109bf46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14109c050 FUN_14109c050 body=49 status=ok
// SIG undefined FUN_14109c050(void)

void FUN_14109c050(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14109c082();
  }
  FUN_1400fb146(param_1 + 0x238,0);
  return;
}



// FUNCTION 14109c082 FUN_14109c082 body=64 status=ok
// SIG undefined FUN_14109c082(void)

void FUN_14109c082(char *param_1)

{
  if (param_1[0x200] == '\x01') {
    if (*param_1 == '\x01') {
      FUN_1474b5d08(param_1 + 8);
    }
    if (param_1[1] == '\x01') {
      FUN_14109c0c2(*(undefined8 *)(param_1 + 0x1f8));
    }
    param_1[0x200] = '\0';
  }
  return;
}



// FUNCTION 14109c0c2 FUN_14109c0c2 body=1270 status=ok
// SIG undefined FUN_14109c0c2(void)

ulonglong FUN_14109c0c2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c760e34 == 0) {
LAB_14109c15c:
    uVar15 = 0;
    goto LAB_14109c217;
  }
  lVar8 = (ulonglong)DAT_14ca85550 * 0x3c;
  uVar15 = 0;
  if ((((*(byte *)((longlong)&DAT_14ca814d8 + lVar8 + 3) & 0x10) == 0) ||
      (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0)) ||
     ((*(uint *)(&DAT_14ca814cc + lVar8) & 8) == 0)) goto LAB_14109c217;
  if (*(int *)(param_1 + 0x70) == 0) goto LAB_14109c15c;
  uVar15 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(uVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_14109c14a;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14109c14f;
      goto LAB_14109c17e;
    }
LAB_14109c14f:
    FUN_14366de62(param_1);
  }
  else {
LAB_14109c14a:
    if (iVar4 == 0x10) goto LAB_14109c14f;
LAB_14109c17e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*(int *)(uVar15 + 0xc60) == 2)) goto LAB_14109c14f;
      if (*(int *)(uVar15 + 0xc60) == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14109c14f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_14109c2db;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar8 + 0x310);
        *(undefined8 *)(lVar8 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_14109c2db:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar17 + 0x16);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar2;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x16);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_14109c35b;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_14109c35b:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      uVar15 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14aa68800;
      puVar17[0x15] = param_1;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        uVar16 = 5;
        uVar15 = (ulonglong)
                 ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar8 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar8 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = (int)uVar15;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
        goto LAB_14109c217;
      }
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14aa687b0;
      local_68[0] = &LAB_14367c994;
      local_40 = param_1;
      FUN_14005a792(&DAT_14ca9a440,L"ReleaseNaniteResources",&DAT_14cb001e4);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
LAB_14109c217:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14109c5ba FUN_14109c5ba body=9049 status=ok
// SIG undefined FUN_14109c5ba(void)

void FUN_14109c5ba(longlong param_1)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  undefined8 **ppuVar8;
  ushort *puVar9;
  longlong *plVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 ***pppuVar16;
  undefined *puVar17;
  longlong *plVar18;
  undefined8 uVar19;
  wchar_t *pwVar20;
  size_t sVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  void *pvVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 auStack_338 [32];
  uint local_318;
  undefined4 local_310;
  longlong *local_308;
  undefined8 local_300;
  void *local_2f8;
  undefined8 *local_2f0;
  undefined8 **local_2e8;
  void *local_2e0;
  undefined8 ***local_2d8;
  undefined8 *local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8 [2];
  longlong local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong *plStack_290;
  longlong *local_288 [2];
  longlong local_278;
  longlong *plStack_270;
  longlong *local_260 [2];
  longlong *local_250 [2];
  char local_23a;
  char local_239;
  longlong local_238;
  longlong *local_230;
  undefined8 ***local_228;
  undefined8 **local_220;
  undefined8 **local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar27 = *(longlong *)(param_1 + 0x288);
  if (lVar27 != 0) {
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_1448d5e3c(&local_218);
      ppuVar8 = (undefined8 **)local_218[0x22];
      AcquireSRWLockShared((PSRWLOCK)(ppuVar8 + 0x20));
      ppuVar2 = uStack_210;
      if (uStack_210 != (undefined8 **)0x0) {
        LOCK();
        ppuVar4 = uStack_210 + 1;
        *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
        UNLOCK();
        if (*(int *)ppuVar4 == 0) {
          (*(code *)**uStack_210)(uStack_210);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppuVar2)[2])(ppuVar2);
          }
        }
      }
      if (*(int *)(lVar27 + 0xac) != *(int *)(ppuVar8 + 0x1f)) {
        *(int *)(lVar27 + 0xac) = *(int *)(ppuVar8 + 0x1f);
        local_239 = '\0';
        local_23a = '\0';
        if (*(int *)(lVar27 + 0x268) != *(int *)(ppuVar8 + 2)) {
          FUN_144a787a6(lVar27 + 600);
          *(undefined4 *)(lVar27 + 0x268) = *(undefined4 *)(ppuVar8 + 2);
        }
        *(bool *)(lVar27 + 0xf0) = *(int *)(ppuVar8 + 6) == 0;
        *(undefined4 *)(lVar27 + 0xec) = *(undefined4 *)(ppuVar8 + 0x1a);
        pvVar29 = (void *)(longlong)*(int *)(ppuVar8 + 4);
        *(bool *)(lVar27 + 0xb6) = 0 < *(int *)(ppuVar8 + 0x19);
        plVar26 = (longlong *)(lVar27 + 0xb8);
        iVar30 = *(int *)(lVar27 + 0xc0);
        local_2f8 = pvVar29;
        if ((longlong)iVar30 < 4) {
          *(undefined4 *)(lVar27 + 0xc0) = 4;
          local_308 = (longlong *)CONCAT44(local_308._4_4_,4U - iVar30);
          if ((uint)(*(int *)(lVar27 + 0xc4) - iVar30) < 4U - iVar30) {
            FUN_1457f258c(plVar26,iVar30);
          }
          FUN_14109ec4c((longlong)iVar30 * 0x120 + *plVar26);
          pvVar29 = local_2f8;
        }
        else if (iVar30 != 4) {
          FUN_148eb7606(plVar26);
          FUN_148eb765e(plVar26);
        }
        local_2e8 = ppuVar8 + 3;
        *(int *)(lVar27 + 200) = *(int *)(lVar27 + 200) + 1;
        if ((int)(uint)pvVar29 < 1) {
LAB_14109c8d6:
          lVar32 = (longlong)pvVar29 * 0x120 + 0x90;
          local_2f8 = pvVar29;
          do {
            local_2f8 = (void *)((longlong)local_2f8 + 1);
            *(int *)(lVar27 + 200) = *(int *)(lVar27 + 200) + 1;
            plVar26 = *(longlong **)(lVar27 + 0xb8);
            local_300 = (undefined8 ***)((longlong)plVar26 + lVar32 + -0x90);
            memset(&local_218,0,0x120);
            FUN_14109ee14(&local_218);
            local_308 = plVar26;
            if (local_300 == &local_218) {
              *(undefined1 *)((longlong)plVar26 + lVar32 + -0x2e) = local_1b8._2_1_;
              *(undefined2 *)((longlong)plVar26 + lVar32 + -0x30) = (undefined2)local_1b8;
              *(undefined4 *)((longlong)plVar26 + lVar32 + -8) = local_190;
            }
            else {
              if (*(longlong *)((longlong)plVar26 + lVar32 + -0x90) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 ***)((longlong)local_308 + lVar32 + -0x90) = local_218;
              local_218 = (undefined8 **)0x0;
              *(int *)((longlong)local_308 + lVar32 + -0x88) = (int)uStack_210;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x84) = uStack_210._4_4_;
              uStack_210 = (undefined8 **)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x80) != 0) {
                FUN_1400020a8();
              }
              *(longlong **)((longlong)local_308 + lVar32 + -0x80) = local_208;
              local_208 = (longlong *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x78) = (undefined4)local_200;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x74) = local_200._4_4_;
              local_200 = (undefined8 **)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x70) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 **)((longlong)local_308 + lVar32 + -0x70) = local_1f8;
              local_1f8 = (undefined8 *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x68) = (undefined4)local_1f0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -100) = local_1f0._4_4_;
              local_1f0 = (longlong *)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x60) != 0) {
                FUN_1400020a8();
              }
              *(undefined **)((longlong)local_308 + lVar32 + -0x60) = local_1e8;
              local_1e8 = (undefined *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x58) = (undefined4)local_1e0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x54) = local_1e0._4_4_;
              local_1e0 = (undefined8 ****)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x50) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 **)((longlong)local_308 + lVar32 + -0x50) = local_1d8;
              local_1d8 = (undefined8 *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x48) = (undefined4)local_1d0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x44) = local_1d0._4_4_;
              local_1d0 = (longlong *)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x40) != 0) {
                FUN_1400020a8();
              }
              *(undefined **)((longlong)local_308 + lVar32 + -0x40) = local_1c8;
              local_1c8 = (undefined *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x38) = (undefined4)local_1c0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x34) = local_1c0._4_4_;
              local_1c0 = (longlong **)0x0;
              *(undefined1 *)((longlong)local_308 + lVar32 + -0x2e) = local_1b8._2_1_;
              *(undefined2 *)((longlong)local_308 + lVar32 + -0x30) = (undefined2)local_1b8;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x28) != 0) {
                FUN_1400020a8();
              }
              *(longlong **)((longlong)local_308 + lVar32 + -0x28) = local_1b0;
              local_1b0 = (longlong *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x20) = (undefined4)local_1a8;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x1c) = local_1a8._4_4_;
              local_1a8 = (undefined *)0x0;
              if (*(longlong *)((longlong)local_308 + lVar32 + -0x18) != 0) {
                FUN_1400020a8();
              }
              *(longlong **)((longlong)local_308 + lVar32 + -0x18) = local_1a0;
              local_1a0 = (longlong *)0x0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0x10) = (undefined4)local_198;
              *(undefined4 *)((longlong)local_308 + lVar32 + -0xc) = local_198._4_4_;
              local_198 = 0;
              *(undefined4 *)((longlong)local_308 + lVar32 + -8) = local_190;
              if (*(longlong *)((longlong)local_308 + lVar32) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)((longlong)local_308 + lVar32) = local_188;
              local_188 = 0;
              *(undefined4 *)((longlong)local_308 + lVar32 + 8) = (undefined4)local_180;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0xc) = local_180._4_4_;
              local_180 = 0;
              if (*(longlong *)((longlong)local_308 + lVar32 + 0x10) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)((longlong)local_308 + lVar32 + 0x10) = local_178;
              local_178 = 0;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x18) = (undefined4)local_170;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x1c) = local_170._4_4_;
              local_170 = 0;
            }
            plVar26 = local_308;
            FUN_140008f88((longlong)local_308 + lVar32 + 0x20,local_168);
            FUN_140008f88((longlong)plVar26 + lVar32 + 0x30,local_158);
            if (local_300 == &local_218) {
              FUN_14109e91c((longlong)plVar26 + lVar32 + 0x50,local_138);
            }
            else {
              if (*(longlong *)((longlong)plVar26 + lVar32 + 0x40) != 0) {
                FUN_1400020a8();
                plVar26 = local_308;
              }
              *(undefined8 *)((longlong)plVar26 + lVar32 + 0x40) = local_148;
              local_148 = 0;
              *(undefined4 *)((longlong)plVar26 + lVar32 + 0x48) = (undefined4)local_140;
              *(undefined4 *)((longlong)plVar26 + lVar32 + 0x4c) = local_140._4_4_;
              local_140 = 0;
              FUN_14109e91c((longlong)plVar26 + lVar32 + 0x50,local_138);
              if (*(longlong *)((longlong)plVar26 + lVar32 + 0x60) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)((longlong)local_308 + lVar32 + 0x60) = local_128;
              local_128 = 0;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x68) = (undefined4)local_120;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x6c) = local_120._4_4_;
              local_120 = 0;
              if (*(longlong *)((longlong)local_308 + lVar32 + 0x70) != 0) {
                FUN_1400020a8();
              }
              *(undefined8 *)((longlong)local_308 + lVar32 + 0x70) = local_118;
              local_118 = 0;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x78) = (undefined4)local_110;
              *(undefined4 *)((longlong)local_308 + lVar32 + 0x7c) = local_110._4_4_;
              local_110 = 0;
              plVar26 = local_308;
            }
            puVar5 = (undefined4 *)((longlong)plVar26 + lVar32 + 0x80);
            *puVar5 = local_108;
            puVar5[1] = uStack_104;
            puVar5[2] = uStack_100;
            puVar5[3] = uStack_fc;
            FUN_14109ec9a(&local_218);
            *(undefined1 *)((longlong)local_308 + lVar32 + 0x8c) = 1;
            iVar30 = DAT_14cbdf3f0;
            puVar3 = DAT_14cbdf3e8;
            puVar15 = &DAT_14cbdf3e8;
            if (local_300 != (undefined8 ***)&DAT_14cbdf3e8) {
              lVar31 = (longlong)DAT_14cbdf3f0;
              *(int *)((longlong)local_308 + lVar32 + -0x88) = DAT_14cbdf3f0;
              if (iVar30 == 0 && *(int *)((longlong)local_308 + lVar32 + -0x84) == 0) {
                *(undefined4 *)((longlong)local_308 + lVar32 + -0x84) = 0;
                puVar15 = (undefined8 *)0x0;
              }
              else {
                local_2f0 = puVar3;
                puVar15 = (undefined8 *)FUN_1446dd670(local_300,iVar30);
                if (iVar30 != 0) {
                  puVar15 = memcpy(*local_300,local_2f0,lVar31 * 2);
                }
              }
            }
            if (*(char *)(param_1 + 0x360) == '\0') {
              local_300 = (undefined8 ***)
                          CONCAT44(local_300._4_4_,
                                   (int)CONCAT71((int7)((ulonglong)puVar15 >> 8),
                                                 *(int *)(ppuVar8 + 6) == 2));
              puVar15 = &DAT_14cbdf408;
              if (*(int *)(ppuVar8 + 6) == 2) {
                puVar15 = &DAT_14cbdf3f8;
              }
            }
            else {
              local_300 = (undefined8 ***)((ulonglong)local_300._4_4_ << 0x20);
              puVar15 = &DAT_14cbdf408;
            }
            puVar3 = (undefined8 *)((longlong)local_308 + lVar32);
            if (puVar3 != puVar15) {
              iVar30 = *(int *)(puVar15 + 1);
              pvVar29 = (void *)*puVar15;
              *(int *)((longlong)local_308 + lVar32 + 8) = iVar30;
              if (iVar30 == 0 && *(int *)((longlong)local_308 + lVar32 + 0xc) == 0) {
                *(undefined4 *)((longlong)local_308 + lVar32 + 0xc) = 0;
              }
              else {
                local_2f0 = puVar3;
                local_2e0 = pvVar29;
                FUN_1446dd670(puVar3,iVar30);
                if (iVar30 != 0) {
                  memcpy((void *)*local_2f0,local_2e0,(longlong)iVar30 * 2);
                }
              }
            }
            *(byte *)((longlong)local_308 + lVar32 + 0x8f) = (byte)local_300 ^ 1;
            lVar32 = lVar32 + 0x120;
          } while ((int)local_2f8 != 4);
        }
        else {
          uVar14 = 4;
          if ((uint)pvVar29 < 4) {
            uVar14 = (ulonglong)pvVar29 & 0xffffffff;
          }
          local_308 = (longlong *)(uVar14 * 0x198);
          lVar32 = 0;
          plVar26 = (longlong *)0x0;
          do {
            uVar19 = DAT_14cbdf3d8;
            puVar15 = *local_2e8;
            *(int *)(lVar27 + 200) = *(int *)(lVar27 + 200) + 1;
            FUN_14109f0ae(param_1,*(longlong *)(lVar27 + 0xb8) + lVar32,
                          (longlong)puVar15 + (longlong)plVar26,uVar19);
            plVar26 = plVar26 + 0x33;
            lVar32 = lVar32 + 0x120;
          } while (local_308 != plVar26);
          pvVar29 = local_2f8;
          if ((int)local_2f8 < 4) goto LAB_14109c8d6;
        }
        if (0 < *(int *)(lVar27 + 0xd8)) {
          plVar26 = *(longlong **)(lVar27 + 0xd0);
          FUN_14109ea14(param_1,plVar26,local_2e8,&local_239);
          FUN_14020fad6(plVar26 + 1,L"party");
          plVar10 = *(longlong **)(param_1 + 0x298);
          plVar18 = (longlong *)plVar26[3];
          if (plVar18 != plVar10) {
            plVar26[3] = (longlong)plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
            if (plVar18 != (longlong *)0x0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
          *(undefined4 *)(plVar26 + 4) = *(undefined4 *)(param_1 + 0x2a0);
          local_308 = plVar26;
          if (*(int *)(ppuVar8 + 0x18) < 1) {
            plVar18 = (longlong *)FUN_140e82300();
            plVar26 = (longlong *)*plVar18;
            plVar10 = (longlong *)local_308[5];
            if (plVar10 != plVar26) {
              local_308[5] = (longlong)plVar26;
              if (plVar26 != (longlong *)0x0) {
                (**(code **)(*plVar26 + 8))();
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            *(int *)(local_308 + 6) = (int)plVar18[1];
            plVar26 = local_308;
          }
          else {
            local_278 = 0;
            plStack_270 = (longlong *)0x0;
            FUN_1413a454c(local_260,*(int *)(ppuVar8 + 0x18),0);
            local_298 = 0;
            plStack_290 = (longlong *)0x0;
            FUN_1413a454c(local_288,*(undefined4 *)(ppuVar8 + 0x17),0);
            FUN_14023409e(&local_2a8,param_1 + 0x2a8,1);
            local_218 = (undefined8 **)CONCAT44(local_218._4_4_,4);
            FUN_14023423e(&local_208,local_288);
            local_1f8 = (undefined8 *)CONCAT44(local_1f8._4_4_,4);
            FUN_14023423e(&local_1e8,local_260);
            local_220 = &local_1d8;
            local_228 = &local_218;
            FUN_14010d304(&local_f8);
            local_238 = local_2a8;
            local_230 = local_2a0;
            if (local_2a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_250,&local_238,&local_f8);
            FUN_14007f2db(local_f8,(ulonglong)plStack_f0 & 0xffffffff);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            plVar26 = local_308;
            lVar32 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_218 + lVar32) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_218 + lVar32) + 0x10))();
                *(undefined8 *)((longlong)&local_218 + lVar32) = 0;
                *(undefined4 *)((longlong)&uStack_210 + lVar32) = 0;
              }
              lVar32 = lVar32 + -0x20;
            } while (lVar32 != -0x10);
            if (local_2a0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_2a0 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_2a0)(local_2a0);
                LOCK();
                piVar1 = (int *)((longlong)local_2a0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_2a0 + 0x10))(local_2a0);
                }
              }
            }
            if (local_288[0] != (longlong *)0x0) {
              (**(code **)(*local_288[0] + 0x10))();
            }
            if (local_260[0] != (longlong *)0x0) {
              (**(code **)(*local_260[0] + 0x10))();
            }
            FUN_140008f88(plVar26 + 5,local_250);
            if (local_250[0] != (longlong *)0x0) {
              (**(code **)(*local_250[0] + 0x10))();
            }
            plVar10 = plStack_290;
            if (plStack_290 != (longlong *)0x0) {
              LOCK();
              plVar18 = plStack_290 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plStack_290)(plStack_290);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            plVar10 = plStack_270;
            if (plStack_270 != (longlong *)0x0) {
              LOCK();
              plVar18 = plStack_270 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plStack_270)(plStack_270);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          *(byte *)(plVar26 + 10) = *(byte *)(param_1 + 0x360) ^ 1;
          if (*(char *)(lVar27 + 0xb4) == '\x01') {
            *(bool *)(lVar27 + 0xb5) = (int)plVar26[8] < 2;
          }
          else {
            *(undefined1 *)((longlong)plVar26 + 0x52) = 0;
            *(bool *)(plVar26 + 0xe) = 0 < *(int *)(ppuVar8 + 0x19);
            if (1 < *(int *)(lVar27 + 0xd8)) {
              plVar26 = *(longlong **)(lVar27 + 0xd0);
              FUN_14109ea14(param_1,plVar26 + 0xf,ppuVar8 + 8,&local_23a);
              FUN_14020fad6(plVar26 + 0x10,L"friends");
              plVar10 = *(longlong **)(param_1 + 0x2c8);
              plVar18 = (longlong *)plVar26[0x12];
              if (plVar18 != plVar10) {
                plVar26[0x12] = (longlong)plVar10;
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 8))();
                }
                if (plVar18 != (longlong *)0x0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
              *(undefined4 *)(plVar26 + 0x13) = *(undefined4 *)(param_1 + 0x2d0);
              local_278 = 0;
              plStack_270 = (longlong *)0x0;
              local_308 = plVar26;
              FUN_1413a454c(local_2b8,*(undefined4 *)(ppuVar8 + 0xb),0);
              FUN_14023409e(&local_2c8,param_1 + 0x2b8,1);
              local_218 = (undefined8 **)CONCAT44(local_218._4_4_,4);
              FUN_14023423e(&local_208,local_2b8);
              local_220 = &local_1f8;
              local_228 = &local_218;
              FUN_14010d304(&local_f8);
              local_238 = local_2c8;
              local_230 = local_2c0;
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_250,&local_238,&local_f8);
              FUN_14007f2db(local_f8,(ulonglong)plStack_f0 & 0xffffffff);
              if (local_f8 != 0) {
                FUN_1400020a8();
              }
              plVar26 = local_308;
              if (local_208 != (longlong *)0x0) {
                (**(code **)(*local_208 + 0x10))();
              }
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_2c0 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_2c0)(local_2c0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_2c0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_2c0 + 0x10))(local_2c0);
                  }
                }
              }
              if (local_2b8[0] != (longlong *)0x0) {
                (**(code **)(*local_2b8[0] + 0x10))();
              }
              FUN_140008f88(plVar26 + 0x14,local_250);
              if (local_250[0] != (longlong *)0x0) {
                (**(code **)(*local_250[0] + 0x10))();
              }
              plVar10 = plStack_270;
              if (plStack_270 != (longlong *)0x0) {
                LOCK();
                plVar18 = plStack_270 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*plStack_270)(plStack_270);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              iVar30 = *(int *)(ppuVar8 + 0xc);
              *(int *)(plVar26 + 0x1a) = iVar30;
              *(undefined4 *)((longlong)plVar26 + 0xd4) = *(undefined4 *)(ppuVar8 + 0xd);
              *(undefined1 *)((longlong)plVar26 + 0xca) = 0;
              *(undefined1 *)(plVar26 + 0x19) = *(undefined1 *)(ppuVar8 + 0xe);
              *(undefined1 *)((longlong)plVar26 + 0xe9) = *(undefined1 *)(ppuVar8 + 0x1b);
              local_300 = (undefined8 ***)(plVar26 + 0x1b);
              *(undefined4 *)(plVar26 + 0x1c) = 0;
              iVar28 = iVar30;
              if (*(int *)((longlong)plVar26 + 0xe4) < 0) {
                FUN_148eb75d6(local_300);
                iVar28 = (int)plVar26[0x1a];
              }
              if (iVar28 == 0) {
                iVar28 = *(int *)((longlong)plVar26 + 0xd4);
                iVar22 = 2;
                if (iVar28 < 2) {
                  iVar22 = iVar28;
                }
                iVar30 = 0;
LAB_14109d360:
                if (iVar30 <= iVar22) goto LAB_14109d365;
              }
              else {
                iVar28 = *(int *)((longlong)plVar26 + 0xd4);
                plVar26 = local_308;
                if (iVar28 <= iVar30) {
                  iVar30 = 2;
                  if (2 < iVar28) {
                    iVar30 = iVar28;
                  }
                  iVar30 = iVar30 + -2;
                  iVar22 = iVar28;
                  goto LAB_14109d360;
                }
                iVar22 = iVar30 + 1;
                iVar30 = iVar30 + -1;
LAB_14109d365:
                local_2f8 = (void *)CONCAT44(local_2f8._4_4_,iVar22 + 1);
                do {
                  iVar28 = (int)plVar26[0x1c];
                  *(uint *)(plVar26 + 0x1c) = iVar28 + 1U;
                  if (*(uint *)((longlong)plVar26 + 0xe4) < iVar28 + 1U) {
                    FUN_1457f29fa(local_300,iVar28);
                  }
                  piVar1 = (int *)((longlong)*local_300 + (longlong)iVar28 * 8);
                  FUN_14109e914(piVar1);
                  iVar28 = iVar30 + 1;
                  *piVar1 = iVar28;
                  piVar1[1] = iVar30;
                  plVar26 = local_308;
                  iVar30 = iVar28;
                } while ((int)local_2f8 != iVar28);
                iVar28 = *(int *)((longlong)local_308 + 0xd4);
              }
              *(bool *)((longlong)plVar26 + 0xcc) = 0 < iVar28;
              *(undefined4 *)(lVar27 + 0xe0) = *(undefined4 *)(ppuVar8 + 0xb);
              *(undefined4 *)(lVar27 + 0xe4) = *(undefined4 *)(ppuVar8 + 0xf);
              *(undefined4 *)(lVar27 + 0xe8) = *(undefined4 *)(ppuVar8 + 0x10);
              lVar32 = lVar27 + 0x270;
              iVar30 = *(int *)(lVar27 + 0x27c);
              FUN_14109e9d6(*(undefined8 *)(lVar27 + 0x270),*(undefined4 *)(lVar27 + 0x278));
              *(undefined4 *)(lVar27 + 0x278) = 0;
              if ((iVar30 < 0) && (*(int *)(lVar27 + 0x27c) != 0)) {
                FUN_148eb770c(lVar32);
              }
              pppuVar16 = (undefined8 ***)FUN_14109e96c(lVar32);
              FUN_1400b22c2(&local_218,"action_ui_cursor_click");
              if (pppuVar16 == &local_218) {
                if (local_218 != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*pppuVar16 != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
                *pppuVar16 = local_218;
                local_218 = (undefined8 **)0x0;
                *(int *)(pppuVar16 + 1) = (int)uStack_210;
                *(undefined4 *)((longlong)pppuVar16 + 0xc) = uStack_210._4_4_;
              }
              FUN_1400b22c2(&local_218);
              if (pppuVar16 + 2 == &local_218) {
                if (local_218 != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (pppuVar16[2] != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
                pppuVar16[2] = local_218;
                local_218 = (undefined8 **)0x0;
                *(int *)(pppuVar16 + 3) = (int)uStack_210;
                *(undefined4 *)((longlong)pppuVar16 + 0x1c) = uStack_210._4_4_;
              }
              if ((*(int *)(ppuVar8 + 0x15) < 1) || (*ppuVar8[0x14] == 0)) {
                *(undefined8 *)(param_1 + 0x30c) = 0;
              }
              else {
                *(undefined8 *)(param_1 + 0x30c) = *ppuVar8[0x14];
                lVar31 = FUN_14109e96c(lVar32);
                FUN_144a787a6(lVar31,&DAT_14cbdf438);
                if (DAT_14cbdf578 == DAT_14cbdf5a4) {
LAB_14109e7df:
                  lVar23 = 0;
                }
                else {
                  lVar24 = *(longlong *)(param_1 + 0x30c);
                  uVar13 = (uint)((ulonglong)lVar24 >> 0x10);
                  uVar25 = (uint)lVar24 & 0xffff;
                  puVar17 = &DAT_14cbdf5a8;
                  if (DAT_14cbdf5b0 != (undefined *)0x0) {
                    puVar17 = DAT_14cbdf5b0;
                  }
                  iVar30 = *(int *)(puVar17 +
                                   (ulonglong)
                                   (DAT_14cbdf5b8 - 1U &
                                   (int)((ulonglong)lVar24 >> 0x20) +
                                   ((uint)lVar24 << 0x10 | uVar25) +
                                   (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar25 >> 4)) * 4);
                  if (iVar30 == -1) goto LAB_14109e7df;
                  do {
                    lVar23 = DAT_14cbdf570 + (longlong)iVar30 * 0x38;
                    if (*(longlong *)(DAT_14cbdf570 + (longlong)iVar30 * 0x38) == lVar24) break;
                    iVar30 = *(int *)(lVar23 + 0x30);
                    lVar23 = 0;
                  } while (iVar30 != -1);
                }
                local_218 = (undefined8 **)0x0;
                uStack_210 = (undefined8 **)0x0;
                FUN_1400b2348(lVar23 + 8,&local_218,1);
                if ((undefined8 ***)(lVar31 + 0x10) == &local_218) {
                  if (local_218 != (undefined8 **)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*(longlong *)(lVar31 + 0x10) != 0) {
                    FUN_1400020a8();
                  }
                  *(undefined8 ***)(lVar31 + 0x10) = local_218;
                  local_218 = (undefined8 **)0x0;
                  *(int *)(lVar31 + 0x18) = (int)uStack_210;
                  *(undefined4 *)(lVar31 + 0x1c) = uStack_210._4_4_;
                }
              }
              if ((*(int *)(ppuVar8 + 0x15) < 2) || (ppuVar8[0x14][1] == 0)) {
                *(undefined8 *)(param_1 + 0x314) = 0;
              }
              else {
                *(undefined8 *)(param_1 + 0x314) = ppuVar8[0x14][1];
                lVar32 = FUN_14109e96c(lVar32);
                FUN_144a787a6(lVar32,&DAT_14cbdf448);
                if (DAT_14cbdf578 == DAT_14cbdf5a4) {
LAB_14109e7e6:
                  lVar24 = 0;
                }
                else {
                  lVar31 = *(longlong *)(param_1 + 0x314);
                  uVar13 = (uint)((ulonglong)lVar31 >> 0x10);
                  uVar25 = (uint)lVar31 & 0xffff;
                  puVar17 = &DAT_14cbdf5a8;
                  if (DAT_14cbdf5b0 != (undefined *)0x0) {
                    puVar17 = DAT_14cbdf5b0;
                  }
                  iVar30 = *(int *)(puVar17 +
                                   (ulonglong)
                                   (DAT_14cbdf5b8 - 1U &
                                   (int)((ulonglong)lVar31 >> 0x20) +
                                   ((uint)lVar31 << 0x10 | uVar25) +
                                   (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar25 >> 4)) * 4);
                  if (iVar30 == -1) goto LAB_14109e7e6;
                  do {
                    lVar24 = DAT_14cbdf570 + (longlong)iVar30 * 0x38;
                    if (*(longlong *)(DAT_14cbdf570 + (longlong)iVar30 * 0x38) == lVar31) break;
                    iVar30 = *(int *)(lVar24 + 0x30);
                    lVar24 = 0;
                  } while (iVar30 != -1);
                }
                local_218 = (undefined8 **)0x0;
                uStack_210 = (undefined8 **)0x0;
                FUN_1400b2348(lVar24 + 8,&local_218,1);
                if ((undefined8 ***)(lVar32 + 0x10) == &local_218) {
                  if (local_218 != (undefined8 **)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*(longlong *)(lVar32 + 0x10) != 0) {
                    FUN_1400020a8();
                  }
                  *(undefined8 ***)(lVar32 + 0x10) = local_218;
                  local_218 = (undefined8 **)0x0;
                  *(int *)(lVar32 + 0x18) = (int)uStack_210;
                  *(undefined4 *)(lVar32 + 0x1c) = uStack_210._4_4_;
                }
              }
              plVar26 = (longlong *)(lVar27 + 0xf8);
              iVar30 = *(int *)(ppuVar8 + 0x12);
              iVar28 = *(int *)(lVar27 + 0x100);
              if (iVar28 < iVar30) {
                *(int *)(lVar27 + 0x100) = iVar30;
                local_308 = plVar26;
                if ((uint)(*(int *)(lVar27 + 0x104) - iVar28) < (uint)(iVar30 - iVar28)) {
                  FUN_1457f2b42(plVar26,iVar28);
                }
                FUN_1457f2620((longlong)iVar28 * 0x38 + *local_308);
              }
              else {
                if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar30);
                }
                if (iVar30 < iVar28) {
                  local_308 = plVar26;
                  FUN_1457f2d56(plVar26,iVar30,iVar28 - iVar30);
                  FUN_1457f2bd2(local_308);
                }
              }
              *(int *)(lVar27 + 0x108) = *(int *)(lVar27 + 0x108) + 1;
              uVar13 = *(uint *)(ppuVar8 + 0x12);
              if (uVar13 != 0) {
                plVar26 = (longlong *)0x0;
                do {
                  if ((longlong)plVar26 < (longlong)*(int *)(lVar27 + 0x100)) {
                    lVar32 = ppuVar8[0x11][(longlong)plVar26];
                    *(int *)(lVar27 + 0x108) = *(int *)(lVar27 + 0x108) + 1;
                    local_308 = (longlong *)
                                (*(longlong *)(lVar27 + 0xf8) + (longlong)plVar26 * 0x38);
                    *(longlong *)(*(longlong *)(lVar27 + 0xf8) + 0x10 + (longlong)plVar26 * 0x38) =
                         lVar32;
                    local_300 = (undefined8 ***)plVar26;
                    if (lVar32 == *(longlong *)(param_1 + 0x30c)) {
                      puVar15 = &DAT_14cbdf438;
LAB_14109d912:
                      FUN_144a787a6(local_308 + 3,puVar15);
                    }
                    else {
                      if (lVar32 == *(longlong *)(param_1 + 0x314)) {
                        puVar15 = &DAT_14cbdf448;
                        goto LAB_14109d912;
                      }
                      if (lVar32 == DAT_14cbdf040) {
                        puVar15 = &DAT_14cbdf458;
                        goto LAB_14109d912;
                      }
                      FUN_14020fad6(local_308 + 3,&DAT_149dfb77a);
                    }
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14cbdf630) &&
                       (FUN_144b3d300(&DAT_14cbdf630), DAT_14cbdf630 == -1)) {
                      local_218 = (undefined8 **)&DAT_14cbdefb0;
                      local_208 = (longlong *)&DAT_14cbdefb8;
                      uStack_210 = ppuVar8;
                      local_200 = ppuVar8;
                      FUN_140056680(&local_f8,L"shift");
                      local_1f8 = (undefined8 *)&DAT_14cbdefe0;
                      local_1f0 = &local_f8;
                      FUN_140056680(&local_228,L"shift");
                      local_1e8 = &DAT_14cbdefe8;
                      local_1e0 = &local_228;
                      FUN_140056680(&local_238,L"isfavorite");
                      local_1d8 = &DAT_14cbdeff0;
                      local_1d0 = &local_238;
                      FUN_140056680(local_250,L"shift");
                      local_1c8 = &DAT_14cbdf000;
                      local_1c0 = local_250;
                      FUN_140056680(&local_278,L"shift");
                      local_1b8 = &DAT_14cbdf008;
                      local_1b0 = &local_278;
                      FUN_140056680(&local_298,L"shift");
                      local_1a8 = &DAT_14cbdf010;
                      local_2d0 = &local_198;
                      local_2d8 = &local_218;
                      local_1a0 = &local_298;
                      FUN_140eddf20(&DAT_14cbdf5e0,&local_2d8);
                      if (local_298 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_278 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_250[0] != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_238 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_228 != (undefined8 ***)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_f8 != 0) {
                        FUN_1400020a8();
                      }
                      atexit(FUN_1442e9297);
                      _Init_thread_footer(&DAT_14cbdf630);
                    }
                    uVar25 = (uint)lVar32;
                    iVar30 = (int)((ulonglong)lVar32 >> 0x20);
                    uVar13 = (uint)((ulonglong)lVar32 >> 0x10);
                    if (DAT_14cbdf5e8 != DAT_14cbdf614) {
                      puVar17 = DAT_14cbdf620;
                      if (DAT_14cbdf620 == (undefined *)0x0) {
                        puVar17 = &DAT_14cbdf618;
                      }
                      iVar28 = *(int *)(puVar17 +
                                       (ulonglong)
                                       (DAT_14cbdf628 - 1U &
                                       iVar30 + (uVar25 << 0x10 | uVar25 & 0xffff) +
                                       (uVar13 << 0x13 | uVar13 & 0xffff) + ((uVar25 & 0xffff) >> 4)
                                       ) * 4);
                      while (iVar28 != -1) {
                        lVar31 = DAT_14cbdf5e0 + (longlong)iVar28 * 0x20;
                        if (*(longlong *)(DAT_14cbdf5e0 + (longlong)iVar28 * 0x20) == lVar32) {
                          if ((lVar31 + 8U & 0xfffffffffffffff7) != 0) {
                            local_218 = (undefined8 **)0x0;
                            uVar7 = *(uint *)(lVar31 + 0x10);
                            local_2f8 = *(void **)(lVar31 + 8);
                            uStack_210 = (undefined8 **)CONCAT44(uStack_210._4_4_,uVar7);
                            if ((longlong)(int)uVar7 == 0) {
                              uStack_210 = (undefined8 **)(ulonglong)uVar7;
                              iVar28 = 0;
                            }
                            else {
                              FUN_1446dd670(&local_218,uVar7,0);
                              memcpy(local_218,local_2f8,(longlong)(int)uVar7 * 2);
                              iVar28 = (int)uStack_210;
                            }
                            goto LAB_14109d7bf;
                          }
                          break;
                        }
                        iVar28 = *(int *)(lVar31 + 0x18);
                      }
                    }
                    local_218 = (undefined8 **)0x0;
                    uStack_210 = (undefined8 **)0x0;
                    iVar28 = 0;
LAB_14109d7bf:
                    iVar22 = iVar28 + -1;
                    if (iVar28 == 0) {
                      iVar22 = 0;
                    }
                    FUN_1402980a2(local_308 + 5,local_218,iVar22);
                    if (local_218 != (undefined8 **)0x0) {
                      FUN_1400020a8();
                    }
                    if (DAT_14cbdf578 == DAT_14cbdf5a4) {
LAB_14109e498:
                      lVar31 = 0;
                    }
                    else {
                      puVar17 = DAT_14cbdf5b0;
                      if (DAT_14cbdf5b0 == (undefined *)0x0) {
                        puVar17 = &DAT_14cbdf5a8;
                      }
                      iVar30 = *(int *)(puVar17 +
                                       (ulonglong)
                                       (DAT_14cbdf5b8 - 1U &
                                       iVar30 + (uVar25 << 0x10 | uVar25 & 0xffff) +
                                       (uVar13 << 0x13 | uVar13 & 0xffff) + ((uVar25 & 0xffff) >> 4)
                                       ) * 4);
                      if (iVar30 == -1) goto LAB_14109e498;
                      do {
                        lVar31 = DAT_14cbdf570 + (longlong)iVar30 * 0x38;
                        if (*(longlong *)(DAT_14cbdf570 + (longlong)iVar30 * 0x38) == lVar32)
                        goto LAB_14109d87b;
                        iVar30 = *(int *)(lVar31 + 0x30);
                      } while (iVar30 != -1);
                      lVar31 = 0;
                    }
LAB_14109d87b:
                    FUN_140ac6c96(lVar31 + 8,local_308);
                    uVar13 = *(uint *)(ppuVar8 + 0x12);
                    plVar26 = (longlong *)local_300;
                  }
                  plVar26 = (longlong *)((longlong)plVar26 + 1);
                } while (plVar26 != (longlong *)(ulonglong)uVar13);
              }
              ppuVar2 = (undefined8 **)(lVar27 + 0x340);
              if (ppuVar2 != ppuVar8 + 0x1c) {
                iVar30 = *(int *)(ppuVar8 + 0x1d);
                puVar15 = ppuVar8[0x1c];
                *(int *)(lVar27 + 0x348) = iVar30;
                if (iVar30 == 0 && *(int *)(lVar27 + 0x34c) == 0) {
                  *(undefined4 *)(lVar27 + 0x34c) = 0;
                }
                else {
                  FUN_1446dd670(ppuVar2,iVar30);
                  if (iVar30 != 0) {
                    memcpy(*ppuVar2,puVar15,(longlong)iVar30 * 2);
                  }
                }
              }
              if ((*(char *)(param_1 + 0x347) == '\x01') &&
                 (*(undefined1 *)(param_1 + 0x347) = 0, 1 < *(int *)(param_1 + 0x350))) {
                lVar32 = *(longlong *)(param_1 + 0x288);
                if (lVar32 != 0) {
                  local_228 = (undefined8 ***)CONCAT44(local_228._4_4_,0xffffffff);
                  lVar31 = FUN_141430446(param_1,param_1 + 0x348,param_1 + 0x358);
                  if ((lVar31 != 0) && (*(char *)(lVar31 + 0x11c) == '\0')) {
                    *(undefined1 *)(lVar31 + 0x11e) = 1;
                    FUN_144a787a6(lVar32 + 0x230,lVar31);
                    FUN_144a787a6(lVar32 + 0x240,lVar31 + 0x20);
                    *(undefined8 *)(lVar32 + 0x250) = *(undefined8 *)(param_1 + 0x358);
                    FUN_1457f2c12(param_1);
                    *(undefined1 *)(lVar32 + 0xb2) = 1;
                    cVar12 = FUN_144729dda(param_1 + 0x30);
                    if (cVar12 != '\0') {
                      uVar19 = FUN_14479d2ce(param_1 + 0x30);
                      local_208 = &local_f8;
                      local_200 = (undefined8 **)((ulonglong)local_200 & 0xffffffffffffff00);
                      local_218 = &local_1f8;
                      uStack_210 = local_218;
                      pwVar20 = (wchar_t *)
                                FUN_140c7f682(param_1,L"OnPlayerContextUpdated",&local_218);
                      local_78 = 0;
                      if (pwVar20 == (wchar_t *)0x0) {
                        local_70 = 0;
                        local_68 = 0;
                      }
                      else {
                        sVar21 = wcslen(pwVar20);
                        FUN_1446fe5a4(&local_f8,pwVar20,sVar21 & 0xffffffff,1);
                      }
                      FUN_1412a486e(uVar19,local_70);
                      if (local_78 != 0) {
                        FUN_1400020a8();
                      }
                      if ((char)local_200 == '\x01') {
                        FUN_1400020a8(local_218);
                      }
                    }
                  }
                  goto LAB_14109da00;
                }
              }
              else {
LAB_14109da00:
                lVar32 = *(longlong *)(param_1 + 0x288);
                if ((lVar32 != 0) && (*(char *)(lVar32 + 0xb0) != *(char *)(param_1 + 0x360))) {
                  *(char *)(lVar32 + 0xb0) = *(char *)(param_1 + 0x360);
                }
              }
              if ((local_239 != '\0') || (local_23a == '\x01')) {
                cVar12 = FUN_144729dda(param_1 + 0x30);
                if (cVar12 != '\0') {
                  uVar19 = FUN_14479d2ce(param_1 + 0x30);
                  local_208 = &local_f8;
                  local_200 = (undefined8 **)((ulonglong)local_200 & 0xffffffffffffff00);
                  local_218 = &local_1f8;
                  uStack_210 = local_218;
                  pwVar20 = (wchar_t *)FUN_140c7f682(param_1,L"OnUnfocusPlayerRequest",&local_218);
                  local_78 = 0;
                  if (pwVar20 == (wchar_t *)0x0) {
                    local_70 = 0;
                    local_68 = 0;
                  }
                  else {
                    sVar21 = wcslen(pwVar20);
                    FUN_1446fe5a4(&local_f8,pwVar20,sVar21 & 0xffffffff,1);
                  }
                  FUN_1412a486e(uVar19,local_70);
                  if (local_78 != 0) {
                    FUN_1400020a8();
                  }
                  if ((char)local_200 == '\x01') {
                    FUN_1400020a8(local_218);
                  }
                }
                *(undefined1 *)(lVar27 + 0xb3) = 0;
              }
            }
          }
        }
        puVar9 = *(ushort **)(lVar27 + 0x80);
        if (puVar9 != (ushort *)0x0) {
          *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar27 + 0x78) & 0x3f));
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(ppuVar8 + 0x20));
      lVar27 = *(longlong *)(param_1 + 0x288);
      if (lVar27 == 0) goto LAB_14109c681;
    }
    if (*(char *)(lVar27 + 0xb4) == '\x01') {
      FUN_1448d5e3c(&local_218,param_1 + 0x208);
      puVar15 = local_218[0x8e];
      AcquireSRWLockShared((PSRWLOCK)(puVar15 + 0x13));
      ppuVar8 = uStack_210;
      if (uStack_210 != (undefined8 **)0x0) {
        LOCK();
        ppuVar2 = uStack_210 + 1;
        *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
        UNLOCK();
        if (*(int *)ppuVar2 == 0) {
          (*(code *)**uStack_210)(uStack_210);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppuVar8)[2])(ppuVar8);
          }
        }
      }
      if ((*(int *)(param_1 + 0x390) != *(int *)(puVar15 + 0x12)) &&
         (*(int *)(param_1 + 0x390) = *(int *)(puVar15 + 0x12),
         *(int *)(param_1 + 0x3b4) != *(int *)((longlong)puVar15 + 100))) {
        uVar13 = *(uint *)(puVar15 + 0xc);
        *(uint *)(param_1 + 0x3b0) = uVar13;
        *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)((longlong)puVar15 + 100);
        if ((int)uVar13 < 0) {
          plVar18 = (longlong *)FUN_140e82300();
          plVar26 = (longlong *)*plVar18;
          plVar10 = *(longlong **)(lVar27 + 0x280);
          if (plVar10 != plVar26) {
            *(longlong **)(lVar27 + 0x280) = plVar26;
            if (plVar26 != (longlong *)0x0) {
              (**(code **)(*plVar26 + 8))();
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          *(int *)(lVar27 + 0x288) = (int)plVar18[1];
          uVar11 = 0;
        }
        else {
          local_318 = uVar13 % 0x3c;
          local_f8 = 0;
          plStack_f0 = (longlong *)0x0;
          local_310 = 0;
          FUN_1458c54da(&local_228,0,0);
          FUN_1467d0cb4(&local_218,&local_228,&local_f8);
          FUN_140008f88(lVar27 + 0x280,&local_218);
          if (local_218 != (undefined8 **)0x0) {
            (*(code *)(*local_218)[2])();
          }
          plVar26 = plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            plVar10 = plStack_f0 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plStack_f0)(plStack_f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar26 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
          }
          uVar11 = 1;
        }
        *(undefined1 *)(lVar27 + 0x290) = uVar11;
        puVar9 = *(ushort **)(lVar27 + 0x80);
        if (puVar9 != (ushort *)0x0) {
          *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar27 + 0x78) & 0x3f));
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 0x13));
    }
  }
LAB_14109c681:
  lVar27 = param_1 + 0x208;
  FUN_1448d5e3c(&local_218,lVar27);
  puVar15 = local_218[0x78];
  AcquireSRWLockShared((PSRWLOCK)(puVar15 + 0xd));
  ppuVar8 = uStack_210;
  if (uStack_210 != (undefined8 **)0x0) {
    LOCK();
    ppuVar2 = uStack_210 + 1;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (*(int *)ppuVar2 == 0) {
      (*(code *)**uStack_210)(uStack_210);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppuVar8)[2])(ppuVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x394) != *(int *)(puVar15 + 0xc)) {
    *(int *)(param_1 + 0x394) = *(int *)(puVar15 + 0xc);
    lVar32 = *(longlong *)(param_1 + 0x288);
    if ((lVar32 != 0) && ((bool)*(char *)(lVar32 + 0x29f) != (*(int *)(puVar15 + 1) != 0))) {
      *(bool *)(lVar32 + 0x29f) = *(int *)(puVar15 + 1) != 0;
      puVar9 = *(ushort **)(lVar32 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
      }
      lVar32 = *(longlong *)(param_1 + 0x288);
      if (lVar32 != 0) {
        if ((*(char *)(param_1 + 0x3a0) == '\0') && (*(char *)(param_1 + 0x3a8) != '\0')) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
          if (*(char *)(lVar32 + 0x29f) == '\0') {
            uVar11 = *(undefined1 *)(lVar32 + 0x29e);
          }
        }
        *(undefined1 *)(lVar32 + 0x29c) = uVar11;
        puVar9 = *(ushort **)(lVar32 + 0x80);
        if (puVar9 != (ushort *)0x0) {
          *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
        }
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 0xd));
  lVar32 = *(longlong *)(param_1 + 0x288);
  if (lVar32 != 0) {
    FUN_1448d5e3c(&local_218,lVar27);
    puVar15 = local_218[0x90];
    AcquireSRWLockShared((PSRWLOCK)(puVar15 + 0x18));
    ppuVar8 = uStack_210;
    if (uStack_210 != (undefined8 **)0x0) {
      LOCK();
      ppuVar2 = uStack_210 + 1;
      *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
      UNLOCK();
      if (*(int *)ppuVar2 == 0) {
        (*(code *)**uStack_210)(uStack_210);
        LOCK();
        piVar1 = (int *)((longlong)ppuVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppuVar8)[2])(ppuVar8);
        }
      }
    }
    if ((*(int *)(param_1 + 0x398) != *(int *)(puVar15 + 0x17)) &&
       (*(int *)(param_1 + 0x398) = *(int *)(puVar15 + 0x17),
       *(int *)(lVar32 + 0x298) != *(int *)((longlong)puVar15 + 4))) {
      *(undefined1 *)(lVar32 + 0x294) = *(undefined1 *)puVar15;
      *(undefined4 *)(lVar32 + 0x298) = *(undefined4 *)((longlong)puVar15 + 4);
      puVar9 = *(ushort **)(lVar32 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 0x18));
  }
  FUN_1448d5e3c(&local_218,lVar27);
  puVar15 = local_218[0x70];
  AcquireSRWLockShared((PSRWLOCK)(puVar15 + 0xdc));
  ppuVar8 = uStack_210;
  if (uStack_210 != (undefined8 **)0x0) {
    LOCK();
    ppuVar2 = uStack_210 + 1;
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    UNLOCK();
    if (*(int *)ppuVar2 == 0) {
      (*(code *)**uStack_210)(uStack_210);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppuVar8)[2])(ppuVar8);
      }
    }
  }
  if (*(int *)(param_1 + 0x39c) != *(int *)(puVar15 + 0xdb)) {
    *(int *)(param_1 + 0x39c) = *(int *)(puVar15 + 0xdb);
    lVar27 = *(longlong *)(param_1 + 0x288);
    if (lVar27 != 0) {
      if (*(int *)(param_1 + 0x3a4) == *(int *)((longlong)puVar15 + 0xc)) {
        if (*(int *)(param_1 + 0x3ac) == *(int *)((longlong)puVar15 + 100)) goto LAB_14109c79d;
        *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(puVar15 + 0xc);
        *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)((longlong)puVar15 + 100);
        bVar6 = *(byte *)(param_1 + 0x3a0);
      }
      else {
        bVar6 = *(byte *)(puVar15 + 1);
        *(byte *)(param_1 + 0x3a0) = bVar6;
        *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)((longlong)puVar15 + 0xc);
      }
      if (((bVar6 & 1) == 0) && (*(char *)(param_1 + 0x3a8) != '\0')) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        if (*(char *)(lVar27 + 0x29f) == '\0') {
          uVar11 = *(undefined1 *)(lVar27 + 0x29e);
        }
      }
      *(undefined1 *)(lVar27 + 0x29c) = uVar11;
      puVar9 = *(ushort **)(lVar27 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar27 + 0x78) & 0x3f));
      }
    }
  }
LAB_14109c79d:
  ReleaseSRWLockShared((PSRWLOCK)(puVar15 + 0xdc));
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14109e914 FUN_14109e914 body=8 status=ok
// SIG undefined FUN_14109e914(void)

void FUN_14109e914(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14109e91c FUN_14109e91c body=80 status=ok
// SIG undefined FUN_14109e91c(void)

longlong * FUN_14109e91c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14109edd4(*param_1,(int)param_1[1]);
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



// FUNCTION 14109e96c FUN_14109e96c body=61 status=ok
// SIG undefined FUN_14109e96c(void)

longlong FUN_14109e96c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457f2a7e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14109e9a9(lVar2);
  return lVar2;
}



// FUNCTION 14109e9a9 FUN_14109e9a9 body=45 status=ok
// SIG undefined FUN_14109e9a9(void)

void FUN_14109e9a9(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 14109e9d6 FUN_14109e9d6 body=61 status=ok
// SIG undefined FUN_14109e9d6(void)

void FUN_14109e9d6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14109ea14 FUN_14109ea14 body=568 status=ok
// SIG undefined FUN_14109ea14(void)

void FUN_14109ea14(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  int *piVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*param_2 == *(longlong *)(param_1 + 0x300)) {
    iVar6 = (int)param_2[8];
    bVar3 = true;
    if (iVar6 != (int)param_3[1]) goto LAB_14109ea58;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      lVar7 = param_2[9];
      piVar11 = (int *)(param_2[7] + 8);
      lVar9 = 0x18;
      uVar8 = 0;
      do {
        lVar2 = *param_3;
        *(int *)(param_2 + 9) = (int)lVar7 + 1 + (int)uVar8;
        iVar4 = *(int *)(lVar2 + lVar9);
        if (iVar4 == *piVar11) {
          if ((1 < iVar4) &&
             (iVar4 = wcscmp(*(wchar_t **)(lVar2 + -8 + lVar9),*(wchar_t **)(piVar11 + -2)),
             iVar4 != 0)) {
LAB_14109ec44:
            bVar3 = true;
            goto LAB_14109ea58;
          }
        }
        else if (*piVar11 + iVar4 != 1) goto LAB_14109ec44;
        uVar8 = uVar8 + 1;
        piVar11 = piVar11 + 0x48;
        lVar9 = lVar9 + 0x198;
      } while (uVar8 != *(uint *)(param_3 + 1));
    }
  }
  else {
    iVar6 = (int)param_2[8];
  }
  bVar3 = false;
LAB_14109ea58:
  iVar4 = *(int *)((longlong)param_2 + 0x44);
  FUN_14109ec71(param_2[7],iVar6);
  *(undefined4 *)(param_2 + 8) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_2 + 0x44) != 0)) {
    FUN_148eb6a64();
  }
  *(int *)(param_2 + 9) = (int)param_2[9] + 1;
  if ((int)param_3[1] == 0) {
    bVar10 = 1;
  }
  else {
    lVar7 = 0;
    uVar8 = 0;
    bVar10 = 0;
    do {
      if ((*(char *)(lVar1 + 0xb4) != '\x01') || (*(char *)(*param_3 + 0x158 + lVar7) == '\0')) {
        *(int *)(param_2 + 9) = (int)param_2[9] + 1;
        iVar6 = (int)param_2[8];
        *(uint *)(param_2 + 8) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0x44) < iVar6 + 1U) {
          FUN_1457f258c(param_2 + 7,iVar6);
        }
        lVar9 = (longlong)iVar6 * 0x120 + param_2[7];
        FUN_14109ec4c(lVar9,1);
        FUN_14109f0ae(param_1,lVar9,*param_3 + lVar7,*param_2);
        if ((*param_2 == *(longlong *)(param_1 + 0x300)) &&
           (*(int *)(param_1 + 0x308) == (int)param_2[8] + -1)) {
          FUN_1457f2724(lVar1 + 0x110,lVar9);
          bVar10 = 1;
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x198;
    } while (uVar8 != *(uint *)(param_3 + 1));
    bVar10 = ~bVar10 & 1;
  }
  bVar5 = 0;
  if (bVar3) {
    bVar5 = bVar10;
  }
  *param_4 = bVar5;
  return;
}



// FUNCTION 14109ec4c FUN_14109ec4c body=37 status=ok
// SIG undefined FUN_14109ec4c(void)

void FUN_14109ec4c(longlong param_1,int param_2)

{
  do {
    FUN_14109ee14(param_1);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14109ec71 FUN_14109ec71 body=41 status=ok
// SIG undefined FUN_14109ec71(void)

void FUN_14109ec71(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14109ec9a(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 14109ec9a FUN_14109ec9a body=314 status=ok
// SIG undefined FUN_14109ec9a(void)

void FUN_14109ec9a(longlong *param_1)

{
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14109edd4(param_1[0x1c],(int)param_1[0x1d]);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14109edd4 FUN_14109edd4 body=63 status=ok
// SIG undefined FUN_14109edd4(void)

void FUN_14109edd4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14109ee14 FUN_14109ee14 body=665 status=ok
// SIG undefined FUN_14109ee14(void)

longlong FUN_14109ee14(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x40,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x50,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_140056680(param_1 + 0x68,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x78,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_140056680(param_1 + 0x90,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0xa0,&DAT_149dfb77a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0xb0) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0xb8) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0xc0) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 200) = DAT_14c844848;
  FUN_140056680(param_1 + 0xd0,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_140056680(param_1 + 0xf0,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x100,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined2 *)(param_1 + 0x114) = 1;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return param_1;
}



// FUNCTION 14109f0ae FUN_14109f0ae body=4353 status=ok
// SIG undefined FUN_14109f0ae(void)

void FUN_14109f0ae(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  ushort uVar7;
  int iVar8;
  void *pvVar9;
  code *pcVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = param_1;
  if ((undefined8 *)(param_3 + 0x10) != param_2) {
    iVar14 = *(int *)(param_3 + 0x18);
    pvVar9 = *(void **)(param_3 + 0x10);
    *(int *)(param_2 + 1) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*param_2,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  puVar1 = param_2 + 2;
  if (puVar1 != (undefined8 *)(param_3 + 0x180)) {
    iVar14 = *(int *)(param_3 + 0x188);
    pvVar9 = *(void **)(param_3 + 0x180);
    *(int *)(param_2 + 3) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  puVar1 = param_2 + 4;
  if (puVar1 != (undefined8 *)(param_3 + 0x28)) {
    iVar14 = *(int *)(param_3 + 0x30);
    pvVar9 = *(void **)(param_3 + 0x28);
    *(int *)(param_2 + 5) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  puVar1 = param_2 + 6;
  if (puVar1 != (undefined8 *)(param_3 + 0x40)) {
    iVar14 = *(int *)(param_3 + 0x48);
    pvVar9 = *(void **)(param_3 + 0x40);
    *(int *)(param_2 + 7) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  *(bool *)(param_2 + 0xc) = 1 < *(int *)(param_2 + 7);
  puVar1 = param_2 + 10;
  if (puVar1 != (undefined8 *)(param_3 + 0x70)) {
    iVar14 = *(int *)(param_3 + 0x78);
    pvVar9 = *(void **)(param_3 + 0x70);
    *(int *)(param_2 + 0xb) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x5c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  puVar1 = param_2 + 8;
  if (puVar1 != (undefined8 *)(param_3 + 0x58)) {
    iVar14 = *(int *)(param_3 + 0x60);
    pvVar9 = *(void **)(param_3 + 0x58);
    *(int *)(param_2 + 9) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  FUN_1400021e4(param_3 + 0x88,&local_68);
  lVar15 = (longlong)local_68;
  iVar14 = (int)uStack_60;
  uVar13 = (int)uStack_60 - 1;
  if ((int)uStack_60 == 0) {
    uVar13 = 0;
  }
  if (0 < (int)uVar13) {
    uVar21 = 0;
    do {
      uVar7 = *(ushort *)((longlong)local_68 + uVar21 * 2);
      *(ushort *)((longlong)local_68 + uVar21 * 2) = (ushort)(uVar7 - 0x41 < 0x1a) * 0x20 + uVar7;
      uVar21 = uVar21 + 1;
    } while (uVar13 != uVar21);
  }
  uVar11 = uStack_60._4_4_;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_100 = param_4;
  if (param_2[0x12] == 0) {
    param_2[0x12] = lVar15;
    *(int *)(param_2 + 0x13) = iVar14;
    *(undefined4 *)((longlong)param_2 + 0x9c) = uVar11;
  }
  else {
    FUN_1400020a8();
    param_2[0x12] = lVar15;
    *(int *)(param_2 + 0x13) = iVar14;
    *(undefined4 *)((longlong)param_2 + 0x9c) = uVar11;
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar4 = (undefined8 *)(param_3 + 0xa0);
  puVar1 = param_2 + 0xd;
  if (puVar1 != puVar4) {
    iVar14 = *(int *)(param_3 + 0xa8);
    pvVar9 = *(void **)(param_3 + 0xa0);
    *(int *)(param_2 + 0xe) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x74) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x74) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  puVar2 = param_2 + 0xf;
  if (puVar2 != (undefined8 *)(param_3 + 0x168)) {
    iVar14 = *(int *)(param_3 + 0x170);
    pvVar9 = *(void **)(param_3 + 0x168);
    *(int *)(param_2 + 0x10) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x84) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x84) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar2,pvVar9,(longlong)iVar14 * 2);
      }
    }
  }
  plVar16 = *(longlong **)(param_3 + 0xc0);
  plVar20 = (longlong *)param_2[0x16];
  if (plVar20 != plVar16) {
    param_2[0x16] = plVar16;
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
  *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_3 + 200);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)(param_3 + 0xd8);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)(param_3 + 0xe0);
  *(undefined1 *)((longlong)param_2 + 0x113) = *(undefined1 *)(param_3 + 0xe8);
  *(undefined1 *)((longlong)param_2 + 0x114) = 1;
  *(undefined1 *)((longlong)param_2 + 0x115) = *(undefined1 *)(param_3 + 0xf0);
  *(undefined1 *)((longlong)param_2 + 0x116) = *(undefined1 *)(param_3 + 0xf8);
  *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)(param_3 + 0x100);
  FUN_140056680(&local_68,L"talking");
  pwVar19 = local_68;
  iVar14 = *(int *)(param_3 + 0x110);
  if (iVar14 == (int)uStack_60) {
    bVar24 = true;
    if (1 < iVar14) {
      iVar14 = wcscmp(*(wchar_t **)(param_3 + 0x108),local_68);
      bVar24 = iVar14 == 0;
    }
  }
  else {
    bVar24 = (int)uStack_60 + iVar14 == 1;
  }
  *(bool *)(param_2 + 0x22) = bVar24;
  if (pwVar19 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar19);
  }
  FUN_140056680(&local_68,L"muted");
  pwVar19 = local_68;
  iVar14 = *(int *)(param_3 + 0x110);
  if (iVar14 == (int)uStack_60) {
    if (iVar14 < 2) {
      bVar24 = true;
    }
    else {
      iVar14 = wcscmp(*(wchar_t **)(param_3 + 0x108),local_68);
      bVar24 = iVar14 == 0;
    }
  }
  else {
    bVar24 = (int)uStack_60 + iVar14 == 1;
  }
  *(bool *)((longlong)param_2 + 0x111) = bVar24;
  if (pwVar19 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar19);
  }
  *(undefined1 *)((longlong)param_2 + 0x11c) = *(undefined1 *)(param_3 + 0x158);
  *(undefined1 *)((longlong)param_2 + 0x11d) = *(undefined1 *)(param_3 + 0x160);
  *(undefined1 *)((longlong)param_2 + 0x11f) = 0;
  plVar16 = param_2 + 0x1c;
  iVar14 = *(int *)(param_3 + 0x130);
  iVar8 = *(int *)(param_2 + 0x1d);
  if (iVar8 < iVar14) {
    *(int *)(param_2 + 0x1d) = iVar14;
    if ((uint)(*(int *)((longlong)param_2 + 0xec) - iVar8) < (uint)(iVar14 - iVar8)) {
      FUN_1457f26a0(plVar16,iVar8);
    }
    FUN_1457f254d((longlong)iVar8 * 0x20 + *plVar16,iVar14 - iVar8);
  }
  else {
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    if (iVar14 < iVar8) {
      FUN_148eb74e0(plVar16,iVar14,iVar8 - iVar14);
      FUN_148eb753a(plVar16);
    }
  }
  uVar13 = *(uint *)(param_3 + 0x130);
  if (uVar13 != 0) {
    lVar15 = 0;
    uVar21 = 0;
    do {
      if ((longlong)uVar21 < (longlong)*(int *)(param_2 + 0x1d)) {
        FUN_144a787a6(*plVar16 + lVar15,*(longlong *)(param_3 + 0x128) + lVar15);
        FUN_144a787a6(*plVar16 + lVar15 + 0x10,*(longlong *)(param_3 + 0x128) + lVar15 + 0x10);
        uVar13 = *(uint *)(param_3 + 0x130);
      }
      uVar21 = uVar21 + 1;
      lVar15 = lVar15 + 0x20;
    } while (uVar21 != uVar13);
  }
  FUN_140002266(&local_68,L"partystatus_%d",*(undefined4 *)(param_3 + 0x140));
  if (param_2 + 0x14 == &local_68) {
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    param_2[0x14] = local_68;
    local_68 = (wchar_t *)0x0;
    *(int *)(param_2 + 0x15) = (int)uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xac) = uStack_60._4_4_;
  }
  if (DAT_14cbdf3d8 == local_100) {
    FUN_14020fad6(puVar1,&DAT_149dfb77a);
    FUN_14020fad6(param_2 + 0x1e,&DAT_149dfb77a);
    puVar1 = param_2 + 0x20;
    if (puVar1 != puVar4) {
      iVar14 = *(int *)(param_3 + 0xa8);
      pvVar9 = *(void **)(param_3 + 0xa0);
      *(int *)(param_2 + 0x21) = iVar14;
      if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x10c) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar14);
        if (iVar14 != 0) {
          memcpy((void *)*puVar1,pvVar9,(longlong)iVar14 * 2);
        }
      }
    }
  }
  else if (*(char *)(param_3 + 0x150) == '\x01') {
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_1413a454c(&local_68,*(undefined4 *)(param_3 + 0x140),0);
    pwVar19 = local_68;
    if (*(code **)(*(longlong *)local_68 + 0x50) != FUN_144828418) {
      pwVar19 = (wchar_t *)(**(code **)(*(longlong *)local_68 + 0x50))();
    }
    FUN_1447a1fc0(pwVar19);
    pcVar10 = *(code **)(*(longlong *)local_68 + 0x28);
    if (pcVar10 == FUN_14482841c) {
      pwVar19 = local_68 + 0xc;
      if (*(longlong *)(local_68 + 0x14) != 0) {
        pwVar19 = (wchar_t *)(*(longlong *)(local_68 + 0x14) + 8);
      }
    }
    else if (pcVar10 == (code *)&LAB_14010c34c) {
      pwVar19 = local_68 + 8;
    }
    else {
      pwVar19 = (wchar_t *)(*pcVar10)(local_68);
    }
    pwVar5 = (wchar_t *)(param_2 + 0x1e);
    if (pwVar5 != pwVar19) {
      iVar14 = *(int *)(pwVar19 + 4);
      pvVar9 = *(void **)pwVar19;
      *(int *)(param_2 + 0x1f) = iVar14;
      if (iVar14 == 0 && *(int *)((longlong)param_2 + 0xfc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xfc) = 0;
      }
      else {
        FUN_1446dd670(pwVar5,iVar14);
        if (iVar14 != 0) {
          memcpy(*(void **)pwVar5,pvVar9,(longlong)iVar14 * 2);
        }
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    plVar16 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar20 = plStack_70 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    local_c8 = (longlong *)0x0;
    plStack_c0 = (longlong *)0x0;
    FUN_1413a454c(&local_b8,*(undefined4 *)(param_3 + 0x148),0);
    FUN_14023409e(&local_d8,local_108 + 0x2d8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,&local_b8);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_d8;
    local_90 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a8,&local_98,&local_78);
    FUN_14007f2db(local_78,(ulonglong)plStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_d0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar3 = (int *)((longlong)local_d0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    plVar16 = (longlong *)CONCAT44(uStack_a4,local_a8);
    plVar20 = plVar16;
    if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
      plVar20 = (longlong *)(**(code **)(*plVar16 + 0x50))(plVar16);
    }
    FUN_1447a1fc0(plVar20);
    pcVar10 = *(code **)(*plVar16 + 0x28);
    if (pcVar10 == FUN_14482841c) {
      plVar20 = (longlong *)(plVar16[5] + 8);
      if (plVar16[5] == 0) {
        plVar20 = plVar16 + 3;
      }
    }
    else if (pcVar10 == (code *)&LAB_14010c34c) {
      plVar20 = plVar16 + 2;
    }
    else {
      plVar20 = (longlong *)(*pcVar10)(plVar16);
    }
    plVar6 = param_2 + 0x20;
    if (plVar6 != plVar20) {
      iVar14 = (int)plVar20[1];
      pvVar9 = (void *)*plVar20;
      *(int *)(param_2 + 0x21) = iVar14;
      if (iVar14 == 0 && *(int *)((longlong)param_2 + 0x10c) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
      }
      else {
        FUN_1446dd670(plVar6,iVar14);
        if (iVar14 != 0) {
          memcpy((void *)*plVar6,pvVar9,(longlong)iVar14 * 2);
        }
      }
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    plVar16 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar20 = plStack_c0 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar3 = (int *)((longlong)plVar16 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    FUN_14020fad6(param_2 + 0x1e,&DAT_149dfb77a);
    FUN_144a787a6(param_2 + 0x20,puVar4);
  }
  uVar13 = *(uint *)(param_3 + 0xb8);
  FUN_140056680(&local_a8,&DAT_149dfb77a);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_b8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_b0 = DAT_14c844848;
  lVar15 = FUN_1405c673d();
  if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar15 + 0x30))) {
    lVar23 = (ulonglong)uVar13 * 0x170;
    if (*(char *)(*(longlong *)(lVar15 + 0x28) + 0x28 + lVar23) == '\x01') {
      lVar22 = *(longlong *)(lVar15 + 0x28) + lVar23;
      lVar18 = *(longlong *)(lVar22 + 0x50);
      if (lVar18 == 0) {
        uVar17 = FUN_1465f8f8a();
        lVar18 = FUN_14477b664(uVar17);
        *(longlong *)(lVar22 + 0x50) = lVar18;
      }
      if (*(longlong *)(lVar22 + 0x58) == 0) {
        if ((lVar18 == 0) || (*(longlong *)(lVar22 + 0x48) == 0)) goto LAB_14109f9e8;
        plVar16 = *(longlong **)(lVar18 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar12 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar12 == '\0')) {
          *(undefined8 *)(lVar22 + 0x58) = 0;
          goto LAB_14109f9e8;
        }
        uVar17 = (**(code **)(*plVar16 + 0x110))(plVar16);
        lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar22 + 0x48));
        *(longlong *)(lVar22 + 0x58) = lVar18;
        if (lVar18 == 0) goto LAB_14109f9e8;
      }
      FUN_1400021e4(*(longlong *)(lVar15 + 0x28) + lVar23,&local_68);
      if (CONCAT44(uStack_a4,local_a8) != 0) {
        FUN_1400020a8();
      }
      local_a8 = (undefined4)local_68;
      uStack_a4 = local_68._4_4_;
      iStack_a0 = (int)uStack_60;
      uStack_9c = uStack_60._4_4_;
      lVar23 = *(longlong *)(lVar15 + 0x28) + lVar23;
      lVar15 = *(longlong *)(lVar23 + 0x50);
      if (lVar15 == 0) {
        uVar17 = FUN_1465f8f8a();
        lVar15 = FUN_14477b664(uVar17);
        *(longlong *)(lVar23 + 0x50) = lVar15;
      }
      lVar18 = *(longlong *)(lVar23 + 0x58);
      if (((lVar18 == 0) && (lVar18 = 0, lVar15 != 0)) && (*(longlong *)(lVar23 + 0x48) != 0)) {
        plVar16 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar12 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar12 == '\0')) {
          lVar18 = 0;
        }
        else {
          uVar17 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar23 + 0x48));
        }
        *(longlong *)(lVar23 + 0x58) = lVar18;
      }
      local_e8 = *(longlong **)(lVar18 + 0x18);
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 8))();
      }
      local_e0 = *(undefined4 *)(lVar18 + 0x20);
      FUN_14023409e(&local_f8,local_108 + 0x2e8,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,&local_e8);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_f8;
      local_90 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_c8,&local_98,&local_78);
      FUN_14007f2db(local_78,(ulonglong)plStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_f0 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar3 = (int *)((longlong)local_f0 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
          }
        }
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      FUN_140008f88(&local_b8,&local_c8);
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
LAB_14109f9e8:
  iVar14 = iStack_a0 + -1;
  if (iStack_a0 == 0) {
    iVar14 = 0;
  }
  FUN_1402980a2(param_2 + 0x1a,CONCAT44(uStack_a4,local_a8),iVar14);
  plVar16 = (longlong *)param_2[0x18];
  if (plVar16 != local_b8) {
    param_2[0x18] = local_b8;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  *(undefined4 *)(param_2 + 0x19) = local_b0;
  plVar16 = (longlong *)param_2[0x16];
  if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
  }
  FUN_1447a1fc0(plVar16);
  plVar16 = (longlong *)param_2[0x16];
  pcVar10 = *(code **)(*plVar16 + 0x28);
  if (pcVar10 == FUN_14482841c) {
    plVar20 = plVar16 + 3;
    if (plVar16[5] != 0) {
      plVar20 = (longlong *)(plVar16[5] + 8);
    }
  }
  else if (pcVar10 == (code *)&LAB_14010c34c) {
    plVar20 = plVar16 + 2;
  }
  else {
    plVar20 = (longlong *)(*pcVar10)(plVar16);
  }
  *(bool *)(param_2 + 0x11) = 1 < (int)plVar20[1];
  plVar16 = (longlong *)param_2[0x18];
  if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
  }
  FUN_1447a1fc0(plVar16);
  plVar16 = (longlong *)param_2[0x18];
  pcVar10 = *(code **)(*plVar16 + 0x28);
  if (pcVar10 == FUN_14482841c) {
    plVar20 = plVar16 + 3;
    if (plVar16[5] != 0) {
      plVar20 = (longlong *)(plVar16[5] + 8);
    }
  }
  else if (pcVar10 == (code *)&LAB_14010c34c) {
    plVar20 = plVar16 + 2;
  }
  else {
    plVar20 = (longlong *)(*pcVar10)(plVar16);
  }
  *(bool *)((longlong)param_2 + 0x89) = 1 < (int)plVar20[1];
  *(bool *)((longlong)param_2 + 0x8a) = 1 < *(int *)(param_2 + 0xe);
  *(bool *)((longlong)param_2 + 0x8b) = 1 < *(int *)(param_2 + 0x10);
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a01b0 FUN_1410a01b0 body=554 status=ok
// SIG undefined FUN_1410a01b0(void)

void FUN_1410a01b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x204) < *(int *)(param_1 + 0x1d8)) {
    local_79 = *(undefined1 *)(param_1 + 0x1c9);
    *(undefined1 *)(param_1 + 0x1c9) = 1;
    lVar1 = param_1 + 0x1e0;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = lVar1;
    if (*(int *)(param_1 + 0x1f8) == 0) {
      uVar9 = 1;
      local_60._0_4_ = 0xffffffff;
      iVar15 = 0;
      local_60._4_4_ = 0;
      local_70._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar9 = local_70 >> 0x20;
      iVar15 = *(int *)(param_1 + 0x1f8);
    }
    lVar5 = local_68;
    local_78 = param_1 + 0x1d0;
    iVar8 = (int)local_70;
    uVar6 = (uint)local_60;
    iVar7 = local_60._4_4_;
    iVar14 = local_58;
    if (local_60._4_4_ != iVar15 || local_68 != lVar1) {
      do {
        lVar13 = *(longlong *)(param_1 + 0x1d0) + (longlong)iVar7 * 0x58;
        local_4a = *(undefined1 *)(lVar13 + 0x48);
        local_49 = 1;
        FUN_1410a03dc(param_1,*(longlong *)(param_1 + 0x1d0) + (longlong)iVar7 * 0x58,lVar13 + 0x38,
                      &local_4a);
        uVar6 = ~(uint)uVar9 & uVar6;
        lVar13 = *(longlong *)(lVar5 + 0x10);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          lVar13 = lVar5;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
        lVar11 = (longlong)iVar8;
        uVar10 = *(uint *)(lVar13 + lVar11 * 4) & uVar6;
        if (uVar10 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar4 = iVar7;
          if (iVar7 < iVar8) {
            iVar4 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = *(uint *)(lVar13 + lVar11 * 4 + 4 + lVar12 * 4);
              if (uVar10 != 0) {
                iVar8 = iVar8 + (int)lVar12 + 1;
                uVar6 = 0xffffffff;
                goto LAB_1410a031f;
              }
              iVar14 = iVar14 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar4 - lVar11 != lVar12);
            uVar6 = 0xffffffff;
            iVar8 = iVar4;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar3;
        }
        else {
LAB_1410a031f:
          uVar9 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar9 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar7) {
            iVar7 = iVar3;
          }
        }
      } while (iVar7 != iVar15 || lVar5 != lVar1);
    }
    FUN_1457f2e14(local_78);
    *(undefined1 *)(param_1 + 0x1c9) = local_79;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a03dc FUN_1410a03dc body=2431 status=ok
// SIG undefined FUN_1410a03dc(void)

/* WARNING: Removing unreachable block (ram,0x0001410a0785) */
/* WARNING: Removing unreachable block (ram,0x0001410a0791) */
/* WARNING: Removing unreachable block (ram,0x0001410a0795) */

void FUN_1410a03dc(longlong param_1,char *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  int *piVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_188 [39];
  undefined1 local_161;
  undefined4 *local_160;
  longlong *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined8 uStack_b6;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar11 = param_4;
  if (param_4[1] == '\0') {
    uVar16 = 1;
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      puVar11 = (undefined1 *)(param_1 + 0x1c1);
      goto LAB_1410a0431;
    }
  }
  else {
LAB_1410a0431:
    uVar16 = *puVar11;
  }
  if (*(char *)(param_1 + 0x1c8) != '\x01') {
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_b8 = 0;
    uStack_b6 = 0;
    local_118 = CONCAT31(local_118._1_3_,uVar16);
    local_88 = (undefined4)local_e8;
    uStack_84 = local_e8._4_4_;
    uStack_80 = (undefined4)uStack_e0;
    uStack_7c = uStack_e0._4_4_;
    local_78 = (undefined4)local_d8;
    uStack_74 = local_d8._4_4_;
    uStack_70 = uStack_d0;
    uStack_6c = uStack_cc;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = (undefined4)uStack_f0;
    uStack_8c = uStack_f0._4_4_;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = uStack_100;
    uStack_9c = uStack_fc;
    local_f8 = (longlong *)0x0;
    local_108 = FUN_143dee5ca;
    local_d8 = CONCAT44(uStack_114,local_118);
    local_e8 = &PTR_LAB_14b4199f0;
    uStack_e0 = param_1;
    local_118 = local_78;
    uStack_114 = uStack_74;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    uStack_94 = 0;
    local_98 = 0;
    uStack_a4 = 0;
    local_a8 = 0;
    uStack_b6 = 0;
    uStack_b8 = 0;
    uStack_be = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_e8 = &PTR_LAB_14b4199f0;
    local_f8 = (longlong *)0x0;
    local_108 = FUN_143dee5ca;
    uStack_12c = uStack_f0._4_4_;
    uStack_130 = (undefined4)uStack_f0;
    local_138 = 0;
    uStack_13c = uStack_fc;
    uStack_140 = uStack_100;
    local_148 = 0;
    if (((((*(int *)(param_1 + 0x5c) != 0) && (uVar13 = *(uint *)(param_1 + 0x58), -1 < (int)uVar13)
          ) && ((int)uVar13 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(param_1 + 0x5c))))) &&
       (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
        (((longlong *)*plVar18 != (longlong *)0x0 &&
         (lVar27 = (**(code **)(*(longlong *)*plVar18 + 0x2b0))(), lVar27 != 0)))))) {
      FUN_140bc53f1(param_2,param_3,lVar27,&local_108);
    }
    if (local_108 != (code *)0x0) {
      plVar18 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar18 = &local_e8;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    goto LAB_1410a0a9b;
  }
  local_158 = (longlong *)(param_1 + 0x1d0);
  local_161 = uVar16;
  local_160 = param_3;
  local_150 = param_4;
  if (*param_2 == '\x01') {
    FUN_1447a97f4(&local_108,param_2 + 0x10);
    if (0 < local_108._4_4_) {
      lVar27 = 0;
      uVar26 = 0;
      iVar6 = local_108._4_4_;
      iVar21 = DAT_14c948000;
      do {
        bVar29 = (uint)local_108 != 0;
        bVar30 = (uint)local_108 != iVar21;
        piVar22 = &DAT_14c948620;
        piVar24 = (int *)&DAT_14c948618;
        if (bVar30 && bVar29) {
          puVar25 = &uStack_100;
          if (0 < local_e8._4_4_) {
            puVar25 = uStack_f0;
          }
          if (1 < iVar6) {
            puVar25 = uStack_f0;
          }
          piVar22 = (int *)((longlong)puVar25 + lVar27 + 8);
          piVar24 = (int *)((longlong)puVar25 + lVar27);
        }
        if ((*piVar24 == DAT_14cb7beb0) && (*piVar22 == DAT_14cb7beb8)) {
LAB_1410a0641:
          FUN_1402b5374(&local_108,uVar26 & 0xffffffff,0);
          iVar6 = local_108._4_4_;
          iVar21 = DAT_14c948000;
        }
        else {
          piVar22 = &DAT_14c948620;
          piVar24 = (int *)&DAT_14c948618;
          if (bVar30 && bVar29) {
            puVar25 = &uStack_100;
            if (0 < local_e8._4_4_) {
              puVar25 = uStack_f0;
            }
            if (1 < iVar6) {
              puVar25 = uStack_f0;
            }
            piVar22 = (int *)((longlong)puVar25 + lVar27 + 8);
            piVar24 = (int *)((longlong)puVar25 + lVar27);
          }
          if ((*piVar24 == DAT_14cb7bec8) && (*piVar22 == DAT_14cb7bed0)) goto LAB_1410a0641;
          piVar22 = &DAT_14c948620;
          piVar24 = (int *)&DAT_14c948618;
          if (bVar30 && bVar29) {
            puVar25 = &uStack_100;
            if (0 < local_e8._4_4_) {
              puVar25 = uStack_f0;
            }
            if (1 < iVar6) {
              puVar25 = uStack_f0;
            }
            piVar22 = (int *)((longlong)puVar25 + lVar27 + 8);
            piVar24 = (int *)((longlong)puVar25 + lVar27);
          }
          if ((*piVar24 == DAT_14cb7bee0) && (*piVar22 == DAT_14cb7bee8)) goto LAB_1410a0641;
          piVar22 = &DAT_14c948620;
          piVar24 = (int *)&DAT_14c948618;
          if (bVar30 && bVar29) {
            puVar25 = &uStack_100;
            if (0 < local_e8._4_4_) {
              puVar25 = uStack_f0;
            }
            if (1 < iVar6) {
              puVar25 = uStack_f0;
            }
            piVar22 = (int *)((longlong)puVar25 + lVar27 + 8);
            piVar24 = (int *)((longlong)puVar25 + lVar27);
          }
          if ((*piVar24 == DAT_14cb7bef8) && (*piVar22 == DAT_14cb7bf00)) goto LAB_1410a0641;
          piVar22 = &DAT_14c948620;
          piVar24 = (int *)&DAT_14c948618;
          if (bVar30 && bVar29) {
            puVar25 = &uStack_100;
            if (0 < local_e8._4_4_) {
              puVar25 = uStack_f0;
            }
            if (1 < iVar6) {
              puVar25 = uStack_f0;
            }
            piVar22 = (int *)((longlong)puVar25 + lVar27 + 8);
            piVar24 = (int *)((longlong)puVar25 + lVar27);
          }
          if ((*piVar24 == DAT_14cb7bf10) && (*piVar22 == DAT_14cb7bf18)) goto LAB_1410a0641;
        }
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 0xc;
      } while ((longlong)uVar26 < (longlong)iVar6);
    }
    uVar13 = (uint)local_108;
    if (uStack_f0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar13 = *(uint *)(param_2 + 0x10);
  }
  plVar18 = local_158;
  iVar6 = FUN_14189cb24(local_158,uVar13,param_2);
  if (iVar6 == -1) {
LAB_1410a084d:
    if (*(int *)(param_1 + 0x204) == 0) {
      iVar6 = *(int *)(param_1 + 0x1d8);
      *(int *)(param_1 + 0x1d8) = iVar6 + 1;
      if (*(int *)(param_1 + 0x1dc) == iVar6) {
        FUN_1403e7a24(plVar18,iVar6);
      }
      iVar21 = *(int *)(param_1 + 0x1f8);
      if (iVar21 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar7 = iVar21 + -1;
        }
        iVar7 = iVar7 >> 5;
      }
      lVar19 = param_1 + 0x1e0;
      iVar14 = iVar21 + 1;
      iVar28 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar28 = iVar21;
      }
      if (iVar28 >> 5 == iVar7) {
        *(int *)(param_1 + 0x1f8) = iVar14;
      }
      else {
        if (*(int *)(param_1 + 0x1fc) <= iVar21) {
          iVar7 = iVar21;
          if (iVar21 + 0x20U < 0xa0) {
            iVar14 = 0x80;
          }
          else {
            uVar8 = iVar21 + 0x20U >> 5;
            if (*(int *)(param_1 + 0x1fc) + 0x1fU < 0xa0) {
              uVar17 = 4;
              if (4 < uVar8) {
                uVar17 = uVar8;
              }
            }
            else {
              uVar17 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
            }
            uVar26 = (ulonglong)(uVar17 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar9 = (uint)(uVar26 + 0xf);
                if (uVar17 < 0x1ffd) {
                  uVar26 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
                }
                else {
                  uVar15 = (ulonglong)(uVar9 & 0xfffffff0);
                  if (uVar15 < 0x7ff1) {
                    bVar12 = (&DAT_14c841e00)[uVar9 >> 4];
                    uVar20 = 0x32;
                    if (0x32 < bVar12) {
                      uVar20 = (ulonglong)bVar12;
                    }
                    uVar23 = 0x32 - (ulonglong)bVar12;
                    do {
                      uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_1410a0be5;
                      lVar27 = uVar20 + 1 + uVar23;
                      uVar23 = uVar23 - 1;
                    } while (lVar27 != 0x33);
                  }
                  uVar26 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar26 = (ulonglong)DAT_14c841df8;
                  }
                  uVar26 = -uVar26 & (uVar15 + uVar26) - 1;
                }
              }
              else {
                uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
                iVar7 = *(int *)(param_1 + 0x1f8);
              }
            }
LAB_1410a0be5:
            iVar10 = (int)(uVar26 >> 2);
            iVar14 = -0x20;
            if ((int)uVar8 <= iVar10) {
              iVar14 = iVar10 << 5;
            }
          }
          *(int *)(param_1 + 0x1fc) = iVar14;
          FUN_1446efbd8(lVar19,iVar7);
          iVar14 = *(int *)(param_1 + 0x1f8) + 1;
        }
        iVar7 = iVar14 + 0x1f;
        if (-1 < iVar14) {
          iVar7 = iVar14;
        }
        *(int *)(param_1 + 0x1f8) = iVar14;
        if (iVar14 % 0x20 != 0) {
          lVar27 = *(longlong *)(param_1 + 0x1f0);
          if (*(longlong *)(param_1 + 0x1f0) == 0) {
            lVar27 = lVar19;
          }
          bVar12 = -(char)(iVar14 % 0x20);
          *(uint *)(lVar27 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar27 + (longlong)(iVar7 >> 5) * 4) << (bVar12 & 0x1f)) >>
               (bVar12 & 0x1f);
        }
      }
      lVar27 = (longlong)iVar6;
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        lVar19 = *(longlong *)(param_1 + 0x1f0);
      }
      bVar12 = (byte)iVar21 & 0x1f;
      puVar1 = (uint *)(lVar19 + (longlong)(iVar28 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x200);
      lVar27 = (longlong)iVar6;
      iVar21 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 4 + lVar27 * 0x58);
      *(int *)(param_1 + 0x200) = iVar21;
      iVar7 = *(int *)(param_1 + 0x204) + -1;
      *(int *)(param_1 + 0x204) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar21 * 0x58) = 0xffffffff;
      }
    }
    iVar21 = 1;
    lVar19 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x1f0);
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    puVar1 = (uint *)(lVar19 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
    _Src = (void *)(*(longlong *)(param_1 + 0x1d0) + lVar27 * 0x58);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1d0) + lVar27 * 0x58);
    *(undefined2 *)puVar2 = 0;
    *(undefined8 *)((longlong)puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 8);
    *puVar2 = *(undefined8 *)param_2;
    FUN_1447715ec(puVar2 + 2,param_2 + 0x10);
    plVar18 = local_158;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
    if (*(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x204) == 1) {
      uVar8 = 1;
LAB_1410a09e0:
      if (((int)uVar8 < 1) || (iVar21 <= *(int *)(param_1 + 0x218))) {
        uVar13 = *(int *)(param_1 + 0x218) - 1U & uVar13;
        *(uint *)((longlong)_Src + 0x54) = uVar13;
        lVar27 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(param_1 + 0x210) == 0) {
          lVar27 = param_1 + 0x208;
        }
        *(undefined4 *)((longlong)_Src + 0x50) =
             *(undefined4 *)
              (lVar27 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)(int)uVar13) * 4);
        lVar27 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(param_1 + 0x210) == 0) {
          lVar27 = param_1 + 0x208;
        }
        *(int *)(lVar27 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)(int)uVar13) * 4) =
             iVar6;
      }
      else {
        *(int *)(param_1 + 0x218) = iVar21;
        FUN_1410a0d5c(plVar18);
      }
    }
    else {
      iVar7 = FUN_14189cb24(local_158,uVar13,_Src);
      if (iVar7 == -1) {
        uVar8 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x204);
        if (3 < uVar8) {
          uVar26 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
          lVar27 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar21 = 1 << ((byte)lVar27 & 0x1f);
        }
        goto LAB_1410a09e0;
      }
      lVar27 = *plVar18;
      if (*(longlong *)(lVar27 + 0x28 + (longlong)iVar7 * 0x58) != 0) {
        FUN_1400020a8();
      }
      memmove((void *)(lVar27 + (longlong)iVar7 * 0x58),_Src,0x50);
      plVar18 = local_158;
      FUN_14890ad1c(local_158,iVar6);
    }
    lVar27 = *plVar18 + (longlong)iVar6 * 0x58;
  }
  else {
    lVar27 = *plVar18;
    if (lVar27 + (longlong)iVar6 * 0x58 == 0) goto LAB_1410a084d;
    lVar27 = (longlong)iVar6 * 0x58 + lVar27;
  }
  uVar3 = local_160[1];
  uVar4 = local_160[2];
  uVar5 = local_160[3];
  *(undefined4 *)(lVar27 + 0x38) = *local_160;
  *(undefined4 *)(lVar27 + 0x3c) = uVar3;
  *(undefined4 *)(lVar27 + 0x40) = uVar4;
  *(undefined4 *)(lVar27 + 0x44) = uVar5;
  *(undefined1 *)(lVar27 + 0x48) = local_161;
  param_4 = local_150;
LAB_1410a0a9b:
  if (param_4[1] == '\x01') {
    param_4[1] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a0d5c FUN_1410a0d5c body=1171 status=ok
// SIG undefined FUN_1410a0d5c(void)

void FUN_1410a0d5c(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 != 0) {
    plVar15 = param_1 + 7;
    FUN_144a1cbf0(plVar15,0,uVar9,4);
    if (0 < (int)uVar9) {
      uVar1 = 0;
      do {
        plVar2 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar2 = plVar15;
        }
        *(undefined4 *)((longlong)plVar2 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar1) * 4) =
             0xffffffff;
        uVar1 = uVar1 + 1;
      } while (uVar9 != uVar1);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_98 = 0xffffffff;
      local_60._4_4_ = 0;
      uVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      uVar17 = local_70 & 0xffffffff;
      uVar13 = local_70 >> 0x20;
      local_98 = (uint)local_60;
    }
    local_80 = local_68;
    if (local_60._4_4_ < (int)local_68[3]) {
      iVar8 = local_60._4_4_;
      iVar16 = local_58;
      local_88 = plVar15;
      do {
        local_78 = *param_1 + (longlong)iVar8 * 0x58;
        local_94 = iVar16;
        if (*(char *)(*param_1 + (longlong)iVar8 * 0x58) == '\x01') {
          local_90 = uVar17;
          FUN_1447a97f4(&local_70,local_78 + 0x10);
          if (0 < local_70._4_4_) {
            lVar14 = 0;
            uVar17 = 0;
            iVar16 = local_70._4_4_;
            iVar3 = DAT_14c948000;
            do {
              bVar18 = (int)local_70 != 0;
              bVar19 = (int)local_70 != iVar3;
              piVar10 = &DAT_14c948620;
              piVar11 = (int *)&DAT_14c948618;
              if (bVar19 && bVar18) {
                pplVar12 = &local_68;
                if (0 < local_4c) {
                  pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar16) {
                  pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar10 = (int *)((longlong)pplVar12 + lVar14 + 8);
                piVar11 = (int *)((longlong)pplVar12 + lVar14);
              }
              if ((*piVar11 == DAT_14cb7beb0) && (*piVar10 == DAT_14cb7beb8)) {
LAB_1410a1195:
                FUN_1402b5374(&local_70,uVar17 & 0xffffffff,0);
                iVar16 = local_70._4_4_;
                iVar3 = DAT_14c948000;
              }
              else {
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar12 = &local_68;
                  if (0 < local_4c) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar10 = (int *)((longlong)pplVar12 + lVar14 + 8);
                  piVar11 = (int *)((longlong)pplVar12 + lVar14);
                }
                if ((*piVar11 == DAT_14cb7bec8) && (*piVar10 == DAT_14cb7bed0)) goto LAB_1410a1195;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar12 = &local_68;
                  if (0 < local_4c) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar10 = (int *)((longlong)pplVar12 + lVar14 + 8);
                  piVar11 = (int *)((longlong)pplVar12 + lVar14);
                }
                if ((*piVar11 == DAT_14cb7bee0) && (*piVar10 == DAT_14cb7bee8)) goto LAB_1410a1195;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar12 = &local_68;
                  if (0 < local_4c) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar10 = (int *)((longlong)pplVar12 + lVar14 + 8);
                  piVar11 = (int *)((longlong)pplVar12 + lVar14);
                }
                if ((*piVar11 == DAT_14cb7bef8) && (*piVar10 == DAT_14cb7bf00)) goto LAB_1410a1195;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar19 && bVar18) {
                  pplVar12 = &local_68;
                  if (0 < local_4c) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar16) {
                    pplVar12 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar10 = (int *)((longlong)pplVar12 + lVar14 + 8);
                  piVar11 = (int *)((longlong)pplVar12 + lVar14);
                }
                if ((*piVar11 == DAT_14cb7bf10) && (*piVar10 == DAT_14cb7bf18)) goto LAB_1410a1195;
              }
              uVar17 = uVar17 + 1;
              lVar14 = lVar14 + 0xc;
            } while ((longlong)uVar17 < (longlong)iVar16);
          }
          iVar16 = (int)local_70;
          uVar17 = local_90;
          plVar15 = local_88;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
            uVar17 = local_90;
            plVar15 = local_88;
          }
        }
        else {
          iVar16 = *(int *)(local_78 + 0x10);
        }
        uVar6 = (longlong)iVar16 & (longlong)(int)param_1[9] - 1U;
        iVar16 = (int)uVar6;
        *(int *)(local_78 + 0x54) = iVar16;
        plVar2 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar2 = plVar15;
        }
        *(undefined4 *)(local_78 + 0x50) =
             *(undefined4 *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar2 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar2 = plVar15;
        }
        *(int *)((longlong)plVar2 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8
        ;
        uVar9 = local_98 & ~(uint)uVar13;
        plVar2 = (longlong *)local_80[2];
        if ((longlong *)local_80[2] == (longlong *)0x0) {
          plVar2 = local_80;
        }
        iVar3 = (int)local_80[3];
        iVar8 = (int)uVar17;
        lVar14 = (longlong)iVar8;
        uVar1 = *(uint *)((longlong)plVar2 + lVar14 * 4) & uVar9;
        iVar16 = local_94;
        if (uVar1 == 0) {
          iVar4 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar4 = iVar3 + -1;
          }
          iVar4 = iVar4 >> 5;
          iVar5 = iVar4;
          if (iVar4 < iVar8) {
            iVar5 = iVar8;
          }
          if (iVar4 <= iVar8) break;
          lVar7 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar1 = *(uint *)((longlong)plVar2 + lVar7 * 4 + lVar14 * 4 + 4);
            if (uVar1 != 0) break;
            lVar7 = lVar7 + 1;
            if (iVar5 - lVar14 == lVar7) goto LAB_1410a11c8;
          }
          uVar17 = (ulonglong)(iVar8 + (int)lVar7 + 1);
          local_98 = 0xffffffff;
          uVar9 = local_98;
        }
        local_98 = uVar9;
        uVar13 = (ulonglong)(-uVar1 & uVar1);
        uVar6 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_1410a11c8:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a11f0 FUN_1410a11f0 body=93 status=ok
// SIG undefined FUN_1410a11f0(void)

void FUN_1410a11f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abea1e0;
  param_1[5] = &PTR_FUN_14abea500;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410a124d FUN_1410a124d body=49 status=ok
// SIG undefined FUN_1410a124d(void)

longlong FUN_1410a124d(void)

{
  if (DAT_14cb917f0 == 0) {
    FUN_140f50038(&DAT_14cb917f0,&PTR_s__Script_GbxUICore_14b45df0e_2_14b45def0);
  }
  return DAT_14cb917f0;
}



// FUNCTION 1410a127e FUN_1410a127e body=49 status=ok
// SIG undefined FUN_1410a127e(void)

longlong FUN_1410a127e(void)

{
  if (DAT_14cc1f860 == 0) {
    FUN_140f50038(&DAT_14cc1f860,&PTR_s__Script_MeshModelingToolsExp_14bd60fe8);
  }
  return DAT_14cc1f860;
}



// FUNCTION 1410a12b0 FUN_1410a12b0 body=86 status=ok
// SIG undefined FUN_1410a12b0(void)

void FUN_1410a12b0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  *param_1 = &PTR_FUN_14bad5c40;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    FUN_1400020a8(lpCriticalSection);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a1306(param_1 + 3);
  return;
}



// FUNCTION 1410a1306 FUN_1410a1306 body=55 status=ok
// SIG undefined FUN_1410a1306(void)

void FUN_1410a1306(longlong *param_1)

{
  FUN_1410a133e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410a133e FUN_1410a133e body=416 status=ok
// SIG undefined FUN_1410a133e(void)

void FUN_1410a133e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a14e0 FUN_1410a14e0 body=84 status=ok
// SIG undefined FUN_1410a14e0(void)

void FUN_1410a14e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1410a1536(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a1536 FUN_1410a1536 body=736 status=ok
// SIG undefined FUN_1410a1536(void)

void FUN_1410a1536(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((char)param_2[1] == '\x01') {
    lVar4 = *param_1;
    uVar2 = *param_2;
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_1410a158d:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1410a158d;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  lVar4 = *param_1;
  uVar2 = param_2[0xc];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1410a1619:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1410a1619;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0xd];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1410a16ab:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1410a16ab;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x10];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_1410a176b;
  if (iVar3 == 0) {
LAB_1410a172c:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1410a172c;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_1410a176b:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 1410a1822 FUN_1410a1822 body=178 status=ok
// SIG undefined FUN_1410a1822(void)

undefined8 * FUN_1410a1822(undefined8 *param_1)

{
  FUN_14076ac9c();
  *param_1 = &PTR_FUN_14b217d70;
  param_1[5] = &PTR_LAB_14b218770;
  param_1[6] = &PTR_LAB_14b2187b0;
  param_1[0x55] = &PTR_LAB_14b218800;
  param_1[0x56] = &PTR_LAB_14b218880;
  param_1[0x57] = &PTR_LAB_14b218890;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  param_1[0xc9] = 0x4040000000000000;
  param_1[0xca] = 0x4040000000000000;
  param_1[0xcb] = 0x4040000000000000;
  param_1[0xcc] = 0x4230000042000000;
  *(undefined4 *)(param_1 + 0xcd) = 0x41b00000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  return param_1;
}



// FUNCTION 1410a18d4 FUN_1410a18d4 body=4320 status=ok
// SIG undefined FUN_1410a18d4(void)

void FUN_1410a18d4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_130;
  undefined *local_128;
  code *local_120;
  undefined8 local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_80 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_80);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_80 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_80);
    }
  }
  local_98 = 0;
  local_90 = 0x7012;
  local_88 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14170fd90;
      local_130 = 0x8000000000000000;
      local_138 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_98);
    }
  }
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_a8 = (undefined4)uVar2;
      uStack_a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a8);
    }
  }
  iStack_ac = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_ac);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_ac);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_ac);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_ac = (int)uVar2;
      local_a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_ac);
    }
  }
  iVar10 = iStack_ac;
  local_b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_120 = FUN_1405ebbb2;
      local_128 = &DAT_14c9520b8;
      local_130 = 0;
      local_138 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_b0 = (undefined4)uVar2;
      iStack_ac = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_b0);
    }
  }
  iStack_b4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_b4);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_b4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_b4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_b4 = (int)uVar2;
      local_b0 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_b4);
    }
  }
  iVar8 = iStack_b4;
  local_b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_120 = FUN_1408a629c;
      local_128 = &DAT_14c9520b8;
      local_130 = 0;
      local_138 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_b8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_b8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_b8 = (undefined4)uVar2;
      iStack_b4 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_b8);
    }
  }
  local_c0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_c0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_c0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_c0 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1403a682c;
      local_130 = 0;
      local_138 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_d8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_d8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_d8 = (undefined4)uVar2;
      uStack_d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_d8);
    }
  }
  uStack_dc = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_120 = FUN_1408a629c;
      local_128 = &DAT_14c9520b8;
      local_130 = 0;
      local_138 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_dc);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_dc);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_dc);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_dc = (undefined4)uVar2;
      local_d8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_dc);
    }
  }
  local_e0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_120 = FUN_1408a629c;
      local_128 = &DAT_14c9520b8;
      local_130 = 0;
      local_138 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_e0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_e0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_e0 = (undefined4)uVar2;
      uStack_dc = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_e0);
    }
  }
  uVar9 = local_b0;
  uVar7 = local_b8;
  uVar2 = local_c0;
  uVar6 = uStack_dc;
  uVar5 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = local_d8;
  uStack_f4 = uStack_d4;
  uStack_f0 = uStack_d0;
  uStack_ec = uStack_cc;
  local_e8 = local_c8;
  lVar4 = CONCAT44(uStack_a4,local_a8);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar4);
  }
  uVar11 = 0;
  if (lVar4 != 0) {
    uVar11 = uStack_a0;
  }
  local_78 = local_98;
  local_70 = local_90;
  local_68 = 0;
  local_128 = (undefined *)CONCAT71(local_128._1_7_,iVar8 != 0);
  local_100 = uVar5;
  local_108 = uVar6;
  local_110 = &local_f8;
  local_118 = uVar2;
  local_120 = (code *)CONCAT44(local_120._4_4_,uVar7);
  local_138 = CONCAT71(local_138._1_7_,iVar10 != 0);
  local_130 = local_130 & 0xffffffffffffff00;
  FUN_1410a29b6(local_80,&local_78,uVar9,uVar11);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a29b6 FUN_1410a29b6 body=737 status=ok
// SIG undefined FUN_1410a29b6(void)

void FUN_1410a29b6(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                  byte param_5,char param_6,undefined1 param_7,undefined4 param_8,undefined8 param_9
                  ,undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
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
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    if (param_4 == (longlong *)0x0 || param_5 != 0) {
      if (((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x180))(), lVar4 != 0))
         && (0 < *(int *)(lVar4 + 0x238))) {
        iVar8 = 0;
        lVar9 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar9);
          if (((((iVar1 != 0) &&
                (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar9), -1 < (int)uVar2)) &&
               (((int)uVar2 < DAT_14c9647dc &&
                ((plVar7 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)))))) &&
              ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
             (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
            uVar5 = FUN_1410a2c98();
            plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar5);
            if (plVar7 != (longlong *)0x0) {
              uVar5 = FUN_1410a2c98();
              plVar6 = (longlong *)FUN_144718840(plVar7,uVar5);
              if ((plVar7 != plVar6) && (plVar6 != (longlong *)0x0)) {
                if (param_6 == '\0') {
                  if ((param_5 & plVar6 == param_4) == 0) {
LAB_1410a2b57:
                    local_a8 = *(undefined8 *)(param_10 + 4);
                    local_b8 = *param_10;
                    uStack_b4 = param_10[1];
                    uStack_b0 = param_10[2];
                    uStack_ac = param_10[3];
                    local_c0 = param_12;
                    local_c8 = param_11;
                    local_d0 = &local_b8;
                    local_d8 = param_9;
                    local_e0 = param_8;
                    local_e8 = param_7;
                    (**(code **)(*plVar6 + 0x40))(plVar6,param_2,param_3,1);
                  }
                }
                else {
                  plVar7 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar4 + 0x230) + lVar9);
                  cVar3 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
                  if (((param_5 & plVar6 == param_4) == 0) && (cVar3 != '\0')) goto LAB_1410a2b57;
                }
              }
            }
          }
          lVar9 = lVar9 + 8;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar4 + 0x238));
      }
    }
    else {
      local_88 = *(undefined8 *)(param_10 + 4);
      local_d0 = &local_98;
      local_98 = *param_10;
      uStack_94 = param_10[1];
      uStack_90 = param_10[2];
      uStack_8c = param_10[3];
      local_c0 = param_12;
      local_c8 = param_11;
      local_d8 = param_9;
      local_e0 = param_8;
      local_e8 = param_7;
      (**(code **)(*param_4 + 0x40))(param_4,param_2,param_3,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a2c98 FUN_1410a2c98 body=228 status=ok
// SIG undefined FUN_1410a2c98(void)

longlong FUN_1410a2c98(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5dde8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14869e50b;
    local_40 = &LAB_1459bee02;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxFeedbackObserver",&DAT_14cb5dde8,&DAT_14869e50a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5dde8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a2d7e FUN_1410a2d7e body=40 status=ok
// SIG undefined FUN_1410a2d7e(void)

undefined8 FUN_1410a2d7e(undefined8 param_1,int param_2)

{
  FUN_1410a2da6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a2da6 FUN_1410a2da6 body=83 status=ok
// SIG undefined FUN_1410a2da6(void)

void FUN_1410a2da6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b65d4b0;
  param_1[6] = &PTR_FUN_14b65d7a0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a2dfa(param_1 + 0x9a);
  FUN_1410a2eac(param_1);
  return;
}



// FUNCTION 1410a2dfa FUN_1410a2dfa body=55 status=ok
// SIG undefined FUN_1410a2dfa(void)

void FUN_1410a2dfa(longlong *param_1)

{
  FUN_1410a2e32(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410a2e32 FUN_1410a2e32 body=121 status=ok
// SIG undefined FUN_1410a2e32(void)

void FUN_1410a2e32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 1410a2eac FUN_1410a2eac body=736 status=ok
// SIG undefined FUN_1410a2eac(void)

void FUN_1410a2eac(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2c9340;
  param_1[6] = &PTR_FUN_14b2c9630;
  plVar1 = param_1 + 0x89;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x8d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x8c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x8c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x81;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x85) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x84)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x84)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x6f],*(undefined4 *)(param_1 + 0x70));
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x5f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 99) * 0x120))
  ;
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x62)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x62)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x57;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5b) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5a)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5a)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 1410a318c FUN_1410a318c body=38 status=ok
// SIG undefined FUN_1410a318c(void)

undefined8 FUN_1410a318c(undefined8 param_1,int param_2)

{
  FUN_1410a31b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a31b2 FUN_1410a31b2 body=465 status=ok
// SIG undefined FUN_1410a31b2(void)

void FUN_1410a31b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a837980;
  FUN_1410a3383(param_1[3],*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_145868660(param_1 + 3,0);
  }
  FUN_1410a3383(param_1[5],*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_145868660(param_1 + 5,0);
  }
  param_1[7] = 0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    param_1[8] = 0;
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
  param_1[9] = 0;
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    param_1[10] = 0;
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
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[8];
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
  FUN_1410a3383(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a3383(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410a3383 FUN_1410a3383 body=75 status=ok
// SIG undefined FUN_1410a3383(void)

void FUN_1410a3383(longlong param_1,int param_2)

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



// FUNCTION 1410a33ce FUN_1410a33ce body=96 status=ok
// SIG undefined FUN_1410a33ce(void)

ulonglong FUN_1410a33ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1410a3411:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1410a3411;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1410a342e FUN_1410a342e body=1341 status=ok
// SIG undefined FUN_1410a342e(void)

void FUN_1410a342e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_118 [39];
  undefined1 local_f1;
  char local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_c8 [2];
  undefined8 ***local_c0 [3];
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  longlong *local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x138) != '\x01') {
    *(undefined4 *)(param_1 + 0xec) = 0;
    goto LAB_1410a3490;
  }
  cVar4 = *(char *)(param_1 + 0xf4);
  *(bool *)(param_1 + 0xf4) = param_3 != 0;
  if ((param_3 == 0) || (cVar4 != '\0')) goto LAB_1410a3490;
  fVar3 = *(float *)(param_2 + 0xb8);
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar13 = 0;
    local_e8 = 0;
LAB_1410a3836:
    local_e0 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_1410a37ff:
      lVar13 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar14 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1410a37ff;
        lVar13 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    local_e8 = param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_1410a3836;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    bVar7 = false;
    local_e0 = plVar12;
  }
  plVar12 = local_e0;
  local_c8[0] = 0;
  local_f0[0] = '\x03';
  local_d8._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar9 = (uint)local_d8;
  }
  else {
    uVar9 = *(uint *)(lVar13 + 0xc);
    local_d8 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar11;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_d8;
      if (bVar16) {
        iVar8 = iVar11;
      }
    }
  }
  local_d8._0_4_ = uVar9;
  local_d8 = CONCAT44(iVar8,(uint)local_d8);
  local_d0 = 2;
  if (local_c8[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
    local_c8[0] = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  FUN_1447c3578(lVar5 + 0x100,local_c0,local_f0);
  if (local_a0 == 3) {
    uVar9 = 3;
    fVar17 = local_c0[0]._0_4_;
  }
  else {
    pfVar10 = &local_98;
    FUN_1400b56fe(pfVar10,local_c0,3);
    fVar17 = 0.0;
    if (local_78 != 0) {
      fVar17 = local_98;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar10 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar6)(pfVar10);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar9 = (uint)local_a0;
  }
  *(float *)(param_1 + 0xec) = fVar3 + fVar17;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar15 = local_c0;
    if (0x18 < local_a8) {
      ppppuVar15 = (undefined8 ****)local_c0[0];
    }
    (*pcVar6)(ppppuVar15);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(local_c0[0]);
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_e0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
LAB_1410a3490:
  if (*(char *)(lVar5 + 0x178) == '\x01') {
    fVar3 = *(float *)(param_2 + 0xbc);
    local_f1 = 2;
    local_c0[0] = (undefined8 ***)FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_98);
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_144a7bf34(local_f0,&local_98,local_c0,&local_f1);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    pfVar10 = &local_98;
    FUN_1447c3578(lVar5 + 0x140,pfVar10,local_f0);
    fVar17 = (float)FUN_144a7ecd0(pfVar10);
    *(float *)(param_1 + 0xf0) = fVar3 + fVar17;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar10 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar6)(pfVar10);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    FUN_144a5ac3a(local_f0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a396c FUN_1410a396c body=86 status=ok
// SIG undefined FUN_1410a396c(void)

void FUN_1410a396c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1410a39c4(param_1 + 0x48,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a39c4 FUN_1410a39c4 body=127 status=ok
// SIG undefined FUN_1410a39c4(void)

void FUN_1410a39c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  local_18 = param_3[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1410a3a44(param_1,param_2,&local_20);
  plVar3 = (longlong *)param_3[1];
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



// FUNCTION 1410a3a44 FUN_1410a3a44 body=297 status=ok
// SIG undefined FUN_1410a3a44(void)

void FUN_1410a3a44(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar10 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar10), plVar4 != (longlong *)0x0))) {
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,&local_50);
        if (cVar6 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar5 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_1410a3b5f;
          goto LAB_1410a3a7c;
        }
      }
      uVar7 = uVar9 - 1;
      bVar8 = true;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410a3b5f:
    FUN_14474d06a(param_1,0);
  }
LAB_1410a3a7c:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a3b6e FUN_1410a3b6e body=40 status=ok
// SIG undefined FUN_1410a3b6e(void)

undefined8 FUN_1410a3b6e(undefined8 param_1,int param_2)

{
  FUN_1410a3b96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a3b96 FUN_1410a3b96 body=179 status=ok
// SIG undefined FUN_1410a3b96(void)

void FUN_1410a3b96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0be1e0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b95a9(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}


