// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145053830 FUN_145053830 body=1552 status=ok
// SIG undefined FUN_145053830(void)

undefined8 FUN_145053830(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  uint local_res8 [2];
  uint local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  uint *local_128;
  undefined8 *local_118;
  undefined8 *puStack_110;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 local_a8 [13];
  
  lVar17 = *(longlong *)(param_1[1] + 0x28);
  lVar13 = (longlong)(int)param_2 * 0x60 + lVar17;
  if (-1 < *(int *)(lVar13 + 0x10)) {
    lVar17 = (longlong)*(int *)(lVar13 + 0x10) * 0x60 + lVar17;
    local_res10 = param_2;
    plVar7 = (longlong *)FUN_144cb4860(param_1[1],&local_138,*(undefined4 *)(lVar17 + 4));
    lVar12 = *plVar7;
    puVar8 = (undefined8 *)FUN_144cb4860(param_1[1],&local_118,*(undefined4 *)(lVar13 + 4));
    iVar11 = 0;
    piVar10 = (int *)*puVar8;
    iVar14 = (int)(puVar8[1] - (longlong)piVar10 >> 2);
    if (0 < iVar14) {
      lVar12 = lVar12 - (longlong)piVar10;
      do {
        if (*piVar10 != *(int *)((longlong)piVar10 + lVar12)) {
          return 0;
        }
        iVar11 = iVar11 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar11 < iVar14);
    }
    cVar5 = FUN_1450536e0(param_1,*(undefined4 *)(lVar13 + 8),*(undefined4 *)(lVar17 + 0xc));
    if ((cVar5 != '\0') &&
       (cVar5 = FUN_1450536e0(param_1,*(undefined4 *)(lVar17 + 8)), cVar5 != '\0')) {
      puVar8 = (undefined8 *)0x0;
      uVar16 = 0x80000000;
      local_148 = (undefined8 *)0x0;
      uStack_140._0_4_ = 0;
      uStack_140._4_4_ = 0x80000000;
      uVar15 = local_res10;
      uVar6 = local_res10;
      do {
        uVar20 = (uint)uStack_140 + 1;
        puVar18 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)(param_1[1] + 0x28));
        uVar9 = (ulonglong)(*puVar18 & 0x3fffffff);
        lVar12 = *(longlong *)(param_1[1] + 0x38);
        local_res8[0] = *(uint *)(lVar12 + 8 + uVar9 * 0xc);
        uVar2 = *(undefined8 *)(lVar12 + uVar9 * 0xc);
        if ((int)(uVar16 & 0x7fffffff) < (int)uVar20) {
          FUN_147e4dcf0(&local_148,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
          puVar8 = local_148;
          uVar16 = uStack_140._4_4_;
          uVar15 = local_res10;
        }
        puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)(int)(uint)uStack_140 * 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = uVar2;
          *(uint *)(puVar1 + 1) = local_res8[0];
        }
        uVar6 = puVar18[3];
        uStack_140._0_4_ = uVar20;
      } while (uVar6 != uVar15);
      uVar6 = *(uint *)(lVar13 + 0x10);
      do {
        puVar18 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)(param_1[1] + 0x28));
        uVar9 = (ulonglong)(*puVar18 & 0x3fffffff);
        lVar12 = *(longlong *)(param_1[1] + 0x38);
        local_res8[0] = (uint)uStack_140 + 1;
        lVar19 = (longlong)(int)local_res8[0];
        local_res18 = *(undefined4 *)(lVar12 + 8 + uVar9 * 0xc);
        uVar2 = *(undefined8 *)(lVar12 + uVar9 * 0xc);
        if ((int)(uVar16 & 0x7fffffff) < (int)local_res8[0]) {
          FUN_147e4dcf0(&local_148,&PTR_vftable_14c6e47a0,lVar19);
          puVar8 = local_148;
          uVar16 = uStack_140._4_4_;
        }
        puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)(int)(uint)uStack_140 * 0xc);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = uVar2;
          *(undefined4 *)(puVar1 + 1) = local_res18;
        }
        uVar6 = puVar18[3];
        uStack_140._0_4_ = local_res8[0];
      } while (uVar6 != *(uint *)(lVar13 + 0x10));
      uStack_140 = (undefined8 *)((longlong)puVar8 + lVar19 * 0xc);
      local_148 = puVar8;
      local_118 = puVar8;
      puStack_110 = uStack_140;
      FUN_145052d50(local_a8,&local_118);
      if ((-1 < (int)uVar16) && (puVar8 != (undefined8 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,puVar8,(ulonglong)(uVar16 & 0x7fffffff) * 0xc);
      }
      uVar16 = local_res10;
      local_f8 = *param_1;
      uVar6 = *(uint *)(lVar13 + 0xc);
      local_f0 = param_1 + 0xc;
      local_e0 = param_1 + 0xf;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_108 = 0;
      local_100 = 0;
      local_fc = 0x80000000;
      local_e8 = 0xffffffffffffffff;
      do {
        FUN_144cb6610(param_1[1],*(longlong *)(param_1[1] + 0x28) + (longlong)(int)uVar6 * 0x60,
                      &local_d8,&local_148);
        local_138 = *(undefined8 **)param_1[0xb];
        uStack_130 = local_138 + *(int *)((undefined8 *)param_1[0xb] + 1);
        local_res20 = local_d8;
        uStackX_24 = local_d4;
        local_res18 = (undefined4)local_148;
        uStackX_1c = local_148._4_4_;
        local_118 = local_138;
        puStack_110 = uStack_130;
        cVar5 = FUN_14504bc70(param_1[9],*param_1,&local_138,uVar6,param_1[1],
                              CONCAT44(local_d4,local_d8),local_148);
        if (cVar5 == '\0') goto LAB_145053dfa;
        local_138 = local_a8;
        local_128 = local_res8;
        uStack_130._0_4_ = SUB84(param_1,0);
        uVar3 = (undefined4)uStack_130;
        uStack_130._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uVar4 = uStack_130._4_4_;
        uStack_c0._0_4_ = (undefined4)uStack_130;
        uStack_c0._4_4_ = uStack_130._4_4_;
        uStack_130 = param_1;
        local_b8 = local_128;
        local_c8 = local_138;
        FUN_1450543a0(param_1[9],*param_1,param_1[1],uVar6,&local_c8);
        FUN_1453463f0(&local_108,param_1[9],param_1[1],uVar6);
        uVar6 = *(uint *)(*(longlong *)(param_1[1] + 0x28) + 0xc + (longlong)(int)uVar6 * 0x60);
        if (uVar6 == uVar16) {
          uVar6 = *(uint *)(lVar17 + 0xc);
        }
      } while (uVar6 != *(uint *)(lVar13 + 0x10));
      FUN_1453464a0(&local_108);
      if ((char)local_res8[0] == '\0') {
        uStack_130 = local_a8;
        local_128 = local_res8;
        local_c8._0_4_ = uVar3;
        local_c8._4_4_ = uVar4;
        local_138 = param_1;
        local_b8 = local_128;
        uStack_c0 = uStack_130;
        cVar5 = FUN_1450546b0(&local_108,&local_c8);
        local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
        if ((cVar5 != '\0') &&
           (local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,(undefined4)local_c8),
           (char)local_res8[0] == '\0')) {
          local_100 = 0;
          if ((-1 < (int)local_fc) && (local_108 != 0)) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,local_108,(ulonglong)(local_fc & 0x7fffffff) << 4);
          }
          *(undefined4 *)
           ((longlong)*(int *)(lVar13 + 8) * 0x60 + 0xc + *(longlong *)(param_1[1] + 0x28)) =
               *(undefined4 *)(lVar17 + 0xc);
          *(undefined4 *)
           ((longlong)*(int *)(lVar17 + 0xc) * 0x60 + 8 + *(longlong *)(param_1[1] + 0x28)) =
               *(undefined4 *)(lVar13 + 8);
          *(undefined4 *)
           ((longlong)*(int *)(lVar17 + 8) * 0x60 + 0xc + *(longlong *)(param_1[1] + 0x28)) =
               *(undefined4 *)(lVar13 + 0xc);
          *(undefined4 *)
           ((longlong)*(int *)(lVar13 + 0xc) * 0x60 + 8 + *(longlong *)(param_1[1] + 0x28)) =
               *(undefined4 *)(lVar17 + 8);
          lVar12 = param_1[1];
          lVar19 = (longlong)*(int *)(lVar17 + 0xc) * 0x60 + *(longlong *)(lVar12 + 0x28);
          if (*(int *)(lVar19 + 4) == *(int *)(lVar17 + 4)) {
            do {
              *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(lVar13 + 4);
              lVar12 = param_1[1];
              lVar19 = (longlong)*(int *)(lVar19 + 0xc) * 0x60 + *(longlong *)(lVar12 + 0x28);
            } while (*(int *)(lVar19 + 4) == *(int *)(lVar17 + 4));
          }
          *(undefined4 *)(*(longlong *)(lVar12 + 0x18) + (longlong)*(int *)(lVar13 + 4) * 4) =
               *(undefined4 *)(lVar13 + 0xc);
          *(undefined4 *)(*(longlong *)(param_1[1] + 0x18) + (longlong)*(int *)(lVar17 + 4) * 4) =
               0xffffffff;
          *(undefined4 *)(lVar13 + 4) = 0xffffffff;
          *(undefined4 *)(lVar17 + 4) = 0xffffffff;
          iVar11 = *(int *)(lVar13 + 0xc);
          do {
            lVar17 = *(longlong *)(param_1[1] + 0x28);
            FUN_145345880(param_1 + 2,iVar11);
            iVar11 = *(int *)((longlong)iVar11 * 0x60 + lVar17 + 0xc);
          } while (iVar11 != *(int *)(lVar13 + 0xc));
          return 1;
        }
      }
LAB_145053dfa:
      local_100 = 0;
      if ((-1 < (int)local_fc) && (local_108 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_108,(ulonglong)(local_fc & 0x7fffffff) << 4);
      }
    }
  }
  return 0;
}



// FUNCTION 145053e40 FUN_145053e40 body=1013 status=ok
// SIG undefined FUN_145053e40(void)

void FUN_145053e40(longlong *param_1,char param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  int local_res8;
  int local_res20;
  int local_68;
  int iStack_64;
  
  lVar26 = *param_1;
  iVar17 = 0;
  iVar13 = -1;
  local_res20 = -1;
  lVar15 = (param_1[1] - lVar26) / 6 + (param_1[1] - lVar26 >> 0x3f);
  iVar24 = -1;
  iVar21 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
  iVar22 = 0;
  if (param_2 == '\0') {
    iVar14 = 0x7fffff;
    if (0 < iVar21) {
      piVar16 = (int *)(lVar26 + 8);
      iVar24 = iVar13;
      do {
        iVar13 = *piVar16;
        piVar16 = piVar16 + 3;
        iVar20 = iVar22;
        if (iVar14 <= iVar13) {
          iVar20 = iVar24;
          iVar13 = iVar14;
        }
        iVar14 = iVar13;
        iVar24 = iVar20;
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar21);
    }
  }
  else {
    iVar14 = -0x7fffff;
    iVar24 = iVar13;
    if (0 < iVar21) {
      piVar16 = (int *)(lVar26 + 8);
      do {
        iVar13 = *piVar16;
        piVar16 = piVar16 + 3;
        iVar20 = iVar22;
        if (iVar13 <= iVar14) {
          iVar20 = iVar24;
          iVar13 = iVar14;
        }
        iVar14 = iVar13;
        iVar24 = iVar20;
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar21);
    }
  }
  lVar26 = *param_1;
  uVar27 = 0x1ffffffffffff;
  iVar13 = -1;
  local_res8 = -1;
  uVar18 = 0x1ffffffffffff;
  uVar19 = 1;
  iVar21 = 0;
  uVar1 = *(undefined8 *)(lVar26 + (longlong)iVar24 * 0xc);
  iVar24 = *(int *)(lVar26 + 8 + (longlong)iVar24 * 0xc);
  lVar15 = (param_1[1] - lVar26) / 6 + (param_1[1] - lVar26 >> 0x3f);
  iStack_64 = (int)((ulonglong)uVar1 >> 0x20);
  iVar22 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
  local_68 = (int)uVar1;
  if (0 < iVar22) {
    piVar16 = (int *)(lVar26 + 8);
    do {
      iVar20 = piVar16[-1] - iStack_64;
      iVar14 = piVar16[-2] - local_68;
      if (iVar14 != 0 || iVar20 != 0) {
        uVar10 = (longlong)iVar14 * (longlong)iVar14 + (longlong)iVar20 * (longlong)iVar20;
        uVar23 = (longlong)(*piVar16 - iVar24) * (longlong)(*piVar16 - iVar24);
        uVar12 = -uVar10;
        if ((longlong)-uVar10 < 0) {
          uVar12 = uVar10;
        }
        if ((longlong)uVar10 < 0) {
          uVar23 = -uVar23;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar18;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar12;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar23;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar19;
        iVar13 = local_res8;
        if ((longlong)
            (((SUB168(auVar3 * auVar7,8) - ((longlong)uVar23 >> 0x3f & uVar19)) -
             (SUB168(auVar2 * auVar6,8) - ((longlong)uVar18 >> 0x3f & uVar12))) -
            (ulonglong)(uVar19 * uVar23 < uVar12 * uVar18)) < 0) {
          uVar18 = uVar23;
          uVar19 = uVar12;
          iVar13 = iVar21;
          local_res8 = iVar21;
        }
      }
      iVar21 = iVar21 + 1;
      piVar16 = piVar16 + 3;
    } while (iVar21 < iVar22);
  }
  uVar18 = 1;
  piVar16 = (int *)(lVar26 + 8);
  lVar15 = lVar26 + (longlong)iVar13 * 0xc;
  iVar13 = *(int *)(lVar26 + (longlong)iVar13 * 0xc) - local_68;
  iVar21 = *(int *)(lVar15 + 4) - iStack_64;
  if (0 < iVar22) {
    do {
      if (piVar16[-2] - local_68 != 0 || piVar16[-1] - iStack_64 != 0) {
        lVar25 = (longlong)(piVar16[-2] - local_68);
        lVar11 = (longlong)(piVar16[-1] - iStack_64);
        if (iVar21 * lVar25 - iVar13 * lVar11 != 0) {
          uVar10 = (longlong)(*piVar16 - iVar24) * (longlong)(*piVar16 - iVar24);
          uVar12 = lVar11 * lVar11 + lVar25 * lVar25;
          uVar19 = -uVar12;
          if ((longlong)-uVar12 < 0) {
            uVar19 = uVar12;
          }
          if ((longlong)uVar12 < 0) {
            uVar10 = -uVar10;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar27;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar19;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar10;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar18;
          if ((longlong)
              (((SUB168(auVar5 * auVar9,8) - ((longlong)uVar10 >> 0x3f & uVar18)) -
               (SUB168(auVar4 * auVar8,8) - ((longlong)uVar27 >> 0x3f & uVar19))) -
              (ulonglong)(uVar18 * uVar10 < uVar27 * uVar19)) < 0) {
            uVar27 = uVar10;
            uVar18 = uVar19;
            local_res20 = iVar17;
          }
        }
      }
      iVar17 = iVar17 + 1;
      piVar16 = piVar16 + 3;
    } while (iVar17 < iVar22);
  }
  lVar11 = (longlong)local_res20;
  local_68 = *(int *)(lVar26 + lVar11 * 0xc) - local_68;
  iStack_64 = *(int *)(lVar26 + 4 + lVar11 * 0xc) - iStack_64;
  iVar17 = *(int *)(lVar26 + 8 + lVar11 * 0xc) - iVar24;
  lVar26 = (longlong)(*(int *)(lVar15 + 8) - iVar24);
  lVar15 = (longlong)iVar17 * (longlong)iVar21 - iStack_64 * lVar26;
  lVar11 = local_68 * lVar26 - (longlong)iVar17 * (longlong)iVar13;
  lVar26 = (longlong)iStack_64 * (longlong)iVar13 - (longlong)local_68 * (longlong)iVar21;
  *param_3 = lVar15;
  param_3[1] = lVar11;
  param_3[2] = lVar26;
  if (lVar26 < 0) {
    *param_3 = -lVar15;
    param_3[2] = -lVar26;
    param_3[1] = -lVar11;
  }
  return;
}



// FUNCTION 145054240 FUN_145054240 body=337 status=ok
// SIG undefined FUN_145054240(void)

void FUN_145054240(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uStackX_1c;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  puVar1 = (undefined4 *)*param_1;
  local_e8 = *(undefined8 *)(puVar1 + 6);
  uStack_e0 = *(undefined8 *)(puVar1 + 8);
  uVar2 = *(ulonglong *)(param_1[1] + 0x50);
  local_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  local_88 = *(longlong *)(puVar1 + 4);
  FUN_145048f10(param_2,&local_98,&local_e8,&local_40);
  local_e8 = *(undefined8 *)(puVar1 + 0x10);
  uStack_e0 = *(undefined8 *)(puVar1 + 0x12);
  local_c8 = *(undefined8 *)(puVar1 + 10);
  uStack_c0 = *(undefined8 *)(puVar1 + 0xc);
  local_b8 = *(undefined8 *)(puVar1 + 0xe);
  FUN_145048f10(param_2,&local_c8,&local_e8,&local_68);
  uVar7 = -local_60 - (ulonglong)(local_68 != 0);
  local_d8 = -(ulonglong)(local_60 != 0 || (ulonglong)-local_60 < (ulonglong)(local_68 != 0)) -
             local_58;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2 & 0xffffffff;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_50;
  uVar6 = local_48 * (uVar2 & 0xffffffff) + SUB168(auVar3 * auVar4,8);
  if ((local_d8 < 0) ||
     (((ulonglong)-local_68 <= local_50 * (uVar2 & 0xffffffff) ||
      ((uVar7 < uVar6 || uVar7 > uVar6) || local_d8 != 0)) &&
      (local_d8 == 0 && (uVar7 <= uVar6 || local_d8 != 0)))) {
    uStackX_1c = (undefined4)(uVar2 >> 0x20);
    local_c8 = local_40;
    uStack_c0 = uStack_38;
    local_a8 = local_20;
    uStack_b0 = uStack_28;
    uStack_ac = uStack_24;
    local_88 = local_d8;
    cVar5 = FUN_145053290(&local_c8,uStackX_1c);
    if (cVar5 != '\0') {
      return;
    }
  }
  *(undefined1 *)param_1[2] = 1;
  return;
}



// FUNCTION 1450543a0 FUN_1450543a0 body=779 status=ok
// SIG undefined FUN_1450543a0(void)

void FUN_1450543a0(longlong *param_1,longlong param_2,longlong param_3,int param_4,longlong *param_5
                  )

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  bool bVar14;
  undefined4 local_res18;
  undefined4 local_res1c;
  int local_198;
  int local_194;
  int local_190;
  int local_188;
  int local_184;
  int local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_168;
  undefined4 local_164;
  int local_158;
  int local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [56];
  
  lVar2 = *param_1;
  lVar10 = (longlong)param_4 * 0x60 + *(longlong *)(param_3 + 0x28);
  iVar1 = *(int *)(lVar10 + 0x10);
  if (iVar1 < param_4) {
    lVar8 = (longlong)param_4 * 0x20;
    piVar9 = *(int **)(lVar8 + 0x10 + lVar2);
    iVar1 = *(int *)(lVar8 + 0x18 + lVar2);
  }
  else {
    lVar8 = (longlong)iVar1 * 0x20;
    piVar9 = *(int **)(lVar8 + 0x10 + lVar2);
    iVar1 = *(int *)(lVar8 + 0x18 + lVar2);
  }
  piVar13 = piVar9 + (longlong)iVar1 * 4;
  FUN_144cb6610(param_3,lVar10,&local_168,&local_178);
  do {
    if (piVar9 == piVar13) {
      return;
    }
    if (*piVar9 == 0) {
      FUN_144cb6610(param_2,(longlong)piVar9[1] * 0x60 + *(longlong *)(param_2 + 0x28),&local_198,
                    &local_188);
      local_res18 = local_178;
      local_res1c = local_174;
      local_138 = local_168;
      local_134 = local_164;
      cVar7 = FUN_145048700(&local_198,&local_188,&local_138,&local_res18,local_60);
      if (cVar7 != '\0') {
        puVar3 = (undefined4 *)*param_5;
        local_118 = *(undefined8 *)(puVar3 + 6);
        uStack_110 = *(undefined8 *)(puVar3 + 8);
        uVar4 = *(ulonglong *)(param_5[1] + 0x50);
        local_a8 = *puVar3;
        uStack_a4 = puVar3[1];
        uStack_a0 = puVar3[2];
        uStack_9c = puVar3[3];
        local_98 = *(undefined8 *)(puVar3 + 4);
        local_120 = uVar4;
        FUN_145048f10(local_60,&local_a8,&local_118,&local_88);
        local_118 = *(undefined8 *)(puVar3 + 0x10);
        uStack_110 = *(undefined8 *)(puVar3 + 0x12);
        local_108 = *(undefined8 *)(puVar3 + 10);
        uStack_100 = *(undefined8 *)(puVar3 + 0xc);
        local_f8 = *(undefined8 *)(puVar3 + 0xe);
        FUN_145048f10(local_60,&local_108,&local_118,&local_d8);
        uVar12 = -local_d0 - (ulonglong)(local_d8 != 0);
        lVar2 = -(ulonglong)(local_d0 != 0 || (ulonglong)-local_d0 < (ulonglong)(local_d8 != 0));
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar4 & 0xffffffff;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_c0;
        uVar11 = local_b8 * (uVar4 & 0xffffffff) + SUB168(auVar5 * auVar6,8);
        if (lVar2 - local_c8 < 0) {
LAB_145054590:
          local_108 = local_88;
          uStack_100 = uStack_80;
          local_e8 = local_68;
          local_f8 = CONCAT44(uStack_74,local_78);
          uStack_f0 = uStack_70;
          uStack_ec = uStack_6c;
          cVar7 = FUN_145053290(&local_108,local_120._4_4_);
          if (cVar7 != '\0') goto LAB_1450545c2;
        }
        else {
          bVar14 = uVar11 < uVar12;
          if (local_c0 * (uVar4 & 0xffffffff) < (ulonglong)-local_d8) {
            bVar14 = uVar11 <= uVar12 && !bVar14 || bVar14;
          }
          if (!(bool)(lVar2 != local_c8 | bVar14 & lVar2 == local_c8)) goto LAB_145054590;
        }
        *(undefined1 *)param_5[2] = 1;
      }
LAB_1450545c2:
      FUN_144cb6610(param_2,(longlong)
                            *(int *)((longlong)piVar9[1] * 0x60 + 0x10 +
                                    *(longlong *)(param_2 + 0x28)) * 0x60 +
                            *(longlong *)(param_2 + 0x28),&local_148,&local_158);
      if ((((local_198 != local_158) || (local_194 != local_154)) || (local_190 != local_150)) ||
         (((local_188 != local_148 || (local_184 != local_144)) || (local_180 != local_140)))) {
        local_130 = local_178;
        local_12c = local_174;
        local_128 = local_168;
        local_124 = local_164;
        cVar7 = FUN_145048700(&local_148,&local_158,&local_128,&local_130,local_60);
        if (cVar7 != '\0') {
          FUN_145054240(param_5,local_60);
        }
      }
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 1450546b0 FUN_1450546b0 body=2536 status=ok
// SIG undefined FUN_1450546b0(void)

undefined8 FUN_1450546b0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  char cVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int *piVar31;
  int iVar32;
  uint *puVar33;
  int *piVar34;
  undefined4 uStackX_c;
  undefined4 uStackX_1c;
  int local_118;
  int local_114;
  undefined4 local_110;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_98;
  int iStack_94;
  int local_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  plVar3 = (longlong *)param_1[5];
  iVar24 = *(int *)(param_1[2] + 0x30);
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar24) {
    FUN_145052b40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar32 = (int)plVar3[1];
  if (iVar32 < iVar24) {
    *(int *)(plVar3 + 1) = iVar24;
    if (0 < iVar24 - iVar32) {
      uVar15 = (ulonglong)(uint)(iVar24 - iVar32);
      puVar19 = (undefined4 *)(*plVar3 + (longlong)iVar32 * 4);
      do {
        if (puVar19 != (undefined4 *)0x0) {
          *puVar19 = 0xffffffff;
        }
        uVar15 = uVar15 - 1;
        puVar19 = puVar19 + 1;
      } while (uVar15 != 0);
    }
  }
  else if (iVar24 < iVar32) {
    *(int *)(plVar3 + 1) = iVar24;
  }
  piVar34 = (int *)*param_1;
  local_d8 = piVar34 + (longlong)*(int *)(param_1 + 1) * 4;
  if (piVar34 != local_d8) {
    do {
      if (*piVar34 == 0) {
        iVar24 = piVar34[2];
        iVar32 = piVar34[1];
        iVar23 = iVar24;
        if (iVar24 <= iVar32) {
          iVar23 = iVar32;
        }
        lVar17 = (longlong)iVar23 * 4;
        if (*(int *)(lVar17 + *(longlong *)param_1[5]) == -1) {
          plVar3 = (longlong *)param_1[3];
          iVar18 = *(int *)((longlong)param_1 + 0x24);
          uStack_7c = CONCAT31(uStack_7c._1_3_,iVar24 <= iVar32);
          iVar24 = (int)plVar3[2];
          local_80 = iVar23;
          if (iVar24 == -1) {
            iVar24 = (int)plVar3[1];
            iVar32 = iVar24 + 1;
            if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar32) {
              FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar32);
            }
            *(int *)(plVar3 + 1) = iVar32;
          }
          else {
            *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar24 * 0x10);
          }
          lVar27 = (longlong)iVar24;
          *(ulonglong *)(*plVar3 + lVar27 * 0x10) = CONCAT44(uStack_7c,local_80);
          if (iVar18 == -1) {
            iVar32 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 4) = iVar24;
            *(undefined4 *)(*plVar3 + 8 + lVar27 * 0x10) = 0xffffffff;
          }
          else {
            lVar16 = (longlong)iVar18 * 0x10 + *plVar3;
            iVar32 = *(int *)(lVar16 + 0xc);
            *(int *)(lVar16 + 0xc) = iVar24;
            *(int *)(*plVar3 + 8 + lVar27 * 0x10) = iVar18;
          }
          if (iVar32 == -1) {
            *(int *)((longlong)param_1 + 0x24) = iVar24;
            *(undefined4 *)(*plVar3 + 0xc + lVar27 * 0x10) = 0xffffffff;
          }
          else {
            *(int *)(*plVar3 + 0xc + lVar27 * 0x10) = iVar32;
            *(int *)(*plVar3 + 8 + (longlong)iVar32 * 0x10) = iVar24;
          }
          *(int *)(lVar17 + *(longlong *)param_1[5]) = iVar24;
        }
        else {
          FUN_14504f070(param_1[3],param_1 + 4);
          *(undefined4 *)(lVar17 + *(longlong *)param_1[5]) = 0xffffffff;
        }
      }
      else if (*piVar34 == 1) {
        uVar26 = piVar34[1];
        lVar17 = *(longlong *)(param_1[2] + 0x28);
        local_88 = (longlong)(int)uVar26 * 0x60;
        puVar22 = (uint *)(lVar17 + local_88);
        FUN_144cb6610(param_1[2],(longlong)*(int *)(lVar17 + 8 + local_88) * 0x60 + lVar17,&local_f0
                      ,&local_118);
        iVar24 = (int)local_f0 - local_118;
        iVar32 = local_f0._4_4_ - local_114;
        uVar15 = *(ulonglong *)(*param_2 + 0x50);
        local_98 = local_118;
        puVar19 = (undefined4 *)param_2[1];
        iStack_94 = local_114;
        local_c8 = *(undefined8 *)(puVar19 + 6);
        uStack_c0 = *(undefined8 *)(puVar19 + 8);
        local_108 = local_118;
        uVar4 = *(undefined8 *)
                 (**(longlong **)(*param_2 + 0x58) + (ulonglong)(*puVar22 & 0x3fffffff) * 8);
        local_b8 = *puVar19;
        uStack_b4 = puVar19[1];
        uStack_b0 = puVar19[2];
        uStack_ac = puVar19[3];
        local_a8 = *(undefined8 *)(puVar19 + 4);
        local_100 = (undefined4)uVar4;
        local_e0 = uVar15;
        FUN_145048e20(&local_108,&local_b8,&local_c8,&local_60);
        local_c8 = *(undefined8 *)(puVar19 + 0x10);
        uStack_c0 = *(undefined8 *)(puVar19 + 0x12);
        uStackX_c = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_b8 = puVar19[10];
        uStack_b4 = puVar19[0xb];
        uStack_b0 = puVar19[0xc];
        uStack_ac = puVar19[0xd];
        local_a8 = *(undefined8 *)(puVar19 + 0xe);
        local_f4 = uStackX_c;
        FUN_145048e20(&local_fc,&local_b8,&local_c8,&local_78);
        uVar15 = uVar15 & 0xffffffff;
        uVar29 = -(ulonglong)(local_78 != 0) - local_70;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_68;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
        uVar20 = SUB168(auVar5 * auVar9,8);
        if (((longlong)uVar29 < 0) ||
           (uVar29 <= uVar20 &&
            (-local_78 <= local_68 * uVar15 || (uVar29 < uVar20 || uVar29 > uVar20)))) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_50;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_e0 >> 0x20;
          uVar15 = SUB168(auVar6 * auVar10,8);
          if ((-1 < (longlong)local_58) &&
             (uVar15 < local_58 ||
              local_50 * (local_e0 >> 0x20) < local_60 && (uVar15 <= local_58 && uVar15 >= local_58)
             )) goto LAB_145054918;
        }
        else {
LAB_145054918:
          *(undefined1 *)param_2[2] = 1;
        }
        bVar25 = false;
        uVar15 = (ulonglong)uVar26;
        if (uVar26 != piVar34[2]) {
          do {
            piVar31 = (int *)(param_1 + 4);
            local_e0 = local_88 + *(longlong *)(param_1[2] + 0x28);
            iVar23 = *(int *)(local_e0 + 0x10);
            if (iVar23 < 0) {
              iVar24 = *piVar31;
              while (iVar24 != -1) {
                lVar27 = (longlong)iVar24;
                *(undefined4 *)
                 (*(longlong *)param_1[5] +
                 (longlong)*(int *)(*(longlong *)param_1[3] + lVar27 * 0x10) * 4) = 0xffffffff;
                plVar3 = (longlong *)param_1[3];
                lVar17 = *plVar3;
                iVar32 = *(int *)(lVar17 + 8 + lVar27 * 0x10);
                iVar23 = *(int *)(lVar17 + 0xc + lVar27 * 0x10);
                if (iVar32 == -1) {
                  *piVar31 = iVar23;
                }
                else {
                  *(int *)(lVar17 + 0xc + (longlong)iVar32 * 0x10) = iVar23;
                }
                iVar32 = *(int *)(lVar17 + 0xc + lVar27 * 0x10);
                uVar2 = *(undefined4 *)(lVar17 + 8 + lVar27 * 0x10);
                if (iVar32 == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                }
                else {
                  *(undefined4 *)(*plVar3 + 8 + (longlong)iVar32 * 0x10) = uVar2;
                }
                *(int *)(lVar17 + 0xc + lVar27 * 0x10) = (int)plVar3[2];
                *(int *)(plVar3 + 2) = iVar24;
                iVar24 = *piVar31;
              }
              return 0;
            }
            iVar28 = (int)uVar15;
            piVar31 = (int *)(param_1 + 4);
            iVar18 = iVar23;
            if (iVar23 <= iVar28) {
              iVar18 = iVar28;
            }
            lVar17 = (longlong)iVar18 * 4;
            if (*(int *)(lVar17 + *(longlong *)param_1[5]) == -1) {
              plVar3 = (longlong *)param_1[3];
              iVar1 = *(int *)((longlong)param_1 + 0x24);
              uStack_8c = CONCAT31(uStack_8c._1_3_,iVar23 <= iVar28);
              iVar23 = (int)plVar3[2];
              local_90 = iVar18;
              if (iVar23 == -1) {
                iVar23 = (int)plVar3[1];
                if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar23 + 1) {
                  FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)(iVar23 + 1));
                }
                *(int *)(plVar3 + 1) = iVar23 + 1;
              }
              else {
                *(undefined4 *)(plVar3 + 2) =
                     *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar23 * 0x10);
              }
              lVar27 = (longlong)iVar23;
              *(ulonglong *)(*plVar3 + lVar27 * 0x10) = CONCAT44(uStack_8c,local_90);
              if (iVar1 == -1) {
                iVar18 = *piVar31;
                *piVar31 = iVar23;
                *(undefined4 *)(*plVar3 + 8 + lVar27 * 0x10) = 0xffffffff;
              }
              else {
                lVar16 = (longlong)iVar1 * 0x10 + *plVar3;
                iVar18 = *(int *)(lVar16 + 0xc);
                *(int *)(lVar16 + 0xc) = iVar23;
                *(int *)(*plVar3 + 8 + lVar27 * 0x10) = iVar1;
              }
              if (iVar18 == -1) {
                *(int *)((longlong)param_1 + 0x24) = iVar23;
                *(undefined4 *)(*plVar3 + 0xc + lVar27 * 0x10) = 0xffffffff;
              }
              else {
                *(int *)(*plVar3 + 0xc + lVar27 * 0x10) = iVar18;
                *(int *)(*plVar3 + 8 + (longlong)iVar18 * 0x10) = iVar23;
              }
              *(int *)(lVar17 + *(longlong *)param_1[5]) = iVar23;
            }
            else {
              FUN_14504f070(param_1[3],piVar31);
              *(undefined4 *)(lVar17 + *(longlong *)param_1[5]) = 0xffffffff;
            }
            lVar17 = *(longlong *)(param_1[2] + 0x28);
            iVar23 = *(int *)((longlong)*(int *)(local_e0 + 0x10) * 0x60 + 0xc + lVar17);
            uVar15 = (ulonglong)iVar23;
            local_88 = uVar15 * 0x60;
            uVar20 = (ulonglong)
                     (*(uint *)((longlong)*(int *)(local_88 + 0xc + lVar17) * 0x60 + lVar17) &
                     0x3fffffff);
            lVar17 = *(longlong *)(param_1[2] + 0x38);
            local_f0 = *(undefined8 *)(lVar17 + uVar20 * 0xc);
            local_e8 = *(undefined4 *)(lVar17 + 8 + uVar20 * 0xc);
            iVar18 = (int)((ulonglong)local_f0 >> 0x20) - local_114;
            lVar17 = (longlong)((int)local_f0 - local_118) * (longlong)iVar32 -
                     (longlong)iVar18 * (longlong)iVar24;
            uVar26 = (uint)(lVar17 >> 0x3f) | (uint)(lVar17 != 0);
            if (((int)uVar26 < 0) ||
               ((uVar26 == 0 &&
                ((longlong)((int)local_f0 - local_118) * (longlong)iVar24 +
                 (longlong)iVar18 * (longlong)iVar32 < 0)))) {
              bVar13 = true;
            }
            else {
              bVar13 = false;
              if (bVar25) {
                iVar24 = *piVar31;
                if (iVar24 == -1) {
                  return 0;
                }
                do {
                  lVar27 = (longlong)iVar24;
                  *(undefined4 *)
                   (*(longlong *)param_1[5] +
                   (longlong)*(int *)(*(longlong *)param_1[3] + lVar27 * 0x10) * 4) = 0xffffffff;
                  plVar3 = (longlong *)param_1[3];
                  lVar17 = *plVar3;
                  iVar32 = *(int *)(lVar17 + 8 + lVar27 * 0x10);
                  iVar23 = *(int *)(lVar17 + 0xc + lVar27 * 0x10);
                  if (iVar32 == -1) {
                    *piVar31 = iVar23;
                  }
                  else {
                    *(int *)(lVar17 + 0xc + (longlong)iVar32 * 0x10) = iVar23;
                  }
                  iVar32 = *(int *)(lVar17 + 0xc + lVar27 * 0x10);
                  uVar2 = *(undefined4 *)(lVar17 + 8 + lVar27 * 0x10);
                  if (iVar32 == -1) {
                    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                  }
                  else {
                    *(undefined4 *)(*plVar3 + 8 + (longlong)iVar32 * 0x10) = uVar2;
                  }
                  *(int *)(lVar17 + 0xc + lVar27 * 0x10) = (int)plVar3[2];
                  *(int *)(plVar3 + 2) = iVar24;
                  iVar24 = *piVar31;
                } while (iVar24 != -1);
                return 0;
              }
            }
            bVar25 = bVar13;
          } while (iVar23 != piVar34[2]);
        }
      }
      piVar34 = piVar34 + 4;
    } while (piVar34 != local_d8);
  }
  iVar24 = *(int *)(param_1 + 4);
  if (iVar24 != -1) {
    lVar17 = *param_2;
    puVar19 = (undefined4 *)param_2[1];
    do {
      plVar3 = (longlong *)param_1[3];
      puVar21 = (undefined8 *)((longlong)iVar24 * 0x10 + *plVar3);
      local_d8 = (int *)*puVar21;
      if (*(int *)(puVar21 + 1) == -1) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)puVar21 + 0xc);
      }
      else {
        *(undefined4 *)(*plVar3 + 0xc + (longlong)*(int *)(puVar21 + 1) * 0x10) =
             *(undefined4 *)((longlong)puVar21 + 0xc);
      }
      if (*(int *)((longlong)puVar21 + 0xc) == -1) {
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(puVar21 + 1);
      }
      else {
        *(undefined4 *)(*plVar3 + 8 + (longlong)*(int *)((longlong)puVar21 + 0xc) * 0x10) =
             *(undefined4 *)(puVar21 + 1);
      }
      *(int *)((longlong)puVar21 + 0xc) = (int)plVar3[2];
      *(int *)(plVar3 + 2) = iVar24;
      *(undefined4 *)(*(longlong *)param_1[5] + (longlong)(int)local_d8 * 4) = 0xffffffff;
      lVar27 = *(longlong *)(param_1[2] + 0x28);
      puVar33 = (uint *)((longlong)(int)local_d8 * 0x60 + lVar27);
      puVar22 = puVar33;
      if ((char)((ulonglong)local_d8 >> 0x20) != '\0') {
        puVar22 = (uint *)((longlong)(int)puVar33[3] * 0x60 + lVar27);
      }
      local_b8 = *puVar19;
      uStack_b4 = puVar19[1];
      uStack_b0 = puVar19[2];
      uStack_ac = puVar19[3];
      uVar15 = *(ulonglong *)(lVar17 + 0x50);
      local_fc = *(undefined8 *)
                  (*(longlong *)(param_1[2] + 0x38) + (ulonglong)(*puVar22 & 0x3fffffff) * 0xc);
      local_c8 = *(undefined8 *)(puVar19 + 6);
      uStack_c0 = *(undefined8 *)(puVar19 + 8);
      iVar24 = (int)local_fc;
      local_a8 = *(undefined8 *)(puVar19 + 4);
      uVar4 = *(undefined8 *)
               (**(longlong **)(lVar17 + 0x58) + (ulonglong)(*puVar22 & 0x3fffffff) * 8);
      iVar32 = (int)((ulonglong)local_fc >> 0x20);
      local_108 = (int)local_fc;
      local_100 = (undefined4)uVar4;
      local_104 = iVar32;
      FUN_145048e20(&local_108,&local_b8,&local_c8,&local_78);
      local_c8 = *(undefined8 *)(puVar19 + 0x10);
      uStack_c0 = *(undefined8 *)(puVar19 + 0x12);
      uStackX_1c = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_b8 = puVar19[10];
      uStack_b4 = puVar19[0xb];
      uStack_b0 = puVar19[0xc];
      uStack_ac = puVar19[0xd];
      local_118 = iVar24;
      local_a8 = *(undefined8 *)(puVar19 + 0xe);
      local_110 = uStackX_1c;
      local_114 = iVar32;
      FUN_145048e20(&local_118,&local_b8,&local_c8,&local_60);
      uVar20 = uVar15 & 0xffffffff;
      uVar30 = -(ulonglong)(local_60 != 0) - local_58;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_50;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar20;
      uVar29 = SUB168(auVar7 * auVar11,8);
      if (((longlong)uVar30 < 0) ||
         (uVar30 <= uVar29 &&
          (-local_60 <= local_50 * uVar20 || (uVar30 < uVar29 || uVar30 > uVar29)))) {
        uVar15 = uVar15 >> 0x20;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_68;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar15;
        uVar20 = SUB168(auVar8 * auVar12,8);
        if ((-1 < (longlong)local_70) &&
           (uVar20 < local_70 ||
            local_68 * uVar15 < local_78 && (uVar20 <= local_70 && uVar20 >= local_70)))
        goto LAB_145054ffb;
      }
      else {
LAB_145054ffb:
        *(undefined1 *)param_2[2] = 1;
      }
      if (local_d8._4_1_ == '\0') {
        cVar14 = FUN_1453468f0(param_1,puVar33);
        if ((cVar14 == '\0') && (-1 < (int)puVar33[4])) {
          FUN_1453466e0(param_1,(longlong)(int)puVar33[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      else {
        cVar14 = FUN_1453466e0();
        if ((cVar14 == '\0') && (-1 < (int)puVar33[4])) {
          FUN_1453468f0(param_1,(longlong)(int)puVar33[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      iVar24 = *(int *)(param_1 + 4);
    } while (iVar24 != -1);
  }
  return 1;
}



// FUNCTION 1450550a0 FUN_1450550a0 body=479 status=ok
// SIG undefined FUN_1450550a0(void)

void FUN_1450550a0(longlong *param_1,longlong param_2,longlong param_3,int param_4,
                  undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_res18 [2];
  uint local_res20 [2];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [64];
  
  lVar2 = *param_1;
  lVar6 = (longlong)param_4 * 0x60 + *(longlong *)(param_3 + 0x28);
  iVar1 = *(int *)(lVar6 + 0x10);
  if (iVar1 < param_4) {
    lVar7 = (longlong)param_4 * 0x20;
    piVar4 = *(int **)(lVar7 + 0x10 + lVar2);
    iVar1 = *(int *)(lVar7 + 0x18 + lVar2);
  }
  else {
    lVar7 = (longlong)iVar1 * 0x20;
    piVar4 = *(int **)(lVar7 + 0x10 + lVar2);
    iVar1 = *(int *)(lVar7 + 0x18 + lVar2);
  }
  piVar5 = piVar4 + (longlong)iVar1 * 4;
  FUN_144cb6610(param_3,lVar6,&local_a8,&local_b8);
  for (; piVar4 != piVar5; piVar4 = piVar4 + 4) {
    if (*piVar4 == 0) {
      FUN_144cb6610(param_2,(longlong)piVar4[1] * 0x60 + *(longlong *)(param_2 + 0x28),&local_d8,
                    &local_c8);
      local_78 = local_b8;
      local_74 = local_b4;
      local_70 = local_a8;
      local_6c = local_a4;
      cVar3 = FUN_145048700(&local_d8,&local_c8,&local_70,&local_78,local_58);
      if (cVar3 != '\0') {
        FUN_1450530c0(*param_5,local_res20,local_58);
        if (*(uint *)param_5[1] < local_res20[0]) {
          *(uint *)param_5[1] = local_res20[0];
        }
      }
      FUN_144cb6610(param_2,(longlong)
                            *(int *)((longlong)piVar4[1] * 0x60 + 0x10 +
                                    *(longlong *)(param_2 + 0x28)) * 0x60 +
                            *(longlong *)(param_2 + 0x28),&local_88,&local_98);
      if ((((local_d8 != local_98) || (local_d4 != local_94)) || (local_d0 != local_90)) ||
         (((local_c8 != local_88 || (local_c4 != local_84)) || (local_c0 != local_80)))) {
        local_68 = local_b8;
        local_64 = local_b4;
        local_60 = local_a8;
        local_5c = local_a4;
        cVar3 = FUN_145048700(&local_88,&local_98,&local_60,&local_68,local_58);
        if (cVar3 != '\0') {
          FUN_1450530c0(*param_5,local_res18,local_58);
          if (*(uint *)param_5[1] < local_res18[0]) {
            *(uint *)param_5[1] = local_res18[0];
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145055280 FUN_145055280 body=2134 status=ok
// SIG undefined FUN_145055280(void)

undefined8 FUN_145055280(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  undefined8 local_res8;
  longlong *local_res10;
  uint local_res18 [2];
  uint local_res20;
  int iStackX_24;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  uint local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  ulonglong local_90;
  int *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  uint local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  
  plVar4 = (longlong *)param_1[5];
  iVar15 = *(int *)(param_1[2] + 0x30);
  local_res10 = param_2;
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar15) {
    FUN_145052b40(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar15);
  }
  iVar22 = (int)plVar4[1];
  if (iVar22 < iVar15) {
    *(int *)(plVar4 + 1) = iVar15;
    if (0 < iVar15 - iVar22) {
      uVar7 = (ulonglong)(uint)(iVar15 - iVar22);
      puVar11 = (undefined4 *)(*plVar4 + (longlong)iVar22 * 4);
      do {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0xffffffff;
        }
        uVar7 = uVar7 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (iVar15 < iVar22) {
    *(int *)(plVar4 + 1) = iVar15;
  }
  piVar23 = (int *)*param_1;
  local_60 = piVar23 + (longlong)*(int *)(param_1 + 1) * 4;
  local_88 = piVar23;
  if (piVar23 != local_60) {
    do {
      local_88 = piVar23;
      if (*piVar23 == 0) {
        iVar15 = piVar23[2];
        iVar22 = piVar23[1];
        iVar14 = iVar15;
        if (iVar15 <= iVar22) {
          iVar14 = iVar22;
        }
        lVar8 = (longlong)iVar14 * 4;
        if (*(int *)(*(longlong *)param_1[5] + lVar8) == -1) {
          plVar4 = (longlong *)param_1[3];
          iVar18 = *(int *)((longlong)param_1 + 0x24);
          local_78 = CONCAT44(CONCAT31(local_78._5_3_,iVar15 <= iVar22),iVar14);
          iVar15 = (int)plVar4[2];
          if (iVar15 == -1) {
            iVar15 = (int)plVar4[1];
            iVar22 = iVar15 + 1;
            if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar22) {
              FUN_145052c40(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar22);
            }
            *(int *)(plVar4 + 1) = iVar22;
            piVar23 = local_88;
          }
          else {
            *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(*plVar4 + 0xc + (longlong)iVar15 * 0x10);
          }
          lVar19 = (longlong)iVar15;
          *(undefined8 *)(*plVar4 + lVar19 * 0x10) = local_78;
          if (iVar18 == -1) {
            iVar22 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 4) = iVar15;
            *(undefined4 *)(*plVar4 + 8 + lVar19 * 0x10) = 0xffffffff;
          }
          else {
            lVar9 = (longlong)iVar18 * 0x10 + *plVar4;
            iVar22 = *(int *)(lVar9 + 0xc);
            *(int *)(lVar9 + 0xc) = iVar15;
            *(int *)(*plVar4 + 8 + lVar19 * 0x10) = iVar18;
          }
          if (iVar22 == -1) {
            *(int *)((longlong)param_1 + 0x24) = iVar15;
            *(undefined4 *)(*plVar4 + 0xc + lVar19 * 0x10) = 0xffffffff;
          }
          else {
            *(int *)(*plVar4 + 0xc + lVar19 * 0x10) = iVar22;
            *(int *)(*plVar4 + 8 + (longlong)iVar22 * 0x10) = iVar15;
          }
          *(int *)(*(longlong *)param_1[5] + lVar8) = iVar15;
          param_2 = local_res10;
        }
        else {
          FUN_14504f070(param_1[3],param_1 + 4);
          *(undefined4 *)(*(longlong *)param_1[5] + lVar8) = 0xffffffff;
          param_2 = local_res10;
        }
      }
      else if (*piVar23 == 1) {
        local_90 = CONCAT44(local_90._4_4_,piVar23[1]);
        lVar8 = *(longlong *)(param_1[2] + 0x28);
        local_80 = (longlong)piVar23[1] * 0x60;
        puVar1 = (uint *)(local_80 + lVar8);
        FUN_144cb6610(param_1[2],(longlong)*(int *)(local_80 + 8 + lVar8) * 0x60 + lVar8,&local_70,
                      &local_b8);
        iVar15 = (int)local_70 - local_b8;
        local_58 = local_b8;
        iVar22 = local_70._4_4_ - local_b4;
        iStack_54 = local_b4;
        local_a8 = local_b8;
        local_res8 = *(ulonglong *)
                      (**(longlong **)(*param_2 + 0x58) + (ulonglong)(*puVar1 & 0x3fffffff) * 8);
        local_a0 = (undefined4)local_res8;
        FUN_145052f40(param_2[1],local_res18,&local_a8);
        local_94 = local_res8._4_4_;
        FUN_145052f40(param_2[1],&local_res20,&local_9c);
        puVar1 = (uint *)param_2[2];
        uVar10 = *puVar1;
        if (*puVar1 < local_res18[0]) {
          *puVar1 = local_res18[0];
          uVar10 = local_res18[0];
        }
        if (uVar10 < local_res20) {
          *puVar1 = local_res20;
        }
        cVar5 = '\0';
        uVar7 = local_90 & 0xffffffff;
        local_res8 = local_res8 & 0xffffffffffffff00;
        piVar23 = local_88;
        if ((int)local_90 != local_88[2]) {
          do {
            piVar21 = (int *)(param_1 + 4);
            local_80 = local_80 + *(longlong *)(param_1[2] + 0x28);
            iVar14 = *(int *)(local_80 + 0x10);
            if (iVar14 < 0) {
              iVar15 = *piVar21;
              while (iVar15 != -1) {
                lVar19 = (longlong)iVar15;
                *(undefined4 *)
                 (*(longlong *)param_1[5] +
                 (longlong)*(int *)(*(longlong *)param_1[3] + lVar19 * 0x10) * 4) = 0xffffffff;
                plVar4 = (longlong *)param_1[3];
                lVar8 = *plVar4;
                iVar22 = *(int *)(lVar8 + 8 + lVar19 * 0x10);
                iVar14 = *(int *)(lVar8 + 0xc + lVar19 * 0x10);
                if (iVar22 == -1) {
                  *piVar21 = iVar14;
                }
                else {
                  *(int *)(lVar8 + 0xc + (longlong)iVar22 * 0x10) = iVar14;
                }
                iVar22 = *(int *)(lVar8 + 0xc + lVar19 * 0x10);
                uVar3 = *(undefined4 *)(lVar8 + 8 + lVar19 * 0x10);
                if (iVar22 == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
                }
                else {
                  *(undefined4 *)(*plVar4 + 8 + (longlong)iVar22 * 0x10) = uVar3;
                }
                *(int *)(lVar8 + 0xc + lVar19 * 0x10) = (int)plVar4[2];
                *(int *)(plVar4 + 2) = iVar15;
                iVar15 = *piVar21;
              }
              return 0;
            }
            iVar20 = (int)uVar7;
            piVar21 = (int *)(param_1 + 4);
            iVar18 = iVar14;
            if (iVar14 <= iVar20) {
              iVar18 = iVar20;
            }
            local_90 = (longlong)iVar18 * 4;
            if (*(int *)(local_90 + *(longlong *)param_1[5]) == -1) {
              plVar4 = (longlong *)param_1[3];
              iVar2 = *(int *)((longlong)param_1 + 0x24);
              uStack_4c = CONCAT31(uStack_4c._1_3_,iVar14 <= iVar20);
              iVar14 = (int)plVar4[2];
              local_50 = iVar18;
              if (iVar14 == -1) {
                iVar14 = (int)plVar4[1];
                if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar14 + 1) {
                  FUN_145052c40(plVar4,&PTR_vftable_14c6e47a0,(longlong)(iVar14 + 1));
                }
                *(int *)(plVar4 + 1) = iVar14 + 1;
              }
              else {
                *(undefined4 *)(plVar4 + 2) =
                     *(undefined4 *)(*plVar4 + 0xc + (longlong)iVar14 * 0x10);
              }
              lVar8 = (longlong)iVar14;
              *(ulonglong *)(*plVar4 + lVar8 * 0x10) = CONCAT44(uStack_4c,local_50);
              if (iVar2 == -1) {
                iVar18 = *piVar21;
                *piVar21 = iVar14;
                *(undefined4 *)(*plVar4 + 8 + lVar8 * 0x10) = 0xffffffff;
              }
              else {
                lVar19 = (longlong)iVar2 * 0x10 + *plVar4;
                iVar18 = *(int *)(lVar19 + 0xc);
                *(int *)(lVar19 + 0xc) = iVar14;
                *(int *)(*plVar4 + 8 + lVar8 * 0x10) = iVar2;
              }
              if (iVar18 == -1) {
                *(int *)((longlong)param_1 + 0x24) = iVar14;
                *(undefined4 *)(*plVar4 + 0xc + lVar8 * 0x10) = 0xffffffff;
              }
              else {
                *(int *)(*plVar4 + 0xc + lVar8 * 0x10) = iVar18;
                *(int *)(*plVar4 + 8 + (longlong)iVar18 * 0x10) = iVar14;
              }
              *(int *)(local_90 + *(longlong *)param_1[5]) = iVar14;
              piVar23 = local_88;
              cVar17 = (char)local_res8;
            }
            else {
              FUN_14504f070(param_1[3],piVar21);
              *(undefined4 *)(local_90 + *(longlong *)param_1[5]) = 0xffffffff;
              cVar17 = cVar5;
            }
            lVar8 = *(longlong *)(param_1[2] + 0x28);
            iVar14 = *(int *)((longlong)*(int *)(local_80 + 0x10) * 0x60 + 0xc + lVar8);
            uVar7 = (ulonglong)iVar14;
            local_80 = uVar7 * 0x60;
            uVar6 = (ulonglong)
                    (*(uint *)((longlong)*(int *)(lVar8 + 0xc + local_80) * 0x60 + lVar8) &
                    0x3fffffff);
            lVar8 = *(longlong *)(param_1[2] + 0x38);
            local_70 = *(undefined8 *)(lVar8 + uVar6 * 0xc);
            local_68 = *(undefined4 *)(lVar8 + 8 + uVar6 * 0xc);
            iVar18 = (int)((ulonglong)local_70 >> 0x20) - local_b4;
            lVar8 = (longlong)(int)((int)local_70 - local_b8) * (longlong)iVar22 -
                    (longlong)iVar18 * (longlong)iVar15;
            uVar10 = (uint)(lVar8 >> 0x3f) | (uint)(lVar8 != 0);
            if (((int)uVar10 < 0) ||
               ((uVar10 == 0 &&
                ((longlong)(int)((int)local_70 - local_b8) * (longlong)iVar15 +
                 (longlong)iVar18 * (longlong)iVar22 < 0)))) {
              cVar5 = '\x01';
            }
            else {
              cVar5 = '\0';
              if (cVar17 != '\0') {
                iVar15 = *piVar21;
                if (iVar15 == -1) {
                  return 0;
                }
                do {
                  lVar19 = (longlong)iVar15;
                  *(undefined4 *)
                   (*(longlong *)param_1[5] +
                   (longlong)*(int *)(*(longlong *)param_1[3] + lVar19 * 0x10) * 4) = 0xffffffff;
                  plVar4 = (longlong *)param_1[3];
                  lVar8 = *plVar4;
                  iVar22 = *(int *)(lVar8 + 8 + lVar19 * 0x10);
                  iVar14 = *(int *)(lVar8 + 0xc + lVar19 * 0x10);
                  if (iVar22 == -1) {
                    *piVar21 = iVar14;
                  }
                  else {
                    *(int *)(lVar8 + 0xc + (longlong)iVar22 * 0x10) = iVar14;
                  }
                  iVar22 = *(int *)(lVar8 + 0xc + lVar19 * 0x10);
                  uVar3 = *(undefined4 *)(lVar8 + 8 + lVar19 * 0x10);
                  if (iVar22 == -1) {
                    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
                  }
                  else {
                    *(undefined4 *)(*plVar4 + 8 + (longlong)iVar22 * 0x10) = uVar3;
                  }
                  *(int *)(lVar8 + 0xc + lVar19 * 0x10) = (int)plVar4[2];
                  *(int *)(plVar4 + 2) = iVar15;
                  iVar15 = *piVar21;
                } while (iVar15 != -1);
                return 0;
              }
            }
            local_res8 = CONCAT71(local_res8._1_7_,cVar5);
            param_2 = local_res10;
          } while (iVar14 != piVar23[2]);
        }
      }
      piVar23 = piVar23 + 4;
      local_88 = piVar23;
    } while (piVar23 != local_60);
  }
  iVar15 = *(int *)(param_1 + 4);
  if (iVar15 != -1) {
    lVar8 = param_2[1];
    puVar1 = (uint *)param_2[2];
    lVar19 = *param_2;
    do {
      plVar4 = (longlong *)param_1[3];
      puVar12 = (undefined8 *)((longlong)iVar15 * 0x10 + *plVar4);
      local_78 = *puVar12;
      if (*(int *)(puVar12 + 1) == -1) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)puVar12 + 0xc);
      }
      else {
        *(undefined4 *)(*plVar4 + 0xc + (longlong)*(int *)(puVar12 + 1) * 0x10) =
             *(undefined4 *)((longlong)puVar12 + 0xc);
      }
      if (*(int *)((longlong)puVar12 + 0xc) == -1) {
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(puVar12 + 1);
      }
      else {
        *(undefined4 *)(*plVar4 + 8 + (longlong)*(int *)((longlong)puVar12 + 0xc) * 0x10) =
             *(undefined4 *)(puVar12 + 1);
      }
      *(int *)((longlong)puVar12 + 0xc) = (int)plVar4[2];
      *(int *)(plVar4 + 2) = iVar15;
      *(undefined4 *)(*(longlong *)param_1[5] + (longlong)(int)local_78 * 4) = 0xffffffff;
      lVar9 = *(longlong *)(param_1[2] + 0x28);
      puVar16 = (uint *)((longlong)(int)local_78 * 0x60 + lVar9);
      puVar13 = puVar16;
      if ((char)((ulonglong)local_78 >> 0x20) != '\0') {
        puVar13 = (uint *)((longlong)(int)puVar16[3] * 0x60 + lVar9);
      }
      local_9c = *(undefined8 *)
                  (*(longlong *)(param_1[2] + 0x38) + (ulonglong)(*puVar13 & 0x3fffffff) * 0xc);
      uVar10 = (uint)local_9c;
      iVar15 = (int)((ulonglong)local_9c >> 0x20);
      local_res20 = (uint)local_9c;
      local_60 = *(int **)(**(longlong **)(lVar19 + 0x58) + (ulonglong)(*puVar13 & 0x3fffffff) * 8);
      local_a8 = (uint)local_9c;
      local_a0 = SUB84(local_60,0);
      iStackX_24 = iVar15;
      local_a4 = iVar15;
      FUN_145052f40(lVar8,&local_res8,&local_a8);
      local_b0 = local_60._4_4_;
      local_b8 = uVar10;
      local_b4 = iVar15;
      FUN_145052f40(lVar8,local_res18,&local_b8);
      uVar10 = *puVar1;
      if (*puVar1 < (uint)local_res8) {
        *puVar1 = (uint)local_res8;
        uVar10 = (uint)local_res8;
      }
      if (uVar10 < local_res18[0]) {
        *puVar1 = local_res18[0];
      }
      if (local_78._4_1_ == '\0') {
        cVar5 = FUN_1453468f0(param_1,puVar16);
        if ((cVar5 == '\0') && (-1 < (int)puVar16[4])) {
          FUN_1453466e0(param_1,(longlong)(int)puVar16[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      else {
        cVar5 = FUN_1453466e0();
        if ((cVar5 == '\0') && (-1 < (int)puVar16[4])) {
          FUN_1453468f0(param_1,(longlong)(int)puVar16[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      iVar15 = *(int *)(param_1 + 4);
    } while (iVar15 != -1);
  }
  return 1;
}



// FUNCTION 145055ae0 FUN_145055ae0 body=346 status=ok
// SIG undefined FUN_145055ae0(void)

void FUN_145055ae0(ulonglong *param_1,undefined8 param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  uVar1 = param_1[2];
  uVar4 = (longlong)uVar1 >> 0x3f;
  local_48 = (*param_1 ^ uVar4) - uVar4;
  uVar3 = (ulonglong)((*param_1 ^ uVar4) < uVar4);
  uVar2 = (param_1[1] ^ uVar4) - uVar4;
  lStack_40 = uVar2 - uVar3;
  local_38 = ((uVar1 ^ uVar4) - uVar4) - (ulonglong)((param_1[1] ^ uVar4) < uVar4 || uVar2 < uVar3);
  FUN_147e5c8a9(&local_48,param_2,&local_28,&local_58);
  uVar2 = CONCAT44(uStack_1c,uStack_20);
  uVar3 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar1 < 0) {
    uVar3 = -CONCAT44(uStack_24,local_28);
    uVar1 = (ulonglong)(CONCAT44(uStack_24,local_28) != 0);
    uVar2 = -CONCAT44(uStack_1c,uStack_20) - uVar1;
    local_18 = -(ulonglong)
                (CONCAT44(uStack_1c,uStack_20) != 0 ||
                (ulonglong)-CONCAT44(uStack_1c,uStack_20) < uVar1) - local_18;
    bVar5 = local_58 != 0;
    local_58 = -local_58;
    lStack_50 = -(ulonglong)bVar5 - lStack_50;
  }
  if (((uint)(lStack_50 >> 0x3f) | (uint)(local_58 != 0 || lStack_50 != 0)) == param_3) {
    uVar4 = (ulonglong)(char)param_3;
    bVar5 = CARRY8(uVar3,uVar4);
    uVar3 = uVar3 + uVar4;
    uVar4 = (longlong)uVar4 >> 0x3f;
    bVar6 = CARRY8(uVar2,uVar4);
    uVar1 = uVar2 + uVar4;
    uVar2 = uVar1 + bVar5;
    local_18 = local_18 + uVar4 + (ulonglong)(bVar6 || CARRY8(uVar1,(ulonglong)bVar5));
  }
  *param_4 = uVar3;
  param_4[1] = uVar2;
  param_4[2] = local_18;
  return;
}



// FUNCTION 145055c40 FUN_145055c40 body=172 status=ok
// SIG undefined FUN_145055c40(void)

undefined8 FUN_145055c40(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)
           FUN_144cb4810(param_1,local_28,*(undefined4 *)((longlong)param_3 * 0x60 + 4 + lVar5));
  lVar6 = *plVar1;
  puVar2 = (undefined8 *)
           FUN_144cb4810(param_1,local_18,*(undefined4 *)((longlong)param_2 * 0x60 + 4 + lVar5));
  piVar3 = (int *)*puVar2;
  iVar4 = (int)(puVar2[1] - (longlong)piVar3 >> 2);
  if (0 < iVar4) {
    lVar5 = 0;
    lVar6 = lVar6 - (longlong)piVar3;
    do {
      if (*piVar3 != *(int *)((longlong)piVar3 + lVar6)) {
        return 0;
      }
      lVar5 = lVar5 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar5 < iVar4);
  }
  return 1;
}



// FUNCTION 145055cf0 FUN_145055cf0 body=258 status=ok
// SIG undefined FUN_145055cf0(void)

ulonglong FUN_145055cf0(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar7 = (ulonglong)(int)param_2;
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar5 = uVar7 * 0x60 + lVar6;
  if (*(int *)(lVar5 + 0x10) < 0) {
    uVar7 = (ulonglong)param_2;
  }
  else {
    while ((int)uVar7 != param_3) {
      lVar6 = (longlong)*(int *)(lVar5 + 0x10) * 0x60 + lVar6;
      plVar1 = (longlong *)FUN_144cb4810(param_1,local_28,*(undefined4 *)(lVar6 + 4));
      lVar8 = *plVar1;
      puVar2 = (undefined8 *)FUN_144cb4810(param_1,local_18,*(undefined4 *)(lVar5 + 4));
      piVar4 = (int *)*puVar2;
      lVar5 = 0;
      iVar3 = (int)(puVar2[1] - (longlong)piVar4 >> 2);
      if (0 < iVar3) {
        lVar8 = lVar8 - (longlong)piVar4;
        do {
          if (*piVar4 != *(int *)((longlong)piVar4 + lVar8)) goto LAB_145055dd1;
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (lVar5 < iVar3);
      }
      uVar7 = (ulonglong)*(int *)(lVar6 + 0xc);
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar5 = uVar7 * 0x60 + lVar6;
      if (*(int *)(lVar5 + 0x10) < 0) break;
    }
LAB_145055dd1:
    uVar7 = uVar7 & 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 145055e00 FUN_145055e00 body=258 status=ok
// SIG undefined FUN_145055e00(void)

ulonglong FUN_145055e00(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar7 = (ulonglong)(int)param_2;
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar5 = uVar7 * 0x60 + lVar6;
  if (*(int *)(lVar5 + 0x10) < 0) {
    uVar7 = (ulonglong)param_2;
  }
  else {
    while ((int)uVar7 != param_3) {
      lVar6 = (longlong)*(int *)(lVar5 + 0x10) * 0x60 + lVar6;
      plVar1 = (longlong *)FUN_144cb4810(param_1,local_28,*(undefined4 *)(lVar6 + 4));
      lVar8 = *plVar1;
      puVar2 = (undefined8 *)FUN_144cb4810(param_1,local_18,*(undefined4 *)(lVar5 + 4));
      piVar4 = (int *)*puVar2;
      lVar5 = 0;
      iVar3 = (int)(puVar2[1] - (longlong)piVar4 >> 2);
      if (0 < iVar3) {
        lVar8 = lVar8 - (longlong)piVar4;
        do {
          if (*piVar4 != *(int *)((longlong)piVar4 + lVar8)) goto LAB_145055ee1;
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (lVar5 < iVar3);
      }
      uVar7 = (ulonglong)*(int *)(lVar6 + 8);
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar5 = uVar7 * 0x60 + lVar6;
      if (*(int *)(lVar5 + 0x10) < 0) break;
    }
LAB_145055ee1:
    uVar7 = uVar7 & 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 145055f10 FUN_145055f10 body=160 status=ok
// SIG undefined FUN_145055f10(void)

ulonglong FUN_145055f10(int *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    return (ulonglong)*(uint *)((longlong)param_1[1] * 0x60 + 4 + *(longlong *)(param_2 + 0x28));
  }
  if (iVar2 == 2) {
    return (ulonglong)(uint)param_1[1];
  }
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"unknown enumerant");
  iVar2 = FUN_144bfc110(0x7523383a,local_208,
                        "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                        ,0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_144bde6e0(local_218);
  return 0xffffffff;
}



// FUNCTION 145055fb0 FUN_145055fb0 body=168 status=ok
// SIG undefined FUN_145055fb0(void)

void FUN_145055fb0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  
  *param_1 = param_2;
  lVar8 = (longlong)(*(int *)(param_1 + 2) + -1);
  if (0 < *(int *)(param_1 + 2) + -1) {
    lVar10 = 0;
    lVar7 = lVar8 << 4;
    lVar12 = lVar10;
    do {
      lVar1 = param_1[1];
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + -1;
      uVar2 = ((undefined8 *)(lVar7 + lVar1))[1];
      uVar3 = *(undefined8 *)(lVar12 + lVar1);
      uVar4 = ((undefined8 *)(lVar12 + lVar1))[1];
      *(undefined8 *)(lVar12 + lVar1) = *(undefined8 *)(lVar7 + lVar1);
      ((undefined8 *)(lVar12 + lVar1))[1] = uVar2;
      lVar1 = param_1[1];
      *(undefined8 *)(lVar7 + lVar1) = uVar3;
      ((undefined8 *)(lVar7 + lVar1))[1] = uVar4;
      lVar7 = lVar7 + -0x10;
      lVar12 = lVar12 + 0x10;
    } while (lVar10 < lVar8);
  }
  piVar9 = (int *)param_1[1];
  piVar11 = piVar9 + (longlong)*(int *)(param_1 + 2) * 4;
  if (piVar9 != piVar11) {
    piVar5 = piVar9 + 2;
    do {
      if (*piVar9 == 0) {
        iVar6 = piVar5[-1];
        piVar5[-1] = *piVar5;
LAB_145056048:
        *piVar5 = iVar6;
      }
      else if (*piVar9 == 1) {
        iVar6 = piVar5[-1];
        piVar5[-1] = *piVar5;
        *(bool *)(piVar5 + 1) = (char)piVar5[1] == '\0';
        goto LAB_145056048;
      }
      piVar9 = piVar9 + 4;
      piVar5 = piVar5 + 4;
    } while (piVar9 != piVar11);
  }
  return;
}



// FUNCTION 145056060 FUN_145056060 body=206 status=ok
// SIG undefined FUN_145056060(void)

void FUN_145056060(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = param_1 + 1;
  *param_1 = *param_2;
  if (param_2 + 1 != plVar1) {
    puVar11 = (undefined8 *)param_2[1];
    iVar3 = *(int *)(param_2 + 2);
    if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar3) {
      FUN_14504e200(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar10 = (undefined8 *)*plVar1;
    iVar4 = iVar3;
    if (*(int *)(param_1 + 2) < iVar3) {
      iVar4 = *(int *)(param_1 + 2);
    }
    if ((puVar10 != puVar11) && (lVar8 = (longlong)iVar4, 0 < iVar4)) {
      puVar7 = puVar10;
      do {
        puVar2 = (undefined8 *)(((longlong)puVar11 - (longlong)puVar10) + (longlong)puVar7);
        uVar5 = puVar2[1];
        *puVar7 = *puVar2;
        puVar7[1] = uVar5;
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + 2;
      } while (lVar8 != 0);
    }
    puVar11 = puVar11 + (longlong)iVar4 * 2;
    if (0 < iVar3 - iVar4) {
      uVar9 = (ulonglong)(uint)(iVar3 - iVar4);
      puVar10 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
      do {
        if (puVar10 != (undefined8 *)0x0) {
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          puVar11 = puVar11 + 2;
          *puVar10 = uVar5;
          puVar10[1] = uVar6;
        }
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 2;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 2) = iVar3;
  }
  return;
}



// FUNCTION 145056130 FUN_145056130 body=112 status=ok
// SIG undefined FUN_145056130(void)

undefined8 * FUN_145056130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_14504b8e0(puVar1,&PTR_vftable_14c6e47a0);
  param_1[2] = *puVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *puVar1 = 0;
  param_2[3] = 0;
  return param_1;
}



// FUNCTION 1450561a0 FUN_1450561a0 body=158 status=ok
// SIG undefined FUN_1450561a0(void)

void FUN_1450561a0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_res10 [2];
  int local_res18 [4];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  FUN_14504b210(plVar1,local_res18,local_res10);
  if (local_res18[0] == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar3) {
      FUN_14504b680(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar2 + 1) = 0xffffffffffffffff;
      *puVar2 = param_2;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  *(undefined8 *)(*plVar1 + 4 + (longlong)local_res18[0] * 0xc) = 0xffffffffffffffff;
  return;
}



// FUNCTION 145056240 FUN_145056240 body=450 status=ok
// SIG undefined FUN_145056240(void)

void FUN_145056240(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar4 = (ulonglong *)FUN_14504acd0();
  uVar11 = *puVar4;
  uVar3 = uVar11 >> 0x20;
  local_res8 = uVar11;
  uVar2 = (uint)uVar11;
  while (uVar2 != (uint)uVar3) {
    iVar10 = (int)uVar11;
    local_res8._4_4_ = (undefined4)(local_res8 >> 0x20);
    local_res8._0_4_ = iVar10;
    lVar5 = FUN_144d30bb0(param_1 + 0x40,&local_res8);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
      puVar8 = (undefined8 *)((longlong)iVar10 * 0x38 + *(longlong *)(param_1 + 0x30));
    }
    else {
      puVar8 = (undefined8 *)
               (*(longlong *)(param_1 + 0x40) + 8 + (longlong)*(int *)(lVar5 + 4) * 0x40);
    }
    local_68 = *puVar8;
    local_38 = 0;
    local_58 = *(undefined4 *)(puVar8 + 2);
    uStack_54 = *(undefined4 *)((longlong)puVar8 + 0x14);
    local_res8 = CONCAT44(local_res8._4_4_,iVar10);
    uStack_60 = CONCAT71((int7)((ulonglong)puVar8[1] >> 8),1);
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_14504b320(param_1 + 0x40,&local_res18,&local_res8);
    if ((int)local_res18 == *(int *)(param_1 + 0x48)) {
      iVar9 = *(int *)(param_1 + 0x48) + 1;
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar9) {
        FUN_14504b7b0(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      piVar6 = (int *)((longlong)*(int *)(param_1 + 0x48) * 0x40 + *(longlong *)(param_1 + 0x40));
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar10;
        *(undefined8 *)(piVar6 + 2) = local_68;
        *(undefined8 *)(piVar6 + 4) = uStack_60;
        *(ulonglong *)(piVar6 + 6) = CONCAT44(uStack_54,local_58);
        *(undefined8 *)(piVar6 + 8) = uStack_50;
        piVar6[10] = (int)local_48;
        piVar6[0xb] = local_48._4_4_;
        piVar6[0xc] = (int)uStack_40;
        piVar6[0xd] = uStack_40._4_4_;
        *(undefined8 *)(piVar6 + 0xe) = local_38;
      }
      *(int *)(param_1 + 0x48) = iVar9;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x40);
      lVar7 = (longlong)(int)local_res18 * 0x40;
      puVar8 = (undefined8 *)(lVar7 + 8 + lVar5);
      *puVar8 = local_68;
      puVar8[1] = uStack_60;
      puVar8 = (undefined8 *)(lVar7 + 0x18 + lVar5);
      *puVar8 = CONCAT44(uStack_54,local_58);
      puVar8[1] = uStack_50;
      puVar1 = (undefined4 *)(lVar7 + 0x28 + lVar5);
      *puVar1 = (int)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (int)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      *(undefined8 *)(lVar7 + 0x38 + lVar5) = local_38;
    }
    uVar11 = (ulonglong)local_68._4_4_;
    uVar2 = local_68._4_4_;
  }
  puVar8 = (undefined8 *)FUN_144d2ce80(param_1 + 0x30,uVar11 & 0xffffffff);
  local_38 = 0;
  local_68 = *puVar8;
  uStack_60 = puVar8[1];
  local_58 = *(undefined4 *)(puVar8 + 2);
  uStack_54 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uStack_50 = puVar8[3];
  local_48 = puVar8[4];
  uStack_40 = 0;
  FUN_14504ae80(param_1 + 0x30,uVar11 & 0xffffffff,&local_68);
  return;
}



// FUNCTION 145056410 FUN_145056410 body=294 status=ok
// SIG undefined FUN_145056410(void)

void FUN_145056410(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined4 local_res10 [4];
  int local_res20 [2];
  
  puVar3 = (undefined8 *)FUN_14504acd0();
  plVar5 = (longlong *)(param_1 + 0x10);
  uVar2 = *puVar3;
  local_res10[0] = param_3;
  FUN_14504b210(plVar5,&local_res8,local_res10);
  if ((int)local_res8 == *(int *)(param_1 + 0x18)) {
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar4) {
      FUN_14504b680(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar1 = (undefined4 *)(*plVar5 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_3;
      *(undefined8 *)(puVar1 + 1) = uVar2;
    }
    *(int *)(param_1 + 0x18) = iVar4;
  }
  else {
    *(undefined8 *)(*plVar5 + 4 + (longlong)(int)local_res8 * 0xc) = uVar2;
  }
  local_res8 = 0xffffffffffffffff;
  local_res10[0] = param_2;
  FUN_14504b210(plVar5,local_res20,local_res10);
  if (local_res20[0] == *(int *)(param_1 + 0x18)) {
    iVar4 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar4) {
      FUN_14504b680(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar1 = (undefined4 *)(*plVar5 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar1 + 1) = local_res8;
      *puVar1 = param_2;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    return;
  }
  *(undefined8 *)(*plVar5 + 4 + (longlong)local_res20[0] * 0xc) = local_res8;
  return;
}



// FUNCTION 145056540 FUN_145056540 body=125 status=ok
// SIG undefined FUN_145056540(void)

void FUN_145056540(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1450565c0 FUN_1450565c0 body=123 status=ok
// SIG undefined FUN_1450565c0(void)

void FUN_1450565c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 6);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 145056640 FUN_145056640 body=1507 status=ok
// SIG undefined FUN_145056640(void)

undefined8
FUN_145056640(longlong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
             longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  char cVar17;
  char cVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  ulonglong local_88;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong local_38;
  longlong lStack_30;
  
  if ((int)*param_4 < 0) {
    return 1;
  }
  piVar20 = (int *)((longlong)(int)*param_4 * 0x38 + *param_1);
  lVar22 = (longlong)*piVar20 * 0x38 + *param_1;
  FUN_145047eb0(lVar22 + 0xc,piVar20 + 3,param_2,&local_108);
  uVar24 = *(ulonglong *)(lVar22 + 0x18);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar24;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_f8;
  if ((-1 < (longlong)
            ((local_100 - (SUB168(auVar1 * auVar9,8) - ((longlong)uVar24 >> 0x3f & local_f8))) -
            (ulonglong)(local_108 < local_f8 * uVar24))) &&
     (uVar24 = *(ulonglong *)(lVar22 + 0x20), auVar2._8_8_ = 0, auVar2._0_8_ = uVar24,
     auVar10._8_8_ = 0, auVar10._0_8_ = local_f8,
     -1 < (longlong)
          (((SUB168(auVar2 * auVar10,8) - ((longlong)uVar24 >> 0x3f & local_f8)) - local_100) -
          (ulonglong)(local_f8 * uVar24 < local_108)))) {
    uVar24 = (longlong)local_100 >> 0x3f;
    local_c8 = local_f8;
    local_b8 = *param_5;
    lStack_b0 = param_5[1];
    local_e8 = (uVar24 ^ local_108) - uVar24;
    local_a8 = param_5[2];
    lStack_e0 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
    local_48 = local_f8;
    local_58 = local_e8;
    lStack_50 = lStack_e0;
    cVar17 = FUN_144d2d500(&local_58,&local_b8);
    if (cVar17 != '\0') {
      uVar24 = (longlong)local_100 >> 0x3f;
      local_e8 = (uVar24 ^ local_108) - uVar24;
      lStack_e0 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
      *param_5 = local_e8;
      param_5[1] = lStack_e0;
      local_c8 = local_f8;
      param_5[2] = local_f8;
    }
    uVar24 = (ulonglong)(int)*param_4;
    cVar17 = *(char *)(uVar24 * 0x38 + 8 + *param_1);
    uVar19 = param_4[1];
    if (*param_4 != uVar19) {
      do {
        piVar20 = (int *)((longlong)(int)uVar24 * 0x38 + *param_1);
        FUN_145047eb0(param_3,param_2,piVar20 + 3,&local_108);
        uVar24 = *(ulonglong *)(piVar20 + 10);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar24;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_f8;
        if ((longlong)
            ((local_100 - (SUB168(auVar3 * auVar11,8) - ((longlong)uVar24 >> 0x3f & local_f8))) -
            (ulonglong)(local_108 < local_f8 * uVar24)) < 0) {
          return 0;
        }
        uVar24 = *(ulonglong *)(piVar20 + 0xc);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar24;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_f8;
        if ((longlong)
            (((SUB168(auVar4 * auVar12,8) - ((longlong)uVar24 >> 0x3f & local_f8)) - local_100) -
            (ulonglong)(local_f8 * uVar24 < local_108)) < 0) {
          return 0;
        }
        local_78 = *param_5;
        lStack_70 = param_5[1];
        local_88 = local_f8;
        local_68 = param_5[2];
        uVar24 = (longlong)local_100 >> 0x3f;
        local_e8 = (uVar24 ^ local_108) - uVar24;
        lStack_e0 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
        local_c8 = local_f8;
        local_d8 = local_e8;
        lStack_d0 = lStack_e0;
        cVar18 = FUN_144d2d500(&local_d8,&local_78);
        if (cVar18 != '\0') {
          uVar24 = (longlong)local_100 >> 0x3f;
          local_38 = (uVar24 ^ local_108) - uVar24;
          lStack_30 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
          local_88 = local_f8;
          *param_5 = local_38;
          param_5[1] = lStack_30;
          param_5[2] = local_f8;
        }
        if ((char)piVar20[2] != cVar17) {
          if ((char)piVar20[2] == '\0') {
            piVar23 = (int *)((longlong)*piVar20 * 0x38 + *param_1);
            piVar21 = piVar20;
          }
          else {
            piVar21 = (int *)((longlong)piVar20[1] * 0x38 + *param_1);
            piVar23 = piVar20;
          }
          FUN_145047eb0(piVar23 + 3,piVar21 + 3,param_3,&local_108);
          uVar24 = *(ulonglong *)(piVar23 + 6);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_f8;
          if ((longlong)
              ((local_100 - (SUB168(auVar5 * auVar13,8) - ((longlong)uVar24 >> 0x3f & local_f8))) -
              (ulonglong)(local_108 < local_f8 * uVar24)) < 0) {
            return 0;
          }
          uVar24 = *(ulonglong *)(piVar23 + 8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar24;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_f8;
          if ((longlong)
              (((SUB168(auVar6 * auVar14,8) - ((longlong)uVar24 >> 0x3f & local_f8)) - local_100) -
              (ulonglong)(local_f8 * uVar24 < local_108)) < 0) {
            return 0;
          }
          local_d8 = *param_5;
          lStack_d0 = param_5[1];
          local_88 = local_f8;
          local_c8 = param_5[2];
          uVar24 = (longlong)local_100 >> 0x3f;
          local_78 = (uVar24 ^ local_108) - uVar24;
          lStack_70 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
          local_68 = local_f8;
          local_58 = local_78;
          lStack_50 = lStack_70;
          cVar17 = FUN_144d2d500(&local_78,&local_d8);
          if (cVar17 != '\0') {
            uVar24 = (longlong)local_100 >> 0x3f;
            local_b8 = (uVar24 ^ local_108) - uVar24;
            lStack_b0 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24)
            ;
            local_88 = local_f8;
            *param_5 = local_b8;
            param_5[1] = lStack_b0;
            param_5[2] = local_f8;
          }
        }
        uVar24 = (ulonglong)(uint)piVar20[1];
        uVar19 = param_4[1];
        cVar17 = (char)piVar20[2];
      } while (piVar20[1] != uVar19);
    }
    lVar22 = (longlong)(int)uVar19 * 0x38 + *param_1;
    FUN_145047eb0(lVar22 + 0xc,*param_1 + 0xc + (longlong)*(int *)(lVar22 + 4) * 0x38,param_3,
                  &local_108);
    uVar24 = *(ulonglong *)(lVar22 + 0x18);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_f8;
    if ((-1 < (longlong)
              ((local_100 - (SUB168(auVar7 * auVar15,8) - ((longlong)uVar24 >> 0x3f & local_f8))) -
              (ulonglong)(local_108 < local_f8 * uVar24))) &&
       (uVar24 = *(ulonglong *)(lVar22 + 0x20), auVar8._8_8_ = 0, auVar8._0_8_ = uVar24,
       auVar16._8_8_ = 0, auVar16._0_8_ = local_f8,
       -1 < (longlong)
            (((SUB168(auVar8 * auVar16,8) - ((longlong)uVar24 >> 0x3f & local_f8)) - local_100) -
            (ulonglong)(local_f8 * uVar24 < local_108)))) {
      local_d8 = *param_5;
      lStack_d0 = param_5[1];
      local_88 = local_f8;
      local_c8 = param_5[2];
      uVar24 = (longlong)local_100 >> 0x3f;
      local_b8 = (uVar24 ^ local_108) - uVar24;
      lStack_b0 = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
      local_68 = local_f8;
      local_78 = local_b8;
      lStack_70 = lStack_b0;
      cVar17 = FUN_144d2d500(&local_78,&local_d8);
      if (cVar17 != '\0') {
        uVar24 = (longlong)local_100 >> 0x3f;
        *param_5 = (uVar24 ^ local_108) - uVar24;
        param_5[1] = ((uVar24 ^ local_100) - uVar24) - (ulonglong)((uVar24 ^ local_108) < uVar24);
        param_5[2] = local_f8;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145056c30 FUN_145056c30 body=142 status=ok
// SIG undefined FUN_145056c30(void)

void FUN_145056c30(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 145056cc0 FUN_145056cc0 body=180 status=ok
// SIG undefined FUN_145056cc0(void)

void FUN_145056cc0(longlong param_1)

{
  int iVar1;
  longlong local_18;
  longlong local_10;
  
  FUN_145345260(param_1 + 0x18,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x68));
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_145345470(param_1 + 0x18,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x68));
  iVar1 = FUN_145345910(param_1 + 0x18);
  while (-1 < iVar1) {
    FUN_145056d80(param_1,iVar1);
    iVar1 = FUN_145345910(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_18 = *(longlong *)(param_1 + 0x58);
  local_10 = local_18 + (longlong)*(int *)(param_1 + 0x60) * 4;
  FUN_145345680(param_1 + 0x18,&local_18);
  iVar1 = FUN_145345910(param_1 + 0x18);
  while (-1 < iVar1) {
    FUN_145056d80(param_1,iVar1);
    iVar1 = FUN_145345910(param_1 + 0x18);
  }
  return;
}



// FUNCTION 145056d80 FUN_145056d80 body=3406 status=ok
// SIG undefined FUN_145056d80(void)

ulonglong FUN_145056d80(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  bool bVar14;
  undefined4 *puVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  int *piVar19;
  int *piVar20;
  byte bVar21;
  longlong lVar22;
  undefined1 uVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined4 *puVar36;
  longlong *plVar37;
  ulonglong uVar38;
  bool bVar39;
  byte local_res8;
  uint local_res18 [2];
  undefined1 local_res20;
  undefined8 local_418;
  longlong *plStack_410;
  undefined4 *local_408;
  int local_400;
  int iStack_3fc;
  int local_3f8;
  int iStack_3f4;
  int local_3f0;
  int local_3e8;
  int iStack_3e4;
  int local_3e0;
  undefined4 *local_3d8;
  int local_3d0;
  uint uStack_3cc;
  ulonglong local_3c8;
  undefined4 local_3c0;
  longlong local_3b8;
  int local_3b0;
  uint local_3ac;
  longlong local_3a8;
  undefined4 local_3a0;
  longlong *local_398;
  uint local_390;
  uint local_38c;
  longlong local_388;
  int local_380;
  longlong *local_348;
  undefined4 local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  undefined4 local_320;
  uint local_31c;
  longlong local_318;
  undefined4 local_310;
  undefined4 *local_308;
  ulonglong uStack_300;
  undefined4 *local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  longlong local_2e0;
  longlong lStack_2d8;
  longlong local_2d0;
  longlong lStack_2c8;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  longlong *local_288;
  longlong *plStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  longlong local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  longlong local_228;
  longlong lStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  int local_1f4;
  int local_1ec;
  int local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0 [80];
  undefined1 *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [80];
  undefined1 *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [80];
  undefined1 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [88];
  
  if ((-1 < *(int *)(param_1 + 0x68)) &&
     (uVar29 = *(ulonglong *)(*(longlong *)(param_1 + 200) + 8),
     *(int *)(param_1 + 0x68) != *(int *)(uVar29 + (longlong)param_2 * 4))) {
    return uVar29 & 0xffffffffffffff00;
  }
  local_1c0 = local_1b0;
  local_160 = local_150;
  local_100 = local_f0;
  local_a0 = local_90;
  local_1b8 = 0;
  local_1b4 = 0x80000014;
  local_158 = 0;
  local_154 = 0x80000014;
  local_f8 = 0;
  local_f4 = 0x80000014;
  local_98 = 0;
  local_94 = 0x80000014;
  FUN_145346b00(&local_1f8,param_2,*(undefined8 *)(param_1 + 8));
  bVar39 = true;
  bVar14 = true;
  bVar17 = 1;
  local_res20 = 0;
  local_res8 = 0;
  cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8),local_1f8);
  if (cVar16 != '\0') {
    bVar14 = false;
    local_res20 = 1;
    bVar17 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8),local_1ec);
    local_res8 = bVar17 ^ 1;
    cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8),local_1e0);
    bVar39 = cVar16 != '\0';
    if (!bVar39) {
      local_res8 = 1;
    }
  }
  if ((-1 < local_1ec) && (cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8)), cVar16 != '\0')) {
    piVar19 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1f8);
    piVar20 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1ec);
    if ((*piVar20 != *piVar19) ||
       ((piVar20[1] != piVar19[1] || (*(longlong *)(piVar20 + 2) != *(longlong *)(piVar19 + 2))))) {
      bVar14 = false;
      local_res8 = 1;
      bVar17 = 0;
    }
  }
  if ((-1 < local_1e0) && (cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8)), cVar16 != '\0')) {
    piVar19 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1f8);
    piVar20 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1e0);
    if ((*piVar20 != *piVar19) ||
       ((piVar20[1] != piVar19[1] || (*(longlong *)(piVar20 + 2) != *(longlong *)(piVar19 + 2))))) {
      bVar14 = false;
      local_res8 = 1;
      bVar39 = false;
    }
  }
  if (-1 < local_1dc) {
    if ((-1 < local_1d0) && (cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8)), cVar16 != '\0'))
    {
      piVar19 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1f8);
      piVar20 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1d0);
      if ((*piVar20 != *piVar19) ||
         ((piVar20[1] != piVar19[1] || (*(longlong *)(piVar20 + 2) != *(longlong *)(piVar19 + 2)))))
      {
        bVar14 = false;
        local_res8 = 1;
        bVar39 = false;
      }
    }
    if ((-1 < local_1c4) && (cVar16 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8)), cVar16 != '\0'))
    {
      piVar19 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1f8);
      piVar20 = (int *)FUN_144cb5330(*(undefined8 *)(param_1 + 8),local_1c4);
      if ((*piVar20 != *piVar19) ||
         ((piVar20[1] != piVar19[1] || (*(longlong *)(piVar20 + 2) != *(longlong *)(piVar19 + 2)))))
      {
        bVar14 = false;
        local_res8 = 1;
        bVar17 = 0;
      }
    }
  }
  FUN_144cb6610(*(longlong *)(param_1 + 8),
                (longlong)param_2 * 0x60 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28),
                &local_3f8,&local_3e8);
  local_38c = 0x80000005;
  local_398 = &local_388;
  if (bVar39) {
    local_380 = local_3f0;
  }
  local_390 = (uint)bVar39;
  if (bVar17 != 0) {
    uVar27 = bVar39 + 1;
    uVar28 = (uint)bVar39;
    if (5 < uVar27) {
      FUN_147e4dcf0(&local_398,&PTR_vftable_14c6e47a0,uVar27);
      uVar28 = local_390;
    }
    puVar1 = (undefined8 *)((longlong)local_398 + (longlong)(int)uVar28 * 0xc);
    local_390 = uVar27;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = CONCAT44(iStack_3e4,local_3e8);
      *(int *)(puVar1 + 1) = local_3e0;
    }
  }
  if (bVar14) {
    uVar28 = local_390 + 1;
    if ((local_38c & 0x7fffffff) < uVar28) {
      FUN_144d30c20(&local_398,&PTR_vftable_14c6e47a0,uVar28);
    }
    uVar32 = local_3e8 + local_3f8;
    uVar24 = iStack_3e4 + iStack_3f4;
    uVar31 = local_3f0 + local_3e0;
    puVar2 = (uint *)((longlong)local_398 + (longlong)(int)local_390 * 0xc);
    uVar27 = -uVar32;
    if ((int)-uVar32 < 0) {
      uVar27 = uVar32;
    }
    bVar17 = (byte)uVar27 & 1;
    uVar13 = -(uVar27 >> 1);
    if (-1 < (int)uVar32) {
      uVar13 = uVar27 >> 1;
    }
    bVar21 = -bVar17;
    if (-1 < (int)uVar32) {
      bVar21 = bVar17;
    }
    uVar27 = uVar13 - 1;
    if ((bVar21 != 0) != 0xffffffff) {
      uVar27 = uVar13;
    }
    *puVar2 = uVar27;
    uVar27 = -uVar24;
    if ((int)-uVar24 < 0) {
      uVar27 = uVar24;
    }
    bVar17 = (byte)uVar27 & 1;
    uVar32 = -(uVar27 >> 1);
    if (-1 < (int)uVar24) {
      uVar32 = uVar27 >> 1;
    }
    bVar21 = -bVar17;
    if (-1 < (int)uVar24) {
      bVar21 = bVar17;
    }
    uVar27 = uVar32 - 1;
    if ((bVar21 != 0) != 0xffffffff) {
      uVar27 = uVar32;
    }
    puVar2[1] = uVar27;
    uVar27 = -uVar31;
    if ((int)-uVar31 < 0) {
      uVar27 = uVar31;
    }
    bVar17 = (byte)uVar27 & 1;
    uVar24 = -(uVar27 >> 1);
    if (-1 < (int)uVar31) {
      uVar24 = uVar27 >> 1;
    }
    bVar21 = -bVar17;
    if (-1 < (int)uVar31) {
      bVar21 = bVar17;
    }
    uVar27 = uVar24 - 1;
    if ((bVar21 != 0) != 0xffffffff) {
      uVar27 = uVar24;
    }
    puVar2[2] = uVar27;
    local_390 = uVar28;
    cVar16 = FUN_1450586a0(param_1,&local_1f8,&local_418);
    if (cVar16 != '\0') {
      uVar28 = local_390 + 1;
      if ((int)(local_38c & 0x7fffffff) < (int)uVar28) {
        FUN_147e4dcf0(&local_398,&PTR_vftable_14c6e47a0,(longlong)(int)uVar28);
      }
      plVar37 = (longlong *)((longlong)local_398 + (longlong)(int)local_390 * 0xc);
      local_390 = uVar28;
      if (plVar37 != (longlong *)0x0) {
        *plVar37 = (longlong)local_418;
        *(undefined4 *)(plVar37 + 1) = plStack_410._0_4_;
      }
    }
    if ((-1 < local_1dc) && (cVar16 = FUN_1450586a0(param_1,&local_1dc,&local_418), cVar16 != '\0'))
    {
      uVar28 = local_390 + 1;
      if ((int)(local_38c & 0x7fffffff) < (int)uVar28) {
        FUN_147e4dcf0(&local_398,&PTR_vftable_14c6e47a0,(longlong)(int)uVar28);
      }
      plVar37 = (longlong *)((longlong)local_398 + (longlong)(int)local_390 * 0xc);
      local_390 = uVar28;
      if (plVar37 != (longlong *)0x0) {
        *plVar37 = (longlong)local_418;
        *(undefined4 *)(plVar37 + 1) = plStack_410._0_4_;
      }
    }
  }
  if (local_390 == 0) {
    uVar29 = 0;
    goto LAB_145057a41;
  }
  plVar37 = *(longlong **)(param_1 + 0xa0);
  local_418 = (longlong *)*plVar37;
  local_2a8 = 0;
  local_2a0 = 0;
  plStack_410 = (longlong *)((longlong)local_418 + (longlong)(int)plVar37[1] * 8);
  local_29c = 0x80000000;
  local_2b8 = (longlong)local_418;
  lStack_2b0 = (longlong)plStack_410;
  local_298 = FUN_144b3d480();
  local_290 = 0;
  local_418 = (longlong *)plVar37[2];
  plStack_410 = local_418 + (longlong)(int)plVar37[3] * 7;
  local_278 = 0;
  local_270 = 0;
  local_26c = 0x80000000;
  local_288 = local_418;
  plStack_280 = plStack_410;
  local_268 = FUN_144b3d480();
  local_260 = 0;
  local_res18[0] = local_res18[0] & 0xffffff00;
  local_348 = (longlong *)((longlong)local_398 + (longlong)(int)local_390 * 0xc);
  if (local_398 == local_348) {
LAB_145057a23:
    uVar29 = 0;
  }
  else {
    uVar29 = CONCAT44(uStack_3cc,local_3d0);
    local_408 = local_3d8;
    puVar36 = local_3d8;
    plVar37 = local_398;
    uVar38 = local_3c8;
    uVar26 = plStack_410._0_4_;
    do {
      plVar3 = *(longlong **)(param_1 + 0xa0);
      local_2e0 = *plVar3;
      local_23c = 0x80000000;
      lStack_2d8 = local_2e0 + (longlong)(int)plVar3[1] * 8;
      local_248 = 0;
      local_240 = 0;
      local_258 = local_2e0;
      lStack_250 = lStack_2d8;
      local_238 = FUN_144b3d480();
      local_230 = 0;
      local_2d0 = plVar3[2];
      lStack_2c8 = (longlong)(int)plVar3[3] * 0x38 + local_2d0;
      local_218 = 0;
      local_210 = 0;
      local_20c = 0x80000000;
      local_228 = local_2d0;
      lStack_220 = lStack_2c8;
      local_208 = FUN_144b3d480();
      local_400 = (int)*plVar37;
      iStack_3fc = *(int *)((longlong)plVar37 + 4);
      local_200 = 0;
      if ((local_400 == local_3f8) && (iStack_3fc == iStack_3f4)) {
        uVar33 = 1;
      }
      else {
        uVar33 = 0;
      }
      if ((local_400 == local_3e8) && (iStack_3fc == iStack_3e4)) {
        uVar23 = 1;
      }
      else {
        uVar23 = 0;
      }
      cVar18 = FUN_145058cb0(param_1,&local_1f8,*plVar37,uVar33,uVar23,&local_258,&local_2f8);
      cVar16 = (char)local_res18[0];
      if (cVar18 != '\0') {
        if ((char)local_res18[0] != '\0') {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_2e8;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = local_408;
          uVar25 = SUB168(auVar5 * auVar9,8);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_2e8;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar29;
          uVar30 = uVar29 * local_2e8 + uVar25;
          lVar35 = (ulonglong)CARRY8(uVar29 * local_2e8,uVar25) + SUB168(auVar6 * auVar10,8);
          if ((longlong)uVar29 < 0) {
            lVar35 = lVar35 - local_2e8;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar38;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_2f8;
          uVar25 = SUB168(auVar7 * auVar11,8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar38;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uStack_2f0;
          uVar34 = uStack_2f0 * uVar38 + uVar25;
          lVar22 = (ulonglong)CARRY8(uStack_2f0 * uVar38,uVar25) + SUB168(auVar8 * auVar12,8);
          if ((longlong)uStack_2f0 < 0) {
            lVar22 = lVar22 - uVar38;
          }
          uVar25 = (ulonglong)((longlong)local_2f8 * uVar38 < (longlong)puVar36 * local_2e8);
          uVar4 = uVar34 - uVar30;
          local_308 = (undefined4 *)(uVar4 - uVar25);
          puVar36 = local_408;
          if (-1 < (longlong)((lVar22 - lVar35) - (ulonglong)(uVar34 < uVar30 || uVar4 < uVar25)))
          goto LAB_14505765e;
        }
        local_418 = (longlong *)*plVar37;
        uVar26 = (undefined4)plVar37[1];
        local_308 = local_2f8;
        uStack_300 = uStack_2f0;
        local_3c8 = local_2e8;
        FUN_14504abc0(&local_2b8);
        local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
        local_408 = local_308;
        puVar36 = local_308;
        uVar29 = uStack_300;
        uVar38 = local_3c8;
        cVar16 = '\x01';
      }
LAB_14505765e:
      FUN_1450565c0(&local_218);
      FUN_145056540(&local_248);
      plVar37 = (longlong *)((longlong)plVar37 + 0xc);
    } while (plVar37 != local_348);
    plStack_410 = (longlong *)CONCAT44(plStack_410._4_4_,uVar26);
    if (cVar16 == '\0') goto LAB_145057a23;
    lVar35 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    if ((*(int *)((longlong)local_1f4 * 0x60 + 0x10 + lVar35) < 0) &&
       (*(int *)((longlong)local_1e8 * 0x60 + 0x10 + lVar35) < 0)) {
      bVar39 = true;
    }
    else {
      bVar39 = false;
    }
    if (local_1dc < 0) {
      if (!bVar39) goto LAB_14505770c;
LAB_1450577bc:
      uStack_3cc = 0x80000000;
      local_3d8 = (undefined4 *)0x0;
      local_3d0 = 0;
      local_3c8 = FUN_144b3d480();
      local_3c0 = 0;
      FUN_145057ad0(param_1,&local_1f8);
      if ((local_3c8 != 0) && (*(int *)(local_3c8 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_3c8,0);
        FUN_144b3ec00(&local_3c8);
      }
      puVar15 = local_3d8;
      for (puVar36 = local_3d8 + (longlong)local_3d0 * 8; puVar36 != puVar15; puVar36 = puVar36 + -8
          ) {
        FUN_14504ba80(puVar36 + -6);
      }
      local_3d0 = 0;
      if ((-1 < (int)uStack_3cc) && (local_3d8 != (undefined4 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_3d8,(ulonglong)(uStack_3cc & 0x7fffffff) << 5);
      }
      uVar29 = 1;
    }
    else {
      if (((bVar39) && (*(int *)((longlong)local_1d8 * 0x60 + 0x10 + lVar35) < 0)) &&
         (*(int *)((longlong)local_1cc * 0x60 + 0x10 + lVar35) < 0)) goto LAB_1450577bc;
LAB_14505770c:
      local_408 = (undefined4 *)CONCAT44(local_408._4_4_,3);
      local_3b8 = 0;
      local_3b0 = 0;
      local_3ac = 0x80000000;
      local_3a8 = FUN_144b3d480();
      local_3a0 = 0;
      local_338 = **(longlong **)(param_1 + 0xb8);
      local_328 = 0;
      local_320 = 0;
      local_330 = local_338 + (longlong)(int)(*(longlong **)(param_1 + 0xb8))[1] * 8;
      local_31c = 0x80000000;
      local_318 = FUN_144b3d480();
      local_310 = 0;
      local_348 = local_418;
      local_340 = uVar26;
      cVar16 = FUN_14505a070(param_1,&local_1f8,&local_348,&local_408,&local_338);
      if (cVar16 == '\0') {
        local_400 = (int)local_418;
        iStack_3fc = local_418._4_4_;
        cVar16 = FUN_14505a690(param_1,&local_1f8,local_418,local_res20,local_res8,local_res18,
                               &local_408,&local_3b8,&local_338);
        if (cVar16 != '\0') {
          plStack_410 = (longlong *)CONCAT44(plStack_410._4_4_,local_res18[0]);
          uVar33 = 0;
          goto LAB_1450578ef;
        }
        uVar29 = 0;
      }
      else {
        uVar33 = 1;
LAB_1450578ef:
        FUN_145057fa0(param_1,&local_1f8,&local_418,local_408,&local_2b8,&local_338,&local_3b8,
                      uVar33);
        uVar29 = 1;
      }
      if ((local_318 != 0) && (*(int *)(local_318 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_318,0);
        FUN_144b3ec00(&local_318);
      }
      local_320 = 0;
      if ((-1 < (int)local_31c) && (local_328 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_328,(ulonglong)(local_31c & 0x7fffffff) * 0xc);
      }
      local_328 = 0;
      local_31c = 0x80000000;
      if ((local_3a8 != 0) && (*(int *)(local_3a8 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_3a8,0);
        FUN_144b3ec00(&local_3a8);
      }
      lVar22 = local_3b8;
      for (lVar35 = local_3b8 + (longlong)local_3b0 * 0x28; lVar35 != lVar22;
          lVar35 = lVar35 + -0x28) {
        FUN_14504ba80(lVar35 + -0x18);
      }
      local_3b0 = 0;
      if ((-1 < (int)local_3ac) && (local_3b8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_3b8,(ulonglong)(local_3ac & 0x7fffffff) * 0x28);
      }
      local_3b8 = 0;
      local_3ac = 0x80000000;
    }
  }
  FUN_1450565c0(&local_278);
  FUN_145056540(&local_2a8);
LAB_145057a41:
  local_390 = 0;
  if ((-1 < (int)local_38c) && (local_398 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_398,(ulonglong)(local_38c & 0x7fffffff) * 0xc);
  }
  local_398 = (longlong *)0x0;
  local_38c = 0x80000000;
  FUN_145056c30(&local_100);
  FUN_145056c30(&local_1c0);
  return uVar29;
}



// FUNCTION 145057ad0 FUN_145057ad0 body=1218 status=ok
// SIG undefined FUN_145057ad0(void)

void FUN_145057ad0(longlong param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong lStack_80;
  longlong local_78;
  int local_70;
  uint local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong lStack_50;
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  undefined4 local_30;
  
  plVar4 = *(longlong **)(param_1 + 0xa0);
  lVar5 = *plVar4;
  local_78 = 0;
  local_70 = 0;
  lStack_80 = lVar5 + (longlong)(int)plVar4[1] * 8;
  local_6c = 0x80000000;
  local_98 = (undefined4)lVar5;
  uStack_94 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_88 = local_98;
  uStack_84 = uStack_94;
  local_68 = FUN_144b3d480();
  local_60 = 0;
  lVar5 = plVar4[2];
  lStack_50 = (longlong)(int)plVar4[3] * 0x38 + lVar5;
  local_48 = 0;
  local_98 = (undefined4)lVar5;
  uStack_94 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_40 = 0;
  local_3c = 0x80000000;
  local_58 = local_98;
  uStack_54 = uStack_94;
  local_38 = FUN_144b3d480();
  iVar3 = *param_2;
  local_30 = 0;
  local_res10 = 0xffffffffffffffff;
  local_res8[0] = iVar3;
  FUN_14504b210(&local_78,local_res18,local_res8);
  if (local_res18[0] == local_70) {
    iVar1 = local_70 + 1;
    if ((int)(local_6c & 0x7fffffff) < iVar1) {
      FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
    local_70 = iVar1;
    if (piVar2 != (int *)0x0) {
      *(undefined8 *)(piVar2 + 1) = local_res10;
      *piVar2 = iVar3;
    }
  }
  else {
    *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
  }
  iVar3 = param_2[1];
  local_res10 = 0xffffffffffffffff;
  local_res8[0] = iVar3;
  FUN_14504b210(&local_78,local_res18,local_res8);
  if (local_res18[0] == local_70) {
    iVar1 = local_70 + 1;
    if ((int)(local_6c & 0x7fffffff) < iVar1) {
      FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
    local_70 = iVar1;
    if (piVar2 != (int *)0x0) {
      *(undefined8 *)(piVar2 + 1) = local_res10;
      *piVar2 = iVar3;
    }
  }
  else {
    *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
  }
  iVar3 = param_2[4];
  local_res10 = 0xffffffffffffffff;
  local_res8[0] = iVar3;
  FUN_14504b210(&local_78,local_res18,local_res8);
  if (local_res18[0] == local_70) {
    iVar1 = local_70 + 1;
    if ((int)(local_6c & 0x7fffffff) < iVar1) {
      FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
    local_70 = iVar1;
    if (piVar2 != (int *)0x0) {
      *(undefined8 *)(piVar2 + 1) = local_res10;
      *piVar2 = iVar3;
    }
  }
  else {
    *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
  }
  iVar3 = param_2[7];
  if (-1 < iVar3) {
    local_res10 = 0xffffffffffffffff;
    local_res8[0] = iVar3;
    FUN_14504b210(&local_78,local_res18,local_res8);
    if (local_res18[0] == local_70) {
      iVar1 = local_70 + 1;
      if ((int)(local_6c & 0x7fffffff) < iVar1) {
        FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
      }
      piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
      local_70 = iVar1;
      if (piVar2 != (int *)0x0) {
        *(undefined8 *)(piVar2 + 1) = local_res10;
        *piVar2 = iVar3;
      }
    }
    else {
      *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
    }
    iVar3 = param_2[8];
    local_res10 = 0xffffffffffffffff;
    local_res8[0] = iVar3;
    FUN_14504b210(&local_78,local_res18,local_res8);
    if (local_res18[0] == local_70) {
      iVar1 = local_70 + 1;
      if ((int)(local_6c & 0x7fffffff) < iVar1) {
        FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
      }
      piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
      local_70 = iVar1;
      if (piVar2 != (int *)0x0) {
        *(undefined8 *)(piVar2 + 1) = local_res10;
        *piVar2 = iVar3;
      }
    }
    else {
      *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
    }
    iVar3 = param_2[0xb];
    local_res10 = 0xffffffffffffffff;
    local_res8[0] = iVar3;
    FUN_14504b210(&local_78,local_res18,local_res8);
    if (local_res18[0] == local_70) {
      iVar1 = local_70 + 1;
      if ((int)(local_6c & 0x7fffffff) < iVar1) {
        FUN_14504b680(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar1);
      }
      piVar2 = (int *)(local_78 + (longlong)local_70 * 0xc);
      local_70 = iVar1;
      if (piVar2 != (int *)0x0) {
        *(undefined8 *)(piVar2 + 1) = local_res10;
        *piVar2 = iVar3;
      }
    }
    else {
      *(undefined8 *)(local_78 + 4 + (longlong)local_res18[0] * 0xc) = local_res10;
    }
  }
  FUN_145058360(param_1,param_2,&local_88,0xffffffff);
  FUN_1450585c0(param_1,param_2);
  FUN_14504aaf0(&local_88,*(undefined8 *)(param_1 + 0xa0));
  if ((local_38 != 0) && (*(int *)(local_38 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_38,0);
    FUN_144b3ec00(&local_38);
  }
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 6);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  if ((local_68 != 0) && (*(int *)(local_68 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_68,0);
    FUN_144b3ec00(&local_68);
  }
  local_70 = 0;
  if ((-1 < (int)local_6c) && (local_78 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) * 0xc);
  }
  return;
}



// FUNCTION 145057fa0 FUN_145057fa0 body=948 status=ok
// SIG undefined FUN_145057fa0(void)

void FUN_145057fa0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,char param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  int local_38;
  undefined4 uStack_34;
  
  uVar2 = *param_3;
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 == *(longlong *)(param_1 + 0x78)) {
    lVar4 = *(longlong *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar9 = *(uint *)(lVar4 + 0x40);
    iVar6 = uVar9 + 1;
    if ((int)(*(uint *)(lVar4 + 0x44) & 0x7fffffff) < iVar6) {
      FUN_147e4dcf0(lVar4 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + (longlong)*(int *)(lVar4 + 0x40) * 0xc);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = uVar2;
      *(undefined4 *)(puVar7 + 1) = uVar3;
    }
    *(int *)(lVar4 + 0x40) = iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x8c);
    *(undefined8 *)(lVar4 + (longlong)iVar6 * 0xc) = uVar2;
    *(undefined4 *)(lVar4 + 8 + (longlong)iVar6 * 0xc) = *(undefined4 *)(param_3 + 1);
    uVar9 = *(int *)(param_1 + 0x80) << 0x1e | *(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x8c);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  FUN_145058360(param_1,param_2,param_5,uVar9);
  if (param_8 == '\0') {
    iVar6 = (int)param_7[1];
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      lVar8 = (longlong)*(int *)(*param_7 + (longlong)iVar6 * 0x28);
      lVar4 = *param_7 + (longlong)iVar6 * 0x28;
      FUN_14504baf0(*(undefined8 *)(param_1 + 0xc0),lVar8,
                    *(undefined4 *)
                     (lVar8 * 0x60 + 0x10 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)),
                    *(undefined8 *)(lVar4 + 8),lVar4 + 0x10);
    }
  }
  else {
    piVar10 = *(int **)(param_2 + 0x98);
    piVar1 = piVar10 + *(int *)(param_2 + 0xa0);
    for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
      if (*piVar10 != *(int *)(param_2 + 0x2c)) {
        puVar7 = (undefined8 *)((longlong)*piVar10 * 0x20 + **(longlong **)(param_1 + 0xc0));
        *puVar7 = param_4;
        FUN_14504b960(puVar7 + 1);
      }
    }
    piVar10 = *(int **)(param_2 + 0x158);
    piVar1 = piVar10 + *(int *)(param_2 + 0x160);
    for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
      if (*piVar10 != *(int *)(param_2 + 0x10)) {
        puVar7 = (undefined8 *)((longlong)*piVar10 * 0x20 + **(longlong **)(param_1 + 0xc0));
        *puVar7 = param_4;
        FUN_14504b960(puVar7 + 1);
      }
    }
    piVar10 = *(int **)(param_2 + 0x38);
    piVar1 = piVar10 + *(int *)(param_2 + 0x40);
    for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
      if (*piVar10 != *(int *)(param_2 + 4)) {
        FUN_14504b960(**(longlong **)(param_1 + 0xc0) + 8 + (longlong)*piVar10 * 0x20);
      }
    }
    piVar10 = *(int **)(param_2 + 0xf8);
    piVar1 = piVar10 + *(int *)(param_2 + 0x100);
    for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
      if (*piVar10 != *(int *)(param_2 + 0x20)) {
        FUN_14504b960(**(longlong **)(param_1 + 0xc0) + 8 + (longlong)*piVar10 * 0x20);
      }
    }
  }
  FUN_1450585c0(param_1,param_2);
  plVar5 = *(longlong **)(param_1 + 0xb8);
  puVar11 = *(undefined8 **)(param_6 + 0x10);
  puVar7 = (undefined8 *)((longlong)puVar11 + (longlong)*(int *)(param_6 + 0x18) * 0xc);
  for (; puVar11 != puVar7; puVar11 = (undefined8 *)((longlong)puVar11 + 0xc)) {
    local_38 = (int)*puVar11;
    uStack_34 = (undefined4)((ulonglong)*puVar11 >> 0x20);
    *(ulonglong *)(*plVar5 + (longlong)local_38 * 8) =
         CONCAT44(*(undefined4 *)(puVar11 + 1),uStack_34);
  }
  FUN_14504aaf0(param_5,*(undefined8 *)(param_1 + 0xa0));
  piVar10 = *(int **)(param_2 + 0x38);
  piVar1 = piVar10 + *(int *)(param_2 + 0x40);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    if (*piVar10 != *(int *)(param_2 + 4)) {
      FUN_145345880(param_1 + 0x18);
    }
  }
  piVar10 = *(int **)(param_2 + 0xf8);
  piVar1 = piVar10 + *(int *)(param_2 + 0x100);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    if (*piVar10 != *(int *)(param_2 + 0x20)) {
      FUN_145345880(param_1 + 0x18);
    }
  }
  piVar10 = *(int **)(param_2 + 0x98);
  piVar1 = piVar10 + *(int *)(param_2 + 0xa0);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    if (*piVar10 != *(int *)(param_2 + 0x2c)) {
      FUN_145345880(param_1 + 0x18);
    }
  }
  piVar10 = *(int **)(param_2 + 0x158);
  piVar1 = piVar10 + *(int *)(param_2 + 0x160);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    if (*piVar10 != *(int *)(param_2 + 0x10)) {
      FUN_145345880(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 145058360 FUN_145058360 body=200 status=ok
// SIG undefined FUN_145058360(void)

void FUN_145058360(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x98);
  piVar1 = piVar2 + *(int *)(param_2 + 0xa0);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != *(int *)(param_2 + 0x2c)) {
      *(undefined4 *)((longlong)*piVar2 * 0x60 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) =
           param_4;
    }
  }
  piVar2 = *(int **)(param_2 + 0x158);
  piVar1 = piVar2 + *(int *)(param_2 + 0x160);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != *(int *)(param_2 + 0x10)) {
      *(undefined4 *)((longlong)*piVar2 * 0x60 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) =
           param_4;
    }
  }
  FUN_145058430(param_1,param_2,param_3);
  if (-1 < *(int *)(param_2 + 0x1c)) {
    FUN_145058430(param_1,param_2 + 0x1c,param_3);
  }
  return;
}



// FUNCTION 145058430 FUN_145058430 body=397 status=ok
// SIG undefined FUN_145058430(void)

void FUN_145058430(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  lVar9 = (longlong)*param_2 * 0x60 + lVar11;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar10 = (longlong)*(int *)(lVar9 + 0xc) * 0x60 + lVar11;
  lVar11 = (longlong)*(int *)(lVar9 + 8) * 0x60 + lVar11;
  iVar1 = *(int *)(lVar9 + 4);
  cVar6 = FUN_144cb52c0();
  if ((cVar6 != '\0') && (-1 < *(int *)(lVar10 + 0x10))) {
    uVar7 = FUN_144cb5330(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar9 + 8));
    FUN_144cb5280(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar10 + 0x10),uVar7);
  }
  cVar6 = FUN_144cb52c0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar9 + 0xc));
  if ((cVar6 != '\0') && (-1 < *(int *)(lVar11 + 0x10))) {
    uVar7 = FUN_144cb5330(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar9 + 0xc));
    FUN_144cb5280(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar11 + 0x10),uVar7);
  }
  iVar2 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar10 + 0x10) < 0) {
    if (-1 < iVar2) {
      *(undefined4 *)
       ((longlong)iVar2 * 0x60 + 0x10 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) =
           0xffffffff;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(lVar10 + 0x10) * 0x60;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    if (iVar2 < 0) {
      *(undefined4 *)(lVar5 + 0x10 + lVar8) = 0xffffffff;
    }
    else {
      *(int *)(lVar5 + 0x10 + lVar8) = iVar2;
      *(undefined4 *)
       ((longlong)*(int *)(lVar11 + 0x10) * 0x60 + 0x10 +
       *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) = *(undefined4 *)(lVar10 + 0x10);
      iVar2 = *(int *)(param_1 + 0x68);
      if (-1 < iVar2) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 200) + 8);
        iVar3 = *(int *)(lVar5 + (longlong)*(int *)(lVar10 + 0x10) * 4);
        if (iVar3 == iVar2) {
          iVar3 = *(int *)(lVar5 + (longlong)*(int *)(lVar11 + 0x10) * 4);
          if (iVar3 != iVar2) {
            *(int *)(lVar5 + (longlong)*(int *)(lVar10 + 0x10) * 4) = iVar3;
          }
        }
        else {
          *(int *)(lVar5 + (longlong)*(int *)(lVar11 + 0x10) * 4) = iVar3;
        }
      }
    }
  }
  *(undefined4 *)(lVar9 + 4) = 0xffffffff;
  *(undefined4 *)(lVar10 + 4) = 0xffffffff;
  *(undefined4 *)(lVar11 + 4) = 0xffffffff;
  *(undefined4 *)(lVar4 + (longlong)iVar1 * 4) = 0xffffffff;
  return;
}



// FUNCTION 1450585c0 FUN_1450585c0 body=213 status=ok
// SIG undefined FUN_1450585c0(void)

void FUN_1450585c0(longlong param_1,int *param_2)

{
  FUN_14504b960(**(longlong **)(param_1 + 0xc0) + (longlong)*param_2 * 0x20 + 8);
  FUN_14504b960(**(longlong **)(param_1 + 0xc0) + (longlong)param_2[1] * 0x20 + 8);
  FUN_14504b960(**(longlong **)(param_1 + 0xc0) + (longlong)param_2[4] * 0x20 + 8);
  if (-1 < param_2[7]) {
    FUN_14504b960(**(longlong **)(param_1 + 0xc0) + 8 + (longlong)param_2[7] * 0x20);
    FUN_14504b960(**(longlong **)(param_1 + 0xc0) + (longlong)param_2[8] * 0x20 + 8);
    FUN_14504b960(**(longlong **)(param_1 + 0xc0) + (longlong)param_2[0xb] * 0x20 + 8);
  }
  return;
}



// FUNCTION 1450586a0 FUN_1450586a0 body=1546 status=ok
// SIG undefined FUN_1450586a0(void)

ulonglong FUN_1450586a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined2 uStackX_12;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_e8;
  undefined8 local_d8;
  int local_c4;
  int local_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68 [2];
  longlong local_58;
  longlong lStack_50;
  longlong local_48 [2];
  
  uVar14 = (ulonglong)*(int *)(param_2 + 8);
  if ((-1 < *(int *)(param_2 + 8)) && (-1 < *(int *)(param_2 + 0x14))) {
    lVar23 = (longlong)*(int *)(param_2 + 0x14) * 0x60;
    lVar24 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
    uVar15 = *(ulonglong *)
              (lVar2 + (ulonglong)(*(uint *)(uVar14 * 0x60 + lVar24) & 0x3fffffff) * 0xc);
    local_e8._0_4_ = (int)uVar15;
    iVar11 = (int)local_e8;
    uVar21 = (ulonglong)(int)local_e8;
    local_88 = uVar15 >> 0x20;
    uVar27 = (uint)(uVar15 >> 0x20);
    uVar14 = (ulonglong)
             (*(uint *)((longlong)*(int *)(uVar14 * 0x60 + 0xc + lVar24) * 0x60 + lVar24) &
             0x3fffffff);
    uVar1 = *(undefined8 *)(lVar2 + uVar14 * 0xc);
    iVar20 = *(int *)(lVar2 + 8 + uVar14 * 0xc);
    uVar14 = (ulonglong)(*(uint *)(lVar23 + lVar24) & 0x3fffffff);
    local_d8 = *(undefined8 *)(lVar2 + uVar14 * 0xc);
    iVar30 = *(int *)(lVar2 + 8 + uVar14 * 0xc);
    local_a8._0_4_ = (int)uVar1;
    iVar22 = (int)local_a8 - (int)local_e8;
    iVar12 = (int)local_d8;
    local_a8 = (longlong)iVar22;
    iVar16 = (int)((ulonglong)uVar1 >> 0x20) - uVar27;
    local_90 = (longlong)iVar16;
    uVar1 = *(undefined8 *)
             (lVar2 + (ulonglong)
                      (*(uint *)((longlong)*(int *)(lVar23 + 0xc + lVar24) * 0x60 + lVar24) &
                      0x3fffffff) * 0xc);
    local_e8._0_4_ = (int)uVar1;
    iVar13 = (int)local_e8 - (int)local_d8;
    local_98 = (longlong)iVar13;
    iVar28 = (int)((ulonglong)local_d8 >> 0x20);
    iVar19 = (int)((ulonglong)uVar1 >> 0x20) - iVar28;
    local_e8 = (longlong)iVar19;
    uVar15 = (longlong)iVar13 * (longlong)iVar16 - (longlong)iVar19 * (longlong)iVar22;
    uVar14 = 0;
    if (uVar15 != 0) {
      lVar24 = (iVar11 - (int)local_d8) * local_e8 - (int)(uVar27 - iVar28) * local_98;
      uVar14 = -uVar15;
      if ((longlong)-uVar15 < 0) {
        uVar14 = uVar15;
      }
      if ((longlong)uVar15 < 0) {
        lVar24 = -lVar24;
      }
      uVar15 = (ulonglong)(int)uVar27;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar15;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar14;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar21;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      uVar29 = uVar15 * uVar14 + local_90 * lVar24;
      local_b8 = uVar21 * uVar14 + local_a8 * lVar24;
      lStack_b0 = (SUB168(auVar4 * auVar6,8) - ((longlong)uVar21 >> 0x3f & uVar14)) +
                  SUB168(SEXT816(lVar24) * SEXT816(local_a8),8) +
                  (ulonglong)CARRY8(uVar21 * uVar14,local_a8 * lVar24);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar29;
      uVar29 = uVar29 * 2;
      local_78 = uVar29 + uVar14;
      local_f8 = uVar14 * 2;
      lStack_70 = ((SUB168(auVar3 * auVar5,8) - ((longlong)uVar15 >> 0x3f & uVar14)) +
                   SUB168(SEXT816(lVar24) * SEXT816(local_90),8) +
                  (ulonglong)CARRY8(uVar15 * uVar14,local_90 * lVar24)) * 2 +
                  SUB168(ZEXT816(2) * auVar7,8) + ((longlong)uVar14 >> 0x3f) +
                  (ulonglong)CARRY8(uVar29,uVar14);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_b8;
      local_108 = local_b8 * 2 + uVar14;
      lStack_100 = lStack_b0 * 2 + SUB168(ZEXT816(2) * auVar8,8) + ((longlong)uVar14 >> 0x3f) +
                   (ulonglong)CARRY8(local_b8 * 2,uVar14);
      local_c4 = iVar20;
      local_c0 = iVar30;
      local_68[0] = local_f8;
      local_58 = local_108;
      lStack_50 = lStack_100;
      local_48[0] = local_f8;
      FUN_14505ec20(&local_78,local_68,0xffffffff,&local_108);
      FUN_14505ec20(&local_58,local_48,0xffffffff,&local_b8);
      iVar13 = 0;
      uVar14 = 0;
      if ((((longlong)local_b8 >> 0x17) + 1U < 2 && lStack_b0 == lStack_b0 >> 0x3f) &&
          ((local_108 >> 0x17) + 1U < 2 && lStack_100 == lStack_100 >> 0x3f)) {
        uVar9 = local_d8._4_4_;
        uVar14 = (ulonglong)local_d8._4_4_;
        local_res10 = 0;
        uStackX_11 = 0;
        uStackX_12 = 0;
        local_d8 = (ulonglong)uVar27 << 0x20;
        bVar10 = false;
        iVar16 = iVar13;
        do {
          if (bVar10) goto LAB_145058c25;
          iVar19 = iVar16;
          if (iVar16 <= iVar13) {
            do {
              iVar30 = local_c0;
              iVar20 = local_c4;
              iVar22 = iVar16;
              if (bVar10) break;
              do {
                if (bVar10) break;
                iVar28 = (int)(char)iVar19 + (int)local_b8;
                iVar13 = (int)(char)iVar22 + (int)local_108;
                lVar24 = (iVar28 - iVar11) * local_90 - (iVar13 - (int)local_88) * local_a8;
                bVar25 = 0;
                if (lVar24 != 0) {
                  bVar25 = (byte)((ulonglong)lVar24 >> 0x3f) ^ 1;
                }
                if (bVar25 == 0) {
                  lVar24 = (iVar28 - iVar12) * local_e8 - (int)(iVar13 - uVar9) * local_98;
                  bVar25 = 0;
                  if (lVar24 != 0) {
                    bVar25 = (byte)((ulonglong)lVar24 >> 0x3f) ^ 1;
                  }
                  if ((bVar25 == 0) &&
                     ((longlong)(iVar13 >> 0x17) + 1U < 2 && (longlong)(iVar28 >> 0x17) + 1U < 2)) {
                    bVar10 = true;
                    local_d8 = CONCAT44(iVar13,iVar28);
                  }
                }
                iVar13 = CONCAT22(uStackX_12,CONCAT11(uStackX_11,local_res10));
                iVar22 = iVar22 + 1;
              } while (iVar22 <= iVar13);
              iVar19 = iVar19 + 1;
            } while (iVar19 <= iVar13);
          }
          iVar13 = iVar13 + 1;
          iVar16 = iVar16 + -1;
          local_res10 = (undefined1)iVar13;
          uStackX_11 = (undefined1)((uint)iVar13 >> 8);
          uStackX_12 = (undefined2)((uint)iVar13 >> 0x10);
        } while (-8 < iVar16);
        if (bVar10) {
LAB_145058c25:
          uVar27 = iVar20 + iVar30;
          uVar9 = -uVar27;
          if ((int)-uVar27 < 0) {
            uVar9 = uVar27;
          }
          cVar17 = (char)((ulonglong)uVar9 % 2);
          uVar26 = -(uVar9 / 2);
          if (-1 < (int)uVar27) {
            uVar26 = uVar9 / 2;
          }
          cVar18 = -cVar17;
          if (-1 < (int)uVar27) {
            cVar18 = cVar17;
          }
          *param_3 = (int)local_d8;
          param_3[1] = (int)((ulonglong)local_d8 >> 0x20);
          uVar27 = uVar26 - 1;
          if ((cVar18 != '\0') != 0xffffffff) {
            uVar27 = uVar26;
          }
          param_3[2] = uVar27;
          return CONCAT71((uint7)(uint3)(uVar27 >> 8),1);
        }
      }
    }
  }
  return uVar14 & 0xffffffffffffff00;
}



// FUNCTION 145058cb0 FUN_145058cb0 body=927 status=ok
// SIG undefined FUN_145058cb0(void)

bool FUN_145058cb0(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                  longlong param_6,undefined8 *param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 local_res18;
  undefined4 local_58;
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  puVar4 = param_7;
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 1;
  if ((*(int *)(param_2 + 0xc) < 1) || (*(int *)(param_2 + 0xc) != *(int *)(param_2 + 0x18))) {
    local_res18 = param_3;
    if (param_4 == '\0') {
      piVar7 = *(int **)(param_2 + 0x98);
      piVar1 = piVar7 + *(int *)(param_2 + 0xa0);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        iVar2 = *piVar7;
        if (iVar2 != *(int *)(param_2 + 0x2c)) {
          cVar5 = FUN_145059050(param_1,iVar2,local_res18);
          if (cVar5 == '\0') {
            return false;
          }
          if (iVar2 != *(int *)(param_2 + 0x30)) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
            uVar6 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) +
                     (ulonglong)
                     (*(uint *)((longlong)*(int *)((longlong)iVar2 * 0x60 + 0xc + lVar3) * 0x60 +
                               lVar3) & 0x3fffffff) * 0xc);
            local_58 = (undefined4)uVar6;
            param_7._0_4_ = local_58;
            param_7._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uVar6 = FUN_14504acd0(param_6,iVar2);
            cVar5 = FUN_144d2cef0(param_6 + 0x30,&local_res18,&param_7,uVar6,puVar4);
            if (cVar5 == '\0') {
              return false;
            }
          }
        }
      }
      piVar7 = *(int **)(param_2 + 0x38);
      piVar1 = piVar7 + *(int *)(param_2 + 0x40);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        iVar2 = *piVar7;
        if ((iVar2 != *(int *)(param_2 + 4)) && (iVar2 != *(int *)(param_2 + 8))) {
          uVar6 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) +
                   (ulonglong)
                   (*(uint *)((longlong)iVar2 * 0x60 +
                             *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) & 0x3fffffff) * 0xc);
          local_58 = (undefined4)uVar6;
          param_7._0_4_ = local_58;
          param_7._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar6 = FUN_14504acd0(param_6);
          cVar5 = FUN_144d2cef0(param_6 + 0x30,&param_7,&local_res18,uVar6,puVar4);
          if (cVar5 == '\0') {
            return false;
          }
        }
      }
    }
    if (param_5 == '\0') {
      piVar7 = *(int **)(param_2 + 0x158);
      piVar1 = piVar7 + *(int *)(param_2 + 0x160);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        iVar2 = *piVar7;
        if (iVar2 != *(int *)(param_2 + 0x10)) {
          cVar5 = FUN_145059050(param_1,iVar2,local_res18);
          if (cVar5 == '\0') {
            return false;
          }
          if (iVar2 != *(int *)(param_2 + 0x14)) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
            uVar6 = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) +
                     (ulonglong)
                     (*(uint *)((longlong)*(int *)((longlong)iVar2 * 0x60 + 0xc + lVar3) * 0x60 +
                               lVar3) & 0x3fffffff) * 0xc);
            local_58 = (undefined4)uVar6;
            param_7._0_4_ = local_58;
            param_7._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            uVar6 = FUN_14504acd0(param_6,iVar2);
            cVar5 = FUN_144d2cef0(param_6 + 0x30,&local_res18,&param_7,uVar6,puVar4);
            if (cVar5 == '\0') {
              return false;
            }
          }
        }
      }
      piVar7 = *(int **)(param_2 + 0xf8);
      piVar1 = piVar7 + *(int *)(param_2 + 0x100);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        iVar2 = *piVar7;
        if ((iVar2 != *(int *)(param_2 + 0x20)) && (iVar2 != *(int *)(param_2 + 0x24))) {
          uVar6 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) +
                   (ulonglong)
                   (*(uint *)((longlong)iVar2 * 0x60 +
                             *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) & 0x3fffffff) * 0xc);
          local_58 = (undefined4)uVar6;
          param_7._0_4_ = local_58;
          param_7._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar6 = FUN_14504acd0(param_6);
          cVar5 = FUN_144d2cef0(param_6 + 0x30,&param_7,&local_res18,uVar6,puVar4);
          if (cVar5 == '\0') {
            return false;
          }
        }
      }
    }
    cVar5 = FUN_145059110(param_1,param_2,&local_res18,param_6,puVar4);
    if (cVar5 != '\0') {
      local_38 = &local_res18;
      local_48 = param_6;
      local_40 = param_1;
      local_30 = puVar4;
      cVar5 = FUN_14505b9c0(param_2,&local_48);
      if (cVar5 != '\0') {
        local_38 = &local_res18;
        local_48 = param_6;
        local_40 = param_1;
        local_30 = puVar4;
        cVar5 = FUN_14505bbb0(param_2,&local_48);
        return cVar5 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 145059050 FUN_145059050 body=189 status=ok
// SIG undefined FUN_145059050(void)

bool FUN_145059050(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined4 local_1c;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  uVar1 = *(undefined8 *)
           (lVar3 + (ulonglong)
                    (*(uint *)((longlong)*(int *)((longlong)param_2 * 0x60 + 0xc + lVar5) * 0x60 +
                              lVar5) & 0x3fffffff) * 0xc);
  local_1c = (int)uVar1;
  uVar2 = *(undefined8 *)
           (lVar3 + (ulonglong)
                    (*(uint *)((longlong)*(int *)((longlong)param_2 * 0x60 + 8 + lVar5) * 0x60 +
                              lVar5) & 0x3fffffff) * 0xc);
  local_28 = (int)uVar2;
  iVar4 = (int)((ulonglong)uVar2 >> 0x20);
  lVar5 = (longlong)((int)((ulonglong)uVar1 >> 0x20) - iVar4) * (longlong)((int)param_3 - local_28)
          - (longlong)((int)((ulonglong)param_3 >> 0x20) - iVar4) * (longlong)(local_1c - local_28);
  return 0 < (int)((uint)(lVar5 >> 0x3f) | (uint)(lVar5 != 0));
}



// FUNCTION 145059110 FUN_145059110 body=1926 status=ok
// SIG undefined FUN_145059110(void)

undefined8
FUN_145059110(longlong param_1,int *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  char local_res10 [8];
  undefined8 *local_res18;
  char local_77 [3];
  int local_74;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_58;
  longlong *local_48;
  
  local_res10[0] = '\0';
  local_res18 = param_3;
  cVar5 = FUN_1450598a0(param_1,param_2,param_2 + 7,param_3,local_77,param_4,param_5);
  if (cVar5 == '\0') {
    return 0;
  }
  cVar5 = '\0';
  if ((-1 < param_2[7]) &&
     (cVar6 = FUN_1450598a0(param_1,param_2 + 7,param_2,param_3,local_res10,param_4,param_5),
     cVar5 = local_res10[0], cVar6 == '\0')) {
    return 0;
  }
  iVar9 = -1;
  iVar10 = -1;
  if ((local_77[0] != '\0') || (iVar13 = iVar10, iVar11 = -1, cVar5 != '\0')) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    iVar9 = *(int *)((longlong)param_2[1] * 0x60 + 0x10 + lVar1);
    iVar10 = *(int *)((longlong)param_2[4] * 0x60 + 0x10 + lVar1);
    iVar13 = -1;
    iVar11 = -1;
    if (-1 < param_2[7]) {
      iVar13 = *(int *)((longlong)param_2[0xb] * 0x60 + 0x10 + lVar1);
      iVar11 = *(int *)((longlong)param_2[8] * 0x60 + 0x10 + lVar1);
    }
  }
  bVar3 = false;
  bVar4 = false;
  if ((local_77[0] != '\0') && (-1 < iVar9)) {
    local_74 = FUN_145055e00(*(longlong *)(param_1 + 8),
                             *(undefined4 *)
                              ((longlong)iVar9 * 0x60 +
                               *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 8),iVar13);
    plVar12 = (longlong *)(param_1 + 8);
    bVar3 = bVar4;
    if (local_74 == iVar13) {
      if (iVar11 < 0) {
LAB_14505928e:
        local_70 = (longlong *)(param_1 + 8);
        plVar12 = local_70;
        if (local_74 != iVar13) goto LAB_14505932d;
      }
      else {
        if (local_res10[0] != '\0') {
          cVar5 = FUN_145055c40(*(longlong *)(param_1 + 8),iVar13,iVar11);
          if (cVar5 != '\0') goto LAB_1450592f2;
          goto LAB_14505928e;
        }
        piVar8 = (int *)FUN_14504acd0(param_4,iVar13);
        if ((*piVar8 < 0) && (piVar8 = (int *)FUN_14504acd0(param_4,iVar11), *piVar8 < 0)) {
LAB_1450592f2:
          local_74 = FUN_145055e00(*(longlong *)(param_1 + 8),
                                   *(undefined4 *)
                                    ((longlong)iVar11 * 0x60 +
                                     *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 8),iVar10);
          bVar3 = true;
          goto LAB_14505928e;
        }
      }
      local_70 = (longlong *)(param_1 + 8);
      piVar8 = (int *)FUN_14504acd0(param_4,iVar13);
      plVar12 = local_70;
      if (*piVar8 < 0) {
        local_74 = *(int *)((longlong)param_2[7] * 0x60 + 8 + *(longlong *)(*local_70 + 0x28));
      }
    }
LAB_14505932d:
    if (local_74 != iVar10) {
      iVar7 = FUN_145055cf0(*plVar12,*(undefined4 *)
                                      ((longlong)iVar10 * 0x60 + *(longlong *)(*plVar12 + 0x28) +
                                      0xc),iVar11);
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (iVar7 == iVar11) {
        if (-1 < iVar13) {
          if (local_res10[0] == '\0') {
            piVar8 = (int *)FUN_14504acd0(param_4,iVar11);
            if ((*piVar8 < 0) && (piVar8 = (int *)FUN_14504acd0(param_4,iVar13), *piVar8 < 0))
            goto LAB_1450593a6;
          }
          else {
            cVar5 = FUN_145055c40(*plVar12,iVar13,iVar11);
            if (cVar5 != '\0') {
LAB_1450593a6:
              iVar7 = FUN_145055cf0(*(longlong *)(param_1 + 8),
                                    *(undefined4 *)
                                     ((longlong)iVar13 * 0x60 +
                                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 0xc),iVar9)
              ;
              local_68 = CONCAT44(local_68._4_4_,iVar7);
              bVar3 = true;
              if (iVar7 != iVar11) goto LAB_145059405;
            }
          }
        }
        piVar8 = (int *)FUN_14504acd0(param_4,iVar11);
        if (*piVar8 < 0) {
          iVar7 = *(int *)((longlong)param_2[7] * 0x60 + 0xc +
                          *(longlong *)(*(longlong *)(param_1 + 8) + 0x28));
        }
        else {
          iVar7 = (int)local_68;
        }
      }
LAB_145059405:
      if (*(char *)(param_1 + 0x50) != '\0') goto LAB_14505940b;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      local_68 = *(undefined8 *)
                  (lVar1 + (ulonglong)(*(uint *)((longlong)local_74 * 0x60 + lVar2) & 0x3fffffff) *
                           0xc);
      local_70 = *(longlong **)
                  (lVar1 + (ulonglong)
                           (*(uint *)((longlong)*(int *)((longlong)iVar7 * 0x60 + 0xc + lVar2) *
                                      0x60 + lVar2) & 0x3fffffff) * 0xc);
      local_58 = local_68;
      cVar5 = FUN_145049c10(param_4,local_74,iVar7,*local_res18,local_68,local_70);
      if (cVar5 == '\0') {
        return 0;
      }
    }
  }
  if ((local_res10[0] != '\0') && (!bVar3)) {
    plVar12 = (longlong *)(param_1 + 8);
    local_74 = FUN_145055e00(*(longlong *)(param_1 + 8),
                             *(undefined4 *)
                              ((longlong)iVar11 * 0x60 +
                               *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 8),iVar10);
    if (local_74 == iVar10) {
      if (((-1 < iVar9) &&
          (local_70 = plVar12, piVar8 = (int *)FUN_14504acd0(param_4,iVar10), *piVar8 < 0)) &&
         (local_70 = plVar12, piVar8 = (int *)FUN_14504acd0(param_4,iVar9), *piVar8 < 0)) {
        local_70 = plVar12;
        local_74 = FUN_145055e00(*plVar12,*(undefined4 *)
                                           ((longlong)iVar9 * 0x60 + *(longlong *)(*plVar12 + 0x28)
                                           + 8),iVar13);
      }
      local_70 = (longlong *)(param_1 + 8);
      plVar12 = local_70;
      if ((local_74 == iVar10) &&
         (piVar8 = (int *)FUN_14504acd0(param_4,local_74), plVar12 = local_70, *piVar8 < 0)) {
        local_74 = *(int *)((longlong)*param_2 * 0x60 + 8 + *(longlong *)(*local_70 + 0x28));
      }
    }
    iVar7 = FUN_145055cf0(*plVar12,*(undefined4 *)
                                    ((longlong)iVar13 * 0x60 + *(longlong *)(*plVar12 + 0x28) + 0xc)
                          ,iVar9);
    local_68 = CONCAT44(local_68._4_4_,iVar7);
    if (iVar7 == iVar9) {
      local_70 = plVar12;
      if (-1 < iVar10) {
        piVar8 = (int *)FUN_14504acd0(param_4,iVar9);
        if ((*piVar8 < 0) &&
           (local_70 = plVar12, piVar8 = (int *)FUN_14504acd0(param_4,iVar10), *piVar8 < 0)) {
          local_70 = plVar12;
          iVar7 = FUN_145055cf0(*plVar12,*(undefined4 *)
                                          ((longlong)iVar10 * 0x60 + *(longlong *)(*plVar12 + 0x28)
                                          + 0xc),iVar11);
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          local_70 = (longlong *)(param_1 + 8);
        }
        else {
          local_70 = plVar12;
          iVar7 = (int)local_68;
        }
      }
      plVar12 = local_70;
      if (iVar7 == iVar9) {
        piVar8 = (int *)FUN_14504acd0(param_4,iVar7);
        plVar12 = local_70;
        if (*piVar8 < 0) {
          iVar7 = *(int *)((longlong)*param_2 * 0x60 + 0xc + *(longlong *)(*local_70 + 0x28));
        }
        else {
          iVar7 = (int)local_68;
        }
      }
    }
    if ((local_74 != iVar13) && (iVar7 != iVar11)) {
      if (*(char *)(param_1 + 0x50) != '\0') {
LAB_14505940b:
        iVar9 = *(int *)(param_1 + 0x60) + 1;
        if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar9) {
          FUN_1401f86b2(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar9);
        }
        piVar8 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x60) * 4);
        if (piVar8 != (int *)0x0) {
          *piVar8 = *param_2;
        }
        *(int *)(param_1 + 0x60) = iVar9;
        return 0;
      }
      lVar1 = *(longlong *)(*plVar12 + 0x38);
      lVar2 = *(longlong *)(*plVar12 + 0x28);
      local_68 = *(undefined8 *)
                  (lVar1 + (ulonglong)(*(uint *)((longlong)local_74 * 0x60 + lVar2) & 0x3fffffff) *
                           0xc);
      local_70 = *(longlong **)
                  (lVar1 + (ulonglong)
                           (*(uint *)((longlong)*(int *)((longlong)iVar7 * 0x60 + 0xc + lVar2) *
                                      0x60 + lVar2) & 0x3fffffff) * 0xc);
      local_58 = local_68;
      local_48 = local_70;
      cVar5 = FUN_145049c10(param_4,local_74,iVar7,*local_res18,local_68,local_70);
      if (cVar5 == '\0') {
        return 0;
      }
    }
  }
  cVar5 = local_res10[0];
  if (local_77[0] == '\0') {
    FUN_145059fe0(param_1,param_2,param_4);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    iVar9 = param_2[4];
    if (-1 < *(int *)((longlong)param_2[1] * 0x60 + 0x10 + lVar1)) {
      FUN_1450561a0(param_4);
    }
    if (-1 < *(int *)((longlong)iVar9 * 0x60 + lVar1 + 0x10)) {
      FUN_1450561a0(param_4);
    }
  }
  if (cVar5 == '\0') {
    if (-1 < param_2[7]) {
      FUN_145059fe0(param_1,param_2 + 7,param_4);
    }
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    iVar9 = param_2[0xb];
    if (-1 < *(int *)((longlong)param_2[8] * 0x60 + 0x10 + lVar1)) {
      FUN_1450561a0(param_4);
    }
    if (-1 < *(int *)((longlong)iVar9 * 0x60 + lVar1 + 0x10)) {
      FUN_1450561a0(param_4);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1450598a0 FUN_1450598a0 body=1845 status=ok
// SIG undefined FUN_1450598a0(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_1450598a0(longlong param_1,uint *param_2,longlong param_3,uint *param_4,undefined1 *param_5
                  ,longlong *param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res10;
  longlong local_res18;
  uint *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint *local_58 [2];
  longlong local_48;
  
  plVar6 = param_6;
  *param_5 = 0;
  local_res8 = *param_2;
  local_68 = (longlong)(int)local_res8;
  local_res10 = *(longlong *)(param_1 + 8);
  uVar1 = param_2[2];
  lVar16 = (longlong)(int)uVar1;
  lVar19 = *(longlong *)(local_res10 + 0x28);
  puVar18 = (uint *)(local_68 * 0x60 + lVar19);
  local_78 = puVar18 + 3;
  local_res18 = param_3;
  local_58[0] = puVar18;
  if ((uVar1 != puVar18[2]) || (param_2[5] != *local_78)) {
    piVar9 = (int *)FUN_14504acd0(param_6);
    uVar5 = local_res8;
    if (-1 < *piVar9) {
      local_48 = *(undefined8 *)
                  (*(longlong *)(local_res10 + 0x38) +
                  (ulonglong)
                  (*(uint *)((longlong)(int)*local_78 * 0x60 + *(longlong *)(local_res10 + 0x28)) &
                  0x3fffffff) * 0xc);
      param_5._0_4_ = (uint)local_48;
      param_5._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
      local_res10 = *(undefined8 *)
                     (*(longlong *)(local_res10 + 0x38) + (ulonglong)(*puVar18 & 0x3fffffff) * 0xc);
      puVar12 = (undefined4 *)FUN_14504acd0(plVar6,local_res8);
      lVar19 = FUN_144d2ce80(plVar6 + 6,*puVar12);
      if (*(char *)(lVar19 + 9) != '\0') {
        return false;
      }
      uVar4 = param_2[5];
      puVar12 = (undefined4 *)FUN_14504acd0(plVar6,uVar4);
      lVar19 = FUN_144d2ce80(plVar6 + 6,*puVar12);
      if (*(char *)(lVar19 + 9) != '\0') {
        return false;
      }
      FUN_14504a710(plVar6,uVar1,uVar5,uVar4,&local_res10,param_4,&param_5);
      return true;
    }
    uVar5 = param_2[5];
    if ((int)uVar1 < 0) {
      if ((int)uVar5 < 0) {
        return true;
      }
      local_48 = *(undefined8 *)
                  (*(longlong *)(local_res10 + 0x38) +
                  (ulonglong)
                  (*(uint *)((longlong)
                             *(int *)((longlong)(int)uVar5 * 0x60 + 0xc +
                                     *(longlong *)(local_res10 + 0x28)) * 0x60 +
                            *(longlong *)(local_res10 + 0x28)) & 0x3fffffff) * 0xc);
      param_5._0_4_ = (uint)local_48;
      param_5._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
      if (((uint)local_48 == *param_4) && (param_5._4_4_ == param_4[1])) {
        return false;
      }
      uVar13 = FUN_14504acd0(plVar6,uVar5);
      cVar7 = FUN_144d2cef0(plVar6 + 6,param_4,&param_5,uVar13,param_7);
      return cVar7 != '\0';
    }
    if (-1 < (int)uVar5) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        lVar19 = FUN_14504acd0(plVar6,uVar1);
        lVar19 = FUN_144d2ce80(plVar6 + 6,*(undefined4 *)(lVar19 + 4));
        if (*(char *)(lVar19 + 9) != '\0') {
          return false;
        }
        puVar12 = (undefined4 *)FUN_14504acd0(plVar6,uVar5);
        lVar19 = FUN_144d2ce80(plVar6 + 6,*puVar12);
        if (*(char *)(lVar19 + 9) != '\0') {
          return false;
        }
        lVar19 = *(longlong *)(local_res10 + 0x28);
        local_58[0] = *(uint **)(*(longlong *)(local_res10 + 0x38) +
                                (ulonglong)(*(uint *)(lVar16 * 0x60 + lVar19) & 0x3fffffff) * 0xc);
        local_48 = *(undefined8 *)
                    (*(longlong *)(local_res10 + 0x38) +
                    (ulonglong)
                    (*(uint *)((longlong)*(int *)((longlong)(int)uVar5 * 0x60 + 0xc + lVar19) * 0x60
                              + lVar19) & 0x3fffffff) * 0xc);
        param_5._0_4_ = (uint)local_48;
        param_5._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
        local_res8 = (uint)local_58[0];
        uStackX_c = (uint)((ulonglong)local_58[0] >> 0x20);
        cVar7 = FUN_145049c10(plVar6,uVar1,uVar5,*(undefined8 *)param_4,local_58[0],local_48);
        goto LAB_145059cb2;
      }
      goto LAB_145059a8d;
    }
    local_48 = *(undefined8 *)
                (*(longlong *)(local_res10 + 0x38) +
                (ulonglong)
                (*(uint *)(lVar16 * 0x60 + *(longlong *)(local_res10 + 0x28)) & 0x3fffffff) * 0xc);
    param_5._0_4_ = (uint)local_48;
    param_5._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    if (((uint)local_48 == *param_4) && (param_5._4_4_ == param_4[1])) {
      return false;
    }
    uVar13 = FUN_14504acd0(plVar6,uVar1);
    cVar7 = FUN_144d2cef0(plVar6 + 6,&param_5,param_4,uVar13,param_7);
    goto LAB_145059cb2;
  }
  lVar20 = (longlong)(int)param_2[5] * 0x60 + lVar19;
  puVar17 = (uint *)(lVar16 * 0x60 + lVar19);
  local_78 = *(uint **)(*(longlong *)(local_res10 + 0x38) + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc
                       );
  local_70 = *(undefined4 *)
              (*(longlong *)(local_res10 + 0x38) + 8 + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  local_res8 = (uint)local_78;
  uStackX_c = (uint)((ulonglong)local_78 >> 0x20);
  if (((uint)local_78 == *param_4) && (uStackX_c == param_4[1])) {
    return false;
  }
  local_res10 = lVar16;
  local_48 = lVar20;
  piVar9 = (int *)FUN_14504acd0(param_6);
  uStack_60 = (undefined4)plVar6[7];
  uStack_5c = *(undefined4 *)((longlong)plVar6 + 0x3c);
  puVar11 = (undefined8 *)(*plVar6 + local_res10 * 8);
  if (-1 < *piVar9) {
    uVar2 = *(undefined4 *)puVar11;
    puVar11 = &local_res10;
    local_res10 = CONCAT44(*(undefined4 *)(*plVar6 + 4 + local_68 * 8),uVar2);
  }
  local_68 = plVar6[6];
  cVar7 = FUN_145056640(&local_68,&local_res8,param_4,puVar11,param_7);
  if (cVar7 == '\0') {
    return false;
  }
  local_78 = *(uint **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) +
                       (ulonglong)
                       (*(uint *)((longlong)*(int *)(lVar20 + 0xc) * 0x60 +
                                 *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) & 0x3fffffff) *
                       0xc);
  local_68._0_4_ = (uint)local_78;
  if (((uint)local_68 == *param_4) && ((uint)((ulonglong)local_78 >> 0x20) == param_4[1])) {
    return false;
  }
  local_68 = plVar6[6];
  uStack_60 = (undefined4)plVar6[7];
  uStack_5c = *(undefined4 *)((longlong)plVar6 + 0x3c);
  cVar7 = FUN_145056640(&local_68,param_4,&local_78,*plVar6 + (longlong)(int)param_2[5] * 8,param_7)
  ;
  if (cVar7 == '\0') {
    return false;
  }
  FUN_1450561a0(plVar6,*param_2);
  FUN_1450561a0(plVar6,param_2[2]);
  FUN_1450561a0(plVar6,param_2[5]);
  uVar1 = *(uint *)(lVar20 + 0x10);
  if ((int)puVar17[4] < 0) {
    if (-1 < (int)uVar1) {
      cVar7 = *(char *)(param_1 + 0x50);
joined_r0x000145059a8b:
      if (cVar7 != '\0') goto LAB_145059a8d;
      FUN_145056240(plVar6,uVar1);
    }
  }
  else if ((int)uVar1 < 0) {
    cVar7 = *(char *)(param_1 + 0x50);
    uVar1 = puVar17[4];
    goto joined_r0x000145059a8b;
  }
  lVar19 = local_res18;
  if ((((int)puVar17[4] < 0) && (*(int *)(lVar20 + 0x10) < 0)) && (-1 < (int)puVar18[4])) {
    uVar2 = *(undefined4 *)(local_res18 + 0xc);
    piVar9 = (int *)FUN_14504acd0(plVar6,uVar2);
    if (-1 < *piVar9) {
      FUN_145056240(plVar6,uVar2);
    }
    uVar2 = *(undefined4 *)(lVar19 + 0x18);
    piVar9 = (int *)FUN_14504acd0(plVar6,uVar2);
    if (-1 < *piVar9) {
      FUN_145056240(plVar6,uVar2);
    }
  }
  puVar18 = local_58[0];
  if ((int)puVar17[4] < 0) {
    return true;
  }
  if (*(int *)(lVar20 + 0x10) < 0) {
    return true;
  }
  lVar16 = (longlong)(int)puVar17[4] * 0x60 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  lVar19 = (longlong)*(int *)(lVar20 + 0x10) * 0x60 +
           *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  if ((int)local_58[0][4] < 0) {
    if (*(char *)(param_1 + 0x50) != '\0') {
LAB_145059a8d:
      iVar15 = *(int *)(param_1 + 0x60) + 1;
      if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < iVar15) {
        FUN_1401f86b2(param_1 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar15);
      }
      puVar18 = (uint *)(*(longlong *)(param_1 + 0x58) + (longlong)*(int *)(param_1 + 0x60) * 4);
      if (puVar18 != (uint *)0x0) {
        *puVar18 = *param_2;
      }
      *(int *)(param_1 + 0x60) = iVar15;
      return false;
    }
    FUN_145056240(plVar6,param_2[3]);
    FUN_145056240(plVar6,param_2[6]);
  }
  plVar10 = (longlong *)
            FUN_144cb4860(*(undefined8 *)(param_1 + 8),local_58,*(undefined4 *)(lVar19 + 4));
  lVar20 = *plVar10;
  puVar11 = (undefined8 *)
            FUN_144cb4860(*(undefined8 *)(param_1 + 8),&local_68,*(undefined4 *)(lVar16 + 4));
  piVar9 = (int *)*puVar11;
  iVar15 = (int)(puVar11[1] - (longlong)piVar9 >> 2);
  if (0 < iVar15) {
    lVar14 = 0;
    lVar20 = lVar20 - (longlong)piVar9;
    do {
      if (*piVar9 != *(int *)((longlong)piVar9 + lVar20)) {
        return true;
      }
      lVar14 = lVar14 + 1;
      piVar9 = piVar9 + 1;
    } while (lVar14 < iVar15);
  }
  *(undefined1 *)CONCAT44(param_5._4_4_,(uint)param_5) = 1;
  iVar15 = FUN_145055cf0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar16 + 0xc),0xffffffff);
  iVar8 = FUN_145055e00(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar19 + 8),0xffffffff);
  if (iVar15 == *(int *)(local_48 + 0x10)) {
    return true;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if ((-1 < iVar3) &&
     ((lVar19 = *(longlong *)(*(longlong *)(param_1 + 200) + 8),
      *(int *)(lVar19 + (longlong)iVar15 * 4) != iVar3 ||
      (*(int *)(lVar19 + (longlong)iVar8 * 4) != iVar3)))) {
    uVar1 = puVar18[4];
    if ((int)puVar18[4] < (int)*param_2) {
      uVar1 = *param_2;
    }
    iVar15 = *(int *)(param_1 + 0x98) + 1;
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar15) {
      FUN_1401f86b2((longlong *)(param_1 + 0x90),&PTR_vftable_14c6e47a0,(longlong)iVar15);
    }
    puVar18 = (uint *)(*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0x98) * 4);
    if (puVar18 != (uint *)0x0) {
      *puVar18 = uVar1;
    }
    *(int *)(param_1 + 0x98) = iVar15;
    return false;
  }
  cVar7 = FUN_14504a5b0(plVar6,iVar8,iVar15);
LAB_145059cb2:
  if (cVar7 != '\0') {
    return true;
  }
  return false;
}



// FUNCTION 145059fe0 FUN_145059fe0 body=132 status=ok
// SIG undefined FUN_145059fe0(void)

void FUN_145059fe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((*(int *)(param_2 + 8) != *(int *)(param_2 + 4)) &&
     (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10))) {
    FUN_145056410(param_3,*(int *)(param_2 + 0x14),
                  *(undefined4 *)
                   ((longlong)*(int *)(param_2 + 4) * 0x60 + 0x10 +
                   *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)));
  }
  if ((*(int *)(param_2 + 8) == *(int *)(param_2 + 4)) &&
     (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10))) {
    FUN_145056410(param_3,*(int *)(param_2 + 8),
                  *(undefined4 *)
                   ((longlong)*(int *)(param_2 + 0x10) * 0x60 + 0x10 +
                   *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)));
  }
  return;
}



// FUNCTION 14505a070 FUN_14505a070 body=1554 status=ok
// SIG undefined FUN_14505a070(void)

undefined8
FUN_14505a070(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  piVar12 = *(int **)(param_2 + 0x26);
  iVar10 = 0x7fffff;
  iVar13 = -0x7fffff;
  local_a8 = 0xff800001007fffff;
  piVar1 = piVar12 + (int)param_2[0x28];
  if (piVar12 != piVar1) {
    do {
      uVar4 = *(ulonglong *)
               (*(longlong *)param_1[0x17] +
               (longlong)*(int *)((longlong)*piVar12 * 0x60 + 4 + *(longlong *)(param_1[1] + 0x28))
               * 8);
      if ((int)uVar4 < iVar10) {
        local_a8 = uVar4 & 0xffffffff;
        iVar10 = (int)uVar4;
      }
      iVar8 = (int)(uVar4 >> 0x20);
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar1);
    local_a8 = CONCAT44(iVar13,(undefined4)local_a8);
  }
  piVar12 = *(int **)(param_2 + 0x56);
  piVar1 = piVar12 + (int)param_2[0x58];
  if (piVar12 != piVar1) {
    do {
      uVar4 = *(ulonglong *)
               (*(longlong *)param_1[0x17] +
               (longlong)*(int *)((longlong)*piVar12 * 0x60 + 4 + *(longlong *)(param_1[1] + 0x28))
               * 8);
      if ((int)uVar4 < iVar10) {
        local_a8 = uVar4 & 0xffffffff;
        iVar10 = (int)uVar4;
      }
      iVar8 = (int)(uVar4 >> 0x20);
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar1);
    local_a8 = CONCAT44(iVar13,(undefined4)local_a8);
  }
  cVar7 = FUN_144cb52c0(param_1[1],*param_2);
  uVar4 = local_a8;
  if (cVar7 == '\0') {
    puVar11 = (undefined8 *)(param_1[2] + 0xa0);
  }
  else {
    puVar11 = (undefined8 *)(param_1[2] + 0xa8);
  }
  iVar13 = iVar13 - (int)*puVar11;
  iVar10 = (int)((ulonglong)*puVar11 >> 0x20) + iVar10;
  if ((iVar13 <= *(int *)(param_3 + 1)) && (*(int *)(param_3 + 1) <= iVar10)) {
    piVar12 = *(int **)(param_2 + 0xe);
    piVar1 = piVar12 + (int)param_2[0x10];
    if (piVar12 != piVar1) {
      lVar5 = param_1[1];
      lVar15 = *(longlong *)(lVar5 + 0x28);
      lVar5 = *(longlong *)(lVar5 + 0x38);
      do {
        iVar8 = *(int *)(lVar5 + 8 +
                        (ulonglong)(*(uint *)((longlong)*piVar12 * 0x60 + lVar15) & 0x3fffffff) *
                        0xc);
        if (iVar8 < iVar13) {
          return 0;
        }
        if (iVar10 < iVar8) {
          return 0;
        }
        uVar9 = (ulonglong)
                (*(uint *)((longlong)*(int *)((longlong)*piVar12 * 0x60 + 8 + lVar15) * 0x60 +
                          lVar15) & 0x3fffffff);
        local_98 = *(undefined8 *)(lVar5 + uVar9 * 0xc);
        iVar8 = *(int *)(lVar5 + 8 + uVar9 * 0xc);
        if (iVar8 < iVar13) {
          return 0;
        }
        if (iVar10 < iVar8) {
          return 0;
        }
        piVar12 = piVar12 + 1;
      } while (piVar12 != piVar1);
    }
    piVar12 = *(int **)(param_2 + 0x3e);
    piVar1 = piVar12 + (int)param_2[0x40];
    if (piVar12 != piVar1) {
      lVar5 = *(longlong *)(param_1[1] + 0x28);
      lVar15 = *(longlong *)(param_1[1] + 0x38);
      do {
        iVar8 = *(int *)(lVar15 + 8 +
                        (ulonglong)(*(uint *)((longlong)*piVar12 * 0x60 + lVar5) & 0x3fffffff) * 0xc
                        );
        if (iVar8 < iVar13) {
          return 0;
        }
        if (iVar10 < iVar8) {
          return 0;
        }
        uVar9 = (ulonglong)
                (*(uint *)((longlong)*(int *)((longlong)*piVar12 * 0x60 + 8 + lVar5) * 0x60 + lVar5)
                & 0x3fffffff);
        local_98 = *(undefined8 *)(lVar15 + uVar9 * 0xc);
        iVar8 = *(int *)(lVar15 + 8 + uVar9 * 0xc);
        if (iVar8 < iVar13) {
          return 0;
        }
        if (iVar10 < iVar8) {
          return 0;
        }
        piVar12 = piVar12 + 1;
      } while (piVar12 != piVar1);
    }
    piVar12 = *(int **)(param_2 + 0x26);
    piVar1 = piVar12 + (int)param_2[0x28];
    for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
      uVar3 = *(undefined4 *)((longlong)*piVar12 * 0x60 + *(longlong *)(param_1[1] + 0x28) + 4);
      local_a8._4_4_ = (undefined4)(local_a8 >> 0x20);
      local_a8 = CONCAT44(local_a8._4_4_,uVar3);
      FUN_145061910(param_5 + 0x10,&local_98,&local_a8);
      if ((int)local_98 == *(int *)(param_5 + 0x18)) {
        iVar10 = *(int *)(param_5 + 0x18) + 1;
        if ((int)(*(uint *)(param_5 + 0x1c) & 0x7fffffff) < iVar10) {
          FUN_145061d30(param_5 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        puVar2 = (undefined4 *)
                 (*(longlong *)(param_5 + 0x10) + (longlong)*(int *)(param_5 + 0x18) * 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar3;
          *(ulonglong *)(puVar2 + 1) = uVar4;
        }
        *(int *)(param_5 + 0x18) = iVar10;
      }
      else {
        *(ulonglong *)(*(longlong *)(param_5 + 0x10) + 4 + (longlong)(int)local_98 * 0xc) = uVar4;
      }
    }
    piVar12 = *(int **)(param_2 + 0x56);
    piVar1 = piVar12 + (int)param_2[0x58];
    for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
      uVar3 = *(undefined4 *)((longlong)*piVar12 * 0x60 + *(longlong *)(param_1[1] + 0x28) + 4);
      local_a8._4_4_ = (undefined4)(local_a8 >> 0x20);
      local_a8 = CONCAT44(local_a8._4_4_,uVar3);
      FUN_145061910(param_5 + 0x10,&local_98,&local_a8);
      if ((int)local_98 == *(int *)(param_5 + 0x18)) {
        iVar10 = *(int *)(param_5 + 0x18) + 1;
        if ((int)(*(uint *)(param_5 + 0x1c) & 0x7fffffff) < iVar10) {
          FUN_145061d30(param_5 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        puVar2 = (undefined4 *)
                 (*(longlong *)(param_5 + 0x10) + (longlong)*(int *)(param_5 + 0x18) * 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = uVar3;
          *(ulonglong *)(puVar2 + 1) = uVar4;
        }
        *(int *)(param_5 + 0x18) = iVar10;
      }
      else {
        *(ulonglong *)(*(longlong *)(param_5 + 0x10) + 4 + (longlong)(int)local_98 * 0xc) = uVar4;
      }
    }
    plVar6 = (longlong *)param_1[0x18];
    local_68[0] = 3;
    iVar10 = **(int **)(param_2 + 0xe);
    lVar5 = *plVar6;
    lVar15 = (longlong)iVar10 * 0x20;
    local_60 = 0;
    puVar14 = (uint *)((longlong)iVar10 * 0x60 + *(longlong *)(param_1[1] + 0x28));
    local_70 = *(undefined8 *)(lVar15 + lVar5);
    local_58 = 0;
    local_54 = 0x80000000;
    if ((int)puVar14[4] < iVar10) {
      FUN_145056060(local_68,lVar5 + 8 + lVar15);
    }
    else {
      FUN_145056060(local_68,(longlong)(int)puVar14[4] * 0x20 + 8 + lVar5);
      FUN_145055fb0(local_68,*(undefined8 *)((longlong)(int)puVar14[4] * 0x20 + *plVar6));
    }
    local_88 = 3;
    local_80 = 0;
    local_78 = 0;
    local_a8 = *(longlong *)param_1[0x15];
    local_74 = 0x80000000;
    lStack_a0 = local_a8 + (longlong)(int)((longlong *)param_1[0x15])[1] * 8;
    local_98 = *(undefined8 *)
                (*(longlong *)(param_1[1] + 0x38) + (ulonglong)(*puVar14 & 0x3fffffff) * 0xc);
    lStack_90 = lStack_a0;
    FUN_14505bdc0(*param_1,&local_a8,&local_70,local_98,*param_3,2,0,&local_88);
    if (local_88 != 3) {
      *param_4 = CONCAT44(uStack_84,local_88);
      if ((-1 < (int)local_74) && (local_80 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_80,(ulonglong)(local_74 & 0x7fffffff) << 4);
      }
      FUN_14504ba80(local_68);
      return 1;
    }
    if ((-1 < (int)local_74) && (local_80 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_80,(ulonglong)(local_74 & 0x7fffffff) << 4);
    }
    FUN_14504ba80(local_68);
  }
  return 0;
}



// FUNCTION 14505a690 FUN_14505a690 body=2488 status=ok
// SIG undefined FUN_14505a690(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_14505a690(undefined8 *param_1,uint *param_2,undefined8 param_3,char param_4,char param_5,
             uint *param_6,undefined8 *param_7,undefined8 param_8,uint *param_9)

{
  undefined8 uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  uint local_res8;
  int local_resc;
  int local_res10 [2];
  undefined8 local_res18;
  char local_res20 [8];
  int local_1e8 [2];
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined4 local_1c8;
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined8 *local_1b8;
  uint *puStack_1b0;
  longlong *local_1a8;
  uint *puStack_1a0;
  undefined8 *local_198;
  int *piStack_190;
  int *local_188;
  undefined8 local_178 [2];
  undefined8 *local_168;
  uint *local_160;
  undefined8 *local_158;
  uint *puStack_150;
  longlong *local_148;
  uint *puStack_140;
  undefined8 *local_138;
  int *piStack_130;
  int *local_128;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 *local_108;
  int *piStack_100;
  int *local_f8;
  uint *puStack_f0;
  undefined8 **local_e8;
  uint *puStack_e0;
  undefined1 *local_d8;
  longlong *plStack_d0;
  undefined8 *local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  int *local_a8;
  int *local_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  int *piStack_80;
  int *local_78;
  uint *puStack_70;
  undefined8 **local_68;
  uint *puStack_60;
  undefined1 *local_58;
  longlong *plStack_50;
  
  puVar2 = param_9;
  uVar5 = 0;
  iVar8 = -1;
  if (param_9[6] != 0) {
    param_9[6] = 0;
    if (((*(longlong *)(param_9 + 8) != 0) && (*(int *)(*(longlong *)(param_9 + 8) + 4) != -2)) &&
       (uVar12 = uVar5, 0 < (int)(param_9[10] + 1))) {
      do {
        uVar5 = uVar5 + 8;
        uVar11 = (int)uVar12 + 1;
        *(undefined4 *)(*(longlong *)(param_9 + 8) + -4 + uVar5) = 0xffffffff;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)(param_9[10] + 1));
    }
  }
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_168 = param_1;
  local_160 = puVar2;
  cVar3 = FUN_14505f9e0(param_2,&local_168);
  if (cVar3 != '\0') {
    local_168 = param_1;
    local_160 = puVar2;
    FUN_14505fd60(param_2,&local_168);
  }
  plVar18 = (longlong *)CONCAT44(param_8._4_4_,(uint)param_8);
  puStack_90 = &local_1d0;
  local_88 = local_178;
  piStack_80 = local_1e8;
  local_1e8[0] = -0xffffff;
  local_78 = local_res10;
  puStack_70 = &local_res8;
  local_68 = &local_168;
  local_58 = local_1d8;
  plStack_50 = (longlong *)(local_1d8 + 4);
  puStack_110 = &local_1d0;
  local_108 = (undefined8 *)local_1d8;
  piStack_100 = (int *)local_178;
  local_f8 = (int *)local_res20;
  local_e8 = &local_168;
  puStack_e0 = &local_res8;
  local_d8 = local_1d8 + 4;
  local_c8 = &local_res18;
  local_c0 = &local_98;
  local_b8 = &param_9;
  local_b0 = &local_1e0;
  local_a8 = local_1e8;
  local_a0 = local_res10;
  local_res10[0] = 0xffffff;
  local_1e0 = CONCAT44(local_1e0._4_4_,3);
  param_9._0_1_ = '\0';
  local_118 = param_1;
  puStack_f0 = param_2;
  plStack_d0 = plVar18;
  local_98 = param_1;
  puStack_60 = puVar2;
  cVar3 = FUN_145061150(param_2,&local_118);
  if (cVar3 == '\0') {
    return 0;
  }
  puStack_110 = &local_1d0;
  local_108 = (undefined8 *)local_1d8;
  piStack_100 = (int *)local_178;
  local_f8 = (int *)local_res20;
  local_e8 = &local_168;
  puStack_e0 = &local_res8;
  local_d8 = local_1d8 + 4;
  local_c8 = &local_res18;
  local_c0 = &local_98;
  local_b8 = &param_9;
  local_b0 = &local_1e0;
  local_a8 = local_1e8;
  local_a0 = local_res10;
  local_118 = param_1;
  puStack_f0 = param_2;
  plStack_d0 = plVar18;
  cVar3 = FUN_1450614f0(param_2,&local_118);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar11 = param_2[6];
  local_1c0 = uVar11;
  if ((-1 < (int)uVar11) && (uVar11 == param_2[4])) {
    local_1c0 = *(uint *)((longlong)(int)param_2[1] * 0x60 + 0x10 + *(longlong *)(param_1[1] + 0x28)
                         );
  }
  if ((int)local_1c0 < 0) {
LAB_14505ab9d:
    param_8._0_4_ = param_2[0xd];
    if ((-1 < (int)(uint)param_8) && ((uint)param_8 == param_2[0xb])) {
      param_8._0_4_ =
           *(uint *)((longlong)(int)param_2[8] * 0x60 + 0x10 + *(longlong *)(param_1[1] + 0x28));
    }
    if (-1 < (int)(uint)param_8) {
      puStack_150 = (uint *)CONCAT44(puStack_150._4_4_,3);
      local_148 = (longlong *)0x0;
      lVar7 = *(longlong *)(param_1[1] + 0x28);
      lVar17 = (longlong)(int)(uint)param_8 * 0x60;
      puStack_140 = (uint *)0x8000000000000000;
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,3);
      puStack_1b0 = (uint *)CONCAT44(puStack_1b0._4_4_,3);
      local_1a8 = (longlong *)0x0;
      puStack_1a0 = (uint *)0x8000000000000000;
      uVar5 = (ulonglong)
              (*(uint *)((longlong)*(int *)(lVar17 + 0xc + lVar7) * 0x60 + lVar7) & 0x3fffffff);
      lVar13 = *(longlong *)(param_1[1] + 0x38);
      local_1d0 = *(undefined8 *)(lVar13 + uVar5 * 0xc);
      local_1c8 = *(undefined4 *)(lVar13 + 8 + uVar5 * 0xc);
      local_1d8._0_4_ = *(undefined4 *)(lVar17 + 4 + lVar7);
      local_res8 = local_res8 & 0xffffff00;
      local_1d8._4_4_ = 0xffffffff;
      local_178[0] = *(undefined8 *)(param_1[2] + 0xa0);
      local_158 = *(undefined8 **)
                   ((longlong)*(int *)(lVar17 + 0xc + lVar7) * 0x20 + *(longlong *)param_1[0x18]);
      FUN_14505b7e0(plVar18,&param_8,&local_1b8);
      FUN_14504ba80(&puStack_1b0);
      lVar7 = FUN_1450618a0(plVar18,&param_8);
      if (lVar7 != 0) {
        iVar8 = *(int *)(lVar7 + 4);
      }
      local_118 = local_98;
      puStack_110 = puStack_90;
      local_108 = local_88;
      piStack_100 = piStack_80;
      local_f8 = local_78;
      puStack_f0 = puStack_70;
      local_e8 = local_68;
      puStack_e0 = puStack_60;
      lVar7 = *plVar18 + (longlong)iVar8 * 0x28;
      local_d8 = local_58;
      plStack_d0 = plStack_50;
      puVar6 = (undefined8 *)(lVar7 + 0x10);
      local_1b8 = *(undefined8 **)param_1[0x15];
      puStack_1b0 = (uint *)(local_1b8 + (int)((longlong *)param_1[0x15])[1]);
      param_8._0_4_ = (uint)local_1d0;
      param_8._4_4_ = local_1d0._4_4_;
      FUN_14505cc60(*param_1,&local_1b8,&local_158,local_1d0,local_res18,1,&local_118,puVar6);
      *(undefined8 *)(lVar7 + 8) = *puVar6;
      FUN_145055fb0(puVar6,local_158);
      if ((char)param_9 == '\0') {
        local_1e0 = *(undefined8 *)(lVar7 + 8);
        param_9._0_1_ = '\x01';
      }
      else if ((*(int *)(lVar7 + 8) != (int)local_1e0) || (*(int *)(lVar7 + 0xc) != local_1e0._4_4_)
              ) goto LAB_14505ab67;
      if (local_res10[0] < local_1e8[0]) goto LAB_14505ab67;
      FUN_14504ba80(&puStack_150);
    }
    if ((int)local_1e0 != 3) {
      param_8._0_4_ = FUN_145055f10(&local_1e0,*param_1);
      if ((local_res20[0] == '\0') && (param_5 == '\0')) {
        puVar6 = (undefined8 *)(param_1[2] + 0xa0);
      }
      else {
        puVar6 = (undefined8 *)(param_1[2] + 0xa8);
      }
      uVar1 = *puVar6;
      FUN_1450481a0(&local_res8,&local_res18,*param_1,(uint)param_8);
      local_resc = local_resc - (int)uVar1;
      if (local_resc < local_1e8[0]) {
        local_resc = local_1e8[0];
      }
      iVar8 = local_res8 + (int)((ulonglong)uVar1 >> 0x20);
      if (local_res10[0] < iVar8) {
        iVar8 = local_res10[0];
      }
      if (local_resc <= iVar8) {
        local_res10[0] = iVar8;
        local_1e8[0] = local_resc;
        FUN_1450481a0(&param_8,&local_res18,*param_1,(uint)param_8);
        local_1a8 = &param_8;
        local_1b8 = param_1;
        puStack_1b0 = puVar2;
        FUN_14505dac0(param_2,&local_1b8);
        puVar14 = *(uint **)(param_2 + 0x26);
        local_138 = &local_res18;
        piStack_130 = local_1e8;
        local_128 = local_res10;
        local_198 = &local_res18;
        piStack_190 = local_1e8;
        local_188 = local_res10;
        puVar15 = puVar14 + (int)param_2[0x28];
        local_1a8 = plVar18;
        local_148 = plVar18;
        puStack_1b0 = param_2;
        puStack_150 = param_2;
        local_1b8 = param_1;
        local_158 = param_1;
        puStack_1a0 = puVar2;
        puStack_140 = puVar2;
        for (; puVar14 != puVar15; puVar14 = puVar14 + 1) {
          if ((*puVar14 != param_2[0xb]) && (cVar3 = FUN_14505dc60(&local_1b8), cVar3 == '\0')) {
            return 0;
          }
        }
        puVar15 = *(uint **)(param_2 + 0x56);
        puVar2 = puVar15 + (int)param_2[0x58];
        local_1b8 = local_158;
        puStack_1b0 = puStack_150;
        local_1a8 = local_148;
        puStack_1a0 = puStack_140;
        local_188 = local_128;
        local_198 = local_138;
        piStack_190 = piStack_130;
        for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
          if ((*puVar15 != param_2[4]) && (cVar3 = FUN_14505dc60(&local_1b8), cVar3 == '\0')) {
            return 0;
          }
        }
        if (local_1e8[0] <= local_res10[0]) {
          uVar9 = local_1e8[0] + local_res10[0];
          uVar11 = -uVar9;
          if ((int)-uVar9 < 0) {
            uVar11 = uVar9;
          }
          *param_7 = local_1e0;
          cVar3 = (char)((ulonglong)uVar11 % 2);
          uVar16 = -(uVar11 / 2);
          if (-1 < (int)uVar9) {
            uVar16 = uVar11 / 2;
          }
          cVar10 = -cVar3;
          if (-1 < (int)uVar9) {
            cVar10 = cVar3;
          }
          uVar11 = uVar16 - 1;
          if ((cVar10 != '\0') != 0xffffffff) {
            uVar11 = uVar16;
          }
          *param_6 = uVar11;
          return 1;
        }
      }
    }
  }
  else {
    lVar7 = param_1[1];
    lVar13 = (longlong)(int)local_1c0 * 0x60 + *(longlong *)(lVar7 + 0x28);
    uVar5 = (ulonglong)
            (*(uint *)((longlong)*(int *)(lVar13 + 0xc) * 0x60 + *(longlong *)(lVar7 + 0x28)) &
            0x3fffffff);
    local_1d0 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + uVar5 * 0xc);
    local_1c8 = *(undefined4 *)(*(longlong *)(lVar7 + 0x38) + 8 + uVar5 * 0xc);
    local_1d8._0_4_ = *(undefined4 *)(lVar13 + 4);
    local_res8 = local_res8 & 0xffffff00;
    local_1d8._4_4_ = 0xffffffff;
    if (local_res20[0] == '\0') {
LAB_14505a9d7:
      puVar6 = (undefined8 *)(param_1[2] + 0xa0);
    }
    else {
      cVar3 = FUN_144cb52c0(lVar7,uVar11);
      if (cVar3 == '\0') goto LAB_14505a9d7;
      puVar6 = (undefined8 *)(param_1[2] + 0xa8);
    }
    local_178[0] = *puVar6;
    puStack_150 = (uint *)CONCAT44(puStack_150._4_4_,3);
    local_148 = (longlong *)0x0;
    puStack_140 = (uint *)0x8000000000000000;
    local_158 = *(undefined8 **)
                 ((longlong)*(int *)(lVar13 + 0xc) * 0x20 + *(longlong *)param_1[0x18]);
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,3);
    puStack_1b0 = (uint *)CONCAT44(puStack_1b0._4_4_,3);
    local_1a8 = (longlong *)0x0;
    puStack_1a0 = (uint *)0x8000000000000000;
    FUN_14505b7e0(plVar18,&local_1c0,&local_1b8);
    FUN_14504ba80(&puStack_1b0);
    lVar7 = FUN_1450618a0(plVar18,&local_1c0);
    if (lVar7 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(lVar7 + 4);
    }
    local_118 = local_98;
    puStack_110 = puStack_90;
    local_108 = local_88;
    piStack_100 = piStack_80;
    local_f8 = local_78;
    puStack_f0 = puStack_70;
    local_e8 = local_68;
    puStack_e0 = puStack_60;
    lVar7 = *plVar18 + (longlong)iVar4 * 0x28;
    local_d8 = local_58;
    plStack_d0 = plStack_50;
    puVar6 = (undefined8 *)(lVar7 + 0x10);
    local_1b8 = *(undefined8 **)param_1[0x15];
    puStack_1b0 = (uint *)(local_1b8 + (int)((longlong *)param_1[0x15])[1]);
    local_1c0 = (uint)local_1d0;
    uStack_1bc = local_1d0._4_4_;
    FUN_14505cc60(*param_1,&local_1b8,&local_158,local_1d0,local_res18,1,&local_118,puVar6);
    *(undefined8 *)(lVar7 + 8) = *puVar6;
    FUN_145055fb0(puVar6,local_158);
    if ((char)param_9 == '\0') {
      local_1e0 = *(undefined8 *)(lVar7 + 8);
      param_9._0_1_ = '\x01';
LAB_14505ab5b:
      if (local_1e8[0] <= local_res10[0]) {
        FUN_14504ba80(&puStack_150);
        plVar18 = (longlong *)CONCAT44(param_8._4_4_,(uint)param_8);
        goto LAB_14505ab9d;
      }
    }
    else if ((*(int *)(lVar7 + 8) == (int)local_1e0) && (*(int *)(lVar7 + 0xc) == local_1e0._4_4_))
    goto LAB_14505ab5b;
LAB_14505ab67:
    FUN_14504ba80(&puStack_150);
  }
  return 0;
}



// FUNCTION 14505b050 FUN_14505b050 body=888 status=ok
// SIG undefined FUN_14505b050(void)

void FUN_14505b050(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int *piVar12;
  int *piVar13;
  char cVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 local_res10;
  ulonglong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  ulonglong local_98 [2];
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_60;
  ulonglong local_48;
  
  piVar12 = param_5;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = *param_5;
  param_5._4_4_ = param_5[1];
  lVar23 = (longlong)((int)param_2 - iVar1) * (longlong)(iVar2 - param_4[1]) -
           (longlong)((int)((ulonglong)param_2 >> 0x20) - iVar2) * (longlong)(iVar1 - *param_4);
  uVar17 = (longlong)(iVar3 - iVar1) * (longlong)(iVar2 - param_4[1]) -
           (longlong)(param_5._4_4_ - iVar2) * (longlong)(iVar1 - *param_4);
  bVar16 = 0;
  if (lVar23 != 0) {
    bVar16 = (byte)((ulonglong)lVar23 >> 0x3f) ^ 1;
  }
  if (bVar16 != 0) {
    bVar16 = 0;
    if (uVar17 != 0) {
      bVar16 = (byte)(uVar17 >> 0x3f) ^ 1;
    }
    if (((bVar16 != 0) && ((longlong)uVar17 <= lVar23)) &&
       (local_res10 = param_2, param_5._0_4_ = iVar3,
       cVar14 = FUN_1450485c0(param_3,param_4,&param_5,&local_res10,&local_88), cVar14 != '\0')) {
      local_a8 = local_88;
      lStack_a0 = uStack_80;
      local_98[0] = local_78;
      FUN_145061a90(&local_a8,local_98,0xffffffff,&local_b8);
      piVar13 = param_7;
      uVar18 = (ulonglong)(int)local_b8;
      uVar19 = -uVar17;
      if ((longlong)-uVar17 < 0) {
        uVar19 = uVar17;
      }
      if ((longlong)uVar17 < 0) {
        lVar23 = -lVar23;
      }
      lVar15 = (longlong)((piVar12[2] - ((int)local_b8 + 1)) - *param_6);
      uVar17 = lVar15 * lVar23;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      local_a8 = uVar18 * uVar19 + uVar17;
      uVar20 = (ulonglong)((int)local_b8 + 1);
      lStack_a0 = (SUB168(auVar4 * auVar8,8) - ((longlong)uVar18 >> 0x3f & uVar19)) +
                  SUB168(SEXT816(lVar15) * SEXT816(lVar23),8) +
                  (ulonglong)CARRY8(uVar18 * uVar19,uVar17);
      lVar15 = (longlong)((param_6[1] - (int)local_b8) + piVar12[2]);
      uVar18 = lVar15 * lVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar19;
      uVar17 = uVar19 * uVar20 + uVar18;
      uVar21 = (ulonglong)*param_7;
      lVar23 = (SUB168(auVar5 * auVar9,8) - ((longlong)uVar20 >> 0x3f & uVar19)) +
               SUB168(SEXT816(lVar15) * SEXT816(lVar23),8) +
               (ulonglong)CARRY8(uVar19 * uVar20,uVar18);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar21;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar19;
      local_b8 = uVar17;
      lStack_b0 = lVar23;
      local_60 = uVar19;
      local_48 = uVar19;
      if ((longlong)
          (((SUB168(auVar6 * auVar10,8) - ((longlong)uVar21 >> 0x3f & uVar19)) - lStack_a0) -
          (ulonglong)(uVar19 * uVar21 < local_a8)) < 0) {
        local_98[0] = uVar19;
        FUN_14505f760(&local_a8,local_98,0xffffffff,&local_b8);
        lVar15 = local_b8 + 1;
        lVar22 = lStack_b0 + (ulonglong)(0xfffffffffffffffe < local_b8);
        if ((lVar22 != lVar22 >> 0x3f || 1 < (lVar15 >> 0x18) + 1U) &&
           (lVar15 = 0xffffff, lVar22 < 0)) {
          lVar15 = 0xff000000;
        }
        *piVar13 = (int)lVar15;
      }
      piVar12 = param_8;
      uVar18 = (ulonglong)*param_8;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar19;
      if ((longlong)
          ((lVar23 - (SUB168(auVar7 * auVar11,8) - ((longlong)uVar18 >> 0x3f & uVar19))) -
          (ulonglong)(uVar17 < uVar19 * uVar18)) < 0) {
        local_98[0] = local_48;
        local_a8 = uVar17;
        lStack_a0 = lVar23;
        FUN_14505f760(&local_a8,local_98,0xffffffff,&local_b8);
        if ((lStack_b0 != lStack_b0 >> 0x3f || 1 < ((longlong)local_b8 >> 0x18) + 1U) &&
           (local_b8 = 0xffffff, lStack_b0 < 0)) {
          local_b8 = 0xff000000;
        }
        *piVar12 = (int)local_b8;
      }
    }
  }
  return;
}



// FUNCTION 14505b3d0 FUN_14505b3d0 body=1035 status=ok
// SIG undefined FUN_14505b3d0(void)

void FUN_14505b3d0(undefined8 param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                  ulonglong *param_5,uint *param_6,int *param_7,int *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iStackX_1c;
  ulonglong local_88;
  longlong lStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68 [4];
  ulonglong local_48;
  ulonglong local_30;
  
  uVar21 = (ulonglong)param_2;
  uVar22 = (longlong)uVar21 >> 0x3f;
  if (*param_5 == 0) {
    uVar23 = param_4[2];
    uVar17 = uVar23 * CONCAT44(0,param_6[1]);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar23;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = CONCAT44(0,param_6[1]);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar21;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar23;
    if ((longlong)
        (((param_4[1] + SUB168(auVar1 * auVar9,8) + (ulonglong)CARRY8(*param_4,uVar17)) -
         (SUB168(auVar2 * auVar10,8) - (uVar23 & uVar22))) -
        (ulonglong)(*param_4 + uVar17 < uVar23 * uVar21)) < 0) {
      *param_7 = 0xffffff;
      *param_8 = -0xffffff;
    }
    uVar23 = param_4[2];
    uVar17 = uVar23 * CONCAT44(0,*param_6);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar23;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = CONCAT44(0,*param_6);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar23;
    if ((longlong)
        (((SUB168(auVar4 * auVar12,8) - (uVar23 & uVar22)) -
         ((param_4[1] - SUB168(auVar3 * auVar11,8)) - (ulonglong)(*param_4 < uVar17))) -
        (ulonglong)(uVar23 * uVar21 < *param_4 - uVar17)) < 0) {
      *param_7 = 0xffffff;
      *param_8 = -0xffffff;
    }
  }
  else {
    uVar23 = param_5[1];
    iStackX_1c = (int)((ulonglong)param_3 >> 0x20);
    local_78 = *param_5;
    uStack_70 = param_5[1];
    uVar17 = (ulonglong)(int)((iStackX_1c - *param_6) - param_2);
    uVar26 = uVar23 * uVar17;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar17;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar23;
    lStack_80 = SUB168(auVar5 * auVar13,8) - ((longlong)uVar17 >> 0x3f & uVar23);
    local_88 = uVar26;
    local_68[0] = -local_78;
    if ((longlong)-local_78 < 0) {
      local_68[0] = local_78;
    }
    if ((longlong)local_78 < 0) {
      local_88 = -uVar26;
      lStack_80 = -(ulonglong)(uVar26 != 0) - lStack_80;
      puVar18 = &local_88;
    }
    else {
      local_78 = uVar26;
      uStack_70 = lStack_80;
      puVar18 = &local_78;
    }
    local_78 = *param_5;
    uVar23 = param_5[1];
    uVar17 = (ulonglong)(int)((param_6[1] - param_2) + (int)param_3);
    uVar26 = uVar23 * uVar17;
    uStack_70 = param_5[1];
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar23;
    lStack_80 = SUB168(auVar6 * auVar14,8) - ((longlong)uVar17 >> 0x3f & uVar23);
    local_88 = uVar26;
    uVar23 = -local_78;
    if ((longlong)-local_78 < 0) {
      uVar23 = local_78;
    }
    if ((longlong)local_78 < 0) {
      local_88 = -uVar26;
      puVar19 = &local_88;
      lStack_80 = -(ulonglong)(uVar26 != 0) - lStack_80;
    }
    else {
      local_78 = uVar26;
      uStack_70 = lStack_80;
      puVar19 = &local_78;
    }
    uVar17 = *puVar19;
    uVar26 = puVar19[1];
    uVar25 = (ulonglong)(*param_7 - param_2);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar25;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_68[0];
    local_48 = local_68[0];
    local_30 = uVar23;
    if ((longlong)
        (((SUB168(auVar7 * auVar15,8) - ((longlong)uVar25 >> 0x3f & local_68[0])) - puVar18[1]) -
        (ulonglong)(local_68[0] * uVar25 < *puVar18)) < 0) {
      local_78 = *puVar18;
      uStack_70 = puVar18[1];
      FUN_14505f8a0(&local_78,local_68,0xffffffff,&local_88);
      lVar20 = local_88 + uVar21 + 1;
      lVar24 = lStack_80 + uVar22 + (ulonglong)CARRY8(local_88,uVar21) +
               (ulonglong)(0xfffffffffffffffe < local_88 + uVar21);
      if ((lVar24 != lVar24 >> 0x3f || 1 < (lVar20 >> 0x18) + 1U) && (lVar20 = 0xffffff, lVar24 < 0)
         ) {
        lVar20 = 0xff000000;
      }
      *param_7 = (int)lVar20;
    }
    uVar25 = (ulonglong)(*param_8 - param_2);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar25;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar23;
    if ((longlong)
        ((uVar26 - (SUB168(auVar8 * auVar16,8) - ((longlong)uVar25 >> 0x3f & uVar23))) -
        (ulonglong)(uVar17 < uVar23 * uVar25)) < 0) {
      local_68[0] = local_30;
      local_78 = uVar17;
      uStack_70 = uVar26;
      FUN_14505f8a0(&local_78,local_68,0xffffffff,&local_88);
      lVar20 = local_88 + uVar21;
      lVar24 = lStack_80 + uVar22 + (ulonglong)CARRY8(local_88,uVar21);
      if ((lVar24 != lVar24 >> 0x3f || 1 < (lVar20 >> 0x18) + 1U) && (lVar20 = 0xffffff, lVar24 < 0)
         ) {
        lVar20 = 0xff000000;
      }
      *param_8 = (int)lVar20;
    }
  }
  return;
}



// FUNCTION 14505b7e0 FUN_14505b7e0 body=301 status=ok
// SIG undefined FUN_14505b7e0(void)

undefined8 FUN_14505b7e0(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int local_res8 [2];
  
  FUN_14505eb10(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar6 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_145061bd0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar3 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 0x28);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_2;
      FUN_145056130(puVar3 + 2,param_3);
    }
    *(int *)(param_1 + 1) = iVar6;
    uVar5 = 1;
  }
  else {
    plVar1 = param_3 + 2;
    lVar4 = *param_1 + (longlong)local_res8[0] * 0x28;
    *(undefined8 *)(lVar4 + 8) = *param_3;
    plVar2 = (longlong *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = param_3[1];
    if (plVar1 != plVar2) {
      *(undefined4 *)(lVar4 + 0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + 0x24)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(lVar4 + 0x24) & 0x7fffffff) << 4);
      }
      *plVar2 = 0;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined4 *)(lVar4 + 0x24) = 0x80000000;
      FUN_14504b8e0(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 3);
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x1c);
      *plVar1 = 0;
      param_3[3] = 0;
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14505b910 FUN_14505b910 body=162 status=ok
// SIG undefined FUN_14505b910(void)

void FUN_14505b910(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  FUN_145061910(plVar1,local_res8,local_res10);
  if (local_res8[0] == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar3) {
      FUN_145061d30(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
      *(undefined8 *)(puVar2 + 1) = *param_3;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  *(undefined8 *)(*plVar1 + 4 + (longlong)local_res8[0] * 0xc) = *param_3;
  return;
}



// FUNCTION 14505b9c0 FUN_14505b9c0 body=490 status=ok
// SIG undefined FUN_14505b9c0(void)

undefined8 FUN_14505b9c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_68;
  
  piVar10 = *(int **)(param_1 + 0x38);
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  piVar1 = piVar10 + *(int *)(param_1 + 0x40);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    iVar2 = *piVar10;
    if (((iVar2 != *(int *)(param_1 + 4)) &&
        (local_res8[0] = iVar2, lVar8 = FUN_144d30b40(lVar5 + 0x10,local_res8), lVar8 != 0)) &&
       (-1 < *(int *)(lVar8 + 4))) {
      uVar9 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x38) +
               (ulonglong)
               (*(uint *)((longlong)iVar2 * 0x60 + *(longlong *)(*(longlong *)(lVar6 + 8) + 0x28)) &
               0x3fffffff) * 0xc);
      local_68 = (undefined4)uVar9;
      local_res10 = local_68;
      local_res14 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_14504acd0(lVar5,iVar2);
      cVar7 = FUN_144d2cef0(lVar5 + 0x30,&local_res10,lVar3,uVar9,lVar4);
      if (cVar7 == '\0') {
        return 0;
      }
    }
  }
  piVar10 = *(int **)(param_1 + 0xf8);
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  piVar1 = piVar10 + *(int *)(param_1 + 0x100);
  do {
    if (piVar10 == piVar1) {
      return 1;
    }
    iVar2 = *piVar10;
    if (((iVar2 != *(int *)(param_1 + 0x20)) &&
        (local_res8[0] = iVar2, lVar8 = FUN_144d30b40(lVar5 + 0x10,local_res8), lVar8 != 0)) &&
       (-1 < *(int *)(lVar8 + 4))) {
      uVar9 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x38) +
               (ulonglong)
               (*(uint *)((longlong)iVar2 * 0x60 + *(longlong *)(*(longlong *)(lVar6 + 8) + 0x28)) &
               0x3fffffff) * 0xc);
      local_68 = (undefined4)uVar9;
      local_res10 = local_68;
      local_res14 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_14504acd0(lVar5,iVar2);
      cVar7 = FUN_144d2cef0(lVar5 + 0x30,&local_res10,lVar3,uVar9,lVar4);
      if (cVar7 == '\0') {
        return 0;
      }
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



// FUNCTION 14505bbb0 FUN_14505bbb0 body=516 status=ok
// SIG undefined FUN_14505bbb0(void)

undefined8 FUN_14505bbb0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_68;
  
  piVar10 = *(int **)(param_1 + 0x98);
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  piVar1 = piVar10 + *(int *)(param_1 + 0xa0);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    iVar2 = *piVar10;
    if (((iVar2 != *(int *)(param_1 + 0x2c)) &&
        (local_res8[0] = iVar2, lVar8 = FUN_144d30b40(lVar5 + 0x10,local_res8), lVar8 != 0)) &&
       (-1 < *(int *)(lVar8 + 4))) {
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x28);
      uVar9 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x38) +
               (ulonglong)
               (*(uint *)((longlong)*(int *)((longlong)iVar2 * 0x60 + 0xc + lVar8) * 0x60 + lVar8) &
               0x3fffffff) * 0xc);
      local_68 = (undefined4)uVar9;
      local_res10 = local_68;
      local_res14 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_14504acd0(lVar5,iVar2);
      cVar7 = FUN_144d2cef0(lVar5 + 0x30,lVar3,&local_res10,uVar9,lVar4);
      if (cVar7 == '\0') {
        return 0;
      }
    }
  }
  piVar10 = *(int **)(param_1 + 0x158);
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  piVar1 = piVar10 + *(int *)(param_1 + 0x160);
  do {
    if (piVar10 == piVar1) {
      return 1;
    }
    iVar2 = *piVar10;
    if (((iVar2 != *(int *)(param_1 + 0x10)) &&
        (local_res8[0] = iVar2, lVar8 = FUN_144d30b40(lVar5 + 0x10,local_res8), lVar8 != 0)) &&
       (-1 < *(int *)(lVar8 + 4))) {
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x28);
      uVar9 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x38) +
               (ulonglong)
               (*(uint *)((longlong)*(int *)((longlong)iVar2 * 0x60 + 0xc + lVar8) * 0x60 + lVar8) &
               0x3fffffff) * 0xc);
      local_68 = (undefined4)uVar9;
      local_res10 = local_68;
      local_res14 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar9 = FUN_14504acd0(lVar5,iVar2);
      cVar7 = FUN_144d2cef0(lVar5 + 0x30,lVar3,&local_res10,uVar9,lVar4);
      if (cVar7 == '\0') {
        return 0;
      }
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



// FUNCTION 14505bdc0 FUN_14505bdc0 body=3238 status=ok
// SIG undefined FUN_14505bdc0(void)

void FUN_14505bdc0(longlong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  char cVar38;
  int iVar39;
  longlong *plVar40;
  undefined4 *puVar41;
  undefined8 *puVar42;
  int *piVar43;
  longlong *plVar44;
  undefined4 *puVar45;
  bool bVar46;
  longlong lVar47;
  int iVar48;
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  int *piVar53;
  undefined8 local_res20;
  undefined4 uVar54;
  int local_714;
  int local_710;
  int iStack_70c;
  undefined8 local_708;
  undefined4 local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  undefined8 local_6e8;
  int local_6e0;
  ulonglong local_6d8;
  ulonglong uStack_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  ulonglong local_6b8 [4];
  longlong local_698 [2];
  int local_688;
  undefined4 uStack_684;
  longlong local_678 [2];
  undefined8 local_668 [2];
  ulonglong local_658;
  ulonglong uStack_650;
  undefined1 local_648 [32];
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  ulonglong local_608;
  ulonglong uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  ulonglong local_5e8;
  ulonglong uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  ulonglong local_5b8;
  ulonglong uStack_5b0;
  longlong local_5a8;
  longlong lStack_5a0;
  longlong local_598;
  longlong lStack_590;
  longlong local_588;
  longlong lStack_580;
  ulonglong local_578;
  longlong local_570;
  longlong lStack_568;
  longlong local_560;
  longlong lStack_558;
  longlong local_550;
  longlong lStack_548;
  ulonglong local_540;
  longlong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong lStack_520;
  longlong local_518;
  longlong lStack_510;
  ulonglong local_508;
  longlong local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  ulonglong local_4c8;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [512];
  undefined1 local_298 [600];
  
  lVar47 = param_8;
  uVar32 = param_7;
  plVar44 = local_678;
  iVar49 = (int)param_5 - (int)param_4;
  piVar53 = (int *)0x0;
  iVar48 = (int)((ulonglong)param_5 >> 0x20) - (int)((ulonglong)param_4 >> 0x20);
  *(undefined4 *)(param_8 + 0x10) = 0;
  local_6b8[0] = 0xffffffffffffffff;
  local_6b8[2] = 1;
  if ((param_3[2] != 3) && (param_3[6] != 0)) {
    piVar53 = *(int **)(param_3 + 4);
  }
  iVar39 = *param_3;
  uVar2 = CONCAT44(iVar48,iVar49);
  local_714 = -1;
  local_res20 = param_4;
  local_710 = iVar49;
  iStack_70c = iVar48;
  if (iVar39 == 0) {
    iVar39 = param_3[1];
    local_628 = *param_2;
    uStack_620 = param_2[1];
    local_6b8[0] = 0;
    local_6b8[1] = 1;
    local_714 = *(int *)((longlong)iVar39 * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
    puVar42 = (undefined8 *)
              FUN_14505ed60(local_668,param_1,&local_628,&local_714,iVar39,iVar39,uVar2,local_6b8,
                            param_6,1,param_7);
    local_6b8[0] = 0;
    uVar1 = *puVar42;
    uVar54 = *(undefined4 *)(puVar42 + 1);
    local_6e8 = uVar1;
    if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
      iVar39 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar39) {
        FUN_14504e0f0((longlong *)(lVar47 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar39);
      }
      iVar3 = *(int *)(lVar47 + 0x10);
      *(int *)(lVar47 + 0x10) = iVar39;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
      *(undefined8 *)(puVar41 + 1) = uVar1;
      puVar41[3] = uVar54;
      *puVar41 = 1;
    }
    piVar53 = (int *)0x0;
    if (local_714 < 0) {
LAB_14505ca13:
      *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 3;
      ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = 0xffffffff;
      return;
    }
  }
  else if (iVar39 == 1) {
    local_714 = *(int *)((longlong)param_3[1] * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
  }
  else {
    if (iVar39 != 2) {
      FUN_144bde670(&local_688,local_498,0x200);
      FUN_144be6160(&local_688,"unknown enumerant");
      iVar48 = FUN_144bfc110(0x380a4c90,local_498,
                             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                             ,0x233);
      if (iVar48 == 0) {
        FUN_144bde6e0(&local_688);
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_714 = param_3[1];
  }
LAB_14505c014:
  if (piVar53 == (int *)0x0) {
    iVar39 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_714 * 4);
  }
  else if ((*piVar53 == 0) || (*piVar53 == 1)) {
    iVar39 = piVar53[1];
  }
  else {
    FUN_144bde670(local_648,local_298,0x200);
    FUN_144be6160(local_648,"unknown enumerant");
    iVar39 = FUN_144bfc110(0xe80d96d,local_298,
                           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                           ,0x24c);
    if (iVar39 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_144bde6e0(local_648);
    iVar39 = -1;
  }
  uStack_6d0 = 1;
  uVar51 = (ulonglong)iVar48;
  local_710 = iVar39;
  local_6d8 = uVar51;
  do {
    local_698[0] = (longlong)iVar39 * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,local_698[0],&local_708,&local_6c8);
    uVar54 = local_700;
    uVar1 = local_708;
    lVar47 = (longlong)(local_6c8._4_4_ - local_708._4_4_) * (longlong)iVar49 -
             (longlong)((int)local_6c8 - (int)local_708) * uVar51;
    if (-1 < (int)((uint)(lVar47 >> 0x3f) | (uint)(lVar47 != 0))) {
      if ((longlong)
          ((longlong)((int)local_6c8 - (int)local_708) * (longlong)iVar49 +
          (longlong)(local_6c8._4_4_ - local_708._4_4_) * uVar51) < 0) {
        local_708 = local_6c8;
        local_6c8 = uVar1;
        local_700 = local_6c0;
        local_6c0 = uVar54;
      }
      plVar40 = &local_570;
      cVar38 = FUN_1450489a0(&local_708,&local_6c8,&local_res20,&param_5,plVar40,&local_658);
      uVar37 = local_540;
      lVar36 = lStack_548;
      lVar35 = local_550;
      lVar34 = lStack_558;
      lVar30 = local_560;
      lVar31 = lStack_568;
      lVar47 = local_570;
      uVar29 = uStack_650;
      uVar33 = local_658;
      uVar54 = (undefined4)((ulonglong)plVar40 >> 0x20);
      if (((cVar38 != '\0') &&
          (auVar5._8_8_ = 0, auVar5._0_8_ = local_658, auVar17._8_8_ = 0,
          auVar17._0_8_ = local_6b8[2], auVar6._8_8_ = 0, auVar6._0_8_ = local_6b8[0],
          auVar18._8_8_ = 0, auVar18._0_8_ = uStack_650, uVar51 = local_6d8,
          (longlong)
          (((SUB168(auVar6 * auVar18,8) - ((longlong)local_6b8[0] >> 0x3f & uStack_650)) -
           (SUB168(auVar5 * auVar17,8) - ((longlong)local_658 >> 0x3f & local_6b8[2]))) -
          (ulonglong)(uStack_650 * local_6b8[0] < local_658 * local_6b8[2])) < 0)) &&
         (auVar19._8_8_ = 0, auVar19._0_8_ = uStack_650, auVar7._8_8_ = 0, auVar7._0_8_ = local_658,
         (longlong)
         (((SUB168(auVar7 * ZEXT816(1),8) - (ulonglong)((uint)((longlong)local_658 >> 0x3f) & 1)) -
          SUB168(ZEXT816(0x3ffffffffffff) * auVar19,8)) -
         (ulonglong)(local_658 < uStack_650 * 0x3ffffffffffff)) < 0)) break;
    }
    piVar53 = (int *)0x0;
    iVar39 = *(int *)(local_698[0] + 0xc);
    if (iVar39 == local_710) goto LAB_14505c231;
  } while( true );
  uVar51 = local_658;
  local_578 = local_540;
  local_6d8 = local_658;
  uStack_6d0 = uStack_650;
  local_5a8 = local_570;
  lStack_5a0 = lStack_568;
  local_598 = local_560;
  lStack_590 = lStack_558;
  local_588 = local_550;
  lStack_580 = lStack_548;
  if (iVar39 < 0) {
LAB_14505c231:
    *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 2;
    ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = local_714;
    return;
  }
  uVar52 = (longlong)iVar39 * 0x60 + *(longlong *)(param_1 + 0x28);
  local_6b8[0] = uVar52;
  FUN_144cb6610(param_1,uVar52,&local_6f8,&local_6e8);
  if (((longlong)local_6d8 < 0) || (local_6d8 != uStack_6d0)) {
    bVar46 = false;
  }
  else {
    bVar46 = true;
  }
  if (bVar46) {
    uVar51 = (ulonglong)local_6f8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar51;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_578;
    if (((lVar47 == local_578 * uVar51 &&
          lVar31 == SUB168(auVar14 * auVar26,8) - ((longlong)uVar51 >> 0x3f & local_578)) &&
        (uVar51 = (ulonglong)local_6f4, auVar15._8_8_ = 0, auVar15._0_8_ = uVar51, auVar27._8_8_ = 0
        , auVar27._0_8_ = local_578,
        lVar30 == local_578 * uVar51 &&
        lVar34 == SUB168(auVar15 * auVar27,8) - ((longlong)uVar51 >> 0x3f & local_578))) &&
       (uVar51 = (ulonglong)local_6f0, auVar16._8_8_ = 0, auVar16._0_8_ = uVar51, auVar28._8_8_ = 0,
       auVar28._0_8_ = local_578,
       lVar35 == local_578 * uVar51 &&
       lVar36 == SUB168(auVar16 * auVar28,8) - ((longlong)uVar51 >> 0x3f & local_578))) {
      puVar42 = &local_5d8;
      local_5d8 = *param_2;
      uStack_5d0 = param_2[1];
    }
    else {
      cVar38 = FUN_14504c7f0(&local_5a8,&local_6e8);
      if (cVar38 == '\0') {
        local_5b8 = uVar33;
        uStack_5b0 = uVar29;
        local_4f8 = lVar47;
        lStack_4f0 = lVar31;
        local_4e8 = lVar30;
        lStack_4e0 = lVar34;
        local_4d8 = lVar35;
        lStack_4d0 = lVar36;
        local_4c8 = uVar37;
        FUN_14505f460(param_1,uVar52,&local_4f8,&local_5b8,local_res20,param_5,uVar32);
        puVar41 = (undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8);
        *puVar41 = 1;
        if (*(int *)(uVar52 + 0x10) < 0) {
          puVar41[1] = iVar39;
          return;
        }
        if (local_6f8 - (int)local_6e8 == 0) {
          bVar46 = local_6f4 < local_6e8._4_4_;
        }
        else {
          bVar46 = (bool)((byte)(local_6f8 - (int)local_6e8 >> 0x1f) >> 7);
        }
        iVar48 = *(int *)(uVar52 + 0x10);
        if (bVar46 != false) {
          iVar48 = iVar39;
        }
        puVar41[1] = iVar48;
        if (iVar48 == iVar39) {
          return;
        }
        iVar48 = puVar41[4] + 1;
        if ((int)(puVar41[5] & 0x7fffffff) < iVar48) {
          FUN_14504e0f0(puVar41 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar48);
        }
        iVar49 = puVar41[4];
        puVar41[4] = iVar48;
        puVar45 = (undefined4 *)((longlong)iVar49 * 0x10 + *(longlong *)(puVar41 + 2));
        *puVar45 = 0;
        *(ulonglong *)(puVar45 + 1) = CONCAT44(puVar41[1],iVar39);
        return;
      }
      puVar42 = &local_5c8;
      iVar39 = *(int *)(uVar52 + 0xc);
      plVar44 = local_698;
      local_5c8 = *param_2;
      uStack_5c0 = param_2[1];
    }
    puVar42 = (undefined8 *)
              FUN_14505f1c0(plVar44,param_1,puVar42,iVar39,CONCAT44(uVar54,param_6),uVar32);
    uVar2 = *puVar42;
    uVar54 = *(undefined4 *)(puVar42 + 1);
    local_708 = uVar2;
    if ((int)uVar2 != (int)((ulonglong)uVar2 >> 0x20)) {
      lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      iVar48 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar48) {
        FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar48);
      }
      puVar41 = (undefined4 *)((longlong)*(int *)(lVar47 + 0x10) * 0x10 + *(longlong *)(lVar47 + 8))
      ;
      *(int *)(lVar47 + 0x10) = iVar48;
      *puVar41 = 1;
      *(undefined8 *)(puVar41 + 1) = uVar2;
      puVar41[3] = uVar54;
    }
    *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 0;
    ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = local_708._4_4_;
    return;
  }
  uVar50 = (ulonglong)local_6f8;
  local_6d8 = lVar35;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar50;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_578;
  local_698[0] = lVar31;
  local_6b8[2] = lVar47;
  if (((lVar47 == uVar50 * local_578 &&
        lVar31 == SUB168(auVar8 * auVar20,8) - ((longlong)uVar50 >> 0x3f & local_578)) &&
      (uVar50 = (ulonglong)local_6f4, auVar9._8_8_ = 0, auVar9._0_8_ = uVar50, auVar21._8_8_ = 0,
      auVar21._0_8_ = local_578,
      lVar30 == uVar50 * local_578 &&
      lVar34 == SUB168(auVar9 * auVar21,8) - ((longlong)uVar50 >> 0x3f & local_578))) &&
     (uVar50 = (ulonglong)local_6f0, auVar10._8_8_ = 0, auVar10._0_8_ = uVar50, auVar22._8_8_ = 0,
     auVar22._0_8_ = local_578,
     lVar35 == uVar50 * local_578 &&
     lVar36 == SUB168(auVar10 * auVar22,8) - ((longlong)uVar50 >> 0x3f & local_578))) {
    local_618 = *param_2;
    uStack_610 = param_2[1];
    local_6b8[2] = uVar33;
    local_6b8[3] = uVar29;
    plVar40 = (longlong *)
              FUN_14505ed60(local_4b8,param_1,&local_618,&local_714,CONCAT44(uVar54,iVar39),iVar39,
                            uVar2,local_6b8 + 2,param_6,0,uVar32);
    lVar47 = *plVar40;
    lVar31 = plVar40[1];
    local_678[0] = lVar47;
    if ((int)lVar47 != (int)((ulonglong)lVar47 >> 0x20)) {
      lVar30 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      iVar39 = *(int *)(lVar30 + 0x10) + 1;
      if ((int)(*(uint *)(lVar30 + 0x14) & 0x7fffffff) < iVar39) {
        FUN_14504e0f0(lVar30 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar39);
      }
      iVar3 = *(int *)(lVar30 + 0x10);
      *(int *)(lVar30 + 0x10) = iVar39;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar30 + 8));
      *(longlong *)(puVar41 + 1) = lVar47;
      puVar41[3] = (int)lVar31;
      *puVar41 = 1;
    }
    piVar53 = (int *)0x0;
  }
  else {
    uVar50 = (ulonglong)(int)local_6e8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar50;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_578;
    if (lVar47 == uVar50 * local_578 &&
        lVar31 == SUB168(auVar11 * auVar23,8) - ((longlong)uVar50 >> 0x3f & local_578)) {
      uVar50 = (ulonglong)local_6e8._4_4_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar50;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_578;
      if ((lVar30 == uVar50 * local_578 &&
           lVar34 == SUB168(auVar12 * auVar24,8) - ((longlong)uVar50 >> 0x3f & local_578)) &&
         (uVar50 = (ulonglong)local_6e0, auVar13._8_8_ = 0, auVar13._0_8_ = uVar50,
         auVar25._8_8_ = 0, auVar25._0_8_ = local_578,
         lVar35 == local_578 * uVar50 &&
         lVar36 == SUB168(auVar13 * auVar25,8) - ((longlong)uVar50 >> 0x3f & local_578))) {
        piVar53 = (int *)0x0;
        local_5f8 = *param_2;
        uStack_5f0 = param_2[1];
        local_608 = uVar33;
        uStack_600 = uVar29;
        puVar42 = (undefined8 *)
                  FUN_14505ed60(local_4a8,param_1,&local_5f8,&local_714,
                                CONCAT44(uVar54,*(undefined4 *)(uVar52 + 0xc)),
                                *(undefined4 *)(uVar52 + 0xc),uVar2,&local_608,param_6,0,uVar32);
        uVar1 = *puVar42;
        local_710 = *(int *)(puVar42 + 1);
        local_668[0] = uVar1;
        if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
          lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
          iVar39 = *(int *)(lVar47 + 0x10) + 1;
          if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar39) {
            FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar39);
          }
          iVar3 = *(int *)(lVar47 + 0x10);
          *(int *)(lVar47 + 0x10) = iVar39;
          puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
          *(undefined8 *)(puVar41 + 1) = uVar1;
          puVar41[3] = local_710;
          *puVar41 = 1;
        }
        goto LAB_14505c703;
      }
    }
    if ((piVar53 != (int *)0x0) && (*piVar53 != 0)) {
      piVar53 = (int *)0x0;
    }
    local_5e8 = uVar33;
    uStack_5e0 = uVar29;
    local_538 = lVar47;
    lStack_530 = lVar31;
    local_528 = lVar30;
    lStack_520 = lVar34;
    local_518 = lVar35;
    lStack_510 = lVar36;
    local_508 = uVar37;
    FUN_14505f460(param_1,uVar52,&local_538,&local_5e8,local_res20,param_5,uVar32);
    if (*(int *)(uVar52 + 0x10) < 0) {
      local_714 = -1;
    }
    else {
      lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      local_714 = *(int *)((longlong)*(int *)(uVar52 + 0x10) * 0x60 + 4 +
                          *(longlong *)(param_1 + 0x28));
      local_710 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < local_710) {
        FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)local_710);
      }
      iVar3 = *(int *)(lVar47 + 0x10);
      *(int *)(lVar47 + 0x10) = local_710;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
      *puVar41 = 0;
      uStack_684 = *(undefined4 *)(local_6b8[0] + 0x10);
      *(ulonglong *)(puVar41 + 1) = CONCAT44(uStack_684,iVar39);
      local_688 = iVar39;
    }
  }
LAB_14505c703:
  if (-1 < local_714) {
    piVar43 = piVar53 + 4;
    if (piVar53 == (int *)0x0) {
      piVar43 = piVar53;
    }
    piVar53 = (int *)0x0;
    local_6b8[0] = uVar51;
    local_6b8[2] = uVar29;
    if (piVar43 != (int *)((longlong)param_3[6] * 0x10 + *(longlong *)(param_3 + 4))) {
      piVar53 = piVar43;
    }
    goto LAB_14505c014;
  }
  goto LAB_14505ca13;
}



// FUNCTION 14505ca70 FUN_14505ca70 body=488 status=ok
// SIG undefined FUN_14505ca70(void)

void FUN_14505ca70(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int local_res8;
  int iStackX_c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58 [4];
  undefined8 local_38;
  
  local_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  iVar8 = -1;
  local_78 = uVar2;
  local_58[0] = uVar2;
  FUN_145061a90(&local_68,local_58,0xffffffff,&local_88);
  iVar5 = (int)local_88;
  uStack_80 = param_3[1];
  local_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x28);
  iVar1 = (int)local_88 + 1;
  local_res8 = (int)local_88;
  uVar4 = CONCAT44(iVar1,(int)local_88);
  iStackX_c = iVar1;
  local_88 = *param_3;
  local_58[0] = uVar2;
  local_38 = uVar2;
  FUN_14505b3d0(*param_1,*(undefined4 *)(param_1[1] + 8),uVar4,&local_68,&local_88,param_1[2],
                param_1[3],param_1[4]);
  if (*(char *)param_1[5] != '\0') {
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_68 = *(undefined8 *)(param_2 + 0x20);
    uStack_60 = *(undefined8 *)(param_2 + 0x28);
    local_58[0] = uVar2;
    local_38 = uVar2;
    FUN_14505b3d0(*param_1,*(undefined4 *)(param_1[6] + 8),uVar4,&local_68,&local_88,param_1[2],
                  param_1[3],param_1[4]);
  }
  lVar3 = param_1[7];
  local_res8 = *(int *)param_1[8];
  lVar7 = FUN_145061a20(lVar3 + 0x10,&local_res8);
  if (lVar7 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(lVar7 + 4);
  }
  lVar7 = (longlong)iVar6;
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if (iVar5 < *(int *)(lVar3 + 4 + lVar7 * 0xc)) {
    *(int *)(lVar3 + 4 + lVar7 * 0xc) = iVar5;
  }
  if (*(int *)(lVar3 + 8 + lVar7 * 0xc) < iVar1) {
    *(int *)(lVar3 + 8 + lVar7 * 0xc) = iVar1;
  }
  local_res8 = *(int *)param_1[9];
  if (-1 < local_res8) {
    lVar3 = param_1[7];
    lVar7 = FUN_145061a20(lVar3 + 0x10,&local_res8);
    if (lVar7 != 0) {
      iVar8 = *(int *)(lVar7 + 4);
    }
    lVar7 = (longlong)iVar8;
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (iVar5 < *(int *)(lVar3 + 4 + lVar7 * 0xc)) {
      *(int *)(lVar3 + 4 + lVar7 * 0xc) = iVar5;
    }
    if (*(int *)(lVar3 + 8 + lVar7 * 0xc) < iVar1) {
      *(int *)(lVar3 + 8 + lVar7 * 0xc) = iVar1;
    }
  }
  return;
}



// FUNCTION 14505cc60 FUN_14505cc60 body=3677 status=ok
// SIG undefined FUN_14505cc60(void)

void FUN_14505cc60(longlong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  char cVar37;
  int iVar38;
  undefined8 *puVar39;
  undefined4 *puVar40;
  int *piVar41;
  int *piVar42;
  undefined4 *puVar43;
  bool bVar44;
  longlong lVar45;
  int iVar46;
  int iVar47;
  ulonglong uVar48;
  int iVar49;
  longlong lVar50;
  int *piVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  undefined8 local_res20;
  ulonglong *puVar54;
  undefined4 uVar55;
  ulonglong *puVar56;
  int local_954;
  undefined8 local_950;
  undefined4 local_948;
  int local_940;
  int iStack_93c;
  int local_938;
  int local_934;
  int local_930;
  undefined8 local_928;
  int local_920;
  undefined8 local_918;
  undefined4 local_910;
  ulonglong local_908 [3];
  ulonglong uStack_8f0;
  ulonglong local_8e8 [2];
  int local_8d8;
  undefined4 uStack_8d4;
  ulonglong local_8c8;
  ulonglong uStack_8c0;
  undefined8 local_8b8 [2];
  undefined8 local_8a8 [2];
  undefined1 local_898 [32];
  ulonglong local_878;
  ulonglong uStack_870;
  ulonglong local_868;
  longlong lStack_860;
  longlong local_858;
  longlong lStack_850;
  longlong local_848;
  longlong lStack_840;
  ulonglong local_838;
  undefined8 local_828;
  undefined8 uStack_820;
  ulonglong local_818;
  ulonglong uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  ulonglong local_7f8;
  ulonglong uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  ulonglong local_7d8;
  ulonglong uStack_7d0;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  ulonglong local_7a8;
  longlong lStack_7a0;
  longlong local_798;
  longlong lStack_790;
  longlong local_788;
  longlong lStack_780;
  ulonglong local_778;
  ulonglong local_768;
  longlong lStack_760;
  longlong local_758;
  longlong lStack_750;
  longlong local_748;
  longlong lStack_740;
  ulonglong local_738;
  ulonglong local_728;
  longlong lStack_720;
  longlong local_718;
  longlong lStack_710;
  longlong local_708;
  longlong lStack_700;
  ulonglong local_6f8;
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [512];
  undefined1 local_298 [600];
  undefined4 uVar57;
  
  puVar40 = param_8;
  piVar42 = (int *)local_8b8;
  piVar51 = (int *)0x0;
  iVar47 = (int)param_5 - (int)param_4;
  iVar46 = (int)((ulonglong)param_5 >> 0x20) - (int)((ulonglong)param_4 >> 0x20);
  param_8[4] = 0;
  local_908[0] = 0xffffffffffffffff;
  local_8e8[0] = 1;
  if ((param_3[2] != 3) && (param_3[6] != 0)) {
    piVar51 = *(int **)(param_3 + 4);
  }
  iVar38 = *param_3;
  uVar2 = CONCAT44(iVar46,iVar47);
  local_954 = -1;
  local_res20 = param_4;
  local_940 = iVar47;
  iStack_93c = iVar46;
  if (iVar38 != 0) {
    if (iVar38 == 1) {
      local_954 = *(int *)((longlong)param_3[1] * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
    }
    else {
      if (iVar38 != 2) {
        FUN_144bde670(local_8e8,local_498,0x200);
        FUN_144be6160(local_8e8,"unknown enumerant");
        iVar46 = FUN_144bfc110(0x380a4c90,local_498,
                               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                               ,0x233);
        if (iVar46 == 0) {
          FUN_144bde6e0(local_8e8);
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_954 = param_3[1];
    }
LAB_14505ceed:
    if (piVar51 == (int *)0x0) {
      iVar38 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_954 * 4);
    }
    else if ((*piVar51 == 0) || (*piVar51 == 1)) {
      iVar38 = piVar51[1];
    }
    else {
      FUN_144bde670(local_898,local_298,0x200);
      FUN_144be6160(local_898,"unknown enumerant");
      iVar38 = FUN_144bfc110(0xe80d96d,local_298,
                             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                             ,0x24c);
      if (iVar38 != 0) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_144bde6e0(local_898);
      iVar38 = -1;
    }
    uVar52 = (ulonglong)iVar46;
    uStack_8f0 = 1;
    local_940 = iVar38;
    local_908[2] = uVar52;
    do {
      lVar50 = (longlong)iVar38 * 0x60 + *(longlong *)(param_1 + 0x28);
      FUN_144cb6610(param_1,lVar50,&local_950,&local_918);
      uVar55 = local_948;
      uVar1 = local_950;
      lVar45 = (longlong)(local_918._4_4_ - local_950._4_4_) * (longlong)iVar47 -
               (longlong)((int)local_918 - (int)local_950) * uVar52;
      if (-1 < (int)((uint)(lVar45 >> 0x3f) | (uint)(lVar45 != 0))) {
        if ((longlong)
            ((longlong)((int)local_918 - (int)local_950) * (longlong)iVar47 +
            (longlong)(local_918._4_4_ - local_950._4_4_) * uVar52) < 0) {
          local_950 = local_918;
          local_918 = uVar1;
          local_948 = local_910;
          local_910 = uVar55;
        }
        puVar56 = &local_8c8;
        puVar54 = &local_7a8;
        cVar37 = FUN_1450489a0(&local_950,&local_918,&local_res20,&param_5,puVar54,puVar56);
        uVar36 = local_778;
        lVar35 = lStack_780;
        lVar34 = local_788;
        lVar33 = lStack_790;
        lVar32 = local_798;
        lVar45 = lStack_7a0;
        uVar31 = local_7a8;
        uVar29 = uStack_8c0;
        uVar30 = local_8c8;
        uVar55 = (undefined4)((ulonglong)puVar54 >> 0x20);
        uVar57 = (undefined4)((ulonglong)puVar56 >> 0x20);
        if (((cVar37 != '\0') &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = local_8c8, auVar17._8_8_ = 0,
            auVar17._0_8_ = local_8e8[0], auVar6._8_8_ = 0, auVar6._0_8_ = local_908[0],
            auVar18._8_8_ = 0, auVar18._0_8_ = uStack_8c0, uVar52 = local_908[2],
            (longlong)
            (((SUB168(auVar6 * auVar18,8) - ((longlong)local_908[0] >> 0x3f & uStack_8c0)) -
             (SUB168(auVar5 * auVar17,8) - ((longlong)local_8c8 >> 0x3f & local_8e8[0]))) -
            (ulonglong)(uStack_8c0 * local_908[0] < local_8c8 * local_8e8[0])) < 0)) &&
           (auVar19._8_8_ = 0, auVar19._0_8_ = uStack_8c0, auVar7._8_8_ = 0,
           auVar7._0_8_ = local_8c8,
           (longlong)
           (((SUB168(auVar7 * ZEXT816(1),8) - (ulonglong)((uint)((longlong)local_8c8 >> 0x3f) & 1))
            - SUB168(ZEXT816(0x3ffffffffffff) * auVar19,8)) -
           (ulonglong)(local_8c8 < uStack_8c0 * 0x3ffffffffffff)) < 0)) goto LAB_14505d124;
      }
      iVar38 = *(int *)(lVar50 + 0xc);
      piVar51 = (int *)0x0;
      if (iVar38 == local_940) goto LAB_14505d10b;
    } while( true );
  }
  iVar38 = param_3[1];
  local_908[0] = 0;
  local_908[1] = 1;
  local_954 = *(int *)((longlong)iVar38 * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
  local_6c8 = *param_7;
  uStack_6c0 = param_7[1];
  local_6b8 = param_7[2];
  uStack_6b0 = param_7[3];
  local_6a8 = param_7[4];
  uStack_6a0 = param_7[5];
  local_698 = *(undefined4 *)(param_7 + 6);
  uStack_694 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_690 = *(undefined4 *)(param_7 + 7);
  uStack_68c = *(undefined4 *)((longlong)param_7 + 0x3c);
  local_688 = param_7[8];
  uStack_680 = param_7[9];
  local_828 = *param_2;
  uStack_820 = param_2[1];
  puVar39 = (undefined8 *)
            FUN_1450600f0(local_8a8,param_1,&local_828,&local_954,iVar38,iVar38,uVar2,local_908,
                          param_6,1,&local_6c8);
  local_908[0] = 0;
  uVar1 = *puVar39;
  uVar55 = *(undefined4 *)(puVar39 + 1);
  local_928 = uVar1;
  if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
    iVar38 = puVar40[4] + 1;
    if ((int)(puVar40[5] & 0x7fffffff) < iVar38) {
      FUN_14504e0f0(puVar40 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar38);
    }
    iVar49 = puVar40[4];
    puVar40[4] = iVar38;
    puVar43 = (undefined4 *)((longlong)iVar49 * 0x10 + *(longlong *)(puVar40 + 2));
    *(undefined8 *)(puVar43 + 1) = uVar1;
    puVar43[3] = uVar55;
    *puVar43 = 1;
  }
  piVar51 = (int *)0x0;
  if (-1 < local_954) goto LAB_14505ceed;
  goto LAB_14505da6e;
LAB_14505d124:
  uVar52 = local_8c8;
  local_838 = local_778;
  local_908[2] = local_8c8;
  uStack_8f0 = uStack_8c0;
  local_868 = local_7a8;
  lStack_860 = lStack_7a0;
  local_858 = local_798;
  lStack_850 = lStack_790;
  local_848 = local_788;
  lStack_840 = lStack_780;
  if (iVar38 < 0) {
LAB_14505d10b:
    *(undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_) = 2;
    ((undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_))[1] = local_954;
    return;
  }
  uVar53 = (longlong)iVar38 * 0x60 + *(longlong *)(param_1 + 0x28);
  local_908[0] = uVar53;
  FUN_144cb6610(param_1,uVar53,&local_938,&local_928);
  if (((longlong)local_908[2] < 0) || (local_908[2] != uStack_8f0)) {
    bVar44 = false;
  }
  else {
    bVar44 = true;
  }
  if (bVar44) {
    uVar52 = (ulonglong)local_938;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar52;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_838;
    if (((uVar31 == local_838 * uVar52 &&
          lVar45 == SUB168(auVar14 * auVar26,8) - ((longlong)uVar52 >> 0x3f & local_838)) &&
        (uVar52 = (ulonglong)local_934, auVar15._8_8_ = 0, auVar15._0_8_ = uVar52, auVar27._8_8_ = 0
        , auVar27._0_8_ = local_838,
        lVar32 == local_838 * uVar52 &&
        lVar33 == SUB168(auVar15 * auVar27,8) - ((longlong)uVar52 >> 0x3f & local_838))) &&
       (uVar52 = (ulonglong)local_930, auVar16._8_8_ = 0, auVar16._0_8_ = uVar52, auVar28._8_8_ = 0,
       auVar28._0_8_ = local_838,
       lVar34 == local_838 * uVar52 &&
       lVar35 == SUB168(auVar16 * auVar28,8) - ((longlong)uVar52 >> 0x3f & local_838))) {
      bVar44 = true;
    }
    else {
      bVar44 = false;
    }
    if (bVar44) {
      puVar40 = &local_7c8;
      local_588 = *param_7;
      uStack_580 = param_7[1];
      local_578 = param_7[2];
      uStack_570 = param_7[3];
      local_568 = param_7[4];
      uStack_560 = param_7[5];
      local_558 = param_7[6];
      uStack_550 = param_7[7];
      local_548 = param_7[8];
      uStack_540 = param_7[9];
      local_7c8 = *(undefined4 *)param_2;
      uStack_7c4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_7c0 = *(undefined4 *)(param_2 + 1);
      uStack_7bc = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar39 = &local_588;
    }
    else {
      cVar37 = FUN_14504c7f0(&local_868,&local_928);
      local_538 = *param_7;
      uStack_530 = param_7[1];
      local_528 = param_7[2];
      uStack_520 = param_7[3];
      if (cVar37 == '\0') {
        local_4c8 = param_7[4];
        uStack_4c0 = param_7[5];
        local_4b8 = *(undefined4 *)(param_7 + 6);
        uStack_4b4 = *(undefined4 *)((longlong)param_7 + 0x34);
        uStack_4b0 = *(undefined4 *)(param_7 + 7);
        uStack_4ac = *(undefined4 *)((longlong)param_7 + 0x3c);
        local_4a8 = param_7[8];
        uStack_4a0 = param_7[9];
        local_878 = uVar30;
        uStack_870 = uVar29;
        local_728 = uVar31;
        lStack_720 = lVar45;
        local_718 = lVar32;
        lStack_710 = lVar33;
        local_708 = lVar34;
        lStack_700 = lVar35;
        local_6f8 = uVar36;
        local_4e8 = local_538;
        uStack_4e0 = uStack_530;
        local_4d8 = local_528;
        uStack_4d0 = uStack_520;
        FUN_1450609b0(param_1,uVar53,&local_728,&local_878,local_res20,param_5,&local_4e8);
        puVar40 = (undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_);
        *puVar40 = 1;
        if (*(int *)(uVar53 + 0x10) < 0) {
          puVar40[1] = iVar38;
          return;
        }
        if (local_938 - (int)local_928 == 0) {
          bVar44 = local_934 < local_928._4_4_;
        }
        else {
          bVar44 = (bool)((byte)(local_938 - (int)local_928 >> 0x1f) >> 7);
        }
        iVar46 = *(int *)(uVar53 + 0x10);
        if (bVar44 != false) {
          iVar46 = iVar38;
        }
        puVar40[1] = iVar46;
        if (iVar46 == iVar38) {
          return;
        }
        iVar46 = puVar40[4] + 1;
        if ((int)(puVar40[5] & 0x7fffffff) < iVar46) {
          FUN_14504e0f0(puVar40 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar46);
        }
        iVar47 = puVar40[4];
        puVar40[4] = iVar46;
        puVar43 = (undefined4 *)((longlong)iVar47 * 0x10 + *(longlong *)(puVar40 + 2));
        *puVar43 = 0;
        *(ulonglong *)(puVar43 + 1) = CONCAT44(puVar40[1],iVar38);
        return;
      }
      iVar38 = *(int *)(uVar53 + 0xc);
      puVar40 = &local_7b8;
      piVar42 = &local_8d8;
      local_518 = param_7[4];
      uStack_510 = param_7[5];
      local_508 = param_7[6];
      uStack_500 = param_7[7];
      local_4f8 = param_7[8];
      uStack_4f0 = param_7[9];
      local_7b8 = *(undefined4 *)param_2;
      uStack_7b4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_7b0 = *(undefined4 *)(param_2 + 1);
      uStack_7ac = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar39 = &local_538;
    }
    puVar39 = (undefined8 *)
              FUN_145060650(piVar42,param_1,puVar40,iVar38,CONCAT44(uVar55,param_6),puVar39);
    uVar2 = *puVar39;
    uVar55 = *(undefined4 *)(puVar39 + 1);
    local_950 = uVar2;
    if ((int)uVar2 != (int)((ulonglong)uVar2 >> 0x20)) {
      lVar45 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar46 = *(int *)(lVar45 + 0x10) + 1;
      if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) < iVar46) {
        FUN_14504e0f0(lVar45 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar46);
      }
      puVar40 = (undefined4 *)((longlong)*(int *)(lVar45 + 0x10) * 0x10 + *(longlong *)(lVar45 + 8))
      ;
      *(int *)(lVar45 + 0x10) = iVar46;
      *puVar40 = 1;
      *(undefined8 *)(puVar40 + 1) = uVar2;
      puVar40[3] = uVar55;
    }
    *(undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_) = 0;
    ((undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_))[1] = local_950._4_4_;
    return;
  }
  uVar48 = (ulonglong)local_938;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar48;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_838;
  local_908[2] = lVar45;
  local_8e8[0] = uVar31;
  if (((uVar31 == uVar48 * local_838 &&
        lVar45 == SUB168(auVar8 * auVar20,8) - ((longlong)uVar48 >> 0x3f & local_838)) &&
      (uVar48 = (ulonglong)local_934, auVar9._8_8_ = 0, auVar9._0_8_ = uVar48, auVar21._8_8_ = 0,
      auVar21._0_8_ = local_838,
      lVar32 == uVar48 * local_838 &&
      lVar33 == SUB168(auVar9 * auVar21,8) - ((longlong)uVar48 >> 0x3f & local_838))) &&
     (uVar48 = (ulonglong)local_930, auVar10._8_8_ = 0, auVar10._0_8_ = uVar48, auVar22._8_8_ = 0,
     auVar22._0_8_ = local_838,
     lVar34 == uVar48 * local_838 &&
     lVar35 == SUB168(auVar10 * auVar22,8) - ((longlong)uVar48 >> 0x3f & local_838))) {
    local_818 = uVar30;
    uStack_810 = uVar29;
    local_678 = *param_7;
    uStack_670 = param_7[1];
    local_668 = param_7[2];
    uStack_660 = param_7[3];
    local_658 = param_7[4];
    uStack_650 = param_7[5];
    local_648 = *(undefined4 *)(param_7 + 6);
    uStack_644 = *(undefined4 *)((longlong)param_7 + 0x34);
    uStack_640 = *(undefined4 *)(param_7 + 7);
    uStack_63c = *(undefined4 *)((longlong)param_7 + 0x3c);
    local_638 = param_7[8];
    uStack_630 = param_7[9];
    local_808 = *param_2;
    uStack_800 = param_2[1];
    puVar39 = (undefined8 *)
              FUN_1450600f0(local_6e8,param_1,&local_808,&local_954,CONCAT44(uVar55,iVar38),
                            CONCAT44(uVar57,iVar38),uVar2,&local_818,param_6,0,&local_678);
    uVar1 = *puVar39;
    uVar55 = *(undefined4 *)(puVar39 + 1);
    local_8b8[0] = uVar1;
    if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
      lVar45 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar38 = *(int *)(lVar45 + 0x10) + 1;
      if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) < iVar38) {
        FUN_14504e0f0(lVar45 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar38);
      }
      iVar49 = *(int *)(lVar45 + 0x10);
      *(int *)(lVar45 + 0x10) = iVar38;
      puVar40 = (undefined4 *)((longlong)iVar49 * 0x10 + *(longlong *)(lVar45 + 8));
      *(undefined8 *)(puVar40 + 1) = uVar1;
      puVar40[3] = uVar55;
      *puVar40 = 1;
    }
    piVar51 = (int *)0x0;
  }
  else {
    uVar48 = (ulonglong)(int)local_928;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar48;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_838;
    if (uVar31 == uVar48 * local_838 &&
        lVar45 == SUB168(auVar11 * auVar23,8) - ((longlong)uVar48 >> 0x3f & local_838)) {
      uVar48 = (ulonglong)local_928._4_4_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar48;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_838;
      if ((lVar32 == uVar48 * local_838 &&
           lVar33 == SUB168(auVar12 * auVar24,8) - ((longlong)uVar48 >> 0x3f & local_838)) &&
         (uVar48 = (ulonglong)local_920, auVar13._8_8_ = 0, auVar13._0_8_ = uVar48,
         auVar25._8_8_ = 0, auVar25._0_8_ = local_838,
         lVar34 == local_838 * uVar48 &&
         lVar35 == SUB168(auVar13 * auVar25,8) - ((longlong)uVar48 >> 0x3f & local_838))) {
        piVar51 = (int *)0x0;
        local_628 = *param_7;
        uStack_620 = param_7[1];
        local_618 = param_7[2];
        uStack_610 = param_7[3];
        local_608 = param_7[4];
        uStack_600 = param_7[5];
        local_5f8 = *(undefined4 *)(param_7 + 6);
        uStack_5f4 = *(undefined4 *)((longlong)param_7 + 0x34);
        uStack_5f0 = *(undefined4 *)(param_7 + 7);
        uStack_5ec = *(undefined4 *)((longlong)param_7 + 0x3c);
        local_5e8 = param_7[8];
        uStack_5e0 = param_7[9];
        local_7f8 = uVar30;
        uStack_7f0 = uVar29;
        local_7e8 = *param_2;
        uStack_7e0 = param_2[1];
        puVar39 = (undefined8 *)
                  FUN_1450600f0(local_6d8,param_1,&local_7e8,&local_954,
                                CONCAT44(uVar55,*(undefined4 *)(uVar53 + 0xc)),
                                CONCAT44(uVar57,*(undefined4 *)(uVar53 + 0xc)),uVar2,&local_7f8,
                                param_6,0,&local_628);
        uVar1 = *puVar39;
        uVar55 = *(undefined4 *)(puVar39 + 1);
        local_8a8[0] = uVar1;
        if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
          lVar45 = CONCAT44(param_8._4_4_,param_8._0_4_);
          iVar38 = *(int *)(lVar45 + 0x10) + 1;
          if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) < iVar38) {
            FUN_14504e0f0(lVar45 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          iVar49 = *(int *)(lVar45 + 0x10);
          *(int *)(lVar45 + 0x10) = iVar38;
          puVar40 = (undefined4 *)((longlong)iVar49 * 0x10 + *(longlong *)(lVar45 + 8));
          *(undefined8 *)(puVar40 + 1) = uVar1;
          puVar40[3] = uVar55;
          *puVar40 = 1;
        }
        goto LAB_14505d6a4;
      }
    }
    if ((piVar51 != (int *)0x0) && (*piVar51 != 0)) {
      piVar51 = (int *)0x0;
    }
    local_7d8 = uVar30;
    uStack_7d0 = uVar29;
    local_768 = uVar31;
    lStack_760 = lVar45;
    local_5d8 = *param_7;
    uStack_5d0 = param_7[1];
    local_5c8 = param_7[2];
    uStack_5c0 = param_7[3];
    local_5b8 = param_7[4];
    uStack_5b0 = param_7[5];
    local_5a8 = *(undefined4 *)(param_7 + 6);
    uStack_5a4 = *(undefined4 *)((longlong)param_7 + 0x34);
    uStack_5a0 = *(undefined4 *)(param_7 + 7);
    uStack_59c = *(undefined4 *)((longlong)param_7 + 0x3c);
    local_598 = param_7[8];
    uStack_590 = param_7[9];
    local_758 = lVar32;
    lStack_750 = lVar33;
    local_748 = lVar34;
    lStack_740 = lVar35;
    local_738 = uVar36;
    FUN_1450609b0(param_1,uVar53,&local_768,&local_7d8,local_res20,param_5,&local_5d8);
    if (*(int *)(uVar53 + 0x10) < 0) {
      local_954 = -1;
    }
    else {
      lVar45 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar49 = *(int *)(lVar45 + 0x10) + 1;
      local_954 = *(int *)((longlong)*(int *)(uVar53 + 0x10) * 0x60 + 4 +
                          *(longlong *)(param_1 + 0x28));
      if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) < iVar49) {
        FUN_14504e0f0(lVar45 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar49);
      }
      iVar3 = *(int *)(lVar45 + 0x10);
      *(int *)(lVar45 + 0x10) = iVar49;
      puVar40 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar45 + 8));
      *puVar40 = 0;
      uStack_8d4 = *(undefined4 *)(local_908[0] + 0x10);
      *(ulonglong *)(puVar40 + 1) = CONCAT44(uStack_8d4,iVar38);
      local_8d8 = iVar38;
    }
  }
LAB_14505d6a4:
  if (-1 < local_954) {
    piVar41 = piVar51 + 4;
    if (piVar51 == (int *)0x0) {
      piVar41 = piVar51;
    }
    piVar51 = (int *)0x0;
    local_908[0] = uVar52;
    local_8e8[0] = uVar29;
    if (piVar41 != (int *)((longlong)param_3[6] * 0x10 + *(longlong *)(param_3 + 4))) {
      piVar51 = piVar41;
    }
    goto LAB_14505ceed;
  }
  puVar40 = (undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_);
LAB_14505da6e:
  *puVar40 = 3;
  puVar40[1] = 0xffffffff;
  return;
}



// FUNCTION 14505dac0 FUN_14505dac0 body=416 status=ok
// SIG undefined FUN_14505dac0(void)

undefined8 FUN_14505dac0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 local_res8 [2];
  
  piVar11 = *(int **)(param_1 + 0x38);
  lVar6 = *param_2;
  lVar5 = param_2[1];
  puVar2 = (undefined8 *)param_2[2];
  piVar1 = piVar11 + *(int *)(param_1 + 0x40);
  for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
    if (*piVar11 != *(int *)(param_1 + 4)) {
      local_res8[0] =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(lVar6 + 8) + 0x28) + 4 + (longlong)*piVar11 * 0x60);
      lVar8 = FUN_145061a20(lVar5 + 0x10,local_res8);
      if (lVar8 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(lVar8 + 4);
      }
      uVar4 = *puVar2;
      lVar10 = (longlong)iVar7;
      lVar8 = *(longlong *)(lVar5 + 0x10);
      iVar7 = (int)uVar4;
      if (iVar7 < *(int *)(lVar8 + 4 + lVar10 * 0xc)) {
        *(int *)(lVar8 + 4 + lVar10 * 0xc) = iVar7;
      }
      iVar7 = (int)((ulonglong)uVar4 >> 0x20);
      if (*(int *)(lVar8 + 8 + lVar10 * 0xc) < iVar7) {
        *(int *)(lVar8 + 8 + lVar10 * 0xc) = iVar7;
      }
    }
  }
  piVar11 = *(int **)(param_1 + 0xf8);
  uVar9 = (ulonglong)*(int *)(param_1 + 0x100);
  lVar6 = *param_2;
  lVar5 = param_2[1];
  puVar3 = (ulonglong *)param_2[2];
  piVar1 = piVar11 + uVar9;
  for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
    uVar9 = (ulonglong)*piVar11;
    if (*piVar11 != *(int *)(param_1 + 0x20)) {
      local_res8[0] =
           *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x28) + 4 + uVar9 * 0x60);
      lVar8 = FUN_145061a20(lVar5 + 0x10,local_res8);
      if (lVar8 == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = *(int *)(lVar8 + 4);
      }
      uVar9 = *puVar3;
      lVar10 = (longlong)iVar7;
      lVar8 = *(longlong *)(lVar5 + 0x10);
      if ((int)uVar9 < *(int *)(lVar8 + 4 + lVar10 * 0xc)) {
        *(int *)(lVar8 + 4 + lVar10 * 0xc) = (int)uVar9;
      }
      iVar7 = (int)(uVar9 >> 0x20);
      if (*(int *)(lVar8 + 8 + lVar10 * 0xc) < iVar7) {
        uVar9 = uVar9 >> 0x20;
        *(int *)(lVar8 + 8 + lVar10 * 0xc) = iVar7;
      }
    }
  }
  return CONCAT71((int7)(uVar9 >> 8),1);
}



// FUNCTION 14505dc60 FUN_14505dc60 body=1045 status=ok
// SIG undefined FUN_14505dc60(void)

undefined8 FUN_14505dc60(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res10 [2];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 *puStack_b0;
  longlong local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_78;
  undefined8 *puStack_70;
  longlong local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  puVar5 = (undefined8 *)*param_1;
  iVar9 = -1;
  plVar1 = (longlong *)param_1[2];
  lVar4 = *(longlong *)(puVar5[1] + 0x28);
  lVar11 = (longlong)param_2 * 0x60 + lVar4;
  lVar7 = (longlong)*(int *)(lVar11 + 0xc) * 0x60;
  uVar3 = (ulonglong)(*(uint *)(lVar7 + lVar4) & 0x3fffffff);
  lVar10 = *(longlong *)(puVar5[1] + 0x38);
  local_d8 = *(undefined8 *)(lVar10 + uVar3 * 0xc);
  local_d0 = *(undefined4 *)(lVar10 + 8 + uVar3 * 0xc);
  uVar3 = (ulonglong)
          (*(uint *)((longlong)*(int *)(lVar7 + 0xc + lVar4) * 0x60 + lVar4) & 0x3fffffff);
  local_e0 = puVar5 + 0x1d;
  local_c8 = *(undefined8 *)(*(longlong *)(puVar5[1] + 0x38) + uVar3 * 0xc);
  local_c0 = *(undefined4 *)(*(longlong *)(puVar5[1] + 0x38) + 8 + uVar3 * 0xc);
  local_f0 = puVar5 + 0x1a;
  local_f8 = *puVar5;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0x80000000;
  local_e8 = 0xffffffffffffffff;
  iVar6 = *(int *)(lVar11 + 0x10);
  local_res10[0] = param_2;
  if (iVar6 < 0) {
LAB_14505dde1:
    lVar4 = FUN_1450618a0(plVar1,local_res10);
    if (lVar4 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(lVar4 + 4);
    }
    local_118 = *(longlong *)(*plVar1 + 0x18 + (longlong)iVar6 * 0x28);
    lStack_110 = (longlong)*(int *)(*plVar1 + 0x20 + (longlong)iVar6 * 0x28) * 0x10 + local_118;
    FUN_145346030(&local_108,&local_118);
  }
  else {
    lVar4 = param_1[1];
    if (iVar6 == *(int *)(lVar4 + 4)) {
      iVar6 = *(int *)(lVar4 + 0x10);
LAB_14505dd73:
      if (*(int *)((longlong)iVar6 * 0x60 + 0x10 + *(longlong *)(puVar5[1] + 0x28)) < 0)
      goto LAB_14505dde1;
    }
    else if (iVar6 == *(int *)(lVar4 + 0x20)) {
      iVar6 = *(int *)(lVar4 + 0x2c);
      goto LAB_14505dd73;
    }
    lVar4 = FUN_1450618a0(plVar1);
    if (lVar4 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(lVar4 + 4);
    }
    local_118 = *(longlong *)(*plVar1 + 0x18 + (longlong)iVar6 * 0x28);
    lStack_110 = (longlong)*(int *)(*plVar1 + 0x20 + (longlong)iVar6 * 0x28) * 0x10 + local_118;
    FUN_145346230(&local_108,&local_118);
  }
  puVar5 = (undefined8 *)*param_1;
  local_118 = *(longlong *)puVar5[0x15];
  lStack_110 = local_118 + (longlong)(int)((longlong *)puVar5[0x15])[1] * 8;
  local_res18 = (undefined4)local_d8;
  uStackX_1c = local_d8._4_4_;
  cVar2 = FUN_14504bc70(puVar5[0x18],*puVar5,&local_118,*(undefined4 *)(lVar11 + 0xc),puVar5[1],
                        local_d8,local_c8);
  if (cVar2 != '\0') {
    FUN_1453463f0(&local_108,*(undefined8 *)(*param_1 + 0xc0),*(undefined8 *)(*param_1 + 8),
                  *(undefined4 *)(lVar11 + 0xc));
    plVar1 = (longlong *)param_1[2];
    lVar4 = FUN_1450618a0(plVar1,lVar11 + 8);
    if (lVar4 != 0) {
      iVar9 = *(int *)(lVar4 + 4);
    }
    lVar4 = *plVar1;
    local_118 = *(longlong *)(lVar4 + 0x18 + (longlong)iVar9 * 0x28);
    lStack_110 = (longlong)*(int *)(lVar4 + 0x20 + (longlong)iVar9 * 0x28) * 0x10 + local_118;
    FUN_145346030(&local_108,&local_118);
    FUN_1453464a0(&local_108);
    plVar1 = (longlong *)param_1[3];
    local_res10[0] = *(int *)(lVar11 + 4);
    lVar10 = (longlong)local_res10[0];
    lVar4 = FUN_145061a20(plVar1 + 2,local_res10);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 4) < 0)) {
      puVar5 = (undefined8 *)(*plVar1 + lVar10 * 8);
    }
    else {
      puVar5 = (undefined8 *)(plVar1[2] + (longlong)*(int *)(lVar4 + 4) * 0xc + 4);
    }
    local_res20 = *puVar5;
    local_a8 = param_1[4];
    lVar4 = param_1[5];
    local_88 = param_1[6];
    local_b8 = *param_1;
    puStack_b0 = &local_res20;
    puStack_a0 = &local_d8;
    local_98 = &local_c8;
    uStack_90._0_4_ = (undefined4)lVar4;
    uStack_90._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    uStack_50 = (undefined4)uStack_90;
    uStack_4c = uStack_90._4_4_;
    uStack_90 = lVar4;
    local_78 = local_b8;
    puStack_70 = puStack_b0;
    local_68 = local_a8;
    puStack_60 = puStack_a0;
    local_48 = local_88;
    local_58 = local_98;
    cVar2 = FUN_14505e080(&local_108,&local_78);
    if (cVar2 != '\0') {
      FUN_14505b910(param_1[3],*(undefined4 *)(lVar11 + 4),&local_res20);
      if (*(int *)param_1[5] <= *(int *)param_1[6]) {
        uVar8 = 1;
        goto LAB_14505e019;
      }
    }
  }
  uVar8 = 0;
LAB_14505e019:
  local_100 = 0;
  if ((-1 < (int)local_fc) && (local_108 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_108,(ulonglong)(local_fc & 0x7fffffff) << 4);
  }
  return uVar8;
}



// FUNCTION 14505e080 FUN_14505e080 body=2700 status=ok
// SIG undefined FUN_14505e080(void)

undefined8 FUN_14505e080(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  ulonglong local_res8;
  longlong *local_res10;
  ulonglong local_res18;
  undefined8 local_res20;
  undefined8 local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  int local_d0;
  ulonglong local_c8;
  int local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  int local_90;
  ulonglong local_88;
  int local_80;
  ulonglong local_78;
  undefined4 local_70;
  int local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  
  plVar3 = (longlong *)param_1[5];
  iVar23 = *(int *)(param_1[2] + 0x30);
  local_res10 = param_2;
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar23) {
    FUN_145052b40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar23);
  }
  iVar24 = (int)plVar3[1];
  if (iVar24 < iVar23) {
    *(int *)(plVar3 + 1) = iVar23;
    if (0 < iVar23 - iVar24) {
      uVar10 = (ulonglong)(uint)(iVar23 - iVar24);
      puVar13 = (undefined4 *)(*plVar3 + (longlong)iVar24 * 4);
      do {
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = 0xffffffff;
        }
        uVar10 = uVar10 - 1;
        puVar13 = puVar13 + 1;
      } while (uVar10 != 0);
    }
  }
  else if (iVar23 < iVar24) {
    *(int *)(plVar3 + 1) = iVar23;
  }
  piVar18 = (int *)*param_1;
  local_f0 = piVar18 + (longlong)*(int *)(param_1 + 1) * 4;
  if (piVar18 != local_f0) {
    do {
      local_res20 = piVar18;
      if (*piVar18 == 0) {
        iVar23 = piVar18[2];
        iVar24 = piVar18[1];
        iVar15 = iVar23;
        if (iVar23 <= iVar24) {
          iVar15 = iVar24;
        }
        lVar11 = (longlong)iVar15 * 4;
        if (*(int *)(*(longlong *)param_1[5] + lVar11) == -1) {
          plVar3 = (longlong *)param_1[3];
          iVar19 = *(int *)((longlong)param_1 + 0x24);
          uStack_4c = CONCAT31(uStack_4c._1_3_,iVar23 <= iVar24);
          iVar23 = (int)plVar3[2];
          local_50 = iVar15;
          if (iVar23 == -1) {
            iVar23 = (int)plVar3[1];
            iVar24 = iVar23 + 1;
            if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar24) {
              FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar24);
            }
            *(int *)(plVar3 + 1) = iVar24;
          }
          else {
            *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar23 * 0x10);
          }
          lVar20 = (longlong)iVar23;
          *(ulonglong *)(*plVar3 + lVar20 * 0x10) = CONCAT44(uStack_4c,local_50);
          if (iVar19 == -1) {
            iVar24 = *(int *)(param_1 + 4);
            *(int *)(param_1 + 4) = iVar23;
            *(undefined4 *)(*plVar3 + 8 + lVar20 * 0x10) = 0xffffffff;
          }
          else {
            lVar12 = (longlong)iVar19 * 0x10 + *plVar3;
            iVar24 = *(int *)(lVar12 + 0xc);
            *(int *)(lVar12 + 0xc) = iVar23;
            *(int *)(*plVar3 + 8 + lVar20 * 0x10) = iVar19;
          }
          if (iVar24 == -1) {
            *(int *)((longlong)param_1 + 0x24) = iVar23;
            *(undefined4 *)(*plVar3 + 0xc + lVar20 * 0x10) = 0xffffffff;
          }
          else {
            *(int *)(*plVar3 + 0xc + lVar20 * 0x10) = iVar24;
            *(int *)(*plVar3 + 8 + (longlong)iVar24 * 0x10) = iVar23;
          }
          *(int *)(*(longlong *)param_1[5] + lVar11) = iVar23;
          piVar18 = local_res20;
        }
        else {
          FUN_14504f070(param_1[3],param_1 + 4);
          *(undefined4 *)(*(longlong *)param_1[5] + lVar11) = 0xffffffff;
        }
      }
      else if (*piVar18 == 1) {
        local_res18 = CONCAT44(local_res18._4_4_,piVar18[1]);
        lVar11 = *(longlong *)(param_1[2] + 0x28);
        local_58 = (longlong)piVar18[1] * 0x60;
        puVar9 = (uint *)(lVar11 + local_58);
        FUN_144cb6610(param_1[2],(longlong)*(int *)(lVar11 + 8 + local_58) * 0x60 + lVar11,
                      &local_108,&local_118);
        uVar6 = *puVar9 & 0x3fffffff;
        iVar23 = (int)local_108 - (int)local_118;
        iVar24 = local_108._4_4_ - local_118._4_4_;
        lVar11 = *local_res10;
        local_68 = (int)local_118;
        iStack_64 = local_118._4_4_;
        local_f8 = *(longlong *)
                    (**(longlong **)(lVar11 + 0xa8) + (ulonglong)(*puVar9 & 0x3fffffff) * 8);
        if ((*(uint *)(**(longlong **)(lVar11 + 0xb0) + (ulonglong)(uVar6 >> 5) * 4) >>
             ((byte)uVar6 & 0x1f) & 1) == 0) {
          puVar7 = (ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0xa0);
        }
        else {
          puVar7 = (ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0xa8);
        }
        local_res8 = *puVar7;
        piVar18 = (int *)local_res10[1];
        iVar15 = (int)local_f8;
        if (iVar15 < *piVar18) {
          *piVar18 = iVar15;
        }
        iVar19 = (int)((ulonglong)local_f8 >> 0x20);
        if (piVar18[1] < iVar19) {
          piVar18[1] = iVar19;
        }
        local_e8 = local_118;
        local_d8 = local_118;
        local_c8 = *(ulonglong *)local_res10[4];
        local_c0 = (int)((ulonglong *)local_res10[4])[1];
        local_b8 = *(ulonglong *)local_res10[3];
        local_b0 = (undefined4)((ulonglong *)local_res10[3])[1];
        local_d0 = iVar15;
        FUN_14505b050(lVar11,*(undefined8 *)local_res10[2],&local_b8,&local_c8,&local_d8,&local_res8
                      ,local_res10[5],local_res10[6]);
        if (local_f8._4_4_ != iVar15) {
          local_90 = local_f8._4_4_;
          local_88 = *(ulonglong *)local_res10[4];
          local_80 = (int)((ulonglong *)local_res10[4])[1];
          local_78 = *(ulonglong *)local_res10[3];
          local_70 = (undefined4)((ulonglong *)local_res10[3])[1];
          FUN_14505b050(lVar11,*(undefined8 *)local_res10[2],&local_78,&local_88,&local_98,
                        &local_res8,local_res10[5],local_res10[6]);
        }
        cVar5 = '\0';
        uVar10 = local_res18 & 0xffffffff;
        local_res8 = local_res8 & 0xffffffffffffff00;
        piVar18 = local_res20;
        if ((int)local_res18 != local_res20[2]) {
          do {
            piVar22 = (int *)(param_1 + 4);
            local_f8 = local_58 + *(longlong *)(param_1[2] + 0x28);
            iVar15 = *(int *)(local_f8 + 0x10);
            if (iVar15 < 0) {
              iVar23 = *piVar22;
              while (iVar23 != -1) {
                lVar20 = (longlong)iVar23;
                *(undefined4 *)
                 (*(longlong *)param_1[5] +
                 (longlong)*(int *)(*(longlong *)param_1[3] + lVar20 * 0x10) * 4) = 0xffffffff;
                plVar3 = (longlong *)param_1[3];
                lVar11 = *plVar3;
                iVar24 = *(int *)(lVar11 + 8 + lVar20 * 0x10);
                iVar15 = *(int *)(lVar11 + 0xc + lVar20 * 0x10);
                if (iVar24 == -1) {
                  *piVar22 = iVar15;
                }
                else {
                  *(int *)(lVar11 + 0xc + (longlong)iVar24 * 0x10) = iVar15;
                }
                iVar24 = *(int *)(lVar11 + 0xc + lVar20 * 0x10);
                uVar2 = *(undefined4 *)(lVar11 + 8 + lVar20 * 0x10);
                if (iVar24 == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                }
                else {
                  *(undefined4 *)(*plVar3 + 8 + (longlong)iVar24 * 0x10) = uVar2;
                }
                *(int *)(lVar11 + 0xc + lVar20 * 0x10) = (int)plVar3[2];
                *(int *)(plVar3 + 2) = iVar23;
                iVar23 = *piVar22;
              }
              return 0;
            }
            iVar21 = (int)uVar10;
            piVar22 = (int *)(param_1 + 4);
            iVar19 = iVar15;
            if (iVar15 <= iVar21) {
              iVar19 = iVar21;
            }
            local_res18 = (longlong)iVar19 * 4;
            if (*(int *)(local_res18 + *(longlong *)param_1[5]) == -1) {
              plVar3 = (longlong *)param_1[3];
              iVar1 = *(int *)((longlong)param_1 + 0x24);
              uStack_5c = CONCAT31(uStack_5c._1_3_,iVar15 <= iVar21);
              iVar15 = (int)plVar3[2];
              local_60 = iVar19;
              if (iVar15 == -1) {
                iVar15 = (int)plVar3[1];
                if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar15 + 1) {
                  FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)(iVar15 + 1));
                }
                *(int *)(plVar3 + 1) = iVar15 + 1;
              }
              else {
                *(undefined4 *)(plVar3 + 2) =
                     *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar15 * 0x10);
              }
              lVar11 = (longlong)iVar15;
              *(ulonglong *)(*plVar3 + lVar11 * 0x10) = CONCAT44(uStack_5c,local_60);
              if (iVar1 == -1) {
                iVar19 = *piVar22;
                *piVar22 = iVar15;
                *(undefined4 *)(*plVar3 + 8 + lVar11 * 0x10) = 0xffffffff;
              }
              else {
                lVar20 = (longlong)iVar1 * 0x10 + *plVar3;
                iVar19 = *(int *)(lVar20 + 0xc);
                *(int *)(lVar20 + 0xc) = iVar15;
                *(int *)(*plVar3 + 8 + lVar11 * 0x10) = iVar1;
              }
              if (iVar19 == -1) {
                *(int *)((longlong)param_1 + 0x24) = iVar15;
                *(undefined4 *)(*plVar3 + 0xc + lVar11 * 0x10) = 0xffffffff;
              }
              else {
                *(int *)(*plVar3 + 0xc + lVar11 * 0x10) = iVar19;
                *(int *)(*plVar3 + 8 + (longlong)iVar19 * 0x10) = iVar15;
              }
              *(int *)(local_res18 + *(longlong *)param_1[5]) = iVar15;
              piVar18 = local_res20;
              cVar16 = (char)local_res8;
            }
            else {
              FUN_14504f070(param_1[3],piVar22);
              *(undefined4 *)(local_res18 + *(longlong *)param_1[5]) = 0xffffffff;
              cVar16 = cVar5;
            }
            lVar11 = *(longlong *)(param_1[2] + 0x28);
            iVar15 = *(int *)((longlong)*(int *)(local_f8 + 0x10) * 0x60 + 0xc + lVar11);
            uVar10 = (ulonglong)iVar15;
            local_58 = uVar10 * 0x60;
            uVar8 = (ulonglong)
                    (*(uint *)((longlong)*(int *)(lVar11 + 0xc + local_58) * 0x60 + lVar11) &
                    0x3fffffff);
            lVar11 = *(longlong *)(param_1[2] + 0x38);
            local_108 = *(undefined8 *)(lVar11 + uVar8 * 0xc);
            local_100 = *(undefined4 *)(lVar11 + 8 + uVar8 * 0xc);
            iVar19 = (int)((ulonglong)local_108 >> 0x20) - local_118._4_4_;
            lVar11 = (longlong)((int)local_108 - (int)local_118) * (longlong)iVar24 -
                     (longlong)iVar19 * (longlong)iVar23;
            uVar6 = (uint)(lVar11 >> 0x3f) | (uint)(lVar11 != 0);
            if (((int)uVar6 < 0) ||
               ((uVar6 == 0 &&
                ((longlong)iVar19 * (longlong)iVar24 +
                 (longlong)((int)local_108 - (int)local_118) * (longlong)iVar23 < 0)))) {
              cVar5 = '\x01';
            }
            else {
              cVar5 = '\0';
              if (cVar16 != '\0') {
                iVar23 = *piVar22;
                if (iVar23 == -1) {
                  return 0;
                }
                do {
                  lVar20 = (longlong)iVar23;
                  *(undefined4 *)
                   (*(longlong *)param_1[5] +
                   (longlong)*(int *)(*(longlong *)param_1[3] + lVar20 * 0x10) * 4) = 0xffffffff;
                  plVar3 = (longlong *)param_1[3];
                  lVar11 = *plVar3;
                  iVar24 = *(int *)(lVar11 + 8 + lVar20 * 0x10);
                  iVar15 = *(int *)(lVar11 + 0xc + lVar20 * 0x10);
                  if (iVar24 == -1) {
                    *piVar22 = iVar15;
                  }
                  else {
                    *(int *)(lVar11 + 0xc + (longlong)iVar24 * 0x10) = iVar15;
                  }
                  iVar24 = *(int *)(lVar11 + 0xc + lVar20 * 0x10);
                  uVar2 = *(undefined4 *)(lVar11 + 8 + lVar20 * 0x10);
                  if (iVar24 == -1) {
                    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                  }
                  else {
                    *(undefined4 *)(*plVar3 + 8 + (longlong)iVar24 * 0x10) = uVar2;
                  }
                  *(int *)(lVar11 + 0xc + lVar20 * 0x10) = (int)plVar3[2];
                  *(int *)(plVar3 + 2) = iVar23;
                  iVar23 = *piVar22;
                } while (iVar23 != -1);
                return 0;
              }
            }
            local_res8 = CONCAT71(local_res8._1_7_,cVar5);
          } while (iVar15 != piVar18[2]);
        }
      }
      piVar18 = piVar18 + 4;
      param_2 = local_res10;
    } while (piVar18 != local_f0);
  }
  iVar23 = *(int *)(param_1 + 4);
  if (iVar23 != -1) {
    piVar18 = (int *)param_2[1];
    puVar4 = (undefined8 *)param_2[4];
    do {
      plVar3 = (longlong *)param_1[3];
      puVar14 = (undefined8 *)((longlong)iVar23 * 0x10 + *plVar3);
      local_f0 = (int *)*puVar14;
      if (*(int *)(puVar14 + 1) == -1) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)puVar14 + 0xc);
      }
      else {
        *(undefined4 *)(*plVar3 + 0xc + (longlong)*(int *)(puVar14 + 1) * 0x10) =
             *(undefined4 *)((longlong)puVar14 + 0xc);
      }
      if (*(int *)((longlong)puVar14 + 0xc) == -1) {
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(puVar14 + 1);
      }
      else {
        *(undefined4 *)(*plVar3 + 8 + (longlong)*(int *)((longlong)puVar14 + 0xc) * 0x10) =
             *(undefined4 *)(puVar14 + 1);
      }
      *(int *)((longlong)puVar14 + 0xc) = (int)plVar3[2];
      *(int *)(plVar3 + 2) = iVar23;
      *(undefined4 *)(*(longlong *)param_1[5] + (longlong)(int)local_f0 * 4) = 0xffffffff;
      lVar11 = *(longlong *)(param_1[2] + 0x28);
      puVar17 = (uint *)((longlong)(int)local_f0 * 0x60 + lVar11);
      puVar9 = puVar17;
      if ((char)((ulonglong)local_f0 >> 0x20) != '\0') {
        puVar9 = (uint *)((longlong)(int)puVar17[3] * 0x60 + lVar11);
      }
      uVar6 = *puVar9 & 0x3fffffff;
      uVar8 = (ulonglong)(*puVar9 & 0x3fffffff);
      lVar11 = *local_res10;
      uVar10 = *(ulonglong *)(*(longlong *)(param_1[2] + 0x38) + uVar8 * 0xc);
      local_res20 = *(int **)(**(longlong **)(lVar11 + 0xa8) + uVar8 * 8);
      puVar7 = (ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0xa8);
      if ((*(uint *)(**(longlong **)(lVar11 + 0xb0) + (ulonglong)(uVar6 >> 5) * 4) >>
           ((byte)uVar6 & 0x1f) & 1) == 0) {
        puVar7 = (ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0xa0);
      }
      local_res18 = *puVar7;
      iVar23 = (int)local_res20;
      if (iVar23 < *piVar18) {
        *piVar18 = iVar23;
      }
      iVar24 = (int)((ulonglong)local_res20 >> 0x20);
      if (piVar18[1] < iVar24) {
        piVar18[1] = iVar24;
      }
      local_90 = *(int *)(puVar4 + 1);
      local_98 = *puVar4;
      local_a8 = *(undefined8 *)local_res10[3];
      local_a0 = *(undefined4 *)((undefined8 *)local_res10[3] + 1);
      local_res8 = uVar10;
      local_118 = uVar10;
      local_88 = uVar10;
      local_80 = iVar23;
      local_78 = uVar10;
      FUN_14505b050(lVar11,*(undefined8 *)local_res10[2],&local_a8,&local_98,&local_88,&local_res18,
                    local_res10[5],local_res10[6]);
      if (local_res20._4_4_ != iVar23) {
        local_c0 = local_res20._4_4_;
        local_d0 = *(int *)(puVar4 + 1);
        local_d8 = *puVar4;
        local_e0 = *(undefined4 *)((undefined8 *)local_res10[3] + 1);
        local_e8 = *(undefined8 *)local_res10[3];
        local_c8 = uVar10;
        local_b8 = uVar10;
        FUN_14505b050(*local_res10,*(undefined8 *)local_res10[2],&local_e8,&local_d8,&local_c8,
                      &local_res18,local_res10[5],local_res10[6]);
      }
      if (local_f0._4_1_ == '\0') {
        cVar5 = FUN_1453468f0(param_1,puVar17);
        if ((cVar5 == '\0') && (-1 < (int)puVar17[4])) {
          FUN_1453466e0(param_1,(longlong)(int)puVar17[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      else {
        cVar5 = FUN_1453466e0();
        if ((cVar5 == '\0') && (-1 < (int)puVar17[4])) {
          FUN_1453468f0(param_1,(longlong)(int)puVar17[4] * 0x60 + *(longlong *)(param_1[2] + 0x28))
          ;
        }
      }
      iVar23 = *(int *)(param_1 + 4);
    } while (iVar23 != -1);
  }
  return 1;
}



// FUNCTION 14505eb10 FUN_14505eb10 body=257 status=ok
// SIG undefined FUN_14505eb10(void)

uint * FUN_14505eb10(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14505ebe9:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x28) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_14505ebe9;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 14505ec20 FUN_14505ec20 body=310 status=ok
// SIG undefined FUN_14505ec20(void)

void FUN_14505ec20(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 14505ed60 FUN_14505ed60 body=1117 status=ok
// SIG undefined FUN_14505ed60(void)

undefined4 *
FUN_14505ed60(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined8 param_8,int param_9,
             char param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 uVar16;
  uint *puVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int local_78;
  int local_68;
  int iStack_64;
  int local_58;
  
  lVar6 = *(longlong *)(param_2 + 0x28);
  lVar18 = *(longlong *)(param_2 + 0x38);
  lVar11 = (longlong)(int)param_6;
  lVar22 = (longlong)(int)param_7;
  lVar23 = (longlong)param_7._4_4_;
  puVar17 = (uint *)(lVar11 * 0x60 + lVar6);
  lVar14 = (longlong)(int)puVar17[2];
  uVar1 = *(undefined8 *)(lVar18 + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  uVar2 = *(undefined8 *)
           (lVar18 + (ulonglong)(*(uint *)((longlong)(int)puVar17[3] * 0x60 + lVar6) & 0x3fffffff) *
                     0xc);
  puVar9 = (uint *)(lVar14 * 0x60 + lVar6);
  uVar3 = *(undefined8 *)(lVar18 + (ulonglong)(*puVar9 & 0x3fffffff) * 0xc);
  local_78 = (int)uVar2;
  iStack_64 = (int)((ulonglong)uVar1 >> 0x20);
  local_68 = (int)uVar1;
  iVar7 = local_68;
  lVar18 = ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 - (local_78 - local_68) * lVar23;
  bVar15 = 0;
  if (lVar18 != 0) {
    bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
  }
  uVar21 = 0xffffffff;
  if (bVar15 == 0) {
    local_58 = (int)uVar3;
    uVar21 = 0xffffffff;
    if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_64) * lVar22 - (local_58 - local_68) * lVar23
       ) {
      uVar21 = param_6;
    }
  }
  uVar10 = uVar21;
  if ((param_9 == 0) || (((param_9 == 2 && ((int)uVar21 < 0)) || (param_10 != '\0')))) {
    if (param_6 != puVar9[4]) {
      do {
        iVar4 = *(int *)((longlong)(int)lVar11 * 0x60 + 0x10 + lVar6);
        if (iVar4 < 0) goto LAB_14505f007;
        lVar18 = (longlong)iVar4 * 0x60;
        uVar5 = *(uint *)(lVar18 + 0xc + lVar6);
        lVar11 = (longlong)(int)uVar5;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar18 + lVar6) & 0x3fffffff) * 0xc);
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)
                 (*(uint *)((longlong)*(int *)(lVar11 * 0x60 + 0xc + lVar6) * 0x60 + lVar6) &
                 0x3fffffff) * 0xc);
        local_58 = (int)uVar2;
        lVar18 = ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 -
                 (local_58 - iVar7) * lVar23;
        bVar15 = 0;
        if (lVar18 != 0) {
          bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
        }
        if ((bVar15 == 0) &&
           (local_68 = (int)uVar1,
           -1 < ((int)((ulonglong)uVar1 >> 0x20) - iStack_64) * lVar22 - (local_68 - iVar7) * lVar23
           )) {
          uVar21 = uVar5;
          if (param_10 == '\0') break;
          if ((int)uVar10 < 0) {
            uVar10 = uVar5;
          }
        }
      } while (uVar5 != puVar9[4]);
    }
    uVar20 = 1;
    uVar19 = uVar20;
  }
  else {
LAB_14505f007:
    if ((param_9 != 1) && ((param_9 != 2 || (-1 < (int)uVar21)))) {
      uVar19 = 1;
      uVar20 = 1;
      if (param_10 == '\0') goto LAB_14505efbf;
    }
    uVar19 = 1;
    uVar20 = 1;
    if (puVar17[2] != puVar17[4]) {
      uVar20 = 1;
      do {
        lVar18 = (longlong)(int)lVar14 * 0x60;
        uVar5 = *(uint *)(lVar18 + 0x10 + lVar6);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar18 + lVar6) & 0x3fffffff) * 0xc);
        if ((int)uVar5 < 0) break;
        uVar12 = *(uint *)((longlong)(int)uVar5 * 0x60 + 8 + lVar6);
        lVar14 = (longlong)(int)uVar12;
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar14 * 0x60 + lVar6) & 0x3fffffff) * 0xc);
        local_58 = (int)uVar2;
        if (-1 < ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 -
                 (local_58 - iVar7) * lVar23) {
          local_68 = (int)uVar1;
          lVar18 = ((int)((ulonglong)uVar1 >> 0x20) - iStack_64) * lVar22 -
                   (local_68 - iVar7) * lVar23;
          bVar15 = 0;
          if (lVar18 != 0) {
            bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
          }
          if (bVar15 == 0) {
            uVar20 = 0;
            uVar10 = uVar5;
            if (param_10 == '\0') break;
            if ((int)uVar21 < 0) {
              uVar19 = 0;
              uVar21 = uVar5;
            }
          }
        }
      } while (uVar12 != puVar17[4]);
    }
  }
LAB_14505efbf:
  uVar16 = 0;
  uVar13 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar5 = uVar21;
  uVar8 = uVar19;
  if ((param_9 != 0) && (uVar5 = uVar10, uVar8 = uVar20, param_9 != 1)) {
    if (param_9 != 2) goto LAB_14505f192;
    if (-1 < (int)uVar21) {
      uVar5 = uVar21;
      uVar8 = uVar19;
    }
  }
  uVar16 = uVar8;
  uVar12 = uVar5;
  if (-1 < (int)uVar12) {
    uVar13 = *(undefined4 *)((longlong)(int)uVar12 * 0x60 + 4 + lVar6);
  }
LAB_14505f192:
  param_1[1] = uVar12;
  *param_4 = uVar13;
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 2) = uVar16;
  return param_1;
}



// FUNCTION 14505f1c0 FUN_14505f1c0 body=660 status=ok
// SIG undefined FUN_14505f1c0(void)

void FUN_14505f1c0(int *param_1,longlong param_2,longlong *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  uint *puVar12;
  undefined1 uVar13;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  undefined1 local_68 [8];
  int local_60;
  undefined1 local_58 [24];
  
  puVar12 = (uint *)((longlong)param_4 * 0x60 + *(longlong *)(param_2 + 0x28));
  FUN_144cb6610(param_2,puVar12,local_68,&local_88);
  uVar5 = *(undefined8 *)(*param_3 + (ulonglong)(*puVar12 & 0x3fffffff) * 8);
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  local_60 = (int)uVar5;
  if (local_60 != iVar6) {
    local_60 = iVar6;
  }
  iVar10 = local_88;
  iVar7 = local_84;
  iVar6 = param_4;
  if ((param_5 & 0xfffffffd) == 0) {
    iVar1 = *(int *)((longlong)(int)puVar12[2] * 0x60 + 0x10 + *(longlong *)(param_2 + 0x28));
    iVar2 = param_4;
    while (uVar13 = 1, iVar2 != iVar1) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x10 + lVar9);
      if (iVar2 < 0) goto LAB_14505f348;
      lVar8 = (longlong)iVar2 * 0x60 + lVar9;
      FUN_144cb6610(param_2,(longlong)*(int *)(lVar8 + 0xc) * 0x60 + lVar9,local_58,&local_78);
      if (iVar10 - local_78 == 0) {
        bVar11 = iVar7 < local_74;
      }
      else {
        bVar11 = (bool)((byte)(iVar10 - local_78 >> 0x1f) >> 7);
      }
      if (bVar11 == false) {
        iVar6 = *(int *)(lVar8 + 0xc);
        iVar10 = local_78;
        iVar7 = local_74;
      }
      iVar2 = *(int *)(lVar8 + 0xc);
    }
  }
  else {
LAB_14505f348:
    if ((param_5 == 1) || (uVar13 = 1, param_5 == 2)) {
      uVar13 = 1;
      uVar4 = puVar12[4];
      uVar3 = puVar12[2];
      while (uVar3 != uVar4) {
        lVar9 = (longlong)(int)uVar3 * 0x60 + *(longlong *)(param_2 + 0x28);
        if (*(int *)(lVar9 + 0x10) < 0) break;
        FUN_144cb6610(param_2,(longlong)*(int *)(lVar9 + 0x10) * 0x60 +
                              *(longlong *)(param_2 + 0x28),local_58,&local_78);
        if (local_78 - iVar10 == 0) {
          bVar11 = local_74 < iVar7;
        }
        else {
          bVar11 = (bool)((byte)(local_78 - iVar10 >> 0x1f) >> 7);
        }
        if (bVar11 != false) {
          iVar6 = *(int *)(lVar9 + 0x10);
          uVar13 = 0;
          iVar10 = local_78;
          iVar7 = local_74;
        }
        uVar3 = *(uint *)((longlong)*(int *)(lVar9 + 0x10) * 0x60 + 8 +
                         *(longlong *)(param_2 + 0x28));
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = iVar6;
  *(undefined1 *)(param_1 + 2) = uVar13;
  return;
}



// FUNCTION 14505f460 FUN_14505f460 body=754 status=ok
// SIG undefined FUN_14505f460(void)

longlong FUN_14505f460(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint local_res10 [2];
  ulonglong local_res20;
  undefined1 local_1a8 [32];
  int local_188;
  int local_184;
  int local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_158;
  int local_154;
  int local_150;
  longlong local_148;
  longlong lStack_140;
  ulonglong local_138;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined1 local_108 [32];
  ulonglong local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  undefined8 local_a0;
  
  local_res20 = param_4;
  if (*(int *)(param_2 + 0x10) < 0) {
    lStack_e0 = FUN_144cb4d20();
    if ((char)lStack_e0 != '\0') {
      lStack_e0 = FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(param_2 + 4));
    }
  }
  else {
    lVar10 = (longlong)*(int *)(param_2 + 0x10) * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,param_2,&local_188,&local_158);
    FUN_144cb6610(param_1,lVar10,&local_168,&local_178);
    if ((((local_168 == local_158) && (local_164 == local_154)) && (local_160 == local_150)) &&
       (((local_178 == local_188 && (local_174 == local_184)) && (local_170 == local_180)))) {
      lStack_e0 = FUN_144cb4d20(param_1);
      if ((char)lStack_e0 != '\0') {
        FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
        lStack_e0 = FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(lVar10 + 4));
      }
    }
    else {
      FUN_1450489a0(&local_168,&local_178,&stack0x00000028,&stack0x00000030,local_108,local_1a8);
      cVar7 = FUN_144cb4d20(param_1);
      if (cVar7 != '\0') {
        FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(param_2 + 4));
        uVar8 = *(ulonglong *)(param_3 + 0x30);
        uVar9 = local_res20 & 0xffffffff;
        local_a0 = *(undefined8 *)(param_3 + 0x30);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        local_128 = *(ulonglong *)(param_3 + 0x20) - uVar9 * uVar8;
        lStack_120 = (*(longlong *)(param_3 + 0x28) - SUB168(auVar1 * auVar4,8)) -
                     (ulonglong)(*(ulonglong *)(param_3 + 0x20) < uVar9 * uVar8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        FUN_144cb4e20(SUB168(auVar2 * auVar5,8),local_res10,*(undefined4 *)(lVar10 + 4));
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_d8;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,local_res10[0]);
        uVar8 = CONCAT44(0,local_res10[0]) * local_d8;
        local_148 = local_e8 - uVar8;
        lStack_140 = (lStack_e0 - SUB168(auVar3 * auVar6,8)) - (ulonglong)(local_e8 < uVar8);
        local_138 = local_d8;
        local_118 = local_a0;
        lStack_e0 = FUN_14504c750(&local_128,&local_148,local_e8 + uVar8);
      }
    }
  }
  return lStack_e0;
}



// FUNCTION 14505f760 FUN_14505f760 body=310 status=ok
// SIG undefined FUN_14505f760(void)

void FUN_14505f760(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 14505f8a0 FUN_14505f8a0 body=310 status=ok
// SIG undefined FUN_14505f8a0(void)

void FUN_14505f8a0(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 14505f9e0 FUN_14505f9e0 body=892 status=ok
// SIG undefined FUN_14505f9e0(void)

undefined8 FUN_14505f9e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  uint *local_res18;
  int local_res20;
  int iStackX_24;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined8 local_480;
  undefined8 local_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  
  piVar17 = *(int **)(param_1 + 0x38);
  piVar1 = piVar17 + *(int *)(param_1 + 0x40);
  piVar7 = (int *)(longlong)*(int *)(param_1 + 0x40);
  do {
    if (piVar17 == piVar1) {
      return CONCAT71((int7)((ulonglong)piVar7 >> 8),1);
    }
    iVar8 = *piVar17;
    if (iVar8 != *(int *)(param_1 + 4)) {
      plVar3 = (longlong *)*param_2;
      iStackX_24 = -0x7fffff;
      lVar15 = *(longlong *)(plVar3[1] + 0x38);
      lVar4 = *(longlong *)(plVar3[1] + 0x28);
      puVar13 = (uint *)((longlong)iVar8 * 0x60 + lVar4);
      local_490 = *(undefined8 *)(lVar15 + (ulonglong)(*puVar13 & 0x3fffffff) * 0xc);
      local_480 = *(undefined8 *)
                   (lVar15 + (ulonglong)
                             (*(uint *)((longlong)(int)puVar13[2] * 0x60 + lVar4) & 0x3fffffff) *
                             0xc);
      uVar5 = *(ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)plVar3[0x18]);
      lVar15 = *plVar3;
      uVar16 = uVar5 >> 0x20;
      iVar8 = (int)uVar5;
      local_res18 = puVar13;
      if ((iVar8 == 0) || (iVar8 == 1)) {
        uVar16 = (ulonglong)
                 *(uint *)((longlong)(int)(uVar5 >> 0x20) * 0x60 + 4 + *(longlong *)(lVar15 + 0x28))
        ;
      }
      else if (iVar8 != 2) {
        FUN_144bde670(local_468,local_438,0x200);
        FUN_144be6160(local_468,"unknown enumerant");
        iVar8 = FUN_144bfc110(0x7523383a,local_438,
                              "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                              ,0x17);
        if (iVar8 != 0) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
        FUN_144bde6e0(local_468);
        lVar15 = *plVar3;
        uVar16 = 0xffffffff;
      }
      uVar10 = *(undefined8 *)((longlong)(int)puVar13[2] * 0x20 + *(longlong *)plVar3[0x18]);
      iVar8 = (int)((ulonglong)uVar10 >> 0x20);
      iVar14 = (int)uVar10;
      if ((iVar14 == 0) || (iVar14 == 1)) {
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + 4 + *(longlong *)(lVar15 + 0x28));
      }
      else if (iVar14 != 2) {
        FUN_144bde670(local_458,local_238,0x200);
        FUN_144be6160(local_458,"unknown enumerant");
        iVar8 = FUN_144bfc110(0x7523383a,local_238,
                              "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                              ,0x17);
        if (iVar8 != 0) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
        FUN_144bde6e0(local_458);
        iVar8 = -1;
      }
      local_4a0 = (undefined4)local_490;
      local_49c = local_490._4_4_;
      puVar11 = (undefined8 *)FUN_1450481a0(local_448,&local_4a0,*plVar3,uVar16);
      iVar9 = (int)*puVar11;
      iVar14 = 0x7fffff;
      if (iVar9 < 0x7fffff) {
        iVar14 = iVar9;
        local_res20 = iVar9;
      }
      iVar12 = (int)((ulonglong)*puVar11 >> 0x20);
      iVar9 = -0x7fffff;
      if (-0x7fffff < iVar12) {
        iVar9 = iVar12;
        iStackX_24 = iVar12;
      }
      local_498 = (undefined4)local_480;
      local_494 = local_480._4_4_;
      puVar11 = (undefined8 *)FUN_1450481a0(local_440,&local_498,*plVar3,iVar8);
      iVar8 = (int)*puVar11;
      local_res20 = iVar14;
      if (iVar8 < iVar14) {
        local_res20 = iVar8;
      }
      iVar8 = (int)((ulonglong)*puVar11 >> 0x20);
      if (iVar9 < iVar8) {
        iStackX_24 = iVar8;
      }
      lVar15 = param_2[1];
      uVar2 = local_res18[1];
      local_res18 = (uint *)CONCAT44(local_res18._4_4_,uVar2);
      FUN_145061910(lVar15 + 0x10,&local_470,&local_res18);
      if ((int)local_470 == *(int *)(lVar15 + 0x18)) {
        iVar8 = *(int *)(lVar15 + 0x18) + 1;
        if ((int)(*(uint *)(lVar15 + 0x1c) & 0x7fffffff) < iVar8) {
          FUN_145061d30(lVar15 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar13 = (uint *)(*(longlong *)(lVar15 + 0x10) + (longlong)*(int *)(lVar15 + 0x18) * 0xc);
        if (puVar13 != (uint *)0x0) {
          *(ulonglong *)(puVar13 + 1) = CONCAT44(iStackX_24,local_res20);
          *puVar13 = uVar2;
        }
        *(int *)(lVar15 + 0x18) = iVar8;
      }
      else {
        *(ulonglong *)(*(longlong *)(lVar15 + 0x10) + 4 + (longlong)(int)local_470 * 0xc) =
             CONCAT44(iStackX_24,local_res20);
      }
    }
    piVar17 = piVar17 + 1;
    piVar7 = piVar1;
  } while( true );
}



// FUNCTION 14505fd60 FUN_14505fd60 body=907 status=ok
// SIG undefined FUN_14505fd60(void)

undefined8 FUN_14505fd60(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  uint *local_res18;
  int local_res20;
  int iStackX_24;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  undefined8 local_480;
  undefined8 local_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [8];
  undefined1 local_440 [8];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  
  piVar17 = *(int **)(param_1 + 0xf8);
  piVar1 = piVar17 + *(int *)(param_1 + 0x100);
  piVar7 = (int *)(longlong)*(int *)(param_1 + 0x100);
  do {
    if (piVar17 == piVar1) {
      return CONCAT71((int7)((ulonglong)piVar7 >> 8),1);
    }
    iVar8 = *piVar17;
    if (iVar8 != *(int *)(param_1 + 0x20)) {
      plVar3 = (longlong *)*param_2;
      iStackX_24 = -0x7fffff;
      lVar15 = *(longlong *)(plVar3[1] + 0x38);
      lVar4 = *(longlong *)(plVar3[1] + 0x28);
      puVar13 = (uint *)((longlong)iVar8 * 0x60 + lVar4);
      local_490 = *(undefined8 *)(lVar15 + (ulonglong)(*puVar13 & 0x3fffffff) * 0xc);
      local_480 = *(undefined8 *)
                   (lVar15 + (ulonglong)
                             (*(uint *)((longlong)(int)puVar13[2] * 0x60 + lVar4) & 0x3fffffff) *
                             0xc);
      uVar5 = *(ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)plVar3[0x18]);
      lVar15 = *plVar3;
      uVar16 = uVar5 >> 0x20;
      iVar8 = (int)uVar5;
      local_res18 = puVar13;
      if ((iVar8 == 0) || (iVar8 == 1)) {
        uVar16 = (ulonglong)
                 *(uint *)((longlong)(int)(uVar5 >> 0x20) * 0x60 + 4 + *(longlong *)(lVar15 + 0x28))
        ;
      }
      else if (iVar8 != 2) {
        FUN_144bde670(local_468,local_438,0x200);
        FUN_144be6160(local_468,"unknown enumerant");
        iVar8 = FUN_144bfc110(0x7523383a,local_438,
                              "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                              ,0x17);
        if (iVar8 != 0) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
        FUN_144bde6e0(local_468);
        lVar15 = *plVar3;
        uVar16 = 0xffffffff;
      }
      uVar10 = *(undefined8 *)((longlong)(int)puVar13[2] * 0x20 + *(longlong *)plVar3[0x18]);
      iVar8 = (int)((ulonglong)uVar10 >> 0x20);
      iVar14 = (int)uVar10;
      if ((iVar14 == 0) || (iVar14 == 1)) {
        iVar8 = *(int *)((longlong)iVar8 * 0x60 + 4 + *(longlong *)(lVar15 + 0x28));
      }
      else if (iVar14 != 2) {
        FUN_144bde670(local_458,local_238,0x200);
        FUN_144be6160(local_458,"unknown enumerant");
        iVar8 = FUN_144bfc110(0x7523383a,local_238,
                              "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                              ,0x17);
        if (iVar8 != 0) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return uVar10;
        }
        FUN_144bde6e0(local_458);
        iVar8 = -1;
      }
      local_4a0 = (undefined4)local_490;
      local_49c = local_490._4_4_;
      puVar11 = (undefined8 *)FUN_1450481a0(local_448,&local_4a0,*plVar3,uVar16);
      iVar9 = (int)*puVar11;
      iVar14 = 0x7fffff;
      if (iVar9 < 0x7fffff) {
        iVar14 = iVar9;
        local_res20 = iVar9;
      }
      iVar12 = (int)((ulonglong)*puVar11 >> 0x20);
      iVar9 = -0x7fffff;
      if (-0x7fffff < iVar12) {
        iVar9 = iVar12;
        iStackX_24 = iVar12;
      }
      local_498 = (undefined4)local_480;
      local_494 = local_480._4_4_;
      puVar11 = (undefined8 *)FUN_1450481a0(local_440,&local_498,*plVar3,iVar8);
      iVar8 = (int)*puVar11;
      local_res20 = iVar14;
      if (iVar8 < iVar14) {
        local_res20 = iVar8;
      }
      iVar8 = (int)((ulonglong)*puVar11 >> 0x20);
      if (iVar9 < iVar8) {
        iStackX_24 = iVar8;
      }
      lVar15 = param_2[1];
      uVar2 = local_res18[1];
      local_res18 = (uint *)CONCAT44(local_res18._4_4_,uVar2);
      FUN_145061910(lVar15 + 0x10,&local_470,&local_res18);
      if ((int)local_470 == *(int *)(lVar15 + 0x18)) {
        iVar8 = *(int *)(lVar15 + 0x18) + 1;
        if ((int)(*(uint *)(lVar15 + 0x1c) & 0x7fffffff) < iVar8) {
          FUN_145061d30(lVar15 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar13 = (uint *)(*(longlong *)(lVar15 + 0x10) + (longlong)*(int *)(lVar15 + 0x18) * 0xc);
        if (puVar13 != (uint *)0x0) {
          *(ulonglong *)(puVar13 + 1) = CONCAT44(iStackX_24,local_res20);
          *puVar13 = uVar2;
        }
        *(int *)(lVar15 + 0x18) = iVar8;
      }
      else {
        *(ulonglong *)(*(longlong *)(lVar15 + 0x10) + 4 + (longlong)(int)local_470 * 0xc) =
             CONCAT44(iStackX_24,local_res20);
      }
    }
    piVar17 = piVar17 + 1;
    piVar7 = piVar1;
  } while( true );
}



// FUNCTION 1450600f0 FUN_1450600f0 body=1367 status=ok
// SIG undefined FUN_1450600f0(void)

undefined4 *
FUN_1450600f0(undefined4 *param_1,longlong param_2,longlong *param_3,undefined4 *param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined8 *param_8,int param_9,
             char param_10,undefined8 param_11)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  longlong lVar20;
  int local_f8;
  int iStack_f4;
  int local_e8;
  int iStack_e4;
  int iStack_b4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  
  lVar20 = (longlong)(int)param_6;
  puVar5 = (uint *)(lVar20 * 0x60 + *(longlong *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(*param_3 + (ulonglong)(*puVar5 & 0x3fffffff) * 8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)(*puVar5 & 0x3fffffff) * 0xc);
  local_f8 = (int)uVar1;
  iVar4 = local_f8;
  lVar13 = (longlong)local_f8;
  local_98 = *param_8;
  uStack_90 = param_8[1];
  iStack_f4 = (int)((ulonglong)uVar1 >> 0x20);
  lVar12 = (longlong)iStack_f4;
  iVar9 = (int)uVar3;
  iStack_b4 = iVar9 >> 0x1f;
  iStack_64 = iStack_b4;
  iStack_60 = iStack_b4;
  iStack_5c = iStack_b4;
  local_58 = 1;
  local_88 = lVar13;
  lStack_80 = lVar13 >> 0x3f;
  local_78 = lVar12;
  lStack_70 = lVar12 >> 0x3f;
  local_68 = iVar9;
  FUN_14505ca70(param_11,&local_88,&local_98);
  iStack_e4 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar9 != iStack_e4) {
    local_98 = *param_8;
    uStack_90 = param_8[1];
    iStack_b4 = iStack_e4 >> 0x1f;
    local_68 = iStack_e4;
    iStack_64 = iStack_b4;
    iStack_60 = iStack_b4;
    iStack_5c = iStack_b4;
    local_58 = 1;
    local_88 = lVar13;
    lStack_80 = lVar13 >> 0x3f;
    local_78 = lVar12;
    lStack_70 = lVar12 >> 0x3f;
    FUN_14505ca70(param_11,&local_88,&local_98);
  }
  lVar17 = (longlong)(int)param_7;
  lVar18 = (longlong)param_7._4_4_;
  lVar12 = *(longlong *)(param_2 + 0x28);
  lVar11 = (longlong)(int)puVar5[2];
  uVar1 = *(undefined8 *)
           (*(longlong *)(param_2 + 0x38) +
           (ulonglong)(*(uint *)((longlong)(int)puVar5[3] * 0x60 + lVar12) & 0x3fffffff) * 0xc);
  puVar6 = (uint *)(lVar11 * 0x60 + lVar12);
  uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)(*puVar6 & 0x3fffffff) * 0xc);
  local_f8 = (int)uVar1;
  lVar13 = ((int)((ulonglong)uVar1 >> 0x20) - iStack_f4) * lVar17 - (local_f8 - iVar4) * lVar18;
  bVar7 = 0;
  if (lVar13 != 0) {
    bVar7 = (byte)((ulonglong)lVar13 >> 0x3f) ^ 1;
  }
  uVar15 = 0xffffffff;
  if (bVar7 == 0) {
    local_e8 = (int)uVar3;
    uVar15 = 0xffffffff;
    if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar17 - (local_e8 - iVar4) * lVar18) {
      uVar15 = param_6;
    }
  }
  uVar14 = uVar15;
  if ((param_9 == 0) || (((param_9 == 2 && ((int)uVar15 < 0)) || (param_10 != '\0')))) {
    if (param_6 != puVar6[4]) {
      do {
        iVar9 = *(int *)((longlong)(int)lVar20 * 0x60 + 0x10 + lVar12);
        if (iVar9 < 0) goto LAB_1450604af;
        lVar13 = (longlong)iVar9 * 0x60;
        uVar2 = *(uint *)(lVar13 + 0xc + lVar12);
        lVar20 = (longlong)(int)uVar2;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar13 + lVar12) & 0x3fffffff) * 0xc);
        uVar3 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)
                 (*(uint *)((longlong)*(int *)(lVar20 * 0x60 + 0xc + lVar12) * 0x60 + lVar12) &
                 0x3fffffff) * 0xc);
        local_f8 = (int)uVar3;
        lVar13 = ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar17 -
                 (local_f8 - iVar4) * lVar18;
        bVar7 = 0;
        if (lVar13 != 0) {
          bVar7 = (byte)((ulonglong)lVar13 >> 0x3f) ^ 1;
        }
        if ((bVar7 == 0) &&
           (local_e8 = (int)uVar1,
           -1 < ((int)((ulonglong)uVar1 >> 0x20) - iStack_f4) * lVar17 - (local_e8 - iVar4) * lVar18
           )) {
          uVar15 = uVar2;
          if (param_10 == '\0') break;
          if ((int)uVar14 < 0) {
            uVar14 = uVar2;
          }
        }
      } while (uVar2 != puVar6[4]);
    }
    param_6._0_1_ = 1;
    uVar19 = 1;
  }
  else {
LAB_1450604af:
    if ((param_9 != 1) && ((param_9 != 2 || (-1 < (int)uVar15)))) {
      uVar19 = 1;
      param_6._0_1_ = 1;
      if (param_10 == '\0') goto LAB_145060467;
    }
    uVar19 = 1;
    param_6._0_1_ = 1;
    if (puVar5[2] != puVar5[4]) {
      uVar19 = 1;
      param_6._0_1_ = 1;
      do {
        lVar13 = (longlong)(int)lVar11 * 0x60;
        uVar2 = *(uint *)(lVar13 + 0x10 + lVar12);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar13 + lVar12) & 0x3fffffff) * 0xc);
        if ((int)uVar2 < 0) break;
        uVar8 = *(uint *)((longlong)(int)uVar2 * 0x60 + 8 + lVar12);
        lVar11 = (longlong)(int)uVar8;
        uVar3 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar11 * 0x60 + lVar12) & 0x3fffffff) * 0xc);
        local_f8 = (int)uVar3;
        if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar17 -
                 (local_f8 - iVar4) * lVar18) {
          local_e8 = (int)uVar1;
          lVar13 = ((int)((ulonglong)uVar1 >> 0x20) - iStack_f4) * lVar17 -
                   (local_e8 - iVar4) * lVar18;
          bVar7 = 0;
          if (lVar13 != 0) {
            bVar7 = (byte)((ulonglong)lVar13 >> 0x3f) ^ 1;
          }
          if (bVar7 == 0) {
            param_6._0_1_ = 0;
            uVar14 = uVar2;
            if (param_10 == '\0') break;
            if ((int)uVar15 < 0) {
              uVar19 = 0;
              uVar15 = uVar2;
            }
          }
        }
      } while (uVar8 != puVar5[4]);
    }
  }
LAB_145060467:
  uVar10 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar16 = uVar19;
  uVar2 = uVar15;
  if ((param_9 != 0) && (uVar16 = (undefined1)param_6, uVar2 = uVar14, param_9 != 1)) {
    uVar16 = 0;
    if (param_9 != 2) goto LAB_14506061a;
    uVar16 = (undefined1)param_6;
    if (-1 < (int)uVar15) {
      uVar16 = uVar19;
      uVar2 = uVar15;
    }
  }
  uVar8 = uVar2;
  if (-1 < (int)uVar8) {
    uVar10 = *(undefined4 *)((longlong)(int)uVar8 * 0x60 + 4 + lVar12);
  }
LAB_14506061a:
  param_1[1] = uVar8;
  *param_4 = uVar10;
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 2) = uVar16;
  return param_1;
}



// FUNCTION 145060650 FUN_145060650 body=855 status=ok
// SIG undefined FUN_145060650(void)

void FUN_145060650(int *param_1,longlong param_2,longlong *param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 uVar13;
  int iStackX_14;
  int local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  uint *local_a0;
  int local_98;
  int local_94;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  
  lVar10 = *param_3;
  puVar8 = (uint *)((longlong)param_4 * 0x60 + *(longlong *)(param_2 + 0x28));
  local_a0 = puVar8;
  FUN_144cb6610(param_2,puVar8,&local_108,&local_98);
  local_a8 = 1;
  local_e8 = 1;
  local_e0 = 1;
  uVar5 = *(undefined8 *)(lVar10 + (ulonglong)(*puVar8 & 0x3fffffff) * 8);
  local_d8 = (longlong)local_108;
  lStack_d0 = local_d8 >> 0x3f;
  local_c8 = (longlong)local_104;
  lStack_c0 = local_c8 >> 0x3f;
  iVar6 = (int)uVar5;
  lStack_b0 = (longlong)iVar6 >> 0x3f;
  local_b8._4_4_ = iVar6 >> 0x1f;
  iStack_64 = local_b8._4_4_;
  iStack_60 = local_b8._4_4_;
  iStack_5c = local_b8._4_4_;
  local_58 = 1;
  local_100 = iVar6;
  local_b8 = (longlong)iVar6;
  local_88 = local_d8;
  lStack_80 = lStack_d0;
  local_78 = local_c8;
  lStack_70 = lStack_c0;
  local_68 = iVar6;
  FUN_14505ca70(param_6,&local_88,&local_e8);
  iStackX_14 = (int)((ulonglong)uVar5 >> 0x20);
  if (iVar6 != iStackX_14) {
    local_d8 = (longlong)local_108;
    lStack_d0 = local_d8 >> 0x3f;
    local_c8 = (longlong)local_104;
    lStack_c0 = local_c8 >> 0x3f;
    lStack_b0 = (longlong)iStackX_14 >> 0x3f;
    local_b8._4_4_ = iStackX_14 >> 0x1f;
    local_a8 = 1;
    local_58 = 1;
    local_100 = iStackX_14;
    local_e8 = 1;
    local_e0 = 1;
    local_68 = iStackX_14;
    iStack_64 = local_b8._4_4_;
    iStack_60 = local_b8._4_4_;
    iStack_5c = local_b8._4_4_;
    local_b8 = (longlong)iStackX_14;
    local_88 = local_d8;
    lStack_80 = lStack_d0;
    local_78 = local_c8;
    lStack_70 = lStack_c0;
    FUN_14505ca70(param_6,&local_88,&local_e8);
  }
  uVar13 = 1;
  iVar11 = local_98;
  iVar7 = local_94;
  iVar6 = param_4;
  if ((param_5 & 0xfffffffd) == 0) {
    iVar1 = *(int *)((longlong)(int)puVar8[2] * 0x60 + 0x10 + *(longlong *)(param_2 + 0x28));
    iVar2 = param_4;
    puVar8 = local_a0;
    while (iVar2 != iVar1) {
      lVar10 = *(longlong *)(param_2 + 0x28);
      iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x10 + lVar10);
      local_a0 = puVar8;
      if (iVar2 < 0) goto LAB_1450608b9;
      lVar9 = (longlong)iVar2 * 0x60 + lVar10;
      FUN_144cb6610(param_2,(longlong)*(int *)(lVar9 + 0xc) * 0x60 + lVar10,&local_e8,&local_f8);
      if (iVar11 - local_f8 == 0) {
        bVar12 = iVar7 < local_f4;
      }
      else {
        bVar12 = (bool)((byte)(iVar11 - local_f8 >> 0x1f) >> 7);
      }
      if (bVar12 == false) {
        iVar6 = *(int *)(lVar9 + 0xc);
        iVar11 = local_f8;
        iVar7 = local_f4;
      }
      puVar8 = local_a0;
      iVar2 = *(int *)(lVar9 + 0xc);
    }
  }
  else {
LAB_1450608b9:
    if ((param_5 == 1) || (uVar13 = 1, param_5 == 2)) {
      uVar13 = 1;
      uVar4 = puVar8[4];
      uVar3 = puVar8[2];
      while (uVar3 != uVar4) {
        lVar10 = (longlong)(int)uVar3 * 0x60 + *(longlong *)(param_2 + 0x28);
        if (*(int *)(lVar10 + 0x10) < 0) break;
        FUN_144cb6610(param_2,(longlong)*(int *)(lVar10 + 0x10) * 0x60 +
                              *(longlong *)(param_2 + 0x28),&local_e8,&local_f8);
        if (local_f8 - iVar11 == 0) {
          bVar12 = local_f4 < iVar7;
        }
        else {
          bVar12 = (bool)((byte)(local_f8 - iVar11 >> 0x1f) >> 7);
        }
        if (bVar12 != false) {
          iVar6 = *(int *)(lVar10 + 0x10);
          uVar13 = 0;
          iVar11 = local_f8;
          iVar7 = local_f4;
        }
        uVar3 = *(uint *)((longlong)*(int *)(lVar10 + 0x10) * 0x60 + 8 +
                         *(longlong *)(param_2 + 0x28));
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = iVar6;
  *(undefined1 *)(param_1 + 2) = uVar13;
  return;
}



// FUNCTION 1450609b0 FUN_1450609b0 body=1952 status=ok
// SIG undefined FUN_1450609b0(void)

void FUN_1450609b0(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  bool bVar25;
  undefined8 uVar26;
  char cVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  uint local_res10 [4];
  uint local_res20 [2];
  ulonglong local_248;
  ulonglong uStack_240;
  ulonglong local_238;
  undefined8 local_228;
  longlong lStack_220;
  ulonglong local_218;
  longlong lStack_210;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  ulonglong local_1b8;
  longlong lStack_1b0;
  ulonglong local_1a8;
  int local_198;
  int local_194;
  int local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  longlong lStack_160;
  ulonglong local_158;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong lStack_80;
  ulonglong local_78;
  
  if (*(int *)(param_2 + 0x10) < 0) {
    cVar27 = FUN_144cb4d20();
    if (cVar27 != '\0') {
      FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
      uVar31 = param_3[6];
      bVar25 = true;
      uVar35 = CONCAT44(0,local_res10[0]);
      uVar39 = *param_3;
      uVar40 = param_3[1];
      uVar41 = param_3[2];
      uVar42 = param_3[3];
      local_158 = param_3[6];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar31;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar35;
      uVar34 = uVar35 * uVar31;
      uVar37 = (undefined4)local_158;
      uVar38 = (undefined4)(local_158 >> 0x20);
      local_1b8 = param_3[4] - uVar34;
      lStack_1b0 = (param_3[5] - SUB168(auVar11 * auVar23,8)) -
                   (ulonglong)((ulonglong)param_3[4] < uVar34);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar31;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      uVar31 = param_3[4] + uVar34;
      lVar36 = param_3[5] + SUB168(auVar12 * auVar24,8) + (ulonglong)CARRY8(param_3[4],uVar34);
      local_1d8 = uVar39;
      uStack_1d0 = uVar40;
      local_1c8 = uVar41;
      uStack_1c0 = uVar42;
      goto LAB_1450610b1;
    }
  }
  else {
    lVar36 = (longlong)*(int *)(param_2 + 0x10) * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,param_2,&local_228,&local_198);
    FUN_144cb6610(param_1,lVar36,&local_1f0,&local_200);
    if ((((local_1f0 != local_198) || (local_1ec != local_194)) || (local_1e8 != local_190)) ||
       (((local_200 != (int)local_228 || (local_1fc != local_228._4_4_)) ||
        (local_1f8 != (int)lStack_220)))) {
      FUN_1450489a0(&local_1f0,&local_200,&param_5,&param_6,&local_188,&local_218);
      cVar27 = FUN_144cb4d20(param_1);
      if (cVar27 == '\0') {
        uVar31 = param_3[6];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar31;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_168;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_158;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = param_3[4];
        local_218 = local_158 * param_3[4];
        lStack_210 = param_3[5] * local_158 + SUB168(auVar10 * auVar22,8);
        if ((longlong)
            ((lStack_210 - (uVar31 * lStack_160 + SUB168(auVar9 * auVar21,8))) -
            (ulonglong)(local_218 < uVar31 * local_168)) < 0) {
          bVar25 = true;
          local_1b8 = param_3[4];
          lStack_1b0 = param_3[5];
          uVar37 = (undefined4)local_158;
          uVar38 = (undefined4)(local_158 >> 0x20);
          local_158 = param_3[6];
          uVar39 = local_188;
          uVar40 = uStack_180;
          local_1d8 = *param_3;
          uStack_1d0 = param_3[1];
          uVar41 = local_178;
          uVar42 = uStack_170;
          local_1c8 = param_3[2];
          uStack_1c0 = param_3[3];
          uVar31 = local_168;
          lVar36 = lStack_160;
        }
        else {
          bVar25 = true;
          uVar31 = param_3[4];
          lVar36 = param_3[5];
          uVar39 = *param_3;
          uVar40 = param_3[1];
          uVar41 = param_3[2];
          uVar42 = param_3[3];
          uVar37 = (undefined4)param_3[6];
          uVar38 = (undefined4)((ulonglong)param_3[6] >> 0x20);
          local_1d8 = local_188;
          uStack_1d0 = uStack_180;
          local_1c8 = local_178;
          uStack_1c0 = uStack_170;
          local_1b8 = local_168;
          lStack_1b0 = lStack_160;
        }
      }
      else {
        FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
        uVar31 = param_3[6];
        local_118 = *param_3;
        uStack_110 = param_3[1];
        uVar35 = CONCAT44(0,local_res10[0]);
        local_108 = param_3[2];
        uStack_100 = param_3[3];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar31;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar35;
        uVar34 = uVar35 * uVar31;
        local_e8 = param_3[6];
        local_98 = param_3[2];
        uStack_90 = param_3[3];
        lVar30 = param_3[4] - uVar34;
        lVar33 = (param_3[5] - SUB168(auVar3 * auVar15,8)) -
                 (ulonglong)((ulonglong)param_3[4] < uVar34);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar31;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar35;
        local_78 = param_3[6];
        uVar31 = param_3[4] + uVar34;
        lVar32 = param_3[5] + SUB168(auVar4 * auVar16,8) + (ulonglong)CARRY8(param_3[4],uVar34);
        local_248 = uVar31;
        uStack_240 = lVar32;
        local_f8 = lVar30;
        lStack_f0 = lVar33;
        local_a8 = local_118;
        uStack_a0 = uStack_110;
        local_88 = uVar31;
        lStack_80 = lVar32;
        FUN_144cb4e20(param_1,local_res20,*(undefined4 *)(lVar36 + 4));
        uVar34 = CONCAT44(0,local_res20[0]);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_158;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar34;
        uVar35 = uVar34 * local_158;
        local_b0 = local_158;
        local_1a8 = local_158;
        local_e0 = local_188;
        uStack_d8 = uStack_180;
        local_d0 = local_178;
        uStack_c8 = uStack_170;
        local_248 = local_168 - uVar35;
        local_1d8 = local_188;
        uStack_1d0 = uStack_180;
        local_1c8 = local_178;
        uStack_1c0 = uStack_170;
        uStack_240 = (lStack_160 - SUB168(auVar5 * auVar17,8)) - (ulonglong)(local_168 < uVar35);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_158;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34;
        uVar34 = local_168 + uVar35;
        lVar36 = lStack_160 + SUB168(auVar6 * auVar18,8) + (ulonglong)CARRY8(local_168,uVar35);
        local_238 = local_158;
        local_140 = local_e8;
        local_128 = local_e8;
        local_1b8 = uVar34;
        lStack_1b0 = lVar36;
        local_138 = lVar30;
        lStack_130 = lVar33;
        local_c0 = local_248;
        lStack_b8 = uStack_240;
        cVar27 = FUN_14504c750(&local_138,&local_248);
        puVar29 = &local_118;
        if (cVar27 == '\0') {
          puVar29 = &local_e0;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_1a8;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar31;
        local_1b8 = puVar29[4];
        lStack_1b0 = puVar29[5];
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_78;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar34;
        local_218 = local_78 * uVar34;
        lStack_210 = local_78 * lVar36 + SUB168(auVar8 * auVar20,8);
        puVar28 = &local_a8;
        if (-1 < (longlong)
                 ((lStack_210 - (local_1a8 * lVar32 + SUB168(auVar7 * auVar19,8))) -
                 (ulonglong)(local_218 < local_1a8 * uVar31))) {
          puVar28 = &local_1d8;
        }
        bVar25 = true;
        uVar31 = puVar28[4];
        lVar36 = puVar28[5];
        uVar37 = (undefined4)puVar28[6];
        uVar38 = (undefined4)((ulonglong)puVar28[6] >> 0x20);
        local_158 = puVar29[6];
        uVar39 = *puVar28;
        uVar40 = puVar28[1];
        local_1d8 = *puVar29;
        uStack_1d0 = puVar29[1];
        uVar41 = puVar28[2];
        uVar42 = puVar28[3];
        local_1c8 = puVar29[2];
        uStack_1c0 = puVar29[3];
      }
      goto LAB_1450610b1;
    }
    cVar27 = FUN_144cb4d20(param_1);
    if (cVar27 != '\0') {
      FUN_144cb4e20(param_1,local_res20,*(undefined4 *)(param_2 + 4));
      FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(lVar36 + 4));
      uVar31 = param_3[6];
      bVar25 = true;
      if (local_res10[0] < local_res20[0]) {
        local_res10[0] = local_res20[0];
      }
      local_158 = param_3[6];
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar31;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = CONCAT44(0,local_res10[0]);
      uVar34 = local_res10[0] * uVar31;
      uVar37 = (undefined4)local_158;
      uVar38 = (undefined4)(local_158 >> 0x20);
      local_1b8 = param_3[4] - uVar34;
      lStack_1b0 = (param_3[5] - SUB168(auVar1 * auVar13,8)) -
                   (ulonglong)((ulonglong)param_3[4] < uVar34);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar31;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = CONCAT44(0,local_res10[0]);
      local_228 = param_3[4] + uVar34;
      lStack_220 = param_3[5] + SUB168(auVar2 * auVar14,8) + (ulonglong)CARRY8(param_3[4],uVar34);
      uVar39 = *param_3;
      uVar40 = param_3[1];
      local_1d8 = *param_3;
      uStack_1d0 = param_3[1];
      uVar41 = param_3[2];
      uVar42 = param_3[3];
      local_1c8 = param_3[2];
      uStack_1c0 = param_3[3];
      uVar31 = local_228;
      lVar36 = lStack_220;
      goto LAB_1450610b1;
    }
  }
  local_1b8 = param_3[4];
  lStack_1b0 = param_3[5];
  bVar25 = false;
  local_158 = param_3[6];
  uVar37 = (undefined4)local_158;
  uVar38 = (undefined4)(local_158 >> 0x20);
  uVar39 = *param_3;
  uVar40 = param_3[1];
  local_1d8 = *param_3;
  uStack_1d0 = param_3[1];
  uVar41 = param_3[2];
  uVar42 = param_3[3];
  local_1c8 = param_3[2];
  uStack_1c0 = param_3[3];
  uVar31 = local_1b8;
  lVar36 = lStack_1b0;
LAB_1450610b1:
  uVar26 = param_7;
  local_248 = *param_4;
  uStack_240 = param_4[1];
  local_1a8 = local_158;
  FUN_14505ca70(param_7,&local_1d8,&local_248);
  if (bVar25) {
    local_248 = *param_4;
    uStack_240 = param_4[1];
    local_1a8 = CONCAT44(uVar38,uVar37);
    local_1d8 = uVar39;
    uStack_1d0 = uVar40;
    local_1c8 = uVar41;
    uStack_1c0 = uVar42;
    local_1b8 = uVar31;
    lStack_1b0 = lVar36;
    FUN_14505ca70(uVar26,&local_1d8,&local_248);
  }
  return;
}



// FUNCTION 145061150 FUN_145061150 body=917 status=ok
// SIG undefined FUN_145061150(void)

undefined8 FUN_145061150(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  longlong lVar18;
  int local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  piVar17 = *(int **)(param_1 + 0x38);
  piVar12 = piVar17 + *(int *)(param_1 + 0x40);
  local_c8 = piVar12;
  if (piVar17 != piVar12) {
    do {
      iVar13 = *piVar17;
      lVar18 = (longlong)iVar13;
      if (iVar13 != *(int *)(param_1 + 4)) {
        puVar14 = (undefined8 *)param_2[1];
        puVar2 = (undefined8 *)*param_2;
        puVar16 = (uint *)(lVar18 * 0x60 + *(longlong *)(puVar2[1] + 0x28));
        uVar15 = *puVar16;
        lVar3 = *(longlong *)(puVar2[1] + 0x38);
        *puVar14 = *(undefined8 *)(lVar3 + (ulonglong)(uVar15 & 0x3fffffff) * 0xc);
        puVar4 = (uint *)param_2[2];
        *(undefined4 *)(puVar14 + 1) =
             *(undefined4 *)(lVar3 + 8 + (ulonglong)(uVar15 & 0x3fffffff) * 0xc);
        *puVar4 = puVar16[1];
        local_res18[0] = iVar13;
        if (((*(char *)param_2[4] == '\0') || (iVar13 != *(int *)(param_2[5] + 0xc))) ||
           (cVar9 = FUN_144cb52c0(puVar2[1],iVar13), cVar9 == '\0')) {
          puVar10 = (undefined8 *)(puVar2[2] + 0xa0);
        }
        else {
          puVar10 = (undefined8 *)(puVar2[2] + 0xa8);
        }
        *(undefined8 *)param_2[3] = *puVar10;
        uVar15 = puVar16[4];
        if ((int)uVar15 < 0) {
LAB_1450612c4:
          *(undefined1 *)param_2[7] = 0;
          *(undefined4 *)param_2[8] = 0xffffffff;
        }
        else {
          lVar3 = param_2[5];
          if (uVar15 == *(uint *)(lVar3 + 0x10)) {
            iVar1 = *(int *)(lVar3 + 4);
LAB_145061249:
            uVar15 = *(uint *)((longlong)iVar1 * 0x60 + 0x10 + *(longlong *)(puVar2[1] + 0x28));
            if ((int)uVar15 < 0) goto LAB_1450612c4;
          }
          else if (uVar15 == *(uint *)(lVar3 + 0x2c)) {
            iVar1 = *(int *)(lVar3 + 0x20);
            goto LAB_145061249;
          }
          puVar10 = (undefined8 *)param_2[6];
          lVar3 = *(longlong *)(puVar2[1] + 0x28);
          uVar11 = (ulonglong)
                   (*(uint *)((longlong)*(int *)((ulonglong)uVar15 * 0x60 + 0xc + lVar3) * 0x60 +
                             lVar3) & 0x3fffffff);
          lVar5 = *(longlong *)(puVar2[1] + 0x38);
          *puVar10 = *(undefined8 *)(lVar5 + uVar11 * 0xc);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar5 + 8 + uVar11 * 0xc);
          *(bool *)param_2[7] = *(int *)(puVar10 + 1) != *(int *)(puVar14 + 1);
          *(undefined4 *)param_2[8] = *(undefined4 *)((ulonglong)uVar15 * 0x60 + 4 + lVar3);
        }
        local_d8 = 0;
        local_d0 = 0;
        plVar6 = (longlong *)puVar2[0x18];
        local_e0[0] = 3;
        local_cc = 0x80000000;
        lVar3 = *plVar6;
        puVar14 = (undefined8 *)(lVar18 * 0x20 + lVar3);
        local_e8 = *puVar14;
        lVar18 = lVar18 * 0x60 + *(longlong *)(puVar2[1] + 0x28);
        iVar1 = *(int *)(lVar18 + 0x10);
        if (iVar1 < iVar13) {
          FUN_145056060(local_e0,puVar14 + 1);
        }
        else {
          FUN_145056060(local_e0,(longlong)iVar1 * 0x20 + lVar3 + 8);
          FUN_145055fb0(local_e0,*(undefined8 *)((longlong)*(int *)(lVar18 + 0x10) * 0x20 + *plVar6)
                       );
        }
        plVar6 = (longlong *)param_2[9];
        local_c0[0] = 3;
        local_b8[0] = 3;
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 0x80000000;
        FUN_14505b7e0(plVar6,local_res18,local_c0);
        FUN_14504ba80(local_b8);
        lVar18 = FUN_1450618a0(plVar6,local_res18);
        if (lVar18 == 0) {
          iVar13 = -1;
        }
        else {
          iVar13 = *(int *)(lVar18 + 4);
        }
        puVar14 = (undefined8 *)param_2[1];
        lVar18 = *plVar6 + (longlong)iVar13 * 0x28;
        *(undefined8 *)(lVar18 + 8) = local_e8;
        piVar12 = (int *)(lVar18 + 0x10);
        puVar10 = (undefined8 *)param_2[0xb];
        local_88 = *puVar10;
        uStack_80 = puVar10[1];
        local_78 = puVar10[2];
        uStack_70 = puVar10[3];
        local_68 = puVar10[4];
        uStack_60 = puVar10[5];
        local_58 = *(undefined4 *)(puVar10 + 6);
        uStack_54 = *(undefined4 *)((longlong)puVar10 + 0x34);
        uStack_50 = *(undefined4 *)(puVar10 + 7);
        uStack_4c = *(undefined4 *)((longlong)puVar10 + 0x3c);
        local_48 = *(undefined4 *)(puVar10 + 8);
        uStack_44 = *(undefined4 *)((longlong)puVar10 + 0x44);
        uStack_40 = *(undefined4 *)(puVar10 + 9);
        uStack_3c = *(undefined4 *)((longlong)puVar10 + 0x4c);
        local_98 = *(longlong *)puVar2[0x15];
        local_90 = local_98 + (longlong)(int)((longlong *)puVar2[0x15])[1] * 8;
        local_res20 = *(undefined4 *)puVar14;
        uStackX_24 = *(undefined4 *)((longlong)puVar14 + 4);
        FUN_14505cc60(*puVar2,&local_98,&local_e8,*puVar14,*(undefined8 *)param_2[10],
                      ((int)uVar15 >> 0x1f & 0xfffffffeU) + 2,&local_88,piVar12);
        pcVar7 = (char *)param_2[0xc];
        if (*pcVar7 == '\0') {
          *(undefined8 *)param_2[0xd] = *(undefined8 *)piVar12;
          *pcVar7 = '\x01';
        }
        else {
          uVar8 = *(undefined8 *)param_2[0xd];
          if ((*piVar12 != (int)uVar8) ||
             (*(int *)(lVar18 + 0x14) != (int)((ulonglong)uVar8 >> 0x20))) goto LAB_145061484;
        }
        if (*(int *)param_2[0xf] < *(int *)param_2[0xe]) {
LAB_145061484:
          FUN_14504ba80(local_e0);
          return 0;
        }
        FUN_14504ba80(local_e0);
        piVar12 = local_c8;
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar12);
  }
  return 1;
}



// FUNCTION 1450614f0 FUN_1450614f0 body=933 status=ok
// SIG undefined FUN_1450614f0(void)

undefined8 FUN_1450614f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  longlong lVar18;
  int local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  piVar17 = *(int **)(param_1 + 0xf8);
  piVar12 = piVar17 + *(int *)(param_1 + 0x100);
  local_c8 = piVar12;
  if (piVar17 != piVar12) {
    do {
      iVar13 = *piVar17;
      lVar18 = (longlong)iVar13;
      if (iVar13 != *(int *)(param_1 + 0x20)) {
        puVar14 = (undefined8 *)param_2[1];
        puVar2 = (undefined8 *)*param_2;
        puVar16 = (uint *)(lVar18 * 0x60 + *(longlong *)(puVar2[1] + 0x28));
        uVar15 = *puVar16;
        lVar3 = *(longlong *)(puVar2[1] + 0x38);
        *puVar14 = *(undefined8 *)(lVar3 + (ulonglong)(uVar15 & 0x3fffffff) * 0xc);
        puVar4 = (uint *)param_2[2];
        *(undefined4 *)(puVar14 + 1) =
             *(undefined4 *)(lVar3 + 8 + (ulonglong)(uVar15 & 0x3fffffff) * 0xc);
        *puVar4 = puVar16[1];
        local_res18[0] = iVar13;
        if (((*(char *)param_2[4] == '\0') || (iVar13 != *(int *)(param_2[5] + 0xc))) ||
           (cVar9 = FUN_144cb52c0(puVar2[1],iVar13), cVar9 == '\0')) {
          puVar10 = (undefined8 *)(puVar2[2] + 0xa0);
        }
        else {
          puVar10 = (undefined8 *)(puVar2[2] + 0xa8);
        }
        *(undefined8 *)param_2[3] = *puVar10;
        uVar15 = puVar16[4];
        if ((int)uVar15 < 0) {
LAB_145061674:
          *(undefined1 *)param_2[7] = 0;
          *(undefined4 *)param_2[8] = 0xffffffff;
        }
        else {
          lVar3 = param_2[5];
          if (uVar15 == *(uint *)(lVar3 + 0x10)) {
            iVar1 = *(int *)(lVar3 + 4);
LAB_1450615f9:
            uVar15 = *(uint *)((longlong)iVar1 * 0x60 + 0x10 + *(longlong *)(puVar2[1] + 0x28));
            if ((int)uVar15 < 0) goto LAB_145061674;
          }
          else if (uVar15 == *(uint *)(lVar3 + 0x2c)) {
            iVar1 = *(int *)(lVar3 + 0x20);
            goto LAB_1450615f9;
          }
          puVar10 = (undefined8 *)param_2[6];
          lVar3 = *(longlong *)(puVar2[1] + 0x28);
          uVar11 = (ulonglong)
                   (*(uint *)((longlong)*(int *)((ulonglong)uVar15 * 0x60 + 0xc + lVar3) * 0x60 +
                             lVar3) & 0x3fffffff);
          lVar5 = *(longlong *)(puVar2[1] + 0x38);
          *puVar10 = *(undefined8 *)(lVar5 + uVar11 * 0xc);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar5 + 8 + uVar11 * 0xc);
          *(bool *)param_2[7] = *(int *)(puVar10 + 1) != *(int *)(puVar14 + 1);
          *(undefined4 *)param_2[8] = *(undefined4 *)((ulonglong)uVar15 * 0x60 + 4 + lVar3);
        }
        local_d8 = 0;
        local_d0 = 0;
        plVar6 = (longlong *)puVar2[0x18];
        local_e0[0] = 3;
        local_cc = 0x80000000;
        lVar3 = *plVar6;
        puVar14 = (undefined8 *)(lVar18 * 0x20 + lVar3);
        local_e8 = *puVar14;
        lVar18 = lVar18 * 0x60 + *(longlong *)(puVar2[1] + 0x28);
        iVar1 = *(int *)(lVar18 + 0x10);
        if (iVar1 < iVar13) {
          FUN_145056060(local_e0,puVar14 + 1);
        }
        else {
          FUN_145056060(local_e0,(longlong)iVar1 * 0x20 + lVar3 + 8);
          FUN_145055fb0(local_e0,*(undefined8 *)((longlong)*(int *)(lVar18 + 0x10) * 0x20 + *plVar6)
                       );
        }
        plVar6 = (longlong *)param_2[9];
        local_c0[0] = 3;
        local_b8[0] = 3;
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 0x80000000;
        FUN_14505b7e0(plVar6,local_res18,local_c0);
        FUN_14504ba80(local_b8);
        lVar18 = FUN_1450618a0(plVar6,local_res18);
        if (lVar18 == 0) {
          iVar13 = -1;
        }
        else {
          iVar13 = *(int *)(lVar18 + 4);
        }
        puVar14 = (undefined8 *)param_2[1];
        lVar18 = *plVar6 + (longlong)iVar13 * 0x28;
        *(undefined8 *)(lVar18 + 8) = local_e8;
        piVar12 = (int *)(lVar18 + 0x10);
        puVar10 = (undefined8 *)param_2[0xb];
        local_88 = *puVar10;
        uStack_80 = puVar10[1];
        local_78 = puVar10[2];
        uStack_70 = puVar10[3];
        local_68 = puVar10[4];
        uStack_60 = puVar10[5];
        local_58 = *(undefined4 *)(puVar10 + 6);
        uStack_54 = *(undefined4 *)((longlong)puVar10 + 0x34);
        uStack_50 = *(undefined4 *)(puVar10 + 7);
        uStack_4c = *(undefined4 *)((longlong)puVar10 + 0x3c);
        local_48 = *(undefined4 *)(puVar10 + 8);
        uStack_44 = *(undefined4 *)((longlong)puVar10 + 0x44);
        uStack_40 = *(undefined4 *)(puVar10 + 9);
        uStack_3c = *(undefined4 *)((longlong)puVar10 + 0x4c);
        local_98 = *(longlong *)puVar2[0x15];
        local_90 = local_98 + (longlong)(int)((longlong *)puVar2[0x15])[1] * 8;
        local_res20 = *(undefined4 *)puVar14;
        uStackX_24 = *(undefined4 *)((longlong)puVar14 + 4);
        FUN_14505cc60(*puVar2,&local_98,&local_e8,*puVar14,*(undefined8 *)param_2[10],
                      ((int)uVar15 >> 0x1f & 0xfffffffeU) + 2,&local_88,piVar12);
        pcVar7 = (char *)param_2[0xc];
        if (*pcVar7 == '\0') {
          *(undefined8 *)param_2[0xd] = *(undefined8 *)piVar12;
          *pcVar7 = '\x01';
        }
        else {
          uVar8 = *(undefined8 *)param_2[0xd];
          if ((*piVar12 != (int)uVar8) ||
             (*(int *)(lVar18 + 0x14) != (int)((ulonglong)uVar8 >> 0x20))) goto LAB_145061834;
        }
        if (*(int *)param_2[0xf] < *(int *)param_2[0xe]) {
LAB_145061834:
          FUN_14504ba80(local_e0);
          return 0;
        }
        FUN_14504ba80(local_e0);
        piVar12 = local_c8;
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar12);
  }
  return 1;
}



// FUNCTION 1450618a0 FUN_1450618a0 body=105 status=ok
// SIG undefined FUN_1450618a0(void)

uint * FUN_1450618a0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x28) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 145061910 FUN_145061910 body=257 status=ok
// SIG undefined FUN_145061910(void)

uint * FUN_145061910(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_1450619e9:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0xc) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_1450619e9;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 145061a20 FUN_145061a20 body=105 status=ok
// SIG undefined FUN_145061a20(void)

uint * FUN_145061a20(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0xc) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 145061a90 FUN_145061a90 body=310 status=ok
// SIG undefined FUN_145061a90(void)

void FUN_145061a90(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 145061bd0 FUN_145061bd0 body=343 status=ok
// SIG undefined FUN_145061bd0(void)

ulonglong FUN_145061bd0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  undefined4 *local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = uVar7 * 2;
  uVar6 = param_3;
  if (param_3 < uVar5) {
    uVar6 = uVar5;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x28,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  local_res18 = puVar4;
  local_res20 = puVar3;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        FUN_145056130(puVar3 + 2,puVar4 + 2);
      }
      puVar3 = puVar3 + 10;
      puVar4 = puVar4 + 10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = local_res18 + 4;
    do {
      FUN_14504ba80(puVar4);
      puVar4 = puVar4 + 10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar4 = local_res20;
  uVar5 = uVar6 * 0x28 + 0x28;
  uVar8 = uVar6;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar8 = uVar6 + 1;
    if (uVar5 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x28;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar5 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar2,0);
      uVar8 = uVar8 + uVar6 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*local_res10 + 0x18))(local_res10,*param_1,uVar7 * 0x28);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return uVar5;
}



// FUNCTION 145061d30 FUN_145061d30 body=289 status=ok
// SIG undefined FUN_145061d30(void)

ulonglong FUN_145061d30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0xc,&local_res8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 145061e60 FUN_145061e60 body=2648 status=ok
// SIG undefined FUN_145061e60(void)

undefined8 * FUN_145061e60(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [12];
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int *piVar24;
  uint uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong *local_res10;
  char local_res18 [8];
  undefined8 local_res20;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  int local_a8;
  int iStack_a4;
  int local_9c;
  int iStack_98;
  longlong local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  local_80 = 0x38;
  local_res10 = param_2;
  local_res18[0] = param_3;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_80,0);
  local_c0 = puVar9;
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"AccelerationData");
  }
  puVar17 = (undefined8 *)0x0;
  uVar15 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    local_c0 = (undefined8 *)0x0;
    puVar9 = puVar17;
  }
  else {
    puVar9[2] = 1;
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiGeometrySegmentCaster::AccelerationData::vftable;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 5) = 0;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = 0x80000000;
    puVar9[6] = 0;
  }
  local_res20 = 0x20;
  lVar10 = (*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar10,"hkcdDynamicAabbTree");
  }
  puVar11 = puVar17;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)FUN_144fcd2c0(lVar10);
  }
  lVar10 = puVar9[3];
  puVar9[3] = puVar11;
  if (lVar10 != 0) {
    FUN_144b3f230();
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x30);
  FUN_144fcd510(puVar9[3],&local_res20,*(int *)(param_1 + 0x30));
  plVar8 = local_res10;
  local_c8 = lVar10;
  if ((int)param_2[2] == 0) {
    puVar11 = puVar17;
    if (0 < lVar10) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x28);
        lVar13 = *(longlong *)(param_1 + 0x18);
        auVar29 = *(undefined1 (*) [16])
                   (lVar13 + (longlong)*(int *)(lVar14 + (longlong)puVar17) * 0x10);
        auVar2 = *(undefined1 (*) [16])
                  (lVar13 + (longlong)*(int *)(lVar14 + 4 + (longlong)puVar17) * 0x10);
        auVar28 = minps(auVar29,auVar2);
        auVar3 = *(undefined1 (*) [16])
                  (lVar13 + (longlong)*(int *)(lVar14 + 8 + (longlong)puVar17) * 0x10);
        auVar29 = maxps(auVar29,auVar2);
        local_e8 = minps(auVar28,auVar3);
        local_d8 = maxps(auVar29,auVar3);
        FUN_144fcd550(puVar9[3],local_e8,puVar11);
        puVar17 = puVar17 + 2;
        lVar10 = lVar10 + -1;
        param_2 = local_res10;
        puVar11 = (undefined8 *)(ulonglong)((int)puVar11 + 1);
      } while (lVar10 != 0);
    }
  }
  else {
    if (0 < (int)param_2[2]) {
      uVar15 = *(uint *)*param_2;
    }
    param_2 = local_res10;
    puVar11 = puVar17;
    puVar26 = puVar17;
    if (0 < lVar10) {
      do {
        iVar16 = (int)puVar17;
        if ((uVar15 & 1) != 0) {
          lVar14 = *(longlong *)(param_1 + 0x28);
          lVar13 = *(longlong *)(param_1 + 0x18);
          auVar29 = *(undefined1 (*) [16])
                     (lVar13 + (longlong)*(int *)(lVar14 + (longlong)puVar11) * 0x10);
          auVar2 = *(undefined1 (*) [16])
                    (lVar13 + (longlong)*(int *)(lVar14 + 4 + (longlong)puVar11) * 0x10);
          auVar28 = minps(auVar29,auVar2);
          auVar3 = *(undefined1 (*) [16])
                    (lVar13 + (longlong)*(int *)(lVar14 + 8 + (longlong)puVar11) * 0x10);
          auVar29 = maxps(auVar29,auVar2);
          local_e8 = minps(auVar28,auVar3);
          local_d8 = maxps(auVar29,auVar3);
          FUN_144fcd550(local_c0[3],local_e8,puVar26);
        }
        uVar18 = iVar16 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar18;
        if (((uVar18 & 0x1f) == 0) && ((int)uVar18 < (int)plVar8[2])) {
          uVar15 = *(uint *)(*plVar8 + ((longlong)iVar16 + 1 >> 5) * 4);
        }
        else {
          uVar15 = uVar15 >> 1;
        }
        lVar10 = lVar10 + -1;
        param_2 = local_res10;
        puVar9 = local_c0;
        puVar11 = puVar11 + 2;
        puVar26 = (undefined8 *)(ulonglong)((int)puVar26 + 1);
        param_3 = local_res18[0];
      } while (lVar10 != 0);
    }
  }
  lVar10 = local_c8;
  lVar14 = 0;
  FUN_144fce170(puVar9[3],local_res18);
  if (param_3 == '\0') {
    lVar10 = puVar9[6];
    puVar9[6] = 0;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
  }
  else {
    uVar21 = 0;
    iVar16 = 0;
    local_e8._8_4_ = 0;
    auVar7._8_4_ = 0;
    auVar7._0_8_ = local_e8._8_8_;
    local_e8._0_12_ = auVar7 << 0x40;
    uVar15 = 0;
    local_e8._12_4_ = 0x80000000;
    auVar29._12_4_ = 0;
    auVar29._0_12_ = local_d8._4_12_;
    local_d8 = auVar29 << 0x20;
    uVar18 = uVar21;
    if ((int)param_2[2] == 0) {
      lVar13 = lVar14;
      lVar23 = local_c8;
      lVar27 = lVar14;
      if (0 < lVar10) {
        while( true ) {
          piVar24 = (int *)(*(longlong *)(param_1 + 0x28) + lVar27);
          iVar4 = *piVar24;
          iVar5 = piVar24[1];
          iVar6 = piVar24[3];
          iVar19 = iVar5;
          if (iVar4 < iVar5) {
            iVar19 = iVar4;
          }
          if (iVar5 < iVar4) {
            iVar5 = iVar4;
          }
          local_b8 = CONCAT44(iVar5,iVar19);
          if (iVar16 + -1 < (int)(uVar15 * 2)) {
            FUN_145064e10(local_e8,local_res18,(iVar16 + -1) * 2 + 2);
            lVar13 = local_e8._0_8_;
            iVar16 = local_e8._8_4_;
            uVar15 = local_d8._0_4_;
          }
          uVar18 = (iVar19 * 0x5d31 ^ iVar5 * -0x61c8864f) & iVar16 - 1U;
          lVar10 = (longlong)(int)uVar18;
          iVar4 = *(int *)(lVar13 + lVar10 * 0xc);
          while ((uVar22 = 1, iVar4 != -1 &&
                 ((piVar12 = (int *)(lVar13 + lVar10 * 0xc), *piVar12 != iVar19 ||
                  (uVar22 = uVar21, piVar12[1] != iVar5))))) {
            uVar18 = uVar18 + 1 & iVar16 - 1U;
            lVar10 = (longlong)(int)uVar18;
            iVar4 = *(int *)(lVar13 + lVar10 * 0xc);
          }
          iVar19 = uVar15 + uVar22;
          *(undefined8 *)(lVar13 + (longlong)(int)uVar18 * 0xc) = local_b8;
          *(int *)(lVar13 + 8 + (longlong)(int)uVar18 * 0xc) = iVar6;
          iVar16 = piVar24[1];
          iVar4 = piVar24[2];
          iVar5 = piVar24[3];
          iVar6 = iVar4;
          if (iVar16 < iVar4) {
            iVar6 = iVar16;
          }
          if (iVar4 < iVar16) {
            iVar4 = iVar16;
          }
          local_d8._0_4_ = iVar19;
          local_9c = iVar6;
          iStack_98 = iVar4;
          if (local_e8._8_4_ + -1 < iVar19 * 2) {
            FUN_145064e10(local_e8,&local_res10,(local_e8._8_4_ + -1) * 2 + 2);
          }
          uVar15 = (iVar6 * 0x5d31 ^ iVar4 * -0x61c8864f) & local_e8._8_4_ - 1;
          lVar10 = (longlong)(int)uVar15;
          iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
          while ((uVar18 = 1, iVar16 != -1 &&
                 ((piVar12 = (int *)(local_e8._0_8_ + lVar10 * 0xc), *piVar12 != iVar6 ||
                  (uVar18 = uVar21, piVar12[1] != iVar4))))) {
            uVar15 = uVar15 + 1 & local_e8._8_4_ - 1;
            lVar10 = (longlong)(int)uVar15;
            iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
          }
          local_d8._0_4_ = local_d8._0_4_ + uVar18;
          *(ulonglong *)(local_e8._0_8_ + (longlong)(int)uVar15 * 0xc) =
               CONCAT44(iStack_98,local_9c);
          *(int *)(local_e8._0_8_ + 8 + (longlong)(int)uVar15 * 0xc) = iVar5;
          iVar16 = piVar24[2];
          iVar4 = *piVar24;
          iVar5 = piVar24[3];
          iVar6 = iVar4;
          if (iVar16 < iVar4) {
            iVar6 = iVar16;
          }
          if (iVar4 < iVar16) {
            iVar4 = iVar16;
          }
          local_a8 = iVar6;
          iStack_a4 = iVar4;
          if (local_e8._8_4_ + -1 < local_d8._0_4_ * 2) {
            FUN_145064e10(local_e8,&local_res20,(local_e8._8_4_ + -1) * 2 + 2);
          }
          uVar15 = (iVar4 * -0x61c8864f ^ iVar6 * 0x5d31) & local_e8._8_4_ - 1;
          lVar10 = (longlong)(int)uVar15;
          iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
          while ((uVar18 = 1, iVar16 != -1 &&
                 ((piVar24 = (int *)(local_e8._0_8_ + lVar10 * 0xc), *piVar24 != iVar6 ||
                  (uVar18 = uVar21, piVar24[1] != iVar4))))) {
            uVar15 = uVar15 + 1 & local_e8._8_4_ - 1;
            lVar10 = (longlong)(int)uVar15;
            iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
          }
          uVar18 = local_d8._0_4_ + uVar18;
          local_d8._0_4_ = uVar18;
          *(ulonglong *)(local_e8._0_8_ + (longlong)(int)uVar15 * 0xc) =
               CONCAT44(iStack_a4,local_a8);
          *(int *)(local_e8._0_8_ + 8 + (longlong)(int)uVar15 * 0xc) = iVar5;
          puVar9 = local_c0;
          if (lVar23 + -1 == 0) break;
          lVar13 = local_e8._0_8_;
          lVar23 = lVar23 + -1;
          lVar27 = lVar27 + 0x10;
          iVar16 = local_e8._8_4_;
          uVar15 = uVar18;
        }
      }
    }
    else {
      uVar25 = 0;
      uVar22 = uVar21;
      if (0 < (int)param_2[2]) {
        uVar22 = *(uint *)*param_2;
      }
      lVar13 = lVar14;
      lVar23 = lVar14;
      puVar9 = local_c0;
      if (0 < lVar10) {
        do {
          local_90 = lVar23;
          uVar18 = uVar15;
          if ((uVar22 & 1) != 0) {
            piVar24 = (int *)(*(longlong *)(param_1 + 0x28) + local_90);
            iVar4 = *piVar24;
            iVar5 = piVar24[1];
            iVar6 = piVar24[3];
            iVar19 = iVar5;
            if (iVar4 < iVar5) {
              iVar19 = iVar4;
            }
            if (iVar5 < iVar4) {
              iVar5 = iVar4;
            }
            local_a8 = iVar19;
            iStack_a4 = iVar5;
            if (iVar16 + -1 < (int)(uVar15 * 2)) {
              FUN_145064e10(local_e8,&local_res20,(iVar16 + -1) * 2 + 2);
              lVar13 = local_e8._0_8_;
              iVar16 = local_e8._8_4_;
              uVar15 = local_d8._0_4_;
            }
            uVar18 = (iVar5 * -0x61c8864f ^ iVar19 * 0x5d31) & iVar16 - 1U;
            lVar10 = (longlong)(int)uVar18;
            iVar4 = *(int *)(lVar13 + lVar10 * 0xc);
            while ((uVar20 = 1, iVar4 != -1 &&
                   ((piVar12 = (int *)(lVar13 + lVar10 * 0xc), *piVar12 != iVar19 ||
                    (uVar20 = uVar21, piVar12[1] != iVar5))))) {
              uVar18 = uVar18 + 1 & iVar16 - 1U;
              lVar10 = (longlong)(int)uVar18;
              iVar4 = *(int *)(lVar13 + lVar10 * 0xc);
            }
            iVar19 = uVar15 + uVar20;
            *(ulonglong *)(lVar13 + (longlong)(int)uVar18 * 0xc) = CONCAT44(iStack_a4,local_a8);
            *(int *)(lVar13 + 8 + (longlong)(int)uVar18 * 0xc) = iVar6;
            iVar16 = piVar24[1];
            iVar4 = piVar24[2];
            iVar5 = piVar24[3];
            iVar6 = iVar4;
            if (iVar16 < iVar4) {
              iVar6 = iVar16;
            }
            if (iVar4 < iVar16) {
              iVar4 = iVar16;
            }
            local_d8._0_4_ = iVar19;
            local_9c = iVar6;
            iStack_98 = iVar4;
            if (local_e8._8_4_ + -1 < iVar19 * 2) {
              FUN_145064e10(local_e8,local_88,(local_e8._8_4_ + -1) * 2 + 2);
            }
            uVar15 = (iVar4 * -0x61c8864f ^ iVar6 * 0x5d31) & local_e8._8_4_ - 1;
            lVar10 = (longlong)(int)uVar15;
            iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
            while ((uVar18 = 1, iVar16 != -1 &&
                   ((piVar12 = (int *)(local_e8._0_8_ + lVar10 * 0xc), *piVar12 != iVar6 ||
                    (uVar18 = uVar21, piVar12[1] != iVar4))))) {
              uVar15 = uVar15 + 1 & local_e8._8_4_ - 1;
              lVar10 = (longlong)(int)uVar15;
              iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
            }
            local_d8._0_4_ = local_d8._0_4_ + uVar18;
            *(ulonglong *)(local_e8._0_8_ + (longlong)(int)uVar15 * 0xc) =
                 CONCAT44(iStack_98,local_9c);
            *(int *)(local_e8._0_8_ + 8 + (longlong)(int)uVar15 * 0xc) = iVar5;
            iVar16 = piVar24[2];
            iVar4 = *piVar24;
            iVar5 = piVar24[3];
            iVar6 = iVar4;
            if (iVar16 < iVar4) {
              iVar6 = iVar16;
            }
            if (iVar4 < iVar16) {
              iVar4 = iVar16;
            }
            local_b8 = CONCAT44(iVar4,iVar6);
            if (local_e8._8_4_ + -1 < local_d8._0_4_ * 2) {
              FUN_145064e10(local_e8,local_84,(local_e8._8_4_ + -1) * 2 + 2);
            }
            uVar15 = (iVar4 * -0x61c8864f ^ iVar6 * 0x5d31) & local_e8._8_4_ - 1;
            lVar10 = (longlong)(int)uVar15;
            iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
            while ((uVar18 = 1, iVar16 != -1 &&
                   ((piVar24 = (int *)(local_e8._0_8_ + lVar10 * 0xc), *piVar24 != iVar6 ||
                    (uVar18 = uVar21, piVar24[1] != iVar4))))) {
              uVar15 = uVar15 + 1 & local_e8._8_4_ - 1;
              lVar10 = (longlong)(int)uVar15;
              iVar16 = *(int *)(local_e8._0_8_ + lVar10 * 0xc);
            }
            uVar18 = local_d8._0_4_ + uVar18;
            local_d8._0_4_ = uVar18;
            *(undefined8 *)(local_e8._0_8_ + (longlong)(int)uVar15 * 0xc) = local_b8;
            *(int *)(local_e8._0_8_ + 8 + (longlong)(int)uVar15 * 0xc) = iVar5;
            param_2 = local_res10;
            lVar13 = local_e8._0_8_;
            lVar10 = local_c8;
            iVar16 = local_e8._8_4_;
          }
          uVar15 = uVar25 + 1;
          if (((uVar15 & 0x1f) == 0) && ((int)uVar15 < (int)param_2[2])) {
            uVar22 = *(uint *)(*param_2 + ((longlong)(int)uVar25 + 1 >> 5) * 4);
          }
          else {
            uVar22 = uVar22 >> 1;
          }
          local_90 = local_90 + 0x10;
          lVar10 = lVar10 + -1;
          lVar23 = local_90;
          puVar9 = local_c0;
          local_c8 = lVar10;
          uVar25 = uVar15;
          uVar15 = uVar18;
        } while (lVar10 != 0);
      }
    }
    if ((*(uint *)((longlong)puVar9 + 0x2c) & 0x7fffffff) < (uVar18 & 0x7fffffff)) {
      FUN_1450650c0(puVar9 + 4,&PTR_vftable_14c6e47a0,uVar18 & 0x7fffffff);
    }
    local_res10 = (longlong *)0x20;
    lVar10 = (*DAT_14c787670)(0,&local_res10,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar10,"hkcdDynamicAabbTree");
    }
    lVar13 = lVar14;
    if (lVar10 != 0) {
      lVar13 = FUN_144fcd2c0(lVar10);
    }
    lVar10 = puVar9[6];
    puVar9[6] = lVar13;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
    FUN_144fcd510(puVar9[6],local_res18,local_d8._0_4_ & 0x7fffffff);
    iVar16 = 0;
    piVar24 = (int *)local_e8._0_8_;
    if (-1 < local_e8._8_4_ + -1) {
      do {
        if (*piVar24 != -1) break;
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 1;
        piVar24 = piVar24 + 3;
      } while (lVar14 <= local_e8._8_4_ + -1);
    }
    if (iVar16 <= local_e8._8_4_ + -1) {
      do {
        uVar1 = *(undefined8 *)(local_e8._0_8_ + (longlong)iVar16 * 3 * 4);
        iVar4 = *(int *)(local_e8._0_8_ + ((longlong)iVar16 * 3 + 2) * 4);
        local_b8._0_4_ = (int)uVar1;
        auVar29 = *(undefined1 (*) [16])
                   (*(longlong *)(param_1 + 0x18) + (longlong)(int)local_b8 * 0x10);
        auVar2 = *(undefined1 (*) [16])
                  (*(longlong *)(param_1 + 0x18) + (longlong)(int)((ulonglong)uVar1 >> 0x20) * 0x10)
        ;
        local_78 = minps(auVar29,auVar2);
        local_68 = maxps(auVar29,auVar2);
        local_b8 = uVar1;
        FUN_144fcd550(puVar9[6],local_78,*(undefined4 *)(puVar9 + 5));
        iVar5 = *(int *)(puVar9 + 5);
        puVar17 = (undefined8 *)(puVar9[4] + (longlong)iVar5 * 0xc);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = uVar1;
          *(int *)(puVar17 + 1) = iVar4;
        }
        iVar16 = iVar16 + 1;
        lVar10 = (longlong)iVar16;
        *(int *)(puVar9 + 5) = iVar5 + 1;
        if (lVar10 <= local_e8._8_4_ + -1) {
          piVar24 = (int *)(local_e8._0_8_ + lVar10 * 3 * 4);
          do {
            if (*piVar24 != -1) break;
            iVar16 = iVar16 + 1;
            lVar10 = lVar10 + 1;
            piVar24 = piVar24 + 3;
          } while (lVar10 <= local_e8._8_4_ + -1);
        }
      } while (iVar16 <= local_e8._8_4_ + -1);
    }
    FUN_144fce170(puVar9[6],local_res18);
    local_e8._8_4_ = 0;
    if ((-1 < (int)local_e8._12_4_) && (local_e8._0_8_ != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_e8._0_8_,
                 (ulonglong)(local_e8._12_4_ & 0x7fffffff) * 0xc);
    }
  }
  return puVar9;
}



// FUNCTION 1450628c0 FUN_1450628c0 body=47 status=ok
// SIG undefined FUN_1450628c0(void)

undefined8 * FUN_1450628c0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiGeometrySegmentCaster::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 1450628f0 FUN_1450628f0 body=144 status=ok
// SIG undefined FUN_1450628f0(void)

void FUN_1450628f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20) + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar4) {
    FUN_1450651e0((longlong *)(param_1 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18))
  ;
  *(int *)(param_1 + 0x20) = iVar4;
  plVar1 = puVar3 + 1;
  if (puVar3 != (undefined8 *)0x0) {
    *plVar1 = 0;
  }
  *puVar3 = param_2;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar2 = *plVar1;
  *plVar1 = param_3;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 145062980 FUN_145062980 body=427 status=ok
// SIG undefined FUN_145062980(void)

void FUN_145062980(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined **local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  longlong local_40;
  undefined4 local_38;
  uint local_34;
  
  auVar7 = *param_2;
  uVar2 = 0;
  auVar1 = param_2[1];
  auVar8._0_8_ = CONCAT44(auVar7._4_4_ + *(float *)(param_2[2] + 4),
                          auVar7._0_4_ + *(float *)param_2[2]);
  auVar8._8_4_ = auVar7._8_4_ + *(float *)(param_2[2] + 8);
  auVar8._12_4_ = auVar7._12_4_ + *(float *)(param_2[2] + 0xc);
  lVar3 = (longlong)*(int *)(param_1 + 0x20);
  auVar5._0_4_ = auVar1._0_4_ + *(float *)param_2[2];
  auVar5._4_4_ = auVar1._4_4_ + *(float *)(param_2[2] + 4);
  auVar5._8_4_ = auVar1._8_4_ + *(float *)(param_2[2] + 8);
  auVar5._12_4_ = auVar1._12_4_ + *(float *)(param_2[2] + 0xc);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._0_8_ = auVar8._0_8_;
  auVar6._12_4_ = auVar8._12_4_;
  auVar6 = minps(auVar6,auVar5);
  auVar8 = maxps(auVar8,auVar5);
  auVar5 = minps(auVar7,auVar1);
  auVar7 = maxps(auVar7,auVar1);
  local_d8 = minps(auVar6,auVar5);
  local_c8 = maxps(auVar8,auVar7);
  uVar4 = uVar2;
  if (0 < lVar3) {
    do {
      local_a8 = *(undefined8 *)*param_2;
      uStack_a0 = *(undefined8 *)(*param_2 + 8);
      local_98 = *(undefined8 *)param_2[1];
      uStack_90 = *(undefined8 *)(param_2[1] + 8);
      local_60 = *(undefined8 *)(uVar2 + *(longlong *)(param_1 + 0x18));
      local_78 = *(undefined8 *)param_2[3];
      local_88 = *(undefined8 *)param_2[2];
      uStack_80 = *(undefined8 *)(param_2[2] + 8);
      local_70 = *(undefined8 *)(param_2[3] + 8);
      uStack_68 = *(undefined8 *)param_2[4];
      local_b8[0] = _anon_9A246F5F::GeometryCastSegmentQuery::vftable;
      local_58 = (int)uVar4;
      FUN_145068400(&local_50);
      FUN_145068400(&local_40);
      FUN_1450692c0(param_3,&local_40);
      FUN_144fce4b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar2) + 0x18)
                    ,local_d8,local_b8);
      FUN_1450692c0(param_3,&local_40);
      local_38 = 0;
      if ((-1 < (int)local_34) && (local_40 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) * 0x14);
      }
      local_40 = 0;
      local_34 = 0x80000000;
      local_48 = 0;
      if ((-1 < (int)local_44) && (local_50 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_50,(ulonglong)(local_44 & 0x7fffffff) * 0x14);
      }
      uVar2 = uVar2 + 0x10;
      lVar3 = lVar3 + -1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145062b30 FUN_145062b30 body=1013 status=ok
// SIG undefined FUN_145062b30(void)

void FUN_145062b30(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_208;
  undefined4 local_200;
  uint local_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined **local_1d8 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  longlong local_168;
  int local_160;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined **local_138 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b8;
  longlong local_b0;
  undefined4 local_a8;
  uint local_a4;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  auVar6 = param_2[1];
  uVar1 = 0;
  auVar7 = *param_2;
  auVar5._0_4_ = auVar6._0_4_ + *(float *)param_2[2];
  auVar5._4_4_ = auVar6._4_4_ + *(float *)(param_2[2] + 4);
  auVar5._8_4_ = auVar6._8_4_ + *(float *)(param_2[2] + 8);
  auVar5._12_4_ = auVar6._12_4_ + *(float *)(param_2[2] + 0xc);
  auVar9._0_8_ = CONCAT44(auVar7._4_4_ + *(float *)(param_2[2] + 4),
                          auVar7._0_4_ + *(float *)param_2[2]);
  auVar9._8_4_ = auVar7._8_4_ + *(float *)(param_2[2] + 8);
  auVar9._12_4_ = auVar7._12_4_ + *(float *)(param_2[2] + 0xc);
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  auVar8._8_4_ = auVar9._8_4_;
  auVar8._0_8_ = auVar9._0_8_;
  auVar8._12_4_ = auVar9._12_4_;
  auVar8 = minps(auVar8,auVar5);
  auVar9 = maxps(auVar9,auVar5);
  auVar5 = minps(auVar7,auVar6);
  auVar7 = maxps(auVar7,auVar6);
  auVar5 = minps(auVar8,auVar5);
  auVar6 = maxps(param_2[5],ZEXT816(0));
  auVar7 = maxps(auVar9,auVar7);
  local_1f8 = auVar5._0_4_ - auVar6._0_4_;
  fStack_1f4 = auVar5._4_4_ - auVar6._4_4_;
  fStack_1f0 = auVar5._8_4_ - auVar6._8_4_;
  fStack_1ec = auVar5._12_4_ - auVar6._12_4_;
  auVar6 = minps(param_2[5],ZEXT816(0));
  local_1e8 = auVar7._0_4_ - auVar6._0_4_;
  fStack_1e4 = auVar7._4_4_ - auVar6._4_4_;
  fStack_1e0 = auVar7._8_4_ - auVar6._8_4_;
  fStack_1dc = auVar7._12_4_ - auVar6._12_4_;
  uVar4 = uVar1;
  if (0 < lVar2) {
    do {
      local_128 = *(undefined8 *)*param_2;
      uStack_120 = *(undefined8 *)(*param_2 + 8);
      local_118 = *(undefined8 *)param_2[1];
      uStack_110 = *(undefined8 *)(param_2[1] + 8);
      local_c0 = *(undefined8 *)(uVar1 + *(longlong *)(param_1 + 0x18));
      local_d8 = *(undefined8 *)param_2[3];
      local_e8 = *(undefined8 *)param_2[2];
      uStack_e0 = *(undefined8 *)(param_2[2] + 8);
      local_d0 = *(undefined8 *)(param_2[3] + 8);
      uStack_c8 = *(undefined8 *)param_2[4];
      local_138[0] = _anon_9A246F5F::DoubledGeometryCastSegmentQuery::vftable;
      iVar3 = (int)uVar4;
      local_b8 = iVar3;
      FUN_145068400(&local_b0);
      FUN_145068400(&local_a0);
      local_108 = *(float *)*param_2 - *(float *)param_2[5];
      fStack_104 = *(float *)(*param_2 + 4) - *(float *)(param_2[5] + 4);
      fStack_100 = *(float *)(*param_2 + 8) - *(float *)(param_2[5] + 8);
      fStack_fc = *(float *)(*param_2 + 0xc) - *(float *)(param_2[5] + 0xc);
      local_f8 = *(float *)param_2[1] - *(float *)param_2[5];
      fStack_f4 = *(float *)(param_2[1] + 4) - *(float *)(param_2[5] + 4);
      fStack_f0 = *(float *)(param_2[1] + 8) - *(float *)(param_2[5] + 8);
      fStack_ec = *(float *)(param_2[1] + 0xc) - *(float *)(param_2[5] + 0xc);
      FUN_1450692c0(param_3,&local_a0);
      FUN_144fce4b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar1) + 0x18)
                    ,&local_1f8,local_138);
      local_1c8 = *(undefined8 *)*param_2;
      uStack_1c0 = *(undefined8 *)(*param_2 + 8);
      local_1b8 = *(undefined8 *)param_2[1];
      uStack_1b0 = *(undefined8 *)(param_2[1] + 8);
      local_170 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar1);
      local_168 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar1) + 0x20;
      local_1a8 = *(undefined8 *)param_2[2];
      uStack_1a0 = *(undefined8 *)(param_2[2] + 8);
      local_180 = *(undefined8 *)(param_2[3] + 8);
      uStack_178 = *(undefined8 *)param_2[4];
      local_1d8[0] = _anon_9A246F5F::GeometryExtrusionCastSegmentQuery::vftable;
      local_188 = *(undefined8 *)param_2[3];
      local_198 = *(undefined8 *)param_2[5];
      uStack_190 = *(undefined8 *)(param_2[5] + 8);
      local_160 = iVar3;
      FUN_145068400(&local_158);
      FUN_145068400(&local_148);
      FUN_1450692c0(&local_148,&local_a0);
      FUN_144fce4b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar1) + 0x30)
                    ,&local_1f8,local_1d8);
      FUN_1450692c0(param_3,&local_148);
      local_88 = *(undefined8 *)*param_2;
      uStack_80 = *(undefined8 *)(*param_2 + 8);
      local_78 = *(undefined8 *)param_2[1];
      uStack_70 = *(undefined8 *)(param_2[1] + 8);
      local_58 = *(undefined8 *)param_2[3];
      local_68 = *(uint *)param_2[5] ^ 0x80000000;
      uStack_64 = *(uint *)(param_2[5] + 4) ^ 0x80000000;
      uStack_60 = *(uint *)(param_2[5] + 8) ^ 0x80000000;
      uStack_5c = *(uint *)(param_2[5] + 0xc) ^ 0x80000000;
      local_50 = 0;
      local_48 = 0;
      FUN_145068400(&local_208);
      FUN_145062980(param_1,&local_88,&local_208);
      FUN_14506a1e0(&local_208);
      FUN_14506c4a0(param_3,&local_208);
      local_200 = 0;
      if ((-1 < (int)local_1fc) && (local_208 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_208,(ulonglong)(local_1fc & 0x7fffffff) * 0x14);
      }
      local_208 = 0;
      local_1fc = 0x80000000;
      local_140 = 0;
      if ((-1 < (int)local_13c) && (local_148 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_148,(ulonglong)(local_13c & 0x7fffffff) * 0x14);
      }
      local_148 = 0;
      local_13c = 0x80000000;
      local_150 = 0;
      if ((-1 < (int)local_14c) && (local_158 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_158,(ulonglong)(local_14c & 0x7fffffff) * 0x14);
      }
      local_158 = 0;
      local_1d8[0] = hkcdAabbTreeQueries::AabbCollector::vftable;
      local_14c = 0x80000000;
      local_98 = 0;
      if ((-1 < (int)local_94) && (local_a0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_a0,(ulonglong)(local_94 & 0x7fffffff) * 0x14);
      }
      local_a0 = 0;
      local_94 = 0x80000000;
      local_a8 = 0;
      if ((-1 < (int)local_a4) && (local_b0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_b0,(ulonglong)(local_a4 & 0x7fffffff) * 0x14);
      }
      uVar1 = uVar1 + 0x10;
      lVar2 = lVar2 + -1;
      uVar4 = (ulonglong)(iVar3 + 1);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145062f30 FUN_145062f30 body=437 status=ok
// SIG undefined FUN_145062f30(void)

void FUN_145062f30(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined **local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  longlong local_40;
  undefined4 local_38;
  uint local_34;
  
  uVar1 = 0;
  auVar4 = minps(*param_2,param_2[1]);
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  auVar5 = minps(param_2[2],param_2[3]);
  auVar7 = maxps(param_2[2],param_2[3]);
  auVar6 = maxps(*param_2,param_2[1]);
  local_e8 = minps(auVar5,auVar4);
  local_d8 = maxps(auVar7,auVar6);
  uVar3 = uVar1;
  if (0 < lVar2) {
    do {
      local_b8 = *(undefined8 *)*param_2;
      uStack_b0 = *(undefined8 *)(*param_2 + 8);
      local_a8 = *(undefined8 *)param_2[1];
      uStack_a0 = *(undefined8 *)(param_2[1] + 8);
      local_60 = *(undefined8 *)(uVar1 + *(longlong *)(param_1 + 0x18));
      local_78 = *(undefined8 *)param_2[4];
      local_98 = *(undefined8 *)param_2[2];
      uStack_90 = *(undefined8 *)(param_2[2] + 8);
      local_70 = *(undefined8 *)(param_2[4] + 8);
      uStack_68 = *(undefined8 *)param_2[5];
      local_88 = *(undefined8 *)param_2[3];
      uStack_80 = *(undefined8 *)(param_2[3] + 8);
      local_c8[0] = _anon_9A246F5F::GeometryTurnedSegmentQuery::vftable;
      local_58 = (int)uVar3;
      FUN_145068400(&local_50);
      FUN_145068400(&local_40);
      FUN_1450692c0(param_3,&local_40);
      FUN_144fce4b0(*(undefined8 *)(*(longlong *)(uVar1 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18)
                    ,local_e8,local_c8);
      FUN_1450692c0(param_3,&local_40);
      local_38 = 0;
      if ((-1 < (int)local_34) && (local_40 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) * 0x14);
      }
      local_40 = 0;
      local_34 = 0x80000000;
      local_48 = 0;
      if ((-1 < (int)local_44) && (local_50 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_50,(ulonglong)(local_44 & 0x7fffffff) * 0x14);
      }
      uVar1 = uVar1 + 0x10;
      lVar2 = lVar2 + -1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1450630f0 FUN_1450630f0 body=1108 status=ok
// SIG undefined FUN_1450630f0(void)

void FUN_1450630f0(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined **local_1f8 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  float *local_160;
  float *pfStack_158;
  longlong local_150;
  int local_148;
  uint local_144;
  undefined8 local_140;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  longlong local_120;
  undefined4 local_118;
  uint local_114;
  undefined **local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  
  uVar15 = 0;
  auVar18 = minps(*param_2,param_2[1]);
  lVar16 = (longlong)*(int *)(param_1 + 0x20);
  auVar20 = minps(param_2[2],param_2[3]);
  auVar21 = maxps(param_2[2],param_2[3]);
  auVar19 = maxps(*param_2,param_2[1]);
  auVar20 = minps(auVar20,auVar18);
  auVar21 = maxps(auVar21,auVar19);
  auVar18 = maxps(param_2[6],ZEXT816(0));
  auVar19 = minps(param_2[6],ZEXT816(0));
  local_218 = auVar20._0_4_ - auVar18._0_4_;
  fStack_214 = auVar20._4_4_ - auVar18._4_4_;
  fStack_210 = auVar20._8_4_ - auVar18._8_4_;
  fStack_20c = auVar20._12_4_ - auVar18._12_4_;
  local_208 = auVar21._0_4_ - auVar19._0_4_;
  fStack_204 = auVar21._4_4_ - auVar19._4_4_;
  fStack_200 = auVar21._8_4_ - auVar19._8_4_;
  fStack_1fc = auVar21._12_4_ - auVar19._12_4_;
  uVar17 = uVar15;
  if (0 < lVar16) {
    do {
      local_1e8 = *(undefined8 *)*param_2;
      uStack_1e0 = *(undefined8 *)(*param_2 + 8);
      local_1d8 = *(undefined8 *)param_2[1];
      uStack_1d0 = *(undefined8 *)(param_2[1] + 8);
      local_140 = *(undefined8 *)(uVar17 + *(longlong *)(param_1 + 0x18));
      local_168 = *(undefined8 *)param_2[4];
      local_1c8 = *(undefined8 *)param_2[2];
      uStack_1c0 = *(undefined8 *)(param_2[2] + 8);
      local_160 = *(float **)(param_2[4] + 8);
      pfStack_158 = *(float **)param_2[5];
      local_1b8 = *(undefined8 *)param_2[3];
      uStack_1b0 = *(undefined8 *)(param_2[3] + 8);
      local_1f8[0] = _anon_9A246F5F::DoubledGeometryTurnedSegmentQuery::vftable;
      local_150 = 0;
      local_148 = 0;
      local_144 = 0x80000000;
      FUN_145068400(&local_138);
      iVar14 = (int)uVar15;
      local_128 = iVar14;
      FUN_145068400(&local_120);
      pfVar11 = pfStack_158;
      local_178 = *(float *)param_2[6];
      fStack_174 = *(float *)(param_2[6] + 4);
      fStack_170 = *(float *)(param_2[6] + 8);
      fStack_16c = *(float *)(param_2[6] + 0xc);
      local_1a8 = *(float *)*param_2 - local_178;
      fStack_1a4 = *(float *)(*param_2 + 4) - fStack_174;
      fStack_1a0 = *(float *)(*param_2 + 8) - fStack_170;
      fStack_19c = *(float *)(*param_2 + 0xc) - fStack_16c;
      local_198 = *(float *)param_2[1] - local_178;
      fStack_194 = *(float *)(param_2[1] + 4) - fStack_174;
      fStack_190 = *(float *)(param_2[1] + 8) - fStack_170;
      fStack_18c = *(float *)(param_2[1] + 0xc) - fStack_16c;
      local_188 = *(float *)param_2[2] - local_178;
      fStack_184 = *(float *)(param_2[2] + 4) - fStack_174;
      fStack_180 = *(float *)(param_2[2] + 8) - fStack_170;
      fStack_17c = *(float *)(param_2[2] + 0xc) - fStack_16c;
      local_178 = *(float *)param_2[3] - local_178;
      fStack_174 = *(float *)(param_2[3] + 4) - fStack_174;
      fStack_170 = *(float *)(param_2[3] + 8) - fStack_170;
      fStack_16c = *(float *)(param_2[3] + 0xc) - fStack_16c;
      for (pfVar13 = local_160; pfVar13 != pfVar11; pfVar13 = pfVar13 + 4) {
        fVar2 = *pfVar13;
        fVar3 = pfVar13[1];
        fVar4 = pfVar13[2];
        fVar5 = pfVar13[3];
        fVar6 = *(float *)param_2[6];
        fVar7 = *(float *)(param_2[6] + 4);
        fVar8 = *(float *)(param_2[6] + 8);
        iVar1 = local_148 + 1;
        if ((int)(local_144 & 0x7fffffff) < iVar1) {
          FUN_1418055da(&local_150,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        fVar9 = pfVar13[1];
        fVar10 = pfVar13[2];
        pfVar12 = (float *)((longlong)local_148 * 0x10 + local_150);
        *pfVar12 = *pfVar13;
        pfVar12[1] = fVar9;
        pfVar12[2] = fVar10;
        pfVar12[3] = fVar5 - ABS(fVar4 * fVar8 + fVar3 * fVar7 + fVar2 * fVar6);
        local_148 = iVar1;
      }
      FUN_1450692c0(param_3,&local_120);
      FUN_144fce4b0(*(undefined8 *)
                     (*(longlong *)(uVar17 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18),&local_218,
                    local_1f8);
      local_f8 = *(undefined8 *)*param_2;
      uStack_f0 = *(undefined8 *)(*param_2 + 8);
      local_e8 = *(undefined8 *)param_2[1];
      uStack_e0 = *(undefined8 *)(param_2[1] + 8);
      local_90 = *(undefined8 *)(uVar17 + *(longlong *)(param_1 + 0x18));
      local_88 = *(longlong *)(uVar17 + 8 + *(longlong *)(param_1 + 0x18)) + 0x20;
      local_d8 = *(undefined8 *)param_2[2];
      uStack_d0 = *(undefined8 *)(param_2[2] + 8);
      local_b8 = *(undefined8 *)param_2[6];
      uStack_b0 = *(undefined8 *)(param_2[6] + 8);
      local_a0 = *(undefined8 *)(param_2[4] + 8);
      uStack_98 = *(undefined8 *)param_2[5];
      local_108[0] = _anon_9A246F5F::GeometryExtrusionTurnedSegmentQuery::vftable;
      local_a8 = *(undefined8 *)param_2[4];
      local_c8 = *(undefined8 *)param_2[3];
      uStack_c0 = *(undefined8 *)(param_2[3] + 8);
      local_80 = iVar14;
      FUN_145068400(&local_78);
      FUN_145068400(&local_68);
      FUN_1450692c0(&local_68,&local_120);
      FUN_144fce4b0(*(undefined8 *)
                     (*(longlong *)(uVar17 + 8 + *(longlong *)(param_1 + 0x18)) + 0x30),&local_218,
                    local_108);
      FUN_1450692c0(param_3,&local_68);
      local_60 = 0;
      if ((-1 < (int)local_5c) && (local_68 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) * 0x14);
      }
      local_68 = 0;
      local_5c = 0x80000000;
      local_70 = 0;
      if ((-1 < (int)local_6c) && (local_78 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) * 0x14);
      }
      local_78 = 0;
      local_108[0] = hkcdAabbTreeQueries::AabbCollector::vftable;
      local_6c = 0x80000000;
      local_118 = 0;
      if ((-1 < (int)local_114) && (local_120 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_120,(ulonglong)(local_114 & 0x7fffffff) * 0x14);
      }
      local_120 = 0;
      local_114 = 0x80000000;
      local_130 = 0;
      if ((-1 < (int)local_12c) && (local_138 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(local_12c & 0x7fffffff) * 0x14);
      }
      local_138 = 0;
      local_12c = 0x80000000;
      local_148 = 0;
      if ((-1 < (int)local_144) && (local_150 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_150,(ulonglong)(local_144 & 0x7fffffff) << 4);
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      lVar16 = lVar16 + -1;
      uVar17 = uVar17 + 0x10;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 145063550 FUN_145063550 body=1413 status=ok
// SIG undefined FUN_145063550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145063550(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined4 local_res8;
  undefined2 local_resc;
  undefined1 local_rese;
  longlong local_1d8;
  int local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [32];
  undefined **local_148;
  undefined1 *local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [112];
  
  FUN_145322750(local_168);
  local_1c8 = *param_2;
  uStack_1c0 = param_2[1];
  local_res8 = 0x10001;
  local_resc = 0;
  local_rese = 0;
  FUN_145322870(local_168,&local_1c8,0x80,&local_res8);
  FUN_145325440(local_168,local_a8);
  fVar23 = *(float *)(param_2 + 4) - *(float *)(param_2 + 2);
  fVar24 = *(float *)((longlong)param_2 + 0x24) - *(float *)((longlong)param_2 + 0x14);
  fVar25 = *(float *)(param_2 + 5) - *(float *)(param_2 + 3);
  fVar16 = *(float *)((longlong)param_2 + 0x54) * *(float *)(param_2 + 8) -
           *(float *)(param_2 + 10) * *(float *)((longlong)param_2 + 0x44);
  fVar19 = *(float *)(param_2 + 0xb) * *(float *)((longlong)param_2 + 0x44) -
           *(float *)((longlong)param_2 + 0x54) * *(float *)(param_2 + 9);
  fVar21 = *(float *)(param_2 + 10) * *(float *)(param_2 + 9) -
           *(float *)(param_2 + 0xb) * *(float *)(param_2 + 8);
  auVar18._12_4_ =
       *(float *)((longlong)param_2 + 0x5c) * *(float *)((longlong)param_2 + 0x4c) -
       *(float *)((longlong)param_2 + 0x5c) * *(float *)((longlong)param_2 + 0x4c);
  auVar18._4_4_ = fVar21;
  auVar18._0_4_ = fVar19;
  auVar18._8_4_ = fVar16;
  fVar19 = fVar19 * fVar19;
  fVar21 = fVar21 * fVar21;
  fVar16 = fVar16 * fVar16;
  auVar26._4_4_ = fVar19;
  auVar26._0_4_ = fVar19;
  auVar26._8_4_ = fVar19;
  auVar26._12_4_ = fVar19;
  fVar12 = fVar16 + fVar21 + fVar19;
  if (fVar12 == 0.0) {
    auVar17 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar3._4_4_ = fVar16 + fVar21 + fVar19;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar16 + fVar21 + fVar19;
    auVar3._12_4_ = fVar16 + fVar21 + fVar19;
    auVar26 = sqrtps(auVar26,auVar3);
    auVar26 = divps(auVar18,auVar26);
    auVar17 = auVar26._0_12_;
  }
  auVar4._12_4_ = uRam000000014c6dacac;
  auVar4._0_12_ = _DAT_14c6daca0;
  fVar19 = auVar17._0_4_ * fVar23;
  fVar12 = auVar17._4_4_ * fVar24;
  fVar21 = auVar17._8_4_ * fVar25;
  fVar16 = auVar17._0_4_ * (fVar21 + fVar12 + fVar19);
  fVar20 = auVar17._4_4_ * (fVar21 + fVar12 + fVar19);
  fVar22 = auVar17._8_4_ * (fVar21 + fVar12 + fVar19);
  fVar19 = fVar16 * fVar16;
  fVar12 = fVar20 * fVar20;
  fVar21 = fVar22 * fVar22;
  auVar1._4_4_ = fVar21 + fVar12 + fVar19;
  auVar1._0_4_ = fVar21 + fVar12 + fVar19;
  auVar1._8_4_ = fVar21 + fVar12 + fVar19;
  auVar1._12_4_ = fVar21 + fVar12 + fVar19;
  auVar26 = divps(auVar4,auVar1);
  fVar16 = auVar26._0_4_ * fVar16;
  fVar20 = auVar26._4_4_ * fVar20;
  fVar22 = auVar26._8_4_ * fVar22;
  fVar19 = *(float *)(param_2 + 2) * fVar16;
  fVar12 = *(float *)((longlong)param_2 + 0x14) * fVar20;
  fVar21 = 0.0 - (*(float *)(param_2 + 3) * fVar22 + fVar12 + fVar19);
  FUN_145068400(&local_1d8,fVar12 + fVar19);
  lVar10 = (longlong)*(int *)(param_1 + 0x20);
  iVar9 = 0;
  if (0 < lVar10) {
    lVar8 = 0;
    do {
      local_140 = local_168;
      local_128 = param_2[6];
      uStack_120 = param_2[7];
      local_110 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar8);
      local_108 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar8) + 0x20;
      local_118 = param_2[0xc];
      local_148 = _anon_9A246F5F::GeometryExtremalProfileQuery::vftable;
      local_138 = fVar16;
      fStack_134 = fVar20;
      fStack_130 = fVar22;
      fStack_12c = fVar21;
      local_100 = iVar9;
      FUN_145068400(&local_f8);
      FUN_1450692c0(&local_f8,&local_1d8);
      FUN_144fce4b0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar8) + 0x30)
                    ,local_a8,&local_148);
      FUN_1450692c0(&local_f8,&local_1d8);
      local_f0 = 0;
      if ((-1 < (int)local_ec) && (local_f8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_f8,(ulonglong)(local_ec & 0x7fffffff) * 0x14);
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (local_1d0 != 0) {
    local_178 = *(float *)(param_2 + 2);
    fStack_174 = *(float *)((longlong)param_2 + 0x14);
    uStack_170 = *(undefined4 *)(param_2 + 3);
    local_1a8 = *(float *)(param_2 + 8);
    fStack_1a4 = *(float *)((longlong)param_2 + 0x44);
    uStack_1a0 = *(undefined4 *)(param_2 + 9);
    local_198 = *(float *)(param_2 + 10);
    fStack_194 = *(float *)((longlong)param_2 + 0x54);
    uStack_190 = *(undefined4 *)(param_2 + 0xb);
    local_res8 = 0x3a83126f;
    uStack_19c = 0;
    uStack_18c = 0;
    uStack_17c = 0;
    uStack_16c = uRam000000014c6dacac;
    uStack_ac = uRam000000014c6dacac;
    local_1c8 = 0x3a83126f3a83126f;
    uStack_1c0 = 0x3a83126f3a83126f;
    uStack_dc = 0;
    uStack_cc = 0;
    uStack_bc = 0;
    local_188 = fVar23;
    fStack_184 = fVar24;
    fStack_180 = fVar25;
    local_e8 = local_1a8;
    fStack_e4 = fStack_1a4;
    uStack_e0 = uStack_1a0;
    local_d8 = local_198;
    fStack_d4 = fStack_194;
    uStack_d0 = uStack_190;
    local_c8 = fVar23;
    fStack_c4 = fVar24;
    fStack_c0 = fVar25;
    local_b8 = local_178;
    fStack_b4 = fStack_174;
    uStack_b0 = uStack_170;
    FUN_145304570(&local_1a8,&local_res8,&local_e8,&local_1c8);
    FUN_145068440(param_3,local_1d0);
    FUN_145068440(param_4,local_1d0);
    iVar9 = 0;
    if (0 < local_1d0) {
      do {
        pfVar6 = (float *)FUN_1450686a0(&local_1d8,iVar9);
        auVar5._12_4_ = uRam000000014c6dacac;
        auVar5._0_12_ = _DAT_14c6daca0;
        fVar19 = *pfVar6;
        local_1b8 = pfVar6[4];
        plVar7 = (longlong *)
                 (((ulonglong)((uint)local_1b8 >> 0x16) & 0xff) * 0x10 +
                 *(longlong *)(param_1 + 0x18));
        lVar10 = *(longlong *)(plVar7[1] + 0x20);
        lVar8 = *(longlong *)(*plVar7 + 0x18);
        pfVar6 = (float *)(lVar8 + (longlong)
                                   *(int *)(lVar10 + (ulonglong)((uint)local_1b8 & 0x3fffff) * 0xc)
                                   * 0x10);
        fVar12 = *pfVar6;
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        pfVar6 = (float *)(lVar8 + (longlong)
                                   *(int *)(lVar10 + 4 +
                                           (ulonglong)((uint)local_1b8 & 0x3fffff) * 0xc) * 0x10);
        fVar25 = fVar23 * fVar20 + fVar12 * fVar16;
        fVar11 = fVar21 + fVar24 * fVar22;
        fVar13 = (*pfVar6 - fVar12) * fVar16;
        fVar14 = (pfVar6[1] - fVar23) * fVar20;
        fVar15 = (pfVar6[2] - fVar24) * fVar22;
        auVar2._4_4_ = fVar15 + fVar14 + fVar13;
        auVar2._0_4_ = fVar15 + fVar14 + fVar13;
        auVar2._8_4_ = fVar15 + fVar14 + fVar13;
        auVar2._12_4_ = fVar15 + fVar14 + fVar13;
        auVar26 = divps(auVar5,auVar2);
        fVar13 = (fVar19 - (fVar11 + fVar25)) * auVar26._0_4_ * (*pfVar6 - fVar12) + fVar12;
        fVar23 = (fVar19 - (fVar24 * fVar22 + fVar21 + fVar12 * fVar16 + fVar23 * fVar20)) *
                 auVar26._4_4_ * (pfVar6[1] - fVar23) + fVar23;
        fVar24 = (fVar19 - (fVar25 + fVar11)) * auVar26._8_4_ * (pfVar6[2] - fVar24) + fVar24;
        fVar12 = fVar23 * fStack_194;
        fVar11 = fVar13 * fStack_1a4 + fStack_174;
        fVar25 = fVar24 * fStack_184;
        FUN_145068850(param_3,fVar19,
                      fVar13 * local_1a8 + local_178 + fVar23 * local_198 + fVar24 * local_188);
        FUN_145068850(param_4,fVar19,fVar11 + fVar12 + fVar25);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_1d0);
    }
  }
  local_1d0 = 0;
  if ((-1 < (int)local_1cc) && (local_1d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1d8,(ulonglong)(local_1cc & 0x7fffffff) * 0x14);
  }
  local_1d8 = 0;
  local_1cc = 0x80000000;
  FUN_145322820(local_168);
  return;
}



// FUNCTION 145063ae0 FUN_145063ae0 body=130 status=ok
// SIG undefined FUN_145063ae0(void)

void FUN_145063ae0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined8 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined8 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
        }
        puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
        puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 145063b70 FUN_145063b70 body=189 status=ok
// SIG undefined FUN_145063b70(void)

undefined8 * FUN_145063b70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0xc);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145063c30 FUN_145063c30 body=91 status=ok
// SIG undefined FUN_145063c30(void)

undefined4 FUN_145063c30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_2 >> 0x16 & 0xff);
  if ((param_2 >> 0x1e != 0) && (param_2 >> 0x1e != 1)) {
    return *(undefined4 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar1 * 0x10) + 0x20) +
             8 + (ulonglong)(param_2 & 0x3fffff) * 0xc);
  }
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + uVar1 * 0x10) + 0x28) + 0xc +
          (ulonglong)(param_2 & 0x3fffff) * 0x10);
}



// FUNCTION 145063c90 FUN_145063c90 body=223 status=ok
// SIG undefined FUN_145063c90(void)

undefined8 * FUN_145063c90(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiGeometrySegmentCaster::vftable;
  lVar2 = param_1[3];
  lVar3 = (longlong)*(int *)(param_1 + 4) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 145063d70 FUN_145063d70 body=194 status=ok
// SIG undefined FUN_145063d70(void)

undefined8 FUN_145063d70(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar2 + 8))
                        (plVar2,*(undefined4 *)
                                 ((longlong)(int)param_2 * 0x10 +
                                  *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28) + 0xc)),
     cVar3 != '\0')) {
    local_18 = *(undefined4 *)(param_1 + 0x48);
    uStack_14 = *(undefined4 *)(param_1 + 0x4c);
    uStack_10 = *(undefined4 *)(param_1 + 0x50);
    uStack_c = *(undefined4 *)(param_1 + 0x54);
    lVar1 = param_1 + 0x68;
    iVar4 = FUN_145347770(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,
                          *(undefined8 *)(param_1 + 0x58),param_2,&local_18,
                          *(int *)(param_1 + 0x60) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x80) < 1) {
        FUN_1450692c0(param_1 + 0x78,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 145063e40 FUN_145063e40 body=169 status=ok
// SIG undefined FUN_145063e40(void)

void FUN_145063e40(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xf],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x84) & 0x7fffffff) * 0x14);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) * 0x14);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145063ef0 FUN_145063ef0 body=87 status=ok
// SIG undefined FUN_145063ef0(void)

undefined8 FUN_145063ef0(undefined8 param_1,ulonglong param_2)

{
  FUN_145063e40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 145063f50 FUN_145063f50 body=328 status=ok
// SIG undefined FUN_145063f50(void)

undefined8 FUN_145063f50(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(param_1 + 0x60);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar2 + 8))
                        (plVar2,*(undefined4 *)
                                 ((longlong)(int)param_2 * 0x10 +
                                  *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x28) + 0xc)),
     cVar3 != '\0')) {
    local_18 = *(undefined4 *)(param_1 + 0x68);
    uStack_14 = *(undefined4 *)(param_1 + 0x6c);
    uStack_10 = *(undefined4 *)(param_1 + 0x70);
    uStack_c = *(undefined4 *)(param_1 + 0x74);
    lVar1 = param_1 + 0x88;
    iVar4 = FUN_145347770(param_1 + 0x10,param_1 + 0x20,param_1 + 0x50,
                          *(undefined8 *)(param_1 + 0x78),param_2,&local_18,
                          *(int *)(param_1 + 0x80) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xa0) < 1) {
        FUN_1450692c0(param_1 + 0x98,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
    local_18 = *(undefined4 *)(param_1 + 0x68);
    uStack_14 = *(undefined4 *)(param_1 + 0x6c);
    uStack_10 = *(undefined4 *)(param_1 + 0x70);
    uStack_c = *(undefined4 *)(param_1 + 0x74);
    iVar4 = FUN_145347770(param_1 + 0x30,param_1 + 0x40,param_1 + 0x50,
                          *(undefined8 *)(param_1 + 0x78),param_2,&local_18,
                          (*(uint *)(param_1 + 0x80) | 0x100) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xa0) < 1) {
        FUN_1450692c0(param_1 + 0x98,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 1450640a0 FUN_1450640a0 body=190 status=ok
// SIG undefined FUN_1450640a0(void)

void FUN_1450640a0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x13],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xa4) & 0x7fffffff) * 0x14);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x11],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & 0x7fffffff) * 0x14);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145064160 FUN_145064160 body=87 status=ok
// SIG undefined FUN_145064160(void)

undefined8 FUN_145064160(undefined8 param_1,ulonglong param_2)

{
  FUN_1450640a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1450641c0 FUN_1450641c0 body=272 status=ok
// SIG undefined FUN_1450641c0(void)

undefined8 FUN_1450641c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
  piVar2 = (int *)(**(longlong **)(param_1 + 0x70) + (longlong)(int)param_2 * 0xc);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar4 + 8))(plVar4,piVar2[2]), cVar5 == '\0')) {
    return 1;
  }
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + (longlong)*piVar2 * 0x10);
  local_18 = *puVar3;
  uStack_10 = puVar3[1];
  lVar1 = param_1 + 0x80;
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + (longlong)piVar2[1] * 0x10);
  local_28 = *puVar3;
  uStack_20 = puVar3[1];
  local_38 = *(undefined4 *)(param_1 + 0x58);
  uStack_34 = *(undefined4 *)(param_1 + 0x5c);
  uStack_30 = *(undefined4 *)(param_1 + 0x60);
  uStack_2c = *(undefined4 *)(param_1 + 100);
  iVar6 = FUN_145347910(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,&local_18,&local_28,
                        param_1 + 0x40,&local_38,
                        (*(uint *)(param_1 + 0x78) | 0xfffffe00) << 0x16 | param_2,lVar1);
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0x98) < 1) {
      FUN_1450692c0(param_1 + 0x90,lVar1);
    }
    else {
      FUN_14506c4a0();
      FUN_145068460(lVar1);
    }
  }
  return 1;
}



// FUNCTION 1450642d0 FUN_1450642d0 body=190 status=ok
// SIG undefined FUN_1450642d0(void)

void FUN_1450642d0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) * 0x14);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) * 0x14);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145064390 FUN_145064390 body=87 status=ok
// SIG undefined FUN_145064390(void)

undefined8 FUN_145064390(undefined8 param_1,ulonglong param_2)

{
  FUN_1450642d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1450643f0 FUN_1450643f0 body=209 status=ok
// SIG undefined FUN_1450643f0(void)

undefined8 FUN_1450643f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar2 + 8))
                        (plVar2,*(undefined4 *)
                                 ((longlong)(int)param_2 * 0x10 +
                                  *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28) + 0xc)),
     cVar3 != '\0')) {
    local_18 = *(undefined4 *)(param_1 + 0x58);
    uStack_14 = *(undefined4 *)(param_1 + 0x5c);
    uStack_10 = *(undefined4 *)(param_1 + 0x60);
    uStack_c = *(undefined4 *)(param_1 + 100);
    lVar1 = param_1 + 0x78;
    iVar4 = FUN_145347c00(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,
                          *(undefined8 *)(param_1 + 0x68),param_2,&local_18,
                          *(int *)(param_1 + 0x70) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x90) < 1) {
        FUN_1450692c0(param_1 + 0x88,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 1450644d0 FUN_1450644d0 body=184 status=ok
// SIG undefined FUN_1450644d0(void)

void FUN_1450644d0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x11],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & 0x7fffffff) * 0x14);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xf],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x84) & 0x7fffffff) * 0x14);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145064590 FUN_145064590 body=87 status=ok
// SIG undefined FUN_145064590(void)

undefined8 FUN_145064590(undefined8 param_1,ulonglong param_2)

{
  FUN_1450644d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1450645f0 FUN_1450645f0 body=384 status=ok
// SIG undefined FUN_1450645f0(void)

undefined8 FUN_1450645f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong local_18;
  longlong lStack_10;
  
  plVar2 = *(longlong **)(param_1 + 0x90);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar2 + 8))
                        (plVar2,*(undefined4 *)
                                 ((longlong)(int)param_2 * 0x10 +
                                  *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x28) + 0xc)),
     cVar3 != '\0')) {
    local_18 = *(longlong *)(param_1 + 0x98);
    lStack_10 = *(undefined8 *)(param_1 + 0xa0);
    lVar1 = param_1 + 0xc0;
    iVar4 = FUN_145347c00(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,
                          *(undefined8 *)(param_1 + 0xb8),param_2,&local_18,
                          *(int *)(param_1 + 0xd0) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xe0) < 1) {
        FUN_1450692c0(param_1 + 0xd8,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
    local_18 = *(longlong *)(param_1 + 0xa8);
    lStack_10 = (longlong)*(int *)(param_1 + 0xb0) * 0x10 + local_18;
    iVar4 = FUN_145347c00(param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_1 + 0x80,
                          *(undefined8 *)(param_1 + 0xb8),param_2,&local_18,
                          (*(uint *)(param_1 + 0xd0) | 0x100) << 0x16 | param_2,lVar1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0xe0) < 1) {
        FUN_1450692c0(param_1 + 0xd8,lVar1);
      }
      else {
        FUN_14506c4a0();
        FUN_145068460(lVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 145064770 FUN_145064770 body=262 status=ok
// SIG undefined FUN_145064770(void)

void FUN_145064770(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1b],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xe4) & 0x7fffffff) * 0x14);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x18],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) * 0x14);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x15],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xb4) & 0x7fffffff) << 4);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145064880 FUN_145064880 body=87 status=ok
// SIG undefined FUN_145064880(void)

undefined8 FUN_145064880(undefined8 param_1,ulonglong param_2)

{
  FUN_145064770();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1450648e0 FUN_1450648e0 body=287 status=ok
// SIG undefined FUN_1450648e0(void)

undefined8 FUN_1450648e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar4 = *(longlong **)(param_1 + 0x60);
  piVar2 = (int *)(**(longlong **)(param_1 + 0x80) + (longlong)(int)param_2 * 0xc);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*plVar4 + 8))(plVar4,piVar2[2]), cVar5 == '\0')) {
    return 1;
  }
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + (longlong)*piVar2 * 0x10);
  local_18 = *puVar3;
  uStack_10 = puVar3[1];
  lVar1 = param_1 + 0x90;
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + (longlong)piVar2[1] * 0x10);
  local_28 = *puVar3;
  uStack_20 = puVar3[1];
  local_38 = *(undefined4 *)(param_1 + 0x68);
  uStack_34 = *(undefined4 *)(param_1 + 0x6c);
  uStack_30 = *(undefined4 *)(param_1 + 0x70);
  uStack_2c = *(undefined4 *)(param_1 + 0x74);
  iVar6 = FUN_145347dc0(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,&local_18,
                        &local_28,param_1 + 0x50,&local_38,
                        (*(uint *)(param_1 + 0x88) | 0xfffffe00) << 0x16 | param_2,lVar1);
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0xa8) < 1) {
      FUN_1450692c0(param_1 + 0xa0,lVar1);
    }
    else {
      FUN_14506c4a0();
      FUN_145068460(lVar1);
    }
  }
  return 1;
}



// FUNCTION 145064a00 FUN_145064a00 body=190 status=ok
// SIG undefined FUN_145064a00(void)

void FUN_145064a00(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x14],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) * 0x14);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) * 0x14);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 145064ac0 FUN_145064ac0 body=87 status=ok
// SIG undefined FUN_145064ac0(void)

undefined8 FUN_145064ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_145064a00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 145064b20 FUN_145064b20 body=568 status=ok
// SIG undefined FUN_145064b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145064b20(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  longlong lVar9;
  float local_res8 [2];
  float local_res10 [2];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  lVar9 = (longlong)param_2;
  lVar4 = **(longlong **)(param_1 + 0x40);
  if ((plVar3 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined4 *)(lVar4 + 8 + lVar9 * 0xc)),
     cVar8 != '\0')) {
    pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) +
                      (longlong)*(int *)(lVar4 + lVar9 * 0xc) * 0x10);
    local_68 = *pfVar1;
    fStack_64 = pfVar1[1];
    fStack_60 = pfVar1[2];
    pfVar2 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18) +
                      (longlong)*(int *)(lVar4 + 4 + lVar9 * 0xc) * 0x10);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
    local_78 = fVar5;
    fStack_74 = fVar6;
    fStack_70 = fVar7;
    fStack_6c = pfVar2[3];
    fStack_5c = pfVar1[3];
    if ((fVar6 - fStack_64) * *(float *)(param_1 + 0x14) +
        (fVar5 - local_68) * *(float *)(param_1 + 0x10) +
        (fVar7 - fStack_60) * *(float *)(param_1 + 0x18) < 0.0) {
      local_78 = local_68;
      fStack_74 = fStack_64;
      fStack_70 = fStack_60;
      fStack_6c = pfVar1[3];
      local_68 = fVar5;
      fStack_64 = fVar6;
      fStack_60 = fVar7;
      fStack_5c = pfVar2[3];
    }
    local_58 = 0;
    uStack_50 = 0;
    cVar8 = FUN_145325490(*(undefined8 *)(param_1 + 8),&local_68,&local_78,local_res10,local_res8,
                          &local_58);
    if (((cVar8 != '\0') && (local_res10[0] < local_res8[0])) &&
       (_DAT_14c6dae10 <
        ABS((*(float *)(param_1 + 0x1c) +
             (local_res10[0] * (fStack_70 - fStack_60) + fStack_60) * *(float *)(param_1 + 0x18) +
            (local_res10[0] * (fStack_74 - fStack_64) + fStack_64) * *(float *)(param_1 + 0x14) +
            (local_res10[0] * (local_78 - local_68) + local_68) * *(float *)(param_1 + 0x10)) -
            (*(float *)(param_1 + 0x1c) +
             (local_res8[0] * (fStack_70 - fStack_60) + fStack_60) * *(float *)(param_1 + 0x18) +
            (local_res8[0] * (fStack_74 - fStack_64) + fStack_64) * *(float *)(param_1 + 0x14) +
            (local_res8[0] * (local_78 - local_68) + local_68) * *(float *)(param_1 + 0x10))))) {
      FUN_145068280(&local_58);
      FUN_14506b280(param_1 + 0x50,&local_58);
    }
  }
  return 1;
}



// FUNCTION 145064d60 FUN_145064d60 body=161 status=ok
// SIG undefined FUN_145064d60(void)

undefined8 * FUN_145064d60(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) * 0x14);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145064e10 FUN_145064e10 body=676 status=ok
// SIG undefined FUN_145064e10(void)

undefined4 * FUN_145064e10(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  int *local_res8;
  uint local_res18;
  int local_58;
  int iStack_54;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar2 = param_1[1];
  lVar12 = (longlong)(int)lVar2;
  iVar8 = 8;
  if (8 < param_3) {
    iVar8 = param_3;
  }
  local_res8 = (int *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_res18 = 0x80000000;
  local_3c = 0x80000000;
  if (param_1 != &local_48) {
    FUN_145063ae0(&local_48,&PTR_vftable_14c6e47a0);
    FUN_145063ae0(param_1,&PTR_vftable_14c6e47a0);
    local_res8 = (int *)*param_1;
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 1) = local_40;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_145065330(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  piVar3 = local_res8;
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 >> 0x10 | uVar5;
  iVar4 = uVar5 - (uVar5 >> 1);
  iVar8 = (int)param_1[1];
  if (iVar8 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
  }
  else if (iVar4 < iVar8) {
    *(int *)(param_1 + 1) = iVar4;
  }
  lVar7 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1);
  if (0 < lVar7) {
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar6 + *param_1) = 0xffffffffffffffff;
      lVar7 = lVar7 + -1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  piVar10 = local_res8;
  if (0 < (int)lVar2) {
    do {
      if (*piVar10 != -1) {
        uVar1 = *(undefined8 *)piVar10;
        iVar4 = (int)param_1[1] + -1;
        iVar8 = piVar10[2];
        if (iVar4 < (int)param_1[2] * 2) {
          FUN_145064e10(param_1,&local_res8,iVar4 * 2 + 2);
        }
        local_58 = (int)uVar1;
        iVar9 = 1;
        iStack_54 = (int)((ulonglong)uVar1 >> 0x20);
        lVar7 = *param_1;
        uVar11 = (int)param_1[1] - 1;
        uVar5 = (local_58 * 0x5d31 ^ iStack_54 * -0x61c8864f) & uVar11;
        lVar2 = (longlong)(int)uVar5 * 0xc;
        iVar4 = *(int *)(lVar2 + lVar7);
        while (iVar4 != -1) {
          if ((*(int *)(lVar2 + lVar7) == local_58) && (*(int *)(lVar2 + 4 + lVar7) == iStack_54)) {
            iVar9 = 0;
            break;
          }
          uVar5 = uVar5 + 1 & uVar11;
          lVar2 = (longlong)(int)uVar5 * 0xc;
          iVar4 = *(int *)(lVar2 + lVar7);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar9;
        *(undefined8 *)(lVar7 + (longlong)(int)uVar5 * 0xc) = uVar1;
        *(int *)(lVar7 + 8 + (longlong)(int)uVar5 * 0xc) = iVar8;
      }
      lVar12 = lVar12 + -1;
      piVar10 = piVar10 + 3;
    } while (lVar12 != 0);
  }
  *param_2 = 0;
  if ((-1 < (int)local_res18) && (piVar3 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,piVar3,(ulonglong)(local_res18 & 0x7fffffff) * 0xc);
  }
  return param_2;
}



// FUNCTION 1450650c0 FUN_1450650c0 body=279 status=ok
// SIG undefined FUN_1450650c0(void)

ulonglong FUN_1450650c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar5 * 0xc;
  puVar2 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 1450651e0 FUN_1450651e0 body=335 status=ok
// SIG undefined FUN_1450651e0(void)

void FUN_1450651e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar4 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar9[1] = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 2;
      puVar9 = puVar9 + 2;
    } while (uVar4 != 0);
    plVar6 = puVar2 + 1;
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = (longlong)puVar3;
  return;
}



// FUNCTION 145065330 FUN_145065330 body=188 status=ok
// SIG undefined FUN_145065330(void)

void FUN_145065330(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar3;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
      }
      puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 1450653f0 FUN_1450653f0 body=21 status=ok
// SIG undefined FUN_1450653f0(void)

undefined8 * FUN_1450653f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 145065410 FUN_145065410 body=62 status=ok
// SIG undefined FUN_145065410(void)

void FUN_145065410(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 145065450 FUN_145065450 body=39 status=ok
// SIG undefined FUN_145065450(void)

undefined8 * FUN_145065450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiStreamingCollectionSegmentCaster::vftable;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return param_1;
}



// FUNCTION 145065480 FUN_145065480 body=196 status=ok
// SIG undefined FUN_145065480(void)

void FUN_145065480(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_a8 = *param_2;
  local_98 = param_2[1];
  local_48 = 0;
  uStack_40 = 0;
  local_68[0] = &PTR_LAB_14aba2e30;
  local_c0 = 0;
  local_c8 = CastSegmentCollector::vftable;
  local_b8 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined8 *)param_2[3];
  auVar2 = minps(local_a8,local_98);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_88 = *(float *)param_2[2];
  fStack_84 = *(float *)(param_2[2] + 4);
  fStack_80 = *(float *)(param_2[2] + 8);
  fStack_7c = *(float *)(param_2[2] + 0xc);
  auVar4 = maxps(local_a8,local_98);
  fVar10 = local_a8._0_4_ + local_88;
  fVar11 = local_a8._4_4_ + fStack_84;
  fVar12 = local_a8._8_4_ + fStack_80;
  fVar13 = local_a8._12_4_ + fStack_7c;
  fVar6 = local_98._0_4_ + local_88;
  fVar7 = local_98._4_4_ + fStack_84;
  fVar8 = local_98._8_4_ + fStack_80;
  fVar9 = local_98._12_4_ + fStack_7c;
  auVar5._4_4_ = fVar11;
  auVar5._0_4_ = fVar10;
  auVar5._8_4_ = fVar12;
  auVar5._12_4_ = fVar13;
  auVar3 = minps(auVar2,auVar5);
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar10;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar13;
  auVar5 = maxps(auVar4,auVar1);
  auVar2._4_4_ = fVar7;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar9;
  local_38 = minps(auVar3,auVar2);
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar8;
  auVar3._12_4_ = fVar9;
  local_28 = maxps(auVar5,auVar3);
  local_70 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))
            (*(longlong **)(param_1 + 0x20),local_68,&local_c8);
  return;
}



// FUNCTION 145065550 FUN_145065550 body=883 status=ok
// SIG undefined FUN_145065550(void)

void FUN_145065550(longlong param_1,float *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_res10 [2];
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined1 *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d8 [176];
  
  plVar2 = *(longlong **)(param_2 + 0xc);
  if (plVar2 != (longlong *)0x0) {
    uVar6 = (uint)param_2[0x18] & 0x3fffff;
    lVar3 = *(longlong *)
             (*(longlong *)
               ((ulonglong)((uint)param_2[0x18] >> 0x16) * 0x120 +
               *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
    iVar1 = *(int *)(lVar3 + 0x50);
    lVar9 = (longlong)iVar1;
    if ((int)uVar6 < *(int *)(lVar3 + 0x20)) {
      uVar8 = uVar6;
      if (*(int *)(lVar3 + 0x98) != 0) {
        uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar6 * 4);
      }
      if (uVar8 == 0xffffffff) {
        local_188 = *(longlong *)(lVar3 + 0x48) + (longlong)(int)(iVar1 * uVar6) * 4;
        lStack_180 = local_188 + lVar9 * 4;
      }
      else {
        lStack_180 = *(longlong *)(lVar3 + 0x120) + ((int)(uVar8 * iVar1) + lVar9) * 4;
        local_188 = *(longlong *)(lVar3 + 0x120) + (longlong)(int)(uVar8 * iVar1) * 4;
      }
    }
    else {
      lVar7 = (longlong)(int)((uVar6 - *(int *)(lVar3 + 0x20)) * iVar1);
      lStack_180 = *(longlong *)(lVar3 + 0x140) + (lVar7 + lVar9) * 4;
      local_188 = *(longlong *)(lVar3 + 0x140) + lVar7 * 4;
    }
    cVar5 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,*(longlong *)(param_1 + 0x18),param_2[0x18],&local_188);
    if (cVar5 == '\0') {
      return;
    }
  }
  fStack_144 = param_2[8];
  fStack_134 = param_2[9];
  fStack_124 = param_2[10];
  local_148 = param_2[4] - *param_2;
  local_138 = param_2[5] - param_2[1];
  local_128 = param_2[6] - param_2[2];
  fStack_140 = param_2[0x10];
  fStack_13c = param_2[0x11];
  fStack_120 = param_2[0x12];
  fStack_12c = param_2[0x13];
  bVar4 = fStack_120 * (local_148 * fStack_134 - local_138 * fStack_144) +
          fStack_13c * (local_128 * fStack_144 - local_148 * fStack_124) +
          fStack_140 * (local_138 * fStack_124 - local_128 * fStack_134) < 0.0;
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  if (bVar4) {
    local_148 = -local_148;
    local_138 = -local_138;
    local_128 = -local_128;
    fVar10 = param_2[4];
    fVar11 = param_2[5];
    fVar12 = param_2[6];
  }
  fStack_130 = fStack_13c;
  fStack_11c = fStack_12c;
  FUN_144f75690(&local_118,local_res10,&local_148);
  local_e8 = local_d8;
  local_dc = 0x80000020;
  local_res10[0] = 0xffffffff;
  local_e0 = 0;
  fStack_14c = 0.0 - (fStack_110 * fVar12 + fStack_114 * fVar11 + local_118 * fVar10);
  local_158 = local_118;
  fStack_154 = fStack_114;
  fStack_150 = fStack_110;
  local_178 = *(undefined8 *)(param_2 + 0x14);
  uStack_170 = *(undefined8 *)(param_2 + 0x16);
  fStack_15c = 0.0 - (fStack_100 * fVar12 + fStack_104 * fVar11 + local_108 * fVar10);
  local_188 = *param_3;
  lStack_180 = param_3[1];
  local_168 = local_108;
  fStack_164 = fStack_104;
  fStack_160 = fStack_100;
  FUN_1450661f0(param_1,&local_158,fStack_100 * fVar12 + fStack_104 * fVar11 + local_108 * fVar10,
                &local_178,param_2[0x18],local_res10,*(undefined8 *)(param_2 + 0xc),&local_e8,0,
                0x3f800000,&local_188);
  local_e0 = 0;
  if ((-1 < (int)local_dc) && (local_e8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_e8,(ulonglong)(local_dc & 0x7fffffff) << 2);
  }
  if (bVar4) {
    lVar3 = param_3[1];
    for (lVar9 = *param_3; lVar9 != lVar3; lVar9 = lVar9 + 0x10) {
      FUN_145069610(lVar9,0x3f000000);
    }
  }
  return;
}



// FUNCTION 1450658d0 FUN_1450658d0 body=854 status=ok
// SIG undefined FUN_1450658d0(void)

void FUN_1450658d0(longlong param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_res10 [2];
  longlong local_198;
  longlong lStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined1 *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d8 [176];
  
  plVar2 = *(longlong **)(param_2 + 0xc);
  if (plVar2 != (longlong *)0x0) {
    uVar6 = (uint)param_2[0x14] & 0x3fffff;
    lVar3 = *(longlong *)
             (*(longlong *)
               ((ulonglong)((uint)param_2[0x14] >> 0x16) * 0x120 +
               *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
    iVar1 = *(int *)(lVar3 + 0x50);
    lVar9 = (longlong)iVar1;
    if ((int)uVar6 < *(int *)(lVar3 + 0x20)) {
      uVar8 = uVar6;
      if (*(int *)(lVar3 + 0x98) != 0) {
        uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar6 * 4);
      }
      if (uVar8 == 0xffffffff) {
        local_198 = *(longlong *)(lVar3 + 0x48) + (longlong)(int)(iVar1 * uVar6) * 4;
        lStack_190 = local_198 + lVar9 * 4;
      }
      else {
        lStack_190 = *(longlong *)(lVar3 + 0x120) + ((int)(uVar8 * iVar1) + lVar9) * 4;
        local_198 = *(longlong *)(lVar3 + 0x120) + (longlong)(int)(uVar8 * iVar1) * 4;
      }
    }
    else {
      lVar7 = (longlong)(int)((uVar6 - *(int *)(lVar3 + 0x20)) * iVar1);
      lStack_190 = *(longlong *)(lVar3 + 0x140) + (lVar7 + lVar9) * 4;
      local_198 = *(longlong *)(lVar3 + 0x140) + lVar7 * 4;
    }
    cVar5 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,*(longlong *)(param_1 + 0x18),param_2[0x14],&local_198);
    if (cVar5 == '\0') {
      local_178 = 0xffffffff;
      local_188 = 0;
      uStack_184 = 0x3f800000;
      uStack_180 = 0;
      uStack_17c = 0;
      FUN_14506a530(param_3,&local_188);
      return;
    }
  }
  fStack_144 = param_2[8];
  fStack_134 = param_2[9];
  fStack_124 = param_2[10];
  local_148 = param_2[4] - *param_2;
  local_138 = param_2[5] - param_2[1];
  local_128 = param_2[6] - param_2[2];
  fStack_140 = param_2[0x10];
  fStack_13c = param_2[0x11];
  fStack_120 = param_2[0x12];
  fStack_12c = param_2[0x13];
  bVar4 = fStack_120 * (local_148 * fStack_134 - local_138 * fStack_144) +
          fStack_13c * (local_128 * fStack_144 - local_148 * fStack_124) +
          fStack_140 * (local_138 * fStack_124 - local_128 * fStack_134) < 0.0;
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  if (bVar4) {
    local_148 = -local_148;
    local_138 = -local_138;
    local_128 = -local_128;
    fVar10 = param_2[4];
    fVar11 = param_2[5];
    fVar12 = param_2[6];
  }
  fStack_130 = fStack_13c;
  fStack_11c = fStack_12c;
  FUN_144f75690(&local_118,local_res10,&local_148);
  local_e8 = local_d8;
  local_e0 = 0;
  local_dc = 0x80000020;
  local_res10[0] = 0xffffffff;
  fStack_14c = 0.0 - (fStack_110 * fVar12 + fStack_114 * fVar11 + local_118 * fVar10);
  local_158 = local_118;
  fStack_154 = fStack_114;
  fStack_150 = fStack_110;
  fStack_15c = 0.0 - (fStack_100 * fVar12 + fStack_104 * fVar11 + local_108 * fVar10);
  local_168 = local_108;
  fStack_164 = fStack_104;
  fStack_160 = fStack_100;
  FUN_145066bd0(param_1,&local_158,fStack_100 * fVar12 + fStack_104 * fVar11 + local_108 * fVar10,
                param_2[0x14],local_res10,*(undefined8 *)(param_2 + 0xc),&local_e8,0,0x3f800000,
                param_3);
  local_e0 = 0;
  if ((-1 < (int)local_dc) && (local_e8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_e8,(ulonglong)(local_dc & 0x7fffffff) << 2);
  }
  if (bVar4) {
    FUN_145069610(param_3,0x3f000000);
  }
  return;
}



// FUNCTION 145065c30 FUN_145065c30 body=71 status=ok
// SIG undefined FUN_145065c30(void)

undefined8 * FUN_145065c30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 145065c80 FUN_145065c80 body=489 status=ok
// SIG undefined FUN_145065c80(void)

void FUN_145065c80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res8 [2];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  uVar7 = param_2 & 0x3fffff;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)
             (*(longlong *)
               ((ulonglong)(param_2 >> 0x16) * 0x120 +
               *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38)) + 0x20);
    iVar4 = *(int *)(lVar2 + 0x50);
    lVar8 = (longlong)iVar4;
    if ((int)uVar7 < *(int *)(lVar2 + 0x20)) {
      uVar5 = uVar7;
      if (*(int *)(lVar2 + 0x98) != 0) {
        uVar5 = *(uint *)(*(longlong *)(lVar2 + 0x90) + (ulonglong)uVar7 * 4);
      }
      if (uVar5 == 0xffffffff) {
        local_38 = *(longlong *)(lVar2 + 0x48) + (longlong)(int)(iVar4 * uVar7) * 4;
        uStack_30 = local_38 + lVar8 * 4;
      }
      else {
        uStack_30 = *(longlong *)(lVar2 + 0x120) + ((int)(uVar5 * iVar4) + lVar8) * 4;
        local_38 = *(longlong *)(lVar2 + 0x120) + (longlong)(int)(uVar5 * iVar4) * 4;
      }
    }
    else {
      lVar6 = (longlong)(int)((uVar7 - *(int *)(lVar2 + 0x20)) * iVar4);
      uStack_30 = *(longlong *)(lVar2 + 0x140) + (lVar6 + lVar8) * 4;
      local_38 = *(longlong *)(lVar2 + 0x140) + lVar6 * 4;
    }
    local_28 = local_38;
    lStack_20 = uStack_30;
    cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,*(longlong *)(param_1 + 0x10),param_2,&local_28);
    if (cVar3 == '\0') {
      return;
    }
  }
  FUN_145068400(&local_38);
  local_28 = 0;
  lStack_20 = 0;
  local_res8[0] = uVar7;
  iVar4 = FUN_145347600(param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,
                        *(undefined8 *)
                         ((ulonglong)(param_2 >> 0x16) * 0x120 +
                         *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38)),local_res8,&local_28,
                        param_2,&local_38);
  if (iVar4 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x58) + 8) < 1) {
      FUN_1450692c0(*(longlong *)(param_1 + 0x58),&local_38);
    }
    else {
      FUN_14506c4a0();
    }
  }
  lVar2 = uStack_30;
  uVar7 = uStack_30._4_4_;
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_38 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(uVar7 & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 145065e70 FUN_145065e70 body=632 status=ok
// SIG undefined FUN_145065e70(void)

void FUN_145065e70(float param_1,float param_2,float param_3,float param_4,float param_5,
                  longlong *param_6,float *param_7,longlong param_8)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *param_6;
  uVar5 = param_6[1] - lVar1 >> 2;
  iVar4 = (int)uVar5;
  if (0 < iVar4) {
    if (0.0 <= param_5) {
      lVar3 = (longlong)iVar4;
      lVar7 = 0;
      if (lVar3 < 4) {
        if (iVar4 < 1) {
          return;
        }
      }
      else {
        pfVar2 = (float *)(param_8 + 8);
        lVar6 = (lVar3 - 4U >> 2) + 1;
        lVar7 = lVar6 * 4;
        do {
          fVar8 = *(float *)((longlong)pfVar2 + lVar1 + -param_8 + -8);
          fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
          fVar8 = pfVar2[-2];
          if (fVar9 <= pfVar2[-2]) {
            fVar8 = fVar9;
          }
          pfVar2[-2] = fVar8;
          fVar8 = *(float *)((longlong)pfVar2 + lVar1 + -param_8 + -4);
          fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
          fVar8 = pfVar2[-1];
          if (fVar9 <= pfVar2[-1]) {
            fVar8 = fVar9;
          }
          pfVar2[-1] = fVar8;
          fVar8 = *(float *)((longlong)pfVar2 + (lVar1 - param_8));
          fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
          fVar8 = *pfVar2;
          if (fVar9 <= *pfVar2) {
            fVar8 = fVar9;
          }
          *pfVar2 = fVar8;
          fVar8 = *(float *)((longlong)pfVar2 + lVar1 + (4 - param_8));
          fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
          fVar8 = pfVar2[1];
          if (fVar9 <= pfVar2[1]) {
            fVar8 = fVar9;
          }
          pfVar2[1] = fVar8;
          pfVar2 = pfVar2 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (lVar3 <= lVar7) {
          return;
        }
      }
      pfVar2 = (float *)(param_8 + lVar7 * 4);
      lVar3 = lVar3 - lVar7;
      do {
        fVar8 = *(float *)((lVar1 - param_8) + (longlong)pfVar2);
        fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
        fVar8 = *pfVar2;
        if (fVar9 <= *pfVar2) {
          fVar8 = fVar9;
        }
        *pfVar2 = fVar8;
        pfVar2 = pfVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    else {
      uVar5 = uVar5 & 0xffffffff;
      pfVar2 = param_7;
      do {
        fVar8 = *(float *)((longlong)pfVar2 + (lVar1 - (longlong)param_7));
        fVar9 = ((param_4 - fVar8) * param_1 + (fVar8 - param_2) * param_3) * param_5;
        fVar8 = *pfVar2;
        if (*pfVar2 <= fVar9) {
          fVar8 = fVar9;
        }
        *pfVar2 = fVar8;
        pfVar2 = pfVar2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1450660f0 FUN_1450660f0 body=250 status=ok
// SIG undefined FUN_1450660f0(void)

longlong * FUN_1450660f0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_res8;
  longlong local_res18;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar3 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar2;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  param_1[1] = 0;
  local_res18 = (longlong)param_2 * 4;
  *(int *)(param_1 + 2) = param_2;
  if (lVar3 == 0) {
    lVar3 = (*DAT_14c787670)(1,&local_res18,0x40);
    param_1[1] = lVar3;
  }
  else {
    local_res8 = local_res18 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar3 + 0x28)) {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      uVar1 = local_res8 + lVar2;
      if (uVar1 <= *(ulonglong *)(lVar3 + 0x40)) {
        *(ulonglong *)(lVar3 + 0x38) = uVar1;
        param_1[1] = lVar2;
        return param_1;
      }
    }
    lVar3 = FUN_144b454a0(lVar3,&local_res8);
    param_1[1] = lVar3;
  }
  return param_1;
}



// FUNCTION 1450661f0 FUN_1450661f0 body=2514 status=ok
// SIG undefined FUN_1450661f0(void)

void FUN_1450661f0(longlong param_1,float *param_2,float *param_3,longlong *param_4,uint param_5,
                  int *param_6,longlong *param_7,longlong *param_8,float param_9,float param_10,
                  longlong *param_11)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  float *pfVar16;
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
  uint local_180 [2];
  undefined8 local_178;
  longlong lStack_170;
  uint local_168;
  longlong local_158;
  float *local_150;
  int local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  float *local_128;
  int local_120;
  ulonglong local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  
  iVar13 = 0;
  iVar14 = (int)param_8[1];
  if (0 < iVar14) {
    puVar7 = (uint *)*param_8;
    lVar9 = 0;
    do {
      if (*puVar7 == param_5) {
        if (-1 < iVar13) {
          return;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      lVar9 = lVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar9 < iVar14);
  }
  iVar14 = iVar14 + 1;
  if ((int)(*(uint *)((longlong)param_8 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_144c30fb0(param_8,&PTR_vftable_14c6e47c0,(longlong)iVar14);
  }
  puVar7 = (uint *)(*param_8 + (longlong)(int)param_8[1] * 4);
  if (puVar7 != (uint *)0x0) {
    *puVar7 = param_5;
  }
  *(int *)(param_8 + 1) = iVar14;
  uVar5 = param_5 & 0x3fffff;
  local_138 = *(longlong *)
               ((ulonglong)(param_5 >> 0x16) * 0x120 +
               *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lVar9 = *(longlong *)(local_138 + 0x20);
  if ((int)uVar5 < *(int *)(lVar9 + 0x20)) {
    uVar12 = (ulonglong)uVar5;
    if (*(int *)(lVar9 + 0x98) != 0) {
      uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x90) + uVar12 * 4);
    }
    if (uVar5 == 0xffffffff) {
      lVar9 = *(longlong *)(lVar9 + 0x18);
      lVar11 = uVar12 * 3;
    }
    else {
      lVar11 = (longlong)(int)uVar5 * 3;
      lVar9 = *(longlong *)(lVar9 + 0xb0);
    }
  }
  else {
    lVar11 = (longlong)(int)(uVar5 - *(int *)(lVar9 + 0x20)) * 3;
    lVar9 = *(longlong *)(lVar9 + 0xd0);
  }
  piVar1 = (int *)(lVar9 + lVar11 * 4);
  uVar5 = (uint)(short)piVar1[2];
  iVar14 = *piVar1;
  uVar12 = (ulonglong)iVar14;
  uVar15 = param_4[1] - *param_4 >> 2;
  local_118 = uVar15;
  FUN_1450660f0(&local_158,uVar15 & 0xffffffff);
  FUN_1450660f0(&local_130,uVar15 & 0xffffffff);
  pfVar3 = local_128;
  if (0 < (int)uVar15) {
    lVar11 = (longlong)(int)uVar15;
    pfVar8 = local_150;
    for (lVar9 = lVar11; pfVar16 = local_128, lVar9 != 0; lVar9 = lVar9 + -1) {
      *pfVar8 = param_9;
      pfVar8 = pfVar8 + 1;
    }
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pfVar16 = param_10;
      pfVar16 = pfVar16 + 1;
    }
  }
  lVar9 = *(longlong *)(local_138 + 0x20);
  if (iVar14 < *(int *)(lVar9 + 0x30)) {
    if (*(int *)(lVar9 + 0x78) != 0) {
      iVar14 = *(int *)(*(longlong *)(lVar9 + 0x70) + uVar12 * 4);
    }
    if (iVar14 == -1) {
      lVar11 = *(longlong *)(lVar9 + 0x28);
      lVar17 = uVar12 * 5;
    }
    else {
      lVar17 = (longlong)iVar14 * 5;
      lVar11 = *(longlong *)(lVar9 + 0xc0);
    }
  }
  else {
    lVar17 = (longlong)(iVar14 - *(int *)(lVar9 + 0x30)) * 5;
    lVar11 = *(longlong *)(lVar9 + 0xe0);
  }
  iVar14 = *(int *)(lVar11 + lVar17 * 4);
  if (iVar14 < *(int *)(lVar9 + 0x40)) {
    pfVar8 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar9 + 0x38));
  }
  else {
    pfVar8 = (float *)((longlong)(iVar14 - *(int *)(lVar9 + 0x40)) * 0x10 +
                      *(longlong *)(lVar9 + 0xf0));
  }
  fVar23 = *pfVar8;
  fVar25 = pfVar8[1];
  fVar24 = pfVar8[2];
  fVar27 = 0.0;
  fVar26 = 1.0;
  fVar19 = fVar25 * *(float *)(local_138 + 0x70) + fVar23 * *(float *)(local_138 + 0x60) +
           fVar24 * *(float *)(local_138 + 0x80) + *(float *)(local_138 + 0x90);
  fVar21 = fVar25 * *(float *)(local_138 + 0x74) + fVar23 * *(float *)(local_138 + 100) +
           fVar24 * *(float *)(local_138 + 0x84) + *(float *)(local_138 + 0x94);
  fVar23 = fVar25 * *(float *)(local_138 + 0x78) + fVar23 * *(float *)(local_138 + 0x68) +
           fVar24 * *(float *)(local_138 + 0x88) + *(float *)(local_138 + 0x98);
  fVar25 = param_2[3] + param_2[2] * fVar23 + param_2[1] * fVar21 + *param_2 * fVar19;
  fVar23 = param_3[3] + param_3[2] * fVar23 + param_3[1] * fVar21 + *param_3 * fVar19;
  pfVar8 = local_150;
  uVar15 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    do {
      local_140 = uVar15;
      lVar9 = *(longlong *)(local_138 + 0x20);
      iVar14 = (int)uVar12;
      if (iVar14 < *(int *)(lVar9 + 0x30)) {
        iVar13 = iVar14;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar13 = *(int *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar14 * 4);
        }
        if (iVar13 == -1) {
          lVar17 = (longlong)iVar14 * 5;
          lVar11 = *(longlong *)(lVar9 + 0x28);
        }
        else {
          lVar17 = (longlong)iVar13 * 5;
          lVar11 = *(longlong *)(lVar9 + 0xc0);
        }
      }
      else {
        lVar17 = (longlong)(iVar14 - *(int *)(lVar9 + 0x30)) * 5;
        lVar11 = *(longlong *)(lVar9 + 0xe0);
      }
      lVar11 = lVar11 + lVar17 * 4;
      iVar13 = *(int *)(lVar11 + 4);
      if (iVar13 < *(int *)(lVar9 + 0x40)) {
        pfVar8 = (float *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar9 + 0x38));
      }
      else {
        pfVar8 = (float *)((longlong)(iVar13 - *(int *)(lVar9 + 0x40)) * 0x10 +
                          *(longlong *)(lVar9 + 0xf0));
      }
      fVar24 = *pfVar8;
      fVar19 = pfVar8[1];
      fVar21 = pfVar8[2];
      fVar20 = fVar19 * *(float *)(local_138 + 0x70) + fVar24 * *(float *)(local_138 + 0x60) +
               fVar21 * *(float *)(local_138 + 0x80) + *(float *)(local_138 + 0x90);
      fVar22 = fVar19 * *(float *)(local_138 + 0x74) + fVar24 * *(float *)(local_138 + 100) +
               fVar21 * *(float *)(local_138 + 0x84) + *(float *)(local_138 + 0x94);
      fVar24 = fVar19 * *(float *)(local_138 + 0x78) + fVar24 * *(float *)(local_138 + 0x68) +
               fVar21 * *(float *)(local_138 + 0x88) + *(float *)(local_138 + 0x98);
      uVar5 = *(uint *)(lVar11 + 0xc);
      fVar19 = param_2[3] + param_2[2] * fVar24 + param_2[1] * fVar22 + *param_2 * fVar20;
      fVar24 = param_3[3] + param_3[2] * fVar24 + param_3[1] * fVar22 + *param_3 * fVar20;
      if (((*(byte *)(lVar11 + 0x10) & 0x40) == 0) && (uVar5 != 0xffffffff)) {
        uVar5 = *(int *)(lVar9 + 0x17c) << 0x16 | uVar5 & 0x3fffff;
      }
      if ((*(int *)(lVar11 + 8) == -1) || ((*(byte *)(lVar11 + 0x10) & 0x20) != 0)) {
LAB_14506674d:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (param_7 != (longlong *)0x0) {
          uVar6 = uVar5 & 0x3fffff;
          lVar9 = *(longlong *)
                   (*(longlong *)
                     ((ulonglong)(uVar5 >> 0x16) * 0x120 +
                     *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
          iVar13 = *(int *)(lVar9 + 0x50);
          lVar17 = (longlong)iVar13;
          if ((int)uVar6 < *(int *)(lVar9 + 0x20)) {
            uVar18 = uVar6;
            if (*(int *)(lVar9 + 0x98) != 0) {
              uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x90) + (ulonglong)uVar6 * 4);
            }
            if (uVar18 == 0xffffffff) {
              local_f8 = *(longlong *)(lVar9 + 0x48) + (longlong)(int)(uVar6 * iVar13) * 4;
              local_f0 = local_f8 + lVar17 * 4;
            }
            else {
              local_f0 = *(longlong *)(lVar9 + 0x120) + ((int)(uVar18 * iVar13) + lVar17) * 4;
              local_f8 = *(longlong *)(lVar9 + 0x120) + (longlong)(int)(uVar18 * iVar13) * 4;
            }
          }
          else {
            lVar10 = (longlong)(int)((uVar6 - *(int *)(lVar9 + 0x20)) * iVar13);
            local_f0 = *(longlong *)(lVar9 + 0x140) + (lVar10 + lVar17) * 4;
            local_f8 = *(longlong *)(lVar9 + 0x140) + lVar10 * 4;
          }
          cVar4 = (**(code **)(*param_7 + 0x18))
                            (param_7,*(longlong *)(param_1 + 0x18),uVar5,&local_f8);
          if (cVar4 == '\0') goto LAB_14506674d;
        }
      }
      if ((((iVar14 != *param_6) && (bVar2)) && ((fVar23 < 1.0 || (fVar24 < 1.0)))) &&
         (((fVar19 < fVar25 && (param_9 < fVar25)) && (fVar19 < param_10)))) {
        local_108 = *param_11;
        lStack_100 = param_11[1];
        local_178 = *param_4;
        lStack_170 = param_4[1];
        fVar21 = param_10;
        if (fVar25 <= param_10) {
          fVar21 = fVar25;
        }
        local_180[0] = *(uint *)(lVar11 + 8) & 0x3fffff;
        fVar20 = param_9;
        if (param_9 <= fVar19) {
          fVar20 = fVar19;
        }
        FUN_1450672c0(param_1,param_2,param_3,&local_178,uVar5,local_180,param_7,param_8,fVar20,
                      fVar21,&local_108);
      }
      if (ABS(fVar24 - fVar23) <= 0.001) {
        pfVar8 = local_150;
        if (fVar25 <= fVar19) {
          if (fVar27 <= fVar23) {
            fVar27 = fVar23;
          }
        }
        else if (fVar23 <= fVar26) {
          fVar26 = fVar23;
        }
      }
      else {
        fVar20 = 1.0 / (fVar24 - fVar23);
        fVar21 = (fVar24 * fVar25 - fVar19 * fVar23) * fVar20;
        if ((iVar14 != *param_6) && (bVar2)) {
          fVar22 = fVar23;
          if (fVar23 <= fVar24) {
            fVar22 = fVar24;
          }
          if (((0.0 < fVar22) && (param_9 < fVar21)) && (fVar21 < param_10)) {
            fVar22 = param_10;
            if (fVar24 < fVar23) {
              fVar22 = fVar21;
              fVar21 = param_9;
            }
            if (fVar21 < fVar22) {
              local_178 = *param_11;
              lStack_170 = param_11[1];
              local_108 = *param_4;
              lStack_100 = param_4[1];
              local_180[0] = *(uint *)(lVar11 + 8) & 0x3fffff;
              FUN_1450661f0(param_1,param_2,param_3,&local_108,uVar5,local_180,param_7,param_8,
                            fVar21,fVar22,&local_178);
            }
          }
        }
        pfVar8 = local_150;
        local_178 = *param_4;
        lStack_170 = param_4[1];
        FUN_145065e70(fVar25,fVar23,fVar19,fVar24,fVar20,&local_178,local_150,pfVar3);
      }
      uVar12 = (ulonglong)(iVar14 + 1);
      fVar23 = fVar24;
      fVar25 = fVar19;
      uVar15 = local_140 - 1;
    } while (local_140 - 1 != 0);
    local_140 = 0;
  }
  iVar14 = 0;
  lVar9 = (longlong)(int)local_118;
  if (0 < lVar9) {
    lVar11 = *param_4 - (longlong)pfVar8;
    lVar17 = (longlong)local_128 - (longlong)pfVar8;
    do {
      fVar23 = *(float *)(lVar11 + (longlong)pfVar8);
      if ((fVar27 <= fVar23) && (fVar23 <= fVar26)) {
        fVar23 = *(float *)(lVar17 + (longlong)pfVar8);
        if (*pfVar8 < fVar23) {
          local_178 = CONCAT44(fVar23,*pfVar8);
          lStack_170 = 0;
          local_168 = param_5;
          FUN_14506a530((longlong)iVar14 * 0x10 + *param_11,&local_178);
        }
      }
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_8 + 1) = (int)param_8[1] + -1;
  if (local_130 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar12 = (longlong)local_120 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_130 + 0x28) < uVar12) ||
       ((longlong)local_128 + uVar12 != *(longlong *)(local_130 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(float **)(local_130 + 0x38) = local_128;
      if (*(float **)(local_130 + 0x48) == local_128) {
        FUN_144be8430();
      }
    }
  }
  if (local_158 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar12 = (longlong)local_148 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_158 + 0x28) < uVar12) ||
       ((longlong)local_150 + uVar12 != *(longlong *)(local_158 + 0x38))) {
      FUN_144be8550();
      return;
    }
    *(float **)(local_158 + 0x38) = local_150;
    if (*(float **)(local_158 + 0x48) == local_150) {
      FUN_144be8430();
      return;
    }
  }
  return;
}



// FUNCTION 145066bd0 FUN_145066bd0 body=1770 status=ok
// SIG undefined FUN_145066bd0(void)

void FUN_145066bd0(longlong param_1,float *param_2,float *param_3,uint param_4,int *param_5,
                  longlong *param_6,longlong *param_7,float param_8,float param_9,
                  undefined8 param_10)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_e8 [4];
  longlong local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  
  uVar9 = 0;
  iVar11 = (int)param_7[1];
  if (0 < iVar11) {
    puVar5 = (uint *)*param_7;
    uVar15 = uVar9;
    do {
      if (*puVar5 == param_4) {
        if (-1 < (int)uVar15) {
          return;
        }
        break;
      }
      uVar15 = (ulonglong)((int)uVar15 + 1);
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while ((longlong)uVar9 < (longlong)iVar11);
  }
  iVar11 = iVar11 + 1;
  if ((int)(*(uint *)((longlong)param_7 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_144c30fb0(param_7,&PTR_vftable_14c6e47c0,(longlong)iVar11);
  }
  puVar5 = (uint *)(*param_7 + (longlong)(int)param_7[1] * 4);
  if (puVar5 != (uint *)0x0) {
    *puVar5 = param_4;
  }
  *(int *)(param_7 + 1) = iVar11;
  uVar10 = param_4 & 0x3fffff;
  lVar2 = *(longlong *)
           ((ulonglong)(param_4 >> 0x16) * 0x120 +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if ((int)uVar10 < *(int *)(lVar3 + 0x20)) {
    uVar9 = (ulonglong)uVar10;
    if (*(int *)(lVar3 + 0x98) != 0) {
      uVar10 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar10 * 4);
    }
    if (uVar10 == 0xffffffff) {
      lVar7 = *(longlong *)(lVar3 + 0x18);
      lVar13 = uVar9 * 3;
    }
    else {
      lVar13 = (longlong)(int)uVar10 * 3;
      lVar7 = *(longlong *)(lVar3 + 0xb0);
    }
  }
  else {
    lVar13 = (longlong)(int)(uVar10 - *(int *)(lVar3 + 0x20)) * 3;
    lVar7 = *(longlong *)(lVar3 + 0xd0);
  }
  sVar1 = *(short *)(lVar7 + 8 + lVar13 * 4);
  iVar11 = *(int *)(lVar7 + lVar13 * 4);
  uVar9 = (ulonglong)iVar11;
  if (iVar11 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar11 = *(int *)(*(longlong *)(lVar3 + 0x70) + uVar9 * 4);
    }
    if (iVar11 == -1) {
      lVar7 = *(longlong *)(lVar3 + 0x28);
      lVar13 = uVar9 * 5;
    }
    else {
      lVar13 = (longlong)iVar11 * 5;
      lVar7 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar13 = (longlong)(iVar11 - *(int *)(lVar3 + 0x30)) * 5;
    lVar7 = *(longlong *)(lVar3 + 0xe0);
  }
  iVar11 = *(int *)(lVar7 + lVar13 * 4);
  if (iVar11 < *(int *)(lVar3 + 0x40)) {
    pfVar6 = (float *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar11 - *(int *)(lVar3 + 0x40)) * 0x10 +
                      *(longlong *)(lVar3 + 0xf0));
  }
  fVar22 = *pfVar6;
  fVar17 = pfVar6[1];
  fVar16 = pfVar6[2];
  fVar18 = fVar17 * *(float *)(lVar2 + 0x70) + fVar22 * *(float *)(lVar2 + 0x60) +
           fVar16 * *(float *)(lVar2 + 0x80) + *(float *)(lVar2 + 0x90);
  fVar20 = fVar17 * *(float *)(lVar2 + 0x74) + fVar22 * *(float *)(lVar2 + 100) +
           fVar16 * *(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0x94);
  fVar22 = fVar17 * *(float *)(lVar2 + 0x78) + fVar22 * *(float *)(lVar2 + 0x68) +
           fVar16 * *(float *)(lVar2 + 0x88) + *(float *)(lVar2 + 0x98);
  if (0 < sVar1) {
    uVar15 = (ulonglong)(uint)(int)sVar1;
    fVar17 = param_2[3] + param_2[2] * fVar22 + param_2[1] * fVar20 + *param_2 * fVar18;
    fVar22 = param_3[3] + param_3[2] * fVar22 + param_3[1] * fVar20 + *param_3 * fVar18;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      iVar11 = (int)uVar9;
      if (iVar11 < *(int *)(lVar3 + 0x30)) {
        iVar12 = iVar11;
        if (*(int *)(lVar3 + 0x78) != 0) {
          iVar12 = *(int *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar11 * 4);
        }
        if (iVar12 == -1) {
          lVar7 = *(longlong *)(lVar3 + 0x28);
          lVar13 = (longlong)iVar11 * 5;
        }
        else {
          lVar13 = (longlong)iVar12 * 5;
          lVar7 = *(longlong *)(lVar3 + 0xc0);
        }
      }
      else {
        lVar13 = (longlong)(iVar11 - *(int *)(lVar3 + 0x30)) * 5;
        lVar7 = *(longlong *)(lVar3 + 0xe0);
      }
      lVar7 = lVar7 + lVar13 * 4;
      iVar12 = *(int *)(lVar7 + 4);
      if (iVar12 < *(int *)(lVar3 + 0x40)) {
        pfVar6 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar6 = (float *)((longlong)(iVar12 - *(int *)(lVar3 + 0x40)) * 0x10 +
                          *(longlong *)(lVar3 + 0xf0));
      }
      fVar16 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar20 = pfVar6[2];
      fVar19 = fVar16 * *(float *)(lVar2 + 0x60) + fVar18 * *(float *)(lVar2 + 0x70) +
               fVar20 * *(float *)(lVar2 + 0x80) + *(float *)(lVar2 + 0x90);
      fVar21 = fVar16 * *(float *)(lVar2 + 100) + fVar18 * *(float *)(lVar2 + 0x74) +
               fVar20 * *(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0x94);
      fVar18 = fVar16 * *(float *)(lVar2 + 0x68) + fVar18 * *(float *)(lVar2 + 0x78) +
               fVar20 * *(float *)(lVar2 + 0x88) + *(float *)(lVar2 + 0x98);
      fVar16 = *param_3 * fVar19;
      fVar20 = param_2[3] + param_2[2] * fVar18 + param_2[1] * fVar21 + *param_2 * fVar19;
      fVar18 = param_3[3] + param_3[2] * fVar18 + param_3[1] * fVar21 + fVar16;
      if ((iVar11 != *param_5) &&
         ((((fVar22 < 1.0 || (fVar18 < 1.0)) && (fVar20 < fVar17)) &&
          ((param_8 < fVar17 && (fVar20 < param_9)))))) {
        if ((*(int *)(lVar7 + 8) == -1) || ((*(byte *)(lVar7 + 0x10) & 0x20) != 0)) {
LAB_145067187:
          local_e8[0] = param_8;
          local_c0 = (fVar22 - fVar18) / (fVar17 - fVar20);
          local_c4 = fVar17;
          if (param_9 <= fVar17) {
            local_c4 = param_9;
          }
          local_bc = fVar18 - local_c0 * fVar20;
          local_c8 = fVar20;
          if (fVar20 <= param_8) {
            local_c8 = param_8;
          }
          local_b8 = iVar11;
          FUN_145068350(&local_c8,0,0x3f800000);
          FUN_14506a530(param_10,&local_c8);
        }
        else {
          uVar10 = *(uint *)(lVar7 + 0xc);
          uVar9 = (ulonglong)uVar10;
          if (((*(byte *)(lVar7 + 0x10) & 0x40) == 0) && (uVar10 != 0xffffffff)) {
            uVar9 = (ulonglong)(*(int *)(lVar3 + 0x17c) << 0x16 | uVar10 & 0x3fffff);
          }
          if (param_6 != (longlong *)0x0) {
            uVar10 = (uint)uVar9 & 0x3fffff;
            lVar3 = *(longlong *)
                     (*(longlong *)
                       ((uVar9 >> 0x16) * 0x120 +
                       *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
            iVar12 = *(int *)(lVar3 + 0x50);
            lVar13 = (longlong)iVar12;
            if ((int)uVar10 < *(int *)(lVar3 + 0x20)) {
              uVar14 = uVar10;
              if (*(int *)(lVar3 + 0x98) != 0) {
                uVar14 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar10 * 4);
              }
              if (uVar14 == 0xffffffff) {
                local_d8 = *(longlong *)(lVar3 + 0x48) + (longlong)(int)(uVar10 * iVar12) * 4;
                local_d0 = local_d8 + lVar13 * 4;
              }
              else {
                local_d0 = *(longlong *)(lVar3 + 0x120) + ((int)(uVar14 * iVar12) + lVar13) * 4;
                local_d8 = *(longlong *)(lVar3 + 0x120) + (longlong)(int)(uVar14 * iVar12) * 4;
              }
            }
            else {
              lVar8 = (longlong)(int)((uVar10 - *(int *)(lVar3 + 0x20)) * iVar12);
              local_d0 = *(longlong *)(lVar3 + 0x140) + (lVar8 + lVar13) * 4;
              local_d8 = *(longlong *)(lVar3 + 0x140) + lVar8 * 4;
            }
            cVar4 = (**(code **)(*param_6 + 0x18))
                              (param_6,*(longlong *)(param_1 + 0x18),fVar16,&local_d8);
            if (cVar4 == '\0') goto LAB_145067187;
          }
          uVar10 = *(uint *)(lVar7 + 0xc);
          local_e8[0] = (float)(*(uint *)(lVar7 + 8) & 0x3fffff);
          fVar22 = param_9;
          if (fVar17 <= param_9) {
            fVar22 = fVar17;
          }
          fVar17 = param_8;
          if (param_8 <= fVar20) {
            fVar17 = fVar20;
          }
          if (((*(byte *)(lVar7 + 0x10) & 0x40) == 0) && (uVar10 != 0xffffffff)) {
            uVar10 = *(int *)(*(longlong *)(lVar2 + 0x20) + 0x17c) << 0x16 | uVar10 & 0x3fffff;
          }
          FUN_145067b90(param_1,param_2,param_3,uVar10,local_e8,param_6,param_7,fVar17,fVar22,
                        param_10);
        }
      }
      uVar9 = (ulonglong)(iVar11 + 1);
      uVar15 = uVar15 - 1;
      fVar17 = fVar20;
      fVar22 = fVar18;
    } while (uVar15 != 0);
  }
  *(int *)(param_7 + 1) = (int)param_7[1] + -1;
  return;
}



// FUNCTION 1450672c0 FUN_1450672c0 body=2246 status=ok
// SIG undefined FUN_1450672c0(void)

void FUN_1450672c0(longlong param_1,float *param_2,float *param_3,longlong *param_4,uint param_5,
                  int *param_6,longlong *param_7,longlong *param_8,float param_9,float param_10,
                  longlong *param_11)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  float *pfVar16;
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
  uint local_180 [2];
  undefined8 local_178;
  longlong lStack_170;
  uint local_168;
  longlong local_158;
  float *local_150;
  int local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  float *local_128;
  int local_120;
  ulonglong local_118;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  
  iVar13 = 0;
  iVar14 = (int)param_8[1];
  if (0 < iVar14) {
    puVar7 = (uint *)*param_8;
    lVar9 = 0;
    do {
      if (*puVar7 == param_5) {
        if (-1 < iVar13) {
          return;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      lVar9 = lVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar9 < iVar14);
  }
  iVar14 = iVar14 + 1;
  if ((int)(*(uint *)((longlong)param_8 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_144c30fb0(param_8,&PTR_vftable_14c6e47c0,(longlong)iVar14);
  }
  puVar7 = (uint *)(*param_8 + (longlong)(int)param_8[1] * 4);
  if (puVar7 != (uint *)0x0) {
    *puVar7 = param_5;
  }
  *(int *)(param_8 + 1) = iVar14;
  uVar5 = param_5 & 0x3fffff;
  local_138 = *(longlong *)
               ((ulonglong)(param_5 >> 0x16) * 0x120 +
               *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lVar9 = *(longlong *)(local_138 + 0x20);
  if ((int)uVar5 < *(int *)(lVar9 + 0x20)) {
    uVar12 = (ulonglong)uVar5;
    if (*(int *)(lVar9 + 0x98) != 0) {
      uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x90) + uVar12 * 4);
    }
    if (uVar5 == 0xffffffff) {
      lVar9 = *(longlong *)(lVar9 + 0x18);
      lVar11 = uVar12 * 3;
    }
    else {
      lVar11 = (longlong)(int)uVar5 * 3;
      lVar9 = *(longlong *)(lVar9 + 0xb0);
    }
  }
  else {
    lVar11 = (longlong)(int)(uVar5 - *(int *)(lVar9 + 0x20)) * 3;
    lVar9 = *(longlong *)(lVar9 + 0xd0);
  }
  piVar1 = (int *)(lVar9 + lVar11 * 4);
  uVar5 = (uint)(short)piVar1[2];
  iVar14 = *piVar1;
  uVar12 = (ulonglong)iVar14;
  uVar15 = param_4[1] - *param_4 >> 2;
  local_118 = uVar15;
  FUN_1450660f0(&local_158,uVar15 & 0xffffffff);
  FUN_1450660f0(&local_130,uVar15 & 0xffffffff);
  pfVar3 = local_128;
  if (0 < (int)uVar15) {
    lVar11 = (longlong)(int)uVar15;
    pfVar8 = local_150;
    for (lVar9 = lVar11; pfVar16 = local_128, lVar9 != 0; lVar9 = lVar9 + -1) {
      *pfVar8 = param_9;
      pfVar8 = pfVar8 + 1;
    }
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pfVar16 = param_10;
      pfVar16 = pfVar16 + 1;
    }
  }
  lVar9 = *(longlong *)(local_138 + 0x20);
  if (iVar14 < *(int *)(lVar9 + 0x30)) {
    if (*(int *)(lVar9 + 0x78) != 0) {
      iVar14 = *(int *)(*(longlong *)(lVar9 + 0x70) + uVar12 * 4);
    }
    if (iVar14 == -1) {
      lVar11 = *(longlong *)(lVar9 + 0x28);
      lVar17 = uVar12 * 5;
    }
    else {
      lVar17 = (longlong)iVar14 * 5;
      lVar11 = *(longlong *)(lVar9 + 0xc0);
    }
  }
  else {
    lVar17 = (longlong)(iVar14 - *(int *)(lVar9 + 0x30)) * 5;
    lVar11 = *(longlong *)(lVar9 + 0xe0);
  }
  iVar14 = *(int *)(lVar11 + lVar17 * 4);
  if (iVar14 < *(int *)(lVar9 + 0x40)) {
    pfVar8 = (float *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar9 + 0x38));
  }
  else {
    pfVar8 = (float *)((longlong)(iVar14 - *(int *)(lVar9 + 0x40)) * 0x10 +
                      *(longlong *)(lVar9 + 0xf0));
  }
  fVar23 = *pfVar8;
  fVar25 = pfVar8[1];
  fVar24 = pfVar8[2];
  fVar27 = 0.0;
  fVar26 = 1.0;
  fVar19 = fVar25 * *(float *)(local_138 + 0x70) + fVar23 * *(float *)(local_138 + 0x60) +
           fVar24 * *(float *)(local_138 + 0x80) + *(float *)(local_138 + 0x90);
  fVar21 = fVar25 * *(float *)(local_138 + 0x74) + fVar23 * *(float *)(local_138 + 100) +
           fVar24 * *(float *)(local_138 + 0x84) + *(float *)(local_138 + 0x94);
  fVar23 = fVar25 * *(float *)(local_138 + 0x78) + fVar23 * *(float *)(local_138 + 0x68) +
           fVar24 * *(float *)(local_138 + 0x88) + *(float *)(local_138 + 0x98);
  fVar25 = param_2[3] + param_2[2] * fVar23 + param_2[1] * fVar21 + *param_2 * fVar19;
  fVar23 = param_3[3] + param_3[2] * fVar23 + param_3[1] * fVar21 + *param_3 * fVar19;
  pfVar8 = local_150;
  uVar15 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    do {
      local_140 = uVar15;
      lVar9 = *(longlong *)(local_138 + 0x20);
      iVar14 = (int)uVar12;
      if (iVar14 < *(int *)(lVar9 + 0x30)) {
        iVar13 = iVar14;
        if (*(int *)(lVar9 + 0x78) != 0) {
          iVar13 = *(int *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar14 * 4);
        }
        if (iVar13 == -1) {
          lVar17 = (longlong)iVar14 * 5;
          lVar11 = *(longlong *)(lVar9 + 0x28);
        }
        else {
          lVar17 = (longlong)iVar13 * 5;
          lVar11 = *(longlong *)(lVar9 + 0xc0);
        }
      }
      else {
        lVar17 = (longlong)(iVar14 - *(int *)(lVar9 + 0x30)) * 5;
        lVar11 = *(longlong *)(lVar9 + 0xe0);
      }
      lVar11 = lVar11 + lVar17 * 4;
      iVar13 = *(int *)(lVar11 + 4);
      if (iVar13 < *(int *)(lVar9 + 0x40)) {
        pfVar8 = (float *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar9 + 0x38));
      }
      else {
        pfVar8 = (float *)((longlong)(iVar13 - *(int *)(lVar9 + 0x40)) * 0x10 +
                          *(longlong *)(lVar9 + 0xf0));
      }
      fVar24 = *pfVar8;
      fVar19 = pfVar8[1];
      fVar21 = pfVar8[2];
      fVar20 = fVar24 * *(float *)(local_138 + 0x60) + fVar19 * *(float *)(local_138 + 0x70) +
               fVar21 * *(float *)(local_138 + 0x80) + *(float *)(local_138 + 0x90);
      fVar22 = fVar24 * *(float *)(local_138 + 100) + fVar19 * *(float *)(local_138 + 0x74) +
               fVar21 * *(float *)(local_138 + 0x84) + *(float *)(local_138 + 0x94);
      fVar24 = fVar24 * *(float *)(local_138 + 0x68) + fVar19 * *(float *)(local_138 + 0x78) +
               fVar21 * *(float *)(local_138 + 0x88) + *(float *)(local_138 + 0x98);
      uVar5 = *(uint *)(lVar11 + 0xc);
      fVar19 = param_2[3] + param_2[2] * fVar24 + param_2[1] * fVar22 + *param_2 * fVar20;
      fVar24 = param_3[3] + param_3[2] * fVar24 + param_3[1] * fVar22 + *param_3 * fVar20;
      if (((*(byte *)(lVar11 + 0x10) & 0x40) == 0) && (uVar5 != 0xffffffff)) {
        uVar5 = *(int *)(lVar9 + 0x17c) << 0x16 | uVar5 & 0x3fffff;
      }
      if ((*(int *)(lVar11 + 8) == -1) || ((*(byte *)(lVar11 + 0x10) & 0x20) != 0)) {
LAB_14506781d:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (param_7 != (longlong *)0x0) {
          uVar6 = uVar5 & 0x3fffff;
          lVar9 = *(longlong *)
                   (*(longlong *)
                     ((ulonglong)(uVar5 >> 0x16) * 0x120 +
                     *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
          iVar13 = *(int *)(lVar9 + 0x50);
          lVar17 = (longlong)iVar13;
          if ((int)uVar6 < *(int *)(lVar9 + 0x20)) {
            uVar18 = uVar6;
            if (*(int *)(lVar9 + 0x98) != 0) {
              uVar18 = *(uint *)(*(longlong *)(lVar9 + 0x90) + (ulonglong)uVar6 * 4);
            }
            if (uVar18 == 0xffffffff) {
              local_108 = *(longlong *)(lVar9 + 0x48) + (longlong)(int)(uVar6 * iVar13) * 4;
              local_100 = local_108 + lVar17 * 4;
            }
            else {
              local_100 = *(longlong *)(lVar9 + 0x120) + ((int)(uVar18 * iVar13) + lVar17) * 4;
              local_108 = *(longlong *)(lVar9 + 0x120) + (longlong)(int)(uVar18 * iVar13) * 4;
            }
          }
          else {
            lVar10 = (longlong)(int)((uVar6 - *(int *)(lVar9 + 0x20)) * iVar13);
            local_100 = *(longlong *)(lVar9 + 0x140) + (lVar10 + lVar17) * 4;
            local_108 = *(longlong *)(lVar9 + 0x140) + lVar10 * 4;
          }
          cVar4 = (**(code **)(*param_7 + 0x18))
                            (param_7,*(longlong *)(param_1 + 0x18),uVar5,&local_108);
          if (cVar4 == '\0') goto LAB_14506781d;
        }
      }
      if ((((iVar14 != *param_6) && (bVar2)) && ((fVar23 < 1.0 || (fVar24 < 1.0)))) &&
         (((fVar19 < fVar25 && (param_9 < fVar25)) && (fVar19 < param_10)))) {
        local_178 = *param_4;
        lStack_170 = param_4[1];
        local_f8 = *param_11;
        lStack_f0 = param_11[1];
        local_180[0] = *(uint *)(lVar11 + 8) & 0x3fffff;
        fVar21 = param_10;
        if (fVar25 <= param_10) {
          fVar21 = fVar25;
        }
        fVar20 = param_9;
        if (param_9 <= fVar19) {
          fVar20 = fVar19;
        }
        FUN_1450672c0(param_1,param_2,param_3,&local_178,uVar5,local_180,param_7,param_8,fVar20,
                      fVar21,&local_f8);
      }
      pfVar8 = local_150;
      if (ABS(fVar24 - fVar23) <= 0.001) {
        if (fVar25 <= fVar19) {
          if (fVar27 <= fVar23) {
            fVar27 = fVar23;
          }
        }
        else if (fVar23 <= fVar26) {
          fVar26 = fVar23;
        }
      }
      else {
        local_178 = *param_4;
        lStack_170 = param_4[1];
        FUN_145065e70(fVar25,fVar23,fVar19,fVar24,1.0 / (fVar24 - fVar23),&local_178,local_150,
                      pfVar3);
      }
      uVar12 = (ulonglong)(iVar14 + 1);
      fVar23 = fVar24;
      fVar25 = fVar19;
      uVar15 = local_140 - 1;
    } while (local_140 - 1 != 0);
    local_140 = 0;
  }
  iVar14 = 0;
  lVar9 = (longlong)(int)local_118;
  if (0 < lVar9) {
    lVar11 = *param_4 - (longlong)pfVar8;
    lVar17 = (longlong)local_128 - (longlong)pfVar8;
    do {
      fVar23 = *(float *)(lVar11 + (longlong)pfVar8);
      if ((fVar27 <= fVar23) && (fVar23 <= fVar26)) {
        fVar23 = *(float *)(lVar17 + (longlong)pfVar8);
        if (*pfVar8 < fVar23) {
          local_178 = CONCAT44(fVar23,*pfVar8);
          lStack_170 = 0;
          local_168 = param_5;
          FUN_14506a530((longlong)iVar14 * 0x10 + *param_11,&local_178);
        }
      }
      iVar14 = iVar14 + 1;
      pfVar8 = pfVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_8 + 1) = (int)param_8[1] + -1;
  if (local_130 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar12 = (longlong)local_120 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_130 + 0x28) < uVar12) ||
       ((longlong)local_128 + uVar12 != *(longlong *)(local_130 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(float **)(local_130 + 0x38) = local_128;
      if (*(float **)(local_130 + 0x48) == local_128) {
        FUN_144be8430();
      }
    }
  }
  if (local_158 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar12 = (longlong)local_148 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_158 + 0x28) < uVar12) ||
       ((longlong)local_150 + uVar12 != *(longlong *)(local_158 + 0x38))) {
      FUN_144be8550();
      return;
    }
    *(float **)(local_158 + 0x38) = local_150;
    if (*(float **)(local_158 + 0x48) == local_150) {
      FUN_144be8430();
      return;
    }
  }
  return;
}



// FUNCTION 145067b90 FUN_145067b90 body=1770 status=ok
// SIG undefined FUN_145067b90(void)

void FUN_145067b90(longlong param_1,float *param_2,float *param_3,uint param_4,int *param_5,
                  longlong *param_6,longlong *param_7,float param_8,float param_9,
                  undefined8 param_10)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_e8 [4];
  longlong local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  
  uVar9 = 0;
  iVar11 = (int)param_7[1];
  if (0 < iVar11) {
    puVar5 = (uint *)*param_7;
    uVar15 = uVar9;
    do {
      if (*puVar5 == param_4) {
        if (-1 < (int)uVar15) {
          return;
        }
        break;
      }
      uVar15 = (ulonglong)((int)uVar15 + 1);
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 1;
    } while ((longlong)uVar9 < (longlong)iVar11);
  }
  iVar11 = iVar11 + 1;
  if ((int)(*(uint *)((longlong)param_7 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_144c30fb0(param_7,&PTR_vftable_14c6e47c0,(longlong)iVar11);
  }
  puVar5 = (uint *)(*param_7 + (longlong)(int)param_7[1] * 4);
  if (puVar5 != (uint *)0x0) {
    *puVar5 = param_4;
  }
  *(int *)(param_7 + 1) = iVar11;
  uVar10 = param_4 & 0x3fffff;
  lVar2 = *(longlong *)
           ((ulonglong)(param_4 >> 0x16) * 0x120 +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if ((int)uVar10 < *(int *)(lVar3 + 0x20)) {
    uVar9 = (ulonglong)uVar10;
    if (*(int *)(lVar3 + 0x98) != 0) {
      uVar10 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar10 * 4);
    }
    if (uVar10 == 0xffffffff) {
      lVar7 = *(longlong *)(lVar3 + 0x18);
      lVar13 = uVar9 * 3;
    }
    else {
      lVar13 = (longlong)(int)uVar10 * 3;
      lVar7 = *(longlong *)(lVar3 + 0xb0);
    }
  }
  else {
    lVar13 = (longlong)(int)(uVar10 - *(int *)(lVar3 + 0x20)) * 3;
    lVar7 = *(longlong *)(lVar3 + 0xd0);
  }
  sVar1 = *(short *)(lVar7 + 8 + lVar13 * 4);
  iVar11 = *(int *)(lVar7 + lVar13 * 4);
  uVar9 = (ulonglong)iVar11;
  if (iVar11 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar11 = *(int *)(*(longlong *)(lVar3 + 0x70) + uVar9 * 4);
    }
    if (iVar11 == -1) {
      lVar7 = *(longlong *)(lVar3 + 0x28);
      lVar13 = uVar9 * 5;
    }
    else {
      lVar13 = (longlong)iVar11 * 5;
      lVar7 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar13 = (longlong)(iVar11 - *(int *)(lVar3 + 0x30)) * 5;
    lVar7 = *(longlong *)(lVar3 + 0xe0);
  }
  iVar11 = *(int *)(lVar7 + lVar13 * 4);
  if (iVar11 < *(int *)(lVar3 + 0x40)) {
    pfVar6 = (float *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar11 - *(int *)(lVar3 + 0x40)) * 0x10 +
                      *(longlong *)(lVar3 + 0xf0));
  }
  fVar22 = *pfVar6;
  fVar17 = pfVar6[1];
  fVar16 = pfVar6[2];
  fVar18 = fVar17 * *(float *)(lVar2 + 0x70) + fVar22 * *(float *)(lVar2 + 0x60) +
           fVar16 * *(float *)(lVar2 + 0x80) + *(float *)(lVar2 + 0x90);
  fVar20 = fVar17 * *(float *)(lVar2 + 0x74) + fVar22 * *(float *)(lVar2 + 100) +
           fVar16 * *(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0x94);
  fVar22 = fVar17 * *(float *)(lVar2 + 0x78) + fVar22 * *(float *)(lVar2 + 0x68) +
           fVar16 * *(float *)(lVar2 + 0x88) + *(float *)(lVar2 + 0x98);
  if (0 < sVar1) {
    uVar15 = (ulonglong)(uint)(int)sVar1;
    fVar17 = param_2[3] + param_2[2] * fVar22 + param_2[1] * fVar20 + *param_2 * fVar18;
    fVar22 = param_3[3] + param_3[2] * fVar22 + param_3[1] * fVar20 + *param_3 * fVar18;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      iVar11 = (int)uVar9;
      if (iVar11 < *(int *)(lVar3 + 0x30)) {
        iVar12 = iVar11;
        if (*(int *)(lVar3 + 0x78) != 0) {
          iVar12 = *(int *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar11 * 4);
        }
        if (iVar12 == -1) {
          lVar7 = *(longlong *)(lVar3 + 0x28);
          lVar13 = (longlong)iVar11 * 5;
        }
        else {
          lVar13 = (longlong)iVar12 * 5;
          lVar7 = *(longlong *)(lVar3 + 0xc0);
        }
      }
      else {
        lVar13 = (longlong)(iVar11 - *(int *)(lVar3 + 0x30)) * 5;
        lVar7 = *(longlong *)(lVar3 + 0xe0);
      }
      lVar7 = lVar7 + lVar13 * 4;
      iVar12 = *(int *)(lVar7 + 4);
      if (iVar12 < *(int *)(lVar3 + 0x40)) {
        pfVar6 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar6 = (float *)((longlong)(iVar12 - *(int *)(lVar3 + 0x40)) * 0x10 +
                          *(longlong *)(lVar3 + 0xf0));
      }
      fVar16 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar20 = pfVar6[2];
      fVar19 = fVar16 * *(float *)(lVar2 + 0x60) + fVar18 * *(float *)(lVar2 + 0x70) +
               fVar20 * *(float *)(lVar2 + 0x80) + *(float *)(lVar2 + 0x90);
      fVar21 = fVar16 * *(float *)(lVar2 + 100) + fVar18 * *(float *)(lVar2 + 0x74) +
               fVar20 * *(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0x94);
      fVar18 = fVar16 * *(float *)(lVar2 + 0x68) + fVar18 * *(float *)(lVar2 + 0x78) +
               fVar20 * *(float *)(lVar2 + 0x88) + *(float *)(lVar2 + 0x98);
      fVar16 = *param_3 * fVar19;
      fVar20 = param_2[3] + param_2[2] * fVar18 + param_2[1] * fVar21 + *param_2 * fVar19;
      fVar18 = param_3[3] + param_3[2] * fVar18 + param_3[1] * fVar21 + fVar16;
      if ((iVar11 != *param_5) &&
         ((((fVar22 < 1.0 || (fVar18 < 1.0)) && (fVar20 < fVar17)) &&
          ((param_8 < fVar17 && (fVar20 < param_9)))))) {
        if ((*(int *)(lVar7 + 8) == -1) || ((*(byte *)(lVar7 + 0x10) & 0x20) != 0)) {
LAB_145068147:
          local_e8[0] = param_8;
          local_c0 = (fVar22 - fVar18) / (fVar17 - fVar20);
          local_c4 = fVar17;
          if (param_9 <= fVar17) {
            local_c4 = param_9;
          }
          local_bc = fVar18 - local_c0 * fVar20;
          local_c8 = fVar20;
          if (fVar20 <= param_8) {
            local_c8 = param_8;
          }
          local_b8 = iVar11;
          FUN_145068350(&local_c8,0,0x3f800000);
          FUN_14506a530(param_10,&local_c8);
        }
        else {
          uVar10 = *(uint *)(lVar7 + 0xc);
          uVar9 = (ulonglong)uVar10;
          if (((*(byte *)(lVar7 + 0x10) & 0x40) == 0) && (uVar10 != 0xffffffff)) {
            uVar9 = (ulonglong)(*(int *)(lVar3 + 0x17c) << 0x16 | uVar10 & 0x3fffff);
          }
          if (param_6 != (longlong *)0x0) {
            uVar10 = (uint)uVar9 & 0x3fffff;
            lVar3 = *(longlong *)
                     (*(longlong *)
                       ((uVar9 >> 0x16) * 0x120 +
                       *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)) + 0x20);
            iVar12 = *(int *)(lVar3 + 0x50);
            lVar13 = (longlong)iVar12;
            if ((int)uVar10 < *(int *)(lVar3 + 0x20)) {
              uVar14 = uVar10;
              if (*(int *)(lVar3 + 0x98) != 0) {
                uVar14 = *(uint *)(*(longlong *)(lVar3 + 0x90) + (ulonglong)uVar10 * 4);
              }
              if (uVar14 == 0xffffffff) {
                local_d8 = *(longlong *)(lVar3 + 0x48) + (longlong)(int)(uVar10 * iVar12) * 4;
                local_d0 = local_d8 + lVar13 * 4;
              }
              else {
                local_d0 = *(longlong *)(lVar3 + 0x120) + ((int)(uVar14 * iVar12) + lVar13) * 4;
                local_d8 = *(longlong *)(lVar3 + 0x120) + (longlong)(int)(uVar14 * iVar12) * 4;
              }
            }
            else {
              lVar8 = (longlong)(int)((uVar10 - *(int *)(lVar3 + 0x20)) * iVar12);
              local_d0 = *(longlong *)(lVar3 + 0x140) + (lVar8 + lVar13) * 4;
              local_d8 = *(longlong *)(lVar3 + 0x140) + lVar8 * 4;
            }
            cVar4 = (**(code **)(*param_6 + 0x18))
                              (param_6,*(longlong *)(param_1 + 0x18),fVar16,&local_d8);
            if (cVar4 == '\0') goto LAB_145068147;
          }
          uVar10 = *(uint *)(lVar7 + 0xc);
          local_e8[0] = (float)(*(uint *)(lVar7 + 8) & 0x3fffff);
          fVar22 = param_9;
          if (fVar17 <= param_9) {
            fVar22 = fVar17;
          }
          fVar17 = param_8;
          if (param_8 <= fVar20) {
            fVar17 = fVar20;
          }
          if (((*(byte *)(lVar7 + 0x10) & 0x40) == 0) && (uVar10 != 0xffffffff)) {
            uVar10 = *(int *)(*(longlong *)(lVar2 + 0x20) + 0x17c) << 0x16 | uVar10 & 0x3fffff;
          }
          FUN_145067b90(param_1,param_2,param_3,uVar10,local_e8,param_6,param_7,fVar17,fVar22,
                        param_10);
        }
      }
      uVar9 = (ulonglong)(iVar11 + 1);
      uVar15 = uVar15 - 1;
      fVar17 = fVar20;
      fVar22 = fVar18;
    } while (uVar15 != 0);
  }
  *(int *)(param_7 + 1) = (int)param_7[1] + -1;
  return;
}



// FUNCTION 145068280 FUN_145068280 body=53 status=ok
// SIG undefined FUN_145068280(void)

void FUN_145068280(float *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;
  
  param_1[1] = param_4;
  *param_1 = param_2;
  param_1[4] = param_6;
  fVar1 = (param_5 - param_3) / (param_4 - param_2);
  param_1[2] = fVar1;
  param_1[3] = param_3 - fVar1 * param_2;
  return;
}



// FUNCTION 1450682c0 FUN_1450682c0 body=72 status=ok
// SIG undefined FUN_1450682c0(void)

void FUN_1450682c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

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
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = fVar3 * *param_4 + *param_3;
  fVar8 = fVar3 * param_4[1] + param_3[1];
  fVar9 = fVar3 * param_4[2] + param_3[2];
  fVar10 = fVar3 * param_4[3] + param_3[3];
  fVar3 = fVar6 * *param_4 + *param_2;
  fVar4 = fVar6 * param_4[1] + param_2[1];
  fVar5 = fVar6 * param_4[2] + param_2[2];
  fVar6 = fVar6 * param_4[3] + param_2[3];
  *param_5 = fVar1 * fVar7 + fVar3;
  param_5[1] = fVar1 * fVar8 + fVar4;
  param_5[2] = fVar1 * fVar9 + fVar5;
  param_5[3] = fVar1 * fVar10 + fVar6;
  *param_6 = fVar2 * fVar7 + fVar3;
  param_6[1] = fVar2 * fVar8 + fVar4;
  param_6[2] = fVar2 * fVar9 + fVar5;
  param_6[3] = fVar2 * fVar10 + fVar6;
  return;
}



// FUNCTION 145068310 FUN_145068310 body=27 status=ok
// SIG undefined FUN_145068310(void)

float * FUN_145068310(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_2 = fVar1;
  param_2[1] = fVar1 * param_1[2] + param_1[3];
  return param_2;
}



// FUNCTION 145068330 FUN_145068330 body=28 status=ok
// SIG undefined FUN_145068330(void)

float * FUN_145068330(longlong param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  *param_2 = fVar1;
  param_2[1] = fVar1 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc);
  return param_2;
}



// FUNCTION 145068350 FUN_145068350 body=166 status=ok
// SIG undefined FUN_145068350(void)

bool FUN_145068350(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 <= param_2) {
    return false;
  }
  fVar3 = param_1[2];
  if (fVar3 <= 0.0) {
    fVar2 = param_1[3];
    if (0.0 <= fVar3) {
      if (fVar2 < param_2) {
        return false;
      }
      if (param_3 <= fVar2) {
        return false;
      }
      return true;
    }
    fVar1 = param_3 - fVar2;
    param_3 = param_2 - fVar2;
  }
  else {
    fVar1 = param_2 - param_1[3];
    param_3 = param_3 - param_1[3];
  }
  fVar1 = fVar1 / fVar3;
  param_3 = param_3 / fVar3;
  fVar3 = *param_1;
  if (*param_1 <= fVar1) {
    fVar3 = fVar1;
  }
  if (param_3 <= fVar3) {
    fVar3 = param_3;
  }
  fVar2 = param_1[1];
  if (param_1[1] <= fVar1) {
    fVar2 = fVar1;
  }
  *param_1 = fVar3;
  if (param_3 <= fVar2) {
    fVar2 = param_3;
  }
  param_1[1] = fVar2;
  return fVar3 < fVar2;
}



// FUNCTION 145068400 FUN_145068400 body=49 status=ok
// SIG undefined FUN_145068400(void)

undefined8 * FUN_145068400(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,0x10);
  return param_1;
}



// FUNCTION 145068440 FUN_145068440 body=27 status=ok
// SIG undefined FUN_145068440(void)

void FUN_145068440(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,(longlong)param_2);
    return;
  }
  return;
}



// FUNCTION 145068460 FUN_145068460 body=8 status=ok
// SIG undefined FUN_145068460(void)

void FUN_145068460(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145068470 FUN_145068470 body=266 status=ok
// SIG undefined FUN_145068470(void)

void FUN_145068470(longlong *param_1,float param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1];
  iVar5 = 0;
  if (iVar6 < 1) {
LAB_1450684a8:
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar4 = (undefined4 *)*param_1;
  lVar3 = 0;
  pfVar2 = (float *)(puVar4 + 1);
  while (*pfVar2 <= param_2) {
    iVar5 = iVar5 + 1;
    lVar3 = lVar3 + 1;
    pfVar2 = pfVar2 + 5;
    if (iVar6 <= lVar3) goto LAB_1450684a8;
  }
  if (iVar5 < 0) goto LAB_1450684a8;
  if (0 < iVar5) {
    iVar6 = iVar6 - iVar5;
    *(int *)(param_1 + 1) = iVar6;
    if (((iVar6 != 0) && (puVar4 != puVar4 + (longlong)iVar5 * 5)) && ((longlong)iVar6 * 0x14 != 0))
    {
      lVar3 = ((longlong)iVar6 * 0x14 - 1U >> 2) + 1;
      do {
        *puVar4 = puVar4[(longlong)iVar5 * 5];
        puVar4 = puVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if ((int)param_1[1] != 0) {
    fVar1 = *(float *)*param_1;
    if (param_2 <= fVar1) {
      param_2 = fVar1;
    }
    *(float *)*param_1 = param_2;
  }
  iVar6 = (int)param_1[1];
  if (iVar6 == 0) {
    return;
  }
  do {
    if (*(float *)(*param_1 + -0x14 + (longlong)iVar6 * 0x14) < param_3) break;
    iVar6 = iVar6 + -1;
    *(int *)(param_1 + 1) = iVar6;
  } while (iVar6 != 0);
  if (iVar6 == 0) {
    return;
  }
  fVar1 = *(float *)(*param_1 + -0x10 + (longlong)iVar6 * 0x14);
  if (fVar1 <= param_3) {
    param_3 = fVar1;
  }
  *(float *)(*param_1 + -0x10 + (longlong)iVar6 * 0x14) = param_3;
  return;
}



// FUNCTION 145068580 FUN_145068580 body=288 status=ok
// SIG undefined FUN_145068580(void)

void FUN_145068580(longlong *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = (longlong)(int)param_1[1];
  iVar5 = 0;
  if (lVar6 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  lVar4 = 0;
  lVar3 = 0;
  do {
    lVar2 = *param_1;
    if (param_2 < param_3) {
      fVar7 = *(float *)(lVar3 + 8 + lVar2);
      if (fVar7 <= 0.0) {
        fVar10 = *(float *)(lVar3 + 0xc + lVar2);
        if (fVar7 < 0.0) {
          fVar9 = param_3 - fVar10;
          fVar10 = param_2 - fVar10;
          goto LAB_1450685f4;
        }
        if ((fVar10 < param_2) || (param_3 <= fVar10)) goto LAB_145068672;
      }
      else {
        fVar9 = param_2 - *(float *)(lVar3 + 0xc + lVar2);
        fVar10 = param_3 - *(float *)(lVar3 + 0xc + lVar2);
LAB_1450685f4:
        fVar9 = fVar9 / fVar7;
        fVar10 = fVar10 / fVar7;
        fVar7 = *(float *)(lVar3 + 4 + lVar2);
        fVar8 = *(float *)(lVar3 + lVar2);
        if (*(float *)(lVar3 + lVar2) <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar10 <= fVar8) {
          fVar8 = fVar10;
        }
        if (fVar7 <= fVar9) {
          fVar7 = fVar9;
        }
        *(float *)(lVar3 + lVar2) = fVar8;
        if (fVar10 <= fVar7) {
          fVar7 = fVar10;
        }
        *(float *)(lVar3 + 4 + lVar2) = fVar7;
        lVar2 = *param_1;
        if (fVar7 <= fVar8) goto LAB_145068672;
      }
      uVar1 = ((undefined8 *)(lVar3 + lVar2))[1];
      iVar5 = iVar5 + 1;
      *(undefined8 *)(lVar4 + lVar2) = *(undefined8 *)(lVar3 + lVar2);
      ((undefined8 *)(lVar4 + lVar2))[1] = uVar1;
      *(undefined4 *)(lVar4 + 0x10 + lVar2) = *(undefined4 *)(lVar3 + 0x10 + lVar2);
      lVar4 = lVar4 + 0x14;
    }
LAB_145068672:
    lVar3 = lVar3 + 0x14;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *(int *)(param_1 + 1) = iVar5;
      return;
    }
  } while( true );
}



// FUNCTION 1450686a0 FUN_1450686a0 body=15 status=ok
// SIG undefined FUN_1450686a0(void)

longlong FUN_1450686a0(longlong *param_1,int param_2)

{
  return *param_1 + (longlong)param_2 * 0x14;
}



// FUNCTION 1450686b0 FUN_1450686b0 body=15 status=ok
// SIG undefined FUN_1450686b0(void)

longlong FUN_1450686b0(longlong *param_1,int param_2)

{
  return *param_1 + (longlong)param_2 * 0x14;
}



// FUNCTION 1450686c0 FUN_1450686c0 body=103 status=ok
// SIG undefined FUN_1450686c0(void)

void FUN_1450686c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  *(int *)(param_1 + 1) = iVar3;
  return;
}



// FUNCTION 145068730 FUN_145068730 body=273 status=ok
// SIG undefined FUN_145068730(void)

void FUN_145068730(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = (int)param_2[1];
  lVar6 = (longlong)iVar8;
  if (iVar8 != 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 == 0) {
      if (param_2 != param_1) {
        lVar3 = *param_2;
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
          FUN_14506e3e0(param_1,&PTR_vftable_14c6e47a0,lVar6);
        }
        FUN_144b3d470(*param_1,lVar3,lVar6 * 0x14);
        *(int *)(param_1 + 1) = iVar8;
      }
    }
    else {
      puVar7 = (undefined8 *)*param_2;
      puVar1 = (undefined8 *)(lVar6 * 0x14 + (longlong)puVar7);
      iVar8 = (int)((lVar6 * 0x14) / 0x14) + iVar2;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
        FUN_14506e2d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      puVar5 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x14);
      for (; puVar7 != puVar1; puVar7 = (undefined8 *)((longlong)puVar7 + 0x14)) {
        if (puVar5 != (undefined8 *)0x0) {
          uVar4 = puVar7[1];
          *puVar5 = *puVar7;
          puVar5[1] = uVar4;
          *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar7 + 2);
        }
        puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      }
      *(int *)(param_1 + 1) = iVar8;
    }
  }
  return;
}



// FUNCTION 145068850 FUN_145068850 body=201 status=ok
// SIG undefined FUN_145068850(void)

void FUN_145068850(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (int)param_1[1] + 1;
  fVar3 = (param_5 - param_3) / (param_4 - param_2);
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_14506e1d0(param_4 - param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  pfVar1 = (float *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = param_2;
    pfVar1[1] = param_4;
    pfVar1[2] = fVar3;
    pfVar1[3] = param_3 - fVar3 * param_2;
    pfVar1[4] = param_6;
  }
  *(int *)(param_1 + 1) = iVar2;
  return;
}



// FUNCTION 145068920 FUN_145068920 body=1321 status=ok
// SIG undefined FUN_145068920(void)

void FUN_145068920(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar17 = (int)param_1[1];
  lVar25 = (longlong)iVar17;
  if (iVar17 != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 != 0) {
      uVar18 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      fVar27 = *(float *)*param_2;
      fVar28 = ((float *)*param_2)[1];
      iVar5 = (iVar3 + iVar17) * 2;
      if (0 < iVar5) {
        FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar5);
      }
      iVar5 = local_b0;
      puVar20 = (undefined4 *)*param_1;
      puVar1 = puVar20 + (longlong)(int)param_1[1] * 5;
      iVar24 = (int)(((longlong)(int)param_1[1] * 0x14) / 0x14) + local_b0;
      if ((int)(local_ac & 0x7fffffff) < iVar24) {
        FUN_14506e2d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      puVar10 = (undefined4 *)(local_b8 + (longlong)iVar5 * 0x14);
      for (; puVar20 != puVar1; puVar20 = puVar20 + 5) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar6 = puVar20[1];
          uVar7 = puVar20[2];
          uVar8 = puVar20[3];
          *puVar10 = *puVar20;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          puVar10[4] = puVar20[4];
        }
        puVar10 = puVar10 + 5;
      }
      if (param_1 != &local_b8) {
        local_b0 = iVar24;
        FUN_14506a3d0(&local_b8,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        lVar23 = *param_1;
        *param_1 = local_b8;
        uVar22 = *(uint *)((longlong)param_1 + 0xc);
        *(int *)(param_1 + 1) = local_b0;
        *(uint *)((longlong)param_1 + 0xc) = local_ac;
        local_b8 = lVar23;
        local_ac = uVar22;
      }
      local_b0 = 0;
      uVar21 = uVar18;
      lVar23 = local_b8;
      uVar26 = uVar18;
      uVar22 = local_ac;
      if (0 < iVar17) {
        do {
          pfVar2 = (float *)(*param_1 + uVar26);
          fVar9 = pfVar2[1];
          fVar4 = *(float *)(*param_1 + 0x10 + uVar26);
          fVar15 = *pfVar2;
          fVar12 = fVar9;
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          iVar17 = local_b0;
joined_r0x000145068b03:
          fVar11 = fVar15;
          local_90 = fVar11;
          fStack_8c = fVar12;
          fStack_88 = fVar13;
          fStack_84 = fVar14;
          if (fVar11 < fVar9) {
            local_b0 = (int)uVar18;
            if ((longlong)iVar3 <= (longlong)uVar21) {
LAB_145068c77:
              if (fVar11 == fVar9) goto LAB_145068d78;
              if (local_b0 == 0) {
                local_b0 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  local_b0 = iVar17;
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,1);
                  lVar23 = local_b8;
                  uVar22 = local_ac;
                }
                pfVar2 = (float *)(lVar23 + (longlong)local_b0 * 0x14);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = fVar11;
                  pfVar2[1] = fVar12;
                  pfVar2[2] = fVar13;
                  pfVar2[3] = fVar14;
                  pfVar2[4] = fVar4;
                }
                uVar18 = 1;
              }
              else {
                lVar16 = (longlong)local_b0;
                if ((((*(float *)(lVar23 + -0xc + lVar16 * 0x14) == fVar13) &&
                     (*(float *)(lVar23 + -8 + lVar16 * 0x14) == fVar14)) &&
                    (*(float *)(lVar23 + -0x10 + lVar16 * 0x14) == fVar11)) &&
                   (*(float *)(lVar23 + -4 + lVar16 * 0x14) == fVar4)) {
                  *(float *)(lVar23 + -0x10 + lVar16 * 0x14) = fVar9;
                  goto LAB_145068d78;
                }
                uVar19 = local_b0 + 1;
                if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                  local_b0 = iVar17;
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                  lVar23 = local_b8;
                  uVar22 = local_ac;
                }
                pfVar2 = (float *)(lVar23 + (longlong)local_b0 * 0x14);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = fVar11;
                  pfVar2[1] = fVar12;
                  pfVar2[2] = fVar13;
                  pfVar2[3] = fVar14;
                  pfVar2[4] = fVar4;
                }
                uVar18 = (ulonglong)uVar19;
              }
              iVar17 = (int)uVar18;
              goto LAB_145068d78;
            }
            lVar16 = uVar21 * 0x14;
            while (fVar28 <= fVar11) {
              uVar21 = uVar21 + 1;
              if ((longlong)iVar3 <= (longlong)uVar21) goto LAB_145068c77;
              pfVar2 = (float *)(lVar16 + 0x14 + *param_2);
              fVar27 = *pfVar2;
              lVar16 = lVar16 + 0x14;
              fVar28 = pfVar2[1];
            }
            if (fVar9 <= fVar27) goto LAB_145068c77;
            fVar15 = fVar28;
            if ((fVar11 < fVar27) &&
               (local_a8 = fVar11, fStack_a4 = fVar27, fStack_a0 = fVar13, fStack_9c = fVar14,
               fVar11 != fVar27)) {
              if (local_b0 == 0) {
                local_b0 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  local_b0 = iVar17;
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,1);
                  lVar23 = local_b8;
                  uVar22 = local_ac;
                }
                pfVar2 = (float *)(lVar23 + (longlong)local_b0 * 0x14);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = local_a8;
                  pfVar2[1] = fStack_a4;
                  pfVar2[2] = fStack_a0;
                  pfVar2[3] = fStack_9c;
                  pfVar2[4] = fVar4;
                }
                uVar18 = 1;
              }
              else {
                lVar16 = (longlong)local_b0;
                if (((*(float *)(lVar23 + -0xc + lVar16 * 0x14) == fVar13) &&
                    (*(float *)(lVar23 + -8 + lVar16 * 0x14) == fVar14)) &&
                   ((*(float *)(lVar23 + -0x10 + lVar16 * 0x14) == fVar11 &&
                    (*(float *)(lVar23 + -4 + lVar16 * 0x14) == fVar4)))) {
                  *(float *)(lVar23 + -0x10 + lVar16 * 0x14) = fVar27;
                  goto joined_r0x000145068b03;
                }
                uVar19 = local_b0 + 1;
                if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                  local_b0 = iVar17;
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                  lVar23 = local_b8;
                  uVar22 = local_ac;
                }
                pfVar2 = (float *)(lVar23 + (longlong)local_b0 * 0x14);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = local_a8;
                  pfVar2[1] = fStack_a4;
                  pfVar2[2] = fStack_a0;
                  pfVar2[3] = fStack_9c;
                  pfVar2[4] = fVar4;
                }
                uVar18 = (ulonglong)uVar19;
              }
              iVar17 = (int)uVar18;
              fVar12 = fStack_8c;
              fVar13 = fStack_88;
              fVar14 = fStack_84;
            }
            goto joined_r0x000145068b03;
          }
LAB_145068d78:
          local_b0 = iVar17;
          lVar25 = lVar25 + -1;
          uVar26 = uVar26 + 0x14;
        } while (lVar25 != 0);
      }
      if (&local_b8 != param_1) {
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(&local_b8,&PTR_vftable_14c6e47a0);
        lVar23 = *param_1;
        *param_1 = local_b8;
        uVar22 = *(uint *)((longlong)param_1 + 0xc);
        *(int *)(param_1 + 1) = local_b0;
        *(uint *)((longlong)param_1 + 0xc) = local_ac;
      }
      if ((-1 < (int)uVar22) && (lVar23 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar23,(ulonglong)(uVar22 & 0x7fffffff) * 0x14);
      }
    }
  }
  return;
}



// FUNCTION 145068e50 FUN_145068e50 body=1123 status=ok
// SIG undefined FUN_145068e50(void)

void FUN_145068e50(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    iVar4 = (int)param_2[1];
    uVar18 = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      fVar25 = *(float *)*param_2;
      fVar27 = ((float *)*param_2)[1];
      local_b8 = 0;
      iVar19 = (iVar3 + iVar4) * 2;
      local_b0 = 0;
      local_ac = 0x80000000;
      if (0 < iVar19) {
        FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar19);
      }
      uVar22 = local_b0;
      puVar17 = (undefined4 *)*param_1;
      puVar1 = puVar17 + (longlong)(int)param_1[1] * 5;
      iVar19 = (int)(((longlong)(int)param_1[1] * 0x14) / 0x14) + local_b0;
      if ((int)(local_ac & 0x7fffffff) < iVar19) {
        FUN_14506e2d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar19);
      }
      puVar10 = (undefined4 *)(local_b8 + (longlong)(int)uVar22 * 0x14);
      for (; puVar17 != puVar1; puVar17 = puVar17 + 5) {
        if (puVar10 != (undefined4 *)0x0) {
          uVar6 = puVar17[1];
          uVar7 = puVar17[2];
          uVar8 = puVar17[3];
          *puVar10 = *puVar17;
          puVar10[1] = uVar6;
          puVar10[2] = uVar7;
          puVar10[3] = uVar8;
          puVar10[4] = puVar17[4];
        }
        puVar10 = puVar10 + 5;
      }
      if (param_1 != &local_b8) {
        local_b0 = iVar19;
        FUN_14506a3d0(&local_b8,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        lVar23 = *param_1;
        *param_1 = local_b8;
        uVar22 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(param_1 + 1) = local_b0;
        *(uint *)((longlong)param_1 + 0xc) = local_ac;
        local_b8 = lVar23;
        local_ac = uVar22;
      }
      local_b0 = 0;
      uVar21 = uVar18;
      lVar23 = local_b8;
      uVar24 = uVar18;
      fVar12 = fStack_a0;
      fVar13 = fStack_9c;
      uVar22 = local_ac;
      if (0 < iVar3) {
        do {
          fStack_9c = fVar13;
          fStack_a0 = fVar12;
          pfVar2 = (float *)(*param_1 + uVar24 * 0x14);
          fVar9 = pfVar2[1];
          fVar5 = *(float *)(*param_1 + 0x10 + uVar24 * 0x14);
          fVar26 = *pfVar2;
          fStack_8c = fVar9;
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          uVar11 = local_b0;
          fVar12 = fStack_a0;
          fVar13 = fStack_9c;
          while (fStack_9c = fVar15, fStack_a0 = fVar14, local_90 = fVar26, fStack_88 = fStack_a0,
                fStack_84 = fStack_9c, local_90 < fVar9) {
            local_b0 = (uint)uVar21;
            if ((longlong)iVar4 <= (longlong)uVar18) {
LAB_1450691d7:
              uVar24 = (ulonglong)iVar3;
              break;
            }
            lVar16 = uVar18 * 0x14;
            while (fVar27 <= local_90) {
              uVar18 = uVar18 + 1;
              if ((longlong)iVar4 <= (longlong)uVar18) goto LAB_1450691d7;
              pfVar2 = (float *)(*param_2 + 0x14 + lVar16);
              fVar25 = *pfVar2;
              lVar16 = lVar16 + 0x14;
              fVar27 = pfVar2[1];
            }
            if (fVar9 <= fVar25) break;
            fVar26 = fStack_8c;
            if (fVar27 <= fStack_8c) {
              fVar26 = fVar27;
            }
            local_a8 = local_90;
            if (local_90 <= fVar25) {
              local_a8 = fVar25;
            }
            fVar14 = fStack_a0;
            fVar15 = fStack_9c;
            fStack_a4 = fVar26;
            fVar12 = fStack_a0;
            fVar13 = fStack_9c;
            if ((local_a8 < fVar26) && (local_a8 != fVar26)) {
              if (local_b0 == 0) {
                local_b0 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  local_b0 = uVar11;
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,1);
                  lVar23 = local_b8;
                  uVar22 = local_ac;
                }
                pfVar2 = (float *)(lVar23 + (longlong)(int)local_b0 * 0x14);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = local_a8;
                  pfVar2[1] = fStack_a4;
                  pfVar2[2] = fStack_a0;
                  pfVar2[3] = fStack_9c;
                  pfVar2[4] = fVar5;
                }
                uVar21 = 1;
                local_b0 = 1;
                fVar14 = fStack_88;
                fVar15 = fStack_84;
                uVar11 = local_b0;
                fVar12 = fStack_a0;
                fVar13 = fStack_9c;
              }
              else {
                lVar16 = (longlong)(int)local_b0;
                if ((((*(float *)(lVar23 + -0xc + lVar16 * 0x14) == fStack_a0) &&
                     (*(float *)(lVar23 + -8 + lVar16 * 0x14) == fStack_9c)) &&
                    (*(float *)(lVar23 + -0x10 + lVar16 * 0x14) == local_a8)) &&
                   (*(float *)(lVar23 + -4 + lVar16 * 0x14) == fVar5)) {
                  *(float *)(lVar23 + -0x10 + lVar16 * 0x14) = fVar26;
                }
                else {
                  uVar20 = local_b0 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
                    local_b0 = uVar11;
                    FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
                    lVar23 = local_b8;
                    uVar22 = local_ac;
                  }
                  pfVar2 = (float *)(lVar23 + (longlong)(int)local_b0 * 0x14);
                  if (pfVar2 != (float *)0x0) {
                    *pfVar2 = local_a8;
                    pfVar2[1] = fStack_a4;
                    pfVar2[2] = fStack_a0;
                    pfVar2[3] = fStack_9c;
                    pfVar2[4] = fVar5;
                  }
                  uVar21 = (ulonglong)uVar20;
                  fVar14 = fStack_88;
                  fVar15 = fStack_84;
                  uVar11 = uVar20;
                  fVar12 = fStack_a0;
                  fVar13 = fStack_9c;
                }
              }
            }
          }
          uVar24 = uVar24 + 1;
          local_b0 = uVar11;
        } while ((longlong)uVar24 < (longlong)iVar3);
      }
      fStack_9c = fVar13;
      fStack_a0 = fVar12;
      if (&local_b8 != param_1) {
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(&local_b8,&PTR_vftable_14c6e47a0);
        lVar23 = *param_1;
        *param_1 = local_b8;
        uVar22 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(param_1 + 1) = local_b0;
        *(uint *)((longlong)param_1 + 0xc) = local_ac;
      }
      if ((-1 < (int)uVar22) && (lVar23 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar23,(ulonglong)(uVar22 & 0x7fffffff) * 0x14);
      }
    }
  }
  return;
}



// FUNCTION 1450692c0 FUN_1450692c0 body=95 status=ok
// SIG undefined FUN_1450692c0(void)

void FUN_1450692c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
    FUN_14506a3d0(param_2,&PTR_vftable_14c6e47a0);
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 145069320 FUN_145069320 body=91 status=ok
// SIG undefined FUN_145069320(void)

bool FUN_145069320(longlong *param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[1];
  if ((iVar3 != 0) && (*(float *)*param_1 <= param_2)) {
    if (1 < iVar3) {
      lVar4 = 1;
      pfVar1 = (float *)*param_1;
      do {
        fVar2 = pfVar1[5];
        if (pfVar1[1] <= fVar2 && fVar2 != pfVar1[1]) {
          return false;
        }
        lVar4 = lVar4 + 1;
        pfVar1 = pfVar1 + 5;
      } while (lVar4 < iVar3);
    }
    pfVar1 = (float *)(*param_1 + -0x10 + (longlong)iVar3 * 0x14);
    return param_3 < *pfVar1 || param_3 == *pfVar1;
  }
  return false;
}



// FUNCTION 145069380 FUN_145069380 body=646 status=ok
// SIG undefined FUN_145069380(void)

void FUN_145069380(longlong *param_1,float param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  lVar8 = 1;
  if ((int)param_1[1] == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
      FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,1);
    }
    pfVar2 = (float *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = param_2;
      pfVar2[1] = param_3;
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[4] = -NAN;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    return;
  }
  pfVar2 = (float *)*param_1;
  fVar14 = *pfVar2;
  fVar13 = pfVar2[1];
  if (param_2 < fVar14) {
    pfVar2[1] = fVar14;
    *(float *)*param_1 = param_2;
  }
  uVar9 = (uint)(param_2 < fVar14);
  lVar11 = (longlong)(int)param_1[1];
  if (1 < lVar11) {
    uVar10 = (ulonglong)uVar9;
    if (4 < lVar11) {
      lVar7 = 0x14;
      lVar6 = uVar10 * 0x14;
      lVar12 = (lVar11 - 5U >> 2) + 1;
      lVar8 = lVar12 * 4 + 1;
      do {
        lVar4 = *param_1;
        fVar14 = *(float *)(lVar4 + lVar7);
        fVar3 = *(float *)(lVar4 + 4 + lVar7);
        if (fVar13 < fVar14) {
          *(float *)(lVar4 + lVar6) = fVar13;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
          *(float *)(*param_1 + 4 + lVar6) = fVar14;
          lVar6 = lVar6 + 0x14;
        }
        lVar4 = *param_1;
        fVar14 = *(float *)(lVar4 + 0x14 + lVar7);
        fVar13 = *(float *)(lVar4 + 0x18 + lVar7);
        if (fVar3 < fVar14) {
          *(float *)(lVar4 + lVar6) = fVar3;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
          *(float *)(*param_1 + 4 + lVar6) = fVar14;
          lVar6 = lVar6 + 0x14;
        }
        lVar4 = *param_1;
        fVar14 = *(float *)(lVar4 + 0x28 + lVar7);
        fVar3 = *(float *)(lVar4 + 0x2c + lVar7);
        if (fVar13 < fVar14) {
          *(float *)(lVar4 + lVar6) = fVar13;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
          *(float *)(*param_1 + 4 + lVar6) = fVar14;
          lVar6 = lVar6 + 0x14;
        }
        lVar4 = *param_1;
        fVar14 = *(float *)(lVar4 + 0x3c + lVar7);
        fVar13 = *(float *)(lVar4 + 0x40 + lVar7);
        if (fVar3 < fVar14) {
          *(float *)(lVar4 + lVar6) = fVar3;
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + 1;
          *(float *)(*param_1 + 4 + lVar6) = fVar14;
          lVar6 = lVar6 + 0x14;
        }
        lVar7 = lVar7 + 0x50;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (lVar11 <= lVar8) goto LAB_145069565;
    }
    lVar7 = uVar10 * 0x14;
    lVar6 = lVar8 * 0x14;
    lVar11 = lVar11 - lVar8;
    fVar14 = fVar13;
    do {
      lVar8 = *param_1;
      fVar3 = *(float *)(lVar8 + lVar6);
      fVar13 = *(float *)(lVar8 + 4 + lVar6);
      if (fVar14 < fVar3) {
        *(float *)(lVar8 + lVar7) = fVar14;
        uVar9 = uVar9 + 1;
        *(float *)(lVar7 + 4 + *param_1) = fVar3;
        lVar7 = lVar7 + 0x14;
      }
      lVar6 = lVar6 + 0x14;
      lVar11 = lVar11 + -1;
      fVar14 = fVar13;
    } while (lVar11 != 0);
  }
LAB_145069565:
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < (int)uVar9) {
    FUN_14506e2d0(param_1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (((int)uVar5 < (int)uVar9) || ((int)uVar9 < (int)uVar5)) {
    *(uint *)(param_1 + 1) = uVar9;
    uVar5 = uVar9;
  }
  if (fVar13 < param_3) {
    iVar1 = uVar5 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    pfVar2 = (float *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = fVar13;
      pfVar2[1] = param_3;
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2[4] = -NAN;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}



// FUNCTION 145069610 FUN_145069610 body=572 status=ok
// SIG undefined FUN_145069610(void)

void FUN_145069610(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  lVar12 = (longlong)(int)param_1[1];
  lVar9 = 0;
  iVar8 = (int)param_1[1] / 2;
  lVar11 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = lVar12 * 0x14;
    lVar13 = lVar9;
    do {
      lVar4 = *param_1;
      lVar1 = lVar10 + -0x14;
      uVar3 = *(undefined4 *)(lVar13 + 0x10 + lVar4);
      uVar5 = ((undefined8 *)(lVar1 + lVar4))[1];
      uVar6 = *(undefined8 *)(lVar13 + lVar4);
      uVar7 = ((undefined8 *)(lVar13 + lVar4))[1];
      *(undefined8 *)(lVar13 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
      ((undefined8 *)(lVar13 + lVar4))[1] = uVar5;
      *(undefined4 *)(lVar13 + 0x10 + lVar4) = *(undefined4 *)(lVar10 + -4 + lVar4);
      *(undefined8 *)(lVar1 + lVar4) = uVar6;
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar7;
      *(undefined4 *)(lVar10 + -4 + lVar4) = uVar3;
      lVar11 = lVar11 + -1;
      lVar10 = lVar1;
      lVar13 = lVar13 + 0x14;
    } while (lVar11 != 0);
  }
  lVar11 = lVar9;
  if (3 < lVar12) {
    fVar15 = param_2 * 2.0;
    lVar10 = (lVar12 - 4U >> 2) + 1;
    lVar11 = lVar10 * 4;
    do {
      lVar13 = *param_1;
      fVar2 = *(float *)(lVar9 + lVar13);
      *(float *)(lVar9 + lVar13) = fVar15 - *(float *)(lVar9 + 4 + lVar13);
      *(float *)(lVar9 + 4 + lVar13) = fVar15 - fVar2;
      fVar2 = *(float *)(lVar9 + 8 + lVar13);
      *(float *)(lVar9 + 0xc + lVar13) = fVar2 * fVar15 + *(float *)(lVar9 + 0xc + lVar13);
      *(float *)(lVar9 + 8 + lVar13) = -fVar2;
      lVar13 = *param_1;
      fVar14 = fVar15 - *(float *)(lVar9 + 0x14 + lVar13);
      *(float *)(lVar9 + 0x14 + lVar13) = fVar14;
      fVar2 = *(float *)(lVar9 + 0x18 + lVar13);
      *(float *)(lVar9 + 0x18 + lVar13) = fVar14;
      *(float *)(lVar9 + 0x14 + lVar13) = fVar15 - fVar2;
      fVar2 = *(float *)(lVar9 + 0x1c + lVar13);
      *(float *)(lVar9 + 0x20 + lVar13) = fVar2 * fVar15 + *(float *)(lVar9 + 0x20 + lVar13);
      *(float *)(lVar9 + 0x1c + lVar13) = -fVar2;
      lVar13 = *param_1;
      fVar2 = *(float *)(lVar9 + 0x28 + lVar13);
      *(float *)(lVar9 + 0x28 + lVar13) = fVar15 - *(float *)(lVar9 + 0x2c + lVar13);
      *(float *)(lVar9 + 0x2c + lVar13) = fVar15 - fVar2;
      fVar2 = *(float *)(lVar9 + 0x30 + lVar13);
      *(float *)(lVar9 + 0x34 + lVar13) = fVar2 * fVar15 + *(float *)(lVar9 + 0x34 + lVar13);
      *(float *)(lVar9 + 0x30 + lVar13) = -fVar2;
      lVar13 = *param_1;
      fVar2 = *(float *)(lVar9 + 0x3c + lVar13);
      *(float *)(lVar9 + 0x3c + lVar13) = fVar15 - *(float *)(lVar9 + 0x40 + lVar13);
      *(float *)(lVar9 + 0x40 + lVar13) = fVar15 - fVar2;
      fVar2 = *(float *)(lVar9 + 0x44 + lVar13);
      *(float *)(lVar9 + 0x48 + lVar13) = fVar2 * fVar15 + *(float *)(lVar9 + 0x48 + lVar13);
      *(float *)(lVar9 + 0x44 + lVar13) = -fVar2;
      lVar9 = lVar9 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lVar11 < lVar12) {
    param_2 = param_2 * 2.0;
    lVar9 = lVar11 * 0x14;
    lVar12 = lVar12 - lVar11;
    do {
      lVar11 = *param_1;
      fVar15 = *(float *)(lVar9 + 8 + lVar11);
      fVar2 = *(float *)(lVar9 + lVar11);
      *(float *)(lVar9 + lVar11) = param_2 - *(float *)(lVar9 + 4 + lVar11);
      *(float *)(lVar9 + 4 + lVar11) = param_2 - fVar2;
      *(float *)(lVar9 + 8 + lVar11) = -fVar15;
      *(float *)(lVar9 + 0xc + lVar11) = fVar15 * param_2 + *(float *)(lVar9 + 0xc + lVar11);
      lVar9 = lVar9 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 145069850 FUN_145069850 body=593 status=ok
// SIG undefined FUN_145069850(void)

void FUN_145069850(longlong *param_1,float param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    fVar7 = (param_5 - param_4) / (param_3 - param_2);
    param_4 = param_4 - fVar7 * param_2;
    if ((0.0001 <= ABS(1.0 - fVar7)) || (0.0001 <= ABS(param_4))) {
      lVar3 = 0;
      fVar8 = 1.0 / fVar7;
      lVar5 = lVar3;
      if (3 < lVar2) {
        lVar4 = (lVar2 - 4U >> 2) + 1;
        lVar5 = lVar4 * 4;
        do {
          lVar1 = *param_1;
          *(float *)(lVar3 + lVar1) = fVar7 * *(float *)(lVar3 + lVar1) + param_4;
          *(float *)(lVar3 + 4 + lVar1) = fVar7 * *(float *)(lVar3 + 4 + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 8 + lVar1);
          *(float *)(lVar3 + 8 + lVar1) = fVar6;
          *(float *)(lVar3 + 0xc + lVar1) = *(float *)(lVar3 + 0xc + lVar1) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x14 + lVar1) = fVar7 * *(float *)(lVar3 + 0x14 + lVar1) + param_4;
          *(float *)(lVar3 + 0x18 + lVar1) = fVar7 * *(float *)(lVar3 + 0x18 + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 0x1c + lVar1);
          *(float *)(lVar3 + 0x1c + lVar1) = fVar6;
          *(float *)(lVar3 + 0x20 + lVar1) = *(float *)(lVar3 + 0x20 + lVar1) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar1 + 0x28 + lVar3) = fVar7 * *(float *)(lVar1 + 0x28 + lVar3) + param_4;
          *(float *)(lVar1 + 0x2c + lVar3) = fVar7 * *(float *)(lVar1 + 0x2c + lVar3) + param_4;
          fVar6 = fVar8 * *(float *)(lVar1 + 0x30 + lVar3);
          *(float *)(lVar1 + 0x30 + lVar3) = fVar6;
          *(float *)(lVar1 + 0x34 + lVar3) = *(float *)(lVar1 + 0x34 + lVar3) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar1 + 0x3c + lVar3) = fVar7 * *(float *)(lVar1 + 0x3c + lVar3) + param_4;
          *(float *)(lVar1 + 0x40 + lVar3) = fVar7 * *(float *)(lVar1 + 0x40 + lVar3) + param_4;
          fVar6 = fVar8 * *(float *)(lVar1 + 0x44 + lVar3);
          *(float *)(lVar1 + 0x44 + lVar3) = fVar6;
          *(float *)(lVar1 + 0x48 + lVar3) = *(float *)(lVar1 + 0x48 + lVar3) - fVar6 * param_4;
          lVar3 = lVar3 + 0x50;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar5 < lVar2) {
        lVar3 = lVar5 * 0x14;
        lVar2 = lVar2 - lVar5;
        do {
          lVar5 = *param_1;
          fVar6 = fVar8 * *(float *)(lVar3 + 8 + lVar5);
          *(float *)(lVar3 + 8 + lVar5) = fVar6;
          *(float *)(lVar3 + lVar5) = fVar7 * *(float *)(lVar3 + lVar5) + param_4;
          *(float *)(lVar3 + 4 + lVar5) = fVar7 * *(float *)(lVar3 + 4 + lVar5) + param_4;
          *(float *)(lVar3 + 0xc + lVar5) = *(float *)(lVar3 + 0xc + lVar5) - fVar6 * param_4;
          lVar3 = lVar3 + 0x14;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 145069ab0 FUN_145069ab0 body=386 status=ok
// SIG undefined FUN_145069ab0(void)

void FUN_145069ab0(longlong *param_1,float param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar2 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    fVar6 = (param_5 - param_4) / (param_3 - param_2);
    param_4 = param_4 - fVar6 * param_2;
    if ((0.0001 <= ABS(1.0 - param_4)) || (0.0001 <= ABS(fVar6))) {
      lVar3 = 0;
      lVar5 = lVar3;
      if (3 < lVar2) {
        lVar4 = (lVar2 - 4U >> 2) + 1;
        lVar5 = lVar4 * 4;
        do {
          lVar1 = *param_1;
          *(float *)(lVar3 + 8 + lVar1) = fVar6 * *(float *)(lVar3 + 8 + lVar1);
          *(float *)(lVar3 + 0xc + lVar1) = fVar6 * *(float *)(lVar3 + 0xc + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x1c + lVar1) = fVar6 * *(float *)(lVar3 + 0x1c + lVar1);
          *(float *)(lVar3 + 0x20 + lVar1) = fVar6 * *(float *)(lVar3 + 0x20 + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x30 + lVar1) = fVar6 * *(float *)(lVar3 + 0x30 + lVar1);
          *(float *)(lVar3 + 0x34 + lVar1) = fVar6 * *(float *)(lVar3 + 0x34 + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x44 + lVar1) = fVar6 * *(float *)(lVar3 + 0x44 + lVar1);
          *(float *)(lVar3 + 0x48 + lVar1) = fVar6 * *(float *)(lVar3 + 0x48 + lVar1) + param_4;
          lVar3 = lVar3 + 0x50;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar5 < lVar2) {
        lVar3 = lVar5 * 0x14;
        lVar2 = lVar2 - lVar5;
        do {
          lVar5 = *param_1;
          *(float *)(lVar3 + 8 + lVar5) = fVar6 * *(float *)(lVar3 + 8 + lVar5);
          *(float *)(lVar3 + 0xc + lVar5) = fVar6 * *(float *)(lVar3 + 0xc + lVar5) + param_4;
          lVar3 = lVar3 + 0x14;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 145069c40 FUN_145069c40 body=476 status=ok
// SIG undefined FUN_145069c40(void)

void FUN_145069c40(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  if ((int)param_1[1] == 0) {
    return;
  }
  *(float *)*param_1 = *(float *)*param_1 - param_2;
  lVar4 = (longlong)(int)param_1[1];
  if (1 < lVar4) {
    lVar6 = 1;
    if (4 < lVar4) {
      lVar5 = 0x14;
      lVar3 = (lVar4 - 5U >> 2) + 1;
      lVar6 = lVar3 * 4 + 1;
      do {
        lVar2 = *param_1;
        fVar1 = *(float *)(lVar5 + -0x10 + lVar2);
        fVar7 = (*(float *)(lVar5 + lVar2) - fVar1) / 2.0;
        if (param_2 <= fVar7) {
          fVar7 = param_2;
        }
        *(float *)(lVar5 + -0x10 + lVar2) = fVar1 + fVar7;
        *(float *)(lVar5 + lVar2) = *(float *)(lVar5 + lVar2) - fVar7;
        lVar2 = *param_1;
        fVar1 = *(float *)(lVar5 + 4 + lVar2);
        fVar7 = *(float *)(lVar5 + 0x14 + lVar2);
        fVar8 = (fVar7 - fVar1) / 2.0;
        if (param_2 <= fVar8) {
          fVar8 = param_2;
        }
        *(float *)(lVar5 + 4 + lVar2) = fVar1 + fVar8;
        *(float *)(lVar5 + 0x14 + lVar2) = fVar7 - fVar8;
        lVar2 = *param_1;
        fVar1 = *(float *)(lVar5 + 0x18 + lVar2);
        fVar7 = (*(float *)(lVar5 + 0x28 + lVar2) - fVar1) / 2.0;
        if (param_2 <= fVar7) {
          fVar7 = param_2;
        }
        *(float *)(lVar5 + 0x18 + lVar2) = fVar1 + fVar7;
        *(float *)(lVar5 + 0x28 + lVar2) = *(float *)(lVar5 + 0x28 + lVar2) - fVar7;
        lVar2 = *param_1;
        fVar1 = *(float *)(lVar2 + 0x2c + lVar5);
        fVar7 = (*(float *)(lVar2 + 0x3c + lVar5) - fVar1) / 2.0;
        if (param_2 <= fVar7) {
          fVar7 = param_2;
        }
        *(float *)(lVar2 + 0x2c + lVar5) = fVar1 + fVar7;
        *(float *)(lVar2 + 0x3c + lVar5) = *(float *)(lVar2 + 0x3c + lVar5) - fVar7;
        lVar5 = lVar5 + 0x50;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      if (lVar4 <= lVar6) goto LAB_145069e00;
    }
    lVar3 = lVar6 * 0x14;
    lVar4 = lVar4 - lVar6;
    do {
      lVar6 = *param_1;
      fVar1 = *(float *)(lVar3 + -0x10 + lVar6);
      fVar7 = (*(float *)(lVar3 + lVar6) - fVar1) / 2.0;
      if (param_2 <= fVar7) {
        fVar7 = param_2;
      }
      *(float *)(lVar3 + -0x10 + lVar6) = fVar1 + fVar7;
      *(float *)(lVar3 + lVar6) = *(float *)(lVar3 + lVar6) - fVar7;
      lVar3 = lVar3 + 0x14;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
LAB_145069e00:
  *(float *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x14) =
       param_2 + *(float *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x14);
  return;
}



// FUNCTION 145069e20 FUN_145069e20 body=25 status=ok
// SIG undefined FUN_145069e20(void)

void FUN_145069e20(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_14506dfa0(param_1,local_res10);
  return;
}



// FUNCTION 145069e40 FUN_145069e40 body=104 status=ok
// SIG undefined FUN_145069e40(void)

void FUN_145069e40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_14506e3e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 0x14);
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}



// FUNCTION 145069eb0 FUN_145069eb0 body=671 status=ok
// SIG undefined FUN_145069eb0(void)

void FUN_145069eb0(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  
  uVar9 = 0;
  uVar13 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar19 = (int)param_2[1];
  lVar12 = (longlong)iVar19;
  if (iVar19 != 0) {
    pfVar17 = (float *)*param_2;
    if ((*pfVar17 < param_3) || (param_4 < pfVar17[lVar12 * 5 + -4])) {
      uVar14 = uVar9;
      if (0 < iVar19) {
        do {
          if (param_3 < pfVar17[1]) {
            fVar21 = pfVar17[1];
            fVar4 = pfVar17[2];
            fVar5 = pfVar17[3];
            fVar2 = pfVar17[4];
            iVar16 = (int)param_1[1] + 1;
            fVar20 = *pfVar17;
            if (*pfVar17 <= param_3) {
              fVar20 = param_3;
            }
            if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar16) {
              FUN_14506e1d0(fVar20,&PTR_vftable_14c6e47a0,(longlong)iVar16);
            }
            pfVar17 = (float *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
            if (pfVar17 != (float *)0x0) {
              *pfVar17 = fVar20;
              pfVar17[1] = fVar21;
              pfVar17[2] = fVar4;
              pfVar17[3] = fVar5;
              pfVar17[4] = fVar2;
            }
            *(int *)(param_1 + 1) = iVar16;
            uVar13 = (int)uVar14 + 1;
            break;
          }
          uVar13 = (int)uVar14 + 1;
          uVar9 = uVar9 + 1;
          pfVar17 = pfVar17 + 5;
          uVar14 = (ulonglong)uVar13;
        } while ((longlong)uVar9 < lVar12);
      }
      iVar16 = (int)param_2[1];
      iVar18 = -1;
      if (-1 < iVar16 + -1) {
        do {
          iVar8 = (iVar16 + iVar18) / 2;
          iVar7 = iVar8;
          if (param_4 < *(float *)(*param_2 + 4 + (longlong)iVar8 * 0x14)) {
            iVar7 = iVar18;
            iVar16 = iVar8;
          }
          iVar18 = iVar7;
        } while (iVar18 < iVar16 + -1);
      }
      if (iVar19 + -1 < iVar16) {
        iVar16 = iVar19 + -1;
      }
      if ((int)uVar13 < iVar16) {
        uVar11 = iVar16 - uVar13;
        lVar12 = param_1[1];
        iVar19 = (int)lVar12 + uVar11;
        puVar15 = (undefined8 *)(*param_2 + (longlong)(int)uVar13 * 0x14);
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar19) {
          FUN_14506e2d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        }
        if (0 < (int)uVar11) {
          uVar9 = (ulonglong)uVar11;
          puVar10 = (undefined8 *)(*param_1 + (longlong)(int)lVar12 * 0x14);
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar6 = puVar15[1];
              *puVar10 = *puVar15;
              puVar10[1] = uVar6;
              puVar1 = puVar15 + 2;
              puVar15 = (undefined8 *)((longlong)puVar15 + 0x14);
              *(undefined4 *)(puVar10 + 2) = *(undefined4 *)puVar1;
            }
            uVar9 = uVar9 - 1;
            puVar10 = (undefined8 *)((longlong)puVar10 + 0x14);
          } while (uVar9 != 0);
        }
        *(int *)(param_1 + 1) = iVar19;
      }
      else if (iVar16 < (int)uVar13) {
        return;
      }
      pfVar17 = (float *)(*param_2 + (longlong)iVar16 * 0x14);
      fVar2 = *pfVar17;
      uVar6 = *(undefined8 *)(pfVar17 + 2);
      uVar3 = *(undefined4 *)(*param_2 + 0x10 + (longlong)iVar16 * 0x14);
      if (fVar2 < param_4) {
        fVar21 = pfVar17[1];
        if (param_4 <= pfVar17[1]) {
          fVar21 = param_4;
        }
        iVar19 = (int)param_1[1] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar19) {
          FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        }
        puVar15 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = CONCAT44(fVar21,fVar2);
          puVar15[1] = uVar6;
          *(undefined4 *)(puVar15 + 2) = uVar3;
        }
        *(int *)(param_1 + 1) = iVar19;
      }
    }
    else if (param_2 != param_1) {
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar19) {
        FUN_14506e3e0(*pfVar17,&PTR_vftable_14c6e47a0,lVar12);
      }
      FUN_144b3d470(*param_1,pfVar17,lVar12 * 0x14);
      *(int *)(param_1 + 1) = iVar19;
    }
  }
  return;
}



// FUNCTION 14506a150 FUN_14506a150 body=143 status=ok
// SIG undefined FUN_14506a150(void)

void FUN_14506a150(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (1 < (int)param_1[1]) {
    uVar4 = 0;
    lVar3 = 0x14;
    iVar5 = 1;
    uVar6 = uVar4;
    uVar7 = uVar4;
    do {
      lVar1 = *param_1;
      if (*(float *)(lVar1 + 4 + uVar6) == *(float *)(lVar3 + lVar1)) {
        *(undefined4 *)(lVar1 + 4 + uVar6) = *(undefined4 *)(lVar3 + 4 + lVar1);
      }
      else {
        uVar2 = ((undefined8 *)(lVar3 + lVar1))[1];
        uVar7 = (ulonglong)((int)uVar7 + 1);
        uVar4 = uVar4 + 1;
        uVar6 = uVar4 * 0x14;
        *(undefined8 *)(lVar1 + uVar6) = *(undefined8 *)(lVar3 + lVar1);
        ((undefined8 *)(lVar1 + uVar6))[1] = uVar2;
        *(undefined4 *)(lVar1 + 0x10 + uVar6) = *(undefined4 *)(lVar3 + 0x10 + lVar1);
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x14;
    } while (iVar5 < (int)param_1[1]);
    *(int *)(param_1 + 1) = (int)uVar7 + 1;
  }
  return;
}



// FUNCTION 14506a1e0 FUN_14506a1e0 body=205 status=ok
// SIG undefined FUN_14506a1e0(void)

void FUN_14506a1e0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  if ((int)param_1[1] != 0) {
    *(undefined4 *)(*param_1 + 0xc) = param_2;
    *(undefined4 *)(*param_1 + 8) = 0;
    *(undefined4 *)(*param_1 + 0x10) = param_3;
  }
  if (1 < (int)param_1[1]) {
    iVar6 = 1;
    lVar4 = 0x14;
    uVar5 = uVar3;
    uVar7 = uVar3;
    do {
      lVar1 = *param_1;
      if (*(float *)(lVar1 + 4 + uVar5) == *(float *)(lVar4 + lVar1)) {
        *(undefined4 *)(lVar1 + 4 + uVar5) = *(undefined4 *)(lVar4 + 4 + lVar1);
      }
      else {
        uVar2 = ((undefined8 *)(lVar4 + lVar1))[1];
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar7 = uVar7 + 1;
        uVar5 = uVar7 * 0x14;
        *(undefined8 *)(lVar1 + uVar5) = *(undefined8 *)(lVar4 + lVar1);
        ((undefined8 *)(lVar1 + uVar5))[1] = uVar2;
        *(undefined4 *)(lVar1 + 0x10 + uVar5) = *(undefined4 *)(lVar4 + 0x10 + lVar1);
        *(undefined4 *)(uVar5 + 0xc + *param_1) = param_2;
        *(undefined4 *)(uVar5 + 8 + *param_1) = 0;
        *(undefined4 *)(uVar5 + 0x10 + *param_1) = param_3;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 0x14;
    } while (iVar6 < (int)param_1[1]);
    *(int *)(param_1 + 1) = (int)uVar3 + 1;
  }
  return;
}



// FUNCTION 14506a2b0 FUN_14506a2b0 body=35 status=ok
// SIG undefined FUN_14506a2b0(void)

void FUN_14506a2b0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(int)param_1[1];
  if (0 < lVar2) {
    lVar1 = 0;
    do {
      *(undefined4 *)(lVar1 + 0x10 + *param_1) = param_2;
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x14;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14506a2e0 FUN_14506a2e0 body=231 status=ok
// SIG undefined FUN_14506a2e0(void)

void FUN_14506a2e0(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = 0;
  lVar4 = (longlong)((int)param_1[1] + -1);
  lVar6 = lVar3;
  if (3 < lVar4) {
    lVar5 = (lVar4 - 4U >> 2) + 1;
    lVar6 = lVar5 * 4;
    do {
      lVar2 = *param_1;
      fVar1 = *(float *)(lVar3 + 0x14 + lVar2);
      if (fVar1 - *(float *)(lVar3 + 4 + lVar2) < param_2) {
        *(float *)(lVar3 + 4 + lVar2) = fVar1;
      }
      lVar2 = *param_1;
      fVar1 = *(float *)(lVar3 + 0x28 + lVar2);
      if (fVar1 - *(float *)(lVar3 + 0x18 + lVar2) < param_2) {
        *(float *)(lVar3 + 0x18 + lVar2) = fVar1;
      }
      lVar2 = *param_1;
      fVar1 = *(float *)(lVar3 + 0x3c + lVar2);
      if (fVar1 - *(float *)(lVar3 + 0x2c + lVar2) < param_2) {
        *(float *)(lVar3 + 0x2c + lVar2) = fVar1;
      }
      lVar2 = *param_1;
      fVar1 = *(float *)(lVar3 + 0x50 + lVar2);
      if (fVar1 - *(float *)(lVar3 + 0x40 + lVar2) < param_2) {
        *(float *)(lVar3 + 0x40 + lVar2) = fVar1;
      }
      lVar3 = lVar3 + 0x50;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar6 < lVar4) {
    lVar3 = lVar6 * 0x14;
    lVar4 = lVar4 - lVar6;
    do {
      lVar6 = *param_1;
      fVar1 = *(float *)(lVar3 + 0x14 + lVar6);
      if (fVar1 - *(float *)(lVar3 + 4 + lVar6) < param_2) {
        *(float *)(lVar3 + 4 + lVar6) = fVar1;
      }
      lVar3 = lVar3 + 0x14;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14506a3d0 FUN_14506a3d0 body=109 status=ok
// SIG undefined FUN_14506a3d0(void)

void FUN_14506a3d0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x14);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 14506a440 FUN_14506a440 body=225 status=ok
// SIG undefined FUN_14506a440(void)

void FUN_14506a440(longlong *param_1,float *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*param_2 == param_2[1]) {
    return;
  }
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  if (iVar2 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) != 0) goto LAB_14506a4ee;
  }
  else {
    lVar3 = *param_1;
    if ((((*(float *)(lVar3 + -0xc + lVar5 * 0x14) == param_2[2]) &&
         (*(float *)(lVar3 + -8 + lVar5 * 0x14) == param_2[3])) &&
        (*(float *)(lVar3 + -0x10 + lVar5 * 0x14) == *param_2)) &&
       (*(float *)(lVar3 + -4 + lVar5 * 0x14) == param_2[4])) {
      *(float *)(lVar3 + -0x10 + lVar5 * 0x14) = param_2[1];
      return;
    }
    if (iVar2 + 1 <= (int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff)) goto LAB_14506a4ee;
  }
  FUN_14506e1d0(param_1,&PTR_vftable_14c6e47a0,(longlong)(iVar2 + 1));
LAB_14506a4ee:
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar4;
    *(float *)(puVar1 + 2) = param_2[4];
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  return;
}



// FUNCTION 14506a530 FUN_14506a530 body=3397 status=ok
// SIG undefined FUN_14506a530(void)

void FUN_14506a530(longlong *param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 *local_128;
  uint local_120;
  uint local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  
  iVar27 = (int)param_1[1];
  if (-1 < iVar27 + -1) {
    iVar26 = iVar27;
    iVar24 = -1;
    do {
      iVar13 = (iVar24 + iVar26) / 2;
      iVar30 = iVar13;
      if (*param_2 < *(float *)(*param_1 + 4 + (longlong)iVar13 * 0x14)) {
        iVar30 = iVar24;
        iVar26 = iVar13;
      }
      iVar24 = iVar30;
    } while (iVar30 < iVar26 + -1);
    if (iVar26 != iVar27) {
      uVar22 = 0x80000000;
      puVar23 = (undefined4 *)0x0;
      uVar19 = 0;
      local_c0 = (longlong)iVar26;
      local_128 = (undefined4 *)0x0;
      local_120 = 0;
      local_11c = 0x80000000;
      iVar27 = iVar26;
      local_b8 = local_c0;
      do {
        local_100 = *param_1;
        local_f8 = local_c0 * 5;
        fVar32 = *(float *)(local_100 + local_c0 * 0x14);
        uVar20 = uVar19;
        if (local_c0 == local_b8) {
          if (param_2[1] <= fVar32) {
            uVar20 = uVar19 + 1;
            if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
              FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
              puVar23 = local_128;
              uVar19 = local_120;
              uVar22 = local_11c;
            }
            pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
            iVar27 = iVar26;
            if (pfVar2 != (float *)0x0) {
              fVar32 = param_2[1];
              fVar33 = param_2[2];
              fVar29 = param_2[3];
              *pfVar2 = *param_2;
              pfVar2[1] = fVar32;
              pfVar2[2] = fVar33;
              pfVar2[3] = fVar29;
              pfVar2[4] = param_2[4];
            }
            goto LAB_14506b0d4;
          }
          fStack_114 = *param_2;
          if (fVar32 <= fStack_114) {
            pfVar2 = (float *)(local_100 + local_c0 * 0x14);
            local_118 = *pfVar2;
            fStack_110 = pfVar2[2];
            fStack_10c = pfVar2[3];
            fVar33 = *(float *)(local_100 + 0x10 + local_c0 * 0x14);
            if (local_118 != fStack_114) {
              if (uVar19 == 0) goto LAB_14506a693;
              lVar14 = (longlong)(int)(uVar19 - 1);
              if ((((float)puVar23[lVar14 * 5 + 2] != fStack_110) ||
                  ((float)puVar23[lVar14 * 5 + 3] != fStack_10c)) ||
                 (((float)puVar23[lVar14 * 5 + 1] != local_118 ||
                  ((float)puVar23[lVar14 * 5 + 4] != fVar33)))) goto LAB_14506a80a;
              puVar23[lVar14 * 5 + 1] = fStack_114;
            }
          }
          else {
            local_118 = *param_2;
            fStack_110 = param_2[2];
            fStack_10c = param_2[3];
            fVar33 = param_2[4];
            fStack_114 = fVar32;
            if (local_118 != fVar32) {
              if (uVar19 != 0) goto LAB_14506a7c6;
LAB_14506a693:
              if ((uVar22 & 0x7fffffff) == 0) {
                FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                puVar23 = local_128;
                uVar19 = local_120;
                uVar22 = local_11c;
              }
              puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = CONCAT44(fStack_114,local_118);
                puVar17[1] = CONCAT44(fStack_10c,fStack_110);
                *(float *)(puVar17 + 2) = fVar33;
              }
              uVar20 = 1;
              local_120 = uVar20;
            }
          }
        }
        else {
          fVar33 = param_2[4];
          fStack_114 = param_2[1];
          fStack_110 = param_2[2];
          fStack_10c = param_2[3];
          if (param_2[1] < fVar32) {
            local_118 = *(float *)(local_100 + -0x10 + local_c0 * 0x14);
            if (local_118 != fStack_114) {
              if (uVar19 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = local_118;
                  pfVar2[1] = fStack_114;
                  pfVar2[2] = fStack_110;
                  pfVar2[3] = fStack_10c;
                  pfVar2[4] = fVar33;
                }
                uVar20 = 1;
              }
              else {
                lVar14 = (longlong)(int)(uVar19 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
                     ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == local_118)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar33)) {
                  puVar23[lVar14 * 5 + 1] = fStack_114;
                }
                else {
                  uVar20 = uVar19 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
                    puVar23 = local_128;
                    uVar19 = local_120;
                    uVar22 = local_11c;
                  }
                  pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
                  if (pfVar2 != (float *)0x0) {
                    *pfVar2 = local_118;
                    pfVar2[1] = fStack_114;
                    pfVar2[2] = fStack_110;
                    pfVar2[3] = fStack_10c;
                    pfVar2[4] = fVar33;
                  }
                }
              }
            }
            goto LAB_14506b0d4;
          }
          local_118 = *(float *)(local_100 + -0x10 + local_c0 * 0x14);
          fStack_114 = fVar32;
          if (local_118 != fVar32) {
            if (uVar19 == 0) goto LAB_14506a693;
LAB_14506a7c6:
            lVar14 = (longlong)(int)(uVar19 - 1);
            fStack_114 = fVar32;
            if ((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
                ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
               (((float)puVar23[lVar14 * 5 + 1] == local_118 &&
                ((float)puVar23[lVar14 * 5 + 4] == fVar33)))) {
              puVar23[lVar14 * 5 + 1] = fVar32;
            }
            else {
LAB_14506a80a:
              uVar20 = uVar19 + 1;
              if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
                FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
                puVar23 = local_128;
                uVar19 = local_120;
                uVar22 = local_11c;
              }
              puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
              local_120 = uVar20;
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = CONCAT44(fStack_114,local_118);
                puVar17[1] = CONCAT44(fStack_10c,fStack_110);
                *(float *)(puVar17 + 2) = fVar33;
              }
            }
          }
        }
        uVar7 = *(undefined8 *)(local_100 + local_f8 * 4 + 8);
        iVar24 = *(int *)(local_100 + 0x10 + local_f8 * 4);
        fVar32 = *(float *)(local_100 + local_f8 * 4);
        if (fVar32 <= *param_2) {
          fVar32 = *param_2;
        }
        fVar33 = *(float *)(local_100 + 4 + local_f8 * 4);
        if (param_2[1] <= fVar33) {
          fVar33 = param_2[1];
        }
        fVar29 = param_2[4];
        uVar8 = *(undefined8 *)(param_2 + 2);
        local_f0 = CONCAT44(fVar33,fVar32);
        local_d8 = CONCAT44(fVar33,fVar32);
        uStack_e8 = uVar8;
        local_e0 = fVar29;
        uStack_d0 = uVar7;
        local_c8 = iVar24;
        if (param_2[2] == *(float *)(local_100 + 8 + local_f8 * 4)) {
          fVar32 = *(float *)(local_100 + 0xc + local_f8 * 4);
          puVar17 = &local_f0;
          if (fVar32 < param_2[3] || fVar32 == param_2[3]) {
            puVar17 = &local_d8;
          }
          FUN_14506a440(&local_128,puVar17);
          puVar23 = local_128;
          uVar19 = local_120;
          uVar22 = local_11c;
        }
        else {
          uStack_d0._0_4_ = (float)uVar7;
          fVar11 = (float)uStack_d0;
          uStack_e8._0_4_ = (float)uVar8;
          fVar9 = (float)uStack_e8;
          uStack_e8._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
          fVar10 = uStack_e8._4_4_;
          uStack_d0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
          fVar12 = uStack_d0._4_4_;
          fVar31 = (uStack_e8._4_4_ - uStack_d0._4_4_) / ((float)uStack_d0 - (float)uStack_e8);
          if (fVar31 <= fVar32) {
            fVar31 = fVar32;
          }
          if (fVar33 <= fVar31) {
            fVar31 = fVar33;
          }
          if ((float)uStack_d0 <= (float)uStack_e8) {
            local_f0 = CONCAT44(fVar31,fVar32);
            local_d8 = CONCAT44(fVar33,fVar31);
            uVar21 = uVar20;
            if (fVar32 != fVar31) {
              if (uVar20 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar16 = puVar23 + (longlong)(int)uVar19 * 5;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = (undefined4)local_f0;
                  puVar16[1] = local_f0._4_4_;
                  puVar16[2] = (float)uStack_e8;
                  puVar16[3] = uStack_e8._4_4_;
                  puVar16[4] = fVar29;
                }
                uVar21 = 1;
                local_120 = uVar21;
                uVar8 = uStack_e8;
              }
              else {
                lVar14 = (longlong)(int)(uVar20 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == (float)uStack_e8) &&
                     ((float)puVar23[lVar14 * 5 + 3] == uStack_e8._4_4_)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == fVar32)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar29)) {
                  puVar23[lVar14 * 5 + 1] = fVar31;
                }
                else {
                  uVar21 = uVar20 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar21) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
                    puVar23 = local_128;
                    uVar20 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar16 = puVar23 + (longlong)(int)uVar20 * 5;
                  local_120 = uVar21;
                  uVar8 = uStack_e8;
                  if (puVar16 != (undefined4 *)0x0) {
                    *puVar16 = (undefined4)local_f0;
                    puVar16[1] = local_f0._4_4_;
                    puVar16[2] = (float)uStack_e8;
                    puVar16[3] = uStack_e8._4_4_;
                    puVar16[4] = fVar29;
                  }
                }
              }
            }
            uStack_e8 = uVar8;
            uVar19 = uVar21;
            if (fVar31 != fVar33) {
              if (uVar21 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (puVar17 != (undefined8 *)0x0) {
                  *puVar17 = local_d8;
                  puVar17[1] = uStack_d0;
                  *(int *)(puVar17 + 2) = iVar24;
                }
                uVar19 = 1;
                local_120 = uVar19;
              }
              else {
                lVar14 = (longlong)(int)(uVar21 - 1);
                if ((((float)puVar23[lVar14 * 5 + 2] == fVar11) &&
                    ((float)puVar23[lVar14 * 5 + 3] == fVar12)) &&
                   (((float)puVar23[lVar14 * 5 + 1] == fVar31 && (puVar23[lVar14 * 5 + 4] == iVar24)
                    ))) {
                  puVar23[lVar14 * 5 + 1] = fVar33;
                }
                else {
                  uVar19 = uVar21 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                    puVar23 = local_128;
                    uVar21 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar21 * 5);
                  local_120 = uVar19;
                  if (puVar17 != (undefined8 *)0x0) {
                    *puVar17 = local_d8;
                    puVar17[1] = uStack_d0;
                    *(int *)(puVar17 + 2) = iVar24;
                  }
                }
              }
            }
          }
          else {
            local_f0 = CONCAT44(fVar33,fVar31);
            local_d8 = CONCAT44(fVar31,fVar32);
            uVar21 = uVar20;
            if (fVar32 != fVar31) {
              if (uVar20 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar16 = puVar23 + (longlong)(int)uVar19 * 5;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = (undefined4)local_d8;
                  puVar16[1] = local_d8._4_4_;
                  puVar16[2] = (float)uStack_d0;
                  puVar16[3] = uStack_d0._4_4_;
                  puVar16[4] = iVar24;
                }
                uVar21 = 1;
                local_120 = uVar21;
                uVar7 = uStack_d0;
              }
              else {
                lVar14 = (longlong)(int)(uVar20 - 1);
                if ((((float)puVar23[lVar14 * 5 + 2] == (float)uStack_d0) &&
                    ((float)puVar23[lVar14 * 5 + 3] == uStack_d0._4_4_)) &&
                   (((float)puVar23[lVar14 * 5 + 1] == fVar32 && (puVar23[lVar14 * 5 + 4] == iVar24)
                    ))) {
                  puVar23[lVar14 * 5 + 1] = fVar31;
                }
                else {
                  uVar21 = uVar20 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar21) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
                    puVar23 = local_128;
                    uVar20 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar16 = puVar23 + (longlong)(int)uVar20 * 5;
                  local_120 = uVar21;
                  uVar7 = uStack_d0;
                  if (puVar16 != (undefined4 *)0x0) {
                    *puVar16 = (undefined4)local_d8;
                    puVar16[1] = local_d8._4_4_;
                    puVar16[2] = (float)uStack_d0;
                    puVar16[3] = uStack_d0._4_4_;
                    puVar16[4] = iVar24;
                  }
                }
              }
            }
            uStack_d0 = uVar7;
            uVar19 = uVar21;
            if (fVar31 != fVar33) {
              if (uVar21 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (puVar17 != (undefined8 *)0x0) {
                  *puVar17 = local_f0;
                  puVar17[1] = uStack_e8;
                  *(float *)(puVar17 + 2) = fVar29;
                }
                uVar19 = 1;
                local_120 = uVar19;
              }
              else {
                lVar14 = (longlong)(int)(uVar21 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == fVar9) &&
                     ((float)puVar23[lVar14 * 5 + 3] == fVar10)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == fVar31)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar29)) {
                  puVar23[lVar14 * 5 + 1] = fVar33;
                }
                else {
                  uVar19 = uVar21 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                    puVar23 = local_128;
                    uVar21 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar21 * 5);
                  local_120 = uVar19;
                  if (puVar17 != (undefined8 *)0x0) {
                    *puVar17 = local_f0;
                    puVar17[1] = uStack_e8;
                    *(float *)(puVar17 + 2) = fVar29;
                  }
                }
              }
            }
          }
        }
        fVar32 = param_2[1];
        fVar33 = *(float *)(local_100 + 4 + local_f8 * 4);
        uVar20 = uVar19;
        if (fVar32 < fVar33) {
          lVar14 = local_100 + local_f8 * 4;
          fStack_114 = *(float *)(lVar14 + 4);
          fStack_110 = *(float *)(lVar14 + 8);
          fStack_10c = *(float *)(lVar14 + 0xc);
          fVar29 = *(float *)(local_100 + 0x10 + local_f8 * 4);
          local_118 = fVar32;
          if (fVar32 == fStack_114) goto LAB_14506af32;
          if (uVar19 == 0) goto LAB_14506ae41;
          lVar14 = (longlong)(int)(uVar19 - 1);
          if ((((float)puVar23[lVar14 * 5 + 2] != fStack_110) ||
              ((float)puVar23[lVar14 * 5 + 3] != fStack_10c)) ||
             (((float)puVar23[lVar14 * 5 + 1] != fVar32 ||
              ((float)puVar23[lVar14 * 5 + 4] != fVar29)))) goto LAB_14506aee3;
          puVar23[lVar14 * 5 + 1] = fStack_114;
          iVar27 = iVar27 + 1;
          goto LAB_14506b0d4;
        }
        if (iVar27 == (int)param_1[1] + -1) goto LAB_14506ae19;
        iVar27 = iVar27 + 1;
        local_c0 = local_c0 + 1;
      } while( true );
    }
  }
  FUN_14506a440(param_1,param_2);
  return;
LAB_14506ae19:
  fStack_114 = param_2[1];
  fStack_110 = param_2[2];
  fStack_10c = param_2[3];
  fVar29 = param_2[4];
  local_118 = fVar33;
  if (fVar33 != fStack_114) {
    if (uVar19 == 0) {
LAB_14506ae41:
      if ((uVar22 & 0x7fffffff) == 0) {
        FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
        puVar23 = local_128;
        uVar19 = local_120;
        uVar22 = local_11c;
      }
      pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = local_118;
        pfVar2[1] = fStack_114;
        pfVar2[2] = fStack_110;
        pfVar2[3] = fStack_10c;
        pfVar2[4] = fVar29;
      }
      iVar27 = iVar27 + 1;
      uVar20 = 1;
      goto LAB_14506b0d4;
    }
    lVar14 = (longlong)(int)(uVar19 - 1);
    if ((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
        ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
       (((float)puVar23[lVar14 * 5 + 1] == fVar33 && ((float)puVar23[lVar14 * 5 + 4] == fVar29)))) {
      puVar23[lVar14 * 5 + 1] = fStack_114;
      iVar27 = iVar27 + 1;
      goto LAB_14506b0d4;
    }
LAB_14506aee3:
    uVar20 = uVar19 + 1;
    if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
      FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
      puVar23 = local_128;
      uVar19 = local_120;
      uVar22 = local_11c;
    }
    pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = local_118;
      pfVar2[1] = fStack_114;
      pfVar2[2] = fStack_110;
      pfVar2[3] = fStack_10c;
      pfVar2[4] = fVar29;
    }
  }
LAB_14506af32:
  iVar27 = iVar27 + 1;
LAB_14506b0d4:
  iVar30 = (int)param_1[1] - (iVar27 - iVar26);
  iVar24 = iVar30 + uVar20;
  iVar30 = iVar30 - iVar26;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar24) {
    FUN_14506e2d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  lVar3 = *param_1;
  lVar14 = local_b8 * 0x14;
  if (0 < iVar30) {
    puVar28 = (undefined4 *)(lVar3 + ((iVar27 - iVar26) + local_b8) * 0x14);
    puVar16 = (undefined4 *)(lVar3 + ((int)uVar20 + local_b8) * 0x14);
    if (puVar16 < puVar28) {
      if ((longlong)iVar30 * 0x14 != 0) {
        lVar18 = (longlong)puVar28 - (longlong)puVar16;
        lVar15 = ((longlong)iVar30 * 0x14 - 1U >> 2) + 1;
        do {
          *puVar16 = *(undefined4 *)(lVar18 + (longlong)puVar16);
          puVar16 = puVar16 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    else if (puVar16 != puVar28) {
      FUN_144bfb260(puVar16,puVar28,(longlong)iVar30 * 0x14);
    }
  }
  if (0 < (int)uVar20) {
    uVar25 = (ulonglong)uVar20;
    puVar16 = puVar23;
    puVar28 = (undefined4 *)(lVar3 + lVar14);
    do {
      if (puVar28 != (undefined4 *)0x0) {
        uVar4 = puVar16[1];
        uVar5 = puVar16[2];
        uVar6 = puVar16[3];
        *puVar28 = *puVar16;
        puVar28[1] = uVar4;
        puVar28[2] = uVar5;
        puVar28[3] = uVar6;
        puVar1 = puVar16 + 4;
        puVar16 = puVar16 + 5;
        puVar28[4] = *puVar1;
      }
      uVar25 = uVar25 - 1;
      puVar28 = puVar28 + 5;
    } while (uVar25 != 0);
  }
  *(int *)(param_1 + 1) = iVar24;
  if ((-1 < (int)uVar22) && (puVar23 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar23,(ulonglong)(uVar22 & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 14506b280 FUN_14506b280 body=3397 status=ok
// SIG undefined FUN_14506b280(void)

void FUN_14506b280(longlong *param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 *local_128;
  uint local_120;
  uint local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  
  iVar27 = (int)param_1[1];
  if (-1 < iVar27 + -1) {
    iVar26 = iVar27;
    iVar24 = -1;
    do {
      iVar13 = (iVar24 + iVar26) / 2;
      iVar30 = iVar13;
      if (*param_2 < *(float *)(*param_1 + 4 + (longlong)iVar13 * 0x14)) {
        iVar30 = iVar24;
        iVar26 = iVar13;
      }
      iVar24 = iVar30;
    } while (iVar30 < iVar26 + -1);
    if (iVar26 != iVar27) {
      uVar22 = 0x80000000;
      puVar23 = (undefined4 *)0x0;
      uVar19 = 0;
      local_c0 = (longlong)iVar26;
      local_128 = (undefined4 *)0x0;
      local_120 = 0;
      local_11c = 0x80000000;
      iVar27 = iVar26;
      local_b8 = local_c0;
      do {
        local_100 = *param_1;
        local_f8 = local_c0 * 5;
        fVar32 = *(float *)(local_100 + local_c0 * 0x14);
        uVar20 = uVar19;
        if (local_c0 == local_b8) {
          if (param_2[1] <= fVar32) {
            uVar20 = uVar19 + 1;
            if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
              FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
              puVar23 = local_128;
              uVar19 = local_120;
              uVar22 = local_11c;
            }
            pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
            iVar27 = iVar26;
            if (pfVar2 != (float *)0x0) {
              fVar32 = param_2[1];
              fVar33 = param_2[2];
              fVar29 = param_2[3];
              *pfVar2 = *param_2;
              pfVar2[1] = fVar32;
              pfVar2[2] = fVar33;
              pfVar2[3] = fVar29;
              pfVar2[4] = param_2[4];
            }
            goto LAB_14506be23;
          }
          fStack_114 = *param_2;
          if (fVar32 <= fStack_114) {
            pfVar2 = (float *)(local_100 + local_c0 * 0x14);
            local_118 = *pfVar2;
            fStack_110 = pfVar2[2];
            fStack_10c = pfVar2[3];
            fVar33 = *(float *)(local_100 + 0x10 + local_c0 * 0x14);
            if (local_118 != fStack_114) {
              if (uVar19 == 0) goto LAB_14506b3e3;
              lVar14 = (longlong)(int)(uVar19 - 1);
              if ((((float)puVar23[lVar14 * 5 + 2] != fStack_110) ||
                  ((float)puVar23[lVar14 * 5 + 3] != fStack_10c)) ||
                 (((float)puVar23[lVar14 * 5 + 1] != local_118 ||
                  ((float)puVar23[lVar14 * 5 + 4] != fVar33)))) goto LAB_14506b55a;
              puVar23[lVar14 * 5 + 1] = fStack_114;
            }
          }
          else {
            local_118 = *param_2;
            fStack_110 = param_2[2];
            fStack_10c = param_2[3];
            fVar33 = param_2[4];
            fStack_114 = fVar32;
            if (local_118 != fVar32) {
              if (uVar19 != 0) goto LAB_14506b516;
LAB_14506b3e3:
              if ((uVar22 & 0x7fffffff) == 0) {
                FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                puVar23 = local_128;
                uVar19 = local_120;
                uVar22 = local_11c;
              }
              puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = CONCAT44(fStack_114,local_118);
                puVar17[1] = CONCAT44(fStack_10c,fStack_110);
                *(float *)(puVar17 + 2) = fVar33;
              }
              uVar20 = 1;
              local_120 = uVar20;
            }
          }
        }
        else {
          fVar33 = param_2[4];
          fStack_114 = param_2[1];
          fStack_110 = param_2[2];
          fStack_10c = param_2[3];
          if (param_2[1] < fVar32) {
            local_118 = *(float *)(local_100 + -0x10 + local_c0 * 0x14);
            if (local_118 != fStack_114) {
              if (uVar19 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (pfVar2 != (float *)0x0) {
                  *pfVar2 = local_118;
                  pfVar2[1] = fStack_114;
                  pfVar2[2] = fStack_110;
                  pfVar2[3] = fStack_10c;
                  pfVar2[4] = fVar33;
                }
                uVar20 = 1;
              }
              else {
                lVar14 = (longlong)(int)(uVar19 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
                     ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == local_118)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar33)) {
                  puVar23[lVar14 * 5 + 1] = fStack_114;
                }
                else {
                  uVar20 = uVar19 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
                    puVar23 = local_128;
                    uVar19 = local_120;
                    uVar22 = local_11c;
                  }
                  pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
                  if (pfVar2 != (float *)0x0) {
                    *pfVar2 = local_118;
                    pfVar2[1] = fStack_114;
                    pfVar2[2] = fStack_110;
                    pfVar2[3] = fStack_10c;
                    pfVar2[4] = fVar33;
                  }
                }
              }
            }
            goto LAB_14506be23;
          }
          local_118 = *(float *)(local_100 + -0x10 + local_c0 * 0x14);
          fStack_114 = fVar32;
          if (local_118 != fVar32) {
            if (uVar19 == 0) goto LAB_14506b3e3;
LAB_14506b516:
            lVar14 = (longlong)(int)(uVar19 - 1);
            fStack_114 = fVar32;
            if ((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
                ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
               (((float)puVar23[lVar14 * 5 + 1] == local_118 &&
                ((float)puVar23[lVar14 * 5 + 4] == fVar33)))) {
              puVar23[lVar14 * 5 + 1] = fVar32;
            }
            else {
LAB_14506b55a:
              uVar20 = uVar19 + 1;
              if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
                FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
                puVar23 = local_128;
                uVar19 = local_120;
                uVar22 = local_11c;
              }
              puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
              local_120 = uVar20;
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = CONCAT44(fStack_114,local_118);
                puVar17[1] = CONCAT44(fStack_10c,fStack_110);
                *(float *)(puVar17 + 2) = fVar33;
              }
            }
          }
        }
        uVar7 = *(undefined8 *)(local_100 + local_f8 * 4 + 8);
        iVar24 = *(int *)(local_100 + 0x10 + local_f8 * 4);
        fVar32 = *(float *)(local_100 + local_f8 * 4);
        if (fVar32 <= *param_2) {
          fVar32 = *param_2;
        }
        fVar33 = *(float *)(local_100 + 4 + local_f8 * 4);
        if (param_2[1] <= fVar33) {
          fVar33 = param_2[1];
        }
        fVar29 = param_2[4];
        uVar8 = *(undefined8 *)(param_2 + 2);
        local_f0 = CONCAT44(fVar33,fVar32);
        local_d8 = CONCAT44(fVar33,fVar32);
        uStack_e8 = uVar8;
        local_e0 = fVar29;
        uStack_d0 = uVar7;
        local_c8 = iVar24;
        if (param_2[2] == *(float *)(local_100 + 8 + local_f8 * 4)) {
          fVar32 = *(float *)(local_100 + 0xc + local_f8 * 4);
          puVar17 = &local_f0;
          if (param_2[3] <= fVar32 && fVar32 != param_2[3]) {
            puVar17 = &local_d8;
          }
          FUN_14506a440(&local_128,puVar17);
          puVar23 = local_128;
          uVar19 = local_120;
          uVar22 = local_11c;
        }
        else {
          uStack_d0._0_4_ = (float)uVar7;
          fVar11 = (float)uStack_d0;
          uStack_e8._0_4_ = (float)uVar8;
          fVar9 = (float)uStack_e8;
          uStack_e8._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
          fVar10 = uStack_e8._4_4_;
          uStack_d0._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
          fVar12 = uStack_d0._4_4_;
          fVar31 = (uStack_e8._4_4_ - uStack_d0._4_4_) / ((float)uStack_d0 - (float)uStack_e8);
          if (fVar31 <= fVar32) {
            fVar31 = fVar32;
          }
          if (fVar33 <= fVar31) {
            fVar31 = fVar33;
          }
          if ((float)uStack_e8 < (float)uStack_d0) {
            local_f0 = CONCAT44(fVar31,fVar32);
            local_d8 = CONCAT44(fVar33,fVar31);
            uVar21 = uVar20;
            if (fVar32 != fVar31) {
              if (uVar20 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar16 = puVar23 + (longlong)(int)uVar19 * 5;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = (undefined4)local_f0;
                  puVar16[1] = local_f0._4_4_;
                  puVar16[2] = (float)uStack_e8;
                  puVar16[3] = uStack_e8._4_4_;
                  puVar16[4] = fVar29;
                }
                uVar21 = 1;
                local_120 = uVar21;
                uVar8 = uStack_e8;
              }
              else {
                lVar14 = (longlong)(int)(uVar20 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == (float)uStack_e8) &&
                     ((float)puVar23[lVar14 * 5 + 3] == uStack_e8._4_4_)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == fVar32)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar29)) {
                  puVar23[lVar14 * 5 + 1] = fVar31;
                }
                else {
                  uVar21 = uVar20 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar21) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
                    puVar23 = local_128;
                    uVar20 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar16 = puVar23 + (longlong)(int)uVar20 * 5;
                  local_120 = uVar21;
                  uVar8 = uStack_e8;
                  if (puVar16 != (undefined4 *)0x0) {
                    *puVar16 = (undefined4)local_f0;
                    puVar16[1] = local_f0._4_4_;
                    puVar16[2] = (float)uStack_e8;
                    puVar16[3] = uStack_e8._4_4_;
                    puVar16[4] = fVar29;
                  }
                }
              }
            }
            uStack_e8 = uVar8;
            uVar19 = uVar21;
            if (fVar31 != fVar33) {
              if (uVar21 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (puVar17 != (undefined8 *)0x0) {
                  *puVar17 = local_d8;
                  puVar17[1] = uStack_d0;
                  *(int *)(puVar17 + 2) = iVar24;
                }
                uVar19 = 1;
                local_120 = uVar19;
              }
              else {
                lVar14 = (longlong)(int)(uVar21 - 1);
                if ((((float)puVar23[lVar14 * 5 + 2] == fVar11) &&
                    ((float)puVar23[lVar14 * 5 + 3] == fVar12)) &&
                   (((float)puVar23[lVar14 * 5 + 1] == fVar31 && (puVar23[lVar14 * 5 + 4] == iVar24)
                    ))) {
                  puVar23[lVar14 * 5 + 1] = fVar33;
                }
                else {
                  uVar19 = uVar21 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                    puVar23 = local_128;
                    uVar21 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar21 * 5);
                  local_120 = uVar19;
                  if (puVar17 != (undefined8 *)0x0) {
                    *puVar17 = local_d8;
                    puVar17[1] = uStack_d0;
                    *(int *)(puVar17 + 2) = iVar24;
                  }
                }
              }
            }
          }
          else {
            local_f0 = CONCAT44(fVar33,fVar31);
            local_d8 = CONCAT44(fVar31,fVar32);
            uVar21 = uVar20;
            if (fVar32 != fVar31) {
              if (uVar20 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar16 = puVar23 + (longlong)(int)uVar19 * 5;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = (undefined4)local_d8;
                  puVar16[1] = local_d8._4_4_;
                  puVar16[2] = (float)uStack_d0;
                  puVar16[3] = uStack_d0._4_4_;
                  puVar16[4] = iVar24;
                }
                uVar21 = 1;
                local_120 = uVar21;
                uVar7 = uStack_d0;
              }
              else {
                lVar14 = (longlong)(int)(uVar20 - 1);
                if ((((float)puVar23[lVar14 * 5 + 2] == (float)uStack_d0) &&
                    ((float)puVar23[lVar14 * 5 + 3] == uStack_d0._4_4_)) &&
                   (((float)puVar23[lVar14 * 5 + 1] == fVar32 && (puVar23[lVar14 * 5 + 4] == iVar24)
                    ))) {
                  puVar23[lVar14 * 5 + 1] = fVar31;
                }
                else {
                  uVar21 = uVar20 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar21) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
                    puVar23 = local_128;
                    uVar20 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar16 = puVar23 + (longlong)(int)uVar20 * 5;
                  local_120 = uVar21;
                  uVar7 = uStack_d0;
                  if (puVar16 != (undefined4 *)0x0) {
                    *puVar16 = (undefined4)local_d8;
                    puVar16[1] = local_d8._4_4_;
                    puVar16[2] = (float)uStack_d0;
                    puVar16[3] = uStack_d0._4_4_;
                    puVar16[4] = iVar24;
                  }
                }
              }
            }
            uStack_d0 = uVar7;
            uVar19 = uVar21;
            if (fVar31 != fVar33) {
              if (uVar21 == 0) {
                uVar19 = 0;
                if ((uVar22 & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
                  puVar23 = local_128;
                  uVar19 = local_120;
                  uVar22 = local_11c;
                }
                puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar19 * 5);
                if (puVar17 != (undefined8 *)0x0) {
                  *puVar17 = local_f0;
                  puVar17[1] = uStack_e8;
                  *(float *)(puVar17 + 2) = fVar29;
                }
                uVar19 = 1;
                local_120 = uVar19;
              }
              else {
                lVar14 = (longlong)(int)(uVar21 - 1);
                if (((((float)puVar23[lVar14 * 5 + 2] == fVar9) &&
                     ((float)puVar23[lVar14 * 5 + 3] == fVar10)) &&
                    ((float)puVar23[lVar14 * 5 + 1] == fVar31)) &&
                   ((float)puVar23[lVar14 * 5 + 4] == fVar29)) {
                  puVar23[lVar14 * 5 + 1] = fVar33;
                }
                else {
                  uVar19 = uVar21 + 1;
                  if ((int)(uVar22 & 0x7fffffff) < (int)uVar19) {
                    FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar19);
                    puVar23 = local_128;
                    uVar21 = local_120;
                    uVar22 = local_11c;
                  }
                  puVar17 = (undefined8 *)(puVar23 + (longlong)(int)uVar21 * 5);
                  local_120 = uVar19;
                  if (puVar17 != (undefined8 *)0x0) {
                    *puVar17 = local_f0;
                    puVar17[1] = uStack_e8;
                    *(float *)(puVar17 + 2) = fVar29;
                  }
                }
              }
            }
          }
        }
        fVar32 = param_2[1];
        fVar33 = *(float *)(local_100 + 4 + local_f8 * 4);
        uVar20 = uVar19;
        if (fVar32 < fVar33) {
          lVar14 = local_100 + local_f8 * 4;
          fStack_114 = *(float *)(lVar14 + 4);
          fStack_110 = *(float *)(lVar14 + 8);
          fStack_10c = *(float *)(lVar14 + 0xc);
          fVar29 = *(float *)(local_100 + 0x10 + local_f8 * 4);
          local_118 = fVar32;
          if (fVar32 == fStack_114) goto LAB_14506bc81;
          if (uVar19 == 0) goto LAB_14506bb90;
          lVar14 = (longlong)(int)(uVar19 - 1);
          if ((((float)puVar23[lVar14 * 5 + 2] != fStack_110) ||
              ((float)puVar23[lVar14 * 5 + 3] != fStack_10c)) ||
             (((float)puVar23[lVar14 * 5 + 1] != fVar32 ||
              ((float)puVar23[lVar14 * 5 + 4] != fVar29)))) goto LAB_14506bc32;
          puVar23[lVar14 * 5 + 1] = fStack_114;
          iVar27 = iVar27 + 1;
          goto LAB_14506be23;
        }
        if (iVar27 == (int)param_1[1] + -1) goto LAB_14506bb68;
        iVar27 = iVar27 + 1;
        local_c0 = local_c0 + 1;
      } while( true );
    }
  }
  FUN_14506a440(param_1,param_2);
  return;
LAB_14506bb68:
  fStack_114 = param_2[1];
  fStack_110 = param_2[2];
  fStack_10c = param_2[3];
  fVar29 = param_2[4];
  local_118 = fVar33;
  if (fVar33 != fStack_114) {
    if (uVar19 == 0) {
LAB_14506bb90:
      if ((uVar22 & 0x7fffffff) == 0) {
        FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,1);
        puVar23 = local_128;
        uVar19 = local_120;
        uVar22 = local_11c;
      }
      pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = local_118;
        pfVar2[1] = fStack_114;
        pfVar2[2] = fStack_110;
        pfVar2[3] = fStack_10c;
        pfVar2[4] = fVar29;
      }
      iVar27 = iVar27 + 1;
      uVar20 = 1;
      goto LAB_14506be23;
    }
    lVar14 = (longlong)(int)(uVar19 - 1);
    if ((((float)puVar23[lVar14 * 5 + 2] == fStack_110) &&
        ((float)puVar23[lVar14 * 5 + 3] == fStack_10c)) &&
       (((float)puVar23[lVar14 * 5 + 1] == fVar33 && ((float)puVar23[lVar14 * 5 + 4] == fVar29)))) {
      puVar23[lVar14 * 5 + 1] = fStack_114;
      iVar27 = iVar27 + 1;
      goto LAB_14506be23;
    }
LAB_14506bc32:
    uVar20 = uVar19 + 1;
    if ((int)(uVar22 & 0x7fffffff) < (int)uVar20) {
      FUN_14506e1d0(&local_128,&PTR_vftable_14c6e47a0,(longlong)(int)uVar20);
      puVar23 = local_128;
      uVar19 = local_120;
      uVar22 = local_11c;
    }
    pfVar2 = (float *)(puVar23 + (longlong)(int)uVar19 * 5);
    if (pfVar2 != (float *)0x0) {
      *pfVar2 = local_118;
      pfVar2[1] = fStack_114;
      pfVar2[2] = fStack_110;
      pfVar2[3] = fStack_10c;
      pfVar2[4] = fVar29;
    }
  }
LAB_14506bc81:
  iVar27 = iVar27 + 1;
LAB_14506be23:
  iVar30 = (int)param_1[1] - (iVar27 - iVar26);
  iVar24 = iVar30 + uVar20;
  iVar30 = iVar30 - iVar26;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar24) {
    FUN_14506e2d0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  lVar3 = *param_1;
  lVar14 = local_b8 * 0x14;
  if (0 < iVar30) {
    puVar28 = (undefined4 *)(lVar3 + ((iVar27 - iVar26) + local_b8) * 0x14);
    puVar16 = (undefined4 *)(lVar3 + ((int)uVar20 + local_b8) * 0x14);
    if (puVar16 < puVar28) {
      if ((longlong)iVar30 * 0x14 != 0) {
        lVar18 = (longlong)puVar28 - (longlong)puVar16;
        lVar15 = ((longlong)iVar30 * 0x14 - 1U >> 2) + 1;
        do {
          *puVar16 = *(undefined4 *)(lVar18 + (longlong)puVar16);
          puVar16 = puVar16 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
    }
    else if (puVar16 != puVar28) {
      FUN_144bfb260(puVar16,puVar28,(longlong)iVar30 * 0x14);
    }
  }
  if (0 < (int)uVar20) {
    uVar25 = (ulonglong)uVar20;
    puVar16 = puVar23;
    puVar28 = (undefined4 *)(lVar3 + lVar14);
    do {
      if (puVar28 != (undefined4 *)0x0) {
        uVar4 = puVar16[1];
        uVar5 = puVar16[2];
        uVar6 = puVar16[3];
        *puVar28 = *puVar16;
        puVar28[1] = uVar4;
        puVar28[2] = uVar5;
        puVar28[3] = uVar6;
        puVar1 = puVar16 + 4;
        puVar16 = puVar16 + 5;
        puVar28[4] = *puVar1;
      }
      uVar25 = uVar25 - 1;
      puVar28 = puVar28 + 5;
    } while (uVar25 != 0);
  }
  *(int *)(param_1 + 1) = iVar24;
  if ((-1 < (int)uVar22) && (puVar23 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar23,(ulonglong)(uVar22 & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 14506bfd0 FUN_14506bfd0 body=1221 status=ok
// SIG undefined FUN_14506bfd0(void)

void FUN_14506bfd0(longlong *param_1,float param_2,float param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar9 = (longlong)(int)param_1[1];
  iVar12 = 0;
  lVar7 = 0;
  if (lVar9 < 4) {
    if (lVar9 < 1) {
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    lVar11 = 0;
    lVar8 = 0;
    lVar10 = (lVar9 - 4U >> 2) + 1;
    lVar7 = lVar10 * 4;
    do {
      lVar6 = *param_1;
      fVar14 = *(float *)(lVar8 + lVar6);
      fVar16 = *(float *)(lVar8 + 8 + lVar6);
      fVar3 = *(float *)(lVar8 + 0xc + lVar6);
      fVar15 = *(float *)(lVar8 + 4 + lVar6);
      bVar4 = fVar14 * param_2 + param_3 < fVar14 * fVar16 + fVar3;
      if (bVar4 != fVar15 * param_2 + param_3 < fVar15 * fVar16 + fVar3) {
        fVar16 = (param_3 - fVar3) / (fVar16 - param_2);
        if (bVar4) {
          if (fVar16 <= fVar15) {
            fVar15 = fVar16;
          }
          *(float *)(lVar8 + 4 + lVar6) = fVar15;
        }
        else {
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar8 + lVar6) = fVar14;
        }
        bVar4 = fVar14 < fVar15;
      }
      if (bVar4) {
        lVar6 = *param_1;
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 1;
        uVar5 = ((undefined8 *)(lVar6 + lVar8))[1];
        *(undefined8 *)(lVar6 + lVar11) = *(undefined8 *)(lVar6 + lVar8);
        ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
        *(undefined4 *)(lVar6 + 0x10 + lVar11) = *(undefined4 *)(lVar6 + 0x10 + lVar8);
        lVar11 = lVar11 + 0x14;
      }
      lVar6 = *param_1;
      fVar14 = *(float *)(lVar8 + 0x14 + lVar6);
      fVar16 = *(float *)(lVar8 + 0x1c + lVar6);
      fVar3 = *(float *)(lVar8 + 0x20 + lVar6);
      fVar15 = *(float *)(lVar8 + 0x18 + lVar6);
      bVar4 = fVar14 * param_2 + param_3 < fVar14 * fVar16 + fVar3;
      if (bVar4 != fVar15 * param_2 + param_3 < fVar15 * fVar16 + fVar3) {
        fVar16 = (param_3 - fVar3) / (fVar16 - param_2);
        if (bVar4) {
          if (fVar16 <= fVar15) {
            fVar15 = fVar16;
          }
          *(float *)(lVar8 + 0x18 + lVar6) = fVar15;
        }
        else {
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar8 + 0x14 + lVar6) = fVar14;
        }
        fVar14 = *(float *)(lVar8 + 0x18 + lVar6);
        pfVar1 = (float *)(lVar8 + 0x14 + lVar6);
        bVar4 = *pfVar1 <= fVar14 && fVar14 != *pfVar1;
      }
      if (bVar4) {
        lVar6 = *param_1;
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 1;
        puVar2 = (undefined8 *)(lVar6 + 0x14 + lVar8);
        uVar5 = puVar2[1];
        *(undefined8 *)(lVar6 + lVar11) = *puVar2;
        ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
        *(undefined4 *)(lVar6 + 0x10 + lVar11) = *(undefined4 *)(lVar6 + 0x24 + lVar8);
        lVar11 = lVar11 + 0x14;
      }
      lVar6 = *param_1;
      fVar14 = *(float *)(lVar8 + 0x28 + lVar6);
      fVar16 = *(float *)(lVar8 + 0x30 + lVar6);
      fVar3 = *(float *)(lVar8 + 0x34 + lVar6);
      fVar15 = *(float *)(lVar8 + 0x2c + lVar6);
      bVar4 = fVar14 * param_2 + param_3 < fVar14 * fVar16 + fVar3;
      if (bVar4 != fVar15 * param_2 + param_3 < fVar15 * fVar16 + fVar3) {
        fVar16 = (param_3 - fVar3) / (fVar16 - param_2);
        if (bVar4) {
          if (fVar16 <= fVar15) {
            fVar15 = fVar16;
          }
          *(float *)(lVar8 + 0x2c + lVar6) = fVar15;
        }
        else {
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar8 + 0x28 + lVar6) = fVar14;
        }
        bVar4 = fVar14 < fVar15;
      }
      if (bVar4) {
        lVar6 = *param_1;
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 1;
        puVar2 = (undefined8 *)(lVar6 + 0x28 + lVar8);
        uVar5 = puVar2[1];
        *(undefined8 *)(lVar6 + lVar11) = *puVar2;
        ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
        *(undefined4 *)(lVar6 + 0x10 + lVar11) = *(undefined4 *)(lVar6 + 0x38 + lVar8);
        lVar11 = lVar11 + 0x14;
      }
      lVar6 = *param_1;
      fVar14 = *(float *)(lVar6 + 0x3c + lVar8);
      fVar16 = *(float *)(lVar6 + 0x44 + lVar8);
      fVar3 = *(float *)(lVar6 + 0x48 + lVar8);
      fVar15 = *(float *)(lVar6 + 0x40 + lVar8);
      bVar4 = fVar14 * param_2 + param_3 < fVar14 * fVar16 + fVar3;
      if (bVar4 != fVar15 * param_2 + param_3 < fVar15 * fVar16 + fVar3) {
        fVar16 = (param_3 - fVar3) / (fVar16 - param_2);
        if (bVar4) {
          if (fVar16 <= fVar15) {
            fVar15 = fVar16;
          }
          *(float *)(lVar6 + 0x40 + lVar8) = fVar15;
        }
        else {
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          *(float *)(lVar6 + 0x3c + lVar8) = fVar14;
        }
        lVar6 = *param_1;
        bVar4 = fVar14 < fVar15;
      }
      if (bVar4) {
        puVar2 = (undefined8 *)(lVar8 + 0x3c + lVar6);
        uVar5 = puVar2[1];
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 1;
        *(undefined8 *)(lVar6 + lVar11) = *puVar2;
        ((undefined8 *)(lVar6 + lVar11))[1] = uVar5;
        *(undefined4 *)(lVar6 + 0x10 + lVar11) = *(undefined4 *)(lVar8 + 0x4c + lVar6);
        lVar11 = lVar11 + 0x14;
      }
      lVar8 = lVar8 + 0x50;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (lVar9 <= lVar7) {
      *(int *)(param_1 + 1) = iVar12;
      return;
    }
  }
  lVar13 = lVar13 * 0x14;
  lVar8 = lVar7 * 0x14;
  lVar9 = lVar9 - lVar7;
  do {
    lVar7 = *param_1;
    fVar14 = *(float *)(lVar7 + lVar8);
    fVar16 = *(float *)(lVar7 + 8 + lVar8);
    fVar3 = *(float *)(lVar7 + 0xc + lVar8);
    fVar15 = *(float *)(lVar7 + 4 + lVar8);
    bVar4 = fVar14 * param_2 + param_3 < fVar14 * fVar16 + fVar3;
    if (bVar4 != fVar15 * param_2 + param_3 < fVar15 * fVar16 + fVar3) {
      fVar16 = (param_3 - fVar3) / (fVar16 - param_2);
      if (bVar4) {
        if (fVar16 <= fVar15) {
          fVar15 = fVar16;
        }
        *(float *)(lVar7 + 4 + lVar8) = fVar15;
      }
      else {
        if (fVar14 <= fVar16) {
          fVar14 = fVar16;
        }
        *(float *)(lVar7 + lVar8) = fVar14;
      }
      lVar7 = *param_1;
      bVar4 = fVar14 < fVar15;
    }
    if (bVar4) {
      uVar5 = ((undefined8 *)(lVar7 + lVar8))[1];
      iVar12 = iVar12 + 1;
      *(undefined8 *)(lVar7 + lVar13) = *(undefined8 *)(lVar7 + lVar8);
      ((undefined8 *)(lVar7 + lVar13))[1] = uVar5;
      *(undefined4 *)(lVar7 + 0x10 + lVar13) = *(undefined4 *)(lVar7 + 0x10 + lVar8);
      lVar13 = lVar13 + 0x14;
    }
    lVar8 = lVar8 + 0x14;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(int *)(param_1 + 1) = iVar12;
  return;
}



// FUNCTION 14506c4a0 FUN_14506c4a0 body=4912 status=ok
// SIG undefined FUN_14506c4a0(void)

void FUN_14506c4a0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  undefined4 *puVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int local_res8;
  int local_res18;
  longlong local_1c8;
  int local_1c0;
  uint local_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  int local_1a8;
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  longlong local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  iVar21 = (int)param_1[1];
  if (iVar21 == 0) {
    if (param_2 != param_1) {
      iVar21 = (int)param_2[1];
      lVar27 = *param_2;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar21) {
        FUN_14506e3e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar21);
      }
      FUN_144b3d470(*param_1,lVar27,(longlong)iVar21 * 0x14);
      *(int *)(param_1 + 1) = iVar21;
      return;
    }
  }
  else {
    local_1a8 = (int)param_2[1];
    if (local_1a8 != 0) {
      iVar19 = (iVar21 + local_1a8) * 2;
      local_res8 = 0;
      local_res18 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 0x80000000;
      if (0 < iVar19) {
        FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar19);
      }
      iVar19 = local_1c0;
      puVar23 = (undefined4 *)*param_1;
      puVar1 = puVar23 + (longlong)(int)param_1[1] * 5;
      iVar25 = (int)(((longlong)(int)param_1[1] * 0x14) / 0x14) + local_1c0;
      if ((int)(local_1bc & 0x7fffffff) < iVar25) {
        FUN_14506e2d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar25);
      }
      puVar11 = (undefined4 *)(local_1c8 + (longlong)iVar19 * 0x14);
      for (; puVar23 != puVar1; puVar23 = puVar23 + 5) {
        if (puVar11 != (undefined4 *)0x0) {
          uVar5 = puVar23[1];
          uVar6 = puVar23[2];
          uVar7 = puVar23[3];
          *puVar11 = *puVar23;
          puVar11[1] = uVar5;
          puVar11[2] = uVar6;
          puVar11[3] = uVar7;
          puVar11[4] = puVar23[4];
        }
        puVar11 = puVar11 + 5;
      }
      if (param_1 != &local_1c8) {
        local_1c0 = iVar25;
        FUN_14506a3d0(&local_1c8,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(param_1);
        lVar27 = *param_1;
        *param_1 = local_1c8;
        *(int *)(param_1 + 1) = local_1c0;
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)((longlong)param_1 + 0xc) = local_1bc;
        local_1c8 = lVar27;
        local_1bc = uVar4;
      }
      pfVar22 = (float *)*param_1;
      iVar19 = 0;
      local_168 = (longlong)local_1a8;
      lVar24 = 0;
      fVar45 = *pfVar22;
      fVar46 = pfVar22[1];
      fVar48 = pfVar22[2];
      fVar50 = pfVar22[3];
      fVar30 = pfVar22[4];
      pfVar22 = (float *)*param_2;
      fVar40 = *pfVar22;
      fVar41 = pfVar22[1];
      fVar42 = pfVar22[2];
      fVar43 = pfVar22[3];
      fVar29 = pfVar22[4];
      local_1c0 = 0;
      local_1a0 = 0;
      local_130 = 0;
      lVar18 = local_168;
      lVar27 = local_1c8;
      lVar28 = local_1a0;
      fVar31 = fVar46;
      fVar34 = fVar46;
      fVar32 = fVar46;
      fVar33 = fVar46;
      fVar35 = fVar41;
      fVar37 = fVar41;
      fVar38 = fVar41;
      fVar39 = fVar41;
      fVar52 = fVar40;
      fVar36 = fVar41;
      fVar55 = fVar42;
      fVar57 = fVar43;
      fVar58 = fVar45;
      fVar59 = fVar46;
      fVar60 = fVar48;
      fVar61 = fVar50;
      iVar25 = 0;
      local_1b8 = fVar40;
      fStack_1b4 = fVar41;
      fStack_1b0 = fVar42;
      fStack_1ac = fVar43;
      local_158 = fVar46;
      fStack_154 = fVar46;
      fStack_150 = fVar46;
      fStack_14c = fVar46;
      local_128 = fVar45;
      fStack_124 = fVar46;
      fStack_120 = fVar48;
      fStack_11c = fVar50;
      local_110 = fVar40;
      fStack_10c = fVar41;
      fStack_108 = fVar42;
      fStack_104 = fVar43;
      local_f8 = fVar41;
      fStack_f4 = fVar41;
      fStack_f0 = fVar41;
      fStack_ec = fVar41;
LAB_14506c750:
      do {
        fVar51 = fVar52;
        fVar54 = fVar55;
        fVar56 = fVar57;
        iVar20 = iVar19;
        fVar53 = local_1b8;
        fVar12 = fStack_1b4;
        fVar13 = fStack_1b0;
        fVar14 = fStack_1ac;
        fVar16 = local_110;
        if (fVar40 <= fVar58) {
          fVar44 = fVar45;
          fVar47 = fVar48;
          fVar49 = fVar50;
          fVar15 = local_128;
          if (fVar40 < fVar58) {
            if (fVar35 < fVar58) {
              if (fVar40 != fVar35) {
                if (iVar19 == 0) {
                  iVar19 = 0;
                  if ((local_1bc & 0x7fffffff) == 0) {
                    FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,1);
                    lVar18 = local_168;
                    lVar27 = local_1c8;
                    lVar28 = local_1a0;
                    fVar31 = local_158;
                    fVar34 = fStack_154;
                    fVar32 = fStack_150;
                    fVar33 = fStack_14c;
                    iVar19 = local_1c0;
                  }
                  pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                  if (pfVar22 != (float *)0x0) {
                    *pfVar22 = fVar52;
                    pfVar22[1] = fVar36;
                    pfVar22[2] = fVar55;
                    pfVar22[3] = fVar57;
                    pfVar22[4] = fVar29;
                  }
                  local_1c0 = 1;
                  iVar19 = 1;
                }
                else {
                  lVar17 = (longlong)(iVar19 + -1);
                  if ((((*(float *)(lVar27 + 8 + lVar17 * 0x14) == fVar55) &&
                       (*(float *)(lVar27 + 0xc + lVar17 * 0x14) == fVar57)) &&
                      (*(float *)(lVar27 + 4 + lVar17 * 0x14) == fVar40)) &&
                     (*(float *)(lVar27 + 0x10 + lVar17 * 0x14) == fVar29)) {
                    *(float *)(lVar27 + 4 + lVar17 * 0x14) = fVar35;
                  }
                  else {
                    iVar20 = iVar19 + 1;
                    if ((int)(local_1bc & 0x7fffffff) < iVar20) {
                      FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar20);
                      lVar18 = local_168;
                      lVar27 = local_1c8;
                      lVar28 = local_1a0;
                      fVar31 = local_158;
                      fVar34 = fStack_154;
                      fVar32 = fStack_150;
                      fVar33 = fStack_14c;
                      iVar19 = local_1c0;
                    }
                    pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                    iVar19 = iVar20;
                    local_1c0 = iVar20;
                    if (pfVar22 != (float *)0x0) {
                      *pfVar22 = fVar52;
                      pfVar22[1] = fVar36;
                      pfVar22[2] = fVar55;
                      pfVar22[3] = fVar57;
                      pfVar22[4] = fVar29;
                    }
                  }
                }
              }
              local_res18 = iVar25 + 1;
              lVar24 = lVar24 + 1;
              iVar25 = local_res18;
              local_130 = lVar24;
              if (lVar24 == lVar18) break;
              pfVar22 = (float *)(*param_2 + lVar24 * 0x14);
              fVar40 = *pfVar22;
              fVar41 = pfVar22[1];
              fVar42 = pfVar22[2];
              fVar43 = pfVar22[3];
              fVar29 = *(float *)(*param_2 + 0x10 + lVar24 * 0x14);
              fVar35 = fVar41;
              fVar37 = fVar41;
              fVar38 = fVar41;
              fVar39 = fVar41;
              fVar52 = fVar40;
              fVar36 = fVar41;
              fVar55 = fVar42;
              fVar57 = fVar43;
              local_1b8 = fVar40;
              fStack_1b4 = fVar41;
              fStack_1b0 = fVar42;
              fStack_1ac = fVar43;
              local_110 = fVar40;
              fStack_10c = fVar41;
              fStack_108 = fVar42;
              fStack_104 = fVar43;
              local_f8 = fVar41;
              fStack_f4 = fVar41;
              fStack_f0 = fVar41;
              fStack_ec = fVar41;
              goto LAB_14506c750;
            }
            fVar40 = fVar58;
            fVar41 = fVar59;
            fVar42 = fVar60;
            fVar43 = fVar61;
            fVar51 = fVar58;
            fVar36 = fStack_10c;
            fVar54 = fStack_108;
            fVar56 = fStack_104;
            fVar53 = fVar58;
            fVar12 = fVar59;
            fVar13 = fVar60;
            fVar14 = fVar61;
            local_148 = fVar52;
            fStack_144 = fVar58;
            fStack_140 = fVar55;
            fStack_13c = fVar57;
            fVar16 = fVar58;
            if (fVar52 != fVar58) {
              if (iVar19 == 0) {
                iVar19 = 0;
                if ((local_1bc & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                  lVar27 = local_1c8;
                  fVar31 = local_158;
                  fVar34 = fStack_154;
                  fVar32 = fStack_150;
                  fVar33 = fStack_14c;
                  iVar19 = local_1c0;
                }
                puVar2 = (undefined8 *)(lVar27 + (longlong)iVar19 * 0x14);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(fStack_144,local_148);
                  puVar2[1] = CONCAT44(fStack_13c,fStack_140);
                  *(float *)(puVar2 + 2) = fVar29;
                }
                local_1c0 = 1;
                fVar36 = fStack_10c;
                fVar54 = fStack_108;
                fVar56 = fStack_104;
                iVar20 = 1;
                fVar15 = local_128;
              }
              else {
                lVar18 = (longlong)(iVar19 + -1);
                if (((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar55) &&
                    (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar57)) &&
                   ((*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar52 &&
                    (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar29)))) {
                  *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar58;
                }
                else {
                  iVar20 = iVar19 + 1;
                  if ((int)(local_1bc & 0x7fffffff) < iVar20) {
                    FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                    lVar27 = local_1c8;
                    fVar31 = local_158;
                    fVar34 = fStack_154;
                    fVar32 = fStack_150;
                    fVar33 = fStack_14c;
                    iVar19 = local_1c0;
                  }
                  puVar2 = (undefined8 *)(lVar27 + (longlong)iVar19 * 0x14);
                  fVar36 = fStack_10c;
                  fVar54 = fStack_108;
                  fVar56 = fStack_104;
                  local_1c0 = iVar20;
                  fVar15 = local_128;
                  if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = CONCAT44(fStack_144,local_148);
                    puVar2[1] = CONCAT44(fStack_13c,fStack_140);
                    *(float *)(puVar2 + 2) = fVar29;
                  }
                }
              }
            }
          }
        }
        else {
          if (fVar31 < fVar40) {
            if (fVar58 != fVar31) {
              if (iVar19 == 0) {
                iVar19 = 0;
                if ((local_1bc & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,1);
                  lVar18 = local_168;
                  lVar27 = local_1c8;
                  lVar28 = local_1a0;
                  fVar31 = local_158;
                  iVar19 = local_1c0;
                }
                pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                if (pfVar22 != (float *)0x0) {
                  *pfVar22 = fVar45;
                  pfVar22[1] = fVar46;
                  pfVar22[2] = fVar48;
                  pfVar22[3] = fVar50;
                  pfVar22[4] = fVar30;
                }
                local_1c0 = 1;
                iVar19 = local_1c0;
              }
              else {
                lVar17 = (longlong)(iVar19 + -1);
                if (((*(float *)(lVar27 + 8 + lVar17 * 0x14) == fVar48) &&
                    (*(float *)(lVar27 + 0xc + lVar17 * 0x14) == fVar50)) &&
                   ((*(float *)(lVar27 + 4 + lVar17 * 0x14) == fVar58 &&
                    (*(float *)(lVar27 + 0x10 + lVar17 * 0x14) == fVar30)))) {
                  *(float *)(lVar27 + 4 + lVar17 * 0x14) = fVar31;
                }
                else {
                  iVar20 = iVar19 + 1;
                  if ((int)(local_1bc & 0x7fffffff) < iVar20) {
                    FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar20);
                    lVar18 = local_168;
                    lVar27 = local_1c8;
                    lVar28 = local_1a0;
                    fVar31 = local_158;
                    iVar19 = local_1c0;
                  }
                  pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                  iVar19 = iVar20;
                  local_1c0 = iVar20;
                  if (pfVar22 != (float *)0x0) {
                    *pfVar22 = fVar45;
                    pfVar22[1] = fVar46;
                    pfVar22[2] = fVar48;
                    pfVar22[3] = fVar50;
                    pfVar22[4] = fVar30;
                  }
                }
              }
            }
            local_res8 = local_res8 + 1;
            local_1a0 = lVar28 + 1;
            if (local_1a0 == iVar21) break;
            pfVar22 = (float *)(*param_1 + local_1a0 * 0x14);
            fVar45 = *pfVar22;
            fVar46 = pfVar22[1];
            fVar48 = pfVar22[2];
            fVar50 = pfVar22[3];
            fVar30 = *(float *)(*param_1 + 0x10 + local_1a0 * 0x14);
            lVar28 = local_1a0;
            fVar31 = fVar46;
            fVar34 = fVar46;
            fVar32 = fVar46;
            fVar33 = fVar46;
            fVar58 = fVar45;
            fVar59 = fVar46;
            fVar60 = fVar48;
            fVar61 = fVar50;
            local_158 = fVar46;
            fStack_154 = fVar46;
            fStack_150 = fVar46;
            fStack_14c = fVar46;
            local_128 = fVar45;
            fStack_124 = fVar46;
            fStack_120 = fVar48;
            fStack_11c = fVar50;
            goto LAB_14506c750;
          }
          fVar44 = fVar40;
          fVar46 = fStack_124;
          fVar47 = fStack_120;
          fVar49 = fStack_11c;
          fVar58 = fVar40;
          fVar59 = fVar41;
          fVar60 = fVar42;
          fVar61 = fVar43;
          local_148 = fVar45;
          fStack_144 = fVar40;
          fStack_140 = fVar48;
          fStack_13c = fVar50;
          fVar15 = fVar40;
          if (fVar45 != fVar40) {
            if (iVar19 == 0) {
              iVar19 = 0;
              if ((local_1bc & 0x7fffffff) == 0) {
                FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                lVar27 = local_1c8;
                fVar31 = local_158;
                fVar34 = fStack_154;
                fVar32 = fStack_150;
                fVar33 = fStack_14c;
                iVar19 = local_1c0;
              }
              puVar2 = (undefined8 *)(lVar27 + (longlong)iVar19 * 0x14);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = CONCAT44(fStack_144,local_148);
                puVar2[1] = CONCAT44(fStack_13c,fStack_140);
                *(float *)(puVar2 + 2) = fVar30;
              }
              local_1c0 = 1;
              fVar46 = fStack_124;
              fVar47 = fStack_120;
              fVar49 = fStack_11c;
              iVar20 = 1;
              fVar53 = local_1b8;
              fVar12 = fStack_1b4;
              fVar13 = fStack_1b0;
              fVar14 = fStack_1ac;
              fVar16 = local_110;
            }
            else {
              lVar18 = (longlong)(iVar19 + -1);
              if ((((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar48) &&
                   (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar50)) &&
                  (*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar45)) &&
                 (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar30)) {
                *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar40;
              }
              else {
                iVar20 = iVar19 + 1;
                if ((int)(local_1bc & 0x7fffffff) < iVar20) {
                  FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                  lVar27 = local_1c8;
                  fVar31 = local_158;
                  fVar34 = fStack_154;
                  fVar32 = fStack_150;
                  fVar33 = fStack_14c;
                  iVar19 = local_1c0;
                }
                puVar2 = (undefined8 *)(lVar27 + (longlong)iVar19 * 0x14);
                fVar46 = fStack_124;
                fVar47 = fStack_120;
                fVar49 = fStack_11c;
                local_1c0 = iVar20;
                fVar53 = local_1b8;
                fVar12 = fStack_1b4;
                fVar13 = fStack_1b0;
                fVar14 = fStack_1ac;
                fVar16 = local_110;
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(fStack_144,local_148);
                  puVar2[1] = CONCAT44(fStack_13c,fStack_140);
                  *(float *)(puVar2 + 2) = fVar30;
                }
              }
            }
          }
        }
        local_110 = fVar16;
        local_128 = fVar15;
        fStack_1ac = fVar14;
        fStack_1b0 = fVar13;
        fStack_1b4 = fVar12;
        local_1b8 = fVar53;
        bVar8 = false;
        local_188 = fVar30;
        bVar9 = false;
        local_170 = fVar29;
        local_198 = fVar44;
        fStack_194 = fVar46;
        fStack_190 = fVar47;
        fStack_18c = fVar49;
        local_180 = fVar51;
        fStack_17c = fVar36;
        fStack_178 = fVar54;
        fStack_174 = fVar56;
        if (fVar35 <= fVar31) {
          fVar53 = fVar36;
          fVar55 = fVar54;
          fVar57 = fVar56;
          if (fVar31 <= fVar35) {
            bVar9 = true;
            fVar31 = fVar51;
            goto LAB_14506cd1d;
          }
          bVar9 = true;
          fStack_194 = fVar35;
          fVar45 = fVar35;
          fVar46 = fStack_124;
          fVar48 = fStack_120;
          fVar50 = fStack_11c;
          fVar52 = fVar51;
          fVar58 = fVar35;
          fVar59 = fVar37;
          fVar60 = fVar38;
          fVar61 = fVar39;
          local_128 = fVar35;
        }
        else {
          fStack_17c = fVar31;
          fVar36 = fVar31;
          fVar40 = fVar31;
          fVar41 = fVar34;
          fVar42 = fVar32;
          fVar43 = fVar33;
          fVar53 = fStack_10c;
          fVar55 = fStack_108;
          fVar57 = fStack_104;
          local_1b8 = fVar31;
          fStack_1b4 = fVar34;
          fStack_1b0 = fVar32;
          fStack_1ac = fVar33;
          local_110 = fVar31;
LAB_14506cd1d:
          bVar8 = true;
          fVar35 = fVar46;
          fVar45 = fVar44;
          fVar48 = fVar47;
          fVar50 = fVar49;
          fVar52 = fVar31;
          fStack_17c = fVar36;
        }
        fVar36 = fVar53;
        fVar31 = fStack_17c;
        fStack_194 = fVar35;
        if (fVar47 == fVar54) {
          pfVar22 = &local_198;
          if (fVar56 <= fVar49) {
            pfVar22 = &local_180;
          }
          FUN_14506a440(&local_1c8,pfVar22);
          lVar27 = local_1c8;
          iVar19 = local_1c0;
        }
        else {
          fVar34 = (fVar56 - fVar49) / (fVar47 - fVar54);
          fVar40 = local_1b8;
          fVar41 = fStack_1b4;
          fVar42 = fStack_1b0;
          fVar43 = fStack_1ac;
          iVar19 = iVar20;
          if (fVar44 <= fVar34) {
            if (fVar34 <= fVar35) {
              if (fVar54 <= fVar47) {
                iVar25 = iVar20;
                fStack_194 = fVar34;
                local_180 = fVar34;
                if (fVar44 != fVar34) {
                  if (iVar20 == 0) {
                    iVar19 = 0;
                    if ((local_1bc & 0x7fffffff) == 0) {
                      FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                      lVar27 = local_1c8;
                      iVar19 = local_1c0;
                    }
                    pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                    if (pfVar22 != (float *)0x0) {
                      *pfVar22 = local_198;
                      pfVar22[1] = fStack_194;
                      pfVar22[2] = fStack_190;
                      pfVar22[3] = fStack_18c;
                      pfVar22[4] = fVar30;
                    }
                    local_1c0 = 1;
                    iVar25 = 1;
                  }
                  else {
                    lVar18 = (longlong)(iVar20 + -1);
                    if (((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar47) &&
                        (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar49)) &&
                       ((*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar44 &&
                        (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar30)))) {
                      *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar34;
                    }
                    else {
                      iVar25 = iVar20 + 1;
                      if ((int)(local_1bc & 0x7fffffff) < iVar25) {
                        FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                        lVar27 = local_1c8;
                        iVar20 = local_1c0;
                      }
                      pfVar22 = (float *)(lVar27 + (longlong)iVar20 * 0x14);
                      local_1c0 = iVar25;
                      if (pfVar22 != (float *)0x0) {
                        *pfVar22 = local_198;
                        pfVar22[1] = fStack_194;
                        pfVar22[2] = fStack_190;
                        pfVar22[3] = fStack_18c;
                        pfVar22[4] = fVar30;
                      }
                    }
                  }
                }
                fVar40 = local_1b8;
                fVar41 = fStack_1b4;
                fVar42 = fStack_1b0;
                fVar43 = fStack_1ac;
                iVar19 = iVar25;
                if (fVar34 != fVar31) {
                  if (iVar25 == 0) {
                    iVar19 = 0;
                    if ((local_1bc & 0x7fffffff) == 0) {
                      FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                      lVar27 = local_1c8;
                      iVar19 = local_1c0;
                    }
                    pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                    if (pfVar22 == (float *)0x0) goto LAB_14506ce1a;
                    local_1c0 = 1;
                    *pfVar22 = local_180;
                    pfVar22[1] = fStack_17c;
                    pfVar22[2] = fStack_178;
                    pfVar22[3] = fStack_174;
                    pfVar22[4] = fVar29;
                    fVar40 = local_1b8;
                    fVar41 = fStack_1b4;
                    fVar42 = fStack_1b0;
                    fVar43 = fStack_1ac;
                    iVar19 = 1;
                  }
                  else {
                    lVar18 = (longlong)(iVar25 + -1);
                    if (((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar54) &&
                        (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar56)) &&
                       ((*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar34 &&
                        (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar29)))) {
                      *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar31;
                    }
                    else {
                      iVar19 = iVar25 + 1;
                      if ((int)(local_1bc & 0x7fffffff) < iVar19) {
                        FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                        lVar27 = local_1c8;
                        iVar25 = local_1c0;
                      }
                      pfVar22 = (float *)(lVar27 + (longlong)iVar25 * 0x14);
                      fVar40 = local_1b8;
                      fVar41 = fStack_1b4;
                      fVar42 = fStack_1b0;
                      fVar43 = fStack_1ac;
                      local_1c0 = iVar19;
                      if (pfVar22 != (float *)0x0) {
                        *pfVar22 = local_180;
                        pfVar22[1] = fStack_17c;
                        pfVar22[2] = fStack_178;
                        pfVar22[3] = fStack_174;
                        pfVar22[4] = fVar29;
                      }
                    }
                  }
                }
              }
              else {
                iVar25 = iVar20;
                local_198 = fVar34;
                fStack_17c = fVar34;
                if (fVar51 != fVar34) {
                  if (iVar20 == 0) {
                    iVar19 = 0;
                    if ((local_1bc & 0x7fffffff) == 0) {
                      FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                      lVar27 = local_1c8;
                      iVar19 = local_1c0;
                    }
                    pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                    if (pfVar22 != (float *)0x0) {
                      *pfVar22 = local_180;
                      pfVar22[1] = fStack_17c;
                      pfVar22[2] = fStack_178;
                      pfVar22[3] = fStack_174;
                      pfVar22[4] = fVar29;
                    }
                    local_1c0 = 1;
                    iVar25 = 1;
                  }
                  else {
                    lVar18 = (longlong)(iVar20 + -1);
                    if ((((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar54) &&
                         (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar56)) &&
                        (*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar51)) &&
                       (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar29)) {
                      *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar34;
                    }
                    else {
                      iVar25 = iVar20 + 1;
                      if ((int)(local_1bc & 0x7fffffff) < iVar25) {
                        FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                        lVar27 = local_1c8;
                        iVar20 = local_1c0;
                      }
                      pfVar22 = (float *)(lVar27 + (longlong)iVar20 * 0x14);
                      local_1c0 = iVar25;
                      if (pfVar22 != (float *)0x0) {
                        *pfVar22 = local_180;
                        pfVar22[1] = fStack_17c;
                        pfVar22[2] = fStack_178;
                        pfVar22[3] = fStack_174;
                        pfVar22[4] = fVar29;
                      }
                    }
                  }
                }
                fVar40 = local_1b8;
                fVar41 = fStack_1b4;
                fVar42 = fStack_1b0;
                fVar43 = fStack_1ac;
                iVar19 = iVar25;
                if (fVar34 != fVar35) {
                  if (iVar25 == 0) {
                    iVar19 = 0;
                    if ((local_1bc & 0x7fffffff) == 0) {
                      FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                      lVar27 = local_1c8;
                      iVar19 = local_1c0;
                    }
                    pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                    if (pfVar22 == (float *)0x0) goto LAB_14506ce1a;
                    local_1c0 = 1;
                    *pfVar22 = local_198;
                    pfVar22[1] = fStack_194;
                    pfVar22[2] = fStack_190;
                    pfVar22[3] = fStack_18c;
                    pfVar22[4] = fVar30;
                    fVar40 = local_1b8;
                    fVar41 = fStack_1b4;
                    fVar42 = fStack_1b0;
                    fVar43 = fStack_1ac;
                    iVar19 = 1;
                  }
                  else {
                    lVar18 = (longlong)(iVar25 + -1);
                    if (((*(float *)(lVar27 + 8 + lVar18 * 0x14) == fVar47) &&
                        (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == fVar49)) &&
                       ((*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar34 &&
                        (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == fVar30)))) {
                      *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar35;
                    }
                    else {
                      iVar19 = iVar25 + 1;
                      if ((int)(local_1bc & 0x7fffffff) < iVar19) {
                        FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                        lVar27 = local_1c8;
                        iVar25 = local_1c0;
                      }
                      pfVar22 = (float *)(lVar27 + (longlong)iVar25 * 0x14);
                      fVar40 = local_1b8;
                      fVar41 = fStack_1b4;
                      fVar42 = fStack_1b0;
                      fVar43 = fStack_1ac;
                      local_1c0 = iVar19;
                      if (pfVar22 != (float *)0x0) {
                        *pfVar22 = local_198;
                        pfVar22[1] = fStack_194;
                        pfVar22[2] = fStack_190;
                        pfVar22[3] = fStack_18c;
                        pfVar22[4] = fVar30;
                      }
                    }
                  }
                }
              }
            }
            else {
              pfVar22 = &local_180;
              if (fVar54 <= fVar47) {
                pfVar22 = &local_198;
              }
              fVar31 = *pfVar22;
              fVar34 = pfVar22[1];
              if (fVar31 != fVar34) goto joined_r0x00014506cefd;
            }
          }
          else {
            pfVar22 = &local_198;
            if (fVar54 <= fVar47) {
              pfVar22 = &local_180;
            }
            fVar31 = *pfVar22;
            fVar34 = pfVar22[1];
            if (fVar31 != fVar34) {
joined_r0x00014506cefd:
              if (iVar20 == 0) {
                iVar19 = 0;
                if ((local_1bc & 0x7fffffff) == 0) {
                  FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                  lVar27 = local_1c8;
                  iVar19 = local_1c0;
                }
                pfVar3 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
                if (pfVar3 != (float *)0x0) {
                  fVar41 = pfVar22[1];
                  fVar42 = pfVar22[2];
                  fVar43 = pfVar22[3];
                  fVar40 = pfVar22[4];
                  *pfVar3 = *pfVar22;
                  pfVar3[1] = fVar41;
                  pfVar3[2] = fVar42;
                  pfVar3[3] = fVar43;
                  pfVar3[4] = fVar40;
                }
LAB_14506ce1a:
                local_1c0 = 1;
                fVar40 = local_1b8;
                fVar41 = fStack_1b4;
                fVar42 = fStack_1b0;
                fVar43 = fStack_1ac;
                iVar19 = 1;
              }
              else {
                lVar18 = (longlong)(iVar20 + -1);
                if (((*(float *)(lVar27 + 8 + lVar18 * 0x14) == pfVar22[2]) &&
                    (*(float *)(lVar27 + 0xc + lVar18 * 0x14) == pfVar22[3])) &&
                   ((*(float *)(lVar27 + 4 + lVar18 * 0x14) == fVar31 &&
                    (*(float *)(lVar27 + 0x10 + lVar18 * 0x14) == pfVar22[4])))) {
                  *(float *)(lVar27 + 4 + lVar18 * 0x14) = fVar34;
                }
                else {
                  iVar19 = iVar20 + 1;
                  if ((int)(local_1bc & 0x7fffffff) < iVar19) {
                    FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0);
                    lVar27 = local_1c8;
                    iVar20 = local_1c0;
                  }
                  pfVar3 = (float *)(lVar27 + (longlong)iVar20 * 0x14);
                  lVar24 = local_130;
                  fVar40 = local_1b8;
                  fVar41 = fStack_1b4;
                  fVar42 = fStack_1b0;
                  fVar43 = fStack_1ac;
                  local_1c0 = iVar19;
                  if (pfVar3 != (float *)0x0) {
                    fVar34 = pfVar22[1];
                    fVar32 = pfVar22[2];
                    fVar33 = pfVar22[3];
                    fVar31 = pfVar22[4];
                    *pfVar3 = *pfVar22;
                    pfVar3[1] = fVar34;
                    pfVar3[2] = fVar32;
                    pfVar3[3] = fVar33;
                    pfVar3[4] = fVar31;
                  }
                }
              }
            }
          }
        }
        bVar10 = false;
        if (bVar8) {
          local_res8 = local_res8 + 1;
          local_1a0 = local_1a0 + 1;
          if (local_1a0 == iVar21) {
            bVar10 = true;
          }
          else {
            pfVar22 = (float *)(*param_1 + local_1a0 * 0x14);
            fVar45 = *pfVar22;
            fVar46 = pfVar22[1];
            fVar48 = pfVar22[2];
            fVar50 = pfVar22[3];
            fVar30 = *(float *)(*param_1 + 0x10 + local_1a0 * 0x14);
            fVar58 = fVar45;
            fVar59 = fVar46;
            fVar60 = fVar48;
            fVar61 = fVar50;
            local_158 = fVar46;
            fStack_154 = fVar46;
            fStack_150 = fVar46;
            fStack_14c = fVar46;
            local_128 = fVar45;
            fStack_124 = fVar46;
            fStack_120 = fVar48;
            fStack_11c = fVar50;
            bVar10 = false;
          }
        }
        fVar31 = local_158;
        if (bVar9) {
          iVar25 = local_res18 + 1;
          lVar24 = lVar24 + 1;
          fVar35 = local_f8;
          local_130 = lVar24;
          if (lVar24 == local_168) break;
          pfVar22 = (float *)(*param_2 + lVar24 * 0x14);
          fVar40 = *pfVar22;
          fVar41 = pfVar22[1];
          fVar42 = pfVar22[2];
          fVar43 = pfVar22[3];
          fVar29 = *(float *)(*param_2 + 0x10 + lVar24 * 0x14);
          fVar52 = fVar40;
          fVar36 = fVar41;
          fVar55 = fVar42;
          fVar57 = fVar43;
          local_res18 = iVar25;
          local_1b8 = fVar40;
          fStack_1b4 = fVar41;
          fStack_1b0 = fVar42;
          fStack_1ac = fVar43;
          local_110 = fVar40;
          fStack_10c = fVar41;
          fStack_108 = fVar42;
          fStack_104 = fVar43;
          local_f8 = fVar41;
          fStack_f4 = fVar41;
          fStack_f0 = fVar41;
          fStack_ec = fVar41;
        }
        lVar18 = local_168;
        lVar28 = local_1a0;
        fVar34 = fStack_154;
        fVar32 = fStack_150;
        fVar33 = fStack_14c;
        fVar35 = local_f8;
        fVar37 = fStack_f4;
        fVar38 = fStack_f0;
        fVar39 = fStack_ec;
        iVar25 = local_res18;
      } while (!bVar10);
      if (local_res8 < iVar21) {
        iVar20 = iVar19;
        if (fVar58 != fVar31) {
          if (iVar19 == 0) {
            iVar19 = 0;
            if ((local_1bc & 0x7fffffff) == 0) {
              FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,1);
              lVar27 = local_1c8;
              iVar19 = local_1c0;
            }
            pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
            if (pfVar22 != (float *)0x0) {
              *pfVar22 = fVar45;
              pfVar22[1] = fVar46;
              pfVar22[2] = fVar48;
              pfVar22[3] = fVar50;
              pfVar22[4] = fVar30;
            }
            local_1c0 = 1;
            iVar20 = 1;
          }
          else {
            lVar24 = (longlong)(iVar19 + -1);
            if ((((*(float *)(lVar27 + 8 + lVar24 * 0x14) == fVar48) &&
                 (*(float *)(lVar27 + 0xc + lVar24 * 0x14) == fVar50)) &&
                (*(float *)(lVar27 + 4 + lVar24 * 0x14) == fVar58)) &&
               (*(float *)(lVar27 + 0x10 + lVar24 * 0x14) == fVar30)) {
              *(float *)(lVar27 + 4 + lVar24 * 0x14) = fVar31;
            }
            else {
              iVar20 = iVar19 + 1;
              if ((int)(local_1bc & 0x7fffffff) < iVar20) {
                FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar20);
                lVar27 = local_1c8;
                iVar19 = local_1c0;
              }
              pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
              local_1c0 = iVar20;
              if (pfVar22 != (float *)0x0) {
                *pfVar22 = fVar45;
                pfVar22[1] = fVar46;
                pfVar22[2] = fVar48;
                pfVar22[3] = fVar50;
                pfVar22[4] = fVar30;
              }
            }
          }
        }
        local_res8 = local_res8 + 1;
        iVar19 = iVar20;
        if (local_res8 != iVar21) {
          lVar24 = (longlong)local_res8 * 0x14;
          uVar26 = (ulonglong)(uint)(iVar21 - local_res8);
          do {
            FUN_14506a440(&local_1c8,*param_1 + lVar24);
            lVar24 = lVar24 + 0x14;
            uVar26 = uVar26 - 1;
            lVar27 = local_1c8;
            iVar19 = local_1c0;
          } while (uVar26 != 0);
        }
      }
      if (iVar25 < local_1a8) {
        if (fVar40 != fVar35) {
          if (iVar19 == 0) {
            iVar21 = 0;
            if ((local_1bc & 0x7fffffff) == 0) {
              FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,1);
              lVar27 = local_1c8;
              iVar21 = local_1c0;
            }
            pfVar22 = (float *)(lVar27 + (longlong)iVar21 * 0x14);
            if (pfVar22 != (float *)0x0) {
              *pfVar22 = fVar52;
              pfVar22[1] = fVar36;
              pfVar22[2] = fVar55;
              pfVar22[3] = fVar57;
              pfVar22[4] = fVar29;
            }
            local_1c0 = 1;
          }
          else {
            lVar24 = (longlong)(iVar19 + -1);
            if (((*(float *)(lVar27 + 8 + lVar24 * 0x14) == fVar55) &&
                (*(float *)(lVar27 + 0xc + lVar24 * 0x14) == fVar57)) &&
               ((*(float *)(lVar27 + 4 + lVar24 * 0x14) == fVar40 &&
                (*(float *)(lVar27 + 0x10 + lVar24 * 0x14) == fVar29)))) {
              *(float *)(lVar27 + 4 + lVar24 * 0x14) = fVar35;
            }
            else {
              iVar21 = iVar19 + 1;
              if ((int)(local_1bc & 0x7fffffff) < iVar21) {
                FUN_14506e1d0(&local_1c8,&PTR_vftable_14c6e47a0,(longlong)iVar21);
                lVar27 = local_1c8;
                iVar19 = local_1c0;
              }
              pfVar22 = (float *)(lVar27 + (longlong)iVar19 * 0x14);
              local_1c0 = iVar21;
              if (pfVar22 != (float *)0x0) {
                *pfVar22 = fVar52;
                pfVar22[1] = fVar36;
                pfVar22[2] = fVar55;
                pfVar22[3] = fVar57;
                pfVar22[4] = fVar29;
              }
            }
          }
        }
        iVar25 = iVar25 + 1;
        if (iVar25 != local_1a8) {
          lVar24 = (longlong)iVar25 * 0x14;
          uVar26 = (ulonglong)(uint)(local_1a8 - iVar25);
          do {
            FUN_14506a440(&local_1c8,*param_2 + lVar24);
            lVar24 = lVar24 + 0x14;
            uVar26 = uVar26 - 1;
            lVar27 = local_1c8;
          } while (uVar26 != 0);
        }
      }
      if (&local_1c8 != param_1) {
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(&local_1c8,&PTR_vftable_14c6e47a0);
        lVar27 = *param_1;
        *param_1 = local_1c8;
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(int *)(param_1 + 1) = local_1c0;
        *(uint *)((longlong)param_1 + 0xc) = local_1bc;
        local_1bc = uVar4;
      }
      if ((-1 < (int)local_1bc) && (lVar27 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar27,(ulonglong)(local_1bc & 0x7fffffff) * 0x14);
      }
    }
  }
  return;
}



// FUNCTION 14506d7d0 FUN_14506d7d0 body=18 status=ok
// SIG undefined FUN_14506d7d0(void)

undefined4 FUN_14506d7d0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x14);
}



// FUNCTION 14506d7f0 FUN_14506d7f0 body=1514 status=ok
// SIG undefined FUN_14506d7f0(void)

void FUN_14506d7f0(longlong *param_1,float param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((param_2 != 0.0) && ((int)param_1[1] != 0)) {
    if (((float *)*param_1)[(longlong)(int)param_1[1] * 5 + -4] - *(float *)*param_1 <= param_2) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      lVar9 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0x80000000;
      FUN_14506e1d0(&local_a8,&PTR_vftable_14c6e47a0,0x10);
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,0x10);
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 0x80000000;
      FUN_14506e1d0(&local_c8,&PTR_vftable_14c6e47a0,0x10);
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 0x80000000;
      FUN_14506e1d0(&local_d8,&PTR_vftable_14c6e47a0,0x10);
      uStack_78 = 0;
      iVar13 = local_d0 + 1;
      fStack_7c = *(float *)*param_1 + param_2;
      local_80 = *(float *)*param_1 - param_2;
      if ((int)(local_cc & 0x7fffffff) < iVar13) {
        FUN_14506e1d0(&local_d8,&PTR_vftable_14c6e47a0,(longlong)iVar13);
      }
      pfVar8 = (float *)(local_d8 + (longlong)local_d0 * 0x14);
      if (pfVar8 != (float *)0x0) {
        *pfVar8 = local_80;
        pfVar8[1] = fStack_7c;
        pfVar8[2] = (float)uStack_78;
        pfVar8[3] = uStack_78._4_4_;
        pfVar8[4] = -NAN;
      }
      lVar6 = param_1[1];
      lVar10 = lVar9;
      iVar12 = local_a0;
      iVar11 = local_b0;
      local_d0 = iVar13;
      if (0 < (longlong)(int)lVar6) {
        do {
          lVar4 = *param_1;
          if (lVar10 != 0) {
            local_98 = *(float *)(lVar9 + -0x10 + lVar4);
            if (local_98 < *(float *)(lVar4 + lVar9)) {
              fStack_94 = *(float *)(lVar4 + lVar9) + param_2;
              uStack_90 = 0;
              local_98 = local_98 - param_2;
              local_88 = 0xffffffff;
              FUN_14506a530(&local_d8,&local_98);
            }
          }
          fVar15 = *(float *)(lVar4 + 8 + lVar9);
          iVar13 = iVar11;
          if (fVar15 == 0.0) {
            pfVar1 = (float *)(lVar4 + lVar9);
            uStack_90 = *(undefined8 *)(pfVar1 + 2);
            local_88 = *(undefined4 *)(lVar4 + 0x10 + lVar9);
            pfVar8 = &local_98;
            local_98 = *pfVar1 - param_2;
            fStack_94 = pfVar1[1] + param_2;
          }
          else {
            pfVar8 = (float *)(lVar4 + lVar9);
            fVar5 = pfVar8[2];
            uVar3 = *(undefined4 *)(lVar4 + 0x10 + lVar9);
            if (0.0 <= fVar15) {
              local_98 = *pfVar8 + param_2;
              fStack_94 = pfVar8[1] + param_2;
              uStack_90 = CONCAT44(pfVar8[3] - fVar5 * param_2,fVar5);
              if (local_98 != fStack_94) {
                iVar13 = iVar11 + 1;
                if ((int)(local_ac & 0x7fffffff) < iVar13) {
                  FUN_14506e1d0(&local_b8,&PTR_vftable_14c6e47a0,(longlong)iVar13);
                  iVar11 = local_b0;
                }
                puVar2 = (undefined8 *)(local_b8 + (longlong)iVar11 * 0x14);
                local_b0 = iVar13;
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(fStack_94,local_98);
                  puVar2[1] = uStack_90;
                  *(undefined4 *)(puVar2 + 2) = uVar3;
                }
              }
              fVar15 = *(float *)(lVar4 + lVar9);
            }
            else {
              fVar15 = -param_2;
              local_98 = *pfVar8 + fVar15;
              fStack_94 = pfVar8[1] + fVar15;
              uStack_90 = CONCAT44(pfVar8[3] - fVar5 * fVar15,fVar5);
              if (local_98 != fStack_94) {
                iVar11 = iVar12 + 1;
                if ((int)(local_9c & 0x7fffffff) < iVar11) {
                  FUN_14506e1d0(&local_a8,&PTR_vftable_14c6e47a0,(longlong)iVar11);
                  iVar12 = local_a0;
                }
                puVar2 = (undefined8 *)(local_a8 + (longlong)iVar12 * 0x14);
                iVar12 = iVar11;
                local_a0 = iVar11;
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(fStack_94,local_98);
                  puVar2[1] = uStack_90;
                  *(undefined4 *)(puVar2 + 2) = uVar3;
                }
              }
              fVar15 = *(float *)(lVar4 + 4 + lVar9);
            }
            local_70 = *(undefined4 *)(lVar4 + 0x10 + lVar9);
            pfVar8 = &local_80;
            local_80 = fVar15 - param_2;
            fStack_7c = fVar15 + param_2;
            uStack_78 = (ulonglong)
                        (uint)(fVar15 * *(float *)(lVar4 + 8 + lVar9) +
                              *(float *)(lVar4 + 0xc + lVar9)) << 0x20;
          }
          FUN_14506a530(&local_c8,pfVar8);
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x14;
          iVar11 = iVar13;
        } while (lVar10 < (int)lVar6);
      }
      uStack_78 = 0;
      fStack_7c = *(float *)(*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x14);
      local_80 = fStack_7c - param_2;
      fStack_7c = fStack_7c + param_2;
      if ((local_d0 == 0) ||
         (*(float *)(local_d8 + 4 + (longlong)(local_d0 + -1) * 0x14) < local_80)) {
        iVar13 = local_d0 + 1;
        if ((int)(local_cc & 0x7fffffff) < iVar13) {
          FUN_14506e1d0(&local_d8,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        pfVar8 = (float *)(local_d8 + (longlong)local_d0 * 0x14);
        local_d0 = iVar13;
        if (pfVar8 != (float *)0x0) {
          *pfVar8 = local_80;
          pfVar8[1] = fStack_7c;
          pfVar8[2] = (float)uStack_78;
          pfVar8[3] = uStack_78._4_4_;
          pfVar8[4] = -NAN;
        }
      }
      else {
        *(float *)(local_d8 + 4 + (longlong)(local_d0 + -1) * 0x14) = fStack_7c;
      }
      uVar7 = local_cc;
      lVar6 = local_d8;
      lVar9 = local_c8;
      uVar14 = local_bc;
      if (&local_c8 != param_1) {
        FUN_14506a3d0(param_1,&PTR_vftable_14c6e47a0);
        FUN_14506a3d0(&local_c8,&PTR_vftable_14c6e47a0);
        lVar9 = *param_1;
        *param_1 = local_c8;
        uVar14 = *(uint *)((longlong)param_1 + 0xc);
        *(undefined4 *)(param_1 + 1) = local_c0;
        *(uint *)((longlong)param_1 + 0xc) = local_bc;
      }
      FUN_14506c4a0(param_1,&local_a8);
      FUN_14506c4a0(param_1,&local_b8);
      FUN_145068920(param_1,&local_d8);
      if ((-1 < (int)uVar7) && (lVar6 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar6,(ulonglong)(uVar7 & 0x7fffffff) * 0x14);
      }
      if ((-1 < (int)uVar14) && (lVar9 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(uVar14 & 0x7fffffff) * 0x14);
      }
      if ((-1 < (int)local_ac) && (local_b8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_b8,(ulonglong)(local_ac & 0x7fffffff) * 0x14);
      }
      if ((-1 < (int)local_9c) && (local_a8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_a8,(ulonglong)(local_9c & 0x7fffffff) * 0x14);
      }
    }
  }
  return;
}



// FUNCTION 14506dde0 FUN_14506dde0 body=433 status=ok
// SIG undefined FUN_14506dde0(void)

float FUN_14506dde0(undefined8 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  pfVar2 = (float *)*param_1;
  if (pfVar2[2] <= 0.0) {
    fVar8 = pfVar2[1];
  }
  else {
    fVar8 = *pfVar2;
  }
  lVar4 = (longlong)*(int *)(param_1 + 1);
  fVar8 = pfVar2[2] * fVar8 + pfVar2[3];
  if (1 < lVar4) {
    lVar6 = 1;
    if (4 < lVar4) {
      pfVar3 = pfVar2 + 0xb;
      lVar5 = (lVar4 - 5U >> 2) + 1;
      lVar6 = lVar5 * 4 + 1;
      do {
        if (pfVar3[-4] <= 0.0) {
          fVar7 = pfVar3[-5];
        }
        else {
          fVar7 = pfVar3[-6];
        }
        fVar7 = pfVar3[-4] * fVar7 + pfVar3[-3];
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        pfVar1 = pfVar3 + -1;
        if (pfVar3[1] <= 0.0) {
          pfVar1 = pfVar3;
        }
        fVar7 = pfVar3[1] * *pfVar1 + pfVar3[2];
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        if (pfVar3[6] <= 0.0) {
          fVar7 = pfVar3[5];
        }
        else {
          fVar7 = pfVar3[4];
        }
        fVar7 = pfVar3[6] * fVar7 + pfVar3[7];
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        if (pfVar3[0xb] <= 0.0) {
          fVar7 = pfVar3[10];
        }
        else {
          fVar7 = pfVar3[9];
        }
        fVar7 = pfVar3[0xb] * fVar7 + pfVar3[0xc];
        pfVar3 = pfVar3 + 0x14;
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (lVar4 <= lVar6) {
        return fVar8;
      }
    }
    lVar4 = lVar4 - lVar6;
    pfVar2 = pfVar2 + lVar6 * 5;
    do {
      if (pfVar2[2] <= 0.0) {
        fVar7 = pfVar2[1];
      }
      else {
        fVar7 = *pfVar2;
      }
      fVar7 = pfVar2[2] * fVar7 + pfVar2[3];
      pfVar2 = pfVar2 + 5;
      if (fVar7 <= fVar8) {
        fVar8 = fVar7;
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return fVar8;
}



// FUNCTION 14506dfa0 FUN_14506dfa0 body=549 status=ok
// SIG undefined FUN_14506dfa0(void)

void FUN_14506dfa0(longlong *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = (longlong)(int)param_1[1];
  uVar5 = 0;
  uVar10 = uVar5;
  if (lVar11 < 4) {
    uVar12 = uVar5;
    if (lVar11 < 1) {
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
  }
  else {
    lVar8 = (lVar11 - 4U >> 2) + 1;
    uVar12 = lVar8 * 4;
    uVar6 = uVar5;
    uVar9 = uVar5;
    do {
      lVar7 = *param_1;
      pfVar1 = (float *)(uVar6 + lVar7);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar6 + 0x10 + lVar7);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(uVar5 + lVar7) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar7))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar7) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar7 = *param_1;
      pfVar1 = (float *)(uVar6 + 0x14 + lVar7);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar6 + 0x24 + lVar7);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(uVar5 + lVar7) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar7))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar7) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar7 = *param_1;
      pfVar1 = (float *)(uVar6 + 0x28 + lVar7);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar6 + 0x38 + lVar7);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(uVar5 + lVar7) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar7))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar7) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      lVar7 = *param_1;
      pfVar1 = (float *)(uVar6 + 0x3c + lVar7);
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      uVar2 = *(undefined4 *)(uVar6 + 0x4c + lVar7);
      if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar10 = uVar10 + 1;
        *(undefined8 *)(uVar5 + lVar7) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
        ((undefined8 *)(uVar5 + lVar7))[1] = uVar4;
        *(undefined4 *)(uVar5 + 0x10 + lVar7) = uVar2;
        uVar5 = uVar5 + 0x14;
      }
      uVar6 = uVar6 + 0x50;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar5 = uVar9;
    if (lVar11 <= (longlong)uVar12) {
      *(int *)(param_1 + 1) = (int)uVar9;
      return;
    }
  }
  lVar8 = uVar10 * 0x14;
  lVar7 = uVar12 * 0x14;
  lVar11 = lVar11 - uVar12;
  do {
    lVar3 = *param_1;
    pfVar1 = (float *)(lVar7 + lVar3);
    uVar4 = *(undefined8 *)(pfVar1 + 2);
    uVar2 = *(undefined4 *)(lVar7 + 0x10 + lVar3);
    if (*pfVar1 + *param_2 < pfVar1[1] - *param_2) {
      uVar5 = (ulonglong)((int)uVar5 + 1);
      *(undefined8 *)(lVar8 + lVar3) = CONCAT44(pfVar1[1] - *param_2,*pfVar1 + *param_2);
      ((undefined8 *)(lVar8 + lVar3))[1] = uVar4;
      *(undefined4 *)(lVar8 + 0x10 + lVar3) = uVar2;
      lVar8 = lVar8 + 0x14;
    }
    lVar7 = lVar7 + 0x14;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(int *)(param_1 + 1) = (int)uVar5;
  return;
}



// FUNCTION 14506e1d0 FUN_14506e1d0 body=254 status=ok
// SIG undefined FUN_14506e1d0(void)

ulonglong FUN_14506e1d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x14;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  uVar3 = uVar4 * 0x14 + 0x14;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x14;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x14;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 14506e2d0 FUN_14506e2d0 body=262 status=ok
// SIG undefined FUN_14506e2d0(void)

ulonglong FUN_14506e2d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x14,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  uVar3 = uVar4 * 0x14 + 0x14;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x14;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x14;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x14);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 14506e3e0 FUN_14506e3e0 body=163 status=ok
// SIG undefined FUN_14506e3e0(void)

void FUN_14506e3e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x14);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 14506e490 FUN_14506e490 body=1287 status=ok
// SIG undefined FUN_14506e490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506e490(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,undefined8 param_7,longlong param_8,undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [12];
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 local_198 [16];
  undefined1 *local_188;
  int local_180;
  uint local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined1 *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  
  auVar35 = ZEXT816(0);
  fVar26 = *param_4;
  fVar42 = param_4[1];
  fVar43 = param_4[2];
  fVar24 = param_4[3];
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar27 = *param_3;
  fVar28 = param_3[1];
  fVar29 = param_3[2];
  fVar30 = param_3[3];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar44 = fVar27 - fVar6;
  fVar45 = fVar28 - fVar7;
  fVar46 = fVar29 - fVar8;
  fVar47 = fVar30 - fVar9;
  local_188 = local_178;
  local_17c = 0x80000006;
  local_180 = 6;
  fVar48 = fVar26 - fVar10;
  fVar49 = fVar42 - fVar11;
  fVar50 = fVar43 - fVar12;
  fVar51 = fVar24 - fVar13;
  fVar14 = *param_5;
  fVar15 = param_5[1];
  fVar16 = param_5[2];
  fVar17 = param_5[3];
  fVar36 = (fVar10 - fVar6) * fVar15 - fVar14 * (fVar11 - fVar7);
  fVar39 = (fVar11 - fVar7) * fVar16 - fVar15 * (fVar12 - fVar8);
  fVar40 = (fVar12 - fVar8) * fVar14 - fVar16 * (fVar10 - fVar6);
  auVar38._12_4_ = (fVar13 - fVar9) * fVar17 - fVar17 * (fVar13 - fVar9);
  auVar38._4_4_ = fVar40;
  auVar38._0_4_ = fVar39;
  auVar38._8_4_ = fVar36;
  fVar39 = fVar39 * fVar39;
  fVar40 = fVar40 * fVar40;
  fVar36 = fVar36 * fVar36;
  auVar23._4_4_ = fVar39;
  auVar23._0_4_ = fVar39;
  auVar23._8_4_ = fVar39;
  auVar23._12_4_ = fVar39;
  fVar25 = fVar36 + fVar40 + fVar39;
  if (fVar25 == 0.0) {
    auVar37 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar5._4_4_ = fVar36 + fVar40 + fVar39;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar36 + fVar40 + fVar39;
    auVar5._12_4_ = fVar36 + fVar40 + fVar39;
    auVar23 = sqrtps(auVar23,auVar5);
    auVar23 = divps(auVar38,auVar23);
    auVar37 = auVar23._0_12_;
  }
  local_178._12_4_ = 0.0 - (fVar8 * auVar37._8_4_ + fVar7 * auVar37._4_4_ + fVar6 * auVar37._0_4_);
  local_178._0_12_ = auVar37;
  fVar36 = fVar14 * (fVar42 - fVar28) - fVar15 * (fVar26 - fVar27);
  fVar39 = fVar15 * (fVar43 - fVar29) - fVar16 * (fVar42 - fVar28);
  fVar40 = fVar16 * (fVar26 - fVar27) - fVar14 * (fVar43 - fVar29);
  auVar33._12_4_ = fVar17 * (fVar24 - fVar30) - fVar17 * (fVar24 - fVar30);
  auVar33._4_4_ = fVar40;
  auVar33._0_4_ = fVar39;
  auVar33._8_4_ = fVar36;
  fVar39 = fVar39 * fVar39;
  fVar40 = fVar40 * fVar40;
  fVar36 = fVar36 * fVar36;
  auVar18._4_4_ = fVar39;
  auVar18._0_4_ = fVar39;
  auVar18._8_4_ = fVar39;
  auVar18._12_4_ = fVar39;
  fVar25 = fVar36 + fVar40 + fVar39;
  if (fVar25 == 0.0) {
    auVar37 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar4._4_4_ = fVar36 + fVar40 + fVar39;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar36 + fVar40 + fVar39;
    auVar4._12_4_ = fVar36 + fVar40 + fVar39;
    auVar23 = sqrtps(auVar18,auVar4);
    auVar23 = divps(auVar33,auVar23);
    auVar37 = auVar23._0_12_;
  }
  local_168._12_4_ =
       0.0 - (auVar37._8_4_ * fVar29 + auVar37._4_4_ * fVar28 + auVar37._0_4_ * fVar27);
  local_168._0_12_ = auVar37;
  fVar40 = fVar14 * fVar45 - fVar15 * fVar44;
  fVar39 = fVar15 * fVar46 - fVar16 * fVar45;
  fVar25 = fVar16 * fVar44 - fVar14 * fVar46;
  auVar31._12_4_ = fVar17 * fVar47 - fVar17 * fVar47;
  auVar31._4_4_ = fVar25;
  auVar31._0_4_ = fVar39;
  auVar31._8_4_ = fVar40;
  fVar39 = fVar39 * fVar39;
  fVar25 = fVar25 * fVar25;
  fVar40 = fVar40 * fVar40;
  auVar19._4_4_ = fVar39;
  auVar19._0_4_ = fVar39;
  auVar19._8_4_ = fVar39;
  auVar19._12_4_ = fVar39;
  fVar36 = fVar25 + fVar39 + fVar40;
  if (fVar36 == 0.0) {
    auVar37 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar3._4_4_ = fVar25 + fVar39 + fVar40;
    auVar3._0_4_ = fVar36;
    auVar3._8_4_ = fVar25 + fVar39 + fVar40;
    auVar3._12_4_ = fVar25 + fVar39 + fVar40;
    auVar23 = sqrtps(auVar19,auVar3);
    auVar23 = divps(auVar31,auVar23);
    auVar37 = auVar23._0_12_;
  }
  local_158._12_4_ = 0.0 - (fVar8 * auVar37._8_4_ + fVar7 * auVar37._4_4_ + fVar6 * auVar37._0_4_);
  local_158._0_12_ = auVar37;
  fVar36 = fVar48 * fVar15 - fVar14 * fVar49;
  fVar39 = fVar49 * fVar16 - fVar15 * fVar50;
  fVar40 = fVar50 * fVar14 - fVar16 * fVar48;
  auVar32._12_4_ = fVar51 * fVar17 - fVar17 * fVar51;
  auVar32._4_4_ = fVar40;
  auVar32._0_4_ = fVar39;
  auVar32._8_4_ = fVar36;
  fVar39 = fVar39 * fVar39;
  fVar40 = fVar40 * fVar40;
  fVar36 = fVar36 * fVar36;
  auVar20._4_4_ = fVar39;
  auVar20._0_4_ = fVar39;
  auVar20._8_4_ = fVar39;
  auVar20._12_4_ = fVar39;
  fVar25 = fVar36 + fVar40 + fVar39;
  if (fVar25 == 0.0) {
    auVar37 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar2._4_4_ = fVar36 + fVar40 + fVar39;
    auVar2._0_4_ = fVar25;
    auVar2._8_4_ = fVar36 + fVar40 + fVar39;
    auVar2._12_4_ = fVar36 + fVar40 + fVar39;
    auVar23 = sqrtps(auVar20,auVar2);
    auVar23 = divps(auVar32,auVar23);
    auVar37 = auVar23._0_12_;
  }
  local_148._12_4_ =
       0.0 - (fVar12 * auVar37._8_4_ + fVar11 * auVar37._4_4_ + fVar10 * auVar37._0_4_);
  local_148._0_12_ = auVar37;
  fVar39 = (fVar26 - fVar6) * (fVar28 - fVar11) - (fVar42 - fVar7) * (fVar27 - fVar10);
  fVar42 = (fVar42 - fVar7) * (fVar29 - fVar12) - (fVar43 - fVar8) * (fVar28 - fVar11);
  fVar43 = (fVar43 - fVar8) * (fVar27 - fVar10) - (fVar26 - fVar6) * (fVar29 - fVar12);
  auVar41._12_4_ = (fVar24 - fVar9) * (fVar30 - fVar13) - (fVar24 - fVar9) * (fVar30 - fVar13);
  auVar41._4_4_ = fVar43;
  auVar41._0_4_ = fVar42;
  auVar41._8_4_ = fVar39;
  fVar42 = fVar42 * fVar42;
  fVar43 = fVar43 * fVar43;
  fVar39 = fVar39 * fVar39;
  auVar21._4_4_ = fVar42;
  auVar21._0_4_ = fVar42;
  auVar21._8_4_ = fVar42;
  auVar21._12_4_ = fVar42;
  fVar26 = fVar39 + fVar43 + fVar42;
  if (fVar26 == 0.0) {
    auVar37 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar1._4_4_ = fVar39 + fVar43 + fVar42;
    auVar1._0_4_ = fVar26;
    auVar1._8_4_ = fVar39 + fVar43 + fVar42;
    auVar1._12_4_ = fVar39 + fVar43 + fVar42;
    auVar23 = sqrtps(auVar21,auVar1);
    auVar23 = divps(auVar41,auVar23);
    auVar37 = auVar23._0_12_;
  }
  fVar26 = auVar37._0_4_;
  fVar42 = auVar37._4_4_;
  fVar43 = auVar37._8_4_;
  fVar48 = fVar48 * _DAT_14c6dad90;
  fVar49 = fVar49 * fRam000000014c6dad94;
  fVar50 = fVar50 * fRam000000014c6dad98;
  fVar51 = fVar51 * fRam000000014c6dad9c;
  local_128._12_4_ =
       0.0 - ((fVar16 * param_6[2] + fVar8) * fVar43 +
             (fVar15 * param_6[1] + fVar7) * fVar42 + (fVar14 * *param_6 + fVar6) * fVar26);
  fVar27 = fVar44 * fVar44;
  fVar29 = fVar45 * fVar45;
  fVar30 = fVar46 * fVar46;
  local_138 = -fVar26;
  fStack_134 = -fVar42;
  fStack_130 = -fVar43;
  fStack_12c = -(0.0 - (fVar43 * fVar8 + fVar42 * fVar7 + fVar26 * fVar6));
  local_128._0_12_ = auVar37;
  fVar26 = fVar44 * _DAT_14c6dad90;
  fVar42 = fVar45 * fRam000000014c6dad94;
  fVar43 = fVar46 * fRam000000014c6dad98;
  fVar24 = fVar47 * fRam000000014c6dad9c;
  auVar22._4_4_ = fVar27;
  auVar22._0_4_ = fVar27;
  auVar22._8_4_ = fVar27;
  auVar22._12_4_ = fVar27;
  fVar28 = fVar30 + fVar29 + fVar27;
  if (fVar28 != 0.0) {
    auVar35._4_4_ = fVar30 + fVar29 + fVar27;
    auVar35._0_4_ = fVar28;
    auVar35._8_4_ = fVar30 + fVar29 + fVar27;
    auVar35._12_4_ = fVar30 + fVar29 + fVar27;
    auVar23 = sqrtps(auVar22,auVar35);
    auVar34._4_4_ = fVar45;
    auVar34._0_4_ = fVar44;
    auVar34._8_4_ = fVar46;
    auVar34._12_4_ = fVar47;
    auVar35 = divps(auVar34,auVar23);
  }
  FUN_145068400(local_198);
  local_110 = local_188 + (longlong)local_180 * 0x10;
  local_118 = local_188;
  local_b8 = param_9;
  local_108 = fVar6 + fVar26;
  fStack_104 = fVar7 + fVar42;
  fStack_100 = fVar8 + fVar43;
  fStack_fc = fVar9 + fVar24;
  local_f8 = fVar10 + fVar48;
  fStack_f4 = fVar11 + fVar49;
  fStack_f0 = fVar12 + fVar50;
  fStack_ec = fVar13 + fVar51;
  local_e8 = -fVar14;
  fStack_e4 = -fVar15;
  fStack_e0 = -fVar16;
  fStack_dc = fVar17;
  local_d8 = fVar14;
  fStack_d4 = fVar15;
  fStack_d0 = fVar16;
  fStack_cc = fVar17;
  local_c8 = auVar35;
  FUN_145063550(*(undefined8 *)(param_8 + 0x20),&local_118,param_7,local_198);
  FUN_144d340d0(local_198);
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_188,(ulonglong)(local_17c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 14506e9a0 FUN_14506e9a0 body=1076 status=ok
// SIG undefined FUN_14506e9a0(void)

void FUN_14506e9a0(float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5,uint param_6,longlong *param_7,longlong *param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar19 [16];
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  longlong local_178;
  int local_170;
  uint local_16c;
  longlong local_168;
  int local_160;
  uint local_15c;
  longlong local_158;
  float fStack_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *local_80;
  
  fVar11 = *(float *)(*param_8 + 0x24) - *(float *)(param_8 + 1);
  auVar18._4_4_ = fVar11;
  auVar18._0_4_ = fVar11;
  auVar18._8_4_ = fVar11;
  auVar18._12_4_ = fVar11;
  lVar2 = *(longlong *)((ulonglong)(param_5 >> 0x16) * 0x120 + *(longlong *)(param_8[2] + 0x38));
  lVar3 = *(longlong *)((ulonglong)(param_6 >> 0x16) * 0x120 + *(longlong *)(param_8[2] + 0x38));
  if (0.001 <= fVar11) {
    local_158 = *(longlong *)param_1;
    fStack_150 = param_1[2];
    fStack_14c = param_1[3];
    local_138 = *param_2;
    fStack_134 = param_2[1];
    fStack_130 = param_2[2];
    fStack_12c = param_2[3];
    fVar11 = *(float *)(lVar2 + 0xc0);
    fVar4 = *(float *)(lVar2 + 0xc4);
    fVar5 = *(float *)(lVar2 + 200);
    uVar6 = *(undefined4 *)(lVar2 + 0xcc);
    uVar7 = *(undefined8 *)(lVar3 + 0xc0);
    uVar8 = *(undefined8 *)(lVar3 + 200);
    fVar13 = (local_138 - *param_1) * fVar11;
    fVar14 = (fStack_134 - param_1[1]) * fVar4;
    fVar15 = (fStack_130 - fStack_150) * fVar5;
    fVar16 = (local_138 - *param_1) - (fVar15 + fVar14 + fVar13) * fVar11;
    fVar17 = (fStack_134 - param_1[1]) - (fVar15 + fVar14 + fVar13) * fVar4;
    fVar13 = (fStack_130 - fStack_150) - (fVar15 + fVar14 + fVar13) * fVar5;
    fVar16 = fVar16 * fVar16;
    fVar17 = fVar17 * fVar17;
    fVar13 = fVar13 * fVar13;
    local_148 = *(undefined4 *)param_3;
    uStack_144 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_140 = *(undefined4 *)(param_3 + 1);
    uStack_13c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_128 = *param_4;
    uStack_120 = param_4[1];
    auVar19._4_4_ = fVar13 + fVar17 + fVar16;
    auVar19._0_4_ = fVar13 + fVar17 + fVar16;
    auVar19._8_4_ = fVar13 + fVar17 + fVar16;
    auVar19._12_4_ = fVar13 + fVar17 + fVar16;
    auVar19 = sqrtps(unaff_XMM8,auVar19);
    local_118 = fVar11;
    fStack_114 = fVar4;
    fStack_110 = fVar5;
    uStack_10c = uVar6;
    local_108 = uVar7;
    uStack_100 = uVar8;
    FUN_145068400(&local_168);
    FUN_14506ede0(&local_158,&local_138,&local_118,0,param_5,&local_168,param_8[3],param_8,0);
    if (local_160 != 0) {
      FUN_145068400(&local_178);
      FUN_14506ede0(&local_148,&local_128,&local_108,1,param_6,&local_178,param_8[3],param_8,0);
      if (local_170 != 0) {
        FUN_145068400(&local_188);
        FUN_145069e40(&local_188,&local_168);
        FUN_145068e50(&local_188,&local_178);
        FUN_14506a2e0(&local_188);
        FUN_14506a150(&local_188);
        divps(auVar18,auVar19);
        FUN_145069e20(&local_188);
        FUN_145068e50(&local_168,&local_188);
        uStack_e0 = CONCAT44(fStack_14c,fStack_150);
        uVar1 = *(undefined4 *)(*param_8 + 0x18);
        auVar12._4_4_ = uVar1;
        auVar12._0_4_ = uVar1;
        auVar12._8_4_ = uVar1;
        auVar12._12_4_ = uVar1;
        local_f8 = divps(auVar12,auVar19);
        local_88 = param_7;
        local_80 = param_8;
        local_e8 = local_158;
        local_c8 = CONCAT44(uStack_144,local_148);
        uStack_c0 = CONCAT44(uStack_13c,uStack_140);
        local_b8 = local_128;
        uStack_b0 = uStack_120;
        local_d8 = local_138;
        fStack_d4 = fStack_134;
        fStack_d0 = fStack_130;
        fStack_cc = fStack_12c;
        local_a8 = fVar11;
        fStack_a4 = fVar4;
        fStack_a0 = fVar5;
        uStack_9c = uVar6;
        local_98 = uVar7;
        uStack_90 = uVar8;
        FUN_14506fd20(&local_168,&local_178,local_f8);
        local_180 = 0;
        if ((-1 < (int)local_17c) && (local_188 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_188,(ulonglong)(local_17c & 0x7fffffff) * 0x14);
        }
        local_188 = 0;
        local_17c = 0x80000000;
      }
      local_170 = 0;
      if ((-1 < (int)local_16c) && (local_178 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_178,(ulonglong)(local_16c & 0x7fffffff) * 0x14);
      }
      local_178 = 0;
      local_16c = 0x80000000;
    }
    local_160 = 0;
    if ((-1 < (int)local_15c) && (local_168 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_168,(ulonglong)(local_15c & 0x7fffffff) * 0x14);
    }
  }
  else {
    iVar10 = (int)param_7[1] + 1;
    local_158 = lVar3;
    if ((int)(*(uint *)((longlong)param_7 + 0xc) & 0x7fffffff) < iVar10) {
      FUN_145070260(param_7,&PTR_vftable_14c6e47c0,(longlong)iVar10);
    }
    lVar3 = param_7[1];
    *(int *)(param_7 + 1) = iVar10;
    uVar7 = *(undefined8 *)(param_1 + 2);
    puVar9 = (undefined8 *)((longlong)(int)lVar3 * 0x50 + *param_7);
    *puVar9 = *(undefined8 *)param_1;
    puVar9[1] = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 2);
    puVar9[2] = *(undefined8 *)param_2;
    puVar9[3] = uVar7;
    uVar7 = param_3[1];
    puVar9[4] = *param_3;
    puVar9[5] = uVar7;
    uVar7 = param_4[1];
    puVar9[6] = *param_4;
    puVar9[7] = uVar7;
    *(uint *)(puVar9 + 8) = param_5;
    *(uint *)((longlong)puVar9 + 0x44) = param_6;
    *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0x178);
    *(undefined4 *)((longlong)puVar9 + 0x4c) =
         *(undefined4 *)(*(longlong *)(local_158 + 0x20) + 0x178);
  }
  return;
}



// FUNCTION 14506ede0 FUN_14506ede0 body=809 status=ok
// SIG undefined FUN_14506ede0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506ede0(float *param_1,float *param_2,float *param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,longlong *param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 *local_128;
  float *pfStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  float local_100 [5];
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  
  fVar4 = fRam000000014c6dae1c;
  fVar3 = fRam000000014c6dae18;
  fVar2 = fRam000000014c6dae14;
  fVar1 = _DAT_14c6dae10;
  fVar32 = *param_3;
  fVar31 = param_3[1];
  fVar33 = param_3[2];
  fVar25 = param_3[3];
  fVar9 = *param_1 * fVar32;
  fVar10 = param_1[1] * fVar31;
  fVar11 = param_1[2] * fVar33;
  fVar35 = *(float *)(*param_8 + 0x24) - *(float *)(param_8 + 1);
  fVar14 = *param_1 - (fVar11 + fVar10 + fVar9) * fVar32;
  fVar15 = param_1[1] - (fVar11 + fVar10 + fVar9) * fVar31;
  fVar16 = param_1[2] - (fVar11 + fVar10 + fVar9) * fVar33;
  fVar17 = param_1[3] - (fVar11 + fVar10 + fVar9) * fVar25;
  fVar27 = fVar35 * _DAT_14c6dacb0;
  fVar28 = fVar35 * fRam000000014c6dacb4;
  fVar29 = fVar35 * fRam000000014c6dacb8;
  fVar30 = fVar35 * fRam000000014c6dacbc;
  fVar9 = *param_2 * fVar32;
  fVar10 = param_2[1] * fVar31;
  fVar11 = param_2[2] * fVar33;
  fVar18 = *param_2 - (fVar11 + fVar10 + fVar9) * fVar32;
  fVar19 = param_2[1] - (fVar11 + fVar10 + fVar9) * fVar31;
  fVar20 = param_2[2] - (fVar11 + fVar10 + fVar9) * fVar33;
  fVar21 = param_2[3] - (fVar11 + fVar10 + fVar9) * fVar25;
  fVar22 = fVar18 - fVar14;
  fVar23 = fVar19 - fVar15;
  fVar24 = fVar20 - fVar16;
  fVar9 = fVar22 * fVar22;
  fVar11 = fVar23 * fVar23;
  fVar12 = fVar24 * fVar24;
  fVar10 = fVar12 + fVar11 + fVar9;
  auVar8 = ZEXT816(0);
  if (fVar10 == 0.0) {
    auVar34 = ZEXT816(0);
  }
  else {
    auVar8._4_4_ = fVar12 + fVar11 + fVar9;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fVar12 + fVar11 + fVar9;
    auVar8._12_4_ = fVar12 + fVar11 + fVar9;
    auVar34 = sqrtps(unaff_XMM12,auVar8);
    auVar7._4_4_ = fVar23;
    auVar7._0_4_ = fVar22;
    auVar7._8_4_ = fVar24;
    auVar7._12_4_ = fVar21 - fVar17;
    auVar8 = divps(auVar7,auVar34);
  }
  fVar9 = auVar8._0_4_;
  fVar10 = auVar8._4_4_;
  fVar11 = auVar8._8_4_;
  fVar12 = auVar8._12_4_;
  fVar22 = fVar10 * fVar32 - fVar31 * fVar9;
  fVar31 = fVar11 * fVar31 - fVar33 * fVar10;
  fVar32 = fVar9 * fVar33 - fVar32 * fVar11;
  fVar33 = fVar12 * fVar25 - fVar25 * fVar12;
  if (param_4 == 0) {
    fVar31 = -fVar31;
    fVar32 = -fVar32;
    fVar22 = -fVar22;
  }
  fVar25 = fVar31 * _DAT_14c6dae10;
  fVar23 = fVar32 * fRam000000014c6dae14;
  fVar24 = fVar22 * fRam000000014c6dae18;
  fVar26 = fVar33 * fRam000000014c6dae1c;
  FUN_145068400(local_118);
  FUN_145068400(&local_108);
  local_b8 = *(undefined8 *)param_3;
  uStack_b0 = *(undefined8 *)(param_3 + 2);
  local_a8 = &param_8;
  puStack_a0 = &param_9;
  local_98 = param_5;
  local_c8 = param_9;
  local_128 = local_118;
  pfStack_120 = local_100 + 2;
  param_8._0_4_ = 0x3f000000;
  param_8._4_4_ = 0x3f800000;
  local_100[2] = fVar25 + (fVar14 - fVar9 * fVar35);
  local_100[3] = fVar23 + (fVar15 - fVar10 * fVar35);
  local_100[4] = fVar24 + (fVar16 - fVar11 * fVar35);
  fStack_ec = fVar26 + (fVar17 - fVar12 * fVar35);
  local_e8 = fVar25 + fVar18 + fVar9 * fVar35;
  fStack_e4 = fVar23 + fVar19 + fVar10 * fVar35;
  fStack_e0 = fVar24 + fVar20 + fVar11 * fVar35;
  fStack_dc = fVar26 + fVar21 + fVar12 * fVar35;
  local_d8 = fVar31 * fVar27;
  fStack_d4 = fVar32 * fVar28;
  fStack_d0 = fVar22 * fVar29;
  fStack_cc = fVar33 * fVar30;
  FUN_145065550(param_7,local_100 + 2,&local_128);
  FUN_1450692c0(param_6,local_118);
  FUN_145068e50(param_6,&local_108);
  auVar13._4_4_ = fVar35;
  auVar13._0_4_ = fVar35;
  auVar13._8_4_ = fVar35;
  auVar13._12_4_ = fVar35;
  divps(auVar13,auVar34);
  FUN_145069850(param_6);
  fVar31 = fVar31 * (fVar35 + fVar1);
  fVar32 = fVar32 * (fVar35 + fVar2);
  fVar22 = fVar22 * (fVar35 + fVar3);
  fVar33 = fVar33 * (fVar35 + fVar4);
  *param_1 = fVar31 + *param_1;
  param_1[1] = fVar32 + param_1[1];
  param_1[2] = fVar22 + param_1[2];
  param_1[3] = fVar33 + param_1[3];
  *param_2 = fVar31 + *param_2;
  param_2[1] = fVar32 + param_2[1];
  param_2[2] = fVar22 + param_2[2];
  param_2[3] = fVar33 + param_2[3];
  lVar6 = 2;
  pfVar5 = &fStack_ec;
  do {
    lVar6 = lVar6 + -1;
    pfVar5[-5] = 0.0;
    if ((-1 < (int)pfVar5[-4]) && (*(longlong *)(pfVar5 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(pfVar5 + -7),
                 (ulonglong)(uint)ABS(pfVar5[-4]) * 0x14);
    }
    pfVar5[-7] = 0.0;
    pfVar5[-6] = 0.0;
    pfVar5[-4] = -0.0;
    pfVar5 = pfVar5 + -4;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 14506f110 FUN_14506f110 body=422 status=ok
// SIG undefined FUN_14506f110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14506f110(float *param_1,float *param_2,float *param_3,float *param_4,longlong *param_5)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  fVar1 = *(float *)(*param_5 + 0x28);
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar10 = (0.0 - fVar1) * *param_3;
  fVar11 = (0.0 - fVar1) * param_3[1];
  fVar12 = (0.0 - fVar1) * param_3[2];
  fVar13 = (0.0 - fVar1) * param_3[3];
  FUN_145068400(&local_a8);
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  local_98 = fVar7 - fVar10;
  fStack_94 = fVar8 - fVar11;
  fStack_90 = fVar9 - fVar12;
  fStack_8c = fVar2 - fVar13;
  local_88 = fVar3 - fVar10;
  fStack_84 = fVar4 - fVar11;
  fStack_80 = fVar5 - fVar12;
  fStack_7c = fVar6 - fVar13;
  local_78 = fVar10;
  fStack_74 = fVar11;
  fStack_70 = fVar12;
  fStack_6c = fVar13;
  FUN_145062980(param_5[4],&local_98,&local_a8);
  if (local_a0 != 0) {
    param_5._0_4_ = (float)FUN_14506dde0(&local_a8);
    if (param_5._0_4_ < 0.001) {
      FUN_145068470(&local_a8,0x3a83126f,0x3f7fbe77);
      FUN_145069c40(&local_a8,0x3a83126f);
      if (local_a0 == 0) goto LAB_14506f254;
      param_5._0_4_ = (float)FUN_14506dde0(&local_a8);
      if (param_5._0_4_ < 0.001) {
        local_a0 = 0;
        if ((int)local_9c < 0) {
          return 0;
        }
        if (local_a8 == 0) {
          return 0;
        }
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_a8,(ulonglong)(local_9c & 0x7fffffff) * 0x14);
        return 0;
      }
    }
    fVar7 = fRam000000014c6daca4 - param_5._0_4_;
    fVar8 = fRam000000014c6daca8 - param_5._0_4_;
    fVar9 = fRam000000014c6dacac - param_5._0_4_;
    *param_4 = (_DAT_14c6daca0 - param_5._0_4_) * fVar1;
    param_4[1] = fVar7 * fVar1;
    param_4[2] = fVar8 * fVar1;
    param_4[3] = fVar9 * fVar1;
  }
LAB_14506f254:
  local_a0 = 0;
  if ((-1 < (int)local_9c) && (local_a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_a8,(ulonglong)(local_9c & 0x7fffffff) * 0x14);
  }
  return 1;
}



// FUNCTION 14506f2c0 FUN_14506f2c0 body=114 status=ok
// SIG undefined FUN_14506f2c0(void)

undefined8 FUN_14506f2c0(float *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar4 = FUN_14506f110(param_1,param_2,param_3,&local_28,param_4);
  if ((int)uVar4 != 0) {
    uVar4 = 1;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = (local_28 + 0.001) * *param_3 + *param_1;
    param_1[1] = (fStack_24 + 0.001) * fVar1 + param_1[1];
    param_1[2] = (fStack_20 + 0.001) * fVar2 + param_1[2];
    param_1[3] = (fStack_1c + 0.001) * fVar3 + param_1[3];
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_2 = (local_28 + 0.001) * *param_3 + *param_2;
    param_2[1] = (fStack_24 + 0.001) * fVar1 + param_2[1];
    param_2[2] = (fStack_20 + 0.001) * fVar2 + param_2[2];
    param_2[3] = (fStack_1c + 0.001) * fVar3 + param_2[3];
  }
  return uVar4;
}



// FUNCTION 14506f340 FUN_14506f340 body=1599 status=ok
// SIG undefined FUN_14506f340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506f340(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,longlong *param_8,undefined8 param_9,
                  undefined8 param_10)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  longlong local_1f8;
  int local_1f0;
  uint local_1ec;
  longlong local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_158 = *param_1;
  fStack_154 = param_1[1];
  fStack_150 = param_1[2];
  fStack_14c = param_1[3];
  fVar17 = *param_5;
  fVar19 = param_5[1];
  fVar21 = param_5[2];
  fVar6 = param_5[3];
  local_148 = *param_2;
  fStack_144 = param_2[1];
  fStack_140 = param_2[2];
  fStack_13c = param_2[3];
  lVar1 = *param_8;
  fVar31 = *(float *)(lVar1 + 0x20);
  fVar40 = *(float *)(lVar1 + 0x24);
  local_118 = *(float *)(lVar1 + 0x28);
  fVar37 = fVar40 * _DAT_14c6dacb0;
  fVar38 = fVar40 * fRam000000014c6dacb4;
  fVar39 = fVar40 * fRam000000014c6dacb8;
  fVar40 = fVar40 * fRam000000014c6dacbc;
  local_138 = fVar17 * *param_6 + *param_3;
  fStack_134 = fVar19 * param_6[1] + param_3[1];
  fStack_130 = fVar21 * param_6[2] + param_3[2];
  fStack_12c = fVar6 * param_6[3] + param_3[3];
  local_128 = fVar17 * *param_6 + *param_4;
  fStack_124 = fVar19 * param_6[1] + param_4[1];
  fStack_120 = fVar21 * param_6[2] + param_4[2];
  fStack_11c = fVar6 * param_6[3] + param_4[3];
  fVar25 = (local_138 - local_158) * _DAT_14c6dad90 + local_158;
  fVar26 = (fStack_134 - fStack_154) * fRam000000014c6dad94 + fStack_154;
  fVar27 = (fStack_130 - fStack_150) * fRam000000014c6dad98 + fStack_150;
  fVar28 = local_148 + (local_128 - local_148) * _DAT_14c6dad90;
  fVar29 = fStack_144 + (fStack_124 - fStack_144) * fRam000000014c6dad94;
  fVar30 = fStack_140 + (fStack_120 - fStack_140) * fRam000000014c6dad98;
  fVar22 = fVar25 * fVar17;
  fVar23 = fVar26 * fVar19;
  fVar24 = fVar27 * fVar21;
  fVar16 = fVar28 * fVar17;
  fVar18 = fVar29 * fVar19;
  fVar20 = fVar30 * fVar21;
  fVar25 = (fVar28 - (fVar20 + fVar18 + fVar16) * fVar17) -
           (fVar25 - (fVar24 + fVar23 + fVar22) * fVar17);
  fVar26 = (fVar29 - (fVar20 + fVar18 + fVar16) * fVar19) -
           (fVar26 - (fVar24 + fVar23 + fVar22) * fVar19);
  fVar27 = (fVar30 - (fVar20 + fVar18 + fVar16) * fVar21) -
           (fVar27 - (fVar24 + fVar23 + fVar22) * fVar21);
  fVar18 = ((fStack_13c + (fStack_11c - fStack_13c) * fRam000000014c6dad9c) -
           (fVar20 + fVar18 + fVar16) * fVar6) -
           (((fStack_12c - fStack_14c) * fRam000000014c6dad9c + fStack_14c) -
           (fVar24 + fVar23 + fVar22) * fVar6);
  fVar22 = fVar26 * fVar17 - fVar25 * fVar19;
  fVar16 = fVar27 * fVar19 - fVar26 * fVar21;
  fVar20 = fVar25 * fVar21 - fVar27 * fVar17;
  auVar33._12_4_ = fVar18 * fVar6 - fVar18 * fVar6;
  auVar33._4_4_ = fVar20;
  auVar33._0_4_ = fVar16;
  auVar33._8_4_ = fVar22;
  fVar16 = fVar16 * fVar16;
  fVar20 = fVar20 * fVar20;
  fVar22 = fVar22 * fVar22;
  auVar15._4_4_ = fVar16;
  auVar15._0_4_ = fVar16;
  auVar15._8_4_ = fVar16;
  auVar15._12_4_ = fVar16;
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  fVar18 = fVar22 + fVar20 + fVar16;
  if (fVar18 == 0.0) {
    auVar32 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar4._4_4_ = fVar22 + fVar20 + fVar16;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar22 + fVar20 + fVar16;
    auVar4._12_4_ = fVar22 + fVar20 + fVar16;
    auVar15 = sqrtps(auVar15,auVar4);
    auVar15 = divps(auVar33,auVar15);
    auVar32 = auVar15._0_12_;
  }
  fVar24 = auVar32._0_4_;
  fVar26 = auVar32._4_4_;
  fVar27 = auVar32._8_4_;
  fVar18 = fVar24 * local_158 + fVar26 * fStack_154 + fVar27 * fStack_150;
  fVar20 = fVar24 * local_148 + fVar26 * fStack_144 + fVar27 * fStack_140;
  fVar22 = fVar24 * local_138 + fVar26 * fStack_134 + fVar27 * fStack_130;
  fVar23 = fVar24 * local_128 + fVar26 * fStack_124 + fVar27 * fStack_120;
  auVar14._4_4_ = fVar23;
  auVar14._0_4_ = fVar22;
  auVar14._8_4_ = fVar18;
  auVar14._12_4_ = fVar20;
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar18;
  auVar2._8_4_ = fVar22;
  auVar2._12_4_ = fVar23;
  auVar15 = minps(auVar14,auVar2);
  auVar12._4_4_ = auVar15._0_4_;
  auVar12._0_4_ = auVar15._4_4_;
  auVar12._8_4_ = auVar15._12_4_;
  auVar12._12_4_ = auVar15._8_4_;
  auVar15 = minps(auVar15,auVar12);
  fVar16 = auVar15._0_4_;
  fVar18 = (fVar18 - fVar16) + *param_7;
  fVar20 = (fVar20 - fVar16) + param_7[1];
  fVar22 = (fVar22 - fVar16) + param_7[2];
  fVar16 = (fVar23 - fVar16) + param_7[3];
  fVar28 = local_158 - fVar24 * fVar18;
  fVar29 = local_148 - fVar24 * fVar20;
  fVar30 = local_138 - fVar24 * fVar22;
  fVar41 = local_128 - fVar24 * fVar16;
  fVar23 = fStack_154 - fVar26 * fVar18;
  fVar24 = fStack_144 - fVar26 * fVar20;
  fVar25 = fStack_134 - fVar26 * fVar22;
  fVar26 = fStack_124 - fVar26 * fVar16;
  fVar18 = fStack_150 - fVar27 * fVar18;
  fVar20 = fStack_140 - fVar27 * fVar20;
  fVar22 = fStack_130 - fVar27 * fVar22;
  fVar16 = fStack_120 - fVar27 * fVar16;
  auVar36._4_4_ = fVar23;
  auVar36._0_4_ = fVar28;
  auVar36._8_4_ = fVar18;
  auVar36._12_4_ = 0;
  fStack_114 = local_118;
  fStack_110 = local_118;
  fStack_10c = local_118;
  FUN_145068400(&local_1f8);
  local_1c8._4_4_ = fStack_154;
  local_1c8._0_4_ = local_158;
  local_1c8._12_4_ = fStack_14c;
  local_1c8._8_4_ = fStack_150;
  local_1b8._4_4_ = fStack_144;
  local_1b8._0_4_ = local_148;
  local_1b8._12_4_ = fStack_13c;
  local_1b8._8_4_ = fStack_140;
  local_180 = 0;
  local_178 = 0;
  local_198._4_4_ = fVar24;
  local_198._0_4_ = fVar29;
  local_198._8_4_ = fVar20;
  local_198._12_4_ = 0;
  local_188 = param_10;
  local_1a8 = auVar36;
  FUN_145062f30(param_8[4],local_1c8,&local_1f8);
  FUN_145068400(&local_1d8);
  local_180 = 0;
  local_178 = 0;
  local_1c8._4_4_ = fVar25;
  local_1c8._0_4_ = fVar30;
  local_1c8._8_4_ = fVar22;
  local_1c8._12_4_ = 0;
  local_1b8._4_4_ = fVar26;
  local_1b8._0_4_ = fVar41;
  local_1b8._8_4_ = fVar16;
  local_1b8._12_4_ = 0;
  local_198._12_4_ = 0;
  local_188 = param_10;
  local_1a8 = auVar36;
  FUN_145062f30(param_8[4],local_1c8,&local_1d8);
  FUN_145068400(&local_1e8);
  local_1c8._4_4_ = fStack_134;
  local_1c8._0_4_ = local_138;
  local_1c8._12_4_ = fStack_12c;
  local_1c8._8_4_ = fStack_130;
  local_1b8._4_4_ = fStack_124;
  local_1b8._0_4_ = local_128;
  local_1b8._12_4_ = fStack_11c;
  local_1b8._8_4_ = fStack_120;
  local_180 = 0;
  local_178 = 0;
  local_1a8._4_4_ = fVar25;
  local_1a8._0_4_ = fVar30;
  local_1a8._8_4_ = fVar22;
  local_1a8._12_4_ = 0;
  local_198._4_4_ = fVar26;
  local_198._0_4_ = fVar41;
  local_198._8_4_ = fVar16;
  local_198._12_4_ = 0;
  local_188 = param_10;
  local_168 = (0.0 - fVar31) * fVar17;
  fStack_164 = (0.0 - fVar31) * fVar19;
  fStack_160 = (0.0 - fVar31) * fVar21;
  fStack_15c = (0.0 - fVar31) * fVar6;
  FUN_1450630f0(param_8[4],local_1c8,&local_1e8);
  FUN_145069380(&local_1f8);
  FUN_145068920(&local_1f8,&local_1e8);
  FUN_145068920(&local_1f8,&local_1d8);
  if (local_1f0 != 0) {
    fVar17 = *param_5;
    fVar19 = param_5[1];
    fVar21 = param_5[2];
    fVar6 = param_5[3];
    local_108 = fVar30 + fVar17 * fVar31;
    fStack_104 = fVar25 + fVar19 * fVar31;
    fStack_100 = fVar22 + fVar21 * fVar31;
    fStack_fc = fVar6 * fVar31 + 0.0;
    local_f8 = fVar41 + fVar17 * fVar31;
    fStack_f4 = fVar26 + fVar19 * fVar31;
    fStack_f0 = fVar16 + fVar21 * fVar31;
    fStack_ec = fVar6 * fVar31 + 0.0;
    fVar26 = (fVar28 - fVar17 * local_118) - local_108;
    fVar27 = (fVar23 - fVar19 * fStack_114) - fStack_104;
    fVar28 = (fVar18 - fVar21 * fStack_110) - fStack_100;
    fVar29 = (fVar29 - fVar17 * local_118) - local_f8;
    fVar30 = (fVar24 - fVar19 * fStack_114) - fStack_f4;
    fVar41 = (fVar20 - fVar21 * fStack_110) - fStack_f0;
    fVar31 = fVar26 * fVar17;
    fVar16 = fVar27 * fVar19;
    fVar18 = fVar28 * fVar21;
    fVar20 = fVar17 * fVar29;
    fVar24 = fVar19 * fVar30;
    fVar25 = fVar21 * fVar41;
    fVar22 = fVar18 + fVar16 + fVar31;
    fVar23 = fVar25 + fVar24 + fVar20;
    uVar8 = -(uint)(fVar22 < fVar23);
    uVar9 = -(uint)(fVar18 + fVar16 + fVar31 < fVar25 + fVar24 + fVar20);
    uVar10 = -(uint)(fVar18 + fVar16 + fVar31 < fVar25 + fVar24 + fVar20);
    uVar11 = -(uint)(fVar18 + fVar16 + fVar31 < fVar25 + fVar24 + fVar20);
    local_e8 = (uint)fVar26 & uVar8 | ~uVar8 & (uint)fVar29;
    uStack_e4 = (uint)fVar27 & uVar9 | ~uVar9 & (uint)fVar30;
    uStack_e0 = (uint)fVar28 & uVar10 | ~uVar10 & (uint)fVar41;
    uStack_dc = (uint)((0.0 - fVar6 * fStack_10c) - fStack_fc) & uVar11 |
                ~uVar11 & (uint)((0.0 - fVar6 * fStack_10c) - fStack_ec);
    fVar16 = fVar17 * (fStack_f4 - fStack_104) - fVar19 * (local_f8 - local_108);
    fVar18 = fVar19 * (fStack_f0 - fStack_100) - fVar21 * (fStack_f4 - fStack_104);
    fVar20 = fVar21 * (local_f8 - local_108) - fVar17 * (fStack_f0 - fStack_100);
    fVar31 = fVar18 * fVar18;
    fVar19 = fVar20 * fVar20;
    fVar21 = fVar16 * fVar16;
    auVar13._4_4_ = fVar31;
    auVar13._0_4_ = fVar31;
    auVar13._8_4_ = fVar31;
    auVar13._12_4_ = fVar31;
    fVar17 = fVar21 + fVar19 + fVar31;
    if (fVar17 != 0.0) {
      auVar3._4_4_ = fVar21 + fVar19 + fVar31;
      auVar3._0_4_ = fVar17;
      auVar3._8_4_ = fVar21 + fVar19 + fVar31;
      auVar3._12_4_ = fVar21 + fVar19 + fVar31;
      auVar15 = sqrtps(auVar13,auVar3);
      auVar34._4_4_ = fVar20;
      auVar34._0_4_ = fVar18;
      auVar34._8_4_ = fVar16;
      auVar34._12_4_ = fVar6 * (fStack_ec - fStack_fc) - fVar6 * (fStack_ec - fStack_fc);
      auVar35 = divps(auVar34,auVar15);
    }
    local_b8 = fVar37 * auVar35._0_4_;
    fStack_b4 = fVar38 * auVar35._4_4_;
    fStack_b0 = fVar39 * auVar35._8_4_;
    fStack_ac = fVar40 * auVar35._12_4_;
    local_d8 = param_10;
    local_d0 = 0;
    local_c8 = 0;
    FUN_145062b30(param_8[4],&local_108,param_9);
    FUN_145068e50(param_9,&local_1f8);
    fVar22 = -fVar22;
    fVar23 = -fVar23;
    fVar40 = *(float *)(*param_8 + 0x28) * 2.0;
    auVar5._4_4_ = uVar9;
    auVar5._0_4_ = uVar8;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar11;
    iVar7 = movmskps((int)*param_8,auVar5);
    fVar31 = fVar23;
    if (iVar7 != 0) {
      fVar31 = fVar22;
    }
    fVar17 = (fVar22 - fVar40) / fVar31;
    fVar31 = (fVar23 - fVar40) / fVar31;
    fVar40 = 0.0;
    if (0.0 <= fVar17) {
      fVar40 = fVar17;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar31) {
      fVar17 = fVar31;
    }
    FUN_14506bfd0(param_9,fVar17 - fVar40);
    FUN_14506a150(param_9);
  }
  local_1e0 = 0;
  if ((-1 < (int)local_1dc) && (local_1e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1e8,(ulonglong)(local_1dc & 0x7fffffff) * 0x14);
  }
  local_1e8 = 0;
  local_1dc = 0x80000000;
  local_1d0 = 0;
  if ((-1 < (int)local_1cc) && (local_1d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1d8,(ulonglong)(local_1cc & 0x7fffffff) * 0x14);
  }
  local_1d8 = 0;
  local_1cc = 0x80000000;
  local_1f0 = 0;
  if ((-1 < (int)local_1ec) && (local_1f8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 14506f980 FUN_14506f980 body=303 status=ok
// SIG undefined FUN_14506f980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506f980(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = fVar1 - *param_1;
  fVar14 = fVar2 - param_1[1];
  fVar15 = fVar3 - param_1[2];
  fVar8 = *param_3 - *param_1;
  fVar11 = param_3[1] - param_1[1];
  fVar12 = param_3[2] - param_1[2];
  if ((_DAT_14c6daea0 <= fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) &&
     (_DAT_14c6daea0 <= fVar11 * fVar11 + fVar8 * fVar8 + fVar12 * fVar12)) {
    fVar4 = param_5[3];
    fVar5 = (param_4[1] - fVar2) * fVar8 - fVar11 * (*param_4 - fVar1);
    fVar11 = (param_4[2] - fVar3) * fVar11 - fVar12 * (param_4[1] - fVar2);
    fVar8 = (*param_4 - fVar1) * fVar12 - fVar8 * (param_4[2] - fVar3);
    fVar12 = *param_5 * fVar11;
    fVar6 = param_5[1] * fVar8;
    fVar7 = param_5[2] * fVar5;
    fVar13 = fVar13 * fVar11;
    fVar14 = fVar14 * fVar8;
    fVar15 = fVar15 * fVar5;
    auVar9._0_4_ = fVar14 + fVar13 + fVar15;
    auVar9._4_4_ = fVar14 + fVar13 + fVar15;
    auVar9._8_4_ = fVar14 + fVar13 + fVar15;
    auVar9._12_4_ = fVar14 + fVar13 + fVar15;
    auVar10._4_4_ = fVar6 + fVar12 + fVar7;
    auVar10._0_4_ = fVar6 + fVar12 + fVar7;
    auVar10._8_4_ = fVar6 + fVar12 + fVar7;
    auVar10._12_4_ = fVar6 + fVar12 + fVar7;
    auVar10 = divps(auVar9,auVar10);
    fVar13 = auVar10._0_4_;
    fVar14 = auVar10._4_4_;
    fVar15 = auVar10._8_4_;
    fVar5 = auVar10._12_4_;
    fVar8 = fVar13 * *param_5;
    fVar11 = fVar14 * param_5[1];
    fVar12 = fVar15 * param_5[2];
    if (0.0 < fVar13) {
      *param_1 = fVar8 + *param_1;
      param_1[1] = fVar11 + param_1[1];
      param_1[2] = fVar12 + param_1[2];
      param_1[3] = fVar5 * fVar4 + param_1[3];
      fVar1 = param_5[1];
      fVar2 = param_5[2];
      fVar3 = param_5[3];
      *param_3 = fVar13 * *param_5 + *param_3;
      param_3[1] = fVar14 * fVar1 + param_3[1];
      param_3[2] = fVar15 * fVar2 + param_3[2];
      param_3[3] = fVar5 * fVar3 + param_3[3];
      return;
    }
    *param_2 = fVar1 - fVar8;
    param_2[1] = fVar2 - fVar11;
    param_2[2] = fVar3 - fVar12;
    param_2[3] = param_2[3] - fVar5 * fVar4;
    fVar1 = param_5[1];
    fVar2 = param_5[2];
    fVar3 = param_5[3];
    *param_4 = *param_4 - fVar13 * *param_5;
    param_4[1] = param_4[1] - fVar14 * fVar1;
    param_4[2] = param_4[2] - fVar15 * fVar2;
    param_4[3] = param_4[3] - fVar5 * fVar3;
  }
  return;
}



// FUNCTION 14506fab0 FUN_14506fab0 body=100 status=ok
// SIG undefined FUN_14506fab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506fab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar4 = *param_2 - *param_1;
  fVar5 = param_2[1] - param_1[1];
  fVar6 = param_2[2] - param_1[2];
  fVar1 = fVar4 * fVar4;
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar6 * fVar6;
  auVar7._4_4_ = fVar2 + fVar1 + fVar3;
  auVar7._0_4_ = fVar2 + fVar1 + fVar3;
  auVar7._8_4_ = fVar2 + fVar1 + fVar3;
  auVar7._12_4_ = fVar2 + fVar1 + fVar3;
  auVar7 = divps(_DAT_14c6daca0,auVar7);
  fVar4 = auVar7._0_4_ * fVar4;
  fVar5 = auVar7._4_4_ * fVar5;
  fVar6 = auVar7._8_4_ * fVar6;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = 0.0 - (fVar5 * fVar2 + fVar4 * fVar1 + fVar6 * fVar3);
  return;
}



// FUNCTION 14506fb20 FUN_14506fb20 body=318 status=ok
// SIG undefined FUN_14506fb20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14506fb20(float *param_1,float *param_2,float *param_3,undefined4 *param_4,
                  longlong *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar14 = *param_2 - fVar4;
  fVar16 = param_2[1] - fVar5;
  auVar21._4_4_ = fVar16;
  auVar21._0_4_ = fVar14;
  fVar17 = param_2[2] - fVar6;
  fVar1 = *(float *)(*param_5 + 0x24);
  fVar8 = fVar14 * fVar14;
  fVar10 = fVar16 * fVar16;
  fVar11 = fVar17 * fVar17;
  auVar20._4_4_ = fVar1;
  auVar20._0_4_ = fVar1;
  auVar20._8_4_ = fVar1;
  auVar20._12_4_ = fVar1;
  fVar12 = fVar10 + fVar8 + fVar11;
  if (fVar12 == 0.0) {
    auVar21 = ZEXT816(0);
    auVar13 = ZEXT816(0);
  }
  else {
    auVar13._4_4_ = fVar10 + fVar8 + fVar11;
    auVar13._0_4_ = fVar12;
    auVar13._8_4_ = fVar10 + fVar8 + fVar11;
    auVar13._12_4_ = fVar10 + fVar8 + fVar11;
    auVar13 = sqrtps(in_XMM3,auVar13);
    auVar21._8_4_ = fVar17;
    auVar21._12_4_ = param_2[3] - fVar7;
    auVar21 = divps(auVar21,auVar13);
  }
  fVar8 = fVar14 * *param_3;
  fVar10 = fVar16 * param_3[1];
  fVar11 = fVar17 * param_3[2];
  fVar12 = fVar10 + fVar8 + fVar11;
  auVar15._0_4_ = fVar14 - fVar12 * *param_3;
  auVar15._4_4_ = fVar16 - (fVar10 + fVar8 + fVar11) * param_3[1];
  auVar15._8_4_ = fVar17 - (fVar10 + fVar8 + fVar11) * param_3[2];
  auVar15._12_4_ = (param_2[3] - fVar7) - (fVar10 + fVar8 + fVar11) * param_3[3];
  fVar8 = auVar15._0_4_ * auVar15._0_4_;
  fVar10 = auVar15._4_4_ * auVar15._4_4_;
  auVar9._8_4_ = auVar15._8_4_ * auVar15._8_4_;
  auVar9._4_4_ = auVar9._8_4_;
  auVar9._0_4_ = auVar9._8_4_;
  auVar9._12_4_ = auVar9._8_4_;
  fVar11 = fVar10 + fVar8 + auVar9._8_4_;
  if (fVar11 == 0.0) {
    auVar15 = ZEXT816(0);
    auVar9 = ZEXT816(0);
  }
  else {
    auVar3._4_4_ = fVar10 + fVar8 + auVar9._8_4_;
    auVar3._0_4_ = fVar11;
    auVar3._8_4_ = fVar10 + fVar8 + auVar9._8_4_;
    auVar3._12_4_ = fVar10 + fVar8 + auVar9._8_4_;
    auVar9 = sqrtps(auVar9,auVar3);
    auVar15 = divps(auVar15,auVar9);
  }
  auVar13 = divps(auVar13,auVar9);
  fVar16 = auVar15._0_4_ * fVar1;
  fVar17 = auVar15._4_4_ * fVar1;
  fVar18 = auVar15._8_4_ * fVar1;
  fVar19 = auVar15._12_4_ * fVar1;
  fVar8 = auVar13._0_4_ * fVar1 * auVar21._0_4_;
  fVar10 = auVar13._4_4_ * fVar1 * auVar21._4_4_;
  fVar11 = auVar13._8_4_ * fVar1 * auVar21._8_4_;
  fVar14 = auVar13._12_4_ * fVar1 * auVar21._12_4_;
  if (fVar12 <= 0.0) {
    *param_1 = fVar4 - fVar8;
    param_1[1] = fVar5 - fVar10;
    param_1[2] = fVar6 - fVar11;
    param_1[3] = fVar7 - fVar14;
    *param_2 = fVar16 + *param_2;
    param_2[1] = fVar17 + param_2[1];
    param_2[2] = fVar18 + param_2[2];
    param_2[3] = fVar19 + param_2[3];
  }
  else {
    *param_1 = fVar4 - fVar16;
    param_1[1] = fVar5 - fVar17;
    param_1[2] = fVar6 - fVar18;
    param_1[3] = fVar7 - fVar19;
    *param_2 = fVar8 + *param_2;
    param_2[1] = fVar10 + param_2[1];
    param_2[2] = fVar11 + param_2[2];
    param_2[3] = fVar14 + param_2[3];
  }
  auVar2._4_4_ = fVar1 * fRam000000014c6dacb4 + auVar9._4_4_;
  auVar2._0_4_ = fVar1 * _DAT_14c6dacb0 + auVar9._0_4_;
  auVar2._8_4_ = fVar1 * fRam000000014c6dacb8 + auVar9._8_4_;
  auVar2._12_4_ = fVar1 * fRam000000014c6dacbc + auVar9._12_4_;
  auVar20 = divps(auVar20,auVar2);
  *param_4 = auVar20._0_4_;
  return;
}



// FUNCTION 14506fc60 FUN_14506fc60 body=68 status=ok
// SIG undefined FUN_14506fc60(void)

void FUN_14506fc60(undefined8 param_1,float param_2)

{
  FUN_14506d7f0();
  FUN_145069850(param_1,param_2,1.0 - param_2,0,0x3f800000);
  return;
}



// FUNCTION 14506fcb0 FUN_14506fcb0 body=85 status=ok
// SIG undefined FUN_14506fcb0(void)

void FUN_14506fcb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_28 = *param_6;
  uStack_24 = param_6[1];
  uStack_20 = param_6[2];
  uStack_1c = param_6[3];
  local_18 = *param_7;
  uStack_14 = param_7[1];
  uStack_10 = param_7[2];
  uStack_c = param_7[3];
  FUN_1450700e0(local_18,local_28,&local_58);
  return;
}



// FUNCTION 14506fd10 FUN_14506fd10 body=14 status=ok
// SIG undefined FUN_14506fd10(void)

float FUN_14506fd10(longlong *param_1)

{
  return *(float *)(*param_1 + 0x24) - *(float *)(param_1 + 1);
}



// FUNCTION 14506fd20 FUN_14506fd20 body=953 status=ok
// SIG undefined FUN_14506fd20(void)

void FUN_14506fd20(longlong param_1,longlong param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int local_res20;
  float local_118 [2];
  int local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  iVar14 = *(int *)(param_1 + 8);
  if ((iVar14 != 0) && (iVar1 = *(int *)(param_2 + 8), iVar1 != 0)) {
    iVar13 = 0;
    local_res20 = 0;
    local_110 = iVar14;
    if (0 < iVar14) {
LAB_14506fda0:
      if (iVar13 < iVar1) {
        pfVar10 = (float *)FUN_1450686a0(param_1,local_res20);
        fVar5 = *pfVar10;
        fStack_94 = pfVar10[1];
        fStack_90 = pfVar10[2];
        fStack_8c = pfVar10[3];
        fVar2 = pfVar10[4];
        local_98 = fVar5;
        do {
          lVar11 = FUN_1450686a0(param_2,iVar13);
          fVar7 = fStack_94;
          if (fVar5 < *(float *)(lVar11 + 4)) goto LAB_14506fdf0;
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar1);
        goto LAB_145070074;
      }
    }
  }
  return;
  while( true ) {
    pfVar10 = (float *)FUN_1450686a0(param_2,iVar13);
    fVar3 = pfVar10[4];
    fVar15 = fVar5;
    if (fVar5 <= *pfVar10) {
      fVar15 = *pfVar10;
    }
    fVar16 = fVar7;
    if (pfVar10[1] <= fVar7) {
      fVar16 = pfVar10[1];
    }
    local_118[0] = fVar16;
    if (*param_3 <= fVar16 - fVar15) {
      lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x1e) + 0x10) + 0x38);
      local_108 = *(longlong *)((ulonglong)((uint)fVar2 >> 0x16) * 0x120 + lVar11);
      lVar11 = *(longlong *)((ulonglong)((uint)fVar3 >> 0x16) * 0x120 + lVar11);
      local_118[0] = (float)((uint)fVar2 & 0x3fffff);
      local_100 = lVar11;
      FUN_144b3dd40(local_108,local_118,local_f8);
      local_118[0] = (float)((uint)fVar3 & 0x3fffff);
      FUN_144b3dd40(lVar11,local_118,local_e8);
      local_d8 = (param_3[8] - param_3[4]) * fVar15 + param_3[4];
      fStack_d4 = (param_3[9] - param_3[5]) * fVar15 + param_3[5];
      fStack_d0 = (param_3[10] - param_3[6]) * fVar15 + param_3[6];
      fStack_cc = (param_3[0xb] - param_3[7]) * fVar15 + param_3[7];
      cVar8 = FUN_144c52b90(&local_d8,local_f8,param_3 + 0x14);
      local_c8 = (param_3[8] - param_3[4]) * fVar16 + param_3[4];
      fStack_c4 = (param_3[9] - param_3[5]) * fVar16 + param_3[5];
      fStack_c0 = (param_3[10] - param_3[6]) * fVar16 + param_3[6];
      fStack_bc = (param_3[0xb] - param_3[7]) * fVar16 + param_3[7];
      cVar9 = FUN_144c52b90(&local_c8,local_f8,param_3 + 0x14);
      if ((cVar9 == '\0') || (cVar8 == '\0')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      local_b8 = (param_3[0x10] - param_3[0xc]) * fVar15 + param_3[0xc];
      fStack_b4 = (param_3[0x11] - param_3[0xd]) * fVar15 + param_3[0xd];
      fStack_b0 = (param_3[0x12] - param_3[0xe]) * fVar15 + param_3[0xe];
      fStack_ac = (param_3[0x13] - param_3[0xf]) * fVar15 + param_3[0xf];
      cVar8 = FUN_144c52b90(&local_b8,local_e8,param_3 + 0x18);
      if ((cVar8 == '\0') || (!bVar6)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      local_a8 = (param_3[0x10] - param_3[0xc]) * fVar16 + param_3[0xc];
      fStack_a4 = (param_3[0x11] - param_3[0xd]) * fVar16 + param_3[0xd];
      fStack_a0 = (param_3[0x12] - param_3[0xe]) * fVar16 + param_3[0xe];
      fStack_9c = (param_3[0x13] - param_3[0xf]) * fVar16 + param_3[0xf];
      cVar8 = FUN_144c52b90(&local_a8,local_e8,param_3 + 0x18);
      if ((cVar8 != '\0') && (bVar6)) {
        plVar4 = *(longlong **)(param_3 + 0x1c);
        iVar14 = (int)plVar4[1] + 1;
        if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar14) {
          FUN_145070260(plVar4,&PTR_vftable_14c6e47c0,(longlong)iVar14);
        }
        lVar11 = plVar4[1];
        *(int *)(plVar4 + 1) = iVar14;
        puVar12 = (undefined8 *)((longlong)(int)lVar11 * 0x50 + *plVar4);
        *puVar12 = CONCAT44(fStack_d4,local_d8);
        puVar12[1] = CONCAT44(fStack_cc,fStack_d0);
        puVar12[2] = CONCAT44(fStack_c4,local_c8);
        puVar12[3] = CONCAT44(fStack_bc,fStack_c0);
        *(float *)(puVar12 + 4) = local_b8;
        *(float *)((longlong)puVar12 + 0x24) = fStack_b4;
        *(float *)(puVar12 + 5) = fStack_b0;
        *(float *)((longlong)puVar12 + 0x2c) = fStack_ac;
        *(float *)(puVar12 + 6) = local_a8;
        *(float *)((longlong)puVar12 + 0x34) = fStack_a4;
        *(float *)(puVar12 + 7) = fStack_a0;
        *(float *)((longlong)puVar12 + 0x3c) = fStack_9c;
        *(float *)(puVar12 + 8) = fVar2;
        *(float *)((longlong)puVar12 + 0x44) = fVar3;
        *(undefined4 *)(puVar12 + 9) = *(undefined4 *)(*(longlong *)(local_108 + 0x20) + 0x178);
        *(undefined4 *)((longlong)puVar12 + 0x4c) =
             *(undefined4 *)(*(longlong *)(local_100 + 0x20) + 0x178);
      }
    }
    iVar13 = iVar13 + 1;
    iVar14 = local_110;
    if (iVar1 <= iVar13) break;
LAB_14506fdf0:
    pfVar10 = (float *)FUN_1450686a0(param_2,iVar13);
    iVar14 = local_110;
    if (fVar7 < *pfVar10 || fVar7 == *pfVar10) break;
  }
LAB_145070074:
  local_res20 = local_res20 + 1;
  iVar13 = iVar13 + -1;
  if (iVar14 <= local_res20) {
    return;
  }
  goto LAB_14506fda0;
}



// FUNCTION 1450700e0 FUN_1450700e0 body=371 status=ok
// SIG undefined FUN_1450700e0(void)

void FUN_1450700e0(longlong *param_1,longlong *param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar17 = (longlong)(int)param_1[1];
  uVar14 = 0;
  if (0 < lVar17) {
    fVar26 = param_3[0xc];
    fVar27 = param_3[0xd];
    fVar28 = param_3[0xe];
    fVar25 = param_3[0x10];
    uVar15 = uVar14;
    uVar16 = uVar14;
    do {
      lVar5 = *param_1;
      puVar1 = (undefined4 *)(uVar16 + *param_2);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      fVar9 = (float)puVar1[2];
      uVar10 = puVar1[3];
      uVar3 = *(undefined4 *)(uVar16 + 0x10 + *param_2);
      puVar1 = (undefined4 *)(uVar16 + lVar5);
      uVar11 = puVar1[1];
      fVar12 = (float)puVar1[2];
      uVar13 = puVar1[3];
      uVar4 = *(undefined4 *)(uVar16 + 0x10 + lVar5);
      auVar24._0_4_ = fVar12 * param_3[4] + *param_3 + fVar9 * param_3[8];
      auVar24._4_4_ = fVar12 * param_3[5] + param_3[1] + fVar9 * param_3[9];
      auVar24._8_4_ = fVar12 * param_3[6] + param_3[2] + fVar9 * param_3[10];
      auVar24._12_4_ = fVar12 * param_3[7] + param_3[3] + fVar9 * param_3[0xb];
      fVar19 = auVar24._0_4_ * auVar24._0_4_;
      fVar20 = auVar24._4_4_ * auVar24._4_4_;
      fVar21 = auVar24._8_4_ * auVar24._8_4_;
      auVar18._4_4_ = fVar19;
      auVar18._0_4_ = fVar19;
      auVar18._8_4_ = fVar19;
      auVar18._12_4_ = fVar19;
      fVar22 = fVar20 + fVar19 + fVar21;
      if (fVar22 == 0.0) {
        auVar23 = SUB1612(ZEXT816(0),0);
      }
      else {
        auVar6._4_4_ = fVar20 + fVar19 + fVar21;
        auVar6._0_4_ = fVar22;
        auVar6._8_4_ = fVar20 + fVar19 + fVar21;
        auVar6._12_4_ = fVar20 + fVar19 + fVar21;
        auVar18 = sqrtps(auVar18,auVar6);
        auVar18 = divps(auVar24,auVar18);
        auVar23 = auVar18._0_12_;
      }
      if (fVar25 <= fVar27 * auVar23._4_4_ + fVar26 * auVar23._0_4_ + fVar28 * auVar23._8_4_) {
        puVar2 = (undefined4 *)(uVar14 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        puVar2[2] = fVar12;
        puVar2[3] = uVar13;
        *(undefined4 *)(uVar14 + 0x10 + lVar5) = uVar4;
        uVar15 = (ulonglong)((int)uVar15 + 1);
        lVar5 = *param_2;
        puVar1 = (undefined4 *)(uVar14 + lVar5);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = fVar9;
        puVar1[3] = uVar10;
        *(undefined4 *)(uVar14 + 0x10 + lVar5) = uVar3;
        uVar14 = uVar14 + 0x14;
        fVar26 = param_3[0xc];
        fVar27 = param_3[0xd];
        fVar28 = param_3[0xe];
        fVar25 = param_3[0x10];
      }
      uVar16 = uVar16 + 0x14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(int *)(param_1 + 1) = (int)uVar15;
    *(int *)(param_2 + 1) = (int)uVar15;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 145070260 FUN_145070260 body=262 status=ok
// SIG undefined FUN_145070260(void)

ulonglong FUN_145070260(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x50,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x50);
  uVar3 = uVar4 * 0x50 + 0x50;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x50;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x50;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x50;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x50);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 145070370 FUN_145070370 body=202 status=ok
// SIG undefined FUN_145070370(void)

undefined1 FUN_145070370(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_4;
    uStack_14 = param_4[1];
    uStack_10 = param_4[2];
    uStack_c = param_4[3];
    uVar4 = param_3 & 0x3fffff;
    lVar5 = *(longlong *)
             (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
             0x20);
    if ((int)uVar4 < *(int *)(lVar5 + 0x20)) {
      uVar3 = (ulonglong)uVar4;
      if (*(int *)(lVar5 + 0x98) != 0) {
        uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x90) + (ulonglong)uVar4 * 4);
      }
      if (uVar4 == 0xffffffff) {
        lVar5 = *(longlong *)(lVar5 + 0x18) + uVar3 * 0xc;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0xb0) + (longlong)(int)uVar4 * 0xc;
      }
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0xd0) + (longlong)(int)(uVar4 - *(int *)(lVar5 + 0x20)) * 0xc;
    }
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,lVar5,&local_18);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 145070440 FUN_145070440 body=71 status=ok
// SIG undefined FUN_145070440(void)

undefined8 * FUN_145070440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145070490 FUN_145070490 body=1410 status=ok
// SIG undefined FUN_145070490(void)

void FUN_145070490(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  int iVar21;
  int *piVar22;
  undefined4 local_res20 [2];
  int *local_138;
  int local_130;
  uint local_12c;
  undefined4 *local_128;
  int local_120;
  uint local_11c;
  undefined4 *local_118;
  int local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined8 local_e8;
  undefined4 *local_e0;
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  undefined4 *local_c8;
  longlong *local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  local_a0 = param_2[4];
  local_b0 = 0xffffffff;
  local_a8 = 1;
  local_b8 = hkaiTraversalAnalysisUtils::NavMeshSegmentCastingFilterFromClearanceFilter::vftable;
  plVar20 = *(longlong **)(param_1[1] + 8);
  local_c0 = plVar20 + (longlong)*(int *)(param_1[1] + 0x10) * 3;
  if (plVar20 != local_c0) {
    plVar20 = plVar20 + 1;
    do {
      local_res20[0] = (undefined4)plVar20[-1];
      local_d0 = plVar20;
      FUN_144ca4a20(*(undefined8 *)(*(longlong *)param_1[1] + 0x140),&local_110,local_res20);
      lVar15 = *(longlong *)
                ((longlong)local_110 * 0x120 +
                *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x140) + 0x38));
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,*(undefined4 *)((longlong)plVar20 + -4));
      FUN_144ca4a20(*(longlong *)(*(longlong *)param_1[1] + 0x140),&local_10c,&local_118);
      lVar14 = *(longlong *)(*(longlong *)param_1[1] + 0x140);
      lVar5 = *(longlong *)((longlong)local_10c * 0x120 + *(longlong *)(lVar14 + 0x38));
      auVar6._4_4_ = -(uint)(ABS(*(float *)(lVar15 + 0xc4) - *(float *)(lVar5 + 0xc4)) <= 0.001);
      auVar6._0_4_ = -(uint)(ABS(*(float *)(lVar15 + 0xc0) - *(float *)(lVar5 + 0xc0)) <= 0.001);
      auVar6._8_4_ = -(uint)(ABS(*(float *)(lVar15 + 200) - *(float *)(lVar5 + 200)) <= 0.001);
      auVar6._12_4_ = -(uint)(ABS(*(float *)(lVar15 + 0xcc) - *(float *)(lVar5 + 0xcc)) <= 0.001);
      uVar9 = movmskps((int)*(longlong *)(lVar14 + 0x38),auVar6);
      if (((byte)uVar9 & 7) == 7) {
        uVar11 = FUN_144b3e3b0(lVar14);
        FUN_145349290(local_98,lVar15,lVar5,lVar14,uVar11);
        local_ec = *(undefined1 *)((longlong)param_2 + 0x1c);
        local_108 = *param_2;
        uStack_100 = param_2[1];
        uVar4 = *(uint *)(param_2 + 6);
        local_f4 = *(undefined4 *)((longlong)param_2 + 0x14);
        local_eb = *(undefined1 *)((longlong)param_2 + 0x1d);
        local_e8 = param_2[4];
        local_f8 = *(undefined4 *)(param_2 + 2);
        local_f0 = *(undefined4 *)(param_2 + 3);
        puVar18 = (undefined4 *)0x0;
        if ((undefined4 *)param_2[5] != (undefined4 *)0x0) {
          puVar18 = (undefined4 *)param_2[5];
        }
        local_e0 = (undefined4 *)0x0;
        local_d8 = 0;
        local_d4 = 0x80000000;
        if ((int)uVar4 < 1) {
          local_e0 = (undefined4 *)0x0;
        }
        else {
          local_e0 = (undefined4 *)
                     (**(code **)(PTR_vftable_14c6e47a0 + 8))
                               (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 5);
          uVar16 = (ulonglong)uVar4;
          puVar12 = local_e0;
          do {
            if (puVar12 != (undefined4 *)0x0) {
              uVar9 = puVar18[1];
              uVar7 = puVar18[2];
              uVar8 = puVar18[3];
              *puVar12 = *puVar18;
              puVar12[1] = uVar9;
              puVar12[2] = uVar7;
              puVar12[3] = uVar8;
              puVar1 = (undefined8 *)(puVar18 + 4);
              uVar11 = *(undefined8 *)(puVar18 + 6);
              puVar18 = puVar18 + 8;
              *(undefined8 *)(puVar12 + 4) = *puVar1;
              *(undefined8 *)(puVar12 + 6) = uVar11;
            }
            uVar16 = uVar16 - 1;
            puVar12 = puVar12 + 8;
            local_d8 = uVar4;
            local_d4 = uVar4;
          } while (uVar16 != 0);
        }
        uVar4 = local_d8;
        puVar18 = (undefined4 *)*plVar20;
        puVar12 = puVar18 + (longlong)(int)plVar20[1] * 8;
        iVar21 = (int)plVar20[1] + local_d8;
        if ((int)(local_d4 & 0x7fffffff) < iVar21) {
          FUN_141807cf8(&local_e0,&PTR_vftable_14c6e47a0,(longlong)iVar21);
        }
        puVar19 = local_e0 + (longlong)(int)uVar4 * 8;
        for (; puVar18 != puVar12; puVar18 = puVar18 + 8) {
          if (puVar19 != (undefined4 *)0x0) {
            uVar9 = puVar18[1];
            uVar7 = puVar18[2];
            uVar8 = puVar18[3];
            *puVar19 = *puVar18;
            puVar19[1] = uVar9;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            uVar11 = *(undefined8 *)(puVar18 + 6);
            *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar18 + 4);
            *(undefined8 *)(puVar19 + 6) = uVar11;
          }
          puVar19 = puVar19 + 8;
        }
        local_128 = (undefined4 *)0x0;
        local_120 = 0;
        local_11c = 0x80000000;
        local_d8 = iVar21;
        FUN_145349320(local_98,&local_108,&local_128);
        puVar18 = local_128 + (longlong)local_120 * 0x14;
        local_c8 = puVar18;
        if (local_128 != puVar18) {
          puVar12 = local_128 + 0x10;
          do {
            local_138 = (int *)0x0;
            local_130 = 0;
            local_12c = 0x80000000;
            pppuVar13 = &local_b8;
            if (param_2[4] == 0) {
              pppuVar13 = (undefined ***)0x0;
            }
            local_118 = puVar12;
            FUN_14506e9a0(puVar12 + -0xc,puVar12 + -0x10,puVar12 + -4,puVar12 + -8,*puVar12,
                          puVar12[2],&local_138,*param_1,pppuVar13);
            piVar22 = local_138 + (longlong)local_130 * 0x14;
            puVar19 = puVar12;
            if (local_138 != piVar22) {
              piVar17 = local_138 + 0x12;
              do {
                lVar15 = param_1[1];
                lVar14 = FUN_145070a20(lVar15 + 0x18,piVar17);
                if (lVar14 == 0) {
                  iVar21 = -1;
                }
                else {
                  iVar21 = *(int *)(lVar14 + 4);
                }
                lVar14 = param_1[1];
                iVar21 = *(int *)(*(longlong *)(lVar15 + 0x18) + 4 + (longlong)iVar21 * 8);
                lVar15 = FUN_145070a20(lVar14 + 0x18,piVar17 + 1);
                if (lVar15 == 0) {
                  iVar10 = -1;
                }
                else {
                  iVar10 = *(int *)(lVar15 + 4);
                }
                if (((iVar21 != 2) ||
                    (*(int *)(*(longlong *)(lVar14 + 0x18) + 4 + (longlong)iVar10 * 8) != 2)) &&
                   ((*piVar17 != piVar17[1] || (iVar21 != 1)))) {
                  (*(code *)*param_3)(param_3[1],piVar17 + -0x12);
                }
                piVar2 = piVar17 + 2;
                puVar18 = local_c8;
                piVar17 = piVar17 + 0x14;
                puVar19 = local_118;
              } while (piVar2 != piVar22);
            }
            local_130 = 0;
            if ((-1 < (int)local_12c) && (local_138 != (int *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                        (&PTR_vftable_14c6e47c0,local_138,(ulonglong)(local_12c & 0x7fffffff) * 0x50
                        );
            }
            puVar12 = puVar19 + 0x14;
            local_138 = (int *)0x0;
            local_12c = 0x80000000;
            plVar20 = local_d0;
            local_118 = puVar12;
          } while (puVar19 + 4 != puVar18);
        }
        local_120 = 0;
        if ((-1 < (int)local_11c) && (local_128 != (undefined4 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_128,(ulonglong)(local_11c & 0x7fffffff) * 0x50);
        }
        local_128 = (undefined4 *)0x0;
        local_11c = 0x80000000;
        local_d8 = 0;
        if ((-1 < (int)local_d4) && (local_e0 != (undefined4 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_e0,(ulonglong)(local_d4 & 0x7fffffff) << 5);
        }
        local_e0 = (undefined4 *)0x0;
        local_d4 = 0x80000000;
        if (local_68 != 0) {
          FUN_144b3f230();
        }
        if (local_70 != 0) {
          FUN_144b3f230();
        }
        if (local_78 != 0) {
          FUN_144b3f230();
        }
        if (local_80 != 0) {
          FUN_144b3f230();
        }
      }
      plVar3 = plVar20 + 2;
      plVar20 = plVar20 + 3;
    } while (plVar3 != local_c0);
  }
  return;
}



// FUNCTION 145070a20 FUN_145070a20 body=102 status=ok
// SIG undefined FUN_145070a20(void)

uint * FUN_145070a20(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 8) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145070a90 FUN_145070a90 body=337 status=ok
// SIG undefined FUN_145070a90(void)

ulonglong FUN_145070a90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x50,&local_res8);
  puVar8 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined8 *)(puVar7 + -8) != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *(undefined8 *)(puVar7 + -8) = *puVar8;
        *(undefined8 *)(puVar7 + -6) = uVar5;
        uVar5 = puVar8[3];
        *(undefined8 *)(puVar7 + -4) = puVar8[2];
        *(undefined8 *)(puVar7 + -2) = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
        uVar3 = *(undefined4 *)(puVar8 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
        *puVar7 = *(undefined4 *)(puVar8 + 4);
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar5 = puVar8[7];
        *(undefined8 *)(puVar7 + 4) = puVar8[6];
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7[8] = *(undefined4 *)(puVar8 + 8);
        puVar7[9] = *(undefined4 *)((longlong)puVar8 + 0x44);
        puVar7[10] = *(undefined4 *)(puVar8 + 9);
        puVar7[0xb] = *(undefined4 *)((longlong)puVar8 + 0x4c);
      }
      puVar7 = puVar7 + 0x14;
      puVar8 = puVar8 + 10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x50 + 0x50;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x50;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x50;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x50;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x50);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 145070bf0 FUN_145070bf0 body=40 status=ok
// SIG undefined FUN_145070bf0(void)

void FUN_145070bf0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  FUN_144d3ede0(*(undefined8 *)(param_1 + 2),*param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 145070c20 FUN_145070c20 body=17 status=ok
// SIG undefined FUN_145070c20(void)

void FUN_145070c20(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144d3ee30(*(undefined8 *)(param_1 + 2),*param_1,param_2,param_3);
  return;
}



// FUNCTION 145070c40 FUN_145070c40 body=646 status=ok
// SIG undefined FUN_145070c40(void)

undefined4 *
FUN_145070c40(longlong *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined4 local_res20;
  int local_58;
  int local_54;
  
  iVar1 = *(int *)(param_3 + 0x30);
  iVar2 = *(int *)(param_3 + 0x34);
  local_res18 = param_3;
  local_res20 = param_4;
  local_58 = iVar1;
  local_54 = iVar2;
  if ((iVar1 != (int)param_1[2]) || (iVar2 != *(int *)((longlong)param_1 + 0x14))) {
    local_res8 = CONCAT44(local_res8._4_4_,iVar1);
    piVar8 = (int *)FUN_144ca4a20(param_1[1],local_res10,&local_res8);
    lVar3 = *(longlong *)((longlong)*piVar8 * 0x120 + *(longlong *)(param_1[1] + 0x38));
    uVar7 = *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x60);
    *(undefined4 *)(param_1 + 3) = uVar7;
    if (*(int *)(param_3 + 0x30) != *(int *)(param_3 + 0x34)) {
      local_res8 = CONCAT44(local_res8._4_4_,*(int *)(param_3 + 0x30));
      piVar8 = (int *)FUN_144ca4a20(param_1[1],local_res10,&local_res8);
      uVar7 = *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)((longlong)*piVar8 * 0x120 + *(longlong *)(param_1[1] + 0x38)) + 0x20
                 ) + 0x60);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
    lVar4 = *param_1;
    FUN_147e66288(lVar4 + 0x18,&local_res8,&local_58);
    iVar10 = (int)local_res8;
    if (iVar10 == *(int *)(lVar4 + 0x20)) {
      local_res8 = 0x80;
      puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar9,"hkaiTraversalAnnotationLibrary");
      }
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9[2] = 1;
        puVar9[1] = 0xffffffff;
        *puVar9 = hkaiTraversalAnnotationLibrary::vftable;
        puVar9[6] = 0;
        *(undefined4 *)(puVar9 + 7) = 0;
        puVar9[8] = 0;
        *(undefined4 *)(puVar9 + 9) = 0;
        puVar9[10] = 0;
        *(undefined4 *)(puVar9 + 0xb) = 0;
        puVar9[0xc] = 0;
        *(undefined4 *)(puVar9 + 0xd) = 0;
        puVar9[0xe] = 0;
        *(undefined4 *)(puVar9 + 0xf) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = 0x80000000;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = 0x80000000;
        *(undefined4 *)((longlong)puVar9 + 0x5c) = 0x80000000;
        *(undefined4 *)((longlong)puVar9 + 0x6c) = 0x80000000;
        *(undefined4 *)((longlong)puVar9 + 0x7c) = 0x80000000;
      }
      uVar7 = *(undefined4 *)(lVar3 + 0xc4);
      uVar5 = *(undefined4 *)(lVar3 + 200);
      uVar6 = *(undefined4 *)(lVar3 + 0xcc);
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(lVar3 + 0xc0);
      *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
      *(undefined4 *)(puVar9 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
      iVar11 = *(int *)(lVar4 + 0x20) + 1;
      if ((int)(*(uint *)(lVar4 + 0x24) & 0x7fffffff) < iVar11) {
        FUN_147e663a2(lVar4 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      piVar8 = (int *)((longlong)*(int *)(lVar4 + 0x20) * 0x10 + *(longlong *)(lVar4 + 0x18));
      param_3 = local_res18;
      if (piVar8 == (int *)0x0) {
        *(int *)(lVar4 + 0x20) = iVar11;
        if (puVar9 != (undefined8 *)0x0) {
          FUN_144b3f230(puVar9);
          param_3 = local_res18;
        }
      }
      else {
        *piVar8 = iVar1;
        piVar8[1] = iVar2;
        *(undefined8 **)(piVar8 + 2) = puVar9;
        *(int *)(lVar4 + 0x20) = iVar11;
      }
    }
    param_1[4] = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 8 + (longlong)iVar10 * 0x10);
    *(int *)(param_1 + 2) = iVar1;
    *(int *)((longlong)param_1 + 0x14) = iVar2;
  }
  uVar7 = FUN_144d3eb80(param_1[4],param_3,local_res20,param_5,(int)param_1[3],
                        *(undefined4 *)((longlong)param_1 + 0x1c));
  *param_2 = uVar7;
  *(longlong *)(param_2 + 2) = param_1[4];
  return param_2;
}



// FUNCTION 145070ed0 FUN_145070ed0 body=645 status=ok
// SIG undefined FUN_145070ed0(void)

int FUN_145070ed0(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  
  lVar6 = param_1[3];
  iVar13 = (int)lVar6 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar13) {
    FUN_145071280(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  lVar9 = (longlong)(int)param_1[3];
  piVar1 = (int *)(param_2 + 8);
  lVar8 = param_1[2];
  puVar2 = (uint *)((longlong)param_1 + 0xc);
  *(int *)(param_1 + 3) = iVar13;
  plVar12 = param_1 + 1;
  *(int *)(lVar8 + lVar9 * 8) = (int)*plVar12;
  uVar4 = *(undefined2 *)piVar1;
  *(char *)(lVar8 + 7 + lVar9 * 8) = param_4;
  *(undefined2 *)(lVar8 + 4 + lVar9 * 8) = uVar4;
  iVar10 = 0;
  *(char *)(lVar8 + 6 + lVar9 * 8) = param_3;
  iVar13 = *piVar1;
  if (0 < iVar13) {
    do {
      puVar7 = (undefined4 *)FUN_1450686a0(param_2,iVar10);
      lVar8 = *plVar12;
      iVar11 = (int)lVar8 + 1;
      if ((int)(*puVar2 & 0x7fffffff) < iVar11) {
        FUN_144c62aa0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      puVar3 = (undefined4 *)(*param_1 + (longlong)(int)*plVar12 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      *(int *)plVar12 = iVar11;
      iVar11 = (int)lVar8 + 2;
      if ((int)(*puVar2 & 0x7fffffff) < iVar11) {
        FUN_144c62aa0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      puVar3 = (undefined4 *)(*param_1 + (longlong)(int)*plVar12 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar7[1];
      }
      iVar10 = iVar10 + 1;
      *(int *)plVar12 = iVar11;
    } while (iVar10 < iVar13);
  }
  plVar12 = param_1 + 1;
  if (param_3 != '\0') {
    iVar13 = *piVar1;
    iVar10 = 0;
    if (0 < iVar13) {
      do {
        lVar9 = FUN_1450686a0(param_2,iVar10);
        lVar8 = *plVar12;
        iVar11 = (int)lVar8 + 1;
        if ((int)(*puVar2 & 0x7fffffff) < iVar11) {
          FUN_144c62aa0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        puVar7 = (undefined4 *)(*param_1 + (longlong)(int)*plVar12 * 4);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *(undefined4 *)(lVar9 + 0xc);
        }
        *(int *)plVar12 = iVar11;
        iVar11 = (int)lVar8 + 2;
        if ((int)(*puVar2 & 0x7fffffff) < iVar11) {
          FUN_144c62aa0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        puVar7 = (undefined4 *)(*param_1 + (longlong)(int)*plVar12 * 4);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *(undefined4 *)(lVar9 + 8);
        }
        iVar10 = iVar10 + 1;
        *(int *)plVar12 = iVar11;
      } while (iVar10 < iVar13);
    }
  }
  plVar12 = param_1 + 1;
  iVar13 = 0;
  if ((param_4 != '\0') && (iVar10 = *(int *)(param_2 + 8), 0 < iVar10)) {
    do {
      lVar8 = FUN_1450686a0(param_2,iVar13);
      iVar11 = (int)*plVar12 + 1;
      uVar5 = *(undefined4 *)(lVar8 + 0x10);
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_144c62aa0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      puVar7 = (undefined4 *)(*param_1 + (longlong)(int)*plVar12 * 4);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = uVar5;
      }
      iVar13 = iVar13 + 1;
      *(int *)plVar12 = iVar11;
    } while (iVar13 < iVar10);
  }
  return (int)lVar6;
}



// FUNCTION 145071160 FUN_145071160 body=102 status=ok
// SIG undefined FUN_145071160(void)

undefined8 FUN_145071160(longlong *param_1,int param_2,float param_3,float *param_4)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = 0;
  uVar2 = *(ushort *)(param_1[2] + 4 + (longlong)param_2 * 8);
  lVar1 = *param_1 + (ulonglong)*(uint *)(param_1[2] + (longlong)param_2 * 8) * 4;
  uVar4 = uVar3;
  if (uVar2 != 0) {
    do {
      if (param_3 <= *(float *)(lVar1 + 4 + uVar3 * 8)) {
        if (param_3 < *(float *)(lVar1 + uVar3 * 8)) {
          return 0;
        }
        lVar5 = (longlong)(int)(((uint)uVar2 + (int)uVar4) * 2);
        *param_4 = *(float *)(lVar1 + 4 + lVar5 * 4) * param_3 + *(float *)(lVar1 + lVar5 * 4);
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while ((longlong)uVar3 < (longlong)(ulonglong)uVar2);
  }
  return 0;
}



// FUNCTION 1450711d0 FUN_1450711d0 body=163 status=ok
// SIG undefined FUN_1450711d0(void)

undefined8 FUN_1450711d0(longlong *param_1,int param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar3 = *param_3;
  uVar5 = *(ushort *)(param_1[2] + 4 + (longlong)param_2 * 8);
  if (uVar5 == 0) {
    return 0;
  }
  uVar7 = (ulonglong)*(uint *)(param_1[2] + (longlong)param_2 * 8);
  fVar8 = *(float *)(*param_1 + uVar7 * 4);
  lVar1 = *param_1 + uVar7 * 4;
  if (fVar8 <= fVar3) {
    uVar6 = 0;
    lVar2 = (ulonglong)uVar5 * 2 + -1;
    uVar7 = uVar6;
    if (0 < lVar2) {
      do {
        fVar8 = *(float *)(lVar1 + uVar6 * 4);
        if ((fVar8 <= fVar3) && (fVar4 = *(float *)(lVar1 + 4 + uVar6 * 4), fVar3 <= fVar4)) {
          if ((uVar7 & 1) == 0) {
            return 1;
          }
          if (fVar4 - fVar3 <= fVar3 - fVar8) {
            fVar8 = fVar4;
          }
          *param_3 = fVar8;
          return 1;
        }
        uVar6 = uVar6 + 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while ((longlong)uVar6 < lVar2);
    }
    *param_3 = *(float *)(lVar1 + lVar2 * 4);
    return 1;
  }
  *param_3 = fVar8;
  return 1;
}



// FUNCTION 145071280 FUN_145071280 body=247 status=ok
// SIG undefined FUN_145071280(void)

void FUN_145071280(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145071380 FUN_145071380 body=83 status=ok
// SIG undefined FUN_145071380(void)

void FUN_145071380(undefined8 *param_1)

{
  *param_1 = hkProcessContext::vftable;
  FUN_145071420(param_1 + 4,param_1);
  FUN_144bfd1a0(param_1 + 6);
  FUN_144bfd1a0(param_1 + 5);
  FUN_144bfd1a0(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1450713e0 FUN_1450713e0 body=53 status=ok
// SIG undefined FUN_1450713e0(void)

void FUN_1450713e0(longlong param_1,undefined8 param_2)

{
  FUN_144c27330(DAT_14c787d38);
  FUN_1450714c0(param_1 + 0x30,param_1,param_2);
  return;
}



// FUNCTION 145071420 FUN_145071420 body=159 status=ok
// SIG undefined FUN_145071420(void)

void FUN_145071420(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 1450714c0 FUN_1450714c0 body=165 status=ok
// SIG undefined FUN_1450714c0(void)

void FUN_1450714c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145071570 FUN_145071570 body=61 status=ok
// SIG undefined FUN_145071570(void)

undefined8 FUN_145071570(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450715e0 FUN_1450715e0 body=76 status=ok
// SIG undefined FUN_1450715e0(void)

void FUN_1450715e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + param_1);
    puVar2 = puVar1;
    do {
      (**(code **)*puVar2)(puVar1,0);
      puVar1 = puVar1 + -2;
      puVar2 = puVar2 + -2;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145071630 FUN_145071630 body=20 status=ok
// SIG undefined FUN_145071630(void)

void FUN_145071630(void)

{
  memset(&DAT_14c79bad0,0,0x120);
  return;
}



// FUNCTION 145071650 FUN_145071650 body=142 status=ok
// SIG undefined FUN_145071650(void)

void FUN_145071650(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = &DAT_14c79bad0;
  do {
    puVar1 = (undefined8 *)*puVar4;
    puVar3 = (undefined8 *)0x0;
    while (puVar2 = puVar3, puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
      *(int *)((longlong)puVar3 + 0xc) = *(int *)((longlong)puVar3 + 0xc) + 1;
      puVar1 = (undefined8 *)*puVar3;
      if (3 < *(uint *)((longlong)puVar3 + 0xc)) {
        if (puVar2 == (undefined8 *)0x0) {
          *puVar4 = puVar1;
          AK::MemoryMgr::Free(5,puVar3);
          puVar3 = puVar2;
        }
        else {
          *puVar2 = puVar1;
          AK::MemoryMgr::Free(5,puVar3);
          puVar3 = puVar2;
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while ((longlong)puVar4 < 0x14c79bbf0);
  return;
}



// FUNCTION 1450716e0 FUN_1450716e0 body=102 status=ok
// SIG undefined FUN_1450716e0(void)

void FUN_1450716e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = &DAT_14c79bad0;
  do {
    puVar2 = (undefined8 *)*puVar3;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      AK::MemoryMgr::Free(5,puVar2);
      puVar2 = puVar1;
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while ((longlong)puVar3 < 0x14c79bbf0);
  return;
}



// FUNCTION 145071750 FUN_145071750 body=341 status=ok
// SIG undefined FUN_145071750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_145071750(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  uVar3 = _DAT_14c72f434;
  uVar2 = (uint)*(ushort *)(param_1 + 2);
  bVar1 = *(byte *)(param_1 + 1);
  if (*(ushort *)(param_1 + 2) < _DAT_14c72f434) {
    *(short *)(param_1 + 2) = (short)_DAT_14c72f434;
    uVar2 = uVar3 & 0xffff;
  }
  uVar5 = 1;
  if ((uVar2 == _DAT_14c72f434) && (bVar1 < 0x25)) {
    uVar3 = bVar1 - 1;
    local_res8.QuadPart = 0;
    plVar4 = (longlong *)(&DAT_14c79bad0)[uVar3];
    while (plVar4 != (longlong *)0x0) {
      LOCK();
      bVar6 = (int)plVar4[1] == 0;
      if (bVar6) {
        *(int *)(plVar4 + 1) = 1;
      }
      UNLOCK();
      if (bVar6) {
        LOCK();
        bVar6 = plVar4 == (longlong *)(&DAT_14c79bad0)[uVar3];
        if (bVar6) {
          (&DAT_14c79bad0)[uVar3] = *plVar4;
        }
        UNLOCK();
        if (bVar6) goto LAB_14507187b;
        LOCK();
        *(undefined4 *)(plVar4 + 1) = 0;
        UNLOCK();
      }
      else {
        if (local_res8.QuadPart == 0) {
          QueryPerformanceCounter(&local_res8);
          local_res8.QuadPart = local_res8.QuadPart + (longlong)(DAT_14c79c4d4 * 0.01);
        }
        local_res10.QuadPart = 0;
        QueryPerformanceCounter(&local_res10);
        if (local_res8.QuadPart <= local_res10.QuadPart) {
          Sleep(1);
        }
      }
      plVar4 = (longlong *)(&DAT_14c79bad0)[uVar3];
    }
  }
  plVar4 = AK::MemoryMgr::Malign
                     (5,(ulonglong)((uint)*(ushort *)(param_1 + 2) * (uint)bVar1 * 4 + 0x20),0x10);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0x34;
  }
  else {
    LOCK();
    *(undefined4 *)(plVar4 + 1) = 1;
    UNLOCK();
LAB_14507187b:
    *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    *param_1 = (longlong)(plVar4 + 4);
    *(undefined2 *)((longlong)param_1 + 0x12) = 0;
  }
  return uVar5;
}



// FUNCTION 1450718b0 FUN_1450718b0 body=151 status=ok
// SIG undefined FUN_1450718b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1450718b0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  
  bVar4 = *(byte *)(param_1 + 1);
  lVar5 = *param_1;
  if ((lVar5 != 0) && (bVar4 != 0)) {
    if ((*(ushort *)(param_1 + 2) == _DAT_14c72f434) && (bVar4 < 0x25)) {
      plVar1 = &DAT_14c79bad0 + (bVar4 - 1);
      do {
        lVar6 = *plVar1;
        LOCK();
        *(longlong *)(lVar5 + -0x20) = lVar6;
        UNLOCK();
        LOCK();
        lVar3 = *plVar1;
        if (lVar6 == lVar3) {
          *plVar1 = lVar5 + -0x20;
        }
        UNLOCK();
      } while (lVar6 != lVar3);
      LOCK();
      uVar2 = *(uint *)(lVar5 + -0x18);
      *(uint *)(lVar5 + -0x18) = 0;
      UNLOCK();
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return (ulonglong)uVar2;
    }
    AK::MemoryMgr::Free(5,(void *)(lVar5 + -0x20));
    in_RAX = extraout_RAX;
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return in_RAX;
}



// FUNCTION 145071950 FUN_145071950 body=4 status=ok
// SIG undefined FUN_145071950(void)

undefined1 FUN_145071950(undefined8 param_1,undefined1 param_2)

{
  return param_2;
}



// FUNCTION 145071960 FUN_145071960 body=62 status=ok
// SIG undefined FUN_145071960(void)

uint FUN_145071960(uint *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 >> 0xc;
  if ((uVar1 & 8) != 0) {
    uVar2 = 0;
    for (uVar1 = uVar1 & 7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      uVar2 = uVar2 + 1;
    }
    if (param_2 == uVar2) {
      return *param_1 - 1;
    }
    if (uVar2 < param_2) {
      return param_2 - 1;
    }
  }
  return (uint)param_2;
}



// FUNCTION 1450719a0 FUN_1450719a0 body=24 status=ok
// SIG undefined FUN_1450719a0(void)

undefined1 FUN_1450719a0(byte *param_1,byte param_2)

{
  return (&DAT_14c72e970)[(ulonglong)param_2 + (ulonglong)(*param_1 - 1) * 8];
}



// FUNCTION 1450719c0 FUN_1450719c0 body=45 status=ok
// SIG undefined FUN_1450719c0(void)

undefined8 FUN_1450719c0(undefined8 param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (DAT_14c79bcd0 != DVar1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bc80);
  }
  return param_1;
}



// FUNCTION 1450719f0 FUN_1450719f0 body=41 status=ok
// SIG undefined FUN_1450719f0(void)

void FUN_1450719f0(void)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  if (DAT_14c79bcd0 != DVar1) {
                    /* WARNING: Could not recover jumptable at 0x000145071a0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bc80);
    return;
  }
  return;
}



// FUNCTION 145071a20 FUN_145071a20 body=18 status=ok
// SIG undefined FUN_145071a20(void)

undefined4 * FUN_145071a20(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145071a40 FUN_145071a40 body=14 status=ok
// SIG undefined FUN_145071a40(void)

undefined4 * FUN_145071a40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145071a50 FUN_145071a50 body=254 status=ok
// SIG undefined FUN_145071a50(void)

undefined4 * FUN_145071a50(undefined4 *param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_res8;
  int local_18 [4];
  
  *param_1 = param_3;
  bVar3 = false;
  *(longlong *)(param_1 + 2) = *param_2;
  lVar6 = 0;
  local_res8 = *param_2;
  *param_2 = -1;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  do {
    lVar2 = (&local_res8)[lVar6];
    if (lVar2 == -1) {
      return param_1;
    }
    lVar5 = (ulonglong)((uint)lVar2 & 0xfff) * 0x38 + DAT_14c79bc18;
    uVar4 = *(uint *)(lVar5 + 0x30);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar5 + 0x30);
      bVar7 = uVar4 == uVar1;
      if (bVar7) {
        *(uint *)(lVar5 + 0x30) = uVar4 & 0x7fffffff;
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
      UNLOCK();
    } while (!bVar7);
    if ((uVar4 & 0x7fffffff) == 0) {
      uVar4 = *(uint *)(lVar5 + 0x1c);
      FUN_145072700(lVar2,(ulonglong)uVar4);
      local_18[uVar4] = local_18[uVar4] + 1;
      bVar3 = true;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 < 1);
  if (bVar3) {
    if (local_18[0] != 0) {
      FUN_145072e60(0);
    }
    if (local_18[1] != 0) {
      FUN_145072e60(1);
    }
    if (local_18[2] != 0) {
      FUN_145072e60(2);
    }
    if (local_18[3] != 0) {
      FUN_145072e60(3);
    }
  }
  return param_1;
}



// FUNCTION 145071b50 FUN_145071b50 body=38 status=ok
// SIG undefined FUN_145071b50(void)

undefined4 * FUN_145071b50(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 145071b80 FUN_145071b80 body=30 status=ok
// SIG undefined FUN_145071b80(void)

undefined4 * FUN_145071b80(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 145071ba0 FUN_145071ba0 body=463 status=ok
// SIG undefined FUN_145071ba0(void)

undefined4 *
FUN_145071ba0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  int local_28 [8];
  
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 2) = *param_2;
  if (param_4 == -1) {
    bVar2 = false;
    uVar5 = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    uVar6 = uVar5;
    do {
      lVar8 = param_2[uVar6];
      if (lVar8 == -1) {
        return param_1;
      }
      lVar4 = (ulonglong)((uint)lVar8 & 0xfff) * 0x38 + DAT_14c79bc18;
      uVar7 = *(uint *)(lVar4 + 0x30);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar4 + 0x30);
        bVar9 = uVar7 == uVar1;
        if (bVar9) {
          *(uint *)(lVar4 + 0x30) = uVar7 & 0x7fffffff;
          uVar1 = uVar7;
        }
        uVar7 = uVar1;
        UNLOCK();
      } while (!bVar9);
      if ((uVar7 & 0x7fffffff) == 0) {
        uVar7 = *(uint *)(lVar4 + 0x1c);
        FUN_145072700(lVar8,(ulonglong)uVar7);
        local_28[(ulonglong)uVar7 + 4] = local_28[(ulonglong)uVar7 + 4] + 1;
        bVar2 = true;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < 1);
    uVar6 = uVar5;
    if (bVar2) {
      do {
        if ((*(int *)((longlong)local_28 + uVar5 + 0x10) != 0) &&
           (*(int *)((longlong)&DAT_14c79bc28 + uVar5) == 0)) {
          FUN_145072e60(uVar6);
        }
        uVar7 = (int)uVar6 + 1;
        uVar5 = uVar5 + 4;
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < 4);
    }
  }
  else {
    FUN_145073070(param_2,param_4);
    bVar2 = false;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    lVar8 = 0;
    do {
      lVar4 = param_2[lVar8];
      if (lVar4 == -1) {
        return param_1;
      }
      lVar3 = (ulonglong)((uint)lVar4 & 0xfff) * 0x38 + DAT_14c79bc18;
      uVar7 = *(uint *)(lVar3 + 0x30);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar3 + 0x30);
        bVar9 = uVar7 == uVar1;
        if (bVar9) {
          *(uint *)(lVar3 + 0x30) = uVar7 & 0x7fffffff;
          uVar1 = uVar7;
        }
        uVar7 = uVar1;
        UNLOCK();
      } while (!bVar9);
      if ((uVar7 & 0x7fffffff) == 0) {
        uVar7 = *(uint *)(lVar3 + 0x1c);
        FUN_145072700(lVar4,(ulonglong)uVar7);
        local_28[uVar7] = local_28[uVar7] + 1;
        bVar2 = true;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < 1);
    if (bVar2) {
      if (local_28[0] != 0) {
        FUN_145072e60(0);
      }
      if (local_28[1] != 0) {
        FUN_145072e60(1);
      }
      if (local_28[2] != 0) {
        FUN_145072e60(2);
      }
      if (local_28[3] != 0) {
        FUN_145072e60(3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145071d70 FUN_145071d70 body=31 status=ok
// SIG undefined FUN_145071d70(void)

void FUN_145071d70(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 3) = 0x1000;
  *param_1 = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 145071d90 FUN_145071d90 body=631 status=ok
// SIG undefined FUN_145071d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145071d90(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  HANDLE pvVar3;
  void *_Dst;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  LARGE_INTEGER local_res10;
  
  QueryPerformanceFrequency(&local_res10);
  DAT_14c79c4d4 = (float)((double)local_res10.QuadPart * 0.001);
  if (DAT_14c79bbf0 != 0) {
    return 3;
  }
  puVar4 = &DAT_14c79bc48;
  uVar12 = 0;
  lVar5 = 4;
  uVar1 = uVar12;
  do {
    *(undefined4 *)((longlong)&DAT_14c79bc28 + uVar1) = 0;
    _DAT_14c79bc50 = 0;
    *(undefined4 *)((longlong)&DAT_14c79bc38 + uVar1) = 0;
    uVar1 = uVar1 + 4;
    *puVar4 = 1;
    puVar4 = puVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  DAT_14c79bc48 = _DAT_14c79bc50;
  if (*param_1 != 0) {
    DAT_14c79bc48 = (undefined4)param_1[1];
  }
  DAT_14c79bc4c = _DAT_14c79bc50;
  if (*param_1 != 0) {
    DAT_14c79bc4c = *(undefined4 *)((longlong)param_1 + 0xc);
  }
  if (*param_1 != 0) {
    _DAT_14c79bc50 = (undefined4)param_1[2];
  }
  uVar2 = FUN_145351600(&DAT_14c79bd60,*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3]);
  if ((int)uVar2 == 1) {
    puVar9 = &DAT_14c79bc58;
    uVar1 = uVar12;
    do {
      pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *puVar9 = pvVar3;
      if (pvVar3 == (HANDLE)0x0) {
        FUN_145072010();
        return 2;
      }
      uVar7 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar7;
      puVar9 = puVar9 + 1;
    } while (uVar7 == 0);
    DAT_14c79bbf0 = *param_1;
    lRam000000014c79bbf8 = param_1[1];
    plVar8 = &DAT_14c79bce0;
    _DAT_14c79bc00 = param_1[2];
    lRam000000014c79bc08 = param_1[3];
    DAT_14c79bc10 = param_1[4];
    uVar1 = uVar12;
    do {
      plVar8[1] = 0x1fff;
      plVar8[3] = 0;
      plVar8[2] = 0;
      _Dst = AK::MemoryMgr::Malloc(5,0x20000);
      *plVar8 = (longlong)_Dst;
      if (_Dst == (void *)0x0) goto LAB_145071fd9;
      memset(_Dst,0,0x20000);
      lVar5 = 0x2000;
      uVar6 = uVar12;
      uVar10 = uVar12;
      uVar11 = uVar12;
      do {
        *(undefined8 *)(uVar11 + *plVar8) = 0xffffffffffffffff;
        LOCK();
        *(ulonglong *)(uVar6 + 8 + *plVar8) = uVar10;
        UNLOCK();
        lVar5 = lVar5 + -1;
        uVar6 = uVar6 + 0x10;
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 + 0x10;
      } while (lVar5 != 0);
      uVar7 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar7;
      plVar8 = plVar8 + 4;
    } while (uVar7 < 4);
    DAT_14c79bc18 = AK::MemoryMgr::Malloc(0x10,0x38000);
    if (DAT_14c79bc18 == (void *)0x0) {
LAB_145071fd9:
      FUN_145072010();
      uVar2 = 0x34;
    }
    else {
      memset(DAT_14c79bc18,0,0x38000);
      DAT_14c79bc20 = 0xfff;
      _DAT_14c79bc70 = "AudioMgr";
      uVar2 = 1;
      DAT_14c79bc7c = 0;
      _DAT_14c79bc78 = 3;
      DAT_14c79bc60 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 145072010 FUN_145072010 body=267 status=ok
// SIG undefined FUN_145072010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145072010(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar5;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar4 = uVar1;
  do {
    while ((0 < *(int *)((longlong)&DAT_14c79bc28 + uVar1) ||
           (0 < *(int *)((longlong)&DAT_14c79bc38 + uVar1)))) {
      Sleep(1);
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar1 = uVar1 + 4;
  } while (uVar3 < 4);
  if (DAT_14c79bc58 != (HANDLE)0x0) {
    CloseHandle(DAT_14c79bc58);
  }
  DAT_14c79bc58 = (HANDLE)0x0;
  puVar2 = &DAT_14c79bce0;
  lVar5 = 4;
  do {
    if ((void *)*puVar2 != (void *)0x0) {
      AK::MemoryMgr::Free(5,(void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  AK::MemoryMgr::Free(0x10,DAT_14c79bc18);
  DAT_14c79bc18 = (void *)0x0;
  DAT_14c79bbf0 = 0;
  uRam000000014c79bbf8 = 0;
  _DAT_14c79bc00 = 0;
  uRam000000014c79bc08 = 0;
  DAT_14c79bc10 = 0;
  FUN_145351750(&DAT_14c79bd60);
  DAT_14c79bc60 = 0;
  return;
}



// FUNCTION 145072120 FUN_145072120 body=8 status=ok
// SIG undefined FUN_145072120(void)

undefined1 FUN_145072120(void)

{
  return DAT_14c79bc60;
}



// FUNCTION 145072130 FUN_145072130 body=29 status=ok
// SIG undefined FUN_145072130(void)

undefined4 FUN_145072130(ulonglong param_1)

{
  if (DAT_14c79bbf0 == 0) {
    return 1;
  }
  return (&DAT_14c79bc48)[param_1 & 0xffffffff];
}



// FUNCTION 145072150 FUN_145072150 body=28 status=ok
// SIG undefined FUN_145072150(void)

void FUN_145072150(uint param_1,undefined4 param_2)

{
  if ((DAT_14c79bbf0 != 0) && (param_1 < 3)) {
    (&DAT_14c79bc48)[param_1] = param_2;
  }
  return;
}



// FUNCTION 145072170 FUN_145072170 body=34 status=ok
// SIG undefined FUN_145072170(void)

void FUN_145072170(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bca8);
  DAT_14c79bcd0 = GetCurrentThreadId();
  return;
}



// FUNCTION 1450721a0 FUN_1450721a0 body=24 status=ok
// SIG undefined FUN_1450721a0(void)

void FUN_1450721a0(void)

{
  DAT_14c79bcd0 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001450721b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bca8);
  return;
}



// FUNCTION 1450721c0 thunk_FUN_145073070 body=5 status=ok
// SIG undefined thunk_FUN_145073070(void)

ulonglong thunk_FUN_145073070(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  puVar6 = (ulonglong *)((ulonglong)((uint)uVar1 & 0xfff) * 0x38 + DAT_14c79bc18);
  uVar4 = *puVar6;
  if ((uVar4 == (uVar1 & 0xfffffffffffff001 | 1)) && (param_2 != 0xffffffffffffffff)) {
    uVar4 = (ulonglong)((uint)param_2 & 0xfff);
    puVar5 = (ulonglong *)(uVar4 * 0x38 + DAT_14c79bc18);
    puVar3 = (ulonglong *)0x0;
    do {
      while ((uVar2 = puVar5[5], uVar2 == DAT_14c72e9b0 ||
             (uVar4 = *puVar5, uVar4 != (param_2 & 0xfffffffffffff001 | 1)))) {
        param_2 = puVar5[4];
        if (param_2 == 0xffffffffffffffff) {
          if (puVar3 == (ulonglong *)0x0) {
            return uVar4;
          }
          uVar4 = FUN_1453519f0(&DAT_14c79bd60,puVar3);
          return uVar4;
        }
        uVar4 = (ulonglong)((uint)param_2 & 0xfff);
        puVar5 = (ulonglong *)(uVar4 * 0x38 + DAT_14c79bc18);
      }
      if (puVar3 == (ulonglong *)0x0) {
        puVar3 = (ulonglong *)FUN_145351830(&DAT_14c79bd60,0x10,8);
        while (puVar3 == (ulonglong *)0x0) {
          puVar3 = (ulonglong *)FUN_145351830(&DAT_14c79bd60,0x10,8);
          Sleep(1);
        }
        *puVar3 = uVar1;
      }
      puVar3[1] = uVar2;
      LOCK();
      uVar4 = puVar5[5];
      bVar7 = uVar2 == uVar4;
      if (bVar7) {
        puVar5[5] = (ulonglong)puVar3;
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar7);
    LOCK();
    puVar6 = puVar6 + 6;
    *(int *)puVar6 = (int)*puVar6 + 1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1450721d0 FUN_1450721d0 body=146 status=ok
// SIG undefined FUN_1450721d0(void)

undefined8
FUN_1450721d0(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,undefined4 param_5
             )

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  uVar2 = (ulonglong)param_3;
  FUN_145072790(local_res8,0,param_4,0,param_5);
  if (0 < (int)param_3) {
    puVar1 = (undefined8 *)(param_2 + 8);
    do {
      FUN_145073070(local_res8,*puVar1);
      puVar1 = puVar1 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_145071a50(param_1,local_res8,param_5);
  return param_1;
}



// FUNCTION 145072270 FUN_145072270 body=3 status=ok
// SIG undefined FUN_145072270(void)

undefined1 FUN_145072270(void)

{
  return 1;
}



// FUNCTION 145072280 FUN_145072280 body=644 status=ok
// SIG undefined FUN_145072280(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145072280(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  ulonglong local_res10 [3];
  int local_48 [6];
  ulonglong local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c79bde0) && (FUN_144b3d300(&DAT_14c79bde0), DAT_14c79bde0 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bdb8);
    atexit((_func_5014 *)&LAB_149928de0);
    _Init_thread_footer(&DAT_14c79bde0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bdb8);
  FUN_145072790(local_res10 + 1,0,"AK JobMgr Signal WorkUntilDone",0,3);
  local_res10[0] = local_res10[1];
  FUN_145073070(local_res10,*(undefined8 *)(param_1 + 8));
  bVar3 = false;
  lVar5 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  do {
    uVar2 = local_res10[lVar5];
    if (uVar2 == 0xffffffffffffffff) goto LAB_1450723ce;
    lVar4 = (ulonglong)((uint)uVar2 & 0xfff) * 0x38 + DAT_14c79bc18;
    uVar6 = *(uint *)(lVar4 + 0x30);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar4 + 0x30);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(uint *)(lVar4 + 0x30) = uVar6 & 0x7fffffff;
        uVar1 = uVar6;
      }
      uVar6 = uVar1;
      UNLOCK();
    } while (!bVar7);
    if ((uVar6 & 0x7fffffff) == 0) {
      uVar6 = *(uint *)(lVar4 + 0x1c);
      FUN_145072700(uVar2,(ulonglong)uVar6);
      local_48[uVar6] = local_48[uVar6] + 1;
      bVar3 = true;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 < 1);
  if (bVar3) {
    if (local_48[0] != 0) {
      FUN_145072e60(0);
    }
    if (local_48[1] != 0) {
      FUN_145072e60(1);
    }
    if (local_48[2] != 0) {
      FUN_145072e60(2);
    }
    if (local_48[3] != 0) {
      FUN_145072e60(3);
    }
  }
LAB_1450723ce:
  uVar6 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  WaitForSingleObject(DAT_14c79bc58,0xffffffff);
  local_30 = local_res10[1];
  local_48[4] = 3;
  while ((FUN_145072920(local_48 + 4,0), local_res10[1] != 0xffffffffffffffff &&
         (*(ulonglong *)((ulonglong)((uint)local_res10[1] & 0xfff) * 0x38 + DAT_14c79bc18) ==
          (local_res10[1] & 0xfffffffffffff001 | 1)))) {
    WaitForSingleObject(DAT_14c79bc58,0xffffffff);
  }
  MXCSR = MXCSR & 0xffff7fff | uVar6;
  FUN_145351800(&DAT_14c79bd60);
  AK::MemoryMgr::TrimForThread();
                    /* WARNING: Could not recover jumptable at 0x0001450724be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bdb8);
  return;
}



// FUNCTION 145072510 FUN_145072510 body=14 status=ok
// SIG undefined FUN_145072510(void)

void FUN_145072510(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145072517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bc80);
  return;
}



// FUNCTION 145072520 FUN_145072520 body=14 status=ok
// SIG undefined FUN_145072520(void)

void FUN_145072520(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145072527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bc80);
  return;
}



// FUNCTION 145072530 FUN_145072530 body=77 status=ok
// SIG undefined FUN_145072530(void)

undefined8 *
FUN_145072530(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 local_res8 [4];
  
  *param_1 = 0xffffffffffffffff;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_145072790(local_res8,0,param_4,0,param_5);
  *param_1 = local_res8[0];
  return param_1;
}



// FUNCTION 145072580 FUN_145072580 body=50 status=ok
// SIG undefined FUN_145072580(void)

void FUN_145072580(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_1453519f0(&DAT_14c79bd60);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1450725c0 FUN_1450725c0 body=28 status=ok
// SIG undefined FUN_1450725c0(void)

void FUN_1450725c0(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_145073070(lVar1 + (param_2 & 0xffffffff) * 8,*(undefined8 *)(lVar1 + (ulonglong)param_3 * 8)
                 );
    return;
  }
  return;
}



// FUNCTION 1450725e0 FUN_1450725e0 body=25 status=ok
// SIG undefined FUN_1450725e0(void)

void FUN_1450725e0(longlong param_1,ulonglong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_145073070(*(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 8,
                  *(undefined8 *)(param_3 + 8));
    return;
  }
  return;
}



// FUNCTION 145072600 FUN_145072600 body=113 status=ok
// SIG undefined FUN_145072600(void)

undefined4 * FUN_145072600(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 local_res8;
  
  if (param_1[1] == 0) {
    *param_2 = 0x34;
    *(undefined8 *)(param_2 + 2) = 0xffffffffffffffff;
    return param_2;
  }
  FUN_145072f70(param_1[1],*(undefined4 *)(param_1 + 2),1);
  local_res8 = *param_1;
  *param_1 = 0xffffffffffffffff;
  FUN_145071a50(param_2,&local_res8,*(undefined4 *)((longlong)param_1 + 0x14));
  return param_2;
}



// FUNCTION 145072680 FUN_145072680 body=95 status=ok
// SIG undefined FUN_145072680(void)

void FUN_145072680(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  uVar1 = FUN_145072f00(param_3,param_4);
  FUN_145072790(&local_res8,uVar1,param_5,param_6,param_7);
  *param_1 = uVar1;
  *param_2 = local_res8;
  return;
}



// FUNCTION 1450726e0 FUN_1450726e0 body=24 status=ok
// SIG undefined FUN_1450726e0(void)

uint FUN_1450726e0(uint param_1)

{
  uint uVar1;
  
  if (DAT_14c79bbf0 == 0) {
    uVar1 = 3;
    if (3 < param_1) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  return param_1;
}



// FUNCTION 145072700 FUN_145072700 body=142 status=ok
// SIG undefined FUN_145072700(void)

ulonglong FUN_145072700(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  do {
    uVar2 = FUN_1450726e0(param_2);
    uVar4 = (ulonglong)uVar2;
    do {
      uVar1 = (&DAT_14c79bcf8)[uVar4 * 4];
      while( true ) {
        puVar5 = (undefined8 *)
                 ((uVar1 & (&DAT_14c79bce8)[uVar4 * 4]) * 0x10 + (&DAT_14c79bce0)[uVar4 * 4]);
        if (puVar5[1] != uVar1) break;
        LOCK();
        uVar3 = (&DAT_14c79bcf8)[uVar4 * 4];
        bVar6 = uVar1 == uVar3;
        if (bVar6) {
          (&DAT_14c79bcf8)[uVar4 * 4] = uVar1 + 1;
          uVar3 = uVar1;
        }
        UNLOCK();
        if (bVar6) {
          *puVar5 = param_1;
          LOCK();
          puVar5[1] = uVar1 + 1;
          UNLOCK();
          return uVar3;
        }
      }
    } while (-1 < (longlong)(puVar5[1] - uVar1));
    Sleep(1);
  } while( true );
}



// FUNCTION 145072790 FUN_145072790 body=252 status=ok
// SIG undefined FUN_145072790(void)

/* WARNING: Removing unreachable block (ram,0x0001450727d5) */

undefined4
FUN_145072790(ulonglong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = DAT_14c79bc20 + 1;
  DAT_14c79bc20 = (ulonglong)((uint)uVar1 & 0xfff);
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c79bc20 * 0x38;
  uVar2 = *(ulonglong *)(lVar5 + DAT_14c79bc18);
  while ((uVar2 & 0xfff) != 0) {
    Sleep(1);
    uVar2 = *(ulonglong *)(lVar5 + DAT_14c79bc18);
  }
  plVar4 = (longlong *)(DAT_14c79bc18 + lVar5);
  LOCK();
  lVar5 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  *(undefined4 *)((longlong)plVar4 + 0x1c) = param_5;
  *(undefined4 *)(plVar4 + 3) = param_4;
  plVar4[1] = param_2;
  plVar4[2] = param_3;
  LOCK();
  plVar4[4] = -1;
  UNLOCK();
  LOCK();
  plVar4[5] = 0;
  UNLOCK();
  LOCK();
  lVar3 = plVar4[6];
  *(undefined4 *)(plVar4 + 6) = 0x80000000;
  UNLOCK();
  *param_1 = (uVar1 ^ lVar5 + 1U) & 0xfffffffffffff000 ^ uVar1;
  return (int)lVar3;
}



// FUNCTION 145072890 FUN_145072890 body=144 status=ok
// SIG undefined FUN_145072890(void)

void FUN_145072890(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  undefined8 local_10;
  
  LOCK();
  (&DAT_14c79bc38)[param_1] = (&DAT_14c79bc38)[param_1] + 1;
  UNLOCK();
  local_10 = 0xffffffffffffffff;
  uVar1 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  local_18[0] = param_1;
  FUN_145072920(local_18);
  MXCSR = MXCSR & 0xffff7fff | uVar1;
  FUN_145351800(&DAT_14c79bd60);
  LOCK();
  (&DAT_14c79bc38)[param_1] = (&DAT_14c79bc38)[param_1] + -1;
  UNLOCK();
  return;
}



// FUNCTION 145072920 FUN_145072920 body=1331 status=ok
// SIG undefined FUN_145072920(void)

ulonglong FUN_145072920(uint *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  longlong local_58;
  
  local_res18 = 0;
  if (param_2 != 0) {
    QueryPerformanceCounter(&local_res20);
    local_res18 = (longlong)(DAT_14c79c4d4 * 0.001) * (ulonglong)param_2 + local_res20.QuadPart;
  }
  uVar8 = *param_1;
  uVar6 = uVar8;
  if ((DAT_14c79bbf0 == (code *)0x0) && (uVar6 = 3, 3 < uVar8)) {
    uVar6 = uVar8;
  }
  uVar15 = (ulonglong)uVar6;
  lVar14 = (&DAT_14c79bce0)[uVar15 * 4];
LAB_1450729c7:
  uVar10 = (&DAT_14c79bcf0)[uVar15 * 4];
  do {
    uVar12 = uVar10 & (&DAT_14c79bce8)[uVar15 * 4];
    lVar11 = *(longlong *)(lVar14 + 8 + uVar12 * 0x10) + ~uVar10;
    if (lVar11 != 0) goto LAB_145072ae3;
    LOCK();
    bVar19 = uVar10 == (&DAT_14c79bcf0)[uVar15 * 4];
    if (bVar19) {
      (&DAT_14c79bcf0)[uVar15 * 4] = uVar10 + 1;
    }
    UNLOCK();
  } while (!bVar19);
  lVar11 = *(longlong *)(lVar14 + uVar12 * 0x10);
  LOCK();
  *(ulonglong *)(lVar14 + 8 + uVar12 * 0x10) = (&DAT_14c79bce8)[uVar15 * 4] + 1 + uVar10;
  UNLOCK();
joined_r0x000145072a21:
  if (lVar11 == -1) goto LAB_145072d45;
  do {
    lVar5 = DAT_14c79bc18;
    lVar16 = -1;
    lVar14 = -1;
    lVar17 = (ulonglong)((uint)lVar11 & 0xfff) * 0x38;
    puVar4 = *(undefined8 **)(lVar17 + 8 + DAT_14c79bc18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,local_60);
      lVar14 = local_58;
      FUN_1453519f0(&DAT_14c79bd60,*(undefined8 *)(lVar17 + 8 + lVar5));
      *(undefined8 *)(lVar17 + 8 + lVar5) = 0;
    }
    lVar5 = DAT_14c79bc18;
    LOCK();
    *(longlong *)(lVar17 + 0x20 + DAT_14c79bc18) = lVar14;
    UNLOCK();
    LOCK();
    plVar2 = (longlong *)(lVar17 + 0x28 + lVar5);
    plVar18 = (longlong *)*plVar2;
    *plVar2 = DAT_14c72e9b0;
    UNLOCK();
    if (plVar18 != (longlong *)0x0) {
      while (lVar14 != -1) {
        lVar9 = (ulonglong)((uint)lVar14 & 0xfff) * 0x38 + DAT_14c79bc18;
        LOCK();
        lVar14 = *(longlong *)(lVar9 + 0x28);
        *(longlong *)(lVar9 + 0x28) = (longlong)plVar18;
        UNLOCK();
        if (lVar14 != DAT_14c72e9b0) {
          if (lVar14 == 0) {
            plVar18 = (longlong *)0x0;
          }
          break;
        }
        LOCK();
        *(longlong *)(lVar9 + 0x28) = DAT_14c72e9b0;
        UNLOCK();
        lVar14 = *(longlong *)(lVar9 + 0x20);
      }
    }
    LOCK();
    plVar2 = (longlong *)(lVar17 + lVar5);
    *plVar2 = *plVar2 + 0xfff;
    UNLOCK();
    bVar19 = false;
    local_70 = 0;
    uStack_68 = 0;
    lVar14 = lVar16;
    if (plVar18 != (longlong *)0x0) {
      do {
        lVar5 = *plVar18;
        lVar17 = (ulonglong)((uint)lVar5 & 0xfff) * 0x38 + DAT_14c79bc18;
        LOCK();
        piVar1 = (int *)(lVar17 + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar16 = lVar14;
        if (iVar3 == 1) {
          uVar6 = *(uint *)(lVar17 + 0x1c);
          if ((lVar14 != -1) || (lVar16 = lVar5, uVar6 != uVar8)) {
            do {
              uVar7 = FUN_1450726e0((ulonglong)uVar6);
              uVar15 = (ulonglong)uVar7;
              lVar16 = (&DAT_14c79bce0)[uVar15 * 4];
              do {
                uVar10 = (&DAT_14c79bcf8)[uVar15 * 4];
                while( true ) {
                  uVar13 = uVar10 & (&DAT_14c79bce8)[uVar15 * 4];
                  uVar12 = *(ulonglong *)(lVar16 + 8 + uVar13 * 0x10);
                  if (uVar12 != uVar10) break;
                  LOCK();
                  bVar19 = uVar10 == (&DAT_14c79bcf8)[uVar15 * 4];
                  if (bVar19) {
                    (&DAT_14c79bcf8)[uVar15 * 4] = uVar10 + 1;
                  }
                  UNLOCK();
                  if (bVar19) {
                    bVar19 = true;
                    *(longlong *)(lVar16 + uVar13 * 0x10) = lVar5;
                    LOCK();
                    *(ulonglong *)(lVar16 + 8 + uVar13 * 0x10) = uVar10 + 1;
                    UNLOCK();
                    piVar1 = (int *)((longlong)&local_70 + (ulonglong)uVar6 * 4);
                    *piVar1 = *piVar1 + 1;
                    lVar16 = lVar14;
                    goto LAB_145072bbd;
                  }
                }
              } while (-1 < (longlong)(uVar12 - uVar10));
              Sleep(1);
            } while( true );
          }
        }
LAB_145072bbd:
        plVar2 = (longlong *)plVar18[1];
        FUN_1453519f0(&DAT_14c79bd60,plVar18);
        lVar14 = lVar16;
        plVar18 = plVar2;
      } while (plVar2 != (longlong *)0x0);
      if (bVar19) {
        if (0 < (int)local_70) {
          FUN_145072e60(0);
        }
        if (0 < local_70._4_4_) {
          FUN_145072e60(1);
        }
        if (0 < (int)uStack_68) {
          FUN_145072e60(2);
        }
        if (0 < uStack_68._4_4_) {
          FUN_145072e60(3);
        }
      }
    }
    if (((*(longlong *)(param_1 + 2) != -1) && (lVar11 == *(longlong *)(param_1 + 2))) ||
       ((0 < local_res18 && (QueryPerformanceCounter(&local_78), local_res18 < local_78.QuadPart))))
    {
      if (lVar16 != -1) {
        FUN_145072700(lVar16,uVar8);
      }
      goto LAB_145072d45;
    }
    lVar11 = lVar16;
  } while (lVar16 != -1);
  uVar6 = uVar8;
  if ((DAT_14c79bbf0 == (code *)0x0) && (uVar6 = 3, 3 < uVar8)) {
    uVar6 = uVar8;
  }
  uVar15 = (ulonglong)uVar6;
  lVar14 = (&DAT_14c79bce0)[uVar15 * 4];
  do {
    uVar10 = (&DAT_14c79bcf0)[uVar15 * 4];
    while( true ) {
      uVar12 = uVar10 & (&DAT_14c79bce8)[uVar15 * 4];
      lVar11 = *(longlong *)(lVar14 + 8 + uVar12 * 0x10) + ~uVar10;
      if (lVar11 != 0) break;
      LOCK();
      bVar19 = uVar10 == (&DAT_14c79bcf0)[uVar15 * 4];
      if (bVar19) {
        (&DAT_14c79bcf0)[uVar15 * 4] = uVar10 + 1;
      }
      UNLOCK();
      if (bVar19) {
        lVar11 = *(longlong *)(lVar14 + uVar12 * 0x10);
        LOCK();
        *(ulonglong *)(lVar14 + 8 + uVar12 * 0x10) = (&DAT_14c79bce8)[uVar15 * 4] + 1 + uVar10;
        UNLOCK();
        goto joined_r0x000145072a21;
      }
    }
  } while (-1 < lVar11);
LAB_145072d45:
  LOCK();
  piVar1 = &DAT_14c79bc28 + uVar8;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 + -1 < 0) {
    LOCK();
    (&DAT_14c79bc28)[uVar8] = (&DAT_14c79bc28)[uVar8] + 1;
    UNLOCK();
  }
  if (DAT_14c79bbf0 == (code *)0x0) {
    uVar15 = 3;
    if (3 < uVar8) {
      uVar15 = (ulonglong)uVar8;
    }
  }
  else {
    uVar15 = (ulonglong)uVar8;
  }
  uVar10 = (&DAT_14c79bce0)[uVar15 * 4];
  if (-1 < *(longlong *)
            (uVar10 + 8 + ((&DAT_14c79bce8)[uVar15 * 4] & (&DAT_14c79bcf0)[uVar15 * 4]) * 0x10) +
           ~(&DAT_14c79bcf0)[uVar15 * 4]) {
    if (DAT_14c79bbf0 == (code *)0x0) {
      uVar15 = 3;
      if (3 < uVar8) {
        uVar15 = (ulonglong)uVar8;
      }
    }
    else {
      uVar15 = (ulonglong)uVar8;
    }
    do {
      uVar8 = (&DAT_14c79bc28)[uVar15];
      uVar6 = uVar8 + 1;
      if ((int)(&DAT_14c79bc48)[uVar15] <= (int)(uVar8 + 1)) {
        uVar6 = (&DAT_14c79bc48)[uVar15];
      }
      LOCK();
      uVar7 = (&DAT_14c79bc28)[uVar15];
      bVar19 = uVar8 == uVar7;
      if (bVar19) {
        (&DAT_14c79bc28)[uVar15] = uVar6;
        uVar7 = uVar8;
      }
      uVar10 = (ulonglong)uVar7;
      UNLOCK();
    } while (!bVar19);
    if ((int)uVar8 < (int)uVar6) {
      uVar7 = (int)uVar15 - 3;
      if (uVar7 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000145072e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = SetEvent((HANDLE)(&DAT_14c79bc58)[uVar7]);
        return (ulonglong)uVar8;
      }
      uVar10 = (*DAT_14c79bbf0)(FUN_145072890,uVar15,uVar6 - uVar8,DAT_14c79bc10);
    }
  }
  return uVar10;
LAB_145072ae3:
  if (lVar11 < 0) goto LAB_145072d45;
  goto LAB_1450729c7;
}



// FUNCTION 145072e60 FUN_145072e60 body=145 status=ok
// SIG undefined FUN_145072e60(void)

int FUN_145072e60(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (DAT_14c79bbf0 == (code *)0x0) {
    uVar7 = 3;
    if (3 < param_1) {
      uVar7 = (ulonglong)param_1;
    }
  }
  else {
    uVar7 = (ulonglong)param_1;
  }
  piVar1 = &DAT_14c79bc28 + uVar7;
  do {
    iVar6 = *piVar1;
    iVar3 = iVar6 + param_2;
    if ((int)(&DAT_14c79bc48)[uVar7] <= iVar6 + param_2) {
      iVar3 = (&DAT_14c79bc48)[uVar7];
    }
    LOCK();
    iVar2 = *piVar1;
    bVar8 = iVar6 == iVar2;
    if (bVar8) {
      *piVar1 = iVar3;
      iVar2 = iVar6;
    }
    UNLOCK();
  } while (!bVar8);
  if (iVar3 <= iVar6) {
    return iVar2;
  }
  uVar4 = (int)uVar7 - 3;
  if (1 < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000145072ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*DAT_14c79bbf0)(FUN_145072890,uVar7,iVar3 - iVar6,DAT_14c79bc10);
    return iVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000145072ecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar5 = SetEvent((HANDLE)(&DAT_14c79bc58)[uVar4]);
  return BVar5;
}



// FUNCTION 145072f00 FUN_145072f00 body=103 status=ok
// SIG undefined FUN_145072f00(void)

longlong FUN_145072f00(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145351830(&DAT_14c79bd60,param_1,param_2);
  while (lVar1 == 0) {
    lVar1 = FUN_145351830(&DAT_14c79bd60,param_1,param_2);
    Sleep(1);
  }
  return lVar1;
}



// FUNCTION 145072f70 FUN_145072f70 body=242 status=ok
// SIG undefined FUN_145072f70(void)

void FUN_145072f70(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  int local_28 [4];
  
  uVar5 = 0;
  bVar3 = false;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  uVar7 = uVar5;
  if (0 < param_2) {
    do {
      lVar2 = *param_1;
      if (lVar2 == -1) {
        return;
      }
      lVar4 = (ulonglong)((uint)lVar2 & 0xfff) * 0x38 + DAT_14c79bc18;
      uVar6 = *(uint *)(lVar4 + 0x30);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar4 + 0x30);
        bVar8 = uVar6 == uVar1;
        if (bVar8) {
          *(uint *)(lVar4 + 0x30) = uVar6 & 0x7fffffff;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
        UNLOCK();
      } while (!bVar8);
      if ((uVar6 & 0x7fffffff) == 0) {
        uVar6 = *(uint *)(lVar4 + 0x1c);
        FUN_145072700(lVar2,(ulonglong)uVar6);
        local_28[uVar6] = local_28[uVar6] + 1;
        bVar3 = true;
      }
      uVar6 = (int)uVar7 + 1;
      param_1 = param_1 + 1;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_2);
    uVar7 = uVar5;
    if (bVar3) {
      do {
        if ((*(int *)((longlong)local_28 + uVar5) != 0) &&
           ((param_3 == 1 || (*(int *)((longlong)&DAT_14c79bc28 + uVar5) == 0)))) {
          FUN_145072e60(uVar7);
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 4;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < 4);
    }
  }
  return;
}



// FUNCTION 145073070 FUN_145073070 body=340 status=ok
// SIG undefined FUN_145073070(void)

ulonglong FUN_145073070(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  bool bVar7;
  
  uVar1 = *param_1;
  puVar6 = (ulonglong *)((ulonglong)((uint)uVar1 & 0xfff) * 0x38 + DAT_14c79bc18);
  uVar4 = *puVar6;
  if ((uVar4 == (uVar1 & 0xfffffffffffff001 | 1)) && (param_2 != 0xffffffffffffffff)) {
    uVar4 = (ulonglong)((uint)param_2 & 0xfff);
    puVar5 = (ulonglong *)(uVar4 * 0x38 + DAT_14c79bc18);
    puVar3 = (ulonglong *)0x0;
    do {
      while ((uVar2 = puVar5[5], uVar2 == DAT_14c72e9b0 ||
             (uVar4 = *puVar5, uVar4 != (param_2 & 0xfffffffffffff001 | 1)))) {
        param_2 = puVar5[4];
        if (param_2 == 0xffffffffffffffff) {
          if (puVar3 == (ulonglong *)0x0) {
            return uVar4;
          }
          uVar4 = FUN_1453519f0(&DAT_14c79bd60,puVar3);
          return uVar4;
        }
        uVar4 = (ulonglong)((uint)param_2 & 0xfff);
        puVar5 = (ulonglong *)(uVar4 * 0x38 + DAT_14c79bc18);
      }
      if (puVar3 == (ulonglong *)0x0) {
        puVar3 = (ulonglong *)FUN_145351830(&DAT_14c79bd60,0x10,8);
        while (puVar3 == (ulonglong *)0x0) {
          puVar3 = (ulonglong *)FUN_145351830(&DAT_14c79bd60,0x10,8);
          Sleep(1);
        }
        *puVar3 = uVar1;
      }
      puVar3[1] = uVar2;
      LOCK();
      uVar4 = puVar5[5];
      bVar7 = uVar2 == uVar4;
      if (bVar7) {
        puVar5[5] = (ulonglong)puVar3;
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar7);
    LOCK();
    puVar6 = puVar6 + 6;
    *(int *)puVar6 = (int)*puVar6 + 1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1450731d0 FUN_1450731d0 body=906 status=ok
// SIG undefined FUN_1450731d0(void)

undefined8
FUN_1450731d0(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
             undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
             char param_11)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  int *piVar13;
  uint uVar14;
  ulonglong local_res8;
  
  bVar4 = false;
  bVar3 = false;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0x1f;
  }
  puVar11 = (ulonglong *)((ulonglong)param_2 + (longlong)param_1);
  *param_5 = 0;
  *param_6 = 0;
  if (param_1 + 3 <= puVar11) {
    if (*param_1 == 0x5367674f) {
      return 1;
    }
    if ((*param_1 == 0x46464952) && (param_1[2] == 0x45564157)) {
      puVar7 = (ulonglong *)(param_1 + 3);
      iVar5 = (int)puVar7;
      do {
        uVar14 = (int)puVar11 - iVar5;
        if (uVar14 < 8) {
          return 8;
        }
        local_res8 = *puVar7;
        puVar1 = puVar7 + 1;
        uVar8 = (uint)(local_res8 >> 0x20);
        uVar9 = (uint)local_res8;
        if ((uVar14 - 8 < uVar8) && (uVar9 != 0x61746164)) {
          return 8;
        }
        if (uVar9 < 0x61746165) {
          if (uVar9 == 0x61746164) {
            if (!bVar3) {
              return 7;
            }
            *param_7 = uVar8;
            *param_8 = (int)puVar1 - (int)param_1;
            return 1;
          }
          if (uVar9 == 0x20646b61) {
            if (param_9 != (uint *)0x0) {
              *param_9 = uVar8;
              *(ulonglong **)(param_9 + 2) = puVar1;
            }
          }
          else if (uVar9 == 0x20657563) {
            if (!bVar3) {
              return 7;
            }
            if ((!bVar4) && (param_4 != (uint *)0x0)) {
              if ((int)*puVar1 != 0) {
                uVar6 = FUN_145351c60(param_4);
                if ((int)uVar6 != 1) {
                  return uVar6;
                }
                uVar10 = 0;
                piVar13 = (int *)((longlong)puVar7 + 0xc);
                if (*param_4 != 0) {
                  do {
                    iVar5 = *piVar13;
                    iVar2 = piVar13[1];
                    piVar13 = piVar13 + 6;
                    uVar14 = (int)uVar10 + 1;
                    *(int *)(*(longlong *)(param_4 + 2) + uVar10 * 0x10) = iVar5;
                    *(int *)(*(longlong *)(param_4 + 2) + 4 + uVar10 * 0x10) = iVar2;
                    *(undefined8 *)(*(longlong *)(param_4 + 2) + 8 + uVar10 * 0x10) = 0;
                    uVar10 = (ulonglong)uVar14;
                  } while (uVar14 < *param_4);
                }
                FUN_145351dd0(param_4);
              }
              bVar4 = true;
            }
          }
          else if (uVar9 == 0x20746d66) {
            if (!bVar3) {
              *param_3 = uVar8;
              *(ulonglong **)(param_3 + 2) = puVar1;
              uVar14 = *(uint *)((longlong)puVar7 + 0x1c);
              if ((param_11 == '\0') &&
                 ((((ushort)uVar14 & 0xff) != *(ushort *)((longlong)puVar7 + 10) ||
                  (0x200 < (uVar14 & 0xf00))))) {
                bVar12 = 0;
                for (uVar8 = uVar14; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
                  bVar12 = bVar12 + 1;
                }
                *(uint *)((longlong)puVar7 + 0x1c) = uVar14 << 0xc | (uint)bVar12 | 0x100;
              }
              bVar4 = false;
              bVar3 = true;
            }
          }
          else if (uVar9 == 0x5453494c) {
            local_res8 = 0x400000000;
          }
        }
        else if (uVar9 == 0x6b656573) {
          if (param_10 != (uint *)0x0) {
            *param_10 = uVar8;
            *(ulonglong **)(param_10 + 2) = puVar1;
          }
        }
        else if (uVar9 == 0x6c62616c) {
          if ((bVar4) && (param_4 != (uint *)0x0)) {
            uVar10 = 0;
            if (*param_4 != 0) {
              do {
                if (*(int *)(*(longlong *)(param_4 + 2) + uVar10 * 0x10) == (int)*puVar1) {
                  FUN_145351ca0(param_4,uVar10,(int *)((longlong)puVar7 + 0xc),uVar8 - 4);
                  break;
                }
                uVar14 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar14;
              } while (uVar14 < *param_4);
            }
          }
        }
        else if ((uVar9 == 0x6c706d73) && (*(int *)((longlong)puVar7 + 0x24) != 0)) {
          uVar10 = puVar7[5];
          *param_5 = *(undefined4 *)((ulonglong)(uint)uVar10 + 0x2c + (longlong)puVar1);
          *param_6 = *(undefined4 *)((ulonglong)(uint)uVar10 + 0x30 + (longlong)puVar1);
        }
        puVar7 = (ulonglong *)((longlong)puVar1 + (local_res8 >> 0x20));
        iVar5 = (int)puVar7;
        if (((local_res8 & 0x100000000) != 0) && ((char)*puVar7 == '\0')) {
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
          iVar5 = (int)puVar7;
          if (puVar11 < puVar7) {
            return 7;
          }
        }
      } while( true );
    }
  }
  return 7;
}



// FUNCTION 145073560 FUN_145073560 body=58 status=ok
// SIG undefined FUN_145073560(void)

void FUN_145073560(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = 0x1000;
  local_14 = 0;
  local_20 = param_3;
  local_18 = param_2;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_28);
  return;
}



// FUNCTION 1450735a0 FUN_1450735a0 body=18 status=ok
// SIG undefined FUN_1450735a0(void)

undefined8 * FUN_1450735a0(undefined8 *param_1)

{
  *param_1 = DAT_14c79c0c0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1450735c0 FUN_1450735c0 body=258 status=ok
// SIG undefined FUN_1450735c0(void)

int FUN_1450735c0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hProcess;
  DWORD_PTR DVar3;
  uint uVar4;
  DWORD local_res8 [2];
  uint local_res10 [2];
  ULONG_PTR local_res18 [2];
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  DAT_14c79bde8 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_14c79bff0,FUN_145073740,param_1,4,
                    local_res8);
  if (DAT_14c79bde8 == (HANDLE)0x0) {
    DAT_14c79bde8 = (HANDLE)0x0;
    return 2;
  }
  FUN_145073560(DAT_14c79bde8,local_res8[0],"AK::EventManager");
  BVar1 = SetThreadPriority(DAT_14c79bde8,DAT_14c79bfe8);
  uVar4 = DAT_14c79bfec;
  if ((BVar1 != 0) || (DAT_14c79bfe8 == 0x10000)) {
    if (DAT_14c79bfec != 0) {
      hProcess = GetCurrentProcess();
      BVar1 = GetProcessAffinityMask(hProcess,(PDWORD_PTR)local_res10,local_res18);
      if (BVar1 != 0) {
        uVar4 = uVar4 & local_res10[0];
      }
      DVar3 = SetThreadAffinityMask(DAT_14c79bde8,(ulonglong)uVar4);
      if (DVar3 == 0) goto LAB_14507368a;
    }
    DVar2 = ResumeThread(DAT_14c79bde8);
    if (DVar2 != 0) {
      return 2 - (uint)(DAT_14c79bde8 != (HANDLE)0x0);
    }
  }
LAB_14507368a:
  CloseHandle(DAT_14c79bde8);
  DAT_14c79bde8 = (HANDLE)0x0;
  return 2;
}



// FUNCTION 1450736d0 FUN_1450736d0 body=91 status=ok
// SIG undefined FUN_1450736d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450736d0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (DAT_14c79bde8 != (HANDLE)0x0) {
    if ((HANDLE)*param_1 != (HANDLE)0x0) {
      SetEvent((HANDLE)*param_1);
    }
    WaitForSingleObject(DAT_14c79bde8,0xffffffff);
    CloseHandle(DAT_14c79bde8);
    DAT_14c79bde8 = (HANDLE)0x0;
    _DAT_14c79bdf0 = 0;
  }
  return;
}



// FUNCTION 145073730 FUN_145073730 body=16 status=ok
// SIG undefined FUN_145073730(void)

void FUN_145073730(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145073738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetEvent((HANDLE)*param_1);
    return;
  }
  return;
}



// FUNCTION 145073740 FUN_145073740 body=125 status=ok
// SIG undefined FUN_145073740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145073740(undefined8 *param_1)

{
  DWORD DVar1;
  
  AK::MemoryMgr::InitForThread();
  _DAT_14c79bdf0 = GetCurrentThreadId();
  FUN_1450aae90();
  DVar1 = 0x102;
  do {
    if ((DVar1 == 0) || (DVar1 == 0x102)) {
      FUN_145083db0(DAT_14c790fd8);
    }
    DVar1 = DAT_14c72f430;
    if (DAT_14c79bf68 == 2) {
      DVar1 = 0xffffffff;
    }
    DVar1 = WaitForSingleObject((HANDLE)*param_1,DVar1);
  } while (*(char *)(param_1 + 1) == '\0');
  FUN_1450aaed0();
  AK::MemoryMgr::TermForThread();
  return 0;
}



// FUNCTION 1450737c0 FUN_1450737c0 body=1301 status=ok
// SIG undefined FUN_1450737c0(void)

void FUN_1450737c0(longlong *param_1,float param_2,uint *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *param_3;
  uVar6 = (ulonglong)uVar2;
  pfVar5 = (float *)(*param_1 + uVar6 * 0xc);
  pfVar3 = pfVar5 + 3;
  if (param_2 < *(float *)(*param_1 + uVar6 * 0xc)) {
    for (; (uVar2 != 0 && (param_2 < *pfVar5)); pfVar5 = pfVar5 + -3) {
      uVar2 = (int)uVar6 - 1;
      *param_3 = uVar2;
      uVar6 = (ulonglong)uVar2;
    }
    pfVar3 = pfVar5 + 3;
  }
  else if (*pfVar3 <= param_2) {
    if (uVar2 + 1 < *(uint *)(param_1 + 1)) {
      do {
        if (param_2 < *pfVar3) break;
        iVar1 = (int)uVar6;
        uVar2 = iVar1 + 1;
        pfVar3 = pfVar3 + 3;
        *param_3 = uVar2;
        uVar6 = (ulonglong)uVar2;
      } while (iVar1 + 2U < *(uint *)(param_1 + 1));
    }
    pfVar5 = pfVar3 + -3;
  }
  fVar7 = pfVar5[2];
  fVar11 = 0.0;
  if (fVar7 == 1.26117e-44) {
    *param_4 = pfVar5[1];
  }
  else {
    pfVar4 = (float *)((ulonglong)*param_3 * 8 + (ulonglong)*(uint *)(param_1 + 1) * 0xc + *param_1)
    ;
    fVar9 = (param_2 - *pfVar5) * *pfVar4;
    if (fVar7 == 5.60519e-45) {
      *param_4 = fVar9 + pfVar5[1];
    }
    else {
      fVar8 = pfVar4[1];
      fVar10 = pfVar5[1];
      switch(fVar7) {
      case 0.0:
        fVar9 = 1.0 - fVar9;
        fVar10 = pfVar3[1] - fVar9 * fVar9 * fVar9 * fVar8;
        break;
      case 1.4013e-45:
        fVar10 = (((0.36475623 - fVar9 * 0.11610551) * fVar9 -
                  (0.116105504 - fVar9 * 0.03695753) * fVar9 * fVar9) +
                 (0.98676056 - fVar9 * 0.31409565)) * fVar9 * fVar8 + fVar10;
        break;
      case 2.8026e-45:
        fVar10 = (fVar9 - 3.0) * fVar9 * fVar8 + fVar10;
        break;
      case 4.2039e-45:
        if (1.5707964 < fVar9) {
          fVar9 = 3.1415927 - fVar9;
          fVar7 = fVar9 * fVar9;
          fVar10 = (1.0 - (((0.0041531627 - fVar7 * 9.181827e-05) * fVar7 - 0.08332414) * fVar7 +
                          0.4999983) * fVar9) * fVar8 + fVar10;
        }
        else {
          fVar7 = fVar9 * fVar9;
          fVar10 = (((0.0041531627 - fVar7 * 9.181827e-05) * fVar7 - 0.08332414) * fVar7 + 0.4999983
                   ) * fVar9 * fVar8 + fVar10;
        }
        break;
      default:
        fVar10 = 0.0;
        break;
      case 7.00649e-45:
        fVar9 = fVar9 * fVar9;
        fVar7 = ((fVar9 * 0.000484834 - 0.01961384) * fVar9 + 0.2476748) * fVar9 + 0.00069670216;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
        fVar10 = fVar7 * fVar8 + fVar10;
        break;
      case 8.40779e-45:
        fVar10 = (fVar9 + 1.0) * fVar9 * fVar8 + fVar10;
        break;
      case 9.80909e-45:
        fVar9 = fVar9 * fVar9;
        fVar10 = pfVar3[1] -
                 (((0.04148775 - fVar9 * 0.0012712094) * fVar9 - 0.49991244) * fVar9 + 0.9999933) *
                 fVar8;
        break;
      case 1.12104e-44:
        fVar10 = fVar9 * fVar9 * fVar9 * fVar8 + fVar10;
      }
      *param_4 = fVar10;
    }
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      fVar7 = *param_4;
      if ((-37.0 <= fVar7) && (fVar7 <= 37.0)) {
        uVar2 = (uint)(longlong)(fVar7 * 27866352.0 + 1.0653532e+09);
        fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar11 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                 (float)(uVar2 & 0xff800000);
      }
    }
    else {
      if (iVar1 != 4) {
        return;
      }
      fVar7 = *param_4 * 0.05;
      if ((-37.0 <= fVar7) && (fVar7 <= 37.0)) {
        uVar2 = (uint)(longlong)(fVar7 * 27866352.0 + 1.0653532e+09);
        fVar7 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        *param_4 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
                   (float)(uVar2 & 0xff800000);
        return;
      }
    }
    *param_4 = fVar11;
    return;
  }
  fVar7 = *param_4;
  if (0.0 <= fVar7) {
    fVar11 = -1.0;
  }
  else {
    fVar9 = -1.0;
    fVar11 = 1.0;
    if (fVar7 < -1.0) goto LAB_145073c49;
  }
  fVar9 = fVar7;
  if (1.0 <= fVar7) {
    fVar9 = 1.0;
  }
LAB_145073c49:
  fVar9 = fVar11 * fVar9 + 1.0;
  fVar7 = (float)(((uint)fVar9 & 0x7fffff) + 0x3f800000);
  fVar8 = fVar7 + 1.0;
  *param_4 = ((((fVar7 * fVar7 * fVar7 - 1.0) * 1.1581186) / (fVar8 * fVar8 * fVar8)) * 20.0 +
             ((float)((uint)fVar9 >> 0x17 & 0xff) - 127.0) * 6.0206003) * fVar11;
  return;
}



// FUNCTION 145073d10 FUN_145073d10 body=106 status=ok
// SIG undefined FUN_145073d10(void)

undefined8 * FUN_145073d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_LAB_149c236a0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = uVar1;
    uVar1 = param_2[3];
    param_1[3] = param_2[2];
    param_1[4] = uVar1;
    uVar1 = param_2[5];
    param_1[5] = param_2[4];
    param_1[6] = uVar1;
  }
  return param_1;
}


