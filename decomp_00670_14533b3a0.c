// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14533b3a0 FUN_14533b3a0 body=261 status=ok
// SIG undefined FUN_14533b3a0(void)

ulonglong FUN_14533b3a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar7 * 2;
  uVar5 = param_3;
  if (param_3 < uVar3) {
    uVar5 = uVar3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x70,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x70);
  uVar3 = uVar5 * 0x70 + 0x70;
  uVar6 = uVar5;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x70;
    uVar6 = uVar5 + 1;
    if (uVar3 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0x70;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      uVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
      uVar6 = uVar6 + ((uVar5 - lVar4 >> 1) + lVar4 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x70);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar3;
}



// FUNCTION 14533b4b0 FUN_14533b4b0 body=2377 status=ok
// SIG undefined FUN_14533b4b0(void)

void FUN_14533b4b0(int *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 local_res10;
  undefined8 local_res18;
  uint local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  int iStack_164;
  undefined8 uStack_160;
  int local_158;
  int iStack_154;
  longlong lStack_150;
  int local_148;
  int iStack_144;
  longlong local_140;
  int local_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int local_118;
  undefined4 uStack_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  ulonglong local_100;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar16 = 0;
  iVar11 = (int)(param_3 >> 0x20);
  iVar18 = (int)param_3;
  if (((longlong)param_3 < 0) || ((iVar11 == 0 && (iVar18 < 0)))) {
    uVar16 = 6;
    param_3 = CONCAT44(-iVar11,-iVar18);
  }
  bVar14 = 0;
  if ((int)param_3 != 0) {
    bVar14 = (byte)(param_3 >> 0x1f) & 1 ^ 1;
  }
  if (bVar14 == 0) {
    uVar16 = uVar16 + 3;
    param_3 = CONCAT44(-(int)param_3,(int)(param_3 >> 0x20));
  }
  iVar1 = *param_1;
  iVar10 = param_1[4];
  iVar6 = (int)(param_3 >> 0x20);
  iVar8 = (int)param_3;
  if (iVar6 < iVar8) {
    if (-1 < (longlong)iVar1 * (longlong)iVar6 - (longlong)iVar8 * (longlong)iVar10) {
      uVar16 = uVar16 + 1;
    }
  }
  else if ((longlong)iVar10 * (longlong)iVar6 - (longlong)iVar8 * (longlong)iVar1 < 0) {
    uVar16 = uVar16 + 2;
  }
  else {
    uVar16 = (uVar16 + 3) % 0xc;
  }
  local_1b0 = 0;
  uVar15 = 0;
  iVar8 = (int)param_2;
  iVar6 = (int)(param_2 >> 0x20);
  if (((longlong)param_2 < 0) || ((uVar2 = param_2, iVar6 == 0 && (iVar8 < 0)))) {
    uVar15 = 6;
    uVar2 = CONCAT44(-iVar6,-iVar8);
    local_1b0 = 6;
  }
  bVar14 = 0;
  if ((int)uVar2 != 0) {
    bVar14 = (byte)(uVar2 >> 0x1f) & 1 ^ 1;
  }
  if (bVar14 == 0) {
    uVar15 = uVar15 + 3;
    uVar2 = CONCAT44(-(int)uVar2,(int)(uVar2 >> 0x20));
    local_1b0 = uVar15;
  }
  iVar13 = (int)(uVar2 >> 0x20);
  iVar7 = (int)uVar2;
  if (iVar7 < iVar13) {
    if ((longlong)iVar7 * (longlong)iVar1 - (longlong)iVar10 * (longlong)iVar13 < 0) {
      local_1b0 = uVar15 + 2;
    }
    else {
      local_1b0 = uVar15 + 1;
    }
  }
  else if (-1 < (longlong)iVar7 * (longlong)iVar10 - (longlong)iVar1 * (longlong)iVar13) {
    local_1b0 = (uVar15 + 0xb) % 0xc;
  }
  local_100 = param_4 >> 0x20;
  iVar1 = (int)param_4;
  iVar10 = (int)(param_4 >> 0x20);
  iVar17 = iVar10 - (iVar11 + iVar10);
  lVar9 = (longlong)iVar18 * (longlong)iVar10 + (longlong)iVar17 * (longlong)iVar1;
  local_140 = -lVar9;
  uVar16 = (uVar16 + 0xb) % 0xc;
  local_148 = iVar17;
  iStack_144 = iVar18;
  FUN_1453373d0(param_1,&local_178,uVar16,param_4);
  FUN_14533c290(iVar17,iVar18,local_178 & 0xffffffff,local_178._4_4_,lVar9,
                -CONCAT44(uStack_16c,uStack_170),&local_1a0);
  lVar12 = (longlong)iVar10;
  iVar13 = iVar1 - (iVar8 + iVar1);
  iVar7 = (iVar6 + iVar10) - (int)local_100;
  lVar9 = (longlong)iVar13 * (longlong)(iVar6 + iVar10) +
          (longlong)iVar7 * (longlong)(iVar8 + iVar1);
  local_90 = -lVar9;
  local_98 = iVar7;
  iStack_94 = iVar13;
  FUN_1453373d0(param_1,&local_e0,local_1b0,param_4);
  FUN_14533c290(iVar7,iVar13,local_e0,uStack_dc,lVar9,-CONCAT44(uStack_d4,uStack_d8),&local_88);
  iStack_154 = iStack_144;
  local_d0 = (longlong)iVar1;
  lStack_c8 = local_d0 >> 0x3f;
  lStack_b8 = lVar12 >> 0x3f;
  local_b0 = 1;
  plVar3 = *(longlong **)*param_5;
  iVar10 = (int)plVar3[1] + 1;
  local_158 = iVar17;
  local_c0 = lVar12;
  lStack_150 = local_140;
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar10) {
    FUN_14533b3a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  lVar9 = plVar3[1];
  *(int *)(plVar3 + 1) = iVar10;
  local_a8 = (undefined4)local_1a0;
  uStack_a4 = local_1a0._4_4_;
  uStack_a0 = (undefined4)uStack_198;
  uStack_9c = uStack_198._4_4_;
  local_168 = (int)local_190;
  iStack_164 = local_190._4_4_;
  uStack_160._0_4_ = (undefined4)uStack_188;
  uStack_160._4_4_ = uStack_188._4_4_;
  plVar3 = (longlong *)((longlong)(int)lVar9 * 0x70 + *plVar3);
  *(uint *)(plVar3 + 0xd) = *(uint *)(plVar3 + 0xd) & 0xfffffffc;
  *plVar3 = local_d0;
  plVar3[1] = lStack_c8;
  plVar3[0xc] = -1;
  plVar3[2] = local_c0;
  plVar3[3] = lStack_b8;
  *(undefined4 *)(plVar3 + 5) = (undefined4)local_1a0;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = local_1a0._4_4_;
  *(undefined4 *)(plVar3 + 6) = (undefined4)uStack_198;
  *(undefined4 *)((longlong)plVar3 + 0x34) = uStack_198._4_4_;
  *(int *)(plVar3 + 7) = (int)local_190;
  *(int *)((longlong)plVar3 + 0x3c) = local_190._4_4_;
  *(undefined4 *)(plVar3 + 8) = (undefined4)uStack_188;
  *(undefined4 *)((longlong)plVar3 + 0x44) = uStack_188._4_4_;
  *(int *)(plVar3 + 10) = local_158;
  *(int *)((longlong)plVar3 + 0x54) = iStack_154;
  plVar3[0xb] = lStack_150;
  plVar3[4] = local_b0;
  plVar3[9] = local_180;
  *(int *)param_5[1] = *(int *)param_5[1] + 1;
  if ((uVar16 == local_1b0) &&
     ((longlong)iVar8 * (longlong)iVar11 - (longlong)iVar6 * (longlong)iVar18 < 0)) {
    plVar3 = *(longlong **)*param_5;
    iVar11 = (int)plVar3[1] + 1;
    if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_14533b3a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    local_e0 = (undefined4)local_178;
    uStack_dc = local_178._4_4_;
    uVar2 = local_180;
  }
  else {
    uVar19 = (undefined4)local_180;
    uVar20 = (undefined4)(local_180 >> 0x20);
    local_178 = local_180;
    puVar5 = param_5;
    local_res18 = param_5;
    local_res10 = param_2;
    do {
      uVar15 = (int)(uVar16 + 1) % 0xc;
      if (uVar16 == (uVar16 / 3) * 3) {
        local_130 = *param_1;
        iStack_12c = param_1[4];
        local_128 = param_1[5];
        local_res18 = (undefined8 *)CONCAT44(iStack_12c,local_130);
        puVar5 = (undefined8 *)CONCAT44(local_128,local_128);
        iStack_124 = local_128;
      }
      else if (uVar16 % 3 == 1) {
        local_138 = param_1[4];
        local_res18 = (undefined8 *)CONCAT44(param_1[5],param_1[5]);
        iStack_134 = *param_1;
        puVar5 = (undefined8 *)CONCAT44(iStack_134,local_138);
      }
      else if (uVar16 % 3 == 2) {
        puVar5 = (undefined8 *)CONCAT44(*param_1,-param_1[4]);
        local_res18 = (undefined8 *)CONCAT44(*param_1,param_1[4]);
      }
      if (2 < (int)(uVar16 + ((int)uVar16 / 6 + ((int)uVar16 >> 0x1f) +
                             (int)(((longlong)(int)uVar16 / 6 + ((longlong)(int)uVar16 >> 0x3f) &
                                   0xffffffffU) >> 0x1f)) * -6)) {
        uStack_11c = SUB84(local_res18,0);
        local_120 = -(int)((ulonglong)local_res18 >> 0x20);
        uStack_114 = SUB84(puVar5,0);
        local_res18 = (undefined8 *)CONCAT44(uStack_11c,local_120);
        local_118 = -(int)((ulonglong)puVar5 >> 0x20);
        puVar5 = (undefined8 *)CONCAT44(uStack_114,local_118);
      }
      if (5 < (int)uVar16) {
        local_110 = -(int)local_res18;
        iStack_10c = -(int)((ulonglong)local_res18 >> 0x20);
        local_108 = -(int)puVar5;
        iStack_104 = -(int)((ulonglong)puVar5 >> 0x20);
        local_res18 = (undefined8 *)CONCAT44(iStack_10c,local_110);
        puVar5 = (undefined8 *)CONCAT44(iStack_104,local_108);
      }
      local_f8 = (int)local_res18 + iVar1;
      iVar11 = (int)local_100;
      iStack_f4 = (int)((ulonglong)local_res18 >> 0x20) + iVar11;
      iStack_ec = (int)((ulonglong)puVar5 >> 0x20) + iVar11;
      local_f0 = (int)puVar5 + iVar1;
      iStack_e4 = local_f0 - local_f8;
      local_e8 = iStack_f4 - iStack_ec;
      local_60 = CONCAT44(iStack_e4,local_e8);
      uStack_58 = -((longlong)iStack_e4 * (longlong)iStack_f4 +
                   (longlong)local_e8 * (longlong)local_f8);
      if (uVar15 == (uVar15 / 3) * 3) {
        iVar8 = *param_1;
        local_res10._4_4_ = param_1[4];
LAB_14533bb1e:
        local_res10 = CONCAT44(local_res10._4_4_,iVar8);
      }
      else {
        if (uVar15 % 3 == 1) {
          iVar8 = param_1[5];
          local_res10._4_4_ = iVar8;
          goto LAB_14533bb1e;
        }
        if (uVar15 % 3 == 2) {
          iVar8 = param_1[4];
          local_res10._4_4_ = *param_1;
          goto LAB_14533bb1e;
        }
      }
      iVar18 = iVar8;
      if (2 < (int)(uVar15 + ((int)uVar15 / 6 + ((int)uVar15 >> 0x1f) +
                             (int)(((longlong)(int)uVar15 / 6 + ((longlong)(int)uVar15 >> 0x3f) &
                                   0xffffffffU) >> 0x1f)) * -6)) {
        local_158 = -local_res10._4_4_;
        local_res10 = CONCAT44(iVar8,local_158);
        iVar18 = local_158;
        iStack_154 = iVar8;
      }
      iVar8 = iVar18;
      if (5 < (int)uVar15) {
        iVar8 = -iVar8;
        iStack_144 = -(int)(local_res10 >> 0x20);
        local_res10 = CONCAT44(iStack_144,iVar8);
        local_148 = iVar8;
      }
      local_180 = 1;
      lVar9 = (longlong)(iVar8 + iVar1);
      lVar12 = (longlong)((int)(local_res10 >> 0x20) + iVar11);
      plVar3 = *(longlong **)*param_5;
      iVar11 = (int)plVar3[1] + 1;
      local_a8 = (undefined4)local_1a0;
      uStack_a4 = local_1a0._4_4_;
      uStack_a0 = (undefined4)uStack_198;
      uStack_9c = uStack_198._4_4_;
      local_168 = (int)local_190;
      iStack_164 = local_190._4_4_;
      uStack_160._0_4_ = (undefined4)uStack_188;
      uStack_160._4_4_ = uStack_188._4_4_;
      uStack_198 = lVar9 >> 0x3f;
      uStack_188 = lVar12 >> 0x3f;
      if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar11) {
        local_1a0 = lVar9;
        local_190 = lVar12;
        FUN_14533b3a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        uVar19 = (undefined4)local_178;
        uVar20 = (undefined4)(local_178 >> 0x20);
        lVar9 = local_1a0;
        lVar12 = local_190;
      }
      local_190 = lVar12;
      local_1a0 = lVar9;
      lVar9 = plVar3[1];
      local_178 = local_180;
      *(int *)(plVar3 + 1) = iVar11;
      puVar4 = (undefined4 *)((longlong)(int)lVar9 * 0x70 + *plVar3);
      puVar4[0x1a] = puVar4[0x1a] & 0xfffffffc;
      *puVar4 = local_a8;
      puVar4[1] = uStack_a4;
      puVar4[2] = uStack_a0;
      puVar4[3] = uStack_9c;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      puVar4[4] = local_168;
      puVar4[5] = iStack_164;
      puVar4[6] = (undefined4)uStack_160;
      puVar4[7] = uStack_160._4_4_;
      puVar4[10] = (undefined4)local_1a0;
      puVar4[0xb] = local_1a0._4_4_;
      puVar4[0xc] = (undefined4)uStack_198;
      puVar4[0xd] = uStack_198._4_4_;
      puVar4[0xe] = (int)local_190;
      puVar4[0xf] = local_190._4_4_;
      puVar4[0x10] = (undefined4)uStack_188;
      puVar4[0x11] = uStack_188._4_4_;
      *(ulonglong *)(puVar4 + 8) = CONCAT44(uVar20,uVar19);
      uVar19 = (undefined4)local_180;
      uVar20 = (undefined4)(local_180 >> 0x20);
      *(ulonglong *)(puVar4 + 0x12) = local_180;
      puVar4[0x14] = (undefined4)local_60;
      puVar4[0x15] = local_60._4_4_;
      puVar4[0x16] = (undefined4)uStack_58;
      puVar4[0x17] = uStack_58._4_4_;
      local_a8 = (undefined4)local_1a0;
      uStack_a4 = local_1a0._4_4_;
      uStack_a0 = (undefined4)uStack_198;
      uStack_9c = uStack_198._4_4_;
      local_168 = (int)local_190;
      iStack_164 = local_190._4_4_;
      uStack_160._0_4_ = (undefined4)uStack_188;
      uStack_160._4_4_ = uStack_188._4_4_;
      *(int *)param_5[1] = *(int *)param_5[1] + 1;
      uVar16 = uVar15;
    } while (uVar15 != local_1b0);
    plVar3 = *(longlong **)*param_5;
    iVar11 = (int)plVar3[1] + 1;
    uStack_170 = uStack_d8;
    uStack_16c = uStack_d4;
    uVar2 = local_180;
    if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_14533b3a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      uStack_170 = uStack_d8;
      uStack_16c = uStack_d4;
      uVar2 = local_180;
      local_1a0._0_4_ = local_a8;
      local_1a0._4_4_ = uStack_a4;
      uStack_198._0_4_ = uStack_a0;
      uStack_198._4_4_ = uStack_9c;
      local_190._0_4_ = local_168;
      local_190._4_4_ = iStack_164;
      uStack_188._0_4_ = (undefined4)uStack_160;
      uStack_188._4_4_ = uStack_160._4_4_;
    }
  }
  lVar9 = plVar3[1];
  *(int *)(plVar3 + 1) = iVar11;
  local_180 = 1;
  puVar4 = (undefined4 *)((longlong)(int)lVar9 * 0x70 + *plVar3);
  *(undefined8 *)(puVar4 + 10) = local_88;
  *(undefined8 *)(puVar4 + 0xc) = uStack_80;
  *puVar4 = (undefined4)local_1a0;
  puVar4[1] = local_1a0._4_4_;
  puVar4[2] = (undefined4)uStack_198;
  puVar4[3] = uStack_198._4_4_;
  *(undefined8 *)(puVar4 + 0xe) = local_78;
  *(undefined8 *)(puVar4 + 0x10) = uStack_70;
  puVar4[4] = (int)local_190;
  puVar4[5] = local_190._4_4_;
  puVar4[6] = (undefined4)uStack_188;
  puVar4[7] = uStack_188._4_4_;
  *(ulonglong *)(puVar4 + 8) = uVar2;
  *(undefined8 *)(puVar4 + 0x12) = local_68;
  puVar4[0x14] = local_e0;
  puVar4[0x15] = uStack_dc;
  puVar4[0x16] = uStack_170;
  puVar4[0x17] = uStack_16c;
  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
  puVar4[0x1a] = puVar4[0x1a] & 0xfffffffc;
  *(int *)param_5[1] = *(int *)param_5[1] + 1;
  iStack_164 = iStack_94;
  local_1a0 = local_d0;
  uStack_198 = lStack_c8;
  local_190 = local_c0;
  uStack_188 = lStack_b8;
  plVar3 = *(longlong **)*param_5;
  iVar11 = (int)plVar3[1] + 1;
  local_168 = iVar7;
  if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar11) {
    uStack_160 = local_90;
    FUN_14533b3a0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    local_90 = uStack_160;
  }
  lVar9 = plVar3[1];
  *(int *)(plVar3 + 1) = iVar11;
  puVar5 = (undefined8 *)((longlong)(int)lVar9 * 0x70 + *plVar3);
  *(uint *)(puVar5 + 0xd) = *(uint *)(puVar5 + 0xd) & 0xfffffffc;
  *puVar5 = local_88;
  puVar5[1] = uStack_80;
  puVar5[0xc] = 0xffffffffffffffff;
  puVar5[5] = local_1a0;
  puVar5[6] = uStack_198;
  puVar5[2] = local_78;
  puVar5[3] = uStack_70;
  puVar5[4] = local_68;
  puVar5[7] = local_190;
  puVar5[8] = uStack_188;
  puVar5[10] = CONCAT44(iStack_164,local_168);
  puVar5[0xb] = local_90;
  puVar5[9] = local_180;
  *(int *)param_5[1] = *(int *)param_5[1] + 1;
  return;
}



// FUNCTION 14533be00 FUN_14533be00 body=435 status=ok
// SIG undefined FUN_14533be00(void)

void FUN_14533be00(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  uint local_res10;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = *param_4;
  uVar5 = (ulonglong)(int)param_2;
  uVar9 = uVar5;
  local_res10 = param_2;
  do {
    uVar12 = (ulonglong)param_3;
    uVar11 = uVar5 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar5 + param_3) >> 1) * 4);
    piVar6 = (int *)(lVar4 + 0x50 + (longlong)(int)uVar1 * 0x70);
    iVar13 = param_3;
    do {
      iVar2 = piVar6[1];
      lVar14 = (longlong)*piVar6;
      while( true ) {
        uVar10 = (uint)uVar11;
        uVar3 = *(uint *)(param_1 + uVar9 * 4);
        lVar8 = (longlong)(int)uVar3 * 0x70;
        lVar8 = (longlong)*(int *)(lVar8 + 0x50 + lVar4) * (longlong)iVar2 -
                *(int *)(lVar8 + 0x54 + lVar4) * lVar14;
        uVar7 = (uint)(lVar8 >> 0x3f) | (uint)(lVar8 != 0);
        if (uVar7 == 0) {
          bVar15 = uVar3 < uVar1;
        }
        else {
          bVar15 = 0 < (int)uVar7;
        }
        if (!bVar15) break;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar9 = uVar9 + 1;
      }
      while( true ) {
        uVar3 = *(uint *)(param_1 + uVar12 * 4);
        lVar8 = *(int *)((longlong)(int)uVar3 * 0x70 + 0x54 + lVar4) * lVar14 -
                (longlong)*(int *)((longlong)(int)uVar3 * 0x70 + 0x50 + lVar4) * (longlong)iVar2;
        uVar7 = (uint)(lVar8 >> 0x3f) | (uint)(lVar8 != 0);
        if (uVar7 == 0) {
          bVar15 = uVar1 < uVar3;
        }
        else {
          bVar15 = 0 < (int)uVar7;
        }
        if (!bVar15) break;
        iVar13 = iVar13 + -1;
        uVar12 = uVar12 - 1;
      }
      if ((longlong)uVar12 < (longlong)uVar9) break;
      if (uVar12 != uVar9) {
        *(undefined4 *)(param_1 + uVar12 * 4) = *(undefined4 *)(param_1 + uVar9 * 4);
        *(uint *)(param_1 + uVar9 * 4) = uVar3;
      }
      iVar13 = iVar13 + -1;
      uVar12 = uVar12 - 1;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 <= (longlong)uVar12);
    if ((int)local_res10 < iVar13) {
      local_48 = *param_4;
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_14533be00(param_1,local_res10,iVar13,&local_48);
    }
    if (param_3 <= (int)uVar10) {
      return;
    }
    uVar5 = (ulonglong)uVar10;
    local_res10 = uVar10;
  } while( true );
}



// FUNCTION 14533bfc0 FUN_14533bfc0 body=426 status=ok
// SIG undefined FUN_14533bfc0(void)

int FUN_14533bfc0(int param_1,undefined8 *param_2,longlong param_3,char *param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  
  lVar7 = *(longlong *)(param_3 + 0x1d0);
  lVar1 = param_3 + 0x198;
  if (param_1 == -1) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(lVar7 + 8 + (longlong)param_1 * 0x10);
  }
  piVar11 = (int *)*param_2;
  piVar2 = piVar11 + *(int *)(param_2 + 1);
  for (; piVar11 != piVar2; piVar11 = piVar11 + 1) {
    iVar5 = *piVar11;
    if (param_1 == -1) {
      FUN_144cafc10(lVar1,iVar5,param_3,iVar5);
    }
    else {
      FUN_144cafc60(lVar1,iVar5,lVar1,param_1,param_3,iVar5);
    }
    cVar8 = FUN_144caf520(lVar1,iVar5,0);
    if (cVar8 == '\0') {
      iVar10 = -1;
    }
    else {
      cVar8 = FUN_144caf520(lVar1,iVar5,1);
      if (cVar8 == '\0') {
        cVar8 = FUN_144caf520(lVar1,iVar5,3);
        if (cVar8 == '\0') {
          if ((*param_4 == '\0') && (cVar8 = FUN_144caf520(lVar1,iVar5,2), cVar8 == '\0')) {
            iVar10 = -1;
          }
          else {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = -1;
        }
      }
      else {
        iVar10 = -1;
      }
    }
    lVar12 = lVar7 + (longlong)iVar5 * 0x10;
    *(int *)(lVar12 + 8) = iVar10;
    if ((iVar4 == -1) && (iVar10 == -1)) {
      uVar9 = 0xffffffff;
    }
    else {
      lVar3 = (longlong)iVar5 * 4;
      uVar9 = *(uint *)(lVar3 + *(longlong *)(param_3 + 0x88));
      if ((~(byte)(uVar9 >> 0x1f) & 1) == 0) {
        cVar8 = FUN_144cafbe0(param_3,iVar5,1);
        uVar9 = 0xffffffff;
        if (cVar8 == '\0') {
          uVar6 = *(uint *)(lVar3 + *(longlong *)(param_3 + 0x88));
          uVar9 = 0xffffffff;
          if ((int)(uVar6 + 1) < 0) {
            uVar9 = uVar6 | 0x80000000;
          }
        }
      }
    }
    *(uint *)(lVar12 + 0xc) = uVar9;
    param_1 = iVar5;
    iVar4 = iVar10;
  }
  return param_1;
}



// FUNCTION 14533c170 FUN_14533c170 body=282 status=ok
// SIG undefined FUN_14533c170(void)

void FUN_14533c170(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x40;
  puVar5 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
        *(undefined4 *)(puVar6 + 5) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x40 + 0x40;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 14533c290 FUN_14533c290 body=286 status=ok
// SIG undefined FUN_14533c290(void)

ulonglong FUN_14533c290(int param_1,int param_2,int param_3,int param_4,longlong param_5,
                       longlong param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = (longlong)param_4;
  lVar3 = (longlong)param_3;
  lVar6 = (longlong)param_2;
  lVar4 = (longlong)param_1;
  lVar5 = lVar1 * lVar4 - lVar3 * lVar6;
  if (lVar5 == 0) {
    return lVar3 * lVar6 & 0xffffffffffffff00;
  }
  lVar2 = lVar1 * param_5 - lVar6 * param_6;
  lVar1 = (SUB168(SEXT816(param_5) * SEXT816(lVar1),8) - SUB168(SEXT816(param_6) * SEXT816(lVar6),8)
          ) - (ulonglong)((ulonglong)(lVar1 * param_5) < (ulonglong)(lVar6 * param_6));
  lVar6 = lVar4 * param_6 - lVar3 * param_5;
  lVar3 = (SUB168(SEXT816(param_6) * SEXT816(lVar4),8) - SUB168(SEXT816(param_5) * SEXT816(lVar3),8)
          ) - (ulonglong)((ulonglong)(lVar4 * param_6) < (ulonglong)(lVar3 * param_5));
  if (lVar5 < 0) {
    *param_7 = -lVar2;
    param_7[1] = -(ulonglong)(lVar2 != 0) - lVar1;
    param_7[2] = -lVar6;
    param_7[3] = -(ulonglong)(lVar6 != 0) - lVar3;
  }
  else {
    *param_7 = lVar2;
    param_7[1] = lVar1;
    param_7[2] = lVar6;
    param_7[3] = lVar3;
  }
  lVar1 = -lVar5;
  if (-lVar5 < 0) {
    lVar1 = lVar5;
  }
  param_7[4] = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 14533c3b0 FUN_14533c3b0 body=290 status=ok
// SIG undefined FUN_14533c3b0(void)

void FUN_14533c3b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x40,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
        *(undefined4 *)(puVar6 + 5) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x40 + 0x40;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 6);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 14533c4e0 FUN_14533c4e0 body=622 status=ok
// SIG undefined FUN_14533c4e0(void)

ulonglong FUN_14533c4e0(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uStack_34;
  
  plVar6 = *(longlong **)(param_3 + 0x18);
  *(int *)(param_3 + 0x28) = (int)plVar6[1];
  iVar17 = (int)plVar6[1] + 1;
  if ((int)(*(uint *)((longlong)plVar6 + 0xc) & 0x7fffffff) < iVar17) {
    FUN_14533d180(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar17);
  }
  puVar1 = (undefined8 *)(*plVar6 + (longlong)(int)plVar6[1] * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_1[1];
    uVar10 = param_1[2];
    uVar11 = param_1[3];
    *puVar1 = *param_1;
    puVar1[1] = uVar2;
    uVar2 = param_1[4];
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar1[4] = uVar2;
  }
  *(int *)(plVar6 + 1) = iVar17;
  uVar18 = 0xffffffff;
  lVar7 = *(longlong *)(param_3 + 0x18);
  *(undefined1 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0xffffffffffffffff;
  param_2 = (longlong *)*param_2;
  lVar8 = *(longlong *)(param_3 + 8);
  uStack_34 = *(uint *)((longlong)param_2 + 0x14);
  uVar3 = *(uint *)(param_2 + 3);
  iVar17 = (int)param_2[2];
  lVar12 = *param_2;
  if (uStack_34 != uVar3) {
    while( true ) {
      lVar14 = (longlong)(int)uStack_34;
      iVar4 = *(int *)(lVar12 + 8 + lVar14 * 0x10);
      if (iVar17 != iVar4) break;
      if (((iVar17 != -1) && (*(int *)(lVar12 + 0xc + lVar14 * 0x10) != -1)) ||
         (uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10), iVar17 = iVar4, uStack_34 == uVar3))
      break;
    }
  }
  uVar15 = (ulonglong)uStack_34;
  while (uStack_34 != uVar3) {
    lVar14 = (longlong)(int)uStack_34;
    iVar17 = *(int *)(lVar8 + lVar14 * 8);
    if (iVar17 != -1) {
      if (uVar18 == 0xffffffff) {
        *(int *)(param_3 + 0x20) = iVar17;
      }
      else {
        lVar9 = *(longlong *)(lVar7 + 0x10);
        lVar16 = (longlong)iVar17 * 0x20;
        *(int *)((longlong)(int)uVar18 * 0x20 + 8 + lVar9) = iVar17;
        *(uint *)(lVar9 + 4 + lVar16) = uVar18;
        *(undefined4 *)(lVar9 + lVar16) = *(undefined4 *)(param_3 + 0x28);
        *(undefined1 *)(param_3 + 0x2c) = 1;
        puVar1 = (undefined8 *)param_4[1];
        lVar9 = *(longlong *)(*param_4 + 0x10);
        lVar16 = (longlong)*(int *)((longlong)*(int *)(lVar9 + 4 + lVar16) * 0x20 + 0x10 + lVar9);
        if ((*(byte *)(lVar16 * 0x20 + 0x1c + lVar9) & 2) != 0) {
          uVar13 = FUN_14533d0a0(lVar16,iVar17);
          FUN_14533ccf0(uVar13,*puVar1);
        }
        uVar15 = FUN_14533ccf0(iVar17,*puVar1);
        if ((char)uVar15 == '\0') {
          return uVar15 & 0xffffffffffffff00;
        }
        uVar18 = 0xffffffff;
      }
      *(undefined4 *)(lVar8 + lVar14 * 8) = 0xffffffff;
    }
    uVar5 = *(uint *)(lVar8 + 4 + lVar14 * 8);
    uVar15 = (ulonglong)uVar5;
    if (uVar5 != 0xffffffff) {
      *(undefined4 *)(lVar8 + 4 + lVar14 * 8) = 0xffffffff;
      uVar18 = uVar5;
    }
    uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10);
    iVar17 = *(int *)(lVar12 + 8 + lVar14 * 0x10);
    while( true ) {
      if (uStack_34 == uVar3) goto LAB_14533c711;
      lVar14 = (longlong)(int)uStack_34;
      uVar15 = lVar14 * 2;
      if ((iVar17 != *(int *)(lVar12 + 8 + lVar14 * 0x10)) ||
         ((iVar17 != -1 && (*(int *)(lVar12 + 0xc + lVar14 * 0x10) != -1)))) break;
      uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10);
    }
  }
LAB_14533c711:
  *(uint *)(param_3 + 0x24) = uVar18;
  return CONCAT71((int7)(uVar15 >> 8),1);
}



// FUNCTION 14533c750 FUN_14533c750 body=262 status=ok
// SIG undefined FUN_14533c750(void)

longlong * FUN_14533c750(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 14533c860 FUN_14533c860 body=1166 status=ok
// SIG undefined FUN_14533c860(void)

ulonglong FUN_14533c860(undefined8 param_1,int param_2,int param_3,longlong *param_4,
                       longlong param_5,longlong *param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  int local_res18 [2];
  longlong *local_res20;
  
  lVar8 = param_5;
  uVar18 = 0xffffffff;
  lVar19 = *param_4;
  lVar16 = *param_4;
  uVar2 = *(uint *)((longlong)param_4 + 0x14);
  uVar3 = *(uint *)(param_4 + 3);
  lVar4 = *(longlong *)(param_5 + 8);
  plVar20 = (longlong *)(*(longlong *)(param_5 + 0x18) + 0x10);
  param_5._0_4_ = -1;
  iVar17 = (int)param_4[2];
  while (uVar12 = (ulonglong)uVar2, local_res20 = plVar20, uVar2 != uVar3) {
    lVar14 = (longlong)(int)uVar2;
    iVar9 = *(int *)(lVar16 + 8 + lVar14 * 0x10);
    local_res18[0] = param_3;
    if (iVar17 != iVar9) goto LAB_14533c920;
    if ((iVar17 != -1) && (*(int *)(lVar16 + 0xc + lVar14 * 0x10) != -1)) {
      if (uVar2 != uVar3) goto LAB_14533c920;
      break;
    }
    iVar17 = iVar9;
    uVar2 = *(uint *)(lVar16 + 4 + lVar14 * 0x10);
  }
  goto LAB_14533cbfa;
LAB_14533c920:
  do {
    lVar16 = (longlong)(int)uVar12 * 0x10 + lVar19;
    piVar1 = (int *)(lVar4 + (longlong)(int)uVar12 * 8);
    uVar10 = *(undefined4 *)(lVar16 + 0xc);
    iVar17 = *(int *)(lVar16 + 8);
    iVar9 = (int)param_5;
    if (local_res18[0] != -1) {
      iVar9 = FUN_1453381a0(*(undefined8 *)(lVar8 + 0x18),1);
      lVar14 = (longlong)iVar9 * 0x20 + *local_res20;
      *piVar1 = iVar9;
      *(undefined4 *)(lVar14 + 0x14) = uVar10;
      *(int *)(lVar14 + 0x18) = local_res18[0];
      iVar13 = (int)uVar18;
      plVar20 = local_res20;
      if (iVar13 == -1) {
        iVar13 = *(int *)(lVar8 + 0x20);
        if (iVar13 == -1) goto LAB_14533ca32;
        bVar7 = false;
        *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
      }
      else {
        bVar7 = true;
        uVar18 = 0xffffffff;
      }
      lVar5 = *local_res20;
      *(int *)(lVar14 + 8) = iVar13;
      lVar14 = (longlong)iVar13 * 0x20;
      *(int *)(lVar5 + 4 + lVar14) = iVar9;
      *(undefined4 *)(lVar5 + lVar14) = *(undefined4 *)(lVar8 + 0x28);
      *(undefined1 *)(lVar8 + 0x2c) = 1;
      if (bVar7) {
        *(int *)(*(longlong *)(*param_6 + 0x10) + 0x10 + lVar14) = iVar13;
        iVar9 = (int)param_5;
      }
      else {
        local_res18[0] = iVar13;
        uVar12 = FUN_14533d280(local_res18,*(undefined4 *)(lVar4 + 4 + (longlong)param_2 * 8),
                               *param_6);
        plVar20 = local_res20;
        iVar9 = (int)param_5;
        if ((char)uVar12 == '\0') goto LAB_14533cca6;
      }
    }
LAB_14533ca32:
    param_5._0_4_ = iVar9;
    if (iVar17 != -1) {
      iVar9 = FUN_1453381a0(*(undefined8 *)(lVar8 + 0x18),1);
      uVar18 = (ulonglong)iVar9;
      puVar15 = (undefined4 *)(uVar18 * 0x20 + *local_res20);
      piVar1[1] = iVar9;
      *puVar15 = *(undefined4 *)(lVar8 + 0x28);
      puVar15[5] = uVar10;
      puVar15[6] = iVar17;
      *(undefined1 *)(lVar8 + 0x2c) = 1;
      plVar20 = local_res20;
      if (*piVar1 != -1) {
        *(int *)((longlong)*piVar1 * 0x20 + 0xc + *local_res20) = iVar9;
        puVar15[3] = *piVar1;
      }
    }
    uVar2 = *(uint *)(lVar16 + 4);
    while( true ) {
      uVar12 = (ulonglong)uVar2;
      local_res18[0] = iVar17;
      if (uVar2 == uVar3) goto LAB_14533cad1;
      lVar14 = (longlong)(int)uVar2;
      if (*(int *)(lVar16 + 8) != *(int *)(lVar19 + 8 + lVar14 * 0x10)) goto LAB_14533c920;
      if ((*(int *)(lVar16 + 8) != -1) && (*(int *)(lVar19 + 0xc + lVar14 * 0x10) != -1)) break;
      uVar2 = *(uint *)(lVar19 + 4 + lVar14 * 0x10);
    }
  } while (uVar2 != uVar3);
LAB_14533cad1:
  iVar17 = (int)uVar18;
  if ((int)param_5 != -1) {
    lVar16 = *plVar20;
    lVar19 = (longlong)iVar17 * 0x20;
    *(int *)((longlong)(int)param_5 * 0x20 + 8 + lVar16) = iVar17;
    *(int *)(lVar16 + 4 + lVar19) = (int)param_5;
    *(undefined4 *)(lVar16 + lVar19) = *(undefined4 *)(lVar8 + 0x28);
    *(undefined1 *)(lVar8 + 0x2c) = 1;
    iVar9 = *(int *)(lVar4 + 4 + (longlong)param_2 * 8);
    lVar4 = *param_6;
    iVar13 = *(int *)(lVar4 + 0x18) + 2;
    if ((int)(*(uint *)(lVar4 + 0x1c) & 0x7fffffff) < iVar13) {
      FUN_144cc8530(lVar4 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    lVar16 = (longlong)iVar9 * 0x20 + *(longlong *)(lVar4 + 0x10);
    iVar9 = FUN_14533d0a0(uVar18 & 0xffffffff,*(undefined4 *)(lVar16 + 0x10),lVar4);
    *(int *)(lVar16 + 0x10) = iVar9 + 1;
    uVar12 = *(ulonglong *)(lVar4 + 0x10);
    *(int *)(uVar12 + 0x10 + lVar19) = iVar17;
    goto LAB_14533ccbe;
  }
  if (iVar17 != -1) {
    iVar9 = *(int *)(lVar8 + 0x24);
    lVar4 = *plVar20;
    lVar14 = (longlong)iVar17 * 0x20;
    *(int *)((longlong)iVar9 * 0x20 + 8 + lVar4) = iVar17;
    *(int *)(lVar4 + 4 + lVar14) = iVar9;
    lVar4 = *param_6;
    puVar6 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar4 + 0x10);
    lVar19 = (longlong)*(int *)((longlong)*(int *)(lVar14 + 4 + lVar16) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar19 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar10 = FUN_14533d0a0(lVar19,uVar18 & 0xffffffff,lVar4);
      uVar12 = FUN_14533ccf0(uVar10,*puVar6);
      if ((char)uVar12 == '\0') goto LAB_14533cca6;
    }
    uVar12 = *(ulonglong *)(lVar4 + 0x10);
    *(int *)(uVar12 + 0x10 + lVar14) = iVar17;
    goto LAB_14533ccbe;
  }
LAB_14533cbfa:
  local_res18[0] = *(int *)(lVar8 + 0x20);
  if (local_res18[0] != -1) {
    lVar16 = *plVar20;
    iVar17 = *(int *)(lVar8 + 0x24);
    lVar19 = (longlong)local_res18[0] * 0x20;
    *(int *)((longlong)iVar17 * 0x20 + 8 + lVar16) = local_res18[0];
    *(int *)(lVar16 + 4 + lVar19) = iVar17;
    *(undefined4 *)(lVar16 + lVar19) = *(undefined4 *)(lVar8 + 0x28);
    *(undefined1 *)(lVar8 + 0x2c) = 1;
    uVar10 = *(undefined4 *)(lVar4 + 4 + (longlong)param_2 * 8);
    lVar4 = *param_6;
    puVar6 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar4 + 0x10);
    lVar19 = (longlong)*(int *)((longlong)*(int *)(lVar16 + 4 + lVar19) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar19 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar11 = FUN_14533d0a0(lVar19,local_res18[0],lVar4);
      uVar12 = FUN_14533ccf0(uVar11,*puVar6);
      if ((char)uVar12 == '\0') goto LAB_14533cca6;
    }
    uVar12 = FUN_14533d280(local_res18,uVar10,lVar4,puVar6);
    if ((char)uVar12 == '\0') {
LAB_14533cca6:
      return uVar12 & 0xffffffffffffff00;
    }
    uVar12 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar4 + 0x10);
    *(uint *)(uVar12 + 0x1c) = *(uint *)(uVar12 + 0x1c) | 2;
  }
LAB_14533ccbe:
  if (*(char *)(lVar8 + 0x2c) == '\0') {
    uVar12 = *(ulonglong *)(lVar8 + 0x18);
    *(int *)(uVar12 + 8) = *(int *)(uVar12 + 8) + -1;
  }
  *(undefined4 *)(lVar8 + 0x28) = 0xffffffff;
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 14533ccf0 FUN_14533ccf0 body=938 status=ok
// SIG undefined FUN_14533ccf0(void)

undefined8 FUN_14533ccf0(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  bool local_res8;
  uint local_res18;
  uint local_res20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar20 = (ulonglong)param_1;
  lVar13 = param_2[2];
  uVar9 = *(uint *)(uVar20 * 0x20 + 4 + lVar13);
  uVar15 = *(uint *)(uVar20 * 0x20 + 8 + lVar13);
  puVar16 = (uint *)((longlong)(int)uVar9 * 0x20 + lVar13);
  puVar11 = (uint *)((longlong)(int)uVar15 * 0x20 + lVar13);
  uVar3 = *puVar11;
  uVar2 = *puVar16;
  if (uVar2 < uVar3) {
    local_res18 = puVar11[2];
    local_res20 = uVar9;
  }
  else {
    local_res20 = puVar16[1];
    local_res18 = uVar15;
  }
  local_res8 = uVar2 < uVar3;
  uVar7 = uVar15;
  if (uVar3 <= uVar2) {
    uVar7 = uVar9;
  }
  if (uVar9 != uVar15) {
LAB_14533cd90:
    uVar3 = local_res20;
    uVar15 = local_res18;
    lVar13 = param_2[2];
    uVar2 = *(uint *)((longlong)(int)local_res18 * 0x20 + lVar13);
    uVar9 = *(uint *)((longlong)(int)local_res20 * 0x20 + lVar13);
    if (uVar9 < uVar2) {
      local_res18 = *(uint *)((longlong)(int)local_res18 * 0x20 + 8 + lVar13);
    }
    else {
      local_res20 = *(uint *)((longlong)(int)local_res20 * 0x20 + 4 + lVar13);
    }
    bVar4 = uVar9 < uVar2;
    uVar10 = uVar15;
    if (uVar2 <= uVar9) {
      uVar10 = uVar3;
    }
    if (uVar3 != uVar15) {
      if (bVar4 == local_res8) {
        lVar14 = *param_2;
        piVar19 = (int *)((longlong)(int)uVar10 * 0x20 + lVar13);
        lVar12 = (longlong)*piVar19;
        puVar1 = (undefined8 *)(lVar14 + lVar12 * 0x28);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar12 * 0x28);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        local_58 = *(undefined8 *)(lVar14 + 0x20 + lVar12 * 0x28);
        if (uVar9 < uVar2) {
          lVar12 = (longlong)*(int *)((longlong)piVar19[1] * 0x20 + lVar13);
          uVar18 = (ulonglong)*(int *)((longlong)piVar19[1] * 0x20 + 4 + lVar13);
          piVar19 = (int *)(uVar18 * 0x20 + lVar13);
          puVar1 = (undefined8 *)(lVar14 + lVar12 * 0x28);
          local_a0 = *puVar1;
          uStack_98 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar12 * 0x28);
          local_90 = *puVar1;
          uStack_88 = puVar1[1];
          lVar13 = (longlong)*piVar19;
          local_80 = *(undefined8 *)(lVar14 + 0x20 + lVar12 * 0x28);
          puVar1 = (undefined8 *)(lVar14 + lVar13 * 0x28);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13 * 0x28);
          local_b8 = *puVar1;
          uStack_b0 = puVar1[1];
          local_a8 = *(undefined8 *)(lVar14 + 0x20 + lVar13 * 0x28);
          iVar8 = FUN_14533b010(&local_78,&local_a0,&local_c8);
          while (uVar7 = uVar10, iVar8 < 0) {
            uVar2 = piVar19[1];
            uVar9 = FUN_14533d0a0(uVar10,uVar18 & 0xffffffff,param_2);
            if ((int)uVar18 == (int)uVar20) {
              uVar20 = (ulonglong)uVar9;
              break;
            }
            uVar18 = (ulonglong)uVar2;
            piVar19 = (int *)((longlong)(int)uVar2 * 0x20 + param_2[2]);
            local_a0 = local_c8;
            uStack_98 = uStack_c0;
            lVar14 = (longlong)*piVar19;
            local_80 = local_a8;
            local_90 = local_b8;
            uStack_88 = uStack_b0;
            lVar13 = *param_2;
            puVar1 = (undefined8 *)(lVar13 + lVar14 * 0x28);
            local_c8 = *puVar1;
            uStack_c0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar14 * 0x28);
            local_b8 = *puVar1;
            uStack_b0 = puVar1[1];
            local_a8 = *(undefined8 *)(lVar13 + 0x20 + lVar14 * 0x28);
            iVar8 = FUN_14533b010(&local_78,&local_a0,&local_c8);
          }
        }
        else {
          lVar17 = (longlong)piVar19[2] * 0x20;
          lVar12 = (longlong)*(int *)(lVar17 + lVar13);
          puVar1 = (undefined8 *)(lVar14 + lVar12 * 0x28);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar12 * 0x28);
          local_b8 = *puVar1;
          uStack_b0 = puVar1[1];
          local_a8 = *(undefined8 *)(lVar14 + 0x20 + lVar12 * 0x28);
          iVar8 = *(int *)(lVar17 + 8 + lVar13);
          iVar6 = piVar19[2];
          while (iVar5 = iVar8, uVar7 = uVar10, iVar6 != (int)uVar20) {
            piVar19 = (int *)((longlong)iVar5 * 0x20 + param_2[2]);
            lVar14 = (longlong)*piVar19;
            lVar13 = *param_2;
            puVar1 = (undefined8 *)(lVar13 + lVar14 * 0x28);
            local_a0 = *puVar1;
            uStack_98 = puVar1[1];
            puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar14 * 0x28);
            local_90 = *puVar1;
            uStack_88 = puVar1[1];
            local_80 = *(undefined8 *)(lVar13 + 0x20 + lVar14 * 0x28);
            iVar8 = FUN_14533b010(&local_78,&local_c8,&local_a0);
            if (iVar8 < 1) break;
            iVar8 = piVar19[2];
            uVar10 = FUN_14533d0a0(iVar5,uVar10,param_2);
            local_a8 = local_80;
            local_c8 = local_a0;
            uStack_c0 = uStack_98;
            local_b8 = local_90;
            uStack_b0 = uStack_88;
            iVar6 = iVar5;
          }
        }
      }
      else {
        uVar7 = FUN_14533d0a0(uVar7,uVar10,param_2);
        uVar15 = uVar10;
        if (uVar9 < uVar2) {
          uVar15 = uVar7;
        }
        FUN_14533d310(uVar15,param_2);
        local_res8 = bVar4;
        if (uVar9 < uVar2) {
          uVar20 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar10;
        }
        else {
          uVar20 = (ulonglong)*(uint *)((longlong)(int)uVar7 * 0x20 + 8 + param_2[2]);
        }
      }
      goto LAB_14533cd90;
    }
    FUN_14533d310(uVar10,param_2);
  }
  return 1;
}



// FUNCTION 14533d0a0 FUN_14533d0a0 body=212 status=ok
// SIG undefined FUN_14533d0a0(void)

int FUN_14533d0a0(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar5 = FUN_1453381a0(param_3,2);
  lVar4 = *(longlong *)(param_3 + 0x10);
  puVar7 = (undefined4 *)((longlong)param_1 * 0x20 + lVar4);
  puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + lVar4);
  puVar8 = (undefined4 *)((longlong)param_2 * 0x20 + lVar4);
  iVar9 = iVar5 + 1;
  iVar1 = puVar7[1];
  iVar2 = puVar8[1];
  puVar7[1] = iVar5;
  puVar8[1] = iVar9;
  *(int *)((longlong)iVar1 * 0x20 + 8 + lVar4) = iVar9;
  *(int *)((longlong)iVar2 * 0x20 + 8 + lVar4) = iVar5;
  *puVar6 = *puVar8;
  puVar6[1] = iVar2;
  puVar6[2] = param_1;
  puVar6[3] = iVar9;
  uVar3 = puVar7[6];
  puVar6[7] = puVar6[7] & 0xfffffffb;
  puVar6[6] = uVar3;
  puVar6[5] = 0xffffffff;
  puVar6[8] = *puVar7;
  puVar6[10] = param_2;
  puVar6[0xb] = iVar5;
  puVar6[9] = iVar1;
  uVar3 = puVar8[6];
  puVar6[0xf] = puVar6[0xf] & 0xfffffffb;
  puVar6[0xe] = uVar3;
  puVar6[0xd] = 0xffffffff;
  return iVar5;
}



// FUNCTION 14533d180 FUN_14533d180 body=254 status=ok
// SIG undefined FUN_14533d180(void)

ulonglong FUN_14533d180(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar4 * 0x28;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x28);
  uVar3 = uVar4 * 0x28 + 0x28;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x28;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 14533d280 FUN_14533d280 body=144 status=ok
// SIG undefined FUN_14533d280(void)

undefined8 FUN_14533d280(int *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar6 = (longlong)param_2 * 0x20;
  lVar5 = (longlong)*(int *)(lVar6 + 0x10 + lVar1);
  lVar3 = lVar5 * 0x20;
  if ((*(byte *)(lVar3 + 0x1c + lVar1) & 2) == 0) {
    *(int *)(lVar6 + lVar1 + 0x10) = *param_1;
  }
  else {
    iVar2 = FUN_14533d0a0(*param_1,lVar5,param_3);
    uVar4 = FUN_14533ccf0(*param_1,*param_4);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    *param_1 = iVar2 + 1;
    lVar3 = *(longlong *)(param_3 + 0x10);
    *(int *)(lVar3 + 0x10 + lVar6) = iVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 14533d310 FUN_14533d310 body=288 status=ok
// SIG undefined FUN_14533d310(void)

void FUN_14533d310(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  uVar12 = (ulonglong)param_1;
  iVar1 = *(int *)(uVar12 * 0x20 + 4 + lVar6);
  iVar2 = *(int *)((longlong)*(int *)(uVar12 * 0x20 + 8 + lVar6) * 0x20 + 8 + lVar6);
  while (iVar2 != iVar1) {
    uVar7 = FUN_1453381a0(param_2,2);
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar11 = (longlong)iVar2 * 0x20;
    iVar10 = uVar7 + 1;
    puVar9 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + lVar6);
    iVar3 = *(int *)(lVar11 + 4 + lVar6);
    puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0x20 + lVar6);
    iVar4 = puVar9[1];
    *(uint *)(lVar11 + 4 + lVar6) = uVar7;
    puVar9[1] = iVar10;
    *(int *)((longlong)iVar3 * 0x20 + 8 + lVar6) = iVar10;
    *(uint *)((longlong)iVar4 * 0x20 + 8 + lVar6) = uVar7;
    *puVar8 = *puVar9;
    puVar8[1] = iVar4;
    puVar8[2] = iVar2;
    puVar8[3] = iVar10;
    uVar5 = *(undefined4 *)(lVar11 + 0x18 + lVar6);
    puVar8[7] = puVar8[7] & 0xfffffffb;
    puVar8[6] = uVar5;
    puVar8[5] = 0xffffffff;
    uVar5 = *(undefined4 *)(lVar11 + lVar6);
    puVar8[10] = (int)uVar12;
    uVar12 = (ulonglong)uVar7;
    puVar8[8] = uVar5;
    puVar8[9] = iVar3;
    puVar8[0xb] = uVar7;
    uVar5 = puVar9[6];
    puVar8[0xf] = puVar8[0xf] & 0xfffffffb;
    puVar8[0xe] = uVar5;
    puVar8[0xd] = 0xffffffff;
    iVar2 = *(int *)(lVar11 + 8 + *(longlong *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 14533d430 FUN_14533d430 body=181 status=ok
// SIG undefined FUN_14533d430(void)

undefined8 * FUN_14533d430(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18;
  longlong local_10;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  local_18 = *param_2;
  local_10 = local_18 + (longlong)(int)param_2[1] * 8;
  FUN_14533d4f0(&local_18,param_1);
  plVar1 = (longlong *)param_2[2];
  plVar2 = plVar1 + (longlong)(int)param_2[3] * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    local_18 = *plVar1;
    local_10 = local_18 + (longlong)(int)plVar1[1] * 8;
    FUN_14533d4f0(&local_18,param_1 + 2);
  }
  return param_1;
}



// FUNCTION 14533d4f0 FUN_14533d4f0 body=1173 status=ok
// SIG undefined FUN_14533d4f0(void)

void FUN_14533d4f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  ulonglong local_res10;
  uint local_res18 [2];
  ulonglong local_res20;
  undefined8 local_128;
  ulonglong uStack_120;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  undefined1 local_100 [4];
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  undefined8 uStack_68;
  
  local_e0 = *param_1;
  lVar1 = param_2[1];
  iVar9 = (int)(param_1[1] - local_e0 >> 3);
  iVar8 = (int)lVar1 + iVar9;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_14533d990(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  uVar2 = (undefined1)local_res8[0];
  local_c0 = (longlong)iVar9;
  local_e8 = (longlong *)((longlong)(int)lVar1 * 0x60 + *param_2);
  *(int *)(param_2 + 1) = iVar8;
  if (0 < iVar9) {
    local_f0 = 0;
    local_b8 = (longlong)(iVar9 + -1) * 8;
    do {
      local_d0 = *(undefined8 *)(local_e0 + local_b8);
      local_b8 = local_f0 * 8;
      local_c8 = *(undefined8 *)(local_b8 + local_e0);
      iVar8 = (int)((ulonglong)local_d0 >> 0x20);
      iVar9 = (int)local_c8;
      uVar10 = iVar9 - (int)local_d0;
      iVar11 = (int)((ulonglong)local_c8 >> 0x20);
      local_res8[0] = iVar8 - iVar11;
      local_d8 = (longlong)(int)local_d0;
      uStack_120 = (longlong)iVar8 * (longlong)(int)uVar10 + local_d8 * (int)local_res8[0];
      local_res20 = CONCAT44(local_res20._4_4_,uVar10);
      uVar7 = -uStack_120;
      local_f8 = local_res8[0];
      uStack_f4 = uVar10;
      if (local_res8[0] == 0) {
        if (uVar7 != 0 && uVar10 != 0) {
          if ((longlong)uStack_120 < 0) {
            uStack_120 = uVar7;
          }
          local_res8[0] = -uVar10;
          if ((int)-uVar10 < 0) {
            local_res8[0] = uVar10;
          }
          local_res10 = CONCAT44(local_res10._4_4_,local_res8[0]);
          local_110 = uStack_120;
          FUN_144d18d90(local_res18,&local_110,local_res8,uVar2);
          uVar4 = (ulonglong)local_res18[0];
          uVar10 = -((uint)local_res10 / local_res18[0]);
          if (-1 < (int)(uint)local_res20) {
            uVar10 = (uint)local_res10 / local_res18[0];
          }
          local_128 = (ulonglong)uVar10 << 0x20;
          goto LAB_14533d89e;
        }
        local_128 = (ulonglong)((int)uVar10 >> 0x1f | (uint)(uVar10 != 0)) << 0x20;
LAB_14533d656:
        uStack_120 = (longlong)(int)((longlong)uVar7 >> 0x3f) | (ulonglong)(uVar7 != 0);
      }
      else {
        if (uVar10 == 0) {
          if (iVar8 == iVar11 || uVar7 == 0) {
            local_128 = (ulonglong)((uint)(iVar8 != iVar11) | (int)local_res8[0] >> 0x1f);
            goto LAB_14533d656;
          }
          if ((longlong)uStack_120 < 0) {
            uStack_120 = uVar7;
          }
          uVar10 = -local_res8[0];
          if ((int)-local_res8[0] < 0) {
            uVar10 = local_res8[0];
          }
          local_res20 = CONCAT44(local_res20._4_4_,uVar10);
          local_res10 = CONCAT44(local_res10._4_4_,uVar10);
          local_110 = uStack_120;
          FUN_144d18d90(&local_108,&local_110,&local_res10,uVar2);
          uVar4 = (ulonglong)local_108;
          uVar10 = -((uint)local_res20 / local_108);
          if (-1 < (int)local_res8[0]) {
            uVar10 = (uint)local_res20 / local_108;
          }
          local_128 = (ulonglong)uVar10;
        }
        else {
          if (uVar7 == 0) {
            uStack_120 = 0;
            if (iVar8 == iVar11 || uVar10 == 0) {
              local_128 = CONCAT44((int)uVar10 >> 0x1f | (uint)(uVar10 != 0),
                                   (uint)(iVar8 != iVar11) | (int)local_res8[0] >> 0x1f);
            }
            else {
              uVar3 = -uVar10;
              if ((int)-uVar10 < 0) {
                uVar3 = uVar10;
              }
              uVar6 = -local_res8[0];
              if ((int)-local_res8[0] < 0) {
                uVar6 = local_res8[0];
              }
              local_res20 = CONCAT44(local_res20._4_4_,uVar6);
              local_res10 = CONCAT44(local_res10._4_4_,uVar3);
              FUN_144d18a70(&local_104,&local_res20,&local_res10,uVar2);
              uVar5 = -(uVar6 / local_104);
              if (-1 < (int)local_res8[0]) {
                uVar5 = uVar6 / local_104;
              }
              uVar3 = uVar3 / local_104;
              if ((int)uVar10 < 0) {
                uVar3 = -uVar3;
              }
              local_128 = CONCAT44(uVar3,uVar5);
            }
            goto LAB_14533d8b0;
          }
          uVar3 = -uVar10;
          if ((int)-uVar10 < 0) {
            uVar3 = uVar10;
          }
          local_110 = CONCAT44(local_110._4_4_,uVar3);
          local_res10 = CONCAT44(local_res10._4_4_,uVar3);
          uVar3 = -local_res8[0];
          if ((int)-local_res8[0] < 0) {
            uVar3 = local_res8[0];
          }
          local_res20 = CONCAT44(local_res20._4_4_,uVar3);
          FUN_144d18a70(local_100,&local_res20,&local_res10,uVar2);
          local_res10 = uStack_120;
          if ((longlong)uStack_120 < 0) {
            local_res10 = uVar7;
          }
          local_res20 = local_res10;
          FUN_144d18d90(&local_fc,&local_res10,local_100,uVar2);
          uVar4 = (ulonglong)local_fc;
          uVar6 = -(uVar3 / local_fc);
          if (-1 < (int)local_res8[0]) {
            uVar6 = uVar3 / local_fc;
          }
          uVar3 = (uint)local_110 / local_fc;
          if ((int)uVar10 < 0) {
            uVar3 = -uVar3;
          }
          local_128 = CONCAT44(uVar3,uVar6);
          uStack_120 = local_res20;
        }
LAB_14533d89e:
        uStack_120 = uStack_120 / uVar4;
        if ((longlong)uVar7 < 0) {
          uStack_120 = -uStack_120;
        }
      }
LAB_14533d8b0:
      local_b0 = local_d8;
      local_f0 = local_f0 + 1;
      lStack_a8 = local_d8 >> 0x3f;
      local_a0 = (longlong)local_d0._4_4_;
      lStack_98 = local_a0 >> 0x3f;
      lStack_88 = (longlong)iVar9;
      local_80 = lStack_88 >> 0x3f;
      lStack_78 = (longlong)local_c8._4_4_;
      local_90 = 1;
      uStack_68 = 1;
      *local_e8 = local_d8;
      local_e8[1] = lStack_a8;
      local_e8[2] = local_a0;
      local_e8[3] = lStack_98;
      local_e8[4] = 1;
      local_e8[5] = lStack_88;
      local_70._0_4_ = local_c8._4_4_ >> 0x1f;
      local_e8[6] = local_80;
      local_e8[7] = lStack_78;
      *(int *)(local_e8 + 8) = (int)local_70;
      *(int *)((longlong)local_e8 + 0x44) = (int)local_70;
      *(undefined4 *)(local_e8 + 9) = 1;
      *(undefined4 *)((longlong)local_e8 + 0x4c) = 0;
      local_e8[10] = local_128;
      local_e8[0xb] = uStack_120;
      local_e8 = local_e8 + 0xc;
      local_70 = lStack_78 >> 0x3f;
    } while (local_f0 < local_c0);
  }
  return;
}



// FUNCTION 14533d990 FUN_14533d990 body=321 status=ok
// SIG undefined FUN_14533d990(void)

ulonglong FUN_14533d990(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x60,&local_res8);
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar5;
        uVar5 = puVar8[3];
        puVar7[2] = puVar8[2];
        puVar7[3] = uVar5;
        uVar5 = puVar8[5];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar5;
        uVar5 = puVar8[7];
        puVar7[6] = puVar8[6];
        puVar7[7] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x44);
        uVar3 = *(undefined4 *)(puVar8 + 9);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x4c);
        *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar8 + 8);
        *(undefined4 *)((longlong)puVar7 + 0x44) = uVar2;
        *(undefined4 *)(puVar7 + 9) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar4;
        uVar5 = puVar8[0xb];
        puVar7[10] = puVar8[10];
        puVar7[0xb] = uVar5;
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x60 + 0x60;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x60);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 14533dae0 FUN_14533dae0 body=103 status=ok
// SIG undefined FUN_14533dae0(void)

void FUN_14533dae0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 14533db50 FUN_14533db50 body=146 status=ok
// SIG undefined FUN_14533db50(void)

undefined8 * FUN_14533db50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 5;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14533dae0(puVar1,&PTR_vftable_14c6e47a0);
  param_1[5] = *puVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *puVar1 = 0;
  param_2[6] = 0;
  return param_1;
}



// FUNCTION 14533dbf0 FUN_14533dbf0 body=107 status=ok
// SIG undefined FUN_14533dbf0(void)

void FUN_14533dbf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14533dc60 FUN_14533dc60 body=34 status=ok
// SIG undefined FUN_14533dc60(void)

void FUN_14533dc60(float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  *param_1 = fVar1 * 0.99;
  param_1[1] = 1.0 / (fVar1 * 0.99);
  return;
}



// FUNCTION 14533dc90 FUN_14533dc90 body=222 status=ok
// SIG undefined FUN_14533dc90(void)

undefined8 * FUN_14533dc90(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x7b;
  *(undefined4 *)(param_1 + 0x11) = 0x7b;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 14533dd70 FUN_14533dd70 body=1004 status=ok
// SIG undefined FUN_14533dd70(void)

void FUN_14533dd70(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  uVar4 = 0;
  if ((*(char *)((longlong)param_1 + 0xa4) != '\0') && (uVar5 = uVar4, 0 < (int)param_1[0x17])) {
    do {
      if ((2 < DAT_14c7fd030) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        lVar3 = param_1[0x16];
        if (cVar1 == '\0') {
          uVar5 = uVar5 | 1;
          uVar2 = FUN_144bdc640(local_1c8);
        }
        else {
          uVar5 = uVar5 | 2;
          uVar2 = FUN_144bdc810(local_178,&DAT_14c7fcfe0,3);
        }
        local_1d0 = lVar3 + (longlong)(int)uVar4 * 8 + 4;
        local_1e0 = 1;
        uStack_1dc = 0;
        uStack_1d8 = 0x44f50be0;
        uStack_1d4 = 1;
        lVar3 = FUN_144bdc480(uVar2,"Total energy: {}",&local_1e0,0);
        *(undefined8 *)(lVar3 + 0x40) = 0x7e;
        *(char **)(lVar3 + 0x38) = "NavVolume\\hkaiNavVolumeMerger.cpp";
        if ((uVar5 & 2) != 0) {
          uVar5 = uVar5 & 0xfffffffd;
          FUN_144bdc8a0(local_178);
        }
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar5 & 0xfffffffe;
          FUN_144bdc690(local_1c8);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)param_1[0x17]);
  }
  uVar6 = (ulonglong)(int)param_1[5];
  if ((int)param_1[5] < (int)param_1[1]) {
    lVar3 = uVar6 * 8;
    do {
      lVar7 = *(longlong *)(lVar3 + *param_1);
      if (lVar7 != 0) {
        FUN_14533dbf0(lVar7);
        (*DAT_14c787678)(0,lVar7,0);
      }
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      lVar3 = lVar3 + 8;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x16],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) << 3);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  lVar3 = param_1[8];
  lVar7 = (longlong)(int)param_1[9] * 0x38 + lVar3;
  while (lVar7 != lVar3) {
    lVar7 = lVar7 + -0x38;
    FUN_14533dbf0(lVar7);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) * 0x38);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  lVar3 = param_1[4];
  lVar7 = (longlong)(int)param_1[5] * 0x38 + lVar3;
  while (lVar7 != lVar3) {
    lVar7 = lVar7 + -0x38;
    FUN_14533dbf0(lVar7);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x38);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14533e160 FUN_14533e160 body=242 status=ok
// SIG undefined FUN_14533e160(void)

undefined8 * FUN_14533e160(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_res8;
  
  if ((int)param_1[3] == 0) {
    local_res8 = 0x38;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,&DAT_149c224f8);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = param_1[0xe];
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80000000;
      *puVar2 = 0;
      *(undefined8 *)((longlong)puVar2 + 0xc) = 0xffffffffffffffff;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
      *(int *)((longlong)puVar2 + 0x1c) = (int)lVar1;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar3 = puVar2;
    }
    *(int *)(puVar3 + 4) = (int)param_1[1];
    iVar4 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_145044990(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = puVar3;
    }
    *(int *)(param_1 + 1) = iVar4;
    return puVar3;
  }
  puVar2 = *(undefined8 **)(param_1[2] + -8 + (longlong)(int)param_1[3] * 8);
  *(int *)((longlong)puVar2 + 0x1c) = (int)param_1[0xe];
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return puVar2;
}



// FUNCTION 14533e260 FUN_14533e260 body=413 status=ok
// SIG undefined FUN_14533e260(void)

void FUN_14533e260(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = (longlong)param_2;
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < param_2) {
    FUN_145341710(param_1 + 4,&PTR_vftable_14c6e47a0,lVar10);
  }
  iVar7 = (int)param_1[5];
  uVar6 = 0;
  if (iVar7 < param_2) {
    puVar9 = (undefined4 *)(lVar10 * 0x38 + param_1[4]);
    *(int *)(param_1 + 5) = param_2;
    puVar4 = (undefined4 *)((longlong)iVar7 * 0x38 + param_1[4]);
    if (puVar4 != puVar9) {
      puVar3 = puVar4 + 0xd;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar3 + -3) = 0;
          puVar3[-1] = 0;
          *puVar3 = 0x80000000;
          *puVar4 = 0;
          *(undefined8 *)(puVar3 + -10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + -0xc) = 0;
          puVar3[-8] = 0xffffffff;
          puVar3[-6] = 0xffffffff;
          puVar3[-7] = 0;
        }
        puVar4 = puVar4 + 0xe;
        puVar3 = puVar3 + 0xe;
      } while (puVar4 != puVar9);
    }
  }
  else if (param_2 < iVar7) {
    lVar2 = param_1[4];
    *(int *)(param_1 + 5) = param_2;
    lVar8 = (longlong)iVar7 * 0x38 + param_1[4];
    while (lVar8 != lVar10 * 0x38 + lVar2) {
      lVar8 = lVar8 + -0x38;
      FUN_14533dbf0(lVar8);
    }
  }
  uVar11 = uVar6;
  if (0 < param_2) {
    do {
      lVar10 = param_1[4] + uVar11;
      *(int *)(lVar10 + 0x20) = (int)uVar6;
      iVar7 = (int)param_1[1] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_145044990(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      plVar1 = (longlong *)(*param_1 + (longlong)(int)param_1[1] * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = lVar10;
      }
      *(int *)(param_1 + 1) = iVar7;
      iVar7 = (int)param_1[3] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar7) {
        FUN_145044990(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      plVar1 = (longlong *)(param_1[2] + (longlong)(int)param_1[3] * 8);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = lVar10;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *(int *)(param_1 + 3) = iVar7;
      uVar11 = uVar11 + 0x38;
    } while ((int)uVar5 < param_2);
  }
  return;
}



// FUNCTION 14533e400 FUN_14533e400 body=1320 status=ok
// SIG undefined FUN_14533e400(void)

undefined8 FUN_14533e400(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  int local_res10;
  longlong local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [64];
  
  if (((param_2[7] < 0) || (param_2[7] == *(int *)(param_1 + 0x70))) || (param_2[0xc] == 0)) {
    return 0;
  }
  iVar15 = 0;
  plVar1 = (longlong *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((longlong *)(param_2 + 10) != plVar1) {
    iVar15 = param_2[0xc];
    lVar19 = *(longlong *)(param_2 + 10);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar15) {
      FUN_145341a20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar15);
    }
    FUN_144b3d470(*plVar1,lVar19,(longlong)iVar15 * 8);
    *(int *)(param_1 + 0x38) = iVar15;
  }
  iVar15 = iVar15 + -1;
  lVar19 = (longlong)iVar15;
  if (-1 < iVar15) {
    do {
      lVar16 = *plVar1;
      lVar18 = *(longlong *)(lVar16 + lVar19 * 8);
      puVar2 = (undefined8 *)(lVar16 + lVar19 * 8);
      if ((*(int *)(lVar18 + 0x18) != param_2[6]) ||
         (*(int *)(lVar18 + 0x1c) == *(int *)(param_1 + 0x70))) {
        iVar4 = *(int *)(param_1 + 0x38);
        iVar13 = iVar4 + -1;
        *(int *)(param_1 + 0x38) = iVar13;
        if ((iVar13 != iVar15) &&
           (puVar3 = (undefined8 *)(lVar16 + ((longlong)iVar4 + -1) * 8), puVar2 != puVar3)) {
          *puVar2 = *puVar3;
        }
      }
      iVar15 = iVar15 + -1;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  uVar5 = *(uint *)(param_1 + 0x38);
  lVar19 = *plVar1;
  if (1 < uVar5) {
    uVar17 = 0;
    if (uVar5 != 1) {
      do {
        iVar15 = FUN_144ff6390(param_3,uVar17,uVar5);
        lVar16 = (longlong)(int)uVar17;
        uVar17 = uVar17 + 1;
        uVar20 = *(undefined8 *)(lVar19 + lVar16 * 8);
        *(undefined8 *)(lVar19 + lVar16 * 8) = *(undefined8 *)(lVar19 + (longlong)iVar15 * 8);
        *(undefined8 *)(lVar19 + (longlong)iVar15 * 8) = uVar20;
      } while (uVar17 < uVar5 - 1);
    }
  }
  if (*(int *)(param_1 + 0x38) < param_4) {
    param_4 = *(int *)(param_1 + 0x38);
  }
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < param_4) {
    FUN_145341610((longlong *)(param_1 + 0x30),&PTR_vftable_14c6e47a0,(longlong)param_4);
  }
  iVar15 = *(int *)(param_1 + 0x38);
  if ((iVar15 < param_4) || (param_4 < iVar15)) {
    *(int *)(param_1 + 0x38) = param_4;
    iVar15 = param_4;
  }
  local_res10 = 0;
  if (0 < iVar15) {
    local_98 = 0;
    do {
      piVar6 = *(int **)(local_98 + *(longlong *)(param_1 + 0x30));
      if ((*param_2 != *piVar6) || (bVar7 = true, param_2[3] != piVar6[3])) {
        bVar7 = false;
      }
      if ((param_2[1] != piVar6[1]) || (bVar8 = true, param_2[4] != piVar6[4])) {
        bVar8 = false;
      }
      iVar15 = param_2[2];
      if ((iVar15 != piVar6[2]) || (bVar12 = true, param_2[5] != piVar6[5])) {
        bVar12 = false;
      }
      if ((piVar6[3] == *param_2) || (bVar11 = false, *piVar6 == param_2[3])) {
        bVar11 = true;
      }
      if ((piVar6[4] == param_2[1]) || (bVar10 = false, piVar6[1] == param_2[4])) {
        bVar10 = true;
      }
      if ((piVar6[5] == iVar15) || (bVar9 = false, piVar6[2] == param_2[5])) {
        bVar9 = true;
      }
      if (((bVar7) && (((bVar8 && (bVar9)) || ((bVar10 && (bVar12)))))) ||
         (((bVar11 && (bVar8)) && (bVar12)))) {
        FUN_145340450(param_1,param_2,piVar6);
        return 2;
      }
      if ((piVar6[3] <= *param_2) || (bVar7 = true, param_2[3] <= *piVar6)) {
        bVar7 = false;
      }
      if ((piVar6[4] <= param_2[1]) || (bVar8 = true, param_2[4] <= piVar6[1])) {
        bVar8 = false;
      }
      if ((piVar6[5] <= iVar15) || (bVar12 = true, param_2[5] <= piVar6[2])) {
        bVar12 = false;
      }
      if ((piVar6[3] == *param_2) || (bVar11 = false, *piVar6 == param_2[3])) {
        bVar11 = true;
      }
      if ((piVar6[4] == param_2[1]) || (bVar10 = false, piVar6[1] == param_2[4])) {
        bVar10 = true;
      }
      if ((piVar6[5] == iVar15) || (bVar9 = false, piVar6[2] == param_2[5])) {
        bVar9 = true;
      }
      if (bVar7) {
        if ((bVar8) && (bVar9)) {
          uVar20 = 2;
        }
        else {
          if ((!bVar10) || (!bVar12)) goto LAB_14533e750;
          uVar20 = 1;
        }
      }
      else {
LAB_14533e750:
        if (((!bVar11) || (!bVar8)) || (uVar20 = 0, !bVar12)) {
          uVar20 = 0xffffffff;
        }
      }
      lVar16 = *(longlong *)(param_1 + 0x40);
      lVar19 = param_1 + 0x40;
      lVar18 = (longlong)*(int *)(param_1 + 0x48) * 0x38 + lVar16;
      while (lVar18 != lVar16) {
        lVar18 = lVar18 + -0x38;
        FUN_14533dbf0(lVar18);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) < 10) {
        FUN_145341410(lVar19,&PTR_vftable_14c6e47a0,10);
      }
      lVar16 = param_1 + 0x50;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < piVar6[0xc] + param_2[0xc]) {
        FUN_145044990(lVar16,&PTR_vftable_14c6e47a0,(longlong)(piVar6[0xc] + param_2[0xc]));
      }
      FUN_1453410c0(param_2,piVar6,lVar16);
      fVar21 = (float)FUN_14533f1d0(param_2,piVar6,uVar20,param_1 + 0x8c,param_3,lVar19,lVar16);
      if (fVar21 < 0.0) {
LAB_14533e8fd:
        FUN_145340660(param_1,param_2,piVar6,lVar19,lVar16);
        return 3;
      }
      local_88 = -fVar21 * *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x80);
      fStack_84 = local_88;
      fStack_80 = local_88;
      fStack_7c = local_88;
      pfVar14 = (float *)FUN_144bea9b0(local_78,&local_88);
      fVar21 = *pfVar14;
      fVar22 = (float)FUN_144ff6320(param_1 + 0x84);
      if (fVar22 < fVar21) goto LAB_14533e8fd;
      local_res10 = local_res10 + 1;
      local_98 = local_98 + 8;
    } while (local_res10 < *(int *)(param_1 + 0x38));
  }
  return 1;
}



// FUNCTION 14533e930 FUN_14533e930 body=1332 status=ok
// SIG undefined FUN_14533e930(void)

undefined4 FUN_14533e930(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  int iVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  int local_res10;
  longlong local_res20;
  int *local_98;
  undefined8 local_90;
  uint local_88;
  longlong local_80;
  int local_78;
  uint local_74;
  longlong local_70;
  uint local_68;
  uint local_64;
  
  if (((param_2[7] < 0) || (param_2[7] == *(int *)(param_1 + 0x70))) || (param_2[0xc] == 0)) {
    return 0;
  }
  local_90 = *(undefined8 *)(param_1 + 0x8c);
  iVar5 = 0;
  lVar16 = 0;
  uVar14 = 0;
  local_70 = 0;
  lVar15 = 0;
  local_80 = 0;
  uVar17 = 1;
  fVar21 = 0.0;
  local_88 = *(uint *)(param_1 + 0x94) & 0xffffff00;
  local_98 = (int *)0x0;
  local_68 = 0;
  local_64 = 0x80000000;
  local_78 = 0;
  local_74 = 0x80000000;
  local_res10 = 0;
  if (0 < param_2[0xc]) {
    local_res20 = 0;
    do {
      iVar18 = 1;
      iVar5 = 0;
      piVar4 = *(int **)(local_res20 + *(longlong *)(param_2 + 10));
      if ((piVar4[6] == param_2[6]) && (piVar4[7] != *(int *)(param_1 + 0x70))) {
        if ((piVar4[3] <= *param_2) || (iVar13 = iVar18, param_2[3] <= *piVar4)) {
          iVar13 = iVar5;
        }
        if ((param_2[1] < piVar4[4]) && (piVar4[1] < param_2[4])) {
          iVar5 = iVar18;
        }
        if ((piVar4[5] <= param_2[2]) || (iVar11 = iVar18, param_2[5] <= piVar4[2])) {
          iVar11 = 0;
        }
        iVar9 = iVar18;
        if ((piVar4[3] != *param_2) && (*piVar4 != param_2[3])) {
          iVar9 = 0;
        }
        iVar7 = iVar18;
        if ((piVar4[4] != param_2[1]) && (piVar4[1] != param_2[4])) {
          iVar7 = 0;
        }
        iVar6 = iVar18;
        if ((piVar4[5] != param_2[2]) && (piVar4[2] != param_2[5])) {
          iVar6 = 0;
        }
        if (iVar13 == 0) {
LAB_14533ead7:
          if (((iVar9 == 0) || (iVar5 == 0)) || (iVar11 == 0)) {
            iVar18 = -1;
          }
          else {
            iVar18 = 0;
          }
        }
        else if ((iVar5 == 0) || (iVar6 == 0)) {
          if ((iVar7 == 0) || (iVar11 == 0)) goto LAB_14533ead7;
        }
        else {
          iVar18 = 2;
        }
        lVar15 = *(longlong *)(param_1 + 0x40);
        plVar1 = (longlong *)(param_1 + 0x40);
        lVar12 = (longlong)*(int *)(param_1 + 0x48) * 0x38 + lVar15;
        while (lVar12 != lVar15) {
          lVar12 = lVar12 + -0x38;
          FUN_14533dbf0(lVar12);
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) < 10) {
          FUN_145341410(plVar1,&PTR_vftable_14c6e47a0,10);
        }
        plVar19 = (longlong *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x58) = 0;
        if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < piVar4[0xc] + param_2[0xc]) {
          FUN_145044990(plVar19,&PTR_vftable_14c6e47a0,(longlong)(piVar4[0xc] + param_2[0xc]));
        }
        FUN_1453410c0(param_2,piVar4,plVar19);
        fVar20 = (float)FUN_14533f1d0(param_2,piVar4,iVar18,&local_90,param_3,plVar1,plVar19);
        if (fVar21 <= fVar20) {
          uVar14 = (ulonglong)local_68;
          lVar15 = local_80;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x48);
          lVar15 = (longlong)(int)uVar3;
          if ((int)(local_64 & 0x7fffffff) < (int)uVar3) {
            FUN_145341710(&local_70,&PTR_vftable_14c6e47c0,lVar15);
            lVar16 = local_70;
          }
          uVar14 = (ulonglong)(int)local_68;
          if ((int)local_68 < (int)uVar3) {
            lVar12 = uVar14 * 0x38;
            uVar14 = (ulonglong)uVar3;
            puVar8 = (undefined4 *)(lVar12 + lVar16);
            puVar10 = (undefined4 *)(lVar15 * 0x38 + lVar16);
            local_68 = uVar3;
            if (puVar8 != puVar10) {
              puVar8 = puVar8 + 0xd;
              do {
                if (puVar8 + -0xd != (undefined4 *)0x0) {
                  *(undefined8 *)(puVar8 + -3) = 0;
                  puVar8[-1] = 0;
                  *puVar8 = 0x80000000;
                  puVar8[-0xd] = 0;
                  *(undefined8 *)(puVar8 + -10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + -0xc) = 0;
                  puVar8[-8] = 0xffffffff;
                  puVar8[-6] = 0xffffffff;
                  puVar8[-7] = 0;
                }
                puVar2 = puVar8 + 1;
                puVar8 = puVar8 + 0xe;
              } while (puVar2 != puVar10);
            }
          }
          else if ((int)uVar3 < (int)local_68) {
            lVar12 = uVar14 * 0x38;
            uVar14 = (ulonglong)uVar3;
            lVar12 = lVar12 + lVar16;
            local_68 = uVar3;
            while (lVar12 != lVar15 * 0x38 + lVar16) {
              lVar12 = lVar12 + -0x38;
              FUN_14533dbf0(lVar12);
            }
          }
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 0x48)) {
            puVar8 = (undefined4 *)(lVar16 + 4);
            do {
              iVar5 = iVar5 + 1;
              puVar10 = (undefined4 *)((longlong)puVar8 + *plVar1 + (-4 - lVar16));
              puVar8[-1] = *puVar10;
              puVar8[2] = puVar10[3];
              *puVar8 = puVar10[1];
              puVar8[3] = puVar10[4];
              puVar8[1] = puVar10[2];
              puVar8[4] = puVar10[5];
              puVar8[5] = puVar10[6];
              puVar8 = puVar8 + 0xe;
            } while (iVar5 < *(int *)(param_1 + 0x48));
          }
          lVar15 = local_80;
          fVar21 = fVar20;
          local_98 = piVar4;
          if (plVar19 != &local_80) {
            iVar5 = *(int *)(param_1 + 0x58);
            lVar12 = *plVar19;
            if ((int)(local_74 & 0x7fffffff) < iVar5) {
              FUN_145341a20(&local_80,&PTR_vftable_14c6e47c0,(longlong)iVar5);
            }
            lVar15 = local_80;
            FUN_144b3d470(local_80,lVar12,(longlong)iVar5 * 8);
            local_78 = iVar5;
          }
        }
      }
      uVar17 = 1;
      iVar5 = (int)uVar14;
      local_res10 = local_res10 + 1;
      local_res20 = local_res20 + 8;
    } while (local_res10 < param_2[0xc]);
    if (local_98 != (int *)0x0) {
      FUN_145340660(param_1,param_2,local_98,&local_70,&local_80);
      uVar17 = 3;
    }
  }
  if ((-1 < (int)local_74) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar15,(ulonglong)(local_74 & 0x7fffffff) << 3);
  }
  lVar15 = (longlong)iVar5 * 0x38 + lVar16;
  while (lVar15 != lVar16) {
    lVar15 = lVar15 + -0x38;
    FUN_14533dbf0(lVar15);
  }
  if ((-1 < (int)local_64) && (lVar16 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar16,(ulonglong)(local_64 & 0x7fffffff) * 0x38);
  }
  return uVar17;
}



// FUNCTION 14533ee70 FUN_14533ee70 body=559 status=ok
// SIG undefined FUN_14533ee70(void)

int * FUN_14533ee70(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  char *local_38;
  char *local_30;
  
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar7 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar11;
  }
  lVar7 = *(longlong *)(lVar11 + 0x3e0);
  if (lVar7 != 0) {
    local_38 = "TtdoSweep";
    local_30 = "";
    FUN_144b3f370(lVar7,&local_38);
  }
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  uVar10 = (int)param_1[1] - 1;
  piVar12 = (int *)(ulonglong)uVar10;
  lVar11 = (longlong)(int)uVar10;
  if (-1 < (int)uVar10) {
    do {
      piVar12 = (int *)FUN_14533e400(param_1,*(undefined8 *)(*param_1 + lVar11 * 8),
                                     (longlong)param_1 + 0x84,0x7fffffff);
      if ((int)piVar12 != 0) {
        uVar10 = *(int *)((longlong)param_1 + 0x74) + 1;
        piVar12 = (int *)(ulonglong)uVar10;
        *(uint *)((longlong)param_1 + 0x74) = uVar10;
        if ((*(char *)((longlong)param_1 + 0xa4) != '\0') &&
           (piVar12 = (int *)((ulonglong)uVar10 / (ulonglong)*(uint *)(param_1 + 0x15)),
           uVar10 % *(uint *)(param_1 + 0x15) == 0)) {
          iVar13 = (int)param_1[0x17] + 1;
          if ((int)(*(uint *)((longlong)param_1 + 0xbc) & 0x7fffffff) < iVar13) {
            FUN_145341920(param_1 + 0x16,&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          lVar9 = param_1[0x17];
          iVar17 = 0;
          lVar8 = param_1[0x16];
          *(int *)(param_1 + 0x17) = iVar13;
          iVar14 = 0;
          iVar13 = 0;
          *(int *)(lVar8 + (longlong)(int)lVar9 * 8) = (int)param_1[1] - (int)param_1[3];
          uVar10 = *(uint *)(param_1 + 1);
          piVar12 = (int *)(ulonglong)uVar10;
          if (0 < (int)uVar10) {
            puVar15 = (undefined8 *)*param_1;
            uVar16 = (ulonglong)uVar10;
            do {
              piVar12 = (int *)*puVar15;
              if (-1 < piVar12[7]) {
                piVar1 = piVar12 + 3;
                iVar14 = iVar14 + 1;
                iVar6 = *piVar12;
                piVar2 = piVar12 + 5;
                piVar3 = piVar12 + 2;
                piVar4 = piVar12 + 4;
                piVar5 = piVar12 + 1;
                iVar13 = iVar13 + piVar12[0xc];
                uVar10 = (*piVar2 - *piVar3) + (*piVar1 - iVar6);
                piVar12 = (int *)(ulonglong)uVar10;
                iVar17 = iVar17 + ((*piVar4 - *piVar5) * uVar10 +
                                  (*piVar2 - *piVar3) * (*piVar1 - iVar6)) * 2;
              }
              puVar15 = puVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          *(float *)(lVar8 + 4 + (longlong)(int)lVar9 * 8) =
               (float)iVar14 * *(float *)((longlong)param_1 + 0x8c) + (float)iVar17 +
               (float)iVar13 * *(float *)(param_1 + 0x12);
        }
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  if (lVar7 != 0) {
    local_38 = "Et";
    local_30 = "";
    piVar12 = (int *)FUN_144b3f260(lVar7,&local_38);
  }
  return piVar12;
}



// FUNCTION 14533f0a0 FUN_14533f0a0 body=304 status=ok
// SIG undefined FUN_14533f0a0(void)

void FUN_14533f0a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char *local_38;
  char *local_30;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar1 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar4;
  }
  lVar1 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar1 != 0) {
    local_38 = "TtgreedySweepLoop";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  iVar5 = 0;
  do {
    if (param_2 <= iVar5) break;
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
    bVar2 = false;
    iVar3 = (int)param_1[1] + -1;
    lVar4 = (longlong)iVar3;
    if (iVar3 < 0) break;
    do {
      iVar3 = FUN_14533e930(param_1,*(undefined8 *)(*param_1 + lVar4 * 8),(longlong)param_1 + 0x84);
      if (iVar3 == 3) {
        bVar2 = true;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
    iVar5 = iVar5 + 1;
  } while (bVar2);
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 14533f1d0 FUN_14533f1d0 body=4156 status=ok
// SIG undefined FUN_14533f1d0(void)

void FUN_14533f1d0(int *param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5,
                  longlong *param_6,undefined8 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  int iVar26;
  undefined1 *puVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong *puVar31;
  undefined4 *puVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  uint local_res18;
  undefined4 uVar37;
  undefined8 local_558;
  int local_550 [7];
  undefined4 local_534;
  longlong local_528;
  undefined4 local_520;
  uint local_51c;
  ulonglong *local_518;
  ulonglong *local_508;
  undefined4 local_500;
  uint local_4fc;
  ulonglong local_4f8;
  undefined4 local_4f0;
  ulonglong local_4ec;
  undefined4 local_4e4;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  ulonglong *local_4c8;
  undefined4 local_4c0;
  int local_4bc;
  ulonglong local_4b8;
  undefined4 local_4b0;
  ulonglong local_4ac;
  undefined4 local_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_494;
  undefined4 local_48c;
  undefined1 *local_470;
  uint local_468;
  uint local_464;
  undefined1 local_460 [504];
  undefined1 *local_268;
  uint local_260;
  uint local_25c;
  undefined1 local_258 [536];
  
  lVar35 = (longlong)param_3;
  if (param_3 == 0) {
    iVar19 = 2;
    iVar29 = 1;
  }
  else if (param_3 == 1) {
    iVar19 = 0;
    iVar29 = 2;
  }
  else {
    iVar19 = -1;
    iVar29 = -1;
    if (param_3 == 2) {
      iVar19 = 1;
      iVar29 = 0;
    }
  }
  local_528 = 0;
  local_550[0] = 0;
  local_550[1] = 0;
  local_550[2] = 0;
  lVar30 = (longlong)iVar29;
  lVar33 = (longlong)iVar19;
  local_51c = 0x80000000;
  iVar20 = *(int *)(param_2 + lVar35 * 4);
  iVar26 = *(int *)(param_2 + 0xc + lVar30 * 4);
  iVar3 = *(int *)(param_2 + lVar30 * 4);
  if (param_1[lVar30 + 3] < iVar26) {
    iVar26 = param_1[lVar30 + 3];
  }
  iVar4 = *(int *)(param_2 + 0xc + lVar33 * 4);
  if (iVar3 < param_1[lVar30]) {
    iVar3 = param_1[lVar30];
  }
  iVar5 = *(int *)(param_2 + lVar33 * 4);
  if (param_1[lVar33 + 3] < iVar4) {
    iVar4 = param_1[lVar33 + 3];
  }
  local_550[3] = -1;
  local_550[4] = -1;
  if (iVar5 < param_1[lVar33]) {
    iVar5 = param_1[lVar33];
  }
  local_550[5] = -1;
  if (param_1[lVar35] < iVar20) {
    iVar20 = param_1[lVar35];
  }
  local_550[lVar35] = iVar20;
  iVar20 = *(int *)(param_2 + 0xc + lVar35 * 4);
  if (iVar20 < param_1[lVar35 + 3]) {
    iVar20 = param_1[lVar35 + 3];
  }
  local_550[lVar35 + 3] = iVar20;
  local_550[lVar30 + 3] = iVar26;
  local_550[lVar30] = iVar3;
  iVar20 = param_1[6];
  local_550[lVar33 + 3] = iVar4;
  local_550[lVar33] = iVar5;
  iVar26 = (int)param_6[1] + 1;
  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar26) {
    FUN_145341710(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar26);
  }
  lVar30 = param_6[1];
  *(int *)(param_6 + 1) = iVar26;
  piVar21 = (int *)((longlong)(int)lVar30 * 0x38 + *param_6);
  if (piVar21 != (int *)0x0) {
    piVar21[0xd] = -0x80000000;
    piVar21[10] = 0;
    piVar21[0xb] = 0;
    piVar21[0xc] = 0;
    piVar21[6] = 0;
    piVar21[3] = -1;
    piVar21[4] = -1;
    piVar21[1] = 0;
    piVar21[2] = 0;
    piVar21[5] = -1;
    piVar21[7] = -1;
  }
  *piVar21 = local_550[0];
  piVar21[3] = local_550[3];
  piVar21[1] = local_550[1];
  piVar21[4] = local_550[4];
  piVar21[2] = local_550[2];
  piVar21[5] = local_550[5];
  piVar21[6] = iVar20;
  if ((-1 < (int)local_51c) && (local_528 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_528,(ulonglong)(local_51c & 0x7fffffff) << 3);
  }
  local_268 = local_258;
  local_470 = local_460;
  local_4c8 = &local_4b8;
  local_260 = 0;
  local_25c = 0x80000009;
  local_468 = 0;
  local_4b8 = (ulonglong)(uint)param_1[iVar29];
  local_464 = 0x80000009;
  local_4bc = -0x7ffffffc;
  local_4b0 = 0;
  local_4ac = (ulonglong)(uint)param_1[(longlong)iVar29 + 3];
  local_4a4 = 1;
  local_498 = 0;
  local_48c = 1;
  local_4a0 = CONCAT44(1,*(undefined4 *)(param_2 + (longlong)iVar29 * 4));
  local_4c0 = 4;
  local_494 = CONCAT44(1,*(undefined4 *)(param_2 + 0xc + (longlong)iVar29 * 4));
  FUN_145341380(&local_4b8,4);
  local_508 = &local_4f8;
  local_4fc = 0x80000004;
  local_4f0 = 0;
  local_4e4 = 1;
  local_4f8 = (ulonglong)(uint)param_1[iVar19];
  local_4d8 = 0;
  local_4cc = 1;
  local_500 = 4;
  local_4ec = (ulonglong)(uint)param_1[(longlong)iVar19 + 3];
  local_4e0 = CONCAT44(1,*(undefined4 *)(param_2 + (longlong)iVar19 * 4));
  uVar37 = *(undefined4 *)(param_2 + 0xc + (longlong)iVar19 * 4);
  local_4d4 = CONCAT44(1,uVar37);
  FUN_145341380(&local_4f8,4);
  lVar30 = (longlong)iVar29;
  lVar33 = (longlong)iVar19;
  local_558 = 0;
  local_518 = local_4c8;
  puVar31 = local_4c8;
  do {
    lVar36 = 0;
    if (*(int *)((longlong)puVar31 + local_558) != *(int *)((longlong)puVar31 + local_558 + 0xc)) {
      do {
        iVar19 = *(int *)((longlong)local_508 + lVar36 + 0xc);
        iVar29 = *(int *)((longlong)local_508 + lVar36);
        if (iVar29 != iVar19) {
          local_528 = 0;
          local_520 = 0;
          local_51c = 0x80000000;
          local_550[0] = *param_1;
          local_550[1] = param_1[1];
          local_550[3] = param_1[3];
          local_550[4] = param_1[4];
          local_550[2] = param_1[2];
          local_550[5] = param_1[5];
          local_550[6] = param_1[6];
          local_534 = 0xffffffff;
          local_550[lVar30] = *(int *)((longlong)puVar31 + local_558);
          iVar20 = *(int *)((longlong)puVar31 + local_558 + 0xc);
          local_550[lVar33] = iVar29;
          local_550[lVar30 + 3] = iVar20;
          local_550[lVar33 + 3] = iVar19;
          if (((local_550[0] < local_550[3]) && (local_550[1] < local_550[4])) &&
             (local_550[2] < local_550[5])) {
            bVar12 = false;
            bVar13 = false;
            if (((param_1[lVar30] <= local_550[lVar30]) &&
                (local_550[lVar30 + 3] <= param_1[lVar30 + 3])) &&
               ((param_1[lVar33] <= local_550[lVar33] && (iVar19 <= param_1[lVar33 + 3])))) {
              bVar12 = true;
              local_550[lVar35] = param_1[lVar35];
              local_550[lVar35 + 3] = param_1[lVar35 + 3];
            }
            if (((*(int *)(param_2 + lVar30 * 4) <= local_550[lVar30]) &&
                (local_550[lVar30 + 3] <= *(int *)(param_2 + 0xc + lVar30 * 4))) &&
               ((*(int *)(param_2 + lVar33 * 4) <= local_550[lVar33] &&
                (local_550[lVar33 + 3] <= *(int *)(param_2 + 0xc + lVar33 * 4))))) {
              bVar13 = true;
              local_550[lVar35] = *(int *)(param_2 + lVar35 * 4);
              local_550[lVar35 + 3] = *(int *)(param_2 + 0xc + lVar35 * 4);
            }
            if (bVar12) {
              if (!bVar13) {
                uVar25 = local_260 + 1;
                piVar21 = (int *)(local_268 + (longlong)(int)local_260 * 0x38);
                local_260 = uVar25;
                if (piVar21 != (int *)(local_268 + (longlong)(int)uVar25 * 0x38)) {
                  piVar22 = piVar21 + 0xd;
                  do {
                    if (piVar22 + -0xd != (int *)0x0) {
                      piVar22[-0xd] = 0;
                      piVar22[-0xc] = 0;
                      piVar22[-0xb] = 0;
                      piVar22[-7] = 0;
                      piVar22[-3] = 0;
                      piVar22[-2] = 0;
                      piVar22[-1] = 0;
                      *piVar22 = -0x80000000;
                      piVar22[-10] = -1;
                      piVar22[-9] = -1;
                      piVar22[-8] = -1;
                      piVar22[-6] = -1;
                    }
                    piVar1 = piVar22 + 1;
                    piVar22 = piVar22 + 0xe;
                  } while (piVar1 != (int *)(local_268 + (longlong)(int)uVar25 * 0x38));
                }
LAB_14533f820:
                piVar21[6] = local_550[6];
                piVar21[5] = local_550[5];
                piVar21[2] = local_550[2];
                piVar21[4] = local_550[4];
                piVar21[1] = local_550[1];
                piVar21[3] = local_550[3];
                *piVar21 = local_550[0];
              }
            }
            else if (bVar13) {
              uVar25 = local_468 + 1;
              piVar21 = (int *)(local_470 + (longlong)(int)local_468 * 0x38);
              local_468 = uVar25;
              if (piVar21 != (int *)(local_470 + (longlong)(int)uVar25 * 0x38)) {
                piVar22 = piVar21 + 0xd;
                do {
                  if (piVar22 + -0xd != (int *)0x0) {
                    piVar22[-0xd] = 0;
                    piVar22[-0xc] = 0;
                    piVar22[-0xb] = 0;
                    piVar22[-7] = 0;
                    piVar22[-3] = 0;
                    piVar22[-2] = 0;
                    piVar22[-1] = 0;
                    *piVar22 = -0x80000000;
                    piVar22[-10] = -1;
                    piVar22[-9] = -1;
                    piVar22[-8] = -1;
                    piVar22[-6] = -1;
                  }
                  piVar1 = piVar22 + 1;
                  piVar22 = piVar22 + 0xe;
                } while (piVar1 != (int *)(local_470 + (longlong)(int)uVar25 * 0x38));
              }
              goto LAB_14533f820;
            }
          }
          if ((-1 < (int)local_51c) && (local_528 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_528,(ulonglong)(local_51c & 0x7fffffff) << 3);
          }
        }
        lVar36 = lVar36 + 0xc;
        puVar31 = local_518;
      } while (lVar36 < 0x24);
      local_518 = local_4c8;
      puVar31 = local_4c8;
    }
    local_558 = local_558 + 0xc;
    if (0x23 < local_558) {
      local_500 = 0;
      if ((-1 < (int)local_4fc) && (local_508 != (ulonglong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_508,(ulonglong)(local_4fc & 0x7fffffff) * 0xc,
                   puVar31,uVar37);
        puVar31 = local_4c8;
      }
      local_508 = (ulonglong *)0x0;
      local_4fc = 0x80000000;
      local_4c0 = 0;
      if ((-1 < local_4bc) && (puVar31 != (ulonglong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,puVar31);
      }
      puVar27 = local_268;
      uVar34 = (ulonglong)(int)local_260;
      local_res18 = local_260;
      if ((int)local_260 < 2) goto LAB_14533fa10;
      puVar32 = (undefined4 *)(local_268 + uVar34 * 0x38 + -0x34);
      do {
        iVar19 = FUN_144ff6300(param_5,uVar34 & 0xffffffff);
        lVar35 = (longlong)iVar19 * 0x38;
        uVar37 = *(undefined4 *)(puVar27 + lVar35 + 4);
        uVar6 = *(undefined4 *)(puVar27 + lVar35);
        uVar7 = *(undefined4 *)(puVar27 + lVar35 + 0xc);
        uVar8 = *(undefined4 *)(puVar27 + lVar35 + 0x10);
        uVar9 = *(undefined4 *)(puVar27 + lVar35 + 8);
        uVar10 = *(undefined4 *)(puVar27 + lVar35 + 0x14);
        uVar11 = *(undefined4 *)(puVar27 + lVar35 + 0x18);
        *(undefined4 *)(puVar27 + lVar35) = puVar32[-1];
        *(undefined4 *)(puVar27 + lVar35 + 0xc) = puVar32[2];
        *(undefined4 *)(puVar27 + lVar35 + 4) = *puVar32;
        *(undefined4 *)(puVar27 + lVar35 + 0x10) = puVar32[3];
        *(undefined4 *)(puVar27 + lVar35 + 8) = puVar32[1];
        *(undefined4 *)(puVar27 + lVar35 + 0x14) = puVar32[4];
        *(undefined4 *)(puVar27 + lVar35 + 0x18) = puVar32[5];
        *puVar32 = uVar37;
        local_res18 = local_res18 - 1;
        uVar34 = (ulonglong)local_res18;
        puVar32[-1] = uVar6;
        puVar32[2] = uVar7;
        puVar32[3] = uVar8;
        puVar32[1] = uVar9;
        puVar32[4] = uVar10;
        puVar32[5] = uVar11;
        puVar32 = puVar32 + -0xe;
      } while (1 < (int)local_res18);
LAB_14533f9fd:
      uVar34 = (ulonglong)local_260;
LAB_14533fa10:
      puVar27 = local_470;
      iVar19 = 0;
      if (0 < (int)uVar34) {
        piVar21 = (int *)(local_268 + 0x14);
        do {
          uVar25 = iVar19 + 1;
          if ((int)uVar25 < (int)uVar34) {
            iVar29 = piVar21[-5];
            piVar22 = piVar21 + 0xd;
            iVar20 = piVar21[-4];
            iVar26 = piVar21[-3];
            do {
              if ((iVar29 == piVar22[-4]) && (piVar21[-2] == piVar22[-1])) {
                bVar12 = true;
              }
              else {
                bVar12 = false;
              }
              if ((iVar20 == piVar22[-3]) && (piVar21[-1] == *piVar22)) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              if ((iVar26 == piVar22[-2]) && (*piVar21 == piVar22[1])) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if ((piVar22[-1] == iVar29) || (piVar22[-4] == piVar21[-2])) {
                bVar16 = true;
              }
              else {
                bVar16 = false;
              }
              if ((*piVar22 == iVar20) || (piVar22[-3] == piVar21[-1])) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if ((piVar22[1] == iVar26) || (piVar22[-2] == *piVar21)) {
                bVar14 = true;
              }
              else {
                bVar14 = false;
              }
              if (((bVar12) && (((bVar13 && (bVar14)) || ((bVar15 && (bVar17)))))) ||
                 (((bVar16 && (bVar13)) && (bVar17)))) {
                iVar19 = piVar22[-4];
                if (iVar29 < piVar22[-4]) {
                  iVar19 = iVar29;
                }
                piVar21[-5] = iVar19;
                iVar19 = piVar22[-1];
                if (piVar22[-1] < piVar21[-2]) {
                  iVar19 = piVar21[-2];
                }
                piVar21[-2] = iVar19;
                iVar19 = piVar22[-3];
                if (iVar20 < piVar22[-3]) {
                  iVar19 = iVar20;
                }
                piVar21[-4] = iVar19;
                iVar19 = *piVar22;
                if (*piVar22 < piVar21[-1]) {
                  iVar19 = piVar21[-1];
                }
                piVar21[-1] = iVar19;
                iVar19 = piVar22[-2];
                if (iVar26 < piVar22[-2]) {
                  iVar19 = iVar26;
                }
                piVar21[-3] = iVar19;
                iVar19 = piVar22[1];
                if (piVar22[1] < *piVar21) {
                  iVar19 = *piVar21;
                }
                *piVar21 = iVar19;
                FUN_14533dbf0();
                local_260 = local_260 - 1;
                uVar34 = (ulonglong)local_260;
                if (local_260 == uVar25) goto LAB_14533fa10;
                puVar27 = local_268 + (longlong)(int)uVar25 * 0x38;
                if (puVar27 == local_268 + (longlong)(int)local_260 * 0x38) goto LAB_14533fa10;
                if (puVar27 != (undefined1 *)0x0) {
                  FUN_14533db50(puVar27,local_268 + (longlong)(int)local_260 * 0x38);
                }
                FUN_14533dbf0();
                goto LAB_14533f9fd;
              }
              uVar34 = (ulonglong)local_260;
              uVar25 = uVar25 + 1;
              piVar22 = piVar22 + 0xe;
            } while ((int)uVar25 < (int)local_260);
          }
          iVar19 = iVar19 + 1;
          piVar21 = piVar21 + 0xe;
        } while (iVar19 < (int)uVar34);
      }
      uVar34 = (ulonglong)(int)local_468;
      if ((int)local_468 < 2) goto LAB_14533fbf5;
      puVar32 = (undefined4 *)(local_470 + uVar34 * 0x38 + -0x34);
      do {
        iVar19 = FUN_144ff6300(param_5,uVar34 & 0xffffffff);
        uVar25 = (int)uVar34 - 1;
        uVar34 = (ulonglong)uVar25;
        lVar35 = (longlong)iVar19 * 0x38;
        uVar37 = *(undefined4 *)(puVar27 + lVar35);
        uVar6 = *(undefined4 *)(puVar27 + lVar35 + 0xc);
        uVar7 = *(undefined4 *)(puVar27 + lVar35 + 4);
        uVar8 = *(undefined4 *)(puVar27 + lVar35 + 0x10);
        uVar9 = *(undefined4 *)(puVar27 + lVar35 + 8);
        uVar10 = *(undefined4 *)(puVar27 + lVar35 + 0x14);
        uVar11 = *(undefined4 *)(puVar27 + lVar35 + 0x18);
        *(undefined4 *)(puVar27 + lVar35) = puVar32[-1];
        *(undefined4 *)(puVar27 + lVar35 + 0xc) = puVar32[2];
        *(undefined4 *)(puVar27 + lVar35 + 4) = *puVar32;
        *(undefined4 *)(puVar27 + lVar35 + 0x10) = puVar32[3];
        *(undefined4 *)(puVar27 + lVar35 + 8) = puVar32[1];
        *(undefined4 *)(puVar27 + lVar35 + 0x14) = puVar32[4];
        *(undefined4 *)(puVar27 + lVar35 + 0x18) = puVar32[5];
        puVar32[-1] = uVar37;
        puVar32[2] = uVar6;
        *puVar32 = uVar7;
        puVar32[3] = uVar8;
        puVar32[1] = uVar9;
        puVar32[4] = uVar10;
        puVar32[5] = uVar11;
        puVar32 = puVar32 + -0xe;
      } while (1 < (int)uVar25);
LAB_14533fbf1:
      uVar34 = (ulonglong)local_468;
LAB_14533fbf5:
      local_res18 = 0;
      uVar25 = (uint)uVar34;
      if (0 < (int)uVar25) {
        piVar21 = (int *)(local_470 + 0x14);
        do {
          uVar28 = local_res18 + 1;
          if ((int)uVar28 < (int)uVar25) {
            iVar19 = piVar21[-5];
            piVar22 = piVar21 + 0xd;
            iVar29 = piVar21[-4];
            iVar20 = piVar21[-3];
            do {
              bVar12 = true;
              if ((iVar19 == piVar22[-4]) && (piVar21[-2] == piVar22[-1])) {
                bVar13 = true;
              }
              else {
                bVar13 = false;
              }
              if ((iVar29 != piVar22[-3]) || (piVar21[-1] != *piVar22)) {
                bVar12 = false;
              }
              if ((iVar20 == piVar22[-2]) && (*piVar21 == piVar22[1])) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if ((piVar22[-1] == iVar19) || (piVar22[-4] == piVar21[-2])) {
                bVar16 = true;
              }
              else {
                bVar16 = false;
              }
              if ((*piVar22 == iVar29) || (piVar22[-3] == piVar21[-1])) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if ((piVar22[1] == piVar21[-3]) || (piVar22[-2] == *piVar21)) {
                bVar14 = true;
              }
              else {
                bVar14 = false;
              }
              if (((bVar13) && (((bVar12 && (bVar14)) || ((bVar15 && (bVar17)))))) ||
                 (((bVar16 && (bVar12)) && (bVar17)))) {
                iVar20 = piVar22[-4];
                if (iVar19 < piVar22[-4]) {
                  iVar20 = iVar19;
                }
                piVar21[-5] = iVar20;
                iVar19 = piVar22[-1];
                if (piVar22[-1] < piVar21[-2]) {
                  iVar19 = piVar21[-2];
                }
                piVar21[-2] = iVar19;
                iVar19 = piVar22[-3];
                if (iVar29 < piVar22[-3]) {
                  iVar19 = iVar29;
                }
                piVar21[-4] = iVar19;
                iVar19 = *piVar22;
                if (*piVar22 < piVar21[-1]) {
                  iVar19 = piVar21[-1];
                }
                piVar21[-1] = iVar19;
                iVar19 = piVar22[-2];
                if (piVar21[-3] < piVar22[-2]) {
                  iVar19 = piVar21[-3];
                }
                piVar21[-3] = iVar19;
                iVar19 = piVar22[1];
                if (piVar22[1] < *piVar21) {
                  iVar19 = *piVar21;
                }
                *piVar21 = iVar19;
                FUN_14533dbf0();
                local_468 = local_468 - 1;
                uVar34 = (ulonglong)local_468;
                if (local_468 == uVar28) goto LAB_14533fbf5;
                puVar27 = local_470 + (longlong)(int)uVar28 * 0x38;
                if (puVar27 == local_470 + (longlong)(int)local_468 * 0x38) goto LAB_14533fbf5;
                if (puVar27 != (undefined1 *)0x0) {
                  FUN_14533db50(puVar27,local_470 + (longlong)(int)local_468 * 0x38);
                }
                FUN_14533dbf0();
                goto LAB_14533fbf1;
              }
              iVar20 = piVar21[-3];
              uVar28 = uVar28 + 1;
              piVar22 = piVar22 + 0xe;
            } while ((int)uVar28 < (int)uVar25);
          }
          local_res18 = local_res18 + 1;
          piVar21 = piVar21 + 0xe;
        } while ((int)local_res18 < (int)uVar25);
      }
      iVar29 = local_260 + uVar25;
      lVar35 = param_6[1];
      iVar19 = (int)lVar35 + iVar29;
      if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar19) {
        FUN_145341710(param_6,&PTR_vftable_14c6e47a0);
        uVar25 = local_468;
      }
      puVar32 = (undefined4 *)((longlong)(int)lVar35 * 0x38 + *param_6);
      if (puVar32 != puVar32 + (longlong)iVar29 * 0xe) {
        puVar23 = puVar32 + 0xd;
        do {
          if (puVar23 + -0xd != (undefined4 *)0x0) {
            *puVar23 = 0x80000000;
            *(undefined8 *)(puVar23 + -3) = 0;
            puVar23[-1] = 0;
            puVar23[-0xd] = 0;
            *(undefined8 *)(puVar23 + -0xc) = 0;
            puVar23[-7] = 0;
            *(undefined8 *)(puVar23 + -10) = 0xffffffffffffffff;
            puVar23[-8] = 0xffffffff;
            puVar23[-6] = 0xffffffff;
          }
          puVar24 = puVar23 + 1;
          puVar23 = puVar23 + 0xe;
          uVar25 = local_468;
        } while (puVar24 != puVar32 + (longlong)iVar29 * 0xe);
      }
      iVar29 = 0;
      *(int *)(param_6 + 1) = iVar19;
      if (0 < (int)local_260) {
        puVar23 = puVar32 + 1;
        do {
          iVar29 = iVar29 + 1;
          puVar24 = (undefined4 *)(local_268 + (-4 - (longlong)puVar32) + (longlong)puVar23);
          puVar23[-1] = *puVar24;
          puVar23[2] = puVar24[3];
          *puVar23 = puVar24[1];
          puVar23[3] = puVar24[4];
          puVar23[1] = puVar24[2];
          puVar23[4] = puVar24[5];
          puVar23[5] = puVar24[6];
          puVar23 = puVar23 + 0xe;
          uVar25 = local_468;
        } while (iVar29 < (int)local_260);
      }
      iVar19 = 0;
      if (0 < (int)uVar25) {
        puVar23 = puVar32 + (longlong)(int)local_260 * 0xe + 1;
        do {
          iVar19 = iVar19 + 1;
          puVar24 = (undefined4 *)
                    (local_470 + (-4 - (longlong)(puVar32 + (longlong)(int)local_260 * 0xe)) +
                    (longlong)puVar23);
          puVar23[-1] = *puVar24;
          puVar23[2] = puVar24[3];
          *puVar23 = puVar24[1];
          puVar23[3] = puVar24[4];
          puVar23[1] = puVar24[2];
          puVar23[4] = puVar24[5];
          puVar23[5] = puVar24[6];
          puVar23 = puVar23 + 0xe;
          uVar25 = local_468;
        } while (iVar19 < (int)local_468);
      }
      iVar19 = (param_1[4] - param_1[1]) * (param_1[5] - param_1[2]);
      if (0 < (int)*(uint *)(param_6 + 1)) {
        piVar21 = (int *)*param_6;
        uVar34 = (ulonglong)*(uint *)(param_6 + 1);
        do {
          piVar22 = piVar21 + 3;
          iVar19 = *piVar21;
          piVar1 = piVar21 + 4;
          piVar2 = piVar21 + 1;
          piVar21 = piVar21 + 0xe;
          iVar19 = (*piVar1 - *piVar2) * (*piVar22 - iVar19);
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      FUN_145340d40(param_6,param_7,
                    CONCAT31((int3)((uint)iVar19 >> 8),*(char *)(param_4 + 8) != '\0'));
      puVar18 = local_470;
      puVar27 = local_470 + (longlong)(int)uVar25 * 0x38;
      while (puVar27 != puVar18) {
        puVar27 = puVar27 + -0x38;
        FUN_14533dbf0(puVar27);
      }
      local_468 = 0;
      if ((-1 < (int)local_464) && (local_470 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_470,(ulonglong)(local_464 & 0x7fffffff) * 0x38);
      }
      puVar18 = local_268;
      local_470 = (undefined1 *)0x0;
      puVar27 = local_268 + (longlong)(int)local_260 * 0x38;
      local_464 = 0x80000000;
      while (puVar27 != puVar18) {
        puVar27 = puVar27 + -0x38;
        FUN_14533dbf0(puVar27);
      }
      local_260 = 0;
      if ((-1 < (int)local_25c) && (local_268 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_268,(ulonglong)(local_25c & 0x7fffffff) * 0x38);
      }
      return;
    }
  } while( true );
}



// FUNCTION 145340210 FUN_145340210 body=567 status=ok
// SIG undefined FUN_145340210(void)

void FUN_145340210(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  
  do {
    bVar7 = false;
    iVar15 = (int)param_1[1] + -1;
    bVar13 = false;
    lVar18 = (longlong)iVar15;
    if (iVar15 < 0) {
      return;
    }
    do {
      piVar4 = *(int **)(*param_1 + lVar18 * 8);
      if (-1 < piVar4[7]) {
        plVar1 = param_1 + 6;
        iVar15 = 0;
        *(undefined4 *)(param_1 + 7) = 0;
        if ((longlong *)(piVar4 + 10) != plVar1) {
          iVar15 = piVar4[0xc];
          lVar16 = *(longlong *)(piVar4 + 10);
          if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < iVar15) {
            FUN_145341a20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar15);
          }
          FUN_144b3d470(*plVar1,lVar16,(longlong)iVar15 * 8);
          *(int *)(param_1 + 7) = iVar15;
        }
        iVar15 = iVar15 + -1;
        lVar16 = (longlong)iVar15;
        if (-1 < iVar15) {
          do {
            lVar5 = *plVar1;
            puVar2 = (undefined8 *)(lVar5 + lVar16 * 8);
            if (*(int *)(*(longlong *)(lVar5 + lVar16 * 8) + 0x18) != piVar4[6]) {
              lVar14 = param_1[7];
              iVar17 = (int)lVar14 + -1;
              *(int *)(param_1 + 7) = iVar17;
              if ((iVar17 != iVar15) &&
                 (puVar3 = (undefined8 *)(lVar5 + ((longlong)(int)lVar14 + -1) * 8),
                 puVar2 != puVar3)) {
                *puVar2 = *puVar3;
              }
            }
            iVar15 = iVar15 + -1;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
        }
        iVar15 = 0;
        bVar7 = bVar13;
        if (0 < (int)param_1[7]) {
          do {
            piVar6 = *(int **)(*plVar1 + (longlong)iVar15 * 8);
            if ((*piVar4 == *piVar6) && (piVar4[3] == piVar6[3])) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if ((piVar4[1] == piVar6[1]) && (piVar4[4] == piVar6[4])) {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
            if ((piVar4[2] == piVar6[2]) && (piVar4[5] == piVar6[5])) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            if ((piVar6[3] == *piVar4) || (*piVar6 == piVar4[3])) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if ((piVar6[4] == piVar4[1]) || (piVar6[1] == piVar4[4])) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            if ((piVar6[5] == piVar4[2]) || (piVar6[2] == piVar4[5])) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            if (((bVar7) && (((bVar11 && (bVar8)) || ((bVar9 && (bVar12)))))) ||
               (((bVar7 = bVar13, bVar10 && (bVar11)) && (bVar12)))) {
              FUN_145340450(param_1,piVar4);
              iVar15 = (int)param_1[7];
              bVar7 = true;
            }
            iVar15 = iVar15 + 1;
            bVar13 = bVar7;
          } while (iVar15 < (int)param_1[7]);
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  } while (bVar7);
  return;
}



// FUNCTION 145340450 FUN_145340450 body=516 status=ok
// SIG undefined FUN_145340450(void)

int * FUN_145340450(longlong param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  piVar7 = (int *)FUN_14533e160();
  iVar9 = *param_3;
  if (*param_2 < *param_3) {
    iVar9 = *param_2;
  }
  *piVar7 = iVar9;
  iVar9 = param_3[3];
  if (param_3[3] < param_2[3]) {
    iVar9 = param_2[3];
  }
  piVar7[3] = iVar9;
  iVar9 = param_3[1];
  if (param_2[1] < param_3[1]) {
    iVar9 = param_2[1];
  }
  piVar7[1] = iVar9;
  iVar9 = param_3[4];
  if (param_3[4] < param_2[4]) {
    iVar9 = param_2[4];
  }
  piVar7[4] = iVar9;
  iVar9 = param_3[2];
  if (param_2[2] < param_3[2]) {
    iVar9 = param_2[2];
  }
  piVar7[2] = iVar9;
  iVar9 = param_3[5];
  if (param_3[5] < param_2[5]) {
    iVar9 = param_2[5];
  }
  piVar7[5] = iVar9;
  piVar7[6] = param_2[6];
  FUN_1453410c0(param_2,param_3,piVar7 + 10);
  iVar9 = 0;
  if (0 < piVar7[0xc]) {
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar10 + *(longlong *)(piVar7 + 10));
      iVar6 = 0;
      iVar11 = *(int *)(lVar4 + 0x30) + -1;
      lVar12 = (longlong)iVar11;
      if (-1 < iVar11) {
        do {
          piVar5 = *(int **)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8);
          if ((piVar5 == param_2) || (piVar5 == param_3)) {
            if (iVar6 == 0) {
              *(int **)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8) = piVar7;
              iVar6 = 1;
            }
            else {
              iVar3 = *(int *)(lVar4 + 0x30);
              iVar8 = iVar3 + -1;
              *(int *)(lVar4 + 0x30) = iVar8;
              if (iVar8 != iVar11) {
                puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x28) + ((longlong)iVar3 + -1) * 8);
                puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar12 * 8);
                if (puVar1 != puVar2) {
                  *puVar1 = *puVar2;
                }
              }
              iVar6 = iVar6 + 1;
              if (iVar6 == 2) break;
            }
          }
          iVar11 = iVar11 + -1;
          lVar12 = lVar12 + -1;
        } while (-1 < lVar12);
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar9 < piVar7[0xc]);
  }
  param_2[0xc] = 0;
  param_3[0xc] = 0;
  param_2[7] = -1;
  iVar9 = *(int *)(param_1 + 0x18) + 1;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar9) {
    FUN_145044990(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  *(int *)(param_1 + 0x18) = iVar9;
  param_3[7] = -1;
  iVar9 = *(int *)(param_1 + 0x18) + 1;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar9) {
    FUN_145044990(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_3;
  }
  *(int *)(param_1 + 0x18) = iVar9;
  piVar7[7] = *(int *)(param_1 + 0x70);
  return piVar7;
}



// FUNCTION 145340660 FUN_145340660 body=1755 status=ok
// SIG undefined FUN_145340660(void)

void FUN_145340660(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong *plVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  int local_res8;
  longlong local_58;
  undefined8 local_50 [2];
  
  plVar13 = param_5;
  iVar17 = 0;
  if (0 < (int)param_5[1]) {
    lVar22 = 0;
    do {
      iVar21 = 0;
      lVar18 = *(longlong *)(lVar22 + *param_5);
      iVar19 = *(int *)(lVar18 + 0x30) + -1;
      lVar20 = (longlong)iVar19;
      if (-1 < iVar19) {
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar18 + 0x28) + lVar20 * 8);
          if ((lVar6 == param_2) || (lVar6 == param_3)) {
            iVar5 = *(int *)(lVar18 + 0x30);
            iVar14 = iVar5 + -1;
            *(int *)(lVar18 + 0x30) = iVar14;
            if (iVar14 != iVar19) {
              puVar2 = (undefined8 *)(*(longlong *)(lVar18 + 0x28) + ((longlong)iVar5 + -1) * 8);
              puVar3 = (undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar20 * 8);
              if (puVar3 != puVar2) {
                *puVar3 = *puVar2;
              }
            }
            iVar21 = iVar21 + 1;
            if (iVar21 == 2) break;
          }
          iVar19 = iVar19 + -1;
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
      iVar17 = iVar17 + 1;
      lVar22 = lVar22 + 8;
    } while (iVar17 < (int)param_5[1]);
  }
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
  iVar17 = (int)param_1[3] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar17) {
    FUN_145044990(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar17);
  }
  plVar4 = (longlong *)(param_1[2] + (longlong)(int)param_1[3] * 8);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_2;
  }
  *(int *)(param_1 + 3) = iVar17;
  *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
  iVar17 = (int)param_1[3] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar17) {
    FUN_145044990(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar17);
  }
  plVar4 = (longlong *)(param_1[2] + (longlong)(int)param_1[3] * 8);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_3;
  }
  *(int *)(param_1 + 3) = iVar17;
  plVar4 = param_1 + 0xd;
  plVar1 = param_1 + 0xc;
  *(int *)plVar4 = 0;
  if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < (int)param_4[1]) {
    FUN_145044990(plVar1,&PTR_vftable_14c6e47a0);
  }
  param_5._0_4_ = 0;
  if (0 < (int)param_4[1]) {
    local_58 = 0;
    do {
      if ((int)param_1[3] == 0) {
        local_50[0] = 0x38;
        piVar15 = (int *)(*DAT_14c787670)(0,local_50);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(piVar15,&DAT_149c224f8);
        }
        if (piVar15 != (int *)0x0) {
          lVar22 = param_1[0xe];
          piVar15[10] = 0;
          piVar15[0xb] = 0;
          piVar15[0xc] = 0;
          piVar15[0xd] = -0x80000000;
          piVar15[0] = 0;
          piVar15[1] = 0;
          piVar15[3] = -1;
          piVar15[4] = -1;
          piVar15[2] = 0;
          piVar15[5] = -1;
          piVar15[7] = (int)lVar22;
          piVar15[6] = 0;
        }
        piVar15[8] = (int)param_1[1];
        iVar17 = (int)param_1[1] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar17) {
          FUN_145044990(param_1,&PTR_vftable_14c6e47a0);
        }
        puVar2 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = piVar15;
        }
        *(int *)(param_1 + 1) = iVar17;
      }
      else {
        piVar15 = *(int **)(param_1[2] + -8 + (longlong)(int)param_1[3] * 8);
        piVar15[7] = (int)param_1[0xe];
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      }
      piVar16 = (int *)(*param_4 + local_58);
      *piVar15 = *piVar16;
      piVar15[3] = piVar16[3];
      piVar15[1] = piVar16[1];
      piVar15[4] = piVar16[4];
      piVar15[2] = piVar16[2];
      piVar15[5] = piVar16[5];
      piVar15[6] = piVar16[6];
      iVar17 = (int)*plVar4 + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < iVar17) {
        FUN_145044990(plVar1,&PTR_vftable_14c6e47a0);
      }
      puVar2 = (undefined8 *)(*plVar1 + (longlong)(int)*plVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = piVar15;
      }
      iVar19 = 0;
      *(int *)plVar4 = iVar17;
      if (0 < (int)plVar13[1]) {
        lVar22 = 0;
        do {
          piVar16 = *(int **)(lVar22 + *plVar13);
          if ((*piVar15 < piVar16[3]) && (*piVar16 < piVar15[3])) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((piVar15[1] < piVar16[4]) && (piVar16[1] < piVar15[4])) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((piVar15[2] < piVar16[5]) && (piVar16[2] < piVar15[5])) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((piVar16[3] == *piVar15) || (*piVar16 == piVar15[3])) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          if ((piVar16[4] == piVar15[1]) || (piVar16[1] == piVar15[4])) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if ((piVar16[5] == piVar15[2]) || (piVar16[2] == piVar15[5])) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (((bVar7) && (((bVar8 && (bVar9)) || ((bVar10 && (bVar11)))))) ||
             (((bVar12 && (bVar8)) && (bVar11)))) {
            iVar17 = piVar15[0xc];
            lVar18 = *plVar13;
            if ((int)(piVar15[0xd] & 0x7fffffffU) < iVar17 + 1) {
              FUN_145044990(piVar15 + 10,&PTR_vftable_14c6e47a0);
            }
            puVar2 = (undefined8 *)(*(longlong *)(piVar15 + 10) + (longlong)piVar15[0xc] * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = *(undefined8 *)(lVar18 + lVar22);
            }
            piVar15[0xc] = iVar17 + 1;
            lVar18 = *(longlong *)(*plVar13 + lVar22);
            iVar17 = *(int *)(lVar18 + 0x30) + 1;
            if ((int)(*(uint *)(lVar18 + 0x34) & 0x7fffffff) < iVar17) {
              FUN_145044990(lVar18 + 0x28,&PTR_vftable_14c6e47a0);
            }
            puVar2 = (undefined8 *)
                     (*(longlong *)(lVar18 + 0x28) + (longlong)*(int *)(lVar18 + 0x30) * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = piVar15;
            }
            *(int *)(lVar18 + 0x30) = iVar17;
          }
          iVar19 = iVar19 + 1;
          lVar22 = lVar22 + 8;
        } while (iVar19 < (int)plVar13[1]);
      }
      local_58 = local_58 + 0x38;
      param_5._0_4_ = (int)param_5 + 1;
    } while ((int)param_5 < (int)param_4[1]);
  }
  iVar17 = (int)param_1[0xd];
  if (0 < iVar17) {
    lVar22 = 0;
    local_res8 = 1;
    do {
      lVar18 = lVar22;
      iVar19 = local_res8;
      if (local_res8 < iVar17) {
        do {
          lVar18 = lVar18 + 8;
          piVar15 = *(int **)(*plVar1 + lVar18);
          piVar16 = *(int **)(*plVar1 + lVar22);
          if ((*piVar16 < piVar15[3]) && (*piVar15 < piVar16[3])) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((piVar16[1] < piVar15[4]) && (piVar15[1] < piVar16[4])) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((piVar16[2] < piVar15[5]) && (piVar15[2] < piVar16[5])) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((piVar15[3] == *piVar16) || (*piVar15 == piVar16[3])) {
            bVar12 = true;
          }
          else {
            bVar12 = false;
          }
          if ((piVar15[4] == piVar16[1]) || (piVar15[1] == piVar16[4])) {
            bVar10 = true;
          }
          else {
            bVar10 = false;
          }
          if ((piVar15[5] == piVar16[2]) || (piVar15[2] == piVar16[5])) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (((bVar7) && (((bVar8 && (bVar9)) || ((bVar10 && (bVar11)))))) ||
             (((bVar12 && (bVar8)) && (bVar11)))) {
            lVar20 = *plVar1;
            lVar6 = *(longlong *)(lVar20 + lVar22);
            iVar17 = *(int *)(lVar6 + 0x30) + 1;
            if ((int)(*(uint *)(lVar6 + 0x34) & 0x7fffffff) < iVar17) {
              FUN_145044990(lVar6 + 0x28,&PTR_vftable_14c6e47a0);
            }
            puVar2 = (undefined8 *)
                     (*(longlong *)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x30) * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = *(undefined8 *)(lVar20 + lVar18);
            }
            *(int *)(lVar6 + 0x30) = iVar17;
            lVar20 = *plVar1;
            lVar6 = *(longlong *)(lVar20 + lVar18);
            iVar17 = *(int *)(lVar6 + 0x30) + 1;
            if ((int)(*(uint *)(lVar6 + 0x34) & 0x7fffffff) < iVar17) {
              FUN_145044990(lVar6 + 0x28,&PTR_vftable_14c6e47a0);
            }
            puVar2 = (undefined8 *)
                     (*(longlong *)(lVar6 + 0x28) + (longlong)*(int *)(lVar6 + 0x30) * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = *(undefined8 *)(lVar20 + lVar22);
            }
            *(int *)(lVar6 + 0x30) = iVar17;
          }
          iVar19 = iVar19 + 1;
          iVar17 = (int)param_1[0xd];
        } while (iVar19 < iVar17);
      }
      local_res8 = local_res8 + 1;
      lVar22 = lVar22 + 8;
    } while (local_res8 <= iVar17);
  }
  return;
}



// FUNCTION 145340d40 FUN_145340d40 body=884 status=ok
// SIG undefined FUN_145340d40(void)

ulonglong FUN_145340d40(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  uint local_res18;
  longlong local_res20;
  
  uVar10 = 0;
  if (param_3 == '\0') {
    lVar15 = (longlong)(int)param_1[1];
    local_res18 = 0;
    iVar14 = 0;
    if (0 < lVar15) {
      local_res20 = 1;
      lVar13 = lVar15;
      uVar17 = uVar10;
      do {
        bVar8 = false;
        bVar3 = false;
        if (0 < (longlong)*(int *)(param_2 + 1)) {
          lVar1 = *param_1;
          puVar18 = (undefined8 *)*param_2;
          lVar16 = (longlong)*(int *)(param_2 + 1);
          do {
            piVar12 = (int *)*puVar18;
            if ((piVar12[3] <= *(int *)(uVar17 + lVar1)) ||
               (iVar14 = 1, *(int *)(uVar17 + 0xc + lVar1) <= *piVar12)) {
              iVar14 = 0;
            }
            if ((piVar12[4] <= *(int *)(uVar17 + 4 + lVar1)) ||
               (bVar2 = true, *(int *)(uVar17 + 0x10 + lVar1) <= piVar12[1])) {
              bVar2 = bVar3;
            }
            if ((piVar12[5] <= *(int *)(uVar17 + 8 + lVar1)) ||
               (bVar5 = true, *(int *)(uVar17 + 0x14 + lVar1) <= piVar12[2])) {
              bVar5 = bVar3;
            }
            if ((piVar12[3] == *(int *)(uVar17 + lVar1)) ||
               (bVar9 = bVar8, *piVar12 == *(int *)(uVar17 + 0xc + lVar1))) {
              bVar9 = true;
            }
            if ((piVar12[4] == *(int *)(uVar17 + 4 + lVar1)) ||
               (bVar6 = bVar8, piVar12[1] == *(int *)(uVar17 + 0x10 + lVar1))) {
              bVar6 = true;
            }
            if ((piVar12[5] == *(int *)(uVar17 + 8 + lVar1)) ||
               (bVar7 = bVar8, piVar12[2] == *(int *)(uVar17 + 0x14 + lVar1))) {
              bVar7 = true;
            }
            if (((iVar14 != 0) && (((bVar2 && (bVar7)) || ((bVar6 && (bVar5)))))) ||
               (((bVar9 && (bVar2)) && (bVar5)))) {
              local_res18 = local_res18 + 1;
            }
            uVar10 = (ulonglong)local_res18;
            puVar18 = puVar18 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (local_res20 < lVar15) {
          lVar1 = *param_1;
          iVar14 = *(int *)(uVar17 + 4 + lVar1);
          piVar12 = (int *)(lVar1 + 0x48 + uVar17);
          lVar16 = lVar15 - local_res20;
          do {
            if ((piVar12[-1] <= *(int *)(uVar17 + lVar1)) ||
               (bVar2 = true, *(int *)(uVar17 + 0xc + lVar1) <= piVar12[-4])) {
              bVar2 = bVar8;
            }
            if ((*piVar12 <= iVar14) ||
               (bVar5 = true, *(int *)(uVar17 + 0x10 + lVar1) <= piVar12[-3])) {
              bVar5 = bVar8;
            }
            if ((piVar12[1] <= *(int *)(uVar17 + 8 + lVar1)) ||
               (bVar9 = true, *(int *)(uVar17 + 0x14 + lVar1) <= piVar12[-2])) {
              bVar9 = bVar8;
            }
            if ((piVar12[-1] == *(int *)(uVar17 + lVar1)) ||
               (bVar6 = bVar3, piVar12[-4] == *(int *)(uVar17 + 0xc + lVar1))) {
              bVar6 = true;
            }
            if ((*piVar12 == iVar14) ||
               (bVar7 = bVar3, piVar12[-3] == *(int *)(uVar17 + 0x10 + lVar1))) {
              bVar7 = true;
            }
            if ((piVar12[1] == *(int *)(uVar17 + 8 + lVar1)) ||
               (bVar4 = bVar3, piVar12[-2] == *(int *)(uVar17 + 0x14 + lVar1))) {
              bVar4 = true;
            }
            if (((bVar2) && (((bVar5 && (bVar4)) || ((bVar7 && (bVar9)))))) ||
               (((bVar6 && (bVar5)) && (bVar9)))) {
              local_res18 = local_res18 + 1;
            }
            uVar10 = (ulonglong)local_res18;
            piVar12 = piVar12 + 0xe;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        iVar14 = (int)uVar10;
        local_res20 = local_res20 + 1;
        uVar17 = uVar17 + 0x38;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    return (ulonglong)(uint)(iVar14 * 2);
  }
  fVar19 = (float)(int)param_1[1];
  fVar20 = (float)*(int *)(param_2 + 1);
  uVar11 = (uint)((fVar19 * 9.191 - 12.795) + fVar20 * 1.9791 + fVar19 * 0.23439 * fVar19 +
                  fVar20 * 0.0031254 * fVar20 + 0.5);
  if (0 < (int)uVar11) {
    uVar10 = (ulonglong)uVar11;
  }
  return uVar10;
}



// FUNCTION 1453410c0 FUN_1453410c0 body=695 status=ok
// SIG undefined FUN_1453410c0(void)

void FUN_1453410c0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong local_res10;
  longlong local_res20;
  
  iVar9 = *(int *)(param_2 + 0x30);
  uVar14 = 0;
  iVar11 = *(int *)(param_1 + 0x30);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar7 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar6;
  }
  uVar13 = *(ulonglong *)(*(longlong *)(lVar6 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar13 + 8) != 0) {
    uVar13 = uVar14;
  }
  lVar7 = (longlong)(iVar11 + iVar9 + -2) * 0x10;
  local_res20 = lVar7;
  if (uVar13 == 0) {
    plVar8 = (longlong *)(*DAT_14c787670)(1,&local_res20,0x40);
  }
  else {
    local_res10 = lVar7 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(uVar13 + 0x28)) {
      plVar8 = *(longlong **)(uVar13 + 0x38);
      if (local_res10 + (longlong)plVar8 <= *(ulonglong *)(uVar13 + 0x40)) {
        *(ulonglong *)(uVar13 + 0x38) = local_res10 + (longlong)plVar8;
        goto LAB_1453411bf;
      }
    }
    plVar8 = (longlong *)FUN_144b454a0(uVar13,&local_res10);
  }
LAB_1453411bf:
  iVar9 = *(int *)(param_1 + 0x30);
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar10 = uVar14;
  uVar12 = uVar14;
  if (0 < (longlong)iVar9) {
    do {
      lVar2 = *(longlong *)(lVar6 + uVar10 * 8);
      if (lVar2 != param_2) {
        iVar11 = (int)uVar12;
        uVar12 = (ulonglong)(iVar11 + 1);
        plVar8[(longlong)iVar11 * 2] = lVar2;
        *(undefined4 *)(plVar8 + (longlong)iVar11 * 2 + 1) = *(undefined4 *)(lVar2 + 0x20);
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  iVar11 = (int)uVar12;
  iVar9 = *(int *)(param_2 + 0x30);
  lVar6 = *(longlong *)(param_2 + 0x28);
  uVar10 = uVar14;
  if (0 < (longlong)iVar9) {
    do {
      lVar2 = *(longlong *)(lVar6 + uVar10 * 8);
      if (lVar2 != param_1) {
        iVar11 = (int)uVar12;
        uVar12 = (ulonglong)(iVar11 + 1);
        plVar8[(longlong)iVar11 * 2] = lVar2;
        *(undefined4 *)(plVar8 + (longlong)iVar11 * 2 + 1) = *(undefined4 *)(lVar2 + 0x20);
      }
      iVar11 = (int)uVar12;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  if (0 < iVar11) {
    plVar15 = plVar8;
    do {
      lVar6 = *plVar15;
      uVar3 = *(undefined4 *)((longlong)plVar15 + 4);
      uVar4 = *(uint *)(plVar15 + 1);
      uVar5 = *(undefined4 *)((longlong)plVar15 + 0xc);
      uVar10 = uVar14;
      plVar1 = plVar15;
      if (uVar14 != 0) {
        do {
          if (*(uint *)(plVar1 + -1) <= uVar4) break;
          uVar10 = uVar10 - 1;
          *plVar1 = plVar1[-2];
          plVar1[1] = plVar1[-1];
          plVar1 = plVar1 + -2;
        } while (0 < (longlong)uVar10);
      }
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 2;
      plVar1 = plVar8 + uVar10 * 2;
      *(int *)plVar1 = (int)lVar6;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(uint *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    } while ((longlong)uVar14 < (longlong)iVar11);
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_145044990(param_3,&PTR_vftable_14c6e47a0);
    }
    plVar15 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 8);
    iVar9 = (int)param_3[1] + 1;
    if (plVar15 != (longlong *)0x0) {
      *plVar15 = *plVar8;
    }
    *(int *)(param_3 + 1) = iVar9;
    if (1 < iVar11) {
      uVar14 = (ulonglong)(iVar11 - 1);
      plVar15 = plVar8;
      do {
        plVar15 = plVar15 + 2;
        if (*plVar15 != *(longlong *)(*param_3 + -8 + (longlong)iVar9 * 8)) {
          plVar1 = (longlong *)(*param_3 + (longlong)iVar9 * 8);
          iVar9 = iVar9 + 1;
          if (plVar1 != (longlong *)0x0) {
            *plVar1 = *plVar15;
          }
          *(int *)(param_3 + 1) = iVar9;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (uVar13 == 0) {
    (*DAT_14c787678)(1,plVar8);
  }
  else {
    uVar14 = lVar7 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar13 + 0x28) < uVar14) ||
       ((longlong)plVar8 + uVar14 != *(longlong *)(uVar13 + 0x38))) {
      FUN_144be8550(uVar13,plVar8);
    }
    else {
      *(longlong **)(uVar13 + 0x38) = plVar8;
      if (*(longlong **)(uVar13 + 0x48) == plVar8) {
        FUN_144be8430(uVar13);
      }
    }
  }
  return;
}



// FUNCTION 145341380 FUN_145341380 body=134 status=ok
// SIG undefined FUN_145341380(void)

void FUN_145341380(int *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  int local_18;
  
  if (0 < (int)param_2) {
    uVar6 = (ulonglong)param_2;
    lVar8 = 0;
    piVar7 = param_1;
    do {
      uVar1 = *(undefined8 *)piVar7;
      iVar2 = piVar7[2];
      lVar5 = lVar8;
      if (0 < lVar8) {
        local_18 = (int)uVar1;
        piVar3 = piVar7;
        do {
          piVar4 = piVar3 + -3;
          if (*piVar4 <= local_18) break;
          lVar5 = lVar5 + -1;
          *(undefined8 *)piVar3 = *(undefined8 *)piVar4;
          piVar3[2] = piVar3[-1];
          piVar3 = piVar4;
        } while (0 < lVar5);
      }
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 3;
      *(undefined8 *)(param_1 + lVar5 * 3) = uVar1;
      param_1[lVar5 * 3 + 2] = iVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145341410 FUN_145341410 body=504 status=ok
// SIG undefined FUN_145341410(void)

ulonglong FUN_145341410(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar10 * 0x38;
  local_res20 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,
                                 *(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar6 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = (undefined4 *)(local_res20 + 0x34);
    puVar7 = (undefined4 *)((longlong)puVar6 + 0x34);
    puVar9 = puVar6;
    local_res18 = (ulonglong)uVar1;
    do {
      if ((undefined8 *)(puVar5 + -0xd) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -0xd) = *puVar9;
        puVar5[-0xb] = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(puVar5 + -10) = *(undefined8 *)(puVar7 + -10);
        puVar5[-8] = puVar7[-8];
        puVar5[-7] = puVar7[-7];
        puVar5[-6] = puVar7[-6];
        puVar5[-5] = puVar7[-5];
        *(undefined8 *)(puVar5 + -3) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x80000000;
        FUN_14533dae0(puVar7 + -3);
        *(undefined8 *)(puVar5 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar5[-1] = puVar7[-1];
        *puVar5 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
      }
      puVar5 = puVar5 + 0xe;
      puVar9 = puVar9 + 7;
      puVar7 = puVar7 + 0xe;
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
    local_res18 = 0;
    do {
      FUN_14533dbf0(puVar6);
      puVar6 = puVar6 + 7;
      uVar8 = uVar8 - 1;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  lVar3 = local_res20;
  uVar8 = uVar10 * 0x38 + 0x38;
  uVar11 = uVar10;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar11 = uVar11 + ((uVar10 - lVar4 >> 1) + lVar4 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 145341610 FUN_145341610 body=247 status=ok
// SIG undefined FUN_145341610(void)

void FUN_145341610(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145341710 FUN_145341710 body=528 status=ok
// SIG undefined FUN_145341710(void)

ulonglong FUN_145341710(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res20 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x38,&local_res18);
  uVar1 = (uint)param_1[1];
  local_res8 = (ulonglong)uVar1;
  puVar5 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined4 *)(local_res20 + 0x34);
    puVar6 = (undefined4 *)((longlong)puVar5 + 0x34);
    puVar9 = puVar5;
    do {
      if ((undefined8 *)(puVar4 + -0xd) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar4 + -0xd) = *puVar9;
        puVar4[-0xb] = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(puVar4 + -10) = *(undefined8 *)(puVar6 + -10);
        puVar4[-8] = puVar6[-8];
        puVar4[-7] = puVar6[-7];
        puVar4[-6] = puVar6[-6];
        puVar4[-5] = puVar6[-5];
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        FUN_14533dae0(puVar6 + -3);
        *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar6 + -3);
        puVar4[-1] = puVar6[-1];
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar6 + -3) = 0;
        *(undefined8 *)(puVar6 + -1) = 0;
      }
      puVar4 = puVar4 + 0xe;
      puVar9 = puVar9 + 7;
      puVar6 = puVar6 + 0xe;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    do {
      FUN_14533dbf0(puVar5);
      puVar5 = puVar5 + 7;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x38 + 0x38;
  uVar11 = uVar10;
  if (uVar8 <= local_res18) {
    local_res18 = local_res18 - 0x38;
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res18) {
      uVar10 = local_res18 + uVar10 * -0x38;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
      uVar8 = SUB168(ZEXT816(0x2492492492492493) * auVar2,0);
      uVar11 = uVar11 + ((uVar10 - lVar3 >> 1) + lVar3 >> 5);
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x38);
    *param_1 = local_res20;
    uVar8 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 145341920 FUN_145341920 body=247 status=ok
// SIG undefined FUN_145341920(void)

void FUN_145341920(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145341a20 FUN_145341a20 body=159 status=ok
// SIG undefined FUN_145341a20(void)

void FUN_145341a20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 145341ac0 FUN_145341ac0 body=49 status=ok
// SIG undefined FUN_145341ac0(void)

undefined8 * FUN_145341ac0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiCarverTree::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145341b00 FUN_145341b00 body=63 status=ok
// SIG undefined FUN_145341b00(void)

void FUN_145341b00(undefined8 *param_1)

{
  *param_1 = hkaiCarverTree::vftable;
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145341b40 FUN_145341b40 body=547 status=ok
// SIG undefined FUN_145341b40(void)

undefined4 * FUN_145341b40(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  undefined8 local_res18 [2];
  undefined1 local_48 [32];
  
  *(longlong **)(param_1 + 0x28) = param_3;
  *(longlong **)(param_1 + 0x30) = param_4;
  if ((int)param_3[1] == 0) {
LAB_145341c5d:
    if ((int)param_4[1] == 0) {
LAB_145341d48:
      *param_2 = 0;
      return param_2;
    }
    local_res18[0] = 0x20;
    lVar2 = (*DAT_14c787670)(0,local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar2,"hkcdDynamicAabbTree");
    }
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144fcd2c0(lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_145341beb;
    lVar4 = FUN_144fce650();
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      FUN_144fcd510(lVar2,local_res8,(int)param_4[1]);
      if (-1 < local_res8[0]) {
        iVar5 = 0;
        if (0 < (int)param_4[1]) {
          lVar2 = 0;
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar2 + *param_4) + 0x20);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
              FUN_144fcd550(*(undefined8 *)(param_1 + 0x20),local_48,iVar5);
            }
            iVar5 = iVar5 + 1;
            lVar2 = lVar2 + 8;
          } while (iVar5 < (int)param_4[1]);
        }
        goto LAB_145341d48;
      }
      goto LAB_145341beb;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    local_res18[0] = 0x20;
    lVar2 = (*DAT_14c787670)(0,local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar2,"hkcdDynamicAabbTree");
    }
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144fcd2c0(lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_145341beb;
    lVar4 = FUN_144fce650();
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      FUN_144fcd510(lVar2,local_res8,(int)param_3[1]);
      if (local_res8[0] < 0) goto LAB_145341beb;
      iVar5 = 0;
      if (0 < (int)param_3[1]) {
        lVar2 = 0;
        do {
          if ((*(longlong *)(lVar2 + *param_3) != 0) &&
             (plVar1 = *(longlong **)(*(longlong *)(lVar2 + *param_3) + 0x18),
             plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
            FUN_144fcd550(*(undefined8 *)(param_1 + 0x18),local_48,iVar5);
          }
          iVar5 = iVar5 + 1;
          lVar2 = lVar2 + 8;
        } while (iVar5 < (int)param_3[1]);
      }
      goto LAB_145341c5d;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
LAB_145341beb:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145341d70 FUN_145341d70 body=463 status=ok
// SIG undefined FUN_145341d70(void)

int * FUN_145341d70(longlong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  longlong local_58;
  int local_50;
  uint local_4c;
  undefined **local_48;
  longlong *local_40;
  int *local_38;
  
  lVar4 = 0;
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_58 = 0;
    local_48 = AabbCollector::vftable;
    local_40 = &local_58;
    local_50 = 0;
    local_38 = local_res8;
    local_4c = 0x80000000;
    FUN_144fce4b0(*(longlong *)(param_1 + 0x20),param_3,&local_48);
    if (local_res8[0] < 0) {
      local_48 = hkcdAabbTreeQueries::AabbCollector::vftable;
      *param_2 = -0x7ffbfe00;
      local_50 = 0;
      if ((int)local_4c < 0) {
        return param_2;
      }
      if (local_58 == 0) {
        return param_2;
      }
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 2);
      return param_2;
    }
    lVar5 = (longlong)local_50;
    if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < local_50) {
      FUN_145342320(param_4,&PTR_vftable_14c6e47a0,lVar5);
    }
    local_res8[0] = 0;
    if (0 < lVar5) {
      do {
        lVar3 = param_4[1];
        plVar1 = (longlong *)(*param_4 + (longlong)(int)lVar3 * 8);
        if ((plVar1 != (longlong *)0x0) &&
           (lVar2 = *(longlong *)
                     (**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(local_58 + lVar4 * 4) * 8
                     ), *plVar1 = lVar2, lVar2 != 0)) {
          FUN_144b3d910();
        }
        lVar4 = lVar4 + 1;
        *(int *)(param_4 + 1) = (int)lVar3 + 1;
      } while (lVar4 < lVar5);
    }
    local_48 = hkcdAabbTreeQueries::AabbCollector::vftable;
    local_50 = 0;
    if ((-1 < (int)local_4c) && (local_58 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 2);
    }
  }
  *param_2 = local_res8[0];
  return param_2;
}



// FUNCTION 145341f40 FUN_145341f40 body=131 status=ok
// SIG undefined FUN_145341f40(void)

undefined1 FUN_145341f40(longlong param_1,float *param_2)

{
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18;
  
  local_40 = *(longlong *)(param_1 + 0x18);
  if (local_40 != 0) {
    local_28 = *param_2;
    fStack_24 = param_2[1];
    fStack_20 = param_2[2];
    fStack_1c = param_2[3];
    local_38 = *(undefined8 *)(param_1 + 0x28);
    local_48 = PointQuery::vftable;
    local_58 = local_28 + 0.01;
    fStack_54 = fStack_24 + 0.01;
    fStack_50 = fStack_20 + 0.01;
    fStack_4c = fStack_1c + 0.01;
    local_18 = 0;
    local_68 = local_28 - 0.01;
    fStack_64 = fStack_24 - 0.01;
    fStack_60 = fStack_20 - 0.01;
    fStack_5c = fStack_1c - 0.01;
    FUN_144fce4b0(local_40,&local_68,&local_48);
    return local_18;
  }
  return 0;
}



// FUNCTION 145341fd0 FUN_145341fd0 body=143 status=ok
// SIG undefined FUN_145341fd0(void)

undefined1 FUN_145341fd0(longlong param_1,float *param_2)

{
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18;
  
  local_50 = *(longlong *)(param_1 + 0x18);
  if (local_50 != 0) {
    local_38 = *param_2;
    fStack_34 = param_2[1];
    fStack_30 = param_2[2];
    fStack_2c = param_2[3];
    local_28 = param_2[4];
    fStack_24 = param_2[5];
    fStack_20 = param_2[6];
    fStack_1c = param_2[7];
    local_48 = *(undefined8 *)(param_1 + 0x28);
    local_58 = AabbQuery::vftable;
    local_68 = local_28 + 0.01;
    fStack_64 = fStack_24 + 0.01;
    fStack_60 = fStack_20 + 0.01;
    fStack_5c = fStack_1c + 0.01;
    local_18 = 0;
    local_78 = local_38 - 0.01;
    fStack_74 = fStack_34 - 0.01;
    fStack_70 = fStack_30 - 0.01;
    fStack_6c = fStack_2c - 0.01;
    FUN_144fce4b0(local_50,&local_78,&local_58);
    return local_18;
  }
  return 0;
}



// FUNCTION 145342060 FUN_145342060 body=130 status=ok
// SIG undefined FUN_145342060(void)

undefined8 * FUN_145342060(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiCarverTree::vftable;
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
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



// FUNCTION 1453420f0 FUN_1453420f0 body=135 status=ok
// SIG undefined FUN_1453420f0(void)

bool FUN_1453420f0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  byte local_res10 [24];
  byte *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  plVar2 = *(longlong **)
            (*(longlong *)(**(longlong **)(param_1 + 0x10) + (longlong)param_2 * 8) + 0x18);
  local_28 = local_res10;
  local_res10[0] = 0;
  local_res10[1] = 0;
  local_res10[2] = 0;
  local_res10[3] = 0;
  local_20 = 1;
  local_1c = 0x80000001;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x20,1,&local_28);
  if ((*local_28 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x30);
  FUN_144bf90d0(&local_28);
  return cVar1 == '\0';
}



// FUNCTION 145342180 FUN_145342180 body=71 status=ok
// SIG undefined FUN_145342180(void)

undefined8 * FUN_145342180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1453421d0 FUN_1453421d0 body=61 status=ok
// SIG undefined FUN_1453421d0(void)

bool FUN_1453421d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)
            (*(longlong *)(**(longlong **)(param_1 + 0x10) + (longlong)param_2 * 8) + 0x18);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1 + 0x20);
  if (iVar2 != 0) {
    *(char *)(param_1 + 0x40) = '\x01';
  }
  return *(char *)(param_1 + 0x40) == '\0';
}



// FUNCTION 145342210 FUN_145342210 body=71 status=ok
// SIG undefined FUN_145342210(void)

undefined8 * FUN_145342210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145342260 FUN_145342260 body=109 status=ok
// SIG undefined FUN_145342260(void)

uint FUN_145342260(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar2 + 8) + 1;
  if ((int)(*(uint *)(lVar2 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_1401f86b2(lVar2,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  lVar2 = plVar3[1];
  puVar1 = (undefined4 *)(*plVar3 + (longlong)(int)lVar2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(plVar3 + 1) = (int)lVar2 + 1;
  return ~**(uint **)(param_1 + 0x10) >> 0x1f;
}



// FUNCTION 1453422d0 FUN_1453422d0 body=71 status=ok
// SIG undefined FUN_1453422d0(void)

undefined8 * FUN_1453422d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145342320 FUN_145342320 body=310 status=ok
// SIG undefined FUN_145342320(void)

void FUN_145342320(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145342460 FUN_145342460 body=130 status=ok
// SIG undefined FUN_145342460(void)

void FUN_145342460(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 1453424f0 FUN_1453424f0 body=71 status=ok
// SIG undefined FUN_1453424f0(void)

undefined8 * FUN_1453424f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 145342540 FUN_145342540 body=708 status=ok
// SIG undefined FUN_145342540(void)

void FUN_145342540(longlong *param_1,float *param_2,int param_3,int param_4,int param_5,
                  float *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int local_28 [4];
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  *(float *)(param_1 + 2) = fVar4;
  *(float *)((longlong)param_1 + 0x14) = fVar5;
  *(float *)(param_1 + 3) = fVar6;
  *(float *)((longlong)param_1 + 0x1c) = fVar7;
  lVar14 = *(longlong *)(param_2 + 6);
  param_1[4] = *(longlong *)(param_2 + 4);
  param_1[5] = lVar14;
  fVar7 = *param_6;
  fVar8 = param_6[1];
  fVar9 = param_6[2];
  fVar22 = ABS(fVar7);
  fVar25 = ABS(fVar8);
  fVar26 = ABS(fVar9);
  auVar20._0_8_ = CONCAT44(fVar7,fVar7) & 0x7fffffff7fffffff;
  auVar20._8_4_ = fVar22;
  auVar20._12_4_ = fVar22;
  auVar19._0_8_ = CONCAT44(fVar8,fVar8) & 0x7fffffff7fffffff;
  auVar19._8_4_ = fVar25;
  auVar19._12_4_ = fVar25;
  auVar20 = maxps(auVar19,auVar20);
  local_28[0] = param_3;
  local_28[1] = param_4;
  auVar24._0_8_ = CONCAT44(fVar9,fVar9) & 0x7fffffff7fffffff;
  auVar24._8_4_ = fVar26;
  auVar24._12_4_ = fVar26;
  auVar20 = maxps(auVar24,auVar20);
  auVar17._4_4_ = -(uint)(auVar20._4_4_ <= fVar25);
  auVar17._0_4_ = -(uint)(auVar20._0_4_ <= fVar22);
  auVar17._8_4_ = -(uint)(auVar20._8_4_ <= fVar26);
  auVar17._12_4_ = -(uint)(auVar20._12_4_ <= ABS(param_6[3]));
  uVar10 = movmskps((int)param_6,auVar17);
  cVar1 = (&DAT_14998f5c0)[uVar10 & 7];
  *(int *)(param_1 + 0xb) = (int)cVar1;
  iVar16 = cVar1 + 1;
  iVar15 = cVar1 + 2;
  iVar16 = iVar16 + (iVar16 / 3 + (iVar16 >> 0x1f) +
                    (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  *(int *)(param_1 + 10) = iVar16;
  iVar15 = iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                    (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  local_28[2] = param_5;
  *(int *)((longlong)param_1 + 0x54) = iVar15;
  auVar23._0_4_ = *(float *)(param_1 + 4) - fVar4;
  auVar23._4_4_ = *(float *)((longlong)param_1 + 0x24) - fVar5;
  auVar23._8_4_ = *(float *)(param_1 + 5) - fVar6;
  auVar21._0_8_ = CONCAT44((float)param_4,(float)param_3);
  auVar21._8_4_ = (float)param_5;
  auVar21._12_4_ = 0x3f800000;
  iVar16 = local_28[iVar16];
  auVar23._12_4_ = uRam000000014c6dacac;
  auVar18._8_4_ = auVar21._8_4_;
  auVar18._0_8_ = auVar21._0_8_;
  auVar18._12_4_ = 0x3f800000;
  auVar20 = divps(auVar18,auVar23);
  auVar24 = divps(auVar23,auVar21);
  *(undefined1 (*) [16])(param_1 + 8) = auVar20;
  *(undefined1 (*) [16])(param_1 + 6) = auVar24;
  *(int *)((longlong)param_1 + 0x5c) = iVar16;
  *(int *)(param_1 + 0xc) = local_28[iVar15];
  *(int *)((longlong)param_1 + 100) = local_28[cVar1];
  plVar2 = (longlong *)*param_1;
  plVar13 = plVar2 + (longlong)(int)param_1[1] * 2;
  while (plVar13 != plVar2) {
    plVar12 = plVar13 + -2;
    *(undefined4 *)(plVar13 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar13 + -4)) && (*plVar12 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar12,
                 (ulonglong)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) * 0xc);
    }
    *plVar12 = 0;
    *(undefined4 *)((longlong)plVar13 + -4) = 0x80000000;
    plVar13 = plVar12;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar16 = *(int *)((longlong)param_1 + 0x5c) * (int)param_1[0xc];
  lVar14 = (longlong)iVar16;
  if (0 < iVar16) {
    FUN_145344c00(param_1,&PTR_vftable_14c6e47a0,lVar14);
  }
  iVar15 = (int)param_1[1];
  if (iVar15 < iVar16) {
    lVar3 = *param_1;
    *(int *)(param_1 + 1) = iVar16;
    for (puVar11 = (undefined8 *)((longlong)iVar15 * 0x10 + *param_1);
        puVar11 != (undefined8 *)(lVar14 * 0x10 + lVar3); puVar11 = puVar11 + 2) {
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0x80000000;
      }
    }
  }
  else if (iVar16 < iVar15) {
    lVar3 = *param_1;
    *(int *)(param_1 + 1) = iVar16;
    plVar2 = (longlong *)((longlong)iVar15 * 0x10 + *param_1);
    while (plVar2 != (longlong *)(lVar14 * 0x10 + lVar3)) {
      plVar13 = plVar2 + -2;
      *(undefined4 *)(plVar2 + -1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar13 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar13,
                   (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) * 0xc);
      }
      *plVar13 = 0;
      *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
      plVar2 = plVar13;
    }
  }
  return;
}



// FUNCTION 145342810 FUN_145342810 body=2114 status=ok
// SIG undefined FUN_145342810(void)

void FUN_145342810(longlong *param_1,longlong param_2,float *param_3,longlong *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  longlong *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined8 *puVar41;
  int *piVar42;
  int iVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  longlong lVar51;
  undefined1 (*pauVar52) [16];
  ulonglong uVar53;
  int iVar54;
  ulonglong uVar55;
  float fVar56;
  float fVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar65;
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  int iVar72;
  undefined8 local_188;
  undefined8 uStack_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  longlong local_168;
  undefined8 local_158;
  char *pcStack_150;
  undefined1 (*local_148) [16];
  float local_140;
  int local_13c;
  int local_138;
  int local_134;
  float local_128 [4];
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 (*local_f8) [16];
  undefined1 (*local_f0) [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar51 = (longlong)(int)param_1[10];
  lVar44 = (longlong)*(int *)((longlong)param_1 + 0x54);
  fVar4 = *(float *)((longlong)param_1 + lVar51 * 4 + 0x30);
  *(undefined4 *)((longlong)&local_158 + lVar51 * 4) = 0;
  fVar10 = *(float *)(param_1 + 6);
  fVar11 = *(float *)((longlong)param_1 + 0x34);
  fVar12 = *(float *)(param_1 + 7);
  fVar13 = *(float *)((longlong)param_1 + 0x3c);
  *(undefined4 *)((longlong)&local_158 + lVar44 * 4) = 0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_128[2] = 0.0;
  local_128[3] = 0.0;
  local_128[lVar51] = fVar4;
  lVar51 = (longlong)(int)param_1[0xb];
  local_188 = 0;
  uStack_180 = 0;
  *(undefined4 *)((longlong)&local_188 + lVar44 * 4) =
       *(undefined4 *)((longlong)param_1 + lVar44 * 4 + 0x30);
  uVar5 = *(undefined4 *)((longlong)param_1 + lVar51 * 4 + 0x30);
  *(undefined4 *)((longlong)&local_158 + lVar51 * 4) = 0;
  uVar26 = (uint)pcStack_150;
  pcStack_150 = (char *)(ulonglong)(uint)pcStack_150;
  iVar72 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  *(undefined4 *)((longlong)&local_108 + lVar51 * 4) = uVar5;
  local_110 = (longlong)*(int *)(param_2 + 0x30);
  local_16c = 0;
  fVar56 = (float)(int)local_158 * fVar10 + *(float *)(param_1 + 2);
  fVar60 = (float)local_158._4_4_ * fVar11 + *(float *)((longlong)param_1 + 0x14);
  fVar62 = (float)(int)uVar26 * fVar12 + *(float *)(param_1 + 3);
  fVar64 = fVar13 * 0.0 + *(float *)((longlong)param_1 + 0x1c);
  fVar4 = *param_3;
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  fVar16 = param_3[3];
  fVar17 = param_3[4];
  fVar18 = param_3[5];
  fVar19 = param_3[6];
  fVar20 = param_3[7];
  if (0 < local_110) {
    fVar31 = (float)local_108;
    fVar33 = local_108._4_4_;
    fVar34 = (float)uStack_100;
    fVar35 = uStack_100._4_4_;
    fVar22 = (float)local_188;
    fVar23 = local_188._4_4_;
    fVar24 = (float)uStack_180;
    fVar25 = uStack_180._4_4_;
    fVar27 = local_128[0];
    fVar28 = local_128[1];
    fVar29 = local_128[2];
    fVar30 = local_128[3];
    local_118 = 0;
    do {
      lVar51 = local_118;
      fVar36 = (float)(**(code **)(*param_4 + 8))(param_4,param_2,local_16c);
      local_140 = fVar36;
      if (fVar36 != -0.0) {
        lVar44 = *(longlong *)(param_2 + 0x18);
        lVar8 = *(longlong *)(param_2 + 0x28);
        local_f0 = (undefined1 (*) [16])((longlong)*(int *)(lVar51 + 4 + lVar8) * 0x10 + lVar44);
        local_f8 = (undefined1 (*) [16])((longlong)*(int *)(lVar51 + 8 + lVar8) * 0x10 + lVar44);
        pauVar52 = (undefined1 (*) [16])((longlong)*(int *)(lVar51 + lVar8) * 0x10 + lVar44);
        auVar59 = *local_f0;
        auVar68 = *local_f8;
        auVar58 = minps(*pauVar52,auVar59);
        local_148 = pauVar52;
        auVar67 = maxps(*pauVar52,auVar59);
        auVar59 = minps(auVar58,auVar68);
        auVar68 = maxps(auVar67,auVar68);
        iVar39 = *(int *)((longlong)param_1 + 0x5c);
        local_138 = iVar39;
        fVar57 = ((auVar59._0_4_ - param_3[4]) - *(float *)(param_1 + 2)) * *(float *)(param_1 + 8);
        fVar61 = ((auVar59._4_4_ - param_3[5]) - *(float *)((longlong)param_1 + 0x14)) *
                 *(float *)((longlong)param_1 + 0x44);
        fVar63 = ((auVar59._8_4_ - param_3[6]) - *(float *)(param_1 + 3)) * *(float *)(param_1 + 9);
        fVar65 = ((auVar59._12_4_ - param_3[7]) - *(float *)((longlong)param_1 + 0x1c)) *
                 *(float *)((longlong)param_1 + 0x4c);
        fVar66 = ((auVar68._0_4_ + *param_3) - *(float *)(param_1 + 2)) * *(float *)(param_1 + 8);
        fVar69 = ((auVar68._4_4_ + param_3[1]) - *(float *)((longlong)param_1 + 0x14)) *
                 *(float *)((longlong)param_1 + 0x44);
        fVar70 = ((auVar68._8_4_ + param_3[2]) - *(float *)(param_1 + 3)) * *(float *)(param_1 + 9);
        fVar71 = ((auVar68._12_4_ + param_3[3]) - *(float *)((longlong)param_1 + 0x1c)) *
                 *(float *)((longlong)param_1 + 0x4c);
        local_188 = CONCAT44((int)fVar61 ^ -(uint)(2.1474836e+09 <= fVar61),
                             (int)fVar57 ^ -(uint)(2.1474836e+09 <= fVar57));
        uStack_180 = CONCAT44((int)fVar65 ^ -(uint)(2.1474836e+09 <= fVar65),
                              (int)fVar63 ^ -(uint)(2.1474836e+09 <= fVar63));
        iVar48 = *(int *)((longlong)&local_188 + (longlong)*(int *)((longlong)param_1 + 0x54) * 4);
        iVar54 = *(int *)((longlong)&local_188 + (longlong)(int)param_1[10] * 4);
        iVar47 = *(int *)((longlong)&local_188 + (longlong)(int)param_1[0xb] * 4);
        iVar38 = 0;
        if (0 < iVar48) {
          iVar38 = iVar48;
        }
        local_13c = iVar38;
        iVar48 = 0;
        if (0 < iVar47) {
          iVar48 = iVar47;
        }
        local_170 = iVar48;
        local_188 = CONCAT44((int)fVar69 ^ -(uint)(2.1474836e+09 <= fVar69),
                             (int)fVar66 ^ -(uint)(2.1474836e+09 <= fVar66));
        uStack_180 = CONCAT44((int)fVar71 ^ -(uint)(2.1474836e+09 <= fVar71),
                              (int)fVar70 ^ -(uint)(2.1474836e+09 <= fVar70));
        iVar37 = *(int *)((longlong)&local_188 + (longlong)(int)param_1[10] * 4) + 1;
        iVar47 = iVar39;
        if (iVar37 < iVar39) {
          iVar47 = iVar37;
        }
        iVar37 = *(int *)((longlong)&local_188 + (longlong)*(int *)((longlong)param_1 + 0x54) * 4) +
                 1;
        local_134 = iVar47;
        local_178 = (int)param_1[0xc];
        if (iVar37 < (int)param_1[0xc]) {
          local_178 = iVar37;
        }
        iVar37 = *(int *)((longlong)&local_188 + (longlong)(int)param_1[0xb] * 4) + 1;
        local_174 = *(int *)((longlong)param_1 + 100);
        if (iVar37 < *(int *)((longlong)param_1 + 100)) {
          local_174 = iVar37;
        }
        iVar37 = 0;
        if (0 < iVar54) {
          iVar37 = iVar54;
        }
        iVar54 = local_178;
        iVar49 = local_174;
        if (iVar37 < iVar47) {
          do {
            fVar57 = (float)iVar37;
            if (iVar38 < iVar54) {
              local_168 = (longlong)(iVar39 * iVar38 + iVar37) << 4;
              local_188 = (longlong)iVar39 << 4;
              iVar50 = iVar38;
              do {
                local_108 = (longlong *)(*param_1 + local_168);
                fVar61 = (float)iVar50;
                lVar51 = (longlong)(int)local_108[1];
                if (0 < lVar51) {
                  piVar42 = (int *)*local_108;
                  do {
                    iVar39 = iVar49;
                    if ((int)fVar36 <= piVar42[2]) {
                      iVar54 = *piVar42;
                      iVar47 = iVar48;
                      if ((iVar54 <= iVar48) && (iVar47 = piVar42[1], piVar42[1] < iVar48)) {
                        iVar47 = iVar48;
                      }
                      iVar48 = iVar47;
                      if ((iVar49 <= piVar42[1]) && (iVar39 = iVar54, iVar49 < iVar54)) {
                        iVar39 = iVar49;
                      }
                    }
                    iVar49 = iVar39;
                    piVar42 = piVar42 + 3;
                    lVar51 = lVar51 + -1;
                  } while (lVar51 != 0);
                }
                iVar54 = -0x80000000;
                iVar39 = 0x7fffffff;
                local_128[0] = NAN;
                local_128[1] = -0.0;
                iVar47 = iVar50;
                if (iVar48 < iVar49) {
                  do {
                    lVar51 = 0;
                    puVar41 = (undefined8 *)
                              ((longlong)(iVar50 * *(int *)((longlong)param_1 + 0x5c) + iVar37) *
                               0x10 + *param_1);
                    iVar38 = *(int *)(puVar41 + 1);
                    if (0 < iVar38) {
                      piVar42 = (int *)*puVar41;
                      do {
                        if ((*piVar42 <= iVar48) && (iVar48 < piVar42[1])) {
                          iVar38 = piVar42[2];
                          goto LAB_145342b9e;
                        }
                        lVar51 = lVar51 + 1;
                        piVar42 = piVar42 + 3;
                      } while (lVar51 < iVar38);
                    }
                    iVar38 = -0x80000000;
LAB_145342b9e:
                    if (iVar38 <= (int)fVar36) {
                      iVar72 = iVar72 + 1;
                      fVar63 = (float)iVar48;
                      local_d8 = fVar63 * fVar31 + fVar61 * fVar22 + fVar57 * fVar27;
                      fStack_d4 = fVar63 * fVar33 + fVar61 * fVar23 + fVar57 * fVar28;
                      fStack_d0 = fVar63 * fVar34 + fVar61 * fVar24 + fVar57 * fVar29;
                      fStack_cc = fVar63 * fVar35 + fVar61 * fVar25 + fVar57 * fVar30;
                      local_e8 = (fVar56 - fVar4) + local_d8;
                      fStack_e4 = (fVar60 - fVar14) + fStack_d4;
                      fStack_e0 = (fVar62 - fVar15) + fStack_d0;
                      fStack_dc = (fVar64 - fVar16) + fStack_cc;
                      local_d8 = fVar10 + fVar56 + fVar17 + local_d8;
                      fStack_d4 = fVar11 + fVar60 + fVar18 + fStack_d4;
                      fStack_d0 = fVar12 + fVar62 + fVar19 + fStack_d0;
                      fStack_cc = fVar13 + fVar64 + fVar20 + fStack_cc;
                      iVar38 = FUN_144ff20b0(&local_e8,pauVar52,local_f0,local_f8,iVar47,iVar72);
                      pauVar52 = local_148;
                      if (iVar38 != 0) {
                        if (iVar48 < iVar39) {
                          iVar39 = iVar48;
                        }
                        if (iVar54 < iVar48 + 1) {
                          iVar54 = iVar48 + 1;
                        }
                        local_128[1] = (float)iVar54;
                        local_128[0] = (float)iVar39;
                      }
                    }
                    plVar32 = local_108;
                    iVar48 = iVar48 + 1;
                  } while (iVar48 < iVar49);
                  if (iVar39 < iVar54) {
                    iVar39 = (int)local_108[1];
                    uVar55 = (ulonglong)iVar39;
                    iVar48 = iVar39 + 1;
                    if ((int)(*(uint *)((longlong)local_108 + 0xc) & 0x7fffffff) < iVar48) {
                      FUN_145345020(local_108,&PTR_vftable_14c6e47a0,(longlong)iVar48);
                    }
                    pfVar1 = (float *)(*plVar32 + (longlong)(int)plVar32[1] * 0xc);
                    if (pfVar1 != (float *)0x0) {
                      *pfVar1 = local_128[0];
                      pfVar1[1] = local_128[1];
                      pfVar1[2] = fVar36;
                    }
                    *(int *)(plVar32 + 1) = iVar48;
                    if (-1 < iVar39) {
                      lVar44 = uVar55 * 0xc;
                      lVar51 = uVar55 + 1;
                      uVar46 = uVar55;
                      do {
                        uVar46 = uVar46 - 1;
                        bVar21 = false;
                        uVar53 = uVar46;
                        lVar8 = lVar44;
                        if (-1 < (longlong)uVar46) {
                          do {
                            lVar45 = lVar8 + -0xc;
                            lVar9 = *plVar32;
                            if ((*(int *)(lVar44 + 8 + lVar9) == *(int *)(lVar8 + -4 + lVar9)) &&
                               (iVar39 = *(int *)(lVar45 + lVar9),
                               iVar39 <= *(int *)(lVar44 + 4 + lVar9))) {
                              iVar48 = *(int *)(lVar44 + lVar9);
                              iVar54 = *(int *)(lVar8 + -8 + lVar9);
                              if (iVar48 <= iVar54) {
                                bVar21 = true;
                                if (iVar48 < iVar39) {
                                  iVar39 = iVar48;
                                }
                                *(int *)(lVar45 + lVar9) = iVar39;
                                if (iVar54 < *(int *)(lVar44 + 4 + lVar9)) {
                                  iVar54 = *(int *)(lVar44 + 4 + lVar9);
                                }
                                *(int *)(lVar8 + -8 + lVar9) = iVar54;
                              }
                            }
                            uVar53 = uVar53 - 1;
                            lVar8 = lVar45;
                          } while (-1 < (longlong)uVar53);
                          if (bVar21) {
                            lVar8 = plVar32[1];
                            iVar39 = (int)lVar8 + -1;
                            *(int *)(plVar32 + 1) = iVar39;
                            if (iVar39 != (int)uVar55) {
                              puVar2 = (undefined4 *)(*plVar32 + ((longlong)(int)lVar8 + -1) * 0xc);
                              puVar3 = (undefined4 *)(lVar44 + *plVar32);
                              if ((puVar3 != puVar2) && (puVar3 != (undefined4 *)0x0)) {
                                uVar5 = puVar2[1];
                                *puVar3 = *puVar2;
                                puVar3[1] = uVar5;
                                puVar3[2] = puVar2[2];
                              }
                            }
                          }
                        }
                        uVar55 = (ulonglong)((int)uVar55 - 1);
                        lVar44 = lVar44 + -0xc;
                        lVar51 = lVar51 + -1;
                      } while (lVar51 != 0);
                    }
                    iVar39 = (int)plVar32[1];
                    iVar48 = 0;
                    if (0 < iVar39) {
                      lVar51 = 0;
                      do {
                        iVar54 = 0;
                        if (0 < iVar39) {
                          lVar44 = 0;
                          do {
                            lVar8 = *plVar32;
                            iVar39 = *(int *)(lVar51 + 8 + lVar8);
                            iVar38 = *(int *)(lVar44 + 8 + lVar8);
                            if (iVar39 != iVar38) {
                              iVar49 = *(int *)(lVar44 + 4 + lVar8);
                              iVar50 = *(int *)(lVar51 + 4 + lVar8);
                              iVar6 = *(int *)(lVar44 + lVar8);
                              iVar7 = *(int *)(lVar51 + lVar8);
                              iVar43 = iVar49;
                              if (iVar50 < iVar49) {
                                iVar43 = iVar50;
                              }
                              iVar40 = iVar6;
                              if (iVar6 < iVar7) {
                                iVar40 = iVar7;
                              }
                              if ((iVar40 < iVar43) && (iVar39 < iVar38)) {
                                local_158 = (char *)CONCAT44(iVar50,iVar49);
                                *(int *)(lVar51 + 8 + lVar8) = iVar39;
                                if (iVar7 < iVar6) {
                                  *(int *)(lVar51 + lVar8) = iVar7;
                                  *(int *)(lVar51 + 4 + lVar8) = iVar6;
                                  if (iVar49 < iVar50) {
                                    iVar38 = (int)plVar32[1] + 1;
                                    if ((int)(*(uint *)((longlong)plVar32 + 0xc) & 0x7fffffff) <
                                        iVar38) {
                                      FUN_145345020(plVar32,&PTR_vftable_14c6e47a0,(longlong)iVar38)
                                      ;
                                    }
                                    puVar2 = (undefined4 *)
                                             (*plVar32 + (longlong)(int)plVar32[1] * 0xc);
                                    if (puVar2 != (undefined4 *)0x0) {
                                      *puVar2 = (int)local_158;
                                      puVar2[1] = local_158._4_4_;
                                      puVar2[2] = iVar39;
                                    }
                                    *(int *)(plVar32 + 1) = iVar38;
                                  }
                                }
                                else {
                                  *(int *)(lVar51 + lVar8) = iVar49;
                                  *(int *)(lVar51 + 4 + lVar8) = iVar50;
                                  if (iVar50 <= iVar49) break;
                                }
                              }
                            }
                            iVar54 = iVar54 + 1;
                            lVar44 = lVar44 + 0xc;
                          } while (iVar54 < (int)plVar32[1]);
                        }
                        iVar39 = (int)plVar32[1];
                        iVar48 = iVar48 + 1;
                        lVar51 = lVar51 + 0xc;
                        fVar36 = local_140;
                      } while (iVar48 < iVar39);
                    }
                    iVar39 = iVar39 + -1;
                    lVar51 = (longlong)iVar39;
                    if (-1 < iVar39) {
                      lVar44 = lVar51 * 0xc;
                      do {
                        lVar8 = *plVar32;
                        puVar2 = (undefined4 *)(lVar44 + lVar8);
                        if ((int)puVar2[1] <= *(int *)(lVar44 + lVar8)) {
                          lVar9 = plVar32[1];
                          iVar48 = (int)lVar9 + -1;
                          *(int *)(plVar32 + 1) = iVar48;
                          if (((iVar48 != iVar39) &&
                              (puVar3 = (undefined4 *)(lVar8 + ((longlong)(int)lVar9 + -1) * 0xc),
                              puVar2 != puVar3)) && (puVar2 != (undefined4 *)0x0)) {
                            uVar5 = puVar3[1];
                            *puVar2 = *puVar3;
                            puVar2[1] = uVar5;
                            puVar2[2] = puVar3[2];
                          }
                        }
                        iVar39 = iVar39 + -1;
                        lVar44 = lVar44 + -0xc;
                        lVar51 = lVar51 + -1;
                      } while (-1 < lVar51);
                    }
                  }
                }
                local_168 = local_168 + local_188;
                iVar50 = iVar47 + 1;
                pauVar52 = local_148;
                iVar48 = local_170;
                iVar39 = local_138;
                iVar38 = local_13c;
                iVar47 = local_134;
                iVar54 = local_178;
                iVar49 = local_174;
              } while (iVar50 < local_178);
            }
            iVar37 = iVar37 + 1;
            lVar51 = local_118;
          } while (iVar37 < iVar47);
        }
      }
      local_118 = lVar51 + 0x10;
      local_16c = local_16c + 1;
      local_110 = local_110 + -1;
    } while (local_110 != 0);
    local_110 = 0;
  }
  lVar51 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar51 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar44 = *(longlong *)(lVar51 + 0xf0);
  if (lVar44 == 0) {
    if (*(char *)(lVar51 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar44 = FUN_144b3f4a0();
    *(longlong *)(lVar51 + 0xf0) = lVar44;
  }
  if (*(longlong *)(lVar44 + 0x3e0) != 0) {
    local_158 = "MitriangleAabbChecks";
    pcStack_150 = "";
    FUN_144be9c40(*(longlong *)(lVar44 + 0x3e0),&local_158);
  }
  return;
}



// FUNCTION 145343060 FUN_145343060 body=356 status=ok
// SIG undefined FUN_145343060(void)

int FUN_145343060(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)((longlong)param_1 + 0x5c);
  lVar7 = (longlong)(int)param_1[10] * 4;
  iVar4 = *(int *)(lVar7 + param_2);
  iVar11 = *(int *)(lVar7 + param_3);
  lVar7 = (longlong)*(int *)((longlong)param_1 + 0x54) * 4;
  iVar12 = *(int *)(lVar7 + param_2);
  iVar13 = *(int *)(lVar7 + param_3);
  iVar10 = *(int *)(param_2 + (longlong)(int)param_1[0xb] * 4);
  iVar3 = *(int *)(param_3 + (longlong)(int)param_1[0xb] * 4);
  iVar5 = 0;
  if ((-1 < iVar4) && (iVar5 = iVar4, iVar1 < iVar4)) {
    iVar5 = iVar1;
  }
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (iVar1 < iVar11) {
    iVar11 = iVar1;
  }
  iVar4 = (int)param_1[0xc];
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (iVar4 < iVar12) {
    iVar12 = iVar4;
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  else if (iVar4 < iVar13) {
    iVar13 = iVar4;
  }
  iVar4 = *(int *)((longlong)param_1 + 100);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (iVar4 < iVar10) {
    iVar10 = iVar4;
  }
  iVar8 = 0;
  if ((-1 < iVar3) && (iVar8 = iVar3, iVar4 < iVar3)) {
    iVar8 = iVar4;
  }
  iVar4 = -0x80000000;
  for (; iVar5 < iVar11; iVar5 = iVar5 + 1) {
    if (iVar12 < iVar13) {
      puVar9 = (undefined8 *)((longlong)(iVar1 * iVar12 + iVar5) * 0x10 + *param_1);
      uVar6 = (ulonglong)(uint)(iVar13 - iVar12);
      do {
        lVar7 = (longlong)*(int *)(puVar9 + 1);
        iVar3 = -0x80000000;
        if (0 < lVar7) {
          piVar2 = (int *)*puVar9;
          do {
            if (((iVar10 < piVar2[1]) && (*piVar2 < iVar8)) && (iVar3 < piVar2[2])) {
              iVar3 = piVar2[2];
            }
            piVar2 = piVar2 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        puVar9 = puVar9 + (longlong)iVar1 * 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return iVar4;
}



// FUNCTION 1453431d0 FUN_1453431d0 body=1889 status=ok
// SIG undefined FUN_1453431d0(void)

void FUN_1453431d0(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  longlong *param_5)

{
  undefined **ppuVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined **ppuVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong local_res8;
  longlong local_res10;
  undefined8 local_res18;
  float *local_res20;
  undefined **local_138;
  char *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined **local_108;
  char *local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [88];
  
  ppuVar18 = *(undefined ***)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_108 = ppuVar18;
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
    cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  }
  puVar8 = ppuVar18[0x1e];
  if (puVar8 == (undefined *)0x0) {
    if (cVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar8 = (undefined *)FUN_144b3f4a0();
    ppuVar18[0x1e] = puVar8;
  }
  local_c8 = *(undefined **)(puVar8 + 0x3e0);
  if (local_c8 != (undefined *)0x0) {
    local_138 = (undefined **)0x149c1fe98;
    local_130 = "";
    local_128 = "LthkaiNavVolumeMultiResBuilder::init";
    uStack_120 = "";
    FUN_144be9870(local_c8,&local_128,&local_138);
  }
  puVar13 = (undefined4 *)param_5;
  lVar14 = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_5;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)param_5 + 4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((longlong)param_5 + 8);
  fVar23 = *param_4;
  fVar25 = param_4[1];
  fVar26 = param_4[2];
  fVar27 = param_4[3];
  *(float *)(param_1 + 0x50) = fVar23;
  *(float *)(param_1 + 0x54) = fVar25;
  *(float *)(param_1 + 0x58) = fVar26;
  *(float *)(param_1 + 0x5c) = fVar27;
  fVar27 = param_4[4];
  fVar28 = param_4[5];
  fVar29 = param_4[6];
  fVar5 = param_4[7];
  *(float *)(param_1 + 0x60) = fVar27;
  *(float *)(param_1 + 100) = fVar28;
  *(float *)(param_1 + 0x68) = fVar29;
  *(float *)(param_1 + 0x6c) = fVar5;
  auVar30._0_4_ = fVar27 - fVar23;
  auVar30._4_4_ = fVar28 - fVar25;
  auVar30._8_4_ = fVar29 - fVar26;
  auVar30._12_4_ = uRam000000014c6dacac;
  auVar20._0_8_ =
       CONCAT44((float)(int)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)(int)*(undefined8 *)(param_1 + 0x38));
  auVar20._8_4_ = (float)*(int *)(param_1 + 0x40);
  auVar20._12_4_ = 0x3f800000;
  auVar19._8_4_ = auVar20._8_4_;
  auVar19._0_8_ = auVar20._0_8_;
  auVar19._12_4_ = 0x3f800000;
  auVar19 = divps(auVar19,auVar30);
  auVar31 = divps(auVar30,auVar20);
  *(undefined1 (*) [16])(param_1 + 0xc0) = auVar19;
  *(undefined1 (*) [16])(param_1 + 0xb0) = auVar31;
  fVar23 = *(float *)(param_2 + 0x50);
  fVar25 = *(float *)(param_2 + 0x54);
  fVar26 = *(float *)(param_2 + 0x58);
  fVar27 = ABS(fVar23);
  fVar28 = ABS(fVar25);
  fVar29 = ABS(fVar26);
  auVar31._0_8_ = CONCAT44(fVar23,fVar23) & 0x7fffffff7fffffff;
  auVar31._8_4_ = fVar27;
  auVar31._12_4_ = fVar27;
  auVar21._0_8_ = CONCAT44(fVar26,fVar26) & 0x7fffffff7fffffff;
  auVar21._8_4_ = fVar29;
  auVar21._12_4_ = fVar29;
  auVar24._0_8_ = CONCAT44(fVar25,fVar25) & 0x7fffffff7fffffff;
  auVar24._8_4_ = fVar28;
  auVar24._12_4_ = fVar28;
  auVar19 = maxps(auVar24,auVar31);
  auVar19 = maxps(auVar21,auVar19);
  auVar22._4_4_ = -(uint)(auVar19._4_4_ <= fVar28);
  auVar22._0_4_ = -(uint)(auVar19._0_4_ <= fVar27);
  auVar22._8_4_ = -(uint)(auVar19._8_4_ <= fVar29);
  auVar22._12_4_ = -(uint)(auVar19._12_4_ <= ABS(*(float *)(param_2 + 0x5c)));
  uVar7 = movmskps(1,auVar22);
  cVar9 = (&DAT_14998f5c0)[uVar7 & 7];
  *(undefined4 *)(param_1 + 0x70 + (longlong)cVar9 * 4) = *(undefined4 *)(param_2 + 100);
  iVar15 = cVar9 + 1;
  iVar10 = cVar9 + 2;
  lVar17 = (longlong)
           (iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                     (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  *(float *)(param_1 + 0x70 + lVar17 * 4) = *(float *)(param_2 + 0x68) * 0.5;
  lVar11 = (longlong)
           (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                     (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f
                          )) * -3);
  *(float *)(param_1 + 0x70 + lVar11 * 4) = *(float *)(param_2 + 0x68) * 0.5;
  *(undefined4 *)(param_1 + 0x80 + (longlong)cVar9 * 4) = *(undefined4 *)(param_2 + 0x60);
  *(float *)(param_1 + 0x80 + lVar17 * 4) = *(float *)(param_2 + 0x68) * 0.5;
  *(float *)(param_1 + 0x80 + lVar11 * 4) = *(float *)(param_2 + 0x68) * 0.5;
  iVar10 = *(int *)(param_1 + 0x98) + 1;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar10) {
    FUN_145344dd0((longlong *)(param_1 + 0x90),&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar15 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar10;
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar15 * 0x24);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[6] = 1;
    puVar3[7] = 0xffffffff;
    puVar3[8] = 1;
  }
  *(undefined8 *)(puVar3 + 1) = 0;
  *puVar3 = 0;
  puVar3[3] = *(undefined4 *)(param_1 + 0x38);
  puVar3[4] = *(undefined4 *)(param_1 + 0x3c);
  puVar3[5] = *(undefined4 *)(param_1 + 0x40);
  iVar10 = *(int *)(param_2 + 0xe0);
  lVar17 = (longlong)iVar10;
  local_f8 = MaterialMapVoxelEvaluator::vftable;
  local_d0 = *(undefined4 *)(param_2 + 0xcc);
  local_cc = *(undefined4 *)(param_2 + 0xd0);
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0xffffffff;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0xffffffff;
  FUN_144f5ff20(&local_f0);
  FUN_144f5ff20(&local_e0);
  lVar11 = lVar14;
  if (0 < iVar10) {
    do {
      lVar4 = *(longlong *)(param_2 + 0xd8);
      local_128 = (char *)(ulonglong)*(uint *)(lVar11 + 4 + lVar4);
      uVar7 = *(uint *)(lVar11 + lVar4);
      local_138 = (undefined **)(ulonglong)uVar7;
      FUN_144f5fe30(&local_f0,&PTR_vftable_14c6e47a0,&local_138,&local_128);
      local_138 = (undefined **)(ulonglong)*(uint *)(lVar11 + 8 + lVar4);
      local_128 = (char *)(ulonglong)uVar7;
      FUN_144f5fe30(&local_e0,&PTR_vftable_14c6e47a0,&local_128,&local_138);
      lVar17 = lVar17 + -1;
      puVar13 = (undefined4 *)param_5;
      param_1 = local_res8;
      lVar11 = lVar11 + 0xc;
    } while (lVar17 != 0);
  }
  pfVar6 = local_res20;
  ppuVar1 = (undefined **)(param_1 + 0xd0);
  local_138 = ppuVar1;
  FUN_145342540(ppuVar1,local_res20,*puVar13,puVar13[1],puVar13[2],param_2 + 0x50);
  local_res20 = (float *)(param_1 + 0x140);
  FUN_145342540(local_res20,pfVar6,*puVar13,puVar13[1],puVar13[2],param_2 + 0x50);
  local_128 = "SttriangleVoxelization";
  uStack_120 = "";
  cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
    cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  }
  puVar8 = ppuVar18[0x1e];
  if (puVar8 == (undefined *)0x0) {
    if (cVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar8 = (undefined *)FUN_144b3f4a0();
    ppuVar18[0x1e] = puVar8;
  }
  if (*(longlong *)(puVar8 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(puVar8 + 0x3e0),&local_128);
  }
  FUN_145342810(ppuVar1,local_res18,param_1 + 0x70,&local_f8);
  cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
    cVar9 = *(char *)((longlong)ppuVar18 + 0x114);
  }
  puVar8 = ppuVar18[0x1e];
  if (puVar8 == (undefined *)0x0) {
    if (cVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar8 = (undefined *)FUN_144b3f4a0();
    ppuVar18[0x1e] = puVar8;
  }
  if (*(longlong *)(puVar8 + 0x3e0) != 0) {
    local_128 = "StcarverBorderVoxelization";
    uStack_120 = "";
    FUN_144be99f0(*(longlong *)(puVar8 + 0x3e0),&local_128);
  }
  ppuVar1 = local_138;
  iVar10 = *(int *)(param_2 + 0xf8);
  plVar2 = (longlong *)(param_2 + 0xf0);
  param_5 = (longlong *)CONCAT44(param_5._4_4_,0x3a83126f);
  fVar23 = *(float *)(param_1 + 0xb0) * 0.001;
  fVar25 = *(float *)(param_1 + 0xb4) * 0.001;
  fVar26 = *(float *)(param_1 + 0xb8) * 0.001;
  fVar27 = *(float *)(param_1 + 0xbc) * 0.001;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_118 = fVar23 + *(float *)(param_1 + 0x80);
  fStack_114 = fVar25 + *(float *)(param_1 + 0x84);
  fStack_110 = fVar26 + *(float *)(param_1 + 0x88);
  fStack_10c = fVar27 + *(float *)(param_1 + 0x8c);
  local_128 = (char *)CONCAT44(fVar25 + *(float *)(param_1 + 0x74),
                               fVar23 + *(float *)(param_1 + 0x70));
  uStack_120 = (char *)CONCAT44(fVar27 + *(float *)(param_1 + 0x7c),
                                fVar26 + *(float *)(param_1 + 0x78));
  if (0 < (longlong)iVar10) {
    do {
      lVar11 = *(longlong *)(*plVar2 + lVar14 * 8);
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) {
        FUN_144b3e890(local_98);
        (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x28))
                  (*(longlong **)(lVar11 + 0x18),&param_5,local_98);
        local_138 = ConstantVoxelEvaluator::vftable;
        puVar16 = &local_128;
        if ((*(byte *)(lVar11 + 0x20) & 1) == 0) {
          puVar16 = &local_b8;
        }
        local_130 = (char *)CONCAT44(local_130._4_4_,0xffffffff);
        FUN_145342810(ppuVar1,local_98,puVar16,&local_138);
        local_138 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
        FUN_144b3e940(local_98);
      }
      lVar14 = lVar14 + 1;
      param_2 = local_res10;
      param_1 = local_res8;
      ppuVar18 = local_108;
    } while (lVar14 < iVar10);
  }
  lVar11 = 0;
  plVar12 = (longlong *)(param_2 + 0x100);
  param_5 = plVar12;
  FUN_145341b40(param_1,&local_res8,plVar2,plVar12);
  if (*(char *)((longlong)ppuVar18 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar8 = ppuVar18[0x1e];
  if (puVar8 == (undefined *)0x0) {
    if (*(char *)((longlong)ppuVar18 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar8 = (undefined *)FUN_144b3f4a0();
    ppuVar18[0x1e] = puVar8;
  }
  if (*(longlong *)(puVar8 + 0x3e0) != 0) {
    local_108 = (undefined **)0x149d3d0a8;
    local_100 = "";
    FUN_144be99f0(*(longlong *)(puVar8 + 0x3e0),&local_108);
  }
  pfVar6 = local_res20;
  iVar10 = *(int *)(param_2 + 0x108);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (0 < (longlong)iVar10) {
    do {
      lVar14 = *(longlong *)(*plVar12 + lVar11 * 8);
      if (lVar14 != 0) {
        FUN_144b3e890(local_98);
        (**(code **)(**(longlong **)(lVar14 + 0x20) + 0x28))
                  (*(longlong **)(lVar14 + 0x20),&local_res8,local_98);
        local_108 = ConstantVoxelEvaluator::vftable;
        local_100 = (char *)CONCAT44(local_100._4_4_,*(undefined4 *)(lVar14 + 0x18));
        FUN_145342810(pfVar6,local_98,&local_b8,&local_108);
        local_108 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
        FUN_144b3e940(local_98);
      }
      lVar11 = lVar11 + 1;
      plVar12 = param_5;
    } while (lVar11 < iVar10);
  }
  FUN_144f5ff60(&local_e0,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(&local_e0);
  FUN_144f5ff60(&local_f0,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(&local_f0);
  puVar8 = local_c8;
  local_f8 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
  if (local_c8 != (undefined *)0x0) {
    local_c8 = &DAT_14999058c;
    local_c0 = &DAT_14999058e;
    FUN_144be9b20(puVar8,&local_c8);
  }
  return;
}



// FUNCTION 145343940 FUN_145343940 body=1561 status=ok
// SIG undefined FUN_145343940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145343940(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  char *pcVar26;
  longlong lVar27;
  int iVar28;
  bool bVar29;
  int local_res8;
  int local_res18;
  undefined1 local_res20 [8];
  char *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  char *local_d8;
  char *pcStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  char *local_68;
  char *pcStack_60;
  
  local_a0 = (ulonglong)_tls_index;
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_a0 * 8);
  local_98 = lVar27;
  if (*(char *)(lVar27 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar27 + 0xf0);
  if (lVar20 == 0) {
    if (*(char *)(lVar27 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = FUN_144b3f4a0();
    *(longlong *)(lVar27 + 0xf0) = lVar20;
  }
  local_90 = *(longlong *)(lVar20 + 0x3e0);
  local_f8 = "TthkaiNavVolumeBuilder::split";
  uStack_f0 = "";
  if (local_90 != 0) {
    local_d8 = "TthkaiNavVolumeBuilder::split";
    pcStack_d0 = "";
    FUN_144b3f370(local_90,&local_d8);
  }
  do {
    iVar28 = *(int *)(param_1 + 0x98) + -1;
    local_res8 = 0;
    local_a8 = (longlong)iVar28;
    if (iVar28 < 0) break;
    lVar27 = local_a8 * 0x24;
    plVar1 = (longlong *)(param_1 + 0x90);
    do {
      iVar22 = *(int *)(param_1 + 0x98) + 8;
      local_e8 = lVar27;
      if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar22) {
        FUN_145344ae0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar22);
      }
      fVar4 = *(float *)(param_1 + 0xb0);
      fVar5 = *(float *)(param_1 + 0xb4);
      fVar6 = *(float *)(param_1 + 0xb8);
      fVar7 = *(float *)(param_1 + 0xbc);
      fVar8 = *(float *)(param_1 + 0x50);
      fVar9 = *(float *)(param_1 + 0x54);
      fVar10 = *(float *)(param_1 + 0x58);
      fVar11 = *(float *)(param_1 + 0x5c);
      puVar24 = (undefined8 *)(*plVar1 + lVar27);
      local_88 = (float)(int)*puVar24 * fVar4 + fVar8;
      fStack_84 = (float)(int)((ulonglong)*puVar24 >> 0x20) * fVar5 + fVar9;
      fStack_80 = (float)*(int *)(puVar24 + 1) * fVar6 + fVar10;
      fStack_7c = (float)*(int *)(puVar24 + 1) * fVar7 + fVar11;
      local_78 = (float)(int)*(undefined8 *)((longlong)puVar24 + 0xc) * fVar4 + fVar8;
      fStack_74 = (float)(int)((ulonglong)*(undefined8 *)((longlong)puVar24 + 0xc) >> 0x20) * fVar5
                  + fVar9;
      fStack_70 = (float)*(int *)((longlong)puVar24 + 0x14) * fVar6 + fVar10;
      fStack_6c = (float)*(int *)((longlong)puVar24 + 0x14) * fVar7 + fVar11;
      iVar22 = *(int *)(puVar24 + 3);
      local_c8 = ((float)(int)*puVar24 * fVar4 + fVar8) - *(float *)(param_1 + 0x70);
      fStack_c4 = ((float)(int)((ulonglong)*puVar24 >> 0x20) * fVar5 + fVar9) -
                  *(float *)(param_1 + 0x74);
      fStack_c0 = ((float)*(int *)(puVar24 + 1) * fVar6 + fVar10) - *(float *)(param_1 + 0x78);
      fStack_bc = ((float)*(int *)(puVar24 + 1) * fVar7 + fVar11) - *(float *)(param_1 + 0x7c);
      local_b8 = (float)(int)*(undefined8 *)((longlong)puVar24 + 0xc) * fVar4 + fVar8 +
                 *(float *)(param_1 + 0x80);
      fStack_b4 = (float)(int)((ulonglong)*(undefined8 *)((longlong)puVar24 + 0xc) >> 0x20) * fVar5
                  + fVar9 + *(float *)(param_1 + 0x84);
      fStack_b0 = (float)*(int *)((longlong)puVar24 + 0x14) * fVar6 + fVar10 +
                  *(float *)(param_1 + 0x88);
      fStack_ac = (float)*(int *)((longlong)puVar24 + 0x14) * fVar7 + fVar11 +
                  *(float *)(param_1 + 0x8c);
      iVar18 = FUN_145341fd0(param_1,&local_c8);
      if (iVar18 != 0) {
        *(undefined4 *)(puVar24 + 3) = 1;
      }
      bVar29 = iVar18 == 0 && iVar22 != 0;
      local_f8 = (char *)0x0;
      uStack_f0 = (char *)0x8000000000000000;
      if (*(int *)(puVar24 + 3) == 0) {
        FUN_145341d70(param_1,local_res20,&local_88,&local_f8);
        local_c8 = *(float *)(param_1 + 0xb0) * 0.0078125;
        fStack_c4 = *(float *)(param_1 + 0xb4) * 0.0078125;
        fStack_c0 = *(float *)(param_1 + 0xb8) * 0.0078125;
        fStack_bc = *(float *)(param_1 + 0xbc) * 0.0078125;
        local_b8 = local_78 - local_c8;
        fStack_b4 = fStack_74 - fStack_c4;
        fStack_b0 = fStack_70 - fStack_c0;
        fStack_ac = fStack_6c - fStack_bc;
        local_c8 = local_c8 + local_88;
        fStack_c4 = fStack_c4 + fStack_84;
        fStack_c0 = fStack_c0 + fStack_80;
        fStack_bc = fStack_bc + fStack_7c;
        if ((int)uStack_f0 != 0) {
          lVar27 = *(longlong *)(local_f8 + (longlong)((int)uStack_f0 + -1) * 8);
          plVar3 = *(longlong **)(lVar27 + 0x20);
          iVar22 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_c8);
          bVar29 = iVar22 == 0;
          if (!bVar29) {
            *(undefined4 *)((longlong)puVar24 + 0x1c) = *(undefined4 *)(lVar27 + 0x18);
          }
        }
      }
      local_res18 = 0;
      if (bVar29) {
        local_res18 = FUN_145344760(param_1,puVar24);
        lVar27 = (longlong)local_res18;
        if (local_res18 < 1) goto LAB_145343e48;
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_a0 * 8);
        if (*(char *)(lVar20 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar21 = *(longlong *)(lVar20 + 0xf0);
        if (lVar21 == 0) {
          if (*(char *)(lVar20 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar21 = FUN_144b3f4a0();
          *(longlong *)(local_98 + 0xf0) = lVar21;
        }
        lVar20 = *(longlong *)(lVar21 + 0x3e0);
        local_68 = "Tt_checkGeometry";
        pcStack_60 = "";
        if (lVar20 != 0) {
          local_c8 = 1735174.0;
          fStack_c4 = 1.4013e-45;
          fStack_c0 = 1735176.0;
          fStack_bc = 1.4013e-45;
          FUN_144b3f370(lVar20,&local_c8);
        }
        if (0 < lVar27) {
          lVar21 = (longlong)(*(int *)(param_1 + 0x98) - local_res18) * 0x24;
          do {
            lVar25 = *plVar1 + lVar21;
            iVar22 = FUN_145343060(param_1 + 0xd0,lVar25,lVar25 + 0xc);
            if (iVar22 != -0x80000000) {
              iVar18 = -iVar22;
            }
            else {
              iVar18 = 1;
            }
            lVar21 = lVar21 + 0x24;
            *(uint *)(lVar25 + 0x18) = (uint)(iVar22 != -0x80000000);
            *(int *)(lVar25 + 0x20) = iVar18;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar20 != 0) {
          local_d8 = "Et";
          pcStack_d0 = "";
          local_c8 = 1245932.5;
          fStack_c4 = 1.4013e-45;
          fStack_c0 = 1245932.8;
          fStack_bc = 1.4013e-45;
          FUN_144b3f260(lVar20,&local_c8);
        }
      }
      else {
LAB_145343e48:
        local_c8 = (local_78 + local_88) * _DAT_14c6dad90;
        fStack_c4 = (fStack_74 + fStack_84) * fRam000000014c6dad94;
        fStack_c0 = (fStack_70 + fStack_80) * fRam000000014c6dad98;
        fStack_bc = (fStack_6c + fStack_7c) * fRam000000014c6dad9c;
        iVar22 = FUN_145341f40(param_1,&local_c8);
        if (iVar22 == 0) {
          if (*(int *)((longlong)puVar24 + 0x1c) == -1) {
            iVar19 = FUN_145343060(param_1 + 0x140,puVar24,(longlong)puVar24 + 0xc);
            iVar22 = -1;
            iVar18 = -1;
            if (iVar19 != -0x80000000) {
              iVar18 = iVar19;
            }
            lVar27 = (longlong)((int)uStack_f0 + -1);
            if (-1 < (int)uStack_f0 + -1) {
              do {
                lVar20 = *(longlong *)(local_f8 + lVar27 * 8);
                plVar3 = *(longlong **)(lVar20 + 0x20);
                iVar19 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_88);
                if (iVar19 != 0) {
                  iVar22 = *(int *)(lVar20 + 0x18);
                  break;
                }
                lVar27 = lVar27 + -1;
              } while (-1 < lVar27);
            }
            if (iVar22 < iVar18) {
              iVar22 = iVar18;
            }
            *(int *)((longlong)puVar24 + 0x1c) = iVar22;
          }
        }
        else {
          *(undefined4 *)(puVar24 + 3) = 1;
        }
        iVar22 = *(int *)(param_1 + 0xa8) + 1;
        if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) < iVar22) {
          FUN_145344f00((longlong *)(param_1 + 0xa0),&PTR_vftable_14c6e47a0,(longlong)iVar22);
        }
        iVar18 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xa8) = iVar22;
        puVar23 = (undefined4 *)((longlong)iVar18 * 0x20 + *(longlong *)(param_1 + 0xa0));
        *puVar23 = *(undefined4 *)puVar24;
        puVar23[1] = *(undefined4 *)((longlong)puVar24 + 4);
        puVar23[2] = *(undefined4 *)(puVar24 + 1);
        puVar23[3] = *(undefined4 *)((longlong)puVar24 + 0xc);
        puVar23[4] = *(undefined4 *)(puVar24 + 2);
        puVar23[5] = *(undefined4 *)((longlong)puVar24 + 0x14);
        puVar23[6] = (uint)(*(int *)(puVar24 + 3) == 0);
        puVar23[7] = *(undefined4 *)((longlong)puVar24 + 0x1c);
      }
      lVar27 = local_e8;
      pcVar16 = local_f8;
      iVar22 = *(int *)(param_1 + 0x98);
      local_res8 = local_res8 + local_res18;
      iVar18 = iVar22 + -1;
      *(int *)(param_1 + 0x98) = iVar18;
      if (iVar18 != iVar28) {
        puVar23 = (undefined4 *)(*plVar1 + ((longlong)iVar22 + -1) * 0x24);
        puVar2 = (undefined4 *)(local_e8 + *plVar1);
        if ((puVar2 != puVar23) && (puVar2 != (undefined4 *)0x0)) {
          uVar12 = puVar23[1];
          uVar13 = puVar23[2];
          uVar14 = puVar23[3];
          *puVar2 = *puVar23;
          puVar2[1] = uVar12;
          puVar2[2] = uVar13;
          puVar2[3] = uVar14;
          uVar15 = *(undefined8 *)(puVar23 + 6);
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar23 + 4);
          *(undefined8 *)(puVar2 + 6) = uVar15;
          puVar2[8] = puVar23[8];
        }
      }
      pcVar26 = local_f8 + (longlong)(int)uStack_f0 * 8;
      lVar20 = (longlong)uStack_f0;
      while (pcVar26 != pcVar16) {
        plVar3 = (longlong *)(pcVar26 + -8);
        pcVar26 = pcVar26 + -8;
        if (*plVar3 != 0) {
          uStack_f0 = (char *)lVar20;
          FUN_144b3f230();
          lVar20 = (longlong)uStack_f0;
        }
      }
      uStack_f0._4_4_ = (uint)((ulonglong)lVar20 >> 0x20);
      uVar17 = uStack_f0._4_4_;
      uStack_f0 = (char *)((ulonglong)uStack_f0._4_4_ << 0x20);
      if ((-1 < lVar20) && (local_f8 != (char *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_f8,(ulonglong)(uVar17 & 0x7fffffff) << 3);
      }
      iVar28 = iVar28 + -1;
      local_a8 = local_a8 + -1;
      local_f8 = (char *)0x0;
      lVar27 = lVar27 + -0x24;
      uStack_f0 = (char *)CONCAT44(0x80000000,(int)uStack_f0);
    } while (-1 < local_a8);
    local_e8 = lVar27;
  } while (local_res8 != 0);
  if (local_90 != 0) {
    local_d8 = "Et";
    pcStack_d0 = "";
    local_c8 = 1245932.5;
    fStack_c4 = 1.4013e-45;
    fStack_c0 = 1245932.8;
    fStack_bc = 1.4013e-45;
    FUN_144b3f260(local_90,&local_c8);
  }
  return;
}



// FUNCTION 145343f60 FUN_145343f60 body=668 status=ok
// SIG undefined FUN_145343f60(void)

void FUN_145343f60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  char *local_38;
  char *local_30;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar1 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar4;
  }
  lVar1 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar1 != 0) {
    local_38 = "TthkaiNavVolumeBuilder::setupMerger";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  FUN_14533e260(param_2,*(undefined4 *)(param_1 + 0xa8));
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar8 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)param_2 + 0x9c) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  uVar11 = uVar8;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      puVar6 = (undefined8 *)0x0;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + uVar8);
      if (puVar9[6] != 0) {
        if ((int)param_2[3] == 0) {
          local_res8 = 0x38;
          puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
          if (DAT_14c787680 != (code *)0x0) {
            (*DAT_14c787680)(puVar5,&DAT_149c224f8);
          }
          if (puVar5 != (undefined8 *)0x0) {
            lVar4 = param_2[0xe];
            puVar5[5] = 0;
            *(undefined4 *)(puVar5 + 6) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x34) = 0x80000000;
            *puVar5 = 0;
            *(undefined8 *)((longlong)puVar5 + 0xc) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x14) = 0xffffffff;
            *(int *)((longlong)puVar5 + 0x1c) = (int)lVar4;
            *(undefined4 *)(puVar5 + 3) = 0;
            puVar6 = puVar5;
          }
          *(int *)(puVar6 + 4) = (int)param_2[1];
          iVar7 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar7) {
            FUN_145044990(param_2,&PTR_vftable_14c6e47a0);
          }
          puVar5 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = puVar6;
          }
          *(int *)(param_2 + 1) = iVar7;
        }
        else {
          puVar6 = *(undefined8 **)(param_2[2] + -8 + (longlong)(int)param_2[3] * 8);
          *(int *)((longlong)puVar6 + 0x1c) = (int)param_2[0xe];
          *(int *)(param_2 + 3) = (int)param_2[3] + -1;
        }
        *(undefined4 *)puVar6 = *puVar9;
        *(undefined4 *)((longlong)puVar6 + 0xc) = puVar9[3];
        uVar2 = 0;
        uVar3 = uVar2;
        if (puVar9[7] != -1) {
          uVar3 = puVar9[7];
        }
        *(undefined4 *)(puVar6 + 3) = uVar3;
        *(undefined4 *)((longlong)puVar6 + 4) = puVar9[1];
        *(undefined4 *)(puVar6 + 2) = puVar9[4];
        uVar3 = uVar2;
        if (puVar9[7] != -1) {
          uVar3 = puVar9[7];
        }
        *(undefined4 *)(puVar6 + 3) = uVar3;
        *(undefined4 *)(puVar6 + 1) = puVar9[2];
        *(undefined4 *)((longlong)puVar6 + 0x14) = puVar9[5];
        if (puVar9[7] != -1) {
          uVar2 = puVar9[7];
        }
        *(undefined4 *)(puVar6 + 3) = uVar2;
      }
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 0x20;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0xa8));
  }
  FUN_145344200(param_1,param_2);
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 145344200 FUN_145344200 body=1368 status=ok
// SIG undefined FUN_145344200(void)

void FUN_145344200(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_60;
  int local_58;
  uint local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  iVar19 = 0;
  iVar14 = (int)param_2[1];
  local_58 = 0;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar11 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar11 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar11 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar11 + 0xf0) = lVar10;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x3d0) + 0x10);
  local_50 = 0;
  if (*(longlong *)(lVar11 + 8) == 0) {
    local_50 = lVar11;
  }
  local_res20 = (longlong)(iVar14 + 4) * 0x20;
  local_40 = local_res20;
  if (local_50 == 0) {
    lVar11 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_res20 >> 8),1),&local_res20,0x40);
  }
  else {
    local_res18 = local_res20 + 0x3fU & 0xffffffffffffffc0;
    if (local_res18 <= *(ulonglong *)(local_50 + 0x28)) {
      lVar11 = *(longlong *)(local_50 + 0x38);
      if (local_res18 + lVar11 <= *(ulonglong *)(local_50 + 0x40)) {
        *(ulonglong *)(local_50 + 0x38) = local_res18 + lVar11;
        goto LAB_1453442e9;
      }
    }
    lVar11 = FUN_144b454a0(local_50,&local_res18);
  }
LAB_1453442e9:
  uVar13 = iVar14 + 4U | 0x80000000;
  iVar18 = 0;
  local_res18 = CONCAT44(local_res18._4_4_,iVar14 + 4U) | 0x80000000;
  lVar10 = 0;
  local_60 = lVar11;
  local_54 = uVar13;
  local_48 = lVar11;
  if (0 < iVar14) {
    do {
      puVar2 = *(undefined4 **)(*param_2 + lVar10 * 8);
      if (-1 < (int)puVar2[7]) {
        iVar15 = iVar19 + 1;
        if ((int)(uVar13 & 0x7fffffff) < iVar15) {
          FUN_144c2e510(&local_60,&PTR_vftable_14c6e47a0,(longlong)iVar15);
          lVar11 = local_60;
          iVar19 = local_58;
          uVar13 = local_54;
        }
        puVar12 = (undefined4 *)((longlong)iVar19 * 0x20 + lVar11);
        *puVar12 = *puVar2;
        puVar12[4] = puVar2[3] + 1;
        puVar12[1] = puVar2[1];
        puVar12[5] = puVar2[4] + 1;
        puVar12[2] = puVar2[2];
        puVar12[6] = puVar2[5] + 1;
        puVar12[3] = iVar18;
        iVar19 = iVar15;
        local_58 = iVar15;
      }
      iVar18 = iVar18 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar14);
    local_res18 = CONCAT44(local_res18._4_4_,uVar13);
  }
  lVar10 = 4;
  iVar14 = iVar19;
  local_res20._0_4_ = iVar19;
  do {
    iVar18 = iVar14 + 1;
    if ((int)(uVar13 & 0x7fffffff) < iVar18) {
      FUN_144c2e510(&local_60,&PTR_vftable_14c6e47a0,(longlong)iVar18);
      lVar11 = local_60;
      iVar14 = local_58;
      uVar13 = local_54;
    }
    *(undefined4 *)((longlong)iVar14 * 0x20 + lVar11) = 0xffffffff;
    lVar10 = lVar10 + -1;
    iVar14 = iVar18;
    local_58 = iVar18;
  } while (lVar10 != 0);
  local_res18 = CONCAT44(local_res18._4_4_,uVar13);
  FUN_144fc0200(lVar11,iVar19);
  iVar14 = 1;
  iVar18 = 0;
  iVar15 = 0;
  iVar20 = iVar19;
  if (0 < iVar19 + -1) {
    do {
      lVar10 = (longlong)iVar18 * 0x20 + lVar11;
      puVar17 = (uint *)((longlong)iVar14 * 0x20 + lVar11);
      iVar20 = (int)local_res20;
      if (*puVar17 <= *(uint *)(lVar10 + 0x10)) {
        do {
          iVar15 = iVar18;
          if (-1 < (int)(*(int *)(lVar10 + 0x18) - puVar17[2] | puVar17[6] - *(int *)(lVar10 + 8) |
                         puVar17[5] - *(int *)(lVar10 + 4) | *(int *)(lVar10 + 0x14) - puVar17[1]))
          goto LAB_145344484;
          iVar14 = iVar14 + 1;
          puVar17 = (uint *)((longlong)iVar14 * 0x20 + lVar11);
        } while (*puVar17 <= *(uint *)(lVar10 + 0x10));
      }
      iVar15 = iVar18 + 1;
      iVar14 = iVar18 + 2;
      iVar18 = iVar15;
    } while (iVar15 < iVar19 + -1);
  }
LAB_145344484:
  if (iVar15 < iVar20 + -1) {
    do {
      do {
        piVar3 = *(int **)(*param_2 + (longlong)*(int *)((longlong)iVar15 * 0x20 + 0xc + lVar11) * 8
                          );
        piVar4 = *(int **)(*param_2 + (longlong)*(int *)((longlong)iVar14 * 0x20 + 0xc + lVar11) * 8
                          );
        if ((piVar4[3] <= *piVar3) || (local_res20._0_4_ = 1, piVar3[3] <= *piVar4)) {
          local_res20._0_4_ = 0;
        }
        if ((piVar3[1] < piVar4[4]) && (piVar4[1] < piVar3[4])) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((piVar3[2] < piVar4[5]) && (piVar4[2] < piVar3[5])) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if ((piVar4[3] == *piVar3) || (*piVar4 == piVar3[3])) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        if ((piVar4[4] == piVar3[1]) || (piVar4[1] == piVar3[4])) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if ((piVar4[5] == piVar3[2]) || (piVar4[2] == piVar3[5])) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if ((((int)local_res20 != 0) && (((bVar5 && (bVar6)) || ((bVar7 && (bVar8)))))) ||
           (((bVar9 && (bVar5)) && (bVar8)))) {
          iVar19 = piVar3[0xc] + 1;
          if ((int)(piVar3[0xd] & 0x7fffffffU) < iVar19) {
            FUN_145044990(piVar3 + 10,&PTR_vftable_14c6e47a0,(longlong)iVar19);
          }
          puVar1 = (undefined8 *)(*(longlong *)(piVar3 + 10) + (longlong)piVar3[0xc] * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = piVar4;
          }
          piVar3[0xc] = iVar19;
          iVar19 = piVar4[0xc] + 1;
          if ((int)(piVar4[0xd] & 0x7fffffffU) < iVar19) {
            FUN_145044990(piVar4 + 10,&PTR_vftable_14c6e47a0,(longlong)iVar19);
          }
          puVar1 = (undefined8 *)(*(longlong *)(piVar4 + 10) + (longlong)piVar4[0xc] * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = piVar3;
          }
          piVar4[0xc] = iVar19;
        }
        iVar14 = iVar14 + 1;
      } while (iVar20 + -1 <= iVar15);
      do {
        lVar10 = (longlong)iVar15 * 0x20 + lVar11;
        puVar17 = (uint *)((longlong)iVar14 * 0x20 + lVar11);
        if (*puVar17 <= *(uint *)(lVar10 + 0x10)) {
          do {
            if (-1 < (int)(*(int *)(lVar10 + 0x18) - puVar17[2] | puVar17[6] - *(int *)(lVar10 + 8)
                           | *(int *)(lVar10 + 0x14) - puVar17[1] |
                          puVar17[5] - *(int *)(lVar10 + 4))) goto LAB_1453446c0;
            iVar14 = iVar14 + 1;
            puVar17 = (uint *)((longlong)iVar14 * 0x20 + lVar11);
          } while (*puVar17 <= *(uint *)(lVar10 + 0x10));
        }
        iVar19 = iVar15 + 1;
        iVar14 = iVar15 + 2;
        iVar15 = iVar19;
      } while (iVar19 < iVar20 + -1);
LAB_1453446c0:
    } while (iVar15 < iVar20 + -1);
  }
  if (local_50 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar16 = local_40 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_50 + 0x28) < uVar16) ||
       (local_48 + uVar16 != *(longlong *)(local_50 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_50 + 0x38) = local_48;
      if (*(longlong *)(local_50 + 0x48) == local_48) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)(uint)local_res18) && (lVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)((uint)local_res18 & 0x7fffffff) << 5);
  }
  return;
}



// FUNCTION 145344760 FUN_145344760 body=498 status=ok
// SIG undefined FUN_145344760(void)

int FUN_145344760(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int aiStack_44 [4];
  uint local_34 [4];
  int local_24;
  int local_20;
  
  piVar9 = param_2 + 3;
  iVar19 = *piVar9;
  iVar12 = param_2[8];
  iVar10 = param_2[4];
  iVar4 = param_2[5];
  iVar16 = iVar12 + *param_2;
  local_34[3] = (*param_2 + iVar19) / 2;
  local_24 = (param_2[1] + iVar10) / 2;
  iVar7 = iVar12 + param_2[1];
  local_20 = (param_2[2] + iVar4) / 2;
  aiStack_44[3] = (uint)(iVar16 < iVar19);
  iVar12 = param_2[2] + iVar12;
  local_34[0] = (uint)(iVar7 < iVar10);
  local_34[1] = (uint)(iVar12 < iVar4);
  iVar18 = 8;
  if (iVar19 <= iVar16) {
    iVar18 = 4;
  }
  iVar19 = (iVar18 >> (iVar10 <= iVar7)) >> (iVar4 <= iVar12);
  if (iVar19 == 1) {
    iVar19 = 0;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x98);
    iVar10 = iVar12 + iVar19;
    if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) < iVar10) {
      FUN_145344dd0((longlong *)(param_1 + 0x90),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    lVar20 = (longlong)iVar19;
    uVar17 = 1;
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar12 * 0x24);
    if (puVar3 != puVar3 + lVar20 * 9) {
      puVar5 = puVar3 + 7;
      do {
        if (puVar5 != (undefined4 *)&DAT_0000001c) {
          puVar5[-1] = 1;
          *puVar5 = 0xffffffff;
          puVar5[1] = 1;
        }
        puVar1 = puVar5 + 2;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + lVar20 * 9);
    }
    *(int *)(param_1 + 0x98) = iVar10;
    lVar11 = 3;
    puVar2 = (undefined1 *)((longlong)puVar3 + (-0xc - (longlong)param_2));
    do {
      if (*(int *)((longlong)piVar9 + ((longlong)aiStack_44 - (longlong)param_2)) == 0) {
        piVar6 = (int *)(puVar2 + (longlong)piVar9);
        lVar15 = lVar20;
        do {
          *piVar6 = piVar9[-3];
          piVar6[3] = *piVar9;
          lVar15 = lVar15 + -1;
          piVar6 = piVar6 + 9;
        } while (lVar15 != 0);
      }
      else {
        uVar13 = 0;
        piVar8 = (int *)((longlong)local_34 + -(longlong)param_2 + (longlong)piVar9);
        piVar6 = (int *)(puVar2 + (longlong)piVar9);
        lVar15 = lVar20;
        do {
          if ((uVar17 & uVar13) == 0) {
            iVar12 = *piVar8;
            piVar8 = (int *)((longlong)local_34 + -(longlong)param_2 + (longlong)piVar9);
            piVar14 = piVar9;
          }
          else {
            iVar12 = piVar9[-3];
            piVar14 = piVar8;
          }
          *piVar6 = iVar12;
          uVar13 = uVar13 + 1;
          piVar6[3] = *piVar14;
          piVar6 = piVar6 + 9;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        uVar17 = uVar17 * 2;
      }
      piVar9 = piVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return iVar19;
}



// FUNCTION 145344960 FUN_145344960 body=4 status=ok
// SIG undefined FUN_145344960(void)

undefined4 FUN_145344960(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 145344970 FUN_145344970 body=71 status=ok
// SIG undefined FUN_145344970(void)

undefined8 * FUN_145344970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453449c0 FUN_1453449c0 body=128 status=ok
// SIG undefined FUN_1453449c0(void)

int FUN_1453449c0(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  ulonglong local_res10;
  
  local_res8 = (ulonglong)*(uint *)(param_1 + 0x28);
  uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x28) + 0xc + (longlong)param_3 * 0x10);
  local_res10 = uVar3;
  pbVar1 = (byte *)FUN_144f5fe90(param_1 + 8,&local_res10,&local_res8);
  if ((*pbVar1 & 1) == 0) {
    return -0x80000000;
  }
  local_res8 = (ulonglong)*(uint *)(param_1 + 0x2c);
  local_res10 = uVar3;
  piVar2 = (int *)FUN_144f5fe90(param_1 + 0x18,&local_res10,&local_res8);
  return -*piVar2;
}



// FUNCTION 145344a40 FUN_145344a40 body=150 status=ok
// SIG undefined FUN_145344a40(void)

undefined8 * FUN_145344a40(undefined8 *param_1,uint param_2)

{
  FUN_144f5ff60(param_1 + 3,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(param_1 + 3);
  FUN_144f5ff60(param_1 + 1,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(param_1 + 1);
  *param_1 = hkaiNavVolumeRLEVoxelization::VoxelEvaluator::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 145344ae0 FUN_145344ae0 body=285 status=ok
// SIG undefined FUN_145344ae0(void)

ulonglong FUN_145344ae0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar9 * 0x24;
  puVar6 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined4 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7[8] = puVar8[8];
      }
      puVar7 = puVar7 + 9;
      puVar8 = puVar8 + 9;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x24 + 0x24;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x24;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x24;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x24;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 145344c00 FUN_145344c00 body=461 status=ok
// SIG undefined FUN_145344c00(void)

void FUN_145344c00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar10 && uVar10 - param_3 != 0) {
    uVar7 = uVar10;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar8 = uVar7 << 4;
  local_res20 = lVar8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar8,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(lVar3 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar9 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_145342460(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        puVar9[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) * 0xc);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar10 = uVar10 - 1;
      lVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  if (lVar8 + 0x10U <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar7 + 1;
    if (lVar8 + 0x10U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar8 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 4);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145344dd0 FUN_145344dd0 body=295 status=ok
// SIG undefined FUN_145344dd0(void)

ulonglong FUN_145344dd0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x24,&local_res8);
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined4 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *puVar7 = *puVar8;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + 6) = uVar5;
        puVar7[8] = puVar8[8];
      }
      puVar7 = puVar7 + 9;
      puVar8 = puVar8 + 9;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x24 + 0x24;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x24;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x24;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x24;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x24);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 145344f00 FUN_145344f00 body=274 status=ok
// SIG undefined FUN_145344f00(void)

void FUN_145344f00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x20,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 5);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 145345020 FUN_145345020 body=279 status=ok
// SIG undefined FUN_145345020(void)

ulonglong FUN_145345020(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 145345140 FUN_145345140 body=129 status=ok
// SIG undefined FUN_145345140(void)

longlong FUN_145345140(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_144b3e890();
  FUN_144caec40(param_1 + 0x40);
  FUN_144d0f5e0(param_1 + 0x40,param_3);
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(uint *)(param_1 + 0x34) = uVar1 | 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(uint *)(param_1 + 0x24) = uVar1 | 0x80000000;
  return param_1;
}



// FUNCTION 1453451d0 FUN_1453451d0 body=13 status=ok
// SIG undefined FUN_1453451d0(void)

void FUN_1453451d0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1453451e0 FUN_1453451e0 body=118 status=ok
// SIG undefined FUN_1453451e0(void)

uint FUN_1453451e0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_2 + 0x10) < 0) {
    return 1;
  }
  FUN_144cb6610(param_1,param_2,&local_18,&local_28);
  uVar1 = local_18 - local_28 >> 0x1f | (uint)(local_18 - local_28 != 0);
  if ((uVar1 == 0) &&
     (uVar1 = local_14 - local_24 >> 0x1f | (uint)(local_14 - local_24 != 0), uVar1 == 0)) {
    return (uint)(local_10 < local_20);
  }
  return uVar1 >> 0x1f;
}



// FUNCTION 145345260 FUN_145345260 body=41 status=ok
// SIG undefined FUN_145345260(void)

void FUN_145345260(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 8) = param_3;
  if (-1 < param_3) {
    lVar2 = *(longlong *)(param_2 + 8);
    iVar1 = *(int *)(param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar2;
    *(longlong *)(param_1 + 0x18) = lVar2 + (longlong)iVar1 * 4;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 145345290 FUN_145345290 body=477 status=ok
// SIG undefined FUN_145345290(void)

void FUN_145345290(longlong *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30._0_4_ = 0;
  iVar6 = (int)uStack_30;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0x80000000;
  if (0 < *(int *)(*param_1 + 0x30)) {
    FUN_1401f86b2(&local_38,&PTR_vftable_14c6e47c0);
    iVar6 = (int)uStack_30;
  }
  uStack_30._0_4_ = iVar6;
  lVar3 = *param_1;
  iVar8 = 0;
  lVar9 = local_38;
  iVar6 = (int)uStack_30;
  uVar7 = uStack_30._4_4_;
  if (0 < *(int *)(lVar3 + 0x30)) {
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar3 + 0x28) + lVar10;
      if (-1 < *(int *)(lVar5 + 4)) {
        if (param_2 == '\0') {
          if (-1 < *(int *)(lVar5 + 0x10)) goto LAB_145345338;
LAB_145345397:
          iVar1 = iVar6 + 1;
          if ((int)(uVar7 & 0x7fffffff) < iVar1) {
            FUN_1401f86b2(&local_38,&PTR_vftable_14c6e47c0,(longlong)iVar1);
            lVar9 = local_38;
            iVar6 = (int)uStack_30;
            uVar7 = uStack_30._4_4_;
          }
          piVar2 = (int *)(lVar9 + (longlong)iVar6 * 4);
          iVar6 = iVar1;
          uStack_30._0_4_ = iVar1;
          if (piVar2 != (int *)0x0) {
            *piVar2 = iVar8;
          }
        }
        else if (-1 < *(int *)(lVar5 + 0x10)) {
LAB_145345338:
          FUN_144cb6610(lVar3,lVar5,&local_48,&local_58);
          if (local_48 - local_58 == 0) {
            if (local_44 - local_54 == 0) {
              bVar4 = local_40 < local_50;
            }
            else {
              bVar4 = (bool)((byte)(local_44 - local_54 >> 0x1f) >> 7);
            }
          }
          else {
            bVar4 = (bool)((byte)(local_48 - local_58 >> 0x1f) >> 7);
          }
          if (bVar4 != false) goto LAB_145345397;
        }
      }
      lVar3 = *param_1;
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x60;
    } while (iVar8 < *(int *)(lVar3 + 0x30));
  }
  uStack_30 = lVar9 + (longlong)iVar6 * 4;
  local_38 = lVar9;
  FUN_145345950(param_1,&local_38);
  if ((-1 < (int)uVar7) && (lVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar9,(ulonglong)(uVar7 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145345470 FUN_145345470 body=524 status=ok
// SIG undefined FUN_145345470(void)

void FUN_145345470(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  
  local_48 = 0;
  uStack_40._0_4_ = 0;
  iVar6 = (int)uStack_40;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0x80000000;
  if (0 < *(int *)(*param_1 + 0x30)) {
    FUN_1401f86b2(&local_48,&PTR_vftable_14c6e47c0,(longlong)*(int *)(*param_1 + 0x30));
    iVar6 = (int)uStack_40;
  }
  uStack_40._0_4_ = iVar6;
  lVar3 = *param_1;
  iVar8 = 0;
  lVar10 = local_48;
  iVar6 = (int)uStack_40;
  uVar9 = uStack_40._4_4_;
  if (0 < *(int *)(lVar3 + 0x30)) {
    lVar11 = 0;
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_2 + 8) + lVar7) == param_3) &&
         (lVar5 = *(longlong *)(lVar3 + 0x28) + lVar11, -1 < *(int *)(lVar5 + 4))) {
        if (-1 < *(int *)(lVar5 + 0x10)) {
          FUN_144cb6610(lVar3,lVar5,&local_58,&local_68);
          if (local_58 - local_68 == 0) {
            if (local_54 - local_64 == 0) {
              bVar4 = local_50 < local_60;
            }
            else {
              bVar4 = (bool)((byte)(local_54 - local_64 >> 0x1f) >> 7);
            }
          }
          else {
            bVar4 = (bool)((byte)(local_58 - local_68 >> 0x1f) >> 7);
          }
          if (bVar4 == false) goto LAB_1453455e8;
        }
        iVar1 = iVar6 + 1;
        if ((int)(uVar9 & 0x7fffffff) < iVar1) {
          FUN_1401f86b2(&local_48,&PTR_vftable_14c6e47c0,(longlong)iVar1);
          lVar10 = local_48;
          iVar6 = (int)uStack_40;
          uVar9 = uStack_40._4_4_;
        }
        piVar2 = (int *)(lVar10 + (longlong)iVar6 * 4);
        iVar6 = iVar1;
        uStack_40._0_4_ = iVar1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar8;
        }
      }
LAB_1453455e8:
      lVar3 = *param_1;
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 4;
      lVar11 = lVar11 + 0x60;
    } while (iVar8 < *(int *)(lVar3 + 0x30));
  }
  uStack_40 = lVar10 + (longlong)iVar6 * 4;
  local_48 = lVar10;
  FUN_145345950(param_1,&local_48);
  if ((-1 < (int)uVar9) && (lVar10 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar10,(ulonglong)(uVar9 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145345680 FUN_145345680 body=507 status=ok
// SIG undefined FUN_145345680(void)

void FUN_145345680(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  piVar6 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  local_38 = 0;
  uStack_30._0_4_ = 0;
  iVar7 = (int)uStack_30;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0x80000000;
  iVar3 = (int)((longlong)piVar2 - (longlong)piVar6 >> 2);
  lVar10 = local_38;
  iVar8 = iVar7;
  uVar9 = uStack_30._4_4_;
  if (0 < iVar3) {
    FUN_1401f86b2(&local_38,&PTR_vftable_14c6e47c0,(longlong)iVar3);
    lVar10 = local_38;
    iVar7 = (int)uStack_30;
    iVar8 = (int)uStack_30;
    uVar9 = uStack_30._4_4_;
  }
  for (; uStack_30._0_4_ = iVar8, piVar6 != piVar2; piVar6 = piVar6 + 1) {
    iVar3 = *piVar6;
    iVar8 = iVar7;
    if (((int)param_1[1] < 0) || (*(int *)(param_1[2] + (longlong)iVar3 * 4) == (int)param_1[1])) {
      lVar5 = (longlong)iVar3 * 0x60 + *(longlong *)(*param_1 + 0x28);
      if (-1 < *(int *)(lVar5 + 4)) {
        if (-1 < *(int *)(lVar5 + 0x10)) {
          FUN_144cb6610(*param_1,lVar5,&local_48,&local_58);
          if (local_48 - local_58 == 0) {
            if (local_44 - local_54 == 0) {
              bVar4 = local_40 < local_50;
            }
            else {
              bVar4 = (bool)((byte)(local_44 - local_54 >> 0x1f) >> 7);
            }
          }
          else {
            bVar4 = (bool)((byte)(local_48 - local_58 >> 0x1f) >> 7);
          }
          if (bVar4 == false) {
            iVar3 = *(int *)(lVar5 + 0x10);
          }
        }
        iVar8 = iVar7 + 1;
        if ((int)(uVar9 & 0x7fffffff) < iVar8) {
          FUN_1401f86b2(&local_38,&PTR_vftable_14c6e47c0,(longlong)iVar8);
          lVar10 = local_38;
          iVar7 = (int)uStack_30;
          uVar9 = uStack_30._4_4_;
        }
        piVar1 = (int *)(lVar10 + (longlong)iVar7 * 4);
        uStack_30._0_4_ = iVar8;
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar3;
        }
      }
    }
    iVar7 = iVar8;
    iVar8 = (int)uStack_30;
  }
  uStack_30 = lVar10 + (longlong)iVar7 * 4;
  local_38 = lVar10;
  FUN_145345950(param_1,&local_38);
  if ((-1 < (int)uVar9) && (lVar10 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar10,(ulonglong)(uVar9 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145345880 FUN_145345880 body=130 status=ok
// SIG undefined FUN_145345880(void)

void FUN_145345880(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x60 + *(longlong *)(*param_1 + 0x28);
  cVar1 = FUN_1453451e0(*param_1,lVar2);
  if (cVar1 == '\0') {
    param_2 = *(int *)(lVar2 + 0x10);
  }
  lVar2 = (longlong)param_2;
  if ((((int)param_1[1] < 0) || (*(int *)(param_1[2] + lVar2 * 4) == (int)param_1[1])) &&
     (*(int *)(param_1[5] + lVar2 * 4) == -2)) {
    if ((int)param_1[4] < 0) {
      *(int *)(param_1 + 4) = param_2;
    }
    if (-1 < *(int *)((longlong)param_1 + 0x24)) {
      *(int *)(param_1[5] + (longlong)*(int *)((longlong)param_1 + 0x24) * 4) = param_2;
    }
    *(undefined4 *)(param_1[5] + lVar2 * 4) = 0xffffffff;
    *(int *)((longlong)param_1 + 0x24) = param_2;
  }
  return;
}



// FUNCTION 145345910 FUN_145345910 body=63 status=ok
// SIG undefined FUN_145345910(void)

longlong FUN_145345910(longlong *param_1)

{
  longlong lVar1;
  
  do {
    lVar1 = (longlong)(int)param_1[4];
    if ((int)param_1[4] < 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1[5] + lVar1 * 4);
    *(undefined4 *)(param_1[5] + lVar1 * 4) = 0xfffffffe;
  } while (*(int *)(lVar1 * 0x60 + 4 + *(longlong *)(*param_1 + 0x28)) < 0);
  return lVar1;
}



// FUNCTION 145345950 FUN_145345950 body=301 status=ok
// SIG undefined FUN_145345950(void)

void FUN_145345950(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 6) = 0;
  iVar6 = *(int *)(*param_1 + 0x30);
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar6) {
    FUN_141807aa8(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar1 = (int)param_1[6];
  if (iVar1 < iVar6) {
    *(int *)(param_1 + 6) = iVar6;
    if (0 < iVar6 - iVar1) {
      uVar3 = (ulonglong)(uint)(iVar6 - iVar1);
      puVar4 = (undefined4 *)(param_1[5] + (longlong)iVar1 * 4);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xfffffffe;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar6 < iVar1) {
    *(int *)(param_1 + 6) = iVar6;
  }
  piVar2 = (int *)param_2[1];
  piVar5 = (int *)*param_2;
  param_1[4] = -1;
  iVar6 = (int)((longlong)piVar2 - (longlong)piVar5 >> 2);
  if (1 < iVar6) {
    FUN_145345a80(piVar5,0,iVar6 + -1,param_1);
  }
  for (; piVar5 != piVar2; piVar5 = piVar5 + 1) {
    iVar6 = *piVar5;
    if (*(int *)((longlong)iVar6 * 4 + param_1[5]) == -2) {
      if ((int)param_1[4] < 0) {
        *(int *)(param_1 + 4) = iVar6;
      }
      if (-1 < *(int *)((longlong)param_1 + 0x24)) {
        *(int *)(param_1[5] + (longlong)*(int *)((longlong)param_1 + 0x24) * 4) = iVar6;
      }
      *(undefined4 *)((longlong)iVar6 * 4 + param_1[5]) = 0xffffffff;
      *(int *)((longlong)param_1 + 0x24) = iVar6;
    }
  }
  return;
}



// FUNCTION 145345a80 FUN_145345a80 body=1446 status=ok
// SIG undefined FUN_145345a80(void)

void FUN_145345a80(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  bool bVar19;
  uint local_res10;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_90;
  int local_80;
  int local_70;
  ulonglong local_50;
  
  uVar7 = (ulonglong)(int)param_2;
  uVar18 = uVar7;
  local_res10 = param_2;
LAB_145345ab1:
  local_50 = (ulonglong)param_3;
  local_a8 = (uint)uVar7;
  lVar12 = (longlong)*(int *)(param_1 + ((longlong)(int)(local_a8 + param_3) >> 1) * 4);
  local_a4 = param_3;
LAB_145345af0:
  lVar5 = *(longlong *)(*param_4 + 0x38);
  lVar6 = *(longlong *)(*param_4 + 0x28);
  puVar1 = (undefined8 *)(lVar5 + (ulonglong)(*(uint *)(lVar6 + lVar12 * 0x60) & 0x3fffffff) * 0xc);
  do {
    iVar10 = *(int *)(puVar1 + 1);
    lVar13 = (longlong)*(int *)(param_1 + uVar18 * 4) * 0x60;
    uVar7 = (ulonglong)(*(uint *)(lVar13 + lVar6) & 0x3fffffff);
    uVar15 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
    puVar2 = (undefined8 *)(lVar5 + uVar7 * 0xc);
    iVar3 = *(int *)(puVar2 + 1);
    uVar17 = *puVar1;
    if ((((int)uVar15 == (int)uVar17) &&
        ((int)((ulonglong)uVar15 >> 0x20) == (int)((ulonglong)uVar17 >> 0x20))) && (iVar3 == iVar10)
       ) {
      uVar15 = *puVar2;
      uVar7 = (ulonglong)(*(uint *)(lVar12 * 0x60 + lVar6) & 0x3fffffff);
      uVar17 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar5 + 8 + uVar7 * 0xc);
      if ((((int)uVar15 != (int)uVar17) ||
          ((int)((ulonglong)uVar15 >> 0x20) != (int)((ulonglong)uVar17 >> 0x20))) ||
         (iVar3 != iVar10)) goto LAB_145345c95;
      uVar7 = (ulonglong)
              (*(uint *)((longlong)*(int *)(lVar13 + 0xc + lVar6) * 0x60 + lVar6) & 0x3fffffff);
      uVar15 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
      iVar3 = *(int *)(lVar5 + 8 + uVar7 * 0xc);
      local_90 = (int)uVar15;
      uVar7 = (ulonglong)
              (*(uint *)((longlong)*(int *)(lVar12 * 0x60 + 0xc + lVar6) * 0x60 + lVar6) &
              0x3fffffff);
      uVar17 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar5 + 8 + uVar7 * 0xc);
      local_a0 = (int)uVar17;
      if (local_90 - local_a0 == 0) {
        iVar14 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
        if (iVar14 != 0) {
          bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
          goto LAB_145345cdb;
        }
        bVar19 = SBORROW4(iVar3,iVar10);
        iVar3 = iVar3 - iVar10;
LAB_145345cd8:
        bVar19 = bVar19 != iVar3 < 0;
      }
      else {
        bVar19 = (bool)((byte)(local_90 - local_a0 >> 0x1f) >> 7);
      }
    }
    else {
LAB_145345c95:
      iVar14 = (int)uVar15 - (int)uVar17;
      if (iVar14 == 0) {
        iVar14 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
        if (iVar14 == 0) {
          bVar19 = SBORROW4(iVar3,iVar10);
          iVar3 = iVar3 - iVar10;
          goto LAB_145345cd8;
        }
        bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
      }
      else {
        bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
      }
    }
LAB_145345cdb:
    if (bVar19 == false) break;
    local_a8 = local_a8 + 1;
    uVar18 = uVar18 + 1;
  } while( true );
  lVar5 = *(longlong *)(*param_4 + 0x38);
  lVar6 = *(longlong *)(*param_4 + 0x28);
  puVar1 = (undefined8 *)(lVar5 + (ulonglong)(*(uint *)(lVar6 + lVar12 * 0x60) & 0x3fffffff) * 0xc);
  while( true ) {
    uVar15 = *puVar1;
    iVar10 = *(int *)(puVar1 + 1);
    lVar13 = (longlong)*(int *)(param_1 + local_50 * 4) * 0x60;
    uVar7 = (ulonglong)(*(uint *)(lVar13 + lVar6) & 0x3fffffff);
    uVar17 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
    puVar2 = (undefined8 *)(lVar5 + uVar7 * 0xc);
    iVar3 = *(int *)(puVar2 + 1);
    iVar16 = (int)uVar17;
    iVar11 = (int)uVar15;
    iVar14 = (int)((ulonglong)uVar15 >> 0x20);
    iVar9 = (int)((ulonglong)uVar17 >> 0x20);
    if (((iVar11 == iVar16) && (iVar14 == iVar9)) && (iVar10 == iVar3)) {
      uVar7 = (ulonglong)(*(uint *)(lVar12 * 0x60 + lVar6) & 0x3fffffff);
      uVar15 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar5 + 8 + uVar7 * 0xc);
      uVar17 = *puVar2;
      iVar16 = (int)uVar17;
      iVar11 = (int)uVar15;
      iVar14 = (int)((ulonglong)uVar15 >> 0x20);
      iVar9 = (int)((ulonglong)uVar17 >> 0x20);
      if (((iVar11 == iVar16) && (iVar14 == iVar9)) && (iVar10 == iVar3)) {
        uVar7 = (ulonglong)
                (*(uint *)((longlong)*(int *)(lVar12 * 0x60 + 0xc + lVar6) * 0x60 + lVar6) &
                0x3fffffff);
        uVar15 = *(undefined8 *)(lVar5 + uVar7 * 0xc);
        local_70 = (int)uVar15;
        uVar8 = (ulonglong)
                (*(uint *)((longlong)*(int *)(lVar13 + 0xc + lVar6) * 0x60 + lVar6) & 0x3fffffff);
        uVar17 = *(undefined8 *)(lVar5 + uVar8 * 0xc);
        local_80 = (int)uVar17;
        if (local_70 - local_80 == 0) {
          iVar10 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
          if (iVar10 == 0) {
            bVar19 = *(int *)(lVar5 + 8 + uVar7 * 0xc) < *(int *)(lVar5 + 8 + uVar8 * 0xc);
          }
          else {
            bVar19 = (bool)((byte)(iVar10 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(local_70 - local_80 >> 0x1f) >> 7);
        }
      }
      else {
        iVar11 = iVar11 - iVar16;
        if (iVar11 == 0) {
          iVar14 = iVar14 - iVar9;
          if (iVar14 == 0) {
            bVar19 = iVar10 < iVar3;
          }
          else {
            bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(iVar11 >> 0x1f) >> 7);
        }
      }
    }
    else {
      iVar11 = iVar11 - iVar16;
      if (iVar11 == 0) {
        iVar14 = iVar14 - iVar9;
        if (iVar14 == 0) {
          bVar19 = iVar10 < iVar3;
        }
        else {
          bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
        }
      }
      else {
        bVar19 = (bool)((byte)(iVar11 >> 0x1f) >> 7);
      }
    }
    if (bVar19 == false) break;
    local_a4 = local_a4 + -1;
    local_50 = local_50 - 1;
  }
  if ((longlong)local_50 < (longlong)uVar18) goto LAB_145345fd4;
  if (local_50 != uVar18) {
    uVar4 = *(undefined4 *)(param_1 + local_50 * 4);
    *(undefined4 *)(param_1 + local_50 * 4) = *(undefined4 *)(param_1 + uVar18 * 4);
    *(undefined4 *)(param_1 + uVar18 * 4) = uVar4;
  }
  local_50 = local_50 - 1;
  local_a4 = local_a4 + -1;
  local_a8 = local_a8 + 1;
  uVar18 = uVar18 + 1;
  if ((longlong)local_50 < (longlong)uVar18) goto LAB_145345fd4;
  goto LAB_145345af0;
LAB_145345fd4:
  if ((int)local_res10 < local_a4) {
    FUN_145345a80(param_1,local_res10,local_a4,param_4);
  }
  if (param_3 <= (int)local_a8) {
    return;
  }
  uVar7 = (ulonglong)local_a8;
  local_res10 = local_a8;
  goto LAB_145345ab1;
}



// FUNCTION 145346030 FUN_145346030 body=500 status=ok
// SIG undefined FUN_145346030(void)

void FUN_145346030(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  
  puVar7 = (undefined8 *)param_2[1];
  puVar9 = (undefined8 *)*param_2;
  if (puVar9 != puVar7) {
    if ((int)param_1[1] == 0) {
      iVar5 = (int)((longlong)puVar7 - (longlong)puVar9 >> 4);
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
        FUN_14504e0f0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
        puVar6 = (undefined8 *)*param_1;
      }
      else {
        puVar6 = (undefined8 *)*param_1;
      }
      do {
        if (puVar6 != (undefined8 *)0x0) {
          uVar2 = puVar9[1];
          *puVar6 = *puVar9;
          puVar6[1] = uVar2;
        }
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar9 != puVar7);
    }
    else {
      iVar5 = FUN_1453465b0(param_1,(longlong)((int)param_1[1] + -1) * 0x10 + *param_1,puVar9);
      if (iVar5 == 0) {
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      }
      else if (iVar5 != 1) {
        if (iVar5 == 2) {
          lVar4 = param_1[1];
          iVar5 = (int)((longlong)puVar7 - (longlong)puVar9 >> 4) + (int)lVar4;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
            FUN_14504e0f0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
          }
          puVar6 = (undefined8 *)((longlong)(int)lVar4 * 0x10 + *param_1);
          do {
            if (puVar6 != (undefined8 *)0x0) {
              uVar2 = puVar9[1];
              *puVar6 = *puVar9;
              puVar6[1] = uVar2;
            }
            puVar9 = puVar9 + 2;
            puVar6 = puVar6 + 2;
          } while (puVar9 != puVar7);
          *(int *)(param_1 + 1) = iVar5;
          return;
        }
        FUN_144bde670(local_228,local_218,0x200);
        FUN_144be6160(local_228,"invalid numToKeep");
        iVar5 = FUN_144bfc110(0x4d1f63a1,local_218,
                              "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationVertexIterator.cpp"
                              ,0x9a);
        if (iVar5 == 0) {
          FUN_144bde6e0(local_228);
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar6 = puVar9 + 2;
      uVar10 = (int)((longlong)puVar7 - (longlong)puVar9 >> 4) - 1;
      uVar8 = (ulonglong)uVar10;
      lVar4 = param_1[1];
      iVar5 = (int)lVar4 + uVar10;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
        FUN_14504e0f0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar5);
      }
      puVar7 = (undefined8 *)((longlong)(int)lVar4 * 0x10 + *param_1);
      if (0 < (int)uVar10) {
        do {
          if (puVar7 != (undefined8 *)0x0) {
            uVar2 = *puVar6;
            uVar3 = puVar6[1];
            puVar6 = puVar6 + 2;
            *puVar7 = uVar2;
            puVar7[1] = uVar3;
          }
          uVar8 = uVar8 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar8 != 0);
      }
    }
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 145346230 FUN_145346230 body=442 status=ok
// SIG undefined FUN_145346230(void)

void FUN_145346230(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [512];
  
  lVar1 = *param_2;
  lVar12 = param_2[1];
  if (lVar1 == lVar12) {
    return;
  }
  iVar8 = 0;
  if ((int)param_1[1] != 0) {
    local_218 = *(int *)(lVar12 + -0x10);
    uVar10 = *(undefined4 *)(lVar12 + -0xc);
    uVar3 = *(undefined4 *)(lVar12 + -8);
    uStack_20c = *(undefined4 *)(lVar12 + -4);
    uStack_214 = uVar3;
    uStack_210 = uVar10;
    if ((local_218 != 0) && (uStack_214 = uVar10, uStack_210 = uVar3, local_218 == 1)) {
      uVar5 = (uint)uStack_20c >> 8;
      uStack_20c = CONCAT31((int3)uVar5,(char)uStack_20c == '\0');
      uStack_214 = uVar3;
      uStack_210 = uVar10;
    }
    iVar7 = FUN_1453465b0(param_1,(longlong)((int)param_1[1] + -1) * 0x10 + *param_1,&local_218);
    if (iVar7 == 0) {
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    }
    else if (iVar7 != 1) {
      iVar8 = 0;
      if (iVar7 != 2) {
        FUN_144bde670(&local_218,local_208,0x200);
        FUN_144be6160(&local_218,"invalid numToKeep");
        iVar8 = FUN_144bfc110(0x38256bc9,local_208,
                              "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationVertexIterator.cpp"
                              ,0x74);
        if (iVar8 != 0) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FUN_144bde6e0(&local_218);
        iVar8 = 0;
      }
      goto LAB_14534632a;
    }
    iVar8 = 1;
  }
LAB_14534632a:
  lVar6 = param_1[1];
  iVar8 = (int)(lVar12 - lVar1 >> 4) - iVar8;
  iVar7 = iVar8 + (int)lVar6;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
    FUN_14504e0f0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar7);
  }
  iVar8 = iVar8 + -1;
  *(int *)(param_1 + 1) = iVar7;
  lVar12 = (longlong)iVar8;
  if (-1 < iVar8) {
    puVar9 = (undefined8 *)((longlong)(int)lVar6 * 0x10 + *param_1 + 8);
    puVar11 = (undefined8 *)(lVar12 * 0x10 + lVar1);
    do {
      uVar4 = puVar11[1];
      puVar9[-1] = *puVar11;
      *puVar9 = uVar4;
      if (*(int *)(puVar9 + -1) == 0) {
        uVar10 = *(undefined4 *)((longlong)puVar9 + -4);
        *(undefined4 *)((longlong)puVar9 + -4) = *(undefined4 *)puVar9;
LAB_1453463c0:
        *(undefined4 *)puVar9 = uVar10;
      }
      else if (*(int *)(puVar9 + -1) == 1) {
        uVar10 = *(undefined4 *)((longlong)puVar9 + -4);
        *(undefined4 *)((longlong)puVar9 + -4) = *(undefined4 *)puVar9;
        *(bool *)((longlong)puVar9 + 4) = *(char *)((longlong)puVar9 + 4) == '\0';
        goto LAB_1453463c0;
      }
      puVar9 = puVar9 + 2;
      puVar11 = puVar11 + -2;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return;
}



// FUNCTION 1453463f0 FUN_1453463f0 body=162 status=ok
// SIG undefined FUN_1453463f0(void)

void FUN_1453463f0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong lStack_10;
  
  lVar2 = *param_2;
  iVar1 = *(int *)((longlong)param_4 * 0x60 + 0x10 + *(longlong *)(param_3 + 0x28));
  if (iVar1 < param_4) {
    lVar3 = (longlong)param_4 * 0x20;
    local_18 = *(longlong *)(lVar3 + 0x10 + lVar2);
    lStack_10 = (longlong)*(int *)(lVar3 + 0x18 + lVar2) * 0x10 + local_18;
    FUN_145346030(param_1,&local_18);
    return;
  }
  lVar3 = (longlong)iVar1 * 0x20;
  local_18 = *(longlong *)(lVar3 + 0x10 + lVar2);
  lStack_10 = (longlong)*(int *)(lVar3 + 0x18 + lVar2) * 0x10 + local_18;
  FUN_145346230(param_1,&local_18);
  return;
}



// FUNCTION 1453464a0 FUN_1453464a0 body=265 status=ok
// SIG undefined FUN_1453464a0(void)

void FUN_1453464a0(longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  if (1 < (int)param_1[1]) {
    iVar5 = FUN_1453465b0(param_1,(longlong)((int)param_1[1] + -1) * 0x10 + *param_1);
    if (iVar5 == 0) {
      lVar4 = param_1[1];
      iVar5 = (int)lVar4 + -2;
      *(int *)(param_1 + 1) = iVar5;
      if (iVar5 != 0) {
        puVar1 = (undefined8 *)*param_1;
        puVar6 = puVar1 + ((longlong)(int)lVar4 + -2) * 2;
        if ((puVar1 != puVar6) && (puVar1 != (undefined8 *)0x0)) {
          uVar3 = puVar6[1];
          *puVar1 = *puVar6;
          puVar1[1] = uVar3;
        }
      }
    }
    else if (iVar5 == 1) {
      lVar4 = param_1[1];
      iVar5 = (int)lVar4 + -1;
      *(int *)(param_1 + 1) = iVar5;
      if (iVar5 != 0) {
        puVar1 = (undefined8 *)*param_1;
        puVar6 = puVar1 + (longlong)(int)lVar4 * 2 + -2;
        if ((puVar1 != puVar6) && (puVar1 != (undefined8 *)0x0)) {
          uVar3 = puVar6[1];
          *puVar1 = *puVar6;
          puVar1[1] = uVar3;
          return;
        }
      }
    }
    else if (iVar5 != 2) {
      FUN_144bde670(local_218,local_208,0x200);
      FUN_144be6160(local_218,"invalid numToKeep");
      iVar5 = FUN_144bfc110(0x7574d4f4,local_208,
                            "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationVertexIterator.cpp"
                            ,0xd1);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_144bde6e0(local_218);
      return;
    }
  }
  return;
}



// FUNCTION 1453465b0 FUN_1453465b0 body=294 status=ok
// SIG undefined FUN_1453465b0(void)

undefined1 FUN_1453465b0(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (*param_2 == 0) {
    if (*param_3 == 0) {
      uVar3 = 2;
      if (param_2[2] == param_3[1]) {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  else if (((*param_2 == 1) && (*param_3 == 1)) && (iVar4 = param_2[2], iVar4 == param_3[1])) {
    if ((char)param_2[3] == (char)param_3[3]) {
      iVar4 = param_3[2];
      param_2[2] = iVar4;
      return param_2[1] != iVar4;
    }
    while( true ) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
      if ((char)param_2[3] == '\0') {
        iVar4 = *(int *)((longlong)*(int *)((longlong)iVar4 * 0x60 + 0x10 + lVar1) * 0x60 + 0xc +
                        lVar1);
      }
      else {
        iVar4 = *(int *)((longlong)*(int *)((longlong)iVar4 * 0x60 + 8 + lVar1) * 0x60 + 0x10 +
                        lVar1);
      }
      if (iVar4 == param_2[1]) break;
      if (iVar4 == param_3[2]) {
        param_2[2] = iVar4;
        return true;
      }
    }
    if (iVar4 == param_3[2]) {
      return false;
    }
    uVar2 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = uVar2;
    param_2[1] = iVar4;
    return true;
  }
  return 2;
}



// FUNCTION 1453466e0 FUN_1453466e0 body=522 status=ok
// SIG undefined FUN_1453466e0(void)

undefined8 FUN_1453466e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uStackX_1c;
  
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 != *(int *)(param_2 + 0x10)) {
    do {
      lVar8 = (longlong)iVar5 * 0x60 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
      iVar9 = *(int *)(lVar8 + 0x10);
      iVar4 = iVar9;
      if (iVar9 <= iVar5) {
        iVar4 = iVar5;
      }
      lVar1 = (longlong)iVar4 * 4;
      iVar2 = *(int *)(lVar1 + **(longlong **)(param_1 + 0x28));
      if (iVar2 == -1) {
        plVar3 = *(longlong **)(param_1 + 0x18);
        iVar2 = *(int *)(param_1 + 0x24);
        uStackX_1c = CONCAT31(uStackX_1c._1_3_,iVar9 <= iVar5);
        iVar5 = (int)plVar3[2];
        if (iVar5 == -1) {
          iVar5 = (int)plVar3[1];
          iVar9 = iVar5 + 1;
          if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar9) {
            FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar9);
          }
          *(int *)(plVar3 + 1) = iVar9;
        }
        else {
          *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar5 * 0x10);
        }
        lVar7 = (longlong)iVar5;
        *(ulonglong *)(*plVar3 + lVar7 * 0x10) = CONCAT44(uStackX_1c,iVar4);
        if (iVar2 == -1) {
          iVar9 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar5;
          *(undefined4 *)(*plVar3 + 8 + lVar7 * 0x10) = 0xffffffff;
        }
        else {
          lVar6 = (longlong)iVar2 * 0x10 + *plVar3;
          iVar9 = *(int *)(lVar6 + 0xc);
          *(int *)(lVar6 + 0xc) = iVar5;
          *(int *)(*plVar3 + 8 + lVar7 * 0x10) = iVar2;
        }
        if (iVar9 == -1) {
          *(int *)(param_1 + 0x24) = iVar5;
          *(undefined4 *)(*plVar3 + 0xc + lVar7 * 0x10) = 0xffffffff;
        }
        else {
          *(int *)(*plVar3 + 0xc + lVar7 * 0x10) = iVar9;
          *(int *)(*plVar3 + 8 + (longlong)iVar9 * 0x10) = iVar5;
        }
        *(int *)(lVar1 + **(longlong **)(param_1 + 0x28)) = iVar5;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x18);
        lVar7 = (longlong)iVar2 * 0x10 + *plVar3;
        if (*(int *)(lVar7 + 8) == -1) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar7 + 0xc);
        }
        else {
          *(undefined4 *)(*plVar3 + 0xc + (longlong)*(int *)(lVar7 + 8) * 0x10) =
               *(undefined4 *)(lVar7 + 0xc);
        }
        if (*(int *)(lVar7 + 0xc) == -1) {
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar7 + 8);
        }
        else {
          *(undefined4 *)(*plVar3 + 8 + (longlong)*(int *)(lVar7 + 0xc) * 0x10) =
               *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(lVar7 + 0xc) = (int)plVar3[2];
        *(int *)(plVar3 + 2) = iVar2;
        *(undefined4 *)(lVar1 + **(longlong **)(param_1 + 0x28)) = 0xffffffff;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (iVar5 < 0) {
        return 0;
      }
      iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0xc +
                      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28));
    } while (iVar5 != *(int *)(param_2 + 0x10));
  }
  return 1;
}



// FUNCTION 1453468f0 FUN_1453468f0 body=524 status=ok
// SIG undefined FUN_1453468f0(void)

undefined8 FUN_1453468f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uStackX_1c;
  
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 != *(int *)(param_2 + 0x10)) {
    do {
      lVar8 = (longlong)iVar4 * 0x60 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
      iVar6 = iVar4;
      if (iVar4 <= *(int *)(lVar8 + 0x10)) {
        iVar6 = *(int *)(lVar8 + 0x10);
      }
      lVar1 = (longlong)iVar6 * 4;
      iVar2 = *(int *)(lVar1 + **(longlong **)(param_1 + 0x28));
      if (iVar2 == -1) {
        plVar3 = *(longlong **)(param_1 + 0x18);
        iVar2 = *(int *)(param_1 + 0x24);
        uStackX_1c = CONCAT31(uStackX_1c._1_3_,iVar4 <= *(int *)(lVar8 + 0x10));
        iVar4 = (int)plVar3[2];
        if (iVar4 == -1) {
          iVar4 = (int)plVar3[1];
          iVar9 = iVar4 + 1;
          if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar9) {
            FUN_145052c40(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar9);
          }
          *(int *)(plVar3 + 1) = iVar9;
        }
        else {
          *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(*plVar3 + 0xc + (longlong)iVar4 * 0x10);
        }
        lVar7 = (longlong)iVar4;
        *(ulonglong *)(*plVar3 + lVar7 * 0x10) = CONCAT44(uStackX_1c,iVar6);
        if (iVar2 == -1) {
          iVar6 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar4;
          *(undefined4 *)(*plVar3 + 8 + lVar7 * 0x10) = 0xffffffff;
        }
        else {
          lVar5 = (longlong)iVar2 * 0x10 + *plVar3;
          iVar6 = *(int *)(lVar5 + 0xc);
          *(int *)(lVar5 + 0xc) = iVar4;
          *(int *)(*plVar3 + 8 + lVar7 * 0x10) = iVar2;
        }
        if (iVar6 == -1) {
          *(int *)(param_1 + 0x24) = iVar4;
          *(undefined4 *)(*plVar3 + 0xc + lVar7 * 0x10) = 0xffffffff;
        }
        else {
          *(int *)(*plVar3 + 0xc + lVar7 * 0x10) = iVar6;
          *(int *)(*plVar3 + 8 + (longlong)iVar6 * 0x10) = iVar4;
        }
        *(int *)(lVar1 + **(longlong **)(param_1 + 0x28)) = iVar4;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x18);
        lVar7 = (longlong)iVar2 * 0x10 + *plVar3;
        if (*(int *)(lVar7 + 8) == -1) {
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar7 + 0xc);
        }
        else {
          *(undefined4 *)(*plVar3 + 0xc + (longlong)*(int *)(lVar7 + 8) * 0x10) =
               *(undefined4 *)(lVar7 + 0xc);
        }
        if (*(int *)(lVar7 + 0xc) == -1) {
          *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar7 + 8);
        }
        else {
          *(undefined4 *)(*plVar3 + 8 + (longlong)*(int *)(lVar7 + 0xc) * 0x10) =
               *(undefined4 *)(lVar7 + 8);
        }
        *(int *)(lVar7 + 0xc) = (int)plVar3[2];
        *(int *)(plVar3 + 2) = iVar2;
        *(undefined4 *)(lVar1 + **(longlong **)(param_1 + 0x28)) = 0xffffffff;
      }
      if (*(int *)(lVar8 + 0x10) < 0) {
        return 0;
      }
      iVar4 = *(int *)((longlong)*(int *)(lVar8 + 0x10) * 0x60 + 8 +
                      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28));
    } while (iVar4 != *(int *)(param_2 + 0x10));
  }
  return 1;
}



// FUNCTION 145346b00 FUN_145346b00 body=2810 status=ok
// SIG undefined FUN_145346b00(void)

void FUN_145346b00(int *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong local_98 [2];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  param_1[4] = -1;
  param_1[0x40] = 0;
  param_1[0x58] = 0;
  param_1[0x10] = 0;
  param_1[0x28] = 0;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = -1;
  param_1[9] = -1;
  param_1[10] = -1;
  param_1[0xb] = -1;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  *param_1 = param_2;
  lVar16 = (longlong)param_2 * 0x60 + *(longlong *)(param_3 + 0x28);
  param_1[1] = *(int *)(lVar16 + 8);
  param_1[4] = *(int *)(lVar16 + 0xc);
  iVar17 = *(int *)(lVar16 + 0x10);
  if (-1 < iVar17) {
    lVar7 = (longlong)iVar17 * 0x60 + *(longlong *)(param_3 + 0x28);
    param_1[7] = iVar17;
    param_1[8] = *(int *)(lVar7 + 8);
    param_1[0xb] = *(int *)(lVar7 + 0xc);
  }
  iVar17 = *(int *)(lVar16 + 8);
  bVar2 = false;
  if (iVar17 != *(int *)(lVar16 + 0x10)) {
    do {
      plVar4 = (longlong *)(param_1 + 0xe);
      lVar7 = (longlong)iVar17 * 0x60 + *(longlong *)(param_3 + 0x28);
      if (*(int *)(lVar7 + 0x10) < 0) {
        iVar12 = param_1[0x10] + 1;
        if ((int)(param_1[0x11] & 0x7fffffffU) < iVar12) {
          FUN_1401f86b2(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        piVar11 = (int *)(*plVar4 + (longlong)param_1[0x10] * 4);
        if (piVar11 != (int *)0x0) {
          *piVar11 = iVar17;
        }
        param_1[0x10] = iVar12;
        param_1[3] = iVar17;
        if (!bVar2) {
          param_1[2] = iVar17;
        }
        if (-1 < *(int *)(lVar16 + 0x10)) {
          iVar17 = param_1[0x10];
          plVar1 = (longlong *)(param_1 + 0x26);
          iVar12 = param_1[0x28];
          lVar7 = *(longlong *)(param_3 + 0x28);
          bVar2 = false;
          iVar3 = *(int *)((longlong)*(int *)(lVar16 + 0x10) * 0x60 + 0xc + lVar7);
          lVar10 = (longlong)iVar3;
          lVar18 = lVar10 * 0x60 + lVar7;
          uVar14 = *(uint *)(lVar18 + 0x10);
          if (-1 < (int)uVar14) {
            local_98[0] = (longlong)iVar12 * 4;
            do {
              local_88 = (ulonglong)uVar14 * 0x60 + lVar7;
              puVar6 = (undefined4 *)FUN_144cb4810(param_3,local_68,*(undefined4 *)(local_88 + 4));
              local_78 = *puVar6;
              uStack_74 = puVar6[1];
              uStack_70 = puVar6[2];
              uStack_6c = puVar6[3];
              puVar5 = (undefined8 *)FUN_144cb4810(param_3,local_58,*(undefined4 *)(lVar18 + 4));
              lVar7 = 0;
              piVar11 = (int *)*puVar5;
              iVar3 = (int)(puVar5[1] - (longlong)piVar11 >> 2);
              if (0 < iVar3) {
                lVar15 = CONCAT44(uStack_74,local_78) - (longlong)piVar11;
                do {
                  if (*piVar11 != *(int *)((longlong)piVar11 + lVar15)) {
                    if (!bVar2) {
                      param_1[0xc] = (int)lVar10;
                      bVar2 = true;
                    }
                    break;
                  }
                  lVar7 = lVar7 + 1;
                  piVar11 = piVar11 + 1;
                } while (lVar7 < iVar3);
              }
              iVar3 = param_1[0x10] + 1;
              iVar13 = param_1[0x10] - iVar17;
              if ((int)(param_1[0x11] & 0x7fffffffU) < iVar3) {
                FUN_141807aa8(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar3);
              }
              puVar6 = (undefined4 *)((longlong)iVar17 * 4 + *plVar4);
              if (0 < iVar13) {
                puVar9 = puVar6 + 1;
                if (puVar9 < puVar6) {
                  if ((longlong)iVar13 * 4 != 0) {
                    lVar15 = (longlong)puVar6 - (longlong)puVar9;
                    lVar7 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
                    do {
                      *puVar9 = *(undefined4 *)(lVar15 + (longlong)puVar9);
                      puVar9 = puVar9 + 1;
                      lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                  }
                }
                else if (puVar9 != puVar6) {
                  FUN_144bfb260(puVar9,puVar6,(longlong)iVar13 << 2);
                }
              }
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = *(undefined4 *)(lVar18 + 0x10);
              }
              param_1[0x10] = iVar3;
              iVar3 = param_1[0x28] + 1;
              iVar13 = param_1[0x28] - iVar12;
              if ((int)(param_1[0x29] & 0x7fffffffU) < iVar3) {
                FUN_141807aa8(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
              }
              piVar11 = (int *)(local_98[0] + *plVar1);
              if (0 < iVar13) {
                piVar8 = piVar11 + 1;
                if (piVar8 < piVar11) {
                  if ((longlong)iVar13 * 4 != 0) {
                    lVar18 = (longlong)piVar11 - (longlong)piVar8;
                    lVar7 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
                    do {
                      *piVar8 = *(int *)(lVar18 + (longlong)piVar8);
                      piVar8 = piVar8 + 1;
                      lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                  }
                }
                else if (piVar8 != piVar11) {
                  FUN_144bfb260(piVar8,piVar11,(longlong)iVar13 << 2);
                }
              }
              if (piVar11 != (int *)0x0) {
                *piVar11 = (int)lVar10;
              }
              param_1[0x28] = iVar3;
              iVar3 = *(int *)(local_88 + 0xc);
              lVar10 = (longlong)iVar3;
              lVar7 = *(longlong *)(param_3 + 0x28);
              lVar18 = lVar10 * 0x60 + lVar7;
              uVar14 = *(uint *)(lVar18 + 0x10);
            } while (-1 < (int)uVar14);
          }
          iVar17 = param_1[0x28] + 1;
          iVar13 = param_1[0x28] - iVar12;
          if ((int)(param_1[0x29] & 0x7fffffffU) < iVar17) {
            FUN_141807aa8(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
          }
          piVar11 = (int *)(*plVar1 + (longlong)iVar12 * 4);
          if (0 < iVar13) {
            piVar8 = piVar11 + 1;
            if (piVar8 < piVar11) {
              if ((longlong)iVar13 * 4 != 0) {
                lVar10 = (longlong)piVar11 - (longlong)piVar8;
                lVar7 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
                do {
                  *piVar8 = *(int *)(lVar10 + (longlong)piVar8);
                  piVar8 = piVar8 + 1;
                  lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
              }
            }
            else if (piVar8 != piVar11) {
              FUN_144bfb260(piVar8,piVar11,(longlong)iVar13 << 2);
            }
          }
          if (piVar11 != (int *)0x0) {
            *piVar11 = iVar3;
          }
          param_1[0x28] = iVar17;
          param_1[0xd] = iVar3;
          if (!bVar2) {
            param_1[0xc] = iVar3;
          }
        }
        break;
      }
      lVar18 = (longlong)*(int *)(lVar7 + 0x10) * 0x60 + *(longlong *)(param_3 + 0x28);
      plVar4 = (longlong *)FUN_144cb4810(param_3,&local_78,*(undefined4 *)(lVar18 + 4));
      local_88 = *plVar4;
      uStack_80 = (undefined4)plVar4[1];
      uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
      puVar5 = (undefined8 *)FUN_144cb4810(param_3,local_98,*(undefined4 *)(lVar7 + 4));
      lVar10 = 0;
      piVar11 = (int *)*puVar5;
      iVar12 = (int)(puVar5[1] - (longlong)piVar11 >> 2);
      if (0 < iVar12) {
        lVar15 = local_88 - (longlong)piVar11;
        do {
          if (*piVar11 != *(int *)((longlong)piVar11 + lVar15)) {
            if (-1 < *(int *)(lVar16 + 0x10)) {
              param_1[0xc] = *(int *)(lVar7 + 0x10);
            }
            if (!bVar2) {
              param_1[2] = iVar17;
              bVar2 = true;
            }
            break;
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (lVar10 < iVar12);
      }
      iVar12 = param_1[0x10] + 1;
      if ((int)(param_1[0x11] & 0x7fffffffU) < iVar12) {
        FUN_1401f86b2(param_1 + 0xe,&PTR_vftable_14c6e47a0,(longlong)iVar12);
      }
      piVar11 = (int *)(*(longlong *)(param_1 + 0xe) + (longlong)param_1[0x10] * 4);
      if (piVar11 != (int *)0x0) {
        *piVar11 = iVar17;
      }
      param_1[0x10] = iVar12;
      iVar17 = param_1[0x28] + 1;
      if ((int)(param_1[0x29] & 0x7fffffffU) < iVar17) {
        FUN_1401f86b2(param_1 + 0x26,&PTR_vftable_14c6e47a0,(longlong)iVar17);
      }
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x26) + (longlong)param_1[0x28] * 4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *(undefined4 *)(lVar7 + 0x10);
      }
      param_1[0x28] = iVar17;
      iVar17 = *(int *)(lVar18 + 8);
    } while (iVar17 != *(int *)(lVar16 + 0x10));
  }
  iVar17 = *(int *)(lVar16 + 0xc);
  bVar2 = false;
  if (iVar17 != *(int *)(lVar16 + 0x10)) {
    do {
      lVar7 = (longlong)iVar17 * 0x60 + *(longlong *)(param_3 + 0x28);
      if (*(int *)(lVar7 + 0x10) < 0) {
        iVar12 = param_1[0x58] + 1;
        if ((int)(param_1[0x59] & 0x7fffffffU) < iVar12) {
          FUN_1401f86b2(param_1 + 0x56,&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        piVar11 = (int *)(*(longlong *)(param_1 + 0x56) + (longlong)param_1[0x58] * 4);
        if (piVar11 != (int *)0x0) {
          *piVar11 = iVar17;
        }
        param_1[0x58] = iVar12;
        param_1[6] = iVar17;
        if (!bVar2) {
          param_1[5] = iVar17;
        }
        if (*(int *)(lVar16 + 0x10) < 0) {
          return;
        }
        lVar7 = *(longlong *)(param_3 + 0x28);
        iVar17 = param_1[0x58];
        iVar12 = param_1[0x40];
        bVar2 = false;
        iVar3 = *(int *)((longlong)*(int *)(lVar16 + 0x10) * 0x60 + 8 + lVar7);
        lVar10 = (longlong)iVar3;
        lVar16 = lVar10 * 0x60 + lVar7;
        uVar14 = *(uint *)(lVar16 + 0x10);
        if (-1 < (int)uVar14) {
          local_88 = (longlong)iVar12 * 4;
          local_98[0] = (longlong)iVar17 * 4;
          do {
            lVar18 = (ulonglong)uVar14 * 0x60 + lVar7;
            puVar6 = (undefined4 *)FUN_144cb4810(param_3,local_58,*(undefined4 *)(lVar18 + 4));
            local_78 = *puVar6;
            uStack_74 = puVar6[1];
            uStack_70 = puVar6[2];
            uStack_6c = puVar6[3];
            puVar5 = (undefined8 *)FUN_144cb4810(param_3,local_68,*(undefined4 *)(lVar16 + 4));
            lVar7 = 0;
            piVar11 = (int *)*puVar5;
            iVar3 = (int)(puVar5[1] - (longlong)piVar11 >> 2);
            if (0 < iVar3) {
              lVar15 = CONCAT44(uStack_74,local_78) - (longlong)piVar11;
              do {
                if (*piVar11 != *(int *)((longlong)piVar11 + lVar15)) {
                  if (!bVar2) {
                    param_1[9] = (int)lVar10;
                    bVar2 = true;
                  }
                  break;
                }
                lVar7 = lVar7 + 1;
                piVar11 = piVar11 + 1;
              } while (lVar7 < iVar3);
            }
            iVar3 = param_1[0x40] + 1;
            iVar13 = param_1[0x40] - iVar12;
            if ((int)(param_1[0x41] & 0x7fffffffU) < iVar3) {
              FUN_141807aa8(param_1 + 0x3e,&PTR_vftable_14c6e47a0,(longlong)iVar3);
            }
            piVar11 = (int *)(*(longlong *)(param_1 + 0x3e) + local_88);
            if (0 < iVar13) {
              piVar8 = piVar11 + 1;
              if (piVar8 < piVar11) {
                if ((longlong)iVar13 * 4 != 0) {
                  lVar15 = (longlong)piVar11 - (longlong)piVar8;
                  lVar7 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
                  do {
                    *piVar8 = *(int *)(lVar15 + (longlong)piVar8);
                    piVar8 = piVar8 + 1;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                }
              }
              else if (piVar8 != piVar11) {
                FUN_144bfb260(piVar8,piVar11,(longlong)iVar13 << 2);
              }
            }
            if (piVar11 != (int *)0x0) {
              *piVar11 = (int)lVar10;
            }
            param_1[0x40] = iVar3;
            iVar3 = param_1[0x58] + 1;
            iVar13 = param_1[0x58] - iVar17;
            if ((int)(param_1[0x59] & 0x7fffffffU) < iVar3) {
              FUN_141807aa8(param_1 + 0x56,&PTR_vftable_14c6e47a0,(longlong)iVar3);
            }
            puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x56) + local_98[0]);
            if (0 < iVar13) {
              puVar9 = puVar6 + 1;
              if (puVar9 < puVar6) {
                if ((longlong)iVar13 * 4 != 0) {
                  lVar10 = (longlong)puVar6 - (longlong)puVar9;
                  lVar7 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
                  do {
                    *puVar9 = *(undefined4 *)(lVar10 + (longlong)puVar9);
                    puVar9 = puVar9 + 1;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                }
              }
              else if (puVar9 != puVar6) {
                FUN_144bfb260(puVar9,puVar6,(longlong)iVar13 << 2);
              }
            }
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *(undefined4 *)(lVar16 + 0x10);
            }
            param_1[0x58] = iVar3;
            lVar7 = *(longlong *)(param_3 + 0x28);
            iVar3 = *(int *)(lVar18 + 8);
            lVar10 = (longlong)iVar3;
            lVar16 = lVar10 * 0x60 + lVar7;
            uVar14 = *(uint *)(lVar16 + 0x10);
          } while (-1 < (int)uVar14);
        }
        iVar17 = param_1[0x40] + 1;
        iVar13 = param_1[0x40] - iVar12;
        if ((int)(param_1[0x41] & 0x7fffffffU) < iVar17) {
          FUN_141807aa8(param_1 + 0x3e,&PTR_vftable_14c6e47a0,(longlong)iVar17);
        }
        piVar11 = (int *)(*(longlong *)(param_1 + 0x3e) + (longlong)iVar12 * 4);
        if (0 < iVar13) {
          piVar8 = piVar11 + 1;
          if (piVar8 < piVar11) {
            if ((longlong)iVar13 * 4 != 0) {
              lVar7 = (longlong)piVar11 - (longlong)piVar8;
              lVar16 = ((longlong)iVar13 * 4 - 1U >> 2) + 1;
              do {
                *piVar8 = *(int *)(lVar7 + (longlong)piVar8);
                piVar8 = piVar8 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else if (piVar8 != piVar11) {
            FUN_144bfb260(piVar8,piVar11,(longlong)iVar13 << 2);
          }
        }
        if (piVar11 != (int *)0x0) {
          *piVar11 = iVar3;
        }
        param_1[0x40] = iVar17;
        param_1[10] = iVar3;
        if (bVar2) {
          return;
        }
        param_1[9] = iVar3;
        return;
      }
      lVar18 = (longlong)*(int *)(lVar7 + 0x10) * 0x60 + *(longlong *)(param_3 + 0x28);
      puVar6 = (undefined4 *)FUN_144cb4810(param_3,local_58,*(undefined4 *)(lVar18 + 4));
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      plVar4 = (longlong *)FUN_144cb4810(param_3,local_68,*(undefined4 *)(lVar7 + 4));
      lVar10 = 0;
      iVar12 = (int)(plVar4[1] - *plVar4 >> 2);
      if (0 < iVar12) {
        piVar11 = (int *)CONCAT44(uStack_74,local_78);
        lVar15 = *plVar4 - (longlong)piVar11;
        do {
          if (*(int *)(lVar15 + (longlong)piVar11) != *piVar11) {
            if (-1 < *(int *)(lVar16 + 0x10)) {
              param_1[9] = *(int *)(lVar7 + 0x10);
            }
            if (!bVar2) {
              param_1[5] = iVar17;
              bVar2 = true;
            }
            break;
          }
          lVar10 = lVar10 + 1;
          piVar11 = piVar11 + 1;
        } while (lVar10 < iVar12);
      }
      iVar12 = param_1[0x40] + 1;
      if ((int)(param_1[0x41] & 0x7fffffffU) < iVar12) {
        FUN_1401f86b2(param_1 + 0x3e,&PTR_vftable_14c6e47a0,(longlong)iVar12);
      }
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x3e) + (longlong)param_1[0x40] * 4);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *(undefined4 *)(lVar7 + 0x10);
      }
      param_1[0x40] = iVar12;
      iVar12 = param_1[0x58] + 1;
      if ((int)(param_1[0x59] & 0x7fffffffU) < iVar12) {
        FUN_1401f86b2(param_1 + 0x56,&PTR_vftable_14c6e47a0,(longlong)iVar12);
      }
      piVar11 = (int *)(*(longlong *)(param_1 + 0x56) + (longlong)param_1[0x58] * 4);
      if (piVar11 != (int *)0x0) {
        *piVar11 = iVar17;
      }
      param_1[0x58] = iVar12;
      iVar17 = *(int *)(lVar18 + 0xc);
    } while (iVar17 != *(int *)(lVar16 + 0x10));
  }
  return;
}



// FUNCTION 145347600 FUN_145347600 body=364 status=ok
// SIG undefined FUN_145347600(void)

undefined4
FUN_145347600(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int *param_5
             ,undefined4 *param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong local_38;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  piVar2 = param_5;
  lVar1 = *(longlong *)(param_4 + 0x20);
  param_5._0_4_ = *param_5;
  if (((*(int *)(lVar1 + 0x108) == 0) ||
      ((*(byte *)((longlong)(int)param_5 + *(longlong *)(lVar1 + 0x100)) & 1) == 0)) &&
     (*(int *)(*(longlong *)(lVar1 + 0x168) + (longlong)(int)param_5 * 4) != -3)) {
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    FUN_145533730(&local_38,param_4,&param_5);
    local_28 = *param_6;
    uStack_24 = param_6[1];
    uStack_20 = param_6[2];
    uStack_1c = param_6[3];
    FUN_145533e60(&local_38,&local_28);
    if (local_30 == 0) {
      uVar3 = 0;
    }
    else {
      param_5._0_4_ = *piVar2;
      FUN_144c52b10(&local_28,param_4,&param_5,local_18);
      uVar3 = FUN_1453480d0(param_1,param_2,param_3,&local_38,local_18,param_7,param_8);
    }
    local_30 = 0;
    if ((-1 < (int)local_2c) && (local_38 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 4);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 145347770 FUN_145347770 body=412 status=ok
// SIG undefined FUN_145347770(void)

undefined4
FUN_145347770(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5,
             undefined1 (*param_6) [16],undefined4 param_7,undefined8 param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  longlong local_28;
  int local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  FUN_145533680(&local_28,param_4,param_5);
  local_18 = *param_6;
  FUN_145533e60(&local_28,local_18);
  if (local_20 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_4 + 0x18);
    lVar4 = *(longlong *)(param_4 + 0x28);
    lVar6 = (longlong)param_5;
    pfVar1 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + lVar6 * 0x10) * 0x10);
    pfVar2 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + 4 + lVar6 * 0x10) * 0x10);
    fVar12 = *pfVar2 - *pfVar1;
    fVar13 = pfVar2[1] - pfVar1[1];
    fVar14 = pfVar2[2] - pfVar1[2];
    fVar15 = pfVar2[3] - pfVar1[3];
    pfVar2 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + 8 + lVar6 * 0x10) * 0x10);
    fVar8 = *pfVar2 - *pfVar1;
    fVar9 = pfVar2[1] - pfVar1[1];
    fVar10 = pfVar2[2] - pfVar1[2];
    fVar11 = pfVar2[3] - pfVar1[3];
    fVar16 = fVar12 * fVar9 - fVar13 * fVar8;
    fVar9 = fVar13 * fVar10 - fVar14 * fVar9;
    fVar10 = fVar14 * fVar8 - fVar12 * fVar10;
    auVar17._12_4_ = fVar15 * fVar11 - fVar15 * fVar11;
    auVar17._4_4_ = fVar10;
    auVar17._0_4_ = fVar9;
    auVar17._8_4_ = fVar16;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar16 = fVar16 * fVar16;
    local_18 = ZEXT816(0);
    fVar8 = fVar16 + fVar10 + fVar9;
    if (fVar8 != 0.0) {
      auVar7._4_4_ = fVar16 + fVar10 + fVar9;
      auVar7._0_4_ = fVar8;
      auVar7._8_4_ = fVar16 + fVar10 + fVar9;
      auVar7._12_4_ = fVar16 + fVar10 + fVar9;
      auVar7 = sqrtps(local_18,auVar7);
      local_18 = divps(auVar17,auVar7);
    }
    uVar5 = FUN_1453480d0(param_1,param_2,param_3,&local_28,local_18,param_7,param_8);
  }
  local_20 = 0;
  if ((-1 < (int)local_1c) && (local_28 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_28,(ulonglong)(local_1c & 0x7fffffff) << 4);
  }
  return uVar5;
}



// FUNCTION 145347910 FUN_145347910 body=752 status=ok
// SIG undefined FUN_145347910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_145347910(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5
             ,float *param_6,undefined8 *param_7,undefined4 param_8,undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
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
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [5] [16];
  
  fVar14 = *param_4;
  fVar15 = param_4[1];
  fVar16 = param_4[2];
  fVar17 = param_4[3];
  fVar18 = *param_5;
  fVar19 = param_5[1];
  fVar20 = param_5[2];
  fVar21 = param_5[3];
  pfVar5 = (float *)*param_7;
  local_68 = fVar14;
  fStack_64 = fVar15;
  fStack_60 = fVar16;
  fStack_5c = fVar17;
  local_78 = fVar18;
  fStack_74 = fVar19;
  fStack_70 = fVar20;
  fStack_6c = fVar21;
  do {
    if (pfVar5 == (float *)param_7[1]) {
      local_88 = 0;
      local_80 = 0;
      local_7c = 0x80000000;
      uVar4 = FUN_1455335f0(&local_88,&local_68,&local_78,param_6);
      fVar16 = (local_78 - local_68) * param_6[1] - (fStack_74 - fStack_64) * *param_6;
      fVar14 = (fStack_74 - fStack_64) * param_6[2] - (fStack_70 - fStack_60) * param_6[1];
      fVar15 = (fStack_70 - fStack_60) * *param_6 - (local_78 - local_68) * param_6[2];
      local_58[0]._12_4_ =
           (fStack_6c - fStack_5c) * param_6[3] - (fStack_6c - fStack_5c) * param_6[3];
      local_58[0]._4_4_ = fVar15;
      local_58[0]._0_4_ = fVar14;
      local_58[0]._8_4_ = fVar16;
      auVar7._4_4_ = -(uint)(ABS(fVar15) <= fRam000000014c6daea4);
      auVar7._0_4_ = -(uint)(ABS(fVar14) <= _DAT_14c6daea0);
      auVar7._8_4_ = -(uint)(ABS(fVar16) <= fRam000000014c6daea8);
      auVar7._12_4_ = -(uint)(ABS(local_58[0]._12_4_) <= fRam000000014c6daeac);
      uVar4 = movmskps(uVar4,auVar7);
      if (((byte)uVar4 & 7) == 7) {
        uVar4 = 0;
      }
      else {
        fVar14 = fVar14 * fVar14;
        fVar15 = fVar15 * fVar15;
        fVar16 = fVar16 * fVar16;
        fVar17 = fVar16 + fVar15 + fVar14;
        auVar7 = ZEXT816(0);
        if (fVar17 != 0.0) {
          auVar1._4_4_ = fVar16 + fVar15 + fVar14;
          auVar1._0_4_ = fVar17;
          auVar1._8_4_ = fVar16 + fVar15 + fVar14;
          auVar1._12_4_ = fVar16 + fVar15 + fVar14;
          auVar7 = sqrtps(ZEXT816(0),auVar1);
          auVar7 = divps(local_58[0],auVar7);
        }
        local_58[0] = auVar7;
        uVar4 = FUN_1453480d0(param_1,param_2,param_3,&local_88,local_58,param_8,param_9);
      }
      local_80 = 0;
      if ((-1 < (int)local_7c) && (local_88 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_88,(ulonglong)(local_7c & 0x7fffffff) << 4);
      }
      return uVar4;
    }
    fVar10 = *pfVar5;
    fVar12 = pfVar5[1];
    fVar13 = pfVar5[2];
    fVar9 = pfVar5[3];
    fVar22 = fVar14 * fVar10 + fVar15 * fVar12;
    fVar24 = fVar15 * fVar12 + fVar14 * fVar10;
    fVar26 = fVar16 * fVar13 + fVar9;
    fVar27 = fVar9 + fVar16 * fVar13;
    fVar23 = fVar22 + fVar26;
    fVar25 = fVar24 + fVar27;
    fVar26 = fVar26 + fVar22;
    fVar27 = fVar27 + fVar24;
    bVar3 = fVar10 * fVar18 + fVar12 * fVar19 + fVar13 * fVar20 + fVar9 < 0.0;
    if (fVar23 < 0.0) {
      if (bVar3) {
        return 0;
      }
      fVar10 = (fVar14 - fVar18) * fVar10;
      fVar12 = (fVar15 - fVar19) * fVar12;
      fVar13 = (fVar16 - fVar20) * fVar13;
      auVar11._0_4_ = fVar13 + fVar12 + fVar10;
      auVar11._4_4_ = fVar13 + fVar12 + fVar10;
      auVar11._8_4_ = fVar13 + fVar12 + fVar10;
      auVar11._12_4_ = fVar13 + fVar12 + fVar10;
      if (auVar11._0_4_ * auVar11._0_4_ < _DAT_14c6daea0) {
        return 0;
      }
      auVar6._0_4_ = 0.0 - fVar23;
      auVar6._4_4_ = 0.0 - fVar25;
      auVar6._8_4_ = 0.0 - fVar26;
      auVar6._12_4_ = 0.0 - fVar27;
      auVar7 = divps(auVar6,auVar11);
      fVar14 = fVar14 + auVar7._0_4_ * (fVar14 - fVar18);
      fVar15 = fVar15 + auVar7._4_4_ * (fVar15 - fVar19);
      fVar16 = fVar16 + auVar7._8_4_ * (fVar16 - fVar20);
      fVar17 = fVar17 + auVar7._12_4_ * (fVar17 - fVar21);
      local_68 = fVar14;
      fStack_64 = fVar15;
      fStack_60 = fVar16;
      fStack_5c = fVar17;
    }
    else if (bVar3) {
      fVar10 = fVar10 * (fVar14 - fVar18);
      fVar12 = fVar12 * (fVar15 - fVar19);
      fVar13 = fVar13 * (fVar16 - fVar20);
      fVar9 = fVar13 + fVar12 + fVar10;
      if (fVar9 * fVar9 < _DAT_14c6daea0) {
        return 0;
      }
      auVar8._0_4_ = 0.0 - fVar23;
      auVar8._4_4_ = 0.0 - fVar25;
      auVar8._8_4_ = 0.0 - fVar26;
      auVar8._12_4_ = 0.0 - fVar27;
      auVar2._4_4_ = fVar13 + fVar12 + fVar10;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = fVar13 + fVar12 + fVar10;
      auVar2._12_4_ = fVar13 + fVar12 + fVar10;
      auVar7 = divps(auVar8,auVar2);
      fVar18 = fVar14 + auVar7._0_4_ * (fVar14 - fVar18);
      fVar19 = fVar15 + auVar7._4_4_ * (fVar15 - fVar19);
      fVar20 = fVar16 + auVar7._8_4_ * (fVar16 - fVar20);
      fVar21 = fVar17 + auVar7._12_4_ * (fVar17 - fVar21);
      local_78 = fVar18;
      fStack_74 = fVar19;
      fStack_70 = fVar20;
      fStack_6c = fVar21;
    }
    pfVar5 = pfVar5 + 4;
  } while( true );
}



// FUNCTION 145347c00 FUN_145347c00 body=434 status=ok
// SIG undefined FUN_145347c00(void)

undefined4
FUN_145347c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,int param_6,undefined1 (*param_7) [16],undefined4 param_8,
             undefined8 param_9)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  longlong local_28;
  int local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  FUN_145533680(&local_28,param_5,param_6);
  local_18 = *param_7;
  FUN_145533e60(&local_28,local_18);
  if (local_20 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_5 + 0x18);
    lVar4 = *(longlong *)(param_5 + 0x28);
    lVar6 = (longlong)param_6;
    pfVar1 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + lVar6 * 0x10) * 0x10);
    pfVar2 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + 4 + lVar6 * 0x10) * 0x10);
    fVar12 = *pfVar2 - *pfVar1;
    fVar13 = pfVar2[1] - pfVar1[1];
    fVar14 = pfVar2[2] - pfVar1[2];
    fVar15 = pfVar2[3] - pfVar1[3];
    pfVar2 = (float *)(lVar3 + (longlong)*(int *)(lVar4 + 8 + lVar6 * 0x10) * 0x10);
    fVar8 = *pfVar2 - *pfVar1;
    fVar9 = pfVar2[1] - pfVar1[1];
    fVar10 = pfVar2[2] - pfVar1[2];
    fVar11 = pfVar2[3] - pfVar1[3];
    fVar16 = fVar12 * fVar9 - fVar13 * fVar8;
    fVar9 = fVar13 * fVar10 - fVar14 * fVar9;
    fVar10 = fVar14 * fVar8 - fVar12 * fVar10;
    auVar17._12_4_ = fVar15 * fVar11 - fVar15 * fVar11;
    auVar17._4_4_ = fVar10;
    auVar17._0_4_ = fVar9;
    auVar17._8_4_ = fVar16;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar16 = fVar16 * fVar16;
    local_18 = ZEXT816(0);
    fVar8 = fVar16 + fVar10 + fVar9;
    if (fVar8 != 0.0) {
      auVar7._4_4_ = fVar16 + fVar10 + fVar9;
      auVar7._0_4_ = fVar8;
      auVar7._8_4_ = fVar16 + fVar10 + fVar9;
      auVar7._12_4_ = fVar16 + fVar10 + fVar9;
      auVar7 = sqrtps(local_18,auVar7);
      local_18 = divps(auVar17,auVar7);
    }
    uVar5 = FUN_145348f20(param_1,param_2,param_3,param_4,&local_28,local_18,param_8,param_9);
  }
  local_20 = 0;
  if ((-1 < (int)local_1c) && (local_28 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_28,(ulonglong)(local_1c & 0x7fffffff) << 4);
  }
  return uVar5;
}



// FUNCTION 145347dc0 FUN_145347dc0 body=784 status=ok
// SIG undefined FUN_145347dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_145347dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float *param_5,float *param_6,float *param_7,undefined1 (*param_8) [16],
             undefined4 param_9,undefined8 param_10)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
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
  longlong local_98;
  int local_90;
  uint local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [5] [16];
  
  fVar14 = *param_5;
  fVar15 = param_5[1];
  fVar16 = param_5[2];
  fVar17 = param_5[3];
  fVar18 = *param_6;
  fVar19 = param_6[1];
  fVar20 = param_6[2];
  fVar21 = param_6[3];
  local_78 = fVar14;
  fStack_74 = fVar15;
  fStack_70 = fVar16;
  fStack_6c = fVar17;
  local_88 = fVar18;
  fStack_84 = fVar19;
  fStack_80 = fVar20;
  fStack_7c = fVar21;
  for (pfVar3 = *(float **)*param_8; pfVar3 != *(float **)(*param_8 + 8); pfVar3 = pfVar3 + 4) {
    fVar9 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    fVar4 = pfVar3[3];
    fVar22 = fVar14 * fVar9 + fVar15 * fVar10;
    fVar24 = fVar15 * fVar10 + fVar14 * fVar9;
    fVar26 = fVar16 * fVar11 + fVar4;
    fVar27 = fVar4 + fVar16 * fVar11;
    fVar23 = fVar22 + fVar26;
    fVar25 = fVar24 + fVar27;
    fVar26 = fVar26 + fVar22;
    fVar27 = fVar27 + fVar24;
    fVar4 = fVar4 + fVar11 * fVar20 + fVar10 * fVar19 + fVar9 * fVar18;
    if (fVar23 < 0.0) {
      if (fVar4 < 0.0) {
        return 0;
      }
      fVar9 = (fVar14 - fVar18) * fVar9;
      fVar10 = (fVar15 - fVar19) * fVar10;
      fVar11 = (fVar16 - fVar20) * fVar11;
      fVar4 = fVar11 + fVar10 + fVar9;
      if (fVar4 * fVar4 < _DAT_14c6daea0) {
        return 0;
      }
      auVar5._0_4_ = 0.0 - fVar23;
      auVar5._4_4_ = 0.0 - fVar25;
      auVar5._8_4_ = 0.0 - fVar26;
      auVar5._12_4_ = 0.0 - fVar27;
      auVar6._4_4_ = fVar11 + fVar10 + fVar9;
      auVar6._0_4_ = fVar4;
      auVar6._8_4_ = fVar11 + fVar10 + fVar9;
      auVar6._12_4_ = fVar11 + fVar10 + fVar9;
      auVar6 = divps(auVar5,auVar6);
      fVar14 = fVar14 + auVar6._0_4_ * (fVar14 - fVar18);
      fVar15 = fVar15 + auVar6._4_4_ * (fVar15 - fVar19);
      fVar16 = fVar16 + auVar6._8_4_ * (fVar16 - fVar20);
      fVar17 = fVar17 + auVar6._12_4_ * (fVar17 - fVar21);
      local_78 = fVar14;
      fStack_74 = fVar15;
      fStack_70 = fVar16;
      fStack_6c = fVar17;
    }
    else if (fVar4 < 0.0) {
      fVar9 = fVar9 * (fVar14 - fVar18);
      fVar10 = fVar10 * (fVar15 - fVar19);
      fVar11 = fVar11 * (fVar16 - fVar20);
      auVar12._0_4_ = fVar11 + fVar10 + fVar9;
      auVar12._4_4_ = fVar11 + fVar10 + fVar9;
      auVar12._8_4_ = fVar11 + fVar10 + fVar9;
      auVar12._12_4_ = fVar11 + fVar10 + fVar9;
      if (auVar12._0_4_ * auVar12._0_4_ < _DAT_14c6daea0) {
        return 0;
      }
      auVar7._0_4_ = 0.0 - fVar23;
      auVar7._4_4_ = 0.0 - fVar25;
      auVar7._8_4_ = 0.0 - fVar26;
      auVar7._12_4_ = 0.0 - fVar27;
      auVar6 = divps(auVar7,auVar12);
      fVar18 = fVar14 + auVar6._0_4_ * (fVar14 - fVar18);
      fVar19 = fVar15 + auVar6._4_4_ * (fVar15 - fVar19);
      fVar20 = fVar16 + auVar6._8_4_ * (fVar16 - fVar20);
      fVar21 = fVar17 + auVar6._12_4_ * (fVar17 - fVar21);
      local_88 = fVar18;
      fStack_84 = fVar19;
      fStack_80 = fVar20;
      fStack_7c = fVar21;
    }
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 0x80000000;
  FUN_1455335f0(&local_98,&local_78,&local_88,param_7);
  local_68[0] = *param_8;
  uVar2 = FUN_145533e60(&local_98,local_68);
  if (local_90 != 0) {
    fVar16 = (local_88 - local_78) * param_7[1] - (fStack_84 - fStack_74) * *param_7;
    fVar14 = (fStack_84 - fStack_74) * param_7[2] - (fStack_80 - fStack_70) * param_7[1];
    fVar15 = (fStack_80 - fStack_70) * *param_7 - (local_88 - local_78) * param_7[2];
    auVar13._12_4_ = (fStack_7c - fStack_6c) * param_7[3] - (fStack_7c - fStack_6c) * param_7[3];
    auVar13._4_4_ = fVar15;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = fVar16;
    auVar8._4_4_ = -(uint)(ABS(fVar15) <= fRam000000014c6daea4);
    auVar8._0_4_ = -(uint)(ABS(fVar14) <= _DAT_14c6daea0);
    auVar8._8_4_ = -(uint)(ABS(fVar16) <= fRam000000014c6daea8);
    auVar8._12_4_ = -(uint)(ABS(auVar13._12_4_) <= fRam000000014c6daeac);
    uVar2 = movmskps(uVar2,auVar8);
    local_68[0] = auVar13;
    if (((byte)uVar2 & 7) != 7) {
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      local_68[0] = ZEXT816(0);
      fVar17 = fVar16 + fVar15 + fVar14;
      if (fVar17 != 0.0) {
        auVar1._4_4_ = fVar16 + fVar15 + fVar14;
        auVar1._0_4_ = fVar17;
        auVar1._8_4_ = fVar16 + fVar15 + fVar14;
        auVar1._12_4_ = fVar16 + fVar15 + fVar14;
        auVar6 = sqrtps(local_68[0],auVar1);
        local_68[0] = divps(auVar13,auVar6);
      }
      uVar2 = FUN_145348f20(param_1,param_2,param_3,param_4,&local_98,local_68,param_9,param_10);
      goto LAB_145348062;
    }
  }
  uVar2 = 0;
LAB_145348062:
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 4);
  }
  return uVar2;
}



// FUNCTION 1453480d0 FUN_1453480d0 body=1942 status=ok
// SIG undefined FUN_1453480d0(void)

/* WARNING: Removing unreachable block (ram,0x00014534820d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1453480d0(float *param_1,float *param_2,float *param_3,longlong *param_4,
                       float *param_5,undefined4 param_6,longlong param_7)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  float *pfVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_res18 [2];
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  longlong local_158;
  uint uStack_150;
  uint uStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar23 = fRam000000014c6dacac;
  fVar29 = *param_3;
  fVar28 = param_3[1];
  fVar37 = param_3[2];
  fVar38 = param_3[3];
  auVar36._4_4_ = -(uint)(fVar28 == 0.0);
  auVar36._0_4_ = -(uint)(fVar29 == 0.0);
  auVar36._8_4_ = -(uint)(fVar37 == 0.0);
  auVar36._12_4_ = -(uint)(fVar38 == 0.0);
  uVar4 = movmskps((int)&stack0x00000000,auVar36);
  if (((byte)uVar4 & 7) != 7) {
    fVar19 = *param_1;
    fVar18 = param_1[1];
    fVar24 = param_1[2];
    local_f8 = *param_2 - fVar19;
    fStack_f4 = param_2[1] - fVar18;
    fStack_f0 = param_2[2] - fVar24;
    fStack_ec = fRam000000014c6dacac - fRam000000014c6dacac;
    fVar25 = local_f8 * fVar28 - fStack_f4 * fVar29;
    fVar28 = fStack_f4 * fVar37 - fStack_f0 * fVar28;
    fVar29 = fStack_f0 * fVar29 - local_f8 * fVar37;
    auVar27._12_4_ = fStack_ec * fVar38 - fStack_ec * fVar38;
    auVar27._4_4_ = fVar29;
    auVar27._0_4_ = fVar28;
    auVar27._8_4_ = fVar25;
    fVar28 = fVar28 * fVar28;
    fVar29 = fVar29 * fVar29;
    fVar25 = fVar25 * fVar25;
    auVar40._4_4_ = fVar28;
    auVar40._0_4_ = fVar28;
    auVar40._8_4_ = fVar28;
    auVar40._12_4_ = fVar28;
    auVar20._0_4_ = fVar25 + fVar29 + fVar28;
    auVar20._4_4_ = fVar25 + fVar29 + fVar28;
    auVar20._8_4_ = fVar25 + fVar29 + fVar28;
    auVar20._12_4_ = fVar25 + fVar29 + fVar28;
    if (!NAN(auVar20._0_4_) && auVar20._0_4_ == 0.0) {
      auVar26 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar36 = sqrtps(auVar40,auVar20);
      auVar36 = divps(auVar27,auVar36);
      auVar26 = auVar36._0_12_;
    }
    fVar29 = auVar26._0_4_;
    fVar28 = auVar26._4_4_;
    fVar37 = auVar26._8_4_;
    auVar16._4_4_ = -(uint)(ABS(fVar28) <= fRam000000014c6daea4);
    auVar16._0_4_ = -(uint)(ABS(fVar29) <= _DAT_14c6daea0);
    auVar16._8_4_ = -(uint)(ABS(fVar37) <= fRam000000014c6daea8);
    auVar16._12_4_ = -(uint)(0.0 <= fRam000000014c6daeac);
    uVar4 = movmskps((uint)!NAN(auVar20._0_4_),auVar16);
    if (((byte)uVar4 & 7) == 7) {
      return 0;
    }
    fVar30 = *param_3;
    fVar32 = param_3[1];
    fVar33 = param_3[2];
    local_res18[0] = 0.001;
    uStack_dc = 0;
    uStack_cc = 0;
    fStack_bc = fRam000000014c6dacac;
    local_158 = 0x3a83126f3a83126f;
    uStack_150 = 0x3a83126f;
    uStack_14c = 0x3a83126f;
    local_e8 = fVar30;
    fStack_e4 = fVar32;
    fStack_e0 = fVar33;
    local_d8 = fVar29;
    fStack_d4 = fVar28;
    fStack_d0 = fVar37;
    local_c8 = fVar19;
    fStack_c4 = fVar18;
    fStack_c0 = fVar24;
    FUN_145304570(&local_138,local_res18,&local_f8,&local_158);
    fVar38 = *param_5;
    fVar25 = param_5[1];
    fVar2 = param_5[2];
    pfVar5 = (float *)*param_4;
    local_res18[0] = 0.001;
    fVar34 = fVar29 * fVar25 - fVar38 * fVar28;
    fVar28 = fVar28 * fVar2 - fVar25 * fVar37;
    fVar37 = fVar37 * fVar38 - fVar2 * fVar29;
    fVar29 = fVar28 * local_138 + fVar37 * local_128 + fVar34 * local_118;
    auVar35._4_4_ = fVar28 * fStack_134 + fVar37 * fStack_124 + fVar34 * fStack_114;
    auVar21._4_4_ = fVar29;
    auVar21._0_4_ = fVar29;
    auVar21._8_4_ = fVar29;
    auVar21._12_4_ = fVar29;
    if (ABS(fVar29) <= 0.001) {
      return 0;
    }
    fVar30 = fVar30 * fVar38;
    fVar32 = fVar32 * fVar25;
    fVar33 = fVar33 * fVar2;
    auVar35._0_4_ = auVar35._4_4_;
    auVar35._8_4_ = auVar35._4_4_;
    auVar35._12_4_ = auVar35._4_4_;
    auVar36 = divps(auVar35,auVar21);
    fVar23 = (0.0 - (fVar2 * pfVar5[2] + fVar25 * pfVar5[1] + fVar38 * *pfVar5)) * fVar23;
    fVar29 = fVar38 * fVar19 + fVar25 * fVar18;
    fVar28 = fVar25 * fVar18 + fVar38 * fVar19;
    fVar37 = fVar2 * fVar24 + fVar23;
    fVar23 = fVar23 + fVar2 * fVar24;
    auVar39._0_4_ = 0.0 - (fVar29 + fVar37);
    auVar39._4_4_ = 0.0 - (fVar28 + fVar23);
    auVar39._8_4_ = 0.0 - (fVar37 + fVar29);
    auVar39._12_4_ = 0.0 - (fVar23 + fVar28);
    auVar31._0_4_ = fVar33 + fVar32 + fVar30;
    auVar31._4_4_ = fVar33 + fVar32 + fVar30;
    auVar31._8_4_ = fVar33 + fVar32 + fVar30;
    auVar31._12_4_ = fVar33 + fVar32 + fVar30;
    auVar40 = divps(auVar39,auVar31);
    fVar28 = 0.0;
    fVar37 = auVar36._0_4_;
    fVar29 = 0.0;
    fVar38 = auVar40._0_4_;
    if (fVar37 <= 0.0) {
      if (0.0 <= fVar37) {
        if (fVar38 < 0.0) {
          return 0;
        }
        fVar23 = 1.0;
        if (1.0 < fVar38) {
          return 0;
        }
        fVar19 = 0.0;
        goto LAB_14534849e;
      }
      fVar19 = (1.0 - fVar38) / fVar37;
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      local_res18[0] = -fVar38 / fVar37;
      fVar23 = local_res18[0];
      if (1.0 <= local_res18[0]) {
        fVar23 = 1.0;
      }
    }
    else {
      fVar19 = -fVar38 / fVar37;
      if (-fVar38 / fVar37 <= 0.0) {
        fVar19 = 0.0;
      }
      local_res18[0] = (1.0 - fVar38) / fVar37;
      fVar23 = local_res18[0];
      if (1.0 <= local_res18[0]) {
        fVar23 = 1.0;
      }
    }
    if (fVar19 < fVar23) {
LAB_14534849e:
      iVar7 = (int)param_4[1] * 2;
      uVar6 = 0;
      local_158 = 0;
      uStack_150 = 0;
      uStack_14c = 0x80000000;
      uVar9 = uVar6;
      if (0 < iVar7) {
        FUN_144c62aa0(&local_158,&PTR_vftable_14c6e47c0,(longlong)iVar7);
        uVar9 = (ulonglong)uStack_150;
      }
      lVar3 = local_158;
      iVar7 = (int)uVar9;
      uVar14 = (ulonglong)(int)param_4[1];
      if (0 < (int)param_4[1]) {
        iVar11 = 1;
        uVar13 = uVar6;
        uVar15 = uVar14;
        do {
          pfVar5 = (float *)(uVar13 + *param_4);
          pfVar1 = (float *)(*param_4 + (longlong)(iVar11 % (int)uVar15) * 0x10);
          fVar24 = *pfVar5 * local_138 + local_108 + pfVar5[1] * local_128 + pfVar5[2] * local_118;
          fVar25 = *pfVar5 * fStack_130 + fStack_100 + pfVar5[1] * fStack_120 +
                   pfVar5[2] * fStack_110;
          fVar18 = *pfVar1 * fStack_130 + fStack_100 + pfVar1[1] * fStack_120 +
                   pfVar1[2] * fStack_110;
          auVar22._4_4_ = fVar25;
          auVar22._0_4_ = fVar25;
          auVar22._8_4_ = fVar25;
          auVar22._12_4_ = fVar25;
          if (0.0 <= fVar25 != 0.0 <= fVar18) {
            iVar7 = (int)uVar9;
            auVar17._0_4_ = fVar25 - fVar18;
            auVar17._4_4_ = fVar25 - fVar18;
            auVar17._8_4_ = fVar25 - fVar18;
            auVar17._12_4_ = fVar25 - fVar18;
            uVar9 = (ulonglong)(iVar7 + 1);
            auVar36 = divps(auVar22,auVar17);
            *(float *)(local_158 + (longlong)iVar7 * 4) =
                 fVar24 + auVar36._0_4_ *
                          ((*pfVar1 * local_138 + local_108 + pfVar1[1] * local_128 +
                           pfVar1[2] * local_118) - fVar24);
            uVar15 = (ulonglong)*(uint *)(param_4 + 1);
          }
          iVar7 = (int)uVar9;
          iVar11 = iVar11 + 1;
          uVar13 = uVar13 + 0x10;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (iVar7 != 0) {
        if (1 < iVar7) {
          FUN_144cfb680(local_158,0,iVar7 + -1,local_res18[0]._0_1_);
        }
        local_res18[0] = (float)(iVar7 / 2);
        lVar12 = (longlong)(int)local_res18[0];
        uVar9 = uVar6;
        if (3 < lVar12) {
          pfVar5 = (float *)(lVar3 + 0xc);
          do {
            fVar29 = pfVar5[-2];
            if (fVar19 < fVar29) goto LAB_1453486d3;
            fVar29 = *pfVar5;
            iVar7 = (int)uVar9;
            if (fVar19 < fVar29) {
              uVar9 = (ulonglong)(iVar7 + 1);
              goto LAB_1453486d3;
            }
            fVar29 = pfVar5[2];
            if (fVar19 < fVar29) {
              uVar9 = (ulonglong)(iVar7 + 2);
              goto LAB_1453486d3;
            }
            fVar29 = pfVar5[4];
            if (fVar19 < fVar29) {
              uVar9 = (ulonglong)(iVar7 + 3);
              goto LAB_1453486d3;
            }
            uVar9 = (ulonglong)(iVar7 + 4);
            uVar6 = uVar6 + 4;
            pfVar5 = pfVar5 + 8;
          } while ((longlong)uVar6 < lVar12 + -3);
        }
        if ((longlong)uVar6 < lVar12) {
          pfVar5 = (float *)(uVar6 * 8 + 4 + lVar3);
          do {
            fVar29 = *pfVar5;
            if (fVar19 < fVar29) break;
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar6 = uVar6 + 1;
            pfVar5 = pfVar5 + 2;
          } while ((longlong)uVar6 < lVar12);
        }
LAB_1453486d3:
        iVar7 = (int)uVar9;
        if ((iVar7 < (int)local_res18[0]) &&
           (fVar28 = *(float *)(lVar3 + (longlong)(iVar7 * 2) * 4), fVar28 < fVar19)) {
          local_168 = param_6;
          local_174 = fVar23;
          if (fVar29 <= fVar23) {
            local_174 = fVar29;
          }
          local_178 = fVar19;
          local_170 = fVar37;
          local_16c = fVar38;
          if (fVar19 != local_174) {
            FUN_1450686c0(param_7,&local_178);
            uVar9 = (ulonglong)(iVar7 + 1);
          }
        }
        uVar8 = (uint)uVar9;
        fVar29 = local_174;
        for (lVar10 = (longlong)(int)uVar8; lVar10 < lVar12; lVar10 = lVar10 + 1) {
          uVar8 = (uint)uVar9;
          local_174 = *(float *)(lVar3 + 4 + lVar10 * 8);
          fVar28 = *(float *)(lVar3 + lVar10 * 8);
          if (fVar23 < local_174) break;
          if (fVar28 != local_174) {
            local_168 = param_6;
            local_178 = fVar28;
            local_170 = fVar37;
            local_16c = fVar38;
            FUN_1450686c0(param_7,&local_178);
            fVar29 = local_174;
          }
          local_174 = fVar29;
          uVar8 = uVar8 + 1;
          uVar9 = (ulonglong)uVar8;
          fVar29 = local_174;
        }
        local_174 = fVar29;
        if ((((int)uVar8 < (int)local_res18[0]) && (fVar28 < fVar23)) &&
           (local_168 = param_6, local_178 = fVar28, local_174 = fVar23, local_170 = fVar37,
           local_16c = fVar38, fVar28 != fVar23)) {
          FUN_1450686c0(param_7,&local_178);
        }
        uVar6 = (ulonglong)(0 < *(int *)(param_7 + 8));
      }
      if ((int)uStack_14c < 0) {
        return uVar6;
      }
      if (lVar3 != 0) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,lVar3,(ulonglong)(uStack_14c & 0x7fffffff) << 2);
        return uVar6;
      }
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 145348870 FUN_145348870 body=788 status=ok
// SIG undefined FUN_145348870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_145348870(float *param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar7 [16];
  uint uVar11;
  uint uVar13;
  undefined1 auVar8 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  
  fVar9 = *param_1;
  fVar10 = param_1[2];
  auVar17._4_4_ = fVar9;
  auVar17._0_4_ = fVar9;
  auVar17._8_4_ = fVar9;
  auVar17._12_4_ = fVar9;
  if (fVar9 == 0.0) {
    if (fVar10 == 0.0) {
      return false;
    }
    fVar19 = (float)(-(uint)(0.0 < fVar10) & _DAT_14c6daed0 |
                    ~-(uint)(0.0 < fVar10) & (uint)_DAT_14c6dae80);
  }
  else {
    auVar22._0_4_ = 0.0 - fVar10;
    auVar22._4_4_ = 0.0 - fVar10;
    auVar22._8_4_ = 0.0 - fVar10;
    auVar22._12_4_ = 0.0 - fVar10;
    auVar17 = divps(auVar22,auVar17);
    fVar19 = auVar17._0_4_;
  }
  bVar1 = 0.0 <= fVar9;
  fVar20 = param_2[1] * fVar9;
  fVar23 = *param_2 * param_1[1];
  fVar24 = param_2[3] * fVar10;
  fVar25 = param_2[2] * param_1[3];
  fVar6 = param_2[3] * fVar9 * _DAT_14c6daf00;
  fVar9 = param_2[2] * param_1[1] * fRam000000014c6daf04;
  fVar10 = param_2[1] * fVar10 * fRam000000014c6daf08;
  fVar12 = *param_2 * param_1[3] * fRam000000014c6daf0c;
  fVar4 = fVar9 + fVar6;
  fVar6 = fVar6 + fVar9;
  fVar9 = fVar12 + fVar10;
  fVar10 = fVar10 + fVar12;
  fVar12 = fVar9 + fVar4;
  fVar26 = fVar10 + fVar6;
  fVar4 = fVar4 + fVar9;
  fVar6 = fVar6 + fVar10;
  fVar29 = fVar20 - fVar23;
  auVar21._0_4_ = fVar24 - fVar25;
  auVar21._4_4_ = fVar24 - fVar25;
  auVar21._8_4_ = fVar24 - fVar25;
  auVar21._12_4_ = fVar24 - fVar25;
  fVar24 = fVar12 * _DAT_14c6dad90;
  fVar25 = fVar26 * fRam000000014c6dad94;
  fVar27 = fVar4 * fRam000000014c6dad98;
  fVar28 = fVar6 * fRam000000014c6dad9c;
  fVar9 = fVar19;
  fVar10 = _DAT_14c6dae80;
  if (fVar29 == 0.0) {
    if (fVar12 == 0.0) {
      fVar4 = (float)(~-(uint)bVar1 & _DAT_14c6daed0 | -(uint)bVar1 & (uint)_DAT_14c6dae80);
      fVar19 = (float)(~-(uint)(0.0 < auVar21._0_4_) & _DAT_14c6daed0 |
                      -(uint)(0.0 < auVar21._0_4_) & (uint)_DAT_14c6dae80);
    }
    else {
      auVar16._0_4_ = 0.0 - auVar21._0_4_;
      auVar16._4_4_ = 0.0 - auVar21._4_4_;
      auVar16._8_4_ = 0.0 - auVar21._8_4_;
      auVar16._12_4_ = 0.0 - auVar21._12_4_;
      uVar11 = -(uint)(0.0 < fVar12 != bVar1);
      auVar2._4_4_ = fVar26;
      auVar2._0_4_ = fVar12;
      auVar2._8_4_ = fVar4;
      auVar2._12_4_ = fVar6;
      auVar17 = divps(auVar16,auVar2);
      fVar4 = (float)(~uVar11 & _DAT_14c6daed0 | uVar11 & (uint)_DAT_14c6dae80);
      fVar9 = _DAT_14c6dae80;
      fVar10 = auVar17._0_4_;
    }
  }
  else {
    auVar5._0_4_ = auVar21._0_4_ * fVar29;
    auVar5._4_4_ = auVar21._4_4_ * (fVar20 - fVar23);
    auVar5._8_4_ = auVar21._8_4_ * (fVar20 - fVar23);
    auVar5._12_4_ = auVar21._12_4_ * (fVar20 - fVar23);
    auVar14._0_4_ = fVar24 * fVar24 - auVar5._0_4_;
    auVar14._4_4_ = fVar25 * fVar25 - auVar5._4_4_;
    auVar14._8_4_ = fVar27 * fVar27 - auVar5._8_4_;
    auVar14._12_4_ = fVar28 * fVar28 - auVar5._12_4_;
    if (auVar14._0_4_ <= 0.0) {
      uVar11 = -(uint)(0.0 < auVar21._0_4_ != bVar1);
      fVar4 = (float)(uVar11 & _DAT_14c6daed0 | ~uVar11 & (uint)_DAT_14c6dae80);
      fVar19 = _DAT_14c6dae80;
    }
    else {
      auVar17 = sqrtps(auVar5,auVar14);
      uVar11 = -(uint)(0.0 < fVar29 != bVar1);
      auVar7._0_8_ = CONCAT44(0.0 - ((float)(auVar17._4_4_ ^ (uint)(fVar25 < 0.0) * -0x80000000) +
                                    fVar25),
                              0.0 - ((float)(auVar17._0_4_ ^ (uint)(fVar24 < 0.0) * -0x80000000) +
                                    fVar24));
      auVar7._8_4_ = 0.0 - ((float)(auVar17._8_4_ ^ (uint)(fVar27 < 0.0) * -0x80000000) + fVar27);
      auVar7._12_4_ = 0.0 - ((float)(auVar17._12_4_ ^ (uint)(fVar28 < 0.0) * -0x80000000) + fVar28);
      auVar15._8_4_ = auVar7._8_4_;
      auVar15._0_8_ = auVar7._0_8_;
      auVar15._12_4_ = auVar7._12_4_;
      auVar3._4_4_ = fVar20 - fVar23;
      auVar3._0_4_ = fVar29;
      auVar3._8_4_ = fVar20 - fVar23;
      auVar3._12_4_ = fVar20 - fVar23;
      auVar17 = divps(auVar15,auVar3);
      auVar22 = divps(auVar21,auVar7);
      fVar4 = auVar22._0_4_;
      fVar9 = auVar17._0_4_;
      fVar10 = (float)(uVar11 & _DAT_14c6daed0 | ~uVar11 & (uint)_DAT_14c6dae80);
    }
  }
  uVar11 = -(uint)(fVar19 < fVar9) ^ 0xffffffff;
  uVar13 = -(uint)(fVar10 < fVar4) ^ 0xffffffff;
  fVar6 = (float)(~-(uint)(fVar9 < fVar19) & (uint)fVar19 | -(uint)(fVar9 < fVar19) & (uint)fVar9);
  fVar12 = (float)(~-(uint)(fVar4 < fVar10) & (uint)fVar10 | -(uint)(fVar4 < fVar10) & (uint)fVar4);
  fVar9 = (float)(~uVar11 & (uint)fVar9 | uVar11 & (uint)fVar19);
  fVar10 = (float)(~uVar13 & (uint)fVar4 | uVar13 & (uint)fVar10);
  uVar11 = -(uint)(fVar12 < fVar6) ^ 0xffffffff;
  uVar13 = -(uint)(fVar10 < fVar9) ^ 0xffffffff;
  auVar8._0_4_ = -(uint)(fVar6 < fVar12) & (uint)fVar6;
  auVar8._4_4_ = uVar11 & (uint)fVar12;
  auVar8._8_4_ = -(uint)(fVar9 < fVar10) & (uint)fVar9;
  auVar8._12_4_ = uVar13 & (uint)fVar10;
  auVar18._0_4_ = ~-(uint)(fVar6 < fVar12) & (uint)fVar12;
  auVar18._4_4_ = ~uVar11 & (uint)fVar6;
  auVar18._8_4_ = ~-(uint)(fVar9 < fVar10) & (uint)fVar10;
  auVar18._12_4_ = ~uVar13 & (uint)fVar9;
  auVar18 = auVar18 | auVar8;
  local_88 = auVar18._0_4_;
  fVar9 = auVar18._4_4_;
  fVar10 = auVar18._8_4_;
  uVar11 = -(uint)(fVar10 < fVar9) ^ 0xffffffff;
  local_84 = (float)(~-(uint)(fVar9 < fVar10) & (uint)fVar10 | -(uint)(fVar9 < fVar10) & (uint)fVar9
                    );
  fVar9 = (float)(~uVar11 & (uint)fVar9 | uVar11 & (uint)fVar10);
  if (local_88 < local_84) {
    local_80 = 0;
    local_78 = 0xffffffff;
    FUN_1450686c0(param_3,&local_88);
  }
  if (fVar9 < auVar18._12_4_) {
    local_80 = 0;
    local_78 = 0xffffffff;
    local_88 = fVar9;
    local_84 = auVar18._12_4_;
    FUN_1450686c0(param_3,&local_88);
  }
  return *(int *)(param_3 + 8) != 0;
}



// FUNCTION 145348b90 FUN_145348b90 body=905 status=ok
// SIG undefined FUN_145348b90(void)

bool FUN_145348b90(float *param_1,longlong param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  
  fVar4 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = param_1[3];
  if (*param_1 == 0.0) {
    if (fVar3 != 0.0) {
      if (fVar4 == 0.0) {
        if ((fVar3 != 0.0) && ((0.0 < -fVar6 == 0.0 < fVar3 && (-fVar6 <= fVar3 == 0.0 < fVar3)))) {
          local_88 = 0.0;
          fStack_84 = 1.0;
LAB_145348c41:
          uStack_80 = 0;
          local_78 = 0xffffffff;
          FUN_1450686c0(param_2,&local_88);
          return true;
        }
      }
      else {
        fStack_84 = (-fVar3 - fVar6) / fVar4;
        fVar3 = -fVar6 / fVar4;
        if (-fVar6 / fVar4 <= 0.0) {
          fVar3 = 0.0;
        }
        if (fStack_84 <= 0.0) {
          fStack_84 = 0.0;
        }
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        if (1.0 <= fStack_84) {
          fStack_84 = 1.0;
        }
        local_88 = fVar3;
        if ((fVar3 < fStack_84) ||
           (bVar1 = fStack_84 < fVar3, local_88 = fStack_84, fStack_84 = fVar3, bVar1))
        goto LAB_145348c41;
      }
    }
    return false;
  }
  fVar2 = 1.0 / *param_1;
  fVar4 = fVar4 * fVar2;
  fVar3 = fVar3 * fVar2;
  fVar6 = fVar6 * fVar2;
  fVar8 = -fVar3;
  fVar2 = -fVar4;
  if (fVar4 == 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = -fVar6 / fVar4;
    if (-fVar6 / fVar4 <= 0.0) {
      fVar5 = 0.0;
    }
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  if (fVar4 + 1.0 == 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (-fVar3 - fVar6) / (fVar4 + 1.0);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  if (fVar6 <= fVar3 * fVar4) {
    if ((0.0 < fVar8) && (0.0 < fVar2)) {
      local_88 = fVar7;
      if (fVar2 <= 1.0) {
        local_88 = 0.0;
      }
      if (local_88 < fVar5) {
        uStack_80 = 0;
        local_78 = 0xffffffff;
        fStack_84 = fVar5;
        FUN_14506a530(param_2,&local_88);
      }
    }
    if ((1.0 <= fVar8) || (1.0 <= fVar2)) goto LAB_145348eda;
    if (0.0 <= fVar2) {
      fVar5 = 1.0;
    }
    local_88 = fVar7;
    fStack_84 = fVar5;
    if (fVar5 <= fVar7) goto LAB_145348eda;
  }
  else {
    if ((0.0 < fVar8) && (fVar2 < 1.0)) {
      local_88 = fVar5;
      if (0.0 <= fVar2) {
        local_88 = 0.0;
      }
      if (local_88 < fVar7) {
        uStack_80 = 0;
        local_78 = 0xffffffff;
        fStack_84 = fVar7;
        FUN_14506a530(param_2,&local_88);
      }
    }
    if ((1.0 <= fVar8) || (fVar2 <= 0.0)) goto LAB_145348eda;
    if (fVar2 <= 1.0) {
      fVar7 = 1.0;
    }
    local_88 = fVar5;
    fStack_84 = fVar7;
    if (fVar7 <= fVar5) goto LAB_145348eda;
  }
  uStack_80 = 0;
  local_78 = 0xffffffff;
  FUN_14506a530(param_2,&local_88);
LAB_145348eda:
  return *(int *)(param_2 + 8) != 0;
}



// FUNCTION 145348f20 FUN_145348f20 body=873 status=ok
// SIG undefined FUN_145348f20(void)

int FUN_145348f20(float *param_1,float *param_2,float *param_3,float *param_4,longlong *param_5,
                 float *param_6,undefined4 param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
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
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar13 = fRam000000014c6dacac;
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  auVar4._4_4_ = -(uint)(fVar10 == fVar7);
  auVar4._0_4_ = -(uint)(fVar9 == fVar6);
  auVar4._8_4_ = -(uint)(fVar11 == fVar8);
  auVar4._12_4_ = -(uint)(param_1[3] == param_3[3]);
  uVar14 = movmskps((int)&stack0x00000000,auVar4);
  if (((char)(uVar14 & 7) != '\a') ||
     (auVar5._4_4_ = -(uint)(param_2[1] == param_4[1]), auVar5._0_4_ = -(uint)(*param_2 == *param_4)
     , auVar5._8_4_ = -(uint)(param_2[2] == param_4[2]),
     auVar5._12_4_ = -(uint)(param_2[3] == param_4[3]), uVar15 = movmskps(uVar14 & 7,auVar5),
     ((byte)uVar15 & 7) != 7)) {
    fVar28 = *param_2 - fVar9;
    fVar29 = param_2[1] - fVar10;
    fVar30 = param_2[2] - fVar11;
    pfVar2 = (float *)*param_5;
    fVar22 = *param_6;
    fVar23 = param_6[1];
    fVar24 = param_6[2];
    fVar25 = (*param_4 - fVar6) - fVar28;
    fVar26 = (param_4[1] - fVar7) - fVar29;
    fVar27 = (param_4[2] - fVar8) - fVar30;
    fVar21 = 0.0 - (fVar24 * pfVar2[2] + fVar23 * pfVar2[1] + fVar22 * *pfVar2);
    local_a8 = fVar21 * 0.0 + fVar27 * fVar24 + fVar26 * fVar23 + fVar25 * fVar22;
    fStack_a4 = fVar21 * 0.0 + fVar30 * fVar24 + fVar29 * fVar23 + fVar28 * fVar22;
    fStack_a0 = fVar21 * 0.0 + (fVar8 - fVar11) * fVar24 +
                (fVar7 - fVar10) * fVar23 + (fVar6 - fVar9) * fVar22;
    fStack_9c = fRam000000014c6dacac * fVar21 + fVar11 * fVar24 + fVar10 * fVar23 + fVar9 * fVar22;
    iVar16 = FUN_145348b90(&local_a8,param_8);
    if (iVar16 != 0) {
      FUN_145068400(&local_b8);
      lVar12 = param_5[1];
      lVar18 = 0;
      iVar16 = 1;
      if (0 < (longlong)(int)lVar12) {
        lVar19 = 0;
        iVar20 = iVar16;
        do {
          lVar3 = *param_5;
          pfVar2 = (float *)(lVar3 + (longlong)(iVar20 % (int)param_5[1]) * 0x10);
          pfVar1 = (float *)(lVar3 + lVar19);
          fVar23 = (pfVar2[1] - pfVar1[1]) * *param_6 - (*pfVar2 - *pfVar1) * param_6[1];
          fVar24 = (pfVar2[2] - pfVar1[2]) * param_6[1] - (pfVar2[1] - pfVar1[1]) * param_6[2];
          fVar21 = (*pfVar2 - *pfVar1) * param_6[2] - (pfVar2[2] - pfVar1[2]) * *param_6;
          pfVar2 = (float *)(lVar3 + lVar19);
          fVar22 = 0.0 - (fVar23 * pfVar2[2] + fVar21 * pfVar2[1] + fVar24 * *pfVar2);
          local_98 = fVar22 * 0.0 + fVar23 * fVar27 + fVar21 * fVar26 + fVar24 * fVar25;
          fStack_94 = fVar22 * 0.0 + fVar23 * fVar30 + fVar21 * fVar29 + fVar24 * fVar28;
          fStack_90 = fVar22 * 0.0 + fVar23 * (fVar8 - fVar11) +
                      fVar21 * (fVar7 - fVar10) + fVar24 * (fVar6 - fVar9);
          fStack_8c = fVar22 * fVar13 + fVar23 * fVar11 + fVar21 * fVar10 + fVar24 * fVar9;
          iVar17 = FUN_145348870(&local_a8,&local_98,&local_b8);
          if (iVar17 == 0) {
            FUN_145068460(param_8);
LAB_145349281:
            iVar16 = 0;
            goto LAB_1453491e7;
          }
          FUN_145068e50(param_8,&local_b8);
          if (*(int *)(param_8 + 8) == 0) goto LAB_145349281;
          FUN_145068460(&local_b8);
          iVar20 = iVar20 + 1;
          lVar18 = lVar18 + 1;
          lVar19 = lVar19 + 0x10;
        } while (lVar18 < (int)lVar12);
      }
      FUN_14506a2b0(param_8,param_7);
LAB_1453491e7:
      local_b0 = 0;
      if ((int)local_ac < 0) {
        return iVar16;
      }
      if (local_b8 == 0) {
        return iVar16;
      }
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_b8,(ulonglong)(local_ac & 0x7fffffff) * 0x14);
      return iVar16;
    }
  }
  return 0;
}



// FUNCTION 145349290 FUN_145349290 body=140 status=ok
// SIG undefined FUN_145349290(void)

undefined8 *
FUN_145349290(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiPairedEdgeFinder::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  param_1[4] = param_3;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  param_1[5] = param_4;
  if (param_4 != 0) {
    FUN_144b3d910(param_4);
  }
  param_1[6] = param_5;
  if (param_5 != 0) {
    FUN_144b3d910();
  }
  return param_1;
}



// FUNCTION 145349320 FUN_145349320 body=579 status=ok
// SIG undefined FUN_145349320(void)

void FUN_145349320(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong *local_30;
  
  uVar5 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x18);
  auVar8._4_4_ = -(uint)(ABS(*(float *)(lVar2 + 0xc4) - *(float *)(lVar1 + 0xc4)) <= 0.001);
  auVar8._0_4_ = -(uint)(ABS(*(float *)(lVar2 + 0xc0) - *(float *)(lVar1 + 0xc0)) <= 0.001);
  auVar8._8_4_ = -(uint)(ABS(*(float *)(lVar2 + 200) - *(float *)(lVar1 + 200)) <= 0.001);
  auVar8._12_4_ = -(uint)(ABS(*(float *)(lVar2 + 0xcc) - *(float *)(lVar1 + 0xcc)) <= 0.001);
  uVar3 = movmskps((int)lVar1,auVar8);
  if (((byte)uVar3 & 7) == 7) {
    local_68 = param_1;
    local_60 = param_2;
    local_58 = param_3;
    FUN_14534b560(*(undefined8 *)(param_1 + 0x28),lVar2,*(undefined8 *)(param_2 + 0x20),&local_68);
    if (*(char *)(param_2 + 0x1d) != '\0') {
      local_68 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,0x80);
      uVar4 = uVar5;
      if (local_68 != 0) {
        do {
          *(undefined4 *)(uVar4 + local_68) = 0xffffffff;
          uVar4 = uVar4 + 8;
        } while ((longlong)uVar4 < 0x80);
      }
      local_60 = 0xf00000000;
      lVar1 = param_3[1];
      uVar4 = uVar5;
      uVar7 = uVar5;
      if (0 < (int)lVar1) {
        do {
          FUN_14534b860(&local_68,*(undefined4 *)(uVar7 + 0x4c + *param_3),uVar4);
          uVar6 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar6;
          uVar7 = uVar7 + 0x50;
        } while ((int)uVar6 < (int)lVar1);
      }
      local_38 = &local_68;
      local_48 = param_1;
      local_40 = param_2;
      local_30 = param_3;
      FUN_14534b9b0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
                    *(undefined8 *)(param_2 + 0x20),&local_48);
      if ((local_60 & 0x80000000) == 0) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_68,0);
      }
    }
    if (*(char *)(param_2 + 0x1c) != '\0') {
      local_68 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,0x80);
      uVar4 = uVar5;
      if (local_68 != 0) {
        do {
          *(undefined4 *)(uVar4 + local_68) = 0xffffffff;
          uVar4 = uVar4 + 8;
        } while ((longlong)uVar4 < 0x80);
      }
      local_60 = 0xf00000000;
      lVar1 = param_3[1];
      uVar4 = uVar5;
      if (0 < (int)lVar1) {
        do {
          FUN_14534b860(&local_68,*(undefined4 *)(uVar4 + 0x44 + *param_3),uVar5);
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
          uVar4 = uVar4 + 0x50;
        } while ((int)uVar6 < (int)lVar1);
      }
      local_38 = &local_68;
      local_48 = param_1;
      local_40 = param_2;
      local_30 = param_3;
      FUN_14534bcc0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)(param_2 + 0x20),&local_48);
      if ((local_60 & 0x80000000) == 0) {
        (*DAT_14c787678)(DAT_14c6e47a8,local_68,0);
      }
    }
  }
  return;
}



// FUNCTION 145349570 FUN_145349570 body=1491 status=ok
// SIG undefined FUN_145349570(void)

void FUN_145349570(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,uint *param_5
                  ,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float local_res8 [2];
  longlong local_res10;
  undefined4 uVar27;
  undefined1 *puVar26;
  undefined4 uVar29;
  undefined8 *puVar28;
  undefined4 uVar30;
  undefined1 local_1c8 [16];
  longlong local_1b8;
  float local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined4 local_190;
  uint local_18c;
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
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
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined **local_d8 [6];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined ***local_78;
  
  lVar14 = *(longlong *)(param_1 + 0x18);
  fVar5 = *(float *)(lVar14 + 0xc0);
  fVar6 = *(float *)(lVar14 + 0xc4);
  local_178 = *(undefined8 *)(lVar14 + 0xc0);
  fVar7 = *(float *)(lVar14 + 200);
  fVar8 = *(float *)(lVar14 + 0xcc);
  uStack_170 = *(undefined8 *)(lVar14 + 200);
  local_res10 = param_2;
  FUN_145068400(&local_1b8);
  FUN_145068400(&local_188);
  local_res8[0] = *param_4;
  FUN_144c2ead0(*(undefined8 *)(param_1 + 0x20),local_res8,&local_128,&local_1a8);
  local_138 = (float)local_1a8 - local_128;
  fStack_134 = local_1a8._4_4_ - fStack_124;
  fStack_130 = (float)uStack_1a0 - fStack_120;
  fStack_12c = uStack_1a0._4_4_ - fStack_11c;
  fVar22 = fVar5 * fStack_134 - fVar6 * local_138;
  fVar24 = fVar6 * fStack_130 - fVar7 * fStack_134;
  fVar25 = fVar7 * local_138 - fVar5 * fStack_130;
  auVar23._12_4_ = fVar8 * fStack_12c - fVar8 * fStack_12c;
  auVar23._4_4_ = fVar25;
  auVar23._0_4_ = fVar24;
  auVar23._8_4_ = fVar22;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  fVar22 = fVar22 * fVar22;
  auVar18._4_4_ = fVar24;
  auVar18._0_4_ = fVar24;
  auVar18._8_4_ = fVar24;
  auVar18._12_4_ = fVar24;
  fVar19 = fVar22 + fVar25 + fVar24;
  if (fVar19 == 0.0) {
    local_1c8 = ZEXT816(0);
  }
  else {
    auVar4._4_4_ = fVar22 + fVar25 + fVar24;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar22 + fVar25 + fVar24;
    auVar4._12_4_ = fVar22 + fVar25 + fVar24;
    auVar18 = sqrtps(auVar18,auVar4);
    local_1c8 = divps(auVar23,auVar18);
  }
  fVar24 = *(float *)(param_2 + 4);
  local_res8[0] = *(float *)(param_2 + 0xc);
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    local_res8[0] = 0.0;
  }
  local_res8[0] = local_res8[0] + 0.02;
  fVar19 = *(float *)(param_2 + 8);
  fVar25 = local_res8[0] * local_1c8._0_4_;
  fVar22 = local_res8[0] * local_1c8._4_4_;
  fVar20 = local_res8[0] * local_1c8._8_4_;
  fVar21 = local_res8[0] * local_1c8._12_4_;
  local_168 = (local_128 - fVar24 * fVar5) - fVar25;
  fStack_164 = (fStack_124 - fVar24 * fVar6) - fVar22;
  fStack_160 = (fStack_120 - fVar24 * fVar7) - fVar20;
  fStack_15c = (fStack_11c - fVar24 * fVar8) - fVar21;
  fVar25 = ((float)local_1a8 - fVar24 * fVar5) - fVar25;
  fVar22 = (local_1a8._4_4_ - fVar24 * fVar6) - fVar22;
  fVar20 = ((float)uStack_1a0 - fVar24 * fVar7) - fVar20;
  fVar21 = (uStack_1a0._4_4_ - fVar24 * fVar8) - fVar21;
  local_148 = fVar5 * (0.0 - (fVar19 - fVar24));
  fStack_144 = fVar6 * (0.0 - (fVar19 - fVar24));
  fStack_140 = fVar7 * (0.0 - (fVar19 - fVar24));
  fStack_13c = fVar8 * (0.0 - (fVar19 - fVar24));
  local_158 = fVar25;
  fStack_154 = fVar22;
  fStack_150 = fVar20;
  fStack_14c = fVar21;
  FUN_145068460(&local_1b8);
  FUN_145065450(local_d8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  local_100 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = CONCAT44(fStack_164,local_168);
  uStack_a0 = CONCAT44(fStack_15c,fStack_160);
  local_110 = 0xffffffff;
  local_78 = &local_118;
  local_118 = hkaiTraversalAnalysisUtils::NavMeshSegmentCastingFilterFromClearanceFilter::vftable;
  local_108 = 1;
  local_88 = local_148;
  fStack_84 = fStack_144;
  fStack_80 = fStack_140;
  fStack_7c = fStack_13c;
  local_98 = fVar25;
  fStack_94 = fVar22;
  fStack_90 = fVar20;
  fStack_8c = fVar21;
  FUN_145065480(local_d8,&local_a8,&local_1b8);
  FUN_145068400(&local_198);
  local_1a8 = *param_6;
  uStack_1a0 = (longlong)(int)param_6[1] * 0x50 + local_1a8;
  puVar28 = &local_1a8;
  puVar26 = local_1c8;
  FUN_14534ab50(param_2,&local_178,local_d8,&local_1b8,&local_168,&local_158,puVar26,puVar28,param_3
                ,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x17c) << 0x16 |
                 (uint)*param_4,&local_198);
  FUN_145068920(&local_1b8,&local_198);
  iVar12 = 0;
  local_res8[0] = local_1b0;
  if (0 < (int)local_1b0) {
    do {
      lVar10 = FUN_1450686a0(&local_1b8,iVar12);
      uVar27 = (undefined4)((ulonglong)puVar26 >> 0x20);
      uVar29 = (undefined4)((ulonglong)puVar28 >> 0x20);
      uVar30 = (undefined4)((ulonglong)param_3 >> 0x20);
      uVar1 = *(uint *)(lVar10 + 0x10);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
      if (uVar1 >> 0x16 == *(uint *)(lVar14 + 0x17c)) {
        plVar3 = *(longlong **)(param_2 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          iVar2 = *(int *)(lVar14 + 0x50);
          lVar17 = (longlong)iVar2;
          uVar15 = uVar1 & 0x3fffff;
          if ((int)uVar15 < *(int *)(lVar14 + 0x20)) {
            uVar13 = uVar15;
            if (*(int *)(lVar14 + 0x98) != 0) {
              uVar13 = *(uint *)(*(longlong *)(lVar14 + 0x90) + (ulonglong)uVar15 * 4);
            }
            param_2 = local_res10;
            if (uVar13 == 0xffffffff) {
              local_1c8._0_8_ = *(longlong *)(lVar14 + 0x48) + (longlong)(int)(iVar2 * uVar15) * 4;
              local_1c8._8_8_ = local_1c8._0_8_ + lVar17 * 4;
              lVar14 = *(longlong *)(lVar14 + 0x18) + (ulonglong)uVar15 * 0xc;
            }
            else {
              local_1c8._8_8_ = *(longlong *)(lVar14 + 0x120) + ((int)(uVar13 * iVar2) + lVar17) * 4
              ;
              local_1c8._0_8_ = *(longlong *)(lVar14 + 0x120) + (longlong)(int)(uVar13 * iVar2) * 4;
              lVar14 = *(longlong *)(lVar14 + 0xb0) + (longlong)(int)uVar13 * 0xc;
            }
          }
          else {
            iVar16 = uVar15 - *(int *)(lVar14 + 0x20);
            lVar11 = (longlong)(iVar16 * iVar2);
            local_1c8._8_8_ = *(longlong *)(lVar14 + 0x140) + (lVar11 + lVar17) * 4;
            local_1c8._0_8_ = *(longlong *)(lVar14 + 0x140) + lVar11 * 4;
            lVar14 = *(longlong *)(lVar14 + 0xd0) + (longlong)iVar16 * 0xc;
          }
          local_178 = local_1c8._0_8_;
          uStack_170 = local_1c8._8_8_;
          cVar9 = (**(code **)(*plVar3 + 0x18))
                            (plVar3,*(undefined8 *)(param_1 + 0x28),uVar1,lVar14,&local_178);
          uVar27 = (undefined4)((ulonglong)puVar26 >> 0x20);
          uVar29 = (undefined4)((ulonglong)puVar28 >> 0x20);
          uVar30 = (undefined4)((ulonglong)param_3 >> 0x20);
          if (cVar9 == '\0') goto LAB_145349a32;
        }
        FUN_1450682c0(lVar10,&local_168,&local_138,&local_148,local_e8,local_f8);
        local_178 = 0;
        uStack_170 = 0;
        FUN_1450682c0(lVar10,&local_128,&local_138,&local_178,&local_1a8,&local_158);
        uVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x17c) << 0x16;
        param_3 = CONCAT44(uVar30,uVar15 | *param_5);
        puVar28 = (undefined8 *)CONCAT44(uVar29,0xffffffff);
        puVar26 = (undefined1 *)CONCAT44(uVar27,uVar1);
        FUN_14534a160(local_e8,local_f8,&local_1a8,&local_158,param_2,
                      *(undefined8 *)(param_1 + 0x28),puVar26,puVar28,param_3,
                      uVar15 | (uint)*param_4,param_6);
      }
LAB_145349a32:
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)local_res8[0]);
  }
  local_190 = 0;
  if ((-1 < (int)local_18c) && (local_198 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_198,(ulonglong)(local_18c & 0x7fffffff) * 0x14);
  }
  local_198 = 0;
  local_118 = &PTR_FUN_14ab67d10;
  local_d8[0] = &PTR_FUN_14ab67d10;
  local_18c = 0x80000000;
  local_180 = 0;
  if ((-1 < (int)local_17c) && (local_188 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_188,(ulonglong)(local_17c & 0x7fffffff) * 0x14);
  }
  local_188 = 0;
  local_1b0 = 0.0;
  local_17c = 0x80000000;
  if ((-1 < (int)local_1ac) && (local_1b8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1b8,(ulonglong)(local_1ac & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 145349b50 FUN_145349b50 body=1549 status=ok
// SIG undefined FUN_145349b50(void)

void FUN_145349b50(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,uint *param_5
                  ,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  float fVar19;
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float local_res8 [2];
  longlong local_res10;
  undefined4 uVar31;
  float *pfVar30;
  undefined4 uVar33;
  undefined8 *puVar32;
  undefined4 uVar34;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  float local_1c0;
  uint local_1bc;
  longlong local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  longlong local_198;
  longlong lStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
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
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8 [6];
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined ***local_88;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  fVar5 = *(float *)(lVar10 + 0xc0);
  fVar6 = *(float *)(lVar10 + 0xc4);
  local_198 = *(longlong *)(lVar10 + 0xc0);
  fVar7 = *(float *)(lVar10 + 200);
  fVar8 = *(float *)(lVar10 + 0xcc);
  lStack_190 = *(longlong *)(lVar10 + 200);
  local_res10 = param_2;
  FUN_145068400(&local_1c8);
  FUN_145068400(&local_1a8);
  local_res8[0] = *param_4;
  FUN_144c2ead0(*(undefined8 *)(param_1 + 0x18),local_res8,&local_1d8,&local_138);
  local_148 = (float)local_1d8 - local_138;
  fStack_144 = local_1d8._4_4_ - fStack_134;
  fStack_140 = (float)uStack_1d0 - fStack_130;
  fStack_13c = uStack_1d0._4_4_ - fStack_12c;
  fVar26 = fVar5 * fStack_144 - fVar6 * local_148;
  fVar28 = fVar6 * fStack_140 - fVar7 * fStack_144;
  fVar29 = fVar7 * local_148 - fVar5 * fStack_140;
  auVar27._12_4_ = fVar8 * fStack_13c - fVar8 * fStack_13c;
  auVar27._4_4_ = fVar29;
  auVar27._0_4_ = fVar28;
  auVar27._8_4_ = fVar26;
  fVar28 = fVar28 * fVar28;
  fVar29 = fVar29 * fVar29;
  fVar26 = fVar26 * fVar26;
  auVar18._4_4_ = fVar28;
  auVar18._0_4_ = fVar28;
  auVar18._8_4_ = fVar28;
  auVar18._12_4_ = fVar28;
  fVar21 = fVar26 + fVar29 + fVar28;
  if (fVar21 == 0.0) {
    auVar18 = ZEXT816(0);
  }
  else {
    auVar4._4_4_ = fVar26 + fVar29 + fVar28;
    auVar4._0_4_ = fVar21;
    auVar4._8_4_ = fVar26 + fVar29 + fVar28;
    auVar4._12_4_ = fVar26 + fVar29 + fVar28;
    auVar18 = sqrtps(auVar18,auVar4);
    auVar18 = divps(auVar27,auVar18);
  }
  fVar28 = *(float *)(param_2 + 8);
  local_res8[0] = *(float *)(param_2 + 0xc);
  if (*(float *)(param_2 + 0xc) <= 0.0) {
    local_res8[0] = 0.0;
  }
  fVar29 = fVar5 * (0.0 - fVar28);
  fVar26 = fVar6 * (0.0 - fVar28);
  fVar19 = fVar7 * (0.0 - fVar28);
  fVar20 = fVar8 * (0.0 - fVar28);
  local_res8[0] = local_res8[0] + 0.02;
  fVar21 = *(float *)(param_2 + 4);
  fVar22 = local_res8[0] * auVar18._0_4_;
  fVar23 = local_res8[0] * auVar18._4_4_;
  fVar24 = local_res8[0] * auVar18._8_4_;
  fVar25 = local_res8[0] * auVar18._12_4_;
  local_188 = (local_138 - fVar29) + fVar22;
  fStack_184 = (fStack_134 - fVar26) + fVar23;
  fStack_180 = (fStack_130 - fVar19) + fVar24;
  fStack_17c = (fStack_12c - fVar20) + fVar25;
  fVar22 = ((float)local_1d8 - fVar29) + fVar22;
  fVar23 = (local_1d8._4_4_ - fVar26) + fVar23;
  fVar24 = ((float)uStack_1d0 - fVar19) + fVar24;
  fVar25 = (uStack_1d0._4_4_ - fVar20) + fVar25;
  local_158 = fVar5 * (0.0 - ((0.0 - fVar21) - (0.0 - fVar28)));
  fStack_154 = fVar6 * (0.0 - ((0.0 - fVar21) - (0.0 - fVar28)));
  fStack_150 = fVar7 * (0.0 - ((0.0 - fVar21) - (0.0 - fVar28)));
  fStack_14c = fVar8 * (0.0 - ((0.0 - fVar21) - (0.0 - fVar28)));
  local_168 = fVar22;
  fStack_164 = fVar23;
  fStack_160 = fVar24;
  fStack_15c = fVar25;
  FUN_145068460(&local_1c8);
  FUN_145065450(local_e8,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  local_110 = *(undefined8 *)(param_2 + 0x20);
  local_b8 = CONCAT44(fStack_184,local_188);
  uStack_b0 = CONCAT44(fStack_17c,fStack_180);
  local_120 = 0xffffffff;
  local_88 = &local_128;
  local_128 = hkaiTraversalAnalysisUtils::NavMeshSegmentCastingFilterFromClearanceFilter::vftable;
  local_118 = 1;
  local_98 = local_158;
  fStack_94 = fStack_154;
  fStack_90 = fStack_150;
  fStack_8c = fStack_14c;
  local_a8 = fVar22;
  fStack_a4 = fVar23;
  fStack_a0 = fVar24;
  fStack_9c = fVar25;
  FUN_145065480(local_e8,&local_b8,&local_1c8);
  FUN_145068400(&local_1b8);
  local_178 = 0.0 - auVar18._0_4_;
  fStack_174 = 0.0 - auVar18._4_4_;
  fStack_170 = 0.0 - auVar18._8_4_;
  fStack_16c = 0.0 - auVar18._12_4_;
  local_1d8 = *param_6;
  uStack_1d0 = (longlong)(int)param_6[1] * 0x50 + local_1d8;
  puVar32 = &local_1d8;
  pfVar30 = &local_178;
  FUN_14534ab50(param_2,&local_198,local_e8,&local_1c8,&local_188,&local_168,pfVar30,puVar32,param_3
                ,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x17c) << 0x16 |
                 (uint)*param_4,&local_1b8);
  FUN_145068920(&local_1c8,&local_1b8);
  iVar17 = 0;
  local_res8[0] = local_1c0;
  if (0 < (int)local_1c0) {
    do {
      lVar10 = FUN_1450686a0(&local_1c8,iVar17);
      uVar31 = (undefined4)((ulonglong)pfVar30 >> 0x20);
      uVar33 = (undefined4)((ulonglong)puVar32 >> 0x20);
      uVar34 = (undefined4)((ulonglong)param_3 >> 0x20);
      uVar1 = *(uint *)(lVar10 + 0x10);
      if (uVar1 >> 0x16 == *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x17c)) {
        plVar3 = *(longlong **)(param_2 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          uVar13 = uVar1 & 0x3fffff;
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
          iVar2 = *(int *)(lVar15 + 0x50);
          lVar16 = (longlong)iVar2;
          if ((int)uVar13 < *(int *)(lVar15 + 0x20)) {
            uVar12 = uVar13;
            if (*(int *)(lVar15 + 0x98) != 0) {
              uVar12 = *(uint *)(*(longlong *)(lVar15 + 0x90) + (ulonglong)uVar13 * 4);
            }
            param_2 = local_res10;
            if (uVar12 == 0xffffffff) {
              local_1d8 = *(longlong *)(lVar15 + 0x48) + (longlong)(int)(iVar2 * uVar13) * 4;
              uStack_1d0 = local_1d8 + lVar16 * 4;
              lVar15 = *(longlong *)(lVar15 + 0x18) + (ulonglong)uVar13 * 0xc;
            }
            else {
              uStack_1d0 = *(longlong *)(lVar15 + 0x120) + ((int)(uVar12 * iVar2) + lVar16) * 4;
              local_1d8 = *(longlong *)(lVar15 + 0x120) + (longlong)(int)(uVar12 * iVar2) * 4;
              lVar15 = *(longlong *)(lVar15 + 0xb0) + (longlong)(int)uVar12 * 0xc;
            }
          }
          else {
            iVar14 = uVar13 - *(int *)(lVar15 + 0x20);
            lVar11 = (longlong)(iVar14 * iVar2);
            uStack_1d0 = *(longlong *)(lVar15 + 0x140) + (lVar11 + lVar16) * 4;
            local_1d8 = *(longlong *)(lVar15 + 0x140) + lVar11 * 4;
            lVar15 = *(longlong *)(lVar15 + 0xd0) + (longlong)iVar14 * 0xc;
          }
          local_198 = local_1d8;
          lStack_190 = uStack_1d0;
          cVar9 = (**(code **)(*plVar3 + 0x18))
                            (plVar3,*(undefined8 *)(param_1 + 0x28),uVar1,lVar15,&local_198);
          uVar31 = (undefined4)((ulonglong)pfVar30 >> 0x20);
          uVar33 = (undefined4)((ulonglong)puVar32 >> 0x20);
          uVar34 = (undefined4)((ulonglong)param_3 >> 0x20);
          if (cVar9 == '\0') goto LAB_14534a04a;
        }
        FUN_1450682c0(lVar10,&local_188,&local_148,&local_158,&local_178,&local_168);
        local_198 = 0;
        lStack_190 = 0;
        FUN_1450682c0(lVar10,&local_138,&local_148,&local_198,local_f8,local_108);
        uVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x17c) << 0x16;
        param_3 = CONCAT44(uVar34,uVar1);
        puVar32 = (undefined8 *)CONCAT44(uVar33,uVar13 | (uint)*param_4);
        pfVar30 = (float *)CONCAT44(uVar31,uVar13 | *param_5);
        FUN_14534a160(local_f8,local_108,&local_178,&local_168,param_2,
                      *(undefined8 *)(param_1 + 0x28),pfVar30,puVar32,param_3,0xffffffff,param_6);
      }
LAB_14534a04a:
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)local_res8[0]);
  }
  local_1b0 = 0;
  if ((-1 < (int)local_1ac) && (local_1b8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1b8,(ulonglong)(local_1ac & 0x7fffffff) * 0x14);
  }
  local_1b8 = 0;
  local_128 = &PTR_FUN_14ab67d10;
  local_e8[0] = &PTR_FUN_14ab67d10;
  local_1ac = 0x80000000;
  local_1a0 = 0;
  if ((-1 < (int)local_19c) && (local_1a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1a8,(ulonglong)(local_19c & 0x7fffffff) * 0x14);
  }
  local_1a8 = 0;
  local_1c0 = 0.0;
  local_19c = 0x80000000;
  if ((-1 < (int)local_1bc) && (local_1c8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1c8,(ulonglong)(local_1bc & 0x7fffffff) * 0x14);
  }
  return;
}



// FUNCTION 14534a160 FUN_14534a160 body=1410 status=ok
// SIG undefined FUN_14534a160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14534a160(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             longlong param_6,float param_7,float param_8,float param_9,float param_10,
             longlong *param_11)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  float fVar48;
  undefined1 auVar45 [16];
  float fVar49;
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
  
  fVar43 = *param_5;
  local_a8 = *param_3;
  fStack_a4 = param_3[1];
  fStack_a0 = param_3[2];
  fStack_9c = param_3[3];
  local_d8 = *param_1;
  fStack_d4 = param_1[1];
  fStack_d0 = param_1[2];
  fStack_cc = param_1[3];
  fVar28 = *param_4;
  fVar48 = param_4[1];
  fVar29 = param_4[2];
  fVar46 = *param_2;
  fVar47 = param_2[1];
  fVar2 = param_2[2];
  lVar1 = *(longlong *)((ulonglong)((uint)param_7 >> 0x16) * 0x120 + *(longlong *)(param_6 + 0x38));
  fVar31 = *(float *)(lVar1 + 0xc0);
  fVar34 = *(float *)(lVar1 + 0xc4);
  fVar36 = *(float *)(lVar1 + 200);
  fStack_8c = *(float *)(lVar1 + 0xcc);
  fVar12 = (fVar46 - local_d8) * fVar31;
  fVar17 = (fVar47 - fStack_d4) * fVar34;
  fVar19 = (fVar2 - fStack_d0) * fVar36;
  fVar30 = (fVar46 - local_d8) - (fVar17 + fVar12 + fVar19) * fVar31;
  fVar33 = (fVar47 - fStack_d4) - (fVar17 + fVar12 + fVar19) * fVar34;
  fVar35 = (fVar2 - fStack_d0) - (fVar17 + fVar12 + fVar19) * fVar36;
  fVar12 = fVar30 * fVar30;
  fVar17 = fVar33 * fVar33;
  fVar19 = fVar35 * fVar35;
  fVar49 = fVar17 + fVar12 + fVar19;
  if (fVar43 * fVar43 <= fVar49) {
    fVar43 = fVar43 * fVar43;
    fVar13 = (fVar28 - local_a8) * fVar31;
    fVar18 = (fVar48 - fStack_a4) * fVar34;
    fVar20 = (fVar29 - fStack_a0) * fVar36;
    fVar37 = (fVar28 - local_a8) - (fVar18 + fVar13 + fVar20) * fVar31;
    fVar41 = (fVar48 - fStack_a4) - (fVar18 + fVar13 + fVar20) * fVar34;
    fVar42 = (fVar29 - fStack_a0) - (fVar18 + fVar13 + fVar20) * fVar36;
    fVar13 = fVar37 * fVar37;
    fVar18 = fVar41 * fVar41;
    fVar20 = fVar42 * fVar42;
    auVar5._4_4_ = fVar43;
    auVar5._0_4_ = fVar43;
    auVar5._8_4_ = fVar43;
    auVar5._12_4_ = fVar43;
    auVar21._0_4_ = fVar18 + fVar13 + fVar20;
    auVar21._4_4_ = fVar18 + fVar13 + fVar20;
    auVar21._8_4_ = fVar18 + fVar13 + fVar20;
    auVar21._12_4_ = fVar18 + fVar13 + fVar20;
    if (fVar43 <= auVar21._0_4_) {
      auVar5 = sqrtps(auVar5,auVar21);
      auVar9._4_4_ = fVar17 + fVar12 + fVar19;
      auVar9._0_4_ = fVar49;
      auVar9._8_4_ = fVar17 + fVar12 + fVar19;
      auVar9._12_4_ = fVar17 + fVar12 + fVar19;
      auVar21 = sqrtps(auVar21,auVar9);
      auVar22._0_4_ = auVar21._0_4_ * auVar5._0_4_;
      auVar22._4_4_ = auVar21._4_4_ * auVar5._4_4_;
      auVar22._8_4_ = auVar21._8_4_ * auVar5._8_4_;
      auVar22._12_4_ = auVar21._12_4_ * auVar5._12_4_;
      if (_DAT_14c6daea0 <= auVar22._0_4_) {
        fVar30 = fVar30 * fVar37;
        fVar33 = fVar33 * fVar41;
        fVar35 = fVar35 * fVar42;
        auVar14._0_4_ = fVar33 + fVar30 + fVar35;
        auVar14._4_4_ = fVar33 + fVar30 + fVar35;
        auVar14._8_4_ = fVar33 + fVar30 + fVar35;
        auVar14._12_4_ = fVar33 + fVar30 + fVar35;
        auVar5 = divps(auVar14,auVar22);
        if (param_5[5] < auVar5._0_4_) {
          auVar38 = SUB1612(ZEXT816(0),0);
          fVar19 = fVar46 - local_d8;
          fVar30 = fVar47 - fStack_d4;
          fVar33 = fVar2 - fStack_d0;
          fVar35 = param_2[3] - fStack_cc;
          fVar43 = fVar19 * fVar31;
          fVar12 = fVar30 * fVar34;
          fVar17 = fVar33 * fVar36;
          auVar32._0_4_ = fVar19 - (fVar12 + fVar43 + fVar17) * fVar31;
          auVar32._4_4_ = fVar30 - (fVar12 + fVar43 + fVar17) * fVar34;
          auVar32._8_4_ = fVar33 - (fVar12 + fVar43 + fVar17) * fVar36;
          auVar32._12_4_ = fVar35 - (fVar12 + fVar43 + fVar17) * fStack_8c;
          fVar43 = auVar32._0_4_ * auVar32._0_4_;
          fVar12 = auVar32._4_4_ * auVar32._4_4_;
          fVar17 = auVar32._8_4_ * auVar32._8_4_;
          auVar6._4_4_ = fVar43;
          auVar6._0_4_ = fVar43;
          auVar6._8_4_ = fVar43;
          auVar6._12_4_ = fVar43;
          auVar23._0_4_ = fVar12 + fVar43 + fVar17;
          auVar23._4_4_ = fVar12 + fVar43 + fVar17;
          auVar23._8_4_ = fVar12 + fVar43 + fVar17;
          auVar23._12_4_ = fVar12 + fVar43 + fVar17;
          if (auVar23._0_4_ == 0.0) {
            auVar5 = ZEXT816(0);
          }
          else {
            auVar5 = sqrtps(auVar6,auVar23);
            auVar5 = divps(auVar32,auVar5);
          }
          fVar49 = fVar28 - local_a8;
          fVar13 = fVar48 - fStack_a4;
          fVar18 = fVar29 - fStack_a0;
          fVar20 = param_4[3] - fStack_9c;
          fVar43 = fVar31 * fVar49;
          fVar12 = fVar34 * fVar13;
          fVar17 = fVar36 * fVar18;
          auVar44._0_4_ = fVar49 - (fVar12 + fVar43 + fVar17) * fVar31;
          auVar44._4_4_ = fVar13 - (fVar12 + fVar43 + fVar17) * fVar34;
          auVar44._8_4_ = fVar18 - (fVar12 + fVar43 + fVar17) * fVar36;
          auVar44._12_4_ = fVar20 - (fVar12 + fVar43 + fVar17) * fStack_8c;
          fVar43 = auVar44._0_4_ * auVar44._0_4_;
          fVar12 = auVar44._4_4_ * auVar44._4_4_;
          fVar17 = auVar44._8_4_ * auVar44._8_4_;
          auVar7._4_4_ = fVar43;
          auVar7._0_4_ = fVar43;
          auVar7._8_4_ = fVar43;
          auVar7._12_4_ = fVar43;
          auVar24._0_4_ = fVar12 + fVar43 + fVar17;
          auVar24._4_4_ = fVar12 + fVar43 + fVar17;
          auVar24._8_4_ = fVar12 + fVar43 + fVar17;
          auVar24._12_4_ = fVar12 + fVar43 + fVar17;
          if (auVar24._0_4_ == 0.0) {
            auVar21 = ZEXT816(0);
          }
          else {
            auVar21 = sqrtps(auVar7,auVar24);
            auVar21 = divps(auVar44,auVar21);
          }
          fVar43 = auVar5._0_4_ + auVar21._0_4_;
          fVar12 = auVar5._4_4_ + auVar21._4_4_;
          auVar39._4_4_ = fVar12;
          auVar39._0_4_ = fVar43;
          fVar37 = auVar5._8_4_ + auVar21._8_4_;
          fVar41 = (param_5[5] + 1.0) * 2.0;
          fVar43 = fVar43 * fVar43;
          fVar12 = fVar12 * fVar12;
          fVar17 = fVar37 * fVar37;
          auVar8._4_4_ = fVar41;
          auVar8._0_4_ = fVar41;
          auVar8._8_4_ = fVar41;
          auVar8._12_4_ = fVar41;
          auVar25._0_4_ = fVar12 + fVar43 + fVar17;
          auVar25._4_4_ = fVar12 + fVar43 + fVar17;
          auVar25._8_4_ = fVar12 + fVar43 + fVar17;
          auVar25._12_4_ = fVar12 + fVar43 + fVar17;
          if (fVar41 < auVar25._0_4_) {
            if (auVar25._0_4_ != 0.0) {
              auVar9 = sqrtps(auVar8,auVar25);
              auVar39._8_4_ = fVar37;
              auVar39._12_4_ = auVar5._12_4_ + auVar21._12_4_;
              auVar5 = divps(auVar39,auVar9);
              auVar38 = auVar5._0_12_;
            }
            fVar12 = auVar38._0_4_;
            fVar17 = auVar38._4_4_;
            fVar43 = auVar38._8_4_;
            fVar37 = fVar43 * fStack_d0 + fVar17 * fStack_d4 + fVar12 * local_d8;
            fVar46 = fVar43 * fVar2 + fVar17 * fVar47 + fVar12 * fVar46;
            fVar47 = fVar43 * fStack_a0 + fVar17 * fStack_a4 + fVar12 * local_a8;
            fVar48 = fVar43 * fVar29 + fVar17 * fVar48 + fVar12 * fVar28;
            auVar15._4_4_ = fVar37;
            auVar15._0_4_ = fVar37;
            auVar15._8_4_ = fVar37;
            auVar15._12_4_ = fVar37;
            auVar10._4_4_ = fVar37;
            auVar10._0_4_ = fVar37;
            auVar10._8_4_ = fVar37;
            auVar10._12_4_ = fVar37;
            auVar5 = maxps(auVar15,auVar10);
            auVar26._4_4_ = fVar47;
            auVar26._0_4_ = fVar47;
            auVar26._8_4_ = fVar47;
            auVar26._12_4_ = fVar47;
            auVar21 = maxps(auVar26,auVar5);
            auVar11._4_4_ = fVar46;
            auVar11._0_4_ = fVar46;
            auVar11._8_4_ = fVar46;
            auVar11._12_4_ = fVar46;
            auVar16._4_4_ = fVar46;
            auVar16._0_4_ = fVar46;
            auVar16._8_4_ = fVar46;
            auVar16._12_4_ = fVar46;
            auVar5 = minps(auVar16,auVar11);
            auVar40._4_4_ = fVar48;
            auVar40._0_4_ = fVar48;
            auVar40._8_4_ = fVar48;
            auVar40._12_4_ = fVar48;
            auVar5 = minps(auVar40,auVar5);
            fVar43 = auVar21._0_4_;
            fVar28 = auVar5._0_4_;
            if (fVar43 < fVar28) {
              auVar45._0_4_ = fVar46 - fVar37;
              auVar45._4_4_ = fVar46 - fVar37;
              auVar45._8_4_ = fVar48 - fVar47;
              auVar45._12_4_ = fVar48 - fVar47;
              auVar27._0_4_ = fVar43 - fVar37;
              auVar27._4_4_ = fVar28 - fVar37;
              auVar27._8_4_ = fVar43 - fVar47;
              auVar27._12_4_ = fVar28 - fVar47;
              auVar5 = divps(auVar27,auVar45);
              fVar43 = auVar5._0_4_;
              fVar28 = auVar5._4_4_;
              fVar48 = auVar5._8_4_;
              fVar29 = auVar5._12_4_;
              local_c8 = local_d8 + fVar43 * fVar19;
              fStack_c4 = fStack_d4 + fVar43 * fVar30;
              fStack_c0 = fStack_d0 + fVar43 * fVar33;
              fStack_bc = fStack_cc + fVar43 * fVar35;
              local_d8 = fVar28 * fVar19 + local_d8;
              fStack_d4 = fVar28 * fVar30 + fStack_d4;
              fStack_d0 = fVar28 * fVar33 + fStack_d0;
              fStack_cc = fVar28 * fVar35 + fStack_cc;
              local_b8 = local_a8 + fVar48 * fVar49;
              fStack_b4 = fStack_a4 + fVar48 * fVar13;
              fStack_b0 = fStack_a0 + fVar48 * fVar18;
              fStack_ac = fStack_9c + fVar48 * fVar20;
              local_a8 = fVar29 * fVar49 + local_a8;
              fStack_a4 = fVar29 * fVar13 + fStack_a4;
              fStack_a0 = fVar29 * fVar18 + fStack_a0;
              fStack_9c = fVar29 * fVar20 + fStack_9c;
              local_98 = fVar31;
              fStack_94 = fVar34;
              fStack_90 = fVar36;
              iVar3 = FUN_14534a6f0(&local_c8,&local_d8,&local_b8,&local_a8,&local_98,param_5[6]);
              if ((iVar3 != 0) &&
                 (iVar3 = FUN_14534a880(&local_c8,&local_d8,&local_b8,&local_a8,param_5[4],
                                        param_5[3],param_5[2],param_5[1],&local_98),
                 fVar12 = fStack_bc, fVar2 = fStack_c0, fVar47 = fStack_c4, fVar46 = local_c8,
                 fVar29 = fStack_cc, fVar48 = fStack_d0, fVar28 = fStack_d4, fVar43 = local_d8,
                 iVar3 != 0)) {
                fVar17 = (local_d8 - local_c8) * fVar31;
                fVar19 = (fStack_d4 - fStack_c4) * fVar34;
                fVar30 = (fStack_d0 - fStack_c0) * fVar36;
                fVar31 = (local_d8 - local_c8) - (fVar19 + fVar17 + fVar30) * fVar31;
                fVar34 = (fStack_d4 - fStack_c4) - (fVar19 + fVar17 + fVar30) * fVar34;
                fVar36 = (fStack_d0 - fStack_c0) - (fVar19 + fVar17 + fVar30) * fVar36;
                if (*param_5 * *param_5 <= fVar34 * fVar34 + fVar31 * fVar31 + fVar36 * fVar36) {
                  iVar3 = (int)param_11[1] + 1;
                  if ((int)(*(uint *)((longlong)param_11 + 0xc) & 0x7fffffff) < iVar3) {
                    FUN_145070a90(param_11,&PTR_vftable_14c6e47c0,(longlong)iVar3);
                  }
                  lVar1 = param_11[1];
                  *(int *)(param_11 + 1) = iVar3;
                  pfVar4 = (float *)((longlong)(int)lVar1 * 0x50 + *param_11);
                  pfVar4[0x11] = param_8;
                  pfVar4[0x12] = param_9;
                  pfVar4[0x13] = param_10;
                  pfVar4[0x10] = param_7;
                  pfVar4[4] = fVar46;
                  pfVar4[5] = fVar47;
                  pfVar4[6] = fVar2;
                  pfVar4[7] = fVar12;
                  *pfVar4 = fVar43;
                  pfVar4[1] = fVar28;
                  pfVar4[2] = fVar48;
                  pfVar4[3] = fVar29;
                  *(ulonglong *)(pfVar4 + 0xc) = CONCAT44(fStack_b4,local_b8);
                  *(ulonglong *)(pfVar4 + 0xe) = CONCAT44(fStack_ac,fStack_b0);
                  *(ulonglong *)(pfVar4 + 8) = CONCAT44(fStack_a4,local_a8);
                  *(ulonglong *)(pfVar4 + 10) = CONCAT44(fStack_9c,fStack_a0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14534a6f0 FUN_14534a6f0 body=395 status=ok
// SIG undefined FUN_14534a6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14534a6f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
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
  
  fVar17 = 0.0;
  fVar18 = *param_2 - *param_1;
  fVar19 = param_2[1] - param_1[1];
  fVar20 = param_2[2] - param_1[2];
  fVar22 = *param_4 - *param_3;
  fVar24 = param_4[1] - param_3[1];
  fVar26 = param_4[2] - param_3[2];
  fVar7 = (fVar22 - fVar18) * _DAT_14c6dad90 + fVar18;
  fVar12 = (fVar24 - fVar19) * fRam000000014c6dad94 + fVar19;
  fVar14 = (fVar26 - fVar20) * fRam000000014c6dad98 + fVar20;
  fVar16 = ((param_4[3] - param_3[3]) - (param_2[3] - param_1[3])) * fRam000000014c6dad9c +
           (param_2[3] - param_1[3]);
  fVar8 = fVar12 * *param_5 - param_5[1] * fVar7;
  fVar12 = fVar14 * param_5[1] - param_5[2] * fVar12;
  fVar7 = fVar7 * param_5[2] - *param_5 * fVar14;
  auVar11._12_4_ = fVar16 * param_5[3] - param_5[3] * fVar16;
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar12;
  auVar11._8_4_ = fVar8;
  fVar12 = fVar12 * fVar12;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar4._4_4_ = fVar12;
  auVar4._0_4_ = fVar12;
  auVar4._8_4_ = fVar12;
  auVar4._12_4_ = fVar12;
  fVar14 = fVar7 + fVar12 + fVar8;
  if (fVar14 == 0.0) {
    auVar10 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar1._4_4_ = fVar7 + fVar12 + fVar8;
    auVar1._0_4_ = fVar14;
    auVar1._8_4_ = fVar7 + fVar12 + fVar8;
    auVar1._12_4_ = fVar7 + fVar12 + fVar8;
    auVar4 = sqrtps(auVar4,auVar1);
    auVar4 = divps(auVar11,auVar4);
    auVar10 = auVar4._0_12_;
  }
  fVar12 = fVar18 * auVar10._0_4_;
  fVar7 = fVar19 * auVar10._4_4_;
  fVar8 = fVar20 * auVar10._8_4_;
  fVar16 = fVar7 + fVar12 + fVar8;
  fVar5 = fVar7 + fVar12 + fVar8;
  fVar6 = fVar7 + fVar12 + fVar8;
  fVar8 = fVar7 + fVar12 + fVar8;
  fVar12 = fVar22 * auVar10._0_4_;
  fVar7 = fVar24 * auVar10._4_4_;
  fVar14 = fVar26 * auVar10._8_4_;
  fVar9 = fVar7 + fVar12 + fVar14;
  fVar13 = fVar7 + fVar12 + fVar14;
  fVar15 = fVar7 + fVar12 + fVar14;
  fVar14 = fVar7 + fVar12 + fVar14;
  fVar12 = fVar18 * fVar18;
  fVar7 = fVar19 * fVar19;
  fVar21 = fVar20 * fVar20;
  fVar23 = fVar22 * fVar22;
  fVar25 = fVar24 * fVar24;
  fVar27 = fVar26 * fVar26;
  auVar3._4_4_ = fVar23;
  auVar3._0_4_ = fVar23;
  auVar3._8_4_ = fVar23;
  auVar3._12_4_ = fVar23;
  fVar28 = ((fVar7 + fVar12 + fVar21) - fVar16 * fVar16) *
           ((fVar25 + fVar23 + fVar27) - fVar9 * fVar9);
  if (fVar28 != 0.0) {
    auVar2._4_4_ = ((fVar7 + fVar12 + fVar21) - fVar5 * fVar5) *
                   ((fVar25 + fVar23 + fVar27) - fVar13 * fVar13);
    auVar2._0_4_ = fVar28;
    auVar2._8_4_ = ((fVar7 + fVar12 + fVar21) - fVar6 * fVar6) *
                   ((fVar25 + fVar23 + fVar27) - fVar15 * fVar15);
    auVar2._12_4_ =
         ((fVar7 + fVar12 + fVar21) - fVar8 * fVar8) *
         ((fVar25 + fVar23 + fVar27) - fVar14 * fVar14);
    auVar4 = sqrtps(auVar3,auVar2);
    auVar4 = divps(_DAT_14c6daca0,auVar4);
    fVar17 = auVar4._0_4_;
  }
  return param_6 < fVar17 * ((fVar24 * fVar19 + fVar22 * fVar18 + fVar26 * fVar20) - fVar9 * fVar16)
  ;
}



// FUNCTION 14534a880 FUN_14534a880 body=711 status=ok
// SIG undefined FUN_14534a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14534a880(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7,float param_8,float *param_9)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar37 [16];
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
  
  fVar26 = *param_9;
  fVar28 = param_9[1];
  fVar29 = param_9[2];
  fVar1 = param_4[3];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar42 = *param_2 - fVar2;
  fVar43 = param_2[1] - fVar3;
  fVar44 = param_2[2] - fVar4;
  fVar45 = param_2[3] - fVar5;
  fVar39 = *param_4 - *param_2;
  fVar40 = param_4[1] - param_2[1];
  fVar41 = param_4[2] - param_2[2];
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar46 = *param_4 - fVar6;
  fVar47 = param_4[1] - fVar7;
  fVar48 = param_4[2] - fVar8;
  fVar13 = (fVar6 - fVar2) * fVar26;
  fVar15 = (fVar7 - fVar3) * fVar28;
  fVar17 = (fVar8 - fVar4) * fVar29;
  fVar30 = fVar43 * fVar26 - fVar28 * fVar42;
  fVar35 = fVar44 * fVar28 - fVar29 * fVar43;
  fVar36 = fVar42 * fVar29 - fVar26 * fVar44;
  auVar31._12_4_ = fVar45 * param_9[3] - param_9[3] * fVar45;
  auVar31._4_4_ = fVar36;
  auVar31._0_4_ = fVar35;
  auVar31._8_4_ = fVar30;
  fVar38 = fVar15 + fVar13 + fVar17;
  fVar14 = fVar39 * fVar26;
  fVar16 = fVar40 * fVar28;
  fVar18 = fVar41 * fVar29;
  fVar19 = fVar16 + fVar14 + fVar18;
  fVar25 = (fVar6 - fVar2) - fVar38 * fVar26;
  fVar27 = (fVar7 - fVar3) - (fVar15 + fVar13 + fVar17) * fVar28;
  fVar13 = (fVar8 - fVar4) - (fVar15 + fVar13 + fVar17) * fVar29;
  fVar15 = fVar19 - fVar38;
  fVar39 = fVar39 - fVar19 * fVar26;
  fVar40 = fVar40 - (fVar16 + fVar14 + fVar18) * fVar28;
  fVar41 = fVar41 - (fVar16 + fVar14 + fVar18) * fVar29;
  fVar26 = fVar25 * fVar25;
  fVar28 = fVar27 * fVar27;
  fVar29 = fVar13 * fVar13;
  fVar14 = fVar39 * fVar39;
  fVar16 = fVar40 * fVar40;
  fVar17 = fVar41 * fVar41;
  auVar37._4_4_ = fVar28 + fVar26 + fVar29;
  auVar37._0_4_ = fVar28 + fVar26 + fVar29;
  auVar37._8_4_ = fVar28 + fVar26 + fVar29;
  auVar37._12_4_ = fVar28 + fVar26 + fVar29;
  auVar37 = sqrtps(unaff_XMM6,auVar37);
  fVar26 = (float)(auVar37._0_4_ ^
                  (uint)(fVar27 * fVar36 + fVar25 * fVar35 + fVar13 * fVar30 < 0.0) * -0x80000000);
  auVar34._4_4_ = fVar16 + fVar14 + fVar17;
  auVar34._0_4_ = fVar16 + fVar14 + fVar17;
  auVar34._8_4_ = fVar16 + fVar14 + fVar17;
  auVar34._12_4_ = fVar16 + fVar14 + fVar17;
  auVar37 = sqrtps(auVar31,auVar34);
  auVar32._0_4_ =
       (float)(auVar37._0_4_ ^
              (uint)(fVar40 * fVar36 + fVar39 * fVar35 + fVar41 * fVar30 < 0.0) * -0x80000000) -
       fVar26;
  auVar32._4_4_ = auVar32._0_4_;
  auVar32._12_4_ = fVar15;
  auVar32._8_4_ = fVar15;
  auVar10._4_4_ = param_6 - fVar26;
  auVar10._0_4_ = param_5 - fVar26;
  auVar10._8_4_ = param_7 - fVar38;
  auVar10._12_4_ = param_8 - fVar38;
  auVar37 = divps(auVar10,auVar32);
  uVar20 = ~-(uint)(auVar32._0_4_ == 0.0) & auVar37._0_4_;
  uVar22 = ~-(uint)(auVar32._0_4_ == 0.0) & auVar37._4_4_;
  uVar23 = ~-(uint)(fVar15 == 0.0) & auVar37._8_4_;
  uVar24 = ~-(uint)(fVar15 == 0.0) & auVar37._12_4_;
  auVar33._0_4_ =
       ~-(uint)(ABS(auVar32._0_4_) <= _DAT_14c6daea0) &
       (uVar22 & -(uint)(auVar32._0_4_ < 0.0) | ~-(uint)(auVar32._0_4_ < 0.0) & uVar20) |
       -(uint)(0.0 < param_5 - fVar26) & _DAT_14c6daca0 &
       -(uint)(ABS(auVar32._0_4_) <= _DAT_14c6daea0);
  uVar20 = ~-(uint)(ABS(auVar32._0_4_) <= fRam000000014c6daea4) &
           (uVar20 & -(uint)(auVar32._0_4_ < 0.0) | ~-(uint)(auVar32._0_4_ < 0.0) & uVar22) |
           -(uint)(0.0 < param_6 - fVar26) & uRam000000014c6daca4 &
           -(uint)(ABS(auVar32._0_4_) <= fRam000000014c6daea4);
  uVar22 = ~-(uint)(ABS(fVar15) <= fRam000000014c6daea8) &
           (uVar24 & -(uint)(fVar15 < 0.0) | ~-(uint)(fVar15 < 0.0) & uVar23) |
           -(uint)(0.0 < param_7 - fVar38) & uRam000000014c6daca8 &
           -(uint)(ABS(fVar15) <= fRam000000014c6daea8);
  uVar23 = ~-(uint)(ABS(fVar15) <= fRam000000014c6daeac) &
           (uVar23 & -(uint)(fVar15 < 0.0) | ~-(uint)(fVar15 < 0.0) & uVar24) |
           -(uint)(0.0 < param_8 - fVar38) & uRam000000014c6dacac &
           -(uint)(ABS(fVar15) <= fRam000000014c6daeac);
  auVar11._4_4_ = uVar23;
  auVar11._0_4_ = uVar23;
  auVar11._8_4_ = uVar23;
  auVar11._12_4_ = uVar23;
  auVar21._4_4_ = uVar20;
  auVar21._0_4_ = uVar20;
  auVar21._8_4_ = uVar20;
  auVar21._12_4_ = uVar20;
  auVar37 = maxps(auVar21,auVar11);
  auVar37 = minps(auVar37,_DAT_1499314a0);
  auVar12._4_4_ = uVar22;
  auVar12._0_4_ = uVar22;
  auVar12._8_4_ = uVar22;
  auVar12._12_4_ = uVar22;
  auVar33._4_4_ = auVar33._0_4_;
  auVar33._8_4_ = auVar33._0_4_;
  auVar33._12_4_ = auVar33._0_4_;
  auVar34 = minps(auVar33,auVar12);
  auVar37 = maxps(auVar37,ZEXT816(0));
  auVar34 = minps(auVar34,_DAT_1499314a0);
  fVar26 = auVar37._0_4_;
  auVar34 = maxps(auVar34,ZEXT816(0));
  fVar28 = auVar34._0_4_;
  *param_1 = fVar26 * fVar42 + fVar2;
  param_1[1] = auVar37._4_4_ * fVar43 + fVar3;
  param_1[2] = auVar37._8_4_ * fVar44 + fVar4;
  param_1[3] = auVar37._12_4_ * fVar45 + fVar5;
  *param_2 = fVar28 * fVar42 + fVar2;
  param_2[1] = auVar34._4_4_ * fVar43 + fVar3;
  param_2[2] = auVar34._8_4_ * fVar44 + fVar4;
  param_2[3] = auVar34._12_4_ * fVar45 + fVar5;
  *param_3 = fVar46 * fVar26 + fVar6;
  param_3[1] = fVar47 * auVar37._4_4_ + fVar7;
  param_3[2] = fVar48 * auVar37._8_4_ + fVar8;
  param_3[3] = (fVar1 - fVar9) * auVar37._12_4_ + fVar9;
  *param_4 = fVar46 * fVar28 + fVar6;
  param_4[1] = fVar47 * auVar34._4_4_ + fVar7;
  param_4[2] = fVar48 * auVar34._8_4_ + fVar8;
  param_4[3] = (fVar1 - fVar9) * auVar34._12_4_ + fVar9;
  return fVar26 < fVar28;
}



// FUNCTION 14534ab50 FUN_14534ab50 body=1122 status=ok
// SIG undefined FUN_14534ab50(void)

void FUN_14534ab50(float *param_1,float *param_2,undefined8 param_3,longlong param_4,float *param_5,
                  float *param_6,float *param_7,longlong *param_8,longlong *param_9,float param_10,
                  undefined8 param_11)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  int iVar13;
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
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar30;
  undefined1 auVar28 [12];
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  longlong local_130;
  int local_128;
  uint local_124;
  int local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
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
  undefined ***local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  
  pfVar7 = param_6;
  FUN_145068460(param_11);
  iVar9 = *(int *)(param_4 + 8);
  param_6._0_4_ = 0;
  fVar18 = (*pfVar7 - *param_5) * *param_2;
  fVar20 = (pfVar7[1] - param_5[1]) * param_2[1];
  fVar22 = (pfVar7[2] - param_5[2]) * param_2[2];
  fVar32 = (*pfVar7 - *param_5) - (fVar22 + fVar20 + fVar18) * *param_2;
  fVar33 = (pfVar7[1] - param_5[1]) - (fVar22 + fVar20 + fVar18) * param_2[1];
  fVar34 = (pfVar7[2] - param_5[2]) - (fVar22 + fVar20 + fVar18) * param_2[2];
  fVar18 = (pfVar7[3] - param_5[3]) - (fVar22 + fVar20 + fVar18) * param_2[3];
  local_120 = iVar9;
  if (0 < iVar9) {
    do {
      pfVar7 = (float *)FUN_1450686a0(param_4,(int)param_6);
      fVar20 = *pfVar7;
      fVar22 = pfVar7[1];
      fVar14 = fVar32 * fVar20 + *param_5;
      fVar15 = fVar33 * fVar20 + param_5[1];
      fVar16 = fVar34 * fVar20 + param_5[2];
      fVar17 = fVar18 * fVar20 + param_5[3];
      fVar19 = fVar32 * fVar22 + *param_5;
      fVar21 = fVar33 * fVar22 + param_5[1];
      fVar23 = fVar34 * fVar22 + param_5[2];
      fVar22 = fVar18 * fVar22 + param_5[3];
      fVar20 = *param_1;
      auVar26._4_4_ = -(uint)(ABS(fVar15 - fVar21) <= fVar20);
      auVar26._0_4_ = -(uint)(ABS(fVar14 - fVar19) <= fVar20);
      auVar26._8_4_ = -(uint)(ABS(fVar16 - fVar23) <= fVar20);
      auVar26._12_4_ = -(uint)(ABS(fVar17 - fVar22) <= fVar20);
      uVar6 = movmskps((int)pfVar7,auVar26);
      if (((byte)uVar6 & 7) != 7) {
        local_e8 = *(undefined8 *)(param_1 + 8);
        fVar20 = param_1[4];
        local_f8 = 0xffffffff;
        local_f0 = 1;
        local_100 = hkaiTraversalAnalysisUtils::NavMeshSegmentCastingFilterFromClearanceFilter::
                    vftable;
        local_b8 = fVar20 * *param_7 * 2.0;
        fStack_b4 = fVar20 * param_7[1] * 2.0;
        fStack_b0 = fVar20 * param_7[2] * 2.0;
        fStack_ac = fVar20 * param_7[3] * 2.0;
        local_98 = *param_2;
        fStack_94 = param_2[1];
        fStack_90 = param_2[2];
        fStack_8c = param_2[3];
        local_a8 = &local_100;
        local_d8 = fVar14;
        fStack_d4 = fVar15;
        fStack_d0 = fVar16;
        fStack_cc = fVar17;
        local_c8 = fVar19;
        fStack_c4 = fVar21;
        fStack_c0 = fVar23;
        fStack_bc = fVar22;
        local_88 = pfVar7[4];
        FUN_145068400(&local_130);
        FUN_1450658d0(param_3,&local_d8,&local_130);
        FUN_145069850(&local_130,0,0x3f800000,*pfVar7,pfVar7[1]);
        iVar13 = 0;
        if (0 < local_128) {
          do {
            pfVar7 = (float *)FUN_1450686b0(&local_130,iVar13);
            fVar20 = pfVar7[4];
            if ((uint)fVar20 >> 0x16 == (uint)param_10 >> 0x16) {
              uVar1 = *(uint *)((longlong)param_9 + 0xc);
              lVar2 = *param_9;
              uVar8 = (int)fVar20 * -0x61c8864f;
              uVar11 = (ulonglong)
                       ((uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                        (int)fVar20 * -0x4f000000) & uVar1);
              fVar22 = *(float *)(lVar2 + uVar11 * 8);
              while (fVar22 != -NAN) {
                if (fVar22 == fVar20) goto LAB_14534ad9b;
                uVar11 = (ulonglong)((int)uVar11 + 1U & uVar1);
                fVar22 = *(float *)(lVar2 + uVar11 * 8);
              }
              uVar11 = (ulonglong)(int)(uVar1 + 1);
LAB_14534ad9b:
              if ((int)uVar11 <= (int)uVar1) {
                lVar3 = *param_8;
LAB_14534adb0:
                iVar9 = *(int *)(lVar2 + 4 + (longlong)(int)uVar11 * 8);
                lVar10 = (longlong)iVar9;
                fVar22 = *(float *)(lVar3 + 0x44 + lVar10 * 0x50);
                fVar14 = fVar22;
                if (fVar22 == fVar20) {
                  fVar14 = *(float *)(lVar3 + 0x4c + lVar10 * 0x50);
                }
                if (fVar14 != param_10) {
                  iVar9 = (int)uVar11 + 1;
                  lVar10 = (longlong)iVar9;
                  do {
                    if (iVar9 <= (int)uVar1) {
                      pfVar12 = (float *)(lVar2 + lVar10 * 8);
                      do {
                        if (*pfVar12 == -NAN) {
                          iVar9 = uVar1 + 1;
LAB_14534ae1a:
                          uVar11 = (ulonglong)iVar9;
                          if ((int)uVar1 < iVar9) goto LAB_14534aefb;
                          goto LAB_14534adb0;
                        }
                        if (*pfVar12 == fVar20) goto LAB_14534ae1a;
                        iVar9 = iVar9 + 1;
                        pfVar12 = pfVar12 + 2;
                      } while (iVar9 <= (int)uVar1);
                    }
                    iVar9 = 0;
                    lVar10 = 0;
                  } while( true );
                }
                if (-1 < iVar9) {
                  if (fVar22 == fVar20) {
                    auVar24 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x10 + lVar10 * 0x50),0);
                    auVar28 = SUB1612(*(undefined1 (*) [16])(lVar3 + lVar10 * 0x50),0);
                  }
                  else {
                    auVar24 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x30 + lVar10 * 0x50),0);
                    auVar28 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x20 + lVar10 * 0x50),0);
                  }
                  fVar20 = fVar32 * fVar32;
                  fVar14 = fVar33 * fVar33;
                  fVar16 = fVar34 * fVar34;
                  local_110 = 0;
                  fVar19 = (auVar24._0_4_ - *param_5) * fVar32;
                  fVar21 = (auVar24._4_4_ - param_5[1]) * fVar33;
                  fVar23 = (auVar24._8_4_ - param_5[2]) * fVar34;
                  local_108 = 0xffffffff;
                  fVar27 = (auVar28._0_4_ - *param_5) * fVar32;
                  fVar30 = (auVar28._4_4_ - param_5[1]) * fVar33;
                  fVar31 = (auVar28._8_4_ - param_5[2]) * fVar34;
                  fVar22 = fVar16 + fVar14 + fVar20;
                  fVar15 = fVar16 + fVar14 + fVar20;
                  fVar17 = fVar16 + fVar14 + fVar20;
                  fVar16 = fVar16 + fVar14 + fVar20;
                  auVar25._0_4_ = fVar23 + fVar21 + fVar19;
                  auVar25._4_4_ = fVar23 + fVar21 + fVar19;
                  auVar25._8_4_ = fVar23 + fVar21 + fVar19;
                  auVar25._12_4_ = fVar23 + fVar21 + fVar19;
                  auVar4._4_4_ = fVar15;
                  auVar4._0_4_ = fVar22;
                  auVar4._8_4_ = fVar17;
                  auVar4._12_4_ = fVar16;
                  auVar26 = divps(auVar25,auVar4);
                  auVar29._0_4_ = fVar31 + fVar30 + fVar27;
                  auVar29._4_4_ = fVar31 + fVar30 + fVar27;
                  auVar29._8_4_ = fVar31 + fVar30 + fVar27;
                  auVar29._12_4_ = fVar31 + fVar30 + fVar27;
                  local_118 = auVar26._0_4_;
                  if (auVar26._0_4_ <= *pfVar7) {
                    local_118 = *pfVar7;
                  }
                  auVar5._4_4_ = fVar15;
                  auVar5._0_4_ = fVar22;
                  auVar5._8_4_ = fVar17;
                  auVar5._12_4_ = fVar16;
                  auVar26 = divps(auVar29,auVar5);
                  local_114 = auVar26._0_4_;
                  if (pfVar7[1] <= auVar26._0_4_) {
                    local_114 = pfVar7[1];
                  }
                  if (local_118 < local_114) {
                    FUN_14506a530(param_11,&local_118);
                  }
                }
              }
            }
LAB_14534aefb:
            iVar13 = iVar13 + 1;
            iVar9 = local_120;
          } while (iVar13 < local_128);
        }
        local_128 = 0;
        if ((-1 < (int)local_124) && (local_130 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_130,(ulonglong)(local_124 & 0x7fffffff) * 0x14);
        }
        local_130 = 0;
        local_124 = 0x80000000;
      }
      param_6._0_4_ = (int)param_6 + 1;
    } while ((int)param_6 < iVar9);
  }
  return;
}



// FUNCTION 14534afc0 FUN_14534afc0 body=148 status=ok
// SIG undefined FUN_14534afc0(void)

undefined8 * FUN_14534afc0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
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



// FUNCTION 14534b060 FUN_14534b060 body=19 status=ok
// SIG undefined FUN_14534b060(void)

bool FUN_14534b060(longlong param_1,longlong param_2)

{
  return *(int *)(*(longlong *)(param_2 + 0x20) + 0x178) == *(int *)(param_1 + 0x18);
}



// FUNCTION 14534b080 FUN_14534b080 body=6 status=ok
// SIG undefined FUN_14534b080(void)

undefined8 FUN_14534b080(void)

{
  return 1;
}



// FUNCTION 14534b090 FUN_14534b090 body=98 status=ok
// SIG undefined FUN_14534b090(void)

undefined8 FUN_14534b090(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Should not be called here");
  iVar2 = FUN_144bfc110(0x431b7f4,local_208,"Traversal\\hkaiPairedEdgeFinder.cpp",0x358);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_144bde6e0(local_218);
  return 0;
}



// FUNCTION 14534b100 FUN_14534b100 body=98 status=ok
// SIG undefined FUN_14534b100(void)

undefined8 FUN_14534b100(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Should not be called here");
  iVar2 = FUN_144bfc110(0x479d6967,local_208,"Traversal\\hkaiPairedEdgeFinder.cpp",0x35d);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_144bde6e0(local_218);
  return 0;
}



// FUNCTION 14534b170 FUN_14534b170 body=71 status=ok
// SIG undefined FUN_14534b170(void)

undefined8 * FUN_14534b170(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14534b1c0 FUN_14534b1c0 body=915 status=ok
// SIG undefined FUN_14534b1c0(void)

/* WARNING: Removing unreachable block (ram,0x00014534b370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14534b1c0(longlong param_1,longlong param_2,uint *param_3,uint *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar17;
  undefined1 auVar13 [12];
  float fVar16;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  float fVar22;
  undefined1 auVar20 [12];
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  uint uVar33;
  uint uVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined **local_148;
  undefined1 local_140;
  uint local_138;
  uint local_134;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined **local_e8 [2];
  undefined4 local_d8;
  undefined ***local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined1 auVar21 [16];
  
  local_128 = *(longlong *)(param_1 + 0x20);
  local_148 = hkaiPairedEdgeFinder::
              PairedEdgeQuery<hkaiPairedEdgeFinder::PairedEdgeSettings,hkaiPairedEdgeFinder::EdgePair>
              ::vftable;
  local_130 = *(undefined8 *)(param_1 + 0x28);
  local_118 = param_5;
  local_140 = 0;
  local_170 = *(undefined4 *)(*(longlong *)(local_128 + 0x20) + 0x178);
  param_5._0_4_ = *param_3;
  local_188 = _anon_D18B54DB::FilterSpecificInstance::vftable;
  local_180 = 0xffffffff;
  local_178 = 1;
  local_120 = param_2;
  FUN_144c2ead0(*(undefined8 *)(param_1 + 0x18),&param_5,local_158,local_168);
  fVar11 = local_168._0_4_ - local_158._0_4_;
  fVar15 = local_168._4_4_ - local_158._4_4_;
  fVar17 = local_168._8_4_ - local_158._8_4_;
  local_134 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x17c) << 0x16;
  local_108 = local_168;
  local_138 = local_134 | *param_4;
  local_134 = local_134 | *param_3;
  local_f8 = local_158;
  if (_DAT_14c6daea0 < fVar15 * fVar15 + fVar11 * fVar11 + fVar17 * fVar17) {
    uVar3 = 0x8000;
    auVar6 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x18) + 0xc0);
    fVar15 = auVar6._0_4_;
    fVar17 = auVar6._4_4_;
    fVar1 = auVar6._8_4_;
    fVar2 = auVar6._12_4_;
    fVar11 = *(float *)(param_2 + 8);
    fVar29 = ABS(*(float *)(param_2 + 0xc));
    if (ABS(*(float *)(param_2 + 0xc)) <= ABS(*(float *)(param_2 + 0x10))) {
      fVar29 = ABS(*(float *)(param_2 + 0x10));
    }
    fVar24 = *(float *)(param_2 + 4);
    auVar32._0_4_ = fVar15 * fVar15;
    auVar32._4_4_ = fVar17 * fVar17;
    auVar32._8_4_ = fVar1 * fVar1;
    auVar32._12_4_ = fVar2 * fVar2;
    auVar38._0_4_ = auVar32._0_4_ + auVar32._0_4_;
    auVar38._4_4_ = auVar32._0_4_ + auVar32._4_4_;
    auVar38._8_4_ = auVar32._0_4_ + auVar32._8_4_;
    auVar38._12_4_ = auVar32._0_4_ + auVar32._12_4_;
    auVar35._0_8_ = CONCAT44(fVar24 * fVar17,fVar24 * fVar15);
    auVar35._8_4_ = fVar24 * fVar1;
    auVar35._12_4_ = fVar24 * fVar2;
    auVar6 = sqrtps(auVar32,auVar38);
    auVar6 = divps(_DAT_14c6daca0,auVar6);
    uVar23 = -(uint)((int)auVar38._8_4_ < (int)auVar38._4_4_);
    uVar25 = -(uint)((int)auVar38._8_4_ < (int)auVar38._4_4_);
    uVar27 = -(uint)((int)auVar38._8_4_ < (int)auVar38._4_4_);
    auVar20._0_4_ = (uint)fVar17 & uVar23;
    auVar20._4_4_ = (uint)fVar15 & uVar25;
    auVar20._8_4_ = 0;
    auVar13._0_4_ = ~uVar23 & (uint)fVar1;
    auVar13._4_4_ = 0;
    auVar13._8_4_ = ~uVar27 & (uint)fVar15;
    auVar13 = auVar13 | auVar20;
    uVar33 = ~-(uint)(auVar38._4_4_ == 0.0) & auVar6._4_4_;
    uVar34 = ~-(uint)(auVar38._8_4_ == 0.0) & auVar6._8_4_;
    fVar12 = -auVar13._0_4_;
    fVar16 = auVar13._4_4_;
    fVar18 = auVar13._8_4_;
    fVar24 = (float)(~uVar23 & uVar34 | uVar33 & uVar23);
    fVar26 = (float)(~uVar25 & uVar34 | uVar33 & uVar25);
    fVar28 = (float)(~uVar27 & uVar34 | uVar33 & uVar27);
    fVar10 = (float)(~-(uint)((int)auVar38._8_4_ < (int)auVar38._4_4_) & uVar34 |
                    uVar33 & -(uint)((int)auVar38._8_4_ < (int)auVar38._4_4_));
    fVar19 = fVar24 * fVar12 * fVar29;
    fVar22 = fVar26 * fVar16 * fVar29;
    auVar21._0_8_ = CONCAT44(fVar22,fVar19);
    auVar21._8_4_ = fVar28 * fVar18 * fVar29;
    auVar21._12_4_ = fVar10 * 0.0 * fVar29;
    auVar37._0_8_ = CONCAT44(0.0 - fVar22,0.0 - fVar19);
    auVar37._8_4_ = 0.0 - auVar21._8_4_;
    auVar37._12_4_ = 0.0 - auVar21._12_4_;
    auVar30._8_4_ = auVar37._8_4_;
    auVar30._0_8_ = auVar37._0_8_;
    auVar30._12_4_ = auVar37._12_4_;
    fVar24 = (fVar18 * fVar17 - fVar1 * fVar16) * fVar24 * fVar29;
    fVar26 = (fVar12 * fVar1 - fVar15 * fVar18) * fVar26 * fVar29;
    fVar28 = (fVar16 * fVar15 - fVar17 * fVar12) * fVar28 * fVar29;
    fVar29 = (fVar2 * 0.0 - fVar2 * 0.0) * fVar10 * fVar29;
    auVar14._0_4_ = 0.0 - fVar24;
    auVar14._4_4_ = 0.0 - fVar26;
    auVar14._8_4_ = 0.0 - fVar28;
    auVar14._12_4_ = 0.0 - fVar29;
    auVar7._8_4_ = auVar35._8_4_;
    auVar7._0_8_ = auVar35._0_8_;
    auVar7._12_4_ = auVar35._12_4_;
    auVar36._8_4_ = auVar21._8_4_;
    auVar36._0_8_ = auVar21._0_8_;
    auVar36._12_4_ = auVar21._12_4_;
    auVar6._4_4_ = fVar26;
    auVar6._0_4_ = fVar24;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar29;
    auVar6 = minps(auVar36,auVar6);
    auVar8._4_4_ = fVar11 * fVar17;
    auVar8._0_4_ = fVar11 * fVar15;
    auVar8._8_4_ = fVar11 * fVar1;
    auVar8._12_4_ = fVar11 * fVar2;
    auVar36 = maxps(auVar35,auVar8);
    auVar31 = minps(auVar30,auVar14);
    auVar38 = maxps(auVar37,auVar14);
    auVar32 = minps(auVar31,auVar6);
    auVar39._4_4_ = fVar11 * fVar17;
    auVar39._0_4_ = fVar11 * fVar15;
    auVar39._8_4_ = fVar11 * fVar1;
    auVar39._12_4_ = fVar11 * fVar2;
    auVar8 = minps(auVar7,auVar39);
    auVar31._4_4_ = fVar26;
    auVar31._0_4_ = fVar24;
    auVar31._8_4_ = fVar28;
    auVar31._12_4_ = fVar29;
    auVar31 = maxps(auVar21,auVar31);
    auVar39 = maxps(local_168,local_158);
    auVar6 = minps(local_168,local_158);
    auVar31 = maxps(auVar38,auVar31);
    local_a8 = auVar31._0_4_ + auVar36._0_4_ + auVar39._0_4_;
    fStack_a4 = auVar31._4_4_ + auVar36._4_4_ + auVar39._4_4_;
    fStack_a0 = auVar31._8_4_ + auVar36._8_4_ + auVar39._8_4_;
    fStack_9c = auVar31._12_4_ + auVar36._12_4_ + auVar39._12_4_;
    local_b8 = auVar32._0_4_ + auVar8._0_4_ + auVar6._0_4_;
    fStack_b4 = auVar32._4_4_ + auVar8._4_4_ + auVar6._4_4_;
    fStack_b0 = auVar32._8_4_ + auVar8._8_4_ + auVar6._8_4_;
    fStack_ac = auVar32._12_4_ + auVar8._12_4_ + auVar6._12_4_;
    if (*(int *)(param_2 + 0x30) == 0) {
LAB_14534b4e8:
      local_e8[0] = hkaiQueryMediator::EdgesInAabbQueryInput::vftable;
      local_d0 = &local_188;
      local_d8 = 0xffffffff;
      local_c8 = 0;
      uStack_c0 = 0;
      local_98 = 1;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))
                (*(longlong **)(param_1 + 0x30),local_e8,&local_148);
    }
    else {
      pfVar4 = *(float **)(param_2 + 0x28);
      pfVar5 = pfVar4 + (longlong)*(int *)(param_2 + 0x30) * 8;
      for (; pfVar4 != pfVar5; pfVar4 = pfVar4 + 8) {
        auVar9._0_4_ = -(uint)(local_b8 <= pfVar4[4] && *pfVar4 <= local_a8);
        auVar9._4_4_ = -(uint)(fStack_b4 <= pfVar4[5] && pfVar4[1] <= fStack_a4);
        auVar9._8_4_ = -(uint)(fStack_b0 <= pfVar4[6] && pfVar4[2] <= fStack_a0);
        auVar9._12_4_ = -(uint)(fStack_ac <= pfVar4[7] && pfVar4[3] <= fStack_9c);
        uVar3 = movmskps(uVar3,auVar9);
        uVar3 = uVar3 & 7;
        if ((char)uVar3 == '\a') goto LAB_14534b4e8;
      }
    }
  }
  return;
}



// FUNCTION 14534b560 FUN_14534b560 body=753 status=ok
// SIG undefined FUN_14534b560(void)

void FUN_14534b560(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  uint local_98;
  uint local_94;
  int local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  longlong local_40;
  
  uVar12 = 0;
  local_90 = *(int *)(*(longlong *)(param_2 + 0x20) + 0xd8) +
             *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
  if (0 < local_90) {
    local_88 = 0;
    local_40 = 0;
    do {
      lVar5 = local_40;
      lVar2 = *(longlong *)(param_2 + 0x20);
      if (((*(int *)(lVar2 + 0x108) == 0) ||
          ((*(byte *)(local_40 + *(longlong *)(lVar2 + 0x100)) & 1) == 0)) &&
         (*(int *)(*(longlong *)(lVar2 + 0x168) + local_40 * 4) != -3)) {
        iVar1 = *(int *)(lVar2 + 0x50);
        lVar10 = (longlong)iVar1;
        if ((int)uVar12 < *(int *)(lVar2 + 0x20)) {
          uVar7 = uVar12;
          if ((*(int *)(lVar2 + 0x98) == 0) ||
             (uVar7 = *(uint *)(*(longlong *)(lVar2 + 0x90) + local_40 * 4), uVar7 != 0xffffffff)) {
            local_78 = *(longlong *)(lVar2 + 0x120) + (longlong)(int)(uVar7 * iVar1) * 4;
            lStack_70 = *(longlong *)(lVar2 + 0x120) + ((int)(uVar7 * iVar1) + lVar10) * 4;
            lVar10 = *(longlong *)(lVar2 + 0xb0);
            goto LAB_14534b6c9;
          }
          piVar11 = (int *)(*(longlong *)(lVar2 + 0x18) + local_88);
          local_78 = *(longlong *)(lVar2 + 0x48) + (longlong)(int)(iVar1 * uVar12) * 4;
          lStack_70 = local_78 + lVar10 * 4;
        }
        else {
          uVar7 = uVar12 - *(int *)(lVar2 + 0x20);
          local_78 = *(longlong *)(lVar2 + 0x140) + (longlong)(int)(uVar7 * iVar1) * 4;
          lStack_70 = *(longlong *)(lVar2 + 0x140) + ((int)(uVar7 * iVar1) + lVar10) * 4;
          lVar10 = *(longlong *)(lVar2 + 0xd0);
LAB_14534b6c9:
          piVar11 = (int *)(lVar10 + (longlong)(int)uVar7 * 0xc);
        }
        if (param_3 != (longlong *)0x0) {
          local_68 = local_78;
          lStack_60 = lStack_70;
          cVar3 = (**(code **)(*param_3 + 0x18))
                            (param_3,param_1,*(int *)(lVar2 + 0x17c) << 0x16 | uVar12,piVar11,
                             &local_68);
          if (cVar3 == '\0') goto LAB_14534b806;
        }
        iVar1 = piVar11[2];
        iVar6 = 0;
        if (0 < (short)iVar1) {
          do {
            uVar7 = *piVar11 + iVar6;
            local_68 = 0;
            lStack_60 = 0;
            local_98 = uVar7;
            puVar4 = (undefined4 *)
                     FUN_144c450c0(*(undefined8 *)(param_2 + 0x20),&local_98,&local_68);
            local_58 = *puVar4;
            local_54 = puVar4[1];
            local_50 = puVar4[2];
            local_4c = puVar4[3];
            local_48 = *(undefined1 *)(puVar4 + 4);
            local_47 = *(undefined1 *)((longlong)puVar4 + 0x11);
            local_46 = *(undefined2 *)((longlong)puVar4 + 0x12);
            if (local_50 == -1) {
              puVar9 = &local_94;
              puVar8 = &local_98;
              local_98 = uVar7;
              local_94 = uVar12;
LAB_14534b7da:
              FUN_14534b1c0(*param_4,param_4[1],puVar8,puVar9,param_4[2]);
            }
            else if ((param_3 != (longlong *)0x0) &&
                    (cVar3 = (**(code **)(*param_3 + 0x20))
                                       (param_3,param_1,
                                        *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c) << 0x16 |
                                        uVar7,&local_58,&local_68), cVar3 == '\0')) {
              puVar9 = &local_98;
              puVar8 = &local_94;
              local_98 = uVar12;
              local_94 = uVar7;
              goto LAB_14534b7da;
            }
            iVar6 = iVar6 + 1;
            lVar5 = local_40;
          } while (iVar6 < (short)iVar1);
        }
      }
LAB_14534b806:
      local_88 = local_88 + 0xc;
      local_40 = lVar5 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < local_90);
  }
  return;
}



// FUNCTION 14534b860 FUN_14534b860 body=327 status=ok
// SIG undefined FUN_14534b860(void)

void FUN_14534b860(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar4 = param_1[1];
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)lVar4 * 2) {
    lVar3 = *param_1;
    iVar2 = iVar1 * 2 + 2;
    lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar2 * 8);
    if (lVar6 != 0) {
      lVar8 = 0;
      *param_1 = lVar6;
      lVar6 = lVar8;
      if (0 < iVar2) {
        do {
          *(undefined4 *)(*param_1 + lVar6 * 8) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar2);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)((longlong)param_1 + 0xc) = iVar1 * 2 + 1;
      if (0 < iVar1 + 1) {
        do {
          iVar2 = *(int *)(lVar3 + lVar8 * 8);
          if (iVar2 != -1) {
            FUN_14534b860(param_1,iVar2,*(undefined4 *)(lVar3 + 4 + lVar8 * 8));
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar1 + 1);
      }
      if (-1 < (int)lVar4) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
      }
    }
  }
  lVar4 = *param_1;
  uVar5 = param_2 * -0x61c8864f;
  uVar7 = (ulonglong)
          ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | param_2 * -0x4f000000)
          & *(uint *)((longlong)param_1 + 0xc));
  iVar1 = *(int *)(lVar4 + uVar7 * 8);
  while (iVar1 != -1) {
    uVar7 = (ulonglong)((int)uVar7 + 1U & *(uint *)((longlong)param_1 + 0xc));
    iVar1 = *(int *)(lVar4 + uVar7 * 8);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *(int *)(lVar4 + uVar7 * 8) = param_2;
  *(undefined4 *)(*param_1 + 4 + uVar7 * 8) = param_3;
  return;
}



// FUNCTION 14534b9b0 FUN_14534b9b0 body=775 status=ok
// SIG undefined FUN_14534b9b0(void)

void FUN_14534b9b0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_98;
  uint local_94;
  int local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  longlong local_40;
  
  uVar12 = 0;
  local_90 = *(int *)(*(longlong *)(param_2 + 0x20) + 0xd8) +
             *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
  if (0 < local_90) {
    local_88 = 0;
    local_40 = 0;
    do {
      lVar6 = local_40;
      lVar2 = *(longlong *)(param_2 + 0x20);
      if (((*(int *)(lVar2 + 0x108) == 0) ||
          ((*(byte *)(local_40 + *(longlong *)(lVar2 + 0x100)) & 1) == 0)) &&
         (*(int *)(*(longlong *)(lVar2 + 0x168) + local_40 * 4) != -3)) {
        iVar1 = *(int *)(lVar2 + 0x50);
        lVar10 = (longlong)iVar1;
        if ((int)uVar12 < *(int *)(lVar2 + 0x20)) {
          uVar8 = uVar12;
          if ((*(int *)(lVar2 + 0x98) == 0) ||
             (uVar8 = *(uint *)(*(longlong *)(lVar2 + 0x90) + local_40 * 4), uVar8 != 0xffffffff)) {
            local_78 = *(longlong *)(lVar2 + 0x120) + (longlong)(int)(uVar8 * iVar1) * 4;
            lStack_70 = *(longlong *)(lVar2 + 0x120) + ((int)(uVar8 * iVar1) + lVar10) * 4;
            lVar10 = *(longlong *)(lVar2 + 0xb0);
            goto LAB_14534bb19;
          }
          piVar11 = (int *)(*(longlong *)(lVar2 + 0x18) + local_88);
          local_78 = *(longlong *)(lVar2 + 0x48) + (longlong)(int)(iVar1 * uVar12) * 4;
          lStack_70 = local_78 + lVar10 * 4;
        }
        else {
          uVar8 = uVar12 - *(int *)(lVar2 + 0x20);
          local_78 = *(longlong *)(lVar2 + 0x140) + (longlong)(int)(uVar8 * iVar1) * 4;
          lStack_70 = *(longlong *)(lVar2 + 0x140) + ((int)(uVar8 * iVar1) + lVar10) * 4;
          lVar10 = *(longlong *)(lVar2 + 0xd0);
LAB_14534bb19:
          piVar11 = (int *)(lVar10 + (longlong)(int)uVar8 * 0xc);
        }
        if (param_3 != (longlong *)0x0) {
          local_68 = local_78;
          lStack_60 = lStack_70;
          cVar3 = (**(code **)(*param_3 + 0x18))
                            (param_3,param_1,*(int *)(lVar2 + 0x17c) << 0x16 | uVar12,piVar11,
                             &local_68);
          if (cVar3 == '\0') goto LAB_14534bc6c;
        }
        iVar1 = piVar11[2];
        iVar7 = 0;
        if (0 < (short)iVar1) {
          do {
            uVar8 = *piVar11 + iVar7;
            local_68 = 0;
            lStack_60 = 0;
            local_98 = uVar8;
            puVar4 = (undefined4 *)
                     FUN_144c450c0(*(undefined8 *)(param_2 + 0x20),&local_98,&local_68);
            local_58 = *puVar4;
            local_54 = puVar4[1];
            local_50 = puVar4[2];
            local_4c = puVar4[3];
            local_48 = *(undefined1 *)(puVar4 + 4);
            local_47 = *(undefined1 *)((longlong)puVar4 + 0x11);
            local_46 = *(undefined2 *)((longlong)puVar4 + 0x12);
            if (local_50 == -1) {
              uVar13 = param_4[3];
              puVar9 = &local_98;
              puVar5 = &local_94;
              local_98 = uVar8;
              local_94 = uVar12;
LAB_14534bc40:
              FUN_145349b50(*param_4,param_4[1],param_4[2],puVar9,puVar5,uVar13);
            }
            else if ((param_3 != (longlong *)0x0) &&
                    (cVar3 = (**(code **)(*param_3 + 0x20))
                                       (param_3,param_1,
                                        *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c) << 0x16 |
                                        uVar8,&local_58,&local_68), cVar3 == '\0')) {
              uVar13 = param_4[3];
              puVar9 = &local_94;
              puVar5 = &local_98;
              local_98 = uVar12;
              local_94 = uVar8;
              goto LAB_14534bc40;
            }
            iVar7 = iVar7 + 1;
            lVar6 = local_40;
          } while (iVar7 < (short)iVar1);
        }
      }
LAB_14534bc6c:
      local_88 = local_88 + 0xc;
      local_40 = lVar6 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < local_90);
  }
  return;
}



// FUNCTION 14534bcc0 FUN_14534bcc0 body=775 status=ok
// SIG undefined FUN_14534bcc0(void)

void FUN_14534bcc0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_98;
  uint local_94;
  int local_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  longlong local_40;
  
  uVar12 = 0;
  local_90 = *(int *)(*(longlong *)(param_2 + 0x20) + 0xd8) +
             *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
  if (0 < local_90) {
    local_88 = 0;
    local_40 = 0;
    do {
      lVar6 = local_40;
      lVar2 = *(longlong *)(param_2 + 0x20);
      if (((*(int *)(lVar2 + 0x108) == 0) ||
          ((*(byte *)(local_40 + *(longlong *)(lVar2 + 0x100)) & 1) == 0)) &&
         (*(int *)(*(longlong *)(lVar2 + 0x168) + local_40 * 4) != -3)) {
        iVar1 = *(int *)(lVar2 + 0x50);
        lVar10 = (longlong)iVar1;
        if ((int)uVar12 < *(int *)(lVar2 + 0x20)) {
          uVar8 = uVar12;
          if ((*(int *)(lVar2 + 0x98) == 0) ||
             (uVar8 = *(uint *)(*(longlong *)(lVar2 + 0x90) + local_40 * 4), uVar8 != 0xffffffff)) {
            local_78 = *(longlong *)(lVar2 + 0x120) + (longlong)(int)(uVar8 * iVar1) * 4;
            lStack_70 = *(longlong *)(lVar2 + 0x120) + ((int)(uVar8 * iVar1) + lVar10) * 4;
            lVar10 = *(longlong *)(lVar2 + 0xb0);
            goto LAB_14534be29;
          }
          piVar11 = (int *)(*(longlong *)(lVar2 + 0x18) + local_88);
          local_78 = *(longlong *)(lVar2 + 0x48) + (longlong)(int)(iVar1 * uVar12) * 4;
          lStack_70 = local_78 + lVar10 * 4;
        }
        else {
          uVar8 = uVar12 - *(int *)(lVar2 + 0x20);
          local_78 = *(longlong *)(lVar2 + 0x140) + (longlong)(int)(uVar8 * iVar1) * 4;
          lStack_70 = *(longlong *)(lVar2 + 0x140) + ((int)(uVar8 * iVar1) + lVar10) * 4;
          lVar10 = *(longlong *)(lVar2 + 0xd0);
LAB_14534be29:
          piVar11 = (int *)(lVar10 + (longlong)(int)uVar8 * 0xc);
        }
        if (param_3 != (longlong *)0x0) {
          local_68 = local_78;
          lStack_60 = lStack_70;
          cVar3 = (**(code **)(*param_3 + 0x18))
                            (param_3,param_1,*(int *)(lVar2 + 0x17c) << 0x16 | uVar12,piVar11,
                             &local_68);
          if (cVar3 == '\0') goto LAB_14534bf7c;
        }
        iVar1 = piVar11[2];
        iVar7 = 0;
        if (0 < (short)iVar1) {
          do {
            uVar8 = *piVar11 + iVar7;
            local_68 = 0;
            lStack_60 = 0;
            local_98 = uVar8;
            puVar4 = (undefined4 *)
                     FUN_144c450c0(*(undefined8 *)(param_2 + 0x20),&local_98,&local_68);
            local_58 = *puVar4;
            local_54 = puVar4[1];
            local_50 = puVar4[2];
            local_4c = puVar4[3];
            local_48 = *(undefined1 *)(puVar4 + 4);
            local_47 = *(undefined1 *)((longlong)puVar4 + 0x11);
            local_46 = *(undefined2 *)((longlong)puVar4 + 0x12);
            if (local_50 == -1) {
              uVar13 = param_4[3];
              puVar9 = &local_98;
              puVar5 = &local_94;
              local_98 = uVar8;
              local_94 = uVar12;
LAB_14534bf50:
              FUN_145349570(*param_4,param_4[1],param_4[2],puVar9,puVar5,uVar13);
            }
            else if ((param_3 != (longlong *)0x0) &&
                    (cVar3 = (**(code **)(*param_3 + 0x20))
                                       (param_3,param_1,
                                        *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c) << 0x16 |
                                        uVar8,&local_58,&local_68), cVar3 == '\0')) {
              uVar13 = param_4[3];
              puVar9 = &local_94;
              puVar5 = &local_98;
              local_98 = uVar12;
              local_94 = uVar8;
              goto LAB_14534bf50;
            }
            iVar7 = iVar7 + 1;
            lVar6 = local_40;
          } while (iVar7 < (short)iVar1);
        }
      }
LAB_14534bf7c:
      local_88 = local_88 + 0xc;
      local_40 = lVar6 + 1;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < local_90);
  }
  return;
}



// FUNCTION 14534bfd0 FUN_14534bfd0 body=162 status=ok
// SIG undefined FUN_14534bfd0(void)

bool FUN_14534bfd0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  uint local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) != 0) {
    local_res8[0] = param_2 & 0x3fffff;
    local_18 = 0;
    uStack_10 = 0;
    uVar3 = FUN_144c46e80(*(undefined8 *)
                           ((ulonglong)(param_2 >> 0x16) * 0x120 +
                           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)),local_res8,&local_18
                         );
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x20);
    cVar2 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,*(undefined8 *)(param_1 + 0x18),param_2,uVar3,&local_18);
    return cVar2 != '\0';
  }
  return true;
}



// FUNCTION 14534c080 FUN_14534c080 body=317 status=ok
// SIG undefined FUN_14534c080(void)

void FUN_14534c080(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (param_2[1] == *(uint *)(param_1 + 0x14)) {
    return;
  }
  local_res8[0] = param_2[1] & 0x3fffff;
  local_28 = 0;
  uStack_20 = 0;
  lVar3 = FUN_144c450c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),local_res8,&local_28);
  uVar4 = *(uint *)(lVar3 + 0xc);
  if ((*(byte *)(lVar3 + 0x10) & 0x40) == 0) {
    if (uVar4 == 0xffffffff) goto LAB_14534c135;
    uVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x17c) << 0x16 |
            uVar4 & 0x3fffff;
  }
  if (uVar4 != 0xffffffff) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x20);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,*(undefined8 *)(param_1 + 0x18),param_2[1],lVar3,&local_28);
    if (cVar2 != '\0') {
      return;
    }
  }
LAB_14534c135:
  local_res8[0] = param_2[1] & 0x3fffff;
  FUN_144c2ead0(*(undefined8 *)(param_1 + 0x20),local_res8,local_18,&local_28);
  FUN_14534a160(param_1 + 0x40,param_1 + 0x50,local_18,&local_28,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x14),*param_2,param_2[1],*(undefined8 *)(param_1 + 0x30))
  ;
  return;
}



// FUNCTION 14534c1e0 FUN_14534c1e0 body=58 status=ok
// SIG undefined FUN_14534c1e0(void)

void FUN_14534c1e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534f760(param_1);
      }
      param_1 = param_1 + 0x230;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534c220 FUN_14534c220 body=78 status=ok
// SIG undefined FUN_14534c220(void)

void FUN_14534c220(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14534cc30(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x230;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534c270 FUN_14534c270 body=91 status=ok
// SIG undefined FUN_14534c270(void)

void FUN_14534c270(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x230 + 0x150 + param_1;
    do {
      FUN_144bf90d0(param_1 + 0xc0);
      FUN_14534cbc0(param_1);
      param_1 = param_1 + -0x230;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14534c2d0 FUN_14534c2d0 body=73 status=ok
// SIG undefined FUN_14534c2d0(void)

void FUN_14534c2d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_14534d040(param_1,param_2 + param_1);
      param_1 = param_1 + 0x230;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534c3f0 FUN_14534c3f0 body=313 status=ok
// SIG undefined FUN_14534c3f0(void)

void FUN_14534c3f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    puVar5 = (undefined4 *)(param_1 + 4);
    do {
      if (puVar5 + -1 != (undefined4 *)0x0) {
        puVar5[-1] = *(undefined4 *)((longlong)puVar5 + param_2 + -4);
        *puVar5 = *(undefined4 *)((longlong)puVar5 + param_2);
        puVar1 = (undefined4 *)((longlong)puVar5 + param_2 + 0xc);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar5[3] = *puVar1;
        puVar5[4] = uVar2;
        puVar5[5] = uVar3;
        puVar5[6] = uVar4;
        *(undefined1 *)(puVar5 + 7) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x1c);
        *(undefined1 *)((longlong)puVar5 + 0x1d) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x1d);
        *(undefined1 *)((longlong)puVar5 + 0x1e) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x1e);
        *(undefined1 *)((longlong)puVar5 + 0x1f) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x1f);
        *(undefined1 *)(puVar5 + 8) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x20);
        *(undefined1 *)((longlong)puVar5 + 0x21) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x21);
        *(undefined1 *)((longlong)puVar5 + 0x22) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x22);
        *(undefined1 *)((longlong)puVar5 + 0x23) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x23);
        *(undefined1 *)(puVar5 + 9) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x24);
        *(undefined1 *)((longlong)puVar5 + 0x25) =
             *(undefined1 *)((longlong)puVar5 + param_2 + 0x25);
        *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x2c);
        puVar5[0xd] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x34);
        *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x3c);
        *(undefined1 *)(puVar5 + 0x11) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x44);
        puVar5[0x12] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x48);
        puVar5[0x13] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x4c);
        puVar5[0x14] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x50);
        puVar5[0x15] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x54);
        puVar5[0x16] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x58);
        puVar5[0x17] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x5c);
        puVar5[0x18] = *(undefined4 *)(param_2 + 0x60 + (longlong)puVar5);
        puVar5[0x19] = *(undefined4 *)(param_2 + 100 + (longlong)puVar5);
        puVar5[0x1a] = *(undefined4 *)(param_2 + 0x68 + (longlong)puVar5);
        puVar5[0x1b] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x6c);
        FUN_144c90410(puVar5 + 0x1d,param_2 + 0x74 + (longlong)puVar5);
      }
      puVar5 = puVar5 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14534c530 FUN_14534c530 body=68 status=ok
// SIG undefined FUN_14534c530(void)

void FUN_14534c530(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x90 + 0x78 + param_1;
    do {
      FUN_144bf90d0(param_1);
      param_1 = param_1 + -0x90;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14534c580 FUN_14534c580 body=301 status=ok
// SIG undefined FUN_14534c580(void)

void FUN_14534c580(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    puVar5 = (undefined4 *)(param_1 + 4);
    do {
      puVar5[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar5);
      *puVar5 = *(undefined4 *)(param_2 + (longlong)puVar5);
      puVar1 = (undefined4 *)((longlong)puVar5 + param_2 + 0xc);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      puVar5[3] = *puVar1;
      puVar5[4] = uVar2;
      puVar5[5] = uVar3;
      puVar5[6] = uVar4;
      *(undefined1 *)(puVar5 + 7) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x1c);
      *(undefined1 *)((longlong)puVar5 + 0x1d) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x1d);
      *(undefined1 *)((longlong)puVar5 + 0x1e) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x1e);
      *(undefined1 *)((longlong)puVar5 + 0x1f) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x1f);
      *(undefined1 *)(puVar5 + 8) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x20);
      *(undefined1 *)((longlong)puVar5 + 0x21) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x21);
      *(undefined1 *)((longlong)puVar5 + 0x22) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x22);
      *(undefined1 *)((longlong)puVar5 + 0x23) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x23);
      *(undefined1 *)(puVar5 + 9) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x24);
      *(undefined1 *)((longlong)puVar5 + 0x25) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x25);
      *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x2c);
      puVar5[0xd] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x34);
      *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)((longlong)puVar5 + param_2 + 0x3c);
      *(undefined1 *)(puVar5 + 0x11) = *(undefined1 *)((longlong)puVar5 + param_2 + 0x44);
      puVar5[0x12] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x48);
      puVar5[0x13] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x4c);
      puVar5[0x14] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x50);
      puVar5[0x15] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x54);
      puVar5[0x16] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x58);
      puVar5[0x17] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x5c);
      puVar5[0x18] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x60);
      puVar5[0x19] = *(undefined4 *)((longlong)puVar5 + param_2 + 100);
      puVar5[0x1a] = *(undefined4 *)((longlong)puVar5 + param_2 + 0x68);
      puVar5[0x1b] = *(undefined4 *)(param_2 + 0x6c + (longlong)puVar5);
      FUN_144c904b0(puVar5 + 0x1d,param_2 + 0x74 + (longlong)puVar5);
      puVar5 = puVar5 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14534c730 FUN_14534c730 body=55 status=ok
// SIG undefined FUN_14534c730(void)

void FUN_14534c730(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534fa20(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534c770 FUN_14534c770 body=88 status=ok
// SIG undefined FUN_14534c770(void)

void FUN_14534c770(undefined1 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if (param_1 != (undefined1 *)0x0) {
        *param_1 = param_1[param_2];
        lVar1 = *(longlong *)(param_1 + param_2 + 8);
        *(longlong *)(param_1 + 8) = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      param_1 = param_1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14534c7d0 FUN_14534c7d0 body=70 status=ok
// SIG undefined FUN_14534c7d0(void)

void FUN_14534c7d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar1 * 0x10 + 8 + param_1);
    do {
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + -2;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 14534c820 FUN_14534c820 body=106 status=ok
// SIG undefined FUN_14534c820(void)

void FUN_14534c820(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 8);
    do {
      *(undefined1 *)(plVar2 + -1) = *(undefined1 *)(param_2 + -8 + (longlong)plVar2);
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14534c970 FUN_14534c970 body=55 status=ok
// SIG undefined FUN_14534c970(void)

void FUN_14534c970(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534fa30(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534caa0 FUN_14534caa0 body=55 status=ok
// SIG undefined FUN_14534caa0(void)

void FUN_14534caa0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534f700(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534cb40 FUN_14534cb40 body=55 status=ok
// SIG undefined FUN_14534cb40(void)

void FUN_14534cb40(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534f730(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534cb80 FUN_14534cb80 body=55 status=ok
// SIG undefined FUN_14534cb80(void)

void FUN_14534cb80(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534f740(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14534cbc0 FUN_14534cbc0 body=97 status=ok
// SIG undefined FUN_14534cbc0(void)

void FUN_14534cbc0(longlong param_1)

{
  FUN_144bf90d0(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x48),
               (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  return;
}



// FUNCTION 14534cc30 FUN_14534cc30 body=1039 status=ok
// SIG undefined FUN_14534cc30(void)

undefined8 * FUN_14534cc30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar5 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar5;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  uVar5 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar5;
  uVar5 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar5;
  uVar5 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar5;
  uVar5 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar5;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x101) = *(undefined1 *)((longlong)param_2 + 0x101);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  uVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar5;
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x131) = *(undefined1 *)((longlong)param_2 + 0x131);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  uVar5 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar5;
  uVar5 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar5;
  uVar5 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x174);
  uVar3 = *(undefined4 *)(param_2 + 0x2f);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar2;
  *(undefined4 *)(param_1 + 0x2f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x184);
  uVar3 = *(undefined4 *)(param_2 + 0x31);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x31) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar4;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x191) = *(undefined1 *)((longlong)param_2 + 0x191);
  *(undefined1 *)((longlong)param_1 + 0x192) = *(undefined1 *)((longlong)param_2 + 0x192);
  *(undefined1 *)((longlong)param_1 + 0x193) = *(undefined1 *)((longlong)param_2 + 0x193);
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x34);
  puVar7 = (undefined4 *)param_2[0x33];
  if (0 < (int)uVar1) {
    uVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[0x33] = uVar5;
    uVar8 = (ulonglong)uVar1;
    *(uint *)(param_1 + 0x34) = uVar1;
    *(uint *)((longlong)param_1 + 0x1a4) = uVar1;
    puVar6 = (undefined4 *)param_1[0x33];
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar2;
      }
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x1a9) = *(undefined1 *)((longlong)param_2 + 0x1a9);
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1d4);
  uVar3 = *(undefined4 *)(param_2 + 0x3b);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar2;
  *(undefined4 *)(param_1 + 0x3b) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1e4);
  uVar3 = *(undefined4 *)(param_2 + 0x3d);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar2;
  *(undefined4 *)(param_1 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar4;
  FUN_144c90410(param_1 + 0x3e,param_2 + 0x3e);
  FUN_144c90410(param_1 + 0x42,param_2 + 0x42);
  return param_1;
}



// FUNCTION 14534d040 FUN_14534d040 body=993 status=ok
// SIG undefined FUN_14534d040(void)

undefined8 * FUN_14534d040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  puVar1 = param_1 + 0x33;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar3 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar3;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  uVar3 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar3;
  uVar3 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar3;
  uVar3 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar3;
  uVar3 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar3;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x101) = *(undefined1 *)((longlong)param_2 + 0x101);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  uVar3 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar3;
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x131) = *(undefined1 *)((longlong)param_2 + 0x131);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  uVar3 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar3;
  uVar3 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar3;
  uVar3 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar3;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x174);
  uVar5 = *(undefined4 *)(param_2 + 0x2f);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar4;
  *(undefined4 *)(param_1 + 0x2f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x184);
  uVar5 = *(undefined4 *)(param_2 + 0x31);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar4;
  *(undefined4 *)(param_1 + 0x31) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar6;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x191) = *(undefined1 *)((longlong)param_2 + 0x191);
  *(undefined1 *)((longlong)param_1 + 0x192) = *(undefined1 *)((longlong)param_2 + 0x192);
  *(undefined1 *)((longlong)param_1 + 0x193) = *(undefined1 *)((longlong)param_2 + 0x193);
  if (param_2 + 0x33 != puVar1) {
    iVar2 = *(int *)(param_2 + 0x34);
    uVar3 = param_2[0x33];
    if ((int)(*(uint *)((longlong)param_1 + 0x1a4) & 0x7fffffff) < iVar2) {
      FUN_147e4b86a(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 * 4);
    *(int *)(param_1 + 0x34) = iVar2;
  }
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x1a9) = *(undefined1 *)((longlong)param_2 + 0x1a9);
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1d4);
  uVar5 = *(undefined4 *)(param_2 + 0x3b);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar4;
  *(undefined4 *)(param_1 + 0x3b) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1e4);
  uVar5 = *(undefined4 *)(param_2 + 0x3d);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar4;
  *(undefined4 *)(param_1 + 0x3d) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar6;
  FUN_144c904b0(param_1 + 0x3e,param_2 + 0x3e);
  FUN_144c904b0(param_1 + 0x42,param_2 + 0x42);
  return param_1;
}



// FUNCTION 14534d430 FUN_14534d430 body=17 status=ok
// SIG undefined FUN_14534d430(void)

undefined8 * FUN_14534d430(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14534d450 FUN_14534d450 body=27 status=ok
// SIG undefined FUN_14534d450(void)

undefined8 FUN_14534d450(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 14534d470 FUN_14534d470 body=16 status=ok
// SIG undefined FUN_14534d470(void)

void FUN_14534d470(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014534d479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(0,param_2 + -0x10,0);
  return;
}



// FUNCTION 14534d480 FUN_14534d480 body=87 status=ok
// SIG undefined FUN_14534d480(void)

undefined8 FUN_14534d480(undefined8 param_1,ulonglong param_2)

{
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 14534d4e0 FUN_14534d4e0 body=704 status=ok
// SIG undefined FUN_14534d4e0(void)

undefined8 *
FUN_14534d4e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0 [2];
  ulonglong local_a0;
  longlong local_90;
  longlong *local_88;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(param_4);
  }
  local_c8 = param_3;
  local_c0 = param_4;
  local_b8 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  FUN_14534df10(&local_c8,local_b0,0);
  lVar4 = FUN_14534e100(&local_c8,local_78);
  if ((local_90 == *(longlong *)(lVar4 + 0x20)) && (local_88 == *(longlong **)(lVar4 + 0x28))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((local_68 & 1) != 0) {
    FUN_144be6b30(local_68 & 0xfffffffffffffffe);
  }
  if (bVar1) {
    if (local_90 == 0) {
      lVar4 = 0;
      uVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar4 = *local_88;
      iVar2 = FUN_144bf0700(local_88);
      lVar6 = iVar2 + local_b0[0];
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144befdb0(lVar4);
      }
      if ((uVar5 & 1) != 0) {
        FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
        FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
      }
    }
    if ((uVar3 & 1) == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      param_2[2] = uVar3;
      param_2[3] = lVar6;
      param_2[4] = lVar4;
      param_2[5] = uVar5;
      param_2[6] = 0;
    }
    else {
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      *param_2 = param_3;
      param_2[1] = param_4;
      param_2[2] = uVar3;
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      param_2[3] = lVar6;
      param_2[4] = lVar4;
      param_2[5] = uVar5;
      param_2[6] = 0;
      FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
    }
    if ((local_a0 & 1) != 0) {
      FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) != 0) {
      FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) == 0) {
      return param_2;
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      param_2[2] = uVar3;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffffffffffff;
    }
    else {
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      *param_2 = param_3;
      param_2[1] = param_4;
      param_2[2] = uVar3;
      FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffffffffffff;
      FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
    }
    if ((local_a0 & 1) != 0) {
      FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) == 0) {
      return param_2;
    }
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 14534d7a0 FUN_14534d7a0 body=712 status=ok
// SIG undefined FUN_14534d7a0(void)

void FUN_14534d7a0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 local_res18;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  if (param_2[6] != -1) {
    uVar1 = param_2[2];
    local_c8 = *param_2;
    local_c0 = param_2[1];
    iVar13 = (int)param_2[6] + 1;
    local_b8 = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
    }
    FUN_14534df10(&local_c8,&local_78,0);
    local_b0 = local_78;
    local_a8 = local_70;
    local_a0 = local_68;
    if ((local_68 & 1) != 0) {
      FUN_144be6b20(local_68 & 0xfffffffffffffffe);
    }
    local_90 = local_58;
    local_88 = local_50;
    local_80 = local_48;
    local_res18 = local_60;
    local_98 = local_60;
    uVar12 = local_68;
    iVar11 = iVar13;
    if (0 < iVar13) {
      do {
        if (local_50 == local_48) break;
        FUN_14534dcb0(&local_b0);
        iVar11 = iVar11 + -1;
      } while (0 < iVar11);
      local_res18 = local_98;
      local_78 = local_b0;
      uVar12 = local_a0;
      local_70 = local_a8;
    }
    uVar8 = local_80;
    uVar5 = local_88;
    lVar7 = local_90;
    local_98 = local_res18;
    if ((uVar12 & 1) != 0) {
      FUN_144be6b20(uVar12 & 0xfffffffffffffffe);
    }
    if ((local_68 & 1) != 0) {
      FUN_144be6b30(local_68 & 0xfffffffffffffffe);
    }
    local_60 = local_res18;
    local_68 = uVar12;
    local_58 = lVar7;
    local_50 = uVar5;
    local_48 = uVar8;
    if ((uVar12 & 1) != 0) {
      FUN_144be6b30(uVar12 & 0xfffffffffffffffe);
    }
    lVar9 = FUN_14534e100(&local_c8,&local_b0);
    if (((lVar7 == 0) || (*(longlong *)(lVar9 + 0x20) != 0)) &&
       ((lVar7 != *(longlong *)(lVar9 + 0x20) || (*(ulonglong *)(lVar9 + 0x28) <= uVar5)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((local_a0 & 1) != 0) {
      FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
    }
    if (bVar6) {
      puVar10 = (undefined8 *)FUN_14534de30(&local_78,&local_c8);
      uVar2 = *puVar10;
      uVar3 = puVar10[2];
      uVar4 = puVar10[1];
      puVar10[2] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      param_2[3] = uVar2;
      param_2[4] = uVar4;
      uVar5 = param_2[5];
      param_2[5] = uVar3;
      if ((uVar5 & 1) != 0) {
        FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
      }
      if ((local_b8 & 1) != 0) {
        FUN_144be6b30(local_b8 & 0xfffffffffffffffe);
      }
      param_2[6] = (longlong)iVar13;
      if ((uVar12 & 1) != 0) {
        FUN_144be6b30(uVar12 & 0xfffffffffffffffe);
      }
      if ((uVar1 & 1) == 0) {
        return;
      }
      FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
      return;
    }
    if ((uVar12 & 1) != 0) {
      FUN_144be6b30(uVar12 & 0xfffffffffffffffe);
    }
    if ((uVar1 & 1) != 0) {
      FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
    }
  }
  param_2[6] = 0xffffffffffffffff;
  return;
}



// FUNCTION 14534da70 FUN_14534da70 body=87 status=ok
// SIG undefined FUN_14534da70(void)

undefined8 FUN_14534da70(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14534dad0 FUN_14534dad0 body=215 status=ok
// SIG undefined FUN_14534dad0(void)

undefined4 *
FUN_14534dad0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong local_res10;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  FUN_144bf0690(&local_res10);
  if (local_res10 < 2) {
    lVar6 = 0;
  }
  else {
    if (local_res10 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144bef220();
    }
    puVar5 = (undefined8 *)FUN_144bef430(param_4,local_38,&DAT_14c7453c0);
    piVar1 = (int *)*puVar5;
    if ((local_28 & 1) != 0) {
      FUN_144be6b30(local_28 & 0xfffffffffffffffe);
    }
    if (piVar1 == (int *)0x0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *piVar1;
    }
    iVar2 = FUN_144bf0700(&local_res10);
    iVar3 = FUN_144beec90(uVar4);
    lVar6 = (ulonglong)*(ushort *)((longlong)iVar3 + (longlong)iVar7 * 2 + -iVar2 + param_3) +
            -iVar2 + param_3;
  }
  *param_2 = 0;
  *param_5 = lVar6;
  return param_2;
}



// FUNCTION 14534dbb0 FUN_14534dbb0 body=10 status=ok
// SIG undefined FUN_14534dbb0(void)

undefined4 * FUN_14534dbb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534dbc0 FUN_14534dbc0 body=3 status=ok
// SIG undefined FUN_14534dbc0(void)

void FUN_14534dbc0(void)

{
  return;
}



// FUNCTION 14534dbd0 FUN_14534dbd0 body=87 status=ok
// SIG undefined FUN_14534dbd0(void)

undefined8 FUN_14534dbd0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14534dc30 FUN_14534dc30 body=10 status=ok
// SIG undefined FUN_14534dc30(void)

undefined4 * FUN_14534dc30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534dc40 FUN_14534dc40 body=10 status=ok
// SIG undefined FUN_14534dc40(void)

undefined4 * FUN_14534dc40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534dc50 FUN_14534dc50 body=87 status=ok
// SIG undefined FUN_14534dc50(void)

undefined8 FUN_14534dc50(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14534dcb0 FUN_14534dcb0 body=374 status=ok
// SIG undefined FUN_14534dcb0(void)

longlong FUN_14534dcb0(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 8);
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return param_1;
  }
  plVar6 = (longlong *)0x0;
  do {
    if (plVar1 < *(longlong **)(param_1 + 0x30)) {
      do {
        plVar1 = (longlong *)*plVar1;
        if (plVar1 != (longlong *)0x0) {
          local_30 = 1;
          local_28 = 0;
          local_38 = (longlong)plVar1;
          puVar2 = (undefined4 *)FUN_144bef800(plVar1,local_res8);
          plVar4 = plVar6;
          if (((byte)*puVar2 & 0x1f) == 7) {
            plVar4 = plVar1;
          }
          if ((((plVar4 != (longlong *)0x0) || ((int)local_30 != 0)) &&
              (lVar3 = FUN_14534e3d0(&local_38,local_38,0,0,0), lVar3 != 0)) && ((int)local_28 == 0)
             ) break;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          plVar1 = (longlong *)**(undefined8 **)(param_1 + 0x28);
          puVar2 = (undefined4 *)FUN_144bef800(plVar1,local_res10);
          plVar4 = plVar6;
          if (((byte)*puVar2 & 0x1f) == 6) {
            plVar4 = plVar1;
          }
          if (plVar4 != (longlong *)0x0) break;
        }
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 8);
        *(longlong **)(param_1 + 0x28) = plVar1;
      } while (plVar1 < *(longlong **)(param_1 + 0x30));
    }
    if (*(ulonglong *)(param_1 + 0x28) < *(ulonglong *)(param_1 + 0x30)) {
      return param_1;
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(ulonglong *)(param_1 + 0x30) != 0) {
      lVar3 = FUN_144beff80(lVar3);
    }
    *(longlong *)(param_1 + 0x20) = lVar3;
    plVar1 = plVar6;
    plVar4 = plVar6;
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)FUN_144bef8b0(lVar3,local_48);
      plVar1 = (longlong *)*puVar5;
      plVar4 = (longlong *)puVar5[1];
    }
    *(longlong **)(param_1 + 0x28) = plVar1;
    *(longlong **)(param_1 + 0x30) = plVar4;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 14534de30 FUN_14534de30 body=214 status=ok
// SIG undefined FUN_14534de30(void)

longlong * FUN_14534de30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1[4] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  lVar1 = *(longlong *)param_1[5];
  iVar3 = FUN_144bf0700();
  lVar2 = *param_1;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(lVar1);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    *param_2 = iVar3 + lVar2;
    param_2[1] = lVar1;
    param_2[2] = uVar4;
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
    return param_2;
  }
  *param_2 = iVar3 + lVar2;
  param_2[1] = lVar1;
  param_2[2] = uVar4;
  return param_2;
}



// FUNCTION 14534df10 FUN_14534df10 body=488 status=ok
// SIG undefined FUN_14534df10(void)

undefined8 * FUN_14534df10(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  plVar5 = (longlong *)param_2[1];
  plVar8 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 3) = param_3;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (plVar5 != (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res18);
    plVar7 = plVar8;
    if (((byte)*puVar4 & 0x1f) == 7) {
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)(param_2[5] + 8);
    param_2[4] = plVar7;
    param_2[5] = plVar5;
    while (plVar7 != (longlong *)0x0) {
      if (plVar5 < (longlong *)param_2[6]) {
        do {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != (longlong *)0x0) {
            local_40 = 1;
            local_38 = 0;
            local_48 = (longlong)plVar5;
            puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res18);
            plVar7 = plVar8;
            if (((byte)*puVar4 & 0x1f) == 7) {
              plVar7 = plVar5;
            }
            if ((((plVar7 != (longlong *)0x0) || ((int)local_40 != 0)) &&
                (lVar6 = FUN_14534e3d0(&local_48,local_48,0,0,0), lVar6 != 0)) &&
               ((int)local_38 == 0)) break;
          }
          if (*(int *)(param_2 + 3) != 0) {
            plVar5 = *(longlong **)param_2[5];
            puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res8);
            plVar7 = plVar8;
            if (((byte)*puVar4 & 0x1f) == 6) {
              plVar7 = plVar5;
            }
            if (plVar7 != (longlong *)0x0) break;
          }
          plVar5 = (longlong *)(param_2[5] + 8);
          param_2[5] = plVar5;
        } while (plVar5 < (longlong *)param_2[6]);
      }
      if ((ulonglong)param_2[5] < (ulonglong)param_2[6]) break;
      lVar6 = param_2[4];
      if (param_2[6] != 0) {
        lVar6 = FUN_144beff80(lVar6);
      }
      param_2[4] = lVar6;
      plVar5 = plVar8;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_144bef8b0(lVar6,local_58);
        plVar5 = (longlong *)*plVar7;
        plVar7 = (longlong *)plVar7[1];
      }
      param_2[5] = plVar5;
      param_2[6] = plVar7;
      plVar7 = (longlong *)param_2[4];
    }
  }
  if ((uVar1 & 1) != 0) {
    FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14534e100 FUN_14534e100 body=608 status=ok
// SIG undefined FUN_14534e100(void)

undefined8 * FUN_14534e100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar5 = (longlong *)param_1[1];
  puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res8);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  if (((byte)*puVar4 & 0x1f) == 7) {
    plVar7 = plVar5;
  }
  if (plVar7 != (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    return param_2;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  plVar5 = (longlong *)param_2[1];
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (plVar5 != (longlong *)0x0) {
    puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res8);
    plVar7 = plVar8;
    if (((byte)*puVar4 & 0x1f) == 7) {
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)(param_2[5] + 8);
    param_2[4] = plVar7;
    param_2[5] = plVar5;
    while (plVar7 != (longlong *)0x0) {
      if (plVar5 < (longlong *)param_2[6]) {
        do {
          plVar5 = (longlong *)*plVar5;
          if (plVar5 != (longlong *)0x0) {
            local_40 = 1;
            local_38 = 0;
            local_48 = (longlong)plVar5;
            puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res8);
            plVar7 = plVar8;
            if (((byte)*puVar4 & 0x1f) == 7) {
              plVar7 = plVar5;
            }
            if ((((plVar7 != (longlong *)0x0) || ((int)local_40 != 0)) &&
                (lVar6 = FUN_14534e3d0(&local_48,local_48,0,0,0), lVar6 != 0)) &&
               ((int)local_38 == 0)) break;
          }
          if (*(int *)(param_2 + 3) != 0) {
            plVar5 = *(longlong **)param_2[5];
            puVar4 = (undefined4 *)FUN_144bef800(plVar5,local_res18);
            plVar7 = plVar8;
            if (((byte)*puVar4 & 0x1f) == 6) {
              plVar7 = plVar5;
            }
            if (plVar7 != (longlong *)0x0) break;
          }
          plVar5 = (longlong *)(param_2[5] + 8);
          param_2[5] = plVar5;
        } while (plVar5 < (longlong *)param_2[6]);
      }
      if ((ulonglong)param_2[5] < (ulonglong)param_2[6]) break;
      lVar6 = param_2[4];
      if (param_2[6] != 0) {
        lVar6 = FUN_144beff80(lVar6);
      }
      param_2[4] = lVar6;
      plVar5 = plVar8;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        plVar7 = (longlong *)FUN_144bef8b0(lVar6,local_58);
        plVar5 = (longlong *)*plVar7;
        plVar7 = (longlong *)plVar7[1];
      }
      param_2[5] = plVar5;
      param_2[6] = plVar7;
      plVar7 = (longlong *)param_2[4];
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14534e360 FUN_14534e360 body=14 status=ok
// SIG undefined FUN_14534e360(void)

undefined8 * FUN_14534e360(undefined8 *param_1)

{
  *param_1 = FUN_14534e370;
  return param_1;
}



// FUNCTION 14534e370 FUN_14534e370 body=86 status=ok
// SIG undefined FUN_14534e370(void)

void FUN_14534e370(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144beec90(param_1[1]);
  if (iVar1 == 8) {
    FUN_144bdff50(param_2,"%#018llx",*(undefined8 *)*param_1);
    return;
  }
  FUN_144bdff50(param_2,"%#010x",*(undefined4 *)*param_1);
  return;
}



// FUNCTION 14534e3d0 FUN_14534e3d0 body=244 status=ok
// SIG undefined FUN_14534e3d0(void)

undefined8
FUN_14534e3d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  puVar3 = (uint *)FUN_144bef800(param_2,local_res8);
  switch(*puVar3 & 0x1f) {
  case 0:
    cVar2 = FUN_144f634e0(&DAT_149d41e90,"Not implemented");
    if (cVar2 != '\0') {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    goto LAB_14534e439;
  case 1:
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
LAB_14534e439:
    uVar4 = FUN_14534f3b0(param_1,param_2,param_3,param_4);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    uVar4 = FUN_14534e610(param_1,param_2,param_3,param_4,param_5);
    break;
  case 6:
  case 7:
  case 8:
    uVar4 = FUN_14534e6c0(param_1,param_2,param_3,param_4,param_5);
    break;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14534e4f0 FUN_14534e4f0 body=286 status=ok
// SIG undefined FUN_14534e4f0(void)

longlong FUN_14534e4f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_228 [88];
  undefined8 local_1d0;
  
  lVar3 = param_3;
  if ((param_5 != 0) && (lVar2 = FUN_144f69980(param_3), lVar3 = param_2, param_3 != lVar2)) {
    FUN_144f6faa0(local_228);
    FUN_144f6ff20(local_228,param_3,0xffffffff);
    FUN_144f6fee0(local_228,param_3);
    local_1d0 = FUN_14534e4f0(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,param_5);
    FUN_144f704d0(local_228,0);
    lVar3 = FUN_144f706a0(local_228,param_5);
    iVar4 = *(int *)(param_4 + 0x18) + 1;
    if ((int)(*(uint *)(param_4 + 0x1c) & 0x7fffffff) < iVar4) {
      FUN_144bf0cc0(param_4 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + (longlong)*(int *)(param_4 + 0x18) * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = lVar3;
    }
    *(int *)(param_4 + 0x18) = iVar4;
    FUN_144f6fbe0(local_228);
  }
  return lVar3;
}



// FUNCTION 14534e610 FUN_14534e610 body=164 status=ok
// SIG undefined FUN_14534e610(void)

void FUN_14534e610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = FUN_144f69980(param_2);
  puVar2 = (undefined4 *)FUN_144bef800(lVar1);
  lVar4 = 0;
  if (((byte)*puVar2 & 0x1f) == 3) {
    lVar4 = lVar1;
  }
  if (lVar4 == 0) {
    uVar3 = FUN_14534f3b0(param_1,lVar1,param_3,param_4);
  }
  else {
    uVar3 = FUN_14534e830();
  }
  FUN_14534e4f0(param_1,uVar3,param_2,param_3);
  return;
}



// FUNCTION 14534e6c0 FUN_14534e6c0 body=353 status=ok
// SIG undefined FUN_14534e6c0(void)

void FUN_14534e6c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined1 local_28 [16];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar2 = FUN_144f69980(param_2);
  puVar3 = (undefined4 *)FUN_144bef800(lVar2,local_28);
  lVar6 = 0;
  uVar7 = 0;
  lVar5 = lVar6;
  if (((byte)*puVar3 & 0x1f) == 8) {
    lVar5 = lVar2;
  }
  if (lVar5 == 0) {
    puVar3 = (undefined4 *)FUN_144bef800(lVar2,local_28);
    lVar5 = lVar6;
    if (((byte)*puVar3 & 0x1f) == 7) {
      lVar5 = lVar2;
    }
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
      if ((lVar2 != *param_1) || ((int)param_1[1] != 0)) {
        uVar7 = 1;
      }
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
      uVar4 = FUN_14534ed50(param_1,lVar5,param_3,param_4,CONCAT44(uVar8,param_5));
      FUN_14534e4f0(param_1,uVar4,param_2,param_3,param_4);
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
      return;
    }
    puVar3 = (undefined4 *)FUN_144bef800(lVar2,local_28);
    if (((byte)*puVar3 & 0x1f) == 6) {
      lVar6 = lVar2;
    }
    if (lVar6 == 0) {
      *(uint *)(param_1 + 2) = (int)param_1[2] + (uint)(*(int *)((longlong)param_1 + 0xc) == 0);
      FUN_14534f3b0(param_1,&DAT_14c6ddac0,param_3,param_4);
      return;
    }
    uVar4 = FUN_14534f170();
  }
  else {
    uVar4 = FUN_14534eaf0(param_1,lVar5,param_3,param_4,CONCAT44(uVar8,param_5));
  }
  FUN_14534e4f0(param_1,uVar4,param_2,param_3,param_4);
  return;
}



// FUNCTION 14534e830 FUN_14534e830 body=700 status=ok
// SIG undefined FUN_14534e830(void)

undefined8
FUN_14534e830(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,int param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 local_268;
  longlong local_260;
  undefined4 *local_258;
  undefined8 local_250;
  undefined1 local_248 [16];
  undefined1 local_238 [96];
  ulonglong local_1d8;
  undefined *local_1c0;
  
  if (param_5 < 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
    uVar2 = FUN_14534f3b0(param_1,&DAT_14c6ddac0);
  }
  else {
    uVar2 = FUN_144f69980(param_2);
    if (param_4 == 0) {
      if (param_3 != (longlong *)0x0) {
        iVar8 = (int)param_3[1] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar8) {
          FUN_144c44830(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar1 = (undefined2 *)(*param_3 + (longlong)(int)param_3[1] * 2);
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = (short)param_5;
        }
        *(int *)(param_3 + 1) = iVar8;
        iVar8 = (int)param_3[3] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0x1c) & 0x7fffffff) < iVar8) {
          FUN_144bf0cc0(param_3 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar5 = (undefined8 *)(param_3[2] + (longlong)(int)param_3[3] * 8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = uVar2;
        }
        *(int *)(param_3 + 3) = iVar8;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else {
      FUN_144f6faa0(local_238);
      FUN_144f6ff20(local_238,uVar2,0xffffffff);
      uVar3 = FUN_144bef510(uVar2);
      FUN_144f6fee0(local_238,uVar3);
      local_1d8 = local_1d8 | 4;
      local_1c0 = &DAT_14c7fd9a8;
      local_250 = 4;
      puVar4 = (undefined4 *)(*DAT_14c787670)(0,&local_250,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar4,"PtrOffsetIndex");
      }
      puVar6 = (undefined4 *)0x0;
      puVar9 = puVar6;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar9 = puVar4;
      }
      *puVar9 = *(undefined4 *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      local_258 = (undefined4 *)0x0;
      puVar5 = (undefined8 *)FUN_144beec10(local_248,puVar9,&DAT_14c7453c0);
      local_260 = puVar5[1];
      local_268 = *puVar5;
      if (local_260 != 0) {
        puVar6 = (undefined4 *)FUN_144befdb0();
      }
      if (((ulonglong)puVar6 & 1) != 0) {
        FUN_144be6b20((ulonglong)puVar6 & 0xfffffffffffffffe);
      }
      if (((ulonglong)local_258 & 1) != 0) {
        uVar7 = (ulonglong)local_258 & 0xfffffffffffffffe;
        local_258 = puVar6;
        FUN_144be6b30(uVar7);
        puVar6 = local_258;
      }
      local_258 = puVar6;
      FUN_144f6ffc0(local_238,&local_268);
      if (((ulonglong)local_258 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_258 & 0xfffffffffffffffe);
      }
      FUN_14534f510(param_1,local_238,uVar2,param_4);
      FUN_144f704d0(local_238,0);
      uVar2 = FUN_144f706a0(local_238,param_4);
      iVar8 = (int)param_3[3] + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0x1c) & 0x7fffffff) < iVar8) {
        FUN_144bf0cc0(param_3 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      puVar5 = (undefined8 *)(param_3[2] + (longlong)(int)param_3[3] * 8);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = uVar2;
      }
      *(int *)(param_3 + 3) = iVar8;
      uVar2 = FUN_14534e4f0(param_1,uVar2,param_2,param_3,param_4);
      FUN_144f6fbe0(local_238);
    }
  }
  return uVar2;
}



// FUNCTION 14534eaf0 FUN_14534eaf0 body=603 status=ok
// SIG undefined FUN_14534eaf0(void)

undefined8
FUN_14534eaf0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 in_stack_fffffffffffffd98;
  undefined4 uVar7;
  undefined8 local_258;
  undefined1 local_250 [96];
  ulonglong local_1f0;
  longlong local_1e0;
  
  iVar6 = param_5;
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  if (param_5 < 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
    uVar1 = FUN_14534f3b0(param_1,&DAT_14c6ddac0);
  }
  else {
    puVar2 = (undefined8 *)FUN_144befe50(param_2,1);
    uVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *puVar2;
    }
    if ((int)((ulonglong)uVar1 >> 8) == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
      uVar1 = FUN_14534f3b0(param_1,&DAT_14c6ddac0,param_3,param_4);
    }
    else {
      uVar3 = FUN_144f69980(param_2);
      puVar4 = (undefined4 *)FUN_144bef800(uVar3,&param_5);
      uVar1 = 0;
      if (((byte)*puVar4 & 0x1f) == 8) {
        uVar1 = uVar3;
      }
      FUN_144beff00(uVar1,&local_258);
      lVar5 = FUN_14534e3d0(param_1,local_258,param_3,param_4,CONCAT44(uVar7,iVar6));
      if (param_4 == 0) {
        if (lVar5 != 0) {
          uVar1 = FUN_14534f3b0(param_1,uVar1,param_3,0);
          uVar1 = FUN_14534e4f0(param_1,uVar1,param_2,param_3,0);
          return uVar1;
        }
        iVar6 = *(int *)(param_1 + 0xc);
        param_4 = 0;
      }
      else {
        if (lVar5 != 0) {
          FUN_144f6faa0(local_250);
          FUN_144f6ff20(local_250,uVar1,0xffffffff);
          uVar3 = FUN_144bef510(uVar1);
          FUN_144f6fee0(local_250,uVar3);
          FUN_14534f510(param_1,local_250,uVar1,param_4);
          FUN_144f704d0(local_250,0);
          local_1f0 = local_1f0 | 2;
          local_1e0 = lVar5;
          uVar1 = FUN_144f706a0(local_250,param_4);
          iVar6 = *(int *)(param_3 + 0x18) + 1;
          if ((int)(*(uint *)(param_3 + 0x1c) & 0x7fffffff) < iVar6) {
            FUN_144bf0cc0(param_3 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          puVar2 = (undefined8 *)
                   (*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = uVar1;
          }
          *(int *)(param_3 + 0x18) = iVar6;
          uVar1 = FUN_14534e4f0(param_1,uVar1,param_2,param_3,param_4);
          FUN_144f6fbe0(local_250);
          return uVar1;
        }
        iVar6 = *(int *)(param_1 + 0xc);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(iVar6 == 0);
      uVar1 = FUN_14534f3b0(param_1,&DAT_14c6ddac0,param_3,param_4);
    }
  }
  return uVar1;
}



// FUNCTION 14534ed50 FUN_14534ed50 body=1049 status=ok
// SIG undefined FUN_14534ed50(void)

undefined8
FUN_14534ed50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             int param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong local_res20;
  longlong in_stack_fffffffffffffd58;
  undefined4 uVar12;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  undefined4 local_280 [2];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 *local_268;
  undefined1 local_260 [88];
  undefined8 local_208;
  ulonglong local_200;
  undefined *local_1e8;
  undefined8 local_188;
  undefined *local_160;
  undefined8 local_140;
  undefined8 *puVar7;
  
  if (param_4 == 0) {
    lVar5 = FUN_144beff80(param_2);
    if (lVar5 != 0) {
      in_stack_fffffffffffffd58 =
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffd58 >> 0x20),param_5);
      FUN_14534e3d0(param_1,lVar5,param_3,0,in_stack_fffffffffffffd58);
    }
    FUN_144bef8b0(param_2,&local_290);
    uVar8 = 0;
    uVar10 = uVar8;
    if (0 < (int)(local_288 - local_290 >> 3)) {
      do {
        uVar1 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
        local_res20 = *(ulonglong *)(uVar8 + local_290);
        iVar9 = FUN_144bf0700(&local_res20);
        in_stack_fffffffffffffd58 = CONCAT44(uVar1,iVar9 + param_5);
        FUN_14534e3d0(param_1,*(undefined8 *)(local_res20 + 8),param_3,0,in_stack_fffffffffffffd58);
        uVar8 = uVar8 + 8;
        uVar6 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)(local_288 - local_290 >> 3));
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_144f69980();
    puVar3 = (undefined4 *)FUN_144bef800(puVar2,&local_res20);
    puVar7 = (undefined8 *)0x0;
    puVar11 = puVar7;
    if (((byte)*puVar3 & 0x1f) == 7) {
      puVar11 = puVar2;
    }
    local_268 = puVar11;
    FUN_144f6faa0(local_260);
    FUN_144f6ff20(local_260,puVar11,0xffffffff);
    uVar4 = FUN_144bef510(puVar11);
    FUN_144f6fee0(local_260,uVar4);
    if (puVar11 == (undefined8 *)*param_1) {
      local_200 = local_200 | 0x80000;
      local_160 = &DAT_14c7fd990;
      local_278 = 0x20;
      puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_278,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar2,"TypeInfo");
      }
      param_3 = puVar7;
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x80000000;
        param_3 = puVar2;
      }
      FUN_144f704e0(local_260,FUN_14534f5f0,param_3);
    }
    else {
      FUN_144f704d0(local_260,0);
    }
    FUN_14534f510(param_1,local_260,puVar11,param_4);
    lVar5 = FUN_144beff80(puVar11);
    if (lVar5 != 0) {
      in_stack_fffffffffffffd58 =
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffd58 >> 0x20),param_5);
      local_208 = FUN_14534e3d0(param_1,lVar5,param_3,param_4,in_stack_fffffffffffffd58);
    }
    local_200 = local_200 | 0x800000;
    local_140 = 0;
    FUN_144bef8b0(puVar11,&local_290);
    puVar2 = puVar7;
    if (0 < (int)(local_288 - local_290 >> 3)) {
      do {
        uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
        local_298 = *(longlong *)((longlong)puVar2 + local_290);
        local_270 = FUN_144bf0530(&local_298);
        uVar1 = FUN_144bf0700(&local_298);
        local_res20 = CONCAT44(local_res20._4_4_,uVar1);
        FUN_144bf04d0(&local_298,local_280);
        in_stack_fffffffffffffd58 =
             FUN_14534e3d0(param_1,*(undefined8 *)(local_298 + 8),param_3,param_4,
                           CONCAT44(uVar12,(int)local_res20 + param_5));
        if (in_stack_fffffffffffffd58 == 0) {
          *(uint *)(param_1 + 2) =
               *(int *)(param_1 + 2) + (uint)(*(int *)((longlong)param_1 + 0xc) == 0);
          in_stack_fffffffffffffd58 = FUN_14534f3b0(param_1,&DAT_14c6ddac0,param_3,param_4);
        }
        FUN_144f703c0(local_260,local_270,local_res20 & 0xffffffff,local_280[0],
                      in_stack_fffffffffffffd58);
        uVar6 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar6;
        puVar2 = puVar2 + 1;
        puVar11 = local_268;
      } while ((int)uVar6 < (int)(local_288 - local_290 >> 3));
    }
    local_200 = local_200 | 0x4004;
    local_1e8 = &DAT_14c7fd998;
    local_188 = 0;
    uVar4 = FUN_144f706a0(local_260,param_4);
    if (puVar11 == (undefined8 *)*param_1) {
      if ((*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < 2) {
        FUN_144ca7300(param_3,&PTR_vftable_14c6e47a0,2);
      }
      if ((*(int *)(param_3 + 1) < 2) || (2 < *(int *)(param_3 + 1))) {
        *(undefined4 *)(param_3 + 1) = 2;
      }
      puVar3 = (undefined4 *)*param_3;
      uVar1 = FUN_144f70820(local_260);
      *puVar3 = uVar1;
    }
    else {
      iVar9 = *(int *)(param_3 + 3) + 1;
      if ((int)(*(uint *)((longlong)param_3 + 0x1c) & 0x7fffffff) < iVar9) {
        FUN_144bf0cc0(param_3 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      puVar11 = (undefined8 *)(param_3[2] + (longlong)*(int *)(param_3 + 3) * 8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = uVar4;
      }
      *(int *)(param_3 + 3) = iVar9;
    }
    param_2 = FUN_14534e4f0(param_1,uVar4,param_2,param_3,param_4);
    FUN_144f6fbe0(local_260);
  }
  return param_2;
}



// FUNCTION 14534f170 FUN_14534f170 body=566 status=ok
// SIG undefined FUN_14534f170(void)

undefined8 FUN_14534f170(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 local_278;
  longlong local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250 [96];
  ulonglong local_1f0;
  undefined *local_1d8;
  
  puVar4 = (undefined8 *)0x0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0xc) == 0);
  if (param_4 == 0) {
    return param_2;
  }
  uVar1 = FUN_144f69980(param_2);
  FUN_144f6faa0(local_250);
  FUN_144f6ff20(local_250,uVar1,0xffffffff);
  uVar2 = FUN_144bef510(uVar1);
  FUN_144f6fee0(local_250,uVar2);
  local_1f0 = local_1f0 | 4;
  local_1d8 = &DAT_14c7fd9b8;
  local_res8 = 8;
  puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar3,"ToString");
  }
  puVar7 = puVar4;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = FUN_14534e370;
    puVar7 = puVar3;
  }
  local_268 = (undefined8 *)0x0;
  puVar3 = &local_260;
  if (puVar7 == (undefined8 *)0x0) {
    local_260 = 0;
    uStack_258 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_144beec10(puVar3,puVar7,&DAT_14c745420);
  }
  local_278 = *puVar3;
  local_270 = puVar3[1];
  if (local_270 != 0) {
    puVar4 = (undefined8 *)FUN_144befdb0();
  }
  if (((ulonglong)puVar4 & 1) != 0) {
    FUN_144be6b20((ulonglong)puVar4 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_268 & 1) != 0) {
    uVar5 = (ulonglong)local_268 & 0xfffffffffffffffe;
    local_268 = puVar4;
    FUN_144be6b30(uVar5);
    puVar4 = local_268;
  }
  local_268 = puVar4;
  FUN_144f6ffc0(local_250,&local_278);
  if (((ulonglong)local_268 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_268 & 0xfffffffffffffffe);
  }
  FUN_14534f510(param_1,local_250,uVar1,param_4);
  FUN_144f704d0(local_250,0);
  uVar1 = FUN_144f706a0(local_250,param_4);
  iVar6 = *(int *)(param_3 + 0x18) + 1;
  if ((int)(*(uint *)(param_3 + 0x1c) & 0x7fffffff) < iVar6) {
    FUN_144bf0cc0(param_3 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = uVar1;
  }
  *(int *)(param_3 + 0x18) = iVar6;
  uVar1 = FUN_14534e4f0(param_1,uVar1,param_2,param_3,param_4);
  FUN_144f6fbe0(local_250);
  return uVar1;
}



// FUNCTION 14534f3b0 FUN_14534f3b0 body=346 status=ok
// SIG undefined FUN_14534f3b0(void)

undefined8 FUN_14534f3b0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_238 [96];
  ulonglong local_1d8;
  undefined *local_138;
  
  if (param_4 != 0) {
    uVar2 = FUN_144f69980(param_2);
    FUN_144f6faa0(local_238);
    FUN_144f6ff20(local_238,uVar2,0xffffffff);
    uVar3 = FUN_144bef510(uVar2);
    FUN_144f6fee0(local_238,uVar3);
    FUN_14534f510(param_1,local_238,uVar2,param_4);
    local_1d8 = local_1d8 | 0x80000;
    local_138 = &DAT_14c784760;
    FUN_144f70490(local_238);
    FUN_144f704d0(local_238,0);
    uVar2 = FUN_144f706a0(local_238,param_4);
    iVar4 = *(int *)(param_3 + 0x18) + 1;
    if ((int)(*(uint *)(param_3 + 0x1c) & 0x7fffffff) < iVar4) {
      FUN_144bf0cc0(param_3 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (longlong)*(int *)(param_3 + 0x18) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = uVar2;
    }
    *(int *)(param_3 + 0x18) = iVar4;
    param_2 = FUN_14534e4f0(param_1,uVar2,param_2,param_3,param_4);
    FUN_144f6fbe0(local_238);
  }
  return param_2;
}



// FUNCTION 14534f510 FUN_14534f510 body=224 status=ok
// SIG undefined FUN_14534f510(void)

void FUN_14534f510(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [144];
  
  if (((*param_3 >> 0x19 & 1) != 0) &&
     (puVar2 = (undefined8 *)FUN_144befea0(param_3,0x2000000), puVar2 != (undefined8 *)0x0)) {
    FUN_144f5a1e0(&local_a8,*puVar2);
    local_c8 = local_a8;
    uStack_c4 = uStack_a4;
    uStack_c0 = uStack_a0;
    uStack_bc = uStack_9c;
    FUN_145535e70(local_98,&local_c8,param_3,0,&PTR_vftable_14c6e47a0);
    cVar1 = FUN_145535f70(local_98);
    while (cVar1 != '\0') {
      FUN_145537930(local_98,&local_c8);
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FUN_144f6ffc0(param_2,&local_c8);
      }
      if ((local_b8 & 1) != 0) {
        FUN_144be6b30(local_b8 & 0xfffffffffffffffe);
      }
      cVar1 = FUN_145535f70(local_98);
    }
    FUN_145535ef0(local_98);
  }
  return;
}



// FUNCTION 14534f5f0 FUN_14534f5f0 body=269 status=ok
// SIG undefined FUN_14534f5f0(void)

void FUN_14534f5f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < (int)param_3[3]) {
    do {
      FUN_144f67e50(*(undefined8 *)(uVar3 + param_3[2]));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < (int)param_3[3]);
  }
  FUN_144f71100(param_1,param_2,(longlong)*(int *)*param_3);
  *(undefined4 *)(param_3 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_3 + 0x1c)) && (param_3[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_3[2],
               (ulonglong)(*(uint *)((longlong)param_3 + 0x1c) & 0x7fffffff) << 3);
  }
  param_3[2] = 0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_3 + 1) = 0;
  if ((-1 < *(int *)((longlong)param_3 + 0xc)) && (*param_3 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_3,*(int *)((longlong)param_3 + 0xc) * 2);
  }
  *param_3 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0x80000000;
                    /* WARNING: Could not recover jumptable at 0x00014534f6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(0,param_3,0);
  return;
}



// FUNCTION 14534f700 FUN_14534f700 body=41 status=ok
// SIG undefined FUN_14534f700(void)

undefined2 * FUN_14534f700(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0xffffff00;
  *(undefined4 *)(param_1 + 4) = 0xffffa500;
  *(undefined4 *)(param_1 + 6) = 0x3ca3d70a;
  return param_1;
}



// FUNCTION 14534f730 FUN_14534f730 body=16 status=ok
// SIG undefined FUN_14534f730(void)

undefined2 * FUN_14534f730(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  return param_1;
}



// FUNCTION 14534f740 FUN_14534f740 body=28 status=ok
// SIG undefined FUN_14534f740(void)

undefined2 * FUN_14534f740(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 2) = 0x42c80000;
  return param_1;
}



// FUNCTION 14534f760 FUN_14534f760 body=691 status=ok
// SIG undefined FUN_14534f760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14534f760(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar3 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  
  *(undefined4 *)(param_1 + 4) = 0x10101;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffff00;
  *(undefined4 *)(param_1 + 0x21) = 0xffffa500;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ca3d70a;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffa500;
  *(undefined4 *)(param_1 + 0xb) = 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xff0000ff;
  *(undefined4 *)(param_1 + 0xc) = 0xff00ffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xff00ffff;
  *(undefined4 *)(param_1 + 0xd) = 0xffadd8e6;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xff000000;
  *(undefined4 *)(param_1 + 0xe) = 0xff000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xff800080;
  *(undefined4 *)(param_1 + 0xf) = 0xff0000ff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xff800080;
  *(undefined4 *)(param_1 + 0x10) = 0xff0000ff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3d4ccccd;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x42c80000;
  uVar2 = uRam000000014c6dae48;
  param_1[0x2a] = _DAT_14c6dae40;
  param_1[0x2b] = uVar2;
  uVar2 = uRam000000014c6dae58;
  param_1[0x2c] = _DAT_14c6dae50;
  param_1[0x2d] = uVar2;
  uVar2 = uRam000000014c6dae68;
  param_1[0x2e] = _DAT_14c6dae60;
  param_1[0x2f] = uVar2;
  uVar2 = _DAT_14c6dae78;
  param_1[0x30] = _DAT_14c6dae70;
  param_1[0x31] = uVar2;
  *(undefined4 *)(param_1 + 0x32) = 0x101;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x80000000;
  *(undefined2 *)((longlong)param_1 + 0x1a9) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xff8a2be2;
  *(undefined4 *)(param_1 + 0x37) = 0xff0000ff;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0xffff00ff;
  *(undefined4 *)(param_1 + 0x38) = 0xff000000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0xff800080;
  uVar2 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0x3a] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0x3b] = uVar2;
  uVar4 = uRam000000014c6dae84 ^ 0x80000000;
  uVar5 = uRam000000014c6dae88 ^ 0x80000000;
  uVar6 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x3c) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x1e4) = uVar4;
  *(uint *)(param_1 + 0x3d) = uVar5;
  *(uint *)((longlong)param_1 + 0x1ec) = uVar6;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *param_1 = 0;
  param_1[1] = 0x3c23d70a;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar2 = uRam000000014c6dac88;
  param_1[0x18] = _DAT_14c6dac80;
  param_1[0x19] = uVar2;
  auVar10._8_8_ = uRam000000014c6dac88;
  auVar10._0_8_ = _DAT_14c6dac80;
  fVar8 = (float)((ulonglong)_DAT_14c6dac80 >> 0x20);
  fVar7 = (float)_DAT_14c6dac80 * (float)_DAT_14c6dac80;
  fVar8 = fVar8 * fVar8;
  fVar9 = (float)uRam000000014c6dac88 * (float)uRam000000014c6dac88;
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar7;
  fVar11 = fVar8 + fVar7 + fVar9;
  if (fVar11 == 0.0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    auVar1._4_4_ = fVar8 + fVar7 + fVar9;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = fVar8 + fVar7 + fVar9;
    auVar1._12_4_ = fVar8 + fVar7 + fVar9;
    auVar3 = sqrtps(auVar3,auVar1);
    auVar10 = divps(auVar10,auVar3);
    *(undefined1 (*) [16])(param_1 + 0x18) = auVar10;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar2 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0x1c] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0x1d] = uVar2;
  uVar4 = uRam000000014c6dae84 ^ 0x80000000;
  uVar5 = uRam000000014c6dae88 ^ 0x80000000;
  uVar6 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x1e) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xf4) = uVar4;
  *(uint *)(param_1 + 0x1f) = uVar5;
  *(uint *)((longlong)param_1 + 0xfc) = uVar6;
  return param_1;
}



// FUNCTION 14534fa20 FUN_14534fa20 body=15 status=ok
// SIG undefined FUN_14534fa20(void)

undefined1 * FUN_14534fa20(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14534fa30 FUN_14534fa30 body=50 status=ok
// SIG undefined FUN_14534fa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14534fa30(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x7f4169e1;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = uRam000000014c6dae68;
  *(undefined8 *)(param_1 + 8) = _DAT_14c6dae60;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 14534fa70 FUN_14534fa70 body=31 status=ok
// SIG undefined FUN_14534fa70(void)

undefined8 * FUN_14534fa70(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkDebugDisplayHandler::vftable;
  return param_1;
}



// FUNCTION 14534fa90 FUN_14534fa90 body=11 status=ok
// SIG undefined FUN_14534fa90(void)

void FUN_14534fa90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14534faa0 FUN_14534faa0 body=10 status=ok
// SIG undefined FUN_14534faa0(void)

undefined4 * FUN_14534faa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fab0 FUN_14534fab0 body=76 status=ok
// SIG undefined FUN_14534fab0(void)

undefined8 FUN_14534fab0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x28))();
  return param_2;
}



// FUNCTION 14534fb00 FUN_14534fb00 body=10 status=ok
// SIG undefined FUN_14534fb00(void)

undefined4 * FUN_14534fb00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fb10 FUN_14534fb10 body=60 status=ok
// SIG undefined FUN_14534fb10(void)

undefined8 FUN_14534fb10(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x38))();
  return param_2;
}



// FUNCTION 14534fb50 FUN_14534fb50 body=10 status=ok
// SIG undefined FUN_14534fb50(void)

undefined4 * FUN_14534fb50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fb60 FUN_14534fb60 body=10 status=ok
// SIG undefined FUN_14534fb60(void)

undefined4 * FUN_14534fb60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fb70 FUN_14534fb70 body=10 status=ok
// SIG undefined FUN_14534fb70(void)

undefined4 * FUN_14534fb70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fb80 FUN_14534fb80 body=10 status=ok
// SIG undefined FUN_14534fb80(void)

undefined4 * FUN_14534fb80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fb90 FUN_14534fb90 body=10 status=ok
// SIG undefined FUN_14534fb90(void)

undefined4 * FUN_14534fb90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fba0 FUN_14534fba0 body=118 status=ok
// SIG undefined FUN_14534fba0(void)

/* WARNING: Removing unreachable block (ram,0x00014534fbd2) */
/* WARNING: Removing unreachable block (ram,0x00014534fbcd) */
/* WARNING: Removing unreachable block (ram,0x00014534fbb7) */

undefined8 FUN_14534fba0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48._0_8_ = *param_4 << 0x20;
  local_48._8_8_ = param_4[1] << 0x20 | *param_4 >> 0x20;
  local_48 = local_48 >> 0x20;
  local_38._0_8_ = param_4[2] << 0x20;
  local_38._8_8_ = param_4[3] << 0x20 | param_4[2] >> 0x20;
  local_28._0_8_ = param_4[4] << 0x20;
  local_28._8_8_ = param_4[5] << 0x20 | param_4[4] >> 0x20;
  local_38 = local_38 >> 0x20;
  local_28 = local_28 >> 0x20;
  local_18 = (undefined4)param_4[6];
  uStack_14 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_10 = (undefined4)param_4[7];
  uStack_c = uRam000000014c6dacac;
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3,local_48);
  return param_2;
}



// FUNCTION 14534fc20 FUN_14534fc20 body=10 status=ok
// SIG undefined FUN_14534fc20(void)

undefined4 * FUN_14534fc20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc30 FUN_14534fc30 body=10 status=ok
// SIG undefined FUN_14534fc30(void)

undefined4 * FUN_14534fc30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc40 FUN_14534fc40 body=10 status=ok
// SIG undefined FUN_14534fc40(void)

undefined4 * FUN_14534fc40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc50 FUN_14534fc50 body=10 status=ok
// SIG undefined FUN_14534fc50(void)

undefined4 * FUN_14534fc50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc60 FUN_14534fc60 body=10 status=ok
// SIG undefined FUN_14534fc60(void)

undefined4 * FUN_14534fc60(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc70 FUN_14534fc70 body=10 status=ok
// SIG undefined FUN_14534fc70(void)

undefined4 * FUN_14534fc70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc80 FUN_14534fc80 body=10 status=ok
// SIG undefined FUN_14534fc80(void)

undefined4 * FUN_14534fc80(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fc90 FUN_14534fc90 body=61 status=ok
// SIG undefined FUN_14534fc90(void)

undefined8 FUN_14534fc90(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xa8))();
  return param_2;
}



// FUNCTION 14534fcd0 FUN_14534fcd0 body=10 status=ok
// SIG undefined FUN_14534fcd0(void)

undefined4 * FUN_14534fcd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fce0 FUN_14534fce0 body=86 status=ok
// SIG undefined FUN_14534fce0(void)

undefined8 FUN_14534fce0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xb8))();
  return param_2;
}



// FUNCTION 14534fd40 FUN_14534fd40 body=10 status=ok
// SIG undefined FUN_14534fd40(void)

undefined4 * FUN_14534fd40(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fd50 FUN_14534fd50 body=84 status=ok
// SIG undefined FUN_14534fd50(void)

undefined8 FUN_14534fd50(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 200))();
  return param_2;
}



// FUNCTION 14534fdb0 FUN_14534fdb0 body=10 status=ok
// SIG undefined FUN_14534fdb0(void)

undefined4 * FUN_14534fdb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fdc0 FUN_14534fdc0 body=10 status=ok
// SIG undefined FUN_14534fdc0(void)

undefined4 * FUN_14534fdc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fdd0 FUN_14534fdd0 body=10 status=ok
// SIG undefined FUN_14534fdd0(void)

undefined4 * FUN_14534fdd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fde0 FUN_14534fde0 body=10 status=ok
// SIG undefined FUN_14534fde0(void)

undefined4 * FUN_14534fde0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fdf0 FUN_14534fdf0 body=10 status=ok
// SIG undefined FUN_14534fdf0(void)

undefined4 * FUN_14534fdf0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fe00 FUN_14534fe00 body=10 status=ok
// SIG undefined FUN_14534fe00(void)

undefined4 * FUN_14534fe00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fe10 FUN_14534fe10 body=10 status=ok
// SIG undefined FUN_14534fe10(void)

undefined4 * FUN_14534fe10(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fe20 FUN_14534fe20 body=10 status=ok
// SIG undefined FUN_14534fe20(void)

undefined4 * FUN_14534fe20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fe30 FUN_14534fe30 body=10 status=ok
// SIG undefined FUN_14534fe30(void)

undefined4 * FUN_14534fe30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14534fe40 FUN_14534fe40 body=796 status=ok
// SIG undefined FUN_14534fe40(void)

/* WARNING: Removing unreachable block (ram,0x00014534ff7a) */
/* WARNING: Removing unreachable block (ram,0x00014534ffc1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14534fe40(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,float *param_6,uint param_7,undefined4 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar17 = (param_6[1] - param_4[1]) * (*param_5 - *param_4) -
           (param_5[1] - param_4[1]) * (*param_6 - *param_4);
  fVar19 = (param_6[2] - param_4[2]) * (param_5[1] - param_4[1]) -
           (param_5[2] - param_4[2]) * (param_6[1] - param_4[1]);
  fVar20 = (*param_6 - *param_4) * (param_5[2] - param_4[2]) -
           (*param_5 - *param_4) * (param_6[2] - param_4[2]);
  fVar11 = fVar19 * fVar19;
  fVar12 = fVar20 * fVar20;
  fVar13 = fVar17 * fVar17;
  auVar23._4_4_ = fVar11;
  auVar23._0_4_ = fVar11;
  auVar23._8_4_ = fVar11;
  auVar23._12_4_ = fVar11;
  fVar14 = fVar12 + fVar11 + fVar13;
  fVar15 = fVar12 + fVar11 + fVar13;
  fVar16 = fVar12 + fVar11 + fVar13;
  fVar13 = fVar12 + fVar11 + fVar13;
  uVar6 = -(uint)(0.0 - fVar14 < 0.0);
  uVar7 = -(uint)(0.0 - fVar15 < 0.0);
  uVar8 = -(uint)(0.0 - fVar16 < 0.0);
  if (!NAN(fVar14) && fVar14 == 0.0) {
    auVar21 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar18._4_4_ = fVar15;
    auVar18._0_4_ = fVar14;
    auVar18._8_4_ = fVar16;
    auVar18._12_4_ = fVar13;
    auVar23 = sqrtps(auVar23,auVar18);
    auVar23 = divps(_DAT_14c6daca0,auVar23);
    auVar21 = auVar23._0_12_;
  }
  auVar1._4_4_ = uVar7;
  auVar1._0_4_ = uVar6;
  auVar1._8_4_ = uVar8;
  auVar1._12_4_ = -(uint)(0.0 - fVar13 < 0.0);
  iVar4 = movmskps((int)CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),!NAN(fVar14)),auVar1);
  fVar11 = (float)((uint)(fVar19 * auVar21._0_4_) & uVar6 | ~uVar6 & (uint)fVar19);
  fVar12 = (float)((uint)(fVar20 * auVar21._4_4_) & uVar7 | ~uVar7 & (uint)fVar20);
  fVar13 = (float)((uint)(fVar17 * auVar21._8_4_) & uVar8 | ~uVar8 & (uint)fVar17);
  if (iVar4 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    auVar9._8_4_ = 0x3e800000;
    auVar9._0_8_ = 0x3e8000003e800000;
    auVar9._12_4_ = 0x3e800000;
    auVar3._8_4_ = 0x40a80000;
    auVar3._0_8_ = 0x40a8000040a80000;
    auVar3._12_4_ = 0x40a80000;
    auVar23 = sqrtps(auVar9,auVar3);
    auVar18 = divps(_DAT_149d42140,auVar23);
    auVar10._8_4_ = 0x41100000;
    auVar10._0_8_ = 0x4110000041100000;
    auVar10._12_4_ = 0x41100000;
    auVar2._8_4_ = 0x41600000;
    auVar2._0_8_ = 0x4160000041600000;
    auVar2._12_4_ = 0x41600000;
    auVar23 = sqrtps(auVar10,auVar2);
    auVar23 = divps(_DAT_149d42170,auVar23);
    fVar17 = auVar18._0_4_ * 0.9 * fVar11;
    fVar19 = auVar18._4_4_ * 0.9 * fVar12;
    fVar20 = auVar18._8_4_ * 0.9 * fVar13;
    fVar11 = auVar23._0_4_ * 0.9 * fVar11;
    fVar12 = auVar23._4_4_ * 0.9 * fVar12;
    fVar13 = auVar23._8_4_ * 0.9 * fVar13;
    fVar14 = (float)(param_7 >> 8 & 0xff) / 255.0;
    fVar15 = (float)(param_7 & 0xff) / 255.0;
    fVar16 = (float)(param_7 >> 0x10 & 0xff) / 255.0;
    auVar22._0_4_ =
         ((fVar19 + fVar17 + fVar20) * _DAT_14c6dad90 + _DAT_14c6dad90) * fVar16 * 0.75 +
         ((fVar12 + fVar11 + fVar13) * _DAT_14c6dad90 + _DAT_14c6dad90) * fVar16 * 0.0 +
         fVar16 * 0.05;
    auVar22._4_4_ =
         ((fVar19 + fVar17 + fVar20) * fRam000000014c6dad94 + fRam000000014c6dad94) * fVar14 * 0.75
         + ((fVar12 + fVar11 + fVar13) * fRam000000014c6dad94 + fRam000000014c6dad94) *
           fVar14 * 0.05 + fVar14 * 0.05;
    auVar22._8_4_ =
         ((fVar19 + fVar17 + fVar20) * fRam000000014c6dad98 + fRam000000014c6dad98) * fVar15 * 0.75
         + ((fVar12 + fVar11 + fVar13) * fRam000000014c6dad98 + fRam000000014c6dad98) *
           fVar15 * 0.08 + fVar15 * 0.05;
    auVar22._12_4_ =
         ((fVar19 + fVar17 + fVar20) * fRam000000014c6dad9c + fRam000000014c6dad9c) * 0.0 +
         ((fVar12 + fVar11 + fVar13) * fRam000000014c6dad9c + fRam000000014c6dad9c) * 0.0 + 0.0;
    auVar23 = maxps(auVar22,ZEXT816(0));
    auVar23 = minps(auVar23,_DAT_14c6daca0);
    uVar5 = FUN_144f633e0(param_7 >> 0x18,auVar23._4_4_,auVar23._8_4_,
                          (float)(param_7 >> 0x18) / 255.0);
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3,param_4,param_5,param_6,uVar5,param_8);
  }
  return param_2;
}



// FUNCTION 145350160 FUN_145350160 body=524 status=ok
// SIG undefined FUN_145350160(void)

undefined4 *
FUN_145350160(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_b8 = ZEXT816(0);
  FUN_144bfa650(&local_a8,param_4,local_b8);
  local_b8 = ZEXT416(param_5);
  FUN_144bfa650(&local_98,param_4,local_b8);
  local_b8 = ZEXT416(param_5) << 0x20;
  FUN_144bfa650(&local_88,param_4,local_b8);
  local_b8 = ZEXT416(param_5) << 0x40;
  FUN_144bfa650(&local_78,param_4,local_b8);
  uVar1 = param_7;
  local_68 = local_98 - local_a8;
  fStack_64 = fStack_94 - fStack_a4;
  fStack_60 = fStack_90 - fStack_a0;
  fStack_5c = fStack_8c - fStack_9c;
  puVar2 = (undefined4 *)CONCAT44(param_6._4_4_,(int)param_6);
  local_48 = local_78 - local_a8;
  fStack_44 = fStack_74 - fStack_a4;
  fStack_40 = fStack_70 - fStack_a0;
  fStack_3c = fStack_6c - fStack_9c;
  local_58 = local_88 - local_a8;
  fStack_54 = fStack_84 - fStack_a4;
  fStack_50 = fStack_80 - fStack_a0;
  fStack_4c = fStack_7c - fStack_9c;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xffff0000;
  }
  else {
    uVar3 = *puVar2;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,&param_6,param_3,&local_a8,&local_68,uVar3,1,0,0,param_7);
  bVar4 = (int)param_6 < 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xff008000;
  }
  else {
    uVar3 = *puVar2;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,&param_6,param_3,&local_a8,&local_58,uVar3,1,0,0,uVar1);
  bVar5 = (int)param_6 < 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xff0000ff;
  }
  else {
    uVar3 = *puVar2;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,&param_6,param_3,&local_a8,&local_48,uVar3,1,0,0,uVar1);
  uVar1 = 0;
  if ((int)param_6 < 0 || (bVar5 || bVar4)) {
    uVar1 = 0x80040200;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 145350370 FUN_145350370 body=101 status=ok
// SIG undefined FUN_145350370(void)

undefined8 FUN_145350370(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x128))();
  return param_2;
}



// FUNCTION 1453503e0 FUN_1453503e0 body=997 status=ok
// SIG undefined FUN_1453503e0(void)

void FUN_1453503e0(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,
                  float *param_5,float param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte bVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  longlong *local_res8;
  undefined4 *local_res10;
  undefined8 local_res18;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
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
  
  uVar10 = param_11;
  uVar9 = param_10;
  uVar8 = param_9;
  uVar4 = param_8;
  uVar5 = param_7;
  fVar7 = param_6;
  fVar24 = *param_4;
  fVar23 = param_4[1];
  fVar19 = param_4[2];
  fVar38 = param_4[3];
  fVar25 = ABS(fVar24);
  fVar27 = ABS(fVar23);
  fVar28 = ABS(fVar19);
  auVar37 = ZEXT816(0);
  auVar17._0_8_ = CONCAT44(fVar19,fVar19) & 0x7fffffff7fffffff;
  auVar17._8_4_ = fVar28;
  auVar17._12_4_ = fVar28;
  auVar20._0_8_ = CONCAT44(fVar23,fVar23) & 0x7fffffff7fffffff;
  auVar20._8_4_ = fVar27;
  auVar20._12_4_ = fVar27;
  auVar21._0_8_ = CONCAT44(fVar24,fVar24) & 0x7fffffff7fffffff;
  auVar21._8_4_ = fVar25;
  auVar21._12_4_ = fVar25;
  auVar21 = maxps(auVar20,auVar21);
  auVar21 = maxps(auVar17,auVar21);
  fVar29 = (0.0 - fVar38) * fVar24 + *param_5;
  fVar30 = (0.0 - fVar38) * fVar23 + param_5[1];
  fVar31 = (0.0 - fVar38) * fVar19 + param_5[2];
  fVar32 = (0.0 - fVar38) * fVar38 + param_5[3];
  auVar18._4_4_ = -(uint)(auVar21._4_4_ <= fVar27);
  auVar18._0_4_ = -(uint)(auVar21._0_4_ <= fVar25);
  auVar18._8_4_ = -(uint)(auVar21._8_4_ <= fVar28);
  auVar18._12_4_ = -(uint)(auVar21._12_4_ <= ABS(fVar38));
  uVar11 = movmskps((int)param_5,auVar18);
  iVar14 = (char)(&DAT_14998f5c0)[uVar11 & 7] + 1;
  _local_b8 = auVar37;
  local_a8 = fVar29;
  fStack_a4 = fVar30;
  fStack_a0 = fVar31;
  fStack_9c = fVar32;
  *(undefined4 *)
   (local_b8 +
   (longlong)
   (iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
             (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3)
   * 4) = 0x3f800000;
  fVar28 = (float)local_b8._4_4_ * fVar24 - fVar23 * (float)local_b8._0_4_;
  fVar25 = fStack_b0 * fVar23 - fVar19 * (float)local_b8._4_4_;
  fVar27 = (float)local_b8._0_4_ * fVar19 - fVar24 * fStack_b0;
  auVar33._12_4_ = fStack_ac * fVar38 - fVar38 * fStack_ac;
  auVar33._4_4_ = fVar27;
  auVar33._0_4_ = fVar25;
  auVar33._8_4_ = fVar28;
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  fVar28 = fVar28 * fVar28;
  auVar15._4_4_ = fVar25;
  auVar15._0_4_ = fVar25;
  auVar15._8_4_ = fVar25;
  auVar15._12_4_ = fVar25;
  auVar22._0_4_ = fVar27 + fVar25 + fVar28;
  auVar22._4_4_ = fVar27 + fVar25 + fVar28;
  auVar22._8_4_ = fVar27 + fVar25 + fVar28;
  auVar22._12_4_ = fVar27 + fVar25 + fVar28;
  if (auVar22._0_4_ == 0.0) {
    auVar21 = ZEXT816(0);
  }
  else {
    auVar21 = sqrtps(auVar15,auVar22);
    auVar21 = divps(auVar33,auVar21);
  }
  fVar27 = auVar21._0_4_ * param_6;
  fVar28 = auVar21._4_4_ * param_6;
  fVar34 = auVar21._8_4_ * param_6;
  fVar35 = auVar21._12_4_ * param_6;
  fVar25 = fVar27 * fVar23 - fVar28 * fVar24;
  fVar23 = fVar28 * fVar19 - fVar34 * fVar23;
  fVar24 = fVar34 * fVar24 - fVar27 * fVar19;
  auVar36._4_4_ = fVar24;
  auVar36._0_4_ = fVar23;
  fVar23 = fVar23 * fVar23;
  fVar24 = fVar24 * fVar24;
  fVar19 = fVar25 * fVar25;
  auVar16._4_4_ = fVar23;
  auVar16._0_4_ = fVar23;
  auVar16._8_4_ = fVar23;
  auVar16._12_4_ = fVar23;
  auVar26._0_4_ = fVar24 + fVar23 + fVar19;
  auVar26._4_4_ = fVar24 + fVar23 + fVar19;
  auVar26._8_4_ = fVar24 + fVar23 + fVar19;
  auVar26._12_4_ = fVar24 + fVar23 + fVar19;
  if (auVar26._0_4_ != 0.0) {
    auVar21 = sqrtps(auVar16,auVar26);
    auVar36._8_4_ = fVar25;
    auVar36._12_4_ = fVar35 * fVar38 - fVar35 * fVar38;
    auVar37 = divps(auVar36,auVar21);
  }
  fVar24 = auVar37._0_4_ * param_6;
  fVar23 = auVar37._4_4_ * param_6;
  fVar19 = auVar37._8_4_ * param_6;
  fVar38 = auVar37._12_4_ * param_6;
  local_c8 = (fVar24 + fVar29) - fVar27;
  fStack_c4 = (fVar23 + fVar30) - fVar28;
  fStack_c0 = (fVar19 + fVar31) - fVar34;
  fStack_bc = (fVar38 + fVar32) - fVar35;
  local_b8._4_4_ = fVar23 + fVar30 + fVar28;
  local_b8._0_4_ = fVar24 + fVar29 + fVar27;
  fStack_b0 = fVar19 + fVar31 + fVar34;
  fStack_ac = fVar38 + fVar32 + fVar35;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  puVar12 = (undefined4 *)
            (**(code **)(*param_1 + 0xb8))
                      (param_1,&param_5,param_3,local_b8,&local_c8,param_7,param_8,param_9,param_10,
                       param_11);
  uVar1 = *puVar12;
  local_c8 = (local_a8 - fVar24) - fVar27;
  fStack_c4 = (fStack_a4 - fVar23) - fVar28;
  fStack_c0 = (fStack_a0 - fVar19) - fVar34;
  fStack_bc = (fStack_9c - fVar38) - fVar35;
  local_b8._4_4_ = (fVar23 + fStack_a4) - fVar28;
  local_b8._0_4_ = (fVar24 + local_a8) - fVar27;
  fStack_b0 = (fVar19 + fStack_a0) - fVar34;
  fStack_ac = (fVar38 + fStack_9c) - fVar35;
  puVar12 = (undefined4 *)
            (**(code **)(*param_1 + 0xb8))
                      (param_1,&param_5,param_3,local_b8,&local_c8,uVar5,uVar4,uVar8,uVar9,uVar10);
  uVar2 = *puVar12;
  local_c8 = (local_a8 - fVar24) + fVar27;
  fStack_c4 = (fStack_a4 - fVar23) + fVar28;
  fStack_c0 = (fStack_a0 - fVar19) + fVar34;
  fStack_bc = (fStack_9c - fVar38) + fVar35;
  local_b8._4_4_ = (fStack_a4 - fVar23) - fVar28;
  local_b8._0_4_ = (local_a8 - fVar24) - fVar27;
  fStack_b0 = (fStack_a0 - fVar19) - fVar34;
  fStack_ac = (fStack_9c - fVar38) - fVar35;
  puVar12 = (undefined4 *)
            (**(code **)(*param_1 + 0xb8))
                      (param_1,&param_5,local_res18,local_b8,&local_c8,uVar5,uVar4,uVar8,uVar9,
                       uVar10);
  plVar6 = local_res8;
  uVar3 = *puVar12;
  local_c8 = fVar24 + local_a8 + fVar27;
  fStack_c4 = fVar23 + fStack_a4 + fVar28;
  fStack_c0 = fVar19 + fStack_a0 + fVar34;
  fStack_bc = fVar38 + fStack_9c + fVar35;
  local_b8._4_4_ = (fStack_a4 - fVar23) + fVar28;
  local_b8._0_4_ = (local_a8 - fVar24) + fVar27;
  fStack_b0 = (fStack_a0 - fVar19) + fVar34;
  fStack_ac = (fStack_9c - fVar38) + fVar35;
  puVar12 = (undefined4 *)
            (**(code **)(*local_res8 + 0xb8))
                      (local_res8,&param_5,local_res18,local_b8,&local_c8,uVar5,uVar4,uVar8,uVar9,
                       uVar10);
  local_98 = fVar7 * *param_4;
  fStack_94 = fVar7 * param_4[1];
  fStack_90 = fVar7 * param_4[2];
  fStack_8c = fVar7 * param_4[3];
  uVar4 = *puVar12;
  (**(code **)(*plVar6 + 0xb8))
            (plVar6,&local_res8,local_res18,&local_a8,&local_98,uVar5,1,0,0,uVar10);
  bVar13 = 0;
  if (-1 < (int)local_res8) {
    bVar13 = (byte)~((byte)((uint)uVar3 >> 0x18) | (byte)((uint)uVar2 >> 0x18)) >> 7 &
             ((byte)((uint)uVar4 >> 0x1f) ^ 1) & ((byte)((uint)uVar1 >> 0x1f) ^ 1);
  }
  uVar5 = 0;
  if (bVar13 == 0) {
    uVar5 = 0x80040200;
  }
  *local_res10 = uVar5;
  return;
}



// FUNCTION 1453507d0 FUN_1453507d0 body=1063 status=ok
// SIG undefined FUN_1453507d0(void)

void FUN_1453507d0(longlong *param_1,undefined4 *param_2,undefined8 param_3,ushort param_4,
                  short *param_5,longlong param_6,longlong param_7,undefined4 param_8,
                  undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res20 [2];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  
  bVar7 = true;
  if (0 < (short)param_4) {
    local_d8 = (ulonglong)param_4;
    lVar13 = param_6;
    do {
      FUN_144bfa650(&local_118,param_7,lVar13);
      if (*param_5 == -1) {
        local_f8 = ZEXT816(0);
        FUN_144bfa650(local_f8,param_7,local_f8);
        (**(code **)(*param_1 + 0xb0))
                  (param_1,local_res20,param_3,&local_118,local_f8,param_8,param_9);
        bVar14 = local_res20[0] < 0;
        fVar18 = 1.0;
      }
      else {
        FUN_144bfa650(&local_b8,param_7,(longlong)*param_5 * 0x30 + param_6);
        (**(code **)(*param_1 + 0xb0))
                  (param_1,&local_e8,param_3,&local_118,&local_b8,param_8,param_9);
        bVar14 = local_e8 < 0;
        fVar17 = (local_118 - local_b8) * (local_118 - local_b8);
        fVar18 = (fStack_114 - fStack_b4) * (fStack_114 - fStack_b4);
        fVar19 = (fStack_110 - fStack_b0) * (fStack_110 - fStack_b0);
        auVar15._4_4_ = fVar17;
        auVar15._0_4_ = fVar17;
        auVar15._8_4_ = fVar17;
        auVar15._12_4_ = fVar17;
        auVar16._4_4_ = fVar18 + fVar17 + fVar19;
        auVar16._0_4_ = fVar18 + fVar17 + fVar19;
        auVar16._8_4_ = fVar18 + fVar17 + fVar19;
        auVar16._12_4_ = fVar18 + fVar17 + fVar19;
        auVar16 = sqrtps(auVar15,auVar16);
        fVar17 = 10.0;
        if (auVar16._0_4_ <= 10.0) {
          fVar17 = auVar16._0_4_;
        }
        fVar18 = 0.1;
        if (0.1 <= fVar17) {
          fVar18 = fVar17;
        }
      }
      fVar12 = fStack_10c;
      fVar11 = fStack_110;
      fVar10 = fStack_114;
      fVar9 = local_118;
      fVar17 = *(float *)(param_7 + 0x10);
      fVar19 = *(float *)(param_7 + 0x14);
      fVar1 = *(float *)(param_7 + 0x18);
      fVar2 = *(float *)(param_7 + 0x1c);
      fVar3 = *(float *)(lVar13 + 0x10);
      fVar4 = *(float *)(lVar13 + 0x14);
      fVar5 = *(float *)(lVar13 + 0x18);
      fVar6 = *(float *)(lVar13 + 0x1c);
      bVar8 = false;
      if (!bVar14) {
        bVar8 = bVar7;
      }
      local_f8 = ZEXT416((uint)(fVar18 * 0.25));
      fStack_bc = (fVar2 * fVar6 - fVar3 * fVar17) - (fVar19 * fVar4 + fVar5 * fVar1);
      fStack_c0 = -((fVar19 * fVar3 - fVar6 * fVar1) - (fVar2 * fVar5 + fVar4 * fVar17));
      local_c8 = -((fVar1 * fVar4 - fVar5 * fVar19) - (fVar17 * fVar6 + fVar3 * fVar2));
      fStack_c4 = -((fVar17 * fVar5 - fVar4 * fVar2) - (fVar1 * fVar3 + fVar6 * fVar19));
      FUN_144bfa5d0(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xb0))
                (param_1,&local_dc,param_3,&local_118,&local_108,0x7fff0000,param_9);
      local_f8 = ZEXT416((uint)(fVar18 * 0.25)) << 0x20;
      local_118 = fVar9;
      fStack_114 = fVar10;
      fStack_110 = fVar11;
      fStack_10c = fVar12;
      FUN_144bfa5d0(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xb0))
                (param_1,&local_e0,param_3,&local_118,&local_108,0x7f00ff00,param_9);
      local_f8 = ZEXT416((uint)(fVar18 * 0.25)) << 0x40;
      local_118 = fVar9;
      fStack_114 = fVar10;
      fStack_110 = fVar11;
      fStack_10c = fVar12;
      FUN_144bfa5d0(&local_108,&local_c8,local_f8);
      local_108 = local_108 + local_118;
      fStack_104 = fStack_104 + fStack_114;
      fStack_100 = fStack_100 + fStack_110;
      fStack_fc = fStack_fc + fStack_10c;
      (**(code **)(*param_1 + 0xb0))
                (param_1,&local_e4,param_3,&local_118,&local_108,0x7f0000ff,param_9);
      param_5 = param_5 + 1;
      bVar7 = (bool)(bVar8 & (-1 < local_dc && (-1 < local_e4 && -1 < local_e0)));
      lVar13 = lVar13 + 0x30;
      local_d8 = local_d8 - 1;
    } while (local_d8 != 0);
    if (!bVar7) {
      *param_2 = 0x80040200;
      return;
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 145350c00 FUN_145350c00 body=626 status=ok
// SIG undefined FUN_145350c00(void)

void FUN_145350c00(longlong *param_1,undefined4 *param_2,undefined8 param_3,
                  undefined1 (*param_4) [12],undefined4 param_5,undefined4 param_6)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  int local_res20 [2];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  uVar10 = *(undefined4 *)(param_4[1] + 8);
  pauVar1 = (undefined1 (*) [12])(param_4[1] + 4);
  uVar2 = *(undefined4 *)*pauVar1;
  uVar3 = *(undefined4 *)param_4[2];
  uVar4 = *(undefined4 *)*param_4;
  uVar5 = *(undefined4 *)(*param_4 + 4);
  uVar6 = *(undefined4 *)(*param_4 + 8);
  local_1f8._12_4_ = 0;
  local_1f8._0_12_ = *param_4;
  local_1e8._4_4_ = uVar10;
  local_1e8._0_4_ = uVar4;
  local_1e8._8_4_ = uVar6;
  local_1e8._12_4_ = 0;
  local_1d8._12_4_ = 0;
  local_1d8._0_12_ = *param_4;
  local_1c8._8_4_ = uVar3;
  local_1c8._0_8_ = *(undefined8 *)*param_4;
  local_1c8._12_4_ = 0;
  local_1b8._12_4_ = 0;
  local_1b8._0_12_ = *param_4;
  local_1a8._4_4_ = uVar5;
  local_1a8._0_4_ = uVar2;
  local_1a8._8_4_ = uVar6;
  local_1a8._12_4_ = 0;
  local_198._12_4_ = 0;
  local_198._0_12_ = *pauVar1;
  local_188._8_4_ = uVar6;
  local_188._0_8_ = *(undefined8 *)*pauVar1;
  local_188._12_4_ = 0;
  local_178._12_4_ = 0;
  local_178._0_12_ = *pauVar1;
  local_168._4_4_ = uVar10;
  local_168._0_4_ = uVar4;
  local_168._8_4_ = uVar3;
  local_168._12_4_ = 0;
  local_158._12_4_ = 0;
  local_158._0_12_ = *pauVar1;
  local_148._4_4_ = uVar5;
  local_148._0_4_ = uVar2;
  local_148._8_4_ = uVar3;
  local_148._12_4_ = 0;
  local_138._4_4_ = uVar10;
  local_138._0_4_ = uVar4;
  local_138._8_4_ = uVar6;
  local_138._12_4_ = 0;
  local_128._8_4_ = uVar6;
  local_128._0_8_ = *(undefined8 *)*pauVar1;
  local_128._12_4_ = 0;
  local_118._4_4_ = uVar10;
  local_118._0_4_ = uVar4;
  local_118._8_4_ = uVar6;
  local_118._12_4_ = 0;
  local_108._4_4_ = uVar10;
  local_108._0_4_ = uVar4;
  local_108._8_4_ = uVar3;
  local_108._12_4_ = 0;
  local_f8._8_4_ = uVar6;
  local_f8._0_8_ = *(undefined8 *)*pauVar1;
  local_f8._12_4_ = 0;
  puVar9 = local_1f8;
  lVar11 = 0xc;
  local_e8._4_4_ = uVar5;
  local_e8._0_4_ = uVar2;
  local_e8._8_4_ = uVar6;
  local_e8._12_4_ = 0;
  local_d8._4_4_ = uVar10;
  local_d8._0_4_ = uVar4;
  local_d8._8_4_ = uVar3;
  local_d8._12_4_ = 0;
  local_c8._8_4_ = uVar3;
  local_c8._0_8_ = *(undefined8 *)*param_4;
  local_c8._12_4_ = 0;
  local_b8._8_4_ = uVar3;
  local_b8._0_8_ = *(undefined8 *)*param_4;
  local_b8._12_4_ = 0;
  local_a8._4_4_ = uVar5;
  local_a8._0_4_ = uVar2;
  local_a8._8_4_ = uVar3;
  local_a8._12_4_ = 0;
  local_98._4_4_ = uVar5;
  local_98._0_4_ = uVar2;
  local_98._8_4_ = uVar3;
  local_98._12_4_ = 0;
  local_88._4_4_ = uVar5;
  local_88._0_4_ = uVar2;
  local_88._8_4_ = uVar6;
  local_88._12_4_ = 0;
  bVar8 = true;
  do {
    (**(code **)(*param_1 + 0xb0))(param_1,local_res20,param_3,puVar9,puVar9 + 0x10,param_5,param_6)
    ;
    bVar7 = false;
    if (-1 < local_res20[0]) {
      bVar7 = bVar8;
    }
    puVar9 = puVar9 + 0x20;
    lVar11 = lVar11 + -1;
    bVar8 = bVar7;
  } while (lVar11 != 0);
  uVar10 = 0;
  if (!bVar7) {
    uVar10 = 0x80040200;
  }
  *param_2 = uVar10;
  return;
}



// FUNCTION 145350e80 FUN_145350e80 body=987 status=ok
// SIG undefined FUN_145350e80(void)

/* WARNING: Removing unreachable block (ram,0x000145350eff) */

undefined4 *
FUN_145350e80(longlong *param_1,undefined4 *param_2,undefined8 param_3,float *param_4,float *param_5
             ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float *pfVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res8 [2];
  int local_res10 [2];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4 [3];
  float local_c8 [8];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  fVar3 = param_4[0xc];
  fVar4 = param_4[0xd];
  fVar5 = param_4[0xe];
  fVar6 = param_4[0xf];
  fVar7 = param_4[8];
  fVar8 = param_4[9];
  fVar9 = param_4[10];
  fVar10 = param_4[0xb];
  uVar20 = 0;
  fVar11 = *param_4;
  fVar12 = param_4[1];
  fVar13 = param_4[2];
  fVar14 = param_4[3];
  fVar15 = param_4[4];
  fVar16 = param_4[5];
  fVar17 = param_4[6];
  fVar18 = param_4[7];
  pfVar19 = local_c8;
  do {
    if ((uVar20 & 4) == 0) {
      fVar21 = param_5[2];
    }
    else {
      fVar21 = param_5[6];
    }
    if ((uVar20 & 2) == 0) {
      fVar22 = param_5[1];
    }
    else {
      fVar22 = param_5[5];
    }
    fVar23 = *param_5;
    uVar1 = uVar20 + 1;
    *pfVar19 = fVar23 * fVar11 + fVar22 * fVar15 + fVar21 * fVar7 + fVar3;
    pfVar19[1] = fVar23 * fVar12 + fVar22 * fVar16 + fVar21 * fVar8 + fVar4;
    pfVar19[2] = fVar23 * fVar13 + fVar22 * fVar17 + fVar21 * fVar9 + fVar5;
    pfVar19[3] = fVar23 * fVar14 + fVar22 * fVar18 + fVar21 * fVar10 + fVar6;
    if ((uVar1 & 4) == 0) {
      fVar21 = param_5[2];
    }
    else {
      fVar21 = param_5[6];
    }
    if ((uVar1 & 2) == 0) {
      fVar22 = param_5[1];
    }
    else {
      fVar22 = param_5[5];
    }
    if ((uVar1 & 1) == 0) {
      fVar23 = *param_5;
    }
    else {
      fVar23 = param_5[4];
    }
    uVar20 = uVar20 + 2;
    fVar24 = fVar21 * fVar7;
    pfVar19[4] = fVar23 * fVar11 + fVar22 * fVar15 + fVar24 + fVar3;
    pfVar19[5] = fVar23 * fVar12 + fVar22 * fVar16 + fVar21 * fVar8 + fVar4;
    pfVar19[6] = fVar23 * fVar13 + fVar22 * fVar17 + fVar21 * fVar9 + fVar5;
    pfVar19[7] = fVar23 * fVar14 + fVar22 * fVar18 + fVar21 * fVar10 + fVar6;
    pfVar19 = pfVar19 + 8;
  } while ((int)uVar20 < 8);
  (**(code **)(*param_1 + 0xb0))(param_1,local_d4,fVar24,local_c8,local_c8 + 4,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_d8,param_3,local_c8 + 4,local_98,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_dc,param_3,local_98,local_a8,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_e0,param_3,local_a8,local_c8,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_e4,param_3,local_88,local_78,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_e8,param_3,local_78,local_58,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_ec,param_3,local_58,local_68,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_f0,param_3,local_68,local_88,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_f4,param_3,local_c8,local_88,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,&local_f8,param_3,local_c8 + 4,local_78,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,local_res10,param_3,local_a8,local_68,param_6,param_7);
  (**(code **)(*param_1 + 0xb0))(param_1,local_res8,param_3,local_98,local_58,param_6,param_7);
  uVar2 = 0;
  if (local_d4[0] < 0 ||
      (local_d8 < 0 ||
      ((local_e0 < 0 ||
       ((local_e8 < 0 ||
        ((local_f0 < 0 ||
         ((local_f8 < 0 || (local_res8[0] < 0 || local_res10[0] < 0)) || local_f4 < 0)) ||
        local_ec < 0)) || local_e4 < 0)) || local_dc < 0))) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 145351260 FUN_145351260 body=353 status=ok
// SIG undefined FUN_145351260(void)

undefined4 *
FUN_145351260(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = param_8;
  iVar3 = param_6;
  iVar6 = 0;
  bVar2 = true;
  if (0 < param_6) {
    do {
      puVar5 = (undefined8 *)((longlong)(*(int *)((longlong)param_4 + 0xc) * iVar6) + *param_4);
      if (*(int *)((longlong)param_4 + 0xc) < 0x10) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((longlong)puVar5 + 0xc);
      }
      local_48 = *puVar5;
      uStack_40 = CONCAT44(uVar7,*(undefined4 *)(puVar5 + 1));
      puVar5 = (undefined8 *)((longlong)(*(int *)((longlong)param_5 + 0xc) * iVar6) + *param_5);
      if (*(int *)((longlong)param_5 + 0xc) < 0x10) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((longlong)puVar5 + 0xc);
      }
      local_58 = *puVar5;
      uStack_50 = CONCAT44(uVar7,*(undefined4 *)(puVar5 + 1));
      (**(code **)(*param_1 + 0xb0))(param_1,&param_6,param_3,&local_48,&local_58,param_7,uVar4);
      bVar1 = false;
      if (-1 < param_6) {
        bVar1 = bVar2;
      }
      iVar6 = iVar6 + 1;
      bVar2 = bVar1;
    } while (iVar6 < iVar3);
    if (!bVar1) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1453513d0 FUN_1453513d0 body=3 status=ok
// SIG undefined FUN_1453513d0(void)

void FUN_1453513d0(void)

{
  return;
}



// FUNCTION 1453513e0 FUN_1453513e0 body=3 status=ok
// SIG undefined FUN_1453513e0(void)

void FUN_1453513e0(void)

{
  return;
}



// FUNCTION 1453513f0 FUN_1453513f0 body=71 status=ok
// SIG undefined FUN_1453513f0(void)

undefined8 * FUN_1453513f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145351440 FUN_145351440 body=132 status=ok
// SIG undefined FUN_145351440(void)

void FUN_145351440(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  uVar1 = *(uint *)(param_1 + 0xac);
  fVar2 = *(float *)(param_1 + 0xb0);
  fVar6 = *(float *)(lVar3 + 0x40);
  fVar7 = *(float *)(lVar3 + 0x44);
  fVar8 = *(float *)(lVar3 + 0x48);
  fVar9 = *(float *)(lVar3 + 0x4c);
  fVar13 = (float)(-(uint)(fVar6 == 0.0) & uVar1);
  fVar16 = (float)(-(uint)(fVar7 == 0.0) & uVar1);
  fVar17 = (float)(-(uint)(fVar8 == 0.0) & uVar1);
  fVar18 = (float)(-(uint)(fVar9 == 0.0) & uVar1);
  fVar10 = -*(float *)(param_1 + 0xb4);
  auVar11._0_4_ = *(float *)(param_1 + 0x30) - fVar13;
  auVar11._4_4_ = *(float *)(param_1 + 0x34) - fVar16;
  auVar11._8_4_ = *(float *)(param_1 + 0x38) - fVar17;
  auVar11._12_4_ = *(float *)(param_1 + 0x3c) - fVar18;
  auVar14._0_4_ = fVar13 + *(float *)(param_1 + 0x30);
  auVar14._4_4_ = fVar16 + *(float *)(param_1 + 0x34);
  auVar14._8_4_ = fVar17 + *(float *)(param_1 + 0x38);
  auVar14._12_4_ = fVar18 + *(float *)(param_1 + 0x3c);
  auVar12._4_4_ = fVar2 * fVar7 + auVar11._4_4_;
  auVar12._0_4_ = fVar2 * fVar6 + auVar11._0_4_;
  auVar12._8_4_ = fVar2 * fVar8 + auVar11._8_4_;
  auVar12._12_4_ = fVar2 * fVar9 + auVar11._12_4_;
  auVar12 = minps(auVar11,auVar12);
  auVar15._4_4_ = fVar2 * fVar7 + auVar14._4_4_;
  auVar15._0_4_ = fVar2 * fVar6 + auVar14._0_4_;
  auVar15._8_4_ = fVar2 * fVar8 + auVar14._8_4_;
  auVar15._12_4_ = fVar2 * fVar9 + auVar14._12_4_;
  auVar15 = maxps(auVar14,auVar15);
  auVar4._4_4_ = auVar15._4_4_ + fVar10 * fVar7;
  auVar4._0_4_ = auVar15._0_4_ + fVar10 * fVar6;
  auVar4._8_4_ = auVar15._8_4_ + fVar10 * fVar8;
  auVar4._12_4_ = auVar15._12_4_ + fVar10 * fVar9;
  auVar15 = maxps(auVar15,auVar4);
  param_2[1] = auVar15;
  auVar5._4_4_ = auVar12._4_4_ + fVar10 * fVar7;
  auVar5._0_4_ = auVar12._0_4_ + fVar10 * fVar6;
  auVar5._8_4_ = auVar12._8_4_ + fVar10 * fVar8;
  auVar5._12_4_ = auVar12._12_4_ + fVar10 * fVar9;
  auVar15 = minps(auVar12,auVar5);
  *param_2 = auVar15;
  return;
}



// FUNCTION 1453514d0 FUN_1453514d0 body=239 status=ok
// SIG undefined FUN_1453514d0(void)

undefined8 * FUN_1453514d0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x1d];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 0x1e) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1d],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xf4) & 0x7fffffff) << 3);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x110);
    }
  }
  return param_1;
}



// FUNCTION 1453515c0 FUN_1453515c0 body=61 status=ok
// SIG undefined FUN_1453515c0(void)

undefined8 * FUN_1453515c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145351600 FUN_145351600 body=332 status=ok
// SIG undefined FUN_145351600(void)

undefined8 FUN_145351600(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  if ((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) {
    *(uint *)(param_1 + 0x3c) = param_3;
    *(ulonglong *)(param_1 + 0x48) = ~((ulonglong)param_3 - 1);
    *(uint *)(param_1 + 0x40) = param_3 - 0x18;
    iVar1 = AkTlsAllocateSlot(param_1 + 0x38);
    if (iVar1 != 0) {
      return 9;
    }
    AkTlsSetValue(*(undefined4 *)(param_1 + 0x38),0);
    if (param_2 != 0) {
      pvVar2 = AK::MemoryMgr::Malign
                         (0x12,(ulonglong)(*(uint *)(param_1 + 0x3c) * param_2),
                          *(uint *)(param_1 + 0x3c));
      iVar1 = param_2;
      if (pvVar2 == (void *)0x0) {
        return 0x34;
      }
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        plVar3 = (longlong *)
                 ((longlong)pvVar2 +
                 (ulonglong)*(uint *)(param_1 + 0x40) + (ulonglong)(iVar1 * param_3));
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(param_1 + 0x40);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
        if (*(longlong *)(param_1 + 8) == 0) {
          *(longlong **)(param_1 + 8) = plVar3;
          *plVar3 = 0;
        }
        else {
          *plVar3 = *(longlong *)(param_1 + 8);
          *(longlong **)(param_1 + 8) = plVar3;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(undefined4 *)(param_1 + 0x54) = 0;
    return 1;
  }
  return 0x1f;
}



// FUNCTION 145351750 FUN_145351750 body=169 status=ok
// SIG undefined FUN_145351750(void)

void FUN_145351750(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar2 = *(int *)(param_1 + 0x54);
  while (iVar2 != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = *plVar3;
      if (*plVar3 == 0) {
        lVar4 = 0;
      }
      *(longlong *)(param_1 + 8) = lVar4;
      *plVar3 = 0;
    }
    AK::MemoryMgr::Free(0x12,(void *)(*(ulonglong *)(param_1 + 0x48) & (ulonglong)plVar3));
    piVar1 = (int *)(param_1 + 0x54);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    AK::MemoryMgr::Free(0x12,(void *)(*(ulonglong *)(param_1 + 0x48) & *(ulonglong *)(param_1 + 8)))
    ;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  AkTlsFreeSlot(*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 145351800 FUN_145351800 body=48 status=ok
// SIG undefined FUN_145351800(void)

void FUN_145351800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = AkTlsGetValue(*(undefined4 *)(param_1 + 0x38));
  if (lVar1 != 0) {
    LOCK();
    *(undefined4 *)(lVar1 + 0x14) = 0;
    UNLOCK();
    AkTlsSetValue(*(undefined4 *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 145351830 FUN_145351830 body=441 status=ok
// SIG undefined FUN_145351830(void)

longlong FUN_145351830(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  
  plVar3 = (longlong *)AkTlsGetValue(*(undefined4 *)(param_1 + 0x38));
  do {
    if (plVar3 == (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      plVar3 = *(longlong **)(param_1 + 8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
        LOCK();
        bVar6 = *(int *)((longlong)plVar3 + 0x14) == 0;
        if (bVar6) {
          *(int *)((longlong)plVar3 + 0x14) = 1;
        }
        UNLOCK();
        if (bVar6) {
          if (-1 < (int)*(uint *)(plVar3 + 2)) goto LAB_14535199f;
          if (*(uint *)((longlong)plVar3 + 0xc) == (*(uint *)(plVar3 + 2) & 0x7fffffff)) {
            *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
            LOCK();
            *(undefined4 *)(plVar3 + 2) = 0;
            UNLOCK();
            goto LAB_14535199f;
          }
        }
      }
      pvVar4 = AK::MemoryMgr::Malign
                         (0x12,(ulonglong)*(uint *)(param_1 + 0x3c),*(uint *)(param_1 + 0x3c));
      plVar3 = (longlong *)0x0;
      if (pvVar4 != (void *)0x0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        plVar3 = (longlong *)((ulonglong)*(uint *)(param_1 + 0x40) + (longlong)pvVar4);
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
        if (*(longlong *)(param_1 + 8) == 0) {
          *(longlong **)(param_1 + 8) = plVar3;
          *plVar3 = 0;
        }
        else {
          *plVar3 = *(longlong *)(param_1 + 8);
          *(longlong **)(param_1 + 8) = plVar3;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
LAB_14535199f:
      AkTlsSetValue(*(undefined4 *)(param_1 + 0x38),plVar3);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
    }
    uVar5 = (int)plVar3[1] - param_2 & -param_3;
    if (-1 < (int)uVar5) {
      uVar2 = *(ulonglong *)(param_1 + 0x48);
      *(uint *)(plVar3 + 1) = uVar5;
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      return (uVar2 & (ulonglong)plVar3) + (longlong)(int)uVar5;
    }
    if ((ulonglong)*(uint *)(param_1 + 0x3c) - 0x18 < (ulonglong)param_2) {
      return 0;
    }
    uVar5 = *(uint *)(plVar3 + 2);
    do {
      LOCK();
      uVar1 = *(uint *)(plVar3 + 2);
      bVar6 = uVar5 == uVar1;
      if (bVar6) {
        *(uint *)(plVar3 + 2) = uVar5 | 0x80000000;
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      UNLOCK();
    } while (!bVar6);
    if ((uVar5 & 0x7fffffff) == *(uint *)((longlong)plVar3 + 0xc)) {
      *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
      LOCK();
      *(undefined4 *)(plVar3 + 2) = 0;
      UNLOCK();
    }
    else {
      AkTlsSetValue(*(undefined4 *)(param_1 + 0x38),0);
      plVar3 = (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 1453519f0 FUN_1453519f0 body=48 status=ok
// SIG undefined FUN_1453519f0(void)

void FUN_1453519f0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x40) + (*(ulonglong *)(param_1 + 0x48) & param_2);
    LOCK();
    piVar1 = (int *)(lVar3 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (((int)(iVar2 + 1U) < 0) && ((iVar2 + 1U & 0x7fffffff) == *(uint *)(lVar3 + 0xc))) {
      LOCK();
      *(undefined4 *)(lVar3 + 0x14) = 0;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 145351a20 FUN_145351a20 body=533 status=ok
// SIG undefined FUN_145351a20(void)

undefined8
FUN_145351a20(longlong *param_1,longlong param_2,uint param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)param_1[1]) < param_3) {
    uVar11 = param_3 + 5 + *(int *)((longlong)param_1 + 0xc);
    pvVar5 = AK::MemoryMgr::Realloc(5,(void *)*param_1,(ulonglong)uVar11 << 5);
    if (pvVar5 == (void *)0x0) {
      return 0x34;
    }
    *param_1 = (longlong)pvVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar11;
  }
  lVar7 = 0;
  uVar11 = 0;
  fVar12 = (float)(uint)param_4[2] / (float)(uint)param_4[1];
  if (param_3 < 4) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else {
    uVar4 = (param_3 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar4;
    uVar11 = uVar4 * 4;
    lVar7 = (ulonglong)uVar4 * 4;
    puVar8 = (undefined8 *)(param_2 + 0x10);
    do {
      uVar3 = puVar8[-1];
      puVar6 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
      *puVar6 = puVar8[-2];
      puVar6[1] = uVar3;
      *(int *)(puVar6 + 2) =
           (int)(longlong)((float)(uint)(*(int *)((longlong)puVar8 + -0xc) - *param_4) * fVar12);
      *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar3 = puVar8[1];
      puVar6 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
      *puVar6 = *puVar8;
      puVar6[1] = uVar3;
      *(int *)(puVar6 + 2) =
           (int)(longlong)((float)(uint)(*(int *)((longlong)puVar8 + 4) - *param_4) * fVar12);
      *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar3 = puVar8[3];
      puVar6 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
      *puVar6 = puVar8[2];
      puVar6[1] = uVar3;
      *(int *)(puVar6 + 2) =
           (int)(longlong)((float)(uint)(*(int *)((longlong)puVar8 + 0x14) - *param_4) * fVar12);
      *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar3 = puVar8[5];
      puVar6 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
      *puVar6 = puVar8[4];
      puVar6[1] = uVar3;
      *(int *)(puVar6 + 2) =
           (int)(longlong)((float)(uint)(*(int *)((longlong)puVar8 + 0x24) - *param_4) * fVar12);
      *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      uVar10 = uVar10 - 1;
      puVar8 = puVar8 + 8;
    } while (uVar10 != 0);
    if (param_3 <= uVar11) {
      return 1;
    }
  }
  puVar9 = (uint *)(param_1 + 1);
  uVar10 = (ulonglong)(param_3 - uVar11);
  puVar8 = (undefined8 *)(lVar7 * 0x10 + param_2);
  do {
    uVar3 = puVar8[1];
    puVar6 = (undefined8 *)((ulonglong)*puVar9 * 0x20 + *param_1);
    *puVar6 = *puVar8;
    puVar6[1] = uVar3;
    iVar1 = *(int *)((longlong)puVar8 + 4);
    iVar2 = *param_4;
    *(undefined4 *)((longlong)puVar6 + 0x14) = param_5;
    *(undefined1 *)(puVar6 + 3) = 0;
    *(int *)(puVar6 + 2) = (int)(longlong)((float)(uint)(iVar1 - iVar2) * fVar12);
    *puVar9 = *puVar9 + 1;
    uVar10 = uVar10 - 1;
    puVar8 = puVar8 + 2;
  } while (uVar10 != 0);
  return 1;
}



// FUNCTION 145351c40 FUN_145351c40 body=12 status=ok
// SIG undefined FUN_145351c40(void)

undefined4 * FUN_145351c40(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 145351c50 FUN_145351c50 body=3 status=ok
// SIG undefined FUN_145351c50(void)

void FUN_145351c50(void)

{
  return;
}



// FUNCTION 145351c60 FUN_145351c60 body=60 status=ok
// SIG undefined FUN_145351c60(void)

undefined8 FUN_145351c60(uint *param_1,uint param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = AK::MemoryMgr::Malloc(5,(ulonglong)param_2 << 4);
  *(void **)(param_1 + 2) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    *param_1 = 0;
    return 0x34;
  }
  return 1;
}



// FUNCTION 145351ca0 FUN_145351ca0 body=129 status=ok
// SIG undefined FUN_145351ca0(void)

undefined8 FUN_145351ca0(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)(param_4 + 1));
  if (_Dst == (void *)0x0) {
    uVar1 = 0x34;
  }
  else {
    memcpy(_Dst,param_3,(ulonglong)param_4);
    *(undefined1 *)((ulonglong)param_4 + (longlong)_Dst) = 0;
    uVar1 = 1;
    *(void **)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)param_2 * 0x10) = _Dst;
  }
  return uVar1;
}



// FUNCTION 145351d30 FUN_145351d30 body=146 status=ok
// SIG undefined FUN_145351d30(void)

void FUN_145351d30(uint *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    *param_1 = 0;
    return;
  }
  if (*param_1 != 0) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 2) + 8 + uVar2 * 0x10);
      if (pvVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(5,pvVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar2 * 0x10) = 0;
      }
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < *param_1);
  }
  AK::MemoryMgr::Free(5,*(void **)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 145351dd0 FUN_145351dd0 body=131 status=ok
// SIG undefined FUN_145351dd0(void)

void FUN_145351dd0(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar3 = *param_1;
  if (1 < uVar3) {
    bVar5 = true;
    while ((uVar3 = uVar3 - 1, uVar3 != 0 && (bVar5))) {
      bVar5 = false;
      if (uVar3 != 0) {
        lVar10 = 0;
        uVar11 = (ulonglong)uVar3;
        lVar9 = 0x10;
        do {
          lVar4 = *(longlong *)(param_1 + 2);
          puVar1 = (undefined8 *)(lVar10 + lVar4);
          puVar2 = (undefined8 *)(lVar9 + lVar4);
          if (*(uint *)(lVar9 + 4 + lVar4) < *(uint *)((longlong)puVar1 + 4)) {
            uVar6 = puVar2[1];
            bVar5 = true;
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
          }
          lVar9 = lVar9 + 0x10;
          lVar10 = lVar10 + 0x10;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
  return;
}



// FUNCTION 145351e60 FUN_145351e60 body=257 status=ok
// SIG undefined FUN_145351e60(void)

void FUN_145351e60(uint *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                  int param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint local_28;
  int local_24;
  uint local_20;
  
  lVar2 = *(longlong *)(param_1 + 2);
  if ((lVar2 != 0) && ((*(byte *)(param_3 + 8) & 4) != 0)) {
    uVar8 = 0;
    iVar7 = 0;
    uVar5 = 0;
    if (*param_1 != 0) {
      puVar6 = (uint *)(lVar2 + 4);
      do {
        if ((param_5 <= *puVar6) && (*puVar6 < param_5 + param_6)) {
          uVar3 = uVar5;
          if (iVar7 != 0) {
            uVar3 = uVar8;
          }
          uVar8 = uVar3;
          iVar7 = iVar7 + 1;
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 4;
      } while (uVar5 < *param_1);
      if (iVar7 != 0) {
        local_28 = param_5;
        local_20 = (uint)*(ushort *)(param_4 + 0x12);
        uVar1 = *(undefined4 *)(param_2 + 8);
        local_24 = param_6;
        iVar4 = FUN_145351a20(param_2,(ulonglong)uVar8 * 0x10 + lVar2,iVar7,&local_28,
                              *(undefined4 *)(param_3 + 0x280));
        if (iVar4 == 1) {
          if (*(int *)(param_4 + 0x1c) == 0) {
            *(undefined4 *)(param_4 + 0x18) = uVar1;
          }
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + iVar7;
        }
      }
    }
  }
  return;
}



// FUNCTION 145351f70 FUN_145351f70 body=139 status=ok
// SIG undefined FUN_145351f70(void)

void FUN_145351f70(uint *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) &&
     (uVar2 = 0, *param_1 != 0)) {
    do {
      uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2) + 4);
      if ((param_3 <= uVar1) && (uVar1 < param_4)) {
        FUN_1450b2cd0(DAT_14c790fc0,*(undefined4 *)(param_2 + 0x280));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return;
}



// FUNCTION 145352000 FUN_145352000 body=87 status=ok
// SIG undefined FUN_145352000(void)

void FUN_145352000(uint *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 2) + 4);
    uVar3 = uVar1;
    uVar5 = uVar1;
    do {
      uVar2 = -(*piVar4 - param_2);
      if ((int)uVar2 < 0) {
        uVar2 = *piVar4 - param_2;
      }
      if ((uVar1 == 0) || (uVar2 < (uint)uVar5)) {
        uVar1 = uVar3 * 0x10 + *(longlong *)(param_1 + 2);
        uVar5 = (ulonglong)uVar2;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      piVar4 = piVar4 + 4;
    } while (uVar2 < *param_1);
  }
  return;
}



// FUNCTION 145352060 FUN_145352060 body=125 status=ok
// SIG undefined FUN_145352060(void)

void FUN_145352060(longlong *param_1,longlong param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar5 = 0;
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      lVar2 = (uVar4 + *(uint *)(param_2 + 0x18)) * 0x20;
      uVar3 = *(uint *)(lVar2 + 0x10 + lVar1);
      if ((param_4 <= uVar3) && (uVar3 < param_4 + param_5)) {
        *(undefined4 *)(lVar2 + 0x10 + lVar1) = 0;
        iVar5 = iVar5 + 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_2 + 0x1c));
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + iVar5;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - iVar5;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + iVar5;
  }
  return;
}



// FUNCTION 1453520e0 FUN_1453520e0 body=179 status=ok
// SIG undefined FUN_1453520e0(void)

undefined8 FUN_1453520e0(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar2 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 2) = 1;
    *(int *)(param_1 + 1) = param_3 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(0,(ulonglong)(uint)((param_3 + 2) * 0x14));
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar2 = 0x34;
    }
    else {
      FUN_1453521a0(param_1,param_2,param_3,param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 1453521a0 FUN_1453521a0 body=430 status=ok
// SIG undefined FUN_1453521a0(void)

void FUN_1453521a0(longlong *param_1,void *param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float fVar7;
  float fVar8;
  ulonglong uVar6;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  memcpy((void *)(*param_1 + 0xc),param_2,(ulonglong)(uint)(param_3 * 0xc));
  uVar4 = 0;
  *(undefined4 *)(*param_1 + 8) = 9;
  *(undefined4 *)*param_1 = 0xff7fffff;
  *(undefined4 *)(*param_1 + 4) = *(undefined4 *)(*param_1 + 0x10);
  *(undefined4 *)(*param_1 + 8 + (ulonglong)((int)param_1[1] - 1) * 0xc) = 9;
  *(undefined4 *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 0xc) = 0x7f7fffff;
  *(undefined4 *)(*param_1 + 4 + (ulonglong)((int)param_1[1] - 1) * 0xc) =
       *(undefined4 *)(*param_1 + 4 + (ulonglong)((int)param_1[1] - 2) * 0xc);
  lVar1 = *param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      uVar5 = (int)uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
      fVar8 = *(float *)(*param_1 + 4 + uVar6 * 0xc) - *(float *)(*param_1 + 4 + uVar4 * 0xc);
      *(float *)(lVar1 + 4 + uVar4 * 8) = fVar8;
      fVar7 = 1.0 / (*(float *)(*param_1 + uVar6 * 0xc) - *(float *)(*param_1 + uVar4 * 0xc));
      *(float *)(lVar1 + uVar4 * 8) = fVar7;
      lVar3 = *param_1;
      iVar2 = *(int *)(lVar3 + 8 + uVar4 * 0xc);
      if (iVar2 == 9) {
        *(undefined4 *)(lVar1 + uVar4 * 8) = 0;
      }
      else if (iVar2 == 4) {
        *(float *)(lVar1 + uVar4 * 8) =
             (*(float *)(lVar3 + 4 + uVar6 * 0xc) - *(float *)(lVar3 + 4 + uVar4 * 0xc)) * fVar7;
      }
      else {
        if ((iVar2 == 1) || (iVar2 == 7)) {
          fVar7 = fVar7 * 1.5707964;
        }
        else {
          if ((iVar2 - 3U & 0xfffffffd) != 0) {
            if (iVar2 == 2) {
              *(float *)(lVar1 + 4 + uVar4 * 8) = fVar8 * -0.5;
            }
            else if (iVar2 == 6) {
              *(float *)(lVar1 + 4 + uVar4 * 8) = fVar8 * 0.5;
            }
            goto LAB_14535232c;
          }
          fVar7 = fVar7 * 3.1415927;
        }
        *(float *)(lVar1 + uVar4 * 8) = fVar7;
      }
LAB_14535232c:
      uVar4 = uVar6;
    } while (uVar5 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 145352350 FUN_145352350 body=118 status=ok
// SIG undefined FUN_145352350(void)

void FUN_145352350(longlong param_1)

{
  undefined4 uVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(int *)(param_1 + 0x20) != 2)) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xc);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    local_res8[0] = *(undefined4 *)(param_1 + 0x28);
    local_res10[0] = 0;
    FUN_1450737c0(param_1 + 0x18,uVar1,local_res8,local_res10);
    *(undefined4 *)(param_1 + 0x28) = local_res8[0];
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = local_res10[0];
    *(undefined4 *)(param_1 + 0x3c) = local_res10[0];
  }
  return;
}



// FUNCTION 1453523d0 FUN_1453523d0 body=170 status=ok
// SIG undefined FUN_1453523d0(void)

undefined8 FUN_1453523d0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145352480 FUN_145352480 body=354 status=ok
// SIG undefined FUN_145352480(void)

longlong FUN_145352480(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 1);
  iVar4 = 0;
  if (uVar9 != 0) {
    do {
      iVar5 = (uVar9 >> 1) + iVar4;
      lVar7 = (longlong)iVar5 * 8;
      uVar1 = *(uint *)(*(longlong *)(lVar7 + *param_1) + 8);
      if (uVar1 == param_2) {
        *param_3 = 1;
        lVar6 = *param_1;
        lVar7 = lVar7 + lVar6;
        goto LAB_1453524fc;
      }
      uVar3 = uVar9 - 1;
      iVar5 = iVar5 + 1;
      if (param_2 <= uVar1) {
        uVar3 = uVar9;
        iVar5 = iVar4;
      }
      iVar4 = iVar5;
      uVar9 = uVar3 >> 1;
    } while (uVar9 != 0);
  }
  *param_3 = 0;
  lVar6 = *param_1;
  lVar7 = lVar6 + (longlong)iVar4 * 8;
LAB_1453524fc:
  uVar9 = *(uint *)(param_1 + 1);
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (lVar7 == 0) {
    if (uVar1 <= uVar9) {
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (uVar1 >> 1) + uVar1;
      }
      cVar2 = FUN_1453523d0(param_1,iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar9 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar9 + 1;
      return *param_1 + (ulonglong)uVar9 * 8;
    }
  }
  else {
    uVar8 = lVar7 - lVar6 >> 3;
    if (uVar1 <= uVar9) {
      iVar4 = (uVar1 >> 1) + uVar1;
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      cVar2 = FUN_1453523d0(param_1,iVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar9 = (uint)uVar8;
      lVar7 = (uVar8 & 0xffffffff) * 8;
      _Src = (void *)(*param_1 + lVar7);
      if (uVar9 < *(uint *)(param_1 + 1)) {
        memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*(uint *)(param_1 + 1) - uVar9) * 8))
        ;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return *param_1 + lVar7;
    }
  }
  return 0;
}



// FUNCTION 1453525f0 FUN_1453525f0 body=188 status=ok
// SIG undefined FUN_1453525f0(void)

void FUN_1453525f0(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  uVar5 = (ulonglong)(uint)param_1[1];
  puVar1 = puVar2 + uVar5;
  puVar4 = puVar2;
  while (puVar2 != puVar1) {
    pvVar3 = (void *)*puVar2;
    if (puVar2 < puVar4 + (uVar5 - 1)) {
      *puVar2 = puVar4[uVar5 - 1];
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    if (pvVar3 != (void *)0x0) {
      if (*(void **)((longlong)pvVar3 + 0x18) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar3 + 0x18));
      }
      *(undefined8 *)((longlong)pvVar3 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar3 + 0x20) = 0;
      *(undefined4 *)((longlong)pvVar3 + 0x28) = 1;
      AK::MemoryMgr::Free(2,pvVar3);
    }
    puVar4 = (undefined8 *)*param_1;
    uVar5 = (ulonglong)(uint)param_1[1];
    puVar1 = puVar4 + (uint)param_1[1];
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,puVar4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1453526b0 FUN_1453526b0 body=188 status=ok
// SIG undefined FUN_1453526b0(void)

void FUN_1453526b0(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  uVar5 = (ulonglong)(uint)param_1[1];
  puVar1 = puVar2 + uVar5;
  puVar4 = puVar2;
  while (puVar2 != puVar1) {
    pvVar3 = (void *)*puVar2;
    if (puVar2 < puVar4 + (uVar5 - 1)) {
      *puVar2 = puVar4[uVar5 - 1];
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    if (pvVar3 != (void *)0x0) {
      if (*(void **)((longlong)pvVar3 + 0x18) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar3 + 0x18));
      }
      *(undefined8 *)((longlong)pvVar3 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar3 + 0x20) = 0;
      *(undefined4 *)((longlong)pvVar3 + 0x28) = 1;
      AK::MemoryMgr::Free(2,pvVar3);
    }
    puVar4 = (undefined8 *)*param_1;
    uVar5 = (ulonglong)(uint)param_1[1];
    puVar1 = puVar4 + (uint)param_1[1];
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,puVar4);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 145352770 FUN_145352770 body=204 status=ok
// SIG undefined FUN_145352770(void)

int FUN_145352770(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 param_10,undefined4 param_11,longlong *param_12)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_145352a70(param_1,param_8,param_7);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = 0x34;
  }
  else {
    *(undefined1 *)((longlong)puVar2 + 0xd) = param_5;
    *(undefined1 *)(puVar2 + 3) = param_6;
    puVar2[1] = param_8;
    *puVar2 = param_4;
    puVar2[2] = param_7;
    puVar2[4] = param_2;
    iVar1 = FUN_1453520e0(puVar2 + 6,param_10,param_11,param_9);
    FUN_145352350(puVar2);
    if (iVar1 == 1) {
      if (param_12 != (longlong *)0x0) {
        *param_12 = (longlong)puVar2;
      }
      iVar1 = 1;
    }
    else {
      FUN_145352840(param_1,puVar2[1]);
    }
  }
  return iVar1;
}


