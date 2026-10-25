// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14828ab6c FUN_14828ab6c body=86 status=ok
// SIG undefined FUN_14828ab6c(void)

undefined8 FUN_14828ab6c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0xaa < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x18);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x18,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14828abc4 FUN_14828abc4 body=180 status=ok
// SIG undefined FUN_14828abc4(void)

void FUN_14828abc4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    if (lVar2 != lVar3) {
      lVar5 = lVar2 + 0xb0;
      do {
        lVar2 = lVar2 + 0xf0;
        lVar4 = -0xf0;
        lVar1 = lVar5;
        do {
          FUN_148276cee(lVar1 + 0x28);
          FUN_148276cee(lVar1);
          lVar1 = lVar1 + -0x50;
          lVar4 = lVar4 + 0x50;
        } while (lVar4 != 0);
        lVar5 = lVar5 + 0xf0;
      } while (lVar2 != lVar3);
      lVar2 = *param_1;
    }
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(param_1[2] - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14828ac7a FUN_14828ac7a body=82 status=ok
// SIG undefined FUN_14828ac7a(void)

void FUN_14828ac7a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14828accd FUN_14828accd body=30 status=ok
// SIG undefined FUN_14828accd(void)

void FUN_14828accd(longlong param_1)

{
  FUN_14828adb8(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14828acec FUN_14828acec body=204 status=ok
// SIG undefined FUN_14828acec(void)

void FUN_14828acec(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x13d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0x1571;
  uVar2 = 0x1571;
  lVar1 = 0x17;
  do {
    uVar2 = ((uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)lVar1) - 0x16;
    *(uint *)(param_1 + lVar1 * 4) = uVar2;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x286);
  *(undefined4 *)(param_1 + 0x54) = 0x270;
  *(undefined8 *)(param_1 + 0x13e0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined4 *)(param_1 + 0x2790) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1410) = 0x1571;
  uVar2 = 0x1571;
  lVar1 = 0x505;
  do {
    uVar2 = ((uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)lVar1) - 0x504;
    *(uint *)(param_1 + lVar1 * 4) = uVar2;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x774);
  *(undefined4 *)(param_1 + 0x140c) = 0x270;
  *(undefined8 *)(param_1 + 0x2798) = 0;
  *(undefined8 *)(param_1 + 0x27a0) = 0;
  *(undefined8 *)(param_1 + 0x27a8) = 0;
  return;
}



// FUNCTION 14828adb8 FUN_14828adb8 body=58 status=ok
// SIG undefined FUN_14828adb8(void)

void FUN_14828adb8(longlong param_1)

{
  FUN_14828abc4(param_1 + 0x2798);
  FUN_14828ac7a(param_1 + 0x13e0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14828adf2 FUN_14828adf2 body=143 status=ok
// SIG undefined FUN_14828adf2(void)

void FUN_14828adf2(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (longlong)(param_2 - 1) >> 1;
  if ((longlong)uVar4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if (*(longlong *)(param_1 + 0x10 + uVar3 * 0x10) < *(longlong *)(param_1 + 8 + uVar3 * 0x10))
      {
        uVar2 = uVar3 * 2 + 1;
      }
      else {
        uVar2 = uVar3 * 2 + 2;
      }
      *(undefined8 *)(param_1 + uVar3 * 8) = *(undefined8 *)(param_1 + uVar2 * 8);
      uVar3 = uVar2;
    } while ((longlong)uVar2 < (longlong)uVar4);
  }
  if (((param_2 & 1) == 0) && (uVar2 == uVar4)) {
    *(undefined8 *)(param_1 + uVar4 * 8) = *(undefined8 *)(param_1 + -8 + param_2 * 8);
    uVar2 = param_2 - 1;
  }
  if (0 < (longlong)uVar2) {
    do {
      uVar4 = uVar2 - 1;
      uVar3 = uVar4 >> 1;
      lVar1 = *(longlong *)(param_1 + uVar3 * 8);
      if (*param_3 <= lVar1) goto LAB_14828ae74;
      *(longlong *)(param_1 + uVar2 * 8) = lVar1;
      uVar2 = uVar3;
    } while (1 < uVar4);
    uVar2 = 0;
  }
LAB_14828ae74:
  *(longlong *)(param_1 + uVar2 * 8) = *param_3;
  return;
}



// FUNCTION 14828ae82 FUN_14828ae82 body=104 status=ok
// SIG undefined FUN_14828ae82(void)

void FUN_14828ae82(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// FUNCTION 14828aeec FUN_14828aeec body=76 status=ok
// SIG undefined FUN_14828aeec(void)

undefined8 FUN_14828aeec(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 8);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 8,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14828af3a FUN_14828af3a body=198 status=ok
// SIG undefined FUN_14828af3a(void)

void FUN_14828af3a(longlong *param_1,void *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = (param_1[1] - lVar1 >> 3) + 1;
  uVar3 = param_1[2] - lVar1 >> 3;
  uVar5 = (uVar3 >> 1) + uVar3;
  if (uVar5 <= uVar4) {
    uVar5 = uVar4;
  }
  if (0x1fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = 0x1fffffffffffffff;
  }
  _Dst = (void *)FUN_14828aeec(uVar5);
  *(undefined8 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  pvVar2 = (void *)param_1[1];
  memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
  if (pvVar2 != param_2) {
    memmove((void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 8),param_2,
            param_1[1] - (longlong)param_2);
  }
  FUN_14828ae82(param_1,_Dst,uVar4,uVar5);
  return;
}



// FUNCTION 14828b000 FUN_14828b000 body=97 status=ok
// SIG undefined FUN_14828b000(void)

void FUN_14828b000(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_3 != 0 && param_2 != 0) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(param_3),0) < param_2)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  FUN_1482a9550(param_1,param_3 * param_2,param_2,param_3);
  return;
}



// FUNCTION 14828b062 FUN_14828b062 body=927 status=ok
// SIG undefined FUN_14828b062(void)

uint * FUN_14828b062(uint *param_1,char *param_2,char *param_3,undefined4 param_4,
                    undefined8 *param_5)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 auStack_228 [32];
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
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
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
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0xf;
  param_1[7] = 0;
  FUN_148298575(local_108,param_4);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  sVar2 = strlen(param_3);
  FUN_140cd1a74(&local_188,param_3,sVar2);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  sVar2 = strlen(param_2);
  FUN_140cd1a74(&local_208,param_2,sVar2);
  puVar3 = (undefined4 *)FUN_1482875c0(&local_208,0,"File: ",6);
  local_1e8 = *puVar3;
  uStack_1e4 = puVar3[1];
  uStack_1e0 = puVar3[2];
  uStack_1dc = puVar3[3];
  local_1d8 = puVar3[4];
  uStack_1d4 = puVar3[5];
  uStack_1d0 = puVar3[6];
  uStack_1cc = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)FUN_144a6594a(&local_1e8,&DAT_149dfc0af,1);
  local_1c8 = *puVar3;
  uStack_1c4 = puVar3[1];
  uStack_1c0 = puVar3[2];
  uStack_1bc = puVar3[3];
  local_1b8 = puVar3[4];
  uStack_1b4 = puVar3[5];
  uStack_1b0 = puVar3[6];
  uStack_1ac = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)FUN_144a6594a(&local_1c8,"Func: ",6);
  local_1a8 = *puVar3;
  uStack_1a4 = puVar3[1];
  uStack_1a0 = puVar3[2];
  uStack_19c = puVar3[3];
  local_198 = puVar3[4];
  uStack_194 = puVar3[5];
  uStack_190 = puVar3[6];
  uStack_18c = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  FUN_1470a8f72(local_168,local_198,&local_1a8,&local_188);
  puVar3 = (undefined4 *)FUN_144a6594a(local_168,&DAT_149dfc0af,1);
  local_148 = *puVar3;
  uStack_144 = puVar3[1];
  uStack_140 = puVar3[2];
  uStack_13c = puVar3[3];
  local_138 = puVar3[4];
  uStack_134 = puVar3[5];
  uStack_130 = puVar3[6];
  uStack_12c = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)FUN_144a6594a(&local_148,"Line: ",6);
  local_128 = *puVar3;
  uStack_124 = puVar3[1];
  uStack_120 = puVar3[2];
  uStack_11c = puVar3[3];
  local_118 = puVar3[4];
  uStack_114 = puVar3[5];
  uStack_110 = puVar3[6];
  uStack_10c = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  FUN_1470a8f72(local_e8,local_118,&local_128,local_108);
  puVar3 = (undefined4 *)FUN_144a6594a(local_e8,&DAT_149dfc0af,1);
  local_c8 = *puVar3;
  uStack_c4 = puVar3[1];
  uStack_c0 = puVar3[2];
  uStack_bc = puVar3[3];
  local_b8 = puVar3[4];
  uStack_b4 = puVar3[5];
  uStack_b0 = puVar3[6];
  uStack_ac = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  puVar3 = (undefined4 *)FUN_144a6594a(&local_c8,param_5,*puVar1);
  local_a8 = *puVar3;
  uStack_a4 = puVar3[1];
  uStack_a0 = puVar3[2];
  uStack_9c = puVar3[3];
  local_98 = puVar3[4];
  uStack_94 = puVar3[5];
  uStack_90 = puVar3[6];
  uStack_8c = puVar3[7];
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar4 = (uint *)FUN_144a6594a(&local_a8,&DAT_14a370a31,2);
  local_88 = *puVar4;
  uStack_84 = puVar4[1];
  uStack_80 = puVar4[2];
  uStack_7c = puVar4[3];
  local_78 = puVar4[4];
  uStack_74 = puVar4[5];
  uStack_70 = puVar4[6];
  uStack_6c = puVar4[7];
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0xf;
  puVar4[7] = 0;
  *(undefined1 *)puVar4 = 0;
  if (&local_88 != param_1) {
    FUN_1401d9a90(param_1);
    param_1[4] = local_78;
    param_1[5] = uStack_74;
    param_1[6] = uStack_70;
    param_1[7] = uStack_6c;
    *param_1 = local_88;
    param_1[1] = uStack_84;
    param_1[2] = uStack_80;
    param_1[3] = uStack_7c;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0xf;
    uStack_6c = 0;
    local_88 = local_88 & 0xffffff00;
  }
  FUN_1401d9a90(&local_88);
  FUN_1401d9a90(&local_a8);
  FUN_1401d9a90(&local_c8);
  FUN_1401d9a90(local_e8);
  FUN_1401d9a90(&local_128);
  FUN_1401d9a90(&local_148);
  FUN_1401d9a90(local_168);
  FUN_1401d9a90(&local_1a8);
  FUN_1401d9a90(&local_1c8);
  FUN_1401d9a90(&local_1e8);
  FUN_1401d9a90(&local_208);
  FUN_1401d9a90(&local_188);
  FUN_1401d9a90(local_108);
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828b402 FUN_14828b402 body=221 status=ok
// SIG undefined FUN_14828b402(void)

void FUN_14828b402(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467bc3ac(&DAT_14cb466c8);
  plVar2 = DAT_14cb46718;
  plVar3 = (longlong *)*DAT_14cb46718;
  if (plVar3 != DAT_14cb46718) {
    do {
      plVar1 = (longlong *)plVar3[4];
      if ((*(byte *)(plVar1 + 1) & 1) != 0) {
        FUN_1470a8a01(local_58,"\nGTE ASSERTION:\n",param_1);
        (**(code **)(*plVar1 + 8))(plVar1,local_58);
        FUN_1401d9a90(local_58);
      }
      plVar1 = (longlong *)plVar3[2];
      plVar4 = plVar3;
      if (*(char *)(plVar3[2] + 0x19) == '\0') {
        do {
          plVar3 = plVar1;
          plVar1 = (longlong *)*plVar3;
        } while (*(char *)(*plVar3 + 0x19) == '\0');
      }
      else {
        do {
          plVar3 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
          bVar5 = plVar4 == (longlong *)plVar3[2];
          plVar4 = plVar3;
        } while (bVar5);
      }
    } while (plVar3 != plVar2);
  }
  _Mtx_unlock(&DAT_14cb466c8);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14828b4e0 FUN_14828b4e0 body=221 status=ok
// SIG undefined FUN_14828b4e0(void)

void FUN_14828b4e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467bc3ac(&DAT_14cb466c8);
  plVar2 = DAT_14cb46718;
  plVar3 = (longlong *)*DAT_14cb46718;
  if (plVar3 != DAT_14cb46718) {
    do {
      plVar1 = (longlong *)plVar3[4];
      if ((*(byte *)(plVar1 + 1) & 2) != 0) {
        FUN_1470a8a01(local_58,"\nGTE ERROR:\n",param_1);
        (**(code **)(*plVar1 + 8))(plVar1,local_58);
        FUN_1401d9a90(local_58);
      }
      plVar1 = (longlong *)plVar3[2];
      plVar4 = plVar3;
      if (*(char *)(plVar3[2] + 0x19) == '\0') {
        do {
          plVar3 = plVar1;
          plVar1 = (longlong *)*plVar3;
        } while (*(char *)(*plVar3 + 0x19) == '\0');
      }
      else {
        do {
          plVar3 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
          bVar5 = plVar4 == (longlong *)plVar3[2];
          plVar4 = plVar3;
        } while (bVar5);
      }
    } while (plVar3 != plVar2);
  }
  _Mtx_unlock(&DAT_14cb466c8);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14828b5be FUN_14828b5be body=221 status=ok
// SIG undefined FUN_14828b5be(void)

void FUN_14828b5be(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467bc3ac(&DAT_14cb466c8);
  plVar2 = DAT_14cb46718;
  plVar3 = (longlong *)*DAT_14cb46718;
  if (plVar3 != DAT_14cb46718) {
    do {
      plVar1 = (longlong *)plVar3[4];
      if ((*(byte *)(plVar1 + 1) & 4) != 0) {
        FUN_1470a8a01(local_58,"\nGTE WARNING:\n",param_1);
        (**(code **)(*plVar1 + 8))(plVar1,local_58);
        FUN_1401d9a90(local_58);
      }
      plVar1 = (longlong *)plVar3[2];
      plVar4 = plVar3;
      if (*(char *)(plVar3[2] + 0x19) == '\0') {
        do {
          plVar3 = plVar1;
          plVar1 = (longlong *)*plVar3;
        } while (*(char *)(*plVar3 + 0x19) == '\0');
      }
      else {
        do {
          plVar3 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
          bVar5 = plVar4 == (longlong *)plVar3[2];
          plVar4 = plVar3;
        } while (bVar5);
      }
    } while (plVar3 != plVar2);
  }
  _Mtx_unlock(&DAT_14cb466c8);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14828b69c FUN_14828b69c body=54 status=ok
// SIG undefined FUN_14828b69c(void)

undefined4 FUN_14828b69c(uint param_1)

{
  param_1 = param_1 >> 1 | param_1;
  param_1 = param_1 >> 2 | param_1;
  param_1 = param_1 >> 4 | param_1;
  param_1 = param_1 >> 8 | param_1;
  return *(undefined4 *)
          (&DAT_14ae72140 + (ulonglong)((param_1 >> 0x10 | param_1) * 0x7c4acdd >> 0x1b) * 4);
}



// FUNCTION 14828b6d2 FUN_14828b6d2 body=120 status=ok
// SIG undefined FUN_14828b6d2(void)

int FUN_14828b6d2(ulonglong param_1)

{
  uint uVar1;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = (uint)(param_1 >> 1) & 0x7fffffff | (uint)param_1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    return *(int *)(&DAT_14ae72140 + (ulonglong)((uVar1 >> 0x10 | uVar1) * 0x7c4acdd >> 0x1b) * 4);
  }
  uVar1 = (uint)(param_1 >> 0x20);
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  return *(int *)(&DAT_14ae72140 + (ulonglong)((uVar1 >> 0x10 | uVar1) * 0x7c4acdd >> 0x1b) * 4) +
         0x20;
}



// FUNCTION 14828b74a FUN_14828b74a body=7 status=ok
// SIG undefined FUN_14828b74a(void)

int FUN_14828b74a(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14828b751 FUN_14828b751 body=7 status=ok
// SIG undefined FUN_14828b751(void)

int FUN_14828b751(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14828b758 FUN_14828b758 body=71 status=ok
// SIG undefined FUN_14828b758(void)

int FUN_14828b758(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (uVar1 != 0) {
    return *(int *)(&DAT_14ae721c0 + (ulonglong)((-uVar1 & uVar1) * 0x77cb531 >> 0x1b) * 4);
  }
  if (param_1 != 0) {
    uVar1 = (uint)((ulonglong)param_1 >> 0x20);
    return *(int *)(&DAT_14ae721c0 + (ulonglong)((-uVar1 & uVar1) * 0x77cb531 >> 0x1b) * 4) + 0x20;
  }
  return 0;
}



// FUNCTION 14828b7a0 FUN_14828b7a0 body=25 status=ok
// SIG undefined FUN_14828b7a0(void)

undefined4 * FUN_14828b7a0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14828b7ba FUN_14828b7ba body=55 status=ok
// SIG undefined FUN_14828b7ba(void)

undefined4 * FUN_14828b7ba(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_1482988c4(param_1 + 2,*(longlong *)(param_2 + 2),
                  *(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 2);
  }
  return param_1;
}



// FUNCTION 14828b7f2 FUN_14828b7f2 body=181 status=ok
// SIG undefined FUN_14828b7f2(void)

int * FUN_14828b7f2(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = param_2 >> 1 | param_2;
    uVar2 = uVar2 >> 2 | uVar2;
    uVar2 = uVar2 >> 4 | uVar2;
    uVar2 = uVar2 >> 8 | uVar2;
    iVar1 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    *param_1 = (*(int *)(&DAT_14ae72140 +
                        (ulonglong)((uVar2 >> 0x10 | uVar2) * 0x7c4acdd >> 0x1b) * 4) - iVar1) + 1;
    FUN_148298748(param_1 + 2,1,&local_21);
    **(uint **)(param_1 + 2) = param_2 >> ((byte)iVar1 & 0x1f);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828b8a8 FUN_14828b8a8 body=242 status=ok
// SIG undefined FUN_14828b8a8(void)

int * FUN_14828b8a8(int *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = FUN_14828b6d2(param_2);
    uVar2 = (uint)param_2;
    if (uVar2 == 0) {
      uVar2 = (uint)(param_2 >> 0x20);
      iVar3 = *(int *)(&DAT_14ae721c0 + (ulonglong)((-uVar2 & uVar2) * 0x77cb531 >> 0x1b) * 4) +
              0x20;
    }
    else {
      iVar3 = *(int *)(&DAT_14ae721c0 + (ulonglong)((-uVar2 & uVar2) * 0x77cb531 >> 0x1b) * 4);
    }
    param_2 = param_2 >> ((byte)iVar3 & 0x3f);
    iVar1 = iVar1 - iVar3;
    iVar3 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    *param_1 = iVar1 + 1;
    FUN_148298748(param_1 + 2,(longlong)((iVar3 >> 5) + 1),&local_21);
    **(undefined4 **)(param_1 + 2) = (int)param_2;
    if (4 < (ulonglong)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2))) {
      *(int *)(*(longlong *)(param_1 + 2) + 4) = (int)(param_2 >> 0x20);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828b99c FUN_14828b99c body=62 status=ok
// SIG undefined FUN_14828b99c(void)

int * FUN_14828b99c(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = param_2 + 0x1e;
  if (-1 < param_2 + -1) {
    iVar1 = param_2 + -1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_148298870(param_1 + 2,(longlong)((iVar1 >> 5) + 1));
  return param_1;
}



// FUNCTION 14828b9da FUN_14828b9da body=87 status=ok
// SIG undefined FUN_14828b9da(void)

undefined4 * FUN_14828b9da(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_148276cee(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
  }
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14828ba32 FUN_14828ba32 body=89 status=ok
// SIG undefined FUN_14828ba32(void)

void FUN_14828ba32(int *param_1,int param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = param_2;
  if (param_2 < 1) {
    if (*(longlong *)(param_1 + 2) != *(longlong *)(param_1 + 4)) {
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 2);
    }
  }
  else {
    FUN_148298748(param_1 + 2,(param_2 - 1U >> 5) + 1,&local_9);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828ba8c FUN_14828ba8c body=117 status=ok
// SIG undefined FUN_14828ba8c(void)

undefined8 * FUN_14828ba8c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*DAT_14cb46728)(0);
  memset(puVar1 + 6,0,0xe0);
  FUN_14828bb02(puVar1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = (undefined8 *)(*DAT_14cb46728)(0,0x18);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 1) = 8;
  puVar1[0x14] = puVar2;
  return puVar1;
}



// FUNCTION 14828bb02 FUN_14828bb02 body=178 status=ok
// SIG undefined FUN_14828bb02(void)

void FUN_14828bb02(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x48;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x18;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 8;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 8;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 8;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 14828bbb4 FUN_14828bbb4 body=741 status=ok
// SIG undefined FUN_14828bbb4(void)

void FUN_14828bbb4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_1[2] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[2],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*param_1,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_143afd20c(param_1);
  if ((undefined1 *)param_1[6] != (undefined1 *)0x0) {
    LOCK();
    *(undefined1 *)param_1[6] = 1;
    UNLOCK();
    FUN_14828be99(param_1);
  }
  FUN_14828bf32(param_1[0x14]);
  if (param_1[0x14] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[0x14],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x15] + uVar3 * 8);
      FUN_14828bf8c(lVar2);
      if (lVar2 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar2,0);
        }
        else {
          (*DAT_14cb46730)(lVar2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0xb4));
  }
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x18] + uVar3 * 8);
      if (lVar2 != 0) {
        FUN_14828c17c(lVar2);
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar2,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0xcc));
  }
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x1b] + uVar3 * 8);
      if (*(int *)(lVar2 + 0xa4) != 0) {
        uVar4 = 0;
        do {
          FUN_14828c1fa(*(undefined8 *)(*(longlong *)(lVar2 + 0x98) + uVar4 * 8));
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x98) + uVar4 * 8);
          if (lVar1 != 0) {
            if (DAT_14cb46730 == (code *)0x0) {
              (*DAT_14cb46728)(lVar1,0);
            }
            else {
              (*DAT_14cb46730)();
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(lVar2 + 0xa4));
      }
      FUN_14828c258(lVar2);
      if (lVar2 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)(lVar2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0xe4));
  }
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x1e] + uVar3 * 8);
      if (*(longlong *)(lVar2 + 8) != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(*(longlong *)(lVar2 + 8),0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      if (lVar2 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar2);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0xfc));
  }
  FUN_14828c34e(param_1);
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (DAT_14cb46730 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828be96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014828bc73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46730)(param_1);
  return;
}



// FUNCTION 14828be99 FUN_14828be99 body=152 status=ok
// SIG undefined FUN_14828be99(void)

void FUN_14828be99(longlong param_1)

{
  char cVar1;
  undefined1 *puVar2;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xe4) == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_14828da20(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x38);
      puVar2 = *(undefined1 **)(param_1 + 0x30);
      if (*(code **)(puVar2 + 8) != (code *)0x0) {
        cVar1 = (**(code **)(puVar2 + 8))
                          (*(undefined4 *)(puVar2 + 4),100,*(undefined8 *)(puVar2 + 0x10));
        if (cVar1 == '\0') {
          LOCK();
          *puVar2 = 1;
          UNLOCK();
        }
        puVar2 = *(undefined1 **)(param_1 + 0x30);
      }
      if (puVar2 != (undefined1 *)0x0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(puVar2,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return;
  }
  puts("AddMeshJoin: atlas is null.");
  return;
}



// FUNCTION 14828bf32 FUN_14828bf32 body=89 status=ok
// SIG undefined FUN_14828bf32(void)

void FUN_14828bf32(longlong *param_1)

{
  uint uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar1 = 0;
    do {
      FUN_148298a2c(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828bf6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 14828bf8c FUN_14828bf8c body=495 status=ok
// SIG undefined FUN_14828bf8c(void)

void FUN_14828bf8c(longlong param_1)

{
  FUN_148298a92(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x108),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xf0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xd8),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xb8),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xa0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x88),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x70),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x58),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x40),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x28),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828c0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828c178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    return;
  }
  return;
}



// FUNCTION 14828c17c FUN_14828c17c body=126 status=ok
// SIG undefined FUN_14828c17c(void)

void FUN_14828c17c(longlong *param_1)

{
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828c1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828c1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 14828c1fa FUN_14828c1fa body=93 status=ok
// SIG undefined FUN_14828c1fa(void)

void FUN_14828c1fa(longlong *param_1)

{
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828c232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 14828c258 FUN_14828c258 body=245 status=ok
// SIG undefined FUN_14828c258(void)

void FUN_14828c258(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xb0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x98),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x68),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828c2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828c34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 14828c34e FUN_14828c34e body=189 status=ok
// SIG undefined FUN_14828c34e(void)

void FUN_14828c34e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xf0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xd8),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xc0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xa8),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_148298b12(param_1 + 0x40);
  return;
}



// FUNCTION 14828c40b FUN_14828c40b body=2578 status=ok
// SIG undefined FUN_14828c40b(void)

undefined8 FUN_14828c40b(longlong param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  void *_Src;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  char *_Str;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_598 [32];
  int local_578;
  undefined4 local_570;
  undefined8 *local_568;
  longlong local_560;
  undefined8 *local_558;
  code *local_550;
  undefined8 *local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined8 *local_530;
  int local_528;
  uint local_51c;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 local_4a8;
  uint local_4a0 [256];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  if (param_1 == 0) {
    _Str = "AddMesh: atlas is null.";
  }
  else {
    if (*(int *)(param_1 + 0xe4) == 0) {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        puVar9 = (undefined1 *)(*DAT_14cb46728)(0,0x28);
        pcVar4 = *(code **)(param_1 + 0x90);
        uVar18 = *(undefined8 *)(param_1 + 0x98);
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 4) = 0;
        *(code **)(puVar9 + 8) = pcVar4;
        *(undefined8 *)(puVar9 + 0x10) = uVar18;
        *(undefined8 *)(puVar9 + 0x18) = 0x100000000;
        *(undefined4 *)(puVar9 + 0x20) = 0;
        if ((pcVar4 != (code *)0x0) && (cVar7 = (*pcVar4)(0,0), cVar7 == '\0')) {
          LOCK();
          *puVar9 = 1;
          UNLOCK();
        }
        *(undefined1 **)(param_1 + 0x30) = puVar9;
      }
      else {
        uVar8 = *(int *)(param_1 + 0xb4) + 1;
        if (uVar8 <= param_3) {
          uVar8 = param_3;
        }
        LOCK();
        *(uint *)(*(longlong *)(param_1 + 0x30) + 0x1c) = uVar8;
        UNLOCK();
        FUN_148298eae();
      }
      uVar8 = *(uint *)(param_2 + 9);
      uVar14 = *(uint *)(param_2 + 7);
      if (uVar8 != 0) {
        uVar14 = uVar8;
      }
      if (param_2[6] == 0) {
        uVar18 = 4;
        uVar19 = uVar14 / 3;
        if (uVar14 % 3 != 0) goto LAB_14828c47d;
      }
      else {
        uVar19 = *(uint *)(param_2 + 10);
        if ((ulonglong)uVar19 == 0) {
          uVar19 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if (*(byte *)(param_2[6] + uVar11) < 3) {
              uVar18 = 3;
              goto LAB_14828c47d;
            }
            uVar11 = uVar11 + 1;
          } while (uVar19 != uVar11);
        }
      }
      lVar17 = param_2[1];
      lVar5 = param_2[5];
      puVar10 = (undefined8 *)(*DAT_14cb46728)(0,0x168);
      local_570 = *(undefined4 *)(param_1 + 0xb4);
      local_578 = (uint)(lVar17 != 0) * 2 + (uint)(lVar5 != 0) * 4 + 1;
      local_560 = param_1;
      FUN_14828ce1e(puVar10,(int)param_2[0xb],(int)param_2[7],(ulonglong)uVar14 / 3);
      local_4b0 = puVar10;
      if ((int)param_2[7] != 0) {
        uVar14 = 0;
        do {
          local_4a8 = (undefined8 *)0x0;
          local_4a0[0] = 0;
          local_4d0 = 0;
          lVar17 = param_2[1];
          if (lVar17 != 0) {
            uVar11 = (ulonglong)((int)param_2[8] * uVar14);
            local_4a8 = *(undefined8 **)(lVar17 + uVar11);
            local_4a0[0] = *(uint *)(lVar17 + 8 + uVar11);
          }
          if (param_2[2] != 0) {
            local_4d0 = *(longlong *)
                         (param_2[2] + (ulonglong)(*(int *)((longlong)param_2 + 0x44) * uVar14));
          }
          uVar11 = (ulonglong)(*(int *)((longlong)param_2 + 0x3c) * uVar14);
          local_510 = CONCAT44(local_510._4_4_,*(undefined4 *)(*param_2 + 8 + uVar11));
          local_518 = *(undefined8 *)(*param_2 + uVar11);
          FUN_14828cfe8(puVar10,&local_518,&local_4a8,&local_4d0);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(param_2 + 7));
      }
      local_4b8 = (undefined8 *)0x0;
      if (param_2[6] == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(*DAT_14cb46728)(0,0x48);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[8] = 0;
        *(undefined4 *)(puVar10 + 1) = 1;
        *(undefined4 *)(puVar10 + 4) = 4;
        *(undefined4 *)(puVar10 + 7) = 4;
        iVar12 = (int)param_2[10];
        _Src = (void *)param_2[6];
        *(int *)((longlong)puVar10 + 0xc) = iVar12;
        local_4b8 = puVar10;
        if (iVar12 != 0) {
          FUN_148298f1a(puVar10,iVar12);
          if (_Src != (void *)0x0 && (void *)*puVar10 != (void *)0x0) {
            memcpy((void *)*puVar10,_Src,(ulonglong)(uint)(iVar12 * *(int *)(puVar10 + 1)));
          }
        }
        if (*(uint *)(puVar10 + 5) < *(uint *)(param_2 + 10)) {
          FUN_148298f1a();
        }
        if (*(uint *)(puVar10 + 8) < *(uint *)(param_2 + 9)) {
          FUN_148298f1a();
        }
      }
      local_4d0 = 0;
      local_4c8 = 4;
      local_4c0 = 0;
      local_518 = 0;
      local_510 = 4;
      local_508 = 0;
      local_500 = 0;
      local_4f8 = 4;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 8;
      local_4d8 = 0;
      local_51c = 0;
      if (uVar19 != 0) {
        local_558 = puVar10 + 3;
        uVar11 = 0;
        local_568 = puVar10;
LAB_14828c943:
        puVar10 = local_4b0;
        if (param_2[6] == 0) {
          uVar13 = 3;
LAB_14828c951:
          iVar12 = (int)uVar13;
          iVar2 = *(int *)((longlong)param_2 + 0x4c);
          lVar17 = param_2[3];
          iVar3 = *(int *)((longlong)param_2 + 0x54);
          uVar14 = *(uint *)(param_2 + 7);
          uVar20 = 0;
          do {
            uVar16 = (uint)((int)uVar11 * iVar12) + uVar20;
            if (uVar8 == 0) {
              local_4a0[uVar20 - 2] = (uint)uVar16;
            }
            else {
              uVar16 = uVar16 & 0xffffffff;
              if (iVar3 == 0) {
                uVar15 = (uint)(ushort)(*(short *)(lVar17 + uVar16 * 2) + (short)iVar2);
              }
              else {
                uVar15 = *(int *)(lVar17 + uVar16 * 4) + iVar2;
              }
              local_4a0[uVar20 - 2] = uVar15;
              if (uVar14 <= uVar15) {
                FUN_14828bf8c(local_4b0);
                if (puVar10 != (undefined8 *)0x0) {
                  if (DAT_14cb46730 == (code *)0x0) {
                    (*DAT_14cb46728)(puVar10,0);
                  }
                  else {
                    (*DAT_14cb46730)(puVar10);
                  }
                }
                uVar18 = 2;
                goto LAB_14828c833;
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar13 != uVar20);
          bVar6 = false;
        }
        else {
          bVar1 = *(byte *)(param_2[6] + uVar11);
          uVar13 = (ulonglong)bVar1;
          if (bVar1 != 0) goto LAB_14828c951;
          iVar12 = 0;
          bVar6 = true;
          uVar13 = 0;
        }
        uVar11 = 1;
        uVar20 = 0;
        do {
          if ((uint)((int)uVar13 * 4) == uVar20) {
            if (bVar6) goto LAB_14828cc0d;
            uVar11 = 0;
            goto LAB_14828cd1a;
          }
          uVar14 = *(uint *)((longlong)local_4a0 + (uVar20 - 8));
          uVar21 = (ulonglong)uVar14;
          uVar16 = (ulonglong)local_4a0[(ulonglong)(uint)((int)uVar11 + (int)(uVar11 / 3) * -3) - 2]
          ;
          cVar7 = '\x01';
          if (uVar14 == local_4a0[(ulonglong)(uint)((int)uVar11 + (int)(uVar11 / 3) * -3) - 2])
          break;
          lVar17 = local_4b0[0xb];
          fVar23 = *(float *)(lVar17 + 8 + uVar16 * 0xc) - *(float *)(lVar17 + 8 + uVar21 * 0xc);
          fVar27 = *(float *)(lVar17 + 4 + uVar16 * 0xc) - *(float *)(lVar17 + 4 + uVar21 * 0xc);
          fVar25 = *(float *)(lVar17 + uVar16 * 0xc) - *(float *)(lVar17 + uVar21 * 0xc);
          uVar20 = uVar20 + 4;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        } while (0.0 < SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar27 * fVar27));
        goto LAB_14828ca73;
      }
LAB_14828c76f:
      lVar17 = local_560;
      FUN_148298fa0(local_560 + 0xa8,&local_4b0);
      FUN_148298fa0(lVar17 + 0xc0,&local_4b8);
      local_4a8 = local_4b0;
      FUN_148298fa0(lVar17 + 0x40);
      uVar8 = *(uint *)(lVar17 + 0x38);
      if (uVar8 == 0xffffffff) {
        lVar5 = *(longlong *)(lVar17 + 0xa0);
        local_4a8 = (undefined8 *)(*DAT_14cb46728)(0,0x20);
        *local_4a8 = 0;
        local_4a8[1] = 0;
        local_4a8[2] = 0;
        *(undefined4 *)(local_4a8 + 1) = 0x10;
        local_4a8[3] = lVar17;
        FUN_148298fa0(lVar5);
        uVar8 = *(int *)(lVar5 + 0xc) - 1;
        *(uint *)(lVar17 + 0x38) = uVar8;
      }
      local_550 = FUN_143afd32d;
      local_548 = local_4b0;
      FUN_148298fa0(*(undefined8 *)(**(longlong **)(lVar17 + 0xa0) + (ulonglong)uVar8 * 8));
      uVar18 = 0;
LAB_14828c833:
      FUN_14828d9a2(&local_518);
      if (local_4d0 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(local_4d0,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      goto LAB_14828c47d;
    }
    _Str = "AddMesh: Meshes and UV meshes cannot be added to the same atlas.";
  }
  puts(_Str);
  uVar18 = 1;
LAB_14828c47d:
  if ((local_a0 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
  while (uVar11 = uVar11 + 1, uVar13 != uVar11) {
LAB_14828cd1a:
    uVar20 = (ulonglong)local_4a0[uVar11 - 2];
    cVar7 = '\x01';
    if (((((NAN(*(float *)(local_4b0[0xb] + uVar20 * 0xc))) ||
          (lVar17 = local_4b0[0xb] + uVar20 * 0xc, NAN(*(float *)(lVar17 + 4)))) ||
         (NAN(*(float *)(lVar17 + 8)))) ||
        ((param_2[1] != 0 &&
         (((NAN(*(float *)(local_4b0[0xe] + uVar20 * 0xc)) ||
           (lVar17 = local_4b0[0xe] + uVar20 * 0xc, NAN(*(float *)(lVar17 + 4)))) ||
          (NAN(*(float *)(lVar17 + 8)))))))) ||
       ((param_2[2] != 0 &&
        ((NAN(*(float *)(local_4b0[0x11] + uVar20 * 8)) ||
         (NAN(*(float *)(local_4b0[0x11] + 4 + uVar20 * 8)))))))) goto LAB_14828ca73;
  }
LAB_14828cc0d:
  cVar7 = '\0';
LAB_14828ca73:
  local_4c8 = local_4c8 & 0xffffffff;
  if (iVar12 == 3) {
    FUN_148298fa0(&local_4d0,&local_4a8);
    FUN_148298fa0(&local_4d0,(longlong)&local_4a8 + 4);
    FUN_148298fa0(&local_4d0,local_4a0);
  }
  else {
    local_530 = &local_4a8;
    local_540 = local_4b0[0xb];
    local_538 = *(undefined4 *)((longlong)local_4b0 + 100);
    local_528 = iVar12;
    FUN_14828d02c(&local_518,&local_540,&local_530,&local_4d0);
  }
  if ((cVar7 == '\0') && (local_4c8._4_4_ != 0)) {
    lVar17 = puVar10[0xb];
    uVar14 = 2;
    do {
      uVar11 = (ulonglong)*(uint *)(local_4d0 + (ulonglong)(uVar14 - 2) * 4);
      uVar13 = (ulonglong)*(uint *)(local_4d0 + (ulonglong)(uVar14 - 1) * 4);
      uVar20 = (ulonglong)*(uint *)(local_4d0 + (ulonglong)uVar14 * 4);
      fVar23 = *(float *)(lVar17 + 8 + uVar11 * 0xc);
      fVar26 = *(float *)(lVar17 + 8 + uVar20 * 0xc) - fVar23;
      fVar25 = *(float *)(lVar17 + uVar11 * 0xc);
      fVar27 = *(float *)(lVar17 + 4 + uVar11 * 0xc);
      fVar29 = *(float *)(lVar17 + 4 + uVar20 * 0xc) - fVar27;
      fVar28 = *(float *)(lVar17 + uVar20 * 0xc) - fVar25;
      fVar23 = *(float *)(lVar17 + 8 + uVar13 * 0xc) - fVar23;
      fVar27 = *(float *)(lVar17 + 4 + uVar13 * 0xc) - fVar27;
      fVar25 = *(float *)(lVar17 + uVar13 * 0xc) - fVar25;
      fVar24 = fVar25 * fVar29 - fVar28 * fVar27;
      fVar25 = fVar23 * fVar28 - fVar26 * fVar25;
      fVar23 = fVar27 * fVar26 - fVar23 * fVar29;
      if (SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25) * 0.5 <= 1.1920929e-07) {
        cVar7 = '\x01';
        break;
      }
      uVar15 = uVar14 + 1;
      uVar14 = uVar14 + 3;
    } while (uVar15 < local_4c8._4_4_);
  }
  if ((param_2[4] != 0) && (*(char *)(param_2[4] + (ulonglong)local_51c) != '\0')) {
    cVar7 = '\x01';
  }
  uVar22 = 0xffffffff;
  if (param_2[5] != 0) {
    uVar22 = *(undefined4 *)(param_2[5] + (ulonglong)local_51c * 4);
  }
  if (local_4c8._4_4_ != 0) {
    uVar11 = 0;
    uVar14 = local_4c8._4_4_;
    do {
      FUN_14828d812(puVar10,uVar11 * 4 + local_4d0,cVar7,uVar22);
      if (local_568 != (undefined8 *)0x0) {
        FUN_148298fa0(local_558,&local_51c);
        uVar14 = local_4c8._4_4_;
      }
      uVar15 = (int)uVar11 + 3;
      uVar11 = (ulonglong)uVar15;
    } while (uVar15 < uVar14);
    if (uVar14 != 0 && local_568 != (undefined8 *)0x0) {
      puVar10 = local_568 + 6;
      lVar17 = 0;
      uVar11 = 0;
      do {
        FUN_148298fa0(puVar10,local_4d0 + lVar17);
        uVar11 = uVar11 + 1;
        lVar17 = lVar17 + 4;
      } while (uVar11 < local_4c8 >> 0x20);
    }
  }
  local_51c = local_51c + 1;
  uVar11 = (ulonglong)local_51c;
  if (uVar19 <= local_51c) goto LAB_14828c76f;
  goto LAB_14828c943;
}



// FUNCTION 14828ce1e FUN_14828ce1e body=457 status=ok
// SIG undefined FUN_14828ce1e(void)

undefined4 *
FUN_14828ce1e(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
             undefined4 param_6)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_5;
  param_1[2] = param_6;
  uVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 1;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 4;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 4;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xc;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0xc;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 8;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 4;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 4;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 4;
  param_1[0x3a] = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 4;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 4;
  param_1[0x46] = 0;
  param_1[0x48] = 7;
  param_1[0x49] = param_4 * 3;
  param_1[0x4a] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 8;
  param_1[0x52] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 4;
  param_1[0x58] = 0;
  if (param_4 != 0) {
    FUN_148298f1a(param_1 + 0x10);
    uVar1 = param_1[0x1a];
  }
  if (uVar1 < param_3) {
    FUN_148298f1a(param_1 + 0x16,param_3);
  }
  if ((uint)param_1[0x26] < param_3) {
    FUN_148298f1a(param_1 + 0x22,param_3);
  }
  uVar1 = param_1[1];
  if (((uVar1 & 1) != 0) && ((uint)param_1[8] < param_4)) {
    FUN_148298f1a(param_1 + 4,param_4);
    uVar1 = param_1[1];
  }
  if (((uVar1 & 2) != 0) && ((uint)param_1[0x20] < param_3)) {
    FUN_148298f1a(param_1 + 0x1c,param_3);
    uVar1 = param_1[1];
  }
  if (((uVar1 & 4) != 0) && ((uint)param_1[0xe] < param_4)) {
    FUN_148298f1a(param_1 + 10,param_4);
  }
  return param_1;
}



// FUNCTION 14828cfe8 FUN_14828cfe8 body=68 status=ok
// SIG undefined FUN_14828cfe8(void)

void FUN_14828cfe8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_148298fa0(param_1 + 0x58);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    FUN_148298fa0(param_1 + 0x70,param_3);
  }
  FUN_148298fa0(param_1 + 0x88,param_4);
  return;
}



// FUNCTION 14828d02c FUN_14828d02c body=1902 status=ok
// SIG undefined FUN_14828d02c(void)

void FUN_14828d02c(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
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
  undefined1 auStack_168 [32];
  longlong *local_148;
  float local_13c;
  longlong *local_138;
  longlong local_130;
  float local_124;
  float fStack_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (*(uint *)(param_1 + 2) < *(uint *)(param_3 + 1)) {
    FUN_148298f1a(param_1);
  }
  *(undefined4 *)(param_4 + 0xc) = 0;
  if ((int)param_3[1] == 3) {
    FUN_148298fa0(param_4,*param_3);
    FUN_148298fa0(param_4,*param_3 + 4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_168);
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar3 = (uint *)*param_3;
  uVar8 = (ulonglong)*puVar3;
  uVar10 = (ulonglong)puVar3[1];
  lVar4 = *param_2;
  uVar11 = (ulonglong)puVar3[2];
  fVar17 = *(float *)(lVar4 + 8 + uVar10 * 0xc);
  fVar19 = *(float *)(lVar4 + 8 + uVar11 * 0xc) - fVar17;
  fVar25 = *(float *)(lVar4 + uVar10 * 0xc);
  fVar16 = *(float *)(lVar4 + 4 + uVar10 * 0xc);
  fVar23 = *(float *)(lVar4 + 4 + uVar11 * 0xc) - fVar16;
  fVar21 = *(float *)(lVar4 + uVar11 * 0xc) - fVar25;
  fVar17 = fVar17 - *(float *)(lVar4 + 8 + uVar8 * 0xc);
  fVar16 = fVar16 - *(float *)(lVar4 + 4 + uVar8 * 0xc);
  fVar25 = fVar25 - *(float *)(lVar4 + uVar8 * 0xc);
  fVar26 = fVar25 * fVar23 - fVar21 * fVar16;
  fVar21 = fVar17 * fVar21 - fVar19 * fVar25;
  fVar17 = fVar16 * fVar19 - fVar17 * fVar23;
  fVar16 = 1.0 / SQRT(fVar26 * fVar26 + fVar17 * fVar17 + fVar21 * fVar21);
  fVar26 = fVar26 * fVar16;
  fVar21 = fVar21 * fVar16;
  fVar16 = fVar16 * fVar17;
  local_100 = fVar16;
  local_fc = fVar21;
  local_f8 = fVar26;
  FUN_14829900c(&local_124);
  fVar25 = fStack_120;
  fVar17 = local_124;
  uStack_110 = CONCAT44(uStack_110._4_4_,local_11c);
  uVar13 = *(uint *)(param_3 + 1);
  plVar1 = param_1 + 6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (*(uint *)(param_1 + 8) < uVar13) {
    FUN_148298f1a(plVar1);
  }
  local_148 = param_1 + 3;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  local_130 = param_4;
  if (*(uint *)(param_1 + 5) < uVar13) {
    FUN_148298f1a(local_148);
  }
  if ((int)param_3[1] != 0) {
    uVar11 = 0;
    do {
      local_124 = *(float *)(*param_3 + uVar11 * 4);
      FUN_148298fa0(param_1,&local_124);
      uVar8 = (ulonglong)*(uint *)(*param_3 + uVar11 * 4);
      lVar4 = *param_2;
      fVar19 = *(float *)(lVar4 + uVar8 * 0xc);
      fVar23 = *(float *)(lVar4 + 4 + uVar8 * 0xc);
      fVar18 = *(float *)(lVar4 + 8 + uVar8 * 0xc);
      fStack_120 = (fVar16 * fVar25 - fVar17 * fVar21) * fVar18 +
                   (fVar21 * local_11c - fVar25 * fVar26) * fVar19 +
                   (fVar26 * fVar17 - local_11c * fVar16) * fVar23;
      local_124 = fVar18 * local_11c + fVar19 * fVar17 + fVar23 * fVar25;
      FUN_148298fa0(plVar1);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_3 + 1));
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar13;
  if (*(uint *)(param_1 + 5) < uVar13) {
    FUN_148298f1a(local_148);
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  do {
    if (uVar13 < 3) {
      if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar10 = (ulonglong)uVar13;
    uVar11 = 0;
    bVar6 = false;
    uVar8 = 0;
    fVar17 = 6.2831855;
    local_138 = param_1;
    do {
      uVar14 = uVar8 + 1;
      uVar12 = uVar14 & 0xffffffff;
      if (uVar14 == uVar10) {
        uVar12 = 0;
      }
      uVar5 = (ulonglong)((int)uVar8 + 2) % uVar10;
      lVar4 = *plVar1;
      fVar25 = *(float *)(lVar4 + uVar8 * 8);
      fVar16 = *(float *)(lVar4 + 4 + uVar8 * 8);
      fVar19 = *(float *)(lVar4 + uVar12 * 8);
      fVar21 = *(float *)(lVar4 + 4 + uVar12 * 8);
      fVar23 = *(float *)(lVar4 + uVar5 * 8);
      fVar26 = *(float *)(lVar4 + 4 + uVar5 * 8);
      fVar18 = fVar26 - fVar21;
      fVar20 = fVar23 - fVar19;
      fVar22 = fVar16 - fVar21;
      fVar24 = fVar25 - fVar19;
      fVar18 = (fVar24 * fVar20 + fVar22 * fVar18) /
               (SQRT(fVar20 * fVar20 + fVar18 * fVar18) * SQRT(fVar24 * fVar24 + fVar22 * fVar22));
      if (fVar18 <= -1.0) {
        fVar18 = -1.0;
      }
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      fVar18 = acosf(fVar18);
      lVar4 = local_130;
      plVar7 = local_138;
      uVar15 = -(uint)(((fVar21 - fVar26) * (fVar25 - fVar23) -
                       (fVar19 - fVar23) * (fVar16 - fVar26)) * 0.5 < 0.0);
      fVar18 = (float)(uVar15 & (uint)(6.2831855 - fVar18) | ~uVar15 & (uint)fVar18);
      *(float *)(*local_148 + uVar12 * 4) = fVar18;
      if ((fVar18 < fVar17) || (!bVar6)) {
        uVar9 = 0;
        do {
          local_13c = fVar17;
          if (((uVar5 != uVar9) && (uVar8 != uVar9)) && (uVar12 != uVar9)) {
            fVar20 = *(float *)(*plVar1 + uVar9 * 8);
            fVar22 = *(float *)(*plVar1 + 4 + uVar9 * 8);
            if (1.1920929e-07 <=
                ((fVar25 - fVar20) * (fVar21 - fVar22) - (fVar19 - fVar20) * (fVar16 - fVar22)) *
                0.5) {
              if ((1.1920929e-07 <=
                   ((fVar19 - fVar20) * (fVar26 - fVar22) - (fVar21 - fVar22) * (fVar23 - fVar20)) *
                   0.5) && (1.1920929e-07 <=
                            ((fVar23 - fVar20) * (fVar16 - fVar22) -
                            (fVar25 - fVar20) * (fVar26 - fVar22)) * 0.5)) {
                if (!bVar6) {
                  bVar6 = false;
                  uVar11 = uVar12;
                  fVar17 = fVar18;
                }
                goto LAB_14828d5e4;
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
        bVar6 = true;
        uVar11 = uVar12;
        fVar17 = fVar18;
      }
LAB_14828d5e4:
      uVar8 = uVar14;
    } while (uVar14 != uVar10);
    uVar15 = (uint)(uVar11 % uVar10);
    local_124 = *(float *)(*local_138 + ((ulonglong)((uVar13 + (int)uVar11) - 1) % uVar10) * 4);
    FUN_148298fa0(local_130,&local_124);
    local_124 = *(float *)(*plVar7 + (uVar11 % uVar10) * 4);
    FUN_148298fa0(lVar4,&local_124);
    local_124 = *(float *)(*plVar7 + ((ulonglong)((int)uVar11 + 1) % uVar10) * 4);
    FUN_148298fa0(lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      uVar13 = *(uint *)((longlong)plVar7 + 0xc);
      if (1 < uVar13) {
        iVar2 = (int)plVar7[1];
        memmove((void *)((ulonglong)(iVar2 * uVar15) + lVar4),
                (void *)((ulonglong)((uVar15 + 1) * iVar2) + lVar4),
                (ulonglong)((uVar13 + ~uVar15) * iVar2));
        uVar13 = *(uint *)((longlong)plVar7 + 0xc);
      }
      if (uVar13 != 0) {
        *(uint *)((longlong)plVar7 + 0xc) = uVar13 - 1;
      }
    }
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      uVar13 = *(uint *)((longlong)plVar7 + 0x3c);
      if (1 < uVar13) {
        iVar2 = (int)plVar7[7];
        memmove((void *)((ulonglong)(iVar2 * uVar15) + lVar4),
                (void *)((ulonglong)((uVar15 + 1) * iVar2) + lVar4),
                (ulonglong)((uVar13 + ~uVar15) * iVar2));
        uVar13 = *(uint *)((longlong)plVar7 + 0x3c);
      }
      if (uVar13 != 0) {
        *(uint *)((longlong)plVar7 + 0x3c) = uVar13 - 1;
      }
    }
    lVar4 = *local_148;
    if (lVar4 != 0) {
      uVar13 = *(uint *)((longlong)plVar7 + 0x24);
      if (1 < uVar13) {
        iVar2 = (int)plVar7[4];
        memmove((void *)((ulonglong)(iVar2 * uVar15) + lVar4),
                (void *)((ulonglong)((uVar15 + 1) * iVar2) + lVar4),
                (ulonglong)((uVar13 + ~uVar15) * iVar2));
        uVar13 = *(uint *)((longlong)plVar7 + 0x24);
      }
      if (uVar13 != 0) {
        *(uint *)((longlong)plVar7 + 0x24) = uVar13 - 1;
      }
    }
    uVar13 = *(uint *)((longlong)plVar7 + 0xc);
    param_1 = local_138;
  } while( true );
}



// FUNCTION 14828d812 FUN_14828d812 body=249 status=ok
// SIG undefined FUN_14828d812(void)

void FUN_14828d812(longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3d;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *(uint *)(param_1 + 4);
  local_3d = param_3;
  local_3c = param_4;
  if ((uVar4 & 1) != 0) {
    FUN_148298fa0(param_1 + 0x10,&local_3d);
    uVar4 = *(uint *)(param_1 + 4);
  }
  if ((uVar4 & 4) != 0) {
    FUN_148298fa0(param_1 + 0x28,&local_3c);
  }
  iVar2 = *(int *)(param_1 + 0x4c);
  lVar6 = 0;
  do {
    FUN_148298fa0((longlong *)(param_1 + 0x40),param_2 + lVar6);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  lVar6 = 0;
  do {
    lVar3 = *(longlong *)(param_1 + 0x40);
    local_48 = *(undefined4 *)(lVar3 + (ulonglong)(uint)(iVar2 + (int)lVar6) * 4);
    lVar1 = lVar6 + 1;
    iVar5 = (int)lVar1;
    if (lVar6 == 2) {
      iVar5 = 0;
    }
    local_44 = *(undefined4 *)(lVar3 + (ulonglong)(uint)(iVar5 + iVar2) * 4);
    FUN_1482991a0(param_1 + 0x120,&local_48);
    lVar6 = lVar1;
  } while (lVar1 != 3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828d90c FUN_14828d90c body=149 status=ok
// SIG undefined FUN_14828d90c(void)

int * FUN_14828d90c(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(*DAT_14cb46728)(0,0x20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 1) = 0x10;
  local_38 = puVar1;
  if (param_4 != 0) {
    FUN_148298f1a(puVar1,param_4);
  }
  puVar1[3] = param_3;
  FUN_148298fa0(param_1,&local_38);
  *param_2 = *(int *)(param_1 + 0xc) + -1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828d9a2 FUN_14828d9a2 body=126 status=ok
// SIG undefined FUN_14828d9a2(void)

void FUN_14828d9a2(longlong *param_1)

{
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014828d9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014828da1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 14828da20 FUN_14828da20 body=119 status=ok
// SIG undefined FUN_14828da20(void)

void FUN_14828da20(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((ulonglong)*param_2 != 0xffffffff) {
    plVar1 = *(longlong **)(*param_1 + (ulonglong)*param_2 * 8);
    if (*(int *)((longlong)plVar1 + 0xc) != 0) {
      lVar2 = 8;
      uVar3 = 0;
      do {
        (**(code **)(*plVar1 + -8 + lVar2))(plVar1[3],*(undefined8 *)(*plVar1 + lVar2));
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar3 < *(uint *)((longlong)plVar1 + 0xc));
    }
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
    FUN_148298a2c(param_1,*param_2);
    *param_2 = 0xffffffff;
  }
  return;
}



// FUNCTION 14828da97 FUN_14828da97 body=1325 status=ok
// SIG undefined FUN_14828da97(void)

void FUN_14828da97(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  char *local_e0;
  int local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  uint local_bc;
  longlong *local_b8;
  ulonglong local_b0;
  longlong local_a8;
  code *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  uint local_74;
  byte local_70 [4];
  undefined4 local_6c;
  code *local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14828be99();
  if ((*(int *)((longlong)param_1 + 0xb4) == 0) && (*(int *)((longlong)param_1 + 0xfc) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if (param_1[2] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[2],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*param_1,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_143afd20c();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_b8 = param_1;
  if (*(int *)((longlong)param_1 + 0xb4) == 0) {
    local_68 = (code *)param_1[0x12];
    local_60 = param_1[0x13];
    lVar7 = param_1[0x1b];
    uVar13 = *(uint *)((longlong)param_1 + 0xe4);
    uVar9 = (ulonglong)uVar13;
    local_54 = 0;
    if (uVar9 != 0) {
      uVar14 = 0;
      local_54 = 0;
      do {
        local_54 = local_54 + *(uint *)(*(longlong *)(lVar7 + uVar14 * 8) + 0x74) / 3;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
    }
    plVar3 = (longlong *)param_1[0x14];
    local_70[0] = 0;
    local_6c = 1;
    local_58 = 0;
    local_50 = 0;
    if (local_68 != (code *)0x0) {
      cVar6 = (*local_68)(1,0);
      if (cVar6 == '\0') {
        LOCK();
        local_70[0] = 1;
        UNLOCK();
      }
    }
    FUN_14828d90c(plVar3,&local_74,0,uVar13);
    local_90 = (undefined8 *)0x0;
    local_88 = 0x10;
    local_80 = 0;
    local_84 = uVar13;
    if (uVar13 != 0) {
      FUN_148298f1a(&local_90,uVar13);
      uVar14 = 0;
      puVar16 = local_90;
      do {
        *puVar16 = *(undefined8 *)(lVar7 + uVar14 * 8);
        puVar16[1] = local_70;
        local_a0 = FUN_143afe4bb;
        local_98 = puVar16;
        FUN_148298fa0(*(undefined8 *)(*plVar3 + (ulonglong)local_74 * 8),&local_a0);
        uVar14 = uVar14 + 1;
        puVar16 = puVar16 + 2;
      } while (uVar9 != uVar14);
    }
    FUN_14828da20(plVar3,&local_74);
    bVar5 = local_70[0];
    if (local_90 != (undefined8 *)0x0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(local_90,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    if (local_68 != (code *)0x0) {
      cVar6 = (*local_68)(local_6c,100,local_60);
      if (cVar6 == '\0') {
        LOCK();
        local_70[0] = 1;
        UNLOCK();
      }
    }
    if ((bVar5 & 1) == 0) {
      *(undefined1 *)(local_b8 + 0x21) = 1;
    }
  }
  else {
    local_e8 = param_1[0x13];
    cVar6 = FUN_14828dfe2(param_1 + 8,param_1[0x14],param_2,param_1[0x12]);
    if ((cVar6 != '\0') &&
       (local_b0 = (ulonglong)*(uint *)((longlong)param_1 + 0xb4), local_b0 != 0)) {
      lVar7 = param_1[0xe];
      uVar9 = 0;
      iVar12 = 0;
      uVar13 = 0;
      do {
        lVar11 = uVar9 * 3;
        if (*(int *)(lVar7 + 0xc + uVar9 * 0x18) != 0) {
          uVar14 = 0;
          local_c8 = uVar9;
          local_a8 = lVar11;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + lVar11 * 8) + uVar14 * 8);
            uVar8 = *(uint *)(lVar4 + 0x44);
            if (uVar8 != 0) {
              uVar17 = 0;
              local_bc = uVar13;
              do {
                lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + uVar17 * 8);
                iVar2 = *(int *)(lVar7 + 0x30);
                pcVar10 = "planar";
                if (iVar2 != 0) {
                  if (iVar2 == 1) {
                    pcVar10 = "ortho";
                  }
                  else {
                    pcVar10 = "LSCM";
                    if (iVar2 == 3) {
                      pcVar10 = "piecewise";
                    }
                  }
                }
                if (*(char *)(lVar7 + 0xe0) == '\x01') {
                  uVar1 = uVar13 + uVar17;
                  uVar15 = (undefined4)uVar17;
                  if (*(char *)(lVar7 + 0xb8) == '\x01') {
                    local_e8 = CONCAT44(local_e8._4_4_,uVar15);
                    local_e0 = pcVar10;
                    FUN_14678752e("   Chart %u (mesh %u, group %u, id %u) (%s): invalid parameterization, self-intersecting boundary.\n"
                                  ,uVar1 & 0xffffffff,local_c8,uVar14 & 0xffffffff);
                    uVar9 = local_c8;
                  }
                  if (*(int *)(lVar7 + 0xc0) != 0) {
                    local_d0 = *(undefined4 *)(lVar7 + 0xbc);
                    local_e8 = CONCAT44(local_e8._4_4_,uVar15);
                    local_e0 = pcVar10;
                    local_d8 = *(int *)(lVar7 + 0xc0);
                    FUN_14678752e("   Chart %u  (mesh %u, group %u, id %u) (%s): invalid parameterization, %u / %u flipped triangles.\n"
                                  ,uVar1 & 0xffffffff,local_c8,uVar14 & 0xffffffff);
                    uVar9 = local_c8;
                  }
                  if (*(int *)(lVar7 + 0xc4) != 0) {
                    local_d0 = *(undefined4 *)(lVar7 + 0xbc);
                    local_e8 = CONCAT44(local_e8._4_4_,uVar15);
                    local_e0 = pcVar10;
                    local_d8 = *(int *)(lVar7 + 0xc4);
                    FUN_14678752e("   Chart %u  (mesh %u, group %u, id %u) (%s): invalid parameterization, %u / %u zero area triangles.\n"
                                  ,uVar1 & 0xffffffff,local_c8,uVar14 & 0xffffffff);
                    uVar9 = local_c8;
                  }
                  iVar12 = iVar12 + 1;
                  uVar8 = *(uint *)(lVar4 + 0x44);
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar8);
              lVar7 = local_b8[0xe];
              uVar13 = local_bc + (int)uVar17;
              lVar11 = local_a8;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(lVar7 + 0xc + lVar11 * 8));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != local_b0);
      if (iVar12 != 0) {
        FUN_14678752e("   %u charts with invalid parameterizations\n",iVar12);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828dfe2 FUN_14828dfe2 body=1693 status=ok
// SIG undefined FUN_14828dfe2(void)

ulonglong FUN_14828dfe2(longlong *param_1,longlong *param_2,undefined8 param_3,code *param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  code *local_168;
  longlong local_160;
  uint local_154;
  undefined8 *local_150;
  undefined8 local_148;
  byte *local_140;
  longlong *local_138;
  undefined8 **local_130;
  undefined8 **local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong local_f8;
  uint local_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  byte local_70 [4];
  undefined4 local_6c;
  code *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)uVar2;
  local_54 = 0;
  if (uVar9 != 0) {
    uVar11 = 0;
    local_54 = 0;
    do {
      local_54 = local_54 + *(uint *)(*(longlong *)(*param_1 + uVar11 * 8) + 0x4c) / 3;
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  local_54 = local_54 * 2;
  local_70[0] = 0;
  local_6c = 1;
  local_60 = param_5;
  local_58 = 0;
  local_50 = 0;
  local_170 = param_3;
  local_68 = param_4;
  if ((param_4 != (code *)0x0) && (cVar4 = (*param_4)(1,0), cVar4 == '\0')) {
    LOCK();
    local_70[0] = 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 9) = 0;
  plVar1 = param_1 + 6;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    uVar11 = 0;
    do {
      lVar6 = *plVar1;
      if (*(int *)(lVar6 + 0xc + uVar11 * 0x18) != 0) {
        plVar7 = (longlong *)(lVar6 + uVar11 * 0x18);
        uVar10 = 0;
        do {
          FUN_148298c7e(*(undefined8 *)(*plVar7 + uVar10 * 8));
          lVar6 = *(longlong *)(*(longlong *)(*plVar1 + uVar11 * 0x18) + uVar10 * 8);
          if (lVar6 != 0) {
            if (DAT_14cb46730 == (code *)0x0) {
              (*DAT_14cb46728)(lVar6,0);
            }
            else {
              (*DAT_14cb46730)();
            }
          }
          uVar10 = uVar10 + 1;
          lVar6 = *plVar1;
          plVar7 = (longlong *)(lVar6 + uVar11 * 0x18);
        } while (uVar10 < *(uint *)((longlong)plVar7 + 0xc));
      }
      *(undefined4 *)(lVar6 + 0xc + uVar11 * 0x18) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0x3c));
    if (*(uint *)((longlong)param_1 + 0x3c) != uVar2) {
      FUN_14678752e("\rASSERT: %s %s %d\n","m_meshChartGroups.size() == meshCount",
                    ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                    ,0x1f06);
    }
  }
  *(uint *)((longlong)param_1 + 0x3c) = uVar2;
  uVar5 = uVar2;
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_148298f1a(plVar1,uVar9);
    uVar5 = *(uint *)((longlong)param_1 + 0x3c);
  }
  if (uVar5 != 0) {
    lVar6 = 0x10;
    uVar11 = 0;
    do {
      lVar8 = param_1[6];
      *(undefined8 *)(lVar8 + -0x10 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -8 + lVar6) = 8;
      *(undefined4 *)(lVar8 + lVar6) = 0;
      uVar11 = uVar11 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0x3c));
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar2;
  uVar5 = uVar2;
  if (*(uint *)(param_1 + 5) < uVar2) {
    FUN_148298f1a(param_1 + 3,uVar9);
    uVar5 = *(uint *)((longlong)param_1 + 0x24);
  }
  if (uVar5 != 0) {
    lVar6 = 0x40;
    uVar11 = 0;
    do {
      lVar8 = param_1[3];
      *(undefined8 *)(lVar8 + -0x40 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -0x38 + lVar6) = 4;
      *(undefined4 *)(lVar8 + -0x30 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -0x28 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -0x20 + lVar6) = 4;
      *(undefined4 *)(lVar8 + -0x18 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -0x10 + lVar6) = 0;
      *(undefined8 *)(lVar8 + -8 + lVar6) = 4;
      *(undefined4 *)(lVar8 + lVar6) = 0;
      uVar11 = uVar11 + 1;
      lVar6 = lVar6 + 0x48;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0x24));
  }
  local_88 = 0;
  local_80 = 0x18;
  local_78 = 0;
  local_7c = uVar2;
  if (uVar2 == 0) {
    local_a0 = 0;
    local_98 = 4;
    uStack_94 = 0;
    local_90 = 0;
  }
  else {
    FUN_148298f1a(&local_88);
    lVar6 = 0;
    lVar8 = 0;
    uVar11 = 0;
    do {
      *(undefined8 *)(local_88 + lVar6) = *(undefined8 *)(*param_1 + uVar11 * 8);
      *(longlong *)(local_88 + 8 + lVar6) = param_1[6] + lVar6;
      *(longlong *)(local_88 + 0x10 + lVar6) = param_1[3] + lVar8;
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x48;
      lVar6 = lVar6 + 0x18;
    } while (uVar9 != uVar11);
    local_a0 = 0;
    local_90 = 0;
    local_98 = 4;
    uStack_94 = uVar2;
    FUN_148298f1a(&local_a0,uVar9);
    uVar11 = 0;
    do {
      *(float *)(local_a0 + uVar11 * 4) =
           (float)*(uint *)(*(longlong *)(*param_1 + uVar11 * 8) + 0x4c);
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  local_d8 = 0;
  local_d0 = 4;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 4;
  local_b0 = 0;
  local_a8 = 0;
  local_f8 = local_a0;
  local_f0 = uStack_94;
  FUN_14829a620();
  local_100 = (*DAT_14cb46728)(0,0x380);
  FUN_14829ab04(local_100);
  local_108 = (undefined8 *)(*DAT_14cb46728)(0,0xb0);
  *local_108 = 0;
  local_108[1] = 4;
  *(undefined4 *)(local_108 + 2) = 0;
  local_108[3] = 0;
  *(undefined4 *)(local_108 + 4) = 0;
  local_108[5] = 0;
  *(undefined4 *)(local_108 + 6) = 0;
  local_108[10] = 0;
  local_108[0xb] = 4;
  *(undefined4 *)(local_108 + 0xc) = 0;
  local_108[0xd] = 0;
  local_108[0xe] = 4;
  *(undefined4 *)(local_108 + 0xf) = 0;
  local_108[0x10] = 0;
  local_108[0x11] = 4;
  *(undefined4 *)(local_108 + 0x12) = 0;
  local_108[0x13] = 0;
  local_108[0x14] = 4;
  *(undefined4 *)(local_108 + 0x15) = 0;
  local_110 = (undefined8 *)(*DAT_14cb46728)(0,0x30);
  *local_110 = 0;
  local_110[1] = 4;
  *(undefined4 *)(local_110 + 2) = 0;
  local_110[3] = 0;
  local_110[4] = 4;
  *(undefined4 *)(local_110 + 5) = 0;
  local_118 = (*DAT_14cb46728)(0,0x1c8);
  FUN_14829adf2(local_118);
  local_148 = local_170;
  local_140 = local_70;
  local_150 = &local_100;
  local_138 = param_2;
  local_130 = &local_108;
  local_128 = &local_110;
  local_120 = &local_118;
  FUN_14828d90c(param_2,&local_154,&local_150,uVar9);
  lVar6 = local_88;
  if (uVar2 != 0) {
    uVar11 = uVar9;
    do {
      uVar11 = uVar11 - 1;
      local_160 = lVar6 + (ulonglong)*(uint *)(local_e8[0] + (uVar11 & 0xffffffff) * 4) * 0x18;
      local_168 = FUN_143afd376;
      FUN_148298fa0(*(undefined8 *)(*param_2 + (ulonglong)local_154 * 8),&local_168);
      uVar9 = 0;
    } while (uVar11 != 0);
  }
  FUN_14828da20(param_2,&local_154);
  bVar3 = local_70[0];
  if ((local_70[0] & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  FUN_1482a5a94(local_118);
  if (local_118 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_118,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_1482a5d28(local_110);
  if (local_110 != (undefined8 *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_110,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_1482a5c62(local_108);
  if (local_108 != (undefined8 *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_108,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_14829a742(&local_100);
  FUN_14829a7b2(local_e8);
  if (local_a0 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_a0,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_88 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_88,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((local_68 != (code *)0x0) && (cVar4 = (*local_68)(local_6c,100,local_60), cVar4 == '\0')) {
    LOCK();
    local_70[0] = 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar9 >> 8),~bVar3) & 0xffffff01;
}



// FUNCTION 14828e680 FUN_14828e680 body=3633 status=ok
// SIG undefined FUN_14828e680(void)

void FUN_14828e680(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  size_t _Size;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  float fVar27;
  undefined1 auStack_1e8 [47];
  char local_1b9;
  longlong local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  uint local_17c;
  ulonglong local_178;
  ulonglong local_170;
  longlong local_168;
  ulonglong local_160;
  int local_158;
  void *local_150;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_138 [2];
  undefined4 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b8 = param_2;
  if (*(int *)((longlong)param_1 + 0xb4) == 0) {
    if (*(int *)((longlong)param_1 + 0xfc) == 0) goto LAB_14828e6e1;
LAB_14828e6d0:
    cVar9 = (char)param_1[0x21];
  }
  else {
    if (*(int *)((longlong)param_1 + 0xfc) != 0) goto LAB_14828e6d0;
    cVar9 = (char)param_1[0x11];
  }
  if (cVar9 == '\0') {
LAB_14828e6e1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_1e8);
  }
  if (*(float *)(param_2 + 8) <= 0.0 && *(float *)(param_2 + 8) != 0.0) {
    puts("PackCharts: PackOptions::texelsPerUnit is negative.");
    *(undefined4 *)(local_1b8 + 8) = 0;
  }
  FUN_143afd20c(param_1);
  if (param_1[2] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[2],0);
    }
    else {
      (*DAT_14cb46730)();
    }
    param_1[2] = 0;
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*param_1,0);
    }
    else {
      (*DAT_14cb46730)();
    }
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  local_138[0] = 0;
  local_138[1] = 8;
  local_128 = 0;
  local_120 = 0;
  local_118 = 4;
  local_110 = 0;
  local_108 = 0;
  local_100 = 8;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 8;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 4;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 4;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0x75bcd15;
  local_80 = 0x1f123bb5159a55a0;
  local_78 = 0x74cbb1;
  if (*(int *)((longlong)param_1 + 0xfc) == 0) {
    FUN_14828fad0(local_138,param_1[0x14],param_1 + 8);
  }
  else {
    uVar22 = 0;
    do {
      FUN_14828f4de(local_138,*(undefined8 *)(param_1[0x1e] + uVar22 * 8));
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)((longlong)param_1 + 0xfc));
  }
  cVar9 = FUN_14828fd6c(local_138,local_1b8,param_1[0x12],param_1[0x13]);
  if (cVar9 == '\0') goto LAB_14828eb11;
  uVar22 = 0;
  *(int *)(param_1 + 4) = local_100._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_e8._4_4_;
  *(undefined4 *)(param_1 + 3) = local_90;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_8c;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_88;
  if (local_100._4_4_ != 0) {
    uVar22 = 0;
    lVar11 = (*DAT_14cb46728)();
    param_1[2] = lVar11;
    if ((int)param_1[4] != 0) {
      uVar13 = 0;
      do {
        *(undefined4 *)(param_1[2] + uVar13 * 4) = *(undefined4 *)(local_120 + uVar13 * 4);
        uVar13 = uVar13 + 1;
        uVar22 = (ulonglong)*(uint *)(param_1 + 4);
      } while (uVar13 < uVar22);
    }
  }
  local_1b0 = param_1;
  if (*(char *)(local_1b8 + 0x13) == '\x01') {
    if ((int)param_1[3] * (int)uVar22 * *(int *)((longlong)param_1 + 0x1c) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (*DAT_14cb46728)(0);
      uVar22 = (ulonglong)*(uint *)(param_1 + 4);
    }
    *param_1 = lVar11;
    if ((int)uVar22 != 0) {
      local_198 = local_138[0];
      uVar13 = 0;
      do {
        uVar26 = *(uint *)((longlong)param_1 + 0x1c);
        uVar25 = (ulonglong)uVar26;
        if (uVar25 != 0) {
          piVar5 = *(int **)(local_198 + uVar13 * 8);
          iVar18 = *(int *)(local_1b8 + 4);
          uVar10 = *(uint *)(param_1 + 3);
          lVar11 = *param_1;
          uVar22 = 0;
          local_1a8 = uVar13;
          iVar16 = iVar18;
          do {
            memcpy((void *)((ulonglong)((int)uVar13 * uVar26 * uVar10) * 4 + lVar11 + uVar22 * 4),
                   (void *)((ulonglong)(uint)(*piVar5 * iVar16 + iVar18) * 4 +
                           *(longlong *)(piVar5 + 2)),(ulonglong)uVar10 << 2);
            iVar16 = iVar16 + 1;
            uVar22 = (ulonglong)((int)uVar22 + uVar10);
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
          uVar22 = (ulonglong)*(uint *)(local_1b0 + 4);
          param_1 = local_1b0;
          uVar13 = local_1a8;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar22);
    }
  }
  if (((code *)param_1[0x12] != (code *)0x0) && (cVar9 = (*(code *)param_1[0x12])(3), cVar9 == '\0')
     ) goto LAB_14828eb11;
  if (*(int *)((longlong)param_1 + 0xfc) == 0) {
    *(int *)(param_1 + 5) = *(int *)((longlong)param_1 + 0xb4);
    _Size = 0;
    pvVar14 = (void *)0x0;
    if (*(int *)((longlong)param_1 + 0xb4) != 0) goto LAB_14828ea94;
  }
  else {
    *(int *)(param_1 + 5) = *(int *)((longlong)param_1 + 0xfc);
LAB_14828ea94:
    pvVar14 = (void *)(*DAT_14cb46728)(0);
    _Size = (ulonglong)*(uint *)(param_1 + 5) * 0x28;
  }
  param_1[1] = (longlong)pvVar14;
  local_1a0 = 0;
  memset(pvVar14,0,_Size);
  lVar11 = local_f0;
  if (*(int *)((longlong)param_1 + 0xfc) == 0) {
    local_1a0 = 0;
    if ((int)param_1[5] != 0) {
      uVar22 = 0;
      local_1a0 = 0;
      uVar26 = 0;
      local_1b8 = local_f0;
      do {
        plVar17 = (longlong *)(uVar22 * 0x28 + param_1[1]);
        plVar6 = *(longlong **)(param_1[0x18] + uVar22 * 8);
        local_158 = 0;
        local_150 = (void *)0x0;
        local_148 = 4;
        local_140 = 0;
        local_190 = uVar22;
        if (plVar6 == (longlong *)0x0) {
LAB_14828ee52:
          pvVar14 = (void *)0x0;
        }
        else {
          local_158 = *(int *)((longlong)plVar6 + 0xc);
          local_148 = CONCAT44(local_158 + 0x1fU >> 5,4);
          if ((local_158 + 0x1fU < 0x20) ||
             (FUN_148298f1a(&local_150), pvVar14 = local_150, local_150 == (void *)0x0))
          goto LAB_14828ee52;
          if (local_148._4_4_ != 0) {
            memset(local_150,0,(ulonglong)(uint)(local_148._4_4_ * (int)local_148));
          }
        }
        lVar12 = local_1b0[0xb];
        local_198 = local_190 * 9;
        uVar10 = (int)plVar17[4] + *(int *)(lVar12 + 0x3c + local_190 * 0x48);
        *(uint *)(plVar17 + 4) = uVar10;
        uVar15 = *(int *)(lVar12 + 0xc + local_190 * 0x48) * 3 + *(int *)((longlong)plVar17 + 0x1c);
        *(uint *)((longlong)plVar17 + 0x1c) = uVar15;
        lVar12 = local_1b0[0xe];
        local_188 = local_190 * 3;
        if (*(int *)(lVar12 + 0xc + local_190 * 0x18) != 0) {
          uVar22 = 0;
          do {
            lVar23 = *(longlong *)(*(longlong *)(lVar12 + local_190 * 0x18) + uVar22 * 8);
            if (*(int *)(lVar23 + 0x44) != 0) {
              uVar13 = 0;
              do {
                lVar11 = *(longlong *)(*(longlong *)(lVar23 + 0x38) + uVar13 * 8);
                *(int *)(plVar17 + 4) = (int)plVar17[4] + *(int *)(lVar11 + 0x3c);
                uVar10 = *(uint *)(*(longlong *)(lVar11 + 0x28) + 0x4c);
                if (plVar6 == (longlong *)0x0) {
                  uVar15 = uVar15 + (uVar10 / 3) * 3;
                  *(uint *)((longlong)plVar17 + 0x1c) = uVar15;
                }
                else if (2 < uVar10) {
                  uVar25 = 0;
                  do {
                    uVar24 = *(uint *)(plVar6[3] +
                                      (ulonglong)
                                      *(uint *)(*(longlong *)(lVar11 + 0x58) + uVar25 * 4) * 4);
                    uVar4 = *(uint *)((longlong)pvVar14 + (ulonglong)(uVar24 >> 5) * 4);
                    if ((uVar4 >> (uVar24 & 0x1f) & 1) == 0) {
                      *(uint *)((longlong)pvVar14 + (ulonglong)(uVar24 >> 5) * 4) =
                           uVar4 | 1 << ((byte)uVar24 & 0x1f);
                      uVar15 = (uint)*(byte *)(*plVar6 + (ulonglong)uVar24) +
                               *(int *)((longlong)plVar17 + 0x1c);
                      *(uint *)((longlong)plVar17 + 0x1c) = uVar15;
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar10 / 3 != uVar25);
                }
                *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
                uVar13 = uVar13 + 1;
              } while (uVar13 < *(uint *)(lVar23 + 0x44));
              lVar12 = local_1b0[0xe];
              lVar11 = local_1b8;
              local_1a8 = uVar22;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(lVar12 + 0xc + local_190 * 0x18));
          uVar10 = *(uint *)(plVar17 + 4);
        }
        if (uVar10 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (*DAT_14cb46728)(0,(ulonglong)uVar10 * 0x14);
          uVar15 = *(uint *)((longlong)plVar17 + 0x1c);
        }
        plVar17[2] = lVar12;
        if (uVar15 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (*DAT_14cb46728)(0,(ulonglong)uVar15 << 2);
        }
        plVar17[1] = lVar12;
        if ((ulonglong)*(uint *)(plVar17 + 3) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (*DAT_14cb46728)(0,(ulonglong)*(uint *)(plVar17 + 3) * 0x18);
        }
        pvVar14 = local_150;
        *plVar17 = lVar12;
        lVar12 = local_1b0[0xb];
        lVar23 = *(longlong *)(lVar12 + local_198 * 8);
        uVar22 = (ulonglong)*(uint *)(lVar12 + 0xc + local_198 * 8);
        lVar7 = *(longlong *)(lVar12 + 0x18 + local_198 * 8);
        uVar13 = (ulonglong)*(uint *)(lVar12 + 0x3c + local_198 * 8);
        if (uVar13 != 0) {
          puVar19 = *(undefined4 **)(lVar12 + 0x30 + local_198 * 8);
          lVar12 = 0;
          do {
            lVar8 = plVar17[2];
            puVar1 = (undefined8 *)(lVar8 + lVar12 * 4);
            *puVar1 = 0xffffffffffffffff;
            puVar1[1] = 0;
            *(undefined4 *)(lVar8 + 0x10 + lVar12 * 4) = *puVar19;
            lVar12 = lVar12 + 5;
            puVar19 = puVar19 + 1;
          } while (uVar13 * 5 != lVar12);
        }
        if (uVar22 != 0) {
          iVar18 = 0;
          uVar25 = 0;
          do {
            iVar16 = *(int *)(lVar23 + uVar25 * 4);
            lVar12 = 0;
            do {
              *(undefined4 *)(plVar17[1] + (ulonglong)(uint)(iVar16 * 3 + (int)lVar12) * 4) =
                   *(undefined4 *)(lVar7 + (ulonglong)(uint)(iVar18 + (int)lVar12) * 4);
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            uVar25 = uVar25 + 1;
            iVar18 = iVar18 + 3;
          } while (uVar25 != uVar22);
        }
        lVar12 = local_1b0[0xe];
        if (*(int *)(lVar12 + 0xc + local_188 * 8) != 0) {
          local_178 = (ulonglong)(uint)((int)local_148 * local_148._4_4_);
          local_1b9 = local_148._4_4_ == 0 || local_150 == (void *)0x0;
          uVar22 = 0;
          local_198 = local_198 & 0xffffffff00000000;
          lVar23 = local_188;
          do {
            lVar7 = *(longlong *)(*(longlong *)(lVar12 + lVar23 * 8) + uVar22 * 8);
            if (*(int *)(lVar7 + 0x44) != 0) {
              uVar25 = 0;
              local_170 = uVar22;
              local_168 = lVar7;
              do {
                lVar12 = *(longlong *)(*(longlong *)(local_168 + 0x38) + uVar25 * 8);
                lVar23 = *(longlong *)(lVar12 + 0x28);
                uVar10 = *(uint *)(lVar23 + 0x4c);
                local_1a8 = (ulonglong)uVar10;
                iVar18 = (int)uVar13;
                if (*(int *)(lVar12 + 0x3c) != 0) {
                  uVar22 = 0;
                  do {
                    lVar7 = plVar17[2];
                    uVar13 = (ulonglong)(uint)(iVar18 + (int)uVar22);
                    *(undefined4 *)(lVar7 + uVar13 * 0x14) =
                         **(undefined4 **)(lVar11 + (ulonglong)uVar26 * 8);
                    *(uint *)(lVar7 + 4 + uVar13 * 0x14) = uVar26;
                    uVar20 = (ulonglong)*(uint *)(*(longlong *)(lVar12 + 0x88) + uVar22 * 4);
                    lVar8 = *(longlong *)(lVar23 + 0x88);
                    fVar3 = *(float *)(lVar8 + uVar20 * 8);
                    fVar27 = 0.0;
                    if (0.0 <= fVar3) {
                      fVar27 = fVar3;
                    }
                    *(float *)(lVar7 + 8 + uVar13 * 0x14) = fVar27;
                    fVar3 = *(float *)(lVar8 + 4 + uVar20 * 8);
                    fVar27 = 0.0;
                    if (0.0 <= fVar3) {
                      fVar27 = fVar3;
                    }
                    *(float *)(lVar7 + 0xc + uVar13 * 0x14) = fVar27;
                    *(undefined4 *)(lVar7 + 0x10 + uVar13 * 0x14) =
                         *(undefined4 *)(*(longlong *)(lVar12 + 0x70) + uVar22 * 4);
                    uVar22 = uVar22 + 1;
                  } while (uVar22 < *(uint *)(lVar12 + 0x3c));
                }
                uVar22 = local_1a8 / 3;
                uVar15 = uVar10 / 3;
                if (2 < uVar10) {
                  lVar11 = 0;
                  uVar13 = 0;
                  do {
                    iVar16 = *(int *)(*(longlong *)(lVar12 + 0x58) + uVar13 * 4);
                    lVar23 = 0;
                    do {
                      uVar20 = (ulonglong)(uint)(iVar16 * 3) + lVar23;
                      uVar24 = (uint)uVar20;
                      if (plVar6 != (longlong *)0x0) {
                        uVar24 = *(uint *)(plVar6[6] + (uVar20 & 0xffffffff) * 4);
                      }
                      *(int *)(plVar17[1] + (ulonglong)uVar24 * 4) =
                           *(int *)(*(longlong *)(lVar12 + 0x40) + lVar11 + lVar23 * 4) + iVar18;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 3);
                    uVar13 = uVar13 + 1;
                    lVar11 = lVar11 + 0xc;
                  } while (uVar13 != uVar22);
                }
                lVar11 = *plVar17;
                *(undefined4 *)(lVar11 + 8 + (local_198 & 0xffffffff) * 0x18) =
                     **(undefined4 **)(local_1b8 + (ulonglong)uVar26 * 8);
                uVar21 = 4;
                if (*(char *)(lVar12 + 0xe0) == '\0') {
                  uVar21 = *(undefined4 *)(lVar12 + 0x30);
                }
                plVar2 = (longlong *)(lVar11 + (local_198 & 0xffffffff) * 0x18);
                *(undefined4 *)(plVar2 + 2) = uVar21;
                local_17c = uVar26;
                local_160 = uVar25;
                if (plVar6 == (longlong *)0x0) {
                  *(uint *)((longlong)plVar2 + 0xc) = uVar15;
                  if (uVar10 < 3) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = (*DAT_14cb46728)(0,uVar22 << 2);
                    uVar15 = *(uint *)((longlong)plVar2 + 0xc);
                  }
                  *plVar2 = lVar11;
                  if (uVar15 != 0) {
                    uVar22 = 0;
                    do {
                      *(undefined4 *)(*plVar2 + uVar22 * 4) =
                           *(undefined4 *)(*(longlong *)(lVar12 + 0x58) + uVar22 * 4);
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < *(uint *)((longlong)plVar2 + 0xc));
                  }
                }
                else {
                  if (local_1b9 == '\0') {
                    memset(pvVar14,0,local_178);
                  }
                  *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
                  if ((uint)local_1a8 < 3) {
LAB_14828f25a:
                    lVar11 = 0;
                  }
                  else {
                    iVar16 = 0;
                    uVar13 = 0;
                    do {
                      uVar26 = *(uint *)(plVar6[3] +
                                        (ulonglong)
                                        *(uint *)(*(longlong *)(lVar12 + 0x58) + uVar13 * 4) * 4);
                      uVar10 = *(uint *)((longlong)pvVar14 + (ulonglong)(uVar26 >> 5) * 4);
                      if ((uVar10 >> (uVar26 & 0x1f) & 1) == 0) {
                        *(uint *)((longlong)pvVar14 + (ulonglong)(uVar26 >> 5) * 4) =
                             1 << ((byte)uVar26 & 0x1f) | uVar10;
                        iVar16 = *(int *)((longlong)plVar2 + 0xc) + 1;
                        *(int *)((longlong)plVar2 + 0xc) = iVar16;
                      }
                      uVar13 = uVar13 + 1;
                    } while (uVar22 != uVar13);
                    if (iVar16 == 0) goto LAB_14828f25a;
                    lVar11 = (*DAT_14cb46728)(0);
                  }
                  *plVar2 = lVar11;
                  if (local_1b9 == '\0') {
                    memset(pvVar14,0,local_178);
                  }
                  if (2 < (uint)local_1a8) {
                    uVar25 = 0;
                    uVar13 = 0;
                    do {
                      uVar26 = *(uint *)(plVar6[3] +
                                        (ulonglong)
                                        *(uint *)(*(longlong *)(lVar12 + 0x58) + uVar25 * 4) * 4);
                      uVar10 = *(uint *)((longlong)pvVar14 + (ulonglong)(uVar26 >> 5) * 4);
                      uVar20 = uVar13;
                      if ((uVar10 >> (uVar26 & 0x1f) & 1) == 0) {
                        *(uint *)((longlong)pvVar14 + (ulonglong)(uVar26 >> 5) * 4) =
                             1 << ((byte)uVar26 & 0x1f) | uVar10;
                        uVar20 = (ulonglong)((int)uVar13 + 1);
                        *(uint *)(*plVar2 + uVar13 * 4) = uVar26;
                      }
                      uVar25 = uVar25 + 1;
                      uVar13 = uVar20;
                    } while (uVar22 != uVar25);
                  }
                }
                *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
                local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1);
                uVar13 = (ulonglong)(uint)(iVar18 + *(int *)(lVar12 + 0x3c));
                uVar26 = local_17c + 1;
                uVar25 = local_160 + 1;
                lVar11 = local_1b8;
              } while (uVar25 < *(uint *)(local_168 + 0x44));
              lVar12 = local_1b0[0xe];
              uVar22 = local_170;
              lVar23 = local_188;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(uint *)(lVar12 + 0xc + lVar23 * 8));
        }
        uVar22 = local_190;
        param_1 = local_1b0;
        cVar9 = '\x01';
        if ((code *)local_1b0[0x12] != (code *)0x0) {
          uVar10 = (uint)(((float)((int)local_190 + 1) / (float)*(uint *)(local_1b0 + 5)) * 100.0);
          if ((uint)local_1a0 != uVar10) {
            cVar9 = (*(code *)local_1b0[0x12])(3,uVar10,local_1b0[0x13]);
            local_1a0 = (ulonglong)uVar10;
          }
        }
        if (local_150 != (void *)0x0) {
          if (DAT_14cb46730 == (code *)0x0) {
            (*DAT_14cb46728)(local_150,0);
          }
          else {
            (*DAT_14cb46730)();
          }
        }
        if (cVar9 == '\0') goto LAB_14828eb11;
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_1 + 5));
    }
  }
  else {
    uVar22 = 0;
    uVar26 = 0;
    do {
      plVar6 = (longlong *)(param_1[1] + uVar22 * 0x28);
      plVar17 = *(longlong **)(param_1[0x1e] + uVar22 * 8);
      uVar10 = *(uint *)((longlong)plVar17 + 0x14);
      *(uint *)(plVar6 + 4) = uVar10;
      uVar15 = *(uint *)(*plVar17 + 0x74);
      *(uint *)((longlong)plVar6 + 0x1c) = uVar15;
      *(undefined4 *)(plVar6 + 3) = *(undefined4 *)(*plVar17 + 0xa4);
      if ((ulonglong)uVar10 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (*DAT_14cb46728)(0,(ulonglong)uVar10 * 0x14);
        uVar15 = *(uint *)((longlong)plVar6 + 0x1c);
      }
      plVar6[2] = lVar12;
      if (uVar15 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (*DAT_14cb46728)(0,(ulonglong)uVar15 << 2);
      }
      plVar6[1] = lVar12;
      if ((ulonglong)*(uint *)(plVar6 + 3) == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = (*DAT_14cb46728)(0,(ulonglong)*(uint *)(plVar6 + 3) * 0x18);
      }
      *plVar6 = lVar12;
      if (*(int *)((longlong)plVar17 + 0x14) != 0) {
        lVar12 = 8;
        uVar13 = 0;
        do {
          lVar23 = plVar6[2];
          *(undefined4 *)(lVar23 + -8 + lVar12 * 2) = *(undefined4 *)(plVar17[1] + uVar13 * 8);
          *(undefined4 *)(lVar23 + -4 + lVar12 * 2) = *(undefined4 *)(plVar17[1] + 4 + uVar13 * 8);
          *(int *)(lVar23 + lVar12 * 2) = (int)uVar13;
          iVar18 = *(int *)(*(longlong *)(*plVar17 + 0xb0) + uVar13 * 4);
          if (iVar18 == -1) {
            uVar21 = 0xffffffff;
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = iVar18 + uVar26;
            uVar21 = **(undefined4 **)(lVar11 + (ulonglong)uVar10 * 8);
          }
          *(undefined4 *)(lVar23 + -0x10 + lVar12 * 2) = uVar21;
          *(uint *)(lVar23 + -0xc + lVar12 * 2) = uVar10;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 10;
        } while (uVar13 < *(uint *)((longlong)plVar17 + 0x14));
      }
      memcpy((void *)plVar6[1],*(void **)(*plVar17 + 0x68),
             (ulonglong)*(uint *)(*plVar17 + 0x74) << 2);
      if (*(int *)(*plVar17 + 0xa4) != 0) {
        uVar13 = 0;
        do {
          plVar2 = (longlong *)(*plVar6 + uVar13 * 0x18);
          puVar19 = *(undefined4 **)(lVar11 + (ulonglong)uVar26 * 8);
          *(undefined4 *)(plVar2 + 1) = *puVar19;
          uVar10 = puVar19[0x1f];
          *(uint *)((longlong)plVar2 + 0xc) = uVar10;
          if ((ulonglong)uVar10 == 0) {
            *plVar2 = 0;
            *(undefined4 *)((longlong)plVar2 + 0x14) = puVar19[1];
          }
          else {
            lVar12 = (*DAT_14cb46728)(0,(ulonglong)uVar10 << 2);
            *plVar2 = lVar12;
            *(undefined4 *)((longlong)plVar2 + 0x14) = puVar19[1];
            if (*(int *)((longlong)plVar2 + 0xc) != 0) {
              uVar25 = 0;
              do {
                *(undefined4 *)(*plVar2 + uVar25 * 4) =
                     *(undefined4 *)(*(longlong *)(puVar19 + 0x1c) + uVar25 * 4);
                uVar25 = uVar25 + 1;
              } while (uVar25 < *(uint *)((longlong)plVar2 + 0xc));
            }
          }
          uVar26 = uVar26 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(*plVar17 + 0xa4));
      }
      param_1 = local_1b0;
      uVar22 = uVar22 + 1;
      if ((code *)local_1b0[0x12] != (code *)0x0) {
        uVar10 = (uint)(((float)(uVar22 & 0xffffffff) / (float)*(uint *)(local_1b0 + 5)) * 100.0);
        if ((uint)local_1a0 != uVar10) {
          cVar9 = (*(code *)local_1b0[0x12])(3,uVar10,local_1b0[0x13]);
          local_1a0 = (ulonglong)uVar10;
          if (cVar9 == '\0') goto LAB_14828eb11;
        }
      }
    } while (uVar22 < *(uint *)((longlong)param_1 + 0xfc));
  }
  if (((code *)param_1[0x12] != (code *)0x0) && ((uint)local_1a0 != 100)) {
    (*(code *)param_1[0x12])(3,100,param_1[0x13]);
  }
LAB_14828eb11:
  FUN_148291552(local_138);
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828f4de FUN_14828f4de body=1521 status=ok
// SIG undefined FUN_14828f4de(void)

void FUN_14828f4de(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  int local_d8;
  void *local_d0;
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar10 = *param_2;
  uVar8 = *(uint *)(lVar10 + 0x8c);
  *(uint *)((longlong)param_2 + 0x14) = uVar8;
  local_1d8 = param_1;
  if (*(uint *)(param_2 + 3) < uVar8) {
    FUN_148298f1a(param_2 + 1);
    lVar10 = *param_2;
    uVar8 = *(uint *)((longlong)param_2 + 0x14);
  }
  memcpy((void *)param_2[1],*(void **)(lVar10 + 0x80),(ulonglong)uVar8 << 3);
  local_d8 = *(int *)((longlong)param_2 + 0x14);
  local_d0 = (void *)0x0;
  local_c8 = 4;
  local_c0 = 0;
  local_c4 = local_d8 + 0x1fU >> 5;
  if (0x1f < local_d8 + 0x1fU) {
    FUN_148298f1a();
  }
  local_198 = 0;
  local_190 = 8;
  local_188 = 0;
  local_180 = 0;
  local_178 = 4;
  local_170 = 0;
  local_168 = 0;
  local_160 = 8;
  local_158 = 0;
  local_150 = 0;
  local_148 = 8;
  local_140 = 0;
  local_138 = 0;
  local_130 = 8;
  local_128 = 0;
  local_110 = 0;
  local_108 = 4;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 4;
  local_e8 = 0;
  local_e0 = 0;
  lVar10 = *param_2;
  pvVar9 = local_d0;
  if (*(int *)(lVar10 + 0xa4) == 0) {
LAB_14828f686:
    FUN_1482a6d30(&local_1b8);
    if (pvVar9 != (void *)0x0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(pvVar9,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    if ((local_b0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_1d8 = local_1d8 + 0x48;
  uVar14 = 0;
LAB_14828f750:
  puVar7 = *(undefined8 **)(*(longlong *)(lVar10 + 0x98) + uVar14 * 8);
  puVar5 = (undefined4 *)(*DAT_14cb46728)(0);
  memset(puVar5,0,0x88);
  puVar5[0xe] = 4;
  puVar5[0x1e] = 4;
  *puVar5 = 0xffffffff;
  puVar5[1] = *(undefined4 *)(puVar7 + 6);
  *(undefined8 *)(puVar5 + 2) = puVar7[3];
  puVar5[4] = *(undefined4 *)((longlong)puVar7 + 0x24);
  *(longlong *)(puVar5 + 8) = param_2[1];
  puVar5[10] = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)(puVar5 + 0x1a) = 0;
  uVar8 = *(uint *)((longlong)puVar7 + 0xc);
  puVar5[0x1f] = uVar8;
  local_1c0 = puVar5;
  if ((uint)puVar5[0x20] < uVar8) {
    FUN_148298f1a(puVar5 + 0x1c);
    uVar8 = *(uint *)((longlong)puVar7 + 0xc);
  }
  memcpy(*(void **)(local_1c0 + 0x1c),(void *)*puVar7,(ulonglong)uVar8 << 2);
  pvVar9 = local_d0;
  if ((local_d0 != (void *)0x0) && (local_c4 != 0)) {
    memset(local_d0,0,(ulonglong)(local_c4 * local_c8));
  }
  puVar5 = local_1c0;
  if (local_1c0[4] == 0) {
    pfVar6 = (float *)(local_1c0 + 6);
    local_1c0[6] = 0;
    fVar16 = 0.0;
  }
  else {
    uVar11 = 0;
    do {
      uVar8 = *(uint *)(*(longlong *)(puVar5 + 2) + uVar11 * 4);
      local_b8 = CONCAT44(local_b8._4_4_,uVar8);
      uVar3 = *(uint *)((longlong)pvVar9 + (ulonglong)(uVar8 >> 5) * 4);
      if ((uVar3 >> (uVar8 & 0x1f) & 1) == 0) {
        *(uint *)((longlong)pvVar9 + (ulonglong)(uVar8 >> 5) * 4) =
             uVar3 | 1 << ((byte)uVar8 & 0x1f);
        FUN_148298fa0(local_1c0 + 0xc,&local_b8);
        puVar5 = local_1c0;
      }
      uVar11 = uVar11 + 1;
      uVar8 = puVar5[4];
    } while (uVar11 < uVar8);
    pfVar6 = (float *)(puVar5 + 6);
    puVar5[6] = 0;
    fVar16 = 0.0;
    if (2 < uVar8) {
      lVar10 = *(longlong *)(puVar5 + 2);
      lVar4 = *(longlong *)(puVar5 + 8);
      lVar13 = 0;
      do {
        uVar11 = (ulonglong)*(uint *)(lVar10 + 4 + lVar13);
        uVar15 = (ulonglong)*(uint *)(lVar10 + 8 + lVar13);
        fVar17 = *(float *)(lVar4 + uVar15 * 8);
        fVar18 = *(float *)(lVar4 + 4 + uVar15 * 8);
        fVar16 = fVar16 + ABS(((*(float *)(lVar4 + 4 + uVar11 * 8) - fVar18) *
                               (*(float *)(lVar4 + (ulonglong)*(uint *)(lVar10 + lVar13) * 8) -
                               fVar17) -
                              (*(float *)(lVar4 + uVar11 * 8) - fVar17) *
                              (*(float *)(lVar4 + 4 + (ulonglong)*(uint *)(lVar10 + lVar13) * 8) -
                              fVar18)) * 0.5);
        *pfVar6 = fVar16;
        lVar13 = lVar13 + 0xc;
      } while (((ulonglong)uVar8 * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3 != lVar13);
    }
  }
  fVar16 = fVar16 * 0.5;
  puVar5[6] = fVar16;
  if (fVar16 < 1.1920929e-07) {
    lVar10 = 0;
    uVar11 = 0;
    fVar16 = -3.4028235e+38;
    fVar17 = -3.4028235e+38;
    fVar18 = 3.4028235e+38;
    fVar19 = 3.4028235e+38;
    do {
      if ((ulonglong)(uint)puVar5[0xf] == 0) {
        if ((uint)puVar5[10] <= uVar11) goto LAB_14828f920;
        pfVar12 = (float *)(*(longlong *)(puVar5 + 8) + lVar10);
      }
      else {
        if ((uint)puVar5[0xf] <= uVar11) goto LAB_14828f920;
        pfVar12 = (float *)((ulonglong)*(uint *)(*(longlong *)(puVar5 + 0xc) + uVar11 * 4) * 8 +
                           *(longlong *)(puVar5 + 8));
      }
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      if (fVar2 <= fVar19) {
        fVar19 = fVar2;
      }
      if (fVar1 <= fVar18) {
        fVar18 = fVar1;
      }
      if (fVar17 <= fVar2) {
        fVar17 = fVar2;
      }
      if (fVar16 <= fVar1) {
        fVar16 = fVar1;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while( true );
  }
  goto LAB_14828f938;
LAB_14828f920:
  fVar16 = (fVar16 - fVar18) * 0.5 * (fVar17 - fVar19) * 0.5;
  *pfVar6 = fVar16;
LAB_14828f938:
  puVar5[7] = fVar16;
  local_190 = local_190 & 0xffffffff;
  lVar10 = 0;
  uVar11 = 0;
  do {
    if ((ulonglong)(uint)puVar5[0xf] == 0) {
      if ((uint)puVar5[10] <= uVar11) break;
      puVar7 = (undefined8 *)(*(longlong *)(puVar5 + 8) + lVar10);
    }
    else {
      if ((uint)puVar5[0xf] <= uVar11) break;
      puVar7 = (undefined8 *)
               ((ulonglong)*(uint *)(*(longlong *)(puVar5 + 0xc) + uVar11 * 4) * 8 +
               *(longlong *)(puVar5 + 8));
    }
    local_b8 = *puVar7;
    FUN_148298fa0(&local_198,&local_b8);
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + 8;
    puVar5 = local_1c0;
  } while( true );
  local_1d0 = 0;
  local_1c8 = 0;
  FUN_1482a6968(&local_1b8,&local_1d0);
  *(undefined8 *)(local_1c0 + 0x12) = local_1b8;
  *(undefined8 *)(local_1c0 + 0x14) = local_1b0;
  *(undefined8 *)(local_1c0 + 0x16) = local_1a8;
  *(undefined8 *)(local_1c0 + 0x18) = local_1a0;
  FUN_148298fa0(local_1d8,&local_1c0);
  uVar14 = uVar14 + 1;
  lVar10 = *param_2;
  if (*(uint *)(lVar10 + 0xa4) <= uVar14) goto LAB_14828f686;
  goto LAB_14828f750;
}



// FUNCTION 14828fad0 FUN_14828fad0 body=667 status=ok
// SIG undefined FUN_14828fad0(void)

void FUN_14828fad0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [40];
  uint local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  code *local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((ulonglong)*(uint *)(param_3 + 0xc) != 0) {
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x30) + 0xc + uVar5 * 0x18);
      if (uVar10 != 0) {
        uVar9 = 0;
        do {
          uVar7 = uVar7 + *(int *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_3 + 0x30) + uVar5 * 0x18) +
                                    uVar9 * 8) + 0x44);
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *(uint *)(param_3 + 0xc));
    if (uVar7 != 0) {
      local_b0 = param_1;
      FUN_1482a71de(&local_50);
      local_b8 = param_2;
      FUN_14828d90c(param_2,&local_54,&local_50,uVar7);
      local_70 = 0;
      local_68 = 0x10;
      local_60 = 0;
      local_64 = uVar7;
      FUN_148298f1a(&local_70,uVar7);
      lVar6 = local_70;
      uVar3 = *(uint *)(param_3 + 0xc);
      if (uVar3 != 0) {
        uVar5 = 0;
        uVar8 = 0;
        local_c0 = uVar7;
        local_a0 = param_3;
        do {
          local_90 = uVar5 * 3;
          local_98 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x30) + 0xc + uVar5 * 0x18);
          if (local_98 != 0) {
            uVar10 = 0;
            local_a8 = uVar5;
            do {
              lVar2 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_3 + 0x30) + local_90 * 8) + uVar10 * 8);
              uVar5 = (ulonglong)*(uint *)(lVar2 + 0x44);
              if (uVar5 != 0) {
                local_88 = (ulonglong)uVar8;
                uVar9 = 0;
                local_bc = uVar8;
                do {
                  lVar4 = (ulonglong)(uint)((int)local_88 + (int)uVar9) * 0x10;
                  local_78 = lVar6 + lVar4;
                  *(undefined8 *)(lVar6 + lVar4) =
                       *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + uVar9 * 8);
                  local_80 = FUN_143afe538;
                  FUN_148298fa0(*(undefined8 *)(*local_b8 + (ulonglong)local_54 * 8),&local_80);
                  uVar9 = uVar9 + 1;
                } while (uVar5 != uVar9);
                uVar8 = local_bc + (int)uVar9;
                param_3 = local_a0;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != local_98);
            uVar3 = *(uint *)(param_3 + 0xc);
            uVar5 = local_a8;
            uVar7 = local_c0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      FUN_14828da20(local_b8,&local_54);
      plVar1 = (longlong *)(local_b0 + 0x48);
      *(uint *)(local_b0 + 0x54) = uVar7;
      if (*(uint *)(local_b0 + 0x58) < uVar7) {
        FUN_148298f1a(plVar1,uVar7);
      }
      uVar5 = (ulonglong)uVar7;
      lVar6 = 4;
      do {
        *(undefined8 *)(*plVar1 + -4 + lVar6) = *(undefined8 *)(local_70 + lVar6 * 2);
        lVar6 = lVar6 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (local_70 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(local_70,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      FUN_1482a6d30(local_50);
      if (local_50 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(local_50,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14828fd6c FUN_14828fd6c body=6117 status=ok
// SIG undefined FUN_14828fd6c(void)

ulonglong FUN_14828fd6c(longlong *param_1,uint *param_2,code *param_3,undefined8 param_4)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  ulonglong unaff_RDI;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_478 [32];
  uint *local_458;
  uint *local_450;
  float local_448;
  int local_440;
  uint **local_438;
  float *local_430;
  int *local_428;
  int *local_420;
  int *local_418;
  uint local_410;
  char local_3fd;
  uint local_3fc;
  longlong *local_3f8;
  uint local_3f0;
  uint local_3ec;
  ulonglong local_3e8;
  float local_3dc;
  ulonglong local_3d8;
  longlong *local_3d0;
  void *local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  ulonglong local_3a0;
  uint *local_398;
  uint *local_390;
  longlong local_388;
  code *local_380;
  ulonglong local_378;
  int local_36c;
  int local_368;
  int local_364;
  float local_360;
  float local_35c;
  uint *local_358;
  uint *local_350;
  int *local_348;
  undefined8 local_340;
  undefined4 local_338;
  uint local_330 [6];
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  uint local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  void *local_270;
  undefined8 local_268;
  uint local_260;
  uint local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  void *local_248;
  undefined8 local_240;
  undefined4 local_238;
  uint local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  void *local_220;
  undefined8 local_218;
  undefined4 local_210;
  uint local_208;
  uint uStack_204;
  undefined4 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  undefined4 local_1d8;
  void *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1b8;
  uint uStack_1b4;
  undefined4 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  void *local_190;
  ulonglong local_188;
  undefined4 local_180;
  longlong local_178;
  uint local_170;
  longlong local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  longlong local_150;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_108 [2];
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if (param_3 == (code *)0x0) {
    uVar18 = *(uint *)((longlong)param_1 + 0x54);
    if (uVar18 != 0) {
LAB_14828fec8:
      fVar38 = (float)param_2[2];
      *(float *)(param_1 + 0x16) = fVar38;
      uVar22 = param_2[3];
      uVar19 = uVar22 + param_2[1] * 2;
      local_3e8 = (ulonglong)uVar19;
      if (uVar22 != 0) {
        uVar22 = uVar19;
      }
      fVar39 = 0.0;
      local_3fc = 0;
      if (0.0 < fVar38) {
        local_3fc = uVar22;
      }
      if ((uVar22 == 0) || (fVar38 <= 0.0)) {
        uVar25 = 0;
        do {
          fVar39 = fVar39 + *(float *)(*(longlong *)(param_1[9] + uVar25 * 8) + 0x1c);
          uVar25 = uVar25 + 1;
        } while (uVar18 != uVar25);
        local_3e8 = 0x400;
        if (0.0 < fVar38) {
          local_3e8 = (ulonglong)uVar22;
        }
        if (uVar22 != 0) {
          local_3e8 = (ulonglong)uVar22;
        }
        if ((int)local_3e8 == 0) {
          fVar37 = (fVar38 * fVar38 * fVar39) / 0.75;
          fVar29 = 1.0;
          if (1.0 <= fVar37) {
            fVar29 = fVar37;
          }
          uVar19 = (int)(longlong)SQRT(fVar29) - 1;
          uVar19 = uVar19 >> 1 | uVar19;
          uVar19 = uVar19 >> 2 | uVar19;
          uVar19 = uVar19 >> 4 | uVar19;
          uVar19 = uVar19 >> 8 | uVar19;
          uVar19 = uVar19 >> 0x10 | uVar19;
          local_3e8 = (ulonglong)(uVar19 + 1 + (uint)(uVar19 == 0xffffffff));
        }
        if (fVar38 <= 0.0) {
          fVar38 = 1.0;
          if (1.0 <= fVar39 / 0.75) {
            fVar38 = fVar39 / 0.75;
          }
          *(float *)(param_1 + 0x16) = SQRT((float)(uint)((int)local_3e8 * (int)local_3e8) / fVar38)
          ;
        }
      }
      uVar25 = 0;
      local_150 = 0;
      local_148 = 4;
      local_140 = 0;
      local_3f8 = param_1;
      local_3b8 = param_4;
      local_380 = param_3;
      local_144 = uVar18;
      FUN_148298f1a(&local_150,uVar18);
      local_168 = 0;
      local_160 = 8;
      local_158 = 0;
      local_15c = uVar18;
      FUN_148298f1a();
      lVar4 = local_150;
      lVar27 = local_168;
      local_3a0 = (ulonglong)(uVar18 + (uVar18 == 0));
      fVar38 = 3.4028235e+38;
      fVar39 = 0.0;
      local_3ec = uVar18;
      uVar19 = local_3fc;
LAB_14828ffd9:
      lVar3 = *(longlong *)(local_3f8[9] + uVar25 * 8);
      fVar29 = *(float *)(lVar3 + 0x18);
      fVar37 = 1.0;
      if ((fVar29 != 0.0) || (NAN(fVar29))) {
        fVar29 = *(float *)(lVar3 + 0x1c) / fVar29;
        if (fVar29 < 0.0) {
          fVar29 = sqrtf(fVar29);
          uVar19 = local_3fc;
        }
        else {
          fVar29 = SQRT(fVar29);
        }
        fVar37 = fVar29 * *(float *)(local_3f8 + 0x16);
        if (0xfffffffd < (int)fVar37 + 0x807ffffeU) {
          FUN_14678752e("\rASSERT: %s %s %d\n","isFinite(scale)",
                        ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                        ,0x209a);
          uVar19 = local_3fc;
        }
      }
      plVar26 = local_3f8;
      fVar32 = 3.4028235e+38;
      fVar29 = 3.4028235e+38;
      if ((char)param_2[5] == '\0') {
        lVar14 = 0;
        uVar16 = 0;
        fVar32 = 3.4028235e+38;
        fVar29 = 3.4028235e+38;
        do {
          if ((ulonglong)*(uint *)(lVar3 + 0x3c) == 0) {
            if (*(uint *)(lVar3 + 0x28) <= uVar16) break;
            pfVar11 = (float *)(*(longlong *)(lVar3 + 0x20) + lVar14);
          }
          else {
            if (*(uint *)(lVar3 + 0x3c) <= uVar16) break;
            pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x30) + uVar16 * 4) * 8 +
                               *(longlong *)(lVar3 + 0x20));
          }
          if (pfVar11[1] <= fVar29) {
            fVar29 = pfVar11[1];
          }
          if (*pfVar11 <= fVar32) {
            fVar32 = *pfVar11;
          }
          uVar16 = uVar16 + 1;
          lVar14 = lVar14 + 8;
        } while( true );
      }
      auVar33 = ZEXT816(0);
      lVar14 = 0;
      uVar16 = 0;
      fVar31 = 0.0;
      do {
        uVar22 = *(uint *)(lVar3 + 0x3c);
        uVar10 = (ulonglong)uVar22;
        fVar30 = auVar33._0_4_;
        if (uVar10 == 0) {
          if (*(uint *)(lVar3 + 0x28) <= uVar16) goto LAB_14829011c;
          pfVar11 = (float *)(*(longlong *)(lVar3 + 0x20) + lVar14);
        }
        else {
          if (uVar10 <= uVar16) goto LAB_14829011c;
          pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x30) + uVar16 * 4) * 8 +
                             *(longlong *)(lVar3 + 0x20));
        }
        fVar2 = *pfVar11;
        fVar35 = pfVar11[1];
        if ((char)param_2[5] == '\x01') {
          fVar36 = *(float *)(lVar3 + 0x48) * fVar2 + *(float *)(lVar3 + 0x4c) * fVar35;
          fVar35 = fVar2 * *(float *)(lVar3 + 0x50) + fVar35 * *(float *)(lVar3 + 0x54);
          *pfVar11 = fVar36;
          pfVar11[1] = fVar35;
          fVar36 = fVar36 - *(float *)(lVar3 + 0x58);
          *pfVar11 = fVar36;
          fVar35 = fVar35 - *(float *)(lVar3 + 0x5c);
        }
        else {
          fVar36 = fVar2 - fVar32;
          fVar35 = fVar35 - fVar29;
        }
        fVar36 = fVar36 * fVar37;
        *pfVar11 = fVar36;
        fVar35 = fVar35 * fVar37;
        pfVar11[1] = fVar35;
        if (fVar31 <= fVar35) {
          fVar31 = fVar35;
        }
        if (fVar30 <= fVar36) {
          auVar33._0_4_ = fVar36;
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 8;
      } while( true );
    }
  }
  else {
    unaff_RDI = 0;
    cVar7 = (*param_3)(2,0,param_4);
    if (cVar7 == '\0') goto LAB_14828fe40;
    uVar18 = *(uint *)((longlong)param_1 + 0x54);
    if (uVar18 != 0) goto LAB_14828fec8;
    cVar7 = (*param_3)(2,100,param_4);
    if (cVar7 == '\0') {
      unaff_RDI = 0;
      goto LAB_14828fe40;
    }
  }
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  goto LAB_14828fe40;
LAB_14829011c:
  fVar29 = fVar31;
  uVar8 = uVar22;
  if ((0.0 < fVar30) && (0.0 < fVar31)) {
    uVar22 = param_2[1];
    auVar33 = roundss(ZEXT816(0),auVar33,10);
    iVar9 = uVar22 * 2 + 1;
    auVar34 = roundss(ZEXT816(0),ZEXT416((uint)fVar31),10);
    iVar24 = ((int)auVar34._0_4_ + uVar22 * 2 + 4 & 0xfffffffc) - iVar9;
    iVar9 = ((int)auVar33._0_4_ + uVar22 * 2 + 4 & 0xfffffffc) - iVar9;
    if (*(char *)((longlong)param_2 + 0x11) == '\0') {
      iVar24 = (int)auVar34._0_4_;
      iVar9 = (int)auVar33._0_4_;
    }
    auVar33 = ZEXT416((uint)(float)iVar9);
    fVar29 = (float)iVar24;
    lVar14 = 0;
    uVar16 = 0;
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        if (*(uint *)(lVar3 + 0x28) <= uVar16) {
          uVar22 = 0;
          break;
        }
        pfVar11 = (float *)(*(longlong *)(lVar3 + 0x20) + lVar14);
      }
      else {
        uVar22 = uVar8;
        if (uVar10 <= uVar16) break;
        pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x30) + uVar16 * 4) * 8 +
                           *(longlong *)(lVar3 + 0x20));
      }
      *pfVar11 = (*pfVar11 / fVar30) * (float)iVar9;
      pfVar11[1] = (pfVar11[1] / fVar31) * fVar29;
      uVar16 = uVar16 + 1;
      uVar10 = (ulonglong)*(uint *)(lVar3 + 0x3c);
      lVar14 = lVar14 + 8;
    } while( true );
  }
  uVar15 = *param_2;
  if (uVar19 == 0) {
LAB_14829021c:
    if (uVar15 == 0) goto LAB_148290241;
  }
  else if (uVar19 <= uVar15 - 1) {
    uVar15 = uVar19 + param_2[1] * -2;
    goto LAB_14829021c;
  }
  fVar37 = (float)uVar15 + -1.0;
  if ((fVar37 < auVar33._0_4_) || (fVar37 < fVar29)) {
    if (auVar33._0_4_ <= fVar29) {
      auVar33._0_4_ = fVar29;
    }
    fVar29 = fVar37 / auVar33._0_4_;
    lVar14 = 0;
    uVar16 = 0;
    uVar22 = uVar8;
    do {
      if (uVar22 == 0) {
        if (*(uint *)(lVar3 + 0x28) <= uVar16) {
          uVar22 = 0;
          break;
        }
        pfVar11 = (float *)(*(longlong *)(lVar3 + 0x20) + lVar14);
      }
      else {
        if (uVar22 <= uVar16) break;
        pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x30) + uVar16 * 4) * 8 +
                           *(longlong *)(lVar3 + 0x20));
      }
      fVar32 = pfVar11[1] * fVar29;
      fVar31 = *pfVar11 * fVar29;
      if (fVar37 <= fVar32) {
        fVar32 = fVar37;
      }
      if (fVar37 <= fVar31) {
        fVar31 = fVar37;
      }
      *pfVar11 = fVar31;
      pfVar11[1] = fVar32;
      uVar16 = uVar16 + 1;
      uVar22 = *(uint *)(lVar3 + 0x3c);
      lVar14 = lVar14 + 8;
    } while( true );
  }
LAB_148290241:
  auVar34 = ZEXT816(0);
  lVar14 = 0;
  uVar16 = 0;
  fVar29 = 0.0;
  do {
    fVar37 = auVar34._0_4_;
    if (uVar22 == 0) {
      if (*(uint *)(lVar3 + 0x28) <= uVar16) break;
      pfVar11 = (float *)(*(longlong *)(lVar3 + 0x20) + lVar14);
    }
    else {
      if (uVar22 <= uVar16) break;
      pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x30) + uVar16 * 4) * 8 +
                         *(longlong *)(lVar3 + 0x20));
    }
    fVar32 = (float)param_2[1] + 0.5 + *pfVar11;
    *pfVar11 = fVar32;
    fVar31 = (float)param_2[1] + 0.5 + pfVar11[1];
    pfVar11[1] = fVar31;
    if (fVar29 <= fVar31) {
      fVar29 = fVar31;
    }
    if (fVar37 <= fVar32) {
      auVar34._0_4_ = fVar32;
    }
    uVar16 = uVar16 + 1;
    uVar22 = *(uint *)(lVar3 + 0x3c);
    lVar14 = lVar14 + 8;
  } while( true );
  *(float *)(lVar27 + uVar25 * 8) = fVar37;
  *(float *)(lVar27 + 4 + uVar25 * 8) = fVar29;
  fVar37 = fVar37 + fVar29;
  *(float *)(lVar4 + uVar25 * 4) = fVar37;
  if (fVar37 <= fVar38) {
    fVar38 = fVar37;
  }
  if (fVar39 <= fVar37) {
    fVar39 = fVar37;
  }
  uVar25 = uVar25 + 1;
  if (uVar25 == local_3a0) goto LAB_1482903f7;
  goto LAB_14828ffd9;
LAB_1482903f7:
  local_178 = lVar4;
  local_170 = local_144;
  FUN_14829a620(local_3f8 + 0xc);
  local_388 = plVar26[0xc];
  local_190 = (void *)0x0;
  local_188 = 8;
  local_180 = 0;
  local_330[0] = 0;
  local_330[1] = 0;
  FUN_148298fa0(&local_190,local_330);
  local_3fd = *(char *)((longlong)param_2 + 0x13);
  local_1b8 = 0;
  uStack_1b4 = 0;
  local_1b0 = 0;
  local_1a8 = (void *)0x0;
  local_1a0 = 8;
  local_198 = 0;
  local_1e0 = 0;
  uStack_1dc = 0;
  local_1d8 = 0;
  local_1d0 = (void *)0x0;
  local_1c8 = 8;
  local_1c0 = 0;
  local_208 = 0;
  uStack_204 = 0;
  local_200 = 0;
  local_1f8 = (void *)0x0;
  local_1f0 = 8;
  local_1e8 = 0;
  local_230 = 0;
  uStack_22c = 0;
  local_228 = 0;
  local_220 = (void *)0x0;
  local_218 = 8;
  local_210 = 0;
  local_258 = 0;
  uStack_254 = 0;
  local_250 = 0;
  local_248 = (void *)0x0;
  local_240 = 8;
  local_238 = 0;
  local_280 = 0;
  uStack_27c = 0;
  local_278 = 0;
  local_270 = (void *)0x0;
  local_268 = 8;
  local_260 = 0;
  local_330[0] = 0;
  local_330[1] = 0;
  local_330[2] = 4;
  local_330[3] = 0;
  local_330[4] = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2d8 = 4;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 4;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 4;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 4;
  local_288 = 0;
  local_348 = (int *)0x0;
  local_340 = 8;
  local_338 = 0;
  local_138 = 0;
  FUN_148298fa0();
  local_3b0 = (ulonglong)local_108 | 8;
  local_3d0 = plVar26 + 6;
  uVar25 = 0;
  local_3f0 = 0;
  local_3c0 = 0;
LAB_1482905db:
  uVar16 = local_3b0;
  local_3a8 = (ulonglong)*(uint *)(local_388 + (ulonglong)(~(uint)uVar25 + local_3ec) * 4);
  auVar33 = roundss(ZEXT816(0),*(undefined4 *)(local_168 + 4 + local_3a8 * 8),10);
  puVar20 = *(uint **)(plVar26[9] + local_3a8 * 8);
  auVar34 = roundss(ZEXT816(0),*(undefined4 *)(local_168 + local_3a8 * 8),10);
  local_378 = uVar25;
  FUN_1482a7352(&local_1b8,(int)auVar34._0_4_ + param_2[1],(int)auVar33._0_4_ + param_2[1],1);
  if (*(char *)((longlong)param_2 + 0x15) == '\x01') {
    FUN_1482a7352(&local_230,uStack_1b4,local_1b8,1);
  }
  if (((char)param_2[4] == '\x01') &&
     (FUN_1482a7352(&local_1e0,local_1b8,uStack_1b4,1),
     *(char *)((longlong)param_2 + 0x15) == '\x01')) {
    FUN_1482a7352(&local_258,uStack_1b4,local_1b8,1);
  }
  uVar19 = puVar20[4];
  if (2 < uVar19) {
    lVar27 = 0;
    uVar25 = 0;
    do {
      lVar4 = *(longlong *)(puVar20 + 8);
      lVar3 = *(longlong *)(puVar20 + 2);
      lVar14 = 0;
      do {
        local_108[lVar14] =
             *(undefined8 *)(lVar4 + (ulonglong)*(uint *)(lVar3 + lVar27 + lVar14 * 4) * 8);
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      local_350 = (uint *)0x0;
      if (*(char *)((longlong)param_2 + 0x15) != '\0') {
        local_350 = &local_230;
      }
      local_35c = (float)uStack_1b4;
      local_360 = (float)local_1b8;
      local_358 = &local_1b8;
      FUN_1482a80d0(&local_138,local_108,uVar16,local_f8);
      fVar29 = (local_130 - (float)local_138) * (local_124 - local_138._4_4_) -
               (local_12c - local_138._4_4_) * (local_128 - (float)local_138);
      if ((fVar29 != 0.0) || (NAN(fVar29))) {
        FUN_1482a8208(&local_138,&local_360,&local_358);
      }
      uVar25 = uVar25 + 1;
      lVar27 = lVar27 + 0xc;
    } while (uVar25 != (ulonglong)uVar19 / 3);
  }
  if ((char)param_2[4] != '\0') {
    puVar23 = (uint *)0x0;
    if (*(char *)((longlong)param_2 + 0x15) != '\0') {
      puVar23 = &local_258;
    }
    local_458 = local_330;
    FUN_1482a7592(puVar20,&local_1b8,&local_1e0,puVar23);
  }
  if (param_2[1] == 0) goto LAB_148290841;
  if ((char)param_2[4] == '\x01') {
    local_208 = local_1e0;
    uStack_204 = uStack_1dc;
    local_200 = local_1d8;
    local_1f0 = CONCAT44(local_1c8._4_4_,(undefined4)local_1f0);
    if (local_1e8 < local_1c8._4_4_) {
      FUN_148298f1a(&local_1f8);
    }
    if (((local_1f8 != (void *)0x0) && (local_1d0 != (void *)0x0)) && (local_1c8._4_4_ != 0)) {
      uVar19 = local_1c8._4_4_ * (int)local_1c8;
      pvVar17 = local_1d0;
LAB_148290feb:
      memcpy(local_1f8,pvVar17,(ulonglong)uVar19);
    }
  }
  else {
    local_208 = local_1b8;
    uStack_204 = uStack_1b4;
    local_200 = local_1b0;
    local_1f0 = CONCAT44(local_1a0._4_4_,(undefined4)local_1f0);
    if (local_1e8 < local_1a0._4_4_) {
      FUN_148298f1a(&local_1f8);
    }
    if (((local_1f8 != (void *)0x0) && (local_1a8 != (void *)0x0)) && (local_1a0._4_4_ != 0)) {
      uVar19 = local_1a0._4_4_ * (int)local_1a0;
      pvVar17 = local_1a8;
      goto LAB_148290feb;
    }
  }
  FUN_1482a78c6(&local_208);
  if (*(char *)((longlong)param_2 + 0x15) != '\x01') goto LAB_148290841;
  if ((char)param_2[4] == '\x01') {
    local_280 = local_258;
    uStack_27c = uStack_254;
    local_278 = local_250;
    local_268 = CONCAT44(local_240._4_4_,(undefined4)local_268);
    if (local_260 < local_240._4_4_) {
      FUN_148298f1a(&local_270);
    }
    if (((local_270 != (void *)0x0) && (local_248 != (void *)0x0)) && (local_240._4_4_ != 0)) {
      uVar19 = local_240._4_4_ * (int)local_240;
      pvVar17 = local_248;
LAB_148291126:
      memcpy(local_270,pvVar17,(ulonglong)uVar19);
    }
  }
  else {
    local_280 = local_230;
    uStack_27c = uStack_22c;
    local_278 = local_228;
    local_268 = CONCAT44(local_218._4_4_,(undefined4)local_268);
    if (local_260 < local_218._4_4_) {
      FUN_148298f1a(&local_270);
    }
    if (((local_270 != (void *)0x0) && (local_220 != (void *)0x0)) && (local_218._4_4_ != 0)) {
      uVar19 = local_218._4_4_ * (int)local_218;
      pvVar17 = local_220;
      goto LAB_148291126;
    }
  }
  FUN_1482a78c6(&local_280);
LAB_148290841:
  uVar25 = local_3c0;
  if (((*(char *)((longlong)param_2 + 0x12) == '\x01') &&
      (fVar29 = *(float *)(local_150 + local_3a8 * 4), fVar38 < fVar29)) &&
     ((uVar16 = (ulonglong)((int)local_3c0 + 1),
      fVar29 <= (float)uVar16 * (fVar39 - fVar38) * -0.0625 + fVar39 &&
      (uVar25 = uVar16, local_188 >> 0x20 != 0)))) {
    memset(local_190,0,(local_188 >> 0x20) << 3);
  }
  local_3c0 = uVar25;
  local_398 = &local_230;
  local_390 = &local_1b8;
  if ((param_2[4] & 1) != 0) {
    local_398 = &local_258;
    local_390 = &local_1e0;
  }
  if (param_2[1] != 0) {
    local_398 = &local_280;
    local_390 = &local_208;
  }
  local_358 = (uint *)((ulonglong)local_358 & 0xffffffff00000000);
  local_360 = 0.0;
  local_364 = 0;
  local_368 = 0;
  local_36c = 0;
  uVar19 = 0xffffffff;
  do {
    plVar26 = local_3f8;
    if (*(uint *)((longlong)local_3f8 + 0x3c) < uVar19 + 2) {
      uVar12 = (*DAT_14cb46728)(0,0x28);
      FUN_1482a7b82(uVar12,local_3e8,local_3e8 & 0xffffffff);
      local_138 = uVar12;
      FUN_148298fa0(local_3d0,&local_138);
      local_108[0] = 0;
      FUN_148298fa0(&local_348,local_108);
      if (local_3fd != '\0') {
        uVar12 = (*DAT_14cb46728)(0,0x20);
        FUN_1482a7bf0(uVar12,local_3e8,local_3e8 & 0xffffffff);
        local_108[0] = uVar12;
        FUN_148298fa0(plVar26,local_108);
      }
      local_108[0] = 0;
      FUN_148298fa0(&local_190,local_108);
    }
    piVar6 = local_348;
    uVar19 = uVar19 + 1;
    uVar25 = (ulonglong)uVar19;
    local_448 = (float)local_348[uVar25 * 2];
    local_440 = local_348[uVar25 * 2 + 1];
    local_3c8 = local_190;
    plVar1 = (longlong *)((longlong)local_190 + uVar25 * 8);
    local_418 = &local_36c;
    local_420 = &local_368;
    local_428 = &local_364;
    local_430 = &local_360;
    local_438 = &local_358;
    local_450 = local_398;
    local_458 = local_390;
    local_410 = local_3fc;
    cVar7 = FUN_1482a7c54(plVar26,param_2,plVar1,*(undefined8 *)(plVar26[6] + uVar25 * 8));
  } while ((local_3fc != 0) && (cVar7 == '\0'));
  local_3d8 = (ulonglong)local_358 & 0xffffffff;
  uVar22 = local_364 + (int)local_358;
  if (*(char *)((longlong)param_2 + 0x12) == '\x01') {
    if ((piVar6[uVar25 * 2] < (int)uVar22) || (piVar6[uVar25 * 2 + 1] < local_368 + (int)local_360))
    {
      if (local_188 >> 0x20 != 0) {
        memset(local_3c8,0,(local_188 >> 0x20) << 3);
      }
    }
    else {
      *plVar1 = ((ulonglong)(uint)local_360 << 0x20) + local_3d8;
    }
  }
  if ((int)uVar22 < piVar6[uVar25 * 2]) {
    uVar22 = piVar6[uVar25 * 2];
  }
  uVar8 = piVar6[uVar25 * 2 + 1];
  piVar6[uVar25 * 2] = uVar22;
  uVar15 = local_368 + (int)local_360;
  if (local_368 + (int)local_360 < (int)uVar8) {
    uVar15 = uVar8;
  }
  piVar6[uVar25 * 2 + 1] = uVar15;
  puVar13 = (undefined8 *)*local_3d0;
  fVar29 = local_360;
  if ((local_3fc == 0) && ((puVar23 = (uint *)*puVar13, *puVar23 < uVar22 || (puVar23[1] < uVar15)))
     ) {
    local_3dc = local_360;
    uVar8 = uVar15 - 1 >> 1 | uVar15 - 1;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar22 = uVar22 - 1 >> 1 | uVar22 - 1;
    uVar22 = uVar22 >> 2 | uVar22;
    uVar22 = uVar22 >> 4 | uVar22;
    uVar22 = uVar22 >> 8 | uVar22;
    FUN_1482a7352(puVar23,(uVar22 >> 0x10 | uVar22) + 1,(uVar8 >> 0x10 | uVar8) + 1,0);
    plVar26 = local_3f8;
    puVar13 = (undefined8 *)*local_3d0;
    fVar29 = local_3dc;
    if (local_3fd != '\0') {
      FUN_1482a7d4c(*(undefined8 *)*local_3f8,*(undefined4 *)*puVar13,((undefined4 *)*puVar13)[1]);
      puVar13 = (undefined8 *)plVar26[6];
      fVar29 = local_3dc;
    }
  }
  iVar9 = local_36c;
  local_440 = local_36c;
  local_450 = (uint *)CONCAT44(local_450._4_4_,(int)local_3d8);
  local_458 = (uint *)CONCAT44(local_458._4_4_,piVar6[uVar25 * 2 + 1]);
  local_448 = fVar29;
  FUN_1482a7e8c(puVar13[uVar25],local_390,local_398,piVar6[uVar25 * 2]);
  if (local_3fd != '\0') {
    bVar28 = iVar9 == 0;
    local_458 = &local_280;
    if (bVar28) {
      local_458 = &local_208;
    }
    puVar23 = &local_258;
    if (bVar28) {
      puVar23 = &local_1e0;
    }
    local_448 = (float)piVar6[uVar25 * 2 + 1];
    puVar21 = &local_230;
    if (bVar28) {
      puVar21 = &local_1b8;
    }
    if (param_2[1] == 0) {
      local_458 = (uint *)0x0;
    }
    if ((char)param_2[4] == '\0') {
      puVar23 = (uint *)0x0;
    }
    local_438 = (uint **)CONCAT44(local_438._4_4_,fVar29);
    local_440 = (int)local_3d8;
    local_450 = (uint *)CONCAT44(local_450._4_4_,piVar6[uVar25 * 2]);
    FUN_1482a7f5c(*(undefined8 *)(*local_3f8 + uVar25 * 8),local_3a8,puVar21,puVar23);
  }
  fVar37 = (float)(int)local_3d8;
  *puVar20 = uVar19;
  lVar27 = 0;
  uVar25 = 0;
  do {
    pcVar5 = local_380;
    if ((ulonglong)puVar20[0xf] == 0) {
      if (puVar20[10] <= uVar25) break;
      pfVar11 = (float *)(*(longlong *)(puVar20 + 8) + lVar27);
    }
    else {
      if (puVar20[0xf] <= uVar25) break;
      pfVar11 = (float *)((ulonglong)*(uint *)(*(longlong *)(puVar20 + 0xc) + uVar25 * 4) * 8 +
                         *(longlong *)(puVar20 + 8));
    }
    fVar32 = *pfVar11;
    fVar31 = pfVar11[1];
    if (iVar9 != 0) {
      fVar31 = fVar32;
      fVar32 = pfVar11[1];
    }
    *pfVar11 = fVar32 + fVar37;
    pfVar11[1] = fVar31 + (float)(int)fVar29;
    fVar32 = (fVar32 + fVar37) - (float)param_2[1];
    *pfVar11 = fVar32;
    fVar31 = (fVar31 + (float)(int)fVar29) - (float)param_2[1];
    pfVar11[1] = fVar31;
    if ((fVar32 < 0.0) || (fVar31 < 0.0)) {
      FUN_14678752e("\rASSERT: %s %s %d\n","texcoord.x >= 0 && texcoord.y >= 0",
                    ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                    ,0x21b1);
      fVar32 = *pfVar11;
    }
    if ((0xfffffffd < (int)fVar32 + 0x807ffffeU) || (0xfffffffd < (int)pfVar11[1] + 0x807ffffeU)) {
      FUN_14678752e("\rASSERT: %s %s %d\n","isFinite(texcoord.x) && isFinite(texcoord.y)",
                    ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                    ,0x21b2);
    }
    uVar25 = uVar25 + 1;
    lVar27 = lVar27 + 8;
  } while( true );
  uVar25 = local_378 + 1;
  if (local_380 != (code *)0x0) {
    uVar19 = (uint)(((float)(uVar25 & 0xffffffff) / (float)uVar18) * 100.0);
    puVar20 = (uint *)(ulonglong)uVar19;
    if ((local_3f0 != uVar19) &&
       (cVar7 = (*local_380)(2,uVar19,local_3b8), local_3f0 = uVar19, cVar7 == '\0'))
    goto LAB_1482914c7;
  }
  plVar26 = local_3f8;
  if (uVar25 == local_3a0) goto LAB_148291146;
  goto LAB_1482905db;
LAB_148291146:
  if (local_3fc == 0) {
    iVar9 = *piVar6 + param_2[1] * -2;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    *(int *)(local_3f8 + 0x15) = iVar9;
    iVar9 = piVar6[1] + param_2[1] * -2;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
  }
  else {
    iVar9 = local_3fc + param_2[1] * -2;
    *(int *)(local_3f8 + 0x15) = iVar9;
  }
  *(int *)((longlong)local_3f8 + 0xac) = iVar9;
  uVar18 = *(uint *)((longlong)local_3f8 + 0x3c);
  *(uint *)((longlong)local_3f8 + 0x24) = uVar18;
  if (*(uint *)(local_3f8 + 5) < uVar18) {
    FUN_148298f1a(local_3f8 + 3);
    uVar18 = *(uint *)((longlong)plVar26 + 0x24);
  }
  if (uVar18 != 0) {
    uVar25 = 0;
    do {
      uVar18 = *(uint *)(plVar26 + 0x15);
      fVar38 = 0.0;
      if ((uVar18 != 0) && (iVar9 = *(int *)((longlong)plVar26 + 0xac), iVar9 != 0)) {
        lVar27 = *(longlong *)(*local_3d0 + uVar25 * 8);
        iVar24 = 0;
        uVar19 = 0;
        do {
          uVar22 = iVar24 * *(int *)(lVar27 + 8);
          puVar20 = (uint *)(ulonglong)uVar22;
          uVar16 = 0;
          do {
            uVar19 = uVar19 + ((*(ulonglong *)
                                 (*(longlong *)(lVar27 + 0x10) +
                                 (ulonglong)((int)(uVar16 >> 6) + uVar22) * 8) >> (uVar16 & 0x3f) &
                               1) != 0);
            uVar8 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar8;
          } while (uVar18 != uVar8);
          iVar24 = iVar24 + 1;
        } while (iVar24 != iVar9);
        fVar38 = (float)uVar19 / (float)(iVar9 * uVar18);
      }
      *(float *)(plVar26[3] + uVar25 * 4) = fVar38;
      uVar25 = uVar25 + 1;
    } while (uVar25 < *(uint *)((longlong)plVar26 + 0x24));
  }
  if (((pcVar5 == (code *)0x0) || (local_3f0 == 100)) ||
     (cVar7 = (*pcVar5)(2,100,local_3b8), cVar7 != '\0')) {
    unaff_RDI = CONCAT71((int7)((ulonglong)puVar20 >> 8),1);
  }
  else {
LAB_1482914c7:
    unaff_RDI = 0;
  }
  if (piVar6 != (int *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(piVar6,0);
    }
    else {
      (*DAT_14cb46730)(piVar6);
    }
  }
  FUN_1482a5c62(local_330);
  if (local_270 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_270,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_248 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_248,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_220 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_220,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_1f8 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_1f8,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_1d0 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_1d0,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_1a8 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_1a8,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_3c8 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_3c8,0);
    }
    else {
      (*DAT_14cb46730)(local_3c8);
    }
  }
  if (local_168 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_168,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (local_150 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_150,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
LAB_14828fe40:
  if ((local_f0 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return unaff_RDI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148291552 FUN_148291552 body=490 status=ok
// SIG undefined FUN_148291552(void)

void FUN_148291552(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + uVar2 * 8) + 8);
      if (lVar1 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar1,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      if (*(longlong *)(*param_1 + uVar2 * 8) != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0xc));
  }
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1[6] + uVar2 * 8) + 0x10);
      if (lVar1 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar1,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      if (*(longlong *)(param_1[6] + uVar2 * 8) != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x3c));
  }
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    uVar2 = 0;
    do {
      FUN_1482a94f2(*(undefined8 *)(param_1[9] + uVar2 * 8));
      lVar1 = *(longlong *)(param_1[9] + uVar2 * 8);
      if (lVar1 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar1,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x54));
  }
  FUN_14829a7b2(param_1 + 0xc);
  if (param_1[9] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[9],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 == 0) {
    return;
  }
  if (DAT_14cb46730 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148291739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001482915f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46730)();
  return;
}



// FUNCTION 14829173c FUN_14829173c body=170 status=ok
// SIG undefined FUN_14829173c(void)

void FUN_14829173c(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && ((*(int *)(param_1 + 0xb4) != 0 || (*(int *)(param_1 + 0xfc) != 0)))) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    FUN_14828da97(param_1);
    local_58 = *(undefined8 *)(param_3 + 4);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_14828e680(param_1);
    if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 1482917f6 FUN_1482917f6 body=174 status=ok
// SIG undefined FUN_1482917f6(void)

undefined4 FUN_1482917f6(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148291888;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148291888;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_14829196c(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_148291888:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482918a6 FUN_1482918a6 body=196 status=ok
// SIG undefined FUN_1482918a6(void)

undefined4 * FUN_1482918a6(undefined4 *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)param_2[1];
  lVar6 = (longlong)param_3;
  lVar9 = (longlong)*(int *)(lVar5 + lVar6 * 0xc);
  lVar1 = *(longlong *)*param_2;
  local_68[2] = *(undefined8 *)(lVar1 + 0x10 + lVar9 * 0x18);
  puVar7 = (undefined8 *)(lVar1 + lVar9 * 0x18);
  local_68[0] = *puVar7;
  local_68[1] = puVar7[1];
  lVar9 = (longlong)*(int *)(lVar5 + 4 + lVar6 * 0xc);
  local_40 = *(undefined8 *)(lVar1 + 0x10 + lVar9 * 0x18);
  puVar7 = (undefined8 *)(lVar1 + lVar9 * 0x18);
  local_68[3] = *puVar7;
  uStack_48 = puVar7[1];
  lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar6 * 0xc);
  local_28 = *(undefined8 *)(lVar1 + 0x10 + lVar5 * 0x18);
  puVar7 = (undefined8 *)(lVar1 + lVar5 * 0x18);
  local_38 = *puVar7;
  uStack_30 = puVar7[1];
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  puVar7 = local_68;
  puVar8 = (undefined8 *)(param_1 + 6);
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_146bd2a7a(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829196c FUN_14829196c body=662 status=ok
// SIG undefined FUN_14829196c(void)

undefined8
FUN_14829196c(longlong param_1,uint param_2,undefined8 param_3,double *param_4,undefined4 *param_5,
             longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  double *pdVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  double *local_88;
  undefined8 local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  local_88 = param_4;
  local_80 = param_3;
  while (uVar5 = local_80, *(int *)(param_1 + 200) <= (int)uVar9) {
    uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                     (ulonglong)(uVar9 & 0x1ff) * 4);
    if ((int)uVar7 < 0) {
      dVar10 = (double)FUN_148291cd4(param_1,~uVar7,local_80);
      uVar7 = ~uVar7;
      if (*local_88 < dVar10) goto LAB_148291bcf;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar10 = (double)FUN_148291cd4(param_1,uVar7,local_80);
      dVar11 = (double)FUN_148291cd4(param_1,uVar9,uVar5);
      pdVar3 = local_88;
      if (dVar11 <= dVar10) {
        if (*local_88 <= dVar11) goto LAB_148291bcf;
        local_90 = param_6;
        local_98 = param_5;
        FUN_14829196c(param_1,uVar9,local_80,local_88);
        if (*pdVar3 <= dVar10) goto LAB_148291bcf;
      }
      else {
        if (*local_88 <= dVar10) goto LAB_148291bcf;
        local_90 = param_6;
        local_98 = param_5;
        FUN_14829196c(param_1,uVar7,local_80,local_88);
        uVar7 = uVar9;
        if (*pdVar3 <= dVar11) goto LAB_148291bcf;
      }
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar7 >> 9) * 8) +
                     (ulonglong)(uVar7 & 0x1ff) * 4);
  }
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
                  (ulonglong)(uVar9 & 0x1ff) * 4);
  if (0 < iVar8) {
    do {
      uVar9 = uVar9 + 1;
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 >> 9) * 8) +
               (ulonglong)(uVar9 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_148291b9b:
        dVar10 = (double)FUN_148291c04(*(undefined8 *)(param_1 + 8),uVar1,local_80);
        if (dVar10 < *local_88) {
          *local_88 = dVar10;
          *param_5 = uVar1;
        }
      }
      else {
        plVar6 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar6 = (longlong *)(param_6 + 0x30);
        }
        local_74 = uVar1;
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_74);
        if (cVar4 != '\0') goto LAB_148291b9b;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_148291bcf:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 148291c04 FUN_148291c04 body=207 status=ok
// SIG undefined FUN_148291c04(void)

void FUN_148291c04(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [15];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *(longlong *)param_1[1];
  lVar3 = (longlong)param_2;
  lVar6 = (longlong)*(int *)(lVar2 + lVar3 * 0xc);
  lVar1 = *(longlong *)*param_1;
  local_68[2] = *(undefined8 *)(lVar1 + 0x10 + lVar6 * 0x18);
  puVar4 = (undefined8 *)(lVar1 + lVar6 * 0x18);
  local_68[0] = *puVar4;
  local_68[1] = puVar4[1];
  lVar6 = (longlong)*(int *)(lVar2 + 4 + lVar3 * 0xc);
  local_40 = *(undefined8 *)(lVar1 + 0x10 + lVar6 * 0x18);
  puVar4 = (undefined8 *)(lVar1 + lVar6 * 0x18);
  local_68[3] = *puVar4;
  uStack_48 = puVar4[1];
  lVar2 = (longlong)*(int *)(lVar2 + 8 + lVar3 * 0xc);
  puVar4 = (undefined8 *)(lVar1 + lVar2 * 0x18);
  local_38 = *puVar4;
  uStack_30 = puVar4[1];
  local_28 = *(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x18);
  local_e8 = *(undefined8 *)(param_3 + 4);
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  puVar4 = local_68;
  puVar5 = local_e0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_146bd2a7a(&local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148291cd4 FUN_148291cd4 body=150 status=ok
// SIG undefined FUN_148291cd4(void)

double FUN_148291cd4(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 148291d6a FUN_148291d6a body=129 status=ok
// SIG undefined FUN_148291d6a(void)

void FUN_148291d6a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_2;
  if (param_1[1] != param_2[1]) {
    FUN_146de062c(param_1,param_2[1],1);
  }
  local_28 = *param_1;
  local_48 = &local_28;
  local_40 = &local_20;
  local_38 = param_3;
  local_30 = param_1;
  FUN_148291dec();
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148291dec FUN_148291dec body=107 status=ok
// SIG undefined FUN_148291dec(void)

void FUN_148291dec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 148291e58 FUN_148291e58 body=134 status=ok
// SIG undefined FUN_148291e58(void)

bool FUN_148291e58(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148291ec0;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148291ec0:
    bVar1 = false;
    goto LAB_148291ec2;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_148291ee0(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_148291ec2:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148291ee0 FUN_148291ee0 body=726 status=ok
// SIG undefined FUN_148291ee0(void)

ulonglong FUN_148291ee0(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
                       undefined4 *param_5,longlong param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong local_90;
  undefined8 local_88;
  double *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                   (ulonglong)(uVar8 & 0x1ff) * 4);
  local_88 = param_3;
  if ((int)uVar8 < *(int *)(param_1 + 200)) {
    local_80 = param_4;
    if (0 < (int)uVar6) {
      do {
        uVar8 = uVar8 + 1;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
        pcVar2 = *(code **)(param_6 + 0x10);
        if (pcVar2 == (code *)0x0) {
LAB_148291fc8:
          dVar12 = (double)FUN_148291c04(*(undefined8 *)(param_1 + 8),uVar1,local_88);
          if (dVar12 < *local_80) {
            *local_80 = dVar12;
            *param_5 = uVar1;
            uVar9 = CONCAT71((int7)((ulonglong)&local_74 >> 8),1);
            goto LAB_148292027;
          }
        }
        else {
          plVar5 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar5 = (longlong *)(param_6 + 0x30);
          }
          local_74 = uVar1;
          uVar4 = (**(code **)(*plVar5 + 8))();
          cVar3 = (*pcVar2)(uVar4,&local_74);
          if (cVar3 != '\0') goto LAB_148291fc8;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)unaff_R14 >> 8);
    if ((int)uVar6 < 0) {
      dVar12 = (double)FUN_148291cd4(param_1,~uVar6,param_3);
      if (dVar12 <= *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_148291ee0(param_1,~uVar6,local_88,param_4);
LAB_1482921aa:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_148292027;
      }
    }
    else {
      iVar7 = uVar6 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4) + -1;
      dVar12 = (double)FUN_148291cd4(param_1,iVar7,param_3);
      dVar13 = (double)FUN_148291cd4(param_1,iVar11,param_3);
      if (dVar13 <= dVar12) {
        if (dVar13 < *param_4) {
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_148291ee0(param_1,iVar11,local_88,param_4);
          uVar9 = CONCAT71(uVar10,1);
          if (cVar3 != '\0') goto LAB_148292027;
          iVar11 = iVar7;
          if (dVar12 < *param_4) goto LAB_148292174;
        }
      }
      else if (dVar12 < *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_148291ee0(param_1,iVar7,local_88,param_4);
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_148292027;
        if (dVar13 < *param_4) {
LAB_148292174:
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_148291ee0(param_1,iVar11,local_88,param_4);
          goto LAB_1482921aa;
        }
      }
    }
  }
  uVar9 = 0;
LAB_148292027:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1482921b8 FUN_1482921b8 body=38 status=ok
// SIG undefined FUN_1482921b8(void)

undefined8 FUN_1482921b8(undefined8 param_1,int param_2)

{
  FUN_148293668();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482921ee FUN_1482921ee body=133 status=ok
// SIG undefined FUN_1482921ee(void)

bool FUN_1482921ee(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return false;
  }
  FUN_14829371c(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 148292274 FUN_148292274 body=76 status=ok
// SIG undefined FUN_148292274(void)

void FUN_148292274(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482922c2 FUN_1482922c2 body=84 status=ok
// SIG undefined FUN_1482922c2(void)

undefined4 FUN_1482922c2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292318 FUN_148292318 body=123 status=ok
// SIG undefined FUN_148292318(void)

undefined8 FUN_148292318(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < iVar1) goto LAB_14829236f;
  }
  else if (*(longlong *)(param_1 + 0x10) == 1) {
LAB_14829236f:
    local_28 = param_4;
    FUN_148293c18(param_1,iVar1,param_2,param_3);
    if (*(int *)(param_3 + 1) != 0) {
      FUN_148294024(*param_3);
      uVar2 = 1;
      goto LAB_148292352;
    }
  }
  uVar2 = 0;
LAB_148292352:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148292394 FUN_148292394 body=165 status=ok
// SIG undefined FUN_148292394(void)

undefined4 * FUN_148292394(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [8];
  undefined1 local_b0 [120];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_b8);
  if (iVar1 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
  }
  else {
    local_d8 = *param_3;
    uStack_d4 = param_3[1];
    uStack_d0 = param_3[2];
    uStack_cc = param_3[3];
    local_c8 = *(undefined8 *)(param_3 + 4);
    FUN_1482918a6(local_b0,param_1[1],iVar1);
    *(undefined8 *)(param_2 + 4) = local_28;
  }
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829243a FUN_14829243a body=171 status=ok
// SIG undefined FUN_14829243a(void)

undefined4
FUN_14829243a(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    uVar1 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1482924c9;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_1482924c9;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_1482946b0(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_1482924c9:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482924e6 FUN_1482924e6 body=125 status=ok
// SIG undefined FUN_1482924e6(void)

undefined8 FUN_1482924e6(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double *local_20;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) goto LAB_148292546;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148292546:
    uVar2 = 0;
    goto LAB_148292548;
  }
  local_28 = *param_3;
  if (3.4028234663852886e+38 <= local_28) {
    local_28 = 3.4028234663852886e+38;
  }
  local_c = 0xffffffff;
  local_20 = param_3;
  uVar2 = FUN_1482949bc(local_28,iVar1,param_2);
LAB_148292548:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292564 FUN_148292564 body=287 status=ok
// SIG undefined FUN_148292564(void)

undefined8 *
FUN_148292564(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148292647;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148292647:
    *param_2 = 0xffffffffffffffff;
    goto LAB_14829264e;
  }
  local_38 = 1.79769313486232e+308;
  dVar1 = *param_6;
  dVar2 = 1.79769313486232e+308;
  if (dVar1 < 1.79769313486232e+308) {
    local_38 = dVar1 * dVar1;
  }
  *param_2 = 0xffffffffffffffff;
  local_68 = *(undefined4 *)(param_3 + 0xcc);
  local_40 = param_7;
  local_48 = param_6;
  local_58 = &local_38;
  local_60 = 0;
  local_50 = param_2;
  FUN_148294e2c();
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_14829264e:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292684 FUN_148292684 body=394 status=ok
// SIG undefined FUN_148292684(void)

void FUN_148292684(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar3 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar3 < 0) goto LAB_1482927d1;
  }
  else if (param_1[2] != 1) goto LAB_1482927d1;
  lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar3 >> 9) * 8);
  lVar7 = (ulonglong)((uVar3 & 0x1ff) << 3) * 3;
  lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar3 >> 9) * 8);
  local_80 = *(double *)(lVar4 + 0x10 + lVar7);
  dVar1 = *(double *)(lVar5 + 0x10 + lVar7);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar4 + 8 + lVar7);
  dVar2 = *(double *)(lVar5 + 8 + lVar7);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar4 + lVar7) - *(double *)(lVar5 + lVar7);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar4 + lVar7) + *(double *)(lVar5 + lVar7);
  local_74 = 0;
  pcVar6 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar8 = (*pcVar6)(uVar9,&local_a8,&local_74);
  if (cVar8 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_1482927d1:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148292810 FUN_148292810 body=1281 status=ok
// SIG undefined FUN_148292810(void)

void FUN_148292810(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_148292952:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_148292952;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292d12 FUN_148292d12 body=191 status=ok
// SIG undefined FUN_148292d12(void)

bool FUN_148292d12(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148292da9;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148292da9:
    bVar2 = false;
    goto LAB_148292dab;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_148295f78;
  local_80 = param_3;
  iVar1 = FUN_148295bc8(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_148292dab:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292dd2 FUN_148292dd2 body=164 status=ok
// SIG undefined FUN_148292dd2(void)

undefined8
FUN_148292dd2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148292e58;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148292e58:
    uVar1 = 0;
    goto LAB_148292e5a;
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_14829696a;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar1 = FUN_148295f8c();
LAB_148292e5a:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148292e78 FUN_148292e78 body=894 status=ok
// SIG undefined FUN_148292e78(void)

uint FUN_148292e78(longlong *param_1,undefined8 *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_158 [36];
  uint local_134;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar4 = *(int *)((longlong)param_1 + 0xcc);
  if ((iVar4 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < iVar4) goto LAB_148292ed3;
  }
  else if (param_1[2] == 1) {
LAB_148292ed3:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14ae72500;
        local_88 = FUN_14829697e;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)(param_3 + 4) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b8._4_4_;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
        iVar4 = *(int *)((longlong)param_1 + 0xcc);
      }
      cVar6 = FUN_148295eb8(param_1,iVar4,param_3);
      if (cVar6 == '\0') goto LAB_148292ec8;
    }
    uVar8 = (ulonglong)*(int *)(param_2[1] + 8);
    if ((longlong)uVar8 < 1) {
      local_134 = 0;
      uVar7 = local_134;
    }
    else {
      plVar1 = param_4 + 4;
      local_120 = uVar8 * 0xc;
      local_134 = (uint)CONCAT71((int7)((ulonglong)local_120 >> 8),1);
      uVar13 = 1;
      lVar14 = 0;
      local_130 = plVar1;
      local_128 = param_1;
      local_118 = uVar8;
      do {
        pcVar5 = (code *)*param_4;
        lVar10 = *(longlong *)param_2[1];
        if (pcVar5 == (code *)0x0) {
          plVar11 = (longlong *)*param_2;
          puVar3 = (undefined8 *)(*plVar11 + (longlong)*(int *)(lVar10 + lVar14) * 0x18);
          local_d8 = *puVar3;
          uStack_d0 = puVar3[1];
          local_c8 = *(undefined8 *)(*plVar11 + 0x10 + (longlong)*(int *)(lVar10 + lVar14) * 0x18);
          lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar14);
          puVar3 = (undefined8 *)(*plVar11 + lVar12 * 0x18);
          uStack_c0 = *puVar3;
          uStack_b8 = puVar3[1];
          uStack_b0 = *(undefined8 *)(*plVar11 + 0x10 + lVar12 * 0x18);
          lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar14);
          puVar2 = (undefined4 *)(*plVar11 + lVar10 * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          local_98 = *(undefined8 *)(*plVar11 + 0x10 + lVar10 * 0x18);
        }
        else {
          local_110 = (longlong)*(int *)(lVar10 + 8 + lVar14);
          lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar14);
          local_f8 = *(undefined8 *)
                      (*(longlong *)*param_2 + 0x10 + (longlong)*(int *)(lVar10 + lVar14) * 0x18);
          puVar2 = (undefined4 *)
                   (*(longlong *)*param_2 + (longlong)*(int *)(lVar10 + lVar14) * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          plVar11 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar11 = plVar1;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar5)(&local_f0,uVar9,&local_108);
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          local_f8 = *(undefined8 *)(*(longlong *)*param_2 + 0x10 + lVar12 * 0x18);
          puVar2 = (undefined4 *)(*(longlong *)*param_2 + lVar12 * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar5 = (code *)*param_4;
          plVar11 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar11 = plVar1;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar5)(&local_f0,uVar9,&local_108);
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          local_f8 = *(undefined8 *)(*(longlong *)*param_2 + 0x10 + local_110 * 0x18);
          puVar2 = (undefined4 *)(*(longlong *)*param_2 + local_110 * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar5 = (code *)*param_4;
          plVar11 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar11 = plVar1;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar5)(&local_f0,uVar9,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
          param_1 = local_128;
        }
        uVar9 = (**(code **)(*param_1 + 0x88))(param_1,&local_d8,param_5);
        uVar7 = local_134;
        if ((char)uVar9 != '\0') break;
        local_134 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),uVar13 < local_118);
        lVar14 = lVar14 + 0xc;
        uVar13 = uVar13 + 1;
        uVar7 = local_134;
      } while (local_120 != lVar14);
    }
    goto LAB_148293146;
  }
LAB_148292ec8:
  uVar7 = 0;
LAB_148293146:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffff01;
}



// FUNCTION 1482931f8 FUN_1482931f8 body=528 status=ok
// SIG undefined FUN_1482931f8(void)

undefined8 *
FUN_1482931f8(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_14829740c;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_1482932bb;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_1482932bb;
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_148296a04(param_1,iVar1,param_3,param_4);
LAB_1482932bb:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829340a FUN_14829340a body=454 status=ok
// SIG undefined FUN_14829340a(void)

undefined8 *
FUN_14829340a(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_148297a58;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_14829349b;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_14829349b;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_1482978ec(param_1,param_2,param_3);
LAB_14829349b:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482935d2 FUN_1482935d2 body=119 status=ok
// SIG undefined FUN_1482935d2(void)

undefined8 FUN_1482935d2(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_14829362c;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_14829362c:
    uVar1 = 0;
    goto LAB_14829362e;
  }
  local_10 = &local_19;
  local_18 = FUN_1482984d2;
  local_28 = param_3;
  uVar1 = FUN_1482978ec(param_1,0,param_2);
LAB_14829362e:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148293668 FUN_148293668 body=180 status=ok
// SIG undefined FUN_148293668(void)

void FUN_148293668(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae72420;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x000148293711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14829371c FUN_14829371c body=966 status=ok
// SIG undefined FUN_14829371c(void)

void FUN_14829371c(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                  undefined4 *param_6,longlong param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  int *local_198;
  undefined4 *local_190;
  longlong local_188;
  int *local_178;
  double *local_170;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_178 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar15) {
    do {
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
        dVar17 = (double)FUN_148293ae4(param_1,uVar10,local_178);
        bVar16 = *param_4 + 1e-08 < dVar17;
LAB_148293995:
        uVar13 = (ulonglong)uVar10;
        if (bVar16) goto LAB_148293a9c;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        uVar13 = (ulonglong)uVar15;
        dVar17 = (double)FUN_148293ae4(param_1,uVar10,param_3);
        dVar18 = (double)FUN_148293ae4(param_1,uVar13,param_3);
        if (dVar18 <= dVar17) {
          if (dVar18 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_14829371c(param_1,uVar15,local_178,param_4);
            bVar16 = *param_4 + 1e-08 < dVar17;
            goto LAB_148293995;
          }
          goto LAB_148293a9c;
        }
        if (*param_4 + 1e-08 < dVar17) goto LAB_148293a9c;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_14829371c(param_1,uVar10,local_178,param_4);
        if (*param_4 + 1e-08 < dVar18) goto LAB_148293a9c;
      }
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar13 >> 9) * 8) +
                        (ulonglong)((uint)uVar13 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar15);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                  (ulonglong)(uVar15 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar9) {
    do {
      uVar15 = uVar15 + 1;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                      (ulonglong)(uVar15 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_7 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_14829382f:
        lVar6 = (longlong)iVar1;
        lVar7 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
        lVar14 = (longlong)*(int *)(lVar7 + lVar6 * 0xc);
        lVar3 = *(longlong *)**(undefined8 **)(param_1 + 8);
        local_c8[2] = *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar3 + lVar14 * 0x18);
        local_c8[0] = *puVar11;
        local_c8[1] = puVar11[1];
        lVar14 = (longlong)*(int *)(lVar7 + 4 + lVar6 * 0xc);
        puVar11 = (undefined8 *)(lVar3 + lVar14 * 0x18);
        local_c8[3] = *puVar11;
        uStack_a8 = puVar11[1];
        local_a0 = *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x18);
        lVar7 = (longlong)*(int *)(lVar7 + 8 + lVar6 * 0xc);
        puVar11 = (undefined8 *)(lVar3 + lVar7 * 0x18);
        local_98 = *puVar11;
        uStack_90 = puVar11[1];
        local_88 = *(undefined8 *)(lVar3 + 0x10 + lVar7 * 0x18);
        local_168 = *local_178;
        iStack_164 = local_178[1];
        iStack_160 = local_178[2];
        iStack_15c = local_178[3];
        local_158 = *(undefined8 *)(local_178 + 4);
        uStack_150 = *(undefined8 *)(local_178 + 6);
        local_148 = local_178[8];
        iStack_144 = local_178[9];
        iStack_140 = local_178[10];
        iStack_13c = local_178[0xb];
        puVar11 = local_c8;
        puVar12 = local_138;
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        cVar4 = FUN_146bd80f0(&local_168);
        if ((cVar4 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = iVar1;
          *(undefined8 *)(param_6 + 4) = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e4;
          param_6[2] = uStack_e0;
          param_6[3] = uStack_dc;
        }
      }
      else {
        plVar8 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar8 = (longlong *)(param_7 + 0x30);
        }
        local_168 = iVar1;
        uVar5 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_168);
        if (cVar4 != '\0') goto LAB_14829382f;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
LAB_148293a9c:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148293ae4 FUN_148293ae4 body=307 status=ok
// SIG undefined FUN_148293ae4(void)

void FUN_148293ae4(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 148293c18 FUN_148293c18 body=1035 status=ok
// SIG undefined FUN_148293c18(void)

void FUN_148293c18(longlong param_1,uint param_2,int *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  int *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar2 = *param_5;
  uVar23 = SUB84(dVar2,0);
  uVar24 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar23 = 0xe0000000;
    uVar24 = 0x47efffff;
  }
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1b8 = param_3;
  if (*(int *)(param_1 + 200) <= (int)uVar19) {
    do {
      uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                        + (ulonglong)(uVar19 & 0x1ff) * 4);
      if ((int)uVar14 < 0) {
        uVar14 = ~uVar14;
        dVar2 = (double)FUN_148293ae4(param_1,uVar14,local_1b8);
        bVar20 = (double)CONCAT44(uVar24,uVar23) + 1e-08 < dVar2;
LAB_148293ece:
        uVar17 = (ulonglong)uVar14;
        if (bVar20) goto LAB_148293fbc;
      }
      else {
        uVar14 = uVar14 - 1;
        uVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        uVar17 = (ulonglong)uVar19;
        dVar21 = (double)FUN_148293ae4(param_1,uVar14,param_3);
        dVar22 = (double)FUN_148293ae4(param_1,uVar17,param_3);
        dVar2 = (double)CONCAT44(uVar24,uVar23) + 1e-08;
        if (dVar22 <= dVar21) {
          if (dVar22 <= dVar2) {
            local_1c8 = param_5;
            FUN_148293c18(param_1,uVar19,local_1b8,param_4);
            bVar20 = dVar2 < dVar21;
            goto LAB_148293ece;
          }
          goto LAB_148293fbc;
        }
        if (dVar2 < dVar21) goto LAB_148293fbc;
        local_1c8 = param_5;
        FUN_148293c18(param_1,uVar14,local_1b8,param_4);
        if (dVar2 < dVar22) goto LAB_148293fbc;
      }
      dVar2 = *param_5;
      uVar23 = SUB84(dVar2,0);
      uVar24 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar23 = 0xe0000000;
        uVar24 = 0x47efffff;
      }
      uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (uVar17 >> 9) * 8) +
                        (ulonglong)((uint)uVar17 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar19);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                   (ulonglong)(uVar19 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar13) {
    do {
      uVar19 = uVar19 + 1;
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                      (ulonglong)(uVar19 & 0x1ff) * 4);
      pcVar5 = (code *)param_5[2];
      if (pcVar5 == (code *)0x0) {
LAB_148293d45:
        lVar10 = (longlong)iVar3;
        lVar11 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
        lVar18 = (longlong)*(int *)(lVar11 + lVar10 * 0xc);
        lVar6 = *(longlong *)**(undefined8 **)(param_1 + 8);
        local_e8[2] = *(undefined8 *)(lVar6 + 0x10 + lVar18 * 0x18);
        puVar15 = (undefined8 *)(lVar6 + lVar18 * 0x18);
        local_e8[0] = *puVar15;
        local_e8[1] = puVar15[1];
        lVar18 = (longlong)*(int *)(lVar11 + 4 + lVar10 * 0xc);
        puVar15 = (undefined8 *)(lVar6 + lVar18 * 0x18);
        local_e8[3] = *puVar15;
        uStack_c8 = puVar15[1];
        local_c0 = *(undefined8 *)(lVar6 + 0x10 + lVar18 * 0x18);
        lVar11 = (longlong)*(int *)(lVar11 + 8 + lVar10 * 0xc);
        puVar15 = (undefined8 *)(lVar6 + lVar11 * 0x18);
        local_b8 = *puVar15;
        uStack_b0 = puVar15[1];
        local_a8 = *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x18);
        local_188 = *local_1b8;
        iStack_184 = local_1b8[1];
        iStack_180 = local_1b8[2];
        iStack_17c = local_1b8[3];
        local_178 = local_1b8[4];
        iStack_174 = local_1b8[5];
        iStack_170 = local_1b8[6];
        iStack_16c = local_1b8[7];
        local_168 = local_1b8[8];
        iStack_164 = local_1b8[9];
        iStack_160 = local_1b8[10];
        iStack_15c = local_1b8[0xb];
        puVar15 = local_e8;
        puVar16 = local_158;
        for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        cVar8 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar7 = local_1b0;
        if ((cVar8 != '\0') && (local_110 <= (double)CONCAT44(uVar24,uVar23) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar11 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar7;
          *(int *)(lVar6 + lVar11 * 0x28) = iVar3;
          *(double *)(lVar6 + 8 + lVar11 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar11 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar11 * 0x28) = local_198;
        }
      }
      else {
        pdVar12 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar12 = param_5 + 6;
        }
        local_188 = iVar3;
        uVar9 = (**(code **)((longlong)*pdVar12 + 8))();
        cVar8 = (*pcVar5)(uVar9,&local_188);
        if (cVar8 != '\0') goto LAB_148293d45;
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_148293fbc:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148294024 FUN_148294024 body=957 status=ok
// SIG undefined FUN_148294024(void)

void FUN_148294024(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar23 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar23 + fVar23);
    plVar15 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar15;
      puVar16 = (undefined8 *)plVar15[1];
      iVar18 = (int)plVar15[2];
      uVar12 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar10) >> 3) * -0x33333333 + 1;
      puVar17 = puVar16;
      puVar19 = puVar16;
      puVar20 = puVar10;
      if (iVar18 != 0) {
LAB_1482940f5:
        if (8 < (int)uVar12) {
          uVar13 = (ulonglong)(uVar12 >> 1);
          uVar1 = puVar10[uVar13 * 5 + 4];
          uVar2 = puVar10[uVar13 * 5];
          uVar3 = (puVar10 + uVar13 * 5)[1];
          uVar4 = puVar10[uVar13 * 5 + 2];
          uVar5 = (puVar10 + uVar13 * 5 + 2)[1];
          puVar10[uVar13 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar13 * 5 + 2] = puVar10[2];
          (puVar10 + uVar13 * 5 + 2)[1] = uVar8;
          puVar10[uVar13 * 5] = uVar6;
          (puVar10 + uVar13 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar14 = puVar16 + 5;
          puVar11 = puVar10;
          do {
            puVar17 = puVar11 + 5;
            puVar9 = puVar11 + 5;
            do {
              puVar21 = puVar9;
              puVar11 = puVar17;
              if (puVar16 < puVar11) break;
              puVar17 = puVar11 + 5;
              puVar9 = puVar21 + 5;
            } while ((double)puVar11[1] < (double)puVar10[1] ||
                     (double)puVar11[1] == (double)puVar10[1]);
            puVar9 = puVar14 + -10;
            do {
              puVar17 = puVar14;
              puVar22 = puVar9;
              puVar14 = puVar17 + -5;
              if (puVar14 <= puVar10) break;
              puVar9 = puVar22 + -5;
            } while ((double)puVar10[1] < (double)puVar17[-4] ||
                     (double)puVar10[1] == (double)puVar17[-4]);
            if (puVar14 < puVar11) goto LAB_148294228;
            uVar1 = puVar11[4];
            uVar2 = *puVar11;
            uVar3 = puVar11[1];
            uVar4 = puVar11[2];
            uVar5 = puVar11[3];
            puVar11[4] = puVar17[-1];
            uVar6 = *puVar14;
            uVar7 = puVar17[-4];
            uVar8 = puVar17[-2];
            puVar11[2] = puVar17[-3];
            puVar11[3] = uVar8;
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar17[-1] = uVar1;
            puVar17[-3] = uVar4;
            puVar17[-2] = uVar5;
            *puVar14 = uVar2;
            puVar17[-4] = uVar3;
          } while( true );
        }
        for (; puVar19 = puVar10, puVar17 = puVar10, puVar10 < puVar16; puVar16 = puVar16 + -5) {
          while (puVar20 = puVar19, puVar17 = puVar17 + 5, puVar17 <= puVar16) {
            puVar19 = puVar17;
            if ((double)puVar17[1] < (double)puVar20[1] || (double)puVar17[1] == (double)puVar20[1])
            {
              puVar19 = puVar20;
            }
          }
          local_48 = puVar20[4];
          local_68 = *puVar20;
          uStack_60 = puVar20[1];
          local_58 = puVar20[2];
          uStack_50 = puVar20[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar20[4] = puVar16[4];
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar20[2] = puVar16[2];
          puVar20[3] = uVar3;
          *puVar20 = uVar1;
          puVar20[1] = uVar2;
          puVar16[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_1482943bd;
      }
LAB_1482943d2:
      FUN_1482943e2(puVar10,uVar12,puVar17,param_4);
LAB_1482943bd:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148294228:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar17[-1];
  uVar1 = *puVar14;
  uVar2 = puVar17[-4];
  uVar3 = puVar17[-2];
  puVar10[2] = puVar17[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar17[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-3] = local_58;
  puVar17[-2] = uStack_50;
  *(undefined4 *)puVar14 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar22 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar21) {
    if (puVar11 < puVar16) {
      *plVar15 = (longlong)puVar11;
      plVar15[1] = (longlong)puVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar21 = puVar10;
    if (puVar14 <= puVar10 + 5) goto LAB_1482943bd;
  }
  else {
    if (puVar10 + 5 < puVar14) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar10 = puVar11;
    puVar17 = puVar16;
    puVar22 = puVar16;
    if (puVar16 <= puVar11) goto LAB_1482943bd;
  }
  uVar12 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar21) >> 3) * -0x33333333 + 1;
  puVar16 = puVar17;
  puVar19 = puVar22;
  puVar20 = puVar21;
  if (iVar18 == 0) goto LAB_1482943d2;
  goto LAB_1482940f5;
}



// FUNCTION 1482943e2 FUN_1482943e2 body=717 status=ok
// SIG undefined FUN_1482943e2(void)

void FUN_1482943e2(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar16 = iVar12;
joined_r0x000148294416:
    do {
      iVar14 = iVar12 * 2 + 1;
      if (iVar14 < (int)param_2) {
        iVar15 = iVar12 * 2 + 2;
        if ((iVar15 < (int)param_2) &&
           ((double)param_1[(longlong)iVar14 * 5 + 1] < (double)param_1[(longlong)iVar15 * 5 + 1] ||
            (double)param_1[(longlong)iVar14 * 5 + 1] == (double)param_1[(longlong)iVar15 * 5 + 1]))
        {
          iVar14 = iVar15;
        }
        if ((double)param_1[(longlong)iVar12 * 5 + 1] <= (double)param_1[(longlong)iVar14 * 5 + 1]
            && (double)param_1[(longlong)iVar14 * 5 + 1] !=
               (double)param_1[(longlong)iVar12 * 5 + 1]) {
          puVar2 = param_1 + (longlong)iVar12 * 5;
          puVar3 = param_1 + (longlong)iVar14 * 5;
          local_18 = puVar2[4];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar2[4] = puVar3[4];
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[3];
          puVar2[2] = puVar3[2];
          puVar2[3] = uVar10;
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar3[4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar3 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar3 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar3 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_30._4_4_;
          iVar12 = iVar14;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x000148294416;
        }
      }
      bVar17 = iVar16 != 0;
      iVar12 = iVar16 + -1;
      iVar16 = iVar12;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      local_18 = param_1[4];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      param_1[4] = param_1[uVar13 * 5 + 4];
      uVar8 = param_1[uVar13 * 5];
      uVar9 = (param_1 + uVar13 * 5)[1];
      uVar10 = (param_1 + uVar13 * 5 + 2)[1];
      param_1[2] = param_1[uVar13 * 5 + 2];
      param_1[3] = uVar10;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[uVar13 * 5 + 4] = local_18;
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = param_1 + uVar13 * 5 + 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      puVar2 = param_1 + uVar13 * 5;
      *(undefined4 *)puVar2 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar14 = 1;
          iVar16 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar15 = iVar14;
            if (((longlong)iVar12 < (longlong)uVar13) &&
               ((double)param_1[(longlong)iVar14 * 5 + 1] <
                (double)param_1[(longlong)iVar12 * 5 + 1] ||
                (double)param_1[(longlong)iVar14 * 5 + 1] ==
                (double)param_1[(longlong)iVar12 * 5 + 1])) {
              iVar15 = iVar12;
            }
            if ((double)param_1[(longlong)iVar15 * 5 + 1] <
                (double)param_1[(longlong)iVar16 * 5 + 1] ||
                (double)param_1[(longlong)iVar15 * 5 + 1] ==
                (double)param_1[(longlong)iVar16 * 5 + 1]) break;
            puVar2 = param_1 + (longlong)iVar16 * 5;
            puVar3 = param_1 + (longlong)iVar15 * 5;
            uVar4 = puVar2[4];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar2[4] = puVar3[4];
            uVar9 = *puVar3;
            uVar10 = puVar3[1];
            uVar11 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar11;
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar3[4] = uVar4;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar12 = iVar15 * 2;
            iVar14 = iVar15 * 2 + 1;
            iVar16 = iVar15;
          } while ((longlong)iVar14 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_18 = param_1[4];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_1[4] = param_1[uVar1 * 5 + 4];
          uVar8 = param_1[uVar1 * 5];
          uVar9 = (param_1 + uVar1 * 5)[1];
          uVar10 = (param_1 + uVar1 * 5 + 2)[1];
          param_1[2] = param_1[uVar1 * 5 + 2];
          param_1[3] = uVar10;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          param_1[uVar1 * 5 + 4] = local_18;
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar2 = param_1 + uVar1 * 5 + 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          puVar2 = param_1 + uVar1 * 5;
          *(undefined4 *)puVar2 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar2 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_30._4_4_;
          bVar17 = 2 < uVar13;
          uVar13 = uVar1;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar17);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482946b0 FUN_1482946b0 body=778 status=ok
// SIG undefined FUN_1482946b0(void)

void FUN_1482946b0(longlong param_1,uint param_2,double *param_3,double *param_4,int *param_5,
                  longlong param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  int *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar10) {
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar9 < 0) {
      dVar13 = (double)FUN_148291cd4(param_1,~uVar9,param_3);
      uVar9 = ~uVar9;
      if (*param_4 < dVar13) goto LAB_148294986;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_148291cd4(param_1,uVar9,param_3);
      dVar14 = (double)FUN_148291cd4(param_1,uVar10,param_3);
      if (dVar14 <= dVar13) {
        if (*param_4 <= dVar14) goto LAB_148294986;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1482946b0(param_1,uVar10,param_3,param_4);
        if (*param_4 <= dVar13) goto LAB_148294986;
      }
      else {
        if (*param_4 <= dVar13) goto LAB_148294986;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_1482946b0(param_1,uVar9,param_3,param_4);
        uVar9 = uVar10;
        if (*param_4 <= dVar14) goto LAB_148294986;
      }
    }
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar9 >> 9) * 8) +
                      (ulonglong)(uVar9 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar11 = 1;
    do {
      iVar1 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar11 + uVar10 >> 9) * 8) +
                      (ulonglong)(iVar11 + uVar10 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_1482948eb:
        lVar6 = **(longlong **)(*(longlong *)(param_1 + 8) + 8);
        local_7c = *(undefined8 *)(lVar6 + (longlong)iVar1 * 0xc);
        local_74 = *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0xc);
        lVar6 = 0;
        do {
          iVar1 = *(int *)((longlong)&local_7c + lVar6 * 4);
          lVar8 = (longlong)iVar1;
          lVar3 = *(longlong *)**(undefined8 **)(param_1 + 8);
          dVar14 = *param_3 - *(double *)(lVar3 + lVar8 * 0x18);
          dVar15 = param_3[1] - *(double *)(lVar3 + 8 + lVar8 * 0x18);
          dVar13 = param_3[2] - *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
          dVar13 = dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar13 < *param_4) {
            *param_4 = dVar13;
            *param_5 = iVar1;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
      }
      else {
        local_7c = CONCAT44(local_7c._4_4_,iVar1);
        plVar7 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar7 = local_88;
        }
        uVar5 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_7c);
        if (cVar4 != '\0') goto LAB_1482948eb;
      }
      bVar12 = iVar11 != local_8c;
      iVar11 = iVar11 + 1;
    } while (bVar12);
  }
LAB_148294986:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482949bc FUN_1482949bc body=1134 status=ok
// SIG undefined FUN_1482949bc(void)

ulonglong FUN_1482949bc(longlong param_1,uint param_2,int *param_3,undefined8 param_4,
                       undefined4 *param_5,double *param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  undefined7 uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  double *local_200;
  int *local_1f8;
  int *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar17 < *(int *)(param_1 + 200)) {
    iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                     (ulonglong)(uVar17 & 0x1ff) * 4);
    if (0 < iVar10) {
      local_1f0 = param_3 + 6;
      do {
        uVar17 = uVar17 + 1;
        iVar14 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 4);
        pcVar3 = (code *)param_6[2];
        if (pcVar3 == (code *)0x0) {
LAB_148294ad6:
          lVar7 = (longlong)iVar14;
          puVar15 = *(undefined8 **)(param_1 + 8);
          lVar8 = *(longlong *)puVar15[1];
          lVar16 = (longlong)*(int *)(lVar8 + lVar7 * 0xc);
          puVar13 = (undefined8 *)(*(longlong *)*puVar15 + lVar16 * 0x18);
          local_1a8 = *puVar13;
          uStack_1a0 = puVar13[1];
          local_198 = *(undefined8 *)(*(longlong *)*puVar15 + 0x10 + lVar16 * 0x18);
          lVar16 = (longlong)*(int *)(lVar8 + 4 + lVar7 * 0xc);
          puVar13 = (undefined8 *)(*(longlong *)*puVar15 + lVar16 * 0x18);
          local_1c8 = *puVar13;
          uStack_1c0 = puVar13[1];
          local_1b8 = *(undefined8 *)(*(longlong *)*puVar15 + 0x10 + lVar16 * 0x18);
          lVar8 = (longlong)*(int *)(lVar8 + 8 + lVar7 * 0xc);
          puVar1 = (undefined4 *)(*(longlong *)*puVar15 + lVar8 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_1d8 = *(undefined8 *)(*(longlong *)*puVar15 + 0x10 + lVar8 * 0x18);
          local_208 = &local_1e8;
          cVar5 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar5 != '\0') {
            local_188[2] = local_198;
            local_188[0] = local_1a8;
            local_188[1] = uStack_1a0;
            local_188[3] = local_1c8;
            uStack_168 = uStack_1c0;
            local_160 = local_1b8;
            local_158 = CONCAT44(uStack_1e4,local_1e8);
            uStack_150 = CONCAT44(uStack_1dc,uStack_1e0);
            local_148 = local_1d8;
            local_138 = *local_1f8;
            iStack_134 = local_1f8[1];
            iStack_130 = local_1f8[2];
            iStack_12c = local_1f8[3];
            local_128 = *(undefined8 *)(local_1f8 + 4);
            uStack_120 = *(undefined8 *)(local_1f8 + 6);
            local_118 = local_1f8[8];
            iStack_114 = local_1f8[9];
            iStack_110 = local_1f8[10];
            iStack_10c = local_1f8[0xb];
            puVar13 = local_188;
            puVar15 = local_108;
            for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar15 = puVar15 + 1;
            }
            cVar5 = FUN_146bd80f0(&local_138);
            if ((cVar5 != '\0') && (local_c0 < *param_6)) {
              uVar11 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
              goto LAB_148294c9f;
            }
          }
        }
        else {
          pdVar9 = (double *)param_6[4];
          if ((double *)param_6[4] == (double *)0x0) {
            pdVar9 = param_6 + 6;
          }
          local_138 = iVar14;
          uVar6 = (**(code **)((longlong)*pdVar9 + 8))();
          cVar5 = (*pcVar3)(uVar6,&local_138);
          if (cVar5 != '\0') goto LAB_148294ad6;
        }
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                     (ulonglong)(uVar17 & 0x1ff) * 4);
    uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((int)uVar2 < 0) {
      dVar4 = (double)FUN_148293ae4(param_1,~uVar2,param_3);
      if (dVar4 <= (double)param_5 + 1e-08) {
        local_200 = param_6;
        local_208 = param_5;
        cVar5 = FUN_1482949bc(param_1,~uVar2,local_1f8,param_4);
LAB_148294e1e:
        uVar11 = CONCAT71(uVar12,1);
        if (cVar5 != '\0') goto LAB_148294c9f;
      }
    }
    else {
      iVar14 = uVar2 - 1;
      iVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                       (ulonglong)(uVar17 + 1 & 0x1ff) * 4) + -1;
      dVar18 = (double)FUN_148293ae4(param_1,iVar14,param_3);
      dVar19 = (double)FUN_148293ae4(param_1,iVar10,param_3);
      dVar4 = (double)param_5 + 1e-08;
      if (dVar19 <= dVar18) {
        if (dVar19 <= dVar4) {
          local_200 = param_6;
          local_208 = param_5;
          cVar5 = FUN_1482949bc(param_1,iVar10,local_1f8,param_4);
          iVar10 = iVar14;
          dVar19 = dVar18;
          goto joined_r0x000148294dcc;
        }
      }
      else if (dVar18 <= dVar4) {
        local_200 = param_6;
        local_208 = param_5;
        cVar5 = FUN_1482949bc(param_1,iVar14,local_1f8,param_4);
joined_r0x000148294dcc:
        uVar11 = CONCAT71(uVar12,1);
        if (cVar5 != '\0') goto LAB_148294c9f;
        if (dVar19 <= dVar4) {
          local_200 = param_6;
          local_208 = param_5;
          cVar5 = FUN_1482949bc(param_1,iVar10,local_1f8,param_4);
          goto LAB_148294e1e;
        }
      }
    }
  }
  uVar11 = 0;
LAB_148294c9f:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148294e2c FUN_148294e2c body=2601 status=ok
// SIG undefined FUN_148294e2c(void)

void FUN_148294e2c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  int local_26c;
  ulonglong local_268;
  ulonglong local_260;
  int local_254;
  undefined8 *local_250;
  longlong local_248;
  longlong *local_240;
  longlong *local_238;
  ulonglong local_230;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar20 = *(int *)(param_1 + 200);
  local_278 = param_1;
  if (((int)uVar7 < iVar20) && ((int)uVar3 < *(int *)(param_3 + 200))) {
    local_26c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_254 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8)
                        + (ulonglong)(uVar3 & 0x1ff) * 4);
    local_210 = -1.0;
    local_260 = (ulonglong)uVar7;
    local_250 = param_4;
    if (0 < local_254) {
      local_238 = (longlong *)(param_10 + 0x30);
      local_240 = param_4 + 4;
      local_260 = (ulonglong)(uVar7 + 1);
      iVar20 = 1;
      local_248 = param_3;
      local_230 = (ulonglong)uVar3;
      do {
        uVar7 = (int)local_230 + iVar20;
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_248 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        local_268 = (ulonglong)uVar7;
        pcVar4 = *(code **)(param_10 + 0x10);
        if (pcVar4 == (code *)0x0) {
LAB_148295010:
          plVar14 = local_240;
          puVar5 = local_250;
          lVar9 = (longlong)(int)local_268;
          puVar17 = *(undefined8 **)(local_248 + 8);
          lVar10 = *(longlong *)puVar17[1];
          lVar19 = (longlong)*(int *)(lVar10 + lVar9 * 0xc);
          puVar16 = (undefined8 *)(*(longlong *)*puVar17 + lVar19 * 0x18);
          local_108 = *(undefined8 *)(*(longlong *)*puVar17 + 0x10 + lVar19 * 0x18);
          local_118 = *puVar16;
          uStack_110 = puVar16[1];
          lVar19 = (longlong)*(int *)(lVar10 + 4 + lVar9 * 0xc);
          puVar16 = (undefined8 *)(*(longlong *)*puVar17 + lVar19 * 0x18);
          local_f0 = *(undefined8 *)(*(longlong *)*puVar17 + 0x10 + lVar19 * 0x18);
          local_100 = *puVar16;
          uStack_f8 = puVar16[1];
          lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar9 * 0xc);
          puVar1 = (uint *)(*(longlong *)*puVar17 + lVar10 * 0x18);
          local_d8 = *(undefined8 *)(*(longlong *)*puVar17 + 0x10 + lVar10 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar4 = (code *)*local_250;
          if (pcVar4 != (code *)0x0) {
            plVar13 = (longlong *)local_250[2];
            if ((longlong *)local_250[2] == (longlong *)0x0) {
              plVar13 = local_240;
            }
            uVar8 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar5;
            plVar13 = (longlong *)puVar5[2];
            if ((longlong *)puVar5[2] == (longlong *)0x0) {
              plVar13 = plVar14;
            }
            uVar8 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar5;
            plVar13 = (longlong *)puVar5[2];
            if ((longlong *)puVar5[2] == (longlong *)0x0) {
              plVar13 = plVar14;
            }
            uVar8 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar8,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar16 = &local_118;
          puVar17 = local_1a8;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          local_210 = -1.0;
          if (0 < local_26c) {
            local_268 = local_268 << 0x20;
            uVar12 = local_260 & 0xffffffff;
            lVar10 = local_278;
            iVar15 = local_26c;
            do {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar10 + 0xb8) + (uVar12 >> 9) * 8) +
                               (ulonglong)((uint)uVar12 & 0x1ff) * 4);
              pcVar4 = *(code **)(param_9 + 0x10);
              if (pcVar4 == (code *)0x0) {
LAB_148295239:
                lVar9 = local_278;
                lVar11 = (longlong)(int)uVar7;
                lVar19 = *(longlong *)(*(undefined8 **)(lVar10 + 8))[1];
                lVar18 = (longlong)*(int *)(lVar19 + lVar11 * 0xc);
                lVar10 = *(longlong *)**(undefined8 **)(lVar10 + 8);
                local_c8[2] = *(undefined8 *)(lVar10 + 0x10 + lVar18 * 0x18);
                puVar16 = (undefined8 *)(lVar10 + lVar18 * 0x18);
                local_c8[0] = *puVar16;
                local_c8[1] = puVar16[1];
                lVar18 = (longlong)*(int *)(lVar19 + 4 + lVar11 * 0xc);
                puVar16 = (undefined8 *)(lVar10 + lVar18 * 0x18);
                local_c8[3] = *puVar16;
                uStack_a8 = puVar16[1];
                local_a0 = *(undefined8 *)(lVar10 + 0x10 + lVar18 * 0x18);
                lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar11 * 0xc);
                puVar2 = (undefined4 *)(lVar10 + lVar19 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                local_88 = *(undefined8 *)(lVar10 + 0x10 + lVar19 * 0x18);
                puVar16 = local_c8;
                puVar17 = local_160;
                for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar17 = *puVar16;
                  puVar16 = puVar16 + 1;
                  puVar17 = puVar17 + 1;
                }
                local_210 = -1.0;
                dVar23 = (double)FUN_146bd8e44(&local_210);
                if (dVar23 < *param_7) {
                  *param_7 = dVar23;
                  *param_8 = uVar7 | local_268;
                }
              }
              else {
                plVar14 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar14 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar7;
                uVar8 = (**(code **)(*plVar14 + 8))();
                cVar6 = (*pcVar4)(uVar8,&local_228);
                lVar9 = lVar10;
                if (cVar6 != '\0') goto LAB_148295239;
              }
              uVar12 = (ulonglong)((uint)uVar12 + 1);
              iVar15 = iVar15 + -1;
              lVar10 = lVar9;
            } while (iVar15 != 0);
          }
        }
        else {
          plVar14 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar14 = local_238;
          }
          local_228 = uVar7;
          uVar8 = (**(code **)(*plVar14 + 8))();
          cVar6 = (*pcVar4)(uVar8,&local_228);
          if (cVar6 != '\0') goto LAB_148295010;
        }
        bVar21 = iVar20 != local_254;
        iVar20 = iVar20 + 1;
      } while (bVar21);
    }
    goto LAB_148295348;
  }
  bVar21 = (param_6 & 1) == 0;
  if ((bVar21 || (int)uVar7 < iVar20) &&
      (*(int *)(param_3 + 200) <= (int)uVar3 || !bVar21 && (int)uVar7 >= iVar20)) {
    uVar12 = (ulonglong)((param_2 >> 9) << 3);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar12);
    lVar19 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar12);
    local_1e8 = *(double *)(lVar10 + 0x10 + lVar19);
    dVar23 = *(double *)(lVar9 + 0x10 + lVar19);
    local_200 = local_1e8 - dVar23;
    local_1f0 = *(double *)(lVar10 + 8 + lVar19);
    dVar24 = *(double *)(lVar9 + 8 + lVar19);
    local_208 = local_1f0 - dVar24;
    local_210 = *(double *)(lVar10 + lVar19) - *(double *)(lVar9 + lVar19);
    local_1e8 = local_1e8 + dVar23;
    local_1f0 = local_1f0 + dVar24;
    local_1f8 = *(double *)(lVar10 + lVar19) + *(double *)(lVar9 + lVar19);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_148295856(param_3,local_c8,param_5,param_4);
      dVar23 = (double)FUN_146bd8cba(local_c8,&local_210);
      goto LAB_148295507;
    }
    param_5 = param_5 - 1;
    uVar7 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8)
                    + (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    FUN_148295856(param_3,local_c8,param_5,param_4);
    FUN_148295856(param_3,&local_118,uVar7,param_4);
    dVar24 = (double)FUN_146bd8cba(local_c8,&local_210);
    dVar25 = (double)FUN_146bd8cba(&local_118,&local_210);
    dVar23 = *param_7;
    uVar22 = SUB84(dVar23,0);
    uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
    if (dVar24 <= dVar25) {
      if (dVar24 < dVar23) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_148294e2c(local_278,param_2,param_3,param_4);
        uVar22 = SUB84(*param_7,0);
        uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      param_5 = uVar7;
      lVar10 = param_9;
      if ((double)CONCAT44(uVar26,uVar22) < dVar25 || (double)CONCAT44(uVar26,uVar22) == dVar25)
      goto LAB_148295348;
    }
    else {
      if (dVar25 < dVar23) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = uVar7;
        FUN_148294e2c(local_278,param_2,param_3,param_4);
        uVar22 = SUB84(*param_7,0);
        uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      lVar10 = param_9;
      if ((double)CONCAT44(uVar26,uVar22) < dVar24 || (double)CONCAT44(uVar26,uVar22) == dVar24)
      goto LAB_148295348;
    }
  }
  else {
    FUN_148295856(param_3,&local_210,param_5,param_4);
    lVar10 = local_278;
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(local_278 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                       + (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar23 = (double)FUN_148295a3c(local_278,param_2,&local_210);
LAB_148295507:
      if (*param_7 <= dVar23) goto LAB_148295348;
    }
    else {
      param_2 = param_2 - 1;
      uVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(local_278 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar24 = (double)FUN_148295a3c(local_278,param_2,&local_210);
      dVar25 = (double)FUN_148295a3c(lVar10,uVar7,&local_210);
      dVar23 = *param_7;
      uVar22 = SUB84(dVar23,0);
      uVar26 = (undefined4)((ulonglong)dVar23 >> 0x20);
      if (dVar24 <= dVar25) {
        if (dVar24 < dVar23) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_148294e2c(local_278,param_2,param_3,param_4);
          uVar22 = SUB84(*param_7,0);
          uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        param_2 = uVar7;
        if ((double)CONCAT44(uVar26,uVar22) < dVar25 || (double)CONCAT44(uVar26,uVar22) == dVar25)
        goto LAB_148295348;
      }
      else {
        if (dVar25 < dVar23) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_148294e2c(local_278,uVar7,param_3,param_4);
          uVar22 = SUB84(*param_7,0);
          uVar26 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar26,uVar22) < dVar24 || (double)CONCAT44(uVar26,uVar22) == dVar24)
        goto LAB_148295348;
      }
    }
    local_288 = param_9;
    lVar10 = local_288;
  }
  local_288 = lVar10;
  local_280 = param_10;
  local_290 = param_8;
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = param_5;
  FUN_148294e2c(local_278,param_2,param_3,param_4);
LAB_148295348:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148295856 FUN_148295856 body=484 status=ok
// SIG undefined FUN_148295856(void)

double * FUN_148295856(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_14ae724e0;
    local_88 = FUN_148295b42;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148295a3c FUN_148295a3c body=260 status=ok
// SIG undefined FUN_148295a3c(void)

void FUN_148295a3c(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148295b42 FUN_148295b42 body=62 status=ok
// SIG undefined FUN_148295b42(void)

undefined8 FUN_148295b42(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 148295baa FUN_148295baa body=29 status=ok
// SIG undefined FUN_148295baa(void)

undefined8 FUN_148295baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148295bc8 FUN_148295bc8 body=750 status=ok
// SIG undefined FUN_148295bc8(void)

int FUN_148295bc8(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar14 < *(int *)(param_1 + 200)) {
    iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar11) {
      do {
        uVar14 = uVar14 + 1;
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8)
                        + (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_6 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_148295ca5:
          lVar8 = (longlong)iVar6;
          puVar4 = *(undefined8 **)(param_1 + 8);
          lVar9 = *(longlong *)puVar4[1];
          lVar12 = (longlong)*(int *)(lVar9 + lVar8 * 0xc);
          puVar1 = (undefined8 *)(*(longlong *)*puVar4 + lVar12 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          local_88 = *(undefined8 *)(*(longlong *)*puVar4 + 0x10 + lVar12 * 0x18);
          lVar12 = (longlong)*(int *)(lVar9 + 4 + lVar8 * 0xc);
          puVar1 = (undefined8 *)(*(longlong *)*puVar4 + lVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          local_70 = *(undefined8 *)(*(longlong *)*puVar4 + 0x10 + lVar12 * 0x18);
          lVar9 = (longlong)*(int *)(lVar9 + 8 + lVar8 * 0xc);
          puVar2 = (undefined4 *)(*(longlong *)*puVar4 + lVar9 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          local_58 = *(undefined8 *)(*(longlong *)*puVar4 + 0x10 + lVar9 * 0x18);
          cVar5 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar5 != '\0') goto LAB_148295d4a;
        }
        else {
          plVar10 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar10 = (longlong *)(param_6 + 0x30);
          }
          local_9c = iVar6;
          uVar7 = (**(code **)(*plVar10 + 8))();
          cVar5 = (*pcVar3)(uVar7,&local_9c);
          if (cVar5 != '\0') goto LAB_148295ca5;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar6 = -1;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar13 < 0) {
      uVar13 = ~uVar13;
      cVar5 = FUN_148295eb8(param_1,uVar13,param_4);
      iVar6 = -1;
      if (cVar5 == '\0') goto LAB_148295d4a;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      cVar5 = FUN_148295eb8(param_1,uVar13 - 1,param_4);
      if (cVar5 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        iVar6 = FUN_148295bc8(param_1,uVar13 - 1,local_d8,param_4);
        if (iVar6 != -1) goto LAB_148295d4a;
      }
      uVar13 = iVar11 - 1;
      cVar5 = FUN_148295eb8(param_1,uVar13,param_4);
      iVar6 = -1;
      if (cVar5 == '\0') goto LAB_148295d4a;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    iVar6 = FUN_148295bc8(param_1,uVar13,local_d8,param_4);
  }
LAB_148295d4a:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148295eb8 FUN_148295eb8 body=191 status=ok
// SIG undefined FUN_148295eb8(void)

bool FUN_148295eb8(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 148295f8c FUN_148295f8c body=2525 status=ok
// SIG undefined FUN_148295f8c(void)

ulonglong FUN_148295f8c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double *pdVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 *puVar15;
  char cVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_208;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  longlong local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  int *local_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int *local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar26 = *(int *)(param_1 + 200);
  local_208 = param_4;
  if (((int)uVar17 < iVar26) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_1f8 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_1f8) {
      local_1fc = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                          (ulonglong)(uVar17 & 0x1ff) * 4);
      local_1d8 = (longlong *)(param_9 + 0x30);
      local_1e8 = param_4 + 4;
      local_1d0 = (longlong *)(param_8 + 0x30);
      local_1e0 = (ulonglong)(uVar17 + 1);
      uVar22 = CONCAT71((uint7)(uint3)((uint)iVar26 >> 8),1);
      iVar26 = 1;
      local_1f0 = param_3;
      local_1c8 = (ulonglong)uVar8;
      do {
        local_1f4 = (uint)uVar22;
        uVar17 = iVar26 + (int)local_1c8;
        iVar28 = *(int *)(*(longlong *)
                           (*(longlong *)(local_1f0 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 4);
        pcVar10 = *(code **)(param_9 + 0x10);
        if (pcVar10 == (code *)0x0) {
LAB_148296151:
          plVar23 = local_1e8;
          puVar15 = local_208;
          lVar19 = (longlong)iVar28;
          puVar11 = *(undefined8 **)(local_1f0 + 8);
          lVar20 = *(longlong *)puVar11[1];
          lVar27 = (longlong)*(int *)(lVar20 + lVar19 * 0xc);
          pdVar1 = (double *)(*(longlong *)*puVar11 + lVar27 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          local_138 = *(int **)(*(longlong *)*puVar11 + 0x10 + lVar27 * 0x18);
          lVar27 = (longlong)*(int *)(lVar20 + 4 + lVar19 * 0xc);
          pdVar1 = (double *)(*(longlong *)*puVar11 + lVar27 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          piVar21 = *(int **)(*(longlong *)*puVar11 + 0x10 + lVar27 * 0x18);
          lVar20 = (longlong)*(int *)(lVar20 + 8 + lVar19 * 0xc);
          piVar2 = (int *)(*(longlong *)*puVar11 + lVar20 * 0x18);
          local_118 = *piVar2;
          iStack_114 = piVar2[1];
          iStack_110 = piVar2[2];
          iStack_10c = piVar2[3];
          local_108 = *(int **)(*(longlong *)*puVar11 + 0x10 + lVar20 * 0x18);
          pcVar10 = (code *)*local_208;
          local_120 = piVar21;
          if (pcVar10 != (code *)0x0) {
            plVar24 = (longlong *)local_208[2];
            if ((longlong *)local_208[2] == (longlong *)0x0) {
              plVar24 = local_1e8;
            }
            uVar18 = (**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,uVar18,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(iStack_15c,local_160);
            uStack_140 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar15;
            plVar24 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar24 = plVar23;
            }
            uVar18 = (**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,uVar18,&local_130);
            local_120 = local_150;
            local_130 = (double)CONCAT44(iStack_15c,local_160);
            uStack_128 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar15;
            plVar24 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar24 = plVar23;
            }
            piVar21 = (int *)(**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,piVar21,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            iStack_114 = iStack_15c;
            iStack_110 = iStack_158;
            iStack_10c = iStack_154;
          }
          plVar23 = local_1d0;
          if (0 < local_1fc) {
            uVar22 = local_1e0 & 0xffffffff;
            iVar28 = local_1fc;
            do {
              iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar22 >> 9) * 8) +
                              (ulonglong)((uint)uVar22 & 0x1ff) * 4);
              pcVar10 = *(code **)(param_8 + 0x10);
              if (pcVar10 == (code *)0x0) {
LAB_14829633d:
                lVar19 = (longlong)iVar9;
                puVar11 = *(undefined8 **)(param_1 + 8);
                lVar20 = *(longlong *)puVar11[1];
                lVar27 = (longlong)*(int *)(lVar20 + lVar19 * 0xc);
                pdVar1 = (double *)(*(longlong *)*puVar11 + lVar27 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                local_e8 = *(double *)(*(longlong *)*puVar11 + 0x10 + lVar27 * 0x18);
                lVar27 = (longlong)*(int *)(lVar20 + 4 + lVar19 * 0xc);
                pdVar1 = (double *)(*(longlong *)*puVar11 + lVar27 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                local_d0 = *(double *)(*(longlong *)*puVar11 + 0x10 + lVar27 * 0x18);
                lVar20 = (longlong)*(int *)(lVar20 + 8 + lVar19 * 0xc);
                puVar3 = (undefined4 *)(*(longlong *)*puVar11 + lVar20 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                local_b8 = *(undefined8 *)(*(longlong *)*puVar11 + 0x10 + lVar20 * 0x18);
                piVar21 = (int *)&local_148;
                cVar16 = (*(code *)*param_7)(param_7[1],piVar21,&local_f8);
                if (cVar16 != '\0') {
                  uVar22 = (ulonglong)local_1f4;
                  goto LAB_14829640d;
                }
              }
              else {
                plVar24 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar24 = plVar23;
                }
                local_160 = iVar9;
                uVar18 = (**(code **)(*plVar24 + 8))();
                piVar21 = &local_160;
                cVar16 = (*pcVar10)(uVar18,piVar21);
                if (cVar16 != '\0') goto LAB_14829633d;
              }
              uVar22 = (ulonglong)((uint)uVar22 + 1);
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          plVar23 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar23 = local_1d8;
          }
          local_160 = iVar28;
          uVar18 = (**(code **)(*plVar23 + 8))();
          piVar21 = &local_160;
          cVar16 = (*pcVar10)(uVar18,piVar21);
          if (cVar16 != '\0') goto LAB_148296151;
        }
        bVar29 = iVar26 != local_1f8;
        uVar22 = CONCAT71((int7)((ulonglong)piVar21 >> 8),iVar26 < local_1f8);
        iVar26 = iVar26 + 1;
      } while (bVar29);
      goto LAB_14829640d;
    }
  }
  else {
    bVar29 = (param_6 & 1) == 0;
    if ((bVar29 || (int)uVar17 < iVar26) &&
        (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar29 && (int)uVar17 >= iVar26)) {
      uVar22 = (ulonglong)((param_2 >> 9) << 3);
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar22);
      lVar27 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar22);
      dVar4 = *(double *)(lVar20 + 0x10 + lVar27);
      dVar5 = *(double *)(lVar19 + 0x10 + lVar27);
      dVar12 = dVar4 - dVar5;
      dVar6 = *(double *)(lVar20 + 8 + lVar27);
      dVar7 = *(double *)(lVar19 + 8 + lVar27);
      dVar13 = dVar6 - dVar7;
      dVar14 = *(double *)(lVar20 + lVar27) - *(double *)(lVar19 + lVar27);
      dVar4 = dVar4 + dVar5;
      dVar6 = dVar6 + dVar7;
      dVar5 = *(double *)(lVar20 + lVar27) + *(double *)(lVar19 + lVar27);
      uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
      if (-1 < (int)uVar17) {
        iVar26 = *(int *)(*(longlong *)
                           (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                         (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        FUN_148295856(param_3,&local_f8,uVar17 - 1,param_4);
        if (((((local_f8 < dVar5) && (dVar14 < local_e0)) && (dStack_f0 < dVar6)) &&
            ((dVar13 < dStack_d8 && (local_e8 < dVar4)))) && (dVar12 < local_d0)) {
          local_180 = *param_7;
          local_228 = &local_180;
          local_178 = param_7[1];
          local_230 = param_6 + 1;
          local_218 = param_9;
          local_220 = param_8;
          uVar22 = (ulonglong)param_2;
          local_238 = uVar17 - 1;
          cVar16 = FUN_148295f8c(param_1,uVar22,param_3,local_208);
          uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
          if (cVar16 != '\0') goto LAB_14829640d;
        }
        param_4 = local_208;
        uVar17 = iVar26 - 1;
        FUN_148295856(param_3,&local_148,uVar17,local_208);
        uVar25 = 0;
        uVar22 = 0;
        if (((dVar5 <= local_148) || (uVar22 = uVar25, local_130 <= dVar14)) ||
           ((dVar6 <= uStack_140 ||
            (((uStack_128 <= dVar13 || (dVar4 <= (double)local_138)) ||
             ((double)local_120 <= dVar12)))))) goto LAB_14829640d;
        local_190 = *param_7;
        local_228 = &local_190;
        local_188 = param_7[1];
        local_238 = uVar17;
        goto LAB_148296669;
      }
      FUN_148295856(param_3,&local_f8,~uVar17,param_4);
      if ((((local_f8 < dVar5) && (dVar14 < local_e0)) &&
          ((dStack_f0 < dVar6 && ((dVar13 < dStack_d8 && (local_e8 < dVar4)))))) &&
         (dVar12 < local_d0)) {
        uVar18 = *param_7;
        local_228 = local_170;
        goto LAB_14829662c;
      }
    }
    else {
      FUN_148295856(param_3,&local_f8,param_5,param_4);
      param_2 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                         (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)param_2 < 0) {
        param_2 = ~param_2;
        cVar16 = FUN_148295eb8(param_1,param_2,&local_f8);
        if (cVar16 != '\0') {
          local_1a0 = *param_7;
          local_228 = &local_1a0;
          local_198 = param_7[1];
          local_238 = param_5;
LAB_148296669:
          local_218 = param_9;
          local_220 = param_8;
          local_230 = param_6 + 1;
          uVar17 = FUN_148295f8c(param_1,param_2,param_3,param_4);
          uVar22 = (ulonglong)uVar17;
          goto LAB_14829640d;
        }
      }
      else {
        iVar26 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
        cVar16 = FUN_148295eb8(param_1,param_2 - 1,&local_f8);
        if (cVar16 != '\0') {
          local_1b0 = *param_7;
          local_228 = &local_1b0;
          local_1a8 = param_7[1];
          local_230 = param_6 + 1;
          local_218 = param_9;
          local_220 = param_8;
          local_238 = param_5;
          uVar22 = (ulonglong)(param_2 - 1);
          cVar16 = FUN_148295f8c(param_1,uVar22,param_3,param_4);
          uVar22 = CONCAT71((int7)(uVar22 >> 8),1);
          if (cVar16 != '\0') goto LAB_14829640d;
        }
        param_2 = iVar26 - 1;
        cVar16 = FUN_148295eb8(param_1,param_2,&local_f8);
        if (cVar16 != '\0') {
          uVar18 = *param_7;
          local_228 = local_1c0;
LAB_14829662c:
          *local_228 = uVar18;
          local_228[1] = param_7[1];
          local_238 = param_5;
          goto LAB_148296669;
        }
      }
    }
  }
  uVar22 = 0;
LAB_14829640d:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffff01;
}



// FUNCTION 14829697e FUN_14829697e body=62 status=ok
// SIG undefined FUN_14829697e(void)

undefined8 FUN_14829697e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 1482969e6 FUN_1482969e6 body=29 status=ok
// SIG undefined FUN_1482969e6(void)

undefined8 FUN_1482969e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148296a04 FUN_148296a04 body=2566 status=ok
// SIG undefined FUN_148296a04(void)

void FUN_148296a04(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  bool bVar29;
  undefined1 auStack_398 [32];
  uint local_378;
  int local_370;
  undefined8 local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong local_350;
  int local_344;
  int local_340;
  int local_33c;
  undefined8 *local_338;
  longlong local_330;
  longlong *local_328;
  ulonglong local_320;
  longlong *local_318;
  ulonglong local_310;
  ulonglong local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  double local_248;
  double local_238 [4];
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar28 = *(int *)(param_1 + 200);
  if (((int)uVar15 < iVar28) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_33c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_338 = param_4;
    if (0 < local_33c) {
      local_340 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                          (ulonglong)(uVar15 & 0x1ff) * 4);
      local_318 = (longlong *)(param_10 + 0x30);
      local_328 = param_4 + 4;
      local_320 = (ulonglong)(uVar15 + 1);
      uVar16 = 1;
      local_330 = param_3;
      local_310 = (ulonglong)uVar6;
      do {
        uVar15 = (int)uVar16 + (int)local_310;
        local_344 = *(int *)(*(longlong *)
                              (*(longlong *)(local_330 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 4);
        pcVar8 = *(code **)(param_10 + 0x10);
        local_308 = uVar16;
        if (pcVar8 == (code *)0x0) {
LAB_148296c0d:
          plVar21 = local_328;
          puVar24 = local_338;
          lVar18 = (longlong)local_344;
          puVar22 = *(undefined8 **)(local_330 + 8);
          lVar19 = *(longlong *)puVar22[1];
          lVar27 = (longlong)*(int *)(lVar19 + lVar18 * 0xc);
          pdVar23 = (double *)(*(longlong *)*puVar22 + lVar27 * 0x18);
          local_278 = *(double *)(*(longlong *)*puVar22 + 0x10 + lVar27 * 0x18);
          local_288 = *pdVar23;
          uStack_280 = pdVar23[1];
          lVar27 = (longlong)*(int *)(lVar19 + 4 + lVar18 * 0xc);
          pdVar23 = (double *)(*(longlong *)*puVar22 + lVar27 * 0x18);
          local_260 = *(double *)(*(longlong *)*puVar22 + 0x10 + lVar27 * 0x18);
          local_270 = *pdVar23;
          uStack_268 = pdVar23[1];
          lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar18 * 0xc);
          piVar1 = (int *)(*(longlong *)*puVar22 + lVar19 * 0x18);
          local_248 = *(double *)(*(longlong *)*puVar22 + 0x10 + lVar19 * 0x18);
          local_258 = *piVar1;
          iStack_254 = piVar1[1];
          iStack_250 = piVar1[2];
          iStack_24c = piVar1[3];
          pcVar8 = (code *)*local_338;
          if (pcVar8 != (code *)0x0) {
            plVar20 = (longlong *)local_338[2];
            if ((longlong *)local_338[2] == (longlong *)0x0) {
              plVar20 = local_328;
            }
            uVar17 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar17,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar24;
            plVar20 = (longlong *)puVar24[2];
            if ((longlong *)puVar24[2] == (longlong *)0x0) {
              plVar20 = plVar21;
            }
            uVar17 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar17,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar24;
            plVar20 = (longlong *)puVar24[2];
            if ((longlong *)puVar24[2] == (longlong *)0x0) {
              plVar20 = plVar21;
            }
            uVar17 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar17,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            iStack_254 = iStack_29c;
            iStack_250 = iStack_298;
            iStack_24c = iStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar22 = &local_288;
          puVar24 = local_1e8;
          for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar24 = *puVar22;
            puVar22 = puVar22 + 1;
            puVar24 = puVar24 + 1;
          }
          if (0 < local_340) {
            uVar16 = local_320 & 0xffffffff;
            iVar28 = local_340;
            do {
              iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar16 >> 9) * 8) +
                              (ulonglong)((uint)uVar16 & 0x1ff) * 4);
              pcVar8 = *(code **)(param_9 + 0x10);
              if (pcVar8 == (code *)0x0) {
LAB_148296e1d:
                lVar27 = (longlong)iVar7;
                lVar19 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
                lVar26 = (longlong)*(int *)(lVar19 + lVar27 * 0xc);
                lVar18 = *(longlong *)**(undefined8 **)(param_1 + 8);
                local_238[2] = *(double *)(lVar18 + 0x10 + lVar26 * 0x18);
                pdVar23 = (double *)(lVar18 + lVar26 * 0x18);
                local_238[0] = *pdVar23;
                local_238[1] = pdVar23[1];
                lVar26 = (longlong)*(int *)(lVar19 + 4 + lVar27 * 0xc);
                pdVar23 = (double *)(lVar18 + lVar26 * 0x18);
                local_238[3] = *pdVar23;
                dStack_218 = pdVar23[1];
                local_210 = *(double *)(lVar18 + 0x10 + lVar26 * 0x18);
                lVar19 = (longlong)*(int *)(lVar19 + 8 + lVar27 * 0xc);
                puVar2 = (undefined4 *)(lVar18 + lVar19 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_1f8 = *(undefined8 *)(lVar18 + 0x10 + lVar19 * 0x18);
                local_14c = local_14c & 0xffffffff00000000;
                pdVar23 = local_238;
                pdVar25 = local_1a0;
                for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
                  *pdVar25 = *pdVar23;
                  pdVar23 = pdVar23 + 1;
                  pdVar25 = pdVar25 + 1;
                }
                cVar14 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar14 != '\0') {
                  FUN_14829743a(local_1e8,iVar7,local_344,param_7);
                }
              }
              else {
                plVar21 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar21 = (longlong *)(param_9 + 0x30);
                }
                local_2a0 = iVar7;
                uVar17 = (**(code **)(*plVar21 + 8))();
                cVar14 = (*pcVar8)(uVar17,&local_2a0);
                if (cVar14 != '\0') goto LAB_148296e1d;
              }
              uVar16 = (ulonglong)((uint)uVar16 + 1);
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          plVar21 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar21 = local_318;
          }
          local_2a0 = local_344;
          uVar17 = (**(code **)(*plVar21 + 8))();
          cVar14 = (*pcVar8)(uVar17,&local_2a0);
          if (cVar14 != '\0') goto LAB_148296c0d;
        }
        uVar16 = (ulonglong)((int)local_308 + 1);
      } while ((int)local_308 != local_33c);
    }
    goto LAB_148296f20;
  }
  bVar29 = (param_6 & 1) == 0;
  if ((bVar29 || (int)uVar15 < iVar28) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar29 && (int)uVar15 >= iVar28)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar16 = (ulonglong)((param_2 >> 9) << 3);
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar16);
    lVar27 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar16);
    dVar12 = *(double *)(lVar18 + lVar27) + dVar3;
    dVar10 = *(double *)(lVar18 + 8 + lVar27) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar18 + 0x10 + lVar27);
    dVar4 = *(double *)(lVar19 + 0x10 + lVar27);
    dVar9 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar19 + 8 + lVar27);
    dVar11 = dVar5 - dVar10;
    dVar13 = *(double *)(lVar19 + lVar27) - dVar12;
    dVar3 = dVar3 + dVar4;
    dVar10 = dVar10 + dVar5;
    dVar12 = dVar12 + *(double *)(lVar19 + lVar27);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_148295856(param_3,local_238,param_5,param_4);
      if ((((dVar12 <= local_238[0]) || (local_238[3] <= dVar13)) ||
          ((dVar10 <= local_238[1] || ((dStack_218 <= dVar11 || (dVar3 <= local_238[2])))))) ||
         (local_210 <= dVar9)) goto LAB_148296f20;
      uVar17 = *param_8;
      local_360 = local_2b0;
    }
    else {
      FUN_148295856(param_3,local_238,param_5 - 1,param_4);
      if (((((local_238[0] < dVar12) && (dVar13 < local_238[3])) && (local_238[1] < dVar10)) &&
          ((dVar11 < dStack_218 && (local_238[2] < dVar3)))) && (dVar9 < local_210)) {
        local_2c0 = *param_8;
        local_360 = &local_2c0;
        local_2b8 = param_8[1];
        local_370 = param_6 + 1;
        local_350 = param_10;
        local_358 = param_9;
        local_368 = param_7;
        local_378 = param_5 - 1;
        FUN_148296a04(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_148295856(param_3,&local_288,param_5,param_4);
      if (((dVar12 <= local_288) || (local_270 <= dVar13)) ||
         ((dVar10 <= uStack_280 ||
          (((uStack_268 <= dVar11 || (dVar3 <= local_278)) || (local_260 <= dVar9))))))
      goto LAB_148296f20;
      uVar17 = *param_8;
      local_360 = local_2d0;
    }
  }
  else {
    FUN_148295856(param_3,local_238,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                       + (ulonglong)(uVar15 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar14 = FUN_148295eb8(param_1,param_2,local_238);
      if (cVar14 == '\0') goto LAB_148296f20;
      uVar17 = *param_8;
      local_360 = local_2e0;
    }
    else {
      cVar14 = FUN_148295eb8(param_1,param_2 - 1,local_238);
      if (cVar14 != '\0') {
        local_2f0 = *param_8;
        local_360 = &local_2f0;
        local_2e8 = param_8[1];
        local_370 = param_6 + 1;
        local_350 = param_10;
        local_358 = param_9;
        local_368 = param_7;
        local_378 = param_5;
        FUN_148296a04(param_1,param_2 - 1,param_3,param_4);
      }
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                        (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
      cVar14 = FUN_148295eb8(param_1,param_2,local_238);
      if (cVar14 == '\0') goto LAB_148296f20;
      uVar17 = *param_8;
      local_360 = local_300;
    }
  }
  *local_360 = uVar17;
  local_360[1] = param_8[1];
  local_370 = param_6 + 1;
  local_350 = param_10;
  local_358 = param_9;
  local_368 = param_7;
  local_378 = param_5;
  FUN_148296a04(param_1,param_2,param_3,param_4);
LAB_148296f20:
  if ((local_b0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829740c FUN_14829740c body=45 status=ok
// SIG undefined FUN_14829740c(void)

bool FUN_14829740c(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 14829743a FUN_14829743a body=1201 status=ok
// SIG undefined FUN_14829743a(void)

void FUN_14829743a(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_148297577;
    }
    if (iVar4 < 3) goto LAB_148297577;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_148297577;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_148297577;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_148297577:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482978ec FUN_1482978ec body=362 status=ok
// SIG undefined FUN_1482978ec(void)

ulonglong FUN_1482978ec(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_148297a86(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_148297a2d;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_148297d72(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_148297a2d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 148297a58 FUN_148297a58 body=45 status=ok
// SIG undefined FUN_148297a58(void)

bool FUN_148297a58(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 148297a86 FUN_148297a86 body=747 status=ok
// SIG undefined FUN_148297a86(void)

ulonglong FUN_148297a86(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined1 auStack_268 [36];
  int local_244;
  longlong *local_240;
  int local_238 [6];
  int local_220 [18];
  undefined8 local_1d8 [9];
  undefined8 local_190;
  undefined1 local_188;
  ulonglong local_184;
  undefined4 local_17c;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  pcVar3 = *(code **)(param_8 + 0x10);
  if (pcVar3 == (code *)0x0) {
LAB_148297af8:
    lVar9 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
    lVar7 = (longlong)param_2;
    local_238[3] = *(int *)(lVar9 + lVar7 * 0xc);
    lVar8 = *(longlong *)**(undefined8 **)(param_1 + 8);
    local_98[2] = *(undefined8 *)(lVar8 + 0x10 + (longlong)local_238[3] * 0x18);
    puVar11 = (undefined8 *)(lVar8 + (longlong)local_238[3] * 0x18);
    local_98[0] = *puVar11;
    local_98[1] = puVar11[1];
    local_238[4] = *(int *)(lVar9 + 4 + lVar7 * 0xc);
    local_70 = *(undefined8 *)(lVar8 + 0x10 + (longlong)local_238[4] * 0x18);
    puVar11 = (undefined8 *)(lVar8 + (longlong)local_238[4] * 0x18);
    local_98[3] = *puVar11;
    uStack_78 = puVar11[1];
    local_238[5] = *(int *)(lVar9 + 8 + lVar7 * 0xc);
    puVar1 = (undefined4 *)(lVar8 + (longlong)local_238[5] * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_58 = *(undefined8 *)(lVar8 + 0x10 + (longlong)local_238[5] * 0x18);
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar11 = local_98;
    piVar13 = local_220;
    for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined8 *)piVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      piVar13 = piVar13 + 2;
    }
    if ((int)param_3 < (int)param_4) {
      local_240 = (longlong *)(param_8 + 0x30);
      uVar12 = 0;
      local_244 = param_2;
      do {
        iVar2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_8 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_148297c20:
          lVar8 = (longlong)iVar2;
          lVar9 = *(longlong *)(*(undefined8 **)(param_1 + 8))[1];
          local_238[2] = *(int *)(lVar9 + 8 + lVar8 * 0xc);
          local_238[1] = *(int *)(lVar9 + 4 + lVar8 * 0xc);
          local_238[0] = *(int *)(lVar9 + lVar8 * 0xc);
          if (param_6 != '\0') {
            lVar9 = 0;
            do {
              lVar8 = 0;
              do {
                if (local_238[lVar9 + 3] == local_238[lVar8]) goto LAB_148297d2b;
                lVar8 = lVar8 + 1;
              } while (lVar8 != 3);
              lVar9 = lVar9 + 1;
            } while (lVar9 != 3);
          }
          lVar9 = *(longlong *)**(undefined8 **)(param_1 + 8);
          local_e8[2] = *(undefined8 *)(lVar9 + 0x10 + (longlong)local_238[0] * 0x18);
          puVar11 = (undefined8 *)(lVar9 + (longlong)local_238[0] * 0x18);
          local_e8[0] = *puVar11;
          local_e8[1] = puVar11[1];
          local_c0 = *(undefined8 *)(lVar9 + 0x10 + (longlong)local_238[1] * 0x18);
          puVar11 = (undefined8 *)(lVar9 + (longlong)local_238[1] * 0x18);
          local_e8[3] = *puVar11;
          uStack_c8 = puVar11[1];
          local_a8 = *(undefined8 *)(lVar9 + 0x10 + (longlong)local_238[2] * 0x18);
          puVar1 = (undefined4 *)(lVar9 + (longlong)local_238[2] * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar11 = local_e8;
          puVar14 = local_1d8;
          for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar5 = (*(code *)*param_7)(param_7[1],local_220);
          uVar12 = (ulonglong)uVar5;
          if ((char)uVar5 != '\0') {
            if (param_5 == 0) {
              uVar12 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
              break;
            }
            FUN_14829743a(local_220,local_244,iVar2,param_5);
          }
        }
        else {
          plVar10 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar10 = local_240;
          }
          local_238[0] = iVar2;
          uVar6 = (**(code **)(*plVar10 + 8))();
          cVar4 = (*pcVar3)(uVar6,local_238);
          if (cVar4 != '\0') goto LAB_148297c20;
        }
LAB_148297d2b:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_148297d39;
    }
  }
  else {
    plVar10 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar6 = (**(code **)(*plVar10 + 8))();
    cVar4 = (*pcVar3)(uVar6,local_220);
    if (cVar4 != '\0') goto LAB_148297af8;
  }
  uVar12 = 0;
LAB_148297d39:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffffffffff01;
}



// FUNCTION 148297d72 FUN_148297d72 body=1887 status=ok
// SIG undefined FUN_148297d72(void)

ulonglong FUN_148297d72(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint7 uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar15;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < (int)param_2) {
    uVar15 = (ulonglong)param_2;
    uVar12 = param_2 >> 9;
    uVar13 = param_2 & 0x1ff;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar12 * 8) +
                      (ulonglong)uVar13 * 4);
    if ((int)param_3 < 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar19 = *(int *)(param_1 + 200);
    if ((iVar19 <= (int)uVar10) || (iVar19 <= (int)uVar21)) {
      if (iVar19 <= (int)uVar10) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar19 <= (int)uVar21)) {
          if (!bVar22 || iVar19 > (int)uVar21) {
            uVar15 = (ulonglong)param_3;
            uVar21 = uVar10;
          }
          uVar12 = (uint)(uVar15 >> 9);
          uVar13 = (uint)uVar15 & 0x1ff;
          goto LAB_148297f6f;
        }
        uVar12 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar16 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar12 < 0) {
          local_100 = *param_7;
          local_148 = &local_100;
          local_f8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_148297d72(param_1,~uVar12,0xffffffff,param_4);
joined_r0x00014829845b:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_148297f07;
        }
        else {
          iVar20 = uVar12 - 1;
          iVar19 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                           (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_148 = &local_110;
          local_108 = param_7[1];
          iVar18 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          uVar9 = FUN_148297d72(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_148297f07;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_148297d72(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_148297f07;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar10 >> 9) * 8);
          lVar6 = (ulonglong)((uVar10 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar10 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_148295eb8(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_148297d72(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x00014829845b;
          }
        }
        goto LAB_148298054;
      }
LAB_148297f6f:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar12 << 3));
      lVar6 = (ulonglong)(uVar13 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar12 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 >> 9) * 8)
                        + (ulonglong)(uVar21 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        cVar7 = FUN_148295eb8(param_1,~uVar10,&local_c0);
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else {
          local_d0 = *param_7;
          local_148 = &local_d0;
          local_c8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_148297d72(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x00014829825d:
            if (bVar14 != 0) goto LAB_1482981b2;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_148295eb8(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_148297d72(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_1482981d7;
LAB_1482981b2:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_148297f07;
        }
        uVar17 = 0;
LAB_1482981d7:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_148295eb8(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_148297d72(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x00014829825d;
          }
        }
      }
LAB_148298054:
      uVar15 = uVar17;
      goto LAB_148297f07;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4), 0 < iVar19)) {
      uVar12 = uVar10 + 1;
      uVar15 = 0;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_140 = param_8;
        local_148 = &local_90;
        local_150 = CONCAT31(local_150._1_3_,param_5);
        local_158 = param_4;
        uVar9 = FUN_148297a86(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar12 >> 9) * 8) +
                                       (ulonglong)(uVar12 & 0x1ff) * 4),uVar21 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0xb8) +
                                        (ulonglong)(uVar21 >> 9) * 8) +
                                      (ulonglong)(uVar21 & 0x1ff) * 4) + uVar21 + 1);
        bVar14 = (byte)uVar9 | (byte)uVar15;
        uVar15 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar14);
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_1482981b2;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_148297f07;
    }
  }
  uVar15 = 0;
LAB_148297f07:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 1482984d2 FUN_1482984d2 body=162 status=ok
// SIG undefined FUN_1482984d2(void)

void FUN_1482984d2(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148298575 FUN_148298575 body=231 status=ok
// SIG undefined FUN_148298575(void)

undefined8 * FUN_148298575(undefined8 *param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_48 [31];
  byte abStack_29 [25];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_2 < 0) {
    lVar2 = 0x14;
    uVar4 = -param_2;
    do {
      lVar3 = lVar2;
      abStack_29[lVar3 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      lVar2 = lVar3 + -1;
      bVar1 = 9 < uVar4;
      uVar4 = uVar4 / 10;
    } while (bVar1);
    abStack_29[lVar3] = 0x2d;
  }
  else {
    lVar2 = 0x15;
    do {
      abStack_29[lVar2] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
      lVar2 = lVar2 + -1;
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar2 == 0x15) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_14829865e(param_1,abStack_29 + lVar2 + 1,0x15 - lVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14829865e FUN_14829865e body=179 status=ok
// SIG undefined FUN_14829865e(void)

void FUN_14829865e(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *_Dst;
  ulonglong uVar2;
  
  if (-1 < (longlong)param_3) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,param_3);
      _Dst = param_1;
    }
    else {
      param_1[3] = 0xf;
      uVar1 = param_3 | 0xf;
      uVar2 = 0x16;
      if (0x16 < uVar1) {
        uVar2 = uVar1;
      }
      if (uVar1 < 0xfff) {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2 + 1,0x10);
      }
      else {
        _Dst = (undefined8 *)FUN_140c1ca1d();
      }
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3);
    }
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 148298712 FUN_148298712 body=53 status=ok
// SIG undefined FUN_148298712(void)

void FUN_148298712(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_148298712(param_1[2]);
    plVar2 = (longlong *)*param_1;
    FUN_1400020a8(param_1);
    param_1 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 148298748 FUN_148298748 body=105 status=ok
// SIG undefined FUN_148298748(void)

void FUN_148298748(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)param_1[1];
  uVar3 = (longlong)_Dst - lVar1 >> 2;
  lVar2 = param_2 - uVar3;
  if (param_2 < uVar3) {
    param_1[1] = lVar1 + param_2 * 4;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2) {
      FUN_1482987b2(param_1);
      return;
    }
    memset(_Dst,0,lVar2 * 4);
    param_1[1] = (longlong)((longlong)_Dst + lVar2 * 4);
  }
  return;
}



// FUNCTION 1482987b2 FUN_1482987b2 body=189 status=ok
// SIG undefined FUN_1482987b2(void)

void FUN_1482987b2(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 >> 0x3e == 0) {
    uVar3 = param_1[1] - *param_1;
    uVar1 = param_1[2] - *param_1 >> 2;
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x3fffffffffffffff - (uVar1 >> 1) < uVar1) {
      uVar2 = 0x3fffffffffffffff;
    }
    _Dst = (void *)FUN_148276ca6(param_1);
    memset((void *)(uVar3 + (longlong)_Dst),0,(param_2 - (uVar3 >> 2)) * 4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14827838a(param_1,_Dst,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_148276c94();
}



// FUNCTION 148298870 FUN_148298870 body=82 status=ok
// SIG undefined FUN_148298870(void)

void FUN_148298870(undefined8 *param_1,ulonglong param_2)

{
  void *pvVar1;
  void *_Dst;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_148276c94();
    }
    _Dst = (void *)FUN_148276ca6();
    *param_1 = _Dst;
    pvVar1 = (void *)((longlong)_Dst + param_2 * 4);
    param_1[2] = pvVar1;
    memset(_Dst,0,param_2 << 2);
    param_1[1] = pvVar1;
  }
  return;
}



// FUNCTION 1482988c4 FUN_1482988c4 body=178 status=ok
// SIG undefined FUN_1482988c4(void)

void FUN_1482988c4(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  size_t _Size;
  void *pvVar1;
  longlong lVar2;
  
  _Dst = (void *)*param_1;
  if ((ulonglong)(param_1[2] - (longlong)_Dst >> 2) < param_3) {
    FUN_148298976(param_1,param_3);
    pvVar1 = (void *)*param_1;
    memmove(pvVar1,param_2,param_3 * 4);
    pvVar1 = (void *)((longlong)pvVar1 + param_3 * 4);
  }
  else {
    _Size = param_1[1] - (longlong)_Dst;
    lVar2 = param_3 - ((longlong)_Size >> 2);
    if (param_3 < (ulonglong)((longlong)_Size >> 2) || lVar2 == 0) {
      pvVar1 = (void *)((longlong)_Dst + param_3 * 4);
      memmove(_Dst,param_2,param_3 << 2);
    }
    else {
      memmove(_Dst,param_2,_Size);
      pvVar1 = (void *)param_1[1];
      memmove(pvVar1,(void *)((longlong)param_2 + _Size),lVar2 * 4);
      pvVar1 = (void *)((longlong)pvVar1 + lVar2 * 4);
    }
  }
  param_1[1] = pvVar1;
  return;
}



// FUNCTION 148298976 FUN_148298976 body=181 status=ok
// SIG undefined FUN_148298976(void)

void FUN_148298976(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_148276c94();
  }
  lVar2 = *param_1;
  lVar1 = param_1[2];
  if (lVar2 != 0) {
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(lVar1 - lVar2)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar3))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar5 = lVar1 - lVar2 >> 2;
  uVar4 = (uVar5 >> 1) + uVar5;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x3fffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar4 = 0x3fffffffffffffff;
  }
  lVar2 = FUN_148276ca6(param_1,uVar4);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar4 * 4;
  return;
}



// FUNCTION 148298a2c FUN_148298a2c body=102 status=ok
// SIG undefined FUN_148298a2c(void)

void FUN_148298a2c(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_1 + (param_2 & 0xffffffff) * 8);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(*plVar1,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(plVar1,0);
    }
    else {
      (*DAT_14cb46730)();
    }
    *(undefined8 *)(*param_1 + (param_2 & 0xffffffff) * 8) = 0;
  }
  return;
}



// FUNCTION 148298a92 FUN_148298a92 body=127 status=ok
// SIG undefined FUN_148298a92(void)

void FUN_148298a92(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148298ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000148298b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 148298b12 FUN_148298b12 body=363 status=ok
// SIG undefined FUN_148298b12(void)

void FUN_148298b12(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x3c);
  if (uVar1 != 0) {
    lVar4 = param_1[6];
    uVar3 = 0;
    do {
      if (*(int *)(lVar4 + 0xc + uVar3 * 0x18) != 0) {
        plVar2 = (longlong *)(lVar4 + uVar3 * 0x18);
        uVar5 = 0;
        do {
          FUN_148298c7e(*(undefined8 *)(*plVar2 + uVar5 * 8));
          lVar4 = *(longlong *)(*(longlong *)(param_1[6] + uVar3 * 0x18) + uVar5 * 8);
          if (lVar4 != 0) {
            if (DAT_14cb46730 == (code *)0x0) {
              (*DAT_14cb46728)(lVar4,0);
            }
            else {
              (*DAT_14cb46730)();
            }
          }
          uVar5 = uVar5 + 1;
          lVar4 = param_1[6];
          plVar2 = (longlong *)(lVar4 + uVar3 * 0x18);
        } while (uVar5 < *(uint *)((longlong)plVar2 + 0xc));
        uVar1 = *(uint *)((longlong)param_1 + 0x3c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
    if (uVar1 != 0) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        if (*(longlong *)(param_1[6] + lVar4) != 0) {
          if (DAT_14cb46730 == (code *)0x0) {
            (*DAT_14cb46728)(*(longlong *)(param_1[6] + lVar4),0);
          }
          else {
            (*DAT_14cb46730)();
          }
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar3 < *(uint *)((longlong)param_1 + 0x3c));
    }
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      FUN_148298e30(param_1[3] + lVar4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x48;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0x24));
  }
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 == 0) {
    return;
  }
  if (DAT_14cb46730 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148298c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148298c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46730)();
  return;
}



// FUNCTION 148298c7e FUN_148298c7e body=169 status=ok
// SIG undefined FUN_148298c7e(void)

void FUN_148298c7e(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar2 = 0;
    do {
      FUN_148298d28(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar2 * 8));
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar2 * 8);
      if (lVar1 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar1,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x44));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  if (DAT_14cb46730 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148298d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148298d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46730)();
  return;
}



// FUNCTION 148298d28 FUN_148298d28 body=263 status=ok
// SIG undefined FUN_148298d28(void)

void FUN_148298d28(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14828bf8c();
    if (*(longlong *)(param_1 + 0x28) != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(*(longlong *)(param_1 + 0x28),0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xa0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x88),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x70),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x58),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148298db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000148298df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x40),0);
    return;
  }
  return;
}



// FUNCTION 148298e30 FUN_148298e30 body=126 status=ok
// SIG undefined FUN_148298e30(void)

void FUN_148298e30(longlong *param_1)

{
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148298e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000148298eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 148298eae FUN_148298eae body=107 status=ok
// SIG undefined FUN_148298eae(void)

void FUN_148298eae(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    auVar6._4_12_ = in_XMM0._4_12_;
    auVar6._0_4_ = ((float)*(uint *)(param_1 + 0x18) / (float)*(uint *)(param_1 + 0x1c)) * 100.0;
    auVar6 = roundss(auVar6,auVar6,10);
    uVar4 = (uint)(longlong)auVar6._0_4_;
    if (*(uint *)(param_1 + 0x20) != uVar4) {
      uVar3 = *(uint *)(param_1 + 0x20);
      do {
        if (uVar4 <= uVar3) break;
        LOCK();
        uVar1 = *(uint *)(param_1 + 0x20);
        bVar5 = uVar3 == uVar1;
        if (bVar5) {
          *(uint *)(param_1 + 0x20) = uVar4;
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        UNLOCK();
      } while (!bVar5);
      cVar2 = (**(code **)(param_1 + 8))
                        (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20),
                         *(undefined8 *)(param_1 + 0x10));
      if (cVar2 == '\0') {
        LOCK();
        *param_1 = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 148298f1a FUN_148298f1a body=133 status=ok
// SIG undefined FUN_148298f1a(void)

void FUN_148298f1a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (*param_1 == 0) goto LAB_148298f69;
    if (DAT_14cb46730 != (code *)0x0) goto LAB_148298f62;
    lVar1 = 0;
    (*DAT_14cb46728)(*param_1,0);
  }
  else {
    iVar2 = (int)param_1[1] * param_2;
    if (iVar2 != 0 || *param_1 != 0) {
      if (DAT_14cb46730 == (code *)0x0 || iVar2 != 0) {
        lVar1 = (*DAT_14cb46728)();
        goto LAB_148298f66;
      }
LAB_148298f62:
      (*DAT_14cb46730)();
    }
    lVar1 = 0;
  }
LAB_148298f66:
  *param_1 = lVar1;
LAB_148298f69:
  *(int *)(param_1 + 2) = param_2;
  return;
}



// FUNCTION 148298fa0 FUN_148298fa0 body=108 status=ok
// SIG undefined FUN_148298fa0(void)

void FUN_148298fa0(longlong *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  if (*(uint *)(param_1 + 2) < uVar1) {
    uVar2 = uVar1 >> 2;
    if (*(uint *)(param_1 + 2) == 0) {
      uVar2 = 0;
    }
    FUN_148298f1a(param_1,uVar2 + uVar1);
  }
  if (param_2 != (void *)0x0 && *param_1 != 0) {
    memcpy((void *)(*param_1 +
                   (ulonglong)(*(uint *)(param_1 + 1) * (*(int *)((longlong)param_1 + 0xc) + -1))),
           param_2,(ulonglong)*(uint *)(param_1 + 1));
    return;
  }
  return;
}



// FUNCTION 14829900c FUN_14829900c body=404 status=ok
// SIG undefined FUN_14829900c(void)

float * FUN_14829900c(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1);
  fVar4 = ABS(fVar3);
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  if (fVar4 * 0.001 < ABS(fVar3 + -1.0)) {
    FUN_14678752e("\rASSERT: %s %s %d\n","isNormalized(normal)",
                  ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                  ,0x507);
    fVar5 = *param_2;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
  }
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  if (ABS(fVar5) < fVar4) {
    fVar8 = 0.0;
    fVar6 = 0.0;
    fVar7 = 1.0;
    if (ABS(fVar5) < fVar3) goto LAB_1482990d8;
  }
  fVar6 = 1.0;
  fVar8 = (float)(~-(uint)(fVar4 < fVar3) & 0x3f800000);
  fVar7 = 0.0;
  if (fVar3 <= fVar4) {
    fVar6 = 0.0;
  }
LAB_1482990d8:
  fVar3 = fVar2 * fVar8 + fVar5 * fVar7 + fVar1 * fVar6;
  fVar7 = fVar7 - fVar3 * fVar5;
  fVar6 = fVar6 - fVar1 * fVar3;
  fVar8 = fVar8 - fVar2 * fVar3;
  fVar5 = 1.0 / SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  *param_1 = fVar5 * fVar7;
  param_1[1] = fVar6 * fVar5;
  param_1[2] = fVar8 * fVar5;
  return param_1;
}



// FUNCTION 1482991a0 FUN_1482991a0 body=96 status=ok
// SIG undefined FUN_1482991a0(void)

void FUN_1482991a0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_148299200(param_1);
  }
  uVar1 = (ulonglong)(*(int *)(param_1 + 8) - 1U & *param_2 * 0x8000 + param_2[1]);
  FUN_148298fa0(param_1 + 0x18,param_2);
  FUN_148298fa0(param_1 + 0x30,uVar1 * 4 + *(longlong *)(param_1 + 0x10));
  *(int *)(*(longlong *)(param_1 + 0x10) + uVar1 * 4) = *(int *)(param_1 + 0x3c) + -1;
  return;
}



// FUNCTION 148299200 FUN_148299200 body=230 status=ok
// SIG undefined FUN_148299200(void)

void FUN_148299200(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4) - 1;
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = (uint)(longlong)((double)*(uint *)(param_1 + 4) * 1.3);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 - 1;
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar3 = (*DAT_14cb46728)(0,(ulonglong)uVar2 << 2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 0x28) < uVar1) {
    FUN_148298f1a(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (*(uint *)(param_1 + 0x40) < uVar1) {
    FUN_148298f1a(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 1482992e6 FUN_1482992e6 body=1034 status=ok
// SIG undefined FUN_1482992e6(void)

void FUN_1482992e6(float *param_1,ulonglong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  uint local_c8;
  float local_c4;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar4 = param_1[0x19];
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0xc;
  local_80 = 0;
  local_78 = 0;
  local_70 = 4;
  local_68 = 0;
  local_a4 = fVar4;
  if ((ulonglong)(uint)fVar4 != 0) {
    lVar14 = 0;
    do {
      param_2 = *(longlong *)(param_1 + 0x16) + lVar14;
      FUN_148299c04(&local_a8,param_2);
      lVar14 = lVar14 + 0xc;
    } while ((ulonglong)(uint)fVar4 * 0xc != lVar14);
  }
  local_c0 = (undefined4 *)0x0;
  local_b8 = 4;
  local_b0 = 0;
  pfVar1 = param_1 + 0x28;
  param_1[0x2b] = fVar4;
  if ((uint)param_1[0x2c] < (uint)fVar4) {
    param_2 = (ulonglong)(uint)fVar4;
    FUN_148298f1a(pfVar1,param_2);
  }
  if ((*(void **)pfVar1 != (void *)0x0) && (param_1[0x2b] != 0.0)) {
    param_2 = CONCAT71((int7)(param_2 >> 8),0xff);
    memset(*(void **)pfVar1,(int)param_2,(ulonglong)(uint)((int)param_1[0x2b] * (int)param_1[0x2a]))
    ;
  }
  pfVar2 = param_1 + 0x2e;
  param_1[0x31] = fVar4;
  if ((uint)param_1[0x32] < (uint)fVar4) {
    param_2 = (ulonglong)(uint)fVar4;
    FUN_148298f1a(pfVar2,param_2);
  }
  if ((*(void **)pfVar2 != (void *)0x0) && (param_1[0x31] != 0.0)) {
    memset(*(void **)pfVar2,(int)CONCAT71((int7)(param_2 >> 8),0xff),
           (ulonglong)(uint)((int)param_1[0x31] * (int)param_1[0x30]));
  }
  lVar5 = local_78;
  lVar14 = lStack_90;
  local_c4 = 0.0;
  if (fVar4 != 0.0) {
    do {
      if (*(int *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_c4 * 4) == -1) {
        local_b8 = local_b8 & 0xffffffff;
        FUN_148298fa0(&local_c0,&local_c4);
        uVar9 = (ulonglong)(uint)local_c4;
        lVar12 = *(longlong *)(param_1 + 0x16);
        uVar7 = FUN_148299c78(&local_a8,uVar9 * 0xc + lVar12);
        local_c8 = (uint)uVar7;
        if (local_c8 != 0xffffffff) {
LAB_1482994e3:
          uVar6 = (uint)uVar7;
          uVar13 = (uint)uVar9;
          if (uVar6 != uVar13) {
            uVar7 = uVar7 & 0xffffffff;
            fVar3 = *param_1;
            uVar13 = uVar6;
            if (ABS(*(float *)(lVar12 + uVar9 * 0xc) - *(float *)(lVar12 + uVar7 * 0xc)) <= fVar3) {
              lVar10 = uVar7 * 0xc + lVar12;
              lVar12 = lVar12 + uVar9 * 0xc;
              if (((ABS(*(float *)(lVar12 + 4) - *(float *)(lVar10 + 4)) <= fVar3) &&
                  (ABS(*(float *)(lVar12 + 8) - *(float *)(lVar10 + 8)) <= fVar3)) &&
                 (*(int *)(*(longlong *)pfVar1 + uVar7 * 4) == -1)) {
                FUN_148298fa0(&local_c0,&local_c8);
                uVar13 = local_c8;
              }
            }
          }
          local_c8 = *(uint *)(lVar5 + (ulonglong)uVar13 * 4);
          if (local_c8 != 0xffffffff) {
            lVar12 = *(longlong *)(param_1 + 0x16);
            uVar9 = (ulonglong)(uint)local_c4;
            pfVar8 = (float *)(uVar9 * 0xc + lVar12);
            do {
              uVar7 = (ulonglong)local_c8;
              fVar3 = *(float *)(lVar14 + uVar7 * 0xc);
              if ((fVar3 == *pfVar8) && (!NAN(fVar3) && !NAN(*pfVar8))) {
                lVar10 = uVar7 * 0xc + lVar14;
                fVar3 = *(float *)(lVar10 + 4);
                if ((fVar3 == pfVar8[1]) && (!NAN(fVar3) && !NAN(pfVar8[1]))) {
                  fVar3 = *(float *)(lVar10 + 8);
                  if ((fVar3 == pfVar8[2]) && (!NAN(fVar3) && !NAN(pfVar8[2]))) goto LAB_1482994e3;
                }
              }
              local_c8 = *(uint *)(lVar5 + uVar7 * 4);
              if (local_c8 == 0xffffffff) break;
            } while( true );
          }
          local_c8 = 0xffffffff;
        }
        uVar7 = (ulonglong)local_b8._4_4_;
        if (uVar7 == 1) {
          *(float *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_c4 * 4) = local_c4;
          *(float *)(*(longlong *)pfVar2 + (ulonglong)(uint)local_c4 * 4) = local_c4;
        }
        else {
          if (1 < (int)local_b8._4_4_) {
            uVar9 = 1;
            do {
              uVar13 = local_c0[uVar9];
              uVar11 = uVar9;
              do {
                if ((uint)local_c0[uVar11 - 1 & 0xffffffff] <= uVar13) goto LAB_148299638;
                local_c0[uVar11] = local_c0[uVar11 - 1 & 0xffffffff];
                bVar15 = 1 < (longlong)uVar11;
                uVar11 = uVar11 - 1;
              } while (bVar15);
              uVar11 = 0;
LAB_148299638:
              local_c0[(int)uVar11] = uVar13;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar7);
          }
          if (uVar7 != 0) {
            uVar9 = 1;
            do {
              uVar11 = 0;
              if (uVar9 != uVar7) {
                uVar11 = uVar9;
              }
              *(undefined4 *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_c0[uVar9 - 1] * 4) =
                   local_c0[uVar11];
              *(undefined4 *)(*(longlong *)pfVar2 + (ulonglong)(uint)local_c0[uVar9 - 1] * 4) =
                   *local_c0;
              bVar15 = uVar9 != uVar7;
              uVar9 = uVar9 + 1;
            } while (bVar15);
          }
        }
      }
      local_c4 = (float)((int)local_c4 + 1);
    } while ((uint)local_c4 < (uint)fVar4);
    if (local_c0 != (undefined4 *)0x0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(local_c0,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
  }
  FUN_148299d0e(&local_a8);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482996f2 FUN_1482996f2 body=1297 status=ok
// SIG undefined FUN_1482996f2(void)

void FUN_1482996f2(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  float local_104;
  longlong local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [56];
  longlong local_98;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar5 = param_1[0x19];
  local_98 = 0;
  local_90 = 0x18;
  local_88 = 0;
  local_8c = fVar5;
  if ((fVar5 != 0.0) && (FUN_148298f1a(&local_98,fVar5), param_1[0x19] != 0.0)) {
    lVar8 = 8;
    uVar10 = 0;
    do {
      fVar4 = *param_1;
      lVar7 = *(longlong *)(param_1 + 0x16);
      fVar16 = *(float *)(lVar7 + -8 + lVar8);
      fVar15 = *(float *)(lVar7 + -4 + lVar8);
      fVar14 = *(float *)(lVar7 + lVar8);
      fVar17 = fVar14;
      fVar18 = fVar16;
      fVar19 = fVar15;
      if (0.0 < fVar4) {
        fVar17 = fVar14 - fVar4;
        fVar18 = fVar16 - fVar4;
        fVar19 = fVar15 - fVar4;
        fVar14 = fVar14 + fVar4;
        fVar15 = fVar4 + fVar15;
        fVar16 = fVar4 + fVar16;
      }
      *(float *)(local_98 + -0x10 + lVar8 * 2) = fVar18;
      *(float *)(local_98 + -0xc + lVar8 * 2) = fVar19;
      *(float *)(local_98 + -8 + lVar8 * 2) = fVar17;
      *(float *)(local_98 + -4 + lVar8 * 2) = fVar16;
      *(float *)(local_98 + lVar8 * 2) = fVar15;
      *(float *)(local_98 + 4 + lVar8 * 2) = fVar14;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0xc;
    } while (uVar10 < (uint)param_1[0x19]);
  }
  plVar11 = &local_98;
  FUN_148299e74(local_d0,plVar11);
  local_e8 = (undefined4 *)0x0;
  local_e0 = 4;
  local_d8 = 0;
  local_100 = 0;
  local_f8 = 4;
  local_f0 = 0;
  pfVar1 = param_1 + 0x28;
  param_1[0x2b] = fVar5;
  if ((uint)param_1[0x2c] < (uint)fVar5) {
    plVar11 = (longlong *)(ulonglong)(uint)fVar5;
    FUN_148298f1a(pfVar1,plVar11);
  }
  if ((*(void **)pfVar1 != (void *)0x0) && (param_1[0x2b] != 0.0)) {
    plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),0xff);
    memset(*(void **)pfVar1,(int)plVar11,(ulonglong)(uint)((int)param_1[0x2b] * (int)param_1[0x2a]))
    ;
  }
  pfVar2 = param_1 + 0x2e;
  param_1[0x31] = fVar5;
  if ((uint)param_1[0x32] < (uint)fVar5) {
    plVar11 = (longlong *)(ulonglong)(uint)fVar5;
    FUN_148298f1a(pfVar2,plVar11);
  }
  if ((*(void **)pfVar2 != (void *)0x0) && (param_1[0x31] != 0.0)) {
    memset(*(void **)pfVar2,(int)CONCAT71((int7)((ulonglong)plVar11 >> 8),0xff),
           (ulonglong)(uint)((int)param_1[0x31] * (int)param_1[0x30]));
  }
  local_104 = 0.0;
  if (fVar5 != 0.0) {
    do {
      if (*(int *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_104 * 4) == -1) {
        local_e0 = local_e0 & 0xffffffff;
        FUN_148298fa0(&local_e8,&local_104);
        fVar4 = *param_1;
        uVar10 = (ulonglong)(uint)local_104;
        lVar8 = *(longlong *)(param_1 + 0x16);
        local_118 = *(float *)(lVar8 + 8 + uVar10 * 0xc);
        local_120 = *(undefined8 *)(lVar8 + uVar10 * 0xc);
        local_10c = *(float *)(lVar8 + 8 + uVar10 * 0xc);
        local_114 = *(undefined8 *)(lVar8 + uVar10 * 0xc);
        if (0.0 < fVar4) {
          local_120._4_4_ = (float)((ulonglong)local_120 >> 0x20);
          local_120 = CONCAT44(local_120._4_4_ - fVar4,(float)local_120 - fVar4);
          local_118 = local_118 - fVar4;
          local_114._4_4_ = (float)((ulonglong)local_114 >> 0x20);
          local_114 = CONCAT44(local_114._4_4_ + fVar4,(float)local_114 + fVar4);
          local_10c = fVar4 + local_10c;
        }
        FUN_14829a438(local_d0,&local_120,&local_100);
        lVar8 = local_100;
        uVar10 = local_f8 >> 0x20;
        if (uVar10 != 0) {
          uVar12 = 0;
          do {
            fVar4 = *(float *)(lVar8 + uVar12 * 4);
            uVar9 = (ulonglong)(uint)fVar4;
            local_120 = CONCAT44(local_120._4_4_,fVar4);
            if (fVar4 != local_104) {
              lVar7 = *(longlong *)(param_1 + 0x16);
              fVar4 = *param_1;
              if (ABS(*(float *)(lVar7 + (ulonglong)(uint)local_104 * 0xc) -
                      *(float *)(lVar7 + uVar9 * 0xc)) <= fVar4) {
                lVar3 = lVar7 + uVar9 * 0xc;
                lVar7 = lVar7 + (ulonglong)(uint)local_104 * 0xc;
                if (((ABS(*(float *)(lVar7 + 4) - *(float *)(lVar3 + 4)) <= fVar4) &&
                    (ABS(*(float *)(lVar7 + 8) - *(float *)(lVar3 + 8)) <= fVar4)) &&
                   (*(int *)(*(longlong *)pfVar1 + uVar9 * 4) == -1)) {
                  FUN_148298fa0(&local_e8,&local_120);
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar10 != uVar12);
        }
        uVar10 = (ulonglong)local_e0._4_4_;
        if (uVar10 == 1) {
          *(float *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_104 * 4) = local_104;
          *(float *)(*(longlong *)pfVar2 + (ulonglong)(uint)local_104 * 4) = local_104;
        }
        else {
          if (1 < (int)local_e0._4_4_) {
            uVar12 = 1;
            do {
              uVar6 = local_e8[uVar12];
              uVar9 = uVar12;
              do {
                if ((uint)local_e8[uVar9 - 1 & 0xffffffff] <= uVar6) goto LAB_148299b2b;
                local_e8[uVar9] = local_e8[uVar9 - 1 & 0xffffffff];
                bVar13 = 1 < (longlong)uVar9;
                uVar9 = uVar9 - 1;
              } while (bVar13);
              uVar9 = 0;
LAB_148299b2b:
              local_e8[(int)uVar9] = uVar6;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar10);
          }
          if (uVar10 != 0) {
            uVar12 = 1;
            do {
              uVar9 = 0;
              if (uVar12 != uVar10) {
                uVar9 = uVar12;
              }
              *(undefined4 *)(*(longlong *)pfVar1 + (ulonglong)(uint)local_e8[uVar12 - 1] * 4) =
                   local_e8[uVar9];
              *(undefined4 *)(*(longlong *)pfVar2 + (ulonglong)(uint)local_e8[uVar12 - 1] * 4) =
                   *local_e8;
              bVar13 = uVar12 != uVar10;
              uVar12 = uVar12 + 1;
            } while (bVar13);
          }
        }
      }
      local_104 = (float)((int)local_104 + 1);
    } while ((uint)local_104 < (uint)fVar5);
    if (local_100 != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(local_100,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
  }
  if (local_e8 != (undefined4 *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_e8,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_14829a57c(local_d0);
  if (local_98 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_98,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148299c04 FUN_148299c04 body=116 status=ok
// SIG undefined FUN_148299c04(void)

void FUN_148299c04(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_148299d8e();
  }
  uVar2 = 0x1505;
  lVar3 = 0;
  do {
    pbVar1 = (byte *)(param_2 + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (uint)*pbVar1 + uVar2 * 0x1003f;
  } while (lVar3 != 0xc);
  uVar4 = (ulonglong)(*(int *)(param_1 + 8) - 1U & uVar2);
  FUN_148298fa0(param_1 + 0x18,param_2);
  FUN_148298fa0(param_1 + 0x30,uVar4 * 4 + *(longlong *)(param_1 + 0x10));
  *(int *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = *(int *)(param_1 + 0x3c) + -1;
  return;
}



// FUNCTION 148299c78 FUN_148299c78 body=150 status=ok
// SIG undefined FUN_148299c78(void)

ulonglong FUN_148299c78(longlong param_1,float *param_2)

{
  byte *pbVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar4 = 0x1505;
    lVar5 = 0;
    do {
      pbVar1 = (byte *)((longlong)param_2 + lVar5);
      lVar5 = lVar5 + 1;
      uVar4 = (uint)*pbVar1 + uVar4 * 0x1003f;
    } while (lVar5 != 0xc);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) +
                     (ulonglong)(*(int *)(param_1 + 8) - 1U & uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar3 = (ulonglong)uVar4;
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + uVar3 * 0xc);
        if ((fVar2 == *param_2) && (!NAN(fVar2) && !NAN(*param_2))) {
          lVar5 = *(longlong *)(param_1 + 0x18) + uVar3 * 0xc;
          fVar2 = *(float *)(lVar5 + 4);
          if ((fVar2 == param_2[1]) && (!NAN(fVar2) && !NAN(param_2[1]))) {
            fVar2 = *(float *)(lVar5 + 8);
            if ((fVar2 == param_2[2]) && (!NAN(fVar2) && !NAN(param_2[2]))) {
              return uVar3;
            }
          }
        }
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x30) + uVar3 * 4);
      } while (uVar4 != 0xffffffff);
    }
  }
  return 0xffffffff;
}



// FUNCTION 148299d0e FUN_148299d0e body=127 status=ok
// SIG undefined FUN_148299d0e(void)

void FUN_148299d0e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148299d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000148299d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 148299d8e FUN_148299d8e body=230 status=ok
// SIG undefined FUN_148299d8e(void)

void FUN_148299d8e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4) - 1;
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = (uint)(longlong)((double)*(uint *)(param_1 + 4) * 1.3);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 - 1;
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar3 = (*DAT_14cb46728)(0,(ulonglong)uVar2 << 2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 0x28) < uVar1) {
    FUN_148298f1a(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (*(uint *)(param_1 + 0x40) < uVar1) {
    FUN_148298f1a(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 148299e74 FUN_148299e74 body=1475 status=ok
// SIG undefined FUN_148299e74(void)

undefined8 * FUN_148299e74(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
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
  undefined1 local_798 [44];
  float local_76c;
  longlong *local_768;
  float local_75c;
  float local_758;
  float local_754;
  ulonglong local_750;
  ulonglong local_748;
  ulonglong local_740;
  float local_734 [3];
  float local_728 [7];
  undefined8 local_70c;
  uint local_704;
  uint local_700;
  int local_6fc;
  uint local_6f8 [386];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_798;
  param_1[1] = 0;
  param_1[2] = 4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0x24;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = param_2;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    plVar1 = param_1 + 1;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_2 + 0xc);
    FUN_148298f1a(plVar1);
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      uVar5 = 0;
      do {
        *(int *)(param_1[1] + uVar5 * 4) = (int)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x14));
    }
    local_768 = param_1 + 4;
    local_6f8[1] = 0;
    local_6f8[2] = *(int *)((longlong)param_2 + 0xc);
    local_6f8[0] = 0xfffffffc;
    local_728[3] = 3.4028235e+38;
    local_728[4] = 3.4028235e+38;
    local_728[5] = 3.4028235e+38;
    local_728[6] = -3.4028235e+38;
    local_70c = &DAT_ff7fffffff7fffff;
    if (*(uint *)(param_1 + 6) < (uint)(*(int *)((longlong)param_2 + 0xc) * 2)) {
      FUN_148298f1a(param_1 + 4);
    }
    uVar12 = 0;
    uVar5 = 1;
    do {
      uVar6 = (ulonglong)((int)uVar5 - 1);
      local_704 = local_6f8[uVar6 * 3 + 1];
      local_748 = (ulonglong)local_704;
      uVar4 = local_6f8[uVar6 * 3 + 2];
      uVar16 = uVar4 - local_704;
      local_6fc = -1;
      uVar15 = (ulonglong)local_704;
      uVar10 = (ulonglong)*(uint *)(*plVar1 + uVar15 * 4);
      lVar9 = *param_2;
      local_728[3] = *(float *)(lVar9 + uVar10 * 0x18);
      local_728[4] = *(float *)(lVar9 + 4 + uVar10 * 0x18);
      local_728[5] = *(float *)(lVar9 + 8 + uVar10 * 0x18);
      local_728[6] = *(float *)(lVar9 + 0xc + uVar10 * 0x18);
      fVar18 = *(float *)(lVar9 + 0x10 + uVar10 * 0x18);
      fVar19 = *(float *)(lVar9 + 0x14 + uVar10 * 0x18);
      fVar25 = (fVar19 - local_728[5]) * 0.5 + local_728[5];
      fVar22 = (fVar18 - local_728[4]) * 0.5 + local_728[4];
      fVar20 = (local_728[6] - local_728[3]) * 0.5 + local_728[3];
      fVar23 = fVar22;
      fVar24 = fVar20;
      fVar26 = fVar25;
      if (local_704 + 1 < uVar4) {
        lVar13 = 0;
        do {
          local_75c = fVar20;
          uVar10 = (ulonglong)*(uint *)(*plVar1 + (ulonglong)(local_704 + 1) * 4 + lVar13 * 4);
          fVar20 = *(float *)(lVar9 + 8 + uVar10 * 0x18);
          if (fVar20 <= local_728[5]) {
            local_728[5] = fVar20;
          }
          fVar27 = *(float *)(lVar9 + uVar10 * 0x18);
          fVar21 = *(float *)(lVar9 + 4 + uVar10 * 0x18);
          if (fVar21 <= local_728[4]) {
            local_728[4] = fVar21;
          }
          if (fVar27 <= local_728[3]) {
            local_728[3] = fVar27;
          }
          fVar3 = *(float *)(lVar9 + 0x14 + uVar10 * 0x18);
          if (fVar19 <= fVar3) {
            fVar19 = fVar3;
          }
          fVar20 = (fVar3 - fVar20) * 0.5 + fVar20;
          fVar3 = *(float *)(lVar9 + 0x10 + uVar10 * 0x18);
          if (fVar18 <= fVar3) {
            fVar18 = fVar3;
          }
          fVar21 = (fVar3 - fVar21) * 0.5 + fVar21;
          fVar3 = *(float *)(lVar9 + 0xc + uVar10 * 0x18);
          if (local_728[6] <= fVar3) {
            local_728[6] = fVar3;
          }
          fVar27 = (fVar3 - fVar27) * 0.5 + fVar27;
          if (fVar20 <= fVar25) {
            fVar25 = fVar20;
          }
          if (fVar26 <= fVar20) {
            fVar26 = fVar20;
          }
          if (fVar21 <= fVar22) {
            fVar22 = fVar21;
          }
          if (fVar23 <= fVar21) {
            fVar23 = fVar21;
          }
          fVar20 = local_75c;
          if (fVar27 <= local_75c) {
            fVar20 = fVar27;
          }
          if (fVar24 <= fVar27) {
            fVar24 = fVar27;
          }
          lVar13 = lVar13 + 1;
        } while (~local_704 + uVar4 != (int)lVar13);
      }
      local_70c = (undefined1 *)CONCAT44(fVar19,fVar18);
      if (uVar16 < 5) {
        local_6fc = 0;
      }
      local_750 = uVar5;
      local_740 = uVar6;
      local_734[0] = fVar20;
      local_734[1] = fVar22;
      local_734[2] = fVar25;
      local_728[0] = fVar24;
      local_728[1] = fVar23;
      local_728[2] = fVar26;
      local_700 = uVar16;
      FUN_148298fa0(local_768,local_728 + 3);
      uVar8 = local_6f8[uVar6 * 3];
      if ((ulonglong)uVar8 != 0xfffffffc) {
        lVar9 = (ulonglong)uVar8 * 0x24;
        piVar2 = (int *)(*local_768 + 0x20 + lVar9);
        *piVar2 = *piVar2 + -1;
        if (*(int *)(*local_768 + 0x20 + lVar9) == -3) {
          *(uint *)(lVar9 + *local_768 + 0x20) = uVar12 - uVar8;
        }
      }
      uVar10 = local_740;
      if (local_6fc != 0) {
        if (fVar23 - fVar22 <= fVar24 - fVar20) {
          if (fVar24 - fVar20 < fVar26 - fVar25) goto LAB_14829a30b;
          pfVar7 = &local_754;
          pfVar11 = local_734;
          lVar9 = 0;
        }
        else {
          lVar9 = 1;
          pfVar7 = &local_758;
          pfVar11 = local_734 + 1;
          if (fVar23 - fVar22 < fVar26 - fVar25) {
LAB_14829a30b:
            lVar9 = 2;
            pfVar7 = &local_76c;
            pfVar11 = local_734 + 2;
          }
        }
        fVar18 = (*pfVar11 + local_728[lVar9]) * 0.5;
        uVar14 = (uint)local_748;
        uVar5 = local_748 & 0xffffffff;
        uVar8 = uVar14;
        if (uVar14 < uVar4) {
          do {
            lVar9 = *plVar1;
            uVar8 = *(uint *)(lVar9 + uVar15 * 4);
            uVar10 = (ulonglong)uVar8;
            lVar13 = *param_2;
            fVar19 = *(float *)(lVar13 + 8 + uVar10 * 0x18);
            fVar20 = *(float *)(lVar13 + uVar10 * 0x18);
            fVar22 = *(float *)(lVar13 + 4 + uVar10 * 0x18);
            local_754 = (*(float *)(lVar13 + 0xc + uVar10 * 0x18) - fVar20) * 0.5 + fVar20;
            local_758 = (*(float *)(lVar13 + 0x10 + uVar10 * 0x18) - fVar22) * 0.5 + fVar22;
            local_76c = (*(float *)(lVar13 + 0x14 + uVar10 * 0x18) - fVar19) * 0.5 + fVar19;
            if (*pfVar7 <= fVar18 && fVar18 != *pfVar7) {
              *(undefined4 *)(lVar9 + uVar15 * 4) = *(undefined4 *)(lVar9 + uVar5 * 4);
              *(uint *)(lVar9 + uVar5 * 4) = uVar8;
              uVar5 = (ulonglong)((int)uVar5 + 1);
            }
            uVar8 = (uint)uVar5;
            uVar15 = uVar15 + 1;
          } while (uVar4 != uVar15);
        }
        uVar17 = (uVar16 >> 1) + uVar14;
        uVar16 = uVar8;
        if (uVar8 == uVar4) {
          uVar16 = uVar17;
        }
        if (uVar8 == uVar14) {
          uVar16 = uVar17;
        }
        local_6f8[uVar6 * 3 + 1] = uVar16;
        local_6f8[uVar6 * 3] = uVar12;
        uVar5 = local_750 & 0xffffffff;
        local_6f8[uVar5 * 3 + 1] = uVar14;
        local_6f8[uVar5 * 3 + 2] = uVar16;
        local_6f8[uVar5 * 3] = uVar12;
        uVar10 = (ulonglong)((int)local_750 + 1);
      }
      uVar12 = uVar12 + 1;
      uVar5 = uVar10 & 0xffffffff;
    } while ((int)uVar10 != 0);
  }
  if ((local_f0 ^ (ulonglong)local_798) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14829a438 FUN_14829a438 body=323 status=ok
// SIG undefined FUN_14829a438(void)

void FUN_14829a438(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  longlong local_150;
  uint local_148 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar8 = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  local_148[0] = 0;
  local_150 = param_3;
  do {
    uVar5 = uVar8 - 1;
    uVar6 = local_148[uVar8];
    lVar2 = param_1[4];
    iVar1 = *(int *)(lVar2 + 0x20 + (ulonglong)uVar6 * 0x24);
    if (iVar1 == 0) {
      lVar2 = lVar2 + (ulonglong)uVar6 * 0x24;
      uVar6 = *(uint *)(lVar2 + 0x1c);
      uVar8 = uVar5;
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          uVar7 = (ulonglong)(*(int *)(lVar2 + 0x18) + uVar5);
          lVar3 = param_1[1];
          cVar4 = FUN_14829a5da(param_2,(ulonglong)*(uint *)(lVar3 + uVar7 * 4) * 0x18 +
                                        *(longlong *)*param_1);
          if (cVar4 != '\0') {
            FUN_148298fa0(local_150,uVar7 * 4 + lVar3);
            uVar6 = *(uint *)(lVar2 + 0x1c);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    else {
      local_158 = (ulonglong)(uVar6 + 1);
      cVar4 = FUN_14829a5da(param_2,lVar2 + local_158 * 0x24);
      if (cVar4 != '\0') {
        local_148[uVar8] = (uint)local_158;
        uVar5 = uVar8;
      }
      uVar6 = iVar1 + uVar6;
      cVar4 = FUN_14829a5da(param_2,lVar2 + (ulonglong)uVar6 * 0x24);
      uVar8 = uVar5;
      if (cVar4 != '\0') {
        local_148[uVar5 + 1] = uVar6;
        uVar8 = uVar5 + 1;
      }
    }
  } while (-1 < (int)uVar8);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829a57c FUN_14829a57c body=94 status=ok
// SIG undefined FUN_14829a57c(void)

void FUN_14829a57c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829a5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014829a5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 14829a5da FUN_14829a5da body=70 status=ok
// SIG undefined FUN_14829a5da(void)

bool FUN_14829a5da(float *param_1,float *param_2)

{
  bool bVar1;
  
  if ((((param_2[3] < *param_1) || (param_1[3] < *param_2)) || (param_2[4] < param_1[1])) ||
     ((param_1[4] < param_2[1] || (param_2[5] < param_1[2])))) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2[2] <= param_1[5];
  }
  return bVar1;
}



// FUNCTION 14829a620 FUN_14829a620 body=289 status=ok
// SIG undefined FUN_14829a620(void)

void FUN_14829a620(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *param_1 = param_1[2];
    param_1[1] = param_1[5];
  }
  else {
    *(uint *)((longlong)param_1 + 0x1c) = uVar1;
    if (*(uint *)(param_1 + 4) < uVar1) {
      FUN_148298f1a(param_1 + 2);
    }
    uVar1 = *(uint *)(param_2 + 1);
    *(uint *)((longlong)param_1 + 0x34) = uVar1;
    if (*(uint *)(param_1 + 7) < uVar1) {
      FUN_148298f1a(param_1 + 5);
    }
    *param_1 = param_1[2];
    param_1[1] = param_1[5];
    *(undefined1 *)(param_1 + 8) = 0;
    if (*(uint *)(param_2 + 1) < 0x20) {
      local_28 = (undefined4)*param_2;
      uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_20 = (undefined4)param_2[1];
      uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_14829a810(param_1);
    }
    else {
      uVar2 = 0;
      do {
        uVar1 = *(uint *)(*param_2 + uVar2 * 4);
        *(uint *)(*param_2 + uVar2 * 4) = ((int)uVar1 >> 0x1f | 0x80000000U) ^ uVar1;
        uVar2 = uVar2 + 1;
        local_30 = *(uint *)(param_2 + 1);
      } while (uVar2 < local_30);
      local_38 = *param_2;
      FUN_14829a8f6(param_1);
      if ((int)param_2[1] != 0) {
        uVar2 = 0;
        do {
          uVar1 = *(uint *)(*param_2 + uVar2 * 4);
          *(uint *)(*param_2 + uVar2 * 4) =
               (0xffffffffU - ((int)uVar1 >> 0x1f) | 0x80000000) ^ uVar1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_2 + 1));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829a742 FUN_14829a742 body=111 status=ok
// SIG undefined FUN_14829a742(void)

void FUN_14829a742(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1482a5d86(lVar1 + 0x1e8);
  FUN_1482a5f60(lVar1 + 0x138);
  FUN_1482a6082(lVar1 + 0xd0);
  FUN_1482a6122(lVar1);
  if (*param_1 == 0) {
    return;
  }
  if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829a794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46730)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014829a7ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46728)(*param_1,0);
  return;
}



// FUNCTION 14829a7b2 FUN_14829a7b2 body=94 status=ok
// SIG undefined FUN_14829a7b2(void)

void FUN_14829a7b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x28),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829a7eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014829a80d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    return;
  }
  return;
}



// FUNCTION 14829a810 FUN_14829a810 body=229 status=ok
// SIG undefined FUN_14829a810(void)

void FUN_14829a810(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((char)param_1[8] == '\x01') {
    if ((int)param_2[1] != 1) {
      uVar9 = 1;
      do {
        iVar8 = (int)uVar9;
        uVar4 = *(uint *)(*param_1 + uVar9 * 4);
        uVar7 = 0;
        if (iVar8 != 0) {
          do {
            uVar5 = (ulonglong)((int)uVar9 - 1);
            uVar6 = *(uint *)(*param_1 + uVar5 * 4);
            fVar2 = *(float *)(*param_2 + (ulonglong)uVar6 * 4);
            pfVar1 = (float *)(*param_2 + (ulonglong)uVar4 * 4);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
              uVar7 = uVar9 & 0xffffffff;
              break;
            }
            *(uint *)(*param_1 + uVar9 * 4) = uVar6;
            uVar9 = uVar9 - 1;
          } while (uVar5 != 0);
        }
        if (iVar8 != (int)uVar7) {
          *(uint *)(*param_1 + uVar7 * 4) = uVar4;
        }
        uVar9 = (ulonglong)(iVar8 + 1U);
      } while (iVar8 + 1U != *(uint *)(param_2 + 1));
    }
  }
  else {
    *(undefined4 *)*param_1 = 0;
    if ((int)param_2[1] != 1) {
      uVar4 = 1;
      do {
        uVar7 = (ulonglong)uVar4;
        *(uint *)(*param_1 + uVar7 * 4) = uVar4;
        uVar9 = uVar7;
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            uVar5 = (ulonglong)((uint)uVar9 - 1);
            uVar3 = *(uint *)(*param_1 + uVar5 * 4);
            fVar2 = *(float *)(*param_2 + (ulonglong)uVar3 * 4);
            pfVar1 = (float *)(*param_2 + uVar7 * 4);
            uVar6 = (uint)uVar9;
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            *(uint *)(*param_1 + uVar9 * 4) = uVar3;
            uVar9 = uVar9 - 1;
            uVar6 = 0;
          } while (uVar5 != 0);
        }
        if (uVar4 != uVar6) {
          *(uint *)(*param_1 + (ulonglong)uVar6 * 4) = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != *(uint *)(param_2 + 1));
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 14829a8f6 FUN_14829a8f6 body=374 status=ok
// SIG undefined FUN_14829a8f6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14829a8f6(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_1858 [32];
  undefined4 local_1838;
  undefined4 uStack_1834;
  undefined4 uStack_1830;
  undefined4 uStack_182c;
  longlong local_1828 [256];
  int local_1028 [1026];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)local_1858;
  local_1838 = (undefined4)*param_2;
  uStack_1834 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_1830 = (undefined4)param_2[1];
  uStack_182c = *(undefined4 *)((longlong)param_2 + 0xc);
  piVar9 = local_1028;
  FUN_14829aa6e(&local_1838,piVar9);
  lVar5 = 0;
  do {
    iVar2 = (int)param_2[1];
    if (local_1028[lVar5 * 0x100 + (ulonglong)*(byte *)(*param_2 + lVar5)] != iVar2) {
      lVar6 = *param_2 + lVar5;
      lVar10 = param_1[1];
      local_1828[0] = lVar10;
      lVar11 = 0;
      do {
        lVar10 = lVar10 + (ulonglong)(uint)piVar9[lVar11] * 4;
        local_1828[lVar11 + 1] = lVar10;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0xff);
      if ((char)param_1[8] == '\0') {
        if (iVar2 != 0) {
          uVar7 = 0;
          uVar8 = 0;
          do {
            bVar1 = *(byte *)(lVar6 + (ulonglong)uVar7);
            puVar4 = (undefined4 *)local_1828[bVar1];
            local_1828[bVar1] = (longlong)(puVar4 + 1);
            *puVar4 = (int)uVar8;
            uVar8 = uVar8 + 1;
            uVar7 = uVar7 + 4;
          } while (uVar8 < *(uint *)(param_2 + 1));
        }
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else if (iVar2 != 0) {
        uVar8 = 0;
        do {
          iVar2 = *(int *)(*param_1 + uVar8 * 4);
          bVar1 = *(byte *)(lVar6 + (ulonglong)(uint)(iVar2 * 4));
          piVar3 = (int *)local_1828[bVar1];
          local_1828[bVar1] = (longlong)(piVar3 + 1);
          *piVar3 = iVar2;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_2 + 1));
      }
      lVar10 = *param_1;
      *param_1 = param_1[1];
      param_1[1] = lVar10;
    }
    lVar5 = lVar5 + 1;
    piVar9 = piVar9 + 0x100;
  } while (lVar5 != 4);
  if ((char)param_1[8] == '\0') {
    if ((int)param_2[1] != 0) {
      uVar8 = 0;
      do {
        *(int *)(*param_1 + uVar8 * 4) = (int)uVar8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_2 + 1));
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((local_20 ^ (ulonglong)local_1858) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829aa6e FUN_14829aa6e body=149 status=ok
// SIG undefined FUN_14829aa6e(void)

void FUN_14829aa6e(undefined8 *param_1,void *param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  
  memset(param_2,0,0x1000);
  if ((ulonglong)*(uint *)(param_1 + 1) != 0) {
    pbVar3 = (byte *)*param_1;
    pbVar1 = pbVar3 + (ulonglong)*(uint *)(param_1 + 1) * 4;
    auVar4._8_4_ = (int)param_2;
    auVar4._0_8_ = param_2;
    auVar4._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    auVar5 = pmovsxwq(in_XMM1,0xc000800);
    do {
      piVar2 = (int *)((longlong)param_2 + (ulonglong)*pbVar3 * 4);
      *piVar2 = *piVar2 + 1;
      piVar2 = (int *)(auVar4._8_8_ + 0x400 + (ulonglong)pbVar3[1] * 4);
      *piVar2 = *piVar2 + 1;
      piVar2 = (int *)((longlong)param_2 + (ulonglong)pbVar3[2] * 4 + auVar5._0_8_);
      *piVar2 = *piVar2 + 1;
      piVar2 = (int *)(auVar5._8_8_ + auVar4._8_8_ + (ulonglong)pbVar3[3] * 4);
      *piVar2 = *piVar2 + 1;
      pbVar3 = pbVar3 + 4;
    } while (pbVar3 != pbVar1);
  }
  return;
}



// FUNCTION 14829ab04 FUN_14829ab04 body=300 status=ok
// SIG undefined FUN_14829ab04(void)

longlong FUN_14829ab04(longlong param_1)

{
  FUN_14829ac30();
  *(longlong *)(param_1 + 0xd0) = param_1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 8;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x24;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 4;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0xc;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(longlong *)(param_1 + 0x138) = param_1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 4;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 4;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 4;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 4;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 8;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x24;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  FUN_14829acce(param_1 + 0x1e8,param_1,param_1 + 0x138);
  return param_1;
}



// FUNCTION 14829ac30 FUN_14829ac30 body=158 status=ok
// SIG undefined FUN_14829ac30(void)

void FUN_14829ac30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3c23d70a40000000;
  param_1[3] = 0x4080000040c00000;
  param_1[4] = 0x400000003f000000;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 4;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 4;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xc;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 4;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 14829acce FUN_14829acce body=292 status=ok
// SIG undefined FUN_14829acce(void)

void FUN_14829acce(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 8;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 4;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 8;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xc;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 4;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 4;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 4;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 4;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 4;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 4;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 4;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}



// FUNCTION 14829adf2 FUN_14829adf2 body=322 status=ok
// SIG undefined FUN_14829adf2(void)

void FUN_14829adf2(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 4;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 4;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 4;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 4;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 4;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 4;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 4;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 4;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 4;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 4;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}



// FUNCTION 14829af34 FUN_14829af34 body=975 status=ok
// SIG undefined FUN_14829af34(void)

void FUN_14829af34(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  uint local_6c;
  int local_68;
  uint local_64;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar12 = param_1 + 1;
  uVar10 = (ulonglong)*(uint *)(*param_1 + 0x4c) / 3;
  uVar7 = *(uint *)(*param_1 + 0x4c) / 3;
  *(uint *)((longlong)param_1 + 0x14) = uVar7;
  if (*(uint *)(param_1 + 3) < uVar7) {
    FUN_148298f1a(plVar12);
  }
  if (((void *)*plVar12 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    memset((void *)*plVar12,(int)CONCAT71((int7)(uVar10 >> 8),0xff),
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x14) * (int)param_1[2]));
  }
  local_60 = 0;
  local_58 = 4;
  local_50 = 0;
  uVar7 = *(uint *)(*param_1 + 0x4c);
  *(uint *)((longlong)param_1 + 0x44) = uVar7 / 3;
  if (*(uint *)(param_1 + 9) < uVar7 / 3) {
    FUN_148298f1a(param_1 + 7);
  }
  if (2 < uVar7) {
    plVar14 = param_1 + 10;
    uVar11 = 0;
    iVar13 = 0;
    plVar6 = param_1 + 4;
    uVar10 = (ulonglong)-(uVar7 / 3);
    plVar16 = param_1 + 7;
    uVar18 = (ulonglong)uVar7 / 3;
    do {
      uVar15 = uVar11 & 0xffffffff;
      lVar19 = 0;
      while ((*(int *)(*plVar12 + uVar15 * 4 + lVar19 * 4) != -1 ||
             (((*(byte *)(*param_1 + 4) & 1) != 0 &&
              (*(char *)(lVar19 + *(longlong *)(*param_1 + 0x10) + uVar15) == '\x01'))))) {
        lVar19 = lVar19 + 1;
        if ((int)uVar10 + (int)uVar11 + (int)lVar19 == 0) goto LAB_14829afee;
      }
      uVar11 = uVar15 + lVar19;
      local_64 = (uint)uVar11;
      *(int *)(*plVar12 + (uVar11 & 0xffffffff) * 4) = iVar13;
      *(undefined4 *)(*plVar16 + (uVar11 & 0xffffffff) * 4) = 0xffffffff;
      local_ac = iVar13;
      local_a8 = plVar16;
      local_a0 = plVar12;
      local_98 = uVar15;
      local_90 = uVar10;
      local_88 = plVar14;
      local_80 = plVar6;
      local_78 = uVar18;
      FUN_148298fa0(plVar6,&local_64);
      local_54 = 0;
      FUN_148298fa0(&local_60,&local_64);
      local_68 = 1;
      uVar7 = local_64;
      while (plVar14 = local_88, local_54 != 0) {
        local_54 = local_54 - 1;
        uVar5 = *(uint *)(local_60 + (ulonglong)local_54 * 4);
        if (local_50 < local_54) {
          uVar9 = local_54 >> 2;
          if (local_50 == 0) {
            uVar9 = 0;
          }
          FUN_148298f1a(&local_60,uVar9 + local_54);
        }
        lVar1 = *param_1;
        iVar13 = -1;
        if ((*(byte *)(lVar1 + 4) & 4) != 0) {
          iVar13 = *(int *)(*(longlong *)(lVar1 + 0x28) + (ulonglong)uVar5 * 4);
        }
        iVar3 = uVar5 * 3;
        lVar17 = 0;
        do {
          lVar2 = *param_1;
          iVar8 = (int)lVar17;
          bVar20 = lVar17 == 2;
          lVar17 = lVar17 + 1;
          iVar4 = (int)lVar17;
          if (bVar20) {
            iVar4 = 0;
          }
          uVar5 = FUN_14829b5b8(lVar2,*(undefined4 *)
                                       (*(longlong *)(lVar1 + 0x40) +
                                       (ulonglong)(uint)(iVar4 + iVar3) * 4),
                                *(undefined4 *)
                                 (*(longlong *)(lVar1 + 0x40) + (ulonglong)(uint)(iVar3 + iVar8) * 4
                                 ));
          if (uVar5 != 0xffffffff) {
            uVar9 = uVar5 / 3;
            local_6c = uVar9;
            if (((*(uint *)(lVar2 + 4) & 1) == 0) ||
               (*(char *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar9) == '\0')) {
              iVar8 = -1;
              uVar5 = uVar5 / 3;
              if ((*(uint *)(lVar2 + 4) & 4) != 0) {
                iVar8 = *(int *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)uVar5 * 4);
              }
              if (iVar8 == iVar13) {
                if (*(int *)(*local_a0 + (ulonglong)uVar5 * 4) == -1) {
                  *(int *)(*local_a0 + (ulonglong)uVar5 * 4) = local_ac;
                  *(undefined4 *)(*local_a8 + (ulonglong)uVar9 * 4) = 0xffffffff;
                  if (uVar7 != 0xffffffff) {
                    *(uint *)(*local_a8 + (ulonglong)uVar7 * 4) = uVar9;
                  }
                  local_68 = local_68 + 1;
                  FUN_148298fa0(&local_60,&local_6c);
                  uVar7 = uVar9;
                }
              }
            }
          }
        } while (lVar17 != 3);
      }
      FUN_148298fa0(local_88,&local_68);
      iVar13 = local_ac + 1;
      if (iVar13 == -1) {
        FUN_14678752e("\rASSERT: %s %s %d\n","group < kInvalid",
                      ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                      ,0xb82);
      }
      uVar11 = local_98 + lVar19 + 1;
      plVar6 = local_80;
      plVar12 = local_a0;
      uVar10 = local_90;
      plVar16 = local_a8;
      uVar18 = local_78;
    } while ((uint)uVar11 < (uint)local_78);
  }
LAB_14829afee:
  local_64 = 0xffffffff;
  if (local_60 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_60,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829b304 FUN_14829b304 body=530 status=ok
// SIG undefined FUN_14829b304(void)

void FUN_14829b304(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  uVar3 = *(uint *)(param_2 + 0x4c);
  local_90 = 0;
  if (2 < uVar3) {
    uVar4 = 0;
    do {
      uVar6 = (uint)uVar4;
      if (param_3 == 0) {
        if (((*(byte *)(param_2 + 4) & 1) != 0) &&
           (*(char *)(*(longlong *)(param_2 + 0x10) + uVar4) == '\x01')) goto LAB_14829b38a;
      }
      else if (*(int *)(*(longlong *)(param_3 + 8) + uVar4 * 4) == -1) {
LAB_14829b38a:
        FUN_148298fa0(param_1,&local_90);
        uVar6 = local_90;
      }
      local_90 = uVar6 + 1;
      uVar4 = (ulonglong)local_90;
    } while (local_90 < uVar3 / 3);
    uVar6 = *(uint *)((longlong)param_1 + 0xc);
  }
  uVar3 = uVar6 * 3;
  *(uint *)((longlong)param_1 + 0x24) = uVar3;
  if (*(uint *)(param_1 + 5) < uVar3) {
    FUN_148298f1a(param_1 + 3,uVar3);
  }
  uVar2 = *(uint *)(param_2 + 100);
  if (uVar3 < *(uint *)(param_2 + 100)) {
    uVar2 = uVar3;
  }
  local_b0 = param_1 + 6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (*(uint *)(param_1 + 8) < uVar2) {
    FUN_148298f1a(local_b0,uVar2);
  }
  local_90 = 4;
  local_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 4;
  local_68 = 0;
  local_60 = 0;
  local_58 = 4;
  local_50 = 0;
  local_8c = uVar2;
  if (uVar6 != 0) {
    local_a8 = (ulonglong)uVar6;
    uVar4 = 0;
    local_a0 = param_1;
    do {
      iVar1 = *(int *)(*local_a0 + uVar4 * 4);
      lVar5 = 0;
      do {
        local_94 = *(uint *)(*(longlong *)(param_2 + 0x40) +
                            (ulonglong)(uint)((int)lVar5 + iVar1 * 3) * 4);
        if (local_80 != 0) {
          for (uVar3 = *(uint *)(local_80 + (ulonglong)(local_88 - 1U & local_94) * 4);
              uVar3 != 0xffffffff; uVar3 = *(uint *)(local_60 + (ulonglong)uVar3 * 4)) {
            if (*(uint *)(lStack_78 + (ulonglong)uVar3 * 4) == local_94) goto LAB_14829b4b9;
          }
        }
        uVar3 = FUN_14829b754(&local_90,&local_94);
        FUN_148298fa0(local_b0,&local_94);
LAB_14829b4b9:
        *(uint *)(param_1[3] + (ulonglong)(uint)((int)lVar5 + (int)uVar4 * 3) * 4) = uVar3;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_a8);
  }
  FUN_14829b7b2(&local_90);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829b518 FUN_14829b518 body=160 status=ok
// SIG undefined FUN_14829b518(void)

void FUN_14829b518(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829b57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014829b5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 14829b5b8 FUN_14829b5b8 body=412 status=ok
// SIG undefined FUN_14829b5b8(void)

ulonglong FUN_14829b5b8(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x130);
  if ((lVar2 != 0) &&
     (uVar6 = *(uint *)(lVar2 + (ulonglong)
                                (*(int *)(param_1 + 0x128) - 1U & param_2 * 0x8000 + param_3) * 4),
     uVar6 != 0xffffffff)) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    do {
      uVar4 = (ulonglong)uVar6;
      if ((*(uint *)(lVar3 + uVar4 * 8) == param_2) && (*(uint *)(lVar3 + 4 + uVar4 * 8) == param_3)
         ) {
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          return uVar4;
        }
        if (*(char *)(*(longlong *)(param_1 + 0x10) + uVar4 / 3) != '\x01') {
          return uVar4;
        }
        while( true ) {
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x150) + uVar4 * 4);
          uVar4 = (ulonglong)uVar6;
          if (uVar4 == 0xffffffff) break;
          if (((*(uint *)(lVar3 + uVar4 * 8) == param_2) &&
              (*(uint *)(lVar3 + 4 + uVar4 * 8) == param_3)) &&
             (*(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 / 3) != '\x01')) {
            return uVar4;
          }
        }
        break;
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0x150) + uVar4 * 4);
    } while (uVar6 != 0xffffffff);
  }
  uVar6 = param_2;
  if (*(int *)(param_1 + 0xac) != 0) {
    do {
      uVar5 = param_3;
      do {
        if ((lVar2 != 0) &&
           (uVar1 = *(uint *)(lVar2 + (ulonglong)
                                      (*(int *)(param_1 + 0x128) - 1U & uVar5 + uVar6 * 0x8000) * 4)
           , uVar1 != 0xffffffff)) {
          lVar3 = *(longlong *)(param_1 + 0x138);
LAB_14829b65e:
          uVar4 = (ulonglong)uVar1;
          if ((*(uint *)(lVar3 + uVar4 * 8) != uVar6) || (*(uint *)(lVar3 + 4 + uVar4 * 8) != uVar5)
             ) goto LAB_14829b66e;
          if ((*(byte *)(param_1 + 4) & 1) == 0) {
            return uVar4;
          }
          if (*(char *)(*(longlong *)(param_1 + 0x10) + uVar4 / 3) != '\x01') {
            return uVar4;
          }
          while( true ) {
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x150) + uVar4 * 4);
            uVar4 = (ulonglong)uVar1;
            if (uVar4 == 0xffffffff) break;
            if (((*(uint *)(lVar3 + uVar4 * 8) == uVar6) &&
                (*(uint *)(lVar3 + 4 + uVar4 * 8) == uVar5)) &&
               (*(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 / 3) != '\x01')) {
              return uVar4;
            }
          }
        }
LAB_14829b67e:
        uVar5 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar5 * 4);
      } while (uVar5 != param_3);
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar6 * 4);
    } while (uVar6 != param_2);
  }
  return 0xffffffff;
LAB_14829b66e:
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x150) + uVar4 * 4);
  if (uVar1 == 0xffffffff) goto LAB_14829b67e;
  goto LAB_14829b65e;
}



// FUNCTION 14829b754 FUN_14829b754 body=93 status=ok
// SIG undefined FUN_14829b754(void)

int FUN_14829b754(longlong param_1,uint *param_2)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_14829b832(param_1);
  }
  uVar1 = (ulonglong)(*(int *)(param_1 + 8) - 1U & *param_2);
  FUN_148298fa0(param_1 + 0x18,param_2);
  FUN_148298fa0(param_1 + 0x30,uVar1 * 4 + *(longlong *)(param_1 + 0x10));
  *(int *)(*(longlong *)(param_1 + 0x10) + uVar1 * 4) = *(int *)(param_1 + 0x3c) + -1;
  return *(int *)(param_1 + 0x24) + -1;
}



// FUNCTION 14829b7b2 FUN_14829b7b2 body=127 status=ok
// SIG undefined FUN_14829b7b2(void)

void FUN_14829b7b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829b802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014829b82e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 14829b832 FUN_14829b832 body=230 status=ok
// SIG undefined FUN_14829b832(void)

void FUN_14829b832(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4) - 1;
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = (uint)(longlong)((double)*(uint *)(param_1 + 4) * 1.3);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 - 1;
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar3 = (*DAT_14cb46728)(0,(ulonglong)uVar2 << 2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 0x28) < uVar1) {
    FUN_148298f1a(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (*(uint *)(param_1 + 0x40) < uVar1) {
    FUN_148298f1a(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 14829b918 FUN_14829b918 body=1565 status=ok
// SIG undefined FUN_14829b918(void)

void FUN_14829b918(undefined4 *param_1,longlong *param_2,undefined4 *param_3,byte *param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
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
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  code *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_8c;
  byte *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0xe);
  local_d0 = param_2;
  if (param_1[0x11] != 0) {
    uVar25 = 0;
    do {
      FUN_148298d28(*(undefined8 *)(*plVar1 + uVar25 * 8));
      lVar16 = *(longlong *)(*plVar1 + uVar25 * 8);
      if (lVar16 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar16,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < (uint)param_1[0x11]);
  }
  lVar16 = FUN_14829bf36(param_1);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  uVar11 = param_3[8];
  uVar12 = param_3[9];
  uVar13 = param_3[10];
  uVar14 = param_3[0xb];
  *param_5 = *param_3;
  param_5[1] = uVar4;
  param_5[2] = uVar5;
  param_5[3] = uVar6;
  param_5[4] = uVar7;
  param_5[5] = uVar8;
  param_5[6] = uVar9;
  param_5[7] = uVar10;
  param_5[8] = uVar11;
  param_5[9] = uVar12;
  param_5[10] = uVar13;
  param_5[0xb] = uVar14;
  *(longlong *)(param_5 + 0xc) = lVar16;
  FUN_14829c55c(param_5);
  FUN_14829c260(param_5);
  LOCK();
  *(int *)(param_4 + 0x18) =
       *(int *)(param_4 + 0x18) +
       *(int *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x50) + (ulonglong)(uint)param_1[6] * 4);
  UNLOCK();
  FUN_148298eae(param_4);
  uVar20 = *(uint *)(lVar16 + 0x4c);
  FUN_14828bf8c(lVar16);
  if (lVar16 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(lVar16,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((*param_4 & 1) == 0) {
    uVar21 = param_5[0x6b] + param_5[0x39] + param_5[0x8f];
    local_60 = 0;
    local_58 = 4;
    local_50 = 0;
    local_54 = uVar20 / 3 + uVar21;
    if (local_54 != 0) {
      FUN_148298f1a(&local_60);
    }
    plVar15 = local_d0;
    local_e0 = (ulonglong)uVar21;
    local_d8 = CONCAT44(local_d8._4_4_,uVar21);
    if (uVar21 != 0) {
      uVar25 = 0;
      uVar20 = 0;
      do {
        if (uVar25 < (uint)param_5[0x39]) {
          puVar2 = (uint *)(*(longlong *)(param_5 + 0x36) + uVar25 * 8);
          puVar23 = puVar2 + 1;
          lVar17 = (ulonglong)*puVar2 * 4 + *(longlong *)(param_5 + 0x42);
        }
        else {
          uVar27 = (int)uVar25 - param_5[0x39];
          if (uVar27 < (uint)param_5[0x6b]) {
            puVar2 = (uint *)(*(longlong *)(param_5 + 0x68) + (ulonglong)uVar27 * 8);
            puVar23 = puVar2 + 1;
            lVar17 = (ulonglong)*puVar2 * 4 + *(longlong *)(param_5 + 0x6e);
          }
          else {
            lVar16 = *(longlong *)
                      (*(longlong *)(param_5 + 0x8c) + (ulonglong)(uVar27 - param_5[0x6b]) * 8);
            lVar17 = *(longlong *)(lVar16 + 0x48);
            puVar23 = (uint *)(lVar16 + 0x54);
          }
        }
        uVar27 = *puVar23;
        uVar22 = uVar20 + 1;
        *(uint *)(local_60 + (ulonglong)uVar20 * 4) = uVar27;
        if ((ulonglong)uVar27 != 0) {
          uVar28 = 0;
          do {
            *(undefined4 *)(local_60 + (ulonglong)(uVar22 + (int)uVar28) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(lVar17 + uVar28 * 4) * 4);
            uVar28 = uVar28 + 1;
          } while (uVar27 != uVar28);
          uVar22 = uVar22 + (int)uVar28;
        }
        uVar25 = uVar25 + 1;
        uVar20 = uVar22;
      } while (uVar25 != local_e0);
    }
    local_80 = param_6;
    local_78 = param_7;
    local_68 = param_8;
    local_88 = param_4;
    local_70 = param_3;
    FUN_14828d90c(local_d0,&local_8c,&local_88,uVar21);
    local_a8 = (longlong *)0x0;
    local_a0 = 0x50;
    local_98 = 0;
    local_9c = uVar21;
    if (uVar21 == 0) {
      FUN_14828da20(plVar15,&local_8c);
      param_1[0x11] = 0;
    }
    else {
      FUN_148298f1a();
      plVar15 = local_a8;
      local_c8 = (ulonglong)local_9c;
      if (local_c8 != 0) {
        lVar16 = 0;
        do {
          *(undefined8 *)((longlong)local_a8 + lVar16 + 0x10) = 0;
          *(undefined8 *)((longlong)local_a8 + lVar16 + 0x18) = 8;
          *(undefined4 *)((longlong)local_a8 + lVar16 + 0x20) = 0;
          *(undefined8 *)((longlong)local_a8 + lVar16 + 0x38) = 0;
          *(undefined4 *)((longlong)local_a8 + lVar16 + 0x40) = 0;
          lVar16 = lVar16 + 0x50;
        } while (local_c8 * 0x50 != lVar16);
      }
      local_d8 = local_60;
      local_c0 = (ulonglong)local_8c;
      lVar16 = 0;
      uVar25 = 0;
      uVar20 = 0;
      plVar18 = local_a8;
      do {
        uVar21 = param_5[0x39];
        iVar24 = (int)uVar25;
        if (uVar25 < uVar21) {
          lVar17 = *(longlong *)(param_5 + 0x3c) + lVar16;
        }
        else if (iVar24 - uVar21 < (uint)param_5[0x6b]) {
          lVar17 = (ulonglong)(iVar24 - uVar21) * 0x24 + *(longlong *)(param_5 + 0x74);
        }
        else {
          lVar17 = *(longlong *)
                    (*(longlong *)(param_5 + 0x8c) +
                    (ulonglong)(iVar24 - (uVar21 + param_5[0x6b])) * 8) + 4;
        }
        *plVar18 = lVar17;
        iVar19 = 2 - (uint)((uint)(iVar24 - param_5[0x39]) < (uint)param_5[0x6b]);
        if (uVar25 < (uint)param_5[0x39]) {
          iVar19 = 0;
        }
        *(int *)(plVar18 + 5) = iVar19;
        plVar18[1] = 0;
        *(undefined4 *)(plVar18 + 9) = *param_1;
        *(int *)((longlong)plVar18 + 0x4c) = iVar24;
        iVar24 = *(int *)(local_d8 + (ulonglong)uVar20 * 4);
        plVar18[7] = local_d8 + (ulonglong)(uVar20 + 1) * 4;
        *(int *)(plVar18 + 8) = iVar24;
        uVar20 = iVar24 + 1 + uVar20;
        plVar18[6] = *(longlong *)(param_1 + 2);
        local_b8 = FUN_143afd6db;
        local_b0 = plVar18;
        FUN_148298fa0(*(undefined8 *)(*local_d0 + local_c0 * 8),&local_b8);
        uVar25 = uVar25 + 1;
        lVar16 = lVar16 + 0x24;
        plVar18 = plVar18 + 10;
      } while (local_e0 != uVar25);
      FUN_14828da20(local_d0);
      plVar18 = plVar15 + 1;
      uVar20 = 0;
      uVar25 = local_e0;
      do {
        iVar24 = 1;
        if (*(char *)(*plVar18 + 0xe0) == '\x01') {
          iVar24 = *(int *)((longlong)plVar18 + 0x14);
        }
        uVar20 = uVar20 + iVar24;
        plVar18 = plVar18 + 10;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      param_1[0x11] = uVar20;
      if ((uint)param_1[0x12] < uVar20) {
        FUN_148298f1a(plVar1);
      }
      plVar18 = plVar15 + 1;
      uVar25 = 0;
      uVar28 = local_e0;
      do {
        lVar16 = *plVar18;
        if (*(char *)(lVar16 + 0xe0) == '\x01') {
          FUN_148298d28(lVar16);
          if (lVar16 != 0) {
            if (DAT_14cb46730 == (code *)0x0) {
              (*DAT_14cb46728)(lVar16,0);
            }
            else {
              (*DAT_14cb46730)();
            }
          }
        }
        else {
          *(longlong *)(*plVar1 + uVar25 * 8) = lVar16;
          uVar25 = (ulonglong)((int)uVar25 + 1);
        }
        plVar18 = plVar18 + 10;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      uVar28 = 0;
      do {
        if (*(int *)((longlong)plVar15 + uVar28 * 0x50 + 0x1c) != 0) {
          uVar26 = 0;
          do {
            *(undefined8 *)(*plVar1 + (ulonglong)(uint)((int)uVar25 + (int)uVar26) * 8) =
                 *(undefined8 *)(plVar15[uVar28 * 10 + 2] + uVar26 * 8);
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(uint *)((longlong)plVar15 + uVar28 * 0x50 + 0x1c));
          uVar25 = (ulonglong)(uint)((int)uVar25 + (int)uVar26);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != local_e0);
      if (local_c8 != 0) {
        lVar16 = local_c8 * 0x50;
        lVar17 = 0;
        do {
          lVar3 = *(longlong *)((longlong)plVar15 + lVar17 + 0x10);
          if (lVar3 != 0) {
            if (DAT_14cb46730 == (code *)0x0) {
              (*DAT_14cb46728)(lVar3,0);
            }
            else {
              (*DAT_14cb46730)();
            }
          }
          lVar17 = lVar17 + 0x50;
        } while (lVar16 != lVar17);
      }
      if (plVar15 != (longlong *)0x0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(plVar15,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
    }
    if (local_60 != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(local_60,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829bf36 FUN_14829bf36 body=808 status=ok
// SIG undefined FUN_14829bf36(void)

float * FUN_14829bf36(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar13 = *(longlong *)(param_1 + 0x10);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x30) < *(uint *)(*(longlong *)(lVar13 + 0x50) + uVar11 * 4)) {
    FUN_148298f1a(plVar1);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x18);
    lVar13 = *(longlong *)(param_1 + 0x10);
  }
  uVar10 = *(uint *)(*(longlong *)(lVar13 + 0x20) + uVar11 * 4);
  if (uVar10 != 0xffffffff) {
    do {
      local_a0 = uVar10;
      FUN_148298fa0(plVar1,&local_a0);
      uVar10 = *(uint *)(*(longlong *)(lVar13 + 0x38) + (ulonglong)uVar10 * 4);
    } while (uVar10 != 0xffffffff);
  }
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar10 = *(uint *)(*(longlong *)(param_1 + 8) + 100);
  uVar3 = *(uint *)(param_1 + 0x2c) * 3;
  if (uVar3 < uVar10) {
    uVar10 = uVar3;
  }
  pfVar7 = (float *)(*DAT_14cb46728)(0,0x168);
  local_c8 = (*(undefined4 **)(param_1 + 8))[1] & 2;
  local_c0 = 0xffffffff;
  FUN_14828ce1e(pfVar7,**(undefined4 **)(param_1 + 8),uVar10,uVar11);
  local_a0 = 4;
  local_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 4;
  local_78 = 0;
  local_70 = 0;
  local_68 = 4;
  local_60 = 0;
  local_b8 = uVar11;
  local_9c = uVar10;
  if (uVar11 != 0) {
    uVar11 = 0;
    local_b0 = plVar1;
    do {
      iVar2 = *(int *)(*local_b0 + uVar11 * 4);
      lVar13 = 0;
      do {
        local_a4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) +
                            (ulonglong)(uint)(iVar2 * 3 + (int)lVar13) * 4);
        if (local_90 != 0) {
          for (uVar10 = *(uint *)(local_90 + (ulonglong)(local_98 - 1U & local_a4) * 4);
              uVar10 != 0xffffffff; uVar10 = *(uint *)(local_70 + (ulonglong)uVar10 * 4)) {
            if (*(uint *)(lStack_88 + (ulonglong)uVar10 * 4) == local_a4) goto LAB_14829c13d;
          }
        }
        FUN_14829b754(&local_a0,&local_a4);
        local_58 = 0;
        local_50 = 0;
        lVar4 = *(longlong *)(param_1 + 8);
        uVar8 = (ulonglong)local_a4;
        if ((*(byte *)(lVar4 + 4) & 2) != 0) {
          local_50 = *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + 8 + uVar8 * 0xc);
          local_58 = *(undefined8 *)(*(longlong *)(lVar4 + 0x70) + uVar8 * 0xc);
        }
        FUN_14828cfe8(pfVar7,uVar8 * 0xc + *(longlong *)(lVar4 + 0x58),&local_58,
                      uVar8 * 8 + *(longlong *)(lVar4 + 0x88));
LAB_14829c13d:
        lVar6 = local_70;
        lVar5 = lStack_88;
        lVar4 = local_90;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 3);
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_b8);
    uVar10 = local_98 - 1;
    uVar11 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar11 * 4);
      lVar13 = *(longlong *)(param_1 + 8);
      lVar9 = 0;
      do {
        if (lVar4 != 0) {
          uVar3 = *(uint *)(*(longlong *)(lVar13 + 0x40) +
                           (ulonglong)(uint)(iVar2 * 3 + (int)lVar9) * 4);
          for (uVar12 = *(uint *)(lVar4 + (ulonglong)(uVar3 & uVar10) * 4); uVar12 != 0xffffffff;
              uVar12 = *(uint *)(lVar6 + (ulonglong)uVar12 * 4)) {
            if (*(uint *)(lVar5 + (ulonglong)uVar12 * 4) == uVar3) goto LAB_14829c1bf;
          }
        }
        uVar12 = 0xffffffff;
LAB_14829c1bf:
        *(uint *)((longlong)&local_58 + lVar9 * 4) = uVar12;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      FUN_14828d812(pfVar7,&local_58,0,0xffffffff);
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_b8);
  }
  if (*pfVar7 <= 1.1920929e-07) {
    FUN_1482992e6(pfVar7);
  }
  else {
    FUN_1482996f2(pfVar7);
  }
  FUN_14829c29a(pfVar7);
  FUN_14829c4c0(pfVar7 + 0x48);
  FUN_14829b7b2(&local_a0);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return pfVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829c260 FUN_14829c260 body=58 status=ok
// SIG undefined FUN_14829c260(void)

void FUN_14829c260(longlong param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    FUN_14829cb5c(param_1 + 0xd0);
  }
  FUN_14829cd98(param_1 + 0x138);
  FUN_14829d47a(param_1 + 0x1e8);
  return;
}



// FUNCTION 14829c29a FUN_14829c29a body=548 status=ok
// SIG undefined FUN_14829c29a(void)

void FUN_14829c29a(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = *(uint *)(param_1 + 0x4c);
  uVar11 = (ulonglong)uVar8;
  iVar9 = *(int *)(param_1 + 100);
  plVar1 = (longlong *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x114) = uVar8;
  if (*(uint *)(param_1 + 0x118) < uVar8) {
    FUN_148298f1a(plVar1,uVar11);
  }
  local_68 = param_1 + 0xf0;
  if (*(uint *)(param_1 + 0x100) < (uint)(longlong)((float)uVar11 * 0.1)) {
    FUN_148298f1a(local_68);
  }
  *(int *)(param_1 + 0xd0) = iVar9;
  uVar8 = iVar9 + 0x1fU >> 5;
  *(uint *)(param_1 + 0xe4) = uVar8;
  if (*(uint *)(param_1 + 0xe8) < uVar8) {
    FUN_148298f1a(param_1 + 0xd8);
  }
  if ((*(void **)(param_1 + 0xd8) != (void *)0x0) && (*(int *)(param_1 + 0xe4) != 0)) {
    memset(*(void **)(param_1 + 0xd8),0,
           (ulonglong)(uint)(*(int *)(param_1 + 0xe4) * *(int *)(param_1 + 0xe0)));
  }
  if (uVar11 != 0) {
    uVar5 = 0;
    do {
      *(undefined4 *)(*plVar1 + uVar5 * 4) = 0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar11 != uVar5);
  }
  local_58 = plVar1;
  if (2 < *(uint *)(param_1 + 0x4c)) {
    local_60 = (ulonglong)*(uint *)(param_1 + 0x4c) / 3;
    iVar9 = 0;
    lVar7 = 0;
    uVar11 = 0;
    do {
      if (((*(byte *)(param_1 + 4) & 1) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x10) + uVar11) == '\0')) {
        lVar10 = 1;
        do {
          local_4c = (int)lVar10 + iVar9 + -1;
          uVar8 = *(uint *)(*(longlong *)(param_1 + 0x40) + lVar7 + -4 + lVar10 * 4);
          lVar6 = lVar10;
          if (lVar10 == 3) {
            lVar6 = 0;
          }
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + lVar6 * 4 + uVar11 * 0xc);
          iVar4 = FUN_14829b5b8(param_1,uVar3,uVar8);
          if (iVar4 == -1) {
            FUN_148298fa0(local_68,&local_4c);
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar8 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar8 & 0x1f);
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar3 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
          }
          else {
            *(int *)(*local_58 + lVar7 + -4 + lVar10 * 4) = iVar4;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
      }
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0xc;
      iVar9 = iVar9 + 3;
    } while (uVar11 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829c4c0 FUN_14829c4c0 body=155 status=ok
// SIG undefined FUN_14829c4c0(void)

void FUN_14829c4c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x18),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}



// FUNCTION 14829c55c FUN_14829c55c body=1000 status=ok
// SIG undefined FUN_14829c55c(void)

void FUN_14829c55c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar12 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x4c);
  plVar1 = (longlong *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x44) = uVar12;
  if (*(uint *)(param_1 + 0x48) < uVar12) {
    FUN_148298f1a(plVar1,uVar12);
  }
  *(uint *)(param_1 + 0x5c) = uVar12;
  if (*(uint *)(param_1 + 0x60) < uVar12) {
    FUN_148298f1a(param_1 + 0x50,uVar12);
  }
  *(uint *)(param_1 + 0x74) = uVar12 / 3;
  uVar5 = uVar12 / 3;
  if (*(uint *)(param_1 + 0x78) < uVar12 / 3) {
    FUN_148298f1a(param_1 + 0x68,uVar5);
  }
  uVar11 = uVar12 / 3;
  if ((*(char *)(param_1 + 0x2c) == '\x01') &&
     (*(uint *)(param_1 + 0x8c) = uVar5, *(uint *)(param_1 + 0x90) < uVar11)) {
    FUN_148298f1a(param_1 + 0x80,uVar11);
  }
  *(uint *)(param_1 + 0xa4) = uVar11;
  if (*(uint *)(param_1 + 0xa8) < uVar11) {
    FUN_148298f1a((longlong *)(param_1 + 0x98),uVar5);
  }
  *(uint *)(param_1 + 0xb0) = uVar5;
  uVar5 = uVar12 / 3 + 0x1f >> 5;
  *(uint *)(param_1 + 0xc4) = uVar5;
  if (*(uint *)(param_1 + 200) < uVar5) {
    FUN_148298f1a(param_1 + 0xb8);
  }
  if ((*(void **)(param_1 + 0xb8) != (void *)0x0) && (*(int *)(param_1 + 0xc4) != 0)) {
    memset(*(void **)(param_1 + 0xb8),0,
           (ulonglong)(uint)(*(int *)(param_1 + 0xc4) * *(int *)(param_1 + 0xc0)));
  }
  if (2 < uVar12) {
    local_88 = (ulonglong)uVar11;
    uVar12 = 0;
    lVar10 = 0;
    uVar14 = 0;
    do {
      local_80 = uVar14 * 3;
      lVar4 = 0;
      uVar5 = uVar12;
      do {
        iVar7 = uVar12 + (uVar5 / 3) * -3;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x40);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x58);
        uVar6 = (ulonglong)*(uint *)(lVar9 + lVar10 + lVar4 * 4);
        iVar3 = (int)lVar4;
        iVar13 = iVar3 + iVar7;
        iVar7 = iVar7 + iVar3 + 1;
        if (iVar13 == 2) {
          iVar7 = 0;
        }
        uVar15 = (ulonglong)*(uint *)(lVar9 + (ulonglong)(iVar7 + ((uVar12 + iVar3) - iVar13)) * 4);
        fVar16 = *(float *)(lVar2 + 8 + uVar15 * 0xc) - *(float *)(lVar2 + 8 + uVar6 * 0xc);
        fVar19 = *(float *)(lVar2 + 4 + uVar15 * 0xc) - *(float *)(lVar2 + 4 + uVar6 * 0xc);
        fVar18 = *(float *)(lVar2 + uVar15 * 0xc) - *(float *)(lVar2 + uVar6 * 0xc);
        *(float *)(*(longlong *)(param_1 + 0x50) + lVar10 + lVar4 * 4) =
             SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19);
        lVar4 = lVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (lVar4 != 3);
      local_78 = uVar14;
      uVar17 = FUN_14829c946(*(undefined8 *)(param_1 + 0x30),uVar14 & 0xffffffff);
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + uVar14 * 4) = uVar17;
      if (*(char *)(param_1 + 0x2c) != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x40);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x88);
        uVar15 = (ulonglong)*(uint *)(lVar4 + local_80 * 4);
        uVar8 = (ulonglong)*(uint *)(lVar4 + 4 + local_80 * 4);
        uVar6 = (ulonglong)*(uint *)(lVar4 + 8 + local_80 * 4);
        fVar16 = *(float *)(lVar9 + uVar6 * 8);
        fVar18 = *(float *)(lVar9 + 4 + uVar6 * 8);
        *(float *)(*(longlong *)(param_1 + 0x80) + uVar14 * 4) =
             ((*(float *)(lVar9 + 4 + uVar8 * 8) - fVar18) *
              (*(float *)(lVar9 + uVar15 * 8) - fVar16) -
             (*(float *)(lVar9 + uVar8 * 8) - fVar16) *
             (*(float *)(lVar9 + 4 + uVar15 * 8) - fVar18)) * 0.5;
      }
      FUN_14829ca22(*(undefined8 *)(param_1 + 0x30),&local_6c);
      lVar4 = *(longlong *)(param_1 + 0x98);
      *(undefined4 *)(lVar4 + 8 + local_80 * 4) = local_64;
      *(undefined8 *)(lVar4 + local_80 * 4) = local_6c;
      uVar14 = uVar14 + 1;
      lVar10 = lVar10 + 0xc;
      uVar12 = uVar12 + 3;
    } while (uVar14 != local_88);
    lVar10 = 0;
    uVar14 = 0;
    do {
      lVar9 = 3;
      lVar4 = lVar10;
      do {
        uVar6 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x108) + lVar4);
        fVar16 = 3.4028235e+38;
        if (uVar6 != 0xffffffff) {
          uVar15 = uVar6 / 3;
          lVar2 = *(longlong *)(param_1 + 0x98);
          fVar16 = *(float *)(lVar2 + 8 + uVar14 * 0xc) * *(float *)(lVar2 + 8 + uVar15 * 0xc) +
                   *(float *)(lVar2 + uVar14 * 0xc) * *(float *)(lVar2 + uVar15 * 0xc) +
                   *(float *)(lVar2 + 4 + uVar14 * 0xc) * *(float *)(lVar2 + 4 + uVar15 * 0xc);
          *(float *)(*plVar1 + uVar6 * 4) = fVar16;
        }
        *(float *)(*plVar1 + lVar4) = fVar16;
        lVar4 = lVar4 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar14 = uVar14 + 1;
      lVar10 = lVar10 + 0xc;
    } while (uVar14 != local_88);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829c946 FUN_14829c946 body=220 status=ok
// SIG undefined FUN_14829c946(void)

float FUN_14829c946(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar3 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(uint)(param_2 * 3) * 4);
  uVar5 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(param_2 * 3 + 1) * 4);
  uVar4 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(param_2 * 3 + 2) * 4);
  fVar11 = *(float *)(lVar2 + 8 + uVar3 * 0xc);
  fVar8 = *(float *)(lVar2 + 8 + uVar4 * 0xc) - fVar11;
  fVar6 = *(float *)(lVar2 + uVar3 * 0xc);
  fVar12 = *(float *)(lVar2 + 4 + uVar3 * 0xc);
  fVar10 = *(float *)(lVar2 + 4 + uVar4 * 0xc) - fVar12;
  fVar9 = *(float *)(lVar2 + uVar4 * 0xc) - fVar6;
  fVar11 = *(float *)(lVar2 + 8 + uVar5 * 0xc) - fVar11;
  fVar12 = *(float *)(lVar2 + 4 + uVar5 * 0xc) - fVar12;
  fVar6 = *(float *)(lVar2 + uVar5 * 0xc) - fVar6;
  fVar7 = fVar6 * fVar10 - fVar9 * fVar12;
  fVar6 = fVar11 * fVar9 - fVar8 * fVar6;
  fVar11 = fVar12 * fVar8 - fVar11 * fVar10;
  return SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar6 * fVar6) * 0.5;
}



// FUNCTION 14829ca22 FUN_14829ca22 body=314 status=ok
// SIG undefined FUN_14829ca22(void)

void FUN_14829ca22(longlong param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar3 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(uint)(param_3 * 3) * 4);
  uVar5 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(param_3 * 3 + 1) * 4);
  uVar4 = (ulonglong)*(uint *)(lVar1 + (ulonglong)(param_3 * 3 + 2) * 4);
  fVar10 = *(float *)(lVar2 + 8 + uVar3 * 0xc);
  fVar9 = *(float *)(lVar2 + 8 + uVar4 * 0xc) - fVar10;
  fVar11 = *(float *)(lVar2 + uVar3 * 0xc);
  fVar12 = *(float *)(lVar2 + 4 + uVar3 * 0xc);
  fVar8 = *(float *)(lVar2 + 4 + uVar4 * 0xc) - fVar12;
  fVar6 = *(float *)(lVar2 + uVar4 * 0xc) - fVar11;
  fVar10 = *(float *)(lVar2 + 8 + uVar5 * 0xc) - fVar10;
  fVar12 = *(float *)(lVar2 + 4 + uVar5 * 0xc) - fVar12;
  fVar11 = *(float *)(lVar2 + uVar5 * 0xc) - fVar11;
  fVar7 = fVar6 * fVar12 - fVar11 * fVar8;
  fVar6 = fVar9 * fVar11 - fVar10 * fVar6;
  fVar11 = fVar8 * fVar10 - fVar12 * fVar9;
  fVar9 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar6 * fVar6);
  fVar12 = 0.0;
  fVar10 = 1.0;
  fVar8 = 1.0 / fVar9;
  if (0.0 < fVar9) {
    fVar10 = fVar7 * fVar8;
    fVar12 = fVar6 * fVar8;
  }
  *param_2 = -(uint)(0.0 < fVar9) & (uint)(fVar11 * fVar8);
  param_2[1] = (uint)fVar12;
  param_2[2] = (uint)fVar10;
  return;
}



// FUNCTION 14829cb5c FUN_14829cb5c body=570 status=ok
// SIG undefined FUN_14829cb5c(void)

void FUN_14829cb5c(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  uVar7 = *(uint *)(*(longlong *)(*param_1 + 0x30) + 0x4c);
  local_74 = 0;
  if (uVar7 < 3) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    do {
      if (((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(local_74 >> 5) * 4) >>
            (local_74 & 0x1f) & 1) == 0) &&
         (1.1920929e-07 < ABS(*(float *)(*(longlong *)(*param_1 + 0x80) + (ulonglong)local_74 * 4)))
         ) {
        local_7c = *(undefined4 *)((longlong)param_1 + 0x44);
        local_78 = 1;
        FUN_148298fa0(param_1 + 7,&local_74);
        puVar1 = (uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(local_74 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)local_74 & 0x1f);
        FUN_14829d688(param_1,&local_7c);
        FUN_148298fa0(param_1 + 1,&local_7c);
      }
      local_74 = local_74 + 1;
    } while (local_74 < uVar7 / 3);
    uVar7 = *(uint *)((longlong)param_1 + 0x14);
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    if (*(uint *)(param_1 + 6) < uVar7) {
      FUN_148298f1a();
      uVar7 = *(uint *)((longlong)param_1 + 0x14);
    }
    if (uVar7 != 0) {
      uVar11 = 0;
      do {
        lVar3 = param_1[1];
        uVar7 = *(int *)(lVar3 + 4 + uVar11 * 8) * 3;
        *(uint *)((longlong)param_1 + 0x5c) = uVar7;
        if (*(uint *)(param_1 + 0xc) < uVar7) {
          FUN_148298f1a();
        }
        if (*(int *)(lVar3 + 4 + uVar11 * 8) != 0) {
          iVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = *(int *)(param_1[7] + (ulonglong)(*(int *)(lVar3 + uVar11 * 8) + uVar7) * 4);
            lVar8 = 0;
            do {
              lVar4 = param_1[10];
              lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x58);
              uVar9 = (ulonglong)
                      *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x40) +
                               (ulonglong)(uint)(iVar2 * 3 + (int)lVar8) * 4);
              uVar10 = (ulonglong)(uint)(iVar6 + (int)lVar8);
              *(undefined4 *)(lVar4 + 8 + uVar10 * 0xc) = *(undefined4 *)(lVar5 + 8 + uVar9 * 0xc);
              *(undefined8 *)(lVar4 + uVar10 * 0xc) = *(undefined8 *)(lVar5 + uVar9 * 0xc);
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 3;
          } while (uVar7 < *(uint *)(lVar3 + 4 + uVar11 * 8));
        }
        local_90 = param_1[10];
        local_88 = *(undefined4 *)((longlong)param_1 + 0x5c);
        FUN_14829d964(&local_90,uVar11 * 0x24 + param_1[4]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)((longlong)param_1 + 0x14));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829cd98 FUN_14829cd98 body=1761 status=ok
// SIG undefined FUN_14829cd98(void)

void FUN_14829cd98(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  uint local_ac;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar10 = *(uint *)(*(longlong *)(*param_1 + 0x30) + 0x4c);
  uVar12 = (ulonglong)uVar10;
  uVar20 = uVar12 / 3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  plVar1 = param_1 + 4;
  *(uint *)((longlong)param_1 + 0x2c) = uVar10 / 3;
  local_e8 = param_1;
  if (*(uint *)(param_1 + 6) < uVar10 / 3) {
    FUN_148298f1a();
  }
  plVar2 = local_e8 + 7;
  *(uint *)((longlong)local_e8 + 0x44) = uVar10 / 3;
  uVar11 = uVar10 / 3;
  if (*(uint *)(local_e8 + 9) < uVar11) {
    FUN_148298f1a();
  }
  if (uVar10 < 3) {
    local_a8 = 0;
    plVar18 = local_e8 + 10;
    piVar15 = (int *)((longlong)local_e8 + 0x5c);
    *(undefined4 *)((longlong)local_e8 + 0x5c) = 0;
    uVar10 = 0;
    plVar19 = local_e8;
  }
  else {
    local_c0 = local_e8 + 1;
    uVar13 = 0;
    do {
      *(int *)(*plVar1 + uVar13 * 4) = (int)uVar13;
      *(undefined4 *)(*plVar2 + uVar13 * 4) = 0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
    local_a8 = 0;
    local_a0 = 4;
    local_98 = 0;
    uVar14 = 0x10;
    if (uVar11 < 0x10) {
      uVar14 = uVar10 / 3;
    }
    FUN_148298f1a(&local_a8,uVar14);
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_b8 = 0;
    uVar13 = 0;
    plVar19 = local_e8;
    do {
      uVar10 = (uint)uVar13;
      if ((*(uint *)(*plVar1 + uVar13 * 4) == uVar10) &&
         ((*(uint *)(*(longlong *)(*plVar19 + 0xb8) + (uVar13 >> 5) * 4) >> (uVar10 & 0x1f) & 1) ==
          0)) {
        local_a0 = local_a0 & 0xffffffff;
        local_d0 = uVar12;
        local_c8 = uVar20;
        FUN_148298fa0(&local_a8,&local_b8);
        plVar19 = local_e8;
        while (local_a0._4_4_ != 0) {
          uVar11 = local_a0._4_4_ - 1;
          uVar10 = *(uint *)(local_a8 + (ulonglong)uVar11 * 4);
          *(uint *)(*plVar2 + (ulonglong)uVar10 * 4) = (uint)local_e0;
          local_a0 = CONCAT44(uVar11,(undefined4)local_a0);
          if (local_98 < uVar11) {
            uVar14 = uVar11 >> 2;
            if (local_98 == 0) {
              uVar14 = 0;
            }
            FUN_148298f1a(&local_a8,uVar14 + uVar11);
            plVar19 = local_e8;
          }
          lVar16 = *(longlong *)(*plVar19 + 0x30);
          iVar17 = 0;
          local_d8 = (ulonglong)uVar10;
          do {
            uVar12 = (ulonglong)(uVar10 * 3 + iVar17);
            lVar8 = *(longlong *)(lVar16 + 0x108);
            uVar11 = *(uint *)(lVar8 + uVar12 * 4);
            local_ac = uVar11 / 3;
            if (uVar11 == 0xffffffff) {
              local_ac = 0xffffffff;
            }
            if (*(int *)(lVar8 + uVar12 * 4) != -1) {
              lVar8 = *plVar1;
              uVar12 = (ulonglong)local_ac;
              if ((*(uint *)(lVar8 + uVar12 * 4) == local_ac) &&
                 ((*(uint *)(*(longlong *)(*plVar19 + 0xb8) + (ulonglong)(local_ac >> 5) * 4) >>
                   (local_ac & 0x1f) & 1) == 0)) {
                lVar9 = *(longlong *)(*plVar19 + 0x98);
                fVar21 = *(float *)(lVar9 + 8 + local_d8 * 0xc) *
                         *(float *)(lVar9 + 8 + uVar12 * 0xc) +
                         *(float *)(lVar9 + local_d8 * 0xc) * *(float *)(lVar9 + uVar12 * 0xc) +
                         *(float *)(lVar9 + 4 + local_d8 * 0xc) *
                         *(float *)(lVar9 + 4 + uVar12 * 0xc);
                fVar22 = ABS(fVar21);
                if (fVar22 <= 1.0) {
                  fVar22 = 1.0;
                }
                if (ABS(fVar21 + -1.0) <= fVar22 * 0.0001) {
                  uVar7 = *(undefined4 *)(lVar8 + local_d8 * 4);
                  *(uint *)(lVar8 + local_d8 * 4) = local_ac;
                  *(undefined4 *)(*plVar1 + (ulonglong)local_ac * 4) = uVar7;
                  *(uint *)(*plVar2 + (ulonglong)local_ac * 4) = (uint)local_e0;
                  FUN_148298fa0(&local_a8,&local_ac);
                  plVar19 = local_e8;
                }
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 3);
        }
        FUN_148298fa0(local_c0);
        local_e0 = (longlong *)CONCAT44(local_e0._4_4_,(uint)local_e0 + 1);
        uVar12 = local_d0;
        plVar19 = local_e8;
        uVar20 = local_c8;
        uVar10 = local_b8;
      }
      local_b8 = uVar10 + 1;
      uVar13 = (ulonglong)local_b8;
    } while (local_b8 < (uint)uVar20);
    plVar18 = plVar19 + 10;
    piVar15 = (int *)((longlong)plVar19 + 0x5c);
    uVar10 = (uint)local_e0;
    *(uint *)((longlong)plVar19 + 0x5c) = (uint)local_e0;
    if (*(uint *)(plVar19 + 0xc) < (uint)local_e0) {
      FUN_148298f1a(plVar18);
      plVar19 = local_e8;
    }
  }
  if (((void *)*plVar18 != (void *)0x0) && (*piVar15 != 0)) {
    memset((void *)*plVar18,0,(ulonglong)(uint)(*piVar15 * (int)plVar19[0xb]));
    plVar19 = local_e8;
  }
  if (2 < (uint)uVar12) {
    uVar12 = 0;
    do {
      uVar13 = (ulonglong)*(uint *)(*plVar2 + uVar12 * 4);
      if (uVar13 != 0xffffffff) {
        *(float *)(plVar19[10] + uVar13 * 4) =
             *(float *)(*(longlong *)(*plVar19 + 0x68) + uVar12 * 4) +
             *(float *)(plVar19[10] + uVar13 * 4);
      }
      uVar12 = uVar12 + 1;
    } while ((uVar20 & 0xffffffff) != uVar12);
  }
  *(undefined4 *)((longlong)plVar19 + 0x74) = 0;
  *(undefined4 *)((longlong)plVar19 + 0x8c) = 0;
  if (uVar10 == 0) {
    *(undefined4 *)((longlong)plVar19 + 0xa4) = 0;
  }
  else {
    local_e0 = plVar19 + 0xd;
    local_d8 = (ulonglong)uVar10;
    uVar12 = 0;
    plVar18 = plVar19;
    do {
      uVar10 = *(uint *)(plVar18[1] + uVar12 * 4);
      local_ac = uVar10;
      do {
        iVar17 = 0;
        do {
          uVar20 = (ulonglong)(local_ac * 3 + iVar17);
          uVar11 = *(uint *)(*(longlong *)(*(longlong *)(*plVar18 + 0x30) + 0x108) + uVar20 * 4);
          if ((((uVar11 != 0xffffffff) &&
               (uVar12 != *(uint *)(*plVar2 + ((ulonglong)uVar11 / 3) * 4))) &&
              (fVar21 = *(float *)(*(longlong *)(*plVar18 + 0x38) + uVar20 * 4), 0.0 < fVar21)) &&
             (fVar21 < 3.4028235e+38)) goto LAB_14829cfec;
          iVar17 = iVar17 + 1;
        } while (iVar17 != 3);
        local_ac = *(uint *)(*plVar1 + (ulonglong)local_ac * 4);
      } while (local_ac != uVar10);
      local_b8 = *(uint *)((longlong)local_e8 + 0x8c);
      iStack_b4 = 0;
      local_ac = uVar10;
      do {
        puVar3 = (uint *)(*(longlong *)(*local_e8 + 0xb8) + (ulonglong)(local_ac >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)local_ac & 0x1f);
        FUN_148298fa0(plVar19 + 0x10,&local_ac);
        iStack_b4 = iStack_b4 + 1;
        local_ac = *(uint *)(local_e8[4] + (ulonglong)local_ac * 4);
      } while (local_ac != uVar10);
      FUN_148298fa0(local_e0,&local_b8);
LAB_14829cfec:
      uVar12 = uVar12 + 1;
      plVar18 = local_e8;
    } while (uVar12 != local_d8);
    uVar10 = *(uint *)((longlong)local_e8 + 0x74);
    *(uint *)((longlong)local_e8 + 0xa4) = uVar10;
    if (*(uint *)(local_e8 + 0x15) < uVar10) {
      FUN_148298f1a(local_e8 + 0x13);
      uVar10 = *(uint *)((longlong)local_e8 + 0x74);
    }
    if (uVar10 != 0) {
      lVar16 = 0x18;
      uVar12 = 0;
      do {
        uVar20 = (ulonglong)
                 *(uint *)(local_e8[0x10] + (ulonglong)*(uint *)(local_e8[0xd] + uVar12 * 8) * 4);
        lVar8 = local_e8[0x13];
        lVar9 = *(longlong *)(*local_e8 + 0x98);
        *(undefined4 *)(lVar8 + 8 + lVar16) = *(undefined4 *)(lVar9 + 8 + uVar20 * 0xc);
        *(undefined8 *)(lVar8 + lVar16) = *(undefined8 *)(lVar9 + uVar20 * 0xc);
        FUN_14829900c(&local_b8,lVar8 + lVar16);
        *(undefined4 *)(lVar8 + -0x10 + lVar16) = local_b0;
        *(ulonglong *)(lVar8 + -0x18 + lVar16) = CONCAT44(iStack_b4,local_b8);
        fVar21 = *(float *)(lVar8 + -0x18 + lVar16);
        fVar22 = *(float *)(lVar8 + -0x14 + lVar16);
        fVar4 = *(float *)(lVar8 + 4 + lVar16);
        fVar5 = *(float *)(lVar8 + 8 + lVar16);
        fVar6 = *(float *)(lVar8 + -0x10 + lVar16);
        *(float *)(lVar8 + -0xc + lVar16) = fVar4 * fVar6 - fVar22 * fVar5;
        *(float *)(lVar8 + -8 + lVar16) = fVar21 * fVar5 - *(float *)(lVar8 + lVar16) * fVar6;
        *(float *)(lVar8 + -4 + lVar16) = *(float *)(lVar8 + lVar16) * fVar22 - fVar21 * fVar4;
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 0x24;
      } while (uVar12 < *(uint *)((longlong)local_e8 + 0x74));
    }
  }
  if (local_a8 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_a8,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829d47a FUN_14829d47a body=525 status=ok
// SIG undefined FUN_14829d47a(void)

void FUN_14829d47a(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0x30) + 0x4c);
  uVar5 = uVar2 / 3;
  *(undefined4 *)(param_1 + 5) = 0;
  if (2 < uVar2) {
    iVar6 = 0;
    uVar8 = 0;
    do {
      if ((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (uVar8 >> 5) * 4) >> ((uint)uVar8 & 0x1f) & 1)
          == 0) {
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + 5) = iVar6;
      }
      uVar7 = (uint)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar5 != uVar7);
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x54);
  if ((ulonglong)uVar7 != 0) {
    uVar8 = 0;
    do {
      FUN_14829e7ac(*(undefined8 *)(param_1[9] + uVar8 * 8));
      lVar3 = *(longlong *)(param_1[9] + uVar8 * 8);
      if (lVar3 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar3,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(uint *)((longlong)param_1 + 0x3c) = uVar5;
  if (*(uint *)(param_1 + 8) < uVar2 / 3) {
    FUN_148298f1a(param_1 + 6,uVar2 / 3);
    uVar5 = *(uint *)((longlong)param_1 + 0x3c);
  }
  if (uVar5 != 0) {
    lVar3 = param_1[6];
    uVar8 = 0;
    do {
      *(undefined4 *)(lVar3 + uVar8 * 4) = 0xffffffff;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((longlong)param_1 + 0x3c));
  }
  uVar2 = (uVar2 / 3) * 3;
  *(uint *)((longlong)param_1 + 0x1c) = uVar2;
  if (*(uint *)(param_1 + 4) < uVar2) {
    FUN_148298f1a(param_1 + 2);
  }
  if ((int)param_1[5] != 0) {
    fVar1 = *(float *)(*param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x32) = 1;
    do {
      FUN_14829f0b2(param_1,fVar1 * 0.5);
    } while ((int)param_1[5] != 0);
    *(undefined1 *)(param_1 + 0x32) = 0;
    if (*(int *)(*param_1 + 0x28) != 0) {
      uVar2 = *(uint *)((longlong)param_1 + 0x54);
      if ((ulonglong)uVar2 != 0) {
        uVar8 = 0;
        do {
          FUN_1482a15fc(param_1,*(undefined8 *)(param_1[9] + uVar8 * 8));
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      }
      iVar6 = 0;
      do {
        FUN_14829e82e(param_1);
        FUN_14829e93a(param_1,*(undefined4 *)(*param_1 + 0x24));
        fVar1 = *(float *)(*param_1 + 0x24);
        while ((int)param_1[5] != 0) {
          FUN_14829f0b2(param_1,fVar1 * 0.5);
        }
        FUN_14829eb08(param_1);
        iVar6 = iVar6 + 1;
        if (iVar6 == *(int *)(*param_1 + 0x28)) {
          return;
        }
        uVar2 = *(uint *)((longlong)param_1 + 0x54);
        if ((ulonglong)uVar2 == 0) {
          return;
        }
        uVar8 = 0;
        bVar9 = 0;
        do {
          bVar4 = FUN_1482a15fc(param_1,*(undefined8 *)(param_1[9] + uVar8 * 8));
          bVar9 = bVar9 | bVar4;
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
      } while ((bVar9 & 1) != 0);
    }
  }
  return;
}



// FUNCTION 14829d688 FUN_14829d688 body=731 status=ok
// SIG undefined FUN_14829d688(void)

void FUN_14829d688(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_e8 [36];
  uint local_c4;
  uint *local_c0;
  uint local_b8;
  uint local_b4;
  longlong *local_b0;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_1 + 7;
  fVar2 = *(float *)(*(longlong *)(*param_1 + 0x80) +
                    (ulonglong)*(uint *)(param_1[7] + (ulonglong)*param_2 * 4) * 4);
  local_c0 = param_2;
  do {
    local_b8 = local_c0[1];
    if (local_b8 == 0) break;
    local_c4 = 0;
    uVar13 = 0;
    do {
      lVar5 = *(longlong *)(*param_1 + 0x30);
      iVar10 = *(int *)(param_1[7] + (ulonglong)(*local_c0 + uVar13) * 4) * 3;
      lVar15 = 0;
      local_b4 = uVar13;
      do {
        iVar12 = (int)lVar15;
        lVar6 = *(longlong *)(lVar5 + 0x108);
        uVar13 = *(uint *)(lVar6 + (ulonglong)(uint)(iVar10 + iVar12) * 4);
        local_a4 = uVar13 / 3;
        if (uVar13 == 0xffffffff) {
          local_a4 = 0xffffffff;
        }
        else {
          lVar7 = *param_1;
          if ((((*(uint *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)(local_a4 >> 5) * 4) >>
                 (uVar13 / 3 & 0x1f) & 1) == 0) &&
              (fVar3 = *(float *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)(uVar13 / 3) * 4),
              1.1920929e-07 < ABS(fVar3))) && (fVar3 < 0.0 != 0.0 <= fVar2)) {
            puVar8 = *(undefined4 **)(lVar7 + 0x30);
            lVar7 = *(longlong *)(lVar5 + 0x40);
            lVar9 = *(longlong *)(puVar8 + 0x22);
            uVar13 = *(uint *)(lVar6 + (ulonglong)(uint)(iVar10 + iVar12) * 4);
            lVar6 = *(longlong *)(puVar8 + 0x10);
            iVar14 = uVar13 % 3 + 1;
            if (iVar14 == 3) {
              iVar14 = 0;
            }
            uVar4 = *puVar8;
            cVar11 = FUN_143afd844(lVar9 + (ulonglong)
                                           *(uint *)(lVar7 + (ulonglong)(uint)(iVar10 + iVar12) * 4)
                                           * 8,
                                   (ulonglong)
                                   *(uint *)(lVar6 + (ulonglong)(iVar14 + (uVar13 / 3) * 3) * 4) * 8
                                   + lVar9,uVar4);
            if (cVar11 != '\0') {
              iVar12 = iVar12 + 1;
              if (lVar15 == 2) {
                iVar12 = 0;
              }
              cVar11 = FUN_143afd844((ulonglong)
                                     *(uint *)(lVar7 + (ulonglong)(uint)(iVar12 + iVar10) * 4) * 8 +
                                     lVar9,(ulonglong)*(uint *)(lVar6 + (ulonglong)uVar13 * 4) * 8 +
                                           lVar9,uVar4);
              if (cVar11 != '\0') {
                FUN_148298fa0(local_b0,&local_a4);
                local_c0[1] = local_c0[1] + 1;
                uVar13 = 1 << ((byte)local_a4 & 0x1f);
                puVar1 = (uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(local_a4 >> 5) * 4);
                *puVar1 = *puVar1 | uVar13;
                local_c4 = (uint)CONCAT71((uint7)(uint3)(uVar13 >> 8),1);
              }
            }
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      uVar13 = local_b4 + 1;
    } while (uVar13 != local_b8);
  } while ((local_c4 & 1) != 0);
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829d964 FUN_14829d964 body=232 status=ok
// SIG undefined FUN_14829d964(void)

undefined8 FUN_14829d964(undefined4 *param_1,float *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_54;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  cVar1 = FUN_14829da4e(&local_48,param_2 + 6);
  if (cVar1 == '\0') {
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    uVar2 = FUN_14829de66(&local_68,param_2);
  }
  else {
    FUN_14829900c(&local_54,param_2 + 6);
    param_2[2] = local_4c;
    *(undefined8 *)param_2 = local_54;
    param_2[3] = param_2[7] * param_2[2] - param_2[1] * param_2[8];
    param_2[4] = *param_2 * param_2[8] - param_2[6] * param_2[2];
    param_2[5] = param_2[6] * param_2[1] - *param_2 * param_2[7];
    uVar2 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829da4e FUN_14829da4e body=1048 status=ok
// SIG undefined FUN_14829da4e(void)

bool FUN_14829da4e(longlong *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
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
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar4 == 3) {
    pfVar1 = (float *)*param_1;
    fVar9 = pfVar1[5] - pfVar1[2];
    fVar10 = pfVar1[4] - pfVar1[1];
    fVar11 = pfVar1[3] - *pfVar1;
    fVar12 = pfVar1[8] - pfVar1[2];
    fVar8 = pfVar1[7] - pfVar1[1];
    fVar6 = pfVar1[6] - *pfVar1;
    fVar7 = fVar6 * fVar10 - fVar11 * fVar8;
    fVar11 = fVar12 * fVar11 - fVar9 * fVar6;
    fVar6 = fVar8 * fVar9 - fVar12 * fVar10;
    fVar8 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar11 * fVar11);
    *param_2 = fVar8 * fVar6;
    param_2[1] = fVar11 * fVar8;
    param_2[2] = fVar7 * fVar8;
    bVar3 = true;
  }
  else {
    fVar10 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    if (uVar4 != 0) {
      fVar12 = 1.0 / (float)uVar4;
      lVar2 = *param_1;
      fVar13 = 0.0;
      lVar5 = 0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      do {
        fVar15 = fVar15 + *(float *)(lVar2 + lVar5);
        fVar14 = fVar14 + *(float *)(lVar2 + 4 + lVar5);
        fVar13 = fVar13 + *(float *)(lVar2 + 8 + lVar5);
        lVar5 = lVar5 + 0xc;
      } while (uVar4 * 0xc != lVar5);
      fVar11 = 0.0;
      lVar5 = 0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar7 = 0.0;
      fVar6 = 0.0;
      fVar10 = 0.0;
      do {
        fVar16 = *(float *)(lVar2 + 8 + lVar5) - fVar13 * fVar12;
        fVar17 = *(float *)(lVar2 + lVar5) - fVar15 * fVar12;
        fVar18 = *(float *)(lVar2 + 4 + lVar5) - fVar14 * fVar12;
        fVar10 = fVar10 + fVar17 * fVar17;
        fVar6 = fVar6 + fVar17 * fVar18;
        fVar7 = fVar7 + fVar17 * fVar16;
        fVar9 = fVar9 + fVar18 * fVar18;
        fVar8 = fVar8 + fVar18 * fVar16;
        fVar11 = fVar11 + fVar16 * fVar16;
        lVar5 = lVar5 + 0xc;
      } while (uVar4 * 0xc != lVar5);
    }
    fVar15 = fVar9 * fVar11 - fVar8 * fVar8;
    fVar14 = fVar10 * fVar11 - fVar7 * fVar7;
    fVar13 = fVar10 * fVar9 - fVar6 * fVar6;
    fVar12 = fVar14;
    if (fVar14 <= fVar13) {
      fVar12 = fVar13;
    }
    fVar16 = fVar15;
    if (fVar15 <= fVar12) {
      fVar16 = fVar12;
    }
    if (0.0 < fVar16) {
      if ((fVar16 != fVar15) || (NAN(fVar16) || NAN(fVar15))) {
        if ((fVar16 != fVar14) || (NAN(fVar16) || NAN(fVar14))) {
          if ((fVar16 != fVar13) || (NAN(fVar16) || NAN(fVar13))) {
            fVar15 = 0.0;
            fVar14 = 0.0;
            fVar13 = 0.0;
          }
          else {
            fVar14 = fVar7 * fVar6 + fVar10 * -fVar8;
            fVar15 = fVar8 * fVar6 + fVar9 * -fVar7;
          }
        }
        else {
          fVar13 = fVar6 * fVar7 + fVar10 * -fVar8;
          fVar15 = fVar8 * fVar7 + fVar11 * -fVar6;
        }
      }
      else {
        fVar13 = fVar6 * fVar8 + fVar9 * -fVar7;
        fVar14 = fVar7 * fVar8 + fVar11 * -fVar6;
      }
      fVar6 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14);
      if (0.0001 < ABS(fVar6)) {
        fVar6 = 1.0 / fVar6;
        fVar13 = fVar13 * fVar6;
        fVar14 = fVar14 * fVar6;
        fVar15 = fVar15 * fVar6;
        *param_2 = fVar15;
        param_2[1] = fVar14;
        param_2[2] = fVar13;
        fVar6 = SQRT(fVar13 * fVar13 + fVar15 * fVar15 + fVar14 * fVar14);
        fVar7 = ABS(fVar6);
        if (fVar7 <= 1.0) {
          fVar7 = 1.0;
        }
        return ABS(fVar6 + -1.0) <= fVar7 * 0.001;
      }
    }
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 14829de66 FUN_14829de66 body=436 status=ok
// SIG undefined FUN_14829de66(void)

undefined8 FUN_14829de66(undefined4 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44 [12];
  float local_38 [3];
  float local_2c;
  float local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  FUN_14829e01c(&local_68,&local_78,local_38);
  if ((local_38[0] == 0.0) && (!NAN(local_38[0]))) {
    if ((local_2c == 0.0) && (!NAN(local_2c))) {
      if ((local_24 == 0.0) && (!NAN(local_24))) {
        uVar1 = 0;
        goto LAB_14829dece;
      }
    }
  }
  uVar1 = FUN_14829e1b4(local_38,local_44,&local_68);
  if ((char)uVar1 != '\0') {
    fVar2 = 1.0 / SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c);
    param_2[6] = fVar2 * local_50;
    param_2[7] = local_4c * fVar2;
    param_2[8] = local_48 * fVar2;
    fVar2 = 1.0 / SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
    *param_2 = fVar2 * local_68;
    param_2[1] = local_64 * fVar2;
    param_2[2] = local_60 * fVar2;
    fVar2 = 1.0 / SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58);
    param_2[3] = fVar2 * local_5c;
    param_2[4] = local_58 * fVar2;
    param_2[5] = local_54 * fVar2;
  }
LAB_14829dece:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829e01c FUN_14829e01c body=407 status=ok
// SIG undefined FUN_14829e01c(void)

float * FUN_14829e01c(float *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = (undefined4)*param_2;
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_a0 = (undefined4)param_2[1];
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_14829e450();
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  if ((int)param_2[1] != 0) {
    fVar1 = param_1[2];
    fVar2 = *param_1;
    fVar3 = param_1[1];
    fVar7 = 0.0;
    lVar5 = 8;
    uVar6 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    do {
      lVar4 = *param_2;
      fVar13 = *(float *)(lVar4 + lVar5) - fVar1;
      fVar14 = *(float *)(lVar4 + -8 + lVar5) - fVar2;
      fVar15 = *(float *)(lVar4 + -4 + lVar5) - fVar3;
      fVar12 = fVar12 + fVar14 * fVar14;
      *param_3 = fVar12;
      fVar11 = fVar11 + fVar14 * fVar15;
      param_3[1] = fVar11;
      fVar10 = fVar10 + fVar14 * fVar13;
      param_3[2] = fVar10;
      fVar9 = fVar9 + fVar15 * fVar15;
      param_3[3] = fVar9;
      fVar8 = fVar8 + fVar15 * fVar13;
      param_3[4] = fVar8;
      fVar7 = fVar7 + fVar13 * fVar13;
      param_3[5] = fVar7;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (uVar6 < *(uint *)(param_2 + 1));
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829e1b4 FUN_14829e1b4 body=667 status=ok
// SIG undefined FUN_14829e1b4(void)

void FUN_14829e1b4(undefined4 *param_1,float *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = *param_1;
  fVar7 = (float)param_1[1];
  local_74 = (float)param_1[2];
  fStack_54 = (float)param_1[3];
  local_48 = (float)param_1[4];
  local_50 = (float)param_1[5];
  local_44 = 0;
  if (1e-08 <= ABS(local_74)) {
    local_4c = SQRT(fVar7 * fVar7 + local_74 * local_74);
    local_78 = fVar7 / local_4c;
    local_74 = local_74 / local_4c;
    fVar8 = (local_78 + local_78) * local_48 + (local_50 - fStack_54) * local_74;
    fVar7 = local_74 * fVar8;
    fStack_54 = fStack_54 + fVar7;
    local_50 = local_50 - fVar7;
    local_68 = -local_78;
    local_48 = local_48 - fVar8 * local_78;
  }
  else {
    local_74 = 0.0;
    local_78 = 1.0;
    local_68 = 1.0;
    local_4c = fVar7;
  }
  puVar4 = &local_88;
  local_88 = 0x3f800000;
  uStack_80 = 0;
  local_70 = 0;
  local_6c = local_74;
  cVar1 = FUN_14829e4ca();
  if (cVar1 == '\0') {
    param_3 = param_3 + 1;
    lVar2 = 0;
    do {
      param_2[lVar2] = 0.0;
      param_3[-1] = 0;
      *(undefined4 *)param_3 = 0;
      lVar2 = lVar2 + 1;
      param_3 = (undefined8 *)((longlong)param_3 + 0xc);
    } while (lVar2 != 3);
  }
  else {
    param_2[2] = local_50;
    *(ulonglong *)param_2 = CONCAT44(fStack_54,local_58);
    lVar2 = 0;
    puVar3 = param_3;
    do {
      lVar6 = 0;
      puVar5 = puVar3;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)((longlong)puVar4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      } while (lVar6 != 3);
      lVar2 = lVar2 + 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    } while (lVar2 != 3);
    fVar7 = *param_2;
    fVar8 = param_2[2];
    if ((fVar7 < fVar8) && (param_2[1] <= fVar8 && fVar8 != param_2[1])) {
      *param_2 = fVar8;
      param_2[2] = fVar7;
      local_90 = *(undefined4 *)(param_3 + 1);
      local_98 = *param_3;
      *param_3 = param_3[3];
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_3 + 4);
      param_3[3] = local_98;
      *(undefined4 *)(param_3 + 4) = local_90;
      fVar7 = *param_2;
    }
    fVar8 = param_2[1];
    if (fVar7 < fVar8) {
      *param_2 = fVar8;
      param_2[1] = fVar7;
      local_90 = *(undefined4 *)(param_3 + 1);
      local_98 = *param_3;
      *param_3 = *(undefined8 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)((longlong)param_3 + 0x14);
      *(undefined8 *)((longlong)param_3 + 0xc) = local_98;
      *(undefined4 *)((longlong)param_3 + 0x14) = local_90;
      fVar8 = param_2[1];
    }
    if (fVar8 < param_2[2]) {
      param_2[1] = param_2[2];
      param_2[2] = fVar8;
      local_90 = *(undefined4 *)((longlong)param_3 + 0x14);
      local_98 = *(undefined8 *)((longlong)param_3 + 0xc);
      *(undefined8 *)((longlong)param_3 + 0xc) = param_3[3];
      *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(param_3 + 4);
      param_3[3] = local_98;
      *(undefined4 *)(param_3 + 4) = local_90;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829e450 FUN_14829e450 body=122 status=ok
// SIG undefined FUN_14829e450(void)

void FUN_14829e450(float *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    lVar1 = *param_2;
    fVar5 = 0.0;
    lVar3 = 0;
    fVar6 = 0.0;
    fVar4 = 0.0;
    do {
      fVar5 = fVar5 + *(float *)(lVar1 + lVar3);
      fVar6 = fVar6 + *(float *)(lVar1 + 4 + lVar3);
      fVar4 = fVar4 + *(float *)(lVar1 + 8 + lVar3);
      lVar3 = lVar3 + 0xc;
    } while (uVar2 * 0xc != lVar3);
  }
  fVar7 = 1.0 / (float)uVar2;
  *param_1 = fVar5 * fVar7;
  param_1[1] = fVar6 * fVar7;
  param_1[2] = fVar7 * fVar4;
  return;
}



// FUNCTION 14829e4ca FUN_14829e4ca body=738 status=ok
// SIG undefined FUN_14829e4ca(void)

bool FUN_14829e4ca(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar5 = 0;
  uVar4 = 0;
  bVar11 = false;
  lVar6 = param_3;
  lVar7 = param_2;
LAB_14829e524:
  iVar3 = 0;
  do {
    lVar1 = 0;
    do {
      lVar9 = lVar1;
      if (lVar5 + 2 == lVar9) break;
      fVar13 = ABS(*(float *)(lVar7 + 4 + lVar9 * 4)) + ABS(*(float *)(lVar7 + lVar9 * 4));
      fVar12 = ABS(*(float *)(lVar6 + lVar9 * 4)) + fVar13;
      lVar1 = lVar9 + 1;
    } while ((fVar12 != fVar13) || (NAN(fVar12) || NAN(fVar13)));
    if (lVar9 == 0) break;
    uVar10 = lVar9 - lVar5;
    fVar12 = *(float *)(param_2 + uVar4 * 4);
    fVar13 = *(float *)(param_3 + uVar4 * 4);
    fVar15 = (*(float *)(param_2 + 4 + uVar4 * 4) - fVar12) / (fVar13 + fVar13);
    fVar16 = SQRT(fVar15 * fVar15 + 1.0);
    fVar14 = 0.0;
    fVar13 = fVar13 / ((float)((uint)-fVar16 & -(uint)(fVar15 < 0.0) |
                              ~-(uint)(fVar15 < 0.0) & (uint)fVar16) + fVar15) +
             (*(float *)(lVar7 + lVar9 * 4) - fVar12);
    if (uVar4 < uVar10) {
      fVar15 = 1.0;
      fVar12 = 1.0;
      do {
        fVar16 = *(float *)(param_3 + -4 + uVar10 * 4);
        fVar15 = fVar15 * fVar16;
        if (ABS(fVar13) <= ABS(fVar15)) {
          fVar18 = fVar13 / fVar15;
          fVar17 = SQRT(fVar18 * fVar18 + 1.0);
          fVar13 = fVar15 * fVar17;
          fVar15 = 1.0 / fVar17;
          fVar18 = fVar18 * fVar15;
        }
        else {
          fVar15 = fVar15 / fVar13;
          fVar18 = SQRT(fVar15 * fVar15 + 1.0);
          fVar13 = fVar13 * fVar18;
          fVar18 = 1.0 / fVar18;
          fVar15 = fVar15 * fVar18;
        }
        lVar1 = uVar10 - 1;
        fVar12 = fVar12 * fVar16;
        *(float *)(param_3 + uVar10 * 4) = fVar13;
        fVar16 = *(float *)(param_2 + uVar10 * 4) - fVar14;
        fVar13 = (*(float *)(param_2 + -4 + uVar10 * 4) - fVar16) * fVar15 +
                 (fVar12 + fVar12) * fVar18;
        fVar14 = fVar15 * fVar13;
        *(float *)(param_2 + uVar10 * 4) = fVar16 + fVar14;
        lVar2 = param_1 + uVar10 * 4;
        lVar8 = 0;
        do {
          fVar16 = *(float *)(lVar2 + -4 + lVar8);
          fVar17 = *(float *)(lVar2 + lVar8);
          *(float *)(lVar2 + lVar8) = fVar15 * fVar16 + fVar18 * fVar17;
          *(float *)(lVar2 + -4 + lVar8) = fVar16 * fVar18 + fVar17 * -fVar15;
          lVar8 = lVar8 + 0xc;
        } while (lVar8 != 0x24);
        fVar13 = fVar13 * fVar18 - fVar12;
        uVar10 = 1;
        fVar12 = fVar18;
      } while ((longlong)uVar4 < lVar1);
      fVar12 = *(float *)(param_2 + uVar4 * 4);
    }
    *(float *)(param_2 + uVar4 * 4) = fVar12 - fVar14;
    *(float *)(param_3 + uVar4 * 4) = fVar13;
    *(undefined4 *)(lVar6 + lVar9 * 4) = 0;
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x20) {
      return bVar11;
    }
  } while( true );
  bVar11 = 1 < uVar4;
  uVar4 = uVar4 + 1;
  lVar5 = lVar5 + -1;
  lVar7 = lVar7 + 4;
  lVar6 = lVar6 + 4;
  if (uVar4 == 3) {
    return bVar11;
  }
  goto LAB_14829e524;
}



// FUNCTION 14829e7ac FUN_14829e7ac body=130 status=ok
// SIG undefined FUN_14829e7ac(void)

void FUN_14829e7ac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x60),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014829e7ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014829e82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x48),0);
    return;
  }
  return;
}



// FUNCTION 14829e82e FUN_14829e82e body=268 status=ok
// SIG undefined FUN_14829e82e(void)

void FUN_14829e82e(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(*(longlong *)(*param_1 + 0x30) + 0x4c);
  if (uVar3 < 3) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    uVar3 = uVar3 / 3;
    uVar7 = 0;
    do {
      lVar6 = param_1[6];
      if (*(int *)(lVar6 + uVar7 * 4) != -1) {
        bVar2 = (byte)uVar7 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(*param_1 + 0xb8) + (uVar7 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        lVar6 = param_1[6];
      }
      *(undefined4 *)(lVar6 + uVar7 * 4) = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
    *(undefined4 *)(param_1 + 5) = 0;
    iVar4 = 0;
    uVar5 = 0;
    do {
      if ((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f)
          & 1) == 0) {
        iVar4 = iVar4 + 1;
        *(int *)(param_1 + 5) = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x54);
  if ((ulonglong)uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_1[9] + uVar7 * 8);
      *(undefined4 *)(lVar6 + 0x54) = 0;
      *(undefined4 *)(lVar6 + 0x8c) = 0;
      *(undefined4 *)(lVar6 + 0x6c) = 0;
      *(undefined8 *)(lVar6 + 4) = 0;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined8 *)(lVar6 + 0x1c) = 0;
      *(undefined8 *)(lVar6 + 0x24) = 0;
      *(undefined8 *)(lVar6 + 0x2c) = 0;
      *(undefined8 *)(lVar6 + 0x34) = 0;
      *(undefined8 *)(lVar6 + 0x3c) = 0;
      *(undefined4 *)(lVar6 + 0x44) = 0;
      FUN_14829f2ce(param_1,lVar6,*(undefined4 *)(lVar6 + 0x98));
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  return;
}



// FUNCTION 14829e93a FUN_14829e93a body=460 status=ok
// SIG undefined FUN_14829e93a(void)

void FUN_14829e93a(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[5] != 0) {
    while (*(int *)((longlong)param_1 + 0x54) != 0) {
      uVar8 = 0xffffffff;
      uVar10 = 0;
      uVar9 = 0xffffffff;
      fVar11 = 3.4028235e+38;
      do {
        lVar2 = *(longlong *)(param_1[9] + uVar10 * 8);
        uVar7 = (ulonglong)*(uint *)(lVar2 + 0x8c);
        if (*(uint *)(lVar2 + 0x8c) != 0) {
          do {
            lVar3 = *(longlong *)(lVar2 + 0x80);
            uVar5 = (int)uVar7 - 1;
            uVar7 = (ulonglong)uVar5;
            uVar6 = *(uint *)(lVar3 + 4 + uVar7 * 8);
            if ((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar6 >> 5) * 4) >>
                 (uVar6 & 0x1f) & 1) == 0) {
              if ((uVar6 != 0xffffffff) && (fVar1 = *(float *)(lVar3 + uVar7 * 8), fVar1 < fVar11))
              {
                uVar9 = uVar10 & 0xffffffff;
                fVar11 = fVar1;
                uVar8 = uVar6;
              }
              break;
            }
            *(uint *)(lVar2 + 0x8c) = uVar5;
            if (*(uint *)(lVar2 + 0x90) < uVar5) {
              uVar6 = uVar5 >> 2;
              if (*(uint *)(lVar2 + 0x90) == 0) {
                uVar6 = 0;
              }
              FUN_148298f1a((longlong *)(lVar2 + 0x80),uVar6 + uVar5);
              uVar7 = (ulonglong)*(uint *)(lVar2 + 0x8c);
            }
          } while ((int)uVar7 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)((longlong)param_1 + 0x54));
      if ((uVar8 == 0xffffffff) || (param_2 < fVar11)) break;
      lVar2 = *(longlong *)(param_1[9] + uVar9 * 8);
      uVar6 = *(int *)(lVar2 + 0x8c) - 1;
      *(uint *)(lVar2 + 0x8c) = uVar6;
      if (*(uint *)(lVar2 + 0x90) < uVar6) {
        uVar5 = uVar6 >> 2;
        if (*(uint *)(lVar2 + 0x90) == 0) {
          uVar5 = 0;
        }
        FUN_148298f1a(lVar2 + 0x80,uVar5 + uVar6);
      }
      cVar4 = FUN_14829f2ce(param_1,lVar2,uVar8);
      if (cVar4 == '\0') {
        local_74 = *(undefined4 *)(*(longlong *)(param_1[1] + 0x38) + (ulonglong)uVar8 * 4);
        FUN_148298fa0(lVar2 + 0x60,&local_74);
      }
      if ((int)param_1[5] == 0) break;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829eb08 FUN_14829eb08 body=1450 status=ok
// SIG undefined FUN_14829eb08(void)

void FUN_14829eb08(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar21 = *(uint *)((longlong)param_1 + 0x54);
  uVar13 = (ulonglong)(uVar21 - 1);
  if (-1 < (int)(uVar21 - 1)) {
    plVar12 = param_1 + 0x29;
    plVar1 = param_1 + 0x2c;
    plVar2 = param_1 + 0x2f;
    uVar15 = uVar13;
LAB_14829ebf6:
    do {
      uVar14 = uVar15;
      lVar8 = *(longlong *)(param_1[9] + uVar14 * 8);
      if (lVar8 != 0) {
        *(uint *)((longlong)param_1 + 0x154) = uVar21;
        if (*(uint *)(param_1 + 0x2b) < uVar21) {
          FUN_148298f1a(plVar12);
        }
        if (((void *)*plVar12 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x154) != 0)) {
          memset((void *)*plVar12,0,
                 (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x154) * (int)param_1[0x2a]));
        }
        *(uint *)((longlong)param_1 + 0x16c) = uVar21;
        if (*(uint *)(param_1 + 0x2e) < uVar21) {
          FUN_148298f1a(plVar1);
        }
        if (((void *)*plVar1 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x16c) != 0)) {
          memset((void *)*plVar1,0,
                 (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x16c) * (int)param_1[0x2d]));
        }
        *(uint *)((longlong)param_1 + 0x184) = uVar21;
        if (*(uint *)(param_1 + 0x31) < uVar21) {
          FUN_148298f1a(plVar2);
        }
        if (((void *)*plVar2 != (void *)0x0) && (*(int *)((longlong)param_1 + 0x184) != 0)) {
          memset((void *)*plVar2,0,
                 (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x184) * (int)param_1[0x30]));
        }
        uVar20 = *(uint *)(lVar8 + 0x54);
        fVar26 = 0.0;
        if ((ulonglong)uVar20 != 0) {
          uVar15 = 0;
          do {
            iVar6 = *(int *)(*(longlong *)(lVar8 + 0x48) + uVar15 * 4);
            lVar17 = *(longlong *)(*param_1 + 0x30);
            iVar19 = 0;
            do {
              uVar3 = iVar6 * 3 + iVar19;
              uVar16 = (ulonglong)uVar3;
              fVar5 = *(float *)(*(longlong *)(*param_1 + 0x50) + uVar16 * 4);
              uVar7 = *(uint *)(*(longlong *)(lVar17 + 0x108) + uVar16 * 4);
              if ((uVar7 == 0xffffffff) ||
                 (uVar22 = (ulonglong)*(uint *)(param_1[6] + ((ulonglong)uVar7 / 3) * 4),
                 uVar22 == 0xffffffff)) {
                fVar26 = fVar26 + fVar5;
              }
              else if (*(longlong *)(param_1[9] + uVar22 * 8) != lVar8) {
                cVar11 = FUN_1482a1418(lVar17,uVar16);
                if ((cVar11 == '\0') ||
                   ((cVar11 = FUN_1482a124c(param_1,uVar3), cVar11 == '\0' &&
                    (cVar11 = FUN_1482a1494(lVar17,uVar16), cVar11 == '\0')))) {
                  *(float *)(*plVar12 + uVar22 * 4) = *(float *)(*plVar12 + uVar22 * 4) + fVar5;
                }
                else {
                  fVar26 = fVar26 + fVar5;
                }
                *(float *)(*plVar1 + uVar22 * 4) = fVar5 + *(float *)(*plVar1 + uVar22 * 4);
                piVar4 = (int *)(*plVar2 + uVar22 * 4);
                *piVar4 = *piVar4 + 1;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != 3);
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar20);
        }
        lVar17 = uVar13 + 1;
        do {
          if ((((lVar17 - uVar14 != 1) &&
               (lVar18 = *(longlong *)(param_1[9] + -8 + lVar17 * 8), lVar18 != 0)) &&
              (fVar5 = *(float *)(*plVar12 + -4 + lVar17 * 4), 0.0 < fVar5)) &&
             (0.5 <= *(float *)(lVar18 + 0x24) * *(float *)(lVar8 + 0x24) +
                     *(float *)(lVar18 + 0x1c) * *(float *)(lVar8 + 0x1c) +
                     *(float *)(lVar18 + 0x20) * *(float *)(lVar8 + 0x20))) {
            fVar25 = *(float *)(*param_1 + 8);
            if ((fVar25 <= 0.0) || (*(float *)(lVar8 + 0x28) + *(float *)(lVar18 + 0x28) <= fVar25))
            {
              fVar25 = *(float *)(*param_1 + 0xc);
              if (fVar25 <= 0.0) {
                fVar24 = *(float *)(*plVar1 + -4 + lVar17 * 4);
              }
              else {
                fVar24 = *(float *)(*plVar1 + -4 + lVar17 * 4);
                if (fVar25 < (*(float *)(lVar8 + 0x2c) + *(float *)(lVar18 + 0x2c)) - fVar24)
                goto LAB_14829ede1;
              }
              if ((((fVar24 <= 0.0) || (*(uint *)(lVar8 + 0x54) < 2)) ||
                  ((*(int *)(lVar18 + 0x54) != 1 ||
                   (*(float *)(lVar8 + 0x28) * 0.1 < *(float *)(lVar18 + 0x28))))) &&
                 ((*(int *)(lVar18 + 0x54) != 2 || (*(uint *)(*plVar2 + -4 + lVar17 * 4) < 2)))) {
                if (0.0 < fVar24) {
                  fVar23 = ABS(*(float *)(lVar18 + 0x2c));
                  fVar25 = fVar24;
                  if (fVar24 <= fVar23) {
                    fVar25 = fVar23;
                  }
                  fVar23 = 1.0;
                  if (1.0 <= fVar25) {
                    fVar23 = fVar25;
                  }
                  if (ABS(fVar24 - *(float *)(lVar18 + 0x2c)) <= fVar23 * 0.0001)
                  goto LAB_14829ef3a;
                }
                fVar24 = *(float *)(lVar8 + 0x2c) - fVar26;
                fVar25 = 0.0;
                if (0.0 <= fVar24) {
                  fVar25 = fVar24;
                }
                if ((fVar5 <= fVar25 * 0.2) && (fVar5 <= *(float *)(lVar18 + 0x2c) * 0.75))
                goto LAB_14829ede1;
              }
LAB_14829ef3a:
              cVar11 = FUN_1482a179e(param_1);
              uVar15 = uVar13;
              if (cVar11 != '\0') goto LAB_14829ebf6;
            }
          }
LAB_14829ede1:
          lVar18 = lVar17 + -1;
          bVar10 = 0 < lVar17;
          lVar17 = lVar18;
        } while (lVar18 != 0 && bVar10);
      }
      uVar15 = uVar14 - 1;
    } while (0 < (longlong)uVar14);
    uVar21 = *(uint *)((longlong)param_1 + 0x54);
    if (0 < (int)uVar21) {
      uVar20 = 0;
      do {
        lVar8 = param_1[9];
        puVar9 = *(uint **)(lVar8 + (ulonglong)uVar20 * 8);
        if (puVar9 == (uint *)0x0) {
          if (lVar8 != 0) {
            if (1 < uVar21) {
              iVar6 = (int)param_1[10];
              memmove((void *)((ulonglong)(iVar6 * uVar20) + lVar8),
                      (void *)((ulonglong)((uVar20 + 1) * iVar6) + lVar8),
                      (ulonglong)((uVar21 + ~uVar20) * iVar6));
              uVar21 = *(uint *)((longlong)param_1 + 0x54);
            }
            if (uVar21 != 0) {
              *(uint *)((longlong)param_1 + 0x54) = uVar21 - 1;
            }
          }
          uVar21 = *(uint *)((longlong)param_1 + 0x3c);
          if ((ulonglong)uVar21 != 0) {
            uVar13 = 0;
            do {
              iVar6 = *(int *)(param_1[6] + uVar13 * 4);
              if ((int)uVar20 < iVar6) {
                *(int *)(param_1[6] + uVar13 * 4) = iVar6 + -1;
              }
              uVar13 = uVar13 + 1;
            } while (uVar21 != uVar13);
          }
        }
        else {
          *puVar9 = uVar20;
          uVar20 = uVar20 + 1;
        }
        uVar21 = *(uint *)((longlong)param_1 + 0x54);
      } while ((int)uVar20 < (int)uVar21);
    }
  }
  return;
}



// FUNCTION 14829f0b2 FUN_14829f0b2 body=539 status=ok
// SIG undefined FUN_14829f0b2(void)

void FUN_14829f0b2(longlong *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar6 = (undefined4 *)(*DAT_14cb46728)(0,0xa0);
  *puVar6 = 0xffffffff;
  *(undefined8 *)(puVar6 + 1) = 0;
  *(undefined8 *)(puVar6 + 3) = 0;
  *(undefined8 *)(puVar6 + 5) = 0;
  *(undefined8 *)(puVar6 + 7) = 0;
  *(undefined8 *)(puVar6 + 9) = 0;
  *(undefined8 *)(puVar6 + 0xb) = 0;
  *(undefined8 *)(puVar6 + 0xd) = 0;
  *(undefined8 *)(puVar6 + 0xf) = 0;
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x12) = 0;
  *(undefined8 *)(puVar6 + 0x14) = 4;
  uVar10 = 0;
  puVar6[0x16] = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x1a) = 4;
  puVar6[0x1c] = 0;
  puVar6[0x1e] = 0xffffffff;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x22) = 8;
  puVar6[0x24] = 0;
  *puVar6 = *(undefined4 *)((longlong)param_1 + 0x54);
  local_38 = puVar6;
  FUN_148298fa0(param_1 + 9);
  puVar6[0x26] = 0;
  lVar7 = *param_1;
  if (2 < *(uint *)(*(longlong *)(lVar7 + 0x30) + 0x4c)) {
    fVar12 = 0.0;
    uVar11 = 0;
    uVar9 = 0;
    do {
      if (((*(uint *)(*(longlong *)(lVar7 + 0xb8) + (uVar9 >> 5) * 4) >> ((uint)uVar9 & 0x1f) & 1)
           == 0) &&
         (fVar1 = *(float *)(*(longlong *)(param_1[1] + 0x50) +
                            (ulonglong)*(uint *)(*(longlong *)(param_1[1] + 0x38) + uVar9 * 4) * 4),
         fVar12 < fVar1)) {
        puVar6[0x26] = (uint)uVar9;
        lVar7 = *param_1;
        uVar11 = uVar9 & 0xffffffff;
        fVar12 = fVar1;
      }
      uVar10 = (undefined4)uVar11;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0x30) + 0x4c) / 3);
  }
  FUN_14829f2ce(param_1,puVar6,uVar10);
  iVar4 = local_38[0x23];
  if (iVar4 != 0) {
    puVar6 = local_38;
    do {
      uVar5 = iVar4 - 1;
      if (param_2 < *(float *)(*(longlong *)(puVar6 + 0x20) + (ulonglong)uVar5 * 8)) break;
      uVar2 = *(uint *)(*(longlong *)(puVar6 + 0x20) + 4 + (ulonglong)uVar5 * 8);
      puVar6[0x23] = uVar5;
      if ((uint)puVar6[0x24] < uVar5) {
        uVar8 = uVar5 >> 2;
        if (puVar6[0x24] == 0) {
          uVar8 = 0;
        }
        FUN_148298f1a(puVar6 + 0x20,uVar8 + uVar5);
        puVar6 = local_38;
      }
      if (((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar2 >> 5) * 4) >>
            (uVar2 & 0x1f) & 1) == 0) &&
         (cVar3 = FUN_14829f2ce(param_1,puVar6,uVar2), puVar6 = local_38, cVar3 == '\0')) {
        local_3c = *(undefined4 *)(*(longlong *)(param_1[1] + 0x38) + (ulonglong)uVar2 * 4);
        FUN_148298fa0(local_38 + 0x18,&local_3c);
        puVar6 = local_38;
      }
      iVar4 = puVar6[0x23];
    } while (iVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14829f2ce FUN_14829f2ce body=1312 status=ok
// SIG undefined FUN_14829f2ce(void)

undefined8 FUN_14829f2ce(longlong *param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  undefined4 uVar19;
  float extraout_XMM0_Da;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  longlong *local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  float local_78;
  uint local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_2 + 0x12);
  uVar3 = param_2[0x15];
  uVar17 = (ulonglong)uVar3;
  local_64 = param_3;
  FUN_148298fa0(plVar1,&local_64);
  uVar13 = (ulonglong)local_64;
  local_68 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + uVar13 * 4);
  if (local_68 != local_64) {
    do {
      FUN_148298fa0(plVar1,&local_68);
      local_68 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)local_68 * 4);
      uVar13 = (ulonglong)local_68;
    } while (local_68 != local_64);
  }
  uVar4 = param_2[0x15];
  uVar15 = (ulonglong)uVar4;
  local_88 = 0.0;
  fStack_84 = 0.0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0.0;
  if (uVar3 == 0) {
    lVar16 = *(longlong *)(*param_1 + 0x98);
    local_78 = *(float *)(lVar16 + 8 + uVar13 * 0xc);
    uVar6 = *(ulonglong *)(lVar16 + uVar13 * 0xc);
    lVar16 = *(longlong *)(*param_1 + 0x30);
    lVar7 = *(longlong *)(lVar16 + 0x40);
    lVar16 = *(longlong *)(lVar16 + 0x58);
    uVar14 = (ulonglong)*(uint *)(lVar7 + (uVar13 * 3 + 1 & 0xffffffff) * 4);
    uVar10 = (ulonglong)*(uint *)(lVar7 + (ulonglong)(uint)((int)uVar13 * 3) * 4);
    fVar18 = *(float *)(lVar16 + 8 + uVar10 * 0xc) - *(float *)(lVar16 + 8 + uVar14 * 0xc);
    fVar20 = *(float *)(lVar16 + 4 + uVar10 * 0xc) - *(float *)(lVar16 + 4 + uVar14 * 0xc);
    fVar22 = *(float *)(lVar16 + uVar10 * 0xc) - *(float *)(lVar16 + uVar14 * 0xc);
    fVar21 = 1.0 / SQRT(fVar18 * fVar18 + fVar22 * fVar22 + fVar20 * fVar20);
    fVar18 = fVar18 * fVar21;
    fVar20 = fVar20 * fVar21;
    fVar21 = fVar21 * fVar22;
    local_98 = CONCAT44(fVar20,fVar21);
    uStack_80._0_4_ = (float)uVar6;
    uStack_80._4_4_ = (float)(uVar6 >> 0x20);
    fStack_84 = (float)uStack_80 * fVar20 - fVar21 * uStack_80._4_4_;
    local_88 = fVar21 * local_78 - fVar18 * (float)uStack_80;
    uStack_90 = CONCAT44(uStack_80._4_4_ * fVar18 - fVar20 * local_78,fVar18);
    uStack_80 = uVar6;
LAB_14829f47e:
    param_2[9] = local_78;
    param_2[5] = local_88;
    param_2[6] = fStack_84;
    param_2[7] = (float)uStack_80;
    param_2[8] = uStack_80._4_4_;
    *(undefined8 *)(param_2 + 1) = local_98;
    *(undefined8 *)(param_2 + 3) = uStack_90;
    fVar18 = (float)param_2[10];
    uVar12 = (uint)uVar13;
    do {
      fVar18 = fVar18 + *(float *)(*(longlong *)(*param_1 + 0x68) + uVar13 * 4);
      uVar5 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + uVar13 * 4);
      uVar13 = (ulonglong)uVar5;
    } while (uVar5 != uVar12);
    param_2[10] = fVar18;
    uVar19 = FUN_14829fb76(param_1,param_2);
    param_2[0xb] = uVar19;
    if (uVar3 < uVar4) {
      iVar11 = uVar4 - uVar3;
      do {
        uVar3 = *(uint *)(*(longlong *)(param_2 + 0x12) + uVar17 * 4);
        *(undefined4 *)(param_1[6] + (ulonglong)uVar3 * 4) = *param_2;
        *(int *)(param_1 + 5) = (int)param_1[5] + -1;
        puVar2 = (uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
        FUN_14829fc1e(*(undefined8 *)(*param_1 + 0x30),&local_a4);
        fVar20 = local_a4 + (float)param_2[0xc];
        param_2[0xc] = fVar20;
        fVar21 = local_a0 + (float)param_2[0xd];
        param_2[0xd] = fVar21;
        fVar18 = local_9c + (float)param_2[0xe];
        param_2[0xe] = fVar18;
        uVar17 = uVar17 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    else {
      fVar18 = (float)param_2[0xe];
      fVar20 = (float)param_2[0xc];
      fVar21 = (float)param_2[0xd];
    }
    fVar22 = 1.0 / (float)(uint)param_2[0x15];
    param_2[0xf] = fVar22 * fVar20;
    param_2[0x10] = fVar21 * fVar22;
    param_2[0x11] = fVar18 * fVar22;
    param_2[0x23] = 0;
    uVar9 = 1;
    if (uVar15 != 0) {
      local_b8 = param_2 + 0x1e;
      uVar17 = 0;
      local_b0 = plVar1;
      do {
        iVar11 = *(int *)(*local_b0 + uVar17 * 4);
        lVar16 = 0;
        do {
          uVar3 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x108) +
                           (ulonglong)(uint)((int)lVar16 + iVar11 * 3) * 4);
          if (uVar3 != 0xffffffff) {
            if ((*(uint *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 / 0x18 & 0xfffffffc))
                 >> ((uint)((ulonglong)uVar3 / 3) & 0x1f) & 1) == 0) {
              if ((ulonglong)(uint)param_2[0x1b] != 0) {
                uVar13 = 0;
                do {
                  if (*(int *)(*(longlong *)(param_2 + 0x18) + uVar13 * 4) ==
                      *(int *)(*(longlong *)(param_1[1] + 0x38) + ((ulonglong)uVar3 / 3) * 4))
                  goto LAB_14829f683;
                  uVar13 = uVar13 + 1;
                } while ((uint)param_2[0x1b] != uVar13);
              }
              FUN_14829fe96(param_1,param_2);
              if (extraout_XMM0_Da < 3.4028235e+38) {
                FUN_1482a0054(local_b8,extraout_XMM0_Da);
              }
            }
          }
LAB_14829f683:
          lVar16 = lVar16 + 1;
        } while (lVar16 != 3);
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar15);
      uVar9 = 1;
    }
  }
  else {
    cVar8 = FUN_14829f7f0(param_1,param_2,&local_98);
    if (cVar8 != '\0') {
      uVar13 = (ulonglong)local_64;
      lVar16 = *(longlong *)(*param_1 + 0x98);
      if (*(float *)(lVar16 + 8 + uVar13 * 0xc) * local_78 +
          *(float *)(lVar16 + uVar13 * 0xc) * (float)uStack_80 +
          *(float *)(lVar16 + 4 + uVar13 * 0xc) * uStack_80._4_4_ < 0.0) {
        local_78 = -local_78;
        uStack_80 = uStack_80 ^ 0x8000000080000000;
      }
      FUN_14829f8e2(param_1,param_2);
      if (uVar3 < uVar4) {
        uVar19 = *param_2;
        uVar13 = uVar17;
        do {
          *(undefined4 *)(param_1[6] + (ulonglong)*(uint *)(*plVar1 + uVar13 * 4) * 4) = uVar19;
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar13);
        cVar8 = FUN_14829f994(param_1,param_2);
        if (cVar8 != '\0') {
LAB_14829f7e5:
          uVar13 = (ulonglong)local_64;
          goto LAB_14829f47e;
        }
        do {
          *(undefined4 *)(param_1[6] + (ulonglong)*(uint *)(*plVar1 + uVar17 * 4) * 4) = 0xffffffff;
          uVar17 = uVar17 + 1;
        } while (uVar15 != uVar17);
      }
      else {
        cVar8 = FUN_14829f994(param_1,param_2);
        if (cVar8 != '\0') goto LAB_14829f7e5;
      }
    }
    param_2[0x15] = uVar3;
    if ((uint)param_2[0x16] < uVar3) {
      FUN_148298f1a(plVar1,uVar3);
    }
    uVar9 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14829f7f0 FUN_14829f7f0 body=240 status=ok
// SIG undefined FUN_14829f7f0(void)

void FUN_14829f7f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_2 + 0x54);
  *(uint *)((longlong)param_1 + 0x8c) = uVar1 * 3;
  if (*(uint *)(param_1 + 0x12) < uVar1 * 3) {
    FUN_148298f1a();
  }
  if ((ulonglong)uVar1 != 0) {
    iVar5 = 0;
    uVar6 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_2 + 0x48) + uVar6 * 4);
      lVar7 = 0;
      do {
        lVar3 = param_1[0x10];
        lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x58);
        uVar8 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x40) +
                         (ulonglong)(uint)(iVar2 * 3 + (int)lVar7) * 4);
        uVar9 = (ulonglong)(uint)(iVar5 + (int)lVar7);
        *(undefined4 *)(lVar3 + 8 + uVar9 * 0xc) = *(undefined4 *)(lVar4 + 8 + uVar8 * 0xc);
        *(undefined8 *)(lVar3 + uVar9 * 0xc) = *(undefined8 *)(lVar4 + uVar8 * 0xc);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 3;
    } while (uVar6 != uVar1);
  }
  local_48 = param_1[0x10];
  local_40 = *(undefined4 *)((longlong)param_1 + 0x8c);
  FUN_14829d964(&local_48,param_3);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829f8e2 FUN_14829f8e2 body=177 status=ok
// SIG undefined FUN_14829f8e2(void)

void FUN_14829f8e2(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar7 = *(uint *)(param_2 + 0x54);
  if ((ulonglong)uVar7 != 0) {
    uVar12 = 0;
    do {
      iVar8 = *(int *)(*(longlong *)(param_2 + 0x48) + uVar12 * 4);
      lVar13 = 0;
      do {
        uVar14 = (ulonglong)(uint)(iVar8 * 3 + (int)lVar13);
        lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x58);
        uVar11 = (ulonglong)
                 *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x40) + uVar14 * 4);
        lVar10 = param_1[2];
        fVar1 = *(float *)(lVar9 + uVar11 * 0xc);
        fVar2 = *(float *)(param_2 + 0x14);
        fVar3 = *(float *)(lVar9 + 4 + uVar11 * 0xc);
        fVar4 = *(float *)(param_2 + 0x10);
        fVar5 = *(float *)(lVar9 + 8 + uVar11 * 0xc);
        fVar6 = *(float *)(param_2 + 0x18);
        *(float *)(lVar10 + uVar14 * 8) =
             fVar5 * *(float *)(param_2 + 0xc) +
             fVar1 * *(float *)(param_2 + 4) + fVar3 * *(float *)(param_2 + 8);
        *(float *)(lVar10 + 4 + uVar14 * 8) = fVar6 * fVar5 + fVar4 * fVar1 + fVar2 * fVar3;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 3);
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar7);
  }
  return;
}



// FUNCTION 14829f994 FUN_14829f994 body=481 status=ok
// SIG undefined FUN_14829f994(void)

ulonglong FUN_14829f994(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (ulonglong)(uint)param_2[0x15];
  if (uVar4 == 0) {
    lVar9 = param_1[2];
  }
  else {
    lVar9 = param_1[2];
    uVar6 = 0;
    uVar5 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x12) + uVar6 * 4);
      uVar8 = (ulonglong)(iVar3 * 3 + 1);
      uVar7 = (ulonglong)(iVar3 * 3 + 2);
      fVar1 = *(float *)(lVar9 + (ulonglong)(uint)(iVar3 * 3) * 8);
      fVar2 = *(float *)(lVar9 + 4 + (ulonglong)(uint)(iVar3 * 3) * 8);
      uVar5 = uVar5 + (((*(float *)(lVar9 + 4 + uVar7 * 8) - fVar2) *
                        (*(float *)(lVar9 + uVar8 * 8) - fVar1) -
                       (*(float *)(lVar9 + 4 + uVar8 * 8) - fVar2) *
                       (*(float *)(lVar9 + uVar7 * 8) - fVar1)) * 0.5 < 0.0);
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
    if ((uVar5 != 0) && (uVar5 != param_2[0x15])) {
      uVar4 = 0;
      goto LAB_14829fa63;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = lVar9;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x12) + uVar6 * 4);
      lVar9 = 0;
      do {
        uVar7 = (ulonglong)(uint)(iVar3 * 3) + lVar9;
        uVar5 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x108) +
                         (uVar7 & 0xffffffff) * 4);
        if ((uVar5 == 0xffffffff) || (*(int *)(param_1[6] + ((ulonglong)uVar5 / 3) * 4) != *param_2)
           ) {
          local_74 = (int)uVar7;
          FUN_148298fa0(param_1 + 0x13,&local_74);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar4 = FUN_1482a011a(param_1 + 0x13,**(undefined4 **)(*param_1 + 0x30));
  uVar4 = uVar4 ^ 1;
LAB_14829fa63:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14829fb76 FUN_14829fb76 body=167 status=ok
// SIG undefined FUN_14829fb76(void)

float FUN_14829fb76(longlong *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (float)param_2[0xb];
  lVar2 = *(longlong *)(param_1[1] + 0x38);
  uVar3 = param_3;
  do {
    iVar5 = 0;
    do {
      uVar4 = (ulonglong)(uVar3 * 3 + iVar5);
      fVar6 = *(float *)(*(longlong *)(*param_1 + 0x50) + uVar4 * 4);
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x108) + uVar4 * 4);
      if (uVar1 == 0xffffffff) {
LAB_14829fbf2:
        fVar7 = fVar7 + fVar6;
      }
      else {
        uVar4 = (ulonglong)uVar1 / 3;
        if (*(int *)(lVar2 + uVar4 * 4) != *(int *)(lVar2 + (ulonglong)param_3 * 4)) {
          if (*(int *)(param_1[6] + uVar4 * 4) != *param_2) goto LAB_14829fbf2;
          fVar7 = fVar7 - fVar6;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 3);
    uVar3 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)uVar3 * 4);
    if (uVar3 == param_3) {
      fVar6 = 0.0;
      if (0.0 <= fVar7) {
        fVar6 = fVar7;
      }
      return fVar6;
    }
  } while( true );
}



// FUNCTION 14829fc1e FUN_14829fc1e body=632 status=ok
// SIG undefined FUN_14829fc1e(void)

void FUN_14829fc1e(longlong param_1,float *param_2,int param_3)

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
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar10 = *(longlong *)(param_1 + 0x40);
  lVar11 = *(longlong *)(param_1 + 0x58);
  uVar12 = (ulonglong)*(uint *)(lVar10 + (ulonglong)(uint)(param_3 * 3) * 4);
  uVar14 = (ulonglong)*(uint *)(lVar10 + (ulonglong)(param_3 * 3 + 1) * 4);
  uVar13 = (ulonglong)*(uint *)(lVar10 + (ulonglong)(param_3 * 3 + 2) * 4);
  fVar1 = *(float *)(lVar11 + 8 + uVar14 * 0xc);
  fVar2 = *(float *)(lVar11 + 8 + uVar12 * 0xc);
  fVar3 = *(float *)(lVar11 + uVar14 * 0xc);
  fVar4 = *(float *)(lVar11 + 4 + uVar14 * 0xc);
  fVar5 = *(float *)(lVar11 + uVar12 * 0xc);
  fVar6 = *(float *)(lVar11 + 4 + uVar12 * 0xc);
  fVar17 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                (fVar3 - fVar5) * (fVar3 - fVar5) + (fVar4 - fVar6) * (fVar4 - fVar6));
  fVar7 = *(float *)(lVar11 + 8 + uVar13 * 0xc);
  fVar8 = *(float *)(lVar11 + uVar13 * 0xc);
  fVar9 = *(float *)(lVar11 + 4 + uVar13 * 0xc);
  fVar16 = SQRT((fVar7 - fVar1) * (fVar7 - fVar1) +
                (fVar8 - fVar3) * (fVar8 - fVar3) + (fVar9 - fVar4) * (fVar9 - fVar4));
  fVar15 = SQRT((fVar2 - fVar7) * (fVar2 - fVar7) +
                (fVar5 - fVar8) * (fVar5 - fVar8) + (fVar6 - fVar9) * (fVar6 - fVar9));
  fVar18 = 1.0 / (fVar17 + fVar16 + fVar15);
  *param_2 = (fVar5 + fVar8) * fVar15 * fVar18 +
             (fVar3 + fVar8) * fVar16 * fVar18 + (fVar3 + fVar5) * fVar17 * fVar18;
  param_2[1] = (fVar6 + fVar9) * fVar15 * fVar18 +
               (fVar4 + fVar9) * fVar16 * fVar18 + (fVar4 + fVar6) * fVar17 * fVar18;
  param_2[2] = (fVar2 + fVar7) * fVar15 * fVar18 +
               (fVar1 + fVar7) * fVar16 * fVar18 + (fVar1 + fVar2) * fVar17 * fVar18;
  return;
}



// FUNCTION 14829fe96 FUN_14829fe96 body=445 status=ok
// SIG undefined FUN_14829fe96(void)

undefined8 FUN_14829fe96(longlong *param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar18;
  
  fVar12 = *(float *)(param_2 + 0x28);
  lVar8 = *param_1;
  fVar17 = fVar12;
  uVar7 = param_3;
  do {
    fVar17 = fVar17 + *(float *)(*(longlong *)(lVar8 + 0x68) + (ulonglong)uVar7 * 4);
    uVar7 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)uVar7 * 4);
  } while (uVar7 != param_3);
  fVar11 = (float)FUN_14829fb76(param_1,param_2,param_3);
  if (((*(float *)(lVar8 + 8) <= 0.0) || (fVar17 <= *(float *)(lVar8 + 8))) &&
     ((*(float *)(lVar8 + 0xc) <= 0.0 || (fVar11 <= *(float *)(lVar8 + 0xc))))) {
    lVar9 = *(longlong *)(lVar8 + 0x98);
    uVar10 = (ulonglong)param_3;
    fVar18 = 1.0 - (*(float *)(lVar9 + 8 + uVar10 * 0xc) * *(float *)(param_2 + 0x24) +
                   *(float *)(lVar9 + uVar10 * 0xc) * *(float *)(param_2 + 0x1c) +
                   *(float *)(lVar9 + 4 + uVar10 * 0xc) * *(float *)(param_2 + 0x20));
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
    if (fVar18 < 0.707) {
      fVar13 = (float)FUN_1482a0d9e(param_1,param_2,param_3);
      fVar1 = *(float *)(lVar8 + 0x1c);
      if ((fVar13 <= 0.0) || (fVar1 < 1000.0)) {
        fVar2 = *(float *)(lVar8 + 0x10);
        fVar3 = *(float *)(param_2 + 0x2c);
        fVar4 = *(float *)(lVar8 + 0x14);
        fVar5 = *(float *)(lVar8 + 0x18);
        fVar14 = (float)FUN_1482a1078(param_1,param_2,param_3);
        fVar6 = *(float *)(lVar8 + 0x20);
        uVar15 = FUN_1482a1130(param_1,param_2,param_3);
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        fVar12 = (float)uVar15 * fVar6 +
                 fVar14 * fVar5 +
                 (1.0 - ((fVar3 * fVar3) / fVar12) / ((fVar11 * fVar11) / fVar17)) * fVar4 +
                 fVar1 * fVar13 + fVar18 * fVar2 + 0.0;
        goto LAB_14829ff1b;
      }
    }
  }
  fVar12 = 3.4028235e+38;
  uVar16 = 0;
LAB_14829ff1b:
  return CONCAT44(uVar16,fVar12);
}



// FUNCTION 1482a0054 FUN_1482a0054 body=196 status=ok
// SIG undefined FUN_1482a0054(void)

void FUN_1482a0054(uint *param_1,float param_2,undefined4 param_3)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  void *_Dst;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [40];
  float local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = param_1 + 2;
  uVar3 = param_1[5];
  local_20 = param_2;
  local_1c = param_3;
  if ((ulonglong)uVar3 != 0) {
    if (*(float *)(*(longlong *)puVar1 + (ulonglong)(uVar3 - 1) * 8) <= param_2) {
      uVar5 = 0;
      do {
        pfVar2 = (float *)(*(longlong *)puVar1 + uVar5 * 8);
        if (*pfVar2 <= param_2 && param_2 != *pfVar2) goto LAB_1482a00d0;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar5 = (ulonglong)uVar3;
LAB_1482a00d0:
      FUN_1482a1560(puVar1,uVar5,&local_20);
      uVar3 = param_1[5];
      if ((*param_1 < uVar3) && (_Dst = *(void **)puVar1, _Dst != (void *)0x0)) {
        uVar4 = 1;
        if (1 < uVar3) {
          memmove(_Dst,(void *)((ulonglong)param_1[4] + (longlong)_Dst),
                  (ulonglong)((uVar3 - 1) * param_1[4]));
          uVar4 = param_1[5];
          if (uVar4 == 0) goto LAB_1482a00a0;
        }
        param_1[5] = uVar4 - 1;
      }
      goto LAB_1482a00a0;
    }
  }
  FUN_148298fa0(puVar1,&local_20);
LAB_1482a00a0:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a011a FUN_1482a011a body=1067 status=ok
// SIG undefined FUN_1482a011a(void)

undefined8 FUN_1482a011a(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte local_100;
  
  local_100 = 1;
  if (0x14 < *(uint *)((longlong)param_1 + 0xc)) {
    if (*(int *)((longlong)param_1 + 0x5c) == 0) {
      local_100 = FUN_1482a0546(param_1);
      local_100 = local_100 ^ 1;
    }
    else {
      local_100 = 0;
    }
  }
  uVar7 = *(uint *)(param_3 + 1);
  plVar14 = param_3;
  if (uVar7 == 0) {
    uVar7 = *(uint *)((longlong)param_1 + 0xc);
    plVar14 = param_1;
  }
  if (local_100 == 0) {
    uVar9 = 0;
    lVar21 = 0;
  }
  else {
    lVar21 = *param_1;
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
  }
  if (uVar7 != 0) {
    lVar3 = *plVar14;
    uVar19 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + uVar19 * 4);
      if ((int)param_1[6] == 0) {
        iVar10 = uVar2 % 3 + 1;
        if (iVar10 == 3) {
          iVar10 = 0;
        }
        uVar13 = iVar10 + (uVar2 / 3) * 3;
        uVar22 = (ulonglong)uVar13;
        uVar18 = uVar2;
      }
      else {
        iVar10 = uVar2 % 3 + 1;
        if (iVar10 == 3) {
          iVar10 = 0;
        }
        uVar22 = (ulonglong)(iVar10 + (uVar2 / 3) * 3);
        uVar13 = *(uint *)(param_1[5] + uVar22 * 4);
        uVar18 = *(uint *)(param_1[5] + (ulonglong)uVar2 * 4);
      }
      uVar11 = (uint)uVar22;
      lVar4 = param_1[3];
      uVar20 = (ulonglong)uVar18;
      uVar17 = (ulonglong)uVar13;
      fVar25 = *(float *)(lVar4 + uVar20 * 8);
      fVar26 = *(float *)(lVar4 + 4 + uVar20 * 8);
      fVar23 = *(float *)(lVar4 + uVar17 * 8);
      fVar1 = *(float *)(lVar4 + 4 + uVar17 * 8);
      if (local_100 == 0) {
        uVar9 = uVar2;
        if ((int)param_1[6] != 0) {
          uVar11 = *(uint *)(param_1[5] + uVar22 * 4);
          uVar9 = *(uint *)(param_1[5] + (ulonglong)uVar2 * 4);
        }
        FUN_1482a084e(param_1,*(undefined8 *)(lVar4 + (ulonglong)uVar9 * 8),
                      *(undefined8 *)(lVar4 + (ulonglong)uVar11 * 8));
        lVar21 = param_1[0x10];
        uVar9 = *(uint *)((longlong)param_1 + 0x8c);
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        if (((int)param_3[1] == 0) && (uVar22 = uVar19 + 1, uVar22 == uVar7)) {
          return 0;
        }
      }
      if ((uint)uVar22 < uVar9) {
        fVar27 = fVar26;
        if (fVar1 <= fVar26) {
          fVar27 = fVar1;
        }
        fVar28 = fVar25;
        if (fVar23 <= fVar25) {
          fVar28 = fVar23;
        }
        if (fVar26 <= fVar1) {
          fVar26 = fVar1;
        }
        if (fVar25 <= fVar23) {
          fVar25 = fVar23;
        }
        uVar22 = uVar22 & 0xffffffff;
        uVar11 = 0xffffffff;
        do {
          uVar8 = *(uint *)(lVar21 + uVar22 * 4);
          if (uVar8 != uVar11 && uVar2 != uVar8) {
            uVar11 = uVar8;
            if ((ulonglong)*(uint *)(param_4 + 1) != 0) {
              uVar16 = 0;
              do {
                if (uVar8 == *(uint *)(*param_4 + uVar16 * 4)) goto LAB_1482a02d9;
                uVar16 = uVar16 + 1;
              } while (*(uint *)(param_4 + 1) != uVar16);
            }
            if ((int)param_1[6] == 0) {
              iVar10 = uVar8 % 3 + 1;
              if (iVar10 == 3) {
                iVar10 = 0;
              }
              uVar12 = iVar10 + (uVar8 / 3) * 3;
            }
            else {
              iVar10 = uVar8 % 3 + 1;
              if (iVar10 == 3) {
                iVar10 = 0;
              }
              uVar12 = *(uint *)(param_1[5] + (ulonglong)(iVar10 + (uVar8 / 3) * 3) * 4);
              uVar8 = *(uint *)(param_1[5] + (ulonglong)uVar8 * 4);
            }
            if ((((uVar13 != uVar12) && (uVar13 != uVar8)) && (uVar18 != uVar8)) &&
               (uVar18 != uVar12)) {
              lVar5 = param_1[3];
              uVar16 = (ulonglong)uVar8;
              uVar15 = (ulonglong)uVar12;
              fVar23 = *(float *)(lVar5 + uVar16 * 8);
              fVar1 = *(float *)(lVar5 + uVar15 * 8);
              fVar24 = fVar23;
              if (fVar23 <= fVar1) {
                fVar24 = fVar1;
              }
              if (fVar28 <= fVar24) {
                if (fVar1 <= fVar23) {
                  fVar23 = fVar1;
                }
                if (fVar23 <= fVar25) {
                  fVar23 = *(float *)(lVar5 + 4 + uVar16 * 8);
                  fVar1 = *(float *)(lVar5 + 4 + uVar15 * 8);
                  fVar24 = fVar23;
                  if (fVar23 <= fVar1) {
                    fVar24 = fVar1;
                  }
                  if (fVar27 <= fVar24) {
                    if (fVar1 <= fVar23) {
                      fVar23 = fVar1;
                    }
                    if ((fVar23 <= fVar26) &&
                       (cVar6 = FUN_143afd8af(lVar4 + uVar20 * 8,lVar4 + uVar17 * 8,
                                              lVar5 + uVar16 * 8,lVar5 + uVar15 * 8,param_2),
                       cVar6 != '\0')) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
LAB_1482a02d9:
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar9);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar7);
  }
  return 0;
}



// FUNCTION 1482a0546 FUN_1482a0546 body=774 status=ok
// SIG undefined FUN_1482a0546(void)

undefined8 FUN_1482a0546(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  uVar13 = (ulonglong)uVar4;
  if (uVar13 == 0) {
    auVar17._0_12_ = ZEXT812(0xff7fffff);
    auVar17._12_4_ = 0;
    fVar18 = 3.4028235e+38;
    auVar15 = ZEXT816(0xff7fffff);
    fVar20 = fVar18;
  }
  else {
    lVar5 = param_1[3];
    fVar18 = 3.4028235e+38;
    auVar15._0_12_ = ZEXT812(0xff7fffff);
    auVar15._12_4_ = 0;
    uVar10 = 0;
    auVar17 = ZEXT816(0xff7fffff);
    fVar20 = 3.4028235e+38;
    do {
      uVar12 = *(uint *)(*param_1 + uVar10 * 4);
      uVar3 = uVar12;
      if ((int)param_1[6] != 0) {
        uVar3 = *(uint *)(param_1[5] + (ulonglong)uVar12 * 4);
      }
      iVar11 = uVar12 % 3 + 1;
      if (iVar11 == 3) {
        iVar11 = 0;
      }
      uVar12 = iVar11 + (uVar12 / 3) * 3;
      if ((int)param_1[6] != 0) {
        uVar12 = *(uint *)(param_1[5] + (ulonglong)uVar12 * 4);
      }
      fVar19 = *(float *)(lVar5 + (ulonglong)uVar3 * 8);
      fVar2 = *(float *)(lVar5 + 4 + (ulonglong)uVar3 * 8);
      if (fVar2 <= fVar18) {
        fVar18 = fVar2;
      }
      if (fVar19 <= fVar20) {
        fVar20 = fVar19;
      }
      if (auVar15._0_4_ <= fVar2) {
        auVar15._0_4_ = fVar2;
      }
      if (auVar17._0_4_ <= fVar19) {
        auVar17._0_4_ = fVar19;
      }
      fVar19 = *(float *)(lVar5 + (ulonglong)uVar12 * 8);
      fVar2 = *(float *)(lVar5 + 4 + (ulonglong)uVar12 * 8);
      if (fVar2 <= fVar18) {
        fVar18 = fVar2;
      }
      if (fVar19 <= fVar20) {
        fVar20 = fVar19;
      }
      if (auVar15._0_4_ <= fVar2) {
        auVar15._0_4_ = fVar2;
      }
      if (auVar17._0_4_ <= fVar19) {
        auVar17._0_4_ = fVar19;
      }
      uVar10 = uVar10 + 1;
    } while (uVar13 != uVar10);
  }
  *(float *)((longlong)param_1 + 0x3c) = fVar20;
  *(float *)(param_1 + 8) = fVar18;
  auVar14._4_12_ = auVar15._4_12_;
  fVar18 = auVar15._0_4_ - fVar18;
  auVar16._4_12_ = auVar17._4_12_;
  fVar20 = auVar17._0_4_ - fVar20;
  fVar19 = fVar20;
  if (fVar20 <= fVar18) {
    fVar19 = fVar18;
  }
  uVar12 = 0x20;
  if (0x20 < uVar4) {
    uVar12 = uVar4;
  }
  if (0x1ff < uVar12) {
    uVar12 = 0x200;
  }
  fVar19 = fVar19 / (float)(int)uVar12;
  *(float *)(param_1 + 7) = fVar19;
  if (fVar19 <= 0.0) {
    uVar9 = 0;
  }
  else {
    auVar16._0_4_ = fVar20 / fVar19;
    auVar17 = roundss(auVar16,auVar16,10);
    auVar14._0_4_ = fVar18 / fVar19;
    auVar15 = roundss(auVar14,auVar14,10);
    uVar12 = (uint)(longlong)auVar17._0_4_;
    *(uint *)((longlong)param_1 + 0x44) = uVar12;
    uVar3 = (uint)(longlong)auVar15._0_4_;
    *(uint *)(param_1 + 9) = uVar3;
    uVar9 = 0;
    if ((1 < uVar12) && (1 < uVar3)) {
      uVar12 = uVar12 * uVar3;
      *(uint *)((longlong)param_1 + 0x5c) = uVar12;
      if (*(uint *)(param_1 + 0xc) < uVar12) {
        FUN_148298f1a(param_1 + 10);
        uVar12 = *(uint *)((longlong)param_1 + 0x5c);
      }
      if (uVar12 != 0) {
        uVar10 = 0;
        do {
          *(undefined4 *)(param_1[10] + uVar10 * 4) = 0xffffffff;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)((longlong)param_1 + 0x5c));
      }
      plVar1 = param_1 + 0xd;
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
      if (*(uint *)(param_1 + 0xf) < uVar4 * 2) {
        FUN_148298f1a(plVar1);
      }
      uVar9 = 1;
      if (uVar13 != 0) {
        uVar10 = 0;
        do {
          local_4c = *(uint *)(*param_1 + uVar10 * 4);
          iVar11 = local_4c % 3 + 1;
          if (iVar11 == 3) {
            iVar11 = 0;
          }
          uVar8 = (ulonglong)(iVar11 + (local_4c / 3) * 3);
          if ((int)param_1[6] == 0) {
            lVar5 = param_1[3];
            puVar6 = (undefined8 *)(lVar5 + uVar8 * 8);
            uVar4 = local_4c;
          }
          else {
            lVar5 = param_1[3];
            puVar6 = (undefined8 *)(lVar5 + (ulonglong)*(uint *)(param_1[5] + uVar8 * 4) * 8);
            uVar4 = *(uint *)(param_1[5] + (ulonglong)local_4c * 4);
          }
          FUN_1482a0958(param_1,*(undefined8 *)(lVar5 + (ulonglong)uVar4 * 8),*puVar6);
          if (*(int *)((longlong)param_1 + 0xa4) != 0) {
            uVar8 = 0;
            do {
              lVar5 = param_1[10];
              uVar7 = (ulonglong)*(uint *)(param_1[0x13] + uVar8 * 4);
              uVar4 = *(uint *)(lVar5 + uVar7 * 4);
              if (uVar4 != 0xffffffff) {
                lVar5 = *plVar1;
                do {
                  uVar7 = (ulonglong)uVar4;
                  uVar4 = *(uint *)(lVar5 + 4 + uVar7 * 4);
                } while (uVar4 != 0xffffffff);
                uVar7 = uVar7 + 1;
              }
              *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)((longlong)param_1 + 0x74);
              FUN_148298fa0(plVar1,&local_4c);
              local_50 = 0xffffffff;
              FUN_148298fa0(plVar1,&local_50);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)((longlong)param_1 + 0xa4));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1482a084e FUN_1482a084e body=264 status=ok
// SIG undefined FUN_1482a084e(void)

void FUN_1482a084e(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_1482a0958();
  uVar3 = *(uint *)(param_1 + 0xa4);
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x50) +
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x98) + uVar7 * 4) * 4);
      if (uVar5 != 0xffffffff) {
        lVar4 = *(longlong *)(param_1 + 0x68);
        do {
          local_34 = *(undefined4 *)(lVar4 + (ulonglong)uVar5 * 4);
          FUN_148298fa0((longlong *)(param_1 + 0x80),&local_34);
          lVar4 = *(longlong *)(param_1 + 0x68);
          uVar5 = *(uint *)(lVar4 + 4 + (ulonglong)uVar5 * 4);
        } while (uVar5 != 0xffffffff);
        uVar3 = *(uint *)(param_1 + 0xa4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (((ulonglong)uVar3 != 0) && (1 < (int)uVar3)) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    uVar7 = 1;
    do {
      uVar5 = *(uint *)(lVar4 + uVar7 * 4);
      uVar6 = uVar7;
      do {
        uVar1 = *(uint *)(lVar4 + (uVar6 - 1 & 0xffffffff) * 4);
        if (uVar1 <= uVar5) goto LAB_1482a0925;
        *(uint *)(lVar4 + uVar6 * 4) = uVar1;
        bVar2 = 1 < (longlong)uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar2);
      uVar6 = 0;
LAB_1482a0925:
      *(uint *)(lVar4 + (longlong)(int)uVar6 * 4) = uVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a0958 FUN_1482a0958 body=1092 status=ok
// SIG undefined FUN_1482a0958(void)

void FUN_1482a0958(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
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
  undefined1 auStack_128 [40];
  ulonglong local_100;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  fVar20 = (float)((ulonglong)param_3 >> 0x20);
  fVar14 = fVar20 - fVar16;
  fVar15 = (float)param_3 - (float)param_2;
  fVar11 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
  fVar12 = fVar14 * (1.0 / fVar11);
  fVar10 = fVar12;
  if (fVar11 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x38);
  fVar17 = (float)param_2 - *(float *)(param_1 + 0x3c);
  fVar18 = 0.0;
  if (0.0 <= fVar17 / fVar1) {
    fVar18 = fVar17 / fVar1;
  }
  uVar5 = *(int *)(param_1 + 0x44) - 1;
  uVar9 = (longlong)fVar18 & 0xffffffff;
  if (uVar5 <= (uint)(longlong)fVar18) {
    uVar9 = (ulonglong)uVar5;
  }
  uVar6 = *(int *)(param_1 + 0x48) - 1;
  fVar16 = fVar16 - *(float *)(param_1 + 0x40);
  fVar18 = 0.0;
  if (0.0 <= fVar16 / fVar1) {
    fVar18 = fVar16 / fVar1;
  }
  uVar3 = (longlong)fVar18 & 0xffffffff;
  if (uVar6 <= (uint)(longlong)fVar18) {
    uVar3 = (ulonglong)uVar6;
  }
  fVar19 = ((float)param_3 - *(float *)(param_1 + 0x3c)) / fVar1;
  fVar18 = 0.0;
  if (0.0 <= fVar19) {
    fVar18 = fVar19;
  }
  if ((uint)(longlong)fVar18 < uVar5) {
    uVar5 = (uint)(longlong)fVar18;
  }
  fVar18 = (fVar20 - *(float *)(param_1 + 0x40)) / fVar1;
  fVar20 = 0.0;
  if (0.0 <= fVar18) {
    fVar20 = fVar18;
  }
  if ((uint)(longlong)fVar20 < uVar6) {
    uVar6 = (uint)(longlong)fVar20;
  }
  uVar8 = (uint)uVar9;
  if (0.0 <= fVar15) {
    fVar17 = (float)(uVar8 + 1) * fVar1 - fVar17;
  }
  else {
    fVar17 = fVar17 - (float)uVar9 * fVar1;
  }
  uVar2 = (uint)uVar3;
  if (0.0 <= fVar14) {
    fVar16 = (float)(uVar2 + 1) * fVar1 - fVar16;
  }
  else {
    fVar16 = fVar16 - (float)uVar3 * fVar1;
  }
  uVar7 = -(uint)(fVar15 < 0.0) | 1;
  fVar20 = 3.4028235e+38;
  fVar19 = 3.4028235e+38;
  fVar18 = 3.4028235e+38;
  if (0.0 < fVar11) {
    fVar13 = (1.0 / fVar11) * fVar15;
    fVar19 = 3.4028235e+38;
    fVar18 = 3.4028235e+38;
    if (0.0001 < ABS(fVar13)) {
      fVar13 = (float)(-(uint)(0.0 < fVar11) & (uint)fVar13);
      fVar18 = (float)(int)uVar7;
      fVar19 = (fVar17 * fVar18) / fVar13;
      fVar18 = (fVar18 * fVar1) / fVar13;
    }
  }
  uVar4 = -(uint)(fVar14 < 0.0) | 1;
  if (fVar11 <= 0.0) {
    fVar11 = 3.4028235e+38;
  }
  else {
    fVar11 = 3.4028235e+38;
    if (0.0001 < ABS(fVar12)) {
      fVar11 = (float)(int)uVar4;
      fVar20 = (fVar16 * fVar11) / fVar10;
      fVar11 = (fVar1 * fVar11) / fVar10;
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  local_f4 = *(int *)(param_1 + 0x44) * uVar2 + uVar8;
  FUN_148298fa0(param_1 + 0x98);
  if ((uVar8 != uVar5) || (uVar2 != uVar6)) {
    while( true ) {
      if (fVar20 <= fVar19) {
        fVar20 = fVar20 + fVar11;
        uVar3 = (ulonglong)((int)uVar3 + uVar4);
      }
      else {
        fVar19 = fVar19 + fVar18;
        uVar9 = (ulonglong)((int)uVar9 + uVar7);
      }
      uVar8 = (uint)uVar9;
      if (*(uint *)(param_1 + 0x44) <= uVar8) break;
      uVar2 = (uint)uVar3;
      if ((*(uint *)(param_1 + 0x48) <= uVar2) || (fVar15 < 0.0 && uVar8 < uVar5)) break;
      if ((uVar5 < uVar8 && 0.0 <= fVar15) ||
         ((uVar2 < uVar6 && fVar14 < 0.0 || (fVar14 >= 0.0 && uVar6 < uVar2)))) break;
      local_f4 = *(uint *)(param_1 + 0x44) * uVar2 + uVar8;
      local_100 = uVar9;
      FUN_148298fa0(param_1 + 0x98,&local_f4);
      uVar9 = local_100;
      if (((uint)local_100 == uVar5) && (uVar2 == uVar6)) break;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a0d9e FUN_1482a0d9e body=729 status=ok
// SIG undefined FUN_1482a0d9e(void)

uint FUN_1482a0d9e(longlong *param_1,int *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x30);
  lVar6 = *(longlong *)(lVar5 + 0x108);
  lVar7 = *(longlong *)(param_1[1] + 0x20);
  fVar21 = 0.0;
  fVar20 = 0.0;
  uVar3 = param_3;
  do {
    uVar11 = (ulonglong)uVar3;
    uVar3 = uVar3 * 3;
    lVar17 = 0;
    do {
      uVar13 = (ulonglong)uVar3 + lVar17;
      uVar2 = *(uint *)(lVar6 + (uVar13 & 0xffffffff) * 4);
      uVar15 = (ulonglong)uVar2;
      if ((uVar15 != 0xffffffff) &&
         (uVar16 = uVar15 / 3, *(int *)(param_1[6] + uVar16 * 4) == *param_2)) {
        fVar1 = *(float *)(*(longlong *)(lVar4 + 0x50) + (uVar13 & 0xffffffff) * 4);
        fVar21 = fVar21 + fVar1;
        cVar10 = FUN_1482a1418(lVar5,uVar13 & 0xffffffff);
        if ((cVar10 != '\0') &&
           (cVar10 = FUN_1482a124c(param_1,uVar13 & 0xffffffff), cVar10 != '\0')) {
          if ((*(byte *)(lVar5 + 4) & 2) == 0) {
            lVar8 = *(longlong *)(lVar4 + 0x98);
            fVar18 = *(float *)(lVar8 + 8 + uVar11 * 0xc) * *(float *)(lVar8 + 8 + uVar16 * 0xc) +
                     *(float *)(lVar8 + uVar11 * 0xc) * *(float *)(lVar8 + uVar16 * 0xc) +
                     *(float *)(lVar8 + 4 + uVar11 * 0xc) * *(float *)(lVar8 + 4 + uVar16 * 0xc);
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            if (1.0 <= fVar18) {
              fVar18 = 1.0;
            }
          }
          else {
            lVar8 = *(longlong *)(lVar5 + 0x40);
            lVar9 = *(longlong *)(lVar5 + 0x70);
            uVar13 = (ulonglong)*(uint *)(lVar8 + (ulonglong)(uVar3 + (int)lVar17) * 4);
            iVar12 = (int)lVar17 + 1;
            if (lVar17 == 2) {
              iVar12 = 0;
            }
            uVar16 = (ulonglong)*(uint *)(lVar8 + (ulonglong)(iVar12 + uVar3) * 4);
            uVar15 = (ulonglong)*(uint *)(lVar8 + uVar15 * 4);
            iVar12 = uVar2 % 3 + 1;
            if (iVar12 == 3) {
              iVar12 = 0;
            }
            uVar14 = (ulonglong)*(uint *)(lVar8 + (ulonglong)(iVar12 + (uVar2 - uVar2 % 3)) * 4);
            fVar18 = *(float *)(lVar9 + 8 + uVar13 * 0xc) * *(float *)(lVar9 + 8 + uVar14 * 0xc) +
                     *(float *)(lVar9 + uVar13 * 0xc) * *(float *)(lVar9 + uVar14 * 0xc) +
                     *(float *)(lVar9 + 4 + uVar13 * 0xc) * *(float *)(lVar9 + 4 + uVar14 * 0xc);
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            if (1.0 <= fVar18) {
              fVar18 = 1.0;
            }
            fVar19 = *(float *)(lVar9 + 8 + uVar16 * 0xc) * *(float *)(lVar9 + 8 + uVar15 * 0xc) +
                     *(float *)(lVar9 + uVar16 * 0xc) * *(float *)(lVar9 + uVar15 * 0xc) +
                     *(float *)(lVar9 + 4 + uVar16 * 0xc) * *(float *)(lVar9 + 4 + uVar15 * 0xc);
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            if (1.0 <= fVar19) {
              fVar19 = 1.0;
            }
            fVar18 = (fVar19 + fVar18) * 0.5;
          }
          fVar20 = fVar20 + fVar1 * (1.0 - fVar18);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    uVar3 = *(uint *)(lVar7 + uVar11 * 4);
  } while (uVar3 != param_3);
  return -(uint)(0.0 < fVar20) & (uint)(fVar20 / fVar21);
}



// FUNCTION 1482a1078 FUN_1482a1078 body=183 status=ok
// SIG undefined FUN_1482a1078(void)

float FUN_1482a1078(longlong *param_1,int *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = *(longlong *)(param_1[1] + 0x38);
  fVar7 = 0.0;
  fVar8 = 0.0;
  uVar4 = param_3;
  do {
    iVar6 = 0;
    do {
      uVar5 = (ulonglong)(uVar4 * 3 + iVar6);
      fVar1 = *(float *)(*(longlong *)(*param_1 + 0x50) + uVar5 * 4);
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x108) + uVar5 * 4);
      if (uVar2 == 0xffffffff) {
LAB_1482a10f5:
        fVar8 = fVar8 + fVar1;
      }
      else {
        uVar5 = (ulonglong)uVar2 / 3;
        if (*(int *)(lVar3 + uVar5 * 4) != *(int *)(lVar3 + (ulonglong)param_3 * 4)) {
          if (*(int *)(param_1[6] + uVar5 * 4) != *param_2) goto LAB_1482a10f5;
          fVar7 = fVar7 + fVar1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    uVar4 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)uVar4 * 4);
    if (uVar4 == param_3) {
      fVar7 = (fVar8 - fVar7) / (fVar7 + fVar8);
      if (0.0 <= fVar7) {
        fVar7 = 0.0;
      }
      return fVar7;
    }
  } while( true );
}



// FUNCTION 1482a1130 FUN_1482a1130 body=283 status=ok
// SIG undefined FUN_1482a1130(void)

uint FUN_1482a1130(longlong *param_1,int *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar12;
  float fVar13;
  ulonglong uVar11;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  lVar5 = *(longlong *)(lVar4 + 0x108);
  lVar6 = *(longlong *)(param_1[1] + 0x20);
  fVar12 = 0.0;
  fVar13 = 0.0;
  uVar8 = param_3;
  do {
    iVar9 = 0;
    do {
      uVar10 = uVar8 * 3 + iVar9;
      uVar11 = (ulonglong)uVar10;
      uVar2 = *(uint *)(lVar5 + uVar11 * 4);
      if ((uVar2 != 0xffffffff) && (*(int *)(param_1[6] + ((ulonglong)uVar2 / 3) * 4) == *param_2))
      {
        fVar1 = *(float *)(*(longlong *)(lVar3 + 0x50) + uVar11 * 4);
        fVar13 = fVar13 + fVar1;
        cVar7 = FUN_1482a1418(lVar4,uVar11);
        if (cVar7 != '\0') {
          cVar7 = FUN_1482a1494(lVar4,uVar10);
          if (cVar7 != '\0') {
            fVar12 = fVar12 + fVar1;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    uVar8 = *(uint *)(lVar6 + (ulonglong)uVar8 * 4);
  } while (uVar8 != param_3);
  return -(uint)(0.0 < fVar12) & (uint)(fVar12 / fVar13);
}



// FUNCTION 1482a124c FUN_1482a124c body=459 status=ok
// SIG undefined FUN_1482a124c(void)

undefined8 FUN_1482a124c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  
  lVar7 = *param_1;
  lVar8 = *(longlong *)(lVar7 + 0x30);
  uVar12 = (ulonglong)param_2;
  uVar2 = *(uint *)(*(longlong *)(lVar8 + 0x108) + uVar12 * 4);
  uVar11 = (ulonglong)uVar2;
  if (uVar11 == 0xffffffff) {
LAB_1482a12a8:
    uVar6 = 0;
  }
  else {
    uVar14 = uVar12 / 3;
    uVar10 = uVar11 / 3;
    if ((*(byte *)(lVar8 + 4) & 2) == 0) {
      if (*(int *)(*(longlong *)(param_1[1] + 0x38) + uVar14 * 4) ==
          *(int *)(*(longlong *)(param_1[1] + 0x38) + uVar10 * 4)) goto LAB_1482a12a8;
      lVar8 = *(longlong *)(lVar7 + 0x98);
      uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      if (0.001 < ABS(*(float *)(lVar8 + uVar14 * 0xc) - *(float *)(lVar8 + uVar10 * 0xc))) {
        return uVar6;
      }
      lVar7 = lVar8 + uVar10 * 0xc;
      lVar8 = lVar8 + uVar14 * 0xc;
    }
    else {
      lVar7 = *(longlong *)(lVar8 + 0x40);
      iVar13 = param_2 % 3 + 1;
      if (iVar13 == 3) {
        iVar13 = 0;
      }
      uVar3 = *(uint *)(lVar7 + uVar12 * 4);
      uVar4 = *(uint *)(lVar7 + uVar11 * 4);
      iVar9 = uVar2 % 3 + 1;
      if (iVar9 == 3) {
        iVar9 = 0;
      }
      uVar5 = *(uint *)(lVar7 + (ulonglong)(iVar13 + (param_2 - param_2 % 3)) * 4);
      uVar2 = *(uint *)(lVar7 + (ulonglong)(iVar9 + (uVar2 - uVar2 % 3)) * 4);
      if ((uVar5 == uVar4) && (uVar3 == uVar2)) {
        return 0;
      }
      lVar8 = *(longlong *)(lVar8 + 0x70);
      uVar6 = 1;
      if (0.001 < ABS(*(float *)(lVar8 + (ulonglong)uVar3 * 0xc) -
                      *(float *)(lVar8 + (ulonglong)uVar2 * 0xc))) {
        return 1;
      }
      lVar7 = lVar8 + (ulonglong)uVar2 * 0xc;
      lVar1 = lVar8 + (ulonglong)uVar3 * 0xc;
      if (0.001 < ABS(*(float *)(lVar1 + 4) - *(float *)(lVar7 + 4))) {
        return 1;
      }
      if (0.001 < ABS(*(float *)(lVar1 + 8) - *(float *)(lVar7 + 8))) {
        return 1;
      }
      if (0.001 < ABS(*(float *)(lVar8 + (ulonglong)uVar5 * 0xc) -
                      *(float *)(lVar8 + (ulonglong)uVar4 * 0xc))) {
        return 1;
      }
      lVar7 = lVar8 + (ulonglong)uVar4 * 0xc;
      lVar8 = lVar8 + (ulonglong)uVar5 * 0xc;
    }
    if (ABS(*(float *)(lVar8 + 4) - *(float *)(lVar7 + 4)) <= 0.001) {
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),
                       0.001 < ABS(*(float *)(lVar8 + 8) - *(float *)(lVar7 + 8)));
    }
  }
  return uVar6;
}



// FUNCTION 1482a1418 FUN_1482a1418 body=124 status=ok
// SIG undefined FUN_1482a1418(void)

undefined4 FUN_1482a1418(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x108) + (ulonglong)param_2 * 4);
  uVar3 = 0;
  if ((ulonglong)uVar1 != 0xffffffff) {
    iVar5 = uVar1 % 3 + 1;
    if (iVar5 == 3) {
      iVar5 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 1;
    if (*(int *)(lVar2 + (ulonglong)param_2 * 4) ==
        *(int *)(lVar2 + (ulonglong)(iVar5 + (uVar1 / 3) * 3) * 4)) {
      iVar4 = param_2 % 3 + 1;
      iVar5 = 0;
      if (iVar4 != 3) {
        iVar5 = iVar4;
      }
      iVar5 = *(int *)(lVar2 + (ulonglong)(iVar5 + (param_2 / 3) * 3) * 4);
      uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),iVar5 != *(int *)(lVar2 + (ulonglong)uVar1 * 4));
    }
  }
  return uVar3;
}



// FUNCTION 1482a1494 FUN_1482a1494 body=203 status=ok
// SIG undefined FUN_1482a1494(void)

uint FUN_1482a1494(longlong param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x108) + (ulonglong)param_2 * 4);
  uVar6 = 0;
  if ((ulonglong)uVar3 != 0xffffffff) {
    iVar10 = uVar3 % 3 + 1;
    if (iVar10 == 3) {
      iVar10 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar5 = *(longlong *)(param_1 + 0x88);
    uVar9 = (ulonglong)*(uint *)(lVar4 + (ulonglong)(iVar10 + (uVar3 / 3) * 3) * 4);
    uVar7 = (ulonglong)*(uint *)(lVar4 + (ulonglong)param_2 * 4);
    fVar2 = *(float *)(lVar5 + uVar7 * 8);
    pfVar1 = (float *)(lVar5 + uVar9 * 8);
    uVar6 = 1;
    if ((((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) &&
        (fVar2 = *(float *)(lVar5 + 4 + uVar7 * 8), pfVar1 = (float *)(lVar5 + 4 + uVar9 * 8),
        fVar2 == *pfVar1)) && (!NAN(fVar2) && !NAN(*pfVar1))) {
      iVar8 = param_2 % 3 + 1;
      iVar10 = 0;
      if (iVar8 != 3) {
        iVar10 = iVar8;
      }
      uVar7 = (ulonglong)*(uint *)(lVar4 + (ulonglong)uVar3 * 4);
      uVar9 = (ulonglong)*(uint *)(lVar4 + (ulonglong)(iVar10 + (param_2 / 3) * 3) * 4);
      uVar6 = -(uint)(*(float *)(lVar5 + uVar7 * 8) != *(float *)(lVar5 + uVar9 * 8) ||
                     *(float *)(lVar5 + 4 + uVar7 * 8) != *(float *)(lVar5 + 4 + uVar9 * 8));
    }
  }
  return uVar6 & 0xffffff01;
}



// FUNCTION 1482a1560 FUN_1482a1560 body=156 status=ok
// SIG undefined FUN_1482a1560(void)

void FUN_1482a1560(longlong *param_1,uint param_2,void *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
  *(uint *)((longlong)param_1 + 0xc) = uVar2;
  if (*(uint *)(param_1 + 2) < uVar2) {
    uVar4 = uVar2 >> 2;
    if (*(uint *)(param_1 + 2) == 0) {
      uVar4 = 0;
    }
    FUN_148298f1a(param_1,uVar4 + uVar2);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar2 = *(int *)((longlong)param_1 + 0xc) - 1;
    iVar5 = uVar2 - param_2;
    if (param_2 <= uVar2 && iVar5 != 0) {
      iVar1 = (int)param_1[1];
      memmove((void *)((ulonglong)((param_2 + 1) * iVar1) + lVar3),
              (void *)((ulonglong)(iVar1 * param_2) + lVar3),(ulonglong)(uint)(iVar5 * iVar1));
      lVar3 = *param_1;
    }
    if (param_3 != (void *)0x0 && lVar3 != 0) {
      memcpy((void *)(lVar3 + (ulonglong)(param_2 * *(uint *)(param_1 + 1))),param_3,
             (ulonglong)*(uint *)(param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1482a15fc FUN_1482a15fc body=416 status=ok
// SIG undefined FUN_1482a15fc(void)

undefined4 FUN_1482a15fc(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [44];
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(uint *)(param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  if ((ulonglong)uVar5 != 0) {
    uVar7 = 0;
    do {
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x48) + uVar7 * 4);
      lVar2 = *(longlong *)(*param_1 + 0x98);
      fVar9 = 1.0 - (*(float *)(lVar2 + 8 + uVar4 * 0xc) * *(float *)(param_2 + 0x24) +
                    *(float *)(lVar2 + uVar4 * 0xc) * *(float *)(param_2 + 0x1c) +
                    *(float *)(lVar2 + 4 + uVar4 * 0xc) * *(float *)(param_2 + 0x20));
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      FUN_1482a0054(param_1 + 0xc,fVar9);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
    if (*(uint *)((longlong)param_1 + 0x74) != 0) {
      iVar6 = 0;
      fVar9 = 3.4028235e+38;
      do {
        uVar5 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar5;
        iVar1 = *(int *)(param_1[0xd] + 4 + uVar7 * 8);
        *(uint *)((longlong)param_1 + 0x74) = uVar5;
        if (*(uint *)(param_1 + 0xf) < uVar5) {
          uVar3 = uVar5 >> 2;
          if (*(uint *)(param_1 + 0xf) == 0) {
            uVar3 = 0;
          }
          FUN_148298f1a(param_1 + 0xd,uVar3 + uVar5);
          uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
        }
        FUN_14829fc1e(*(undefined8 *)(*param_1 + 0x30),&local_5c,iVar1);
        fVar8 = *(float *)(param_2 + 0x44) - local_54;
        fVar11 = *(float *)(param_2 + 0x40) - local_58;
        fVar10 = *(float *)(param_2 + 0x3c) - local_5c;
        fVar8 = SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11);
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
          iVar1 = iVar6;
        }
        iVar6 = iVar1;
        fVar9 = fVar8;
      } while ((int)uVar7 != 0);
      goto LAB_1482a175a;
    }
  }
  iVar6 = 0;
LAB_1482a175a:
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar6 != iVar1) {
    *(int *)(param_2 + 0x98) = iVar6;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar6 != iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a179e FUN_1482a179e body=594 status=ok
// SIG undefined FUN_1482a179e(void)

undefined8 FUN_1482a179e(longlong *param_1,undefined4 *param_2,uint *param_3,float param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)(param_2 + 0x12);
  uVar3 = param_2[0x15];
  puVar2 = param_3 + 0x12;
  uVar9 = (ulonglong)param_3[0x15];
  FUN_1482a19f2(puVar1,puVar2);
  if (uVar9 != 0) {
    uVar4 = *param_2;
    uVar8 = 0;
    do {
      *(undefined4 *)(param_1[6] + (ulonglong)*(uint *)(*(longlong *)puVar2 + uVar8 * 4) * 4) =
           uVar4;
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  local_68 = 0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0.0;
  cVar6 = FUN_14829f7f0(param_1,param_2);
  if (cVar6 == '\0') {
    param_2[0x15] = uVar3;
    if ((uint)param_2[0x16] < uVar3) {
      FUN_148298f1a(puVar1,uVar3);
    }
    if (uVar9 != 0) {
      uVar3 = *param_3;
      uVar8 = 0;
      do {
        *(uint *)(param_1[6] + (ulonglong)*(uint *)(*(longlong *)puVar2 + uVar8 * 4) * 4) = uVar3;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
  }
  else {
    uVar8 = (ulonglong)*(uint *)*puVar1;
    lVar5 = *(longlong *)(*param_1 + 0x98);
    if (*(float *)(lVar5 + 8 + uVar8 * 0xc) * local_58 +
        *(float *)(lVar5 + uVar8 * 0xc) * fStack_60 +
        *(float *)(lVar5 + 4 + uVar8 * 0xc) * fStack_5c < 0.0) {
      local_58 = -local_58;
      fStack_5c = -fStack_5c;
      fStack_60 = -fStack_60;
    }
    FUN_14829f8e2(param_1,param_2);
    cVar6 = FUN_14829f994(param_1,param_2);
    if (cVar6 != '\0') {
      param_2[9] = local_58;
      param_2[5] = (undefined4)local_68;
      param_2[6] = local_68._4_4_;
      param_2[7] = fStack_60;
      param_2[8] = fStack_5c;
      param_2[1] = (undefined4)local_78;
      param_2[2] = local_78._4_4_;
      param_2[3] = (undefined4)uStack_70;
      param_2[4] = uStack_70._4_4_;
      FUN_1482a19f2(param_2 + 0x18,param_3 + 0x18);
      param_2[10] = (float)param_3[10] + (float)param_2[10];
      param_2[0xb] = ((float)param_3[0xb] - param_4) + (float)param_2[0xb];
      *(undefined8 *)(param_1[9] + (ulonglong)*param_3 * 8) = 0;
      FUN_14829e7ac(param_3);
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(param_3,0);
      }
      else {
        (*DAT_14cb46730)();
      }
      uVar7 = 1;
      goto LAB_1482a185d;
    }
    param_2[0x15] = uVar3;
    if ((uint)param_2[0x16] < uVar3) {
      FUN_148298f1a(puVar1,uVar3);
    }
    if (uVar9 != 0) {
      uVar3 = *param_3;
      uVar8 = 0;
      do {
        *(uint *)(param_1[6] + (ulonglong)*(uint *)(*(longlong *)puVar2 + uVar8 * 4) * 4) = uVar3;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
    }
  }
  uVar7 = 0;
LAB_1482a185d:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1482a19f2 FUN_1482a19f2 body=105 status=ok
// SIG undefined FUN_1482a19f2(void)

void FUN_1482a19f2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    uVar2 = *(int *)((longlong)param_2 + 0xc) + iVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    if (*(uint *)(param_1 + 2) < uVar2) {
      uVar3 = uVar2 >> 2;
      if (*(uint *)(param_1 + 2) == 0) {
        uVar3 = 0;
      }
      FUN_148298f1a(param_1,uVar3 + uVar2);
    }
    if (*param_1 != 0) {
      memcpy((void *)(*param_1 + (ulonglong)(uint)(iVar1 * (int)param_1[1])),(void *)*param_2,
             (ulonglong)(uint)(*(int *)(param_2 + 1) * *(int *)((longlong)param_2 + 0xc)));
      return;
    }
  }
  return;
}



// FUNCTION 1482a1a5c FUN_1482a1a5c body=1302 status=ok
// SIG undefined FUN_1482a1a5c(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_1482a1a5c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  ulonglong local_140;
  longlong *local_138;
  ulonglong local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  uint local_104 [3];
  int local_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  uint local_b4;
  int local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_6c [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  param_1[8] = param_2[8];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 2;
  param_1[0xd] = param_3;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 4;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 4;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 4;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 4;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 8;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  param_1[0x19] = iVar1;
  if (iVar1 != 0) {
    FUN_148298f1a(param_1 + 0x16,iVar1);
    _Dst = *(void **)(param_1 + 0x16);
    if (_Src != (void *)0x0 && _Dst != (void *)0x0) {
      memcpy(_Dst,_Src,(ulonglong)(uint)(iVar1 * param_1[0x18]));
    }
  }
  local_138 = (longlong *)(param_1 + 0x10);
  uVar12 = param_5[0x19];
  if ((uint)(*(int *)(param_4 + 1) * 3) < (uint)param_5[0x19]) {
    uVar12 = *(int *)(param_4 + 1) * 3;
  }
  uVar10 = (*DAT_14cb46728)(0,0x168);
  local_158 = 0;
  local_150 = 0xffffffff;
  FUN_14828ce1e(uVar10,*param_5,uVar12,*(undefined4 *)(param_4 + 1));
  *(undefined8 *)(param_1 + 10) = uVar10;
  local_b8 = 4;
  local_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 4;
  local_90 = 0;
  local_88 = 0;
  local_80 = 4;
  local_78 = 0;
  local_104[1] = 4;
  local_f8 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 4;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 4;
  local_c0 = 0;
  iVar1 = *(int *)(param_4 + 1);
  param_1[0x13] = iVar1 * 3;
  local_104[2] = uVar12;
  local_b4 = uVar12;
  if ((uint)param_1[0x14] < (uint)(iVar1 * 3)) {
    FUN_148298f1a(local_138);
  }
  local_130 = (ulonglong)*(uint *)(param_4 + 1);
  if (local_130 != 0) {
    local_120 = param_1 + 0x1c;
    local_128 = param_1 + 0x22;
    lVar14 = 0;
    lVar16 = 0;
    uVar13 = 0;
    do {
      iVar1 = (int)uVar13;
      lVar15 = 0;
      local_140 = uVar13;
      do {
        uVar12 = *(uint *)(*(longlong *)(param_5 + 0x10) +
                          (ulonglong)
                          (uint)(*(int *)(*(longlong *)(param_1 + 0x16) + uVar13 * 4) * 3 +
                                (int)lVar15) * 4);
        uVar11 = *(uint *)(*(longlong *)(param_5 + 0x2e) + (ulonglong)uVar12 * 4);
        local_108 = uVar11;
        local_104[0] = uVar12;
        if (((param_1[0xd] == 0) && (uVar12 != uVar11)) &&
           (cVar9 = FUN_143afd844(*(longlong *)(param_5 + 0x22) + (ulonglong)uVar12 * 8,
                                  *(longlong *)(param_5 + 0x22) + (ulonglong)uVar11 * 8,*param_5),
           uVar13 = local_140, cVar9 == '\0')) {
          uVar11 = uVar12;
          local_108 = uVar12;
        }
        if (lVar16 != 0) {
          for (local_10c = *(uint *)(lVar16 + (ulonglong)(local_b0 - 1U & uVar11) * 4);
              local_10c != 0xffffffff; local_10c = *(uint *)(local_88 + (ulonglong)local_10c * 4)) {
            if (*(uint *)(lStack_a0 + (ulonglong)local_10c * 4) == uVar11) goto LAB_1482a1da3;
          }
        }
        local_10c = 0xffffffff;
        local_10c = FUN_14829b754(&local_b8,&local_108);
        local_118 = 0;
        local_110 = 0;
        FUN_14828cfe8(*(undefined8 *)(param_1 + 10),
                      (ulonglong)local_104[0] * 0xc + *(longlong *)(param_5 + 0x16),&local_118,
                      (ulonglong)local_104[0] * 8 + *(longlong *)(param_5 + 0x22));
        uVar13 = local_140;
LAB_1482a1da3:
        if (lVar14 != 0) {
          for (uVar12 = *(uint *)(lVar14 + (ulonglong)(local_f8 - 1U & local_104[0]) * 4);
              uVar12 != 0xffffffff; uVar12 = *(uint *)(local_d0 + (ulonglong)uVar12 * 4)) {
            if (*(uint *)(lStack_e8 + (ulonglong)uVar12 * 4) == local_104[0]) goto LAB_1482a1e1e;
          }
        }
        FUN_14829b754(local_104 + 1,local_104);
        FUN_148298fa0(local_120,local_104);
        FUN_148298fa0(local_128,&local_10c);
        param_1[0xf] = param_1[0xf] + 1;
        uVar13 = local_140;
        lVar14 = local_f0;
LAB_1482a1e1e:
        lVar16 = local_a8;
        uVar12 = 0xffffffff;
        if (lVar14 != 0) {
          uVar11 = *(uint *)(lVar14 + (ulonglong)(local_f8 - 1U & local_104[0]) * 4);
          uVar12 = 0xffffffff;
          if (uVar11 != 0xffffffff) {
            do {
              uVar12 = uVar11;
              if (*(uint *)(lStack_e8 + (ulonglong)uVar11 * 4) == local_104[0]) goto LAB_1482a1e70;
              uVar11 = *(uint *)(local_d0 + (ulonglong)uVar11 * 4);
            } while (uVar11 != 0xffffffff);
            uVar12 = 0xffffffff;
          }
        }
LAB_1482a1e70:
        *(uint *)(*local_138 + (ulonglong)(uint)((int)lVar15 + iVar1 * 3) * 4) = uVar12;
        if (local_a8 != 0) {
          for (uVar12 = *(uint *)(local_a8 + (ulonglong)(local_b0 - 1U & local_108) * 4);
              uVar12 != 0xffffffff; uVar12 = *(uint *)(local_88 + (ulonglong)uVar12 * 4)) {
            if (*(uint *)(lStack_a0 + (ulonglong)uVar12 * 4) == local_108) goto LAB_1482a1ecb;
          }
        }
        uVar12 = 0xffffffff;
LAB_1482a1ecb:
        local_6c[lVar15] = uVar12;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      FUN_14828d812(*(undefined8 *)(param_1 + 10),local_6c,0,0xffffffff);
      uVar13 = local_140 + 1;
    } while (uVar13 != local_130);
  }
  FUN_14829c29a(*(undefined8 *)(param_1 + 10));
  if (param_1[0xd] == 1) {
    param_1[0xc] = 0;
  }
  FUN_14829b7b2(local_104 + 1);
  FUN_14829b7b2(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a1f74 FUN_1482a1f74 body=6250 status=ok
// SIG undefined FUN_1482a1f74(void)

void FUN_1482a1f74(float *param_1,undefined8 *param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  size_t sVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  uint *puVar7;
  undefined4 *puVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  longlong *_Dst;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  uint *local_180;
  longlong *local_178;
  undefined8 *local_170;
  ulonglong local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined8 local_138;
  size_t local_130;
  ulonglong local_128;
  longlong local_120;
  float local_114 [3];
  uint local_108 [6];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar24 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 100);
  if (param_1[0xd] != 0.0) {
    if (uVar24 != 0) {
      lVar11 = 8;
      uVar17 = 0;
      do {
        lVar28 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x58);
        lVar26 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x88);
        fVar37 = *(float *)(lVar28 + -8 + lVar11);
        fVar41 = *(float *)(lVar28 + -4 + lVar11);
        fVar42 = param_1[4];
        fVar38 = param_1[3];
        fVar39 = *(float *)(lVar28 + lVar11);
        fVar40 = param_1[5];
        *(float *)(lVar26 + uVar17 * 8) =
             fVar39 * param_1[2] + fVar37 * *param_1 + fVar41 * param_1[1];
        *(float *)(lVar26 + 4 + uVar17 * 8) = fVar40 * fVar39 + fVar38 * fVar37 + fVar42 * fVar41;
        uVar17 = uVar17 + 1;
        lVar11 = lVar11 + 0xc;
      } while (uVar24 != uVar17);
    }
    fVar37 = param_1[0xc];
    if (fVar37 != 0.0) {
      if (param_1[0xd] != 0.0) {
        pfVar4 = param_1 + 0x2e;
        FUN_1482a44c0(pfVar4,*(undefined8 *)(param_1 + 10),param_3);
        FUN_1482a45dc(pfVar4,*(undefined8 *)(param_1 + 10));
        FUN_1482a4772(pfVar4,*(undefined8 *)(param_1 + 10));
        if (((((*(char *)(param_1 + 0x2e) == '\0') && (param_1[0x30] == 0.0)) &&
             (param_1[0x31] == 0.0)) && ((0.0 < param_1[0x33] && (param_1[0x34] <= 1.1)))) &&
           (param_1[0x35] <= 1.25)) {
          param_1[0xc] = 1.4013e-45;
          goto LAB_1482a20a6;
        }
        fVar37 = param_1[0xc];
      }
      if (fVar37 == 2.8026e-45) {
        lVar11 = *(longlong *)(param_1 + 10);
        if ((code *)*param_2 == (code *)0x0) {
          uVar22 = *(uint *)(lVar11 + 100);
          uVar17 = (ulonglong)uVar22;
          local_138 = param_3;
          if (1 < uVar17) {
            uVar21 = 1;
LAB_1482a2292:
            if ((*(uint *)(*(longlong *)(lVar11 + 0xd8) + (ulonglong)(uVar21 >> 5) * 4) >>
                 (uVar21 & 0x1f) & 1) == 0) goto code_r0x0001482a22a4;
            if (uVar21 != 0xffffffff) {
              uVar25 = 1;
              lVar28 = 0x14;
              uVar36 = (ulonglong)uVar21;
              uVar20 = (ulonglong)uVar21;
              uVar23 = (ulonglong)uVar21;
              uVar27 = (ulonglong)uVar21;
              uVar18 = (ulonglong)uVar21;
              do {
                uVar31 = (uint)uVar25;
                if ((*(uint *)(*(longlong *)(lVar11 + 0xd8) + (uVar25 >> 5 & 0x7ffffff) * 4) >>
                     (uVar31 & 0x1f) & 1) != 0) {
                  lVar26 = *(longlong *)(lVar11 + 0x58);
                  fVar37 = *(float *)(lVar26 + -8 + lVar28);
                  if ((*(float *)(lVar26 + (ulonglong)uVar21 * 0xc) <= fVar37) &&
                     (pfVar4 = (float *)(lVar26 + uVar36 * 0xc), uVar31 = uVar21,
                     *pfVar4 <= fVar37 && fVar37 != *pfVar4)) {
                    uVar36 = uVar25 & 0xffffffff;
                  }
                  fVar37 = *(float *)(lVar26 + -4 + lVar28);
                  if (*(float *)(lVar26 + 4 + uVar20 * 0xc) <= fVar37) {
                    pfVar4 = (float *)(lVar26 + 4 + uVar23 * 0xc);
                    if (*pfVar4 <= fVar37 && fVar37 != *pfVar4) {
                      uVar23 = uVar25 & 0xffffffff;
                    }
                  }
                  else {
                    uVar20 = uVar25 & 0xffffffff;
                  }
                  fVar37 = *(float *)(lVar26 + lVar28);
                  uVar21 = uVar31;
                  if (*(float *)(lVar26 + 8 + uVar27 * 0xc) <= fVar37) {
                    pfVar4 = (float *)(lVar26 + 8 + uVar18 * 0xc);
                    if (*pfVar4 <= fVar37 && fVar37 != *pfVar4) {
                      uVar18 = uVar25 & 0xffffffff;
                    }
                  }
                  else {
                    uVar27 = uVar25 & 0xffffffff;
                  }
                }
                uVar25 = uVar25 + 1;
                lVar28 = lVar28 + 0xc;
              } while (uVar17 != uVar25);
              local_108[3] = uVar21;
              local_108[0] = (uint)uVar36;
              local_108[4] = (uint)uVar20;
              local_108[1] = (int)uVar23;
              local_108[5] = (uint)uVar27;
              local_108[2] = (int)uVar18;
              lVar28 = *(longlong *)(lVar11 + 0x58);
              lVar26 = 0;
              do {
                uVar25 = (ulonglong)local_108[lVar26];
                uVar32 = (ulonglong)local_108[lVar26 + 3];
                fVar37 = *(float *)(lVar28 + 8 + uVar32 * 0xc) -
                         *(float *)(lVar28 + 8 + uVar25 * 0xc);
                fVar41 = *(float *)(lVar28 + 4 + uVar32 * 0xc) -
                         *(float *)(lVar28 + 4 + uVar25 * 0xc);
                fVar42 = *(float *)(lVar28 + uVar32 * 0xc) - *(float *)(lVar28 + uVar25 * 0xc);
                local_114[lVar26] = SQRT(fVar37 * fVar37 + fVar42 * fVar42 + fVar41 * fVar41);
                lVar26 = lVar26 + 1;
              } while (lVar26 != 3);
              if (((local_114[0] <= local_114[1]) || (local_114[0] <= local_114[2])) &&
                 (uVar36 = uVar23, uVar21 = (uint)uVar20, local_114[1] <= local_114[2])) {
                uVar36 = uVar18;
                uVar21 = (uint)uVar27;
              }
              uVar31 = 0;
              local_168 = uVar17;
              local_148 = uVar24;
              _Dst = (longlong *)(*DAT_14cb46728)(0);
              memset(_Dst,0,0xa8);
              _Dst[0x11] = 0x3eb0c6f7a0b5ed8d;
              _Dst[0x12] = 0x3ff8000000000000;
              *(undefined4 *)((longlong)_Dst + 0x74) = 1;
              *(uint *)(_Dst + 0xe) = uVar22 * 2;
              *(uint *)((longlong)_Dst + 0x7c) = uVar22 * 5;
              *(undefined1 *)(_Dst + 0x10) = 1;
              FUN_143afd9f6(_Dst,0);
              local_160 = *(longlong *)(lVar11 + 0x88);
              uVar24 = 0;
              do {
                *(double *)(*(longlong *)*_Dst + (ulonglong)((int)((longlong *)*_Dst)[1] * uVar31))
                     = (double)*(float *)(local_160 + uVar24 * 8);
                *(double *)
                 (*(longlong *)*_Dst + (ulonglong)((int)((longlong *)*_Dst)[1] * (uVar31 + 1))) =
                     (double)*(float *)(local_160 + 4 + uVar24 * 8);
                if ((uVar21 == uVar24) || (uVar36 == uVar24)) {
                  *(undefined1 *)(_Dst[2] + (ulonglong)uVar31) = 1;
                  *(undefined1 *)(_Dst[2] + (ulonglong)(uVar31 + 1)) = 1;
                }
                uVar24 = uVar24 + 1;
                uVar31 = uVar31 + 2;
              } while (uVar17 != uVar24);
              local_140 = param_2;
              FUN_143afd9f6(_Dst,1);
              local_178 = _Dst;
              if (2 < *(uint *)(lVar11 + 0x4c)) {
                local_180 = *(uint **)(lVar11 + 0x58);
                local_150 = *(longlong *)(lVar11 + 0x40);
                local_170 = (undefined8 *)
                            (((ulonglong)*(uint *)(lVar11 + 0x4c) * 0xaaaaaaab >> 0x1f &
                             0xfffffffffffffffc) * 3);
                puVar12 = (undefined8 *)0x0;
                do {
                  uVar22 = *(uint *)(local_150 + (longlong)puVar12);
                  uVar21 = *(uint *)(local_150 + 4 + (longlong)puVar12);
                  uVar31 = *(uint *)(local_150 + 8 + (longlong)puVar12);
                  pfVar4 = (float *)(local_180 + (ulonglong)uVar31 * 3);
                  pfVar1 = (float *)(local_180 + (ulonglong)uVar21 * 3);
                  pfVar2 = (float *)(local_180 + (ulonglong)uVar22 * 3);
                  fVar37 = (float)FUN_143afe1b3(pfVar4,pfVar2,pfVar1);
                  fVar41 = (float)FUN_143afe1b3(pfVar2,pfVar1,pfVar4);
                  if (((fVar37 == 0.0) && (!NAN(fVar37))) || ((fVar41 == 0.0 && (!NAN(fVar41))))) {
LAB_1482a2ad8:
                    fVar38 = pfVar1[2] - pfVar2[2];
                    fVar49 = pfVar1[1] - pfVar2[1];
                    fVar37 = *pfVar1 - *pfVar2;
                    fVar40 = SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar49 * fVar49);
                    fVar44 = 1.0 / fVar40;
                    fVar38 = fVar38 * fVar44;
                    fVar49 = fVar49 * fVar44;
                    fVar44 = fVar44 * fVar37;
                    fVar41 = pfVar4[2] - pfVar2[2];
                    fVar42 = pfVar4[1] - pfVar2[1];
                    fVar37 = *pfVar4 - *pfVar2;
                    fVar46 = fVar44 * fVar42 - fVar37 * fVar49;
                    fVar47 = fVar38 * fVar37 - fVar41 * fVar44;
                    fVar39 = fVar49 * fVar41 - fVar42 * fVar38;
                    fVar48 = 1.0 / SQRT(fVar46 * fVar46 + fVar39 * fVar39 + fVar47 * fVar47);
                    iVar33 = uVar22 * 2 + 1;
                    iVar34 = uVar21 * 2 + 1;
                    local_158 = CONCAT44(local_158._4_4_,uVar31 * 2 + 1);
                    *(undefined4 *)(local_178 + 8) = 0;
                    *(undefined4 *)(local_178 + 10) = 0;
                    dVar5 = (double)(fVar41 * fVar38 + fVar37 * fVar44 + fVar42 * fVar49) -
                            (double)fVar40;
                    FUN_143afddaa(local_178,uVar22 * 2,dVar5);
                    FUN_143afddaa(local_178,iVar33,
                                  0.0 - (double)((fVar48 * fVar39 * fVar49 -
                                                 fVar44 * fVar47 * fVar48) * fVar41 +
                                                (fVar47 * fVar48 * fVar38 - fVar49 * fVar46 * fVar48
                                                ) * fVar37 +
                                                (fVar46 * fVar48 * fVar44 - fVar38 * fVar48 * fVar39
                                                ) * fVar42));
                    FUN_143afddaa(local_178,uVar21 * 2);
                    FUN_143afddaa(local_178,iVar34);
                    FUN_143afddaa(local_178,uVar31 * 2);
                    FUN_143afde31(local_178,2);
                    _Dst = local_178;
                    *(undefined4 *)(local_178 + 8) = 0;
                    *(undefined4 *)(local_178 + 10) = 0;
                    FUN_143afddaa(local_178,uVar22 * 2);
                    FUN_143afddaa(_Dst,iVar33,dVar5);
                    FUN_143afddaa(_Dst,uVar21 * 2);
                    FUN_143afddaa(_Dst,iVar34);
                  }
                  else {
                    fVar42 = (3.1415927 - fVar41) - fVar37;
                    if ((fVar42 == 0.0) && (!NAN(fVar42))) goto LAB_1482a2ad8;
                    fVar38 = sinf(fVar37);
                    fVar39 = sinf(fVar41);
                    fVar40 = sinf(fVar42);
                    if ((((fVar39 <= fVar38) ||
                         (uVar10 = uVar31, uVar30 = uVar22, uVar29 = uVar21, fVar39 <= fVar40)) &&
                        (fVar42 = fVar37, uVar10 = uVar22, uVar30 = uVar21, uVar29 = uVar31,
                        fVar39 < fVar38)) && (fVar40 < fVar38)) {
                      fVar42 = fVar41;
                      uVar10 = uVar21;
                      uVar30 = uVar31;
                      uVar29 = uVar22;
                    }
                    cosf(fVar42);
                    _Dst = local_178;
                    iVar33 = uVar10 * 2 + 1;
                    iVar34 = uVar30 * 2 + 1;
                    local_158 = CONCAT44(local_158._4_4_,uVar29 * 2 + 1);
                    *(undefined4 *)(local_178 + 8) = 0;
                    *(undefined4 *)(local_178 + 10) = 0;
                    FUN_143afddaa(local_178,uVar10 * 2);
                    FUN_143afddaa(_Dst,iVar33);
                    FUN_143afddaa(_Dst,uVar30 * 2);
                    FUN_143afddaa(_Dst,iVar34);
                    FUN_143afddaa(_Dst,uVar29 * 2);
                    FUN_143afde31(_Dst,2);
                    *(undefined4 *)(_Dst + 8) = 0;
                    *(undefined4 *)(_Dst + 10) = 0;
                    FUN_143afddaa(_Dst,uVar10 * 2);
                    FUN_143afddaa(_Dst,iVar33);
                    FUN_143afddaa(_Dst,uVar30 * 2);
                    FUN_143afddaa(_Dst,iVar34);
                  }
                  FUN_143afddaa(_Dst,(undefined4)local_158);
                  FUN_143afde31(_Dst,2);
                  puVar12 = (undefined8 *)((longlong)puVar12 + 0xc);
                } while (local_170 != puVar12);
              }
              FUN_143afde31(_Dst,1);
              param_2 = local_140;
              uVar17 = local_168;
              lVar11 = _Dst[6];
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x10))(lVar11);
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(lVar11,0);
                }
                else {
                  (*DAT_14cb46730)(lVar11);
                }
              }
              puVar8 = (undefined4 *)_Dst[5];
              pvVar13 = (void *)0x0;
              puVar12 = (undefined8 *)(*DAT_14cb46728)(0,0x28);
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              puVar12[4] = 0;
              *(undefined4 *)puVar12 = *puVar8;
              *(undefined4 *)((longlong)puVar12 + 4) = puVar8[1];
              *(undefined4 *)(puVar12 + 1) = 0x1006;
              puVar12[2] = FUN_143afe31b;
              puVar12[3] = FUN_143afe352;
              if (puVar8[1] != 0) {
                pvVar13 = (void *)(*DAT_14cb46728)(0);
              }
              puVar12[4] = pvVar13;
              memset(pvVar13,0,(ulonglong)(uint)puVar8[1] << 3);
              if (puVar8[1] != 0) {
                uVar24 = 0;
                do {
                  dVar5 = *(double *)(*(longlong *)(puVar8 + 0xe) + uVar24 * 8);
                  uVar36 = -(ulonglong)(dVar5 == 0.0);
                  *(ulonglong *)(puVar12[4] + uVar24 * 8) =
                       uVar36 & 0x3ff0000000000000 | ~uVar36 & (ulonglong)(1.0 / dVar5);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < (uint)puVar8[1]);
              }
              _Dst[6] = (longlong)puVar12;
              puVar7 = (uint *)_Dst[5];
              lVar11 = local_160;
              uVar24 = local_148;
              local_170 = puVar12;
              if (puVar7[2] == 0x1001) {
                uVar22 = 0;
                if ((ulonglong)*puVar7 != 0) {
                  lVar11 = 0;
                  uVar22 = 0;
                  do {
                    uVar22 = uVar22 + *(int *)(*(longlong *)(puVar7 + 10) + lVar11);
                    lVar11 = lVar11 + 0x10;
                  } while ((ulonglong)*puVar7 << 4 != lVar11);
                }
                pvVar13 = (void *)0x0;
                local_180 = (uint *)(*DAT_14cb46728)(0);
                local_180[0] = 0;
                local_180[1] = 0;
                local_180[2] = 0;
                local_180[3] = 0;
                local_180[4] = 0;
                local_180[5] = 0;
                local_180[6] = 0;
                local_180[7] = 0;
                local_180[8] = 0;
                local_180[9] = 0;
                local_180[10] = 0;
                local_180[0xb] = 0;
                local_180[0xc] = 0;
                local_180[0xd] = 0;
                local_180[0xe] = 0;
                local_180[0xf] = 0;
                local_180[0x10] = 0;
                local_180[0x11] = 0;
                uVar21 = *puVar7;
                uVar31 = puVar7[1];
                *local_180 = uVar21;
                local_180[1] = uVar31;
                local_180[2] = 0x1002;
                *(code **)(local_180 + 4) = FUN_143afe37c;
                *(code **)(local_180 + 6) = FUN_143afe436;
                local_180[0xe] = 8;
                uVar24 = (ulonglong)uVar22;
                if (uVar22 != 0) {
                  pvVar13 = (void *)(*DAT_14cb46728)(0);
                }
                *(void **)(local_180 + 8) = pvVar13;
                pvVar14 = (void *)0x0;
                memset(pvVar13,0,uVar24 * 8);
                if (uVar21 != 0xffffffff) {
                  pvVar14 = (void *)(*DAT_14cb46728)(0);
                }
                _Dst = local_178;
                *(void **)(local_180 + 10) = pvVar14;
                iVar33 = 0;
                memset(pvVar14,0,(ulonglong)(uVar21 + 1) << 2);
                if (uVar24 == 0) {
                  pvVar13 = (void *)0x0;
                }
                else {
                  pvVar13 = (void *)(*DAT_14cb46728)(0);
                }
                lVar11 = local_160;
                puVar19 = local_180;
                *(void **)(local_180 + 0xc) = pvVar13;
                memset(pvVar13,0,uVar24 * 4);
                puVar12 = (undefined8 *)(*DAT_14cb46728)(0,0x24);
                *(undefined8 **)(puVar19 + 0x10) = puVar12;
                *puVar12 = 0;
                puVar12[1] = 0;
                puVar12[2] = 0;
                puVar12[3] = 0;
                *(undefined4 *)(puVar12 + 4) = 0;
                uVar21 = 0;
                if (*puVar7 != 0) {
                  lVar11 = 8;
                  uVar24 = 0;
                  do {
                    qsort(*(void **)(*(longlong *)(puVar7 + 10) + lVar11),
                          (ulonglong)*(uint *)(*(longlong *)(puVar7 + 10) + -8 + lVar11),0x10,
                          (_PtFuncCompare *)&LAB_143afe4b1);
                    uVar24 = uVar24 + 1;
                    lVar11 = lVar11 + 0x10;
                  } while (uVar24 < *puVar7);
                  iVar33 = 0;
                  uVar21 = 0;
                  lVar11 = local_160;
                  _Dst = local_178;
                  if (*puVar7 != 0) {
                    uVar24 = 0;
                    iVar33 = 0;
                    do {
                      lVar28 = *(longlong *)(puVar7 + 10);
                      *(int *)(*(longlong *)(local_180 + 10) + uVar24 * 4) = iVar33;
                      if (*(int *)(lVar28 + uVar24 * 0x10) != 0) {
                        puVar19 = (uint *)(lVar28 + uVar24 * 0x10);
                        lVar28 = 8;
                        uVar17 = 0;
                        do {
                          uVar36 = (ulonglong)(uint)(iVar33 + (int)uVar17);
                          lVar26 = *(longlong *)(puVar19 + 2);
                          *(undefined8 *)(*(longlong *)(local_180 + 8) + uVar36 * 8) =
                               *(undefined8 *)(lVar26 + lVar28);
                          *(undefined4 *)(*(longlong *)(local_180 + 0xc) + uVar36 * 4) =
                               *(undefined4 *)(lVar26 + -8 + lVar28);
                          uVar17 = uVar17 + 1;
                          lVar28 = lVar28 + 0x10;
                        } while (uVar17 < *puVar19);
                        iVar33 = iVar33 + (int)uVar17;
                      }
                      uVar24 = uVar24 + 1;
                      uVar21 = *puVar7;
                    } while (uVar24 < uVar21);
                  }
                }
                param_2 = local_140;
                uVar24 = local_148;
                uVar17 = local_168;
                *(int *)(*(longlong *)(local_180 + 10) + (ulonglong)uVar21 * 4) = iVar33;
                if (*(undefined4 **)(local_180 + 0x10) != (undefined4 *)0x0) {
                  **(undefined4 **)(local_180 + 0x10) = 0;
                  uVar10 = 0;
                  lVar28 = 1;
                  uVar21 = 0;
                  uVar31 = uVar22 >> 3;
                  do {
                    if (uVar10 < uVar31) {
                      uVar30 = *puVar7;
                      uVar36 = (ulonglong)uVar21;
                      if (uVar21 <= uVar30) {
                        uVar21 = uVar30;
                      }
                      do {
                        if (uVar30 <= uVar36) goto LAB_1482a2ed7;
                        uVar27 = uVar36 + 1;
                        uVar10 = (uVar10 + *(int *)(*(longlong *)(local_180 + 10) + 4 + uVar36 * 4))
                                 - *(int *)(*(longlong *)(local_180 + 10) + uVar36 * 4);
                        uVar36 = uVar27;
                      } while (uVar10 < uVar31);
                      uVar21 = (uint)uVar27;
                    }
LAB_1482a2ed7:
                    *(uint *)(*(longlong *)(local_180 + 0x10) + lVar28 * 4) = uVar21;
                    uVar31 = uVar31 + (uVar22 >> 3);
                    lVar28 = lVar28 + 1;
                  } while (lVar28 != 8);
                  *(uint *)(*(longlong *)(local_180 + 0x10) + 0x20) = *puVar7;
                }
                lVar28 = _Dst[5];
                if (lVar28 != 0) {
                  (**(code **)(lVar28 + 0x10))(lVar28);
                  if (DAT_14cb46730 == (code *)0x0) {
                    (*DAT_14cb46728)(lVar28,0);
                  }
                  else {
                    (*DAT_14cb46730)();
                  }
                }
                _Dst[5] = (longlong)local_180;
                puVar7 = local_180;
                local_170 = (undefined8 *)_Dst[6];
              }
              local_180 = puVar7;
              if (*(int *)((longlong)_Dst + 0x74) != 0) {
                lVar28 = _Dst[0xc];
                lVar26 = _Dst[0xd];
                local_120 = (ulonglong)*(uint *)(_Dst + 4) << 3;
                uVar24 = 0;
                do {
                  local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)((longlong)_Dst + 0x7c));
                  dVar5 = (double)_Dst[0x11];
                  uVar22 = local_180[1];
                  lVar11 = (longlong)(int)uVar22;
                  sVar3 = lVar11 * 8;
                  local_130 = sVar3;
                  local_128 = uVar24;
                  if (lVar11 == 0) {
                    uVar35 = 0;
                    pvVar14 = (void *)0x0;
                    lVar15 = 0;
                    pvVar13 = (void *)0x0;
                    dVar43 = 0.0;
                  }
                  else {
                    uVar35 = 0;
                    lVar15 = (*DAT_14cb46728)(0,sVar3);
                    pvVar13 = (void *)(*DAT_14cb46728)(0,sVar3);
                    pvVar14 = (void *)(*DAT_14cb46728)(0,sVar3);
                    dVar43 = 0.0;
                    if (0 < (int)uVar22) {
                      lVar16 = 0;
                      do {
                        dVar45 = *(double *)(lVar26 + lVar16 * 8);
                        dVar43 = dVar43 + dVar45 * dVar45;
                        lVar16 = lVar16 + 1;
                      } while (lVar11 != lVar16);
                      uVar35 = 1;
                    }
                  }
                  local_158 = uVar35;
                  (**(code **)(local_180 + 6))(local_180,lVar28,lVar15);
                  if ((char)uVar35 == '\0') {
                    (*(code *)local_170[3])(local_170,lVar15,pvVar13);
                    memcpy(pvVar14,pvVar13,local_130);
                    dVar9 = 0.0;
                    dVar45 = 0.0;
                  }
                  else {
                    lVar16 = 0;
                    do {
                      *(double *)(lVar15 + lVar16 * 8) =
                           *(double *)(lVar15 + lVar16 * 8) - *(double *)(lVar26 + lVar16 * 8);
                      lVar16 = lVar16 + 1;
                    } while (lVar11 != lVar16);
                    (*(code *)local_170[3])(local_170,lVar15,pvVar13);
                    memcpy(pvVar14,pvVar13,local_130);
                    dVar9 = 0.0;
                    lVar16 = 0;
                    do {
                      dVar9 = dVar9 + *(double *)(lVar15 + lVar16 * 8) *
                                      *(double *)((longlong)pvVar14 + lVar16 * 8);
                      lVar16 = lVar16 + 1;
                    } while (lVar11 != lVar16);
                    dVar45 = 0.0;
                    lVar16 = 0;
                    do {
                      dVar6 = *(double *)(lVar15 + lVar16 * 8);
                      dVar45 = dVar45 + dVar6 * dVar6;
                      lVar16 = lVar16 + 1;
                    } while (lVar11 != lVar16);
                  }
                  dVar5 = dVar5 * dVar5 * dVar43;
                  uVar21 = 0;
                  if ((uint)local_150 != 0 && dVar5 < dVar45) {
                    uVar24 = (ulonglong)uVar22;
                    uVar21 = 0;
                    do {
                      (**(code **)(local_180 + 6))(local_180,pvVar13,pvVar14);
                      if ((char)local_158 == '\0') {
                        (*(code *)local_170[3])(local_170,lVar15,pvVar14);
                        dVar9 = 0.0;
                        dVar45 = 0.0;
                      }
                      else {
                        dVar45 = 0.0;
                        uVar17 = 0;
                        do {
                          dVar45 = dVar45 + *(double *)((longlong)pvVar13 + uVar17 * 8) *
                                            *(double *)((longlong)pvVar14 + uVar17 * 8);
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        uVar17 = 0;
                        do {
                          *(double *)(lVar28 + uVar17 * 8) =
                               *(double *)((longlong)pvVar13 + uVar17 * 8) * (-dVar9 / dVar45) +
                               *(double *)(lVar28 + uVar17 * 8);
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        uVar17 = 0;
                        do {
                          *(double *)(lVar15 + uVar17 * 8) =
                               *(double *)((longlong)pvVar14 + uVar17 * 8) * (-dVar9 / dVar45) +
                               *(double *)(lVar15 + uVar17 * 8);
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        (*(code *)local_170[3])(local_170,lVar15,pvVar14);
                        dVar45 = 1.0 / dVar9;
                        dVar9 = 0.0;
                        uVar17 = 0;
                        do {
                          dVar9 = dVar9 + *(double *)(lVar15 + uVar17 * 8) *
                                          *(double *)((longlong)pvVar14 + uVar17 * 8);
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        uVar17 = 0;
                        do {
                          *(double *)((longlong)pvVar13 + uVar17 * 8) =
                               *(double *)((longlong)pvVar13 + uVar17 * 8) * dVar45 * dVar9;
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        uVar17 = 0;
                        do {
                          *(double *)((longlong)pvVar13 + uVar17 * 8) =
                               *(double *)((longlong)pvVar14 + uVar17 * 8) +
                               *(double *)((longlong)pvVar13 + uVar17 * 8);
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                        dVar45 = 0.0;
                        uVar17 = 0;
                        do {
                          dVar6 = *(double *)(lVar15 + uVar17 * 8);
                          dVar45 = dVar45 + dVar6 * dVar6;
                          uVar17 = uVar17 + 1;
                        } while (uVar24 != uVar17);
                      }
                      uVar21 = uVar21 + 1;
                    } while ((dVar5 < dVar45) && (uVar21 < (uint)local_150));
                  }
                  _Dst = local_178;
                  if (lVar15 != 0) {
                    if (DAT_14cb46730 == (code *)0x0) {
                      (*DAT_14cb46728)(lVar15,0);
                    }
                    else {
                      (*DAT_14cb46730)();
                    }
                  }
                  if (pvVar13 != (void *)0x0) {
                    if (DAT_14cb46730 == (code *)0x0) {
                      (*DAT_14cb46728)(pvVar13,0);
                    }
                    else {
                      (*DAT_14cb46730)();
                    }
                  }
                  lVar11 = local_160;
                  if (pvVar14 != (void *)0x0) {
                    if (DAT_14cb46730 == (code *)0x0) {
                      (*DAT_14cb46728)(pvVar14,0);
                    }
                    else {
                      (*DAT_14cb46730)();
                    }
                  }
                  if (dVar43 < 0.0) {
                    dVar43 = sqrt(dVar43);
                  }
                  else {
                    dVar43 = SQRT(dVar43);
                  }
                  if (dVar45 < 0.0) {
                    dVar45 = sqrt(dVar45);
                  }
                  else {
                    dVar45 = SQRT(dVar45);
                  }
                  _Dst[0x14] = -(ulonglong)(dVar43 == 0.0) & (ulonglong)dVar45 |
                               ~-(ulonglong)(dVar43 == 0.0) & (ulonglong)(dVar45 / dVar43);
                  *(uint *)(_Dst + 0x13) = uVar21;
                  lVar28 = lVar28 + local_120;
                  uVar21 = (int)local_128 + 1;
                  uVar24 = (ulonglong)uVar21;
                  uVar22 = *(uint *)((longlong)_Dst + 0x74);
                  lVar26 = lVar26 + local_120;
                } while (uVar21 < uVar22);
                param_2 = local_140;
                uVar24 = local_148;
                uVar17 = local_168;
                if (uVar22 != 0) {
                  lVar28 = _Dst[4];
                  uVar21 = *(uint *)(_Dst + 0xe);
                  uVar36 = 0;
                  uVar31 = uVar21;
                  do {
                    if (uVar31 == 0) {
                      uVar31 = 0;
                    }
                    else {
                      uVar27 = 0;
                      do {
                        if (*(char *)(_Dst[2] + uVar27) == '\0') {
                          *(undefined8 *)
                           (*(longlong *)(*_Dst + uVar36 * 0x10) +
                           (ulonglong)(uint)(*(int *)(*_Dst + 8 + uVar36 * 0x10) * (int)uVar27)) =
                               *(undefined8 *)
                                (_Dst[0xc] +
                                (ulonglong)
                                (uint)(*(int *)(_Dst[3] + uVar27 * 4) + (int)lVar28 * (int)uVar36) *
                                8);
                          uVar21 = *(uint *)(_Dst + 0xe);
                        }
                        uVar27 = uVar27 + 1;
                      } while (uVar27 < uVar21);
                      uVar22 = *(uint *)((longlong)_Dst + 0x74);
                      uVar31 = uVar21;
                    }
                    uVar36 = uVar36 + 1;
                  } while (uVar36 < uVar22);
                }
              }
              lVar28 = 0;
              do {
                lVar26 = *(longlong *)*_Dst;
                iVar33 = (int)((longlong *)*_Dst)[1];
                dVar5 = *(double *)(lVar26 + (ulonglong)(uint)(((int)lVar28 + 1) * iVar33));
                *(float *)(lVar11 + lVar28 * 4) =
                     (float)*(double *)(lVar26 + (ulonglong)(uint)(iVar33 * (int)lVar28));
                *(float *)(lVar11 + 4 + lVar28 * 4) = (float)dVar5;
                lVar28 = lVar28 + 2;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
              lVar11 = _Dst[5];
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x10))(lVar11);
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(lVar11,0);
                }
                else {
                  (*DAT_14cb46730)(lVar11);
                }
              }
              _Dst[5] = 0;
              lVar11 = _Dst[6];
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x10))(lVar11);
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(lVar11,0);
                }
                else {
                  (*DAT_14cb46730)(lVar11);
                }
              }
              _Dst[6] = 0;
              lVar11 = _Dst[7];
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x10))(lVar11);
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(lVar11,0);
                }
                else {
                  (*DAT_14cb46730)(lVar11);
                }
              }
              _Dst[7] = 0;
              if (_Dst[9] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[9],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[8] = 0;
              _Dst[9] = 0;
              if (_Dst[0xb] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[0xb],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              param_3 = local_138;
              _Dst[10] = 0;
              _Dst[0xb] = 0;
              if (_Dst[1] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[1],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[1] = 0;
              if (*_Dst != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(*_Dst,0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              *_Dst = 0;
              if (_Dst[2] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[2],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[2] = 0;
              if (_Dst[3] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[3],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[3] = 0;
              if (_Dst[0xc] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[0xc],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[0xc] = 0;
              if (_Dst[0xd] != 0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst[0xd],0);
                }
                else {
                  (*DAT_14cb46730)();
                }
              }
              _Dst[0xd] = 0;
              if (_Dst != (longlong *)0x0) {
                if (DAT_14cb46730 == (code *)0x0) {
                  (*DAT_14cb46728)(_Dst,0);
                }
                else {
                  (*DAT_14cb46730)(_Dst);
                }
              }
            }
          }
        }
        else {
          local_188 = *(undefined4 *)(lVar11 + 0x4c);
          (*(code *)*param_2)(*(undefined8 *)(lVar11 + 0x58),*(undefined8 *)(lVar11 + 0x88),
                              *(undefined4 *)(lVar11 + 100),*(undefined8 *)(lVar11 + 0x40));
        }
LAB_1482a22d0:
        FUN_1482a44c0(param_1 + 0x2e,*(undefined8 *)(param_1 + 10),param_3);
        FUN_1482a45dc(param_1 + 0x2e,*(undefined8 *)(param_1 + 10));
        if (((*(char *)(param_1 + 0x2e) != '\0') || (param_1[0x30] != 0.0)) ||
           (param_1[0x31] != 0.0)) {
          *(undefined1 *)(param_1 + 0x38) = 1;
        }
      }
    }
  }
LAB_1482a20a6:
  lVar11 = *(longlong *)(param_1 + 10);
  if (*(char *)((longlong)param_2 + 0x2d) == '\x01') {
    puVar7 = *(uint **)(lVar11 + 0x40);
    lVar28 = *(longlong *)(lVar11 + 0x88);
    fVar37 = *(float *)(lVar28 + (ulonglong)puVar7[2] * 8);
    fVar41 = *(float *)(lVar28 + 4 + (ulonglong)puVar7[2] * 8);
    if ((((*(float *)(lVar28 + 4 + (ulonglong)puVar7[1] * 8) - fVar41) *
          (*(float *)(lVar28 + (ulonglong)*puVar7 * 8) - fVar37) -
         (*(float *)(lVar28 + (ulonglong)puVar7[1] * 8) - fVar37) *
         (*(float *)(lVar28 + 4 + (ulonglong)*puVar7 * 8) - fVar41)) * 0.5 < 0.0) &&
       ((int)uVar24 != 0)) {
      uVar17 = 0;
      do {
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 10) + 0x88) + uVar17 * 8) =
             *(uint *)(*(longlong *)(*(longlong *)(param_1 + 10) + 0x88) + uVar17 * 8) ^ 0x80000000;
        uVar17 = uVar17 + 1;
      } while (uVar24 != uVar17);
      lVar11 = *(longlong *)(param_1 + 10);
    }
  }
  fVar37 = *(float *)(lVar11 + 100);
  param_1[0x2b] = fVar37;
  if ((uint)param_1[0x2c] < (uint)fVar37) {
    FUN_148298f1a(param_1 + 0x28);
    lVar11 = *(longlong *)(param_1 + 10);
    fVar37 = *(float *)(lVar11 + 100);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1a8);
  }
  memcpy(*(void **)(param_1 + 0x28),*(void **)(lVar11 + 0x88),(ulonglong)(uint)fVar37 << 3);
  return;
code_r0x0001482a22a4:
  uVar21 = uVar21 + 1;
  if (uVar22 == uVar21) goto LAB_1482a22d0;
  goto LAB_1482a2292;
}



// FUNCTION 1482a37e0 FUN_1482a37e0 body=355 status=ok
// SIG undefined FUN_1482a37e0(void)

void FUN_1482a37e0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = param_2;
  uVar4 = *(uint *)(param_2 + 0x4c);
  uVar1 = *(uint *)(param_2 + 100);
  *(uint *)((longlong)param_1 + 0x14) = uVar1;
  if (*(uint *)(param_1 + 3) < uVar1) {
    FUN_148298f1a(param_1 + 1);
  }
  if (*(uint *)(param_1 + 0x10) < uVar4 / 3) {
    FUN_148298f1a(param_1 + 0xe);
  }
  uVar3 = uVar4 / 3;
  if (*(uint *)(param_1 + 10) < uVar3) {
    FUN_148298f1a(param_1 + 8);
  }
  *(uint *)(param_1 + 4) = uVar3;
  uVar2 = uVar4 / 3 + 0x1f >> 5;
  *(uint *)((longlong)param_1 + 0x34) = uVar2;
  if (*(uint *)(param_1 + 7) < uVar2) {
    FUN_148298f1a(param_1 + 5);
  }
  if (((void *)param_1[5] != (void *)0x0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    memset((void *)param_1[5],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x34) * (int)param_1[6]));
  }
  *(uint *)(param_1 + 0x19) = uVar3;
  *(uint *)((longlong)param_1 + 0xdc) = uVar2;
  if (*(uint *)(param_1 + 0x1c) < uVar2) {
    FUN_148298f1a(param_1 + 0x1a,uVar2);
  }
  uVar4 = uVar4 / 3;
  *(uint *)(param_1 + 0x11) = uVar4;
  *(uint *)((longlong)param_1 + 0x9c) = uVar2;
  if (*(uint *)(param_1 + 0x14) < uVar2) {
    FUN_148298f1a(param_1 + 0x12,uVar2);
  }
  *(uint *)(param_1 + 0x15) = uVar1;
  uVar1 = uVar1 + 0x1f >> 5;
  *(uint *)((longlong)param_1 + 0xbc) = uVar1;
  if (*(uint *)(param_1 + 0x18) < uVar1) {
    FUN_148298f1a(param_1 + 0x16,uVar1);
  }
  *(uint *)((longlong)param_1 + 100) = uVar4;
  if (uVar4 <= *(uint *)(param_1 + 0xd)) {
    return;
  }
  FUN_148298f1a(param_1 + 0xb,uVar4);
  return;
}



// FUNCTION 1482a3944 FUN_1482a3944 body=1704 status=ok
// SIG undefined FUN_1482a3944(void)

ulonglong FUN_1482a3944(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  ulonglong local_f0;
  uint *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  int local_ac;
  uint local_a8 [6];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  if (((void *)param_1[0xb] != (void *)0x0) && (*(int *)((longlong)param_1 + 100) != 0)) {
    memset((void *)param_1[0xb],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 100) * (int)param_1[0xc]));
  }
  if (((void *)param_1[0x1a] != (void *)0x0) && (*(int *)((longlong)param_1 + 0xdc) != 0)) {
    memset((void *)param_1[0x1a],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xdc) * (int)param_1[0x1b]));
  }
  if (((void *)param_1[0x12] != (void *)0x0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
    memset((void *)param_1[0x12],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x9c) * (int)param_1[0x13]));
  }
  if (((void *)param_1[0x16] != (void *)0x0) && (*(int *)((longlong)param_1 + 0xbc) != 0)) {
    memset((void *)param_1[0x16],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xbc) * (int)param_1[0x17]));
  }
  uVar17 = 0;
  if (2 < *(uint *)(*param_1 + 0x4c)) {
    lVar11 = 0;
    uVar14 = 0;
    do {
      if ((*(uint *)(param_1[5] + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0) {
        FUN_1482a4ed4(param_1,uVar14,local_a8);
        lVar6 = 0;
        do {
          uVar4 = *(uint *)(*(longlong *)(*param_1 + 0x40) + lVar11);
          puVar10 = (uint *)(param_1[0x16] + (ulonglong)(uVar4 >> 5) * 4);
          *puVar10 = *puVar10 | 1 << ((byte)uVar4 & 0x1f);
          *(undefined8 *)(param_1[1] + (ulonglong)uVar4 * 8) = *(undefined8 *)(local_a8 + lVar6 * 2)
          ;
          lVar6 = lVar6 + 1;
          lVar11 = lVar11 + 4;
        } while (lVar6 != 3);
        FUN_1482a50ae(param_1,uVar14);
        plVar13 = param_1 + 0x1d;
        lVar11 = *(longlong *)(*param_1 + 0x40);
        uVar1 = *(undefined4 *)(*param_1 + 0x4c);
        uVar14 = 0;
        *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
        param_1[0x20] = param_1[1];
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)((longlong)param_1 + 0x14);
        param_1[0x22] = lVar11;
        *(undefined4 *)(param_1 + 0x23) = uVar1;
        *(undefined4 *)((longlong)param_1 + 0x144) = 0;
        do {
          local_ac = (int)uVar17;
          FUN_148298fa0(plVar13);
          uVar17 = (ulonglong)((int)uVar17 + (uint)(uVar14 < 3));
          uVar14 = uVar14 + (uVar14 < 3);
        } while (uVar14 != 3);
        uVar14 = *(uint *)((longlong)param_1 + 0x4c);
        if (uVar14 != 0) {
          local_f8 = param_1 + 0x33;
          local_d8 = param_1 + 0x36;
          while( true ) {
            uVar9 = 0;
            fVar18 = 3.4028235e+38;
            puVar10 = (uint *)0x0;
            do {
              puVar8 = *(uint **)(param_1[8] + uVar9 * 8);
              fVar19 = (float)puVar8[9];
              if (fVar18 <= fVar19) {
                fVar19 = fVar18;
                puVar8 = puVar10;
              }
              puVar10 = puVar8;
              fVar18 = fVar19;
              uVar9 = uVar9 + 1;
            } while (uVar14 != uVar9);
            if (puVar10 == (uint *)0x0) break;
            fVar19 = 0.0;
            uVar14 = 0;
            fVar18 = 0.0;
            puVar8 = puVar10;
            do {
              fVar18 = fVar18 + (float)puVar8[6];
              fVar19 = fVar19 + (float)puVar8[7];
              uVar14 = uVar14 + 1;
              puVar8 = *(uint **)(puVar8 + 4);
            } while (puVar8 != (uint *)0x0);
            fVar18 = fVar18 * (1.0 / (float)uVar14);
            fVar19 = (1.0 / (float)uVar14) * fVar19;
            uVar14 = puVar10[1];
            uVar9 = (ulonglong)uVar14;
            lVar11 = param_1[1];
            *(float *)(lVar11 + uVar9 * 8) = fVar18;
            *(float *)(lVar11 + 4 + uVar9 * 8) = fVar19;
            lVar11 = param_1[1];
            lVar6 = *(longlong *)(*param_1 + 0x40);
            puVar8 = puVar10;
            do {
              uVar4 = puVar8[10];
              uVar12 = (ulonglong)*(uint *)(lVar6 + (ulonglong)uVar4 * 4);
              iVar3 = uVar4 % 3 + 1;
              if (iVar3 == 3) {
                iVar3 = 0;
              }
              uVar7 = (ulonglong)*(uint *)(lVar6 + (ulonglong)(iVar3 + (uVar4 / 3) * 3) * 4);
              fVar20 = (*(float *)(lVar11 + 4 + uVar7 * 8) - fVar19) *
                       (*(float *)(lVar11 + uVar12 * 8) - fVar18) -
                       (*(float *)(lVar11 + uVar7 * 8) - fVar18) *
                       (*(float *)(lVar11 + 4 + uVar12 * 8) - fVar19);
              cVar2 = '\x01';
              puVar15 = puVar10;
              if ((((float)puVar8[0xb] < 0.0) && (fVar20 < 0.0)) ||
                 ((0.0 < (float)puVar8[0xb] && (0.0 < fVar20)))) goto LAB_1482a3cee;
              puVar8 = *(uint **)(puVar8 + 4);
            } while (puVar8 != (uint *)0x0);
            cVar2 = '\0';
LAB_1482a3cee:
            do {
              uVar4 = *puVar15;
              uVar7 = (ulonglong)*(uint *)(lVar6 + (ulonglong)(uVar4 * 3) * 4);
              uVar16 = (ulonglong)*(uint *)(lVar6 + (ulonglong)(uVar4 * 3 + 1) * 4);
              uVar12 = (ulonglong)*(uint *)(lVar6 + (ulonglong)(uVar4 * 3 + 2) * 4);
              fVar18 = *(float *)(lVar11 + uVar12 * 8);
              fVar19 = *(float *)(lVar11 + 4 + uVar12 * 8);
              if (((*(float *)(lVar11 + 4 + uVar16 * 8) - fVar19) *
                   (*(float *)(lVar11 + uVar7 * 8) - fVar18) -
                  (*(float *)(lVar11 + uVar16 * 8) - fVar18) *
                  (*(float *)(lVar11 + 4 + uVar7 * 8) - fVar19)) * 0.5 <= 0.0) goto LAB_1482a3e52;
              puVar8 = puVar15 + 4;
              puVar15 = *(uint **)puVar8;
            } while (*(uint **)puVar8 != (uint *)0x0);
            if (cVar2 == '\0') {
              *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
              *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
              local_f0 = uVar9;
              local_e8 = puVar10;
              local_e0 = plVar13;
              do {
                uVar14 = *puVar10;
                lVar11 = *param_1;
                iVar3 = 0;
                do {
                  local_a8[0] = uVar14 * 3 + iVar3;
                  uVar9 = (ulonglong)local_a8[0];
                  uVar4 = *(uint *)(*(longlong *)(lVar11 + 0x108) + uVar9 * 4);
                  if (uVar4 == 0xffffffff) {
                    FUN_148298fa0(local_f8,local_a8);
                  }
                  else {
                    uVar12 = (ulonglong)uVar4 / 0x60;
                    uVar5 = 1 << ((byte)((ulonglong)uVar4 / 3) & 0x1f);
                    uVar17 = (ulonglong)uVar5;
                    if ((*(uint *)(param_1[0x12] + uVar12 * 4) >> (uVar4 / 3 & 0x1f) & 1) == 0) {
                      FUN_148298fa0(local_f8,local_a8);
                      if ((*(uint *)(param_1[0x12] + uVar12 * 4) & uVar5) == 0) goto LAB_1482a3dbf;
                      uVar4 = *(uint *)(*(longlong *)(lVar11 + 0x108) + uVar9 * 4);
                    }
                    local_a8[0] = uVar4;
                    FUN_148298fa0(local_d8,local_a8);
                  }
LAB_1482a3dbf:
                  plVar13 = local_e0;
                  iVar3 = iVar3 + 1;
                } while (iVar3 != 3);
                puVar10 = *(uint **)(puVar10 + 4);
              } while (puVar10 != (uint *)0x0);
              local_c0 = param_1[0x36];
              local_b8 = *(undefined4 *)((longlong)param_1 + 0x1bc);
              local_d0 = param_1[0x33];
              local_c8 = *(undefined4 *)((longlong)param_1 + 0x1a4);
              cVar2 = FUN_1482a011a(local_e0,*(undefined4 *)*param_1,&local_d0,&local_c0);
              uVar14 = (uint)local_f0;
              puVar10 = local_e8;
            }
            if (cVar2 == '\0') {
              puVar8 = (uint *)(param_1[0x16] + (ulonglong)(uVar14 >> 5) * 4);
              *puVar8 = *puVar8 | 1 << ((byte)uVar14 & 0x1f);
              puVar8 = puVar10;
              do {
                FUN_1482a50ae(param_1,*puVar8);
                puVar8 = *(uint **)(puVar8 + 4);
              } while (puVar8 != (uint *)0x0);
              FUN_1482a52dc(param_1,puVar10);
              lVar11 = *(longlong *)(*param_1 + 0x40);
              uVar1 = *(undefined4 *)(*param_1 + 0x4c);
              *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
              param_1[0x20] = param_1[1];
              *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)((longlong)param_1 + 0x14);
              param_1[0x22] = lVar11;
              *(undefined4 *)(param_1 + 0x23) = uVar1;
              *(undefined4 *)((longlong)param_1 + 0x144) = 0;
              if (*(int *)((longlong)param_1 + 0x7c) != 0) {
                uVar9 = 0;
                do {
                  lVar11 = *param_1;
                  uVar14 = *(int *)(param_1[0xe] + uVar9 * 4) * 3;
                  uVar17 = (ulonglong)uVar14;
                  iVar3 = 0;
                  do {
                    uVar5 = uVar14 + iVar3;
                    uVar4 = *(uint *)(*(longlong *)(lVar11 + 0x108) + (ulonglong)uVar5 * 4);
                    if ((uVar4 == 0xffffffff) ||
                       ((*(uint *)(param_1[0x12] + (ulonglong)(uVar4 / 0x18 & 0xfffffffc)) >>
                         (uVar4 / 3 & 0x1f) & 1) == 0)) {
                      local_a8[0] = uVar5;
                      FUN_148298fa0(plVar13);
                    }
                    iVar3 = iVar3 + 1;
                  } while (iVar3 != 3);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(uint *)((longlong)param_1 + 0x7c));
              }
            }
            else {
LAB_1482a3e52:
              do {
                puVar8 = (uint *)(param_1[0x1a] + (ulonglong)(*puVar10 >> 5) * 4);
                *puVar8 = *puVar8 | 1 << ((byte)*puVar10 & 0x1f);
                puVar10 = *(uint **)(puVar10 + 4);
              } while (puVar10 != (uint *)0x0);
              FUN_1482a52dc(param_1);
            }
            uVar14 = *(uint *)((longlong)param_1 + 0x4c);
            uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
            if (uVar14 == 0) goto LAB_1482a3a38;
          }
        }
        uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
        goto LAB_1482a3a38;
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0xc;
      uVar17 = (ulonglong)((int)uVar17 + 3);
    } while (*(uint *)(*param_1 + 0x4c) / 3 != uVar14);
    uVar17 = 0;
  }
LAB_1482a3a38:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a3fee FUN_1482a3fee body=1233 status=ok
// SIG undefined FUN_1482a3fee(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_1482a3fee(undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4,
             longlong *param_5,longlong *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  uint local_ac;
  uint local_a8;
  uint local_a4 [3];
  int local_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0x300000003;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 4;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar1 = param_1 + 0xb;
  param_1[0xb] = 0;
  param_1[0xc] = 4;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 4;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 8;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  uVar13 = *(uint *)(param_5 + 1);
  uVar14 = (ulonglong)uVar13;
  *(uint *)((longlong)param_1 + 100) = uVar13;
  if (uVar14 != 0) {
    FUN_148298f1a(plVar1,uVar13);
    uVar7 = 0;
    do {
      *(undefined4 *)(*plVar1 + uVar7 * 4) =
           *(undefined4 *)
            (*(longlong *)(param_3 + 0x58) + (ulonglong)*(uint *)(*param_5 + uVar7 * 4) * 4);
      uVar7 = uVar7 + 1;
    } while (uVar14 != uVar7);
  }
  uVar13 = param_7[0x19];
  uVar7 = (ulonglong)uVar13;
  *(uint *)((longlong)param_2 + 0xc) = uVar13;
  if (*(uint *)(param_2 + 2) < uVar13) {
    FUN_148298f1a(param_2);
  }
  local_c0 = uVar14;
  if (((void *)*param_2 != (void *)0x0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    memset((void *)*param_2,(int)CONCAT71((int7)(uVar7 >> 8),0xff),
           (ulonglong)(uint)(*(int *)((longlong)param_2 + 0xc) * (int)param_2[1]));
  }
  uVar8 = (*DAT_14cb46728)(0,0x168);
  local_d8 = 0;
  local_d0 = 0xffffffff;
  FUN_14828ce1e(uVar8,*param_7,*(int *)((longlong)param_1 + 100) * 3);
  param_1[5] = uVar8;
  local_a4[2] = *(int *)((longlong)param_1 + 100) * 3;
  local_a4[1] = 4;
  local_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 4;
  local_78 = 0;
  local_70 = 0;
  local_68 = 4;
  local_60 = 0;
  if (local_c0 != 0) {
    local_c8 = param_1 + 0xe;
    local_b8 = param_1 + 0x11;
    uVar14 = 0;
    do {
      iVar12 = 0;
      do {
        local_a4[0] = *(uint *)(*(longlong *)(param_7 + 0x10) +
                               (ulonglong)(uint)(*(int *)(*plVar1 + uVar14 * 4) * 3 + iVar12) * 4);
        uVar7 = (ulonglong)local_a4[0];
        local_a8 = *(uint *)(*(longlong *)(param_7 + 0x2e) + uVar7 * 4);
        uVar13 = *(uint *)(*(longlong *)(param_4 + 0x40) +
                          (ulonglong)(uint)(*(int *)(*param_5 + uVar14 * 4) * 3 + iVar12) * 4);
        if (local_90 != 0) {
          for (local_ac = *(uint *)(local_90 + (ulonglong)(local_98 - 1U & local_a8) * 4);
              local_ac != 0xffffffff; local_ac = *(uint *)(local_70 + (ulonglong)local_ac * 4)) {
            if (*(uint *)(lStack_88 + (ulonglong)local_ac * 4) == local_a8) goto LAB_1482a42e5;
          }
        }
        local_ac = 0xffffffff;
        local_ac = FUN_14829b754(local_a4 + 1,&local_a8);
        local_54[0] = 0;
        local_54[1] = 0;
        local_54[2] = 0;
        FUN_14828cfe8(param_1[5],(ulonglong)local_a4[0] * 0xc + *(longlong *)(param_7 + 0x16),
                      local_54,(ulonglong)uVar13 * 8 + *param_6);
        uVar7 = (ulonglong)local_a4[0];
LAB_1482a42e5:
        if (*(int *)(*param_2 + uVar7 * 4) == -1) {
          iVar2 = *(int *)((longlong)param_1 + 0x3c);
          *(int *)(*param_2 + uVar7 * 4) = iVar2;
          *(int *)((longlong)param_1 + 0x3c) = iVar2 + 1;
          FUN_148298fa0(local_c8,local_a4);
          FUN_148298fa0(local_b8,&local_ac);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 3);
      uVar14 = uVar14 + 1;
    } while (uVar14 != local_c0);
  }
  uVar14 = local_c0;
  uVar13 = (int)local_c0 * 3;
  *(uint *)((longlong)param_1 + 0x4c) = uVar13;
  local_c8 = param_1;
  if (*(uint *)(param_1 + 10) < uVar13) {
    FUN_148298f1a();
  }
  lVar6 = local_70;
  lVar5 = lStack_88;
  lVar9 = local_90;
  if (uVar14 != 0) {
    uVar13 = local_98 - 1;
    uVar14 = 0;
    do {
      lVar10 = 0;
      do {
        uVar7 = (ulonglong)
                *(uint *)(*(longlong *)(param_7 + 0x10) +
                         (ulonglong)(uint)(*(int *)(*plVar1 + uVar14 * 4) * 3 + (int)lVar10) * 4);
        *(undefined4 *)(param_1[8] + (ulonglong)(uint)((int)lVar10 + (int)uVar14 * 3) * 4) =
             *(undefined4 *)(*param_2 + uVar7 * 4);
        if (lVar9 != 0) {
          uVar3 = *(uint *)(*(longlong *)(param_7 + 0x2e) + uVar7 * 4);
          for (uVar11 = *(uint *)(lVar9 + (ulonglong)(uVar13 & uVar3) * 4); uVar11 != 0xffffffff;
              uVar11 = *(uint *)(lVar6 + (ulonglong)uVar11 * 4)) {
            if (*(uint *)(lVar5 + (ulonglong)uVar11 * 4) == uVar3) goto LAB_1482a43ed;
          }
        }
        uVar11 = 0xffffffff;
LAB_1482a43ed:
        local_54[lVar10] = uVar11;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_14828d812(local_c8[5],local_54,0,0xffffffff);
      uVar14 = uVar14 + 1;
    } while (uVar14 != local_c0);
  }
  puVar4 = local_c8;
  FUN_14829c29a(local_c8[5]);
  lVar9 = puVar4[5];
  uVar13 = *(uint *)(lVar9 + 100);
  *(uint *)((longlong)puVar4 + 0xac) = uVar13;
  if (*(uint *)(puVar4 + 0x16) < uVar13) {
    FUN_148298f1a(puVar4 + 0x14);
    lVar9 = puVar4[5];
    uVar13 = *(uint *)(lVar9 + 100);
  }
  memcpy((void *)puVar4[0x14],*(void **)(lVar9 + 0x88),(ulonglong)uVar13 << 3);
  FUN_14829b7b2(local_a4 + 1);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a44c0 FUN_1482a44c0 body=282 status=ok
// SIG undefined FUN_1482a44c0(void)

void FUN_1482a44c0(undefined1 *param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_2[0x3f];
  uVar8 = (ulonglong)uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = param_2[0x13];
  uVar5 = *(undefined8 *)(param_2 + 0x22);
  uVar3 = param_2[0x25];
  *(undefined4 *)(param_3 + 0xc) = 0;
  if ((uVar8 == 0) || (uVar1 <= *(uint *)(param_3 + 0x10))) {
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined8 *)(param_3 + 0x28) = uVar4;
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    *(undefined4 *)(param_3 + 0x5c) = 0;
    if (uVar8 == 0) goto LAB_1482a456a;
  }
  else {
    FUN_148298f1a(param_3,uVar1);
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    *(undefined4 *)(param_3 + 0x20) = uVar3;
    *(undefined8 *)(param_3 + 0x28) = uVar4;
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    *(undefined4 *)(param_3 + 0x5c) = 0;
  }
  uVar7 = 0;
  do {
    local_4c = *(undefined4 *)(*(longlong *)(param_2 + 0x3c) + uVar7 * 4);
    FUN_148298fa0(param_3,&local_4c);
    uVar7 = uVar7 + 1;
  } while (uVar8 != uVar7);
LAB_1482a456a:
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar6 = FUN_1482a011a(param_3,*param_2);
  *param_1 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a45dc FUN_1482a45dc body=404 status=ok
// SIG undefined FUN_1482a45dc(void)

void FUN_1482a45dc(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  float local_88 [4];
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = *(uint *)(param_2 + 0x4c);
  iVar6 = 0;
  uVar7 = 0;
  iVar9 = 0;
  uVar8 = 0;
  if (2 < uVar1) {
    lVar4 = 0;
    uVar8 = 0;
    iVar9 = 0;
    uVar7 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x88);
      lVar3 = *(longlong *)(param_2 + 0x40);
      lVar10 = 0;
      do {
        *(undefined8 *)(local_88 + lVar10 * 2) =
             *(undefined8 *)(lVar2 + (ulonglong)*(uint *)(lVar3 + lVar4 + lVar10 * 4) * 8);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      *(uint *)(param_1 + 4) = uVar5;
      fVar11 = ((local_78 - local_88[0]) * (local_88[3] - local_88[1]) -
               (local_88[2] - local_88[0]) * (local_74 - local_88[1])) * 0.5;
      if (ABS(fVar11) <= 1.1920929e-07) {
        iVar9 = iVar9 + 1;
        *(int *)(param_1 + 0xc) = iVar9;
      }
      else if (fVar11 < 0.0) {
        uVar8 = uVar8 + 1;
        *(uint *)(param_1 + 8) = uVar8;
      }
      lVar4 = lVar4 + 0xc;
    } while (uVar5 != uVar1 / 3);
  }
  if (iVar9 + uVar8 != (int)uVar7) {
    if (uVar8 <= (uint)(uVar7 >> 1)) goto LAB_1482a4723;
    iVar6 = (int)uVar7 - uVar8;
  }
  *(int *)(param_1 + 8) = iVar6;
LAB_1482a4723:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a4772 FUN_1482a4772 body=1888 status=ok
// SIG undefined FUN_1482a4772(void)

void FUN_1482a4772(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
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
  undefined1 auStack_198 [40];
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138 [4];
  float local_128;
  float local_124;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(uint *)(param_2 + 0x4c);
  if (2 < uVar1) {
    lVar8 = 0;
    fVar20 = 0.0;
    fVar15 = 0.0;
    uVar9 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x58);
      lVar3 = *(longlong *)(param_2 + 0x88);
      lVar4 = *(longlong *)(param_2 + 0x40);
      lVar6 = 0;
      pfVar5 = &local_118;
      do {
        uVar7 = (ulonglong)*(uint *)(lVar4 + lVar8 + lVar6 * 4);
        pfVar5[2] = *(float *)(lVar2 + 8 + uVar7 * 0xc);
        *(undefined8 *)pfVar5 = *(undefined8 *)(lVar2 + uVar7 * 0xc);
        *(undefined8 *)(local_138 + lVar6 * 2) = *(undefined8 *)(lVar3 + uVar7 * 8);
        lVar6 = lVar6 + 1;
        pfVar5 = pfVar5 + 3;
      } while (lVar6 != 3);
      fVar11 = local_138[3] - local_138[1];
      fVar18 = local_128 - local_138[0];
      fVar10 = (fVar11 * fVar18 - (local_138[2] - local_138[0]) * (local_124 - local_138[1])) * 0.5;
      if (1.1920929e-07 < ABS(fVar10)) {
        local_13c = local_128;
        fVar20 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                        (uint)ABS(fVar10) & -(uint)(fVar10 < 0.0));
        local_164 = local_f8 - local_110;
        local_140 = local_fc - fStack_114;
        local_148 = local_138[0] - local_138[2];
        local_14c = local_148 * local_f8;
        local_144 = local_148 * local_fc;
        local_148 = local_148 * local_100;
        local_158 = local_f8 * fVar11;
        local_154 = local_fc * fVar11;
        local_150 = fVar11 * local_100;
        local_16c = local_118;
        local_15c = local_138[3];
        local_168 = fVar18 * local_108;
        local_170 = fVar18 * local_10c;
        fVar12 = local_138[1] - local_124;
        local_160 = fVar12 * local_10c;
        fVar16 = (local_10c - local_118) * local_140 -
                 (local_100 - local_118) * (local_108 - fStack_114);
        fVar17 = (local_104 - local_110) * (local_100 - local_118) -
                 local_164 * (local_10c - local_118);
        fVar21 = (local_108 - fStack_114) * local_164 - (local_104 - local_110) * local_140;
        fVar11 = local_138[2] - local_128;
        fVar10 = 1.0 / (fVar20 + fVar20);
        fVar15 = local_124 - local_138[3];
        fVar14 = (fVar11 * local_110 + fVar18 * local_104 + local_14c) * fVar10;
        fVar13 = (fVar11 * fStack_114 + local_168 + local_144) * fVar10;
        fVar18 = (fVar11 * local_118 + local_170 + local_148) * fVar10;
        fVar19 = (local_110 * fVar15 + local_104 * fVar12 + local_158) * fVar10;
        fVar12 = (fStack_114 * fVar15 + local_108 * fVar12 + local_154) * fVar10;
        fVar10 = (fVar15 * local_118 + local_160 + local_150) * fVar10;
        fVar11 = fVar14 * fVar14 + fVar18 * fVar18 + fVar13 * fVar13;
        fVar18 = fVar14 * fVar19 + fVar18 * fVar10 + fVar13 * fVar12;
        fVar12 = fVar19 * fVar19 + fVar10 * fVar10 + fVar12 * fVar12;
        fVar15 = fVar11 - fVar12;
        fVar10 = fVar18 * fVar18 * 4.0 + fVar15 * fVar15;
        fVar15 = SQRT(fVar16 * fVar16 + fVar21 * fVar21 + fVar17 * fVar17) * 0.5;
        if (fVar10 < 0.0) {
          fVar18 = sqrtf(fVar10);
        }
        else {
          fVar18 = SQRT(fVar10);
        }
        fVar11 = fVar11 + fVar12;
        fVar12 = 0.0;
        if (0.0 <= fVar11 - fVar18) {
          fVar12 = fVar11 - fVar18;
        }
        fVar12 = fVar12 * 0.5;
        if (fVar12 < 0.0) {
          fVar12 = sqrtf(fVar12);
        }
        else {
          fVar12 = SQRT(fVar12);
        }
        if (fVar10 < 0.0) {
          fVar10 = sqrtf(fVar10);
        }
        else {
          fVar10 = SQRT(fVar10);
        }
        fVar18 = 0.0;
        if (0.0 <= fVar10 + fVar11) {
          fVar18 = fVar10 + fVar11;
        }
        fVar18 = fVar18 * 0.5;
        if (fVar18 < 0.0) {
          fVar18 = sqrtf(fVar18);
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        if (fVar18 <= fVar12) {
          fVar10 = ABS(fVar12);
          if (ABS(fVar12) <= ABS(fVar18)) {
            fVar10 = ABS(fVar18);
          }
          fVar13 = 1.0;
          if (1.0 <= fVar10) {
            fVar13 = fVar10;
          }
          if (fVar13 * 0.0001 < ABS(fVar12 - fVar18)) {
            FUN_14678752e("\rASSERT: %s %s %d\n",
                          "sigma2 > sigma1 || equal(sigma1, sigma2, kEpsilon)",
                          ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                         );
          }
        }
        fVar11 = fVar11 * 0.5;
        if (fVar11 < 0.0) {
          fVar11 = sqrtf(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        fVar10 = (fVar18 * fVar18 + fVar12 * fVar12) * 0.5;
        if (fVar10 < 0.0) {
          sqrtf(fVar10);
        }
        *(float *)(param_1 + 0x18) = fVar11 * fVar11 * fVar15 + *(float *)(param_1 + 0x18);
        fVar10 = *(float *)(param_1 + 0x1c);
        if (*(float *)(param_1 + 0x1c) <= fVar18) {
          fVar10 = fVar18;
        }
        *(float *)(param_1 + 0x1c) = fVar10;
        if (1e-06 < ABS(fVar12)) {
          *(float *)(param_1 + 0x20) = (fVar18 / fVar12) * fVar15 + *(float *)(param_1 + 0x20);
        }
        *(float *)(param_1 + 0x24) = fVar12 * fVar18 * fVar15 + *(float *)(param_1 + 0x24);
        fVar15 = fVar15 + *(float *)(param_1 + 0x14);
        *(float *)(param_1 + 0x14) = fVar15;
        fVar20 = fVar20 + *(float *)(param_1 + 0x10);
        *(float *)(param_1 + 0x10) = fVar20;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xc;
    } while (uVar9 != (ulonglong)uVar1 / 3);
    if (0.0 < fVar15) {
      fVar20 = fVar20 / fVar15;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      fVar15 = *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0x14);
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      *(float *)(param_1 + 0x18) = fVar15 * fVar20;
      *(float *)(param_1 + 0x1c) = fVar20 * *(float *)(param_1 + 0x1c);
      fVar20 = *(float *)(param_1 + 0x20) / *(float *)(param_1 + 0x14);
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      *(float *)(param_1 + 0x20) = fVar20;
      fVar20 = *(float *)(param_1 + 0x24) / *(float *)(param_1 + 0x14);
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
      *(float *)(param_1 + 0x24) = fVar20;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a4ed4 FUN_1482a4ed4 body=473 status=ok
// SIG undefined FUN_1482a4ed4(void)

void FUN_1482a4ed4(longlong *param_1,int param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b8 [44];
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_1;
  FUN_14829ca22(lVar5,&local_8c,param_2);
  lVar3 = *(longlong *)(lVar5 + 0x58);
  uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0x40) + (ulonglong)(param_2 * 3 + 1) * 4);
  uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar5 + 0x40) + (ulonglong)(uint)(param_2 * 3) * 4);
  fVar7 = *(float *)(lVar3 + 8 + uVar6 * 0xc) - *(float *)(lVar3 + 8 + uVar4 * 0xc);
  fVar8 = *(float *)(lVar3 + 4 + uVar6 * 0xc) - *(float *)(lVar3 + 4 + uVar4 * 0xc);
  fVar10 = *(float *)(lVar3 + uVar6 * 0xc) - *(float *)(lVar3 + uVar4 * 0xc);
  fVar9 = 1.0 / SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8);
  fVar7 = fVar7 * fVar9;
  fVar8 = fVar8 * fVar9;
  fVar9 = fVar9 * fVar10;
  lVar5 = 0;
  do {
    lVar3 = *(longlong *)(*param_1 + 0x58);
    uVar4 = (ulonglong)
            *(uint *)(*(longlong *)(*param_1 + 0x40) +
                     (ulonglong)(uint)(param_2 * 3 + (int)lVar5) * 4);
    fVar10 = *(float *)(lVar3 + uVar4 * 0xc);
    fVar1 = *(float *)(lVar3 + 4 + uVar4 * 0xc);
    fVar2 = *(float *)(lVar3 + 8 + uVar4 * 0xc);
    *(float *)(param_3 + lVar5 * 8) = fVar2 * fVar7 + fVar10 * fVar9 + fVar1 * fVar8;
    *(float *)(param_3 + 4 + lVar5 * 8) =
         (local_88 * fVar9 - local_8c * fVar8) * fVar2 +
         (local_84 * fVar8 - local_88 * fVar7) * fVar10 +
         (local_8c * fVar7 - local_84 * fVar9) * fVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a50ae FUN_1482a50ae body=557 status=ok
// SIG undefined FUN_1482a50ae(void)

void FUN_1482a50ae(longlong *param_1,uint param_2)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_70;
  longlong *local_60;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = param_2;
  FUN_148298fa0(param_1 + 0xe,&local_4c);
  puVar1 = (uint *)(param_1[0x12] + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  puVar1 = (uint *)(param_1[5] + (ulonglong)(local_4c >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)local_4c & 0x1f);
  lVar6 = *param_1;
  uVar11 = local_4c * 3;
  local_58 = (ulonglong)uVar11;
  lVar15 = 0;
  local_60 = param_1;
  do {
    uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x108) + (ulonglong)uVar11 * 4);
    if (uVar3 != 0xffffffff) {
      uVar9 = (ulonglong)(uVar3 / 3 >> 5);
      if (((*(uint *)(param_1[5] + uVar9 * 4) >> (uVar3 / 3 & 0x1f) & 1) == 0) &&
         (*(longlong *)(param_1[0xb] + (ulonglong)(uVar3 / 3) * 8) == 0)) {
        uVar14 = (uVar3 / 3) * 3;
        lVar7 = *(longlong *)(lVar6 + 0x40);
        uVar4 = *(uint *)(lVar7 + (ulonglong)(uint)((int)local_58 + (int)lVar15) * 4);
        iVar13 = (int)(lVar15 + 1);
        if (lVar15 + 1 == 3) {
          iVar13 = 0;
        }
        lVar10 = 0;
        do {
          uVar8 = *(uint *)(*(longlong *)(*param_1 + 0x40) + (ulonglong)uVar14 * 4);
          if ((uVar8 != uVar4) &&
             (uVar5 = *(uint *)(lVar7 + (ulonglong)(uint)(iVar13 + (int)local_58) * 4),
             uVar8 != uVar5)) {
            uVar12 = (ulonglong)
                     *(uint *)(*(longlong *)(*param_1 + 0x40) +
                              (ulonglong)(local_4c * 3 - (int)lVar10) * 4);
            lVar7 = local_60[1];
            fVar16 = *(float *)(lVar7 + uVar12 * 8);
            fVar2 = *(float *)(lVar7 + 4 + uVar12 * 8);
            fVar16 = (*(float *)(lVar7 + 4 + (ulonglong)uVar5 * 8) - fVar2) *
                     (*(float *)(lVar7 + (ulonglong)uVar4 * 8) - fVar16) -
                     (*(float *)(lVar7 + (ulonglong)uVar5 * 8) - fVar16) *
                     (*(float *)(lVar7 + 4 + (ulonglong)uVar4 * 8) - fVar2);
            goto LAB_1482a51f7;
          }
          lVar10 = lVar10 + -1;
          uVar14 = uVar14 + 1;
        } while (lVar10 != -3);
        uVar8 = 0xffffffff;
        fVar16 = 0.0;
LAB_1482a51f7:
        param_1 = local_60;
        if (((*(uint *)(local_60[0x16] + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
           && ((*(uint *)(local_60[0x1a] + uVar9 * 4) & 1 << ((byte)(uVar3 / 3) & 0x1f)) == 0)) {
          local_78 = uVar3;
          local_70 = uVar8;
          FUN_1482a5394(local_60,(ulonglong)uVar11,fVar16,uVar3 / 3);
        }
      }
    }
    uVar11 = uVar11 + 1;
    lVar15 = lVar15 + 1;
    if (lVar15 == 3) {
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1482a52dc FUN_1482a52dc body=183 status=ok
// SIG undefined FUN_1482a52dc(void)

void FUN_1482a52dc(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  do {
    if (param_2 == (uint *)0x0) {
      return;
    }
    puVar2 = *(uint **)(param_2 + 4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*param_2 * 8) = 0;
    uVar1 = *(uint *)(param_1 + 0x4c);
    if ((ulonglong)uVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      uVar6 = 0;
      do {
        if (*(uint **)(lVar3 + uVar6 * 8) == param_2) {
          if (lVar3 == 0) break;
          iVar4 = 1;
          if (uVar1 != 1) {
            iVar4 = *(int *)(param_1 + 0x48);
            uVar5 = (uint)uVar6;
            memmove((void *)((ulonglong)(iVar4 * uVar5) + lVar3),
                    (void *)((ulonglong)((uVar5 + 1) * iVar4) + lVar3),
                    (ulonglong)((~uVar5 + uVar1) * iVar4));
            iVar4 = *(int *)(param_1 + 0x4c);
            if (iVar4 == 0) break;
          }
          *(int *)(param_1 + 0x4c) = iVar4 + -1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_2,0);
      param_2 = puVar2;
    }
    else {
      (*DAT_14cb46730)();
      param_2 = puVar2;
    }
  } while( true );
}



// FUNCTION 1482a5394 FUN_1482a5394 body=1444 status=ok
// SIG undefined FUN_1482a5394(void)

void FUN_1482a5394(longlong *param_1,uint param_2,float param_3,uint param_4,uint param_5,
                  uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float _Y;
  float fVar23;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_fc;
  ulonglong local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1482a4ed4(param_1,param_4,&local_b8);
  lVar4 = *(longlong *)(*param_1 + 0x40);
  uVar15 = (ulonglong)*(uint *)(lVar4 + (ulonglong)param_2 * 4);
  iVar11 = param_2 % 3 + 1;
  uVar7 = 0;
  if (iVar11 == 3) {
    iVar11 = 0;
  }
  uVar16 = (ulonglong)*(uint *)(lVar4 + (ulonglong)(iVar11 + (param_2 / 3) * 3) * 4);
  iVar11 = param_5 % 3 + 1;
  if (iVar11 == 3) {
    iVar11 = 0;
  }
  uVar12 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar14 = 0xffffffff;
  do {
    iVar1 = *(int *)(lVar4 + (ulonglong)(param_4 * 3 + (int)uVar7) * 4);
    if (iVar1 == *(int *)(lVar4 + (ulonglong)(iVar11 + (param_5 / 3) * 3) * 4)) {
      uVar12 = uVar7 & 0xffffffff;
    }
    else if (iVar1 == *(int *)(lVar4 + (ulonglong)param_5 * 4)) {
      uVar10 = uVar7 & 0xffffffff;
    }
    else {
      uVar14 = uVar7 & 0xffffffff;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 3);
  lVar4 = param_1[1];
  fVar18 = *(float *)(lVar4 + uVar15 * 8);
  fVar19 = *(float *)(lVar4 + 4 + uVar15 * 8);
  fVar17 = *(float *)(lVar4 + 4 + uVar16 * 8) - fVar19;
  fVar20 = *(float *)(lVar4 + uVar16 * 8) - fVar18;
  fVar21 = SQRT(fVar20 * fVar20 + fVar17 * fVar17);
  if (fVar21 <= 0.0) goto LAB_1482a5750;
  _Y = *(float *)((longlong)&local_b8 + uVar10 * 8 + 4) -
       *(float *)((longlong)&local_b8 + uVar12 * 8 + 4);
  fVar22 = *(float *)(&local_b8 + uVar10) - *(float *)(&local_b8 + uVar12);
  fVar23 = SQRT(fVar22 * fVar22 + _Y * _Y);
  if (fVar23 <= 0.0) goto LAB_1482a5750;
  fVar21 = fVar21 / fVar23;
  lVar4 = 0;
  do {
    *(float *)(&local_b8 + lVar4) = *(float *)(&local_b8 + lVar4) * fVar21;
    *(float *)((longlong)&local_b8 + lVar4 * 8 + 4) =
         *(float *)((longlong)&local_b8 + lVar4 * 8 + 4) * fVar21;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  fVar21 = *(float *)((longlong)&local_b8 + uVar12 * 8 + 4);
  fVar23 = *(float *)(&local_b8 + uVar12);
  lVar4 = 0;
  do {
    *(float *)(&local_b8 + lVar4) = *(float *)(&local_b8 + lVar4) + (fVar18 - fVar23);
    *(float *)((longlong)&local_b8 + lVar4 * 8 + 4) =
         *(float *)((longlong)&local_b8 + lVar4 * 8 + 4) + (fVar19 - fVar21);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  local_fc = param_2;
  local_f8 = (ulonglong)param_4;
  fVar18 = atan2f(fVar17,fVar20);
  fVar19 = atan2f(_Y,fVar22);
  uVar7 = 0;
  do {
    if (uVar12 != uVar7) {
      fVar17 = *(float *)((longlong)&local_b8 + uVar7 * 8 + 4);
      fVar22 = *(float *)(&local_b8 + uVar7) - *(float *)(&local_b8 + uVar12);
      *(float *)(&local_b8 + uVar7) = fVar22;
      fVar17 = fVar17 - *(float *)((longlong)&local_b8 + uVar12 * 8 + 4);
      *(float *)((longlong)&local_b8 + uVar7 * 8 + 4) = fVar17;
      fVar20 = cosf(fVar18 - fVar19);
      fVar21 = sinf(fVar18 - fVar19);
      *(float *)(&local_b8 + uVar7) =
           (fVar22 * fVar20 - fVar21 * fVar17) + *(float *)(&local_b8 + uVar12);
      *(float *)((longlong)&local_b8 + uVar7 * 8 + 4) =
           fVar17 * fVar20 + fVar22 * fVar21 + *(float *)((longlong)&local_b8 + uVar12 * 8 + 4);
    }
    uVar10 = local_f8;
    uVar8 = local_fc;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 3);
  bVar3 = (byte)local_f8;
  if ((NAN(*(float *)(&local_b8 + uVar14))) ||
     (NAN(*(float *)((longlong)&local_b8 + uVar14 * 8 + 4)))) {
    puVar5 = (uint *)(param_1[0x1a] + (local_f8 >> 5 & 0x7ffffff) * 4);
    *puVar5 = *puVar5 | 1 << (bVar3 & 0x1f);
    goto LAB_1482a5750;
  }
  uVar2 = (&local_b8)[uVar14];
  lVar4 = param_1[1];
  fVar18 = (float)((ulonglong)uVar2 >> 0x20);
  fVar18 = (*(float *)(lVar4 + 4 + uVar16 * 8) - fVar18) *
           (*(float *)(lVar4 + uVar15 * 8) - (float)uVar2) -
           (*(float *)(lVar4 + uVar16 * 8) - (float)uVar2) *
           (*(float *)(lVar4 + 4 + uVar15 * 8) - fVar18);
  uVar9 = (uint)local_f8;
  if (((0.0 <= param_3) || (0.0 <= fVar18)) && ((param_3 <= 0.0 || (fVar18 <= 0.0)))) {
    lVar4 = *(longlong *)(*param_1 + 0x58);
    local_c0 = *(undefined4 *)(lVar4 + 8 + (ulonglong)param_6 * 0xc);
    local_c8 = *(undefined8 *)(lVar4 + (ulonglong)param_6 * 0xc);
    local_d0 = *(undefined4 *)(lVar4 + 8 + uVar16 * 0xc);
    local_d8 = *(undefined8 *)(lVar4 + uVar16 * 0xc);
    local_e0 = *(undefined4 *)(lVar4 + 8 + uVar15 * 0xc);
    local_e8 = *(undefined8 *)(lVar4 + uVar15 * 0xc);
    local_118 = local_b0;
    uStack_114 = uStack_ac;
    uStack_110 = uStack_a8;
    uStack_10c = uStack_a4;
    fVar18 = (float)FUN_1482a593a(&local_e8,&local_d8,&local_c8,local_b8);
    if ((fVar18 < 3.4028235e+38) && (fVar18 = ABS(fVar18 + -1.0), fVar18 <= 0.5)) {
      puVar5 = (uint *)(*DAT_14cb46728)(0,0x30);
      *puVar5 = uVar9;
      puVar5[1] = param_6;
      *(undefined8 *)(puVar5 + 6) = uVar2;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[9] = (uint)fVar18;
      puVar5[8] = (uint)fVar18;
      puVar5[10] = uVar8;
      puVar5[0xb] = (uint)param_3;
      local_f0 = puVar5;
      FUN_148298fa0(param_1 + 8);
      *(uint **)(param_1[0xb] + (uVar10 & 0xffffffff) * 8) = puVar5;
      uVar8 = *(int *)((longlong)param_1 + 0x4c) - 1;
      if (uVar8 != 0) {
        uVar7 = 0;
        do {
          lVar4 = *(longlong *)(param_1[8] + uVar7 * 8);
          if (*(uint *)(lVar4 + 4) == puVar5[1]) goto LAB_1482a58c3;
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
      goto LAB_1482a58df;
    }
  }
  puVar5 = (uint *)(param_1[0x1a] + (ulonglong)(uVar9 >> 5) * 4);
  *puVar5 = *puVar5 | 1 << (bVar3 & 0x1f);
LAB_1482a5750:
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1482a58c3:
  do {
    lVar13 = lVar4;
    lVar4 = *(longlong *)(lVar13 + 0x10);
  } while (*(longlong *)(lVar13 + 0x10) != 0);
  *(longlong *)(puVar5 + 2) = lVar13;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(uint **)(lVar13 + 0x10) = puVar5;
LAB_1482a58df:
  do {
    puVar6 = puVar5;
    puVar5 = *(uint **)(puVar6 + 2);
  } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
  if (puVar6 != (uint *)0x0) {
    fVar18 = 0.0;
    puVar5 = puVar6;
    do {
      if (fVar18 <= (float)puVar5[8]) {
        fVar18 = (float)puVar5[8];
      }
      puVar5 = *(uint **)(puVar5 + 4);
    } while (puVar5 != (uint *)0x0);
    do {
      puVar6[9] = (uint)fVar18;
      puVar6 = *(uint **)(puVar6 + 4);
    } while (puVar6 != (uint *)0x0);
  }
  goto LAB_1482a5750;
}



// FUNCTION 1482a593a FUN_1482a593a body=346 status=ok
// SIG undefined FUN_1482a593a(void)

void FUN_1482a593a(void)

{
  return;
}



// FUNCTION 1482a5a94 FUN_1482a5a94 body=461 status=ok
// SIG undefined FUN_1482a5a94(void)

void FUN_1482a5a94(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x1b0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x198),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_1482a5c62(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xd0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xb0),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x90),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x70),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x58),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x40),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x28),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a5bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a5c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1482a5c62 FUN_1482a5c62 body=198 status=ok
// SIG undefined FUN_1482a5c62(void)

void FUN_1482a5c62(longlong *param_1)

{
  if (param_1[0x13] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[0x13],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[0x10] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[0x10],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[0xd] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[0xd],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (param_1[10] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[10],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a5ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a5d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 1482a5d28 FUN_1482a5d28 body=93 status=ok
// SIG undefined FUN_1482a5d28(void)

void FUN_1482a5d28(longlong *param_1)

{
  if (param_1[3] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[3],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*param_1 != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a5d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a5d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*param_1,0);
    return;
  }
  return;
}



// FUNCTION 1482a5d86 FUN_1482a5d86 body=474 status=ok
// SIG undefined FUN_1482a5d86(void)

void FUN_1482a5d86(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    do {
      FUN_14829e7ac(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8));
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3 * 8);
      if (lVar2 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar2,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x178),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x160),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x148),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_1482a5c62(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x68),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x48),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  if (DAT_14cb46730 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a5f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001482a5e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb46730)();
  return;
}



// FUNCTION 1482a5f60 FUN_1482a5f60 body=289 status=ok
// SIG undefined FUN_1482a5f60(void)

void FUN_1482a5f60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x98),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x68),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a601e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a607e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1482a6082 FUN_1482a6082 body=160 status=ok
// SIG undefined FUN_1482a6082(void)

void FUN_1482a6082(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a60e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a611f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1482a6122 FUN_1482a6122 body=245 status=ok
// SIG undefined FUN_1482a6122(void)

void FUN_1482a6122(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xb8),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x98),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x68),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a61c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a6214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 1482a6218 FUN_1482a6218 body=143 status=ok
// SIG undefined FUN_1482a6218(void)

longlong * FUN_1482a6218(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)(lVar3 + 0x74);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 8;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 4;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar2 = *(uint *)(lVar3 + 0x74);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(uint *)(param_1 + 0xb) = uVar2 / 3;
  *(uint *)((longlong)param_1 + 0x6c) = uVar2 / 3 + 0x1f >> 5;
  if (2 < uVar2) {
    FUN_148298f1a(param_1 + 0xc);
  }
  return param_1;
}



// FUNCTION 1482a62a8 FUN_1482a62a8 body=789 status=ok
// SIG undefined FUN_1482a62a8(void)

void FUN_1482a62a8(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  uint local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *param_1;
  uVar6 = *(uint *)(lVar10 + 0x74);
  *(uint *)(lVar10 + 0xbc) = *(uint *)(lVar10 + 0x8c);
  if (*(uint *)(lVar10 + 0xc0) < *(uint *)(lVar10 + 0x8c)) {
    FUN_148298f1a(lVar10 + 0xb0);
  }
  lVar10 = *param_1;
  if (*(int *)(lVar10 + 0xbc) != 0) {
    lVar3 = *(longlong *)(lVar10 + 0xb0);
    uVar9 = 0;
    do {
      *(undefined4 *)(lVar3 + uVar9 * 4) = 0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(lVar10 + 0xbc));
  }
  if ((ulonglong)uVar6 != 0) {
    uVar9 = 0;
    do {
      FUN_1482a65be(param_1 + 2);
      uVar9 = uVar9 + 1;
    } while (uVar6 != uVar9);
  }
  if (((void *)param_1[0xc] != (void *)0x0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    memset((void *)param_1[0xc],0,
           (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x6c) * (int)param_1[0xd]));
  }
  if (2 < uVar6) {
    uVar9 = (ulonglong)(uVar6 / 3);
    uVar11 = 0;
    local_70 = param_1 + 2;
    do {
      if ((*(byte *)param_1[1] & 1) != 0) break;
      LOCK();
      *(int *)(param_1[1] + 0x18) = *(int *)(param_1[1] + 0x18) + 1;
      UNLOCK();
      FUN_148298eae();
      uVar7 = *(undefined4 *)(*param_1 + 0xa4);
      cVar5 = FUN_1482a6632(param_1,uVar7,uVar11 & 0xffffffff);
      uVar4 = local_88;
      if (cVar5 != '\0') {
        local_90 = uVar7;
        local_78 = uVar9;
        local_68 = (longlong *)(*DAT_14cb46728)(0,0x38);
        *local_68 = 0;
        local_68[1] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[6] = 0;
        *(undefined4 *)(local_68 + 1) = 4;
        *(undefined4 *)(local_68 + 4) = 4;
        FUN_148298fa0(*param_1 + 0x98,&local_68);
        uVar7 = 0;
        if (*(int *)(*param_1 + 0x5c) != 0) {
          uVar7 = *(undefined4 *)(*(longlong *)(*param_1 + 0x50) + uVar11 * 4);
        }
        *(undefined4 *)(local_68 + 6) = uVar7;
        local_80 = uVar11;
        FUN_1482a66d4(param_1,local_90,uVar11 & 0xffffffff);
        local_88 = 0;
        do {
          uVar6 = *(uint *)((longlong)local_68 + 0xc);
          uVar9 = local_78;
          uVar11 = local_80;
          uVar4 = (ulonglong)uVar6;
          if (uVar6 <= (uint)local_88) break;
          uVar9 = local_88 & 0xffffffff;
          local_8c = 0;
          local_88 = (ulonglong)uVar6;
          do {
            iVar2 = *(int *)(*local_68 + uVar9 * 4);
            lVar10 = 0;
            do {
              pfVar12 = (float *)((ulonglong)
                                  *(uint *)(*(longlong *)(*param_1 + 0x68) +
                                           (ulonglong)(uint)((int)lVar10 + iVar2 * 3) * 4) * 8 +
                                 *(longlong *)(*param_1 + 0x80));
              uVar6 = FUN_1482a6788(local_70,pfVar12);
              if (uVar6 != 0xffffffff) {
                uVar11 = (ulonglong)uVar6;
                do {
                  cVar5 = FUN_1482a6632(param_1,local_90,uVar11 / 3);
                  if (cVar5 != '\0') {
                    uVar8 = FUN_1482a66d4(param_1,local_90,uVar11 / 3);
                    local_8c = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                  }
                  do {
                    uVar11 = (ulonglong)*(uint *)(param_1[8] + uVar11 * 4);
                    if (uVar11 == 0xffffffff) goto LAB_1482a64c8;
                    fVar1 = *(float *)(param_1[5] + uVar11 * 8);
                  } while ((((fVar1 != *pfVar12) || (NAN(fVar1) || NAN(*pfVar12))) ||
                           (fVar1 = *(float *)(param_1[5] + 4 + uVar11 * 8), fVar1 != pfVar12[1]))
                          || (NAN(fVar1) || NAN(pfVar12[1])));
                } while( true );
              }
LAB_1482a64c8:
              lVar10 = lVar10 + 1;
            } while (lVar10 != 3);
            uVar9 = uVar9 + 1;
          } while (uVar9 != local_88);
          uVar9 = local_78;
          uVar11 = local_80;
          uVar4 = local_88;
        } while ((local_8c & 1) != 0);
      }
      local_88 = uVar4;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a65be FUN_1482a65be body=116 status=ok
// SIG undefined FUN_1482a65be(void)

void FUN_1482a65be(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1482a6802();
  }
  uVar2 = 0x1505;
  lVar3 = 0;
  do {
    pbVar1 = (byte *)(param_2 + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (uint)*pbVar1 + uVar2 * 0x1003f;
  } while (lVar3 != 8);
  uVar4 = (ulonglong)(*(int *)(param_1 + 8) - 1U & uVar2);
  FUN_148298fa0(param_1 + 0x18,param_2);
  FUN_148298fa0(param_1 + 0x30,uVar4 * 4 + *(longlong *)(param_1 + 0x10));
  *(int *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = *(int *)(param_1 + 0x3c) + -1;
  return;
}



// FUNCTION 1482a6632 FUN_1482a6632 body=161 status=ok
// SIG undefined FUN_1482a6632(void)

undefined4 FUN_1482a6632(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((((*(uint *)(param_1[0xc] + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) == 0) &&
      (lVar2 = *param_1,
      (*(uint *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)(param_3 >> 5) * 4) &
      1 << ((byte)param_3 & 0x1f)) == 0)) &&
     ((*(int *)(lVar2 + 0x5c) == 0 ||
      ((*(uint *)(lVar2 + 0xa4) <= param_2 ||
       (*(int *)(*(longlong *)(lVar2 + 0x50) + (ulonglong)param_3 * 4) ==
        *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + (ulonglong)param_2 * 8) + 0x30))))))) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(lVar2 + 0xb0) +
                       (ulonglong)
                       *(uint *)(*(longlong *)(lVar2 + 0x68) +
                                (ulonglong)(param_3 * 3 + (int)lVar4) * 4) * 4);
      uVar3 = CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2 || uVar1 == 0xffffffff);
      if (uVar1 != param_2 && uVar1 != 0xffffffff) {
        return uVar3;
      }
      bVar5 = lVar4 != 2;
      lVar4 = lVar4 + 1;
    } while (bVar5);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1482a66d4 FUN_1482a66d4 body=179 status=ok
// SIG undefined FUN_1482a66d4(void)

void FUN_1482a66d4(longlong *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x98) + (ulonglong)param_2 * 8);
  puVar1 = (uint *)(param_1[0xc] + (ulonglong)(param_3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  local_34 = param_3;
  FUN_148298fa0(lVar2);
  iVar3 = 0;
  do {
    local_38 = *(uint *)(*(longlong *)(*param_1 + 0x68) + (ulonglong)(local_34 * 3 + iVar3) * 4);
    *(uint *)(*(longlong *)(*param_1 + 0xb0) + (ulonglong)local_38 * 4) = param_2;
    FUN_148298fa0(lVar2 + 0x18,&local_38);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a6788 FUN_1482a6788 body=121 status=ok
// SIG undefined FUN_1482a6788(void)

ulonglong FUN_1482a6788(longlong param_1,float *param_2)

{
  byte *pbVar1;
  float fVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar4 = 0x1505;
    lVar5 = 0;
    do {
      pbVar1 = (byte *)((longlong)param_2 + lVar5);
      lVar5 = lVar5 + 1;
      uVar4 = (uint)*pbVar1 + uVar4 * 0x1003f;
    } while (lVar5 != 8);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) +
                     (ulonglong)(*(int *)(param_1 + 8) - 1U & uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar3 = (ulonglong)uVar4;
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8);
        if ((fVar2 == *param_2) && (!NAN(fVar2) && !NAN(*param_2))) {
          fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + 4 + uVar3 * 8);
          if ((fVar2 == param_2[1]) && (!NAN(fVar2) && !NAN(param_2[1]))) {
            return uVar3;
          }
        }
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x30) + uVar3 * 4);
      } while (uVar4 != 0xffffffff);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1482a6802 FUN_1482a6802 body=230 status=ok
// SIG undefined FUN_1482a6802(void)

void FUN_1482a6802(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4) - 1;
  uVar1 = uVar1 >> 1 | uVar1;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  uVar1 = (uint)(longlong)((double)*(uint *)(param_1 + 4) * 1.3);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 - 1;
    uVar1 = uVar1 >> 1 | uVar1;
    uVar1 = uVar1 >> 2 | uVar1;
    uVar1 = uVar1 >> 4 | uVar1;
    uVar1 = uVar1 >> 8 | uVar1;
    uVar2 = (uVar1 >> 0x10 | uVar1) + 1;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar3 = (*DAT_14cb46728)(0,(ulonglong)uVar2 << 2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 0x28) < uVar1) {
    FUN_148298f1a(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 4);
  }
  if (*(uint *)(param_1 + 0x40) < uVar1) {
    FUN_148298f1a(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 1482a68e8 FUN_1482a68e8 body=127 status=ok
// SIG undefined FUN_1482a68e8(void)

void FUN_1482a68e8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x30),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a6938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a6964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 1482a6968 FUN_1482a6968 body=961 status=ok
// SIG undefined FUN_1482a6968(void)

void FUN_1482a6968(float *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [16];
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] == 0) {
    *param_2 = *(longlong *)(param_1 + 8);
    local_e8 = param_1[0xb];
    *(float *)(param_2 + 1) = local_e8;
  }
  else {
    local_e8 = param_1[0xb];
  }
  local_f0 = *(undefined8 *)(param_1 + 8);
  FUN_1482a6e00(param_1,&local_f0,param_1 + 0x20);
  fVar4 = param_1[0x23];
  if ((ulonglong)(uint)fVar4 == 0) {
    fVar16 = 0.0;
    local_108 = ZEXT816(0);
    local_118 = 0.0;
    local_114 = 0.0;
    local_110 = 0.0;
    local_10c = 0.0;
  }
  else {
    uVar7 = (int)fVar4 - 1;
    lVar5 = *(longlong *)(param_1 + 0x20);
    local_10c = 0.0;
    uVar9 = 0;
    fVar19 = 3.4028235e+38;
    local_110 = 0.0;
    local_114 = 0.0;
    local_118 = 0.0;
    local_108 = ZEXT816(0);
    fVar16 = 0.0;
    do {
      pfVar1 = (float *)(lVar5 + (ulonglong)uVar7 * 8);
      pfVar2 = (float *)(lVar5 + uVar9 * 8);
      cVar6 = FUN_143afd844(pfVar2);
      if (cVar6 == '\0') {
        fVar15 = pfVar2[1] - pfVar1[1];
        fVar10 = *pfVar2 - *pfVar1;
        fVar17 = 1.0 / SQRT(fVar10 * fVar10 + fVar15 * fVar15);
        fVar15 = fVar15 * fVar17;
        fVar17 = fVar17 * fVar10;
        fVar12 = 3.4028235e+38;
        fVar13 = 3.4028235e+38;
        fVar10 = -3.4028235e+38;
        fVar14 = -3.4028235e+38;
        if ((ulonglong)*(uint *)(param_2 + 1) != 0) {
          uVar8 = 0;
          fVar14 = -3.4028235e+38;
          fVar10 = -3.4028235e+38;
          fVar13 = 3.4028235e+38;
          fVar12 = 3.4028235e+38;
          do {
            fVar18 = *(float *)(*param_2 + uVar8 * 8);
            fVar3 = *(float *)(*param_2 + 4 + uVar8 * 8);
            fVar11 = fVar17 * fVar18 + fVar15 * fVar3;
            fVar18 = fVar18 * -fVar15 + fVar3 * fVar17;
            if (fVar11 <= fVar13) {
              fVar13 = fVar11;
            }
            if (fVar14 <= fVar11) {
              fVar14 = fVar11;
            }
            if (fVar18 <= fVar12) {
              fVar12 = fVar18;
            }
            if (fVar10 <= fVar18) {
              fVar10 = fVar18;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(param_2 + 1) != uVar8);
        }
        fVar18 = (fVar10 - fVar12) * (fVar14 - fVar13);
        if (fVar18 < fVar19) {
          local_108 = ZEXT416((uint)fVar15);
          fVar16 = fVar17;
          fVar19 = fVar18;
          local_118 = fVar14;
          local_114 = fVar10;
          local_110 = fVar13;
          local_10c = fVar12;
        }
      }
      uVar7 = (uint)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar9 != (uint)fVar4);
  }
  *param_1 = fVar16;
  fVar4 = local_108._0_4_;
  param_1[1] = fVar4;
  param_1[2] = -fVar4;
  param_1[3] = fVar16;
  param_1[4] = local_110;
  param_1[5] = local_10c;
  param_1[6] = local_118;
  param_1[7] = local_114;
  if (((((int)fVar16 + 0x807ffffeU < 0xfffffffe) && ((int)fVar4 + 0x807ffffeU < 0xfffffffe)) &&
      ((int)-fVar4 + 0x807ffffeU < 0xfffffffe)) &&
     (((int)local_110 + 0x807ffffeU < 0xfffffffe && ((int)local_10c + 0x807ffffeU < 0xfffffffe)))) {
    if ((local_e0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_14678752e("\rASSERT: %s %s %d\n",
                "isFinite(majorAxis) && isFinite(minorAxis) && isFinite(minCorner)",
                ".\\../Plugins/Runtime/GeometryProcessing/Source/GeometryAlgorithms/Private/ThirdParty/xatlas/xatlas.cpp"
                ,0x905);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_138);
}



// FUNCTION 1482a6d30 FUN_1482a6d30 body=208 status=ok
// SIG undefined FUN_1482a6d30(void)

void FUN_1482a6d30(longlong param_1)

{
  FUN_14829a7b2(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x80),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x68),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x50),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x38),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482a6dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14cb46730)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001482a6dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    return;
  }
  return;
}



// FUNCTION 1482a6e00 FUN_1482a6e00 body=988 status=ok
// SIG undefined FUN_1482a6e00(void)

void FUN_1482a6e00(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 0x44) = uVar7;
  if (*(uint *)(param_1 + 0x48) < uVar7) {
    FUN_148298f1a((longlong *)(param_1 + 0x38));
    uVar7 = *(uint *)(param_2 + 1);
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar8 * 4) =
           *(undefined4 *)(*param_2 + uVar8 * 8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_2 + 1));
  }
  local_90 = *(undefined8 *)(param_1 + 0x38);
  local_88 = *(undefined4 *)(param_1 + 0x44);
  FUN_14829a620(param_1 + 0x98);
  puVar4 = *(uint **)(param_1 + 0x98);
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  uVar7 = *(uint *)(param_2 + 1);
  if (*(uint *)(param_1 + 0x60) < uVar7) {
    FUN_148298f1a(plVar1);
    uVar7 = *(uint *)(param_2 + 1);
  }
  plVar2 = (longlong *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x78) < uVar7) {
    FUN_148298f1a(plVar2);
    uVar7 = *(uint *)(param_2 + 1);
  }
  uVar8 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    fVar13 = *(float *)(*param_2 + 4 + (ulonglong)*puVar4 * 8);
    fVar3 = *(float *)(*param_2 + 4 + (ulonglong)puVar4[uVar7 - 1] * 8);
    fVar12 = fVar13;
    if (fVar13 <= fVar3) {
      fVar12 = fVar3;
    }
    if (fVar3 <= fVar13) {
      fVar13 = fVar3;
    }
    uVar10 = 0;
    do {
      local_98 = *(undefined8 *)(*param_2 + (ulonglong)puVar4[uVar10] * 8);
      if (fVar13 <= (float)((ulonglong)local_98 >> 0x20)) {
        FUN_148298fa0(plVar1,&local_98);
        uVar8 = (ulonglong)*(uint *)(param_2 + 1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
    if ((int)uVar8 != 0) {
      uVar7 = 0;
      iVar11 = -1;
      do {
        local_98 = *(undefined8 *)(*param_2 + (ulonglong)puVar4[(uint)((int)uVar8 + iVar11)] * 8);
        if ((float)((ulonglong)local_98 >> 0x20) <= fVar12) {
          FUN_148298fa0(plVar2,&local_98);
          uVar8 = (ulonglong)*(uint *)(param_2 + 1);
        }
        uVar7 = uVar7 + 1;
        iVar11 = iVar11 + -1;
      } while (uVar7 < (uint)uVar8);
    }
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  FUN_148298fa0(param_3,*(undefined8 *)(param_1 + 0x50));
  FUN_148298fa0(param_3,*(longlong *)(param_1 + 0x50) + 8);
  if (2 < *(uint *)(param_1 + 0x5c)) {
    uVar7 = 2;
    do {
      uVar6 = *(uint *)((longlong)param_3 + 0xc);
      lVar5 = *param_3;
      uVar9 = uVar6 - 1;
      local_98 = *(undefined8 *)(*plVar1 + (ulonglong)uVar7 * 8);
      fVar13 = (float)((ulonglong)local_98 >> 0x20);
      fVar13 = ((*(float *)(lVar5 + 4 + (ulonglong)uVar9 * 8) - fVar13) *
                (*(float *)(lVar5 + (ulonglong)(uVar6 - 2) * 8) - (float)local_98) -
               (*(float *)(lVar5 + (ulonglong)uVar9 * 8) - (float)local_98) *
               (*(float *)(lVar5 + 4 + (ulonglong)(uVar6 - 2) * 8) - fVar13)) * 0.5;
      if (-1e-05 <= fVar13) {
        *(uint *)((longlong)param_3 + 0xc) = uVar9;
        uVar6 = uVar9;
        if (*(uint *)(param_3 + 2) < uVar9) {
          uVar6 = uVar9 >> 2;
          if (*(uint *)(param_3 + 2) == 0) {
            uVar6 = 0;
          }
          FUN_148298f1a(param_3,uVar6 + uVar9);
          uVar6 = *(uint *)((longlong)param_3 + 0xc);
        }
      }
      if ((fVar13 < -1e-05) || (uVar6 == 1)) {
        FUN_148298fa0(param_3,&local_98);
        uVar7 = uVar7 + 1;
      }
    } while (uVar7 < *(uint *)(param_1 + 0x5c));
  }
  uVar7 = *(uint *)((longlong)param_3 + 0xc);
  FUN_148298fa0(param_3,*(longlong *)(param_1 + 0x68) + 8);
  if (2 < *(uint *)(param_1 + 0x74)) {
    uVar8 = 2;
    do {
      uVar6 = *(uint *)((longlong)param_3 + 0xc);
      lVar5 = *param_3;
      uVar9 = uVar6 - 1;
      local_98 = *(undefined8 *)(*plVar2 + uVar8 * 8);
      fVar13 = (float)((ulonglong)local_98 >> 0x20);
      fVar13 = ((*(float *)(lVar5 + 4 + (ulonglong)uVar9 * 8) - fVar13) *
                (*(float *)(lVar5 + (ulonglong)(uVar6 - 2) * 8) - (float)local_98) -
               (*(float *)(lVar5 + (ulonglong)uVar9 * 8) - (float)local_98) *
               (*(float *)(lVar5 + 4 + (ulonglong)(uVar6 - 2) * 8) - fVar13)) * 0.5;
      if (-1e-05 <= fVar13) {
        *(uint *)((longlong)param_3 + 0xc) = uVar9;
        uVar6 = uVar9;
        if (*(uint *)(param_3 + 2) < uVar9) {
          uVar6 = uVar9 >> 2;
          if (*(uint *)(param_3 + 2) == 0) {
            uVar6 = 0;
          }
          FUN_148298f1a(param_3,uVar6 + uVar9);
          uVar6 = *(uint *)((longlong)param_3 + 0xc);
        }
      }
      if ((fVar13 < -1e-05) || (uVar6 == uVar7)) {
        FUN_148298fa0(param_3,&local_98);
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
    } while ((uint)uVar8 < *(uint *)(param_1 + 0x74));
  }
  uVar7 = *(int *)((longlong)param_3 + 0xc) - 1;
  *(uint *)((longlong)param_3 + 0xc) = uVar7;
  if (*(uint *)(param_3 + 2) < uVar7) {
    uVar9 = uVar7 >> 2;
    if (*(uint *)(param_3 + 2) == 0) {
      uVar9 = 0;
    }
    FUN_148298f1a(param_3,uVar9 + uVar7);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a71de FUN_1482a71de body=158 status=ok
// SIG undefined FUN_1482a71de(void)

longlong * FUN_1482a71de(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (*DAT_14cb46728)(0,0xe0);
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 8;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 4;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 8;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 8;
  *(undefined4 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 8;
  *(undefined4 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 4;
  *(undefined4 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 200) = 4;
  *(undefined4 *)(lVar1 + 0xd0) = 0;
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  return param_1;
}



// FUNCTION 1482a727c FUN_1482a727c body=213 status=ok
// SIG undefined FUN_1482a727c(void)

float FUN_1482a727c(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  fVar8 = 0.0;
  if (2 < *(uint *)(param_1 + 0x4c)) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar4 = *(longlong *)(param_1 + 0x88);
    lVar5 = 0;
    do {
      uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + lVar5);
      uVar7 = (ulonglong)*(uint *)(lVar3 + 8 + lVar5);
      fVar1 = *(float *)(lVar4 + uVar7 * 8);
      fVar2 = *(float *)(lVar4 + 4 + uVar7 * 8);
      fVar8 = fVar8 + ABS(((*(float *)(lVar4 + 4 + uVar6 * 8) - fVar2) *
                           (*(float *)(lVar4 + (ulonglong)*(uint *)(lVar3 + lVar5) * 8) - fVar1) -
                          (*(float *)(lVar4 + uVar6 * 8) - fVar1) *
                          (*(float *)(lVar4 + 4 + (ulonglong)*(uint *)(lVar3 + lVar5) * 8) - fVar2))
                          * 0.5);
      lVar5 = lVar5 + 0xc;
    } while (((ulonglong)*(uint *)(param_1 + 0x4c) * 0xaaaaaaab >> 0x1f & 0xfffffffffffffffc) * 3 !=
             lVar5);
  }
  return fVar8;
}



// FUNCTION 1482a7352 FUN_1482a7352 body=488 status=ok
// SIG undefined FUN_1482a7352(void)

void FUN_1482a7352(int *param_1,int param_2,uint param_3,char param_4)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t _Size;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  void *local_60;
  int local_58;
  uint local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_2 + 0x3fU >> 6;
  if (param_4 == '\0') {
    local_60 = (void *)0x0;
    local_58 = 8;
    local_50 = 0;
    local_54 = uVar3 * param_3;
    local_68 = 0;
    _Size = 0;
    if (local_54 != 0) {
      FUN_148298f1a(&local_60);
      local_68 = (ulonglong)local_54;
      _Size = local_68 << 3;
    }
    pvVar2 = local_60;
    memset(local_60,0,_Size);
    if (uVar3 == param_1[2]) {
      uVar4 = param_1[1];
      if (param_3 <= (uint)param_1[1]) {
        uVar4 = param_3;
      }
      memcpy(pvVar2,*(void **)(param_1 + 4),(ulonglong)(uVar4 * uVar3) << 3);
    }
    else if ((*param_1 != 0) && (uVar4 = param_1[1], param_3 != 0 && uVar4 != 0)) {
      if (param_3 <= uVar4) {
        uVar4 = param_3;
      }
      uVar6 = 0;
      uVar7 = 0;
      do {
        uVar1 = param_1[2];
        uVar5 = uVar1;
        if (uVar3 < uVar1) {
          uVar5 = uVar3;
        }
        memcpy((void *)((longlong)pvVar2 + uVar6 * 8),
               (void *)((ulonglong)((int)uVar7 * uVar1) * 8 + *(longlong *)(param_1 + 4)),
               (ulonglong)(uVar5 << 3));
        uVar7 = uVar7 + 1;
        uVar6 = (ulonglong)((int)uVar6 + uVar3);
      } while (uVar4 != uVar7);
    }
    param_1[7] = 0;
    if (*(longlong *)(param_1 + 4) != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(*(longlong *)(param_1 + 4),0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    *(void **)(param_1 + 4) = pvVar2;
    param_1[6] = local_58;
    param_1[7] = (int)local_68;
    param_1[8] = local_50;
  }
  else {
    param_1[7] = uVar3 * param_3;
    if ((uint)param_1[8] < uVar3 * param_3) {
      FUN_148298f1a(param_1 + 4);
    }
    pvVar2 = *(void **)(param_1 + 4);
    if ((pvVar2 != (void *)0x0) && (param_1[7] != 0)) {
      memset(pvVar2,0,(ulonglong)(uint)(param_1[7] * param_1[6]));
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar3;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a753c FUN_1482a753c body=85 status=ok
// SIG undefined FUN_1482a753c(void)

undefined8 FUN_1482a753c(longlong *param_1,uint param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (ulonglong *)
           (*(longlong *)(*param_1 + 0x10) +
           (ulonglong)(*(int *)(*param_1 + 8) * param_3 + (param_2 >> 6)) * 8);
  *puVar1 = *puVar1 | 1L << ((byte)param_2 & 0x3f);
  lVar2 = param_1[1];
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    puVar1 = (ulonglong *)(lVar3 + (ulonglong)(param_2 * *(int *)(lVar2 + 8) + (param_3 >> 6)) * 8);
    *puVar1 = *puVar1 | 1L << ((byte)param_3 & 0x3f);
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1482a7592 FUN_1482a7592 body=818 status=ok
// SIG undefined FUN_1482a7592(void)

void FUN_1482a7592(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_118 [32];
  longlong local_f8;
  int local_ec;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(undefined8 *)(param_5 + 0x18) = uVar3;
  *(undefined4 *)(param_5 + 0x20) = uVar2;
  local_d8._0_4_ = (undefined4)uVar5;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar6;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(param_5 + 0x28) = (undefined4)local_d8;
  *(undefined4 *)(param_5 + 0x2c) = local_d8._4_4_;
  *(undefined4 *)(param_5 + 0x30) = (undefined4)uStack_d0;
  *(undefined4 *)(param_5 + 0x34) = uStack_d0._4_4_;
  *(undefined4 *)(param_5 + 0x5c) = 0;
  local_f8 = param_4;
  local_e0 = param_3;
  local_d8 = uVar5;
  uStack_d0 = uVar6;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fVar18 = 0.0;
      do {
        local_c8[0] = fVar18;
        FUN_148298fa0(param_5,local_c8);
        fVar18 = (float)((int)fVar18 + 1);
      } while ((uint)fVar18 < (uint)*(float *)(param_1 + 0x10));
    }
  }
  else {
    uVar13 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + 0xc);
    if (uVar13 != 0) {
      uVar11 = 0;
      do {
        local_c8[0] = *(float *)(**(longlong **)(param_1 + 0x68) + uVar11 * 4);
        FUN_148298fa0(param_5,local_c8);
        uVar11 = uVar11 + 1;
      } while (uVar13 != uVar11);
    }
  }
  uVar14 = param_2[1];
  if (uVar14 == 0) {
LAB_1482a786f:
    if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar9 = *param_2;
  uVar13 = 0;
LAB_1482a76c4:
  iVar17 = (int)uVar13;
  uVar7 = 0;
  if (uVar9 != 0) {
    fVar19 = (float)uVar13 + 0.5 + -1.0;
    fVar18 = (float)uVar13 + 0.5 + 1.0;
    local_ec = (int)(uVar13 >> 6);
    local_e8 = 1L << ((byte)uVar13 & 0x3f);
    uVar13 = 0;
    lVar12 = local_f8;
LAB_1482a7712:
    iVar16 = (int)uVar13;
    iVar4 = (int)(uVar13 >> 6);
    if ((*(ulonglong *)(*(longlong *)(param_2 + 4) + (ulonglong)(param_2[2] * iVar17 + iVar4) * 8)
         >> (uVar13 & 0x3f) & 1) != 0) goto LAB_1482a773e;
    lVar10 = 0;
    do {
      uVar14 = *(int *)((longlong)&DAT_14ae72660 + lVar10) + iVar16;
      if (((((int)uVar14 < (int)uVar9) && (-1 < (int)uVar14)) &&
          (iVar15 = *(int *)((longlong)&DAT_14ae72680 + lVar10) + iVar17, -1 < iVar15)) &&
         ((iVar15 < (int)param_2[1] &&
          ((*(ulonglong *)
             (*(longlong *)(param_2 + 4) + (ulonglong)(iVar15 * param_2[2] + (uVar14 >> 6)) * 8) >>
            ((ulonglong)uVar14 & 0x3f) & 1) != 0)))) {
        local_c8[0] = (float)uVar13 + 0.5 + -1.0;
        local_c8[1] = fVar19;
        local_c8[2] = (float)uVar13 + 0.5 + 1.0;
        local_c8[3] = fVar19;
        local_b8 = local_c8[2];
        local_b4 = fVar18;
        local_b0 = local_c8[0];
        local_ac = fVar18;
        lVar10 = 1;
        goto LAB_1482a781b;
      }
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x20);
    goto LAB_1482a7772;
  }
  goto LAB_1482a7855;
  while( true ) {
    cVar8 = FUN_1482a8ca8(param_5,(&uStack_d0)[lVar10],
                          *(undefined8 *)(local_c8 + (ulonglong)((uint)lVar10 & 3) * 2));
    lVar10 = lVar10 + 1;
    lVar12 = local_f8;
    if (cVar8 != '\0') break;
LAB_1482a781b:
    lVar12 = local_f8;
    if (lVar10 == 5) goto LAB_1482a7772;
  }
LAB_1482a773e:
  puVar1 = (ulonglong *)
           (*(longlong *)(local_e0 + 0x10) +
           (ulonglong)(uint)(*(int *)(local_e0 + 8) * iVar17 + iVar4) * 8);
  *puVar1 = *puVar1 | 1L << ((byte)uVar13 & 0x3f);
  if (lVar12 != 0) {
    puVar1 = (ulonglong *)
             (*(longlong *)(lVar12 + 0x10) +
             (ulonglong)(uint)(*(int *)(lVar12 + 8) * iVar16 + local_ec) * 8);
    *puVar1 = *puVar1 | local_e8;
  }
LAB_1482a7772:
  uVar13 = (ulonglong)(iVar16 + 1U);
  uVar9 = *param_2;
  if (uVar9 <= iVar16 + 1U) goto LAB_1482a7850;
  goto LAB_1482a7712;
LAB_1482a7850:
  uVar14 = param_2[1];
  uVar7 = uVar9;
LAB_1482a7855:
  uVar9 = uVar7;
  uVar13 = (ulonglong)(iVar17 + 1U);
  if (uVar14 <= iVar17 + 1U) goto LAB_1482a786f;
  goto LAB_1482a76c4;
}



// FUNCTION 1482a78c6 FUN_1482a78c6 body=699 status=ok
// SIG undefined FUN_1482a78c6(void)

void FUN_1482a78c6(uint *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint *local_78;
  undefined1 local_70 [8];
  int local_68;
  void *local_60;
  int local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1482a7b82(local_70);
  local_80 = param_2;
  if (param_2 != 0) {
    local_78 = param_1 + 4;
    iVar12 = 0;
    do {
      local_7c = iVar12;
      if ((local_60 != (void *)0x0) && (local_54 != 0)) {
        memset(local_60,0,(ulonglong)(local_54 * local_58));
      }
      uVar5 = param_1[1];
      if (uVar5 != 0) {
        uVar9 = *param_1;
        uVar7 = 0;
        uVar6 = uVar9;
        do {
          if (uVar6 == 0) {
            uVar6 = 0;
          }
          else {
            local_84 = uVar7 - 1;
            local_88 = uVar7 + 1;
            uVar5 = 0;
            do {
              uVar4 = uVar5 >> 6;
              uVar2 = param_1[2];
              iVar12 = uVar2 * uVar7;
              lVar3 = *(longlong *)(param_1 + 4);
              uVar13 = 1L << ((byte)uVar5 & 0x3f);
              if ((*(ulonglong *)(lVar3 + (ulonglong)(iVar12 + uVar4) * 8) >>
                   ((ulonglong)uVar5 & 0x3f) & 1) == 0) {
                if (uVar5 == 0) {
                  bVar14 = false;
                }
                else {
                  uVar11 = 1L << ((byte)(uVar5 - 1) & 0x3f);
                  uVar10 = uVar5 - 1 >> 6;
                  uVar8 = *(ulonglong *)(lVar3 + (ulonglong)(iVar12 + uVar10) * 8);
                  if (uVar7 != 0) {
                    uVar8 = uVar8 | *(ulonglong *)
                                     (lVar3 + (ulonglong)(uVar2 * local_84 + uVar10) * 8);
                  }
                  bVar14 = (uVar8 & uVar11) != 0;
                  if (uVar7 < param_1[1] - 1) {
                    bVar14 = ((uVar8 | *(ulonglong *)
                                        (lVar3 + (ulonglong)(uVar2 * local_88 + uVar10) * 8)) &
                             uVar11) != 0;
                  }
                }
                if (uVar7 != 0) {
                  bVar14 = (bool)(bVar14 | (*(ulonglong *)
                                             (lVar3 + (ulonglong)(uVar2 * local_84 + uVar4) * 8) &
                                           uVar13) != 0);
                }
                if (uVar7 < param_1[1] - 1) {
                  bVar14 = (bool)(bVar14 | (*(ulonglong *)
                                             (lVar3 + (ulonglong)(uVar2 * local_88 + uVar4) * 8) &
                                           uVar13) != 0);
                }
                if (uVar5 < uVar6 - 1) {
                  uVar6 = uVar5 + 1;
                  uVar10 = uVar6 >> 6;
                  uVar8 = 1L << ((byte)uVar6 & 0x3f);
                  bVar14 = (bool)(bVar14 | (*(ulonglong *)(lVar3 + (ulonglong)(iVar12 + uVar10) * 8)
                                            >> ((ulonglong)uVar6 & 0x3f) & 1) != 0);
                  if (uVar7 != 0) {
                    bVar14 = (bool)(bVar14 | (*(ulonglong *)
                                               (lVar3 + (ulonglong)(uVar2 * local_84 + uVar10) * 8)
                                             & uVar8) != 0);
                  }
                  if (param_1[1] - 1 <= uVar7) goto LAB_1482a7ab3;
                  if (bVar14 || (*(ulonglong *)(lVar3 + (ulonglong)(uVar2 * local_88 + uVar10) * 8)
                                & uVar8) != 0) goto LAB_1482a7993;
                }
                else {
LAB_1482a7ab3:
                  if (bVar14) goto LAB_1482a7993;
                }
              }
              else {
LAB_1482a7993:
                puVar1 = (ulonglong *)
                         ((longlong)local_60 + (ulonglong)(local_68 * uVar7 + uVar4) * 8);
                *puVar1 = *puVar1 | uVar13;
                uVar9 = *param_1;
              }
              uVar5 = uVar5 + 1;
              uVar6 = uVar9;
            } while (uVar5 < uVar9);
            uVar5 = param_1[1];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
      }
      param_1[7] = local_54;
      if (param_1[8] < local_54) {
        FUN_148298f1a(local_78);
      }
      iVar12 = local_7c;
      if (((*(void **)local_78 != (void *)0x0) && (local_60 != (void *)0x0)) && (local_54 != 0)) {
        memcpy(*(void **)local_78,local_60,(ulonglong)(local_54 * local_58));
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != local_80);
  }
  if (local_60 != (void *)0x0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_60,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482a7b82 FUN_1482a7b82 body=110 status=ok
// SIG undefined FUN_1482a7b82(void)

int * FUN_1482a7b82(int *param_1,int param_2,int param_3)

{
  void *_Dst;
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 8;
  param_1[8] = 0;
  uVar1 = param_2 + 0x3fU >> 6;
  param_1[2] = uVar1;
  param_3 = uVar1 * param_3;
  param_1[7] = param_3;
  if (param_3 != 0) {
    FUN_148298f1a(param_1 + 4);
    _Dst = *(void **)(param_1 + 4);
    if ((_Dst != (void *)0x0) && (param_1[7] != 0)) {
      memset(_Dst,0,(ulonglong)(uint)(param_1[7] * param_1[6]));
    }
  }
  return param_1;
}



// FUNCTION 1482a7bf0 FUN_1482a7bf0 body=100 status=ok
// SIG undefined FUN_1482a7bf0(void)

int * FUN_1482a7bf0(int *param_1,int param_2,int param_3)

{
  size_t _Size;
  void *_Dst;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[6] = 0;
  param_1[5] = param_3 * param_2;
  _Size = 0;
  _Dst = (void *)0x0;
  if (param_3 * param_2 != 0) {
    FUN_148298f1a(param_1 + 2);
    _Dst = *(void **)(param_1 + 2);
    _Size = (ulonglong)(uint)param_1[5] << 2;
  }
  memset(_Dst,0,_Size);
  return param_1;
}



// FUNCTION 1482a7c54 FUN_1482a7c54 body=247 status=ok
// SIG undefined FUN_1482a7c54(void)

void FUN_1482a7c54(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,int param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined4 param_14)

{
  if ((*(char *)(param_2 + 0x12) == '\0') && (0x1000 < param_8 * param_7)) {
    FUN_1482a9104(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                  param_12,param_13,param_14);
  }
  else {
    FUN_1482a8eb0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                  param_12,param_13,param_14);
  }
  return;
}



// FUNCTION 1482a7d4c FUN_1482a7d4c body=318 status=ok
// SIG undefined FUN_1482a7d4c(void)

void FUN_1482a7d4c(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  local_50 = 4;
  local_48 = 0;
  local_4c = param_3 * param_2;
  _Size = 0;
  uVar5 = 0;
  if (local_4c != 0) {
    FUN_148298f1a(&local_58);
    _Size = (ulonglong)local_4c << 2;
    uVar5 = local_4c;
  }
  pvVar2 = local_58;
  uVar6 = 0;
  memset(local_58,0,_Size);
  uVar3 = param_1[1];
  if (param_3 <= param_1[1]) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar3 = *param_1;
      uVar1 = uVar3;
      if (param_2 <= uVar3) {
        uVar1 = param_2;
      }
      memcpy((void *)((longlong)pvVar2 + uVar6 * 4),
             (void *)((ulonglong)((int)uVar4 * uVar3) * 4 + *(longlong *)(param_1 + 2)),
             (ulonglong)uVar1 << 2);
      uVar4 = uVar4 + 1;
      uVar3 = param_1[1];
      if (param_3 <= param_1[1]) {
        uVar3 = param_3;
      }
      uVar6 = (ulonglong)((int)uVar6 + param_2);
    } while (uVar4 < uVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 2),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  *(void **)(param_1 + 2) = pvVar2;
  param_1[4] = local_50;
  param_1[5] = uVar5;
  param_1[6] = local_48;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a7e8c FUN_1482a7e8c body=207 status=ok
// SIG undefined FUN_1482a7e8c(void)

void FUN_1482a7e8c(longlong param_1,uint *param_2,uint *param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_8 != 0) {
    param_2 = param_3;
  }
  uVar2 = param_2[1];
  if (0 < (int)uVar2) {
    uVar3 = *param_2;
    uVar6 = 0;
    do {
      iVar7 = uVar6 + param_7;
      if (-1 < iVar7 && 0 < (int)uVar3) {
        uVar4 = 0;
        do {
          uVar5 = param_6 + (int)uVar4;
          if ((((-1 < (int)uVar5) && (iVar7 < param_5)) && ((int)uVar5 < param_4)) &&
             ((1L << ((byte)uVar4 & 0x3f) &
              *(ulonglong *)
               (*(longlong *)(param_2 + 4) + (ulonglong)(param_2[2] * uVar6 + (int)(uVar4 >> 6)) * 8
               )) != 0)) {
            puVar1 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x10) +
                     (ulonglong)(*(int *)(param_1 + 8) * iVar7 + (uVar5 >> 6)) * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar5 & 0x3f);
          }
          uVar5 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar5;
        } while (uVar3 != uVar5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  return;
}



// FUNCTION 1482a7f5c FUN_1482a7f5c body=372 status=ok
// SIG undefined FUN_1482a7f5c(void)

void FUN_1482a7f5c(int *param_1,uint param_2,uint *param_3,longlong param_4,longlong param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar1 = param_3[1];
  if (0 < (int)uVar1) {
    uVar2 = *param_3;
    uVar9 = 0;
    iVar8 = param_9;
    do {
      if (-1 < (int)(uVar9 + param_9) && 0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if ((((int)(uVar9 + param_9) < param_7) && (iVar7 = param_8 + (int)uVar5, -1 < iVar7)) &&
             (iVar7 < param_6)) {
            iVar3 = (int)(uVar5 >> 6);
            uVar6 = 1L << ((byte)uVar5 & 0x3f);
            uVar4 = param_2 | 0x80000000;
            if ((((*(ulonglong *)
                    (*(longlong *)(param_3 + 4) + (ulonglong)(param_3[2] * uVar9 + iVar3) * 8) >>
                   (uVar5 & 0x3f) & 1) != 0) ||
                ((param_4 != 0 &&
                 (uVar4 = param_2 | 0xc0000000,
                 (*(ulonglong *)
                   (*(longlong *)(param_4 + 0x10) +
                   (ulonglong)(*(int *)(param_4 + 8) * uVar9 + iVar3) * 8) & uVar6) != 0)))) ||
               ((param_5 != 0 &&
                (uVar4 = param_2 | 0xa0000000,
                (*(ulonglong *)
                  (*(longlong *)(param_5 + 0x10) +
                  (ulonglong)(*(int *)(param_5 + 8) * uVar9 + iVar3) * 8) & uVar6) != 0)))) {
              *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uint)(iVar7 + *param_1 * iVar8) * 4
                       ) = uVar4;
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar2 != uVar4);
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 1;
    } while (uVar9 != uVar1);
  }
  return;
}



// FUNCTION 1482a80d0 FUN_1482a80d0 body=312 status=ok
// SIG undefined FUN_1482a80d0(void)

undefined8 *
FUN_1482a80d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = *param_4;
  param_1[1] = uVar2;
  uVar3 = *param_3;
  param_1[2] = uVar3;
  fVar4 = (float)uVar1;
  fVar9 = (float)uVar3 - fVar4;
  fVar7 = (float)((ulonglong)uVar2 >> 0x20);
  fVar8 = (float)((ulonglong)uVar1 >> 0x20);
  fVar10 = fVar7 - fVar8;
  fVar6 = (float)((ulonglong)uVar3 >> 0x20);
  fVar12 = fVar6 - fVar8;
  fVar5 = (float)uVar2;
  fVar11 = fVar5 - fVar4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (fVar9 * fVar10 - fVar11 * fVar12 < 0.0) {
    *param_1 = uVar2;
    param_1[1] = uVar1;
    fVar12 = fVar6 - fVar7;
    fVar9 = (float)uVar3 - fVar5;
    fVar10 = fVar8 - fVar7;
    fVar11 = fVar4 - fVar5;
  }
  fVar10 = fVar11 * fVar12 - fVar10 * fVar9;
  if ((fVar10 != 0.0) || (NAN(fVar10))) {
    FUN_1482a884a(param_1);
  }
  return param_1;
}



// FUNCTION 1482a8208 FUN_1482a8208 body=1600 status=ok
// SIG undefined FUN_1482a8208(void)

void FUN_1482a8208(float *param_1,float *param_2,undefined8 param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 unaff_XMM10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined1 local_130 [64];
  float *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  fVar2 = param_1[1];
  fVar13 = param_1[3];
  fVar9 = param_1[5];
  fVar4 = fVar13;
  if (fVar9 <= fVar13) {
    fVar4 = fVar9;
  }
  fVar8 = fVar2;
  if (fVar4 <= fVar2) {
    fVar8 = fVar4;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  auVar7 = roundss(ZEXT816(0),ZEXT416((uint)fVar8),9);
  fVar4 = fVar13;
  if (fVar13 <= fVar9) {
    fVar4 = fVar9;
  }
  fVar8 = fVar2;
  if (fVar2 <= fVar4) {
    fVar8 = fVar4;
  }
  if (param_2[1] + -1.0 <= fVar8) {
    fVar8 = param_2[1] + -1.0;
  }
  auVar5 = roundss(ZEXT816(0),ZEXT416((uint)fVar8),10);
  local_1c8 = auVar7._0_4_ + 0.5;
  local_1b0 = auVar5._0_4_ + 0.5;
  if (local_1c8 <= local_1b0) {
    fVar4 = param_1[2];
    fVar8 = param_1[4];
    fVar3 = fVar4;
    if (fVar8 <= fVar4) {
      fVar3 = fVar8;
    }
    fVar10 = *param_1;
    fVar6 = fVar10;
    if (fVar3 <= fVar10) {
      fVar6 = fVar3;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    auVar7 = roundss(unaff_XMM10,ZEXT416((uint)fVar6),9);
    fVar3 = fVar4;
    if (fVar4 <= fVar8) {
      fVar3 = fVar8;
    }
    fVar6 = fVar10;
    if (fVar10 <= fVar3) {
      fVar6 = fVar3;
    }
    if (*param_2 + -1.0 <= fVar6) {
      fVar6 = *param_2 + -1.0;
    }
    auVar5 = roundss(ZEXT816(0),ZEXT416((uint)fVar6),10);
    local_1b4 = auVar7._0_4_ + 0.5;
    local_1c0 = auVar5._0_4_ + 0.5;
    local_188 = -fVar10 * param_1[6] - fVar2 * param_1[7];
    uStack_184 = 0x80000000;
    uStack_180 = 0x80000000;
    uStack_17c = 0x80000000;
    local_198 = -fVar4 * param_1[8] - fVar13 * param_1[9];
    uStack_194 = 0x80000000;
    uStack_190 = 0x80000000;
    uStack_18c = 0x80000000;
    local_1a8 = -fVar8 * param_1[10] - fVar9 * param_1[0xb];
    uStack_1a4 = 0x80000000;
    uStack_1a0 = 0x80000000;
    uStack_19c = 0x80000000;
    do {
      if (local_1b4 <= local_1c0) {
        local_1c4 = local_1c8 + 3.5;
        fVar2 = local_1c8 + 8.0;
        fVar13 = local_1b4;
        local_1bc = fVar2;
        do {
          fVar4 = fVar13 + 3.5;
          fVar9 = param_1[7];
          fVar8 = fVar9 * local_1c4 + param_1[6] * fVar4 + local_188;
          if (-5.656854 < fVar8) {
            fVar3 = param_1[9];
            fVar10 = fVar3 * local_1c4 + param_1[8] * fVar4 + local_198;
            if (-5.656854 < fVar10) {
              fVar6 = param_1[0xb];
              fVar4 = fVar6 * local_1c4 + fVar4 * param_1[10] + local_1a8;
              if (-5.656854 < fVar4) {
                local_1b8 = fVar13;
                if (((fVar8 < 5.656854) || (fVar10 < 5.656854)) || (fVar4 < 5.656854)) {
                  if (local_1c8 < fVar2) {
                    fVar8 = fVar6 * local_1c8 + param_1[10] * fVar13 + local_1a8;
                    fVar12 = fVar3 * local_1c8 + param_1[8] * fVar13 + local_198;
                    fVar10 = fVar9 * local_1c8 + param_1[6] * fVar13 + local_188;
                    fVar11 = fVar13 + 8.0;
                    fVar4 = local_1c8;
                    do {
                      if (fVar13 < fVar11) {
                        fVar2 = fVar12;
                        fVar9 = fVar10;
                        local_1ac = fVar8;
                        do {
                          if (((fVar9 < 0.70710677) || (fVar2 < 0.70710677)) || (fVar8 < 0.70710677)
                             ) {
                            if (((-0.70710677 <= fVar9) && (-0.70710677 <= fVar2)) &&
                               (-0.70710677 <= fVar8)) {
                              local_15c = param_1[5] - fVar4;
                              local_164 = param_1[3] - fVar4;
                              local_16c = param_1[1] - fVar4;
                              local_160 = param_1[4] - fVar13;
                              local_168 = param_1[2] - fVar13;
                              local_170 = *param_1 - fVar13;
                              local_e0 = 3;
                              local_d8 = 0.0;
                              local_f0 = &local_170;
                              local_e8 = local_130;
                              FUN_1482a8972(&local_170);
                              if (0.0 < local_d8) {
                                cVar1 = FUN_1482a753c(param_3,(int)fVar13,(int)fVar4);
                                goto joined_r0x0001482a8817;
                              }
                            }
                          }
                          else {
                            cVar1 = FUN_1482a753c(param_3,(int)fVar13,(int)fVar4);
joined_r0x0001482a8817:
                            if (cVar1 == '\0') goto LAB_1482a82f9;
                          }
                          fVar9 = fVar9 + param_1[6];
                          fVar2 = fVar2 + param_1[8];
                          fVar8 = fVar8 + param_1[10];
                          fVar13 = fVar13 + 1.0;
                        } while (fVar13 < fVar11);
                        fVar9 = param_1[7];
                        fVar3 = param_1[9];
                        fVar6 = param_1[0xb];
                        fVar2 = local_1bc;
                        fVar13 = local_1b8;
                        fVar8 = local_1ac;
                      }
                      fVar10 = fVar10 + fVar9;
                      fVar12 = fVar12 + fVar3;
                      fVar8 = fVar8 + fVar6;
                      fVar4 = fVar4 + 1.0;
                    } while (fVar4 < fVar2);
                  }
                }
                else if (local_1c8 < fVar2) {
                  fVar8 = fVar13 + 8.0;
                  fVar9 = local_1c8;
                  fVar4 = fVar13;
                  do {
                    fVar13 = fVar4;
                    if (fVar4 < fVar8) {
                      do {
                        cVar1 = FUN_1482a753c(param_3,(int)fVar4,(int)fVar9);
                        if (cVar1 == '\0') goto LAB_1482a82f9;
                        fVar4 = fVar4 + 1.0;
                        fVar13 = local_1b8;
                      } while (fVar4 < fVar8);
                    }
                    fVar9 = fVar9 + 1.0;
                    fVar2 = local_1bc;
                    fVar4 = fVar13;
                  } while (fVar9 < local_1bc);
                }
              }
            }
          }
          fVar13 = fVar13 + 8.0;
        } while (fVar13 <= local_1c0);
      }
      else {
        fVar2 = local_1c8 + 8.0;
      }
      local_1c8 = fVar2;
    } while (fVar2 <= local_1b0);
  }
LAB_1482a82f9:
  if ((local_d0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482a884a FUN_1482a884a body=295 status=ok
// SIG undefined FUN_1482a884a(void)

void FUN_1482a884a(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1] - param_1[3];
  fVar2 = *param_1 - param_1[2];
  fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  param_1[6] = fVar3 * -fVar1;
  param_1[7] = fVar2 * fVar3;
  fVar2 = param_1[3] - param_1[5];
  fVar1 = param_1[2] - param_1[4];
  fVar3 = 1.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  param_1[8] = fVar3 * -fVar2;
  param_1[9] = fVar1 * fVar3;
  fVar3 = param_1[5] - param_1[1];
  fVar2 = param_1[4] - *param_1;
  fVar1 = 1.0 / SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  param_1[10] = fVar1 * -fVar3;
  param_1[0xb] = fVar2 * fVar1;
  return;
}



// FUNCTION 1482a8972 FUN_1482a8972 body=126 status=ok
// SIG undefined FUN_1482a8972(void)

void FUN_1482a8972(undefined8 param_1)

{
  FUN_1482a89f0(param_1,0xbf000000,0xbf800000);
  FUN_1482a8b08(param_1,0xbf000000,0xbf800000);
  FUN_1482a89f0(param_1,0x3f000000,0x3f800000);
  FUN_1482a8b08(param_1,0x3f000000,0x3f800000);
  FUN_1482a8c22(param_1);
  return;
}



// FUNCTION 1482a89f0 FUN_1482a89f0 body=280 status=ok
// SIG undefined FUN_1482a89f0(void)

void FUN_1482a89f0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  float fVar14;
  
  pfVar6 = *(float **)(param_1 + 0x80 + (ulonglong)*(uint *)(param_1 + 0x94) * 8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x94) ^ 1;
  *(int *)(param_1 + 0x94) = (int)uVar10;
  lVar7 = *(longlong *)(param_1 + 0x80 + uVar10 * 8);
  *(undefined8 *)(pfVar6 + (ulonglong)*(uint *)(param_1 + 0x90) * 2) = *(undefined8 *)pfVar6;
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    fVar14 = param_2 - *pfVar6;
    bVar8 = 0.0 <= (param_2 - *pfVar6) * param_3;
    do {
      fVar1 = pfVar6[uVar11 * 2 + 2];
      bVar9 = 0.0 <= (param_2 - fVar1) * param_3;
      uVar13 = uVar10;
      if (bVar8 != false) {
        uVar13 = (ulonglong)((int)uVar10 + 1);
        *(undefined8 *)(lVar7 + uVar10 * 8) = *(undefined8 *)(pfVar6 + uVar11 * 2);
      }
      uVar10 = uVar13;
      if ((char)(bVar8 + bVar9) == '\x01') {
        fVar2 = pfVar6[uVar11 * 2 + 1];
        fVar3 = pfVar6[uVar11 * 2 + 2];
        fVar4 = pfVar6[uVar11 * 2];
        fVar5 = pfVar6[uVar11 * 2 + 3];
        uVar10 = (ulonglong)((int)uVar13 + 1);
        *(float *)(lVar7 + uVar13 * 8) = param_2;
        *(float *)(lVar7 + 4 + uVar13 * 8) = fVar14 * ((fVar5 - fVar2) / (fVar3 - fVar4)) + fVar2;
      }
      uVar12 = (undefined4)uVar10;
      uVar11 = uVar11 + 1;
      fVar14 = param_2 - fVar1;
      bVar8 = bVar9;
    } while (uVar11 < *(uint *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0x90) = uVar12;
  return;
}



// FUNCTION 1482a8b08 FUN_1482a8b08 body=281 status=ok
// SIG undefined FUN_1482a8b08(void)

void FUN_1482a8b08(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = *(undefined8 **)(param_1 + 0x80 + (ulonglong)*(uint *)(param_1 + 0x94) * 8);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x94) ^ 1;
  *(int *)(param_1 + 0x94) = (int)uVar5;
  lVar2 = *(longlong *)(param_1 + 0x80 + uVar5 * 8);
  puVar1[*(uint *)(param_1 + 0x90)] = *puVar1;
  if (*(int *)(param_1 + 0x90) == 0) {
    uVar7 = 0;
  }
  else {
    fVar9 = param_2 - *(float *)((longlong)puVar1 + 4);
    uVar6 = 0;
    uVar5 = 0;
    bVar3 = 0.0 <= fVar9 * param_3;
    do {
      fVar10 = param_2 - *(float *)((longlong)puVar1 + uVar6 * 8 + 0xc);
      bVar4 = 0.0 <= fVar10 * param_3;
      uVar8 = uVar5;
      if (bVar3 != false) {
        uVar8 = (ulonglong)((int)uVar5 + 1);
        *(undefined8 *)(lVar2 + uVar5 * 8) = puVar1[uVar6];
      }
      uVar5 = uVar8;
      if ((char)(bVar3 + bVar4) == '\x01') {
        uVar5 = (ulonglong)((int)uVar8 + 1);
        *(float *)(lVar2 + uVar8 * 8) =
             fVar9 * ((*(float *)(puVar1 + uVar6 + 1) - *(float *)(puVar1 + uVar6)) /
                     (*(float *)((longlong)puVar1 + uVar6 * 8 + 0xc) -
                     *(float *)((longlong)puVar1 + uVar6 * 8 + 4))) + *(float *)(puVar1 + uVar6);
        *(float *)(lVar2 + 4 + uVar8 * 8) = param_2;
      }
      uVar7 = (undefined4)uVar5;
      uVar6 = uVar6 + 1;
      fVar9 = fVar10;
      bVar3 = bVar4;
    } while (uVar6 < *(uint *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  return;
}



// FUNCTION 1482a8c22 FUN_1482a8c22 body=133 status=ok
// SIG undefined FUN_1482a8c22(void)

void FUN_1482a8c22(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x80 + (ulonglong)*(uint *)(param_1 + 0x94) * 8);
  puVar4[*(uint *)(param_1 + 0x90)] = *puVar4;
  *(undefined4 *)(param_1 + 0x98) = 0;
  fVar7 = 0.0;
  if ((ulonglong)*(uint *)(param_1 + 0x90) != 0) {
    uVar6 = 0;
    do {
      pfVar1 = (float *)(puVar4 + uVar6);
      lVar2 = uVar6 * 8;
      lVar5 = uVar6 + 1;
      lVar3 = uVar6 * 8;
      uVar6 = uVar6 + 1;
      fVar7 = fVar7 + (*pfVar1 * *(float *)((longlong)puVar4 + lVar3 + 0xc) -
                      *(float *)((longlong)puVar4 + lVar2 + 4) * *(float *)(puVar4 + lVar5));
      *(float *)(param_1 + 0x98) = fVar7;
    } while (*(uint *)(param_1 + 0x90) != uVar6);
  }
  *(float *)(param_1 + 0x98) = ABS(fVar7) * 0.5;
  return;
}



// FUNCTION 1482a8ca8 FUN_1482a8ca8 body=519 status=ok
// SIG undefined FUN_1482a8ca8(void)

char FUN_1482a8ca8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  local_58 = param_3;
  local_50 = param_2;
  if (uVar11 < 0x15) {
    if (uVar11 != 0) {
LAB_1482a8ceb:
      lVar3 = *param_1;
      lVar8 = param_1[6];
      lVar12 = 0;
      do {
        uVar1 = *(uint *)(lVar3 + lVar12 * 4);
        uVar5 = (ulonglong)uVar1;
        iVar9 = uVar1 % 3 + 1;
        iVar13 = 0;
        if (iVar9 != 3) {
          iVar13 = iVar9;
        }
        uVar7 = (ulonglong)((uVar1 / 3) * 3 + iVar13);
        if ((int)lVar8 == 0) {
          lVar10 = param_1[3];
          local_60 = *(undefined8 *)(lVar10 + uVar7 * 8);
        }
        else {
          lVar10 = param_1[3];
          local_60 = *(undefined8 *)(lVar10 + (ulonglong)*(uint *)(param_1[5] + uVar7 * 4) * 8);
          uVar5 = (ulonglong)*(uint *)(param_1[5] + uVar5 * 4);
        }
        local_68 = *(undefined8 *)(lVar10 + uVar5 * 8);
        local_78 = 0;
        cVar4 = FUN_143afd8af(&local_50,&local_58,&local_68,&local_60);
      } while ((cVar4 == '\0') && (bVar14 = uVar11 - 1 != lVar12, lVar12 = lVar12 + 1, bVar14));
      goto LAB_1482a8e84;
    }
  }
  else {
    if ((*(int *)((longlong)param_1 + 0x5c) == 0) && (cVar4 = FUN_1482a0546(param_1), cVar4 == '\0')
       ) goto LAB_1482a8ceb;
    FUN_1482a084e(param_1,param_2,param_3);
    uVar1 = *(uint *)((longlong)param_1 + 0x8c);
    if ((ulonglong)uVar1 != 0) {
      lVar3 = param_1[0x10];
      uVar6 = 0xffffffff;
      uVar11 = 0;
      do {
        uVar2 = *(uint *)(lVar3 + uVar11 * 4);
        if (uVar2 != uVar6) {
          iVar9 = uVar2 % 3 + 1;
          iVar13 = 0;
          if (iVar9 != 3) {
            iVar13 = iVar9;
          }
          uVar5 = (ulonglong)((uVar2 / 3) * 3 + iVar13);
          if ((int)param_1[6] == 0) {
            lVar8 = param_1[3];
            local_60 = *(undefined8 *)(lVar8 + uVar5 * 8);
            uVar6 = uVar2;
          }
          else {
            lVar8 = param_1[3];
            local_60 = *(undefined8 *)(lVar8 + (ulonglong)*(uint *)(param_1[5] + uVar5 * 4) * 8);
            uVar6 = *(uint *)(param_1[5] + (ulonglong)uVar2 * 4);
          }
          local_68 = *(undefined8 *)(lVar8 + (ulonglong)uVar6 * 8);
          local_78 = 0;
          cVar4 = FUN_143afd8af(&local_50,&local_58,&local_68,&local_60);
          uVar6 = uVar2;
          if (cVar4 != '\0') {
            cVar4 = '\x01';
            break;
          }
        }
        uVar11 = uVar11 + 1;
        cVar4 = '\0';
      } while (uVar1 != uVar11);
      goto LAB_1482a8e84;
    }
  }
  cVar4 = '\0';
LAB_1482a8e84:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar4;
}



// FUNCTION 1482a8eb0 FUN_1482a8eb0 body=595 status=ok
// SIG undefined FUN_1482a8eb0(void)

byte FUN_1482a8eb0(longlong param_1,int *param_2,undefined8 param_3,int *param_4,int *param_5,
                  int param_6,int param_7,int *param_8,int *param_9,int *param_10,int *param_11,
                  undefined4 *param_12,int param_13)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_98;
  undefined4 local_94;
  
  bVar9 = *(byte *)(param_1 + 0x11);
  iVar3 = (uint)bVar9 * 3 + 1;
  uVar14 = (uint)bVar9 + (uint)bVar9 * 2;
  bVar5 = false;
  local_98 = 0x7fffffff;
  local_94 = 0;
  bVar2 = true;
  do {
    bVar12 = bVar2;
    iVar1 = param_4[1];
    iVar11 = *param_4;
    if ((bVar5) && (iVar11 = iVar1, iVar1 = *param_4, *(char *)(param_1 + 0x15) != '\x01')) {
      bVar9 = 0;
      break;
    }
    iVar17 = param_2[1];
    if (iVar17 <= (int)(param_7 + 1 + uVar14)) {
      piVar8 = param_4;
      if (bVar5) {
        piVar8 = param_5;
      }
      do {
        if ((param_13 != 0) && (param_13 - iVar1 < iVar17)) break;
        iVar15 = 0;
        if (iVar17 == param_2[1]) {
          iVar15 = *param_2;
        }
        if (iVar15 <= (int)(param_6 + uVar14 + 1)) {
          iVar13 = iVar17 + iVar1;
          if (iVar17 + iVar1 < param_7) {
            iVar13 = param_7;
          }
          do {
            if ((param_13 != 0) && (param_13 - iVar11 < iVar15)) break;
            iVar4 = iVar11 + iVar15;
            if (iVar11 + iVar15 < param_6) {
              iVar4 = param_6;
            }
            iVar16 = iVar4;
            if (iVar4 <= iVar13) {
              iVar16 = iVar13;
            }
            iVar16 = iVar16 * iVar16 + iVar4 * iVar13;
            if (iVar16 <= local_98) {
              if (iVar16 == local_98) {
                iVar7 = iVar17;
                if (iVar17 < iVar15) {
                  iVar7 = iVar15;
                }
                iVar10 = *param_9;
                if (*param_9 < *param_8) {
                  iVar10 = *param_8;
                }
                if (iVar10 <= iVar7) goto LAB_1482a9023;
              }
              cVar6 = FUN_1482a93ba(param_3,piVar8,iVar15,iVar17);
              if (cVar6 != '\0') {
                *param_8 = iVar15;
                *param_9 = iVar17;
                *param_10 = iVar11;
                *param_11 = iVar1;
                *param_12 = local_94;
                local_98 = iVar16;
                if (iVar4 * iVar13 == param_7 * param_6) {
                  bVar9 = 1;
                  goto LAB_1482a90e1;
                }
              }
            }
LAB_1482a9023:
            iVar15 = iVar15 + iVar3;
          } while ((int)(~uVar14 + iVar15) <= param_6);
        }
        bVar2 = iVar17 <= param_7;
        iVar17 = iVar17 + iVar3;
      } while (bVar2);
    }
    local_94 = 1;
    bVar5 = true;
    bVar9 = 0;
    bVar2 = false;
  } while (bVar12);
LAB_1482a90e1:
  return local_98 != 0x7fffffff | bVar9;
}


