// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14717d6f2 FUN_14717d6f2 body=744 status=ok
// SIG undefined FUN_14717d6f2(void)

undefined4
FUN_14717d6f2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  ulonglong local_240;
  undefined8 *local_238;
  longlong *local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined8 *local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 auStack_f0 [12];
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9db788) {
    FUN_144b3d300(&DAT_14c9db788);
    if (DAT_14c9db788 == -1) {
      FUN_1409992c6(local_f8);
      DAT_14c9db780 = FUN_140187afe(local_f8);
      _Init_thread_footer(&DAT_14c9db788);
    }
  }
  memset(local_f8,0,0x98);
  FUN_146087b66();
  auStack_f0[DAT_14c9d5b48] = &DAT_14c9d5b00;
  auStack_90[DAT_14c9d5b48] = 0;
  FUN_14608803a();
  auStack_f0[DAT_14c9d5d98] = &DAT_14c9d5d50;
  auStack_90[DAT_14c9d5d98] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  uVar2 = FUN_14007744c(param_7,local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1);
    lVar4 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
    if (*(longlong *)(lVar4 + 0x20) == *(longlong *)(DAT_14c9db780 + 0x20)) {
      if (local_158 != 0) {
        local_1b8 = local_158;
        uStack_1b0 = local_168;
      }
      if (lStack_140 != 0) {
        local_1a8 = lStack_140;
        uStack_1a0 = local_168;
      }
      local_1f8 = *(undefined8 *)(param_1 + 0x48);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x50);
      local_1e8 = *(undefined4 *)(param_1 + 0x58);
      uStack_1e4 = *(undefined4 *)(param_1 + 0x5c);
      uStack_1e0 = *(undefined4 *)(param_1 + 0x60);
      uStack_1dc = *(undefined4 *)(param_1 + 100);
      local_1d8 = *(undefined4 *)(param_1 + 0x68);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x6c);
      uStack_1d0 = *(undefined4 *)(param_1 + 0x70);
      uStack_1cc = *(undefined4 *)(param_1 + 0x74);
      local_1c8 = *(undefined4 *)(param_1 + 0x78);
      uStack_1c4 = *(undefined4 *)(param_1 + 0x7c);
      uStack_1c0 = *(undefined4 *)(param_1 + 0x80);
      uStack_1bc = *(undefined4 *)(param_1 + 0x84);
      local_208 = 0;
      uStack_200 = 0;
      local_248 = CONCAT44(local_248._4_4_,param_5);
      local_240 = local_240 & 0xffffffffffffff00;
      FUN_144b17a9a(&local_208,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
      local_220 = param_9;
      local_228 = param_8;
      local_230 = &local_1b8;
      local_240 = param_7;
      local_248 = param_6;
      local_238 = &local_1f8;
      local_218 = &local_208;
      FUN_142c799e2(param_1,param_2,param_3,param_4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717d9dc FUN_14717d9dc body=744 status=ok
// SIG undefined FUN_14717d9dc(void)

undefined4
FUN_14717d9dc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  ulonglong local_240;
  undefined8 *local_238;
  longlong *local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined8 *local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 auStack_f0 [12];
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9db798) {
    FUN_144b3d300(&DAT_14c9db798);
    if (DAT_14c9db798 == -1) {
      FUN_1409992c6(local_f8);
      DAT_14c9db790 = FUN_140187afe(local_f8);
      _Init_thread_footer(&DAT_14c9db798);
    }
  }
  memset(local_f8,0,0x98);
  FUN_146087dd0();
  auStack_f0[DAT_14c9d5c70] = &DAT_14c9d5c28;
  auStack_90[DAT_14c9d5c70] = 0;
  FUN_1460882a4();
  auStack_f0[DAT_14c9d5ec0] = &DAT_14c9d5e78;
  auStack_90[DAT_14c9d5ec0] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  uVar2 = FUN_14007744c(param_7,local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    (**(code **)(*plVar1 + 0x30))(plVar1);
    lVar4 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
    if (*(longlong *)(lVar4 + 0x20) == *(longlong *)(DAT_14c9db790 + 0x20)) {
      if (local_158 != 0) {
        local_1b8 = local_158;
        uStack_1b0 = local_168;
      }
      if (lStack_140 != 0) {
        local_1a8 = lStack_140;
        uStack_1a0 = local_168;
      }
      local_1f8 = *(undefined8 *)(param_1 + 0x48);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x50);
      local_1e8 = *(undefined4 *)(param_1 + 0x58);
      uStack_1e4 = *(undefined4 *)(param_1 + 0x5c);
      uStack_1e0 = *(undefined4 *)(param_1 + 0x60);
      uStack_1dc = *(undefined4 *)(param_1 + 100);
      local_1d8 = *(undefined4 *)(param_1 + 0x68);
      uStack_1d4 = *(undefined4 *)(param_1 + 0x6c);
      uStack_1d0 = *(undefined4 *)(param_1 + 0x70);
      uStack_1cc = *(undefined4 *)(param_1 + 0x74);
      local_1c8 = *(undefined4 *)(param_1 + 0x78);
      uStack_1c4 = *(undefined4 *)(param_1 + 0x7c);
      uStack_1c0 = *(undefined4 *)(param_1 + 0x80);
      uStack_1bc = *(undefined4 *)(param_1 + 0x84);
      local_208 = 0;
      uStack_200 = 0;
      local_248 = CONCAT44(local_248._4_4_,param_5);
      local_240 = local_240 & 0xffffffffffffff00;
      FUN_144b17a9a(&local_208,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
      local_220 = param_9;
      local_228 = param_8;
      local_230 = &local_1b8;
      local_240 = param_7;
      local_248 = param_6;
      local_238 = &local_1f8;
      local_218 = &local_208;
      FUN_142c7a984(param_1,param_2,param_3,param_4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717dcc5 FUN_14717dcc5 body=510 status=ok
// SIG undefined FUN_14717dcc5(void)

void FUN_14717dcc5(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  double *local_78;
  undefined1 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_3[1] != 0) {
    lVar4 = *param_3;
    lVar3 = (longlong)(int)param_3[1] * 0x13c10;
    do {
      cVar2 = FUN_144b0f89b(0,*(undefined2 *)
                               (&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 0x3090) * 2));
      if ((*(longlong *)(lVar4 + 8) != 0 && cVar2 == '\x01') &&
         ((*(byte *)(*(longlong *)(lVar4 + 8) + 99) & 0x20) != 0)) {
        local_58 = DAT_14c8464f0;
        local_68 = DAT_14c8464e0;
        dStack_60 = DAT_14c8464e8;
        cVar2 = FUN_144b2acae(lVar4);
        if (cVar2 != '\0') {
          if (1 < (int)param_3[1]) {
            lVar1 = *param_3;
            local_58 = *(double *)(lVar1 + 0x1040) - *(double *)(lVar1 + 0x14c50);
            dStack_60 = *(double *)(lVar1 + 0x1038) - *(double *)(lVar1 + 0x14c48);
            local_68 = *(double *)(lVar1 + 0x1030) - *(double *)(lVar1 + 0x14c40);
          }
          cVar2 = FUN_144b2acc6(lVar4);
          if (cVar2 != '\0') {
            FUN_14717dec4(*param_3 + 0x25610,*param_3 + 0x11a00);
            FUN_142c36c79(param_1,param_2,lVar4,param_4);
            break;
          }
        }
        lVar1 = *(longlong *)(lVar4 + 0x3108);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20f0) < 1)) {
          FUN_14717dfc4(lVar1 + 0x20e0);
        }
        local_78 = (double *)(lVar4 + 0x11a00);
        local_70 = 1;
        FUN_142c581c9(param_1,param_2,lVar4,param_5);
        local_78 = &local_68;
        FUN_142c86264(param_1,param_2,lVar4,param_4);
        if (0 < *(int *)(lVar4 + 0x11b78)) {
          FUN_14717e08d(param_1,lVar4,lVar4 + 0x11b70);
        }
        FUN_142c36c79(param_1,param_2,lVar4,param_4);
      }
      lVar4 = lVar4 + 0x13c10;
      lVar3 = lVar3 + -0x13c10;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14717dec4 FUN_14717dec4 body=256 status=ok
// SIG undefined FUN_14717dec4(void)

void * FUN_14717dec4(void *param_1,void *param_2)

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
  
  memcpy(param_1,param_2,0x168);
  FUN_147186ec8((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  memcpy((void *)((longlong)param_1 + 0x180),(void *)((longlong)param_2 + 0x180),0x170);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2f4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2f8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2fc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x300);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x304);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x308);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x30c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x310);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x314);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x318);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)((longlong)param_1 + 0x2f0) = *(undefined4 *)((longlong)param_2 + 0x2f0);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x300) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x308) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x30c) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x310) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x314) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x318) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x31c) = uVar11;
  *(undefined8 *)((longlong)param_1 + 800) = *(undefined8 *)((longlong)param_2 + 800);
  *(undefined1 *)((longlong)param_1 + 0x330) = *(undefined1 *)((longlong)param_2 + 0x330);
  FUN_147187036((longlong)param_1 + 0x338,(longlong)param_2 + 0x338);
  FUN_144715ac6((longlong)param_1 + 0x350,(longlong)param_2 + 0x350);
  FUN_144715c36((longlong)param_1 + 0x430,(longlong)param_2 + 0x430);
  *(undefined8 *)((longlong)param_1 + 0x550) = *(undefined8 *)((longlong)param_2 + 0x550);
  *(undefined4 *)((longlong)param_1 + 0x560) = *(undefined4 *)((longlong)param_2 + 0x560);
  FUN_147186f26((longlong)param_1 + 0x568,(longlong)param_2 + 0x568);
  FUN_147186f7e((longlong)param_1 + 0x578,(longlong)param_2 + 0x578);
  return param_1;
}



// FUNCTION 14717dfc4 FUN_14717dfc4 body=200 status=ok
// SIG undefined FUN_14717dfc4(void)

void FUN_14717dfc4(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  FUN_14717e6ae(param_1 + 1);
  if ((longlong)(int)param_1[2] != 0) {
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = puVar4 + (longlong)(int)param_1[2] * 2;
    do {
      uVar2 = FUN_14001cc68(0x58,0x10);
      FUN_1446f470e(&local_38,L"Hair.PositionsChangedReadback",1);
      FUN_1402593fa(uVar2,local_38);
      *puVar4 = uVar2;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717e08d FUN_14717e08d body=1172 status=ok
// SIG undefined FUN_14717e08d(void)

void FUN_14717e08d(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70 [3];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar7 = *param_3;
    local_90 = (longlong)(int)param_3[1] * 0x78 + lVar7;
    do {
      local_98 = lVar7;
      if ((longlong)*(int *)(lVar7 + 0x18) != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x10);
        local_78 = (longlong)*(int *)(lVar7 + 0x18) * 0x28;
        lVar7 = 0;
        local_80 = lVar10;
        do {
          uVar4 = uStack_50;
          if (*(longlong *)(lVar10 + lVar7) != 0) {
            lVar2 = *(longlong *)(lVar10 + 0x20 + lVar7);
            lVar10 = *(longlong *)(lVar2 + 0x10);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0x28);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0x40);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0x58);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0x70);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0x88);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0xa0);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            uVar4 = uStack_50;
            lVar10 = *(longlong *)(lVar2 + 0xb8);
            if (lVar10 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58,uVar4 & 0xffffffff);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar8) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            local_a8 = 0;
            FUN_14716cfd3(local_70,param_1,*(longlong *)(lVar2 + 8) + 0x40,0);
            lVar10 = local_70[0];
            local_a8 = 0;
            FUN_14716cfd3(local_70,param_1,*(longlong *)(lVar2 + 8) + 0x60);
            lVar8 = local_70[0];
            local_a8 = 0;
            FUN_14716cfd3(local_70,param_1,*(undefined8 *)(lVar2 + 8));
            lVar3 = local_70[0];
            if (lVar10 != 0) {
              lVar9 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58);
              }
              lVar9 = lVar9 * 0x10;
              *(longlong *)(local_58 + lVar9) = lVar10;
              *(undefined4 *)(local_58 + 8 + lVar9) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar9) = 1;
            }
            if (lVar8 != 0) {
              lVar10 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58);
              }
              lVar10 = lVar10 * 0x10;
              *(longlong *)(local_58 + lVar10) = lVar8;
              *(undefined4 *)(local_58 + 8 + lVar10) = 0x70;
              *(undefined1 *)(local_58 + 0xc + lVar10) = 1;
            }
            lVar10 = local_80;
            if (lVar3 != 0) {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_144904f42(&local_58);
              }
              lVar8 = lVar8 * 0x10;
              *(longlong *)(local_58 + lVar8) = lVar3;
              *(undefined4 *)(local_58 + 8 + lVar8) = 4;
              *(undefined1 *)(local_58 + 0xc + lVar8) = 1;
            }
            if (DAT_14c9d7010 < 1) {
              uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(local_88 + 0x3090) * 2);
              cVar5 = FUN_144b0fd3a();
              if ((cVar5 != '\0') || (cVar5 = FUN_144b0fda7(uVar1), cVar5 != '\0'))
              goto LAB_14717e491;
            }
            memset((void *)(lVar2 + 0x10),0,0xc0);
          }
LAB_14717e491:
          lVar7 = lVar7 + 0x28;
        } while (local_78 != lVar7);
      }
      lVar7 = local_98 + 0x78;
    } while (lVar7 != local_90);
  }
  FUN_144809bc8(&local_58,param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14717e522 FUN_14717e522 body=394 status=ok
// SIG undefined FUN_14717e522(void)

void FUN_14717e522(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_4[1] != 0) {
    lVar5 = *param_4 + 0x11a10;
    lVar6 = (longlong)(int)param_4[1] * 0x13c10;
    do {
      cVar2 = FUN_144b0f89b(0,*(undefined2 *)
                               (&DAT_14ca85070 + (longlong)*(int *)(lVar5 + -0xe980) * 2));
      if (((*(longlong *)(lVar5 + -0x11a08) != 0) &&
          (cVar2 == '\x01' && (*(byte *)(*(longlong *)(lVar5 + -0x11a08) + 99) & 0x20) != 0)) &&
         (0 < *(int *)(lVar5 + 0x168))) {
        local_78 = *(undefined8 *)(param_3 + 0x2f0);
        local_88 = *(undefined8 *)(param_3 + 0x1b8);
        local_80 = *(undefined8 *)(param_3 + 0x1c8);
        local_a8 = *(undefined4 *)(param_3 + 0x2b0);
        uStack_a4 = *(undefined4 *)(param_3 + 0x2b4);
        uStack_a0 = *(undefined4 *)(param_3 + 0x2b8);
        uStack_9c = *(undefined4 *)(param_3 + 700);
        local_70 = param_5;
        FUN_142c59df5(param_1,param_2,lVar5 + -0x11a10,*(undefined8 *)(param_3 + 0x2a8));
        cVar2 = FUN_14716c0ca();
        if (cVar2 != '\0') {
          FUN_14716ab1a(&local_68,param_1);
          *(undefined8 *)(lVar5 + 0x2f0) = local_58;
          *(undefined8 *)(lVar5 + 0x2f8) = uStack_50;
          *(undefined4 *)(lVar5 + 0x2e0) = local_68;
          *(undefined4 *)(lVar5 + 0x2e4) = uStack_64;
          *(undefined4 *)(lVar5 + 0x2e8) = uStack_60;
          *(undefined4 *)(lVar5 + 0x2ec) = uStack_5c;
        }
      }
      lVar1 = *(longlong *)(lVar5 + 0x10);
      lVar4 = lVar5;
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      uVar3 = FUN_14066c762(param_1,lVar4);
      *(undefined8 *)(lVar5 + -0x10) = uVar3;
      *(bool *)(lVar5 + -8) = lVar1 != 0;
      lVar5 = lVar5 + 0x13c10;
      lVar6 = lVar6 + -0x13c10;
    } while (lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717e6ae FUN_14717e6ae body=108 status=ok
// SIG undefined FUN_14717e6ae(void)

void FUN_14717e6ae(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 4) {
    *(undefined4 *)(param_1 + 1) = 4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4U - iVar1) {
      FUN_147196ad4(param_1,iVar1);
    }
    FUN_147196abf((longlong)iVar1 * 0x10 + *param_1,4U - iVar1);
    return;
  }
  if (iVar1 == 4) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 4;
  FUN_147196b5a(param_1);
  return;
}



// FUNCTION 14717e71a FUN_14717e71a body=125 status=ok
// SIG undefined FUN_14717e71a(void)

ulonglong FUN_14717e71a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x10;
    lVar5 = 0;
    do {
      if (*(char *)(lVar1 + 8 + lVar5) == '\x01') {
        lVar4 = *(longlong *)(lVar1 + lVar5);
        if (*(longlong *)(lVar4 + 8) == 0) {
LAB_14717e776:
          piVar3 = (int *)FUN_1400de8b4(lVar4,4);
          uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),*piVar3 != 0);
          FUN_14007fcfa(*(undefined8 *)(lVar1 + lVar5));
          *(undefined1 *)(lVar1 + 8 + lVar5) = 0;
          goto LAB_14717e768;
        }
        if (*(int *)(*(longlong *)(lVar4 + 8) + 0x10) == 0) {
          cVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x18))();
          if (cVar2 != '\0') {
            lVar4 = *(longlong *)(lVar1 + lVar5);
            goto LAB_14717e776;
          }
        }
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar6 != lVar5);
  }
  uVar7 = 0;
LAB_14717e768:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14717e797 FUN_14717e797 body=131 status=ok
// SIG undefined FUN_14717e797(void)

void FUN_14717e797(undefined8 *param_1,longlong param_2,longlong param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)((longlong)param_1 + 0xc) = (uint)param_4;
  *(uint *)(param_1 + 1) = (uint)*(byte *)(param_3 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x30f8);
  *param_1 = uVar2;
  iVar1 = *(int *)(param_2 + 0x3104);
  *(float *)(param_1 + 2) = 1.0 / (float)(*(int *)(param_2 + 0x3100) - (int)uVar2);
  *(float *)((longlong)param_1 + 0x14) = 1.0 / (float)(iVar1 - (int)((ulonglong)uVar2 >> 0x20));
  uVar2 = 0;
  if ((*(int *)(param_3 + 8) != 0) && (*(longlong *)(param_3 + 0x38) != 0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x18 + (ulonglong)param_4 * 8);
  }
  param_1[3] = uVar2;
  param_1[4] = *(undefined8 *)(param_3 + 0x68);
  *(undefined4 *)(param_1 + 5) = 4;
  return;
}



// FUNCTION 14717e81a FUN_14717e81a body=42 status=ok
// SIG undefined FUN_14717e81a(void)

void FUN_14717e81a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717e84c FUN_14717e84c body=96 status=ok
// SIG undefined FUN_14717e84c(void)

undefined8 FUN_14717e84c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f29b0a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d9f10,1);
  return uVar3;
}



// FUNCTION 14717e8ac FUN_14717e8ac body=52 status=ok
// SIG undefined FUN_14717e8ac(void)

void FUN_14717e8ac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717e8e0 FUN_14717e8e0 body=177 status=ok
// SIG undefined FUN_14717e8e0(void)

void FUN_14717e8e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f29b0a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d9f10,param_4);
  local_78 = &DAT_14c9d9f10;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147196c44(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717e992 FUN_14717e992 body=42 status=ok
// SIG undefined FUN_14717e992(void)

void FUN_14717e992(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717e9c4 FUN_14717e9c4 body=96 status=ok
// SIG undefined FUN_14717e9c4(void)

undefined8 FUN_14717e9c4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f43d26();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d9f98,1);
  return uVar3;
}



// FUNCTION 14717ea24 FUN_14717ea24 body=52 status=ok
// SIG undefined FUN_14717ea24(void)

void FUN_14717ea24(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717ea58 FUN_14717ea58 body=42 status=ok
// SIG undefined FUN_14717ea58(void)

void FUN_14717ea58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717ea8a FUN_14717ea8a body=89 status=ok
// SIG undefined FUN_14717ea8a(void)

undefined8 FUN_14717ea8a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145a1e9b2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 14717eae4 FUN_14717eae4 body=52 status=ok
// SIG undefined FUN_14717eae4(void)

void FUN_14717eae4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717eb18 FUN_14717eb18 body=42 status=ok
// SIG undefined FUN_14717eb18(void)

void FUN_14717eb18(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717eb4a FUN_14717eb4a body=96 status=ok
// SIG undefined FUN_14717eb4a(void)

undefined8 FUN_14717eb4a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f13be6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da020,1);
  return uVar3;
}



// FUNCTION 14717ebaa FUN_14717ebaa body=52 status=ok
// SIG undefined FUN_14717ebaa(void)

void FUN_14717ebaa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717ebde FUN_14717ebde body=42 status=ok
// SIG undefined FUN_14717ebde(void)

void FUN_14717ebde(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717ec28 FUN_14717ec28 body=96 status=ok
// SIG undefined FUN_14717ec28(void)

undefined8 FUN_14717ec28(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e82574();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da0a8,1);
  return uVar3;
}



// FUNCTION 14717ec88 FUN_14717ec88 body=52 status=ok
// SIG undefined FUN_14717ec88(void)

void FUN_14717ec88(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717ecbc FUN_14717ecbc body=177 status=ok
// SIG undefined FUN_14717ecbc(void)

void FUN_14717ecbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f13be6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9da020,param_4);
  local_78 = &DAT_14c9da020;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147197024(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717ed6e FUN_14717ed6e body=42 status=ok
// SIG undefined FUN_14717ed6e(void)

void FUN_14717ed6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717eda0 FUN_14717eda0 body=96 status=ok
// SIG undefined FUN_14717eda0(void)

undefined8 FUN_14717eda0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5180a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da130,1);
  return uVar3;
}



// FUNCTION 14717ee00 FUN_14717ee00 body=52 status=ok
// SIG undefined FUN_14717ee00(void)

void FUN_14717ee00(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717ee34 FUN_14717ee34 body=42 status=ok
// SIG undefined FUN_14717ee34(void)

void FUN_14717ee34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717ee66 FUN_14717ee66 body=96 status=ok
// SIG undefined FUN_14717ee66(void)

undefined8 FUN_14717ee66(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed37a8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da1b8,1);
  return uVar3;
}



// FUNCTION 14717eec6 FUN_14717eec6 body=52 status=ok
// SIG undefined FUN_14717eec6(void)

void FUN_14717eec6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717eefa FUN_14717eefa body=42 status=ok
// SIG undefined FUN_14717eefa(void)

void FUN_14717eefa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717ef28 FUN_14717ef28 body=96 status=ok
// SIG undefined FUN_14717ef28(void)

undefined8 FUN_14717ef28(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7133a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da240,1);
  return uVar3;
}



// FUNCTION 14717ef88 FUN_14717ef88 body=52 status=ok
// SIG undefined FUN_14717ef88(void)

void FUN_14717ef88(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717efbc FUN_14717efbc body=42 status=ok
// SIG undefined FUN_14717efbc(void)

void FUN_14717efbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717efee FUN_14717efee body=96 status=ok
// SIG undefined FUN_14717efee(void)

undefined8 FUN_14717efee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4431c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da2c8,1);
  return uVar3;
}



// FUNCTION 14717f04e FUN_14717f04e body=52 status=ok
// SIG undefined FUN_14717f04e(void)

void FUN_14717f04e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717f082 FUN_14717f082 body=42 status=ok
// SIG undefined FUN_14717f082(void)

void FUN_14717f082(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717f0b4 FUN_14717f0b4 body=96 status=ok
// SIG undefined FUN_14717f0b4(void)

undefined8 FUN_14717f0b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb5db4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da350,1);
  return uVar3;
}



// FUNCTION 14717f114 FUN_14717f114 body=52 status=ok
// SIG undefined FUN_14717f114(void)

void FUN_14717f114(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717f148 FUN_14717f148 body=42 status=ok
// SIG undefined FUN_14717f148(void)

void FUN_14717f148(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717f17a FUN_14717f17a body=96 status=ok
// SIG undefined FUN_14717f17a(void)

undefined8 FUN_14717f17a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2a0fe();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da3d8,1);
  return uVar3;
}



// FUNCTION 14717f1da FUN_14717f1da body=52 status=ok
// SIG undefined FUN_14717f1da(void)

void FUN_14717f1da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717f20e FUN_14717f20e body=182 status=ok
// SIG undefined FUN_14717f20e(void)

void FUN_14717f20e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_6 != 0 && (longlong)(int)param_2[1] != 0) {
    lVar3 = (longlong)(int)param_2[1] * 0x13c10;
    lVar2 = *param_2 + 0x11b80;
    iVar1 = 0;
    do {
      if (*(char *)(lVar2 + -0x178) == '\x01') {
        FUN_142c6248c(param_1,lVar2 + -0x11b80,iVar1,param_3,param_4,lVar2 + -0x10,lVar2,param_5,
                      param_6);
        iVar1 = iVar1 + 1;
      }
      lVar2 = lVar2 + 0x13c10;
      lVar3 = lVar3 + -0x13c10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14717f2c4 FUN_14717f2c4 body=188 status=ok
// SIG undefined FUN_14717f2c4(void)

void FUN_14717f2c4(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_3 != 0) && (param_5 != 0)) && ((int)param_2[1] != 0)) &&
     ((*(byte *)(*(longlong *)(param_3 + 0x28) + 0x1d1) & 2) != 0)) {
    lVar3 = (longlong)(int)param_2[1] * 0x13c10;
    lVar2 = *param_2 + 0x11b80;
    iVar1 = 0;
    do {
      if (*(char *)(lVar2 + -0x178) == '\x01') {
        FUN_142c6248c(param_1,lVar2 + -0x11b80,iVar1,param_3,param_4,lVar2 + -0x10,lVar2,0,param_5);
        iVar1 = iVar1 + 1;
      }
      lVar2 = lVar2 + 0x13c10;
      lVar3 = lVar3 + -0x13c10;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14717f380 FUN_14717f380 body=92 status=ok
// SIG undefined FUN_14717f380(void)

longlong FUN_14717f380(longlong param_1)

{
  *(bool *)param_1 = 0.0 < DAT_14c760310;
  *(bool *)(param_1 + 1) = 0.0 < DAT_14c760314;
  *(bool *)(param_1 + 2) = 0.0 < DAT_14c760318;
  *(bool *)(param_1 + 4) = 0.0 < DAT_14c760320;
  *(bool *)(param_1 + 3) = 0.0 < DAT_14c76031c;
  *(bool *)(param_1 + 5) = 0 < DAT_14c9d6d98;
  return param_1;
}



// FUNCTION 14717f3dc FUN_14717f3dc body=680 status=ok
// SIG undefined FUN_14717f3dc(void)

float * FUN_14717f3dc(float *param_1,int *param_2,float param_3,int param_4,float param_5,
                     float param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  
  fVar3 = DAT_14c760328;
  piVar4 = &DAT_14c867cf8;
  if (DAT_14c867cf1 == '\0') {
    piVar4 = param_2 + 1;
  }
  piVar5 = &DAT_14c867cf4;
  if (DAT_14c867cf1 == '\0') {
    piVar5 = param_2;
  }
  fVar10 = param_5;
  if (param_5 <= 0.0) {
    fVar10 = DAT_14c760324;
  }
  uVar6 = param_4 - 2;
  if (uVar6 < 7) {
    fVar8 = *(float *)(&DAT_14a22d168 + (ulonglong)uVar6 * 4);
  }
  else {
    fVar8 = 1.0;
  }
  uVar9 = ~-(uint)(0.0 < param_5) & DAT_14c76032c;
  iVar1 = *piVar4;
  iVar2 = *piVar5;
  if (1.0 <= param_6) {
    fVar7 = (float)iVar2 / param_6;
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  else {
    fVar7 = tanf(param_3 * 0.017453292 * 0.5);
    fVar7 = fVar7 / ((float)iVar1 * 0.5);
  }
  *param_1 = fVar10 * 0.5 * fVar8 * fVar7;
  if (uVar6 < 7) {
    fVar10 = *(float *)(&DAT_14a22d168 + (ulonglong)uVar6 * 4);
  }
  else {
    fVar10 = 1.0;
  }
  if (1.0 <= param_6) {
    fVar8 = (float)iVar2 / param_6;
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
  }
  else {
    fVar8 = tanf(param_3 * 0.017453292 * 0.5);
    fVar8 = fVar8 / ((float)iVar1 * 0.5);
  }
  param_1[1] = (float)(uVar9 | (uint)param_5 & -(uint)(0.0 < param_5)) * 0.5 * fVar10 * fVar8;
  if (uVar6 < 7) {
    fVar10 = *(float *)(&DAT_14a22d168 + (ulonglong)uVar6 * 4);
  }
  else {
    fVar10 = 1.0;
  }
  if (1.0 <= param_6) {
    param_6 = (float)iVar2 / param_6;
    if (1.0 <= param_6) {
      param_6 = 1.0;
    }
    if (param_6 <= 0.0) {
      param_6 = 0.0;
    }
  }
  else {
    param_6 = tanf(param_3 * 0.017453292 * 0.5);
    param_6 = param_6 / ((float)iVar1 * 0.5);
  }
  fVar8 = 1.0;
  if (1.0 <= fVar3) {
    fVar8 = fVar3;
  }
  param_1[2] = fVar8 * 0.5 * fVar10 * param_6;
  return param_1;
}



// FUNCTION 14717f684 FUN_14717f684 body=3995 status=ok
// SIG undefined FUN_14717f684(void)

void FUN_14717f684(double *param_1,double *param_2,double *param_3,double *param_4,longlong param_5,
                  uint param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_2f8 [32];
  float local_2d8;
  undefined4 local_2d0;
  float local_2bc;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290 [7];
  double local_258;
  double dStack_250;
  double local_248;
  double local_1d8 [15];
  undefined8 local_160;
  double local_158 [6];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  fVar19 = DAT_14c760340;
  fVar12 = DAT_14c760328;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  dVar15 = param_4[6];
  dVar21 = param_1[2];
  dVar4 = param_4[2] + dVar21;
  dVar11 = *param_1;
  dVar14 = param_1[1];
  dVar9 = param_4[1] + dVar14;
  dVar10 = *param_4 + dVar11;
  fVar13 = 0.0;
  if (0.0 <= DAT_14c760334) {
    fVar13 = DAT_14c760334;
  }
  fVar16 = (float)((double)fVar13 * dVar15);
  dVar1 = *(double *)(param_5 + 0x30);
  dVar2 = *(double *)(param_5 + 0x28);
  dVar3 = *(double *)(param_5 + 0x20);
  fVar13 = (float)(~-(uint)(DAT_14c760330 != 0.0) & DAT_14c760324 |
                  (uint)DAT_14c760330 & -(uint)(DAT_14c760330 != 0.0));
  fVar23 = 0.0;
  if (0.0 <= fVar13) {
    fVar23 = fVar13;
  }
  *param_3 = (double)&DAT_3f8000003f800000;
  *(float *)(param_3 + 1) = 1.0;
  pdVar7 = (double *)&DAT_14c846400;
  pdVar8 = param_2;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  if (param_6 != 0) {
    fVar12 = (float)(dVar21 + dVar1);
    fVar13 = (float)(dVar14 + dVar2);
    fVar22 = (float)(dVar11 + dVar3);
    local_298 = (double)fVar12;
    local_2a0 = (double)fVar13;
    local_2b0 = dVar10 - (double)fVar22;
    dVar21 = dVar9 - local_2a0;
    local_2b8 = dVar4 - local_298;
    dVar11 = local_2b8 * local_2b8 + dVar21 * dVar21 + local_2b0 * local_2b0;
    local_2a8 = SQRT(dVar11);
    dVar14 = 0.10000000149011612;
    if (0.10000000149011612 <= local_2a8) {
      dVar14 = local_2a8;
    }
    dVar1 = 1.0;
    if (1.0 <= dVar14 - dVar15) {
      dVar1 = dVar14 - dVar15;
    }
    dVar14 = 0.20000000298023224;
    if (0.20000000298023224 <= local_2a8) {
      dVar14 = local_2a8;
    }
    fVar18 = (float)dVar1;
    fVar20 = (float)(dVar14 + dVar15);
    if (170.0 <= fVar19) {
      fVar19 = 170.0;
    }
    if (fVar19 <= 10.0) {
      fVar19 = 10.0;
    }
    fVar19 = fVar19 * 0.017453292 * 0.5;
    local_2bc = fVar23;
    if (param_6 < 3) {
      fVar12 = asinf(fVar16 / SQRT(((float)dVar4 - fVar12) * ((float)dVar4 - fVar12) +
                                   ((float)dVar9 - fVar13) * ((float)dVar9 - fVar13) +
                                   ((float)dVar10 - fVar22) * ((float)dVar10 - fVar22)));
      if (fVar19 <= fVar12) {
        fVar12 = fVar19;
      }
      dVar4 = (double)fVar18;
      dVar15 = dVar4 - (double)fVar20;
      dVar14 = (-(double)fVar20 * dVar4) / dVar15;
      if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
        dVar14 = dVar4;
      }
      dVar4 = dVar4 / dVar15;
      if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
        dVar4 = 0.0;
      }
      dVar15 = tan((double)fVar12);
      dVar9 = tan((double)fVar12);
      local_158[0] = 1.0 / dVar9;
      local_158[1] = 0.0;
      local_158[2] = 0.0;
      local_158[3] = 0.0;
      local_158[4] = 0.0;
      local_158[5] = 1.0 / dVar15;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = dVar4;
      local_100 = 0x3ff0000000000000;
      uStack_f8 = 0;
      uStack_f0 = 0;
      local_e8 = dVar14;
      local_e0 = 0;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        if (9.99999993922529e-09 <= dVar11) {
          local_258 = 1.0 / local_2a8;
          local_248 = local_2b8 * local_258;
          dVar21 = dVar21 * local_258;
          local_258 = local_2b0 * local_258;
          dStack_250 = dVar21;
          goto LAB_14717fa6e;
        }
        local_258 = DAT_14c8464e0;
        dStack_250 = DAT_14c8464e8;
        local_248 = DAT_14c8464f0;
      }
      else {
        local_258 = local_2b0;
        dStack_250 = dVar21;
        local_248 = local_2b8;
LAB_14717fa6e:
        dStack_250 = dVar21;
      }
      local_290[5] = dStack_250 * 0.0 + local_258 * -0.0;
      local_290[4] = local_258 - local_248 * 0.0;
      local_290[3] = local_248 * 0.0 - dStack_250;
      dVar15 = local_290[5] * local_290[5] +
               local_290[3] * local_290[3] + local_290[4] * local_290[4];
      if ((dVar15 != 1.0) || (NAN(dVar15))) {
        if (9.99999993922529e-09 <= dVar15) {
          dVar15 = 1.0 / SQRT(dVar15);
          local_290[5] = local_290[5] * dVar15;
          local_290[4] = local_290[4] * dVar15;
          local_290[3] = local_290[3] * dVar15;
          goto LAB_14717faea;
        }
        local_290[3] = DAT_14c8464e0;
        local_290[4] = DAT_14c8464e8;
        local_290[5] = DAT_14c8464f0;
      }
      else {
LAB_14717faea:
      }
      local_290[2] = local_258 * local_290[4] + -dStack_250 * local_290[3];
      local_290[1] = local_248 * local_290[3] - local_290[5] * local_258;
      local_290[0] = dStack_250 * local_290[5] - local_290[4] * local_248;
      lVar6 = 0;
      do {
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4) =
             *(undefined8 *)((longlong)local_290 + lVar6 + 0x18);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 8) =
             *(undefined8 *)((longlong)local_290 + lVar6);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x10) =
             *(undefined8 *)((longlong)&local_258 + lVar6);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x18) = 0;
        lVar6 = lVar6 + 8;
        uVar17 = extraout_XMM0_Db;
      } while (lVar6 != 0x18);
    }
    else {
      if (param_6 != 3) goto LAB_147180292;
      fVar12 = asinf(fVar16 / SQRT(((float)dVar4 - fVar12) * ((float)dVar4 - fVar12) +
                                   ((float)dVar9 - fVar13) * ((float)dVar9 - fVar13) +
                                   ((float)dVar10 - fVar22) * ((float)dVar10 - fVar22)));
      if (fVar19 <= fVar12) {
        fVar12 = fVar19;
      }
      dVar4 = (double)fVar18;
      dVar15 = dVar4 - (double)fVar20;
      dVar14 = (-(double)fVar20 * dVar4) / dVar15;
      if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
        dVar14 = dVar4;
      }
      dVar4 = dVar4 / dVar15;
      if ((fVar18 == fVar20) && (!NAN(fVar18) && !NAN(fVar20))) {
        dVar4 = 0.0;
      }
      dVar15 = tan((double)fVar12);
      dVar9 = tan((double)fVar12);
      local_158[0] = 1.0 / dVar9;
      local_158[1] = 0.0;
      local_158[2] = 0.0;
      local_158[3] = 0.0;
      local_158[4] = 0.0;
      local_158[5] = 1.0 / dVar15;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = dVar4;
      local_100 = 0x3ff0000000000000;
      uStack_f8 = 0;
      uStack_f0 = 0;
      local_e8 = dVar14;
      local_e0 = 0;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        if (9.99999993922529e-09 <= dVar11) {
          local_258 = 1.0 / local_2a8;
          local_248 = local_2b8 * local_258;
          dVar21 = dVar21 * local_258;
          local_258 = local_2b0 * local_258;
          dStack_250 = dVar21;
          goto LAB_14718008a;
        }
        local_258 = DAT_14c8464e0;
        dStack_250 = DAT_14c8464e8;
        local_248 = DAT_14c8464f0;
      }
      else {
        local_258 = local_2b0;
        dStack_250 = dVar21;
        local_248 = local_2b8;
LAB_14718008a:
        dStack_250 = dVar21;
      }
      local_290[5] = dStack_250 * 0.0 + local_258 * -0.0;
      local_290[4] = local_258 - local_248 * 0.0;
      local_290[3] = local_248 * 0.0 - dStack_250;
      dVar15 = local_290[5] * local_290[5] +
               local_290[3] * local_290[3] + local_290[4] * local_290[4];
      if ((dVar15 != 1.0) || (NAN(dVar15))) {
        if (9.99999993922529e-09 <= dVar15) {
          dVar15 = 1.0 / SQRT(dVar15);
          local_290[5] = local_290[5] * dVar15;
          local_290[4] = local_290[4] * dVar15;
          local_290[3] = local_290[3] * dVar15;
          goto LAB_147180106;
        }
        local_290[3] = DAT_14c8464e0;
        local_290[4] = DAT_14c8464e8;
        local_290[5] = DAT_14c8464f0;
      }
      else {
LAB_147180106:
      }
      local_290[2] = local_258 * local_290[4] + -dStack_250 * local_290[3];
      local_290[1] = local_248 * local_290[3] - local_290[5] * local_258;
      local_290[0] = dStack_250 * local_290[5] - local_290[4] * local_248;
      lVar6 = 0;
      do {
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4) =
             *(undefined8 *)((longlong)local_290 + lVar6 + 0x18);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 8) =
             *(undefined8 *)((longlong)local_290 + lVar6);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x10) =
             *(undefined8 *)((longlong)&local_258 + lVar6);
        *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x18) = 0;
        lVar6 = lVar6 + 8;
        uVar17 = extraout_XMM0_Db_00;
      } while (lVar6 != 0x18);
    }
    local_e0 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    local_100 = 0x3ff0000000000000;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    local_158[4] = 0.0;
    local_158[3] = 0.0;
    local_158[2] = 0.0;
    local_158[1] = 0.0;
    dVar15 = -(double)fVar22;
    local_1d8[0xc] = (local_290[3] * dVar15 - local_290[4] * local_2a0) - local_290[5] * local_298;
    local_1d8[0xd] = (local_290[0] * dVar15 - local_290[1] * local_2a0) - local_290[2] * local_298;
    local_1d8[0xe] = (dVar15 * local_258 - dStack_250 * local_2a0) - local_248 * local_298;
    local_160 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_258,local_1d8,local_158);
    pdVar7 = &local_258;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *param_2 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      param_2 = param_2 + 1;
    }
    local_2d8 = local_2bc;
    local_2d0 = 0;
    FUN_14717f3dc(&local_258,param_7,CONCAT44(uVar17,fVar12 + fVar12),1);
    *(float *)(param_3 + 1) = dStack_250._0_4_;
    *param_3 = local_258;
    goto LAB_147180292;
  }
  dVar15 = (double)fVar16;
  local_158[0] = 1.0 / dVar15;
  dVar21 = (double)(1.0 / (fVar16 + fVar16));
  if ((fVar16 == 0.0) && (!NAN(fVar16))) {
    local_158[0] = 1.0;
  }
  local_158[1] = 0.0;
  local_158[2] = 0.0;
  local_158[3] = 0.0;
  local_158[4] = 0.0;
  local_158[5] = local_158[0];
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = -dVar21;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e8 = dVar21 * -0.0 + 1.0;
  local_e0 = 0x3ff0000000000000;
  dVar11 = dVar4 - *(double *)(param_5 + 0x90) * dVar15;
  dVar14 = dVar9 - *(double *)(param_5 + 0x70) * dVar15;
  dVar15 = dVar10 - dVar15 * *(double *)(param_5 + 0x50);
  local_248 = dVar4 - dVar11;
  dStack_250 = dVar9 - dVar14;
  local_258 = dVar10 - dVar15;
  dVar21 = local_248 * local_248 + local_258 * local_258 + dStack_250 * dStack_250;
  if ((dVar21 != 1.0) || (NAN(dVar21))) {
    if (9.99999993922529e-09 <= dVar21) {
      dVar21 = 1.0 / SQRT(dVar21);
      local_248 = local_248 * dVar21;
      dStack_250 = dStack_250 * dVar21;
      local_258 = local_258 * dVar21;
      goto LAB_14717fce5;
    }
    local_258 = DAT_14c8464e0;
    dStack_250 = DAT_14c8464e8;
    local_248 = DAT_14c8464f0;
  }
  else {
LAB_14717fce5:
  }
  local_290[5] = dStack_250 * 0.0 + local_258 * -0.0;
  local_290[4] = local_258 - local_248 * 0.0;
  local_290[3] = local_248 * 0.0 - dStack_250;
  dVar21 = local_290[5] * local_290[5] + local_290[3] * local_290[3] + local_290[4] * local_290[4];
  if ((dVar21 != 1.0) || (NAN(dVar21))) {
    if (9.99999993922529e-09 <= dVar21) {
      dVar21 = 1.0 / SQRT(dVar21);
      local_290[5] = local_290[5] * dVar21;
      local_290[4] = local_290[4] * dVar21;
      local_290[3] = local_290[3] * dVar21;
      goto LAB_14717fd81;
    }
    local_290[3] = DAT_14c8464e0;
    local_290[4] = DAT_14c8464e8;
    local_290[5] = DAT_14c8464f0;
  }
  else {
LAB_14717fd81:
  }
  if (fVar12 <= 1.0) {
    fVar12 = 1.0;
  }
  local_290[2] = local_258 * local_290[4] + -dStack_250 * local_290[3];
  local_290[1] = local_248 * local_290[3] - local_290[5] * local_258;
  local_290[0] = dStack_250 * local_290[5] - local_290[4] * local_248;
  lVar6 = 0;
  do {
    *(undefined8 *)((longlong)local_1d8 + lVar6 * 4) =
         *(undefined8 *)((longlong)local_290 + lVar6 + 0x18);
    *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 8) =
         *(undefined8 *)((longlong)local_290 + lVar6);
    *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x10) =
         *(undefined8 *)((longlong)&local_258 + lVar6);
    *(undefined8 *)((longlong)local_1d8 + lVar6 * 4 + 0x18) = 0;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  dVar15 = -dVar15;
  local_1d8[0xc] = (local_290[3] * dVar15 - local_290[4] * dVar14) - local_290[5] * dVar11;
  local_1d8[0xd] = (local_290[0] * dVar15 - local_290[1] * dVar14) - local_290[2] * dVar11;
  local_1d8[0xe] = (dVar15 * local_258 - dStack_250 * dVar14) - local_248 * dVar11;
  local_160 = 0x3ff0000000000000;
  FUN_1447fea8d(&local_258,local_1d8,local_158);
  pdVar7 = &local_258;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *param_2 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    param_2 = param_2 + 1;
  }
  iVar5 = param_7[1];
  if (*param_7 < param_7[1]) {
    iVar5 = *param_7;
  }
  *(float *)(param_3 + 1) = fVar12 * (fVar16 / (float)iVar5);
  fVar23 = fVar23 * (fVar16 / (float)iVar5);
  *(float *)param_3 = fVar23;
  *(float *)((longlong)param_3 + 4) = fVar23;
LAB_147180292:
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147180620 FUN_147180620 body=270 status=ok
// SIG undefined FUN_147180620(void)

int * FUN_147180620(int *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0 < DAT_14c760338) {
    if ((longlong)(int)param_4[1] == 0) {
      iVar9 = 0x7fffffff;
      iVar8 = -0x7fffffff;
      iVar6 = -0x7fffffff;
      iVar7 = 0x7fffffff;
    }
    else {
      lVar3 = *param_4;
      iVar6 = -0x7fffffff;
      iVar7 = 0x7fffffff;
      lVar5 = 0;
      iVar9 = 0x7fffffff;
      iVar8 = -0x7fffffff;
      do {
        iVar1 = *(int *)(lVar3 + 0x58 + lVar5);
        if (iVar7 < iVar1) {
          iVar1 = iVar7;
        }
        iVar7 = iVar1;
        iVar1 = *(int *)(lVar3 + 0x5c + lVar5);
        if (iVar9 < iVar1) {
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
        iVar1 = *(int *)(lVar3 + 0x60 + lVar5);
        if (iVar6 < iVar1) {
          iVar6 = iVar1;
        }
        iVar1 = *(int *)(lVar3 + 100 + lVar5);
        if (iVar8 < iVar1) {
          iVar8 = iVar1;
        }
        lVar5 = lVar5 + 0x78;
      } while ((longlong)(int)param_4[1] * 0x78 - lVar5 != 0);
    }
    *param_1 = iVar7;
    param_1[1] = iVar9;
    param_1[2] = iVar6;
    param_1[3] = iVar8;
    cVar4 = FUN_144b2acc6(param_2);
    if (cVar4 != '\0') {
      iVar1 = *(int *)(param_2 + 0x30f8);
      iVar7 = iVar7 + iVar1;
      *param_1 = iVar7;
      iVar2 = *(int *)(param_2 + 0x30fc);
      iVar9 = iVar9 + iVar2;
      param_1[1] = iVar9;
      iVar6 = iVar6 + iVar1;
      param_1[2] = iVar6;
      iVar8 = iVar8 + iVar2;
      param_1[3] = iVar8;
    }
    if ((iVar7 < iVar6) && (iVar9 < iVar8)) {
      return param_1;
    }
  }
  *(undefined8 *)param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = param_3[1];
  return param_1;
}



// FUNCTION 14718072e FUN_14718072e body=42 status=ok
// SIG undefined FUN_14718072e(void)

void FUN_14718072e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147180760 FUN_147180760 body=96 status=ok
// SIG undefined FUN_147180760(void)

undefined8 FUN_147180760(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145efff44();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da460,1);
  return uVar3;
}



// FUNCTION 1471807c0 FUN_1471807c0 body=52 status=ok
// SIG undefined FUN_1471807c0(void)

void FUN_1471807c0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471807f4 FUN_1471807f4 body=1032 status=ok
// SIG undefined FUN_1471807f4(void)

void FUN_1471807f4(wchar_t *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_388 [32];
  wchar_t **local_368;
  wchar_t *local_358;
  undefined8 *local_350;
  uint *local_348;
  ulonglong *local_340;
  undefined8 *local_338;
  uint *local_330;
  undefined8 local_328;
  undefined8 local_320;
  uint local_318 [8];
  ulonglong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  uint local_2c8 [4];
  undefined8 local_2b8;
  longlong local_2b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_320 = param_2;
  if (((int)param_4[1] != 0) && (cVar6 = FUN_140919df9(0,param_3), cVar6 != '\0')) {
    local_368 = (wchar_t **)&local_2f8;
    local_2f8 = local_2f8 & 0xffffffffffffff00;
    local_358 = L"DummyOutput";
    local_2b8 = 0;
    local_2c8[0] = 4;
    if (DAT_14ca84e48 < 4) {
      local_2c8[0] = DAT_14ca84e48;
    }
    local_2c8[0] = local_2c8[0] + (local_2c8[0] == 0);
    local_2c8[1] = 1;
    local_2c8[2] = 0x10109;
    pwVar1 = param_1 + 0x38;
    lVar8 = FUN_144738de6(param_1 + 0xc4,pwVar1,&local_358,local_2c8);
    local_2c8[0] = CONCAT13(local_2c8[0]._3_1_,0x1c);
    local_2c8[2] = (uint)lVar8;
    local_2c8[3] = (uint)((ulonglong)lVar8 >> 0x20);
    local_358 = (wchar_t *)CONCAT71(local_358._1_7_,1);
    pwVar2 = param_1 + 0xcc;
    local_368 = &local_358;
    local_328 = FUN_144a23c98(pwVar2,pwVar1,lVar8 + 8,local_2c8);
    local_2b0 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
    uVar9 = local_2c8[0] >> 8;
    local_2c8[0] = local_2c8[0] & 0xffffff00;
    local_2c8[1] = 0;
    local_2c8[2] = 0xffffffff;
    local_2b8 = 0;
    if ((*(byte *)(local_2b0 + 0x68) & 0x80) != 0) {
      local_2c8[0] = CONCAT31((int3)uVar9,0x1c);
    }
    local_2f8 = FUN_14475683e(pwVar2,pwVar1,local_2b0 + 8,local_2c8);
    local_2b0 = FUN_144aba046(&DAT_14ca63b10,param_1,4,1);
    local_2c8[0]._0_1_ = 0x1c;
    local_2c8[1] = 0;
    local_2c8[2] = 0xffffffff;
    local_2b8 = 0;
    local_2f0 = FUN_14475683e(pwVar2,pwVar1,local_2b0 + 8,local_2c8);
    local_2b0 = FUN_144aba046(&DAT_14ca63b10,param_1,0x10,1);
    local_2c8[0]._0_1_ = 0x30;
    local_2c8[1] = 0;
    local_2c8[2] = 0xffffffff;
    local_2b8 = 0;
    local_2e8 = FUN_14475683e(pwVar2,pwVar1,local_2b0 + 8,local_2c8);
    local_2b0 = FUN_144aba046(&DAT_14ca63b10,param_1,0x10,1);
    local_2c8[0]._0_1_ = 1;
    local_2c8[1] = 0;
    local_2c8[2] = 0xffffffff;
    local_2b8 = 0;
    local_2e0 = FUN_14475683e(pwVar2,pwVar1,local_2b0 + 8,local_2c8);
    local_2b0 = FUN_14018b826(&DAT_14ca63b10,param_1,4);
    local_2c8[0]._0_1_ = 0;
    local_2c8[1] = 0;
    local_2c8[2] = 0xffffffff;
    local_2b8 = 0;
    if ((*(byte *)(local_2b0 + 0x68) & 0x80) != 0) {
      local_2c8[0]._0_1_ = 0x1c;
    }
    local_2d8 = FUN_14475683e(pwVar2,pwVar1,local_2b0 + 8,local_2c8);
    local_330 = local_318;
    local_318[0] = 0;
    local_318[1] = 0;
    local_318[2] = 0;
    local_318[3] = 0;
    local_318[4] = 0;
    local_350 = &local_328;
    local_340 = &local_2f8;
    local_338 = &local_320;
    iVar7 = (int)param_4[1];
    local_358 = param_1;
    local_348 = local_2c8;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(*param_4 + lVar8 * 8);
        bVar3 = *(byte *)(lVar5 + 0x28);
        if (((bVar3 - 0x20 < 0x3d) &&
            ((0x101b80101203000fU >> ((ulonglong)(bVar3 - 0x20) & 0x3f) & 1) != 0)) ||
           (bVar3 - 0x1c < 2)) {
          uVar9 = (*(int *)(&DAT_14c87342c + (uint)bVar3 * 0x30) != 1) + 1;
        }
        else {
          uVar9 = 3;
        }
        uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x40) + 0x68);
        uVar10 = (ulonglong)uVar9;
        if ((uVar4 >> 0x10 & 1) != 0) {
          uVar10 = 0;
        }
        if ((uVar4 & 0x10) != 0) {
          uVar10 = 4;
        }
        uVar9 = local_318[uVar10];
        local_318[uVar10] = uVar9 + 1;
        *(longlong *)
         ((longlong)local_2c8 + (ulonglong)uVar9 * 8 + (ulonglong)(uint)((int)uVar10 << 7)) = lVar5;
        if (0xe < (int)uVar9) {
          FUN_142c63c80(&local_358,uVar10,0x10);
          iVar7 = (int)param_4[1];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar7);
    }
    uVar10 = 0;
    do {
      if (0 < (int)local_318[uVar10]) {
        FUN_142c63c80(&local_358,uVar10 & 0xffffffff);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 5);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147180bfd FUN_147180bfd body=176 status=ok
// SIG undefined FUN_147180bfd(void)

int * FUN_147180bfd(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = param_3;
  param_1[4] = param_4;
  auVar7._0_4_ = logf((float)param_2);
  auVar7._4_4_ = extraout_XMM0_Db;
  auVar7._8_8_ = extraout_XMM0_Qb;
  auVar6._4_12_ = auVar7._4_12_;
  auVar6._0_4_ = auVar7._0_4_ * 1.442695;
  if (0.0 <= auVar6._0_4_) {
    auVar7 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),2);
    uVar5 = auVar7._0_8_;
  }
  else {
    auVar7 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),1);
    uVar5 = auVar7._0_8_;
  }
  fVar4 = (float)exp2f(uVar5);
  uVar2 = (uint)(longlong)fVar4;
  if (param_4 <= (uint)(longlong)fVar4) {
    uVar2 = param_4;
  }
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  param_1[3] = uVar3;
  iVar1 = (int)((ulonglong)param_4 / (ulonglong)uVar3);
  param_1[2] = iVar1;
  uVar2 = (uint)((ulonglong)((param_3 + iVar1) - 1) / ((ulonglong)param_4 / (ulonglong)uVar3));
  param_1[5] = uVar2;
  *(undefined1 **)(param_1 + 6) = &DAT_100000001;
  if (0xffff < uVar2) {
    param_1[5] = 0x40;
    param_1[6] = uVar2 + 0x3f >> 6;
  }
  return param_1;
}



// FUNCTION 147180cad FUN_147180cad body=163 status=ok
// SIG undefined FUN_147180cad(void)

int FUN_147180cad(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = FUN_1400e05f2();
  if (DAT_14c9d7010 < 1) {
    fVar6 = 1.0;
    cVar1 = FUN_144b0fd3a();
    if (cVar1 == '\0') {
      cVar1 = FUN_144b0fda7(param_1);
      pfVar4 = (float *)&DAT_14c760350;
      if (cVar1 != '\0') {
        pfVar4 = (float *)&DAT_14c760358;
      }
    }
    else {
      pfVar4 = (float *)&DAT_14c760358;
    }
  }
  else {
    fVar6 = 10.0;
    pfVar4 = (float *)&DAT_14c760364;
  }
  fVar5 = *pfVar4;
  if (fVar6 <= *pfVar4) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar3 = (int)ROUND(fVar5 * (float)iVar2 + fVar5 * (float)iVar2 + -0.5) >> 1;
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 147180d50 FUN_147180d50 body=1166 status=ok
// SIG undefined FUN_147180d50(void)

void FUN_147180d50(longlong param_1,char param_2,float *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar8 = DAT_14c9d6fe8;
  iVar11 = *(int *)(param_1 + 0x3104);
  iVar1 = *(int *)(param_1 + 0x30f8);
  iVar2 = *(int *)(param_1 + 0x30fc);
  iVar3 = *(int *)(param_1 + 0x3100);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar9 = FUN_144a61b4f();
    uVar12 = (ulonglong)(bVar9 ^ 1);
  }
  iVar4 = *(int *)(lVar8 + uVar12 * 4);
  if (param_2 == '\0') {
    uVar13 = 0xffffffff;
  }
  else {
    iVar10 = FUN_1400e05f2(*(undefined2 *)
                            (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2));
    uVar13 = iVar10 - 2;
  }
  fVar7 = DAT_14c76032c;
  fVar6 = DAT_14c760328;
  fVar5 = DAT_14c760324;
  fVar17 = (float)DAT_14c84635c;
  if (1.0 < *(double *)(param_1 + 0x8a8) || *(double *)(param_1 + 0x8a8) == 1.0) {
    fVar17 = (float)*(double *)(param_1 + 0x930) + (float)*(double *)(param_1 + 0x930);
  }
  iVar10 = DAT_14c867cf8;
  iVar14 = DAT_14c867cf4;
  if (DAT_14c867cf1 == '\0') {
    iVar10 = *(int *)(param_1 + 0x4f4) - *(int *)(param_1 + 0x4ec);
    iVar14 = *(int *)(param_1 + 0x4f0) - *(int *)(param_1 + 0x4e8);
  }
  uVar12 = (ulonglong)uVar13;
  if (uVar13 < 7) {
    fVar21 = *(float *)(&DAT_14a22d168 + uVar12 * 4);
  }
  else {
    fVar21 = 1.0;
  }
  fVar19 = *(float *)(param_1 + 0x1de8);
  if (1.0 <= fVar17) {
    fVar15 = (float)iVar14 / fVar17;
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
  }
  else {
    fVar15 = tanf(fVar19 * 0.017453292 * 0.5);
    fVar15 = fVar15 / ((float)iVar10 * 0.5);
  }
  if (uVar13 < 7) {
    fVar22 = *(float *)(&DAT_14a22d168 + uVar12 * 4);
  }
  else {
    fVar22 = 1.0;
  }
  if (1.0 <= fVar17) {
    fVar16 = (float)iVar14 / fVar17;
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
  }
  else {
    fVar16 = tanf(fVar19 * 0.017453292 * 0.5);
    fVar16 = fVar16 / ((float)iVar10 * 0.5);
  }
  if (uVar13 < 7) {
    fVar20 = *(float *)(&DAT_14a22d168 + uVar12 * 4);
  }
  else {
    fVar20 = 1.0;
  }
  if (1.0 <= fVar17) {
    fVar17 = (float)iVar14 / fVar17;
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
  }
  else {
    fVar17 = tanf(fVar19 * 0.017453292 * 0.5);
    fVar17 = fVar17 / ((float)iVar10 * 0.5);
  }
  fVar19 = 1.0 / (float)((iVar3 - iVar1) * 2);
  fVar18 = 1.0 / (float)((iVar11 - iVar2) * 2);
  iVar11 = 0x200;
  if (iVar4 < 0x200) {
    iVar11 = iVar4;
  }
  iVar1 = 0;
  if (0 < iVar11) {
    iVar1 = iVar11;
  }
  if (fVar18 <= fVar19) {
    fVar19 = fVar18;
  }
  fVar18 = 1.0;
  if (1.0 <= fVar6) {
    fVar18 = fVar6;
  }
  *param_3 = fVar21 * fVar15 * fVar5 * 0.5;
  param_3[1] = fVar18 * 0.5 * fVar20 * fVar17;
  param_3[2] = fVar22 * fVar16 * fVar7 * 0.5;
  param_3[3] = (float)iVar1 * fVar19;
  *param_4 = (uint)(1.0 < *(double *)(param_1 + 0x8a8) || *(double *)(param_1 + 0x8a8) == 1.0);
  *param_5 = (uint)(0 < DAT_14c9d6d98) << 6 |
             (uint)(0.0 < DAT_14c76031c) << 4 |
             (uint)(0.0 < DAT_14c760310) + (uint)(0.0 < DAT_14c760314) * 2 +
             (uint)(0.0 < DAT_14c760318) * 4 + (uint)(0.0 < DAT_14c760320) * 8;
  return;
}



// FUNCTION 1471811de FUN_1471811de body=42 status=ok
// SIG undefined FUN_1471811de(void)

void FUN_1471811de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147181210 FUN_147181210 body=96 status=ok
// SIG undefined FUN_147181210(void)

undefined8 FUN_147181210(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed3c88();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da4e8,1);
  return uVar3;
}



// FUNCTION 147181270 FUN_147181270 body=52 status=ok
// SIG undefined FUN_147181270(void)

void FUN_147181270(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471812a4 FUN_1471812a4 body=42 status=ok
// SIG undefined FUN_1471812a4(void)

void FUN_1471812a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471812d6 FUN_1471812d6 body=96 status=ok
// SIG undefined FUN_1471812d6(void)

undefined8 FUN_1471812d6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e51d74();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da570,1);
  return uVar3;
}



// FUNCTION 147181336 FUN_147181336 body=52 status=ok
// SIG undefined FUN_147181336(void)

void FUN_147181336(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718136a FUN_14718136a body=54 status=ok
// SIG undefined FUN_14718136a(void)

void FUN_14718136a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1471813a8 FUN_1471813a8 body=39 status=ok
// SIG undefined FUN_1471813a8(void)

void FUN_1471813a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1471813d0 FUN_1471813d0 body=60 status=ok
// SIG undefined FUN_1471813d0(void)

longlong FUN_1471813d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14718140c FUN_14718140c body=54 status=ok
// SIG undefined FUN_14718140c(void)

void FUN_14718140c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14718144a FUN_14718144a body=39 status=ok
// SIG undefined FUN_14718144a(void)

void FUN_14718144a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_14718b2b4(uVar1,param_1);
  return;
}



// FUNCTION 147181472 FUN_147181472 body=87 status=ok
// SIG undefined FUN_147181472(void)

longlong FUN_147181472(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined4 *)(lVar1 + 0x128) = 0;
  return lVar1;
}



// FUNCTION 1471814ca FUN_1471814ca body=49 status=ok
// SIG undefined FUN_1471814ca(void)

void FUN_1471814ca(void)

{
  FUN_1471814fc();
  return;
}



// FUNCTION 1471814fc FUN_1471814fc body=206 status=ok
// SIG undefined FUN_1471814fc(void)

void FUN_1471814fc(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0xc0);
  while ((plVar3 != (longlong *)0x0 &&
         ((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)), lVar2 == 0
          || (cVar1 = FUN_1471815ca(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9,plVar3,lVar2), cVar1 == '\0'))))) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1471815ca FUN_1471815ca body=651 status=ok
// SIG undefined FUN_1471815ca(void)

ulonglong FUN_1471815ca(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar6;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  uint local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_15c [3];
  undefined1 local_150 [168];
  undefined1 *local_a8;
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
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar7 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_4 == 0) {
    uVar6 = CONCAT71(uVar7,0 < *(int *)(param_2 + 0xb0));
  }
  else {
    uVar6 = CONCAT71(uVar7,*(undefined1 *)(param_4 + 0x6e)) & 0xffffffffffffff08;
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 3);
  }
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
  cVar2 = FUN_14054728d(*(undefined4 *)(param_1 + 0x20),param_11,uVar4,uVar6 & 0xffffffff);
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (cVar2 != '\0') {
    local_a8 = (undefined1 *)0x0;
    lVar9 = *(longlong *)(param_2 + 0xa8);
    if (*(longlong *)(param_2 + 0xa8) == 0) {
      lVar9 = param_2;
    }
    FUN_144739392(local_150,lVar9,*(undefined4 *)(param_2 + 0xb0),0);
    local_68 = *(undefined1 *)(param_2 + 0xe8);
    local_98 = *(undefined4 *)(param_2 + 0xb8);
    uStack_94 = *(undefined4 *)(param_2 + 0xbc);
    uStack_90 = *(undefined4 *)(param_2 + 0xc0);
    uStack_8c = *(undefined4 *)(param_2 + 0xc4);
    local_88 = *(undefined4 *)(param_2 + 200);
    uStack_84 = *(undefined4 *)(param_2 + 0xcc);
    uStack_80 = *(undefined4 *)(param_2 + 0xd0);
    uStack_7c = *(undefined4 *)(param_2 + 0xd4);
    local_78 = *(undefined4 *)(param_2 + 0xd8);
    uStack_74 = *(undefined4 *)(param_2 + 0xdc);
    uStack_70 = *(undefined4 *)(param_2 + 0xe0);
    uStack_6c = *(undefined4 *)(param_2 + 0xe4);
    iVar1 = *(int *)(param_2 + 0xb0);
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_150;
        }
        lVar9 = (longlong)iVar5 * 0xa8;
        *(undefined4 *)(puVar8 + lVar9 + 0x58) = 0;
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_150;
        }
        *(undefined4 *)(puVar8 + lVar9 + 0x5c) = 1;
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_150;
        }
        *(undefined4 *)(puVar8 + lVar9 + 0x60) = 1;
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_150;
        }
        *(undefined8 *)(puVar8 + lVar9 + 0x48) = 0;
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_150;
        }
        *(undefined4 *)(puVar8 + lVar9 + 0x50) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    if (param_4 == 0) {
      lVar9 = *(longlong *)(param_2 + 0xa8);
      if (*(longlong *)(param_2 + 0xa8) == 0) {
        lVar9 = param_2;
      }
      local_178 = 0;
      FUN_144b13a4e(param_1,local_15c,0,lVar9);
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0xa8);
      if (*(longlong *)(param_2 + 0xa8) == 0) {
        lVar9 = param_2;
      }
      FUN_144b13a4e(param_1,local_15c,*(undefined8 *)(param_4 + 0x218),lVar9);
      local_178 = (uint)*(byte *)(param_4 + 0x82);
    }
    local_168 = param_9;
    local_170 = param_8;
    local_180 = local_15c[0];
    local_188 = param_7;
    local_190 = param_6;
    local_198 = param_11;
    local_1a0 = param_10;
    local_1a8 = param_5;
    uVar3 = FUN_147181856(param_1,local_150,param_3,param_4);
    uVar6 = (ulonglong)uVar3;
    FUN_1446fc232(local_150);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147181856 FUN_147181856 body=664 status=ok
// SIG undefined FUN_147181856(void)

undefined4
FUN_147181856(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             float param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined8 *local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_14608850e();
  (&uStack_f0)[DAT_14c9d74f0] = &DAT_14c9d74a8;
  auStack_90[DAT_14c9d74f0] = 0;
  FUN_145e1be58();
  (&uStack_f0)[DAT_14c9d7618] = &DAT_14c9d75d0;
  auStack_90[DAT_14c9d7618] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x40);
    uStack_f0 = *(undefined8 *)(param_1 + 0x48);
    local_e8 = *(undefined4 *)(param_1 + 0x50);
    uStack_e4 = *(undefined4 *)(param_1 + 0x54);
    uStack_e0 = *(undefined4 *)(param_1 + 0x58);
    uStack_dc = *(undefined4 *)(param_1 + 0x5c);
    local_d8 = *(undefined4 *)(param_1 + 0x60);
    uStack_d4 = *(undefined4 *)(param_1 + 100);
    uStack_d0 = *(undefined4 *)(param_1 + 0x68);
    uStack_cc = *(undefined4 *)(param_1 + 0x6c);
    local_c8 = *(undefined8 *)(param_1 + 0x70);
    uStack_c0 = *(undefined8 *)(param_1 + 0x78);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_148 = CONCAT44((int)(longlong)param_13,param_12);
    local_1e8 = CONCAT44(local_1e8._4_4_,param_5);
    local_1e0 = local_1e0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_1c8 = 2;
    }
    else {
      local_1c8 = 2 - (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + 0x23ec);
    }
    local_1d0 = &local_1b8;
    local_1e0 = param_7;
    local_1e8 = param_6;
    local_1d8 = &local_f8;
    local_1c0 = &local_168;
    FUN_142c647d8(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147181af0 FUN_147181af0 body=143 status=ok
// SIG undefined FUN_147181af0(void)

undefined8 *
FUN_147181af0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  
  FUN_14025f50e(param_1,L"HairMaterial",param_2,param_3,param_4,param_5);
  *param_1 = &PTR_FUN_14a228a50;
  *(undefined4 *)(param_1 + 10) = 0x11;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)(param_1 + 0x10) = param_6;
  puVar1 = &DAT_14c9c0d40;
  if (param_6 < 2) {
    puVar1 = &DAT_14c9d9e10;
  }
  param_1[8] = *(undefined8 *)(puVar1 + 0x10);
  param_1[9] = DAT_14c9c0d98;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 147181b80 FUN_147181b80 body=42 status=ok
// SIG undefined FUN_147181b80(void)

void FUN_147181b80(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147181bb2 FUN_147181bb2 body=96 status=ok
// SIG undefined FUN_147181bb2(void)

undefined8 FUN_147181bb2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e522de();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da728,1);
  return uVar3;
}



// FUNCTION 147181c12 FUN_147181c12 body=52 status=ok
// SIG undefined FUN_147181c12(void)

void FUN_147181c12(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147181c46 FUN_147181c46 body=42 status=ok
// SIG undefined FUN_147181c46(void)

void FUN_147181c46(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147181c78 FUN_147181c78 body=96 status=ok
// SIG undefined FUN_147181c78(void)

undefined8 FUN_147181c78(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6eef6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da7b0,1);
  return uVar3;
}



// FUNCTION 147181cd8 FUN_147181cd8 body=52 status=ok
// SIG undefined FUN_147181cd8(void)

void FUN_147181cd8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147181d0c FUN_147181d0c body=42 status=ok
// SIG undefined FUN_147181d0c(void)

void FUN_147181d0c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147181d3e FUN_147181d3e body=96 status=ok
// SIG undefined FUN_147181d3e(void)

undefined8 FUN_147181d3e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4482e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da8c0,1);
  return uVar3;
}



// FUNCTION 147181d9e FUN_147181d9e body=52 status=ok
// SIG undefined FUN_147181d9e(void)

void FUN_147181d9e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147181dd2 FUN_147181dd2 body=716 status=ok
// SIG undefined FUN_147181dd2(void)

void FUN_147181dd2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  wchar_t **local_b8;
  undefined1 local_a1;
  wchar_t *local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined8 local_54;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar8 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x40);
    puVar8 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar8 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar8 = &PTR_FUN_14a22cc90;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  iVar7 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = puVar8;
  local_68 = DAT_14ca85098;
  local_78 = DAT_14ca85088;
  uStack_74 = DAT_14ca8508c;
  uStack_70 = DAT_14ca85090;
  uStack_6c = DAT_14ca85094;
  local_80 = &DAT_00020008;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = &DAT_100000001;
  local_54 = 0x1c00010100010001;
  local_4c = 0xff00;
  local_88 = FUN_14472bf7a(param_1,&local_80,L"Hair.VisibilityPPLLNodeCounter",0);
  local_98 = *(undefined1 *)(local_88 + 0x94);
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_93 = 0;
  local_a0 = (wchar_t *)((ulonglong)local_a0 & 0xffffffffffffff00);
  lVar2 = param_1 + 0x198;
  local_b8 = &local_a0;
  uVar4 = FUN_144a96e92(lVar2,plVar1,local_88 + 8,&local_98);
  puVar8[3] = uVar4;
  local_88 = FUN_14472bf7a(param_1,&local_80,L"Hair.VisibilityPPLLNodeIndex",0);
  local_98 = *(undefined1 *)(local_88 + 0x94);
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_93 = 0;
  local_a0 = (wchar_t *)((ulonglong)local_a0 & 0xffffffffffffff00);
  local_b8 = &local_a0;
  uVar4 = FUN_144a96e92(lVar2,plVar1,local_88 + 8,&local_98);
  puVar8[4] = uVar4;
  local_b8 = (wchar_t **)&local_a1;
  local_a1 = 0;
  local_a0 = L"Hair.DummyPPLLNodeData";
  uVar6 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar6 = DAT_14ca84e48;
  }
  local_88 = 0;
  iVar7 = uVar6 + (uVar6 == 0);
  local_98 = (undefined1)iVar7;
  uStack_97 = (undefined1)((uint)iVar7 >> 8);
  uStack_96 = (undefined1)((uint)iVar7 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar7 >> 0x18);
  uStack_94 = 1;
  uStack_93 = 0;
  uStack_91 = 0;
  uStack_90 = 0x10109;
  lVar5 = FUN_144738de6(param_1 + 0x188,plVar1,&local_a0,&local_98);
  local_98 = 0;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_90 = (uint)lVar5;
  uStack_8c = (undefined4)((ulonglong)lVar5 >> 0x20);
  if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
    local_98 = 0x1c;
  }
  puVar3 = puVar8 + 2;
  local_a0 = (wchar_t *)((ulonglong)local_a0 & 0xffffffffffffff00);
  local_b8 = &local_a0;
  uVar4 = FUN_144a23c98(lVar2,plVar1,lVar5 + 8,&local_98);
  puVar8[5] = uVar4;
  local_98 = SUB81(puVar3,0);
  uStack_97 = (undefined1)((ulonglong)puVar3 >> 8);
  uStack_96 = (undefined1)((ulonglong)puVar3 >> 0x10);
  uStack_95 = (undefined1)((ulonglong)puVar3 >> 0x18);
  uStack_94 = (undefined1)((ulonglong)puVar3 >> 0x20);
  uStack_93 = (undefined2)((ulonglong)puVar3 >> 0x28);
  uStack_91 = (undefined1)((ulonglong)puVar3 >> 0x38);
  FUN_145e6ada8();
  local_a0 = DAT_14c9d7ac0;
  FUN_147197c58(param_1 + 0x1a8,plVar1,&local_98,&local_a0);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471820a0 FUN_1471820a0 body=54 status=ok
// SIG undefined FUN_1471820a0(void)

void FUN_1471820a0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1471820de FUN_1471820de body=39 status=ok
// SIG undefined FUN_1471820de(void)

void FUN_1471820de(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147182106 FUN_147182106 body=60 status=ok
// SIG undefined FUN_147182106(void)

longlong FUN_147182106(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 147182142 FUN_147182142 body=54 status=ok
// SIG undefined FUN_147182142(void)

void FUN_147182142(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147182180 FUN_147182180 body=39 status=ok
// SIG undefined FUN_147182180(void)

void FUN_147182180(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1471821a8 FUN_1471821a8 body=60 status=ok
// SIG undefined FUN_1471821a8(void)

longlong FUN_1471821a8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 1471821e4 FUN_1471821e4 body=54 status=ok
// SIG undefined FUN_1471821e4(void)

void FUN_1471821e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147182222 FUN_147182222 body=39 status=ok
// SIG undefined FUN_147182222(void)

void FUN_147182222(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14718224a FUN_14718224a body=60 status=ok
// SIG undefined FUN_14718224a(void)

longlong FUN_14718224a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 147182286 FUN_147182286 body=54 status=ok
// SIG undefined FUN_147182286(void)

void FUN_147182286(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1471822c4 FUN_1471822c4 body=39 status=ok
// SIG undefined FUN_1471822c4(void)

void FUN_1471822c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1471822ec FUN_1471822ec body=60 status=ok
// SIG undefined FUN_1471822ec(void)

longlong FUN_1471822ec(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 147182328 FUN_147182328 body=54 status=ok
// SIG undefined FUN_147182328(void)

void FUN_147182328(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147182366 FUN_147182366 body=39 status=ok
// SIG undefined FUN_147182366(void)

void FUN_147182366(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14718238e FUN_14718238e body=60 status=ok
// SIG undefined FUN_14718238e(void)

longlong FUN_14718238e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 1471823ca FUN_1471823ca body=54 status=ok
// SIG undefined FUN_1471823ca(void)

void FUN_1471823ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 147182408 FUN_147182408 body=39 status=ok
// SIG undefined FUN_147182408(void)

void FUN_147182408(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147197d66(uVar1,param_1);
  return;
}



// FUNCTION 147182430 FUN_147182430 body=75 status=ok
// SIG undefined FUN_147182430(void)

longlong FUN_147182430(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  return lVar1;
}



// FUNCTION 14718247c FUN_14718247c body=54 status=ok
// SIG undefined FUN_14718247c(void)

void FUN_14718247c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 1471824ba FUN_1471824ba body=39 status=ok
// SIG undefined FUN_1471824ba(void)

void FUN_1471824ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147197e12(uVar1,param_1);
  return;
}



// FUNCTION 1471824e2 FUN_1471824e2 body=75 status=ok
// SIG undefined FUN_1471824e2(void)

longlong FUN_1471824e2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  return lVar1;
}



// FUNCTION 14718252e FUN_14718252e body=54 status=ok
// SIG undefined FUN_14718252e(void)

void FUN_14718252e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 14718256c FUN_14718256c body=39 status=ok
// SIG undefined FUN_14718256c(void)

void FUN_14718256c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147197ebe(uVar1,param_1);
  return;
}



// FUNCTION 147182594 FUN_147182594 body=75 status=ok
// SIG undefined FUN_147182594(void)

longlong FUN_147182594(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  return lVar1;
}



// FUNCTION 1471825e0 FUN_1471825e0 body=54 status=ok
// SIG undefined FUN_1471825e0(void)

void FUN_1471825e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 14718261e FUN_14718261e body=39 status=ok
// SIG undefined FUN_14718261e(void)

void FUN_14718261e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147197f6a(uVar1,param_1);
  return;
}



// FUNCTION 147182646 FUN_147182646 body=75 status=ok
// SIG undefined FUN_147182646(void)

longlong FUN_147182646(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  return lVar1;
}



// FUNCTION 147182692 FUN_147182692 body=49 status=ok
// SIG undefined FUN_147182692(void)

void FUN_147182692(void)

{
  FUN_1471826c4();
  return;
}



// FUNCTION 1471826c4 FUN_1471826c4 body=206 status=ok
// SIG undefined FUN_1471826c4(void)

void FUN_1471826c4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0xc0);
  while ((plVar3 != (longlong *)0x0 &&
         ((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)), lVar2 == 0
          || (cVar1 = FUN_147182792(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9,plVar3,lVar2), cVar1 == '\0'))))) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 147182792 FUN_147182792 body=851 status=ok
// SIG undefined FUN_147182792(void)

ulonglong FUN_147182792(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       char param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_4 == 0) {
    uVar7 = CONCAT71(uVar8,0 < *(int *)(param_2 + 0xb0));
  }
  else {
    uVar7 = CONCAT71(uVar8,*(undefined1 *)(param_4 + 0x6e)) & 0xffffffffffffff08;
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 3);
  }
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
  cVar2 = FUN_14054728d(*(undefined4 *)(param_1 + 0x20),param_11,uVar6,uVar7 & 0xffffffff);
  uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  if (cVar2 != '\0') {
    if (param_4 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = (uint)*(byte *)(param_4 + 0x82);
    }
    local_70 = param_3;
    local_68 = FUN_144b13a0e(param_2);
    uVar3 = FUN_144a875de(param_11,&local_68);
    uVar4 = FUN_144a53bf0(param_11,&local_68);
    iVar1 = *(int *)(param_1 + 0x40);
    if (param_9 == '\x01' && iVar1 == 2) {
      local_98 = param_8;
      local_a0 = local_74;
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_11;
      local_c0 = param_10;
      local_c8 = param_5;
      local_90 = uVar3;
      local_88 = uVar4;
      uVar5 = FUN_147182ae6(param_1,param_2,local_70,param_4);
    }
    else if (iVar1 == 2 && param_9 == '\0') {
      local_98 = param_8;
      local_a0 = local_74;
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_11;
      local_c0 = param_10;
      local_c8 = param_5;
      local_90 = uVar3;
      local_88 = uVar4;
      uVar5 = FUN_147182d64(param_1,param_2,local_70,param_4);
    }
    else if (iVar1 == 3) {
      local_98 = param_8;
      local_a0 = local_74;
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_11;
      local_c0 = param_10;
      local_c8 = param_5;
      local_90 = uVar3;
      local_88 = uVar4;
      uVar5 = FUN_147183260(param_1,param_2,local_70,param_4);
    }
    else if (iVar1 == 1) {
      local_98 = param_8;
      local_a0 = local_74;
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_11;
      local_c0 = param_10;
      local_c8 = param_5;
      local_90 = uVar3;
      local_88 = uVar4;
      uVar5 = FUN_1471834de(param_1,param_2,local_70,param_4);
    }
    else {
      if (iVar1 != 0) goto LAB_1471828a8;
      local_98 = param_8;
      local_a0 = local_74;
      local_a8 = param_7;
      local_b0 = param_6;
      local_b8 = param_11;
      local_c0 = param_10;
      local_c8 = param_5;
      local_90 = uVar3;
      local_88 = uVar4;
      uVar5 = FUN_147182fe2(param_1,param_2,local_70,param_4);
    }
    uVar7 = (ulonglong)uVar5;
  }
LAB_1471828a8:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147182ae6 FUN_147182ae6 body=636 status=ok
// SIG undefined FUN_147182ae6(void)

undefined4
FUN_147182ae6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_1460889e2();
  (&uStack_f0)[DAT_14c9d7d18] = &DAT_14c9d7cd0;
  auStack_90[DAT_14c9d7d18] = 0;
  FUN_145efba14();
  (&uStack_f0)[DAT_14c9d81b8] = &DAT_14c9d8170;
  auStack_90[DAT_14c9d81b8] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x50);
    local_e8 = *(undefined4 *)(param_1 + 0x58);
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    uStack_e0 = *(undefined4 *)(param_1 + 0x60);
    uStack_dc = *(undefined4 *)(param_1 + 100);
    local_d8 = *(undefined4 *)(param_1 + 0x68);
    uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x70);
    uStack_cc = *(undefined4 *)(param_1 + 0x74);
    local_c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x80);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_1f8 = CONCAT44(local_1f8._4_4_,param_5);
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    local_1d0 = param_13;
    local_1d8 = param_12;
    local_1e0 = &local_1b8;
    local_1f0 = param_7;
    local_1f8 = param_6;
    local_1e8 = &local_f8;
    local_1c8 = &local_168;
    FUN_142c7c43e(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147182d64 FUN_147182d64 body=636 status=ok
// SIG undefined FUN_147182d64(void)

undefined4
FUN_147182d64(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088778();
  (&uStack_f0)[DAT_14c9d7bf0] = &DAT_14c9d7ba8;
  auStack_90[DAT_14c9d7bf0] = 0;
  FUN_145efba14();
  (&uStack_f0)[DAT_14c9d81b8] = &DAT_14c9d8170;
  auStack_90[DAT_14c9d81b8] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x50);
    local_e8 = *(undefined4 *)(param_1 + 0x58);
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    uStack_e0 = *(undefined4 *)(param_1 + 0x60);
    uStack_dc = *(undefined4 *)(param_1 + 100);
    local_d8 = *(undefined4 *)(param_1 + 0x68);
    uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x70);
    uStack_cc = *(undefined4 *)(param_1 + 0x74);
    local_c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x80);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_1f8 = CONCAT44(local_1f8._4_4_,param_5);
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    local_1d0 = param_13;
    local_1d8 = param_12;
    local_1e0 = &local_1b8;
    local_1f0 = param_7;
    local_1f8 = param_6;
    local_1e8 = &local_f8;
    local_1c8 = &local_168;
    FUN_142c7d410(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147182fe2 FUN_147182fe2 body=636 status=ok
// SIG undefined FUN_147182fe2(void)

undefined4
FUN_147182fe2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088c4c();
  (&uStack_f0)[DAT_14c9d7e40] = &DAT_14c9d7df8;
  auStack_90[DAT_14c9d7e40] = 0;
  FUN_145efbe4e();
  (&uStack_f0)[DAT_14c9d82e0] = &DAT_14c9d8298;
  auStack_90[DAT_14c9d82e0] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x50);
    local_e8 = *(undefined4 *)(param_1 + 0x58);
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    uStack_e0 = *(undefined4 *)(param_1 + 0x60);
    uStack_dc = *(undefined4 *)(param_1 + 100);
    local_d8 = *(undefined4 *)(param_1 + 0x68);
    uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x70);
    uStack_cc = *(undefined4 *)(param_1 + 0x74);
    local_c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x80);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_1f8 = CONCAT44(local_1f8._4_4_,param_5);
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    local_1d0 = param_13;
    local_1d8 = param_12;
    local_1e0 = &local_1b8;
    local_1f0 = param_7;
    local_1f8 = param_6;
    local_1e8 = &local_f8;
    local_1c8 = &local_168;
    FUN_142c7e3e2(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147183260 FUN_147183260 body=636 status=ok
// SIG undefined FUN_147183260(void)

undefined4
FUN_147183260(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088eb6();
  (&uStack_f0)[DAT_14c9d7f68] = &DAT_14c9d7f20;
  auStack_90[DAT_14c9d7f68] = 0;
  FUN_145efc288();
  (&uStack_f0)[DAT_14c9d8408] = &DAT_14c9d83c0;
  auStack_90[DAT_14c9d8408] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x50);
    local_e8 = *(undefined4 *)(param_1 + 0x58);
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    uStack_e0 = *(undefined4 *)(param_1 + 0x60);
    uStack_dc = *(undefined4 *)(param_1 + 100);
    local_d8 = *(undefined4 *)(param_1 + 0x68);
    uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x70);
    uStack_cc = *(undefined4 *)(param_1 + 0x74);
    local_c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x80);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_1f8 = CONCAT44(local_1f8._4_4_,param_5);
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    local_1d0 = param_13;
    local_1d8 = param_12;
    local_1e0 = &local_1b8;
    local_1f0 = param_7;
    local_1f8 = param_6;
    local_1e8 = &local_f8;
    local_1c8 = &local_168;
    FUN_142c7f3b4(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471834de FUN_1471834de body=636 status=ok
// SIG undefined FUN_1471834de(void)

undefined4
FUN_1471834de(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulonglong param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146089120();
  (&uStack_f0)[DAT_14c9d8090] = &DAT_14c9d8048;
  auStack_90[DAT_14c9d8090] = 0;
  FUN_145efc6c2();
  (&uStack_f0)[DAT_14c9d8530] = &DAT_14c9d84e8;
  auStack_90[DAT_14c9d8530] = 0;
  uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar2 = FUN_14007744c(param_7,&local_f8,uVar3,&local_168);
  if ((char)uVar2 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    uStack_f0 = *(undefined8 *)(param_1 + 0x50);
    local_e8 = *(undefined4 *)(param_1 + 0x58);
    uStack_e4 = *(undefined4 *)(param_1 + 0x5c);
    uStack_e0 = *(undefined4 *)(param_1 + 0x60);
    uStack_dc = *(undefined4 *)(param_1 + 100);
    local_d8 = *(undefined4 *)(param_1 + 0x68);
    uStack_d4 = *(undefined4 *)(param_1 + 0x6c);
    uStack_d0 = *(undefined4 *)(param_1 + 0x70);
    uStack_cc = *(undefined4 *)(param_1 + 0x74);
    local_c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_c0 = *(undefined8 *)(param_1 + 0x80);
    local_168 = 0;
    uStack_160 = 0;
    local_158 = CONCAT44(param_9,param_8);
    uStack_150 = CONCAT44(param_11,param_10);
    local_1f8 = CONCAT44(local_1f8._4_4_,param_5);
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_168,*(undefined8 *)(param_1 + 0x28),param_4,param_2);
    local_1d0 = param_13;
    local_1d8 = param_12;
    local_1e0 = &local_1b8;
    local_1f0 = param_7;
    local_1f8 = param_6;
    local_1e8 = &local_f8;
    local_1c8 = &local_168;
    FUN_142c80386(param_1,param_2,param_3,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14718375c FUN_14718375c body=647 status=ok
// SIG undefined FUN_14718375c(void)

void FUN_14718375c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9c0d50;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c9c0ea0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_1460889e2();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d7d18 * 2) = &DAT_14c9d7cd0;
  local_90[DAT_14c9d7d18] = 0;
  FUN_145efba14();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d81b8 * 2) = &DAT_14c9d8170;
  local_90[DAT_14c9d81b8] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  cVar1 = FUN_14007744c(param_3,&local_f8,*param_4);
  if (cVar1 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f0[0] = 0;
    local_f8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 0;
    uVar2 = FUN_1400e05f2(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
    local_90[0] = CONCAT22(local_90[0]._2_2_,uVar2);
    local_f8 = CONCAT35(local_f8._5_3_,0x1c00000000);
    local_e8 = 0x4000009;
    local_f8 = CONCAT44(local_f8._4_4_,1);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,2);
    local_1e0 = &local_f8;
    FUN_142de6c3a(0x14,*(undefined8 *)(param_2 + 0x38),1,0);
    local_1d0 = *param_5 & 0x3f;
    local_1c8 = *(undefined4 *)(param_1 + 8);
    local_1c0 = param_8;
    local_1d8 = param_7;
    local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = &local_1b8;
    FUN_142c81358(param_4,param_3,param_1 + 0x48,&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471839e4 FUN_1471839e4 body=647 status=ok
// SIG undefined FUN_1471839e4(void)

void FUN_1471839e4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9c0d50;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c9c0ea0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088778();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d7bf0 * 2) = &DAT_14c9d7ba8;
  local_90[DAT_14c9d7bf0] = 0;
  FUN_145efba14();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d81b8 * 2) = &DAT_14c9d8170;
  local_90[DAT_14c9d81b8] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  cVar1 = FUN_14007744c(param_3,&local_f8,*param_4);
  if (cVar1 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f0[0] = 0;
    local_f8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 0;
    uVar2 = FUN_1400e05f2(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
    local_90[0] = CONCAT22(local_90[0]._2_2_,uVar2);
    local_f8 = CONCAT35(local_f8._5_3_,0x1c00000000);
    local_e8 = 0x4000009;
    local_f8 = CONCAT44(local_f8._4_4_,1);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,2);
    local_1e0 = &local_f8;
    FUN_142de6c3a(0x14,*(undefined8 *)(param_2 + 0x38),1,0);
    local_1d0 = *param_5 & 0x3f;
    local_1c8 = *(undefined4 *)(param_1 + 8);
    local_1c0 = param_8;
    local_1d8 = param_7;
    local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = &local_1b8;
    FUN_142c81cb6(param_4,param_3,param_1 + 0x48,&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147183c6c FUN_147183c6c body=625 status=ok
// SIG undefined FUN_147183c6c(void)

void FUN_147183c6c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9d9e38;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c9c0d38;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088c4c();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d7e40 * 2) = &DAT_14c9d7df8;
  local_90[DAT_14c9d7e40] = 0;
  FUN_145efbe4e();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d82e0 * 2) = &DAT_14c9d8298;
  local_90[DAT_14c9d82e0] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  cVar1 = FUN_14007744c(param_3,&local_f8,*param_4);
  if (cVar1 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f0[0] = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    uStack_b0 = 0;
    uStack_af = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 1;
    local_e8 = 9;
    local_f8 = 0xd00000001;
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,0x11);
    local_1e0 = &local_f8;
    FUN_142de6c3a(0xb,*(undefined8 *)(param_2 + 0x38),1,1);
    local_1d0 = *param_5 & 0x3f;
    local_1c8 = *(undefined4 *)(param_1 + 8);
    local_1c0 = param_8;
    local_1d8 = param_7;
    local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = &local_1b8;
    FUN_142c82614(param_4,param_3,param_1 + 0x48,&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147183ede FUN_147183ede body=636 status=ok
// SIG undefined FUN_147183ede(void)

void FUN_147183ede(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9d9e50;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c9c0d38;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146088eb6();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d7f68 * 2) = &DAT_14c9d7f20;
  local_90[DAT_14c9d7f68] = 0;
  FUN_145efc288();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d8408 * 2) = &DAT_14c9d83c0;
  local_90[DAT_14c9d8408] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  cVar1 = FUN_14007744c(param_3,&local_f8,*param_4);
  if (cVar1 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f0[0] = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 1;
    local_e8 = 9;
    local_e0 = 9;
    local_f8 = 0x110d00000002;
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,0x11);
    local_1e0 = &local_f8;
    FUN_142de6c3a(0xb,*(undefined8 *)(param_2 + 0x38),1,1);
    local_1d0 = *param_5 & 0x3f;
    local_1c8 = *(undefined4 *)(param_1 + 8);
    local_1c0 = param_8;
    local_1d8 = param_7;
    local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = &local_1b8;
    FUN_142c82f72(param_4,param_3,param_1 + 0x48,&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14718415c FUN_14718415c body=602 status=ok
// SIG undefined FUN_14718415c(void)

void FUN_14718415c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9c0d50;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c9c0d38;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(&local_f8,0,0x98);
  FUN_146089120();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d8090 * 2) = &DAT_14c9d8048;
  local_90[DAT_14c9d8090] = 0;
  FUN_145efc6c2();
  *(undefined **)(local_f0 + (ulonglong)DAT_14c9d8530 * 2) = &DAT_14c9d84e8;
  local_90[DAT_14c9d8530] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  cVar1 = FUN_14007744c(param_3,&local_f8,*param_4);
  if (cVar1 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_f0[0] = 0;
    local_f8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 1;
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,0x11);
    local_1e0 = &local_f8;
    FUN_142de6c3a(0xb,*(undefined8 *)(param_2 + 0x38),1,1);
    local_1d0 = *param_5 & 0x3f;
    local_1c8 = *(undefined4 *)(param_1 + 8);
    local_1c0 = param_8;
    local_1d8 = param_7;
    local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,param_6);
    local_1e8 = &local_1b8;
    FUN_142c838d0(param_4,param_3,param_1 + 0x48,&local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471843b8 FUN_1471843b8 body=42 status=ok
// SIG undefined FUN_1471843b8(void)

void FUN_1471843b8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471843ea FUN_1471843ea body=96 status=ok
// SIG undefined FUN_1471843ea(void)

undefined8 FUN_1471843ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea47b4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da948,1);
  return uVar3;
}



// FUNCTION 14718444a FUN_14718444a body=52 status=ok
// SIG undefined FUN_14718444a(void)

void FUN_14718444a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718447e FUN_14718447e body=42 status=ok
// SIG undefined FUN_14718447e(void)

void FUN_14718447e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471844b0 FUN_1471844b0 body=96 status=ok
// SIG undefined FUN_1471844b0(void)

undefined8 FUN_1471844b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e52848();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9da9d0,1);
  return uVar3;
}



// FUNCTION 147184510 FUN_147184510 body=52 status=ok
// SIG undefined FUN_147184510(void)

void FUN_147184510(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147184544 FUN_147184544 body=42 status=ok
// SIG undefined FUN_147184544(void)

void FUN_147184544(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147184572 FUN_147184572 body=96 status=ok
// SIG undefined FUN_147184572(void)

undefined8 FUN_147184572(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f44d40();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9daa58,1);
  return uVar3;
}



// FUNCTION 1471845d2 FUN_1471845d2 body=52 status=ok
// SIG undefined FUN_1471845d2(void)

void FUN_1471845d2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147184606 FUN_147184606 body=42 status=ok
// SIG undefined FUN_147184606(void)

void FUN_147184606(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147184638 FUN_147184638 body=96 status=ok
// SIG undefined FUN_147184638(void)

undefined8 FUN_147184638(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f45252();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9daae0,1);
  return uVar3;
}



// FUNCTION 147184698 FUN_147184698 body=52 status=ok
// SIG undefined FUN_147184698(void)

void FUN_147184698(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471846cc FUN_1471846cc body=42 status=ok
// SIG undefined FUN_1471846cc(void)

void FUN_1471846cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471846fe FUN_1471846fe body=96 status=ok
// SIG undefined FUN_1471846fe(void)

undefined8 FUN_1471846fe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f684d8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dab68,1);
  return uVar3;
}



// FUNCTION 14718475e FUN_14718475e body=52 status=ok
// SIG undefined FUN_14718475e(void)

void FUN_14718475e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147184792 FUN_147184792 body=42 status=ok
// SIG undefined FUN_147184792(void)

void FUN_147184792(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471847c4 FUN_1471847c4 body=96 status=ok
// SIG undefined FUN_1471847c4(void)

undefined8 FUN_1471847c4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e82ae4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dabf0,1);
  return uVar3;
}



// FUNCTION 147184824 FUN_147184824 body=52 status=ok
// SIG undefined FUN_147184824(void)

void FUN_147184824(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147184858 FUN_147184858 body=42 status=ok
// SIG undefined FUN_147184858(void)

void FUN_147184858(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14718488a FUN_14718488a body=96 status=ok
// SIG undefined FUN_14718488a(void)

undefined8 FUN_14718488a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6f464();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dac78,1);
  return uVar3;
}



// FUNCTION 1471848ea FUN_1471848ea body=52 status=ok
// SIG undefined FUN_1471848ea(void)

void FUN_1471848ea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718491e FUN_14718491e body=42 status=ok
// SIG undefined FUN_14718491e(void)

void FUN_14718491e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147184950 FUN_147184950 body=96 status=ok
// SIG undefined FUN_147184950(void)

undefined8 FUN_147184950(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6f9d2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dad00,1);
  return uVar3;
}



// FUNCTION 1471849b0 FUN_1471849b0 body=52 status=ok
// SIG undefined FUN_1471849b0(void)

void FUN_1471849b0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471849e4 FUN_1471849e4 body=42 status=ok
// SIG undefined FUN_1471849e4(void)

void FUN_1471849e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147184a16 FUN_147184a16 body=96 status=ok
// SIG undefined FUN_147184a16(void)

undefined8 FUN_147184a16(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145cab906();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dad88,1);
  return uVar3;
}



// FUNCTION 147184a76 FUN_147184a76 body=52 status=ok
// SIG undefined FUN_147184a76(void)

void FUN_147184a76(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147184aaa FUN_147184aaa body=1046 status=ok
// SIG undefined FUN_147184aaa(void)

void FUN_147184aaa(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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
  
  memcpy(param_4,(void *)(param_3 + 0x250),0x130);
  dVar8 = *(double *)(param_3 + 0x390);
  dVar9 = *(double *)(param_3 + 0x398);
  dVar10 = *(double *)(param_3 + 0x3a0);
  dVar16 = dVar9 + dVar9;
  dVar18 = dVar10 + dVar10;
  dVar5 = dVar8 * (dVar8 + dVar8);
  dVar11 = *(double *)(param_3 + 0x3d0);
  dVar12 = *(double *)(param_3 + 0x3d8);
  dVar13 = *(double *)(param_3 + 0x3e0);
  dVar6 = *(double *)(param_3 + 0x390) * dVar18;
  dVar1 = *(double *)(param_3 + 0x3a8);
  dVar7 = dVar1 * (dVar8 + dVar8);
  dVar2 = *(double *)(param_3 + 0x3b0);
  dVar3 = *(double *)(param_3 + 0x3b8);
  dVar4 = *(double *)(param_3 + 0x3c0);
  *(float *)((longlong)param_4 + 0x60) =
       (float)((1.0 - (dVar10 * dVar18 + dVar9 * dVar16)) * dVar11);
  *(float *)((longlong)param_4 + 100) = (float)((dVar16 * dVar8 + dVar1 * dVar18) * dVar11);
  *(float *)((longlong)param_4 + 0x68) = (float)((dVar6 - dVar16 * dVar1) * dVar11);
  *(undefined4 *)((longlong)param_4 + 0x6c) = 0;
  *(float *)((longlong)param_4 + 0x70) = (float)((dVar16 * dVar8 - dVar1 * dVar18) * dVar12);
  *(float *)((longlong)param_4 + 0x74) = (float)((1.0 - (dVar10 * dVar18 + dVar5)) * dVar12);
  *(float *)((longlong)param_4 + 0x78) = (float)((dVar18 * dVar9 + dVar7) * dVar12);
  *(undefined4 *)((longlong)param_4 + 0x7c) = 0;
  *(float *)((longlong)param_4 + 0x80) = (float)((dVar16 * dVar1 + dVar6) * dVar13);
  *(float *)((longlong)param_4 + 0x84) = (float)((dVar18 * dVar9 - dVar7) * dVar13);
  *(float *)((longlong)param_4 + 0x88) = (float)((1.0 - (dVar5 + dVar9 * dVar16)) * dVar13);
  *(undefined4 *)((longlong)param_4 + 0x8c) = 0;
  *(float *)((longlong)param_4 + 0x90) = (float)dVar2;
  *(float *)((longlong)param_4 + 0x94) = (float)dVar3;
  *(float *)((longlong)param_4 + 0x98) = (float)dVar4;
  *(undefined4 *)((longlong)param_4 + 0x9c) = 0x3f800000;
  dVar10 = *(double *)(param_3 + 0x390);
  dVar11 = *(double *)(param_3 + 0x398);
  dVar12 = *(double *)(param_3 + 0x3a0);
  dVar13 = *(double *)(param_3 + 0x3b0);
  dVar16 = *(double *)(param_3 + 0x3b8);
  dVar18 = *(double *)(param_3 + 0x3d0);
  dVar14 = *(double *)(param_3 + 0x3d8);
  dVar4 = *(double *)(param_2 + 0x1030);
  dVar5 = *(double *)(param_2 + 0x1038);
  dVar15 = *(double *)(param_3 + 0x3e0);
  dVar17 = dVar11 + dVar11;
  dVar7 = dVar12 + dVar12;
  dVar6 = dVar10 * (dVar10 + dVar10);
  dVar9 = *(double *)(param_3 + 0x390) * dVar7;
  dVar1 = *(double *)(param_3 + 0x3a8);
  dVar8 = dVar1 * (dVar10 + dVar10);
  dVar2 = *(double *)(param_3 + 0x3c0);
  dVar3 = *(double *)(param_2 + 0x1040);
  *(float *)((longlong)param_4 + 0xa0) =
       (float)((1.0 - (dVar12 * dVar7 + dVar11 * dVar17)) * dVar18);
  *(float *)((longlong)param_4 + 0xa4) = (float)((dVar17 * dVar10 + dVar1 * dVar7) * dVar18);
  *(float *)((longlong)param_4 + 0xa8) = (float)((dVar9 - dVar17 * dVar1) * dVar18);
  *(undefined4 *)((longlong)param_4 + 0xac) = 0;
  *(float *)((longlong)param_4 + 0xb0) = (float)((dVar17 * dVar10 - dVar1 * dVar7) * dVar14);
  *(float *)((longlong)param_4 + 0xb4) = (float)((1.0 - (dVar12 * dVar7 + dVar6)) * dVar14);
  *(float *)((longlong)param_4 + 0xb8) = (float)((dVar7 * dVar11 + dVar8) * dVar14);
  *(undefined4 *)((longlong)param_4 + 0xbc) = 0;
  *(float *)((longlong)param_4 + 0xc0) = (float)((dVar17 * dVar1 + dVar9) * dVar15);
  *(float *)((longlong)param_4 + 0xc4) = (float)((dVar7 * dVar11 - dVar8) * dVar15);
  *(float *)((longlong)param_4 + 200) = (float)((1.0 - (dVar6 + dVar11 * dVar17)) * dVar15);
  *(undefined4 *)((longlong)param_4 + 0xcc) = 0;
  *(float *)((longlong)param_4 + 0xd0) = (float)(dVar13 + dVar4);
  *(float *)((longlong)param_4 + 0xd4) = (float)(dVar16 + dVar5);
  *(float *)((longlong)param_4 + 0xd8) = (float)(dVar2 + dVar3);
  *(undefined4 *)((longlong)param_4 + 0xdc) = 0x3f800000;
  return;
}



// FUNCTION 147184ec0 FUN_147184ec0 body=391 status=ok
// SIG undefined FUN_147184ec0(void)

void FUN_147184ec0(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == '\0') {
    *param_5 = *(undefined8 *)(param_3 + 0x18);
    param_5[1] = *(undefined8 *)(param_3 + 0xa8);
    param_5[2] = *(undefined8 *)(param_3 + 0xd8);
    param_5[3] = *(undefined8 *)(param_3 + 0x90);
    param_5[4] = *(undefined8 *)(param_3 + 0x60);
    local_40 = *(undefined8 *)(param_3 + 0x78);
  }
  else {
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0xe8,1);
    *param_5 = local_40;
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0x1a8,1);
    param_5[1] = local_40;
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0x1e8,1);
    param_5[2] = local_40;
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0x188,1);
    param_5[3] = local_40;
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0x148,1);
    param_5[4] = local_40;
    local_58 = 0;
    FUN_14716cfd3(local_48,param_1,param_3 + 0x168,1);
  }
  param_5[5] = local_40;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147185048 FUN_147185048 body=167 status=ok
// SIG undefined FUN_147185048(void)

void FUN_147185048(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_5 = 0;
  if (param_4 != '\0') {
    local_48 = 0;
    FUN_14716cfd3(&local_40,param_1,*(longlong *)(param_3 + 8) + 0x20,1);
    *param_5 = 1;
    *(undefined8 *)(param_5 + 2) = local_38;
    uVar1 = FUN_14716d181(param_1,*(longlong *)(param_3 + 8) + 0x60);
    *(undefined8 *)(param_5 + 4) = uVar1;
    *(undefined8 *)(param_5 + 6) = local_40;
    param_5[8] = 4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471850f0 FUN_1471850f0 body=173 status=ok
// SIG undefined FUN_1471850f0(void)

longlong FUN_1471850f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 4;
  FUN_147184aaa(0,param_3,param_4,param_1);
  FUN_147184ec0(param_2);
  FUN_147185048(param_2);
  return param_1;
}



// FUNCTION 14718519e FUN_14718519e body=42 status=ok
// SIG undefined FUN_14718519e(void)

void FUN_14718519e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471851d0 FUN_1471851d0 body=96 status=ok
// SIG undefined FUN_1471851d0(void)

undefined8 FUN_1471851d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f45764();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dae98,1);
  return uVar3;
}



// FUNCTION 147185230 FUN_147185230 body=52 status=ok
// SIG undefined FUN_147185230(void)

void FUN_147185230(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185264 FUN_147185264 body=42 status=ok
// SIG undefined FUN_147185264(void)

void FUN_147185264(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147185296 FUN_147185296 body=96 status=ok
// SIG undefined FUN_147185296(void)

undefined8 FUN_147185296(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f62a40();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9daf20,1);
  return uVar3;
}



// FUNCTION 1471852f6 FUN_1471852f6 body=52 status=ok
// SIG undefined FUN_1471852f6(void)

void FUN_1471852f6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718532a FUN_14718532a body=42 status=ok
// SIG undefined FUN_14718532a(void)

void FUN_14718532a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14718535c FUN_14718535c body=96 status=ok
// SIG undefined FUN_14718535c(void)

undefined8 FUN_14718535c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f71852();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9dafa8,1);
  return uVar3;
}



// FUNCTION 1471853bc FUN_1471853bc body=52 status=ok
// SIG undefined FUN_1471853bc(void)

void FUN_1471853bc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471853f0 FUN_1471853f0 body=42 status=ok
// SIG undefined FUN_1471853f0(void)

void FUN_1471853f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147185422 FUN_147185422 body=96 status=ok
// SIG undefined FUN_147185422(void)

undefined8 FUN_147185422(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6ff40();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db030,1);
  return uVar3;
}



// FUNCTION 147185482 FUN_147185482 body=52 status=ok
// SIG undefined FUN_147185482(void)

void FUN_147185482(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471854b6 FUN_1471854b6 body=42 status=ok
// SIG undefined FUN_1471854b6(void)

void FUN_1471854b6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471854e8 FUN_1471854e8 body=96 status=ok
// SIG undefined FUN_1471854e8(void)

undefined8 FUN_1471854e8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2a60e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db0b8,1);
  return uVar3;
}



// FUNCTION 147185548 FUN_147185548 body=52 status=ok
// SIG undefined FUN_147185548(void)

void FUN_147185548(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718557c FUN_14718557c body=42 status=ok
// SIG undefined FUN_14718557c(void)

void FUN_14718557c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471855ae FUN_1471855ae body=96 status=ok
// SIG undefined FUN_1471855ae(void)

undefined8 FUN_1471855ae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f68ad2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db140,1);
  return uVar3;
}



// FUNCTION 14718560e FUN_14718560e body=52 status=ok
// SIG undefined FUN_14718560e(void)

void FUN_14718560e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185642 FUN_147185642 body=42 status=ok
// SIG undefined FUN_147185642(void)

void FUN_147185642(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147185674 FUN_147185674 body=96 status=ok
// SIG undefined FUN_147185674(void)

undefined8 FUN_147185674(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea574a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db1c8,1);
  return uVar3;
}



// FUNCTION 1471856d4 FUN_1471856d4 body=52 status=ok
// SIG undefined FUN_1471856d4(void)

void FUN_1471856d4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185708 FUN_147185708 body=42 status=ok
// SIG undefined FUN_147185708(void)

void FUN_147185708(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14718573a FUN_14718573a body=96 status=ok
// SIG undefined FUN_14718573a(void)

undefined8 FUN_14718573a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e48248();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db250,1);
  return uVar3;
}



// FUNCTION 14718579a FUN_14718579a body=52 status=ok
// SIG undefined FUN_14718579a(void)

void FUN_14718579a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471857ce FUN_1471857ce body=42 status=ok
// SIG undefined FUN_1471857ce(void)

void FUN_1471857ce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147185800 FUN_147185800 body=96 status=ok
// SIG undefined FUN_147185800(void)

undefined8 FUN_147185800(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e83054();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db2d8,1);
  return uVar3;
}



// FUNCTION 147185860 FUN_147185860 body=52 status=ok
// SIG undefined FUN_147185860(void)

void FUN_147185860(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185894 FUN_147185894 body=42 status=ok
// SIG undefined FUN_147185894(void)

void FUN_147185894(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471858c6 FUN_1471858c6 body=96 status=ok
// SIG undefined FUN_1471858c6(void)

undefined8 FUN_1471858c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f141d6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db360,1);
  return uVar3;
}



// FUNCTION 147185926 FUN_147185926 body=52 status=ok
// SIG undefined FUN_147185926(void)

void FUN_147185926(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14718595a FUN_14718595a body=42 status=ok
// SIG undefined FUN_14718595a(void)

void FUN_14718595a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14718598c FUN_14718598c body=96 status=ok
// SIG undefined FUN_14718598c(void)

undefined8 FUN_14718598c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eab9f8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db3e8,1);
  return uVar3;
}



// FUNCTION 1471859ec FUN_1471859ec body=52 status=ok
// SIG undefined FUN_1471859ec(void)

void FUN_1471859ec(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185a20 FUN_147185a20 body=42 status=ok
// SIG undefined FUN_147185a20(void)

void FUN_147185a20(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147185a52 FUN_147185a52 body=96 status=ok
// SIG undefined FUN_147185a52(void)

undefined8 FUN_147185a52(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2ac02();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9db470,1);
  return uVar3;
}



// FUNCTION 147185ab2 FUN_147185ab2 body=52 status=ok
// SIG undefined FUN_147185ab2(void)

void FUN_147185ab2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147185ae6 FUN_147185ae6 body=29 status=ok
// SIG undefined FUN_147185ae6(void)

undefined8 FUN_147185ae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147185b0a FUN_147185b0a body=138 status=ok
// SIG undefined FUN_147185b0a(void)

code * FUN_147185b0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutMacroGroupVoxelSizeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147185b94;
}



// FUNCTION 147185b94 FUN_147185b94 body=138 status=ok
// SIG undefined FUN_147185b94(void)

code * FUN_147185b94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutMacroGroupAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147185c1e;
}



// FUNCTION 147185c1e FUN_147185c1e body=138 status=ok
// SIG undefined FUN_147185c1e(void)

code * FUN_147185c1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InGroupAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ca886;
}



// FUNCTION 147185ca8 FUN_147185ca8 body=138 status=ok
// SIG undefined FUN_147185ca8(void)

code * FUN_147185ca8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelPageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e51512;
}



// FUNCTION 147185d32 FUN_147185d32 body=138 status=ok
// SIG undefined FUN_147185d32(void)

code * FUN_147185d32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PixelSizeAtDepth1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147185dbc;
}



// FUNCTION 147185dbc FUN_147185dbc body=138 status=ok
// SIG undefined FUN_147185dbc(void)

code * FUN_147185dbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147185e46;
}



// FUNCTION 147185e46 FUN_147185e46 body=138 status=ok
// SIG undefined FUN_147185e46(void)

code * FUN_147185e46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5148e;
}



// FUNCTION 147185ed0 FUN_147185ed0 body=631 status=ok
// SIG undefined FUN_147185ed0(void)

double * FUN_147185ed0(double *param_1,double *param_2,double *param_3)

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
  
  dVar10 = *param_2;
  dVar9 = param_2[1];
  dVar13 = dVar10 + param_2[3];
  dVar8 = dVar9 + param_2[4];
  dVar1 = param_2[2];
  dVar6 = dVar1 + param_2[5];
  dVar4 = dVar10 - param_2[3];
  dVar5 = dVar9 - param_2[4];
  dVar11 = dVar1 - param_2[5];
  dVar12 = dVar4;
  if (dVar13 <= dVar4) {
    dVar12 = dVar13;
  }
  dVar2 = dVar5;
  if (dVar8 <= dVar5) {
    dVar2 = dVar8;
  }
  dVar3 = dVar11;
  if (dVar6 <= dVar11) {
    dVar3 = dVar6;
  }
  if (dVar4 <= dVar13) {
    dVar4 = dVar13;
  }
  if (dVar5 <= dVar8) {
    dVar5 = dVar8;
  }
  if (dVar11 <= dVar6) {
    dVar11 = dVar6;
  }
  dVar8 = param_3[2];
  dVar6 = *param_3;
  dVar13 = param_3[1];
  dVar7 = dVar6 - param_3[3];
  if (dVar7 <= dVar12) {
    dVar12 = dVar7;
  }
  if (dVar4 <= dVar7) {
    dVar4 = dVar7;
  }
  dVar7 = dVar13 - param_3[4];
  if (dVar7 <= dVar2) {
    dVar2 = dVar7;
  }
  if (dVar5 <= dVar7) {
    dVar5 = dVar7;
  }
  dVar7 = dVar8 - param_3[5];
  if (dVar7 <= dVar3) {
    dVar3 = dVar7;
  }
  if (dVar11 <= dVar7) {
    dVar11 = dVar7;
  }
  dVar7 = param_3[3] + dVar6;
  if (dVar7 <= dVar12) {
    dVar12 = dVar7;
  }
  if (dVar4 <= dVar7) {
    dVar4 = dVar7;
  }
  dVar7 = param_3[4] + dVar13;
  if (dVar7 <= dVar2) {
    dVar2 = dVar7;
  }
  if (dVar5 <= dVar7) {
    dVar5 = dVar7;
  }
  dVar7 = param_3[5] + dVar8;
  if (dVar7 <= dVar3) {
    dVar3 = dVar7;
  }
  if (dVar11 <= dVar7) {
    dVar11 = dVar7;
  }
  dVar11 = (dVar11 - dVar3) * 0.5;
  dVar5 = (dVar5 - dVar2) * 0.5;
  dVar4 = (dVar4 - dVar12) * 0.5;
  dVar3 = dVar3 + dVar11;
  dVar2 = dVar2 + dVar5;
  dVar12 = dVar12 + dVar4;
  *param_1 = dVar12;
  param_1[1] = dVar2;
  param_1[2] = dVar3;
  param_1[3] = dVar4;
  param_1[4] = dVar5;
  param_1[5] = dVar11;
  dVar8 = SQRT((dVar8 - dVar3) * (dVar8 - dVar3) +
               (dVar6 - dVar12) * (dVar6 - dVar12) + (dVar13 - dVar2) * (dVar13 - dVar2)) +
          param_3[6];
  dVar10 = SQRT((dVar1 - dVar3) * (dVar1 - dVar3) +
                (dVar10 - dVar12) * (dVar10 - dVar12) + (dVar9 - dVar2) * (dVar9 - dVar2)) +
           param_2[6];
  if (dVar10 <= dVar8) {
    dVar10 = dVar8;
  }
  dVar9 = SQRT(dVar11 * dVar11 + dVar4 * dVar4 + dVar5 * dVar5);
  if (dVar10 <= dVar9) {
    dVar9 = dVar10;
  }
  param_1[6] = dVar9;
  return param_1;
}



// FUNCTION 147186148 FUN_147186148 body=85 status=ok
// SIG undefined FUN_147186148(void)

void FUN_147186148(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142c6f348();
  return;
}



// FUNCTION 14718619e FUN_14718619e body=231 status=ok
// SIG undefined FUN_14718619e(void)

undefined8 * FUN_14718619e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1471862dc(param_1,iVar1);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x88);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14718630c(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[10] = param_2[10];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 147186286 FUN_147186286 body=85 status=ok
// SIG undefined FUN_147186286(void)

void FUN_147186286(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142c6f50e();
  return;
}



// FUNCTION 1471862dc FUN_1471862dc body=48 status=ok
// SIG undefined FUN_1471862dc(void)

void FUN_1471862dc(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_142c55812(param_1,0,param_2,0x88);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 14718630c FUN_14718630c body=37 status=ok
// SIG undefined FUN_14718630c(void)

void FUN_14718630c(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_142c6f348(param_1);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 147186331 FUN_147186331 body=177 status=ok
// SIG undefined FUN_147186331(void)

void FUN_147186331(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e512a0();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d9e88,param_4);
  local_78 = &DAT_14c9d9e88;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147186402(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471863e4 FUN_1471863e4 body=29 status=ok
// SIG undefined FUN_1471863e4(void)

undefined8 FUN_1471863e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147186402 FUN_147186402 body=384 status=ok
// SIG undefined FUN_147186402(void)

void FUN_147186402(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9d9ed0;
  if (DAT_14c9d9ed0 != 0) {
    LOCK();
    *(int *)(DAT_14c9d9ed0 + 8) = *(int *)(DAT_14c9d9ed0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d9e88;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a22a090;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147186584 FUN_147186584 body=38 status=ok
// SIG undefined FUN_147186584(void)

undefined8 FUN_147186584(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471865aa FUN_1471865aa body=163 status=ok
// SIG undefined FUN_1471865aa(void)

void FUN_1471865aa(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c6f97a();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_142c6fa62(param_1,param_2);
  return;
}



// FUNCTION 14718664d FUN_14718664d body=374 status=ok
// SIG undefined FUN_14718664d(void)

void FUN_14718664d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1471867c8 FUN_1471867c8 body=138 status=ok
// SIG undefined FUN_1471867c8(void)

code * FUN_1471867c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186852;
}



// FUNCTION 147186852 FUN_147186852 body=138 status=ok
// SIG undefined FUN_147186852(void)

code * FUN_147186852(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSampleCoords";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145941b3e;
}



// FUNCTION 1471868dc FUN_1471868dc body=138 status=ok
// SIG undefined FUN_1471868dc(void)

code * FUN_1471868dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSampleOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186966;
}



// FUNCTION 147186966 FUN_147186966 body=138 status=ok
// SIG undefined FUN_147186966(void)

code * FUN_147186966(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthHZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471869f0;
}



// FUNCTION 1471869f0 FUN_1471869f0 body=138 status=ok
// SIG undefined FUN_1471869f0(void)

code * FUN_1471869f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthFurthestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145941ab4;
}



// FUNCTION 147186a7a FUN_147186a7a body=138 status=ok
// SIG undefined FUN_147186a7a(void)

code * FUN_147186a7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186b04;
}



// FUNCTION 147186b04 FUN_147186b04 body=138 status=ok
// SIG undefined FUN_147186b04(void)

code * FUN_147186b04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairCoverageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186b8e;
}



// FUNCTION 147186b8e FUN_147186b8e body=138 status=ok
// SIG undefined FUN_147186b8e(void)

code * FUN_147186b8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthHZBParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186c18;
}



// FUNCTION 147186c18 FUN_147186c18 body=138 status=ok
// SIG undefined FUN_147186c18(void)

code * FUN_147186c18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bHairTileValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186ca2;
}



// FUNCTION 147186ca2 FUN_147186ca2 body=138 status=ok
// SIG undefined FUN_147186ca2(void)

code * FUN_147186ca2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSampleViewportResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186d2c;
}



// FUNCTION 147186d2c FUN_147186d2c body=138 status=ok
// SIG undefined FUN_147186d2c(void)

code * FUN_147186d2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairDualScatteringRoughnessOverride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186db6;
}



// FUNCTION 147186db6 FUN_147186db6 body=138 status=ok
// SIG undefined FUN_147186db6(void)

code * FUN_147186db6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSamplePerPixelCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147186e40;
}



// FUNCTION 147186e40 FUN_147186e40 body=132 status=ok
// SIG undefined FUN_147186e40(void)

undefined1 * FUN_147186e40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairTileCountXY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147186ec4;
}



// FUNCTION 147186ec8 FUN_147186ec8 body=93 status=ok
// SIG undefined FUN_147186ec8(void)

undefined8 * FUN_147186ec8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144807254(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147186fdc(param_1,iVar1);
      FUN_147187002(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147186f26 FUN_147186f26 body=88 status=ok
// SIG undefined FUN_147186f26(void)

undefined8 * FUN_147186f26(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147187146(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147186f7e FUN_147186f7e body=93 status=ok
// SIG undefined FUN_147186f7e(void)

undefined8 * FUN_147186f7e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144807285(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1471871a8(param_1,iVar1);
      FUN_14718721a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147186fdc FUN_147186fdc body=38 status=ok
// SIG undefined FUN_147186fdc(void)

void FUN_147186fdc(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_142c6f50e(param_1);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147187002 FUN_147187002 body=52 status=ok
// SIG undefined FUN_147187002(void)

void FUN_147187002(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14718619e(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 147187036 FUN_147187036 body=93 status=ok
// SIG undefined FUN_147187036(void)

undefined8 * FUN_147187036(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144807229(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147187094(param_1,iVar1);
      FUN_147187109(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147187094 FUN_147187094 body=117 status=ok
// SIG undefined FUN_147187094(void)

void FUN_147187094(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x350,0x10);
    iVar2 = (int)(uVar1 / 0x350);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x350,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147187109 FUN_147187109 body=60 status=ok
// SIG undefined FUN_147187109(void)

void FUN_147187109(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147172bc8(param_1,param_2);
    param_1 = param_1 + 0x350;
    param_2 = param_2 + 0x350;
  }
  return;
}



// FUNCTION 147187146 FUN_147187146 body=98 status=ok
// SIG undefined FUN_147187146(void)

void FUN_147187146(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1471871a8 FUN_1471871a8 body=114 status=ok
// SIG undefined FUN_1471871a8(void)

void FUN_1471871a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x210,0x10);
    iVar2 = (int)(uVar1 / 0x210);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x210,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14718721a FUN_14718721a body=76 status=ok
// SIG undefined FUN_14718721a(void)

void FUN_14718721a(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      FUN_144aab0c2(param_1,param_2);
      param_1 = param_1 + 0x210;
      param_2 = param_2 + 0x210;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147187266 FUN_147187266 body=138 status=ok
// SIG undefined FUN_147187266(void)

code * FUN_147187266(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileIndirectRayDispatchBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471872f0;
}



// FUNCTION 1471872f0 FUN_1471872f0 body=138 status=ok
// SIG undefined FUN_1471872f0(void)

code * FUN_1471872f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileIndirectDispatchBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718737a;
}



// FUNCTION 14718737a FUN_14718737a body=138 status=ok
// SIG undefined FUN_14718737a(void)

code * FUN_14718737a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileIndirectDrawBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29cf4;
}



// FUNCTION 147187404 FUN_147187404 body=138 status=ok
// SIG undefined FUN_147187404(void)

code * FUN_147187404(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29e06;
}



// FUNCTION 14718748e FUN_14718748e body=138 status=ok
// SIG undefined FUN_14718748e(void)

code * FUN_14718748e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TilePerThread_GroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147187518;
}



// FUNCTION 147187518 FUN_147187518 body=138 status=ok
// SIG undefined FUN_147187518(void)

code * FUN_147187518(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileCountXY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29d7c;
}



// FUNCTION 1471875a6 FUN_1471875a6 body=138 status=ok
// SIG undefined FUN_1471875a6(void)

code * FUN_1471875a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f43f10;
}



// FUNCTION 147187630 FUN_147187630 body=138 status=ok
// SIG undefined FUN_147187630(void)

code * FUN_147187630(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileHairPartialBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cab2e;
}



// FUNCTION 1471876ba FUN_1471876ba body=138 status=ok
// SIG undefined FUN_1471876ba(void)

code * FUN_1471876ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileHairAllBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147187744;
}



// FUNCTION 147187744 FUN_147187744 body=138 status=ok
// SIG undefined FUN_147187744(void)

code * FUN_147187744(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputUintTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471877ce;
}



// FUNCTION 1471877ce FUN_1471877ce body=138 status=ok
// SIG undefined FUN_1471877ce(void)

code * FUN_1471877ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputFloatTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f43f9a;
}



// FUNCTION 147187858 FUN_147187858 body=138 status=ok
// SIG undefined FUN_147187858(void)

code * FUN_147187858(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f44024;
}



// FUNCTION 1471878e2 FUN_1471878e2 body=138 status=ok
// SIG undefined FUN_1471878e2(void)

code * FUN_1471878e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BufferResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cabb6;
}



// FUNCTION 14718796f FUN_14718796f body=177 status=ok
// SIG undefined FUN_14718796f(void)

void FUN_14718796f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f43d26();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d9f98,param_4);
  local_78 = &DAT_14c9d9f98;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147187a40(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


