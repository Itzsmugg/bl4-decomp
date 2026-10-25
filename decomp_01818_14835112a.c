// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14835112a FUN_14835112a body=62 status=ok
// SIG undefined FUN_14835112a(void)

void FUN_14835112a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148351168(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 148351168 FUN_148351168 body=112 status=ok
// SIG undefined FUN_148351168(void)

ulonglong FUN_148351168(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483511a2;
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
LAB_1483511a2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483511d8 FUN_1483511d8 body=56 status=ok
// SIG undefined FUN_1483511d8(void)

void FUN_1483511d8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14c8464e8;
  uVar2 = DAT_14c8464e0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c8464e0 = uVar2;
    DAT_14c8464e8 = uVar1;
    param_1[2] = DAT_14c8464f0;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    uVar1 = DAT_14c8463a8;
    param_1[3] = DAT_14c8463a0;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c8463b0;
    param_1 = param_1 + 6;
    uVar1 = DAT_14c8464e8;
    uVar2 = DAT_14c8464e0;
  }
  DAT_14c8464e0 = uVar2;
  DAT_14c8464e8 = uVar1;
  return;
}



// FUNCTION 148351210 FUN_148351210 body=62 status=ok
// SIG undefined FUN_148351210(void)

void FUN_148351210(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14835124e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14835124e FUN_14835124e body=112 status=ok
// SIG undefined FUN_14835124e(void)

ulonglong FUN_14835124e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148351288;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148351288:
  return param_2 & 0xffffffff;
}



// FUNCTION 1483512be FUN_1483512be body=56 status=ok
// SIG undefined FUN_1483512be(void)

void FUN_1483512be(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1483512f6 FUN_1483512f6 body=101 status=ok
// SIG undefined FUN_1483512f6(void)

void FUN_1483512f6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_148307c36(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14835135c FUN_14835135c body=62 status=ok
// SIG undefined FUN_14835135c(void)

void FUN_14835135c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14835139a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14835139a FUN_14835139a body=112 status=ok
// SIG undefined FUN_14835139a(void)

ulonglong FUN_14835139a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483513d4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_1483513d4:
  return param_2 & 0xffffffff;
}



// FUNCTION 14835140a FUN_14835140a body=127 status=ok
// SIG undefined FUN_14835140a(void)

void FUN_14835140a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x54)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x54) = iVar5;
    FUN_14835148a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14835148a FUN_14835148a body=140 status=ok
// SIG undefined FUN_14835148a(void)

void FUN_14835148a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x48);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x48,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x48),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x48,param_2,param_3,0x18);
  return;
}



// FUNCTION 148351516 FUN_148351516 body=57 status=ok
// SIG undefined FUN_148351516(void)

undefined8 * FUN_148351516(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae73bb0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148351550 FUN_148351550 body=249 status=ok
// SIG undefined FUN_148351550(void)

undefined4 FUN_148351550(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x4000000000000000;
  local_38 = 2;
  local_a0 = param_3;
  if ((int)param_1[5] == 0) {
    FUN_148352a7a(&local_a0,1);
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,&local_a0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1483525da(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835164a FUN_14835164a body=71 status=ok
// SIG undefined FUN_14835164a(void)

void FUN_14835164a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148351692 FUN_148351692 body=150 status=ok
// SIG undefined FUN_148351692(void)

void FUN_148351692(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_10;
  local_48 = &local_18;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_30 = 1;
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = 0;
  local_18 = param_3;
  local_10 = param_4;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835172a FUN_14835172a body=3105 status=ok
// SIG undefined FUN_14835172a(void)

uint FUN_14835172a(longlong *param_1,code **param_2,code **param_3,code **param_4,longlong *param_5,
                  char param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code **ppcVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  code *pcVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  code **ppcVar19;
  longlong lVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_318 [40];
  undefined4 local_2f0;
  code **local_2e8;
  code **local_2d8;
  code **local_2d0;
  longlong *local_2c8;
  code **ppcStack_2c0;
  code **local_2b8;
  code **local_2b0;
  code **local_2a8;
  code **local_2a0;
  code **local_298;
  code **local_290;
  code **local_288;
  code *local_278;
  undefined8 uStack_270;
  code *local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  undefined8 local_244;
  undefined4 local_23c;
  ulonglong *local_238;
  undefined8 uStack_230;
  code *local_228;
  ulonglong uStack_220;
  undefined8 uStack_218;
  code *local_208;
  longlong **pplStack_200;
  code *local_1f8;
  undefined8 local_1f0;
  code *local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8 [2];
  undefined ***local_198;
  undefined **local_188;
  longlong *local_180;
  ulonglong **local_178;
  undefined4 *local_170;
  code *local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  longlong *local_140;
  ulonglong **local_138;
  undefined4 *local_130;
  code *local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  longlong *local_100;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  longlong *local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  cVar7 = (**(code **)(*param_1 + 0x58))();
  if (cVar7 == '\0') {
    local_238 = (ulonglong *)0x0;
    uStack_230 = 0;
    local_23c = 0;
    local_244 = 0x20657300206573;
    local_2d8 = param_2;
    local_2d0 = param_4;
    if ((int)param_1[5] == 1) {
      local_2b8 = (code **)DAT_14c8463b0;
      local_2c8 = DAT_14c8463a0;
      ppcStack_2c0 = (code **)DAT_14c8463a8;
      uStack_230._0_4_ = 1;
      uStack_230._4_4_ = 0;
      FUN_1403e3958(&local_238,0);
      iVar15 = (uint)uStack_230;
      local_238[2] = (ulonglong)local_2b8;
      *local_238 = (ulonglong)local_2c8;
      local_238[1] = (ulonglong)ppcStack_2c0;
      uVar2 = DAT_14c8463b0 ^ 0x8000000000000000;
      uVar3 = DAT_14c8463a8 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c8463a0 ^ 0x8000000000000000;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,iVar15);
      }
      uVar8 = (uint)uStack_230;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      local_2b8 = (code **)DAT_14c846398;
      local_2c8 = DAT_14c846388;
      ppcStack_2c0 = (code **)DAT_14c846390;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      uVar9 = (uint)uStack_230;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar8);
        uVar9 = (uint)uStack_230;
      }
      local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
      local_238[lVar17 * 3] = (ulonglong)local_2c8;
      (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
      uVar2 = DAT_14c846398 ^ 0x8000000000000000;
      uVar3 = DAT_14c846390 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c846388 ^ 0x8000000000000000;
      uStack_230._0_4_ = uVar9 + 1;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar9);
      }
      uVar8 = (uint)uStack_230;
      lVar17 = (longlong)(int)uVar9;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      local_2b8 = DAT_14c8463c8;
      local_2c8 = DAT_14c8463b8;
      ppcStack_2c0 = DAT_14c8463c0;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      uVar9 = (uint)uStack_230;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar8);
        uVar9 = (uint)uStack_230;
      }
      local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
      local_238[lVar17 * 3] = (ulonglong)local_2c8;
      (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
      uVar2 = (ulonglong)DAT_14c8463c8 ^ 0x8000000000000000;
      uVar3 = (ulonglong)DAT_14c8463c0 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c8463b8 ^ 0x8000000000000000;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar9 + 1);
      if (uStack_230._4_4_ < uVar9 + 1) {
        FUN_1403e3958(&local_238,uVar9);
      }
      lVar17 = (longlong)(int)uVar9;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      if (0 < *(int *)((longlong)param_1 + 0x2c)) {
        iVar15 = 0;
        do {
          FUN_1477ee866(&local_244,&local_2c8);
          uVar2 = uStack_230;
          lVar17 = (longlong)(int)(uint)uStack_230;
          uVar8 = (uint)uStack_230 + 1;
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
          if (uStack_230._4_4_ < uVar8) {
            FUN_1403e3958(&local_238,uVar2 & 0xffffffff);
          }
          local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
          local_238[lVar17 * 3] = (ulonglong)local_2c8;
          (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)((longlong)param_1 + 0x2c));
      }
      local_23c = (uint)uStack_230;
    }
    local_258 = (code *)0x0;
    uStack_250 = 0;
    if (0 < (int)param_1[6]) {
      uVar8 = 0x1e549;
      iVar15 = 0;
      do {
        uVar2 = uStack_250;
        lVar17 = (longlong)(int)uStack_250;
        uVar9 = (int)uStack_250 + 1;
        uStack_250 = CONCAT44(uStack_250._4_4_,uVar9);
        if (uStack_250._4_4_ < uVar9) {
          FUN_1403e3958(&local_258,uVar2 & 0xffffffff);
        }
        dVar22 = (double)((float)(uVar8 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0) * 0.999
                 + 0.001;
        dVar23 = (double)((float)(uVar8 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0) *
                 0.999 + 0.001;
        uVar8 = uVar8 * 0x1c3c718d + 0xf50d3da5;
        dVar24 = (double)((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * 0.999 + 0.001;
        dVar25 = 1.0 / (dVar23 + dVar24 + dVar22);
        *(double *)(local_258 + lVar17 * 0x18) = dVar24 * dVar25;
        *(double *)(local_258 + lVar17 * 0x18 + 8) = dVar23 * dVar25;
        *(double *)(local_258 + lVar17 * 0x18 + 0x10) = dVar25 * dVar22;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_1[6]);
    }
    uVar2 = uStack_250;
    if ((*(uint *)(param_1 + 2) & 0xfffffffd) == 0) {
      lVar17 = (longlong)(int)uStack_250;
      uVar8 = (int)uStack_250 + 1;
      uStack_250 = CONCAT44(uStack_250._4_4_,uVar8);
      if (uStack_250._4_4_ < uVar8) {
        FUN_1403e3958(&local_258,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_258 + lVar17 * 0x18) = 0x3fd5555555555555;
      *(undefined8 *)(local_258 + lVar17 * 0x18 + 8) = 0x3fd5555555555555;
      *(undefined8 *)(local_258 + lVar17 * 0x18 + 0x10) = 0x3fd5555555555555;
    }
    local_d8 = (undefined ***)0x0;
    local_c8 = &PTR_LAB_14ae73c10;
    local_c0 = param_1;
    pcVar14 = FUN_1483526da;
    local_e8[0] = FUN_1483526da;
    local_118 = (undefined ***)0x0;
    local_108 = &PTR_FUN_14ae73c30;
    local_100 = param_1;
    local_128[0] = FUN_148356634;
    local_158 = (undefined ***)0x0;
    local_148 = &PTR_LAB_14ae73c50;
    local_140 = param_1;
    local_138 = &local_238;
    local_130 = &local_23c;
    local_198 = (undefined ***)0x0;
    bVar21 = param_6 != '\0';
    ppcVar19 = local_168;
    ppcVar5 = local_e8;
    if (bVar21) {
      pcVar14 = FUN_148356634;
      ppcVar19 = local_1a8;
      ppcVar5 = local_128;
    }
    local_188 = &PTR_FUN_14ae73c70;
    local_1e8[0] = FUN_1483567e6;
    local_168[0] = FUN_1483567e6;
    local_180 = param_1;
    local_178 = &local_238;
    if (bVar21) {
      local_1e8[0] = FUN_148356aea;
    }
    local_170 = &local_23c;
    pppuVar13 = &local_c8;
    if (bVar21) {
      pppuVar13 = &local_108;
    }
    local_1a8[0] = FUN_148356aea;
    pppuVar10 = &local_148;
    if (bVar21) {
      pppuVar10 = &local_188;
    }
    bVar21 = (int)param_1[5] == 0;
    if (bVar21) {
      ppcVar19 = ppcVar5;
      local_1e8[0] = pcVar14;
    }
    local_1d8 = (longlong *)0x0;
    if (bVar21) {
      pppuVar10 = pppuVar13;
    }
    (**(code **)ppcVar19[4])(pppuVar10);
    iVar15 = *(int *)(param_3 + 1);
    local_268 = (code *)0x0;
    uStack_260 = 0;
    if (iVar15 == (int)param_5[1]) {
      if (0 < iVar15) {
        lVar17 = 0;
        lVar20 = 0;
        do {
          uVar2 = uStack_260;
          lVar1 = *param_5;
          lVar18 = (longlong)(int)uStack_260;
          uVar8 = (int)uStack_260 + 1;
          uStack_260 = CONCAT44(uStack_260._4_4_,uVar8);
          if (uStack_260._4_4_ < uVar8) {
            FUN_148356e0c(&local_268,uVar2 & 0xffffffff);
          }
          lVar18 = lVar18 * 0x88;
          puVar16 = (undefined8 *)(lVar1 + lVar17);
          pcVar14 = local_268 + lVar18;
          for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *(undefined8 *)pcVar14 = *puVar16;
            puVar16 = puVar16 + 1;
            pcVar14 = pcVar14 + 8;
          }
          *(undefined8 *)(local_268 + lVar18 + 0x50) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x50 + 8) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x60) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x68) = 0x3ff0000000000000;
          FUN_148356ea4(local_268 + lVar18);
          lVar20 = lVar20 + 1;
          lVar17 = lVar17 + 0x50;
        } while (lVar20 < *(int *)(param_3 + 1));
      }
    }
    else if (0 < iVar15) {
      iVar15 = 0;
      do {
        uVar2 = uStack_260;
        lVar17 = (longlong)(int)uStack_260;
        uVar8 = (int)uStack_260 + 1;
        uStack_260 = CONCAT44(uStack_260._4_4_,uVar8);
        if (uStack_260._4_4_ < uVar8) {
          FUN_148356e0c(&local_268,uVar2 & 0xffffffff);
        }
        ppcVar19 = DAT_14c846520;
        ppcVar5 = DAT_14c846518;
        plVar12 = DAT_14c846510;
        uVar6 = DAT_14c8464f0;
        uVar2 = DAT_14c8464e8;
        pcVar14 = DAT_14c8464e0;
        lVar17 = lVar17 * 0x88;
        local_2b8 = DAT_14c846520;
        local_2c8 = DAT_14c846510;
        ppcStack_2c0 = DAT_14c846518;
        uStack_218 = DAT_14c8464f0;
        local_228 = DAT_14c8464e0;
        uStack_220 = DAT_14c8464e8;
        *(undefined8 *)(local_268 + lVar17 + 0x10) = 0;
        *(undefined8 *)(local_268 + lVar17) = 0;
        *(undefined8 *)(local_268 + lVar17 + 8) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x18) = 0x3ff0000000000000;
        *(code **)(local_268 + lVar17 + 0x20) = pcVar14;
        *(ulonglong *)(local_268 + lVar17 + 0x20 + 8) = uVar2;
        *(undefined8 *)(local_268 + lVar17 + 0x30) = uVar6;
        *(longlong **)(local_268 + lVar17 + 0x38) = plVar12;
        *(code ***)(local_268 + lVar17 + 0x38 + 8) = ppcVar5;
        *(code ***)(local_268 + lVar17 + 0x48) = ppcVar19;
        *(undefined8 *)(local_268 + lVar17 + 0x60) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x50) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x50 + 8) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x68) = 0x3ff0000000000000;
        *(code ***)(local_268 + lVar17 + 0x80) = DAT_14c846520;
        ppcVar5 = DAT_14c846518;
        *(longlong **)(local_268 + lVar17 + 0x70) = DAT_14c846510;
        *(code ***)(local_268 + lVar17 + 0x70 + 8) = ppcVar5;
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_3 + 1));
    }
    local_278 = (code *)0x0;
    uStack_270 = 0;
    if ((int)param_1[2] - 1U < 2) {
      local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffffffffff00);
      FUN_14475e60e(&local_278,&local_2c8,
                    *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24));
      local_228 = (code *)param_1[1];
      uStack_220 = 0;
      uStack_218 = 0;
      FUN_146c37e28(&local_228,1,1);
      local_2b0 = local_1e8;
      local_2a8 = local_2d8;
      local_298 = local_2d0;
      local_290 = &local_268;
      local_2e8 = &local_1f8;
      local_1f8 = (code *)0x0;
      local_1f0 = (longlong **)((ulonglong)local_1f0._4_4_ << 0x20);
      local_208 = (code *)&LAB_148357006;
      local_2f0 = 0;
      local_2c8 = param_1;
      ppcStack_2c0 = &local_228;
      local_2b8 = &local_278;
      local_2a0 = param_3;
      pplStack_200 = &local_2c8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1);
      if (uStack_220 != 0) {
        FUN_1400020a8();
      }
    }
    cVar7 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar8 = 0;
    if (cVar7 == '\0') {
      local_208 = (code *)0x0;
      pplStack_200 = (longlong **)0x0;
      local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffff00000000);
      FUN_148352668(&local_208,&local_2c8,
                    *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144));
      ppcStack_2c0 = &local_278;
      local_2b8 = local_1e8;
      local_2b0 = local_2d8;
      local_2a8 = &local_258;
      local_290 = local_2d0;
      local_288 = &local_268;
      local_2e8 = &local_228;
      local_228 = (code *)0x0;
      uStack_220 = uStack_220 & 0xffffffff00000000;
      local_1f8 = (code *)&LAB_148357394;
      local_2f0 = 0;
      local_2c8 = param_1;
      local_2a0 = &local_208;
      local_298 = param_3;
      local_1f0 = &local_2c8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
      uVar8 = (**(code **)(*param_1 + 0x58))(param_1);
      if ((char)uVar8 == '\0') {
        plVar12 = param_1 + 8;
        *(undefined4 *)(param_1 + 9) = 0;
        if (*(int *)((longlong)param_1 + 0x4c) < 0) {
          FUN_14481578e(plVar12,0);
        }
        if (0 < *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144)) {
          lVar17 = 0;
          do {
            if (*(int *)(local_208 + lVar17 * 4) != 0) {
              iVar15 = (int)param_1[9];
              *(uint *)(param_1 + 9) = iVar15 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar15 + 1U) {
                FUN_1446f48e2(plVar12,iVar15);
              }
              *(int *)(*plVar12 + (longlong)iVar15 * 4) = (int)lVar17;
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144));
        }
      }
      if (local_208 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 ^ 1;
    }
    if (local_278 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_268 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_1e8[0] != (code *)0x0) {
      plVar12 = local_1d8;
      if (local_1d8 == (longlong *)0x0) {
        plVar12 = local_1c8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_1a8[0] != (code *)0x0) {
      pppuVar13 = &local_188;
      if (local_198 != (undefined ***)0x0) {
        pppuVar13 = local_198;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_168[0] != (code *)0x0) {
      pppuVar13 = &local_148;
      if (local_158 != (undefined ***)0x0) {
        pppuVar13 = local_158;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_128[0] != (code *)0x0) {
      pppuVar13 = &local_108;
      if (local_118 != (undefined ***)0x0) {
        pppuVar13 = local_118;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar13 = &local_c8;
      if (local_d8 != (undefined ***)0x0) {
        pppuVar13 = local_d8;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_258 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_238 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar8 = 0;
  }
  if ((local_a0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14835234c FUN_14835234c body=103 status=ok
// SIG undefined FUN_14835234c(void)

ulonglong FUN_14835234c(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(int *)(param_1 + 0x48) < 1) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    local_20 = *(undefined8 *)(param_1 + 8);
    uVar2 = CONCAT71(uVar3,1);
    cVar1 = FUN_146bc603c(&local_20,param_1 + 0x40,1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 1;
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483523b4 FUN_1483523b4 body=249 status=ok
// SIG undefined FUN_1483523b4(void)

undefined4 FUN_1483523b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x4000000000000000;
  local_38 = 2;
  local_a0 = param_3;
  if ((int)param_1[5] == 0) {
    FUN_148352a7a(&local_a0,1);
  }
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,&local_a0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1483525da(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483524ae FUN_1483524ae body=71 status=ok
// SIG undefined FUN_1483524ae(void)

void FUN_1483524ae(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483524f6 FUN_1483524f6 body=150 status=ok
// SIG undefined FUN_1483524f6(void)

void FUN_1483524f6(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_10;
  local_48 = &local_18;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_30 = 1;
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = 0;
  local_18 = param_3;
  local_10 = param_4;
  (**(code **)(*param_1 + 0x48))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148352592 FUN_148352592 body=71 status=ok
// SIG undefined FUN_148352592(void)

char FUN_148352592(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x38);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 1483525da FUN_1483525da body=52 status=ok
// SIG undefined FUN_1483525da(void)

void FUN_1483525da(longlong *param_1)

{
  FUN_14835260e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14835260e FUN_14835260e body=89 status=ok
// SIG undefined FUN_14835260e(void)

void FUN_14835260e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
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



// FUNCTION 148352668 FUN_148352668 body=112 status=ok
// SIG undefined FUN_148352668(void)

void FUN_148352668(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1483572ae(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14835730e(param_1,iVar1);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *param_2;
  }
  return;
}



// FUNCTION 1483526da FUN_1483526da body=84 status=ok
// SIG undefined FUN_1483526da(void)

void FUN_1483526da(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = param_6;
  uStack_20 = param_7;
  FUN_148352778(param_6,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835274e FUN_14835274e body=12 status=ok
// SIG undefined FUN_14835274e(void)

void FUN_14835274e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148352757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14835275a FUN_14835275a body=29 status=ok
// SIG undefined FUN_14835275a(void)

undefined8 FUN_14835275a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148352778 FUN_148352778 body=284 status=ok
// SIG undefined FUN_148352778(void)

bool FUN_148352778(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 < 1) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = 0.0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar2 = *param_6;
      cVar6 = FUN_148352896(lVar2 + lVar7,param_5);
      if (cVar6 == '\0') {
        FUN_1483528fe(lVar2 + lVar7,&local_98,param_3);
      }
      else {
        local_88 = *(undefined8 *)(param_4 + 4);
        local_98 = *param_4;
        uStack_94 = param_4[1];
        uStack_90 = param_4[2];
        uStack_8c = param_4[3];
      }
      plVar3 = *(longlong **)(*param_2 + lVar8 * 8);
      FUN_148352a7a(plVar3,0);
      local_68 = local_88;
      local_78 = local_98;
      uStack_74 = uStack_94;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      FUN_148352ada(plVar3,*(undefined4 *)(*plVar3 + 0xcc),&local_78);
      dVar4 = dVar4 + (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x88;
    } while ((int)lVar5 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return *(double *)(lVar1 + 0x20) <= dVar4 && dVar4 != *(double *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148352896 FUN_148352896 body=104 status=ok
// SIG undefined FUN_148352896(void)

undefined8 FUN_148352896(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((((*(double *)(param_2 + 0x20) == *(double *)(param_1 + 0x20)) &&
         (!NAN(*(double *)(param_2 + 0x20)) && !NAN(*(double *)(param_1 + 0x20)))) &&
        (*(double *)(param_2 + 0x28) == *(double *)(param_1 + 0x28))) &&
       ((!NAN(*(double *)(param_2 + 0x28)) && !NAN(*(double *)(param_1 + 0x28)) &&
        (*(double *)(param_2 + 0x30) == *(double *)(param_1 + 0x30))))) &&
      ((!NAN(*(double *)(param_2 + 0x30)) && !NAN(*(double *)(param_1 + 0x30)) &&
       ((*(double *)(param_2 + 0x38) == *(double *)(param_1 + 0x38) &&
        (!NAN(*(double *)(param_2 + 0x38)) && !NAN(*(double *)(param_1 + 0x38)))))))) &&
     ((*(double *)(param_2 + 0x40) == *(double *)(param_1 + 0x40) &&
      (!NAN(*(double *)(param_2 + 0x40)) && !NAN(*(double *)(param_1 + 0x40)))))) {
    if ((*(double *)(param_2 + 0x48) == *(double *)(param_1 + 0x48)) &&
       (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*(double *)(param_1 + 0x48)))) {
      uVar1 = FUN_1483529b2(param_2,param_1,0);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1483528fe FUN_1483528fe body=178 status=ok
// SIG undefined FUN_1483528fe(void)

double * FUN_1483528fe(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_3[2] - *(double *)(param_1 + 0x30);
  local_48 = param_3[1] - *(double *)(param_1 + 0x28);
  local_50 = *param_3 - *(double *)(param_1 + 0x20);
  FUN_146bed047(&local_38,param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x80);
  dVar2 = *(double *)(param_1 + 0x78);
  *param_2 = *(double *)(param_1 + 0x70) * local_38;
  param_2[1] = dVar2 * local_30;
  param_2[2] = dVar1 * local_28;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483529b2 FUN_1483529b2 body=200 status=ok
// SIG undefined FUN_1483529b2(void)

bool FUN_1483529b2(double *param_1,double *param_2,double param_3)

{
  bool bVar1;
  
  if ((((param_3 < ABS(*param_1 - *param_2)) || (param_3 < ABS(param_1[1] - param_2[1]))) ||
      (param_3 < ABS(param_1[2] - param_2[2]))) ||
     (bVar1 = true, param_3 < ABS(param_1[3] - param_2[3]))) {
    if (((param_3 < ABS(*param_1 + *param_2)) || (param_3 < ABS(param_1[1] + param_2[1]))) ||
       (param_3 < ABS(param_1[2] + param_2[2]))) {
      bVar1 = false;
    }
    else {
      bVar1 = ABS(param_1[3] + param_2[3]) <= param_3;
    }
  }
  return bVar1;
}



// FUNCTION 148352a7a FUN_148352a7a body=95 status=ok
// SIG undefined FUN_148352a7a(void)

void FUN_148352a7a(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0xcc) < 0) || (*(longlong *)(lVar1 + 0x10) != 1)) {
    FUN_148352f04(lVar1);
    *(undefined8 *)(lVar1 + 0x10) = 1;
  }
  if ((param_2 != '\0') || (param_1[0xb] != *(longlong *)(*param_1 + 0x10))) {
    FUN_148352e44(param_1);
    param_1[0xb] = *(longlong *)(*param_1 + 0x10);
  }
  return;
}



// FUNCTION 148352ada FUN_148352ada body=872 status=ok
// SIG undefined FUN_148352ada(void)

double FUN_148352ada(longlong *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *param_1;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4);
  if ((int)uVar15 < *(int *)(lVar3 + 200)) {
    if ((int)uVar10 < 1) {
      dVar17 = 0.0;
    }
    else {
      dVar17 = 0.0;
      do {
        uVar15 = uVar15 + 1;
        plVar4 = *(longlong **)(*param_1 + 8);
        lVar3 = *plVar4;
        uVar2 = *(uint *)(*(longlong *)plVar4[1] +
                         (longlong)
                         *(int *)(*(longlong *)
                                   (*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                                 (ulonglong)(uVar15 & 0x1ff) * 4) * 4);
        lVar5 = *(longlong *)(lVar3 + 0x10);
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
        uVar13 = (ulonglong)uVar2 & 0x1ff;
        uVar2 = *(uint *)(lVar3 + uVar13 * 0xc);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
        uVar14 = (ulonglong)uVar2 & 0x1ff;
        local_f8 = *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18);
        puVar1 = (undefined8 *)(lVar6 + uVar14 * 0x18);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar2 = *(uint *)(lVar3 + 4 + uVar13 * 0xc);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
        uVar14 = (ulonglong)uVar2 & 0x1ff;
        local_d8 = *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18);
        puVar1 = (undefined8 *)(lVar6 + uVar14 * 0x18);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        uVar2 = *(uint *)(lVar3 + 8 + uVar13 * 0xc);
        lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
        uVar13 = (ulonglong)uVar2 & 0x1ff;
        puVar1 = (undefined8 *)(lVar3 + uVar13 * 0x18);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
        local_88._0_4_ = (undefined4)uVar7;
        local_88._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar8;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = (undefined4)uStack_80;
        uStack_fc = uStack_80._4_4_;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        local_98 = local_d8;
        local_88 = uVar7;
        uStack_80 = uVar8;
        local_78 = local_f8;
        dVar16 = (double)FUN_146bed793(&local_108,&local_e8,&local_c8,param_3);
        dVar17 = dVar17 + dVar16 / 12.566370614359172;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    if ((int)uVar10 < 0) {
      uVar10 = ~uVar10;
      cVar9 = FUN_14835638a(lVar3,uVar10,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_14835647a(param_1,uVar10,param_3), cVar9 != '\0')) {
        dVar16 = (double)FUN_14835652a(param_1,uVar10,param_3);
      }
      else {
        local_118 = *(undefined8 *)(param_3 + 4);
        local_128 = *param_3;
        uStack_124 = param_3[1];
        uStack_120 = param_3[2];
        uStack_11c = param_3[3];
        dVar16 = (double)FUN_148352ada(param_1,uVar10);
      }
      dVar17 = 0.0;
    }
    else {
      iVar11 = uVar10 - 1;
      iVar12 = *(int *)(*(longlong *)
                         (*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                       (ulonglong)(uVar15 + 1 & 0x1ff) * 4) + -1;
      cVar9 = FUN_14835638a(lVar3,iVar11,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_14835647a(param_1,iVar11,param_3), cVar9 != '\0')) {
        dVar17 = (double)FUN_14835652a(param_1,iVar11,param_3);
      }
      else {
        local_138 = *(undefined8 *)(param_3 + 4);
        local_148 = *param_3;
        uStack_144 = param_3[1];
        uStack_140 = param_3[2];
        uStack_13c = param_3[3];
        dVar17 = (double)FUN_148352ada(param_1,iVar11);
      }
      dVar17 = dVar17 + 0.0;
      cVar9 = FUN_14835638a(*param_1,iVar12,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_14835647a(param_1,iVar12,param_3), cVar9 != '\0')) {
        dVar16 = (double)FUN_14835652a(param_1,iVar12,param_3);
      }
      else {
        local_158 = *(undefined8 *)(param_3 + 4);
        local_168 = *param_3;
        uStack_164 = param_3[1];
        uStack_160 = param_3[2];
        uStack_15c = param_3[3];
        dVar16 = (double)FUN_148352ada(param_1,iVar12);
      }
    }
    dVar17 = dVar17 + dVar16;
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar17;
}



// FUNCTION 148352e44 FUN_148352e44 body=190 status=ok
// SIG undefined FUN_148352e44(void)

void FUN_148352e44(longlong *param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [72];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148353ee0(local_b8,*(undefined8 *)(*param_1 + 8));
  FUN_1483543fe(param_1 + 1);
  local_70 = 0;
  local_68 = 0xffffffff00000000;
  local_50 = 0;
  local_48 = 0;
  uStack_44 = 0x80;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_c8 = local_b8;
  FUN_148353fb6(param_1,*(undefined4 *)(*param_1 + 0xcc),0,&local_70);
  FUN_145a22d80(&local_70);
  FUN_146bee452(local_b8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148352f04 FUN_148352f04 body=558 status=ok
// SIG undefined FUN_148352f04(void)

void FUN_148352f04(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8);
  if (iVar7 < 0) {
LAB_14835312b:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 == 0) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_14481578e(&local_78);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8);
    local_88 = 0;
    uStack_80 = 0;
    if (iVar7 < 0) goto LAB_14835312b;
    if (iVar7 != 0) {
      FUN_1447a8aa0(&local_88);
      lVar8 = *(longlong *)(param_1 + 8);
      if (0 < *(int *)(*(longlong *)(lVar8 + 8) + 8)) {
        iVar7 = 0;
        do {
          cVar4 = FUN_148353134(lVar8,iVar7);
          if (cVar4 != '\0') {
            FUN_14835318a(&local_a0,lVar8,iVar7);
            dVar2 = local_90 * local_90 + local_a0 * local_a0 + local_98 * local_98;
            local_b8 = dVar2;
            sVar5 = _dtest(&local_b8);
            if ((sVar5 != 2) &&
               (local_b8 = dVar2, sVar5 = _dtest(&local_b8), uVar3 = uStack_70, sVar5 < 1)) {
              lVar8 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1446f48e2(&local_78,uVar3 & 0xffffffff);
              }
              *(int *)(local_78 + lVar8 * 4) = iVar7;
              FUN_14835318a(&local_b8,*(undefined8 *)(param_1 + 8),iVar7);
              uVar3 = uStack_80;
              lVar8 = (longlong)(int)uStack_80;
              uVar6 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
              if (uStack_80._4_4_ < uVar6) {
                FUN_1403e3958(&local_88,uVar3 & 0xffffffff);
              }
              *(undefined8 *)(local_88 + 0x10 + lVar8 * 0x18) = local_a8;
              pdVar1 = (double *)(local_88 + lVar8 * 0x18);
              *pdVar1 = local_b8;
              pdVar1[1] = dStack_b0;
            }
            lVar8 = *(longlong *)(param_1 + 8);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(longlong *)(lVar8 + 8) + 8));
      }
    }
  }
  FUN_148353262(param_1,&local_78,&local_88,uStack_70 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148353134 FUN_148353134 body=86 status=ok
// SIG undefined FUN_148353134(void)

undefined4 FUN_148353134(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((((int)param_2 < 0) || ((int)((longlong *)param_1[1])[1] <= (int)param_2)) ||
      (uVar1 = *(uint *)(*(longlong *)param_1[1] + (ulonglong)param_2 * 4), (int)uVar1 < 0)) ||
     (lVar2 = *param_1, *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144) <= (int)uVar1)) {
    uVar4 = 0;
  }
  else {
    iVar3 = *(ushort *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
             (ulonglong)(uVar1 & 0x1ff) * 2) - 1;
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),(ushort)iVar3 < 0xfffe);
  }
  return uVar4;
}



// FUNCTION 14835318a FUN_14835318a body=215 status=ok
// SIG undefined FUN_14835318a(void)

void FUN_14835318a(double *param_1,longlong *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar7 = *(uint *)(*(longlong *)param_2[1] + (longlong)param_3 * 4);
  lVar9 = *(longlong *)(*param_2 + 0x10);
  lVar10 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  uVar7 = *(uint *)(lVar10 + uVar13 * 0xc);
  uVar8 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
  lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar14 = (ulonglong)uVar7 & 0x1ff;
  dVar1 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  uVar7 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  dVar3 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  dVar5 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  dVar6 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  *param_1 = (*(double *)(lVar11 + uVar14 * 0x18) + *(double *)(lVar12 + uVar15 * 0x18) +
             *(double *)(lVar9 + uVar13 * 0x18)) * 0.3333333333333333;
  param_1[1] = (dVar1 + dVar5 + dVar6) * 0.3333333333333333;
  param_1[2] = (dVar2 + dVar3 + dVar4) * 0.3333333333333333;
  return;
}



// FUNCTION 148353262 FUN_148353262 body=773 status=ok
// SIG undefined FUN_148353262(void)

void FUN_148353262(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_148353568(&local_b0);
  FUN_148353568(local_118);
  local_1c0 = &local_148;
  local_148 = 0x7fefffffffffffff;
  local_140 = 0x7fefffffffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0xffefffffffffffff;
  local_128 = 0xffefffffffffffff;
  local_120 = 0xffefffffffffffff;
  local_1d8 = *(undefined4 *)(param_1 + 0x18);
  local_1e0 = 0;
  uVar8 = 0;
  local_1e8 = param_4;
  local_1d0 = &local_b0;
  local_1c8 = local_118;
  local_1a4 = FUN_1483535a2(param_1,param_2,param_3,0);
  *(undefined8 *)(param_1 + 0x68) = local_b0;
  FUN_146bedfa8(param_1 + 0x70,local_a8);
  *(undefined8 *)(param_1 + 0x80) = local_98;
  FUN_146bee054(param_1 + 0x88,local_90);
  *(undefined8 *)(param_1 + 0x98) = local_80;
  FUN_146bee054(param_1 + 0xa0,local_78);
  *(undefined8 *)(param_1 + 0xb0) = local_68;
  FUN_146bedfa8(param_1 + 0xb8,local_60);
  *(int *)(param_1 + 200) = local_4c;
  local_1b0 = param_1;
  if (0 < local_b8) {
    local_198 = param_1 + 0x68;
    local_1a0 = param_1 + 0x80;
    do {
      uVar9 = (ulonglong)(uVar8 >> 9);
      lVar5 = *(longlong *)(local_f8 + uVar9 * 8);
      lVar6 = (ulonglong)((uVar8 & 0x1ff) * 8) * 3;
      piVar2 = (int *)(lVar5 + lVar6);
      local_168 = *piVar2;
      iStack_164 = piVar2[1];
      iStack_160 = piVar2[2];
      iStack_15c = piVar2[3];
      local_158 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      iVar1 = local_50 + uVar8;
      FUN_146bedee6(local_1a0,&local_168,iVar1);
      lVar5 = *(longlong *)(local_e0 + uVar9 * 8);
      puVar3 = (undefined4 *)(lVar5 + lVar6);
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + lVar6);
      FUN_146bedee6(param_1 + 0x98,&local_188,iVar1);
      local_18c = *(int *)(*(longlong *)(local_110 + uVar9 * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) +
                  local_4c;
      FUN_146bedf4e(local_198,&local_18c,iVar1);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b8);
  }
  if (0 < local_b4) {
    lVar5 = local_1b0 + 0xb0;
    uVar8 = 0;
    do {
      uVar4 = *(uint *)(*(longlong *)(local_c8 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
      uVar7 = ~uVar4;
      if (-1 < (int)uVar4) {
        uVar7 = uVar4 + local_50;
      }
      local_168 = uVar7 + 1;
      FUN_146bedf4e(lVar5,&local_168,local_4c + uVar8);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < local_b4);
  }
  *(int *)(local_1b0 + 0xcc) = local_50 + local_1a4;
  FUN_148353d46(local_118);
  FUN_148353d46(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148353568 FUN_148353568 body=57 status=ok
// SIG undefined FUN_148353568(void)

longlong FUN_148353568(longlong param_1)

{
  FUN_141040b84();
  FUN_141040be6(param_1 + 0x18);
  FUN_141040be6(param_1 + 0x30);
  FUN_141040b84(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 1483535a2 FUN_1483535a2 body=1954 status=ok
// SIG undefined FUN_1483535a2(void)

uint FUN_1483535a2(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  double *local_f0;
  int local_dc;
  ulonglong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  pdVar8 = param_10;
  lVar7 = param_8;
  uVar23 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_2[1] < 1) {
    uVar27 = SUB84(DAT_14c8464f0,0);
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    dVar30 = DAT_14c8464f0 + 0.0;
    dVar31 = DAT_14c8464e8 + 0.0;
    dVar25 = DAT_14c8464e0 + 0.0;
    dVar26 = DAT_14c8464e8;
    dVar29 = DAT_14c8464e0;
  }
  else {
    dVar25 = -1.79769313486232e+308;
    uVar27 = 0xffffffff;
    uVar28 = 0x7fefffff;
    dVar31 = -1.79769313486232e+308;
    dVar30 = -1.79769313486232e+308;
    dVar26 = 1.79769313486232e+308;
    dVar29 = 1.79769313486232e+308;
  }
  *param_10 = dVar29;
  param_10[1] = dVar26;
  param_10[2] = (double)CONCAT44(uVar28,uVar27);
  param_10[3] = dVar25;
  param_10[4] = dVar31;
  param_10[5] = dVar30;
  local_c8 = param_1;
  if (param_7 < (int)param_5) {
    local_98 = (double)CONCAT44(local_98._4_4_,param_6);
    pcVar3 = *(code **)(param_1 + 0x20);
    plVar12 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x30);
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    iVar10 = (*pcVar3)(uVar11,&local_98,pdVar8);
    lVar9 = local_c8;
    pdVar8 = param_10;
    lVar7 = param_9;
    if ((int)uVar23 < 1) {
      uVar27 = 0xffffffff;
      uVar28 = 0x7fefffff;
      dVar26 = -1.79769313486232e+308;
    }
    else {
      dVar29 = 1.79769313486232e+308;
      lVar18 = 0;
      dVar25 = -1.79769313486232e+308;
      do {
        dVar26 = *(double *)((longlong)iVar10 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar18);
        uVar27 = SUB84(dVar26,0);
        uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (dVar29 <= dVar26) {
          uVar27 = SUB84(dVar29,0);
          uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        lVar18 = lVar18 + 0x18;
        dVar29 = (double)CONCAT44(uVar28,uVar27);
        dVar25 = dVar26;
      } while ((ulonglong)uVar23 * 0x18 != lVar18);
    }
    if (dVar26 - (double)CONCAT44(uVar28,uVar27) <= 1e-08) {
      uVar22 = (ulonglong)(uint)((int)uVar23 / 2);
    }
    else {
      uVar22 = 0;
      if (1 < (int)uVar23) {
        dVar26 = (dVar26 + (double)CONCAT44(uVar28,uVar27)) * 0.5;
        iVar19 = uVar23 - 1;
        lVar13 = (longlong)param_4;
        local_c0 = lVar13 * 4;
        lVar18 = lVar13 * 0x18;
        uVar22 = 0;
        while( true ) {
          lVar15 = *param_3;
          iVar21 = (int)uVar22;
          uVar22 = (longlong)iVar21 - 1;
          puVar2 = (undefined8 *)((lVar13 + iVar21) * 0x18 + -0x18 + lVar15);
          do {
            puVar24 = puVar2;
            uVar22 = uVar22 + 1;
            puVar2 = puVar24 + 3;
          } while ((double)puVar24[(longlong)iVar10 + 3] <= dVar26);
          lVar20 = (longlong)iVar19;
          lVar17 = 0;
          lVar14 = lVar20 * 0x18;
          do {
            lVar16 = lVar14;
            lVar17 = lVar17 + -1;
            lVar14 = lVar16 + -0x18;
          } while (dVar26 < *(double *)(lVar18 + (longlong)iVar10 * 8 + lVar15 + lVar16));
          if (lVar20 + lVar17 + 1 <= (longlong)uVar22) break;
          lVar15 = lVar15 + lVar18 + lVar16 + -0x18;
          iVar19 = iVar19 + 1 + (int)lVar17;
          uVar11 = puVar24[5];
          uVar4 = *puVar2;
          uVar5 = puVar24[4];
          uVar6 = *(undefined8 *)(lVar15 + 0x20);
          *puVar2 = *(undefined8 *)(lVar15 + 0x18);
          puVar24[4] = uVar6;
          puVar24[5] = *(undefined8 *)(lVar15 + 0x28);
          lVar15 = *param_3;
          *(undefined8 *)(lVar16 + 0x10 + lVar15 + lVar18) = uVar11;
          puVar2 = (undefined8 *)(lVar16 + lVar15 + lVar18);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          lVar14 = local_c0 + *param_2;
          uVar27 = *(undefined4 *)(lVar14 + uVar22 * 4);
          lVar15 = lVar13 * 4 + 4 + lVar20 * 4;
          *(undefined4 *)(lVar14 + uVar22 * 4) = *(undefined4 *)(*param_2 + lVar15 + lVar17 * 4);
          *(undefined4 *)(lVar15 + *param_2 + lVar17 * 4) = uVar27;
        }
      }
    }
    iVar19 = (int)uVar22;
    local_d8 = (ulonglong)(uVar23 - iVar19);
    local_98 = 1.79769313486232e+308;
    dStack_90 = 1.79769313486232e+308;
    local_88 = 1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    local_70 = -1.79769313486232e+308;
    iVar10 = param_6 + 1;
    local_f0 = param_10;
    local_f8 = param_9;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = iVar19;
    local_110 = iVar10;
    local_dc = param_4;
    local_d0 = param_2;
    local_9c = FUN_1483535a2(local_c8,param_2,param_3,param_4);
    local_f0 = &local_98;
    local_f8 = lVar7;
    local_100 = param_8;
    local_108 = param_7;
    local_118 = (int)local_d8;
    local_110 = iVar10;
    local_a0 = FUN_1483535a2(lVar9,param_2,param_3,iVar19 + param_4);
    dVar26 = pdVar8[1];
    uVar27 = SUB84(dVar26,0);
    uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
    dVar29 = *pdVar8;
    if (local_98 <= *pdVar8) {
      dVar29 = local_98;
    }
    *pdVar8 = dVar29;
    if (dStack_90 <= dVar26) {
      uVar27 = SUB84(dStack_90,0);
      uVar28 = (undefined4)((ulonglong)dStack_90 >> 0x20);
    }
    pdVar8[1] = (double)CONCAT44(uVar28,uVar27);
    dVar26 = pdVar8[2];
    if (local_88 <= pdVar8[2]) {
      dVar26 = local_88;
    }
    pdVar8[2] = dVar26;
    dVar26 = pdVar8[3];
    if (pdVar8[3] <= local_80) {
      dVar26 = local_80;
    }
    pdVar8[3] = dVar26;
    dVar26 = pdVar8[4];
    if (pdVar8[4] <= local_78) {
      dVar26 = local_78;
    }
    pdVar8[4] = dVar26;
    dVar26 = pdVar8[5];
    if (pdVar8[5] <= local_70) {
      dVar26 = local_70;
    }
    pdVar8[5] = dVar26;
    uVar23 = *(uint *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = uVar23 + 1;
    FUN_146bedf4e(lVar7,lVar7 + 100,uVar23);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_9c);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&local_a0);
    local_a8 = (pdVar8[2] + pdVar8[5]) * 0.5;
    local_b0 = (pdVar8[1] + pdVar8[4]) * 0.5;
    local_b8 = (*pdVar8 + pdVar8[3]) * 0.5;
    FUN_146bedee6(lVar7 + 0x18,&local_b8,uVar23);
    local_a8 = (pdVar8[5] - pdVar8[2]) * 0.5;
    local_b0 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_b8 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_b8,uVar23);
  }
  else {
    local_d0 = (longlong *)(ulonglong)*(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = *(uint *)(param_8 + 0x60) + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1);
    *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
    FUN_146bedf4e(lVar7 + 0x48,&param_5);
    lVar9 = local_c8;
    if ((int)param_5 < 1) {
      dVar26 = pdVar8[2];
      dVar29 = pdVar8[5];
      dVar25 = *pdVar8;
      dVar30 = pdVar8[1];
      dVar31 = pdVar8[4];
      uVar27 = SUB84(pdVar8[3],0);
      uVar28 = (undefined4)((ulonglong)pdVar8[3] >> 0x20);
    }
    else {
      lVar13 = 0;
      lVar18 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar7 + 0x48,*param_2 + (longlong)param_4 * 4 + lVar13);
        FUN_148353dbe(&local_98,*(undefined8 *)(lVar9 + 8),
                      *(undefined4 *)(*param_2 + (longlong)param_4 * 4 + lVar18 * 4));
        dVar25 = *pdVar8;
        if (local_98 <= *pdVar8) {
          dVar25 = local_98;
        }
        *pdVar8 = dVar25;
        dVar30 = pdVar8[1];
        if (dStack_90 <= pdVar8[1]) {
          dVar30 = dStack_90;
        }
        pdVar8[1] = dVar30;
        dVar26 = pdVar8[2];
        if (local_88 <= pdVar8[2]) {
          dVar26 = local_88;
        }
        pdVar8[2] = dVar26;
        dVar29 = pdVar8[3];
        uVar27 = SUB84(dVar29,0);
        uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= local_80) {
          uVar27 = SUB84(local_80,0);
          uVar28 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        pdVar8[3] = (double)CONCAT44(uVar28,uVar27);
        dVar31 = pdVar8[4];
        if (pdVar8[4] <= local_78) {
          dVar31 = local_78;
        }
        pdVar8[4] = dVar31;
        dVar29 = pdVar8[5];
        if (pdVar8[5] <= local_70) {
          dVar29 = local_70;
        }
        pdVar8[5] = dVar29;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 4;
      } while (lVar18 < (int)param_5);
    }
    plVar12 = local_d0;
    lVar7 = param_8;
    local_88 = (dVar29 + dVar26) * 0.5;
    dStack_90 = (dVar31 + dVar30) * 0.5;
    local_98 = ((double)CONCAT44(uVar28,uVar27) + dVar25) * 0.5;
    uVar23 = (uint)local_d0;
    FUN_146bedee6(param_8 + 0x18,&local_98,(ulonglong)local_d0 & 0xffffffff);
    local_88 = (pdVar8[5] - pdVar8[2]) * 0.5;
    dStack_90 = (pdVar8[4] - pdVar8[1]) * 0.5;
    local_98 = (pdVar8[3] - *pdVar8) * 0.5;
    FUN_146bedee6(lVar7 + 0x30,&local_98,(ulonglong)plVar12 & 0xffffffff);
    uVar23 = ~uVar23;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 148353d46 FUN_148353d46 body=120 status=ok
// SIG undefined FUN_148353d46(void)

void FUN_148353d46(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148353dbe FUN_148353dbe body=290 status=ok
// SIG undefined FUN_148353dbe(void)

void FUN_148353dbe(double *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar7 = *(uint *)(*(longlong *)param_2[1] + (longlong)param_3 * 4);
  lVar1 = *(longlong *)(*param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
  uVar5 = (ulonglong)uVar7 & 0x1ff;
  uVar7 = *(uint *)(lVar2 + uVar5 * 0xc);
  lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8);
  uVar8 = (ulonglong)uVar7 & 0x1ff;
  dVar15 = *(double *)(lVar3 + uVar8 * 0x18);
  dVar16 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
  dVar17 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
  bVar6 = false;
  dVar9 = dVar15;
  dVar11 = dVar16;
  dVar13 = dVar17;
  uVar7 = *(uint *)(lVar2 + 4 + uVar5 * 0xc);
  do {
    lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar7 >> 9) * 8);
    uVar8 = (ulonglong)(uVar7 & 0x1ff);
    dVar12 = *(double *)(lVar3 + uVar8 * 0x18);
    dVar10 = dVar12;
    if ((dVar9 <= dVar12) && (dVar10 = dVar9, dVar15 < dVar12)) {
      dVar15 = dVar12;
    }
    dVar9 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    dVar12 = dVar9;
    if ((dVar11 <= dVar9) && (dVar12 = dVar11, dVar16 < dVar9)) {
      dVar16 = dVar9;
    }
    dVar9 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    dVar14 = dVar9;
    if ((dVar13 <= dVar9) && (dVar14 = dVar13, dVar17 < dVar9)) {
      dVar17 = dVar9;
    }
    bVar4 = !bVar6;
    bVar6 = true;
    dVar9 = dVar10;
    dVar11 = dVar12;
    dVar13 = dVar14;
    uVar7 = *(uint *)(lVar2 + 8 + uVar5 * 0xc);
  } while (bVar4);
  *param_1 = dVar10;
  param_1[1] = dVar12;
  param_1[2] = dVar14;
  param_1[3] = dVar15;
  param_1[4] = dVar16;
  param_1[5] = dVar17;
  return;
}



// FUNCTION 148353ee0 FUN_148353ee0 body=212 status=ok
// SIG undefined FUN_148353ee0(void)

longlong FUN_148353ee0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_141040be6();
  FUN_141040be6(param_1 + 0x18);
  FUN_146bee4b2(param_1 + 0x30);
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 8);
  FUN_146bee1a4(param_1,uVar1);
  FUN_146bee1a4(param_1 + 0x18,uVar1);
  FUN_146b9c0e2(param_1 + 0x30);
  local_48 = &local_60;
  local_68 = &local_40;
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14835420a;
  local_70 = 0;
  local_60 = param_2;
  local_58 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148353fb6 FUN_148353fb6 body=595 status=ok
// SIG undefined FUN_148353fb6(void)

int FUN_148353fb6(longlong *param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145a22d80(param_4);
  lVar3 = *param_1;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if ((int)uVar2 < *(int *)(lVar3 + 200)) {
LAB_148354011:
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    goto LAB_14835402a;
  }
  while( true ) {
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) break;
    param_2 = ~uVar1;
    FUN_145a22d80(param_4);
    lVar3 = *param_1;
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                     (ulonglong)(param_2 & 0x1ff) * 4);
    if ((int)uVar2 < *(int *)(lVar3 + 200)) goto LAB_148354011;
    param_3 = param_3 + 1;
  }
  iVar4 = uVar1 - 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                  (ulonglong)(uVar2 + 1 & 0x1ff) * 4) + -1;
  local_98 = 0;
  local_90 = 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a8 = param_5;
  local_9c = FUN_148353fb6(param_1,iVar4,param_3 + 1,param_4);
  local_a8 = param_5;
  local_a0 = iVar5;
  iVar5 = FUN_148353fb6(param_1,iVar5,param_3 + 1,&local_98);
  iVar5 = iVar5 + local_9c;
  if (param_3 != 0) {
    if (*(int *)((longlong)param_4 + 0xc) == -1) {
      if ((local_90._4_4_ == -1) && (iVar5 < 2)) goto LAB_148354158;
      if (local_90._4_4_ == -1) {
        FUN_146bee514(param_4);
        FUN_14835473a(param_1,iVar4,param_4);
        goto LAB_148354196;
      }
      FUN_14835473a(param_1,iVar4,&local_98);
      if (&local_98 != param_4) {
        if (local_90._4_4_ == -1) {
          FUN_145a22d80(param_4);
        }
        else {
          FUN_146bee56a(param_4,&local_98);
        }
      }
    }
    else {
LAB_148354196:
      if (local_90._4_4_ == -1) {
        FUN_14835473a(param_1,local_a0,param_4);
      }
      else {
        FUN_1468b3f6e(param_4,&local_98);
      }
    }
    if (1 < iVar5) {
      FUN_148354858(param_1,param_2,param_4,param_5);
    }
  }
LAB_148354158:
  FUN_145a22d80(&local_98);
LAB_14835402a:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148354212 FUN_148354212 body=106 status=ok
// SIG undefined FUN_148354212(void)

void FUN_148354212(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  
  uVar1 = *param_1;
  cVar5 = FUN_148353134(uVar1);
  if (cVar5 != '\0') {
    lVar2 = param_1[1];
    uVar3 = (ulonglong)(param_2 >> 9);
    uVar6 = (ulonglong)((param_2 & 0x1ff) << 3);
    lVar4 = uVar6 * 3;
    FUN_14835427c(uVar1,param_2,lVar4 + *(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 8),
                  uVar6 + *(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar3 * 8),
                  *(longlong *)(*(longlong *)(lVar2 + 8) + uVar3 * 8) + lVar4);
  }
  return;
}



// FUNCTION 14835427c FUN_14835427c body=384 status=ok
// SIG undefined FUN_14835427c(void)

void FUN_14835427c(longlong *param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                  double *param_5)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  lVar3 = *(longlong *)(*param_1 + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  uVar2 = *(uint *)(lVar4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_68 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_78 = *pdVar1;
  dStack_70 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_50 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_60 = *pdVar1;
  dStack_58 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 8 + uVar6 * 0xc);
  lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_38 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  *param_5 = (local_78 + local_60 + local_48) * 0.3333333333333333;
  param_5[1] = (dStack_70 + dStack_58 + dStack_40) * 0.3333333333333333;
  param_5[2] = (local_68 + local_50 + local_38) * 0.3333333333333333;
  local_98 = param_4;
  FUN_146b9cae0(&local_90,&local_78,&local_60,&local_48);
  *(undefined8 *)(param_3 + 4) = local_80;
  *param_3 = local_90;
  param_3[1] = uStack_8c;
  param_3[2] = uStack_88;
  param_3[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483543fe FUN_1483543fe body=63 status=ok
// SIG undefined FUN_1483543fe(void)

void FUN_1483543fe(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14835260e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148354588(param_1);
    return;
  }
  FUN_14835443e(param_1);
  FUN_14835260e(param_1);
  return;
}



// FUNCTION 14835443e FUN_14835443e body=329 status=ok
// SIG undefined FUN_14835443e(void)

void FUN_14835443e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 148354588 FUN_148354588 body=433 status=ok
// SIG undefined FUN_148354588(void)

void FUN_148354588(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14835473a FUN_14835473a body=285 status=ok
// SIG undefined FUN_14835473a(void)

void FUN_14835473a(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  while (uVar3 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 4), *(int *)(lVar1 + 200) <= (int)uVar3) {
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
    }
    else {
      FUN_14835473a(param_1,param_2 - 1,param_3);
      lVar1 = *param_1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    }
  }
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (0 < iVar2) {
    do {
      uVar3 = uVar3 + 1;
      FUN_1447cbafe(param_3,local_34,
                    (ulonglong)((uVar3 & 0x1ff) << 2) +
                    *(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8),0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148354858 FUN_148354858 body=168 status=ok
// SIG undefined FUN_148354858(void)

void FUN_148354858(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined1 local_88 [76];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_88;
  local_d0 = local_a0;
  local_d8 = local_a8;
  local_3c = param_2;
  FUN_148354901(*(undefined8 *)(*param_1 + 8),param_3,param_4,local_c0);
  local_38 = &local_3c;
  local_30 = local_c0;
  FUN_148356052(param_1 + 1,local_24);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148354901 FUN_148354901 body=514 status=ok
// SIG undefined FUN_148354901(void)

void FUN_148354901(undefined8 param_1,longlong param_2,undefined8 param_3,double *param_4,
                  double *param_5,undefined4 *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0 [9];
  double local_98;
  longlong *local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34) < 3000) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
  }
  FUN_140619b9c(param_2,&local_58);
  local_e8 = DAT_14c8464f0;
  local_f8 = (undefined4)DAT_14c8464e0;
  uStack_f4 = DAT_14c8464e0._4_4_;
  uStack_f0 = (undefined4)DAT_14c8464e8;
  uStack_ec = DAT_14c8464e8._4_4_;
  local_e0[0] = 0;
  local_88 = &local_58;
  local_80 = param_3;
  FUN_148355282(&local_78,local_50);
  local_60 = 1.0 / local_60;
  local_128 = local_78 * local_60;
  dStack_120 = dStack_70 * local_60;
  local_118 = local_60 * local_68;
  local_188 = DAT_14c8464f0;
  local_198 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_190 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_110 = &local_58;
  local_108 = param_1;
  local_100 = param_3;
  local_78 = local_128;
  dStack_70 = dStack_120;
  local_68 = local_118;
  FUN_1483553fb(&local_f8,local_50);
  param_4[2] = local_68;
  *param_4 = local_78;
  param_4[1] = dStack_70;
  if (local_98 < 0.0) {
    local_98 = sqrt(local_98);
  }
  else {
    local_98 = SQRT(local_98);
  }
  *param_5 = local_98;
  *(undefined8 *)(param_6 + 4) = local_e8;
  *param_6 = local_f8;
  param_6[1] = uStack_f4;
  param_6[2] = uStack_f0;
  param_6[3] = uStack_ec;
  puVar2 = local_e0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_7 = *puVar2;
    puVar2 = puVar2 + 1;
    param_7 = param_7 + 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148355282 FUN_148355282 body=376 status=ok
// SIG undefined FUN_148355282(void)

double * FUN_148355282(double *param_1,int param_2,double *param_3,undefined8 param_4)

{
  longlong lVar1;
  double dVar2;
  undefined1 in_XMM0 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 *local_b8;
  double *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  int local_64;
  int local_60;
  undefined1 local_59;
  undefined1 *local_58;
  double **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  auVar3._4_12_ = in_XMM0._4_12_;
  auVar3._0_4_ = (float)param_2 * 0.0625;
  auVar3 = roundss(auVar3,auVar3,10);
  local_64 = (int)auVar3._0_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = param_2;
  FUN_148355560(&local_78);
  local_50 = &local_a8;
  local_88 = &local_59;
  local_b8 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = &LAB_1483556bc;
  local_c0 = 0;
  local_a8 = param_3;
  local_a0 = &local_64;
  local_98 = &local_60;
  local_90 = param_4;
  local_80 = &local_78;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  dVar4 = *param_3;
  dVar6 = param_3[1];
  dVar2 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = dVar2;
  *param_1 = dVar4;
  param_1[1] = dVar6;
  dVar2 = *param_1;
  if ((longlong)(int)uStack_70 != 0) {
    dVar4 = param_1[1];
    dVar6 = param_1[2];
    dVar5 = param_1[3];
    lVar1 = 0;
    do {
      dVar6 = dVar6 + *(double *)(local_78 + 0x10 + lVar1);
      dVar4 = dVar4 + *(double *)(local_78 + 8 + lVar1);
      dVar2 = dVar2 + *(double *)(local_78 + lVar1);
      dVar5 = dVar5 + *(double *)(local_78 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
    } while ((longlong)(int)uStack_70 * 0x20 != lVar1);
    param_1[2] = dVar6;
    param_1[1] = dVar4;
    param_1[3] = dVar5;
  }
  *param_1 = dVar2;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483553fb FUN_1483553fb body=356 status=ok
// SIG undefined FUN_1483553fb(void)

undefined8 * FUN_1483553fb(undefined8 *param_1,int param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int **ppiVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  int *local_f0 [4];
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_88;
  undefined8 uStack_80;
  int local_6c;
  int local_68;
  undefined1 local_61;
  undefined1 *local_60;
  int **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = (float)param_2 * 0.0625;
  auVar7 = roundss(auVar7,auVar7,10);
  local_6c = (int)auVar7._0_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = param_2;
  FUN_14835579e(&local_88);
  local_58 = local_f0;
  local_d0 = &local_61;
  local_f8 = &local_50;
  local_50 = 0;
  local_48 = 0;
  local_60 = &LAB_148355a08;
  local_100 = 0;
  local_f0[0] = param_3;
  local_f0[1] = &local_6c;
  local_f0[2] = &local_68;
  local_f0[3] = (int *)param_4;
  local_c8 = &local_88;
  FUN_1401f8d10(L"ParallelFor Task",0x10,1);
  lVar1 = local_88;
  puVar5 = param_1;
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *(undefined8 *)param_3;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 1;
  }
  if ((longlong)(int)uStack_80 != 0) {
    lVar6 = (longlong)(int)uStack_80 * 0x68;
    lVar2 = local_88;
    do {
      FUN_1483557d8(local_f0,lVar2,param_1);
      ppiVar4 = local_f0;
      puVar5 = param_1;
      for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar2 = lVar2 + 0x68;
      lVar6 = lVar6 + -0x68;
    } while (lVar6 != 0);
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148355560 FUN_148355560 body=57 status=ok
// SIG undefined FUN_148355560(void)

void FUN_148355560(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_14835559a();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_148355620();
    return;
  }
  return;
}



// FUNCTION 14835559a FUN_14835559a body=132 status=ok
// SIG undefined FUN_14835559a(void)

void FUN_14835559a(longlong param_1,int param_2)

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



// FUNCTION 148355620 FUN_148355620 body=62 status=ok
// SIG undefined FUN_148355620(void)

void FUN_148355620(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14835565e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14835565e FUN_14835565e body=93 status=ok
// SIG undefined FUN_14835565e(void)

ulonglong FUN_14835565e(uint param_1,uint param_2)

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



// FUNCTION 1483556c4 FUN_1483556c4 body=217 status=ok
// SIG undefined FUN_1483556c4(void)

void FUN_1483556c4(undefined8 *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar7;
  
  pdVar2 = (double *)*param_1;
  dVar10 = *pdVar2;
  dVar11 = pdVar2[1];
  dVar12 = pdVar2[2];
  dVar13 = pdVar2[3];
  iVar4 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar4) {
    iVar4 = *(int *)param_1[2];
  }
  iVar9 = *(int *)param_1[1] * param_2;
  if (iVar9 < iVar4) {
    lVar3 = ((undefined8 *)param_1[3])[1];
    do {
      uVar6 = *(uint *)(**(longlong **)param_1[3] + (longlong)iVar9 * 4);
      uVar8 = (ulonglong)(uVar6 >> 9);
      uVar6 = uVar6 & 0x1ff;
      uVar7 = (ulonglong)uVar6;
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x38) + uVar8 * 8) + (ulonglong)uVar6 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + uVar8 * 8);
      dVar12 = dVar12 + *(double *)(lVar5 + 0x10 + uVar7 * 0x18) * dVar1;
      dVar13 = dVar13 + dVar1;
      dVar11 = dVar11 + *(double *)(lVar5 + 8 + uVar7 * 0x18) * dVar1;
      dVar10 = dVar10 + dVar1 * *(double *)(lVar5 + uVar7 * 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar9);
  }
  lVar3 = *(longlong *)param_1[5];
  lVar5 = (longlong)param_2 * 0x20;
  *(double *)(lVar3 + lVar5) = dVar10;
  *(double *)(lVar3 + 8 + lVar5) = dVar11;
  *(double *)(lVar3 + 0x10 + lVar5) = dVar12;
  *(double *)(lVar3 + 0x18 + lVar5) = dVar13;
  return;
}



// FUNCTION 14835579e FUN_14835579e body=57 status=ok
// SIG undefined FUN_14835579e(void)

void FUN_14835579e(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_1483558d2();
      return;
    }
  }
  else if (iVar1 != 0x10) {
    *(undefined4 *)(param_1 + 8) = 0x10;
    FUN_148355962();
    return;
  }
  return;
}



// FUNCTION 1483557d8 FUN_1483557d8 body=249 status=ok
// SIG undefined FUN_1483557d8(void)

double * FUN_1483557d8(double *param_1,double *param_2,double *param_3)

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
  
  dVar16 = param_2[2];
  dVar1 = param_3[2];
  dVar2 = param_2[1];
  dVar3 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = dVar2 + dVar3;
  param_1[2] = dVar16 + dVar1;
  dVar16 = param_2[0xb];
  dVar1 = param_3[0xb];
  dVar2 = param_2[10];
  dVar3 = param_3[10];
  dVar4 = param_2[9];
  dVar5 = param_3[9];
  dVar6 = param_2[8];
  dVar7 = param_3[8];
  dVar8 = param_2[7];
  dVar9 = param_3[7];
  dVar10 = param_2[6];
  dVar11 = param_3[6];
  dVar12 = param_2[5];
  dVar13 = param_3[5];
  dVar14 = param_2[4];
  dVar15 = param_3[4];
  param_1[3] = param_2[3] + param_3[3];
  param_1[4] = dVar14 + dVar15;
  param_1[5] = dVar12 + dVar13;
  param_1[6] = dVar10 + dVar11;
  param_1[7] = dVar8 + dVar9;
  param_1[8] = dVar6 + dVar7;
  param_1[9] = dVar4 + dVar5;
  param_1[10] = dVar2 + dVar3;
  param_1[0xb] = dVar16 + dVar1;
  dVar16 = param_2[0xc];
  if (param_2[0xc] <= param_3[0xc]) {
    dVar16 = param_3[0xc];
  }
  param_1[0xc] = dVar16;
  return param_1;
}



// FUNCTION 1483558d2 FUN_1483558d2 body=143 status=ok
// SIG undefined FUN_1483558d2(void)

void FUN_1483558d2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148355962 FUN_148355962 body=62 status=ok
// SIG undefined FUN_148355962(void)

void FUN_148355962(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1483559a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 1483559a0 FUN_1483559a0 body=104 status=ok
// SIG undefined FUN_1483559a0(void)

ulonglong FUN_1483559a0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1483559d6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_1483559d6:
  return param_2 & 0xffffffff;
}



// FUNCTION 148355a10 FUN_148355a10 body=720 status=ok
// SIG undefined FUN_148355a10(void)

void FUN_148355a10(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pdVar8 = (double *)*param_1;
  dVar16 = *pdVar8;
  dVar17 = pdVar8[1];
  dVar18 = pdVar8[2];
  dVar19 = pdVar8[3];
  dVar1 = pdVar8[4];
  dVar2 = pdVar8[5];
  dVar3 = pdVar8[6];
  dVar4 = pdVar8[7];
  dVar5 = pdVar8[8];
  dVar6 = pdVar8[9];
  dVar15 = pdVar8[10];
  dVar7 = pdVar8[0xb];
  dVar14 = pdVar8[0xc];
  uVar20 = SUB84(dVar14,0);
  uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
  iVar13 = (param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar13) {
    iVar13 = *(int *)param_1[2];
  }
  iVar12 = *(int *)param_1[1] * param_2;
  if (iVar12 < iVar13) {
    uVar9 = param_1[3];
    do {
      local_160 = (double)CONCAT44(uVar21,uVar20);
      local_158 = dVar7;
      local_150 = dVar6;
      FUN_148355ce2(uVar9,&local_148,iVar12);
      dVar18 = dVar18 + local_138;
      dVar17 = dVar17 + local_140;
      dVar16 = dVar16 + local_148;
      dVar7 = local_158 + local_f0;
      dVar15 = dVar15 + local_f8;
      dVar6 = local_150 + local_100;
      dVar5 = dVar5 + local_108;
      dVar4 = dVar4 + local_110;
      dVar3 = dVar3 + local_118;
      dVar2 = dVar2 + local_120;
      dVar1 = dVar1 + local_128;
      dVar19 = dVar19 + local_130;
      dVar14 = local_e8;
      if (local_e8 <= local_160) {
        dVar14 = local_160;
      }
      iVar12 = iVar12 + 1;
      uVar20 = SUB84(dVar14,0);
      uVar21 = (undefined4)((ulonglong)dVar14 >> 0x20);
    } while (iVar13 != iVar12);
  }
  lVar10 = *(longlong *)param_1[5];
  lVar11 = (longlong)param_2 * 0x68;
  *(double *)(lVar10 + lVar11) = dVar16;
  *(double *)(lVar10 + 8 + lVar11) = dVar17;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar18;
  *(double *)(lVar10 + 0x18 + lVar11) = dVar19;
  *(double *)(lVar10 + 0x20 + lVar11) = dVar1;
  *(double *)(lVar10 + 0x28 + lVar11) = dVar2;
  *(double *)(lVar10 + 0x30 + lVar11) = dVar3;
  *(double *)(lVar10 + 0x38 + lVar11) = dVar4;
  *(double *)(lVar10 + 0x40 + lVar11) = dVar5;
  *(double *)(lVar10 + 0x48 + lVar11) = dVar6;
  *(double *)(lVar10 + 0x50 + lVar11) = dVar15;
  *(double *)(lVar10 + 0x58 + lVar11) = dVar7;
  *(double *)(lVar10 + 0x60 + lVar11) = dVar14;
  if ((local_e0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148355ce2 FUN_148355ce2 body=880 status=ok
// SIG undefined FUN_148355ce2(void)

void FUN_148355ce2(double *param_1,double *param_2,int param_3)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar12 = *(uint *)(*(longlong *)param_1[3] + (longlong)param_3 * 4);
  lVar15 = *(longlong *)param_1[4];
  uVar13 = *(uint *)(*(longlong *)((longlong *)param_1[4])[1] + (longlong)(int)uVar12 * 4);
  lVar16 = *(longlong *)(lVar15 + 0x10);
  lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
  uVar19 = (ulonglong)uVar13 & 0x1ff;
  uVar13 = *(uint *)(lVar15 + uVar19 * 0xc);
  uVar14 = *(uint *)(lVar15 + 4 + uVar19 * 0xc);
  lVar17 = *(longlong *)(lVar16 + (ulonglong)(uVar13 >> 9) * 8);
  uVar18 = (ulonglong)uVar13 & 0x1ff;
  dVar1 = *(double *)(lVar17 + uVar18 * 0x18);
  dVar2 = *(double *)(lVar17 + 8 + uVar18 * 0x18);
  dVar3 = *(double *)(lVar17 + 0x10 + uVar18 * 0x18);
  lVar17 = *(longlong *)(lVar16 + (ulonglong)(uVar14 >> 9) * 8);
  uVar18 = (ulonglong)uVar14 & 0x1ff;
  dVar24 = *(double *)(lVar17 + uVar18 * 0x18);
  dVar26 = *(double *)(lVar17 + 8 + uVar18 * 0x18);
  dVar27 = *(double *)(lVar17 + 0x10 + uVar18 * 0x18);
  uVar13 = *(uint *)(lVar15 + 8 + uVar19 * 0xc);
  lVar15 = *(longlong *)(lVar16 + (ulonglong)(uVar13 >> 9) * 8);
  uVar18 = (ulonglong)uVar13 & 0x1ff;
  dVar23 = *(double *)(lVar15 + uVar18 * 0x18);
  dVar25 = *(double *)(lVar15 + 8 + uVar18 * 0x18);
  dVar21 = *(double *)(lVar15 + 0x10 + uVar18 * 0x18);
  dVar22 = param_1[5];
  uVar19 = (ulonglong)(uVar12 >> 9);
  lVar15 = *(longlong *)(*(longlong *)((longlong)dVar22 + 0x20) + uVar19 * 8);
  uVar18 = (ulonglong)((uVar12 & 0x1ff) << 3);
  lVar16 = uVar18 * 3;
  dVar4 = *(double *)(lVar15 + lVar16);
  dVar5 = *(double *)(lVar15 + 8 + lVar16);
  dVar6 = *(double *)(lVar15 + 0x10 + lVar16);
  dVar7 = *(double *)(*(longlong *)(*(longlong *)((longlong)dVar22 + 0x38) + uVar19 * 8) + uVar18);
  lVar15 = *(longlong *)(*(longlong *)((longlong)dVar22 + 8) + uVar19 * 8);
  dVar22 = *(double *)(lVar15 + lVar16);
  dVar8 = *(double *)(lVar15 + 8 + lVar16);
  dVar20 = *(double *)(lVar15 + 0x10 + lVar16);
  *param_2 = dVar4 * dVar7;
  param_2[1] = dVar5 * dVar7;
  param_2[2] = dVar6 * dVar7;
  dVar9 = param_1[2];
  dVar20 = dVar20 - dVar9;
  dVar10 = param_1[1];
  dVar8 = dVar8 - dVar10;
  dVar11 = *param_1;
  dVar22 = dVar22 - dVar11;
  param_2[3] = dVar22 * dVar4 * dVar7;
  param_2[4] = dVar5 * dVar22 * dVar7;
  param_2[5] = dVar6 * dVar22 * dVar7;
  param_2[6] = dVar8 * dVar4 * dVar7;
  param_2[7] = dVar5 * dVar8 * dVar7;
  param_2[8] = dVar6 * dVar8 * dVar7;
  param_2[9] = dVar20 * dVar4 * dVar7;
  param_2[10] = dVar5 * dVar20 * dVar7;
  param_2[0xb] = dVar6 * dVar20 * dVar7;
  dVar23 = dVar11 - dVar23;
  dVar25 = dVar10 - dVar25;
  dVar21 = dVar9 - dVar21;
  dVar23 = dVar21 * dVar21 + dVar23 * dVar23 + dVar25 * dVar25;
  dVar24 = dVar11 - dVar24;
  dVar26 = dVar10 - dVar26;
  dVar27 = dVar9 - dVar27;
  dVar24 = dVar27 * dVar27 + dVar24 * dVar24 + dVar26 * dVar26;
  dVar11 = dVar11 - dVar1;
  dVar10 = dVar10 - dVar2;
  dVar9 = dVar9 - dVar3;
  dVar1 = dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
  if (dVar1 <= dVar24) {
    dVar1 = dVar24;
  }
  if (dVar1 <= dVar23) {
    dVar1 = dVar23;
  }
  param_2[0xc] = dVar1;
  return;
}



// FUNCTION 148356052 FUN_148356052 body=311 status=ok
// SIG undefined FUN_148356052(void)

undefined4 * FUN_148356052(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14835618a(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48;
  for (lVar5 = 0x10; puVar9 = puVar9 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  local_48[0x22] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_148356278(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x23] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x22] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148354588(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835618a FUN_14835618a body=238 status=ok
// SIG undefined FUN_14835618a(void)

int * FUN_14835618a(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 148356278 FUN_148356278 body=151 status=ok
// SIG undefined FUN_148356278(void)

undefined8 FUN_148356278(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x88);
          FUN_148356310(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148356310 FUN_148356310 body=122 status=ok
// SIG undefined FUN_148356310(void)

void FUN_148356310(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 14835638a FUN_14835638a body=239 status=ok
// SIG undefined FUN_14835638a(void)

undefined8 FUN_14835638a(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar7 = *(double *)(lVar4 + lVar5) + dVar6;
  if (*(double *)(lVar3 + lVar5) - dVar7 <= *param_3) {
    dVar8 = *(double *)(lVar4 + 8 + lVar5) + dVar6;
    dVar1 = *(double *)(lVar3 + 8 + lVar5);
    if (dVar1 - dVar8 <= param_3[1]) {
      dVar6 = dVar6 + *(double *)(lVar4 + 0x10 + lVar5);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar5);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      (param_3[2] <= dVar6 + dVar2 && dVar2 - dVar6 <= param_3[2]) &
                      -(*param_3 <= dVar7 + *(double *)(lVar3 + lVar5)) &
                      -(param_3[1] <= dVar8 + dVar1));
    }
  }
  return 0;
}



// FUNCTION 14835647a FUN_14835647a body=176 status=ok
// SIG undefined FUN_14835647a(void)

undefined8 FUN_14835647a(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          dVar3 = *param_3 - *(double *)(lVar2 + 8);
          dVar4 = param_3[1] - *(double *)(lVar2 + 0x10);
          dVar5 = param_3[2] - *(double *)(lVar2 + 0x18);
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                          *(double *)(param_1 + 0x60) * *(double *)(lVar2 + 0x20) <
                          SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
        }
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14835652a FUN_14835652a body=265 status=ok
// SIG undefined FUN_14835652a(void)

double FUN_14835652a(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2)
        goto LAB_14835653d;
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_14835653d:
  if (*(int *)(param_1 + 0x68) == 2) {
    dVar3 = (double)FUN_146bedd25(lVar2 + 8,lVar2 + 0x28,lVar2 + 0x40);
    return dVar3;
  }
  dVar3 = *(double *)(lVar2 + 0x18) - param_3[2];
  dVar4 = *(double *)(lVar2 + 0x10) - param_3[1];
  dVar5 = *(double *)(lVar2 + 8) - *param_3;
  dVar6 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
  dVar6 = 1.0 / (dVar6 * dVar6 * dVar6);
  return (dVar3 * dVar6 * *(double *)(lVar2 + 0x38) +
         dVar6 * dVar5 * *(double *)(lVar2 + 0x28) + dVar4 * dVar6 * *(double *)(lVar2 + 0x30)) *
         0.07957747154594767;
}



// FUNCTION 148356634 FUN_148356634 body=84 status=ok
// SIG undefined FUN_148356634(void)

void FUN_148356634(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = param_6;
  uStack_20 = param_7;
  FUN_1483566d2(param_6,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835668a FUN_14835668a body=24 status=ok
// SIG undefined FUN_14835668a(void)

longlong FUN_14835668a(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ae73c30;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 1483566a8 FUN_1483566a8 body=12 status=ok
// SIG undefined FUN_1483566a8(void)

void FUN_1483566a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001483566b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1483566b4 FUN_1483566b4 body=29 status=ok
// SIG undefined FUN_1483566b4(void)

undefined8 FUN_1483566b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483566d2 FUN_1483566d2 body=274 status=ok
// SIG undefined FUN_1483566d2(void)

ulonglong FUN_1483566d2(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                       undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (ulonglong)(int)param_2[1];
  if ((longlong)uVar5 < 1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    uVar7 = 0;
    do {
      lVar6 = uVar7 * 0x88 + *param_6;
      cVar3 = FUN_148352896(lVar6,param_5);
      if (cVar3 == '\0') {
        FUN_1483528fe(lVar6,&local_88,param_3);
      }
      else {
        local_78 = *(undefined8 *)(param_4 + 4);
        local_88 = *param_4;
        uStack_84 = param_4[1];
        uStack_80 = param_4[2];
        uStack_7c = param_4[3];
      }
      plVar2 = *(longlong **)(*param_2 + uVar7 * 8);
      FUN_148352a7a(plVar2,0);
      local_58 = local_78;
      local_68 = local_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      dVar8 = (double)FUN_148352ada(plVar2,*(undefined4 *)(*plVar2 + 0xcc),&local_68);
      if (*(double *)(lVar1 + 0x20) <= dVar8 && dVar8 != *(double *)(lVar1 + 0x20)) break;
      uVar7 = uVar7 + 1;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar7 < uVar5);
    } while (uVar7 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483567e6 FUN_1483567e6 body=80 status=ok
// SIG undefined FUN_1483567e6(void)

void FUN_1483567e6(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = param_6;
  uStack_20 = param_7;
  FUN_148356888(param_6,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835685e FUN_14835685e body=12 status=ok
// SIG undefined FUN_14835685e(void)

void FUN_14835685e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148356867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14835686a FUN_14835686a body=29 status=ok
// SIG undefined FUN_14835686a(void)

undefined8 FUN_14835686a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148356888 FUN_148356888 body=609 status=ok
// SIG undefined FUN_148356888(void)

ulonglong FUN_148356888(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                       undefined8 param_5,longlong *param_6)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [44];
  uint local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c0 = 0.0;
  dStack_b8 = 0.0;
  local_b0 = 1.0;
  local_118 = param_2;
  local_108 = param_3;
  local_100 = param_4;
  if (**(int **)(param_1 + 0x10) < 1) {
    uVar2 = CONCAT71((int7)((ulonglong)*(int **)(param_1 + 0x10) >> 8),1);
  }
  else {
    lVar4 = 0;
    do {
      lVar7 = (longlong)(int)local_118[1];
      if (lVar7 < 1) {
LAB_148356a98:
        uVar2 = 0;
        break;
      }
      local_11c = (uint)CONCAT71((int7)((ulonglong)local_118 >> 8),0 < lVar7);
      lVar6 = 0x50;
      lVar5 = 0;
      local_110 = lVar4;
      while( true ) {
        lVar8 = *param_6 + lVar6 + -0x50;
        cVar1 = FUN_148352896(lVar8,param_5);
        if (cVar1 == '\0') {
          FUN_1483528fe(lVar8,&local_f8,local_108);
        }
        else {
          local_e8 = *(undefined8 *)(local_100 + 4);
          local_f8 = *local_100;
          uStack_f4 = local_100[1];
          uStack_f0 = local_100[2];
          uStack_ec = local_100[3];
        }
        lVar8 = *param_6;
        FUN_146bed047(&local_a8,lVar8 + lVar6,**(longlong **)(param_1 + 8) + lVar4 * 0x18);
        local_b0 = *(double *)(lVar8 + 0x30 + lVar6) * local_98;
        dStack_b8 = *(double *)(lVar8 + 0x28 + lVar6) * local_a0;
        local_c0 = *(double *)(lVar8 + 0x20 + lVar6) * local_a8;
        local_d8 = CONCAT44(uStack_f4,local_f8);
        uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
        local_c8 = local_e8;
        plVar3 = *(longlong **)(*local_118 + lVar5 * 8);
        local_a8 = 1.79769313486232e+308;
        local_98 = 0.0;
        local_88 = (longlong *)0x0;
        local_58 = 0;
        cVar1 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_d8,&local_a8);
        if (local_98 != 0.0) {
          plVar3 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar3 = local_78;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (cVar1 != '\0') break;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x88;
        if (lVar7 == lVar5) goto LAB_148356a98;
      }
      lVar4 = local_110 + 1;
      uVar2 = (ulonglong)local_11c;
    } while (lVar4 < **(int **)(param_1 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148356aea FUN_148356aea body=80 status=ok
// SIG undefined FUN_148356aea(void)

void FUN_148356aea(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = param_6;
  uStack_20 = param_7;
  FUN_148356b8c(param_6,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148356b3c FUN_148356b3c body=32 status=ok
// SIG undefined FUN_148356b3c(void)

longlong FUN_148356b3c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ae73c70;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return param_2 + 0x18;
}



// FUNCTION 148356b62 FUN_148356b62 body=12 status=ok
// SIG undefined FUN_148356b62(void)

void FUN_148356b62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148356b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148356b6e FUN_148356b6e body=29 status=ok
// SIG undefined FUN_148356b6e(void)

undefined8 FUN_148356b6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148356b8c FUN_148356b8c body=638 status=ok
// SIG undefined FUN_148356b8c(void)

ulonglong FUN_148356b8c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_148 [44];
  uint local_11c;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c0 = 0.0;
  dStack_b8 = 0.0;
  local_b0 = 1.0;
  local_100 = param_2;
  if ((longlong)(int)param_2[1] < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3ff0000000000001;
    uVar7 = 0;
    local_118 = param_3;
    local_110 = (longlong)(int)param_2[1];
    local_108 = param_4;
    do {
      puVar2 = local_108;
      local_11c = (uint)uVar5;
      lVar9 = *param_6 + uVar7 * 0x88;
      cVar3 = FUN_148352896(lVar9,param_5);
      if (cVar3 == '\0') {
        FUN_1483528fe(lVar9,&local_f8,local_118);
      }
      else {
        local_e8 = puVar2[2];
        local_f8 = *puVar2;
        uStack_f0 = puVar2[1];
      }
      local_c8 = local_e8;
      local_d8 = local_f8;
      uStack_d0 = uStack_f0;
      if (**(int **)(param_1 + 0x10) < 1) {
LAB_148356d91:
        uVar5 = (ulonglong)local_11c;
        break;
      }
      lVar9 = 0;
      lVar8 = 0;
      while( true ) {
        lVar1 = *param_6 + uVar7 * 0x88;
        FUN_146bed047(&local_a8,lVar1 + 0x50,**(longlong **)(param_1 + 8) + lVar9);
        local_b0 = *(double *)(lVar1 + 0x80) * local_98;
        dStack_b8 = *(double *)(lVar1 + 0x78) * local_a0;
        local_c0 = *(double *)(lVar1 + 0x70) * local_a8;
        plVar6 = *(longlong **)(*local_100 + uVar7 * 8);
        local_a8 = 1.79769313486232e+308;
        local_98 = 0.0;
        local_88 = (longlong *)0x0;
        local_58 = 0;
        uVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,&local_d8,&local_a8);
        cVar3 = (char)uVar4;
        if (local_98 != 0.0) {
          plVar6 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar6 = local_78;
          }
          uVar4 = (**(code **)(*plVar6 + 0x10))();
        }
        if (cVar3 == '\0') break;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x18;
        if (**(int **)(param_1 + 0x10) <= lVar8) goto LAB_148356d91;
      }
      uVar7 = uVar7 + 1;
      uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar7 < local_110);
    } while (uVar7 != local_110);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 148356e0c FUN_148356e0c body=150 status=ok
// SIG undefined FUN_148356e0c(void)

void FUN_148356e0c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148356ea4 FUN_148356ea4 body=354 status=ok
// SIG undefined FUN_148356ea4(void)

void FUN_148356ea4(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar10 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  dVar9 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar5 = 0.0;
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
    dVar9 = dVar4 * dVar10;
    dVar8 = -dVar3 * dVar10;
    dVar7 = -dVar2 * dVar10;
    dVar5 = -dVar1 * dVar10;
  }
  param_1[10] = dVar5;
  param_1[0xb] = dVar7;
  param_1[0xc] = dVar8;
  param_1[0xd] = dVar9;
  param_1[0xe] = param_1[7];
  param_1[0xf] = param_1[8];
  param_1[0x10] = param_1[9];
  lVar6 = 0;
  do {
    dVar1 = param_1[lVar6 + 0xe];
    param_1[lVar6 + 0xe] =
         (double)(~-(ulonglong)(ABS(dVar1) < 1e-06) & (ulonglong)(1.0 / dVar1) |
                 *(ulonglong *)(&DAT_14ae73100 + (ulonglong)(dVar1 < 0.0) * 8) &
                 -(ulonglong)(ABS(dVar1) < 1e-06));
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  return;
}



// FUNCTION 14835700e FUN_14835700e body=671 status=ok
// SIG undefined FUN_14835700e(void)

void FUN_14835700e(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  double *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (-1 < (int)param_2) {
    lVar13 = *(longlong *)(*param_1 + 8);
    if ((int)param_2 < *(int *)(lVar13 + 0x20) * 0x200 + *(int *)(lVar13 + 0x24)) {
      uVar12 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar13 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                             uVar12 * 2) - 1U) < 0xfffe) {
        lVar10 = *(longlong *)param_1[2];
        uVar14 = (ulonglong)param_2;
        if (*(char *)(lVar10 + uVar14) == '\0') {
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
          pdVar1 = (double *)(lVar13 + uVar12 * 0x18);
          lVar4 = *(longlong *)(param_1[1] + 8);
          dVar2 = *(double *)(*param_1 + 0x18);
          local_98 = dVar2 * *(double *)(lVar4 + uVar14 * 0x18) + *pdVar1;
          dStack_90 = *(double *)(lVar4 + 8 + uVar14 * 0x18) * dVar2 + pdVar1[1];
          local_88 = *(double *)(lVar4 + 0x10 + uVar14 * 0x18) * dVar2 +
                     *(double *)(lVar13 + 0x10 + uVar12 * 0x18);
          iVar3 = *(int *)(param_1[4] + 8);
          if ((longlong)iVar3 < 1) {
            bVar8 = 1;
          }
          else {
            bVar8 = 1;
            lVar13 = 0;
            do {
              lVar10 = *(longlong *)param_1[4];
              local_68 = *(double *)(lVar10 + 0x48 + lVar13) * local_88;
              local_70 = *(double *)(lVar10 + 0x40 + lVar13) * dStack_90;
              local_78 = *(double *)(lVar10 + 0x38 + lVar13) * local_98;
              FUN_146bed047(&local_60,lVar10 + lVar13,&local_78);
              local_a0 = local_50 + *(double *)(lVar10 + 0x30 + lVar13);
              local_a8 = local_58 + *(double *)(lVar10 + 0x28 + lVar13);
              local_b0 = local_60 + *(double *)(lVar10 + 0x20 + lVar13);
              if ((bVar8 & 1) == 0) {
                bVar8 = 0;
              }
              else {
                lVar4 = param_1[7];
                puVar5 = (undefined8 *)param_1[3];
                local_c8 = *(undefined8 *)param_1[6];
                uStack_c0 = ((undefined8 *)param_1[6])[1];
                puVar6 = (undefined4 *)param_1[5];
                local_d8 = *puVar6;
                uStack_d4 = puVar6[1];
                uStack_d0 = puVar6[2];
                uStack_cc = puVar6[3];
                pcVar7 = (code *)*puVar5;
                plVar11 = puVar5 + 4;
                if ((longlong *)puVar5[2] != (longlong *)0x0) {
                  plVar11 = (longlong *)puVar5[2];
                }
                uVar9 = (**(code **)(*plVar11 + 8))();
                local_f8 = &local_98;
                local_f0 = lVar10 + lVar13;
                local_e8 = lVar4;
                bVar8 = (*pcVar7)(uVar9,&local_d8,&local_c8,&local_b0);
              }
              lVar13 = lVar13 + 0x50;
            } while ((longlong)iVar3 * 0x50 != lVar13);
            lVar10 = *(longlong *)param_1[2];
          }
          *(byte *)(lVar10 + uVar14) = bVar8;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483572ae FUN_1483572ae body=96 status=ok
// SIG undefined FUN_1483572ae(void)

void FUN_1483572ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14835730e FUN_14835730e body=132 status=ok
// SIG undefined FUN_14835730e(void)

void FUN_14835730e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14835739c FUN_14835739c body=1216 status=ok
// SIG undefined FUN_14835739c(void)

void FUN_14835739c(longlong *param_1,uint param_2)

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
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  code *pcVar21;
  byte bVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  longlong local_1a0;
  longlong local_198;
  ulonglong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((int)param_2 < 0) goto LAB_1483574dc;
  lVar16 = *param_1;
  lVar25 = *(longlong *)(lVar16 + 8);
  if (*(int *)(lVar25 + 0x140) * 0x200 + *(int *)(lVar25 + 0x144) <= (int)param_2)
  goto LAB_1483574dc;
  uVar26 = (ulonglong)(param_2 >> 9);
  uVar27 = (ulonglong)(param_2 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar25 + 0x148) + uVar26 * 8) +
                                  uVar27 * 2) - 1U)) goto LAB_1483574dc;
  bVar22 = 1;
  if (*(int *)(lVar16 + 0x10) - 1U < 2) {
    lVar17 = *(longlong *)(*(longlong *)(lVar25 + 0x130) + uVar26 * 8);
    lVar18 = *(longlong *)param_1[1];
    if ((*(char *)(lVar18 + *(int *)(lVar17 + uVar27 * 0xc)) != '\x01') ||
       (*(char *)(lVar18 + *(int *)(lVar17 + uVar27 * 0xc + 4)) != '\x01')) goto LAB_1483574dc;
    bVar22 = *(byte *)(lVar18 + *(int *)(lVar17 + 8 + uVar27 * 0xc));
    if (bVar22 == 1) goto LAB_1483574b8;
  }
  else {
LAB_1483574b8:
    if (0 < *(int *)(param_1[4] + 8)) {
      FUN_146c13dec(lVar25,&local_128,param_2);
      if ((0 < (int)*(uint *)(param_1[4] + 8) & bVar22) == 1) {
        lVar25 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x10);
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x130) + uVar26 * 8);
        uVar14 = *(uint *)(lVar17 + uVar27 * 0xc);
        uVar15 = *(uint *)(lVar17 + 4 + uVar27 * 0xc);
        lVar18 = *(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8);
        uVar26 = (ulonglong)uVar14 & 0x1ff;
        dVar1 = *(double *)(lVar18 + uVar26 * 0x18);
        dVar2 = *(double *)(lVar18 + 8 + uVar26 * 0x18);
        dVar3 = *(double *)(lVar18 + 0x10 + uVar26 * 0x18);
        lVar18 = *(longlong *)(lVar25 + (ulonglong)(uVar15 >> 9) * 8);
        uVar26 = (ulonglong)uVar15 & 0x1ff;
        dVar4 = *(double *)(lVar18 + uVar26 * 0x18);
        dVar5 = *(double *)(lVar18 + 8 + uVar26 * 0x18);
        dVar6 = *(double *)(lVar18 + 0x10 + uVar26 * 0x18);
        uVar14 = *(uint *)(lVar17 + 8 + uVar27 * 0xc);
        lVar25 = *(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8);
        uVar26 = (ulonglong)uVar14 & 0x1ff;
        dVar7 = *(double *)(lVar25 + uVar26 * 0x18);
        dVar8 = *(double *)(lVar25 + 8 + uVar26 * 0x18);
        dVar9 = *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
        local_188 = (ulonglong)*(uint *)(param_1[4] + 8);
        uVar26 = 0;
        do {
          lVar25 = *(longlong *)param_1[4];
          dVar10 = *(double *)(lVar25 + uVar26 * 0x18);
          dVar11 = *(double *)(lVar25 + 8 + uVar26 * 0x18);
          dVar12 = *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
          dVar13 = *(double *)(lVar16 + 0x18);
          local_130 = local_118 * dVar13 + dVar9 * dVar12 + dVar6 * dVar11 + dVar3 * dVar10;
          local_138 = local_120 * dVar13 + dVar8 * dVar12 + dVar5 * dVar11 + dVar2 * dVar10;
          local_140 = dVar13 * local_128 + dVar12 * dVar7 + dVar11 * dVar4 + dVar10 * dVar1;
          if (0 < (longlong)*(int *)(param_1[3] + 8)) {
            local_180 = (longlong)*(int *)(param_1[3] + 8) * 0x50;
            lVar25 = 0;
            do {
              lVar17 = *(longlong *)param_1[3];
              local_100 = *(double *)(lVar17 + 0x48 + lVar25) * local_130;
              local_108 = *(double *)(lVar17 + 0x40 + lVar25) * local_138;
              local_110 = *(double *)(lVar17 + 0x38 + lVar25) * local_140;
              FUN_146bed047(&local_f8,lVar17 + lVar25,&local_110);
              local_148 = local_e8 + *(double *)(lVar17 + 0x30 + lVar25);
              local_150 = local_f0 + *(double *)(lVar17 + 0x28 + lVar25);
              local_158 = local_f8 + *(double *)(lVar17 + 0x20 + lVar25);
              if ((bVar22 & 1) == 0) {
                bVar22 = 0;
              }
              else {
                lVar18 = param_1[8];
                puVar19 = (undefined8 *)param_1[2];
                local_168 = *(undefined8 *)param_1[7];
                uStack_160 = ((undefined8 *)param_1[7])[1];
                puVar20 = (undefined4 *)param_1[6];
                local_178 = *puVar20;
                uStack_174 = puVar20[1];
                uStack_170 = puVar20[2];
                uStack_16c = puVar20[3];
                pcVar21 = (code *)*puVar19;
                plVar24 = puVar19 + 4;
                if ((longlong *)puVar19[2] != (longlong *)0x0) {
                  plVar24 = (longlong *)puVar19[2];
                }
                uVar23 = (**(code **)(*plVar24 + 8))();
                local_1a8 = &local_140;
                local_1a0 = lVar17 + lVar25;
                local_198 = lVar18;
                bVar22 = (*pcVar21)(uVar23,&local_178,&local_168,&local_158);
              }
              lVar25 = lVar25 + 0x50;
            } while (local_180 != lVar25);
          }
        } while (((bVar22 & 1) != 0) && (uVar26 = uVar26 + 1, uVar26 < local_188));
      }
    }
  }
  if ((bVar22 & 1) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)param_1[5] + (ulonglong)param_2 * 4) = 1;
    UNLOCK();
  }
LAB_1483574dc:
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14835785e FUN_14835785e body=86 status=ok
// SIG undefined FUN_14835785e(void)

void FUN_14835785e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1483578b4 FUN_1483578b4 body=96 status=ok
// SIG undefined FUN_1483578b4(void)

void FUN_1483578b4(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 148357914 FUN_148357914 body=92 status=ok
// SIG undefined FUN_148357914(void)

void FUN_148357914(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = 0;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          FUN_1400020a8();
        }
        FUN_1483525da(lVar2 + 8);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 148357970 FUN_148357970 body=132 status=ok
// SIG undefined FUN_148357970(void)

void FUN_148357970(longlong param_1,int param_2)

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



// FUNCTION 1483579f6 FUN_1483579f6 body=38 status=ok
// SIG undefined FUN_1483579f6(void)

undefined8 FUN_1483579f6(undefined8 param_1,int param_2)

{
  FUN_148359004();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148357a28 FUN_148357a28 body=174 status=ok
// SIG undefined FUN_148357a28(void)

undefined4 FUN_148357a28(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148357aba;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148357aba;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_1483590b8(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_148357aba:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148357adc FUN_148357adc body=133 status=ok
// SIG undefined FUN_148357adc(void)

bool FUN_148357adc(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
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
  FUN_1483594fc(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 148357b62 FUN_148357b62 body=76 status=ok
// SIG undefined FUN_148357b62(void)

void FUN_148357b62(longlong *param_1)

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



// FUNCTION 148357bb0 FUN_148357bb0 body=84 status=ok
// SIG undefined FUN_148357bb0(void)

undefined4 FUN_148357bb0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148357c06 FUN_148357c06 body=81 status=ok
// SIG undefined FUN_148357c06(void)

undefined8 FUN_148357c06(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return 0;
  }
  FUN_148359a3c(param_1,iVar1,param_2,param_3,param_4);
  if (*(int *)(param_3 + 1) == 0) {
    return 0;
  }
  FUN_148359e7d(*param_3);
  return 1;
}



// FUNCTION 148357c58 FUN_148357c58 body=165 status=ok
// SIG undefined FUN_148357c58(void)

undefined4 * FUN_148357c58(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

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
    FUN_14835a4fe(local_b0,param_1[1],iVar1);
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



// FUNCTION 148357cfe FUN_148357cfe body=134 status=ok
// SIG undefined FUN_148357cfe(void)

bool FUN_148357cfe(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148357d66;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148357d66:
    bVar1 = false;
    goto LAB_148357d68;
  }
  *param_4 = -1;
  local_20 = param_5;
  local_28 = param_4;
  FUN_14835a60c(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
  bVar1 = *param_4 != -1;
LAB_148357d68:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148357d86 FUN_148357d86 body=171 status=ok
// SIG undefined FUN_148357d86(void)

undefined4
FUN_148357d86(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148357e15;
  }
  else {
    uVar1 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148357e15;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_14835a8e4(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_148357e15:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148357e32 FUN_148357e32 body=70 status=ok
// SIG undefined FUN_148357e32(void)

undefined8 FUN_148357e32(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (iVar1 < 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
    return 0;
  }
  dVar3 = *param_3;
  if (3.4028234663852886e+38 <= dVar3) {
    dVar3 = 3.4028234663852886e+38;
  }
  uVar2 = FUN_14835ac20(param_1,iVar1,param_2,dVar3,param_3);
  return uVar2;
}



// FUNCTION 148357e78 FUN_148357e78 body=287 status=ok
// SIG undefined FUN_148357e78(void)

undefined8 *
FUN_148357e78(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148357f5b;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148357f5b:
    *param_2 = 0xffffffffffffffff;
    goto LAB_148357f62;
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
  FUN_14835b0a6();
  if (local_38 < 1.79769313486232e+308) {
    if (local_38 < 0.0) {
      dVar2 = sqrt(local_38);
    }
    else {
      dVar2 = SQRT(local_38);
    }
  }
  *param_5 = dVar2;
LAB_148357f62:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148357f98 FUN_148357f98 body=394 status=ok
// SIG undefined FUN_148357f98(void)

void FUN_148357f98(longlong *param_1,undefined8 *param_2,longlong param_3)

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
    if ((int)uVar3 < 0) goto LAB_1483580e5;
  }
  else if (param_1[2] != 1) goto LAB_1483580e5;
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
LAB_1483580e5:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148358124 FUN_148358124 body=1281 status=ok
// SIG undefined FUN_148358124(void)

void FUN_148358124(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
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
LAB_148358266:
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
          if (cVar7 != '\0') goto LAB_148358266;
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



// FUNCTION 148358626 FUN_148358626 body=191 status=ok
// SIG undefined FUN_148358626(void)

bool FUN_148358626(longlong param_1,longlong param_2,longlong param_3)

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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_1483586bd;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_1483586bd:
    bVar2 = false;
    goto LAB_1483586bf;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_14835c2ae;
  local_80 = param_3;
  iVar1 = FUN_14835be9c(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_1483586bf:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483586e6 FUN_1483586e6 body=164 status=ok
// SIG undefined FUN_1483586e6(void)

undefined8
FUN_1483586e6(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_14835876c;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_14835876c:
    uVar1 = 0;
    goto LAB_14835876e;
  }
  local_18 = &local_28;
  local_48 = &local_20;
  local_20 = &LAB_14835cce2;
  local_58 = *(undefined4 *)(param_2 + 0xcc);
  local_38 = param_5;
  local_50 = 0;
  local_40 = param_4;
  local_28 = param_1;
  uVar1 = FUN_14835c2c2();
LAB_14835876e:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835878c FUN_14835878c body=1030 status=ok
// SIG undefined FUN_14835878c(void)

uint FUN_14835878c(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_158 [36];
  uint local_134;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
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
  iVar5 = *(int *)((longlong)param_1 + 0xcc);
  local_130 = param_2;
  if ((iVar5 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < iVar5) goto LAB_1483587e9;
  }
  else if (param_1[2] == 1) {
LAB_1483587e9:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14ae73d70;
        local_88 = FUN_14835ccf6;
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
        iVar5 = *(int *)((longlong)param_1 + 0xcc);
      }
      cVar10 = FUN_14835c1ee(param_1,iVar5,param_3);
      if (cVar10 == '\0') goto LAB_1483587de;
    }
    uVar16 = (ulonglong)*(int *)(local_130[1] + 8);
    if ((longlong)uVar16 < 1) {
      local_134 = 0;
      uVar11 = local_134;
    }
    else {
      plVar1 = param_4 + 4;
      local_110 = -uVar16;
      local_134 = (uint)CONCAT71((int7)((ulonglong)local_110 >> 8),1);
      uVar17 = 1;
      plVar14 = local_130;
      local_128 = param_1;
      local_120 = plVar1;
      local_118 = uVar16;
      do {
        pcVar8 = (code *)*param_4;
        lVar13 = *plVar14;
        uVar11 = *(uint *)(*(longlong *)plVar14[1] + -4 + uVar17 * 4);
        puVar2 = (uint *)(*(longlong *)
                           (*(longlong *)(lVar13 + 0x130) + (ulonglong)(uVar11 >> 9) * 8) +
                         (ulonglong)(uVar11 & 0x1ff) * 0xc);
        uVar11 = *puVar2;
        if (pcVar8 == (code *)0x0) {
          lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_c8 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          puVar4 = (undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          local_d8 = *puVar4;
          uStack_d0 = puVar4[1];
          lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(puVar2[1] >> 9) * 8);
          uVar18 = (ulonglong)puVar2[1] & 0x1ff;
          uStack_b0 = *(undefined8 *)(lVar9 + 0x10 + uVar18 * 0x18);
          puVar4 = (undefined8 *)(lVar9 + uVar18 * 0x18);
          uStack_c0 = *puVar4;
          uStack_b8 = puVar4[1];
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(puVar2[2] >> 9) * 8);
          uVar18 = (ulonglong)puVar2[2] & 0x1ff;
          local_98 = *(undefined8 *)(lVar13 + 0x10 + uVar18 * 0x18);
          puVar3 = (undefined4 *)(lVar13 + uVar18 * 0x18);
          local_a8 = *puVar3;
          uStack_a4 = puVar3[1];
          uStack_a0 = puVar3[2];
          uStack_9c = puVar3[3];
        }
        else {
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar13 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          puVar3 = (undefined4 *)(lVar13 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          plVar14 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar14 = plVar1;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          (*pcVar8)(&local_f0,uVar12,&local_108);
          plVar14 = local_130;
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          lVar13 = *(longlong *)(*(longlong *)(*local_130 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          uVar16 = (ulonglong)uVar6 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar13 + 0x10 + uVar16 * 0x18);
          puVar3 = (undefined4 *)(lVar13 + uVar16 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar8 = (code *)*param_4;
          plVar15 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          uVar12 = (**(code **)(*plVar15 + 8))();
          (*pcVar8)(&local_f0,uVar12,&local_108);
          uVar16 = local_118;
          param_1 = local_128;
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          lVar13 = *(longlong *)(*(longlong *)(*plVar14 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar18 = (ulonglong)uVar7 & 0x1ff;
          local_f8 = *(undefined8 *)(lVar13 + 0x10 + uVar18 * 0x18);
          puVar3 = (undefined4 *)(lVar13 + uVar18 * 0x18);
          local_108 = *puVar3;
          uStack_104 = puVar3[1];
          uStack_100 = puVar3[2];
          uStack_fc = puVar3[3];
          pcVar8 = (code *)*param_4;
          plVar15 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          uVar12 = (**(code **)(*plVar15 + 8))();
          (*pcVar8)(&local_f0,uVar12,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        uVar12 = (**(code **)(*param_1 + 0x88))(param_1,&local_d8,param_5);
        uVar11 = local_134;
        if ((char)uVar12 != '\0') break;
        local_134 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),uVar17 < uVar16);
        lVar13 = local_110 + uVar17;
        uVar17 = uVar17 + 1;
        uVar11 = local_134;
      } while (lVar13 != 0);
    }
    goto LAB_148358ae1;
  }
LAB_1483587de:
  uVar11 = 0;
LAB_148358ae1:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 148358b94 FUN_148358b94 body=528 status=ok
// SIG undefined FUN_148358b94(void)

undefined8 *
FUN_148358b94(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
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
    param_7[5] = (longlong)FUN_14835d818;
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
    if (iVar1 < 0) goto LAB_148358c57;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148358c57;
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_14835cd7c(param_1,iVar1,param_3,param_4);
LAB_148358c57:
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



// FUNCTION 148358da6 FUN_148358da6 body=454 status=ok
// SIG undefined FUN_148358da6(void)

undefined8 *
FUN_148358da6(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
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
    param_5[5] = (longlong)FUN_14835de64;
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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148358e37;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) goto LAB_148358e37;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_14835dcf8(param_1,param_2,param_3);
LAB_148358e37:
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



// FUNCTION 148358f6e FUN_148358f6e body=119 status=ok
// SIG undefined FUN_148358f6e(void)

undefined8 FUN_148358f6e(longlong param_1,undefined4 param_2,longlong param_3)

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
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_148358fc8;
  }
  else if (*(longlong *)(param_1 + 0x10) != 1) {
LAB_148358fc8:
    uVar1 = 0;
    goto LAB_148358fca;
  }
  local_10 = &local_19;
  local_18 = FUN_14835e978;
  local_28 = param_3;
  uVar1 = FUN_14835dcf8(param_1,0,param_2);
LAB_148358fca:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148359004 FUN_148359004 body=180 status=ok
// SIG undefined FUN_148359004(void)

void FUN_148359004(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ae73c90;
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
                    /* WARNING: Could not recover jumptable at 0x0001483590ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1483590b8 FUN_1483590b8 body=660 status=ok
// SIG undefined FUN_1483590b8(void)

void FUN_1483590b8(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
                  undefined4 *param_5,longlong param_6)

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
      dVar10 = (double)FUN_148359466(param_1,~uVar7,local_80);
      uVar7 = ~uVar7;
      if (*local_88 < dVar10) goto LAB_14835931b;
    }
    else {
      uVar7 = uVar7 - 1;
      uVar9 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar9 + 1 >> 9) * 8) +
                      (ulonglong)(uVar9 + 1 & 0x1ff) * 4) - 1;
      dVar10 = (double)FUN_148359466(param_1,uVar7,local_80);
      dVar11 = (double)FUN_148359466(param_1,uVar9,uVar5);
      pdVar3 = local_88;
      if (dVar11 <= dVar10) {
        if (*local_88 <= dVar11) goto LAB_14835931b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_1483590b8(param_1,uVar9,local_80,local_88);
        if (*pdVar3 <= dVar10) goto LAB_14835931b;
      }
      else {
        if (*local_88 <= dVar10) goto LAB_14835931b;
        local_90 = param_6;
        local_98 = param_5;
        FUN_1483590b8(param_1,uVar7,local_80,local_88);
        uVar7 = uVar9;
        if (*pdVar3 <= dVar11) goto LAB_14835931b;
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
LAB_1483592e7:
        dVar10 = (double)FUN_14835934e(*(undefined8 *)(param_1 + 8),uVar1,local_80);
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
        if (cVar4 != '\0') goto LAB_1483592e7;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
LAB_14835931b:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14835934e FUN_14835934e body=279 status=ok
// SIG undefined FUN_14835934e(void)

void FUN_14835934e(longlong *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
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
  uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  lVar4 = *(longlong *)(*param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)uVar1 & 0x1ff;
  uVar1 = *(uint *)(lVar2 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar5 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[0] = *puVar5;
  local_68[1] = puVar5[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar7 * 0xc);
  lVar3 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
  uVar8 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  puVar5 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_68[3] = *puVar5;
  uStack_48 = puVar5[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar7 * 0xc);
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
  puVar5 = (undefined8 *)(lVar4 + uVar7 * 0x18);
  local_38 = *puVar5;
  uStack_30 = puVar5[1];
  local_e8 = *(undefined8 *)(param_3 + 4);
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  puVar5 = local_68;
  puVar6 = local_e0;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_146bd2a7a(&local_f8);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148359466 FUN_148359466 body=150 status=ok
// SIG undefined FUN_148359466(void)

double FUN_148359466(longlong param_1,uint param_2,double *param_3)

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



// FUNCTION 1483594fc FUN_1483594fc body=1035 status=ok
// SIG undefined FUN_1483594fc(void)

void FUN_1483594fc(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                  undefined4 *param_6,longlong param_7)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
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
        dVar17 = (double)FUN_148359908(param_1,uVar10,local_178);
        bVar16 = *param_4 + 1e-08 < dVar17;
LAB_1483597ba:
        uVar13 = (ulonglong)uVar10;
        if (bVar16) goto LAB_1483598c1;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                         (ulonglong)(uVar15 + 1 & 0x1ff) * 4) - 1;
        uVar13 = (ulonglong)uVar15;
        dVar17 = (double)FUN_148359908(param_1,uVar10,param_3);
        dVar18 = (double)FUN_148359908(param_1,uVar13,param_3);
        if (dVar18 <= dVar17) {
          if (dVar18 <= *param_4 + 1e-08) {
            local_188 = param_7;
            local_190 = param_6;
            local_198 = param_5;
            FUN_1483594fc(param_1,uVar15,local_178,param_4);
            bVar16 = *param_4 + 1e-08 < dVar17;
            goto LAB_1483597ba;
          }
          goto LAB_1483598c1;
        }
        if (*param_4 + 1e-08 < dVar17) goto LAB_1483598c1;
        local_188 = param_7;
        local_190 = param_6;
        local_198 = param_5;
        FUN_1483594fc(param_1,uVar10,local_178,param_4);
        if (*param_4 + 1e-08 < dVar18) goto LAB_1483598c1;
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
LAB_14835960f:
        lVar8 = **(longlong **)(param_1 + 8);
        uVar10 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar1 * 4);
        lVar3 = *(longlong *)(lVar8 + 0x10);
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + (ulonglong)(uVar10 >> 9) * 8);
        uVar13 = (ulonglong)uVar10 & 0x1ff;
        uVar10 = *(uint *)(lVar8 + uVar13 * 0xc);
        lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar10 >> 9) * 8);
        uVar14 = (ulonglong)uVar10 & 0x1ff;
        local_c8[2] = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[0] = *puVar11;
        local_c8[1] = puVar11[1];
        uVar10 = *(uint *)(lVar8 + 4 + uVar13 * 0xc);
        lVar4 = *(longlong *)(lVar3 + (ulonglong)(uVar10 >> 9) * 8);
        uVar14 = (ulonglong)uVar10 & 0x1ff;
        local_a0 = *(undefined8 *)(lVar4 + 0x10 + uVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar4 + uVar14 * 0x18);
        local_c8[3] = *puVar11;
        uStack_a8 = puVar11[1];
        uVar10 = *(uint *)(lVar8 + 8 + uVar13 * 0xc);
        lVar8 = *(longlong *)(lVar3 + (ulonglong)(uVar10 >> 9) * 8);
        uVar13 = (ulonglong)uVar10 & 0x1ff;
        local_88 = *(undefined8 *)(lVar8 + 0x10 + uVar13 * 0x18);
        puVar11 = (undefined8 *)(lVar8 + uVar13 * 0x18);
        local_98 = *puVar11;
        uStack_90 = puVar11[1];
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
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        cVar5 = FUN_146bd80f0(&local_168);
        if ((cVar5 != '\0') && (local_f0 < *local_170)) {
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
        plVar7 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar7 = (longlong *)(param_7 + 0x30);
        }
        local_168 = iVar1;
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar2)(uVar6,&local_168);
        if (cVar5 != '\0') goto LAB_14835960f;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
LAB_1483598c1:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148359908 FUN_148359908 body=307 status=ok
// SIG undefined FUN_148359908(void)

void FUN_148359908(longlong param_1,uint param_2,undefined8 param_3)

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



// FUNCTION 148359a3c FUN_148359a3c body=1088 status=ok
// SIG undefined FUN_148359a3c(void)

void FUN_148359a3c(longlong param_1,uint param_2,int *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
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
        dVar2 = (double)FUN_148359908(param_1,uVar14,local_1b8);
        bVar20 = (double)CONCAT44(uVar24,uVar23) + 1e-08 < dVar2;
LAB_148359d41:
        uVar17 = (ulonglong)uVar14;
        if (bVar20) goto LAB_148359e15;
      }
      else {
        uVar14 = uVar14 - 1;
        uVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                         (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
        uVar17 = (ulonglong)uVar19;
        dVar21 = (double)FUN_148359908(param_1,uVar14,param_3);
        dVar22 = (double)FUN_148359908(param_1,uVar17,param_3);
        dVar2 = (double)CONCAT44(uVar24,uVar23) + 1e-08;
        if (dVar22 <= dVar21) {
          if (dVar22 <= dVar2) {
            local_1c8 = param_5;
            FUN_148359a3c(param_1,uVar19,local_1b8,param_4);
            bVar20 = dVar2 < dVar21;
            goto LAB_148359d41;
          }
          goto LAB_148359e15;
        }
        if (dVar2 < dVar21) goto LAB_148359e15;
        local_1c8 = param_5;
        FUN_148359a3c(param_1,uVar14,local_1b8,param_4);
        if (dVar2 < dVar22) goto LAB_148359e15;
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
LAB_148359b6b:
        lVar12 = **(longlong **)(param_1 + 8);
        uVar14 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar3 * 4);
        lVar6 = *(longlong *)(lVar12 + 0x10);
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
        uVar17 = (ulonglong)uVar14 & 0x1ff;
        uVar14 = *(uint *)(lVar12 + uVar17 * 0xc);
        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar14 >> 9) * 8);
        uVar18 = (ulonglong)uVar14 & 0x1ff;
        local_e8[2] = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar15 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[0] = *puVar15;
        local_e8[1] = puVar15[1];
        uVar14 = *(uint *)(lVar12 + 4 + uVar17 * 0xc);
        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar14 >> 9) * 8);
        uVar18 = (ulonglong)uVar14 & 0x1ff;
        local_c0 = *(undefined8 *)(lVar7 + 0x10 + uVar18 * 0x18);
        puVar15 = (undefined8 *)(lVar7 + uVar18 * 0x18);
        local_e8[3] = *puVar15;
        uStack_c8 = puVar15[1];
        uVar14 = *(uint *)(lVar12 + 8 + uVar17 * 0xc);
        lVar12 = *(longlong *)(lVar6 + (ulonglong)(uVar14 >> 9) * 8);
        uVar17 = (ulonglong)uVar14 & 0x1ff;
        local_a8 = *(undefined8 *)(lVar12 + 0x10 + uVar17 * 0x18);
        puVar15 = (undefined8 *)(lVar12 + uVar17 * 0x18);
        local_b8 = *puVar15;
        uStack_b0 = puVar15[1];
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
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        cVar9 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar8 = local_1b0;
        if ((cVar9 != '\0') && (local_110 <= (double)CONCAT44(uVar24,uVar23) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar4 = (int)local_1b0[1];
          lVar12 = (longlong)iVar4;
          *(uint *)(local_1b0 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar4 + 1U) {
            FUN_146bd88d8(local_1b0,iVar4);
          }
          lVar6 = *plVar8;
          *(int *)(lVar6 + lVar12 * 0x28) = iVar3;
          *(double *)(lVar6 + 8 + lVar12 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar12 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar6 + 0x20 + lVar12 * 0x28) = local_198;
        }
      }
      else {
        pdVar11 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar11 = param_5 + 6;
        }
        local_188 = iVar3;
        uVar10 = (**(code **)((longlong)*pdVar11 + 8))();
        cVar9 = (*pcVar5)(uVar10,&local_188);
        if (cVar9 != '\0') goto LAB_148359b6b;
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_148359e15:
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148359e7d FUN_148359e7d body=946 status=ok
// SIG undefined FUN_148359e7d(void)

void FUN_148359e7d(longlong param_1,uint param_2)

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
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = param_1 + (ulonglong)param_2 * 0x28 + -0x28;
    local_368 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar24 + fVar24);
    plVar17 = &local_368;
    do {
      puVar10 = (undefined8 *)*plVar17;
      puVar18 = (undefined8 *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar11 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar10) >> 3);
      puVar21 = puVar18;
      puVar22 = puVar10;
      if (iVar20 != 0) {
LAB_148359f46:
        uVar13 = iVar11 * -0x33333333 + 1;
        if (8 < (int)uVar13) {
          uVar14 = (ulonglong)(uVar13 >> 1);
          uVar1 = puVar10[uVar14 * 5 + 4];
          uVar2 = puVar10[uVar14 * 5];
          uVar3 = (puVar10 + uVar14 * 5)[1];
          uVar4 = puVar10[uVar14 * 5 + 2];
          uVar5 = (puVar10 + uVar14 * 5 + 2)[1];
          puVar10[uVar14 * 5 + 4] = puVar10[4];
          uVar6 = *puVar10;
          uVar7 = puVar10[1];
          uVar8 = puVar10[3];
          puVar10[uVar14 * 5 + 2] = puVar10[2];
          (puVar10 + uVar14 * 5 + 2)[1] = uVar8;
          puVar10[uVar14 * 5] = uVar6;
          (puVar10 + uVar14 * 5)[1] = uVar7;
          puVar10[4] = uVar1;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar15 = puVar18 + 5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar12 + 5;
            puVar19 = puVar12 + 5;
            do {
              puVar12 = puVar19;
              puVar16 = puVar9;
              if (puVar18 < puVar12) break;
              puVar9 = puVar16 + 5;
              puVar19 = puVar12 + 5;
            } while ((double)puVar12[1] < (double)puVar10[1] ||
                     (double)puVar12[1] == (double)puVar10[1]);
            puVar9 = puVar15 + -10;
            do {
              puVar19 = puVar15;
              puVar23 = puVar9;
              puVar15 = puVar19 + -5;
              if (puVar15 <= puVar10) break;
              puVar9 = puVar23 + -5;
            } while ((double)puVar10[1] < (double)puVar19[-4] ||
                     (double)puVar10[1] == (double)puVar19[-4]);
            if (puVar15 < puVar12) goto LAB_14835a079;
            uVar1 = puVar12[4];
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            puVar12[4] = puVar19[-1];
            uVar6 = *puVar15;
            uVar7 = puVar19[-4];
            uVar8 = puVar19[-2];
            puVar12[2] = puVar19[-3];
            puVar12[3] = uVar8;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar19[-1] = uVar1;
            puVar19[-3] = uVar4;
            puVar19[-2] = uVar5;
            *puVar15 = uVar2;
            puVar19[-4] = uVar3;
          } while( true );
        }
        for (; puVar22 = puVar10, puVar21 = puVar10, puVar10 < puVar18; puVar18 = puVar18 + -5) {
          while (puVar15 = puVar22, puVar21 = puVar21 + 5, puVar21 <= puVar18) {
            puVar22 = puVar21;
            if ((double)puVar21[1] < (double)puVar15[1] || (double)puVar21[1] == (double)puVar15[1])
            {
              puVar22 = puVar15;
            }
          }
          local_48 = puVar15[4];
          local_68 = *puVar15;
          uStack_60 = puVar15[1];
          local_58 = puVar15[2];
          uStack_50 = puVar15[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          puVar15[4] = puVar18[4];
          uVar1 = *puVar18;
          uVar2 = puVar18[1];
          uVar3 = puVar18[3];
          puVar15[2] = puVar18[2];
          puVar15[3] = uVar3;
          *puVar15 = uVar1;
          puVar15[1] = uVar2;
          puVar18[4] = local_48;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar18[2] = local_58;
          puVar18[3] = uStack_50;
          *(undefined4 *)puVar18 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_14835a20e;
      }
LAB_14835a223:
      FUN_14835a230(puVar10);
LAB_14835a20e:
      plVar17 = plVar17 + -3;
    } while (&local_368 <= plVar17);
  }
  if ((local_38 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14835a079:
  local_48 = puVar10[4];
  local_68 = *puVar10;
  uStack_60 = puVar10[1];
  local_58 = puVar10[2];
  uStack_50 = puVar10[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  puVar10[4] = puVar19[-1];
  uVar1 = *puVar15;
  uVar2 = puVar19[-4];
  uVar3 = puVar19[-2];
  puVar10[2] = puVar19[-3];
  puVar10[3] = uVar3;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar19[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar19[-3] = local_58;
  puVar19[-2] = uStack_50;
  *(undefined4 *)puVar15 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar19 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar19 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar19 + -0x1c) = uStack_60._4_4_;
  iVar20 = iVar20 + -1;
  puVar19 = puVar19 + -10;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar23 - (longlong)puVar22 < (longlong)puVar21 - (longlong)puVar16) {
    if (puVar12 < puVar18) {
      *plVar17 = (longlong)puVar12;
      plVar17[1] = (longlong)puVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 5) goto LAB_14835a20e;
  }
  else {
    if (puVar10 + 5 < puVar15) {
      *plVar17 = (longlong)puVar10;
      plVar17[1] = (longlong)puVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    puVar10 = puVar12;
    puVar19 = puVar18;
    puVar23 = puVar18;
    if (puVar18 <= puVar12) goto LAB_14835a20e;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar23 - (longlong)puVar16) >> 3);
  puVar18 = puVar19;
  puVar21 = puVar23;
  puVar22 = puVar16;
  if (iVar20 == 0) goto LAB_14835a223;
  goto LAB_148359f46;
}



// FUNCTION 14835a230 FUN_14835a230 body=717 status=ok
// SIG undefined FUN_14835a230(void)

void FUN_14835a230(undefined8 *param_1,uint param_2)

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
joined_r0x00014835a264:
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
          goto joined_r0x00014835a264;
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



// FUNCTION 14835a4fe FUN_14835a4fe body=268 status=ok
// SIG undefined FUN_14835a4fe(void)

undefined4 *
FUN_14835a4fe(undefined4 *param_1,longlong *param_2,ulonglong param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68 [4];
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(*(longlong *)param_2[1] + (param_3 & 0xffffffff) * 4);
  lVar7 = *(longlong *)(*param_2 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  uVar10 = (ulonglong)uVar1 & 0x1ff;
  uVar1 = *(uint *)(lVar2 + uVar10 * 0xc);
  lVar3 = *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_68[2] = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar8 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[0] = *puVar8;
  local_68[1] = puVar8[1];
  uVar1 = *(uint *)(lVar2 + 4 + uVar10 * 0xc);
  lVar3 = *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8);
  uVar11 = (ulonglong)uVar1 & 0x1ff;
  local_40 = *(undefined8 *)(lVar3 + 0x10 + uVar11 * 0x18);
  puVar8 = (undefined8 *)(lVar3 + uVar11 * 0x18);
  local_68[3] = *puVar8;
  uStack_48 = puVar8[1];
  uVar1 = *(uint *)(lVar2 + 8 + uVar10 * 0xc);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 9) * 8);
  uVar10 = (ulonglong)uVar1 & 0x1ff;
  local_28 = *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18);
  puVar8 = (undefined8 *)(lVar7 + uVar10 * 0x18);
  local_38 = *puVar8;
  uStack_30 = puVar8[1];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  puVar8 = local_68;
  puVar9 = (undefined8 *)(param_1 + 6);
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_146bd2a7a(param_1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835a60c FUN_14835a60c body=726 status=ok
// SIG undefined FUN_14835a60c(void)

ulonglong FUN_14835a60c(longlong param_1,uint param_2,undefined8 param_3,double *param_4,
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
LAB_14835a6f4:
          dVar12 = (double)FUN_14835934e(*(undefined8 *)(param_1 + 8),uVar1,local_88);
          if (dVar12 < *local_80) {
            *local_80 = dVar12;
            *param_5 = uVar1;
            uVar9 = CONCAT71((int7)((ulonglong)&local_74 >> 8),1);
            goto LAB_14835a753;
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
          if (cVar3 != '\0') goto LAB_14835a6f4;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)unaff_R14 >> 8);
    if ((int)uVar6 < 0) {
      dVar12 = (double)FUN_148359466(param_1,~uVar6,param_3);
      if (dVar12 <= *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_14835a60c(param_1,~uVar6,local_88,param_4);
LAB_14835a8d6:
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_14835a753;
      }
    }
    else {
      iVar7 = uVar6 - 1;
      iVar11 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4) + -1;
      dVar12 = (double)FUN_148359466(param_1,iVar7,param_3);
      dVar13 = (double)FUN_148359466(param_1,iVar11,param_3);
      if (dVar13 <= dVar12) {
        if (dVar13 < *param_4) {
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_14835a60c(param_1,iVar11,local_88,param_4);
          uVar9 = CONCAT71(uVar10,1);
          if (cVar3 != '\0') goto LAB_14835a753;
          iVar11 = iVar7;
          if (dVar12 < *param_4) goto LAB_14835a8a0;
        }
      }
      else if (dVar12 < *param_4) {
        local_90 = param_6;
        local_98 = param_5;
        cVar3 = FUN_14835a60c(param_1,iVar7,local_88,param_4);
        uVar9 = CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_14835a753;
        if (dVar13 < *param_4) {
LAB_14835a8a0:
          local_90 = param_6;
          local_98 = param_5;
          cVar3 = FUN_14835a60c(param_1,iVar11,local_88,param_4);
          goto LAB_14835a8d6;
        }
      }
    }
  }
  uVar9 = 0;
LAB_14835a753:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14835a8e4 FUN_14835a8e4 body=826 status=ok
// SIG undefined FUN_14835a8e4(void)

void FUN_14835a8e4(longlong param_1,uint param_2,double *param_3,double *param_4,uint *param_5,
                  longlong param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar10) {
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar9 < 0) {
      dVar13 = (double)FUN_148359466(param_1,~uVar9,param_3);
      uVar9 = ~uVar9;
      if (*param_4 < dVar13) goto LAB_14835abea;
    }
    else {
      uVar9 = uVar9 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_148359466(param_1,uVar9,param_3);
      dVar14 = (double)FUN_148359466(param_1,uVar10,param_3);
      if (dVar14 <= dVar13) {
        if (*param_4 <= dVar14) goto LAB_14835abea;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_14835a8e4(param_1,uVar10,param_3,param_4);
        if (*param_4 <= dVar13) goto LAB_14835abea;
      }
      else {
        if (*param_4 <= dVar13) goto LAB_14835abea;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_14835a8e4(param_1,uVar9,param_3,param_4);
        uVar9 = uVar10;
        if (*param_4 <= dVar14) goto LAB_14835abea;
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
LAB_14835ab1f:
        uVar9 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar1 * 4);
        lVar7 = *(longlong *)
                 (*(longlong *)(**(longlong **)(param_1 + 8) + 0x130) + (ulonglong)(uVar9 >> 9) * 8)
        ;
        uVar6 = (ulonglong)(uVar9 & 0x1ff);
        local_78 = *(undefined4 *)(lVar7 + 8 + uVar6 * 0xc);
        local_80 = *(undefined8 *)(lVar7 + uVar6 * 0xc);
        lVar7 = 0;
        do {
          uVar9 = *(uint *)((longlong)&local_80 + lVar7 * 4);
          lVar3 = *(longlong *)
                   (*(longlong *)(**(longlong **)(param_1 + 8) + 0x10) + (ulonglong)(uVar9 >> 9) * 8
                   );
          uVar6 = (ulonglong)(uVar9 & 0x1ff);
          dVar14 = *param_3 - *(double *)(lVar3 + uVar6 * 0x18);
          dVar15 = param_3[1] - *(double *)(lVar3 + 8 + uVar6 * 0x18);
          dVar13 = param_3[2] - *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
          dVar13 = dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar13 < *param_4) {
            *param_4 = dVar13;
            *param_5 = uVar9;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
      }
      else {
        local_80 = CONCAT44(local_80._4_4_,iVar1);
        plVar8 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar8 = local_88;
        }
        uVar5 = (**(code **)(*plVar8 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_80);
        if (cVar4 != '\0') goto LAB_14835ab1f;
      }
      bVar12 = iVar11 != local_8c;
      iVar11 = iVar11 + 1;
    } while (bVar12);
  }
LAB_14835abea:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14835ac20 FUN_14835ac20 body=1156 status=ok
// SIG undefined FUN_14835ac20(void)

ulonglong FUN_14835ac20(longlong param_1,uint param_2,int *param_3,double param_4,double *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  double *pdVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 unaff_RDI;
  undefined8 *puVar15;
  undefined7 uVar16;
  ulonglong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_228 [32];
  double *local_208;
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
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar18 < *(int *)(param_1 + 200)) {
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    if (0 < iVar12) {
      local_1f0 = param_3 + 6;
      do {
        uVar18 = uVar18 + 1;
        iVar13 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar3 = (code *)param_5[2];
        if (pcVar3 == (code *)0x0) {
LAB_14835ad3a:
          lVar10 = **(longlong **)(param_1 + 8);
          uVar2 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar13 * 4);
          lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
          uVar11 = (ulonglong)uVar2 & 0x1ff;
          uVar2 = *(uint *)(lVar4 + uVar11 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_198 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1a8 = *puVar14;
          uStack_1a0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 4 + uVar11 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_1b8 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_1c8 = *puVar14;
          uStack_1c0 = puVar14[1];
          uVar2 = *(uint *)(lVar4 + 8 + uVar11 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar11 = (ulonglong)uVar2 & 0x1ff;
          local_1d8 = *(undefined8 *)(lVar10 + 0x10 + uVar11 * 0x18);
          puVar1 = (undefined4 *)(lVar10 + uVar11 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_208 = (double *)&local_1e8;
          cVar7 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar7 != '\0') {
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
            puVar14 = local_188;
            puVar15 = local_108;
            for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar15 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar15 = puVar15 + 1;
            }
            cVar7 = FUN_146bd80f0(&local_138);
            if ((cVar7 != '\0') && (local_c0 < *param_5)) {
              uVar11 = CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
              goto LAB_14835af3b;
            }
          }
        }
        else {
          pdVar9 = (double *)param_5[4];
          if ((double *)param_5[4] == (double *)0x0) {
            pdVar9 = param_5 + 6;
          }
          local_138 = iVar13;
          uVar8 = (**(code **)((longlong)*pdVar9 + 8))();
          cVar7 = (*pcVar3)(uVar8,&local_138);
          if (cVar7 != '\0') goto LAB_14835ad3a;
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                     (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar6 = (double)FUN_148359908(param_1,~uVar2,param_3);
      if (dVar6 <= param_4 + 1e-08) {
        local_208 = param_5;
        cVar7 = FUN_14835ac20(param_1,~uVar2,local_1f8,param_4);
        uVar16 = (undefined7)((ulonglong)unaff_RDI >> 8);
LAB_14835b098:
        uVar11 = CONCAT71(uVar16,1);
        if (cVar7 != '\0') goto LAB_14835af3b;
      }
    }
    else {
      iVar13 = uVar2 - 1;
      iVar12 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                       (ulonglong)(uVar18 + 1 & 0x1ff) * 4) + -1;
      dVar19 = (double)FUN_148359908(param_1,iVar13,param_3);
      dVar20 = (double)FUN_148359908(param_1,iVar12,param_3);
      dVar6 = param_4 + 1e-08;
      uVar16 = (undefined7)((ulonglong)param_3 >> 8);
      if (dVar20 <= dVar19) {
        if (dVar20 <= dVar6) {
          local_208 = param_5;
          cVar7 = FUN_14835ac20(param_1,iVar12,local_1f8,param_4);
          iVar12 = iVar13;
          dVar20 = dVar19;
          goto joined_r0x00014835b052;
        }
      }
      else if (dVar19 <= dVar6) {
        local_208 = param_5;
        cVar7 = FUN_14835ac20(param_1,iVar13,local_1f8,param_4);
joined_r0x00014835b052:
        uVar11 = CONCAT71(uVar16,1);
        if (cVar7 != '\0') goto LAB_14835af3b;
        if (dVar20 <= dVar6) {
          local_208 = param_5;
          cVar7 = FUN_14835ac20(param_1,iVar12,local_1f8,param_4);
          goto LAB_14835b098;
        }
      }
    }
  }
  uVar11 = 0;
LAB_14835af3b:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835b0a6 FUN_14835b0a6 body=2690 status=ok
// SIG undefined FUN_14835b0a6(void)

void FUN_14835b0a6(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  int local_274;
  ulonglong local_270;
  ulonglong local_268;
  int local_25c;
  undefined8 *local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
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
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar18 = *(int *)(param_1 + 200);
  if (((int)uVar7 < iVar18) && ((int)uVar13 < *(int *)(param_3 + 200))) {
    local_274 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4);
    local_25c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                        + (ulonglong)(uVar13 & 0x1ff) * 4);
    local_210 = -1.0;
    local_268 = (ulonglong)uVar7;
    local_258 = param_4;
    if (0 < local_25c) {
      local_240 = (longlong *)(param_10 + 0x30);
      local_248 = param_4 + 4;
      local_268 = (ulonglong)(uVar7 + 1);
      uVar8 = 1;
      local_250 = param_3;
      local_238 = (ulonglong)uVar13;
      do {
        uVar7 = (int)uVar8 + (int)local_238;
        uVar7 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_250 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        local_270 = (ulonglong)uVar7;
        pcVar3 = *(code **)(param_10 + 0x10);
        local_230 = uVar8;
        if (pcVar3 == (code *)0x0) {
LAB_14835b276:
          plVar12 = local_248;
          puVar15 = local_258;
          lVar11 = **(longlong **)(local_250 + 8);
          uVar7 = *(uint *)(*(longlong *)(*(longlong **)(local_250 + 8))[1] +
                           (longlong)(int)local_270 * 4);
          lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          uVar7 = *(uint *)(lVar4 + uVar8 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar17 = (ulonglong)uVar7 & 0x1ff;
          local_108 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_118 = *puVar14;
          uStack_110 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 4 + uVar8 * 0xc);
          lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar17 = (ulonglong)uVar7 & 0x1ff;
          local_f0 = *(undefined8 *)(lVar5 + 0x10 + uVar17 * 0x18);
          puVar14 = (undefined8 *)(lVar5 + uVar17 * 0x18);
          local_100 = *puVar14;
          uStack_f8 = puVar14[1];
          uVar7 = *(uint *)(lVar4 + 8 + uVar8 * 0xc);
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar8 = (ulonglong)uVar7 & 0x1ff;
          local_d8 = *(undefined8 *)(lVar11 + 0x10 + uVar8 * 0x18);
          puVar1 = (uint *)(lVar11 + uVar8 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar3 = (code *)*local_258;
          if (pcVar3 != (code *)0x0) {
            plVar10 = (longlong *)local_258[2];
            if ((longlong *)local_258[2] == (longlong *)0x0) {
              plVar10 = local_248;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar3 = (code *)*puVar15;
            plVar10 = (longlong *)puVar15[2];
            if ((longlong *)puVar15[2] == (longlong *)0x0) {
              plVar10 = plVar12;
            }
            uVar9 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(&local_228,uVar9,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar14 = &local_118;
          puVar15 = local_1a8;
          for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar15 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
          }
          local_210 = -1.0;
          if (0 < local_274) {
            local_270 = local_270 << 0x20;
            uVar8 = local_268 & 0xffffffff;
            iVar18 = local_274;
            do {
              uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar8 >> 9) * 8) +
                               (ulonglong)((uint)uVar8 & 0x1ff) * 4);
              pcVar3 = *(code **)(param_9 + 0x10);
              if (pcVar3 == (code *)0x0) {
LAB_14835b4d3:
                lVar11 = **(longlong **)(param_1 + 8);
                uVar13 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] +
                                  (longlong)(int)uVar7 * 4);
                lVar4 = *(longlong *)(lVar11 + 0x10);
                lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)(uVar13 >> 9) * 8)
                ;
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                uVar13 = *(uint *)(lVar11 + uVar17 * 0xc);
                lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar13 >> 9) * 8);
                uVar16 = (ulonglong)uVar13 & 0x1ff;
                local_c8[2] = *(undefined8 *)(lVar5 + 0x10 + uVar16 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar16 * 0x18);
                local_c8[0] = *puVar14;
                local_c8[1] = puVar14[1];
                uVar13 = *(uint *)(lVar11 + 4 + uVar17 * 0xc);
                lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar13 >> 9) * 8);
                uVar16 = (ulonglong)uVar13 & 0x1ff;
                local_a0 = *(undefined8 *)(lVar5 + 0x10 + uVar16 * 0x18);
                puVar14 = (undefined8 *)(lVar5 + uVar16 * 0x18);
                local_c8[3] = *puVar14;
                uStack_a8 = puVar14[1];
                uVar13 = *(uint *)(lVar11 + 8 + uVar17 * 0xc);
                lVar11 = *(longlong *)(lVar4 + (ulonglong)(uVar13 >> 9) * 8);
                uVar17 = (ulonglong)uVar13 & 0x1ff;
                local_88 = *(undefined8 *)(lVar11 + 0x10 + uVar17 * 0x18);
                puVar2 = (undefined4 *)(lVar11 + uVar17 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                puVar14 = local_c8;
                puVar15 = local_160;
                for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                local_210 = -1.0;
                dVar21 = (double)FUN_146bd8e44(&local_210);
                if (dVar21 < *param_7) {
                  *param_7 = dVar21;
                  *param_8 = uVar7 | local_270;
                }
              }
              else {
                plVar12 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar12 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar7;
                uVar9 = (**(code **)(*plVar12 + 8))();
                cVar6 = (*pcVar3)(uVar9,&local_228);
                if (cVar6 != '\0') goto LAB_14835b4d3;
              }
              uVar8 = (ulonglong)((uint)uVar8 + 1);
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
        }
        else {
          plVar12 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar12 = local_240;
          }
          local_228 = uVar7;
          uVar9 = (**(code **)(*plVar12 + 8))();
          cVar6 = (*pcVar3)(uVar9,&local_228);
          if (cVar6 != '\0') goto LAB_14835b276;
        }
        uVar8 = (ulonglong)((int)local_230 + 1);
      } while ((int)local_230 != local_25c);
    }
    goto LAB_14835b622;
  }
  bVar19 = (param_6 & 1) == 0;
  if ((bVar19 || (int)uVar7 < iVar18) &&
      (*(int *)(param_3 + 200) <= (int)uVar13 || !bVar19 && (int)uVar7 >= iVar18)) {
    uVar8 = (ulonglong)((param_2 >> 9) << 3);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar8);
    lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar8);
    local_1e8 = *(double *)(lVar11 + 0x10 + lVar5);
    dVar21 = *(double *)(lVar4 + 0x10 + lVar5);
    local_200 = local_1e8 - dVar21;
    local_1f0 = *(double *)(lVar11 + 8 + lVar5);
    dVar22 = *(double *)(lVar4 + 8 + lVar5);
    local_208 = local_1f0 - dVar22;
    local_210 = *(double *)(lVar11 + lVar5) - *(double *)(lVar4 + lVar5);
    local_1e8 = local_1e8 + dVar21;
    local_1f0 = local_1f0 + dVar22;
    local_1f8 = *(double *)(lVar11 + lVar5) + *(double *)(lVar4 + lVar5);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8)
                       + (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      FUN_14835bb2a(param_3,local_c8,~param_5,param_4);
      dVar21 = (double)FUN_146bd8cba(local_c8,&local_210);
      param_5 = ~param_5;
      if (*param_7 <= dVar21) goto LAB_14835b622;
    }
    else {
      param_5 = param_5 - 1;
      uVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                      (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      FUN_14835bb2a(param_3,local_c8,param_5,param_4);
      FUN_14835bb2a(param_3,&local_118,uVar7,param_4);
      dVar22 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar23 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar23 < dVar22) {
        uVar13 = param_2;
        if (dVar23 < dVar21) goto LAB_14835ba5d;
        goto LAB_14835b97e;
      }
      if (dVar22 < dVar21) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_14835b0a6(param_1,param_2,param_3,param_4);
        uVar20 = SUB84(*param_7,0);
        uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      param_5 = uVar7;
      if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
      goto LAB_14835b622;
    }
  }
  else {
    FUN_14835bb2a(param_3,&local_210,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                       (ulonglong)(uVar7 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      dVar21 = (double)FUN_14835bd10(param_1,param_2,&local_210);
      if (*param_7 <= dVar21) goto LAB_14835b622;
    }
    else {
      uVar13 = param_2 - 1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4) - 1;
      dVar22 = (double)FUN_14835bd10(param_1,uVar13,&local_210);
      dVar23 = (double)FUN_14835bd10(param_1,param_2,&local_210);
      dVar21 = *param_7;
      uVar20 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (dVar22 <= dVar23) {
        if (dVar22 < dVar21) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_14835b0a6(param_1,uVar13,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar24,uVar20) < dVar23 || (double)CONCAT44(uVar24,uVar20) == dVar23)
        goto LAB_14835b622;
      }
      else {
        if (dVar23 < dVar21) {
          local_2a8 = param_5;
          uVar7 = local_2a8;
LAB_14835ba5d:
          local_2a8 = uVar7;
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          FUN_14835b0a6(param_1,param_2,param_3,param_4);
          uVar20 = SUB84(*param_7,0);
          uVar24 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
LAB_14835b97e:
        param_2 = uVar13;
        if ((double)CONCAT44(uVar24,uVar20) < dVar22 || (double)CONCAT44(uVar24,uVar20) == dVar22)
        goto LAB_14835b622;
      }
    }
  }
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = param_5;
  local_290 = param_8;
  local_288 = param_9;
  local_280 = param_10;
  FUN_14835b0a6(param_1,param_2,param_3,param_4);
LAB_14835b622:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14835bb2a FUN_14835bb2a body=484 status=ok
// SIG undefined FUN_14835bb2a(void)

double * FUN_14835bb2a(longlong param_1,double *param_2,uint param_3,longlong *param_4)

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
    local_68 = &PTR_LAB_14ae73d50;
    local_88 = FUN_14835be16;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835bd10 FUN_14835bd10 body=260 status=ok
// SIG undefined FUN_14835bd10(void)

void FUN_14835bd10(longlong param_1,uint param_2,undefined8 param_3)

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



// FUNCTION 14835be16 FUN_14835be16 body=62 status=ok
// SIG undefined FUN_14835be16(void)

undefined8 FUN_14835be16(undefined8 param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14835be7e FUN_14835be7e body=29 status=ok
// SIG undefined FUN_14835be7e(void)

undefined8 FUN_14835be7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835be9c FUN_14835be9c body=849 status=ok
// SIG undefined FUN_14835be9c(void)

int FUN_14835be9c(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
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
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar15 < *(int *)(param_1 + 200)) {
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                     (ulonglong)(uVar15 & 0x1ff) * 4);
    if (0 < iVar13) {
      do {
        uVar15 = uVar15 + 1;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8)
                        + (ulonglong)(uVar15 & 0x1ff) * 4);
        pcVar3 = *(code **)(param_6 + 0x10);
        if (pcVar3 == (code *)0x0) {
LAB_14835bf86:
          lVar4 = **(longlong **)(param_1 + 8);
          uVar14 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar8 * 4);
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x130) + (ulonglong)(uVar14 >> 9) * 8);
          uVar11 = (ulonglong)uVar14 & 0x1ff;
          uVar14 = *(uint *)(lVar5 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
          uVar12 = (ulonglong)uVar14 & 0x1ff;
          local_88 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          uVar14 = *(uint *)(lVar5 + 4 + uVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
          uVar12 = (ulonglong)uVar14 & 0x1ff;
          local_70 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          uVar14 = *(uint *)(lVar5 + 8 + uVar11 * 0xc);
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
          uVar11 = (ulonglong)uVar14 & 0x1ff;
          local_58 = *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18);
          puVar2 = (undefined4 *)(lVar4 + uVar11 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          cVar7 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar7 != '\0') goto LAB_14835c069;
        }
        else {
          plVar10 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar10 = (longlong *)(param_6 + 0x30);
          }
          local_9c = iVar8;
          uVar9 = (**(code **)(*plVar10 + 8))();
          cVar7 = (*pcVar3)(uVar9,&local_9c);
          if (cVar7 != '\0') goto LAB_14835bf86;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar8 = -1;
  }
  else {
    uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                      (ulonglong)(uVar15 & 0x1ff) * 4);
    if ((int)uVar14 < 0) {
      uVar14 = ~uVar14;
      cVar7 = FUN_14835c1ee(param_1,uVar14,param_4);
      iVar8 = -1;
      if (cVar7 == '\0') goto LAB_14835c069;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                       (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
      cVar7 = FUN_14835c1ee(param_1,uVar14 - 1,param_4);
      if (cVar7 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        iVar8 = FUN_14835be9c(param_1,uVar14 - 1,local_d8,param_4);
        if (iVar8 != -1) goto LAB_14835c069;
      }
      uVar14 = iVar13 - 1;
      cVar7 = FUN_14835c1ee(param_1,uVar14,param_4);
      iVar8 = -1;
      if (cVar7 == '\0') goto LAB_14835c069;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    iVar8 = FUN_14835be9c(param_1,uVar14,local_d8,param_4);
  }
LAB_14835c069:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835c1ee FUN_14835c1ee body=191 status=ok
// SIG undefined FUN_14835c1ee(void)

bool FUN_14835c1ee(longlong param_1,uint param_2,double *param_3)

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



// FUNCTION 14835c2c2 FUN_14835c2c2 body=2590 status=ok
// SIG undefined FUN_14835c2c2(void)

ulonglong FUN_14835c2c2(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
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
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 *puVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  int *piVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  int local_20c;
  int local_208;
  uint local_204;
  longlong local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0 [2];
  undefined8 local_190 [2];
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
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar27 = *(int *)(param_1 + 200);
  if (((int)uVar19 < iVar27) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_208 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_208) {
      local_20c = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                          (ulonglong)(uVar19 & 0x1ff) * 4);
      local_1e8 = (longlong *)(param_9 + 0x30);
      local_1f8 = param_4 + 4;
      local_1e0 = (longlong *)(param_8 + 0x30);
      local_1f0 = (ulonglong)(uVar19 + 1);
      uVar20 = 1;
      uVar25 = CONCAT71((uint7)(uint3)((uint)iVar27 >> 8),1);
      local_200 = param_3;
      local_1d8 = param_4;
      local_1d0 = (ulonglong)uVar8;
      do {
        local_204 = (uint)uVar25;
        uVar19 = (int)uVar20 + (int)local_1d0;
        iVar27 = *(int *)(*(longlong *)
                           (*(longlong *)(local_200 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        pcVar10 = *(code **)(param_9 + 0x10);
        local_1c8 = uVar20;
        if (pcVar10 == (code *)0x0) {
LAB_14835c497:
          puVar17 = local_1d8;
          plVar23 = local_1f8;
          lVar11 = **(longlong **)(local_200 + 8);
          uVar19 = *(uint *)(*(longlong *)(*(longlong **)(local_200 + 8))[1] + (longlong)iVar27 * 4)
          ;
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)(uVar19 >> 9) * 8);
          uVar25 = (ulonglong)uVar19 & 0x1ff;
          uVar19 = *(uint *)(lVar12 + uVar25 * 0xc);
          lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
          uVar20 = (ulonglong)uVar19 & 0x1ff;
          local_138 = *(int **)(lVar13 + 0x10 + uVar20 * 0x18);
          pdVar1 = (double *)(lVar13 + uVar20 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          uVar19 = *(uint *)(lVar12 + 4 + uVar25 * 0xc);
          lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
          uVar20 = (ulonglong)uVar19 & 0x1ff;
          local_120 = *(int **)(lVar13 + 0x10 + uVar20 * 0x18);
          pdVar1 = (double *)(lVar13 + uVar20 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          uVar19 = *(uint *)(lVar12 + 8 + uVar25 * 0xc);
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
          uVar25 = (ulonglong)uVar19 & 0x1ff;
          piVar22 = *(int **)(lVar11 + 0x10 + uVar25 * 0x18);
          piVar2 = (int *)(lVar11 + uVar25 * 0x18);
          local_118 = *piVar2;
          iStack_114 = piVar2[1];
          iStack_110 = piVar2[2];
          iStack_10c = piVar2[3];
          pcVar10 = (code *)*local_1d8;
          local_108 = piVar22;
          if (pcVar10 != (code *)0x0) {
            plVar24 = (longlong *)local_1d8[2];
            if ((longlong *)local_1d8[2] == (longlong *)0x0) {
              plVar24 = local_1f8;
            }
            uVar21 = (**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,uVar21,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(iStack_15c,local_160);
            uStack_140 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar17;
            plVar24 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar24 = plVar23;
            }
            uVar21 = (**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,uVar21,&local_130);
            local_120 = local_150;
            local_130 = (double)CONCAT44(iStack_15c,local_160);
            uStack_128 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar10 = (code *)*puVar17;
            plVar24 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar24 = plVar23;
            }
            piVar22 = (int *)(**(code **)(*plVar24 + 8))();
            (*pcVar10)(&local_160,piVar22,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            iStack_114 = iStack_15c;
            iStack_110 = iStack_158;
            iStack_10c = iStack_154;
          }
          plVar23 = local_1e0;
          if (0 < local_20c) {
            uVar25 = local_1f0 & 0xffffffff;
            iVar27 = local_20c;
            do {
              iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar25 >> 9) * 8) +
                              (ulonglong)((uint)uVar25 & 0x1ff) * 4);
              pcVar10 = *(code **)(param_8 + 0x10);
              if (pcVar10 == (code *)0x0) {
LAB_14835c6bf:
                lVar11 = **(longlong **)(param_1 + 8);
                uVar19 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] +
                                  (longlong)iVar9 * 4);
                lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + (ulonglong)(uVar19 >> 9) * 8)
                ;
                uVar20 = (ulonglong)uVar19 & 0x1ff;
                uVar19 = *(uint *)(lVar12 + uVar20 * 0xc);
                lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
                uVar26 = (ulonglong)uVar19 & 0x1ff;
                local_e8 = *(double *)(lVar13 + 0x10 + uVar26 * 0x18);
                pdVar1 = (double *)(lVar13 + uVar26 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                uVar19 = *(uint *)(lVar12 + 4 + uVar20 * 0xc);
                lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
                uVar26 = (ulonglong)uVar19 & 0x1ff;
                local_d0 = *(double *)(lVar13 + 0x10 + uVar26 * 0x18);
                pdVar1 = (double *)(lVar13 + uVar26 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                uVar19 = *(uint *)(lVar12 + 8 + uVar20 * 0xc);
                lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
                uVar20 = (ulonglong)uVar19 & 0x1ff;
                local_b8 = *(undefined8 *)(lVar11 + 0x10 + uVar20 * 0x18);
                puVar3 = (undefined4 *)(lVar11 + uVar20 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                piVar22 = (int *)&local_148;
                cVar18 = (*(code *)*param_7)(param_7[1],piVar22,&local_f8);
                if (cVar18 != '\0') {
                  uVar25 = (ulonglong)local_204;
                  goto LAB_14835c7d2;
                }
              }
              else {
                plVar24 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar24 = plVar23;
                }
                local_160 = iVar9;
                uVar21 = (**(code **)(*plVar24 + 8))();
                piVar22 = &local_160;
                cVar18 = (*pcVar10)(uVar21,piVar22);
                if (cVar18 != '\0') goto LAB_14835c6bf;
              }
              uVar25 = (ulonglong)((uint)uVar25 + 1);
              iVar27 = iVar27 + -1;
            } while (iVar27 != 0);
          }
        }
        else {
          plVar23 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar23 = local_1e8;
          }
          local_160 = iVar27;
          uVar21 = (**(code **)(*plVar23 + 8))();
          piVar22 = &local_160;
          cVar18 = (*pcVar10)(uVar21,piVar22);
          if (cVar18 != '\0') goto LAB_14835c497;
        }
        iVar27 = (int)local_1c8;
        uVar20 = (ulonglong)(iVar27 + 1);
        uVar25 = CONCAT71((int7)((ulonglong)piVar22 >> 8),iVar27 < local_208);
      } while (iVar27 != local_208);
      goto LAB_14835c7d2;
    }
  }
  else {
    bVar28 = (param_6 & 1) == 0;
    if ((bVar28 || (int)uVar19 < iVar27) &&
        (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar28 && (int)uVar19 >= iVar27)) {
      uVar25 = (ulonglong)((param_2 >> 9) << 3);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar25);
      lVar13 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar25);
      dVar4 = *(double *)(lVar11 + 0x10 + lVar13);
      dVar5 = *(double *)(lVar12 + 0x10 + lVar13);
      dVar14 = dVar4 - dVar5;
      dVar6 = *(double *)(lVar11 + 8 + lVar13);
      dVar7 = *(double *)(lVar12 + 8 + lVar13);
      dVar15 = dVar6 - dVar7;
      dVar16 = *(double *)(lVar11 + lVar13) - *(double *)(lVar12 + lVar13);
      dVar4 = dVar4 + dVar5;
      dVar6 = dVar6 + dVar7;
      dVar5 = *(double *)(lVar11 + lVar13) + *(double *)(lVar12 + lVar13);
      uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
      if ((int)uVar19 < 0) {
        FUN_14835bb2a(param_3,&local_f8,~uVar19,param_4);
        if ((((dVar5 <= local_f8) || (local_e0 <= dVar16)) ||
            ((dVar6 <= dStack_f0 || ((dStack_d8 <= dVar15 || (dVar4 <= local_e8)))))) ||
           (local_d0 <= dVar14)) goto LAB_14835c8bc;
        uVar21 = *param_7;
        local_228 = local_170;
      }
      else {
        iVar27 = *(int *)(*(longlong *)
                           (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                         (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        FUN_14835bb2a(param_3,&local_f8,uVar19 - 1,param_4);
        if (((((local_f8 < dVar5) && (dVar16 < local_e0)) && (dStack_f0 < dVar6)) &&
            ((dVar15 < dStack_d8 && (local_e8 < dVar4)))) && (dVar14 < local_d0)) {
          local_180 = *param_7;
          local_228 = &local_180;
          local_178 = param_7[1];
          local_230 = param_6 + 1;
          local_218 = param_9;
          local_220 = param_8;
          uVar25 = (ulonglong)param_2;
          local_238 = uVar19 - 1;
          cVar18 = FUN_14835c2c2(param_1,uVar25,param_3,param_4);
          uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
          if (cVar18 != '\0') goto LAB_14835c7d2;
        }
        param_5 = iVar27 - 1;
        FUN_14835bb2a(param_3,&local_148,param_5,param_4);
        uVar20 = 0;
        uVar25 = 0;
        if (((dVar5 <= local_148) || (uVar25 = uVar20, local_130 <= dVar16)) ||
           ((dVar6 <= uStack_140 ||
            (((uStack_128 <= dVar15 || (dVar4 <= (double)local_138)) ||
             ((double)local_120 <= dVar14)))))) goto LAB_14835c7d2;
        uVar21 = *param_7;
        local_228 = local_190;
      }
LAB_14835cc93:
      *local_228 = uVar21;
      local_228[1] = param_7[1];
      local_238 = param_5;
LAB_14835cccf:
      local_230 = param_6 + 1;
      local_218 = param_9;
      local_220 = param_8;
      uVar19 = FUN_14835c2c2(param_1,param_2,param_3,param_4);
      uVar25 = (ulonglong)uVar19;
      goto LAB_14835c7d2;
    }
    FUN_14835bb2a(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                       + (ulonglong)(uVar19 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar18 = FUN_14835c1ee(param_1,param_2,&local_f8);
      if (cVar18 != '\0') {
        uVar21 = *param_7;
        local_228 = local_1a0;
        goto LAB_14835cc93;
      }
    }
    else {
      iVar27 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
      cVar18 = FUN_14835c1ee(param_1,param_2 - 1,&local_f8);
      if (cVar18 != '\0') {
        local_1b0 = *param_7;
        local_228 = &local_1b0;
        local_1a8 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        local_238 = param_5;
        uVar25 = (ulonglong)(param_2 - 1);
        cVar18 = FUN_14835c2c2(param_1,uVar25,param_3,param_4);
        uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
        if (cVar18 != '\0') goto LAB_14835c7d2;
      }
      param_2 = iVar27 - 1;
      cVar18 = FUN_14835c1ee(param_1,param_2,&local_f8);
      if (cVar18 != '\0') {
        local_1c0 = *param_7;
        local_228 = &local_1c0;
        local_1b8 = param_7[1];
        local_238 = param_5;
        goto LAB_14835cccf;
      }
    }
  }
LAB_14835c8bc:
  uVar25 = 0;
LAB_14835c7d2:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffff01;
}



// FUNCTION 14835ccf6 FUN_14835ccf6 body=62 status=ok
// SIG undefined FUN_14835ccf6(void)

undefined8 FUN_14835ccf6(undefined8 param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14835cd5e FUN_14835cd5e body=29 status=ok
// SIG undefined FUN_14835cd5e(void)

undefined8 FUN_14835cd5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835cd7c FUN_14835cd7c body=2715 status=ok
// SIG undefined FUN_14835cd7c(void)

void FUN_14835cd7c(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
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
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  undefined8 *puVar24;
  double *pdVar25;
  undefined8 *puVar26;
  double *pdVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_3a8 [32];
  uint local_388;
  int local_380;
  undefined8 local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  int local_34c;
  int local_348;
  int local_344;
  undefined8 *local_340;
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  longlong *local_320;
  ulonglong local_318;
  ulonglong local_310;
  longlong *local_308;
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
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar23 = *(int *)(param_1 + 200);
  if (((int)uVar17 < iVar23) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_344 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_340 = param_4;
    if (0 < local_344) {
      local_348 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                          (ulonglong)(uVar17 & 0x1ff) * 4);
      local_320 = (longlong *)(param_10 + 0x30);
      local_330 = param_4 + 4;
      local_308 = (longlong *)(param_9 + 0x30);
      local_328 = (ulonglong)(uVar17 + 1);
      uVar18 = 1;
      local_338 = param_3;
      local_318 = (ulonglong)uVar6;
      do {
        uVar17 = (int)uVar18 + (int)local_318;
        local_34c = *(int *)(*(longlong *)
                              (*(longlong *)(local_338 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
        pcVar8 = *(code **)(param_10 + 0x10);
        local_310 = uVar18;
        if (pcVar8 == (code *)0x0) {
LAB_14835cf96:
          plVar22 = local_330;
          puVar24 = local_340;
          lVar21 = **(longlong **)(local_338 + 8);
          uVar17 = *(uint *)(*(longlong *)(*(longlong **)(local_338 + 8))[1] +
                            (longlong)local_34c * 4);
          lVar9 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
          uVar18 = (ulonglong)uVar17 & 0x1ff;
          uVar17 = *(uint *)(lVar9 + uVar18 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar21 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
          uVar29 = (ulonglong)uVar17 & 0x1ff;
          local_278 = *(double *)(lVar10 + 0x10 + uVar29 * 0x18);
          pdVar25 = (double *)(lVar10 + uVar29 * 0x18);
          local_288 = *pdVar25;
          uStack_280 = pdVar25[1];
          uVar17 = *(uint *)(lVar9 + 4 + uVar18 * 0xc);
          lVar10 = *(longlong *)(*(longlong *)(lVar21 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
          uVar29 = (ulonglong)uVar17 & 0x1ff;
          local_260 = *(double *)(lVar10 + 0x10 + uVar29 * 0x18);
          pdVar25 = (double *)(lVar10 + uVar29 * 0x18);
          local_270 = *pdVar25;
          uStack_268 = pdVar25[1];
          uVar17 = *(uint *)(lVar9 + 8 + uVar18 * 0xc);
          lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x10) + (ulonglong)(uVar17 >> 9) * 8);
          uVar18 = (ulonglong)uVar17 & 0x1ff;
          local_248 = *(double *)(lVar21 + 0x10 + uVar18 * 0x18);
          piVar1 = (int *)(lVar21 + uVar18 * 0x18);
          local_258 = *piVar1;
          iStack_254 = piVar1[1];
          iStack_250 = piVar1[2];
          iStack_24c = piVar1[3];
          pcVar8 = (code *)*local_340;
          if (pcVar8 != (code *)0x0) {
            plVar20 = (longlong *)local_340[2];
            if ((longlong *)local_340[2] == (longlong *)0x0) {
              plVar20 = local_330;
            }
            uVar19 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar19,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar24;
            plVar20 = (longlong *)puVar24[2];
            if ((longlong *)puVar24[2] == (longlong *)0x0) {
              plVar20 = plVar22;
            }
            uVar19 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar19,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar8 = (code *)*puVar24;
            plVar20 = (longlong *)puVar24[2];
            if ((longlong *)puVar24[2] == (longlong *)0x0) {
              plVar20 = plVar22;
            }
            uVar19 = (**(code **)(*plVar20 + 8))();
            (*pcVar8)(&local_2a0,uVar19,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            iStack_254 = iStack_29c;
            iStack_250 = iStack_298;
            iStack_24c = iStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar24 = &local_288;
          puVar26 = local_1e8;
          for (lVar21 = 9; lVar21 != 0; lVar21 = lVar21 + -1) {
            *puVar26 = *puVar24;
            puVar24 = puVar24 + 1;
            puVar26 = puVar26 + 1;
          }
          if (0 < local_348) {
            uVar18 = local_328 & 0xffffffff;
            iVar23 = local_348;
            do {
              iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar18 >> 9) * 8) +
                              (ulonglong)((uint)uVar18 & 0x1ff) * 4);
              pcVar8 = *(code **)(param_9 + 0x10);
              if (pcVar8 == (code *)0x0) {
LAB_14835d1e7:
                lVar21 = **(longlong **)(param_1 + 8);
                uVar17 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] +
                                  (longlong)iVar7 * 4);
                lVar9 = *(longlong *)(lVar21 + 0x10);
                lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + (ulonglong)(uVar17 >> 9) * 8)
                ;
                uVar29 = (ulonglong)uVar17 & 0x1ff;
                uVar17 = *(uint *)(lVar21 + uVar29 * 0xc);
                lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar17 >> 9) * 8);
                uVar28 = (ulonglong)uVar17 & 0x1ff;
                local_238[2] = *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
                pdVar25 = (double *)(lVar10 + uVar28 * 0x18);
                local_238[0] = *pdVar25;
                local_238[1] = pdVar25[1];
                uVar17 = *(uint *)(lVar21 + 4 + uVar29 * 0xc);
                lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar17 >> 9) * 8);
                uVar28 = (ulonglong)uVar17 & 0x1ff;
                local_210 = *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
                pdVar25 = (double *)(lVar10 + uVar28 * 0x18);
                local_238[3] = *pdVar25;
                dStack_218 = pdVar25[1];
                uVar17 = *(uint *)(lVar21 + 8 + uVar29 * 0xc);
                lVar21 = *(longlong *)(lVar9 + (ulonglong)(uVar17 >> 9) * 8);
                uVar29 = (ulonglong)uVar17 & 0x1ff;
                local_1f8 = *(undefined8 *)(lVar21 + 0x10 + uVar29 * 0x18);
                puVar2 = (undefined4 *)(lVar21 + uVar29 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_14c = local_14c & 0xffffffff00000000;
                pdVar25 = local_238;
                pdVar27 = local_1a0;
                for (lVar21 = 9; lVar21 != 0; lVar21 = lVar21 + -1) {
                  *pdVar27 = *pdVar25;
                  pdVar25 = pdVar25 + 1;
                  pdVar27 = pdVar27 + 1;
                }
                cVar16 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar16 != '\0') {
                  FUN_14835d846(local_1e8,iVar7,local_34c,param_7);
                }
              }
              else {
                plVar22 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar22 = local_308;
                }
                local_2a0 = iVar7;
                uVar19 = (**(code **)(*plVar22 + 8))();
                cVar16 = (*pcVar8)(uVar19,&local_2a0);
                if (cVar16 != '\0') goto LAB_14835d1e7;
              }
              uVar18 = (ulonglong)((uint)uVar18 + 1);
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
          }
        }
        else {
          plVar22 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar22 = local_320;
          }
          local_2a0 = local_34c;
          uVar19 = (**(code **)(*plVar22 + 8))();
          cVar16 = (*pcVar8)(uVar19,&local_2a0);
          if (cVar16 != '\0') goto LAB_14835cf96;
        }
        uVar18 = (ulonglong)((int)local_310 + 1);
      } while ((int)local_310 != local_344);
    }
    goto LAB_14835d32f;
  }
  bVar30 = (param_6 & 1) == 0;
  if ((bVar30 || (int)uVar17 < iVar23) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar30 && (int)uVar17 >= iVar23)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar18 = (ulonglong)((param_2 >> 9) << 3);
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18);
    lVar10 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar18);
    dVar14 = *(double *)(lVar9 + lVar10) + dVar3;
    dVar12 = *(double *)(lVar9 + 8 + lVar10) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar9 + 0x10 + lVar10);
    dVar4 = *(double *)(lVar21 + 0x10 + lVar10);
    dVar11 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar21 + 8 + lVar10);
    dVar13 = dVar5 - dVar12;
    dVar15 = *(double *)(lVar21 + lVar10) - dVar14;
    dVar3 = dVar3 + dVar4;
    dVar12 = dVar12 + dVar5;
    dVar14 = dVar14 + *(double *)(lVar21 + lVar10);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_14835bb2a(param_3,local_238,param_5,param_4);
      if ((((dVar14 <= local_238[0]) || (local_238[3] <= dVar15)) ||
          ((dVar12 <= local_238[1] || ((dStack_218 <= dVar13 || (dVar3 <= local_238[2])))))) ||
         (local_210 <= dVar11)) goto LAB_14835d32f;
      uVar19 = *param_8;
      local_370 = local_2b0;
    }
    else {
      FUN_14835bb2a(param_3,local_238,param_5 - 1,param_4);
      if (((((local_238[0] < dVar14) && (dVar15 < local_238[3])) && (local_238[1] < dVar12)) &&
          ((dVar13 < dStack_218 && (local_238[2] < dVar3)))) && (dVar11 < local_210)) {
        local_2c0 = *param_8;
        local_370 = &local_2c0;
        local_2b8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5 - 1;
        FUN_14835cd7c(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_14835bb2a(param_3,&local_288,param_5,param_4);
      if (((dVar14 <= local_288) || (local_270 <= dVar15)) ||
         ((dVar12 <= uStack_280 ||
          (((uStack_268 <= dVar13 || (dVar3 <= local_278)) || (local_260 <= dVar11))))))
      goto LAB_14835d32f;
      uVar19 = *param_8;
      local_370 = local_2d0;
    }
  }
  else {
    FUN_14835bb2a(param_3,local_238,param_5,param_4);
    lVar21 = *(longlong *)(param_1 + 0xb8);
    param_2 = *(uint *)(*(longlong *)(lVar21 + (ulonglong)(uVar17 >> 9) * 8) +
                       (ulonglong)(uVar17 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar16 = FUN_14835c1ee(param_1,param_2,local_238);
      if (cVar16 == '\0') goto LAB_14835d32f;
      uVar19 = *param_8;
      local_370 = local_2e0;
    }
    else {
      cVar16 = FUN_14835c1ee(param_1,param_2 - 1,local_238);
      if (cVar16 != '\0') {
        local_2f0 = *param_8;
        local_370 = &local_2f0;
        local_2e8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5;
        FUN_14835cd7c(param_1,param_2 - 1,param_3,param_4);
        lVar21 = *(longlong *)(param_1 + 0xb8);
      }
      param_2 = *(int *)(*(longlong *)(lVar21 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                        (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
      cVar16 = FUN_14835c1ee(param_1,param_2,local_238);
      if (cVar16 == '\0') goto LAB_14835d32f;
      uVar19 = *param_8;
      local_370 = local_300;
    }
  }
  *local_370 = uVar19;
  local_370[1] = param_8[1];
  local_380 = param_6 + 1;
  local_360 = param_10;
  local_368 = param_9;
  local_378 = param_7;
  local_388 = param_5;
  FUN_14835cd7c(param_1,param_2,param_3,param_4);
LAB_14835d32f:
  if ((local_b0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14835d818 FUN_14835d818 body=45 status=ok
// SIG undefined FUN_14835d818(void)

bool FUN_14835d818(longlong param_1)

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



// FUNCTION 14835d846 FUN_14835d846 body=1201 status=ok
// SIG undefined FUN_14835d846(void)

void FUN_14835d846(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

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
      goto LAB_14835d983;
    }
    if (iVar4 < 3) goto LAB_14835d983;
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
      goto LAB_14835d983;
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
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_14835d983;
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
LAB_14835d983:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835dcf8 FUN_14835dcf8 body=362 status=ok
// SIG undefined FUN_14835dcf8(void)

ulonglong FUN_14835dcf8(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
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
        uVar4 = FUN_14835de92(param_1,*(undefined4 *)
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
          goto LAB_14835de39;
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
  uVar5 = FUN_14835e218(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_14835de39:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 14835de64 FUN_14835de64 body=45 status=ok
// SIG undefined FUN_14835de64(void)

bool FUN_14835de64(longlong param_1)

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



// FUNCTION 14835de92 FUN_14835de92 body=900 status=ok
// SIG undefined FUN_14835de92(void)

ulonglong FUN_14835de92(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_278 [44];
  int local_24c;
  longlong *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pcVar4 = *(code **)(param_8 + 0x10);
  if (pcVar4 == (code *)0x0) {
LAB_14835df04:
    lVar10 = **(longlong **)(param_1 + 8);
    uVar6 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)param_2 * 4);
    lVar8 = *(longlong *)(lVar10 + 0x10);
    lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
    uVar14 = (ulonglong)uVar6 & 0x1ff;
    uVar6 = *(uint *)(lVar10 + uVar14 * 0xc);
    lVar16 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
    uVar15 = (ulonglong)uVar6 & 0x1ff;
    local_98[2] = *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18);
    puVar11 = (undefined8 *)(lVar16 + uVar15 * 0x18);
    local_98[0] = *puVar11;
    local_98[1] = puVar11[1];
    uVar6 = *(uint *)(lVar10 + 4 + uVar14 * 0xc);
    lVar16 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
    uVar15 = (ulonglong)uVar6 & 0x1ff;
    local_70 = *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18);
    puVar11 = (undefined8 *)(lVar16 + uVar15 * 0x18);
    local_98[3] = *puVar11;
    uStack_78 = puVar11[1];
    uVar6 = *(uint *)(lVar10 + 8 + uVar14 * 0xc);
    lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
    uVar15 = (ulonglong)uVar6 & 0x1ff;
    local_58 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
    puVar1 = (undefined4 *)(lVar8 + uVar15 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar11 = local_98;
    piVar12 = local_220;
    for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)piVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      piVar12 = piVar12 + 2;
    }
    local_228 = *(undefined4 *)(lVar10 + 8 + uVar14 * 0xc);
    local_230 = *(undefined8 *)(lVar10 + uVar14 * 0xc);
    if ((int)param_3 < (int)param_4) {
      local_248 = (longlong *)(param_8 + 0x30);
      uVar14 = 0;
      local_24c = param_2;
      do {
        iVar3 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar4 = *(code **)(param_8 + 0x10);
        if (pcVar4 == (code *)0x0) {
LAB_14835e079:
          lVar10 = **(longlong **)(param_1 + 8);
          uVar6 = *(uint *)(*(longlong *)(*(longlong **)(param_1 + 8))[1] + (longlong)iVar3 * 4);
          lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
          uVar15 = (ulonglong)(uVar6 & 0x1ff);
          local_238 = *(undefined4 *)(lVar8 + 8 + uVar15 * 0xc);
          local_240 = *(undefined8 *)(lVar8 + uVar15 * 0xc);
          if (param_6 != '\0') {
            lVar16 = 0;
            do {
              lVar17 = 0;
              do {
                if (*(int *)((longlong)&local_230 + lVar16 * 4) ==
                    *(int *)((longlong)&local_240 + lVar17 * 4)) goto LAB_14835e1d0;
                lVar17 = lVar17 + 1;
              } while (lVar17 != 3);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 3);
          }
          puVar2 = (uint *)(lVar8 + uVar15 * 0xc);
          lVar10 = *(longlong *)(lVar10 + 0x10);
          lVar8 = *(longlong *)(lVar10 + (ulonglong)(*puVar2 >> 9) * 8);
          uVar14 = (ulonglong)*puVar2 & 0x1ff;
          local_e8[2] = *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18);
          puVar11 = (undefined8 *)(lVar8 + uVar14 * 0x18);
          local_e8[0] = *puVar11;
          local_e8[1] = puVar11[1];
          lVar8 = *(longlong *)(lVar10 + (ulonglong)(puVar2[1] >> 9) * 8);
          uVar14 = (ulonglong)puVar2[1] & 0x1ff;
          local_c0 = *(undefined8 *)(lVar8 + 0x10 + uVar14 * 0x18);
          puVar11 = (undefined8 *)(lVar8 + uVar14 * 0x18);
          local_e8[3] = *puVar11;
          uStack_c8 = puVar11[1];
          lVar10 = *(longlong *)(lVar10 + (ulonglong)(puVar2[2] >> 9) * 8);
          uVar14 = (ulonglong)puVar2[2] & 0x1ff;
          local_a8 = *(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
          puVar1 = (undefined4 *)(lVar10 + uVar14 * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar11 = local_e8;
          puVar13 = local_1d8;
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          uVar6 = (*(code *)*param_7)(param_7[1],local_220);
          uVar14 = (ulonglong)uVar6;
          if ((char)uVar6 != '\0') {
            if (param_5 == 0) {
              uVar14 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
              break;
            }
            FUN_14835d846(local_220,local_24c,iVar3);
          }
        }
        else {
          local_240 = CONCAT44(local_240._4_4_,iVar3);
          plVar9 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar9 = local_248;
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          cVar5 = (*pcVar4)(uVar7,&local_240);
          if (cVar5 != '\0') goto LAB_14835e079;
        }
LAB_14835e1d0:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_14835e1de;
    }
  }
  else {
    plVar9 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar4)(uVar7,local_220);
    if (cVar5 != '\0') goto LAB_14835df04;
  }
  uVar14 = 0;
LAB_14835e1de:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffffffffff01;
}



// FUNCTION 14835e218 FUN_14835e218 body=1887 status=ok
// SIG undefined FUN_14835e218(void)

ulonglong FUN_14835e218(longlong param_1,uint param_2,uint param_3,longlong param_4,
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
          goto LAB_14835e415;
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
          uVar10 = FUN_14835e218(param_1,~uVar12,0xffffffff,param_4);
joined_r0x00014835e901:
          uVar17 = (ulonglong)uVar10;
          if ((param_4 == 0) && (uVar15 = CONCAT71(uVar16,1), (char)uVar10 != '\0'))
          goto LAB_14835e3ad;
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
          uVar9 = FUN_14835e218(param_1,iVar20,0xffffffff,param_4);
          uVar15 = CONCAT71(uVar16,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_14835e3ad;
          uVar10 = iVar19 - 1;
          local_120 = *param_7;
          local_148 = &local_120;
          local_118 = param_7[1];
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          local_150 = iVar18;
          bVar14 = FUN_14835e218(param_1,uVar10,0xffffffff,param_4);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar14 = (byte)uVar9 | bVar14;
          if ((param_4 == 0) && (bVar14 != 0)) goto LAB_14835e3ad;
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
          cVar7 = FUN_14835c1ee(param_1,iVar20);
          uVar17 = (ulonglong)CONCAT31(uVar5,bVar14);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_148 = &local_130;
            local_128 = param_7[1];
            local_140 = param_8;
            local_158 = CONCAT71(local_158._1_7_,param_5);
            local_150 = iVar18;
            bVar8 = FUN_14835e218(param_1,iVar20,uVar10,param_4);
            uVar10 = CONCAT31(uVar5,bVar14 | bVar8);
            goto joined_r0x00014835e901;
          }
        }
        goto LAB_14835e4fa;
      }
LAB_14835e415:
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
        cVar7 = FUN_14835c1ee(param_1,~uVar10,&local_c0);
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
          uVar10 = FUN_14835e218(param_1,~uVar10,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if (param_4 == 0) {
            bVar14 = (byte)uVar10;
joined_r0x00014835e703:
            if (bVar14 != 0) goto LAB_14835e658;
          }
        }
      }
      else {
        iVar19 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
        cVar7 = FUN_14835c1ee(param_1,uVar10 - 1,&local_c0);
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_148 = &local_e0;
          local_d8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar10 = FUN_14835e218(param_1,uVar10 - 1,uVar15,param_4);
          uVar17 = (ulonglong)uVar10;
          if ((param_4 != 0) || ((char)uVar10 == '\0')) goto LAB_14835e67d;
LAB_14835e658:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
          goto LAB_14835e3ad;
        }
        uVar17 = 0;
LAB_14835e67d:
        iVar19 = iVar19 + -1;
        cVar7 = FUN_14835c1ee(param_1,iVar19,&local_c0);
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_148 = &local_f0;
          local_e8 = param_7[1];
          local_150 = param_6 + 1;
          local_140 = param_8;
          local_158 = CONCAT71(local_158._1_7_,param_5);
          uVar11 = FUN_14835e218(param_1,iVar19,uVar15,param_4);
          bVar14 = (byte)uVar11 | (byte)uVar17;
          uVar17 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar14) & 0xffffff01;
          if (param_4 == 0) {
            bVar14 = bVar14 & 1;
            goto joined_r0x00014835e703;
          }
        }
      }
LAB_14835e4fa:
      uVar15 = uVar17;
      goto LAB_14835e3ad;
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
        uVar9 = FUN_14835de92(param_1,*(undefined4 *)
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
        if ((param_4 == 0) && ((bVar14 & 1) != 0)) goto LAB_14835e658;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(iVar19 + uVar10 + 1));
      goto LAB_14835e3ad;
    }
  }
  uVar15 = 0;
LAB_14835e3ad:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 14835e978 FUN_14835e978 body=162 status=ok
// SIG undefined FUN_14835e978(void)

void FUN_14835e978(undefined8 param_1,undefined8 *param_2)

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



// FUNCTION 14835ea1c FUN_14835ea1c body=57 status=ok
// SIG undefined FUN_14835ea1c(void)

undefined8 * FUN_14835ea1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae73d90;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835ea56 FUN_14835ea56 body=249 status=ok
// SIG undefined FUN_14835ea56(void)

undefined4 FUN_14835ea56(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x4000000000000000;
  local_38 = 2;
  local_a0 = param_3;
  if ((int)param_1[5] == 0) {
    FUN_146bef8a8(&local_a0,1);
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,&local_a0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146bddd50(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835eb50 FUN_14835eb50 body=71 status=ok
// SIG undefined FUN_14835eb50(void)

void FUN_14835eb50(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835eb98 FUN_14835eb98 body=150 status=ok
// SIG undefined FUN_14835eb98(void)

void FUN_14835eb98(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_10;
  local_48 = &local_18;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_30 = 1;
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = 0;
  local_18 = param_3;
  local_10 = param_4;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835ec30 FUN_14835ec30 body=3105 status=ok
// SIG undefined FUN_14835ec30(void)

uint FUN_14835ec30(longlong *param_1,code **param_2,code **param_3,code **param_4,longlong *param_5,
                  char param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code **ppcVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  code *pcVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  code **ppcVar19;
  longlong lVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_318 [40];
  undefined4 local_2f0;
  code **local_2e8;
  code **local_2d8;
  code **local_2d0;
  longlong *local_2c8;
  code **ppcStack_2c0;
  code **local_2b8;
  code **local_2b0;
  code **local_2a8;
  code **local_2a0;
  code **local_298;
  code **local_290;
  code **local_288;
  code *local_278;
  undefined8 uStack_270;
  code *local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  undefined8 local_244;
  undefined4 local_23c;
  ulonglong *local_238;
  undefined8 uStack_230;
  code *local_228;
  ulonglong uStack_220;
  undefined8 uStack_218;
  code *local_208;
  longlong **pplStack_200;
  code *local_1f8;
  undefined8 local_1f0;
  code *local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8 [2];
  undefined ***local_198;
  undefined **local_188;
  longlong *local_180;
  ulonglong **local_178;
  undefined4 *local_170;
  code *local_168 [2];
  undefined ***local_158;
  undefined **local_148;
  longlong *local_140;
  ulonglong **local_138;
  undefined4 *local_130;
  code *local_128 [2];
  undefined ***local_118;
  undefined **local_108;
  longlong *local_100;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  longlong *local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  cVar7 = (**(code **)(*param_1 + 0x58))();
  if (cVar7 == '\0') {
    local_238 = (ulonglong *)0x0;
    uStack_230 = 0;
    local_23c = 0;
    local_244 = 0x20657300206573;
    local_2d8 = param_2;
    local_2d0 = param_4;
    if ((int)param_1[5] == 1) {
      local_2b8 = (code **)DAT_14c8463b0;
      local_2c8 = DAT_14c8463a0;
      ppcStack_2c0 = (code **)DAT_14c8463a8;
      uStack_230._0_4_ = 1;
      uStack_230._4_4_ = 0;
      FUN_1403e3958(&local_238,0);
      iVar15 = (uint)uStack_230;
      local_238[2] = (ulonglong)local_2b8;
      *local_238 = (ulonglong)local_2c8;
      local_238[1] = (ulonglong)ppcStack_2c0;
      uVar2 = DAT_14c8463b0 ^ 0x8000000000000000;
      uVar3 = DAT_14c8463a8 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c8463a0 ^ 0x8000000000000000;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,iVar15);
      }
      uVar8 = (uint)uStack_230;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      local_2b8 = (code **)DAT_14c846398;
      local_2c8 = DAT_14c846388;
      ppcStack_2c0 = (code **)DAT_14c846390;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      uVar9 = (uint)uStack_230;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar8);
        uVar9 = (uint)uStack_230;
      }
      local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
      local_238[lVar17 * 3] = (ulonglong)local_2c8;
      (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
      uVar2 = DAT_14c846398 ^ 0x8000000000000000;
      uVar3 = DAT_14c846390 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c846388 ^ 0x8000000000000000;
      uStack_230._0_4_ = uVar9 + 1;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar9);
      }
      uVar8 = (uint)uStack_230;
      lVar17 = (longlong)(int)uVar9;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      local_2b8 = DAT_14c8463c8;
      local_2c8 = DAT_14c8463b8;
      ppcStack_2c0 = DAT_14c8463c0;
      lVar17 = (longlong)(int)(uint)uStack_230;
      uStack_230._0_4_ = (uint)uStack_230 + 1;
      uVar9 = (uint)uStack_230;
      if (uStack_230._4_4_ < (uint)uStack_230) {
        FUN_1403e3958(&local_238,uVar8);
        uVar9 = (uint)uStack_230;
      }
      local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
      local_238[lVar17 * 3] = (ulonglong)local_2c8;
      (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
      uVar2 = (ulonglong)DAT_14c8463c8 ^ 0x8000000000000000;
      uVar3 = (ulonglong)DAT_14c8463c0 ^ 0x8000000000000000;
      uVar4 = (ulonglong)DAT_14c8463b8 ^ 0x8000000000000000;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar9 + 1);
      if (uStack_230._4_4_ < uVar9 + 1) {
        FUN_1403e3958(&local_238,uVar9);
      }
      lVar17 = (longlong)(int)uVar9;
      local_238[lVar17 * 3] = uVar4;
      local_238[lVar17 * 3 + 1] = uVar3;
      local_238[lVar17 * 3 + 2] = uVar2;
      if (0 < *(int *)((longlong)param_1 + 0x2c)) {
        iVar15 = 0;
        do {
          FUN_1477ee866(&local_244,&local_2c8);
          uVar2 = uStack_230;
          lVar17 = (longlong)(int)(uint)uStack_230;
          uVar8 = (uint)uStack_230 + 1;
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar8);
          if (uStack_230._4_4_ < uVar8) {
            FUN_1403e3958(&local_238,uVar2 & 0xffffffff);
          }
          local_238[lVar17 * 3 + 2] = (ulonglong)local_2b8;
          local_238[lVar17 * 3] = (ulonglong)local_2c8;
          (local_238 + lVar17 * 3)[1] = (ulonglong)ppcStack_2c0;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)((longlong)param_1 + 0x2c));
      }
      local_23c = (uint)uStack_230;
    }
    local_258 = (code *)0x0;
    uStack_250 = 0;
    if (0 < (int)param_1[6]) {
      uVar8 = 0x1e549;
      iVar15 = 0;
      do {
        uVar2 = uStack_250;
        lVar17 = (longlong)(int)uStack_250;
        uVar9 = (int)uStack_250 + 1;
        uStack_250 = CONCAT44(uStack_250._4_4_,uVar9);
        if (uStack_250._4_4_ < uVar9) {
          FUN_1403e3958(&local_258,uVar2 & 0xffffffff);
        }
        dVar22 = (double)((float)(uVar8 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) + -1.0) * 0.999
                 + 0.001;
        dVar23 = (double)((float)(uVar8 * -0x4b9b4d07 + 0x9d6f2492 >> 9 | 0x3f800000) + -1.0) *
                 0.999 + 0.001;
        uVar8 = uVar8 * 0x1c3c718d + 0xf50d3da5;
        dVar24 = (double)((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * 0.999 + 0.001;
        dVar25 = 1.0 / (dVar23 + dVar24 + dVar22);
        *(double *)(local_258 + lVar17 * 0x18) = dVar24 * dVar25;
        *(double *)(local_258 + lVar17 * 0x18 + 8) = dVar23 * dVar25;
        *(double *)(local_258 + lVar17 * 0x18 + 0x10) = dVar25 * dVar22;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_1[6]);
    }
    uVar2 = uStack_250;
    if ((*(uint *)(param_1 + 2) & 0xfffffffd) == 0) {
      lVar17 = (longlong)(int)uStack_250;
      uVar8 = (int)uStack_250 + 1;
      uStack_250 = CONCAT44(uStack_250._4_4_,uVar8);
      if (uStack_250._4_4_ < uVar8) {
        FUN_1403e3958(&local_258,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_258 + lVar17 * 0x18) = 0x3fd5555555555555;
      *(undefined8 *)(local_258 + lVar17 * 0x18 + 8) = 0x3fd5555555555555;
      *(undefined8 *)(local_258 + lVar17 * 0x18 + 0x10) = 0x3fd5555555555555;
    }
    local_d8 = (undefined ***)0x0;
    local_c8 = &PTR_LAB_14ae73df0;
    local_c0 = param_1;
    pcVar14 = FUN_14835fa84;
    local_e8[0] = FUN_14835fa84;
    local_118 = (undefined ***)0x0;
    local_108 = &PTR_FUN_14ae73e10;
    local_100 = param_1;
    local_128[0] = FUN_14835fd74;
    local_158 = (undefined ***)0x0;
    local_148 = &PTR_LAB_14ae73e30;
    local_140 = param_1;
    local_138 = &local_238;
    local_130 = &local_23c;
    local_198 = (undefined ***)0x0;
    bVar21 = param_6 != '\0';
    ppcVar19 = local_168;
    ppcVar5 = local_e8;
    if (bVar21) {
      pcVar14 = FUN_14835fd74;
      ppcVar19 = local_1a8;
      ppcVar5 = local_128;
    }
    local_188 = &PTR_FUN_14ae73e50;
    local_1e8[0] = FUN_14835ff3c;
    local_168[0] = FUN_14835ff3c;
    local_180 = param_1;
    local_178 = &local_238;
    if (bVar21) {
      local_1e8[0] = FUN_148360248;
    }
    local_170 = &local_23c;
    pppuVar13 = &local_c8;
    if (bVar21) {
      pppuVar13 = &local_108;
    }
    local_1a8[0] = FUN_148360248;
    pppuVar10 = &local_148;
    if (bVar21) {
      pppuVar10 = &local_188;
    }
    bVar21 = (int)param_1[5] == 0;
    if (bVar21) {
      ppcVar19 = ppcVar5;
      local_1e8[0] = pcVar14;
    }
    local_1d8 = (longlong *)0x0;
    if (bVar21) {
      pppuVar10 = pppuVar13;
    }
    (**(code **)ppcVar19[4])(pppuVar10);
    iVar15 = *(int *)(param_3 + 1);
    local_268 = (code *)0x0;
    uStack_260 = 0;
    if (iVar15 == (int)param_5[1]) {
      if (0 < iVar15) {
        lVar17 = 0;
        lVar20 = 0;
        do {
          uVar2 = uStack_260;
          lVar1 = *param_5;
          lVar18 = (longlong)(int)uStack_260;
          uVar8 = (int)uStack_260 + 1;
          uStack_260 = CONCAT44(uStack_260._4_4_,uVar8);
          if (uStack_260._4_4_ < uVar8) {
            FUN_148360572(&local_268,uVar2 & 0xffffffff);
          }
          lVar18 = lVar18 * 0x88;
          puVar16 = (undefined8 *)(lVar1 + lVar17);
          pcVar14 = local_268 + lVar18;
          for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *(undefined8 *)pcVar14 = *puVar16;
            puVar16 = puVar16 + 1;
            pcVar14 = pcVar14 + 8;
          }
          *(undefined8 *)(local_268 + lVar18 + 0x50) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x50 + 8) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x60) = 0;
          *(undefined8 *)(local_268 + lVar18 + 0x68) = 0x3ff0000000000000;
          FUN_14836060a(local_268 + lVar18);
          lVar20 = lVar20 + 1;
          lVar17 = lVar17 + 0x50;
        } while (lVar20 < *(int *)(param_3 + 1));
      }
    }
    else if (0 < iVar15) {
      iVar15 = 0;
      do {
        uVar2 = uStack_260;
        lVar17 = (longlong)(int)uStack_260;
        uVar8 = (int)uStack_260 + 1;
        uStack_260 = CONCAT44(uStack_260._4_4_,uVar8);
        if (uStack_260._4_4_ < uVar8) {
          FUN_148360572(&local_268,uVar2 & 0xffffffff);
        }
        ppcVar19 = DAT_14c846520;
        ppcVar5 = DAT_14c846518;
        plVar12 = DAT_14c846510;
        uVar6 = DAT_14c8464f0;
        uVar2 = DAT_14c8464e8;
        pcVar14 = DAT_14c8464e0;
        lVar17 = lVar17 * 0x88;
        local_2b8 = DAT_14c846520;
        local_2c8 = DAT_14c846510;
        ppcStack_2c0 = DAT_14c846518;
        uStack_218 = DAT_14c8464f0;
        local_228 = DAT_14c8464e0;
        uStack_220 = DAT_14c8464e8;
        *(undefined8 *)(local_268 + lVar17 + 0x10) = 0;
        *(undefined8 *)(local_268 + lVar17) = 0;
        *(undefined8 *)(local_268 + lVar17 + 8) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x18) = 0x3ff0000000000000;
        *(code **)(local_268 + lVar17 + 0x20) = pcVar14;
        *(ulonglong *)(local_268 + lVar17 + 0x20 + 8) = uVar2;
        *(undefined8 *)(local_268 + lVar17 + 0x30) = uVar6;
        *(longlong **)(local_268 + lVar17 + 0x38) = plVar12;
        *(code ***)(local_268 + lVar17 + 0x38 + 8) = ppcVar5;
        *(code ***)(local_268 + lVar17 + 0x48) = ppcVar19;
        *(undefined8 *)(local_268 + lVar17 + 0x60) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x50) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x50 + 8) = 0;
        *(undefined8 *)(local_268 + lVar17 + 0x68) = 0x3ff0000000000000;
        *(code ***)(local_268 + lVar17 + 0x80) = DAT_14c846520;
        ppcVar5 = DAT_14c846518;
        *(longlong **)(local_268 + lVar17 + 0x70) = DAT_14c846510;
        *(code ***)(local_268 + lVar17 + 0x70 + 8) = ppcVar5;
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_3 + 1));
    }
    local_278 = (code *)0x0;
    uStack_270 = 0;
    if ((int)param_1[2] - 1U < 2) {
      local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffffffffff00);
      FUN_14475e60e(&local_278,&local_2c8,
                    *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24));
      local_228 = (code *)param_1[1];
      uStack_220 = 0;
      uStack_218 = 0;
      FUN_146c37e28(&local_228,1,1);
      local_2b0 = local_1e8;
      local_2a8 = local_2d8;
      local_298 = local_2d0;
      local_290 = &local_268;
      local_2e8 = &local_1f8;
      local_1f8 = (code *)0x0;
      local_1f0 = (longlong **)((ulonglong)local_1f0._4_4_ << 0x20);
      local_208 = (code *)&LAB_14836076c;
      local_2f0 = 0;
      local_2c8 = param_1;
      ppcStack_2c0 = &local_228;
      local_2b8 = &local_278;
      local_2a0 = param_3;
      pplStack_200 = &local_2c8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x20) * 0x200 + *(int *)(param_1[1] + 0x24),1);
      if (uStack_220 != 0) {
        FUN_1400020a8();
      }
    }
    cVar7 = (**(code **)(*param_1 + 0x58))(param_1);
    uVar8 = 0;
    if (cVar7 == '\0') {
      local_208 = (code *)0x0;
      pplStack_200 = (longlong **)0x0;
      local_2c8 = (longlong *)((ulonglong)local_2c8 & 0xffffffff00000000);
      FUN_148352668(&local_208,&local_2c8,
                    *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144));
      ppcStack_2c0 = &local_278;
      local_2b8 = local_1e8;
      local_2b0 = local_2d8;
      local_2a8 = &local_258;
      local_290 = local_2d0;
      local_288 = &local_268;
      local_2e8 = &local_228;
      local_228 = (code *)0x0;
      uStack_220 = uStack_220 & 0xffffffff00000000;
      local_1f8 = (code *)&LAB_148360a14;
      local_2f0 = 0;
      local_2c8 = param_1;
      local_2a0 = &local_208;
      local_298 = param_3;
      local_1f0 = &local_2c8;
      FUN_1427ae281(L"ParallelFor Task",
                    *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144),1);
      uVar8 = (**(code **)(*param_1 + 0x58))(param_1);
      if ((char)uVar8 == '\0') {
        plVar12 = param_1 + 8;
        *(undefined4 *)(param_1 + 9) = 0;
        if (*(int *)((longlong)param_1 + 0x4c) < 0) {
          FUN_14481578e(plVar12,0);
        }
        if (0 < *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144)) {
          lVar17 = 0;
          do {
            if (*(int *)(local_208 + lVar17 * 4) != 0) {
              iVar15 = (int)param_1[9];
              *(uint *)(param_1 + 9) = iVar15 + 1U;
              if (*(uint *)((longlong)param_1 + 0x4c) < iVar15 + 1U) {
                FUN_1446f48e2(plVar12,iVar15);
              }
              *(int *)(*plVar12 + (longlong)iVar15 * 4) = (int)lVar17;
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(param_1[1] + 0x140) * 0x200 + *(int *)(param_1[1] + 0x144));
        }
      }
      if (local_208 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 ^ 1;
    }
    if (local_278 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_268 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_1e8[0] != (code *)0x0) {
      plVar12 = local_1d8;
      if (local_1d8 == (longlong *)0x0) {
        plVar12 = local_1c8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_1a8[0] != (code *)0x0) {
      pppuVar13 = &local_188;
      if (local_198 != (undefined ***)0x0) {
        pppuVar13 = local_198;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_168[0] != (code *)0x0) {
      pppuVar13 = &local_148;
      if (local_158 != (undefined ***)0x0) {
        pppuVar13 = local_158;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_128[0] != (code *)0x0) {
      pppuVar13 = &local_108;
      if (local_118 != (undefined ***)0x0) {
        pppuVar13 = local_118;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar13 = &local_c8;
      if (local_d8 != (undefined ***)0x0) {
        pppuVar13 = local_d8;
      }
      (*(code *)(*pppuVar13)[2])();
    }
    if (local_258 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_238 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar8 = 0;
  }
  if ((local_a0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14835f852 FUN_14835f852 body=103 status=ok
// SIG undefined FUN_14835f852(void)

ulonglong FUN_14835f852(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(int *)(param_1 + 0x48) < 1) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    local_20 = *(undefined8 *)(param_1 + 8);
    uVar2 = CONCAT71(uVar3,1);
    cVar1 = FUN_146bc603c(&local_20,param_1 + 0x40,1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 1;
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835f8ba FUN_14835f8ba body=71 status=ok
// SIG undefined FUN_14835f8ba(void)

void FUN_14835f8ba(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835f902 FUN_14835f902 body=150 status=ok
// SIG undefined FUN_14835f902(void)

void FUN_14835f902(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_10;
  local_48 = &local_18;
  local_68 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_30 = 1;
  local_40 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = 0;
  local_18 = param_3;
  local_10 = param_4;
  (**(code **)(*param_1 + 0x48))();
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835f99a FUN_14835f99a body=156 status=ok
// SIG undefined FUN_14835f99a(void)

undefined8
FUN_14835f99a(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = *param_5;
  uStack_20 = param_5[1];
  local_68 = &local_28;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_60 = param_6;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835fa3c FUN_14835fa3c body=71 status=ok
// SIG undefined FUN_14835fa3c(void)

char FUN_14835fa3c(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(char **)(param_1 + 0x38);
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 14835fa84 FUN_14835fa84 body=101 status=ok
// SIG undefined FUN_14835fa84(void)

void FUN_14835fa84(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_3;
  uStack_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = param_7;
  local_48 = param_5;
  uStack_40 = param_6;
  FUN_14835fb32();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835fb08 FUN_14835fb08 body=12 status=ok
// SIG undefined FUN_14835fb08(void)

void FUN_14835fb08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014835fb11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14835fb14 FUN_14835fb14 body=29 status=ok
// SIG undefined FUN_14835fb14(void)

undefined8 FUN_14835fb14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835fb32 FUN_14835fb32 body=292 status=ok
// SIG undefined FUN_14835fb32(void)

bool FUN_14835fb32(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 < 1) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = 0.0;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar2 = *param_7;
      cVar6 = FUN_14835fc58(lVar2 + lVar7,param_6);
      if (cVar6 == '\0') {
        FUN_14835fcc0(lVar2 + lVar7,&local_98,param_4);
      }
      else {
        local_88 = *(undefined8 *)(param_5 + 4);
        local_98 = *param_5;
        uStack_94 = param_5[1];
        uStack_90 = param_5[2];
        uStack_8c = param_5[3];
      }
      plVar3 = *(longlong **)(*param_3 + lVar8 * 8);
      FUN_146bef8a8(plVar3,0);
      local_68 = local_88;
      local_78 = local_98;
      uStack_74 = uStack_94;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      FUN_146bed438(plVar3,*(undefined4 *)(*plVar3 + 0xcc),&local_78);
      dVar4 = dVar4 + (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x88;
    } while ((int)lVar5 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return *(double *)(lVar1 + 0x20) <= dVar4 && dVar4 != *(double *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835fc58 FUN_14835fc58 body=104 status=ok
// SIG undefined FUN_14835fc58(void)

undefined8 FUN_14835fc58(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((((*(double *)(param_2 + 0x20) == *(double *)(param_1 + 0x20)) &&
         (!NAN(*(double *)(param_2 + 0x20)) && !NAN(*(double *)(param_1 + 0x20)))) &&
        (*(double *)(param_2 + 0x28) == *(double *)(param_1 + 0x28))) &&
       ((!NAN(*(double *)(param_2 + 0x28)) && !NAN(*(double *)(param_1 + 0x28)) &&
        (*(double *)(param_2 + 0x30) == *(double *)(param_1 + 0x30))))) &&
      ((!NAN(*(double *)(param_2 + 0x30)) && !NAN(*(double *)(param_1 + 0x30)) &&
       ((*(double *)(param_2 + 0x38) == *(double *)(param_1 + 0x38) &&
        (!NAN(*(double *)(param_2 + 0x38)) && !NAN(*(double *)(param_1 + 0x38)))))))) &&
     ((*(double *)(param_2 + 0x40) == *(double *)(param_1 + 0x40) &&
      (!NAN(*(double *)(param_2 + 0x40)) && !NAN(*(double *)(param_1 + 0x40)))))) {
    if ((*(double *)(param_2 + 0x48) == *(double *)(param_1 + 0x48)) &&
       (!NAN(*(double *)(param_2 + 0x48)) && !NAN(*(double *)(param_1 + 0x48)))) {
      uVar1 = FUN_1483529b2(param_2,param_1,0);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 14835fcc0 FUN_14835fcc0 body=178 status=ok
// SIG undefined FUN_14835fcc0(void)

double * FUN_14835fcc0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_3[2] - *(double *)(param_1 + 0x30);
  local_48 = param_3[1] - *(double *)(param_1 + 0x28);
  local_50 = *param_3 - *(double *)(param_1 + 0x20);
  FUN_146bed047(&local_38,param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x80);
  dVar2 = *(double *)(param_1 + 0x78);
  *param_2 = *(double *)(param_1 + 0x70) * local_38;
  param_2[1] = dVar2 * local_30;
  param_2[2] = dVar1 * local_28;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835fd74 FUN_14835fd74 body=101 status=ok
// SIG undefined FUN_14835fd74(void)

void FUN_14835fd74(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_3;
  uStack_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = param_7;
  local_48 = param_5;
  uStack_40 = param_6;
  FUN_14835fe22();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835fdda FUN_14835fdda body=24 status=ok
// SIG undefined FUN_14835fdda(void)

longlong FUN_14835fdda(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ae73e10;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14835fdf8 FUN_14835fdf8 body=12 status=ok
// SIG undefined FUN_14835fdf8(void)

void FUN_14835fdf8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014835fe01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14835fe04 FUN_14835fe04 body=29 status=ok
// SIG undefined FUN_14835fe04(void)

undefined8 FUN_14835fe04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835fe22 FUN_14835fe22 body=280 status=ok
// SIG undefined FUN_14835fe22(void)

ulonglong FUN_14835fe22(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                       undefined4 *param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = (ulonglong)(int)param_3[1];
  if ((longlong)uVar5 < 1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    uVar7 = 0;
    do {
      lVar6 = uVar7 * 0x88 + *param_7;
      cVar3 = FUN_14835fc58(lVar6,param_6);
      if (cVar3 == '\0') {
        FUN_14835fcc0(lVar6,&local_88,param_4);
      }
      else {
        local_78 = *(undefined8 *)(param_5 + 4);
        local_88 = *param_5;
        uStack_84 = param_5[1];
        uStack_80 = param_5[2];
        uStack_7c = param_5[3];
      }
      plVar2 = *(longlong **)(*param_3 + uVar7 * 8);
      FUN_146bef8a8(plVar2,0);
      local_58 = local_78;
      local_68 = local_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      dVar8 = (double)FUN_146bed438(plVar2,*(undefined4 *)(*plVar2 + 0xcc),&local_68);
      if (*(double *)(lVar1 + 0x20) <= dVar8 && dVar8 != *(double *)(lVar1 + 0x20)) break;
      uVar7 = uVar7 + 1;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar7 < uVar5);
    } while (uVar7 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835ff3c FUN_14835ff3c body=101 status=ok
// SIG undefined FUN_14835ff3c(void)

void FUN_14835ff3c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_3;
  uStack_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = param_7;
  local_48 = param_5;
  uStack_40 = param_6;
  FUN_14835fff2();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14835ffc8 FUN_14835ffc8 body=12 status=ok
// SIG undefined FUN_14835ffc8(void)

void FUN_14835ffc8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014835ffd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14835ffd4 FUN_14835ffd4 body=29 status=ok
// SIG undefined FUN_14835ffd4(void)

undefined8 FUN_14835ffd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14835fff2 FUN_14835fff2 body=596 status=ok
// SIG undefined FUN_14835fff2(void)

ulonglong FUN_14835fff2(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5,undefined8 param_6,longlong *param_7)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [36];
  uint local_114;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c0 = 0.0;
  dStack_b8 = 0.0;
  local_b0 = 1.0;
  local_110 = param_2;
  local_100 = param_4;
  if (**(int **)(param_1 + 0x10) < 1) {
    uVar2 = CONCAT71((int7)((ulonglong)*(int **)(param_1 + 0x10) >> 8),1);
  }
  else {
    lVar4 = 0;
    do {
      lVar5 = (longlong)(int)local_110[1];
      if (lVar5 < 1) {
LAB_1483601f5:
        uVar2 = 0;
        break;
      }
      local_114 = (uint)CONCAT71((int7)((ulonglong)local_110 >> 8),0 < lVar5);
      lVar8 = 0x50;
      lVar6 = 0;
      local_108 = lVar4;
      while( true ) {
        lVar7 = *param_7 + lVar8 + -0x50;
        cVar1 = FUN_14835fc58(lVar7,param_6);
        if (cVar1 == '\0') {
          FUN_14835fcc0(lVar7,&local_f8,local_100);
        }
        else {
          local_e8 = *(undefined8 *)(param_5 + 4);
          local_f8 = *param_5;
          uStack_f4 = param_5[1];
          uStack_f0 = param_5[2];
          uStack_ec = param_5[3];
        }
        lVar7 = *param_7;
        FUN_146bed047(&local_a8,lVar8 + lVar7,**(longlong **)(param_1 + 8) + lVar4 * 0x18);
        local_b0 = *(double *)(lVar7 + 0x30 + lVar8) * local_98;
        dStack_b8 = *(double *)(lVar7 + 0x28 + lVar8) * local_a0;
        local_c0 = *(double *)(lVar7 + 0x20 + lVar8) * local_a8;
        local_d8 = CONCAT44(uStack_f4,local_f8);
        uStack_d0 = CONCAT44(uStack_ec,uStack_f0);
        local_c8 = local_e8;
        plVar3 = *(longlong **)(*local_110 + lVar6 * 8);
        local_a8 = 1.79769313486232e+308;
        local_98 = 0.0;
        local_88 = (longlong *)0x0;
        local_58 = 0;
        cVar1 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_d8,&local_a8);
        if (local_98 != 0.0) {
          plVar3 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar3 = local_78;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (cVar1 != '\0') break;
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x88;
        if (lVar5 == lVar6) goto LAB_1483601f5;
      }
      lVar4 = local_108 + 1;
      uVar2 = (ulonglong)local_114;
    } while (lVar4 < **(int **)(param_1 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148360248 FUN_148360248 body=101 status=ok
// SIG undefined FUN_148360248(void)

void FUN_148360248(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_3;
  uStack_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_38 = param_7;
  local_48 = param_5;
  uStack_40 = param_6;
  FUN_1483602fe();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483602ae FUN_1483602ae body=32 status=ok
// SIG undefined FUN_1483602ae(void)

longlong FUN_1483602ae(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ae73e50;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return param_2 + 0x18;
}



// FUNCTION 1483602d4 FUN_1483602d4 body=12 status=ok
// SIG undefined FUN_1483602d4(void)

void FUN_1483602d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001483602dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1483602e0 FUN_1483602e0 body=29 status=ok
// SIG undefined FUN_1483602e0(void)

undefined8 FUN_1483602e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483602fe FUN_1483602fe body=627 status=ok
// SIG undefined FUN_1483602fe(void)

ulonglong FUN_1483602fe(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [36];
  uint local_114;
  undefined8 local_110;
  ulonglong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = DAT_14c8464f0;
  local_d8 = DAT_14c8464e0;
  uStack_d0 = DAT_14c8464e8;
  local_c0 = 0.0;
  dStack_b8 = 0.0;
  local_b0 = 1.0;
  local_100 = param_2;
  if ((longlong)(int)param_2[1] < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3ff0000000000001;
    uVar6 = 0;
    local_110 = param_4;
    local_108 = (longlong)(int)param_2[1];
    do {
      local_114 = (uint)uVar4;
      lVar7 = *param_7 + uVar6 * 0x88;
      cVar2 = FUN_14835fc58(lVar7,param_6);
      if (cVar2 == '\0') {
        FUN_14835fcc0(lVar7,&local_f8,local_110);
      }
      else {
        local_e8 = param_5[2];
        local_f8 = *param_5;
        uStack_f0 = param_5[1];
      }
      local_c8 = local_e8;
      local_d8 = local_f8;
      uStack_d0 = uStack_f0;
      if (**(int **)(param_1 + 0x10) < 1) {
LAB_1483604f5:
        uVar4 = (ulonglong)local_114;
        break;
      }
      lVar8 = 0;
      lVar7 = 0;
      while( true ) {
        lVar1 = *param_7 + uVar6 * 0x88;
        FUN_146bed047(&local_a8,lVar1 + 0x50,**(longlong **)(param_1 + 8) + lVar8);
        local_b0 = *(double *)(lVar1 + 0x80) * local_98;
        dStack_b8 = *(double *)(lVar1 + 0x78) * local_a0;
        local_c0 = *(double *)(lVar1 + 0x70) * local_a8;
        plVar5 = *(longlong **)(*local_100 + uVar6 * 8);
        local_a8 = 1.79769313486232e+308;
        local_98 = 0.0;
        local_88 = (longlong *)0x0;
        local_58 = 0;
        uVar3 = (**(code **)(*plVar5 + 0x68))(plVar5,&local_d8,&local_a8);
        cVar2 = (char)uVar3;
        if (local_98 != 0.0) {
          plVar5 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar5 = local_78;
          }
          uVar3 = (**(code **)(*plVar5 + 0x10))();
        }
        if (cVar2 == '\0') break;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x18;
        if (**(int **)(param_1 + 0x10) <= lVar7) goto LAB_1483604f5;
      }
      uVar6 = uVar6 + 1;
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),uVar6 < local_108);
    } while (uVar6 != local_108);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 148360572 FUN_148360572 body=150 status=ok
// SIG undefined FUN_148360572(void)

void FUN_148360572(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14836060a FUN_14836060a body=354 status=ok
// SIG undefined FUN_14836060a(void)

void FUN_14836060a(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar10 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  dVar9 = 0.0;
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar5 = 0.0;
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
    dVar9 = dVar4 * dVar10;
    dVar8 = -dVar3 * dVar10;
    dVar7 = -dVar2 * dVar10;
    dVar5 = -dVar1 * dVar10;
  }
  param_1[10] = dVar5;
  param_1[0xb] = dVar7;
  param_1[0xc] = dVar8;
  param_1[0xd] = dVar9;
  param_1[0xe] = param_1[7];
  param_1[0xf] = param_1[8];
  param_1[0x10] = param_1[9];
  lVar6 = 0;
  do {
    dVar1 = param_1[lVar6 + 0xe];
    param_1[lVar6 + 0xe] =
         (double)(~-(ulonglong)(ABS(dVar1) < 1e-06) & (ulonglong)(1.0 / dVar1) |
                 *(ulonglong *)(&DAT_14ae73100 + (ulonglong)(dVar1 < 0.0) * 8) &
                 -(ulonglong)(ABS(dVar1) < 1e-06));
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  return;
}



// FUNCTION 148360774 FUN_148360774 body=671 status=ok
// SIG undefined FUN_148360774(void)

void FUN_148360774(longlong *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  double *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (-1 < (int)param_2) {
    lVar13 = *(longlong *)(*param_1 + 8);
    if ((int)param_2 < *(int *)(lVar13 + 0x20) * 0x200 + *(int *)(lVar13 + 0x24)) {
      uVar12 = (ulonglong)(param_2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar13 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                             uVar12 * 2) - 1U) < 0xfffe) {
        lVar10 = *(longlong *)param_1[2];
        uVar14 = (ulonglong)param_2;
        if (*(char *)(lVar10 + uVar14) == '\0') {
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
          pdVar1 = (double *)(lVar13 + uVar12 * 0x18);
          lVar4 = *(longlong *)(param_1[1] + 8);
          dVar2 = *(double *)(*param_1 + 0x18);
          local_98 = dVar2 * *(double *)(lVar4 + uVar14 * 0x18) + *pdVar1;
          dStack_90 = *(double *)(lVar4 + 8 + uVar14 * 0x18) * dVar2 + pdVar1[1];
          local_88 = *(double *)(lVar4 + 0x10 + uVar14 * 0x18) * dVar2 +
                     *(double *)(lVar13 + 0x10 + uVar12 * 0x18);
          iVar3 = *(int *)(param_1[4] + 8);
          if ((longlong)iVar3 < 1) {
            bVar8 = 1;
          }
          else {
            bVar8 = 1;
            lVar13 = 0;
            do {
              lVar10 = *(longlong *)param_1[4];
              local_68 = *(double *)(lVar10 + 0x48 + lVar13) * local_88;
              local_70 = *(double *)(lVar10 + 0x40 + lVar13) * dStack_90;
              local_78 = *(double *)(lVar10 + 0x38 + lVar13) * local_98;
              FUN_146bed047(&local_60,lVar10 + lVar13,&local_78);
              local_a0 = local_50 + *(double *)(lVar10 + 0x30 + lVar13);
              local_a8 = local_58 + *(double *)(lVar10 + 0x28 + lVar13);
              local_b0 = local_60 + *(double *)(lVar10 + 0x20 + lVar13);
              if ((bVar8 & 1) == 0) {
                bVar8 = 0;
              }
              else {
                lVar4 = param_1[7];
                puVar5 = (undefined8 *)param_1[3];
                local_c8 = *(undefined8 *)param_1[6];
                uStack_c0 = ((undefined8 *)param_1[6])[1];
                puVar6 = (undefined4 *)param_1[5];
                local_d8 = *puVar6;
                uStack_d4 = puVar6[1];
                uStack_d0 = puVar6[2];
                uStack_cc = puVar6[3];
                pcVar7 = (code *)*puVar5;
                plVar11 = puVar5 + 4;
                if ((longlong *)puVar5[2] != (longlong *)0x0) {
                  plVar11 = (longlong *)puVar5[2];
                }
                uVar9 = (**(code **)(*plVar11 + 8))();
                local_f8 = &local_98;
                local_f0 = lVar10 + lVar13;
                local_e8 = lVar4;
                bVar8 = (*pcVar7)(uVar9,&local_d8,&local_c8,&local_b0);
              }
              lVar13 = lVar13 + 0x50;
            } while ((longlong)iVar3 * 0x50 != lVar13);
            lVar10 = *(longlong *)param_1[2];
          }
          *(byte *)(lVar10 + uVar14) = bVar8;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148360a1c FUN_148360a1c body=1216 status=ok
// SIG undefined FUN_148360a1c(void)

void FUN_148360a1c(longlong *param_1,uint param_2)

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
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  code *pcVar21;
  byte bVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  longlong local_1a0;
  longlong local_198;
  ulonglong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((int)param_2 < 0) goto LAB_148360b5c;
  lVar16 = *param_1;
  lVar25 = *(longlong *)(lVar16 + 8);
  if (*(int *)(lVar25 + 0x140) * 0x200 + *(int *)(lVar25 + 0x144) <= (int)param_2)
  goto LAB_148360b5c;
  uVar26 = (ulonglong)(param_2 >> 9);
  uVar27 = (ulonglong)(param_2 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar25 + 0x148) + uVar26 * 8) +
                                  uVar27 * 2) - 1U)) goto LAB_148360b5c;
  bVar22 = 1;
  if (*(int *)(lVar16 + 0x10) - 1U < 2) {
    lVar17 = *(longlong *)(*(longlong *)(lVar25 + 0x130) + uVar26 * 8);
    lVar18 = *(longlong *)param_1[1];
    if ((*(char *)(lVar18 + *(int *)(lVar17 + uVar27 * 0xc)) != '\x01') ||
       (*(char *)(lVar18 + *(int *)(lVar17 + uVar27 * 0xc + 4)) != '\x01')) goto LAB_148360b5c;
    bVar22 = *(byte *)(lVar18 + *(int *)(lVar17 + 8 + uVar27 * 0xc));
    if (bVar22 == 1) goto LAB_148360b38;
  }
  else {
LAB_148360b38:
    if (0 < *(int *)(param_1[4] + 8)) {
      FUN_146c13dec(lVar25,&local_128,param_2);
      if ((0 < (int)*(uint *)(param_1[4] + 8) & bVar22) == 1) {
        lVar25 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x10);
        lVar17 = *(longlong *)(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x130) + uVar26 * 8);
        uVar14 = *(uint *)(lVar17 + uVar27 * 0xc);
        uVar15 = *(uint *)(lVar17 + 4 + uVar27 * 0xc);
        lVar18 = *(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8);
        uVar26 = (ulonglong)uVar14 & 0x1ff;
        dVar1 = *(double *)(lVar18 + uVar26 * 0x18);
        dVar2 = *(double *)(lVar18 + 8 + uVar26 * 0x18);
        dVar3 = *(double *)(lVar18 + 0x10 + uVar26 * 0x18);
        lVar18 = *(longlong *)(lVar25 + (ulonglong)(uVar15 >> 9) * 8);
        uVar26 = (ulonglong)uVar15 & 0x1ff;
        dVar4 = *(double *)(lVar18 + uVar26 * 0x18);
        dVar5 = *(double *)(lVar18 + 8 + uVar26 * 0x18);
        dVar6 = *(double *)(lVar18 + 0x10 + uVar26 * 0x18);
        uVar14 = *(uint *)(lVar17 + 8 + uVar27 * 0xc);
        lVar25 = *(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8);
        uVar26 = (ulonglong)uVar14 & 0x1ff;
        dVar7 = *(double *)(lVar25 + uVar26 * 0x18);
        dVar8 = *(double *)(lVar25 + 8 + uVar26 * 0x18);
        dVar9 = *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
        local_188 = (ulonglong)*(uint *)(param_1[4] + 8);
        uVar26 = 0;
        do {
          lVar25 = *(longlong *)param_1[4];
          dVar10 = *(double *)(lVar25 + uVar26 * 0x18);
          dVar11 = *(double *)(lVar25 + 8 + uVar26 * 0x18);
          dVar12 = *(double *)(lVar25 + 0x10 + uVar26 * 0x18);
          dVar13 = *(double *)(lVar16 + 0x18);
          local_130 = local_118 * dVar13 + dVar9 * dVar12 + dVar6 * dVar11 + dVar3 * dVar10;
          local_138 = local_120 * dVar13 + dVar8 * dVar12 + dVar5 * dVar11 + dVar2 * dVar10;
          local_140 = dVar13 * local_128 + dVar12 * dVar7 + dVar11 * dVar4 + dVar10 * dVar1;
          if (0 < (longlong)*(int *)(param_1[3] + 8)) {
            local_180 = (longlong)*(int *)(param_1[3] + 8) * 0x50;
            lVar25 = 0;
            do {
              lVar17 = *(longlong *)param_1[3];
              local_100 = *(double *)(lVar17 + 0x48 + lVar25) * local_130;
              local_108 = *(double *)(lVar17 + 0x40 + lVar25) * local_138;
              local_110 = *(double *)(lVar17 + 0x38 + lVar25) * local_140;
              FUN_146bed047(&local_f8,lVar17 + lVar25,&local_110);
              local_148 = local_e8 + *(double *)(lVar17 + 0x30 + lVar25);
              local_150 = local_f0 + *(double *)(lVar17 + 0x28 + lVar25);
              local_158 = local_f8 + *(double *)(lVar17 + 0x20 + lVar25);
              if ((bVar22 & 1) == 0) {
                bVar22 = 0;
              }
              else {
                lVar18 = param_1[8];
                puVar19 = (undefined8 *)param_1[2];
                local_168 = *(undefined8 *)param_1[7];
                uStack_160 = ((undefined8 *)param_1[7])[1];
                puVar20 = (undefined4 *)param_1[6];
                local_178 = *puVar20;
                uStack_174 = puVar20[1];
                uStack_170 = puVar20[2];
                uStack_16c = puVar20[3];
                pcVar21 = (code *)*puVar19;
                plVar24 = puVar19 + 4;
                if ((longlong *)puVar19[2] != (longlong *)0x0) {
                  plVar24 = (longlong *)puVar19[2];
                }
                uVar23 = (**(code **)(*plVar24 + 8))();
                local_1a8 = &local_140;
                local_1a0 = lVar17 + lVar25;
                local_198 = lVar18;
                bVar22 = (*pcVar21)(uVar23,&local_178,&local_168,&local_158);
              }
              lVar25 = lVar25 + 0x50;
            } while (local_180 != lVar25);
          }
        } while (((bVar22 & 1) != 0) && (uVar26 = uVar26 + 1, uVar26 < local_188));
      }
    }
  }
  if ((bVar22 & 1) != 0) {
    LOCK();
    *(undefined4 *)(*(longlong *)param_1[5] + (ulonglong)param_2 * 4) = 1;
    UNLOCK();
  }
LAB_148360b5c:
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148360edd FUN_148360edd body=43 status=ok
// SIG undefined FUN_148360edd(void)

void FUN_148360edd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 148360f08 FUN_148360f08 body=48 status=ok
// SIG undefined FUN_148360f08(void)

void FUN_148360f08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148360f38 FUN_148360f38 body=132 status=ok
// SIG undefined FUN_148360f38(void)

void FUN_148360f38(longlong param_1,int param_2)

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



// FUNCTION 148360fbd FUN_148360fbd body=4505 status=ok
// SIG undefined FUN_148360fbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_148360fbd(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       longlong param_5,char *param_6,undefined8 param_7)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  code *pcVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auStack_198 [40];
  code *local_170;
  int local_164;
  code *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint uStack_134;
  int local_130;
  uint local_128;
  undefined4 uStack_124;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8 [6];
  float afStack_b0 [3];
  float afStack_a4 [3];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = param_3;
  FUN_146c19dca(param_7);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar23 = ((longlong)*(int *)(param_4 + 0xc0) - (longlong)*(int *)(param_4 + 0xec)) +
           (longlong)*(int *)(param_2 + 0x38);
  uVar22 = (uint)lVar23;
  if (uVar22 != 0) {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(lVar23);
    }
    FUN_140ab2830(&local_98);
    iVar9 = 1;
    if (3 < uVar22) {
      uVar22 = (uVar22 | 1) + 0xe;
      iVar9 = 0x1f;
      if (uVar22 != 0) {
        for (; uVar22 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      iVar9 = 1 << ((byte)iVar9 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar9)) {
      local_50 = iVar9;
      FUN_140264164();
    }
  }
  uVar29 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  uVar22 = 0;
  if ((uVar29 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
    uVar24 = 1;
    uVar12 = 1;
    if (1 < (int)uVar29) {
      uVar12 = uVar29;
    }
    do {
      uVar17 = uVar24;
      uVar22 = uVar12;
      if (uVar12 == uVar17) break;
      uVar24 = uVar17 + 1;
      uVar22 = uVar17;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar17 >> 9] +
                                         (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
  }
  local_158 = param_4;
  local_150 = param_1;
  if (uVar22 != uVar29) {
    do {
      lVar23 = *(longlong *)(param_2 + 0x48);
      lVar18 = 0;
      do {
        uVar24 = uVar22 * 3 + (int)lVar18;
        local_c8[lVar18] =
             *(float *)(*(longlong *)(lVar23 + (ulonglong)(uVar24 >> 9) * 8) +
                       (ulonglong)(uVar24 & 0x1ff) * 4);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      local_128 = uVar22;
      local_138 = FUN_146c2f9e2(param_7,local_c8);
      local_118 = (code *)&local_128;
      local_110 = &local_138;
      FUN_140c0fbee(&local_98,&local_e8,&local_118);
      uVar24 = uVar22 + 1;
      if ((int)(uVar22 + 1) < (int)uVar29) {
        uVar24 = uVar29;
      }
      do {
        uVar12 = uVar24;
        if (uVar24 - 1 == uVar22) break;
        uVar22 = uVar22 + 1;
        uVar12 = uVar22;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x10) +
                                             (ulonglong)(uVar22 >> 9) * 8) +
                                           (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
      uVar22 = uVar12;
    } while (uVar22 != uVar29);
  }
  lVar23 = local_158;
  if (param_6 == (char *)0x0) {
LAB_148361208:
    lVar18 = local_150;
    pcVar21 = (code *)(lVar23 + 8);
    pcVar1 = (code *)(lVar23 + 0x18);
    local_e8 = (undefined4 *)&DAT_100000000;
    local_d8 = 0xffffffff;
    uStack_d0 = 0;
    uStack_e0 = pcVar1;
    if (*(int *)(lVar23 + 0x30) == 0) {
      local_164 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      local_164 = *(int *)(lVar23 + 0x30);
    }
    uStack_f8 = CONCAT44(uStack_cc,uStack_d0);
    local_100 = local_d8;
    uVar11 = local_100;
    local_110 = local_e8;
    uStack_108 = (int)uStack_e0;
    uStack_104 = uStack_e0._4_4_;
    local_100._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    iVar9 = local_100._4_4_;
    local_170 = pcVar21;
    local_160 = pcVar1;
    local_118 = pcVar21;
    if ((local_100._4_4_ != local_164) || (local_100 = uVar11, uStack_e0 != pcVar1)) {
      do {
        local_100 = uVar11;
        uVar22 = *(uint *)(*(longlong *)local_118 + (longlong)iVar9 * 0xc);
        lVar20 = *(longlong *)(*(longlong *)(lVar18 + 0x1c0) + (ulonglong)(uVar22 >> 9) * 8);
        uVar16 = (ulonglong)((uVar22 & 0x1ff) << 4);
        uVar13 = *(ulonglong *)(lVar20 + uVar16);
        uVar16 = *(ulonglong *)(lVar20 + 8 + uVar16);
        FUN_14832b114(lVar23,&local_128,uVar22);
        uVar29 = (int)uVar16 * 3;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar29 >> 9) * 8) +
                         (ulonglong)(uVar29 & 0x1ff) * 4)) {
          FUN_1483628f2(lVar23,&local_138,uVar22,uVar16 & 0xffffffff);
          iVar9 = FUN_146c31d60(param_2,uVar16 & 0xffffffff,uVar13 & 0xffffffff);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar29 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 9] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          iVar9 = FUN_146c31d60(param_2,uVar16 & 0xffffffff,uVar13 >> 0x20);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar29 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 6] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          if (0 < local_130) {
            lVar20 = 0;
            do {
              local_ec = *(undefined4 *)(CONCAT44(uStack_134,local_138) + lVar20 * 4);
              dVar2 = (double)(float)*(double *)(CONCAT44(uStack_124,local_128) + lVar20 * 8);
              if (1.0 <= dVar2) {
                dVar2 = 1.0;
              }
              if (dVar2 <= 0.0) {
                dVar2 = 0.0;
              }
              lVar19 = 0;
              do {
                local_c8[lVar19] =
                     (float)((double)local_c8[lVar19 + 6] * dVar2 +
                            (double)local_c8[lVar19 + 9] * (1.0 - dVar2));
                lVar19 = lVar19 + 1;
              } while (lVar19 != 3);
              local_13c = FUN_146c2f9e2(param_7,local_c8);
              uStack_e0 = (code *)&local_13c;
              local_e8 = &local_ec;
              FUN_140c0fbee(&local_98,local_c8 + 3,&local_e8,0);
              lVar20 = lVar20 + 1;
            } while (lVar20 < local_130);
          }
        }
        uVar28 = uVar16 >> 0x20;
        iVar9 = (int)(uVar16 >> 0x20);
        if (((iVar9 != -1) &&
            (uVar29 = iVar9 * 3,
            -1 < *(int *)(*(longlong *)
                           (*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar29 >> 9) * 8) +
                         (ulonglong)(uVar29 & 0x1ff) * 4))) &&
           (cVar8 = FUN_146c1aaf4(param_2,uVar22,0), cVar8 != '\0')) {
          FUN_1483628f2(lVar23,&local_138,uVar22,uVar28);
          iVar9 = FUN_146c31d60(param_2,uVar28,uVar13 & 0xffffffff);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar22 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 9] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar22 >> 9) * 8) +
                             (ulonglong)(uVar22 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          iVar9 = FUN_146c31d60(param_2,uVar28,uVar13 >> 0x20);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar22 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 6] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar22 >> 9) * 8) +
                             (ulonglong)(uVar22 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          if (0 < local_130) {
            lVar20 = 0;
            do {
              local_ec = *(undefined4 *)(CONCAT44(uStack_134,local_138) + lVar20 * 4);
              dVar2 = (double)(float)*(double *)(CONCAT44(uStack_124,local_128) + lVar20 * 8);
              if (1.0 <= dVar2) {
                dVar2 = 1.0;
              }
              if (dVar2 <= 0.0) {
                dVar2 = 0.0;
              }
              lVar19 = 0;
              do {
                local_c8[lVar19] =
                     (float)((double)local_c8[lVar19 + 6] * dVar2 +
                            (double)local_c8[lVar19 + 9] * (1.0 - dVar2));
                lVar19 = lVar19 + 1;
              } while (lVar19 != 3);
              local_13c = FUN_146c2f9e2(param_7,local_c8);
              uStack_e0 = (code *)&local_13c;
              local_e8 = &local_ec;
              FUN_140c0fbee(&local_98,local_c8 + 3,&local_e8,0);
              lVar20 = lVar20 + 1;
            } while (lVar20 < local_130);
          }
        }
        local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
        FUN_1449c0562(&local_110);
        iVar9 = local_100._4_4_;
        uVar11 = local_100;
      } while (local_118 != local_170 ||
               ((code *)CONCAT44(uStack_104,uStack_108) != local_160 || local_100._4_4_ != local_164
               ));
    }
    if (param_6 == (char *)0x0) {
LAB_148361301:
      pcVar21 = (code *)(lVar23 + 0x58);
      local_170 = (code *)(lVar23 + 0x68);
      local_e8 = (undefined4 *)&DAT_100000000;
      local_d8 = 0xffffffff;
      uStack_d0 = 0;
      uStack_e0 = local_170;
      if (*(int *)(lVar23 + 0x80) == 0) {
        local_164 = 0;
      }
      else {
        FUN_1449c0562(&local_e8);
        local_164 = *(int *)(lVar23 + 0x80);
      }
      uStack_f8 = CONCAT44(uStack_cc,uStack_d0);
      local_100 = local_d8;
      uVar11 = local_100;
      local_110 = local_e8;
      uStack_108 = (int)uStack_e0;
      uStack_104 = uStack_e0._4_4_;
      local_100._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
      iVar9 = local_100._4_4_;
      local_160 = pcVar21;
      local_118 = pcVar21;
      if ((local_100._4_4_ != local_164) || (local_100 = uVar11, uStack_e0 != local_170)) {
        do {
          local_100 = uVar11;
          uVar22 = *(uint *)(*(longlong *)local_118 + (longlong)iVar9 * 0xc);
          lVar20 = *(longlong *)(*(longlong *)(lVar18 + 0x130) + (ulonglong)(uVar22 >> 9) * 8);
          uVar13 = (ulonglong)(uVar22 & 0x1ff);
          uVar5 = *(undefined4 *)(lVar20 + 4 + uVar13 * 0xc);
          uVar6 = *(undefined4 *)(lVar20 + 8 + uVar13 * 0xc);
          iVar9 = FUN_146c31d60(param_2,uVar22,*(undefined4 *)(lVar20 + uVar13 * 0xc));
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar29 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 9] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          iVar9 = FUN_146c31d60(param_2,uVar22,uVar5);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar29 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 6] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          iVar9 = FUN_146c31d60(param_2,uVar22,uVar6);
          if (iVar9 != -1) {
            lVar20 = *(longlong *)(param_2 + 0x48);
            lVar19 = 0;
            do {
              uVar29 = iVar9 * 3 + (int)lVar19;
              local_c8[lVar19 + 3] =
                   *(float *)(*(longlong *)(lVar20 + (ulonglong)(uVar29 >> 9) * 8) +
                             (ulonglong)(uVar29 & 0x1ff) * 4);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
          }
          FUN_14832b286(lVar23,&local_128,uVar22);
          FUN_14832b30c(lVar23,&local_138,uVar22);
          if (0 < local_120) {
            lVar20 = 0;
            do {
              lVar19 = CONCAT44(uStack_124,local_128);
              dVar2 = *(double *)(lVar19 + lVar20 * 0x18);
              dVar3 = *(double *)(lVar19 + 8 + lVar20 * 0x18);
              dVar4 = *(double *)(lVar19 + 0x10 + lVar20 * 0x18);
              local_13c = *(undefined4 *)(CONCAT44(uStack_134,local_138) + lVar20 * 4);
              lVar19 = 0;
              do {
                local_c8[lVar19] =
                     (float)((double)local_c8[lVar19 + 3] * dVar4 +
                            (double)local_c8[lVar19 + 6] * dVar3 +
                            (double)local_c8[lVar19 + 9] * dVar2);
                lVar19 = lVar19 + 1;
              } while (lVar19 != 3);
              local_140 = FUN_146c2f9e2(param_7,local_c8);
              uStack_e0 = (code *)&local_140;
              local_e8 = &local_13c;
              FUN_140c0fbee(&local_98,&local_ec,&local_e8,0);
              lVar20 = lVar20 + 1;
            } while (lVar20 < local_120);
          }
          local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
          FUN_1449c0562(&local_110);
          iVar9 = local_100._4_4_;
          uVar11 = local_100;
        } while (local_118 != local_160 ||
                 ((code *)CONCAT44(uStack_104,uStack_108) != local_170 ||
                 local_100._4_4_ != local_164));
      }
      if (param_6 == (char *)0x0) {
LAB_1483616be:
        uVar29 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
        uVar22 = 0;
        if ((uVar29 != 0) &&
           (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))) {
          uVar24 = 1;
          uVar12 = 1;
          if (1 < (int)uVar29) {
            uVar24 = uVar29;
          }
          do {
            uVar22 = uVar24;
            if (uVar24 == uVar12) break;
            uVar17 = uVar12 >> 9;
            uVar25 = uVar12 & 0x1ff;
            uVar22 = uVar12;
            uVar12 = uVar12 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar17] +
                                               (ulonglong)uVar25 * 2) - 1U));
        }
        pcVar21 = local_160;
        if (uVar22 != uVar29) {
          lVar20 = lVar23 + 0x90;
          do {
            uVar12 = uVar22 * 3;
            lVar19 = *(longlong *)(param_2 + 0x78);
            uVar24 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4);
            if (-1 < (int)uVar24) {
              if (*(int *)(lVar23 + 0x60) != *(int *)(lVar23 + 0x8c)) {
                lVar26 = *(longlong *)(lVar23 + 0x98);
                if (*(longlong *)(lVar23 + 0x98) == 0) {
                  lVar26 = lVar20;
                }
                iVar9 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar23 + 0xa0) - 1U & uVar22) * 4);
                if (iVar9 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)pcVar21 + (longlong)iVar9 * 0xc) == uVar22)
                    goto LAB_148361afa;
                    iVar9 = *(int *)(*(longlong *)pcVar21 + (longlong)iVar9 * 0xc + 4);
                  } while (iVar9 != -1);
                }
              }
              uVar17 = _DAT_00000004;
              uVar25 = _DAT_00000004;
              if ((int)uStack_90 != local_64) {
                uVar17 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
                puVar15 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar15 = local_60;
                }
                iVar9 = *(int *)(puVar15 + (ulonglong)(local_50 - 1U & uVar17) * 4);
                if (iVar9 == -1) {
                  puVar27 = (uint *)&DAT_00000004;
                }
                else {
                  do {
                    lVar23 = local_98 + (longlong)iVar9 * 0x10;
                    if (*(uint *)(local_98 + (longlong)iVar9 * 0x10) == uVar17) goto LAB_148361c13;
                    iVar9 = *(int *)(lVar23 + 8);
                  } while (iVar9 != -1);
                  lVar23 = 0;
LAB_148361c13:
                  puVar27 = (uint *)(lVar23 + 4);
                }
                uVar12 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
                iVar9 = *(int *)(puVar15 + (ulonglong)(local_50 - 1U & uVar12) * 4);
                while (iVar9 != -1) {
                  lVar23 = local_98 + (longlong)iVar9 * 0x10;
                  if (*(uint *)(local_98 + (longlong)iVar9 * 0x10) == uVar12) goto LAB_148361c60;
                  iVar9 = *(int *)(lVar23 + 8);
                }
                lVar23 = 0;
LAB_148361c60:
                uVar17 = *puVar27;
                uVar25 = *(uint *)(lVar23 + 4);
                iVar9 = *(int *)(puVar15 + (ulonglong)(local_50 + 0x7fffffffU & uVar24) * 4);
                while (pcVar21 = local_160, lVar23 = local_158, lVar18 = local_150, iVar9 != -1) {
                  lVar19 = local_98 + (longlong)iVar9 * 0x10;
                  if (*(uint *)(local_98 + (longlong)iVar9 * 0x10) == uVar24) goto LAB_148361ab6;
                  iVar9 = *(int *)(lVar19 + 8);
                }
              }
              lVar19 = 0;
LAB_148361ab6:
              local_118 = (code *)CONCAT44(uVar25,*(undefined4 *)(lVar19 + 4));
              local_110 = (undefined4 *)CONCAT44(local_110._4_4_,uVar17);
              FUN_146c01580(param_7,*(undefined4 *)
                                     (*(longlong *)(param_5 + 0x10) + (longlong)(int)uVar22 * 4),
                            &local_118);
            }
LAB_148361afa:
            uVar24 = uVar22 + 1;
            if ((int)(uVar22 + 1) < (int)uVar29) {
              uVar24 = uVar29;
            }
            do {
              uVar12 = uVar24;
              if (uVar24 - 1 == uVar22) break;
              uVar22 = uVar22 + 1;
              uVar12 = uVar22;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar18 + 0x148) +
                                                   (ulonglong)(uVar22 >> 9) * 8) +
                                                 (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
            uVar22 = uVar12;
          } while (uVar22 != uVar29);
        }
        local_e8 = (undefined4 *)&DAT_100000000;
        uStack_e0 = local_170;
        local_d8 = 0xffffffff;
        uStack_d0 = 0;
        if (*(int *)(lVar23 + 0x80) == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_e8);
          iVar9 = *(int *)(lVar23 + 0x80);
        }
        uStack_f8 = CONCAT44(uStack_cc,uStack_d0);
        local_100 = local_d8;
        uVar11 = local_100;
        local_110 = local_e8;
        uStack_108 = (int)uStack_e0;
        uStack_104 = uStack_e0._4_4_;
        local_100._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
        local_118 = pcVar21;
        if ((local_100._4_4_ != iVar9) || (uStack_e0 != local_170)) {
          iVar10 = local_100._4_4_;
          local_100 = uVar11;
          do {
            iVar10 = *(int *)(*(longlong *)local_118 + (longlong)iVar10 * 0xc);
            if (-1 < *(int *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x78) +
                               (ulonglong)((uint)(iVar10 * 3) >> 9) * 8) +
                             (ulonglong)(iVar10 * 3 & 0x1ff) * 4)) {
              FUN_14832b38e(lVar23,&local_e8,iVar10);
              FUN_14832b414(local_148,&local_128,iVar10);
              puVar7 = local_e8;
              lVar18 = (longlong)(int)uStack_e0;
              pcVar21 = local_160;
              lVar23 = local_158;
              if (0 < lVar18) {
                lVar20 = CONCAT44(uStack_124,local_128);
                lVar19 = 0;
                do {
                  if ((int)uStack_90 == local_64) {
                    uVar13 = (ulonglong)_DAT_00000004;
                    uStack_134 = _DAT_00000004;
                  }
                  else {
                    puVar15 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar15 = local_60;
                    }
                    uVar22 = local_50 - 1;
                    iVar10 = *(int *)(puVar15 + (ulonglong)(uVar22 & puVar7[lVar19 * 3 + 2]) * 4);
                    if (iVar10 == -1) {
                      puVar27 = (uint *)&DAT_00000004;
                    }
                    else {
                      do {
                        lVar23 = local_98 + (longlong)iVar10 * 0x10;
                        if (*(uint *)(local_98 + (longlong)iVar10 * 0x10) == puVar7[lVar19 * 3 + 2])
                        goto LAB_1483619d0;
                        iVar10 = *(int *)(lVar23 + 8);
                      } while (iVar10 != -1);
                      lVar23 = 0;
LAB_1483619d0:
                      puVar27 = (uint *)(lVar23 + 4);
                    }
                    iVar10 = *(int *)(puVar15 + (ulonglong)(uVar22 & puVar7[lVar19 * 3 + 1]) * 4);
                    while (iVar10 != -1) {
                      lVar23 = local_98 + (longlong)iVar10 * 0x10;
                      if (*(uint *)(local_98 + (longlong)iVar10 * 0x10) == puVar7[lVar19 * 3 + 1])
                      goto LAB_148361a03;
                      iVar10 = *(int *)(lVar23 + 8);
                    }
                    lVar23 = 0;
LAB_148361a03:
                    uVar13 = (ulonglong)*puVar27;
                    uStack_134 = *(uint *)(lVar23 + 4);
                    iVar10 = *(int *)(puVar15 + (ulonglong)(uVar22 & puVar7[lVar19 * 3]) * 4);
                    while (iVar10 != -1) {
                      lVar23 = local_98 + (longlong)iVar10 * 0x10;
                      if (*(uint *)(local_98 + (longlong)iVar10 * 0x10) == puVar7[lVar19 * 3])
                      goto LAB_148361927;
                      iVar10 = *(int *)(lVar23 + 8);
                    }
                  }
                  lVar23 = 0;
LAB_148361927:
                  local_138 = *(undefined4 *)(lVar23 + 4);
                  local_130 = (int)uVar13;
                  FUN_146c01580(param_7,*(undefined4 *)
                                         (*(longlong *)(param_5 + 0x10) +
                                         (longlong)*(int *)(lVar20 + lVar19 * 4) * 4),&local_138,
                                CONCAT71((int7)(uVar13 >> 8),1));
                  lVar19 = lVar19 + 1;
                  pcVar21 = local_160;
                  lVar23 = local_158;
                } while (lVar19 != lVar18);
              }
            }
            local_100 = CONCAT44(local_100._4_4_,(uint)local_100 & ~local_110._4_4_);
            FUN_1449c0562(&local_110);
            iVar10 = local_100._4_4_;
            uVar11 = local_100;
          } while (local_118 != pcVar21 ||
                   ((code *)CONCAT44(uStack_104,uStack_108) != local_170 || local_100._4_4_ != iVar9
                   ));
        }
        local_100 = uVar11;
        if (param_6 == (char *)0x0) {
LAB_148361839:
          uVar13 = CONCAT71((int7)((ulonglong)pcVar21 >> 8),1);
          goto LAB_1483617df;
        }
        if (*param_6 == '\0') {
          pcVar21 = *(code **)(param_6 + 0x70);
          plVar14 = (longlong *)(param_6 + 0x90);
          if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
            plVar14 = *(longlong **)(param_6 + 0x80);
          }
          uVar11 = (**(code **)(*plVar14 + 8))();
          cVar8 = (*pcVar21)(uVar11);
          *param_6 = cVar8;
          if (cVar8 == '\0') goto LAB_148361839;
        }
      }
      else if (*param_6 == '\0') {
        pcVar21 = *(code **)(param_6 + 0x70);
        plVar14 = (longlong *)(param_6 + 0x90);
        if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_6 + 0x80);
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        cVar8 = (*pcVar21)(uVar11);
        *param_6 = cVar8;
        if (cVar8 == '\0') goto LAB_1483616be;
      }
    }
    else if (*param_6 == '\0') {
      pcVar21 = *(code **)(param_6 + 0x70);
      plVar14 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar14 = *(longlong **)(param_6 + 0x80);
      }
      uVar11 = (**(code **)(*plVar14 + 8))();
      cVar8 = (*pcVar21)(uVar11);
      *param_6 = cVar8;
      if (cVar8 == '\0') goto LAB_148361301;
    }
  }
  else if (*param_6 == '\0') {
    pcVar21 = *(code **)(param_6 + 0x70);
    plVar14 = (longlong *)(param_6 + 0x90);
    if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_6 + 0x80);
    }
    uVar11 = (**(code **)(*plVar14 + 8))();
    cVar8 = (*pcVar21)(uVar11);
    *param_6 = cVar8;
    if (cVar8 == '\0') goto LAB_148361208;
  }
  uVar13 = 0;
LAB_1483617df:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_98);
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 148362158 FUN_148362158 body=38 status=ok
// SIG undefined FUN_148362158(void)

undefined8 FUN_148362158(undefined8 param_1,int param_2)

{
  FUN_1483660a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836217e FUN_14836217e body=1298 status=ok
// SIG undefined FUN_14836217e(void)

void FUN_14836217e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  uint local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x248);
  local_c0 = 0;
  uVar12 = *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4);
  uVar16 = 0;
  if (uVar12 != 0) {
    uVar16 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U)) {
      uVar6 = 1;
      uVar9 = 1;
      if (1 < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar16 = uVar6;
        if (uVar6 == uVar9) break;
        uVar10 = uVar9 >> 9;
        uVar14 = uVar9 & 0x1ff;
        uVar16 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x1d8))[uVar10] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
  }
  local_a8 = 0;
  local_80 = param_2;
  if (uVar16 != uVar12) {
    local_88 = param_1 + 8;
    local_90 = param_1 + 0x118;
    local_a0 = param_1 + 0xb8;
    local_a8 = 0;
    local_c0 = 0;
    local_b4 = uVar12;
    local_98 = param_1;
    do {
      lVar2 = local_98;
      local_64 = uVar16;
      uVar8 = (**(code **)(*local_80 + 8))(local_80,uVar16);
      uVar1 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x248) + 0x1c0) +
                 (ulonglong)(local_64 >> 9) * 8) + 8 + (ulonglong)((local_64 & 0x1ff) << 4));
      uVar12 = (int)uVar1 * 3;
      uVar15 = (ulonglong)(uVar12 >> 9);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 600) + 0x78);
      uVar13 = (ulonglong)(uVar12 & 0x1ff);
      iVar5 = *(int *)(*(longlong *)(lVar2 + uVar15 * 8) + uVar13 * 4);
      bVar17 = -1 < iVar5;
      iVar3 = (int)(uVar1 >> 0x20);
      if ((uVar1 >> 0x20 != 0xffffffff) && (iVar5 < 0)) {
        bVar17 = -1 < *(int *)(*(longlong *)(lVar2 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                              (ulonglong)(iVar3 * 3 & 0x1ff) * 4);
      }
      uVar12 = local_b4;
      if ((0 < (int)uVar8) && (bVar17)) {
        local_b0 = uVar8;
        FUN_1447cbafe(local_88,&local_60,&local_64,0);
        local_6c = (int)local_a8;
        local_68 = (int)local_b0;
        local_58 = &local_6c;
        local_60 = &local_64;
        FUN_14834aa14(local_90,&local_74,&local_60,0);
        iVar11 = (int)local_b0;
        local_a8 = (ulonglong)(uint)((int)local_a8 + iVar11);
        iVar5 = (int)local_c0;
        local_6c = iVar5;
        local_68 = iVar11;
        local_60 = &local_74;
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) + uVar15 * 8)
                    + uVar13 * 4) < 0) {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = iVar3;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          local_c0 = (ulonglong)(uint)(iVar11 + iVar5);
          uVar12 = local_b4;
        }
        else {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = (int)uVar1;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          uVar12 = local_b4;
          if (iVar3 == -1) {
LAB_148362500:
            uVar6 = (int)local_c0 + (int)local_b0;
          }
          else {
            if (*(int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) +
                          (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                        (ulonglong)(iVar3 * 3 & 0x1ff) * 4) < 0) goto LAB_148362500;
            cVar4 = FUN_146c1aaf4(*(longlong *)(local_98 + 600),local_64,0);
            iVar11 = (int)local_c0;
            iVar5 = (int)local_b0;
            local_68 = iVar5;
            if (cVar4 != '\0') {
              local_6c = iVar5 + iVar11;
              local_74 = local_64;
              local_58 = &local_6c;
              local_70 = iVar3;
              local_60 = &local_74;
              FUN_14834af3a(local_a0,local_4c,&local_60);
              local_c0 = (ulonglong)(uint)(iVar11 + iVar5 * 2);
              goto LAB_148362389;
            }
            local_74 = local_64;
            local_58 = &local_6c;
            local_70 = iVar3;
            local_6c = iVar11;
            local_60 = &local_74;
            FUN_14834af3a(local_a0,local_4c,&local_60);
            uVar6 = iVar5 + iVar11;
          }
          local_c0 = (ulonglong)uVar6;
        }
      }
LAB_148362389:
      uVar6 = uVar16 + 1;
      if ((int)(uVar16 + 1) < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar9 = uVar6;
        if (uVar6 - 1 == uVar16) break;
        uVar16 = uVar16 + 1;
        uVar9 = uVar16;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x1d8) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      uVar16 = uVar9;
      param_1 = local_98;
    } while (uVar16 != uVar12);
  }
  FUN_144a1a59e(param_1 + 0xa8,local_c0,1);
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0xa8) + lVar7 * 4) = *(int *)(param_1 + 0x250) + (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xb0));
  }
  FUN_1400bd09c(param_1 + 0x108,local_a8,1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836270e FUN_14836270e body=482 status=ok
// SIG undefined FUN_14836270e(void)

void FUN_14836270e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') goto LAB_1483627fe;
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar8 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *pcVar2 = cVar6;
    if (cVar6 != '\0') goto LAB_1483627fe;
  }
  uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  uVar4 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8 +
           (ulonglong)((uVar1 & 0x1ff) << 4));
  uVar5 = (int)uVar4 * 3;
  if (-1 < *(int *)(*(longlong *)
                     (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4)) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 & 0xffffffff);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
  iVar9 = (int)(uVar4 >> 0x20);
  if ((iVar9 != -1) &&
     (uVar5 = iVar9 * 3,
     -1 < *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4))) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 >> 0x20);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
LAB_1483627fe:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483628f2 FUN_1483628f2 body=236 status=ok
// SIG undefined FUN_1483628f2(void)

longlong * FUN_1483628f2(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  piVar6 = (int *)0x0;
  local_30 = param_3;
  local_2c = param_4;
  uVar3 = FUN_1448eb174(&local_30,8,0);
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    lVar4 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x100) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        piVar6 = (int *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 0x18);
        if ((*piVar6 == local_30) &&
           (*(int *)(*(longlong *)(param_1 + 0xb8) + 4 + (longlong)iVar5 * 0x18) == local_2c))
        goto LAB_148362941;
        iVar5 = piVar6[4];
      } while (iVar5 != -1);
    }
    piVar6 = (int *)0x0;
  }
LAB_148362941:
  uVar2 = *(undefined8 *)(piVar6 + 2);
  *param_2 = lVar1 + (longlong)(int)uVar2 * 4;
  *(int *)(param_2 + 1) = (int)((ulonglong)uVar2 >> 0x20);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483629e8 FUN_1483629e8 body=1246 status=ok
// SIG undefined FUN_1483629e8(void)

void FUN_1483629e8(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_158 [40];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  bool local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar4 = *(char **)*param_1;
  if (pcVar4 != (char *)0x0) {
    if (*pcVar4 != '\0') goto LAB_148362a4d;
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar11 = (longlong *)(pcVar4 + 0x90);
    if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(pcVar4 + 0x80);
    }
    (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar5)();
    *pcVar4 = cVar7;
    if (cVar7 != '\0') goto LAB_148362a4d;
  }
  local_108 = 0xffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = false;
  local_d8 = 0xffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  lVar12 = *(longlong *)
            (*(longlong *)(*(longlong *)param_1[2] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  lVar9 = (ulonglong)((uVar2 & 0x1ff) << 2) * 3;
  iVar13 = *(int *)(lVar12 + lVar9);
  iVar16 = *(int *)(lVar12 + 4 + lVar9);
  iVar3 = *(int *)(lVar12 + 8 + lVar9);
  uVar15 = uVar2 * 3 + 2;
  lVar12 = *(longlong *)(*(longlong *)param_1[3] + 0x78);
  local_10c = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  uVar15 = uVar2 * 3 + 1;
  local_110 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  local_114 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar2 * 3 >> 9) * 8) +
               (ulonglong)(uVar2 * 3 & 0x1ff) * 4);
  lVar12 = param_1[4];
  iVar8 = *(int *)(lVar12 + 0x10);
  iVar10 = *(int *)(lVar12 + 0x3c);
  local_118 = uVar2;
  if (iVar8 != iVar10) {
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x180) + (ulonglong)(uVar2 >> 9) * 8);
    puVar1 = (uint *)(lVar6 + lVar9);
    uVar15 = *(uint *)(lVar6 + lVar9);
    lVar9 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar9 = *(longlong *)(lVar12 + 0x48);
    }
    iVar14 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
    local_12c = iVar3;
    if (iVar14 != -1) {
      do {
        local_130 = iVar16;
        if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc) == uVar15) {
          local_108 = uVar15;
          FUN_14832b114(lVar12,&local_f0,uVar15);
          FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
          local_100 = CONCAT44(uStack_124,local_128);
          uStack_f8 = uStack_120;
          uStack_f4 = uStack_11c;
          local_e0 = iVar13 != *(int *)(*(longlong *)
                                         (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                         (ulonglong)(*puVar1 >> 9) * 8) +
                                       (ulonglong)((*puVar1 & 0x1ff) << 4));
          lVar12 = param_1[4];
          iVar8 = *(int *)(lVar12 + 0x10);
          iVar10 = *(int *)(lVar12 + 0x3c);
          iVar16 = local_130;
          break;
        }
        iVar14 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc + 4);
      } while (iVar14 != -1);
    }
    if (iVar8 != iVar10) {
      uVar15 = puVar1[1];
      lVar9 = lVar12 + 0x40;
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x48);
      }
      iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
      if (iVar13 != -1) {
        do {
          local_130 = iVar16;
          if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
            local_d8 = uVar15;
            FUN_14832b114(lVar12,&local_128,uVar15);
            local_c0 = CONCAT44(uStack_124,local_128);
            uStack_b8 = uStack_120;
            uStack_b4 = uStack_11c;
            FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
            uStack_c8 = uStack_120;
            local_d0 = CONCAT44(uStack_124,local_128);
            local_b0 = local_130 !=
                       *(int *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                 (ulonglong)(puVar1[1] >> 9) * 8) +
                               (ulonglong)((puVar1[1] & 0x1ff) << 4));
            lVar12 = param_1[4];
            iVar8 = *(int *)(lVar12 + 0x10);
            iVar10 = *(int *)(lVar12 + 0x3c);
            break;
          }
          iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
        } while (iVar13 != -1);
      }
      if (iVar8 != iVar10) {
        uVar15 = puVar1[2];
        lVar9 = lVar12 + 0x40;
        if (*(longlong *)(lVar12 + 0x48) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x48);
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
        if (iVar13 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
              local_a8 = uVar15;
              FUN_14832b114(lVar12,&local_128,uVar15);
              local_90 = CONCAT44(uStack_124,local_128);
              uStack_88 = uStack_120;
              uStack_84 = uStack_11c;
              FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
              uStack_98 = uStack_120;
              local_a0 = CONCAT44(uStack_124,local_128);
              local_80 = local_12c !=
                         *(int *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                   (ulonglong)(puVar1[2] >> 9) * 8) +
                                 (ulonglong)((puVar1[2] & 0x1ff) << 4));
              lVar12 = param_1[4];
              break;
            }
            iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
          } while (iVar13 != -1);
        }
      }
    }
  }
  FUN_14832b286(lVar12,&local_128,uVar2);
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  FUN_14832b30c(lVar12,&local_128,uVar2);
  uStack_70 = uStack_120;
  uStack_6c = uStack_11c;
  FUN_14832b38e(lVar12,&local_128,uVar2);
  uStack_50 = uStack_120;
  uStack_4c = uStack_11c;
  (**(code **)(**(longlong **)param_1[5] + 0x28))(*(longlong **)param_1[5],&local_118);
LAB_148362a4d:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148362ec7 FUN_148362ec7 body=4723 status=ok
// SIG undefined FUN_148362ec7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_148362ec7(longlong param_1,longlong param_2,undefined8 param_3,code *param_4,
                       longlong param_5,char *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  code *pcVar21;
  code *pcVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  code *pcVar26;
  uint uVar27;
  ulonglong uVar28;
  code *pcVar29;
  uint *puVar30;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  undefined1 auStack_228 [40];
  code *local_200;
  float local_1f4;
  code *local_1f0;
  code *local_1e8;
  longlong local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  uint uStack_1bc;
  int local_1b8;
  uint local_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_174 [4];
  code *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  float local_14c;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1d0 = param_3;
  FUN_146c19cce(param_7);
  uVar19 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  uVar24 = ((longlong)*(int *)(param_4 + 0xc0) - (longlong)*(int *)(param_4 + 0xec)) +
           (longlong)*(int *)(param_2 + 0x38);
  uVar23 = (uint)uVar24;
  if (uVar23 != 0) {
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar24);
    }
    FUN_140ab2830(&local_148,uVar24 & 0xffffffff);
    iVar9 = 1;
    if (3 < uVar23) {
      uVar23 = (uVar23 | 1) + 0xe;
      iVar9 = 0x1f;
      if (uVar23 != 0) {
        for (; uVar23 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      iVar9 = 1 << ((byte)iVar9 & 0x1f);
    }
    if ((local_100 == 0) || (local_100 < iVar9)) {
      local_100 = iVar9;
      FUN_140264164();
    }
  }
  uVar23 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  if ((uVar23 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
    uVar19 = 1;
    uVar10 = 1;
    if (1 < (int)uVar23) {
      uVar19 = (ulonglong)uVar23;
    }
    do {
      uVar18 = uVar10;
      if ((uint)uVar19 == uVar18) goto LAB_148363030;
      uVar10 = uVar18 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar18 >> 9] +
                                         (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    uVar19 = (ulonglong)uVar18;
  }
LAB_148363030:
  local_1e8 = param_4;
  if ((uint)uVar19 != uVar23) {
    do {
      uVar18 = (uint)uVar19;
      uVar24 = (ulonglong)((uint)(uVar19 >> 5) & 0x3fffff8);
      uVar28 = (ulonglong)((uVar18 & 0xff) << 3);
      local_150 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar24) + uVar28);
      local_14c = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x48) + uVar24) + 4 + uVar28);
      local_1b0 = uVar18;
      local_1c0 = FUN_146c2d0a4(param_7,&local_150);
      local_1a0 = (code *)&local_1b0;
      local_198 = (code *)&local_1c0;
      FUN_140c0fbee(&local_148,&local_170,&local_1a0);
      uVar10 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar23) {
        uVar10 = uVar23;
      }
      do {
        if (uVar10 - 1 == (int)uVar19) {
          uVar19 = (ulonglong)uVar10;
          break;
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x10) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar19 != uVar23);
  }
  if (param_6 == (char *)0x0) {
LAB_14836315f:
    pcVar21 = local_1e8;
    pcVar26 = local_1e8 + 8;
    pcVar22 = local_1e8 + 0x18;
    local_170 = (code *)&DAT_100000000;
    local_160 = 0xffffffff;
    uStack_158 = 0;
    uStack_168 = pcVar22;
    if (*(int *)(local_1e8 + 0x30) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_170);
      iVar9 = *(int *)(pcVar21 + 0x30);
    }
    uStack_180 = CONCAT44(uStack_154,uStack_158);
    local_188 = local_160;
    uVar12 = local_188;
    local_198 = local_170;
    uStack_190 = (int)uStack_168;
    uStack_18c = uStack_168._4_4_;
    local_188._4_4_ = (int)((ulonglong)local_160 >> 0x20);
    local_1a0 = pcVar26;
    if ((local_188._4_4_ != iVar9) || (uStack_168 != pcVar22)) {
      unaff_XMM10_Da = 0.0;
      unaff_XMM11_Da = 0.0;
      local_200 = (code *)CONCAT44(local_200._4_4_,iVar9);
      iVar9 = local_188._4_4_;
      local_1f0 = pcVar22;
      local_1d8 = pcVar26;
      local_188 = uVar12;
      do {
        uVar23 = *(uint *)(*(longlong *)local_1a0 + (longlong)iVar9 * 0xc);
        lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar23 >> 9) * 8);
        uVar24 = (ulonglong)((uVar23 & 0x1ff) << 4);
        uVar19 = *(ulonglong *)(lVar20 + uVar24);
        uVar24 = *(ulonglong *)(lVar20 + 8 + uVar24);
        FUN_14832b114(pcVar21,&local_1b0,uVar23);
        uVar10 = (int)uVar24 * 3;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4)) {
          FUN_1483628f2(pcVar21,&local_1c0,uVar23);
          uVar10 = FUN_146c2e864(param_2,uVar24 & 0xffffffff,uVar19 & 0xffffffff);
          if (uVar10 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
            local_1e0 = CONCAT44(local_1e0._4_4_,
                                 *(undefined4 *)(lVar20 + (ulonglong)(uVar10 & 0xff) * 8));
            unaff_XMM8_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar10 & 0xff) * 8);
          }
          uVar10 = FUN_146c2e864(param_2,uVar24 & 0xffffffff,uVar19 >> 0x20);
          if (uVar10 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
            local_1f4 = *(float *)(lVar20 + (ulonglong)(uVar10 & 0xff) * 8);
            unaff_XMM9_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar10 & 0xff) * 8);
          }
          pcVar21 = local_1e8;
          if (0 < local_1b8) {
            dVar6 = (double)(float)local_1e0;
            dVar7 = (double)local_1f4;
            lVar20 = 0;
            do {
              local_1c4 = *(undefined4 *)(CONCAT44(uStack_1bc,local_1c0) + lVar20 * 4);
              dVar1 = (double)(float)*(double *)(CONCAT44(uStack_1ac,local_1b0) + lVar20 * 8);
              if (1.0 <= dVar1) {
                dVar1 = 1.0;
              }
              if (dVar1 <= 0.0) {
                dVar1 = 0.0;
              }
              local_150 = (float)((1.0 - dVar1) * dVar6 + dVar1 * dVar7);
              local_14c = (float)((1.0 - dVar1) * (double)unaff_XMM8_Da +
                                 dVar1 * (double)unaff_XMM9_Da);
              local_1c8 = FUN_146c2d0a4(param_7,&local_150);
              local_170 = (code *)&local_1c4;
              uStack_168 = (code *)&local_1c8;
              FUN_140c0fbee(&local_148,local_174,&local_170);
              lVar20 = lVar20 + 1;
              pcVar21 = local_1e8;
            } while (lVar20 < local_1b8);
          }
        }
        iVar9 = (int)(uVar24 >> 0x20);
        if (((iVar9 == -1) ||
            (uVar10 = iVar9 * 3,
            *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar10 >> 9) * 8) +
                    (ulonglong)(uVar10 & 0x1ff) * 4) < 0)) ||
           (cVar8 = FUN_146c1a770(param_2,uVar23,0), cVar8 == '\0')) {
          pcVar26 = local_1f0;
          pcVar22 = local_1d8;
          iVar11 = (int)local_200;
        }
        else {
          FUN_1483628f2(pcVar21,&local_1c0,uVar23);
          uVar23 = FUN_146c2e864(param_2,uVar24 >> 0x20,uVar19 & 0xffffffff);
          if (uVar23 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar23 >> 5 & 0x3fffff8));
            local_1e0 = CONCAT44(local_1e0._4_4_,
                                 *(undefined4 *)(lVar20 + (ulonglong)(uVar23 & 0xff) * 8));
            unaff_XMM8_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar23 & 0xff) * 8);
          }
          uVar23 = FUN_146c2e864(param_2,uVar24 >> 0x20,uVar19 >> 0x20);
          pcVar22 = local_1d8;
          pcVar26 = local_1f0;
          if (uVar23 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar23 >> 5 & 0x3fffff8));
            local_1f4 = *(float *)(lVar20 + (ulonglong)(uVar23 & 0xff) * 8);
            unaff_XMM9_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar23 & 0xff) * 8);
          }
          iVar11 = (int)local_200;
          pcVar21 = local_1e8;
          if (0 < local_1b8) {
            dVar6 = (double)(float)local_1e0;
            dVar7 = (double)local_1f4;
            lVar20 = 0;
            do {
              local_1c4 = *(undefined4 *)(CONCAT44(uStack_1bc,local_1c0) + lVar20 * 4);
              dVar1 = (double)(float)*(double *)(CONCAT44(uStack_1ac,local_1b0) + lVar20 * 8);
              if (1.0 <= dVar1) {
                dVar1 = 1.0;
              }
              if (dVar1 <= 0.0) {
                dVar1 = 0.0;
              }
              local_150 = (float)((1.0 - dVar1) * dVar6 + dVar1 * dVar7);
              local_14c = (float)((1.0 - dVar1) * (double)unaff_XMM8_Da +
                                 dVar1 * (double)unaff_XMM9_Da);
              local_1c8 = FUN_146c2d0a4(param_7,&local_150);
              local_170 = (code *)&local_1c4;
              uStack_168 = (code *)&local_1c8;
              FUN_140c0fbee(&local_148,local_174,&local_170);
              lVar20 = lVar20 + 1;
              pcVar21 = local_1e8;
            } while (lVar20 < local_1b8);
          }
        }
        local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
        FUN_1449c0562(&local_198);
        iVar9 = local_188._4_4_;
        uVar12 = local_188;
      } while (local_1a0 != pcVar22 ||
               ((code *)CONCAT44(uStack_18c,uStack_190) != pcVar26 || local_188._4_4_ != iVar11));
    }
    local_188 = uVar12;
    if (param_6 == (char *)0x0) {
LAB_148363242:
      pcVar26 = pcVar21 + 0x58;
      local_1f0 = pcVar21 + 0x68;
      local_170 = (code *)&DAT_100000000;
      local_160 = 0xffffffff;
      uStack_158 = 0;
      uStack_168 = local_1f0;
      if (*(int *)(pcVar21 + 0x80) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_170);
        iVar9 = *(int *)(pcVar21 + 0x80);
      }
      uStack_180 = CONCAT44(uStack_154,uStack_158);
      local_188 = local_160;
      uVar12 = local_188;
      local_198 = local_170;
      uStack_190 = (int)uStack_168;
      uStack_18c = uStack_168._4_4_;
      local_188._4_4_ = (int)((ulonglong)local_160 >> 0x20);
      local_1a0 = pcVar26;
      if ((local_188._4_4_ != iVar9) || (uStack_168 != local_1f0)) {
        local_200 = (code *)CONCAT44(local_200._4_4_,iVar9);
        iVar9 = local_188._4_4_;
        local_1d8 = pcVar26;
        local_188 = uVar12;
        do {
          uVar23 = *(uint *)(*(longlong *)local_1a0 + (longlong)iVar9 * 0xc);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
          uVar19 = (ulonglong)(uVar23 & 0x1ff);
          uVar4 = *(undefined4 *)(lVar20 + 4 + uVar19 * 0xc);
          uVar5 = *(undefined4 *)(lVar20 + 8 + uVar19 * 0xc);
          uVar10 = FUN_146c2e864(param_2,uVar23,*(undefined4 *)(lVar20 + uVar19 * 0xc));
          if (uVar10 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
            local_1e0 = CONCAT44(local_1e0._4_4_,
                                 *(undefined4 *)(lVar20 + (ulonglong)(uVar10 & 0xff) * 8));
            unaff_XMM8_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar10 & 0xff) * 8);
          }
          uVar10 = FUN_146c2e864(param_2,uVar23,uVar4);
          pcVar26 = local_1e8;
          if (uVar10 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
            local_1f4 = *(float *)(lVar20 + (ulonglong)(uVar10 & 0xff) * 8);
            unaff_XMM9_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar10 & 0xff) * 8);
          }
          uVar10 = FUN_146c2e864(param_2,uVar23,uVar5);
          if (uVar10 != 0xffffffff) {
            lVar20 = *(longlong *)
                      (*(longlong *)(param_2 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
            unaff_XMM10_Da = *(float *)(lVar20 + (ulonglong)(uVar10 & 0xff) * 8);
            unaff_XMM11_Da = *(float *)(lVar20 + 4 + (ulonglong)(uVar10 & 0xff) * 8);
          }
          FUN_14832b286(pcVar26,&local_1b0,uVar23);
          FUN_14832b30c(pcVar26,&local_1c0,uVar23);
          if (0 < local_1a8) {
            dVar6 = (double)(float)local_1e0;
            dVar7 = (double)local_1f4;
            lVar20 = 4;
            lVar25 = 0;
            do {
              lVar15 = CONCAT44(uStack_1ac,local_1b0);
              dVar1 = *(double *)(lVar15 + -0x10 + lVar20 * 4);
              dVar2 = *(double *)(lVar15 + -8 + lVar20 * 4);
              dVar3 = *(double *)(lVar15 + lVar20 * 4);
              local_1c4 = *(undefined4 *)(CONCAT44(uStack_1bc,local_1c0) + lVar25 * 4);
              local_150 = (float)(dVar3 * (double)unaff_XMM10_Da + dVar1 * dVar6 + dVar2 * dVar7);
              local_14c = (float)(dVar3 * (double)unaff_XMM11_Da +
                                 dVar1 * (double)unaff_XMM8_Da + dVar2 * (double)unaff_XMM9_Da);
              local_1c8 = FUN_146c2d0a4(param_7,&local_150);
              uStack_168 = (code *)&local_1c8;
              local_170 = (code *)&local_1c4;
              FUN_140c0fbee(&local_148,local_174,&local_170,0);
              lVar25 = lVar25 + 1;
              lVar20 = lVar20 + 6;
            } while (lVar25 < local_1a8);
          }
          local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
          FUN_1449c0562(&local_198);
          pcVar26 = local_1d8;
          iVar9 = local_188._4_4_;
          uVar12 = local_188;
        } while (local_1a0 != local_1d8 ||
                 ((code *)CONCAT44(uStack_18c,uStack_190) != local_1f0 ||
                 local_188._4_4_ != (int)local_200));
      }
      local_188 = uVar12;
      if (param_6 == (char *)0x0) {
LAB_1483635cb:
        uVar10 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
        uVar23 = 0;
        if ((uVar10 != 0) &&
           (uVar23 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
          uVar18 = 1;
          uVar13 = 1;
          if (1 < (int)uVar10) {
            uVar18 = uVar10;
          }
          do {
            uVar23 = uVar18;
            if (uVar18 == uVar13) break;
            uVar17 = uVar13 >> 9;
            uVar27 = uVar13 & 0x1ff;
            uVar23 = uVar13;
            uVar13 = uVar13 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar17] +
                                               (ulonglong)uVar27 * 2) - 1U));
        }
        pcVar22 = local_1e8;
        if (uVar23 != uVar10) {
          pcVar21 = local_1e8 + 0x90;
          local_200 = pcVar21;
          do {
            uVar13 = uVar23 * 3;
            lVar20 = *(longlong *)(param_2 + 0x78);
            uVar18 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar13 >> 9) * 8) +
                              (ulonglong)(uVar13 & 0x1ff) * 4);
            if (-1 < (int)uVar18) {
              if (*(int *)(pcVar22 + 0x60) != *(int *)(pcVar22 + 0x8c)) {
                pcVar29 = *(code **)(pcVar22 + 0x98);
                if (*(code **)(pcVar22 + 0x98) == (code *)0x0) {
                  pcVar29 = pcVar21;
                }
                iVar9 = *(int *)(pcVar29 + (ulonglong)(*(int *)(pcVar22 + 0xa0) - 1U & uVar23) * 4);
                if (iVar9 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)pcVar26 + (longlong)iVar9 * 0xc) == uVar23)
                    goto LAB_148363db4;
                    iVar9 = *(int *)(*(longlong *)pcVar26 + (longlong)iVar9 * 0xc + 4);
                  } while (iVar9 != -1);
                }
              }
              uVar17 = _DAT_00000004;
              uVar27 = _DAT_00000004;
              if ((int)uStack_140 != local_114) {
                uVar17 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
                puVar16 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar16 = local_110;
                }
                iVar9 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & uVar17) * 4);
                puVar30 = (uint *)&DAT_00000004;
                if (iVar9 != -1) {
                  do {
                    lVar25 = local_148 + (longlong)iVar9 * 0x10;
                    if (*(uint *)(local_148 + (longlong)iVar9 * 0x10) == uVar17) goto LAB_148363e7d;
                    iVar9 = *(int *)(lVar25 + 8);
                  } while (iVar9 != -1);
                  lVar25 = 0;
LAB_148363e7d:
                  puVar30 = (uint *)(lVar25 + 4);
                }
                uVar13 = *(uint *)(*(longlong *)(lVar20 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
                iVar9 = *(int *)(puVar16 + (ulonglong)(local_100 - 1U & uVar13) * 4);
                while (iVar9 != -1) {
                  lVar20 = local_148 + (longlong)iVar9 * 0x10;
                  if (*(uint *)(local_148 + (longlong)iVar9 * 0x10) == uVar13) goto LAB_148363eb2;
                  iVar9 = *(int *)(lVar20 + 8);
                }
                lVar20 = 0;
LAB_148363eb2:
                uVar17 = *puVar30;
                uVar27 = *(uint *)(lVar20 + 4);
                iVar9 = *(int *)(puVar16 + (ulonglong)(local_100 + 0x7fffffffU & uVar18) * 4);
                while (pcVar22 = local_1e8, pcVar21 = local_200, iVar9 != -1) {
                  lVar20 = local_148 + (longlong)iVar9 * 0x10;
                  if (*(uint *)(local_148 + (longlong)iVar9 * 0x10) == uVar18) goto LAB_148363d70;
                  iVar9 = *(int *)(lVar20 + 8);
                }
              }
              lVar20 = 0;
LAB_148363d70:
              local_1a0 = (code *)CONCAT44(uVar27,*(undefined4 *)(lVar20 + 4));
              local_198 = (code *)CONCAT44(local_198._4_4_,uVar17);
              FUN_146c01486(param_7,*(undefined4 *)
                                     (*(longlong *)(param_5 + 0x10) + (longlong)(int)uVar23 * 4),
                            &local_1a0);
            }
LAB_148363db4:
            uVar18 = uVar23 + 1;
            if ((int)(uVar23 + 1) < (int)uVar10) {
              uVar18 = uVar10;
            }
            do {
              uVar13 = uVar18;
              if (uVar18 - 1 == uVar23) break;
              uVar23 = uVar23 + 1;
              uVar13 = uVar23;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_1 + 0x148) +
                                                   (ulonglong)(uVar23 >> 9) * 8) +
                                                 (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
            uVar23 = uVar13;
          } while (uVar23 != uVar10);
        }
        pcVar21 = local_1f0;
        local_170 = (code *)&DAT_100000000;
        uStack_168 = local_1f0;
        local_160 = 0xffffffff;
        uStack_158 = 0;
        if (*(int *)(pcVar22 + 0x80) == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_170);
          iVar9 = *(int *)(pcVar22 + 0x80);
        }
        uStack_180 = CONCAT44(uStack_154,uStack_158);
        local_188 = local_160;
        uVar12 = local_188;
        local_198 = local_170;
        uStack_190 = (int)uStack_168;
        uStack_18c = uStack_168._4_4_;
        local_188._4_4_ = (int)((ulonglong)local_160 >> 0x20);
        local_1a0 = pcVar26;
        if ((local_188._4_4_ != iVar9) || (uStack_168 != pcVar21)) {
          iVar11 = local_188._4_4_;
          local_188 = uVar12;
          do {
            iVar11 = *(int *)(*(longlong *)local_1a0 + (longlong)iVar11 * 0xc);
            if (-1 < *(int *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x78) +
                               (ulonglong)((uint)(iVar11 * 3) >> 9) * 8) +
                             (ulonglong)(iVar11 * 3 & 0x1ff) * 4)) {
              FUN_14832b38e(pcVar22,&local_170,iVar11);
              FUN_14832b414(local_1d0,&local_1b0,iVar11);
              lVar20 = (longlong)(int)uStack_168;
              pcVar21 = local_1f0;
              if (0 < lVar20) {
                local_200 = local_170;
                local_1e0 = CONCAT44(uStack_1ac,local_1b0);
                lVar25 = 0;
                do {
                  if ((int)uStack_140 == local_114) {
                    uVar19 = (ulonglong)_DAT_00000004;
                    uStack_1bc = _DAT_00000004;
                  }
                  else {
                    puVar16 = local_108;
                    if (local_108 == (undefined1 *)0x0) {
                      puVar16 = local_110;
                    }
                    uVar23 = local_100 - 1;
                    iVar11 = *(int *)(puVar16 +
                                     (ulonglong)(uVar23 & *(uint *)(local_200 + lVar25 * 0xc + 8)) *
                                     4);
                    puVar30 = (uint *)&DAT_00000004;
                    if (iVar11 != -1) {
                      do {
                        lVar15 = local_148 + (longlong)iVar11 * 0x10;
                        if (*(uint *)(local_148 + (longlong)iVar11 * 0x10) ==
                            *(uint *)(local_200 + lVar25 * 0xc + 8)) goto LAB_148363c41;
                        iVar11 = *(int *)(lVar15 + 8);
                      } while (iVar11 != -1);
                      lVar15 = 0;
LAB_148363c41:
                      puVar30 = (uint *)(lVar15 + 4);
                    }
                    iVar11 = *(int *)(puVar16 +
                                     (ulonglong)(uVar23 & *(uint *)(local_200 + lVar25 * 0xc + 4)) *
                                     4);
                    while (iVar11 != -1) {
                      lVar15 = local_148 + (longlong)iVar11 * 0x10;
                      if (*(uint *)(local_148 + (longlong)iVar11 * 0x10) ==
                          *(uint *)(local_200 + lVar25 * 0xc + 4)) goto LAB_148363c79;
                      iVar11 = *(int *)(lVar15 + 8);
                    }
                    lVar15 = 0;
LAB_148363c79:
                    uVar19 = (ulonglong)*puVar30;
                    uStack_1bc = *(uint *)(lVar15 + 4);
                    iVar11 = *(int *)(puVar16 +
                                     (ulonglong)(uVar23 & *(uint *)(local_200 + lVar25 * 0xc)) * 4);
                    while (pcVar22 = local_1e8, iVar11 != -1) {
                      lVar15 = local_148 + (longlong)iVar11 * 0x10;
                      if (*(uint *)(local_148 + (longlong)iVar11 * 0x10) ==
                          *(uint *)(local_200 + lVar25 * 0xc)) goto LAB_148363b8a;
                      iVar11 = *(int *)(lVar15 + 8);
                    }
                  }
                  lVar15 = 0;
LAB_148363b8a:
                  local_1c0 = *(undefined4 *)(lVar15 + 4);
                  local_1b8 = (int)uVar19;
                  FUN_146c01486(param_7,*(undefined4 *)
                                         (*(longlong *)(param_5 + 0x10) +
                                         (longlong)*(int *)(local_1e0 + lVar25 * 4) * 4),&local_1c0,
                                CONCAT71((int7)(uVar19 >> 8),1));
                  lVar25 = lVar25 + 1;
                  pcVar21 = local_1f0;
                } while (lVar25 != lVar20);
              }
            }
            local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
            FUN_1449c0562(&local_198);
            iVar11 = local_188._4_4_;
            uVar12 = local_188;
          } while (local_1a0 != pcVar26 ||
                   ((code *)CONCAT44(uStack_18c,uStack_190) != pcVar21 || local_188._4_4_ != iVar9))
          ;
        }
        local_188 = uVar12;
        if (param_6 == (char *)0x0) {
LAB_148363a95:
          uVar19 = CONCAT71((int7)((ulonglong)pcVar22 >> 8),1);
          goto LAB_1483639e3;
        }
        if (*param_6 == '\0') {
          pcVar22 = *(code **)(param_6 + 0x70);
          plVar14 = (longlong *)(param_6 + 0x90);
          if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
            plVar14 = *(longlong **)(param_6 + 0x80);
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          cVar8 = (*pcVar22)(uVar12);
          *param_6 = cVar8;
          if (cVar8 == '\0') goto LAB_148363a95;
        }
      }
      else if (*param_6 == '\0') {
        pcVar22 = *(code **)(param_6 + 0x70);
        plVar14 = (longlong *)(param_6 + 0x90);
        if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_6 + 0x80);
        }
        uVar12 = (**(code **)(*plVar14 + 8))();
        cVar8 = (*pcVar22)(uVar12);
        *param_6 = cVar8;
        if (cVar8 == '\0') goto LAB_1483635cb;
      }
    }
    else if (*param_6 == '\0') {
      pcVar26 = *(code **)(param_6 + 0x70);
      plVar14 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar14 = *(longlong **)(param_6 + 0x80);
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      cVar8 = (*pcVar26)(uVar12);
      *param_6 = cVar8;
      pcVar21 = local_1e8;
      if (cVar8 == '\0') goto LAB_148363242;
    }
  }
  else if (*param_6 == '\0') {
    pcVar26 = *(code **)(param_6 + 0x70);
    plVar14 = (longlong *)(param_6 + 0x90);
    if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_6 + 0x80);
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    cVar8 = (*pcVar26)(uVar12);
    *param_6 = cVar8;
    if (cVar8 == '\0') goto LAB_14836315f;
  }
  uVar19 = 0;
LAB_1483639e3:
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836413c FUN_14836413c body=38 status=ok
// SIG undefined FUN_14836413c(void)

undefined8 FUN_14836413c(undefined8 param_1,int param_2)

{
  FUN_1483660a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148364162 FUN_148364162 body=1298 status=ok
// SIG undefined FUN_148364162(void)

void FUN_148364162(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  uint local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x248);
  local_c0 = 0;
  uVar12 = *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4);
  uVar16 = 0;
  if (uVar12 != 0) {
    uVar16 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U)) {
      uVar6 = 1;
      uVar9 = 1;
      if (1 < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar16 = uVar6;
        if (uVar6 == uVar9) break;
        uVar10 = uVar9 >> 9;
        uVar14 = uVar9 & 0x1ff;
        uVar16 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x1d8))[uVar10] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
  }
  local_a8 = 0;
  local_80 = param_2;
  if (uVar16 != uVar12) {
    local_88 = param_1 + 8;
    local_90 = param_1 + 0x118;
    local_a0 = param_1 + 0xb8;
    local_a8 = 0;
    local_c0 = 0;
    local_b4 = uVar12;
    local_98 = param_1;
    do {
      lVar2 = local_98;
      local_64 = uVar16;
      uVar8 = (**(code **)(*local_80 + 8))(local_80,uVar16);
      uVar1 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x248) + 0x1c0) +
                 (ulonglong)(local_64 >> 9) * 8) + 8 + (ulonglong)((local_64 & 0x1ff) << 4));
      uVar12 = (int)uVar1 * 3;
      uVar15 = (ulonglong)(uVar12 >> 9);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 600) + 0x78);
      uVar13 = (ulonglong)(uVar12 & 0x1ff);
      iVar5 = *(int *)(*(longlong *)(lVar2 + uVar15 * 8) + uVar13 * 4);
      bVar17 = -1 < iVar5;
      iVar3 = (int)(uVar1 >> 0x20);
      if ((uVar1 >> 0x20 != 0xffffffff) && (iVar5 < 0)) {
        bVar17 = -1 < *(int *)(*(longlong *)(lVar2 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                              (ulonglong)(iVar3 * 3 & 0x1ff) * 4);
      }
      uVar12 = local_b4;
      if ((0 < (int)uVar8) && (bVar17)) {
        local_b0 = uVar8;
        FUN_1447cbafe(local_88,&local_60,&local_64,0);
        local_6c = (int)local_a8;
        local_68 = (int)local_b0;
        local_58 = &local_6c;
        local_60 = &local_64;
        FUN_14834aa14(local_90,&local_74,&local_60,0);
        iVar11 = (int)local_b0;
        local_a8 = (ulonglong)(uint)((int)local_a8 + iVar11);
        iVar5 = (int)local_c0;
        local_6c = iVar5;
        local_68 = iVar11;
        local_60 = &local_74;
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) + uVar15 * 8)
                    + uVar13 * 4) < 0) {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = iVar3;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          local_c0 = (ulonglong)(uint)(iVar11 + iVar5);
          uVar12 = local_b4;
        }
        else {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = (int)uVar1;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          uVar12 = local_b4;
          if (iVar3 == -1) {
LAB_1483644e4:
            uVar6 = (int)local_c0 + (int)local_b0;
          }
          else {
            if (*(int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) +
                          (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                        (ulonglong)(iVar3 * 3 & 0x1ff) * 4) < 0) goto LAB_1483644e4;
            cVar4 = FUN_146c1a770(*(longlong *)(local_98 + 600),local_64,0);
            iVar11 = (int)local_c0;
            iVar5 = (int)local_b0;
            local_68 = iVar5;
            if (cVar4 != '\0') {
              local_6c = iVar5 + iVar11;
              local_74 = local_64;
              local_58 = &local_6c;
              local_70 = iVar3;
              local_60 = &local_74;
              FUN_14834af3a(local_a0,local_4c,&local_60);
              local_c0 = (ulonglong)(uint)(iVar11 + iVar5 * 2);
              goto LAB_14836436d;
            }
            local_74 = local_64;
            local_58 = &local_6c;
            local_70 = iVar3;
            local_6c = iVar11;
            local_60 = &local_74;
            FUN_14834af3a(local_a0,local_4c,&local_60);
            uVar6 = iVar5 + iVar11;
          }
          local_c0 = (ulonglong)uVar6;
        }
      }
LAB_14836436d:
      uVar6 = uVar16 + 1;
      if ((int)(uVar16 + 1) < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar9 = uVar6;
        if (uVar6 - 1 == uVar16) break;
        uVar16 = uVar16 + 1;
        uVar9 = uVar16;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x1d8) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      uVar16 = uVar9;
      param_1 = local_98;
    } while (uVar16 != uVar12);
  }
  FUN_144a1a59e(param_1 + 0xa8,local_c0,1);
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0xa8) + lVar7 * 4) = *(int *)(param_1 + 0x250) + (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xb0));
  }
  FUN_1400bd09c(param_1 + 0x108,local_a8,1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483646f2 FUN_1483646f2 body=482 status=ok
// SIG undefined FUN_1483646f2(void)

void FUN_1483646f2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') goto LAB_1483647e2;
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar8 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *pcVar2 = cVar6;
    if (cVar6 != '\0') goto LAB_1483647e2;
  }
  uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  uVar4 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8 +
           (ulonglong)((uVar1 & 0x1ff) << 4));
  uVar5 = (int)uVar4 * 3;
  if (-1 < *(int *)(*(longlong *)
                     (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4)) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 & 0xffffffff);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
  iVar9 = (int)(uVar4 >> 0x20);
  if ((iVar9 != -1) &&
     (uVar5 = iVar9 * 3,
     -1 < *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4))) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 >> 0x20);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
LAB_1483647e2:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483648de FUN_1483648de body=1246 status=ok
// SIG undefined FUN_1483648de(void)

void FUN_1483648de(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_158 [40];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  bool local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar4 = *(char **)*param_1;
  if (pcVar4 != (char *)0x0) {
    if (*pcVar4 != '\0') goto LAB_148364943;
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar11 = (longlong *)(pcVar4 + 0x90);
    if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(pcVar4 + 0x80);
    }
    (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar5)();
    *pcVar4 = cVar7;
    if (cVar7 != '\0') goto LAB_148364943;
  }
  local_108 = 0xffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = false;
  local_d8 = 0xffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  lVar12 = *(longlong *)
            (*(longlong *)(*(longlong *)param_1[2] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  lVar9 = (ulonglong)((uVar2 & 0x1ff) << 2) * 3;
  iVar13 = *(int *)(lVar12 + lVar9);
  iVar16 = *(int *)(lVar12 + 4 + lVar9);
  iVar3 = *(int *)(lVar12 + 8 + lVar9);
  uVar15 = uVar2 * 3 + 2;
  lVar12 = *(longlong *)(*(longlong *)param_1[3] + 0x78);
  local_10c = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  uVar15 = uVar2 * 3 + 1;
  local_110 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  local_114 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar2 * 3 >> 9) * 8) +
               (ulonglong)(uVar2 * 3 & 0x1ff) * 4);
  lVar12 = param_1[4];
  iVar8 = *(int *)(lVar12 + 0x10);
  iVar10 = *(int *)(lVar12 + 0x3c);
  local_118 = uVar2;
  if (iVar8 != iVar10) {
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x180) + (ulonglong)(uVar2 >> 9) * 8);
    puVar1 = (uint *)(lVar6 + lVar9);
    uVar15 = *(uint *)(lVar6 + lVar9);
    lVar9 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar9 = *(longlong *)(lVar12 + 0x48);
    }
    iVar14 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
    local_12c = iVar3;
    if (iVar14 != -1) {
      do {
        local_130 = iVar16;
        if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc) == uVar15) {
          local_108 = uVar15;
          FUN_14832b114(lVar12,&local_f0,uVar15);
          FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
          local_100 = CONCAT44(uStack_124,local_128);
          uStack_f8 = uStack_120;
          uStack_f4 = uStack_11c;
          local_e0 = iVar13 != *(int *)(*(longlong *)
                                         (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                         (ulonglong)(*puVar1 >> 9) * 8) +
                                       (ulonglong)((*puVar1 & 0x1ff) << 4));
          lVar12 = param_1[4];
          iVar8 = *(int *)(lVar12 + 0x10);
          iVar10 = *(int *)(lVar12 + 0x3c);
          iVar16 = local_130;
          break;
        }
        iVar14 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc + 4);
      } while (iVar14 != -1);
    }
    if (iVar8 != iVar10) {
      uVar15 = puVar1[1];
      lVar9 = lVar12 + 0x40;
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x48);
      }
      iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
      if (iVar13 != -1) {
        do {
          local_130 = iVar16;
          if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
            local_d8 = uVar15;
            FUN_14832b114(lVar12,&local_128,uVar15);
            local_c0 = CONCAT44(uStack_124,local_128);
            uStack_b8 = uStack_120;
            uStack_b4 = uStack_11c;
            FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
            uStack_c8 = uStack_120;
            local_d0 = CONCAT44(uStack_124,local_128);
            local_b0 = local_130 !=
                       *(int *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                 (ulonglong)(puVar1[1] >> 9) * 8) +
                               (ulonglong)((puVar1[1] & 0x1ff) << 4));
            lVar12 = param_1[4];
            iVar8 = *(int *)(lVar12 + 0x10);
            iVar10 = *(int *)(lVar12 + 0x3c);
            break;
          }
          iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
        } while (iVar13 != -1);
      }
      if (iVar8 != iVar10) {
        uVar15 = puVar1[2];
        lVar9 = lVar12 + 0x40;
        if (*(longlong *)(lVar12 + 0x48) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x48);
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
        if (iVar13 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
              local_a8 = uVar15;
              FUN_14832b114(lVar12,&local_128,uVar15);
              local_90 = CONCAT44(uStack_124,local_128);
              uStack_88 = uStack_120;
              uStack_84 = uStack_11c;
              FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
              uStack_98 = uStack_120;
              local_a0 = CONCAT44(uStack_124,local_128);
              local_80 = local_12c !=
                         *(int *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                   (ulonglong)(puVar1[2] >> 9) * 8) +
                                 (ulonglong)((puVar1[2] & 0x1ff) << 4));
              lVar12 = param_1[4];
              break;
            }
            iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
          } while (iVar13 != -1);
        }
      }
    }
  }
  FUN_14832b286(lVar12,&local_128,uVar2);
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  FUN_14832b30c(lVar12,&local_128,uVar2);
  uStack_70 = uStack_120;
  uStack_6c = uStack_11c;
  FUN_14832b38e(lVar12,&local_128,uVar2);
  uStack_50 = uStack_120;
  uStack_4c = uStack_11c;
  (**(code **)(**(longlong **)param_1[5] + 0x28))(*(longlong **)param_1[5],&local_118);
LAB_148364943:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148364dbd FUN_148364dbd body=4837 status=ok
// SIG undefined FUN_148364dbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_148364dbd(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       longlong param_5,char *param_6,undefined8 param_7)

{
  longlong lVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  double dVar6;
  double dVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  code *pcVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint *puVar33;
  code *pcVar34;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  undefined1 auStack_228 [40];
  uint *local_200;
  uint *local_1f8;
  longlong local_1f0;
  uint *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  uint uStack_1b4;
  int local_1b0;
  uint local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_16c [4];
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148 [4];
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  ulonglong local_e0;
  double dVar5;
  double dVar7;
  double dVar9;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e0 = param_1;
  local_1c8 = param_3;
  FUN_146c32e62(param_7);
  uVar32 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  uVar22 = ((longlong)*(int *)(param_4 + 0xc0) - (longlong)*(int *)(param_4 + 0xec)) +
           (longlong)*(int *)(param_2 + 0x38);
  uVar21 = (uint)uVar22;
  if (uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar22);
    }
    FUN_140ab2830(&local_138,uVar22 & 0xffffffff);
    iVar14 = 1;
    if (3 < uVar21) {
      uVar21 = (uVar21 | 1) + 0xe;
      iVar14 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar14 = 1 << ((byte)iVar14 & 0x1f);
    }
    if ((local_f0 == 0) || (local_f0 < iVar14)) {
      local_f0 = iVar14;
      FUN_140264164();
    }
  }
  uVar21 = *(int *)(param_2 + 8) * 0x200 + *(int *)(param_2 + 0xc);
  if ((uVar21 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x10) - 1U))) {
    uVar32 = 1;
    uVar31 = 1;
    if (1 < (int)uVar21) {
      uVar32 = (ulonglong)uVar21;
    }
    do {
      uVar30 = uVar31;
      if ((uint)uVar32 == uVar30) goto LAB_148364f2a;
      uVar31 = uVar30 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x10))[uVar30 >> 9] +
                                         (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
    uVar32 = (ulonglong)uVar30;
  }
LAB_148364f2a:
  local_1f0 = param_4;
  if ((uint)uVar32 != uVar21) {
    do {
      uVar31 = (uint)uVar32;
      lVar23 = *(longlong *)(param_2 + 0x48);
      lVar26 = 0;
      do {
        local_148[lVar26] =
             *(float *)(*(longlong *)(lVar23 + (ulonglong)((uint)(uVar32 >> 7) & 0x7fffff) * 8) +
                        (ulonglong)((uVar31 & 0x7f) << 4) + lVar26 * 4);
        lVar26 = lVar26 + 1;
      } while (lVar26 != 4);
      local_1a8 = uVar31;
      local_1b8 = FUN_146c32f5e(param_7,local_148);
      local_198 = &local_1a8;
      local_190 = &local_1b8;
      FUN_140c0fbee(&local_138,&local_168);
      uVar30 = uVar31 + 1;
      if ((int)(uVar31 + 1) < (int)uVar21) {
        uVar30 = uVar21;
      }
      do {
        if (uVar30 - 1 == (int)uVar32) {
          uVar32 = (ulonglong)uVar30;
          break;
        }
        uVar31 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar31;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x10) +
                                             (ulonglong)(uVar31 >> 9) * 8) +
                                           (ulonglong)(uVar31 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar32 != uVar21);
  }
  lVar23 = local_1f0;
  if (param_6 == (char *)0x0) {
LAB_148365081:
    puVar28 = (uint *)(lVar23 + 8);
    puVar33 = (uint *)(lVar23 + 0x18);
    local_168 = (undefined4 *)&DAT_100000000;
    local_158 = 0xffffffff;
    uStack_150 = 0;
    uStack_160 = puVar33;
    if (*(int *)(lVar23 + 0x30) == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_168);
      iVar14 = *(int *)(lVar23 + 0x30);
    }
    uStack_178 = CONCAT44(uStack_14c,uStack_150);
    local_180 = local_158;
    uVar16 = local_180;
    local_190 = local_168;
    uStack_188 = (int)uStack_160;
    uStack_184 = uStack_160._4_4_;
    local_180._4_4_ = (int)((ulonglong)local_158 >> 0x20);
    local_198 = puVar28;
    if ((local_180._4_4_ != iVar14) || (uStack_160 != puVar33)) {
      unaff_XMM8_Da = 0.0;
      unaff_XMM8_Db = 1.875;
      unaff_XMM8_Dc = 0.0;
      unaff_XMM8_Dd = 0.0;
      local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,iVar14);
      iVar14 = local_180._4_4_;
      local_200 = puVar33;
      local_1e8 = puVar28;
      local_180 = uVar16;
      do {
        uVar21 = *(uint *)(*(longlong *)local_198 + (longlong)iVar14 * 0xc);
        lVar26 = *(longlong *)(*(longlong *)(local_1e0 + 0x1c0) + (ulonglong)(uVar21 >> 9) * 8);
        uVar22 = (ulonglong)((uVar21 & 0x1ff) << 4);
        local_1d8 = *(ulonglong *)(lVar26 + uVar22);
        uVar22 = *(ulonglong *)(lVar26 + 8 + uVar22);
        uVar32 = local_1d8 >> 0x20;
        FUN_14832b114(lVar23,&local_1a8,uVar21);
        uVar31 = (int)uVar22 * 3;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar31 >> 9) * 8) +
                         (ulonglong)(uVar31 & 0x1ff) * 4)) {
          FUN_1483628f2(lVar23,&local_1b8,uVar21);
          uVar31 = FUN_146c34fac(param_2,uVar22 & 0xffffffff,local_1d8);
          if (uVar31 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar31 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar31 & 0x7f) << 4));
            unaff_XMM6_Da = *pfVar2;
            unaff_XMM6_Db = pfVar2[1];
            unaff_XMM6_Dc = pfVar2[2];
            unaff_XMM6_Dd = pfVar2[3];
          }
          local_1d0 = uVar32;
          uVar31 = FUN_146c34fac(param_2,uVar22 & 0xffffffff,uVar32);
          if (uVar31 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar31 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar31 & 0x7f) << 4));
            unaff_XMM7_Da = *pfVar2;
            unaff_XMM7_Db = pfVar2[1];
            unaff_XMM7_Dc = pfVar2[2];
            unaff_XMM7_Dd = pfVar2[3];
          }
          uVar32 = local_1d0;
          lVar23 = local_1f0;
          if (0 < local_1b0) {
            lVar26 = 0;
            do {
              local_1bc = *(undefined4 *)(CONCAT44(uStack_1b4,local_1b8) + lVar26 * 4);
              dVar4 = (double)(float)*(double *)(CONCAT44(uStack_1a4,local_1a8) + lVar26 * 8);
              if (1.0 <= dVar4) {
                dVar4 = 1.0;
              }
              if (dVar4 <= 0.0) {
                dVar4 = 0.0;
              }
              dVar5 = 1.0 - dVar4;
              local_148[2] = (float)(dVar5 * (double)unaff_XMM6_Dc + dVar4 * (double)unaff_XMM7_Dc);
              local_148[3] = (float)(dVar5 * (double)unaff_XMM6_Dd + dVar4 * (double)unaff_XMM7_Dd);
              local_148[0] = (float)(dVar5 * (double)unaff_XMM6_Da + dVar4 * (double)unaff_XMM7_Da);
              local_148[1] = (float)(dVar5 * (double)unaff_XMM6_Db + dVar4 * (double)unaff_XMM7_Db);
              local_1c0 = FUN_146c32f5e(param_7,local_148);
              local_168 = &local_1bc;
              uStack_160 = &local_1c0;
              FUN_140c0fbee(&local_138,local_16c,&local_168);
              lVar26 = lVar26 + 1;
              uVar32 = local_1d0;
              lVar23 = local_1f0;
            } while (lVar26 < local_1b0);
          }
        }
        iVar14 = (int)(uVar22 >> 0x20);
        if (((iVar14 == -1) ||
            (uVar31 = iVar14 * 3,
            *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar31 >> 9) * 8) +
                    (ulonglong)(uVar31 & 0x1ff) * 4) < 0)) ||
           (cVar13 = FUN_146c1ae78(param_2,uVar21,0), cVar13 == '\0')) {
          puVar28 = local_200;
          puVar33 = local_1e8;
          iVar15 = (int)local_1f8;
        }
        else {
          FUN_1483628f2(lVar23,&local_1b8,uVar21);
          uVar21 = FUN_146c34fac(param_2,uVar22 >> 0x20,local_1d8);
          if (uVar21 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar21 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar21 & 0x7f) << 4));
            unaff_XMM6_Da = *pfVar2;
            unaff_XMM6_Db = pfVar2[1];
            unaff_XMM6_Dc = pfVar2[2];
            unaff_XMM6_Dd = pfVar2[3];
          }
          uVar21 = FUN_146c34fac(param_2,uVar22 >> 0x20,uVar32 & 0xffffffff);
          puVar33 = local_1e8;
          puVar28 = local_200;
          if (uVar21 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar21 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar21 & 0x7f) << 4));
            unaff_XMM7_Da = *pfVar2;
            unaff_XMM7_Db = pfVar2[1];
            unaff_XMM7_Dc = pfVar2[2];
            unaff_XMM7_Dd = pfVar2[3];
          }
          iVar15 = (int)local_1f8;
          if (0 < local_1b0) {
            lVar26 = 0;
            do {
              local_1bc = *(undefined4 *)(CONCAT44(uStack_1b4,local_1b8) + lVar26 * 4);
              dVar4 = (double)(float)*(double *)(CONCAT44(uStack_1a4,local_1a8) + lVar26 * 8);
              if (1.0 <= dVar4) {
                dVar4 = 1.0;
              }
              if (dVar4 <= 0.0) {
                dVar4 = 0.0;
              }
              dVar5 = 1.0 - dVar4;
              local_148[2] = (float)(dVar5 * (double)unaff_XMM6_Dc + dVar4 * (double)unaff_XMM7_Dc);
              local_148[3] = (float)(dVar5 * (double)unaff_XMM6_Dd + dVar4 * (double)unaff_XMM7_Dd);
              local_148[0] = (float)(dVar5 * (double)unaff_XMM6_Da + dVar4 * (double)unaff_XMM7_Da);
              local_148[1] = (float)(dVar5 * (double)unaff_XMM6_Db + dVar4 * (double)unaff_XMM7_Db);
              local_1c0 = FUN_146c32f5e(param_7,local_148);
              local_168 = &local_1bc;
              uStack_160 = &local_1c0;
              FUN_140c0fbee(&local_138,local_16c,&local_168);
              lVar26 = lVar26 + 1;
            } while (lVar26 < local_1b0);
          }
        }
        local_180 = CONCAT44(local_180._4_4_,(uint)local_180 & ~local_190._4_4_);
        FUN_1449c0562(&local_190);
        iVar14 = local_180._4_4_;
        uVar16 = local_180;
      } while (local_198 != puVar33 ||
               ((uint *)CONCAT44(uStack_184,uStack_188) != puVar28 || local_180._4_4_ != iVar15));
    }
    local_180 = uVar16;
    lVar26 = local_1e0;
    if (param_6 == (char *)0x0) {
LAB_148365179:
      puVar28 = (uint *)(lVar23 + 0x58);
      local_1f8 = (uint *)(lVar23 + 0x68);
      local_168 = (undefined4 *)&DAT_100000000;
      local_158 = 0xffffffff;
      uStack_150 = 0;
      uStack_160 = local_1f8;
      if (*(int *)(lVar23 + 0x80) == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_168);
        iVar14 = *(int *)(lVar23 + 0x80);
      }
      uStack_178 = CONCAT44(uStack_14c,uStack_150);
      local_180 = local_158;
      uVar16 = local_180;
      local_190 = local_168;
      uStack_188 = (int)uStack_160;
      uStack_184 = uStack_160._4_4_;
      local_180._4_4_ = (int)((ulonglong)local_158 >> 0x20);
      local_200 = puVar28;
      local_198 = puVar28;
      if ((local_180._4_4_ != iVar14) || (uStack_160 != local_1f8)) {
        local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,iVar14);
        iVar14 = local_180._4_4_;
        local_180 = uVar16;
        do {
          uVar21 = *(uint *)(*(longlong *)local_198 + (longlong)iVar14 * 0xc);
          lVar23 = *(longlong *)(*(longlong *)(lVar26 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
          uVar22 = (ulonglong)(uVar21 & 0x1ff);
          uVar10 = *(undefined4 *)(lVar23 + 4 + uVar22 * 0xc);
          uVar11 = *(undefined4 *)(lVar23 + 8 + uVar22 * 0xc);
          uVar31 = FUN_146c34fac(param_2,uVar21,*(undefined4 *)(lVar23 + uVar22 * 0xc));
          if (uVar31 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar31 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar31 & 0x7f) << 4));
            unaff_XMM6_Da = *pfVar2;
            unaff_XMM6_Db = pfVar2[1];
            unaff_XMM6_Dc = pfVar2[2];
            unaff_XMM6_Dd = pfVar2[3];
          }
          uVar31 = FUN_146c34fac(param_2,uVar21,uVar10);
          lVar23 = local_1f0;
          if (uVar31 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar31 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar31 & 0x7f) << 4));
            unaff_XMM7_Da = *pfVar2;
            unaff_XMM7_Db = pfVar2[1];
            unaff_XMM7_Dc = pfVar2[2];
            unaff_XMM7_Dd = pfVar2[3];
          }
          uVar31 = FUN_146c34fac(param_2,uVar21,uVar11);
          if (uVar31 != 0xffffffff) {
            pfVar2 = (float *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x48) +
                                (ulonglong)(uVar31 >> 4 & 0x3fffff8)) +
                              (ulonglong)((uVar31 & 0x7f) << 4));
            unaff_XMM8_Da = *pfVar2;
            unaff_XMM8_Db = pfVar2[1];
            unaff_XMM8_Dc = pfVar2[2];
            unaff_XMM8_Dd = pfVar2[3];
          }
          FUN_14832b286(lVar23,&local_1a8,uVar21);
          FUN_14832b30c(lVar23,&local_1b8,uVar21);
          if (0 < local_1a0) {
            lVar23 = 4;
            lVar26 = 0;
            do {
              lVar1 = CONCAT44(uStack_1a4,local_1a8);
              pdVar3 = (double *)(lVar1 + -8 + lVar23 * 4);
              dVar4 = *pdVar3;
              dVar5 = *pdVar3;
              pdVar3 = (double *)(lVar1 + -0x10 + lVar23 * 4);
              dVar6 = *pdVar3;
              dVar7 = *pdVar3;
              pdVar3 = (double *)(lVar1 + lVar23 * 4);
              dVar8 = *pdVar3;
              dVar9 = *pdVar3;
              local_1bc = *(undefined4 *)(CONCAT44(uStack_1b4,local_1b8) + lVar26 * 4);
              local_148[2] = (float)(dVar8 * (double)unaff_XMM8_Dc +
                                    dVar6 * (double)unaff_XMM6_Dc + dVar4 * (double)unaff_XMM7_Dc);
              local_148[3] = (float)(dVar9 * (double)unaff_XMM8_Dd +
                                    dVar7 * (double)unaff_XMM6_Dd + dVar5 * (double)unaff_XMM7_Dd);
              local_148[0] = (float)(dVar8 * (double)unaff_XMM8_Da +
                                    dVar6 * (double)unaff_XMM6_Da + dVar4 * (double)unaff_XMM7_Da);
              local_148[1] = (float)(dVar9 * (double)unaff_XMM8_Db +
                                    dVar7 * (double)unaff_XMM6_Db + dVar5 * (double)unaff_XMM7_Db);
              local_1c0 = FUN_146c32f5e(param_7,local_148);
              local_168 = &local_1bc;
              uStack_160 = &local_1c0;
              FUN_140c0fbee(&local_138,local_16c,&local_168,0);
              lVar26 = lVar26 + 1;
              lVar23 = lVar23 + 6;
            } while (lVar26 < local_1a0);
          }
          local_180 = CONCAT44(local_180._4_4_,(uint)local_180 & ~local_190._4_4_);
          FUN_1449c0562(&local_190);
          lVar26 = local_1e0;
          iVar14 = local_180._4_4_;
          uVar16 = local_180;
        } while (local_198 != local_200 ||
                 ((uint *)CONCAT44(uStack_184,uStack_188) != local_1f8 ||
                 local_180._4_4_ != (int)local_1e8));
      }
      local_180 = uVar16;
      if (param_6 == (char *)0x0) {
LAB_148365504:
        uVar31 = *(int *)(lVar26 + 0x140) * 0x200 + *(int *)(lVar26 + 0x144);
        pcVar24 = (code *)(ulonglong)uVar31;
        uVar21 = 0;
        if ((uVar31 != 0) &&
           (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x148) - 1U))) {
          uVar30 = 1;
          uVar17 = 1;
          if (1 < (int)uVar31) {
            uVar30 = uVar31;
          }
          do {
            uVar21 = uVar30;
            if (uVar30 == uVar17) break;
            uVar20 = uVar17 >> 9;
            uVar25 = uVar17 & 0x1ff;
            uVar21 = uVar17;
            uVar17 = uVar17 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar26 + 0x148))[uVar20] +
                                               (ulonglong)uVar25 * 2) - 1U));
        }
        lVar23 = local_1f0;
        if (uVar21 != uVar31) {
          lVar1 = local_1f0 + 0x90;
          do {
            uVar17 = uVar21 * 3;
            lVar29 = *(longlong *)(param_2 + 0x78);
            uVar30 = *(uint *)(*(longlong *)(lVar29 + (ulonglong)(uVar17 >> 9) * 8) +
                              (ulonglong)(uVar17 & 0x1ff) * 4);
            if (-1 < (int)uVar30) {
              if (*(int *)(lVar23 + 0x60) != *(int *)(lVar23 + 0x8c)) {
                lVar27 = *(longlong *)(lVar23 + 0x98);
                if (*(longlong *)(lVar23 + 0x98) == 0) {
                  lVar27 = lVar1;
                }
                iVar14 = *(int *)(lVar27 + (ulonglong)(*(int *)(lVar23 + 0xa0) - 1U & uVar21) * 4);
                if (iVar14 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)local_200 + (longlong)iVar14 * 0xc) == uVar21)
                    goto LAB_148365db1;
                    iVar14 = *(int *)(*(longlong *)local_200 + (longlong)iVar14 * 0xc + 4);
                  } while (iVar14 != -1);
                }
              }
              uVar20 = _DAT_00000004;
              uVar25 = _DAT_00000004;
              if ((int)uStack_130 != local_104) {
                uVar20 = *(uint *)(*(longlong *)(lVar29 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
                puVar19 = local_f8;
                if (local_f8 == (undefined1 *)0x0) {
                  puVar19 = local_100;
                }
                iVar14 = *(int *)(puVar19 + (ulonglong)(local_f0 - 1U & uVar20) * 4);
                if (iVar14 == -1) {
                  puVar28 = (uint *)&DAT_00000004;
                }
                else {
                  do {
                    lVar23 = local_138 + (longlong)iVar14 * 0x10;
                    if (*(uint *)(local_138 + (longlong)iVar14 * 0x10) == uVar20)
                    goto LAB_148365eca;
                    iVar14 = *(int *)(lVar23 + 8);
                  } while (iVar14 != -1);
                  lVar23 = 0;
LAB_148365eca:
                  puVar28 = (uint *)(lVar23 + 4);
                }
                uVar17 = *(uint *)(*(longlong *)(lVar29 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
                iVar14 = *(int *)(puVar19 + (ulonglong)(local_f0 - 1U & uVar17) * 4);
                while (iVar14 != -1) {
                  lVar23 = local_138 + (longlong)iVar14 * 0x10;
                  if (*(uint *)(local_138 + (longlong)iVar14 * 0x10) == uVar17) goto LAB_148365f11;
                  iVar14 = *(int *)(lVar23 + 8);
                }
                lVar23 = 0;
LAB_148365f11:
                uVar20 = *puVar28;
                uVar25 = *(uint *)(lVar23 + 4);
                iVar14 = *(int *)(puVar19 + (ulonglong)(local_f0 + 0x7fffffffU & uVar30) * 4);
                while (lVar26 = local_1e0, lVar23 = local_1f0, iVar14 != -1) {
                  lVar29 = local_138 + (longlong)iVar14 * 0x10;
                  if (*(uint *)(local_138 + (longlong)iVar14 * 0x10) == uVar30) goto LAB_148365d72;
                  iVar14 = *(int *)(lVar29 + 8);
                }
              }
              lVar29 = 0;
LAB_148365d72:
              local_198 = (uint *)CONCAT44(uVar25,*(undefined4 *)(lVar29 + 4));
              local_190 = (undefined4 *)CONCAT44(local_190._4_4_,uVar20);
              FUN_146c2a048(param_7,*(undefined4 *)
                                     (*(longlong *)(param_5 + 0x10) + (longlong)(int)uVar21 * 4),
                            &local_198);
            }
LAB_148365db1:
            uVar30 = uVar21 + 1;
            if ((int)(uVar21 + 1) < (int)uVar31) {
              uVar30 = uVar31;
            }
            do {
              uVar17 = uVar30;
              if (uVar30 - 1 == uVar21) break;
              uVar21 = uVar21 + 1;
              uVar17 = uVar21;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar26 + 0x148) +
                                                   (ulonglong)(uVar21 >> 9) * 8) +
                                                 (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
            uVar21 = uVar17;
          } while (uVar21 != uVar31);
        }
        puVar28 = local_1f8;
        local_168 = (undefined4 *)&DAT_100000000;
        uStack_160 = local_1f8;
        local_158 = 0xffffffff;
        uStack_150 = 0;
        if (*(int *)(lVar23 + 0x80) == 0) {
          iVar14 = 0;
        }
        else {
          FUN_1449c0562(&local_168);
          iVar14 = *(int *)(lVar23 + 0x80);
        }
        uStack_178 = CONCAT44(uStack_14c,uStack_150);
        local_180 = local_158;
        uVar16 = local_180;
        local_190 = local_168;
        uStack_188 = (int)uStack_160;
        uStack_184 = uStack_160._4_4_;
        local_198 = local_200;
        local_180._4_4_ = (int)((ulonglong)local_158 >> 0x20);
        if ((local_180._4_4_ != iVar14) || (uStack_160 != puVar28)) {
          puVar33 = local_200;
          iVar15 = local_180._4_4_;
          local_180 = uVar16;
          do {
            uVar21 = *(uint *)(*(longlong *)local_198 + (longlong)iVar15 * 0xc);
            pcVar24 = (code *)(ulonglong)uVar21;
            if (-1 < *(int *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x78) + (ulonglong)(uVar21 * 3 >> 9) * 8) +
                             (ulonglong)(uVar21 * 3 & 0x1ff) * 4)) {
              FUN_14832b38e(lVar23,&local_168,uVar21);
              FUN_14832b414(local_1c8,&local_1a8,uVar21);
              puVar12 = local_168;
              pcVar24 = (code *)(longlong)(int)uStack_160;
              puVar28 = local_1f8;
              puVar33 = local_200;
              lVar23 = local_1f0;
              if (0 < (longlong)pcVar24) {
                lVar26 = CONCAT44(uStack_1a4,local_1a8);
                pcVar34 = (code *)0x0;
                do {
                  if ((int)uStack_130 == local_104) {
                    uVar22 = (ulonglong)_DAT_00000004;
                    uStack_1b4 = _DAT_00000004;
                  }
                  else {
                    puVar19 = local_f8;
                    if (local_f8 == (undefined1 *)0x0) {
                      puVar19 = local_100;
                    }
                    uVar21 = local_f0 - 1;
                    iVar15 = *(int *)(puVar19 +
                                     (ulonglong)(uVar21 & puVar12[(longlong)pcVar34 * 3 + 2]) * 4);
                    if (iVar15 == -1) {
                      puVar28 = (uint *)&DAT_00000004;
                    }
                    else {
                      do {
                        lVar23 = local_138 + (longlong)iVar15 * 0x10;
                        if (*(uint *)(local_138 + (longlong)iVar15 * 0x10) ==
                            puVar12[(longlong)pcVar34 * 3 + 2]) goto LAB_148365c73;
                        iVar15 = *(int *)(lVar23 + 8);
                      } while (iVar15 != -1);
                      lVar23 = 0;
LAB_148365c73:
                      puVar28 = (uint *)(lVar23 + 4);
                    }
                    iVar15 = *(int *)(puVar19 +
                                     (ulonglong)(uVar21 & puVar12[(longlong)pcVar34 * 3 + 1]) * 4);
                    while (iVar15 != -1) {
                      lVar23 = local_138 + (longlong)iVar15 * 0x10;
                      if (*(uint *)(local_138 + (longlong)iVar15 * 0x10) ==
                          puVar12[(longlong)pcVar34 * 3 + 1]) goto LAB_148365ca6;
                      iVar15 = *(int *)(lVar23 + 8);
                    }
                    lVar23 = 0;
LAB_148365ca6:
                    uVar22 = (ulonglong)*puVar28;
                    uStack_1b4 = *(uint *)(lVar23 + 4);
                    iVar15 = *(int *)(puVar19 +
                                     (ulonglong)(uVar21 & puVar12[(longlong)pcVar34 * 3]) * 4);
                    while (iVar15 != -1) {
                      lVar23 = local_138 + (longlong)iVar15 * 0x10;
                      if (*(uint *)(local_138 + (longlong)iVar15 * 0x10) ==
                          puVar12[(longlong)pcVar34 * 3]) goto LAB_148365bcf;
                      iVar15 = *(int *)(lVar23 + 8);
                    }
                  }
                  lVar23 = 0;
LAB_148365bcf:
                  local_1b8 = *(undefined4 *)(lVar23 + 4);
                  local_1b0 = (int)uVar22;
                  FUN_146c2a048(param_7,*(undefined4 *)
                                         (*(longlong *)(param_5 + 0x10) +
                                         (longlong)*(int *)(lVar26 + (longlong)pcVar34 * 4) * 4),
                                &local_1b8,CONCAT71((int7)(uVar22 >> 8),1));
                  pcVar34 = pcVar34 + 1;
                  puVar28 = local_1f8;
                  puVar33 = local_200;
                  lVar23 = local_1f0;
                } while (pcVar34 != pcVar24);
              }
            }
            local_180 = CONCAT44(local_180._4_4_,(uint)local_180 & ~local_190._4_4_);
            FUN_1449c0562(&local_190);
            iVar15 = local_180._4_4_;
            uVar16 = local_180;
          } while (local_198 != puVar33 ||
                   ((uint *)CONCAT44(uStack_184,uStack_188) != puVar28 || local_180._4_4_ != iVar14)
                  );
        }
        local_180 = uVar16;
        if (param_6 == (char *)0x0) {
LAB_148365adf:
          uVar22 = CONCAT71((int7)((ulonglong)pcVar24 >> 8),1);
          goto LAB_148365a36;
        }
        if (*param_6 == '\0') {
          pcVar24 = *(code **)(param_6 + 0x70);
          plVar18 = (longlong *)(param_6 + 0x90);
          if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
            plVar18 = *(longlong **)(param_6 + 0x80);
          }
          uVar16 = (**(code **)(*plVar18 + 8))();
          cVar13 = (*pcVar24)(uVar16);
          *param_6 = cVar13;
          if (cVar13 == '\0') goto LAB_148365adf;
        }
      }
      else if (*param_6 == '\0') {
        pcVar24 = *(code **)(param_6 + 0x70);
        plVar18 = (longlong *)(param_6 + 0x90);
        if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
          plVar18 = *(longlong **)(param_6 + 0x80);
        }
        uVar16 = (**(code **)(*plVar18 + 8))();
        cVar13 = (*pcVar24)(uVar16);
        *param_6 = cVar13;
        if (cVar13 == '\0') goto LAB_148365504;
      }
    }
    else if (*param_6 == '\0') {
      pcVar24 = *(code **)(param_6 + 0x70);
      plVar18 = (longlong *)(param_6 + 0x90);
      if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
        plVar18 = *(longlong **)(param_6 + 0x80);
      }
      uVar16 = (**(code **)(*plVar18 + 8))();
      cVar13 = (*pcVar24)(uVar16);
      *param_6 = cVar13;
      if (cVar13 == '\0') goto LAB_148365179;
    }
  }
  else if (*param_6 == '\0') {
    pcVar24 = *(code **)(param_6 + 0x70);
    plVar18 = (longlong *)(param_6 + 0x90);
    if (*(longlong **)(param_6 + 0x80) != (longlong *)0x0) {
      plVar18 = *(longlong **)(param_6 + 0x80);
    }
    uVar16 = (**(code **)(*plVar18 + 8))();
    cVar13 = (*pcVar24)(uVar16);
    *param_6 = cVar13;
    if (cVar13 == '\0') goto LAB_148365081;
  }
  uVar22 = 0;
LAB_148365a36:
  local_f0 = 0;
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_138);
  if ((local_e0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 1483660a4 FUN_1483660a4 body=367 status=ok
// SIG undefined FUN_1483660a4(void)

void FUN_1483660a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae737d0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(param_1 + 0x31);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fe8dc(param_1 + 0x23);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14834b40e(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 1);
  return;
}



// FUNCTION 148366214 FUN_148366214 body=38 status=ok
// SIG undefined FUN_148366214(void)

undefined8 FUN_148366214(undefined8 param_1,int param_2)

{
  FUN_1483660a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836623a FUN_14836623a body=1298 status=ok
// SIG undefined FUN_14836623a(void)

void FUN_14836623a(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  uint local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x248);
  local_c0 = 0;
  uVar12 = *(int *)(lVar7 + 0x1d0) * 0x200 + *(int *)(lVar7 + 0x1d4);
  uVar16 = 0;
  if (uVar12 != 0) {
    uVar16 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x1d8) - 1U)) {
      uVar6 = 1;
      uVar9 = 1;
      if (1 < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar16 = uVar6;
        if (uVar6 == uVar9) break;
        uVar10 = uVar9 >> 9;
        uVar14 = uVar9 & 0x1ff;
        uVar16 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x1d8))[uVar10] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
  }
  local_a8 = 0;
  local_80 = param_2;
  if (uVar16 != uVar12) {
    local_88 = param_1 + 8;
    local_90 = param_1 + 0x118;
    local_a0 = param_1 + 0xb8;
    local_a8 = 0;
    local_c0 = 0;
    local_b4 = uVar12;
    local_98 = param_1;
    do {
      lVar2 = local_98;
      local_64 = uVar16;
      uVar8 = (**(code **)(*local_80 + 8))(local_80,uVar16);
      uVar1 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x248) + 0x1c0) +
                 (ulonglong)(local_64 >> 9) * 8) + 8 + (ulonglong)((local_64 & 0x1ff) << 4));
      uVar12 = (int)uVar1 * 3;
      uVar15 = (ulonglong)(uVar12 >> 9);
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 600) + 0x78);
      uVar13 = (ulonglong)(uVar12 & 0x1ff);
      iVar5 = *(int *)(*(longlong *)(lVar2 + uVar15 * 8) + uVar13 * 4);
      bVar17 = -1 < iVar5;
      iVar3 = (int)(uVar1 >> 0x20);
      if ((uVar1 >> 0x20 != 0xffffffff) && (iVar5 < 0)) {
        bVar17 = -1 < *(int *)(*(longlong *)(lVar2 + (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                              (ulonglong)(iVar3 * 3 & 0x1ff) * 4);
      }
      uVar12 = local_b4;
      if ((0 < (int)uVar8) && (bVar17)) {
        local_b0 = uVar8;
        FUN_1447cbafe(local_88,&local_60,&local_64,0);
        local_6c = (int)local_a8;
        local_68 = (int)local_b0;
        local_58 = &local_6c;
        local_60 = &local_64;
        FUN_14834aa14(local_90,&local_74,&local_60,0);
        iVar11 = (int)local_b0;
        local_a8 = (ulonglong)(uint)((int)local_a8 + iVar11);
        iVar5 = (int)local_c0;
        local_6c = iVar5;
        local_68 = iVar11;
        local_60 = &local_74;
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) + uVar15 * 8)
                    + uVar13 * 4) < 0) {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = iVar3;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          local_c0 = (ulonglong)(uint)(iVar11 + iVar5);
          uVar12 = local_b4;
        }
        else {
          local_74 = local_64;
          local_58 = &local_6c;
          local_70 = (int)uVar1;
          FUN_14834af3a(local_a0,local_4c,&local_60);
          uVar12 = local_b4;
          if (iVar3 == -1) {
LAB_1483665bc:
            uVar6 = (int)local_c0 + (int)local_b0;
          }
          else {
            if (*(int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(local_98 + 600) + 0x78) +
                          (ulonglong)((uint)(iVar3 * 3) >> 9) * 8) +
                        (ulonglong)(iVar3 * 3 & 0x1ff) * 4) < 0) goto LAB_1483665bc;
            cVar4 = FUN_146c1ae78(*(longlong *)(local_98 + 600),local_64,0);
            iVar11 = (int)local_c0;
            iVar5 = (int)local_b0;
            local_68 = iVar5;
            if (cVar4 != '\0') {
              local_6c = iVar5 + iVar11;
              local_74 = local_64;
              local_58 = &local_6c;
              local_70 = iVar3;
              local_60 = &local_74;
              FUN_14834af3a(local_a0,local_4c,&local_60);
              local_c0 = (ulonglong)(uint)(iVar11 + iVar5 * 2);
              goto LAB_148366445;
            }
            local_74 = local_64;
            local_58 = &local_6c;
            local_70 = iVar3;
            local_6c = iVar11;
            local_60 = &local_74;
            FUN_14834af3a(local_a0,local_4c,&local_60);
            uVar6 = iVar5 + iVar11;
          }
          local_c0 = (ulonglong)uVar6;
        }
      }
LAB_148366445:
      uVar6 = uVar16 + 1;
      if ((int)(uVar16 + 1) < (int)uVar12) {
        uVar6 = uVar12;
      }
      do {
        uVar9 = uVar6;
        if (uVar6 - 1 == uVar16) break;
        uVar16 = uVar16 + 1;
        uVar9 = uVar16;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x1d8) +
                                             (ulonglong)(uVar16 >> 9) * 8) +
                                           (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      uVar16 = uVar9;
      param_1 = local_98;
    } while (uVar16 != uVar12);
  }
  FUN_144a1a59e(param_1 + 0xa8,local_c0,1);
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar7 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0xa8) + lVar7 * 4) = *(int *)(param_1 + 0x250) + (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xb0));
  }
  FUN_1400bd09c(param_1 + 0x108,local_a8,1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483667ca FUN_1483667ca body=482 status=ok
// SIG undefined FUN_1483667ca(void)

void FUN_1483667ca(undefined8 *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar2 = *(char **)*param_1;
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') goto LAB_1483668ba;
    pcVar3 = *(code **)(pcVar2 + 0x70);
    plVar8 = (longlong *)(pcVar2 + 0x90);
    if (*(longlong **)(pcVar2 + 0x80) != (longlong *)0x0) {
      plVar8 = *(longlong **)(pcVar2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    cVar6 = (*pcVar3)(uVar7);
    *pcVar2 = cVar6;
    if (cVar6 != '\0') goto LAB_1483668ba;
  }
  uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  uVar4 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8 +
           (ulonglong)((uVar1 & 0x1ff) << 4));
  uVar5 = (int)uVar4 * 3;
  if (-1 < *(int *)(*(longlong *)
                     (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4)) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 & 0xffffffff);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
  iVar9 = (int)(uVar4 >> 0x20);
  if ((iVar9 != -1) &&
     (uVar5 = iVar9 * 3,
     -1 < *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)param_1[3] + 0x78) + (ulonglong)(uVar5 >> 9) * 8) +
                  (ulonglong)(uVar5 & 0x1ff) * 4))) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uVar7 = param_1[4];
    local_70[0] = uVar1;
    FUN_14832b114(uVar7,&local_58,uVar1);
    FUN_1483628f2(uVar7,&local_80,uVar1,uVar4 >> 0x20);
    local_68 = local_80;
    uStack_64 = uStack_7c;
    uStack_60 = uStack_78;
    uStack_5c = uStack_74;
    (**(code **)(**(longlong **)param_1[5] + 0x20))(*(longlong **)param_1[5],local_70);
  }
LAB_1483668ba:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483669b6 FUN_1483669b6 body=1246 status=ok
// SIG undefined FUN_1483669b6(void)

void FUN_1483669b6(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_158 [40];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  bool local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar4 = *(char **)*param_1;
  if (pcVar4 != (char *)0x0) {
    if (*pcVar4 != '\0') goto LAB_148366a1b;
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar11 = (longlong *)(pcVar4 + 0x90);
    if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(pcVar4 + 0x80);
    }
    (**(code **)(*plVar11 + 8))();
    cVar7 = (*pcVar5)();
    *pcVar4 = cVar7;
    if (cVar7 != '\0') goto LAB_148366a1b;
  }
  local_108 = 0xffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = false;
  local_d8 = 0xffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  lVar12 = *(longlong *)
            (*(longlong *)(*(longlong *)param_1[2] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  lVar9 = (ulonglong)((uVar2 & 0x1ff) << 2) * 3;
  iVar13 = *(int *)(lVar12 + lVar9);
  iVar16 = *(int *)(lVar12 + 4 + lVar9);
  iVar3 = *(int *)(lVar12 + 8 + lVar9);
  uVar15 = uVar2 * 3 + 2;
  lVar12 = *(longlong *)(*(longlong *)param_1[3] + 0x78);
  local_10c = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  uVar15 = uVar2 * 3 + 1;
  local_110 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8) +
               (ulonglong)(uVar15 & 0x1ff) * 4);
  local_114 = *(undefined4 *)
               (*(longlong *)(lVar12 + (ulonglong)(uVar2 * 3 >> 9) * 8) +
               (ulonglong)(uVar2 * 3 & 0x1ff) * 4);
  lVar12 = param_1[4];
  iVar8 = *(int *)(lVar12 + 0x10);
  iVar10 = *(int *)(lVar12 + 0x3c);
  local_118 = uVar2;
  if (iVar8 != iVar10) {
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x180) + (ulonglong)(uVar2 >> 9) * 8);
    puVar1 = (uint *)(lVar6 + lVar9);
    uVar15 = *(uint *)(lVar6 + lVar9);
    lVar9 = lVar12 + 0x40;
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      lVar9 = *(longlong *)(lVar12 + 0x48);
    }
    iVar14 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
    local_12c = iVar3;
    if (iVar14 != -1) {
      do {
        local_130 = iVar16;
        if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc) == uVar15) {
          local_108 = uVar15;
          FUN_14832b114(lVar12,&local_f0,uVar15);
          FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
          local_100 = CONCAT44(uStack_124,local_128);
          uStack_f8 = uStack_120;
          uStack_f4 = uStack_11c;
          local_e0 = iVar13 != *(int *)(*(longlong *)
                                         (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                         (ulonglong)(*puVar1 >> 9) * 8) +
                                       (ulonglong)((*puVar1 & 0x1ff) << 4));
          lVar12 = param_1[4];
          iVar8 = *(int *)(lVar12 + 0x10);
          iVar10 = *(int *)(lVar12 + 0x3c);
          iVar16 = local_130;
          break;
        }
        iVar14 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0xc + 4);
      } while (iVar14 != -1);
    }
    if (iVar8 != iVar10) {
      uVar15 = puVar1[1];
      lVar9 = lVar12 + 0x40;
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        lVar9 = *(longlong *)(lVar12 + 0x48);
      }
      iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
      if (iVar13 != -1) {
        do {
          local_130 = iVar16;
          if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
            local_d8 = uVar15;
            FUN_14832b114(lVar12,&local_128,uVar15);
            local_c0 = CONCAT44(uStack_124,local_128);
            uStack_b8 = uStack_120;
            uStack_b4 = uStack_11c;
            FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
            uStack_c8 = uStack_120;
            local_d0 = CONCAT44(uStack_124,local_128);
            local_b0 = local_130 !=
                       *(int *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                 (ulonglong)(puVar1[1] >> 9) * 8) +
                               (ulonglong)((puVar1[1] & 0x1ff) << 4));
            lVar12 = param_1[4];
            iVar8 = *(int *)(lVar12 + 0x10);
            iVar10 = *(int *)(lVar12 + 0x3c);
            break;
          }
          iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
        } while (iVar13 != -1);
      }
      if (iVar8 != iVar10) {
        uVar15 = puVar1[2];
        lVar9 = lVar12 + 0x40;
        if (*(longlong *)(lVar12 + 0x48) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x48);
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar12 + 0x50) - 1U & uVar15) * 4);
        if (iVar13 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc) == uVar15) {
              local_a8 = uVar15;
              FUN_14832b114(lVar12,&local_128,uVar15);
              local_90 = CONCAT44(uStack_124,local_128);
              uStack_88 = uStack_120;
              uStack_84 = uStack_11c;
              FUN_1483628f2(lVar12,&local_128,uVar15,uVar2);
              uStack_98 = uStack_120;
              local_a0 = CONCAT44(uStack_124,local_128);
              local_80 = local_12c !=
                         *(int *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                   (ulonglong)(puVar1[2] >> 9) * 8) +
                                 (ulonglong)((puVar1[2] & 0x1ff) << 4));
              lVar12 = param_1[4];
              break;
            }
            iVar13 = *(int *)(*(longlong *)(lVar12 + 8) + (longlong)iVar13 * 0xc + 4);
          } while (iVar13 != -1);
        }
      }
    }
  }
  FUN_14832b286(lVar12,&local_128,uVar2);
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  FUN_14832b30c(lVar12,&local_128,uVar2);
  uStack_70 = uStack_120;
  uStack_6c = uStack_11c;
  FUN_14832b38e(lVar12,&local_128,uVar2);
  uStack_50 = uStack_120;
  uStack_4c = uStack_11c;
  (**(code **)(**(longlong **)param_1[5] + 0x28))(*(longlong **)param_1[5],&local_118);
LAB_148366a1b:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148366e96 FUN_148366e96 body=176 status=ok
// SIG undefined FUN_148366e96(void)

void FUN_148366e96(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x20);
  *(float *)(*(longlong *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)(*param_5 >> 9) * 8) +
            (ulonglong)(*param_5 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(*param_4 >> 9) * 8) +
                                 (ulonglong)(*param_4 & 0x1ff) * 4) * *param_8 +
              (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(*param_2 >> 9) * 8) +
                                (ulonglong)(*param_2 & 0x1ff) * 4) * *param_6 +
              (double)*(float *)(*(longlong *)(lVar1 + (ulonglong)(*param_3 >> 9) * 8) +
                                (ulonglong)(*param_3 & 0x1ff) * 4) * *param_7);
  return;
}



// FUNCTION 148366f46 FUN_148366f46 body=146 status=ok
// SIG undefined FUN_148366f46(void)

void FUN_148366f46(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,double *param_5)

{
  double dVar1;
  
  dVar1 = *param_5;
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  *(float *)(*(longlong *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)(*param_4 >> 9) * 8) +
            (ulonglong)(*param_4 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (*(longlong *)(*param_1 + 0x20) + (ulonglong)(*param_3 >> 9) * 8)
                                 + (ulonglong)(*param_3 & 0x1ff) * 4) * dVar1 +
              (double)*(float *)(*(longlong *)
                                  (*(longlong *)(*param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8)
                                + (ulonglong)(*param_2 & 0x1ff) * 4) * (1.0 - dVar1));
  return;
}



// FUNCTION 148366fd8 FUN_148366fd8 body=71 status=ok
// SIG undefined FUN_148366fd8(void)

undefined8 * FUN_148366fd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae73f20;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836707a FUN_14836707a body=305 status=ok
// SIG undefined FUN_14836707a(void)

undefined4 FUN_14836707a(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  
  uVar3 = 0xffffffff;
  if (((-1 < (int)param_2) &&
      (lVar1 = *(longlong *)(param_1 + 8),
      (int)param_2 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar15 = *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 4);
    if (iVar15 < 1) {
      uVar3 = 0;
    }
    else {
      iVar4 = iVar15 + -1;
      if (iVar4 == 0) {
        uVar3 = 1;
      }
      else {
        uVar2 = iVar15 - 2;
        iVar12 = iVar15 + -3;
        iVar13 = iVar15 + -5;
        iVar15 = iVar15 + -7;
        uVar6 = uVar2 >> 1;
        uVar7 = uVar2 >> 1;
        uVar8 = uVar2 >> 1;
        uVar9 = uVar2 >> 1;
        uVar5 = 0xfffffffc;
        auVar17 = pmovsxbd(in_XMM4,0x2020202);
        auVar18 = pmovsxbd(in_XMM5,0xf8f8f8f8);
        auVar10 = (undefined1  [16])0x0;
        do {
          auVar11 = auVar10;
          auVar10._0_4_ = iVar4 * 3 + auVar11._0_4_ + (uint)(iVar4 == auVar17._0_4_);
          auVar10._4_4_ = iVar12 * 3 + auVar11._4_4_ + (uint)(iVar12 == auVar17._4_4_);
          auVar10._8_4_ = iVar13 * 3 + auVar11._8_4_ + (uint)(iVar13 == auVar17._8_4_);
          auVar10._12_4_ = iVar15 * 3 + auVar11._12_4_ + (uint)(iVar15 == auVar17._12_4_);
          iVar4 = iVar4 + auVar18._0_4_;
          iVar12 = iVar12 + auVar18._4_4_;
          iVar13 = iVar13 + auVar18._8_4_;
          iVar15 = iVar15 + auVar18._12_4_;
          uVar5 = uVar5 + 4;
        } while ((uVar2 >> 1 & 0xfffffffc) != uVar5);
        uVar2 = uVar5 | 1;
        uVar14 = uVar5 | 2;
        uVar16 = uVar5 | 3;
        auVar17._0_4_ = -(uint)(((uVar5 < uVar6) * uVar5 | (uVar5 >= uVar6) * uVar6) == uVar5);
        auVar17._4_4_ = -(uint)(((uVar2 < uVar7) * uVar2 | (uVar2 >= uVar7) * uVar7) == uVar2);
        auVar17._8_4_ = -(uint)(((uVar14 < uVar8) * uVar14 | (uVar14 >= uVar8) * uVar8) == uVar14);
        auVar17._12_4_ = -(uint)(((uVar16 < uVar9) * uVar16 | (uVar16 >= uVar9) * uVar9) == uVar16);
        auVar10 = blendvps(auVar11,auVar10,auVar17);
        auVar10 = phaddd(auVar10,auVar10);
        auVar10 = phaddd(auVar10,auVar10);
        uVar3 = auVar10._0_4_;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1483671ac FUN_1483671ac body=408 status=ok
// SIG undefined FUN_1483671ac(void)

uint FUN_1483671ac(longlong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar6;
  undefined1 auVar5 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar22 [16];
  
  uVar3 = 0xffffffff;
  if ((-1 < (int)param_2) &&
     (lVar4 = param_1[1], (int)param_2 < *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144)))
  {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iVar18 = *(int *)(param_1[2] + (ulonglong)param_2 * 4);
      lVar4 = 0;
      uVar3 = 0;
      do {
        iVar1 = (**(code **)(*param_1 + 8))
                          (param_1,*(undefined4 *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1[1] + 0x180) +
                                      (ulonglong)(param_2 >> 9) * 8) +
                                     (ulonglong)((param_2 & 0x1ff) << 2) * 3 + lVar4 * 4));
        uVar3 = uVar3 + iVar18 + iVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      if (1 < iVar18) {
        uVar6 = iVar18 - 2;
        iVar1 = iVar18 + -1;
        iVar16 = iVar18 + -3;
        iVar17 = iVar18 + -5;
        iVar18 = iVar18 + -7;
        uVar8 = uVar6 >> 1;
        uVar9 = uVar6 >> 1;
        uVar10 = uVar6 >> 1;
        uVar11 = uVar6 >> 1;
        uVar2 = 0xfffffffc;
        auVar19 = pmovsxbd(in_XMM5,0x1010101);
        auVar20 = pmovsxbd(unaff_XMM6,0x6060606);
        auVar21 = pmovsxbd(unaff_XMM7,0xfafafafa);
        auVar22 = pmovsxbd(unaff_XMM8,0xf8f8f8f8);
        auVar13 = ZEXT416(uVar3);
        do {
          auVar12 = auVar13;
          auVar5._0_4_ = -(uint)(iVar1 == auVar19._0_4_);
          auVar5._4_4_ = -(uint)(iVar16 == auVar19._4_4_);
          auVar5._8_4_ = -(uint)(iVar17 == auVar19._8_4_);
          auVar5._12_4_ = -(uint)(iVar18 == auVar19._12_4_);
          auVar15._4_4_ = iVar16;
          auVar15._0_4_ = iVar1;
          auVar15._8_4_ = iVar17;
          auVar15._12_4_ = iVar18;
          auVar13 = pmulld(auVar15,auVar20);
          auVar14._0_4_ = auVar13._0_4_ + auVar21._0_4_;
          auVar14._4_4_ = auVar13._4_4_ + auVar21._4_4_;
          auVar14._8_4_ = auVar13._8_4_ + auVar21._8_4_;
          auVar14._12_4_ = auVar13._12_4_ + auVar21._12_4_;
          auVar15 = blendvps(auVar14,auVar19,auVar5);
          auVar13._0_4_ = auVar15._0_4_ + auVar12._0_4_;
          auVar13._4_4_ = auVar15._4_4_ + auVar12._4_4_;
          auVar13._8_4_ = auVar15._8_4_ + auVar12._8_4_;
          auVar13._12_4_ = auVar15._12_4_ + auVar12._12_4_;
          iVar1 = iVar1 + auVar22._0_4_;
          iVar16 = iVar16 + auVar22._4_4_;
          iVar17 = iVar17 + auVar22._8_4_;
          iVar18 = iVar18 + auVar22._12_4_;
          uVar2 = uVar2 + 4;
        } while ((uVar6 >> 1 & 0xfffffffc) != uVar2);
        uVar3 = uVar2 | 1;
        uVar6 = uVar2 | 2;
        uVar7 = uVar2 | 3;
        auVar19._0_4_ = -(uint)(((uVar2 < uVar8) * uVar2 | (uVar2 >= uVar8) * uVar8) == uVar2);
        auVar19._4_4_ = -(uint)(((uVar3 < uVar9) * uVar3 | (uVar3 >= uVar9) * uVar9) == uVar3);
        auVar19._8_4_ = -(uint)(((uVar6 < uVar10) * uVar6 | (uVar6 >= uVar10) * uVar10) == uVar6);
        auVar19._12_4_ = -(uint)(((uVar7 < uVar11) * uVar7 | (uVar7 >= uVar11) * uVar11) == uVar7);
        auVar13 = blendvps(auVar12,auVar13,auVar19);
        auVar13 = phaddd(auVar13,auVar13);
        auVar13 = phaddd(auVar13,auVar13);
        uVar3 = auVar13._0_4_;
      }
    }
  }
  return uVar3;
}



// FUNCTION 14836738c FUN_14836738c body=2474 status=ok
// SIG undefined FUN_14836738c(void)

void FUN_14836738c(longlong param_1,int *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  undefined1 local_1a1;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  double local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double dStack_c8;
  int *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_190 = *(longlong *)(param_2 + 6);
  iVar11 = param_2[8];
  local_19c = param_2[9];
  local_194 = CONCAT31(local_194._1_3_,(char)param_2[0xe]);
  local_170 = param_2[1];
  iVar27 = param_2[2];
  local_180 = *(undefined8 *)(param_2 + 0x12);
  iVar28 = param_2[0x14];
  local_198 = param_2[0x15];
  local_1a0 = CONCAT31(local_1a0._1_3_,(char)param_2[0x1a]);
  iVar17 = param_2[3];
  local_188 = *(longlong *)(param_2 + 0x1e);
  iVar26 = param_2[0x20];
  local_16c = param_2[0x21];
  local_1a1 = (undefined1)param_2[0x26];
  local_b8 = (int *)0x0;
  uStack_b0 = 1;
  local_178 = iVar28 + 2;
  local_174 = iVar26 + 2;
  local_168 = param_1;
  FUN_148367f7c(&local_b8,0);
  *local_b8 = local_170;
  local_b8[1] = iVar27;
  *(longlong *)(local_b8 + 2) = local_190;
  local_b8[4] = iVar11;
  local_b8[5] = local_19c;
  local_b8[6] = iVar11 + 2;
  *(undefined1 *)(local_b8 + 7) = (undefined1)local_194;
  local_b8[8] = iVar27;
  local_b8[9] = iVar17;
  *(undefined8 *)(local_b8 + 10) = local_180;
  local_b8[0xc] = iVar28;
  local_b8[0xd] = local_198;
  local_b8[0xe] = local_178;
  *(undefined1 *)(local_b8 + 0xf) = (undefined1)local_1a0;
  local_b8[0x10] = iVar17;
  local_b8[0x11] = local_170;
  *(longlong *)(local_b8 + 0x12) = local_188;
  local_b8[0x14] = iVar26;
  local_b8[0x15] = local_16c;
  local_b8[0x16] = local_174;
  *(undefined1 *)(local_b8 + 0x17) = local_1a1;
  local_d8 = 1.0;
  dStack_d0 = 0.0;
  dStack_c8 = 0.0;
  local_f8 = 0;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0.0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 1.0;
  iVar11 = *(int *)(*(longlong *)(local_168 + 0x10) + (longlong)*param_2 * 4);
  if (0 < iVar11) {
    iVar27 = 0;
    uVar20 = (ulonglong)(iVar11 - 1);
    do {
      iVar11 = (int)uVar20;
      local_194 = iVar11 + 1;
      local_1b8 = &local_160;
      local_1c0 = &local_148;
      local_1c8 = &local_130;
      FUN_14832e020(&local_d8,&local_f8,&local_118);
      uVar13 = uStack_b0;
      dVar8 = 0.0;
      if (uVar20 != 0) {
        dVar8 = 1.0 / (double)iVar11;
      }
      lVar14 = *(longlong *)(param_2 + 0x2c);
      lVar12 = (longlong)iVar27;
      *(double *)(lVar14 + 0x10 + lVar12 * 0x18) = local_120;
      pdVar1 = (double *)(lVar14 + lVar12 * 0x18);
      *pdVar1 = local_130;
      pdVar1[1] = dStack_128;
      if (uVar20 < 2) {
        iVar28 = iVar27 + iVar11;
        lVar14 = *(longlong *)(param_2 + 0x2c);
        lVar15 = (longlong)iVar28;
        *(double *)(lVar14 + 0x10 + lVar15 * 0x18) = local_138;
        puVar3 = (undefined4 *)(lVar14 + lVar15 * 0x18);
        *puVar3 = local_148;
        puVar3[1] = uStack_144;
        puVar3[2] = uStack_140;
        puVar3[3] = uStack_13c;
        if (uVar20 != 0) goto LAB_1483676de;
        lVar14 = *(longlong *)(param_2 + 0x2c);
        iVar22 = *(int *)(*(longlong *)(param_2 + 0x28) + lVar12 * 4);
        lVar12 = lVar15 * 0x18;
        *(double *)(lVar14 + 0x10 + lVar12) = local_138;
        puVar2 = (undefined8 *)(lVar14 + lVar12);
        *puVar2 = CONCAT44(uStack_144,local_148);
        puVar2[1] = CONCAT44(uStack_13c,uStack_140);
        lVar14 = *(longlong *)(param_2 + 0x2c);
        *(double *)(lVar14 + 0x10 + lVar12) = local_150;
        puVar2 = (undefined8 *)(lVar14 + lVar12);
        *puVar2 = CONCAT44(uStack_15c,local_160);
        puVar2[1] = CONCAT44(uStack_154,uStack_158);
        lVar14 = *(longlong *)(param_2 + 0x2c);
        iVar25 = *(int *)(*(longlong *)(param_2 + 0x28) + lVar15 * 4);
        *(double *)(lVar14 + 0x10 + lVar12) = local_150;
        puVar2 = (undefined8 *)(lVar14 + lVar12);
        *puVar2 = CONCAT44(uStack_15c,local_160);
        puVar2[1] = CONCAT44(uStack_154,uStack_158);
        piVar16 = (int *)(lVar15 * 4 + *(longlong *)(param_2 + 0x28));
        lVar23 = 0;
        iVar17 = -1;
        iVar21 = 0;
        iVar26 = -1;
        lVar14 = 0;
        iVar27 = -1;
        local_190 = 0;
      }
      else {
        lVar14 = lVar12 * 0x18 + 0x28;
        uVar18 = 1;
        do {
          dVar9 = (double)(int)uVar18 * dVar8;
          lVar15 = *(longlong *)(param_2 + 0x2c);
          *(double *)(lVar15 + -0x10 + lVar14) =
               dVar9 * ((double)CONCAT44(uStack_144,local_148) - local_130) + local_130;
          *(double *)(lVar15 + -8 + lVar14) =
               ((double)CONCAT44(uStack_13c,uStack_140) - dStack_128) * dVar9 + dStack_128;
          *(double *)(lVar15 + lVar14) = (local_138 - local_120) * dVar9 + local_120;
          uVar18 = uVar18 + 1;
          lVar14 = lVar14 + 0x18;
        } while (uVar20 != uVar18);
        lVar14 = *(longlong *)(param_2 + 0x2c);
        lVar15 = (longlong)(iVar27 + iVar11);
        *(double *)(lVar14 + 0x10 + lVar15 * 0x18) = local_138;
        puVar2 = (undefined8 *)(lVar14 + lVar15 * 0x18);
        *puVar2 = CONCAT44(uStack_144,local_148);
        puVar2[1] = CONCAT44(uStack_13c,uStack_140);
LAB_1483676de:
        lVar14 = *(longlong *)(param_2 + 0x28);
        lVar23 = *(longlong *)(param_2 + 0x2c);
        iVar17 = *(int *)(lVar14 + lVar15 * 4);
        iVar22 = *(int *)(lVar14 + lVar12 * 4);
        *(double *)(lVar23 + 0x10 + lVar15 * 0x18) = local_138;
        puVar2 = (undefined8 *)(lVar23 + lVar15 * 0x18);
        *puVar2 = CONCAT44(uStack_144,local_148);
        puVar2[1] = CONCAT44(uStack_13c,uStack_140);
        if (1 < uVar20) {
          lVar23 = lVar15 * 0x18 + 0x28;
          uVar18 = 1;
          do {
            dVar9 = (double)(int)uVar18 * dVar8;
            lVar5 = *(longlong *)(param_2 + 0x2c);
            *(double *)(lVar5 + -0x10 + lVar23) =
                 dVar9 * ((double)CONCAT44(uStack_15c,local_160) -
                         (double)CONCAT44(uStack_144,local_148)) +
                 (double)CONCAT44(uStack_144,local_148);
            *(double *)(lVar5 + -8 + lVar23) =
                 ((double)CONCAT44(uStack_154,uStack_158) - (double)CONCAT44(uStack_13c,uStack_140))
                 * dVar9 + (double)CONCAT44(uStack_13c,uStack_140);
            *(double *)(lVar5 + lVar23) = (local_150 - local_138) * dVar9 + local_138;
            uVar18 = uVar18 + 1;
            lVar23 = lVar23 + 0x18;
          } while (uVar20 != uVar18);
        }
        iVar28 = iVar27 + iVar11 + iVar11;
        lVar24 = (longlong)iVar28;
        lVar23 = *(longlong *)(param_2 + 0x2c);
        lVar6 = lVar24 * 0x18;
        *(double *)(lVar23 + 0x10 + lVar6) = local_150;
        puVar2 = (undefined8 *)(lVar23 + lVar6);
        *puVar2 = CONCAT44(uStack_15c,local_160);
        puVar2[1] = CONCAT44(uStack_154,uStack_158);
        lVar5 = *(longlong *)(param_2 + 0x28);
        lVar23 = *(longlong *)(param_2 + 0x2c);
        iVar26 = *(int *)(lVar5 + lVar24 * 4);
        iVar25 = *(int *)(lVar5 + lVar15 * 4);
        *(double *)(lVar23 + 0x10 + lVar6) = local_150;
        puVar3 = (undefined4 *)(lVar23 + lVar6);
        *puVar3 = local_160;
        puVar3[1] = uStack_15c;
        puVar3[2] = uStack_158;
        puVar3[3] = uStack_154;
        if (1 < uVar20) {
          lVar23 = (longlong)(iVar27 + iVar11 + iVar11) * 0x18 + 0x28;
          uVar18 = 1;
          do {
            dVar9 = (double)(int)uVar18 * dVar8;
            lVar6 = *(longlong *)(param_2 + 0x2c);
            *(double *)(lVar6 + -0x10 + lVar23) =
                 dVar9 * (local_130 - (double)CONCAT44(uStack_15c,local_160)) +
                 (double)CONCAT44(uStack_15c,local_160);
            *(double *)(lVar6 + -8 + lVar23) =
                 (dStack_128 - (double)CONCAT44(uStack_154,uStack_158)) * dVar9 +
                 (double)CONCAT44(uStack_154,uStack_158);
            *(double *)(lVar6 + lVar23) = (local_120 - local_150) * dVar9 + local_150;
            uVar18 = uVar18 + 1;
            lVar23 = lVar23 + 0x18;
          } while (uVar20 != uVar18);
        }
        iVar21 = iVar11 + -1;
        lVar23 = lVar14 + lVar12 * 4 + 4;
        lVar14 = lVar5 + 4 + lVar15 * 4;
        lVar15 = *(longlong *)(param_2 + 0x28);
        piVar16 = (int *)(lVar15 + lVar24 * 4);
        local_190 = lVar15 + 4 + lVar24 * 4;
        iVar27 = *(int *)(lVar15 + lVar12 * 4);
        local_1a0 = iVar17;
        local_19c = iVar22;
      }
      iVar4 = *piVar16;
      dStack_c8 = local_120;
      local_d8 = local_130;
      dStack_d0 = dStack_128;
      local_f8 = CONCAT44(uStack_144,local_148);
      uStack_f0 = CONCAT44(uStack_13c,uStack_140);
      local_e8 = local_138;
      local_118 = CONCAT44(uStack_15c,local_160);
      uStack_110 = CONCAT44(uStack_154,uStack_158);
      local_108 = local_150;
      lVar12 = (longlong)(int)uStack_b0;
      uVar10 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
      if (uStack_b0._4_4_ < uVar10) {
        local_180 = CONCAT44(local_180._4_4_,iVar25);
        local_1a0 = iVar17;
        local_19c = iVar22;
        local_198 = iVar26;
        local_188 = lVar23;
        FUN_148367f7c(&local_b8,uVar13 & 0xffffffff);
        lVar23 = local_188;
        iVar17 = local_1a0;
        iVar25 = (int)local_180;
        iVar26 = local_198;
        iVar22 = local_19c;
      }
      local_b8[lVar12 * 0x18] = iVar22;
      local_b8[lVar12 * 0x18 + 1] = iVar17;
      *(longlong *)(local_b8 + lVar12 * 0x18 + 2) = lVar23;
      local_b8[lVar12 * 0x18 + 4] = iVar21;
      local_b8[lVar12 * 0x18 + 6] = local_194;
      *(undefined1 *)(local_b8 + lVar12 * 0x18 + 7) = 0;
      local_b8[lVar12 * 0x18 + 8] = iVar25;
      local_b8[lVar12 * 0x18 + 9] = iVar26;
      *(longlong *)(local_b8 + lVar12 * 0x18 + 10) = lVar14;
      local_b8[lVar12 * 0x18 + 0xc] = iVar21;
      local_b8[lVar12 * 0x18 + 0xe] = local_194;
      *(undefined1 *)(local_b8 + lVar12 * 0x18 + 0xf) = 0;
      local_b8[lVar12 * 0x18 + 0x10] = iVar4;
      local_b8[lVar12 * 0x18 + 0x11] = iVar27;
      *(longlong *)(local_b8 + lVar12 * 0x18 + 0x12) = local_190;
      local_b8[lVar12 * 0x18 + 0x14] = iVar21;
      local_b8[lVar12 * 0x18 + 0x16] = local_194;
      *(undefined1 *)(local_b8 + lVar12 * 0x18 + 0x17) = 0;
      iVar27 = iVar28 + iVar11;
      bVar7 = 1 < uVar20;
      uVar20 = uVar20 - 2;
    } while (bVar7);
  }
  uVar20 = 0;
  if ((int)uStack_b0 < 2) {
    uVar13 = (ulonglong)((int)uStack_b0 - 1);
  }
  else {
    piVar16 = param_2 + 0x30;
    lVar14 = 0;
    lVar12 = 0;
    do {
      lVar12 = lVar12 + 1;
      iVar11 = FUN_148367d38((longlong)local_b8 + lVar14,(longlong)local_b8 + lVar14 + 0x60,uVar20,
                             piVar16);
      iVar11 = iVar11 + (int)uVar20;
      iVar27 = FUN_148367d38((longlong)local_b8 + lVar14 + 0x20,(longlong)local_b8 + lVar14 + 0x80,
                             iVar11,piVar16);
      iVar27 = iVar27 + iVar11;
      iVar11 = FUN_148367d38((longlong)local_b8 + lVar14 + 0x40,(longlong)local_b8 + lVar14 + 0xa0,
                             iVar27,piVar16);
      uVar10 = iVar11 + iVar27;
      uVar20 = (ulonglong)uVar10;
      uVar13 = (longlong)(int)uStack_b0 - 1;
      lVar14 = lVar14 + 0x60;
    } while (lVar12 < (longlong)uVar13);
    uVar20 = (ulonglong)(int)uVar10;
  }
  if ((*(byte *)(*(longlong *)(local_168 + 0x10) + (longlong)*param_2 * 4) & 1) == 0) {
    piVar16 = local_b8 + (longlong)(int)uVar13 * 0x18;
    if (local_b8[(longlong)(int)uVar13 * 0x18 + 0xe] == 2) {
      piVar19 = piVar16 + 9;
    }
    else {
      if ((char)piVar16[0xf] == '\x01') {
        lVar14 = (longlong)(piVar16[0xc] + -1);
      }
      else {
        lVar14 = 0;
      }
      piVar19 = (int *)(lVar14 * 4 + *(longlong *)(piVar16 + 10));
    }
    iVar11 = *piVar19;
    if (piVar16[6] == 2) {
      piVar19 = piVar16 + 1;
    }
    else {
      if ((char)piVar16[7] == '\x01') {
        lVar14 = (longlong)(piVar16[4] + -1);
      }
      else {
        lVar14 = 0;
      }
      piVar19 = (int *)(lVar14 * 4 + *(longlong *)(piVar16 + 2));
    }
    iVar27 = *piVar19;
    lVar14 = *(longlong *)(param_2 + 0x30);
    *(int *)(lVar14 + uVar20 * 0xc) = *piVar16;
    *(int *)(lVar14 + 4 + uVar20 * 0xc) = iVar27;
    *(int *)(lVar14 + 8 + uVar20 * 0xc) = iVar11;
  }
  if (local_b8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148367d38 FUN_148367d38 body=580 status=ok
// SIG undefined FUN_148367d38(void)

uint FUN_148367d38(undefined4 *param_1,undefined4 *param_2,int param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  longlong lVar19;
  
  iVar3 = param_1[6];
  iVar4 = param_2[6];
  uVar8 = (iVar4 + iVar3) - 2;
  if (0 < (int)uVar8) {
    iVar14 = iVar4 - iVar3;
    puVar1 = param_2 + 1;
    puVar2 = param_1 + 1;
    uVar15 = (ulonglong)uVar8;
    lVar19 = (longlong)param_3 * 0xc + 8;
    iVar17 = 0;
    iVar13 = 0;
    do {
      iVar12 = iVar13 + 1;
      if (iVar17 == iVar4 + -1 || iVar12 < iVar3 && iVar14 < 0) {
        puVar7 = param_2;
        if ((iVar17 != 0) && (puVar7 = puVar1, param_2[6] + -1 != iVar17)) {
          iVar9 = iVar17 + -1;
          if (*(char *)(param_2 + 7) != '\0') {
            iVar9 = param_2[4] - iVar17;
          }
          puVar7 = (undefined4 *)((longlong)iVar9 * 4 + *(longlong *)(param_2 + 2));
        }
        if (iVar12 == 0) {
          uVar16 = *param_1;
          iVar9 = param_1[6];
LAB_148367e40:
          puVar11 = puVar2;
          if (iVar9 + -1 != iVar13) {
            iVar9 = iVar13 + -1;
            if (*(char *)(param_1 + 7) != '\0') {
              iVar9 = param_1[4] - iVar13;
            }
            puVar11 = (undefined4 *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 2));
          }
        }
        else {
          iVar9 = param_1[6];
          puVar11 = puVar2;
          if (iVar9 != iVar13 + 2) {
            iVar10 = param_1[4] - iVar12;
            if (*(char *)(param_1 + 7) == '\0') {
              iVar10 = iVar13;
            }
            puVar11 = (undefined4 *)((longlong)iVar10 * 4 + *(longlong *)(param_1 + 2));
          }
          uVar16 = *puVar11;
          puVar11 = param_1;
          if (iVar13 != 0) goto LAB_148367e40;
        }
        uVar5 = *puVar7;
        lVar6 = *param_4;
        *(undefined4 *)(lVar6 + -8 + lVar19) = *puVar11;
        *(undefined4 *)(lVar6 + -4 + lVar19) = uVar16;
        *(undefined4 *)(lVar6 + lVar19) = uVar5;
        iVar13 = iVar12;
        iVar9 = iVar4 * 2;
      }
      else {
        iVar12 = iVar17 + 1;
        puVar7 = param_2;
        if ((iVar12 != 0) && (puVar7 = puVar1, param_2[6] != iVar17 + 2)) {
          iVar9 = param_2[4] - iVar12;
          if (*(char *)(param_2 + 7) == '\0') {
            iVar9 = iVar17;
          }
          puVar7 = (undefined4 *)((longlong)iVar9 * 4 + *(longlong *)(param_2 + 2));
        }
        puVar11 = param_1;
        if ((iVar13 != 0) && (puVar11 = puVar2, param_1[6] + -1 != iVar13)) {
          iVar9 = iVar13 + -1;
          if (*(char *)(param_1 + 7) != '\0') {
            iVar9 = param_1[4] - iVar13;
          }
          puVar11 = (undefined4 *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 2));
        }
        puVar18 = param_2;
        if ((iVar17 != 0) && (puVar18 = puVar1, param_2[6] + -1 != iVar17)) {
          iVar9 = iVar17 + -1;
          if (*(char *)(param_2 + 7) != '\0') {
            iVar9 = param_2[4] - iVar17;
          }
          puVar18 = (undefined4 *)((longlong)iVar9 * 4 + *(longlong *)(param_2 + 2));
        }
        uVar16 = *puVar7;
        uVar5 = *puVar11;
        lVar6 = *param_4;
        *(undefined4 *)(lVar6 + -8 + lVar19) = *puVar18;
        *(undefined4 *)(lVar6 + -4 + lVar19) = uVar5;
        *(undefined4 *)(lVar6 + lVar19) = uVar16;
        iVar9 = iVar3 * -2;
        iVar17 = iVar12;
      }
      iVar14 = iVar14 + iVar9;
      lVar19 = lVar19 + 0xc;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return uVar8;
}



// FUNCTION 148367f7c FUN_148367f7c body=147 status=ok
// SIG undefined FUN_148367f7c(void)

void FUN_148367f7c(longlong param_1,int param_2)

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



// FUNCTION 148368010 FUN_148368010 body=29 status=ok
// SIG undefined FUN_148368010(void)

undefined8 FUN_148368010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836802e FUN_14836802e body=130 status=ok
// SIG undefined FUN_14836802e(void)

ulonglong FUN_14836802e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_20 = 0xc00000000;
  FUN_146bea50a(local_58,(ulonglong)((param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) +
                          (ulonglong)(param_2 >> 9) * 8));
  uVar1 = local_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483680b2 FUN_1483680b2 body=141 status=ok
// SIG undefined FUN_1483680b2(void)

undefined2 FUN_1483680b2(longlong param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined1 *)0x0;
  local_20 = 0xc00000000;
  FUN_146bea50a(local_58,(ulonglong)((param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) +
                          (ulonglong)(param_2 >> 9) * 8));
  puVar2 = local_58;
  if (local_28 != (undefined1 *)0x0) {
    puVar2 = local_28;
  }
  uVar1 = *(undefined2 *)(puVar2 + (longlong)param_3 * 4);
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148368140 FUN_148368140 body=155 status=ok
// SIG undefined FUN_148368140(void)

void FUN_148368140(longlong param_1,uint param_2,int param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (undefined1 *)0x0;
  local_20 = 0xc00000000;
  FUN_146bea50a(local_58,(ulonglong)((param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) +
                          (ulonglong)(param_2 >> 9) * 8));
  puVar2 = local_58;
  if (local_28 != (undefined1 *)0x0) {
    puVar2 = local_28;
  }
  uVar1 = *(ushort *)(puVar2 + (longlong)param_3 * 4 + 2);
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)uVar1 / 65535.0);
}



// FUNCTION 1483681dc FUN_1483681dc body=215 status=ok
// SIG undefined FUN_1483681dc(void)

float FUN_1483681dc(longlong param_1,uint param_2,short param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [48];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = (undefined1 *)0x0;
  local_38 = 0xc00000000;
  FUN_146bea50a(local_70,(ulonglong)((param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) +
                          (ulonglong)(param_2 >> 9) * 8));
  puVar1 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar1 = local_70;
  }
  fVar3 = 0.0;
  if ((longlong)(int)local_38 != 0) {
    lVar2 = 0;
    do {
      if (*(short *)(puVar1 + lVar2) == param_3) {
        fVar3 = (float)*(ushort *)(puVar1 + lVar2 + 2) / 65535.0;
        break;
      }
      lVar2 = lVar2 + 4;
    } while ((longlong)(int)local_38 * 4 != lVar2);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar3;
}



// FUNCTION 1483682b4 FUN_1483682b4 body=97 status=ok
// SIG undefined FUN_1483682b4(void)

undefined8 * FUN_1483682b4(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x8000);
  memset(_Dst,0,0x8000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_148368316(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 148368316 FUN_148368316 body=132 status=ok
// SIG undefined FUN_148368316(void)

void FUN_148368316(longlong param_1,int param_2)

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



// FUNCTION 14836839c FUN_14836839c body=442 status=ok
// SIG undefined FUN_14836839c(void)

longlong FUN_14836839c(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_b8 [36];
  uint local_94;
  uint local_90 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_4c;
  uint *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_4c = param_2;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      do {
        lVar1 = lVar4 + (longlong)iVar7 * 0x10;
        if (*(uint *)(lVar4 + (longlong)iVar7 * 0x10) == param_2) {
          if ((uint *)(lVar1 + 4) != (uint *)0x0 && lVar1 != 0) {
            uVar3 = *(uint *)(lVar1 + 4);
            goto LAB_14836846a;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 8);
      } while (iVar7 != -1);
    }
  }
  if (param_3 == '\0') {
    lVar4 = 0;
  }
  else {
    local_90[1] = 0xffffffff;
    local_90[2] = 0;
    local_90[3] = 0;
    local_80 = DAT_14c8463f0;
    uStack_78 = DAT_14c8463f8;
    local_70 = 0;
    local_58 = DAT_14c8463c8;
    local_68 = (undefined4)DAT_14c8463b8;
    uStack_64 = DAT_14c8463b8._4_4_;
    uStack_60 = (undefined4)DAT_14c8463c0;
    uStack_5c = DAT_14c8463c0._4_4_;
    local_90[0] = param_2;
    if (*(char *)(param_1 + 9) == '\x01') {
      local_48 = (uint *)CONCAT44(local_48._4_4_,param_2);
      pcVar2 = *(code **)(param_1 + 0x10);
      plVar6 = (longlong *)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        plVar6 = *(longlong **)(param_1 + 0x20);
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(&local_68,uVar5,&local_48);
    }
    else {
      FUN_148368738(param_1,&local_68,param_2);
    }
    local_94 = *(int *)(param_1 + 0xa0) * 0x200 + *(int *)(param_1 + 0xa4);
    FUN_14836879c(param_1 + 0xa0,local_90);
    local_48 = &local_4c;
    local_40 = &local_94;
    FUN_140263e2a((longlong *)(param_1 + 0x50),local_34,&local_48,0);
    uVar3 = local_94;
LAB_14836846a:
    lVar4 = (ulonglong)((uVar3 & 0x1ff) << 6) +
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)(uVar3 >> 9) * 8);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 148368558 FUN_148368558 body=478 status=ok
// SIG undefined FUN_148368558(void)

void FUN_148368558(longlong *param_1,double param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (int)param_1[0x1b]) {
    do {
      uVar3 = *(undefined4 *)(*(longlong *)param_1[0x19] + 0xc);
      FUN_146bd26ea(param_1 + 0x17,1);
      puVar6 = (uint *)FUN_14836839c(param_1,uVar3,0);
      uVar7 = -(ulonglong)((double)param_1[0x25] <= *(double *)(puVar6 + 2));
      dVar5 = (double)(~uVar7 & param_1[0x25] | (ulonglong)*(double *)(puVar6 + 2) & uVar7);
      param_1[0x25] = (longlong)dVar5;
      if (param_2 < dVar5) goto LAB_148368699;
      if (-1 < (int)puVar6[1]) {
        cVar2 = (char)param_1[1];
        if (cVar2 == '\x01') {
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(*puVar6 >> 9) * 8);
          uVar7 = (ulonglong)(*puVar6 & 0x1ff);
          local_68 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
          puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uStack_70 = puVar1[2];
          uStack_6c = puVar1[3];
          FUN_14836955a(param_1,&local_60,param_1 + 0x1e,&local_78);
          *(undefined8 *)(puVar6 + 4) = local_60;
          *(undefined8 *)(puVar6 + 6) = uStack_58;
        }
        else if (cVar2 == '\x03') {
          FUN_1483689a2(param_1,puVar6);
        }
        else if (cVar2 == '\x02') {
          FUN_148368854(param_1,puVar6);
        }
      }
      dVar5 = *(double *)(puVar6 + 4) * *(double *)(puVar6 + 4) +
              *(double *)(puVar6 + 6) * *(double *)(puVar6 + 6);
      if ((double)param_1[0x26] <= dVar5 && dVar5 != (double)param_1[0x26]) {
        param_1[0x26] = (longlong)dVar5;
      }
      *(undefined1 *)(puVar6 + 8) = 1;
      FUN_148368dd8(param_1,puVar6);
    } while (0 < (int)param_1[0x1b]);
  }
  dVar5 = (double)param_1[0x26];
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  param_1[0x26] = (longlong)dVar5;
LAB_148368699:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148368738 FUN_148368738 body=100 status=ok
// SIG undefined FUN_148368738(void)

double * FUN_148368738(longlong *param_1,double *param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x70) == '\x01') {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (param_3 >> 9 & 0x7fffff) * 8);
    uVar4 = (ulonglong)((uint)param_3 & 0x1ff);
    fVar1 = *(float *)(lVar3 + 8 + uVar4 * 0xc);
    fVar2 = *(float *)(lVar3 + 4 + uVar4 * 0xc);
    *param_2 = (double)*(float *)(lVar3 + uVar4 * 0xc);
    param_2[1] = (double)fVar2;
    param_2[2] = (double)fVar1;
  }
  else {
    FUN_146c393d4(param_2,lVar3,param_3,1,1);
  }
  return param_2;
}



// FUNCTION 14836879c FUN_14836879c body=183 status=ok
// SIG undefined FUN_14836879c(void)

void FUN_14836879c(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  void *_Dst;
  uint uVar12;
  longlong lVar13;
  
  iVar11 = *param_1;
  uVar12 = param_1[1];
  if (uVar12 == 0x200) {
    iVar2 = param_1[4];
    if (iVar11 == iVar2 + -1) {
      _Dst = (void *)FUN_14001cc68(0x8000);
      memset(_Dst,0,0x8000);
      param_1[4] = iVar2 + 1U;
      if ((uint)param_1[5] < iVar2 + 1U) {
        FUN_148368316(param_1 + 2,iVar2);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) = _Dst;
      iVar11 = *param_1;
    }
    iVar11 = iVar11 + 1;
    *param_1 = iVar11;
    param_1[1] = 0;
    uVar12 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar11 * 8);
  lVar13 = (ulonglong)uVar12 * 0x40;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[7];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar13);
  *puVar1 = param_2[6];
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar13);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar13) = uVar4;
  ((undefined8 *)(lVar3 + lVar13))[1] = uVar5;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 148368854 FUN_148368854 body=332 status=ok
// SIG undefined FUN_148368854(void)

void FUN_148368854(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar4 = (uint *)FUN_14836839c(param_1,param_2[1],0);
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(*puVar4 >> 9) * 8);
  uVar5 = (ulonglong)*puVar4 & 0x1ff;
  local_a8 = *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined8 *)(lVar3 + uVar5 * 0x18);
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x3ff0000000000000;
  local_48 = DAT_14c8463c8;
  local_58 = (undefined4)DAT_14c8463b8;
  uStack_54 = DAT_14c8463b8._4_4_;
  uStack_50 = (undefined4)DAT_14c8463c0;
  uStack_4c = DAT_14c8463c0._4_4_;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  local_68 = local_a8;
  FUN_146bfb7f2(&local_a0,&local_58,puVar4 + 10);
  local_c0 = param_1 + 0x1e;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(*param_2 >> 9) * 8);
  uVar5 = (ulonglong)*param_2 & 0x1ff;
  local_48 = *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18);
  puVar2 = (undefined4 *)(lVar3 + uVar5 * 0x18);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_c8 = &local_b8;
  FUN_14836917a(param_1,&local_78,&local_58,puVar4 + 4);
  param_2[4] = (uint)local_78;
  param_2[5] = local_78._4_4_;
  param_2[6] = (uint)uStack_70;
  param_2[7] = uStack_70._4_4_;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483689a2 FUN_1483689a2 body=1077 status=ok
// SIG undefined FUN_1483689a2(void)

void FUN_1483689a2(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  double dVar14;
  undefined1 auStack_2b8 [32];
  double *local_298;
  longlong *local_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined1 *local_1e8;
  int local_1e0;
  int local_1d0;
  int local_1cc;
  longlong local_1b8;
  longlong *local_1a8;
  longlong local_198 [4];
  undefined1 *local_178;
  int local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined **local_158;
  uint local_150;
  code *local_148;
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [5];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_14836839c(param_1,param_2[1],0);
  dVar6 = DAT_14c8463f8;
  dVar5 = DAT_14c8463f0;
  local_150 = *param_2;
  local_148 = (code *)*param_1;
  lVar3 = *(longlong *)(*(longlong *)(local_148 + 0x10) + (ulonglong)(local_150 >> 9) * 8);
  local_238 = *(double *)(lVar3 + 0x10 + (ulonglong)(local_150 & 0x1ff) * 0x18);
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)(local_150 & 0x1ff) * 0x18);
  local_248 = *puVar1;
  uStack_244 = puVar1[1];
  uStack_240 = puVar1[2];
  uStack_23c = puVar1[3];
  local_168 = 0;
  local_158 = &PTR_LAB_149f3b7b0;
  local_178 = &LAB_146c413d0;
  FUN_146c41260(local_148 + 0xb8,&local_108,local_150,&local_178);
  FUN_146c41458(local_108,&local_178,local_100,local_f8);
  FUN_146c41662(local_108,&local_1e8,local_100,local_f8);
  dVar7 = 0.0;
  while ((((pcVar8 = local_148, local_178 != local_1e8 || (local_170 != local_1e0)) ||
          ((int)local_160 != local_1d0)) || (local_160._4_4_ != local_1cc))) {
    local_288 = (double)CONCAT44(local_288._4_4_,local_158._0_4_);
    plVar13 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar13 = local_128;
    }
    uVar10 = (**(code **)(*plVar13 + 8))();
    uVar9 = (*pcVar8)(uVar10,&local_288);
    puVar11 = (uint *)FUN_14836839c(param_1,uVar9,0);
    if ((puVar11 != (uint *)0x0) && ((char)puVar11[8] == '\x01')) {
      lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(*puVar11 >> 9) * 8);
      uVar12 = (ulonglong)(*puVar11 & 0x1ff);
      local_278 = *(double *)(lVar3 + 0x10 + uVar12 * 0x18);
      pdVar2 = (double *)(lVar3 + uVar12 * 0x18);
      local_288 = *pdVar2;
      dStack_280 = pdVar2[1];
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0;
      local_258 = 0x3ff0000000000000;
      local_1f8 = DAT_14c8463c8;
      local_208 = (undefined4)DAT_14c8463b8;
      uStack_204 = DAT_14c8463b8._4_4_;
      uStack_200 = (undefined4)DAT_14c8463c0;
      uStack_1fc = DAT_14c8463c0._4_4_;
      local_228 = local_288;
      dStack_220 = dStack_280;
      local_218 = local_278;
      FUN_146bfb7f2(&local_270,&local_208,puVar11 + 10);
      local_298 = &local_288;
      local_290 = param_1 + 0x1e;
      FUN_14836917a(param_1,&local_208,&local_248,puVar11 + 4);
      dVar4 = local_288 - (double)CONCAT44(uStack_244,local_248);
      dVar14 = dStack_280 - (double)CONCAT44(uStack_23c,uStack_240);
      dVar4 = 1.0 / ((local_278 - local_238) * (local_278 - local_238) +
                     dVar4 * dVar4 + dVar14 * dVar14 + 1e-08);
      dVar7 = dVar7 + dVar4;
      dVar5 = dVar5 + dVar4 * (double)CONCAT44(uStack_204,local_208);
      dVar6 = dVar6 + (double)CONCAT44(uStack_1fc,uStack_200) * dVar4;
    }
    if ((int)local_168 == 0) {
      local_16c = 0xffffffff;
      local_160 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_178);
    }
  }
  if (local_1b8 != 0) {
    if (local_1a8 == (longlong *)0x0) {
      local_1a8 = local_198;
    }
    (**(code **)(*local_1a8 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    plVar13 = local_128;
    if (local_138 != (longlong *)0x0) {
      plVar13 = local_138;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if (local_f8[0] != 0) {
    if (local_e8 == (longlong *)0x0) {
      local_e8 = local_d8;
    }
    (**(code **)(*local_e8 + 0x10))();
  }
  *(double *)(param_2 + 4) = dVar5 * (1.0 / dVar7);
  *(double *)(param_2 + 6) = dVar6 * (1.0 / dVar7);
  if ((local_b0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148368dd8 FUN_148368dd8 body=929 status=ok
// SIG undefined FUN_148368dd8(void)

void FUN_148368dd8(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1f8 [44];
  undefined4 local_1cc;
  undefined1 *local_1c8;
  int local_1c0;
  int local_1b0;
  int local_1ac;
  longlong local_198;
  longlong *local_188;
  longlong local_178 [4];
  undefined1 *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined **local_138;
  uint local_130;
  code *local_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_130 = *param_2;
  local_128 = (code *)*param_1;
  lVar10 = *(longlong *)(*(longlong *)(local_128 + 0x10) + (ulonglong)(local_130 >> 9) * 8);
  uVar12 = (ulonglong)(local_130 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  dVar4 = *(double *)(param_2 + 2);
  local_148 = 0;
  local_138 = &PTR_LAB_149f3b7b0;
  local_158 = &LAB_146c413d0;
  FUN_146c41260(local_128 + 0xb8,&local_e8,local_130,&local_158);
  FUN_146c41458(local_e8,&local_158,local_e0,local_d8);
  FUN_146c41662(local_e8,&local_1c8,local_e0,local_d8);
  do {
    pcVar7 = local_128;
    if ((((local_158 == local_1c8) && (local_150 == local_1c0)) && ((int)local_140 == local_1b0)) &&
       (local_140._4_4_ == local_1ac)) {
      if (local_198 != 0) {
        if (local_188 == (longlong *)0x0) {
          local_188 = local_178;
        }
        (**(code **)(*local_188 + 0x10))();
      }
      if (local_128 != (code *)0x0) {
        plVar11 = local_108;
        if (local_118 != (longlong *)0x0) {
          plVar11 = local_118;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_1cc = local_138._0_4_;
    plVar11 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar11 = local_108;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    uVar8 = (*pcVar7)(uVar9,&local_1cc);
    lVar10 = FUN_14836839c(param_1,uVar8,1);
    if (*(char *)(lVar10 + 0x20) == '\0') {
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
      uVar12 = (ulonglong)(uVar8 & 0x1ff);
      dVar13 = *(double *)(lVar6 + uVar12 * 0x18) - dVar1;
      dVar14 = *(double *)(lVar6 + 8 + uVar12 * 0x18) - dVar2;
      dVar15 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18) - dVar3;
      dVar13 = SQRT(dVar15 * dVar15 + dVar13 * dVar13 + dVar14 * dVar14) + dVar4;
      if ((int)uVar8 <= (int)param_1[0x1d] + 1) {
        uVar5 = *(uint *)(param_1[0x1c] + (longlong)(int)uVar8 * 4);
        if ((0 < (int)uVar5) && ((int)uVar5 <= (int)param_1[0x1b])) {
          if (0 < *(int *)(*(longlong *)(param_1[0x19] + (ulonglong)(uVar5 >> 9) * 8) + 8 +
                          (ulonglong)(uVar5 & 0x1ff) * 0xc)) {
            if (dVar13 < *(double *)(lVar10 + 8)) {
              *(uint *)(lVar10 + 4) = *param_2;
              *(double *)(lVar10 + 8) = dVar13;
              uVar8 = *(uint *)(param_1[0x1c] + (longlong)(int)uVar8 * 4);
              *(float *)(*(longlong *)(param_1[0x19] + (ulonglong)(uVar8 >> 9) * 8) + 4 +
                        (ulonglong)(uVar8 & 0x1ff) * 0xc) = (float)dVar13;
              FUN_146bd2818(param_1 + 0x17);
            }
            goto LAB_148368f6d;
          }
        }
      }
      *(uint *)(lVar10 + 4) = *param_2;
      *(double *)(lVar10 + 8) = dVar13;
      FUN_146b9cbf0(param_1 + 0x17,uVar8,(float)dVar13);
    }
LAB_148368f6d:
    if ((int)local_148 == 0) {
      local_14c = 0xffffffff;
      local_140 = 0xffffffffffffffff;
    }
    else {
      FUN_146be9922(&local_158);
    }
  } while( true );
}



// FUNCTION 14836917a FUN_14836917a body=990 status=ok
// SIG undefined FUN_14836917a(void)

double * FUN_14836917a(undefined8 param_1,double *param_2,undefined8 *param_3,double *param_4,
                      longlong param_5,undefined8 *param_6)

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
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_188 [40];
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_108 = *param_3;
  uStack_100 = param_3[1];
  local_f8 = param_3[2];
  FUN_14836955a(param_1,&local_f0,param_5);
  local_118 = (double)param_6[6];
  local_148 = *param_6;
  uStack_140 = param_6[1];
  local_138 = param_6[2];
  dStack_130 = (double)param_6[3];
  local_128 = (double)param_6[4];
  dStack_120 = (double)param_6[5];
  dVar1 = *(double *)(param_5 + 0x18);
  dVar14 = *(double *)(param_5 + 0x20);
  dVar13 = *(double *)(param_5 + 0x28) + *(double *)(param_5 + 0x28);
  local_160 = dVar1 * dVar13 + *(double *)(param_5 + 0x30) * (dVar14 + dVar14);
  local_158 = dVar13 * dVar14 - (dVar1 + dVar1) * *(double *)(param_5 + 0x30);
  local_150 = 1.0 - ((dVar14 + dVar14) * dVar14 + dVar1 * (dVar1 + dVar1));
  FUN_1482ae234(&local_148,2);
  dVar1 = local_128 + local_128;
  dVar14 = dStack_120 + dStack_120;
  dVar4 = dVar1 * dStack_130 + local_118 * dVar14;
  dVar3 = dStack_130 * dVar14 - dVar1 * local_118;
  dVar15 = 1.0 - (dVar14 * dStack_120 + local_128 * dVar1);
  dVar1 = *(double *)(param_5 + 0x18);
  dVar14 = *(double *)(param_5 + 0x20);
  dVar13 = *(double *)(param_5 + 0x28);
  dVar12 = dVar13 + dVar13;
  dVar5 = dVar14 + dVar14;
  dVar2 = *(double *)(param_5 + 0x30);
  dVar6 = dVar5 * dVar1 + dVar12 * dVar2;
  dVar8 = dVar12 * dVar1 - dVar5 * dVar2;
  dVar7 = 1.0 - (dVar13 * dVar12 + dVar14 * dVar5);
  dVar13 = dVar8 * dVar3 + dVar7 * dVar15 + dVar4 * dVar6;
  dVar9 = 1.0 - dVar13 * dVar13;
  dVar10 = 0.0;
  if (0.0 <= dVar9) {
    dVar10 = dVar9;
  }
  uVar11 = -(ulonglong)
            ((dVar12 * dVar1 + dVar5 * dVar2) * (dVar6 * dVar3 - dVar8 * dVar4) +
             (dVar12 * dVar14 - dVar2 * (dVar1 + dVar1)) * (dVar8 * dVar15 - dVar3 * dVar7) +
             (1.0 - ((dVar1 + dVar1) * dVar1 + dVar14 * dVar5)) * (dVar7 * dVar4 - dVar15 * dVar6) <
            0.0);
  dVar14 = (double)(uVar11 & (ulonglong)-SQRT(dVar10) | ~uVar11 & (ulonglong)SQRT(dVar10));
  dVar1 = param_4[1];
  *param_2 = dVar13 * local_f0 + local_e8 * dVar14 + *param_4;
  param_2[1] = (local_e8 * dVar13 - dVar14 * local_f0) + dVar1;
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836955a FUN_14836955a body=383 status=ok
// SIG undefined FUN_14836955a(void)

double * FUN_14836955a(undefined8 param_1,double *param_2,double *param_3,double *param_4)

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
  
  dVar6 = *param_4 - *param_3;
  *param_4 = dVar6;
  dVar8 = param_4[1] - param_3[1];
  param_4[1] = dVar8;
  dVar7 = param_4[2] - param_3[2];
  param_4[2] = dVar7;
  dVar1 = param_3[3];
  dVar2 = param_3[4];
  dVar3 = param_3[5];
  dVar9 = dVar3 + dVar3;
  dVar5 = dVar2 + dVar2;
  dVar4 = param_3[6];
  *param_2 = (dVar9 * dVar1 - dVar4 * dVar5) * dVar7 +
             (1.0 - (dVar5 * dVar2 + dVar3 * dVar9)) * dVar6 +
             (dVar1 * dVar5 + dVar9 * dVar4) * dVar8;
  param_2[1] = (dVar2 * dVar9 + (dVar1 + dVar1) * dVar4) * dVar7 +
               (dVar1 * dVar5 - dVar9 * dVar4) * dVar6 +
               (1.0 - (dVar1 * (dVar1 + dVar1) + dVar3 * dVar9)) * dVar8;
  return param_2;
}



// FUNCTION 1483696da FUN_1483696da body=183 status=ok
// SIG undefined FUN_1483696da(void)

longlong FUN_1483696da(longlong *param_1,uint param_2,short *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  short *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x40;
        if (*(short *)(*param_1 + (longlong)iVar1 * 0x40) == *param_3) {
          if (lVar3 != 0) goto LAB_148369774;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x38);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148369792(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x40 + *param_1;
LAB_148369774:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148369792 FUN_148369792 body=286 status=ok
// SIG undefined FUN_148369792(void)

undefined4 * FUN_148369792(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1483698b2(param_1,local_48);
  *local_40 = *(undefined2 *)*param_4;
  *(undefined8 *)(local_40 + 0x14) = 0;
  *(undefined8 *)(local_40 + 0x18) = 0x800000000;
  *(undefined4 *)(local_40 + 0x1c) = 0xffffffff;
  cVar1 = FUN_148369998(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1e) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1c) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148369abe(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483698b2 FUN_1483698b2 body=229 status=ok
// SIG undefined FUN_1483698b2(void)

int * FUN_1483698b2(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 148369998 FUN_148369998 body=179 status=ok
// SIG undefined FUN_148369998(void)

undefined8 FUN_148369998(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(short *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          if (*(longlong *)(puVar1 + 10) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          uVar6 = *(undefined4 *)(param_3 + 8);
          uVar7 = *(undefined4 *)(param_3 + 10);
          uVar8 = *(undefined4 *)(param_3 + 0xc);
          uVar9 = *(undefined4 *)(param_3 + 0xe);
          uVar10 = *(undefined4 *)(param_3 + 0x10);
          uVar11 = *(undefined4 *)(param_3 + 0x12);
          uVar12 = *(undefined4 *)(param_3 + 0x14);
          uVar13 = *(undefined4 *)(param_3 + 0x16);
          *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0x18);
          puVar1[8] = uVar10;
          puVar1[9] = uVar11;
          puVar1[10] = uVar12;
          puVar1[0xb] = uVar13;
          puVar1[4] = uVar6;
          puVar1[5] = uVar7;
          puVar1[6] = uVar8;
          puVar1[7] = uVar9;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148369a4c(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 148369a4c FUN_148369a4c body=114 status=ok
// SIG undefined FUN_148369a4c(void)

void FUN_148369a4c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 148369abe FUN_148369abe body=413 status=ok
// SIG undefined FUN_148369abe(void)

void FUN_148369abe(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x40;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x3c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 148369c5c FUN_148369c5c body=68 status=ok
// SIG undefined FUN_148369c5c(void)

void FUN_148369c5c(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148369ca0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148369ca0 FUN_148369ca0 body=322 status=ok
// SIG undefined FUN_148369ca0(void)

void FUN_148369ca0(longlong *param_1)

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



// FUNCTION 148369de4 FUN_148369de4 body=285 status=ok
// SIG undefined FUN_148369de4(void)

undefined4 * FUN_148369de4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148369f02(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  local_40[4] = 0xffff;
  local_40[5] = 0xffff;
  local_4c = local_48[0];
  cVar4 = FUN_148369fe8(param_1,uVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 6) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14836a0dc(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148369f02 FUN_148369f02 body=229 status=ok
// SIG undefined FUN_148369f02(void)

int * FUN_148369f02(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 148369fe8 FUN_148369fe8 body=129 status=ok
// SIG undefined FUN_148369fe8(void)

undefined8 FUN_148369fe8(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(short *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14836a06a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14836a06a FUN_14836a06a body=114 status=ok
// SIG undefined FUN_14836a06a(void)

void FUN_14836a06a(longlong *param_1,int param_2)

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



// FUNCTION 14836a0dc FUN_14836a0dc body=413 status=ok
// SIG undefined FUN_14836a0dc(void)

void FUN_14836a0dc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 14836a282 FUN_14836a282 body=1085 status=ok
// SIG undefined FUN_14836a282(void)

void FUN_14836a282(longlong *param_1,uint param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  uint local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_b8;
  uint local_b0;
  float local_a8 [6];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x20) != 0) {
    param_2 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)param_2 * 4);
  }
  if ((((int)param_2 < 0) ||
      (lVar9 = *(longlong *)(lVar4 + 0x40),
      *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24) <= (int)param_2)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar9 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                                  (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) goto LAB_14836a31a;
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  lVar9 = lVar9 + 0xb8;
  FUN_146be983e(&local_d0,lVar9,param_2,0);
  if (((local_d0 != lVar9) || (local_c8 != param_2)) || ((int)local_b8 != -1)) {
LAB_14836a468:
    fVar18 = 0.0;
    lVar8 = local_d0;
    fVar19 = local_a8[0];
    fVar20 = local_a8[1];
    fVar21 = local_a8[2];
    fVar22 = local_a8[3];
    uVar7 = local_c8;
LAB_14836a493:
    uVar5 = *(ulonglong *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x1c0) + (ulonglong)(local_b0 >> 9) * 8)
             + (ulonglong)((local_b0 & 0x1ff) << 4));
    uVar6 = uVar5 >> 0x20;
    if (param_2 != (uint)uVar5) {
      uVar6 = uVar5;
    }
    uVar10 = (uint)uVar6;
    if (*(int *)(lVar4 + 0x80) != *(int *)(lVar4 + 0xac)) {
      lVar11 = *(longlong *)(lVar4 + 0xb8);
      if (*(longlong *)(lVar4 + 0xb8) == 0) {
        lVar11 = lVar4 + 0xb0;
      }
      iVar12 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar4 + 0xc0) - 1U & uVar10) * 4);
      if (iVar12 != -1) {
        lVar11 = *(longlong *)(lVar4 + 0x78);
        iVar14 = iVar12;
        do {
          if (*(uint *)(lVar11 + (longlong)iVar14 * 0x10) == uVar10) goto LAB_14836a573;
          iVar14 = *(int *)((longlong)iVar14 * 0x10 + lVar11 + 8);
        } while (iVar14 != -1);
      }
    }
    goto LAB_14836a4de;
  }
  fVar18 = 0.0;
  if (local_b8._4_4_ != -1) goto LAB_14836a468;
LAB_14836a3c0:
  if (1e-08 < ABS(fVar18)) {
    fVar18 = 1.0 / fVar18;
    local_a8[1] = fVar18 * local_a8[1];
    local_a8[0] = fVar18 * local_a8[0];
    local_a8[3] = fVar18 * local_a8[3];
    local_a8[2] = fVar18 * local_a8[2];
  }
  if (*(int *)(lVar4 + 0x80) != *(int *)(lVar4 + 0xac)) {
    lVar9 = lVar4 + 0xb0;
    if (*(longlong *)(lVar4 + 0xb8) != 0) {
      lVar9 = *(longlong *)(lVar4 + 0xb8);
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar4 + 0xc0) + 0x7fffffffU & param_2) * 4);
    if (iVar12 != -1) {
      lVar9 = *(longlong *)(lVar4 + 0x78);
      iVar14 = iVar12;
      do {
        if (*(uint *)(lVar9 + (longlong)iVar14 * 0x10) == param_2) goto LAB_14836a6a4;
        iVar14 = *(int *)((longlong)iVar14 * 0x10 + lVar9 + 8);
      } while (iVar14 != -1);
    }
  }
  goto LAB_14836a40a;
  while (iVar12 = *(int *)(lVar13 + 8), iVar12 != -1) {
LAB_14836a573:
    lVar13 = lVar11 + (longlong)iVar12 * 0x10;
    if (*(uint *)(lVar11 + (longlong)iVar12 * 0x10) == uVar10) goto LAB_14836a591;
  }
  lVar13 = 0;
LAB_14836a591:
  uVar10 = *(uint *)(lVar13 + 4);
LAB_14836a4de:
  if (*(char *)(*(longlong *)param_1[1] + (longlong)(int)uVar10) == '\x01') {
    if (*(char *)(lVar4 + 0x28) == '\x01') {
      dVar2 = *(double *)(lVar4 + 200);
      uVar16 = SUB84(dVar2,0);
      uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *(double *)(*(longlong *)(lVar4 + 0x58) + (longlong)(int)local_b0 * 8);
      if (dVar2 <= dVar3) {
        uVar16 = SUB84(dVar3,0);
        uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      fVar15 = (float)(1.0 / (double)CONCAT44(uVar17,uVar16));
    }
    else {
      fVar15 = 1.0;
      if (*(char *)(lVar4 + 0x28) == '\x02') {
        dVar2 = *(double *)(*(longlong *)(lVar4 + 0x48) + (longlong)(int)local_b0 * 8);
        uVar16 = SUB84(dVar2,0);
        uVar17 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= 0.0) {
          uVar16 = 0;
          uVar17 = 0;
        }
        fVar15 = (float)(double)CONCAT44(uVar17,uVar16);
      }
    }
    fVar18 = fVar18 + fVar15;
    pfVar1 = (float *)(*(longlong *)param_1[2] + (longlong)(int)(uVar10 << 2) * 4);
    fVar19 = fVar19 + *pfVar1 * fVar15;
    fVar20 = fVar20 + pfVar1[1] * fVar15;
    fVar21 = fVar21 + pfVar1[2] * fVar15;
    fVar22 = fVar22 + pfVar1[3] * fVar15;
    local_a8[1] = fVar20;
    local_a8[0] = fVar19;
    local_a8[3] = fVar22;
    local_a8[2] = fVar21;
  }
  if (local_c0 == 0) {
    local_c4 = 0xffffffff;
    local_b8 = 0xffffffffffffffff;
    local_b8._4_4_ = -1;
    local_b8._0_4_ = -1;
  }
  else {
    FUN_146be9922(&local_d0);
    lVar8 = local_d0;
    uVar7 = local_c8;
  }
  if (((lVar8 != lVar9) || (uVar7 != param_2)) || (((int)local_b8 != -1 || (local_b8._4_4_ != -1))))
  goto LAB_14836a493;
  goto LAB_14836a3c0;
  while (iVar12 = *(int *)(lVar8 + 8), iVar12 != -1) {
LAB_14836a6a4:
    lVar8 = lVar9 + (longlong)iVar12 * 0x10;
    if (*(uint *)(lVar9 + (longlong)iVar12 * 0x10) == param_2) goto LAB_14836a6b8;
  }
  lVar8 = 0;
LAB_14836a6b8:
  param_2 = *(uint *)(lVar8 + 4);
LAB_14836a40a:
  lVar9 = (longlong)(int)(param_2 << 2) * 4;
  lVar8 = 0;
  do {
    fVar18 = *(float *)(*(longlong *)param_1[2] + lVar9 + lVar8 * 4);
    *(float *)(*(longlong *)param_1[3] + lVar9 + lVar8 * 4) =
         (float)((double)(local_a8[lVar8] - fVar18) * *(double *)(lVar4 + 0x30) + (double)fVar18);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
LAB_14836a31a:
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836a6c8 FUN_14836a6c8 body=639 status=ok
// SIG undefined FUN_14836a6c8(void)

void FUN_14836a6c8(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x20) != 0) {
    param_2 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)(int)param_2 * 4);
  }
  uVar8 = (uint)param_2;
  if ((((int)uVar8 < 0) ||
      (lVar9 = *(longlong *)(lVar3 + 0x40),
      *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24) <= (int)uVar8)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar9 + 0x28) + (param_2 >> 9 & 0x7fffff) * 8) +
                                  (ulonglong)(uVar8 & 0x1ff) * 2) - 1U))) goto LAB_14836a8a7;
  if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
    lVar9 = lVar3 + 0xb0;
    if (*(longlong *)(lVar3 + 0xb8) != 0) {
      lVar9 = *(longlong *)(lVar3 + 0xb8);
    }
    iVar5 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar3 + 0xc0) + 0x7fffffffU & uVar8) * 4);
    if (iVar5 != -1) {
      lVar9 = *(longlong *)(lVar3 + 0x78);
      iVar10 = iVar5;
      do {
        if (*(uint *)(lVar9 + (longlong)iVar10 * 0x10) == uVar8) goto LAB_14836a92b;
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + lVar9 + 8);
      } while (iVar10 != -1);
    }
  }
  goto LAB_14836a74f;
  while (iVar5 = *(int *)(lVar7 + 8), iVar5 != -1) {
LAB_14836a92b:
    lVar7 = lVar9 + (longlong)iVar5 * 0x10;
    if (*(uint *)(lVar9 + (longlong)iVar5 * 0x10) == uVar8) goto LAB_14836a940;
  }
  lVar7 = 0;
LAB_14836a940:
  uVar8 = *(uint *)(lVar7 + 4);
LAB_14836a74f:
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  FUN_146c349b4(*(undefined8 *)param_1[1],param_2,&local_58);
  if ((longlong)(int)uStack_50 != 0) {
    lVar9 = (longlong)(int)(uVar8 << 2) * 4;
    puVar6 = local_58;
    do {
      lVar7 = *(longlong *)param_1[1];
      uVar12 = (ulonglong)(*puVar6 >> 7 & 0x7fffff);
      uVar11 = (ulonglong)((*puVar6 & 0x7f) << 4);
      puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar12 * 8) + uVar11);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      if (*(char *)(lVar3 + 0x29) == '\0') {
        plVar4 = (longlong *)param_1[2];
        lVar13 = plVar4[1];
        lVar14 = 0;
        do {
          if (((int)lVar13 == 0) || (*(char *)(*plVar4 + lVar14) == '\x01')) {
            *(undefined4 *)((longlong)&local_48 + lVar14 * 4) =
                 *(undefined4 *)(*(longlong *)param_1[3] + lVar9 + lVar14 * 4);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 4);
      }
      else if (*(char *)(lVar3 + 0x29) == '\x01') {
        plVar4 = (longlong *)param_1[2];
        lVar13 = plVar4[1];
        lVar14 = 0;
        do {
          if (((int)lVar13 == 0) || (*(char *)(*plVar4 + lVar14) == '\x01')) {
            fVar2 = *(float *)((longlong)&local_48 + lVar14 * 4);
            *(float *)((longlong)&local_48 + lVar14 * 4) =
                 (float)((double)(*(float *)(*(longlong *)param_1[3] + lVar9 + lVar14 * 4) - fVar2)
                         * *(double *)(lVar3 + 0x38) + (double)fVar2);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 4);
      }
      lVar13 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x48) + uVar12 * 8) + uVar11 + lVar13 * 4) =
             *(undefined4 *)((longlong)&local_48 + lVar13 * 4);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 4);
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_58 + (int)uStack_50);
  }
  if (local_58 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_14836a8a7:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836a948 FUN_14836a948 body=29 status=ok
// SIG undefined FUN_14836a948(void)

undefined8 FUN_14836a948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14836a965 FUN_14836a965 body=366 status=ok
// SIG undefined FUN_14836a965(void)

void FUN_14836a965(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_146dd941a(local_90,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  lVar7 = local_88;
  if (*param_1 != *param_2) {
    local_a0 = 0;
    if (0 < local_88) {
      local_a0 = FUN_141729f83(local_88);
    }
    local_98 = lVar7;
    local_38 = lVar7;
    local_2c = 0;
    FUN_146de04ef(&local_a0,local_40,&local_41);
    piVar6 = (int *)*param_1;
    if ((int *)*param_2 != piVar6) {
      do {
        piVar1 = (int *)(local_a0 + (longlong)*piVar6 * 4);
        *piVar1 = *piVar1 + 1;
        piVar6 = piVar6 + 4;
      } while (piVar6 != (int *)*param_2);
    }
    FUN_14836ac4c(local_90,&local_a0);
    piVar6 = (int *)*param_1;
    if ((int *)*param_2 != piVar6) {
      do {
        uVar2 = *(undefined8 *)(piVar6 + 2);
        iVar3 = piVar6[1];
        lVar7 = (longlong)*piVar6;
        iVar4 = *(int *)(local_78 + lVar7 * 4);
        iVar5 = *(int *)(lStack_70 + lVar7 * 4);
        *(int *)(lStack_70 + lVar7 * 4) = iVar5 + 1;
        lVar7 = (longlong)iVar4 + (longlong)iVar5;
        *(int *)(lStack_60 + lVar7 * 4) = iVar3;
        *(undefined8 *)(local_68 + lVar7 * 8) = uVar2;
        piVar6 = piVar6 + 4;
      } while (piVar6 != (int *)*param_2);
    }
    FUN_14836aad4(local_90);
    FUN_1400020a8(local_a0);
  }
  FUN_146de570e(param_3,local_90);
  FUN_146de3a5a(local_90);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836aad4 FUN_14836aad4 body=375 status=ok
// SIG undefined FUN_14836aad4(void)

void FUN_14836aad4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined1 local_30 [8];
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_48 = 0;
  if (lVar7 != 0) {
    if (lVar7 < 1) {
      local_48 = 0;
    }
    else {
      local_48 = FUN_141729f83(lVar7);
    }
  }
  local_1c = 0xffffffff;
  local_40 = lVar7;
  local_28 = lVar7;
  FUN_146de04ef(&local_48,local_30,&local_31);
  lVar7 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  if (0 < lVar7) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar3 * 4);
      iVar5 = iVar4;
      if (0 < lVar6) {
        lVar7 = (longlong)*(int *)(lVar7 + lVar3 * 4);
        lVar6 = lVar6 + lVar7;
        do {
          lVar2 = *(longlong *)(param_1 + 0x28);
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
          iVar1 = *(int *)(local_48 + lVar8 * 4);
          if (iVar1 < iVar4) {
            *(undefined8 *)(lVar2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar2 + lVar7 * 8);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
            *(int *)(local_48 + lVar8 * 4) = iVar5;
            iVar5 = iVar5 + 1;
          }
          else {
            *(double *)(lVar2 + (longlong)iVar1 * 8) =
                 *(double *)(lVar2 + (longlong)iVar1 * 8) + *(double *)(lVar2 + lVar7 * 8);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      *(int *)(lVar7 + lVar3 * 4) = iVar4;
      lVar3 = lVar3 + 1;
      lVar7 = *(longlong *)(param_1 + 8);
      iVar4 = iVar5;
    } while (lVar3 < lVar7);
  }
  *(int *)(*(longlong *)(param_1 + 0x18) + lVar7 * 4) = iVar5;
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_146de554a(param_1 + 0x28,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4),0
               );
  FUN_1400020a8(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14836ac4c FUN_14836ac4c body=725 status=ok
// SIG undefined FUN_14836ac4c(void)

void FUN_14836ac4c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar10 = *(longlong *)(param_1 + 8) * 4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar10 = FUN_14001cc68();
    *(longlong *)(param_1 + 0x20) = lVar10;
    if (lVar10 == 0) {
      FUN_14001cc68();
      lVar10 = *(longlong *)(param_1 + 0x20);
    }
    lVar7 = *(longlong *)(param_1 + 8);
    iVar8 = 0;
    lVar11 = 0;
    if (0 < lVar7) {
      lVar13 = 0;
      do {
        *(int *)(lVar10 + lVar13 * 4) = iVar8;
        iVar12 = *(int *)(*param_2 + lVar13 * 4);
        lVar7 = *(longlong *)(param_1 + 8);
        iVar8 = (iVar8 + iVar12 + *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar13 * 4)) -
                *(int *)(*(longlong *)(param_1 + 0x18) + lVar13 * 4);
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + iVar12;
      } while (lVar13 < lVar7);
    }
    if (*(longlong *)(param_1 + 0x40) < lVar11 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
      lVar7 = *(longlong *)(param_1 + 8);
    }
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (0 < lVar7) {
      iVar8 = *(int *)(lVar11 + lVar7 * 4);
      do {
        lVar11 = lVar7 + -1;
        lVar13 = *(longlong *)(param_1 + 0x18);
        iVar12 = *(int *)(lVar13 + -4 + lVar7 * 4);
        iVar9 = iVar8 - iVar12;
        bVar6 = iVar12 <= iVar8;
        iVar8 = iVar12;
        if (iVar9 != 0 && bVar6) {
          lVar13 = (ulonglong)(iVar9 - 1) << 2;
          do {
            *(undefined4 *)
             (lVar13 + *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 4)
                 = *(undefined4 *)
                    (lVar13 + *(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar10 + lVar11 * 4) * 8 +
             lVar13 * 2) = *(undefined8 *)
                            (*(longlong *)(param_1 + 0x28) +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 +
                            lVar13 * 2);
            lVar13 = lVar13 + -4;
          } while (lVar13 != -4);
          lVar13 = *(longlong *)(param_1 + 0x18);
          iVar8 = *(int *)(lVar13 + lVar11 * 4);
        }
        *(undefined4 *)(lVar13 + lVar11 * 4) = *(undefined4 *)(lVar10 + lVar11 * 4);
        *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4) = iVar9;
        bVar6 = 1 < lVar7;
        lVar7 = lVar11;
      } while (bVar6);
      lVar7 = *(longlong *)(param_1 + 8);
      lVar11 = *(longlong *)(param_1 + 0x18);
      if (0 < lVar7) {
        *(int *)(lVar11 + lVar7 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x20) + -4 + lVar7 * 4) +
             *(int *)(lVar11 + -4 + lVar7 * 4) + *(int *)(*param_2 + -4 + lVar7 * 4);
        lVar7 = *(longlong *)(param_1 + 8);
        lVar11 = *(longlong *)(param_1 + 0x18);
      }
    }
    FUN_146de554a(param_1 + 0x28,(longlong)*(int *)(lVar11 + lVar7 * 4),0);
    return;
  }
  lVar10 = FUN_14001cc68(lVar10 + 4 + (ulonglong)(lVar10 == -4),0x10);
  if (lVar10 == 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar7 = *(longlong *)(param_1 + 8);
  iVar8 = 0;
  if (0 < lVar7) {
    piVar3 = *(int **)(param_1 + 0x18);
    lVar13 = *(longlong *)(param_1 + 0x20);
    lVar4 = *param_2;
    lVar11 = 0;
    iVar8 = 0;
    iVar12 = *piVar3;
    do {
      *(int *)(lVar10 + lVar11 * 4) = iVar8;
      iVar9 = piVar3[lVar11 + 1];
      iVar1 = *(int *)(lVar13 + lVar11 * 4);
      iVar2 = *(int *)(lVar4 + lVar11 * 4);
      lVar11 = lVar11 + 1;
      iVar12 = iVar9 - (iVar12 + iVar1);
      if (iVar12 < iVar2) {
        iVar12 = iVar2;
      }
      iVar8 = iVar1 + iVar8 + iVar12;
      iVar12 = iVar9;
    } while (lVar7 != lVar11);
  }
  *(int *)(lVar10 + lVar7 * 4) = iVar8;
  FUN_146de554a(param_1 + 0x28,(longlong)iVar8,0);
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar11 = lVar7 + -1;
      iVar8 = *(int *)(lVar10 + -4 + lVar7 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar7 * 4) < iVar8) &&
         (iVar12 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar11 * 4), 0 < iVar12)) {
        lVar13 = (ulonglong)(iVar12 - 1) << 2;
        do {
          *(undefined4 *)(lVar13 + *(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 4) =
               *(undefined4 *)
                (lVar13 + *(longlong *)(param_1 + 0x30) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 4);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8 + lVar13 * 2) =
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x28) +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4) * 8 + lVar13 * 2);
          lVar13 = lVar13 + -4;
        } while (lVar13 != -4);
      }
      bVar6 = 1 < lVar7;
      lVar7 = lVar11;
    } while (bVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar10;
  FUN_1400020a8(uVar5);
  return;
}



// FUNCTION 14836af22 FUN_14836af22 body=61 status=ok
// SIG undefined FUN_14836af22(void)

void FUN_14836af22(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145928e06(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14836af60 FUN_14836af60 body=411 status=ok
// SIG undefined FUN_14836af60(void)

void FUN_14836af60(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x14 + -0x10);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14836b0fc FUN_14836b0fc body=348 status=ok
// SIG undefined FUN_14836b0fc(void)

undefined4 *
FUN_14836b0fc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408128a4(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140812804(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140812c16(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14836b25a FUN_14836b25a body=70 status=ok
// SIG undefined FUN_14836b25a(void)

void FUN_14836b25a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14481578e(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14481578e(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14836b2a0 FUN_14836b2a0 body=293 status=ok
// SIG undefined FUN_14836b2a0(void)

void FUN_14836b2a0(longlong *param_1,ulonglong param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_144a127d2(param_1 + 2,param_2,1);
  FUN_144a127d2(param_1,param_3,1);
  if (0 < (int)param_2) {
    uVar4 = 0;
    do {
      *(undefined4 *)(param_1[2] + uVar4 * 4) = 0xffffffff;
      uVar4 = uVar4 + 1;
    } while ((param_2 & 0xffffffff) != uVar4);
  }
  uVar1 = *param_4 * 0x200 + param_4[1];
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar2 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_4 + 2) - 1U)))
  {
    uVar3 = 1;
    uVar6 = 1;
    if (1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    do {
      uVar2 = uVar3;
      if (uVar3 == uVar6) break;
      uVar7 = uVar6 >> 9;
      uVar8 = uVar6 & 0x1ff;
      uVar2 = uVar6;
      uVar6 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_4 + 2))[uVar7] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar2 != uVar1) {
    lVar5 = 0;
    do {
      *(uint *)(*param_1 + lVar5 * 4) = uVar2;
      *(int *)(param_1[2] + (longlong)(int)uVar2 * 4) = (int)lVar5;
      lVar5 = lVar5 + 1;
      uVar3 = uVar2 + 1;
      if ((int)(uVar2 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      do {
        uVar6 = uVar3;
        if (uVar3 - 1 == uVar2) break;
        uVar2 = uVar2 + 1;
        uVar6 = uVar2;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_4 + 2) +
                                             (ulonglong)(uVar2 >> 9) * 8) +
                                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
      uVar2 = uVar6;
    } while (uVar2 != uVar1);
  }
  return;
}



// FUNCTION 14836b3c5 FUN_14836b3c5 body=172 status=ok
// SIG undefined FUN_14836b3c5(void)

int FUN_14836b3c5(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (longlong)(int)param_2[1];
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a127d2(local_38,(int)param_2[1],1);
  if (lVar2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      uVar1 = FUN_14836b472(param_1,*(undefined4 *)(*param_2 + lVar4 * 4));
      *(undefined4 *)(local_38[0] + lVar4 * 4) = uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar4 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + *(int *)(local_38[0] + lVar4 * 4) + 1;
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}


