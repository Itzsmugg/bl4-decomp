// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ecb53c FUN_146ecb53c body=163 status=ok
// SIG undefined FUN_146ecb53c(void)

void FUN_146ecb53c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar2 = DAT_14c996af0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  FUN_1446ddc76(&local_30,"Proximity",1);
  cVar3 = FUN_140498cd4(uVar1,local_30,uVar2);
  uVar1 = DAT_14c996af0;
  if (cVar3 != '\0') {
    uVar2 = *param_1;
    FUN_1446ddc76(&local_38,"Proximity",1);
    FUN_140498ea8(uVar2,local_38,uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecb5e0 FUN_146ecb5e0 body=682 status=ok
// SIG undefined FUN_146ecb5e0(void)

void FUN_146ecb5e0(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_168 [36];
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  longlong local_120;
  int local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar2 = DAT_14c996af0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *param_1;
  FUN_1446ddc76(&local_a0,"Proximity",1);
  cVar3 = FUN_140498cd4(uVar1,local_a0,uVar2);
  if (cVar3 != '\0') {
    cVar3 = FUN_1429f8106(param_2);
    if (cVar3 != '\0') {
      FUN_1429f811a(param_2);
    }
    uVar1 = DAT_14c996af0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      local_144 = 0xffffffff;
    }
    else {
      local_144 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x10) + (longlong)param_3 * 4);
    }
    uVar2 = *param_1;
    FUN_1446ddc76(&local_a8,"Proximity",1);
    local_140 = FUN_146eab2fc(uVar2,local_a8,uVar1);
    uVar2 = DAT_14c996af0;
    uVar1 = *param_1;
    FUN_1446ddc76(&local_b0,"TransformIndex",1);
    uVar4 = FUN_140619ac2(uVar1,local_b0,uVar2);
    uVar2 = DAT_14c9974a8;
    uVar1 = *param_1;
    FUN_1446ddc76(&local_b8,"TransformToGeometryIndex",1);
    uVar5 = FUN_140619ac2(uVar1,local_b8,uVar2);
    uVar2 = DAT_14c9974a8;
    uVar1 = *param_1;
    FUN_1446ddc76(&local_c0,"SimulationType",1);
    local_138 = FUN_140619ac2(uVar1,local_c0,uVar2);
    local_c8 = &local_120;
    local_108 = param_5;
    local_107 = param_6;
    local_100 = &local_98;
    local_f8 = local_144;
    local_f0 = local_140;
    local_d0 = FUN_142a0f5c2;
    local_128 = &local_138;
    local_130 = &LAB_142a0f5b0;
    local_120 = param_2;
    local_118 = param_3;
    local_110 = param_4;
    local_e8 = uVar4;
    local_e0 = uVar5;
    local_d8 = local_138;
    FUN_146e9aaba(param_2,param_3);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecb88c FUN_146ecb88c body=1594 status=ok
// SIG undefined FUN_146ecb88c(void)

void FUN_146ecb88c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  undefined8 *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_338;
  longlong local_330;
  int local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined1 *local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  longlong local_2e8 [2];
  undefined1 local_2d8 [4];
  undefined4 local_2d4;
  char local_2cb;
  longlong *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  longlong *local_2b0;
  undefined1 local_2a8 [168];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [224];
  undefined8 local_f8 [2];
  undefined8 local_e8;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  uVar5 = DAT_14c996af0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar11 = *param_1;
  FUN_1446ddc76(&local_200,"Proximity",1);
  cVar6 = FUN_140498cd4(lVar11,local_200,uVar5);
  if (cVar6 == '\0') {
    FUN_146e9a5f4(local_1d8,*param_1);
    FUN_146e9a7b6(local_1d8);
  }
  else {
    FUN_146e9a5f4(local_1d8,*param_1);
    FUN_146e9a78a(local_1d8);
    FUN_146e9a9e4(local_1d8);
    FUN_14075a44e(local_2a8,*param_1);
    FUN_141051328(local_2a8);
    local_2b0 = local_b8;
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_2c8 = param_1;
    local_2c0 = local_1d8;
    local_2b8 = local_2a8;
    FUN_146ec9216(*param_1 + 0x160,local_2d8);
    if (local_2cb == '\x01') {
      FUN_146e9a95a(local_1d8,1,0x3f800000);
      if (param_2 == (longlong *)0x0) {
        FUN_146ebdd7e(*param_1 + 0x150,&local_1f8,0xffffffff);
        local_2e8[0] = 0;
        local_2e8[1] = 0;
        FUN_146eb7819(*param_1 + 0xb0,*param_1 + 0x110,local_2e8);
        local_360 = local_f8;
        local_f8[0] = 0;
        local_e8 = 0;
        local_348 = 0;
        local_358 = 0;
        uStack_350 = 0;
        local_368 = 0;
        FUN_146ebe22a(&local_320,*param_1,local_2e8,(double)local_1f0._0_4_);
        FUN_146ecbec8(&local_330,*param_1,local_2d4,&local_320);
        FUN_146ebe7b8(&local_320);
        lVar11 = local_330;
        lVar10 = local_330;
        if (local_2e8[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_328 = (int)param_2[1];
        lVar11 = *param_2;
        lVar10 = 0;
      }
      if (local_328 != 0) {
        lVar15 = 0;
        do {
          local_368 = CONCAT44(local_368._4_4_,*(undefined4 *)(lVar11 + 8 + lVar15));
          FUN_142a096e8(&local_2c8,*(undefined4 *)(lVar11 + lVar15),
                        *(undefined4 *)(lVar11 + 4 + lVar15),1);
          lVar15 = lVar15 + 0x18;
        } while ((longlong)local_328 * 0x18 != lVar15);
      }
      if (lVar10 != 0) {
        FUN_1400020a8(lVar10);
      }
    }
    else {
      FUN_146e9a95a(local_1d8,0,0x3f800000);
      uVar5 = DAT_14c996af0;
      lVar11 = *param_1;
      FUN_1446ddc76(&local_338,"Proximity",1);
      plVar9 = (longlong *)FUN_146eab2fc(lVar11,local_338,uVar5);
      iVar7 = (**(code **)(*plVar9 + 0x60))(plVar9);
      if (0 < iVar7) {
        uVar14 = 0;
        do {
          lVar10 = plVar9[2];
          lVar11 = lVar10 + uVar14 * 0x50;
          puVar13 = (undefined1 *)(lVar11 + 0x10);
          local_1f8 = 0x100000000;
          local_1e8 = 0xffffffff;
          local_1e0 = 0;
          local_1f0 = puVar13;
          if (*(int *)(lVar11 + 0x28) != 0) {
            FUN_1449c0562(&local_1f8);
          }
          plVar12 = (longlong *)(lVar10 + uVar14 * 0x50);
          local_308 = local_1e8;
          local_300 = local_1e0;
          local_2fc = local_1dc;
          local_318 = local_1f8;
          local_310 = local_1f0;
          local_1e8._4_4_ = *(uint *)(plVar12 + 5);
          local_1f8 = CONCAT44(1 << ((byte)local_1e8._4_4_ & 0x1f),(int)local_1e8._4_4_ >> 5);
          local_1e8._0_4_ = -1 << ((byte)local_1e8._4_4_ & 0x1f);
          local_1e0 = local_1e8._4_4_ & 0xffffffe0;
          local_320 = plVar12;
          local_1f0 = puVar13;
          if (*(uint *)(plVar12 + 5) != local_1e8._4_4_) {
            FUN_1449c0562(&local_1f8);
          }
          uVar4 = local_1e8._4_4_;
          puVar13 = local_1f0;
          if ((local_320 != plVar12 || local_310 != local_1f0) || local_308._4_4_ != local_1e8._4_4_
             ) {
            do {
              local_368 = CONCAT44(local_368._4_4_,0x3f800000);
              FUN_142a096e8(&local_2c8,uVar14 & 0xffffffff,
                            *(undefined4 *)(*local_320 + (longlong)(int)local_308._4_4_ * 0xc),0);
              local_308 = CONCAT44(local_308._4_4_,(uint)local_308 & ~local_318._4_4_);
              FUN_1449c0562(&local_318);
            } while (local_320 != plVar12 || (local_310 != puVar13 || local_308._4_4_ != uVar4));
          }
          uVar14 = uVar14 + 1;
          iVar7 = (**(code **)(*plVar9 + 0x60))(plVar9);
        } while ((longlong)uVar14 < (longlong)iVar7);
      }
    }
    local_1f8 = 0x100000000;
    local_1e8 = 0xffffffff;
    local_1e0 = 0;
    iVar7 = 0;
    local_1f0 = local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_1f8);
      iVar7 = local_90;
    }
    local_308 = local_1e8;
    uVar5 = local_308;
    local_300 = local_1e0;
    local_2fc = local_1dc;
    local_318 = local_1f8;
    local_310 = local_1f0;
    local_308._4_4_ = (uint)((ulonglong)local_1e8 >> 0x20);
    local_320 = local_b8;
    if ((local_308._4_4_ != iVar7) || (local_1f0 != local_a8)) {
      iVar8 = local_308._4_4_;
      local_308 = uVar5;
      do {
        lVar11 = *local_320;
        lVar10 = (longlong)iVar8;
        uVar2 = *(undefined4 *)(lVar11 + lVar10 * 0x14);
        uVar3 = *(undefined4 *)(lVar11 + 4 + lVar10 * 0x14);
        uVar1 = *(undefined4 *)(lVar11 + 8 + lVar10 * 0x14);
        cVar6 = FUN_146e9a9f4(local_1d8);
        if (cVar6 == '\0') {
          FUN_146e9a804(local_1d8,uVar2,uVar3);
        }
        else {
          FUN_146e9a884(local_1d8,uVar2,uVar3,uVar1);
        }
        local_308 = CONCAT44(local_308._4_4_,(uint)local_308 & ~local_318._4_4_);
        FUN_1449c0562(&local_318);
        iVar8 = local_308._4_4_;
        uVar5 = local_308;
      } while (local_320 != local_b8 || (local_310 != local_a8 || local_308._4_4_ != iVar7));
    }
    local_308 = uVar5;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_146ed171a(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ecbec8 FUN_146ecbec8 body=2069 status=ok
// SIG undefined FUN_146ecbec8(void)

longlong * FUN_146ecbec8(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  float *local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  float local_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  
  uVar3 = DAT_14c996af0;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1d0 = param_4;
  FUN_1446ddc76(&local_d8,"Proximity",1);
  local_1b0 = param_2;
  plVar6 = (longlong *)FUN_146eb1500(param_2,local_d8,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  if ((plVar6 != (longlong *)0x0) &&
     (local_1c8 = plVar6, iVar5 = (**(code **)(*plVar6 + 0x60))(plVar6), 0 < iVar5)) {
    lVar7 = 0;
    plVar6 = local_1c8;
    local_198 = param_1;
    do {
      lVar2 = plVar6[2];
      lVar10 = lVar2 + lVar7 * 0x50;
      lVar9 = lVar10 + 0x10;
      local_1d8 = (longlong *)
                  ((longlong)*(int *)(*(longlong *)(local_1b0 + 0x3b0) + lVar7 * 4) * 0x50 +
                  local_1d0[2]);
      local_128 = (longlong *)0x100000000;
      local_118 = (longlong *)0xffffffff;
      local_110 = local_110 & 0xffffffff00000000;
      local_120 = lVar9;
      if (*(int *)(lVar10 + 0x28) != 0) {
        FUN_1449c0562(&local_128);
      }
      plVar6 = (longlong *)(lVar2 + lVar7 * 0x50);
      local_e8 = local_118;
      local_e0 = (uint)local_110;
      local_dc = local_110._4_4_;
      local_f8 = local_128;
      local_f0 = local_120;
      iVar5 = (int)plVar6[5];
      local_128 = (longlong *)CONCAT44(1 << ((byte)iVar5 & 0x1f),iVar5 >> 5);
      local_118 = (longlong *)CONCAT44(iVar5,-1 << ((byte)iVar5 & 0x1f));
      local_110 = CONCAT44(local_110._4_4_,iVar5) & 0xffffffffffffffe0;
      local_120 = lVar9;
      local_100 = plVar6;
      if ((int)plVar6[5] != iVar5) {
        FUN_1449c0562(&local_128);
        iVar5 = local_118._4_4_;
      }
      if ((local_100 != plVar6 || local_f0 != local_120) || local_e8._4_4_ != iVar5) {
        local_1a8 = local_1d8 + 2;
        plVar8 = local_1d0;
        lVar10 = local_120;
        local_1bc = iVar5;
        local_190 = local_120;
        local_188 = plVar6;
        local_180 = lVar7;
        do {
          iVar1 = *(int *)(*local_100 + (longlong)local_e8._4_4_ * 0xc);
          if (lVar7 < iVar1) {
            plVar6 = (longlong *)
                     ((longlong)*(int *)(*(longlong *)(local_1b0 + 0x3b0) + (longlong)iVar1 * 4) *
                      0x50 + plVar8[2]);
            local_150 = (longlong *)0x100000000;
            local_148 = local_1a8;
            local_140 = (longlong *)0xffffffff;
            local_138 = local_138 & 0xffffffff00000000;
            local_1b8 = iVar1;
            if ((int)local_1d8[5] != 0) {
              FUN_1449c0562(&local_150);
            }
            local_110 = (ulonglong)local_140;
            local_108 = (uint)local_138;
            local_104 = local_138._4_4_;
            local_120 = (longlong)local_150;
            local_118 = local_148;
            local_128 = local_1d8;
            iVar5 = (int)local_1d8[5];
            local_150 = (longlong *)CONCAT44(1 << ((byte)iVar5 & 0x1f),iVar5 >> 5);
            local_148 = local_1a8;
            local_140 = (longlong *)CONCAT44(iVar5,-1 << ((byte)iVar5 & 0x1f));
            local_138 = CONCAT44(local_138._4_4_,iVar5) & 0xffffffffffffffe0;
            if ((int)local_1d8[5] != iVar5) {
              FUN_1449c0562(&local_150);
              iVar5 = local_140._4_4_;
            }
            fVar12 = 0.0;
            fVar14 = 0.0;
            fVar15 = 0.0;
            fVar13 = 0.0;
            if (local_128 != local_1d8 || (local_118 != local_148 || local_110._4_4_ != iVar5)) {
              local_178 = plVar6 + 2;
              local_1b4 = iVar5;
              local_1a0 = plVar6;
              local_170 = local_148;
              do {
                plVar8 = local_178;
                plVar6 = local_1a0;
                lVar7 = (longlong)*(int *)(*local_128 + (longlong)local_110._4_4_ * 0xc);
                local_d0 = (longlong *)&DAT_100000000;
                local_c0 = 0xffffffff;
                local_b8 = 0;
                local_c8 = local_178;
                if ((int)local_1a0[5] != 0) {
                  FUN_1449c0562(&local_d0);
                }
                local_138 = local_c0;
                local_130 = local_b8;
                local_12c = local_b4;
                local_148 = local_d0;
                local_140 = local_c8;
                uVar11 = *(uint *)(plVar6 + 5);
                local_d0 = (longlong *)CONCAT44(1 << ((byte)uVar11 & 0x1f),(int)uVar11 >> 5);
                local_c0 = CONCAT44(uVar11,-1 << ((byte)uVar11 & 0x1f));
                local_b8 = uVar11 & 0xffffffe0;
                local_168 = lVar7;
                local_150 = plVar6;
                local_c8 = plVar8;
                if (*(uint *)(plVar6 + 5) != uVar11) {
                  FUN_1449c0562(&local_d0);
                  uVar11 = local_c0._4_4_;
                }
                plVar4 = local_c8;
                lVar7 = local_168;
                plVar8 = local_1d0;
                if (local_150 != plVar6 || (local_140 != local_c8 || local_138._4_4_ != uVar11)) {
                  do {
                    local_1e8 = &local_15c;
                    local_1f8 = &local_154;
                    local_1f0 = &local_158;
                    FUN_146ec676c(*(undefined8 *)(*plVar8 + lVar7 * 8),
                                  *(undefined8 *)
                                   (*plVar8 +
                                   (longlong)
                                   *(int *)(*local_150 + (longlong)(int)local_138._4_4_ * 0xc) * 8),
                                  param_3,&local_d0);
                    if (fVar14 <= local_158) {
                      fVar14 = local_158;
                    }
                    if (fVar12 <= local_15c) {
                      fVar12 = local_15c;
                    }
                    fVar15 = fVar15 + local_154;
                    fVar13 = fVar13 + (float)local_d0;
                    local_138 = CONCAT44(local_138._4_4_,(uint)local_138 & ~local_148._4_4_);
                    FUN_1449c0562(&local_148);
                  } while (local_150 != local_1a0 ||
                           (local_140 != plVar4 || local_138._4_4_ != uVar11));
                }
                local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
                FUN_1449c0562(&local_120);
              } while (local_128 != local_1d8 ||
                       (local_118 != local_170 || local_110._4_4_ != local_1b4));
            }
            param_1 = local_198;
            iVar5 = (int)local_198[1];
            lVar7 = (longlong)iVar5;
            *(uint *)(local_198 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)local_198 + 0xc) < iVar5 + 1U) {
              FUN_146ee3730(local_198,iVar5);
            }
            lVar10 = *param_1;
            *(int *)(lVar10 + lVar7 * 0x18) = (int)local_180;
            *(int *)(lVar10 + 4 + lVar7 * 0x18) = local_1b8;
            *(float *)(lVar10 + 8 + lVar7 * 0x18) = fVar13 * 0.5;
            *(float *)(lVar10 + 0xc + lVar7 * 0x18) = fVar15 * 0.5;
            *(float *)(lVar10 + 0x10 + lVar7 * 0x18) = fVar14;
            *(float *)(lVar10 + 0x14 + lVar7 * 0x18) = fVar12;
            plVar8 = local_1d0;
            plVar6 = local_188;
            lVar10 = local_190;
            lVar7 = local_180;
            iVar5 = local_1bc;
          }
          local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
          FUN_1449c0562(&local_f8);
        } while (local_100 != plVar6 || (local_f0 != lVar10 || local_e8._4_4_ != iVar5));
      }
      plVar6 = local_1c8;
      lVar7 = lVar7 + 1;
      iVar5 = (**(code **)(*local_1c8 + 0x60))(local_1c8);
    } while (lVar7 < iVar5);
  }
  if ((local_b0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ecc6de FUN_146ecc6de body=235 status=ok
// SIG undefined FUN_146ecc6de(void)

undefined8 * FUN_146ecc6de(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_146ed17a8();
  FUN_146ed18aa(param_1,param_2);
  FUN_146ed1960(param_1,param_2);
  FUN_146ed1e38(param_1,param_2);
  FUN_146ed1eea(param_1);
  local_50 = &local_40;
  local_30 = &local_58;
  local_48 = 0x3c23d70a;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = &LAB_146ed3152;
  local_70 = 0;
  local_58 = param_1;
  local_40 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 5),1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecc7ca FUN_146ecc7ca body=824 status=ok
// SIG undefined FUN_146ecc7ca(void)

void FUN_146ecc7ca(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar1 = DAT_14c996af0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446ddc76(&local_70,"Proximity",1);
  cVar2 = FUN_140498cd4(param_2,local_70,uVar1);
  uVar1 = DAT_14c996af0;
  if (cVar2 == '\0') {
    local_80 = DAT_14c996af0;
    local_78 = 1;
    FUN_1446ddc76(&local_88,"Proximity",1);
    FUN_146eb114a(param_2,local_88,uVar1,&local_80);
  }
  uVar1 = DAT_14c996af0;
  FUN_1446ddc76(&local_90,"Proximity",1);
  lVar3 = FUN_146eb57a6(param_2,local_90,uVar1);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      FUN_145be27ca(*(longlong *)(lVar3 + 0x10) + lVar7,*(longlong *)(param_1 + 0x30) + lVar7);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x50;
    } while (lVar5 < *(int *)(param_1 + 0x38));
    local_94 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      local_c8 = param_1;
      do {
        lVar7 = *(longlong *)(local_c8 + 0x20);
        lVar4 = (longlong)local_94;
        lVar5 = lVar7 + lVar4 * 0x1b8;
        lVar10 = lVar5 + 0x178;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = lVar10;
        if (*(int *)(lVar5 + 400) != 0) {
          FUN_1449c0562(&local_68);
        }
        lVar7 = lVar7 + lVar4 * 0x1b8;
        plVar8 = (longlong *)(lVar7 + 0x168);
        local_a8 = local_58;
        local_a0 = local_50;
        local_9c = local_4c;
        local_b8 = local_68;
        local_b0 = local_60;
        uVar6 = *(uint *)(lVar7 + 400);
        local_68 = CONCAT44(1 << ((byte)uVar6 & 0x1f),(int)uVar6 >> 5);
        local_58 = CONCAT44(uVar6,-1 << ((byte)uVar6 & 0x1f));
        local_50 = uVar6 & 0xffffffe0;
        local_c0 = plVar8;
        local_60 = lVar10;
        if (*(uint *)(lVar7 + 400) != uVar6) {
          FUN_1449c0562(&local_68);
          uVar6 = local_58._4_4_;
        }
        lVar5 = local_60;
        if ((local_c0 != plVar8 || local_b0 != local_60) || local_a8._4_4_ != uVar6) {
          do {
            if (*(char *)(*local_c0 + 4 + (longlong)(int)local_a8._4_4_ * 0x10) == '\x01') {
              piVar9 = (int *)(*local_c0 + (longlong)(int)local_a8._4_4_ * 0x10);
              FUN_1447cbafe((longlong)local_94 * 0x50 + *(longlong *)(lVar3 + 0x10),&local_68,piVar9
                            ,0);
              FUN_1447cbafe((longlong)*piVar9 * 0x50 + *(longlong *)(lVar3 + 0x10),&local_68,
                            &local_94);
            }
            local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
            FUN_1449c0562(&local_b8);
          } while (local_c0 != plVar8 || (local_b0 != lVar5 || local_a8._4_4_ != uVar6));
        }
        local_94 = local_94 + 1;
      } while (local_94 < *(int *)(local_c8 + 0x38));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146eccb04 FUN_146eccb04 body=99 status=ok
// SIG undefined FUN_146eccb04(void)

void FUN_146eccb04(longlong *param_1)

{
  FUN_140f35b7a(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_146ed2c4e(param_1[4],(int)param_1[5]);
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



// FUNCTION 146eccb68 FUN_146eccb68 body=138 status=ok
// SIG undefined FUN_146eccb68(void)

void FUN_146eccb68(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1401a2d6a(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_140555802(param_1,iVar3);
      }
      lVar4 = *param_1;
      lVar12 = (longlong)iVar3 * 0x38;
      *(undefined8 *)(lVar4 + 0x30 + lVar12) = *(undefined8 *)(param_2 + 0xc);
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      uVar9 = *(undefined8 *)(param_2 + 4);
      uVar10 = *(undefined8 *)(param_2 + 6);
      uVar11 = *(undefined8 *)(param_2 + 10);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      *puVar2 = *(undefined8 *)(param_2 + 8);
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar1 = (undefined4 *)(lVar4 + lVar12);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146eccbf3 FUN_146eccbf3 body=68 status=ok
// SIG undefined FUN_146eccbf3(void)

ulonglong FUN_146eccbf3(longlong *param_1,double param_2)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_1[1];
  uVar2 = 0;
  if ((0 < (longlong)uVar4) && (param_2 < (double)*(float *)(*param_1 + -0x18 + uVar4 * 0x18))) {
    pfVar3 = (float *)(*param_1 + uVar4 * 0x18 + -0x30);
    do {
      if (uVar4 < 2) {
        return 0;
      }
      fVar1 = *pfVar3;
      uVar4 = uVar4 - 1;
      pfVar3 = pfVar3 + -6;
    } while (param_2 < (double)fVar1);
    uVar2 = uVar4 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 146eccc37 FUN_146eccc37 body=108 status=ok
// SIG undefined FUN_146eccc37(void)

ulonglong FUN_146eccc37(longlong *param_1,double *param_2)

{
  float fVar1;
  ulonglong uVar2;
  float *pfVar3;
  ulonglong uVar4;
  double dVar5;
  
  uVar4 = (ulonglong)(int)param_1[1];
  uVar2 = 0;
  if (0 < (longlong)uVar4) {
    dVar5 = (param_2[5] - param_2[2]) * (param_2[4] - param_2[1]) * (param_2[3] - *param_2);
    if (dVar5 < (double)*(float *)(*param_1 + -0x18 + uVar4 * 0x18)) {
      pfVar3 = (float *)(*param_1 + uVar4 * 0x18 + -0x30);
      do {
        if (uVar4 < 2) {
          return 0;
        }
        fVar1 = *pfVar3;
        uVar4 = uVar4 - 1;
        pfVar3 = pfVar3 + -6;
      } while (dVar5 < (double)fVar1);
      uVar2 = uVar4 & 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 146eccca4 FUN_146eccca4 body=251 status=ok
// SIG undefined FUN_146eccca4(void)

void FUN_146eccca4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146ecccb4;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146ecccb4:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146eccd9f FUN_146eccd9f body=352 status=ok
// SIG undefined FUN_146eccd9f(void)

void FUN_146eccd9f(undefined8 param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = DAT_14c9974a8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446ddc76(&local_38,&DAT_149f64d7c,1);
  cVar3 = FUN_140498cd4(param_1,local_38,uVar2);
  if (cVar3 == '\0') {
    FUN_1446ddc76(&local_40,&DAT_149e02088,1);
    uVar2 = DAT_14c9974a8;
    local_50 = local_40;
    local_48 = 0;
    FUN_1446ddc76(&local_58,&DAT_149f64d7c,1);
    FUN_146eccf00(param_1,local_58,uVar2,&local_50);
  }
  else if (param_3 == '\0') goto LAB_146eccdfc;
  uVar2 = DAT_14c9974a8;
  FUN_1446ddc76(&local_60,&DAT_149f64d7c,1);
  plVar5 = (longlong *)FUN_146eccf46(param_1,local_60,uVar2);
  iVar4 = (**(code **)(*plVar5 + 0x60))(plVar5);
  if (param_2 < iVar4) {
    lVar6 = (longlong)param_2;
    lVar7 = lVar6 << 4;
    do {
      FUN_1412e3d1e(&local_70);
      puVar1 = (undefined4 *)(plVar5[2] + lVar7);
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
      lVar6 = lVar6 + 1;
      iVar4 = (**(code **)(*plVar5 + 0x60))(plVar5);
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < iVar4);
  }
LAB_146eccdfc:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146eccf00 FUN_146eccf00 body=70 status=ok
// SIG undefined FUN_146eccf00(void)

void FUN_146eccf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ee37c4(param_1,param_2,param_3,param_4);
  }
  FUN_146eccf46(param_1,param_2,param_3);
  return;
}



// FUNCTION 146eccf46 FUN_146eccf46 body=251 status=ok
// SIG undefined FUN_146eccf46(void)

void FUN_146eccf46(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146eccf56;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146eccf56:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146ecd042 FUN_146ecd042 body=190 status=ok
// SIG undefined FUN_146ecd042(void)

undefined8 * FUN_146ecd042(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149f64e30;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_14062fde4(param_2,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecd102 FUN_146ecd102 body=114 status=ok
// SIG undefined FUN_146ecd102(void)

longlong * FUN_146ecd102(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x18))();
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_14062fde4(param_2,param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecd176 FUN_146ecd176 body=72 status=ok
// SIG undefined FUN_146ecd176(void)

undefined8 * FUN_146ecd176(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_149f64e30;
  FUN_146ed41a4(param_1 + 1,param_2 + 8);
  FUN_146ed43c6(param_1 + 0xb,param_2 + 0x58);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 146ecd1be FUN_146ecd1be body=859 status=ok
// SIG undefined FUN_146ecd1be(void)

void FUN_146ecd1be(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8 [3];
  int local_dc;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 != 0) {
    local_dc = FUN_1401f66f6(param_1,*param_2);
    FUN_146eb9b24(param_3,&local_dc);
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_146eb9a52(param_3,&local_dc);
    local_120 = (longlong *)*param_3;
    local_98 = 0;
    iVar11 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(param_3 + 1));
    FUN_146bc855c();
    plVar7 = (longlong *)(param_1 + 8);
    local_130 = param_1 + 0x18;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    local_c0 = 0;
    local_d0 = local_130;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_d8);
      iVar11 = *(int *)(param_1 + 0x30);
    }
    local_108 = local_c8;
    uVar4 = local_108;
    local_100 = local_c0;
    local_fc = local_bc;
    local_118 = local_d8;
    local_110 = local_d0;
    local_108._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    iVar5 = local_108._4_4_;
    local_128 = param_1;
    local_120 = plVar7;
    if ((local_108._4_4_ != iVar11) || (local_108 = uVar4, local_d0 != local_130)) {
      do {
        local_108 = uVar4;
        lVar1 = *local_120 + (longlong)iVar5 * 0x40;
        lVar10 = lVar1 + 0x10;
        lVar6 = *param_2;
        lVar8 = *local_120 + (longlong)iVar5 * 0x40;
        if ((*(longlong *)(lVar1 + 0x14) == lVar6 & (byte)((ulonglong)param_4 >> 8) & 1) == 1) {
          FUN_1448c236a(lVar10);
          *(undefined1 *)(*(longlong *)(lVar8 + 0x30) + 8) = 1;
          local_d8 = CONCAT44(local_d8._4_4_,local_dc - iVar2);
          local_138 = &local_b8;
          (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x80))
                    (*(longlong **)(lVar8 + 0x30),local_f8,&local_d8,param_3);
          lVar6 = *param_2;
        }
        if (*(longlong *)(lVar8 + 8) == lVar6) {
          FUN_1448c236a(lVar10);
          *(undefined1 *)(*(longlong *)(lVar8 + 0x30) + 8) = 1;
          (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x58))(*(longlong **)(lVar8 + 0x30),param_3);
        }
        local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~local_118._4_4_);
        FUN_1449c0562(&local_118);
        iVar5 = local_108._4_4_;
        uVar4 = local_108;
      } while (local_120 != plVar7 || (local_110 != local_130 || local_108._4_4_ != iVar11));
    }
    if (*(int *)(local_128 + 0x60) != *(int *)(local_128 + 0x8c)) {
      lVar1 = *param_2;
      uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar9 = (uint)lVar1 & 0xffff;
      lVar8 = local_128 + 0x90;
      if (*(longlong *)(local_128 + 0x98) != 0) {
        lVar8 = *(longlong *)(local_128 + 0x98);
      }
      iVar11 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(local_128 + 0xa0) - 1U &
                                (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          plVar7 = (longlong *)(*(longlong *)(local_128 + 0x58) + (longlong)iVar11 * 0x14);
          if (*plVar7 == lVar1) goto LAB_146ecd454;
          iVar11 = *(int *)((longlong)plVar7 + 0xc);
        } while (iVar11 != -1);
      }
    }
    plVar7 = (longlong *)0x0;
LAB_146ecd454:
    *(int *)(plVar7 + 1) = (int)plVar7[1] - iVar2;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_b8);
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ecd51a FUN_146ecd51a body=638 status=ok
// SIG undefined FUN_146ecd51a(void)

void FUN_146ecd51a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined2 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78 [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_3[1] != 0) {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar4 = *param_2;
      uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar7 = (uint)lVar4 & 0xffff;
      lVar5 = param_1 + 0x90;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
      iVar8 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0xa0) - 1U &
                               (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x14);
          if (*plVar6 == lVar4) goto LAB_146ecd5e8;
          iVar8 = *(int *)((longlong)plVar6 + 0xc);
        } while (iVar8 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_146ecd5e8:
    iVar8 = (int)plVar6[1];
    local_78[0] = 0;
    local_78[1] = 0;
    local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0xffffffff);
    FUN_1448156a8(local_78,&local_a0,iVar8);
    if (0 < (longlong)iVar8) {
      lVar4 = 0;
      do {
        *(int *)(local_78[0] + lVar4 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (iVar8 != lVar4);
    }
    if (0 < (int)param_4[1]) {
      lVar4 = 0;
      do {
        *(undefined4 *)(local_78[0] + (longlong)*(int *)(*param_3 + lVar4 * 4) * 4) =
             *(undefined4 *)(*param_4 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_4[1]);
    }
    plVar6 = (longlong *)(param_1 + 8);
    lVar4 = param_1 + 0x18;
    local_78[2] = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar8 = 0;
    local_78[3] = lVar4;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(local_78 + 2);
      iVar8 = *(int *)(param_1 + 0x30);
    }
    local_88 = local_58;
    uVar2 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_78[2];
    local_90 = local_78[3];
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar3 = local_88._4_4_;
    local_a0 = plVar6;
    if ((local_88._4_4_ != iVar8) || (local_88 = uVar2, local_78[3] != lVar4)) {
      do {
        local_88 = uVar2;
        if (*(longlong *)(*local_a0 + 0x14 + (longlong)iVar3 * 0x40) == *param_2) {
          lVar5 = *local_a0 + (longlong)iVar3 * 0x40;
          FUN_1448c236a(lVar5 + 0x10);
          *(undefined1 *)(*(longlong *)(lVar5 + 0x30) + 8) = 1;
          (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x18))(*(longlong **)(lVar5 + 0x30),local_78)
          ;
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar3 = local_88._4_4_;
        uVar2 = local_88;
      } while (local_a0 != plVar6 || (local_90 != lVar4 || local_88._4_4_ != iVar8));
    }
    FUN_146ecd1be(param_1,param_2,param_3,param_5);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ecd79a FUN_146ecd79a body=157 status=ok
// SIG undefined FUN_146ecd79a(void)

void FUN_146ecd79a(longlong *param_1,undefined8 param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a127d2(local_38,param_3,1);
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      *(int *)(local_38[0] + uVar1 * 4) = param_4 + (int)uVar1;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_38,0x101);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecd838 FUN_146ecd838 body=250 status=ok
// SIG undefined FUN_146ecd838(void)

undefined8 FUN_146ecd838(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) {
          if ((undefined1 *)(lVar1 + 0x10) == (undefined1 *)0x0 || lVar1 == 0) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)lVar5 >> 8),*(undefined1 *)(lVar1 + 0x10));
        }
        iVar4 = *(int *)(lVar1 + 0x38);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ecd932 FUN_146ecd932 body=371 status=ok
// SIG undefined FUN_146ecd932(void)

longlong * FUN_146ecd932(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = param_2;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar5 = (longlong)iStack_74;
      if (*(longlong *)(lVar4 + 8 + lVar5 * 0x40) == param_3) {
        iVar3 = (int)local_98[1];
        *(uint *)(local_98 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)local_98 + 0xc) < iVar3 + 1U) {
          FUN_1446f84a2(local_98,iVar3);
        }
        *(undefined8 *)(*local_98 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar4 + lVar5 * 0x40);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecdaa6 FUN_146ecdaa6 body=125 status=ok
// SIG undefined FUN_146ecdaa6(void)

longlong * FUN_146ecdaa6(undefined8 param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_1409bcbd8(param_1,param_3,param_4);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a127d2(param_2,iVar1 + param_3,1);
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      *(int *)(*param_2 + uVar4 * 4) = iVar1 + (int)uVar4;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  if (0 < iVar1) {
    lVar2 = (longlong)(int)param_3;
    iVar3 = 0;
    do {
      *(int *)(*param_2 + lVar2 * 4) = iVar3;
      lVar2 = lVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (lVar2 < (int)(iVar1 + param_3));
  }
  return param_2;
}



// FUNCTION 146ecdb24 FUN_146ecdb24 body=2519 status=ok
// SIG undefined FUN_146ecdb24(void)

void FUN_146ecdb24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong **local_a8;
  undefined1 local_9c [4];
  longlong *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong uStack_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)(param_2 + 8);
  local_128 = (longlong *)(param_2 + 0x18);
  local_d8 = (longlong **)&DAT_100000000;
  local_c8 = (longlong *)&DAT_ffffffff;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  uStack_d0 = local_128;
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar20 = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    iVar20 = *(int *)(param_2 + 0x30);
  }
  local_80 = local_c8;
  plVar13 = local_80;
  uStack_78 = uStack_c0;
  uStack_90 = SUB84(local_d8,0);
  uStack_8c = local_d8._4_4_;
  uStack_88 = (undefined4)uStack_d0;
  uStack_84 = uStack_d0._4_4_;
  local_80._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  if ((local_80._4_4_ != iVar20) || (uStack_d0 != local_128)) {
    local_120 = (longlong *)(param_2 + 0x40);
    local_110 = param_1 + 0x40;
    bVar22 = 1;
    iVar9 = local_80._4_4_;
    local_98 = plVar1;
    local_80 = plVar13;
    do {
      lVar3 = *(longlong *)(*local_98 + (longlong)iVar9 * 0x40);
      lVar12 = *(longlong *)(*local_98 + 8 + (longlong)iVar9 * 0x40);
      cVar6 = FUN_140498cd4(param_1,lVar3,lVar12);
      if (cVar6 != '\0') {
        uVar21 = (uint)lVar12;
        uVar15 = (uint)lVar3;
        iVar9 = (int)((ulonglong)lVar12 >> 0x20);
        iVar10 = (int)((ulonglong)lVar3 >> 0x20);
        uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar18 = (uint)((ulonglong)lVar3 >> 0x10);
        if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x3c)) {
LAB_146ecdc3a:
          lVar11 = 0;
        }
        else {
          local_118 = CONCAT71(local_118._1_7_,bVar22);
          uVar23 = iVar10 + (uVar15 << 0x10 | uVar15 & 0xffff) + (uVar18 << 0x13 | uVar18 & 0xffff)
                   + ((uVar15 & 0xffff) >> 4);
          plVar13 = *(longlong **)(param_2 + 0x48);
          if (*(longlong **)(param_2 + 0x48) == (longlong *)0x0) {
            plVar13 = local_120;
          }
          iVar7 = *(int *)((longlong)plVar13 +
                          (ulonglong)
                          (*(int *)(param_2 + 0x50) - 1U &
                          ((uVar21 << 0x10 | uVar21 & 0xffff) + iVar9 +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar21 & 0xffff) >> 4) +
                           uVar23 * 0x40 + (uVar23 >> 2) + 0x9e3779b9 ^ uVar23)) * 4);
          if (iVar7 != -1) {
            lVar17 = *plVar1;
            do {
              lVar16 = (longlong)iVar7 * 0x40;
              lVar11 = lVar17 + lVar16;
              if ((*(longlong *)(lVar17 + lVar16) == lVar3) &&
                 (*(longlong *)(lVar17 + 8 + lVar16) == lVar12)) goto LAB_146ecdc3c;
              iVar7 = *(int *)(lVar11 + 0x38);
            } while (iVar7 != -1);
            goto LAB_146ecdc3a;
          }
          lVar11 = 0;
        }
LAB_146ecdc3c:
        if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
          uVar18 = iVar10 + (uVar15 << 0x10 | uVar15 & 0xffff) +
                   ((uVar15 & 0xffff) >> 4) + (uVar18 << 0x13 | uVar18 & 0xffff);
          lVar17 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar17 = local_110;
          }
          iVar9 = *(int *)(lVar17 + (ulonglong)
                                    (*(int *)(param_1 + 0x50) - 1U &
                                    ((uVar21 << 0x10 | uVar21 & 0xffff) + iVar9 +
                                     ((uVar21 & 0xffff) >> 4) + (uVar4 << 0x13 | uVar4 & 0xffff) +
                                     uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)) * 4);
          if (iVar9 != -1) {
            lVar17 = *(longlong *)(param_1 + 8);
            do {
              lVar14 = (longlong)iVar9 * 0x40;
              lVar16 = lVar17 + lVar14;
              if ((*(longlong *)(lVar17 + lVar14) == lVar3) &&
                 (*(longlong *)(lVar17 + 8 + lVar14) == lVar12)) goto LAB_146ecdc4a;
              iVar9 = *(int *)(lVar16 + 0x38);
            } while (iVar9 != -1);
          }
        }
        lVar16 = 0;
LAB_146ecdc4a:
        bVar22 = bVar22 & *(char *)(lVar11 + 0x10) == *(char *)(lVar16 + 0x10);
      }
      local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
      FUN_1449c0562(&uStack_90);
      iVar9 = local_80._4_4_;
    } while (local_98 != plVar1 ||
             ((longlong *)CONCAT44(uStack_84,uStack_88) != local_128 || local_80._4_4_ != iVar20));
    plVar13 = local_80;
    if (bVar22 == 0) goto LAB_146ecde8a;
  }
  local_80 = plVar13;
  uStack_78 = 0;
  local_70 = 0;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_108 = (longlong *)0x0;
  plStack_100 = (longlong *)0x0;
  if (*(int *)(param_2 + 0x60) != *(int *)(param_2 + 0x8c)) {
    FUN_140d70cda(param_2 + 0x58,&local_108);
    if ((longlong)(int)plStack_100 != 0) {
      plVar13 = local_108 + (int)plStack_100;
      plVar19 = local_108;
      do {
        lVar3 = *plVar19;
        if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
          uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar18 = (uint)lVar3 & 0xffff;
          lVar12 = *(longlong *)(param_1 + 0x98);
          if (*(longlong *)(param_1 + 0x98) == 0) {
            lVar12 = param_1 + 0x90;
          }
          iVar20 = *(int *)(lVar12 + (ulonglong)
                                     (*(int *)(param_1 + 0xa0) - 1U &
                                     (int)((ulonglong)lVar3 >> 0x20) +
                                     ((uint)lVar3 << 0x10 | uVar18) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4)) * 4);
          if (iVar20 != -1) {
            iVar9 = iVar20;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14) == lVar3) {
                iVar9 = FUN_1401f66f6(param_2,lVar3);
                if (iVar9 != 0) {
                  uVar8 = FUN_1401f66f6(param_2,lVar3);
                  FUN_146ecdaa6(param_1,&local_b0,uVar8,lVar3);
                  local_d8 = (longlong **)plVar19;
                  uStack_d0 = &local_b0;
                  FUN_146ee3aac(&local_98,local_9c,&local_d8);
                  if (local_b0 != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_146ece3ac;
                }
                break;
              }
              iVar9 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x14 + 0xc);
            } while (iVar9 != -1);
            if (iVar20 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar20 * 0x14) == lVar3)
                goto LAB_146ece3ac;
                iVar20 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar20 * 0x14 + 0xc);
              } while (iVar20 != -1);
            }
          }
        }
        FUN_140b203e2(param_1,lVar3);
        lVar3 = *plVar19;
        uVar8 = FUN_1401f66f6(param_2,lVar3);
        FUN_1409bcbd8(param_1,uVar8,lVar3);
LAB_146ece3ac:
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar13);
    }
    if (local_108 != (longlong *)0x0) {
      FUN_1400020a8(local_108);
    }
  }
  local_108 = (longlong *)0x100000000;
  local_f8._0_4_ = 0xffffffff;
  local_f8._4_4_ = 0;
  local_f0 = 0;
  iVar20 = 0;
  plStack_100 = (longlong *)&uStack_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_108);
    iVar20 = local_70;
  }
  uStack_c0._0_4_ = (uint)local_f8;
  uStack_c0._4_4_ = local_f8._4_4_;
  local_b8 = local_f0;
  local_b4 = uStack_ec;
  uStack_d0 = local_108;
  local_c8 = plStack_100;
  local_d8 = &local_98;
  if ((local_f8._4_4_ != iVar20) || (plStack_100 != (longlong *)&uStack_88)) {
    do {
      FUN_146ece4fc(param_1,(*local_d8)[(longlong)uStack_c0._4_4_ * 4]);
      uStack_c0._0_4_ = (uint)uStack_c0 & ~uStack_d0._4_4_;
      FUN_1449c0562(&uStack_d0);
    } while (local_d8 != &local_98 ||
             (local_c8 != (longlong *)&uStack_88 || uStack_c0._4_4_ != iVar20));
  }
  local_108 = (longlong *)&DAT_100000000;
  plStack_100 = local_128;
  local_f8 = 0xffffffff;
  local_f0 = 0;
  iVar20 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_1449c0562(&local_108);
    iVar20 = *(int *)(param_2 + 0x30);
  }
  uStack_c0 = local_f8;
  uVar5 = uStack_c0;
  local_b8 = local_f0;
  local_b4 = uStack_ec;
  uStack_d0 = local_108;
  local_c8 = plStack_100;
  uStack_c0._4_4_ = (int)(local_f8 >> 0x20);
  local_d8 = (longlong **)plVar1;
  if ((uStack_c0._4_4_ != iVar20) || (plStack_100 != local_128)) {
    local_120 = (longlong *)(param_1 + 8);
    local_118 = param_1 + 0x40;
    iVar9 = uStack_c0._4_4_;
    uStack_c0 = uVar5;
    do {
      lVar12 = (longlong)*local_d8;
      lVar11 = (longlong)iVar9 * 0x40;
      lVar3 = lVar12 + lVar11;
      lVar17 = *(longlong *)(lVar12 + lVar11);
      lVar12 = *(longlong *)(lVar12 + 8 + lVar11);
      cVar6 = FUN_140498cd4(param_1,lVar17,lVar12);
      if (cVar6 == '\0') {
        FUN_146ece748(&local_108,lVar3 + 0x10);
        iVar9 = FUN_1401f66f6(param_1,lVar12);
        iVar10 = (**(code **)(*local_e8 + 0x60))();
        if (iVar10 < iVar9) {
          FUN_1448c236a(&local_108);
          (**(code **)*local_e8)(local_e8,iVar9);
        }
        local_b0 = lVar3;
        local_a8 = &local_108;
        FUN_140d6f98c(local_120,local_9c,&local_b0);
        plVar13 = (longlong *)CONCAT44(uStack_ec,local_f0);
        if (plVar13 != (longlong *)0x0) {
          plVar19 = plVar13 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar13)(plVar13);
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
          uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
          uVar15 = (uint)lVar12 & 0xffff;
          uVar18 = (uint)((ulonglong)lVar17 >> 0x10);
          uVar21 = (uint)lVar17 & 0xffff;
          uVar18 = (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar21) +
                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4);
          lVar11 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar11 = local_118;
          }
          iVar9 = *(int *)(lVar11 + (ulonglong)
                                    (*(int *)(param_1 + 0x50) - 1U &
                                    (((uint)lVar12 << 0x10 | uVar15) +
                                     (int)((ulonglong)lVar12 >> 0x20) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) +
                                     uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)) * 4);
          if (iVar9 != -1) {
            lVar11 = *local_120;
            do {
              lVar14 = (longlong)iVar9 * 0x40;
              lVar16 = lVar11 + lVar14;
              if ((*(longlong *)(lVar11 + lVar14) == lVar17) &&
                 (*(longlong *)(lVar11 + 8 + lVar14) == lVar12)) goto LAB_146ece14b;
              iVar9 = *(int *)(lVar16 + 0x38);
            } while (iVar9 != -1);
          }
        }
        lVar16 = 0;
LAB_146ece14b:
        FUN_1448c236a(lVar16 + 0x10);
        plVar13 = *(longlong **)(lVar16 + 0x30);
        uVar8 = (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x60))();
        local_138 = 0;
        (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(lVar3 + 0x30),0,uVar8);
      }
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
      FUN_1449c0562(&uStack_d0);
      iVar9 = uStack_c0._4_4_;
      uVar5 = uStack_c0;
    } while (local_d8 != (longlong **)plVar1 || (local_c8 != local_128 || uStack_c0._4_4_ != iVar20)
            );
  }
  uStack_c0 = uVar5;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14575edd2(&local_98);
LAB_146ecde8a:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ece4fc FUN_146ece4fc body=587 status=ok
// SIG undefined FUN_146ece4fc(void)

void FUN_146ece4fc(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar6 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x14);
        if (*plVar5 == param_2) goto LAB_146ece53b;
        iVar4 = *(int *)((longlong)plVar5 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_146ece53b:
  iVar4 = (int)plVar5[1];
  local_78[0] = 0;
  local_78[1] = 0;
  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0xffffffff);
  FUN_1448156a8(local_78,&local_a0,iVar4);
  if (0 < (longlong)iVar4) {
    lVar6 = 0;
    do {
      *(int *)(local_78[0] + (longlong)*(int *)(*param_3 + lVar6 * 4) * 4) = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar4 != lVar6);
  }
  plVar5 = (longlong *)(param_1 + 8);
  lVar6 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar6;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar5;
  if ((iStack_54 != iVar4) || (uStack_60 != lVar6)) {
    do {
      lVar1 = *local_a0 + (longlong)iStack_84 * 0x40;
      lVar2 = *local_a0 + (longlong)iStack_84 * 0x40;
      lVar8 = lVar2 + 0x10;
      if (*(longlong *)(lVar2 + 0x14) == param_2) {
        FUN_1448c236a(lVar8);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x30) + 8) = 1;
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x18))(*(longlong **)(lVar1 + 0x30),local_78);
      }
      if (*(longlong *)(lVar1 + 8) == param_2) {
        FUN_1448c236a(lVar8);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x30) + 8) = 1;
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x10))(*(longlong **)(lVar1 + 0x30),param_3);
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar5 || (CONCAT44(uStack_8c,uStack_90) != lVar6 || iStack_84 != iVar4));
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ece748 FUN_146ece748 body=409 status=ok
// SIG undefined FUN_146ece748(void)

undefined1 * FUN_146ece748(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    plVar2 = (longlong *)(param_1 + 0x18);
    if (param_2[0xd] == '\x01') {
      puVar8 = (undefined8 *)FUN_140d70568();
      *(undefined8 **)(param_1 + 0x20) = puVar8;
      uVar7 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x60))();
      (**(code **)*puVar8)(puVar8,uVar7);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      lVar4 = *(longlong *)(param_1 + 0x20);
      local_48 = lVar4;
      local_40 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_40[1] = (longlong)&DAT_100000001;
      *local_40 = (longlong)&PTR_FUN_149f6ac80;
      local_40[2] = lVar4;
      if (plVar1 != &local_48) {
        *plVar1 = lVar4;
        local_48 = 0;
        FUN_145708362(plVar2,&local_40);
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        plVar2 = local_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)*local_40)(local_40);
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      param_1[0xd] = 0;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x10);
      lVar5 = *(longlong *)(param_2 + 0x18);
      if (lVar5 == 0) {
        *plVar1 = lVar4;
        *plVar2 = 0;
      }
      else {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        plVar6 = (longlong *)*plVar2;
        *plVar1 = lVar4;
        *plVar2 = lVar5;
        if (plVar6 != (longlong *)0x0) {
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ece8e2 FUN_146ece8e2 body=430 status=ok
// SIG undefined FUN_146ece8e2(void)

void FUN_146ece8e2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 8);
  lVar3 = param_1 + 0x18;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar3)) {
    do {
      if (*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x40) == param_2) {
        lVar6 = *local_88 + (longlong)iStack_6c * 0x40;
        FUN_1448c236a(lVar6 + 0x10);
        (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x88))();
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar5));
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x14);
        if (*plVar2 == param_2) goto LAB_146ece9e4;
        iVar5 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar2 = (longlong *)0x0;
LAB_146ece9e4:
  *(undefined4 *)(plVar2 + 1) = 0;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ecea92 FUN_146ecea92 body=1425 status=ok
// SIG undefined FUN_146ecea92(void)

undefined8 * FUN_146ecea92(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  int local_19c;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_168 [16];
  longlong *local_158;
  ulonglong *local_150;
  longlong local_148 [2];
  void *local_138;
  int local_130;
  longlong local_128;
  longlong *local_120;
  int local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  longlong *local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *param_2 = 0;
  param_2[1] = 0;
  local_1a8 = param_2;
  uVar2 = FUN_146ecf024();
  FUN_1448f870c(local_b8,uVar2);
  FUN_14146ec20(&local_88,local_b8);
  local_a0 = local_68;
  local_a8 = &local_88;
  FUN_1407adb6e(&local_98);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140230a2e(&local_88,L"All attributes [{0} bytes]\n",&local_98);
  iVar4 = local_80 + -1;
  if (local_80 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(local_1a8,local_88,iVar4);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    FUN_140d70cda(param_1 + 0x58,&local_c8);
    if ((longlong)(int)uStack_c0 != 0) {
      plVar9 = local_c8 + (int)uStack_c0;
      local_188 = param_1 + 0x40;
      plVar10 = local_c8;
      local_198 = plVar9;
      do {
        lVar1 = *plVar10;
        local_d0 = lVar1;
        FUN_1400021e4(&local_d0,local_100);
        FUN_14146ec20(&local_88,local_100);
        uVar2 = FUN_1401f66f6(param_1,lVar1);
        FUN_1448f870c(local_110,uVar2);
        FUN_14146ec20(local_68,local_110);
        local_e8 = &local_48;
        local_f0 = &local_88;
        FUN_1407adb6e(&local_e0,&local_f0);
        lVar6 = 0x40;
        do {
          if (*(longlong *)((longlong)&local_98 + lVar6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        FUN_140230a2e(&local_88,L"{0} - [{1} elements]\n",&local_e0);
        iVar4 = local_80 + -1;
        if (local_80 == 0) {
          iVar4 = 0;
        }
        FUN_1400020e8(local_1a8,local_88,iVar4);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_146ecd932(param_1,&local_120,lVar1);
        if ((longlong)local_118 != 0) {
          local_180 = local_120 + local_118;
          uVar8 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar3 = (uint)lVar1 & 0xffff;
          local_19c = (uVar3 >> 4) +
                      (int)((ulonglong)lVar1 >> 0x20) + (uint)lVar1 * 0x10000 + uVar3 +
                      (uVar8 << 0x13 | uVar8 & 0xffff) + -0x61c88647;
          plVar11 = local_120;
          local_190 = plVar10;
          do {
            local_128 = *plVar11;
            if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
              uVar8 = (uint)((ulonglong)local_128 >> 0x10);
              uVar3 = (uint)local_128 & 0xffff;
              uVar8 = (int)((ulonglong)local_128 >> 0x20) + ((uint)local_128 << 0x10 | uVar3) +
                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar3 >> 4);
              lVar6 = *(longlong *)(param_1 + 0x48);
              if (*(longlong *)(param_1 + 0x48) == 0) {
                lVar6 = local_188;
              }
              iVar4 = *(int *)(lVar6 + (ulonglong)
                                       (*(int *)(param_1 + 0x50) - 1U &
                                       ((uVar8 >> 2) + uVar8 * 0x40 + local_19c ^ uVar8)) * 4);
              if (iVar4 != -1) {
                lVar6 = *(longlong *)(param_1 + 8);
                do {
                  lVar7 = (longlong)iVar4 * 0x40;
                  lVar5 = lVar6 + lVar7;
                  if ((*(longlong *)(lVar6 + lVar7) == local_128) &&
                     (*(longlong *)(lVar6 + 8 + lVar7) == lVar1)) goto LAB_146eced8d;
                  iVar4 = *(int *)(lVar5 + 0x38);
                } while (iVar4 != -1);
              }
            }
            lVar5 = 0;
LAB_146eced8d:
            uVar2 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x40))();
            FUN_1448f870c(&local_138,uVar2);
            FUN_1400021e4(&local_128,local_168);
            FUN_14146ec20(&local_88,local_168);
            _Src = local_138;
            local_178 = (void *)0x0;
            lVar6 = (longlong)local_130;
            local_170 = local_130;
            if (lVar6 == 0) {
              local_16c = 0;
            }
            else {
              FUN_1446dd670(&local_178,local_130,0);
              memcpy(local_178,_Src,lVar6 * 2);
            }
            FUN_14146ec20(local_68,&local_178);
            local_150 = &local_48;
            local_158 = &local_88;
            FUN_1407adb6e(local_148,&local_158);
            lVar6 = 0x40;
            do {
              if (*(longlong *)((longlong)&local_98 + lVar6) != 0) {
                FUN_1400020a8();
              }
              lVar6 = lVar6 + -0x20;
            } while (lVar6 != 0);
            FUN_140230a2e(&local_88,L" |-- {0} [{1} bytes]\n",local_148);
            FUN_1400020e8(local_1a8,local_88);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            FUN_1407adb3e(local_148[0]);
            if (local_148[0] != 0) {
              FUN_1400020a8();
            }
            if (local_138 != (void *)0x0) {
              FUN_1400020a8();
            }
            plVar11 = plVar11 + 1;
            plVar9 = local_198;
            plVar10 = local_190;
          } while (plVar11 != local_180);
        }
        if (local_120 != (longlong *)0x0) {
          FUN_1400020a8(local_120);
        }
        FUN_1407adb3e(local_e0,local_d8);
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
    }
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8(local_c8);
    }
  }
  FUN_1407adb3e(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return local_1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecf024 FUN_146ecf024 body=329 status=ok
// SIG undefined FUN_146ecf024(void)

longlong FUN_146ecf024(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x34);
  iVar7 = 0;
  lVar6 = (longlong)*(int *)(param_1 + 0x50) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x50) < 2) {
    lVar6 = 0;
  }
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_58);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  lVar6 = (longlong)iVar3 * 0x40 + (ulonglong)(iVar4 + 0x1fU >> 5) * 4 + lVar6;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar7) || (local_50 != lVar2)) {
    do {
      lVar5 = (**(code **)(**(longlong **)(*local_80 + 0x30 + (longlong)iStack_64 * 0x40) + 0x40))()
      ;
      lVar6 = lVar6 + lVar5;
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar7));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecf16e FUN_146ecf16e body=310 status=ok
// SIG undefined FUN_146ecf16e(void)

void FUN_146ecf16e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  local_40 = 1;
  FUN_146ecf2a6(param_1,DAT_14c9974b0,DAT_14c9974a8);
  uVar1 = DAT_14c9974a8;
  local_58 = 0;
  local_50 = 1;
  FUN_1446ddc76(&local_60,"BoneName",1);
  FUN_14062f512(param_1,local_60,uVar1,&local_58);
  uVar1 = DAT_14c9974a8;
  local_70 = 0;
  local_68 = 1;
  FUN_1446ddc76(&local_78,"BoneColor",1);
  FUN_146c973be(param_1,local_78,uVar1,&local_70);
  local_88 = 0;
  local_80 = 1;
  FUN_140b1fb8c(param_1,DAT_14c9974b8,DAT_14c9974a8);
  local_98 = 0;
  local_90 = 1;
  FUN_146eb114a(param_1,DAT_14c9974c0,DAT_14c9974a8);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ecf2a6 FUN_146ecf2a6 body=70 status=ok
// SIG undefined FUN_146ecf2a6(void)

void FUN_146ecf2a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146ee4692(param_1,param_2,param_3,param_4);
  }
  FUN_146eccca4(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ecf2ec FUN_146ecf2ec body=26 status=ok
// SIG undefined FUN_146ecf2ec(void)

void FUN_146ecf2ec(undefined8 param_1)

{
  FUN_140b464dc();
  FUN_140b1d5ee(param_1);
  return;
}



// FUNCTION 146ecf306 FUN_146ecf306 body=563 status=ok
// SIG undefined FUN_146ecf306(void)

void FUN_146ecf306(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446ddc76(&local_90,"FTransformCollection",1);
  cVar4 = (**(code **)(*param_2 + 8))(param_2,local_90);
  if ((param_2 == (longlong *)0x0) || (cVar4 == '\0')) {
    FUN_146ecdb24(param_1,param_2);
  }
  else {
    iVar5 = FUN_1401f66f6(param_2,DAT_14c9974a8);
    FUN_146ecdb24(param_1,param_2);
    iVar6 = FUN_1401f66f6(param_1,DAT_14c9974a8);
    if (iVar5 < iVar6) {
      lVar8 = (longlong)iVar5;
      do {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar8 * 4);
        if (iVar2 != -1) {
          *(int *)(*(longlong *)(param_1 + 0x120) + lVar8 * 4) = iVar2 + iVar5;
        }
        lVar3 = *(longlong *)(param_1 + 0x140);
        lVar10 = lVar8 * 0x50 + 0x10 + lVar3;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = lVar10;
        if (*(int *)(lVar10 + 0x18) != 0) {
          FUN_1449c0562(&local_68);
        }
        plVar9 = (longlong *)(lVar3 + lVar8 * 0x50);
        local_78 = local_58;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        uVar7 = *(uint *)(plVar9 + 5);
        local_68 = CONCAT44(1 << ((byte)uVar7 & 0x1f),(int)uVar7 >> 5);
        local_58 = CONCAT44(uVar7,-1 << ((byte)uVar7 & 0x1f));
        local_50 = uVar7 & 0xffffffe0;
        local_90 = plVar9;
        local_60 = lVar10;
        if (*(uint *)(plVar9 + 5) != uVar7) {
          FUN_1449c0562(&local_68);
          uVar7 = local_58._4_4_;
        }
        lVar3 = local_60;
        if ((local_90 != plVar9 || local_80 != local_60) || local_78._4_4_ != uVar7) {
          do {
            piVar1 = (int *)(*local_90 + (longlong)(int)local_78._4_4_ * 0xc);
            *piVar1 = *piVar1 + iVar5;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
          } while (local_90 != plVar9 || (local_80 != lVar3 || local_78._4_4_ != uVar7));
        }
        lVar8 = lVar8 + 1;
      } while (iVar6 != (int)lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ecf53a FUN_146ecf53a body=4021 status=ok
// SIG undefined FUN_146ecf53a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ecf53a(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  double dVar19;
  longlong *plVar20;
  uint uVar21;
  int *piVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar54;
  undefined1 auVar53 [16];
  undefined1 auStack_358 [38];
  ushort local_332;
  longlong *local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [24];
  longlong *local_300;
  longlong local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  int local_2dc;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  longlong local_2a8 [2];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 *puStack_270;
  double local_268;
  ulonglong uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined8 *local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double dStack_170;
  undefined8 local_168;
  uint local_160;
  undefined4 local_15c;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((int)param_3[1] != 0) {
    if (*param_2 == DAT_14c9974a8) {
      local_332 = (ushort)param_4;
      local_300 = param_2;
      uVar11 = FUN_1401f66f6(param_1);
      local_178 = (double)CONCAT44(local_178._4_4_,uVar11);
      FUN_146eb9b24(param_3);
      plVar20 = (longlong *)(param_1 + 0x110);
      local_330 = param_3;
      if (0 < (int)param_3[1]) {
        local_2f8 = param_1 + 0xb0;
        lVar14 = 0;
        local_2f0 = plVar20;
        do {
          local_2a8[0] = 0;
          local_2a8[1] = 0;
          FUN_146eb7819(local_2f8,plVar20,local_2a8);
          iVar2 = *(int *)(*param_3 + lVar14 * 4);
          lVar25 = (longlong)iVar2;
          local_2e8 = lVar14;
          if (-1 < lVar25) {
            (**(code **)(*plVar20 + 0x60))(plVar20);
          }
          uVar12 = *(uint *)(*(longlong *)(param_1 + 0x120) + lVar25 * 4);
          uVar23 = (ulonglong)uVar12;
          (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))(plVar20);
          lVar17 = *(longlong *)(param_1 + 0x140);
          lVar14 = lVar17 + lVar25 * 0x50;
          dVar19 = (double)(lVar14 + 0x10);
          local_178 = 2.12199579096527e-314;
          local_168 = 2.12199579047121e-314;
          local_160 = 0;
          dStack_170 = dVar19;
          if (*(int *)(lVar14 + 0x28) != 0) {
            FUN_1449c0562(&local_178);
          }
          plVar20 = (longlong *)(lVar17 + lVar25 * 0x50);
          local_2c0 = local_168;
          local_2b8 = local_160;
          local_2b4 = local_15c;
          uStack_2d0 = (longlong)local_178;
          local_2c8 = dStack_170;
          uVar18 = *(uint *)(plVar20 + 5);
          local_178 = (double)CONCAT44(1 << ((byte)uVar18 & 0x1f),(int)uVar18 >> 5);
          local_168 = (double)CONCAT44(uVar18,-1 << ((byte)uVar18 & 0x1f));
          local_160 = uVar18 & 0xffffffe0;
          local_2d8 = plVar20;
          dStack_170 = dVar19;
          if (*(uint *)(plVar20 + 5) != uVar18) {
            FUN_1449c0562(&local_178);
            uVar18 = local_168._4_4_;
          }
          dVar19 = dStack_170;
          if ((local_2d8 != plVar20 || local_2c8 != dStack_170) || local_2c0._4_4_ != uVar18) {
            do {
              auVar34 = _DAT_14c8464d0;
              auVar32 = _DAT_14c8464c0;
              dVar41 = DAT_14c8464b8;
              dVar49 = DAT_14c8464b0;
              dVar38 = DAT_14c8464a8;
              dVar43 = DAT_14c8464a0;
              dVar45 = DAT_14c846498;
              dVar42 = DAT_14c846490;
              dVar36 = DAT_14c846488;
              dVar33 = DAT_14c846480;
              local_2dc = *(int *)(*local_2d8 + (longlong)(int)local_2c0._4_4_ * 0xc);
              *(undefined4 *)(*(longlong *)(param_1 + 0x120) + (longlong)local_2dc * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x120) + lVar25 * 4);
              if (-1 < (int)uVar12) {
                lVar17 = uVar23 * 0x50 + *(longlong *)(param_1 + 0x140);
                piVar22 = &local_2dc;
                FUN_1447cbafe(lVar17,&local_178,piVar22,0);
                lVar14 = uVar23 * 0x60;
                auVar53 = *(undefined1 (*) [16])(local_2a8[0] + 0x40 + lVar14);
                auVar47 = *(undefined1 (*) [16])(local_2a8[0] + 0x50 + lVar14);
                auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar53._8_8_));
                auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar53._0_8_));
                iVar16 = movmskpd((int)lVar17,auVar39);
                auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar47._8_8_));
                auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar47._0_8_));
                uVar21 = movmskpd((int)piVar22,auVar44);
                auVar32 = _DAT_14c8464c0;
                auVar34 = _DAT_14c8464d0;
                dVar33 = DAT_14c846480;
                dVar36 = DAT_14c846488;
                dVar43 = DAT_14c8464a0;
                dVar38 = DAT_14c8464a8;
                dVar49 = DAT_14c8464b0;
                dVar41 = DAT_14c8464b8;
                dVar42 = DAT_14c846490;
                dVar45 = DAT_14c846498;
                if ((uVar21 & 0x3fffffff) != 0 || iVar16 != 0) {
                  pdVar15 = (double *)(lVar14 + local_2a8[0]);
                  auVar39 = divpd(_DAT_149934d80,auVar53);
                  auVar34 = divpd(ZEXT816(0x3ff0000000000000),auVar47);
                  auVar32._0_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar53._0_8_)) &
                               auVar39._0_8_);
                  auVar32._8_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar53._8_8_)) &
                               auVar39._8_8_);
                  auVar34._0_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar47._0_8_)) &
                               auVar34._0_8_);
                  auVar34._8_8_ = 0;
                  dVar33 = -*pdVar15;
                  dVar36 = -pdVar15[1];
                  dVar42 = pdVar15[2] * -1.0;
                  dVar45 = pdVar15[3] * 1.0;
                  dVar43 = pdVar15[4] * auVar32._0_8_;
                  dVar38 = pdVar15[5] * auVar32._8_8_;
                  dVar41 = pdVar15[6] * auVar34._0_8_;
                  dVar49 = dVar38 * dVar33 - dVar36 * dVar43;
                  dVar50 = dVar41 * dVar36 - dVar42 * dVar38;
                  dVar51 = dVar43 * dVar42 - dVar33 * dVar41;
                  dVar50 = dVar50 + dVar50;
                  dVar51 = dVar51 + dVar51;
                  dVar49 = dVar49 + dVar49;
                  dVar43 = 0.0 - ((dVar49 * dVar36 - dVar51 * dVar42) + dVar45 * dVar50 + dVar43);
                  dVar38 = 0.0 - (dVar49 * *pdVar15 + dVar42 * dVar50 + dVar45 * dVar51 + dVar38);
                  dVar49 = 0.0 - (dVar45 * dVar49 + dVar41 + (dVar51 * dVar33 - dVar50 * dVar36));
                  dVar41 = 0.0;
                }
              }
              auVar53 = _DAT_149934d80;
              lVar14 = (longlong)local_2dc;
              lVar17 = lVar14 * 0x60;
              pdVar15 = (double *)(local_2a8[0] + lVar17);
              local_318._0_16_ = *(undefined1 (*) [16])(local_2a8[0] + 0x40 + lVar17);
              local_328 = *(undefined1 (*) [16])(local_2a8[0] + 0x50 + lVar17);
              dVar51 = local_328._0_8_;
              auVar47 = minpd(local_318._0_16_,auVar32);
              auVar39 = minpd(local_328,auVar34);
              auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
              auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
              iVar16 = movmskpd((int)local_2a8[0],auVar48);
              auVar47._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
              auVar47._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
              uVar21 = movmskpd((int)lVar17,auVar47);
              dVar31 = auVar34._0_8_;
              dVar50 = auVar34._8_8_;
              dVar27 = auVar32._0_8_;
              dVar30 = auVar32._8_8_;
              uVar9 = local_318._0_8_;
              uVar10 = local_318._8_8_;
              if ((uVar21 & 0x3fffffff) == 0 && iVar16 == 0) {
                dVar3 = *pdVar15;
                dVar4 = pdVar15[1];
                dVar37 = pdVar15[2];
                dVar46 = pdVar15[3];
                dVar6 = dVar4 * dVar42 * -1.0 +
                        dVar37 * dVar36 + dVar33 * dVar46 * 1.0 + dVar45 * dVar3;
                dVar7 = dVar3 * dVar42 * 1.0 +
                        dVar46 * dVar36 + dVar33 * dVar37 * -1.0 + dVar45 * dVar4;
                auVar53._0_8_ =
                     dVar46 * dVar42 * 1.0 +
                     ((dVar33 * dVar4 * 1.0 + dVar45 * dVar37) - dVar36 * dVar3);
                auVar53._8_8_ =
                     dVar37 * dVar42 * -1.0 +
                     ((dVar33 * dVar3 * -1.0 + dVar45 * dVar46) - dVar36 * dVar4);
                dVar54 = pdVar15[4] * dVar27;
                dVar5 = pdVar15[5] * dVar30;
                dVar3 = pdVar15[6] * dVar31;
                dVar4 = pdVar15[7] * dVar50;
                dVar37 = dVar5 * dVar33 - dVar36 * dVar54;
                dVar46 = dVar3 * dVar36 - dVar42 * dVar5;
                dVar52 = dVar54 * dVar42 - dVar33 * dVar3;
                dVar8 = dVar4 * dVar45 - dVar45 * dVar4;
                dVar46 = dVar46 + dVar46;
                dVar52 = dVar52 + dVar52;
                dVar37 = dVar37 + dVar37;
                dVar8 = dVar8 + dVar8;
                dVar43 = dVar43 + (dVar37 * dVar36 - dVar42 * dVar52) + dVar45 * dVar46 + dVar54;
                dVar38 = dVar38 + (dVar46 * dVar42 - dVar37 * dVar33) + dVar45 * dVar52 + dVar5;
                dVar49 = dVar49 + (dVar52 * dVar33 - dVar36 * dVar46) + dVar45 * dVar37 + dVar3;
                dVar41 = dVar41 + (dVar8 * dVar45 - dVar8 * dVar45) + dVar45 * dVar8 + dVar4;
                dVar50 = local_328._8_8_ * dVar50;
              }
              else {
                dVar41 = dVar51 * dVar31;
                dVar50 = local_328._8_8_ * dVar50;
                local_328._8_4_ = SUB84(dVar50,0);
                local_328._0_8_ = dVar41;
                local_328._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                dVar50 = dVar36 + dVar36;
                dVar52 = dVar42 + dVar42;
                dVar46 = dVar33 * (dVar33 + dVar33);
                local_1a8 = (1.0 - (dVar46 + dVar36 * dVar50)) * dVar31;
                dVar54 = (dVar33 + dVar33) * dVar45;
                dVar37 = (dVar52 * dVar36 - dVar54) * dVar31;
                dVar3 = (double)local_318._0_8_ * dVar27;
                dVar4 = (double)local_318._8_8_ * dVar30;
                local_1f8 = (longlong *)((1.0 - (dVar42 * dVar52 + dVar36 * dVar50)) * dVar27);
                dVar42 = (1.0 - (dVar42 * dVar52 + dVar46)) * dVar30;
                uStack_1f0 = (dVar50 * dVar33 + dVar52 * dVar45) * dVar27;
                local_1c8 = (dVar52 * dVar36 + dVar54) * dVar30;
                local_1e8 = (undefined8 *)((dVar33 * dVar52 - dVar50 * dVar45) * dVar27);
                uStack_1e0 = 0.0;
                local_1d8._8_4_ = SUB84(dVar42,0);
                local_1d8._0_8_ = (dVar50 * dVar33 - dVar52 * dVar45) * dVar30;
                local_1d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
                uStack_1c0 = 0;
                local_1b8._8_4_ = SUB84(dVar37,0);
                local_1b8._0_8_ = (dVar50 * dVar45 + dVar33 * dVar52) * dVar31;
                local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
                uStack_1a0 = 0;
                local_198._8_4_ = SUB84(dVar38,0);
                local_198._0_8_ = dVar43;
                local_198._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                uStack_180 = 0x3ff0000000000000;
                dVar33 = *pdVar15;
                dVar36 = pdVar15[1];
                dVar38 = pdVar15[2];
                local_268 = pdVar15[8];
                dVar42 = pdVar15[9];
                dStack_230 = pdVar15[10];
                dVar46 = dVar36 + dVar36;
                dVar45 = dVar38 + dVar38;
                dVar43 = dVar33 * (dVar33 + dVar33);
                local_278 = ((double)DAT_149934d80 - (dVar38 * dVar45 + dVar36 * dVar46)) *
                            local_268;
                dVar38 = (DAT_149934d80._8_8_ - (dVar38 * dVar45 + dVar43)) * dVar42;
                local_228 = (1.0 - (dVar43 + dVar36 * dVar46)) * dStack_230;
                dVar43 = pdVar15[3];
                dVar50 = dVar45 * dVar43;
                dVar37 = (dVar33 + dVar33) * pdVar15[3];
                dVar43 = dVar46 * dVar43;
                puStack_270 = (undefined8 *)((dVar46 * dVar33 + dVar50) * local_268);
                local_248 = (dVar45 * dVar36 + dVar37) * dVar42;
                local_238 = (dVar43 + *pdVar15 * dVar45) * dStack_230;
                local_268 = (*pdVar15 * dVar45 - dVar43) * local_268;
                dStack_230 = (dVar45 * dVar36 - dVar37) * dStack_230;
                uStack_260 = 0;
                local_258._8_4_ = SUB84(dVar38,0);
                local_258._0_8_ = (dVar46 * dVar33 - dVar50) * dVar42;
                local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                dVar50 = (double)local_328._8_8_;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = pdVar15[4];
                dStack_210 = pdVar15[5];
                local_208 = pdVar15[6];
                uStack_200 = 0x3ff0000000000000;
                local_188 = dVar49;
                FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar28._8_8_ = -(ulonglong)(0.0 <= dVar4);
                auVar28._0_8_ = -(ulonglong)(0.0 <= dVar3);
                auVar32 = blendvpd(_DAT_149936790,auVar53,auVar28);
                uVar26 = -(ulonglong)(0.0 <= dVar41);
                dVar43 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
                dVar38 = auVar32._0_8_;
                local_168 = local_168 * dVar38;
                dStack_170 = dStack_170 * dVar38;
                local_178 = local_178 * dVar38;
                dVar38 = auVar32._8_8_;
                local_148 = local_148 * dVar38;
                local_150 = local_150 * dVar38;
                local_158 = dVar38 * local_158;
                local_128 = local_128 * dVar43;
                local_130 = local_130 * dVar43;
                local_138 = dVar43 * local_138;
                FUN_14481fd10(&local_298,&local_178);
                dVar43 = local_288 * local_288 + local_298 * local_298;
                dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                auVar35._0_8_ = dVar43 + dVar38;
                auVar35._8_8_ = dVar43 + dVar38;
                auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
                auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
                auVar32 = sqrtpd(auVar35,auVar35);
                auVar32 = divpd(auVar53,auVar32);
                auVar40._0_8_ = auVar32._0_8_ * local_288;
                auVar40._8_8_ = auVar32._8_8_ * dStack_280;
                dVar6 = (double)((ulonglong)(local_298 * auVar32._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
                dVar7 = (double)((ulonglong)(dStack_290 * auVar32._8_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
                auVar53 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar29);
                dVar41 = 0.0;
                lVar14 = (longlong)local_2dc;
                dVar43 = local_118;
                dVar38 = dStack_110;
                dVar49 = local_108;
              }
              lVar17 = *(longlong *)(param_1 + 0xc0);
              lVar14 = lVar14 * 0x30;
              *(undefined8 *)(lVar17 + lVar14) = CONCAT44((float)dVar7,(float)dVar6);
              ((undefined8 *)(lVar17 + lVar14))[1] =
                   CONCAT44((float)auVar53._8_8_,(float)auVar53._0_8_);
              puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar14);
              *puVar1 = CONCAT44((float)dVar38,(float)dVar43);
              puVar1[1] = CONCAT44((float)dVar41,(float)dVar49);
              puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar14);
              *puVar1 = CONCAT44((float)((double)uVar10 * dVar30),(float)((double)uVar9 * dVar27));
              puVar1[1] = CONCAT44((float)dVar50,(float)(dVar51 * dVar31));
              local_2c0 = CONCAT44(local_2c0._4_4_,(uint)local_2c0 & ~uStack_2d0._4_4_);
              FUN_1449c0562(&uStack_2d0);
            } while (local_2d8 != plVar20 || (local_2c8 != dVar19 || local_2c0._4_4_ != uVar18));
          }
          if (-1 < (int)uVar12) {
            FUN_144a7cc9e(uVar23 * 0x50 + *(longlong *)(param_1 + 0x140),iVar2);
          }
          lVar14 = local_2e8;
          plVar20 = local_2f0;
          param_3 = local_330;
          if (local_2a8[0] != 0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < (int)param_3[1]);
      }
      local_2d8 = (longlong *)0x0;
      uStack_2d0 = 0;
      uVar11 = (**(code **)(*plVar20 + 0x60))(plVar20);
      local_178 = (double)CONCAT44(local_178._4_4_,uVar11);
      FUN_146eb9a52(param_3,&local_178);
      uVar12 = (**(code **)(*plVar20 + 0x60))(plVar20);
      auVar32 = local_328;
      local_328._4_4_ = 0;
      local_328._0_4_ = uVar12;
      uVar23 = local_328._0_8_;
      iVar2 = (int)uStack_2d0;
      local_328 = auVar32;
      iVar16 = (**(code **)(*plVar20 + 0x60))();
      if (0 < (int)uVar12) {
        lVar14 = local_330[1];
        local_328 = CONCAT88(local_328._8_8_,uVar23);
        lVar25 = 0;
        do {
          iVar24 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar25 * 4);
          if ((longlong)iVar24 != -1) {
            *(int *)(*(longlong *)(param_1 + 0x120) + lVar25 * 4) =
                 iVar24 - *(int *)((longlong)local_2d8 + (longlong)iVar24 * 4);
          }
          local_318._0_8_ = lVar25;
          local_158 = 0.0;
          local_150._0_4_ = 0;
          local_178 = 0.0;
          dStack_170 = 0.0;
          local_150._4_4_ = 0x80;
          local_148._0_4_ = 0xffffffff;
          local_148._4_4_ = 0;
          local_138 = 0.0;
          local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
          FUN_145c3f772(&local_178,*(longlong *)(param_1 + 0x140) + lVar25 * 0x50);
          FUN_14068ded2(lVar25 * 0x50 + *(longlong *)(param_1 + 0x140),0);
          local_278 = 2.12199579096527e-314;
          local_268 = 2.12199579047121e-314;
          uStack_260 = uStack_260 & 0xffffffff00000000;
          iVar24 = 0;
          puStack_270 = &local_168;
          if ((int)local_150 != 0) {
            FUN_1449c0562(&local_278);
            iVar24 = (int)local_150;
          }
          uStack_1e0 = local_268;
          dVar19 = uStack_1e0;
          local_1d8._0_8_ = uStack_260;
          uStack_1f0 = local_278;
          local_1e8 = puStack_270;
          uStack_1e0._4_4_ = (int)((ulonglong)local_268 >> 0x20);
          local_1f8 = &local_178;
          if ((uStack_1e0._4_4_ != iVar24) || (puStack_270 != &local_168)) {
            lVar25 = local_318._0_8_ * 0x50;
            iVar13 = uStack_1e0._4_4_;
            uStack_1e0 = dVar19;
            do {
              iVar13 = *(int *)(*local_1f8 + (longlong)iVar13 * 0xc);
              if ((-1 < (longlong)iVar13) && (iVar13 < iVar2)) {
                iVar13 = iVar13 - *(int *)((longlong)local_2d8 + (longlong)iVar13 * 4);
                local_278 = (double)CONCAT44(local_278._4_4_,iVar13);
                if ((-1 < iVar13) && (iVar13 < iVar16 - (int)lVar14)) {
                  FUN_1447cbafe(*(longlong *)(param_1 + 0x140) + lVar25,&local_298,&local_278,0);
                }
              }
              uStack_1e0 = (double)CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0 & ~uStack_1f0._4_4_);
              FUN_1449c0562(&uStack_1f0);
              iVar13 = uStack_1e0._4_4_;
              dVar19 = uStack_1e0;
            } while (local_1f8 != &local_178 ||
                     (local_1e8 != &local_168 || uStack_1e0._4_4_ != iVar24));
          }
          uStack_1e0 = dVar19;
          local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
          if (local_138 != 0.0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_178);
          lVar25 = local_318._0_8_ + 1;
        } while (lVar25 != local_328._0_8_);
      }
      if (local_2d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      param_4 = (ulonglong)local_332;
      param_3 = local_330;
      param_2 = local_300;
    }
    FUN_146ecd1be(param_1,param_2,param_3,param_4);
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed04f0 FUN_146ed04f0 body=1689 status=ok
// SIG undefined FUN_146ed04f0(void)

void FUN_146ed04f0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  ulonglong local_158;
  longlong *local_150;
  ulonglong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  ulonglong local_120;
  undefined1 local_114 [4];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((int)param_3[1] != 0) && ((int)param_3[1] == (int)param_4[1])) {
    if (*param_2 == DAT_14c9974a8) {
      local_138 = param_2;
      uVar2 = FUN_1401f66f6(param_1);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar2);
      FUN_146eb9b24(param_3);
      plVar9 = (longlong *)(param_1 + 0x110);
      local_150 = param_3;
      local_140 = param_4;
      if (0 < (int)param_3[1]) {
        local_130 = (longlong *)(param_1 + 0x130);
        lVar6 = 0;
        local_128 = plVar9;
        do {
          iVar7 = *(int *)(*param_3 + lVar6 * 4);
          uVar10 = (ulonglong)iVar7;
          if ((-1 < (longlong)uVar10) &&
             (iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9), iVar7 < iVar3)) {
            iVar7 = *(int *)(*param_4 + uVar10 * 4);
            local_d8 = CONCAT44(local_d8._4_4_,iVar7);
            if (-1 < iVar7) {
              local_158 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + uVar10 * 4);
              iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
              if (iVar7 < iVar3) {
                lVar1 = *(longlong *)(param_1 + 0x140);
                uVar8 = uVar10 * 0x50;
                lVar12 = lVar1 + uVar8;
                lVar11 = lVar12 + 0x10;
                local_110 = (longlong **)0x100000000;
                local_100 = (longlong *)0xffffffff;
                local_f8 = local_f8 & 0xffffffff00000000;
                local_120 = uVar10;
                local_108 = lVar11;
                if (*(int *)(lVar12 + 0x28) != 0) {
                  FUN_1449c0562(&local_110);
                }
                plVar9 = (longlong *)(lVar1 + uVar8);
                local_a0 = local_100;
                local_98 = local_f8;
                uStack_b0 = local_110;
                local_a8 = local_108;
                iVar7 = (int)plVar9[5];
                local_110 = (longlong **)CONCAT44(1 << ((byte)iVar7 & 0x1f),iVar7 >> 5);
                local_100 = (longlong *)CONCAT44(iVar7,-1 << ((byte)iVar7 & 0x1f));
                local_f8 = CONCAT44(local_f8._4_4_,iVar7) & 0xffffffffffffffe0;
                local_148 = uVar8;
                local_108 = lVar11;
                local_b8 = plVar9;
                if ((int)plVar9[5] != iVar7) {
                  FUN_1449c0562(&local_110);
                  iVar7 = local_100._4_4_;
                }
                lVar12 = local_108;
                if ((local_b8 != plVar9 || local_a8 != local_108) || local_a0._4_4_ != iVar7) {
                  do {
                    iVar3 = *(int *)(*local_b8 + (longlong)local_a0._4_4_ * 0xc);
                    local_110 = (longlong **)CONCAT44(local_110._4_4_,iVar3);
                    *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar3 * 4) = (int)local_d8;
                    FUN_1447cbafe((longlong)(int)local_d8 * 0x50 + *(longlong *)(param_1 + 0x140),
                                  &local_e8,&local_110,0);
                    local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
                    FUN_1449c0562(&uStack_b0);
                  } while (local_b8 != plVar9 || (local_a8 != lVar12 || local_a0._4_4_ != iVar7));
                }
                uVar8 = local_120;
                uVar10 = local_158;
                iVar7 = (int)local_158;
                if ((-1 < iVar7) && (iVar3 = (**(code **)(*local_130 + 0x60))(), iVar7 < iVar3)) {
                  FUN_144a7cc9e(*(longlong *)(param_1 + 0x140) + uVar10 * 0x50,uVar8 & 0xffffffff);
                  FUN_1447cbafe(uVar10 * 0x50 + *(longlong *)(param_1 + 0x140),&local_b8,&local_d8,0
                               );
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x120) + uVar8 * 4) = 0xffffffff;
                FUN_14068ded2(local_148 + *(longlong *)(param_1 + 0x140),0);
                param_3 = local_150;
                param_4 = local_140;
                plVar9 = local_128;
              }
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_3[1]);
      }
      local_e8 = 0;
      uStack_e0 = 0;
      uVar2 = (**(code **)(*plVar9 + 0x60))(plVar9);
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar2);
      FUN_146eb9a52(param_3,&local_b8);
      uVar4 = (**(code **)(*plVar9 + 0x60))(plVar9);
      iVar7 = (int)uStack_e0;
      iVar3 = (**(code **)(*plVar9 + 0x60))(plVar9);
      if (0 < (int)uVar4) {
        lVar6 = local_150[1];
        uVar10 = 0;
        local_148 = (ulonglong)uVar4;
        do {
          iVar13 = *(int *)(*(longlong *)(param_1 + 0x120) + uVar10 * 4);
          if ((longlong)iVar13 != -1) {
            *(int *)(*(longlong *)(param_1 + 0x120) + uVar10 * 4) =
                 iVar13 - *(int *)(local_e8 + (longlong)iVar13 * 4);
          }
          local_98 = 0;
          local_90 = 0;
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = 0;
          local_70 = 0;
          local_158 = uVar10;
          FUN_145c3f772(&local_b8,*(longlong *)(param_1 + 0x140) + uVar10 * 0x50);
          FUN_1402226aa(uVar10 * 0x50 + *(longlong *)(param_1 + 0x140));
          local_d8 = 0x100000000;
          local_c8 = 0xffffffff;
          local_c0 = 0;
          iVar13 = 0;
          local_d0 = &local_a8;
          if (local_90 != 0) {
            FUN_1449c0562(&local_d8);
            iVar13 = local_90;
          }
          local_f8 = local_c8;
          uVar10 = local_f8;
          local_f0 = local_c0;
          local_ec = local_bc;
          local_108 = local_d8;
          local_100 = local_d0;
          local_f8._4_4_ = (int)(local_c8 >> 0x20);
          local_110 = &local_b8;
          if ((local_f8._4_4_ != iVar13) || (local_d0 != &local_a8)) {
            lVar12 = local_158 * 0x50;
            iVar5 = local_f8._4_4_;
            local_f8 = uVar10;
            do {
              iVar5 = *(int *)((longlong)*local_110 + (longlong)iVar5 * 0xc);
              if ((-1 < (longlong)iVar5) && (iVar5 < iVar7)) {
                iVar5 = iVar5 - *(int *)(local_e8 + (longlong)iVar5 * 4);
                local_d8 = CONCAT44(local_d8._4_4_,iVar5);
                if ((-1 < iVar5) && (iVar5 < iVar3 - (int)lVar6)) {
                  FUN_1447cbafe(*(longlong *)(param_1 + 0x140) + lVar12,local_114,&local_d8,0);
                }
              }
              local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
              FUN_1449c0562(&local_108);
              iVar5 = local_f8._4_4_;
              uVar10 = local_f8;
            } while (local_110 != &local_b8 || (local_100 != &local_a8 || local_f8._4_4_ != iVar13))
            ;
          }
          local_f8 = uVar10;
          local_70 = 0;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a082e(&local_b8);
          uVar10 = local_158 + 1;
        } while (uVar10 != local_148);
      }
      param_4 = local_140;
      param_3 = local_150;
      param_2 = local_138;
      if (local_e8 != 0) {
        FUN_1400020a8();
        param_3 = local_150;
        param_2 = local_138;
      }
    }
    local_168 = param_5;
    FUN_146ecd51a(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed0b8a FUN_146ed0b8a body=259 status=ok
// SIG undefined FUN_146ed0b8a(void)

void FUN_146ed0b8a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x128);
    if (lVar1 != 0) {
      if (DAT_14c75f288 == 1) {
        *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x10;
        *(undefined2 *)(lVar1 + 0x5c) = 8;
      }
      else {
        *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x10;
        *(undefined2 *)(lVar1 + 0x5c) = 0;
      }
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar2 != 0)) {
        FUN_144a78688(lVar2 + 0x70);
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x9c8) + 0x2c8) + 0x708);
      (**(code **)(*plVar3 + 8))(plVar3,&local_2c);
      *(undefined4 *)(lVar1 + 0x58) = local_2c;
      *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 0x10;
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar2 != 0)) {
        FUN_144a78688(lVar2 + 0x70);
      }
      FUN_1448b734e(param_1,lVar1,1);
    }
    *(longlong *)(param_2 + 8) = param_1;
    FUN_144a78688(param_1 + 0x70,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed0c8e FUN_146ed0c8e body=195 status=ok
// SIG undefined FUN_146ed0c8e(void)

void FUN_146ed0c8e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    **(undefined1 **)(param_2 + 0x20) = 1;
    FUN_1401aa8ae(param_1 + 0x70);
    if (*(longlong *)(param_2 + 0x128) != 0) {
      FUN_144820fca(*(longlong *)(param_2 + 0x128),0);
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 8) = 1;
    *puVar1 = &PTR_FUN_149f45dc0;
    puVar1[10] = FUN_142a1050c;
    puVar1[0xc] = 0;
    puVar1[0xe] = &PTR_LAB_149f6af50;
    puVar1[0xf] = param_2;
    puVar1[0x10] = param_1;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    FUN_1406e6496(param_1 + 0x70,puVar1);
    return;
  }
  return;
}



// FUNCTION 146ed0d52 FUN_146ed0d52 body=149 status=ok
// SIG undefined FUN_146ed0d52(void)

void FUN_146ed0d52(undefined4 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0xf6) = param_2;
  param_1[0xf8] = param_4;
  param_1[0xf9] = param_4;
  param_1[0xfe] = 0;
  FUN_1461c391a(local_30,param_3 + 1);
  *param_1 = local_30[0];
  FUN_146ee30ac(param_1 + 2,&local_28);
  FUN_14605dbdd(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed0de8 FUN_146ed0de8 body=55 status=ok
// SIG undefined FUN_146ed0de8(void)

void FUN_146ed0de8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ee54ba(param_1,iVar1);
  }
  FUN_146ee5479((longlong)iVar1 * 0xf0 + *param_1);
  return;
}



// FUNCTION 146ed0e20 FUN_146ed0e20 body=56 status=ok
// SIG undefined FUN_146ed0e20(void)

void FUN_146ed0e20(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ee561a(param_1,iVar1);
  }
  FUN_146ee55de((longlong)iVar1 * 0x90 + *param_1);
  return;
}



// FUNCTION 146ed0e58 FUN_146ed0e58 body=105 status=ok
// SIG undefined FUN_146ed0e58(void)

void FUN_146ed0e58(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  puVar1 = (undefined8 *)FUN_146e1f850(param_1 + 0xb78,param_2);
  *puVar1 = *param_3;
  FUN_1447bdc4c(puVar1 + 1,param_3 + 1);
  puVar1[3] = param_3[3];
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 4);
                    /* WARNING: Could not recover jumptable at 0x000146ed0eba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  return;
}



// FUNCTION 146ed0ec2 FUN_146ed0ec2 body=106 status=ok
// SIG undefined FUN_146ed0ec2(void)

void FUN_146ed0ec2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  FUN_146ed0f2e(param_1 + 0xb78,local_24,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed0f2e FUN_146ed0f2e body=428 status=ok
// SIG undefined FUN_146ed0f2e(void)

uint * FUN_146ed0f2e(uint *param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = *param_1;
  lVar6 = (longlong)(int)uVar10;
  if (lVar6 == 0xffffff) {
    uVar10 = param_1[0x10];
    if (uVar10 == param_1[0x11]) {
      uVar5 = FUN_14001fdce(*(undefined8 *)(param_1 + 0xe),(ulonglong)(uVar10 + 4) * 0x28,8);
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      param_1[0x11] = param_1[0x11] + 4;
      uVar10 = param_1[0x10];
    }
    FUN_146e2d564(param_1 + 2);
    iVar4 = FUN_144a54ea4(param_1 + 6,1);
    puVar7 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar7 = param_1 + 6;
    }
    iVar8 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar8 = iVar4;
    }
    puVar7[iVar8 >> 5] = puVar7[iVar8 >> 5] | 1 << ((byte)iVar4 & 0x1f);
    param_1[0x10] = param_1[0x10] + 1;
    lVar6 = (longlong)(int)uVar10;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 2);
    puVar7 = param_1 + 6;
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar7 = *(uint **)(param_1 + 10);
    }
    uVar11 = uVar10 + 0x1f;
    if (-1 < (int)uVar10) {
      uVar11 = uVar10;
    }
    puVar7[(int)uVar11 >> 5] = puVar7[(int)uVar11 >> 5] | 1 << ((byte)uVar10 & 0x1f);
    *param_1 = *(uint *)(lVar3 + lVar6 * 4) & 0xffffff;
    puVar7 = (uint *)(lVar3 + lVar6 * 4);
    *puVar7 = *puVar7 | 0xffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0xe);
  puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x28);
  *puVar1 = *param_3;
  puVar1[1] = 0;
  iVar4 = *(int *)(param_3 + 2);
  _Src = (void *)param_3[1];
  *(int *)(puVar1 + 2) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  }
  else {
    puVar9 = (undefined8 *)(lVar3 + lVar6 * 0x28 + 8);
    FUN_1447bda9e(puVar9,iVar4,0);
    memcpy((void *)*puVar9,_Src,(longlong)iVar4 << 2);
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 4);
  puVar1[3] = param_3[3];
  param_1[0x12] = param_1[0x12] + 1;
  uVar11 = 0;
  if (((-1 < (int)uVar10) && (uVar11 = 0, (int)uVar10 < (int)param_1[4])) &&
     (uVar2 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar10 * 4), 0xffffff < uVar2)) {
    uVar11 = uVar10 & 0xffffff | uVar2 & 0xff000000;
  }
  *param_2 = uVar11;
  return param_2;
}



// FUNCTION 146ed10da FUN_146ed10da body=62 status=ok
// SIG undefined FUN_146ed10da(void)

void FUN_146ed10da(longlong param_1,undefined4 param_2)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  FUN_146e1fb0c(param_1 + 0xb78,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146ed1111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  return;
}



// FUNCTION 146ed1118 FUN_146ed1118 body=57 status=ok
// SIG undefined FUN_146ed1118(void)

void FUN_146ed1118(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x278) != param_2) {
    *(char *)(param_1 + 0x278) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x9c8);
    uVar2 = FUN_140627d14();
    *(undefined1 *)(lVar1 + 0xd0c) = uVar2;
    *(undefined1 *)(lVar1 + 0xcc4) = uVar2;
    *(undefined1 *)(lVar1 + 0x248) = uVar2;
  }
  return;
}



// FUNCTION 146ed1152 FUN_146ed1152 body=38 status=ok
// SIG undefined FUN_146ed1152(void)

undefined8 FUN_146ed1152(undefined8 param_1,int param_2)

{
  FUN_14054b30a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed1178 FUN_146ed1178 body=38 status=ok
// SIG undefined FUN_146ed1178(void)

undefined8 FUN_146ed1178(undefined8 param_1,int param_2)

{
  FUN_140f35a9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed123e FUN_146ed123e body=309 status=ok
// SIG undefined FUN_146ed123e(void)

undefined4 * FUN_146ed123e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_146ed1374(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_1448eb174(local_40,8,0);
  cVar3 = FUN_146ed145a(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_146ed155a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed1374 FUN_146ed1374 body=230 status=ok
// SIG undefined FUN_146ed1374(void)

int * FUN_146ed1374(longlong *param_1,int *param_2)

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



// FUNCTION 146ed145a FUN_146ed145a body=142 status=ok
// SIG undefined FUN_146ed145a(void)

undefined8 FUN_146ed145a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar4 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_146ed14e8(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = piVar1[3];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ed14e8 FUN_146ed14e8 body=114 status=ok
// SIG undefined FUN_146ed14e8(void)

void FUN_146ed14e8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 146ed155a FUN_146ed155a body=446 status=ok
// SIG undefined FUN_146ed155a(void)

void FUN_146ed155a(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
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



// FUNCTION 146ed171a FUN_146ed171a body=52 status=ok
// SIG undefined FUN_146ed171a(void)

void FUN_146ed171a(longlong *param_1)

{
  FUN_146ed174e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ed174e FUN_146ed174e body=89 status=ok
// SIG undefined FUN_146ed174e(void)

void FUN_146ed174e(longlong param_1)

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



// FUNCTION 146ed17a8 FUN_146ed17a8 body=256 status=ok
// SIG undefined FUN_146ed17a8(void)

void FUN_146ed17a8(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [3];
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[2] = param_2;
  uVar1 = FUN_1401f66f6(param_2,DAT_14c996ae0);
  FUN_146bca1c8(param_1,uVar1,1);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_146eb7819(param_2 + 0xb0,param_2 + 0x110,local_68);
  local_80 = param_1;
  local_78 = local_68 + 2;
  local_70 = local_68;
  uVar1 = FUN_1401f66f6(param_2);
  local_88 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_146ed2428;
  local_90 = 0;
  local_48 = &local_80;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed18aa FUN_146ed18aa body=180 status=ok
// SIG undefined FUN_146ed18aa(void)

void FUN_146ed18aa(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_2;
  uVar1 = FUN_1401f66f6(param_2,DAT_14c996ae8);
  FUN_146bca1c8(param_1 + 0x10,uVar1,1);
  local_38 = &local_58;
  local_68 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_146ed25b4;
  local_70 = 0;
  local_58 = param_1;
  local_50 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed1960 FUN_146ed1960 body=1239 status=ok
// SIG undefined FUN_146ed1960(void)

void FUN_146ed1960(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined1 **local_190;
  int local_188;
  int local_184;
  undefined1 (*local_180) [16];
  longlong *local_178;
  longlong *local_170;
  float *local_168;
  undefined1 *local_160;
  float **local_158;
  undefined1 *local_150;
  float *local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  ulonglong uStack_130;
  float local_11c;
  int local_118;
  int local_114;
  float *local_110;
  longlong *local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  _RTL_CRITICAL_SECTION local_a8;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  InitializeCriticalSection(&local_a8);
  SetCriticalSectionSpinCount(&local_a8,4000);
  local_80 = 0xffffffff3cf5c28f;
  local_138 = 0;
  uStack_130 = 0;
  iVar6 = FUN_1401f66f6(param_2,DAT_14c996af0);
  plVar1 = param_1 + 6;
  FUN_140c7a828(plVar1,iVar6,1);
  local_170 = param_1 + 4;
  FUN_146ed2708(local_170,iVar6);
  local_13c = 0;
  local_188 = iVar6;
  if (0 < iVar6) {
    local_180 = (undefined1 (*) [16])(param_1 + 8);
    local_178 = param_1;
    do {
      lVar8 = *local_170;
      lVar7 = (longlong)local_13c;
      puVar2 = (undefined8 *)(lVar8 + 0x151 + lVar7 * 0x1b8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar8 + 0x148 + lVar7 * 0x1b8);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x3b0) + lVar7 * 4);
      if (*(int *)(*(longlong *)(param_2 + 0x1b0) + (longlong)iVar6 * 4) == 1) {
        local_140 = *(int *)(*(longlong *)(param_2 + 0x430) + lVar7 * 4);
        iVar3 = *(int *)(*(longlong *)(param_2 + 0x450) + lVar7 * 4);
        if (0 < iVar3) {
          local_184 = iVar3 + local_140;
          do {
            lVar8 = (longlong)local_13c * 0x1b8 + param_1[4];
            pfVar9 = (float *)(lVar8 + 0x148);
            pfVar10 = (float *)((longlong)local_140 * 0xc + *param_1);
            if (*(char *)(lVar8 + 0x160) == '\0') {
              *(float *)(lVar8 + 0x15c) = pfVar10[2];
              *(undefined8 *)(lVar8 + 0x154) = *(undefined8 *)pfVar10;
              uVar4 = *(undefined8 *)pfVar10;
              *(float *)(lVar8 + 0x150) = pfVar10[2];
              *(undefined8 *)pfVar9 = uVar4;
              *(undefined1 *)(lVar8 + 0x160) = 1;
            }
            else {
              fVar14 = *pfVar9;
              if (*pfVar10 <= *pfVar9) {
                fVar14 = *pfVar10;
              }
              *pfVar9 = fVar14;
              fVar14 = *(float *)(lVar8 + 0x14c);
              if (pfVar10[1] <= *(float *)(lVar8 + 0x14c)) {
                fVar14 = pfVar10[1];
              }
              *(float *)(lVar8 + 0x14c) = fVar14;
              fVar14 = *(float *)(lVar8 + 0x150);
              if (pfVar10[2] <= *(float *)(lVar8 + 0x150)) {
                fVar14 = pfVar10[2];
              }
              *(float *)(lVar8 + 0x150) = fVar14;
              fVar14 = *(float *)(lVar8 + 0x154);
              if (*(float *)(lVar8 + 0x154) <= *pfVar10) {
                fVar14 = *pfVar10;
              }
              *(float *)(lVar8 + 0x154) = fVar14;
              fVar14 = *(float *)(lVar8 + 0x158);
              if (*(float *)(lVar8 + 0x158) <= pfVar10[1]) {
                fVar14 = pfVar10[1];
              }
              *(float *)(lVar8 + 0x158) = fVar14;
              fVar14 = *(float *)(lVar8 + 0x15c);
              if (*(float *)(lVar8 + 0x15c) <= pfVar10[2]) {
                fVar14 = pfVar10[2];
              }
              *(float *)(lVar8 + 0x15c) = fVar14;
            }
            bVar12 = (longlong)uStack_130 < 0;
            uStack_130 = uStack_130 & 0xffffffff00000000;
            if (bVar12) {
              FUN_14481578e(&local_138,0);
            }
            local_150 = &LAB_146ed2d2c;
            local_158 = &local_110;
            local_160 = &LAB_146ed2d30;
            local_190 = &local_150;
            local_198 = &local_138;
            local_168 = pfVar10;
            local_148 = &local_11c;
            local_110 = pfVar10;
            local_108 = param_1;
            FUN_146ed2782(&local_f8,pfVar10);
            lVar8 = local_138;
            lVar7 = (longlong)(int)uStack_130;
            if (lVar7 != 0) {
              lVar11 = 0;
              do {
                iVar3 = *(int *)(*(longlong *)(param_2 + 0x2d0) +
                                (longlong)*(int *)(lVar8 + lVar11) * 4);
                if (iVar3 != iVar6) {
                  iVar3 = *(int *)(*(longlong *)(param_2 + 400) + (longlong)iVar3 * 4);
                  local_110 = (float *)CONCAT44(local_110._4_4_,iVar3);
                  FUN_1447cbafe((longlong)iVar3 * 0x50 + *plVar1,&local_11c,&local_13c,0);
                  FUN_1447cbafe((longlong)local_13c * 0x50 + *plVar1,&local_11c,&local_110);
                }
                lVar11 = lVar11 + 4;
              } while (lVar7 * 4 != lVar11);
            }
            auVar13 = roundss(ZEXT416((uint)(local_168[2] / (float)local_80)),
                              ZEXT416((uint)(local_168[2] / (float)local_80)),9);
            local_114 = (int)auVar13._0_4_;
            auVar13 = roundss(ZEXT416((uint)(local_168[1] / (float)local_80)),
                              ZEXT416((uint)(local_168[1] / (float)local_80)),9);
            local_118 = (int)auVar13._0_4_;
            auVar13 = roundss(ZEXT416((uint)(*local_168 / (float)local_80)),
                              ZEXT416((uint)(*local_168 / (float)local_80)),9);
            local_11c = (float)(int)auVar13._0_4_;
            local_108 = (longlong *)&local_140;
            local_110 = &local_11c;
            FUN_146be634e(&local_f8,local_fc,&local_110,0);
            local_140 = local_140 + 1;
            param_1 = local_178;
          } while (local_140 < local_184);
          lVar7 = (longlong)local_13c;
        }
        lVar8 = lVar7 * 0x1b8 + param_1[4];
        if (((char)param_1[0xb] == '\0') || (*(char *)(lVar8 + 0x160) == '\0')) {
          if (*(char *)(lVar8 + 0x160) != '\0') {
            auVar13 = *(undefined1 (*) [16])(lVar8 + 0x148);
            uVar4 = *(undefined8 *)(lVar8 + 0x15c);
            *(undefined8 *)(*local_180 + 0xc) = *(undefined8 *)(lVar8 + 0x154);
            *(undefined8 *)(local_180[1] + 4) = uVar4;
            *local_180 = auVar13;
          }
        }
        else {
          fVar14 = *(float *)*(undefined1 (*) [16])(lVar8 + 0x148);
          fVar5 = *(float *)(param_1 + 8);
          if (fVar14 <= *(float *)(param_1 + 8)) {
            fVar5 = fVar14;
          }
          *(float *)(param_1 + 8) = fVar5;
          fVar14 = *(float *)((longlong)param_1 + 0x44);
          if (*(float *)(lVar8 + 0x14c) <= *(float *)((longlong)param_1 + 0x44)) {
            fVar14 = *(float *)(lVar8 + 0x14c);
          }
          *(float *)((longlong)param_1 + 0x44) = fVar14;
          fVar14 = *(float *)(param_1 + 9);
          if (*(float *)(lVar8 + 0x150) <= *(float *)(param_1 + 9)) {
            fVar14 = *(float *)(lVar8 + 0x150);
          }
          *(float *)(param_1 + 9) = fVar14;
          fVar14 = *(float *)((longlong)param_1 + 0x4c);
          if (*(float *)((longlong)param_1 + 0x4c) <= *(float *)(lVar8 + 0x154)) {
            fVar14 = *(float *)(lVar8 + 0x154);
          }
          *(float *)((longlong)param_1 + 0x4c) = fVar14;
          fVar14 = *(float *)(param_1 + 10);
          if (*(float *)(param_1 + 10) <= *(float *)(lVar8 + 0x158)) {
            fVar14 = *(float *)(lVar8 + 0x158);
          }
          *(float *)(param_1 + 10) = fVar14;
          fVar14 = *(float *)((longlong)param_1 + 0x54);
          if (*(float *)((longlong)param_1 + 0x54) <= *(float *)(lVar8 + 0x15c)) {
            fVar14 = *(float *)(lVar8 + 0x15c);
          }
          *(float *)((longlong)param_1 + 0x54) = fVar14;
        }
      }
      local_13c = local_13c + 1;
    } while (local_13c < local_188);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146ed2a8e(&local_f8);
  if ((local_70 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed1e38 FUN_146ed1e38 body=176 status=ok
// SIG undefined FUN_146ed1e38(void)

void FUN_146ed1e38(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_198 [40];
  undefined4 local_170;
  undefined8 *local_168;
  longlong local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  code *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [248];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_140 = param_2;
  FUN_146ed2d76(local_118);
  local_130 = &local_158;
  local_168 = &local_128;
  local_128 = 0;
  local_120 = 0;
  local_138 = FUN_146ed2f06;
  local_170 = 0;
  local_158 = param_1;
  local_150 = &local_140;
  local_148 = local_118;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x28),1);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed1eea FUN_146ed1eea body=1341 status=ok
// SIG undefined FUN_146ed1eea(void)

void FUN_146ed1eea(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_388 [47];
  undefined1 local_359;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  uint local_2ec;
  int *local_2e8;
  ulonglong uStack_2e0;
  uint *local_2d8;
  undefined1 *local_2d0;
  undefined1 local_2c4 [4];
  double local_2c0 [58];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_1458481c0(local_2c0);
  fVar14 = ABS((*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48)) * 0.5);
  fVar15 = ABS((*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44)) * 0.5);
  fVar16 = ABS((*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x40)) * 0.5);
  if (fVar16 <= fVar15) {
    fVar16 = fVar15;
  }
  if (fVar16 <= fVar14) {
    fVar16 = fVar14;
  }
  local_2c0[0] = (double)fVar16;
  local_2e8 = (int *)0x0;
  uStack_2e0 = 0;
  local_2ec = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    dVar4 = (double)((*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x48)) * 0.5);
    dVar5 = (double)((*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x44)) * 0.5);
    dVar6 = (double)((*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x40)) * 0.5);
    do {
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar10 = (longlong)(int)local_2ec * 0x1b8;
      fVar16 = *(float *)(lVar3 + 0x15c + lVar10);
      fVar14 = *(float *)(lVar3 + 0x158 + lVar10);
      fVar15 = *(float *)(lVar3 + 0x154 + lVar10);
      fVar17 = *(float *)(lVar3 + 0x150 + lVar10);
      fVar18 = *(float *)(lVar3 + 0x148 + lVar10);
      fVar19 = *(float *)(lVar3 + 0x14c + lVar10);
      local_320 = (double)fVar18 - dVar6;
      dStack_318 = (double)fVar19 - dVar5;
      local_310 = (double)fVar17 - dVar4;
      dStack_308 = (double)fVar15 - dVar6;
      local_300 = (double)fVar14 - dVar5;
      dStack_2f8 = (double)fVar16 - dVar4;
      if (0 < (int)local_2ec) {
        bVar13 = (longlong)uStack_2e0 < 0;
        uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
        if (bVar13) {
          FUN_14481578e(&local_2e8,0);
        }
        dStack_340 = dStack_308 + 0.009999999776482582;
        local_338 = local_300 + 0.009999999776482582;
        dStack_330 = dStack_2f8 + 0.009999999776482582;
        local_358 = local_320 + -0.009999999776482582;
        dStack_350 = dStack_318 + -0.009999999776482582;
        local_348 = local_310 + -0.009999999776482582;
        FUN_146c88a30(local_2c0,&local_358,&local_2e8);
        if ((longlong)(int)uStack_2e0 != 0) {
          fVar17 = fVar17 + -0.01;
          fVar19 = fVar19 + -0.01;
          fVar18 = fVar18 + -0.01;
          piVar12 = local_2e8 + (int)uStack_2e0;
          piVar8 = local_2e8;
          do {
            lVar3 = *(longlong *)(param_1 + 0x30);
            lVar10 = (longlong)*piVar8 * 0x50;
            if (*(int *)(lVar3 + 8 + lVar10) != *(int *)(lVar3 + 0x34 + lVar10)) {
              plVar7 = (longlong *)(lVar3 + lVar10);
              plVar11 = plVar7 + 7;
              if ((longlong *)plVar7[8] != (longlong *)0x0) {
                plVar11 = (longlong *)plVar7[8];
              }
              iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar7[9] - 1U & local_2ec) * 4)
              ;
              if (iVar9 != -1) {
                do {
                  if (*(uint *)(*plVar7 + (longlong)iVar9 * 0xc) == local_2ec) goto LAB_146ed22b3;
                  iVar9 = *(int *)(*plVar7 + (longlong)iVar9 * 0xc + 4);
                } while (iVar9 != -1);
              }
            }
            lVar3 = *(longlong *)(param_1 + 0x20);
            lVar10 = (longlong)*piVar8 * 0x1b8;
            pfVar2 = (float *)(lVar3 + 0x154 + lVar10);
            if ((((fVar18 < *pfVar2 || fVar18 == *pfVar2) &&
                 (lVar1 = lVar3 + lVar10, *(float *)(lVar1 + 0x148) <= fVar15 + 0.01)) &&
                (fVar19 < *(float *)(lVar1 + 0x158) || fVar19 == *(float *)(lVar1 + 0x158))) &&
               (((*(float *)(lVar1 + 0x14c) <= fVar14 + 0.01 &&
                 (fVar17 < *(float *)(lVar1 + 0x15c) || fVar17 == *(float *)(lVar1 + 0x15c))) &&
                (*(float *)(lVar1 + 0x150) <= fVar16 + 0.01)))) {
              local_359 = 0;
              local_2d8 = &local_2ec;
              local_2d0 = &local_359;
              FUN_146b50f38(lVar3 + lVar10 + 0x168,local_2c4,&local_2d8,0);
            }
LAB_146ed22b3:
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar12);
        }
      }
      FUN_146c86256(local_2c0,local_2ec,&local_320);
      local_2ec = local_2ec + 1;
    } while ((int)local_2ec < *(int *)(param_1 + 0x28));
    if (local_2e8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145820e5c(local_2c0);
  if ((local_f0 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed2430 FUN_146ed2430 body=388 status=ok
// SIG undefined FUN_146ed2430(void)

void FUN_146ed2430(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar3;
  
  lVar6 = *(longlong *)(*(longlong *)param_1[1] + 0x230);
  lVar7 = *(longlong *)param_1[2];
  lVar12 = (longlong)
           *(int *)(*(longlong *)(*(longlong *)param_1[1] + 0x2d0) + (longlong)param_2 * 4) * 0x60;
  lVar8 = (longlong)param_2 * 0xc;
  pdVar1 = (double *)(lVar7 + 0x40 + lVar12);
  dVar14 = (double)*(float *)(lVar6 + lVar8) * *pdVar1;
  dVar15 = (double)*(float *)(lVar6 + 4 + lVar8) * pdVar1[1];
  dVar13 = (double)*(float *)(lVar6 + 8 + lVar8) * *(double *)(lVar7 + 0x50 + lVar12);
  dVar9 = *(double *)(lVar7 + lVar12);
  dVar10 = ((double *)(lVar7 + lVar12))[1];
  dVar11 = *(double *)(lVar7 + 0x10 + lVar12);
  pdVar1 = (double *)(lVar7 + 0x18 + lVar12);
  dVar2 = *pdVar1;
  dVar3 = *pdVar1;
  dVar16 = dVar15 * dVar9 - dVar14 * dVar10;
  dVar17 = dVar13 * dVar10 - dVar15 * dVar11;
  dVar18 = dVar14 * dVar11 - dVar9 * dVar13;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar16 = dVar16 + dVar16;
  pdVar1 = (double *)(lVar7 + 0x20 + lVar12);
  dVar5 = pdVar1[1];
  dVar4 = *(double *)(lVar7 + 0x30 + lVar12);
  lVar6 = *(longlong *)*param_1;
  *(float *)(lVar6 + lVar8) =
       (float)((dVar16 * dVar10 - dVar18 * dVar11) + dVar2 * dVar17 + dVar14 + *pdVar1);
  *(float *)(lVar6 + 4 + lVar8) =
       (float)((dVar11 * dVar17 - dVar9 * dVar16) + dVar3 * dVar18 + dVar15 + dVar5);
  *(float *)(lVar6 + 8 + lVar8) =
       (float)(dVar16 * dVar2 + dVar13 + (dVar18 * dVar9 - dVar17 * dVar10) + dVar4);
  return;
}



// FUNCTION 146ed25bc FUN_146ed25bc body=332 status=ok
// SIG undefined FUN_146ed25bc(void)

void FUN_146ed25bc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  plVar1 = (longlong *)*param_1;
  lVar8 = *(longlong *)(*(longlong *)param_1[1] + 0x2f0);
  lVar4 = (longlong)param_2 * 0xc;
  lVar5 = (longlong)*(int *)(lVar8 + lVar4);
  lVar6 = (longlong)*(int *)(lVar8 + 4 + lVar4);
  lVar2 = *plVar1;
  lVar3 = plVar1[2];
  fVar13 = *(float *)(lVar2 + 8 + lVar6 * 0xc);
  fVar10 = *(float *)(lVar2 + 8 + lVar5 * 0xc) - fVar13;
  fVar12 = *(float *)(lVar2 + lVar6 * 0xc);
  fVar14 = *(float *)(lVar2 + 4 + lVar6 * 0xc);
  fVar11 = *(float *)(lVar2 + 4 + lVar5 * 0xc) - fVar14;
  fVar9 = *(float *)(lVar2 + lVar5 * 0xc) - fVar12;
  lVar8 = (longlong)*(int *)(lVar8 + 8 + lVar4);
  fVar13 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - fVar13;
  fVar14 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - fVar14;
  fVar12 = *(float *)(lVar2 + lVar8 * 0xc) - fVar12;
  *(float *)(lVar3 + lVar4) = fVar11 * fVar13 - fVar14 * fVar10;
  *(float *)(lVar3 + 4 + lVar4) = fVar10 * fVar12 - fVar13 * fVar9;
  *(float *)(lVar3 + 8 + lVar4) = fVar9 * fVar14 - fVar12 * fVar11;
  lVar8 = plVar1[2];
  fVar13 = *(float *)(lVar8 + lVar4);
  fVar12 = *(float *)(lVar8 + 4 + lVar4);
  fVar14 = *(float *)(lVar8 + 8 + lVar4);
  fVar9 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
  if (1e-08 < fVar9) {
    pfVar7 = (float *)(lVar8 + lVar4);
    fVar9 = 1.0 / SQRT(fVar9);
    *pfVar7 = fVar13 * fVar9;
    pfVar7[1] = fVar12 * fVar9;
    pfVar7[2] = fVar14 * fVar9;
  }
  return;
}



// FUNCTION 146ed2708 FUN_146ed2708 body=121 status=ok
// SIG undefined FUN_146ed2708(void)

void FUN_146ed2708(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed2b16(param_1,iVar1);
    }
    FUN_146ed2ac2((longlong)iVar1 * 0x1b8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146ed2bae(param_1,param_2,iVar1 - param_2);
    FUN_146ed2c10(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed2782 FUN_146ed2782 body=778 status=ok
// SIG undefined FUN_146ed2782(void)

int FUN_146ed2782(longlong *param_1,float *param_2,float param_3,undefined8 *param_4,
                 longlong *param_5,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_c8 [36];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  longlong local_90;
  undefined8 *local_88;
  int local_7c;
  int local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = 0;
  local_88 = param_4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    fVar13 = *(float *)(param_1 + 0xf);
    auVar14 = ZEXT416((uint)((param_2[2] - DAT_14c846358 * param_3) / fVar13));
    auVar16 = roundss(auVar14,auVar14,9);
    iVar4 = (int)param_5[1];
    auVar14 = ZEXT416((uint)((DAT_14c846358 * param_3 + param_2[2]) / fVar13));
    auVar14 = roundss(auVar14,auVar14,9);
    local_98 = (int)auVar14._0_4_;
    iVar9 = iVar4;
    if ((int)auVar16._0_4_ <= local_98) {
      auVar14 = ZEXT416((uint)((param_2[1] - DAT_14c846350._4_4_ * param_3) / fVar13));
      auVar14 = roundss(auVar14,auVar14,9);
      local_9c = (int)auVar14._0_4_;
      auVar14 = roundss(ZEXT816(0),
                        ZEXT416((uint)((*param_2 - (float)DAT_14c846350 * param_3) / fVar13)),9);
      local_94 = (int)auVar14._0_4_;
      auVar14 = ZEXT416((uint)(((float)DAT_14c846350 * param_3 + *param_2) / fVar13));
      auVar15 = roundss(auVar14,auVar14,9);
      auVar14 = roundss(ZEXT816(0),
                        ZEXT416((uint)((DAT_14c846350._4_4_ * param_3 + param_2[1]) / fVar13)),9);
      local_a4 = (int)auVar14._0_4_;
      iVar9 = (int)auVar16._0_4_;
      local_a0 = iVar4;
      do {
        iVar4 = local_9c;
        if (local_9c <= local_a4) {
          do {
            iVar10 = local_94;
            if (local_94 <= (int)auVar15._0_4_) {
LAB_146ed28ea:
              local_7c = iVar10;
              local_78 = iVar4;
              local_74 = iVar9;
              if ((int)param_1[9] != 0) {
                iVar2 = FUN_1448eb174(&local_7c,0xc,0);
                plVar5 = (longlong *)param_1[8];
                if ((longlong *)param_1[8] == (longlong *)0x0) {
                  plVar5 = param_1 + 7;
                }
                iVar2 = *(int *)((longlong)plVar5 +
                                ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
                if (iVar2 != -1) {
                  lVar6 = *param_1;
                  do {
                    lVar7 = (longlong)iVar2;
                    iVar8 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
                    if (((*(int *)(lVar6 + lVar7 * 0x18) == local_7c) &&
                        (lVar7 = lVar6 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_78)) &&
                       (*(int *)(lVar7 + 8) == local_74)) goto LAB_146ed29be;
                    iVar2 = iVar8;
                  } while (iVar8 != -1);
                }
              }
              goto LAB_146ed296b;
            }
LAB_146ed28dd:
            bVar12 = iVar4 != local_a4;
            iVar4 = iVar4 + 1;
          } while (bVar12);
        }
        bVar12 = iVar9 != local_98;
        iVar9 = iVar9 + 1;
      } while (bVar12);
      iVar4 = (int)param_5[1];
      iVar9 = local_a0;
    }
    iVar4 = iVar4 - iVar9;
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
LAB_146ed29be:
  while( true ) {
    puVar11 = (undefined4 *)(lVar6 + (longlong)iVar2 * 0x18 + 0xc);
    cVar1 = (*(code *)*param_6)(param_6[1],puVar11);
    if ((cVar1 == '\0') &&
       (fVar13 = (float)(*(code *)*local_88)(local_88[1],puVar11), fVar13 < param_3 * param_3)) {
      lVar6 = (longlong)(int)param_5[1];
      uVar3 = (int)param_5[1] + 1;
      *(uint *)(param_5 + 1) = uVar3;
      if (*(uint *)((longlong)param_5 + 0xc) < uVar3) {
        local_90 = lVar6;
        FUN_1446f48e2(param_5,lVar6);
        lVar6 = local_90;
      }
      *(undefined4 *)(*param_5 + lVar6 * 4) = *puVar11;
    }
    if (iVar8 == -1) break;
    lVar6 = *param_1;
    iVar2 = iVar8;
    while( true ) {
      lVar7 = (longlong)iVar2;
      iVar8 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
      if (((*(int *)(lVar6 + lVar7 * 0x18) == local_7c) &&
          (lVar7 = lVar6 + lVar7 * 0x18, *(int *)(lVar7 + 4) == local_78)) &&
         (*(int *)(lVar7 + 8) == local_74)) break;
      iVar2 = iVar8;
      if (iVar8 == -1) goto LAB_146ed296b;
    }
  }
LAB_146ed296b:
  bVar12 = iVar10 == (int)auVar15._0_4_;
  iVar10 = iVar10 + 1;
  if (bVar12) goto LAB_146ed28dd;
  goto LAB_146ed28ea;
}



// FUNCTION 146ed2a8e FUN_146ed2a8e body=52 status=ok
// SIG undefined FUN_146ed2a8e(void)

void FUN_146ed2a8e(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146be6714(param_1);
  return;
}



// FUNCTION 146ed2ac2 FUN_146ed2ac2 body=84 status=ok
// SIG undefined FUN_146ed2ac2(void)

void FUN_146ed2ac2(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1b0);
    do {
      *(undefined8 *)(puVar1 + -0x1c) = 0x1400000000;
      *(undefined1 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x6e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ed2b16 FUN_146ed2b16 body=150 status=ok
// SIG undefined FUN_146ed2b16(void)

void FUN_146ed2b16(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1b8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1b8)) {
      uVar5 = uVar4 / 0x1b8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1b8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ed2bae FUN_146ed2bae body=98 status=ok
// SIG undefined FUN_146ed2bae(void)

void FUN_146ed2bae(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1b8 + *param_1);
  FUN_146ed2c4e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1b8 + (longlong)_Dst),(longlong)iVar2 * 0x1b8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ed2c10 FUN_146ed2c10 body=62 status=ok
// SIG undefined FUN_146ed2c10(void)

void FUN_146ed2c10(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed2cba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1b8,8);
  }
  return;
}



// FUNCTION 146ed2c4e FUN_146ed2c4e body=41 status=ok
// SIG undefined FUN_146ed2c4e(void)

void FUN_146ed2c4e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ed2c78(param_1);
    param_1 = param_1 + 0x1b8;
  }
  return;
}



// FUNCTION 146ed2c78 FUN_146ed2c78 body=66 status=ok
// SIG undefined FUN_146ed2c78(void)

void FUN_146ed2c78(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(param_1 + 0x168);
  FUN_144716727(param_1,*(undefined4 *)(param_1 + 0x140));
  return;
}



// FUNCTION 146ed2cba FUN_146ed2cba body=114 status=ok
// SIG undefined FUN_146ed2cba(void)

ulonglong FUN_146ed2cba(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1b8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146ed2cf3;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1b8,8);
      param_2 = param_2 / 0x1b8;
    }
  }
LAB_146ed2cf3:
  return param_2 & 0xffffffff;
}



// FUNCTION 146ed2d76 FUN_146ed2d76 body=224 status=ok
// SIG undefined FUN_146ed2d76(void)

undefined8 * FUN_146ed2d76(undefined8 *param_1)

{
  param_1[0x1e] = 0x1400000000;
  FUN_146ed2e56();
  *param_1 = 0xbf4b30e83e2fa6df;
  param_1[1] = 0x3f20882f3f156e7a;
  param_1[2] = 0x3d0d690abf473c82;
  param_1[3] = 0x3f4f62fa3efb9347;
  param_1[4] = 0x3ee41fa7bea3c925;
  param_1[5] = 0x3ec8d0463f4e0696;
  param_1[6] = 0xbf48fd093e7b8dc5;
  param_1[7] = 0x3f7c2118bf11944b;
  param_1[8] = 0x3d7e8ab5be254e6e;
  param_1[9] = 0xbe3ee6323e7dd00f;
  param_1[10] = 0x3f531d823f736199;
  param_1[0xb] = 0xbf06233a3e5a0d78;
  param_1[0xc] = 0x3e513e3e3f4023c8;
  param_1[0xd] = 0x3ebc4f1a3f20df8b;
  param_1[0xe] = 0xbf69edf2be30a527;
  param_1[0xf] = 0x3f4b30e8be2fa6df;
  param_1[0x10] = 0xbf20882fbf156e7a;
  param_1[0x11] = 0xbd0d690a3f473c82;
  param_1[0x12] = 0xbf4f62fabefb9347;
  param_1[0x13] = 0xbee41fa73ea3c925;
  param_1[0x14] = 0xbec8d046bf4e0696;
  param_1[0x15] = 0x3f48fd09be7b8dc5;
  param_1[0x16] = 0xbf7c21183f11944b;
  param_1[0x17] = 0xbd7e8ab53e254e6e;
  param_1[0x18] = 0x3e3ee632be7dd00f;
  param_1[0x19] = 0xbf531d82bf736199;
  param_1[0x1a] = 0x3f06233abe5a0d78;
  param_1[0x1b] = 0xbe513e3ebf4023c8;
  param_1[0x1c] = 0xbebc4f1abf20df8b;
  param_1[0x1d] = 0x3f69edf23e30a527;
  return param_1;
}



// FUNCTION 146ed2e56 FUN_146ed2e56 body=118 status=ok
// SIG undefined FUN_146ed2e56(void)

void FUN_146ed2e56(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar1 < 0x14) {
    *(undefined4 *)(param_1 + 0xf0) = 0x14;
    if ((uint)(*(int *)(param_1 + 0xf4) - iVar1) < 0x14U - iVar1) {
      FUN_146ed2ecc(param_1,iVar1);
    }
    FUN_146bed2a3(param_1 + (longlong)iVar1 * 0xc,0x14U - iVar1);
    return;
  }
  if (iVar1 == 0x14) {
    return;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0x14;
  FUN_146ed2ef2(param_1);
  return;
}



// FUNCTION 146ed2ecc FUN_146ed2ecc body=37 status=ok
// SIG undefined FUN_146ed2ecc(void)

void FUN_146ed2ecc(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0xf0)) {
    *(undefined4 *)(param_1 + 0xf4) = 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ed2ef2 FUN_146ed2ef2 body=20 status=ok
// SIG undefined FUN_146ed2ef2(void)

void FUN_146ed2ef2(longlong param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0x14) {
    *(undefined4 *)(param_1 + 0xf4) = 0x14;
  }
  return;
}



// FUNCTION 146ed2f06 FUN_146ed2f06 body=55 status=ok
// SIG undefined FUN_146ed2f06(void)

void FUN_146ed2f06(longlong *param_1,int *param_2)

{
  FUN_146ed2f3e((longlong)*param_2 * 0x1b8 + *(longlong *)(*param_1 + 0x20),
                *(undefined8 *)param_1[1],param_1[2],(longlong)*param_2,*param_1 + 0x10);
  return;
}



// FUNCTION 146ed2f3e FUN_146ed2f3e body=279 status=ok
// SIG undefined FUN_146ed2f3e(void)

void FUN_146ed2f3e(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  FUN_146ed3056();
  lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x490) + (longlong)param_4 * 4);
  if (0 < lVar8) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x470) + (longlong)param_4 * 4);
    lVar8 = lVar8 + lVar7;
    do {
      lVar3 = *param_5;
      uVar2 = 0xffffffff;
      uVar6 = 0;
      fVar9 = -1.0;
      pfVar5 = (float *)(param_3 + 8);
      do {
        fVar10 = *pfVar5 * *(float *)(lVar3 + 8 + lVar7 * 0xc) +
                 pfVar5[-2] * *(float *)(lVar3 + lVar7 * 0xc) +
                 pfVar5[-1] * *(float *)(lVar3 + 4 + lVar7 * 0xc);
        if (fVar9 < fVar10) {
          uVar2 = uVar6 & 0xffffffff;
          fVar9 = fVar10;
        }
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 3;
      } while (uVar6 != 0x14);
      lVar3 = (longlong)(int)uVar2 * 0x10;
      iVar1 = *(int *)(param_1 + 8 + lVar3);
      uVar4 = iVar1 + 1;
      *(uint *)(param_1 + 8 + lVar3) = uVar4;
      if (*(uint *)(param_1 + 0xc + lVar3) < uVar4) {
        FUN_1446f48e2((longlong *)(param_1 + lVar3));
      }
      *(int *)(*(longlong *)(param_1 + lVar3) + (longlong)iVar1 * 4) = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}



// FUNCTION 146ed3056 FUN_146ed3056 body=193 status=ok
// SIG undefined FUN_146ed3056(void)

void FUN_146ed3056(longlong param_1)

{
  int *_Dst;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar2 < 0x14) {
    *(undefined4 *)(param_1 + 0x140) = 0x14;
    if ((uint)(*(int *)(param_1 + 0x144) - iVar2) < 0x14U - iVar2) {
      FUN_146ed3118(param_1);
    }
    memset((void *)(param_1 + (longlong)iVar2 * 0x10),0,(ulonglong)(0x14U - iVar2) << 4);
    return;
  }
  if (iVar2 == 0x14) {
    return;
  }
  _Dst = (int *)(param_1 + 0x140);
  uVar1 = iVar2 - 0x14;
  FUN_144716727(_Dst,uVar1);
  if (*_Dst - iVar2 != 0) {
    memmove(_Dst,_Dst + (ulonglong)uVar1 * 4,(longlong)(*_Dst - iVar2) << 4);
    iVar2 = *_Dst;
  }
  *(uint *)(param_1 + 0x140) = iVar2 - uVar1;
  FUN_146ed313e(param_1);
  return;
}



// FUNCTION 146ed3118 FUN_146ed3118 body=37 status=ok
// SIG undefined FUN_146ed3118(void)

void FUN_146ed3118(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x140)) {
    *(undefined4 *)(param_1 + 0x144) = 0x14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ed313e FUN_146ed313e body=20 status=ok
// SIG undefined FUN_146ed313e(void)

void FUN_146ed313e(longlong param_1)

{
  if (*(int *)(param_1 + 0x144) != 0x14) {
    *(undefined4 *)(param_1 + 0x144) = 0x14;
  }
  return;
}



// FUNCTION 146ed315a FUN_146ed315a body=1466 status=ok
// SIG undefined FUN_146ed315a(void)

void FUN_146ed315a(longlong *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1b8 [39];
  byte local_191;
  longlong local_190;
  int local_184;
  longlong *local_180;
  uint *local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_160 = (longlong *)*param_1;
  local_140 = (longlong)param_2;
  local_168 = local_140 * 0x1b8;
  lVar25 = local_160[4] + local_168;
  plVar20 = (longlong *)(lVar25 + 0x168);
  local_170 = local_160[4] + 0x178 + local_168;
  local_f0 = 0x100000000;
  local_e0 = 0xffffffff;
  iStack_dc = 0;
  uStack_d8 = 0;
  uStack_e8 = local_170;
  if (*(int *)(local_170 + 0x18) == 0) {
    local_184 = 0;
  }
  else {
    FUN_1449c0562(&local_f0);
    local_184 = *(int *)(lVar25 + 400);
  }
  uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
  local_100 = local_e0;
  iStack_fc = iStack_dc;
  local_110 = (undefined4)local_f0;
  uStack_10c = local_f0._4_4_;
  uStack_108 = (undefined4)uStack_e8;
  uStack_104 = uStack_e8._4_4_;
  local_180 = param_1;
  local_138 = plVar20;
  local_118 = plVar20;
  if ((iStack_dc != local_184) || (uStack_e8 != local_170)) {
    do {
      local_191 = *(byte *)(*local_118 + 4 + (longlong)iStack_fc * 0x10);
      if (local_191 == 0) {
        puVar23 = (uint *)(*local_118 + (longlong)iStack_fc * 0x10);
        lVar25 = local_160[6];
        lVar16 = local_140 * 0x50;
        uVar10 = *puVar23;
        local_190 = (longlong)(int)uVar10;
        if (*(int *)(lVar25 + 8 + lVar16) != *(int *)(lVar25 + 0x34 + lVar16)) {
          plVar14 = (longlong *)(lVar25 + lVar16);
          plVar20 = plVar14 + 7;
          if ((longlong *)plVar14[8] != (longlong *)0x0) {
            plVar20 = (longlong *)plVar14[8];
          }
          iVar15 = *(int *)((longlong)plVar20 + (ulonglong)((int)plVar14[9] - 1U & uVar10) * 4);
          if (iVar15 != -1) {
            do {
              if (*(uint *)(*plVar14 + (longlong)iVar15 * 0xc) == uVar10) goto LAB_146ed3626;
              iVar15 = *(int *)(*plVar14 + (longlong)iVar15 * 0xc + 4);
            } while (iVar15 != -1);
          }
        }
        uVar19 = 0;
        plVar20 = local_160;
        lVar25 = local_168;
        do {
          if ((local_191 & 1) != 0) break;
          lVar16 = plVar20[4];
          lVar17 = (longlong)*(int *)(uVar19 * 0x10 + 8 + lVar16 + lVar25);
          if (lVar17 != 0) {
            piVar21 = *(int **)(uVar19 * 0x10 + lVar16 + lVar25);
            piVar1 = piVar21 + lVar17;
            local_130 = *(longlong *)param_1[1];
            lVar11 = *(longlong *)(local_130 + 0x2f0);
            lVar12 = *plVar20;
            local_128 = local_190 * 0x1b8;
            lVar17 = lVar16 + local_128;
            fVar2 = *(float *)(param_1 + 2);
            fVar3 = *(float *)(lVar17 + 0x148);
            local_120 = lVar16;
            do {
              iVar15 = *piVar21;
              lVar26 = (longlong)iVar15;
              lVar22 = (longlong)*(int *)(lVar11 + 8 + lVar26 * 0xc);
              lVar16 = (longlong)*(int *)(lVar11 + 4 + lVar26 * 0xc);
              lVar18 = (longlong)*(int *)(lVar11 + lVar26 * 0xc);
              fVar4 = *(float *)(lVar12 + lVar18 * 0xc);
              fVar5 = *(float *)(lVar12 + lVar16 * 0xc);
              fVar27 = fVar4;
              if (fVar4 <= fVar5) {
                fVar27 = fVar5;
              }
              fVar28 = *(float *)(lVar12 + lVar22 * 0xc);
              if (fVar27 <= fVar28) {
                fVar27 = fVar28;
              }
              if (fVar3 <= fVar27 + fVar2) {
                fVar27 = fVar4;
                if (fVar5 <= fVar4) {
                  fVar27 = fVar5;
                }
                if (fVar28 <= fVar27) {
                  fVar27 = fVar28;
                }
                if (fVar27 - fVar2 < *(float *)(lVar17 + 0x154) ||
                    fVar27 - fVar2 == *(float *)(lVar17 + 0x154)) {
                  fVar5 = *(float *)(lVar12 + 4 + lVar18 * 0xc);
                  fVar27 = *(float *)(lVar12 + 4 + lVar16 * 0xc);
                  fVar28 = fVar5;
                  if (fVar5 <= fVar27) {
                    fVar28 = fVar27;
                  }
                  fVar29 = *(float *)(lVar12 + 4 + lVar22 * 0xc);
                  if (fVar28 <= fVar29) {
                    fVar28 = fVar29;
                  }
                  if (*(float *)(lVar17 + 0x14c) <= fVar28 + fVar2) {
                    fVar28 = fVar5;
                    if (fVar27 <= fVar5) {
                      fVar28 = fVar27;
                    }
                    if (fVar29 <= fVar28) {
                      fVar28 = fVar29;
                    }
                    if (fVar28 - fVar2 < *(float *)(lVar17 + 0x158) ||
                        fVar28 - fVar2 == *(float *)(lVar17 + 0x158)) {
                      fVar27 = *(float *)(lVar12 + 8 + lVar18 * 0xc);
                      fVar28 = *(float *)(lVar12 + 8 + lVar16 * 0xc);
                      fVar29 = fVar27;
                      if (fVar27 <= fVar28) {
                        fVar29 = fVar28;
                      }
                      fVar6 = *(float *)(lVar12 + 8 + lVar22 * 0xc);
                      if (fVar29 <= fVar6) {
                        fVar29 = fVar6;
                      }
                      if (*(float *)(lVar17 + 0x150) <= fVar29 + fVar2) {
                        fVar29 = fVar27;
                        if (fVar28 <= fVar27) {
                          fVar29 = fVar28;
                        }
                        if (fVar6 <= fVar29) {
                          fVar29 = fVar6;
                        }
                        if (fVar29 - fVar2 < *(float *)(lVar17 + 0x15c) ||
                            fVar29 - fVar2 == *(float *)(lVar17 + 0x15c)) {
                          uVar10 = (int)uVar19 + 10;
                          if (9 < uVar19) {
                            uVar10 = (int)uVar19 - 10;
                          }
                          lVar16 = (longlong)
                                   *(int *)((ulonglong)uVar10 * 0x10 + 8 + local_120 + local_128);
                          if (lVar16 != 0) {
                            lVar18 = *(longlong *)((ulonglong)uVar10 * 0x10 + local_120 + local_128)
                            ;
                            lVar22 = plVar20[2];
                            fVar28 = *(float *)(lVar22 + lVar26 * 0xc);
                            fVar29 = *(float *)(lVar22 + 4 + lVar26 * 0xc);
                            fVar6 = *(float *)(lVar22 + 8 + lVar26 * 0xc);
                            lVar16 = lVar16 << 2;
                            lVar26 = 0;
                            local_178 = puVar23;
                            do {
                              lVar24 = (longlong)*(int *)(lVar18 + lVar26);
                              fVar7 = *(float *)(lVar22 + lVar24 * 0xc);
                              fVar8 = *(float *)(lVar22 + 4 + lVar24 * 0xc);
                              fVar9 = *(float *)(lVar22 + 8 + lVar24 * 0xc);
                              if (((fVar6 * fVar9 + fVar28 * fVar7 + fVar29 * fVar8 < -0.9999) &&
                                  (lVar24 = (longlong)*(int *)(lVar11 + lVar24 * 0xc),
                                  ABS((fVar27 - *(float *)(lVar12 + 8 + lVar24 * 0xc)) * fVar9 +
                                      (fVar4 - *(float *)(lVar12 + lVar24 * 0xc)) * fVar7 +
                                      fVar8 * (fVar5 - *(float *)(lVar12 + 4 + lVar24 * 0xc))) <
                                  fVar2)) &&
                                 (local_158 = lVar22, local_150 = lVar18, local_148 = lVar16,
                                 cVar13 = FUN_146ed3716(plVar20,local_130,iVar15),
                                 lVar18 = local_150, lVar22 = local_158, lVar16 = local_148,
                                 plVar20 = local_160, lVar25 = local_168, cVar13 != '\0')) {
                                *(undefined1 *)(local_178 + 1) = 1;
                                local_191 = 1;
                                puVar23 = local_178;
                                param_1 = local_180;
                                goto LAB_146ed35a7;
                              }
                              lVar26 = lVar26 + 4;
                              puVar23 = local_178;
                              param_1 = local_180;
                            } while (lVar16 != lVar26);
                          }
                          if ((local_191 & 1) != 0) break;
                        }
                      }
                    }
                  }
                }
              }
              piVar21 = piVar21 + 1;
            } while (piVar21 != piVar1);
          }
LAB_146ed35a7:
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x14);
      }
LAB_146ed3626:
      local_100 = local_100 & ~uStack_10c;
      FUN_1449c0562(&local_110);
    } while (local_118 != local_138 ||
             (CONCAT44(uStack_104,uStack_108) != local_170 || iStack_fc != local_184));
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed3716 FUN_146ed3716 body=2163 status=ok
// SIG undefined FUN_146ed3716(void)

undefined8 FUN_146ed3716(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  undefined7 uVar4;
  
  lVar5 = *(longlong *)(param_2 + 0x2f0);
  lVar2 = (longlong)param_3;
  lVar6 = (longlong)*(int *)(lVar5 + 4 + lVar2 * 0xc);
  lVar1 = *param_1;
  lVar8 = (longlong)*(int *)(lVar5 + lVar2 * 0xc);
  fVar10 = *(float *)(lVar1 + 8 + lVar8 * 0xc);
  fVar9 = *(float *)(lVar1 + 8 + lVar6 * 0xc) - fVar10;
  fVar27 = *(float *)(lVar1 + lVar8 * 0xc);
  fVar15 = *(float *)(lVar1 + 4 + lVar8 * 0xc);
  fVar26 = *(float *)(lVar1 + 4 + lVar6 * 0xc) - fVar15;
  fVar14 = *(float *)(lVar1 + lVar6 * 0xc) - fVar27;
  fVar11 = fVar9 * fVar9 + fVar14 * fVar14 + fVar26 * fVar26;
  fVar17 = fVar9;
  fVar18 = fVar26;
  fVar24 = fVar14;
  if (1e-08 < fVar11) {
    fVar17 = 1.0 / SQRT(fVar11);
    fVar24 = fVar14 * fVar17;
    fVar18 = fVar26 * fVar17;
    fVar17 = fVar17 * fVar9;
  }
  lVar6 = param_1[2];
  fVar11 = *(float *)(lVar6 + lVar2 * 0xc);
  fVar12 = *(float *)(lVar6 + 4 + lVar2 * 0xc);
  fVar22 = fVar11 * fVar18 - fVar24 * fVar12;
  fVar16 = *(float *)(lVar6 + 8 + lVar2 * 0xc);
  fVar11 = fVar16 * fVar24 - fVar17 * fVar11;
  fVar16 = fVar12 * fVar17 - fVar16 * fVar18;
  fVar12 = fVar22 * fVar22 + fVar16 * fVar16 + fVar11 * fVar11;
  if (1e-08 < fVar12) {
    fVar12 = 1.0 / SQRT(fVar12);
    fVar16 = fVar16 * fVar12;
    fVar11 = fVar11 * fVar12;
    fVar22 = fVar22 * fVar12;
  }
  lVar2 = (longlong)*(int *)(lVar5 + lVar2 * 0xc + 8);
  lVar6 = (longlong)param_4;
  lVar8 = (longlong)*(int *)(lVar5 + 8 + lVar6 * 0xc);
  lVar7 = (longlong)*(int *)(lVar5 + 4 + lVar6 * 0xc);
  lVar5 = (longlong)*(int *)(lVar5 + lVar6 * 0xc);
  fVar12 = fVar9 * fVar22 + fVar14 * fVar16 + fVar26 * fVar11;
  fVar28 = fVar9 * fVar17 + fVar14 * fVar24 + fVar26 * fVar18;
  fVar9 = *(float *)(lVar1 + 8 + lVar2 * 0xc) - fVar10;
  fVar19 = *(float *)(lVar1 + 4 + lVar2 * 0xc) - fVar15;
  fVar14 = *(float *)(lVar1 + lVar2 * 0xc) - fVar27;
  fVar26 = fVar9 * fVar22 + fVar14 * fVar16 + fVar11 * fVar19;
  fVar9 = fVar9 * fVar17 + fVar14 * fVar24 + fVar19 * fVar18;
  fVar23 = *(float *)(lVar1 + 8 + lVar8 * 0xc) - fVar10;
  fVar21 = *(float *)(lVar1 + 4 + lVar8 * 0xc) - fVar15;
  fVar20 = *(float *)(lVar1 + 8 + lVar7 * 0xc) - fVar10;
  fVar19 = *(float *)(lVar1 + 4 + lVar7 * 0xc) - fVar15;
  fVar10 = *(float *)(lVar1 + 8 + lVar5 * 0xc) - fVar10;
  fVar15 = *(float *)(lVar1 + 4 + lVar5 * 0xc) - fVar15;
  fVar14 = *(float *)(lVar1 + lVar8 * 0xc) - fVar27;
  fVar13 = *(float *)(lVar1 + lVar7 * 0xc) - fVar27;
  fVar27 = *(float *)(lVar1 + lVar5 * 0xc) - fVar27;
  fVar25 = fVar23 * fVar22 + fVar14 * fVar16 + fVar11 * fVar21;
  fVar21 = fVar23 * fVar17 + fVar14 * fVar24 + fVar21 * fVar18;
  fVar14 = fVar20 * fVar22 + fVar13 * fVar16 + fVar11 * fVar19;
  fVar19 = fVar20 * fVar17 + fVar13 * fVar24 + fVar19 * fVar18;
  fVar11 = fVar22 * fVar10 + fVar16 * fVar27 + fVar11 * fVar15;
  fVar17 = fVar10 * fVar17 + fVar27 * fVar24 + fVar15 * fVar18;
  fVar15 = -fVar28;
  fVar27 = (float)(-(uint)(fVar15 < fVar28) & 0x3f800000 |
                  ~-(uint)(fVar15 < fVar28) & -(uint)(fVar28 < fVar15) & 0xbf800000) * fVar26 -
           fVar9 * fVar12;
  fVar15 = fVar15 * fVar27;
  fVar10 = fVar12 * fVar27;
  if (((fVar10 * fVar21 + fVar15 * fVar25 < 0.0) || (fVar10 * fVar19 + fVar15 * fVar14 < 0.0)) ||
     (fVar10 * fVar17 + fVar15 * fVar11 < 0.0)) {
    fVar15 = -(fVar9 - fVar28) * fVar27;
    fVar10 = (fVar26 - fVar12) * fVar27;
    if ((((fVar21 - fVar28) * fVar10 + (fVar25 - fVar12) * fVar15 < 0.0) ||
        ((fVar19 - fVar28) * fVar10 + (fVar14 - fVar12) * fVar15 < 0.0)) ||
       (fVar10 * (fVar17 - fVar28) + fVar15 * (fVar11 - fVar12) < 0.0)) {
      fVar10 = -(0.0 - fVar9) * fVar27;
      fVar27 = (0.0 - fVar26) * fVar27;
      if ((((fVar21 - fVar9) * fVar27 + (fVar25 - fVar26) * fVar10 < 0.0) ||
          ((fVar19 - fVar9) * fVar27 + (fVar14 - fVar26) * fVar10 < 0.0)) ||
         (fVar27 * (fVar17 - fVar9) + fVar10 * (fVar11 - fVar26) < 0.0)) {
        fVar10 = fVar19 - fVar21;
        fVar27 = (fVar11 - fVar25) *
                 (float)(-(uint)(0.0 < fVar10) & 0x3f800000 |
                        ~-(uint)(0.0 < fVar10) & -(uint)(fVar10 < 0.0) & 0xbf800000) -
                 (fVar17 - fVar21) * (fVar14 - fVar25);
        fVar15 = -fVar10 * fVar27;
        fVar10 = (fVar14 - fVar25) * fVar27;
        if ((((0.0 - fVar21) * fVar10 + (0.0 - fVar25) * fVar15 < 0.0) ||
            ((fVar28 - fVar21) * fVar10 + (fVar12 - fVar25) * fVar15 < 0.0)) ||
           (fVar10 * (fVar9 - fVar21) + (fVar26 - fVar25) * fVar15 < 0.0)) {
          fVar15 = -(fVar17 - fVar19) * fVar27;
          fVar10 = (fVar11 - fVar14) * fVar27;
          if ((((0.0 - fVar19) * fVar10 + (0.0 - fVar14) * fVar15 < 0.0) ||
              ((fVar28 - fVar19) * fVar10 + (fVar12 - fVar14) * fVar15 < 0.0)) ||
             (fVar10 * (fVar9 - fVar19) + (fVar26 - fVar14) * fVar15 < 0.0)) {
            fVar10 = -(fVar21 - fVar17) * fVar27;
            fVar27 = (fVar25 - fVar11) * fVar27;
            uVar4 = (undefined7)((ulonglong)lVar1 >> 8);
            uVar3 = CONCAT71(uVar4,1);
            if ((0.0 - fVar17) * fVar27 + (0.0 - fVar11) * fVar10 < 0.0) {
              return uVar3;
            }
            if ((fVar28 - fVar17) * fVar27 + (fVar12 - fVar11) * fVar10 < 0.0) {
              return uVar3;
            }
            return CONCAT71(uVar4,fVar27 * (fVar9 - fVar17) + (fVar26 - fVar11) * fVar10 < 0.0);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146ed407a FUN_146ed407a body=63 status=ok
// SIG undefined FUN_146ed407a(void)

undefined1 FUN_146ed407a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146ecd102(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 146ed40e2 FUN_146ed40e2 body=59 status=ok
// SIG undefined FUN_146ed40e2(void)

undefined8 FUN_146ed40e2(longlong *param_1)

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



// FUNCTION 146ed412e FUN_146ed412e body=38 status=ok
// SIG undefined FUN_146ed412e(void)

void FUN_146ed412e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14054b30a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 146ed41a4 FUN_146ed41a4 body=123 status=ok
// SIG undefined FUN_146ed41a4(void)

undefined8 * FUN_146ed41a4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146ed4220();
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



// FUNCTION 146ed4220 FUN_146ed4220 body=421 status=ok
// SIG undefined FUN_146ed4220(void)

longlong * FUN_146ed4220(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x28 + (longlong)iVar9 * 0x40);
        if (plVar4 != (longlong *)0x0) {
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ed43c6 FUN_146ed43c6 body=123 status=ok
// SIG undefined FUN_146ed43c6(void)

undefined8 * FUN_146ed43c6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146ed4442();
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



// FUNCTION 146ed4442 FUN_146ed4442 body=146 status=ok
// SIG undefined FUN_146ed4442(void)

longlong * FUN_146ed4442(longlong *param_1,longlong *param_2)

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



// FUNCTION 146ed44d4 FUN_146ed44d4 body=54 status=ok
// SIG undefined FUN_146ed44d4(void)

void FUN_146ed44d4(longlong *param_1)

{
  FUN_146ed450a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ed450a FUN_146ed450a body=128 status=ok
// SIG undefined FUN_146ed450a(void)

void FUN_146ed450a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 146ed4598 FUN_146ed4598 body=39 status=ok
// SIG undefined FUN_146ed4598(void)

void FUN_146ed4598(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_1401a2688(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146ed45c0 FUN_146ed45c0 body=187 status=ok
// SIG undefined FUN_146ed45c0(void)

void FUN_146ed45c0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  undefined8 *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  FUN_146ed49ae(&local_48,uVar1);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    puVar2 = local_48;
    do {
      puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar6 * 4) * 0x60 + param_1[2]);
      puVar5 = puVar2;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      puVar2 = puVar2 + 0xc;
    } while (uVar1 != uVar6);
  }
  local_38 = (undefined8 *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed467c FUN_146ed467c body=111 status=ok
// SIG undefined FUN_146ed467c(void)

void FUN_146ed467c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      puVar4 = (undefined8 *)(param_2[2] + lVar3);
      puVar5 = (undefined8 *)(param_1[2] + lVar3);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = lVar3 + 0x60;
    } while ((ulonglong)uVar1 * 0x60 != lVar3);
  }
  return;
}



// FUNCTION 146ed46ec FUN_146ed46ec body=201 status=ok
// SIG undefined FUN_146ed46ec(void)

void FUN_146ed46ec(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar8 = (longlong)(param_5 + param_3);
    lVar6 = (longlong)param_3;
    lVar3 = lVar6 * 0x60;
    lVar7 = lVar8 * 0x60;
    do {
      if ((int)param_1[3] <= lVar8) {
        return;
      }
      if (param_4 <= lVar6) {
        return;
      }
      puVar4 = (undefined8 *)(param_2[2] + lVar3);
      puVar5 = (undefined8 *)(param_1[2] + lVar7);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar3 = lVar3 + 0x60;
      lVar7 = lVar7 + 0x60;
    } while (lVar6 < iVar1);
  }
  return;
}



// FUNCTION 146ed47c4 FUN_146ed47c4 body=122 status=ok
// SIG undefined FUN_146ed47c4(void)

void FUN_146ed47c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed4840 FUN_146ed4840 body=271 status=ok
// SIG undefined FUN_146ed4840(void)

void FUN_146ed4840(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar5 * 0x60 + (longlong)pvVar3),
                    (longlong)iVar7 * 0x60);
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0x60 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar6 * 0x60 + (longlong)pvVar3),(longlong)iVar7 * 0x60)
          ;
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_1401a2688(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed4974 FUN_146ed4974 body=57 status=ok
// SIG undefined FUN_146ed4974(void)

undefined8 * FUN_146ed4974(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6b350;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed49ae FUN_146ed49ae body=69 status=ok
// SIG undefined FUN_146ed49ae(void)

int FUN_146ed49ae(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_144a2c682(param_1,iVar1);
  }
  FUN_1400f4f3e((longlong)iVar1 * 0x60 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ed4a00 FUN_146ed4a00 body=38 status=ok
// SIG undefined FUN_146ed4a00(void)

void FUN_146ed4a00(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed5086(param_1 + 0x10);
  return;
}



// FUNCTION 146ed4a28 FUN_146ed4a28 body=178 status=ok
// SIG undefined FUN_146ed4a28(void)

void FUN_146ed4a28(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146ed50e6(&local_48,uVar4);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + lVar5) * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uVar4 << 2 != lVar5);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed4adc FUN_146ed4adc body=98 status=ok
// SIG undefined FUN_146ed4adc(void)

void FUN_146ed4adc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_1[2];
      uVar2 = ((undefined8 *)(param_2[2] + lVar4))[1];
      *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(param_2[2] + lVar4);
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return;
}



// FUNCTION 146ed4b3e FUN_146ed4b3e body=181 status=ok
// SIG undefined FUN_146ed4b3e(void)

void FUN_146ed4b3e(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar6 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar6)) {
    lVar9 = (longlong)(param_5 + param_3);
    lVar10 = (longlong)param_3;
    lVar7 = lVar10 << 4;
    lVar8 = lVar9 << 4;
    do {
      if ((int)param_1[3] <= lVar9) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1[2] + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 1;
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar6);
  }
  return;
}



// FUNCTION 146ed4bfe FUN_146ed4bfe body=57 status=ok
// SIG undefined FUN_146ed4bfe(void)

undefined8 * FUN_146ed4bfe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f688c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed4c38 FUN_146ed4c38 body=122 status=ok
// SIG undefined FUN_146ed4c38(void)

void FUN_146ed4c38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed4cb4 FUN_146ed4cb4 body=257 status=ok
// SIG undefined FUN_146ed4cb4(void)

void FUN_146ed4cb4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed5086(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed4dbe FUN_146ed4dbe body=206 status=ok
// SIG undefined FUN_146ed4dbe(void)

void FUN_146ed4dbe(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146ed512a(param_2,param_1 + 0x10);
  }
  else {
    FUN_146ed5228(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed4eae FUN_146ed4eae body=57 status=ok
// SIG undefined FUN_146ed4eae(void)

undefined8 * FUN_146ed4eae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f688c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed4ee8 FUN_146ed4ee8 body=115 status=ok
// SIG undefined FUN_146ed4ee8(void)

void FUN_146ed4ee8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed4f5e(param_1,iVar1);
    }
    FUN_146ed4f5c((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146ed4fe4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed4f5c FUN_146ed4f5c body=1 status=ok
// SIG undefined FUN_146ed4f5c(void)

void FUN_146ed4f5c(void)

{
  return;
}



// FUNCTION 146ed4f5e FUN_146ed4f5e body=132 status=ok
// SIG undefined FUN_146ed4f5e(void)

void FUN_146ed4f5e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ed4fe4 FUN_146ed4fe4 body=63 status=ok
// SIG undefined FUN_146ed4fe4(void)

void FUN_146ed4fe4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed5024(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,0x10);
  }
  return;
}



// FUNCTION 146ed5024 FUN_146ed5024 body=97 status=ok
// SIG undefined FUN_146ed5024(void)

ulonglong FUN_146ed5024(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0x10);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146ed5086 FUN_146ed5086 body=96 status=ok
// SIG undefined FUN_146ed5086(void)

void FUN_146ed5086(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,0x10);
  }
  return;
}



// FUNCTION 146ed50e6 FUN_146ed50e6 body=68 status=ok
// SIG undefined FUN_146ed50e6(void)

int FUN_146ed50e6(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146ed4f5e(param_1,iVar1);
  }
  FUN_146ed4f5c((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ed512a FUN_146ed512a body=252 status=ok
// SIG undefined FUN_146ed512a(void)

longlong * FUN_146ed512a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ed5086(param_2);
    }
    FUN_146ed4ee8(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140a4aa2c(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ed5228 FUN_146ed5228 body=541 status=ok
// SIG undefined FUN_146ed5228(void)

void FUN_146ed5228(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146ed5446(param_2,param_1);
    goto LAB_146ed53e7;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 4,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146ed53e7;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146ed53d4:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_146ed5086(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_146ed4f5e(param_1,iVar4);
        }
        goto LAB_146ed53d4;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146ed53e7:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed5446 FUN_146ed5446 body=288 status=ok
// SIG undefined FUN_146ed5446(void)

longlong * FUN_146ed5446(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 4,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 4);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146ed5086(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146ed5568(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ed5568 FUN_146ed5568 body=98 status=ok
// SIG undefined FUN_146ed5568(void)

void FUN_146ed5568(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,0x10);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ed55d4 FUN_146ed55d4 body=38 status=ok
// SIG undefined FUN_146ed55d4(void)

void FUN_146ed55d4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed5d58(param_1 + 0x10);
  return;
}



// FUNCTION 146ed55fc FUN_146ed55fc body=251 status=ok
// SIG undefined FUN_146ed55fc(void)

void FUN_146ed55fc(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (**(code **)(*param_1 + 0x60))();
  local_68 = 0;
  uStack_60 = 0;
  FUN_146ed5dca(&local_68,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar1 = (undefined4 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar5 * 4) * 0x60);
      lVar2 = local_68 + 8 + lVar4;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      *(undefined4 *)(lVar2 + -4) = puVar1[1];
      FUN_145c3f772(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x50) = puVar1[0x16];
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x60;
    } while (uVar3 != uVar5);
  }
  local_58 = param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = local_68;
  param_1[3] = uStack_60;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_146ed5ab1(local_58,uStack_50 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed56f8 FUN_146ed56f8 body=151 status=ok
// SIG undefined FUN_146ed56f8(void)

void FUN_146ed56f8(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      puVar1 = (undefined4 *)(param_2[2] + lVar4);
      lVar2 = param_1[2] + 8 + lVar4;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      *(undefined4 *)(lVar2 + -4) = puVar1[1];
      FUN_145c3f772(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x50) = puVar1[0x16];
      lVar4 = lVar4 + 0x60;
    } while ((ulonglong)uVar3 * 0x60 != lVar4);
  }
  return;
}



// FUNCTION 146ed5790 FUN_146ed5790 body=94 status=ok
// SIG undefined FUN_146ed5790(void)

void FUN_146ed5790(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ed5e0c(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ed57fc FUN_146ed57fc body=69 status=ok
// SIG undefined FUN_146ed57fc(void)

undefined8 * FUN_146ed57fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f689e0;
  FUN_146ed5ab1(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed5842 FUN_146ed5842 body=122 status=ok
// SIG undefined FUN_146ed5842(void)

void FUN_146ed5842(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed58be FUN_146ed58be body=172 status=ok
// SIG undefined FUN_146ed58be(void)

void FUN_146ed58be(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146ed5c42(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146ed5c42(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed5d58(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed5972 FUN_146ed5972 body=185 status=ok
// SIG undefined FUN_146ed5972(void)

void FUN_146ed5972(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed5ee6(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed5a32 FUN_146ed5a32 body=58 status=ok
// SIG undefined FUN_146ed5a32(void)

void FUN_146ed5a32(longlong param_1)

{
  FUN_146ed5ab1(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ed5d58(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ed5a6c FUN_146ed5a6c body=69 status=ok
// SIG undefined FUN_146ed5a6c(void)

undefined8 * FUN_146ed5a6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f689e0;
  FUN_146ed5ab1(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed5ab1 FUN_146ed5ab1 body=63 status=ok
// SIG undefined FUN_146ed5ab1(void)

void FUN_146ed5ab1(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ed5af0 FUN_146ed5af0 body=122 status=ok
// SIG undefined FUN_146ed5af0(void)

void FUN_146ed5af0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed5bae(param_1,iVar1);
    }
    FUN_146ed5b6b((longlong)iVar1 * 0x60 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146ed5c42(param_1,param_2,iVar1 - param_2);
    FUN_146ed5caa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed5b6b FUN_146ed5b6b body=67 status=ok
// SIG undefined FUN_146ed5b6b(void)

void FUN_146ed5b6b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xb) = 1;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 146ed5bae FUN_146ed5bae body=147 status=ok
// SIG undefined FUN_146ed5bae(void)

void FUN_146ed5bae(longlong param_1,int param_2)

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



// FUNCTION 146ed5c42 FUN_146ed5c42 body=104 status=ok
// SIG undefined FUN_146ed5c42(void)

void FUN_146ed5c42(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x60 + *param_1);
  FUN_146ed5ab1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ed5caa FUN_146ed5caa body=62 status=ok
// SIG undefined FUN_146ed5caa(void)

void FUN_146ed5caa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed5ce8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 146ed5ce8 FUN_146ed5ce8 body=112 status=ok
// SIG undefined FUN_146ed5ce8(void)

ulonglong FUN_146ed5ce8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146ed5d22;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_146ed5d22:
  return param_2 & 0xffffffff;
}



// FUNCTION 146ed5d58 FUN_146ed5d58 body=113 status=ok
// SIG undefined FUN_146ed5d58(void)

void FUN_146ed5d58(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 146ed5dca FUN_146ed5dca body=66 status=ok
// SIG undefined FUN_146ed5dca(void)

void FUN_146ed5dca(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146ed5bae(param_1,iVar1);
  }
  FUN_146ed5b6b((longlong)iVar1 * 0x60 + *param_1,param_2);
  return;
}



// FUNCTION 146ed5e0c FUN_146ed5e0c body=218 status=ok
// SIG undefined FUN_146ed5e0c(void)

void FUN_146ed5e0c(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar3) {
    lVar7 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar4 = lVar7 * 0x60;
    lVar6 = lVar5 * 0x60;
    do {
      if ((int)param_1[1] <= lVar5 || param_4 <= lVar7) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar4);
      lVar2 = *param_1 + 8 + lVar6;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      *(undefined4 *)(lVar2 + -4) = puVar1[1];
      FUN_145c3f772(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x50) = puVar1[0x16];
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 1;
      iVar3 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar4 = lVar4 + 0x60;
      lVar6 = lVar6 + 0x60;
    } while (lVar7 < iVar3);
  }
  return;
}



// FUNCTION 146ed5ee6 FUN_146ed5ee6 body=257 status=ok
// SIG undefined FUN_146ed5ee6(void)

longlong * FUN_146ed5ee6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ed5d58(param_2);
    }
    FUN_146ed5af0(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ed5fe9(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x60;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ed5fe9 FUN_146ed5fe9 body=269 status=ok
// SIG undefined FUN_146ed5fe9(void)

void FUN_146ed5fe9(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  plVar2 = (longlong *)FUN_140aa5998(param_1,param_2 + 2);
  param_2 = param_2 + 0x16;
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146ed60b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x170))(plVar2,param_2,4,*(code **)(*plVar2 + 0x170));
      return;
    }
    thunk_FUN_14572512c(plVar2,param_2);
    return;
  }
  *param_2 = *puVar1;
  *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  return;
}



// FUNCTION 146ed6102 FUN_146ed6102 body=39 status=ok
// SIG undefined FUN_146ed6102(void)

void FUN_146ed6102(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140504644(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146ed612a FUN_146ed612a body=178 status=ok
// SIG undefined FUN_146ed612a(void)

void FUN_146ed612a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146b665cc(&local_48,uVar4);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + lVar5) * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uVar4 << 2 != lVar5);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed61de FUN_146ed61de body=98 status=ok
// SIG undefined FUN_146ed61de(void)

void FUN_146ed61de(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_1[2];
      uVar2 = ((undefined8 *)(param_2[2] + lVar4))[1];
      *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(param_2[2] + lVar4);
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return;
}



// FUNCTION 146ed6240 FUN_146ed6240 body=181 status=ok
// SIG undefined FUN_146ed6240(void)

void FUN_146ed6240(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar6 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar6)) {
    lVar9 = (longlong)(param_5 + param_3);
    lVar10 = (longlong)param_3;
    lVar7 = lVar10 << 4;
    lVar8 = lVar9 << 4;
    do {
      if ((int)param_1[3] <= lVar9) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1[2] + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 1;
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar6);
  }
  return;
}



// FUNCTION 146ed6300 FUN_146ed6300 body=57 status=ok
// SIG undefined FUN_146ed6300(void)

undefined8 * FUN_146ed6300(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68b00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed633a FUN_146ed633a body=122 status=ok
// SIG undefined FUN_146ed633a(void)

void FUN_146ed633a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed63b6 FUN_146ed63b6 body=257 status=ok
// SIG undefined FUN_146ed63b6(void)

void FUN_146ed63b6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140504644(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed64c0 FUN_146ed64c0 body=206 status=ok
// SIG undefined FUN_146ed64c0(void)

void FUN_146ed64c0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146ed65e9(param_2,param_1 + 0x10);
  }
  else {
    FUN_146ed66e8(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed65b0 FUN_146ed65b0 body=57 status=ok
// SIG undefined FUN_146ed65b0(void)

undefined8 * FUN_146ed65b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68b00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed65e9 FUN_146ed65e9 body=252 status=ok
// SIG undefined FUN_146ed65e9(void)

longlong * FUN_146ed65e9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140504644(param_2);
    }
    FUN_146b71430(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1402ac1b3(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ed66e8 FUN_146ed66e8 body=543 status=ok
// SIG undefined FUN_146ed66e8(void)

void FUN_146ed66e8(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146ed6908(param_2,param_1);
    goto LAB_146ed68cd;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 4,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_146ed68cd;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_146ed68ba:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_140504644(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_140c60952(param_1,iVar4);
        }
        goto LAB_146ed68ba;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_146ed68cd:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed6908 FUN_146ed6908 body=290 status=ok
// SIG undefined FUN_146ed6908(void)

longlong * FUN_146ed6908(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 4,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 4);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140504644(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1417246d8(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 << 4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ed6a36 FUN_146ed6a36 body=38 status=ok
// SIG undefined FUN_146ed6a36(void)

void FUN_146ed6a36(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed709e(param_1 + 0x10);
  return;
}



// FUNCTION 146ed6a5e FUN_146ed6a5e body=220 status=ok
// SIG undefined FUN_146ed6a5e(void)

void FUN_146ed6a5e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uVar1 = uStack_40._4_4_;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar2;
  if (uVar2 != 0) {
    uStack_40._4_4_ = uVar1;
    FUN_146ed6f7c(&local_48);
    memset(local_48,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar3 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar3 * 4) * 8);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed6b3c FUN_146ed6b3c body=92 status=ok
// SIG undefined FUN_146ed6b3c(void)

void FUN_146ed6b3c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ed6b98 FUN_146ed6b98 body=149 status=ok
// SIG undefined FUN_146ed6b98(void)

void FUN_146ed6b98(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ed6c38 FUN_146ed6c38 body=57 status=ok
// SIG undefined FUN_146ed6c38(void)

undefined8 * FUN_146ed6c38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68c20;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed6c72 FUN_146ed6c72 body=122 status=ok
// SIG undefined FUN_146ed6c72(void)

void FUN_146ed6c72(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed6cee FUN_146ed6cee body=249 status=ok
// SIG undefined FUN_146ed6cee(void)

void FUN_146ed6cee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed709e(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed6df0 FUN_146ed6df0 body=185 status=ok
// SIG undefined FUN_146ed6df0(void)

void FUN_146ed6df0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed70fe(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed6eca FUN_146ed6eca body=57 status=ok
// SIG undefined FUN_146ed6eca(void)

undefined8 * FUN_146ed6eca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68c20;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed6f04 FUN_146ed6f04 body=118 status=ok
// SIG undefined FUN_146ed6f04(void)

void FUN_146ed6f04(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed6f7c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146ed7002(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed6f7c FUN_146ed6f7c body=132 status=ok
// SIG undefined FUN_146ed6f7c(void)

void FUN_146ed6f7c(longlong param_1,int param_2)

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



// FUNCTION 146ed7002 FUN_146ed7002 body=62 status=ok
// SIG undefined FUN_146ed7002(void)

void FUN_146ed7002(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed7040(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146ed7040 FUN_146ed7040 body=93 status=ok
// SIG undefined FUN_146ed7040(void)

ulonglong FUN_146ed7040(uint param_1,uint param_2)

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



// FUNCTION 146ed709e FUN_146ed709e body=96 status=ok
// SIG undefined FUN_146ed709e(void)

void FUN_146ed709e(longlong param_1,int param_2)

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



// FUNCTION 146ed70fe FUN_146ed70fe body=200 status=ok
// SIG undefined FUN_146ed70fe(void)

longlong * FUN_146ed70fe(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 8) << 3,(longlong)*(int *)(param_2 + 0xc) << 3);
  local_1c = *(int *)(param_2 + 8);
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (local_1c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_1c);
  }
  if (*(int *)(param_2 + 0xc) < local_1c) {
    FUN_146ed709e(param_2);
  }
  FUN_146ed6f04(param_2,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ed71d2 FUN_146ed71d2 body=38 status=ok
// SIG undefined FUN_146ed71d2(void)

void FUN_146ed71d2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed7886(param_1 + 0x10);
  return;
}



// FUNCTION 146ed71fa FUN_146ed71fa body=299 status=ok
// SIG undefined FUN_146ed71fa(void)

void FUN_146ed71fa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146ed7764(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar4 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar5) != puVar3) {
          plVar1 = *(longlong **)((longlong)local_58 + uVar4 * 8);
          *(undefined8 *)((longlong)local_58 + uVar4 * 8) = *puVar3;
          *puVar3 = 0;
          if (plVar1 != (longlong *)0x0) {
            if (*plVar1 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar1);
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar2 != uVar4);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146ed7663(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed7330 FUN_146ed7330 body=69 status=ok
// SIG undefined FUN_146ed7330(void)

undefined8 * FUN_146ed7330(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68d40;
  FUN_146ed7663(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed7376 FUN_146ed7376 body=122 status=ok
// SIG undefined FUN_146ed7376(void)

void FUN_146ed7376(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed73f2 FUN_146ed73f2 body=298 status=ok
// SIG undefined FUN_146ed73f2(void)

void FUN_146ed73f2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_146ed7663(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_146ed7663(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed7886(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed7524 FUN_146ed7524 body=185 status=ok
// SIG undefined FUN_146ed7524(void)

void FUN_146ed7524(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed78e6(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed75e4 FUN_146ed75e4 body=58 status=ok
// SIG undefined FUN_146ed75e4(void)

void FUN_146ed75e4(longlong param_1)

{
  FUN_146ed7663(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ed7886(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ed761e FUN_146ed761e body=69 status=ok
// SIG undefined FUN_146ed761e(void)

undefined8 * FUN_146ed761e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68d40;
  FUN_146ed7663(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed7663 FUN_146ed7663 body=69 status=ok
// SIG undefined FUN_146ed7663(void)

void FUN_146ed7663(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146ed76a8 FUN_146ed76a8 body=187 status=ok
// SIG undefined FUN_146ed76a8(void)

void FUN_146ed76a8(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_146ed7764(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_146ed7663(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_146ed77ea(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed7764 FUN_146ed7764 body=132 status=ok
// SIG undefined FUN_146ed7764(void)

void FUN_146ed7764(longlong param_1,int param_2)

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



// FUNCTION 146ed77ea FUN_146ed77ea body=62 status=ok
// SIG undefined FUN_146ed77ea(void)

void FUN_146ed77ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed7828(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146ed7828 FUN_146ed7828 body=93 status=ok
// SIG undefined FUN_146ed7828(void)

ulonglong FUN_146ed7828(uint param_1,uint param_2)

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



// FUNCTION 146ed7886 FUN_146ed7886 body=96 status=ok
// SIG undefined FUN_146ed7886(void)

void FUN_146ed7886(longlong param_1,int param_2)

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



// FUNCTION 146ed78e6 FUN_146ed78e6 body=249 status=ok
// SIG undefined FUN_146ed78e6(void)

longlong * FUN_146ed78e6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ed7886(param_2);
    }
    FUN_146ed76a8(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ed79e1(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ed79e1 FUN_146ed79e1 body=217 status=ok
// SIG undefined FUN_146ed79e1(void)

longlong * FUN_146ed79e1(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_24 = (uint)(*param_2 != 0);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    uVar4 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_1);
      uVar4 = local_24;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar4 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      plVar3 = (longlong *)*param_2;
      *param_2 = (longlong)puVar5;
      if (plVar3 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
    }
    FUN_146c978d6(param_1,*param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed7ac6 FUN_146ed7ac6 body=38 status=ok
// SIG undefined FUN_146ed7ac6(void)

void FUN_146ed7ac6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d8867a(param_1 + 0x10);
  return;
}



// FUNCTION 146ed7aee FUN_146ed7aee body=220 status=ok
// SIG undefined FUN_146ed7aee(void)

void FUN_146ed7aee(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uVar1 = uStack_40._4_4_;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar2;
  if (uVar2 != 0) {
    uStack_40._4_4_ = uVar1;
    FUN_146d885f4(&local_48);
    memset(local_48,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar3 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar3 * 4) * 8);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ed7bcc FUN_146ed7bcc body=92 status=ok
// SIG undefined FUN_146ed7bcc(void)

void FUN_146ed7bcc(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ed7c28 FUN_146ed7c28 body=149 status=ok
// SIG undefined FUN_146ed7c28(void)

void FUN_146ed7c28(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ed7cc8 FUN_146ed7cc8 body=57 status=ok
// SIG undefined FUN_146ed7cc8(void)

undefined8 * FUN_146ed7cc8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68e60;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed7d02 FUN_146ed7d02 body=122 status=ok
// SIG undefined FUN_146ed7d02(void)

void FUN_146ed7d02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed7d7e FUN_146ed7d7e body=249 status=ok
// SIG undefined FUN_146ed7d7e(void)

void FUN_146ed7d7e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d8867a(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed7e80 FUN_146ed7e80 body=185 status=ok
// SIG undefined FUN_146ed7e80(void)

void FUN_146ed7e80(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed80a7(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed7f5a FUN_146ed7f5a body=57 status=ok
// SIG undefined FUN_146ed7f5a(void)

undefined8 * FUN_146ed7f5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68e60;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed7f94 FUN_146ed7f94 body=118 status=ok
// SIG undefined FUN_146ed7f94(void)

void FUN_146ed7f94(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d885f4(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146ed800c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed800c FUN_146ed800c body=62 status=ok
// SIG undefined FUN_146ed800c(void)

void FUN_146ed800c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed804a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146ed804a FUN_146ed804a body=93 status=ok
// SIG undefined FUN_146ed804a(void)

ulonglong FUN_146ed804a(uint param_1,uint param_2)

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



// FUNCTION 146ed80a7 FUN_146ed80a7 body=200 status=ok
// SIG undefined FUN_146ed80a7(void)

longlong * FUN_146ed80a7(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 8) << 3,(longlong)*(int *)(param_2 + 0xc) << 3);
  local_1c = *(int *)(param_2 + 8);
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (local_1c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_1c);
  }
  if (*(int *)(param_2 + 0xc) < local_1c) {
    FUN_146d8867a(param_2);
  }
  FUN_146ed7f94(param_2,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146ed817e FUN_146ed817e body=38 status=ok
// SIG undefined FUN_146ed817e(void)

void FUN_146ed817e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d8a222(param_1 + 0x10);
  return;
}



// FUNCTION 146ed81a6 FUN_146ed81a6 body=279 status=ok
// SIG undefined FUN_146ed81a6(void)

void FUN_146ed81a6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_146d8a354(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar5 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar4) != puVar3) {
          puVar1 = *(undefined8 **)((longlong)local_58 + uVar5 * 8);
          *(undefined8 *)((longlong)local_58 + uVar5 * 8) = *puVar3;
          *puVar3 = 0;
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (uVar2 != uVar5);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146d8a419(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed82be FUN_146ed82be body=59 status=ok
// SIG undefined FUN_146ed82be(void)

void FUN_146ed82be(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000146ed82f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,uVar1,*(code **)*param_1);
  return;
}



// FUNCTION 146ed82fa FUN_146ed82fa body=32 status=ok
// SIG undefined FUN_146ed82fa(void)

void FUN_146ed82fa(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000146ed8316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 146ed8324 FUN_146ed8324 body=69 status=ok
// SIG undefined FUN_146ed8324(void)

undefined8 * FUN_146ed8324(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68f80;
  FUN_146d8a419(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed836a FUN_146ed836a body=122 status=ok
// SIG undefined FUN_146ed836a(void)

void FUN_146ed836a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed83e6 FUN_146ed83e6 body=298 status=ok
// SIG undefined FUN_146ed83e6(void)

void FUN_146ed83e6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_146d8a419(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_146d8a419(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d8a222(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed8518 FUN_146ed8518 body=185 status=ok
// SIG undefined FUN_146ed8518(void)

void FUN_146ed8518(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146d8989f(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed85d8 FUN_146ed85d8 body=58 status=ok
// SIG undefined FUN_146ed85d8(void)

void FUN_146ed85d8(longlong param_1)

{
  FUN_146d8a419(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146d8a222(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ed8612 FUN_146ed8612 body=69 status=ok
// SIG undefined FUN_146ed8612(void)

undefined8 * FUN_146ed8612(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f68f80;
  FUN_146d8a419(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed8664 FUN_146ed8664 body=38 status=ok
// SIG undefined FUN_146ed8664(void)

void FUN_146ed8664(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d89ea4(param_1 + 0x10);
  return;
}



// FUNCTION 146ed868c FUN_146ed868c body=167 status=ok
// SIG undefined FUN_146ed868c(void)

void FUN_146ed868c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146ed8afc(&local_48,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(local_48 + uVar2 * 8) =
           *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed8734 FUN_146ed8734 body=92 status=ok
// SIG undefined FUN_146ed8734(void)

void FUN_146ed8734(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ed8790 FUN_146ed8790 body=149 status=ok
// SIG undefined FUN_146ed8790(void)

void FUN_146ed8790(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ed8830 FUN_146ed8830 body=57 status=ok
// SIG undefined FUN_146ed8830(void)

undefined8 * FUN_146ed8830(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f690a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed886a FUN_146ed886a body=122 status=ok
// SIG undefined FUN_146ed886a(void)

void FUN_146ed886a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed88e6 FUN_146ed88e6 body=249 status=ok
// SIG undefined FUN_146ed88e6(void)

void FUN_146ed88e6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d89ea4(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed89e8 FUN_146ed89e8 body=185 status=ok
// SIG undefined FUN_146ed89e8(void)

void FUN_146ed89e8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146d89987(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed8ac2 FUN_146ed8ac2 body=57 status=ok
// SIG undefined FUN_146ed8ac2(void)

undefined8 * FUN_146ed8ac2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f690a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed8afc FUN_146ed8afc body=65 status=ok
// SIG undefined FUN_146ed8afc(void)

void FUN_146ed8afc(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146d89f8c(param_1,iVar1);
  }
  FUN_146d89f78((longlong)iVar1 * 8 + *param_1,param_2);
  return;
}



// FUNCTION 146ed8b48 FUN_146ed8b48 body=38 status=ok
// SIG undefined FUN_146ed8b48(void)

void FUN_146ed8b48(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed923e(param_1 + 0x10);
  return;
}



// FUNCTION 146ed8b70 FUN_146ed8b70 body=205 status=ok
// SIG undefined FUN_146ed8b70(void)

void FUN_146ed8b70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_58 = 0;
  uStack_50 = 0;
  FUN_146ed92b0(&local_58,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_146ca2ac2(local_58 + lVar2,(longlong)*(int *)(*param_2 + uVar3 * 4) * 0x48 + param_1[2]);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (uVar1 != uVar3);
  }
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_146ed8fcd(local_48,uStack_40 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed8c3e FUN_146ed8c3e body=109 status=ok
// SIG undefined FUN_146ed8c3e(void)

void FUN_146ed8c3e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_146ca2952(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x48;
    } while ((ulonglong)uVar1 * 0x48 != lVar2);
  }
  return;
}



// FUNCTION 146ed8cac FUN_146ed8cac body=94 status=ok
// SIG undefined FUN_146ed8cac(void)

void FUN_146ed8cac(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146ed92f2(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ed8d18 FUN_146ed8d18 body=69 status=ok
// SIG undefined FUN_146ed8d18(void)

undefined8 * FUN_146ed8d18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f691c0;
  FUN_146ed8fcd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed8d5e FUN_146ed8d5e body=122 status=ok
// SIG undefined FUN_146ed8d5e(void)

void FUN_146ed8d5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed8dda FUN_146ed8dda body=172 status=ok
// SIG undefined FUN_146ed8dda(void)

void FUN_146ed8dda(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_146ed912a(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_146ed912a(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146ed923e(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed8e8e FUN_146ed8e8e body=185 status=ok
// SIG undefined FUN_146ed8e8e(void)

void FUN_146ed8e8e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146ed9392(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed8f4e FUN_146ed8f4e body=58 status=ok
// SIG undefined FUN_146ed8f4e(void)

void FUN_146ed8f4e(longlong param_1)

{
  FUN_146ed8fcd(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146ed923e(param_1 + 0x10,0);
  return;
}



// FUNCTION 146ed8f88 FUN_146ed8f88 body=69 status=ok
// SIG undefined FUN_146ed8f88(void)

undefined8 * FUN_146ed8f88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f691c0;
  FUN_146ed8fcd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed8fcd FUN_146ed8fcd body=38 status=ok
// SIG undefined FUN_146ed8fcd(void)

void FUN_146ed8fcd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140191cfe(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 146ed8ff4 FUN_146ed8ff4 body=122 status=ok
// SIG undefined FUN_146ed8ff4(void)

void FUN_146ed8ff4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ed9096(param_1,iVar1);
    }
    FUN_146ed906f((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146ed912a(param_1,param_2,iVar1 - param_2);
    FUN_146ed9190(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ed906f FUN_146ed906f body=38 status=ok
// SIG undefined FUN_146ed906f(void)

void FUN_146ed906f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14096ae0a(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 146ed9096 FUN_146ed9096 body=147 status=ok
// SIG undefined FUN_146ed9096(void)

void FUN_146ed9096(longlong param_1,int param_2)

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



// FUNCTION 146ed912a FUN_146ed912a body=101 status=ok
// SIG undefined FUN_146ed912a(void)

void FUN_146ed912a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x48 + *param_1);
  FUN_146ed8fcd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146ed9190 FUN_146ed9190 body=62 status=ok
// SIG undefined FUN_146ed9190(void)

void FUN_146ed9190(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ed91ce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146ed91ce FUN_146ed91ce body=112 status=ok
// SIG undefined FUN_146ed91ce(void)

ulonglong FUN_146ed91ce(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146ed9208;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146ed9208:
  return param_2 & 0xffffffff;
}



// FUNCTION 146ed923e FUN_146ed923e body=113 status=ok
// SIG undefined FUN_146ed923e(void)

void FUN_146ed923e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 146ed92b0 FUN_146ed92b0 body=66 status=ok
// SIG undefined FUN_146ed92b0(void)

void FUN_146ed92b0(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146ed9096(param_1,iVar1);
  }
  FUN_146ed906f((longlong)iVar1 * 0x48 + *param_1,param_2);
  return;
}



// FUNCTION 146ed92f2 FUN_146ed92f2 body=160 status=ok
// SIG undefined FUN_146ed92f2(void)

void FUN_146ed92f2(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 * 0x48;
    lVar3 = lVar5 * 0x48;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_146ca2952(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + 0x48;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146ed9392 FUN_146ed9392 body=257 status=ok
// SIG undefined FUN_146ed9392(void)

longlong * FUN_146ed9392(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ed923e(param_2);
    }
    FUN_146ed8ff4(param_2,local_2c);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146ca2b7c(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x48;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146ed94a2 FUN_146ed94a2 body=39 status=ok
// SIG undefined FUN_146ed94a2(void)

void FUN_146ed94a2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_14043d0a6(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 146ed94ca FUN_146ed94ca body=215 status=ok
// SIG undefined FUN_146ed94ca(void)

void FUN_146ed94ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_1406b7a4a(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 3);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar2 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed95a2 FUN_146ed95a2 body=92 status=ok
// SIG undefined FUN_146ed95a2(void)

void FUN_146ed95a2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146ed95fe FUN_146ed95fe body=149 status=ok
// SIG undefined FUN_146ed95fe(void)

void FUN_146ed95fe(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined8 *)(param_1[2] + lVar2 * 8) = *(undefined8 *)(param_2[2] + lVar3 * 8);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146ed969e FUN_146ed969e body=57 status=ok
// SIG undefined FUN_146ed969e(void)

undefined8 * FUN_146ed969e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f692e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed96d8 FUN_146ed96d8 body=122 status=ok
// SIG undefined FUN_146ed96d8(void)

void FUN_146ed96d8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9754 FUN_146ed9754 body=249 status=ok
// SIG undefined FUN_146ed9754(void)

void FUN_146ed9754(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 8),(longlong)iVar7 << 3);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 8),(longlong)iVar7 << 3);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_14043d0a6(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146ed9856 FUN_146ed9856 body=185 status=ok
// SIG undefined FUN_146ed9856(void)

void FUN_146ed9856(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146cb3828(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9930 FUN_146ed9930 body=57 status=ok
// SIG undefined FUN_146ed9930(void)

undefined8 * FUN_146ed9930(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f692e0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ed9974 FUN_146ed9974 body=38 status=ok
// SIG undefined FUN_146ed9974(void)

void FUN_146ed9974(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146ed9eb2(param_1 + 0x10);
  return;
}



// FUNCTION 146ed999c FUN_146ed999c body=215 status=ok
// SIG undefined FUN_146ed999c(void)

void FUN_146ed999c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_1403f4be0(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 3);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined8 *)((longlong)local_48 + uVar2 * 8) =
             *(undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 8);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ed9a74 FUN_146ed9a74 body=92 status=ok
// SIG undefined FUN_146ed9a74(void)

void FUN_146ed9a74(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined8 *)(param_1[2] + uVar2 * 8) = *(undefined8 *)(param_2[2] + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


