// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1496f3bce FUN_1496f3bce body=191 status=ok
// SIG undefined FUN_1496f3bce(void)

undefined4 FUN_1496f3bce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_98 [40];
  undefined **local_70 [3];
  longlong local_58;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1496f3c8e(local_70,param_1 + 0xf8,
                (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20),
                (uint)((char)*(undefined8 *)(param_1 + 0xa0) == '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20));
  uVar1 = FUN_1496f3d34(local_70,param_2,param_3);
  local_70[0] = &PTR_FUN_14be0f6c8;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f3c8e FUN_1496f3c8e body=165 status=ok
// SIG undefined FUN_1496f3c8e(void)

undefined8 *
FUN_1496f3c8e(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14be0f6c8;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = &PTR_FUN_14be10040;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_4;
  return param_1;
}



// FUNCTION 1496f3d34 FUN_1496f3d34 body=527 status=ok
// SIG undefined FUN_1496f3d34(void)

float FUN_1496f3d34(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar4 = *(int *)(param_1 + 0x3c) - 1;
  uVar5 = param_2;
  if ((int)uVar4 <= (int)(uint)param_2) {
    if (0.0 <= (float)(param_2 >> 0x20)) {
      uVar5 = (ulonglong)uVar4;
    }
    if (uVar4 != (uint)param_2) {
      uVar5 = (ulonglong)uVar4;
    }
    param_2 = uVar5 & 0xffffffff;
  }
  uVar4 = (uint)param_2;
  if ((int)uVar4 <= (int)uVar1) {
    if ((float)(uVar5 >> 0x20) <= 0.0) {
      uVar5 = (ulonglong)uVar1;
    }
    if (uVar1 != uVar4) {
      uVar5 = (ulonglong)uVar1;
    }
    uVar4 = (uint)uVar5;
  }
  fVar8 = *(float *)(param_1 + 0x30);
  FUN_1496f365a(param_1);
  dVar6 = (double)(int)((ulonglong)param_3 >> 0x20);
  fVar9 = (float)(uVar5 >> 0x20);
  auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
  fVar9 = (fVar9 - auVar7._0_4_) + 0.5 + -0.5;
  auVar11 = ZEXT416((uint)fVar9);
  if (0.99999994 <= fVar9) {
    auVar11 = ZEXT416(0x3f7fffff);
  }
  if (auVar11._0_4_ <= 0.0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar11._4_12_;
    auVar11 = auVar3 << 0x20;
  }
  if (ABS(fVar8) <= 1e-08) {
    dVar2 = 1.0;
  }
  else {
    dVar2 = (double)fVar8;
  }
  dVar2 = dVar2 * ((double)auVar11._0_4_ +
                  (double)(int)((uVar4 - *(int *)(param_1 + 0x38)) + (int)auVar7._0_4_));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2;
  auVar7 = roundpd(auVar7,auVar7,1);
  dVar10 = auVar7._0_8_;
  fVar8 = (float)(dVar2 - dVar10);
  if (0.99999994 <= fVar8) {
    fVar8 = 0.99999994;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar8 = fVar8 + 0.5 + -0.5;
  if (0.99999994 <= fVar8) {
    fVar8 = 0.99999994;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (2147483647.0 <= dVar10) {
    dVar10 = 2147483647.0;
  }
  if (dVar10 <= -2147483648.0) {
    dVar10 = -2147483648.0;
  }
  return (float)((double)(float)(((double)((longlong)(int)dVar10 * (param_3 >> 0x20)) +
                                 dVar6 * (double)fVar8) / (double)(int)param_3) +
                ((double)((ulonglong)dVar6 & 0x8000000000000000) +
                (double)((longlong)*(int *)(param_1 + 0x28) * (param_3 >> 0x20))) /
                (double)(int)param_3);
}



// FUNCTION 1496f3f48 FUN_1496f3f48 body=632 status=ok
// SIG undefined FUN_1496f3f48(void)

longlong * FUN_1496f3f48(longlong *param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(**(code **)(*param_1 + 800))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_145bb00d0();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) goto LAB_1496f3f9e;
  }
  plVar4 = (longlong *)0x0;
LAB_1496f3f9e:
  lVar5 = *(longlong *)(param_3 + 0x720);
  bVar1 = true;
  iVar3 = 0;
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x30))) {
    uVar6 = FUN_14073751e();
    lVar7 = FUN_144a78ede(param_1,uVar6);
    dVar2 = ((double)(int)*(undefined8 *)(lVar7 + 0x118) *
            (double)*(float *)(*(longlong *)(lVar5 + 0x28) + 0xb0 +
                              (longlong)(*(int *)(lVar5 + 0x30) + -1) * 0xb8)) /
            (double)(int)((ulonglong)*(undefined8 *)(lVar7 + 0x118) >> 0x20);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar2;
    auVar10 = roundpd(auVar10,auVar10,1);
    dVar9 = auVar10._0_8_;
    dVar2 = dVar2 - dVar9;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    iVar3 = (int)dVar2;
    fVar8 = (float)dVar2 - (float)iVar3;
    iVar3 = (int)dVar9 + iVar3;
    fVar12 = fVar8;
    if (0.99999994 <= fVar8) {
      fVar12 = 0.99999994;
    }
    fVar12 = (float)(~-(uint)(0.0 < fVar8) & (uint)fVar8 | (uint)fVar12 & -(uint)(0.0 < fVar8)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    bVar1 = fVar12 == 0.0;
  }
  if ((iVar3 == 0) && (bVar1)) {
    uVar6 = FUN_14073751e();
    lVar5 = FUN_144a78ede(param_1,uVar6);
    dVar2 = ((double)(int)*(undefined8 *)(lVar5 + 0x118) * 5.0) /
            (double)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x118) >> 0x20);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar2;
    auVar10 = roundpd(auVar11,auVar11,1);
    dVar9 = auVar10._0_8_;
    dVar2 = dVar2 - dVar9;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    iVar3 = (int)dVar2 + (int)dVar9;
  }
  local_68 = 0xffffffff;
  (**(code **)(*plVar4 + 0x308))(plVar4,param_1 + 0x20,param_2,iVar3);
  FUN_1496f41c2(&local_58,param_3 + 0x720);
  *(undefined4 *)(plVar4 + 0x20) = local_58;
  *(undefined4 *)((longlong)plVar4 + 0x104) = uStack_54;
  *(undefined4 *)(plVar4 + 0x21) = uStack_50;
  *(undefined4 *)((longlong)plVar4 + 0x10c) = uStack_4c;
  if (plVar4 + 0x20 == (longlong *)&local_58) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (plVar4[0x22] != 0) {
      FUN_1400020a8();
    }
    plVar4[0x22] = local_48;
    local_48 = 0;
    *(undefined4 *)(plVar4 + 0x23) = local_40;
    *(undefined4 *)((longlong)plVar4 + 0x11c) = local_3c;
  }
  (**(code **)(*param_1 + 0x318))(param_1,plVar4);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f41c2 FUN_1496f41c2 body=155 status=ok
// SIG undefined FUN_1496f41c2(void)

undefined8 * FUN_1496f41c2(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f4266 FUN_1496f4266 body=75 status=ok
// SIG undefined FUN_1496f4266(void)

bool FUN_1496f4266(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1496f429f;
    }
  }
  lVar2 = 0;
LAB_1496f429f:
  lVar1 = FUN_145bb00d0();
  return lVar2 == lVar1;
}



// FUNCTION 1496f42b7 FUN_1496f42b7 body=174 status=ok
// SIG undefined FUN_1496f42b7(void)

undefined8 FUN_1496f42b7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145bb00d0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1496f43c0 FUN_1496f43c0 body=132 status=ok
// SIG undefined FUN_1496f43c0(void)

void FUN_1496f43c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 1496f4444 FUN_1496f4444 body=106 status=ok
// SIG undefined FUN_1496f4444(void)

void FUN_1496f4444(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f44b0 FUN_1496f44b0 body=95 status=ok
// SIG undefined FUN_1496f44b0(void)

void FUN_1496f44b0(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 1496f451c FUN_1496f451c body=358 status=ok
// SIG undefined FUN_1496f451c(void)

undefined8 * FUN_1496f451c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined1 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_88 = local_88 & 0xffffff00;
  local_98 = &PTR_FUN_14be0f9a0;
  FUN_1496f3c8e(&local_78,param_3 + 0xf8,
                (uint)((char)*(undefined8 *)(param_3 + 0x98) != '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_3 + 0x98) >> 0x20),
                (uint)((char)*(undefined8 *)(param_3 + 0xa0) == '\x01') +
                (int)((ulonglong)*(undefined8 *)(param_3 + 0xa0) >> 0x20));
  _Src = local_60;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(undefined1 *)(param_2 + 1) = local_90;
  *(undefined4 *)(param_2 + 3) = uStack_80;
  param_2[2] = CONCAT44(uStack_84,local_88);
  *param_2 = &PTR_FUN_14be0f9a0;
  param_2[4] = &PTR_FUN_14be0f6c8;
  *(undefined4 *)(param_2 + 5) = local_70;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_6c;
  *(undefined4 *)(param_2 + 6) = uStack_68;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_64;
  param_2[7] = 0;
  *(int *)(param_2 + 8) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 7,local_58,0);
    memcpy((void *)param_2[7],_Src,(longlong)local_58 * 2);
  }
  *(undefined4 *)(param_2 + 10) = local_48;
  param_2[9] = local_50;
  param_2[4] = &PTR_FUN_14be10040;
  param_2[0xb] = local_40;
  local_98 = &PTR_FUN_14be0f9a0;
  local_78 = &PTR_FUN_14be0f6c8;
  if (local_60 != (void *)0x0) {
    FUN_1400020a8(local_60);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f4684 FUN_1496f4684 body=62 status=ok
// SIG undefined FUN_1496f4684(void)

undefined8 * FUN_1496f4684(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be0f6c8;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1496f46c2 FUN_1496f46c2 body=73 status=ok
// SIG undefined FUN_1496f46c2(void)

undefined8 * FUN_1496f46c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be0f9a0;
  param_1[4] = &PTR_FUN_14be0f6c8;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1496f470c FUN_1496f470c body=57 status=ok
// SIG undefined FUN_1496f470c(void)

void FUN_1496f470c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24180 == 0) {
    uVar1 = FUN_14596ee39();
    DAT_14cc24180 =
         FUN_140002ddd(FUN_14674f159,uVar1,L"MovieSceneGeometryCollectionSectionTemplate");
  }
  return;
}



// FUNCTION 1496f47ca FUN_1496f47ca body=84 status=ok
// SIG undefined FUN_1496f47ca(void)

undefined8 FUN_1496f47ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496f4846 FUN_1496f4846 body=59 status=ok
// SIG undefined FUN_1496f4846(void)

undefined8 FUN_1496f4846(longlong *param_1)

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



// FUNCTION 1496f488c FUN_1496f488c body=48 status=ok
// SIG undefined FUN_1496f488c(void)

void FUN_1496f488c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14be0f6c8;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1496f490c FUN_1496f490c body=62 status=ok
// SIG undefined FUN_1496f490c(void)

undefined8 * FUN_1496f490c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be0f6c8;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1496f49be FUN_1496f49be body=123 status=ok
// SIG undefined FUN_1496f49be(void)

undefined8 FUN_1496f49be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x28 + lVar6) = *(undefined8 *)(param_3 + 0x28 + lVar6);
      *(undefined4 *)(param_2 + 0x30 + lVar6) = *(undefined4 *)(param_3 + 0x30 + lVar6);
      *(undefined8 *)(param_2 + 0x38 + lVar6) = *(undefined8 *)(param_3 + 0x38 + lVar6);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496f4a62 FUN_1496f4a62 body=59 status=ok
// SIG undefined FUN_1496f4a62(void)

undefined8 FUN_1496f4a62(longlong *param_1)

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



// FUNCTION 1496f4aa8 FUN_1496f4aa8 body=48 status=ok
// SIG undefined FUN_1496f4aa8(void)

void FUN_1496f4aa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14be0f6c8;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1496f4bc4 FUN_1496f4bc4 body=112 status=ok
// SIG undefined FUN_1496f4bc4(void)

undefined8 FUN_1496f4bc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined1 *)(param_2 + -0x30) = *(undefined1 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1496f4c5c FUN_1496f4c5c body=59 status=ok
// SIG undefined FUN_1496f4c5c(void)

undefined8 FUN_1496f4c5c(longlong *param_1)

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



// FUNCTION 1496f4ca2 FUN_1496f4ca2 body=59 status=ok
// SIG undefined FUN_1496f4ca2(void)

void FUN_1496f4ca2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_FUN_14be0f9a0;
    param_2[4] = &PTR_FUN_14be0f6c8;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1496f4d2e FUN_1496f4d2e body=149 status=ok
// SIG undefined FUN_1496f4d2e(void)

undefined8 * FUN_1496f4d2e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14be0f6c8;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = &PTR_FUN_14be10040;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 1496f4dc4 FUN_1496f4dc4 body=73 status=ok
// SIG undefined FUN_1496f4dc4(void)

undefined8 * FUN_1496f4dc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be10320;
  param_1[1] = &PTR_FUN_14be0f6c8;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1496f4e0e FUN_1496f4e0e body=34 status=ok
// SIG undefined FUN_1496f4e0e(void)

undefined8 FUN_1496f4e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1496f4e6e FUN_1496f4e6e body=34 status=ok
// SIG undefined FUN_1496f4e6e(void)

undefined8 FUN_1496f4e6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1496f4e90 FUN_1496f4e90 body=91 status=ok
// SIG undefined FUN_1496f4e90(void)

void FUN_1496f4e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_2 + 0x720) = lVar1;
  *(undefined1 *)(param_2 + 0x67a) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_2 + 0x718) = *(undefined1 *)(param_1 + 0x19);
  *(undefined4 *)(param_2 + 0x828) = 0xbf800000;
  *(undefined1 *)(param_2 + 0x82c) = 1;
  return;
}



// FUNCTION 1496f4eec FUN_1496f4eec body=36 status=ok
// SIG undefined FUN_1496f4eec(void)

undefined8 FUN_1496f4eec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1496f4f2c FUN_1496f4f2c body=93 status=ok
// SIG undefined FUN_1496f4f2c(void)

void FUN_1496f4f2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be10360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1496f4f8a FUN_1496f4f8a body=123 status=ok
// SIG undefined FUN_1496f4f8a(void)

void FUN_1496f4f8a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be10360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1496f5006 FUN_1496f5006 body=21 status=ok
// SIG undefined FUN_1496f5006(void)

undefined8 FUN_1496f5006(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1496f5024 FUN_1496f5024 body=39 status=ok
// SIG undefined FUN_1496f5024(void)

undefined8 FUN_1496f5024(longlong param_1,undefined8 param_2)

{
  FUN_144a80a4c(param_1 + 0x700,param_2,param_1 + 0x240);
  return param_2;
}



// FUNCTION 1496f504c FUN_1496f504c body=196 status=ok
// SIG undefined FUN_1496f504c(void)

ulonglong * FUN_1496f504c(longlong *param_1,ulonglong *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < iVar2) {
    uVar7 = 0;
    iVar2 = 0;
    do {
      lVar5 = (**(code **)(*param_1 + 0x610))(param_1,iVar2);
      if (lVar5 == 0) {
        lVar5 = FUN_1447277f0(0);
      }
      FUN_14470a074(lVar5,local_50,param_3);
      *param_2 = *param_2 | local_50[0];
      uVar6 = local_50[0] >> 0x10 & 0xffff;
      uVar3 = uVar7 & 0xff;
      bVar1 = (byte)uVar7;
      uVar7 = (uint)uVar6;
      if ((byte)uVar6 <= bVar1) {
        uVar7 = uVar3;
      }
      *(char *)((longlong)param_2 + 2) = (char)uVar7;
      iVar2 = iVar2 + 1;
      iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while (iVar2 < iVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f5112 FUN_1496f5112 body=133 status=ok
// SIG undefined FUN_1496f5112(void)

undefined8 FUN_1496f5112(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_146ea76f0(local_3a8,param_1 + 0x648);
  cVar1 = FUN_146ea7cf6(local_3a8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14001cc68(0x990,0x10);
    FUN_1496f5198(uVar2,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f5198 FUN_1496f5198 body=633 status=ok
// SIG undefined FUN_1496f5198(void)

undefined8 * FUN_1496f5198(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14be11ac0;
  param_1[0x53] = param_2;
  uVar1 = FUN_1496f5464(param_2 + 0xc9);
  param_1[0x54] = uVar1;
  uVar1 = FUN_1447277f0(0);
  param_1[0x55] = uVar1;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  (**(code **)(*param_2 + 0x9f8))(param_2,param_1 + 0x58,*(undefined4 *)(param_1[0x42] + 8));
  FUN_144b1dcb8(param_1 + 0x5a,*(undefined4 *)(param_1[0x42] + 8));
  param_1[0x5a] = &PTR_FUN_14a1ca480;
  param_1[0x8e] = 0x400000000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x4be) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  FUN_1415eaa34(param_1 + 0x9e);
  FUN_1415ea9c8(param_1 + 0xaf);
  FUN_1415ea9fe(param_1 + 0xb7);
  FUN_14322417a(param_1 + 0xbf);
  param_1[0xbf] = &PTR_FUN_14a83cdc0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  FUN_144b1dcb8(param_1 + 199,*(undefined4 *)(param_1[0x42] + 8));
  param_1[199] = &PTR_FUN_14a1ca480;
  param_1[0xfb] = 0x400000000;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x824) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x826) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x854) = 0;
  FUN_1415eaa34(param_1 + 0x10b);
  FUN_1415ea9c8(param_1 + 0x11c);
  FUN_1415ea9fe(param_1 + 0x124);
  FUN_14322417a(param_1 + 300);
  param_1[300] = &PTR_FUN_14a83cdc0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  lVar2 = (**(code **)(*(longlong *)param_1[0x53] + 0x610))((longlong *)param_1[0x53],0);
  if (lVar2 == 0) {
    lVar2 = FUN_1447277f0(0);
  }
  param_1[0x55] = lVar2;
  return param_1;
}



// FUNCTION 1496f5412 FUN_1496f5412 body=79 status=ok
// SIG undefined FUN_1496f5412(void)

void FUN_1496f5412(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x640) + 0xb0) == 0) {
    uVar1 = FUN_1402d2740();
    FUN_1412ecd05(uVar1,0,
                  L"/Engine/EditorMaterials/Dataflow/DataflowVertexMaterial.DataflowVertexMaterial",
                  0,0,0,1,0);
  }
  return;
}



// FUNCTION 1496f5464 FUN_1496f5464 body=213 status=ok
// SIG undefined FUN_1496f5464(void)

undefined8 FUN_1496f5464(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1414db454(uVar2);
  FUN_142a0992c(uVar2,&local_48);
  lVar1 = local_48;
  if ((longlong)(int)uStack_40 != 0) {
    lVar3 = 0;
    do {
      FUN_146ece8e2(uVar2,*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)uStack_40 * 8 != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14062fde4(param_1,uVar2,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1496f553a FUN_1496f553a body=246 status=ok
// SIG undefined FUN_1496f553a(void)

void FUN_1496f553a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x960) = &PTR_FUN_14a83cdc0;
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x960);
  FUN_140296b76(param_1 + 0x920);
  FUN_140296ab8(param_1 + 0x8e0);
  FUN_140296d44(param_1 + 0x858);
  FUN_1412b7f2a(param_1 + 0x638);
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x5f8) = &PTR_FUN_14a83cdc0;
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x5f8);
  FUN_140296b76(param_1 + 0x5b8);
  FUN_140296ab8(param_1 + 0x578);
  FUN_140296d44(param_1 + 0x4f0);
  FUN_1412b7f2a(param_1 + 0x2d0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1496f5630 FUN_1496f5630 body=34 status=ok
// SIG undefined FUN_1496f5630(void)

void FUN_1496f5630(undefined8 param_1,undefined8 param_2)

{
  FUN_1496f5652();
  FUN_1496f68c2(param_1,param_2);
  return;
}



// FUNCTION 1496f5652 FUN_1496f5652 body=4718 status=ok
// SIG undefined FUN_1496f5652(void)

/* WARNING: Removing unreachable block (ram,0x0001496f6218) */
/* WARNING: Removing unreachable block (ram,0x0001496f5f49) */
/* WARNING: Removing unreachable block (ram,0x0001496f595d) */
/* WARNING: Removing unreachable block (ram,0x0001496f5dd9) */
/* WARNING: Removing unreachable block (ram,0x0001496f5c7d) */
/* WARNING: Removing unreachable block (ram,0x0001496f594d) */
/* WARNING: Removing unreachable block (ram,0x0001496f60a6) */
/* WARNING: Removing unreachable block (ram,0x0001496f596b) */
/* WARNING: Removing unreachable block (ram,0x0001496f636f) */

void FUN_1496f5652(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
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
  float fVar34;
  float fVar35;
  undefined1 auStack_628 [32];
  undefined4 local_608;
  undefined4 local_604;
  longlong local_600;
  int local_5f4;
  longlong local_5f0;
  longlong local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  ulonglong local_5d0;
  longlong *local_5c8;
  ulonglong local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  longlong local_5a8;
  longlong *local_5a0;
  ulonglong local_598;
  longlong local_590;
  longlong local_588;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  longlong local_568;
  longlong local_560;
  undefined1 local_558 [16];
  undefined8 local_548;
  undefined8 local_530;
  longlong *local_518;
  longlong local_4e0;
  longlong local_4a8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  if (*(int *)(*(longlong *)(param_1 + 0x298) + 0x738) == 3) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8);
    uVar7 = FUN_144a82cbc();
    cVar6 = FUN_144a798df(uVar7,uVar1);
    if (cVar6 != '\0') {
      FUN_146ea76f0(local_558,*(undefined8 *)(param_1 + 0x2a0));
      plVar5 = local_518;
      iVar8 = FUN_146ea7e0a(local_558);
      *(int *)(param_1 + 0x620) = iVar8;
      if (iVar8 != 0) {
        local_5a8 = local_4a8;
        local_5a0 = plVar5;
        uVar10 = DAT_14cc24248 * 3;
        iVar8 = iVar8 * uVar10;
        local_5f0 = param_1 + 0x8e0;
        local_5d8 = param_2;
        FUN_1408e3634(local_5f0,iVar8,1);
        local_5e0 = param_1 + 0x858;
        FUN_1408e36f6(param_1 + 0x858,iVar8,1,1);
        local_5e8 = param_1 + 0x920;
        FUN_140964b22(local_5e8,iVar8,1);
        FUN_14017c08a(param_1 + 0x978,iVar8,1);
        local_5c8 = (longlong *)(param_1 + 0x628);
        FUN_1496f7264(local_5c8,*(undefined4 *)(param_1 + 0x620));
        local_5d0 = (ulonglong)(uVar10 - 1);
        lVar15 = 0;
        iVar8 = 0;
        local_5b0 = local_4e0;
        local_5b8 = local_1d0;
        lVar20 = local_1d0;
        lVar17 = local_4e0;
        local_5c0 = (ulonglong)uVar10;
        while( true ) {
          if (local_518 == (longlong *)0x0) {
            iVar9 = FUN_1401f66f6(local_548,local_530);
          }
          else {
            iVar9 = (**(code **)(*local_518 + 0x60))();
          }
          uVar4 = local_5d8;
          lVar18 = local_5f0;
          if (iVar9 <= lVar15) break;
          if (*(int *)(*(longlong *)(lVar20 + 0x10) +
                      (longlong)*(int *)(*(longlong *)(lVar17 + 0x10) + lVar15 * 4) * 4) != 0) {
            uVar10 = iVar8 * (int)local_5c0;
            lVar20 = (longlong)iVar8 * 0x14;
            *(uint *)(*local_5c8 + lVar20) = uVar10;
            *(int *)(*local_5c8 + 4 + lVar20) = DAT_14cc24248;
            *(uint *)(*local_5c8 + 8 + lVar20) = uVar10;
            *(uint *)(*local_5c8 + 0xc + lVar20) = (int)local_5d0 + uVar10;
            *(int *)(*local_5c8 + 0x10 + lVar20) = (int)lVar15;
            local_5f4 = iVar8;
            if (0 < DAT_14cc24248) {
              lVar20 = (longlong)(int)uVar10;
              local_608 = 0;
              local_604 = 0;
              local_590 = lVar20 * 4;
              uVar16 = lVar20 * 8;
              local_598 = (ulonglong)uVar10;
              lVar17 = 0;
              lVar18 = 0;
              lVar19 = 0;
              local_600 = lVar20;
              local_588 = lVar15;
              do {
                lVar15 = (longlong)*(int *)(DAT_14cc24240 + lVar18 * 4);
                fVar33 = *(float *)(DAT_14cc24230 + 8 + lVar15 * 0xc);
                fVar32 = *(float *)(DAT_14cc24230 + lVar15 * 0xc);
                fVar35 = *(float *)(DAT_14cc24230 + 4 + lVar15 * 0xc);
                lVar15 = local_5a0[2];
                fVar21 = *(float *)(lVar15 + 8 + local_588 * 0xc);
                fVar24 = fVar33 + fVar33 + fVar21;
                fVar33 = *(float *)(lVar15 + local_588 * 0xc);
                fVar34 = *(float *)(lVar15 + 4 + local_588 * 0xc);
                fVar29 = fVar35 + fVar35 + fVar34;
                fVar31 = fVar32 + fVar32 + fVar33;
                lVar15 = (longlong)*(int *)(DAT_14cc24240 + 4 + lVar18 * 4);
                fVar32 = *(float *)(DAT_14cc24230 + 8 + lVar15 * 0xc);
                fVar35 = *(float *)(DAT_14cc24230 + lVar15 * 0xc);
                fVar30 = *(float *)(DAT_14cc24230 + 4 + lVar15 * 0xc);
                fVar27 = fVar32 + fVar32 + fVar21;
                fVar28 = fVar30 + fVar30 + fVar34;
                fVar26 = fVar35 + fVar35 + fVar33;
                lVar15 = (longlong)*(int *)(DAT_14cc24240 + 8 + lVar18 * 4);
                fVar32 = *(float *)(DAT_14cc24230 + 8 + lVar15 * 0xc);
                fVar35 = *(float *)(DAT_14cc24230 + lVar15 * 0xc);
                fVar30 = *(float *)(DAT_14cc24230 + 4 + lVar15 * 0xc);
                fVar21 = fVar32 + fVar32 + fVar21;
                fVar34 = fVar30 + fVar30 + fVar34;
                fVar33 = fVar35 + fVar35 + fVar33;
                lVar15 = *(longlong *)(param_1 + 0x908);
                local_570 = local_598 + lVar18;
                uVar14 = (ulonglong)(uint)(*(int *)(param_1 + 0x910) * (int)local_570);
                *(float *)(lVar15 + uVar14) = fVar31;
                *(float *)(lVar15 + 4 + uVar14) = fVar29;
                *(float *)(lVar15 + 8 + uVar14) = fVar24;
                lVar15 = *(longlong *)(param_1 + 0x908);
                local_578 = local_598 + lVar18 + 1;
                uVar14 = (ulonglong)(uint)(*(int *)(param_1 + 0x910) * (int)local_578);
                *(float *)(lVar15 + uVar14) = fVar26;
                *(float *)(lVar15 + 4 + uVar14) = fVar28;
                *(float *)(lVar15 + 8 + uVar14) = fVar27;
                lVar15 = *(longlong *)(param_1 + 0x908);
                local_580 = local_598 + lVar18 + 2;
                uVar14 = (ulonglong)(uint)(*(int *)(param_1 + 0x910) * (int)local_580);
                *(float *)(lVar15 + uVar14) = fVar33;
                *(float *)(lVar15 + 4 + uVar14) = fVar34;
                *(float *)(lVar15 + 8 + uVar14) = fVar21;
                fVar24 = fVar27 - fVar24;
                fVar29 = fVar28 - fVar29;
                fVar31 = fVar26 - fVar31;
                fVar32 = fVar24 * fVar24 + fVar31 * fVar31 + fVar29 * fVar29;
                if (((fVar32 != 1.0) ||
                    (fVar35 = fVar24, fVar30 = fVar31, fVar25 = fVar29, NAN(fVar32))) &&
                   (fVar35 = DAT_14c846338, fVar30 = (float)DAT_14c846330,
                   fVar25 = DAT_14c846330._4_4_, 1e-08 <= fVar32)) {
                  fVar32 = 1.0 / SQRT(fVar32);
                  fVar35 = fVar24 * fVar32;
                  fVar30 = fVar31 * fVar32;
                  fVar25 = fVar29 * fVar32;
                }
                fVar21 = fVar21 - fVar27;
                fVar34 = fVar34 - fVar28;
                fVar33 = fVar33 - fVar26;
                fVar32 = fVar21 * fVar21 + fVar33 * fVar33 + fVar34 * fVar34;
                if (((fVar32 != 1.0) ||
                    (fVar24 = fVar21, fVar29 = fVar33, fVar26 = fVar34, NAN(fVar32))) &&
                   (fVar24 = DAT_14c846338, fVar29 = (float)DAT_14c846330,
                   fVar26 = DAT_14c846330._4_4_, 1e-08 <= fVar32)) {
                  fVar32 = 1.0 / SQRT(fVar32);
                  fVar24 = fVar21 * fVar32;
                  fVar29 = fVar33 * fVar32;
                  fVar26 = fVar34 * fVar32;
                }
                fVar32 = fVar29 * fVar25 - fVar30 * fVar26;
                fVar21 = fVar24 * fVar30 - fVar35 * fVar29;
                fVar35 = fVar26 * fVar35 - fVar25 * fVar24;
                fVar33 = fVar32 * fVar32 + fVar35 * fVar35 + fVar21 * fVar21;
                if (((fVar33 != 1.0) ||
                    (fVar34 = fVar32, fVar30 = fVar35, fVar24 = fVar21, NAN(fVar33))) &&
                   (fVar34 = DAT_14c846338, fVar30 = (float)DAT_14c846330,
                   fVar24 = DAT_14c846330._4_4_, 1e-08 <= fVar33)) {
                  fVar33 = 1.0 / SQRT(fVar33);
                  fVar34 = fVar32 * fVar33;
                  fVar30 = fVar35 * fVar33;
                  fVar24 = fVar21 * fVar33;
                }
                lVar15 = *(longlong *)(param_1 + 0x8b8);
                uVar14 = lVar20 + lVar18 & 0xffffffff;
                dVar3 = (double)fVar34;
                dVar2 = (double)fVar24;
                dVar23 = (double)fVar30;
                local_568 = lVar19;
                local_560 = lVar17;
                local_188 = dVar23;
                local_180 = dVar2;
                local_178 = dVar3;
                if (*(char *)(param_1 + 0x8d9) == '\x01') {
                  lVar20 = uVar14 * 0x10;
                  *(undefined2 *)(lVar15 + lVar20) = 0x7fff;
                  *(short *)(lVar15 + 2 + lVar20) = (short)local_604;
                  *(short *)(lVar15 + 4 + lVar20) = (short)local_604;
                  *(undefined2 *)(lVar15 + 6 + lVar20) = 0x7fff;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  dVar22 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 32767.0 + fVar30 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 8 + lVar20) = uVar13;
                  iVar8 = (int)ROUND(fVar24 * 32767.0 + fVar24 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  iVar8 = (int)ROUND(fVar34 * 32767.0 + fVar34 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  *(undefined2 *)(lVar15 + 10 + lVar20) = uVar13;
                  if (iVar8 < -0x7fff) {
                    iVar8 = -0x8000;
                  }
                  *(short *)(lVar15 + 0xc + lVar20) = (short)iVar8;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4)) >>
                          1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 0xe + lVar20) = uVar13;
                  lVar20 = local_600;
                }
                else {
                  *(undefined1 *)(lVar15 + uVar14 * 8) = 0x7f;
                  *(char *)(lVar15 + 1 + uVar14 * 8) = (char)local_608;
                  *(char *)(lVar15 + 2 + uVar14 * 8) = (char)local_608;
                  *(undefined1 *)(lVar15 + 3 + uVar14 * 8) = 0x7f;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  dVar22 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 127.0 + fVar30 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 4 + uVar14 * 8) = uVar12;
                  iVar8 = (int)ROUND(fVar24 * 127.0 + fVar24 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  iVar8 = (int)ROUND(fVar34 * 127.0 + fVar34 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  *(undefined1 *)(lVar15 + 5 + uVar14 * 8) = uVar12;
                  if (iVar8 < -0x7f) {
                    iVar8 = -0x80;
                  }
                  *(char *)(lVar15 + 6 + uVar14 * 8) = (char)iVar8;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar22 < 0.0) * 4)) >>
                          1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 7 + uVar14 * 8) = uVar12;
                }
                lVar15 = *(longlong *)(param_1 + 0x8b8);
                uVar14 = (ulonglong)((int)lVar20 + (int)lVar18 + 1);
                if (*(char *)(param_1 + 0x8d9) == '\x01') {
                  lVar20 = uVar14 * 0x10;
                  *(undefined2 *)(lVar15 + lVar20) = 0x7fff;
                  *(short *)(lVar15 + 2 + lVar20) = (short)local_604;
                  *(short *)(lVar15 + 4 + lVar20) = (short)local_604;
                  *(undefined2 *)(lVar15 + 6 + lVar20) = 0x7fff;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  local_188 = dVar23;
                  local_180 = dVar2;
                  local_178 = dVar3;
                  dVar22 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 32767.0 + fVar30 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 8 + lVar20) = uVar13;
                  iVar8 = (int)ROUND(fVar24 * 32767.0 + fVar24 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  iVar8 = (int)ROUND(fVar34 * 32767.0 + fVar34 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  *(undefined2 *)(lVar15 + 10 + lVar20) = uVar13;
                  if (iVar8 < -0x7fff) {
                    iVar8 = -0x8000;
                  }
                  *(short *)(lVar15 + 0xc + lVar20) = (short)iVar8;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar22 < 0.0) * 4)) >>
                          1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 0xe + lVar20) = uVar13;
                  lVar20 = local_600;
                }
                else {
                  *(undefined1 *)(lVar15 + uVar14 * 8) = 0x7f;
                  *(char *)(lVar15 + 1 + uVar14 * 8) = (char)local_608;
                  *(char *)(lVar15 + 2 + uVar14 * 8) = (char)local_608;
                  *(undefined1 *)(lVar15 + 3 + uVar14 * 8) = 0x7f;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  local_188 = dVar23;
                  local_180 = dVar2;
                  local_178 = dVar3;
                  dVar22 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 127.0 + fVar30 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 4 + uVar14 * 8) = uVar12;
                  iVar8 = (int)ROUND(fVar24 * 127.0 + fVar24 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  iVar8 = (int)ROUND(fVar34 * 127.0 + fVar34 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  *(undefined1 *)(lVar15 + 5 + uVar14 * 8) = uVar12;
                  if (iVar8 < -0x7f) {
                    iVar8 = -0x80;
                  }
                  *(char *)(lVar15 + 6 + uVar14 * 8) = (char)iVar8;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar22 < 0.0) * 4)) >>
                          1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 7 + uVar14 * 8) = uVar12;
                }
                lVar15 = *(longlong *)(param_1 + 0x8b8);
                uVar14 = (ulonglong)((int)lVar20 + (int)lVar18 + 2);
                if (*(char *)(param_1 + 0x8d9) == '\x01') {
                  lVar20 = uVar14 * 0x10;
                  *(undefined2 *)(lVar15 + lVar20) = 0x7fff;
                  *(short *)(lVar15 + 2 + lVar20) = (short)local_604;
                  *(short *)(lVar15 + 4 + lVar20) = (short)local_604;
                  *(undefined2 *)(lVar15 + 6 + lVar20) = 0x7fff;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  local_188 = dVar23;
                  local_180 = dVar2;
                  local_178 = dVar3;
                  dVar23 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 32767.0 + fVar30 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 8 + lVar20) = uVar13;
                  iVar8 = (int)ROUND(fVar24 * 32767.0 + fVar24 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  iVar8 = (int)ROUND(fVar34 * 32767.0 + fVar34 * 32767.0 + 0.5) >> 1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  *(undefined2 *)(lVar15 + 10 + lVar20) = uVar13;
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 0xc + lVar20) = uVar13;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar23 < 0.0) * 4)) >>
                          1;
                  if (0x7ffe < iVar8) {
                    iVar8 = 0x7fff;
                  }
                  uVar13 = (undefined2)iVar8;
                  if (iVar8 < -0x7fff) {
                    uVar13 = 0x8000;
                  }
                  *(undefined2 *)(lVar15 + 0xe + lVar20) = uVar13;
                  lVar20 = local_600;
                }
                else {
                  *(undefined1 *)(lVar15 + uVar14 * 8) = 0x7f;
                  *(char *)(lVar15 + 1 + uVar14 * 8) = (char)local_608;
                  *(char *)(lVar15 + 2 + uVar14 * 8) = (char)local_608;
                  *(undefined1 *)(lVar15 + 3 + uVar14 * 8) = 0x7f;
                  local_1c8 = 0x3ff0000000000000;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  local_1a0 = 0x3ff0000000000000;
                  local_198 = 0;
                  uStack_190 = 0;
                  local_160 = 0;
                  uStack_158 = 0;
                  local_170 = 0;
                  uStack_168 = 0;
                  local_150 = 0x3ff0000000000000;
                  local_188 = dVar23;
                  local_180 = dVar2;
                  local_178 = dVar3;
                  dVar23 = (double)FUN_144a91046(&local_1c8);
                  iVar8 = (int)ROUND(fVar30 * 127.0 + fVar30 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 4 + uVar14 * 8) = uVar12;
                  iVar8 = (int)ROUND(fVar24 * 127.0 + fVar24 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  iVar8 = (int)ROUND(fVar34 * 127.0 + fVar34 * 127.0 + 0.5) >> 1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  *(undefined1 *)(lVar15 + 5 + uVar14 * 8) = uVar12;
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 6 + uVar14 * 8) = uVar12;
                  iVar8 = (int)ROUND(*(float *)(&DAT_14a329b50 + (ulonglong)(dVar23 < 0.0) * 4)) >>
                          1;
                  if (0x7e < iVar8) {
                    iVar8 = 0x7f;
                  }
                  uVar12 = (undefined1)iVar8;
                  if (iVar8 < -0x7f) {
                    uVar12 = 0x80;
                  }
                  *(undefined1 *)(lVar15 + 7 + uVar14 * 8) = uVar12;
                }
                if (*(char *)(param_1 + 0x8d8) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (uVar16 & 0x7fffffff8) * (ulonglong)*(uint *)(param_1 + 0x8d0)) = 0;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (local_590 + local_560 & 0x3fffffffcU) * (ulonglong)*(uint *)(param_1 + 0x8d0)) =
                       0;
                }
                if (*(char *)(param_1 + 0x8d8) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (uVar16 + 8 & 0x7fffffff8) * (ulonglong)*(uint *)(param_1 + 0x8d0)) = 0;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (local_590 + local_560 + 4U & 0x3fffffffc) *
                   (ulonglong)*(uint *)(param_1 + 0x8d0)) = 0;
                }
                if (*(char *)(param_1 + 0x8d8) == '\x01') {
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (uVar16 + 0x10 & 0x7fffffff8) * (ulonglong)*(uint *)(param_1 + 0x8d0)) = 0;
                }
                else {
                  *(undefined4 *)
                   (*(longlong *)(param_1 + 0x8c0) +
                   (local_590 + local_560 + 8U & 0x3fffffffc) *
                   (ulonglong)*(uint *)(param_1 + 0x8d0)) = 0;
                }
                puVar11 = &DAT_14cc24224;
                if (*(int *)(*(longlong *)(local_5a8 + 0x10) + local_588 * 4) == 0) {
                  puVar11 = &DAT_14cc24220;
                }
                uVar1 = *puVar11;
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x948) +
                 (ulonglong)(uint)(*(int *)(param_1 + 0x950) * (int)local_570)) = uVar1;
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x948) +
                 (ulonglong)(uint)(*(int *)(param_1 + 0x950) * (int)local_578)) = uVar1;
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x948) +
                 (ulonglong)(uint)(*(int *)(param_1 + 0x950) * (int)local_580)) = uVar1;
                *(int *)(*(longlong *)(param_1 + 0x978) + local_590 + lVar18 * 4) = (int)local_570;
                *(int *)(*(longlong *)(param_1 + 0x978) + local_590 + 4 + lVar18 * 4) =
                     (int)local_578;
                *(int *)(*(longlong *)(param_1 + 0x978) + local_590 + 8 + lVar18 * 4) =
                     (int)local_580;
                lVar19 = local_568 + 1;
                lVar18 = lVar18 + 3;
                lVar17 = local_560 + 0xc;
                uVar16 = uVar16 + 0x18;
                lVar15 = local_588;
              } while (lVar19 < DAT_14cc24248);
            }
            iVar8 = local_5f4 + 1;
            lVar20 = local_5b8;
            lVar17 = local_5b0;
          }
          lVar15 = lVar15 + 1;
        }
        FUN_14006bf18(local_5f0,local_5d8);
        lVar17 = local_5e0;
        FUN_140d00208(local_5e0,uVar4);
        lVar20 = local_5e8;
        FUN_14006bf18(local_5e8,uVar4);
        uStack_158 = 0x400000000;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1a8 = 0;
        local_1a0 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0xffffffff;
        local_10c = 0xff;
        local_10a = 0;
        lVar15 = param_1 + 0x2d0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        FUN_144a7dcb2(lVar18,lVar15,&local_1c8);
        FUN_144a7dcdc(lVar17,lVar15,&local_1c8);
        FUN_147cdc2d0(lVar17,lVar15,&local_1c8,0xffffffff);
        FUN_144a7dd4a(lVar20,lVar15,&local_1c8);
        FUN_140ba0b60(param_1 + 0x638,uVar4,&local_1c8);
        FUN_14006bf18(param_1 + 0x638,uVar4);
        FUN_14006bf18(param_1 + 0x960,uVar4);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496f68c2 FUN_1496f68c2 body=995 status=ok
// SIG undefined FUN_1496f68c2(void)

void FUN_1496f68c2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_538 [40];
  undefined4 local_510;
  undefined8 *local_508;
  longlong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8 [64];
  undefined8 local_4a8;
  undefined8 local_470;
  undefined8 local_390;
  undefined8 local_358;
  undefined8 local_2e0;
  undefined8 local_2c8;
  longlong *local_2b0;
  longlong local_1d0;
  longlong local_198;
  undefined8 local_160;
  code *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_538;
  FUN_146ea76f0(local_4e8,*(undefined8 *)(param_1 + 0x2a0));
  lVar4 = *(longlong *)(param_1 + 0x298);
  iVar5 = FUN_146ea7dde(local_4e8);
  iVar6 = FUN_146ea7dde(local_4e8);
  iVar5 = iVar5 * 3;
  lVar1 = param_1 + 0x4f0;
  lVar2 = param_1 + 0x578;
  FUN_1408e3634(lVar2,iVar5,1);
  FUN_1408e36f6(lVar1,iVar5,1,1);
  local_4f0 = param_1 + 0x5b8;
  FUN_140964b22(local_4f0,iVar5,1);
  FUN_14017c08a(param_1 + 0x610,iVar6 * 3,1);
  iVar5 = FUN_146ea7dde(local_4e8);
  if (0 < iVar5) {
    if (local_2b0 == (longlong *)0x0) {
      uVar7 = FUN_1401f66f6(local_2e0,local_2c8);
    }
    else {
      uVar7 = (**(code **)(*local_2b0 + 0x60))();
    }
    if (0 < (int)uVar7) {
      local_4f8 = param_1 + 0x2b0;
      uVar11 = 0;
      do {
        if (*(int *)(*(longlong *)(local_198 + 0x10) + uVar11 * 4) != 0) {
          iVar5 = *(int *)(param_1 + 0x2b8);
          *(uint *)(param_1 + 0x2b8) = iVar5 + 1U;
          if (*(uint *)(param_1 + 700) < iVar5 + 1U) {
            FUN_1496f78c8(local_4f8,iVar5);
          }
          lVar10 = *(longlong *)(param_1 + 0x2b0);
          puVar3 = (undefined4 *)(lVar10 + (longlong)iVar5 * 0x14);
          *puVar3 = 0xffffffff;
          puVar3[1] = 0xffffffff;
          puVar3[2] = 0xffffffff;
          puVar3[3] = 0xffffffff;
          *(undefined4 *)(lVar10 + 0x10 + (longlong)iVar5 * 0x14) = 0xffffffff;
          lVar10 = *(longlong *)(param_1 + 0x2b0);
          lVar9 = (longlong)(*(int *)(param_1 + 0x2b8) + -1);
          iVar5 = *(int *)(*(longlong *)(local_1d0 + 0x10) + uVar11 * 4);
          *(int *)(lVar10 + 8 + lVar9 * 0x14) = iVar5 * 3;
          *(int *)(lVar10 + 0xc + lVar9 * 0x14) =
               (iVar5 + *(int *)(*(longlong *)(local_198 + 0x10) + uVar11 * 4)) * 3 + -1;
          *(int *)(lVar10 + lVar9 * 0x14) =
               *(int *)(*(longlong *)(local_1d0 + 0x10) + uVar11 * 4) * 3;
          *(undefined4 *)(lVar10 + 4 + lVar9 * 0x14) =
               *(undefined4 *)(*(longlong *)(local_198 + 0x10) + uVar11 * 4);
          *(int *)(lVar10 + 0x10 + lVar9 * 0x14) = (int)uVar11;
        }
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
    }
    local_138 = local_4a8;
    uStack_130 = local_358;
    local_118 = local_160;
    uStack_110 = local_470;
    local_108 = local_390;
    local_128 = param_1;
    lStack_120 = lVar4 + 0x738;
    uVar8 = FUN_146ea7dde();
    local_508 = &local_148;
    local_148 = 0;
    local_140 = 0;
    local_158 = FUN_144602cb6;
    local_510 = 0;
    local_150 = &local_138;
    FUN_1401f8d10(L"ParallelFor Task",uVar8,1);
  }
  FUN_14006bf18(lVar2,param_2);
  FUN_140d00208(lVar1,param_2);
  lVar4 = local_4f0;
  FUN_14006bf18(local_4f0,param_2);
  local_c8 = 0x400000000;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0xffffffff;
  local_7c = 0xff;
  local_7a = 0;
  lVar10 = param_1 + 0x2d0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a7dcb2(lVar2,lVar10,&local_138);
  FUN_144a7dcdc(lVar1,lVar10,&local_138);
  FUN_147cdc2d0(lVar1,lVar10,&local_138,0xffffffff);
  FUN_144a7dd4a(lVar4,lVar10,&local_138);
  FUN_140ba0b60(lVar10,param_2,&local_138);
  FUN_14006bf18(lVar10,param_2);
  FUN_14006bf18(param_1 + 0x5f8,param_2);
  if ((local_60 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496f6ca6 FUN_1496f6ca6 body=60 status=ok
// SIG undefined FUN_1496f6ca6(void)

void FUN_1496f6ca6(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1496f6ce2();
  FUN_1496f6d44(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x2a0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  return;
}



// FUNCTION 1496f6ce2 FUN_1496f6ce2 body=98 status=ok
// SIG undefined FUN_1496f6ce2(void)

void FUN_1496f6ce2(longlong param_1)

{
  if (*(int *)(param_1 + 0x620) != 0) {
    FUN_144725486(param_1 + 0x8e0);
    FUN_1412db970(param_1 + 0x858);
    FUN_144725486(param_1 + 0x920);
    FUN_144725486(param_1 + 0x960);
    FUN_144725486(param_1 + 0x638);
    return;
  }
  return;
}



// FUNCTION 1496f6d44 FUN_1496f6d44 body=81 status=ok
// SIG undefined FUN_1496f6d44(void)

void FUN_1496f6d44(longlong param_1)

{
  FUN_144725486(param_1 + 0x578);
  FUN_1412db970(param_1 + 0x4f0);
  FUN_144725486(param_1 + 0x5b8);
  FUN_144725486(param_1 + 0x5f8);
  FUN_144725486(param_1 + 0x2d0);
  return;
}



// FUNCTION 1496f6d96 FUN_1496f6d96 body=573 status=ok
// SIG undefined FUN_1496f6d96(void)

void FUN_1496f6d96(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong local_430;
  byte local_428;
  undefined1 local_420;
  undefined1 local_418;
  byte local_410;
  undefined4 local_404;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined4 *local_3e0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_404 = param_2;
  FUN_146ea76f0(local_3d8,*(undefined8 *)(param_1 + 0x2a0));
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    puVar9 = *(undefined4 **)(param_1 + 0x2b0);
    local_3e0 = puVar9 + (longlong)*(int *)(param_1 + 0x2b8) * 5;
    local_3e8 = param_1 + 0x1b8;
    local_3f0 = param_1 + 0x180;
    local_3f8 = param_1 + 0x2d0;
    local_400 = param_1 + 0x5f8;
    do {
      lVar5 = FUN_14337cb52(param_3[0x1d]);
      FUN_1436a1a18(lVar5);
      bVar2 = *(byte *)(param_1 + 0x75);
      local_410 = 1;
      if (bVar2 < 0x40) {
        if ((bVar2 & 8) == 0) {
          local_410 = 0;
        }
        else {
          local_410 = (bVar2 & 4) >> 2;
        }
      }
      local_428 = *(byte *)(param_1 + 0x77) >> 6 & 1;
      local_430 = local_3e8;
      local_438 = local_3f0;
      local_418 = 0;
      local_420 = 1;
      FUN_147ceee92(lVar5,param_3[0x22],param_1 + 0x100,param_1 + 0x100);
      iVar4 = FUN_14470b8a2(param_3,1);
      lVar3 = *(longlong *)(*param_3 + (longlong)(iVar4 / 0x44) * 8);
      lVar8 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0;
      puVar1 = (uint *)(lVar3 + 0xe4 + lVar8);
      *puVar1 = *puVar1 & 0xffffefff;
      *(longlong *)(lVar3 + 0xb8 + lVar8) = local_3f8;
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x2f0))();
      *(undefined8 *)(lVar3 + 0xc0 + lVar8) = uVar6;
      *(uint *)(lVar3 + 0xe4 + lVar8) =
           (*(byte *)(param_1 + 0x6b) & 1) * 0x40 + (*(uint *)(lVar3 + 0xe4 + lVar8) & 0xffe03fbf) +
           0x100000;
      lVar7 = *(longlong *)(lVar3 + 0xa8 + lVar8);
      if (lVar7 == 0) {
        lVar7 = lVar3 + lVar8;
      }
      *(longlong *)(lVar7 + 0x18) = local_400;
      *(longlong *)(lVar7 + 8) = lVar5 + 8;
      *(undefined4 *)(lVar7 + 0x58) = *puVar9;
      *(undefined4 *)(lVar7 + 0x5c) = puVar9[1];
      *(undefined4 *)(lVar7 + 0x68) = puVar9[2];
      *(undefined4 *)(lVar7 + 0x6c) = puVar9[3];
      FUN_1436a14f8(param_3,local_404,lVar3 + lVar8);
      puVar9 = puVar9 + 5;
    } while (puVar9 != local_3e0);
  }
  if ((local_48 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f6fd4 FUN_1496f6fd4 body=654 status=ok
// SIG undefined FUN_1496f6fd4(void)

void FUN_1496f6fd4(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong local_430;
  byte local_428;
  undefined1 local_420;
  undefined1 local_418;
  byte local_410;
  undefined4 local_404;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined4 *local_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 local_3b0;
  longlong *local_398;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_404 = param_2;
  if ((*(int *)(param_1 + 0x620) != 0) && (*(int *)(*(longlong *)(param_1 + 0x298) + 0x738) == 3)) {
    FUN_146ea76f0(local_3d8,*(undefined8 *)(param_1 + 0x2a0));
    if (local_398 == (longlong *)0x0) {
      FUN_1401f66f6(local_3c8,local_3b0);
    }
    else {
      (**(code **)(*local_398 + 0x60))();
    }
    if ((longlong)*(int *)(param_1 + 0x630) != 0) {
      puVar9 = *(undefined4 **)(param_1 + 0x628);
      local_3e0 = puVar9 + (longlong)*(int *)(param_1 + 0x630) * 5;
      local_3e8 = param_1 + 0x1b8;
      local_3f0 = param_1 + 0x180;
      local_3f8 = param_1 + 0x638;
      local_400 = param_1 + 0x960;
      do {
        lVar5 = FUN_14337cb52(param_3[0x1d]);
        FUN_1436a1a18(lVar5);
        bVar2 = *(byte *)(param_1 + 0x75);
        local_410 = 1;
        if (bVar2 < 0x40) {
          if ((bVar2 & 8) == 0) {
            local_410 = 0;
          }
          else {
            local_410 = (bVar2 & 4) >> 2;
          }
        }
        local_428 = *(byte *)(param_1 + 0x77) >> 6 & 1;
        local_430 = local_3e8;
        local_438 = local_3f0;
        local_418 = 0;
        local_420 = 1;
        FUN_147ceee92(lVar5,param_3[0x22],param_1 + 0x100,param_1 + 0x100);
        iVar4 = FUN_14470b8a2(param_3,1);
        lVar3 = *(longlong *)(*param_3 + (longlong)(iVar4 / 0x44) * 8);
        lVar8 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0;
        puVar1 = (uint *)(lVar3 + 0xe4 + lVar8);
        *puVar1 = *puVar1 & 0xfffff6ff;
        *(longlong *)(lVar3 + 0xb8 + lVar8) = local_3f8;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x2f0))();
        *(undefined8 *)(lVar3 + 0xc0 + lVar8) = uVar6;
        *(uint *)(lVar3 + 0xe4 + lVar8) =
             (*(byte *)(param_1 + 0x6b) & 1) * 0x40 + (*(uint *)(lVar3 + 0xe4 + lVar8) & 0xffe03fbf)
             + 0x100000;
        lVar7 = *(longlong *)(lVar3 + 0xa8 + lVar8);
        if (lVar7 == 0) {
          lVar7 = lVar3 + lVar8;
        }
        *(longlong *)(lVar7 + 0x18) = local_400;
        *(longlong *)(lVar7 + 8) = lVar5 + 8;
        *(undefined4 *)(lVar7 + 0x58) = *puVar9;
        *(undefined4 *)(lVar7 + 0x5c) = puVar9[1];
        *(undefined4 *)(lVar7 + 0x68) = puVar9[2];
        *(undefined4 *)(lVar7 + 0x6c) = puVar9[3];
        FUN_1436a14f8(param_3,local_404,lVar3 + lVar8);
        puVar9 = puVar9 + 5;
      } while (puVar9 != local_3e0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f7264 FUN_1496f7264 body=110 status=ok
// SIG undefined FUN_1496f7264(void)

void FUN_1496f7264(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1496f7972(param_1,iVar1);
    }
    FUN_1496f795c((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1496f7a06(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1496f72d8 FUN_1496f72d8 body=152 status=ok
// SIG undefined FUN_1496f72d8(void)

undefined8 * FUN_1496f72d8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar1 = FUN_14480c900(0,param_3);
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) =
       ((uint)(*(char *)(param_1 + 0x82) != '\x01') << 0xd |
       (*(byte *)(param_1 + 0x6e) & 8) << 4 | (uint)bVar1 * 4 + (uint)bVar2 * 8) +
       (*(byte *)(param_1 + 0x72) & 1) * 0x4000 + 2;
  FUN_144b252aa(param_1 + 0x2c0,param_2);
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xef;
  return param_2;
}



// FUNCTION 1496f7378 FUN_1496f7378 body=45 status=ok
// SIG undefined FUN_1496f7378(void)

longlong FUN_1496f7378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a3b250(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f73a6 FUN_1496f73a6 body=48 status=ok
// SIG undefined FUN_1496f73a6(void)

longlong FUN_1496f73a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145a3b250(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f73d6 FUN_1496f73d6 body=48 status=ok
// SIG undefined FUN_1496f73d6(void)

longlong FUN_1496f73d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145a3b250(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f7406 FUN_1496f7406 body=48 status=ok
// SIG undefined FUN_1496f7406(void)

longlong FUN_1496f7406(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145a3b250(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f7436 FUN_1496f7436 body=38 status=ok
// SIG undefined FUN_1496f7436(void)

undefined8 FUN_1496f7436(undefined8 param_1,int param_2)

{
  FUN_1496f553a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f746a FUN_1496f746a body=48 status=ok
// SIG undefined FUN_1496f746a(void)

void FUN_1496f746a(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 1496f749a FUN_1496f749a body=48 status=ok
// SIG undefined FUN_1496f749a(void)

void FUN_1496f749a(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 1496f74ca FUN_1496f74ca body=47 status=ok
// SIG undefined FUN_1496f74ca(void)

void FUN_1496f74ca(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1496f7510 FUN_1496f7510 body=67 status=ok
// SIG undefined FUN_1496f7510(void)

undefined1 FUN_1496f7510(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1496f757c FUN_1496f757c body=59 status=ok
// SIG undefined FUN_1496f757c(void)

undefined8 FUN_1496f757c(longlong *param_1)

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



// FUNCTION 1496f761a FUN_1496f761a body=51 status=ok
// SIG undefined FUN_1496f761a(void)

void FUN_1496f761a(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1496f764e FUN_1496f764e body=52 status=ok
// SIG undefined FUN_1496f764e(void)

undefined8 * FUN_1496f764e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be11e70;
  FUN_14054b30a(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f7682 FUN_1496f7682 body=101 status=ok
// SIG undefined FUN_1496f7682(void)

undefined8 * FUN_1496f7682(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be11e80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496f76e8 FUN_1496f76e8 body=29 status=ok
// SIG undefined FUN_1496f76e8(void)

undefined8 FUN_1496f76e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f7706 FUN_1496f7706 body=101 status=ok
// SIG undefined FUN_1496f7706(void)

undefined8 * FUN_1496f7706(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14be11e80;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1496f779a FUN_1496f779a body=31 status=ok
// SIG undefined FUN_1496f779a(void)

undefined8 FUN_1496f779a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f77d6 FUN_1496f77d6 body=93 status=ok
// SIG undefined FUN_1496f77d6(void)

void FUN_1496f77d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be11eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1496f7834 FUN_1496f7834 body=126 status=ok
// SIG undefined FUN_1496f7834(void)

void FUN_1496f7834(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be11eb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496f78a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1496f78b2 FUN_1496f78b2 body=21 status=ok
// SIG undefined FUN_1496f78b2(void)

undefined8 FUN_1496f78b2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1496f78c8 FUN_1496f78c8 body=147 status=ok
// SIG undefined FUN_1496f78c8(void)

void FUN_1496f78c8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496f795c FUN_1496f795c body=22 status=ok
// SIG undefined FUN_1496f795c(void)

void FUN_1496f795c(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 * 0x14);
    return;
  }
  return;
}



// FUNCTION 1496f7972 FUN_1496f7972 body=147 status=ok
// SIG undefined FUN_1496f7972(void)

void FUN_1496f7972(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496f7a06 FUN_1496f7a06 body=62 status=ok
// SIG undefined FUN_1496f7a06(void)

void FUN_1496f7a06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496f7a44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 1496f7a44 FUN_1496f7a44 body=112 status=ok
// SIG undefined FUN_1496f7a44(void)

ulonglong FUN_1496f7a44(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496f7a7e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_1496f7a7e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1496f7ab4 FUN_1496f7ab4 body=362 status=ok
// SIG undefined FUN_1496f7ab4(void)

undefined8 * FUN_1496f7ab4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
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
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (int)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_1;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
      uVar3 = 0;
      if ((longlong)(int)uStack_58 != 0) {
        lVar6 = (longlong)(int)uStack_58 * 0x28;
        lVar5 = local_60;
        do {
          FUN_1496fcd42(param_2,lVar5);
          lVar5 = lVar5 + 0x28;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
        uVar3 = (ulonglong)uStack_58 & 0xffffffff;
      }
      FUN_1496fcd08(local_60,uVar3);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f7c20 FUN_1496f7c20 body=299 status=ok
// SIG undefined FUN_1496f7c20(void)

undefined8 * FUN_1496f7c20(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be12420;
  puVar1 = param_1 + 0x33;
  FUN_1414db454(puVar1);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4d,&DAT_149e02088);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = DAT_14c996ae0;
  local_80 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = puVar1;
  FUN_146fb824a(param_1,&local_68,&local_80);
  local_68 = (undefined8 *)0x0;
  FUN_1496f7d4c(param_1,puVar1,puVar1,&local_68);
  local_80 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x4b;
  FUN_146fb8a66(param_1,&local_68,&local_80);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f7d4c FUN_1496f7d4c body=128 status=ok
// SIG undefined FUN_1496f7d4c(void)

undefined8 FUN_1496f7d4c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0xffffffff;
  local_20 = 0;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = param_2;
  local_30 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_48,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f7dce FUN_1496f7dce body=33 status=ok
// SIG undefined FUN_1496f7dce(void)

undefined8 FUN_1496f7dce(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1461ad688();
  FUN_1496f7ab4(uVar1,param_2);
  return param_2;
}



// FUNCTION 1496f7df0 FUN_1496f7df0 body=1400 status=ok
// SIG undefined FUN_1496f7df0(void)

void FUN_1496f7df0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_238 [36];
  int local_214;
  longlong local_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  longlong *local_1e0 [2];
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0 [2];
  longlong *local_1b0 [2];
  undefined8 local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  wchar_t **local_178;
  ulonglong *local_170;
  longlong local_168;
  undefined4 local_160;
  wchar_t *local_158;
  undefined4 local_150;
  longlong local_148;
  wchar_t *local_a8;
  longlong local_a0 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  pwVar7 = (wchar_t *)(param_1 + 0x198);
  pwVar6 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pwVar6 == pwVar7) {
    local_150 = 0xffffffff;
    local_148 = 0;
    local_158 = pwVar7;
    uVar8 = FUN_146fb4872(param_1,&local_158);
    uVar8 = FUN_1496fcf74(uVar8,param_2,local_158);
    FUN_146ecd042(&local_158,uVar8);
    if (1 < *(int *)(param_1 + 0x250)) {
      FUN_1446f82e2(&local_a8,*(int *)(param_1 + 0x250) + -1,*(undefined8 *)(param_1 + 0x248),1);
      local_190 = *(undefined8 *)(param_1 + 0x288);
      local_1a0 = 0;
      local_198 = 1;
      plVar9 = (longlong *)FUN_140498c8e(&local_158,local_a8);
      uVar4 = (**(code **)(*plVar9 + 0x60))();
      uVar3 = *(uint *)(param_1 + 0x280);
      if ((int)uVar3 < (int)uVar4) {
        uVar4 = uVar3;
      }
      if (0 < (int)uVar3) {
        uVar5 = (**(code **)(*plVar9 + 0x60))();
        if (uVar3 != uVar5) {
          local_214 = (**(code **)(*plVar9 + 0x60))(plVar9);
          FUN_145715fae(local_1c0,&local_190);
          local_210 = (longlong)*(int *)(param_1 + 0x280);
          local_a8 = L"VertexCountMismatchDetails";
          local_a0[0]._0_4_ = 0x1a;
          FUN_1446e940c(local_1e4,&local_a8);
          local_a8 = L"DataflowCollectionAddScalarVertexProperty";
          local_a0[0] = CONCAT44(local_a0[0]._4_4_,0x29);
          FUN_1446e940c(local_1e8,&local_a8);
          FUN_140208bae(local_1e0,local_1e8,local_1e4,
                        L"Vertex weights in the node: {0}\n Vertices in group \"{1}\" in the Collection: {2}"
                       );
          FUN_14023409e(&local_1d0,local_1e0,1);
          local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffff00000000);
          local_a0[1] = 0;
          local_90 = 0;
          local_a0[0] = local_210;
          local_88 = 4;
          FUN_14023423e(local_78,local_1c0);
          local_68 = 0;
          local_58 = 0;
          local_50 = 0;
          local_60 = (longlong)local_214;
          local_170 = &local_48;
          local_178 = &local_a8;
          FUN_14010d304(&local_168);
          local_188 = local_1d0;
          local_180 = local_1c8;
          if (local_1c8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_1b0,&local_188,&local_168);
          FUN_14007f2db(local_168,local_160);
          if (local_168 != 0) {
            FUN_1400020a8();
          }
          lVar11 = 0x50;
          do {
            if (*(longlong **)((longlong)&local_a8 + lVar11) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_a8 + lVar11) + 0x10))();
              *(undefined8 *)((longlong)&local_a8 + lVar11) = 0;
              *(undefined4 *)((longlong)local_a0 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != -0x10);
          if (local_1c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1c8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1c8)(local_1c8);
              LOCK();
              piVar2 = (int *)((longlong)local_1c8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_1c8 + 0x10))(local_1c8);
              }
            }
          }
          if (local_1c0[0] != (longlong *)0x0) {
            (**(code **)(*local_1c0[0] + 0x10))();
          }
          local_a8 = L"VertexCountMismatchHeadline";
          local_a0[0]._0_4_ = 0x1b;
          FUN_1446e940c(&local_168,&local_a8);
          local_a8 = L"DataflowCollectionAddScalarVertexProperty";
          local_a0[0] = CONCAT44(local_a0[0]._4_4_,0x29);
          FUN_1446e940c(&local_178,&local_a8);
          FUN_140208bae(&local_a8,&local_178,&local_168,L"Vertex count mismatch.");
          FUN_144603ce4(param_1,&local_a8,local_1b0);
          if (local_a8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_a8 + 0x10))();
          }
          if (local_1b0[0] != (longlong *)0x0) {
            (**(code **)(*local_1b0[0] + 0x10))();
          }
          if (local_1e0[0] != (longlong *)0x0) {
            (**(code **)(*local_1e0[0] + 0x10))();
          }
        }
      }
      if (0 < (int)uVar4) {
        uVar10 = 0;
        do {
          *(undefined4 *)(plVar9[2] + uVar10 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x278) + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
    }
    local_a0[0] = CONCAT44(local_a0[0]._4_4_,0xffffffff);
    local_a0[1] = 0;
    local_a8 = pwVar7;
    lVar11 = FUN_146fb78aa(param_1);
    if (lVar11 != 0) {
      FUN_1496fd2a8(lVar11,&local_158,param_2);
    }
    FUN_14054b30a(&local_158);
  }
  else {
    pwVar7 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
    if (pwVar7 == (wchar_t *)(param_1 + 600)) {
      FUN_1400b22c2(local_1f8,"Vertices");
      local_208 = (void *)0x0;
      local_200 = *(int *)(param_1 + 0x250);
      lVar11 = (longlong)local_200;
      _Src = *(void **)(param_1 + 0x248);
      if (lVar11 == 0) {
        local_1fc = 0;
      }
      else {
        FUN_1446dd670(&local_208,local_200,0);
        memcpy(local_208,_Src,lVar11 * 2);
      }
      FUN_1496f836a(&local_158,&local_208,local_1f8);
      local_a0[0] = CONCAT44(local_a0[0]._4_4_,0xffffffff);
      local_a0[1] = 0;
      local_a8 = (wchar_t *)(param_1 + 600);
      lVar11 = FUN_146fb78aa(param_1);
      if (lVar11 != 0) {
        FUN_1496fd436(lVar11,&local_158,param_2);
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496f836a FUN_1496f836a body=201 status=ok
// SIG undefined FUN_1496f836a(void)

undefined8 * FUN_1496f836a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = (int)param_3[1];
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1496f8434 FUN_1496f8434 body=618 status=ok
// SIG undefined FUN_1496f8434(void)

void FUN_1496f8434(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_1 + 0x1a8;
  local_88 = 0xffffffff;
  local_80 = 0;
  uVar2 = FUN_146fb4872(param_1,&local_90);
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,local_90);
  local_60 = (void *)0x0;
  local_58 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_58;
  pvVar1 = (void *)*puVar3;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar4 * 2);
  }
  local_90 = param_1 + 0x198;
  local_88 = 0xffffffff;
  local_80 = 0;
  uVar2 = FUN_146fb4872(param_1,&local_90);
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,local_90);
  local_70 = (void *)0x0;
  local_68 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_68;
  pvVar1 = (void *)*puVar3;
  if (lVar4 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar1,lVar4 * 2);
  }
  pvVar1 = local_60;
  local_a0 = (void *)0x0;
  lVar4 = (longlong)local_58;
  local_98 = local_58;
  if (lVar4 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_58,0);
    memcpy(local_a0,pvVar1,lVar4 * 2);
  }
  pvVar1 = local_70;
  local_b0 = (void *)0x0;
  lVar4 = (longlong)local_68;
  local_a8 = local_68;
  if (lVar4 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_68,0);
    memcpy(local_b0,pvVar1,lVar4 * 2);
  }
  FUN_1496f836a(&local_90,&local_b0,&local_a0);
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x1b8;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_1496fd436(lVar4,&local_90,param_2);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f86a0 FUN_1496f86a0 body=273 status=ok
// SIG undefined FUN_1496f86a0(void)

void FUN_1496f86a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1 + 0x198;
  local_60 = 0xffffffff;
  local_58[0] = 0;
  uVar1 = FUN_146fb4872(param_1,&local_68);
  uVar1 = FUN_1496fdb42(uVar1,param_2,local_68);
  FUN_1496f87b2(&local_68,uVar1);
  local_48 = param_1 + 0x1b8;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_1496fde88(lVar2,&local_68,param_2);
  }
  local_48 = param_1 + 0x1c8;
  local_40 = 0xffffffff;
  local_38 = 0;
  lVar2 = FUN_146fb78aa(param_1);
  if (lVar2 != 0) {
    FUN_1496fde88(lVar2,local_58,param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f87b2 FUN_1496f87b2 body=156 status=ok
// SIG undefined FUN_1496f87b2(void)

undefined8 * FUN_1496f87b2(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1496f884e FUN_1496f884e body=302 status=ok
// SIG undefined FUN_1496f884e(void)

void FUN_1496f884e(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_44;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pwVar2 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pwVar2 == (wchar_t *)(param_1 + 0x1a8)) {
    local_44 = 0.0;
    FUN_1446ddc76(&local_40,"TEngineContext",1);
    cVar1 = (**(code **)(*param_2 + 8))(param_2,local_40);
    if ((param_2 != (longlong *)0x0) && (cVar1 != '\0')) {
      local_68 = &local_58;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1496f897d(&local_40,param_2[0xb],*(undefined8 *)(param_1 + 0x198),
                    *(undefined8 *)(param_1 + 0x1a0));
      pwVar2 = local_40;
      if (local_38 == 0) {
        pwVar2 = L"";
      }
      dVar4 = _wtof(pwVar2);
      local_44 = (float)dVar4;
      if (local_40 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    local_38 = -1;
    local_30 = 0;
    local_40 = (wchar_t *)(param_1 + 0x1a8);
    lVar3 = FUN_146fb78aa(param_1);
    if (lVar3 != 0) {
      FUN_1496fe392(lVar3,&local_44,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496f897d FUN_1496f897d body=386 status=ok
// SIG undefined FUN_1496f897d(void)

undefined8 *
FUN_1496f897d(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_4;
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
      (lVar4 = FUN_147a69726(*(longlong *)(param_2 + 0x10),param_3,3), lVar4 != 0)) &&
     (((lVar1 = *(longlong *)(lVar4 + 0x78), lVar1 != 0 &&
       (lVar5 = FUN_145a24b5e(), *(longlong *)(lVar1 + 0x70) == lVar5)) &&
      ((plVar6 = (longlong *)(param_2 + *(int *)(lVar4 + 0x44)), plVar6 != (longlong *)0x0 &&
       (lVar4 = plVar6[1], (longlong)(int)lVar4 != 0)))))) {
    lVar1 = *plVar6;
    lVar5 = 0;
    do {
      FUN_1400021e4(&local_50,&local_60);
      pwVar2 = local_60;
      iVar3 = *(int *)(lVar1 + 8 + lVar5);
      if (iVar3 == local_58) {
        bVar7 = true;
        if (1 < iVar3) {
          iVar3 = wcscmp(*(wchar_t **)(lVar1 + lVar5),local_60);
          bVar7 = iVar3 == 0;
        }
      }
      else {
        bVar7 = local_58 + iVar3 == 1;
      }
      if (pwVar2 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar2);
      }
      if (bVar7) {
        *param_1 = 0;
        iVar3 = *(int *)(lVar1 + 0x18 + lVar5);
        _Src = *(void **)(lVar1 + 0x10 + lVar5);
        goto LAB_1496f89cb;
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)(int)lVar4 * 0x20 != lVar5);
  }
  *param_1 = 0;
  iVar3 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
LAB_1496f89cb:
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1496f8b00 FUN_1496f8b00 body=552 status=ok
// SIG undefined FUN_1496f8b00(void)

void FUN_1496f8b00(longlong param_1,undefined8 param_2,longlong *param_3)

{
  wchar_t _C;
  void *_Src;
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 == param_1 + 0x1a8) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_88 = param_3;
    FUN_1400b22c2(&local_78,&DAT_149dfc0cb);
    pwVar6 = local_78;
    if (local_70 == 0) {
      pwVar6 = L"";
    }
    local_80 = param_2;
    FUN_1403de9f2(param_1 + 0x198,&local_68,pwVar6,1);
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_60 != 0) {
      puVar9 = local_68 + (longlong)(int)uStack_60 * 2;
      puVar8 = local_68;
      do {
        local_78 = (wchar_t *)0x0;
        local_70 = *(int *)(puVar8 + 1);
        lVar5 = (longlong)local_70;
        _Src = (void *)*puVar8;
        if (lVar5 == 0) {
          local_6c = 0;
LAB_1496f8c49:
          pwVar6 = L"";
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar5 * 2);
          pwVar6 = local_78;
          if (local_70 == 0) goto LAB_1496f8c49;
        }
        if ((*pwVar6 == L'-') || (*pwVar6 == L'+')) {
          pwVar6 = pwVar6 + 1;
        }
        bVar7 = false;
LAB_1496f8c60:
        _C = *pwVar6;
        if (_C == L'.') {
          bVar2 = true;
          if (bVar7) goto LAB_1496f8cc4;
LAB_1496f8c7e:
          bVar7 = bVar2;
          pwVar6 = pwVar6 + 1;
          goto LAB_1496f8c60;
        }
        if (_C != L'\0') {
          iVar3 = iswdigit(_C);
          bVar2 = bVar7;
          if (iVar3 == 0) goto LAB_1496f8cc4;
          goto LAB_1496f8c7e;
        }
        pwVar6 = L"";
        if (local_70 != 0) {
          pwVar6 = local_78;
        }
        iVar3 = _wtoi(pwVar6);
        uVar1 = uStack_50;
        lVar5 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1446f48e2(&local_58,uVar1 & 0xffffffff);
        }
        *(int *)(local_58 + lVar5 * 4) = iVar3;
LAB_1496f8cc4:
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar9);
    }
    FUN_1496f8d2a(local_88,&local_58,local_80);
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496f8d2a FUN_1496f8d2a body=177 status=ok
// SIG undefined FUN_1496f8d2a(void)

void FUN_1496f8d2a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1496fecd2(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f8ddc FUN_1496f8ddc body=305 status=ok
// SIG undefined FUN_1496f8ddc(void)

void FUN_1496f8ddc(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x198);
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar3 == plVar1) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = plVar1;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496ff5b0(lVar4,plVar1,param_2);
    }
    if (*plVar1 == 0) {
      FUN_1446ddc76(&local_40,"TEngineContext",1);
      cVar2 = (**(code **)(*param_2 + 8))(param_2,local_40);
      if ((param_2 != (longlong *)0x0) && (cVar2 != '\0')) {
        lVar4 = FUN_1496f8f0e(param_2[0xb],*(undefined8 *)(param_1 + 0x1a0));
        if (lVar4 != 0) {
          local_48 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          local_38 = 0xffffffff;
          local_30 = 0;
          local_40 = plVar1;
          lVar4 = FUN_146fb78aa(param_1);
          if (lVar4 != 0) {
            FUN_1496ff984(lVar4,&local_48,param_2);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f8f0e FUN_1496f8f0e body=197 status=ok
// SIG undefined FUN_1496f8f0e(void)

longlong FUN_1496f8f0e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (plVar1 = (longlong *)FUN_144a87586(), plVar1 != (longlong *)0x0)) {
    lVar3 = plVar1[1];
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return 0;
    }
    param_1 = param_1 + *(int *)((longlong)plVar1 + 0x44);
    if ((param_1 != 0) && (lVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,param_1), lVar3 != 0)) {
      lVar2 = FUN_144a85a6c();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1496f8fd4 FUN_1496f8fd4 body=305 status=ok
// SIG undefined FUN_1496f8fd4(void)

void FUN_1496f8fd4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x198);
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar3 == plVar1) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = plVar1;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_1496ffd58(lVar4,plVar1,param_2);
    }
    if (*plVar1 == 0) {
      FUN_1446ddc76(&local_40,"TEngineContext",1);
      cVar2 = (**(code **)(*param_2 + 8))(param_2,local_40);
      if ((param_2 != (longlong *)0x0) && (cVar2 != '\0')) {
        lVar4 = FUN_1496f9106(param_2[0xb],*(undefined8 *)(param_1 + 0x1a0));
        if (lVar4 != 0) {
          local_48 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          local_38 = 0xffffffff;
          local_30 = 0;
          local_40 = plVar1;
          lVar4 = FUN_146fb78aa(param_1);
          if (lVar4 != 0) {
            FUN_14970012c(lVar4,&local_48,param_2);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f9106 FUN_1496f9106 body=197 status=ok
// SIG undefined FUN_1496f9106(void)

longlong FUN_1496f9106(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (plVar1 = (longlong *)FUN_144a87586(), plVar1 != (longlong *)0x0)) {
    lVar3 = plVar1[1];
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return 0;
    }
    param_1 = param_1 + *(int *)((longlong)plVar1 + 0x44);
    if ((param_1 != 0) && (lVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,param_1), lVar3 != 0)) {
      lVar2 = FUN_140f5e1c2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1496f91cc FUN_1496f91cc body=534 status=ok
// SIG undefined FUN_1496f91cc(void)

void FUN_1496f91cc(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_1 + 0x1a8;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == lVar7) {
    local_68 = CONCAT44(local_68._4_4_,0xffffffff);
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar7;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_149700500(lVar4,&local_68,param_2);
    }
    local_50 = param_1 + 0x1a0;
    local_48 = -1;
    local_40 = 0;
    uVar5 = FUN_146fb4872(param_1,&local_50);
    plVar6 = (longlong *)FUN_1497005b2(uVar5,param_2,local_50);
    plVar6 = (longlong *)*plVar6;
    if ((plVar6 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar6);
    }
    else if (plVar6 == (longlong *)0x0) goto LAB_1496f9203;
    local_58 = *(longlong *)(param_1 + 0x198);
    if (local_58 == 0) {
      FUN_1446ddc76(&local_50,"TEngineContext",1);
      cVar2 = (**(code **)(*param_2 + 8))(param_2,local_50);
      if ((param_2 != (longlong *)0x0) && (cVar2 != '\0')) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_1446ddc76(&local_70,"BoneName",1);
        local_78 = &local_68;
        FUN_1496f897d(&local_50,param_2[0xb],*(undefined8 *)(param_1 + 0x1ac),local_70);
        iVar1 = local_48 + -1;
        if (local_48 == 0) {
          iVar1 = 0;
        }
        FUN_1446f82e2(&local_58,iVar1,local_50,1);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
    uVar5 = (**(code **)(*plVar6 + 0x308))(plVar6);
    uVar3 = FUN_144a750a0(uVar5,&local_58);
    local_68 = CONCAT44(local_68._4_4_,uVar3);
    local_48 = -1;
    local_40 = 0;
    local_50 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497006ec(lVar7,&local_68,param_2);
    }
  }
LAB_1496f9203:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f93e4 FUN_1496f93e4 body=438 status=ok
// SIG undefined FUN_1496f93e4(void)

void FUN_1496f93e4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_1 + 0x1b0;
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 == lVar6) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = lVar6;
    lVar2 = FUN_146fb78aa(param_1);
    if (lVar2 != 0) {
      FUN_149700970(lVar2,&DAT_14c846480,param_2);
    }
    local_50 = param_1 + 0x1a0;
    local_48 = 0xffffffff;
    local_40 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_50);
    piVar4 = (int *)FUN_146fca67a(uVar3,param_2,local_50);
    iVar1 = *piVar4;
    if (-1 < (longlong)iVar1) {
      local_50 = param_1 + 0x198;
      local_48 = 0xffffffff;
      local_40 = 0;
      uVar3 = FUN_146fb4872(param_1,&local_50);
      plVar5 = (longlong *)FUN_1497005b2(uVar3,param_2,local_50);
      plVar5 = (longlong *)*plVar5;
      if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar5);
      }
      else if (plVar5 == (longlong *)0x0) goto LAB_1496f941b;
      local_68 = 0;
      uStack_60 = 0;
      uVar3 = (**(code **)(*plVar5 + 0x308))(plVar5);
      FUN_14747f544(uVar3,&local_68);
      lVar2 = local_68;
      if (iVar1 < (int)uStack_60) {
        local_48 = 0xffffffff;
        local_40 = 0;
        local_50 = lVar6;
        lVar6 = FUN_146fb78aa(param_1);
        if (lVar6 != 0) {
          FUN_149700bfa(lVar6,lVar2 + (longlong)iVar1 * 0x60,param_2);
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1496f941b:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f959c FUN_1496f959c body=368 status=ok
// SIG undefined FUN_1496f959c(void)

void FUN_1496f959c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x198);
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if (plVar3 == plVar1) {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = plVar1;
    lVar4 = FUN_146fb78aa(param_1);
    if (lVar4 != 0) {
      FUN_149701010(lVar4,plVar1,param_2);
    }
    if (*plVar1 == 0) {
      FUN_1446ddc76(&local_40,"TEngineContext",1);
      cVar2 = (**(code **)(*param_2 + 8))(param_2,local_40);
      if ((param_2 != (longlong *)0x0) && (cVar2 != '\0')) {
        lVar4 = FUN_1496f970d(param_2[0xb],*(undefined8 *)(param_1 + 0x1a0));
        if (lVar4 != 0) {
          local_48 = lVar4;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          local_38 = 0xffffffff;
          local_30 = 0;
          local_40 = plVar1;
          lVar4 = FUN_146fb78aa(param_1);
          if (lVar4 != 0) {
            FUN_1497013e4(lVar4,&local_48,param_2);
          }
        }
      }
    }
    else {
      local_38 = 0xffffffff;
      local_30 = 0;
      local_40 = plVar1;
      lVar4 = FUN_146fb78aa(param_1);
      if (lVar4 != 0) {
        FUN_149701010(lVar4,plVar1,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496f970d FUN_1496f970d body=197 status=ok
// SIG undefined FUN_1496f970d(void)

longlong FUN_1496f970d(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (plVar1 = (longlong *)FUN_144a87586(), plVar1 != (longlong *)0x0)) {
    lVar3 = plVar1[1];
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return 0;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return 0;
    }
    param_1 = param_1 + *(int *)((longlong)plVar1 + 0x44);
    if ((param_1 != 0) && (lVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,param_1), lVar3 != 0)) {
      lVar2 = FUN_1406d0862();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1496f97d2 FUN_1496f97d2 body=38 status=ok
// SIG undefined FUN_1496f97d2(void)

undefined8 FUN_1496f97d2(undefined8 param_1,int param_2)

{
  FUN_1496f9fc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496f97f8 FUN_1496f97f8 body=38 status=ok
// SIG undefined FUN_1496f97f8(void)

undefined8 FUN_1496f97f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowCollectionAddScalarVertexPropertyNode",1);
  return param_2;
}



// FUNCTION 1496f981e FUN_1496f981e body=38 status=ok
// SIG undefined FUN_1496f981e(void)

undefined8 FUN_1496f981e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddScalarVertexProperty",1);
  return param_2;
}



// FUNCTION 1496f9844 FUN_1496f9844 body=38 status=ok
// SIG undefined FUN_1496f9844(void)

undefined8 FUN_1496f9844(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Collection",1);
  return param_2;
}



// FUNCTION 1496f986a FUN_1496f986a body=32 status=ok
// SIG undefined FUN_1496f986a(void)

undefined8 FUN_1496f986a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Add a saved scalar property to a collection");
  return param_2;
}



// FUNCTION 1496f988a FUN_1496f988a body=123 status=ok
// SIG undefined FUN_1496f988a(void)

void FUN_1496f988a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc242a8 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242a8 =
         FUN_140002ddd(FUN_14674f739,uVar1,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc242a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496f9902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496f9906 FUN_1496f9906 body=93 status=ok
// SIG undefined FUN_1496f9906(void)

void FUN_1496f9906(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc242a8 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc242a8 =
         FUN_140002ddd(FUN_14674f739,uVar2,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc242a8,param_1);
  return;
}



// FUNCTION 1496f9964 FUN_1496f9964 body=55 status=ok
// SIG undefined FUN_1496f9964(void)

void FUN_1496f9964(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc242a8 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242a8 =
         FUN_140002ddd(FUN_14674f739,uVar1,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  return;
}



// FUNCTION 1496f999c FUN_1496f999c body=228 status=ok
// SIG undefined FUN_1496f999c(void)

ulonglong FUN_1496f999c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FDataflowCollectionAddScalarVertexPropertyNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496f9a31;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496f9a31;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496f9a31;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496f9a31:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496f9ab8 FUN_1496f9ab8 body=54 status=ok
// SIG undefined FUN_1496f9ab8(void)

undefined1 FUN_1496f9ab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496f9bca(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1496f9b16 FUN_1496f9b16 body=59 status=ok
// SIG undefined FUN_1496f9b16(void)

undefined8 FUN_1496f9b16(longlong *param_1)

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



// FUNCTION 1496f9b5c FUN_1496f9b5c body=32 status=ok
// SIG undefined FUN_1496f9b5c(void)

void FUN_1496f9b5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1449db362(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1496f9bca FUN_1496f9bca body=130 status=ok
// SIG undefined FUN_1496f9bca(void)

void FUN_1496f9bca(longlong *param_1,longlong *param_2)

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



// FUNCTION 1496f9cc8 FUN_1496f9cc8 body=59 status=ok
// SIG undefined FUN_1496f9cc8(void)

undefined8 FUN_1496f9cc8(longlong *param_1)

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



// FUNCTION 1496f9d9e FUN_1496f9d9e body=63 status=ok
// SIG undefined FUN_1496f9d9e(void)

undefined1 FUN_1496f9d9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496f9f44(param_2,param_3);
    param_3 = param_3 + 0x290;
    param_2 = param_2 + 0x290;
  }
  return 1;
}



// FUNCTION 1496f9e06 FUN_1496f9e06 body=59 status=ok
// SIG undefined FUN_1496f9e06(void)

undefined8 FUN_1496f9e06(longlong *param_1)

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



// FUNCTION 1496f9e52 FUN_1496f9e52 body=40 status=ok
// SIG undefined FUN_1496f9e52(void)

void FUN_1496f9e52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x290) == '\x01') {
    FUN_1496f9fc4(param_2);
    *(undefined1 *)(param_2 + 0x290) = 0;
  }
  return;
}



// FUNCTION 1496f9ec8 FUN_1496f9ec8 body=124 status=ok
// SIG undefined FUN_1496f9ec8(void)

undefined8 * FUN_1496f9ec8(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be12420;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_1400b22c2(param_1 + 0x4b,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x4d,&DAT_149e02088);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = DAT_14c996ae0;
  return param_1;
}



// FUNCTION 1496f9f44 FUN_1496f9f44 body=126 status=ok
// SIG undefined FUN_1496f9f44(void)

longlong FUN_1496f9f44(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x248,param_2 + 0x248);
  FUN_144a787a6(param_1 + 600,param_2 + 600);
  FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
  FUN_144a67f5c(param_1 + 0x278,param_2 + 0x278);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  return param_1;
}



// FUNCTION 1496f9fc4 FUN_1496f9fc4 body=111 status=ok
// SIG undefined FUN_1496f9fc4(void)

void FUN_1496f9fc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be12420;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1496fa068 FUN_1496fa068 body=63 status=ok
// SIG undefined FUN_1496fa068(void)

undefined1 FUN_1496fa068(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fa50c(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 1496fa0d0 FUN_1496fa0d0 body=59 status=ok
// SIG undefined FUN_1496fa0d0(void)

undefined8 FUN_1496fa0d0(longlong *param_1)

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



// FUNCTION 1496fa11c FUN_1496fa11c body=40 status=ok
// SIG undefined FUN_1496fa11c(void)

void FUN_1496fa11c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_1496fa4a8(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1496fa192 FUN_1496fa192 body=101 status=ok
// SIG undefined FUN_1496fa192(void)

undefined8 * FUN_1496fa192(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be13ad0;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x39,&DAT_149e02088);
  return param_1;
}



// FUNCTION 1496fa1f8 FUN_1496fa1f8 body=38 status=ok
// SIG undefined FUN_1496fa1f8(void)

undefined8 FUN_1496fa1f8(undefined8 param_1,int param_2)

{
  FUN_1496fa4a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fa21e FUN_1496fa21e body=38 status=ok
// SIG undefined FUN_1496fa21e(void)

undefined8 FUN_1496fa21e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMakeAttributeKeyDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fa244 FUN_1496fa244 body=38 status=ok
// SIG undefined FUN_1496fa244(void)

undefined8 FUN_1496fa244(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeAttributeKey",1);
  return param_2;
}



// FUNCTION 1496fa26a FUN_1496fa26a body=38 status=ok
// SIG undefined FUN_1496fa26a(void)

undefined8 FUN_1496fa26a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection",1);
  return param_2;
}



// FUNCTION 1496fa290 FUN_1496fa290 body=32 status=ok
// SIG undefined FUN_1496fa290(void)

undefined8 FUN_1496fa290(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1496fa2b0 FUN_1496fa2b0 body=123 status=ok
// SIG undefined FUN_1496fa2b0(void)

void FUN_1496fa2b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc242c0 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242c0 = FUN_140002ddd(FUN_14674f7cf,uVar1,L"MakeAttributeKeyDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc242c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fa328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fa32c FUN_1496fa32c body=93 status=ok
// SIG undefined FUN_1496fa32c(void)

void FUN_1496fa32c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc242c0 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc242c0 = FUN_140002ddd(FUN_14674f7cf,uVar2,L"MakeAttributeKeyDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc242c0,param_1);
  return;
}



// FUNCTION 1496fa38a FUN_1496fa38a body=55 status=ok
// SIG undefined FUN_1496fa38a(void)

void FUN_1496fa38a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc242c0 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242c0 = FUN_140002ddd(FUN_14674f7cf,uVar1,L"MakeAttributeKeyDataflowNode");
  }
  return;
}



// FUNCTION 1496fa3c2 FUN_1496fa3c2 body=228 status=ok
// SIG undefined FUN_1496fa3c2(void)

ulonglong FUN_1496fa3c2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FMakeAttributeKeyDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fa457;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fa457;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fa457;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fa457:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fa4a8 FUN_1496fa4a8 body=99 status=ok
// SIG undefined FUN_1496fa4a8(void)

void FUN_1496fa4a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be13ad0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1496fa50c FUN_1496fa50c body=98 status=ok
// SIG undefined FUN_1496fa50c(void)

longlong FUN_1496fa50c(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 1496fa5a4 FUN_1496fa5a4 body=63 status=ok
// SIG undefined FUN_1496fa5a4(void)

undefined1 FUN_1496fa5a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496faa48(param_2,param_3);
    param_3 = param_3 + 0x1d8;
    param_2 = param_2 + 0x1d8;
  }
  return 1;
}



// FUNCTION 1496fa60c FUN_1496fa60c body=59 status=ok
// SIG undefined FUN_1496fa60c(void)

undefined8 FUN_1496fa60c(longlong *param_1)

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



// FUNCTION 1496fa658 FUN_1496fa658 body=40 status=ok
// SIG undefined FUN_1496fa658(void)

void FUN_1496fa658(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_1496fa9e4(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1496fa6ce FUN_1496fa6ce body=101 status=ok
// SIG undefined FUN_1496fa6ce(void)

undefined8 * FUN_1496fa6ce(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be13d70;
  FUN_1400b22c2(param_1 + 0x33,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x35,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x37,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x39,&DAT_149e02088);
  return param_1;
}



// FUNCTION 1496fa734 FUN_1496fa734 body=38 status=ok
// SIG undefined FUN_1496fa734(void)

undefined8 FUN_1496fa734(undefined8 param_1,int param_2)

{
  FUN_1496fa9e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fa75a FUN_1496fa75a body=38 status=ok
// SIG undefined FUN_1496fa75a(void)

undefined8 FUN_1496fa75a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBreakAttributeKeyDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fa780 FUN_1496fa780 body=38 status=ok
// SIG undefined FUN_1496fa780(void)

undefined8 FUN_1496fa780(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BreakAttributeKey",1);
  return param_2;
}



// FUNCTION 1496fa7a6 FUN_1496fa7a6 body=38 status=ok
// SIG undefined FUN_1496fa7a6(void)

undefined8 FUN_1496fa7a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Dataflow",1);
  return param_2;
}



// FUNCTION 1496fa7cc FUN_1496fa7cc body=32 status=ok
// SIG undefined FUN_1496fa7cc(void)

undefined8 FUN_1496fa7cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1496fa7ec FUN_1496fa7ec body=123 status=ok
// SIG undefined FUN_1496fa7ec(void)

void FUN_1496fa7ec(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc242d8 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242d8 = FUN_140002ddd(FUN_14674f865,uVar1,L"BreakAttributeKeyDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc242d8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fa864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fa868 FUN_1496fa868 body=93 status=ok
// SIG undefined FUN_1496fa868(void)

void FUN_1496fa868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc242d8 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc242d8 = FUN_140002ddd(FUN_14674f865,uVar2,L"BreakAttributeKeyDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc242d8,param_1);
  return;
}



// FUNCTION 1496fa8c6 FUN_1496fa8c6 body=55 status=ok
// SIG undefined FUN_1496fa8c6(void)

void FUN_1496fa8c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc242d8 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242d8 = FUN_140002ddd(FUN_14674f865,uVar1,L"BreakAttributeKeyDataflowNode");
  }
  return;
}



// FUNCTION 1496fa8fe FUN_1496fa8fe body=228 status=ok
// SIG undefined FUN_1496fa8fe(void)

ulonglong FUN_1496fa8fe(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FBreakAttributeKeyDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fa993;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fa993;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fa993;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fa993:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fa9e4 FUN_1496fa9e4 body=99 status=ok
// SIG undefined FUN_1496fa9e4(void)

void FUN_1496fa9e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be13d70;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1496faa48 FUN_1496faa48 body=98 status=ok
// SIG undefined FUN_1496faa48(void)

longlong FUN_1496faa48(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_144a787a6(param_1 + 0x198,param_2 + 0x198);
  FUN_144a787a6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  return param_1;
}



// FUNCTION 1496faaac FUN_1496faaac body=92 status=ok
// SIG undefined FUN_1496faaac(void)

void FUN_1496faaac(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14020;
  FUN_1446ddc76(param_2 + 0x33,"Overrides",1);
  FUN_1446ddc76(param_2 + 0x34,"FloatAttr",1);
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 1496fab08 FUN_1496fab08 body=92 status=ok
// SIG undefined FUN_1496fab08(void)

void FUN_1496fab08(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14020;
  FUN_1446ddc76(param_2 + 0x33,"Overrides",1);
  FUN_1446ddc76(param_2 + 0x34,"FloatAttr",1);
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 1496fab88 FUN_1496fab88 body=88 status=ok
// SIG undefined FUN_1496fab88(void)

undefined8 FUN_1496fab88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 1496fac08 FUN_1496fac08 body=59 status=ok
// SIG undefined FUN_1496fac08(void)

undefined8 FUN_1496fac08(longlong *param_1)

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



// FUNCTION 1496fac54 FUN_1496fac54 body=40 status=ok
// SIG undefined FUN_1496fac54(void)

void FUN_1496fac54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 1496facca FUN_1496facca body=38 status=ok
// SIG undefined FUN_1496facca(void)

undefined8 FUN_1496facca(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496facf0 FUN_1496facf0 body=38 status=ok
// SIG undefined FUN_1496facf0(void)

undefined8 FUN_1496facf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFloatOverrideDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fad16 FUN_1496fad16 body=38 status=ok
// SIG undefined FUN_1496fad16(void)

undefined8 FUN_1496fad16(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FloatOverride",1);
  return param_2;
}



// FUNCTION 1496fad3c FUN_1496fad3c body=38 status=ok
// SIG undefined FUN_1496fad3c(void)

undefined8 FUN_1496fad3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Dataflow",1);
  return param_2;
}



// FUNCTION 1496fad62 FUN_1496fad62 body=32 status=ok
// SIG undefined FUN_1496fad62(void)

undefined8 FUN_1496fad62(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1496fad82 FUN_1496fad82 body=123 status=ok
// SIG undefined FUN_1496fad82(void)

void FUN_1496fad82(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc242f0 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242f0 = FUN_140002ddd(FUN_14674f8fb,uVar1,L"FloatOverrideDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc242f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fadfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fadfe FUN_1496fadfe body=93 status=ok
// SIG undefined FUN_1496fadfe(void)

void FUN_1496fadfe(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc242f0 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc242f0 = FUN_140002ddd(FUN_14674f8fb,uVar2,L"FloatOverrideDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc242f0,param_1);
  return;
}



// FUNCTION 1496fae5c FUN_1496fae5c body=55 status=ok
// SIG undefined FUN_1496fae5c(void)

void FUN_1496fae5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc242f0 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc242f0 = FUN_140002ddd(FUN_14674f8fb,uVar1,L"FloatOverrideDataflowNode");
  }
  return;
}



// FUNCTION 1496fae94 FUN_1496fae94 body=228 status=ok
// SIG undefined FUN_1496fae94(void)

ulonglong FUN_1496fae94(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FFloatOverrideDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496faf29;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496faf29;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496faf29;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496faf29:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496faf7a FUN_1496faf7a body=61 status=ok
// SIG undefined FUN_1496faf7a(void)

void FUN_1496faf7a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be142d0;
  FUN_1400b22c2(param_2 + 0x33,"1 2 3");
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1496fafb8 FUN_1496fafb8 body=61 status=ok
// SIG undefined FUN_1496fafb8(void)

void FUN_1496fafb8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be142d0;
  FUN_1400b22c2(param_2 + 0x33,"1 2 3");
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1496fb01a FUN_1496fb01a body=108 status=ok
// SIG undefined FUN_1496fb01a(void)

undefined1 FUN_1496fb01a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a787a6(param_2 + 0x198,param_3 + 0x198);
    FUN_14054c6c4(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1496fb0ae FUN_1496fb0ae body=59 status=ok
// SIG undefined FUN_1496fb0ae(void)

undefined8 FUN_1496fb0ae(longlong *param_1)

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



// FUNCTION 1496fb0fa FUN_1496fb0fa body=40 status=ok
// SIG undefined FUN_1496fb0fa(void)

void FUN_1496fb0fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_1496fb420(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1496fb170 FUN_1496fb170 body=38 status=ok
// SIG undefined FUN_1496fb170(void)

undefined8 FUN_1496fb170(undefined8 param_1,int param_2)

{
  FUN_1496fb420();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fb196 FUN_1496fb196 body=38 status=ok
// SIG undefined FUN_1496fb196(void)

undefined8 FUN_1496fb196(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSelectionSetDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fb1bc FUN_1496fb1bc body=38 status=ok
// SIG undefined FUN_1496fb1bc(void)

undefined8 FUN_1496fb1bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SelectionSet",1);
  return param_2;
}



// FUNCTION 1496fb1e2 FUN_1496fb1e2 body=38 status=ok
// SIG undefined FUN_1496fb1e2(void)

undefined8 FUN_1496fb1e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Dataflow",1);
  return param_2;
}



// FUNCTION 1496fb208 FUN_1496fb208 body=32 status=ok
// SIG undefined FUN_1496fb208(void)

undefined8 FUN_1496fb208(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1496fb228 FUN_1496fb228 body=123 status=ok
// SIG undefined FUN_1496fb228(void)

void FUN_1496fb228(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24318 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24318 = FUN_140002ddd(FUN_14674fa53,uVar1,L"SelectionSetDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24318,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fb2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fb2a4 FUN_1496fb2a4 body=93 status=ok
// SIG undefined FUN_1496fb2a4(void)

void FUN_1496fb2a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24318 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24318 = FUN_140002ddd(FUN_14674fa53,uVar2,L"SelectionSetDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24318,param_1);
  return;
}



// FUNCTION 1496fb302 FUN_1496fb302 body=55 status=ok
// SIG undefined FUN_1496fb302(void)

void FUN_1496fb302(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24318 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24318 = FUN_140002ddd(FUN_14674fa53,uVar1,L"SelectionSetDataflowNode");
  }
  return;
}



// FUNCTION 1496fb33a FUN_1496fb33a body=228 status=ok
// SIG undefined FUN_1496fb33a(void)

ulonglong FUN_1496fb33a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FSelectionSetDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fb3cf;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fb3cf;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fb3cf;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fb3cf:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fb420 FUN_1496fb420 body=65 status=ok
// SIG undefined FUN_1496fb420(void)

void FUN_1496fb420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be142d0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1496fb462 FUN_1496fb462 body=70 status=ok
// SIG undefined FUN_1496fb462(void)

void FUN_1496fb462(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14560;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"SkeletalMesh",1);
  return;
}



// FUNCTION 1496fb4a8 FUN_1496fb4a8 body=70 status=ok
// SIG undefined FUN_1496fb4a8(void)

void FUN_1496fb4a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14560;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"SkeletalMesh",1);
  return;
}



// FUNCTION 1496fb512 FUN_1496fb512 body=63 status=ok
// SIG undefined FUN_1496fb512(void)

undefined1 FUN_1496fb512(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fb8ec(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 1496fb57a FUN_1496fb57a body=59 status=ok
// SIG undefined FUN_1496fb57a(void)

undefined8 FUN_1496fb57a(longlong *param_1)

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



// FUNCTION 1496fb5c6 FUN_1496fb5c6 body=40 status=ok
// SIG undefined FUN_1496fb5c6(void)

void FUN_1496fb5c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1496fb63c FUN_1496fb63c body=38 status=ok
// SIG undefined FUN_1496fb63c(void)

undefined8 FUN_1496fb63c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fb662 FUN_1496fb662 body=38 status=ok
// SIG undefined FUN_1496fb662(void)

undefined8 FUN_1496fb662(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetSkeletalMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fb688 FUN_1496fb688 body=38 status=ok
// SIG undefined FUN_1496fb688(void)

undefined8 FUN_1496fb688(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkeletalMesh",1);
  return param_2;
}



// FUNCTION 1496fb6ae FUN_1496fb6ae body=38 status=ok
// SIG undefined FUN_1496fb6ae(void)

undefined8 FUN_1496fb6ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"General",1);
  return param_2;
}



// FUNCTION 1496fb6d4 FUN_1496fb6d4 body=32 status=ok
// SIG undefined FUN_1496fb6d4(void)

undefined8 FUN_1496fb6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Skeletal Mesh");
  return param_2;
}



// FUNCTION 1496fb6f4 FUN_1496fb6f4 body=123 status=ok
// SIG undefined FUN_1496fb6f4(void)

void FUN_1496fb6f4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24330 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24330 = FUN_140002ddd(FUN_14674fae9,uVar1,L"GetSkeletalMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24330,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fb76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fb770 FUN_1496fb770 body=93 status=ok
// SIG undefined FUN_1496fb770(void)

void FUN_1496fb770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24330 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24330 = FUN_140002ddd(FUN_14674fae9,uVar2,L"GetSkeletalMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24330,param_1);
  return;
}



// FUNCTION 1496fb7ce FUN_1496fb7ce body=55 status=ok
// SIG undefined FUN_1496fb7ce(void)

void FUN_1496fb7ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24330 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24330 = FUN_140002ddd(FUN_14674fae9,uVar1,L"GetSkeletalMeshDataflowNode");
  }
  return;
}



// FUNCTION 1496fb806 FUN_1496fb806 body=228 status=ok
// SIG undefined FUN_1496fb806(void)

ulonglong FUN_1496fb806(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGetSkeletalMeshDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fb89b;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fb89b;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fb89b;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fb89b:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fb8ec FUN_1496fb8ec body=85 status=ok
// SIG undefined FUN_1496fb8ec(void)

longlong FUN_1496fb8ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 1496fb942 FUN_1496fb942 body=70 status=ok
// SIG undefined FUN_1496fb942(void)

void FUN_1496fb942(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14800;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"Skeleton",1);
  return;
}



// FUNCTION 1496fb988 FUN_1496fb988 body=70 status=ok
// SIG undefined FUN_1496fb988(void)

void FUN_1496fb988(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14800;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"Skeleton",1);
  return;
}



// FUNCTION 1496fb9f2 FUN_1496fb9f2 body=63 status=ok
// SIG undefined FUN_1496fb9f2(void)

undefined1 FUN_1496fb9f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fbdcc(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 1496fba5a FUN_1496fba5a body=59 status=ok
// SIG undefined FUN_1496fba5a(void)

undefined8 FUN_1496fba5a(longlong *param_1)

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



// FUNCTION 1496fbaa6 FUN_1496fbaa6 body=40 status=ok
// SIG undefined FUN_1496fbaa6(void)

void FUN_1496fbaa6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1496fbb1c FUN_1496fbb1c body=38 status=ok
// SIG undefined FUN_1496fbb1c(void)

undefined8 FUN_1496fbb1c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fbb42 FUN_1496fbb42 body=38 status=ok
// SIG undefined FUN_1496fbb42(void)

undefined8 FUN_1496fbb42(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetSkeletonDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fbb68 FUN_1496fbb68 body=38 status=ok
// SIG undefined FUN_1496fbb68(void)

undefined8 FUN_1496fbb68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Skeleton",1);
  return param_2;
}



// FUNCTION 1496fbb8e FUN_1496fbb8e body=38 status=ok
// SIG undefined FUN_1496fbb8e(void)

undefined8 FUN_1496fbb8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"General",1);
  return param_2;
}



// FUNCTION 1496fbbb4 FUN_1496fbbb4 body=32 status=ok
// SIG undefined FUN_1496fbbb4(void)

undefined8 FUN_1496fbbb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Skeletal Mesh");
  return param_2;
}



// FUNCTION 1496fbbd4 FUN_1496fbbd4 body=123 status=ok
// SIG undefined FUN_1496fbbd4(void)

void FUN_1496fbbd4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24348 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24348 = FUN_140002ddd(FUN_14674fb7f,uVar1,L"GetSkeletonDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24348,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fbc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fbc50 FUN_1496fbc50 body=93 status=ok
// SIG undefined FUN_1496fbc50(void)

void FUN_1496fbc50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24348 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24348 = FUN_140002ddd(FUN_14674fb7f,uVar2,L"GetSkeletonDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24348,param_1);
  return;
}



// FUNCTION 1496fbcae FUN_1496fbcae body=55 status=ok
// SIG undefined FUN_1496fbcae(void)

void FUN_1496fbcae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24348 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24348 = FUN_140002ddd(FUN_14674fb7f,uVar1,L"GetSkeletonDataflowNode");
  }
  return;
}



// FUNCTION 1496fbce6 FUN_1496fbce6 body=228 status=ok
// SIG undefined FUN_1496fbce6(void)

ulonglong FUN_1496fbce6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGetSkeletonDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fbd7b;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fbd7b;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fbd7b;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fbd7b:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fbdcc FUN_1496fbdcc body=85 status=ok
// SIG undefined FUN_1496fbdcc(void)

longlong FUN_1496fbdcc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 1496fbe22 FUN_1496fbe22 body=79 status=ok
// SIG undefined FUN_1496fbe22(void)

void FUN_1496fbe22(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14a90;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xffffffff;
  FUN_1446ddc76((longlong)param_2 + 0x1ac,"Overrides",1);
  return;
}



// FUNCTION 1496fbe72 FUN_1496fbe72 body=79 status=ok
// SIG undefined FUN_1496fbe72(void)

void FUN_1496fbe72(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14a90;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xffffffff;
  FUN_1446ddc76((longlong)param_2 + 0x1ac,"Overrides",1);
  return;
}



// FUNCTION 1496fbee6 FUN_1496fbee6 body=63 status=ok
// SIG undefined FUN_1496fbee6(void)

undefined1 FUN_1496fbee6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fc2c0(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1496fbf4e FUN_1496fbf4e body=59 status=ok
// SIG undefined FUN_1496fbf4e(void)

undefined8 FUN_1496fbf4e(longlong *param_1)

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



// FUNCTION 1496fbf9a FUN_1496fbf9a body=40 status=ok
// SIG undefined FUN_1496fbf9a(void)

void FUN_1496fbf9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1496fc010 FUN_1496fc010 body=38 status=ok
// SIG undefined FUN_1496fc010(void)

undefined8 FUN_1496fc010(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fc036 FUN_1496fc036 body=38 status=ok
// SIG undefined FUN_1496fc036(void)

undefined8 FUN_1496fc036(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSkeletalMeshBoneDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fc05c FUN_1496fc05c body=38 status=ok
// SIG undefined FUN_1496fc05c(void)

undefined8 FUN_1496fc05c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkeletalMeshBone",1);
  return param_2;
}



// FUNCTION 1496fc082 FUN_1496fc082 body=38 status=ok
// SIG undefined FUN_1496fc082(void)

undefined8 FUN_1496fc082(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"General",1);
  return param_2;
}



// FUNCTION 1496fc0a8 FUN_1496fc0a8 body=32 status=ok
// SIG undefined FUN_1496fc0a8(void)

undefined8 FUN_1496fc0a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Skeletal Mesh");
  return param_2;
}



// FUNCTION 1496fc0c8 FUN_1496fc0c8 body=123 status=ok
// SIG undefined FUN_1496fc0c8(void)

void FUN_1496fc0c8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24360 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24360 = FUN_140002ddd(FUN_14674fc15,uVar1,L"SkeletalMeshBoneDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24360,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fc140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fc144 FUN_1496fc144 body=93 status=ok
// SIG undefined FUN_1496fc144(void)

void FUN_1496fc144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24360 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24360 = FUN_140002ddd(FUN_14674fc15,uVar2,L"SkeletalMeshBoneDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24360,param_1);
  return;
}



// FUNCTION 1496fc1a2 FUN_1496fc1a2 body=55 status=ok
// SIG undefined FUN_1496fc1a2(void)

void FUN_1496fc1a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24360 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24360 = FUN_140002ddd(FUN_14674fc15,uVar1,L"SkeletalMeshBoneDataflowNode");
  }
  return;
}



// FUNCTION 1496fc1da FUN_1496fc1da body=228 status=ok
// SIG undefined FUN_1496fc1da(void)

ulonglong FUN_1496fc1da(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FSkeletalMeshBoneDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fc26f;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fc26f;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fc26f;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fc26f:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fc2c0 FUN_1496fc2c0 body=111 status=ok
// SIG undefined FUN_1496fc2c0(void)

longlong FUN_1496fc2c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  lVar1 = *(longlong *)(param_2 + 0x1a0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1a0);
    }
  }
  *(longlong *)(param_1 + 0x1a0) = lVar1;
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 1496fc330 FUN_1496fc330 body=77 status=ok
// SIG undefined FUN_1496fc330(void)

void FUN_1496fc330(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14d30;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1496fc37e FUN_1496fc37e body=77 status=ok
// SIG undefined FUN_1496fc37e(void)

void FUN_1496fc37e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be14d30;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1496fc3f0 FUN_1496fc3f0 body=63 status=ok
// SIG undefined FUN_1496fc3f0(void)

undefined1 FUN_1496fc3f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fc7ca(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 1496fc458 FUN_1496fc458 body=59 status=ok
// SIG undefined FUN_1496fc458(void)

undefined8 FUN_1496fc458(longlong *param_1)

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



// FUNCTION 1496fc4a4 FUN_1496fc4a4 body=40 status=ok
// SIG undefined FUN_1496fc4a4(void)

void FUN_1496fc4a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1496fc51a FUN_1496fc51a body=38 status=ok
// SIG undefined FUN_1496fc51a(void)

undefined8 FUN_1496fc51a(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fc540 FUN_1496fc540 body=38 status=ok
// SIG undefined FUN_1496fc540(void)

undefined8 FUN_1496fc540(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSkeletalMeshReferenceTransformDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fc566 FUN_1496fc566 body=38 status=ok
// SIG undefined FUN_1496fc566(void)

undefined8 FUN_1496fc566(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SkeletalMeshReferenceTransform",1);
  return param_2;
}



// FUNCTION 1496fc58c FUN_1496fc58c body=38 status=ok
// SIG undefined FUN_1496fc58c(void)

undefined8 FUN_1496fc58c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"General",1);
  return param_2;
}



// FUNCTION 1496fc5b2 FUN_1496fc5b2 body=32 status=ok
// SIG undefined FUN_1496fc5b2(void)

undefined8 FUN_1496fc5b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Skeletal Mesh");
  return param_2;
}



// FUNCTION 1496fc5d2 FUN_1496fc5d2 body=123 status=ok
// SIG undefined FUN_1496fc5d2(void)

void FUN_1496fc5d2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24378 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24378 = FUN_140002ddd(FUN_14674fcab,uVar1,L"SkeletalMeshReferenceTransformDataflowNode")
    ;
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24378,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fc64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fc64e FUN_1496fc64e body=93 status=ok
// SIG undefined FUN_1496fc64e(void)

void FUN_1496fc64e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24378 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24378 = FUN_140002ddd(FUN_14674fcab,uVar2,L"SkeletalMeshReferenceTransformDataflowNode")
    ;
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24378,param_1);
  return;
}



// FUNCTION 1496fc6ac FUN_1496fc6ac body=55 status=ok
// SIG undefined FUN_1496fc6ac(void)

void FUN_1496fc6ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24378 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24378 = FUN_140002ddd(FUN_14674fcab,uVar1,L"SkeletalMeshReferenceTransformDataflowNode")
    ;
  }
  return;
}



// FUNCTION 1496fc6e4 FUN_1496fc6e4 body=228 status=ok
// SIG undefined FUN_1496fc6e4(void)

ulonglong FUN_1496fc6e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FSkeletalMeshReferenceTransformDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fc779;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fc779;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fc779;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fc779:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fc7ca FUN_1496fc7ca body=93 status=ok
// SIG undefined FUN_1496fc7ca(void)

longlong FUN_1496fc7ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  puVar2 = (undefined8 *)(param_2 + 0x1a0);
  puVar3 = (undefined8 *)(param_1 + 0x1a0);
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 1496fc828 FUN_1496fc828 body=70 status=ok
// SIG undefined FUN_1496fc828(void)

void FUN_1496fc828(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be15000;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"StaticMesh",1);
  return;
}



// FUNCTION 1496fc86e FUN_1496fc86e body=70 status=ok
// SIG undefined FUN_1496fc86e(void)

void FUN_1496fc86e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be15000;
  param_2[0x33] = 0;
  FUN_1446ddc76(param_2 + 0x34,"StaticMesh",1);
  return;
}



// FUNCTION 1496fc8d8 FUN_1496fc8d8 body=63 status=ok
// SIG undefined FUN_1496fc8d8(void)

undefined1 FUN_1496fc8d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496fccb2(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 1496fc940 FUN_1496fc940 body=59 status=ok
// SIG undefined FUN_1496fc940(void)

undefined8 FUN_1496fc940(longlong *param_1)

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



// FUNCTION 1496fc98c FUN_1496fc98c body=40 status=ok
// SIG undefined FUN_1496fc98c(void)

void FUN_1496fc98c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1496fca02 FUN_1496fca02 body=38 status=ok
// SIG undefined FUN_1496fca02(void)

undefined8 FUN_1496fca02(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496fca28 FUN_1496fca28 body=38 status=ok
// SIG undefined FUN_1496fca28(void)

undefined8 FUN_1496fca28(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetStaticMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 1496fca4e FUN_1496fca4e body=38 status=ok
// SIG undefined FUN_1496fca4e(void)

undefined8 FUN_1496fca4e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StaticMesh",1);
  return param_2;
}



// FUNCTION 1496fca74 FUN_1496fca74 body=38 status=ok
// SIG undefined FUN_1496fca74(void)

undefined8 FUN_1496fca74(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"General",1);
  return param_2;
}



// FUNCTION 1496fca9a FUN_1496fca9a body=32 status=ok
// SIG undefined FUN_1496fca9a(void)

undefined8 FUN_1496fca9a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"Static Mesh");
  return param_2;
}



// FUNCTION 1496fcaba FUN_1496fcaba body=123 status=ok
// SIG undefined FUN_1496fcaba(void)

void FUN_1496fcaba(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24390 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24390 = FUN_140002ddd(FUN_14674fd41,uVar1,L"GetStaticMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24390,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001496fcb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1496fcb36 FUN_1496fcb36 body=93 status=ok
// SIG undefined FUN_1496fcb36(void)

void FUN_1496fcb36(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24390 == 0) {
    uVar2 = FUN_14105112e();
    DAT_14cc24390 = FUN_140002ddd(FUN_14674fd41,uVar2,L"GetStaticMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24390,param_1);
  return;
}



// FUNCTION 1496fcb94 FUN_1496fcb94 body=55 status=ok
// SIG undefined FUN_1496fcb94(void)

void FUN_1496fcb94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24390 == 0) {
    uVar1 = FUN_14105112e();
    DAT_14cc24390 = FUN_140002ddd(FUN_14674fd41,uVar1,L"GetStaticMeshDataflowNode");
  }
  return;
}



// FUNCTION 1496fcbcc FUN_1496fcbcc body=228 status=ok
// SIG undefined FUN_1496fcbcc(void)

ulonglong FUN_1496fcbcc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGetStaticMeshDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1496fcc61;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1496fcc61;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1496fcc61;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1496fcc61:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1496fccb2 FUN_1496fccb2 body=85 status=ok
// SIG undefined FUN_1496fccb2(void)

longlong FUN_1496fccb2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 1496fcd08 FUN_1496fcd08 body=57 status=ok
// SIG undefined FUN_1496fcd08(void)

void FUN_1496fcd08(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}


