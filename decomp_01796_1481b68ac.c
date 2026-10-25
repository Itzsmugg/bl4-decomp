// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481b68ac FUN_1481b68ac body=89 status=ok
// SIG undefined FUN_1481b68ac(void)

undefined4 FUN_1481b68ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
    }
  }
  return 0;
}



// FUNCTION 1481b6906 FUN_1481b6906 body=357 status=ok
// SIG undefined FUN_1481b6906(void)

void FUN_1481b6906(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1481b6d02(local_40);
  iVar6 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a98dce(&local_78,param_2);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_144a98dce(&local_60,param_2);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_a8,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    do {
      puVar1 = local_d8 + local_d0;
      *local_d8 = 0x3f800000;
      puVar2 = local_c8 + local_c0;
      *local_c8 = 0;
      puVar3 = local_b8 + local_b0;
      *local_b8 = 0x3f800000;
      puVar4 = local_a8 + local_a0;
      *local_a8 = 0x3f800000;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_d8 = puVar1;
      local_c8 = puVar2;
      local_b8 = puVar3;
      local_a8 = puVar4;
    } while (iVar6 < *piVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b6a6c FUN_1481b6a6c body=502 status=ok
// SIG undefined FUN_1481b6a6c(void)

void FUN_1481b6a6c(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  undefined4 *local_198;
  int local_190;
  undefined4 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_88 [72];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1481b6d02(local_40);
  FUN_1448a432c(local_88,param_2);
  iVar6 = 0;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a98dce(&local_b8,param_2);
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  FUN_144a98dce(&local_a0,param_2);
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_144a98dce(&local_d8,param_2);
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_144a98d08(&local_f8,param_2);
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  FUN_144a98dce(&local_118,param_2);
  local_138 = 0;
  local_148 = 0;
  uStack_140 = 0;
  FUN_144a98dce(&local_148,param_2);
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0;
  FUN_144a98dce(&local_130,param_2);
  local_168 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_144a98dce(&local_178,param_2);
  local_150 = 0;
  local_160 = 0;
  uStack_158 = 0;
  FUN_144a98dce(&local_160,param_2);
  FUN_144a76c20(&local_1b8,param_2);
  FUN_144a76c20(&local_1a8,param_2);
  FUN_144a76c20(&local_198,param_2);
  FUN_144a76c20(&local_188,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    do {
      puVar1 = local_1b8 + local_1b0;
      *local_1b8 = 0x3f800000;
      puVar2 = local_1a8 + local_1a0;
      *local_1a8 = 0;
      puVar3 = local_198 + local_190;
      *local_198 = 0x3f800000;
      puVar4 = local_188 + local_180;
      *local_188 = 0x3f800000;
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_1b8 = puVar1;
      local_1a8 = puVar2;
      local_198 = puVar3;
      local_188 = puVar4;
    } while (iVar6 < *piVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b6c64 FUN_1481b6c64 body=157 status=ok
// SIG undefined FUN_1481b6c64(void)

void FUN_1481b6c64(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1481b6d02(local_20);
  FUN_144a76cd4(&local_30,param_2);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar2 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 0x10);
      iVar2 = iVar2 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar2 < *piVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b6d02 FUN_1481b6d02 body=148 status=ok
// SIG undefined FUN_1481b6d02(void)

void FUN_1481b6d02(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1481b6da6 FUN_1481b6da6 body=363 status=ok
// SIG undefined FUN_1481b6da6(void)

void FUN_1481b6da6(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  float local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xe8) < 1) {
    if (*(int *)(param_1 + 0x168) < 1) {
      *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
      fVar2 = 1.0;
      goto LAB_1481b6ec5;
    }
    *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
    fVar2 = 3.4028235e+38;
LAB_1481b6e34:
    FUN_147a4117c(param_1 + 0xf0,local_5c);
    fVar1 = local_58;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
    FUN_147a4117c(param_1 + 0x70,local_5c);
    fVar1 = local_58;
    if (3.4028235e+38 <= local_58) {
      fVar1 = 3.4028235e+38;
    }
    *(float *)(param_1 + 0x48) = fVar1;
    fVar2 = fVar1;
    if (0 < *(int *)(param_1 + 0x168)) goto LAB_1481b6e34;
  }
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0xff7fffff;
  if (*(int *)(param_1 + 0xe8) < 1) {
    fVar2 = -3.4028235e+38;
  }
  else {
    FUN_1413dd74e(param_1 + 0x70,local_5c);
    fVar2 = local_58;
  }
  if (fVar2 <= -3.4028235e+38) {
    fVar2 = -3.4028235e+38;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar1 = fVar2;
  if (0 < *(int *)(param_1 + 0x168)) {
    FUN_1413dd74e(param_1 + 0xf0,local_5c);
    fVar1 = local_58;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar1;
  fVar2 = 1.0 / (fVar1 - *(float *)(param_1 + 0x48));
LAB_1481b6ec5:
  *(float *)(param_1 + 0x50) = fVar2;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b6f12 FUN_1481b6f12 body=302 status=ok
// SIG undefined FUN_1481b6f12(void)

longlong * FUN_1481b6f12(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (param_3 < 2) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.0 / ((float)param_3 + -1.0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < param_3) {
    if (param_3 != 0) {
      FUN_14482f6fa(param_2);
      iVar2 = 0;
      do {
        fVar4 = ((float)iVar2 * fVar5) / *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
        uVar3 = FUN_1448c9f94(param_1 + 0x70,fVar4,0);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        uVar3 = FUN_1448c9f94(param_1 + 0xf0,fVar4,0);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3 * 2);
}



// FUNCTION 1481b7042 FUN_1481b7042 body=125 status=ok
// SIG undefined FUN_1481b7042(void)

undefined4 FUN_1481b7042(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140db9faa();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_2 + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    FUN_14093c00e(param_2 + 0xe0,param_1 + 0xe0);
    *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x158);
    *(undefined2 *)(param_2 + 0x15c) = *(undefined2 *)(param_1 + 0x15c);
    FUN_14093c00e(param_2 + 0x160,param_1 + 0x160);
  }
  return uVar1;
}



// FUNCTION 1481b70c0 FUN_1481b70c0 body=75 status=ok
// SIG undefined FUN_1481b70c0(void)

undefined8 FUN_1481b70c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14815f42c();
  if (cVar1 != '\0') {
    cVar1 = FUN_147a3e954(param_2 + 0x70,param_1 + 0x70);
    if (cVar1 != '\0') {
      uVar2 = FUN_147a3e954(param_2 + 0xf0,param_1 + 0xf0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1481b710c FUN_1481b710c body=252 status=ok
// SIG undefined FUN_1481b710c(void)

void FUN_1481b710c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,&DAT_149e25cc8,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x70;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3d4ccccd;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_40,&DAT_149e25ccc,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0xf0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_40;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3d4ccccd;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b7220 FUN_1481b7220 body=582 status=ok
// SIG undefined FUN_1481b7220(void)

void FUN_1481b7220(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  float local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0xe8) < 1) {
    iVar1 = *(int *)(param_1 + 0x168);
    if (((iVar1 < 1) && (*(int *)(param_1 + 0x1e8) < 1)) && (*(int *)(param_1 + 0x268) < 1)) {
      *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
      fVar3 = 1.0;
      goto LAB_1481b73e2;
    }
    fVar3 = 3.4028235e+38;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
    FUN_147a4117c(param_1 + 0x70,local_7c);
    iVar1 = *(int *)(param_1 + 0x168);
    fVar3 = local_78;
  }
  if (3.4028235e+38 <= fVar3) {
    fVar3 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar2 = fVar3;
  if (0 < iVar1) {
    FUN_147a4117c(param_1 + 0xf0,local_7c);
    fVar2 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  fVar3 = fVar2;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_147a4117c(param_1 + 0x170,local_7c);
    fVar3 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x268)) {
    FUN_147a4117c(param_1 + 0x1f0,local_7c);
    fVar2 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xff7fffff;
  if (*(int *)(param_1 + 0xe8) < 1) {
    fVar3 = -3.4028235e+38;
  }
  else {
    FUN_1413dd74e(param_1 + 0x70,local_7c);
    fVar3 = local_78;
  }
  if (fVar3 <= -3.4028235e+38) {
    fVar3 = -3.4028235e+38;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x168)) {
    FUN_1413dd74e(param_1 + 0xf0,local_7c);
    fVar2 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar3 = fVar2;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_1413dd74e(param_1 + 0x170,local_7c);
    fVar3 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x268)) {
    FUN_1413dd74e(param_1 + 0x1f0,local_7c);
    fVar2 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar3 = 1.0 / (fVar2 - *(float *)(param_1 + 0x48));
LAB_1481b73e2:
  *(float *)(param_1 + 0x50) = fVar3;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b7468 FUN_1481b7468 body=469 status=ok
// SIG undefined FUN_1481b7468(void)

longlong * FUN_1481b7468(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 < 2) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 1.0 / ((float)param_3 + -1.0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < param_3) {
    if (param_3 != 0) {
      FUN_14482f6fa(param_2);
      iVar2 = 0;
      do {
        fVar7 = ((float)iVar2 * fVar8) / *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
        uVar3 = FUN_1448c9f94(param_1 + 0x1f0,fVar7,0);
        uVar4 = FUN_1448c9f94(param_1 + 0x170,fVar7);
        uVar5 = FUN_1448c9f94(param_1 + 0xf0,fVar7);
        uVar6 = FUN_1448c9f94(param_1 + 0x70,fVar7);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar6;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar5;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar4;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3 * 4);
}



// FUNCTION 1481b763e FUN_1481b763e body=215 status=ok
// SIG undefined FUN_1481b763e(void)

undefined4 FUN_1481b763e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140db9faa();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_2 + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    FUN_14093c00e(param_2 + 0xe0,param_1 + 0xe0);
    *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x158);
    *(undefined2 *)(param_2 + 0x15c) = *(undefined2 *)(param_1 + 0x15c);
    FUN_14093c00e(param_2 + 0x160,param_1 + 0x160);
    *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
    *(undefined2 *)(param_2 + 0x1dc) = *(undefined2 *)(param_1 + 0x1dc);
    FUN_14093c00e(param_2 + 0x1e0,param_1 + 0x1e0);
    *(undefined4 *)(param_2 + 600) = *(undefined4 *)(param_1 + 600);
    *(undefined2 *)(param_2 + 0x25c) = *(undefined2 *)(param_1 + 0x25c);
    FUN_14093c00e(param_2 + 0x260,param_1 + 0x260);
  }
  return uVar1;
}



// FUNCTION 1481b7716 FUN_1481b7716 body=117 status=ok
// SIG undefined FUN_1481b7716(void)

undefined8 FUN_1481b7716(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14815f42c();
  if (cVar1 != '\0') {
    cVar1 = FUN_147a3e954(param_2 + 0x70,param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_147a3e954(param_2 + 0xf0,param_1 + 0xf0);
      if (cVar1 != '\0') {
        cVar1 = FUN_147a3e954(param_2 + 0x170,param_1 + 0x170);
        if (cVar1 != '\0') {
          uVar2 = FUN_147a3e954(param_2 + 0x1f0,param_1 + 0x1f0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1481b778c FUN_1481b778c body=448 status=ok
// SIG undefined FUN_1481b778c(void)

void FUN_1481b778c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_38,&DAT_149e25cc8,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x70;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3d4ccccd;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_40,&DAT_149e25ccc,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0xf0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_40;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3d4ccccd;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_48,&DAT_149e25cd0,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x170;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_48;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3dcccccd;
  puVar1[1] = 0x3e4ccccd;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_50,&DAT_149ebbc1a,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x1f0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_50;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3e4ccccd;
  puVar1[1] = 0x3e4ccccd;
  puVar1[2] = 0x3e4ccccd;
  puVar1[3] = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b795e FUN_1481b795e body=472 status=ok
// SIG undefined FUN_1481b795e(void)

void FUN_1481b795e(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  float local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0xe8) < 1) {
    iVar1 = *(int *)(param_1 + 0x168);
    if ((iVar1 < 1) && (*(int *)(param_1 + 0x1e8) < 1)) {
      *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
      fVar2 = 1.0;
      goto LAB_1481b7ac0;
    }
    fVar2 = 3.4028235e+38;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
    FUN_147a4117c(param_1 + 0x70,local_6c);
    iVar1 = *(int *)(param_1 + 0x168);
    fVar2 = local_68;
  }
  if (3.4028235e+38 <= fVar2) {
    fVar2 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  fVar3 = fVar2;
  if (0 < iVar1) {
    FUN_147a4117c(param_1 + 0xf0,local_6c);
    fVar3 = local_68;
  }
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_147a4117c(param_1 + 0x170,local_6c);
    fVar2 = local_68;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xff7fffff;
  if (*(int *)(param_1 + 0xe8) < 1) {
    fVar2 = -3.4028235e+38;
  }
  else {
    FUN_1413dd74e(param_1 + 0x70,local_6c);
    fVar2 = local_68;
  }
  if (fVar2 <= -3.4028235e+38) {
    fVar2 = -3.4028235e+38;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar3 = fVar2;
  if (0 < *(int *)(param_1 + 0x168)) {
    FUN_1413dd74e(param_1 + 0xf0,local_6c);
    fVar3 = local_68;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_1413dd74e(param_1 + 0x170,local_6c);
    fVar2 = local_68;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar2 = 1.0 / (fVar2 - *(float *)(param_1 + 0x48));
LAB_1481b7ac0:
  *(float *)(param_1 + 0x50) = fVar2;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b7b38 FUN_1481b7b38 body=384 status=ok
// SIG undefined FUN_1481b7b38(void)

longlong * FUN_1481b7b38(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 < 2) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 1.0 / ((float)param_3 + -1.0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < param_3) {
    if (param_3 != 0) {
      FUN_14482f6fa(param_2);
      iVar2 = 0;
      do {
        fVar6 = ((float)iVar2 * fVar7) / *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
        uVar3 = FUN_1448c9f94(param_1 + 0x170,fVar6,0);
        uVar4 = FUN_1448c9f94(param_1 + 0xf0,fVar6);
        uVar5 = FUN_1448c9f94(param_1 + 0x70,fVar6);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar5;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar4;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3 * 3);
}



// FUNCTION 1481b7cba FUN_1481b7cba body=172 status=ok
// SIG undefined FUN_1481b7cba(void)

undefined4 FUN_1481b7cba(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140db9faa();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_2 + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    FUN_14093c00e(param_2 + 0xe0,param_1 + 0xe0);
    *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x158);
    *(undefined2 *)(param_2 + 0x15c) = *(undefined2 *)(param_1 + 0x15c);
    FUN_14093c00e(param_2 + 0x160,param_1 + 0x160);
    *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
    *(undefined2 *)(param_2 + 0x1dc) = *(undefined2 *)(param_1 + 0x1dc);
    FUN_14093c00e(param_2 + 0x1e0,param_1 + 0x1e0);
  }
  return uVar1;
}



// FUNCTION 1481b7d66 FUN_1481b7d66 body=96 status=ok
// SIG undefined FUN_1481b7d66(void)

undefined8 FUN_1481b7d66(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14815f42c();
  if (cVar1 != '\0') {
    cVar1 = FUN_147a3e954(param_2 + 0x70,param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_147a3e954(param_2 + 0xf0,param_1 + 0xf0);
      if (cVar1 != '\0') {
        uVar2 = FUN_147a3e954(param_2 + 0x170,param_1 + 0x170);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1481b7dc6 FUN_1481b7dc6 body=350 status=ok
// SIG undefined FUN_1481b7dc6(void)

void FUN_1481b7dc6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,&DAT_149e25cc8,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x70;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3d4ccccd;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_40,&DAT_149e25ccc,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0xf0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_40;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3d4ccccd;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_48,&DAT_149e25cd0,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x170;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_48;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3dcccccd;
  puVar1[1] = 0x3e4ccccd;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8008 FUN_1481b8008 body=251 status=ok
// SIG undefined FUN_1481b8008(void)

void FUN_1481b8008(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  float *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a76c20(&local_28);
  FUN_144a76c20(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  FUN_14182cf6c(param_1,&local_60);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar2 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar2) {
    iVar1 = 0;
    do {
      *local_28 = (float)local_60;
      *local_38 = (float)local_58;
      *local_48 = (float)local_50;
      local_28 = local_28 + local_20;
      local_38 = local_38 + local_30;
      local_48 = local_48 + local_40;
      iVar1 = iVar1 + 1;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar2 = (int *)(param_2 + 0x3c);
      }
    } while (iVar1 < *piVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8104 FUN_1481b8104 body=660 status=ok
// SIG undefined FUN_1481b8104(void)

void FUN_1481b8104(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [40];
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144a76c20(&local_70);
  FUN_144a76c20(&local_80,param_2);
  FUN_144a76c20(&local_90,param_2);
  FUN_144a76c20(&local_a0,param_2);
  FUN_144a76c20(&local_b0,param_2);
  FUN_144a76c20(&local_c0,param_2);
  fVar8 = 1.0;
  fVar10 = -1.0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_1481b8266:
    fVar11 = -1.0;
    fVar9 = -1.0;
  }
  else {
    lVar3 = FUN_140d5a4a0();
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 == 0) goto LAB_1481b8266;
    fVar9 = -1.0;
    fVar10 = fVar9;
    fVar11 = fVar9;
    if (((lVar3 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      fVar10 = -1.0;
      fVar11 = -1.0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        fVar9 = (float)*(double *)(lVar1 + 0x38);
        fVar10 = (float)*(double *)(lVar1 + 0x28);
        fVar11 = (float)*(double *)(lVar1 + 0x30);
      }
    }
    lVar3 = FUN_140d5a4a0();
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (((lVar1 != 0) && (lVar3 != 0)) &&
       ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      fVar8 = (float)*(double *)(lVar1 + 0x50);
      fVar6 = (float)*(double *)(lVar1 + 0x48);
      fVar7 = (float)*(double *)(lVar1 + 0x40);
      goto LAB_1481b8274;
    }
  }
  fVar6 = 1.0;
  fVar7 = 1.0;
LAB_1481b8274:
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      *local_70 = fVar10;
      *local_80 = fVar11;
      *local_90 = fVar9;
      *local_a0 = fVar7;
      *local_b0 = fVar6;
      *local_c0 = fVar8;
      local_80 = local_80 + local_78;
      local_90 = local_90 + local_88;
      local_70 = local_70 + local_68;
      local_a0 = local_a0 + local_98;
      local_b0 = local_b0 + local_a8;
      local_c0 = local_c0 + local_b8;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar4 < *piVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b839a FUN_1481b839a body=244 status=ok
// SIG undefined FUN_1481b839a(void)

void FUN_1481b839a(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_68 [32];
  float *local_48;
  int local_40;
  float *local_38;
  int local_30;
  float *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a76c20(&local_28);
  FUN_144a76c20(&local_38,param_2);
  FUN_144a76c20(&local_48,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    cVar1 = *(char *)(param_1 + 0x42);
    cVar2 = *(char *)(param_1 + 0x41);
    cVar3 = *(char *)(param_1 + 0x40);
    iVar4 = 0;
    do {
      *local_28 = (float)(int)cVar3;
      *local_38 = (float)(int)cVar2;
      *local_48 = (float)(int)cVar1;
      local_28 = local_28 + local_20;
      local_38 = local_38 + local_30;
      local_48 = local_48 + local_40;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar4 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8490 FUN_1481b8490 body=95 status=ok
// SIG undefined FUN_1481b8490(void)

undefined8 FUN_1481b8490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_1481192e4();
  if ((char)uVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    if (((*(longlong *)(param_2 + 0x38) == lVar1) &&
        (*(char *)(param_2 + 0x40) == *(char *)(param_1 + 0x40))) &&
       (*(char *)(param_2 + 0x41) == *(char *)(param_1 + 0x41))) {
      return CONCAT71(uVar3,*(char *)(param_2 + 0x42) == *(char *)(param_1 + 0x42));
    }
  }
  return 0;
}



// FUNCTION 1481b84f0 FUN_1481b84f0 body=972 status=ok
// SIG undefined FUN_1481b84f0(void)

void FUN_1481b84f0(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  float *local_e8;
  int local_e0;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a98d08();
  local_88 = 0;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_e8);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_140d5a4a0();
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      if (((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) ||
         (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
        FUN_1414cbd82();
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8);
        FUN_1414cbd82();
        if (((lVar2 == lVar3 + 0x30) && (*(char *)(lVar1 + 0x74) == '\x01')) &&
           (*(int *)(lVar1 + 0xb0) != 0)) {
          iVar7 = *(int *)(lVar1 + 0x70) + -1;
          iVar10 = *(int *)(lVar1 + 0x6c) + -1;
          iVar11 = *(int *)(lVar1 + 0x68) + -1;
          iVar6 = iVar10;
          if (iVar11 < iVar10) {
            iVar6 = iVar11;
          }
          if (iVar7 <= iVar6) {
            iVar6 = iVar7;
          }
          if (-1 < iVar6) {
            piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
            if (*param_2 != '\0') {
              piVar4 = (int *)(param_2 + 0x3c);
            }
            if (0 < *piVar4) {
              iVar6 = 0;
              do {
                local_ec = *local_b8;
                local_f0 = *local_98;
                local_f4 = *local_78;
                iVar5 = local_ec;
                if (iVar7 <= local_ec) {
                  iVar5 = iVar7;
                }
                if (iVar5 < 1) {
                  iVar5 = 0;
                }
                iVar8 = local_f0;
                if (iVar10 <= local_f0) {
                  iVar8 = iVar10;
                }
                if (iVar8 < 1) {
                  iVar8 = 0;
                }
                iVar9 = local_f4;
                if (iVar11 <= local_f4) {
                  iVar9 = iVar11;
                }
                if (iVar9 < 1) {
                  iVar9 = 0;
                }
                fVar12 = 0.0;
                if ((iVar9 == local_f4) && (iVar8 == local_f0)) {
                  fVar13 = 0.0;
                  fVar14 = 0.0;
                  if (iVar5 == local_ec) {
                    FUN_147d962ac(lVar1,&local_110,&local_f4);
                    fVar14 = (float)local_100;
                    fVar13 = (float)local_108;
                    fVar12 = (float)local_110;
                  }
                }
                else {
                  fVar13 = 0.0;
                  fVar14 = 0.0;
                }
                *local_c8 = fVar12;
                *local_d8 = fVar13;
                *local_e8 = fVar14;
                local_78 = local_78 + local_68;
                local_98 = local_98 + local_88;
                local_b8 = local_b8 + local_a8;
                local_c8 = local_c8 + local_c0;
                local_d8 = local_d8 + local_d0;
                local_e8 = local_e8 + local_e0;
                iVar6 = iVar6 + 1;
                piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
                if (*param_2 != '\0') {
                  piVar4 = (int *)(param_2 + 0x3c);
                }
              } while (iVar6 < *piVar4);
            }
          }
        }
      }
    }
  }
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar6 = 0;
    do {
      *local_c8 = 0.0;
      *local_d8 = 0.0;
      *local_e8 = 0.0;
      local_78 = local_78 + local_68;
      local_98 = local_98 + local_88;
      local_b8 = local_b8 + local_a8;
      local_c8 = local_c8 + local_c0;
      local_d8 = local_d8 + local_d0;
      local_e8 = local_e8 + local_e0;
      iVar6 = iVar6 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
    } while (iVar6 < *piVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481b88be FUN_1481b88be body=129 status=ok
// SIG undefined FUN_1481b88be(void)

ulonglong FUN_1481b88be(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((param_2 == (longlong *)0x0) || (param_2[2] != *(longlong *)(param_1 + 0x10))) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    param_2[7] = lVar2;
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)((longlong)param_2 + 0x41) = *(undefined1 *)(param_1 + 0x41);
    *(undefined1 *)((longlong)param_2 + 0x42) = *(undefined1 *)(param_1 + 0x42);
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1481b8944 FUN_1481b8944 body=74 status=ok
// SIG undefined FUN_1481b8944(void)

bool FUN_1481b8944(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = FUN_1481192e4();
  bVar3 = false;
  if ((param_2 != 0) && (cVar2 != '\0')) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    bVar3 = *(longlong *)(param_1 + 0x38) == lVar1;
  }
  return bVar3;
}



// FUNCTION 1481b8994 FUN_1481b8994 body=75 status=ok
// SIG undefined FUN_1481b8994(void)

undefined8 FUN_1481b8994(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1481b89fc FUN_1481b89fc body=148 status=ok
// SIG undefined FUN_1481b89fc(void)

void FUN_1481b89fc(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1481b8a90 FUN_1481b8a90 body=151 status=ok
// SIG undefined FUN_1481b8a90(void)

void FUN_1481b8a90(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined4 *local_68 [2];
  undefined1 *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481b89fc(local_38,param_1);
  local_58 = (undefined1 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1481c49be(&local_58,param_1);
  FUN_140126e42(local_68,param_1);
  *(undefined1 *)(local_30 + 0x14) = *local_58;
  *local_68[0] = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
  local_58 = local_58 + local_48;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8b28 FUN_1481b8b28 body=242 status=ok
// SIG undefined FUN_1481b8b28(void)

void FUN_1481b8b28(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  undefined4 *local_50;
  int local_48;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481b89fc(local_20,param_1);
  FUN_144a76cd4(&local_30,param_1);
  FUN_144a76cd4(&local_40,param_1);
  FUN_144a76cd4(&local_50,param_1);
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    uVar4 = *(undefined4 *)(local_18 + 8);
    uVar5 = *(undefined4 *)(local_18 + 0xc);
    uVar6 = *(undefined4 *)(local_18 + 0x10);
    iVar8 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = uVar4;
      puVar2 = local_40 + local_38;
      *local_40 = uVar5;
      puVar3 = local_50 + local_48;
      *local_50 = uVar6;
      iVar8 = iVar8 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_50 = puVar3;
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar8 < *piVar7);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8c1c FUN_1481b8c1c body=252 status=ok
// SIG undefined FUN_1481b8c1c(void)

undefined8 * FUN_1481b8c1c(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1477fb1ca(param_1,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_140b414cc(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_1481c4a80(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8d1a FUN_1481b8d1a body=106 status=ok
// SIG undefined FUN_1481b8d1a(void)

void FUN_1481b8d1a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3da38) {
    FUN_1481b8d84(param_1,param_4);
    lVar1 = *param_2;
  }
  if (lVar1 != DAT_14cb3da40) {
    if (lVar1 != DAT_14cb3da48) {
      return;
    }
    FUN_1481b8f1c(param_1,param_4);
    return;
  }
  FUN_1481b8e50(param_1,param_4);
  return;
}



// FUNCTION 1481b8d84 FUN_1481b8d84 body=202 status=ok
// SIG undefined FUN_1481b8d84(void)

void FUN_1481b8d84(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adeec00;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8e50 FUN_1481b8e50 body=202 status=ok
// SIG undefined FUN_1481b8e50(void)

void FUN_1481b8e50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adeec70;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b8f1c FUN_1481b8f1c body=202 status=ok
// SIG undefined FUN_1481b8f1c(void)

void FUN_1481b8f1c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adeece0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b900e FUN_1481b900e body=282 status=ok
// SIG undefined FUN_1481b900e(void)

void FUN_1481b900e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar5 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0x50) == lVar2)
        goto LAB_1481b906a;
        iVar4 = *(int *)(lVar5 + 0x48);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1481b906a:
  uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_1481c4cd4();
  puVar7 = (undefined8 *)((ulonglong)uVar6 + *(longlong *)(param_2 + 0x38));
  *(uint *)(param_2 + 0x50) = DAT_14cb3e55c + uVar6;
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x20) == 0)) {
    *(undefined4 *)(puVar7 + 1) = DAT_14c846338;
    *puVar7 = DAT_14c846330;
    puVar7[2] = *(undefined8 *)(DAT_14ca94db8 + 0x10);
    puVar3 = (undefined8 *)(DAT_14ca94db8 + 0x18);
  }
  else {
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar5 + 0x30);
    *puVar7 = *(undefined8 *)(lVar5 + 0x28);
    puVar7[2] = *(undefined8 *)(lVar5 + 0x20);
    puVar3 = (undefined8 *)(DAT_14ca94db8 + 0x18);
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0x10);
    }
  }
  puVar7[3] = *puVar3;
  return;
}



// FUNCTION 1481b912c FUN_1481b912c body=108 status=ok
// SIG undefined FUN_1481b912c(void)

undefined8 FUN_1481b912c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1481b9198 FUN_1481b9198 body=89 status=ok
// SIG undefined FUN_1481b9198(void)

undefined4 FUN_1481b9198(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
    }
  }
  return 0;
}



// FUNCTION 1481b91f2 FUN_1481b91f2 body=278 status=ok
// SIG undefined FUN_1481b91f2(void)

void FUN_1481b91f2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cb3da90) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*param_2 == DAT_14cb3da98) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14adf3180;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_1481b93e8;
    FUN_144a450dc(param_4,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b93e8 FUN_1481b93e8 body=242 status=ok
// SIG undefined FUN_1481b93e8(void)

void FUN_1481b93e8(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481b94dc(local_20);
  FUN_144a76c20(&local_30,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_50,param_2);
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar4 = *(int *)(local_18 + 0x10);
    iVar5 = *(int *)(local_18 + 0xc);
    iVar6 = *(int *)(local_18 + 8);
    iVar7 = 0;
    do {
      pfVar1 = local_30 + local_28;
      *local_30 = (float)iVar6;
      pfVar2 = local_40 + local_38;
      *local_40 = (float)iVar5;
      pfVar3 = local_50 + local_48;
      *local_50 = (float)iVar4;
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_50 = pfVar3;
      local_40 = pfVar2;
      local_30 = pfVar1;
    } while (iVar7 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b94dc FUN_1481b94dc body=148 status=ok
// SIG undefined FUN_1481b94dc(void)

void FUN_1481b94dc(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1481b9570 FUN_1481b9570 body=406 status=ok
// SIG undefined FUN_1481b9570(void)

void FUN_1481b9570(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  longlong local_88 [2];
  int local_78;
  longlong local_68 [2];
  int local_58;
  longlong local_50;
  int local_40;
  longlong local_38;
  int local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481b94dc(local_20,param_1);
  FUN_1448a432c(local_68,param_1);
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  FUN_144a98dce(local_88,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      local_38 = local_38 + (longlong)local_28 * 4;
      local_50 = local_50 + (longlong)local_40 * 4;
      local_88[0] = local_88[0] + (longlong)local_78 * 4;
      local_68[0] = local_68[0] + (longlong)local_58 * 4;
      puVar1 = local_c8 + local_c0;
      *local_c8 = 0x3f800000;
      puVar2 = local_b8 + local_b0;
      *local_b8 = 0;
      puVar3 = local_a8 + local_a0;
      *local_a8 = 0x3f800000;
      puVar4 = local_98 + local_90;
      *local_98 = 0x3f800000;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_c8 = puVar1;
      local_b8 = puVar2;
      local_a8 = puVar3;
      local_98 = puVar4;
    } while (iVar5 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b9708 FUN_1481b9708 body=371 status=ok
// SIG undefined FUN_1481b9708(void)

undefined8 * FUN_1481b9708(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar4 = param_1 + 0x88;
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar3 + lVar5);
      if (puVar2 != *(undefined8 **)(param_1 + 0x78)) {
        LOCK();
        bVar6 = *(int *)(puVar2 + 1) == 0;
        if (bVar6) {
          *(int *)(puVar2 + 1) = -1;
        }
        UNLOCK();
        if (bVar6) {
          return puVar2;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x198,0x10);
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_14ade2d80;
  puVar2[2] = param_1;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0xffffffff00000000;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xb4) = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x114) = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  *(undefined8 *)((longlong)puVar2 + 300) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x134) = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  *(undefined4 *)(puVar2 + 0x30) = 1;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_140e69270(lVar4,iVar1);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  *(undefined8 **)(lVar4 + (longlong)iVar1 * 8) = puVar2;
  LOCK();
  if (*(int *)(puVar2 + 1) == 0) {
    *(int *)(puVar2 + 1) = -1;
  }
  UNLOCK();
  return puVar2;
}



// FUNCTION 1481b9880 FUN_1481b9880 body=175 status=ok
// SIG undefined FUN_1481b9880(void)

void FUN_1481b9880(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_58 = param_5;
    FUN_143a774ea(*(longlong *)(param_1 + 0x78),param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1449b8608(local_48,param_4,L"[Destination]");
    local_58 = param_5;
    FUN_143a774ea(*(undefined8 *)(param_1 + 0x80),param_2,param_3);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481b9930 FUN_1481b9930 body=367 status=ok
// SIG undefined FUN_1481b9930(void)

void FUN_1481b9930(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  uint param_6,int param_7,int param_8,int param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_14009337e(param_1,param_6,0);
  *(uint *)(param_1 + 0x120) = param_6;
  if (0 < (int)param_6) {
    if ((param_2 != 0) &&
       (uVar2 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x2c),
       uVar2 != 0)) {
      uVar1 = 0;
      uVar3 = 0;
      do {
        memcpy((void *)((ulonglong)(uint)(*(int *)(param_1 + 0x128) * (int)uVar3) +
                       *(longlong *)(param_1 + 0x18)),
               (void *)(uVar1 + param_2 + (longlong)param_5 * 4),(ulonglong)param_6 << 2);
        uVar3 = uVar3 + 1;
        uVar1 = (ulonglong)(uint)((int)uVar1 + param_7);
      } while (uVar2 != uVar3);
    }
    if ((param_3 != 0) &&
       (uVar2 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x30),
       uVar2 != 0)) {
      uVar1 = 0;
      uVar3 = 0;
      do {
        memcpy((void *)((ulonglong)(uint)(*(int *)(param_1 + 300) * (int)uVar3) +
                       *(longlong *)(param_1 + 0x28)),
               (void *)(uVar1 + param_3 + (longlong)param_5 * 4),(ulonglong)param_6 << 2);
        uVar3 = uVar3 + 1;
        uVar1 = (ulonglong)(uint)((int)uVar1 + param_8);
      } while (uVar2 != uVar3);
    }
    if ((param_4 != 0) &&
       (uVar2 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x34),
       uVar2 != 0)) {
      uVar1 = 0;
      uVar3 = 0;
      do {
        memcpy((void *)((ulonglong)(uint)(*(int *)(param_1 + 0x130) * (int)uVar3) +
                       *(longlong *)(param_1 + 0x38)),
               (void *)(uVar1 + param_4 + (longlong)param_5 * 2),(ulonglong)(param_6 * 2));
        uVar3 = uVar3 + 1;
        uVar1 = (ulonglong)(uint)((int)uVar1 + param_9);
      } while (uVar2 != uVar3);
    }
  }
  return;
}



// FUNCTION 1481b9aa0 FUN_1481b9aa0 body=894 status=ok
// SIG undefined FUN_1481b9aa0(void)

void FUN_1481b9aa0(longlong param_1,longlong param_2,uint param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  size_t _Size;
  ushort uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  size_t _Size_00;
  uint uVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if ((-1 < (int)param_3) &&
     (uVar12 = *(uint *)(param_1 + 0x120) - param_3,
     param_3 <= *(uint *)(param_1 + 0x120) && uVar12 != 0)) {
    if (param_5 != 0xffffffff) {
      uVar12 = param_5;
    }
    if (uVar12 != 0) {
      uVar13 = (ulonglong)param_4;
      uVar7 = uVar12 + param_4;
      if (((int)param_4 < 0) || (*(uint *)(param_2 + 0x124) < uVar7)) {
        FUN_14009337e(param_2,uVar7,1);
      }
      *(uint *)(param_2 + 0x120) = uVar7;
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
      if (0 < (int)plVar3[1]) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
        lVar10 = (ulonglong)param_3 * 4;
        _Size_00 = ((ulonglong)(uVar12 + param_3) - (ulonglong)param_3) * 4;
        _Size = (ulonglong)uVar12 * 4;
        lVar9 = 0;
        do {
          puVar8 = (ushort *)(lVar9 * 0x20 + plVar3[2]);
          if ((longlong)(int)plVar4[1] != 0) {
            plVar1 = (longlong *)(*plVar3 + lVar9 * 0xc);
            lVar6 = 0;
LAB_1481b9bc8:
            if ((*(longlong *)(*plVar4 + lVar6) != *plVar1) ||
               (*(int *)(*plVar4 + 8 + lVar6) != (int)plVar1[1])) goto LAB_1481b9be2;
            iVar5 = (int)(lVar6 >> 2) * -0x55555555;
            if (iVar5 != -1) {
              lVar6 = plVar4[2];
              lVar11 = (longlong)iVar5 * 0x20;
              uVar2 = *(ushort *)(lVar6 + 8 + lVar11);
              if (uVar2 != 0) {
                uVar7 = 0;
                do {
                  memcpy((void *)((ulonglong)((*puVar8 + uVar7) * *(int *)(param_2 + 0x128)) +
                                  *(longlong *)(param_2 + 0x18) + uVar13 * 4),
                         (void *)((ulonglong)
                                  ((*(ushort *)(lVar6 + lVar11) + uVar7) * *(int *)(param_1 + 0x128)
                                  ) + *(longlong *)(param_1 + 0x18) + lVar10),_Size_00);
                  uVar7 = uVar7 + 1;
                } while (uVar2 != uVar7);
              }
              uVar2 = *(ushort *)(lVar6 + 10 + lVar11);
              if (uVar2 != 0) {
                uVar7 = 0;
                do {
                  memcpy((void *)((ulonglong)((puVar8[1] + uVar7) * *(int *)(param_2 + 300)) +
                                  *(longlong *)(param_2 + 0x28) + uVar13 * 4),
                         (void *)((ulonglong)
                                  ((*(ushort *)(lVar6 + 2 + lVar11) + uVar7) *
                                  *(int *)(param_1 + 300)) + *(longlong *)(param_1 + 0x28) + lVar10)
                         ,_Size_00);
                  uVar7 = uVar7 + 1;
                } while (uVar2 != uVar7);
              }
              uVar2 = *(ushort *)(lVar6 + 0xc + lVar11);
              if (uVar2 != 0) {
                uVar7 = 0;
                do {
                  memcpy((void *)((ulonglong)((puVar8[2] + uVar7) * *(int *)(param_2 + 0x130)) +
                                  *(longlong *)(param_2 + 0x38) + uVar13 * 2),
                         (void *)((ulonglong)
                                  ((*(ushort *)(lVar6 + 4 + lVar11) + uVar7) *
                                  *(int *)(param_1 + 0x130)) + *(longlong *)(param_1 + 0x38) +
                                 (ulonglong)(param_3 * 2)),
                         (ulonglong)(uVar12 + param_3) * 2 - (ulonglong)(param_3 * 2));
                  uVar7 = uVar7 + 1;
                } while (uVar2 != uVar7);
              }
              goto LAB_1481b9c84;
            }
          }
LAB_1481b9beb:
          uVar2 = puVar8[4];
          if (uVar2 != 0) {
            uVar7 = 0;
            do {
              memset((void *)((ulonglong)((*puVar8 + uVar7) * *(int *)(param_2 + 0x128)) +
                              *(longlong *)(param_2 + 0x18) + uVar13 * 4),0,_Size);
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
          uVar2 = puVar8[5];
          if (uVar2 != 0) {
            uVar7 = 0;
            do {
              memset((void *)((ulonglong)((puVar8[1] + uVar7) * *(int *)(param_2 + 300)) +
                              *(longlong *)(param_2 + 0x28) + uVar13 * 4),0,_Size);
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
          uVar2 = puVar8[6];
          if (uVar2 != 0) {
            uVar7 = 0;
            do {
              memset((void *)((ulonglong)((puVar8[2] + uVar7) * *(int *)(param_2 + 0x130)) +
                              *(longlong *)(param_2 + 0x38) + uVar13 * 2),0,(ulonglong)uVar12 * 2);
              uVar7 = uVar7 + 1;
            } while (uVar2 != uVar7);
          }
LAB_1481b9c84:
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)plVar3[1]);
      }
    }
  }
  return;
LAB_1481b9be2:
  lVar6 = lVar6 + 0xc;
  if ((longlong)(int)plVar4[1] * 0xc == lVar6) goto LAB_1481b9beb;
  goto LAB_1481b9bc8;
}



// FUNCTION 1481b9e1e FUN_1481b9e1e body=2048 status=ok
// SIG undefined FUN_1481b9e1e(void)

void FUN_1481b9e1e(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  ushort *puVar14;
  longlong lVar15;
  longlong *plVar16;
  void *pvVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  void *local_80;
  void *local_78;
  void *local_70;
  
  lVar15 = param_2[1];
  if ((longlong)(int)lVar15 == 0) {
    iVar19 = 0;
    bVar8 = true;
  }
  else {
    lVar4 = *param_2;
    bVar8 = true;
    lVar13 = 0;
    iVar19 = 0;
    do {
      lVar20 = *(longlong *)(lVar4 + lVar13);
      if (lVar20 != 0) {
        iVar19 = iVar19 + *(int *)(lVar20 + 0x120);
        iVar9 = FUN_148073748(*(undefined8 *)(*(longlong *)(lVar20 + 0x10) + 8));
        iVar10 = FUN_148073748(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8));
        bVar8 = (bool)(bVar8 & iVar9 == iVar10);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar15 * 8 != lVar13);
  }
  if (param_7 != '\0') {
    FUN_143a7817e(param_1,param_4,iVar19);
  }
  *(int *)(param_1 + 0x120) = iVar19;
  if (iVar19 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x60);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    iVar19 = *(int *)(lVar4 + 0x2c);
    iVar9 = *(int *)(lVar4 + 0x30);
    iVar10 = *(int *)(lVar4 + 0x34);
    if (lVar15 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      iVar18 = *(int *)(param_1 + 0x128);
      cVar2 = *(char *)(param_4 + 0x69);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,1);
      }
      local_70 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                   (DAT_14ca83900,param_4,lVar15,0,iVar18 * iVar19,1);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,0);
      }
    }
    lVar15 = *(longlong *)(param_1 + 0x90);
    if (lVar15 == 0) {
      local_78 = (void *)0x0;
    }
    else {
      iVar18 = *(int *)(param_1 + 300);
      cVar2 = *(char *)(param_4 + 0x69);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,1);
      }
      local_78 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                   (DAT_14ca83900,param_4,lVar15,0,iVar18 * iVar9,1);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,0);
      }
    }
    lVar15 = *(longlong *)(param_1 + 0xf0);
    if (lVar15 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      iVar18 = *(int *)(param_1 + 0x130);
      cVar2 = *(char *)(param_4 + 0x69);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,1);
      }
      local_80 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                   (DAT_14ca83900,param_4,lVar15,0,iVar18 * iVar10,1);
      if (cVar2 == '\0') {
        FUN_14002049c(param_4,0);
      }
    }
    if (bVar8) {
      if (iVar19 != 0) {
        iVar18 = 0;
        do {
          uVar12 = *(uint *)(param_1 + 0x128);
          lVar15 = param_2[1];
          if ((longlong)(int)lVar15 != 0) {
            lVar4 = *param_2;
            lVar13 = 0;
            pvVar17 = local_70;
            do {
              lVar20 = *(longlong *)(lVar4 + lVar13);
              iVar3 = *(int *)(lVar20 + 0x120);
              memcpy(pvVar17,(void *)((ulonglong)(uint)(*(int *)(lVar20 + 0x128) * iVar18) +
                                     *(longlong *)(lVar20 + 0x18)),(longlong)iVar3 * 4);
              pvVar17 = (void *)((longlong)pvVar17 + (longlong)iVar3 * 4);
              lVar13 = lVar13 + 8;
            } while ((longlong)(int)lVar15 * 8 != lVar13);
          }
          local_70 = (void *)((longlong)local_70 + (ulonglong)uVar12);
          iVar18 = iVar18 + 1;
        } while (iVar18 != iVar19);
      }
      if (iVar9 != 0) {
        iVar19 = 0;
        do {
          uVar12 = *(uint *)(param_1 + 300);
          lVar15 = param_2[1];
          if ((longlong)(int)lVar15 != 0) {
            lVar4 = *param_2;
            lVar13 = 0;
            pvVar17 = local_78;
            do {
              lVar20 = *(longlong *)(lVar4 + lVar13);
              iVar18 = *(int *)(lVar20 + 0x120);
              memcpy(pvVar17,(void *)((ulonglong)(uint)(*(int *)(lVar20 + 300) * iVar19) +
                                     *(longlong *)(lVar20 + 0x28)),(longlong)iVar18 * 4);
              pvVar17 = (void *)((longlong)pvVar17 + (longlong)iVar18 * 4);
              lVar13 = lVar13 + 8;
            } while ((longlong)(int)lVar15 * 8 != lVar13);
          }
          local_78 = (void *)((longlong)local_78 + (ulonglong)uVar12);
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar9);
      }
      if (iVar10 != 0) {
        iVar19 = 0;
        do {
          uVar12 = *(uint *)(param_1 + 0x130);
          lVar15 = param_2[1];
          if ((longlong)(int)lVar15 != 0) {
            lVar4 = *param_2;
            lVar13 = 0;
            pvVar17 = local_80;
            do {
              lVar20 = *(longlong *)(lVar4 + lVar13);
              iVar9 = *(int *)(lVar20 + 0x120);
              memcpy(pvVar17,(void *)((ulonglong)(uint)(*(int *)(lVar20 + 0x130) * iVar19) +
                                     *(longlong *)(lVar20 + 0x38)),(longlong)iVar9 * 2);
              pvVar17 = (void *)((longlong)pvVar17 + (longlong)iVar9 * 2);
              lVar13 = lVar13 + 8;
            } while ((longlong)(int)lVar15 * 8 != lVar13);
          }
          local_80 = (void *)((longlong)local_80 + (ulonglong)uVar12);
          iVar19 = iVar19 + 1;
        } while (iVar19 != iVar10);
      }
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
      iVar19 = (int)plVar5[1];
      if (0 < iVar19) {
        lVar15 = 0;
        do {
          if ((longlong)(int)param_2[1] != 0) {
            plVar16 = (longlong *)(lVar15 * 0xc + *plVar5);
            puVar14 = (ushort *)(lVar15 * 0x20 + plVar5[2]);
            plVar11 = (longlong *)*param_2;
            plVar1 = plVar11 + (int)param_2[1];
            uVar21 = 0;
            do {
              lVar4 = *plVar11;
              if (*(int *)(lVar4 + 0x120) != 0) {
                plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8);
                if ((longlong)(int)plVar6[1] != 0) {
                  lVar13 = 0;
LAB_1481ba253:
                  if ((*(longlong *)(*plVar6 + lVar13) != *plVar16) ||
                     (*(int *)(*plVar6 + 8 + lVar13) != (int)plVar16[1])) goto LAB_1481ba268;
                  iVar19 = (int)(lVar13 >> 2) * -0x55555555;
                  if (iVar19 != -1) {
                    lVar13 = plVar6[2];
                    lVar20 = (longlong)iVar19 * 0x20;
                    if (puVar14[4] != 0) {
                      uVar12 = 0;
                      do {
                        memcpy((void *)((longlong)local_70 +
                                       (ulonglong)((*puVar14 + uVar12) * *(int *)(param_1 + 0x128))
                                       + uVar21 * 4),
                               (void *)((ulonglong)
                                        ((*(ushort *)(lVar13 + lVar20) + uVar12) *
                                        *(int *)(lVar4 + 0x128)) + *(longlong *)(lVar4 + 0x18)),
                               (ulonglong)*(uint *)(lVar4 + 0x120) << 2);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < puVar14[4]);
                    }
                    if (puVar14[5] != 0) {
                      uVar12 = 0;
                      do {
                        memcpy((void *)((longlong)local_78 +
                                       (ulonglong)((puVar14[1] + uVar12) * *(int *)(param_1 + 300))
                                       + uVar21 * 4),
                               (void *)((ulonglong)
                                        ((*(ushort *)(lVar13 + 2 + lVar20) + uVar12) *
                                        *(int *)(lVar4 + 300)) + *(longlong *)(lVar4 + 0x28)),
                               (ulonglong)*(uint *)(lVar4 + 0x120) << 2);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < puVar14[5]);
                    }
                    if (puVar14[6] != 0) {
                      uVar12 = 0;
                      do {
                        memcpy((void *)((longlong)local_80 +
                                       (ulonglong)
                                       ((puVar14[2] + uVar12) * *(int *)(param_1 + 0x130)) +
                                       uVar21 * 2),
                               (void *)((ulonglong)
                                        ((*(ushort *)(lVar13 + 4 + lVar20) + uVar12) *
                                        *(int *)(lVar4 + 0x130)) + *(longlong *)(lVar4 + 0x38)),
                               (ulonglong)*(uint *)(lVar4 + 0x120) * 2);
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < puVar14[6]);
                    }
                    goto LAB_1481ba336;
                  }
                }
LAB_1481ba271:
                if (puVar14[4] != 0) {
                  uVar12 = 0;
                  do {
                    memset((void *)((longlong)local_70 +
                                   (ulonglong)((*puVar14 + uVar12) * *(int *)(param_1 + 0x128)) +
                                   uVar21 * 4),0,(ulonglong)*(uint *)(lVar4 + 0x120) << 2);
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < puVar14[4]);
                }
                if (puVar14[5] != 0) {
                  uVar12 = 0;
                  do {
                    memset((void *)((longlong)local_78 +
                                   (ulonglong)((puVar14[1] + uVar12) * *(int *)(param_1 + 300)) +
                                   uVar21 * 4),0,(ulonglong)*(uint *)(lVar4 + 0x120) << 2);
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < puVar14[5]);
                }
                if (puVar14[6] != 0) {
                  uVar12 = 0;
                  do {
                    memset((void *)((longlong)local_80 +
                                   (ulonglong)((puVar14[2] + uVar12) * *(int *)(param_1 + 0x130)) +
                                   uVar21 * 2),0,(ulonglong)*(uint *)(lVar4 + 0x120) * 2);
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < puVar14[6]);
                }
LAB_1481ba336:
                uVar21 = (ulonglong)(uint)((int)uVar21 + *(int *)(lVar4 + 0x120));
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar1);
            iVar19 = (int)plVar5[1];
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar19);
      }
    }
    if (local_70 != (void *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      if (*(char *)(param_4 + 0x69) == '\0') {
        FUN_14002049c(param_4,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
        FUN_14002049c(param_4,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
      }
    }
    if (local_78 != (void *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      if (*(char *)(param_4 + 0x69) == '\0') {
        FUN_14002049c(param_4,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
        FUN_14002049c(param_4,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
      }
    }
    if (local_80 != (void *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0xf0);
      if (*(char *)(param_4 + 0x69) == '\0') {
        FUN_14002049c(param_4,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
        FUN_14002049c(param_4,0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001481ba56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_4,uVar7);
      return;
    }
  }
  return;
LAB_1481ba268:
  lVar13 = lVar13 + 0xc;
  if ((longlong)(int)plVar6[1] * 0xc == lVar13) goto LAB_1481ba271;
  goto LAB_1481ba253;
}



// FUNCTION 1481ba61e FUN_1481ba61e body=331 status=ok
// SIG undefined FUN_1481ba61e(void)

void FUN_1481ba61e(longlong *param_1)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < (int)param_1[2]) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 8);
    lVar6 = 0;
    do {
      lVar3 = param_1[1];
      lVar7 = lVar6 * 0x20;
      lVar5 = *(longlong *)(lVar2 + 0x10);
      puVar1 = (ushort *)(lVar7 + lVar5);
      FUN_140121138();
      lVar3 = *(longlong *)(lVar3 + 0x10 + lVar7);
      if (*(short *)(lVar5 + 8 + lVar7) != 0) {
        uVar4 = 0;
        do {
          *(undefined4 *)(lVar3 + (ulonglong)*(uint *)(*(longlong *)(puVar1 + 8) + uVar4 * 4)) =
               *(undefined4 *)
                ((ulonglong)(((uint)*puVar1 + (int)uVar4) * *(int *)(*param_1 + 0x128)) +
                 *(longlong *)(*param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 3) * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < puVar1[4]);
      }
      if (puVar1[5] != 0) {
        lVar5 = 0;
        do {
          *(undefined4 *)
           (lVar3 + (ulonglong)
                    *(uint *)((ulonglong)puVar1[4] * 8 + *(longlong *)(puVar1 + 8) + lVar5 * 4)) =
               *(undefined4 *)
                ((ulonglong)(((uint)puVar1[1] + (int)lVar5) * *(int *)(*param_1 + 300)) +
                 *(longlong *)(*param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 3) * 4);
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < (uint)puVar1[5]);
      }
      if (puVar1[6] != 0) {
        lVar5 = 0;
        do {
          *(undefined2 *)
           (lVar3 + (ulonglong)
                    *(uint *)((ulonglong)((uint)puVar1[5] + (uint)puVar1[4]) * 8 +
                              *(longlong *)(puVar1 + 8) + lVar5 * 4)) =
               *(undefined2 *)
                ((ulonglong)(((uint)puVar1[2] + (int)lVar5) * *(int *)(*param_1 + 0x130)) +
                 *(longlong *)(*param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 3) * 2);
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < (uint)puVar1[6]);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[2]);
  }
  return;
}



// FUNCTION 1481ba76a FUN_1481ba76a body=219 status=ok
// SIG undefined FUN_1481ba76a(void)

undefined8 FUN_1481ba76a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1,&local_30);
  FUN_144a882a8(param_2,&local_30,&DAT_149e06140);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)FUN_144741050(param_1 + 8);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(&local_30,L"(null)");
  }
  else {
    FUN_1481f8ff2(&local_30,*(longlong *)(param_1 + 0x10),*puVar2);
  }
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,&DAT_149e06144,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ba846 FUN_1481ba846 body=228 status=ok
// SIG undefined FUN_1481ba846(void)

void FUN_1481ba846(longlong *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14017aeb5(param_1[2],(int)param_1[3]);
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1481c54fc(param_1 + 2,0);
  }
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = (longlong)(int)param_1[1] * 0xc;
    lVar4 = *param_1 + 8;
    do {
      iVar2 = FUN_1481ba92a(param_1 + 2);
      puVar1 = (undefined2 *)(param_1[2] + (longlong)iVar2 * 0x20);
      uVar3 = FUN_144741050(lVar4);
      uVar3 = FUN_144a64b50(uVar3);
      FUN_1481f9ca2(puVar1 + 4,uVar3);
      *puVar1 = *(undefined2 *)((longlong)param_1 + 0x2c);
      puVar1[1] = (short)param_1[6];
      puVar1[2] = *(undefined2 *)((longlong)param_1 + 0x34);
      *(int *)((longlong)param_1 + 0x2c) =
           *(int *)((longlong)param_1 + 0x2c) + (uint)(ushort)puVar1[4];
      *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)(ushort)puVar1[5];
      *(int *)((longlong)param_1 + 0x34) =
           *(int *)((longlong)param_1 + 0x34) + (uint)(ushort)puVar1[6];
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  FUN_148073748(param_1);
  return;
}



// FUNCTION 1481ba92a FUN_1481ba92a body=58 status=ok
// SIG undefined FUN_1481ba92a(void)

int FUN_1481ba92a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1481c5574(param_1,iVar1);
  }
  FUN_1481c555c((longlong)iVar1 * 0x20 + *param_1);
  return iVar1;
}



// FUNCTION 1481ba964 FUN_1481ba964 body=136 status=ok
// SIG undefined FUN_1481ba964(void)

void FUN_1481ba964(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x168) != 0) && (*(longlong **)(param_1 + 0x160) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x30))();
    if (cVar1 != '\0') {
      local_48 = 0;
      local_38 = &PTR_LAB_14adf33e0;
      local_58 = &LAB_143a803b0;
      local_30 = param_1;
      FUN_1407461b0(1);
      goto LAB_1481ba9d0;
    }
  }
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
LAB_1481ba9d0:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ba9ee FUN_1481ba9ee body=1518 status=ok
// SIG undefined FUN_1481ba9ee(void)

void FUN_1481ba9ee(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_2a8 [32];
  ulonglong local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  ulonglong local_270;
  undefined8 *local_268;
  longlong local_260;
  undefined8 local_258;
  ulonglong local_250;
  undefined8 *local_248;
  undefined4 local_240;
  undefined8 *local_238;
  uint local_230;
  undefined8 *local_228;
  undefined4 local_220;
  code *local_218 [2];
  undefined8 *local_208;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined1 local_1a0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  undefined8 local_98;
  int local_90 [14];
  undefined8 *local_58;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar8 = *(longlong *)(param_3 + 0x28);
  lVar12 = *(longlong *)(*(longlong *)(param_4 + 0x50) + 0x78);
  if ((lVar8 == 0 || lVar12 == 0) || (*(int *)(lVar12 + 0x5c) == -1)) {
    lVar8 = FUN_144a73d22(param_1 + 4,1);
    FUN_14009337e(lVar8,0,0);
    *(undefined4 *)(lVar8 + 0x120) = 0;
    LOCK();
    if (*(int *)(param_1[0x14] + 8) == -1) {
      *(int *)(param_1[0x14] + 8) = 0;
    }
    UNLOCK();
    param_1[0x13] = param_1[0x14];
    param_1[0x14] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2a8);
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 1;
  uStack_4c = 5;
  local_a8 = *(undefined8 *)(param_3 + 0x58);
  local_a0[0] = *(int *)(lVar12 + 0x5c) << 2;
  local_a0[1] = 4;
  uVar18 = 1;
  local_274 = 0xffffffff;
  if (*(int *)(lVar12 + 0x78) != 0) {
    local_50 = 2;
    uStack_4c = 5;
    local_98 = *(undefined8 *)(lVar12 + 0x60);
    local_90[0] = 0;
    local_90[1] = *(int *)(lVar12 + 0x78);
    local_274 = 1;
    uVar18 = 2;
  }
  iVar6 = *(int *)(lVar12 + 0x108);
  if (iVar6 == 0) {
    uVar13 = uVar18;
    uVar18 = 0xffffffff;
  }
  else {
    local_50 = (int)uVar18 + 1;
    uVar13 = (ulonglong)local_50;
    uStack_4c = 5;
    uVar11 = (ulonglong)(uint)((int)uVar18 << 4);
    *(undefined8 *)((longlong)&local_a8 + uVar11) = *(undefined8 *)(lVar12 + 0xf0);
    *(undefined4 *)((longlong)local_a0 + uVar11) = 0;
    *(int *)((longlong)local_a0 + uVar11 + 4) = iVar6;
  }
  iVar6 = *(int *)(lVar12 + 0xa8);
  if (iVar6 == 0) {
    local_288 = uVar13;
    uVar13 = 0xffffffff;
  }
  else {
    local_50 = (int)uVar13 + 1;
    uStack_4c = 5;
    uVar11 = (ulonglong)(uint)((int)uVar13 << 4);
    *(undefined8 *)((longlong)&local_a8 + uVar11) = *(undefined8 *)(lVar12 + 0x90);
    *(undefined4 *)((longlong)local_a0 + uVar11) = 0;
    *(int *)((longlong)local_a0 + uVar11 + 4) = iVar6;
    local_288 = (ulonglong)local_50;
  }
  uStack_4c = 5;
  iVar6 = *(int *)(lVar12 + 0xd8);
  uVar7 = (uint)local_288;
  if (iVar6 == 0) {
    local_288 = 0xffffffff;
  }
  else {
    local_50 = uVar7 + 1;
    uStack_4c = 5;
    if (5 < uVar7 + 1) {
      FUN_1481c55fa(&local_a8,local_288);
      iVar6 = *(int *)(lVar12 + 0xd8);
    }
    puVar10 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      puVar10 = &local_a8;
    }
    lVar15 = (longlong)(int)uVar7;
    puVar10[lVar15 * 2] = *(undefined8 *)(lVar12 + 0xc0);
    *(undefined4 *)(puVar10 + lVar15 * 2 + 1) = 0;
    *(int *)((longlong)puVar10 + lVar15 * 0x10 + 0xc) = iVar6;
    uVar7 = local_50;
  }
  uVar11 = local_288;
  local_278 = *(undefined4 *)(lVar12 + 0x128);
  local_280 = *(undefined4 *)(lVar12 + 300);
  local_27c = *(undefined4 *)(lVar12 + 0x130);
  puVar10 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    puVar10 = &local_a8;
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0x500000001;
  local_1c0 = *puVar10;
  local_1d0 = 0xffffffffffffffff;
  local_1c8 = 0xffffffff;
  local_1b8 = 2;
  local_1b4 = 0x80000000f0;
  local_1ac = 0;
  local_1a0 = 0;
  local_250 = uVar13;
  if ((int)uVar7 < 2) {
    local_b0._0_4_ = 1;
  }
  else {
    uVar13 = 1;
    local_270 = uVar18;
    local_268 = param_1;
    local_260 = lVar8;
    local_258 = param_2;
    do {
      uVar18 = local_b0;
      uVar14 = 0x70;
      if (uVar13 == uVar11) {
        uVar14 = 0x10;
      }
      puVar10 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar10 = &local_a8;
      }
      lVar8 = (longlong)(int)local_b0;
      uVar7 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,uVar7);
      if (local_b0._4_4_ < uVar7) {
        FUN_1481c56ee(&local_1d0,uVar18 & 0xffffffff);
      }
      puVar9 = local_b8;
      if (local_b8 == (undefined8 *)0x0) {
        puVar9 = &local_1d0;
      }
      uVar17 = puVar10[uVar13 * 2];
      puVar9[lVar8 * 7] = 0xffffffffffffffff;
      *(undefined4 *)(puVar9 + lVar8 * 7 + 1) = 0xffffffff;
      puVar9[lVar8 * 7 + 2] = uVar17;
      *(undefined1 *)(puVar9 + lVar8 * 7 + 3) = 2;
      *(undefined4 *)((longlong)puVar9 + lVar8 * 0x38 + 0x1c) = uVar14;
      puVar9[lVar8 * 7 + 4] = 0x80;
      *(undefined1 *)(puVar9 + lVar8 * 7 + 6) = 0;
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)(int)local_50);
    param_1 = local_268;
    param_2 = local_258;
    lVar8 = local_260;
    uVar18 = local_270;
  }
  local_228 = local_b8;
  if (local_b8 == (undefined8 *)0x0) {
    local_228 = &local_1d0;
  }
  local_220 = (int)local_b0;
  FUN_144760590(param_2,&local_228,0);
  plVar16 = (longlong *)param_1[1];
  bVar4 = true;
  if (plVar16 == (longlong *)0x0) {
LAB_1481bae34:
    uVar17 = 0;
    plVar16 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar16[1];
    do {
      if (iVar6 == 0) goto LAB_1481bae34;
      LOCK();
      iVar5 = (int)plVar16[1];
      bVar19 = iVar6 == iVar5;
      if (bVar19) {
        *(int *)(plVar16 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar19);
    uVar17 = *param_1;
    bVar4 = false;
  }
  local_218[0] = (code *)0x0;
  local_208 = (undefined8 *)FUN_14001cc68(0x38,8);
  *local_208 = &PTR_FUN_14adf3400;
  local_208[1] = uVar17;
  local_208[2] = plVar16;
  if (!bVar4) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_208 + 3) = local_274;
  *(int *)((longlong)local_208 + 0x1c) = (int)uVar18;
  *(int *)(local_208 + 4) = (int)local_250;
  *(undefined4 *)((longlong)local_208 + 0x24) = local_278;
  *(undefined4 *)(local_208 + 5) = local_280;
  *(undefined4 *)((longlong)local_208 + 0x2c) = local_27c;
  *(int *)(local_208 + 6) = (int)local_288;
  if (local_208 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_218[0] = FUN_143a8040c;
  }
  local_238 = &local_a8;
  if (local_58 != (undefined8 *)0x0) {
    local_238 = local_58;
  }
  local_230 = local_50;
  FUN_1481c8e40(lVar8,param_2,&local_238,local_218);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  puVar10 = local_b8;
  if (local_b8 == (undefined8 *)0x0) {
    puVar10 = &local_1d0;
  }
  lVar8 = (longlong)(int)local_b0;
  local_240 = 0;
  if (lVar8 != 0) {
    lVar12 = 0;
    do {
      puVar3 = (ulonglong *)((longlong)puVar10 + lVar12 + 0x1c);
      *puVar3 = *puVar3 << 0x20 | *puVar3 >> 0x20;
      lVar12 = lVar12 + 0x38;
    } while (lVar8 * 0x38 - lVar12 != 0);
    local_240 = (int)local_b0;
  }
  local_248 = local_b8;
  if (local_b8 == (undefined8 *)0x0) {
    local_248 = &local_1d0;
  }
  FUN_144760590(param_2,&local_248,0);
  FUN_1481baff8(&local_1d0);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481baff8 FUN_1481baff8 body=62 status=ok
// SIG undefined FUN_1481baff8(void)

void FUN_1481baff8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bb036 FUN_1481bb036 body=278 status=ok
// SIG undefined FUN_1481bb036(void)

void FUN_1481bb036(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_3;
  if ((*(int *)(lVar3 + 0x78) == 0) && (*(int *)(lVar3 + 0xa8) == 0)) {
    iVar2 = *(int *)(lVar3 + 0x108);
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
    if (iVar2 == 0) {
      lVar3 = *param_3;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8);
      local_48 = *(undefined4 *)(lVar4 + 0x34);
      local_58 = *(undefined4 *)(lVar4 + 0x2c);
      local_50 = *(undefined4 *)(lVar4 + 0x30);
      local_60 = *(undefined4 *)(lVar3 + 0x130);
      local_68 = *(undefined4 *)(lVar3 + 300);
      local_70 = *(undefined4 *)(lVar3 + 0x128);
      local_78 = *(longlong **)(lVar3 + 0x38);
      FUN_1481bb740(param_1,*(undefined4 *)(lVar3 + 0x120),*(undefined8 *)(lVar3 + 0x18),
                    *(undefined8 *)(lVar3 + 0x28));
      FUN_1481bb83a(param_1);
      goto LAB_1481bb11d;
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
  }
  local_40 = *param_3;
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_78 = &local_40;
  FUN_1481bb14e(param_1,param_2,param_4,param_5);
LAB_1481bb11d:
  if (*param_3 != 0) {
    LOCK();
    piVar1 = (int *)(*param_3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bb14e FUN_1481bb14e body=1520 status=ok
// SIG undefined FUN_1481bb14e(void)

void FUN_1481bb14e(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_2b8 [40];
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  ulonglong local_270;
  ulonglong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined4 local_240;
  undefined8 *local_238;
  undefined4 local_230;
  undefined8 *local_228;
  undefined4 local_220;
  code *local_218 [2];
  undefined8 *local_208;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined1 local_1a0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  undefined8 local_98;
  int local_90 [14];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar16 = *param_5;
  if ((param_3 == 0 || lVar16 == 0) || (*(int *)(lVar16 + 0x5c) == -1)) {
    FUN_1481bb83a();
  }
  else {
    local_58 = (undefined8 *)0x0;
    local_50 = 0x500000001;
    local_a8 = *(undefined8 *)(param_4 + 0x20);
    local_a0[0] = *(int *)(lVar16 + 0x5c) << 2;
    local_a0[1] = 4;
    uVar13 = 1;
    local_274 = 0xffffffff;
    if (*(int *)(lVar16 + 0x78) != 0) {
      local_50 = 0x500000002;
      local_98 = *(undefined8 *)(lVar16 + 0x60);
      local_90[0] = 0;
      local_90[1] = *(int *)(lVar16 + 0x78);
      local_274 = 1;
      uVar13 = 2;
    }
    iVar5 = *(int *)(lVar16 + 0x108);
    if (iVar5 == 0) {
      uVar9 = 0xffffffff;
      uVar10 = uVar13;
    }
    else {
      uVar6 = (int)uVar13 + 1;
      uVar10 = (ulonglong)uVar6;
      local_50 = CONCAT44(local_50._4_4_,uVar6);
      uVar9 = (ulonglong)(uint)((int)uVar13 << 4);
      *(undefined8 *)((longlong)&local_a8 + uVar9) = *(undefined8 *)(lVar16 + 0xf0);
      *(undefined4 *)((longlong)local_a0 + uVar9) = 0;
      *(int *)((longlong)local_a0 + uVar9 + 4) = iVar5;
      uVar9 = uVar13;
    }
    iVar5 = *(int *)(lVar16 + 0xa8);
    if (iVar5 == 0) {
      local_270 = 0xffffffff;
      uVar13 = uVar10;
    }
    else {
      uVar6 = (int)uVar10 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar6);
      uVar13 = (ulonglong)(uint)((int)uVar10 << 4);
      *(undefined8 *)((longlong)&local_a8 + uVar13) = *(undefined8 *)(lVar16 + 0x90);
      *(undefined4 *)((longlong)local_a0 + uVar13) = 0;
      *(int *)((longlong)local_a0 + uVar13 + 4) = iVar5;
      uVar13 = (ulonglong)uVar6;
      local_270 = uVar10;
    }
    iVar14 = (int)uVar13;
    iVar5 = *(int *)(lVar16 + 0xd8);
    uVar10 = 0xffffffff;
    local_250 = param_1;
    if (iVar5 != 0) {
      local_50 = CONCAT44(local_50._4_4_,iVar14 + 1U);
      if (local_50._4_4_ < iVar14 + 1U) {
        FUN_1481c55fa(&local_a8,uVar13);
        iVar5 = *(int *)(lVar16 + 0xd8);
      }
      puVar8 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar8 = &local_a8;
      }
      lVar12 = (longlong)iVar14;
      puVar8[lVar12 * 2] = *(undefined8 *)(lVar16 + 0xc0);
      *(undefined4 *)(puVar8 + lVar12 * 2 + 1) = 0;
      *(int *)((longlong)puVar8 + lVar12 * 0x10 + 0xc) = iVar5;
      lVar16 = *param_5;
      uVar10 = uVar13;
      iVar14 = (int)local_50;
    }
    local_27c = *(undefined4 *)(lVar16 + 0x128);
    local_278 = *(undefined4 *)(lVar16 + 0x130);
    local_280 = *(undefined4 *)(lVar16 + 300);
    lVar12 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 8);
    local_284 = *(undefined4 *)(lVar12 + 0x2c);
    local_288 = *(undefined4 *)(lVar12 + 0x30);
    local_28c = *(undefined4 *)(lVar12 + 0x34);
    local_290 = *(undefined4 *)(lVar16 + 0x124);
    puVar8 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      puVar8 = &local_a8;
    }
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0x500000001;
    local_1c0 = *puVar8;
    local_1d0 = 0xffffffffffffffff;
    local_1c8 = 0xffffffff;
    local_1b8 = 2;
    local_1b4 = 0x80000000f0;
    local_1ac = 0;
    local_1a0 = 0;
    if (iVar14 < 2) {
      local_b0._0_4_ = 1;
    }
    else {
      uVar13 = 1;
      local_268 = uVar9;
      local_260 = param_3;
      local_258 = param_2;
      do {
        uVar9 = local_b0;
        uVar11 = 0x70;
        if (uVar13 == uVar10) {
          uVar11 = 0x10;
        }
        puVar8 = local_58;
        if (local_58 == (undefined8 *)0x0) {
          puVar8 = &local_a8;
        }
        lVar16 = (longlong)(int)local_b0;
        uVar6 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,uVar6);
        if (local_b0._4_4_ < uVar6) {
          FUN_1481c56ee(&local_1d0,uVar9 & 0xffffffff);
        }
        puVar7 = local_b8;
        if (local_b8 == (undefined8 *)0x0) {
          puVar7 = &local_1d0;
        }
        uVar15 = puVar8[uVar13 * 2];
        puVar7[lVar16 * 7] = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + lVar16 * 7 + 1) = 0xffffffff;
        puVar7[lVar16 * 7 + 2] = uVar15;
        *(undefined1 *)(puVar7 + lVar16 * 7 + 3) = 2;
        *(undefined4 *)((longlong)puVar7 + lVar16 * 0x38 + 0x1c) = uVar11;
        puVar7[lVar16 * 7 + 4] = 0x80;
        *(undefined1 *)(puVar7 + lVar16 * 7 + 6) = 0;
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < (longlong)(int)local_50);
      param_3 = local_260;
      param_2 = local_258;
      uVar9 = local_268;
    }
    local_228 = local_b8;
    if (local_b8 == (undefined8 *)0x0) {
      local_228 = &local_1d0;
    }
    local_220 = (int)local_b0;
    FUN_144760590(param_2,&local_228,0);
    plVar17 = (longlong *)local_250[1];
    bVar4 = true;
    if (plVar17 == (longlong *)0x0) {
LAB_1481bb58a:
      uVar15 = 0;
      plVar17 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar17[1];
      do {
        if (iVar5 == 0) goto LAB_1481bb58a;
        LOCK();
        iVar14 = (int)plVar17[1];
        bVar18 = iVar5 == iVar14;
        if (bVar18) {
          *(int *)(plVar17 + 1) = iVar5 + 1;
          iVar14 = iVar5;
        }
        iVar5 = iVar14;
        UNLOCK();
      } while (!bVar18);
      uVar15 = *local_250;
      bVar4 = false;
    }
    local_218[0] = (code *)0x0;
    local_208 = (undefined8 *)FUN_14001cc68(0x48,8);
    *local_208 = &PTR_FUN_14adf3440;
    local_208[1] = uVar15;
    local_208[2] = plVar17;
    if (!bVar4) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(local_208 + 3) = 0;
    *(undefined4 *)((longlong)local_208 + 0x1c) = local_290;
    *(undefined4 *)(local_208 + 4) = local_274;
    *(int *)((longlong)local_208 + 0x24) = (int)uVar9;
    *(int *)(local_208 + 5) = (int)local_270;
    *(undefined4 *)((longlong)local_208 + 0x2c) = local_27c;
    *(undefined4 *)(local_208 + 6) = local_280;
    *(undefined4 *)((longlong)local_208 + 0x34) = local_278;
    *(undefined4 *)(local_208 + 7) = local_284;
    *(undefined4 *)((longlong)local_208 + 0x3c) = local_288;
    *(undefined4 *)(local_208 + 8) = local_28c;
    if (local_208 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_218[0] = FUN_143a80986;
    }
    local_238 = &local_a8;
    if (local_58 != (undefined8 *)0x0) {
      local_238 = local_58;
    }
    local_230 = (int)local_50;
    FUN_1481c8e40(param_3,param_2,&local_238,local_218);
    if (!bVar4) {
      LOCK();
      plVar2 = plVar17 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    puVar8 = local_b8;
    if (local_b8 == (undefined8 *)0x0) {
      puVar8 = &local_1d0;
    }
    lVar16 = (longlong)(int)local_b0;
    local_240 = 0;
    if (lVar16 != 0) {
      lVar12 = 0;
      do {
        puVar3 = (ulonglong *)((longlong)puVar8 + lVar12 + 0x1c);
        *puVar3 = *puVar3 << 0x20 | *puVar3 >> 0x20;
        lVar12 = lVar12 + 0x38;
      } while (lVar16 * 0x38 - lVar12 != 0);
      local_240 = (int)local_b0;
    }
    local_248 = local_b8;
    if (local_b8 == (undefined8 *)0x0) {
      local_248 = &local_1d0;
    }
    FUN_144760590(param_2,&local_248,0);
    FUN_1481baff8(&local_1d0);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    LOCK();
    piVar1 = (int *)(*param_5 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481bb740 FUN_1481bb740 body=249 status=ok
// SIG undefined FUN_1481bb740(void)

void FUN_1481bb740(longlong param_1,undefined4 param_2,void *param_3,void *param_4,void *param_5,
                  int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  if (param_3 != (void *)0x0) {
    FUN_144a12820(param_1 + 0x28,param_9 * param_6,1);
    memcpy(*(void **)(param_1 + 0x28),param_3,(longlong)(param_9 * param_6));
  }
  if (param_4 != (void *)0x0) {
    FUN_144a127d2(param_1 + 0x38,param_10 * param_7,1);
    memcpy(*(void **)(param_1 + 0x38),param_4,(longlong)(param_10 * param_7));
  }
  if (param_5 != (void *)0x0) {
    FUN_1481bb996(param_1 + 0x48);
    memcpy(*(void **)(param_1 + 0x48),param_5,(longlong)(param_11 * param_8));
  }
  *(undefined4 *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_6;
  *(int *)(param_1 + 0x60) = param_7;
  *(int *)(param_1 + 100) = param_8;
  *(int *)(param_1 + 0x68) = param_9;
  *(int *)(param_1 + 0x6c) = param_10;
  *(int *)(param_1 + 0x70) = param_11;
  return;
}



// FUNCTION 1481bb83a FUN_1481bb83a body=268 status=ok
// SIG undefined FUN_1481bb83a(void)

void FUN_1481bb83a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 4) == 0) || ((longlong *)param_1[3] == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)param_1[3] + 0x30))(), cVar5 == '\0')) {
    LOCK();
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    UNLOCK();
  }
  else {
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1481bb912:
      local_48 = 0;
      local_38 = &PTR_LAB_14adf3420;
      local_30 = 0;
      plStack_28 = (longlong *)0x0;
      local_58 = FUN_143a8087e;
      FUN_1407461b0(1);
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1481bb912;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar6 == iVar4;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar7);
      local_30 = *param_1;
      local_48 = 0;
      local_38 = &PTR_LAB_14adf3420;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = FUN_143a8087e;
      plStack_28 = plVar3;
      FUN_1407461b0(1);
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
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481bb948 FUN_1481bb948 body=77 status=ok
// SIG undefined FUN_1481bb948(void)

void FUN_1481bb948(longlong param_1,undefined8 param_2)

{
  FUN_1481b9930(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x48),0,*(undefined4 *)(param_1 + 0x58),
                *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                *(undefined4 *)(param_1 + 100));
  return;
}



// FUNCTION 1481bb996 FUN_1481bb996 body=71 status=ok
// SIG undefined FUN_1481bb996(void)

void FUN_1481bb996(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146310414();
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
      FUN_1481c5802();
      return;
    }
  }
  return;
}



// FUNCTION 1481bbb0c FUN_1481bbb0c body=103 status=ok
// SIG undefined FUN_1481bbb0c(void)

void FUN_1481bbb0c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bbb82 FUN_1481bbb82 body=148 status=ok
// SIG undefined FUN_1481bbb82(void)

undefined8 FUN_1481bbb82(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b6f35a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bbc9e FUN_1481bbc9e body=124 status=ok
// SIG undefined FUN_1481bbc9e(void)

void FUN_1481bbc9e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14ad42464);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bbd50 FUN_1481bbd50 body=143 status=ok
// SIG undefined FUN_1481bbd50(void)

void FUN_1481bbd50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14ad42464);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc78);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bbde0 FUN_1481bbde0 body=457 status=ok
// SIG undefined FUN_1481bbde0(void)

void FUN_1481bbde0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(local_40,"SpawnScript");
  FUN_1481bbfaa(&local_30,local_40,param_1);
  local_60 = 0;
  local_68 = 0;
  lVar1 = FUN_1481bc03d(param_2,local_30,8,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x118) = lVar1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  *(undefined1 *)(lVar1 + 0x30) = 3;
  FUN_1400b22c2(local_40,"UpdateScript");
  FUN_1481bbfaa(&local_48,local_40,param_1);
  local_60 = 0;
  local_68 = 0;
  lVar1 = FUN_1481bc03d(param_2,local_48,8,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0xf0) = lVar1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
    lVar1 = *(longlong *)(param_1 + 0xf0);
  }
  *(undefined1 *)(lVar1 + 0x30) = 5;
  FUN_1400b22c2(local_40,"GPUComputeScript");
  FUN_1481bbfaa(&local_50,local_40,param_1);
  local_60 = 0;
  local_68 = 0;
  lVar1 = FUN_1481bc03d(param_2,local_50,8,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x268) = lVar1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
    lVar1 = *(longlong *)(param_1 + 0x268);
  }
  *(undefined1 *)(lVar1 + 0x30) = 8;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bbfaa FUN_1481bbfaa body=146 status=ok
// SIG undefined FUN_1481bbfaa(void)

undefined8 FUN_1481bbfaa(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3[1];
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_140002266(&local_28,L"%s_%i_%i",puVar2,*param_3);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(param_1,iVar1,local_28,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bc03d FUN_1481bc03d body=217 status=ok
// SIG undefined FUN_1481bc03d(void)

undefined8
FUN_1481bc03d(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14585dcc6();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bc122 FUN_1481bc122 body=77 status=ok
// SIG undefined FUN_1481bc122(void)

void FUN_1481bc122(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481bc170 FUN_1481bc170 body=12 status=ok
// SIG undefined FUN_1481bc170(void)

void FUN_1481bc170(longlong param_1)

{
  FUN_1401e6e8e(param_1 + 0x90);
  return;
}



// FUNCTION 1481bc17c FUN_1481bc17c body=74 status=ok
// SIG undefined FUN_1481bc17c(void)

ulonglong FUN_1481bc17c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14018d992();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar3;
    bVar1 = FUN_1401225c0(lVar3,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1481bc1c6 FUN_1481bc1c6 body=61 status=ok
// SIG undefined FUN_1481bc1c6(void)

void FUN_1481bc1c6(longlong param_1)

{
  FUN_1404dc1e4(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1481bc204 FUN_1481bc204 body=119 status=ok
// SIG undefined FUN_1481bc204(void)

void FUN_1481bc204(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x340);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x33c) = 0;
    FUN_1481c5a40(param_1 + 0x2e8,0);
  }
  else {
    FUN_1403462ec(param_1 + 0x2e8,param_2);
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bc253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1481bc29a FUN_1481bc29a body=53 status=ok
// SIG undefined FUN_1481bc29a(void)

void FUN_1481bc29a(longlong param_1)

{
  FUN_1447f69b6(param_1 + 8);
  FUN_140d6793a(param_1 + -0x28,0x4000,0,DAT_14c872ce0,1);
  return;
}



// FUNCTION 1481bc2d0 FUN_1481bc2d0 body=53 status=ok
// SIG undefined FUN_1481bc2d0(void)

void FUN_1481bc2d0(longlong param_1)

{
  FUN_1447f69b6(param_1 + 8);
  FUN_140d6793a(param_1 + -0x28,0x4000,0,DAT_14c872ce0,1);
  return;
}



// FUNCTION 1481bc306 FUN_1481bc306 body=41 status=ok
// SIG undefined FUN_1481bc306(void)

void FUN_1481bc306(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEffectType.h",0x170,
                L"Pure virtual not implemented (%s)",L"CalculateSignificance");
  return;
}



// FUNCTION 1481bc330 FUN_1481bc330 body=45 status=ok
// SIG undefined FUN_1481bc330(void)

longlong FUN_1481bc330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1404dbe0e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bc360 FUN_1481bc360 body=88 status=ok
// SIG undefined FUN_1481bc360(void)

void FUN_1481bc360(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1481bc3ce FUN_1481bc3ce body=93 status=ok
// SIG undefined FUN_1481bc3ce(void)

void FUN_1481bc3ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeeab0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc42c FUN_1481bc42c body=93 status=ok
// SIG undefined FUN_1481bc42c(void)

void FUN_1481bc42c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeeab0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc48a FUN_1481bc48a body=126 status=ok
// SIG undefined FUN_1481bc48a(void)

void FUN_1481bc48a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeeab0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bc4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bc508 FUN_1481bc508 body=20 status=ok
// SIG undefined FUN_1481bc508(void)

undefined1 FUN_1481bc508(longlong param_1)

{
  FUN_140451dd0(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481bc51c FUN_1481bc51c body=29 status=ok
// SIG undefined FUN_1481bc51c(void)

undefined8 FUN_1481bc51c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bc54e FUN_1481bc54e body=93 status=ok
// SIG undefined FUN_1481bc54e(void)

void FUN_1481bc54e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeeb20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc5ac FUN_1481bc5ac body=93 status=ok
// SIG undefined FUN_1481bc5ac(void)

void FUN_1481bc5ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeeb20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc60a FUN_1481bc60a body=126 status=ok
// SIG undefined FUN_1481bc60a(void)

void FUN_1481bc60a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeeb20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bc679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bc692 FUN_1481bc692 body=20 status=ok
// SIG undefined FUN_1481bc692(void)

undefined1 FUN_1481bc692(longlong param_1)

{
  FUN_1481b84f0(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481bc766 FUN_1481bc766 body=163 status=ok
// SIG undefined FUN_1481bc766(void)

void FUN_1481bc766(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 8) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1481bc80a FUN_1481bc80a body=29 status=ok
// SIG undefined FUN_1481bc80a(void)

undefined8 FUN_1481bc80a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bc83c FUN_1481bc83c body=93 status=ok
// SIG undefined FUN_1481bc83c(void)

void FUN_1481bc83c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeec00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc89a FUN_1481bc89a body=93 status=ok
// SIG undefined FUN_1481bc89a(void)

void FUN_1481bc89a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeec00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bc8f8 FUN_1481bc8f8 body=126 status=ok
// SIG undefined FUN_1481bc8f8(void)

void FUN_1481bc8f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeec00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bc967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bc980 FUN_1481bc980 body=20 status=ok
// SIG undefined FUN_1481bc980(void)

undefined1 FUN_1481bc980(longlong param_1)

{
  FUN_143a75f82(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481bc994 FUN_1481bc994 body=29 status=ok
// SIG undefined FUN_1481bc994(void)

undefined8 FUN_1481bc994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bc9c6 FUN_1481bc9c6 body=93 status=ok
// SIG undefined FUN_1481bc9c6(void)

void FUN_1481bc9c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeec70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bca24 FUN_1481bca24 body=93 status=ok
// SIG undefined FUN_1481bca24(void)

void FUN_1481bca24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeec70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bca82 FUN_1481bca82 body=126 status=ok
// SIG undefined FUN_1481bca82(void)

void FUN_1481bca82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeec70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bcaf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bcb08 FUN_1481bcb08 body=19 status=ok
// SIG undefined FUN_1481bcb08(void)

undefined1 FUN_1481bcb08(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b8a90(param_2);
  return 1;
}



// FUNCTION 1481bcb1c FUN_1481bcb1c body=29 status=ok
// SIG undefined FUN_1481bcb1c(void)

undefined8 FUN_1481bcb1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bcb4e FUN_1481bcb4e body=93 status=ok
// SIG undefined FUN_1481bcb4e(void)

void FUN_1481bcb4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeece0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bcbac FUN_1481bcbac body=93 status=ok
// SIG undefined FUN_1481bcbac(void)

void FUN_1481bcbac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeece0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bcc0a FUN_1481bcc0a body=126 status=ok
// SIG undefined FUN_1481bcc0a(void)

void FUN_1481bcc0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeece0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bcc79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bcc90 FUN_1481bcc90 body=19 status=ok
// SIG undefined FUN_1481bcc90(void)

undefined1 FUN_1481bcc90(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b8b28(param_2);
  return 1;
}



// FUNCTION 1481bccaa FUN_1481bccaa body=29 status=ok
// SIG undefined FUN_1481bccaa(void)

undefined8 FUN_1481bccaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481bccdc FUN_1481bccdc body=93 status=ok
// SIG undefined FUN_1481bccdc(void)

void FUN_1481bccdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeedc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bcd3a FUN_1481bcd3a body=93 status=ok
// SIG undefined FUN_1481bcd3a(void)

void FUN_1481bcd3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adeedc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481bcd98 FUN_1481bcd98 body=126 status=ok
// SIG undefined FUN_1481bcd98(void)

void FUN_1481bcd98(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adeedc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481bce07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481bce1e FUN_1481bce1e body=19 status=ok
// SIG undefined FUN_1481bce1e(void)

undefined1 FUN_1481bce1e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481b9570(param_2);
  return 1;
}



// FUNCTION 1481bce32 FUN_1481bce32 body=163 status=ok
// SIG undefined FUN_1481bce32(void)

void FUN_1481bce32(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = (int)param_1[1];
  iVar5 = (int)param_2[1] + iVar4;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1406fc22e(param_2);
    iVar4 = (int)param_1[1];
  }
  if (iVar4 != 0) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_146469efe(param_2,iVar5);
      }
      lVar3 = *param_2;
      lVar6 = (longlong)iVar5 * 0x20;
      *(undefined4 *)(lVar3 + 8 + lVar6) = *(undefined4 *)((undefined8 *)(lVar2 + lVar7) + 1);
      *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar7);
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar7 = lVar7 + 0xc;
    } while ((longlong)iVar4 * 0xc != lVar7);
  }
  return;
}



// FUNCTION 1481bcf42 FUN_1481bcf42 body=59 status=ok
// SIG undefined FUN_1481bcf42(void)

undefined8 FUN_1481bcf42(longlong *param_1)

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



// FUNCTION 1481bd038 FUN_1481bd038 body=70 status=ok
// SIG undefined FUN_1481bd038(void)

undefined8 FUN_1481bd038(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x15);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x15) = uVar1;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1481bd0a6 FUN_1481bd0a6 body=59 status=ok
// SIG undefined FUN_1481bd0a6(void)

undefined8 FUN_1481bd0a6(longlong *param_1)

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



// FUNCTION 1481bd0ec FUN_1481bd0ec body=37 status=ok
// SIG undefined FUN_1481bd0ec(void)

void FUN_1481bd0ec(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1481bd22c FUN_1481bd22c body=111 status=ok
// SIG undefined FUN_1481bd22c(void)

undefined8 FUN_1481bd22c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    FUN_1481bd3e0(param_2 + 0x20,param_3 + 0x20);
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    uVar5 = *(undefined4 *)(param_3 + 0x44);
    uVar6 = *(undefined4 *)(param_3 + 0x48);
    uVar7 = *(undefined4 *)(param_3 + 0x4c);
    uVar8 = *(undefined4 *)(param_3 + 0x50);
    uVar9 = *(undefined4 *)(param_3 + 0x54);
    uVar10 = *(undefined4 *)(param_3 + 0x58);
    uVar11 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    *(undefined4 *)(param_2 + 0x40) = uVar4;
    *(undefined4 *)(param_2 + 0x44) = uVar5;
    *(undefined4 *)(param_2 + 0x48) = uVar6;
    *(undefined4 *)(param_2 + 0x4c) = uVar7;
    *(undefined4 *)(param_2 + 0x50) = uVar8;
    *(undefined4 *)(param_2 + 0x54) = uVar9;
    *(undefined4 *)(param_2 + 0x58) = uVar10;
    *(undefined4 *)(param_2 + 0x5c) = uVar11;
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 1481bd2c4 FUN_1481bd2c4 body=59 status=ok
// SIG undefined FUN_1481bd2c4(void)

undefined8 FUN_1481bd2c4(longlong *param_1)

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



// FUNCTION 1481bd30a FUN_1481bd30a body=34 status=ok
// SIG undefined FUN_1481bd30a(void)

void FUN_1481bd30a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1481bd37a(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1481bd37a FUN_1481bd37a body=59 status=ok
// SIG undefined FUN_1481bd37a(void)

void FUN_1481bd37a(longlong *param_1)

{
  FUN_1481bd3b5(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bd3b5 FUN_1481bd3b5 body=43 status=ok
// SIG undefined FUN_1481bd3b5(void)

void FUN_1481bd3b5(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1481bd3e0 FUN_1481bd3e0 body=95 status=ok
// SIG undefined FUN_1481bd3e0(void)

undefined8 * FUN_1481bd3e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1481bd3b5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481bd440(param_1,iVar1);
      FUN_1481bd4a2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481bd440 FUN_1481bd440 body=98 status=ok
// SIG undefined FUN_1481bd440(void)

void FUN_1481bd440(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481bd4a2 FUN_1481bd4a2 body=134 status=ok
// SIG undefined FUN_1481bd4a2(void)

void FUN_1481bd4a2(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar3 + -1);
      _Src = (void *)puVar3[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = *puVar3;
      *(undefined8 *)((longlong)param_1 + 0x15) = *(undefined8 *)((longlong)puVar3 + 5);
      param_1[2] = uVar2;
      param_1 = param_1 + 4;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481bd54a FUN_1481bd54a body=44 status=ok
// SIG undefined FUN_1481bd54a(void)

void FUN_1481bd54a(undefined8 param_1,longlong *param_2)

{
  FUN_1481bd6a4(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bd58c FUN_1481bd58c body=84 status=ok
// SIG undefined FUN_1481bd58c(void)

undefined1 FUN_1481bd58c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481bd6ca(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1481bd608 FUN_1481bd608 body=59 status=ok
// SIG undefined FUN_1481bd608(void)

undefined8 FUN_1481bd608(longlong *param_1)

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



// FUNCTION 1481bd6a4 FUN_1481bd6a4 body=38 status=ok
// SIG undefined FUN_1481bd6a4(void)

void FUN_1481bd6a4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1481bd37a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1481bd6ca FUN_1481bd6ca body=95 status=ok
// SIG undefined FUN_1481bd6ca(void)

undefined8 * FUN_1481bd6ca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1481bd6a4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481bd72a(param_1,iVar1);
      FUN_1481bd799(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481bd72a FUN_1481bd72a body=111 status=ok
// SIG undefined FUN_1481bd72a(void)

void FUN_1481bd72a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481bd799 FUN_1481bd799 body=52 status=ok
// SIG undefined FUN_1481bd799(void)

void FUN_1481bd799(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481bd7ce(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 1481bd7ce FUN_1481bd7ce body=199 status=ok
// SIG undefined FUN_1481bd7ce(void)

undefined8 * FUN_1481bd7ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1481bd440(param_1 + 4,iVar1,0);
    FUN_1481bd4a2(param_1[4],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar6;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 1481bd896 FUN_1481bd896 body=50 status=ok
// SIG undefined FUN_1481bd896(void)

void FUN_1481bd896(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    FUN_1481bd6a4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1481bd93e FUN_1481bd93e body=42 status=ok
// SIG undefined FUN_1481bd93e(void)

void FUN_1481bd93e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1481bdac4(param_2);
  return;
}



// FUNCTION 1481bd97e FUN_1481bd97e body=82 status=ok
// SIG undefined FUN_1481bd97e(void)

undefined8 FUN_1481bd97e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481bdc98(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1481bd9f8 FUN_1481bd9f8 body=59 status=ok
// SIG undefined FUN_1481bd9f8(void)

undefined8 FUN_1481bd9f8(longlong *param_1)

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



// FUNCTION 1481bda3e FUN_1481bda3e body=55 status=ok
// SIG undefined FUN_1481bda3e(void)

void FUN_1481bda3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1481bdac4(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1481bdac4 FUN_1481bdac4 body=54 status=ok
// SIG undefined FUN_1481bdac4(void)

void FUN_1481bdac4(longlong *param_1)

{
  FUN_1481bdafa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bdafa FUN_1481bdafa body=352 status=ok
// SIG undefined FUN_1481bdafa(void)

void FUN_1481bdafa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1481bdc5c((longlong)iStack_54 * 0x48 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1403af08a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481bdc5c FUN_1481bdc5c body=59 status=ok
// SIG undefined FUN_1481bdc5c(void)

void FUN_1481bdc5c(longlong *param_1)

{
  FUN_1481bd6a4(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bdc98 FUN_1481bdc98 body=122 status=ok
// SIG undefined FUN_1481bdc98(void)

longlong FUN_1481bdc98(longlong param_1,longlong param_2)

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
    FUN_1481bdd12(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1481bdd12 FUN_1481bdd12 body=210 status=ok
// SIG undefined FUN_1481bdd12(void)

undefined8 * FUN_1481bdd12(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1481bdafa(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14021b4e8(param_1);
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
          FUN_1481bdde4(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(puVar4 + 0x10);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x12;
        puVar6 = puVar6 + 0x12;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1481bdde4 FUN_1481bdde4 body=105 status=ok
// SIG undefined FUN_1481bdde4(void)

undefined8 * FUN_1481bdde4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1481bde4e(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1481bde4e FUN_1481bde4e body=100 status=ok
// SIG undefined FUN_1481bde4e(void)

undefined8 * FUN_1481bde4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1481bd72a(param_1,iVar1,0);
    FUN_1481bd799(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return param_1;
}



// FUNCTION 1481bdf02 FUN_1481bdf02 body=42 status=ok
// SIG undefined FUN_1481bdf02(void)

void FUN_1481bdf02(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1481be06c(param_2);
  return;
}



// FUNCTION 1481bdf42 FUN_1481bdf42 body=54 status=ok
// SIG undefined FUN_1481bdf42(void)

undefined1 FUN_1481bdf42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481be246(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1481bdfa0 FUN_1481bdfa0 body=59 status=ok
// SIG undefined FUN_1481bdfa0(void)

undefined8 FUN_1481bdfa0(longlong *param_1)

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



// FUNCTION 1481bdfe6 FUN_1481bdfe6 body=55 status=ok
// SIG undefined FUN_1481bdfe6(void)

void FUN_1481bdfe6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1481be06c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1481be06c FUN_1481be06c body=54 status=ok
// SIG undefined FUN_1481be06c(void)

void FUN_1481be06c(longlong *param_1)

{
  FUN_1481be0a2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481be0a2 FUN_1481be0a2 body=347 status=ok
// SIG undefined FUN_1481be0a2(void)

void FUN_1481be0a2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1481be200((longlong)iStack_54 * 0x80 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14095c99c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481be200 FUN_1481be200 body=69 status=ok
// SIG undefined FUN_1481be200(void)

void FUN_1481be200(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1481bdac4(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481be246 FUN_1481be246 body=122 status=ok
// SIG undefined FUN_1481be246(void)

longlong FUN_1481be246(longlong param_1,longlong param_2)

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
    FUN_1481be2c0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1481be2c0 FUN_1481be2c0 body=215 status=ok
// SIG undefined FUN_1481be2c0(void)

undefined8 * FUN_1481be2c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1481be0a2(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140eca382(param_1);
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
          FUN_1481be398(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x1e) = *(undefined8 *)(puVar4 + 0x1e);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x20;
        puVar6 = puVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1481be398 FUN_1481be398 body=156 status=ok
// SIG undefined FUN_1481be398(void)

undefined8 * FUN_1481be398(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1481bdc98(param_1 + 2,param_2 + 2);
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 1481be4b6 FUN_1481be4b6 body=59 status=ok
// SIG undefined FUN_1481be4b6(void)

undefined8 FUN_1481be4b6(longlong *param_1)

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



// FUNCTION 1481be5d8 FUN_1481be5d8 body=59 status=ok
// SIG undefined FUN_1481be5d8(void)

undefined8 FUN_1481be5d8(longlong *param_1)

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



// FUNCTION 1481be6fa FUN_1481be6fa body=59 status=ok
// SIG undefined FUN_1481be6fa(void)

undefined8 FUN_1481be6fa(longlong *param_1)

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



// FUNCTION 1481be7d8 FUN_1481be7d8 body=60 status=ok
// SIG undefined FUN_1481be7d8(void)

undefined1 FUN_1481be7d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1481be83c FUN_1481be83c body=59 status=ok
// SIG undefined FUN_1481be83c(void)

undefined8 FUN_1481be83c(longlong *param_1)

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



// FUNCTION 1481be882 FUN_1481be882 body=37 status=ok
// SIG undefined FUN_1481be882(void)

void FUN_1481be882(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1481be948 FUN_1481be948 body=42 status=ok
// SIG undefined FUN_1481be948(void)

void FUN_1481be948(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1481be06c(param_2);
  return;
}



// FUNCTION 1481be988 FUN_1481be988 body=54 status=ok
// SIG undefined FUN_1481be988(void)

undefined1 FUN_1481be988(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481be246(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1481be9e6 FUN_1481be9e6 body=59 status=ok
// SIG undefined FUN_1481be9e6(void)

undefined8 FUN_1481be9e6(longlong *param_1)

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



// FUNCTION 1481bea2c FUN_1481bea2c body=55 status=ok
// SIG undefined FUN_1481bea2c(void)

void FUN_1481bea2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1481be06c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1481beb46 FUN_1481beb46 body=59 status=ok
// SIG undefined FUN_1481beb46(void)

undefined8 FUN_1481beb46(longlong *param_1)

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



// FUNCTION 1481bec28 FUN_1481bec28 body=73 status=ok
// SIG undefined FUN_1481bec28(void)

undefined1 FUN_1481bec28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481bec9a FUN_1481bec9a body=59 status=ok
// SIG undefined FUN_1481bec9a(void)

undefined8 FUN_1481bec9a(longlong *param_1)

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



// FUNCTION 1481bece0 FUN_1481bece0 body=38 status=ok
// SIG undefined FUN_1481bece0(void)

void FUN_1481bece0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1481bed84 FUN_1481bed84 body=63 status=ok
// SIG undefined FUN_1481bed84(void)

undefined1 FUN_1481bed84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481beeae(param_2,param_3);
    param_3 = param_3 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return 1;
}



// FUNCTION 1481bedec FUN_1481bedec body=59 status=ok
// SIG undefined FUN_1481bedec(void)

undefined8 FUN_1481bedec(longlong *param_1)

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



// FUNCTION 1481bee38 FUN_1481bee38 body=40 status=ok
// SIG undefined FUN_1481bee38(void)

void FUN_1481bee38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_145972a26(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 1481beeae FUN_1481beeae body=198 status=ok
// SIG undefined FUN_1481beeae(void)

undefined4 * FUN_1481beeae(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  uVar1 = param_2[0x1d];
  uVar2 = param_2[0x1e];
  uVar3 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  param_1[0x20] = param_2[0x20];
  FUN_1481bef74(param_1 + 0x22,param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  FUN_1481bef74(param_1 + 0x28,param_2 + 0x28);
  memcpy(param_1 + 0x2c,param_2 + 0x2c,400);
  return param_1;
}



// FUNCTION 1481bef74 FUN_1481bef74 body=95 status=ok
// SIG undefined FUN_1481bef74(void)

undefined8 * FUN_1481bef74(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145972abb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481befd4(param_1,iVar1);
      FUN_1481bf047(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481befd4 FUN_1481befd4 body=115 status=ok
// SIG undefined FUN_1481befd4(void)

void FUN_1481befd4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481bf047 FUN_1481bf047 body=144 status=ok
// SIG undefined FUN_1481bf047(void)

void FUN_1481bf047(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481bf120 FUN_1481bf120 body=59 status=ok
// SIG undefined FUN_1481bf120(void)

undefined8 FUN_1481bf120(longlong *param_1)

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



// FUNCTION 1481bf256 FUN_1481bf256 body=59 status=ok
// SIG undefined FUN_1481bf256(void)

undefined8 FUN_1481bf256(longlong *param_1)

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



// FUNCTION 1481bf33e FUN_1481bf33e body=54 status=ok
// SIG undefined FUN_1481bf33e(void)

undefined1 FUN_1481bf33e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481bf4cc(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1481bf39c FUN_1481bf39c body=59 status=ok
// SIG undefined FUN_1481bf39c(void)

undefined8 FUN_1481bf39c(longlong *param_1)

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



// FUNCTION 1481bf3e2 FUN_1481bf3e2 body=34 status=ok
// SIG undefined FUN_1481bf3e2(void)

void FUN_1481bf3e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1481bf452(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1481bf452 FUN_1481bf452 body=122 status=ok
// SIG undefined FUN_1481bf452(void)

void FUN_1481bf452(longlong *param_1)

{
  FUN_1447a1747(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bf4cc FUN_1481bf4cc body=69 status=ok
// SIG undefined FUN_1481bf4cc(void)

longlong FUN_1481bf4cc(longlong param_1,longlong param_2)

{
  FUN_140bee9ec();
  FUN_140bee9ec(param_1 + 0x10,param_2 + 0x10);
  FUN_140bee9ec(param_1 + 0x20,param_2 + 0x20);
  FUN_140bee9ec(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1481bf590 FUN_1481bf590 body=59 status=ok
// SIG undefined FUN_1481bf590(void)

undefined8 FUN_1481bf590(longlong *param_1)

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



// FUNCTION 1481bf676 FUN_1481bf676 body=75 status=ok
// SIG undefined FUN_1481bf676(void)

undefined8 FUN_1481bf676(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1447a122a();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481bf6ea FUN_1481bf6ea body=59 status=ok
// SIG undefined FUN_1481bf6ea(void)

undefined8 FUN_1481bf6ea(longlong *param_1)

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



// FUNCTION 1481bf730 FUN_1481bf730 body=38 status=ok
// SIG undefined FUN_1481bf730(void)

void FUN_1481bf730(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1481bf83a FUN_1481bf83a body=59 status=ok
// SIG undefined FUN_1481bf83a(void)

undefined8 FUN_1481bf83a(longlong *param_1)

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



// FUNCTION 1481bf950 FUN_1481bf950 body=59 status=ok
// SIG undefined FUN_1481bf950(void)

undefined8 FUN_1481bf950(longlong *param_1)

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



// FUNCTION 1481bfac6 FUN_1481bfac6 body=59 status=ok
// SIG undefined FUN_1481bfac6(void)

undefined8 FUN_1481bfac6(longlong *param_1)

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



// FUNCTION 1481bfbf0 FUN_1481bfbf0 body=59 status=ok
// SIG undefined FUN_1481bfbf0(void)

undefined8 FUN_1481bfbf0(longlong *param_1)

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



// FUNCTION 1481bfc9a FUN_1481bfc9a body=47 status=ok
// SIG undefined FUN_1481bfc9a(void)

void FUN_1481bfc9a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bfce0 FUN_1481bfce0 body=129 status=ok
// SIG undefined FUN_1481bfce0(void)

undefined8 FUN_1481bfce0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405d56d0(param_2,param_3);
    FUN_1405d5728(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    puVar2 = (undefined8 *)(param_3 + 0x30);
    puVar3 = (undefined8 *)(param_2 + 0x30);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1481bfd8a FUN_1481bfd8a body=59 status=ok
// SIG undefined FUN_1481bfd8a(void)

undefined8 FUN_1481bfd8a(longlong *param_1)

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



// FUNCTION 1481bfe2e FUN_1481bfe2e body=57 status=ok
// SIG undefined FUN_1481bfe2e(void)

void FUN_1481bfe2e(longlong *param_1)

{
  if ((char)param_1[0x13] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1481bfe78 FUN_1481bfe78 body=44 status=ok
// SIG undefined FUN_1481bfe78(void)

void FUN_1481bfe78(undefined8 param_1,longlong *param_2)

{
  FUN_140e27141(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481bfeba FUN_1481bfeba body=54 status=ok
// SIG undefined FUN_1481bfeba(void)

undefined1 FUN_1481bfeba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481bffb4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481bff18 FUN_1481bff18 body=59 status=ok
// SIG undefined FUN_1481bff18(void)

undefined8 FUN_1481bff18(longlong *param_1)

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



// FUNCTION 1481bffb4 FUN_1481bffb4 body=93 status=ok
// SIG undefined FUN_1481bffb4(void)

undefined8 * FUN_1481bffb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e27141(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481c0012(param_1,iVar1);
      FUN_1481c0084(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c0012 FUN_1481c0012 body=114 status=ok
// SIG undefined FUN_1481c0012(void)

void FUN_1481c0012(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x98,8);
    iVar2 = (int)(uVar1 / 0x98);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x98,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c0084 FUN_1481c0084 body=98 status=ok
// SIG undefined FUN_1481c0084(void)

void FUN_1481c0084(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481c00e6(param_1,param_2);
    puVar2 = (undefined8 *)(param_2 + 0x30);
    puVar3 = (undefined8 *)(param_1 + 0x30);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return;
}



// FUNCTION 1481c00e6 FUN_1481c00e6 body=179 status=ok
// SIG undefined FUN_1481c00e6(void)

undefined8 * FUN_1481c00e6(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14818137a(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 4);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1481813dc(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x30);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 1481c019a FUN_1481c019a body=48 status=ok
// SIG undefined FUN_1481c019a(void)

void FUN_1481c019a(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140e27141(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1481c01ca FUN_1481c01ca body=29 status=ok
// SIG undefined FUN_1481c01ca(void)

void FUN_1481c01ca(undefined8 param_1,longlong param_2)

{
  FUN_140bd4c70(param_2);
  *(byte *)(param_2 + 0x98) = *(byte *)(param_2 + 0x98) & 0xc0;
  return;
}



// FUNCTION 1481c01e8 FUN_1481c01e8 body=47 status=ok
// SIG undefined FUN_1481c01e8(void)

void FUN_1481c01e8(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481c022e FUN_1481c022e body=143 status=ok
// SIG undefined FUN_1481c022e(void)

undefined8 FUN_1481c022e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405d56d0(param_2,param_3);
    FUN_1405d5728(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    puVar2 = (undefined8 *)(param_3 + 0x30);
    puVar3 = (undefined8 *)(param_2 + 0x30);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_3 + 0x98);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 1481c02e6 FUN_1481c02e6 body=59 status=ok
// SIG undefined FUN_1481c02e6(void)

undefined8 FUN_1481c02e6(longlong *param_1)

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



// FUNCTION 1481c038a FUN_1481c038a body=57 status=ok
// SIG undefined FUN_1481c038a(void)

void FUN_1481c038a(longlong *param_1)

{
  if ((char)param_1[0x14] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1481c03ec FUN_1481c03ec body=47 status=ok
// SIG undefined FUN_1481c03ec(void)

void FUN_1481c03ec(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481c0432 FUN_1481c0432 body=89 status=ok
// SIG undefined FUN_1481c0432(void)

undefined8 FUN_1481c0432(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405d56d0(param_2,param_3);
    FUN_1405d5728(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 1481c04b4 FUN_1481c04b4 body=59 status=ok
// SIG undefined FUN_1481c04b4(void)

undefined8 FUN_1481c04b4(longlong *param_1)

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



// FUNCTION 1481c0552 FUN_1481c0552 body=51 status=ok
// SIG undefined FUN_1481c0552(void)

void FUN_1481c0552(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 1481c0596 FUN_1481c0596 body=44 status=ok
// SIG undefined FUN_1481c0596(void)

void FUN_1481c0596(undefined8 param_1,longlong *param_2)

{
  FUN_140e27187(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481c05d8 FUN_1481c05d8 body=54 status=ok
// SIG undefined FUN_1481c05d8(void)

undefined1 FUN_1481c05d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c06d2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481c0636 FUN_1481c0636 body=59 status=ok
// SIG undefined FUN_1481c0636(void)

undefined8 FUN_1481c0636(longlong *param_1)

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



// FUNCTION 1481c06d2 FUN_1481c06d2 body=93 status=ok
// SIG undefined FUN_1481c06d2(void)

undefined8 * FUN_1481c06d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e27187(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481c0730(param_1,iVar1);
      FUN_1481c079f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c0730 FUN_1481c0730 body=111 status=ok
// SIG undefined FUN_1481c0730(void)

void FUN_1481c0730(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c079f FUN_1481c079f body=60 status=ok
// SIG undefined FUN_1481c079f(void)

void FUN_1481c079f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481c00e6(param_1,param_2);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1481c07dc FUN_1481c07dc body=48 status=ok
// SIG undefined FUN_1481c07dc(void)

void FUN_1481c07dc(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140e27187(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1481c0838 FUN_1481c0838 body=47 status=ok
// SIG undefined FUN_1481c0838(void)

void FUN_1481c0838(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481c087e FUN_1481c087e body=106 status=ok
// SIG undefined FUN_1481c087e(void)

undefined8 FUN_1481c087e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405d56d0(param_2,param_3);
    FUN_1405d5728(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(uint *)(param_2 + 0x38) =
         *(uint *)(param_2 + 0x38) & 0xfffffffe | *(uint *)(param_3 + 0x38) & 1;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 1481c0910 FUN_1481c0910 body=59 status=ok
// SIG undefined FUN_1481c0910(void)

undefined8 FUN_1481c0910(longlong *param_1)

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



// FUNCTION 1481c09ae FUN_1481c09ae body=51 status=ok
// SIG undefined FUN_1481c09ae(void)

void FUN_1481c09ae(longlong *param_1)

{
  if ((char)param_1[8] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1481c09f2 FUN_1481c09f2 body=44 status=ok
// SIG undefined FUN_1481c09f2(void)

void FUN_1481c09f2(undefined8 param_1,longlong *param_2)

{
  FUN_1404dc22f(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481c0a34 FUN_1481c0a34 body=54 status=ok
// SIG undefined FUN_1481c0a34(void)

undefined1 FUN_1481c0a34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c0b2e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481c0a92 FUN_1481c0a92 body=59 status=ok
// SIG undefined FUN_1481c0a92(void)

undefined8 FUN_1481c0a92(longlong *param_1)

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



// FUNCTION 1481c0b2e FUN_1481c0b2e body=93 status=ok
// SIG undefined FUN_1481c0b2e(void)

undefined8 * FUN_1481c0b2e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404dc22f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481c0b8c(param_1,iVar1);
      FUN_1481c0bee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c0b8c FUN_1481c0b8c body=98 status=ok
// SIG undefined FUN_1481c0b8c(void)

void FUN_1481c0b8c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481c0bee FUN_1481c0bee body=77 status=ok
// SIG undefined FUN_1481c0bee(void)

void FUN_1481c0bee(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1481c00e6(param_1,param_2);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(uint *)(param_1 + 0x38) =
         *(uint *)(param_1 + 0x38) & 0xfffffffe | *(uint *)(param_2 + 0x38) & 1;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1481c0c3c FUN_1481c0c3c body=48 status=ok
// SIG undefined FUN_1481c0c3c(void)

void FUN_1481c0c3c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1404dc22f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1481c0ce2 FUN_1481c0ce2 body=59 status=ok
// SIG undefined FUN_1481c0ce2(void)

undefined8 FUN_1481c0ce2(longlong *param_1)

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



// FUNCTION 1481c0dda FUN_1481c0dda body=141 status=ok
// SIG undefined FUN_1481c0dda(void)

undefined8 FUN_1481c0dda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar2 = param_2 + 0x10 + lVar10;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar10) + 1);
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + lVar10);
      FUN_14805ff7e();
      lVar2 = param_2 + lVar10;
      lVar1 = param_3 + lVar10;
      FUN_14806506a(lVar2 + 0x20,lVar1 + 0x20);
      uVar3 = *(undefined4 *)(lVar1 + 0x34);
      uVar4 = *(undefined4 *)(lVar1 + 0x38);
      uVar5 = *(undefined4 *)(lVar1 + 0x3c);
      uVar6 = *(undefined4 *)(lVar1 + 0x40);
      uVar7 = *(undefined4 *)(lVar1 + 0x44);
      uVar8 = *(undefined4 *)(lVar1 + 0x48);
      uVar9 = *(undefined4 *)(lVar1 + 0x4c);
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(lVar2 + 0x34) = uVar3;
      *(undefined4 *)(lVar2 + 0x38) = uVar4;
      *(undefined4 *)(lVar2 + 0x3c) = uVar5;
      *(undefined4 *)(lVar2 + 0x40) = uVar6;
      *(undefined4 *)(lVar2 + 0x44) = uVar7;
      *(undefined4 *)(lVar2 + 0x48) = uVar8;
      *(undefined4 *)(lVar2 + 0x4c) = uVar9;
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
      lVar10 = lVar10 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481c0e90 FUN_1481c0e90 body=59 status=ok
// SIG undefined FUN_1481c0e90(void)

undefined8 FUN_1481c0e90(longlong *param_1)

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



// FUNCTION 1481c0ed6 FUN_1481c0ed6 body=33 status=ok
// SIG undefined FUN_1481c0ed6(void)

void FUN_1481c0ed6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14017ae7a(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1481c0f8e FUN_1481c0f8e body=54 status=ok
// SIG undefined FUN_1481c0f8e(void)

undefined1 FUN_1481c0f8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c10a0(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1481c0fec FUN_1481c0fec body=59 status=ok
// SIG undefined FUN_1481c0fec(void)

undefined8 FUN_1481c0fec(longlong *param_1)

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



// FUNCTION 1481c1032 FUN_1481c1032 body=32 status=ok
// SIG undefined FUN_1481c1032(void)

void FUN_1481c1032(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1481bc1c6(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1481c10a0 FUN_1481c10a0 body=83 status=ok
// SIG undefined FUN_1481c10a0(void)

longlong * FUN_1481c10a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_1481c10f4(param_1 + 1,param_2 + 1);
  FUN_1481c114e(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1481c10f4 FUN_1481c10f4 body=89 status=ok
// SIG undefined FUN_1481c10f4(void)

undefined8 * FUN_1481c10f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c11ac(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481c114e FUN_1481c114e body=93 status=ok
// SIG undefined FUN_1481c114e(void)

undefined8 * FUN_1481c114e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404dc1e4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481c1220(param_1,iVar1);
      FUN_1481c128f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c11ac FUN_1481c11ac body=115 status=ok
// SIG undefined FUN_1481c11ac(void)

void FUN_1481c11ac(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c1220 FUN_1481c1220 body=111 status=ok
// SIG undefined FUN_1481c1220(void)

void FUN_1481c1220(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481c128f FUN_1481c128f body=74 status=ok
// SIG undefined FUN_1481c128f(void)

void FUN_1481c128f(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      FUN_1481c12da(param_1,param_2);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481c12da FUN_1481c12da body=181 status=ok
// SIG undefined FUN_1481c12da(void)

undefined8 * FUN_1481c12da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14181d5f4(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1480650c8(param_1 + 2,iVar1,0);
    FUN_14806512a(param_1[2],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return param_1;
}



// FUNCTION 1481c13d4 FUN_1481c13d4 body=92 status=ok
// SIG undefined FUN_1481c13d4(void)

undefined1 FUN_1481c13d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c10a0(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x2c);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    uVar3 = *(undefined4 *)(param_3 + 0x34);
    uVar4 = *(undefined4 *)(param_3 + 0x38);
    uVar5 = *(undefined4 *)(param_3 + 0x3c);
    uVar6 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    uVar8 = *(undefined4 *)(param_3 + 0x45);
    uVar9 = *(undefined4 *)(param_3 + 0x49);
    uVar10 = *(undefined4 *)(param_3 + 0x4d);
    uVar11 = *(undefined4 *)(param_3 + 0x51);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    *(undefined4 *)(param_2 + 0x38) = uVar4;
    *(undefined4 *)(param_2 + 0x3c) = uVar5;
    *(undefined4 *)(param_2 + 0x40) = uVar6;
    *(undefined4 *)(param_2 + 0x44) = uVar7;
    *(undefined4 *)(param_2 + 0x45) = uVar8;
    *(undefined4 *)(param_2 + 0x49) = uVar9;
    *(undefined4 *)(param_2 + 0x4d) = uVar10;
    *(undefined4 *)(param_2 + 0x51) = uVar11;
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1481c1458 FUN_1481c1458 body=59 status=ok
// SIG undefined FUN_1481c1458(void)

undefined8 FUN_1481c1458(longlong *param_1)

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



// FUNCTION 1481c149e FUN_1481c149e body=32 status=ok
// SIG undefined FUN_1481c149e(void)

void FUN_1481c149e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1481bc1c6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1481c1598 FUN_1481c1598 body=59 status=ok
// SIG undefined FUN_1481c1598(void)

undefined8 FUN_1481c1598(longlong *param_1)

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



// FUNCTION 1481c1660 FUN_1481c1660 body=63 status=ok
// SIG undefined FUN_1481c1660(void)

undefined1 FUN_1481c1660(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481c1788(param_2,param_3);
    param_3 = param_3 + 0x368;
    param_2 = param_2 + 0x368;
  }
  return 1;
}



// FUNCTION 1481c16c8 FUN_1481c16c8 body=59 status=ok
// SIG undefined FUN_1481c16c8(void)

undefined8 FUN_1481c16c8(longlong *param_1)

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



// FUNCTION 1481c1714 FUN_1481c1714 body=38 status=ok
// SIG undefined FUN_1481c1714(void)

void FUN_1481c1714(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x368) == '\x01') {
    FUN_1404dbe8a(param_2);
    *(undefined1 *)(param_2 + 0x368) = 0;
  }
  return;
}



// FUNCTION 1481c1788 FUN_1481c1788 body=804 status=ok
// SIG undefined FUN_1481c1788(void)

undefined4 * FUN_1481c1788(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x11);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x15);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x11) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x19) = uVar11;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  plVar2 = *(longlong **)(param_2 + 8);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  param_1[10] = param_2[10];
  puVar14 = (undefined8 *)(param_2 + 0xc);
  puVar15 = (undefined8 *)(param_1 + 0xc);
  for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  FUN_1481c1aac(param_1 + 0x20,param_2 + 0x20);
  FUN_1405d56d0(param_1 + 0x24,param_2 + 0x24);
  FUN_1405d5728(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  param_1[0x2e] = param_2[0x2e];
  FUN_1481c0b2e(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  param_1[0x36] = param_2[0x36];
  FUN_1481c1b0a(param_1 + 0x38,param_2 + 0x38);
  FUN_1481c10a0(param_1 + 0x3c,param_2 + 0x3c);
  FUN_1481c10a0(param_1 + 0x46,param_2 + 0x46);
  FUN_1402ae190(param_1 + 0x50,param_2 + 0x50);
  FUN_1481c1b64(param_1 + 0x72,param_2 + 0x72);
  FUN_1481c1fcc(param_1 + 0x76,param_2 + 0x76);
  FUN_1481c1bbe(param_1 + 0x8a,param_2 + 0x8a);
  FUN_1481c1c0e(param_1 + 0x8e,param_2 + 0x8e);
  FUN_1481c1c5e(param_1 + 0x92,param_2 + 0x92);
  uVar4 = *(undefined8 *)(param_2 + 0x96);
  lVar13 = *(longlong *)(param_2 + 0x98);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x96) = uVar4;
  *(longlong *)(param_1 + 0x98) = lVar13;
  if (plVar2 != (longlong *)0x0) {
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
  lVar13 = *(longlong *)(param_2 + 0x9a);
  if (DAT_14c950c29 == '\x01') {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x9a);
    }
  }
  *(longlong *)(param_1 + 0x9a) = lVar13;
  FUN_1406fa324(param_1 + 0x9c,param_2 + 0x9c);
  FUN_1405d56d0(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1405d5728(param_1 + 0xa4,param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  param_1[0xaa] = param_2[0xaa];
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  param_1[0xb0] = param_2[0xb0];
  *(undefined8 *)(param_1 + 0xae) = *(undefined8 *)(param_2 + 0xae);
  FUN_1481c1cb8(param_1 + 0xb2,param_2 + 0xb2);
  FUN_1481c1d04(param_1 + 0xba,param_2 + 0xba);
  FUN_144a787a6(param_1 + 0xd4,param_2 + 0xd4);
  param_1[0xd8] = param_2[0xd8];
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)((longlong)param_2 + 0x365) == '\x01') {
    *(undefined1 *)(param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
    uVar12 = 1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x365) != '\x01') goto LAB_1481c1a62;
    uVar12 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x365) = uVar12;
LAB_1481c1a62:
  if (*(char *)((longlong)param_2 + 0x367) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x366) = *(undefined1 *)((longlong)param_2 + 0x366);
    *(undefined1 *)((longlong)param_1 + 0x367) = 1;
  }
  else if (*(char *)((longlong)param_1 + 0x367) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x367) = 0;
  }
  return param_1;
}



// FUNCTION 1481c1aac FUN_1481c1aac body=93 status=ok
// SIG undefined FUN_1481c1aac(void)

undefined8 * FUN_1481c1aac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404dc272(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481c1d66(param_1,iVar1);
      FUN_1481c1dd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481c1b0a FUN_1481c1b0a body=89 status=ok
// SIG undefined FUN_1481c1b0a(void)

undefined8 * FUN_1481c1b0a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481c1ee4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}


