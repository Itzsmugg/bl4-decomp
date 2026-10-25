// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14859ca24 FUN_14859ca24 body=1195 status=ok
// SIG undefined FUN_14859ca24(void)

void FUN_14859ca24(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_128 [13];
  undefined8 local_c0;
  undefined1 local_b1;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  iVar1 = local_b0;
  local_b1 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b1);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  uVar2 = local_9c;
  local_168 = local_a0;
  local_160 = local_a4;
  local_158 = local_a8;
  local_150 = local_ac;
  local_140 = local_b1;
  local_138 = local_c0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_98;
  puVar6 = local_128;
  for (lVar4 = 0xc; uVar3 = local_30, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_148 = iVar1 != 0;
  FUN_14859ced0(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_128,uVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859ced0 FUN_14859ced0 body=675 status=ok
// SIG undefined FUN_14859ced0(void)

longlong FUN_14859ced0(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                      float param_5,float param_6,int param_7,int param_8,undefined1 param_9,
                      char param_10,undefined8 param_11)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined1 *local_220;
  undefined8 local_218 [12];
  undefined8 local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  undefined1 local_198 [32];
  undefined1 local_178;
  undefined **local_170;
  undefined4 local_168 [38];
  undefined1 local_d0;
  undefined1 local_cf;
  int local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined4 local_98;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1 == 0) {
    local_170 = (undefined **)0x14af62ca2;
    local_168[0] = 0x1d;
    FUN_1446e940c(local_19c,&local_170);
    local_170 = (undefined **)0x14af62310;
    local_168[0] = 0x2d;
    FUN_1446e940c(local_1a0,&local_170);
    FUN_140208bae(&local_170,local_1a0,local_19c,L"AppendCone: TargetMesh is Null");
    FUN_143ba90d7(param_11,2,&local_170);
    if (local_170 != (undefined **)0x0) {
      (**(code **)(*local_170 + 0x10))();
    }
  }
  else {
    memset(local_168,0,0x91);
    local_cf = 1;
    local_9b = 1;
    local_98 = 2;
    local_170 = &PTR_FUN_14af77dd0;
    local_90 = 1e-06;
    if (1e-06 <= param_4) {
      local_90 = param_4;
    }
    local_8c = 0.0;
    if (0.0 <= param_5) {
      local_8c = param_5;
    }
    local_88 = 1e-06;
    if (1e-06 <= param_6) {
      local_88 = param_6;
    }
    local_a0 = 3;
    if (3 < param_7) {
      local_a0 = param_7;
    }
    local_84 = 0;
    if (0 < param_8) {
      local_84 = param_8;
    }
    local_9c = param_9;
    local_d0 = (char)param_2 == '\x02';
    FUN_1485ab0de(&local_170);
    local_1a8 = DAT_14c8464f0;
    local_1b0 = DAT_14c8464e8;
    local_1b8 = DAT_14c8464e0;
    if (param_10 == '\0') {
      local_1a8 = (double)(param_6 * -0.5);
      local_1b0 = 0;
      local_1b8 = 0;
    }
    local_220 = local_198;
    local_178 = 0;
    local_228 = &local_1b8;
    puVar2 = local_218;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_143bb7d83(param_1,&local_170,local_218,param_2);
    FUN_146bd8050(&local_170);
  }
  if ((local_80 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14859d17c FUN_14859d17c body=1108 status=ok
// SIG undefined FUN_14859d17c(void)

void FUN_14859d17c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  iVar1 = local_b0;
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar2 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_a8;
  local_130 = local_ac;
  local_120 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_98;
  puVar6 = local_118;
  for (lVar4 = 0xc; uVar3 = local_30, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_128 = iVar1 != 0;
  FUN_14859d5d2(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_118,uVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859d5d2 FUN_14859d5d2 body=696 status=ok
// SIG undefined FUN_14859d5d2(void)

longlong FUN_14859d5d2(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                      byte param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined1 *local_140;
  undefined8 local_138 [12];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1 == 0) {
    local_b8 = L"PrimitiveFunctions_AppendCurvedStairs";
    local_b0 = 0x25;
    FUN_1446e940c(local_bc,&local_b8);
    local_b8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_b0 = 0x2d;
    FUN_1446e940c(local_c0,&local_b8);
    FUN_140208bae(&local_b8,local_c0,local_bc,L"AppendCurvedStairs: TargetMesh is Null");
    FUN_143ba90d7(param_10,2,&local_b8);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x168);
    memset(puVar2 + 1,0,0x91);
    memset(puVar2 + 0x17,0,0x88);
    *(undefined8 *)((longlong)puVar2 + 0x15c) = DAT_14c846330;
    ppuVar3 = &PTR_FUN_14af7ccb0;
    if (param_9 != 0) {
      ppuVar3 = &PTR_FUN_14af7cc70;
    }
    *(undefined4 *)((longlong)puVar2 + 0x164) = DAT_14c846338;
    *(undefined1 *)(puVar2 + 0x29) = 1;
    *(undefined4 *)((longlong)puVar2 + 0x14c) = 0;
    *(undefined4 *)(puVar2 + 0x2a) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x154) = 0;
    *(undefined4 *)(puVar2 + 0x2b) = 0x3f800000;
    *puVar2 = ppuVar3;
    *(uint *)(puVar2 + 0x16) = (uint)param_9;
    *(undefined4 *)((longlong)puVar2 + 0xa4) = param_4;
    iVar1 = 1;
    if (1 < param_8) {
      iVar1 = param_8;
    }
    *(undefined4 *)(puVar2 + 0x15) = param_5;
    *(int *)((longlong)puVar2 + 0xac) = iVar1;
    *(undefined4 *)(puVar2 + 0x28) = param_6;
    *(undefined4 *)((longlong)puVar2 + 0x144) = param_7;
    *(bool *)((longlong)puVar2 + 0xa1) = (char)param_2 == '\x02';
    *(bool *)(puVar2 + 0x14) = (param_2 & 0xff0000) == 0;
    FUN_14297c9ec(puVar2);
    local_140 = local_a8;
    local_88 = 0;
    local_148 = &local_d8;
    local_d8 = (undefined4)DAT_14c8464e0;
    uStack_d4 = DAT_14c8464e0._4_4_;
    uStack_d0 = (undefined4)DAT_14c8464e8;
    uStack_cc = DAT_14c8464e8._4_4_;
    local_c8 = DAT_14c8464f0;
    puVar5 = local_138;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_143bb7d83(param_1,puVar2,local_138,param_2);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859d894 FUN_14859d894 body=1101 status=ok
// SIG undefined FUN_14859d894(void)

void FUN_14859d894(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined1 local_ad;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  local_ad = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ad);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ad);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar2 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_a8;
  local_128 = local_ad;
  local_120 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_98;
  puVar6 = local_118;
  for (lVar4 = 0xc; uVar3 = local_30, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_130 = iVar1 != 0;
  FUN_14859dce2(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_118,uVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859dce2 FUN_14859dce2 body=638 status=ok
// SIG undefined FUN_14859dce2(void)

longlong FUN_14859dce2(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                      float param_5,int param_6,int param_7,undefined1 param_8,char param_9,
                      undefined8 param_10)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined1 *local_210;
  undefined8 local_208 [12];
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined1 local_188 [32];
  undefined1 local_168;
  undefined **local_160;
  undefined4 local_158 [38];
  undefined1 local_c0;
  undefined1 local_bf;
  int local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined4 local_88;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_1 == 0) {
    local_160 = (undefined **)0x14af62c20;
    local_158[0] = 0x21;
    FUN_1446e940c(local_18c,&local_160);
    local_160 = (undefined **)0x14af62310;
    local_158[0] = 0x2d;
    FUN_1446e940c(local_190,&local_160);
    FUN_140208bae(&local_160,local_190,local_18c,L"AppendCylinder: TargetMesh is Null");
    FUN_143ba90d7(param_10,2,&local_160);
    if (local_160 != (undefined **)0x0) {
      (**(code **)(*local_160 + 0x10))();
    }
  }
  else {
    memset(local_158,0,0x91);
    local_bf = 1;
    local_8b = 1;
    local_88 = 2;
    local_160 = &PTR_FUN_14af77dd0;
    local_80 = 1e-06;
    if (1e-06 <= param_4) {
      local_80 = param_4;
    }
    local_78 = 1e-06;
    if (1e-06 <= param_5) {
      local_78 = param_5;
    }
    local_90 = 3;
    if (3 < param_6) {
      local_90 = param_6;
    }
    local_74 = 0;
    if (0 < param_7) {
      local_74 = param_7;
    }
    local_8c = param_8;
    local_c0 = (char)param_2 == '\x02';
    local_7c = local_80;
    FUN_1485ab0de(&local_160);
    local_198 = DAT_14c8464f0;
    local_1a0 = DAT_14c8464e8;
    local_1a8 = DAT_14c8464e0;
    if (param_9 == '\0') {
      local_198 = (double)(param_5 * -0.5);
      local_1a0 = 0;
      local_1a8 = 0;
    }
    local_210 = local_188;
    local_168 = 0;
    local_218 = &local_1a8;
    puVar2 = local_208;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_143bb7d83(param_1,&local_160,local_208,param_2);
    FUN_146bd8050(&local_160);
  }
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14859df6a FUN_14859df6a body=1150 status=ok
// SIG undefined FUN_14859df6a(void)

void FUN_14859df6a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined2 *local_1a0;
  longlong *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  longlong local_178 [13];
  undefined2 local_10c;
  undefined1 local_10a;
  undefined8 local_108;
  undefined1 local_f9;
  longlong local_f8 [3];
  undefined2 local_db;
  undefined1 local_d9;
  longlong local_d8 [6];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 1;
  uStack_4e = 0;
  uStack_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_d8[2] = 0;
  local_d8[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar8 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar9 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_db = 0x100;
  local_d9 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_db);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_db);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  plVar6 = local_f8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_f9 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f9);
  }
  puVar7 = &local_f9;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_108 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_188 = local_108;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a0 = &local_10c;
  local_10c = local_db;
  local_10a = local_d9;
  plVar4 = local_d8 + 4;
  plVar5 = local_178;
  for (lVar3 = 0xc; uVar2 = local_48, lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_1a8 = plVar9;
  local_198 = plVar6;
  local_190 = puVar7;
  FUN_14859e3ea(local_48,CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT12(uStack_4e,local_50))),
                local_178,plVar8);
  *param_3 = uVar2;
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859e3ea FUN_14859e3ea body=2108 status=ok
// SIG undefined FUN_14859e3ea(void)

longlong FUN_14859e3ea(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      longlong *param_5,char *param_6,code *param_7,char *param_8,undefined8 param_9
                      )

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_518 [32];
  code **local_4f8;
  longlong local_4e8;
  longlong local_4e0;
  undefined8 *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8 [12];
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined1 local_450 [152];
  undefined1 local_3b8;
  undefined1 local_3b0 [8];
  int local_3a8;
  code *local_3a0;
  int local_398;
  undefined4 local_394;
  undefined8 local_368;
  int local_360;
  code *local_358;
  undefined4 local_350;
  code *local_348;
  undefined8 uStack_340;
  code *local_330;
  undefined2 local_328;
  char local_326;
  longlong local_320;
  undefined1 local_318;
  undefined4 local_314;
  code **local_310;
  code *local_308;
  longlong *local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  code *local_2c8;
  wchar_t ***local_2c0;
  code *local_2b8;
  code **local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  code *local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_278;
  code *local_268;
  undefined8 local_260;
  undefined8 *puStack_258;
  undefined4 *local_250;
  code *local_248;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  *param_8 = '\0';
  *(undefined4 *)(param_7 + 8) = 0;
  if (*(int *)(param_7 + 0xc) < 0) {
    FUN_14481578e(param_7,0);
  }
  if (param_1 == 0) {
    local_268 = (code *)0x14af64678;
    local_260._0_4_ = 0x3b;
    FUN_1446e940c(local_450,&local_268);
    local_268 = (code *)0x14af62310;
    local_260 = (undefined8 *)CONCAT44(local_260._4_4_,0x2d);
    FUN_1446e940c(&local_298,&local_268);
    pwVar10 = L"AppendDelaunayTriangulation2D: TargetMesh is Null";
  }
  else {
    iVar11 = *(int *)(param_4 + 1);
    if (2 < iVar11) {
      uStack_340._0_4_ = 0;
      local_330 = (code *)0x0;
      local_328 = 0x100;
      local_326 = '\0';
      local_320 = 0;
      local_318 = 0;
      local_314 = 1;
      local_348 = (code *)0x0;
      uStack_340 = 0;
      iVar7 = (int)param_5[1];
      if (iVar7 == 0) {
        local_326 = param_6[2];
      }
      else {
        local_4d8 = param_3;
        local_4d0 = param_2;
        if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        FUN_146be5458(&local_348);
        if ((longlong)(int)param_5[1] != 0) {
          lVar4 = *param_5;
          lVar9 = (longlong)(int)param_5[1] << 3;
          lVar12 = 0;
          do {
            uVar1 = uStack_340;
            lVar6 = *(longlong *)(lVar4 + lVar12);
            iVar11 = (int)lVar6;
            if ((iVar11 < *(int *)(param_4 + 1) && -1 < iVar11) &&
               (iVar7 = (int)((ulonglong)lVar6 >> 0x20), iVar7 < *(int *)(param_4 + 1) && -1 < lVar6
               )) {
              lVar6 = (longlong)(int)uStack_340;
              uVar3 = (int)uStack_340 + 1;
              uStack_340 = CONCAT44(uStack_340._4_4_,uVar3);
              if (uStack_340._4_4_ < uVar3) {
                local_4e8 = lVar4;
                local_4e0 = lVar9;
                FUN_146be54b8(&local_348,uVar1 & 0xffffffff);
                lVar9 = local_4e0;
                lVar4 = local_4e8;
              }
              *(int *)(local_348 + lVar6 * 8) = iVar11;
              *(int *)(local_348 + lVar6 * 8 + 4) = iVar7;
            }
            else if (param_6[1] == '\x01') {
              local_268 = (code *)0x14af648e4;
              local_260._0_4_ = 0x3d;
              FUN_1446e940c(local_450,&local_268);
              local_268 = (code *)0x14af62310;
              local_260 = (undefined8 *)CONCAT44(local_260._4_4_,0x2d);
              FUN_1446e940c(&local_298,&local_268);
              FUN_140208bae(&local_268,&local_298,local_450,
                            L"AppendDelaunayTriangulation2D: Constrained Edges must only contain valid indices into Vertex Positions"
                           );
              uVar5 = 2;
              goto LAB_14859e74a;
            }
            lVar12 = lVar12 + 8;
          } while (lVar9 != lVar12);
        }
        local_328 = CONCAT11(param_6[1],(undefined1)local_328);
        iVar11 = *(int *)(param_4 + 1);
        local_326 = '\x01';
        param_3 = local_4d8;
        param_2 = local_4d0;
      }
      local_368 = *param_4;
      local_360 = iVar11;
      local_358 = local_348;
      local_350 = (int)uStack_340;
      cVar2 = FUN_146baf7ca();
      if (cVar2 == '\0') {
        local_268 = (code *)0x14af649da;
        local_260._0_4_ = 0x3a;
        FUN_1446e940c(local_450,&local_268);
        local_268 = (code *)0x14af62310;
        local_260 = (undefined8 *)CONCAT44(local_260._4_4_,0x2d);
        FUN_1446e940c(&local_298,&local_268);
        FUN_140208bae(&local_268,&local_298,local_450,
                      L"AppendDelaunayTriangulation2D: Delaunay triangulation failed");
        uVar5 = 3;
LAB_14859e74a:
        FUN_143ba90d7(param_9,uVar5,&local_268);
        if (local_268 != (code *)0x0) {
          (**(code **)(*(longlong *)local_268 + 0x10))();
        }
      }
      else {
        cVar2 = FUN_146bb28ca(&local_330);
        *param_8 = cVar2;
        FUN_146c5f010(local_450);
        local_3b8 = 1;
        FUN_144721cf4(local_3b0,param_4);
        if ((int)param_5[1] == 0) {
switchD_14859e680_caseD_0:
          FUN_146bb0b54(&local_330,&local_268);
          if (local_3a0 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_3a0 = local_268;
          local_398 = (int)local_260;
          local_394 = local_260._4_4_;
        }
        else {
          switch(*param_6) {
          case '\0':
            goto switchD_14859e680_caseD_0;
          case '\x01':
            cVar2 = '\0';
            break;
          case '\x02':
            cVar2 = '\x01';
            break;
          case '\x03':
            cVar2 = '\x02';
            break;
          default:
            cVar2 = (*param_6 != '\x04') + '\x03';
          }
          local_298 = (code *)0x0;
          uStack_290 = (code **)0x0;
          local_268 = local_348;
          local_260 = (undefined8 *)CONCAT44(local_260._4_4_,(int)uStack_340);
          FUN_146bb114a(&local_330,&local_298,&local_268,cVar2);
          if (local_3a0 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_3a0 = local_298;
          local_398 = (int)uStack_290;
          local_394 = uStack_290._4_4_;
        }
        if (0 < local_398 && 2 < local_3a8) {
          local_458 = DAT_14c8464f0;
          local_468 = (undefined4)DAT_14c8464e0;
          uStack_464 = DAT_14c8464e0._4_4_;
          uStack_460 = (undefined4)DAT_14c8464e8;
          uStack_45c = DAT_14c8464e8._4_4_;
          puVar8 = local_4c8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *param_3;
            param_3 = param_3 + 1;
            puVar8 = puVar8 + 1;
          }
          local_2d8 = FUN_1429777f0(local_450);
          local_2d0 = param_2;
          if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) == 0) {
            local_268 = (code *)&local_2d8;
            local_2b0 = &local_268;
            puStack_258 = &local_2d0;
            local_250 = &local_468;
            local_248 = param_7;
            uStack_290 = (code **)0x0;
            uStack_288 = 0;
            local_280 = 0;
            local_298 = (code *)((ulonglong)local_298 & 0xffffffffff000000);
            local_2b8 = FUN_143bc26ba;
            local_260 = local_4c8;
            FUN_1484b8434(param_1,&local_2b8,&local_298,0);
          }
          else {
            FUN_146c00d92(&local_268,local_2d8);
            local_4f8 = &local_298;
            local_278 = 0;
            local_2f8 = local_468;
            uStack_2f4 = uStack_464;
            uStack_2f0 = uStack_460;
            uStack_2ec = uStack_45c;
            local_2e8 = local_458;
            FUN_143bc190a(&local_268,local_4c8,param_2);
            local_2c0 = (wchar_t ***)&local_310;
            local_308 = param_7;
            local_300 = &local_2d8;
            local_2b0 = (code **)0x0;
            uStack_2a8 = 0;
            local_2a0 = 0;
            local_2b8 = (code *)((ulonglong)local_2b8 & 0xffffffffff000000);
            local_2c8 = FUN_143bc27ce;
            local_310 = &local_268;
            FUN_1484b8434(param_1,&local_2c8,&local_2b8,0);
            FUN_141082778(&local_268);
          }
          if ((param_6[2] == '\x01') && (*param_8 == '\x01')) {
            uStack_290 = &local_2b8;
            local_2b8 = param_7;
            local_2b0 = &local_330;
            local_260 = (undefined8 *)0x0;
            puStack_258 = (undefined8 *)0x0;
            local_250 = (undefined4 *)0x0;
            local_268 = (code *)((ulonglong)local_268 & 0xffffffffff000000);
            local_298 = FUN_143bd97a6;
            FUN_1484b8434(param_1,&local_298,&local_268,0);
          }
        }
        FUN_146c5f080(local_450);
      }
      if (local_348 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_320 != 0) {
        (**(code **)(local_320 + -0x10))(local_320 + -0x10);
      }
      goto LAB_14859e54d;
    }
    local_268 = (code *)0x14af64796;
    local_260._0_4_ = 0x3f;
    FUN_1446e940c(local_450,&local_268);
    local_268 = (code *)0x14af62310;
    local_260 = (undefined8 *)CONCAT44(local_260._4_4_,0x2d);
    FUN_1446e940c(&local_298,&local_268);
    pwVar10 = L"AppendDelaunayTriangulation2D: VertexPositions array requires at least 3 positions";
  }
  FUN_140208bae(&local_268,&local_298,local_450,pwVar10);
  FUN_143ba90d7(param_9,2,&local_268);
  if (local_268 != (code *)0x0) {
    (**(code **)(*(longlong *)local_268 + 0x10))();
  }
LAB_14859e54d:
  if ((local_48 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14859ec28 FUN_14859ec28 body=1105 status=ok
// SIG undefined FUN_14859ec28(void)

void FUN_14859ec28(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 1;
  uStack_2e = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar1 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_a8;
  local_130 = local_ac;
  local_128 = local_b0;
  local_120 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_14859f07a(local_28,CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT12(uStack_2e,local_30))),
                local_118,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859f07a FUN_14859f07a body=660 status=ok
// SIG undefined FUN_14859f07a(void)

longlong FUN_14859f07a(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                      int param_5,int param_6,undefined4 param_7,undefined4 param_8,float param_9,
                      undefined8 param_10)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  wchar_t **ppwVar4;
  float fVar5;
  undefined1 auStack_308 [32];
  undefined4 *local_2e8;
  undefined1 *local_2e0;
  undefined8 local_2d8 [12];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  wchar_t *local_258;
  undefined4 local_250;
  undefined8 local_1b4 [3];
  undefined1 local_198 [16];
  float local_188;
  wchar_t *local_180 [20];
  undefined8 local_dc [6];
  undefined1 local_ac [4];
  undefined1 local_a8 [32];
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (param_1 == 0) {
    local_258 = L"PrimitiveFunctions_AppendDisc";
    local_250 = 0x1d;
    FUN_1446e940c(local_180,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_250 = 0x2d;
    FUN_1446e940c(local_ac,&local_258);
    FUN_140208bae(&local_258,local_ac,local_180,L"AppendDisc: TargetMesh is Null");
    FUN_143ba90d7(param_10,2,&local_258);
    if (local_258 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_258 + 0x10))();
    }
  }
  else {
    ppwVar4 = local_180;
    FUN_146c5e79e(ppwVar4);
    FUN_146c5e828(&local_258);
    if (param_9 <= 0.0) {
      puVar2 = local_dc;
    }
    else {
      puVar2 = local_1b4;
      local_188 = param_9;
      ppwVar4 = &local_258;
    }
    fVar5 = 1e-06;
    if (1e-06 <= param_4) {
      fVar5 = param_4;
    }
    *(float *)(ppwVar4 + 0x14) = fVar5;
    *(undefined4 *)(puVar2 + 1) = DAT_14c84636c;
    *puVar2 = DAT_14c846364;
    iVar1 = 3;
    if (3 < param_5) {
      iVar1 = param_5;
    }
    *(int *)(ppwVar4 + 0x16) = iVar1;
    iVar1 = 1;
    if (1 < param_6) {
      iVar1 = param_6;
    }
    *(int *)((longlong)ppwVar4 + 0xb4) = iVar1;
    *(undefined4 *)(ppwVar4 + 0x17) = param_7;
    *(undefined4 *)((longlong)ppwVar4 + 0xbc) = param_8;
    *(bool *)(ppwVar4 + 0x18) = (char)param_2 != '\x02';
    (**(code **)(*ppwVar4 + 4))(ppwVar4);
    local_2e0 = local_a8;
    local_88 = 0;
    local_2e8 = &local_278;
    local_278 = (undefined4)DAT_14c8464e0;
    uStack_274 = DAT_14c8464e0._4_4_;
    uStack_270 = (undefined4)DAT_14c8464e8;
    uStack_26c = DAT_14c8464e8._4_4_;
    local_268 = DAT_14c8464f0;
    puVar2 = local_2d8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_143bb7d83(param_1,ppwVar4,local_2d8,param_2);
    FUN_146bd8050(&local_258);
    FUN_146bd8050(local_180);
  }
  if ((local_80 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859f318 FUN_14859f318 body=1014 status=ok
// SIG undefined FUN_14859f318(void)

void FUN_14859f318(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_118 [12];
  undefined8 local_b8;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar2 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_a8;
  local_128 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_98;
  puVar6 = local_118;
  for (lVar4 = 0xc; uVar3 = local_30, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_130 = iVar1 != 0;
  FUN_14859f710(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_118,uVar2);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859f710 FUN_14859f710 body=609 status=ok
// SIG undefined FUN_14859f710(void)

longlong FUN_14859f710(longlong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,int param_7,byte param_8,
                      undefined8 param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined1 *local_130;
  undefined8 local_128 [12];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_1 == 0) {
    local_a8 = L"PrimitiveFunctions_AppendLinearStairs";
    local_a0 = 0x25;
    FUN_1446e940c(local_ac,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_a0 = 0x2d;
    FUN_1446e940c(local_b0,&local_a8);
    FUN_140208bae(&local_a8,local_b0,local_ac,L"AppendLinearStairs: TargetMesh is Null");
    FUN_143ba90d7(param_9,2,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x148);
    memset(puVar2 + 1,0,0x91);
    memset(puVar2 + 0x17,0,0x88);
    ppuVar3 = &PTR_FUN_14af7cc30;
    if (param_8 != 0) {
      ppuVar3 = &PTR_FUN_14af7cbf0;
    }
    *puVar2 = ppuVar3;
    *(uint *)(puVar2 + 0x16) = (uint)param_8;
    *(undefined4 *)(puVar2 + 0x28) = param_6;
    *(undefined4 *)((longlong)puVar2 + 0xa4) = param_4;
    *(undefined4 *)(puVar2 + 0x15) = param_5;
    iVar1 = 1;
    if (1 < param_7) {
      iVar1 = param_7;
    }
    *(int *)((longlong)puVar2 + 0xac) = iVar1;
    *(bool *)((longlong)puVar2 + 0xa1) = (char)param_2 == '\x02';
    *(bool *)(puVar2 + 0x14) = (param_2 & 0xff0000) == 0;
    FUN_14297c9ec(puVar2);
    local_130 = local_98;
    local_78 = 0;
    local_138 = &local_c8;
    local_c8 = (undefined4)DAT_14c8464e0;
    uStack_c4 = DAT_14c8464e0._4_4_;
    uStack_c0 = (undefined4)DAT_14c8464e8;
    uStack_bc = DAT_14c8464e8._4_4_;
    local_b8 = DAT_14c8464f0;
    puVar5 = local_128;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_143bb7d83(param_1,puVar2,local_128,param_2);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859f97a FUN_14859f97a body=911 status=ok
// SIG undefined FUN_14859f97a(void)

void FUN_14859f97a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined8 local_128 [12];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_a9 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  local_aa = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_aa);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_aa);
  }
  puVar8 = &local_aa;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_148 = local_a9;
  local_138 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_a8;
  local_c0 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  puVar6 = local_98;
  puVar7 = local_128;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_140 = puVar8;
  uVar4 = FUN_14859fd0a(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))
                                         ),local_128,&local_c8);
  plVar3 = plStack_a0;
  *param_3 = uVar4;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14859fd0a FUN_14859fd0a body=1263 status=ok
// SIG undefined FUN_14859fd0a(void)

longlong FUN_14859fd0a(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      byte param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined1 *local_270;
  longlong local_268;
  undefined8 *local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238 [12];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  void *local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_190;
  undefined2 local_188;
  undefined1 local_186;
  longlong local_180;
  undefined1 local_178;
  undefined4 local_174;
  wchar_t *local_170;
  undefined4 local_168;
  undefined1 local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  undefined1 local_88 [32];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_1 == 0) {
    local_170 = L"PrimitiveFunctions_AppendPolygonListTriangulation_NullTarget";
    local_168 = 0x3c;
    FUN_1446e940c(&local_190,&local_170);
    local_170 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_168 = 0x2d;
    FUN_1446e940c(&local_1a8,&local_170);
    FUN_140208bae(&local_170,&local_1a8,&local_190,
                  L"AppendDelaunayTriangulation2D: TargetMesh is Null");
    FUN_143ba90d7(param_7,2,&local_170);
    if (local_170 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_170 + 0x10))();
    }
    param_1 = 0;
  }
  else if (*param_4 == 0) {
    local_170 = L"PrimitiveFunctions_AppendPolygonListTriangulation_NullPolygonList";
    local_168 = 0x41;
    FUN_1446e940c(&local_190,&local_170);
    local_170 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_168 = 0x2d;
    FUN_1446e940c(&local_1a8,&local_170);
    FUN_140208bae(&local_170,&local_1a8,&local_190,
                  L"AppendPolygonListTriangulation: Polygon List is not set");
    FUN_143ba90d7(param_7,2,&local_170);
    if (local_170 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_170 + 0x10))();
    }
  }
  else {
    local_250 = param_2;
    FUN_146c5f010(&local_170);
    local_d8 = 1;
    *param_6 = 0;
    lVar12 = (longlong)(int)((longlong *)*param_4)[1];
    if (lVar12 != 0) {
      lVar16 = *(longlong *)*param_4;
      lVar12 = lVar16 + lVar12 * 0x28;
      local_268 = lVar12;
      local_260 = param_3;
      local_258 = param_4;
      do {
        local_190 = 0;
        local_188 = 0x100;
        local_180 = 0;
        local_178 = 0;
        local_174 = 1;
        local_186 = 1;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = (void *)0x0;
        uStack_1b0 = 0;
        local_278 = (undefined4 *)CONCAT71(local_278._1_7_,1);
        cVar8 = FUN_1484734a6(&local_190,lVar16,&local_1a8,&local_1b8);
        iVar7 = local_c8;
        if ((cVar8 == '\0') && (*param_6 = 1, (param_5 & 1) == 0)) {
          bVar6 = false;
        }
        else {
          lVar13 = (longlong)local_c8;
          lVar15 = (longlong)(int)(uint)uStack_1b0;
          if (lVar15 != 0) {
            iVar9 = (uint)uStack_1b0 + local_c8;
            uVar10 = local_c4 - local_c8;
            local_c8 = iVar9;
            if (uVar10 < (uint)uStack_1b0) {
              FUN_14489624a(&local_d0,iVar7);
            }
            memcpy((void *)(lVar13 * 0x10 + local_d0),local_1b8,lVar15 << 4);
          }
          iVar9 = local_b8 + (int)uStack_1a0;
          if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar9);
          }
          if ((int)local_b4 < iVar9) {
            FUN_146be7820(&local_c0);
          }
          lVar13 = local_1a8;
          bVar6 = true;
          if ((int)uStack_1a0 != 0) {
            lVar12 = (longlong)(int)uStack_1a0;
            lVar15 = 0;
            local_248 = lVar16;
            local_240 = param_1;
            do {
              uVar10 = local_b8;
              iVar9 = *(int *)(lVar13 + 8 + lVar15);
              iVar3 = *(int *)(lVar13 + 4 + lVar15);
              iVar4 = *(int *)(lVar13 + lVar15);
              lVar16 = (longlong)(int)local_b8;
              local_b8 = local_b8 + 1;
              if (local_b4 < local_b8) {
                FUN_146bd78c8(&local_c0,uVar10);
              }
              *(int *)(local_c0 + lVar16 * 0xc) = iVar4 + iVar7;
              *(int *)(local_c0 + 4 + lVar16 * 0xc) = iVar3 + iVar7;
              *(int *)(local_c0 + 8 + lVar16 * 0xc) = iVar9 + iVar7;
              lVar15 = lVar15 + 0xc;
            } while (lVar12 * 0xc != lVar15);
            bVar6 = true;
            param_1 = local_240;
            param_3 = local_260;
            lVar16 = local_248;
            param_4 = local_258;
            lVar12 = local_268;
          }
        }
        if (local_1b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        if (local_180 != 0) {
          (**(code **)(local_180 + -0x10))(local_180 + -0x10);
        }
        if (!bVar6) goto LAB_1485a00d7;
        lVar16 = lVar16 + 0x28;
      } while (lVar16 != lVar12);
    }
    if ((2 < local_c8) && (0 < (int)local_b8)) {
      local_270 = local_88;
      local_68 = 0;
      local_1d8 = (undefined4)DAT_14c8464e0;
      uStack_1d4 = DAT_14c8464e0._4_4_;
      uStack_1d0 = (undefined4)DAT_14c8464e8;
      uStack_1cc = DAT_14c8464e8._4_4_;
      local_1c8 = DAT_14c8464f0;
      puVar14 = local_238;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *param_3;
        param_3 = param_3 + 1;
        puVar14 = puVar14 + 1;
      }
      uVar11 = FUN_1429777f0(&local_170);
      local_278 = &local_1d8;
      FUN_143bb7d83(param_1,uVar11,local_238,local_250);
    }
LAB_1485a00d7:
    FUN_146c5f080(&local_170);
  }
  plVar5 = (longlong *)param_4[1];
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
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485a01fc FUN_1485a01fc body=857 status=ok
// SIG undefined FUN_1485a01fc(void)

void FUN_1485a01fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  float local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = local_100 * 0.5;
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_120 = local_110;
  local_128 = local_108;
  local_130 = local_104;
  FUN_1485a08ec(local_90,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))),
                local_88,local_fc * 0.5);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a0556 FUN_1485a0556 body=917 status=ok
// SIG undefined FUN_1485a0556(void)

void FUN_1485a0556(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 1;
  uStack_2e = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  uVar1 = local_9c;
  local_138 = local_a0;
  local_130 = local_a4;
  local_128 = local_a8;
  local_120 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1485a08ec(local_28,CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT12(uStack_2e,local_30))),
                local_118,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a08ec FUN_1485a08ec body=539 status=ok
// SIG undefined FUN_1485a08ec(void)

longlong FUN_1485a08ec(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                      float param_5,int param_6,int param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  undefined1 *local_200;
  undefined8 local_1f8 [12];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  wchar_t *local_180;
  undefined4 local_178;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  double local_b0;
  int local_a8;
  int local_a4;
  undefined1 local_9f;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [32];
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_1 == 0) {
    local_180 = L"PrimitiveFunctions_AppendRectangleXY";
    local_178 = 0x24;
    FUN_1446e940c(local_8c,&local_180);
    local_180 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_178 = 0x2d;
    FUN_1446e940c(local_90,&local_180);
    FUN_140208bae(&local_180,local_90,local_8c,L"AppendRectangle: TargetMesh is Null");
    FUN_143ba90d7(param_8,2,&local_180);
    if (local_180 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_180 + 0x10))();
    }
  }
  else {
    FUN_146c6027e(&local_180);
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = DAT_14c846364;
    local_c0 = DAT_14c84636c;
    local_b8 = (double)param_4;
    local_b0 = (double)param_5;
    local_a8 = param_6;
    if (param_6 < 1) {
      local_a8 = 0;
    }
    local_a4 = 0;
    if (0 < param_7) {
      local_a4 = param_7;
    }
    local_9f = (char)param_2 != '\x02';
    FUN_142978942(&local_180);
    local_200 = local_88;
    local_68 = 0;
    local_208 = &local_198;
    local_198 = (undefined4)DAT_14c8464e0;
    uStack_194 = DAT_14c8464e0._4_4_;
    uStack_190 = (undefined4)DAT_14c8464e8;
    uStack_18c = DAT_14c8464e8._4_4_;
    local_188 = DAT_14c8464f0;
    puVar2 = local_1f8;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_143bb7d83(param_1,&local_180,local_1f8,param_2);
    FUN_146bd8050(&local_180);
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a0b10 FUN_1485a0b10 body=1007 status=ok
// SIG undefined FUN_1485a0b10(void)

void FUN_1485a0b10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined8 local_160;
  longlong local_158 [12];
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  int local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  longlong local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 1;
  uStack_3e = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar6 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_cc = 0x43b40000;
  uStack_c4 = (uint)uStack_c4._2_2_ << 0x10;
  uStack_c0 = 0x41f00000;
  local_bc = CONCAT22(local_bc._2_2_,0x100);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  local_d0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  iVar1 = local_d4;
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_170 = local_d0;
  local_160 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = &local_f8;
  local_f8 = (undefined4)local_cc;
  uStack_f4 = local_cc._4_4_;
  iStack_f0 = uStack_c4;
  uStack_ec = uStack_c0;
  local_e8 = local_bc;
  plVar4 = local_b8 + 2;
  plVar5 = local_158;
  for (lVar3 = 0xc; uVar2 = local_38, lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_168 = iVar1 != 0;
  FUN_1485a0f00(local_38,CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT12(uStack_3e,local_40))),
                local_158,plVar6);
  *param_3 = uVar2;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a0f00 FUN_1485a0f00 body=1112 status=ok
// SIG undefined FUN_1485a0f00(void)

longlong FUN_1485a0f00(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      undefined4 *param_5,int param_6,undefined1 param_7,undefined8 param_8)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_3f8 [32];
  undefined4 *local_3d8;
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8 [12];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  wchar_t **local_338;
  float *local_330;
  undefined8 uStack_328;
  undefined1 *local_320;
  wchar_t ***local_318;
  wchar_t **local_310;
  wchar_t *local_308;
  undefined8 uStack_300;
  float local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined2 local_2e4;
  undefined1 local_2e2;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  longlong local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (param_1 == 0) {
    local_288 = L"AppendRevolvePath_NullMesh";
    uStack_280 = 0x1a;
    FUN_1446e940c(&local_2f0,&local_288);
    local_288 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    uStack_280 = 0x2d;
    FUN_1446e940c(&local_310,&local_288);
    pwVar10 = L"AppendRevolvePath: TargetMesh is Null";
  }
  else {
    lVar6 = param_4[1];
    if (1 < (longlong)(int)lVar6) {
      local_2f0 = 0x43b4000000000010;
      local_2e8 = 0;
      local_2e4 = 0;
      local_2e2 = 1;
      local_2e0 = 0x3ff0000000000000;
      local_2d8 = 0x3ff0000000000000;
      local_2d0 = 0;
      uStack_2c8 = 0;
      lVar11 = 0;
      local_2c0 = 0;
      local_2bc = 0x42c80000;
      local_2b8 = 0;
      local_2b0 = 0x3f847ae147ae147b;
      local_2a8 = 1;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 1;
      lVar2 = *param_4;
      local_3c8 = param_3;
      local_3c0 = param_2;
      do {
        uVar3 = uStack_298;
        puVar8 = (undefined8 *)(lVar2 + lVar11);
        local_288 = (wchar_t *)*puVar8;
        uStack_280 = *(undefined4 *)(puVar8 + 1);
        uStack_27c = *(undefined4 *)((longlong)puVar8 + 0xc);
        lVar12 = (longlong)(int)uStack_298;
        uVar4 = (int)uStack_298 + 1;
        uStack_298 = CONCAT44(uStack_298._4_4_,uVar4);
        if (uStack_298._4_4_ < uVar4) {
          FUN_14489624a(&local_2a0,uVar3 & 0xffffffff);
        }
        puVar8 = (undefined8 *)(local_2a0 + lVar12 * 0x10);
        *puVar8 = local_288;
        puVar8[1] = CONCAT44(uStack_27c,uStack_280);
        lVar11 = lVar11 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar11);
      iVar5 = 2;
      if (2 < param_6) {
        iVar5 = param_6;
      }
      local_290 = param_7;
      local_2f0 = CONCAT44(*param_5,iVar5);
      local_2e8 = param_5[1];
      local_2e4 = CONCAT11(*(undefined1 *)(param_5 + 4),*(undefined1 *)(param_5 + 2));
      local_2e2 = *(undefined1 *)((longlong)param_5 + 0x11);
      FUN_142978fce(&local_2f0,&local_288);
      if (*(char *)((longlong)param_5 + 9) != '\0') {
        fVar1 = (float)param_5[3];
        fVar13 = 180.0;
        if (fVar1 <= 180.0) {
          fVar13 = fVar1;
        }
        local_2f4 = cosf((float)(~-(uint)(fVar1 < 0.0) & (uint)(fVar13 * 0.017453292)));
        local_308 = (wchar_t *)0x0;
        uStack_300 = 0;
        local_310 = &local_288;
        FUN_146c38358(&local_310);
        if (*(int *)(local_80 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_80 + 0x30);
        }
        local_318 = &local_338;
        local_330 = &local_2f4;
        local_320 = &LAB_143bd96ba;
        local_338 = &local_308;
        FUN_146c2fed0(uVar7,&local_320,0);
        local_330 = (float *)0x0;
        uStack_328 = 0;
        if (*(int *)(local_80 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_80 + 0x30);
        }
        local_338 = &local_288;
        FUN_146c383fc(&local_338,uVar7,1,1);
        if (*(int *)(local_80 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_80 + 0x30);
        }
        FUN_146c378c6(&local_338,uVar7,0);
        if (local_330 != (float *)0x0) {
          FUN_1400020a8();
        }
        if (local_308 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_3d8 = &local_358;
      local_348 = DAT_14c8464f0;
      local_358 = (undefined4)DAT_14c8464e0;
      uStack_354 = DAT_14c8464e0._4_4_;
      uStack_350 = (undefined4)DAT_14c8464e8;
      uStack_34c = DAT_14c8464e8._4_4_;
      puVar8 = local_3c8;
      puVar9 = local_3b8;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_143bb8bf2(param_1,&local_288,local_3b8,local_3c0);
      FUN_141082778(&local_288);
      if (local_2a0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1485a1036;
    }
    local_288 = L"AppendRevolvePath_InvalidPolygon";
    uStack_280 = 0x20;
    FUN_1446e940c(&local_2f0,&local_288);
    local_288 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    uStack_280 = 0x2d;
    FUN_1446e940c(&local_310,&local_288);
    pwVar10 = L"AppendRevolvePath: PathVertices array requires at least 2 positions";
  }
  FUN_140208bae(&local_288,&local_310,&local_2f0,pwVar10);
  FUN_143ba90d7(param_8,2,&local_288);
  if (local_288 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_288 + 0x10))();
  }
LAB_1485a1036:
  if ((local_60 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a135a FUN_1485a135a body=1006 status=ok
// SIG undefined FUN_1485a135a(void)

void FUN_1485a135a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  longlong local_a8 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar5 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0x43b40000;
  uStack_b4 = (uint)uStack_b4._2_2_ << 0x10;
  uStack_b0 = 0x41f00000;
  local_ac = CONCAT22(local_ac._2_2_,0x100);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_160 = local_c0;
  local_158 = local_c4;
  local_150 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = &local_e8;
  local_e8 = (undefined4)local_bc;
  uStack_e4 = local_bc._4_4_;
  iStack_e0 = uStack_b4;
  uStack_dc = uStack_b0;
  local_d8 = local_ac;
  plVar3 = local_a8 + 2;
  plVar4 = local_148;
  for (lVar2 = 0xc; uVar1 = local_30, lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_1485a174a(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_148,plVar5);
  *param_3 = uVar1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a174a FUN_1485a174a body=1147 status=ok
// SIG undefined FUN_1485a174a(void)

longlong FUN_1485a174a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined4 *param_5,float param_6,int param_7,undefined8 param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  double *pdVar10;
  double *pdVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_3f8 [32];
  undefined4 *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8 [12];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  wchar_t **local_350;
  float *local_348;
  undefined8 uStack_340;
  undefined1 *local_338;
  wchar_t ***local_330;
  wchar_t **local_328;
  wchar_t *local_320;
  undefined8 uStack_318;
  float local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined2 local_2fc;
  undefined1 local_2fa;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8;
  undefined4 local_2d4;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  wchar_t *local_2a0;
  undefined4 local_298;
  longlong local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (param_1 == 0) {
    local_2a0 = L"AppendRevolvePolygon_NullMesh";
    local_298 = 0x1d;
    FUN_1446e940c(&local_308,&local_2a0);
    local_2a0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_298 = 0x2d;
    FUN_1446e940c(&local_328,&local_2a0);
    pwVar9 = L"AppendRevolvePolygon: TargetMesh is Null";
  }
  else {
    if (2 < (longlong)*(int *)(param_4 + 1)) {
      local_308 = 0x43b4000000000010;
      local_300 = 0;
      local_2fc = 0;
      local_2fa = 1;
      local_2f8 = 0x3ff0000000000000;
      local_2f0 = 0x3ff0000000000000;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      local_2d4 = 0x42c80000;
      local_2d0 = 0;
      local_2c8 = 0x3f847ae147ae147b;
      local_2c0 = 1;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      pdVar11 = (double *)*param_4;
      pdVar10 = pdVar11 + (longlong)*(int *)(param_4 + 1) * 2;
      local_3d0 = param_2;
      do {
        uVar4 = uStack_2b0;
        dVar2 = pdVar11[1];
        dVar3 = *pdVar11;
        lVar12 = (longlong)(int)uStack_2b0;
        uVar5 = (int)uStack_2b0 + 1;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar5);
        if (uStack_2b0._4_4_ < uVar5) {
          FUN_14489624a(&local_2b8,uVar4 & 0xffffffff);
        }
        *(double *)(local_2b8 + lVar12 * 0x10) = dVar3 + (double)param_6;
        *(double *)(local_2b8 + 8 + lVar12 * 0x10) = dVar2;
        pdVar11 = pdVar11 + 2;
      } while (pdVar11 != pdVar10);
      iVar6 = 2;
      if (2 < param_7) {
        iVar6 = param_7;
      }
      local_308 = CONCAT44(*param_5,iVar6);
      local_300 = param_5[1];
      local_2fc = CONCAT11(*(undefined1 *)(param_5 + 4),*(undefined1 *)(param_5 + 2));
      local_2fa = *(undefined1 *)((longlong)param_5 + 0x11);
      FUN_14297b182(&local_308,&local_2a0);
      if (*(char *)((longlong)param_5 + 9) != '\0') {
        fVar1 = (float)param_5[3];
        fVar13 = 180.0;
        if (fVar1 <= 180.0) {
          fVar13 = fVar1;
        }
        local_30c = cosf((float)(~-(uint)(fVar1 < 0.0) & (uint)(fVar13 * 0.017453292)));
        local_320 = (wchar_t *)0x0;
        uStack_318 = 0;
        local_328 = &local_2a0;
        FUN_146c38358(&local_328);
        if (*(int *)(local_98 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_98 + 0x30);
        }
        local_330 = &local_350;
        local_348 = &local_30c;
        local_338 = &LAB_143bd960a;
        local_350 = &local_320;
        FUN_146c2fed0(uVar7,&local_338,0);
        local_348 = (float *)0x0;
        uStack_340 = 0;
        if (*(int *)(local_98 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_98 + 0x30);
        }
        local_350 = &local_2a0;
        FUN_146c383fc(&local_350,uVar7,1,1);
        if (*(int *)(local_98 + 0x38) < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = **(undefined8 **)(local_98 + 0x30);
        }
        FUN_146c378c6(&local_350,uVar7,0);
        if (local_348 != (float *)0x0) {
          FUN_1400020a8();
        }
        if (local_320 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_3d8 = &local_368;
      local_358 = DAT_14c8464f0;
      local_368 = (undefined4)DAT_14c8464e0;
      uStack_364 = DAT_14c8464e0._4_4_;
      uStack_360 = (undefined4)DAT_14c8464e8;
      uStack_35c = DAT_14c8464e8._4_4_;
      puVar8 = local_3c8;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar8 = *param_3;
        param_3 = param_3 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_143bb8bf2(param_1,&local_2a0,local_3c8,local_3d0);
      FUN_141082778(&local_2a0);
      if (local_2b8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1485a1892;
    }
    local_2a0 = L"AppendRevolvePolygon_InvalidPolygon";
    local_298 = 0x23;
    FUN_1446e940c(&local_308,&local_2a0);
    local_2a0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_298 = 0x2d;
    FUN_1446e940c(&local_328,&local_2a0);
    pwVar9 = L"AppendRevolvePolygon: PolygonVertices array requires at least 3 positions";
  }
  FUN_140208bae(&local_2a0,&local_328,&local_308,pwVar9);
  FUN_143ba90d7(param_8,2,&local_2a0);
  if (local_2a0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2a0 + 0x10))();
  }
LAB_1485a1892:
  if ((local_80 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a1bc6 FUN_1485a1bc6 body=1022 status=ok
// SIG undefined FUN_1485a1bc6(void)

void FUN_1485a1bc6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  float local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_10c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_110 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_148 = local_100 * 0.5;
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_120 = local_118;
  local_128 = local_110;
  local_130 = local_10c;
  local_138 = local_108;
  local_140 = local_104;
  FUN_1485a2416(local_90,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))),
                local_88,local_fc * 0.5);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a1fc6 FUN_1485a1fc6 body=1103 status=ok
// SIG undefined FUN_1485a1fc6(void)

void FUN_1485a1fc6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 1;
  uStack_2e = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar1 = local_9c;
  local_148 = local_a0;
  local_140 = local_a4;
  local_138 = local_a8;
  local_130 = local_ac;
  local_128 = local_b0;
  local_120 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = local_98;
  puVar5 = local_118;
  for (lVar3 = 0xc; uVar2 = local_28, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1485a2416(local_28,CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT12(uStack_2e,local_30))),
                local_118,uVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a2416 FUN_1485a2416 body=625 status=ok
// SIG undefined FUN_1485a2416(void)

longlong FUN_1485a2416(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                      float param_5,float param_6,int param_7,int param_8,int param_9,
                      undefined8 param_10)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  undefined1 *local_220;
  undefined8 local_218 [12];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  double local_d8;
  double local_d0;
  int local_c8;
  int local_c4;
  undefined1 local_bf;
  double local_b0;
  int local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [32];
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1 == 0) {
    local_1a0 = L"PrimitiveFunctions_AppendRoundRectangleXY";
    local_198 = 0x29;
    FUN_1446e940c(local_9c,&local_1a0);
    local_1a0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_198 = 0x2d;
    FUN_1446e940c(local_a0,&local_1a0);
    FUN_140208bae(&local_1a0,local_a0,local_9c,L"AppendRoundRectangle: TargetMesh is Null");
    FUN_143ba90d7(param_10,2,&local_1a0);
    if (local_1a0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1a0 + 0x10))();
    }
  }
  else {
    FUN_146c60328(&local_1a0);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = DAT_14c846364;
    local_e0 = DAT_14c84636c;
    local_d8 = (double)param_4;
    local_d0 = (double)param_5;
    local_c8 = param_7;
    if (param_7 < 1) {
      local_c8 = 0;
    }
    local_c4 = 0;
    if (0 < param_8) {
      local_c4 = param_8;
    }
    fVar3 = 1e-06;
    if (1e-06 <= param_6) {
      fVar3 = param_6;
    }
    local_b0 = (double)fVar3;
    local_a8 = 3;
    if (3 < param_9) {
      local_a8 = param_9;
    }
    local_bf = (char)param_2 != '\x02';
    FUN_146c60402(&local_1a0);
    local_220 = local_98;
    local_78 = 0;
    local_228 = &local_1b8;
    local_1b8 = (undefined4)DAT_14c8464e0;
    uStack_1b4 = DAT_14c8464e0._4_4_;
    uStack_1b0 = (undefined4)DAT_14c8464e8;
    uStack_1ac = DAT_14c8464e8._4_4_;
    local_1a8 = DAT_14c8464f0;
    puVar2 = local_218;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_143bb7d83(param_1,&local_1a0,local_218,param_2);
    FUN_146bd8050(&local_1a0);
  }
  if ((local_70 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a2688 FUN_1485a2688 body=850 status=ok
// SIG undefined FUN_1485a2688(void)

void FUN_1485a2688(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8 [12];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 1;
  uStack_3e = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_138 = 0x500000004;
  uStack_130 = 8;
  uStack_12c = uStack_12c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_140 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_140);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
  local_1c0 = local_140;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = &local_158;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = uStack_130;
  uStack_14c = uStack_12c;
  puVar3 = local_a8;
  puVar4 = local_1b8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_1485a29dc(local_38,CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT12(uStack_3e,local_40))
                                         ),local_1b8,puVar5);
  *param_3 = uVar1;
  FUN_1400d7d10(&local_128);
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a29dc FUN_1485a29dc body=568 status=ok
// SIG undefined FUN_1485a29dc(void)

longlong FUN_1485a29dc(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  wchar_t *local_80;
  longlong local_78;
  undefined8 *local_70;
  code *local_68;
  wchar_t **local_60;
  undefined2 local_53;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3c [4];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar4 = DAT_14c846520;
  uVar3 = DAT_14c846518._4_4_;
  uVar2 = (undefined4)DAT_14c846518;
  uVar1 = DAT_14c846510._4_4_;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = param_1;
  local_30 = param_2;
  if (param_1 == 0) {
    local_80 = L"PrimitiveFunctions_AppendSimpleCollisionShapes";
    local_78._0_4_ = 0x2e;
    FUN_1446e940c(&local_50,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_78 = CONCAT44(local_78._4_4_,0x2d);
    FUN_1446e940c(local_3c,&local_80);
    FUN_140208bae(&local_80,local_3c,&local_50,L"AppendSimpleCollisionShapes: TargetMesh is Null");
    FUN_143ba90d7(param_6,2,&local_80);
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
    lVar5 = 0;
  }
  else {
    local_4c = 0x10;
    local_40 = 1;
    local_50 = *param_5;
    local_44 = param_5[2];
    local_48 = param_5[1];
    local_3f = *(undefined1 *)(param_5 + 3);
    local_a8 = &local_53;
    local_53 = 1;
    local_51 = 1;
    local_98 = *(undefined4 *)(param_3 + 0x40);
    uStack_94 = *(undefined4 *)(param_3 + 0x44);
    uStack_90 = *(undefined4 *)(param_3 + 0x48);
    uStack_8c = *(undefined4 *)(param_3 + 0x4c);
    local_88 = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x40) = (undefined4)DAT_14c846510;
    *(undefined4 *)(param_3 + 0x44) = uVar1;
    *(undefined4 *)(param_3 + 0x48) = uVar2;
    *(undefined4 *)(param_3 + 0x4c) = uVar3;
    *(undefined8 *)(param_3 + 0x50) = uVar4;
    *(undefined8 *)(param_3 + 0x58) = 0;
    local_80 = (wchar_t *)&local_38;
    local_60 = &local_80;
    local_70 = &local_30;
    local_68 = FUN_143bd980c;
    local_78 = param_3;
    FUN_148508e5a(param_4);
    lVar5 = local_38;
    if (*(int *)(param_4 + 0x68) != 0 || *(int *)(param_4 + 0x48) != 0) {
      local_80 = L"PrimitiveFunctions_AppendSimpleCollisionShapes Tapered Capsules Unsupported";
      local_78._0_4_ = 0x4b;
      FUN_1446e940c(local_3c,&local_80);
      local_80 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
      local_78 = CONCAT44(local_78._4_4_,0x2d);
      FUN_1446e940c(local_9c,&local_80);
      FUN_140208bae(&local_80,local_9c,local_3c,
                    L"AppendSimpleCollisionShapes: Tapered Capsules are not supported and will be skipped"
                   );
      FUN_143ba9449(param_6,3,&local_80);
      lVar5 = local_38;
      if (local_80 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_80 + 0x10))();
        lVar5 = local_38;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1485a2c1e FUN_1485a2c1e body=1043 status=ok
// SIG undefined FUN_1485a2c1e(void)

void FUN_1485a2c1e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined8 local_148;
  longlong local_138 [13];
  undefined8 local_d0;
  undefined1 local_c5;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 1;
  uStack_3e = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar6 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  iVar1 = local_c4;
  local_c5 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c5);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_168 = local_bc;
  local_160 = local_c0;
  local_150 = local_c5;
  local_148 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = local_b8 + 2;
  plVar5 = local_138;
  for (lVar3 = 0xc; uVar2 = local_38, lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_158 = iVar1 != 0;
  FUN_1485a3032(local_38,CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT12(uStack_3e,local_40))),
                local_138,plVar6);
  *param_3 = uVar2;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a3032 FUN_1485a3032 body=1222 status=ok
// SIG undefined FUN_1485a3032(void)

longlong FUN_1485a3032(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      float param_5,int param_6,undefined1 param_7,char param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined1 *local_320;
  undefined8 local_318 [13];
  undefined8 local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined1 local_27c [4];
  undefined1 local_278 [32];
  undefined1 local_258;
  undefined **local_250;
  undefined4 local_248 [38];
  undefined2 local_1b0;
  longlong local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (param_1 == 0) {
    local_250 = (undefined **)0x14af635fa;
    local_248[0] = 0x23;
    FUN_1446e940c(&local_298,&local_250);
    local_250 = (undefined **)0x14af62310;
    local_248[0] = 0x2d;
    FUN_1446e940c(local_27c,&local_250);
    pwVar9 = L"AppendSimpleExtrudePolygon: TargetMesh is Null";
  }
  else {
    lVar11 = param_4[1];
    if (2 < (longlong)(int)lVar11) {
      lVar7 = 0;
      memset(local_248,0,0x91);
      local_1b0 = 0x100;
      local_250 = &PTR_FUN_14ae73538;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_158 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_150 = DAT_14c8464f0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0x3ff0000000000000;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_104 = 1;
      local_100 = 0x3ff0000000000000;
      local_f8 = 0x3ff0000000000000;
      local_f0 = 0x3ff0000000000000;
      local_e8 = 0;
      local_e4 = 0x42c80000;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      lVar2 = *param_4;
      do {
        uVar5 = uStack_178;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        local_298 = *puVar1;
        uStack_294 = puVar1[1];
        uStack_290 = puVar1[2];
        uStack_28c = puVar1[3];
        lVar10 = (longlong)(int)uStack_178;
        uVar6 = (int)uStack_178 + 1;
        uStack_178 = CONCAT44(uStack_178._4_4_,uVar6);
        if (uStack_178._4_4_ < uVar6) {
          FUN_14489624a(&local_180,uVar5 & 0xffffffff);
        }
        puVar8 = (undefined8 *)(local_180 + lVar10 * 0x10);
        *puVar8 = CONCAT44(uStack_294,local_298);
        puVar8[1] = CONCAT44(uStack_28c,uStack_290);
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar11 * 0x10 != lVar7);
      iVar12 = 2;
      if (2 < param_6) {
        iVar12 = param_6;
      }
      iVar13 = -iVar12;
      dVar3 = 0.0;
      do {
        uVar5 = uStack_168;
        dVar4 = (double)param_5;
        if (iVar13 != 0) {
          dVar4 = ((double)param_5 / (double)(iVar12 + -1)) * dVar3;
        }
        lVar11 = (longlong)(int)uStack_168;
        uVar6 = (int)uStack_168 + 1;
        uStack_168 = CONCAT44(uStack_168._4_4_,uVar6);
        if (uStack_168._4_4_ < uVar6) {
          FUN_1403e3958(&local_170,uVar5 & 0xffffffff);
        }
        puVar8 = (undefined8 *)(local_170 + lVar11 * 0x18);
        *puVar8 = 0;
        puVar8[1] = 0;
        *(double *)(local_170 + 0x10 + lVar11 * 0x18) = dVar4;
        dVar3 = dVar3 + 1.0;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 1);
      local_150 = DAT_14c8464f0;
      local_160 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_158 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_130 = 0x3ff0000000000000;
      local_108 = CONCAT11(local_108._1_1_,param_7);
      local_1b0 = CONCAT11(local_1b0._1_1_,(char)param_2 == '\x02');
      FUN_14831809a();
      if (param_8 == '\0') {
        local_2b0 = 0;
        uVar14 = 0;
        uVar15 = 0;
        local_2a0 = (double)(param_5 * -0.5);
      }
      else {
        local_2b0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uVar14 = (undefined4)DAT_14c8464e8;
        uVar15 = DAT_14c8464e8._4_4_;
        local_2a0 = DAT_14c8464f0;
      }
      local_320 = local_278;
      local_258 = 0;
      local_328 = &local_2b0;
      local_2a8 = CONCAT44(uVar15,uVar14);
      puVar8 = local_318;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar8 = *param_3;
        param_3 = param_3 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_143bb7d83(param_1,&local_250,local_318,param_2);
      FUN_148319084(&local_250);
      goto LAB_1485a3149;
    }
    local_250 = (undefined **)0x14af636e2;
    local_248[0] = 0x29;
    FUN_1446e940c(&local_298,&local_250);
    local_250 = (undefined **)0x14af62310;
    local_248[0] = 0x2d;
    FUN_1446e940c(local_27c,&local_250);
    pwVar9 = L"AppendSimpleExtrudePolygon: PolygonVertices array requires at least 3 positions";
  }
  FUN_140208bae(&local_250,local_27c,&local_298,pwVar9);
  FUN_143ba90d7(param_9,2,&local_250);
  if (local_250 != (undefined **)0x0) {
    (**(code **)(*local_250 + 0x10))();
  }
LAB_1485a3149:
  if ((local_c0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a350a FUN_1485a350a body=1370 status=ok
// SIG undefined FUN_1485a350a(void)

void FUN_1485a350a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158 [12];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  longlong local_d8 [6];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 1;
  uStack_4e = 0;
  uStack_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  local_d8[2] = 0;
  local_d8[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar7 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar8 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_dc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  iVar2 = local_dc;
  local_e0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  iVar1 = local_e0;
  local_e4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_e8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  local_f0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_180 = local_e4;
  local_178 = local_e8;
  local_170 = local_ec;
  local_168 = local_f0;
  local_160 = local_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar5 = local_d8 + 4;
  plVar6 = local_158;
  for (lVar4 = 0xc; uVar3 = local_48, lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  local_188 = iVar1 != 0;
  local_190 = iVar2 != 0;
  local_198 = plVar8;
  FUN_1485a3a66(local_48,CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT12(uStack_4e,local_50))),
                local_158,plVar7);
  *param_3 = uVar3;
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a3a66 FUN_1485a3a66 body=1438 status=ok
// SIG undefined FUN_1485a3a66(void)

longlong FUN_1485a3a66(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      longlong *param_5,undefined1 param_6,undefined1 param_7,float param_8,
                      float param_9,float param_10,float param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  double *pdVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_328 [32];
  undefined4 *local_308;
  undefined1 *local_300;
  undefined8 local_2f8 [12];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined1 local_25c [4];
  undefined1 local_258 [32];
  undefined1 local_238;
  undefined **local_230;
  undefined4 local_228 [38];
  undefined2 local_190;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined4 local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined2 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_1 == 0) {
    local_230 = (undefined **)0x14af63790;
    local_228[0] = 0x21;
    FUN_1446e940c(&local_278,&local_230);
    local_230 = (undefined **)0x14af62310;
    local_228[0] = 0x2d;
    FUN_1446e940c(local_25c,&local_230);
    pwVar12 = L"AppendSimpleSweptPolygon: TargetMesh is Null";
  }
  else if (*(int *)(param_4 + 1) < 3) {
    local_230 = (undefined **)0x14af63870;
    local_228[0] = 0x27;
    FUN_1446e940c(&local_278,&local_230);
    local_230 = (undefined **)0x14af62310;
    local_228[0] = 0x2d;
    FUN_1446e940c(local_25c,&local_230);
    pwVar12 = L"AppendSimpleSweptPolygon: PolygonVertices array requires at least 3 positions";
  }
  else {
    if (1 < (int)param_5[1]) {
      memset(local_228,0,0x91);
      local_190 = 0x100;
      local_230 = &PTR_FUN_14ae73538;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = (undefined8 *)0x0;
      uStack_148 = 0;
      local_140 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_138 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_130 = DAT_14c8464f0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0x3ff0000000000000;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e4 = 1;
      local_e0 = 1.0;
      local_d8 = 1.0;
      local_d0 = 1.0;
      local_c8 = 0;
      local_c4 = 0x42c80000;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      dVar5 = cos((double)param_10 * -0.017453292519943295);
      dVar6 = sin((double)param_10 * -0.017453292519943295);
      if ((longlong)*(int *)(param_4 + 1) != 0) {
        pdVar13 = (double *)*param_4;
        pdVar9 = pdVar13 + (longlong)*(int *)(param_4 + 1) * 2;
        do {
          uVar7 = uStack_158;
          dVar2 = *pdVar13;
          dVar3 = pdVar13[1];
          lVar14 = (longlong)(int)uStack_158;
          uVar8 = (int)uStack_158 + 1;
          uStack_158 = CONCAT44(uStack_158._4_4_,uVar8);
          if (uStack_158._4_4_ < uVar8) {
            FUN_14489624a(&local_160,uVar7 & 0xffffffff);
          }
          *(double *)(local_160 + lVar14 * 0x10) = dVar2 * dVar5 + dVar3 * -dVar6;
          *(double *)(local_160 + 8 + lVar14 * 0x10) = dVar6 * dVar2 + dVar5 * dVar3;
          pdVar13 = pdVar13 + 2;
        } while (pdVar13 != pdVar9);
      }
      lVar14 = param_5[1];
      if ((longlong)(int)lVar14 != 0) {
        lVar4 = *param_5;
        lVar10 = 0;
        do {
          uVar7 = uStack_148;
          local_268 = *(undefined8 *)(lVar4 + 0x10 + lVar10);
          puVar1 = (undefined4 *)(lVar4 + lVar10);
          local_278 = *puVar1;
          uStack_274 = puVar1[1];
          uStack_270 = puVar1[2];
          uStack_26c = puVar1[3];
          lVar15 = (longlong)(int)uStack_148;
          uVar8 = (int)uStack_148 + 1;
          uStack_148 = CONCAT44(uStack_148._4_4_,uVar8);
          if (uStack_148._4_4_ < uVar8) {
            FUN_1403e3958(&local_150,uVar7 & 0xffffffff);
          }
          local_150[lVar15 * 3 + 2] = local_268;
          local_150[lVar15 * 3] = CONCAT44(uStack_274,local_278);
          (local_150 + lVar15 * 3)[1] = CONCAT44(uStack_26c,uStack_270);
          lVar10 = lVar10 + 0x18;
        } while ((longlong)(int)lVar14 * 0x18 != lVar10);
      }
      local_e8 = CONCAT11(param_6,param_7);
      local_190 = CONCAT11(local_190._1_1_,(char)param_2 == '\x02');
      local_140 = *local_150;
      uStack_138 = local_150[1];
      local_130 = local_150[2];
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_110 = 0x3ff0000000000000;
      local_e0 = (double)param_8;
      local_d8 = (double)param_9;
      if (1.0 < param_11) {
        local_d0 = (double)param_11;
        local_c8 = CONCAT11(local_c8._1_1_,1);
      }
      FUN_14831809a(&local_230);
      local_300 = local_258;
      local_238 = 0;
      local_308 = &local_298;
      local_298 = (undefined4)DAT_14c8464e0;
      uStack_294 = DAT_14c8464e0._4_4_;
      uStack_290 = (undefined4)DAT_14c8464e8;
      uStack_28c = DAT_14c8464e8._4_4_;
      local_288 = DAT_14c8464f0;
      puVar11 = local_2f8;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar11 = *param_3;
        param_3 = param_3 + 1;
        puVar11 = puVar11 + 1;
      }
      FUN_143bb7d83(param_1,&local_230,local_2f8,param_2);
      FUN_148319084(&local_230);
      goto LAB_1485a3bc2;
    }
    local_230 = (undefined **)0x14af63950;
    local_228[0] = 0x29;
    FUN_1446e940c(&local_278,&local_230);
    local_230 = (undefined **)0x14af62310;
    local_228[0] = 0x2d;
    FUN_1446e940c(local_25c,&local_230);
    pwVar12 = L"AppendSimpleSweptPolygon: SweepPath array requires at least 2 positions";
  }
  FUN_140208bae(&local_230,local_25c,&local_278,pwVar12);
  FUN_143ba90d7(param_12,2,&local_230);
  if (local_230 != (undefined **)0x0) {
    (**(code **)(*local_230 + 0x10))();
  }
LAB_1485a3bc2:
  if ((local_a0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a4006 FUN_1485a4006 body=929 status=ok
// SIG undefined FUN_1485a4006(void)

void FUN_1485a4006(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_109;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_109 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_109);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_109);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_120 = local_118;
  local_128 = local_109;
  local_130 = local_108;
  local_138 = local_104;
  local_140 = local_100;
  local_148 = local_fc;
  FUN_1485aa8b6(local_90,0,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))));
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a43a8 FUN_1485a43a8 body=1099 status=ok
// SIG undefined FUN_1485a43a8(void)

void FUN_1485a43a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_130 = 1;
  uStack_12e = 0;
  uStack_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_154 = 0x3ff00000;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  local_19c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  local_1a0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  local_1a8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  local_1a9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a9);
  }
  local_1b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  uVar1 = local_a0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_198;
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1c0 = local_1b8;
  local_1c8 = local_1a9;
  local_1d0 = local_1a8;
  local_1d8 = local_1a4;
  local_1e0 = local_1a0;
  local_1e8 = local_19c;
  FUN_1485aa8b6(local_a0,puVar5,
                CONCAT44(uStack_12c,CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130))));
  *param_3 = uVar1;
  FUN_1400d7d10(&local_128);
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a47f4 FUN_1485a47f4 body=973 status=ok
// SIG undefined FUN_1485a47f4(void)

void FUN_1485a47f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128 [13];
  undefined8 local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar8 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_148 = local_ac;
  local_140 = local_b0;
  local_138 = local_b4;
  local_130 = local_c0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_98;
  puVar7 = local_128;
  for (lVar5 = 0xc; uVar4 = local_30, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1485a4bc2(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_128,puVar8);
  plVar3 = plStack_a0;
  *param_3 = uVar4;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a4bc2 FUN_1485a4bc2 body=884 status=ok
// SIG undefined FUN_1485a4bc2(void)

longlong FUN_1485a4bc2(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_278 [32];
  undefined4 *local_258;
  undefined1 *local_250;
  undefined1 local_239;
  longlong local_238;
  undefined8 *local_230;
  undefined8 local_228 [12];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined4 local_1a0 [38];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 uStack_ab;
  float local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [32];
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_238 = param_1;
  local_230 = param_3;
  if (param_1 == 0) {
    local_1a8 = (undefined **)0x14af64e0e;
    local_1a0[0] = 0x36;
    FUN_1446e940c(local_9c,&local_1a8);
    local_1a8 = (undefined **)0x14af62310;
    local_1a0[0] = 0x2d;
    FUN_1446e940c(local_a0,&local_1a8);
    pwVar7 = L"AppendSphereCovering: TargetMesh is Null";
  }
  else {
    plVar5 = (longlong *)*param_4;
    if (plVar5 != (longlong *)0x0) {
      if (0 < (int)plVar5[1]) {
        local_239 = (char)param_2 == '\x02';
        lVar8 = 0;
        lVar3 = 0;
        do {
          memset(local_1a0,0,0x91);
          local_f0 = 0;
          uStack_e8 = 0;
          local_e0 = 0;
          local_d8 = 0x3ff0000000000000;
          local_d0 = 0x3ff0000000000000;
          local_c8 = 0x3ff0000000000000;
          local_c0 = 0x3ff0000000000000;
          local_1a8 = &PTR_FUN_14ae75170;
          local_f8 = *(undefined8 *)(*plVar5 + 0x10 + lVar8);
          puVar4 = (undefined8 *)(*plVar5 + lVar8);
          local_108 = *puVar4;
          uStack_100 = puVar4[1];
          dVar1 = *(double *)(plVar5[2] + lVar3 * 8);
          uVar9 = 0xa0000000;
          uVar10 = 0x3eb0c6f7;
          if (9.999999974752427e-07 <= dVar1) {
            uVar9 = SUB84(dVar1,0);
            uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
          }
          _local_a8 = CONCAT44(1,(float)(double)CONCAT44(uVar10,uVar9));
          _local_b8 = CONCAT44(param_6,param_5);
          local_b0 = param_7;
          _local_ac = CONCAT11(local_239,1);
          FUN_148397678(&local_1a8);
          local_78 = 0;
          local_1c8 = (undefined4)DAT_14c8464e0;
          uStack_1c4 = DAT_14c8464e0._4_4_;
          uStack_1c0 = (undefined4)DAT_14c8464e8;
          uStack_1bc = DAT_14c8464e8._4_4_;
          local_1b8 = DAT_14c8464f0;
          puVar4 = local_230;
          puVar6 = local_228;
          for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          local_250 = local_98;
          local_258 = &local_1c8;
          FUN_143bb7d83(local_238,&local_1a8,local_228,param_2);
          FUN_146bd8050(&local_1a8);
          lVar3 = lVar3 + 1;
          plVar5 = (longlong *)*param_4;
          lVar8 = lVar8 + 0x18;
        } while (lVar3 < (int)plVar5[1]);
      }
      goto LAB_1485a4e93;
    }
    local_1a8 = (undefined **)0x14af64ed8;
    local_1a0[0] = 0x3a;
    FUN_1446e940c(local_9c,&local_1a8);
    local_1a8 = (undefined **)0x14af62310;
    local_1a0[0] = 0x2d;
    FUN_1446e940c(local_a0,&local_1a8);
    pwVar7 = L"AppendSphereCovering: Sphere Covering is Null";
  }
  FUN_140208bae(&local_1a8,local_a0,local_9c,pwVar7);
  FUN_143ba90d7(param_8,2,&local_1a8);
  if (local_1a8 != (undefined **)0x0) {
    (**(code **)(*local_1a8 + 0x10))();
  }
LAB_1485a4e93:
  if ((local_70 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_238;
}



// FUNCTION 1485a4f38 FUN_1485a4f38 body=846 status=ok
// SIG undefined FUN_1485a4f38(void)

void FUN_1485a4f38(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_105;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 1;
  uStack_96 = 0;
  uStack_94 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3ff00000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0x3ff00000;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0x3ff0000000000000;
  uStack_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  local_fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  local_100 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_105 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_105);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_105);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  uVar1 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_f8;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_118 = local_110;
  local_120 = local_105;
  local_128 = local_104;
  local_130 = local_100;
  local_138 = local_fc;
  FUN_1485aa622(local_90,0,CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT12(uStack_96,local_98))));
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a5288 FUN_1485a5288 body=1016 status=ok
// SIG undefined FUN_1485a5288(void)

void FUN_1485a5288(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a5;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  undefined8 local_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_bf = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_130 = 1;
  uStack_12e = 0;
  uStack_12c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_130);
  }
  local_198[0] = 0;
  local_198[1] = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3ff00000;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_154 = 0x3ff00000;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  local_19c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  local_1a0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  local_1a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  local_1a5 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a5);
  }
  local_1b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b0);
  }
  uVar1 = local_a0;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_198;
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_1b8 = local_1b0;
  local_1c0 = local_1a5;
  local_1c8 = local_1a4;
  local_1d0 = local_1a0;
  local_1d8 = local_19c;
  FUN_1485aa622(local_a0,puVar5,
                CONCAT44(uStack_12c,CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130))));
  *param_3 = uVar1;
  FUN_1400d7d10(&local_128);
  if ((local_30 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a5682 FUN_1485a5682 body=1100 status=ok
// SIG undefined FUN_1485a5682(void)

void FUN_1485a5682(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined8 local_158;
  longlong local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  longlong local_a8 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar5 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0x43b40000;
  uStack_b4 = (uint)uStack_b4._2_2_ << 0x10;
  uStack_b0 = 0x41f00000;
  local_ac = CONCAT22(local_ac._2_2_,0x100);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_c8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_170 = local_c0;
  local_168 = local_c4;
  local_160 = local_c8;
  local_158 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = &local_e8;
  local_e8 = (undefined4)local_bc;
  uStack_e4 = local_bc._4_4_;
  iStack_e0 = uStack_b4;
  uStack_dc = uStack_b0;
  local_d8 = local_ac;
  plVar3 = local_a8 + 2;
  plVar4 = local_148;
  for (lVar2 = 0xc; uVar1 = local_30, lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_1485a5ad0(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_148,plVar5);
  *param_3 = uVar1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a5ad0 FUN_1485a5ad0 body=1236 status=ok
// SIG undefined FUN_1485a5ad0(void)

longlong FUN_1485a5ad0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      float *param_5,float param_6,int param_7,float param_8,undefined8 param_9)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_418 [32];
  undefined4 *local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8 [12];
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  wchar_t **local_368;
  float *local_360;
  undefined8 uStack_358;
  undefined1 *local_350;
  wchar_t ***local_348;
  wchar_t **local_340;
  wchar_t *local_338;
  undefined8 uStack_330;
  float local_324;
  undefined8 local_320;
  float local_318;
  undefined2 local_314;
  undefined1 local_312;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  longlong local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  double local_2b8;
  wchar_t *local_2b0;
  undefined4 local_2a8;
  longlong local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (param_1 == 0) {
    local_2b0 = L"AppendSpiralRevolvePolygon_NullMesh";
    local_2a8 = 0x23;
    FUN_1446e940c(&local_320,&local_2b0);
    local_2b0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_2a8 = 0x2d;
    FUN_1446e940c(&local_340,&local_2b0);
    pwVar8 = L"AppendSpiralRevolvePolygon: TargetMesh is Null";
  }
  else {
    if (2 < (longlong)*(int *)(param_4 + 1)) {
      local_320 = 0x43b4000000000010;
      local_318 = 0.0;
      local_314 = 0;
      local_312 = 1;
      local_310 = 0x3ff0000000000000;
      local_308 = 0x3ff0000000000000;
      local_300 = 0;
      uStack_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 0x42c80000;
      local_2e8 = 0;
      local_2e0 = 0x3f847ae147ae147b;
      local_2d8 = 1;
      local_2d0 = 0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = 50.0;
      pdVar10 = (double *)*param_4;
      pdVar9 = pdVar10 + (longlong)*(int *)(param_4 + 1) * 2;
      local_3f0 = param_2;
      do {
        uVar3 = uStack_2c8;
        dVar1 = pdVar10[1];
        dVar2 = *pdVar10;
        lVar11 = (longlong)(int)uStack_2c8;
        uVar4 = (int)uStack_2c8 + 1;
        uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar4);
        if (uStack_2c8._4_4_ < uVar4) {
          FUN_14489624a(&local_2d0,uVar3 & 0xffffffff);
        }
        *(double *)(local_2d0 + lVar11 * 0x10) = dVar2 + (double)param_6;
        *(double *)(local_2d0 + 8 + lVar11 * 0x10) = dVar1;
        pdVar10 = pdVar10 + 2;
      } while (pdVar10 != pdVar9);
      iVar5 = 2;
      if (2 < param_7) {
        iVar5 = param_7;
      }
      fVar12 = *param_5;
      if (fVar12 < 0.0001) {
        fVar12 = 0.0001;
      }
      local_320 = CONCAT44(fVar12,iVar5);
      local_318 = param_5[1];
      local_314 = CONCAT11(*(undefined1 *)(param_5 + 4),*(undefined1 *)(param_5 + 2));
      local_312 = *(undefined1 *)((longlong)param_5 + 0x11);
      local_2b8 = (double)param_8;
      FUN_14297bda0(&local_320,&local_2b0);
      if (*(char *)((longlong)param_5 + 9) != '\0') {
        fVar12 = param_5[3];
        fVar13 = 180.0;
        if (fVar12 <= 180.0) {
          fVar13 = fVar12;
        }
        local_324 = cosf((float)(~-(uint)(fVar12 < 0.0) & (uint)(fVar13 * 0.017453292)));
        local_338 = (wchar_t *)0x0;
        uStack_330 = 0;
        local_340 = &local_2b0;
        FUN_146c38358(&local_340);
        if (*(int *)(local_a8 + 0x38) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(local_a8 + 0x30);
        }
        local_348 = &local_368;
        local_360 = &local_324;
        local_350 = &LAB_143bd9662;
        local_368 = &local_338;
        FUN_146c2fed0(uVar6,&local_350,0);
        local_360 = (float *)0x0;
        uStack_358 = 0;
        if (*(int *)(local_a8 + 0x38) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(local_a8 + 0x30);
        }
        local_368 = &local_2b0;
        FUN_146c383fc(&local_368,uVar6,1,1);
        if (*(int *)(local_a8 + 0x38) < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = **(undefined8 **)(local_a8 + 0x30);
        }
        FUN_146c378c6(&local_368,uVar6,0);
        if (local_360 != (float *)0x0) {
          FUN_1400020a8();
        }
        if (local_338 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_3f8 = &local_388;
      local_378 = DAT_14c8464f0;
      local_388 = (undefined4)DAT_14c8464e0;
      uStack_384 = DAT_14c8464e0._4_4_;
      uStack_380 = (undefined4)DAT_14c8464e8;
      uStack_37c = DAT_14c8464e8._4_4_;
      puVar7 = local_3e8;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar7 = *param_3;
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_143bb8bf2(param_1,&local_2b0,local_3e8,local_3f0);
      FUN_141082778(&local_2b0);
      if (local_2d0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1485a5c21;
    }
    local_2b0 = L"AppendSpiralRevolvePolygon_InvalidPolygon";
    local_2a8 = 0x29;
    FUN_1446e940c(&local_320,&local_2b0);
    local_2b0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_2a8 = 0x2d;
    FUN_1446e940c(&local_340,&local_2b0);
    pwVar8 = L"AppendSpiralRevolvePolygon: PolygonVertices array requires at least 3 positions";
  }
  FUN_140208bae(&local_2b0,&local_340,&local_320,pwVar8);
  FUN_143ba90d7(param_9,2,&local_2b0);
  if (local_2b0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2b0 + 0x10))();
  }
LAB_1485a5c21:
  if ((local_90 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a5fb6 FUN_1485a5fb6 body=1370 status=ok
// SIG undefined FUN_1485a5fb6(void)

void FUN_1485a5fb6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158 [12];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  longlong local_d8 [6];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 1;
  uStack_4e = 0;
  uStack_4c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 4);
  }
  local_d8[2] = 0;
  local_d8[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8 + 2);
  }
  plVar7 = local_d8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar8 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_dc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  iVar2 = local_dc;
  local_e0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  iVar1 = local_e0;
  local_e4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_e8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  local_f0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_180 = local_e4;
  local_178 = local_e8;
  local_170 = local_ec;
  local_168 = local_f0;
  local_160 = local_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar5 = local_d8 + 4;
  plVar6 = local_158;
  for (lVar4 = 0xc; uVar3 = local_48, lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  local_188 = iVar1 != 0;
  local_190 = iVar2 != 0;
  local_198 = plVar8;
  FUN_1485a6512(local_48,CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT12(uStack_4e,local_50))),
                local_158,plVar7);
  *param_3 = uVar3;
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a6512 FUN_1485a6512 body=2094 status=ok
// SIG undefined FUN_1485a6512(void)

longlong FUN_1485a6512(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      longlong *param_5,undefined1 param_6,undefined1 param_7,float param_8,
                      float param_9,float param_10,float param_11,undefined8 param_12)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  undefined1 *local_390;
  undefined8 local_388 [12];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [32];
  undefined1 local_288;
  undefined **local_280;
  undefined4 local_278 [38];
  undefined2 local_1e0;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined4 local_134;
  double local_130;
  double local_128;
  double local_120;
  undefined2 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_1 == 0) {
    local_280 = (undefined **)0x14af639f2;
    local_278[0] = 0x1b;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar20 = L"AppendSweepPolygon: TargetMesh is Null";
  }
  else if ((int)param_4[1] < 3) {
    local_280 = (undefined **)0x14af63aba;
    local_278[0] = 0x21;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar20 = L"AppendSweepPolygon: PolygonVertices array requires at least 3 positions";
  }
  else {
    if (1 < (int)param_5[1]) {
      dVar6 = cos((double)param_10 * -0.017453292519943295);
      dVar7 = sin((double)param_10 * -0.017453292519943295);
      memset(local_278,0,0x91);
      local_1e0 = 0x100;
      local_280 = &PTR_FUN_14ae73538;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = (undefined8 *)0x0;
      uStack_198 = 0;
      local_190 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_188 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_180 = DAT_14c8464f0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_134 = 1;
      local_130 = 1.0;
      local_128 = 1.0;
      local_120 = 1.0;
      local_118 = 0;
      local_114 = 0x42c80000;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      lVar18 = param_4[1];
      if ((longlong)(int)lVar18 != 0) {
        lVar5 = *param_4;
        lVar21 = 0;
        do {
          uVar16 = uStack_1a8;
          dVar1 = *(double *)(lVar5 + lVar21);
          dVar2 = *(double *)(lVar5 + 8 + lVar21);
          lVar22 = (longlong)(int)uStack_1a8;
          uVar17 = (int)uStack_1a8 + 1;
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar17);
          if (uStack_1a8._4_4_ < uVar17) {
            FUN_14489624a(&local_1b0,uVar16 & 0xffffffff);
          }
          *(double *)(local_1b0 + lVar22 * 0x10) = dVar1 * dVar6 + dVar2 * -dVar7;
          *(double *)(local_1b0 + 8 + lVar22 * 0x10) = dVar7 * dVar1 + dVar6 * dVar2;
          lVar21 = lVar21 + 0x10;
        } while ((longlong)(int)lVar18 * 0x10 != lVar21);
      }
      lVar18 = param_5[1];
      if ((longlong)(int)lVar18 != 0) {
        lVar5 = *param_5;
        lVar21 = 0;
        do {
          uVar16 = uStack_198;
          puVar19 = (undefined8 *)(lVar5 + 0x20 + lVar21);
          uVar4 = *puVar19;
          uVar11 = puVar19[1];
          uVar3 = *(undefined8 *)(lVar5 + 0x30 + lVar21);
          lVar22 = (longlong)(int)uStack_198;
          uVar17 = (int)uStack_198 + 1;
          uStack_198 = CONCAT44(uStack_198._4_4_,uVar17);
          if (uStack_198._4_4_ < uVar17) {
            FUN_1403e3958(&local_1a0,uVar16 & 0xffffffff);
          }
          local_1a0[lVar22 * 3] = uVar4;
          (local_1a0 + lVar22 * 3)[1] = uVar11;
          local_1a0[lVar22 * 3 + 2] = uVar3;
          dVar6 = *(double *)(lVar5 + lVar21);
          dVar7 = *(double *)(lVar5 + 8 + lVar21);
          dVar1 = *(double *)(lVar5 + 0x10 + lVar21);
          dVar2 = *(double *)(lVar5 + 0x18 + lVar21);
          dVar9 = dVar7 + dVar7;
          dVar8 = dVar1 + dVar1;
          local_2e0 = dVar2 * (dVar6 + dVar6);
          dVar10 = (dVar6 + dVar6) * dVar6;
          local_2d0 = dVar6 * dVar8 - dVar9 * dVar2;
          local_2e8 = dVar6 * dVar9 + dVar2 * dVar8;
          local_300 = 1.0 - (dVar9 * dVar7 + dVar1 * dVar8);
          local_2d8 = 1.0 - (dVar9 * dVar7 + dVar10);
          local_2f0 = dVar8 * dVar7 - local_2e0;
          local_308 = dVar6 * dVar8 + dVar9 * dVar2;
          local_2e0 = dVar8 * dVar7 + local_2e0;
          local_2f8 = 1.0 - (dVar10 + dVar1 * dVar8);
          local_310 = dVar6 * dVar9 - dVar2 * dVar8;
          puVar19 = (undefined8 *)(lVar5 + 0x20 + lVar21);
          uVar4 = *puVar19;
          uVar11 = puVar19[1];
          uVar3 = *(undefined8 *)(lVar5 + 0x30 + lVar21);
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2b8 = 0;
          local_2b0 = 0x3ff0000000000000;
          FUN_146bfbbda(&local_2c8,&local_310);
          uVar16 = uStack_150;
          uVar15 = local_2b0;
          uVar14 = local_2b8;
          uVar13 = uStack_2c0;
          uVar12 = local_2c8;
          lVar22 = (longlong)(int)uStack_150;
          uVar17 = (int)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar17);
          if (uStack_150._4_4_ < uVar17) {
            FUN_146c8d502(&local_158,uVar16 & 0xffffffff);
          }
          uVar16 = uStack_140;
          lVar22 = lVar22 * 0x38;
          *(undefined8 *)(local_158 + lVar22) = uVar4;
          ((undefined8 *)(local_158 + lVar22))[1] = uVar11;
          *(undefined8 *)(local_158 + 0x10 + lVar22) = uVar3;
          *(undefined8 *)(local_158 + 0x18 + lVar22) = uVar12;
          *(undefined8 *)(local_158 + 0x20 + lVar22) = uVar13;
          *(undefined8 *)(local_158 + 0x28 + lVar22) = uVar14;
          *(undefined8 *)(local_158 + 0x30 + lVar22) = uVar15;
          uVar3 = *(undefined8 *)(lVar5 + 0x48 + lVar21);
          uVar4 = *(undefined8 *)(lVar5 + 0x50 + lVar21);
          lVar22 = (longlong)(int)uStack_140;
          uVar17 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar17);
          if (uStack_140._4_4_ < uVar17) {
            FUN_14489624a(&local_148,uVar16 & 0xffffffff);
          }
          *(undefined8 *)(local_148 + lVar22 * 0x10) = uVar3;
          *(undefined8 *)(local_148 + 8 + lVar22 * 0x10) = uVar4;
          lVar21 = lVar21 + 0x60;
        } while ((longlong)(int)lVar18 * 0x60 != lVar21);
      }
      local_138 = CONCAT11(param_6,param_7);
      local_1e0 = CONCAT11(local_1e0._1_1_,(char)param_2 == '\x02');
      local_190 = *local_1a0;
      uStack_188 = local_1a0[1];
      local_180 = local_1a0[2];
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_130 = (double)param_8;
      local_128 = (double)param_9;
      if (1.0 < param_11) {
        local_120 = (double)param_11;
        local_118 = CONCAT11(local_118._1_1_,1);
      }
      FUN_14831809a(&local_280);
      local_390 = local_2a8;
      local_288 = 0;
      local_398 = &local_328;
      local_328 = (undefined4)DAT_14c8464e0;
      uStack_324 = DAT_14c8464e0._4_4_;
      uStack_320 = (undefined4)DAT_14c8464e8;
      uStack_31c = DAT_14c8464e8._4_4_;
      local_318 = DAT_14c8464f0;
      puVar19 = local_388;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *puVar19 = *param_3;
        param_3 = param_3 + 1;
        puVar19 = puVar19 + 1;
      }
      FUN_143bb7d83(param_1,&local_280,local_388,param_2);
      FUN_148319084(&local_280);
      goto LAB_1485a669d;
    }
    local_280 = (undefined **)0x14af63b82;
    local_278[0] = 0x23;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar20 = L"AppendSweepPolygon: SweepPath array requires at least 2 positions";
  }
  FUN_140208bae(&local_280,&local_2c8,&local_310,pwVar20);
  FUN_143ba90d7(param_12,2,&local_280);
  if (local_280 != (undefined **)0x0) {
    (**(code **)(*local_280 + 0x10))();
  }
LAB_1485a669d:
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a6d4a FUN_1485a6d4a body=1517 status=ok
// SIG undefined FUN_1485a6d4a(void)

void FUN_1485a6d4a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined8 local_188;
  longlong local_178 [12];
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  longlong local_f8 [10];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 1;
  uStack_56 = 0;
  uStack_54 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8 + 8);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_f8[6] = 0;
  local_f8[7] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8 + 6);
  }
  plVar9 = local_f8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  local_f8[4] = 0;
  local_f8[5] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8 + 4);
  }
  plVar10 = local_f8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  local_f8[2] = 0;
  local_f8[3] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8 + 2);
  }
  plVar7 = local_f8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  plVar8 = local_f8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  local_fc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_fc);
  }
  iVar2 = local_fc;
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_10c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_1a8 = local_100;
  local_1a0 = local_104;
  local_198 = local_108;
  local_190 = local_10c;
  local_188 = local_118;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar5 = local_f8 + 8;
  plVar6 = local_178;
  for (lVar4 = 0xc; uVar3 = local_50, lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  local_1b0 = iVar2 != 0;
  local_1c8 = plVar10;
  local_1c0 = plVar7;
  local_1b8 = plVar8;
  FUN_1485a7338(local_50,CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT12(uStack_56,local_58))),
                local_178,plVar9);
  *param_3 = uVar3;
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a7338 FUN_1485a7338 body=2447 status=ok
// SIG undefined FUN_1485a7338(void)

longlong FUN_1485a7338(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      longlong *param_5,longlong param_6,longlong param_7,byte param_8,float param_9
                      ,float param_10,float param_11,float param_12,undefined8 param_13)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  undefined1 auStack_3b8 [32];
  undefined4 *local_398;
  undefined1 *local_390;
  undefined8 local_388 [12];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [32];
  undefined1 local_288;
  undefined **local_280;
  undefined4 local_278 [38];
  ushort local_1e0;
  longlong local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined4 local_134;
  double local_130;
  double local_128;
  double local_120;
  undefined2 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_1 == 0) {
    local_280 = (undefined **)0x14af6317e;
    local_278[0] = 0x1c;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar21 = L"AppendSweepPolyline: TargetMesh is Null";
  }
  else if ((int)param_4[1] < 2) {
    local_280 = (undefined **)0x14af6323c;
    local_278[0] = 0x22;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar21 = L"AppendSweepPolyline: Polyline array requires at least 2 positions";
  }
  else if ((int)param_5[1] < 2) {
    local_280 = (undefined **)0x14af63308;
    local_278[0] = 0x24;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar21 = L"AppendSweepPolyline: SweepPath array requires at least 2 positions";
  }
  else if (*(int *)(param_6 + 8) == (int)param_4[1] || *(int *)(param_6 + 8) == 0) {
    if ((*(int *)(param_7 + 8) == 0) || (*(int *)(param_7 + 8) == (int)param_5[1] + (uint)param_8))
    {
      dVar6 = cos((double)param_11 * -0.017453292519943295);
      dVar7 = sin((double)param_11 * -0.017453292519943295);
      memset(local_278,0,0x91);
      local_1e0 = 0x100;
      local_280 = &PTR_FUN_14ae73538;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = (undefined8 *)0x0;
      uStack_198 = 0;
      local_190 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_188 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_180 = DAT_14c8464f0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_134 = 1;
      local_130 = 1.0;
      local_128 = 1.0;
      local_120 = 1.0;
      local_118 = 0;
      local_114 = 0x42c80000;
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      lVar18 = param_4[1];
      if ((longlong)(int)lVar18 != 0) {
        lVar5 = *param_4;
        lVar19 = 0;
        do {
          uVar16 = uStack_1a8;
          dVar1 = *(double *)(lVar5 + lVar19);
          dVar2 = *(double *)(lVar5 + 8 + lVar19);
          lVar22 = (longlong)(int)uStack_1a8;
          uVar17 = (int)uStack_1a8 + 1;
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar17);
          if (uStack_1a8._4_4_ < uVar17) {
            FUN_14489624a(&local_1b0,uVar16 & 0xffffffff);
          }
          *(double *)(local_1b0 + lVar22 * 0x10) = dVar1 * dVar6 + dVar2 * -dVar7;
          *(double *)(local_1b0 + 8 + lVar22 * 0x10) = dVar7 * dVar1 + dVar6 * dVar2;
          lVar19 = lVar19 + 0x10;
        } while ((longlong)(int)lVar18 * 0x10 != lVar19);
      }
      lVar18 = param_5[1];
      if ((longlong)(int)lVar18 != 0) {
        lVar5 = *param_5;
        lVar19 = 0;
        do {
          uVar16 = uStack_198;
          puVar20 = (undefined8 *)(lVar5 + 0x20 + lVar19);
          uVar4 = *puVar20;
          uVar11 = puVar20[1];
          uVar3 = *(undefined8 *)(lVar5 + 0x30 + lVar19);
          lVar22 = (longlong)(int)uStack_198;
          uVar17 = (int)uStack_198 + 1;
          uStack_198 = CONCAT44(uStack_198._4_4_,uVar17);
          if (uStack_198._4_4_ < uVar17) {
            FUN_1403e3958(&local_1a0,uVar16 & 0xffffffff);
          }
          local_1a0[lVar22 * 3] = uVar4;
          (local_1a0 + lVar22 * 3)[1] = uVar11;
          local_1a0[lVar22 * 3 + 2] = uVar3;
          dVar6 = *(double *)(lVar5 + lVar19);
          dVar7 = *(double *)(lVar5 + 8 + lVar19);
          dVar1 = *(double *)(lVar5 + 0x10 + lVar19);
          dVar2 = *(double *)(lVar5 + 0x18 + lVar19);
          dVar9 = dVar7 + dVar7;
          dVar8 = dVar1 + dVar1;
          local_2e0 = dVar2 * (dVar6 + dVar6);
          dVar10 = (dVar6 + dVar6) * dVar6;
          local_2d0 = dVar6 * dVar8 - dVar9 * dVar2;
          local_2e8 = dVar6 * dVar9 + dVar2 * dVar8;
          local_300 = 1.0 - (dVar9 * dVar7 + dVar1 * dVar8);
          local_2d8 = 1.0 - (dVar9 * dVar7 + dVar10);
          local_2f0 = dVar8 * dVar7 - local_2e0;
          local_308 = dVar6 * dVar8 + dVar9 * dVar2;
          local_2e0 = dVar8 * dVar7 + local_2e0;
          local_2f8 = 1.0 - (dVar10 + dVar1 * dVar8);
          local_310 = dVar6 * dVar9 - dVar2 * dVar8;
          puVar20 = (undefined8 *)(lVar5 + 0x20 + lVar19);
          uVar4 = *puVar20;
          uVar11 = puVar20[1];
          uVar3 = *(undefined8 *)(lVar5 + 0x30 + lVar19);
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2b8 = 0;
          local_2b0 = 0x3ff0000000000000;
          FUN_146bfbbda(&local_2c8,&local_310);
          uVar16 = uStack_150;
          uVar15 = local_2b0;
          uVar14 = local_2b8;
          uVar13 = uStack_2c0;
          uVar12 = local_2c8;
          lVar22 = (longlong)(int)uStack_150;
          uVar17 = (int)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar17);
          if (uStack_150._4_4_ < uVar17) {
            FUN_146c8d502(&local_158,uVar16 & 0xffffffff);
          }
          uVar16 = uStack_140;
          lVar22 = lVar22 * 0x38;
          *(undefined8 *)(local_158 + lVar22) = uVar4;
          ((undefined8 *)(local_158 + lVar22))[1] = uVar11;
          *(undefined8 *)(local_158 + 0x10 + lVar22) = uVar3;
          *(undefined8 *)(local_158 + 0x18 + lVar22) = uVar12;
          *(undefined8 *)(local_158 + 0x20 + lVar22) = uVar13;
          *(undefined8 *)(local_158 + 0x28 + lVar22) = uVar14;
          *(undefined8 *)(local_158 + 0x30 + lVar22) = uVar15;
          uVar3 = *(undefined8 *)(lVar5 + 0x48 + lVar19);
          uVar4 = *(undefined8 *)(lVar5 + 0x50 + lVar19);
          lVar22 = (longlong)(int)uStack_140;
          uVar17 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar17);
          if (uStack_140._4_4_ < uVar17) {
            FUN_14489624a(&local_148,uVar16 & 0xffffffff);
          }
          *(undefined8 *)(local_148 + lVar22 * 0x10) = uVar3;
          *(undefined8 *)(local_148 + 8 + lVar22 * 0x10) = uVar4;
          lVar19 = lVar19 + 0x60;
        } while ((longlong)(int)lVar18 * 0x60 != lVar19);
      }
      local_1e0 = local_1e0 & 0xff;
      local_138 = CONCAT11(param_8,(undefined1)local_138);
      if (0 < *(int *)(param_6 + 8)) {
        FUN_144a67f5c(&local_110);
      }
      if (0 < *(int *)(param_7 + 8)) {
        FUN_144a67f5c(&local_100);
      }
      local_1e0 = CONCAT11(local_1e0._1_1_,(char)param_2 == '\x02');
      local_190 = *local_1a0;
      uStack_188 = local_1a0[1];
      local_180 = local_1a0[2];
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_130 = (double)param_9;
      local_128 = (double)param_10;
      if (1.0 < param_12) {
        local_120 = (double)param_12;
        local_118 = CONCAT11(local_118._1_1_,1);
      }
      FUN_14831809a(&local_280);
      local_390 = local_2a8;
      local_288 = 0;
      local_398 = &local_328;
      local_328 = (undefined4)DAT_14c8464e0;
      uStack_324 = DAT_14c8464e0._4_4_;
      uStack_320 = (undefined4)DAT_14c8464e8;
      uStack_31c = DAT_14c8464e8._4_4_;
      local_318 = DAT_14c8464f0;
      puVar20 = local_388;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *puVar20 = *param_3;
        param_3 = param_3 + 1;
        puVar20 = puVar20 + 1;
      }
      FUN_143bb7d83(param_1,&local_280,local_388,param_2);
      FUN_148319084(&local_280);
      goto LAB_1485a74c5;
    }
    local_280 = (undefined **)0x14af63552;
    local_278[0] = 0x24;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar21 = 
    L"AppendSweepPolyline: SweepPath Texture Parameter V array must be same length as SweepPath, or (length+1) for a closed loop"
    ;
  }
  else {
    local_280 = (undefined **)0x14af63412;
    local_278[0] = 0x24;
    FUN_1446e940c(&local_310,&local_280);
    local_280 = (undefined **)0x14af62310;
    local_278[0] = 0x2d;
    FUN_1446e940c(&local_2c8,&local_280);
    pwVar21 = 
    L"AppendSweepPolyline: Polyline Texture Parameter U array must be same length as PolylineVertices"
    ;
  }
  FUN_140208bae(&local_280,&local_2c8,&local_310,pwVar21);
  FUN_143ba90d7(param_13,2,&local_280);
  if (local_280 != (undefined **)0x0) {
    (**(code **)(*local_280 + 0x10))();
  }
LAB_1485a74c5:
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a7cc8 FUN_1485a7cc8 body=1154 status=ok
// SIG undefined FUN_1485a7cc8(void)

void FUN_1485a7cc8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_ac = 0x43b40000;
  uStack_a4 = (uint)uStack_a4._2_2_ << 0x10;
  uStack_a0 = 0x41f00000;
  local_9c = CONCAT22(local_9c._2_2_,0x100);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_bc = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_bd = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bd);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bd);
  }
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_178 = local_b0;
  local_170 = local_b4;
  local_168 = local_b8;
  local_160 = local_bc;
  local_158 = local_bd;
  local_150 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = (undefined4)local_ac;
  uStack_e4 = local_ac._4_4_;
  iStack_e0 = uStack_a4;
  uStack_dc = uStack_a0;
  local_d8 = local_9c;
  puVar3 = local_98;
  puVar4 = local_148;
  for (lVar2 = 0xc; uVar1 = local_30, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1485a814c(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))));
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a814c FUN_1485a814c body=569 status=ok
// SIG undefined FUN_1485a814c(void)

undefined8
FUN_1485a814c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 param_5,float param_6,undefined4 param_7,int param_8,char param_9,
             undefined8 param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  double *local_b0;
  int local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar8 = 3;
  if (3 < param_8) {
    iVar8 = param_8;
  }
  fVar11 = 1e-06;
  if (1e-06 <= param_6) {
    fVar11 = param_6;
  }
  uVar12 = 0;
  uVar13 = 0;
  FUN_1485ab348(&local_b0,(double)fVar11,iVar8,0);
  local_c8 = 0;
  uStack_c0 = 0;
  if (param_9 == '\x01') {
    dVar3 = (double)param_6;
  }
  else {
    uVar12 = (undefined4)DAT_14c8463f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
    dVar3 = DAT_14c8463f8;
  }
  if ((longlong)local_a8 != 0) {
    pdVar10 = local_b0 + (longlong)local_a8 * 2;
    pdVar6 = local_b0;
    do {
      uVar4 = uStack_c0;
      dVar1 = pdVar6[1];
      dVar2 = *pdVar6;
      lVar9 = (longlong)(int)uStack_c0;
      uVar5 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar5);
      if (uStack_c0._4_4_ < uVar5) {
        FUN_14489624a(&local_c8,uVar4 & 0xffffffff);
      }
      *(double *)(local_c8 + lVar9 * 0x10) = dVar2 + (double)CONCAT44(uVar13,uVar12);
      *(double *)(local_c8 + 8 + lVar9 * 0x10) = dVar1 + dVar3;
      pdVar6 = pdVar6 + 2;
    } while (pdVar6 != pdVar10);
  }
  local_d8 = param_4[4];
  local_168 = &local_e8;
  local_e8 = *param_4;
  uStack_e4 = param_4[1];
  uStack_e0 = param_4[2];
  uStack_dc = param_4[3];
  puVar7 = local_148;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  local_150 = param_10;
  local_158 = param_7;
  local_160 = param_5;
  FUN_1485a174a(param_1,param_2,local_148,&local_c8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a838e FUN_1485a838e body=768 status=ok
// SIG undefined FUN_1485a838e(void)

void FUN_1485a838e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 local_130;
  longlong local_128 [12];
  undefined8 local_c8;
  int local_bc;
  longlong local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 1;
  uStack_3e = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar6 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar1 = local_bc;
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_130 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = local_b8 + 2;
  plVar5 = local_128;
  for (lVar3 = 0xc; uVar2 = local_38, lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_138 = iVar1 != 0;
  FUN_1485a8690(local_38,CONCAT44(uStack_3c,CONCAT13(uStack_3d,CONCAT12(uStack_3e,local_40))),
                local_128,plVar6);
  *param_3 = uVar2;
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a8690 FUN_1485a8690 body=1803 status=ok
// SIG undefined FUN_1485a8690(void)

longlong FUN_1485a8690(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      char param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 uVar6;
  double *pdVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_408 [32];
  undefined4 *local_3e8;
  undefined1 *local_3e0;
  undefined8 local_3d8 [12];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  code *local_360;
  undefined8 *local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  void *local_328;
  ulonglong uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  ushort local_2f8;
  undefined1 local_2f6;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined8 local_2e4;
  longlong local_2d0;
  uint local_2c8;
  double *local_2a8;
  undefined8 uStack_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined1 local_270 [32];
  undefined1 local_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  void *local_1a8;
  int local_1a0;
  int local_19c;
  void *local_198;
  int local_190;
  int local_18c;
  undefined1 local_f8 [136];
  undefined4 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (param_1 == 0) {
    local_248 = L"AppendTriangulatedPolygon_InvalidInput";
    uStack_240 = 0x26;
    FUN_1446e940c(&local_328,&local_248);
    local_248 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    uStack_240 = 0x2d;
    FUN_1446e940c(&local_2d0,&local_248);
    pwVar12 = L"AppendTriangulatedPolygon: TargetMesh is Null";
  }
  else {
    lVar10 = param_4[1];
    if (2 < (longlong)(int)lVar10) {
      local_2a8 = (double *)0x0;
      uStack_2a0 = 0;
      lVar3 = *param_4;
      lVar9 = 0;
      do {
        uVar14 = uStack_2a0;
        puVar1 = (undefined4 *)(lVar3 + lVar9);
        local_248._0_4_ = *puVar1;
        local_248._4_4_ = puVar1[1];
        uStack_240 = puVar1[2];
        uStack_23c = puVar1[3];
        lVar13 = (longlong)(int)uStack_2a0;
        uVar5 = (int)uStack_2a0 + 1;
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar5);
        if (uStack_2a0._4_4_ < uVar5) {
          FUN_14489624a(&local_2a8,uVar14 & 0xffffffff);
        }
        pdVar7 = local_2a8 + lVar13 * 2;
        *(undefined4 *)pdVar7 = (undefined4)local_248;
        *(undefined4 *)((longlong)pdVar7 + 4) = local_248._4_4_;
        *(undefined4 *)(pdVar7 + 1) = uStack_240;
        *(undefined4 *)((longlong)pdVar7 + 0xc) = uStack_23c;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)(int)lVar10 * 0x10 != lVar9);
      FUN_148267e0c(&local_2d0,&local_2a8);
      local_308 = 0;
      uStack_300 = 0;
      local_318 = 0;
      uStack_310 = 0;
      local_328 = (void *)0x0;
      uStack_320 = 0;
      local_2f8 = 1;
      local_2f6 = 0;
      local_2f4 = 0;
      uStack_2f0 = 0;
      uStack_2ec = 0;
      iStack_2e8 = 0;
      local_2e4 = 0xffffffff00000000;
      if (param_5 == '\0') {
        FUN_148266a14(&local_328,&local_2d0);
      }
      else {
        local_350 = 1.79769313486232e+308;
        local_348 = 1.79769313486232e+308;
        local_340 = -1.79769313486232e+308;
        local_338 = -1.79769313486232e+308;
        if ((longlong)(int)uStack_2a0 != 0) {
          uVar15 = 0xffffffff;
          uVar16 = 0xffefffff;
          dVar17 = 1.79769313486232e+308;
          dVar18 = 1.79769313486232e+308;
          dVar19 = -1.79769313486232e+308;
          pdVar7 = local_2a8;
          do {
            dVar2 = *pdVar7;
            if (dVar2 < dVar17) {
              dVar17 = dVar2;
              local_350 = dVar2;
            }
            if ((double)CONCAT44(uVar16,uVar15) <= dVar2 && dVar2 != (double)CONCAT44(uVar16,uVar15)
               ) {
              uVar15 = SUB84(dVar2,0);
              uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
              local_340 = dVar2;
            }
            dVar2 = pdVar7[1];
            if (dVar2 < dVar18) {
              dVar18 = dVar2;
              local_348 = dVar2;
            }
            if (dVar19 < dVar2) {
              dVar19 = dVar2;
              local_338 = dVar2;
            }
            pdVar7 = pdVar7 + 2;
          } while (pdVar7 != local_2a8 + (longlong)(int)uStack_2a0 * 2);
        }
        FUN_1485ab442(&local_248,&local_350);
        local_2f4 = 0;
        local_2f8 = local_2f8 & 0xff00;
        local_2f6 = 1;
        uVar14 = (ulonglong)local_2c8;
        if (uVar14 != 0) {
          iVar8 = 1;
          lVar10 = 0;
          do {
            FUN_148279e70(&local_350,local_2d0 + lVar10,
                          ((longlong)iVar8 % (longlong)(int)local_2c8 & 0xffffffffU) * 0x10 +
                          local_2d0);
            local_278 = local_338 * local_330 + local_348;
            local_280 = local_330 * local_340 + local_350;
            local_288 = local_348 - local_338 * local_330;
            local_290 = local_350 - local_330 * local_340;
            local_3e8 = local_70;
            FUN_1485bc074(&local_248,&local_290,&local_280,0xffffffff);
            lVar10 = lVar10 + 0x10;
            iVar8 = iVar8 + 1;
          } while (uVar14 << 4 != lVar10);
        }
        FUN_1485ab58e(&local_328,&local_248);
        FUN_146bb6118(local_f8);
        FUN_1485bbfa6(&local_248);
      }
      local_248 = (wchar_t *)&local_2d0;
      local_358 = &local_248;
      local_360 = FUN_143bd9712;
      FUN_148268272(&local_328);
      if (iStack_2e8 == 0) {
        local_248 = L"AppendTriangulatedPolygon_Failed";
        uStack_240 = 0x20;
        FUN_1446e940c(&local_350,&local_248);
        local_248 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
        uStack_240 = 0x2d;
        FUN_1446e940c(&local_280,&local_248);
        FUN_140208bae(&local_248,&local_280,&local_350,
                      L"AppendTriangulatedPolygon: Failed to triangulate polygon");
        FUN_143ba90d7(param_6,3,&local_248);
        if (local_248 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_248 + 0x10))();
        }
      }
      else {
        FUN_146c5f010(&local_248);
        pvVar4 = local_328;
        iVar8 = (int)uStack_320;
        lVar10 = (longlong)(int)uStack_320;
        local_1a0 = (int)uStack_320;
        if ((int)uStack_320 == 0 && local_19c == 0) {
          local_19c = 0;
        }
        else {
          FUN_144721d4c(&local_1a8,uStack_320 & 0xffffffff);
          if (iVar8 != 0) {
            memcpy(local_1a8,pvVar4,lVar10 << 4);
          }
        }
        iVar8 = iStack_2e8;
        lVar10 = (longlong)iStack_2e8;
        pvVar4 = (void *)CONCAT44(uStack_2ec,uStack_2f0);
        local_190 = iStack_2e8;
        if (iStack_2e8 == 0 && local_18c == 0) {
          local_18c = 0;
        }
        else {
          FUN_148278bd0(&local_198,iStack_2e8);
          if (iVar8 != 0) {
            memcpy(local_198,pvVar4,lVar10 * 0xc);
          }
        }
        local_250 = 0;
        local_378 = (undefined4)DAT_14c8464e0;
        uStack_374 = DAT_14c8464e0._4_4_;
        uStack_370 = (undefined4)DAT_14c8464e8;
        uStack_36c = DAT_14c8464e8._4_4_;
        local_368 = DAT_14c8464f0;
        puVar11 = local_3d8;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar11 = *param_3;
          param_3 = param_3 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar6 = FUN_1429777f0(&local_248);
        local_3e8 = &local_378;
        local_3e0 = local_270;
        FUN_143bb7d83(param_1,uVar6,local_3d8,param_2);
        FUN_146c5f080(&local_248);
      }
      FUN_148267160(&local_328);
      FUN_148267ee4(&local_2d0);
      if (local_2a8 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1485a876d;
    }
    local_248 = L"AppendTriangulatedPolygon_InvalidPolygon";
    uStack_240 = 0x28;
    FUN_1446e940c(&local_328,&local_248);
    local_248 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    uStack_240 = 0x2d;
    FUN_1446e940c(&local_2d0,&local_248);
    pwVar12 = L"AppendTriangulatedPolygon: PolygonVertices array requires at least 3 positions";
  }
  FUN_140208bae(&local_248,&local_2d0,&local_328,pwVar12);
  FUN_143ba90d7(param_6,2,&local_248);
  if (local_248 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_248 + 0x10))();
  }
LAB_1485a876d:
  if ((local_60 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a8d9c FUN_1485a8d9c body=673 status=ok
// SIG undefined FUN_1485a8d9c(void)

void FUN_1485a8d9c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_118 [13];
  undefined8 local_b0;
  longlong local_a8 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 1;
  uStack_36 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8 + 2);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  plVar5 = local_a8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_128 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = local_a8 + 2;
  plVar4 = local_118;
  for (lVar2 = 0xc; uVar1 = local_30, lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  FUN_1485a903e(local_30,CONCAT44(uStack_34,CONCAT13(uStack_35,CONCAT12(uStack_36,local_38))),
                local_118,plVar5);
  *param_3 = uVar1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a903e FUN_1485a903e body=1650 status=ok
// SIG undefined FUN_1485a903e(void)

longlong FUN_1485a903e(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      undefined8 param_5)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_438 [32];
  undefined4 *local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 *local_400;
  undefined8 local_3f8 [12];
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  float local_374;
  float local_370;
  float local_36c;
  longlong local_368;
  undefined8 uStack_360;
  double *local_358;
  undefined8 uStack_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined1 local_2ae;
  wchar_t *local_2a0;
  undefined4 local_298;
  longlong local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if (param_1 == 0) {
    local_2a0 = L"AppendTriangulatedPolygon3D_InvalidInput";
    local_298 = 0x28;
    FUN_1446e940c(&local_2e8,&local_2a0);
    local_2a0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_298 = 0x2d;
    FUN_1446e940c(&local_300,&local_2a0);
    pwVar11 = L"AppendTriangulatedPolygon3D: TargetMesh is Null";
  }
  else {
    if (2 < (int)param_4[1]) {
      local_308 = DAT_14c8464f0;
      local_318 = (undefined4)DAT_14c8464e0;
      uStack_314 = DAT_14c8464e0._4_4_;
      uStack_310 = (undefined4)DAT_14c8464e8;
      uStack_30c = DAT_14c8464e8._4_4_;
      local_400 = param_3;
      FUN_146bd1842(param_4,&local_300);
      FUN_146bb5db8(&local_300,&local_330,&local_348);
      local_358 = (double *)0x0;
      uStack_350 = 0;
      FUN_1482113de(&local_358,(int)param_4[1],1);
      if (0 < (int)param_4[1]) {
        lVar4 = 8;
        lVar5 = 0x10;
        lVar7 = 0;
        do {
          lVar2 = *param_4;
          dVar16 = *(double *)(lVar2 + -0x10 + lVar5);
          dVar18 = *(double *)(lVar2 + -8 + lVar5);
          dVar17 = *(double *)(lVar2 + lVar5);
          *(double *)((longlong)local_358 + lVar4 + -8) =
               dVar17 * local_320 + dVar16 * local_330 + dVar18 * local_328;
          *(double *)((longlong)local_358 + lVar4) =
               local_338 * dVar17 + local_348 * dVar16 + local_340 * dVar18;
          lVar7 = lVar7 + 1;
          lVar4 = lVar4 + 0x10;
          lVar5 = lVar5 + 0x18;
        } while (lVar7 < (int)param_4[1]);
      }
      local_368 = 0;
      uStack_360 = 0;
      FUN_146bd1316(&local_358,&local_368,0);
      if ((longlong)(int)uStack_350 == 0) {
        uVar12 = 0xffffffff;
        uVar13 = 0xffefffff;
        uVar19 = 0xffffffff;
        uVar20 = 0x7fefffff;
        dVar14 = -1.79769313486232e+308;
        uVar21 = uVar19;
        uVar22 = uVar20;
      }
      else {
        dVar17 = 1.79769313486232e+308;
        dVar16 = -1.79769313486232e+308;
        dVar18 = 1.79769313486232e+308;
        pdVar6 = local_358;
        dVar15 = -1.79769313486232e+308;
        do {
          dVar1 = *pdVar6;
          uVar12 = SUB84(dVar1,0);
          uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar14 = pdVar6[1];
          uVar19 = uVar12;
          uVar20 = uVar13;
          if (dVar18 <= dVar1) {
            uVar19 = SUB84(dVar18,0);
            uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
          }
          if (dVar1 <= dVar16) {
            uVar12 = SUB84(dVar16,0);
            uVar13 = (undefined4)((ulonglong)dVar16 >> 0x20);
          }
          uVar21 = SUB84(dVar14,0);
          uVar22 = (undefined4)((ulonglong)dVar14 >> 0x20);
          if (dVar17 <= dVar14) {
            uVar21 = SUB84(dVar17,0);
            uVar22 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          if (dVar14 <= dVar15) {
            dVar14 = dVar15;
          }
          pdVar6 = pdVar6 + 2;
          dVar16 = (double)CONCAT44(uVar13,uVar12);
          dVar17 = (double)CONCAT44(uVar22,uVar21);
          dVar18 = (double)CONCAT44(uVar20,uVar19);
          dVar15 = dVar14;
        } while (pdVar6 != local_358 + (longlong)(int)uStack_350 * 2);
      }
      if (((uint)param_2 & 0xff0000) == 0x10000) {
        dVar14 = dVar14 - (double)CONCAT44(uVar22,uVar21);
        dVar14 = (double)(-(ulonglong)(0.0 <= dVar14) & (ulonglong)dVar14);
        dVar16 = (double)CONCAT44(uVar13,uVar12) - (double)CONCAT44(uVar20,uVar19);
        dVar16 = (double)(-(ulonglong)(0.0 <= dVar16) & (ulonglong)dVar16);
        if (dVar16 <= dVar14) {
          dVar16 = dVar14;
        }
        if (dVar16 <= 1e-08) {
          dVar16 = 1e-08;
        }
        dVar16 = 1.0 / dVar16;
      }
      else {
        dVar16 = 0.01;
      }
      local_418 = (undefined4 *)((ulonglong)local_418 & 0xffffffffffffff00);
      uVar8 = 0;
      FUN_1411b354a(&local_2a0,0,0,0);
      FUN_14582ed12(&local_2a0);
      if (0 < *(int *)(local_98 + 0x28)) {
        uVar8 = **(undefined8 **)(local_98 + 0x20);
      }
      if (*(int *)(local_98 + 0x38) < 1) {
        local_410 = 0;
      }
      else {
        local_410 = **(undefined8 **)(local_98 + 0x30);
      }
      local_36c = (float)local_2f0;
      local_370 = (float)local_2f8;
      local_374 = (float)local_300;
      local_408 = uVar8;
      if (0 < (int)param_4[1]) {
        lVar4 = 8;
        lVar7 = 0;
        lVar5 = 0;
        do {
          local_2d8 = *(undefined8 *)(*param_4 + 0x10 + lVar7);
          puVar9 = (undefined8 *)(*param_4 + lVar7);
          local_2e8 = *puVar9;
          uStack_2e0 = *(undefined4 *)(puVar9 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar9 + 0xc);
          local_2c8 = DAT_14c846338;
          local_2d0 = DAT_14c846330;
          local_2bc = DAT_14c846338;
          local_2c4 = DAT_14c846330;
          local_2b8 = DAT_14c84635c;
          local_2b0 = 0;
          local_2ae = 0;
          FUN_146c02208(&local_2a0,&local_2e8);
          FUN_146c2f9e2(local_410,&local_374);
          local_2e8 = CONCAT44((float)((*(double *)((longlong)local_358 + lVar4) -
                                       (double)CONCAT44(uVar22,uVar21)) * dVar16),
                               (float)((*(double *)((longlong)local_358 + lVar4 + -8) -
                                       (double)CONCAT44(uVar20,uVar19)) * dVar16));
          FUN_146c2d0a4(local_408,&local_2e8);
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x10;
          lVar7 = lVar7 + 0x18;
        } while (lVar5 < (int)param_4[1]);
      }
      lVar4 = local_368;
      lVar5 = (longlong)(int)uStack_360;
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          uStack_2e0 = *(undefined4 *)(lVar4 + 8 + lVar7);
          local_2e8 = *(undefined8 *)(lVar4 + lVar7);
          iVar3 = FUN_146c01152(&local_2a0,&local_2e8,0);
          if (-1 < iVar3) {
            FUN_146c01486(local_408,iVar3,&local_2e8,0);
            FUN_146c01580(local_410,iVar3);
          }
          lVar7 = lVar7 + 0xc;
        } while (lVar5 * 0xc != lVar7);
      }
      local_418 = &local_398;
      local_388 = DAT_14c8464f0;
      local_398 = (undefined4)DAT_14c8464e0;
      uStack_394 = DAT_14c8464e0._4_4_;
      uStack_390 = (undefined4)DAT_14c8464e8;
      uStack_38c = DAT_14c8464e8._4_4_;
      puVar9 = local_400;
      puVar10 = local_3f8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_143bb8bf2(param_1,&local_2a0,local_3f8,param_2);
      FUN_141082778(&local_2a0);
      if (local_368 != 0) {
        FUN_1400020a8();
      }
      if (local_358 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1485a912e;
    }
    local_2a0 = L"AppendTriangulatedPolygon3D_InvalidPolygon";
    local_298 = 0x2a;
    FUN_1446e940c(&local_2e8,&local_2a0);
    local_2a0 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_298 = 0x2d;
    FUN_1446e940c(&local_300,&local_2a0);
    pwVar11 = L"AppendTriangulatedPolygon3D: PolygonVertices array requires at least 3 positions";
  }
  FUN_140208bae(&local_2a0,&local_300,&local_2e8,pwVar11);
  FUN_143ba90d7(param_5,2,&local_2a0);
  if (local_2a0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2a0 + 0x10))();
  }
LAB_1485a912e:
  if ((local_80 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485a96b2 FUN_1485a96b2 body=1009 status=ok
// SIG undefined FUN_1485a96b2(void)

void FUN_1485a96b2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [12];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  void *local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0;
  longlong local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 1;
  uStack_46 = 0;
  uStack_44 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8 + 2);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  plVar6 = local_b8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = local_d8 & 0xffffff00;
  local_d0 = (void *)0x0;
  uStack_c8 = 0;
  local_c0 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  _Src = local_d0;
  uVar1 = local_118;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_110;
  uStack_174 = uStack_10c;
  uStack_170 = (undefined4)uStack_108;
  uStack_16c = uStack_108._4_4_;
  local_168 = (undefined4)uStack_100;
  uStack_164 = uStack_100._4_4_;
  uStack_160 = (undefined4)uStack_f8;
  uStack_15c = uStack_f8._4_4_;
  local_158 = (undefined4)uStack_f0;
  uStack_154 = uStack_f0._4_4_;
  uStack_150 = (undefined4)local_e8;
  uStack_14c = local_e8._4_4_;
  local_148 = (undefined4)uStack_e0;
  uStack_144 = uStack_e0._4_4_;
  uStack_140 = local_d8;
  uStack_13c = uStack_d4;
  local_138 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_c8;
  local_130 = (int)uStack_c8;
  if (lVar3 == 0) {
    local_12c = 0;
  }
  else {
    FUN_144a06ca8(&local_138,uStack_c8 & 0xffffffff,0);
    memcpy(local_138,_Src,lVar3 << 2);
  }
  local_1e8 = &local_178;
  local_128 = local_c0;
  plVar4 = local_b8 + 2;
  plVar5 = local_1d8;
  for (lVar3 = 0xc; uVar2 = local_40, lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_1e0 = uVar1;
  FUN_1485a9aa4(local_40,CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,local_48))),
                local_1d8,plVar6);
  *param_3 = uVar2;
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485a9aa4 FUN_1485a9aa4 body=1449 status=ok
// SIG undefined FUN_1485a9aa4(void)

longlong FUN_1485a9aa4(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                      float *param_5,undefined8 param_6)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  double *pdVar7;
  wchar_t *pwVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined1 *local_290;
  undefined8 local_288 [12];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  wchar_t **local_210;
  longlong *local_208;
  undefined8 *local_200;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  int local_150;
  int local_140;
  undefined1 local_10c [4];
  double *local_108;
  int local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  longlong local_98;
  undefined1 local_90;
  int local_8c;
  undefined1 local_88 [32];
  undefined1 local_68;
  ulonglong local_60;
  
  uVar2 = param_6;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_1 == 0) {
    local_1f8 = L"PrimitiveFunctions_AppendVoronoiDiagram2D_NullTarget";
    local_1f0 = 0x34;
    FUN_1446e940c(&local_a8,&local_1f8);
    local_1f8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_1f0 = 0x2d;
    FUN_1446e940c(&local_210,&local_1f8);
    pwVar8 = L"AppendVoronoiDiagram2D: TargetMesh is Null";
  }
  else {
    if (0 < *(int *)(param_4 + 1)) {
      local_a8 = 0;
      local_a0 = 0x100;
      local_9e = 0;
      local_98 = 0;
      local_90 = 0;
      local_8c = 1;
      local_b8 = 0;
      local_b0 = 0;
      local_c8 = *param_4;
      local_c0 = *(int *)(param_4 + 1);
      FUN_146baf7ca(&local_a8);
      if ((local_8c == 0) || (local_8c == 3)) {
        if (*(char *)(param_5 + 0xe) == '\0') {
          local_108 = (double *)*param_4;
          local_100 = *(int *)(param_4 + 1);
          if ((longlong)local_100 == 0) {
            local_100 = 0;
            local_e8 = -1.79769313486232e+308;
            local_f8 = 1.79769313486232e+308;
            local_f0 = 1.79769313486232e+308;
            local_e0 = -1.79769313486232e+308;
          }
          else {
            pdVar7 = local_108;
            dVar9 = -1.79769313486232e+308;
            dVar10 = -1.79769313486232e+308;
            dVar11 = 1.79769313486232e+308;
            dVar12 = 1.79769313486232e+308;
            do {
              local_e8 = *pdVar7;
              local_e0 = pdVar7[1];
              local_f8 = local_e8;
              if (dVar11 <= local_e8) {
                local_f8 = dVar11;
              }
              if (local_e8 <= dVar9) {
                local_e8 = dVar9;
              }
              local_f0 = local_e0;
              if (dVar12 <= local_e0) {
                local_f0 = dVar12;
              }
              if (local_e0 <= dVar10) {
                local_e0 = dVar10;
              }
              pdVar7 = pdVar7 + 2;
              dVar9 = local_e8;
              dVar10 = local_e0;
              dVar11 = local_f8;
              dVar12 = local_f0;
            } while (pdVar7 != local_108 + (longlong)local_100 * 2);
          }
        }
        else {
          local_e0 = *(double *)(param_5 + 10);
          local_e8 = *(double *)(param_5 + 8);
          local_f8 = *(double *)(param_5 + 2);
          local_f0 = *(double *)(param_5 + 4);
          local_108 = (double *)*param_4;
          local_100 = *(int *)(param_4 + 1);
        }
        local_298 = (undefined8 *)(double)*param_5;
        FUN_1485ab8a2(&local_d8,&local_108,*(undefined1 *)(param_5 + 0x14));
        if (local_d0 == 0) {
          local_1f8 = L"PrimitiveFunctions_AppendVoronoiDiagram2D_NoPolygons";
          local_1f0 = 0x34;
          FUN_1446e940c(&local_210,&local_1f8);
          local_1f8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
          local_1f0 = 0x2d;
          FUN_1446e940c(local_10c,&local_1f8);
          FUN_140208bae(&local_1f8,local_10c,&local_210,
                        L"AppendVoronoiDiagram2D: No Voronoi cells constructed");
          FUN_143ba90d7(uVar2,3,&local_1f8);
          if (local_1f8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_1f8 + 0x10))();
          }
        }
        else {
          FUN_146c5f010(&local_1f8);
          local_200 = &param_6;
          fVar1 = param_5[0x12];
          local_210 = &local_1f8;
          local_208 = &local_d8;
          if ((longlong)(int)fVar1 == 0) {
            if (0 < local_d0) {
              iVar5 = 0;
              do {
                FUN_143bb8d00(&local_210,iVar5);
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_d0);
            }
          }
          else {
            lVar3 = *(longlong *)(param_5 + 0x10);
            lVar4 = 0;
            do {
              FUN_143bb8d00(&local_210,*(undefined4 *)(lVar3 + lVar4));
              lVar4 = lVar4 + 4;
            } while ((longlong)(int)fVar1 * 4 != lVar4);
          }
          if ((2 < local_150) && (0 < local_140)) {
            local_68 = 0;
            local_228 = DAT_14c8464e0;
            uStack_220 = DAT_14c8464e8;
            local_218 = DAT_14c8464f0;
            puVar6 = local_288;
            for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = puVar6 + 1;
            }
            uVar2 = FUN_1429777f0(&local_1f8);
            local_290 = local_88;
            local_298 = &local_228;
            FUN_143bb7d83(param_1,uVar2,local_288,param_2);
          }
          FUN_146c5f080(&local_1f8);
        }
        FUN_1400d7bbd(local_d8,local_d0);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        local_1f8 = L"PrimitiveFunctions_AppendVoronoiDiagram2D_GenFailed";
        local_1f0 = 0x33;
        FUN_1446e940c(&local_210,&local_1f8);
        local_1f8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
        local_1f0 = 0x2d;
        FUN_1446e940c(&local_d8,&local_1f8);
        FUN_140208bae(&local_1f8,&local_d8,&local_210,
                      L"AppendVoronoiDiagram2D: Voronoi diagram generation failed");
        FUN_143ba90d7(uVar2,3,&local_1f8);
        if (local_1f8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_1f8 + 0x10))();
        }
      }
      if (local_98 != 0) {
        (**(code **)(local_98 + -0x10))(local_98 + -0x10);
      }
      goto LAB_1485a9caa;
    }
    local_1f8 = L"PrimitiveFunctions_AppendVoronoiDiagram2D_TooFewSites";
    local_1f0 = 0x35;
    FUN_1446e940c(&local_a8,&local_1f8);
    local_1f8 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_1f0 = 0x2d;
    FUN_1446e940c(&local_210,&local_1f8);
    pwVar8 = L"AppendVoronoiDiagram2D: VoronoiSites array requires at least 1 position";
  }
  FUN_140208bae(&local_1f8,&local_210,&local_a8,pwVar8);
  FUN_143ba90d7(uVar2,2,&local_1f8);
  if (local_1f8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f8 + 0x10))();
  }
LAB_1485a9caa:
  if (*(longlong *)(param_5 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485aa04e FUN_1485aa04e body=286 status=ok
// SIG undefined FUN_1485aa04e(void)

void FUN_1485aa04e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485aa16e(&local_30,local_1c);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aa16e FUN_1485aa16e body=107 status=ok
// SIG undefined FUN_1485aa16e(void)

longlong * FUN_1485aa16e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (1 < param_2) {
    FUN_14818212c(param_1,param_2 + -1);
    iVar3 = 1;
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14630406a(param_1,iVar1);
      }
      lVar2 = *param_1;
      *(int *)(lVar2 + (longlong)iVar1 * 8) = iVar3 + -1;
      *(int *)(lVar2 + 4 + (longlong)iVar1 * 8) = iVar3;
      iVar3 = iVar3 + 1;
    } while (param_2 != iVar3);
  }
  return param_1;
}



// FUNCTION 1485aa1da FUN_1485aa1da body=291 status=ok
// SIG undefined FUN_1485aa1da(void)

void FUN_1485aa1da(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485aa2fe(&local_30,local_1c,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aa2fe FUN_1485aa2fe body=130 status=ok
// SIG undefined FUN_1485aa2fe(void)

longlong * FUN_1485aa2fe(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (2 < param_2) {
    FUN_14818212c(param_1);
    iVar4 = param_2 + -1;
    iVar3 = param_3;
    iVar5 = 0;
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14630406a(param_1,iVar1);
      }
      lVar2 = *param_1;
      *(int *)(lVar2 + (longlong)iVar1 * 8) = iVar4 + param_3;
      *(int *)(lVar2 + 4 + (longlong)iVar1 * 8) = iVar3;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
      iVar4 = iVar5;
      iVar5 = iVar5 + 1;
    } while (param_2 != 0);
  }
  return param_1;
}



// FUNCTION 1485aa383 FUN_1485aa383 body=670 status=ok
// SIG undefined FUN_1485aa383(void)

void FUN_1485aa383(longlong *param_1,double *param_2,float param_3,double *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [32];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 local_d8;
  undefined4 local_d0;
  undefined ***local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  float local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = &local_f0;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0x3ff;
  local_d0 = 6;
  local_f0 = &PTR_FUN_14a418310;
  dVar12 = *param_2;
  dVar13 = param_2[1];
  dVar14 = param_2[2];
  dVar7 = *param_4 * param_2[8];
  dVar8 = param_4[1] * param_2[9];
  dVar20 = param_4[2] * param_2[10];
  dVar3 = param_2[3];
  dVar9 = dVar8 * dVar12 - dVar7 * dVar13;
  dVar10 = dVar20 * dVar13 - dVar8 * dVar14;
  dVar11 = dVar7 * dVar14 - dVar12 * dVar20;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar8 = (dVar14 * dVar10 - dVar12 * dVar9) + param_2[3] * dVar11 + dVar8 + param_2[5];
  local_b0 = dVar9 * dVar3 + dVar20 + (dVar11 * dVar12 - dVar10 * dVar13) + param_2[6];
  local_c0._8_4_ = SUB84(dVar8,0);
  local_c0._0_8_ = (dVar9 * dVar13 - dVar11 * dVar14) + dVar3 * dVar10 + dVar7 + param_2[4];
  local_c0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar17._0_8_ = ABS(param_2[8]);
  auVar17._8_8_ = ABS(param_2[9]);
  dVar3 = ABS(param_2[10]);
  auVar6._24_8_ = ABS(param_2[0xb]);
  auVar6._16_8_ = dVar3;
  auVar6._0_16_ = auVar17;
  auVar18 = minpd(auVar17,auVar6._8_16_);
  auVar19._8_4_ = SUB84(auVar17._0_8_,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)auVar17._0_8_ >> 0x20);
  auVar19 = minpd(auVar18,auVar19);
  local_a8 = (float)auVar19._0_8_ * param_3;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_140e25fd0(param_1,iVar4);
  }
  lVar5 = *param_1;
  lVar16 = (longlong)iVar4 * 0x50;
  *(undefined ***)(lVar5 + lVar16) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar5 + 8 + lVar16) = local_e8;
  *(ulonglong *)(lVar5 + 0xc + lVar16) = CONCAT44(uStack_e0,uStack_e4);
  *(undefined4 *)(lVar5 + 0x14 + lVar16) = uStack_dc;
  *(byte *)(lVar5 + 0x18 + lVar16) = *(byte *)(lVar5 + 0x18 + lVar16) & 0xfe | (byte)local_d8 & 1;
  *(undefined1 *)(lVar5 + 0x19 + lVar16) = local_d8._1_1_;
  *(undefined4 *)(lVar5 + 0x20 + lVar16) = 6;
  *(longlong *)(lVar5 + 0x28 + lVar16) = lVar5 + lVar16;
  *(undefined ***)(lVar5 + lVar16) = &PTR_FUN_14a418310;
  uVar15 = local_c0._8_8_;
  puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar16);
  *puVar1 = local_c0._0_8_;
  puVar1[1] = uVar15;
  puVar2 = (undefined4 *)(lVar5 + 0x3c + lVar16);
  *puVar2 = local_c0._12_4_;
  puVar2[1] = (undefined4)local_b0;
  puVar2[2] = local_b0._4_4_;
  puVar2[3] = local_a8;
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aa622 FUN_1485aa622 body=659 status=ok
// SIG undefined FUN_1485aa622(void)

longlong FUN_1485aa622(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      float param_5,int param_6,int param_7,char param_8,undefined8 param_9)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined1 *local_220;
  undefined8 local_210;
  undefined8 local_208;
  double local_200;
  undefined8 local_1f8 [13];
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  undefined **local_178;
  undefined4 local_170 [38];
  double local_d8;
  int local_d0;
  int local_cc;
  undefined1 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [32];
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1 == 0) {
    local_178 = (undefined **)0x14af62a78;
    local_170[0] = 0x26;
    FUN_1446e940c(local_bc,&local_178);
    local_178 = (undefined **)0x14af62310;
    local_170[0] = 0x2d;
    FUN_1446e940c(local_c0,&local_178);
    FUN_140208bae(&local_178,local_c0,local_bc,L"AppendSphereLatLong: TargetMesh is Null");
    FUN_143ba90d7(param_9,2,&local_178);
    if (local_178 != (undefined **)0x0) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
  else {
    memset(local_170,0,0x91);
    local_178 = &PTR_FUN_14af11230;
    fVar5 = 1e-06;
    if (1e-06 <= param_5) {
      fVar5 = param_5;
    }
    local_d8 = (double)fVar5;
    if (param_6 < 4) {
      param_6 = 3;
    }
    local_cc = 3;
    if (3 < param_7) {
      local_cc = param_7;
    }
    local_c8 = (char)param_3 == '\x02';
    local_d0 = param_6;
    FUN_14850e248(&local_178);
    dVar1 = DAT_14c8464f0;
    if (param_8 == '\x01') {
      dVar1 = (double)param_5;
    }
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    if (param_8 != '\x01') {
      uVar8 = (undefined4)DAT_14c8464e0;
      uVar9 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar6 = (undefined4)DAT_14c8464e8;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    }
    local_220 = local_b8;
    local_98 = 0;
    local_228 = &local_190;
    local_190 = CONCAT44(uVar9,uVar8);
    local_188 = CONCAT44(uVar7,uVar6);
    puVar3 = param_4;
    puVar4 = local_1f8;
    local_180 = dVar1;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_143bb7d83(param_1,&local_178,local_1f8,param_3);
    if (param_2 != 0) {
      local_210 = CONCAT44(uVar9,uVar8);
      local_208 = CONCAT44(uVar7,uVar6);
      local_200 = dVar1;
      FUN_1485aa383(param_2,param_4,param_5);
    }
    FUN_146bd8050(&local_178);
  }
  if ((local_90 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485aa8b6 FUN_1485aa8b6 body=768 status=ok
// SIG undefined FUN_1485aa8b6(void)

longlong FUN_1485aa8b6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      float param_5,int param_6,int param_7,int param_8,char param_9,
                      undefined8 param_10)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 *local_270;
  undefined8 local_260;
  undefined8 local_258;
  double local_250;
  undefined8 local_248 [13];
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  undefined **local_1c8;
  undefined4 local_1c0 [38];
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  float local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [32];
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_1 == 0) {
    local_1c8 = (undefined **)0x14af62b0e;
    local_1c0[0] = 0x22;
    FUN_1446e940c(local_bc,&local_1c8);
    local_1c8 = (undefined **)0x14af62310;
    local_1c0[0] = 0x2d;
    FUN_1446e940c(local_c0,&local_1c8);
    FUN_140208bae(&local_1c8,local_c0,local_bc,L"AppendSphereBox: TargetMesh is Null");
    FUN_143ba90d7(param_10,2,&local_1c8);
    if (local_1c8 != (undefined **)0x0) {
      (**(code **)(*local_1c8 + 0x10))();
    }
  }
  else {
    memset(local_1c0,0,0x91);
    local_128 = DAT_14c8464e0;
    uStack_120 = DAT_14c8464e8;
    local_118 = DAT_14c8464f0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_f8 = 0x3ff0000000000000;
    local_f0 = 0x3ff0000000000000;
    local_e8 = 0x3ff0000000000000;
    local_e0 = 0x3ff0000000000000;
    local_cc = 1;
    local_1c8 = &PTR_FUN_14ae75170;
    local_c4 = 1;
    local_d0 = param_8;
    if (param_8 < 1) {
      local_d0 = 0;
    }
    local_d4 = param_7;
    if (param_7 < 1) {
      local_d4 = 0;
    }
    local_c8 = 1e-06;
    if (1e-06 <= param_5) {
      local_c8 = param_5;
    }
    local_d8 = 0;
    if (0 < param_6) {
      local_d8 = param_6;
    }
    local_cb = (char)param_3 == '\x02';
    FUN_148397678(&local_1c8);
    dVar1 = DAT_14c8464f0;
    if (param_9 == '\x01') {
      dVar1 = (double)param_5;
    }
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    if (param_9 != '\x01') {
      uVar7 = (undefined4)DAT_14c8464e0;
      uVar8 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar5 = (undefined4)DAT_14c8464e8;
      uVar6 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    }
    local_270 = local_b8;
    local_98 = 0;
    local_278 = &local_1e0;
    local_1e0 = CONCAT44(uVar8,uVar7);
    local_1d8 = CONCAT44(uVar6,uVar5);
    puVar3 = param_4;
    puVar4 = local_248;
    local_1d0 = dVar1;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_143bb7d83(param_1,&local_1c8,local_248,param_3);
    if (param_2 != 0) {
      local_260 = CONCAT44(uVar8,uVar7);
      local_258 = CONCAT44(uVar6,uVar5);
      local_250 = dVar1;
      FUN_1485aa383(param_2,param_4,param_5);
    }
    FUN_146bd8050(&local_1c8);
  }
  if ((local_90 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485aabb7 FUN_1485aabb7 body=1318 status=ok
// SIG undefined FUN_1485aabb7(void)

longlong FUN_1485aabb7(longlong param_1,longlong param_2,undefined8 param_3,double *param_4,
                      float param_5,float param_6,int param_7,int param_8,int param_9,char param_10,
                      undefined8 param_11)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined1 *local_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined **local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined2 local_268;
  undefined4 local_260;
  undefined ***local_258;
  undefined1 local_250 [16];
  double local_240;
  double dStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  double local_218 [12];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined **local_198;
  undefined4 local_190 [38];
  double local_f8;
  double local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_1 == 0) {
    local_198 = (undefined **)0x14af62b98;
    local_190[0] = 0x20;
    FUN_1446e940c(&local_280,&local_198);
    local_198 = (undefined **)0x14af62310;
    local_190[0] = 0x2d;
    FUN_1446e940c(&local_d8,&local_198);
    FUN_140208bae(&local_198,&local_d8,&local_280,L"AppendCapsule: TargetMesh is Null");
    FUN_143ba90d7(param_11,2,&local_198);
    if (local_198 != (undefined **)0x0) {
      (**(code **)(*local_198 + 0x10))();
    }
  }
  else {
    memset(local_190,0,0x91);
    local_198 = &PTR_FUN_14ae75180;
    fVar9 = 1e-06;
    if (1e-06 <= param_5) {
      fVar9 = param_5;
    }
    local_f8 = (double)fVar9;
    fVar9 = 1e-06;
    if (1e-06 <= param_6) {
      fVar9 = param_6;
    }
    local_f0 = (double)fVar9;
    local_e8 = 2;
    if (2 < param_7) {
      local_e8 = param_7;
    }
    local_e4 = 3;
    if (3 < param_8) {
      local_e4 = param_8;
    }
    local_e0 = 0;
    if (0 < param_9) {
      local_e0 = param_9;
    }
    local_dc = (char)param_3 == '\x02';
    FUN_148397c72(&local_198);
    local_1b8 = DAT_14c8464e0;
    uStack_1b0 = DAT_14c8464e8;
    if (param_10 == '\0') {
      param_5 = param_6 * -0.5;
    }
    local_1a8 = (double)param_5;
    local_2a0 = local_b8;
    local_98 = 0;
    local_2a8 = &local_1b8;
    pdVar7 = param_4;
    pdVar8 = local_218;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
    FUN_143bb7d83(param_1,&local_198,local_218,param_3);
    if (param_2 != 0) {
      local_258 = &local_280;
      local_278 = 0;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26c = 2;
      local_268 = 0x3ff;
      local_260 = 6;
      local_280 = &PTR_FUN_14a1dee70;
      dStack_238 = (double)DAT_14c8464f8;
      uStack_230 = DAT_14c846500;
      uStack_228 = DAT_14c846508;
      local_220 = &DAT_3f8000003f800000;
      dVar10 = 0.0;
      if (param_10 != '\0') {
        dVar10 = local_f0 * 0.5 + local_f8;
      }
      dVar11 = param_4[8] * 0.0;
      dVar12 = param_4[9] * 0.0;
      dVar10 = dVar10 * param_4[10];
      local_d8 = *param_4;
      dStack_d0 = param_4[1];
      local_c8 = param_4[2];
      dStack_c0 = param_4[3];
      dVar3 = param_4[3];
      dVar13 = dVar12 * local_d8 - dVar11 * dStack_d0;
      dVar14 = dVar10 * dStack_d0 - dVar12 * local_c8;
      dVar15 = dVar11 * local_c8 - local_d8 * dVar10;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar12 = (local_c8 * dVar14 - local_d8 * dVar13) + param_4[3] * dVar15 + dVar12 + param_4[5];
      local_240 = dVar13 * dVar3 + dVar10 + (dVar15 * local_d8 - dVar14 * dStack_d0) + param_4[6];
      local_250._8_4_ = SUB84(dVar12,0);
      local_250._0_8_ =
           (dVar13 * dStack_d0 - dVar15 * local_c8) + dVar3 * dVar14 + dVar11 + param_4[4];
      local_250._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      FUN_1448052ee(&local_d8,&local_298);
      dStack_238 = local_298;
      uStack_230 = uStack_290;
      uStack_228 = local_288;
      dVar10 = ABS(param_4[8]);
      if (ABS(param_4[8]) <= ABS(param_4[9])) {
        dVar10 = ABS(param_4[9]);
      }
      local_220 = (undefined1 *)CONCAT44((float)(param_4[10] * local_f0),(float)(dVar10 * local_f8))
      ;
      iVar4 = *(int *)(param_2 + 0x28);
      *(uint *)(param_2 + 0x28) = iVar4 + 1U;
      if (*(uint *)(param_2 + 0x2c) < iVar4 + 1U) {
        FUN_1407e1e9e((longlong *)(param_2 + 0x20),iVar4);
      }
      lVar5 = *(longlong *)(param_2 + 0x20);
      lVar6 = (longlong)iVar4 * 0x68;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar5 + 8 + lVar6) = local_278;
      *(ulonglong *)(lVar5 + 0xc + lVar6) = CONCAT44(uStack_270,uStack_274);
      *(undefined4 *)(lVar5 + 0x14 + lVar6) = uStack_26c;
      *(byte *)(lVar5 + 0x18 + lVar6) = *(byte *)(lVar5 + 0x18 + lVar6) & 0xfe | (byte)local_268 & 1
      ;
      *(undefined1 *)(lVar5 + 0x19 + lVar6) = local_268._1_1_;
      *(undefined4 *)(lVar5 + 0x20 + lVar6) = 6;
      *(longlong *)(lVar5 + 0x28 + lVar6) = lVar5 + lVar6;
      *(undefined ***)(lVar5 + lVar6) = &PTR_FUN_14a1dee70;
      puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar6);
      *puVar1 = local_250._0_4_;
      puVar1[1] = local_250._4_4_;
      puVar1[2] = local_250._8_4_;
      puVar1[3] = local_250._12_4_;
      pdVar7 = (double *)(lVar5 + 0x40 + lVar6);
      *pdVar7 = local_240;
      pdVar7[1] = dStack_238;
      puVar2 = (undefined8 *)(lVar5 + 0x50 + lVar6);
      *puVar2 = uStack_230;
      puVar2[1] = uStack_228;
      *(undefined1 **)(lVar5 + 0x60 + lVar6) = local_220;
    }
    FUN_146bd8050(&local_198);
  }
  if ((local_90 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ab0de FUN_1485ab0de body=617 status=ok
// SIG undefined FUN_1485ab0de(void)

longlong FUN_1485ab0de(longlong param_1)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined4 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    iVar5 = 3;
    if (3 < *(int *)(param_1 + 0xd0)) {
      iVar5 = *(int *)(param_1 + 0xd0);
    }
    *(int *)(param_1 + 0xd0) = iVar5;
  }
  local_88 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  uStack_90 = 0;
  uStack_80 = 1;
  iVar6 = 0;
  FUN_14475e4ac(&local_88,0);
  *local_88 = *(undefined4 *)(param_1 + 0xe0);
  uStack_90 = CONCAT44(uStack_90._4_4_,1);
  FUN_14475e4ac(&local_98,0);
  *local_98 = 0;
  iVar5 = *(int *)(param_1 + 0xec);
  if (0 < iVar5) {
    do {
      uVar3 = uStack_80;
      fVar1 = *(float *)(param_1 + 0xe0);
      fVar2 = *(float *)(param_1 + 0xe4);
      lVar7 = (longlong)(int)uStack_80;
      uVar4 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
      if (uStack_80._4_4_ < uVar4) {
        FUN_14475e4ac(&local_88,uVar3 & 0xffffffff);
      }
      uVar3 = uStack_90;
      iVar6 = iVar6 + 1;
      fVar8 = (float)iVar6 / (float)(iVar5 + 1);
      local_88[lVar7] = (fVar2 - fVar1) * fVar8 + fVar1;
      fVar1 = *(float *)(param_1 + 0xe8);
      lVar7 = (longlong)(int)uStack_90;
      uVar4 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
      if (uStack_90._4_4_ < uVar4) {
        FUN_14475e4ac(&local_98,uVar3 & 0xffffffff);
      }
      local_98[lVar7] = fVar8 * fVar1;
      iVar5 = *(int *)(param_1 + 0xec);
    } while (iVar6 < iVar5);
  }
  uVar3 = uStack_80;
  lVar7 = (longlong)(int)uStack_80;
  uVar4 = (int)uStack_80 + 1;
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
  if (uStack_80._4_4_ < uVar4) {
    FUN_14475e4ac(&local_88,uVar3 & 0xffffffff);
  }
  uVar3 = uStack_90;
  local_88[lVar7] = *(undefined4 *)(param_1 + 0xe4);
  lVar7 = (longlong)(int)uStack_90;
  uVar4 = (int)uStack_90 + 1;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
  if (uStack_90._4_4_ < uVar4) {
    FUN_14475e4ac(&local_98,uVar3 & 0xffffffff);
  }
  local_98[lVar7] = *(undefined4 *)(param_1 + 0xe8);
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = local_98;
  local_b0 = (int)uStack_90;
  local_c8 = local_88;
  local_c0 = (int)uStack_80;
  FUN_1485bb3d8(param_1);
  if (local_98 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ab348 FUN_1485ab348 body=250 status=ok
// SIG undefined FUN_1485ab348(void)

longlong * FUN_1485ab348(longlong *param_1,double param_2,uint param_3,double param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1482113de(0,param_3,1);
  if (0 < (int)param_3) {
    lVar2 = 8;
    uVar3 = 0;
    do {
      dVar5 = ((double)(int)uVar3 / (double)(int)param_3) * 6.283185307179586 + param_4;
      dVar4 = sin(dVar5);
      dVar5 = cos(dVar5);
      lVar1 = *param_1;
      *(double *)(lVar1 + -8 + lVar2) = dVar5 * param_2;
      *(double *)(lVar1 + lVar2) = dVar4 * param_2;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (param_3 != uVar3);
  }
  return param_1;
}



// FUNCTION 1485ab442 FUN_1485ab442 body=332 status=ok
// SIG undefined FUN_1485ab442(void)

undefined8 * FUN_1485ab442(undefined8 *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  
  FUN_1483a3d76();
  *param_1 = &PTR_FUN_14af77de0;
  param_1[0x22] = 0x7fefffffffffffff;
  param_1[0x23] = 0x7fefffffffffffff;
  param_1[0x24] = 0xffefffffffffffff;
  param_1[0x25] = 0xffefffffffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  FUN_146bee4b2(param_1 + 0x27);
  dVar3 = (double)(-(ulonglong)(0.0 <= param_2[3] - param_2[1]) &
                  (ulonglong)(param_2[3] - param_2[1]));
  dVar2 = (double)(-(ulonglong)(0.0 <= param_2[2] - *param_2) & (ulonglong)(param_2[2] - *param_2));
  uVar1 = -(ulonglong)(dVar3 <= dVar2);
  dVar3 = (double)(~uVar1 & (ulonglong)dVar3 | uVar1 & (ulonglong)dVar2) * 0.015625;
  dVar2 = 1e-08;
  if (1e-08 <= dVar3) {
    dVar2 = dVar3;
  }
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x34),4000);
  param_1[0x39] = dVar2;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3b] = 0x3ee4f8b588e368f1;
  return param_1;
}



// FUNCTION 1485ab58e FUN_1485ab58e body=786 status=ok
// SIG undefined FUN_1485ab58e(void)

void FUN_1485ab58e(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_188 [36];
  int local_164;
  int local_160;
  longlong local_158 [3];
  uint local_13c;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined *local_e8;
  uint local_e0;
  int local_dc;
  code *local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong local_78 [4];
  int *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar9 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  local_158[0] = 0;
  local_158[1] = 0;
  FUN_144a1a59e(local_158,uVar9,1);
  if (0 < (int)uVar9) {
    uVar10 = 0;
    do {
      if (((longlong)uVar10 < (longlong)(*(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc)))
         && ((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_2 + 0x10) + (uVar10 >> 9 & 0x7fffff) * 8) +
                                (ulonglong)((uint)uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        *(int *)(local_158[0] + uVar10 * 4) = (int)param_1[1];
        FUN_148266644(param_2,&local_98,uVar10 & 0xffffffff);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(param_1,iVar2);
        }
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
        *puVar1 = local_98;
        puVar1[1] = uStack_94;
        puVar1[2] = uStack_90;
        puVar1[3] = uStack_8c;
      }
      else {
        *(undefined4 *)(local_158[0] + uVar10 * 4) = 0xffffffff;
      }
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  local_d8 = (code *)0x0;
  local_c8 = &PTR_DAT_14af7cbd0;
  local_e8 = &DAT_1485c1c6e;
  local_c0 = param_2;
  FUN_1485c1a7e(param_2 + 0xb0,&local_98);
  FUN_1485c19dc(&local_98,&local_e8);
  local_130 = *local_58 * 0x200 + local_58[1];
  local_118 = (longlong *)0x0;
  local_128[0] = 0;
  local_138 = local_58;
  local_12c = local_130;
  FUN_1485c1b4a(local_128,&local_98);
  if (local_e0 != local_130) {
    do {
      pcVar5 = local_d8;
      ppuVar8 = local_c8;
      if (local_c8 == (undefined **)0x0) {
        ppuVar8 = local_b8;
      }
      local_13c = local_e0;
      uVar6 = (**(code **)(*ppuVar8 + 8))();
      (*pcVar5)(&local_164,uVar6,&local_13c);
      uVar3 = *(undefined4 *)(local_158[0] + (longlong)local_160 * 4);
      uVar4 = *(undefined4 *)(local_158[0] + (longlong)local_164 * 4);
      iVar2 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
        FUN_146be54b8(param_1 + 2,iVar2);
      }
      *(ulonglong *)(param_1[2] + (longlong)iVar2 * 8) = CONCAT44(uVar3,uVar4);
      do {
        local_e0 = local_e0 + 1;
        if (local_dc <= (int)local_e0) break;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(local_e8 + 8) +
                                             (ulonglong)(local_e0 >> 9) * 8) +
                                           (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
    } while (local_130 != local_e0);
  }
  if (local_128[0] != 0) {
    plVar7 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar7 = local_108;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_d8 != (code *)0x0) {
    ppuVar8 = local_c8;
    if (local_c8 == (undefined **)0x0) {
      ppuVar8 = local_b8;
    }
    (**(code **)(*ppuVar8 + 0x10))();
  }
  if (CONCAT44(uStack_94,local_98) != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485ab8a2 FUN_1485ab8a2 body=258 status=ok
// SIG undefined FUN_1485ab8a2(void)

undefined8
FUN_1485ab8a2(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  longlong local_50;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_60 = 0;
  local_58 = 0x100;
  local_56 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 1;
  local_70 = 0;
  local_68 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_146baf7ca(&local_60);
  local_a8 = *param_4;
  uStack_a0 = param_4[1];
  local_98 = *(undefined4 *)(param_4 + 2);
  uStack_94 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_90 = *(undefined4 *)(param_4 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_c8 = &local_a8;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_c0 = param_5;
  FUN_146bb1aa8(&local_60,param_1,&local_b8,param_3);
  if (local_50 != 0) {
    (**(code **)(local_50 + -0x10))(local_50 + -0x10);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ab9ac FUN_1485ab9ac body=843 status=ok
// SIG undefined FUN_1485ab9ac(void)

void FUN_1485ab9ac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  uVar5 = local_48;
  local_f8 = local_b0;
  if (puVar4 != (undefined1 *)0x0) {
    local_f8 = puVar4;
  }
  local_100 = local_98;
  if (puVar3 != (undefined1 *)0x0) {
    local_100 = puVar3;
  }
  local_108 = local_80;
  if (puVar6 != (undefined1 *)0x0) {
    local_108 = puVar6;
  }
  puVar6 = &local_4d;
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  local_f0 = local_c8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_f0 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = local_58;
  local_e8 = local_68;
  uStack_e4 = uStack_64;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  FUN_1485abcf8(local_48,local_4c,puVar6);
  *param_3 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485abcf8 FUN_1485abcf8 body=182 status=ok
// SIG undefined FUN_1485abcf8(void)

longlong FUN_1485abcf8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &local_1c;
  local_58 = param_5;
  uStack_50 = param_6;
  local_48 = param_7;
  local_68 = param_3;
  local_40 = param_4;
  local_1c = param_2;
  if (param_1 == 0) {
    local_28 = DAT_14c8464f0;
    local_38 = DAT_14c8464e0;
    uStack_30 = DAT_14c8464e8;
  }
  else {
    FUN_143bda3fe(&local_38,&local_68,*(undefined8 *)(param_1 + 0x98));
  }
  *(undefined8 *)(param_8 + 4) = local_28;
  *param_8 = (undefined4)local_38;
  param_8[1] = local_38._4_4_;
  param_8[2] = (undefined4)uStack_30;
  param_8[3] = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485abdb6 FUN_1485abdb6 body=626 status=ok
// SIG undefined FUN_1485abdb6(void)

void FUN_1485abdb6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 *local_80;
  undefined1 local_69;
  longlong local_68 [5];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  uVar1 = local_38;
  local_80 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_80 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = plVar3;
  FUN_1485ac02a(local_38,local_3c,local_40,plVar2);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac02a FUN_1485ac02a body=191 status=ok
// SIG undefined FUN_1485ac02a(void)

longlong FUN_1485ac02a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 *param_6)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 **local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_4c;
  local_58 = &local_78;
  local_68 = param_5;
  local_60 = FUN_143bdb36c;
  *param_6 = 0;
  local_25 = 0;
  local_70 = param_4;
  local_4c = param_3;
  local_24 = param_2;
  if (param_1 != 0) {
    local_48 = &local_24;
    local_40 = param_6;
    local_38 = &local_25;
    local_30 = &local_60;
    FUN_1485c255e(&local_48,*(undefined8 *)(param_1 + 0x98));
  }
  *param_6 = local_25;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac0f0 FUN_1485ac0f0 body=386 status=ok
// SIG undefined FUN_1485ac0f0(void)

void FUN_1485ac0f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  uVar4 = local_30;
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ac274(local_30,puVar5,puVar6);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac274 FUN_1485ac274 body=109 status=ok
// SIG undefined FUN_1485ac274(void)

longlong FUN_1485ac274(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14856da48(param_2,1,0);
  *param_3 = 0;
  if (param_1 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_143bd9c0c(&local_30,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac2ee FUN_1485ac2ee body=463 status=ok
// SIG undefined FUN_1485ac2ee(void)

void FUN_1485ac2ee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  int local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar6 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar3 = local_4c;
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar5 = local_38;
  puVar7 = &local_4d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ac4be(local_38,puVar6,iVar3 != 0,puVar7);
  plVar4 = plStack_40;
  *param_3 = uVar5;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac4be FUN_1485ac4be body=123 status=ok
// SIG undefined FUN_1485ac4be(void)

longlong FUN_1485ac4be(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_3;
  FUN_14856dbf4(param_2,0);
  uVar1 = *param_2;
  *param_4 = 0;
  if (param_1 != 0) {
    local_40 = &local_21;
    local_38 = uVar1;
    local_30 = param_4;
    FUN_143bd9df2(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac540 FUN_1485ac540 body=459 status=ok
// SIG undefined FUN_1485ac540(void)

void FUN_1485ac540(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  puVar5 = &local_35;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  uVar4 = local_30;
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar6 = local_50;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ac70c(local_30,local_34,puVar5,puVar6);
  plVar3 = plStack_40;
  *param_3 = uVar4;
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac70c FUN_1485ac70c body=185 status=ok
// SIG undefined FUN_1485ac70c(void)

longlong FUN_1485ac70c(longlong param_1,undefined4 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 local_35;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14856da48(param_4,2,0);
  local_60 = &local_70;
  local_68 = FUN_143bdb5ee;
  *param_3 = 0;
  local_35 = 0;
  local_70 = param_4;
  local_34 = param_2;
  if (param_1 != 0) {
    local_58 = &local_34;
    local_48 = &local_35;
    local_40 = &local_68;
    local_50 = param_3;
    FUN_1485c255e(&local_58,*(undefined8 *)(param_1 + 0x98));
  }
  *param_3 = local_35;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac7cc FUN_1485ac7cc body=386 status=ok
// SIG undefined FUN_1485ac7cc(void)

void FUN_1485ac7cc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  uVar4 = local_30;
  puVar6 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ac950(local_30,puVar5,puVar6);
  plVar3 = plStack_38;
  *param_3 = uVar4;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac950 FUN_1485ac950 body=109 status=ok
// SIG undefined FUN_1485ac950(void)

longlong FUN_1485ac950(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14856da48(param_2,3,0);
  *param_3 = 0;
  if (param_1 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_143bda65e(&local_30,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ac9ca FUN_1485ac9ca body=463 status=ok
// SIG undefined FUN_1485ac9ca(void)

void FUN_1485ac9ca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  int local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar6 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar3 = local_4c;
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar5 = local_38;
  puVar7 = &local_4d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485acb9a(local_38,puVar6,iVar3 != 0,puVar7);
  plVar4 = plStack_40;
  *param_3 = uVar5;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485acb9a FUN_1485acb9a body=123 status=ok
// SIG undefined FUN_1485acb9a(void)

longlong FUN_1485acb9a(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_3;
  FUN_14856dde4(param_2,0);
  uVar1 = *param_2;
  *param_4 = 0;
  if (param_1 != 0) {
    local_40 = &local_21;
    local_38 = uVar1;
    local_30 = param_4;
    FUN_143bda826(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485acc16 FUN_1485acc16 body=555 status=ok
// SIG undefined FUN_1485acc16(void)

void FUN_1485acc16(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar5 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar4 = local_38;
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar6 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485ace42(local_38,puVar5,puVar7,puVar6);
  plVar3 = plStack_70;
  *param_3 = uVar4;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ace42 FUN_1485ace42 body=153 status=ok
// SIG undefined FUN_1485ace42(void)

longlong FUN_1485ace42(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14856dde4(param_3,0);
  FUN_14856dde4(param_4,0);
  if (((((*param_2 & 0xfd) == 0) || (*(longlong *)(param_2 + 8) == 0)) ||
      (*(int *)(*(longlong *)(param_2 + 8) + 8) < 1)) &&
     (local_40 = param_2, local_38 = param_3, local_30 = param_4, param_1 != 0)) {
    FUN_143bdabe2(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485acee2 FUN_1485acee2 body=186 status=ok
// SIG undefined FUN_1485acee2(void)

void FUN_1485acee2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if ((local_20 == 0) || (lVar1 = *(longlong *)(*(longlong *)(local_20 + 0x98) + 0x208), lVar1 == 0)
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(lVar1 + 0x48) != 0;
  }
  *param_3 = bVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485acfa4 FUN_1485acfa4 body=172 status=ok
// SIG undefined FUN_1485acfa4(void)

void FUN_1485acfa4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(local_20 + 0x98) + 0x1a8);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad058 FUN_1485ad058 body=184 status=ok
// SIG undefined FUN_1485ad058(void)

void FUN_1485ad058(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*(longlong *)(local_20 + 0x98) + 0x158) * 0x200 +
            *(int *)(*(longlong *)(local_20 + 0x98) + 0x15c) != 0;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad118 FUN_1485ad118 body=198 status=ok
// SIG undefined FUN_1485ad118(void)

void FUN_1485ad118(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (((local_20 == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(local_20 + 0x98) + 0x208), lVar1 == 0)) ||
     (*(int *)(lVar1 + 0x38) < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = **(longlong **)(lVar1 + 0x30) != 0;
  }
  *param_3 = bVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad1e6 FUN_1485ad1e6 body=186 status=ok
// SIG undefined FUN_1485ad1e6(void)

void FUN_1485ad1e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if ((local_20 == 0) || (lVar1 = *(longlong *)(*(longlong *)(local_20 + 0x98) + 0x208), lVar1 == 0)
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(lVar1 + 0x40) != 0;
  }
  *param_3 = bVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad2a8 FUN_1485ad2a8 body=178 status=ok
// SIG undefined FUN_1485ad2a8(void)

void FUN_1485ad2a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*(longlong *)(local_20 + 0x98) + 0x38) * 0x200 +
            *(int *)(*(longlong *)(local_20 + 0x98) + 0x3c) != 0;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad362 FUN_1485ad362 body=534 status=ok
// SIG undefined FUN_1485ad362(void)

void FUN_1485ad362(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [31];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  uVar2 = local_30;
  puVar3 = &local_51;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_98 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_98 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_40;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  FUN_1485ad57a(local_30,local_34,&local_88,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad57a FUN_1485ad57a body=160 status=ok
// SIG undefined FUN_1485ad57a(void)

longlong FUN_1485ad57a(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                      undefined4 *param_5)

{
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_1c;
  *param_4 = 0;
  local_48 = param_4;
  local_40 = param_3;
  local_1c = param_2;
  if (param_1 == 0) {
    local_28 = DAT_14c8463c8;
    local_38 = DAT_14c8463b8;
    uStack_30 = DAT_14c8463c0;
  }
  else {
    FUN_143bdb97c(&local_38,&local_50,*(undefined8 *)(param_1 + 0x98));
  }
  *(undefined8 *)(param_5 + 4) = local_28;
  *param_5 = (undefined4)local_38;
  param_5[1] = local_38._4_4_;
  param_5[2] = (undefined4)uStack_30;
  param_5[3] = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad622 FUN_1485ad622 body=851 status=ok
// SIG undefined FUN_1485ad622(void)

void FUN_1485ad622(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [31];
  undefined1 local_91;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_74;
  longlong local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_91 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e0);
  }
  lVar4 = local_70;
  local_50 = local_c8;
  if (puVar3 != (undefined1 *)0x0) {
    local_50 = puVar3;
  }
  local_60 = local_b0;
  if (puVar6 != (undefined1 *)0x0) {
    local_60 = puVar6;
  }
  local_48 = local_e0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_48 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = &local_f8;
  local_e8 = local_80;
  local_f8 = local_90;
  uStack_f4 = uStack_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  local_68 = &local_3c;
  local_3c = local_74;
  if (local_70 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143bdbdb2(&local_68,*(undefined8 *)(local_70 + 0x98));
  }
  puVar6 = &local_91;
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  *puVar6 = uVar5;
  *param_3 = lVar4;
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ad97c FUN_1485ad97c body=534 status=ok
// SIG undefined FUN_1485ad97c(void)

void FUN_1485ad97c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [31];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  uVar2 = local_30;
  puVar3 = &local_51;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_98 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_98 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_40;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  FUN_1485adb94(local_30,local_34,&local_88,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485adb94 FUN_1485adb94 body=138 status=ok
// SIG undefined FUN_1485adb94(void)

longlong FUN_1485adb94(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                      undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  uVar1 = (undefined4)DAT_14c8464e0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_1c;
  *(undefined8 *)(param_5 + 4) = DAT_14c8464f0;
  *param_5 = uVar1;
  param_5[1] = uVar2;
  param_5[2] = uVar3;
  param_5[3] = uVar4;
  local_30 = param_5;
  local_28 = param_3;
  local_1c = param_2;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143bda228(&local_38,*(undefined8 *)(param_1 + 0x98));
  }
  *param_4 = uVar5;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485adc26 FUN_1485adc26 body=626 status=ok
// SIG undefined FUN_1485adc26(void)

void FUN_1485adc26(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_68 [23];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  uVar2 = local_30;
  local_98 = &local_51;
  if (puVar1 != (undefined1 *)0x0) {
    local_98 = puVar1;
  }
  local_90 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_90 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_40;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  FUN_1485ade9a(local_30,local_34,local_38);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ade9a FUN_1485ade9a body=201 status=ok
// SIG undefined FUN_1485ade9a(void)

longlong FUN_1485ade9a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                      undefined1 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 *local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 **local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_4c;
  *param_6 = (undefined4)DAT_14c8463f0;
  param_6[1] = uVar1;
  param_6[2] = uVar2;
  param_6[3] = uVar3;
  local_58 = &local_78;
  local_70 = param_6;
  local_60 = FUN_143bdb4b8;
  *param_5 = 0;
  local_25 = 0;
  local_68 = param_4;
  local_4c = param_3;
  local_24 = param_2;
  if (param_1 != 0) {
    local_48 = &local_24;
    local_40 = param_5;
    local_38 = &local_25;
    local_30 = &local_60;
    FUN_1485c255e(&local_48,*(undefined8 *)(param_1 + 0x98));
  }
  *param_5 = local_25;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485adf6a FUN_1485adf6a body=627 status=ok
// SIG undefined FUN_1485adf6a(void)

void FUN_1485adf6a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_74 [19];
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_61 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_74);
  }
  uVar2 = local_30;
  local_b8 = &local_61;
  if (puVar1 != (undefined1 *)0x0) {
    local_b8 = puVar1;
  }
  local_b0 = local_74;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_b0 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_60;
  uStack_80 = uStack_58;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = local_40;
  FUN_1485ae1de(local_30,local_34);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae1de FUN_1485ae1de body=148 status=ok
// SIG undefined FUN_1485ae1de(void)

longlong FUN_1485ae1de(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined1 *param_5,undefined4 *param_6)

{
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_1c;
  *param_5 = 0;
  local_48 = param_5;
  local_50 = param_3;
  local_40 = param_4;
  local_1c = param_2;
  if (param_1 == 0) {
    local_38 = *param_4;
    uStack_30 = param_4[1];
  }
  else {
    FUN_143bdc1b0(&local_38,&local_58,*(undefined8 *)(param_1 + 0x98));
  }
  *param_6 = (undefined4)local_38;
  param_6[1] = local_38._4_4_;
  param_6[2] = (undefined4)uStack_30;
  param_6[3] = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae27a FUN_1485ae27a body=171 status=ok
// SIG undefined FUN_1485ae27a(void)

void FUN_1485ae27a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  uVar1 = 1;
  if (local_20 != 0) {
    uVar1 = FUN_146c047ec(*(undefined8 *)(local_20 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae32c FUN_1485ae32c body=171 status=ok
// SIG undefined FUN_1485ae32c(void)

void FUN_1485ae32c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_143bd98ba(*(undefined8 *)(local_20 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae3d8 FUN_1485ae3d8 body=319 status=ok
// SIG undefined FUN_1485ae3d8(void)

void FUN_1485ae3d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  undefined3 uStack_23;
  undefined4 local_20;
  undefined3 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_60 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_28 = 0;
  }
  else {
    FUN_143bd98ec(&local_58,*(undefined8 *)(local_60 + 0x98));
    local_78 = local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    uStack_80 = uStack_40;
    local_98 = local_58;
    uStack_90 = uStack_50;
    local_20 = local_27;
    uStack_1c = uStack_23;
  }
  param_3[8] = (undefined4)local_78;
  param_3[9] = local_78._4_4_;
  param_3[10] = (undefined4)uStack_70;
  param_3[0xb] = uStack_70._4_4_;
  param_3[4] = (undefined4)local_88;
  param_3[5] = local_88._4_4_;
  param_3[6] = (undefined4)uStack_80;
  param_3[7] = uStack_80._4_4_;
  *param_3 = (undefined4)local_98;
  param_3[1] = local_98._4_4_;
  param_3[2] = (undefined4)uStack_90;
  param_3[3] = uStack_90._4_4_;
  *(undefined1 *)(param_3 + 0xc) = local_28;
  *(undefined4 *)((longlong)param_3 + 0x31) = local_20;
  param_3[0xd] = CONCAT31(uStack_1c,local_20._3_1_);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae51e FUN_1485ae51e body=177 status=ok
// SIG undefined FUN_1485ae51e(void)

void FUN_1485ae51e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(longlong *)(*(longlong *)(local_20 + 0x98) + 0x208) != 0;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae5d0 FUN_1485ae5d0 body=281 status=ok
// SIG undefined FUN_1485ae5d0(void)

void FUN_1485ae5d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [23];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar1 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = &local_41;
  local_40 = FUN_143bd989a;
  FUN_140056680(local_58,L"Mesh is Null");
  FUN_1485b1087(&local_70,uVar1,local_58,&local_40);
  if (&local_70 == param_3) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_70;
    *(undefined4 *)(param_3 + 1) = local_68;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_64;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae6f0 FUN_1485ae6f0 body=316 status=ok
// SIG undefined FUN_1485ae6f0(void)

void FUN_1485ae6f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  puVar2 = &local_25;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485ae82e(local_20,local_24,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ae82e FUN_1485ae82e body=151 status=ok
// SIG undefined FUN_1485ae82e(void)

void FUN_1485ae82e(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 auStack_78 [39];
  undefined1 local_51;
  code *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_51;
  local_50 = FUN_143bdb018;
  *param_3 = 0;
  local_20 = 0;
  local_14 = param_2;
  if (param_1 != 0) {
    local_40 = &local_14;
    local_30 = &local_20;
    local_28 = &local_50;
    local_38 = param_3;
    FUN_1485c24ca(0,*(undefined8 *)(param_1 + 0x98));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20);
}



// FUNCTION 1485ae8c6 FUN_1485ae8c6 body=331 status=ok
// SIG undefined FUN_1485ae8c6(void)

void FUN_1485ae8c6(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485aea12(local_28,puVar1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aea12 FUN_1485aea12 body=112 status=ok
// SIG undefined FUN_1485aea12(void)

void FUN_1485aea12(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0.0;
  *param_2 = 0.0;
  if (param_1 != 0) {
    FUN_1482e1672(&local_30,*(undefined8 *)(param_1 + 0x98));
    *param_3 = (float)local_30;
    *param_2 = (float)local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aea84 FUN_1485aea84 body=505 status=ok
// SIG undefined FUN_1485aea84(void)

void FUN_1485aea84(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68 [6];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  lVar1 = local_48;
  puVar2 = &local_50;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_4c;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = local_68;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = 0;
  *puVar3 = 0;
  *(undefined8 *)(puVar4 + 4) = DAT_14c8464f0;
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = DAT_14c8464e0._4_4_;
  puVar4[2] = (undefined4)DAT_14c8464e8;
  puVar4[3] = DAT_14c8464e8._4_4_;
  local_40 = puVar2;
  local_38 = puVar3;
  local_30 = puVar4;
  if (lVar1 != 0) {
    FUN_143bd9986(&local_40,*(undefined8 *)(lVar1 + 0x98));
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aec7e FUN_1485aec7e body=171 status=ok
// SIG undefined FUN_1485aec7e(void)

void FUN_1485aec7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bd9b96(*(undefined8 *)(local_20 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aed2a FUN_1485aed2a body=185 status=ok
// SIG undefined FUN_1485aed2a(void)

void FUN_1485aed2a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  uVar2 = 0;
  if ((local_20 != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(local_20 + 0x98) + 0x208), plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0xc0))();
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aede4 FUN_1485aede4 body=171 status=ok
// SIG undefined FUN_1485aede4(void)

void FUN_1485aede4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bd9a00(*(undefined8 *)(local_20 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aee96 FUN_1485aee96 body=280 status=ok
// SIG undefined FUN_1485aee96(void)

void FUN_1485aee96(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_20 = &local_29;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_20 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bd9afc(&local_20,*(undefined8 *)(local_28 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485aefb0 FUN_1485aefb0 body=181 status=ok
// SIG undefined FUN_1485aefb0(void)

void FUN_1485aefb0(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(local_20 + 0x98) + 0x140) * 0x200 +
            *(int *)(*(longlong *)(local_20 + 0x98) + 0x144);
  }
  *param_3 = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af06c FUN_1485af06c body=314 status=ok
// SIG undefined FUN_1485af06c(void)

void FUN_1485af06c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  puVar2 = &local_25;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485af1a8(local_20,local_24,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af1a8 FUN_1485af1a8 body=150 status=ok
// SIG undefined FUN_1485af1a8(void)

undefined4 FUN_1485af1a8(longlong param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  code *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_49;
  local_48 = FUN_143bdb71a;
  *param_3 = 0;
  local_18 = 0xffffffff;
  local_14 = param_2;
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    local_38 = &local_14;
    local_28 = &local_18;
    local_20 = &local_48;
    local_30 = param_3;
    FUN_1485c25f0(&local_38,*(undefined8 *)(param_1 + 0x98));
    uVar1 = local_18;
  }
  local_18 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af240 FUN_1485af240 body=185 status=ok
// SIG undefined FUN_1485af240(void)

void FUN_1485af240(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  uVar2 = 0;
  if ((local_20 != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(local_20 + 0x98) + 0x208), plVar1 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0xa0))();
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af2fa FUN_1485af2fa body=175 status=ok
// SIG undefined FUN_1485af2fa(void)

void FUN_1485af2fa(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(local_20 + 0x98) + 0x20) * 0x200 +
            *(int *)(*(longlong *)(local_20 + 0x98) + 0x24);
  }
  *param_3 = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af3b0 FUN_1485af3b0 body=423 status=ok
// SIG undefined FUN_1485af3b0(void)

void FUN_1485af3b0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  local_30 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_30 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = &local_1c;
  local_1c = local_3c;
  if (local_38 == 0) {
    local_48 = DAT_14c8464f0;
    local_58 = DAT_14c8464e0;
    uStack_50 = DAT_14c8464e8;
  }
  else {
    FUN_143bda36e(&local_58,&local_30,*(undefined8 *)(local_38 + 0x98));
  }
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = (undefined4)local_58;
  param_3[1] = local_58._4_4_;
  param_3[2] = (undefined4)uStack_50;
  param_3[3] = uStack_50._4_4_;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af55e FUN_1485af55e body=419 status=ok
// SIG undefined FUN_1485af55e(void)

void FUN_1485af55e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  local_30 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_30 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = &local_1c;
  local_1c = local_3c;
  if (local_38 == 0) {
    local_48 = DAT_14cb4e158;
    local_50 = DAT_14cb4e150;
  }
  else {
    FUN_143bd9d50(&local_50,&local_30,*(undefined8 *)(local_38 + 0x98));
  }
  *(undefined4 *)(param_3 + 1) = local_48;
  *param_3 = local_50;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af708 FUN_1485af708 body=716 status=ok
// SIG undefined FUN_1485af708(void)

void FUN_1485af708(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_e8 [47];
  undefined1 local_b9;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [28];
  undefined4 local_6c;
  longlong local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_b9 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  lVar4 = local_68;
  local_48 = local_b8;
  if (puVar3 != (undefined1 *)0x0) {
    local_48 = puVar3;
  }
  local_50 = local_a0;
  if (puVar6 != (undefined1 *)0x0) {
    local_50 = puVar6;
  }
  local_58 = local_88;
  if (puVar2 != (undefined1 *)0x0) {
    local_58 = puVar2;
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = &local_3c;
  local_3c = local_6c;
  if (local_68 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143bdb862(&local_60,*(undefined8 *)(local_68 + 0x98));
  }
  puVar6 = &local_b9;
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  *puVar6 = uVar5;
  *param_3 = lVar4;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485af9dc FUN_1485af9dc body=913 status=ok
// SIG undefined FUN_1485af9dc(void)

void FUN_1485af9dc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_6d;
  undefined4 local_6c;
  longlong local_68;
  undefined4 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_6d = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6d);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_a8 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a0 = DAT_14c8464e0;
  uStack_98 = DAT_14c8464e8;
  local_90 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_78 = DAT_14c8464f0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_f8 = DAT_14c8464f0;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  local_f0 = DAT_14c8464e0;
  uStack_e8 = DAT_14c8464e8;
  local_e0 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c8 = DAT_14c8464f0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_148 = DAT_14c8464f0;
  local_158 = DAT_14c8464e0;
  uStack_150 = DAT_14c8464e8;
  local_140 = DAT_14c8464e0;
  uStack_138 = DAT_14c8464e8;
  local_130 = DAT_14c8464f0;
  local_128 = DAT_14c8464e0;
  uStack_120 = DAT_14c8464e8;
  local_118 = DAT_14c8464f0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  lVar5 = local_68;
  local_50 = &local_108;
  if (puVar4 != (undefined8 *)0x0) {
    local_50 = puVar4;
  }
  local_58 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    local_58 = puVar3;
  }
  local_48 = &local_158;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_48 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = &local_3c;
  local_3c = local_6c;
  if (local_68 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_143bdbafc(&local_60,*(undefined8 *)(local_68 + 0x98));
  }
  puVar7 = &local_6d;
  if (puVar2 != (undefined1 *)0x0) {
    puVar7 = puVar2;
  }
  *puVar7 = uVar6;
  *param_3 = lVar5;
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485afd74 FUN_1485afd74 body=594 status=ok
// SIG undefined FUN_1485afd74(void)

void FUN_1485afd74(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [27];
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_98 = local_70;
  if (puVar4 != (undefined1 *)0x0) {
    local_98 = puVar4;
  }
  puVar4 = local_58;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_3d;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  local_90 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_90 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485affc8(local_38,local_3c,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485affc8 FUN_1485affc8 body=114 status=ok
// SIG undefined FUN_1485affc8(void)

void FUN_1485affc8(longlong param_1,undefined4 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_14;
  local_28 = param_5;
  uStack_20 = param_6;
  local_40 = param_3;
  local_30 = param_4;
  local_14 = param_2;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bda0ce(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0042 FUN_1485b0042 body=674 status=ok
// SIG undefined FUN_1485b0042(void)

void FUN_1485b0042(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 local_71;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_71 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_90 = local_70;
  if (puVar3 != (undefined1 *)0x0) {
    local_90 = puVar3;
  }
  local_98 = local_60;
  if (puVar4 != (undefined1 *)0x0) {
    local_98 = puVar4;
  }
  puVar4 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  local_88 = &local_71;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_88 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b02e6(local_38,local_3c,local_40,puVar4);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b02e6 FUN_1485b02e6 body=193 status=ok
// SIG undefined FUN_1485b02e6(void)

void FUN_1485b02e6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 *param_7)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_60;
  code *local_58;
  undefined4 **local_50;
  undefined4 local_44;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code **local_28;
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_44;
  local_50 = &local_78;
  local_68 = param_5;
  uStack_60 = param_6;
  local_58 = FUN_143bdb230;
  *param_7 = 0;
  local_1d = 0;
  local_70 = param_4;
  local_44 = param_3;
  local_1c = param_2;
  if (param_1 != 0) {
    local_40 = &local_1c;
    local_38 = param_7;
    local_30 = &local_1d;
    local_28 = &local_58;
    FUN_1485c255e(&local_40,*(undefined8 *)(param_1 + 0x98));
  }
  *param_7 = local_1d;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b03ae FUN_1485b03ae body=692 status=ok
// SIG undefined FUN_1485b03ae(void)

void FUN_1485b03ae(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [43];
  undefined1 local_9d;
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined4 local_6c;
  longlong local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_7c);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_8c);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_9c);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_9d = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9d);
  }
  lVar4 = local_68;
  local_48 = local_9c;
  if (puVar3 != (undefined1 *)0x0) {
    local_48 = puVar3;
  }
  local_50 = local_8c;
  if (puVar6 != (undefined1 *)0x0) {
    local_50 = puVar6;
  }
  local_58 = local_7c;
  if (puVar2 != (undefined1 *)0x0) {
    local_58 = puVar2;
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = &local_3c;
  local_3c = local_6c;
  if (local_68 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_143bdc0e6(&local_60,*(undefined8 *)(local_68 + 0x98));
  }
  puVar6 = &local_9d;
  if (puVar2 != (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  *puVar6 = uVar5;
  *param_3 = lVar4;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0670 FUN_1485b0670 body=443 status=ok
// SIG undefined FUN_1485b0670(void)

void FUN_1485b0670(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_35 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_35);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_35);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_36 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_36);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_36);
  }
  puVar2 = &local_35;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_68 = &local_36;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b082c(&local_60,local_30,local_34,puVar2);
  *(undefined8 *)(param_3 + 8) = local_40;
  param_3[4] = local_50;
  param_3[5] = uStack_4c;
  param_3[6] = uStack_48;
  param_3[7] = uStack_44;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b082c FUN_1485b082c body=170 status=ok
// SIG undefined FUN_1485b082c(void)

undefined4 *
FUN_1485b082c(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_50;
  local_50 = param_5;
  local_48 = FUN_143bdad88;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_1 + 4) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *param_1 = (undefined4)DAT_14c8463f0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_4 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_14 = param_3;
  if (param_2 != 0) {
    local_38 = &local_14;
    local_20 = &local_48;
    local_30 = param_4;
    local_28 = param_1;
    FUN_1485c23f2(&local_38,*(undefined8 *)(param_2 + 0x98));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b08d8 FUN_1485b08d8 body=363 status=ok
// SIG undefined FUN_1485b08d8(void)

void FUN_1485b08d8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    plVar2 = local_38;
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_2 + 0x38);
    }
    FUN_146c08820(*(undefined8 *)(local_20 + 0x98),local_24,plVar2);
  }
  *param_3 = lVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0a44 FUN_1485b0a44 body=385 status=ok
// SIG undefined FUN_1485b0a44(void)

void FUN_1485b0a44(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined4 local_3c;
  longlong local_38;
  undefined4 *local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  lVar1 = local_38;
  local_28 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_28 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = &local_1c;
  local_1c = local_3c;
  if (local_38 != 0) {
    FUN_143bdab3c(&local_30,*(undefined8 *)(local_38 + 0x98));
  }
  *param_3 = lVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0bc6 FUN_1485b0bc6 body=169 status=ok
// SIG undefined FUN_1485b0bc6(void)

void FUN_1485b0bc6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(local_20 + 0x98) + 0x50);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0c76 FUN_1485b0c76 body=423 status=ok
// SIG undefined FUN_1485b0c76(void)

void FUN_1485b0c76(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  longlong local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  local_30 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_30 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = &local_1c;
  local_1c = local_3c;
  if (local_38 == 0) {
    local_48 = DAT_14c8464f0;
    local_58 = DAT_14c8464e0;
    uStack_50 = DAT_14c8464e8;
  }
  else {
    FUN_143bda78e(&local_58,&local_30,*(undefined8 *)(local_38 + 0x98));
  }
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = (undefined4)local_58;
  param_3[1] = local_58._4_4_;
  param_3[2] = (undefined4)uStack_50;
  param_3[3] = uStack_50._4_4_;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0e24 FUN_1485b0e24 body=229 status=ok
// SIG undefined FUN_1485b0e24(void)

void FUN_1485b0e24(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485b0f0a(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b0f0a FUN_1485b0f0a body=75 status=ok
// SIG undefined FUN_1485b0f0a(void)

undefined4 FUN_1485b0f0a(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || ((int)param_2 < 0)) ||
     (lVar1 = *(longlong *)(param_1 + 0x98),
     *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144) <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(ushort *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)(param_2 & 0x1ff) * 2) - 1;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(ushort)iVar2 < 0xfffe);
  }
  return uVar3;
}



// FUNCTION 1485b0f5c FUN_1485b0f5c body=229 status=ok
// SIG undefined FUN_1485b0f5c(void)

void FUN_1485b0f5c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1485b1042(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1042 FUN_1485b1042 body=66 status=ok
// SIG undefined FUN_1485b1042(void)

undefined4 FUN_1485b1042(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) || ((int)param_2 < 0)) ||
     (lVar1 = *(longlong *)(param_1 + 0x98),
     *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(ushort *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
             (ulonglong)(param_2 & 0x1ff) * 2) - 1;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),(ushort)iVar2 < 0xfffe);
  }
  return uVar3;
}



// FUNCTION 1485b1087 FUN_1485b1087 body=147 status=ok
// SIG undefined FUN_1485b1087(void)

longlong * FUN_1485b1087(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    *param_1 = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 1) = (int)param_3[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    local_28 = param_1;
    local_20 = param_4;
    FUN_1485c1e2c(&local_28,*(undefined8 *)(param_2 + 0x98));
    if (*param_3 != 0) {
      FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1152 FUN_1485b1152 body=512 status=ok
// SIG undefined FUN_1485b1152(void)

void FUN_1485b1152(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined4 uStack_31;
  undefined1 uStack_2d;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_3c = CONCAT13(local_3c._3_1_,0x20100);
  uStack_38 = 0x3e800000;
  uStack_34 = 0x202;
  uStack_32 = 2;
  uStack_31 = 0x1010101;
  uStack_2d = 1;
  uStack_2c = uStack_2c & 0xffffff00;
  uStack_28 = 0x14;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 5000;
  uStack_40 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = CONCAT44(uStack_44,local_48);
  local_58 = uStack_40;
  uStack_80 = CONCAT13((undefined1)uStack_31,CONCAT12(uStack_32,uStack_34));
  uStack_7c = CONCAT13(uStack_2d,uStack_31._1_3_);
  local_88 = local_3c;
  uStack_84 = uStack_38;
  uStack_78 = uStack_2c;
  uStack_74 = uStack_28;
  uStack_70 = uStack_24;
  FUN_1485b1354(local_20,&local_88,&local_60,local_50);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1354 FUN_1485b1354 body=300 status=ok
// SIG undefined FUN_1485b1354(void)

longlong FUN_1485b1354(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_4;
  if (param_1 == 0) {
    local_50 = L"ApplyUniformRemesh_InvalidInput";
    local_48._0_4_ = 0x1f;
    FUN_1446e940c(&local_80,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRemeshFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_80,L"ApplyUniformRemesh: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_80;
    local_70 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdc3ae;
    local_80 = param_2;
    local_78 = param_3;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b14a2 FUN_1485b14a2 body=235 status=ok
// SIG undefined FUN_1485b14a2(void)

void FUN_1485b14a2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b158e(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b158e FUN_1485b158e body=273 status=ok
// SIG undefined FUN_1485b158e(void)

longlong FUN_1485b158e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"CompactMesh_InvalidInput";
    local_48._0_4_ = 0x18;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"CompactMesh: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = &LAB_143bdc920;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b16a0 FUN_1485b16a0 body=500 status=ok
// SIG undefined FUN_1485b16a0(void)

void FUN_1485b16a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_32;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_32 = 0x100;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_32);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar2 = local_30;
  puVar4 = &local_3c;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  FUN_1485b1896(local_30,local_32,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1896 FUN_1485b1896 body=928 status=ok
// SIG undefined FUN_1485b1896(void)

/* WARNING: Removing unreachable block (ram,0x0001485b1c00) */
/* WARNING: Removing unreachable block (ram,0x0001485b1c0b) */
/* WARNING: Removing unreachable block (ram,0x0001485b1c25) */

longlong FUN_1485b1896(longlong param_1,undefined4 param_2,int *param_3,int *param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  undefined **local_218;
  undefined8 local_210;
  longlong *local_190;
  longlong *plStack_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  undefined1 local_10c [4];
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1 == 0) {
    local_218 = (undefined **)0x14af6dc9c;
    local_210._0_4_ = 0x1d;
    FUN_1446e940c(&local_108,&local_218);
    local_218 = (undefined **)0x14af6d3f0;
    local_210 = CONCAT44(local_210._4_4_,0x2a);
    FUN_1446e940c(local_10c,&local_218);
    FUN_140208bae(&local_218,local_10c,&local_108,L"FillAllMeshHoles: TargetMesh is Null");
    FUN_143ba90d7(param_5,2,&local_218);
    if (local_218 != (undefined **)0x0) {
      (**(code **)(*local_218 + 0x10))();
    }
  }
  else {
    plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149fab260;
    plVar1 = plVar5 + 2;
    local_228 = 0;
    FUN_1411b354a(plVar1,0,0,0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    local_220 = 1;
    local_228 = 1;
    FUN_146c005f0(plVar1,*(undefined8 *)(param_1 + 0x98),1,1);
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_e5 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    local_ed = 0;
    local_dc = &DAT_100000002;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_108 = plVar1;
    FUN_146c68b4c();
    FUN_14845abbc(&local_218);
    local_218 = &PTR_FUN_14af79090;
    local_180 = 3;
    local_178 = 0x3ff0000000000000;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 1;
    local_150 = 0x3fc999999999999a;
    local_148 = &DAT_200000002;
    local_140 = 2;
    local_138 = 0x3ff0000000000000;
    local_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    if (plVar5 == (longlong *)0x0) {
      plStack_188 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plStack_188 = plVar5;
    }
    local_190 = plVar1;
    FUN_1485b2ff6(&local_170,&uStack_100);
    if ((byte)param_2 < 5) {
      local_180 = (undefined1)(0x200010303 >> ((byte)param_2 * '\b' & 0x3f));
    }
    local_160 = CONCAT11(1,(byte)((uint)param_2 >> 8) & 1);
    FUN_14845ce02(&local_218,0);
    uVar4 = local_210;
    *param_4 = local_118;
    *param_3 = (int)uStack_168 - local_118;
    local_210 = 0;
    FUN_1484b1fb6(param_1,uVar4);
    FUN_1485b3046(&local_218);
    FUN_1482f1656(&local_108);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485b1c38 FUN_1485b1c38 body=349 status=ok
// SIG undefined FUN_1485b1c38(void)

void FUN_1485b1c38(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_3c = local_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x3f000000;
  uStack_2c = 0;
  uStack_28 = 0x358637bd;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_3c;
  uStack_64 = uStack_38;
  uStack_60 = uStack_34;
  uStack_5c = uStack_30;
  uStack_58 = uStack_2c;
  uStack_54 = uStack_28;
  uStack_50 = uStack_24;
  FUN_1485b1d96(local_20,&local_68,local_48);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1d96 FUN_1485b1d96 body=290 status=ok
// SIG undefined FUN_1485b1d96(void)

longlong FUN_1485b1d96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if (param_1 == 0) {
    local_50 = L"RemoveHiddenTriangles_InvalidInput";
    local_48._0_4_ = 0x22;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_78,&local_50);
    FUN_140208bae(&local_50,&local_78,&local_60,L"RemoveHiddenTriangles: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_78;
    local_70 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdce52;
    local_78 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b1eba FUN_1485b1eba body=340 status=ok
// SIG undefined FUN_1485b1eba(void)

void FUN_1485b1eba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0x38d1b71738d1b717;
  local_24 = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_2c;
  local_40 = local_24;
  FUN_1485b2010(local_20,&local_48,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2010 FUN_1485b2010 body=276 status=ok
// SIG undefined FUN_1485b2010(void)

longlong FUN_1485b2010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"RemoveSmallComponents_InvalidInput";
    local_48._0_4_ = 0x22;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_68,&local_50);
    FUN_140208bae(&local_50,&local_68,&local_60,L"RemoveSmallComponents: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdce02;
    local_68 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2126 FUN_1485b2126 body=235 status=ok
// SIG undefined FUN_1485b2126(void)

void FUN_1485b2126(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b2212(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2212 FUN_1485b2212 body=273 status=ok
// SIG undefined FUN_1485b2212(void)

longlong FUN_1485b2212(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_50 = L"RemoveUnusedVertices_InvalidInput";
    local_48._0_4_ = 0x21;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_60,L"RemoveUnusedVertices: TargetMesh is Null");
    FUN_143ba90d7(param_2,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = &LAB_143bdc92a;
    local_58 = local_64;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2324 FUN_1485b2324 body=359 status=ok
// SIG undefined FUN_1485b2324(void)

void FUN_1485b2324(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_40 = CONCAT31(local_40._1_3_,1);
  uStack_38 = 0x3f50624dd2f1a9fc;
  local_30 = 0x3f1a36e2eb1c432d;
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = (undefined4)uStack_38;
  uStack_5c = uStack_38._4_4_;
  local_58 = (undefined4)local_30;
  uStack_54 = local_30._4_4_;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  FUN_1485b248c(local_20,&local_68,local_48);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b248c FUN_1485b248c body=335 status=ok
// SIG undefined FUN_1485b248c(void)

longlong FUN_1485b248c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 **local_98;
  undefined1 **local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_61;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_50 = L"RepairMeshDegenerateGeometry_InvalidInput";
    local_48._0_4_ = 0x29;
    FUN_1446e940c(&local_a8,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_60,&local_50);
    FUN_140208bae(&local_50,&local_60,&local_a8,L"RepairMeshDegenerateGeometry: TargetMesh is Null")
    ;
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_a0 = &local_61;
    local_61 = 0;
    local_98 = &local_78;
    local_90 = &local_88;
    local_58 = &local_a8;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdd50e;
    local_a8 = param_2;
    local_88 = local_a0;
    local_80 = param_2;
    local_78 = local_a0;
    local_70 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b25dc FUN_1485b25dc body=309 status=ok
// SIG undefined FUN_1485b25dc(void)

void FUN_1485b25dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0x3a83126f;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b2712(local_20,local_24,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2712 FUN_1485b2712 body=305 status=ok
// SIG undefined FUN_1485b2712(void)

longlong FUN_1485b2712(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  code *local_60;
  undefined4 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  local_64 = param_2;
  if (param_1 == 0) {
    local_50 = L"ResolveMeshTJunctions_InvalidInput";
    local_48._0_4_ = 0x22;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_60,L"ResolveMeshTJunctions: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_80 = &local_64;
    local_58 = &local_80;
    local_78 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdcb10;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2844 FUN_1485b2844 body=338 status=ok
// SIG undefined FUN_1485b2844(void)

void FUN_1485b2844(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0x3a83126f;
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  local_24 = 5;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_28,local_2c);
  local_40 = local_24;
  FUN_1485b2998(local_20,&local_48,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2998 FUN_1485b2998 body=290 status=ok
// SIG undefined FUN_1485b2998(void)

longlong FUN_1485b2998(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if (param_1 == 0) {
    local_50 = L"SnapMeshOpenBoundaries_InvalidInput";
    local_48._0_4_ = 0x23;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_78,&local_50);
    FUN_140208bae(&local_50,&local_78,&local_60,L"SnapMeshOpenBoundaries: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_58 = &local_78;
    local_70 = &local_68;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdc932;
    local_78 = param_2;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2ac8 FUN_1485b2ac8 body=398 status=ok
// SIG undefined FUN_1485b2ac8(void)

void FUN_1485b2ac8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  iVar1 = local_38;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b2c58(local_30,iVar2 != 0,iVar1 != 0,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2c58 FUN_1485b2c58 body=299 status=ok
// SIG undefined FUN_1485b2c58(void)

longlong FUN_1485b2c58(longlong param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_62;
  undefined1 local_61;
  code *local_60;
  undefined1 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_62 = param_2;
  local_61 = param_3;
  if (param_1 == 0) {
    local_50 = L"SplitMeshBowties_InvalidInput";
    local_48._0_4_ = 0x1d;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_78,&local_50);
    FUN_140208bae(&local_50,&local_78,&local_60,L"SplitMeshBowties: TargetMesh is Null");
    FUN_143ba90d7(param_4,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_78 = &local_62;
    local_58 = &local_78;
    local_70 = &local_61;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdd460;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2d84 FUN_1485b2d84 body=315 status=ok
// SIG undefined FUN_1485b2d84(void)

void FUN_1485b2d84(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0x358637bd;
  uStack_24 = CONCAT31(uStack_24._1_3_,1);
  FUN_1446dcc8c();
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
  uVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485b2ec0(local_20,CONCAT44(uStack_24,local_28),local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2ec0 FUN_1485b2ec0 body=306 status=ok
// SIG undefined FUN_1485b2ec0(void)

longlong FUN_1485b2ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  local_68 = param_2;
  if (param_1 == 0) {
    local_50 = L"WeldMeshEdges_InvalidInput";
    local_48._0_4_ = 0x1a;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshRepairFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2a);
    FUN_1446e940c(&local_80,&local_50);
    FUN_140208bae(&local_50,&local_80,&local_60,L"WeldMeshEdges: TargetMesh is Null");
    FUN_143ba90d7(param_3,2,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
    local_80 = &local_68;
    local_58 = &local_80;
    local_78 = &local_70;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
    local_60 = FUN_143bdccd0;
    FUN_1484b8434(param_1,&local_60,&local_50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b2ff6 FUN_1485b2ff6 body=80 status=ok
// SIG undefined FUN_1485b2ff6(void)

longlong * FUN_1485b2ff6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146be9485(*param_1,(int)param_1[1]);
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



// FUNCTION 1485b3046 FUN_1485b3046 body=168 status=ok
// SIG undefined FUN_1485b3046(void)

void FUN_1485b3046(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14af79090;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_146be9485(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001485b30e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1485b30f4 FUN_1485b30f4 body=1010 status=ok
// SIG undefined FUN_1485b30f4(void)

void FUN_1485b30f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88 [4];
  undefined4 local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = &DAT_41200000;
  uStack_48 = 0;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68 = 0;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_60 = 0x4000000000000000;
  local_58 = 2;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_88[2] = 0;
  local_88[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  plVar3 = local_88 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar4 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_a0[0] = 0;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar5 = local_a0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  uVar2 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = CONCAT44(uStack_64,local_68);
  uStack_c0 = uStack_60;
  local_b8 = CONCAT62(uStack_56,local_58);
  local_e8 = (undefined4)local_50;
  uStack_e4 = local_50._4_4_;
  uStack_e0 = uStack_48;
  uStack_dc = uStack_44;
  local_d8 = local_40;
  local_f8 = local_a8;
  local_108 = plVar4;
  local_100 = puVar5;
  FUN_143bb907e(local_38,&local_e8,&local_c8,plVar3);
  plVar3 = plStack_90;
  *param_3 = uVar2;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_90 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b34e8 FUN_1485b34e8 body=681 status=ok
// SIG undefined FUN_1485b34e8(void)

void FUN_1485b34e8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = &DAT_41200000;
  uStack_40 = 0;
  local_38 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar4 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_70[0] = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar5 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  uVar3 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_48;
  uStack_94 = local_48._4_4_;
  uStack_90 = uStack_40;
  uStack_8c = uStack_3c;
  local_88 = local_38;
  local_a8 = local_78;
  FUN_143bb9420(local_30,&local_98,plVar4,puVar5);
  plVar4 = plStack_60;
  *param_3 = uVar3;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b3792 FUN_1485b3792 body=557 status=ok
// SIG undefined FUN_1485b3792(void)

void FUN_1485b3792(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined1 local_83;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_98[0] = 0x100;
  local_90 = 0x4046800000000000;
  local_88 = 1;
  local_87 = 0;
  local_83 = 0;
  local_80 = 0;
  uStack_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  local_c8 = local_60;
  uStack_c4 = uStack_5c;
  uStack_c0 = uStack_58;
  uStack_bc = uStack_54;
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = CONCAT71(uStack_3f,local_40);
  FUN_1485b39c0(plVar2,&local_d8,puVar1,local_a0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b39c0 FUN_1485b39c0 body=3867 status=ok
// SIG undefined FUN_1485b39c0(void)

void FUN_1485b39c0(longlong *param_1,double *param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  double *pdVar21;
  double *pdVar22;
  longlong lVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_218 [40];
  int *local_1f0;
  longlong *local_1e8;
  double *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  longlong *local_1c8 [2];
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  double *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 *local_178;
  undefined1 *local_170;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined4 local_140;
  undefined4 local_138;
  double local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  double local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_198 = (double *)0x0;
  uStack_190 = 0;
  local_1e8 = param_1;
  local_1d8 = param_4;
  if ((char)param_3[4] == '\x01') {
    local_148 = DAT_14c8463b0;
    local_158._0_4_ = (undefined4)DAT_14c8463a0;
    local_158._4_4_ = DAT_14c8463a0._4_4_;
    uStack_150._0_4_ = (undefined4)DAT_14c8463a8;
    uStack_150._4_4_ = DAT_14c8463a8._4_4_;
    uStack_190._0_4_ = 1;
    uStack_190._4_4_ = 0;
    FUN_1403e3958(&local_198,0);
    iVar13 = (uint)uStack_190;
    local_198[2] = local_148;
    *(undefined4 *)local_198 = (undefined4)local_158;
    *(undefined4 *)((longlong)local_198 + 4) = local_158._4_4_;
    *(undefined4 *)(local_198 + 1) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)local_198 + 0xc) = uStack_150._4_4_;
    dVar16 = -DAT_14c8463b0;
    dVar4 = (double)CONCAT44(DAT_14c8463a8._4_4_,(undefined4)DAT_14c8463a8);
    dVar26 = (double)CONCAT44(DAT_14c8463a0._4_4_,(undefined4)DAT_14c8463a0);
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,iVar13);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -dVar26;
    local_198[lVar23 * 3 + 1] = -dVar4;
    local_198[lVar23 * 3 + 2] = dVar16;
    local_148 = DAT_14c846398;
    local_158._0_4_ = (undefined4)DAT_14c846388;
    local_158._4_4_ = DAT_14c846388._4_4_;
    uStack_150._0_4_ = (undefined4)DAT_14c846390;
    uStack_150._4_4_ = DAT_14c846390._4_4_;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    uVar20 = (uint)uStack_190;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
      uVar20 = (uint)uStack_190;
    }
    local_198[lVar23 * 3 + 2] = local_148;
    pdVar3 = local_198 + lVar23 * 3;
    *(undefined4 *)pdVar3 = (undefined4)local_158;
    *(undefined4 *)((longlong)pdVar3 + 4) = local_158._4_4_;
    *(undefined4 *)(pdVar3 + 1) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)pdVar3 + 0xc) = uStack_150._4_4_;
    dVar16 = -DAT_14c846398;
    dVar4 = (double)CONCAT44(DAT_14c846390._4_4_,(undefined4)DAT_14c846390);
    dVar26 = (double)CONCAT44(DAT_14c846388._4_4_,(undefined4)DAT_14c846388);
    uStack_190._0_4_ = uVar20 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar20);
    }
    uVar17 = (uint)uStack_190;
    lVar23 = (longlong)(int)uVar20;
    local_198[lVar23 * 3] = -dVar26;
    local_198[lVar23 * 3 + 1] = -dVar4;
    local_198[lVar23 * 3 + 2] = dVar16;
    local_148 = DAT_14c8463c8;
    local_158 = (wchar_t *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_150 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    uVar20 = (uint)uStack_190;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
      uVar20 = (uint)uStack_190;
    }
    local_198[lVar23 * 3 + 2] = local_148;
    pdVar3 = local_198 + lVar23 * 3;
    *(undefined4 *)pdVar3 = (undefined4)local_158;
    *(undefined4 *)((longlong)pdVar3 + 4) = local_158._4_4_;
    *(undefined4 *)(pdVar3 + 1) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)pdVar3 + 0xc) = uStack_150._4_4_;
    dVar16 = -DAT_14c8463c8;
    dVar4 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    dVar26 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_190 = CONCAT44(uStack_190._4_4_,uVar20 + 1);
    if (uStack_190._4_4_ < uVar20 + 1) {
      FUN_1403e3958(&local_198,uVar20);
    }
    lVar23 = (longlong)(int)uVar20;
    local_198[lVar23 * 3] = -dVar26;
    local_198[lVar23 * 3 + 1] = -dVar4;
    local_198[lVar23 * 3 + 2] = dVar16;
  }
  if (*(char *)((longlong)param_3 + 0x11) == '\x01') {
    lVar23 = (longlong)(int)(uint)uStack_190;
    uVar17 = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < uVar17) {
      uVar19 = uStack_190 & 0xffffffff;
      uStack_190._0_4_ = uVar17;
      FUN_1403e3958(&local_198,uVar19);
      uVar17 = (uint)uStack_190;
    }
    uStack_190._0_4_ = uVar17;
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.5773502691896258;
    local_198[lVar23 * 3 + 1] = 0.5773502691896258;
    local_198[lVar23 * 3 + 2] = -0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -0.5773502691896258;
    local_198[lVar23 * 3 + 1] = 0.5773502691896258;
    local_198[lVar23 * 3 + 2] = -0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.5773502691896258;
    local_198[lVar23 * 3 + 1] = -0.5773502691896258;
    local_198[lVar23 * 3 + 2] = -0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    local_198[lVar23 * 3] = -0.5773502691896258;
    local_198[lVar23 * 3 + 1] = -0.5773502691896258;
    local_198[lVar23 * 3 + 2] = -0.5773502691896258;
  }
  if (*(char *)((longlong)param_3 + 0x12) == '\x01') {
    lVar23 = (longlong)(int)(uint)uStack_190;
    uVar17 = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < uVar17) {
      uVar19 = uStack_190 & 0xffffffff;
      uStack_190._0_4_ = uVar17;
      FUN_1403e3958(&local_198,uVar19);
      uVar17 = (uint)uStack_190;
    }
    uStack_190._0_4_ = uVar17;
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.5773502691896258;
    local_198[lVar23 * 3 + 1] = 0.5773502691896258;
    local_198[lVar23 * 3 + 2] = 0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -0.5773502691896258;
    local_198[lVar23 * 3 + 1] = 0.5773502691896258;
    local_198[lVar23 * 3 + 2] = 0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.5773502691896258;
    local_198[lVar23 * 3 + 1] = -0.5773502691896258;
    local_198[lVar23 * 3 + 2] = 0.5773502691896258;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    local_198[lVar23 * 3] = -0.5773502691896258;
    local_198[lVar23 * 3 + 1] = -0.5773502691896258;
    local_198[lVar23 * 3 + 2] = 0.5773502691896258;
  }
  if (*(char *)((longlong)param_3 + 0x13) == '\x01') {
    lVar23 = (longlong)(int)(uint)uStack_190;
    uVar17 = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < uVar17) {
      uVar19 = uStack_190 & 0xffffffff;
      uStack_190._0_4_ = uVar17;
      FUN_1403e3958(&local_198,uVar19);
      uVar17 = (uint)uStack_190;
    }
    uStack_190._0_4_ = uVar17;
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.0;
    local_198[lVar23 * 3 + 2] = -0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.0;
    local_198[lVar23 * 3 + 2] = -0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.0;
    local_198[lVar23 * 3 + 1] = -0.7071067811865475;
    local_198[lVar23 * 3 + 2] = -0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    local_198[lVar23 * 3] = 0.0;
    local_198[lVar23 * 3 + 1] = 0.7071067811865475;
    local_198[lVar23 * 3 + 2] = -0.7071067811865475;
  }
  local_1e0 = param_2;
  if ((char)param_3[5] == '\x01') {
    lVar23 = (longlong)(int)(uint)uStack_190;
    uVar17 = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < uVar17) {
      uVar19 = uStack_190 & 0xffffffff;
      uStack_190._0_4_ = uVar17;
      FUN_1403e3958(&local_198,uVar19);
      uVar17 = (uint)uStack_190;
    }
    uStack_190._0_4_ = uVar17;
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.0;
    local_198[lVar23 * 3 + 2] = 0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.0;
    local_198[lVar23 * 3 + 2] = 0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.0;
    local_198[lVar23 * 3 + 1] = -0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.7071067811865475;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    local_198[lVar23 * 3] = 0.0;
    local_198[lVar23 * 3 + 1] = 0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.7071067811865475;
  }
  if (*(char *)((longlong)param_3 + 0x15) == '\x01') {
    lVar23 = (longlong)(int)(uint)uStack_190;
    uVar17 = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < uVar17) {
      uVar19 = uStack_190 & 0xffffffff;
      uStack_190._0_4_ = uVar17;
      FUN_1403e3958(&local_198,uVar19);
      uVar17 = (uint)uStack_190;
    }
    uStack_190._0_4_ = uVar17;
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.0;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = -0.7071067811865475;
    local_198[lVar23 * 3 + 1] = 0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.0;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    uVar17 = (uint)uStack_190;
    local_198[lVar23 * 3] = 0.7071067811865475;
    local_198[lVar23 * 3 + 1] = -0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.0;
    lVar23 = (longlong)(int)(uint)uStack_190;
    uStack_190._0_4_ = (uint)uStack_190 + 1;
    if (uStack_190._4_4_ < (uint)uStack_190) {
      FUN_1403e3958(&local_198,uVar17);
    }
    local_198[lVar23 * 3] = -0.7071067811865475;
    local_198[lVar23 * 3 + 1] = -0.7071067811865475;
    local_198[lVar23 * 3 + 2] = 0.0;
  }
  local_1f0 = param_3;
  if ((longlong)param_3[8] != 0) {
    pdVar21 = *(double **)(param_3 + 6);
    pdVar3 = pdVar21 + (longlong)param_3[8] * 3;
    do {
      uVar19 = uStack_190;
      dVar16 = *pdVar21;
      dVar26 = pdVar21[1];
      dVar4 = pdVar21[2];
      dVar25 = dVar4 * dVar4 + dVar16 * dVar16 + dVar26 * dVar26;
      if (dVar25 <= 1e-08) {
        local_158 = L"ComputeRenderCaptureCamerasForBox";
        uStack_150._0_4_ = 0x21;
        FUN_1446e940c(local_1cc,&local_158);
        local_158 = L"UGeometryScriptLibrary_MeshSamplingFunctions";
        uStack_150 = (double)CONCAT44(uStack_150._4_4_,0x2c);
        FUN_1446e940c(local_1d0,&local_158);
        FUN_140208bae(local_1c8,local_1d0,local_1cc,
                      L"ComputeRenderCaptureCamerasForBox: Unable to normalize view direction for position ({0}, {1}, {2})"
                     );
        FUN_14023409e(&local_1b8,local_1c8,1);
        local_158 = (wchar_t *)CONCAT44(local_158._4_4_,3);
        local_148 = 0.0;
        local_140 = 0;
        local_138 = 3;
        local_128 = 0;
        local_120 = 0;
        local_118 = 3;
        local_108 = 0;
        local_100 = 0;
        local_170 = local_f8;
        local_178 = &local_158;
        uStack_150 = dVar16;
        local_130 = dVar26;
        local_110 = dVar4;
        FUN_14010d304(&local_168,&local_178);
        local_188 = local_1b8;
        local_180 = local_1b0;
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_1a8,&local_188,&local_168);
        FUN_14007f2db(local_168,local_160);
        if (local_168 != 0) {
          FUN_1400020a8();
        }
        lVar23 = 0x50;
        do {
          if (*(longlong **)((longlong)&local_158 + lVar23) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_158 + lVar23) + 0x10))();
            *(undefined8 *)((longlong)&local_158 + lVar23) = 0;
            *(undefined4 *)((longlong)&uStack_150 + lVar23) = 0;
          }
          plVar18 = local_1b0;
          lVar23 = lVar23 + -0x20;
        } while (lVar23 != -0x10);
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        if (local_1c8[0] != (longlong *)0x0) {
          (**(code **)(*local_1c8[0] + 0x10))();
        }
        FUN_143ba9449(local_1d8,2,local_1a8);
        if (local_1a8[0] != (longlong *)0x0) {
          (**(code **)(*local_1a8[0] + 0x10))();
        }
      }
      else {
        lVar23 = (longlong)(int)(uint)uStack_190;
        uVar17 = (uint)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar17);
        if (uStack_190._4_4_ < uVar17) {
          FUN_1403e3958(&local_198,uVar19 & 0xffffffff);
        }
        dVar25 = 1.0 / SQRT(dVar25);
        local_198[lVar23 * 3] = -dVar16 * dVar25;
        local_198[lVar23 * 3 + 1] = -dVar26 * dVar25;
        local_198[lVar23 * 3 + 2] = -dVar4 * dVar25;
      }
      pdVar21 = pdVar21 + 3;
    } while (pdVar21 != pdVar3);
  }
  pdVar3 = local_1e0;
  piVar2 = local_1f0;
  dVar16 = local_1e0[5];
  dVar26 = local_1e0[2];
  dVar4 = local_1e0[4];
  dVar25 = *local_1e0;
  dVar5 = local_1e0[1];
  dVar6 = local_1e0[3];
  fVar24 = tanf((float)*(double *)(local_1f0 + 2) * 0.017453292 * 0.5);
  if ((longlong)(int)(uint)uStack_190 != 0) {
    pdVar21 = local_198 + (longlong)(int)(uint)uStack_190 * 3;
    dVar16 = (dVar16 - dVar26) * 0.5;
    dVar26 = (dVar6 - dVar25) * 0.5;
    dVar4 = (dVar4 - dVar5) * 0.5;
    dVar26 = SQRT(dVar16 * dVar16 + dVar26 * dVar26 + dVar4 * dVar4);
    dVar16 = (double)(float)(dVar26 / (double)fVar24);
    plVar18 = local_1e8;
    pdVar22 = local_198;
    do {
      dVar4 = *pdVar22;
      dVar25 = pdVar22[1];
      iVar13 = *piVar2;
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      dVar5 = pdVar22[2];
      dVar6 = pdVar3[2];
      dVar7 = pdVar3[5];
      uVar8 = *(undefined8 *)(piVar2 + 2);
      dVar9 = pdVar3[1];
      dVar10 = pdVar3[4];
      dVar11 = *pdVar3;
      dVar12 = pdVar3[3];
      iVar14 = (int)plVar18[1];
      lVar23 = (longlong)iVar14;
      *(uint *)(plVar18 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar14 + 1U) {
        FUN_1485c2a4c(plVar18,iVar14);
        plVar18 = local_1e8;
      }
      lVar15 = *plVar18;
      *(int *)(lVar15 + lVar23 * 0x48) = iVar13;
      *(undefined8 *)(lVar15 + 8 + lVar23 * 0x48) = uVar8;
      *(double *)(lVar15 + 0x10 + lVar23 * 0x48) = (dVar11 + dVar12) * 0.5 - dVar4 * dVar16;
      *(double *)(lVar15 + 0x18 + lVar23 * 0x48) = (dVar9 + dVar10) * 0.5 - dVar25 * dVar16;
      *(double *)(lVar15 + 0x20 + lVar23 * 0x48) = (dVar6 + dVar7) * 0.5 - dVar5 * dVar16;
      *(double *)(lVar15 + 0x28 + lVar23 * 0x48) = dVar4;
      *(double *)(lVar15 + 0x30 + lVar23 * 0x48) = dVar25;
      *(double *)(lVar15 + 0x38 + lVar23 * 0x48) = dVar5;
      *(double *)(lVar15 + 0x40 + lVar23 * 0x48) = dVar16 - dVar26;
      pdVar22 = pdVar22 + 3;
    } while (pdVar22 != pdVar21);
  }
  if (local_198 != (double *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485b48dc FUN_1485b48dc body=492 status=ok
// SIG undefined FUN_1485b48dc(void)

void FUN_1485b48dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [7];
  
  local_58[6] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[4] = 0;
  local_58[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  plVar2 = local_58 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bb972c(plVar2,plVar1,plVar3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[6] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b4aca FUN_1485b4aca body=1189 status=ok
// SIG undefined FUN_1485b4aca(void)

void FUN_1485b4aca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98 [5];
  longlong *plStack_70;
  undefined4 local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = &DAT_41200000;
  uStack_48 = 0;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68 = 0;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_60 = 0x4000000000000000;
  local_58 = 2;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_98[4] = 0;
  plStack_70 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 4);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 2);
  }
  plVar3 = local_98 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  plVar4 = local_98;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_b0[0] = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar5 = local_b0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar2 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_98[4];
  local_c0 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  local_d8 = CONCAT62(uStack_56,local_58);
  local_e8 = CONCAT44(uStack_64,local_68);
  uStack_e0 = uStack_60;
  local_108 = (undefined4)local_50;
  uStack_104 = local_50._4_4_;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  local_f8 = local_40;
  local_110 = local_b8;
  local_128 = plVar3;
  local_120 = plVar4;
  local_118 = puVar5;
  FUN_143bb9dd6(local_38,&local_108,&local_e8,&local_c8);
  plVar3 = plStack_a0;
  *param_3 = uVar2;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b4f74 FUN_1485b4f74 body=111 status=ok
// SIG undefined FUN_1485b4f74(void)

void FUN_1485b4f74(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_146c81a14(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485b4fe4 FUN_1485b4fe4 body=592 status=ok
// SIG undefined FUN_1485b4fe4(void)

void FUN_1485b4fe4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148568536(&local_28);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_70 = local_28;
  local_68 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_143bba23c(&local_70,&local_60,puVar3,local_49);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b5236 FUN_1485b5236 body=485 status=ok
// SIG undefined FUN_1485b5236(void)

void FUN_1485b5236(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_49;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  FUN_148568536(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  lVar2 = local_48[2];
  puVar4 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bb66e6(local_48[2],plVar3,local_49,puVar4);
  *param_3 = lVar2;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b541c FUN_1485b541c body=532 status=ok
// SIG undefined FUN_1485b541c(void)

void FUN_1485b541c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
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
  local_40[0] = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  FUN_148568536(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  uVar4 = local_28;
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70[0] = local_40[0];
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_143bba2da(local_28,local_70,local_41,puVar5);
  *param_3 = uVar4;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b5632 FUN_1485b5632 body=565 status=ok
// SIG undefined FUN_1485b5632(void)

void FUN_1485b5632(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar4 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_91 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  FUN_148568536(local_a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  uVar3 = local_90;
  puVar5 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bba66c(local_90,puVar4,local_91,puVar5);
  *param_3 = uVar3;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b586e FUN_1485b586e body=610 status=ok
// SIG undefined FUN_1485b586e(void)

void FUN_1485b586e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar4 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_50 != 0;
  FUN_143bbae20(local_28,&local_60,puVar4,local_49);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b5ad2 FUN_1485b5ad2 body=523 status=ok
// SIG undefined FUN_1485b5ad2(void)

void FUN_1485b5ad2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_59;
  longlong local_58 [3];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(&local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  uVar2 = local_30;
  puVar4 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_40;
  local_68 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_143bbc3ca(local_30,&local_70,plVar3,puVar4);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b5cde FUN_1485b5cde body=637 status=ok
// SIG undefined FUN_1485b5cde(void)

void FUN_1485b5cde(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(&local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar6 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_5a = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5a);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_40;
  local_68 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_78 = local_5a;
  FUN_143bbc42c(local_30,&local_70,puVar5,puVar6);
  plVar3 = plStack_48;
  *param_3 = uVar4;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b5f62 FUN_1485b5f62 body=296 status=ok
// SIG undefined FUN_1485b5f62(void)

void FUN_1485b5f62(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  int local_24;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148568536(&local_20);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_30 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_1485b608c(&local_38,local_24 != 0);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b608c FUN_1485b608c body=71 status=ok
// SIG undefined FUN_1485b608c(void)

void FUN_1485b608c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 == '\0') {
    FUN_143baa190(param_1);
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001485b60c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485b60e0 FUN_1485b60e0 body=715 status=ok
// SIG undefined FUN_1485b60e0(void)

void FUN_1485b60e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_70;
  longlong *local_68;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(&local_40);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_148568536(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar5 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar3 = local_58;
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_40;
  local_68 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_80 = local_5c != 0;
  local_88 = iVar3 != 0;
  FUN_143bbccf4(local_30,&local_70,puVar5,local_54);
  *param_3 = uVar4;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b63ac FUN_1485b63ac body=522 status=ok
// SIG undefined FUN_1485b63ac(void)

void FUN_1485b63ac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar4 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_143bbdc62(local_28,&local_60,puVar4,local_49);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b65b8 FUN_1485b65b8 body=400 status=ok
// SIG undefined FUN_1485b65b8(void)

void FUN_1485b65b8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148568536(&local_30);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  puVar3 = &local_31;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
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
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_1485b674a(&local_48,puVar3,puVar4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b674a FUN_1485b674a body=89 status=ok
// SIG undefined FUN_1485b674a(void)

void FUN_1485b674a(longlong *param_1,undefined1 *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  
  uVar4 = FUN_143ba9b82();
  *param_2 = uVar4;
  *param_3 = *(int *)(*param_1 + 0x10) - *(int *)(*param_1 + 0x3c);
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001485b6796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485b67a4 FUN_1485b67a4 body=497 status=ok
// SIG undefined FUN_1485b67a4(void)

void FUN_1485b67a4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
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
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  puVar3 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
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
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_143bbe210(local_28,&local_50,puVar3,puVar4);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b699c FUN_1485b699c body=530 status=ok
// SIG undefined FUN_1485b699c(void)

void FUN_1485b699c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  int local_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(&local_38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar4 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_143bbe28c(local_28,&local_60,puVar4,local_4c != 0);
  *param_3 = uVar3;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b6bb0 FUN_1485b6bb0 body=298 status=ok
// SIG undefined FUN_1485b6bb0(void)

void FUN_1485b6bb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  uVar3 = local_28;
  puVar4 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bbe362(local_28,puVar4);
  *param_3 = uVar3;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b6ce2 FUN_1485b6ce2 body=770 status=ok
// SIG undefined FUN_1485b6ce2(void)

void FUN_1485b6ce2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  int local_68;
  undefined1 local_61;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar5 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_61 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar3 = local_68;
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  local_78 = local_48;
  local_a0 = iVar3 != 0;
  local_98 = local_6c;
  local_a8 = local_61;
  FUN_143bbf026(local_30,puVar5,&local_88,local_60);
  *param_3 = uVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b6fec FUN_1485b6fec body=726 status=ok
// SIG undefined FUN_1485b6fec(void)

void FUN_1485b6fec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_84;
  int local_80;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar5 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  iVar3 = local_80;
  local_84 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  local_b8 = local_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  local_a8 = local_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  local_98 = CONCAT71(uStack_47,local_48);
  local_d8 = iVar3 != 0;
  local_d0 = local_84;
  FUN_143bbfeca(local_30,puVar5,&local_c8,local_79);
  *param_3 = uVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b72cc FUN_1485b72cc body=1100 status=ok
// SIG undefined FUN_1485b72cc(void)

void FUN_1485b72cc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_138 [12];
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined1 local_b9;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_148568536(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar8 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_b9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  local_c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  iVar3 = local_c0;
  local_c8 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d4);
  }
  local_168 = local_b9;
  local_158 = local_c8;
  local_150 = local_d0;
  local_148 = local_d4;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_b8;
  puVar7 = local_138;
  for (lVar5 = 0xc; uVar4 = local_38, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_160 = iVar3 != 0;
  FUN_143bbffc2(local_38,local_40,puVar8);
  *param_3 = uVar4;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b7720 FUN_1485b7720 body=770 status=ok
// SIG undefined FUN_1485b7720(void)

void FUN_1485b7720(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  int local_68;
  undefined1 local_61;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar5 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_61 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar3 = local_68;
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_58;
  uStack_84 = uStack_54;
  uStack_80 = uStack_50;
  uStack_7c = uStack_4c;
  local_78 = local_48;
  local_a0 = iVar3 != 0;
  local_98 = local_6c;
  local_a8 = local_61;
  FUN_143bc0406(local_30,puVar5,&local_88,local_60);
  *param_3 = uVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b7a2a FUN_1485b7a2a body=823 status=ok
// SIG undefined FUN_1485b7a2a(void)

void FUN_1485b7a2a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_7c;
  int local_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_148568536(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar5 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar3 = local_78;
  local_7c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar4 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_88 = local_60;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_a8 = local_48;
  local_d0 = iVar3 != 0;
  local_c8 = local_7c;
  local_d8 = local_71;
  FUN_143bc04dc(local_30,puVar5);
  *param_3 = uVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b7d62 FUN_1485b7d62 body=382 status=ok
// SIG undefined FUN_1485b7d62(void)

void FUN_1485b7d62(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_148568536(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar4 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar3 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bc05ea(local_28,puVar4,local_40);
  *param_3 = uVar3;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b7ee8 FUN_1485b7ee8 body=526 status=ok
// SIG undefined FUN_1485b7ee8(void)

void FUN_1485b7ee8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_148568536(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar4 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_148568536(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar3 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143bc0880(local_38,puVar4,puVar5,local_5c != 0);
  *param_3 = uVar3;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485b8166 FUN_1485b8166 body=59 status=ok
// SIG undefined FUN_1485b8166(void)

undefined8 FUN_1485b8166(longlong *param_1)

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



// FUNCTION 1485b8282 FUN_1485b8282 body=59 status=ok
// SIG undefined FUN_1485b8282(void)

undefined8 FUN_1485b8282(longlong *param_1)

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



// FUNCTION 1485b838e FUN_1485b838e body=59 status=ok
// SIG undefined FUN_1485b838e(void)

undefined8 FUN_1485b838e(longlong *param_1)

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



// FUNCTION 1485b84b2 FUN_1485b84b2 body=59 status=ok
// SIG undefined FUN_1485b84b2(void)

undefined8 FUN_1485b84b2(longlong *param_1)

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



// FUNCTION 1485b8658 FUN_1485b8658 body=59 status=ok
// SIG undefined FUN_1485b8658(void)

undefined8 FUN_1485b8658(longlong *param_1)

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



// FUNCTION 1485b86fa FUN_1485b86fa body=74 status=ok
// SIG undefined FUN_1485b86fa(void)

void FUN_1485b86fa(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  param_2[3] = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 4);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x1c);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_2 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x36) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1485b8744 FUN_1485b8744 body=74 status=ok
// SIG undefined FUN_1485b8744(void)

void FUN_1485b8744(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = 0;
  param_2[3] = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 4);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x1c);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 **)(param_2 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x36) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 1485b87a6 FUN_1485b87a6 body=68 status=ok
// SIG undefined FUN_1485b87a6(void)

undefined8 FUN_1485b87a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485b8812 FUN_1485b8812 body=59 status=ok
// SIG undefined FUN_1485b8812(void)

undefined8 FUN_1485b8812(longlong *param_1)

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



// FUNCTION 1485b892a FUN_1485b892a body=59 status=ok
// SIG undefined FUN_1485b892a(void)

undefined8 FUN_1485b892a(longlong *param_1)

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



// FUNCTION 1485b8a5e FUN_1485b8a5e body=59 status=ok
// SIG undefined FUN_1485b8a5e(void)

undefined8 FUN_1485b8a5e(longlong *param_1)

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



// FUNCTION 1485b8b92 FUN_1485b8b92 body=59 status=ok
// SIG undefined FUN_1485b8b92(void)

undefined8 FUN_1485b8b92(longlong *param_1)

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



// FUNCTION 1485b8ccc FUN_1485b8ccc body=59 status=ok
// SIG undefined FUN_1485b8ccc(void)

undefined8 FUN_1485b8ccc(longlong *param_1)

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



// FUNCTION 1485b8e1e FUN_1485b8e1e body=59 status=ok
// SIG undefined FUN_1485b8e1e(void)

undefined8 FUN_1485b8e1e(longlong *param_1)

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



// FUNCTION 1485b8f3a FUN_1485b8f3a body=59 status=ok
// SIG undefined FUN_1485b8f3a(void)

undefined8 FUN_1485b8f3a(longlong *param_1)

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



// FUNCTION 1485b9078 FUN_1485b9078 body=59 status=ok
// SIG undefined FUN_1485b9078(void)

undefined8 FUN_1485b9078(longlong *param_1)

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



// FUNCTION 1485b917e FUN_1485b917e body=59 status=ok
// SIG undefined FUN_1485b917e(void)

undefined8 FUN_1485b917e(longlong *param_1)

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



// FUNCTION 1485b9278 FUN_1485b9278 body=102 status=ok
// SIG undefined FUN_1485b9278(void)

undefined8 FUN_1485b9278(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined1 *)(lVar2 + 0x18) = puVar1[0x20];
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485b9306 FUN_1485b9306 body=59 status=ok
// SIG undefined FUN_1485b9306(void)

undefined8 FUN_1485b9306(longlong *param_1)

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



// FUNCTION 1485b934c FUN_1485b934c body=38 status=ok
// SIG undefined FUN_1485b934c(void)

void FUN_1485b934c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1485b9454 FUN_1485b9454 body=59 status=ok
// SIG undefined FUN_1485b9454(void)

undefined8 FUN_1485b9454(longlong *param_1)

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



// FUNCTION 1485b9588 FUN_1485b9588 body=59 status=ok
// SIG undefined FUN_1485b9588(void)

undefined8 FUN_1485b9588(longlong *param_1)

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



// FUNCTION 1485b96b8 FUN_1485b96b8 body=59 status=ok
// SIG undefined FUN_1485b96b8(void)

undefined8 FUN_1485b96b8(longlong *param_1)

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



// FUNCTION 1485b9824 FUN_1485b9824 body=59 status=ok
// SIG undefined FUN_1485b9824(void)

undefined8 FUN_1485b9824(longlong *param_1)

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



// FUNCTION 1485b9956 FUN_1485b9956 body=59 status=ok
// SIG undefined FUN_1485b9956(void)

undefined8 FUN_1485b9956(longlong *param_1)

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



// FUNCTION 1485b9acc FUN_1485b9acc body=59 status=ok
// SIG undefined FUN_1485b9acc(void)

undefined8 FUN_1485b9acc(longlong *param_1)

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



// FUNCTION 1485b9bfa FUN_1485b9bfa body=59 status=ok
// SIG undefined FUN_1485b9bfa(void)

undefined8 FUN_1485b9bfa(longlong *param_1)

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



// FUNCTION 1485b9d7e FUN_1485b9d7e body=59 status=ok
// SIG undefined FUN_1485b9d7e(void)

undefined8 FUN_1485b9d7e(longlong *param_1)

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



// FUNCTION 1485b9e20 FUN_1485b9e20 body=64 status=ok
// SIG undefined FUN_1485b9e20(void)

longlong FUN_1485b9e20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14834f448(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_148374118(lVar2,1);
  return lVar2;
}



// FUNCTION 1485b9e60 FUN_1485b9e60 body=59 status=ok
// SIG undefined FUN_1485b9e60(void)

longlong FUN_1485b9e60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148307474(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_1485b9ef5(lVar2);
  return lVar2;
}



// FUNCTION 1485b9e9c FUN_1485b9e9c body=89 status=ok
// SIG undefined FUN_1485b9e9c(void)

void FUN_1485b9e9c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar2 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1485b9ef5 FUN_1485b9ef5 body=8 status=ok
// SIG undefined FUN_1485b9ef5(void)

void FUN_1485b9ef5(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  return;
}



// FUNCTION 1485b9f6e FUN_1485b9f6e body=59 status=ok
// SIG undefined FUN_1485b9f6e(void)

undefined8 FUN_1485b9f6e(longlong *param_1)

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



// FUNCTION 1485ba0be FUN_1485ba0be body=59 status=ok
// SIG undefined FUN_1485ba0be(void)

undefined8 FUN_1485ba0be(longlong *param_1)

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



// FUNCTION 1485ba22a FUN_1485ba22a body=59 status=ok
// SIG undefined FUN_1485ba22a(void)

undefined8 FUN_1485ba22a(longlong *param_1)

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



// FUNCTION 1485ba3ba FUN_1485ba3ba body=59 status=ok
// SIG undefined FUN_1485ba3ba(void)

undefined8 FUN_1485ba3ba(longlong *param_1)

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



// FUNCTION 1485ba508 FUN_1485ba508 body=59 status=ok
// SIG undefined FUN_1485ba508(void)

undefined8 FUN_1485ba508(longlong *param_1)

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



// FUNCTION 1485ba65c FUN_1485ba65c body=59 status=ok
// SIG undefined FUN_1485ba65c(void)

undefined8 FUN_1485ba65c(longlong *param_1)

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



// FUNCTION 1485ba6fe FUN_1485ba6fe body=89 status=ok
// SIG undefined FUN_1485ba6fe(void)

void FUN_1485ba6fe(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0xc0);
  *param_2 = 0x3f800000;
  param_2[4] = 0x3f800000;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x14);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x2c) = 1;
  return;
}



// FUNCTION 1485ba758 FUN_1485ba758 body=75 status=ok
// SIG undefined FUN_1485ba758(void)

void FUN_1485ba758(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0x3f800000;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 0x3f800000;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x14);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x2c) = 1;
  return;
}



// FUNCTION 1485ba7bc FUN_1485ba7bc body=68 status=ok
// SIG undefined FUN_1485ba7bc(void)

undefined8 FUN_1485ba7bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb8);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485ba828 FUN_1485ba828 body=59 status=ok
// SIG undefined FUN_1485ba828(void)

undefined8 FUN_1485ba828(longlong *param_1)

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



// FUNCTION 1485ba968 FUN_1485ba968 body=59 status=ok
// SIG undefined FUN_1485ba968(void)

undefined8 FUN_1485ba968(longlong *param_1)

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



// FUNCTION 1485baa74 FUN_1485baa74 body=59 status=ok
// SIG undefined FUN_1485baa74(void)

undefined8 FUN_1485baa74(longlong *param_1)

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



// FUNCTION 1485babb2 FUN_1485babb2 body=59 status=ok
// SIG undefined FUN_1485babb2(void)

undefined8 FUN_1485babb2(longlong *param_1)

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



// FUNCTION 1485bacc4 FUN_1485bacc4 body=59 status=ok
// SIG undefined FUN_1485bacc4(void)

undefined8 FUN_1485bacc4(longlong *param_1)

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



// FUNCTION 1485baddc FUN_1485baddc body=59 status=ok
// SIG undefined FUN_1485baddc(void)

undefined8 FUN_1485baddc(longlong *param_1)

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



// FUNCTION 1485baf22 FUN_1485baf22 body=59 status=ok
// SIG undefined FUN_1485baf22(void)

undefined8 FUN_1485baf22(longlong *param_1)

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



// FUNCTION 1485bb02e FUN_1485bb02e body=126 status=ok
// SIG undefined FUN_1485bb02e(void)

undefined1 FUN_1485bb02e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[8];
      uVar12 = puVar1[9];
      uVar13 = puVar1[10];
      uVar14 = puVar1[0xb];
      uVar15 = puVar1[0xd];
      uVar16 = puVar1[0xe];
      uVar17 = puVar1[0xf];
      lVar2 = param_2 + 0x40 + lVar18;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[0xc];
      *(undefined4 *)(lVar2 + -0xc) = uVar15;
      *(undefined4 *)(lVar2 + -8) = uVar16;
      *(undefined4 *)(lVar2 + -4) = uVar17;
      *(undefined4 *)(lVar2 + -0x20) = uVar11;
      *(undefined4 *)(lVar2 + -0x1c) = uVar12;
      *(undefined4 *)(lVar2 + -0x18) = uVar13;
      *(undefined4 *)(lVar2 + -0x14) = uVar14;
      *(undefined4 *)(lVar2 + -0x30) = uVar7;
      *(undefined4 *)(lVar2 + -0x2c) = uVar8;
      *(undefined4 *)(lVar2 + -0x28) = uVar9;
      *(undefined4 *)(lVar2 + -0x24) = uVar10;
      *(undefined4 *)(lVar2 + -0x40) = uVar3;
      *(undefined4 *)(lVar2 + -0x3c) = uVar4;
      *(undefined4 *)(lVar2 + -0x38) = uVar5;
      *(undefined4 *)(lVar2 + -0x34) = uVar6;
      FUN_14054c6c4(lVar2,puVar1 + 0x10);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 0x14);
      lVar18 = lVar18 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485bb0d4 FUN_1485bb0d4 body=59 status=ok
// SIG undefined FUN_1485bb0d4(void)

undefined8 FUN_1485bb0d4(longlong *param_1)

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



// FUNCTION 1485bb11a FUN_1485bb11a body=38 status=ok
// SIG undefined FUN_1485bb11a(void)

void FUN_1485bb11a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1485bb20a FUN_1485bb20a body=59 status=ok
// SIG undefined FUN_1485bb20a(void)

undefined8 FUN_1485bb20a(longlong *param_1)

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



// FUNCTION 1485bb310 FUN_1485bb310 body=59 status=ok
// SIG undefined FUN_1485bb310(void)

undefined8 FUN_1485bb310(longlong *param_1)

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



// FUNCTION 1485bb3b2 FUN_1485bb3b2 body=38 status=ok
// SIG undefined FUN_1485bb3b2(void)

undefined8 FUN_1485bb3b2(undefined8 param_1,int param_2)

{
  FUN_146bd8050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485bb3d8 FUN_1485bb3d8 body=2223 status=ok
// SIG undefined FUN_1485bb3d8(void)

ulonglong FUN_1485bb3d8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 **ppuVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  undefined8 *local_158;
  uint local_150;
  undefined1 local_148;
  int *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 **local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  int local_88 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1485ab348(&local_98,0x3ff0000000000000,*(undefined4 *)(param_1 + 0xd0),0);
  local_88[0] = 0;
  local_88[1] = 0;
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    local_88[1] = *(undefined4 *)(param_1 + 0xd8);
    local_88[0] = *(undefined4 *)(param_1 + 0xd8);
  }
  uVar15 = *(uint *)(param_2 + 1);
  if (uVar15 == *(uint *)(param_3 + 1)) {
    uVar6 = 0;
    if ((int)param_4[1] + 2 <= (int)uVar15) {
      local_a8 = 0;
      uStack_a0 = 0;
      fVar16 = (float)FUN_1485bbc88(param_2,param_3);
      local_118 = &local_b8;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      local_120 = &local_c8;
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      local_158 = &local_d8;
      local_d8 = 0;
      local_d0 = 0;
      local_e8 = *param_4;
      local_168 = &local_e8;
      local_e0 = (undefined4)param_4[1];
      local_f8 = 0;
      local_f0 = 0;
      local_108 = 0;
      local_100 = 0;
      local_128 = 0x3f0000003f000000;
      local_130 = 0x3f0000003f000000;
      local_138 = &DAT_3f8000003f800000;
      local_148 = 0;
      local_160 = 0;
      local_150 = uVar15;
      local_140 = local_88;
      FUN_148348166(param_1,&local_98);
      uVar8 = uVar15 - 1;
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      FUN_1407feed2(&local_b8,uVar8,1);
      if (1 < (int)uVar15) {
        lVar5 = 0;
        do {
          dVar20 = (double)*(float *)(lVar5 + 4 + *param_3) - (double)*(float *)(lVar5 + *param_3);
          dVar22 = (double)*(float *)(lVar5 + 4 + *param_2) - (double)*(float *)(lVar5 + *param_2);
          dVar18 = SQRT(dVar20 * dVar20 + dVar22 * dVar22);
          if (0.0 < dVar18) {
            dVar22 = -dVar22 * (1.0 / dVar18);
          }
          else {
            dVar22 = 0.0;
          }
          *(ulonglong *)((longlong)local_b8 + lVar5 * 4) =
               -(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar20 * (1.0 / dVar18));
          *(double *)((longlong)local_b8 + lVar5 * 4 + 8) = dVar22;
          lVar5 = lVar5 + 4;
        } while ((ulonglong)uVar8 * 4 - lVar5 != 0);
      }
      ppuVar14 = &local_c8;
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_1407feed2(ppuVar14,uVar15,1);
      uVar1 = local_b8[1];
      *local_c8 = *local_b8;
      local_c8[1] = uVar1;
      *(undefined1 (*) [16])(local_c8 + (longlong)((int)uStack_c0 + -1) * 2) =
           *(undefined1 (*) [16])(local_b8 + (longlong)((int)uStack_b0 + -1) * 2);
      if (2 < (int)uVar15) {
        lVar5 = 0x10;
        do {
          dVar18 = *(double *)((longlong)local_b8 + lVar5 + 8) +
                   *(double *)((longlong)local_b8 + lVar5 + -8);
          dVar20 = *(double *)((longlong)local_b8 + lVar5) +
                   *(double *)((longlong)local_b8 + lVar5 + -0x10);
          dVar22 = SQRT(dVar20 * dVar20 + dVar18 * dVar18);
          if (0.0 < dVar22) {
            dVar18 = dVar18 * (1.0 / dVar22);
          }
          else {
            dVar18 = 0.0;
          }
          *(ulonglong *)((longlong)local_c8 + lVar5) =
               -(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar20 * (1.0 / dVar22));
          *(double *)((longlong)local_c8 + lVar5 + 8) = dVar18;
          lVar5 = lVar5 + 0x10;
        } while ((ulonglong)uVar8 << 4 != lVar5);
      }
      if (0 < local_90) {
        lVar5 = 0;
        do {
          if (0 < (int)uVar15) {
            uVar6 = 0;
            lVar7 = lVar5 * 0x10;
            iVar9 = 0;
            iVar11 = 0;
            do {
              dVar20 = (double)*(float *)(*param_2 + uVar6 * 4);
              fVar17 = *(float *)(*param_3 + uVar6 * 4);
              dVar18 = *(double *)(local_98 + 8 + lVar7);
              iVar4 = (int)lVar5;
              lVar13 = *(longlong *)(param_1 + 8);
              lVar12 = (longlong)(*(int *)(param_1 + 0xd0) * (int)uVar6 + iVar4);
              *(double *)(lVar13 + lVar12 * 0x18) = dVar20 * *(double *)(local_98 + lVar7);
              *(double *)(lVar13 + 8 + lVar12 * 0x18) = dVar18 * dVar20;
              *(double *)(lVar13 + 0x10 + lVar12 * 0x18) = (double)fVar17;
              if ((iVar11 < (int)param_4[1]) &&
                 (ppuVar14 = (undefined8 **)(longlong)iVar11,
                 uVar6 == *(uint *)(*param_4 + (longlong)ppuVar14 * 4))) {
                if (uVar6 != 0) {
                  dVar18 = (double)local_b8[uVar6 * 2 + -1];
                  dVar20 = (double)local_b8[uVar6 * 2 + -2];
                  dVar22 = *(double *)(local_98 + 8 + lVar7);
                  ppuVar14 = *(undefined8 ***)(param_1 + 0x38);
                  lVar13 = (longlong)(*(int *)(param_1 + 0xd0) * iVar9 + iVar4);
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc) =
                       (float)(dVar20 * *(double *)(local_98 + lVar7));
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 4) = (float)(dVar22 * dVar20);
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 8) = (float)dVar18;
                }
                iVar9 = iVar9 + 1;
                if ((longlong)(uVar6 + 1) < (longlong)(int)uVar15) {
                  dVar18 = (double)local_b8[uVar6 * 2 + 1];
                  dVar20 = (double)local_b8[uVar6 * 2];
                  dVar22 = *(double *)(local_98 + 8 + lVar7);
                  ppuVar14 = *(undefined8 ***)(param_1 + 0x38);
                  lVar13 = (longlong)(*(int *)(param_1 + 0xd0) * iVar9 + iVar4);
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc) =
                       (float)(dVar20 * *(double *)(local_98 + lVar7));
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 4) = (float)(dVar22 * dVar20);
                  *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 8) = (float)dVar18;
                }
                iVar11 = iVar11 + 1;
              }
              else {
                dVar18 = (double)local_c8[uVar6 * 2 + 1];
                dVar20 = (double)local_c8[uVar6 * 2];
                dVar22 = *(double *)(local_98 + 8 + lVar7);
                ppuVar14 = *(undefined8 ***)(param_1 + 0x38);
                lVar13 = (longlong)(*(int *)(param_1 + 0xd0) * iVar9 + iVar4);
                *(float *)((longlong)ppuVar14 + lVar13 * 0xc) =
                     (float)(dVar20 * *(double *)(local_98 + lVar7));
                *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 4) = (float)(dVar22 * dVar20);
                *(float *)((longlong)ppuVar14 + lVar13 * 0xc + 8) = (float)dVar18;
              }
              uVar6 = uVar6 + 1;
              iVar9 = iVar9 + 1;
            } while (uVar6 != uVar15);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < local_90);
      }
      if (*(char *)(param_1 + 0xd4) == '\x01') {
        lVar5 = 0;
        piVar10 = local_88;
        bVar2 = true;
        do {
          bVar3 = bVar2;
          if (*piVar10 == 2) {
            dVar18 = (double)*(float *)(*param_3 +
                                       (longlong)(int)lVar5 * ((longlong)(int)param_3[1] + -1) * 4);
            dVar20 = DAT_14c8463c8 * dVar18;
            dVar22 = DAT_14c8463c0 * dVar18;
            lVar7 = (longlong)*(int *)(param_1 + 0xa4 + lVar5 * 4);
            lVar5 = *(longlong *)(param_1 + 8);
            *(double *)(lVar5 + lVar7 * 0x18) = dVar18 * DAT_14c8463b8;
            *(double *)(lVar5 + 8 + lVar7 * 0x18) = dVar22;
            *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = dVar20;
          }
          lVar5 = 1;
          piVar10 = local_88 + 1;
          bVar2 = false;
        } while (bVar3);
        if (0 < local_90) {
          iVar9 = 0;
          do {
            lVar5 = 0;
            bVar2 = true;
            do {
              bVar3 = bVar2;
              lVar13 = (longlong)*(int *)(param_1 + 0xac + lVar5 * 4) + (longlong)iVar9;
              lVar7 = *(longlong *)(param_1 + 0x38);
              *(undefined8 *)(lVar7 + lVar13 * 0xc) = 0;
              *(float *)(lVar7 + 8 + lVar13 * 0xc) = (float)((int)lVar5 * 2 + -1);
              lVar5 = 1;
              bVar2 = false;
            } while (bVar3);
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_90);
        }
        lVar5 = 0;
        piVar10 = local_88;
        bVar2 = true;
        do {
          bVar3 = bVar2;
          if (*piVar10 == 2) {
            lVar13 = (longlong)local_90 + (longlong)*(int *)(param_1 + 0xac + lVar5 * 4);
            lVar7 = *(longlong *)(param_1 + 0x38);
            *(undefined8 *)(lVar7 + lVar13 * 0xc) = 0;
            *(float *)(lVar7 + 8 + lVar13 * 0xc) = (float)((int)lVar5 * 2 + -1);
          }
          lVar5 = 1;
          piVar10 = local_88 + 1;
          bVar2 = false;
        } while (bVar3);
      }
      if (*(char *)(param_1 + 0xd5) == '\x01') {
        fVar17 = *(float *)*param_2;
        uVar8 = -(uint)(-fVar17 <= fVar17);
        fVar17 = (float)(~uVar8 & (uint)-fVar17 | (uint)fVar17 & uVar8);
        if (0 < (int)uVar15) {
          uVar6 = 0;
          do {
            fVar21 = ((float *)*param_2)[uVar6];
            uVar8 = -(uint)(-fVar21 <= fVar21);
            fVar21 = (float)(~uVar8 & (uint)-fVar21 | (uint)fVar21 & uVar8);
            uVar8 = -(uint)(fVar17 <= fVar21);
            fVar17 = (float)(~uVar8 & (uint)fVar17 | uVar8 & (uint)fVar21);
            uVar6 = uVar6 + 1;
          } while (uVar15 != uVar6);
        }
        fVar19 = fVar17 * 6.2831855;
        fVar17 = fVar17 + fVar17;
        fVar21 = (float)(~-(uint)(fVar16 <= fVar19) & (uint)fVar16 |
                        -(uint)(fVar16 <= fVar19) & (uint)fVar19);
        uVar15 = -(uint)(fVar17 <= fVar21);
        fVar21 = (float)(~uVar15 & (uint)fVar17 | uVar15 & (uint)fVar21);
        iVar9 = *(int *)(param_1 + 0xb4);
        if (0 < iVar9) {
          lVar5 = 0;
          do {
            *(float *)(*(longlong *)(param_1 + 0x18) + lVar5 * 8) =
                 *(float *)(*(longlong *)(param_1 + 0x18) + lVar5 * 8) * (fVar19 / fVar21);
            *(float *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 8) =
                 *(float *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 8) * (fVar16 / fVar21);
            lVar5 = lVar5 + 1;
            iVar9 = *(int *)(param_1 + 0xb4);
          } while (lVar5 < iVar9);
        }
        if (iVar9 < *(int *)(param_1 + 0x20)) {
          lVar5 = (longlong)iVar9;
          do {
            lVar7 = *(longlong *)(param_1 + 0x18);
            *(float *)(lVar7 + lVar5 * 8) = *(float *)(lVar7 + lVar5 * 8) * (fVar17 / fVar21);
            *(float *)(lVar7 + 4 + lVar5 * 8) =
                 *(float *)(lVar7 + 4 + lVar5 * 8) * (fVar17 / fVar21);
            lVar5 = lVar5 + 1;
          } while (lVar5 < *(int *)(param_1 + 0x20));
        }
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71((int7)((ulonglong)ppuVar14 >> 8),1);
    }
  }
  else {
    uVar6 = 0;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1485bbc88 FUN_1485bbc88 body=196 status=ok
// SIG undefined FUN_1485bbc88(void)

void FUN_1485bbc88(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  
  iVar1 = (int)param_1[1];
  FUN_144a84024(param_3,iVar1,1);
  *(undefined4 *)*param_3 = 0;
  fVar6 = 0.0;
  if (1 < (longlong)iVar1) {
    uVar5 = 0;
    do {
      fVar2 = *(float *)(*param_2 + 4 + uVar5 * 4) - *(float *)(*param_2 + uVar5 * 4);
      fVar3 = *(float *)(*param_1 + 4 + uVar5 * 4) - *(float *)(*param_1 + uVar5 * 4);
      fVar6 = fVar6 + SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      *(float *)(*param_3 + 4 + uVar5 * 4) = fVar6;
      uVar5 = uVar5 + 1;
    } while (iVar1 - 1 != uVar5);
    lVar4 = 1;
    do {
      *(float *)(*param_3 + lVar4 * 4) = *(float *)(*param_3 + lVar4 * 4) / fVar6;
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  return;
}



// FUNCTION 1485bbd4c FUN_1485bbd4c body=38 status=ok
// SIG undefined FUN_1485bbd4c(void)

undefined8 FUN_1485bbd4c(undefined8 param_1,int param_2)

{
  FUN_1485bbfa6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1485bbd72 FUN_1485bbd72 body=155 status=ok
// SIG undefined FUN_1485bbd72(void)

void FUN_1485bbd72(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148266644(param_1,&local_38,param_2);
  FUN_148266644(param_1,&local_48,param_3);
  local_50 = (local_30 + local_40) * 0.5;
  local_58 = (local_38 + local_48) * 0.5;
  FUN_1485bbfe4(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bbe0e FUN_1485bbe0e body=407 status=ok
// SIG undefined FUN_1485bbe0e(void)

void FUN_1485bbe0e(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar8 = 0;
  if ((uVar10 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x10) - 1U))) {
    uVar9 = 1;
    uVar5 = 1;
    if (1 < (int)uVar10) {
      uVar9 = uVar10;
    }
    do {
      uVar8 = uVar9;
      if (uVar9 == uVar5) break;
      uVar7 = uVar5 >> 9;
      uVar11 = uVar5 & 0x1ff;
      uVar8 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x10))[uVar7] +
                                         (ulonglong)uVar11 * 2) - 1U));
  }
  if (uVar8 != uVar10) {
    do {
      FUN_148266644(param_1,&local_60,uVar8);
      local_50 = local_60;
      sVar3 = _dtest(&local_50);
      if (sVar3 < 1) {
        local_50 = local_58;
        sVar3 = _dtest(&local_50);
        bVar2 = sVar3 < 1;
      }
      else {
        bVar2 = false;
      }
      local_50 = CONCAT71(local_50._1_7_,bVar2);
      pcVar1 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar4,&local_50);
      uVar9 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar10) {
        uVar9 = uVar10;
      }
      do {
        uVar5 = uVar9;
        if (uVar9 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar5 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar5;
    } while (uVar8 != uVar10);
  }
  if (*param_2 != 0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485bbfa6 FUN_1485bbfa6 body=62 status=ok
// SIG undefined FUN_1485bbfa6(void)

void FUN_1485bbfa6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af77de0;
  FUN_146bee5d0(param_1 + 0x28,0);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_1483a3f48(param_1);
  return;
}



// FUNCTION 1485bbfe4 FUN_1485bbfe4 body=143 status=ok
// SIG undefined FUN_1485bbfe4(void)

int FUN_1485bbfe4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1483a4204();
  local_38 = *param_2;
  local_30 = param_2[1];
  iVar2 = iVar1 * 2 + 1;
  lVar3 = 8;
  do {
    FUN_146b9c256(param_1 + 0x138,(longlong)&local_38 + lVar3,iVar2);
    lVar3 = lVar3 + -8;
    iVar2 = iVar2 + -1;
  } while (lVar3 != -8);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485bc074 FUN_1485bc074 body=2137 status=ok
// SIG undefined FUN_1485bc074(void)

bool FUN_1485bc074(longlong param_1,double *param_2,double *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined4 local_1c0;
  int local_1bc;
  double *local_1b8;
  double *local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  int local_180;
  int iStack_17c;
  double local_178;
  int local_170 [2];
  int *local_168;
  uint *puStack_160;
  double local_158;
  double local_150;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  ulonglong local_118;
  longlong local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_138 = *param_2;
  dStack_130 = param_2[1];
  uVar11 = FUN_1485bd736(param_1,&local_138,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
  local_138 = *param_3;
  dStack_130 = param_3[1];
  local_c4 = uVar11;
  uVar12 = FUN_1485bd736(param_1,&local_138,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
  local_c8 = uVar12;
  if ((int)uVar11 < 0 || uVar11 != uVar12) {
    if (-1 < (int)uVar11) {
      FUN_148266644(param_1,&local_138,uVar11);
      *param_2 = local_138;
      param_2[1] = dStack_130;
    }
    if (-1 < (int)uVar12) {
      FUN_148266644(param_1,&local_138,uVar12);
      *param_3 = local_138;
      param_3[1] = dStack_130;
    }
    if (*(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1d8) <
        (*param_3 - *param_2) * (*param_3 - *param_2) +
        (param_3[1] - param_2[1]) * (param_3[1] - param_2[1])) {
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = *param_3;
      dStack_e0 = param_3[1];
      local_f8 = *param_2;
      dStack_f0 = param_2[1];
      local_1d8 = (longlong *)param_5;
      local_1c4 = param_4;
      FUN_1485bcc40(param_1,&local_f8,&local_e8,&local_d8);
      local_108 = 0;
      uStack_100 = 0;
      local_1b8 = param_2;
      local_1b0 = param_3;
      FUN_148279e70(&local_138,param_2,param_3);
      local_1d0 = param_5;
      local_1d8 = &local_108;
      FUN_1485bd16c(param_1,&local_138,uVar11,uVar12);
      lVar16 = (longlong)(int)uStack_d0;
      if (0 < lVar16) {
        lVar18 = 0;
        do {
          iVar13 = *(int *)(local_d8 + 0x78 + lVar18);
          if (iVar13 - 1U < 2) {
            local_1c0 = *(undefined4 *)(local_d8 + lVar18);
            dVar1 = *(double *)(local_d8 + 0x10 + lVar18);
            dVar2 = *(double *)(local_d8 + 0x18 + lVar18);
            dVar3 = *(double *)(local_d8 + 0x20 + lVar18);
            dVar4 = *(double *)(local_d8 + 0x28 + lVar18);
            dVar5 = *(double *)(local_d8 + 0xa8 + lVar18);
            local_1d8 = *(longlong **)(param_1 + 0x1d8);
            FUN_1485bd342(param_1,&local_180,local_1c0,*(undefined8 *)(local_d8 + 0xa0 + lVar18));
            local_1bc = iStack_17c;
            FUN_148266644(param_1,&local_168,local_180);
            uVar10 = uStack_100;
            iVar6 = local_180;
            dVar8 = ((double)puStack_160 - dStack_130) * local_120;
            dVar7 = ((double)local_168 - local_138) * local_128;
            lVar19 = (longlong)(int)(uint)uStack_100;
            uVar14 = (uint)uStack_100 + 1;
            uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
            if (uStack_100._4_4_ < uVar14) {
              FUN_1485bdf96(&local_108,uVar10 & 0xffffffff);
            }
            iVar15 = local_1bc;
            *(double *)(local_108 + lVar19 * 0x10) = dVar7 + dVar8;
            *(int *)(local_108 + 8 + lVar19 * 0x10) = iVar6;
            if (iVar13 == 2) {
              if (local_1bc == -1) {
                local_1d8 = *(longlong **)(param_1 + 0x1d8);
                FUN_1485bd342(param_1,&local_180,local_1c0,dVar5);
                FUN_148266644(param_1,&local_168,local_180);
                dVar2 = ((double)puStack_160 - dStack_130) * local_120;
                dVar1 = ((double)local_168 - local_138) * local_128;
                iVar13 = local_180;
              }
              else {
                FUN_1485bd66c(param_1,&local_168,local_1bc);
                local_1d8 = *(longlong **)(param_1 + 0x1d8);
                FUN_1485bd342(param_1,local_170,iVar15,
                              ((dVar1 + dVar3 * dVar5) - (double)local_168) * local_158 +
                              ((dVar2 + dVar4 * dVar5) - (double)puStack_160) * local_150);
                FUN_148266644(param_1,&local_180,local_170[0]);
                dVar2 = (local_178 - dStack_130) * local_120;
                dVar1 = ((double)CONCAT44(iStack_17c,local_180) - local_138) * local_128;
                iVar13 = local_170[0];
              }
              uVar10 = uStack_100;
              lVar19 = (longlong)(int)(uint)uStack_100;
              uVar14 = (uint)uStack_100 + 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar14);
              if (uStack_100._4_4_ < uVar14) {
                FUN_1485bdf96(&local_108,uVar10 & 0xffffffff);
              }
              *(double *)(local_108 + lVar19 * 0x10) = dVar1 + dVar2;
              *(int *)(local_108 + 8 + lVar19 * 0x10) = iVar13;
            }
          }
          lVar18 = lVar18 + 0xb0;
        } while (lVar16 * 0xb0 - lVar18 != 0);
      }
      pdVar9 = local_1b8;
      if (uVar11 == 0xffffffff) {
        local_168 = (int *)*local_1b8;
        puStack_160 = (uint *)local_1b8[1];
        local_c4 = FUN_1485bd736(param_1,&local_168,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
        if (local_c4 == 0xffffffff) {
          local_198 = *pdVar9;
          dStack_190 = pdVar9[1];
          local_c4 = FUN_1485bbfe4(param_1);
          puStack_160 = &local_c4;
          auVar22._0_8_ = pdVar9[1] / *(double *)(param_1 + 0x1c8);
          auVar22._8_8_ = 0;
          auVar23 = roundsd(auVar22,auVar22,9);
          iStack_17c = (int)auVar23._0_8_;
          auVar23._0_8_ = *pdVar9 / *(double *)(param_1 + 0x1c8);
          auVar23._8_8_ = 0;
          auVar23 = roundsd(auVar23,auVar23,9);
          local_180 = (int)auVar23._0_8_;
          local_168 = &local_180;
          FUN_146bfb2fc(param_1 + 0x150,local_170,&local_168,0);
          uVar12 = local_c8;
        }
      }
      pdVar9 = local_1b0;
      if (uVar12 == 0xffffffff) {
        local_168 = (int *)*local_1b0;
        puStack_160 = (uint *)local_1b0[1];
        local_c8 = FUN_1485bd736(param_1,&local_168,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
        if (local_c8 == 0xffffffff) {
          local_1a8 = *pdVar9;
          dStack_1a0 = pdVar9[1];
          local_c8 = FUN_1485bbfe4(param_1);
          puStack_160 = &local_c8;
          auVar24._0_8_ = pdVar9[1] / *(double *)(param_1 + 0x1c8);
          auVar24._8_8_ = 0;
          auVar23 = roundsd(auVar24,auVar24,9);
          iStack_17c = (int)auVar23._0_8_;
          auVar21._0_8_ = *pdVar9 / *(double *)(param_1 + 0x1c8);
          auVar21._8_8_ = 0;
          auVar23 = roundsd(auVar21,auVar21,9);
          local_180 = (int)auVar23._0_8_;
          local_168 = &local_180;
          FUN_146bfb2fc(param_1 + 0x150,local_170,&local_168,0);
        }
      }
      uVar12 = local_c4;
      uVar10 = local_118;
      lVar16 = (longlong)(int)(uint)uStack_100;
      uVar11 = (uint)uStack_100 + 1;
      if (uStack_100._4_4_ < uVar11) {
        uVar17 = uStack_100 & 0xffffffff;
        uStack_100._0_4_ = uVar11;
        FUN_1485bdf96(&local_108,uVar17);
        uVar11 = (uint)uStack_100;
      }
      uStack_100._0_4_ = uVar11;
      uVar14 = local_c8;
      uVar11 = (uint)uStack_100;
      *(ulonglong *)(local_108 + lVar16 * 0x10) = uVar10 ^ 0x8000000000000000;
      *(uint *)(local_108 + 8 + lVar16 * 0x10) = uVar12;
      lVar16 = (longlong)(int)(uint)uStack_100;
      uStack_100._0_4_ = (uint)uStack_100 + 1;
      if (uStack_100._4_4_ < (uint)uStack_100) {
        FUN_1485bdf96(&local_108,uVar11);
      }
      *(ulonglong *)(local_108 + lVar16 * 0x10) = local_118;
      *(uint *)(local_108 + 8 + lVar16 * 0x10) = uVar14;
      FUN_1485be01b(local_108,uStack_100 & 0xffffffff);
      if (1 < (int)(uint)uStack_100) {
        lVar16 = 0x18;
        lVar18 = 0;
        do {
          iVar13 = *(int *)(local_108 + -0x10 + lVar16);
          iVar6 = *(int *)(local_108 + lVar16);
          if ((iVar13 != iVar6) && (iVar15 = FUN_1483a4254(param_1,iVar13,iVar6), iVar15 == -1)) {
            FUN_1483a4604(param_1,iVar13,iVar6,local_1c4);
          }
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar18 < (longlong)(int)(uint)uStack_100 + -1);
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      bVar20 = true;
      goto LAB_1485bc159;
    }
    if ((int)(uVar12 & uVar11) < 0) {
      iVar13 = FUN_1485bc8ce(param_1,param_2,param_5);
      bVar20 = iVar13 != -1;
      goto LAB_1485bc159;
    }
  }
  bVar20 = false;
LAB_1485bc159:
  if ((local_c0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar20;
}



// FUNCTION 1485bc8ce FUN_1485bc8ce body=880 status=ok
// SIG undefined FUN_1485bc8ce(void)

undefined4 FUN_1485bc8ce(longlong param_1,double *param_2,double param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f0 [2];
  int *local_e8;
  undefined4 *puStack_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined4 local_8c;
  int local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = (int *)*param_2;
  puStack_e0 = (undefined4 *)param_2[1];
  iVar1 = FUN_1485bd736(local_e8,&local_e8,*(undefined8 *)(param_1 + 0x1d8),0xffffffff);
  uVar2 = 0xffffffff;
  if (iVar1 < 0) {
    local_a8 = DAT_14c8463f0;
    dStack_a0 = DAT_14c8463f8;
    local_b8 = DAT_14c8463f0;
    dStack_b0 = DAT_14c8463f8;
    uVar3 = *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4);
    if (0 < (int)uVar3) {
      param_3 = param_3 * param_3;
      uVar6 = 0;
      uVar4 = 0xffffffff;
      do {
        dVar11 = param_3;
        uVar5 = uVar4;
        if (((int)uVar6 < *(int *)(param_1 + 0xb0) * 0x200 + *(int *)(param_1 + 0xb4)) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                               (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          FUN_1485bd8a8(param_1,uVar6,&local_a8,&local_b8);
          puStack_e0 = (undefined4 *)((dStack_a0 + dStack_b0) * 0.5);
          local_e8 = (int *)((local_a8 + local_b8) * 0.5);
          local_d0 = dStack_b0 - dStack_a0;
          local_d8 = local_b8 - local_a8;
          dVar11 = SQRT(local_d8 * local_d8 + local_d0 * local_d0);
          if (0.0 < dVar11) {
            local_d8 = local_d8 * (1.0 / dVar11);
            local_d0 = local_d0 * (1.0 / dVar11);
          }
          else {
            local_d8 = 0.0;
            local_d0 = 0.0;
          }
          local_c8 = (ulonglong)(dVar11 * 0.5) & -(ulonglong)(0.0 < dVar11);
          dVar11 = (double)FUN_146c7f000(&local_e8,param_2,&local_88);
          uVar5 = uVar6;
          if (param_3 <= dVar11) {
            dVar11 = param_3;
            uVar5 = uVar4;
          }
        }
        param_3 = dVar11;
        uVar6 = uVar6 + 1;
        uVar4 = uVar5;
      } while (uVar3 != uVar6);
      if (-1 < (int)uVar5) {
        FUN_1485bd986(param_1,uVar5,local_f0);
        local_108 = *param_2;
        dStack_100 = param_2[1];
        FUN_1485bdaf4(param_1,local_f0[0]);
        auVar8._0_8_ = param_2[1] / *(double *)(param_1 + 0x1c8);
        auVar8._8_8_ = 0;
        auVar9 = roundsd(auVar8,auVar8,9);
        local_84 = (int)auVar9._0_8_;
        auVar9._0_8_ = *param_2 / *(double *)(param_1 + 0x1c8);
        auVar9._8_8_ = 0;
        auVar9 = roundsd(auVar9,auVar9,9);
        local_88 = (int)auVar9._0_8_;
        local_e8 = &local_88;
        puStack_e0 = local_f0;
        FUN_146bfb2fc(param_1 + 0x150,&local_8c,&local_e8,0);
        uVar2 = local_f0[0];
        goto LAB_1485bc941;
      }
    }
    local_118 = *param_2;
    dStack_110 = param_2[1];
    local_8c = FUN_1485bbfe4(param_1);
    puStack_e0 = &local_8c;
    auVar10._0_8_ = param_2[1] / *(double *)(param_1 + 0x1c8);
    auVar10._8_8_ = 0;
    auVar9 = roundsd(auVar10,auVar10,9);
    local_84 = (int)auVar9._0_8_;
    auVar7._0_8_ = *param_2 / *(double *)(param_1 + 0x1c8);
    auVar7._8_8_ = 0;
    auVar9 = roundsd(auVar7,auVar7,9);
    local_88 = (int)auVar9._0_8_;
    local_e8 = &local_88;
    FUN_146bfb2fc(param_1 + 0x150,local_f0,&local_e8,0);
    uVar2 = local_8c;
  }
LAB_1485bc941:
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


