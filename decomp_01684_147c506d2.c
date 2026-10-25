// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c506d2 FUN_147c506d2 body=799 status=ok
// SIG undefined FUN_147c506d2(void)

void FUN_147c506d2(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  int local_10c;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar15 = (ulonglong)param_2 >> 0x20;
  local_120 = param_2;
  if ((*(longlong *)(param_1 + 0x868) != 0) && ((longlong)*(int *)(param_3 + 1) != 0)) {
    puVar12 = (undefined4 *)*param_3;
    puVar1 = puVar12 + (longlong)*(int *)(param_3 + 1) * 2;
    do {
      local_110 = *puVar12;
      local_10c = puVar12[1];
      if (local_10c != -1) {
        local_118 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0x868) + 0x70))
                  (*(longlong **)(param_1 + 0x868),&local_118);
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar1);
  }
  local_118 = param_2;
  lVar5 = FUN_14479d2ce(&local_118);
  cVar3 = FUN_147c4dfa2(param_1);
  if (cVar3 == '\0') {
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xa8) != 0)) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0x1800000000;
      FUN_147c5fd38(*(longlong *)(lVar5 + 0xa8),&local_118);
      puVar14 = &local_118;
      if (local_58 != (undefined8 *)0x0) {
        puVar14 = local_58;
      }
      lVar7 = (longlong)(int)local_50;
      if (lVar7 == 0) {
        bVar2 = true;
      }
      else {
        lVar13 = 0;
        do {
          uVar15 = *(ulonglong *)((longlong)puVar14 + lVar13);
          lVar9 = FUN_14479d2ce(uVar15 + 0x110);
          if ((lVar9 == param_1) && (lVar9 = FUN_14479d2ce(uVar15 + 0x118), lVar9 == lVar5)) {
            bVar2 = false;
            goto LAB_147c509c8;
          }
          lVar13 = lVar13 + 8;
        } while (lVar7 * 8 != lVar13);
        bVar2 = true;
      }
LAB_147c509c8:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar2 && uVar15 != 0) {
        FUN_147c51c6e(uVar15);
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_14479d2ce(param_3 + 2);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x420))(plVar6,0);
    }
  }
  lVar7 = FUN_144a34e94(param_3 + 3,1);
  local_128 = (undefined8 *)0x0;
  iVar10 = 0;
  iVar11 = 0;
  if (lVar7 != 0) {
    local_118 = (undefined8 *)0x0;
    FUN_14485c47a(&local_118,lVar7);
    local_128 = local_118;
    iVar10 = (int)local_118;
    iVar11 = local_118._4_4_;
  }
  uVar4 = FUN_144a78877(iVar10,iVar11);
  if (*(int *)(param_1 + 0x710) != *(int *)(param_1 + 0x73c)) {
    lVar7 = param_1 + 0x740;
    if (*(longlong *)(param_1 + 0x748) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x748);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x750) - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x708);
      do {
        lVar9 = (longlong)iVar8 * 0x68;
        lVar13 = lVar7 + lVar9;
        if ((*(int *)(lVar7 + lVar9) == iVar10) && (*(int *)(lVar7 + 4 + lVar9) == iVar11)) {
          if (lVar13 + 8 != 0 && lVar13 != 0) {
            FUN_147c51cd2(lVar13 + 8,&local_120);
            if (*(int *)(lVar13 + 0x10) == *(int *)(lVar13 + 0x3c)) {
              lVar7 = FUN_14479d2ce(param_3 + 3);
              if ((lVar7 != 0) && (cVar3 = FUN_147c4dfa2(param_1), cVar3 != '\0')) {
                FUN_1405ba932(lVar7,*(undefined1 *)(lVar13 + 0x58));
              }
              FUN_147c67eb4((longlong *)(param_1 + 0x708),&local_128);
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar13 + 0x60);
      } while (iVar8 != -1);
    }
  }
  if (lVar5 != 0) {
    FUN_147c51d52(param_1,lVar5,param_3);
  }
  FUN_147c651b6(param_1 + 0x758,&local_120);
  FUN_147c651b6(param_1 + 0x7a8,&local_120);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c509f4 FUN_147c509f4 body=143 status=ok
// SIG undefined FUN_147c509f4(void)

void FUN_147c509f4(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a8c35e();
  if ((param_2 & 1) == 0 && *(longlong *)(param_1 + 0x850) != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x240);
    uStack_34 = *(undefined4 *)(param_1 + 0x244);
    uStack_30 = *(undefined4 *)(param_1 + 0x248);
    uStack_2c = *(undefined4 *)(param_1 + 0x24c);
    local_28 = *(undefined4 *)(param_1 + 0x250);
    uStack_24 = *(undefined4 *)(param_1 + 0x254);
    uStack_20 = *(undefined4 *)(param_1 + 600);
    uStack_1c = *(undefined4 *)(param_1 + 0x25c);
    local_58 = *(undefined4 *)(param_1 + 0x260);
    uStack_54 = *(undefined4 *)(param_1 + 0x264);
    uStack_50 = *(undefined4 *)(param_1 + 0x268);
    uStack_4c = *(undefined4 *)(param_1 + 0x26c);
    local_48 = *(undefined8 *)(param_1 + 0x270);
    FUN_146ee6b84();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c50a84 FUN_147c50a84 body=445 status=ok
// SIG undefined FUN_147c50a84(void)

undefined8 FUN_147c50a84(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined4 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x80a) == '\0') {
    if (*(longlong *)(param_1 + 0x850) == 0) {
      FUN_144b220b2(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
    }
    local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x850) + 0x120);
    local_80 = 1;
    local_88 = &local_78;
    FUN_144a56970(local_70);
    local_c8 = 1;
    local_d0 = &local_78;
    FUN_146e2043a(local_58,&local_c0);
    dVar1 = (local_98 - local_b0) * 0.5;
    dVar2 = (local_a0 - local_b8) * 0.5;
    dVar3 = (local_a8 - local_c0) * 0.5;
    *(undefined1 *)(param_1 + 0x80a) = 1;
    *(double *)(param_1 + 0x810) = local_c0 + dVar3;
    *(double *)(param_1 + 0x818) = local_b8 + dVar2;
    *(double *)(param_1 + 0x820) = local_b0 + dVar1;
    *(double *)(param_1 + 0x828) = dVar3;
    *(double *)(param_1 + 0x830) = dVar2;
    *(double *)(param_1 + 0x838) = dVar1;
    *(double *)(param_1 + 0x840) = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
    FUN_1448635f4(local_70);
  }
  FUN_144a80a4c(param_1 + 0x810,param_2,param_3);
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c50c48 FUN_147c50c48 body=158 status=ok
// SIG undefined FUN_147c50c48(void)

undefined8 FUN_147c50c48(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x850) == 0) {
    FUN_144ae8334(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x850) + 0x120);
  local_58 = &local_48;
  local_50 = 1;
  FUN_144a56970(local_40);
  FUN_146e2003a(local_28,param_2,local_48);
  FUN_1448635f4(local_40);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147c50d1c FUN_147c50d1c body=66 status=ok
// SIG undefined FUN_147c50d1c(void)

undefined8 * FUN_147c50d1c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1448634b6(param_2,1,0);
  *(undefined8 *)*param_2 = uVar1;
  return param_2;
}



// FUNCTION 147c50d62 FUN_147c50d62 body=41 status=ok
// SIG undefined FUN_147c50d62(void)

void FUN_147c50d62(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147c665ae();
  return;
}



// FUNCTION 147c50d8c FUN_147c50d8c body=74 status=ok
// SIG undefined FUN_147c50d8c(void)

undefined8 * FUN_147c50d8c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_145a6bdd0();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 147c50dd6 FUN_147c50dd6 body=2205 status=ok
// SIG undefined FUN_147c50dd6(void)

void FUN_147c50dd6(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 unaff_RBP;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 **local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  int local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8 [4];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((longlong *)param_2[1] == (longlong *)0x0) ||
      (cVar4 = (**(code **)(*(longlong *)param_2[1] + 0x360))(), cVar4 == '\0')) ||
     ((*(longlong *)(param_2[1] + 0xb0) == 0 && (lVar8 = FUN_1448abda6(), lVar8 == 0))))
  goto LAB_147c50e35;
  uVar5 = FUN_144a78877((int)*param_2,*(undefined4 *)((longlong)param_2 + 4));
  if ((int)param_1[0xd5] == *(int *)((longlong)param_1 + 0x6d4)) {
    iVar13 = (int)*param_2;
    iVar12 = *(int *)((longlong)param_2 + 4);
LAB_147c50e90:
    uVar5 = 0;
  }
  else {
    plVar9 = param_1 + 0xdb;
    if ((longlong *)param_1[0xdc] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xdc];
    }
    iVar16 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[0xdd] - 1U & uVar5) * 4);
    iVar13 = (int)*param_2;
    iVar12 = *(int *)((longlong)param_2 + 4);
    if (iVar16 == -1) goto LAB_147c50e90;
    lVar8 = param_1[0xd4];
    do {
      lVar20 = (longlong)iVar16 * 0x38;
      bVar23 = *(int *)(lVar8 + 4 + lVar20) == iVar12 && *(int *)(lVar8 + lVar20) == iVar13;
      unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar23);
      uVar5 = (uint)unaff_RBP;
      if (bVar23) break;
      iVar16 = *(int *)(lVar20 + lVar8 + 0x30);
    } while (iVar16 != -1);
  }
  local_120 = param_4;
  uVar6 = FUN_144a78877(iVar13,iVar12);
  plVar9 = (longlong *)FUN_147c671b2(param_1 + 0xd4,uVar6);
  local_138 = param_1;
  local_128 = param_2;
  if ((char)uVar5 == '\0') {
    FUN_147c651b6(param_1 + 0xf5,param_2);
    lVar8 = param_2[1];
    if (*(longlong *)(lVar8 + 0xa8) != 0) {
      local_a8 = (undefined8 **)0x0;
      local_130 = *(longlong *)(lVar8 + 0xa8);
      FUN_14485c47a(&local_a8);
      iVar13 = (int)local_a8;
      iVar12 = local_a8._4_4_;
      uVar7 = FUN_144a78877((ulonglong)local_a8 & 0xffffffff,local_a8._4_4_);
      if ((int)param_1[0xe2] != *(int *)((longlong)param_1 + 0x73c)) {
        plVar11 = local_138 + 0xe8;
        if ((longlong *)local_138[0xe9] != (longlong *)0x0) {
          plVar11 = (longlong *)local_138[0xe9];
        }
        iVar16 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_138[0xea] - 1U & uVar7) * 4);
        if (iVar16 != -1) {
          lVar8 = param_1[0xe1];
          do {
            lVar15 = (longlong)iVar16 * 0x68;
            lVar20 = lVar8 + lVar15;
            if ((*(int *)(lVar8 + lVar15) == iVar13) && (*(int *)(lVar8 + 4 + lVar15) == iVar12)) {
              if (lVar20 + 8 != 0 && lVar20 != 0) {
                FUN_147c6753c(lVar20 + 8,&local_a8);
                param_1 = local_138;
                lVar8 = local_130;
                goto LAB_147c5132f;
              }
              break;
            }
            iVar16 = *(int *)(lVar20 + 0x60);
          } while (iVar16 != -1);
        }
      }
      uStack_88 = 0;
      local_80 = 0;
      local_a8 = (undefined8 **)0x0;
      puStack_a0 = (undefined8 *)0x0;
      uStack_7c = 0x80;
      uStack_78 = 0xffffffff;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 1;
      FUN_147c6753c(&local_a8,&local_118,param_2);
      lVar8 = local_130;
      local_58 = *(byte *)(local_130 + 0x60) >> 4 & 1;
      local_c8[0] = (undefined8 *)0x0;
      local_118 = (undefined8 **)0x0;
      FUN_14485c47a(&local_118,local_130);
      local_c8[0] = local_118;
      puStack_110 = &local_a8;
      local_118 = local_c8;
      FUN_147c67a00(param_1 + 0xe1,&local_d8);
      param_1 = local_138;
      cVar4 = FUN_147c4dfa2(local_138);
      if ((cVar4 != '\0') && (lVar8 != param_1[0x15])) {
        FUN_1405ba932(lVar8,0);
      }
      local_60 = 0;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_147c5fd02(&local_a8);
      param_2 = local_128;
LAB_147c5132f:
      FUN_14485c47a(plVar9 + 3,lVar8);
      lVar8 = param_2[1];
    }
    *(byte *)(plVar9 + 4) = *(byte *)(lVar8 + 0x9c) >> 7;
    cVar4 = FUN_147c4dfa2(param_1);
    if ((cVar4 != '\0') && (*(longlong *)(param_2[1] + 0xa8) != 0)) {
      lVar8 = FUN_147c51675();
      if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar8 != 0) goto LAB_147c51396;
      }
      else {
        FUN_1456cec3c(lVar8);
LAB_147c51396:
        FUN_140b506a4(lVar8);
        FUN_147c51726(lVar8,param_1);
        FUN_147c5178c(lVar8,param_2[1]);
        FUN_140b361ee(lVar8,1);
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
      }
      local_a8 = (undefined8 **)0x0;
      FUN_14485c47a(&local_a8,lVar8);
      plVar9[2] = (longlong)local_a8;
    }
  }
  local_d8 = 0;
  uStack_d0 = 0;
  iVar13 = (int)plVar9[1];
  if (-1 < iVar13) {
    if (iVar13 != 0) {
      FUN_147c67d74(&local_d8);
      if ((longlong)(int)plVar9[1] != 0) {
        plVar22 = (longlong *)*plVar9;
        plVar11 = plVar22 + (int)plVar9[1];
        do {
          uVar7 = param_3[0x28];
          uVar14 = (ulonglong)uVar7;
          puVar10 = *(undefined4 **)(param_3 + 0x24);
          if (*(undefined4 **)(param_3 + 0x24) == (undefined4 *)0x0) {
            puVar10 = param_3;
          }
          uVar17 = 0;
          if (0 < (int)uVar7) {
            do {
              uVar19 = (int)(uVar14 >> 1) + (int)uVar17;
              uVar18 = (uint)uVar14;
              if ((int)puVar10[(ulonglong)uVar19 * 0x24] < (int)*plVar22) {
                uVar17 = (ulonglong)(uVar19 + (uVar18 & 1));
              }
              uVar14 = uVar14 >> 1;
            } while (1 < uVar18);
          }
          if ((((int)uVar7 <= (int)uVar17) || ((int)*plVar22 < (int)puVar10[uVar17 * 0x24])) ||
             (puVar10 + uVar17 * 0x24 == (undefined4 *)&DAT_fffffffffffffff0)) {
            plVar2 = (longlong *)local_138[0x10d];
            if (plVar2 != (longlong *)0x0) {
              local_a8 = (undefined8 **)*param_2;
              puStack_a0 = (undefined8 *)*plVar22;
              if (*(int *)((longlong)plVar22 + 4) != -1) {
                (**(code **)(*plVar2 + 0x70))(plVar2,&local_a8);
              }
            }
            uVar14 = uStack_d0;
            lVar8 = *plVar22;
            lVar20 = (longlong)(int)uStack_d0;
            uVar7 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar7);
            if (uStack_d0._4_4_ < uVar7) {
              FUN_147c67dd4(&local_d8,uVar14 & 0xffffffff);
            }
            *(longlong *)(local_d8 + lVar20 * 8) = lVar8;
          }
          plVar22 = plVar22 + 1;
        } while (plVar22 != plVar11);
      }
    }
    *(undefined4 *)(plVar9 + 1) = 0;
    if (*(int *)((longlong)plVar9 + 0xc) < 0) {
      FUN_147c67d74(plVar9,0);
    }
    iVar13 = param_3[0x28];
    if (-1 < iVar13) {
      if (*(int *)((longlong)plVar9 + 0xc) < iVar13) {
        FUN_147c67d74(plVar9);
        iVar13 = param_3[0x28];
      }
      puVar10 = *(undefined4 **)(param_3 + 0x24);
      if (*(undefined4 **)(param_3 + 0x24) == (undefined4 *)0x0) {
        puVar10 = param_3;
      }
      if (iVar13 != 0) {
        puVar21 = puVar10 + (longlong)iVar13 * 0x24;
        do {
          uVar6 = *puVar10;
          uVar1 = puVar10[8];
          iVar13 = (int)plVar9[1];
          *(uint *)(plVar9 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar9 + 0xc) < iVar13 + 1U) {
            FUN_147c67dd4(plVar9,iVar13);
          }
          *(ulonglong *)(*plVar9 + (longlong)iVar13 * 8) = CONCAT44(uVar1,uVar6);
          puVar10 = puVar10 + 0x24;
        } while (puVar10 != puVar21);
      }
      plVar22 = local_128;
      plVar11 = local_138;
      local_148 = &local_d8;
      FUN_147c517f2(local_138,local_128[1],plVar9,uVar5 ^ 1);
      cVar4 = FUN_147c4dfa2(plVar11);
      uVar3 = local_120;
      if (cVar4 != '\0') {
        cVar4 = FUN_144729dda(plVar9 + 2);
        if (cVar4 != '\0') {
          lVar8 = FUN_14479d2ce(plVar9 + 2);
          if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar8);
          }
          local_a8 = (undefined8 **)0x0;
          puStack_a0 = (undefined8 *)0x0;
          FUN_147c4fa28(&local_a8,plVar9);
          FUN_147c5196a(lVar8,&local_a8);
          puVar10 = *(undefined4 **)(param_3 + 0x24);
          if (*(undefined4 **)(param_3 + 0x24) == (undefined4 *)0x0) {
            puVar10 = param_3;
          }
          if ((longlong)(int)param_3[0x28] != 0) {
            puVar21 = puVar10 + (longlong)(int)param_3[0x28] * 0x24;
            do {
              FUN_147c51a6a(lVar8,*puVar10,puVar10 + 0xc);
              puVar10 = puVar10 + 0x24;
            } while (puVar10 != puVar21);
          }
          plVar11 = local_138;
          if (local_a8 != (undefined8 **)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_148 = (longlong *)param_5;
      (**(code **)(*plVar11 + 0xa00))(plVar11,plVar22[1],param_3,uVar3);
      if (param_3[0x28] != 0) {
        lVar8 = plVar11[0x16];
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(plVar11);
        }
        FUN_144a78570(local_c8,*(undefined8 *)(lVar8 + 0x260),0);
        puVar10 = *(undefined4 **)(param_3 + 0x24);
        if (*(undefined4 **)(param_3 + 0x24) == (undefined4 *)0x0) {
          puVar10 = param_3;
        }
        iVar13 = param_3[0x28];
        if ((longlong)iVar13 != 0) {
          lVar8 = 0;
          do {
            if ((local_138[0x10d] != 0) && (*(longlong *)((longlong)puVar10 + lVar8 + 0x10) != 0)) {
              FUN_143608805(&local_a8,*(undefined8 *)((longlong)puVar10 + lVar8 + 0x18));
              local_e0 = *(undefined4 *)((longlong)puVar10 + lVar8);
              local_e8 = *plVar22;
              local_dc = *(int *)((longlong)puVar10 + lVar8 + 0x20);
              if (local_dc != -1) {
                local_108 = local_98;
                local_118 = local_a8;
                puStack_110 = puStack_a0;
                local_f0 = CONCAT44(uStack_7c,local_80);
                local_100 = local_90;
                uStack_fc = uStack_8c;
                uStack_f8 = (undefined4)uStack_88;
                uStack_f4 = uStack_88._4_4_;
                (**(code **)(*(longlong *)local_138[0x10d] + 0x78))
                          ((longlong *)local_138[0x10d],&local_e8,&local_118,(char)uStack_78 != '\0'
                          );
              }
            }
            lVar8 = lVar8 + 0x90;
          } while ((longlong)iVar13 * 0x90 != lVar8);
        }
        FUN_1448635f4(local_c8);
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
LAB_147c50e35:
      if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar13);
}



// FUNCTION 147c51675 FUN_147c51675 body=175 status=ok
// SIG undefined FUN_147c51675(void)

undefined8 FUN_147c51675(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145992afc();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c51726 FUN_147c51726 body=102 status=ok
// SIG undefined FUN_147c51726(void)

void FUN_147c51726(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_147c52f1a(param_1 + 0x110);
  if (cVar1 != '\0') {
    return;
  }
  if ((DAT_14c761723 == '\x01') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_14103d96c();
  }
  FUN_14485c47a(param_1 + 0x110,param_2);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
  return;
}



// FUNCTION 147c5178c FUN_147c5178c body=102 status=ok
// SIG undefined FUN_147c5178c(void)

void FUN_147c5178c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140f9880e(param_1 + 0x118);
  if (cVar1 != '\0') {
    return;
  }
  if ((DAT_14c761723 == '\x01') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_14103d96c();
  }
  FUN_14485c47a(param_1 + 0x118,param_2);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),3);
  return;
}



// FUNCTION 147c517f2 FUN_147c517f2 body=374 status=ok
// SIG undefined FUN_147c517f2(void)

void FUN_147c517f2(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  undefined1 local_9c [4];
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
  if (0 < *(int *)(param_1 + 0x630)) {
    local_a8 = param_1 + 0x628;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if ((longlong)(int)param_3[1] != 0) {
      lVar1 = *param_3;
      lVar2 = (longlong)(int)param_3[1] << 3;
      do {
        FUN_1447cbafe(&local_98,local_9c,lVar1,0);
        lVar1 = lVar1 + 8;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    FUN_147c4d281(local_a8,param_2,&local_98,param_4);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((longlong)*(int *)(param_1 + 0x660) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x658) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x658) + lVar1) != 0)) {
        local_b8 = (char)param_4;
        FUN_147c67fda(param_1 + 0x658,param_2,param_3,param_5);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x660) * 0x10 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5196a FUN_147c5196a body=256 status=ok
// SIG undefined FUN_147c5196a(void)

void FUN_147c5196a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 == *(int *)(param_2 + 1)) {
    if (iVar3 != 0) {
      iVar3 = memcmp(*(void **)(param_1 + 0x120),(void *)*param_2,(longlong)iVar3 << 2);
      if (iVar3 != 0) goto LAB_147c519b2;
    }
    return;
  }
LAB_147c519b2:
  if ((DAT_14c761723 == '\x01') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    FUN_14103d96c();
  }
  FUN_14054c6c4((undefined8 *)(param_1 + 0x120),param_2);
  plVar1 = (longlong *)(param_1 + 0x180);
  FUN_140ee6e38(plVar1,*(undefined4 *)(param_2 + 1));
  if (0 < *(int *)(param_2 + 1)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x188);
      *(uint *)(param_1 + 0x188) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x18c) < iVar2 + 1U) {
        FUN_144a2c682(plVar1,iVar2);
      }
      puVar5 = &DAT_14c846480;
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x60 + *plVar1);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 1));
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),4);
  return;
}



// FUNCTION 147c51a6a FUN_147c51a6a body=516 status=ok
// SIG undefined FUN_147c51a6a(void)

void FUN_147c51a6a(longlong param_1,int param_2,double *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    uVar13 = (longlong)*(int *)(param_1 + 0x128) * 4;
    uVar17 = 0;
    lVar11 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x120) + uVar17) == param_2) {
        if ((int)(~uVar17 >> 2) == 0) {
          return;
        }
        lVar15 = *(longlong *)(param_1 + 0x180);
        lVar18 = (lVar11 >> 0x20) * 0x60;
        pdVar16 = (double *)(lVar15 + 0x20 + lVar18);
        pdVar1 = (double *)(lVar15 + 0x30 + lVar18);
        auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[1] - param_3[5]));
        auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar16 - param_3[4]));
        iVar10 = movmskpd((int)((ulonglong)lVar11 >> 0x20),auVar6);
        auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - param_3[7]));
        auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - param_3[6]));
        uVar12 = movmskpd((int)uVar13,auVar4);
        if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
          pdVar16 = (double *)(lVar15 + lVar18);
          lVar11 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[1] - param_3[1]));
          auVar9._8_4_ = (int)lVar11;
          auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar16 - *param_3));
          auVar9._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
          uVar12 = movmskpd(0,auVar9);
          lVar11 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[3] - param_3[3]));
          auVar8._8_4_ = (int)lVar11;
          auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[2] - param_3[2]));
          auVar8._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
          iVar10 = movmskpd(param_2,auVar8);
          uVar14 = iVar10 << 2 | uVar12;
          if (uVar14 != 0) {
            auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[1] + param_3[1]));
            auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar16 + *param_3));
            uVar12 = movmskpd(uVar12,auVar7);
            auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[3] + param_3[3]));
            auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[2] + param_3[2]));
            uVar14 = movmskpd(uVar14,auVar5);
            if ((uVar14 & 0x3fffffff) != 0 || uVar12 != 0) goto LAB_147c51b4e;
          }
          auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[9] - param_3[9]));
          auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[8] - param_3[8]));
          iVar10 = movmskpd((int)pdVar16,auVar3);
          auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[0xb] - param_3[0xb]));
          auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar16[10] - param_3[10]));
          uVar12 = movmskpd(uVar12,auVar2);
          if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
            return;
          }
        }
LAB_147c51b4e:
        if ((DAT_14c761723 == '\x01') && (*(longlong *)(param_1 + 0xa8) != 0)) {
          FUN_14103d96c();
          lVar15 = *(longlong *)(param_1 + 0x180);
        }
        pdVar16 = (double *)(lVar15 + lVar18);
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar16 = *param_3;
          param_3 = param_3 + 1;
          pdVar16 = pdVar16 + 1;
        }
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),5);
        return;
      }
      lVar11 = lVar11 + 0x100000000;
      uVar17 = uVar17 + 4;
    } while (uVar13 != uVar17);
  }
  return;
}



// FUNCTION 147c51c6e FUN_147c51c6e body=99 status=ok
// SIG undefined FUN_147c51c6e(void)

void FUN_147c51c6e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1402226aa(param_1 + 0x130);
  if ((*(longlong *)(param_1 + 0xa8) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    puVar3 = (undefined8 *)(param_1 + 0x198);
    uVar1 = FUN_1401b4c98();
    lVar2 = FUN_144a61814(uVar1,puVar3);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*puVar3);
    }
    *puVar3 = 0;
  }
  return;
}



// FUNCTION 147c51cd2 FUN_147c51cd2 body=127 status=ok
// SIG undefined FUN_147c51cd2(void)

void FUN_147c51cd2(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x10;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_147c67e5a(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147c51d52 FUN_147c51d52 body=161 status=ok
// SIG undefined FUN_147c51d52(void)

void FUN_147c51d52(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(param_1 + 0x640)) {
    local_28 = param_2;
    FUN_1447cd2ec(param_1 + 0x638);
  }
  if ((longlong)*(int *)(param_1 + 0x678) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x670) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x670) + lVar1) != 0)) {
        FUN_147c680ae(param_1 + 0x670,param_2,param_3);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x678) * 0x10 != lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c51e50 FUN_147c51e50 body=194 status=ok
// SIG undefined FUN_147c51e50(void)

void FUN_147c51e50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412aa84a();
  local_20 = 0;
  local_30 = 0;
  local_28 = 1;
  local_40 = L"ReplicatedRigidState";
  local_38 = 0x100000011;
  FUN_140c2c993(&local_40,param_2);
  local_40 = L"RelativeLocation";
  local_38 = 0x100000005;
  thunk_FUN_14127e9f8(&local_40,param_2);
  local_40 = L"RelativeRotation";
  local_38 = 0x100000006;
  thunk_FUN_14127e9f8(&local_40,param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c51f14 FUN_147c51f14 body=68 status=ok
// SIG undefined FUN_147c51f14(void)

void FUN_147c51f14(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_146ee6098();
    FUN_146ee5fe6(*(undefined8 *)(param_1 + 0x850),param_2 != '\x01' && param_2 != '\x04');
    return;
  }
  return;
}



// FUNCTION 147c51f7c FUN_147c51f7c body=168 status=ok
// SIG undefined FUN_147c51f7c(void)

uint FUN_147c51f7c(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x20))(param_1 + 0x2b8,&local_50);
  local_60 = local_50;
  local_58 = local_48;
  FUN_144a56970(local_40);
  local_70 = local_50;
  local_68 = local_48;
  uVar1 = FUN_140b262c0(local_28);
  FUN_1448635f4(local_40);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5203c FUN_147c5203c body=876 status=ok
// SIG undefined FUN_147c5203c(void)

void FUN_147c5203c(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_188 [44];
  undefined4 local_15c;
  undefined8 local_158;
  undefined1 local_14c [4];
  code *local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar4 = *(uint *)(param_3 + 0x78);
  lVar5 = (longlong)(int)uVar4;
  local_15c = param_2;
  local_158 = param_1;
  if (lVar5 != 0) {
    if ((int)uVar4 < 0) goto LAB_147c523a1;
    FUN_146b7f620(&local_b8,uVar4);
    iVar1 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar1)) {
      local_70 = iVar1;
      FUN_1449809d4();
    }
    iVar1 = *(int *)(param_3 + 0x78);
    lVar5 = param_3 + 0x60;
    if (*(longlong *)(param_3 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_3 + 0x70);
    }
    if ((longlong)iVar1 != 0) {
      lVar2 = 0;
      do {
        local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(lVar5 + lVar2));
        FUN_144980568(&local_b8,local_148,&local_108,0);
        lVar2 = lVar2 + 4;
      } while ((longlong)iVar1 * 4 != lVar2);
    }
  }
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  lVar5 = FUN_144b20b72(param_3);
  uVar4 = *(uint *)(lVar5 + 0x28);
  lVar5 = (longlong)(int)uVar4;
  if (lVar5 != 0) {
    if ((int)uVar4 < 0) {
LAB_147c523a1:
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(lVar5);
    }
    FUN_146b7f620(&local_108,uVar4);
    iVar1 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((local_c0 == 0) || (local_c0 < iVar1)) {
      local_c0 = iVar1;
      FUN_1449809d4();
    }
  }
  lVar2 = FUN_144b20b72(param_3);
  lVar5 = *(longlong *)(lVar2 + 0x20);
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    lVar5 = lVar2;
  }
  iVar1 = *(int *)(lVar2 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      local_148[0] = (code *)CONCAT44(local_148[0]._4_4_,*(undefined4 *)(lVar5 + lVar2));
      FUN_144980568(&local_108,local_14c,local_148,0);
      lVar2 = lVar2 + 4;
    } while ((longlong)iVar1 * 4 != lVar2);
  }
  local_148[0] = (code *)0x0;
  local_138 = (longlong *)FUN_14001cc68(0x28,8);
  *local_138 = (longlong)&PTR_FUN_14aa1e1f0;
  *(undefined4 *)(local_138 + 1) = local_15c;
  local_138[2] = (longlong)&local_b8;
  local_138[3] = (longlong)&local_108;
  local_138[4] = param_6;
  if (local_138 + 1 != (longlong *)0x0) {
    local_148[0] = FUN_1436256de;
  }
  FUN_147c523aa(local_158,local_148);
  if (local_148[0] != (code *)0x0) {
    plVar3 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar3 = local_128;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c523aa FUN_147c523aa body=777 status=ok
// SIG undefined FUN_147c523aa(void)

void FUN_147c523aa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  longlong *local_98;
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
  plVar1 = (longlong *)(param_1 + 0x7a8);
  lVar2 = param_1 + 0x7b8;
  local_68 = (longlong *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_a0 = param_2;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 2000) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 2000);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    local_98 = local_a0 + 4;
    do {
      local_68 = (longlong *)
                 CONCAT44(*(undefined4 *)(*local_90 + 4 + (longlong)iStack_74 * 0x60),
                          *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0x60));
      plVar6 = (longlong *)FUN_14479d2ce(&local_68);
      if ((plVar6 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar6 + 0x360))(plVar6), cVar5 != '\0')) {
        pcVar4 = (code *)*local_a0;
        plVar8 = (longlong *)local_a0[2];
        if ((longlong *)local_a0[2] == (longlong *)0x0) {
          plVar8 = local_98;
        }
        local_68 = plVar6;
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar5 = (*pcVar4)(uVar7,&local_68);
        if (cVar5 == '\0') goto LAB_147c524db;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10) || local_90 != plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x6a0);
  lVar2 = param_1 + 0x6b0;
  local_68 = (longlong *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x6c8) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x6c8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    local_98 = local_a0 + 4;
    do {
      lVar3 = *local_90;
      lVar9 = (longlong)iStack_74 * 0x38;
      local_68 = (longlong *)
                 CONCAT44(*(undefined4 *)(lVar3 + 4 + lVar9),*(undefined4 *)(lVar3 + lVar9));
      plVar6 = (longlong *)FUN_14479d2ce(&local_68);
      if (((plVar6 != (longlong *)0x0) &&
          (cVar5 = (**(code **)(*plVar6 + 0x360))(plVar6), cVar5 != '\0')) &&
         (*(char *)(lVar3 + lVar9 + 0x29) == '\0')) {
        pcVar4 = (code *)*local_a0;
        plVar8 = (longlong *)local_a0[2];
        if ((longlong *)local_a0[2] == (longlong *)0x0) {
          plVar8 = local_98;
        }
        local_68 = plVar6;
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar5 = (*pcVar4)(uVar7,&local_68);
        if (cVar5 == '\0') break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10));
  }
LAB_147c524db:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c526b4 FUN_147c526b4 body=151 status=ok
// SIG undefined FUN_147c526b4(void)

undefined1 FUN_147c526b4(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_59;
  local_59 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14aa1e210;
  local_58[0] = FUN_143625890;
  local_28 = param_2;
  FUN_147c523aa(param_1 + -0x2a8,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_59;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5274c FUN_147c5274c body=45 status=ok
// SIG undefined FUN_147c5274c(void)

void FUN_147c5274c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x118);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c5277a FUN_147c5277a body=45 status=ok
// SIG undefined FUN_147c5277a(void)

void FUN_147c5277a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14479d2ce(param_1 + 0x110);
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c5285e FUN_147c5285e body=156 status=ok
// SIG undefined FUN_147c5285e(void)

void FUN_147c5285e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5178c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c528fc FUN_147c528fc body=156 status=ok
// SIG undefined FUN_147c528fc(void)

void FUN_147c528fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c51726(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5299a FUN_147c5299a body=180 status=ok
// SIG undefined FUN_147c5299a(void)

void FUN_147c5299a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5196a(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c52a50 FUN_147c52a50 body=313 status=ok
// SIG undefined FUN_147c52a50(void)

void FUN_147c52a50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c51a6a(param_1,local_1c,puVar1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c52bb6 FUN_147c52bb6 body=420 status=ok
// SIG undefined FUN_147c52bb6(void)

void FUN_147c52bb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6a68) {
    FUN_144b3d300(&DAT_14caf6a68);
    if (DAT_14caf6a68 == -1) {
      FUN_1446f470e(&DAT_14caf6a60,L"ParentClusterUnion",1);
      _Init_thread_footer(&DAT_14caf6a68);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6a74) {
    FUN_144b3d300(&DAT_14caf6a74);
    if (DAT_14caf6a74 == -1) {
      FUN_1446f470e(&DAT_14caf6a6c,L"ChildClusteredComponent",1);
      _Init_thread_footer(&DAT_14caf6a74);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6a80) {
    FUN_144b3d300(&DAT_14caf6a80);
    if (DAT_14caf6a80 == -1) {
      FUN_1446f470e(&DAT_14caf6a78,L"ParticleBoneIds",1);
      _Init_thread_footer(&DAT_14caf6a80);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6a8c) {
    FUN_144b3d300(&DAT_14caf6a8c);
    if (DAT_14caf6a8c == -1) {
      FUN_1446f470e(&DAT_14caf6a84,L"ParticleChildToParents",1);
      _Init_thread_footer(&DAT_14caf6a8c);
      return;
    }
  }
  return;
}



// FUNCTION 147c52d5a FUN_147c52d5a body=247 status=ok
// SIG undefined FUN_147c52d5a(void)

void FUN_147c52d5a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412aab56();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"ParentClusterUnion";
  local_40 = &DAT_100000002;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ChildClusteredComponent";
  local_40 = &DAT_100000003;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ParticleBoneIds";
  local_40 = &DAT_100000004;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ParticleChildToParents";
  local_40 = (undefined1 *)0x100000005;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c52e52 FUN_147c52e52 body=200 status=ok
// SIG undefined FUN_147c52e52(void)

void FUN_147c52e52(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1401c3216();
  *(undefined1 *)(param_1 + 0x194) = 1;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar3 = FUN_1401b4c98();
    lVar4 = FUN_144a61814(uVar3,(undefined8 *)(param_1 + 0x198));
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*(undefined8 *)(param_1 + 0x198));
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if (*(char *)(lVar4 + 0x178) != '\x03') {
    cVar2 = FUN_144729dda(param_1 + 0x110);
    if (cVar2 != '\0') {
      cVar2 = FUN_144729dda(param_1 + 0x118);
      if (cVar2 != '\0') {
        uVar3 = FUN_14479d2ce(param_1 + 0x110);
        uVar1 = FUN_14479d2ce(param_1 + 0x118);
        FUN_147c4ea10(uVar3,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c52f1a FUN_147c52f1a body=118 status=ok
// SIG undefined FUN_147c52f1a(void)

ulonglong FUN_147c52f1a(int *param_1)

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



// FUNCTION 147c52fa0 FUN_147c52fa0 body=1304 status=ok
// SIG undefined FUN_147c52fa0(void)

void FUN_147c52fa0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar5 = FUN_144729dda(param_1 + 0x110);
  if (cVar5 != '\0') {
    cVar5 = FUN_144729dda(param_1 + 0x118);
    if ((cVar5 != '\0') && (*(char *)(param_1 + 0x194) == '\0')) {
      local_110 = *(longlong **)(param_1 + 0x120);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(param_1 + 0x128));
      local_138 = param_1 + 0x118;
      local_130 = param_1 + 0x110;
      FUN_146bc855c(&local_b8);
      local_e8 = 0;
      uStack_e0 = 0;
      iVar11 = (int)uStack_b0 - local_84;
      if (-1 < iVar11) {
        if (iVar11 != 0) {
          FUN_14481578e(&local_e8);
        }
        local_d8 = 0x100000000;
        local_c8 = 0xffffffff;
        local_c0 = 0;
        iVar11 = 0;
        local_d0 = local_a8;
        if (local_90 != 0) {
          FUN_1449c0562(&local_d8);
          iVar11 = local_90;
        }
        local_f8 = local_c8;
        uVar8 = local_f8;
        local_f0 = local_c0;
        local_ec = local_bc;
        local_108 = local_d8;
        local_100 = local_d0;
        local_f8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
        local_110 = &local_b8;
        if ((local_f8._4_4_ != iVar11) || (local_d0 != local_a8)) {
          iVar6 = local_f8._4_4_;
          local_f8 = uVar8;
          do {
            uVar4 = uStack_e0;
            uVar3 = *(uint *)(*local_110 + (longlong)iVar6 * 0xc);
            if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x164)) {
              lVar12 = *(longlong *)(param_1 + 0x170);
              if (*(longlong *)(param_1 + 0x170) == 0) {
                lVar12 = param_1 + 0x168;
              }
              iVar6 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x178) - 1U & uVar3) * 4);
              if (iVar6 != -1) {
                do {
                  if (*(uint *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar6 * 0xc) == uVar3)
                  goto LAB_147c5334c;
                  iVar6 = *(int *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar6 * 0xc + 4);
                } while (iVar6 != -1);
              }
            }
            lVar12 = (longlong)(int)uStack_e0;
            uVar7 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
            if (uStack_e0._4_4_ < uVar7) {
              FUN_1446f48e2(&local_e8,uVar4 & 0xffffffff);
            }
            *(uint *)(local_e8 + lVar12 * 4) = uVar3;
LAB_147c5334c:
            local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
            FUN_1449c0562(&local_108);
            iVar6 = local_f8._4_4_;
            uVar8 = local_f8;
          } while (local_110 != &local_b8 || (local_100 != local_a8 || local_f8._4_4_ != iVar11));
        }
        local_f8 = uVar8;
        if ((int)uStack_e0 != 0) {
          uVar8 = FUN_14479d2ce(local_130);
          uVar9 = FUN_14479d2ce(local_138);
          FUN_143607c2c(uVar8,uVar9,&local_e8,1);
        }
        plVar1 = (longlong *)(param_1 + 0x130);
        local_128 = 0;
        uStack_120 = 0;
        iVar11 = *(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x164);
        if (-1 < iVar11) {
          if (iVar11 != 0) {
            FUN_14481578e(&local_128);
          }
          puVar2 = (undefined1 *)(param_1 + 0x140);
          local_d8 = 0x100000000;
          local_c8 = 0xffffffff;
          local_c0 = 0;
          iVar11 = 0;
          local_d0 = puVar2;
          if (*(int *)(param_1 + 0x158) != 0) {
            FUN_1449c0562(&local_d8);
            iVar11 = *(int *)(param_1 + 0x158);
          }
          local_f8 = local_c8;
          uVar8 = local_f8;
          local_f0 = local_c0;
          local_ec = local_bc;
          local_108 = local_d8;
          local_100 = local_d0;
          local_f8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
          local_110 = plVar1;
          if ((local_f8._4_4_ != iVar11) || (local_d0 != puVar2)) {
            iVar6 = local_f8._4_4_;
            local_f8 = uVar8;
            do {
              uVar4 = uStack_120;
              uVar3 = *(uint *)(*local_110 + (longlong)iVar6 * 0xc);
              if ((int)uStack_b0 != local_84) {
                puVar10 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar10 = local_80;
                }
                for (iVar6 = *(int *)(puVar10 + (ulonglong)(local_70 - 1U & uVar3) * 4); iVar6 != -1
                    ; iVar6 = *(int *)(local_b8 + (longlong)iVar6 * 0xc + 4)) {
                  if (*(uint *)(local_b8 + (longlong)iVar6 * 0xc) == uVar3) goto LAB_147c5342b;
                }
              }
              lVar12 = (longlong)(int)uStack_120;
              uVar7 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
              if (uStack_120._4_4_ < uVar7) {
                FUN_1446f48e2(&local_128,uVar4 & 0xffffffff);
              }
              *(uint *)(local_128 + lVar12 * 4) = uVar3;
LAB_147c5342b:
              local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
              FUN_1449c0562(&local_108);
              iVar6 = local_f8._4_4_;
              uVar8 = local_f8;
            } while (local_110 != plVar1 || (local_100 != puVar2 || local_f8._4_4_ != iVar11));
          }
          local_f8 = uVar8;
          if ((int)uStack_120 != 0) {
            uVar8 = FUN_14479d2ce(local_130);
            uVar9 = FUN_14479d2ce(local_138);
            FUN_147c4e35e(uVar8,uVar9,&local_128);
          }
          FUN_145c3f772(plVar1,&local_b8);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          local_70 = 0;
          if (local_78 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_b8);
          goto LAB_147c52fff;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
  }
LAB_147c52fff:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c534ba FUN_147c534ba body=491 status=ok
// SIG undefined FUN_147c534ba(void)

void FUN_147c534ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 0x110;
  cVar3 = FUN_144729dda(lVar1);
  if (cVar3 != '\0') {
    lVar6 = param_1 + 0x118;
    cVar3 = FUN_144729dda(lVar6);
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0x194) == '\0')) {
      *(undefined8 *)(param_1 + 0x198) = 0;
      uVar4 = FUN_14479d2ce(lVar1);
      uVar5 = FUN_14479d2ce(lVar6);
      cVar3 = FUN_147c4e0ae(uVar4,uVar5);
      if (cVar3 != '\0') {
        FUN_14479d2ce(lVar1);
        FUN_14479d2ce(lVar6);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
      }
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        uVar4 = FUN_1401b4c98();
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_1446efa72(&local_98,0,3,0x10);
        puVar2 = local_98;
        local_90 = 3;
        *local_98 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_98[2] = lVar6;
        *local_98 = &PTR_FUN_14aa1e230;
        local_98[3] = 0;
        FUN_14485c47a(local_98 + 3,param_1);
        *(undefined4 *)(puVar2 + 5) = 0;
        puVar2[4] = FUN_147c534ba;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_98);
        local_48 = 1;
        FUN_14016fdb0(uVar4,&local_a0,&local_88);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        FUN_1449db362(&local_98);
        *(undefined8 *)(param_1 + 0x198) = local_a0;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c536cc FUN_147c536cc body=131 status=ok
// SIG undefined FUN_147c536cc(void)

void FUN_147c536cc(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [48];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_3 + 8);
  uVar3 = 0;
  if ((*(byte *)(param_3 + 0x71 + (ulonglong)((uVar2 & 3) == 0) * 8) & 2) != 0) {
    puVar1 = (undefined4 *)(param_3 + 0x48 + (ulonglong)((uVar2 & 3) == 0) * 8);
    local_18 = *puVar1;
    uStack_14 = puVar1[1];
    uStack_10 = puVar1[2];
    uStack_c = puVar1[3];
    if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x28)) {
      uVar3 = *(undefined4 *)(param_3 + 0x60 + (ulonglong)((uVar2 & 3) == 0) * 8);
    }
    FUN_140023b4e(local_18,param_2,&local_18,uVar3);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c537e6 FUN_147c537e6 body=82 status=ok
// SIG undefined FUN_147c537e6(void)

void FUN_147c537e6(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_14362590a;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5383a FUN_147c5383a body=82 status=ok
// SIG undefined FUN_147c5383a(void)

void FUN_147c5383a(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_14362593a;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5388e FUN_147c5388e body=82 status=ok
// SIG undefined FUN_147c5388e(void)

void FUN_147c5388e(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_14362597a;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c538e2 FUN_147c538e2 body=82 status=ok
// SIG undefined FUN_147c538e2(void)

void FUN_147c538e2(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_1436259b0;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53936 FUN_147c53936 body=82 status=ok
// SIG undefined FUN_147c53936(void)

void FUN_147c53936(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = &LAB_1436259f8;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5398a FUN_147c5398a body=14 status=ok
// SIG undefined FUN_147c5398a(void)

void FUN_147c5398a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 147c53998 FUN_147c53998 body=110 status=ok
// SIG undefined FUN_147c53998(void)

void FUN_147c53998(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [32];
  byte *local_28;
  undefined1 *local_20;
  undefined1 **local_18;
  byte local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_9;
  *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) & 0xfe | param_2;
  local_18 = &local_28;
  local_20 = &LAB_143625a0c;
  local_9 = param_2;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53a08 FUN_147c53a08 body=243 status=ok
// SIG undefined FUN_147c53a08(void)

void FUN_147c53a08(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_2 + 0x50);
  }
  if (*param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*param_3 + 0x50);
  }
  local_70 = 0;
  local_68 = 0;
  FUN_140146ccc(&local_70,param_6);
  local_80 = 0;
  local_78 = 0;
  FUN_140146ccc(&local_80,param_5);
  local_98 = &local_80;
  local_90 = &local_70;
  FUN_140b25d1c(param_1,uVar1,uVar2,param_4);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53afc FUN_147c53afc body=108 status=ok
// SIG undefined FUN_147c53afc(void)

void FUN_147c53afc(longlong param_1,void *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  memcpy((void *)(param_1 + 0x118),param_2,0x160);
  local_18 = &local_28;
  local_20 = FUN_143625ae0;
  local_28 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53b6a FUN_147c53b6a body=486 status=ok
// SIG undefined FUN_147c53b6a(void)

void FUN_147c53b6a(undefined4 *param_1,undefined4 *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_2e8 [40];
  undefined4 local_2c0 [2];
  undefined8 local_2b8;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_147c60d1a(local_2c0,param_1);
  memcpy(&local_278,param_1 + 0x12,0x240);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  FUN_140146ccc(param_1 + 6,param_2 + 6);
  FUN_1401472fa(param_1 + 10,param_2 + 10);
  FUN_140146ccc(param_1 + 0xe,param_2 + 0xe);
  memcpy(param_1 + 0x12,param_2 + 0x12,0x240);
  *param_1 = local_2c0[0];
  *(undefined8 *)(param_1 + 2) = local_2b8;
  *(undefined8 *)(param_1 + 0x12) = local_278;
  *(undefined8 *)(param_1 + 0x14) = local_270;
  *(undefined8 *)(param_1 + 0x16) = local_268;
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0x1e) = local_248;
    *(undefined8 *)(param_1 + 0x1a) = local_258;
    *(undefined8 *)(param_1 + 0x1c) = uStack_250;
    param_1[0x2c] = local_210;
    param_1[0x2d] = uStack_20c;
    param_1[0x2e] = uStack_208;
    param_1[0x2f] = uStack_204;
    *(undefined8 *)(param_1 + 0x30) = local_200;
  }
  if (param_4 != '\0') {
    *(undefined8 *)(param_1 + 0x24) = local_230;
    *(undefined8 *)(param_1 + 0x20) = local_240;
    *(undefined8 *)(param_1 + 0x22) = uStack_238;
    *(undefined8 *)(param_1 + 0x2a) = local_218;
    *(undefined8 *)(param_1 + 0x26) = local_228;
    *(undefined8 *)(param_1 + 0x28) = uStack_220;
    *(undefined8 *)(param_1 + 0x36) = local_1e8;
    *(undefined8 *)(param_1 + 0x32) = local_1f8;
    *(undefined8 *)(param_1 + 0x34) = uStack_1f0;
    *(undefined8 *)(param_1 + 0x38) = local_1e0;
    *(undefined8 *)(param_1 + 0x3a) = uStack_1d8;
    *(undefined8 *)(param_1 + 0x3c) = local_1d0;
    param_1[0x3e] = local_1c8;
    param_1[0x3f] = uStack_1c4;
    param_1[0x40] = uStack_1c0;
    param_1[0x41] = uStack_1bc;
    *(undefined8 *)(param_1 + 0x42) = local_1b8;
  }
  FUN_1449db362(local_288);
  FUN_1449db362(local_298);
  FUN_1449db362(local_2a8);
  if ((local_38 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53d52 FUN_147c53d52 body=651 status=ok
// SIG undefined FUN_147c53d52(void)

void FUN_147c53d52(longlong param_1,int param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 (*pauVar10) [16];
  double *pdVar11;
  bool bVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  double *local_78;
  int *local_70;
  undefined1 *local_68;
  double **local_60;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = &local_54;
  bVar12 = param_2 == 0;
  pdVar11 = (double *)(param_1 + 0xb0);
  if (bVar12) {
    pdVar11 = (double *)(param_1 + 0x68);
  }
  dVar13 = param_3[5];
  dVar1 = param_3[6];
  *pdVar11 = param_3[4];
  pdVar11[1] = dVar13;
  pdVar11 = (double *)(param_1 + 0x78);
  if (!bVar12) {
    pdVar11 = (double *)(param_1 + 0xc0);
  }
  *pdVar11 = dVar1;
  pauVar10 = (undefined1 (*) [16])(param_1 + 0x80);
  if (!bVar12) {
    pauVar10 = (undefined1 (*) [16])(param_1 + 200);
  }
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar1 = param_3[3];
  dVar13 = dVar7 * 0.0 - dVar8 * 1.0;
  dVar3 = dVar8 * 0.0 - dVar9 * 0.0;
  dVar5 = dVar9 * 1.0 - dVar7 * 0.0;
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar5 + dVar5;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar9 * dVar3 - dVar7 * dVar13) + param_3[3] * dVar5 + 0.0;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = (dVar13 * dVar8 - dVar5 * dVar9) + dVar1 * dVar3 + 1.0;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *pauVar10 = auVar4;
  pdVar11 = (double *)(param_1 + 0x90);
  if (!bVar12) {
    pdVar11 = (double *)(param_1 + 0xd8);
  }
  *pdVar11 = dVar13 * dVar1 + 0.0 + (dVar5 * dVar7 - dVar3 * dVar8);
  pauVar10 = (undefined1 (*) [16])(param_1 + 0x98);
  if (!bVar12) {
    pauVar10 = (undefined1 (*) [16])(param_1 + 0xe0);
  }
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar1 = param_3[3];
  dVar13 = dVar7 * 1.0 - dVar8 * 0.0;
  dVar3 = dVar8 * 0.0 - dVar9 * 1.0;
  dVar5 = dVar9 * 0.0 - dVar7 * 0.0;
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar5 + dVar5;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar9 * dVar3 - dVar7 * dVar13) + param_3[3] * dVar5 + 1.0;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = (dVar13 * dVar8 - dVar5 * dVar9) + dVar1 * dVar3 + 0.0;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *pauVar10 = auVar2;
  pdVar11 = (double *)(param_1 + 0xa8);
  if (!bVar12) {
    pdVar11 = (double *)(param_1 + 0xf0);
  }
  *pdVar11 = dVar13 * dVar1 + 0.0 + (dVar5 * dVar7 - dVar3 * dVar8);
  local_60 = &local_78;
  local_68 = &LAB_143625b22;
  local_78 = param_3;
  local_54 = param_2;
  FUN_147c687da(param_1 + 8);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c53fde FUN_147c53fde body=126 status=ok
// SIG undefined FUN_147c53fde(void)

void FUN_147c53fde(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [40];
  int *local_30;
  undefined4 *local_28;
  code *local_20;
  undefined4 **local_18;
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_c;
  puVar4 = (undefined4 *)(param_1 + 0xb0);
  if (param_2 == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x68);
  }
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  local_18 = &local_30;
  local_20 = FUN_143625b38;
  local_28 = param_3;
  local_c = param_2;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5405e FUN_147c5405e body=215 status=ok
// SIG undefined FUN_147c5405e(void)

void FUN_147c5405e(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 *local_70;
  undefined8 *local_68;
  int *local_60;
  code *local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = &local_2c;
  bVar7 = param_2 == 0;
  puVar6 = (undefined8 *)(param_1 + 0xb0);
  if (bVar7) {
    puVar6 = (undefined8 *)(param_1 + 0x68);
  }
  local_38 = puVar6[2];
  local_68 = &local_48;
  local_48 = *puVar6;
  uStack_40 = puVar6[1];
  puVar6 = (undefined8 *)(param_1 + 0x80);
  if (!bVar7) {
    puVar6 = (undefined8 *)(param_1 + 200);
  }
  puVar6[2] = param_3[2];
  uVar4 = param_3[1];
  *puVar6 = *param_3;
  puVar6[1] = uVar4;
  puVar5 = (undefined4 *)(param_1 + 0x98);
  if (!bVar7) {
    puVar5 = (undefined4 *)(param_1 + 0xe0);
  }
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *puVar5 = *param_4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  local_50 = &local_78;
  local_58 = FUN_143625be8;
  local_78 = param_3;
  local_70 = param_4;
  local_2c = param_2;
  FUN_147c687da(param_1 + 8);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54136 FUN_147c54136 body=52 status=ok
// SIG undefined FUN_147c54136(void)

void FUN_147c54136(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[1] = uVar1;
  *(undefined8 *)(param_3 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_3 = (undefined4)DAT_14c8464e0;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  FUN_146ef2a5e(param_1 + 8);
  return;
}



// FUNCTION 147c5416a FUN_147c5416a body=9 status=ok
// SIG undefined FUN_147c5416a(void)

void FUN_147c5416a(longlong param_1)

{
  FUN_146ef2f2a(param_1 + 8);
  return;
}



// FUNCTION 147c54174 FUN_147c54174 body=136 status=ok
// SIG undefined FUN_147c54174(void)

void FUN_147c54174(longlong param_1,byte param_2,byte param_3,byte param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x1dc) = *(byte *)(param_1 + 0x1dc) & 0xfe | param_2;
  *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) & 0xfe | param_3;
  *(byte *)(param_1 + 0x1fc) = *(byte *)(param_1 + 0x1fc) & 0xfe | param_4;
  local_10 = &local_20;
  local_18 = &LAB_143625d1a;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c541fe FUN_147c541fe body=144 status=ok
// SIG undefined FUN_147c541fe(void)

void FUN_147c541fe(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x1dc) = *(byte *)(param_1 + 0x1dc) & 0xfd | param_2 * '\x02';
  *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) & 0xfd | param_3 * '\x02';
  *(byte *)(param_1 + 0x1fc) = *(byte *)(param_1 + 0x1fc) & 0xfd | param_4 * '\x02';
  local_10 = &local_20;
  local_18 = &LAB_143625d30;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54290 FUN_147c54290 body=119 status=ok
// SIG undefined FUN_147c54290(void)

void FUN_147c54290(longlong param_1,byte param_2,byte param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x224) = *(byte *)(param_1 + 0x224) & 0xfe | param_3;
  *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) & 0xfe | param_2;
  local_10 = &local_20;
  local_18 = &LAB_143625d46;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54308 FUN_147c54308 body=98 status=ok
// SIG undefined FUN_147c54308(void)

void FUN_147c54308(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) & 0xfe | param_2;
  local_10 = &local_20;
  local_18 = &LAB_143625d5c;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5436c FUN_147c5436c body=124 status=ok
// SIG undefined FUN_147c5436c(void)

void FUN_147c5436c(longlong param_1,char param_2,char param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x224) = *(byte *)(param_1 + 0x224) & 0xfd | param_3 * '\x02';
  *(byte *)(param_1 + 0x214) = *(byte *)(param_1 + 0x214) & 0xfd | param_2 * '\x02';
  local_10 = &local_20;
  local_18 = &LAB_143625d72;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c543ea FUN_147c543ea body=100 status=ok
// SIG undefined FUN_147c543ea(void)

void FUN_147c543ea(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x234) = *(byte *)(param_1 + 0x234) & 0xfd | param_2 * '\x02';
  local_10 = &local_20;
  local_18 = &LAB_143625d88;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54450 FUN_147c54450 body=88 status=ok
// SIG undefined FUN_147c54450(void)

void FUN_147c54450(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x268) = param_2;
  local_10 = &local_20;
  local_18 = &LAB_143625d9e;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c544aa FUN_147c544aa body=81 status=ok
// SIG undefined FUN_147c544aa(void)

void FUN_147c544aa(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(double *)(param_1 + 0x1a0) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0x1a0)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 0x1a8) == param_2[1])) &&
     (((!NAN(*(double *)(param_1 + 0x1a8)) && !NAN(param_2[1]) &&
       (*(double *)(param_1 + 0x1b0) == param_2[2])) &&
      (!NAN(*(double *)(param_1 + 0x1b0)) && !NAN(param_2[2]))))) {
    return;
  }
  *(double *)(param_1 + 0x1b0) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  FUN_146ef2e12(param_1 + 8);
  return;
}



// FUNCTION 147c544fc FUN_147c544fc body=81 status=ok
// SIG undefined FUN_147c544fc(void)

void FUN_147c544fc(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(double *)(param_1 + 0x1b8) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0x1b8)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 0x1c0) == param_2[1])) &&
     (((!NAN(*(double *)(param_1 + 0x1c0)) && !NAN(param_2[1]) &&
       (*(double *)(param_1 + 0x1c8) == param_2[2])) &&
      (!NAN(*(double *)(param_1 + 0x1c8)) && !NAN(param_2[2]))))) {
    return;
  }
  *(double *)(param_1 + 0x1c8) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  FUN_146ef2e9e(param_1 + 8);
  return;
}



// FUNCTION 147c5454e FUN_147c5454e body=154 status=ok
// SIG undefined FUN_147c5454e(void)

void FUN_147c5454e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  *(undefined4 *)(param_1 + 0x1d4) = param_3;
  *(undefined4 *)(param_1 + 0x1d8) = param_4;
  *(undefined4 *)(param_1 + 0x1e0) = param_2;
  *(undefined4 *)(param_1 + 0x1e4) = param_3;
  *(undefined4 *)(param_1 + 0x1e8) = param_4;
  *(undefined4 *)(param_1 + 0x1f0) = param_2;
  *(undefined4 *)(param_1 + 500) = param_3;
  *(undefined4 *)(param_1 + 0x1f8) = param_4;
  local_10 = &local_20;
  local_18 = &LAB_143625db4;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c545ea FUN_147c545ea body=88 status=ok
// SIG undefined FUN_147c545ea(void)

void FUN_147c545ea(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x200) = param_2;
  local_10 = &local_20;
  local_18 = &LAB_143625dca;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54644 FUN_147c54644 body=177 status=ok
// SIG undefined FUN_147c54644(void)

void FUN_147c54644(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448052ee(param_2,&local_38);
  if ((*(double *)(param_1 + 0x238) == local_38) &&
     (!NAN(*(double *)(param_1 + 0x238)) && !NAN(local_38))) {
    if ((*(double *)(param_1 + 0x240) == local_30) &&
       (!NAN(*(double *)(param_1 + 0x240)) && !NAN(local_30))) {
      if ((*(double *)(param_1 + 0x248) == local_28) &&
         (!NAN(*(double *)(param_1 + 0x248)) && !NAN(local_28))) {
        if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  *(double *)(param_1 + 0x238) = local_38;
  *(double *)(param_1 + 0x240) = local_30;
  *(double *)(param_1 + 0x248) = local_28;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 147c54708 FUN_147c54708 body=9 status=ok
// SIG undefined FUN_147c54708(void)

void FUN_147c54708(longlong param_1)

{
  FUN_146ef2aca(param_1 + 8);
  return;
}



// FUNCTION 147c54712 FUN_147c54712 body=9 status=ok
// SIG undefined FUN_147c54712(void)

void FUN_147c54712(longlong param_1)

{
  FUN_146ef2b8c(param_1 + 8);
  return;
}



// FUNCTION 147c5471c FUN_147c5471c body=9 status=ok
// SIG undefined FUN_147c5471c(void)

void FUN_147c5471c(longlong param_1)

{
  FUN_146ef2c56(param_1 + 8);
  return;
}



// FUNCTION 147c54726 FUN_147c54726 body=191 status=ok
// SIG undefined FUN_147c54726(void)

void FUN_147c54726(longlong param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(double *)(param_1 + 0x250) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0x250)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 600) == param_2[1])) &&
     (!NAN(*(double *)(param_1 + 600)) && !NAN(param_2[1]))) {
    if ((*(double *)(param_1 + 0x260) == param_2[2]) &&
       (!NAN(*(double *)(param_1 + 0x260)) && !NAN(param_2[2]))) goto LAB_147c547ca;
  }
  *(double *)(param_1 + 0x260) = param_2[2];
  dVar1 = param_2[1];
  *(double *)(param_1 + 0x250) = *param_2;
  *(double *)(param_1 + 600) = dVar1;
  local_10 = (param_2[2] + param_2[2]) * 3.1415927410125732;
  local_18 = (param_2[1] + param_2[1]) * 3.1415927410125732;
  local_20 = (*param_2 + *param_2) * 3.1415927410125732;
  FUN_146ef2ee4(param_1 + 8);
LAB_147c547ca:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c547e6 FUN_147c547e6 body=154 status=ok
// SIG undefined FUN_147c547e6(void)

void FUN_147c547e6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x218) = param_2;
  *(undefined4 *)(param_1 + 0x21c) = param_3;
  *(undefined4 *)(param_1 + 0x220) = param_4;
  *(undefined4 *)(param_1 + 0x208) = param_2;
  *(undefined4 *)(param_1 + 0x20c) = param_3;
  *(undefined4 *)(param_1 + 0x210) = param_4;
  *(undefined4 *)(param_1 + 0x228) = param_2;
  *(undefined4 *)(param_1 + 0x22c) = param_3;
  *(undefined4 *)(param_1 + 0x230) = param_4;
  local_10 = &local_20;
  local_18 = &LAB_143625de0;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54882 FUN_147c54882 body=88 status=ok
// SIG undefined FUN_147c54882(void)

void FUN_147c54882(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x269) = param_2;
  local_10 = &local_20;
  local_18 = &LAB_143625df6;
  local_20 = param_1;
  FUN_147c687da(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c548dc FUN_147c548dc body=207 status=ok
// SIG undefined FUN_147c548dc(void)

void FUN_147c548dc(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  code *local_38;
  undefined1 **local_30;
  char local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_40 = &param_6;
  local_48 = &param_5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = &local_1c;
  local_58 = &local_20;
  local_60 = &local_21;
  *(byte *)(param_1 + 0x198) = *(byte *)(param_1 + 0x198) & 0xf7 | param_2 << 3;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  *(undefined4 *)(param_1 + 0x124) = param_4;
  *(undefined4 *)(param_1 + 0x118) = param_5;
  *(undefined4 *)(param_1 + 0x11c) = param_6;
  local_30 = &local_60;
  local_38 = FUN_143625e0c;
  local_21 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_1407a478e(param_1 + 8);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c549ac FUN_147c549ac body=61 status=ok
// SIG undefined FUN_147c549ac(void)

void FUN_147c549ac(longlong param_1)

{
  FUN_147c548dc(*(undefined4 *)(param_1 + 0x118),1,*(undefined4 *)(param_1 + 0x120),
                *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x118),
                *(undefined4 *)(param_1 + 0x11c));
  return;
}



// FUNCTION 147c549ea FUN_147c549ea body=61 status=ok
// SIG undefined FUN_147c549ea(void)

void FUN_147c549ea(longlong param_1)

{
  FUN_147c548dc(*(undefined4 *)(param_1 + 0x118),0,*(undefined4 *)(param_1 + 0x120),
                *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x118),
                *(undefined4 *)(param_1 + 0x11c));
  return;
}



// FUNCTION 147c54a28 FUN_147c54a28 body=156 status=ok
// SIG undefined FUN_147c54a28(void)

longlong FUN_147c54a28(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda();
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_144a74fb4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar2 = FUN_147d1a01e(lVar2,*(undefined4 *)(param_1 + 8));
        return lVar2;
      }
    }
    lVar2 = FUN_14479d2ce(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_14595a0ac();
      if (*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) {
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30) {
          return 0;
        }
        return lVar2 + 0x300;
      }
    }
  }
  return 0;
}



// FUNCTION 147c54ad0 FUN_147c54ad0 body=434 status=ok
// SIG undefined FUN_147c54ad0(void)

void FUN_147c54ad0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar4 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c54c84(puVar3,puVar4,iVar2 != 0,local_50 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54c84 FUN_147c54c84 body=118 status=ok
// SIG undefined FUN_147c54c84(void)

void FUN_147c54c84(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = FUN_147c54a28();
  lVar2 = FUN_147c54a28(param_2);
  if (lVar2 == 0 || lVar1 == 0) {
    return;
  }
  cVar3 = FUN_144729dda(param_1);
  if (cVar3 != '\0') {
    FUN_14479d2ce(param_1);
  }
  FUN_147c53b6a(lVar1,lVar2,param_3,param_4);
  return;
}



// FUNCTION 147c54d00 FUN_147c54d00 body=396 status=ok
// SIG undefined FUN_147c54d00(void)

void FUN_147c54d00(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  pbVar5 = &local_39;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar4);
  if (lVar2 == 0) {
    *pbVar5 = 0;
    uVar6 = 0;
  }
  else {
    *pbVar5 = *(byte *)(lVar2 + 0x198) >> 5 & 1;
    uVar6 = *(undefined4 *)(lVar2 + 0x134);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *puVar3 = uVar6;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54e8e FUN_147c54e8e body=281 status=ok
// SIG undefined FUN_147c54e8e(void)

void FUN_147c54e8e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar5 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(lVar3 + 0x268);
  }
  puVar4 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *puVar4 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c54fa8 FUN_147c54fa8 body=505 status=ok
// SIG undefined FUN_147c54fa8(void)

void FUN_147c54fa8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar5 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_44 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar6 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *puVar4 = 0;
    *puVar6 = 0;
    uVar7 = 0;
  }
  else {
    *puVar4 = *(undefined4 *)(lVar3 + 0x218);
    *puVar6 = *(undefined4 *)(lVar3 + 0x21c);
    uVar7 = *(undefined4 *)(lVar3 + 0x220);
  }
  puVar4 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c551a2 FUN_147c551a2 body=807 status=ok
// SIG undefined FUN_147c551a2(void)

void FUN_147c551a2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined1 local_69;
  undefined4 local_68;
  undefined1 local_61;
  undefined4 local_60;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_50 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar6 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_59 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar9 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar4 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_61 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar7 = &local_61;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar8 = &local_68;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  local_69 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar5 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar6);
  if (lVar3 == 0) {
    *puVar9 = 0;
    *puVar4 = 0;
    *puVar7 = 0;
    *puVar8 = 0;
    *puVar5 = 0;
    uVar10 = 0;
  }
  else {
    *puVar9 = *(undefined1 *)(lVar3 + 0x178);
    *puVar4 = *(undefined4 *)(lVar3 + 0x170);
    *puVar7 = *(undefined1 *)(lVar3 + 0x179);
    *puVar8 = *(undefined4 *)(lVar3 + 0x174);
    *puVar5 = *(undefined1 *)(lVar3 + 0x194);
    uVar10 = *(undefined4 *)(lVar3 + 400);
  }
  puVar4 = &local_70;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar10;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c554ca FUN_147c554ca body=305 status=ok
// SIG undefined FUN_147c554ca(void)

void FUN_147c554ca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147c54a28(puVar3);
  if (lVar1 == 0) {
    *(undefined8 *)(puVar2 + 4) = DAT_14c846508;
    uVar4 = (undefined4)DAT_14c8464f8;
    uVar5 = DAT_14c8464f8._4_4_;
    uVar6 = (undefined4)DAT_14c846500;
    uVar7 = DAT_14c846500._4_4_;
  }
  else {
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x248);
    uVar4 = *(undefined4 *)(lVar1 + 0x238);
    uVar5 = *(undefined4 *)(lVar1 + 0x23c);
    uVar6 = *(undefined4 *)(lVar1 + 0x240);
    uVar7 = *(undefined4 *)(lVar1 + 0x244);
  }
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55602 FUN_147c55602 body=396 status=ok
// SIG undefined FUN_147c55602(void)

void FUN_147c55602(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  pbVar5 = &local_39;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar4);
  if (lVar2 == 0) {
    *pbVar5 = 0;
    uVar6 = 0;
  }
  else {
    *pbVar5 = *(byte *)(lVar2 + 0x198) >> 6 & 1;
    uVar6 = *(undefined4 *)(lVar2 + 0x138);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *puVar3 = uVar6;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55796 FUN_147c55796 body=720 status=ok
// SIG undefined FUN_147c55796(void)

void FUN_147c55796(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_51;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_48 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar5 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  pbVar8 = &local_51;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar8 = *(byte **)(param_2 + 0x38);
  }
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_5c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar6 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar7 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  local_64 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar8 = 0;
    *puVar4 = 0;
    *puVar6 = 0;
    *puVar7 = 0;
    uVar9 = 0;
  }
  else {
    *pbVar8 = *(byte *)(lVar3 + 0x16c) & 1;
    *puVar4 = *(undefined4 *)(lVar3 + 0x15c);
    *puVar6 = *(undefined4 *)(lVar3 + 0x160);
    *puVar7 = *(undefined4 *)(lVar3 + 0x164);
    uVar9 = *(undefined4 *)(lVar3 + 0x168);
  }
  puVar4 = &local_64;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar9;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55a6e FUN_147c55a6e body=720 status=ok
// SIG undefined FUN_147c55a6e(void)

void FUN_147c55a6e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_51;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_48 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar5 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  pbVar8 = &local_51;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar8 = *(byte **)(param_2 + 0x38);
  }
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_5c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar6 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar7 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  local_64 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar8 = 0;
    *puVar4 = 0;
    *puVar6 = 0;
    *puVar7 = 0;
    uVar9 = 0;
  }
  else {
    *pbVar8 = *(byte *)(lVar3 + 0x18c) & 1;
    *puVar4 = *(undefined4 *)(lVar3 + 0x17c);
    *puVar6 = *(undefined4 *)(lVar3 + 0x180);
    *puVar7 = *(undefined4 *)(lVar3 + 0x184);
    uVar9 = *(undefined4 *)(lVar3 + 0x188);
  }
  puVar4 = &local_64;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar9;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55d46 FUN_147c55d46 body=285 status=ok
// SIG undefined FUN_147c55d46(void)

void FUN_147c55d46(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [39];
  byte local_31;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar5 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(lVar3 + 0x234) >> 1 & 1;
  }
  pbVar4 = &local_31;
  if (pbVar1 != (byte *)0x0) {
    pbVar4 = pbVar1;
  }
  *pbVar4 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55e70 FUN_147c55e70 body=391 status=ok
// SIG undefined FUN_147c55e70(void)

void FUN_147c55e70(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [46];
  byte local_3a [2];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3a[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3a + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3a + 1);
  }
  pbVar4 = local_3a + 1;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  local_3a[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3a);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar4 = 0;
    bVar2 = 0;
  }
  else {
    *pbVar4 = *(byte *)(lVar3 + 0x214) >> 1 & 1;
    bVar2 = *(byte *)(lVar3 + 0x224) >> 1 & 1;
  }
  pbVar4 = local_3a;
  if (pbVar1 != (byte *)0x0) {
    pbVar4 = pbVar1;
  }
  *pbVar4 = bVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c55ff8 FUN_147c55ff8 body=305 status=ok
// SIG undefined FUN_147c55ff8(void)

void FUN_147c55ff8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147c54a28(puVar3);
  if (lVar1 == 0) {
    *(undefined8 *)(puVar2 + 4) = DAT_14c8464f0;
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
  }
  else {
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x260);
    uVar4 = *(undefined4 *)(lVar1 + 0x250);
    uVar5 = *(undefined4 *)(lVar1 + 0x254);
    uVar6 = *(undefined4 *)(lVar1 + 600);
    uVar7 = *(undefined4 *)(lVar1 + 0x25c);
  }
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5612a FUN_147c5612a body=379 status=ok
// SIG undefined FUN_147c5612a(void)

void FUN_147c5612a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar4 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar3);
  if (lVar2 != 0) {
    puVar3 = &local_48;
    if (puVar1 != (undefined8 *)0x0) {
      puVar3 = puVar1;
    }
    *puVar4 = *(undefined8 *)(lVar2 + 0x58);
    *puVar3 = *(undefined8 *)(lVar2 + 0x50);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c562a6 FUN_147c562a6 body=289 status=ok
// SIG undefined FUN_147c562a6(void)

void FUN_147c562a6(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar4 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar4);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar2 + 0x13c);
  }
  puVar3 = &local_34;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *puVar3 = uVar5;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c563ce FUN_147c563ce body=193 status=ok
// SIG undefined FUN_147c563ce(void)

void FUN_147c563ce(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar3);
  if (lVar2 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x198) & 1;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56496 FUN_147c56496 body=393 status=ok
// SIG undefined FUN_147c56496(void)

void FUN_147c56496(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  pbVar5 = &local_39;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar4);
  if (lVar2 == 0) {
    *pbVar5 = 0;
    uVar6 = 0;
  }
  else {
    *pbVar5 = *(byte *)(lVar2 + 0x198) >> 7;
    uVar6 = *(undefined4 *)(lVar2 + 300);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *puVar3 = uVar6;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56620 FUN_147c56620 body=505 status=ok
// SIG undefined FUN_147c56620(void)

void FUN_147c56620(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar5 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_44 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar6 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *puVar4 = 0;
    *puVar6 = 0;
    uVar7 = 0;
  }
  else {
    *puVar4 = *(undefined4 *)(lVar3 + 0x1d0);
    *puVar6 = *(undefined4 *)(lVar3 + 0x1d4);
    uVar7 = *(undefined4 *)(lVar3 + 0x1d8);
  }
  puVar4 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5681a FUN_147c5681a body=593 status=ok
// SIG undefined FUN_147c5681a(void)

void FUN_147c5681a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_40 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar5 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar7 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4a = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4a);
  }
  puVar8 = &local_4a;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4b = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4b);
  }
  puVar6 = &local_4b;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *puVar7 = 0;
    *puVar8 = 0;
    *puVar6 = 0;
    uVar9 = 0;
  }
  else {
    *puVar7 = *(undefined1 *)(lVar3 + 0x158);
    *puVar8 = *(undefined1 *)(lVar3 + 0x159);
    *puVar6 = *(undefined1 *)(lVar3 + 0x15a);
    uVar9 = *(undefined4 *)(lVar3 + 0x154);
  }
  puVar4 = &local_50;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar9;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56a72 FUN_147c56a72 body=496 status=ok
// SIG undefined FUN_147c56a72(void)

void FUN_147c56a72(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined4 local_48;
  byte local_41;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar6 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_41 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  pbVar7 = &local_41;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar7 = *(byte **)(param_2 + 0x38);
  }
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar8 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = FUN_147c54a28(puVar6);
  if (lVar4 == 0) {
    *pbVar7 = 0;
    *puVar8 = 0;
    uVar3 = 0;
  }
  else {
    *pbVar7 = *(byte *)(lVar4 + 0x199) & 1;
    *puVar8 = *(undefined4 *)(lVar4 + 0x130);
    uVar3 = *(undefined1 *)(lVar4 + 0x270);
  }
  puVar5 = &local_49;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  *puVar5 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56c76 FUN_147c56c76 body=489 status=ok
// SIG undefined FUN_147c56c76(void)

void FUN_147c56c76(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined1 auStack_68 [37];
  byte local_43 [3];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar6 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_43[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43 + 2);
  }
  pbVar5 = local_43 + 2;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x38);
  }
  local_43[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43 + 1);
  }
  pbVar7 = local_43 + 1;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar7 = *(byte **)(param_2 + 0x38);
  }
  local_43[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43);
  }
  pbVar2 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = FUN_147c54a28(puVar6);
  if (lVar4 == 0) {
    bVar3 = 0;
    *pbVar5 = 0;
    *pbVar7 = 0;
  }
  else {
    *pbVar5 = *(byte *)(lVar4 + 0x1dc) & 1;
    *pbVar7 = *(byte *)(lVar4 + 0x1ec) & 1;
    bVar3 = *(byte *)(lVar4 + 0x1fc) & 1;
  }
  pbVar5 = local_43;
  if (pbVar2 != (byte *)0x0) {
    pbVar5 = pbVar2;
  }
  *pbVar5 = bVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56e60 FUN_147c56e60 body=305 status=ok
// SIG undefined FUN_147c56e60(void)

void FUN_147c56e60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147c54a28(puVar3);
  if (lVar1 == 0) {
    *(undefined8 *)(puVar2 + 4) = DAT_14c8464f0;
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
  }
  else {
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x1b0);
    uVar4 = *(undefined4 *)(lVar1 + 0x1a0);
    uVar5 = *(undefined4 *)(lVar1 + 0x1a4);
    uVar6 = *(undefined4 *)(lVar1 + 0x1a8);
    uVar7 = *(undefined4 *)(lVar1 + 0x1ac);
  }
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c56f98 FUN_147c56f98 body=720 status=ok
// SIG undefined FUN_147c56f98(void)

void FUN_147c56f98(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  byte local_51;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_48 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar5 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_51 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  pbVar8 = &local_51;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar8 = *(byte **)(param_2 + 0x38);
  }
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_5c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar6 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar7 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  local_64 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar8 = 0;
    *puVar4 = 0;
    *puVar6 = 0;
    *puVar7 = 0;
    uVar9 = 0;
  }
  else {
    *pbVar8 = *(byte *)(lVar3 + 0x150) & 1;
    *puVar4 = *(undefined4 *)(lVar3 + 0x140);
    *puVar6 = *(undefined4 *)(lVar3 + 0x144);
    *puVar7 = *(undefined4 *)(lVar3 + 0x148);
    uVar9 = *(undefined4 *)(lVar3 + 0x14c);
  }
  puVar4 = &local_64;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar9;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5727c FUN_147c5727c body=495 status=ok
// SIG undefined FUN_147c5727c(void)

void FUN_147c5727c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined1 auStack_68 [37];
  byte local_43 [3];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar6 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_43[2] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43 + 2);
  }
  pbVar5 = local_43 + 2;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar5 = *(byte **)(param_2 + 0x38);
  }
  local_43[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43 + 1);
  }
  pbVar7 = local_43 + 1;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar7 = *(byte **)(param_2 + 0x38);
  }
  local_43[0] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_43);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_43);
  }
  pbVar2 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = FUN_147c54a28(puVar6);
  if (lVar4 == 0) {
    bVar3 = 0;
    *pbVar5 = 0;
    *pbVar7 = 0;
  }
  else {
    *pbVar5 = *(byte *)(lVar4 + 0x1dc) >> 1 & 1;
    *pbVar7 = *(byte *)(lVar4 + 0x1ec) >> 1 & 1;
    bVar3 = *(byte *)(lVar4 + 0x1fc) >> 1 & 1;
  }
  pbVar5 = local_43;
  if (pbVar2 != (byte *)0x0) {
    pbVar5 = pbVar2;
  }
  *pbVar5 = bVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5746c FUN_147c5746c body=305 status=ok
// SIG undefined FUN_147c5746c(void)

void FUN_147c5746c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_147c54a28(puVar3);
  if (lVar1 == 0) {
    *(undefined8 *)(puVar2 + 4) = DAT_14c8464f0;
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
  }
  else {
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x1c8);
    uVar4 = *(undefined4 *)(lVar1 + 0x1b8);
    uVar5 = *(undefined4 *)(lVar1 + 0x1bc);
    uVar6 = *(undefined4 *)(lVar1 + 0x1c0);
    uVar7 = *(undefined4 *)(lVar1 + 0x1c4);
  }
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c575a4 FUN_147c575a4 body=196 status=ok
// SIG undefined FUN_147c575a4(void)

void FUN_147c575a4(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x198) >> 4 & 1;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57670 FUN_147c57670 body=283 status=ok
// SIG undefined FUN_147c57670(void)

void FUN_147c57670(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [39];
  byte local_31;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar5 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(lVar3 + 0x234) & 1;
  }
  pbVar4 = &local_31;
  if (pbVar1 != (byte *)0x0) {
    pbVar4 = pbVar1;
  }
  *pbVar4 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57798 FUN_147c57798 body=387 status=ok
// SIG undefined FUN_147c57798(void)

void FUN_147c57798(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [46];
  byte local_3a [2];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_3a[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3a + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3a + 1);
  }
  pbVar4 = local_3a + 1;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  local_3a[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3a);
  }
  pbVar1 = *(byte **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar4 = 0;
    bVar2 = 0;
  }
  else {
    *pbVar4 = *(byte *)(lVar3 + 0x214) & 1;
    bVar2 = *(byte *)(lVar3 + 0x224) & 1;
  }
  pbVar4 = local_3a;
  if (pbVar1 != (byte *)0x0) {
    pbVar4 = pbVar1;
  }
  *pbVar4 = bVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57922 FUN_147c57922 body=195 status=ok
// SIG undefined FUN_147c57922(void)

void FUN_147c57922(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar3 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_147c54a28(puVar3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x198) >> 1 & 1;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c579ec FUN_147c579ec body=507 status=ok
// SIG undefined FUN_147c579ec(void)

void FUN_147c579ec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  byte local_41;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_38 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar5 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_41 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  pbVar6 = &local_41;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar6 = *(byte **)(param_2 + 0x38);
  }
  local_48 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147c54a28(puVar5);
  if (lVar3 == 0) {
    *pbVar6 = 0;
    *puVar4 = 0;
    uVar7 = 0;
  }
  else {
    *pbVar6 = *(byte *)(lVar3 + 0x198) >> 3 & 1;
    *puVar4 = *(undefined4 *)(lVar3 + 0x120);
    uVar7 = *(undefined4 *)(lVar3 + 0x124);
  }
  puVar4 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  *puVar4 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57bee FUN_147c57bee body=328 status=ok
// SIG undefined FUN_147c57bee(void)

void FUN_147c57bee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c57d38(puVar3,iVar2 != 0,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57d38 FUN_147c57d38 body=169 status=ok
// SIG undefined FUN_147c57d38(void)

void FUN_147c57d38(undefined8 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0xdf | param_2 << 5;
    *(undefined4 *)(lVar2 + 0x134) = param_3;
    local_38 = &local_48;
    local_40 = &LAB_14362597a;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57de2 FUN_147c57de2 body=243 status=ok
// SIG undefined FUN_147c57de2(void)

void FUN_147c57de2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c57ed6(puVar2,local_29);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57ed6 FUN_147c57ed6 body=136 status=ok
// SIG undefined FUN_147c57ed6(void)

void FUN_147c57ed6(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined1 *)(lVar2 + 0x268) = param_2;
    local_28 = &local_38;
    local_30 = &LAB_143625d9e;
    local_38 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c57f60 FUN_147c57f60 body=399 status=ok
// SIG undefined FUN_147c57f60(void)

void FUN_147c57f60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c580f0(puVar2,local_2c,local_30,local_34);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c580f0 FUN_147c580f0 body=246 status=ok
// SIG undefined FUN_147c580f0(void)

void FUN_147c580f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined4 *)(lVar2 + 0x218) = param_2;
    *(undefined4 *)(lVar2 + 0x21c) = param_3;
    *(undefined4 *)(lVar2 + 0x220) = param_4;
    *(undefined4 *)(lVar2 + 0x208) = param_2;
    *(undefined4 *)(lVar2 + 0x20c) = param_3;
    *(undefined4 *)(lVar2 + 0x210) = param_4;
    *(undefined4 *)(lVar2 + 0x228) = param_2;
    *(undefined4 *)(lVar2 + 0x22c) = param_3;
    *(undefined4 *)(lVar2 + 0x230) = param_4;
    local_58 = &local_68;
    local_60 = &LAB_143625de0;
    local_68 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c581e8 FUN_147c581e8 body=629 status=ok
// SIG undefined FUN_147c581e8(void)

void FUN_147c581e8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined4 local_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined1 local_29;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  local_50 = local_39;
  local_58 = local_38;
  FUN_147c5845e(puVar2,local_29,local_30,local_31);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5845e FUN_147c5845e body=312 status=ok
// SIG undefined FUN_147c5845e(void)

void FUN_147c5845e(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  code *local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined1 *)(lVar2 + 0x178) = param_2;
    *(undefined4 *)(lVar2 + 0x170) = param_3;
    local_80 = FUN_14362593a;
    lVar3 = lVar2 + 8;
    local_88 = lVar2;
    local_78 = &local_88;
    FUN_147c687da(lVar3,&local_80);
    *(undefined1 *)(lVar2 + 0x179) = param_4;
    *(undefined4 *)(lVar2 + 0x174) = param_5;
    local_80 = FUN_14362593a;
    local_88 = lVar2;
    local_78 = &local_88;
    FUN_147c687da(lVar3,&local_80);
    *(undefined1 *)(lVar2 + 0x194) = param_6;
    *(undefined4 *)(lVar2 + 400) = param_7;
    local_80 = FUN_14362593a;
    local_88 = lVar2;
    local_78 = &local_88;
    FUN_147c687da(lVar3,&local_80);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58598 FUN_147c58598 body=256 status=ok
// SIG undefined FUN_147c58598(void)

void FUN_147c58598(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5869a(puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5869a FUN_147c5869a body=120 status=ok
// SIG undefined FUN_147c5869a(void)

void FUN_147c5869a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    FUN_144a7484c(param_2,local_48);
    FUN_147c54644(lVar2,local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5871a FUN_147c5871a body=328 status=ok
// SIG undefined FUN_147c5871a(void)

void FUN_147c5871a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c58864(puVar3,iVar2 != 0,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58864 FUN_147c58864 body=169 status=ok
// SIG undefined FUN_147c58864(void)

void FUN_147c58864(undefined8 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0xbf | param_2 << 6;
    *(undefined4 *)(lVar2 + 0x138) = param_3;
    local_38 = &local_48;
    local_40 = &LAB_1436259b0;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58914 FUN_147c58914 body=568 status=ok
// SIG undefined FUN_147c58914(void)

void FUN_147c58914(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_44;
  local_58 = local_40;
  FUN_147c58b4e(puVar3,iVar2 != 0,local_38,local_3c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58b4e FUN_147c58b4e body=259 status=ok
// SIG undefined FUN_147c58b4e(void)

void FUN_147c58b4e(undefined8 param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x16c) = *(byte *)(lVar2 + 0x16c) & 0xfe | param_2;
    *(undefined4 *)(lVar2 + 0x15c) = param_3;
    *(undefined4 *)(lVar2 + 0x160) = param_4;
    *(undefined4 *)(lVar2 + 0x164) = param_5;
    *(undefined4 *)(lVar2 + 0x168) = param_6;
    local_68 = &local_78;
    local_70 = FUN_14362593a;
    local_78 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58c58 FUN_147c58c58 body=568 status=ok
// SIG undefined FUN_147c58c58(void)

void FUN_147c58c58(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_44;
  local_58 = local_40;
  FUN_147c58e92(puVar3,iVar2 != 0,local_38,local_3c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58e92 FUN_147c58e92 body=259 status=ok
// SIG undefined FUN_147c58e92(void)

void FUN_147c58e92(undefined8 param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x18c) = *(byte *)(lVar2 + 0x18c) & 0xfe | param_2;
    *(undefined4 *)(lVar2 + 0x17c) = param_3;
    *(undefined4 *)(lVar2 + 0x180) = param_4;
    *(undefined4 *)(lVar2 + 0x184) = param_5;
    *(undefined4 *)(lVar2 + 0x188) = param_6;
    local_68 = &local_78;
    local_70 = FUN_14362593a;
    local_78 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c58f9c FUN_147c58f9c body=249 status=ok
// SIG undefined FUN_147c58f9c(void)

void FUN_147c58f9c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59096(puVar2,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59096 FUN_147c59096 body=147 status=ok
// SIG undefined FUN_147c59096(void)

void FUN_147c59096(undefined8 param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x234) = *(byte *)(lVar2 + 0x234) & 0xfd | param_2 * '\x02';
    local_28 = &local_38;
    local_30 = &LAB_143625d88;
    local_38 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59136 FUN_147c59136 body=331 status=ok
// SIG undefined FUN_147c59136(void)

void FUN_147c59136(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59282(puVar3,iVar2 != 0,local_38 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59282 FUN_147c59282 body=175 status=ok
// SIG undefined FUN_147c59282(void)

void FUN_147c59282(undefined8 param_1,char param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x224) = *(byte *)(lVar2 + 0x224) & 0xfd | param_3 * '\x02';
    *(byte *)(lVar2 + 0x214) = *(byte *)(lVar2 + 0x214) & 0xfd | param_2 * '\x02';
    local_30 = &local_40;
    local_38 = &LAB_143625d72;
    local_40 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59332 FUN_147c59332 body=256 status=ok
// SIG undefined FUN_147c59332(void)

void FUN_147c59332(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59434(puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59434 FUN_147c59434 body=72 status=ok
// SIG undefined FUN_147c59434(void)

void FUN_147c59434(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_147c54a28();
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    FUN_14479d2ce(param_1);
  }
  FUN_147c54726(lVar2,param_2);
  return;
}



// FUNCTION 147c5947c FUN_147c5947c body=247 status=ok
// SIG undefined FUN_147c5947c(void)

void FUN_147c5947c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59574(puVar2,local_2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59574 FUN_147c59574 body=146 status=ok
// SIG undefined FUN_147c59574(void)

void FUN_147c59574(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined4 *)(lVar2 + 0x13c) = param_2;
    local_38 = &local_48;
    local_40 = &LAB_1436259f8;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5960e FUN_147c5960e body=249 status=ok
// SIG undefined FUN_147c5960e(void)

void FUN_147c5960e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59708(puVar2,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59708 FUN_147c59708 body=153 status=ok
// SIG undefined FUN_147c59708(void)

void FUN_147c59708(undefined8 param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  byte *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    local_40 = &local_21;
    *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0xfe | param_2;
    local_30 = &local_40;
    local_38 = &LAB_143625a0c;
    local_21 = param_2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c597a8 FUN_147c597a8 body=328 status=ok
// SIG undefined FUN_147c597a8(void)

void FUN_147c597a8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c598f2(puVar3,iVar2 != 0,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c598f2 FUN_147c598f2 body=169 status=ok
// SIG undefined FUN_147c598f2(void)

void FUN_147c598f2(undefined8 param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0x7f | param_2 << 7;
    *(undefined4 *)(lVar2 + 300) = param_3;
    local_38 = &local_48;
    local_40 = &LAB_14362597a;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5999c FUN_147c5999c body=399 status=ok
// SIG undefined FUN_147c5999c(void)

void FUN_147c5999c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c59b2c(puVar2,local_2c,local_30,local_34);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59b2c FUN_147c59b2c body=246 status=ok
// SIG undefined FUN_147c59b2c(void)

void FUN_147c59b2c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined4 *)(lVar2 + 0x1d0) = param_2;
    *(undefined4 *)(lVar2 + 0x1d4) = param_3;
    *(undefined4 *)(lVar2 + 0x1d8) = param_4;
    *(undefined4 *)(lVar2 + 0x1e0) = param_2;
    *(undefined4 *)(lVar2 + 0x1e4) = param_3;
    *(undefined4 *)(lVar2 + 0x1e8) = param_4;
    *(undefined4 *)(lVar2 + 0x1f0) = param_2;
    *(undefined4 *)(lVar2 + 500) = param_3;
    *(undefined4 *)(lVar2 + 0x1f8) = param_4;
    local_58 = &local_68;
    local_60 = &LAB_143625db4;
    local_68 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59c24 FUN_147c59c24 body=468 status=ok
// SIG undefined FUN_147c59c24(void)

void FUN_147c59c24(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_2a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
  local_2b = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  FUN_147c59dfa(puVar2,local_29,local_2a,local_2b);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59dfa FUN_147c59dfa body=188 status=ok
// SIG undefined FUN_147c59dfa(void)

void FUN_147c59dfa(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(undefined1 *)(lVar2 + 0x158) = param_2;
    *(undefined1 *)(lVar2 + 0x159) = param_3;
    *(undefined1 *)(lVar2 + 0x15a) = param_4;
    *(undefined4 *)(lVar2 + 0x154) = param_5;
    local_48 = &local_58;
    local_50 = &LAB_14362590a;
    local_58 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c59ebe FUN_147c59ebe body=400 status=ok
// SIG undefined FUN_147c59ebe(void)

void FUN_147c59ebe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5a050(puVar3,iVar2 != 0,local_38,local_39);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a050 FUN_147c5a050 body=180 status=ok
// SIG undefined FUN_147c5a050(void)

void FUN_147c5a050(undefined8 param_1,byte param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x199) = *(byte *)(lVar2 + 0x199) & 0xfe | param_2;
    *(undefined4 *)(lVar2 + 0x130) = param_3;
    *(undefined1 *)(lVar2 + 0x270) = param_4;
    local_48 = &local_58;
    local_50 = &LAB_1436259b0;
    local_58 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a118 FUN_147c5a118 body=413 status=ok
// SIG undefined FUN_147c5a118(void)

void FUN_147c5a118(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [36];
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar3 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar2 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5a2b6(puVar4,iVar3 != 0,iVar2 != 0,local_44 != 0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a2b6 FUN_147c5a2b6 body=192 status=ok
// SIG undefined FUN_147c5a2b6(void)

void FUN_147c5a2b6(undefined8 param_1,byte param_2,byte param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x1dc) = *(byte *)(lVar2 + 0x1dc) & 0xfe | param_2;
    *(byte *)(lVar2 + 0x1ec) = *(byte *)(lVar2 + 0x1ec) & 0xfe | param_3;
    *(byte *)(lVar2 + 0x1fc) = *(byte *)(lVar2 + 0x1fc) & 0xfe | param_4;
    local_38 = &local_48;
    local_40 = &LAB_143625d1a;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a378 FUN_147c5a378 body=256 status=ok
// SIG undefined FUN_147c5a378(void)

void FUN_147c5a378(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5a47a(puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a47a FUN_147c5a47a body=147 status=ok
// SIG undefined FUN_147c5a47a(void)

void FUN_147c5a47a(undefined8 param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  lVar5 = FUN_147c54a28();
  if (lVar5 != 0) {
    cVar4 = FUN_144729dda(param_1);
    if (cVar4 != '\0') {
      FUN_14479d2ce(param_1);
    }
    if ((((*(double *)(lVar5 + 0x1a0) != *param_2) ||
         (NAN(*(double *)(lVar5 + 0x1a0)) || NAN(*param_2))) ||
        (*(double *)(lVar5 + 0x1a8) != param_2[1])) ||
       (((NAN(*(double *)(lVar5 + 0x1a8)) || NAN(param_2[1]) ||
         (*(double *)(lVar5 + 0x1b0) != param_2[2])) ||
        (NAN(*(double *)(lVar5 + 0x1b0)) || NAN(param_2[2]))))) {
      *(double *)(lVar5 + 0x1b0) = param_2[2];
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(lVar5 + 0x1a0) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar5 + 0x1a4) = uVar1;
      *(undefined4 *)(lVar5 + 0x1a8) = uVar2;
      *(undefined4 *)(lVar5 + 0x1ac) = uVar3;
      FUN_146ef2e12(lVar5 + 8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147c5a514 FUN_147c5a514 body=568 status=ok
// SIG undefined FUN_147c5a514(void)

void FUN_147c5a514(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_44;
  local_58 = local_40;
  FUN_147c5a74e(puVar3,iVar2 != 0,local_38,local_3c);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a74e FUN_147c5a74e body=259 status=ok
// SIG undefined FUN_147c5a74e(void)

void FUN_147c5a74e(undefined8 param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x150) = *(byte *)(lVar2 + 0x150) & 0xfe | param_2;
    *(undefined4 *)(lVar2 + 0x140) = param_3;
    *(undefined4 *)(lVar2 + 0x144) = param_4;
    *(undefined4 *)(lVar2 + 0x148) = param_5;
    *(undefined4 *)(lVar2 + 0x14c) = param_6;
    local_68 = &local_78;
    local_70 = &LAB_14362590a;
    local_78 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5a864 FUN_147c5a864 body=413 status=ok
// SIG undefined FUN_147c5a864(void)

void FUN_147c5a864(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [36];
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar3 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar2 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5aa02(puVar4,iVar3 != 0,iVar2 != 0,local_44 != 0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5aa02 FUN_147c5aa02 body=200 status=ok
// SIG undefined FUN_147c5aa02(void)

void FUN_147c5aa02(undefined8 param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x1dc) = *(byte *)(lVar2 + 0x1dc) & 0xfd | param_2 * '\x02';
    *(byte *)(lVar2 + 0x1ec) = *(byte *)(lVar2 + 0x1ec) & 0xfd | param_3 * '\x02';
    *(byte *)(lVar2 + 0x1fc) = *(byte *)(lVar2 + 0x1fc) & 0xfd | param_4 * '\x02';
    local_38 = &local_48;
    local_40 = &LAB_143625d30;
    local_48 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5aacc FUN_147c5aacc body=256 status=ok
// SIG undefined FUN_147c5aacc(void)

void FUN_147c5aacc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5abce(puVar2,puVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5abce FUN_147c5abce body=147 status=ok
// SIG undefined FUN_147c5abce(void)

void FUN_147c5abce(undefined8 param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  lVar5 = FUN_147c54a28();
  if (lVar5 != 0) {
    cVar4 = FUN_144729dda(param_1);
    if (cVar4 != '\0') {
      FUN_14479d2ce(param_1);
    }
    if ((((*(double *)(lVar5 + 0x1b8) != *param_2) ||
         (NAN(*(double *)(lVar5 + 0x1b8)) || NAN(*param_2))) ||
        (*(double *)(lVar5 + 0x1c0) != param_2[1])) ||
       (((NAN(*(double *)(lVar5 + 0x1c0)) || NAN(param_2[1]) ||
         (*(double *)(lVar5 + 0x1c8) != param_2[2])) ||
        (NAN(*(double *)(lVar5 + 0x1c8)) || NAN(param_2[2]))))) {
      *(double *)(lVar5 + 0x1c8) = param_2[2];
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(lVar5 + 0x1b8) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar5 + 0x1bc) = uVar1;
      *(undefined4 *)(lVar5 + 0x1c0) = uVar2;
      *(undefined4 *)(lVar5 + 0x1c4) = uVar3;
      FUN_146ef2e9e(lVar5 + 8,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147c5ac68 FUN_147c5ac68 body=249 status=ok
// SIG undefined FUN_147c5ac68(void)

void FUN_147c5ac68(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5ad62(puVar2,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5ad62 FUN_147c5ad62 body=167 status=ok
// SIG undefined FUN_147c5ad62(void)

void FUN_147c5ad62(undefined8 param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    if (param_2 == '\0') {
      *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0xef;
      local_30 = &LAB_143625e86;
    }
    else {
      *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) | 0x10;
      local_30 = &LAB_143625e7c;
    }
    local_28 = &local_31;
    FUN_1407a478e(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5ae10 FUN_147c5ae10 body=249 status=ok
// SIG undefined FUN_147c5ae10(void)

void FUN_147c5ae10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5af0a(puVar2,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5af0a FUN_147c5af0a body=145 status=ok
// SIG undefined FUN_147c5af0a(void)

void FUN_147c5af0a(undefined8 param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x234) = *(byte *)(lVar2 + 0x234) & 0xfe | param_2;
    local_28 = &local_38;
    local_30 = &LAB_143625d5c;
    local_38 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5afa8 FUN_147c5afa8 body=331 status=ok
// SIG undefined FUN_147c5afa8(void)

void FUN_147c5afa8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5b0f4(puVar3,iVar2 != 0,local_38 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5b0f4 FUN_147c5b0f4 body=170 status=ok
// SIG undefined FUN_147c5b0f4(void)

void FUN_147c5b0f4(undefined8 param_1,byte param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    *(byte *)(lVar2 + 0x224) = *(byte *)(lVar2 + 0x224) & 0xfe | param_3;
    *(byte *)(lVar2 + 0x214) = *(byte *)(lVar2 + 0x214) & 0xfe | param_2;
    local_30 = &local_40;
    local_38 = &LAB_143625d46;
    local_40 = lVar2;
    FUN_147c687da(lVar2 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5b1a6 FUN_147c5b1a6 body=249 status=ok
// SIG undefined FUN_147c5b1a6(void)

void FUN_147c5b1a6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5b2a0(puVar2,local_2c != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5b2a0 FUN_147c5b2a0 body=165 status=ok
// SIG undefined FUN_147c5b2a0(void)

void FUN_147c5b2a0(undefined8 param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  bool local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_147c54a28();
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      FUN_14479d2ce(param_1);
    }
    if (param_2 == '\0') {
      *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) & 0xfd;
    }
    else {
      *(byte *)(lVar2 + 0x198) = *(byte *)(lVar2 + 0x198) | 2;
    }
    local_38 = param_2 != '\0';
    local_28 = &local_40;
    local_30 = &LAB_143625e6e;
    local_40 = lVar2;
    FUN_1407a478e(lVar2 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5b34c FUN_147c5b34c body=404 status=ok
// SIG undefined FUN_147c5b34c(void)

void FUN_147c5b34c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c5b4e2(puVar3,iVar2 != 0,local_38,local_3c);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5b4e2 FUN_147c5b4e2 body=153 status=ok
// SIG undefined FUN_147c5b4e2(void)

void FUN_147c5b4e2(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FUN_147c54a28();
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x118);
    uVar2 = *(undefined4 *)(lVar4 + 0x11c);
    cVar3 = FUN_144729dda(param_1);
    if (cVar3 != '\0') {
      FUN_14479d2ce(param_1);
    }
    FUN_147c548dc(lVar4,param_2,param_3,param_4,uVar1,uVar2);
  }
  return;
}



// FUNCTION 147c5b57e FUN_147c5b57e body=38 status=ok
// SIG undefined FUN_147c5b57e(void)

undefined8 FUN_147c5b57e(undefined8 param_1,int param_2)

{
  FUN_147c44e34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b5ae FUN_147c5b5ae body=38 status=ok
// SIG undefined FUN_147c5b5ae(void)

undefined8 FUN_147c5b5ae(undefined8 param_1,int param_2)

{
  FUN_1400d7e72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b5e2 FUN_147c5b5e2 body=45 status=ok
// SIG undefined FUN_147c5b5e2(void)

longlong FUN_147c5b5e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c3ae3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b610 FUN_147c5b610 body=48 status=ok
// SIG undefined FUN_147c5b610(void)

longlong FUN_147c5b610(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145c3ae3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b640 FUN_147c5b640 body=48 status=ok
// SIG undefined FUN_147c5b640(void)

longlong FUN_147c5b640(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145c3ae3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b670 FUN_147c5b670 body=48 status=ok
// SIG undefined FUN_147c5b670(void)

longlong FUN_147c5b670(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145c3ae3c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b6a0 FUN_147c5b6a0 body=45 status=ok
// SIG undefined FUN_147c5b6a0(void)

longlong FUN_147c5b6a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145de68fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c5b6ce FUN_147c5b6ce body=138 status=ok
// SIG undefined FUN_147c5b6ce(void)

code * FUN_147c5b6ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b758;
}



// FUNCTION 147c5b758 FUN_147c5b758 body=138 status=ok
// SIG undefined FUN_147c5b758(void)

code * FUN_147c5b758(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvDeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c00000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0d4e;
}



// FUNCTION 147c5b7e2 FUN_147c5b7e2 body=138 status=ok
// SIG undefined FUN_147c5b7e2(void)

code * FUN_147c5b7e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotationBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8400000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b86c;
}



// FUNCTION 147c5b86c FUN_147c5b86c body=138 status=ok
// SIG undefined FUN_147c5b86c(void)

code * FUN_147c5b86c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotationScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b8f6;
}



// FUNCTION 147c5b8f6 FUN_147c5b8f6 body=138 status=ok
// SIG undefined FUN_147c5b8f6(void)

code * FUN_147c5b8f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroUVParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5b980;
}



// FUNCTION 147c5b980 FUN_147c5b980 body=138 status=ok
// SIG undefined FUN_147c5b980(void)

code * FUN_147c5b980(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RemoveHMDRoll";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5ba0a;
}



// FUNCTION 147c5ba0a FUN_147c5ba0a body=138 status=ok
// SIG undefined FUN_147c5ba0a(void)

code * FUN_147c5ba0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CameraFacingBlend";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5ba94;
}



// FUNCTION 147c5ba94 FUN_147c5ba94 body=138 status=ok
// SIG undefined FUN_147c5ba94(void)

code * FUN_147c5ba94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubImageSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fa0dd6;
}



// FUNCTION 147c5bb1e FUN_147c5bb1e body=138 status=ok
// SIG undefined FUN_147c5bb1e(void)

code * FUN_147c5bb1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsSphereCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5bba8;
}



// FUNCTION 147c5bba8 FUN_147c5bba8 body=138 status=ok
// SIG undefined FUN_147c5bba8(void)

code * FUN_147c5bba8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TangentSelector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5bc32;
}



// FUNCTION 147c5bc32 FUN_147c5bc32 body=138 status=ok
// SIG undefined FUN_147c5bc32(void)

code * FUN_147c5bc32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AxisLockUp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c5bcbc;
}



// FUNCTION 147c5bcbc FUN_147c5bcbc body=132 status=ok
// SIG undefined FUN_147c5bcbc(void)

undefined1 * FUN_147c5bcbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AxisLockRight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x49;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c5bd40;
}



// FUNCTION 147c5bd7c FUN_147c5bd7c body=104 status=ok
// SIG undefined FUN_147c5bd7c(void)

undefined1 FUN_147c5bd7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
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
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147c5be0c FUN_147c5be0c body=59 status=ok
// SIG undefined FUN_147c5be0c(void)

undefined8 FUN_147c5be0c(longlong *param_1)

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



// FUNCTION 147c5bed4 FUN_147c5bed4 body=54 status=ok
// SIG undefined FUN_147c5bed4(void)

undefined1 FUN_147c5bed4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c5bfc6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147c5bf32 FUN_147c5bf32 body=59 status=ok
// SIG undefined FUN_147c5bf32(void)

undefined8 FUN_147c5bf32(longlong *param_1)

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



// FUNCTION 147c5bfc6 FUN_147c5bfc6 body=79 status=ok
// SIG undefined FUN_147c5bfc6(void)

undefined8 * FUN_147c5bfc6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147c5c016(param_1,iVar1);
      FUN_147c5c078(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147c5c016 FUN_147c5c016 body=98 status=ok
// SIG undefined FUN_147c5c016(void)

void FUN_147c5c016(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147c5c078 FUN_147c5c078 body=100 status=ok
// SIG undefined FUN_147c5c078(void)

void FUN_147c5c078(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147c5c154 FUN_147c5c154 body=76 status=ok
// SIG undefined FUN_147c5c154(void)

undefined8 FUN_147c5c154(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c5c27c(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147c5c1c8 FUN_147c5c1c8 body=59 status=ok
// SIG undefined FUN_147c5c1c8(void)

undefined8 FUN_147c5c1c8(longlong *param_1)

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



// FUNCTION 147c5c20e FUN_147c5c20e body=32 status=ok
// SIG undefined FUN_147c5c20e(void)

void FUN_147c5c20e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140790396(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147c5c27c FUN_147c5c27c body=122 status=ok
// SIG undefined FUN_147c5c27c(void)

longlong FUN_147c5c27c(longlong param_1,longlong param_2)

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
    FUN_147c5c2f6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147c5c2f6 FUN_147c5c2f6 body=202 status=ok
// SIG undefined FUN_147c5c2f6(void)

undefined8 * FUN_147c5c2f6(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140791d4e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_147c5c3c0(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147c5c3c0 FUN_147c5c3c0 body=72 status=ok
// SIG undefined FUN_147c5c3c0(void)

longlong * FUN_147c5c3c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14360b872(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 147c5c484 FUN_147c5c484 body=73 status=ok
// SIG undefined FUN_147c5c484(void)

undefined8 FUN_147c5c484(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_140cae46a(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 147c5c4fa FUN_147c5c4fa body=59 status=ok
// SIG undefined FUN_147c5c4fa(void)

undefined8 FUN_147c5c4fa(longlong *param_1)

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



// FUNCTION 147c5c540 FUN_147c5c540 body=32 status=ok
// SIG undefined FUN_147c5c540(void)

void FUN_147c5c540(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_141491f98(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147c5c5b0 FUN_147c5c5b0 body=330 status=ok
// SIG undefined FUN_147c5c5b0(void)

bool FUN_147c5c5b0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar4 = (ulonglong)DAT_14c892b48;
  if (uVar2 == uVar4) {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_9c,4);
      }
      else {
        FUN_14572512c(param_3,&local_9c);
      }
    }
    else {
      local_9c = *(undefined4 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    local_60 = 0;
    local_58 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_88 = local_9c;
    if (&local_98 != param_1) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FUN_1446dd670(param_1,0);
      }
    }
    *(undefined4 *)(param_1 + 2) = local_88;
    FUN_140308010(param_1 + 3,&local_80);
    FUN_141491f98(&local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2 == uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5c776 FUN_147c5c776 body=77 status=ok
// SIG undefined FUN_147c5c776(void)

undefined1 FUN_147c5c776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_146def7b8(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 147c5c7f0 FUN_147c5c7f0 body=59 status=ok
// SIG undefined FUN_147c5c7f0(void)

undefined8 FUN_147c5c7f0(longlong *param_1)

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



// FUNCTION 147c5c836 FUN_147c5c836 body=32 status=ok
// SIG undefined FUN_147c5c836(void)

void FUN_147c5c836(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1407b133c(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 147c5c8a6 FUN_147c5c8a6 body=339 status=ok
// SIG undefined FUN_147c5c8a6(void)

bool FUN_147c5c8a6(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar4 = (ulonglong)DAT_14c892b50;
  if (uVar2 == uVar4) {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_9c,4);
      }
      else {
        FUN_14572512c(param_3,&local_9c);
      }
    }
    else {
      local_9c = *(undefined4 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    local_60 = 0;
    local_58 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_88 = local_9c;
    if (&local_98 != param_1) {
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FUN_1446dd670(param_1,0);
      }
    }
    *(undefined4 *)(param_1 + 2) = local_88;
    FUN_147c5c9fa(param_1 + 3,&local_80);
    FUN_1407b133c(&local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2 == uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5c9fa FUN_147c5c9fa body=91 status=ok
// SIG undefined FUN_147c5c9fa(void)

longlong FUN_147c5c9fa(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140ad4010(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147c5cad2 FUN_147c5cad2 body=59 status=ok
// SIG undefined FUN_147c5cad2(void)

undefined8 FUN_147c5cad2(longlong *param_1)

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



// FUNCTION 147c5cb18 FUN_147c5cb18 body=38 status=ok
// SIG undefined FUN_147c5cb18(void)

void FUN_147c5cb18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147c5cbfa FUN_147c5cbfa body=59 status=ok
// SIG undefined FUN_147c5cbfa(void)

undefined8 FUN_147c5cbfa(longlong *param_1)

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



// FUNCTION 147c5ccf6 FUN_147c5ccf6 body=59 status=ok
// SIG undefined FUN_147c5ccf6(void)

undefined8 FUN_147c5ccf6(longlong *param_1)

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



// FUNCTION 147c5cd42 FUN_147c5cd42 body=38 status=ok
// SIG undefined FUN_147c5cd42(void)

void FUN_147c5cd42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_144760d56(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 147c5cdb8 FUN_147c5cdb8 body=93 status=ok
// SIG undefined FUN_147c5cdb8(void)

undefined8 * FUN_147c5cdb8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400d7bbd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147c5ce16(param_1,iVar1);
      FUN_147c5ce78(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147c5ce16 FUN_147c5ce16 body=98 status=ok
// SIG undefined FUN_147c5ce16(void)

void FUN_147c5ce16(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147c5ce78 FUN_147c5ce78 body=119 status=ok
// SIG undefined FUN_147c5ce78(void)

void FUN_147c5ce78(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144721d4c(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147c5cf5c FUN_147c5cf5c body=64 status=ok
// SIG undefined FUN_147c5cf5c(void)

undefined4 FUN_147c5cf5c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c5d052 FUN_147c5d052 body=84 status=ok
// SIG undefined FUN_147c5d052(void)

undefined8 FUN_147c5d052(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c5d188(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147c5d0ce FUN_147c5d0ce body=59 status=ok
// SIG undefined FUN_147c5d0ce(void)

undefined8 FUN_147c5d0ce(longlong *param_1)

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



// FUNCTION 147c5d114 FUN_147c5d114 body=37 status=ok
// SIG undefined FUN_147c5d114(void)

void FUN_147c5d114(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147c5d188 FUN_147c5d188 body=88 status=ok
// SIG undefined FUN_147c5d188(void)

undefined8 * FUN_147c5d188(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147c5d1e0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147c5d1e0 FUN_147c5d1e0 body=98 status=ok
// SIG undefined FUN_147c5d1e0(void)

void FUN_147c5d1e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147c5d2a2 FUN_147c5d2a2 body=42 status=ok
// SIG undefined FUN_147c5d2a2(void)

void FUN_147c5d2a2(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147c5fd02(param_2);
  return;
}



// FUNCTION 147c5d2e2 FUN_147c5d2e2 body=74 status=ok
// SIG undefined FUN_147c5d2e2(void)

undefined1 FUN_147c5d2e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c5d420(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147c5d354 FUN_147c5d354 body=59 status=ok
// SIG undefined FUN_147c5d354(void)

undefined8 FUN_147c5d354(longlong *param_1)

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



// FUNCTION 147c5d39a FUN_147c5d39a body=55 status=ok
// SIG undefined FUN_147c5d39a(void)

void FUN_147c5d39a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147c5fd02(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147c5d420 FUN_147c5d420 body=122 status=ok
// SIG undefined FUN_147c5d420(void)

longlong FUN_147c5d420(longlong param_1,longlong param_2)

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
    FUN_147c5d49a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147c5d49a FUN_147c5d49a body=117 status=ok
// SIG undefined FUN_147c5d49a(void)

undefined8 * FUN_147c5d49a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147c5d510(param_1,uVar1);
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



// FUNCTION 147c5d510 FUN_147c5d510 body=128 status=ok
// SIG undefined FUN_147c5d510(void)

void FUN_147c5d510(longlong param_1,int param_2)

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



// FUNCTION 147c5d5fc FUN_147c5d5fc body=59 status=ok
// SIG undefined FUN_147c5d5fc(void)

undefined8 FUN_147c5d5fc(longlong *param_1)

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



// FUNCTION 147c5d6ec FUN_147c5d6ec body=42 status=ok
// SIG undefined FUN_147c5d6ec(void)

void FUN_147c5d6ec(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147c5dc52(param_2);
  return;
}



// FUNCTION 147c5d72c FUN_147c5d72c body=54 status=ok
// SIG undefined FUN_147c5d72c(void)

undefined1 FUN_147c5d72c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c5d856(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147c5d78a FUN_147c5d78a body=59 status=ok
// SIG undefined FUN_147c5d78a(void)

undefined8 FUN_147c5d78a(longlong *param_1)

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



// FUNCTION 147c5d7d0 FUN_147c5d7d0 body=55 status=ok
// SIG undefined FUN_147c5d7d0(void)

void FUN_147c5d7d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147c5dc52(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147c5d856 FUN_147c5d856 body=122 status=ok
// SIG undefined FUN_147c5d856(void)

longlong FUN_147c5d856(longlong param_1,longlong param_2)

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
    FUN_147c5d8d0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147c5d8d0 FUN_147c5d8d0 body=117 status=ok
// SIG undefined FUN_147c5d8d0(void)

undefined8 * FUN_147c5d8d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147c5d946(param_1,uVar1);
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



// FUNCTION 147c5d946 FUN_147c5d946 body=128 status=ok
// SIG undefined FUN_147c5d946(void)

void FUN_147c5d946(longlong param_1,int param_2)

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



// FUNCTION 147c5da0c FUN_147c5da0c body=93 status=ok
// SIG undefined FUN_147c5da0c(void)

undefined1 FUN_147c5da0c(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *param_2 = lVar1;
      FUN_147c5db4c(param_2 + 1,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147c5da92 FUN_147c5da92 body=59 status=ok
// SIG undefined FUN_147c5da92(void)

undefined8 FUN_147c5da92(longlong *param_1)

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



// FUNCTION 147c5dad8 FUN_147c5dad8 body=38 status=ok
// SIG undefined FUN_147c5dad8(void)

void FUN_147c5dad8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147c5db4c FUN_147c5db4c body=79 status=ok
// SIG undefined FUN_147c5db4c(void)

undefined8 * FUN_147c5db4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147c5db9c(param_1,iVar1);
      FUN_147c5dbfe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147c5db9c FUN_147c5db9c body=98 status=ok
// SIG undefined FUN_147c5db9c(void)

void FUN_147c5db9c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147c5dbfe FUN_147c5dbfe body=82 status=ok
// SIG undefined FUN_147c5dbfe(void)

void FUN_147c5dbfe(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 147c5dc52 FUN_147c5dc52 body=54 status=ok
// SIG undefined FUN_147c5dc52(void)

void FUN_147c5dc52(longlong *param_1)

{
  FUN_147c5d946(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c5dca4 FUN_147c5dca4 body=94 status=ok
// SIG undefined FUN_147c5dca4(void)

void FUN_147c5dca4(longlong *param_1)

{
  if ((int)param_1[3] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = (longlong)&DAT_14c7585e0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c5dd02 FUN_147c5dd02 body=47 status=ok
// SIG undefined FUN_147c5dd02(void)

void FUN_147c5dd02(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147c5dd32 FUN_147c5dd32 body=348 status=ok
// SIG undefined FUN_147c5dd32(void)

void FUN_147c5dd32(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar1 = (int)param_1[1];
  uVar8 = (ulonglong)(iVar1 + (uint)(iVar1 == -1)) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar7 = 1 << ((byte)lVar3 & 0x1f);
  if ((int)param_1[3] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = (longlong)&DAT_14c7585e0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
  }
  param_1[2] = (longlong)&WOW32Reserved;
  *(uint *)(param_1 + 3) = uVar7;
  _Dst = (void *)FUN_14001cc68(0x400,0x10);
  param_1[4] = (longlong)_Dst;
  uVar6 = 0;
  lVar3 = FUN_14001cc68((ulonglong)uVar7 * 4 + (ulonglong)((ulonglong)uVar7 == 0),0x10);
  param_1[5] = lVar3;
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x400);
  if (iVar1 != 0) {
    uVar8 = 1;
    lVar3 = 0;
    do {
      uVar9 = (uint)lVar3;
      uVar7 = *(uint *)(*param_1 + 0xc + (longlong)(int)uVar9 * 0x24);
      if (*(uint *)(param_1 + 3) <= uVar9) {
        lVar2 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar5 = 1 << ((byte)lVar2 & 0x1f);
        if (uVar5 < 0x21) {
          uVar5 = 0x20;
        }
        FUN_1404b04e2(param_1 + 2,uVar5);
      }
      uVar7 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar4 = (ulonglong)((uVar7 >> 0x10 ^ uVar7) & *(uint *)((longlong)param_1 + 0x14));
      *(undefined4 *)(param_1[5] + lVar3 * 4) = *(undefined4 *)(param_1[4] + uVar4 * 4);
      *(uint *)(param_1[4] + uVar4 * 4) = uVar9;
      lVar3 = lVar3 + 1;
      uVar8 = uVar8 + 2;
    } while (iVar1 != (int)lVar3);
  }
  return;
}



// FUNCTION 147c5de8e FUN_147c5de8e body=313 status=ok
// SIG undefined FUN_147c5de8e(void)

void FUN_147c5de8e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar8 = *(uint *)((longlong)param_2 + 0xc);
  uVar6 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
  uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar6 = *(uint *)(param_1[4] + (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & uVar7) * 4);
  if (uVar6 != 0xffffffff) {
    lVar10 = *param_1;
    do {
      uVar9 = (ulonglong)(int)uVar6;
      if (*(uint *)(lVar10 + 0xc + uVar9 * 0x24) == uVar8) goto LAB_147c5df98;
      uVar6 = *(uint *)(param_1[5] + (ulonglong)uVar6 * 4);
    } while (uVar6 != 0xffffffff);
  }
  iVar3 = (int)param_1[1];
  lVar10 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147c5e058(param_1,iVar3);
  }
  lVar4 = *param_1;
  uVar5 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x24);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar10 * 0x24);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x20 + lVar10 * 0x24) = 0xffffffff;
  iVar3 = (int)param_1[1];
  uVar9 = (longlong)iVar3 - 1;
  if (*(uint *)(param_1 + 3) <= (uint)uVar9) {
    uVar11 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar10 & 0x1f);
    uVar8 = 0x20;
    if (0x20 < uVar6) {
      uVar8 = uVar6;
    }
    FUN_1404b04e2(param_1 + 2,uVar8);
  }
  uVar11 = (ulonglong)(uVar7 & *(uint *)((longlong)param_1 + 0x14));
  *(undefined4 *)(param_1[5] + (uVar9 & 0xffffffff) * 4) = *(undefined4 *)(param_1[4] + uVar11 * 4);
  *(uint *)(param_1[4] + uVar11 * 4) = (uint)uVar9;
  lVar10 = *param_1;
LAB_147c5df98:
  *(undefined4 *)(lVar10 + 0x20 + uVar9 * 0x24) = *(undefined4 *)(param_3 + 2);
  uVar5 = param_3[1];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar9 * 0x24);
  *puVar1 = *param_3;
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 147c5dfc8 FUN_147c5dfc8 body=144 status=ok
// SIG undefined FUN_147c5dfc8(void)

undefined8 * FUN_147c5dfc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  puVar1 = param_1 + 6;
  param_1[6] = 0;
  iVar2 = *(int *)(param_2 + 1);
  uVar3 = *param_2;
  *(int *)(param_1 + 7) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_147c5e230(puVar1,iVar2,0);
    FUN_147c5e292(*puVar1,uVar3,iVar2);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_147c5e180(param_1,puVar1);
  return param_1;
}



// FUNCTION 147c5e058 FUN_147c5e058 body=147 status=ok
// SIG undefined FUN_147c5e058(void)

void FUN_147c5e058(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c5e0ec FUN_147c5e0ec body=147 status=ok
// SIG undefined FUN_147c5e0ec(void)

void FUN_147c5e0ec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c5e180 FUN_147c5e180 body=175 status=ok
// SIG undefined FUN_147c5e180(void)

void FUN_147c5e180(double *param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  *param_1 = 1.79769313486232e+308;
  param_1[1] = 1.79769313486232e+308;
  param_1[2] = 1.79769313486232e+308;
  param_1[3] = -1.79769313486232e+308;
  param_1[4] = -1.79769313486232e+308;
  param_1[5] = -1.79769313486232e+308;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    dVar5 = 1.79769313486232e+308;
    dVar6 = -1.79769313486232e+308;
    lVar4 = 0;
    dVar7 = -1.79769313486232e+308;
    dVar8 = -1.79769313486232e+308;
    dVar9 = 1.79769313486232e+308;
    dVar10 = 1.79769313486232e+308;
    do {
      dVar1 = *(double *)(lVar2 + 0x20 + lVar4);
      if (dVar1 <= dVar10) {
        dVar10 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x18 + lVar4);
      if (dVar1 <= dVar9) {
        dVar9 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x10 + lVar4);
      if (dVar1 <= dVar5) {
        dVar5 = dVar1;
      }
      *param_1 = dVar5;
      param_1[1] = dVar9;
      param_1[2] = dVar10;
      dVar1 = *(double *)(lVar2 + 0x38 + lVar4);
      if (dVar8 <= dVar1) {
        dVar8 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x30 + lVar4);
      if (dVar7 <= dVar1) {
        dVar7 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x28 + lVar4);
      if (dVar6 <= dVar1) {
        dVar6 = dVar1;
      }
      param_1[3] = dVar6;
      param_1[4] = dVar7;
      param_1[5] = dVar8;
      lVar4 = lVar4 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar4);
  }
  return;
}



// FUNCTION 147c5e230 FUN_147c5e230 body=98 status=ok
// SIG undefined FUN_147c5e230(void)

void FUN_147c5e230(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147c5e292 FUN_147c5e292 body=65 status=ok
// SIG undefined FUN_147c5e292(void)

void FUN_147c5e292(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      uVar3 = ((undefined8 *)(param_2 + lVar4))[1];
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      ((undefined8 *)(param_1 + lVar4))[1] = uVar3;
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x20 + lVar4) = *(undefined8 *)(param_2 + 0x20 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x28 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x28 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x38 + lVar4) = *(undefined8 *)(param_2 + 0x38 + lVar4);
      lVar4 = lVar4 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147c5e2d4 FUN_147c5e2d4 body=96 status=ok
// SIG undefined FUN_147c5e2d4(void)

void FUN_147c5e2d4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 147c5e334 FUN_147c5e334 body=132 status=ok
// SIG undefined FUN_147c5e334(void)

void FUN_147c5e334(longlong param_1,int param_2)

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



// FUNCTION 147c5e3ba FUN_147c5e3ba body=87 status=ok
// SIG undefined FUN_147c5e3ba(void)

void FUN_147c5e3ba(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_147c5e482(param_1,param_2);
  }
  uVar2 = param_2 * 2 + 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (*(uint *)(param_1 + 0x18) < (uint)(1 << ((byte)iVar1 & 0x1f))) {
    FUN_1404b04e2(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 147c5e412 FUN_147c5e412 body=112 status=ok
// SIG undefined FUN_147c5e412(void)

void FUN_147c5e412(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147c5e482 FUN_147c5e482 body=112 status=ok
// SIG undefined FUN_147c5e482(void)

void FUN_147c5e482(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 147c5e4f2 FUN_147c5e4f2 body=130 status=ok
// SIG undefined FUN_147c5e4f2(void)

undefined8 * FUN_147c5e4f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[2] = param_2[2];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_147c5e230(param_1 + 6,iVar1,0);
    FUN_147c5e292(param_1[6],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}


