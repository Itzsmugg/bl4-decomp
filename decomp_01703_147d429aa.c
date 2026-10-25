// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d429aa FUN_147d429aa body=68 status=ok
// SIG undefined FUN_147d429aa(void)

float FUN_147d429aa(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  fVar3 = 0.0;
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    iVar2 = (**(code **)(*plVar1 + 0x2b8))(0);
    fVar3 = (float)iVar2 / (*(float *)(param_1 + 0x38) + 1e-08);
  }
  return fVar3;
}



// FUNCTION 147d429ee FUN_147d429ee body=68 status=ok
// SIG undefined FUN_147d429ee(void)

undefined8 FUN_147d429ee(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    iVar2 = (**(code **)(*plVar1 + 0x2b8))();
    uVar3 = FUN_1447c7e44(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x38),(float)iVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 147d42a32 FUN_147d42a32 body=110 status=ok
// SIG undefined FUN_147d42a32(void)

undefined8 FUN_147d42a32(ulonglong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_147d42496(lVar1,uVar2 >> 0x10 ^ uVar2,0,(float)param_2,
                          (float)*(int *)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x40),0);
  }
  return uVar3;
}



// FUNCTION 147d42aa0 FUN_147d42aa0 body=121 status=ok
// SIG undefined FUN_147d42aa0(void)

undefined8 FUN_147d42aa0(ulonglong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x28) + 8) >> 0x1e & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_147d429ee();
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar1 = FUN_147d42496(*(undefined8 *)(param_1 + 0x28),uVar2 >> 0x10 ^ uVar2,
                          *(undefined4 *)(param_1 + 0x38),uVar3,(float)*(int *)(param_1 + 0x3c),
                          *(undefined1 *)(param_1 + 0x40),1);
  }
  return uVar1;
}



// FUNCTION 147d42b1a FUN_147d42b1a body=267 status=ok
// SIG undefined FUN_147d42b1a(void)

void FUN_147d42b1a(ulonglong param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined8 uVar6;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x28) + 8) >> 0x1e & 1) == 0)) {
    uVar6 = FUN_147d429ee();
    fVar5 = (float)uVar6;
    auVar7._8_4_ = extraout_XMM0_Dc;
    auVar7._0_8_ = uVar6;
    auVar7._12_4_ = extraout_XMM0_Dd;
    auVar7 = roundss(in_XMM1,auVar7,9);
    *param_4 = fVar5 - auVar7._0_4_;
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar6 = FUN_147d42496(*(undefined8 *)(param_1 + 0x28),uVar3,*(undefined4 *)(param_1 + 0x38),
                          fVar5,(float)*(int *)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x40),1);
    *param_2 = uVar6;
    iVar2 = *(int *)(param_1 + 0x3c);
    uVar1 = *(undefined1 *)(param_1 + 0x40);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2b8))();
    uVar6 = FUN_147d42496(*(undefined8 *)(param_1 + 0x28),uVar3,*(undefined4 *)(param_1 + 0x38),
                          (float)(((int)fVar5 + 1) % iVar4),(float)iVar2,uVar1,1);
    *param_3 = uVar6;
  }
  return;
}



// FUNCTION 147d42c2c FUN_147d42c2c body=45 status=ok
// SIG undefined FUN_147d42c2c(void)

longlong FUN_147d42c2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145879264(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42c74 FUN_147d42c74 body=41 status=ok
// SIG undefined FUN_147d42c74(void)

void FUN_147d42c74(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Sound/SoundNodeAssetReferencer.h",0x14,
                L"Pure virtual not implemented (%s)",L"USoundNodeAssetReferencer::LoadAsset");
  return;
}



// FUNCTION 147d42c9e FUN_147d42c9e body=41 status=ok
// SIG undefined FUN_147d42c9e(void)

void FUN_147d42c9e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Sound/SoundNodeAssetReferencer.h",0x15,
                L"Pure virtual not implemented (%s)",
                L"USoundNodeAssetReferencer::ClearAssetReferences");
  return;
}



// FUNCTION 147d42d24 FUN_147d42d24 body=45 status=ok
// SIG undefined FUN_147d42d24(void)

longlong FUN_147d42d24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145879056(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42d52 FUN_147d42d52 body=48 status=ok
// SIG undefined FUN_147d42d52(void)

longlong FUN_147d42d52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x170;
  FUN_145879056(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42d92 FUN_147d42d92 body=83 status=ok
// SIG undefined FUN_147d42d92(void)

undefined8 * FUN_147d42d92(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaad080;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42dea FUN_147d42dea body=45 status=ok
// SIG undefined FUN_147d42dea(void)

longlong FUN_147d42dea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145878fa2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42e18 FUN_147d42e18 body=48 status=ok
// SIG undefined FUN_147d42e18(void)

longlong FUN_147d42e18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x170;
  FUN_145878fa2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d42eb4 FUN_147d42eb4 body=59 status=ok
// SIG undefined FUN_147d42eb4(void)

undefined8 FUN_147d42eb4(longlong *param_1)

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



// FUNCTION 147d42f56 FUN_147d42f56 body=77 status=ok
// SIG undefined FUN_147d42f56(void)

void FUN_147d42f56(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f8000003f800000;
  param_2[1] = 0x3f800000469c4000;
  param_2[2] = 0;
  param_2[3] = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0x80 | 0x40;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  FUN_1458d7850(param_2 + 5);
  *(undefined2 *)(param_2 + 0x31) = 0;
  param_2[0x32] = 0;
  return;
}



// FUNCTION 147d42fa4 FUN_147d42fa4 body=77 status=ok
// SIG undefined FUN_147d42fa4(void)

void FUN_147d42fa4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f8000003f800000;
  param_2[1] = 0x3f800000469c4000;
  param_2[2] = 0;
  param_2[3] = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0x80 | 0x40;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  FUN_1458d7850(param_2 + 5);
  *(undefined2 *)(param_2 + 0x31) = 0;
  param_2[0x32] = 0;
  return;
}



// FUNCTION 147d43012 FUN_147d43012 body=63 status=ok
// SIG undefined FUN_147d43012(void)

undefined1 FUN_147d43012(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14795fa90(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 147d4307a FUN_147d4307a body=59 status=ok
// SIG undefined FUN_147d4307a(void)

undefined8 FUN_147d4307a(longlong *param_1)

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



// FUNCTION 147d430c6 FUN_147d430c6 body=41 status=ok
// SIG undefined FUN_147d430c6(void)

void FUN_147d430c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_145821914(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 147d43184 FUN_147d43184 body=100 status=ok
// SIG undefined FUN_147d43184(void)

undefined1 FUN_147d43184(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d43210 FUN_147d43210 body=59 status=ok
// SIG undefined FUN_147d43210(void)

undefined8 FUN_147d43210(longlong *param_1)

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



// FUNCTION 147d432b2 FUN_147d432b2 body=54 status=ok
// SIG undefined FUN_147d432b2(void)

void FUN_147d432b2(longlong *param_1)

{
  FUN_147d432e8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d432e8 FUN_147d432e8 body=128 status=ok
// SIG undefined FUN_147d432e8(void)

void FUN_147d432e8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 147d4343a FUN_147d4343a body=59 status=ok
// SIG undefined FUN_147d4343a(void)

undefined8 FUN_147d4343a(longlong *param_1)

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



// FUNCTION 147d434dc FUN_147d434dc body=52 status=ok
// SIG undefined FUN_147d434dc(void)

void FUN_147d434dc(longlong *param_1)

{
  FUN_147d43510();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d43510 FUN_147d43510 body=89 status=ok
// SIG undefined FUN_147d43510(void)

void FUN_147d43510(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 147d4356a FUN_147d4356a body=52 status=ok
// SIG undefined FUN_147d4356a(void)

void FUN_147d4356a(longlong *param_1)

{
  FUN_147d4359e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d4359e FUN_147d4359e body=349 status=ok
// SIG undefined FUN_147d4359e(void)

void FUN_147d4359e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140201ac2(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d436fc FUN_147d436fc body=52 status=ok
// SIG undefined FUN_147d436fc(void)

void FUN_147d436fc(longlong *param_1)

{
  FUN_147d43730();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d43730 FUN_147d43730 body=349 status=ok
// SIG undefined FUN_147d43730(void)

void FUN_147d43730(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140201ac2(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d438fa FUN_147d438fa body=59 status=ok
// SIG undefined FUN_147d438fa(void)

undefined8 FUN_147d438fa(longlong *param_1)

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



// FUNCTION 147d4399c FUN_147d4399c body=122 status=ok
// SIG undefined FUN_147d4399c(void)

void FUN_147d4399c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0xa0 + lVar1);
  FUN_145aa5488(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xa0),(longlong)iVar3 * 0xa0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147d43a7e FUN_147d43a7e body=59 status=ok
// SIG undefined FUN_147d43a7e(void)

undefined8 FUN_147d43a7e(longlong *param_1)

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



// FUNCTION 147d43b1e FUN_147d43b1e body=29 status=ok
// SIG undefined FUN_147d43b1e(void)

undefined8 FUN_147d43b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d43c36 FUN_147d43c36 body=59 status=ok
// SIG undefined FUN_147d43c36(void)

undefined8 FUN_147d43c36(longlong *param_1)

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



// FUNCTION 147d43d40 FUN_147d43d40 body=111 status=ok
// SIG undefined FUN_147d43d40(void)

undefined1 FUN_147d43d40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      *(undefined4 *)(plVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d43dd8 FUN_147d43dd8 body=59 status=ok
// SIG undefined FUN_147d43dd8(void)

undefined8 FUN_147d43dd8(longlong *param_1)

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



// FUNCTION 147d43ee2 FUN_147d43ee2 body=46 status=ok
// SIG undefined FUN_147d43ee2(void)

void FUN_147d43ee2(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_2 + 8);
  return;
}



// FUNCTION 147d43f26 FUN_147d43f26 body=77 status=ok
// SIG undefined FUN_147d43f26(void)

undefined1 FUN_147d43f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_1477ce3e2();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d43f9c FUN_147d43f9c body=59 status=ok
// SIG undefined FUN_147d43f9c(void)

undefined8 FUN_147d43f9c(longlong *param_1)

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



// FUNCTION 147d43fe2 FUN_147d43fe2 body=54 status=ok
// SIG undefined FUN_147d43fe2(void)

void FUN_147d43fe2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_14117d2fe(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147d44096 FUN_147d44096 body=63 status=ok
// SIG undefined FUN_147d44096(void)

undefined1 FUN_147d44096(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477e8570(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 147d440fe FUN_147d440fe body=59 status=ok
// SIG undefined FUN_147d440fe(void)

undefined8 FUN_147d440fe(longlong *param_1)

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



// FUNCTION 147d4414a FUN_147d4414a body=40 status=ok
// SIG undefined FUN_147d4414a(void)

void FUN_147d4414a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_145821914(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 147d441c2 FUN_147d441c2 body=32 status=ok
// SIG undefined FUN_147d441c2(void)

void FUN_147d441c2(undefined8 param_1,longlong param_2)

{
  FUN_1458d7850(param_2);
  *(undefined4 *)(param_2 + 0x160) = 0x1010101;
  return;
}



// FUNCTION 147d441e2 FUN_147d441e2 body=32 status=ok
// SIG undefined FUN_147d441e2(void)

void FUN_147d441e2(undefined8 param_1,longlong param_2)

{
  FUN_1458d7850(param_2);
  *(undefined4 *)(param_2 + 0x160) = 0x1010101;
  return;
}



// FUNCTION 147d44220 FUN_147d44220 body=74 status=ok
// SIG undefined FUN_147d44220(void)

undefined8 FUN_147d44220(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477e8570(param_2,param_3);
    *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_3 + 0x160);
    param_2 = param_2 + 0x168;
    param_3 = param_3 + 0x168;
  }
  return 1;
}



// FUNCTION 147d44292 FUN_147d44292 body=59 status=ok
// SIG undefined FUN_147d44292(void)

undefined8 FUN_147d44292(longlong *param_1)

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



// FUNCTION 147d442de FUN_147d442de body=40 status=ok
// SIG undefined FUN_147d442de(void)

void FUN_147d442de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_145821914(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 147d44356 FUN_147d44356 body=77 status=ok
// SIG undefined FUN_147d44356(void)

undefined8 * FUN_147d44356(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147d443a4(param_1,iVar1,0);
    FUN_147d44406(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147d443a4 FUN_147d443a4 body=98 status=ok
// SIG undefined FUN_147d443a4(void)

void FUN_147d443a4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d44406 FUN_147d44406 body=96 status=ok
// SIG undefined FUN_147d44406(void)

void FUN_147d44406(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d444e8 FUN_147d444e8 body=59 status=ok
// SIG undefined FUN_147d444e8(void)

undefined8 FUN_147d444e8(longlong *param_1)

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



// FUNCTION 147d44589 FUN_147d44589 body=59 status=ok
// SIG undefined FUN_147d44589(void)

void FUN_147d44589(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147d445c4(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 147d445c4 FUN_147d445c4 body=52 status=ok
// SIG undefined FUN_147d445c4(void)

void FUN_147d445c4(longlong *param_1)

{
  FUN_147d445f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d445f8 FUN_147d445f8 body=89 status=ok
// SIG undefined FUN_147d445f8(void)

void FUN_147d445f8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 147d44686 FUN_147d44686 body=54 status=ok
// SIG undefined FUN_147d44686(void)

undefined1 FUN_147d44686(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d4479e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147d446e4 FUN_147d446e4 body=59 status=ok
// SIG undefined FUN_147d446e4(void)

undefined8 FUN_147d446e4(longlong *param_1)

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



// FUNCTION 147d4472a FUN_147d4472a body=37 status=ok
// SIG undefined FUN_147d4472a(void)

void FUN_147d4472a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147d4479e FUN_147d4479e body=79 status=ok
// SIG undefined FUN_147d4479e(void)

undefined8 * FUN_147d4479e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d447ee(param_1,iVar1);
      FUN_147d44850(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d447ee FUN_147d447ee body=98 status=ok
// SIG undefined FUN_147d447ee(void)

void FUN_147d447ee(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d44850 FUN_147d44850 body=82 status=ok
// SIG undefined FUN_147d44850(void)

void FUN_147d44850(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147d44918 FUN_147d44918 body=59 status=ok
// SIG undefined FUN_147d44918(void)

undefined8 FUN_147d44918(longlong *param_1)

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



// FUNCTION 147d44a0e FUN_147d44a0e body=64 status=ok
// SIG undefined FUN_147d44a0e(void)

void FUN_147d44a0e(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x28) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x28) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x30);
  return;
}



// FUNCTION 147d44a64 FUN_147d44a64 body=63 status=ok
// SIG undefined FUN_147d44a64(void)

undefined1 FUN_147d44a64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478a6ac6(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 147d44acc FUN_147d44acc body=59 status=ok
// SIG undefined FUN_147d44acc(void)

undefined8 FUN_147d44acc(longlong *param_1)

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



// FUNCTION 147d44b70 FUN_147d44b70 body=78 status=ok
// SIG undefined FUN_147d44b70(void)

void FUN_147d44b70(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined **)(param_1 + 0x28) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 147d44bbe FUN_147d44bbe body=77 status=ok
// SIG undefined FUN_147d44bbe(void)

void FUN_147d44bbe(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0xb8);
  *param_2 = 2;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x1c) = 0x42c800003f800000;
  *(undefined4 *)(param_2 + 0x24) = 0x447a0000;
  FUN_14109baa4(param_2 + 0x28);
  param_2[0xb0] = 0;
  return;
}



// FUNCTION 147d44c0c FUN_147d44c0c body=67 status=ok
// SIG undefined FUN_147d44c0c(void)

void FUN_147d44c0c(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 2;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x20) = 0x42c80000;
  *(undefined4 *)(param_2 + 0x24) = 0x447a0000;
  FUN_14109baa4(param_2 + 0x28);
  param_2[0xb0] = 0;
  return;
}



// FUNCTION 147d44c50 FUN_147d44c50 body=64 status=ok
// SIG undefined FUN_147d44c50(void)

void FUN_147d44c50(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x28) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x28) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x30);
  return;
}



// FUNCTION 147d44ca6 FUN_147d44ca6 body=74 status=ok
// SIG undefined FUN_147d44ca6(void)

undefined1 FUN_147d44ca6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478a6ac6(param_2,param_3);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 147d44d18 FUN_147d44d18 body=59 status=ok
// SIG undefined FUN_147d44d18(void)

undefined8 FUN_147d44d18(longlong *param_1)

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



// FUNCTION 147d44dbc FUN_147d44dbc body=78 status=ok
// SIG undefined FUN_147d44dbc(void)

void FUN_147d44dbc(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined **)(param_1 + 0x28) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 147d44e0a FUN_147d44e0a body=127 status=ok
// SIG undefined FUN_147d44e0a(void)

void FUN_147d44e0a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[1];
  if (-1 < iVar3) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      FUN_1402191ca(param_2);
    }
    if (0 < (int)param_1[1]) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        lVar2 = *param_1;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < (int)param_1[1]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147d44e8a FUN_147d44e8a body=79 status=ok
// SIG undefined FUN_147d44e8a(void)

undefined8 * FUN_147d44e8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d443a4(param_1,iVar1);
      FUN_147d44406(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d44eda FUN_147d44eda body=89 status=ok
// SIG undefined FUN_147d44eda(void)

undefined8 * FUN_147d44eda(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  size_t _Size;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    _Size = param_2[1];
    param_1[1] = _Size;
    if (_Size == 0 && param_1[2] == 0) {
      param_1[2] = 0;
    }
    else {
      FUN_145ad9f5c(param_1,_Size);
      if (_Size != 0) {
        memcpy((void *)*param_1,_Src,_Size);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d44f34 FUN_147d44f34 body=115 status=ok
// SIG undefined FUN_147d44f34(void)

void FUN_147d44f34(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0xa0 + lVar1);
  FUN_147046490(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xa0),(longlong)iVar3 * 0xa0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147d44fa8 FUN_147d44fa8 body=131 status=ok
// SIG undefined FUN_147d44fa8(void)

longlong FUN_147d44fa8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147d4502b();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147d45446(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147d4502b FUN_147d4502b body=651 status=ok
// SIG undefined FUN_147d4502b(void)

longlong * FUN_147d4502b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x150))(param_1,lVar5 + (longlong)iVar8 * 0x18);
        FUN_147d4539e(param_1,lVar5 + (longlong)iVar8 * 0x18 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_147d432e8(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_147d452b8(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1);
        FUN_147d4539e(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d452b8 FUN_147d452b8 body=230 status=ok
// SIG undefined FUN_147d452b8(void)

int * FUN_147d452b8(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147d4539e FUN_147d4539e body=168 status=ok
// SIG undefined FUN_147d4539e(void)

longlong * FUN_147d4539e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147d45446 FUN_147d45446 body=474 status=ok
// SIG undefined FUN_147d45446(void)

void FUN_147d45446(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147d45622 FUN_147d45622 body=293 status=ok
// SIG undefined FUN_147d45622(void)

undefined4 * FUN_147d45622(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147d45748(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[1] = *puVar1;
  local_40[2] = uVar6;
  local_40[3] = uVar2;
  local_40[4] = uVar3;
  local_40[5] = puVar1[4];
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_147d4582e(param_1,uVar7,local_40,&local_4c);
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
      local_40[7] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_147d4592a(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d45748 FUN_147d45748 body=229 status=ok
// SIG undefined FUN_147d45748(void)

int * FUN_147d45748(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147d4582e FUN_147d4582e body=137 status=ok
// SIG undefined FUN_147d4582e(void)

undefined8 FUN_147d4582e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d458b8(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d458b8 FUN_147d458b8 body=114 status=ok
// SIG undefined FUN_147d458b8(void)

void FUN_147d458b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147d4592a FUN_147d4592a body=422 status=ok
// SIG undefined FUN_147d4592a(void)

void FUN_147d4592a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 147d45ad2 FUN_147d45ad2 body=132 status=ok
// SIG undefined FUN_147d45ad2(void)

void FUN_147d45ad2(longlong param_1,int param_2)

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



// FUNCTION 147d45b58 FUN_147d45b58 body=291 status=ok
// SIG undefined FUN_147d45b58(void)

undefined4 * FUN_147d45b58(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d45c7c(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1401fe838(local_40 + 2,uVar1);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147d45d6a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x17] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d45e9a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d45c7c FUN_147d45c7c body=238 status=ok
// SIG undefined FUN_147d45c7c(void)

int * FUN_147d45c7c(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147d45d6a FUN_147d45d6a body=182 status=ok
// SIG undefined FUN_147d45d6a(void)

undefined8 FUN_147d45d6a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140201ac2((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147d45e20(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d45e20 FUN_147d45e20 body=122 status=ok
// SIG undefined FUN_147d45e20(void)

void FUN_147d45e20(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 147d45e9a FUN_147d45e9a body=423 status=ok
// SIG undefined FUN_147d45e9a(void)

void FUN_147d45e9a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 147d46042 FUN_147d46042 body=291 status=ok
// SIG undefined FUN_147d46042(void)

undefined4 * FUN_147d46042(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d46166(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1401fe838(local_40 + 2,uVar1);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147d46254(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x17] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d46384(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d46166 FUN_147d46166 body=238 status=ok
// SIG undefined FUN_147d46166(void)

int * FUN_147d46166(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147d46254 FUN_147d46254 body=182 status=ok
// SIG undefined FUN_147d46254(void)

undefined8 FUN_147d46254(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140201ac2((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147d4630a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d4630a FUN_147d4630a body=122 status=ok
// SIG undefined FUN_147d4630a(void)

void FUN_147d4630a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 147d46384 FUN_147d46384 body=423 status=ok
// SIG undefined FUN_147d46384(void)

void FUN_147d46384(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 147d4652c FUN_147d4652c body=287 status=ok
// SIG undefined FUN_147d4652c(void)

undefined4 * FUN_147d4652c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d4664c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147d46732(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d46824(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4664c FUN_147d4664c body=230 status=ok
// SIG undefined FUN_147d4664c(void)

int * FUN_147d4664c(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147d46732 FUN_147d46732 body=128 status=ok
// SIG undefined FUN_147d46732(void)

undefined8 FUN_147d46732(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d467b2(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d467b2 FUN_147d467b2 body=114 status=ok
// SIG undefined FUN_147d467b2(void)

void FUN_147d467b2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 147d46824 FUN_147d46824 body=419 status=ok
// SIG undefined FUN_147d46824(void)

void FUN_147d46824(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147d469c8 FUN_147d469c8 body=81 status=ok
// SIG undefined FUN_147d469c8(void)

void FUN_147d469c8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147d46a1a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d46a1a FUN_147d46a1a body=87 status=ok
// SIG undefined FUN_147d46a1a(void)

void FUN_147d46a1a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147d467b2();
  return;
}



// FUNCTION 147d46a72 FUN_147d46a72 body=85 status=ok
// SIG undefined FUN_147d46a72(void)

void FUN_147d46a72(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_147d46ac8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d46ac8 FUN_147d46ac8 body=95 status=ok
// SIG undefined FUN_147d46ac8(void)

void FUN_147d46ac8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147d46b28();
  return;
}



// FUNCTION 147d46b28 FUN_147d46b28 body=82 status=ok
// SIG undefined FUN_147d46b28(void)

void FUN_147d46b28(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(lVar1 + lVar2 + 8);
  FUN_147d45e20(param_1,param_2);
  return;
}



// FUNCTION 147d46b7a FUN_147d46b7a body=85 status=ok
// SIG undefined FUN_147d46b7a(void)

void FUN_147d46b7a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_147d46bd0(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d46bd0 FUN_147d46bd0 body=95 status=ok
// SIG undefined FUN_147d46bd0(void)

void FUN_147d46bd0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147d46c30();
  return;
}



// FUNCTION 147d46c30 FUN_147d46c30 body=82 status=ok
// SIG undefined FUN_147d46c30(void)

void FUN_147d46c30(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(lVar1 + lVar2 + 8);
  FUN_147d4630a(param_1,param_2);
  return;
}



// FUNCTION 147d46c82 FUN_147d46c82 body=29 status=ok
// SIG undefined FUN_147d46c82(void)

undefined8 FUN_147d46c82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d46cba FUN_147d46cba body=29 status=ok
// SIG undefined FUN_147d46cba(void)

bool FUN_147d46cba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d46cd8 FUN_147d46cd8 body=26 status=ok
// SIG undefined FUN_147d46cd8(void)

bool FUN_147d46cd8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d46cf2 FUN_147d46cf2 body=24 status=ok
// SIG undefined FUN_147d46cf2(void)

bool FUN_147d46cf2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d46d0a FUN_147d46d0a body=101 status=ok
// SIG undefined FUN_147d46d0a(void)

void FUN_147d46d0a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aaafd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d46d70 FUN_147d46d70 body=101 status=ok
// SIG undefined FUN_147d46d70(void)

void FUN_147d46d70(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aaafd80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d46dd6 FUN_147d46dd6 body=134 status=ok
// SIG undefined FUN_147d46dd6(void)

void FUN_147d46dd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aaafd80;
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
                    /* WARNING: Could not recover jumptable at 0x000147d46e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d46e5c FUN_147d46e5c body=39 status=ok
// SIG undefined FUN_147d46e5c(void)

void FUN_147d46e5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147d46e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147d46e84 FUN_147d46e84 body=134 status=ok
// SIG undefined FUN_147d46e84(void)

bool FUN_147d46e84(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d46f0c FUN_147d46f0c body=132 status=ok
// SIG undefined FUN_147d46f0c(void)

void FUN_147d46f0c(longlong param_1,int param_2)

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



// FUNCTION 147d46f91 FUN_147d46f91 body=23 status=ok
// SIG undefined FUN_147d46f91(void)

void FUN_147d46f91(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147d46fa8 FUN_147d46fa8 body=107 status=ok
// SIG undefined FUN_147d46fa8(void)

void FUN_147d46fa8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d47014(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 147d47014 FUN_147d47014 body=132 status=ok
// SIG undefined FUN_147d47014(void)

void FUN_147d47014(longlong param_1,int param_2)

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



// FUNCTION 147d47099 FUN_147d47099 body=138 status=ok
// SIG undefined FUN_147d47099(void)

undefined8 * FUN_147d47099(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14aaafe30;
  FUN_147045360(puVar1 + 2,param_1 + 0x10);
  puVar1[2] = &PTR_FUN_14aaafe50;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return puVar1;
}



// FUNCTION 147d4712e FUN_147d4712e body=29 status=ok
// SIG undefined FUN_147d4712e(void)

undefined8 FUN_147d4712e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d4714c FUN_147d4714c body=38 status=ok
// SIG undefined FUN_147d4714c(void)

undefined8 FUN_147d4714c(undefined8 param_1,int param_2)

{
  FUN_147d47172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d47172 FUN_147d47172 body=92 status=ok
// SIG undefined FUN_147d47172(void)

void FUN_147d47172(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaafe50;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_147d471ce(param_1 + 6);
  FUN_145aa5488(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_147045396(param_1);
  return;
}



// FUNCTION 147d471ce FUN_147d471ce body=52 status=ok
// SIG undefined FUN_147d471ce(void)

void FUN_147d471ce(longlong *param_1)

{
  FUN_147d47202();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d47202 FUN_147d47202 body=343 status=ok
// SIG undefined FUN_147d47202(void)

void FUN_147d47202(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4735a FUN_147d4735a body=132 status=ok
// SIG undefined FUN_147d4735a(void)

void FUN_147d4735a(longlong param_1,int param_2)

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



// FUNCTION 147d473e0 FUN_147d473e0 body=113 status=ok
// SIG undefined FUN_147d473e0(void)

void FUN_147d473e0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_14583c1b2(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147d47452 FUN_147d47452 body=62 status=ok
// SIG undefined FUN_147d47452(void)

void FUN_147d47452(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d47490(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147d47490 FUN_147d47490 body=93 status=ok
// SIG undefined FUN_147d47490(void)

ulonglong FUN_147d47490(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147d474ee FUN_147d474ee body=89 status=ok
// SIG undefined FUN_147d474ee(void)

void FUN_147d474ee(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_147d47548();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_147d47638(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 147d47548 FUN_147d47548 body=240 status=ok
// SIG undefined FUN_147d47548(void)

ulonglong FUN_147d47548(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_147d47596:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_147d47596;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_147d475dc:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_147d475dc;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 147d47638 FUN_147d47638 body=132 status=ok
// SIG undefined FUN_147d47638(void)

void FUN_147d47638(longlong param_1,int param_2)

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



// FUNCTION 147d476e6 FUN_147d476e6 body=48 status=ok
// SIG undefined FUN_147d476e6(void)

void FUN_147d476e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147d47716 FUN_147d47716 body=113 status=ok
// SIG undefined FUN_147d47716(void)

void FUN_147d47716(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147d47788 FUN_147d47788 body=111 status=ok
// SIG undefined FUN_147d47788(void)

longlong * FUN_147d47788(longlong param_1,longlong *param_2)

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
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar2;
    param_2[2] = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    uVar3 = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = *(undefined4 *)(lVar1 + 0x34);
    uVar5 = *(undefined4 *)(lVar1 + 0x38);
    uVar6 = *(undefined4 *)(lVar1 + 0x3c);
    uVar7 = *(undefined4 *)(lVar1 + 0x44);
    uVar8 = *(undefined4 *)(lVar1 + 0x48);
    uVar9 = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 7) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar9;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 5) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined1 *)(param_2 + 8) = 1;
    FUN_1400020a8(*(undefined8 *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = lVar1;
  }
  return param_2;
}



// FUNCTION 147d477f8 FUN_147d477f8 body=305 status=ok
// SIG undefined FUN_147d477f8(void)

undefined4 *
FUN_147d477f8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147d4792a(param_1,local_50);
  uVar1 = param_3[1];
  *local_48 = *(uint *)*param_3;
  FUN_147d47ad8(local_48 + 2,uVar1);
  local_48[10] = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = *local_48;
  local_68 = param_4;
  cVar3 = FUN_147d47a18(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[0xb] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[10] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d47bc2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4792a FUN_147d4792a body=238 status=ok
// SIG undefined FUN_147d4792a(void)

int * FUN_147d4792a(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147d47a18 FUN_147d47a18 body=192 status=ok
// SIG undefined FUN_147d47a18(void)

void FUN_147d47a18(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(param_3 + 8);
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d47b48(param_1,*param_4);
          *param_4 = iVar12;
          uVar10 = 1;
          goto LAB_147d47a8d;
        }
        iVar12 = piVar1[10];
      } while (iVar12 != -1);
    }
  }
  uVar10 = 0;
LAB_147d47a8d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 147d47ad8 FUN_147d47ad8 body=111 status=ok
// SIG undefined FUN_147d47ad8(void)

undefined1 * FUN_147d47ad8(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 147d47b48 FUN_147d47b48 body=122 status=ok
// SIG undefined FUN_147d47b48(void)

void FUN_147d47b48(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147d47bc2 FUN_147d47bc2 body=423 status=ok
// SIG undefined FUN_147d47bc2(void)

void FUN_147d47bc2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 147d47d6a FUN_147d47d6a body=339 status=ok
// SIG undefined FUN_147d47d6a(void)

undefined4 *
FUN_147d47d6a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147d4792a(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined1 *)(local_48 + 2) = *puVar1;
  *(undefined8 *)(local_48 + 4) = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = 0;
  local_48[6] = *(uint *)(puVar1 + 0x10);
  local_48[7] = *(uint *)(puVar1 + 0x14);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(local_48 + 8) = *(undefined8 *)(puVar1 + 0x18);
  local_48[10] = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = *local_48;
  local_68 = param_4;
  cVar3 = FUN_147d47a18(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[0xb] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[10] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d47bc2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d47ebe FUN_147d47ebe body=328 status=ok
// SIG undefined FUN_147d47ebe(void)

void FUN_147d47ebe(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x104 + (longlong)iVar4 * 0x110) * 4) =
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



// FUNCTION 147d48008 FUN_147d48008 body=278 status=ok
// SIG undefined FUN_147d48008(void)

void FUN_147d48008(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1470451b4((longlong)iStack_44 * 0x110 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403c5a5e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d48120 FUN_147d48120 body=322 status=ok
// SIG undefined FUN_147d48120(void)

undefined4 * FUN_147d48120(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d48264(param_1,local_48);
  FUN_147044e66(local_40,param_3);
  *(undefined4 *)(local_40 + 0x100) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *(uint *)(local_40 + 0xe0);
  uVar7 = (uVar7 >> 2) + uVar7 * 0x40 + *(int *)(local_40 + 0xe8) + 0x9e3779b9 ^ uVar7;
  cVar2 = FUN_147d48350(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)(local_40 + 0x104) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x100) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147d48484(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d48264 FUN_147d48264 body=235 status=ok
// SIG undefined FUN_147d48264(void)

int * FUN_147d48264(longlong *param_1,int *param_2)

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
      FUN_1417456d2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x110);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x110) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x110 + *param_1;
  return param_2;
}



// FUNCTION 147d48350 FUN_147d48350 body=185 status=ok
// SIG undefined FUN_147d48350(void)

undefined8 FUN_147d48350(longlong *param_1,uint param_2,void *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x110;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + 0xe0 + lVar4) == *(int *)((longlong)param_3 + 0xe0)) &&
           (*(int *)(lVar1 + 0xe8 + lVar4) == *(int *)((longlong)param_3 + 0xe8))) {
          FUN_1470451b4(_Dst);
          memmove(_Dst,param_3,0x100);
          FUN_147d4840a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x100);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d4840a FUN_147d4840a body=122 status=ok
// SIG undefined FUN_147d4840a(void)

void FUN_147d4840a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d48484 FUN_147d48484 body=474 status=ok
// SIG undefined FUN_147d48484(void)

void FUN_147d48484(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x110;
        uVar2 = *(uint *)(lVar3 + 0xe0 + lVar7);
        uVar10 = (longlong)
                 (int)(uVar2 * 0x40 + *(int *)(lVar3 + 0xe8 + lVar7) + (uVar2 >> 2) + 0x9e3779b9 ^
                      uVar2) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x104 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x100 + lVar7) =
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



// FUNCTION 147d4865f FUN_147d4865f body=52 status=ok
// SIG undefined FUN_147d4865f(void)

void FUN_147d4865f(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147d48694 FUN_147d48694 body=132 status=ok
// SIG undefined FUN_147d48694(void)

void FUN_147d48694(longlong param_1,int param_2)

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



// FUNCTION 147d4871a FUN_147d4871a body=382 status=ok
// SIG undefined FUN_147d4871a(void)

longlong * FUN_147d4871a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_1470451b4((longlong)iVar6 * 0x110 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4889a FUN_147d4889a body=221 status=ok
// SIG undefined FUN_147d4889a(void)

undefined8 * FUN_147d4889a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1477cb0f2(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1417456d2(param_1);
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
          FUN_147044d4e(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0x40) = *(undefined8 *)(puVar4 + 0x40);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x44;
        puVar6 = puVar6 + 0x44;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147d48978 FUN_147d48978 body=132 status=ok
// SIG undefined FUN_147d48978(void)

void FUN_147d48978(longlong param_1,int param_2)

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



// FUNCTION 147d489fe FUN_147d489fe body=62 status=ok
// SIG undefined FUN_147d489fe(void)

void FUN_147d489fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d48a3c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d48a3c FUN_147d48a3c body=93 status=ok
// SIG undefined FUN_147d48a3c(void)

ulonglong FUN_147d48a3c(uint param_1,uint param_2)

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



// FUNCTION 147d48a9a FUN_147d48a9a body=147 status=ok
// SIG undefined FUN_147d48a9a(void)

void FUN_147d48a9a(longlong param_1,int param_2)

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



// FUNCTION 147d48b2e FUN_147d48b2e body=62 status=ok
// SIG undefined FUN_147d48b2e(void)

void FUN_147d48b2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d48b6c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 147d48b6c FUN_147d48b6c body=112 status=ok
// SIG undefined FUN_147d48b6c(void)

ulonglong FUN_147d48b6c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d48ba6;
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
LAB_147d48ba6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d48bdc FUN_147d48bdc body=132 status=ok
// SIG undefined FUN_147d48bdc(void)

void FUN_147d48bdc(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147d48c60(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d48c60 FUN_147d48c60 body=87 status=ok
// SIG undefined FUN_147d48c60(void)

void FUN_147d48c60(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147d48cb8();
  return;
}



// FUNCTION 147d48cb8 FUN_147d48cb8 body=114 status=ok
// SIG undefined FUN_147d48cb8(void)

void FUN_147d48cb8(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 147d48d2a FUN_147d48d2a body=236 status=ok
// SIG undefined FUN_147d48d2a(void)

void FUN_147d48d2a(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  if (DAT_14cb08ad8 != DAT_14cb08b04) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14cb08b08;
    if (DAT_14cb08b10 != (undefined *)0x0) {
      puVar5 = DAT_14cb08b10;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14cb08b18 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cb08ad0 + 0x18)) {
      if (*(ulonglong *)(DAT_14cb08ad0 + (longlong)iVar1 * 0x20) == param_1) {
        puVar5 = &DAT_14cb08b08;
        if (DAT_14cb08b10 != (undefined *)0x0) {
          puVar5 = DAT_14cb08b10;
        }
        lVar6 = (longlong)*(int *)(DAT_14cb08ad0 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar5 + lVar6 * 4);
        if (iVar4 == iVar1) {
          puVar3 = (undefined4 *)(puVar5 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14cb08ad0 + 0x18 + lVar6 * 0x20);
          } while (iVar4 != iVar1);
          puVar3 = (undefined4 *)(DAT_14cb08ad0 + lVar6 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14cb08ad0 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_147d48e16();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d48e16 FUN_147d48e16 body=66 status=ok
// SIG undefined FUN_147d48e16(void)

void FUN_147d48e16(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cb08ad0;
  lVar2 = (longlong)param_1 * 0x20;
  FUN_147d44589(*(undefined8 *)(DAT_14cb08ad0 + 8 + lVar2),
                *(undefined4 *)(DAT_14cb08ad0 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_147d48e58(param_1);
  return;
}



// FUNCTION 147d48e58 FUN_147d48e58 body=128 status=ok
// SIG undefined FUN_147d48e58(void)

void FUN_147d48e58(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb08ad0;
  if (DAT_14cb08b04 != 0) {
    *(int *)(DAT_14cb08ad0 + (longlong)DAT_14cb08b00 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb08b04) {
    iVar4 = DAT_14cb08b00;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb08b04 = DAT_14cb08b04 + 1;
  puVar3 = &DAT_14cb08ae0;
  if (DAT_14cb08af0 != (undefined *)0x0) {
    puVar3 = DAT_14cb08af0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb08b00 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147d48ed8 FUN_147d48ed8 body=346 status=ok
// SIG undefined FUN_147d48ed8(void)

undefined4 * FUN_147d48ed8(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d49034(local_40);
  *local_38 = *(ulonglong *)*param_2;
  local_38[1] = 0;
  local_38[2] = 0;
  FUN_147d44589(0,0);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(*local_38 >> 0x14) & 0xffff ^ (uint)(*local_38 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147d49142(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14cb08ad8 - DAT_14cb08b04;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb08b18)) {
      uVar4 = DAT_14cb08b18 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x1c) = uVar4;
      puVar6 = DAT_14cb08b10;
      if (DAT_14cb08b10 == (undefined *)0x0) {
        puVar6 = &DAT_14cb08b08;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb08b18 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14cb08b10;
      if (DAT_14cb08b10 == (undefined *)0x0) {
        puVar6 = &DAT_14cb08b08;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb08b18 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14cb08b18 = iVar8;
      FUN_147d491fc();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d49034 FUN_147d49034 body=269 status=ok
// SIG undefined FUN_147d49034(void)

int * FUN_147d49034(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb08b00;
  iVar4 = DAT_14cb08ad8;
  if (DAT_14cb08b04 == 0) {
    iVar2 = DAT_14cb08ad8 + 1;
    bVar7 = DAT_14cb08adc == DAT_14cb08ad8;
    DAT_14cb08ad8 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb08ad0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb08ae0,1);
    puVar3 = DAT_14cb08af0;
    if (DAT_14cb08af0 == (undefined *)0x0) {
      puVar3 = &DAT_14cb08ae0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb08b00;
    DAT_14cb08b00 = *(int *)(DAT_14cb08ad0 + 4 + lVar6 * 0x20);
    DAT_14cb08b04 = DAT_14cb08b04 + -1;
    iVar4 = iVar2;
    if (DAT_14cb08b04 != 0) {
      *(undefined4 *)(DAT_14cb08ad0 + (longlong)DAT_14cb08b00 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb08ae0;
  if (DAT_14cb08af0 != (undefined *)0x0) {
    puVar3 = DAT_14cb08af0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb08ad0;
  return param_1;
}



// FUNCTION 147d49142 FUN_147d49142 body=185 status=ok
// SIG undefined FUN_147d49142(void)

undefined8 FUN_147d49142(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14cb08ad8 - DAT_14cb08b04 != 1) && (DAT_14cb08ad8 != DAT_14cb08b04)) {
    puVar6 = &DAT_14cb08b08;
    if (DAT_14cb08b10 != (undefined *)0x0) {
      puVar6 = DAT_14cb08b10;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14cb08b18 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cb08ad0 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(DAT_14cb08ad0 + (longlong)iVar7 * 0x20) == *param_2) {
          FUN_147d44589(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147d48e58(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d491fc FUN_147d491fc body=518 status=ok
// SIG undefined FUN_147d491fc(void)

void FUN_147d491fc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08b10 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb08b10,0,0,4);
  }
  uVar7 = DAT_14cb08b18;
  uVar2 = local_50;
  if (DAT_14cb08b18 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb08b08,0,DAT_14cb08b18,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cb08b10;
        if (DAT_14cb08b10 == (undefined *)0x0) {
          puVar4 = &DAT_14cb08b08;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cb08b18 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb08ae0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb08af8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb08ad0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb08b18 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar5) = iVar8;
        puVar4 = DAT_14cb08b10;
        if (DAT_14cb08b10 == (undefined *)0x0) {
          puVar4 = &DAT_14cb08b08;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14cb08b18 - 1U & uVar9) * 4);
        puVar4 = DAT_14cb08b10;
        if (DAT_14cb08b10 == (undefined *)0x0) {
          puVar4 = &DAT_14cb08b08;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14cb08b18 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d49403 FUN_147d49403 body=56 status=ok
// SIG undefined FUN_147d49403(void)

void FUN_147d49403(longlong param_1,int param_2)

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



// FUNCTION 147d4943c FUN_147d4943c body=147 status=ok
// SIG undefined FUN_147d4943c(void)

void FUN_147d4943c(longlong param_1,int param_2)

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



// FUNCTION 147d494d0 FUN_147d494d0 body=101 status=ok
// SIG undefined FUN_147d494d0(void)

void FUN_147d494d0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_147d44589(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147d49536 FUN_147d49536 body=62 status=ok
// SIG undefined FUN_147d49536(void)

void FUN_147d49536(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d49574(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 147d49574 FUN_147d49574 body=112 status=ok
// SIG undefined FUN_147d49574(void)

ulonglong FUN_147d49574(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d495ae;
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
LAB_147d495ae:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d495e4 FUN_147d495e4 body=324 status=ok
// SIG undefined FUN_147d495e4(void)

undefined4 * FUN_147d495e4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d4972a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147d49810(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147d49890(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4972a FUN_147d4972a body=230 status=ok
// SIG undefined FUN_147d4972a(void)

int * FUN_147d4972a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147d49810 FUN_147d49810 body=128 status=ok
// SIG undefined FUN_147d49810(void)

undefined8 FUN_147d49810(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147d48cb8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d49890 FUN_147d49890 body=474 status=ok
// SIG undefined FUN_147d49890(void)

void FUN_147d49890(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147d49a6c FUN_147d49a6c body=180 status=ok
// SIG undefined FUN_147d49a6c(void)

longlong * FUN_147d49a6c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_147d49b03;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d49b22(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_147d49b03:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 147d49b22 FUN_147d49b22 body=277 status=ok
// SIG undefined FUN_147d49b22(void)

undefined4 * FUN_147d49b22(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d4972a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_147d49810(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d49890(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d49c38 FUN_147d49c38 body=81 status=ok
// SIG undefined FUN_147d49c38(void)

void FUN_147d49c38(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147d49c8a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d49c8a FUN_147d49c8a body=90 status=ok
// SIG undefined FUN_147d49c8a(void)

void FUN_147d49c8a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147d49ce4();
  return;
}



// FUNCTION 147d49ce4 FUN_147d49ce4 body=78 status=ok
// SIG undefined FUN_147d49ce4(void)

void FUN_147d49ce4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_147d49d32(param_1,param_2);
  return;
}



// FUNCTION 147d49d32 FUN_147d49d32 body=114 status=ok
// SIG undefined FUN_147d49d32(void)

void FUN_147d49d32(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 147d49da4 FUN_147d49da4 body=323 status=ok
// SIG undefined FUN_147d49da4(void)

undefined4 * FUN_147d49da4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d49ee8(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_38 = uVar5;
  local_38[1] = *puVar1;
  lVar8 = puVar1[1];
  local_38[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5;
  cVar3 = FUN_147d49fce(param_1,uVar9,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d4a08e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d49ee8 FUN_147d49ee8 body=229 status=ok
// SIG undefined FUN_147d49ee8(void)

int * FUN_147d49ee8(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147d49fce FUN_147d49fce body=191 status=ok
// SIG undefined FUN_147d49fce(void)

undefined8 FUN_147d49fce(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_147d49d32(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d4a08e FUN_147d4a08e body=450 status=ok
// SIG undefined FUN_147d4a08e(void)

void FUN_147d4a08e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 147d4a252 FUN_147d4a252 body=29 status=ok
// SIG undefined FUN_147d4a252(void)

undefined8 FUN_147d4a252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d4a28a FUN_147d4a28a body=29 status=ok
// SIG undefined FUN_147d4a28a(void)

bool FUN_147d4a28a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147d4a2a8 FUN_147d4a2a8 body=26 status=ok
// SIG undefined FUN_147d4a2a8(void)

bool FUN_147d4a2a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147d4a2c2 FUN_147d4a2c2 body=24 status=ok
// SIG undefined FUN_147d4a2c2(void)

bool FUN_147d4a2c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147d4a2e6 FUN_147d4a2e6 body=93 status=ok
// SIG undefined FUN_147d4a2e6(void)

void FUN_147d4a2e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaafff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aaaff80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d4a344 FUN_147d4a344 body=93 status=ok
// SIG undefined FUN_147d4a344(void)

void FUN_147d4a344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aaafff0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aaaff80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d4a3a2 FUN_147d4a3a2 body=126 status=ok
// SIG undefined FUN_147d4a3a2(void)

void FUN_147d4a3a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aaafff0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14aaaff80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d4a411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d4a420 FUN_147d4a420 body=65 status=ok
// SIG undefined FUN_147d4a420(void)

void FUN_147d4a420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4,*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 147d4a462 FUN_147d4a462 body=168 status=ok
// SIG undefined FUN_147d4a462(void)

bool FUN_147d4a462(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = *(undefined1 *)(param_1 + 8);
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4a50e FUN_147d4a50e body=62 status=ok
// SIG undefined FUN_147d4a50e(void)

void FUN_147d4a50e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d4a54c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d4a54c FUN_147d4a54c body=93 status=ok
// SIG undefined FUN_147d4a54c(void)

ulonglong FUN_147d4a54c(uint param_1,uint param_2)

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



// FUNCTION 147d4a5aa FUN_147d4a5aa body=179 status=ok
// SIG undefined FUN_147d4a5aa(void)

int * FUN_147d4a5aa(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_147d4a640;
          break;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d4a65e(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x18);
LAB_147d4a640:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 147d4a65e FUN_147d4a65e body=276 status=ok
// SIG undefined FUN_147d4a65e(void)

undefined4 * FUN_147d4a65e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d4a774(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  local_40[4] = 0xffffffff;
  cVar1 = FUN_147d4a85a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[5] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[4] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d4a94c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4a774 FUN_147d4a774 body=230 status=ok
// SIG undefined FUN_147d4a774(void)

int * FUN_147d4a774(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147d4a85a FUN_147d4a85a body=128 status=ok
// SIG undefined FUN_147d4a85a(void)

undefined8 FUN_147d4a85a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d4a8da(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d4a8da FUN_147d4a8da body=114 status=ok
// SIG undefined FUN_147d4a8da(void)

void FUN_147d4a8da(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 147d4a94c FUN_147d4a94c body=419 status=ok
// SIG undefined FUN_147d4a94c(void)

void FUN_147d4a94c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 147d4aaf0 FUN_147d4aaf0 body=303 status=ok
// SIG undefined FUN_147d4aaf0(void)

void FUN_147d4aaf0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 147d4ac20 FUN_147d4ac20 body=190 status=ok
// SIG undefined FUN_147d4ac20(void)

void FUN_147d4ac20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d4acde(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147d4acde FUN_147d4acde body=132 status=ok
// SIG undefined FUN_147d4acde(void)

void FUN_147d4acde(longlong param_1,int param_2)

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



// FUNCTION 147d4ad64 FUN_147d4ad64 body=98 status=ok
// SIG undefined FUN_147d4ad64(void)

void FUN_147d4ad64(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d4adc6 FUN_147d4adc6 body=52 status=ok
// SIG undefined FUN_147d4adc6(void)

void FUN_147d4adc6(longlong *param_1)

{
  FUN_147d4adfa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d4adfa FUN_147d4adfa body=89 status=ok
// SIG undefined FUN_147d4adfa(void)

void FUN_147d4adfa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 147d4ae54 FUN_147d4ae54 body=132 status=ok
// SIG undefined FUN_147d4ae54(void)

void FUN_147d4ae54(longlong param_1,int param_2)

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



// FUNCTION 147d4aeda FUN_147d4aeda body=62 status=ok
// SIG undefined FUN_147d4aeda(void)

void FUN_147d4aeda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d4af18(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d4af18 FUN_147d4af18 body=93 status=ok
// SIG undefined FUN_147d4af18(void)

ulonglong FUN_147d4af18(uint param_1,uint param_2)

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



// FUNCTION 147d4af75 FUN_147d4af75 body=23 status=ok
// SIG undefined FUN_147d4af75(void)

void FUN_147d4af75(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147d4af8c FUN_147d4af8c body=57 status=ok
// SIG undefined FUN_147d4af8c(void)

void FUN_147d4af8c(undefined8 *param_1,int param_2)

{
  FUN_145879583(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147d4afc6(param_1,param_2);
  return;
}



// FUNCTION 147d4afc6 FUN_147d4afc6 body=112 status=ok
// SIG undefined FUN_147d4afc6(void)

void FUN_147d4afc6(longlong param_1,uint param_2)

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



// FUNCTION 147d4b036 FUN_147d4b036 body=147 status=ok
// SIG undefined FUN_147d4b036(void)

void FUN_147d4b036(longlong param_1,int param_2)

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



// FUNCTION 147d4b0ca FUN_147d4b0ca body=106 status=ok
// SIG undefined FUN_147d4b0ca(void)

undefined8 FUN_147d4b0ca(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147d4b134 FUN_147d4b134 body=164 status=ok
// SIG undefined FUN_147d4b134(void)

void FUN_147d4b134(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
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
    *(undefined1 *)(param_1 + 0x20 + lVar2) = *(undefined1 *)(param_2 + lVar2 + 0x20);
    *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + lVar2 + 0x18);
    lVar2 = lVar2 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147d4b1d8 FUN_147d4b1d8 body=62 status=ok
// SIG undefined FUN_147d4b1d8(void)

void FUN_147d4b1d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d4b216(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d4b216 FUN_147d4b216 body=93 status=ok
// SIG undefined FUN_147d4b216(void)

ulonglong FUN_147d4b216(uint param_1,uint param_2)

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



// FUNCTION 147d4b274 FUN_147d4b274 body=67 status=ok
// SIG undefined FUN_147d4b274(void)

void FUN_147d4b274(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aaad080;
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000147d4b2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d4b2b8 FUN_147d4b2b8 body=29 status=ok
// SIG undefined FUN_147d4b2b8(void)

undefined8 FUN_147d4b2b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d4b2d6 FUN_147d4b2d6 body=132 status=ok
// SIG undefined FUN_147d4b2d6(void)

void FUN_147d4b2d6(longlong param_1,int param_2)

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



// FUNCTION 147d4b35c FUN_147d4b35c body=415 status=ok
// SIG undefined FUN_147d4b35c(void)

longlong * FUN_147d4b35c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145879583(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147d4afc6(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_146396b74();
      FUN_14047320e(uVar4,param_1,lVar3 + lVar7,0);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_147d4af8c(param_2);
    if (0 < (int)local_34) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147d4b4fc(param_2);
        uVar5 = FUN_146396b74();
        FUN_14047320e(uVar5,param_1,uVar4,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d4b4fc FUN_147d4b4fc body=63 status=ok
// SIG undefined FUN_147d4b4fc(void)

longlong FUN_147d4b4fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d4b036(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147d4b53b(lVar2);
  return lVar2;
}



// FUNCTION 147d4b53b FUN_147d4b53b body=18 status=ok
// SIG undefined FUN_147d4b53b(void)

void FUN_147d4b53b(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  return;
}



// FUNCTION 147d4b54e FUN_147d4b54e body=120 status=ok
// SIG undefined FUN_147d4b54e(void)

undefined8 * FUN_147d4b54e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb09090) {
    FUN_144b3d300(&DAT_14cb09090);
    if (DAT_14cb09090 == -1) {
      FUN_1446ddc76(&DAT_14cb09088,"FSoundWaveProxy",1);
      _Init_thread_footer(&DAT_14cb09090);
    }
  }
  *param_1 = DAT_14cb09088;
  return param_1;
}



// FUNCTION 147d4b5c6 FUN_147d4b5c6 body=92 status=ok
// SIG undefined FUN_147d4b5c6(void)

bool FUN_147d4b5c6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 147d4b622 FUN_147d4b622 body=132 status=ok
// SIG undefined FUN_147d4b622(void)

void FUN_147d4b622(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d4b6a8 FUN_147d4b6a8 body=197 status=ok
// SIG undefined FUN_147d4b6a8(void)

void FUN_147d4b6a8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x7f7fffff7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f) = 0;
  uVar1 = *(undefined8 *)(param_5 + 2);
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = *param_5;
  uVar2 = param_5[5];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)(param_1 + 8) = 1;
  uVar2 = 0x7f7fffff;
  if ((*(byte *)(param_5 + 7) & 1) == 0) {
    uVar3 = param_5[6];
  }
  else {
    uVar3 = 0x7f7fffff;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  if ((*(byte *)(param_5 + 7) & 1) != 0) {
    uVar2 = param_5[6];
  }
  *(undefined4 *)(param_1 + 9) = uVar2;
  uVar2 = 0;
  if ((*(byte *)(param_5 + 7) & 2) != 0) {
    uVar2 = param_5[4];
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined2 *)(param_1 + 10) = 1;
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)(param_5 + 7) & 1;
  return;
}



// FUNCTION 147d4b76e FUN_147d4b76e body=607 status=ok
// SIG undefined FUN_147d4b76e(void)

void FUN_147d4b76e(longlong param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (*(uint *)(param_1 + 0x30) < *param_2) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x30) = *param_2;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0x7f7fffff7f7fffff;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x52) = 0;
LAB_147d4b7c8:
    fVar8 = (float)param_2[5];
    dVar5 = 1.0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) goto LAB_147d4b7c8;
    fVar8 = (float)FUN_147d4b9ce(param_1,*(undefined4 *)(param_1 + 0x38),(float)iVar2,
                                 *(undefined4 *)(param_1 + 0x14));
    dVar5 = (double)((float)iVar2 + 1.0);
  }
  *(float *)(param_1 + 0x38) = fVar8;
  dVar5 = ((double)iVar2 * *(double *)(param_1 + 0x20) + *(double *)(param_2 + 2)) / dVar5;
  *(double *)(param_1 + 0x20) = dVar5;
  dVar5 = dVar5 - *(double *)(param_1 + 0x18);
  dVar6 = 0.0;
  if (0.0 <= dVar5) {
    dVar6 = dVar5;
  }
  *(double *)(param_1 + 0x28) = dVar6;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  bVar1 = (byte)param_2[7];
  if (((bVar1 & 2) == 0) || (DAT_14cb090c0 != 0)) {
    if (dVar6 <= 0.0) goto LAB_147d4b82c;
    fVar8 = fVar8 - *(float *)(param_1 + 0x34);
    fVar7 = (float)*(int *)(param_1 + 0x14) - ABS(fVar8);
    fVar4 = 0.0;
    if (0.0 <= fVar7) {
      fVar4 = fVar7;
    }
    fVar4 = (float)(-(uint)(fVar8 < 0.0) & 0x3f800000 |
                   ~-(uint)(fVar8 < 0.0) & -(uint)(0.0 < fVar8) & 0xbf800000) * fVar4;
    uVar3 = -(uint)(ABS(fVar8) < ABS(fVar4));
    fVar8 = (float)((double)ABS((float)(uVar3 & (uint)fVar8 | ~uVar3 & (uint)fVar4)) / dVar6);
  }
  else {
    fVar8 = (float)param_2[4];
  }
  *(float *)(param_1 + 0x3c) = fVar8;
  bVar1 = (byte)param_2[7];
LAB_147d4b82c:
  fVar8 = (float)param_2[6];
  if ((bVar1 & 1) == 0) {
    fVar4 = *(float *)(param_1 + 0x44);
    if (fVar8 <= *(float *)(param_1 + 0x44)) {
      fVar4 = fVar8;
    }
    *(float *)(param_1 + 0x44) = fVar4;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x48);
    if (fVar8 <= *(float *)(param_1 + 0x48)) {
      fVar4 = fVar8;
    }
    *(float *)(param_1 + 0x48) = fVar4;
  }
  fVar4 = (float)param_2[5] - *(float *)(param_1 + 0x34);
  fVar7 = (float)*(int *)(param_1 + 0x14) - ABS(fVar4);
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar8 = (float)(-(uint)(fVar4 < 0.0) & 0x3f800000 |
                 ~-(uint)(fVar4 < 0.0) & -(uint)(0.0 < fVar4) & 0xbf800000) * fVar8;
  uVar3 = -(uint)(ABS(fVar4) < ABS(fVar8));
  fVar8 = (float)(uVar3 & (uint)fVar4 | ~uVar3 & (uint)fVar8);
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 0.0 < fVar8;
  *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) | fVar8 < 0.0;
  bVar1 = 1;
  if (*(char *)(param_1 + 0x52) == '\0') {
    bVar1 = (byte)param_2[7] & 1;
  }
  *(byte *)(param_1 + 0x52) = bVar1;
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  return;
}



// FUNCTION 147d4b9ce FUN_147d4b9ce body=328 status=ok
// SIG undefined FUN_147d4b9ce(void)

ulonglong FUN_147d4b9ce(undefined8 param_1,undefined8 param_2,float param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = (uint)((ulonglong)param_2 >> 0x20);
  fVar3 = (float)param_2;
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  fVar5 = (float)param_1;
  fVar2 = (float)param_4;
  fVar8 = fVar5 - fVar3;
  fVar6 = ABS(fVar8);
  fVar9 = 0.0;
  if (0.0 <= fVar2 - fVar6) {
    fVar9 = fVar2 - fVar6;
  }
  fVar9 = (float)(-(uint)(fVar8 < 0.0) & 0x3f800000 |
                 ~-(uint)(fVar8 < 0.0) & -(uint)(0.0 < fVar8) & 0xbf800000) * fVar9;
  uVar1 = -(uint)(fVar6 < ABS(fVar9));
  uVar7 = uVar7 & 0x7fffffff & uVar7;
  fVar9 = (float)(uVar1 & (uint)fVar8 | ~uVar1 & (uint)fVar9);
  if ((fVar9 <= 0.0) || (fVar6 <= ABS(fVar9))) {
    uVar1 = -(uint)(ABS(fVar9) < fVar6);
    fVar3 = (float)(~-(uint)(fVar9 < 0.0) & (uint)fVar3 |
                   (~uVar1 & (uint)fVar3 | (uint)(fVar2 + fVar3) & uVar1) & -(uint)(fVar9 < 0.0));
    uVar4 = ~uVar7 & uVar4 | ~uVar7 & uVar4 & uVar7;
  }
  else {
    fVar5 = fVar5 + fVar2;
  }
  fVar9 = param_3 + 1.0;
  if (fVar9 <= 1e-08) {
    fVar9 = 1e-08;
  }
  fVar9 = (fVar3 * param_3 + fVar5) / fVar9;
  return CONCAT44(uVar4,~-(uint)(fVar9 < fVar2) & (uint)(fVar9 - fVar2)) |
         (ulonglong)((uint)fVar9 & -(uint)(fVar9 < fVar2));
}



// FUNCTION 147d4bb16 FUN_147d4bb16 body=244 status=ok
// SIG undefined FUN_147d4bb16(void)

void FUN_147d4bb16(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 < 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    iVar1 = (int)param_1[1];
    uVar2 = (ulonglong)iVar1;
    *(float *)((longlong)param_1 + 0x4c) = (float)(iVar1 + -1);
    if (0 < (longlong)uVar2) {
      fVar6 = 1.0;
      if (1.0 <= *(float *)((longlong)param_1 + 0x3c)) {
        fVar6 = *(float *)((longlong)param_1 + 0x3c);
      }
      fVar7 = (float)*(uint *)(*param_1 + -4 + uVar2 * 4) * fVar6;
      lVar3 = (longlong)ROUND(-0.5 - (fVar7 + fVar7)) >> 1;
      lVar4 = -lVar3;
      if (-param_2 == lVar3 || lVar4 < param_2) {
        do {
          lVar3 = lVar4;
          fVar7 = (float)((int)uVar2 + -1);
          *(float *)((longlong)param_1 + 0x4c) = fVar7;
          if (uVar2 < 2) {
            return;
          }
          fVar8 = (float)*(uint *)(*param_1 + -8 + uVar2 * 4) * fVar6;
          lVar5 = (longlong)ROUND(-0.5 - (fVar8 + fVar8)) >> 1;
          lVar4 = -lVar5;
          uVar2 = uVar2 - 1;
        } while (-param_2 == lVar5 || lVar4 < param_2);
      }
      else {
        fVar7 = (float)iVar1;
        lVar3 = 0;
      }
      *(float *)((longlong)param_1 + 0x4c) =
           fVar7 - (float)((double)(param_2 - lVar3) / (double)(lVar4 - lVar3));
      return;
    }
  }
  return;
}



// FUNCTION 147d4bc0a FUN_147d4bc0a body=245 status=ok
// SIG undefined FUN_147d4bc0a(void)

ulonglong FUN_147d4bc0a(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  
  uVar4 = 0;
  if (*(char *)((longlong)param_1 + 0x52) == '\0') {
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    uVar5 = (int)param_1[1] - 1;
    uVar2 = (int)ROUND(fVar1 + fVar1 + -0.5) >> 1;
    if ((int)uVar5 <= (int)uVar2) {
      uVar2 = uVar5;
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = uVar4;
    }
    uVar2 = -((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1);
    if ((int)uVar5 <= (int)uVar2) {
      uVar2 = uVar5;
    }
    uVar7 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar7 = uVar4;
    }
    auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar1),9);
    dVar10 = (double)*(uint *)(*param_1 + uVar3 * 4);
    fVar8 = 1.0;
    if (1.0 <= *(float *)((longlong)param_1 + 0x3c)) {
      fVar8 = *(float *)((longlong)param_1 + 0x3c);
    }
    fVar8 = fVar8 * (float)(longlong)
                           (((double)*(uint *)(*param_1 + uVar7 * 4) - dVar10) *
                            (double)(fVar1 - auVar9._0_4_) + dVar10);
    uVar4 = 1;
    if (1 < (int)DAT_14c761b74) {
      uVar4 = (ulonglong)DAT_14c761b74;
    }
    lVar6 = ~((longlong)ROUND(-0.5 - (fVar8 + fVar8)) >> 1) + uVar4;
    uVar4 = lVar6 - lVar6 % (longlong)uVar4;
  }
  return uVar4;
}



// FUNCTION 147d4bd00 FUN_147d4bd00 body=176 status=ok
// SIG undefined FUN_147d4bd00(void)

bool FUN_147d4bd00(longlong param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  if ((param_2 < 0.0) || ((float)*(int *)(param_1 + 0x14) <= param_2)) {
    bVar1 = false;
  }
  else {
    param_2 = *(float *)(param_1 + 0x38) - param_2;
    fVar3 = (float)*(int *)(param_1 + 0x14) - ABS(param_2);
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar4 = (float)(-(uint)(param_2 < 0.0) & 0x3f800000 |
                   ~-(uint)(param_2 < 0.0) & -(uint)(0.0 < param_2) & 0xbf800000) * fVar4;
    uVar2 = -(uint)(ABS(param_2) < ABS(fVar4));
    fVar3 = 1e-08;
    if (1e-08 <= DAT_14c761b70) {
      fVar3 = DAT_14c761b70;
    }
    bVar1 = ABS((float)(uVar2 & (uint)param_2 | ~uVar2 & (uint)fVar4)) <= fVar3;
  }
  return bVar1;
}



// FUNCTION 147d4bdb0 FUN_147d4bdb0 body=307 status=ok
// SIG undefined FUN_147d4bdb0(void)

float FUN_147d4bdb0(longlong *param_1,undefined8 param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar14;
  
  fVar13 = (float)param_2;
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = (ulonglong)uVar1;
  uVar6 = uVar1 - 1;
  uVar3 = (int)ROUND(fVar13 + fVar13 + -0.5) >> 1;
  if ((int)uVar6 <= (int)uVar3) {
    uVar3 = uVar6;
  }
  uVar8 = 0;
  uVar10 = (ulonglong)uVar3;
  if ((int)uVar3 < 1) {
    uVar10 = uVar8;
  }
  uVar3 = -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1);
  if ((int)uVar6 <= (int)uVar3) {
    uVar3 = uVar6;
  }
  uVar9 = (ulonglong)uVar3;
  if ((int)uVar3 < 1) {
    uVar9 = uVar8;
  }
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar12._8_4_ = in_XMM1_Dc;
  auVar12._0_8_ = param_2;
  auVar12._12_4_ = in_XMM1_Dd;
  auVar12 = roundss(auVar11,auVar12,9);
  lVar2 = *param_1;
  dVar14 = (double)*(uint *)(lVar2 + uVar10 * 4);
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  param_3 = param_3 * (float)(longlong)
                             (((double)*(uint *)(lVar2 + uVar9 * 4) - dVar14) *
                              (double)(fVar13 - auVar12._0_4_) + dVar14);
  uVar10 = 1;
  if (1 < (int)DAT_14c761b74) {
    uVar10 = (ulonglong)DAT_14c761b74;
  }
  lVar5 = ~((longlong)ROUND(-0.5 - (param_3 + param_3)) >> 1) + uVar10;
  lVar5 = lVar5 - lVar5 % (longlong)uVar10;
  iVar4 = uVar1 + 1;
  do {
    uVar10 = uVar8;
    if ((int)uVar7 < 1) {
      return 0.0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar2 + -4 + uVar7 * 4);
    uVar7 = uVar7 - 1;
    iVar4 = iVar4 + -1;
  } while ((longlong)uVar8 <= lVar5);
  return (float)iVar4 -
         (float)((double)(longlong)(lVar5 - uVar10) / (double)(longlong)(uVar8 - uVar10));
}



// FUNCTION 147d4bee6 FUN_147d4bee6 body=834 status=ok
// SIG undefined FUN_147d4bee6(void)

void FUN_147d4bee6(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,undefined4 param_6,byte param_7)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [35];
  byte local_125;
  uint local_124;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  undefined4 local_108;
  double local_100;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  byte local_ec;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined2 local_d8;
  float local_d4;
  byte local_d0 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    puVar3 = (undefined2 *)FUN_1411cba86(param_1 + -0x10);
    if (puVar3 != (undefined2 *)0x0) {
      uVar1 = *(uint *)(puVar3 + 0x24);
      iVar7 = (int)ROUND(param_5 + param_5 + -0.5) >> 1;
      if (iVar7 < (int)uVar1 && -1 < iVar7) {
        FUN_1402160b8(&local_e8);
        local_100 = (double)(CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8)) -
                            *(longlong *)(param_1 + 0x140)) / 10000000.0;
        local_108 = *(undefined4 *)(param_1 + 0x13c);
        local_f4 = param_5;
        local_f0 = param_6;
        local_ec = param_7;
        local_120 = param_1;
        local_f8 = param_4;
        lVar4 = FUN_147d4c22a(puVar3,param_3);
        uVar5 = *(uint *)(puVar3 + 0x18);
        if ((int)uVar1 <= (int)*(uint *)(puVar3 + 0x18)) {
          uVar5 = uVar1;
        }
        local_118 = (ulonglong)uVar5;
        if ((int)uVar5 < 1) {
          local_118 = 0;
        }
        if ((param_7 & 1) != 0) {
          local_118 = 0;
        }
        fVar12 = *(float *)(puVar3 + 0x1a) / 100.0;
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
        fVar13 = *(float *)(puVar3 + 0x1c) / 100.0;
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
        if (fVar13 <= -1.0) {
          fVar13 = -1.0;
        }
        uVar8 = (ulonglong)(uint)-(int)local_118;
        if (*(char *)(lVar4 + 0x51) == '\0') {
          uVar8 = 0;
        }
        local_124 = 1;
        if (*(char *)(lVar4 + 0x50) != '\0') {
          local_124 = (int)local_118 + 1;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        local_125 = param_7 & 1;
        local_110 = lVar4;
        do {
          iVar2 = (int)uVar8;
          uVar8 = (longlong)(int)(iVar2 + iVar7 + uVar1) % (longlong)(int)uVar1;
          iVar6 = -iVar2;
          if (-iVar2 < 0) {
            iVar6 = iVar2;
          }
          fVar11 = 0.0;
          if (iVar2 != 0) {
            fVar11 = fVar13;
          }
          fVar11 = (1.0 - (float)iVar6 * fVar12) + fVar11;
          if (1.0 <= fVar11) {
            fVar11 = 1.0;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          uVar9 = FUN_147d4bdb0(lVar4,uVar8 & 0xffffffff,fVar11);
          fVar11 = (float)uVar9;
          auVar10._8_4_ = extraout_XMM0_Dc;
          auVar10._0_8_ = uVar9;
          auVar10._12_4_ = extraout_XMM0_Dd;
          auVar10 = roundss(ZEXT816(0),auVar10,9);
          uVar5 = (int)ROUND(fVar11 + fVar11 + -0.5) >> 1;
          local_d4 = (auVar10._0_4_ - fVar11) + 1.0;
          iVar6 = (int)local_118 - iVar6;
          if (iVar6 < 1) {
            iVar6 = 0;
          }
          local_d0[0] = 0;
          local_d0[1] = 0;
          local_d0[2] = 0;
          local_d0[3] = 0;
          local_d0[4] = 0;
          local_d0[5] = 0;
          local_d0[6] = 0;
          local_d0[7] = 0;
          local_d0[8] = 0;
          local_d0[9] = 0;
          local_d0[10] = 0;
          local_d0[0xb] = 0;
          local_d0[0xc] = 0;
          local_d0[0xd] = 0;
          local_d0[0xe] = 0;
          local_d0[0xf] = 0;
          local_e8 = *puVar3;
          local_d8 = (undefined2)(-1 << ((byte)uVar5 & 0x1f));
          if ((int)uVar5 < 0x10) {
            do {
              local_d0[uVar5] = -(local_125 != 0) | (byte)iVar6;
              uVar5 = uVar5 + 1;
            } while (uVar5 != 0x10);
          }
          uStack_e6 = (short)uVar8;
          local_e0 = lVar4;
          FUN_14594248a(param_1 + -0x10,&local_e8);
          uVar8 = (ulonglong)(iVar2 + 1U);
        } while (iVar2 + 1U != local_124);
        FUN_147d5865e(local_120 + 0x150,&local_e8,&local_110);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4c22a FUN_147d4c22a body=316 status=ok
// SIG undefined FUN_147d4c22a(void)

longlong FUN_147d4c22a(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    lVar7 = 0;
    do {
      lVar8 = *(longlong *)(lVar4 + lVar7);
      cVar5 = FUN_147d4bd00(lVar8,uVar3);
      if ((cVar5 != '\0') && (*(uint *)(lVar8 + 0x10) == param_2)) {
        FUN_147d4b76e(lVar8,param_3);
        if (lVar8 != 0) goto LAB_147d4c2d9;
        break;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  local_70 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    local_70 = *(longlong *)(param_1 + 0xa0);
  }
  local_68 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = FUN_14001cc68(0x58,0x10);
  local_78 = param_3;
  FUN_147d4b6a8(uVar6,param_2 & 0xffffffff,uVar3,&local_70);
  iVar2 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
    FUN_147d59176(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar6;
  lVar8 = *(longlong *)(*plVar1 + (longlong)iVar2 * 8);
LAB_147d4c2d9:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 147d4c368 FUN_147d4c368 body=268 status=ok
// SIG undefined FUN_147d4c368(void)

void FUN_147d4c368(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0xffffff;
  *(undefined8 *)
   (*(longlong *)(param_1 + 10) +
   (longlong)
   (int)(((param_2 >> 0x10 & 0xff) * param_1[0xf] + (param_2 >> 8 & 0xff)) * param_1[0xe] +
        (param_2 & 0xff)) * 8) = 0;
  uVar2 = param_1[2];
  uVar4 = (ulonglong)uVar5;
  if ((uVar5 < uVar2) && (*(int *)(*(longlong *)(param_1 + 8) + uVar4 * 4) != -1)) {
    *(undefined8 *)(*(longlong *)(param_1 + 6) + uVar4 * 8) = 0;
    iVar1 = *(int *)(*(longlong *)(param_1 + 8) + uVar4 * 4);
    if ((iVar1 == 0) ||
       (*(longlong *)
         (*(longlong *)(param_1 + 6) +
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)(iVar1 - 1U >> 1) * 4) * 8) ==
        0)) {
      FUN_1405c02a6(param_1);
      goto LAB_147d4c469;
    }
  }
  else {
    if (*param_1 == param_1[1]) {
      uVar2 = *param_1 * 2;
      uVar3 = 0x20;
      if (0x20 < uVar2) {
        uVar3 = uVar2;
      }
      FUN_14071c684(param_1,uVar3);
      uVar2 = param_1[2];
    }
    if (uVar2 <= uVar5) {
      uVar2 = uVar5 * 2 + 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      uVar3 = 1 << ((byte)iVar1 & 0x1f);
      uVar2 = 0x20;
      if (0x20 < uVar3) {
        uVar2 = uVar3;
      }
      FUN_144a23d60(param_1,uVar2);
    }
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar2 * 4) = uVar5;
    *(undefined8 *)(*(longlong *)(param_1 + 6) + uVar4 * 8) = 0;
    *(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 4) = uVar2;
  }
  FUN_14071c5fe(param_1);
LAB_147d4c469:
  param_1[0x12] = param_1[0x12] - 1;
  return;
}



// FUNCTION 147d4c474 FUN_147d4c474 body=1556 status=ok
// SIG undefined FUN_147d4c474(void)

void FUN_147d4c474(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong *puVar19;
  float fVar20;
  undefined1 auStack_148 [32];
  ulonglong *local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong *local_110;
  ulonglong local_108;
  ulonglong local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  uint local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar11 = 1;
  if (1 < (int)DAT_14c761b88) {
    uVar11 = (ulonglong)DAT_14c761b88;
  }
  local_d0 = uVar11 * 0x100000;
  dVar4 = 1.0;
  if ((0 < (int)DAT_14c761b88) && (dVar4 = 1.0, local_d0 < *(longlong *)(param_1 + 0x148))) {
    dVar4 = (double)local_d0 / (double)*(longlong *)(param_1 + 0x148);
  }
  puVar19 = (ulonglong *)(param_2 + 0x70);
  lVar7 = (ulonglong)(uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c)) * 0x28;
  local_118 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = local_118 + lVar7;
  if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
    FUN_140023dd8(puVar19,(int)lVar7 + 8);
    local_118 = *puVar19 + 7 & 0xfffffffffffffff8;
    uVar11 = lVar7 + local_118;
  }
  local_110 = (longlong *)(param_1 + 0x58);
  *puVar19 = uVar11;
  local_e8 = param_1 + 0x68;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  uVar11 = 0;
  iVar5 = 0;
  local_88 = local_e8;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_90);
    iVar5 = *(int *)(param_1 + 0x80);
  }
  local_b8 = local_110;
  local_b0 = local_90;
  local_a8 = local_88;
  local_a0 = local_80;
  iStack_9c = iStack_7c;
  local_98 = local_78;
  local_94 = local_74;
  local_d8 = param_1;
  if ((iStack_7c != iVar5) || (local_88 != local_e8)) {
    uVar11 = 0;
    local_128 = puVar19;
    local_f4 = iVar5;
    local_f0 = param_2;
    do {
      lVar7 = *local_b8;
      lVar15 = (longlong)iStack_9c;
      lVar18 = *(longlong *)(lVar7 + lVar15 * 8);
      if (lVar18 != 0) {
        uVar16 = (ulonglong)*(uint *)(lVar18 + 0x48);
        uVar3 = *(uint *)(lVar18 + 0x58);
        local_c0 = uVar11;
        iVar5 = FUN_140180c78(lVar18 + 4);
        uVar9 = (ulonglong)(iVar5 + 1);
        uVar12 = *(longlong *)(param_2 + 0x70) + 1U & 0xfffffffffffffffe;
        uVar11 = uVar12 + uVar9 * 2;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(puVar19,(int)(uVar9 * 2) + 2);
          uVar12 = *puVar19 + 1 & 0xfffffffffffffffe;
          uVar11 = uVar9 * 2 + uVar12;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar11;
        local_c8 = uVar12;
        FUN_14026f16c(*(longlong *)(lVar7 + lVar15 * 8) + 4,uVar12,uVar9);
        lVar18 = uVar16 * 4;
        uVar11 = *(ulonglong *)(param_2 + 0x78);
        uVar9 = *(longlong *)(param_2 + 0x70) + 3U & 0xfffffffffffffffc;
        uVar12 = uVar9 + uVar16 * 4;
        local_100 = uVar16;
        if (uVar11 < uVar12) {
          FUN_140023dd8(puVar19,(int)lVar18 + 4);
          uVar11 = *(ulonglong *)(param_2 + 0x78);
          uVar9 = *(longlong *)(param_2 + 0x70) + 3U & 0xfffffffffffffffc;
          uVar12 = uVar9 + lVar18;
        }
        *puVar19 = uVar12;
        uVar16 = uVar12 + lVar18;
        local_e0 = uVar9;
        if (uVar11 < uVar16) {
          FUN_140023dd8(puVar19,(int)lVar18 + 4);
          uVar12 = *puVar19 + 3 & 0xfffffffffffffffc;
          uVar16 = lVar18 + uVar12;
        }
        uVar9 = local_e0;
        uVar11 = local_100;
        *puVar19 = uVar16;
        uVar13 = (ulonglong)uVar3;
        if (0 < (int)local_100) {
          lVar18 = 0x68;
          uVar16 = 0;
          local_120 = uVar12;
          local_108 = (ulonglong)uVar3;
          do {
            lVar17 = *(longlong *)(*(longlong *)(lVar7 + lVar15 * 8) + 0x40);
            iVar6 = FUN_144b07aaa(lVar17 + lVar18,0,0xffffffff);
            lVar17 = lVar17 + lVar18;
            iVar5 = *(int *)(lVar17 + 0x18);
            if (iVar5 < 2) {
              iVar5 = 1;
            }
            *(float *)(uVar9 + uVar16 * 4) = (float)iVar6 / (float)iVar5;
            iVar6 = FUN_144b07aaa(lVar17 + 0x20,0,0xffffffff);
            iVar5 = *(int *)(lVar17 + 0x38);
            if (*(int *)(lVar17 + 0x38) < 2) {
              iVar5 = 1;
            }
            *(float *)(local_120 + uVar16 * 4) = (float)iVar6 / (float)iVar5;
            uVar16 = uVar16 + 1;
            lVar18 = lVar18 + 0x100;
          } while (uVar11 != uVar16);
          uVar16 = *local_128;
          uVar13 = local_108;
          param_2 = local_f0;
          uVar12 = local_120;
        }
        puVar19 = local_128;
        lVar18 = uVar13 * 0x1c;
        uVar9 = uVar16 + 3 & 0xfffffffffffffffc;
        uVar11 = uVar9 + lVar18;
        if (*(ulonglong *)(param_2 + 0x78) < uVar11) {
          FUN_140023dd8(local_128,(int)lVar18 + 4);
          uVar9 = *puVar19 + 3 & 0xfffffffffffffffc;
          uVar11 = lVar18 + uVar9;
        }
        *local_128 = uVar11;
        if (0 < (int)uVar13) {
          puVar14 = (undefined4 *)(uVar9 + 0x18);
          uVar11 = 0;
          do {
            lVar18 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar7 + lVar15 * 8) + 0x50) + uVar11 * 8);
            if (lVar18 != 0) {
              local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(lVar18 + 0x10));
              local_108 = *(ulonglong *)(lVar18 + 0x38);
              lVar17 = FUN_147d4bc0a(lVar18);
              fVar20 = (float)((double)lVar17 * 0.0009765625 * 0.0009765625);
              uVar1 = *(undefined4 *)(lVar18 + 0x44);
              uVar2 = *(undefined4 *)(lVar18 + 0x4c);
              puVar14[-6] = (undefined4)local_120;
              *(ulonglong *)(puVar14 + -5) = local_108;
              puVar14[-3] = fVar20;
              puVar14[-2] = (float)((double)fVar20 * dVar4);
              puVar14[-1] = uVar1;
              *puVar14 = uVar2;
            }
            uVar11 = uVar11 + 1;
            puVar14 = puVar14 + 7;
          } while (uVar13 != uVar11);
        }
        lVar7 = (longlong)(int)local_c0;
        uVar11 = (ulonglong)((int)local_c0 + 1);
        *(ulonglong *)(local_118 + lVar7 * 0x28) = local_c8;
        *(ulonglong *)(local_118 + 8 + lVar7 * 0x28) = local_e0;
        *(ulonglong *)(local_118 + 0x10 + lVar7 * 0x28) = uVar12;
        *(ulonglong *)(local_118 + 0x18 + lVar7 * 0x28) = uVar9;
        *(int *)(local_118 + 0x20 + lVar7 * 0x28) = (int)local_100;
        *(int *)(local_118 + 0x24 + lVar7 * 0x28) = (int)uVar13;
        param_2 = local_f0;
        puVar19 = local_128;
        iVar5 = local_f4;
      }
      local_a0 = local_a0 & ~local_b0._4_4_;
      FUN_1449c0562(&local_b0);
    } while (local_b8 != local_110 || (local_a8 != local_e8 || iStack_9c != iVar5));
  }
  puVar8 = (ulonglong *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar8 + 3;
  if (*(ulonglong **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(puVar19,0x20);
    puVar8 = (ulonglong *)(*puVar19 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar8 + 3;
  }
  *puVar19 = (ulonglong)puVar10;
  *puVar8 = local_118;
  *(int *)(puVar8 + 1) = (int)uVar11;
  *(float *)((longlong)puVar8 + 0xc) =
       (float)((double)*(longlong *)(local_d8 + 0x148) * 0.0009765625 * 0.0009765625);
  *(float *)(puVar8 + 2) = (float)((double)local_d0 * 0.0009765625 * 0.0009765625);
  *(float *)((longlong)puVar8 + 0x14) = (float)dVar4;
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d4ca8a FUN_147d4ca8a body=123 status=ok
// SIG undefined FUN_147d4ca8a(void)

void FUN_147d4ca8a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147cd4f58(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x48) = param_2;
    FUN_147d58cbe(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d4cb06 FUN_147d4cb06 body=132 status=ok
// SIG undefined FUN_147d4cb06(void)

void FUN_147d4cb06(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_147d58f4e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d4cb8a FUN_147d4cb8a body=86 status=ok
// SIG undefined FUN_147d4cb8a(void)

void FUN_147d4cb8a(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_3 < *(uint *)(param_1 + 8)) &&
     (uVar3 = (ulonglong)param_3, *(int *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4) != -1)) {
    uVar2 = param_4 & 0xffffffff | param_2 << 0x20;
    *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8) = uVar2;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4);
    if (iVar1 != 0) {
      if (uVar2 < *(ulonglong *)
                   (*(longlong *)(param_1 + 0x18) +
                   (ulonglong)
                   *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 1U >> 1) * 4) * 8))
      {
        FUN_14071c5fe();
        return;
      }
    }
    FUN_1405c02a6();
    return;
  }
  return;
}


