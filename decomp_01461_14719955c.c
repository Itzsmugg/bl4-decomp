// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14719955c FUN_14719955c body=87 status=ok
// SIG undefined FUN_14719955c(void)

longlong FUN_14719955c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),&DAT_14a235a78,1);
  return lVar1;
}



// FUNCTION 1471995b4 FUN_1471995b4 body=50 status=ok
// SIG undefined FUN_1471995b4(void)

longlong FUN_1471995b4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 1471995e6 FUN_1471995e6 body=42 status=ok
// SIG undefined FUN_1471995e6(void)

void FUN_1471995e6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147199618 FUN_147199618 body=87 status=ok
// SIG undefined FUN_147199618(void)

longlong FUN_147199618(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),&DAT_14a235a78,1);
  return lVar1;
}



// FUNCTION 147199670 FUN_147199670 body=50 status=ok
// SIG undefined FUN_147199670(void)

longlong FUN_147199670(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 1471996a2 FUN_1471996a2 body=242 status=ok
// SIG undefined FUN_1471996a2(void)

undefined8 FUN_1471996a2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(DAT_14c9de160 + 4) != 0) {
    if (*(int *)(param_1 + 0x3758) < 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x3758) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x23eb) & 1) != 0) {
      return 0;
    }
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3750) + lVar6 * 0x10);
      cVar3 = FUN_1404d4df8(lVar1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x3750) + 8 + lVar6 * 0x10),
                            *(undefined4 *)(param_1 + 0x3090));
      if ((cVar3 != '\0') && (0 < *(int *)(lVar1 + 0xb0))) {
        lVar7 = 0x38;
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar1 + 0xa8);
          if (*(longlong *)(lVar1 + 0xa8) == 0) {
            lVar4 = lVar1;
          }
          plVar2 = *(longlong **)(lVar4 + lVar7);
          cVar3 = FUN_144ab45aa();
          if ((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar2 + 0x78))(plVar2), cVar3 != '\0')) {
            return 1;
          }
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0xa8;
        } while (lVar5 < *(int *)(lVar1 + 0xb0));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x3758));
  }
  return 0;
}



// FUNCTION 147199794 FUN_147199794 body=143 status=ok
// SIG undefined FUN_147199794(void)

int * FUN_147199794(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1);
  iVar1 = *(int *)(DAT_14c9de2f8 + 4);
  iVar3 = *(int *)(DAT_14c9de2e0 + 4);
  if (iVar3 < 1) {
    iVar3 = *param_1;
  }
  iVar2 = *(int *)(DAT_14c9de310 + 4);
  if (iVar1 < 1) {
    iVar1 = param_1[1];
  }
  if (iVar2 < 1) {
    iVar2 = param_1[2];
  }
  if (0x3ff < iVar3) {
    iVar3 = 0x400;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *param_1 = iVar3;
  if (0x3ff < iVar1) {
    iVar1 = 0x400;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[1] = iVar1;
  iVar1 = 0x400;
  if (iVar2 < 0x400) {
    iVar1 = iVar2;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[2] = iVar1;
  return param_1;
}



// FUNCTION 147199823 FUN_147199823 body=11 status=ok
// SIG undefined FUN_147199823(void)

undefined4 FUN_147199823(void)

{
  return *(undefined4 *)(DAT_14c9de1d8 + 4);
}



// FUNCTION 14719982e FUN_14719982e body=96 status=ok
// SIG undefined FUN_14719982e(void)

byte FUN_14719982e(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  lVar3 = DAT_14c9de178;
  iVar2 = *(int *)(DAT_14c9de3d0 + 4);
  bVar1 = *(byte *)(param_1 + 0x70);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  return (iVar2 != 0 && *(int *)(lVar3 + uVar5 * 4) != 0) & bVar1;
}



// FUNCTION 14719988e FUN_14719988e body=629 status=ok
// SIG undefined FUN_14719988e(void)

ulonglong FUN_14719988e(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_b8 [36];
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(DAT_14c9de490 + 4) == 0) {
    uVar11 = 0;
  }
  else {
    puVar6 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    local_88 = *puVar6;
    uStack_84 = puVar6[1];
    uStack_80 = puVar6[2];
    uStack_7c = puVar6[3];
    local_78 = puVar6[4];
    uStack_74 = puVar6[5];
    uStack_70 = puVar6[6];
    uStack_6c = puVar6[7];
    local_68 = puVar6[8];
    uStack_64 = puVar6[9];
    uStack_60 = puVar6[10];
    uStack_5c = puVar6[0xb];
    local_58 = *(double *)(puVar6 + 0xc);
    (**(code **)(*param_2 + 0x38))(param_2,&local_94);
    if (local_94 < local_90) {
      local_90 = local_94;
    }
    if (local_8c <= local_90) {
      local_90 = local_8c;
    }
    fVar7 = logf((float)local_90);
    auVar12 = roundps(unaff_XMM6,ZEXT416((uint)(fVar7 * 1.442695)),1);
    uVar11 = auVar12._0_8_;
    if (*(char *)(param_1 + 0x26c) == '\0') {
      dVar1 = *(double *)(param_1 + 0x28) / (double)CONCAT44(uStack_5c,uStack_60);
      dVar3 = *(double *)(param_1 + 0x20) / (double)CONCAT44(uStack_64,local_68);
      dVar2 = *(double *)(param_1 + 0x18) / (double)CONCAT44(uStack_6c,uStack_70);
      fVar7 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
    }
    else {
      cVar5 = FUN_144b22be2(param_1 + 0x60,&local_88,&uStack_70);
      if (cVar5 == '\0') goto LAB_147199ac9;
      dVar1 = tan((double)*(float *)(param_1 + 0x260) * 0.5);
      dVar2 = *(double *)(param_1 + 0x38) - (double)CONCAT44(uStack_84,local_88);
      dVar4 = *(double *)(param_1 + 0x40) - (double)CONCAT44(uStack_7c,uStack_80);
      dVar3 = *(double *)(param_1 + 0x48) - (double)CONCAT44(uStack_74,local_78);
      dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2) - local_58;
      fVar7 = *(float *)(param_1 + 0x264);
      if ((double)fVar7 < dVar2) {
        fVar7 = (float)dVar2;
      }
      uVar9 = uStack_70;
      uVar10 = uStack_6c;
      if ((double)CONCAT44(uStack_6c,uStack_70) <= (double)CONCAT44(uStack_64,local_68)) {
        uVar9 = local_68;
        uVar10 = uStack_64;
      }
      if ((double)CONCAT44(uVar10,uVar9) <= (double)CONCAT44(uStack_5c,uStack_60)) {
        uVar9 = uStack_60;
        uVar10 = uStack_5c;
      }
      fVar7 = (float)local_90 /
              (float)(((double)CONCAT44(uVar10,uVar9) + (double)CONCAT44(uVar10,uVar9)) /
                     (double)(((float)dVar1 /
                              (((float)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) * 0.5)
                              / *(float *)(param_1 + 0x268))) * fVar7));
    }
    fVar7 = logf(fVar7);
    fVar8 = (float)(**(code **)(*param_2 + 0x70))(param_2);
    fVar7 = fVar8 + fVar7 * 1.442695 + *(float *)(DAT_14c9de4a8 + 4);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (auVar12._0_4_ <= fVar7) {
      fVar7 = auVar12._0_4_;
    }
    uVar11 = (ulonglong)(uint)fVar7;
  }
LAB_147199ac9:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147199b04 FUN_147199b04 body=416 status=ok
// SIG undefined FUN_147199b04(void)

undefined4 FUN_147199b04(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [192];
  longlong local_188;
  undefined8 local_178;
  undefined1 local_168 [256];
  longlong local_68;
  undefined8 local_58;
  undefined8 local_48;
  float local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_188 = 0;
  local_178 = 0x600000000;
  local_68 = 0;
  local_58 = 0x800000000;
  local_48 = 0x3f8000003f490fdb;
  local_40 = 1.0;
  local_3c = 1;
  local_278 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_270 = *(undefined4 *)(param_1 + 0x1048);
  uStack_26c = *(undefined4 *)(param_1 + 0x104c);
  uStack_268 = *(undefined4 *)(param_1 + 0x1050);
  uStack_264 = *(undefined4 *)(param_1 + 0x1054);
  local_260 = *(undefined8 *)(param_1 + 0x1058);
  local_258 = *(undefined8 *)(param_1 + 0x4e8);
  local_250 = *(undefined8 *)(param_1 + 0x4f0);
  FUN_144715ac6(local_248,param_1 + 8000);
  FUN_144715c36(local_168,param_1 + 0x2020);
  local_48 = CONCAT44(*(undefined4 *)(param_1 + 0x2170),*(float *)(param_1 + 0x1de8) * 0.017453292);
  fVar1 = *(float *)(DAT_14c9de1a8 + 4);
  if (8.0 <= fVar1) {
    fVar1 = 8.0;
  }
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  local_40 = (float)(int)fVar1;
  uVar2 = FUN_14719988e(&local_2a8,param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147199ca5 FUN_147199ca5 body=274 status=ok
// SIG undefined FUN_147199ca5(void)

int * FUN_147199ca5(int *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(DAT_14c9de3e8 + 4) < 1) {
    fVar2 = (float)(**(code **)(*param_2 + 0x68))(param_2);
    fVar2 = fVar2 * param_3;
  }
  else {
    fVar2 = (float)*(int *)(DAT_14c9de3e8 + 4);
  }
  if (fVar2 <= 0.125) {
    fVar2 = 0.125;
  }
  FUN_147199794(&local_4c,param_2);
  fVar2 = 1.0 / fVar2;
  iVar1 = (int)(fVar2 * (float)local_4c);
  if (0x3ff < iVar1) {
    iVar1 = 0x400;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *param_1 = iVar1;
  iVar1 = 0x400;
  if ((int)((float)local_48 * fVar2) < 0x400) {
    iVar1 = (int)((float)local_48 * fVar2);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[1] = iVar1;
  iVar1 = 0x200;
  if ((int)((float)local_44 * fVar2) < 0x200) {
    iVar1 = (int)((float)local_44 * fVar2);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[2] = iVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147199db8 FUN_147199db8 body=2808 status=ok
// SIG undefined FUN_147199db8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147199db8(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,longlong *param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9,undefined4 *param_10,undefined4 *param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  byte bVar23;
  undefined1 uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_1288 [32];
  longlong *local_1268;
  undefined8 local_1260;
  undefined4 local_1258;
  undefined4 *local_1250;
  undefined8 *local_1248;
  longlong local_1240;
  longlong lStack_1238;
  undefined8 local_1230;
  longlong *local_1228;
  undefined8 local_1220;
  undefined4 local_1218;
  undefined8 *local_1210;
  undefined8 local_1208;
  undefined8 local_1200;
  undefined8 local_11f8;
  undefined8 local_11f0;
  longlong local_11e8;
  undefined4 local_11dc;
  longlong *local_11d8;
  undefined8 local_11d0;
  undefined8 local_11c8;
  undefined8 local_11c0;
  int *local_11b8;
  longlong local_11b0;
  undefined4 local_11a8;
  undefined4 uStack_11a4;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  undefined4 local_1198;
  undefined4 uStack_1194;
  undefined4 uStack_1190;
  undefined4 uStack_118c;
  undefined4 local_1188;
  undefined4 uStack_1184;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  undefined8 local_1178;
  undefined4 local_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined4 local_1158;
  undefined4 uStack_1154;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined4 local_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  undefined8 local_1138;
  undefined4 local_1128;
  undefined4 uStack_1124;
  undefined4 uStack_1120;
  undefined4 uStack_111c;
  undefined4 local_1118;
  undefined4 uStack_1114;
  undefined4 uStack_1110;
  undefined4 uStack_110c;
  undefined4 local_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined8 local_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  undefined4 local_10c8;
  undefined4 uStack_10c4;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  undefined8 local_10b8;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined4 local_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined8 local_1078;
  undefined1 local_1068 [4096];
  undefined1 *local_68;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1288;
  local_1128 = *param_11;
  uStack_1124 = param_11[1];
  uStack_1120 = param_11[2];
  uStack_111c = param_11[3];
  local_1118 = param_11[4];
  uStack_1114 = param_11[5];
  uStack_1110 = param_11[6];
  uStack_110c = param_11[7];
  local_1108 = param_11[8];
  uStack_1104 = param_11[9];
  uStack_1100 = param_11[10];
  uStack_10fc = param_11[0xb];
  local_1250 = &local_1128;
  local_10f8 = *(undefined8 *)(param_11 + 0xc);
  local_1258 = *param_10;
  local_1248 = &local_10f0;
  local_1260 = param_9;
  local_1268 = param_8;
  local_11e8 = param_3;
  local_11d8 = param_2;
  local_11d0 = param_1;
  local_11c8 = param_4;
  FUN_14719b12c(local_1128,param_3,param_4,param_2);
  lVar20 = DAT_14c9de3b8;
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar25 + 0xc60) == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar23 = FUN_144a61b4f();
    uVar19 = (ulonglong)(bVar23 ^ 1);
  }
  local_11c0 = local_10f0;
  if (*(int *)(lVar20 + uVar19 * 4) == 2) {
    local_1138 = *(undefined8 *)(param_11 + 0xc);
    local_1168 = *param_11;
    uStack_1164 = param_11[1];
    uStack_1160 = param_11[2];
    uStack_115c = param_11[3];
    local_1158 = param_11[4];
    uStack_1154 = param_11[5];
    uStack_1150 = param_11[6];
    uStack_114c = param_11[7];
    local_1148 = param_11[8];
    uStack_1144 = param_11[9];
    uStack_1140 = param_11[10];
    uStack_113c = param_11[0xb];
    uVar2 = *param_10;
    cVar11 = FUN_144ab45aa();
    if ((cVar11 == '\0') || (cVar11 = (**(code **)(*param_8 + 0x78))(), cVar11 == '\0')) {
      local_68 = (undefined1 *)0x0;
      local_58 = 0x4000000000;
      plVar1 = (longlong *)(local_11e8 + 0x3550);
      uStack_10e0 = local_11e8 + 0x3560;
      local_10e8 = 0x100000000;
      local_10d8 = 0xffffffff;
      uStack_10d0 = 0;
      if (*(int *)(local_11e8 + 0x3578) != 0) {
        FUN_1449c0562(&local_10e8);
      }
      uStack_10a0 = local_10e8;
      local_1098 = uStack_10e0;
      uStack_1090 = local_10d8;
      uVar17 = uStack_1090;
      local_1088 = uStack_10d0;
      uStack_1084 = uStack_10cc;
      uStack_1090._4_4_ = (int)((ulonglong)local_10d8 >> 0x20);
      local_10a8 = plVar1;
      if (uStack_1090._4_4_ < *(int *)(uStack_10e0 + 0x18)) {
        iVar14 = uStack_1090._4_4_;
        uStack_1090 = uVar17;
        do {
          lVar25 = *local_10a8;
          (**(code **)(*param_8 + 8))(param_8);
          (**(code **)(*param_8 + 0x10))(param_8);
          cVar11 = FUN_144754b1e((longlong)iVar14 * 0x40 + lVar25);
          if (cVar11 != '\0') {
            puVar22 = (undefined4 *)((longlong)uStack_1090._4_4_ * 0x40 + *local_10a8);
            lVar25 = (longlong)(int)(uint)local_58;
            uVar13 = (uint)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,uVar13);
            if (local_58._4_4_ < uVar13) {
              FUN_1471b2d6e(local_1068);
            }
            puVar16 = local_68;
            if (local_68 == (undefined1 *)0x0) {
              puVar16 = local_1068;
            }
            lVar25 = lVar25 * 0x40;
            uVar3 = *puVar22;
            uVar4 = puVar22[1];
            uVar5 = puVar22[2];
            uVar6 = puVar22[3];
            uVar17 = *(undefined8 *)(puVar22 + 4);
            uVar18 = *(undefined8 *)(puVar22 + 6);
            uVar7 = *(undefined8 *)(puVar22 + 8);
            uVar8 = *(undefined8 *)(puVar22 + 10);
            uVar9 = *(undefined8 *)(puVar22 + 0xe);
            *(undefined8 *)(puVar16 + lVar25 + 0x30) = *(undefined8 *)(puVar22 + 0xc);
            *(undefined8 *)((longlong)(puVar16 + lVar25 + 0x30) + 8) = uVar9;
            *(undefined8 *)(puVar16 + lVar25 + 0x20) = uVar7;
            *(undefined8 *)((longlong)(puVar16 + lVar25 + 0x20) + 8) = uVar8;
            *(undefined8 *)(puVar16 + lVar25 + 0x10) = uVar17;
            *(undefined8 *)((longlong)(puVar16 + lVar25 + 0x10) + 8) = uVar18;
            puVar22 = (undefined4 *)(puVar16 + lVar25);
            *puVar22 = uVar3;
            puVar22[1] = uVar4;
            puVar22[2] = uVar5;
            puVar22[3] = uVar6;
          }
          uStack_1090 = CONCAT44(uStack_1090._4_4_,(uint)uStack_1090 & ~uStack_10a0._4_4_);
          FUN_1449c0562(&uStack_10a0);
          iVar14 = uStack_1090._4_4_;
        } while (uStack_1090._4_4_ < *(int *)(local_1098 + 0x18));
        lVar25 = (longlong)(int)(uint)local_58;
        uVar17 = uStack_1090;
        if (0 < lVar25) {
          uVar13 = (uint)local_58 - 1;
          lVar20 = 0;
          do {
            if ((uint)local_58 == 0) {
              uVar15 = 0;
LAB_14719a6b7:
              lStack_1238 = 0;
              local_1240 = 0;
              bVar23 = 0;
              uVar24 = 0;
            }
            else {
              puVar16 = local_68;
              if (local_68 == (undefined1 *)0x0) {
                puVar16 = local_1068;
              }
              uVar15 = *(uint *)(puVar16 + lVar20 + 0x38) & 3;
              local_1240 = *(longlong *)(puVar16 + lVar20 + 0x30);
              if (local_1240 == 0) goto LAB_14719a6b7;
              lStack_1238 = (longlong)*(int *)(local_1240 + 0x34) * 0x68 + *param_6;
              bVar23 = *(byte *)(*(longlong *)(local_1240 + 0x28) + 0x1d1) & 1;
              uVar24 = 1;
            }
            local_1078 = local_1138;
            local_1088 = local_1148;
            uStack_1084 = uStack_1144;
            uStack_1080 = uStack_1140;
            uStack_107c = uStack_113c;
            local_1098 = CONCAT44(uStack_1154,local_1158);
            uStack_1090 = CONCAT44(uStack_114c,uStack_1150);
            local_10a8 = (longlong *)CONCAT44(uStack_1164,local_1168);
            uStack_10a0 = CONCAT44(uStack_115c,uStack_1160);
            local_1208 = param_12;
            local_1220 = param_9;
            local_1228 = param_8;
            local_1230 = param_7;
            local_1248 = (undefined8 *)CONCAT44(local_1248._4_4_,uVar15);
            local_1250 = (undefined4 *)CONCAT71(local_1250._1_7_,bVar23);
            local_1258 = CONCAT31(local_1258._1_3_,uVar24);
            local_1260 = CONCAT71(local_1260._1_7_,(ulonglong)uVar13 << 6 == lVar20);
            local_1268 = local_11d8;
            local_1218 = uVar2;
            local_1210 = &local_10a8;
            FUN_142ca0ee1();
            lVar20 = lVar20 + 0x40;
            uVar17 = uStack_1090;
          } while (lVar25 * 0x40 != lVar20);
        }
      }
      uStack_1090 = uVar17;
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_11f0 = param_14;
    local_11f8 = param_13;
    local_1200 = local_11c0;
    local_1208 = param_12;
    local_1210 = (undefined8 *)&local_1168;
    local_1220 = param_9;
    local_1228 = param_8;
    local_1230 = param_7;
    local_1240 = 0;
    lStack_1238 = 0;
    local_1250 = (undefined4 *)CONCAT71(local_1250._1_7_,1);
    local_1258 = CONCAT31(local_1258._1_3_,1);
    local_1260 = CONCAT71(local_1260._1_7_,1);
    local_1268 = local_11d8;
    local_1248 = (undefined8 *)((ulonglong)local_1248 & 0xffffffff00000000);
    local_1218 = uVar2;
    FUN_142ca2401(local_11d0,local_11e8,local_11c8,param_5);
  }
  else {
    local_1178 = *(undefined8 *)(param_11 + 0xc);
    local_11a8 = *param_11;
    uStack_11a4 = param_11[1];
    uStack_11a0 = param_11[2];
    uStack_119c = param_11[3];
    local_1198 = param_11[4];
    uStack_1194 = param_11[5];
    uStack_1190 = param_11[6];
    uStack_118c = param_11[7];
    local_1188 = param_11[8];
    uStack_1184 = param_11[9];
    uStack_1180 = param_11[10];
    uStack_117c = param_11[0xb];
    local_11dc = *param_10;
    local_68 = (undefined1 *)0x0;
    local_58 = 0x4000000000;
    plVar1 = (longlong *)(local_11e8 + 0x3550);
    uStack_10e0 = local_11e8 + 0x3560;
    local_10e8 = 0x100000000;
    local_10d8 = 0xffffffff;
    uStack_10d0 = 0;
    if (*(int *)(local_11e8 + 0x3578) != 0) {
      FUN_1449c0562(&local_10e8);
    }
    uStack_10a0 = local_10e8;
    local_1098 = uStack_10e0;
    uStack_1090 = local_10d8;
    uVar17 = uStack_1090;
    local_1088 = uStack_10d0;
    uStack_1084 = uStack_10cc;
    uStack_1090._4_4_ = (int)((ulonglong)local_10d8 >> 0x20);
    uVar13 = 0;
    local_10a8 = plVar1;
    if (uStack_1090._4_4_ < *(int *)(uStack_10e0 + 0x18)) {
      iVar14 = uStack_1090._4_4_;
      uStack_1090 = uVar17;
      do {
        lVar20 = *local_10a8;
        uVar17 = (**(code **)(*param_8 + 8))(param_8);
        uVar18 = (**(code **)(*param_8 + 0x10))(param_8);
        cVar11 = FUN_144754b1e((longlong)iVar14 * 0x40 + lVar20,uVar18,uVar17);
        uVar19 = local_58;
        if (cVar11 != '\0') {
          puVar22 = (undefined4 *)((longlong)uStack_1090._4_4_ * 0x40 + *local_10a8);
          lVar20 = (longlong)(int)(uint)local_58;
          uVar13 = (uint)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,uVar13);
          if (local_58._4_4_ < uVar13) {
            FUN_1471b2d6e(local_1068,uVar19 & 0xffffffff);
          }
          puVar16 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar16 = local_1068;
          }
          lVar20 = lVar20 * 0x40;
          uVar2 = *puVar22;
          uVar3 = puVar22[1];
          uVar4 = puVar22[2];
          uVar5 = puVar22[3];
          uVar17 = *(undefined8 *)(puVar22 + 4);
          uVar18 = *(undefined8 *)(puVar22 + 6);
          uVar7 = *(undefined8 *)(puVar22 + 8);
          uVar8 = *(undefined8 *)(puVar22 + 10);
          uVar9 = *(undefined8 *)(puVar22 + 0xe);
          *(undefined8 *)(puVar16 + lVar20 + 0x30) = *(undefined8 *)(puVar22 + 0xc);
          *(undefined8 *)((longlong)(puVar16 + lVar20 + 0x30) + 8) = uVar9;
          *(undefined8 *)(puVar16 + lVar20 + 0x20) = uVar7;
          *(undefined8 *)((longlong)(puVar16 + lVar20 + 0x20) + 8) = uVar8;
          *(undefined8 *)(puVar16 + lVar20 + 0x10) = uVar17;
          *(undefined8 *)((longlong)(puVar16 + lVar20 + 0x10) + 8) = uVar18;
          puVar22 = (undefined4 *)(puVar16 + lVar20);
          *puVar22 = uVar2;
          puVar22[1] = uVar3;
          puVar22[2] = uVar4;
          puVar22[3] = uVar5;
        }
        uStack_1090 = CONCAT44(uStack_1090._4_4_,(uint)uStack_1090 & ~uStack_10a0._4_4_);
        FUN_1449c0562(&uStack_10a0);
        iVar14 = uStack_1090._4_4_;
      } while (uStack_1090._4_4_ < *(int *)(local_1098 + 0x18));
      uVar13 = (uint)local_58;
      uVar17 = uStack_1090;
    }
    uStack_1090 = uVar17;
    uVar19 = 1;
    if (1 < (int)uVar13) {
      uVar19 = (ulonglong)uVar13;
    }
    local_11b8 = (int *)(lVar25 + 0xc60);
    local_11b0 = uVar19 << 6;
    lVar20 = (ulonglong)((int)uVar19 - 1) << 6;
    lVar25 = 0;
    do {
      lVar10 = DAT_14c9de3b8;
      if ((uint)local_58 == 0) {
        uVar13 = 0;
LAB_14719a3c6:
        bVar23 = 0;
        lVar26 = 0;
        lVar21 = 0;
        uVar24 = 0;
      }
      else {
        puVar16 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar16 = local_1068;
        }
        uVar13 = *(uint *)(puVar16 + lVar25 + 0x38) & 3;
        lVar26 = *(longlong *)(puVar16 + lVar25 + 0x30);
        if (lVar26 == 0) goto LAB_14719a3c6;
        lVar21 = (longlong)*(int *)(lVar26 + 0x34) * 0x68 + *param_6;
        bVar23 = *(byte *)(*(longlong *)(lVar26 + 0x28) + 0x1d1) & 1;
        uVar24 = 1;
      }
      if (*local_11b8 == 0x40000002) {
        uVar19 = 0;
      }
      else {
        bVar12 = FUN_144a61b4f();
        uVar19 = (ulonglong)(bVar12 ^ 1);
      }
      if (bVar23 == 1 && *(int *)(lVar10 + uVar19 * 4) == 1) {
        local_1078 = local_1178;
        local_1088 = local_1188;
        uStack_1084 = uStack_1184;
        uStack_1080 = uStack_1180;
        uStack_107c = uStack_117c;
        local_1098 = CONCAT44(uStack_1194,local_1198);
        uStack_1090 = CONCAT44(uStack_118c,uStack_1190);
        local_10a8 = (longlong *)CONCAT44(uStack_11a4,local_11a8);
        uStack_10a0 = CONCAT44(uStack_119c,uStack_11a0);
        local_1208 = param_12;
        local_1210 = &local_10a8;
        local_1218 = local_11dc;
        local_1220 = param_9;
        local_1228 = param_8;
        local_1230 = param_7;
        local_1260 = CONCAT71(local_1260._1_7_,lVar20 == lVar25);
        local_1248 = (undefined8 *)CONCAT44(local_1248._4_4_,uVar13);
        local_1258 = CONCAT31(local_1258._1_3_,uVar24);
        local_1268 = local_11d8;
        local_1250 = (undefined4 *)CONCAT71(local_1250._1_7_,1);
        local_1240 = lVar26;
        lStack_1238 = lVar21;
        FUN_142ca0ee1(local_11d0,local_11e8,local_11c8,param_5);
      }
      local_10b8 = local_1178;
      local_10c8 = local_1188;
      uStack_10c4 = uStack_1184;
      uStack_10c0 = uStack_1180;
      uStack_10bc = uStack_117c;
      local_10d8 = CONCAT44(uStack_1194,local_1198);
      uStack_10d0 = uStack_1190;
      uStack_10cc = uStack_118c;
      local_10e8 = CONCAT44(uStack_11a4,local_11a8);
      uStack_10e0 = CONCAT44(uStack_119c,uStack_11a0);
      local_11f0 = param_14;
      local_11f8 = param_13;
      local_1200 = local_11c0;
      local_1208 = param_12;
      local_1210 = &local_10e8;
      local_1218 = local_11dc;
      local_1220 = param_9;
      local_1228 = param_8;
      local_1230 = param_7;
      local_1248 = (undefined8 *)CONCAT44(local_1248._4_4_,uVar13);
      local_1250 = (undefined4 *)CONCAT71(local_1250._1_7_,bVar23);
      local_1258 = CONCAT31(local_1258._1_3_,uVar24);
      local_1260 = CONCAT71(local_1260._1_7_,lVar20 == lVar25);
      local_1268 = local_11d8;
      local_1240 = lVar26;
      lStack_1238 = lVar21;
      FUN_142ca2401(local_11d0,local_11e8,local_11c8,param_5);
      lVar25 = lVar25 + 0x40;
    } while (local_11b0 != lVar25);
    if (local_68 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14719a8b2 FUN_14719a8b2 body=42 status=ok
// SIG undefined FUN_14719a8b2(void)

void FUN_14719a8b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719a920 FUN_14719a920 body=96 status=ok
// SIG undefined FUN_14719a920(void)

undefined8 FUN_14719a920(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e83b34();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e0688,1);
  return uVar3;
}



// FUNCTION 14719a980 FUN_14719a980 body=52 status=ok
// SIG undefined FUN_14719a980(void)

void FUN_14719a980(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719a9b4 FUN_14719a9b4 body=108 status=ok
// SIG undefined FUN_14719a9b4(void)

undefined4 * FUN_14719a9b4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e838c6();
  FUN_145e838c6();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9de518,0);
  FUN_145e838c6();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719aa21 FUN_14719aa21 body=177 status=ok
// SIG undefined FUN_14719aa21(void)

void FUN_14719aa21(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e83b34();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e0688,param_4);
  local_78 = &DAT_14c9e0688;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471b0f7e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719aad3 FUN_14719aad3 body=253 status=ok
// SIG undefined FUN_14719aad3(void)

int * FUN_14719aad3(int *param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  double dVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar2 = (double)*(int *)(DAT_14c9de600 + 4);
  if (32.0 <= dVar2) {
    dVar2 = 32.0;
  }
  if (dVar2 <= 0.125) {
    dVar2 = 0.125;
  }
  param_3 = (float)dVar2 * param_3;
  if (param_3 <= 0.125) {
    param_3 = 0.125;
  }
  FUN_147199794(&local_3c);
  param_3 = 1.0 / param_3;
  iVar1 = (int)(param_3 * (float)local_3c);
  if (0x3ff < iVar1) {
    iVar1 = 0x400;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *param_1 = iVar1;
  iVar1 = 0x400;
  if ((int)((float)local_38 * param_3) < 0x400) {
    iVar1 = (int)((float)local_38 * param_3);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[1] = iVar1;
  iVar1 = 0x200;
  if ((int)((float)local_34 * param_3) < 0x200) {
    iVar1 = (int)((float)local_34 * param_3);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  param_1[2] = iVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719abde FUN_14719abde body=54 status=ok
// SIG undefined FUN_14719abde(void)

void FUN_14719abde(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14719ac1c FUN_14719ac1c body=39 status=ok
// SIG undefined FUN_14719ac1c(void)

void FUN_14719ac1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471a676a(uVar1,param_1);
  return;
}



// FUNCTION 14719ac44 FUN_14719ac44 body=86 status=ok
// SIG undefined FUN_14719ac44(void)

void * FUN_14719ac44(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined4 *)((longlong)_Dst + 0x108) = 0;
  return _Dst;
}



// FUNCTION 14719ac9a FUN_14719ac9a body=42 status=ok
// SIG undefined FUN_14719ac9a(void)

void FUN_14719ac9a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719ad08 FUN_14719ad08 body=96 status=ok
// SIG undefined FUN_14719ad08(void)

undefined8 FUN_14719ad08(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e52db2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e07f8,1);
  return uVar3;
}



// FUNCTION 14719ad68 FUN_14719ad68 body=52 status=ok
// SIG undefined FUN_14719ad68(void)

void FUN_14719ad68(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719ad9c FUN_14719ad9c body=108 status=ok
// SIG undefined FUN_14719ad9c(void)

undefined4 * FUN_14719ad9c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e52b44();
  FUN_145e52b44();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9de868,0);
  FUN_145e52b44();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719ae09 FUN_14719ae09 body=177 status=ok
// SIG undefined FUN_14719ae09(void)

void FUN_14719ae09(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e52db2();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e07f8,param_4);
  local_78 = &DAT_14c9e07f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471b175c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719aebc FUN_14719aebc body=54 status=ok
// SIG undefined FUN_14719aebc(void)

void FUN_14719aebc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14719aefa FUN_14719aefa body=39 status=ok
// SIG undefined FUN_14719aefa(void)

void FUN_14719aefa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471a74fa(uVar1,param_1);
  return;
}



// FUNCTION 14719af22 FUN_14719af22 body=86 status=ok
// SIG undefined FUN_14719af22(void)

void * FUN_14719af22(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined4 *)((longlong)_Dst + 0x108) = 0;
  return _Dst;
}



// FUNCTION 14719af78 FUN_14719af78 body=42 status=ok
// SIG undefined FUN_14719af78(void)

void FUN_14719af78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719afe6 FUN_14719afe6 body=96 status=ok
// SIG undefined FUN_14719afe6(void)

undefined8 FUN_14719afe6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5331c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e09c0,1);
  return uVar3;
}



// FUNCTION 14719b046 FUN_14719b046 body=52 status=ok
// SIG undefined FUN_14719b046(void)

void FUN_14719b046(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719b07a FUN_14719b07a body=177 status=ok
// SIG undefined FUN_14719b07a(void)

void FUN_14719b07a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e5331c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e09c0,param_4);
  local_78 = &DAT_14c9e09c0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471b1d96(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719b12c FUN_14719b12c body=846 status=ok
// SIG undefined FUN_14719b12c(void)

void FUN_14719b12c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,undefined4 param_7,undefined4 *param_8,
                  longlong *param_9)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 *local_160;
  undefined1 **local_158;
  undefined1 **local_150;
  undefined8 *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 *local_a8;
  undefined2 local_a0;
  uint local_98;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(int *)(DAT_14c9de5e8 + 4) != 0) && (*(int *)(DAT_14c9de220 + 4) != 0)) {
    cVar1 = (**(code **)(*param_5 + 0x78))(param_5);
    if (cVar1 == '\0') {
      FUN_147199b04(param_3,param_5);
      uVar4 = exp2f();
      FUN_14719aad3(&local_a8,param_5,uVar4);
      local_e8 = *param_8;
      uStack_e4 = param_8[1];
      uStack_e0 = param_8[2];
      uStack_dc = param_8[3];
      local_d8 = param_8[4];
      uStack_d4 = param_8[5];
      uStack_d0 = param_8[6];
      uStack_cc = param_8[7];
      local_c8 = param_8[8];
      uStack_c4 = param_8[9];
      uStack_c0 = param_8[10];
      uStack_bc = param_8[0xb];
      local_160 = &local_e8;
      local_b8 = *(undefined8 *)(param_8 + 0xc);
      local_150 = (undefined1 **)&local_98;
      local_158 = &local_a8;
      local_168 = param_7;
      local_170 = param_6;
      local_178 = param_5;
      FUN_142c97624(param_1,param_2,param_3,param_4);
      local_178 = &local_f0;
      FUN_142c9867b(param_1,param_3,
                    CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT14(uStack_94,local_98))),&local_a8);
      local_138 = *param_8;
      uStack_134 = param_8[1];
      uStack_130 = param_8[2];
      uStack_12c = param_8[3];
      local_128 = param_8[4];
      uStack_124 = param_8[5];
      uStack_120 = param_8[6];
      uStack_11c = param_8[7];
      local_118 = param_8[8];
      uStack_114 = param_8[9];
      uStack_110 = param_8[10];
      uStack_10c = param_8[0xb];
      local_160 = &local_138;
      local_108 = *(undefined8 *)(param_8 + 0xc);
      local_148 = &local_f8;
      local_150 = &local_a8;
      local_168 = param_7;
      local_170 = param_6;
      local_178 = param_5;
      FUN_142c98bb6(param_1,param_2,param_3,param_4);
      local_68 = DAT_14ca83a40;
      local_78 = DAT_14ca83a30;
      uStack_74 = DAT_14ca83a34;
      uStack_70 = DAT_14ca83a38;
      uStack_6c = DAT_14ca83a3c;
      local_80 = 0x20808;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_5c = local_a8;
      local_54 = CONCAT44(0x47020101,CONCAT22(1,local_a0));
      local_4c = 0xff00;
      lVar3 = FUN_14472bf7a(param_1,&local_80,L"HeterogeneousVolumes.AmbientOcclusionTexture",0);
      *param_9 = lVar3;
      local_178 = param_9;
      FUN_142c99d4e(param_1,param_3,&local_a8,local_f8);
      goto LAB_14719b274;
    }
  }
  local_68 = DAT_14ca83a40;
  local_78 = DAT_14ca83a30;
  uStack_74 = DAT_14ca83a34;
  uStack_70 = DAT_14ca83a38;
  uStack_6c = DAT_14ca83a3c;
  local_80 = 0x20808;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = &DAT_100000001;
  local_54 = 0x4702010100010001;
  local_4c = 0xff00;
  local_88 = FUN_14472bf7a(param_1,&local_80,L"HeterogeneousVolumes.AmbientOcclusionTexture",0);
  *param_9 = local_88;
  uStack_90 = uStack_90 & 0xffffff00;
  local_98 = (uint)*(byte *)(local_88 + 0x94);
  uStack_94 = 0;
  uStack_93 = 0;
  local_178 = &local_f0;
  local_f0._0_1_ = 0;
  uVar2 = FUN_144a96e92(param_1 + 0x198,param_1 + 0x70,local_88 + 8,&local_98);
  local_98 = 0x3f800000;
  uStack_94 = 0;
  uStack_93 = 0x8000;
  uStack_91 = 0x3f;
  uStack_90 = 0x3f800000;
  uStack_8c = 0x3f800000;
  FUN_140c4fe69(param_1,uVar2,&local_98,2);
LAB_14719b274:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719b47c FUN_14719b47c body=42 status=ok
// SIG undefined FUN_14719b47c(void)

void FUN_14719b47c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719b4ea FUN_14719b4ea body=96 status=ok
// SIG undefined FUN_14719b4ea(void)

undefined8 FUN_14719b4ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ccccc2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e0a48,1);
  return uVar3;
}



// FUNCTION 14719b54a FUN_14719b54a body=52 status=ok
// SIG undefined FUN_14719b54a(void)

void FUN_14719b54a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719b57e FUN_14719b57e body=108 status=ok
// SIG undefined FUN_14719b57e(void)

undefined4 * FUN_14719b57e(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ccca54();
  FUN_145ccca54();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9debe0,0);
  FUN_145ccca54();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719b5eb FUN_14719b5eb body=309 status=ok
// SIG undefined FUN_14719b5eb(void)

void FUN_14719b5eb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145ccccc2();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9e0a48,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145ccccc2();
  FUN_1471b2176(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719b721 FUN_14719b721 body=945 status=ok
// SIG undefined FUN_14719b721(void)

void FUN_14719b721(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6,longlong *param_7)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_108 [32];
  wchar_t **local_e8;
  uint local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  int local_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  uint uStack_98;
  uint uStack_94;
  undefined7 uStack_90;
  undefined8 uStack_89;
  undefined1 local_81;
  undefined1 local_80 [12];
  undefined8 local_74;
  undefined8 *local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)(param_5 + 0x18);
  bVar3 = *(byte *)(lVar5 + 0xf0);
  iVar15 = *(int *)(lVar5 + 0xa8) >> (bVar3 & 0x1f);
  if (iVar15 < 2) {
    iVar15 = 1;
  }
  iVar14 = *(int *)(lVar5 + 0xa4) >> (bVar3 & 0x1f);
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar10 = *(int *)(lVar5 + 0xa0) >> (bVar3 & 0x1f);
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  iVar15 = iVar10 * iVar14 * iVar15;
  local_60 = (undefined8 *)0x0;
  local_d4 = iVar15 * 2;
  local_e8 = (wchar_t **)&local_49;
  local_49 = 0;
  local_58 = L"CreateSparseVoxelBLAS.VertexBuffer";
  uVar13 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar13 = DAT_14ca84e48;
  }
  uStack_b0 = 0x10109;
  uVar9 = DAT_14ca84e48;
  if (local_d4 < DAT_14ca84e48) {
    uVar9 = local_d4;
  }
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  local_b8 = CONCAT44(uVar9 + (uVar9 == 0),uVar13 + (uVar13 == 0));
  local_d0 = param_4;
  local_c8 = param_3;
  lVar5 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_58,&local_b8);
  local_b8 = local_b8 & 0xffffffffff000000;
  uStack_b0 = (undefined4)lVar5;
  uStack_ac = (undefined2)((ulonglong)lVar5 >> 0x20);
  uStack_aa = (undefined2)((ulonglong)lVar5 >> 0x30);
  if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
    uVar4 = local_b8 >> 8;
    local_b8 = CONCAT71((int7)uVar4,0x1c);
  }
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_e8 = &local_58;
  uVar6 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,lVar5 + 8,&local_b8);
  FUN_1405bfba3(param_1,uVar6,0,2);
  plVar7 = (longlong *)FUN_1449609de(param_1,lVar5);
  puVar8 = (undefined8 *)*plVar7;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
    local_60 = puVar8;
  }
  local_e8 = (wchar_t **)FUN_144735dd8(param_1,&local_60,0);
  FUN_142c9a0e2(param_1,param_2,param_5,local_d0);
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a2 = 1;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_99 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_89 = 0;
  local_81 = 0;
  FUN_1431eae0a(local_80);
  local_74 = 0;
  FUN_1446f470e(&local_c0,L" (HeterogeneousVolume)",1);
  FUN_1474121b6(local_80,local_c0);
  uVar13 = uStack_98;
  uStack_ac = 1;
  uStack_aa = 0;
  uStack_a4 = 0;
  lVar5 = local_60[5];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar11 = (longlong)(int)uStack_98;
  uStack_98 = uStack_98 + 1;
  if (uStack_94 < uStack_98) {
    FUN_1471b2628(&uStack_a0,uVar13);
  }
  plVar7 = (longlong *)(CONCAT17(uStack_99,uStack_a0) + lVar11 * 0x28);
  *plVar7 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar7[1] = 3;
  *(undefined4 *)(plVar7 + 2) = 0x18;
  *(uint *)((longlong)plVar7 + 0x14) = local_d4;
  *(undefined4 *)(plVar7 + 3) = 0;
  *(int *)((longlong)plVar7 + 0x1c) = iVar15;
  *(undefined2 *)(plVar7 + 4) = 0x100;
  *(undefined1 *)((longlong)plVar7 + 0x22) = 1;
  local_a8 = iVar15;
  (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_58,&DAT_14ca85100);
  iVar15 = (int)param_6[1];
  *(uint *)(param_6 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_6 + 0xc) < iVar15 + 1U) {
    FUN_1471b26bc(param_6,iVar15);
  }
  *(wchar_t **)(*param_6 + (longlong)iVar15 * 8) = local_58;
  puVar8 = (undefined8 *)(**(code **)(*local_c8 + 0x20))();
  iVar15 = (int)param_7[1];
  *(uint *)(param_7 + 1) = iVar15 + 1U;
  if (*(uint *)((longlong)param_7 + 0xc) < iVar15 + 1U) {
    FUN_140518214(param_7,iVar15);
  }
  puVar12 = (undefined8 *)((longlong)iVar15 * 0x80 + *param_7);
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar13 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
  }
  FUN_14005bca4(&local_b8);
  if (local_60 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_60 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_60)(local_60,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719bad4 FUN_14719bad4 body=42 status=ok
// SIG undefined FUN_14719bad4(void)

void FUN_14719bad4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719bb0c FUN_14719bb0c body=67 status=ok
// SIG undefined FUN_14719bb0c(void)

undefined8 FUN_14719bb0c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14719bb50 FUN_14719bb50 body=52 status=ok
// SIG undefined FUN_14719bb50(void)

void FUN_14719bb50(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719bb84 FUN_14719bb84 body=42 status=ok
// SIG undefined FUN_14719bb84(void)

void FUN_14719bb84(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719bbbc FUN_14719bbbc body=67 status=ok
// SIG undefined FUN_14719bbbc(void)

undefined8 FUN_14719bbbc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14719bc00 FUN_14719bc00 body=52 status=ok
// SIG undefined FUN_14719bc00(void)

void FUN_14719bc00(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719bc34 FUN_14719bc34 body=42 status=ok
// SIG undefined FUN_14719bc34(void)

void FUN_14719bc34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719bc6c FUN_14719bc6c body=67 status=ok
// SIG undefined FUN_14719bc6c(void)

undefined8 FUN_14719bc6c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14719bcb0 FUN_14719bcb0 body=52 status=ok
// SIG undefined FUN_14719bcb0(void)

void FUN_14719bcb0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719bce4 FUN_14719bce4 body=42 status=ok
// SIG undefined FUN_14719bce4(void)

void FUN_14719bce4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719bd1c FUN_14719bd1c body=67 status=ok
// SIG undefined FUN_14719bd1c(void)

undefined8 FUN_14719bd1c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14719bd60 FUN_14719bd60 body=52 status=ok
// SIG undefined FUN_14719bd60(void)

void FUN_14719bd60(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719bd94 FUN_14719bd94 body=173 status=ok
// SIG undefined FUN_14719bd94(void)

undefined8 * FUN_14719bd94(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar4 + 7;
  if (puVar2 < puVar1) {
    FUN_140023dd8(param_1,0x40);
    puVar2 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar4 + 7;
  }
  *param_1 = (ulonglong)puVar1;
  puVar3 = puVar1 + 1;
  if (puVar2 < puVar3) {
    FUN_140023dd8(param_1,0x10);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar1 + 1;
  }
  *param_1 = (ulonglong)puVar3;
  *puVar1 = param_2;
  *puVar4 = *(undefined8 *)*param_3;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 1;
  puVar4[4] = puVar1;
  puVar4[5] = 0;
  puVar4[6] = 0;
  return puVar4;
}



// FUNCTION 14719be41 FUN_14719be41 body=690 status=ok
// SIG undefined FUN_14719be41(void)

undefined8 FUN_14719be41(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  longlong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = 0x9552b72710480035;
  local_e8 = 8;
  local_e0 = 1;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98 = 0;
  local_e4 = FUN_147433942(0x200);
  FUN_14719c0f4(*(undefined8 *)(param_2 + 0x13818),&local_f8);
  if (local_f8 == 0) {
    local_50 = 0;
    local_c8 = 0x9552b72710480035;
  }
  else {
    local_50 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_f0 + 8) + 0x50) +
                (longlong)*(int *)(local_f8 + 0xd4) * 8);
    if (local_50 == 0) {
      local_50 = FUN_1400bafc2(*(longlong *)(local_f0 + 8),(longlong)*(int *)(local_f8 + 0xd4),1);
    }
    local_c8 = uVar5;
    if (local_50 != 0) {
      local_c8 = *(longlong *)(local_50 + 0x88) + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
    }
  }
  local_80 = &local_50;
  local_78 = 1;
  FUN_14719c162(*(undefined8 *)(param_2 + 0x13818),&local_108);
  if (local_108 == 0) {
    local_58 = 0;
    uStack_d0 = uVar5;
  }
  else {
    local_58 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_100 + 8) + 0x50) +
                (longlong)*(int *)(local_108 + 0xd4) * 8);
    if (local_58 == 0) {
      local_58 = FUN_1400bafc2(*(longlong *)(local_100 + 8),(longlong)*(int *)(local_108 + 0xd4),1);
    }
    uStack_d0 = 0x9552b72710480035;
    if (local_58 != 0) {
      uStack_d0 = *(longlong *)(local_58 + 0x88) + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
    }
  }
  local_90 = &local_58;
  local_88 = 1;
  local_a0 = &local_60;
  local_98 = 1;
  if (param_3 != 0) {
    uVar5 = *(longlong *)(param_3 + 0x88) + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
  }
  local_d8 = uVar5;
  local_60 = param_3;
  uVar3 = FUN_147413892(&local_e8);
  *param_4 = uVar3;
  uVar4 = FUN_1431e3d59(param_1,&local_e8,0);
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719c0f4 FUN_14719c0f4 body=108 status=ok
// SIG undefined FUN_14719c0f4(void)

undefined4 * FUN_14719c0f4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f90c70();
  FUN_145f90c70();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9ded08,0);
  FUN_145f90c70();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719c162 FUN_14719c162 body=108 status=ok
// SIG undefined FUN_14719c162(void)

undefined4 * FUN_14719c162(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14609009c();
  FUN_14609009c();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9dee30,0);
  FUN_14609009c();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719c1cf FUN_14719c1cf body=87 status=ok
// SIG undefined FUN_14719c1cf(void)

bool FUN_14719c1cf(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = DAT_14c9de190;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(DAT_14c9df180 + 4) != 0;
  }
  return bVar4;
}



// FUNCTION 14719c240 FUN_14719c240 body=54 status=ok
// SIG undefined FUN_14719c240(void)

void FUN_14719c240(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14719c27e FUN_14719c27e body=39 status=ok
// SIG undefined FUN_14719c27e(void)

void FUN_14719c27e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1471a9236(uVar1,param_1);
  return;
}



// FUNCTION 14719c2a6 FUN_14719c2a6 body=103 status=ok
// SIG undefined FUN_14719c2a6(void)

void * FUN_14719c2a6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x130);
  memset(_Dst,0,0x130);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined8 *)((longlong)_Dst + 0x110) = 0;
  *(undefined8 *)((longlong)_Dst + 0x118) = 0;
  *(undefined8 *)((longlong)_Dst + 0x120) = 0;
  *(undefined4 *)((longlong)_Dst + 0x128) = 0;
  return _Dst;
}



// FUNCTION 14719c30e FUN_14719c30e body=54 status=ok
// SIG undefined FUN_14719c30e(void)

void FUN_14719c30e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 14719c34c FUN_14719c34c body=39 status=ok
// SIG undefined FUN_14719c34c(void)

void FUN_14719c34c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1471b2bce(uVar1,param_1);
  return;
}



// FUNCTION 14719c374 FUN_14719c374 body=103 status=ok
// SIG undefined FUN_14719c374(void)

void * FUN_14719c374(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x130);
  memset(_Dst,0,0x130);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined8 *)((longlong)_Dst + 0x110) = 0;
  *(undefined8 *)((longlong)_Dst + 0x118) = 0;
  *(undefined8 *)((longlong)_Dst + 0x120) = 0;
  *(undefined4 *)((longlong)_Dst + 0x128) = 0;
  return _Dst;
}



// FUNCTION 14719c3db FUN_14719c3db body=221 status=ok
// SIG undefined FUN_14719c3db(void)

void FUN_14719c3db(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar4 = *(longlong *)(*param_2 + 0x18);
  iVar3 = *(int *)(lVar4 + 0x1a8);
  *(int *)(param_1 + 0x1a8) = iVar3;
  if (0 < iVar3) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar4 + lVar12);
      uVar6 = ((undefined8 *)(lVar4 + lVar12))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar12);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar12);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(param_1 + 0x10 + lVar12);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(param_1 + lVar12) = uVar5;
      ((undefined8 *)(param_1 + lVar12))[1] = uVar6;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x40;
    } while (lVar13 < *(int *)(param_1 + 0x1a8));
  }
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(lVar4 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(lVar4 + 0x180);
  uVar5 = *(undefined8 *)(lVar4 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar4 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar4 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar4 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar4 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar4 + 0x1b4);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(lVar4 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar4 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(lVar4 + 0x1c8);
  return;
}



// FUNCTION 14719c4b8 FUN_14719c4b8 body=450 status=ok
// SIG undefined FUN_14719c4b8(void)

void FUN_14719c4b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  undefined8 *local_218 [59];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 0x76;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x3c0);
    puVar4 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 0x76;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14a2367d8;
  puVar4[0x34] = 0;
  puVar4[0x35] = 0x3f80000000000000;
  puVar4[0x6e] = 0;
  puVar4[0x6f] = 0x3f80000000000000;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  puVar4[0x73] = 0;
  puVar4[0x74] = 0;
  puVar4[0x75] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar4;
  local_220 = FUN_1448f5790(param_1,param_2,param_3);
  FUN_14719c3db(local_218,&local_220);
  memcpy(puVar4 + 2,local_218,0x1d0);
  local_220 = FUN_1471b9e7f(param_1,param_2);
  FUN_14719c3db(local_218,&local_220);
  memcpy(puVar4 + 0x3c,local_218,0x1d0);
  local_218[0] = puVar4 + 2;
  FUN_145f00f00();
  local_220 = DAT_14c9df4a8;
  FUN_1471b2c60(param_1 + 0x1a8,plVar1,local_218,&local_220);
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719c67c FUN_14719c67c body=42 status=ok
// SIG undefined FUN_14719c67c(void)

void FUN_14719c67c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719c6ea FUN_14719c6ea body=96 status=ok
// SIG undefined FUN_14719c6ea(void)

undefined8 FUN_14719c6ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2c3d2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e0f58,1);
  return uVar3;
}



// FUNCTION 14719c74a FUN_14719c74a body=52 status=ok
// SIG undefined FUN_14719c74a(void)

void FUN_14719c74a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719c78a FUN_14719c78a body=54 status=ok
// SIG undefined FUN_14719c78a(void)

void FUN_14719c78a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14719c7c8 FUN_14719c7c8 body=39 status=ok
// SIG undefined FUN_14719c7c8(void)

void FUN_14719c7c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471ae118(uVar1,param_1);
  return;
}



// FUNCTION 14719c7f0 FUN_14719c7f0 body=86 status=ok
// SIG undefined FUN_14719c7f0(void)

void * FUN_14719c7f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined4 *)((longlong)_Dst + 0x108) = 0;
  return _Dst;
}



// FUNCTION 14719c846 FUN_14719c846 body=978 status=ok
// SIG undefined FUN_14719c846(void)

void FUN_14719c846(longlong param_1,char param_2,undefined8 param_3,double *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_3;
  if (0 < *(int *)(param_1 + 0x3758)) {
    lVar18 = 8;
    lVar17 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x3750);
      local_f8 = 0;
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + -8 + lVar18) + 0xc0);
      plVar16 = (longlong *)FUN_1449cbe5c(lVar5,*(undefined4 *)(param_1 + 0x3090),&local_f8);
      if (local_f8 == 0) {
        local_f8 = lVar5;
      }
      iVar14 = (**(code **)(*plVar16 + 0x30))(plVar16);
      if (param_2 == '\0') {
        if (iVar14 == 3) goto LAB_14719c954;
      }
      else {
        cVar13 = FUN_144914152(*(undefined8 *)(lVar4 + lVar18),param_1);
        if ((iVar14 == 3) && (cVar13 != '\0')) {
LAB_14719c954:
          puVar1 = (undefined4 *)(lVar4 + -8 + lVar18);
          local_108 = *puVar1;
          uStack_104 = puVar1[1];
          uStack_100 = puVar1[2];
          uStack_fc = puVar1[3];
          uVar15 = FUN_1471b64c0(&local_108);
          FUN_1471b2e7a(local_110,uVar15,&local_108,0);
          lVar4 = *(longlong *)(lVar4 + lVar18);
          dVar22 = *param_4;
          dVar2 = param_4[1];
          dVar21 = dVar22 + param_4[3];
          dVar10 = dVar2 + param_4[4];
          dVar3 = param_4[2];
          dVar12 = dVar3 + param_4[5];
          dVar6 = dVar22 - param_4[3];
          dVar20 = dVar2 - param_4[4];
          dVar19 = dVar3 - param_4[5];
          dVar7 = dVar6;
          if (dVar21 <= dVar6) {
            dVar7 = dVar21;
          }
          dVar8 = dVar20;
          if (dVar10 <= dVar20) {
            dVar8 = dVar10;
          }
          dVar9 = dVar19;
          if (dVar12 <= dVar19) {
            dVar9 = dVar12;
          }
          if (dVar6 <= dVar21) {
            dVar6 = dVar21;
          }
          if (dVar20 <= dVar10) {
            dVar20 = dVar10;
          }
          if (dVar19 <= dVar12) {
            dVar19 = dVar12;
          }
          dVar21 = *(double *)(lVar4 + 400);
          dVar10 = *(double *)(lVar4 + 0x180);
          dVar12 = *(double *)(lVar4 + 0x188);
          dVar11 = dVar10 - *(double *)(lVar4 + 0x198);
          if (dVar11 <= dVar7) {
            dVar7 = dVar11;
          }
          if (dVar6 <= dVar11) {
            dVar6 = dVar11;
          }
          dVar11 = dVar12 - *(double *)(lVar4 + 0x1a0);
          if (dVar11 <= dVar8) {
            dVar8 = dVar11;
          }
          if (dVar20 <= dVar11) {
            dVar20 = dVar11;
          }
          dVar11 = dVar21 - *(double *)(lVar4 + 0x1a8);
          if (dVar11 <= dVar9) {
            dVar9 = dVar11;
          }
          if (dVar19 <= dVar11) {
            dVar19 = dVar11;
          }
          dVar11 = *(double *)(lVar4 + 0x198) + dVar10;
          if (dVar11 <= dVar7) {
            dVar7 = dVar11;
          }
          if (dVar6 <= dVar11) {
            dVar6 = dVar11;
          }
          dVar11 = *(double *)(lVar4 + 0x1a0) + dVar12;
          if (dVar11 <= dVar8) {
            dVar8 = dVar11;
          }
          if (dVar20 <= dVar11) {
            dVar20 = dVar11;
          }
          dVar11 = *(double *)(lVar4 + 0x1a8) + dVar21;
          if (dVar11 <= dVar9) {
            dVar9 = dVar11;
          }
          if (dVar19 <= dVar11) {
            dVar19 = dVar11;
          }
          dVar20 = (dVar20 - dVar8) * 0.5;
          dVar6 = (dVar6 - dVar7) * 0.5;
          dVar8 = dVar8 + dVar20;
          dVar7 = dVar7 + dVar6;
          dVar19 = (dVar19 - dVar9) * 0.5;
          dVar9 = dVar9 + dVar19;
          dVar21 = SQRT((dVar21 - dVar9) * (dVar21 - dVar9) +
                        (dVar10 - dVar7) * (dVar10 - dVar7) + (dVar12 - dVar8) * (dVar12 - dVar8)) +
                   *(double *)(lVar4 + 0x1b0);
          dVar22 = SQRT((dVar3 - dVar9) * (dVar3 - dVar9) +
                        (dVar22 - dVar7) * (dVar22 - dVar7) + (dVar2 - dVar8) * (dVar2 - dVar8)) +
                   param_4[6];
          *param_4 = dVar7;
          param_4[1] = dVar8;
          param_4[2] = dVar9;
          param_4[3] = dVar6;
          param_4[4] = dVar20;
          param_4[5] = dVar19;
          if (dVar22 <= dVar21) {
            dVar22 = dVar21;
          }
          dVar2 = SQRT(dVar19 * dVar19 + dVar6 * dVar6 + dVar20 * dVar20);
          if (dVar22 <= dVar2) {
            dVar2 = dVar22;
          }
          param_4[6] = dVar2;
        }
      }
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar17 < *(int *)(param_1 + 0x3758));
  }
  if ((local_f0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719cc19 FUN_14719cc19 body=1065 status=ok
// SIG undefined FUN_14719cc19(void)

void FUN_14719cc19(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = param_4;
  if (((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x1d1) & 1) != 0) &&
     (FUN_14719c846(param_3,1,param_4,param_5), 0 < *(int *)(param_2 + 0x18))) {
    iVar20 = 0;
    local_110 = param_2;
    do {
      lVar16 = FUN_1471b64a7(local_110,iVar20);
      if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0xc20))) {
        lVar18 = 8;
        lVar19 = 0;
        do {
          lVar4 = *(longlong *)(lVar16 + 0xc18);
          cVar13 = FUN_144914152(*(undefined8 *)(lVar4 + lVar18),*(undefined8 *)(lVar16 + 0x10));
          local_f8 = 0;
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + -8 + lVar18) + 0xc0);
          plVar17 = (longlong *)FUN_1449cbe5c(lVar5,*(undefined4 *)(param_3 + 0x3090),&local_f8);
          if (local_f8 == 0) {
            local_f8 = lVar5;
          }
          iVar14 = (**(code **)(*plVar17 + 0x30))(plVar17);
          if ((cVar13 != '\0') && (iVar14 == 3)) {
            puVar1 = (undefined4 *)(lVar4 + -8 + lVar18);
            local_108 = *puVar1;
            uStack_104 = puVar1[1];
            uStack_100 = puVar1[2];
            uStack_fc = puVar1[3];
            uVar15 = FUN_1471b64c0(&local_108);
            FUN_1471b2e7a(local_118,uVar15,&local_108,0);
            lVar4 = *(longlong *)(lVar4 + lVar18);
            dVar24 = *param_5;
            dVar2 = param_5[1];
            dVar23 = dVar24 + param_5[3];
            dVar10 = dVar2 + param_5[4];
            dVar3 = param_5[2];
            dVar12 = dVar3 + param_5[5];
            dVar6 = dVar24 - param_5[3];
            dVar22 = dVar2 - param_5[4];
            dVar21 = dVar3 - param_5[5];
            dVar7 = dVar6;
            if (dVar23 <= dVar6) {
              dVar7 = dVar23;
            }
            dVar8 = dVar22;
            if (dVar10 <= dVar22) {
              dVar8 = dVar10;
            }
            dVar9 = dVar21;
            if (dVar12 <= dVar21) {
              dVar9 = dVar12;
            }
            if (dVar6 <= dVar23) {
              dVar6 = dVar23;
            }
            if (dVar22 <= dVar10) {
              dVar22 = dVar10;
            }
            if (dVar21 <= dVar12) {
              dVar21 = dVar12;
            }
            dVar23 = *(double *)(lVar4 + 400);
            dVar10 = *(double *)(lVar4 + 0x180);
            dVar12 = *(double *)(lVar4 + 0x188);
            dVar11 = dVar10 - *(double *)(lVar4 + 0x198);
            if (dVar11 <= dVar7) {
              dVar7 = dVar11;
            }
            if (dVar6 <= dVar11) {
              dVar6 = dVar11;
            }
            dVar11 = dVar12 - *(double *)(lVar4 + 0x1a0);
            if (dVar11 <= dVar8) {
              dVar8 = dVar11;
            }
            if (dVar22 <= dVar11) {
              dVar22 = dVar11;
            }
            dVar11 = dVar23 - *(double *)(lVar4 + 0x1a8);
            if (dVar11 <= dVar9) {
              dVar9 = dVar11;
            }
            if (dVar21 <= dVar11) {
              dVar21 = dVar11;
            }
            dVar11 = *(double *)(lVar4 + 0x198) + dVar10;
            if (dVar11 <= dVar7) {
              dVar7 = dVar11;
            }
            if (dVar6 <= dVar11) {
              dVar6 = dVar11;
            }
            dVar11 = *(double *)(lVar4 + 0x1a0) + dVar12;
            if (dVar11 <= dVar8) {
              dVar8 = dVar11;
            }
            if (dVar22 <= dVar11) {
              dVar22 = dVar11;
            }
            dVar11 = *(double *)(lVar4 + 0x1a8) + dVar23;
            if (dVar11 <= dVar9) {
              dVar9 = dVar11;
            }
            if (dVar21 <= dVar11) {
              dVar21 = dVar11;
            }
            dVar22 = (dVar22 - dVar8) * 0.5;
            dVar6 = (dVar6 - dVar7) * 0.5;
            dVar8 = dVar8 + dVar22;
            dVar7 = dVar7 + dVar6;
            dVar21 = (dVar21 - dVar9) * 0.5;
            dVar9 = dVar9 + dVar21;
            dVar23 = SQRT((dVar23 - dVar9) * (dVar23 - dVar9) +
                          (dVar10 - dVar7) * (dVar10 - dVar7) + (dVar12 - dVar8) * (dVar12 - dVar8))
                     + *(double *)(lVar4 + 0x1b0);
            dVar24 = SQRT((dVar3 - dVar9) * (dVar3 - dVar9) +
                          (dVar24 - dVar7) * (dVar24 - dVar7) + (dVar2 - dVar8) * (dVar2 - dVar8)) +
                     param_5[6];
            *param_5 = dVar7;
            param_5[1] = dVar8;
            param_5[2] = dVar9;
            param_5[3] = dVar6;
            param_5[4] = dVar22;
            param_5[5] = dVar21;
            if (dVar24 <= dVar23) {
              dVar24 = dVar23;
            }
            dVar2 = SQRT(dVar21 * dVar21 + dVar6 * dVar6 + dVar22 * dVar22);
            if (dVar24 <= dVar2) {
              dVar2 = dVar24;
            }
            param_5[6] = dVar2;
          }
          lVar19 = lVar19 + 1;
          lVar18 = lVar18 + 0x18;
        } while (lVar19 < *(int *)(lVar16 + 0xc20));
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(local_110 + 0x18));
  }
  if ((local_f0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14719d043 FUN_14719d043 body=8684 status=ok
// SIG undefined FUN_14719d043(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14719d043(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       uint param_5,longlong param_6,undefined8 param_7,undefined1 *param_8,
                       float *param_9,float *param_10,float *param_11,int *param_12,int *param_13,
                       double *param_14,uint *param_15,undefined8 param_16,float **param_17)

{
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  float **ppfVar14;
  wchar_t **ppwVar15;
  undefined8 *puVar16;
  double *pdVar17;
  double *pdVar18;
  float ***pppfVar19;
  undefined8 *puVar20;
  double *pdVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1098 [32];
  float **local_1078;
  float *local_1070;
  float *local_1068;
  float *local_1060;
  double *local_1058;
  double local_1050;
  uint local_1048;
  undefined1 local_1040;
  float *local_1038;
  int *local_1030;
  undefined8 local_1028;
  float **local_1020;
  float *local_1010;
  int local_1008;
  int local_1004;
  longlong local_1000;
  double local_ff8;
  double local_ff0;
  double local_fe8;
  undefined8 uStack_fe0;
  longlong local_fd0;
  undefined8 local_fc8;
  undefined8 local_fc0;
  double local_fb8;
  double local_fb0;
  undefined8 local_fa8;
  int local_fa0;
  double local_f98;
  double dStack_f90;
  double local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  double local_f68;
  undefined8 local_f58 [16];
  undefined4 local_ed8;
  undefined4 uStack_ed4;
  undefined4 uStack_ed0;
  undefined4 uStack_ecc;
  undefined1 local_ec8 [512];
  undefined5 local_cc8;
  undefined3 uStack_cc3;
  undefined5 uStack_cc0;
  double local_cb8 [10];
  undefined4 local_c68;
  undefined4 uStack_c64;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined1 local_c58 [512];
  undefined5 local_a58;
  undefined3 uStack_a53;
  undefined5 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  double local_a38;
  double local_9c8 [15];
  undefined8 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  double local_938 [13];
  double local_8d0;
  float *local_8c8;
  double local_8c0 [15];
  wchar_t *local_848 [12];
  double local_7e8;
  double local_7e0;
  double local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined1 *local_7c0 [2];
  double local_7b0 [9];
  undefined1 local_768 [16];
  double local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  double dStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  ulonglong local_6e8;
  ulonglong uStack_6e0;
  ulonglong uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8 [16];
  undefined8 local_648 [4];
  longlong local_628;
  undefined8 local_618;
  undefined8 local_5c8 [16];
  undefined8 local_548 [8];
  longlong local_508;
  undefined8 local_4f8;
  undefined4 local_4e8;
  float fStack_4e4;
  undefined4 local_4e0;
  undefined1 local_4dc;
  double local_4c8 [16];
  float **local_448;
  undefined8 uStack_440;
  undefined1 *puStack_438;
  undefined8 local_430;
  double dStack_428;
  double local_420;
  double local_418;
  undefined8 uStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  undefined8 local_3d0;
  double local_3c8 [48];
  float *local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  int local_220;
  undefined8 local_21c;
  int local_214;
  longlong local_208;
  undefined4 local_200;
  float *local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178 [12];
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14719d059;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1098;
  local_fd0 = param_1;
  local_fc8 = param_2;
  local_fc0 = param_3;
  lVar9 = FUN_1471b64a7(param_7,0);
  FUN_1471b647b(&local_748);
  *param_14 = local_748;
  *(undefined1 **)param_12 = &DAT_100000001;
  param_12[2] = 1;
  iVar22 = *(int *)param_14 + 7;
  iVar7 = *(int *)param_14 + 0xe;
  if (-1 < iVar22) {
    iVar7 = iVar22;
  }
  *param_12 = iVar7 >> 3;
  iVar22 = *(int *)((longlong)param_14 + 4) + 7;
  iVar7 = *(int *)((longlong)param_14 + 4) + 0xe;
  if (-1 < iVar22) {
    iVar7 = iVar22;
  }
  param_12[1] = iVar7 >> 3;
  param_12[2] = (uint)((param_5 - 1 & 0xfffffffd) == 0) * 5 + 1;
  ppfVar14 = &local_248;
  local_228 = 0;
  local_220 = 0;
  local_248 = (float *)0x0;
  uStack_240 = 0;
  local_21c = 0xffffffff00000080;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1078 = (float **)&local_f98;
  local_f68 = 0.0;
  local_f78 = 0;
  uStack_f70 = 0;
  local_f88 = 0.0;
  uStack_f80 = 0;
  local_f98 = 0.0;
  dStack_f90 = 0.0;
  local_1000 = param_4;
  FUN_14719cc19(param_6,param_7,param_4,ppfVar14);
  iVar7 = local_214;
  lVar11 = local_1000;
  iVar22 = (int)uStack_240;
  if ((int)uStack_240 == local_214) goto LAB_14719eeeb;
  iVar1 = *(int *)(lVar9 + 0x9b8);
  *param_13 = iVar1;
  local_1004 = (int)uStack_240;
  local_1008 = local_214;
  if (iVar1 < 1) {
    if (param_5 == 0) {
      *param_8 = 1;
      local_ff8 = *(double *)(local_1000 + 0x1030);
      local_1010 = *(float **)(local_1000 + 0x1038);
      local_fe8 = *(double *)(local_1000 + 0x1040);
      uStack_fe0 = 0;
      local_3d8 = -local_fe8;
      local_448 = (float **)&DAT_3ff0000000000000;
      uStack_440 = 0.0;
      puStack_438 = (undefined1 *)0x0;
      local_430 = 0;
      dStack_428 = 0.0;
      local_420 = 1.0;
      local_418 = 0.0;
      uStack_410 = 0;
      local_408 = 0.0;
      dStack_400 = 0.0;
      local_3f8 = 1.0;
      local_3f0 = 0;
      local_3e8._8_4_ = (int)*(undefined8 *)(local_1000 + 0x1038);
      local_3e8._0_8_ = *(ulonglong *)(local_1000 + 0x1030) ^ 0x8000000000000000;
      local_3e8._12_4_ =
           (uint)((ulonglong)*(undefined8 *)(local_1000 + 0x1038) >> 0x20) ^ 0x80000000;
      local_3d0 = 0x3ff0000000000000;
      local_758 = -local_f88;
      local_7c8 = (float *)0x3ff0000000000000;
      local_7c0[0] = (undefined1 *)0x0;
      local_7c0[1] = (undefined1 *)0x0;
      local_7b0[0] = 0.0;
      local_7b0[1] = 0.0;
      local_7b0[2] = 1.0;
      local_7b0[3] = 0.0;
      local_7b0[4] = 0.0;
      local_7b0[5] = 0.0;
      local_7b0[6] = 0.0;
      local_7b0[7] = 1.0;
      local_7b0[8] = 0.0;
      local_768._8_4_ = SUB84(dStack_f90,0);
      local_768._0_8_ = -local_f98;
      local_768._12_4_ = (uint)((ulonglong)dStack_f90 >> 0x20) ^ 0x80000000;
      local_750 = 0x3ff0000000000000;
      lVar9 = *(longlong *)(param_6 + 0x28);
      local_a38 = *(double *)(lVar9 + 0x90);
      local_a48 = *(double *)(lVar9 + 0x50);
      uStack_a40 = *(double *)(lVar9 + 0x70);
      dVar28 = local_a38 * local_a38 + local_a48 * local_a48 + uStack_a40 * uStack_a40;
      if ((dVar28 != 1.0) || (NAN(dVar28))) {
        if (9.99999993922529e-09 <= dVar28) {
          dVar28 = 1.0 / SQRT(dVar28);
          local_a38 = local_a38 * dVar28;
          uStack_a40 = uStack_a40 * dVar28;
          local_a48 = local_a48 * dVar28;
        }
        else {
          local_a38 = DAT_14c8464f0;
          local_a48 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_a40 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
      }
      FUN_144a79a9c(&local_a48,&local_8c8);
      dVar28 = cos((local_8c0[0] * 3.1415927410125732) / 180.0);
      dVar3 = sin((local_8c0[0] * 3.1415927410125732) / 180.0);
      dVar27 = sin((local_8c0[0] * 3.1415927410125732) / 180.0);
      local_3c8[0] = cos((local_8c0[0] * 3.1415927410125732) / 180.0);
      local_3c8[2] = 0.0;
      local_3c8[3] = 0.0;
      local_3c8[6] = 0.0;
      local_3c8[7] = 0.0;
      local_3c8[8] = 0.0;
      local_3c8[9] = 0.0;
      local_3c8[10] = 1.0;
      local_3c8[0xb] = 0.0;
      local_3c8[0xc] = 0.0;
      local_3c8[0xd] = 0.0;
      local_3c8[0xe] = 0.0;
      local_3c8[0xf] = 1.0;
      local_3c8[1] = -dVar27;
      local_3c8[4] = dVar3;
      local_3c8[5] = dVar28;
      dVar28 = cos(((double)local_8c8 * 3.1415927410125732) / 180.0);
      dVar3 = sin(((double)local_8c8 * 3.1415927410125732) / 180.0);
      dVar27 = sin(((double)local_8c8 * 3.1415927410125732) / 180.0);
      local_178[0] = cos(((double)local_8c8 * 3.1415927410125732) / 180.0);
      local_178[1] = 0.0;
      local_178[3] = 0.0;
      local_178[4] = 0.0;
      local_178[5] = 1.0;
      local_178[6] = 0.0;
      local_178[7] = 0.0;
      local_178[9] = 0.0;
      local_178[0xb] = 0.0;
      auStack_118 = ZEXT816(0);
      dStack_108 = 0.0;
      local_100 = 0x3ff0000000000000;
      local_178[2] = -dVar27;
      local_178[8] = dVar3;
      local_178[10] = dVar28;
      FUN_1447fea8d(&local_748,local_3c8,local_178);
      dVar28 = cos((local_8c0[1] * 3.1415927410125732) / 180.0);
      dVar3 = sin((local_8c0[1] * 3.1415927410125732) / 180.0);
      dVar27 = sin((local_8c0[1] * 3.1415927410125732) / 180.0);
      local_1d0 = cos((local_8c0[1] * 3.1415927410125732) / 180.0);
      local_1f8 = (float *)0x3ff0000000000000;
      local_1f0 = 0.0;
      dStack_1e8 = 0.0;
      local_1e0 = 0.0;
      dStack_1d8 = 0.0;
      local_1c0 = 0.0;
      dStack_1b8 = 0.0;
      local_1a0 = 0.0;
      dStack_198 = 0.0;
      local_190 = 0.0;
      dStack_188 = 0.0;
      local_180 = 1.0;
      local_1c8 = dVar27;
      local_1b0 = -dVar3;
      local_1a8 = dVar28;
      FUN_1447fea8d(local_848,&local_748);
      local_ff0 = local_f68;
      local_748 = 1.0 / local_f68;
      uStack_740 = 0.0;
      dStack_738 = 0.0;
      uStack_730 = 0;
      uStack_728 = 0;
      local_718 = 0.0;
      dStack_710 = 0.0;
      local_708 = 0.0;
      dStack_700 = 0.0;
      uStack_6f0 = 0.0;
      local_6e8 = 0;
      uStack_6e0 = 0;
      uStack_6d8 = 0;
      local_6d0 = 0x3ff0000000000000;
      local_178[0] = 0.0;
      local_178[1] = 0.0;
      local_178[2] = 1.0;
      local_178[3] = 0.0;
      local_178[4] = 0.0;
      local_178[5] = 1.0;
      local_178[6] = 0.0;
      local_178[7] = 0.0;
      local_178[8] = -1.0;
      local_178[9] = 0.0;
      local_178[10] = 0.0;
      local_178[0xb] = 0.0;
      auStack_118 = ZEXT816(0);
      dStack_108 = 0.0;
      local_100 = 0x3ff0000000000000;
      local_3c8[0] = 0.5;
      local_3c8[1] = 0.0;
      local_3c8[2] = 0.0;
      local_3c8[3] = 0.0;
      local_3c8[4] = 0.0;
      local_3c8[5] = -0.5;
      local_3c8[6] = 0.0;
      local_3c8[7] = 0.0;
      local_3c8[8] = 0.0;
      local_3c8[9] = 0.0;
      local_3c8[10] = -0.5;
      local_3c8[0xb] = 0.0;
      local_3c8[0xc] = 0.0;
      local_3c8[0xd] = 0.0;
      local_3c8[0xe] = 0.0;
      local_3c8[0xf] = 1.0;
      local_8c8 = (float *)&DAT_3ff0000000000000;
      local_8c0[0] = 0.0;
      local_8c0[1] = 0.0;
      local_8c0[2] = 0.0;
      local_8c0[3] = 0.0;
      local_8c0[4] = 1.0;
      local_8c0[5] = 0.0;
      local_8c0[6] = 0.0;
      local_8c0[7] = 0.0;
      local_8c0[8] = 0.0;
      local_8c0[9] = 1.0;
      local_8c0[10] = 0.0;
      local_8c0[0xb] = 0.5;
      local_8c0[0xc] = 0.5;
      local_8c0[0xd] = 0.5;
      local_8c0[0xe] = 1.0;
      dStack_720 = local_748;
      local_6f8 = local_748;
      FUN_1447fea8d(&local_1f8,local_3c8,&local_8c8);
      FUN_1447fea8d(local_9c8,&local_7c8,local_848);
      FUN_1447fea8d(&local_948,local_9c8,&local_748);
      FUN_1447fea8d(local_3c8,&local_948,local_178);
      FUN_1447fea8d(&local_8c8,local_3c8,&local_1f8);
      FUN_1447fea8d(&local_948,&local_448,&local_8c8);
      *param_13 = 1;
      *param_11 = (float)local_948;
      param_11[1] = (float)uStack_940;
      param_11[2] = (float)local_938[0];
      param_11[3] = (float)local_938[1];
      param_11[4] = (float)local_938[2];
      param_11[5] = (float)local_938[3];
      param_11[6] = (float)local_938[4];
      param_11[7] = (float)local_938[5];
      param_11[8] = (float)local_938[6];
      param_11[9] = (float)local_938[7];
      param_11[10] = (float)local_938[8];
      param_11[0xb] = (float)local_938[9];
      param_11[0xc] = (float)local_938[10];
      param_11[0xd] = (float)local_938[0xb];
      param_11[0xe] = (float)local_938[0xc];
      param_11[0xf] = (float)local_8d0;
      FUN_144906bb6(param_11,local_3c8);
      dVar28 = (local_fe8 + local_f88) - local_a38 * local_ff0;
      dVar27 = ((double)local_1010 + dStack_f90) - uStack_a40 * local_ff0;
      dVar3 = (local_ff8 + local_f98) - local_ff0 * local_a48;
      goto LAB_14719e5d9;
    }
    local_748 = 1.0;
    uStack_740 = 0.0;
    dStack_738 = 0.0;
    uStack_730 = 0;
    uStack_728 = 0;
    dStack_720 = 1.0;
    local_718 = 0.0;
    dStack_710 = 0.0;
    local_708 = 0.0;
    dStack_700 = 0.0;
    local_6f8 = 1.0;
    uStack_6f0 = 0.0;
    local_6e8 = *(ulonglong *)(local_1000 + 0x1030) ^ 0x8000000000000000;
    uStack_6e0 = *(ulonglong *)(local_1000 + 0x1038) ^ 0x8000000000000000;
    uStack_6d8 = *(ulonglong *)(local_1000 + 0x1040) ^ 0x8000000000000000;
    local_6d0 = 0x3ff0000000000000;
    local_448 = (float **)0x0;
    uStack_440 = 0.0;
    FUN_14030f5be(lVar9,local_178,&local_448,0);
    FUN_1447fea8d(&local_1f8,&local_748,local_178);
    *param_13 = 1;
    *param_11 = (float)(double)local_1f8;
    param_11[1] = (float)local_1f0;
    param_11[2] = (float)dStack_1e8;
    param_11[3] = (float)local_1e0;
    param_11[4] = (float)dStack_1d8;
    param_11[5] = (float)local_1d0;
    param_11[6] = (float)local_1c8;
    param_11[7] = (float)local_1c0;
    param_11[8] = (float)dStack_1b8;
    param_11[9] = (float)local_1b0;
    param_11[10] = (float)local_1a8;
    param_11[0xb] = (float)local_1a0;
    param_11[0xc] = (float)dStack_198;
    param_11[0xd] = (float)local_190;
    param_11[0xe] = (float)dStack_188;
    param_11[0xf] = (float)local_180;
    FUN_144906bb6(param_11,local_3c8);
    fVar24 = (float)(*(double *)(lVar11 + 0x1040) - *(double *)(lVar9 + 0x58));
    fVar26 = (float)(*(double *)(lVar11 + 0x1038) - *(double *)(lVar9 + 0x50));
    fVar25 = (float)(*(double *)(lVar11 + 0x1030) - *(double *)(lVar9 + 0x48));
    *param_9 = fVar25;
    param_9[1] = fVar26;
    param_9[2] = fVar24;
  }
  else {
    local_ff8 = *(double *)(local_1000 + 0x1030);
    local_1010 = *(float **)(local_1000 + 0x1038);
    local_fe8 = *(double *)(local_1000 + 0x1040);
    uStack_fe0 = 0;
    local_178[0] = 1.0;
    local_178[1] = 0.0;
    local_178[2] = 0.0;
    local_178[3] = 0.0;
    local_178[4] = 0.0;
    local_178[5] = 1.0;
    local_178[6] = 0.0;
    local_178[7] = 0.0;
    local_178[8] = 0.0;
    local_178[9] = 0.0;
    local_178[10] = 1.0;
    local_178[0xb] = 0.0;
    auStack_118._8_4_ = (int)*(undefined8 *)(local_1000 + 0x1038);
    auStack_118._0_8_ = *(ulonglong *)(local_1000 + 0x1030) ^ 0x8000000000000000;
    auStack_118._12_4_ =
         (uint)((ulonglong)*(undefined8 *)(local_1000 + 0x1038) >> 0x20) ^ 0x80000000;
    dStack_108 = -local_fe8;
    local_100 = 0x3ff0000000000000;
    lVar9 = *(longlong *)(param_6 + 0x28);
    local_ff0 = *(double *)(lVar9 + 0x20);
    local_fb0 = *(double *)(lVar9 + 0x28);
    local_fb8 = *(double *)(lVar9 + 0x30);
    puVar16 = (undefined8 *)(lVar9 + 0x50);
    ppfVar14 = &local_1f8;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *ppfVar14 = (float *)*puVar16;
      puVar16 = puVar16 + 1;
      ppfVar14 = ppfVar14 + 1;
    }
    puVar16 = &DAT_14c846400;
    pppfVar19 = &local_448;
    for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pppfVar19 = (float **)*puVar16;
      puVar16 = puVar16 + 1;
      pppfVar19 = pppfVar19 + 1;
    }
    if (param_5 == 3) {
      dStack_738 = *(double *)(lVar9 + 0x90);
      local_748 = *(double *)(lVar9 + 0x50);
      uStack_740 = *(double *)(lVar9 + 0x70);
      dVar28 = dStack_738 * dStack_738 + local_748 * local_748 + uStack_740 * uStack_740;
      if ((dVar28 != 1.0) || (NAN(dVar28))) {
        if (9.99999993922529e-09 <= dVar28) {
          dVar28 = 1.0 / SQRT(dVar28);
          dStack_738 = dStack_738 * dVar28;
          uStack_740 = uStack_740 * dVar28;
          local_748 = local_748 * dVar28;
        }
        else {
          dStack_738 = DAT_14c8464f0;
          local_748 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_740 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
      }
      FUN_144a79a9c(&local_748,local_3c8);
      puVar2 = (undefined1 *)sin(local_3c8[0] * 0.01745329238474369);
      dVar28 = sin(local_3c8[1] * 0.01745329238474369);
      dVar3 = sin(local_3c8[2] * 0.01745329238474369);
      sin(0.0);
      dVar27 = cos(local_3c8[0] * 0.01745329238474369);
      dVar4 = cos(local_3c8[1] * 0.01745329238474369);
      dVar5 = cos(local_3c8[2] * 0.01745329238474369);
      cos(0.0);
      local_3e8._4_4_ = DAT_14c8464e0._4_4_;
      local_3e8._0_4_ = (undefined4)DAT_14c8464e0;
      local_3e8._12_4_ = DAT_14c8464e8._4_4_;
      local_3e8._8_4_ = (undefined4)DAT_14c8464e8;
      local_448 = (float **)(dVar27 * dVar4);
      uStack_440 = dVar28 * dVar27;
      puStack_438 = puVar2;
      local_430 = 0;
      dStack_428 = (double)puVar2 * dVar3 * dVar4 - dVar28 * dVar5;
      local_420 = (double)puVar2 * dVar3 * dVar28 + dVar4 * dVar5;
      local_418 = -dVar3 * dVar27;
      uStack_410 = 0;
      local_408 = -((double)puVar2 * dVar5 * dVar4 + dVar28 * dVar3);
      dStack_400 = dVar4 * dVar3 - dVar28 * (double)puVar2 * dVar5;
      local_3f8 = dVar27 * dVar5;
      local_3f0 = 0;
      local_3d8 = DAT_14c8464f0;
      local_3d0 = 0x3ff0000000000000;
    }
    local_748 = -1.0;
    uStack_740 = 0.0;
    dStack_738 = 0.0;
    lVar9 = 0;
    local_7c8 = (float *)0x0;
    local_7c0[0] = (undefined1 *)0xbff0000000000000;
    local_7c0[1] = (undefined1 *)0x0;
    local_848[0] = (wchar_t *)0x0;
    local_848[1] = (wchar_t *)0x0;
    local_848[2] = (wchar_t *)0x3ff0000000000000;
    do {
      *(undefined8 *)((longlong)local_3c8 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_7c8 + lVar9);
      *(undefined8 *)((longlong)local_3c8 + lVar9 * 4 + 8) =
           *(undefined8 *)((longlong)local_848 + lVar9);
      *(undefined8 *)((longlong)local_3c8 + lVar9 * 4 + 0x10) =
           *(undefined8 *)((longlong)&local_748 + lVar9);
      *(undefined8 *)((longlong)local_3c8 + lVar9 * 4 + 0x18) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    dVar28 = -DAT_14c8464f0;
    dVar3 = -(double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dVar27 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0) * -0.0;
    local_7d8 = dVar27 + (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) +
                DAT_14c8464f0 * -0.0;
    local_3c8[0xc] = local_7d8;
    local_7e8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) * -0.0;
    dVar27 = dVar27 + local_7e8;
    local_768._8_8_ = dVar27 - DAT_14c8464f0;
    local_3c8[0xd] = (double)local_768._8_8_;
    local_8c0[0xb] =
         local_7e8 + (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0) +
         DAT_14c8464f0 * -0.0;
    local_3c8[0xe] = local_8c0[0xb];
    local_3c8[0xf] = 1.0;
    pdVar18 = (double *)&local_748;
    pdVar17 = local_3c8;
    pdVar21 = pdVar18;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar21 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar21 = pdVar21 + 1;
    }
    local_848[0] = (wchar_t *)0x3ff0000000000000;
    local_848[1] = (wchar_t *)0x0;
    local_848[2] = (wchar_t *)0x0;
    lVar9 = 0;
    local_8c8 = (float *)0x0;
    local_8c0[0] = 1.0;
    local_8c0[1] = 0.0;
    local_948 = 0.0;
    uStack_940 = 0.0;
    local_938[0] = 1.0;
    do {
      *(undefined8 *)((longlong)&local_7c8 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_8c8 + lVar9);
      *(undefined8 *)((longlong)local_7c0 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_948 + lVar9);
      *(undefined8 *)((longlong)local_7b0 + lVar9 * 4 + -8) =
           *(undefined8 *)((longlong)local_848 + lVar9);
      *(undefined8 *)((longlong)local_7b0 + lVar9 * 4) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    local_768._0_8_ =
         (dVar3 * 0.0 - (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8)) +
         dVar28 * 0.0;
    local_7e8 = local_7e8 - (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    local_758 = dVar28 * 0.0 + local_7e8;
    local_750 = 0x3ff0000000000000;
    puVar16 = &local_7c8;
    puVar20 = local_6c8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar20 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    }
    lVar9 = 0;
    local_8c8 = (float *)0x0;
    local_8c0[0] = -1.0;
    local_8c0[1] = 0.0;
    local_948 = 1.0;
    uStack_940 = 0.0;
    local_938[0] = -0.0;
    local_9c8[0] = 0.0;
    local_9c8[1] = 0.0;
    local_9c8[2] = 1.0;
    do {
      *(undefined8 *)((longlong)local_848 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_948 + lVar9);
      *(undefined8 *)((longlong)local_848 + lVar9 * 4 + 8) =
           *(undefined8 *)((longlong)local_9c8 + lVar9);
      *(undefined8 *)((longlong)local_848 + lVar9 * 4 + 0x10) =
           *(undefined8 *)((longlong)&local_8c8 + lVar9);
      *(undefined8 *)((longlong)local_848 + lVar9 * 4 + 0x18) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    local_7e8 = dVar28 * -0.0 + local_7e8;
    local_7e0 = (double)local_768._8_8_;
    local_7d0 = 0x3ff0000000000000;
    ppwVar15 = local_848;
    puVar16 = local_648;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar16 = *ppwVar15;
      ppwVar15 = ppwVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    lVar9 = 0;
    local_948 = 0.0;
    uStack_940 = 1.0;
    local_938[0] = 0.0;
    local_9c8[0] = -1.0;
    local_9c8[1] = 0.0;
    local_9c8[2] = 0.0;
    local_a48 = 0.0;
    uStack_a40 = -0.0;
    local_a38 = 1.0;
    do {
      *(undefined8 *)((longlong)&local_8c8 + lVar9 * 4) =
           *(undefined8 *)((longlong)local_9c8 + lVar9);
      *(undefined8 *)((longlong)local_8c0 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_a48 + lVar9);
      *(undefined8 *)((longlong)local_8c0 + lVar9 * 4 + 8) =
           *(undefined8 *)((longlong)&local_948 + lVar9);
      *(undefined8 *)((longlong)local_8c0 + lVar9 * 4 + 0x10) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    local_8c0[0xc] =
         (dVar3 * 0.0 + (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8) * 0.0) -
         DAT_14c8464f0;
    local_8c0[0xd] = (double)local_768._0_8_;
    local_8c0[0xe] = 1.0;
    ppfVar14 = &local_8c8;
    puVar16 = local_5c8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar16 = *ppfVar14;
      ppfVar14 = ppfVar14 + 1;
      puVar16 = puVar16 + 1;
    }
    local_9c8[0] = 0.0;
    local_9c8[1] = 0.0;
    local_9c8[2] = -1.0;
    local_a48 = -0.0;
    uStack_a40 = 1.0;
    local_a38 = 0.0;
    local_f58[3] = 0x3ff0000000000000;
    local_f58[4] = 0;
    local_f58[5] = 0;
    lVar9 = 0;
    do {
      *(undefined8 *)((longlong)&local_948 + lVar9 * 4) =
           *(undefined8 *)((longlong)&local_a48 + lVar9);
      *(undefined8 *)((longlong)&uStack_940 + lVar9 * 4) =
           *(undefined8 *)((longlong)local_f58 + lVar9 + 0x18);
      *(undefined8 *)((longlong)local_938 + lVar9 * 4) =
           *(undefined8 *)((longlong)local_9c8 + lVar9);
      *(undefined8 *)((longlong)local_938 + lVar9 * 4 + 8) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    local_938[10] =
         dVar28 * 0.0 +
         dVar3 * -0.0 + -(double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_938[0xb] = local_758;
    local_938[0xc] = dVar27 - dVar28;
    local_8d0 = 1.0;
    puVar16 = &local_948;
    puVar20 = local_548;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar20 = *puVar16;
      puVar16 = puVar16 + 1;
      puVar20 = puVar20 + 1;
    }
    local_a48 = 0.0;
    uStack_a40 = 0.0;
    local_a38 = 1.0;
    lVar9 = 0;
    local_f58[3] = 0;
    local_f58[4] = 0xbff0000000000000;
    local_f58[5] = 0;
    local_f58[0] = 0x3ff0000000000000;
    local_f58[1] = 0;
    local_f58[2] = 0x8000000000000000;
    do {
      *(undefined8 *)((longlong)local_9c8 + lVar9 * 4) =
           *(undefined8 *)((longlong)local_f58 + lVar9 + 0x18);
      *(undefined8 *)((longlong)local_9c8 + lVar9 * 4 + 8) =
           *(undefined8 *)((longlong)local_f58 + lVar9);
      *(undefined8 *)((longlong)local_9c8 + lVar9 * 4 + 0x10) =
           *(undefined8 *)((longlong)&local_a48 + lVar9);
      *(undefined8 *)((longlong)local_9c8 + lVar9 * 4 + 0x18) = 0;
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x18);
    local_9c8[0xc] = local_7d8;
    local_9c8[0xd] = local_7e8;
    local_9c8[0xe] = (double)local_768._8_8_;
    local_950 = 0x3ff0000000000000;
    pdVar17 = local_9c8;
    pdVar21 = local_4c8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar21 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar21 = pdVar21 + 1;
    }
    fVar24 = (float)(**(code **)(**(longlong **)(param_6 + 0x28) + 0x18))();
    dVar28 = (double)fVar24;
    uVar23 = -(ulonglong)(0.1 < (double)*(float *)(DAT_14c9df1c8 + 4));
    dVar3 = (double)(~uVar23 & 0x3fb99999a0000000 |
                    (ulonglong)(double)*(float *)(DAT_14c9df1c8 + 4) & uVar23);
    local_7b0[7] = (double)(-(ulonglong)(dVar3 == dVar28) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar3 == dVar28) & (ulonglong)(dVar28 / (dVar28 - dVar3)));
    local_758 = -dVar3 * local_7b0[7];
    local_7b0[2] = ((double)*(int *)param_14 / 1.000000043711391) /
                   (double)*(int *)((longlong)param_14 + 4);
    local_7c8 = (float *)0x3fefffffe8885a39;
    local_7c0[0] = (undefined1 *)0x0;
    local_7c0[1] = (undefined1 *)0x0;
    local_7b0[0] = 0.0;
    local_7b0[1] = 0.0;
    local_7b0[3] = 0.0;
    local_7b0[4] = 0.0;
    local_7b0[5] = 0.0;
    local_7b0[6] = 0.0;
    local_7b0[8] = 1.0;
    local_768 = ZEXT816(0);
    local_750 = 0;
    pdVar17 = local_3c8;
    local_3c8[0] = 0.5;
    local_3c8[1] = 0.0;
    local_3c8[2] = 0.0;
    local_3c8[3] = 0.0;
    local_3c8[4] = 0.0;
    local_3c8[5] = -0.5;
    local_3c8[6] = 0.0;
    local_3c8[7] = 0.0;
    local_3c8[8] = 0.0;
    local_3c8[9] = 0.0;
    local_3c8[10] = -0.5;
    local_3c8[0xb] = 0.0;
    local_3c8[0xc] = 0.0;
    local_3c8[0xd] = 0.0;
    local_3c8[0xe] = 0.0;
    local_3c8[0xf] = 1.0;
    local_8c8 = (float *)&DAT_3ff0000000000000;
    local_8c0[0] = 0.0;
    local_8c0[1] = 0.0;
    local_8c0[2] = 0.0;
    local_8c0[3] = 0.0;
    local_8c0[4] = 1.0;
    local_8c0[5] = 0.0;
    local_8c0[6] = 0.0;
    local_8c0[7] = 0.0;
    local_8c0[8] = 0.0;
    local_8c0[9] = 1.0;
    local_8c0[10] = 0.0;
    local_8c0[0xb] = 0.5;
    local_8c0[0xc] = 0.5;
    local_8c0[0xd] = 0.5;
    local_8c0[0xe] = 1.0;
    FUN_1447fea8d(local_848,pdVar17);
    if (0 < *param_13) {
      lVar9 = 0;
      pfVar10 = param_11;
      do {
        FUN_1447fea8d(&local_a48,&local_1f8,&local_448);
        FUN_1447fea8d(local_9c8,&local_a48,pdVar18);
        FUN_1447fea8d(&local_948,local_9c8,&local_7c8);
        FUN_1447fea8d(&local_8c8,&local_948,local_848);
        FUN_1447fea8d(&local_948,local_178,&local_8c8);
        *pfVar10 = (float)local_948;
        pfVar10[1] = (float)uStack_940;
        pfVar10[2] = (float)local_938[0];
        pfVar10[3] = (float)local_938[1];
        pfVar10[4] = (float)local_938[2];
        pfVar10[5] = (float)local_938[3];
        pfVar10[6] = (float)local_938[4];
        pfVar10[7] = (float)local_938[5];
        pfVar10[8] = (float)local_938[6];
        pfVar10[9] = (float)local_938[7];
        pfVar10[10] = (float)local_938[8];
        pfVar10[0xb] = (float)local_938[9];
        pfVar10[0xc] = (float)local_938[10];
        pfVar10[0xd] = (float)local_938[0xb];
        pfVar10[0xe] = (float)local_938[0xc];
        pfVar10[0xf] = (float)local_8d0;
        FUN_144906bb6(pfVar10,&local_948);
        pdVar17[6] = local_938[4];
        pdVar17[7] = local_938[5];
        pdVar17[4] = local_938[2];
        pdVar17[5] = local_938[3];
        pdVar17[2] = local_938[0];
        pdVar17[3] = local_938[1];
        *(undefined4 *)pdVar17 = (undefined4)local_948;
        *(undefined4 *)((longlong)pdVar17 + 4) = local_948._4_4_;
        *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_940;
        *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_940._4_4_;
        lVar9 = lVar9 + 1;
        pdVar17 = pdVar17 + 8;
        pfVar10 = pfVar10 + 0x10;
        pdVar18 = pdVar18 + 0x10;
      } while (lVar9 < *param_13);
    }
    dVar28 = local_fe8 + local_fb8;
    dVar27 = (double)local_1010 + local_fb0;
    dVar3 = local_ff8 + local_ff0;
LAB_14719e5d9:
    fVar24 = (float)dVar28;
    fVar26 = (float)dVar27;
    fVar25 = (float)dVar3;
    *param_9 = fVar25;
    param_9[1] = fVar26;
    param_9[2] = fVar24;
    iVar22 = local_1004;
    iVar7 = local_1008;
  }
  lVar9 = *(longlong *)(param_6 + 0x28);
  dVar28 = *(double *)(lVar9 + 0x90);
  dVar3 = *(double *)(lVar9 + 0x50);
  dVar27 = *(double *)(lVar9 + 0x70);
  dVar4 = dVar28 * dVar28 + dVar3 * dVar3 + dVar27 * dVar27;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      dVar28 = dVar28 * dVar4;
      dVar27 = dVar27 * dVar4;
      dVar3 = dVar3 * dVar4;
    }
    else {
      dVar3 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar27 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      dVar28 = DAT_14c8464f0;
    }
  }
  *param_10 = (float)dVar3;
  param_10[1] = (float)dVar27;
  param_10[2] = (float)dVar28;
  param_10[3] = -(fVar24 * (float)dVar28 + fVar25 * (float)dVar3 + fVar26 * (float)dVar27);
  auStack_118 = *(undefined1 (*) [16])(local_1000 + 0x1030);
  dStack_108 = *(double *)(local_1000 + 0x1040);
  local_628 = 0;
  local_618 = 0x600000000;
  local_508 = 0;
  local_4f8 = 0x800000000;
  local_4e8 = 0x3f490fdb;
  fStack_4e4 = 1.0;
  local_4e0 = 0x3f800000;
  local_4dc = 0;
  local_748 = local_f98;
  uStack_740 = dStack_f90;
  dStack_738 = local_f88;
  uStack_730 = uStack_f80;
  uStack_728 = local_f78;
  dStack_720 = (double)uStack_f70;
  local_718 = local_f68;
  dStack_700 = (double)param_9[2] - dStack_108;
  local_708 = (double)param_9[1] - *(double *)(local_1000 + 0x1038);
  dStack_710 = (double)*param_9 - *(double *)*(undefined1 (*) [16])(local_1000 + 0x1030);
  uStack_6f0 = *param_14;
  local_6f8 = 0.0;
  local_178[0] = 1.0;
  local_178[1] = 0.0;
  local_178[2] = 0.0;
  local_178[3] = 0.0;
  local_178[4] = 0.0;
  local_178[5] = 1.0;
  local_178[6] = 0.0;
  local_178[7] = 0.0;
  local_178[8] = 0.0;
  local_178[9] = 0.0;
  local_178[10] = 1.0;
  local_178[0xb] = 0.0;
  local_100 = 0x3ff0000000000000;
  FUN_144b10ee8(&local_448,param_11);
  ppfVar14 = &local_1f8;
  FUN_1447fea8d(ppfVar14,local_178,&local_448);
  FUN_144920f26(&local_6e8,ppfVar14,1);
  local_4e8 = 0x3f490fdb;
  fStack_4e4 = *(float *)(DAT_14c9df1c8 + 4);
  if (fStack_4e4 <= 0.1) {
    fStack_4e4 = 0.1;
  }
  local_4e0 = 0x3f800000;
  local_4dc = param_5 != 0;
  if ((int)uStack_240 != local_214) {
    local_7c0[0] = local_238;
    local_7c8 = (float *)0x100000000;
    local_7c0[1] = (undefined1 *)0xffffffff;
    local_7b0[0] = (double)((ulonglong)local_7b0[0] & 0xffffffff00000000);
    if (local_220 != 0) {
      FUN_1449c0562(&local_7c8);
    }
    lVar9 = local_fd0;
    local_430 = local_7c0[1];
    dStack_428 = local_7b0[0];
    uStack_440 = (double)local_7c8;
    puStack_438 = local_7c0[0];
    local_448 = &local_248;
    uVar13 = 0x40;
    if ((int)*(uint *)(DAT_14c9e27d8 + 4) < 0x40) {
      uVar13 = *(uint *)(DAT_14c9e27d8 + 4);
    }
    uVar12 = 2;
    if (2 < (int)uVar13) {
      uVar12 = uVar13;
    }
    *param_15 = uVar12;
    uVar13 = uVar12 * *(int *)param_14 * *(int *)((longlong)param_14 + 4);
    if ((param_5 | 2) == 3) {
      uVar13 = uVar13 * 6;
    }
    local_1078 = &local_8c8;
    local_8c8 = (float *)((ulonglong)local_8c8 & 0xffffffffffffff00);
    local_848[0] = L"HeterogeneousVolume.VolumetricShadowLinkedListBuffer";
    uVar12 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar12 = DAT_14ca84e48;
    }
    local_7c0[0] = (undefined1 *)CONCAT44(local_7c0[0]._4_4_,0x10109);
    local_7c0[1] = (undefined1 *)0x0;
    uVar8 = DAT_14ca84e48;
    if (uVar13 < DAT_14ca84e48) {
      uVar8 = uVar13;
    }
    local_7c8 = (float *)CONCAT44(uVar8 + (uVar8 == 0),uVar12 + (uVar12 == 0));
    local_fe8 = (double)(local_fd0 + 0x188);
    local_ff8 = (double)(local_fd0 + 0x70);
    pfVar10 = (float *)FUN_144738de6();
    *param_17 = pfVar10;
    pfVar10 = local_248 + (longlong)local_430._4_4_ * 6;
    uVar12 = *param_15;
    dVar28 = *param_14;
    local_1010 = (float *)CONCAT44(local_1010._4_4_,*param_13);
    pdVar18 = (double *)&local_748;
    pdVar17 = local_cb8;
    for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar17 = *pdVar18;
      pdVar18 = pdVar18 + 1;
      pdVar17 = pdVar17 + 1;
    }
    local_c68 = (undefined4)local_6f8;
    uStack_c64 = local_6f8._4_4_;
    uStack_c60 = (undefined4)uStack_6f0;
    uStack_c5c = uStack_6f0._4_4_;
    FUN_144aab0c2(local_c58,&local_6e8);
    local_a58 = (undefined5)CONCAT44(fStack_4e4,local_4e8);
    uStack_a53 = fStack_4e4._1_3_;
    uStack_a50 = (undefined5)(CONCAT17(local_4dc,CONCAT43(local_4e0,fStack_4e4._1_3_)) >> 0x18);
    local_1020 = param_17;
    local_1028 = param_16;
    local_1030 = param_12;
    local_1040 = 0;
    local_1058 = local_3c8;
    local_1060 = param_11;
    local_1068 = (float *)CONCAT44(local_1068._4_4_,local_1010._0_4_);
    local_1070 = param_9;
    local_1078 = (float **)local_cb8;
    local_1050 = dVar28;
    local_1048 = uVar12;
    local_1038 = pfVar10;
    FUN_142c9b998(lVar9,local_fc8,local_fc0,local_1000);
    ppfVar14 = (float **)(ulonglong)uVar12;
    while( true ) {
      local_430 = CONCAT44(local_430._4_4_,(uint)local_430 & ~uStack_440._4_4_);
      FUN_1449c0562(&uStack_440);
      dVar28 = local_fe8;
      if (((local_430._4_4_ == local_220) && (puStack_438 == local_238)) &&
         (iVar22 = local_1004, iVar7 = local_1008, local_448 == &local_248)) break;
      local_8c8 = (float *)((ulonglong)local_8c8 & 0xffffffffffffff00);
      local_848[0] = L"HeterogeneousVolume.VolumetricShadowLinkedListBuffer1";
      local_7c0[0] = (undefined1 *)CONCAT44(local_7c0[0]._4_4_,0x10109);
      uVar12 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar12 = DAT_14ca84e48;
      }
      local_7c0[1] = (undefined1 *)0x0;
      uVar8 = DAT_14ca84e48;
      if (uVar13 < DAT_14ca84e48) {
        uVar8 = uVar13;
      }
      local_7c8 = (float *)CONCAT44(uVar8 + (uVar8 == 0),uVar12 + (uVar12 == 0));
      local_1078 = &local_8c8;
      local_1010 = (float *)FUN_144738de6(local_fe8,local_ff8,local_848,&local_7c8);
      local_8c8 = local_1010;
      lVar9 = (longlong)local_430._4_4_;
      pfVar10 = *local_448;
      uVar12 = *param_15;
      dVar3 = *param_14;
      iVar22 = *param_13;
      puVar16 = &local_748;
      puVar20 = local_f58 + 6;
      for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar20 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar20 = puVar20 + 1;
      }
      local_ed8 = (undefined4)local_6f8;
      uStack_ed4 = local_6f8._4_4_;
      uStack_ed0 = (undefined4)uStack_6f0;
      uStack_ecc = uStack_6f0._4_4_;
      FUN_144aab0c2(local_ec8,&local_6e8);
      lVar6 = local_fd0;
      lVar11 = local_1000;
      local_cc8 = (undefined5)CONCAT44(fStack_4e4,local_4e8);
      uStack_cc3 = fStack_4e4._1_3_;
      uStack_cc0 = (undefined5)(CONCAT17(local_4dc,CONCAT43(local_4e0,fStack_4e4._1_3_)) >> 0x18);
      local_1020 = &local_8c8;
      local_1028 = param_16;
      local_1030 = param_12;
      local_1040 = 0;
      local_1058 = local_3c8;
      local_1060 = param_11;
      local_1068 = (float *)CONCAT44(local_1068._4_4_,iVar22);
      local_1070 = param_9;
      local_1078 = (float **)(local_f58 + 6);
      local_1050 = dVar3;
      local_1048 = uVar12;
      local_1038 = pfVar10 + lVar9 * 6;
      FUN_142c9b998(local_fd0,local_fc8,local_fc0,local_1000);
      local_948 = (double)((ulonglong)local_948 & 0xffffffffffffff00);
      local_848[0] = L"HeterogeneousVolume.VolumetricShadowLinkedListBuffer2";
      local_7c0[0] = (undefined1 *)CONCAT44(local_7c0[0]._4_4_,0x10109);
      uVar12 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar12 = DAT_14ca84e48;
      }
      local_7c0[1] = (undefined1 *)0x0;
      uVar8 = DAT_14ca84e48;
      if (uVar13 < DAT_14ca84e48) {
        uVar8 = uVar13;
      }
      local_7c8 = (float *)CONCAT44(uVar8 + (uVar8 == 0),uVar12 + (uVar12 == 0));
      local_1078 = (float **)&local_948;
      local_7c8 = (float *)FUN_144738de6(dVar28,local_ff8,local_848,&local_7c8);
      local_1068 = *param_17;
      local_1078 = (float **)*param_14;
      local_fa0 = param_12[2];
      local_fa8 = *(undefined8 *)param_12;
      local_1060 = local_1010;
      local_1070 = (float *)CONCAT44(local_1070._4_4_,*param_15);
      local_1058 = (double *)&local_7c8;
      FUN_142cb8056(lVar6,lVar11,&local_fa8,param_5);
      *param_17 = local_7c8;
      ppfVar14 = param_17;
    }
  }
  if (local_508 != 0) {
    FUN_1400020a8();
  }
  if (local_628 != 0) {
    FUN_1400020a8();
  }
LAB_14719eeeb:
  local_200 = 0;
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  FUN_1471b34f6(&local_248);
  if ((local_f0 ^ (ulonglong)auStack_1098) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)ppfVar14 >> 8),iVar22 != iVar7) & 0xffffffff;
}



// FUNCTION 14719f230 FUN_14719f230 body=54 status=ok
// SIG undefined FUN_14719f230(void)

void FUN_14719f230(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14719f26e FUN_14719f26e body=89 status=ok
// SIG undefined FUN_14719f26e(void)

undefined8 FUN_14719f26e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  FUN_1471af2ec();
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                &DAT_14c9e1150,0);
  return uVar1;
}



// FUNCTION 14719f2c8 FUN_14719f2c8 body=76 status=ok
// SIG undefined FUN_14719f2c8(void)

void * FUN_14719f2c8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14719f314 FUN_14719f314 body=42 status=ok
// SIG undefined FUN_14719f314(void)

void FUN_14719f314(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719f382 FUN_14719f382 body=96 status=ok
// SIG undefined FUN_14719f382(void)

undefined8 FUN_14719f382(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4736a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e11d8,1);
  return uVar3;
}



// FUNCTION 14719f3e2 FUN_14719f3e2 body=52 status=ok
// SIG undefined FUN_14719f3e2(void)

void FUN_14719f3e2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719f416 FUN_14719f416 body=177 status=ok
// SIG undefined FUN_14719f416(void)

void FUN_14719f416(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f4736a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e11d8,param_4);
  local_78 = &DAT_14c9e11d8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471b3dfe(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719f4c8 FUN_14719f4c8 body=42 status=ok
// SIG undefined FUN_14719f4c8(void)

void FUN_14719f4c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719f536 FUN_14719f536 body=96 status=ok
// SIG undefined FUN_14719f536(void)

undefined8 FUN_14719f536(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f690cc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e1260,1);
  return uVar3;
}



// FUNCTION 14719f596 FUN_14719f596 body=52 status=ok
// SIG undefined FUN_14719f596(void)

void FUN_14719f596(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719f5ca FUN_14719f5ca body=42 status=ok
// SIG undefined FUN_14719f5ca(void)

void FUN_14719f5ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719f5f8 FUN_14719f5f8 body=96 status=ok
// SIG undefined FUN_14719f5f8(void)

undefined8 FUN_14719f5f8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f71e4e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e12e8,1);
  return uVar3;
}



// FUNCTION 14719f658 FUN_14719f658 body=52 status=ok
// SIG undefined FUN_14719f658(void)

void FUN_14719f658(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719f68c FUN_14719f68c body=177 status=ok
// SIG undefined FUN_14719f68c(void)

void FUN_14719f68c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f690cc();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e1260,param_4);
  local_78 = &DAT_14c9e1260;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471b4274(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14719f73e FUN_14719f73e body=42 status=ok
// SIG undefined FUN_14719f73e(void)

void FUN_14719f73e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719f7ac FUN_14719f7ac body=96 status=ok
// SIG undefined FUN_14719f7ac(void)

undefined8 FUN_14719f7ac(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e53886();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e1370,1);
  return uVar3;
}



// FUNCTION 14719f80c FUN_14719f80c body=52 status=ok
// SIG undefined FUN_14719f80c(void)

void FUN_14719f80c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719f840 FUN_14719f840 body=42 status=ok
// SIG undefined FUN_14719f840(void)

void FUN_14719f840(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14719f8ae FUN_14719f8ae body=96 status=ok
// SIG undefined FUN_14719f8ae(void)

undefined8 FUN_14719f8ae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e840a4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e13f8,1);
  return uVar3;
}



// FUNCTION 14719f90e FUN_14719f90e body=52 status=ok
// SIG undefined FUN_14719f90e(void)

void FUN_14719f90e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14719f95a FUN_14719f95a body=138 status=ok
// SIG undefined FUN_14719f95a(void)

code * FUN_14719f95a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurrGPUMinVoxelSize";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719f9e4;
}



// FUNCTION 14719f9e4 FUN_14719f9e4 body=138 status=ok
// SIG undefined FUN_14719f9e4(void)

code * FUN_14719f9e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodeDescBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedVirtualVoxelNodeDesc>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fa6e;
}



// FUNCTION 14719fa6e FUN_14719fa6e body=138 status=ok
// SIG undefined FUN_14719fa6e(void)

code * FUN_14719fa6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ce5ae;
}



// FUNCTION 14719faf8 FUN_14719faf8 body=138 status=ok
// SIG undefined FUN_14719faf8(void)

code * FUN_14719faf8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AllocatedPageCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fb82;
}



// FUNCTION 14719fb82 FUN_14719fb82 body=138 status=ok
// SIG undefined FUN_14719fb82(void)

code * FUN_14719fb82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AllocationFeedbackEnable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fc0c;
}



// FUNCTION 14719fc0c FUN_14719fc0c body=138 status=ok
// SIG undefined FUN_14719fc0c(void)

code * FUN_14719fc0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOffsetStereoCorrection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fc96;
}



// FUNCTION 14719fc96 FUN_14719fc96 body=138 status=ok
// SIG undefined FUN_14719fc96(void)

code * FUN_14719fc96(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fd20;
}



// FUNCTION 14719fd20 FUN_14719fd20 body=138 status=ok
// SIG undefined FUN_14719fd20(void)

code * FUN_14719fd20(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Raytracing_SkyOcclusionThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x74000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fdaa;
}



// FUNCTION 14719fdaa FUN_14719fdaa body=138 status=ok
// SIG undefined FUN_14719fdaa(void)

code * FUN_14719fdaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Raytracing_ShadowOcclusionThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719fe34;
}



// FUNCTION 14719fe34 FUN_14719fe34 body=138 status=ok
// SIG undefined FUN_14719fe34(void)

code * FUN_14719fe34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairCoveragePixelRadiusAtDepth1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719febe;
}



// FUNCTION 14719febe FUN_14719febe body=138 status=ok
// SIG undefined FUN_14719febe(void)

code * FUN_14719febe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SteppingScale_Raytracing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719ff48;
}



// FUNCTION 14719ff48 FUN_14719ff48 body=138 status=ok
// SIG undefined FUN_14719ff48(void)

code * FUN_14719ff48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SteppingScale_Environment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14719ffd2;
}



// FUNCTION 14719ffd2 FUN_14719ffd2 body=138 status=ok
// SIG undefined FUN_14719ffd2(void)

code * FUN_14719ffd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SteppingScale_Transmittance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a32376;
}



// FUNCTION 1471a005c FUN_1471a005c body=138 status=ok
// SIG undefined FUN_1471a005c(void)

code * FUN_1471a005c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBiasScale_Environment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a00e6;
}



// FUNCTION 1471a00e6 FUN_1471a00e6 body=138 status=ok
// SIG undefined FUN_1471a00e6(void)

code * FUN_1471a00e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBiasScale_Transmittance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0170;
}



// FUNCTION 1471a0170 FUN_1471a0170 body=138 status=ok
// SIG undefined FUN_1471a0170(void)

code * FUN_1471a0170(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBiasScale_Shadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a01fa;
}



// FUNCTION 1471a01fa FUN_1471a01fa body=138 status=ok
// SIG undefined FUN_1471a01fa(void)

code * FUN_1471a01fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityScale_Raytracing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a322ec;
}



// FUNCTION 1471a0284 FUN_1471a0284 body=138 status=ok
// SIG undefined FUN_1471a0284(void)

code * FUN_1471a0284(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityScale_Transmittance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a030e;
}



// FUNCTION 1471a030e FUN_1471a030e body=138 status=ok
// SIG undefined FUN_1471a030e(void)

code * FUN_1471a030e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityScale_Shadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0398;
}



// FUNCTION 1471a0398 FUN_1471a0398 body=138 status=ok
// SIG undefined FUN_1471a0398(void)

code * FUN_1471a0398(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DensityScale_AO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ce636;
}



// FUNCTION 1471a0422 FUN_1471a0422 body=138 status=ok
// SIG undefined FUN_1471a0422(void)

code * FUN_1471a0422(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"JitterMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000000ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a04ac;
}



// FUNCTION 1471a04ac FUN_1471a04ac body=138 status=ok
// SIG undefined FUN_1471a04ac(void)

code * FUN_1471a04ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodeDescCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0536;
}



// FUNCTION 1471a0536 FUN_1471a0536 body=138 status=ok
// SIG undefined FUN_1471a0536(void)

code * FUN_1471a0536(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a05c0;
}



// FUNCTION 1471a05c0 FUN_1471a05c0 body=138 status=ok
// SIG undefined FUN_1471a05c0(void)

code * FUN_1471a05c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a064a;
}



// FUNCTION 1471a064a FUN_1471a064a body=138 status=ok
// SIG undefined FUN_1471a064a(void)

code * FUN_1471a064a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolutionLog2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a06d4;
}



// FUNCTION 1471a06d4 FUN_1471a06d4 body=138 status=ok
// SIG undefined FUN_1471a06d4(void)

code * FUN_1471a06d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a075e;
}



// FUNCTION 1471a075e FUN_1471a075e body=138 status=ok
// SIG undefined FUN_1471a075e(void)

code * FUN_1471a075e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a07e8;
}



// FUNCTION 1471a07e8 FUN_1471a07e8 body=138 status=ok
// SIG undefined FUN_1471a07e8(void)

code * FUN_1471a07e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTextureResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0872;
}



// FUNCTION 1471a0872 FUN_1471a0872 body=138 status=ok
// SIG undefined FUN_1471a0872(void)

code * FUN_1471a0872(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPUMinVoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a08fc;
}



// FUNCTION 1471a08fc FUN_1471a08fc body=132 status=ok
// SIG undefined FUN_1471a08fc(void)

undefined1 * FUN_1471a08fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCountResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145a322e8;
}



// FUNCTION 1471a0980 FUN_1471a0980 body=138 status=ok
// SIG undefined FUN_1471a0980(void)

code * FUN_1471a0980(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x158000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2b468;
}



// FUNCTION 1471a0a0a FUN_1471a0a0a body=138 status=ok
// SIG undefined FUN_1471a0a0a(void)

code * FUN_1471a0a0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMarkCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x144000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2b3e0;
}



// FUNCTION 1471a0a94 FUN_1471a0a94 body=138 status=ok
// SIG undefined FUN_1471a0a94(void)

code * FUN_1471a0a94(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000000ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ce74c;
}



// FUNCTION 1471a0b22 FUN_1471a0b22 body=138 status=ok
// SIG undefined FUN_1471a0b22(void)

code * FUN_1471a0b22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupVoxelAlignedAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0bac;
}



// FUNCTION 1471a0bac FUN_1471a0bac body=138 status=ok
// SIG undefined FUN_1471a0bac(void)

code * FUN_1471a0bac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterAABBsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ce8f0;
}



// FUNCTION 1471a0c36 FUN_1471a0c36 body=138 status=ok
// SIG undefined FUN_1471a0c36(void)

code * FUN_1471a0c36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupBoundCPU_TranslatedWorldMinAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000121;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0cc0;
}



// FUNCTION 1471a0cc0 FUN_1471a0cc0 body=138 status=ok
// SIG undefined FUN_1471a0cc0(void)

code * FUN_1471a0cc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseMacroGroupBoundCPU";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000120;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0d4a;
}



// FUNCTION 1471a0d4a FUN_1471a0d4a body=138 status=ok
// SIG undefined FUN_1471a0d4a(void)

code * FUN_1471a0d4a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000011f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f46058;
}



// FUNCTION 1471a0dd4 FUN_1471a0dd4 body=138 status=ok
// SIG undefined FUN_1471a0dd4(void)

code * FUN_1471a0dd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0e5e;
}



// FUNCTION 1471a0e5e FUN_1471a0e5e body=132 status=ok
// SIG undefined FUN_1471a0e5e(void)

undefined1 * FUN_1471a0e5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceRegisteredIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a0ee2;
}



// FUNCTION 1471a0ee6 FUN_1471a0ee6 body=138 status=ok
// SIG undefined FUN_1471a0ee6(void)

code * FUN_1471a0ee6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageIndexResolutionAndOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34800000104;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0f70;
}



// FUNCTION 1471a0f70 FUN_1471a0f70 body=138 status=ok
// SIG undefined FUN_1471a0f70(void)

code * FUN_1471a0f70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupVoxelAlignedAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000000103;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0ffa;
}



// FUNCTION 1471a0ffa FUN_1471a0ffa body=138 status=ok
// SIG undefined FUN_1471a0ffa(void)

code * FUN_1471a0ffa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33800000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cea00;
}



// FUNCTION 1471a1084 FUN_1471a1084 body=138 status=ok
// SIG undefined FUN_1471a1084(void)

code * FUN_1471a1084(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUVoxelWorldSize";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32800000100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a110e;
}



// FUNCTION 1471a110e FUN_1471a110e body=138 status=ok
// SIG undefined FUN_1471a110e(void)

code * FUN_1471a110e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_bUseCPUData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x320000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1198;
}



// FUNCTION 1471a1198 FUN_1471a1198 body=138 status=ok
// SIG undefined FUN_1471a1198(void)

code * FUN_1471a1198(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1222;
}



// FUNCTION 1471a1222 FUN_1471a1222 body=138 status=ok
// SIG undefined FUN_1471a1222(void)

code * FUN_1471a1222(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_TranslatedWorldMaxAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x120000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f464e0;
}



// FUNCTION 1471a12ac FUN_1471a12ac body=138 status=ok
// SIG undefined FUN_1471a12ac(void)

code * FUN_1471a12ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bDoesMacroGroupSupportVoxelization";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1336;
}



// FUNCTION 1471a1336 FUN_1471a1336 body=138 status=ok
// SIG undefined FUN_1471a1336(void)

code * FUN_1471a1336(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f46456;
}



// FUNCTION 1471a13c0 FUN_1471a13c0 body=138 status=ok
// SIG undefined FUN_1471a13c0(void)

code * FUN_1471a13c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a144a;
}



// FUNCTION 1471a144a FUN_1471a144a body=138 status=ok
// SIG undefined FUN_1471a144a(void)

code * FUN_1471a144a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TotalPageIndexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4656a;
}



// FUNCTION 1471a14d4 FUN_1471a14d4 body=138 status=ok
// SIG undefined FUN_1471a14d4(void)

code * FUN_1471a14d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPUVoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a155e;
}



// FUNCTION 1471a155e FUN_1471a155e body=132 status=ok
// SIG undefined FUN_1471a155e(void)

undefined1 * FUN_1471a155e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPUPageWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a15e2;
}



// FUNCTION 1471a15e6 FUN_1471a15e6 body=138 status=ok
// SIG undefined FUN_1471a15e6(void)

code * FUN_1471a15e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageToPageIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000014b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1670;
}



// FUNCTION 1471a1670 FUN_1471a1670 body=138 status=ok
// SIG undefined FUN_1471a1670(void)

code * FUN_1471a1670(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a16fa;
}



// FUNCTION 1471a16fa FUN_1471a16fa body=138 status=ok
// SIG undefined FUN_1471a16fa(void)

code * FUN_1471a16fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageIndexGlobalCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000149;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f03314;
}



// FUNCTION 1471a1784 FUN_1471a1784 body=138 status=ok
// SIG undefined FUN_1471a1784(void)

code * FUN_1471a1784(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectBufferArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000147;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a180e;
}



// FUNCTION 1471a180e FUN_1471a180e body=138 status=ok
// SIG undefined FUN_1471a180e(void)

code * FUN_1471a180e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000146;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1898;
}



// FUNCTION 1471a1898 FUN_1471a1898 body=138 status=ok
// SIG undefined FUN_1471a1898(void)

code * FUN_1471a1898(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000145;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0339c;
}



// FUNCTION 1471a1922 FUN_1471a1922 body=138 status=ok
// SIG undefined FUN_1471a1922(void)

code * FUN_1471a1922(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f03290;
}



// FUNCTION 1471a19b0 FUN_1471a19b0 body=138 status=ok
// SIG undefined FUN_1471a19b0(void)

code * FUN_1471a19b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexResolutionAndOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1a3a;
}



// FUNCTION 1471a1a3a FUN_1471a1a3a body=138 status=ok
// SIG undefined FUN_1471a1a3a(void)

code * FUN_1471a1a3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupVoxelSizeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000016c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e837b2;
}



// FUNCTION 1471a1ac4 FUN_1471a1ac4 body=138 status=ok
// SIG undefined FUN_1471a1ac4(void)

code * FUN_1471a1ac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseCPUVoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1b4e;
}



// FUNCTION 1471a1b4e FUN_1471a1b4e body=138 status=ok
// SIG undefined FUN_1471a1b4e(void)

code * FUN_1471a1b4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_VoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000168;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1bd8;
}



// FUNCTION 1471a1bd8 FUN_1471a1bd8 body=138 status=ok
// SIG undefined FUN_1471a1bd8(void)

code * FUN_1471a1bd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000167;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1c62;
}



// FUNCTION 1471a1c62 FUN_1471a1c62 body=138 status=ok
// SIG undefined FUN_1471a1c62(void)

code * FUN_1471a1c62(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000166;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8383c;
}



// FUNCTION 1471a1cec FUN_1471a1cec body=138 status=ok
// SIG undefined FUN_1471a1cec(void)

code * FUN_1471a1cec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_PageIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1d76;
}



// FUNCTION 1471a1d76 FUN_1471a1d76 body=132 status=ok
// SIG undefined FUN_1471a1d76(void)

undefined1 * FUN_1471a1d76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_TranslatedWorldMinAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x163;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e837ae;
}



// FUNCTION 1471a1dfa FUN_1471a1dfa body=138 status=ok
// SIG undefined FUN_1471a1dfa(void)

code * FUN_1471a1dfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000184;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2ba5c;
}



// FUNCTION 1471a1e84 FUN_1471a1e84 body=132 status=ok
// SIG undefined FUN_1471a1e84(void)

undefined1 * FUN_1471a1e84(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a1f08;
}



// FUNCTION 1471a1f10 FUN_1471a1f10 body=138 status=ok
// SIG undefined FUN_1471a1f10(void)

code * FUN_1471a1f10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NextGPUMinVoxelWorldSize";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1f9a;
}



// FUNCTION 1471a1f9a FUN_1471a1f9a body=138 status=ok
// SIG undefined FUN_1471a1f9a(void)

code * FUN_1471a1f9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurrGPUMinVoxelWorldSize";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0398a;
}



// FUNCTION 1471a2024 FUN_1471a2024 body=138 status=ok
// SIG undefined FUN_1471a2024(void)

code * FUN_1471a2024(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AdaptiveCorrectionThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a20ae;
}



// FUNCTION 1471a20ae FUN_1471a20ae body=138 status=ok
// SIG undefined FUN_1471a20ae(void)

code * FUN_1471a20ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CPUMinVoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0387e;
}



// FUNCTION 1471a213c FUN_1471a213c body=138 status=ok
// SIG undefined FUN_1471a213c(void)

code * FUN_1471a213c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27800000422;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2c050;
}



// FUNCTION 1471a21c6 FUN_1471a21c6 body=138 status=ok
// SIG undefined FUN_1471a21c6(void)

code * FUN_1471a21c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRasterCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd40000041e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2c0da;
}



// FUNCTION 1471a2254 FUN_1471a2254 body=138 status=ok
// SIG undefined FUN_1471a2254(void)

code * FUN_1471a2254(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutDensityTexture2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000488;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f46a4c;
}



// FUNCTION 1471a22de FUN_1471a22de body=138 status=ok
// SIG undefined FUN_1471a22de(void)

code * FUN_1471a22de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InDensityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000486;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cefea;
}



// FUNCTION 1471a2368 FUN_1471a2368 body=138 status=ok
// SIG undefined FUN_1471a2368(void)

code * FUN_1471a2368(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000483;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a23f2;
}



// FUNCTION 1471a23f2 FUN_1471a23f2 body=138 status=ok
// SIG undefined FUN_1471a23f2(void)

code * FUN_1471a23f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageToPageIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000482;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f46ad6;
}



// FUNCTION 1471a247c FUN_1471a247c body=138 status=ok
// SIG undefined FUN_1471a247c(void)

code * FUN_1471a247c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetMip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x840000047f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f46b60;
}



// FUNCTION 1471a2506 FUN_1471a2506 body=138 status=ok
// SIG undefined FUN_1471a2506(void)

code * FUN_1471a2506(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c0000047d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a2590;
}



// FUNCTION 1471a2590 FUN_1471a2590 body=138 status=ok
// SIG undefined FUN_1471a2590(void)

code * FUN_1471a2590(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCountResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000047c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a261a;
}



// FUNCTION 1471a261a FUN_1471a261a body=138 status=ok
// SIG undefined FUN_1471a261a(void)

code * FUN_1471a261a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AllocatedPageCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000047b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cf072;
}



// FUNCTION 1471a26a8 FUN_1471a26a8 body=138 status=ok
// SIG undefined FUN_1471a26a8(void)

code * FUN_1471a26a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a2732;
}



// FUNCTION 1471a2732 FUN_1471a2732 body=138 status=ok
// SIG undefined FUN_1471a2732(void)

code * FUN_1471a2732(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TargetMipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000004a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4899e;
}



// FUNCTION 1471a27bc FUN_1471a27bc body=29 status=ok
// SIG undefined FUN_1471a27bc(void)

undefined8 FUN_1471a27bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a27da FUN_1471a27da body=231 status=ok
// SIG undefined FUN_1471a27da(void)

undefined8 *
FUN_1471a27da(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_1414708b2();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9dc788;
  puVar6[4] = DAT_14c9dc788;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9dc740;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2355f0;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1471a28c2 FUN_1471a28c2 body=38 status=ok
// SIG undefined FUN_1471a28c2(void)

undefined8 FUN_1471a28c2(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a28e8 FUN_1471a28e8 body=177 status=ok
// SIG undefined FUN_1471a28e8(void)

void FUN_1471a28e8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f46350();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e0070,param_4);
  local_78 = &DAT_14c9e0070;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a2d32(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a299a FUN_1471a299a body=177 status=ok
// SIG undefined FUN_1471a299a(void)

void FUN_1471a299a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f45d5a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9dffe8,param_4);
  local_78 = &DAT_14c9dffe8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a3112(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a2a4c FUN_1471a2a4c body=177 status=ok
// SIG undefined FUN_1471a2a4c(void)

void FUN_1471a2a4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e835c4();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e0180,param_4);
  local_78 = &DAT_14c9e0180;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a34f2(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a2afe FUN_1471a2afe body=177 status=ok
// SIG undefined FUN_1471a2afe(void)

void FUN_1471a2afe(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f030a6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e00f8,param_4);
  local_78 = &DAT_14c9e00f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a3ec2(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a2bb0 FUN_1471a2bb0 body=177 status=ok
// SIG undefined FUN_1471a2bb0(void)

void FUN_1471a2bb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f2b7ea();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e0208,param_4);
  local_78 = &DAT_14c9e0208;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a412c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a2c62 FUN_1471a2c62 body=177 status=ok
// SIG undefined FUN_1471a2c62(void)

void FUN_1471a2c62(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f03694();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e0318,param_4);
  local_78 = &DAT_14c9e0318;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a450c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a2d14 FUN_1471a2d14 body=29 status=ok
// SIG undefined FUN_1471a2d14(void)

undefined8 FUN_1471a2d14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a2d32 FUN_1471a2d32 body=384 status=ok
// SIG undefined FUN_1471a2d32(void)

void FUN_1471a2d32(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e00b8;
  if (DAT_14c9e00b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e00b8 + 8) = *(int *)(DAT_14c9e00b8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e0070;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a235890;
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



// FUNCTION 1471a2eb4 FUN_1471a2eb4 body=38 status=ok
// SIG undefined FUN_1471a2eb4(void)

undefined8 FUN_1471a2eb4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a2eda FUN_1471a2eda body=163 status=ok
// SIG undefined FUN_1471a2eda(void)

void FUN_1471a2eda(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9ea7a();
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
  FUN_142c9eb62(param_1,param_2);
  return;
}



// FUNCTION 1471a2f7d FUN_1471a2f7d body=374 status=ok
// SIG undefined FUN_1471a2f7d(void)

void FUN_1471a2f7d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a30f4 FUN_1471a30f4 body=29 status=ok
// SIG undefined FUN_1471a30f4(void)

undefined8 FUN_1471a30f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a3112 FUN_1471a3112 body=384 status=ok
// SIG undefined FUN_1471a3112(void)

void FUN_1471a3112(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e0030;
  if (DAT_14c9e0030 != 0) {
    LOCK();
    *(int *)(DAT_14c9e0030 + 8) = *(int *)(DAT_14c9e0030 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9dffe8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2358b0;
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



// FUNCTION 1471a3294 FUN_1471a3294 body=38 status=ok
// SIG undefined FUN_1471a3294(void)

undefined8 FUN_1471a3294(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a32ba FUN_1471a32ba body=163 status=ok
// SIG undefined FUN_1471a32ba(void)

void FUN_1471a32ba(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9ed96();
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
  FUN_142c9ee7e(param_1,param_2);
  return;
}



// FUNCTION 1471a335d FUN_1471a335d body=374 status=ok
// SIG undefined FUN_1471a335d(void)

void FUN_1471a335d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a34d4 FUN_1471a34d4 body=29 status=ok
// SIG undefined FUN_1471a34d4(void)

undefined8 FUN_1471a34d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a34f2 FUN_1471a34f2 body=384 status=ok
// SIG undefined FUN_1471a34f2(void)

void FUN_1471a34f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e01c8;
  if (DAT_14c9e01c8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e01c8 + 8) = *(int *)(DAT_14c9e01c8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e0180;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2358d0;
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



// FUNCTION 1471a3674 FUN_1471a3674 body=38 status=ok
// SIG undefined FUN_1471a3674(void)

undefined8 FUN_1471a3674(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a369a FUN_1471a369a body=163 status=ok
// SIG undefined FUN_1471a369a(void)

void FUN_1471a369a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9f0b2();
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
  FUN_142c9f19a(param_1,param_2);
  return;
}



// FUNCTION 1471a373d FUN_1471a373d body=374 status=ok
// SIG undefined FUN_1471a373d(void)

void FUN_1471a373d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a38b4 FUN_1471a38b4 body=29 status=ok
// SIG undefined FUN_1471a38b4(void)

undefined8 FUN_1471a38b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a38d1 FUN_1471a38d1 body=312 status=ok
// SIG undefined FUN_1471a38d1(void)

void FUN_1471a38d1(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f030a6();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9e00f8,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = param_6;
  local_98 = *param_7;
  local_88 = (longlong *)param_7[2];
  param_7[2] = 0;
  local_78 = (undefined4)param_7[4];
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_70 = (undefined4)param_7[5];
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_68 = (undefined4)param_7[6];
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_60 = (undefined4)param_7[7];
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x3c);
  if (local_98 != 0) {
    *param_7 = 0;
  }
  local_c8 = param_4;
  FUN_145f030a6();
  FUN_1471a3a0a(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a3a0a FUN_1471a3a0a body=258 status=ok
// SIG undefined FUN_1471a3a0a(void)

void FUN_1471a3a0a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1471a3b0c(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 1471a3b0c FUN_1471a3b0c body=229 status=ok
// SIG undefined FUN_1471a3b0c(void)

undefined8 *
FUN_1471a3b0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9e0140;
  if (DAT_14c9e0140 != 0) {
    LOCK();
    *(int *)(DAT_14c9e0140 + 8) = *(int *)(DAT_14c9e0140 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9e00f8;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2358f0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a3bf2 FUN_1471a3bf2 body=88 status=ok
// SIG undefined FUN_1471a3bf2(void)

undefined8 * FUN_1471a3bf2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2358f0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a3c4a FUN_1471a3c4a body=90 status=ok
// SIG undefined FUN_1471a3c4a(void)

void FUN_1471a3c4a(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_1471a3ca4(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1471a3ca4 FUN_1471a3ca4 body=168 status=ok
// SIG undefined FUN_1471a3ca4(void)

void FUN_1471a3ca4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f030a6();
  FUN_142c9f400(param_1,param_2,&DAT_14c9e00f8,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142c9f3af(param_1,param_2);
  return;
}



// FUNCTION 1471a3d4c FUN_1471a3d4c body=374 status=ok
// SIG undefined FUN_1471a3d4c(void)

void FUN_1471a3d4c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a3ec2 FUN_1471a3ec2 body=384 status=ok
// SIG undefined FUN_1471a3ec2(void)

void FUN_1471a3ec2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e0140;
  if (DAT_14c9e0140 != 0) {
    LOCK();
    *(int *)(DAT_14c9e0140 + 8) = *(int *)(DAT_14c9e0140 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e00f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a235910;
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



// FUNCTION 1471a4044 FUN_1471a4044 body=38 status=ok
// SIG undefined FUN_1471a4044(void)

undefined8 FUN_1471a4044(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a406a FUN_1471a406a body=163 status=ok
// SIG undefined FUN_1471a406a(void)

void FUN_1471a406a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9f400();
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
  FUN_142c9f3af(param_1,param_2);
  return;
}



// FUNCTION 1471a410e FUN_1471a410e body=29 status=ok
// SIG undefined FUN_1471a410e(void)

undefined8 FUN_1471a410e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a412c FUN_1471a412c body=384 status=ok
// SIG undefined FUN_1471a412c(void)

void FUN_1471a412c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e0250;
  if (DAT_14c9e0250 != 0) {
    LOCK();
    *(int *)(DAT_14c9e0250 + 8) = *(int *)(DAT_14c9e0250 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e0208;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a235930;
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



// FUNCTION 1471a42ae FUN_1471a42ae body=38 status=ok
// SIG undefined FUN_1471a42ae(void)

undefined8 FUN_1471a42ae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a42d4 FUN_1471a42d4 body=163 status=ok
// SIG undefined FUN_1471a42d4(void)

void FUN_1471a42d4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9f8ac();
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
  FUN_142c9f994(param_1,param_2);
  return;
}



// FUNCTION 1471a4377 FUN_1471a4377 body=374 status=ok
// SIG undefined FUN_1471a4377(void)

void FUN_1471a4377(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a44ee FUN_1471a44ee body=29 status=ok
// SIG undefined FUN_1471a44ee(void)

undefined8 FUN_1471a44ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a450c FUN_1471a450c body=384 status=ok
// SIG undefined FUN_1471a450c(void)

void FUN_1471a450c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e0360;
  if (DAT_14c9e0360 != 0) {
    LOCK();
    *(int *)(DAT_14c9e0360 + 8) = *(int *)(DAT_14c9e0360 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e0318;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a235950;
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



// FUNCTION 1471a468e FUN_1471a468e body=38 status=ok
// SIG undefined FUN_1471a468e(void)

undefined8 FUN_1471a468e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a46b4 FUN_1471a46b4 body=163 status=ok
// SIG undefined FUN_1471a46b4(void)

void FUN_1471a46b4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c9fbc8();
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
  FUN_142c9fcb0(param_1,param_2);
  return;
}



// FUNCTION 1471a4757 FUN_1471a4757 body=374 status=ok
// SIG undefined FUN_1471a4757(void)

void FUN_1471a4757(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a48ce FUN_1471a48ce body=29 status=ok
// SIG undefined FUN_1471a48ce(void)

undefined8 FUN_1471a48ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a48eb FUN_1471a48eb body=309 status=ok
// SIG undefined FUN_1471a48eb(void)

void FUN_1471a48eb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f62f54();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9e0290,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145f62f54();
  FUN_1471a4a22(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a4a22 FUN_1471a4a22 body=258 status=ok
// SIG undefined FUN_1471a4a22(void)

void FUN_1471a4a22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1471a4b24(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 1471a4b24 FUN_1471a4b24 body=229 status=ok
// SIG undefined FUN_1471a4b24(void)

undefined8 *
FUN_1471a4b24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9e02d8;
  if (DAT_14c9e02d8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e02d8 + 8) = *(int *)(DAT_14c9e02d8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9e0290;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a235970;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a4c0a FUN_1471a4c0a body=88 status=ok
// SIG undefined FUN_1471a4c0a(void)

undefined8 * FUN_1471a4c0a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a235970;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a4c62 FUN_1471a4c62 body=90 status=ok
// SIG undefined FUN_1471a4c62(void)

void FUN_1471a4c62(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_1471a4cbc(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1471a4cbc FUN_1471a4cbc body=161 status=ok
// SIG undefined FUN_1471a4cbc(void)

void FUN_1471a4cbc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f62f54();
  FUN_142c9ff16(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142c9fec5(param_1,param_2);
  return;
}



// FUNCTION 1471a4d5d FUN_1471a4d5d body=374 status=ok
// SIG undefined FUN_1471a4d5d(void)

void FUN_1471a4d5d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a4ed3 FUN_1471a4ed3 body=177 status=ok
// SIG undefined FUN_1471a4ed3(void)

void FUN_1471a4ed3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f2bdde();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9e03a0,param_4);
  local_78 = &DAT_14c9e03a0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1471a5592(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a4f86 FUN_1471a4f86 body=29 status=ok
// SIG undefined FUN_1471a4f86(void)

undefined8 FUN_1471a4f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a4fa3 FUN_1471a4fa3 body=309 status=ok
// SIG undefined FUN_1471a4fa3(void)

void FUN_1471a4fa3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f2bdde();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9e03a0,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145f2bdde();
  FUN_1471a50da(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a50da FUN_1471a50da body=258 status=ok
// SIG undefined FUN_1471a50da(void)

void FUN_1471a50da(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1471a51dc(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 1471a51dc FUN_1471a51dc body=229 status=ok
// SIG undefined FUN_1471a51dc(void)

undefined8 *
FUN_1471a51dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9e03e8;
  if (DAT_14c9e03e8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e03e8 + 8) = *(int *)(DAT_14c9e03e8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9e03a0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a235990;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a52c2 FUN_1471a52c2 body=88 status=ok
// SIG undefined FUN_1471a52c2(void)

undefined8 * FUN_1471a52c2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a235990;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a531a FUN_1471a531a body=90 status=ok
// SIG undefined FUN_1471a531a(void)

void FUN_1471a531a(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_1471a5374(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1471a5374 FUN_1471a5374 body=168 status=ok
// SIG undefined FUN_1471a5374(void)

void FUN_1471a5374(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f2bdde();
  FUN_142ca0210(param_1,param_2,&DAT_14c9e03a0,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142ca01bf(param_1,param_2);
  return;
}



// FUNCTION 1471a541c FUN_1471a541c body=374 status=ok
// SIG undefined FUN_1471a541c(void)

void FUN_1471a541c(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471a5592 FUN_1471a5592 body=384 status=ok
// SIG undefined FUN_1471a5592(void)

void FUN_1471a5592(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9e03e8;
  if (DAT_14c9e03e8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e03e8 + 8) = *(int *)(DAT_14c9e03e8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e03a0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2359b0;
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



// FUNCTION 1471a5714 FUN_1471a5714 body=38 status=ok
// SIG undefined FUN_1471a5714(void)

undefined8 FUN_1471a5714(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a573a FUN_1471a573a body=163 status=ok
// SIG undefined FUN_1471a573a(void)

void FUN_1471a573a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142ca0210();
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
  FUN_142ca01bf(param_1,param_2);
  return;
}



// FUNCTION 1471a57de FUN_1471a57de body=29 status=ok
// SIG undefined FUN_1471a57de(void)

undefined8 FUN_1471a57de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471a57fb FUN_1471a57fb body=312 status=ok
// SIG undefined FUN_1471a57fb(void)

void FUN_1471a57fb(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f2b1f6();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9dff60,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = param_6;
  local_98 = *param_7;
  local_88 = (longlong *)param_7[2];
  param_7[2] = 0;
  local_78 = (undefined4)param_7[4];
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_70 = (undefined4)param_7[5];
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_68 = (undefined4)param_7[6];
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_60 = (undefined4)param_7[7];
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x3c);
  if (local_98 != 0) {
    *param_7 = 0;
  }
  local_c8 = param_4;
  FUN_145f2b1f6();
  FUN_1471a5934(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471a5934 FUN_1471a5934 body=258 status=ok
// SIG undefined FUN_1471a5934(void)

void FUN_1471a5934(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1471a5a36(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 1471a5a36 FUN_1471a5a36 body=229 status=ok
// SIG undefined FUN_1471a5a36(void)

undefined8 *
FUN_1471a5a36(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9dffa8;
  if (DAT_14c9dffa8 != 0) {
    LOCK();
    *(int *)(DAT_14c9dffa8 + 8) = *(int *)(DAT_14c9dffa8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9dff60;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2359d0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


