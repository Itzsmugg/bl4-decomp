// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479cd7bc FUN_1479cd7bc body=325 status=ok
// SIG undefined FUN_1479cd7bc(void)

void FUN_1479cd7bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 *param_6,undefined8 param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83b080;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar4;
  param_1[6] = param_3[2];
  dVar1 = *(double *)(param_8 + 0x30);
  dVar2 = *(double *)(param_8 + 0x10);
  dVar3 = *(double *)(param_8 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_8 + 0x20)) - (*(double *)(param_8 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479cd902 FUN_1479cd902 body=29 status=ok
// SIG undefined FUN_1479cd902(void)

undefined8 FUN_1479cd902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cd94d FUN_1479cd94d body=764 status=ok
// SIG undefined FUN_1479cd94d(void)

void FUN_1479cd94d(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x30);
  local_1b8 = *(undefined ***)(param_1 + 0x20);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
  local_1a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_198 = *(undefined8 *)(param_1 + 0x40);
  local_190 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b0d0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cdc4a FUN_1479cdc4a body=29 status=ok
// SIG undefined FUN_1479cdc4a(void)

undefined8 FUN_1479cdc4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cdc95 FUN_1479cdc95 body=495 status=ok
// SIG undefined FUN_1479cdc95(void)

void FUN_1479cdc95(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_228 [32];
  double *local_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198 [33];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_144b0186e(param_1,local_198);
  FUN_1400fd046(local_198,&local_90,param_3);
  local_200 = param_8;
  uStack_1f8 = param_9;
  local_208 = (double *)CONCAT62(local_208._2_6_,param_7);
  local_1f0 = param_1;
  FUN_1479cde86(local_198,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1a0 = (local_68 - local_80) * 0.5;
    local_1a8 = (local_70 - local_88) * 0.5;
    local_1b0 = (local_78 - local_90) * 0.5;
    local_208 = &local_1b0;
    local_1b8 = param_4[2];
    local_1c8 = *param_4;
    uStack_1c0 = param_4[1];
    local_1d0 = local_1a0 + local_80;
    local_1d8 = local_1a8 + local_88;
    local_1e0 = local_1b0 + local_90;
    local_200 = local_198;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1e0,&local_1c8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_90,local_198);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cde86 FUN_1479cde86 body=371 status=ok
// SIG undefined FUN_1479cde86(void)

undefined8 *
FUN_1479cde86(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined2 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83b120;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar4;
  param_1[3] = DAT_14c8464f0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = *(undefined8 *)(param_3 + 4);
  FUN_144b0186e(param_8,&local_78);
  param_1[7] = (local_60 - local_78) * 0.5;
  param_1[8] = (local_58 - local_70) * 0.5;
  param_1[9] = (local_50 - local_68) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cdffa FUN_1479cdffa body=29 status=ok
// SIG undefined FUN_1479cdffa(void)

undefined8 FUN_1479cdffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ce045 FUN_1479ce045 body=536 status=ok
// SIG undefined FUN_1479ce045(void)

void FUN_1479ce045(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,double *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_228 [32];
  double *local_208;
  double *local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_170 = (double)*(float *)(param_1 + 0x54);
  local_178 = (double)*(float *)(param_1 + 0x50);
  local_180 = (double)*(float *)(param_1 + 0x4c);
  local_188 = (double)*(float *)(param_1 + 0x48);
  local_190 = (double)*(float *)(param_1 + 0x44);
  local_198 = (double)*(float *)(param_1 + 0x40);
  FUN_1400fd046(&local_198,&local_90);
  local_200 = param_8;
  uStack_1f8 = param_9;
  local_208 = (double *)CONCAT62(local_208._2_6_,param_7);
  local_1f0 = param_1;
  FUN_1479ce25e(&local_198,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1a0 = (local_68 - local_80) * 0.5;
    local_1a8 = (local_70 - local_88) * 0.5;
    local_1b0 = (local_78 - local_90) * 0.5;
    local_208 = &local_1b0;
    local_1b8 = param_4[2];
    local_1c8 = *param_4;
    uStack_1c0 = param_4[1];
    local_1d0 = local_1a0 + local_80;
    local_1d8 = local_1a8 + local_88;
    local_1e0 = local_1b0 + local_90;
    local_200 = &local_198;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1e0,&local_1c8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_90,&local_198);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ce25e FUN_1479ce25e body=296 status=ok
// SIG undefined FUN_1479ce25e(void)

void FUN_1479ce25e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 *param_6,undefined8 param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b170;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar5;
  param_1[6] = param_3[2];
  fVar1 = *(float *)(param_8 + 0x54);
  fVar2 = *(float *)(param_8 + 0x50);
  fVar3 = *(float *)(param_8 + 0x48);
  fVar4 = *(float *)(param_8 + 0x44);
  param_1[7] = ((double)*(float *)(param_8 + 0x4c) - (double)*(float *)(param_8 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479ce386 FUN_1479ce386 body=29 status=ok
// SIG undefined FUN_1479ce386(void)

undefined8 FUN_1479ce386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ce3d1 FUN_1479ce3d1 body=770 status=ok
// SIG undefined FUN_1479ce3d1(void)

void FUN_1479ce3d1(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b1c0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ce6d4 FUN_1479ce6d4 body=29 status=ok
// SIG undefined FUN_1479ce6d4(void)

undefined8 FUN_1479ce6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ce71f FUN_1479ce71f body=770 status=ok
// SIG undefined FUN_1479ce71f(void)

void FUN_1479ce71f(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b210;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cea22 FUN_1479cea22 body=29 status=ok
// SIG undefined FUN_1479cea22(void)

undefined8 FUN_1479cea22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cea6d FUN_1479cea6d body=770 status=ok
// SIG undefined FUN_1479cea6d(void)

void FUN_1479cea6d(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b260;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ced70 FUN_1479ced70 body=29 status=ok
// SIG undefined FUN_1479ced70(void)

undefined8 FUN_1479ced70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cedbb FUN_1479cedbb body=770 status=ok
// SIG undefined FUN_1479cedbb(void)

void FUN_1479cedbb(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b2b0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cf0be FUN_1479cf0be body=29 status=ok
// SIG undefined FUN_1479cf0be(void)

undefined8 FUN_1479cf0be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cf109 FUN_1479cf109 body=593 status=ok
// SIG undefined FUN_1479cf109(void)

void FUN_1479cf109(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,double *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_238 [32];
  double *local_218;
  double *local_210;
  undefined8 uStack_208;
  longlong local_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(double *)(param_1 + 0x10);
  local_180 = local_1a8 + *(double *)(param_1 + 0x30);
  local_188 = local_1a8 + *(double *)(param_1 + 0x28);
  local_190 = local_1a8 + *(double *)(param_1 + 0x20);
  local_198 = *(double *)(param_1 + 0x30) - local_1a8;
  local_1a0 = *(double *)(param_1 + 0x28) - local_1a8;
  local_1a8 = *(double *)(param_1 + 0x20) - local_1a8;
  FUN_1400fd046(&local_1a8,&local_a0);
  local_210 = param_8;
  uStack_208 = param_9;
  local_218 = (double *)CONCAT62(local_218._2_6_,param_7);
  local_200 = param_1;
  FUN_1479cf35c(&local_1a8,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1b0 = (local_78 - local_90) * 0.5;
    local_1b8 = (local_80 - local_98) * 0.5;
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_218 = &local_1c0;
    local_1c8 = param_4[2];
    local_1d8 = *param_4;
    uStack_1d0 = param_4[1];
    local_1e0 = local_1b0 + local_90;
    local_1e8 = local_1b8 + local_98;
    local_1f0 = local_1c0 + local_a0;
    local_210 = &local_1a8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1f0,&local_1d8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_a0,&local_1a8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_70 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cf35c FUN_1479cf35c body=325 status=ok
// SIG undefined FUN_1479cf35c(void)

void FUN_1479cf35c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 *param_6,undefined8 param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83b300;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar4;
  param_1[6] = param_3[2];
  dVar1 = *(double *)(param_8 + 0x30);
  dVar2 = *(double *)(param_8 + 0x10);
  dVar3 = *(double *)(param_8 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_8 + 0x20)) - (*(double *)(param_8 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479cf4a2 FUN_1479cf4a2 body=29 status=ok
// SIG undefined FUN_1479cf4a2(void)

undefined8 FUN_1479cf4a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cf4e7 FUN_1479cf4e7 body=765 status=ok
// SIG undefined FUN_1479cf4e7(void)

void FUN_1479cf4e7(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x30);
  local_1b8 = *(undefined ***)(param_1 + 0x20);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
  local_1a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_198 = *(undefined8 *)(param_1 + 0x40);
  local_190 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b350;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cf7e6 FUN_1479cf7e6 body=29 status=ok
// SIG undefined FUN_1479cf7e6(void)

undefined8 FUN_1479cf7e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cf82b FUN_1479cf82b body=504 status=ok
// SIG undefined FUN_1479cf82b(void)

void FUN_1479cf82b(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_228 [32];
  double *local_208;
  undefined8 *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198 [33];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_144b0186e(param_1,local_198);
  FUN_1400fd046(local_198,&local_90,param_3);
  local_200 = param_8;
  uStack_1f8 = param_9;
  local_208 = (double *)CONCAT62(local_208._2_6_,param_7);
  local_1f0 = param_1;
  FUN_1479cfa24(local_198,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1a0 = (local_68 - local_80) * 0.5;
    local_1a8 = (local_70 - local_88) * 0.5;
    local_1b0 = (local_78 - local_90) * 0.5;
    local_208 = &local_1b0;
    local_1b8 = param_4[2];
    local_1c8 = *param_4;
    uStack_1c0 = param_4[1];
    local_1d0 = local_1a0 + local_80;
    local_1d8 = local_1a8 + local_88;
    local_1e0 = local_1b0 + local_90;
    local_200 = local_198;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1e0,&local_1c8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_90,local_198);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cfa24 FUN_1479cfa24 body=371 status=ok
// SIG undefined FUN_1479cfa24(void)

undefined8 *
FUN_1479cfa24(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined2 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83b3a0;
  uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar4;
  param_1[3] = DAT_14c8464f0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = *(undefined8 *)(param_3 + 4);
  FUN_144b0186e(param_8,&local_78);
  param_1[7] = (local_60 - local_78) * 0.5;
  param_1[8] = (local_58 - local_70) * 0.5;
  param_1[9] = (local_50 - local_68) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cfb98 FUN_1479cfb98 body=29 status=ok
// SIG undefined FUN_1479cfb98(void)

undefined8 FUN_1479cfb98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cfbdd FUN_1479cfbdd body=545 status=ok
// SIG undefined FUN_1479cfbdd(void)

void FUN_1479cfbdd(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,double *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_228 [32];
  double *local_208;
  double *local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_170 = (double)*(float *)(param_1 + 0x54);
  local_178 = (double)*(float *)(param_1 + 0x50);
  local_180 = (double)*(float *)(param_1 + 0x4c);
  local_188 = (double)*(float *)(param_1 + 0x48);
  local_190 = (double)*(float *)(param_1 + 0x44);
  local_198 = (double)*(float *)(param_1 + 0x40);
  FUN_1400fd046(&local_198,&local_90);
  local_200 = param_8;
  uStack_1f8 = param_9;
  local_208 = (double *)CONCAT62(local_208._2_6_,param_7);
  local_1f0 = param_1;
  FUN_1479cfe00(&local_198,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1a0 = (local_68 - local_80) * 0.5;
    local_1a8 = (local_70 - local_88) * 0.5;
    local_1b0 = (local_78 - local_90) * 0.5;
    local_208 = &local_1b0;
    local_1b8 = param_4[2];
    local_1c8 = *param_4;
    uStack_1c0 = param_4[1];
    local_1d0 = local_1a0 + local_80;
    local_1d8 = local_1a8 + local_88;
    local_1e0 = local_1b0 + local_90;
    local_200 = &local_198;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1e0,&local_1c8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_90,&local_198);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cfe00 FUN_1479cfe00 body=296 status=ok
// SIG undefined FUN_1479cfe00(void)

void FUN_1479cfe00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined2 param_5,undefined4 *param_6,undefined8 param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b3f0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = param_3[1];
  param_1[4] = *param_3;
  param_1[5] = uVar5;
  param_1[6] = param_3[2];
  fVar1 = *(float *)(param_8 + 0x54);
  fVar2 = *(float *)(param_8 + 0x50);
  fVar3 = *(float *)(param_8 + 0x48);
  fVar4 = *(float *)(param_8 + 0x44);
  param_1[7] = ((double)*(float *)(param_8 + 0x4c) - (double)*(float *)(param_8 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_6;
  *(undefined4 *)(param_1 + 0x10) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6[1];
  *(undefined4 *)(param_1 + 0x11) = param_6[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_6[3];
  param_1[0x12] = param_8;
  param_1[0x13] = param_7;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_6 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479cff28 FUN_1479cff28 body=29 status=ok
// SIG undefined FUN_1479cff28(void)

undefined8 FUN_1479cff28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cff6d FUN_1479cff6d body=771 status=ok
// SIG undefined FUN_1479cff6d(void)

void FUN_1479cff6d(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b440;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d0272 FUN_1479d0272 body=29 status=ok
// SIG undefined FUN_1479d0272(void)

undefined8 FUN_1479d0272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d02b7 FUN_1479d02b7 body=771 status=ok
// SIG undefined FUN_1479d02b7(void)

void FUN_1479d02b7(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b490;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d05bc FUN_1479d05bc body=29 status=ok
// SIG undefined FUN_1479d05bc(void)

undefined8 FUN_1479d05bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d0601 FUN_1479d0601 body=771 status=ok
// SIG undefined FUN_1479d0601(void)

void FUN_1479d0601(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b4e0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d0906 FUN_1479d0906 body=29 status=ok
// SIG undefined FUN_1479d0906(void)

undefined8 FUN_1479d0906(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d094b FUN_1479d094b body=771 status=ok
// SIG undefined FUN_1479d094b(void)

void FUN_1479d094b(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_14a83b530;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d0c50 FUN_1479d0c50 body=29 status=ok
// SIG undefined FUN_1479d0c50(void)

undefined8 FUN_1479d0c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d0c95 FUN_1479d0c95 body=571 status=ok
// SIG undefined FUN_1479d0c95(void)

void FUN_1479d0c95(longlong param_1,longlong *param_2,double *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

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
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [264];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar6 = *(double *)(param_1 + 0x20) * param_3[8];
  dVar7 = *(double *)(param_1 + 0x28) * param_3[9];
  dVar5 = *(double *)(param_1 + 0x30) * param_3[10];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar8 = dVar7 * dVar2 - dVar3 * dVar6;
  dVar9 = dVar5 * dVar3 - dVar4 * dVar7;
  dVar10 = dVar6 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_90 = (dVar8 * dVar3 - dVar10 * dVar4) + dVar1 * dVar9 + dVar6 + param_3[4];
  local_88 = (dVar4 * dVar9 - dVar2 * dVar8) + param_3[3] * dVar10 + dVar7 + param_3[5];
  local_80 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar2 - dVar9 * dVar3) + param_3[6];
  dVar1 = *(double *)(param_1 + 0x10);
  local_68 = dVar1 + local_80;
  local_70 = dVar1 + local_88;
  local_78 = dVar1 + local_90;
  local_80 = local_80 - dVar1;
  local_88 = local_88 - dVar1;
  local_90 = local_90 - dVar1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1a0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1a8 = param_6;
    FUN_1479d0ff0(local_198,param_3,param_4);
  }
  else {
    local_1a8 = param_6;
    FUN_1479d0ed2(local_198,param_3,param_4);
  }
  (**(code **)(*param_2 + 0x60))(param_2,&local_90,local_198);
  FUN_140213fc0(param_4);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d0ed2 FUN_1479d0ed2 body=286 status=ok
// SIG undefined FUN_1479d0ed2(void)

undefined8 *
FUN_1479d0ed2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83b580;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar4;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x30);
  dVar2 = *(double *)(param_6 + 0x10);
  dVar3 = *(double *)(param_6 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_6 + 0x20)) - (*(double *)(param_6 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar6 = param_1 + 0x12;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d0ff0 FUN_1479d0ff0 body=323 status=ok
// SIG undefined FUN_1479d0ff0(void)

void FUN_1479d0ff0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83b5d0;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar4;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x30);
  dVar2 = *(double *)(param_6 + 0x10);
  dVar3 = *(double *)(param_6 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_6 + 0x20)) - (*(double *)(param_6 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d1134 FUN_1479d1134 body=29 status=ok
// SIG undefined FUN_1479d1134(void)

undefined8 FUN_1479d1134(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d116e FUN_1479d116e body=29 status=ok
// SIG undefined FUN_1479d116e(void)

undefined8 FUN_1479d116e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d11b6 FUN_1479d11b6 body=285 status=ok
// SIG undefined FUN_1479d11b6(void)

void FUN_1479d11b6(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d13be(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d12d4(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d12d4 FUN_1479d12d4 body=234 status=ok
// SIG undefined FUN_1479d12d4(void)

undefined8 *
FUN_1479d12d4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b620;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x40);
  dVar2 = *(double *)(param_6 + 0x48);
  dVar3 = *(double *)(param_6 + 0x30);
  dVar4 = *(double *)(param_6 + 0x28);
  param_1[7] = (*(double *)(param_6 + 0x38) - *(double *)(param_6 + 0x20)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d13be FUN_1479d13be body=265 status=ok
// SIG undefined FUN_1479d13be(void)

void FUN_1479d13be(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b670;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x40);
  dVar2 = *(double *)(param_6 + 0x48);
  dVar3 = *(double *)(param_6 + 0x30);
  dVar4 = *(double *)(param_6 + 0x28);
  param_1[7] = (*(double *)(param_6 + 0x38) - *(double *)(param_6 + 0x20)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d14c8 FUN_1479d14c8 body=29 status=ok
// SIG undefined FUN_1479d14c8(void)

undefined8 FUN_1479d14c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d1502 FUN_1479d1502 body=29 status=ok
// SIG undefined FUN_1479d1502(void)

undefined8 FUN_1479d1502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d154a FUN_1479d154a body=250 status=ok
// SIG undefined FUN_1479d154a(void)

void FUN_1479d154a(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178 [32];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar2 = param_3;
  puVar3 = local_178;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_144b01956(param_1,local_78);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_180 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_188 = param_6;
    FUN_1479d1784(local_178,param_3,param_4,param_5);
  }
  else {
    local_188 = param_6;
    FUN_1479d1646(local_178,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_78,local_178);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d1646 FUN_1479d1646 body=316 status=ok
// SIG undefined FUN_1479d1646(void)

undefined8 *
FUN_1479d1646(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83b6c0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = DAT_14c8464f0;
  FUN_144b0186e(param_6,&local_70);
  param_1[7] = (local_58 - local_70) * 0.5;
  param_1[8] = (local_50 - local_68) * 0.5;
  param_1[9] = (local_48 - local_60) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar6 = param_1 + 0x12;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d1784 FUN_1479d1784 body=365 status=ok
// SIG undefined FUN_1479d1784(void)

undefined8 *
FUN_1479d1784(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83b710;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = DAT_14c8464f0;
  FUN_144b0186e(param_6,&local_70);
  param_1[7] = (local_58 - local_70) * 0.5;
  param_1[8] = (local_50 - local_68) * 0.5;
  param_1[9] = (local_48 - local_60) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d18f2 FUN_1479d18f2 body=29 status=ok
// SIG undefined FUN_1479d18f2(void)

undefined8 FUN_1479d18f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d192c FUN_1479d192c body=29 status=ok
// SIG undefined FUN_1479d192c(void)

undefined8 FUN_1479d192c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d1974 FUN_1479d1974 body=285 status=ok
// SIG undefined FUN_1479d1974(void)

void FUN_1479d1974(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d1b8c(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d1a92(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d1a92 FUN_1479d1a92 body=249 status=ok
// SIG undefined FUN_1479d1a92(void)

undefined8 *
FUN_1479d1a92(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b760;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  fVar1 = *(float *)(param_6 + 0x54);
  fVar2 = *(float *)(param_6 + 0x50);
  fVar3 = *(float *)(param_6 + 0x48);
  fVar4 = *(float *)(param_6 + 0x44);
  param_1[7] = ((double)*(float *)(param_6 + 0x4c) - (double)*(float *)(param_6 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d1b8c FUN_1479d1b8c body=286 status=ok
// SIG undefined FUN_1479d1b8c(void)

void FUN_1479d1b8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b7b0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  fVar1 = *(float *)(param_6 + 0x54);
  fVar2 = *(float *)(param_6 + 0x50);
  fVar3 = *(float *)(param_6 + 0x48);
  fVar4 = *(float *)(param_6 + 0x44);
  param_1[7] = ((double)*(float *)(param_6 + 0x4c) - (double)*(float *)(param_6 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d1caa FUN_1479d1caa body=29 status=ok
// SIG undefined FUN_1479d1caa(void)

undefined8 FUN_1479d1caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d1ce4 FUN_1479d1ce4 body=29 status=ok
// SIG undefined FUN_1479d1ce4(void)

undefined8 FUN_1479d1ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d1d2c FUN_1479d1d2c body=285 status=ok
// SIG undefined FUN_1479d1d2c(void)

void FUN_1479d1d2c(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d1f38(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d1e4a(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d1e4a FUN_1479d1e4a body=237 status=ok
// SIG undefined FUN_1479d1e4a(void)

undefined8 *
FUN_1479d1e4a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b800;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d1f38 FUN_1479d1f38 body=268 status=ok
// SIG undefined FUN_1479d1f38(void)

void FUN_1479d1f38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b850;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d2044 FUN_1479d2044 body=29 status=ok
// SIG undefined FUN_1479d2044(void)

undefined8 FUN_1479d2044(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d207e FUN_1479d207e body=29 status=ok
// SIG undefined FUN_1479d207e(void)

undefined8 FUN_1479d207e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d20c6 FUN_1479d20c6 body=285 status=ok
// SIG undefined FUN_1479d20c6(void)

void FUN_1479d20c6(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d22d2(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d21e4(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d21e4 FUN_1479d21e4 body=237 status=ok
// SIG undefined FUN_1479d21e4(void)

undefined8 *
FUN_1479d21e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b8a0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d22d2 FUN_1479d22d2 body=268 status=ok
// SIG undefined FUN_1479d22d2(void)

void FUN_1479d22d2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b8f0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d23de FUN_1479d23de body=29 status=ok
// SIG undefined FUN_1479d23de(void)

undefined8 FUN_1479d23de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d2418 FUN_1479d2418 body=29 status=ok
// SIG undefined FUN_1479d2418(void)

undefined8 FUN_1479d2418(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d2460 FUN_1479d2460 body=285 status=ok
// SIG undefined FUN_1479d2460(void)

void FUN_1479d2460(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d266c(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d257e(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d257e FUN_1479d257e body=237 status=ok
// SIG undefined FUN_1479d257e(void)

undefined8 *
FUN_1479d257e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b940;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d266c FUN_1479d266c body=268 status=ok
// SIG undefined FUN_1479d266c(void)

void FUN_1479d266c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b990;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d2778 FUN_1479d2778 body=29 status=ok
// SIG undefined FUN_1479d2778(void)

undefined8 FUN_1479d2778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d27b2 FUN_1479d27b2 body=29 status=ok
// SIG undefined FUN_1479d27b2(void)

undefined8 FUN_1479d27b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d27fa FUN_1479d27fa body=285 status=ok
// SIG undefined FUN_1479d27fa(void)

void FUN_1479d27fa(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d2a06(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d2918(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d2918 FUN_1479d2918 body=237 status=ok
// SIG undefined FUN_1479d2918(void)

undefined8 *
FUN_1479d2918(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83b9e0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d2a06 FUN_1479d2a06 body=268 status=ok
// SIG undefined FUN_1479d2a06(void)

void FUN_1479d2a06(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83ba30;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d2b12 FUN_1479d2b12 body=29 status=ok
// SIG undefined FUN_1479d2b12(void)

undefined8 FUN_1479d2b12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d2b4c FUN_1479d2b4c body=29 status=ok
// SIG undefined FUN_1479d2b4c(void)

undefined8 FUN_1479d2b4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d2b94 FUN_1479d2b94 body=571 status=ok
// SIG undefined FUN_1479d2b94(void)

void FUN_1479d2b94(longlong param_1,longlong *param_2,double *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

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
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198 [264];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar6 = *(double *)(param_1 + 0x20) * param_3[8];
  dVar7 = *(double *)(param_1 + 0x28) * param_3[9];
  dVar5 = *(double *)(param_1 + 0x30) * param_3[10];
  dVar4 = param_3[2];
  dVar1 = param_3[3];
  dVar8 = dVar7 * dVar2 - dVar3 * dVar6;
  dVar9 = dVar5 * dVar3 - dVar4 * dVar7;
  dVar10 = dVar6 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_90 = (dVar8 * dVar3 - dVar10 * dVar4) + dVar1 * dVar9 + dVar6 + param_3[4];
  local_88 = (dVar4 * dVar9 - dVar2 * dVar8) + param_3[3] * dVar10 + dVar7 + param_3[5];
  local_80 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar2 - dVar9 * dVar3) + param_3[6];
  dVar1 = *(double *)(param_1 + 0x10);
  local_68 = dVar1 + local_80;
  local_70 = dVar1 + local_88;
  local_78 = dVar1 + local_90;
  local_80 = local_80 - dVar1;
  local_88 = local_88 - dVar1;
  local_90 = local_90 - dVar1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1a0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1a8 = param_6;
    FUN_1479d2eee(local_198,param_3,param_4);
  }
  else {
    local_1a8 = param_6;
    FUN_1479d2dd0(local_198,param_3,param_4);
  }
  (**(code **)(*param_2 + 0x60))(param_2,&local_90,local_198);
  FUN_146ef7780(param_4);
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d2dd0 FUN_1479d2dd0 body=286 status=ok
// SIG undefined FUN_1479d2dd0(void)

undefined8 *
FUN_1479d2dd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83ba80;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar4;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x30);
  dVar2 = *(double *)(param_6 + 0x10);
  dVar3 = *(double *)(param_6 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_6 + 0x20)) - (*(double *)(param_6 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar6 = param_1 + 0x12;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d2eee FUN_1479d2eee body=323 status=ok
// SIG undefined FUN_1479d2eee(void)

void FUN_1479d2eee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_14a83bad0;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar4;
  uVar4 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar4;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x30);
  dVar2 = *(double *)(param_6 + 0x10);
  dVar3 = *(double *)(param_6 + 0x28);
  param_1[7] = ((dVar2 + *(double *)(param_6 + 0x20)) - (*(double *)(param_6 + 0x20) - dVar2)) * 0.5
  ;
  param_1[8] = ((dVar2 + dVar3) - (dVar3 - dVar2)) * 0.5;
  param_1[9] = ((dVar2 + dVar1) - (dVar1 - dVar2)) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d3032 FUN_1479d3032 body=29 status=ok
// SIG undefined FUN_1479d3032(void)

undefined8 FUN_1479d3032(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d306a FUN_1479d306a body=29 status=ok
// SIG undefined FUN_1479d306a(void)

undefined8 FUN_1479d306a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d30ac FUN_1479d30ac body=285 status=ok
// SIG undefined FUN_1479d30ac(void)

void FUN_1479d30ac(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d32b4(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d31ca(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d31ca FUN_1479d31ca body=234 status=ok
// SIG undefined FUN_1479d31ca(void)

undefined8 *
FUN_1479d31ca(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bb20;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x40);
  dVar2 = *(double *)(param_6 + 0x48);
  dVar3 = *(double *)(param_6 + 0x30);
  dVar4 = *(double *)(param_6 + 0x28);
  param_1[7] = (*(double *)(param_6 + 0x38) - *(double *)(param_6 + 0x20)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d32b4 FUN_1479d32b4 body=265 status=ok
// SIG undefined FUN_1479d32b4(void)

void FUN_1479d32b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bb70;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x40);
  dVar2 = *(double *)(param_6 + 0x48);
  dVar3 = *(double *)(param_6 + 0x30);
  dVar4 = *(double *)(param_6 + 0x28);
  param_1[7] = (*(double *)(param_6 + 0x38) - *(double *)(param_6 + 0x20)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d33be FUN_1479d33be body=29 status=ok
// SIG undefined FUN_1479d33be(void)

undefined8 FUN_1479d33be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d33f6 FUN_1479d33f6 body=29 status=ok
// SIG undefined FUN_1479d33f6(void)

undefined8 FUN_1479d33f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3438 FUN_1479d3438 body=250 status=ok
// SIG undefined FUN_1479d3438(void)

void FUN_1479d3438(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178 [32];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar2 = param_3;
  puVar3 = local_178;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_144b01956(param_1,local_78);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_180 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_188 = param_6;
    FUN_1479d3672(local_178,param_3,param_4,param_5);
  }
  else {
    local_188 = param_6;
    FUN_1479d3534(local_178,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_78,local_178);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d3534 FUN_1479d3534 body=316 status=ok
// SIG undefined FUN_1479d3534(void)

undefined8 *
FUN_1479d3534(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83bbc0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = DAT_14c8464f0;
  FUN_144b0186e(param_6,&local_70);
  param_1[7] = (local_58 - local_70) * 0.5;
  param_1[8] = (local_50 - local_68) * 0.5;
  param_1[9] = (local_48 - local_60) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar6 = param_1 + 0x12;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d3672 FUN_1479d3672 body=365 status=ok
// SIG undefined FUN_1479d3672(void)

undefined8 *
FUN_1479d3672(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a83bc10;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = DAT_14c8464f0;
  FUN_144b0186e(param_6,&local_70);
  param_1[7] = (local_58 - local_70) * 0.5;
  param_1[8] = (local_50 - local_68) * 0.5;
  param_1[9] = (local_48 - local_60) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar6 = param_1 + 0x14;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d37e0 FUN_1479d37e0 body=29 status=ok
// SIG undefined FUN_1479d37e0(void)

undefined8 FUN_1479d37e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3818 FUN_1479d3818 body=29 status=ok
// SIG undefined FUN_1479d3818(void)

undefined8 FUN_1479d3818(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d385a FUN_1479d385a body=285 status=ok
// SIG undefined FUN_1479d385a(void)

void FUN_1479d385a(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d3a72(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d3978(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d3978 FUN_1479d3978 body=249 status=ok
// SIG undefined FUN_1479d3978(void)

undefined8 *
FUN_1479d3978(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bc60;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  fVar1 = *(float *)(param_6 + 0x54);
  fVar2 = *(float *)(param_6 + 0x50);
  fVar3 = *(float *)(param_6 + 0x48);
  fVar4 = *(float *)(param_6 + 0x44);
  param_1[7] = ((double)*(float *)(param_6 + 0x4c) - (double)*(float *)(param_6 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d3a72 FUN_1479d3a72 body=286 status=ok
// SIG undefined FUN_1479d3a72(void)

void FUN_1479d3a72(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bcb0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  fVar1 = *(float *)(param_6 + 0x54);
  fVar2 = *(float *)(param_6 + 0x50);
  fVar3 = *(float *)(param_6 + 0x48);
  fVar4 = *(float *)(param_6 + 0x44);
  param_1[7] = ((double)*(float *)(param_6 + 0x4c) - (double)*(float *)(param_6 + 0x40)) * 0.5;
  param_1[8] = ((double)fVar2 - (double)fVar4) * 0.5;
  param_1[9] = ((double)fVar1 - (double)fVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d3b90 FUN_1479d3b90 body=29 status=ok
// SIG undefined FUN_1479d3b90(void)

undefined8 FUN_1479d3b90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3bc8 FUN_1479d3bc8 body=29 status=ok
// SIG undefined FUN_1479d3bc8(void)

undefined8 FUN_1479d3bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3c0a FUN_1479d3c0a body=285 status=ok
// SIG undefined FUN_1479d3c0a(void)

void FUN_1479d3c0a(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d3e16(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d3d28(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d3d28 FUN_1479d3d28 body=237 status=ok
// SIG undefined FUN_1479d3d28(void)

undefined8 *
FUN_1479d3d28(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bd00;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d3e16 FUN_1479d3e16 body=268 status=ok
// SIG undefined FUN_1479d3e16(void)

void FUN_1479d3e16(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bd50;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d3f22 FUN_1479d3f22 body=29 status=ok
// SIG undefined FUN_1479d3f22(void)

undefined8 FUN_1479d3f22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3f5a FUN_1479d3f5a body=29 status=ok
// SIG undefined FUN_1479d3f5a(void)

undefined8 FUN_1479d3f5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d3f9c FUN_1479d3f9c body=285 status=ok
// SIG undefined FUN_1479d3f9c(void)

void FUN_1479d3f9c(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d41a8(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d40ba(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d40ba FUN_1479d40ba body=237 status=ok
// SIG undefined FUN_1479d40ba(void)

undefined8 *
FUN_1479d40ba(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bda0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d41a8 FUN_1479d41a8 body=268 status=ok
// SIG undefined FUN_1479d41a8(void)

void FUN_1479d41a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bdf0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d42b4 FUN_1479d42b4 body=29 status=ok
// SIG undefined FUN_1479d42b4(void)

undefined8 FUN_1479d42b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d42ec FUN_1479d42ec body=29 status=ok
// SIG undefined FUN_1479d42ec(void)

undefined8 FUN_1479d42ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d432e FUN_1479d432e body=285 status=ok
// SIG undefined FUN_1479d432e(void)

void FUN_1479d432e(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d453a(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d444c(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d444c FUN_1479d444c body=237 status=ok
// SIG undefined FUN_1479d444c(void)

undefined8 *
FUN_1479d444c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83be40;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d453a FUN_1479d453a body=268 status=ok
// SIG undefined FUN_1479d453a(void)

void FUN_1479d453a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83be90;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d4646 FUN_1479d4646 body=29 status=ok
// SIG undefined FUN_1479d4646(void)

undefined8 FUN_1479d4646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d467e FUN_1479d467e body=29 status=ok
// SIG undefined FUN_1479d467e(void)

undefined8 FUN_1479d467e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d46c0 FUN_1479d46c0 body=285 status=ok
// SIG undefined FUN_1479d46c0(void)

void FUN_1479d46c0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8 [32];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar2 = param_3;
  puVar3 = local_1a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_1b0 = param_1;
  if ((*(byte *)(param_5 + 0x10) & 0x40) == 0) {
    local_1b8 = param_6;
    FUN_1479d48cc(local_1a8,param_3,param_4,param_5);
  }
  else {
    local_1b8 = param_6;
    FUN_1479d47de(local_1a8,param_3,param_4,param_5);
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d47de FUN_1479d47de body=237 status=ok
// SIG undefined FUN_1479d47de(void)

undefined8 *
FUN_1479d47de(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bee0;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  FUN_146ef317b(param_1 + 0xd,param_4);
  param_1[0xf] = param_6;
  param_1[0x10] = param_5;
  puVar7 = param_1 + 0x12;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_1[0xc] + 0x10) >> 4 & 1;
  return param_1;
}



// FUNCTION 1479d48cc FUN_1479d48cc body=268 status=ok
// SIG undefined FUN_1479d48cc(void)

void FUN_1479d48cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14a83bf30;
  param_1[3] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = uVar5;
  param_1[6] = DAT_14c8464f0;
  dVar1 = *(double *)(param_6 + 0x78);
  dVar2 = *(double *)(param_6 + 0x80);
  dVar3 = *(double *)(param_6 + 0x68);
  dVar4 = *(double *)(param_6 + 0x60);
  param_1[7] = (*(double *)(param_6 + 0x70) - *(double *)(param_6 + 0x58)) * 0.5;
  param_1[8] = (dVar1 - dVar4) * 0.5;
  param_1[9] = (dVar2 - dVar3) * 0.5;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  uVar5 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar5;
  param_1[0xd] = DAT_14c8464f0;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_4[1];
  *(undefined4 *)(param_1 + 0x11) = param_4[2];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_4[3];
  param_1[0x12] = param_6;
  param_1[0x13] = param_5;
  puVar7 = param_1 + 0x14;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_4 + 4) >> 4 & 1;
  return;
}



// FUNCTION 1479d49d8 FUN_1479d49d8 body=29 status=ok
// SIG undefined FUN_1479d49d8(void)

undefined8 FUN_1479d49d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d4a10 FUN_1479d4a10 body=29 status=ok
// SIG undefined FUN_1479d4a10(void)

undefined8 FUN_1479d4a10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d4a52 FUN_1479d4a52 body=130 status=ok
// SIG undefined FUN_1479d4a52(void)

void FUN_1479d4a52(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d4ad6 FUN_1479d4ad6 body=132 status=ok
// SIG undefined FUN_1479d4ad6(void)

void FUN_1479d4ad6(longlong param_1,int param_2)

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



// FUNCTION 1479d4b5c FUN_1479d4b5c body=132 status=ok
// SIG undefined FUN_1479d4b5c(void)

void FUN_1479d4b5c(longlong param_1,int param_2)

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



// FUNCTION 1479d4be2 FUN_1479d4be2 body=327 status=ok
// SIG undefined FUN_1479d4be2(void)

undefined4 * FUN_1479d4be2(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479d4d2a(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1479d4e10(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1479d4f2a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d4d2a FUN_1479d4d2a body=229 status=ok
// SIG undefined FUN_1479d4d2a(void)

int * FUN_1479d4d2a(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1479d4e10 FUN_1479d4e10 body=144 status=ok
// SIG undefined FUN_1479d4e10(void)

void FUN_1479d4e10(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1479d4ea0(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1479d4e7b;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1479d4e7b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1479d4ea0 FUN_1479d4ea0 body=138 status=ok
// SIG undefined FUN_1479d4ea0(void)

void FUN_1479d4ea0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479d4f2a FUN_1479d4f2a body=477 status=ok
// SIG undefined FUN_1479d4f2a(void)

void FUN_1479d4f2a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1479d5108 FUN_1479d5108 body=112 status=ok
// SIG undefined FUN_1479d5108(void)

void FUN_1479d5108(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1479d5178 FUN_1479d5178 body=147 status=ok
// SIG undefined FUN_1479d5178(void)

void FUN_1479d5178(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479d520c FUN_1479d520c body=413 status=ok
// SIG undefined FUN_1479d520c(void)

undefined4 *
FUN_1479d520c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1479d53aa(param_1,local_50);
  puVar7 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_48;
  }
  bVar1 = DAT_14c950c29;
  puVar8 = local_48 + 2;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(local_48 + 0xe) = 0xffffffff;
  local_54 = local_50[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1479d5490(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x74) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0xe) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1479d56b2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d53aa FUN_1479d53aa body=229 status=ok
// SIG undefined FUN_1479d53aa(void)

int * FUN_1479d53aa(longlong *param_1,int *param_2)

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
      FUN_14045f6dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 1479d5490 FUN_1479d5490 body=198 status=ok
// SIG undefined FUN_1479d5490(void)

void FUN_1479d5490(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_1479d5558(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      memmove((void *)((longlong)iVar2 * 0x80 + *param_1),param_3,0x70);
      FUN_1479d5628(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_1479d54be;
    }
  }
  uVar1 = 0;
LAB_1479d54be:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d5558 FUN_1479d5558 body=207 status=ok
// SIG undefined FUN_1479d5558(void)

int FUN_1479d5558(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x70 + (longlong)iVar1 * 0x80)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x80);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1479d5628 FUN_1479d5628 body=138 status=ok
// SIG undefined FUN_1479d5628(void)

void FUN_1479d5628(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
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
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479d56b2 FUN_1479d56b2 body=510 status=ok
// SIG undefined FUN_1479d56b2(void)

void FUN_1479d56b2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x80);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x80;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x74) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x70) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479d58b2 FUN_1479d58b2 body=110 status=ok
// SIG undefined FUN_1479d58b2(void)

undefined4 * FUN_1479d58b2(undefined8 param_1,undefined4 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = FUN_1479d5558(param_1,uVar2 >> 0x10 ^ uVar2,param_3);
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1479d5920 FUN_1479d5920 body=96 status=ok
// SIG undefined FUN_1479d5920(void)

void FUN_1479d5920(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x74 + (longlong)param_2 * 0x80);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x70 + lVar5 * 0x80);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x80 + 0x70);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x80 + 0x70);
  FUN_1479d5628(param_1,param_2,1);
  return;
}



// FUNCTION 1479d5980 FUN_1479d5980 body=318 status=ok
// SIG undefined FUN_1479d5980(void)

undefined8 FUN_1479d5980(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x80 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_1479d5920(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[0xe];
        puVar7 = puVar8 + 0xe;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479d5abe FUN_1479d5abe body=143 status=ok
// SIG undefined FUN_1479d5abe(void)

void FUN_1479d5abe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_144aa17a4();
  if (DAT_14cacff78 == 0) {
    uVar3 = FUN_140002dac();
    DAT_14cacff78 = FUN_140002ddd(FUN_1463b3fe3,uVar3,L"ActorComponentInstanceData");
    if (DAT_14cacff78 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cacff78;
  FUN_14485c47a(param_1 + 8,DAT_14cacff78);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar4 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_1479b5da0(uVar3,*param_2);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 1479d5b4e FUN_1479d5b4e body=29 status=ok
// SIG undefined FUN_1479d5b4e(void)

undefined8 FUN_1479d5b4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d5b86 FUN_1479d5b86 body=29 status=ok
// SIG undefined FUN_1479d5b86(void)

bool FUN_1479d5b86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d5ba4 FUN_1479d5ba4 body=26 status=ok
// SIG undefined FUN_1479d5ba4(void)

bool FUN_1479d5ba4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d5bbe FUN_1479d5bbe body=24 status=ok
// SIG undefined FUN_1479d5bbe(void)

bool FUN_1479d5bbe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d5bd6 FUN_1479d5bd6 body=101 status=ok
// SIG undefined FUN_1479d5bd6(void)

void FUN_1479d5bd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a83c070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d5c3c FUN_1479d5c3c body=101 status=ok
// SIG undefined FUN_1479d5c3c(void)

void FUN_1479d5c3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a83c070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d5ca2 FUN_1479d5ca2 body=134 status=ok
// SIG undefined FUN_1479d5ca2(void)

void FUN_1479d5ca2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a83c0e0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c070;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d5d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d5d28 FUN_1479d5d28 body=39 status=ok
// SIG undefined FUN_1479d5d28(void)

void FUN_1479d5d28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d5d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined1 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1479d5d50 FUN_1479d5d50 body=149 status=ok
// SIG undefined FUN_1479d5d50(void)

bool FUN_1479d5d50(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined1 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d5de8 FUN_1479d5de8 body=132 status=ok
// SIG undefined FUN_1479d5de8(void)

void FUN_1479d5de8(longlong param_1,int param_2)

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



// FUNCTION 1479d5e6e FUN_1479d5e6e body=297 status=ok
// SIG undefined FUN_1479d5e6e(void)

void FUN_1479d5e6e(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14496b3f0(param_2);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar2;
    if (lVar2 == 0) {
      FUN_1400021e4((longlong *)(param_2 + 0x20),local_40);
      cVar1 = FUN_144a38768(local_40,L"__DelegateSignature",0x13,1);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        lVar2 = FUN_14689b0d6(param_2);
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        *param_1 = lVar2;
      }
      param_1[3] = *(longlong *)(param_2 + 0x20);
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined2 *)(param_1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *param_1 = lVar2;
  }
  param_1[3] = *(longlong *)(param_2 + 0x20);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1479d5fa4(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68,*(undefined8 *)(param_2 + 0x20),param_1 + 4);
}



// FUNCTION 1479d5fa4 FUN_1479d5fa4 body=197 status=ok
// SIG undefined FUN_1479d5fa4(void)

ulonglong FUN_1479d5fa4(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  ulonglong unaff_RBP;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14797d0e2(0,&local_58);
  lVar1 = local_58;
  lVar3 = (longlong)(int)uStack_50;
  if (lVar3 == 0) {
    unaff_RBP = 0;
  }
  else {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x10))
                (*(longlong **)(lVar1 + lVar2),&local_68,param_2);
      bVar4 = ((iStack_64 != 0 || local_68 != 0) || iStack_60 != 0) || iStack_5c != 0;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar4);
      if (bVar4) {
        *param_3 = local_68;
        param_3[1] = iStack_64;
        param_3[2] = iStack_60;
        param_3[3] = iStack_5c;
        break;
      }
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1479d606a FUN_1479d606a body=154 status=ok
// SIG undefined FUN_1479d606a(void)

undefined8 FUN_1479d606a(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1400fbee6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479d6104 FUN_1479d6104 body=105 status=ok
// SIG undefined FUN_1479d6104(void)

undefined4 FUN_1479d6104(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((*param_1 == lVar1) && (param_1[1] == param_2[1])) {
    uVar2 = CONCAT31((int3)((*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2)) >> 8),
                     *(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
                     ((int)param_1[3] == (int)param_2[3] &&
                     (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14) &&
                     (*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2)) == 0)));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1479d616e FUN_1479d616e body=62 status=ok
// SIG undefined FUN_1479d616e(void)

void FUN_1479d616e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479d61ac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1479d61ac FUN_1479d61ac body=93 status=ok
// SIG undefined FUN_1479d61ac(void)

ulonglong FUN_1479d61ac(uint param_1,uint param_2)

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



// FUNCTION 1479d620a FUN_1479d620a body=29 status=ok
// SIG undefined FUN_1479d620a(void)

undefined8 FUN_1479d620a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d6242 FUN_1479d6242 body=29 status=ok
// SIG undefined FUN_1479d6242(void)

bool FUN_1479d6242(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d6260 FUN_1479d6260 body=26 status=ok
// SIG undefined FUN_1479d6260(void)

bool FUN_1479d6260(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d627a FUN_1479d627a body=24 status=ok
// SIG undefined FUN_1479d627a(void)

bool FUN_1479d627a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d6292 FUN_1479d6292 body=101 status=ok
// SIG undefined FUN_1479d6292(void)

void FUN_1479d6292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d62f8 FUN_1479d62f8 body=101 status=ok
// SIG undefined FUN_1479d62f8(void)

void FUN_1479d62f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d635e FUN_1479d635e body=134 status=ok
// SIG undefined FUN_1479d635e(void)

void FUN_1479d635e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c150;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d63d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d63e4 FUN_1479d63e4 body=39 status=ok
// SIG undefined FUN_1479d63e4(void)

void FUN_1479d63e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d6407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1479d640c FUN_1479d640c body=146 status=ok
// SIG undefined FUN_1479d640c(void)

bool FUN_1479d640c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d64a0 FUN_1479d64a0 body=229 status=ok
// SIG undefined FUN_1479d64a0(void)

LPCRITICAL_SECTION FUN_1479d64a0(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e065d0;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14a83c1c0;
  (p_Var3->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var3->ProcessLocksList).Blink,param_2);
  p_Var3->Flags = DVar1;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1479d6586 FUN_1479d6586 body=29 status=ok
// SIG undefined FUN_1479d6586(void)

undefined8 FUN_1479d6586(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d65be FUN_1479d65be body=29 status=ok
// SIG undefined FUN_1479d65be(void)

bool FUN_1479d65be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d65dc FUN_1479d65dc body=26 status=ok
// SIG undefined FUN_1479d65dc(void)

bool FUN_1479d65dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d65f6 FUN_1479d65f6 body=24 status=ok
// SIG undefined FUN_1479d65f6(void)

bool FUN_1479d65f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d660e FUN_1479d660e body=101 status=ok
// SIG undefined FUN_1479d660e(void)

void FUN_1479d660e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6674 FUN_1479d6674 body=101 status=ok
// SIG undefined FUN_1479d6674(void)

void FUN_1479d6674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e065d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d66da FUN_1479d66da body=134 status=ok
// SIG undefined FUN_1479d66da(void)

void FUN_1479d66da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e065d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c1c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d6751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d6760 FUN_1479d6760 body=39 status=ok
// SIG undefined FUN_1479d6760(void)

void FUN_1479d6760(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d6783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1479d6788 FUN_1479d6788 body=146 status=ok
// SIG undefined FUN_1479d6788(void)

bool FUN_1479d6788(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d681c FUN_1479d681c body=29 status=ok
// SIG undefined FUN_1479d681c(void)

undefined8 FUN_1479d681c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d6854 FUN_1479d6854 body=29 status=ok
// SIG undefined FUN_1479d6854(void)

bool FUN_1479d6854(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d6872 FUN_1479d6872 body=26 status=ok
// SIG undefined FUN_1479d6872(void)

bool FUN_1479d6872(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d688c FUN_1479d688c body=24 status=ok
// SIG undefined FUN_1479d688c(void)

bool FUN_1479d688c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d68a4 FUN_1479d68a4 body=101 status=ok
// SIG undefined FUN_1479d68a4(void)

void FUN_1479d68a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d690a FUN_1479d690a body=101 status=ok
// SIG undefined FUN_1479d690a(void)

void FUN_1479d690a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6970 FUN_1479d6970 body=134 status=ok
// SIG undefined FUN_1479d6970(void)

void FUN_1479d6970(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c230;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d69e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d69f6 FUN_1479d69f6 body=44 status=ok
// SIG undefined FUN_1479d69f6(void)

void FUN_1479d69f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d6a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479d6a22 FUN_1479d6a22 body=156 status=ok
// SIG undefined FUN_1479d6a22(void)

bool FUN_1479d6a22(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d6ac0 FUN_1479d6ac0 body=243 status=ok
// SIG undefined FUN_1479d6ac0(void)

undefined8 * FUN_1479d6ac0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c8674e8,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c8674f0;
      lVar6 = (longlong)(int)DAT_14c8674f0;
      DAT_14c8674f0 = DAT_14c8674f0 + 1;
      if (DAT_14c8674f4 < DAT_14c8674f0) {
        FUN_1447a71f6(&DAT_14c8674e8,uVar3);
      }
      lVar2 = DAT_14c8674e8;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c8674e8 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d6bb4 FUN_1479d6bb4 body=29 status=ok
// SIG undefined FUN_1479d6bb4(void)

undefined8 FUN_1479d6bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d6bec FUN_1479d6bec body=29 status=ok
// SIG undefined FUN_1479d6bec(void)

bool FUN_1479d6bec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d6c0a FUN_1479d6c0a body=26 status=ok
// SIG undefined FUN_1479d6c0a(void)

bool FUN_1479d6c0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d6c24 FUN_1479d6c24 body=24 status=ok
// SIG undefined FUN_1479d6c24(void)

bool FUN_1479d6c24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d6c48 FUN_1479d6c48 body=101 status=ok
// SIG undefined FUN_1479d6c48(void)

void FUN_1479d6c48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6cae FUN_1479d6cae body=101 status=ok
// SIG undefined FUN_1479d6cae(void)

void FUN_1479d6cae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a83c310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c2a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6d14 FUN_1479d6d14 body=134 status=ok
// SIG undefined FUN_1479d6d14(void)

void FUN_1479d6d14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a83c310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c2a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d6d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d6d9a FUN_1479d6d9a body=42 status=ok
// SIG undefined FUN_1479d6d9a(void)

void FUN_1479d6d9a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d6dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479d6dc4 FUN_1479d6dc4 body=154 status=ok
// SIG undefined FUN_1479d6dc4(void)

bool FUN_1479d6dc4(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d6e62 FUN_1479d6e62 body=29 status=ok
// SIG undefined FUN_1479d6e62(void)

undefined8 FUN_1479d6e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d6e9a FUN_1479d6e9a body=29 status=ok
// SIG undefined FUN_1479d6e9a(void)

bool FUN_1479d6e9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479d6eb8 FUN_1479d6eb8 body=26 status=ok
// SIG undefined FUN_1479d6eb8(void)

bool FUN_1479d6eb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479d6ed2 FUN_1479d6ed2 body=24 status=ok
// SIG undefined FUN_1479d6ed2(void)

bool FUN_1479d6ed2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479d6eea FUN_1479d6eea body=101 status=ok
// SIG undefined FUN_1479d6eea(void)

void FUN_1479d6eea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6f50 FUN_1479d6f50 body=101 status=ok
// SIG undefined FUN_1479d6f50(void)

void FUN_1479d6f50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a83c380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479d6fb6 FUN_1479d6fb6 body=134 status=ok
// SIG undefined FUN_1479d6fb6(void)

void FUN_1479d6fb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a83c380;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479d702d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479d703c FUN_1479d703c body=42 status=ok
// SIG undefined FUN_1479d703c(void)

void FUN_1479d703c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479d7063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479d7066 FUN_1479d7066 body=154 status=ok
// SIG undefined FUN_1479d7066(void)

bool FUN_1479d7066(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d7102 FUN_1479d7102 body=115 status=ok
// SIG undefined FUN_1479d7102(void)

void FUN_1479d7102(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479d7175 FUN_1479d7175 body=87 status=ok
// SIG undefined FUN_1479d7175(void)

void FUN_1479d7175(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479d71cc FUN_1479d71cc body=43 status=ok
// SIG undefined FUN_1479d71cc(void)

void FUN_1479d71cc(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1479d71f8 FUN_1479d71f8 body=175 status=ok
// SIG undefined FUN_1479d71f8(void)

void FUN_1479d71f8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1479d7281;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479d7281:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479d72a8 FUN_1479d72a8 body=147 status=ok
// SIG undefined FUN_1479d72a8(void)

void FUN_1479d72a8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
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



// FUNCTION 1479d733c FUN_1479d733c body=132 status=ok
// SIG undefined FUN_1479d733c(void)

void FUN_1479d733c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = (longlong)(int)param_2 * 0x50;
  FUN_1477c9821(*(undefined8 *)(lVar1 + 0x10 + lVar5),*(undefined4 *)(lVar1 + 0x18 + lVar5));
  if (*(longlong *)(lVar1 + 0x10 + lVar5) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)(lVar5 + lVar1),(void *)((longlong)(iVar2 - iVar3) * 0x50 + lVar1),
            (longlong)iVar3 * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1479d73c0 FUN_1479d73c0 body=68 status=ok
// SIG undefined FUN_1479d73c0(void)

void FUN_1479d73c0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1479d7404();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1479d7404 FUN_1479d7404 body=322 status=ok
// SIG undefined FUN_1479d7404(void)

void FUN_1479d7404(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479d7548 FUN_1479d7548 body=295 status=ok
// SIG undefined FUN_1479d7548(void)

undefined4 * FUN_1479d7548(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1479d7670(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[2] = *puVar1;
  local_40[3] = uVar6;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  *(undefined8 *)(local_40 + 6) = *(undefined8 *)(puVar1 + 4);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_1479d7756(param_1,uVar7,local_40,&local_4c);
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
      local_40[9] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1479d7852(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d7670 FUN_1479d7670 body=230 status=ok
// SIG undefined FUN_1479d7670(void)

int * FUN_1479d7670(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1479d7756 FUN_1479d7756 body=138 status=ok
// SIG undefined FUN_1479d7756(void)

undefined8 FUN_1479d7756(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1479d77e0(iVar2,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479d77e0 FUN_1479d77e0 body=114 status=ok
// SIG undefined FUN_1479d77e0(void)

void FUN_1479d77e0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1479d7852 FUN_1479d7852 body=419 status=ok
// SIG undefined FUN_1479d7852(void)

void FUN_1479d7852(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1479d79f6 FUN_1479d79f6 body=48 status=ok
// SIG undefined FUN_1479d79f6(void)

void FUN_1479d79f6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,8);
  }
  return;
}



// FUNCTION 1479d7a26 FUN_1479d7a26 body=48 status=ok
// SIG undefined FUN_1479d7a26(void)

void FUN_1479d7a26(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,8);
  }
  return;
}



// FUNCTION 1479d7a56 FUN_1479d7a56 body=164 status=ok
// SIG undefined FUN_1479d7a56(void)

void FUN_1479d7a56(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1479d7ad6;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479d7ad6:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479d7afa FUN_1479d7afa body=175 status=ok
// SIG undefined FUN_1479d7afa(void)

void FUN_1479d7afa(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1479d7b83;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479d7b83:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479d7baa FUN_1479d7baa body=87 status=ok
// SIG undefined FUN_1479d7baa(void)

undefined1 * FUN_1479d7baa(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_1478c4402(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 1479d7c02 FUN_1479d7c02 body=147 status=ok
// SIG undefined FUN_1479d7c02(void)

void FUN_1479d7c02(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479d7c96 FUN_1479d7c96 body=48 status=ok
// SIG undefined FUN_1479d7c96(void)

void FUN_1479d7c96(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1479d7cc6 FUN_1479d7cc6 body=147 status=ok
// SIG undefined FUN_1479d7cc6(void)

void FUN_1479d7cc6(longlong param_1,int param_2)

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



// FUNCTION 1479d7d5a FUN_1479d7d5a body=790 status=ok
// SIG undefined FUN_1479d7d5a(void)

void FUN_1479d7d5a(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_358;
    do {
      pfVar4 = (float *)*plVar10;
      pfVar11 = (float *)plVar10[1];
      iVar13 = (int)plVar10[2];
      uVar6 = (int)((ulonglong)((longlong)pfVar11 - (longlong)pfVar4) >> 2) * -0x55555555 + 1;
      pfVar9 = pfVar11;
      pfVar14 = pfVar4;
      if (iVar13 != 0) {
LAB_1479d7e2d:
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          fVar17 = pfVar4[uVar7 * 3 + 2];
          uVar1 = *(undefined8 *)(pfVar4 + uVar7 * 3);
          pfVar4[uVar7 * 3 + 2] = pfVar4[2];
          *(undefined8 *)(pfVar4 + uVar7 * 3) = *(undefined8 *)pfVar4;
          pfVar4[2] = fVar17;
          *(undefined8 *)pfVar4 = uVar1;
          pfVar8 = pfVar11 + 3;
          pfVar5 = pfVar4;
          do {
            pfVar2 = pfVar5 + 3;
            pfVar12 = pfVar5 + 3;
            do {
              pfVar15 = pfVar12;
              pfVar5 = pfVar2;
              if (pfVar11 < pfVar5) break;
              pfVar2 = pfVar5 + 3;
              pfVar12 = pfVar15 + 3;
            } while (*pfVar5 < *pfVar4 || *pfVar5 == *pfVar4);
            pfVar2 = pfVar8 + -6;
            do {
              pfVar12 = pfVar8;
              pfVar16 = pfVar2;
              pfVar8 = pfVar12 + -3;
              if (pfVar8 <= pfVar4) break;
              pfVar2 = pfVar16 + -3;
            } while (*pfVar4 < *pfVar8 || *pfVar4 == *pfVar8);
            if (pfVar8 < pfVar5) goto LAB_1479d7f0a;
            fVar17 = pfVar5[2];
            uVar1 = *(undefined8 *)pfVar5;
            pfVar5[2] = pfVar12[-1];
            *(undefined8 *)pfVar5 = *(undefined8 *)pfVar8;
            pfVar12[-1] = fVar17;
            *(undefined8 *)pfVar8 = uVar1;
          } while( true );
        }
        if (pfVar4 < pfVar11) {
          do {
            pfVar9 = pfVar4;
            if (pfVar4 + 3 <= pfVar11) {
              fVar17 = *pfVar4;
              pfVar14 = pfVar4 + 3;
              do {
                fVar3 = *pfVar14;
                pfVar8 = pfVar14;
                if (*pfVar14 <= fVar17) {
                  fVar3 = fVar17;
                  pfVar8 = pfVar9;
                }
                pfVar9 = pfVar8;
                fVar17 = fVar3;
                pfVar14 = pfVar14 + 3;
              } while (pfVar14 <= pfVar11);
            }
            local_50 = pfVar9[2];
            local_58 = *(undefined8 *)pfVar9;
            pfVar9[2] = pfVar11[2];
            *(undefined8 *)pfVar9 = *(undefined8 *)pfVar11;
            pfVar11[2] = local_50;
            *(undefined8 *)pfVar11 = local_58;
            pfVar11 = pfVar11 + -3;
          } while (pfVar4 < pfVar11);
        }
        goto LAB_1479d804c;
      }
LAB_1479d8061:
      FUN_1479d8071(pfVar4,uVar6,pfVar11,param_4);
LAB_1479d804c:
      plVar10 = plVar10 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1479d7f0a:
  local_50 = pfVar4[2];
  local_58 = *(undefined8 *)pfVar4;
  pfVar4[2] = pfVar12[-1];
  *(undefined8 *)pfVar4 = *(undefined8 *)pfVar8;
  pfVar12[-1] = local_50;
  *(undefined8 *)pfVar8 = local_58;
  iVar13 = iVar13 + -1;
  pfVar12 = pfVar12 + -6;
  if ((longlong)pfVar16 - (longlong)pfVar14 < (longlong)pfVar9 - (longlong)pfVar15) {
    if (pfVar5 < pfVar11) {
      *plVar10 = (longlong)pfVar5;
      plVar10[1] = (longlong)pfVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar15 = pfVar4;
    if (pfVar8 <= pfVar4 + 3) goto LAB_1479d804c;
  }
  else {
    if (pfVar4 + 3 < pfVar8) {
      *plVar10 = (longlong)pfVar4;
      plVar10[1] = (longlong)pfVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    pfVar4 = pfVar5;
    pfVar12 = pfVar11;
    pfVar16 = pfVar11;
    if (pfVar11 <= pfVar5) goto LAB_1479d804c;
  }
  uVar6 = (int)((ulonglong)((longlong)pfVar16 - (longlong)pfVar15) >> 2) * -0x55555555 + 1;
  pfVar11 = pfVar12;
  pfVar9 = pfVar16;
  pfVar14 = pfVar15;
  if (iVar13 == 0) goto LAB_1479d8061;
  goto LAB_1479d7e2d;
}



// FUNCTION 1479d8071 FUN_1479d8071 body=565 status=ok
// SIG undefined FUN_1479d8071(void)

void FUN_1479d8071(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x0001479d80a5:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc),
           pfVar2 = (float *)((longlong)param_1 + (longlong)iVar11 * 0xc),
           fVar5 < *pfVar2 || fVar5 == *pfVar2)) {
          iVar10 = iVar11;
        }
        fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc);
        if (*pfVar2 <= fVar5 && fVar5 != *pfVar2) {
          puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          puVar4 = (undefined8 *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          local_18 = *(undefined4 *)(puVar3 + 1);
          local_20 = *puVar3;
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
          *puVar3 = *puVar4;
          *(undefined4 *)(puVar4 + 1) = local_18;
          *puVar4 = local_20;
          iVar8 = iVar10;
          goto joined_r0x0001479d80a5;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = *(undefined4 *)(param_1 + 1);
      local_20 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8);
      *param_1 = *(undefined8 *)((longlong)param_1 + uVar9 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar9 * 0xc + 8) = local_18;
      *(undefined8 *)((longlong)param_1 + uVar9 * 0xc) = local_20;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (fVar5 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc),
               pfVar2 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc),
               fVar5 < *pfVar2 || fVar5 == *pfVar2)) {
              iVar11 = iVar8;
            }
            fVar5 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0xc);
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar12 * 0xc);
            if (fVar5 < *pfVar2 || fVar5 == *pfVar2) break;
            puVar3 = (undefined8 *)((longlong)param_1 + (longlong)iVar12 * 0xc);
            puVar4 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0xc);
            uVar6 = *(undefined4 *)(puVar3 + 1);
            uVar7 = *puVar3;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
            *puVar3 = *puVar4;
            *(undefined4 *)(puVar4 + 1) = uVar6;
            *puVar4 = uVar7;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = *(undefined4 *)(param_1 + 1);
          local_20 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8);
          *param_1 = *(undefined8 *)((longlong)param_1 + uVar1 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar1 * 0xc + 8) = local_18;
          *(undefined8 *)((longlong)param_1 + uVar1 * 0xc) = local_20;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479d82a8 FUN_1479d82a8 body=48 status=ok
// SIG undefined FUN_1479d82a8(void)

void FUN_1479d82a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1479d82d8 FUN_1479d82d8 body=134 status=ok
// SIG undefined FUN_1479d82d8(void)

undefined8 * FUN_1479d82d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1478a7a04(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1479d835e FUN_1479d835e body=132 status=ok
// SIG undefined FUN_1479d835e(void)

void FUN_1479d835e(longlong param_1,int param_2)

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



// FUNCTION 1479d83e4 FUN_1479d83e4 body=64 status=ok
// SIG undefined FUN_1479d83e4(void)

void FUN_1479d83e4(void)

{
  if (DAT_14cad059c != 0) {
    DAT_14cad059c = 0;
    FUN_1446f8d3c(&DAT_14cad0590,DAT_14cad0598,0,8,4);
  }
  return;
}



// FUNCTION 1479d8424 FUN_1479d8424 body=132 status=ok
// SIG undefined FUN_1479d8424(void)

void FUN_1479d8424(longlong param_1,int param_2)

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



// FUNCTION 1479d84aa FUN_1479d84aa body=68 status=ok
// SIG undefined FUN_1479d84aa(void)

void FUN_1479d84aa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1479d867a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1479d84ee FUN_1479d84ee body=394 status=ok
// SIG undefined FUN_1479d84ee(void)

void FUN_1479d84ee(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1477cebfc(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1477cedaa(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      local_50 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_1477cefaa(param_1,local_7c,&local_50,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d867a FUN_1479d867a body=322 status=ok
// SIG undefined FUN_1479d867a(void)

void FUN_1479d867a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479d87be FUN_1479d87be body=380 status=ok
// SIG undefined FUN_1479d87be(void)

undefined4 * FUN_1479d87be(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1477cf12a(param_1,local_40);
  uVar4 = *param_3;
  *local_38 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1477cf210(param_1,uVar3,local_38,&local_44);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_38 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1477cedaa(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d893c FUN_1479d893c body=312 status=ok
// SIG undefined FUN_1479d893c(void)

undefined4 * FUN_1479d893c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479d8a76(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1479d8b5c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1479d8c4a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479d8a76 FUN_1479d8a76 body=229 status=ok
// SIG undefined FUN_1479d8a76(void)

int * FUN_1479d8a76(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1479d8b5c FUN_1479d8b5c body=124 status=ok
// SIG undefined FUN_1479d8b5c(void)

undefined8 FUN_1479d8b5c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1479d8bd8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479d8bd8 FUN_1479d8bd8 body=114 status=ok
// SIG undefined FUN_1479d8bd8(void)

void FUN_1479d8bd8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1479d8c4a FUN_1479d8c4a body=477 status=ok
// SIG undefined FUN_1479d8c4a(void)

void FUN_1479d8c4a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1479d8e28 FUN_1479d8e28 body=132 status=ok
// SIG undefined FUN_1479d8e28(void)

void FUN_1479d8e28(longlong param_1,int param_2)

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



// FUNCTION 1479d8eae FUN_1479d8eae body=101 status=ok
// SIG undefined FUN_1479d8eae(void)

void FUN_1479d8eae(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_146f01ff8(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 1479d8f14 FUN_1479d8f14 body=141 status=ok
// SIG undefined FUN_1479d8f14(void)

void FUN_1479d8f14(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 1479d8fa2 FUN_1479d8fa2 body=96 status=ok
// SIG undefined FUN_1479d8fa2(void)

void FUN_1479d8fa2(longlong param_1,int param_2)

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



// FUNCTION 1479d9002 FUN_1479d9002 body=132 status=ok
// SIG undefined FUN_1479d9002(void)

void FUN_1479d9002(longlong param_1,int param_2)

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



// FUNCTION 1479d9088 FUN_1479d9088 body=119 status=ok
// SIG undefined FUN_1479d9088(void)

void FUN_1479d9088(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1479d8f14(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479d9118 FUN_1479d9118 body=29 status=ok
// SIG undefined FUN_1479d9118(void)

undefined8 FUN_1479d9118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d9136 FUN_1479d9136 body=29 status=ok
// SIG undefined FUN_1479d9136(void)

undefined8 FUN_1479d9136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d9154 FUN_1479d9154 body=74 status=ok
// SIG undefined FUN_1479d9154(void)

undefined8 * FUN_1479d9154(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83c710;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d919e FUN_1479d919e body=70 status=ok
// SIG undefined FUN_1479d919e(void)

void FUN_1479d919e(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a8199b8;
  puVar1 = *(undefined8 **)(param_1 + 0x368);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479d91e4 FUN_1479d91e4 body=29 status=ok
// SIG undefined FUN_1479d91e4(void)

undefined8 FUN_1479d91e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479d9202 FUN_1479d9202 body=166 status=ok
// SIG undefined FUN_1479d9202(void)

undefined8 * FUN_1479d9202(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_14a83c820;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xf] = puVar1;
  param_1[0xe] = puVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1479d92a8 FUN_1479d92a8 body=38 status=ok
// SIG undefined FUN_1479d92a8(void)

undefined8 FUN_1479d92a8(undefined8 param_1,int param_2)

{
  FUN_1479d9452();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


