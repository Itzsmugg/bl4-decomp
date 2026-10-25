// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14606a6c0 FUN_14606a6c0 body=206 status=ok
// SIG undefined FUN_14606a6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14606a6c0(void)

{
  if ((DAT_14ca9812f & 2) == 0) {
    DAT_14ca9812f = DAT_14ca9812f | 2;
    _DAT_14ca980d0 = L"FShaderTypeDependency";
    _DAT_14ca980e8 = FUN_146826540;
    _DAT_14ca980f0 = FUN_146825d77;
    _DAT_14ca980f8 = FUN_146825fd6;
    _DAT_14ca98100 = FUN_1407e02ea;
    _DAT_14ca98108 = FUN_146826273;
    _DAT_14ca980e0 = &LAB_147432348;
    _DAT_14ca98120 = 0xffffffff00000020;
    _DAT_14ca98128 = 8;
    DAT_14ca9812c = 0;
    _DAT_14ca98110 = &LAB_147432358;
    FUN_14606a78e();
    FUN_1407e00cc(&DAT_14ca980c8);
  }
  return &DAT_14ca980c8;
}



// FUNCTION 14606a78e FUN_14606a78e body=121 status=ok
// SIG undefined FUN_14606a78e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606a78e(void)

{
  FUN_14606a808();
  _DAT_14ca998c8 = L"ShaderTypeName";
  DAT_14ca998f2 = FUN_140850cc5();
  _DAT_14ca998d0 = FUN_1457fb358();
  _DAT_14ca998e0 = &LAB_14682652b;
  _DAT_14ca998e8 = 0x100000000;
  _DAT_14ca998f0 = 0;
  _DAT_14ca998d8 = DAT_14ca980d8;
  DAT_14ca980d8 = &DAT_14ca998c8;
  return;
}



// FUNCTION 14606a808 FUN_14606a808 body=276 status=ok
// SIG undefined FUN_14606a808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606a808(void)

{
  FUN_14606a91c();
  _DAT_14ca998f8 = L"PermutationId";
  DAT_14ca99922 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14ca99900 = &DAT_14c951bf8;
  _DAT_14ca99910 = &LAB_14682652b;
  _DAT_14ca99918 = &DAT_100000008;
  _DAT_14ca99920 = 0;
  _DAT_14ca99908 = DAT_14ca980d8;
  DAT_14ca980d8 = &DAT_14ca998f8;
  return;
}



// FUNCTION 14606a91c FUN_14606a91c body=271 status=ok
// SIG undefined FUN_14606a91c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606a91c(void)

{
  _DAT_14ca99928 = L"SourceHash";
  DAT_14ca99952 = FUN_140850cc5();
  if ((DAT_14ca9a2df & 2) == 0) {
    DAT_14ca9a2df = DAT_14ca9a2df | 3;
    _DAT_14ca9a280 = L"FSHAHash";
    _DAT_14ca9a298 = &LAB_1474386da;
    _DAT_14ca9a2a0 = &LAB_1474386e6;
    _DAT_14ca9a2a8 = &LAB_1474386fa;
    _DAT_14ca9a2b0 = &LAB_147438700;
    _DAT_14ca9a2b8 = &LAB_147438704;
    _DAT_14ca9a290 = &LAB_14743870a;
    _DAT_14ca9a2d0 = 0x1400000014;
    _DAT_14ca9a2d8 = 4;
    DAT_14ca9a2dc = 0;
  }
  _DAT_14ca99930 = &DAT_14ca9a278;
  _DAT_14ca99940 = &LAB_14682652b;
  _DAT_14ca99948 = &DAT_10000000c;
  _DAT_14ca99950 = 0;
  _DAT_14ca99938 = DAT_14ca980d8;
  DAT_14ca980d8 = &DAT_14ca99928;
  return;
}



// FUNCTION 14606aa34 FUN_14606aa34 body=463 status=ok
// SIG undefined FUN_14606aa34(void)

undefined8 * FUN_14606aa34(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc2c0c0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"SourceFrameRateNumerator");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"SourceFrameRateDenominator");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"SourceTimelineStart");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"SourceTimelineEnd");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"AnimatedTimeStart");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"AnimatedTimeEnd");
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 0x18,L"ImportUnusedMaterial");
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_14020fad6(param_1 + 0x1a,L"AxisConversionInverseTransform");
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_14606ac04();
  local_40 = param_1[5];
  local_38 = (longlong *)param_1[6];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x1c,&local_40,&DAT_14cc0c2d0);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606ac04 FUN_14606ac04 body=111 status=ok
// SIG undefined FUN_14606ac04(void)

void FUN_14606ac04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c2e0) {
    FUN_144b3d300(&DAT_14cc0c2e0);
    if (DAT_14cc0c2e0 == -1) {
      FUN_140056680(&DAT_14cc0c2d0,L"__ExtraInformation__Key");
      atexit((_func_5014 *)&LAB_1444bbf99);
      _Init_thread_footer(&DAT_14cc0c2e0);
      return;
    }
  }
  return;
}



// FUNCTION 14606ac7e FUN_14606ac7e body=280 status=ok
// SIG undefined FUN_14606ac7e(void)

undefined8 * FUN_14606ac7e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a46fd70;
  *(undefined1 *)((longlong)param_1 + 0x32) = 6;
  lVar1 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x6c);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = FUN_145920956();
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_18);
    }
    local_20 = param_1[2];
    if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_30 = FUN_145990528();
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606ada2 FUN_14606ada2 body=281 status=ok
// SIG undefined FUN_14606ada2(void)

undefined8 * FUN_14606ada2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140daf984();
  *param_1 = &PTR_FUN_14a8abf40;
  param_1[0x72] = &PTR_LAB_14a8ace90;
  param_1[0x85] = &PTR_LAB_14a8acef0;
  memset(param_1 + 0x12d,0,0x110);
  *(undefined4 *)(param_1 + 0x149) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = 0xffffffff;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x151] = 0x3f800000;
  param_1[0x152] = 0;
  *(byte *)(param_1 + 299) = *(byte *)(param_1 + 299) & 0xfd;
  param_1[300] = 0;
  FUN_1405bab3a(param_1,0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 1;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | 4;
  *(undefined1 *)((longlong)param_1 + 0x7ac) = 1;
  *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) & 0xfe;
  uVar1 = DAT_14c8464e8;
  param_1[0x155] = DAT_14c8464e0;
  param_1[0x156] = uVar1;
  param_1[0x157] = DAT_14c8464f0;
  param_1[0x15a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x158] = DAT_14c8464e0;
  param_1[0x159] = uVar1;
  param_1[0x15b] = 0x41f00000;
  *(uint *)(param_1 + 299) = *(uint *)(param_1 + 299) & 0xffffff03 | 0x80;
  return param_1;
}



// FUNCTION 14606aebc FUN_14606aebc body=38 status=ok
// SIG undefined FUN_14606aebc(void)

undefined8 FUN_14606aebc(undefined8 param_1,int param_2)

{
  FUN_1415cdfb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14606aeee FUN_14606aeee body=280 status=ok
// SIG undefined FUN_14606aeee(void)

undefined8 * FUN_14606aeee(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14130963a();
  *param_1 = &PTR_FUN_14add27f0;
  *(undefined1 *)((longlong)param_1 + 0x45) = 3;
  param_1[9] = 0;
  uVar2 = FUN_144830b78(param_1 + 10,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 10) = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add4040;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 10) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606b008 FUN_14606b008 body=53 status=ok
// SIG undefined FUN_14606b008(void)

void FUN_14606b008(longlong *param_1)

{
  FUN_14606b03e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14606b03e FUN_14606b03e body=384 status=ok
// SIG undefined FUN_14606b03e(void)

void FUN_14606b03e(longlong *param_1)

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
      FUN_140333f4e(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606b1cc FUN_14606b1cc body=31 status=ok
// SIG undefined FUN_14606b1cc(void)

void FUN_14606b1cc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2c0,0x10);
  FUN_14606b1ec(uVar1);
  return;
}



// FUNCTION 14606b1ec FUN_14606b1ec body=239 status=ok
// SIG undefined FUN_14606b1ec(void)

undefined8 * FUN_14606b1ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd2f620;
  puVar1 = param_1 + 1;
  FUN_14606b518(puVar1);
  FUN_14606b36e(param_1 + 0x42,puVar1);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  uVar2 = FUN_14001cc68(0x58,0x10);
  FUN_14606b2dc(uVar2);
  param_1[0x4b] = uVar2;
  uVar2 = FUN_14001cc68(0x90,0x10);
  FUN_1415ce178(uVar2);
  param_1[0x4c] = uVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  *plVar3 = (longlong)puVar1;
  *(undefined1 *)(plVar3 + 1) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  param_1[0x4d] = plVar3;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  return param_1;
}



// FUNCTION 14606b2dc FUN_14606b2dc body=146 status=ok
// SIG undefined FUN_14606b2dc(void)

undefined8 * FUN_14606b2dc(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14bd2dc90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar1 = (longlong *)FUN_145988e1c();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(float *)((longlong)param_1 + 0x44) = (float)*(double *)(lVar2 + 0x98) * 1000.0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14606b36e FUN_14606b36e body=176 status=ok
// SIG undefined FUN_14606b36e(void)

undefined8 * FUN_14606b36e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bd34e80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_14606bdde();
  uVar1 = (**(code **)(*(longlong *)param_1[3] + 0x278))();
  local_30 = &LAB_14951455c;
  uStack_28 = 0;
  FUN_14606b42a(uVar1,&local_20,param_1);
  param_1[4] = local_20;
  FUN_1412e3d1e(&local_30);
  *(undefined4 *)(param_1 + 5) = (undefined4)local_30;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_30._4_4_;
  *(undefined4 *)(param_1 + 6) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606b42a FUN_14606b42a body=237 status=ok
// SIG undefined FUN_14606b42a(void)

undefined8
FUN_14606b42a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14bd34f40;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606b518 FUN_14606b518 body=505 status=ok
// SIG undefined FUN_14606b518(void)

undefined8 * FUN_14606b518(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14bd2c1e0;
  uVar1 = FUN_14001cc68(0x160,0x10);
  FUN_14606b800(uVar1);
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b),4000);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 2;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  FUN_1446ddc76(param_1 + 0x3f,"__Internal_AllSubjects_Update",1);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x202) = 0;
  local_68 = FUN_14026fec2;
  local_60 = 0;
  FUN_14606b712(&DAT_14c867420,local_58,param_1);
  FUN_1415ce01c(param_1);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606b712 FUN_14606b712 body=237 status=ok
// SIG undefined FUN_14606b712(void)

undefined8
FUN_14606b712(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14bd35330;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606b800 FUN_14606b800 body=990 status=ok
// SIG undefined FUN_14606b800(void)

longlong * FUN_14606b800(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1a),4000);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x22),4000);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uStack_6e = 0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar1 = local_78;
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14bd35e30;
  plStack_80 = plVar9 + 2;
  plVar9[3] = 0;
  plVar9[2] = (longlong)&PTR_FUN_14bd35e50;
  if (plVar9 == (longlong *)0x0) goto LAB_14606b98d;
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  if (plVar9 == local_78) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar7 = local_78;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      iVar4 = *piVar3;
      UNLOCK();
      plVar1 = plVar9;
joined_r0x00014606bb62:
      plVar7 = local_78;
      if (iVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        plVar7 = local_78;
      }
    }
  }
  else {
    plVar7 = plVar9;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar6 = (undefined8 *)*local_78;
        local_78 = plVar9;
        (*(code *)*puVar6)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        goto joined_r0x00014606bb62;
      }
    }
  }
  local_78 = plVar7;
  LOCK();
  plVar1 = plVar9 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar3 = (int *)((longlong)plVar9 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_14606b98d:
  local_98 = 0xcc5911ce4ed2dc4e;
  uStack_90 = 0xa8b24a5a4af0635d;
  uVar10 = FUN_1459f7ae2();
  lVar11 = FUN_14606bd2c(DAT_14c951640,uVar10);
  FUN_1446f470e(&local_a0,L"DefaultVirtualSource",1);
  *(undefined8 *)(lVar11 + 0xb0) = local_a0;
  if (lVar11 == 0) {
    if (local_88 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      local_88 = 0;
    }
    lVar12 = 0;
  }
  else {
    FUN_1401924dc(lVar11);
    if (local_88 != lVar11) {
      if ((local_88 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48(local_88);
      }
      FUN_1401924dc(lVar11);
      local_88 = lVar11;
    }
    lVar12 = local_88;
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48(lVar11);
    }
  }
  uStack_5f = 1;
  (**(code **)(*plStack_80 + 0x10))(plStack_80,lVar11);
  cVar8 = FUN_144a61b4f();
  if (cVar8 == '\0') {
    uVar5 = *(uint *)(lVar12 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    FUN_14482b126(lVar11,0x4000000);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14606bca8(param_1,iVar4);
  }
  lVar11 = *param_1;
  lVar12 = (longlong)iVar4 * 0x40;
  *(undefined8 *)(lVar11 + lVar12) = local_98;
  ((undefined8 *)(lVar11 + lVar12))[1] = uStack_90;
  *(longlong *)(lVar11 + 0x10 + lVar12) = local_88;
  local_88 = 0;
  *(longlong **)(lVar11 + 0x18 + lVar12) = plStack_80;
  *(longlong **)(lVar11 + 0x20 + lVar12) = local_78;
  plStack_80 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  *(ulonglong *)(lVar11 + 0x28 + lVar12) = CONCAT62(uStack_6e,local_70);
  *(ulonglong *)(lVar11 + 0x30 + lVar12) = CONCAT62(uStack_66,uStack_68);
  local_70 = 0;
  uStack_6e = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  *(ushort *)(lVar11 + 0x38 + lVar12) = CONCAT11(uStack_5f,uStack_60);
  FUN_14606bbe0();
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606bbe0 FUN_14606bbe0 body=125 status=ok
// SIG undefined FUN_14606bbe0(void)

void FUN_14606bbe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14606bc5e FUN_14606bc5e body=1 status=ok
// SIG undefined FUN_14606bc5e(void)

void FUN_14606bc5e(void)

{
  return;
}



// FUNCTION 14606bc60 FUN_14606bc60 body=71 status=ok
// SIG undefined FUN_14606bc60(void)

void FUN_14606bc60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459f7ae2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14606bc91;
  }
  param_2 = 0;
LAB_14606bc91:
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0xb0);
  return;
}



// FUNCTION 14606bca8 FUN_14606bca8 body=132 status=ok
// SIG undefined FUN_14606bca8(void)

void FUN_14606bca8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14606bd2c FUN_14606bd2c body=177 status=ok
// SIG undefined FUN_14606bd2c(void)

undefined8 FUN_14606bd2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606bdde FUN_14606bdde body=1941 status=ok
// SIG undefined FUN_14606bdde(void)

void FUN_14606bdde(longlong param_1)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_1f8 [40];
  wchar_t *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined8 *local_188;
  longlong *local_180;
  longlong local_178;
  undefined4 local_170;
  undefined2 *local_168;
  int local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_d8 [32];
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1a0))
            (*(longlong **)(param_1 + 0x18),&local_108,1,1);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1d0 = (wchar_t *)(param_1 + 0x28);
  local_f8 = local_1d0;
  FUN_14606c766(local_b8,&local_118);
  if ((longlong)(int)local_100 != 0) {
    lVar10 = local_108 + (longlong)(int)local_100 * 0x18;
    lVar13 = local_108;
    do {
      uVar6 = FUN_1447addd0(lVar13,0x10);
      plVar8 = (longlong *)FUN_149514b9c(local_b8,uVar6,lVar13);
      iVar7 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar7 + 1U) {
        FUN_1446f84a2(plVar8,iVar7);
      }
      pwVar1 = local_1d0;
      *(undefined8 *)(*plVar8 + (longlong)iVar7 * 8) = *(undefined8 *)(lVar13 + 0x10);
      uVar6 = FUN_1447addd0(local_1d0,0x10);
      iVar7 = FUN_14606c630(local_b8,uVar6,pwVar1);
      lVar14 = (longlong)iVar7 * 0x28 + local_b8[0];
      if (iVar7 == -1) {
        lVar14 = 0;
      }
      iVar7 = *(int *)(lVar14 + 0x18);
      *(uint *)(lVar14 + 0x18) = iVar7 + 1U;
      if (*(uint *)(lVar14 + 0x1c) < iVar7 + 1U) {
        FUN_1446f84a2((longlong *)(lVar14 + 0x10),iVar7);
      }
      *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar7 * 8) =
           *(undefined8 *)(lVar13 + 0x10);
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != lVar10);
  }
  local_118 = 0;
  uStack_110 = 0;
  FUN_14606c9ee(local_b8,&local_118);
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  uVar11 = uStack_110 & 0xffffffff;
  if (-1 < (int)uStack_110) {
    if (uVar11 != 0) {
      FUN_14606c5da(&local_128);
      lVar10 = local_118;
      lVar13 = (longlong)(int)uStack_110;
      if (lVar13 != 0) {
        lVar14 = 0;
        do {
          puVar2 = (undefined4 *)(lVar10 + lVar14);
          if ((((*(int *)(lVar10 + lVar14) == *(int *)(param_1 + 0x28)) &&
               (*(int *)(lVar10 + 4 + lVar14) == *(int *)(param_1 + 0x2c))) &&
              (*(int *)(lVar10 + 8 + lVar14) == *(int *)(param_1 + 0x30))) &&
             (*(int *)(lVar10 + 0xc + lVar14) == *(int *)(param_1 + 0x34))) {
            local_f8 = L"LiveLinkAnySource";
            uStack_f0 = 0x11;
            FUN_1446e940c(&local_148,&local_f8);
            local_f8 = L"LiveLinkMotionController";
            uStack_f0 = 0x18;
            FUN_1446e940c(&local_168,&local_f8);
            FUN_140208bae(&local_f8,&local_168,&local_148,&DAT_149e26db4);
          }
          else {
            local_138 = *puVar2;
            uStack_134 = puVar2[1];
            uStack_130 = puVar2[2];
            uStack_12c = puVar2[3];
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x110))
                      (*(longlong **)(param_1 + 0x18),&local_f8);
          }
          uVar11 = uStack_120;
          lVar16 = (longlong)(int)uStack_120;
          uVar5 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
          if (uStack_120._4_4_ < uVar5) {
            FUN_149514d3a(&local_128,uVar11 & 0xffffffff);
          }
          plVar15 = local_128;
          uVar6 = puVar2[1];
          uVar3 = puVar2[2];
          uVar4 = puVar2[3];
          plVar8 = local_128 + lVar16 * 4;
          *(undefined4 *)plVar8 = *puVar2;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar6;
          *(undefined4 *)(plVar8 + 1) = uVar3;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar4;
          local_128[lVar16 * 4 + 2] = (longlong)local_f8;
          if (local_f8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8 + 8))();
          }
          *(undefined4 *)(plVar15 + lVar16 * 4 + 3) = uStack_f0;
          if (local_f8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_f8 + 0x10))();
          }
          lVar14 = lVar14 + 0x10;
        } while (lVar13 * 0x10 != lVar14);
      }
    }
    local_f8 = *(wchar_t **)local_1d0;
    uStack_f0 = *(undefined4 *)(local_1d0 + 4);
    uStack_ec = *(undefined4 *)(local_1d0 + 6);
    FUN_14606ce3b(local_128,uStack_120 & 0xffffffff,&local_f8);
    pwVar1 = (wchar_t *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) < 0) {
      FUN_14951507e(pwVar1,0);
    }
    uVar11 = (ulonglong)local_100;
    if (-1 < (int)local_100) {
      if (*(int *)(param_1 + 0x14) < (int)local_100) {
        FUN_14951507e(pwVar1);
      }
      if ((longlong)(int)uStack_120 == 0) {
        uVar11 = 0;
      }
      else {
        plVar15 = local_128 + (longlong)(int)uStack_120 * 4;
        plVar8 = local_128;
        local_1d0 = pwVar1;
        do {
          uVar6 = FUN_1447addd0(plVar8,0x10);
          iVar7 = FUN_14606c630(local_b8,uVar6,plVar8);
          lVar10 = (longlong)iVar7 * 0x28 + local_b8[0];
          if (iVar7 == -1) {
            lVar10 = 0;
          }
          local_148 = (undefined8 *)0x0;
          local_140 = *(int *)(lVar10 + 0x18);
          lVar13 = (longlong)local_140;
          _Src = *(void **)(lVar10 + 0x10);
          if (lVar13 == 0) {
            local_13c = 0;
            iVar7 = 0;
          }
          else {
            FUN_1401b309e(&local_148,local_140,0);
            memcpy(local_148,_Src,lVar13 << 3);
            iVar7 = local_140;
          }
          FUN_14063460b(local_148,iVar7);
          if ((longlong)local_140 != 0) {
            local_1b0 = local_148 + local_140;
            local_1b8 = plVar8 + 2;
            puVar17 = local_148;
            do {
              local_1c0 = *puVar17;
              local_150 = local_1c0;
              FUN_1400021e4(&local_150,local_198);
              FUN_14146ec20(&local_f8,local_198);
              puVar9 = (undefined8 *)FUN_1447a1f4a(local_1b8);
              local_1a8 = (void *)0x0;
              local_1a0 = *(int *)(puVar9 + 1);
              lVar10 = (longlong)local_1a0;
              local_1c8 = (void *)*puVar9;
              if (lVar10 == 0) {
                local_19c = 0;
              }
              else {
                FUN_1446dd670(&local_1a8,local_1a0,0);
                memcpy(local_1a8,local_1c8,lVar10 * 2);
              }
              FUN_14146ec20(local_d8,&local_1a8);
              local_180 = local_b8;
              local_188 = &local_f8;
              FUN_1407adb6e(&local_178,&local_188);
              FUN_140230a2e(&local_168,L"{0} ({1})",&local_178);
              puVar12 = &DAT_149dfb77a;
              if (local_160 != 0) {
                puVar12 = local_168;
              }
              FUN_1446f470e(&local_158,puVar12);
              if (local_168 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_1407adb3e(local_178,local_170);
              if (local_178 != 0) {
                FUN_1400020a8();
              }
              lVar10 = 0x40;
              do {
                if (*(longlong *)((longlong)&local_108 + lVar10) != 0) {
                  FUN_1400020a8();
                }
                lVar10 = lVar10 + -0x20;
              } while (lVar10 != 0);
              local_f8 = (wchar_t *)*plVar8;
              uStack_f0 = (undefined4)plVar8[1];
              uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
              iVar7 = *(int *)(param_1 + 0x10);
              *(uint *)(param_1 + 0x10) = iVar7 + 1U;
              if (*(uint *)(param_1 + 0x14) < iVar7 + 1U) {
                FUN_1495150de(local_1d0,iVar7);
              }
              lVar10 = *(longlong *)local_1d0;
              lVar13 = (longlong)iVar7 * 0x20;
              puVar2 = (undefined4 *)(lVar10 + lVar13);
              *puVar2 = (undefined4)local_f8;
              puVar2[1] = local_f8._4_4_;
              puVar2[2] = uStack_f0;
              puVar2[3] = uStack_ec;
              *(undefined8 *)(lVar10 + 0x10 + lVar13) = local_1c0;
              *(undefined8 *)(lVar10 + 0x18 + lVar13) = local_158;
              puVar17 = puVar17 + 1;
            } while (puVar17 != local_1b0);
          }
          if (local_148 != (undefined8 *)0x0) {
            FUN_1400020a8(local_148);
          }
          plVar8 = plVar8 + 4;
        } while (plVar8 != plVar15);
        uVar11 = uStack_120 & 0xffffffff;
      }
      FUN_14606c574(local_128,uVar11);
      if (local_128 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_14606c5a4(local_b8);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar11);
}



// FUNCTION 14606c574 FUN_14606c574 body=48 status=ok
// SIG undefined FUN_14606c574(void)

void FUN_14606c574(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14606c5a4 FUN_14606c5a4 body=53 status=ok
// SIG undefined FUN_14606c5a4(void)

void FUN_14606c5a4(longlong *param_1)

{
  FUN_14606cb30();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14606c5da FUN_14606c5da body=86 status=ok
// SIG undefined FUN_14606c5da(void)

void FUN_14606c5da(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14606c630 FUN_14606c630 body=113 status=ok
// SIG undefined FUN_14606c630(void)

int FUN_14606c630(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14606c6a2 FUN_14606c6a2 body=194 status=ok
// SIG undefined FUN_14606c6a2(void)

undefined8 *
FUN_14606c6a2(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 *local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = lVar3 + 0x150;
  FUN_14490b2fc(lVar1);
  iVar2 = *(int *)(lVar3 + 0x18);
  FUN_144a6a7be(lVar1);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_149519b5a(param_2,iVar2);
  }
  local_40 = &local_60;
  local_48 = FUN_14453df9a;
  local_60 = param_1;
  local_58 = param_3;
  local_57 = param_4;
  local_50 = param_2;
  FUN_14014a076(*(undefined8 *)(param_1 + 8));
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606c766 FUN_14606c766 body=298 status=ok
// SIG undefined FUN_14606c766(void)

undefined4 * FUN_14606c766(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14606c906(param_1,local_48);
  uVar1 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_1447addd0(local_40,0x10);
  cVar3 = FUN_14606c892(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_14606cc76(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606c892 FUN_14606c892 body=115 status=ok
// SIG undefined FUN_14606c892(void)

undefined8 FUN_14606c892(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_14606c630(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_149514b2a(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 14606c906 FUN_14606c906 body=231 status=ok
// SIG undefined FUN_14606c906(void)

int * FUN_14606c906(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14606c9ee FUN_14606c9ee body=321 status=ok
// SIG undefined FUN_14606c9ee(void)

void FUN_14606c9ee(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
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
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar5) {
    FUN_140504644(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar6 = (undefined4 *)((longlong)iStack_54 * 0x28 + *local_70);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_140c60952(param_2,iVar5);
      }
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
      *puVar1 = *puVar6;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606cb30 FUN_14606cb30 body=324 status=ok
// SIG undefined FUN_14606cb30(void)

void FUN_14606cb30(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606cc76 FUN_14606cc76 body=452 status=ok
// SIG undefined FUN_14606cc76(void)

void FUN_14606cc76(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 14606ce3b FUN_14606ce3b body=895 status=ok
// SIG undefined FUN_14606ce3b(void)

void FUN_14606ce3b(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_3a8 [44];
  int local_37c;
  longlong *local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_358[0] = (undefined4)(longlong)(fVar18 + fVar18);
    local_378 = &local_368;
    do {
      puVar12 = (undefined8 *)*local_378;
      puVar13 = (undefined8 *)local_378[1];
      local_37c = (int)local_378[2];
      uVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar12) >> 5) + 1;
      puVar15 = puVar13;
      puVar14 = puVar12;
      if (local_37c != 0) {
LAB_14606cf14:
        local_370 = puVar14;
        if (8 < (int)uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 1);
          uVar1 = puVar12[uVar9 * 4];
          uVar2 = (puVar12 + uVar9 * 4)[1];
          local_58 = puVar12[uVar9 * 4 + 2];
          uStack_50 = (puVar12 + uVar9 * 4 + 2)[1];
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[3];
          puVar12[uVar9 * 4 + 2] = puVar12[2];
          (puVar12 + uVar9 * 4 + 2)[1] = uVar5;
          puVar12[uVar9 * 4] = uVar3;
          (puVar12 + uVar9 * 4)[1] = uVar4;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar12[2] = local_58;
          puVar12[3] = uStack_50;
          *(undefined4 *)puVar12 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar12 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar12 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_60._4_4_;
          puVar17 = puVar15 + 4;
          puVar11 = puVar12;
          local_68 = uVar1;
          uStack_60 = uVar2;
          do {
            puVar6 = puVar11 + 4;
            puVar16 = puVar11 + 4;
            do {
              puVar11 = puVar16;
              puVar14 = puVar6;
              if (puVar15 < puVar11) break;
              cVar7 = FUN_14951503c(param_3,puVar12,puVar11);
              puVar6 = puVar14 + 4;
              puVar16 = puVar11 + 4;
            } while (cVar7 == '\0');
            puVar6 = puVar17 + -8;
            do {
              puVar16 = puVar17;
              puVar10 = puVar6;
              puVar17 = puVar16 + -4;
              if (puVar17 <= puVar12) break;
              cVar7 = FUN_14951503c(param_3,puVar17,puVar12);
              puVar6 = puVar10 + -4;
            } while (cVar7 == '\0');
            if (puVar17 < puVar11) goto LAB_14606d014;
            uVar1 = *puVar11;
            uVar2 = puVar11[1];
            local_58 = puVar11[2];
            uStack_50 = puVar11[3];
            uVar3 = *puVar17;
            uVar4 = puVar16[-3];
            uVar5 = puVar16[-1];
            puVar11[2] = puVar16[-2];
            puVar11[3] = uVar5;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            local_68._0_4_ = (undefined4)uVar1;
            local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar2;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar16[-2] = local_58;
            puVar16[-1] = uStack_50;
            *(undefined4 *)puVar17 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar16 + -0x1c) = local_68._4_4_;
            *(undefined4 *)(puVar16 + -3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar16 + -0x14) = uStack_60._4_4_;
            local_68 = uVar1;
            uStack_60 = uVar2;
          } while( true );
        }
        for (; puVar14 = puVar12, puVar13 = puVar12, puVar12 < puVar15; puVar15 = puVar15 + -4) {
          while (puVar17 = puVar14, puVar13 = puVar13 + 4, puVar13 <= puVar15) {
            cVar7 = FUN_14951503c(param_3,puVar17,puVar13);
            puVar14 = puVar13;
            if (cVar7 == '\0') {
              puVar14 = puVar17;
            }
          }
          uVar1 = *puVar17;
          uVar2 = puVar17[1];
          local_58 = puVar17[2];
          uStack_50 = puVar17[3];
          uVar3 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[3];
          puVar17[2] = puVar15[2];
          puVar17[3] = uVar5;
          *puVar17 = uVar3;
          puVar17[1] = uVar4;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar15[2] = local_58;
          puVar15[3] = uStack_50;
          *(undefined4 *)puVar15 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
          local_68 = uVar1;
          uStack_60 = uVar2;
        }
        goto LAB_14606d18a;
      }
LAB_14606d1ae:
      FUN_149514dbf(puVar12,uVar8,param_3);
LAB_14606d18a:
      local_378 = local_378 + -3;
    } while (&local_368 <= local_378);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14606d014:
  uVar1 = *puVar12;
  uVar2 = puVar12[1];
  local_58 = puVar12[2];
  uStack_50 = puVar12[3];
  uVar3 = *puVar17;
  uVar4 = puVar16[-3];
  uVar5 = puVar16[-1];
  puVar12[2] = puVar16[-2];
  puVar12[3] = uVar5;
  *puVar12 = uVar3;
  puVar12[1] = uVar4;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  puVar16[-2] = local_58;
  puVar16[-1] = uStack_50;
  *(undefined4 *)puVar17 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar16 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar16 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar16 + -0x14) = uStack_60._4_4_;
  local_37c = local_37c + -1;
  puVar16 = puVar16 + -8;
  local_68 = uVar1;
  uStack_60 = uVar2;
  if ((longlong)puVar10 - (longlong)local_370 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar11 < puVar15) {
      *local_378 = (longlong)puVar11;
      local_378[1] = (longlong)puVar15;
      *(int *)(local_378 + 2) = local_37c;
      local_378 = local_378 + 3;
    }
    puVar14 = puVar12;
    puVar13 = puVar10;
    if (puVar17 <= puVar12 + 4) goto LAB_14606d18a;
  }
  else {
    if (puVar12 + 4 < puVar17) {
      *local_378 = (longlong)puVar12;
      local_378[1] = (longlong)puVar16;
      *(int *)(local_378 + 2) = local_37c;
      local_378 = local_378 + 3;
    }
    puVar12 = puVar11;
    puVar16 = puVar15;
    puVar13 = puVar15;
    if (puVar15 <= puVar11) goto LAB_14606d18a;
  }
  uVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar14) >> 5) + 1;
  puVar15 = puVar16;
  local_370 = puVar14;
  if (local_37c == 0) goto LAB_14606d1ae;
  goto LAB_14606cf14;
}



// FUNCTION 14606d1bc FUN_14606d1bc body=158 status=ok
// SIG undefined FUN_14606d1bc(void)

bool FUN_14606d1bc(longlong param_1,undefined8 param_2)

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



// FUNCTION 14606d266 FUN_14606d266 body=567 status=ok
// SIG undefined FUN_14606d266(void)

void FUN_14606d266(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1447715ec(param_1 + 0x1c,param_2 + 8);
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 != 0) {
    plVar1 = param_1 + 0x27;
    lVar3 = param_1[0x27];
    if (lVar3 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar6;
      lVar7 = FUN_144a61814(uVar4,plVar1);
      if (lVar7 != 0) {
        FUN_1405a424c(uVar4,lVar3);
      }
      *plVar1 = 0;
    }
    iVar2 = (int)param_1[0x1c];
    if (((iVar2 != 0) && (*(int *)((longlong)param_1 + 0xe4) != 0)) && (iVar2 != DAT_14c948000)) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar6;
      lVar5 = param_1[0x26];
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar6 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_c0[2] = lVar7;
      *local_c0 = &PTR_FUN_14b9af1a0;
      local_c0[3] = 0;
      FUN_14485c47a(local_c0 + 3,param_1);
      *(undefined4 *)(puVar6 + 5) = 0;
      puVar6[4] = FUN_145fda108;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(uVar4,plVar1,&local_a8,(int)lVar5);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_c0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606d49e FUN_14606d49e body=143 status=ok
// SIG undefined FUN_14606d49e(void)

void FUN_14606d49e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    local_18 = *(undefined8 *)(param_2 + 8);
    FUN_14606d52e(&local_18,0);
    lVar1 = FUN_1400f3ad8(param_1 + 0x44);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1415ce38e(lVar1,&local_18,0);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606d52e FUN_14606d52e body=343 status=ok
// SIG undefined FUN_14606d52e(void)

void FUN_14606d52e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400021e4(param_1,&local_48);
  if ((longlong)local_40 != 0) {
    uVar1 = 0;
    do {
      if (*(short *)(local_48 + uVar1) == 0x3a) {
        if ((int)(~uVar1 >> 1) != 0) {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          FUN_140056680(local_78,&DAT_149e31048);
          FUN_1407cdba6(&local_48,local_78,&local_58,&local_68);
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          iVar2 = (int)uStack_50 + -1;
          if ((int)uStack_50 == 0) {
            iVar2 = 0;
          }
          FUN_1446f82e2(local_78,iVar2,local_58,1);
          *param_1 = local_78[0];
          if (param_2 != (longlong *)0x0) {
            iVar2 = (int)uStack_60 + -1;
            if ((int)uStack_60 == 0) {
              iVar2 = 0;
            }
            FUN_1446f82e2(local_78,iVar2,local_68,1);
            *param_2 = local_78[0];
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      uVar1 = uVar1 + 2;
    } while ((longlong)local_40 * 2 != uVar1);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606d686 FUN_14606d686 body=188 status=ok
// SIG undefined FUN_14606d686(void)

undefined8 * FUN_14606d686(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140056680(local_38,L"AccountId");
  FUN_140056680(local_48,L"Unreal Engine/Identifiers");
  FUN_140056680(local_58,L"Epic Games");
  FUN_14606d744(local_58,local_48,local_38,param_1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606d744 FUN_14606d744 body=395 status=ok
// SIG undefined FUN_14606d744(void)

undefined4
FUN_14606d744(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_78,L"Software");
  iVar2 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(&local_68,&local_78,iVar2 + 1 + (uint)(local_70 == 0));
  FUN_1401aebe8(&local_68,*param_1,iVar2);
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(&local_58,&local_68,iVar2 + 1 + (uint)(local_60 == 0));
  FUN_1401aebe8(&local_58,*param_2,iVar2);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_88 = 1;
  FUN_140807d8e(&local_58,&local_68,&DAT_149e065c6,&DAT_149e01f64);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  local_50 = local_60;
  local_4c = local_5c;
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  if (local_60 == 0) {
    local_68 = &DAT_149dfb77a;
  }
  uVar1 = FUN_145ca351c(0xffffffff80000001,local_68,puVar3,param_4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606d8d0 FUN_14606d8d0 body=209 status=ok
// SIG undefined FUN_14606d8d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14606d8d0(void)

{
  if ((DAT_14cb2ebcf & 2) == 0) {
    DAT_14cb2ebcf = DAT_14cb2ebcf | 2;
    _DAT_14cb2eb70 = L"FNiagaraUpdateMeshGPUSceneInstancesCS";
    _DAT_14cb2eb88 = FUN_146826540;
    _DAT_14cb2eb90 = FUN_146825d77;
    _DAT_14cb2eb98 = FUN_146825fd6;
    _DAT_14cb2eba0 = FUN_1407e02ea;
    _DAT_14cb2eba8 = FUN_146826273;
    _DAT_14cb2eb80 = FUN_14804d382;
    _DAT_14cb2ebc0 = 0xffffffff000000e0;
    _DAT_14cb2ebc8 = 8;
    DAT_14cb2ebcc = 0;
    _DAT_14cb2ebb0 = &LAB_14804d3ac;
    FUN_14606d9a2(&DAT_14cb2eb68);
    FUN_1407e00cc(&DAT_14cb2eb68);
  }
  return &DAT_14cb2eb68;
}



// FUNCTION 14606d9a2 FUN_14606d9a2 body=116 status=ok
// SIG undefined FUN_14606d9a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606d9a2(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14cb355a0 = L"BASE";
  DAT_14cb355ca = 4;
  lVar1 = FUN_140b35ae4();
  _DAT_14cb355b8 = &LAB_14682652b;
  _DAT_14cb355c0 = 0x100000000;
  _DAT_14cb355b0 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14cb355a8 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14cb355a0;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14606da16 FUN_14606da16 body=265 status=ok
// SIG undefined FUN_14606da16(void)

undefined * FUN_14606da16(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33ab0) {
    FUN_144b3d300(&DAT_14cb33ab0);
    if (DAT_14cb33ab0 == -1) {
      FUN_1415f1b7e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FUpdateMeshParticleInstancesParams";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x10;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb718);
      _Init_thread_footer(&DAT_14cb33ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606db20 FUN_14606db20 body=298 status=ok
// SIG undefined FUN_14606db20(void)

void FUN_14606db20(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_50 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_2 == '\0') {
    FUN_145a0590e();
  }
  else {
    FUN_14606dc4c();
    lVar1 = param_1[10];
    if (lVar1 != 0) {
      FUN_14119d664(param_1[8],&local_60);
      _Src = local_60;
      local_50[0] = 1;
      local_48 = (void *)0x0;
      local_40 = local_58;
      if ((longlong)local_58 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_58,0);
        memcpy(local_48,_Src,(longlong)local_58 * 2);
      }
      FUN_145c2b718(lVar1,local_50,1);
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x148))(param_1,1);
    }
  }
  if (((int)param_1[0x13] != 0) && (plVar2 = (longlong *)param_1[0x12], plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606dc4c FUN_14606dc4c body=207 status=ok
// SIG undefined FUN_14606dc4c(void)

void FUN_14606dc4c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_149e06450;
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
    local_28[2] = lVar2;
    *local_28 = &PTR_FUN_14b4ea490;
    FUN_14606dd1c(param_1,param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606dd1c FUN_14606dd1c body=210 status=ok
// SIG undefined FUN_14606dd1c(void)

void FUN_14606dd1c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_14606ddef(param_2,param_3);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_14606de80(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606ddef FUN_14606ddef body=145 status=ok
// SIG undefined FUN_14606ddef(void)

undefined8 * FUN_14606ddef(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b4ea500;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar2 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  puVar2[6] = param_1;
  puVar2[2] = &PTR_FUN_14b4ea520;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14114e6dc(puVar2 + 7,param_2);
  *(undefined1 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 14606de80 FUN_14606de80 body=162 status=ok
// SIG undefined FUN_14606de80(void)

void FUN_14606de80(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14606debf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14606debf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14606debf:
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
                    /* WARNING: Could not recover jumptable at 0x00014606df1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14606df2e FUN_14606df2e body=281 status=ok
// SIG undefined FUN_14606df2e(void)

undefined8 * FUN_14606df2e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4d0c00;
  param_1[8] = &PTR_FUN_14a4d0ee0;
  lVar1 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x78);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar1 + 0x80);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606e048 FUN_14606e048 body=65 status=ok
// SIG undefined FUN_14606e048(void)

void FUN_14606e048(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0x140) != 0)) {
    FUN_147a0cb56(*(longlong *)(param_1 + 0x118),param_1 + 0x140);
  }
  FUN_14606e08a(param_1);
  FUN_1400f80f0(param_1);
  return;
}



// FUNCTION 14606e08a FUN_14606e08a body=228 status=ok
// SIG undefined FUN_14606e08a(void)

void FUN_14606e08a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x128) << 4;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x120) + 8);
    do {
      if (plVar2[-1] != 0) {
        FUN_1407a4724();
        lVar1 = plVar2[-1];
        if (lVar1 != 0) {
          FUN_1449db362(lVar1 + 0x38);
          FUN_1449db362(lVar1 + 0x28);
          FUN_1449db362(lVar1 + 0x18);
          FUN_1400020a8(lVar1);
        }
        plVar2[-1] = 0;
      }
      if (*plVar2 != 0) {
        lVar1 = *(longlong *)(*plVar2 + 8);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x260), lVar1 != 0)) {
          FUN_142a2e46a(plVar2,lVar1,0);
        }
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) < 0) {
    FUN_147c86958(param_1 + 0x120);
    return;
  }
  return;
}



// FUNCTION 14606e16e FUN_14606e16e body=210 status=ok
// SIG undefined FUN_14606e16e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e16e(void)

{
  if ((DAT_14cb3b727 & 2) == 0) {
    DAT_14cb3b727 = DAT_14cb3b727 | 2;
    _DAT_14cb3b6c8 = L"FNiagaraDataInterfaceParametersCS_Grid3DCollection";
    _DAT_14cb3b6e0 = FUN_146826540;
    _DAT_14cb3b6e8 = FUN_146825d77;
    _DAT_14cb3b6f0 = FUN_146825fd6;
    _DAT_14cb3b6f8 = FUN_1407e02ea;
    _DAT_14cb3b700 = FUN_146826273;
    _DAT_14cb3b6d8 = FUN_148165770;
    _DAT_14cb3b718 = 0xffffffff00000020;
    _DAT_14cb3b720 = 8;
    DAT_14cb3b724 = 0;
    _DAT_14cb3b708 = &LAB_1481657be;
    FUN_14606e2bc();
    FUN_14606e240();
    FUN_1407e00cc(&DAT_14cb3b6c0);
    return;
  }
  return;
}



// FUNCTION 14606e240 FUN_14606e240 body=123 status=ok
// SIG undefined FUN_14606e240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e240(void)

{
  _DAT_14cb3bfb0 = L"BASE";
  DAT_14cb3bfda = 4;
  _DAT_14cb3bfb8 = FUN_145d493dc();
  _DAT_14cb3bfc0 = DAT_14cb3b6d0;
  _DAT_14cb3bfc8 = &LAB_14682652b;
  DAT_14cb3b6d0 = &DAT_14cb3bfb0;
  DAT_14cb3b725 = DAT_14cb3b725 + '\x01';
  _DAT_14cb3bfd0 = 0x100000000;
  if (*(char *)(_DAT_14cb3bfb8 + 100) != '\0') {
    DAT_14cb3b726 = DAT_14cb3b726 + '\x01';
  }
  return;
}



// FUNCTION 14606e2bc FUN_14606e2bc body=276 status=ok
// SIG undefined FUN_14606e2bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e2bc(void)

{
  FUN_14606e3d0();
  _DAT_14cb3ba10 = L"AttributeNames";
  DAT_14cb3ba3a = FUN_140850cc5();
  if ((DAT_14cb3c0df & 2) == 0) {
    DAT_14cb3c0df = DAT_14cb3c0df | 3;
    _DAT_14cb3c080 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb3c098 = &LAB_14816c644;
    _DAT_14cb3c0a0 = FUN_14816c652;
    _DAT_14cb3c0a8 = &LAB_14816c672;
    _DAT_14cb3c0b0 = &LAB_14816c680;
    _DAT_14cb3c0b8 = &LAB_14816c68e;
    _DAT_14cb3c090 = FUN_14816c69a;
    _DAT_14cb3c0d0 = 0x1000000010;
    _DAT_14cb3c0d8 = 8;
    DAT_14cb3c0dc = 0;
  }
  _DAT_14cb3ba18 = &DAT_14cb3c078;
  _DAT_14cb3ba28 = &LAB_14682652b;
  _DAT_14cb3ba30 = 0x100000000;
  _DAT_14cb3ba38 = 0;
  _DAT_14cb3ba20 = DAT_14cb3b6d0;
  DAT_14cb3b6d0 = &DAT_14cb3ba10;
  return;
}



// FUNCTION 14606e3d0 FUN_14606e3d0 body=270 status=ok
// SIG undefined FUN_14606e3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e3d0(void)

{
  _DAT_14cb3ba40 = L"AttributeChannelCount";
  DAT_14cb3ba6a = FUN_140850cc5();
  if ((DAT_14ca7788f & 2) == 0) {
    DAT_14ca7788f = DAT_14ca7788f | 3;
    _DAT_14ca77830 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca77848 = &LAB_14738c39c;
    _DAT_14ca77850 = FUN_14738c3aa;
    _DAT_14ca77858 = &LAB_14738c3ca;
    _DAT_14ca77860 = &LAB_14738c3d8;
    _DAT_14ca77868 = &LAB_14738c3e6;
    _DAT_14ca77840 = FUN_14738c3f2;
    _DAT_14ca77880 = 0x1000000010;
    _DAT_14ca77888 = 8;
    DAT_14ca7788c = 0;
  }
  _DAT_14cb3ba48 = &DAT_14ca77828;
  _DAT_14cb3ba58 = &LAB_14682652b;
  _DAT_14cb3ba60 = &DAT_100000010;
  _DAT_14cb3ba68 = 0;
  _DAT_14cb3ba50 = DAT_14cb3b6d0;
  DAT_14cb3b6d0 = &DAT_14cb3ba40;
  return;
}



// FUNCTION 14606e4de FUN_14606e4de body=210 status=ok
// SIG undefined FUN_14606e4de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e4de(void)

{
  if ((DAT_14cb3c527 & 2) == 0) {
    DAT_14cb3c527 = DAT_14cb3c527 | 2;
    _DAT_14cb3c4c8 = L"FNiagaraDataInterfaceParametersCS_ParticleRead";
    _DAT_14cb3c4e0 = FUN_146826540;
    _DAT_14cb3c4e8 = FUN_146825d77;
    _DAT_14cb3c4f0 = FUN_146825fd6;
    _DAT_14cb3c4f8 = FUN_1407e02ea;
    _DAT_14cb3c500 = FUN_146826273;
    _DAT_14cb3c4d8 = FUN_1481771da;
    _DAT_14cb3c518 = 0xffffffff00000020;
    _DAT_14cb3c520 = 8;
    DAT_14cb3c524 = 0;
    _DAT_14cb3c508 = &LAB_148177228;
    FUN_14606e62c();
    FUN_14606e5b0();
    FUN_1407e00cc(&DAT_14cb3c4c0);
    return;
  }
  return;
}



// FUNCTION 14606e5b0 FUN_14606e5b0 body=123 status=ok
// SIG undefined FUN_14606e5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e5b0(void)

{
  _DAT_14cb3cc70 = L"BASE";
  DAT_14cb3cc9a = 4;
  _DAT_14cb3cc78 = FUN_145d493dc();
  _DAT_14cb3cc80 = DAT_14cb3c4d0;
  _DAT_14cb3cc88 = &LAB_14682652b;
  DAT_14cb3c4d0 = &DAT_14cb3cc70;
  DAT_14cb3c525 = DAT_14cb3c525 + '\x01';
  _DAT_14cb3cc90 = 0x100000000;
  if (*(char *)(_DAT_14cb3cc78 + 100) != '\0') {
    DAT_14cb3c526 = DAT_14cb3c526 + '\x01';
  }
  return;
}



// FUNCTION 14606e62c FUN_14606e62c body=276 status=ok
// SIG undefined FUN_14606e62c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e62c(void)

{
  FUN_14606e740();
  _DAT_14cb3c870 = L"AttributeNames";
  DAT_14cb3c89a = FUN_140850cc5();
  if ((DAT_14cb3c0df & 2) == 0) {
    DAT_14cb3c0df = DAT_14cb3c0df | 3;
    _DAT_14cb3c080 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb3c098 = &LAB_14816c644;
    _DAT_14cb3c0a0 = FUN_14816c652;
    _DAT_14cb3c0a8 = &LAB_14816c672;
    _DAT_14cb3c0b0 = &LAB_14816c680;
    _DAT_14cb3c0b8 = &LAB_14816c68e;
    _DAT_14cb3c090 = FUN_14816c69a;
    _DAT_14cb3c0d0 = 0x1000000010;
    _DAT_14cb3c0d8 = 8;
    DAT_14cb3c0dc = 0;
  }
  _DAT_14cb3c878 = &DAT_14cb3c078;
  _DAT_14cb3c888 = &LAB_14682652b;
  _DAT_14cb3c890 = 0x100000000;
  _DAT_14cb3c898 = 0;
  _DAT_14cb3c880 = DAT_14cb3c4d0;
  DAT_14cb3c4d0 = &DAT_14cb3c870;
  return;
}



// FUNCTION 14606e740 FUN_14606e740 body=270 status=ok
// SIG undefined FUN_14606e740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14606e740(void)

{
  _DAT_14cb3c8a0 = L"AttributeTypes";
  DAT_14cb3c8ca = FUN_140850cc5();
  if ((DAT_14cb3c937 & 2) == 0) {
    DAT_14cb3c937 = DAT_14cb3c937 | 3;
    _DAT_14cb3c8d8 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb3c8f0 = &LAB_148180480;
    _DAT_14cb3c8f8 = FUN_14818048e;
    _DAT_14cb3c900 = &LAB_1481804ae;
    _DAT_14cb3c908 = &LAB_1481804bc;
    _DAT_14cb3c910 = &LAB_1481804ca;
    _DAT_14cb3c8e8 = FUN_1481804d6;
    _DAT_14cb3c928 = 0x1000000010;
    _DAT_14cb3c930 = 8;
    DAT_14cb3c934 = 0;
  }
  _DAT_14cb3c8a8 = &DAT_14cb3c8d0;
  _DAT_14cb3c8b8 = &LAB_14682652b;
  _DAT_14cb3c8c0 = &DAT_100000010;
  _DAT_14cb3c8c8 = 0;
  _DAT_14cb3c8b0 = DAT_14cb3c4d0;
  DAT_14cb3c4d0 = &DAT_14cb3c8a0;
  return;
}



// FUNCTION 14606e858 FUN_14606e858 body=150 status=ok
// SIG undefined FUN_14606e858(void)

void FUN_14606e858(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x84) == '\x01') {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  FUN_14606e8ee(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014606e8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14606e8ee FUN_14606e8ee body=73 status=ok
// SIG undefined FUN_14606e8ee(void)

void FUN_14606e8ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14606e938 FUN_14606e938 body=61 status=ok
// SIG undefined FUN_14606e938(void)

void FUN_14606e938(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b42a500;
  FUN_1449db362(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014606e971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14606e976 FUN_14606e976 body=25 status=ok
// SIG undefined FUN_14606e976(void)

undefined8 FUN_14606e976(undefined8 param_1,undefined8 param_2)

{
  FUN_14606e990(param_2);
  return param_2;
}



// FUNCTION 14606e990 FUN_14606e990 body=487 status=ok
// SIG undefined FUN_14606e990(void)

undefined8 * FUN_14606e990(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb76220 != (longlong *)0x0 && DAT_14cb76228 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb76220 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb76220;
    if (DAT_14cb76228 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14606eaa5;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_14b3f4e50;
  FUN_1409e1656(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b3f4de0;
  puVar3[4] = &PTR_FUN_14b3f4e00;
  *(undefined1 *)(puVar3 + 5) = 1;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3f4e70;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14606eaa5;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14606eaa5;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14606eb1c:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14606ea9b;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_14606eb1c;
      puVar3[3] = plVar4;
    }
LAB_14606ea9b:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14606eaa5:
  *param_1 = local_40;
  param_1[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14606eb78 FUN_14606eb78 body=50 status=ok
// SIG undefined FUN_14606eb78(void)

void FUN_14606eb78(longlong param_1)

{
  FUN_144a63f30();
  FUN_14606ee6c(param_1 + 0xb08);
  FUN_14606ec40(param_1 + 0xb38);
  FUN_14606ebaa(param_1);
  return;
}



// FUNCTION 14606ebaa FUN_14606ebaa body=149 status=ok
// SIG undefined FUN_14606ebaa(void)

void FUN_14606ebaa(longlong param_1)

{
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0xafc) < 0) {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    FUN_1402191ca(param_1 + 0xaf0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
  }
  local_48 = 0;
  local_38 = &PTR_LAB_14bb76d80;
  local_58 = FUN_1444996a8;
  local_30 = param_1;
  FUN_14606ecf0(param_1 + 0xb08);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606ec40 FUN_14606ec40 body=175 status=ok
// SIG undefined FUN_14606ec40(void)

void FUN_14606ec40(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    FUN_1491c5000(plVar1);
    FUN_1491c5144(plVar1);
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = (longlong)(int)param_1[1] * 0x18;
    pbVar4 = (byte *)(*param_1 + 0xc);
    do {
      uVar3 = *(undefined8 *)(pbVar4 + 4);
      uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar5 = (uint)uVar3 & 0xffff;
      uVar3 = FUN_1491c5262(plVar1,(uint)*pbVar4 +
                                   (((uint)uVar3 << 0x10 | uVar5) + (int)((ulonglong)uVar3 >> 0x20)
                                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 10,pbVar4);
      FUN_149197016(uVar3,pbVar4 + -0xc);
      pbVar4 = pbVar4 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14606ecf0 FUN_14606ecf0 body=379 status=ok
// SIG undefined FUN_14606ecf0(void)

void FUN_14606ecf0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_1 + 0x18);
  lVar10 = (longlong)local_58;
  _Src = *(void **)(param_1 + 0x10);
  if (lVar10 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1491d2aa4(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar10 << 3);
    if (0 < local_58) {
      lVar10 = 0;
      do {
        local_50 = *(undefined8 *)((longlong)local_60 + lVar10 * 8);
        pcVar2 = (code *)*param_2;
        plVar9 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar9 = param_2 + 4;
        }
        uVar6 = (**(code **)(*plVar9 + 8))();
        cVar5 = (*pcVar2)(uVar6,&local_50);
        iVar4 = local_58;
        if (cVar5 == '\0') break;
        lVar3 = *(longlong *)((longlong)local_60 + lVar10 * 8);
        uVar1 = *(uint *)(lVar3 + 0x168);
        if ((longlong)(int)uVar1 != 0) {
          lVar11 = (longlong)local_58;
          iVar7 = local_58 + uVar1;
          uVar8 = local_54 - local_58;
          local_58 = iVar7;
          if (uVar8 < uVar1) {
            FUN_1491d2a1e(&local_60,iVar4);
          }
          memcpy((void *)((longlong)local_60 + lVar11 * 8),*(void **)(lVar3 + 0x160),
                 (longlong)(int)uVar1 << 3);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_58);
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    plVar9 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606ee6c FUN_14606ee6c body=604 status=ok
// SIG undefined FUN_14606ee6c(void)

void FUN_14606ee6c(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0x170;
    lVar7 = *param_1 + 0x160;
    do {
      if (*(int *)(lVar7 + 0xc) < 0) {
        *(undefined4 *)(lVar7 + 8) = 0;
        FUN_14920ad04(lVar7);
      }
      else {
        *(undefined4 *)(lVar7 + 8) = 0;
      }
      local_b8 = lVar7 + -0x160;
      FUN_1491d2e16(local_b8,local_c8);
      local_b0 = local_c8;
      local_a8 = &local_b8;
      FUN_14920ad34(local_98,local_9c,&local_b0);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x170;
      lVar4 = lVar4 + -0x170;
    } while (lVar4 != 0);
  }
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14920ad04(plVar1);
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar7 = (longlong)(int)param_1[1] * 0x170;
    puVar5 = (undefined8 *)(*param_1 + 0x20);
    do {
      if (*(int *)(puVar5 + 1) < 2) {
        iVar3 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar3 + 1U;
        plVar6 = plVar1;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
          FUN_1491d2a1e(plVar1,iVar3);
        }
LAB_14606f023:
        *(undefined8 **)(*plVar6 + (longlong)iVar3 * 8) = puVar5 + -4;
      }
      else {
        uVar2 = FUN_144a49b4a(*(int *)(puVar5 + 1) + -1,*puVar5);
        iVar3 = FUN_14920afe8(local_98,uVar2,puVar5);
        lVar4 = (longlong)iVar3 * 0x20 + local_98[0];
        if (lVar4 != 0 && iVar3 != -1) {
          lVar4 = *(longlong *)(lVar4 + 0x10);
          plVar6 = (longlong *)(lVar4 + 0x160);
          iVar3 = *(int *)(lVar4 + 0x168);
          *(uint *)(lVar4 + 0x168) = iVar3 + 1U;
          if (*(uint *)(lVar4 + 0x16c) < iVar3 + 1U) {
            FUN_1491d2a1e(plVar6,iVar3);
          }
          goto LAB_14606f023;
        }
      }
      puVar5 = puVar5 + 0x2e;
      lVar7 = lVar7 + -0x170;
    } while (lVar7 != 0);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14606f0ca(local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606f0ca FUN_14606f0ca body=53 status=ok
// SIG undefined FUN_14606f0ca(void)

void FUN_14606f0ca(longlong *param_1)

{
  FUN_14606f100();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14606f100 FUN_14606f100 body=345 status=ok
// SIG undefined FUN_14606f100(void)

void FUN_14606f100(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606f278 FUN_14606f278 body=485 status=ok
// SIG undefined FUN_14606f278(void)

void FUN_14606f278(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined8 *)(param_1 + 0xe8) = 0x3f800000;
  if (*(float *)(param_1 + 0xdc) <= 0.0) {
    fVar1 = *(float *)(*(longlong *)(param_2 + 0x28) + 0x48);
    uVar4 = -(uint)(0.0 < *(float *)(param_2 + 0xaa0));
    fVar2 = (float)(~uVar4 & (uint)fVar1 | (uint)*(float *)(param_2 + 0xaa0) & uVar4);
    fVar8 = *(float *)(param_1 + 0xd0);
    if ((0.0 < fVar8) && (fVar8 < fVar1)) {
      *(float *)(param_1 + 0xe8) = fVar8 / fVar1;
    }
    if (1e-08 < ABS(fVar1 - fVar2)) {
      fVar5 = (float)FUN_1410dc810(param_1,0,fVar1);
      fVar6 = (float)FUN_1410dc810(param_1,0x3f800000,fVar1);
      fVar8 = fVar6;
      if (fVar5 <= fVar6) {
        fVar8 = fVar5;
      }
      fVar7 = 0.0;
      if (fVar8 < fVar2) {
        fVar9 = fVar5;
        if (fVar5 <= fVar6) {
          fVar9 = fVar6;
        }
        fVar7 = 1.0;
        if (fVar2 < fVar9) {
          lVar3 = FUN_1447e736e(param_1 + 0xa0);
          if (lVar3 == 0) {
            lVar3 = param_1 + 0x20;
          }
          else {
            lVar3 = FUN_1447e736e(param_1 + 0xa0);
            lVar3 = lVar3 + 0x30;
          }
          if (*(int *)(lVar3 + 0x78) == 0) {
            fVar7 = (fVar2 - fVar8) / (fVar9 - fVar8);
            if (1.0 <= fVar7) {
              fVar7 = 1.0;
            }
            if (fVar7 <= 0.0) {
              fVar7 = 0.0;
            }
          }
          else {
            fVar7 = (float)FUN_148800628(param_1,fVar2,fVar1);
          }
        }
      }
      *(float *)(param_1 + 0xec) = fVar7;
      if (fVar6 < fVar5) {
        *(float *)(param_1 + 0xec) = 1.0 - fVar7;
      }
    }
  }
  return;
}



// FUNCTION 14606f45e FUN_14606f45e body=285 status=ok
// SIG undefined FUN_14606f45e(void)

void FUN_14606f45e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb12cd0 == 0) || (DAT_14cb12cd8 == '\0')) {
    if (1 < DAT_14c872cf0) {
      local_28 = 0;
      uStack_20 = 0;
      local_38 = &DAT_14c872ce8;
      FUN_1449da20c(DAT_14c872ce0,L"PlatformFeatures",L"SaveGameSystemModule",&local_28);
      if (1 < (int)uStack_20) {
        FUN_1446f470e(&local_30,local_28,1);
        uVar1 = FUN_144a52528();
        plVar2 = (longlong *)FUN_1405f3750(uVar1,local_30,0);
        if (plVar2 != (longlong *)0x0) {
          DAT_14cb12cd0 = (**(code **)(*plVar2 + 0x40))(plVar2);
        }
      }
      DAT_14cb12cd8 = '\x01';
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    if (DAT_14cb12cd0 == 0) {
      DAT_14cb12cd0 = FUN_14606f57c(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606f57c FUN_14606f57c body=8 status=ok
// SIG undefined FUN_14606f57c(void)

undefined ** FUN_14606f57c(void)

{
  return &PTR_PTR_14c7618c0;
}



// FUNCTION 14606f58c FUN_14606f58c body=286 status=ok
// SIG undefined FUN_14606f58c(void)

undefined8 * FUN_14606f58c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af09c00;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  memset(param_1 + 0x17,0,0x100);
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x37) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar4;
  param_1[0x39] = DAT_14c8464f0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  FUN_1411b354a(param_1 + 0x3f,0,0,0,0);
  FUN_1457e37e0(param_1 + 0x84);
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x9e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x9f] = uVar1;
  param_1[0xa0] = DAT_14c8464f0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 14606f6aa FUN_14606f6aa body=217 status=ok
// SIG undefined FUN_14606f6aa(void)

undefined8 FUN_14606f6aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14b412d70;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b412580;
  local_38[3] = param_3;
  FUN_14127bc3c(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606f784 FUN_14606f784 body=88 status=ok
// SIG undefined FUN_14606f784(void)

void FUN_14606f784(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14606f7de(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606f7de FUN_14606f7de body=50 status=ok
// SIG undefined FUN_14606f7de(void)

undefined8 * FUN_14606f7de(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 == 0) {
    *param_2 = 0x3f704dba3e67bf62;
    param_2[1] = 0x3f8000003eec63ae;
  }
  else {
    FUN_14606f810(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14606f810 FUN_14606f810 body=154 status=ok
// SIG undefined FUN_14606f810(void)

undefined4 * FUN_14606f810(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  puVar3 = *(undefined4 **)(local_38 + 0x4e0);
  AcquireSRWLockShared((PSRWLOCK)(puVar3 + 0x10));
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
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *param_2 = *puVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  ReleaseSRWLockShared((PSRWLOCK)(puVar3 + 0x10));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606f8b6 FUN_14606f8b6 body=1563 status=ok
// SIG undefined FUN_14606f8b6(void)

void FUN_14606f8b6(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  undefined ***pppuVar11;
  char *pcVar12;
  uint uVar13;
  longlong lVar14;
  code *pcVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  double dVar19;
  undefined1 auStack_188 [40];
  code *local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  undefined8 uStack_140;
  longlong local_130;
  code *local_128;
  undefined ***local_118;
  undefined **local_108;
  undefined1 *local_100;
  code *local_e8;
  undefined ***local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined **local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar14 = param_1 + 0x58;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  cVar3 = FUN_144729dda(lVar14);
  if (cVar3 != '\0') {
    lVar5 = FUN_14479d2ce(lVar14);
    lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x3b48) + 0x20))(lVar5 + 0x3b48);
    if (*(longlong **)(lVar5 + 0x40) != (longlong *)0x0 && *(longlong *)(lVar5 + 0x38) != 0) {
      uVar7 = (**(code **)(**(longlong **)(lVar5 + 0x40) + 0x10))();
      cVar3 = FUN_14589409e(uVar7);
      if (cVar3 != '\0') {
        lVar5 = FUN_14479d2ce(lVar14);
        lVar5 = *(longlong *)(lVar5 + 0x1c8);
        if (lVar5 == 0) {
          local_98 = (undefined ***)DAT_14c8464f0;
          local_a8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_a8 = *(code **)(lVar5 + 0x260);
          uStack_a0 = *(undefined8 *)(lVar5 + 0x268);
          local_98 = *(undefined ****)(lVar5 + 0x270);
        }
        lVar5 = FUN_14606fed2(param_1);
        *(longlong *)(param_1 + 0x78) = lVar5;
        if (lVar5 == 0) {
          local_148 = (longlong *)0x0;
          uStack_140 = 0;
          goto LAB_14606f945;
        }
        lVar14 = FUN_14479d2ce(lVar14);
        pdVar8 = (double *)&DAT_14c8464e0;
        if (*(longlong *)(lVar14 + 0x1c8) != 0) {
          pdVar8 = (double *)(*(longlong *)(lVar14 + 0x1c8) + 0x260);
        }
        dVar19 = pdVar8[1] - *(double *)(*(longlong *)(param_1 + 0x78) + 0xc0);
        dVar2 = *pdVar8 - *(double *)(*(longlong *)(param_1 + 0x78) + 0xb8);
        *(double *)(param_1 + 0x80) = dVar2 * dVar2 + dVar19 * dVar19;
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x78);
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  if (lVar14 != 0) {
    uStack_140 = 1;
    FUN_1415ce516(&local_148);
    plVar1 = local_148;
    FUN_1415ce50d(local_148);
    *plVar1 = lVar14;
  }
LAB_14606f945:
  local_a8 = (code *)0x0;
  local_98 = (undefined ***)0x0;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14b967f50;
  local_c0 = param_1;
  local_e8 = FUN_144114256;
  local_118 = (undefined ***)0x0;
  local_108 = &PTR_LAB_14b967f30;
  local_100 = &LAB_1441141f4;
  local_128 = FUN_144114202;
  iVar10 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar10 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      *(undefined2 *)(lVar14 + 0x10 + lVar5) = 0x100;
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar10 * 0x18 != lVar5);
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong)(int)uStack_140 != 0) {
    plVar16 = local_148 + (int)uStack_140;
    plVar18 = local_148;
    do {
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        local_150 = *(longlong *)(param_1 + 0x38);
        local_158 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
        lVar14 = 0;
        do {
          lVar5 = *(longlong *)(local_150 + lVar14);
          if (lVar5 != 0) {
            lVar9 = FUN_145a891f4();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
              local_160 = local_128;
              if (local_128 != (code *)0x0) {
                pppuVar11 = local_118;
                if (local_118 == (undefined ***)0x0) {
                  pppuVar11 = &local_108;
                }
                uVar7 = (*(code *)(*pppuVar11)[1])();
                cVar3 = (*local_160)(uVar7,lVar5,plVar18);
                if (cVar3 != '\0') {
                  uVar13 = (int)(lVar14 >> 3) * -0x55555555;
                  if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(param_1 + 0x40))) {
                    *(undefined1 *)(*plVar1 + 0x11 + (ulonglong)(uVar13 & 0x7fffffff) * 0x18) = 0;
                    if ((local_a8 == (code *)0x0) ||
                       (lVar14 = *(longlong *)(*plVar1 + (ulonglong)(uVar13 & 0x7fffffff) * 0x18),
                       lVar14 == 0)) goto LAB_14606fc19;
                    lVar5 = FUN_145a891f4();
                    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14606fc19;
                    pppuVar11 = local_98;
                    pcVar15 = local_a8;
                    if (local_98 == (undefined ***)0x0) {
                      pppuVar11 = local_88;
                    }
                    goto LAB_14606fc08;
                  }
                  break;
                }
              }
            }
          }
          lVar14 = lVar14 + 0x18;
        } while (local_158 != lVar14);
      }
      plVar6 = (longlong *)FUN_1404e9402(plVar1);
      *(undefined2 *)(plVar6 + 2) = 1;
      uVar7 = FUN_145a891f4();
      FUN_1404e95e0(param_1,&local_130,uVar7);
      if ((*plVar6 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      lVar14 = local_130;
      *plVar6 = local_130;
      if (local_130 != 0) {
        lVar5 = FUN_145a891f4();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) && (local_e8 != (code *)0x0))
        {
          pppuVar11 = local_d8;
          pcVar15 = local_e8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar11 = &local_c8;
          }
LAB_14606fc08:
          uVar7 = (*(code *)(*pppuVar11)[1])();
          (*pcVar15)(uVar7,lVar14,plVar18);
        }
      }
LAB_14606fc19:
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar16);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar14 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar16[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar5 = 0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_130,plVar16[-1]);
          lVar5 = local_130;
        }
        *plVar16 = lVar5;
      }
      else if (*(char *)((longlong)plVar16 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar16);
        }
        FUN_1404e9462(param_1,plVar16 + -1);
      }
      plVar16 = plVar16 + 3;
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != 0);
    iVar10 = *(int *)(param_1 + 0x40);
    if (0 < iVar10) {
      uVar17 = 0;
      bVar4 = false;
      do {
        uVar17 = (ulonglong)(int)uVar17;
        pcVar12 = (char *)(*plVar1 + uVar17 * 0x18 + 0x11);
        while (*pcVar12 == '\0') {
          uVar17 = uVar17 + 1;
          pcVar12 = pcVar12 + 0x18;
          if ((longlong)iVar10 <= (longlong)uVar17) {
            if (bVar4) goto LAB_14606fb44;
            goto LAB_14606f9f0;
          }
        }
        FUN_1404ec6d4(plVar1,uVar17 & 0xffffffff);
        iVar10 = *(int *)(param_1 + 0x40);
        bVar4 = true;
      } while ((int)uVar17 < iVar10);
LAB_14606fb44:
      FUN_141089ae6(plVar1);
    }
  }
LAB_14606f9f0:
  if (local_128 != (code *)0x0) {
    pppuVar11 = &local_108;
    if (local_118 != (undefined ***)0x0) {
      pppuVar11 = local_118;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if (local_e8 != (code *)0x0) {
    pppuVar11 = &local_c8;
    if (local_d8 != (undefined ***)0x0) {
      pppuVar11 = local_d8;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if (local_a8 != (code *)0x0) {
    pppuVar11 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar11 = local_88;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606fed2 FUN_14606fed2 body=729 status=ok
// SIG undefined FUN_14606fed2(void)

longlong FUN_14606fed2(longlong *param_1,double *param_2)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  char local_c8 [4];
  undefined8 local_c4;
  int local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1460701ac();
  lVar8 = FUN_14050c909();
  lVar5 = param_1[0xd];
  if ((longlong)(int)lVar5 == 0) {
    lVar11 = 0;
    lVar8 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar8 + 0x644);
    lVar10 = param_1[0xc];
    uVar16 = 0;
    uVar17 = 0;
    lVar12 = 0;
    lVar8 = 0;
    lVar11 = 0;
    dVar4 = 0.0;
    local_d0 = param_1;
    do {
      lVar2 = *(longlong *)(lVar10 + lVar12);
      lVar6 = lVar11;
      dVar3 = dVar4;
      if (lVar2 == 0) {
        dVar15 = (double)CONCAT44(uVar17,uVar16);
      }
      else {
        bVar13 = 1;
        if (bVar1 != 0) {
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_a8 = *(undefined8 *)(lVar2 + 0x48);
          local_a0 = *(undefined4 *)(lVar2 + 0x50);
          local_d8 = lVar10;
          FUN_1447715ec(&local_98,lVar2 + 0x58);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cbc8aa8) && (FUN_144b3d300(&DAT_14cbc8aa8), DAT_14cbc8aa8 == -1)) {
            DAT_14cbc8a9c._4_4_ = 0;
            DAT_14cbc8aa4 = 0;
            FUN_14052b5e0(&DAT_14cbc8a9c,"ContainerEnabled",0);
            _Init_thread_footer(&DAT_14cbc8aa8);
          }
          local_b0 = DAT_14cbc8aa4;
          local_b8 = CONCAT44(DAT_14cbc8a9c._4_4_,(undefined4)DAT_14cbc8a9c);
          FUN_144928d62(&local_98,5);
          local_c8[0] = '\0';
          local_c4 = 0;
          local_bc = 0;
          uVar9 = (**(code **)(*local_d0 + 0x180))();
          lVar10 = FUN_140149a73(uVar9,0);
          if (lVar10 != 0) {
            FUN_14039fc7b(&local_a8,local_c8,lVar10,0);
          }
          bVar13 = 1;
          if (local_c8[0] != '\0') {
            if (local_c8[0] == '\x01') {
              bVar13 = local_bc != 0;
            }
            else {
              bVar13 = FUN_140321d1a(local_c8);
            }
          }
          lVar10 = local_d8;
          if (local_80 != 0) {
            FUN_1400020a8();
            lVar10 = local_d8;
          }
        }
        dVar14 = *(double *)(lVar2 + 0xc0) - param_2[1];
        dVar15 = *(double *)(lVar2 + 0xb8) - *param_2;
        dVar14 = dVar15 * dVar15 + dVar14 * dVar14;
        dVar15 = dVar14;
        lVar7 = lVar2;
        if (((double)CONCAT44(uVar17,uVar16) < dVar14 || (double)CONCAT44(uVar17,uVar16) == dVar14)
            && lVar8 != 0) {
          dVar15 = (double)CONCAT44(uVar17,uVar16);
          lVar7 = lVar8;
        }
        lVar8 = lVar7;
        if (((bVar13 & bVar1) == 1) &&
           (lVar6 = lVar2, dVar3 = dVar14, dVar4 <= dVar14 && lVar11 != 0)) {
          lVar6 = lVar11;
          dVar3 = dVar4;
        }
      }
      lVar11 = lVar6;
      lVar12 = lVar12 + 8;
      uVar16 = SUB84(dVar15,0);
      uVar17 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar4 = dVar3;
    } while ((longlong)(int)lVar5 * 8 != lVar12);
  }
  if (lVar11 != 0) {
    lVar8 = lVar11;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460701ac FUN_1460701ac body=137 status=ok
// SIG undefined FUN_1460701ac(void)

void FUN_1460701ac(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x70) == '\0') {
    if (*(int *)(param_1 + 0x6c) < 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      FUN_14882c108(param_1 + 0x60,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    if (DAT_14cb78540 != 0) {
      local_18 = &local_28;
      local_20 = FUN_14411434a;
      local_28 = param_1;
      FUN_140045d3e(DAT_14cb78540,&local_20,0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070236 FUN_146070236 body=26 status=ok
// SIG undefined FUN_146070236(void)

undefined8 FUN_146070236(longlong param_1,undefined8 param_2)

{
  FUN_146070250(param_1 + 0x18);
  return param_2;
}



// FUNCTION 146070250 FUN_146070250 body=488 status=ok
// SIG undefined FUN_146070250(void)

undefined8 * FUN_146070250(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb77cd0 != (longlong *)0x0 && DAT_14cb77cd8 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb77cd0 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb77cd0;
    if (DAT_14cb77cd8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_146070366;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR_FUN_14b3f7850;
  FUN_1409e1656(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b3f77e0;
  puVar3[4] = &PTR_FUN_14b3f7800;
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 1;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3f7870;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_146070366;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_146070366;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_1460703dd:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14607035c;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_1460703dd;
      puVar3[3] = plVar4;
    }
LAB_14607035c:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_146070366:
  *param_2 = local_40;
  param_2[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14607043a FUN_14607043a body=209 status=ok
// SIG undefined FUN_14607043a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14607043a(void)

{
  if ((DAT_14caa070f & 2) == 0) {
    DAT_14caa070f = DAT_14caa070f | 2;
    _DAT_14caa06b0 = L"FRDGScatterCopyCS";
    _DAT_14caa06c8 = FUN_146826540;
    _DAT_14caa06d0 = FUN_146825d77;
    _DAT_14caa06d8 = FUN_146825fd6;
    _DAT_14caa06e0 = FUN_1407e02ea;
    _DAT_14caa06e8 = FUN_146826273;
    _DAT_14caa06c0 = FUN_1474427dc;
    _DAT_14caa0700 = 0xffffffff000000e0;
    _DAT_14caa0708 = 8;
    DAT_14caa070c = 0;
    _DAT_14caa06f0 = &LAB_147442806;
    FUN_14607050c(&DAT_14caa06a8);
    FUN_1407e00cc(&DAT_14caa06a8);
  }
  return &DAT_14caa06a8;
}



// FUNCTION 14607050c FUN_14607050c body=126 status=ok
// SIG undefined FUN_14607050c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607050c(longlong param_1)

{
  _DAT_14caa1218 = L"BASE";
  DAT_14caa1242 = 4;
  FUN_145d1253e();
  _DAT_14caa1220 = &DAT_14caa1150;
  _DAT_14caa1230 = &LAB_14682652b;
  _DAT_14caa1238 = 0x100000000;
  _DAT_14caa1228 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14caa1218;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14caa11b4 != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14607058a FUN_14607058a body=189 status=ok
// SIG undefined FUN_14607058a(void)

void FUN_14607058a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146070648(param_1,local_58);
  local_48 = FUN_145c5c7d4;
  local_40 = 0;
  FUN_1460706ac(local_38,local_58);
  FUN_14127be6a(&DAT_14cbd0b78,&local_48,local_38);
  FUN_1449db362(local_38);
  *(code **)(param_1 + 0x30) = local_48;
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070648 FUN_146070648 body=99 status=ok
// SIG undefined FUN_146070648(void)

undefined8 * FUN_146070648(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14607068a:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14607068a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1460706ac FUN_1460706ac body=300 status=ok
// SIG undefined FUN_1460706ac(void)

longlong * FUN_1460706ac(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b961900;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b961900;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 1460707d8 FUN_1460707d8 body=112 status=ok
// SIG undefined FUN_1460707d8(void)

void FUN_1460707d8(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Children",1);
  FUN_145a5ebc0(*param_1,local_28,local_30,0x1e0);
  FUN_14607084a(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607084a FUN_14607084a body=181 status=ok
// SIG undefined FUN_14607084a(void)

void FUN_14607084a(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = 1;
  local_50 = 0;
  FUN_1446ddc76(&local_68,"Slot.Padding",1);
  local_90 = local_48;
  local_48[0] = 1;
  local_40 = 0;
  local_58 = 0;
  local_38 = 0;
  local_98 = 8;
  FUN_141309508(*param_1,local_80,param_1[1],local_68);
  FUN_1449db362(&local_58);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070900 FUN_146070900 body=88 status=ok
// SIG undefined FUN_146070900(void)

void FUN_146070900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14607095a(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607095a FUN_14607095a body=50 status=ok
// SIG undefined FUN_14607095a(void)

undefined8 * FUN_14607095a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 == 0) {
    *param_2 = 0x3e11c7153f800000;
    param_2[1] = 0x3f8000003e2b4784;
  }
  else {
    FUN_14607098c(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14607098c FUN_14607098c body=155 status=ok
// SIG undefined FUN_14607098c(void)

undefined4 * FUN_14607098c(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x4e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x40));
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
  uVar4 = *(undefined4 *)(lVar3 + 0x18);
  uVar5 = *(undefined4 *)(lVar3 + 0x1c);
  uVar6 = *(undefined4 *)(lVar3 + 0x20);
  *param_2 = *(undefined4 *)(lVar3 + 0x14);
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070a28 FUN_146070a28 body=88 status=ok
// SIG undefined FUN_146070a28(void)

void FUN_146070a28(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146070a82(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070a82 FUN_146070a82 body=50 status=ok
// SIG undefined FUN_146070a82(void)

undefined8 * FUN_146070a82(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dbae30();
  if (lVar1 == 0) {
    *param_2 = &DAT_3f8000003f800000;
    param_2[1] = &DAT_3f8000003f800000;
  }
  else {
    FUN_146070ab4(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146070ab4 FUN_146070ab4 body=155 status=ok
// SIG undefined FUN_146070ab4(void)

undefined4 * FUN_146070ab4(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x4e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x40));
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
  uVar4 = *(undefined4 *)(lVar3 + 0x2c);
  uVar5 = *(undefined4 *)(lVar3 + 0x30);
  uVar6 = *(undefined4 *)(lVar3 + 0x34);
  *param_2 = *(undefined4 *)(lVar3 + 0x28);
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070b58 FUN_146070b58 body=286 status=ok
// SIG undefined FUN_146070b58(void)

longlong * FUN_146070b58(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14585458a();
  *param_1 = (longlong)&PTR_FUN_14bdc79b0;
  param_1[5] = (longlong)&PTR_FUN_14bdc7df0;
  param_1[0x13] = (longlong)&PTR_FUN_14bdc7e10;
  param_1[0x24] = (longlong)&PTR_FUN_14bdc7e40;
  param_1[0x8e] = (longlong)&PTR_FUN_14bdc7e50;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  local_38 = L"ToolName";
  local_30 = 8;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"USmoothMeshTool";
  local_30 = 0xf;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Smooth");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070c78 FUN_146070c78 body=115 status=ok
// SIG undefined FUN_146070c78(void)

void FUN_146070c78(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [35];
  undefined1 local_35;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_34;
  local_34 = 0;
  local_30 = &local_35;
  local_35 = 0;
  FUN_146070cec(param_1 + 0x230,local_1c);
  FUN_141237922(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070cec FUN_146070cec body=282 status=ok
// SIG undefined FUN_146070cec(void)

undefined4 * FUN_146070cec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
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
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146070e8a(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined4 *)(local_40 + 4) = *puVar2;
  local_40[8] = 0xff;
  local_40[9] = 0xff;
  local_40[10] = 0xff;
  local_40[0xb] = 0xff;
  local_4c = local_48[0];
  cVar4 = FUN_146070e08(param_1,bVar1,local_40,&local_4c);
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
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0xc) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146070f70(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146070e08 FUN_146070e08 body=130 status=ok
// SIG undefined FUN_146070e08(void)

undefined8 FUN_146070e08(longlong *param_1,uint param_2,char *param_3,int *param_4)

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
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_148e520be(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146070e8a FUN_146070e8a body=230 status=ok
// SIG undefined FUN_146070e8a(void)

int * FUN_146070e8a(longlong *param_1,int *param_2)

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



// FUNCTION 146070f70 FUN_146070f70 body=422 status=ok
// SIG undefined FUN_146070f70(void)

void FUN_146070f70(longlong *param_1)

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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
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



// FUNCTION 146071118 FUN_146071118 body=309 status=ok
// SIG undefined FUN_146071118(void)

ulonglong FUN_146071118(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((param_2 < 4) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x388) + 8))();
    if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x390) != 0)) {
      lVar1 = *(longlong *)(param_1 + 0x380);
      uVar4 = FUN_14001cc68(0x30,0x10);
      local_68 = param_4;
      FUN_14607124e(uVar4,param_1,param_2,param_3);
      FUN_1410d2116(*(undefined8 *)(lVar1 + 0x210),uVar4);
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_1460711ab;
    }
  }
  FUN_140002266(&local_60,L"No valid LocalUserNum=%d",param_2);
  local_50 = local_60;
  local_48 = local_58;
  local_44 = local_54;
  uVar5 = CONCAT71(uVar6,local_58 < 2);
  if ((1 < local_58) &&
     (plVar2 = (longlong *)*param_4, plVar2 != (longlong *)0x0 && (int)param_4[1] != 0)) {
    local_68 = &local_50;
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,0,param_3);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_1460711ab:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607124e FUN_14607124e body=740 status=ok
// SIG undefined FUN_14607124e(void)

undefined8 *
FUN_14607124e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_48);
  param_1[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_FUN_14ba446d0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_146071534(param_1 + 4,param_5);
  FUN_140056680(&local_48,L"onlinePlayers");
  iVar4 = (int)param_4[1];
  if (iVar4 == local_40) {
    bVar7 = true;
    if (1 < iVar4) {
      lVar5 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_4 + lVar5);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_48.QuadPart + lVar5);
        uVar6 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146071404;
          }
          iVar4 = uVar3 - uVar6;
          goto LAB_146071511;
        }
        if (uVar1 == 0) break;
LAB_146071404:
        lVar5 = lVar5 + 2;
      }
      iVar4 = 0;
LAB_146071511:
      bVar7 = iVar4 == 0;
    }
  }
  else {
    bVar7 = local_40 + iVar4 == 1;
  }
  if (local_48.QuadPart != 0) {
    FUN_1400020a8();
  }
  if (bVar7) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
  else {
    FUN_140056680(&local_48,L"inGamePlayers");
    iVar4 = (int)param_4[1];
    if (iVar4 == local_40) {
      bVar7 = true;
      if (1 < iVar4) {
        lVar5 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_4 + lVar5);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(local_48.QuadPart + lVar5);
          uVar6 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146071471;
            }
            iVar4 = uVar3 - uVar6;
            goto LAB_14607151d;
          }
          if (uVar1 == 0) break;
LAB_146071471:
          lVar5 = lVar5 + 2;
        }
        iVar4 = 0;
LAB_14607151d:
        bVar7 = iVar4 == 0;
      }
    }
    else {
      bVar7 = local_40 + iVar4 == 1;
    }
    if (local_48.QuadPart != 0) {
      FUN_1400020a8();
    }
    if (bVar7) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
    }
    else {
      FUN_140056680(&local_48,L"inGameAndSessionPlayers");
      iVar4 = (int)param_4[1];
      if (iVar4 == local_40) {
        bVar7 = true;
        if (1 < iVar4) {
          lVar5 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*param_4 + lVar5);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(local_48.QuadPart + lVar5);
            uVar6 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1460714da;
              }
              iVar4 = uVar3 - uVar6;
              goto LAB_146071529;
            }
            if (uVar1 == 0) break;
LAB_1460714da:
            lVar5 = lVar5 + 2;
          }
          iVar4 = 0;
LAB_146071529:
          bVar7 = iVar4 == 0;
        }
      }
      else {
        bVar7 = local_40 + iVar4 == 1;
      }
      if (local_48.QuadPart != 0) {
        FUN_1400020a8();
      }
      if (bVar7) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146071534 FUN_146071534 body=130 status=ok
// SIG undefined FUN_146071534(void)

void FUN_146071534(longlong *param_1,longlong *param_2)

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



// FUNCTION 1460715b8 FUN_1460715b8 body=103 status=ok
// SIG undefined FUN_1460715b8(void)

ulonglong FUN_1460715b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146071602:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146071602;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 146071620 FUN_146071620 body=192 status=ok
// SIG undefined FUN_146071620(void)

void FUN_146071620(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    if (param_2 != 0) goto LAB_14607169a;
LAB_1460716be:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    if (plVar3[2] != param_2) goto LAB_14607169a;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    if (plVar3 == (longlong *)0x0) goto LAB_1460716be;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xa8))(local_38,param_1 + 0x128);
    }
  }
  plVar3 = plStack_30;
  *(undefined1 *)(param_1 + 0x111) = param_3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14607169a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460716e2 FUN_1460716e2 body=367 status=ok
// SIG undefined FUN_1460716e2(void)

void FUN_1460716e2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146071852(*(undefined8 *)(param_1 + 0x30));
  FUN_146071882(param_1,0);
  FUN_1460718d8(param_1);
  if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x68) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x68) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b9945e0;
    local_40[3] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FOakPlayerCharacterSelect.ShowCharacterSelectUI");
    *(undefined8 *)(param_1 + 0x60) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x68);
    *(longlong **)(param_1 + 0x68) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146071852 FUN_146071852 body=47 status=ok
// SIG undefined FUN_146071852(void)

void FUN_146071852(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb28);
                    /* WARNING: Could not recover jumptable at 0x00014607187e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 146071882 FUN_146071882 body=86 status=ok
// SIG undefined FUN_146071882(void)

void FUN_146071882(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_144a7ba4c(*(undefined8 *)(param_1 + 0x30));
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar3 = &PTR_FUN_14b993f28;
    *(undefined1 *)(puVar3 + 1) = param_2;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 1460718d8 FUN_1460718d8 body=290 status=ok
// SIG undefined FUN_1460718d8(void)

undefined8 FUN_1460718d8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1;
  cVar3 = FUN_144729dda(param_1 + 0x38);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x38);
    if ((*(longlong *)(lVar4 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) != 0)) {
      lVar4 = FUN_146071a56(param_1);
      if (lVar4 == 0) {
        cVar3 = FUN_1460719fc(param_1);
        if (cVar3 == '\0') goto LAB_14607197c;
      }
      else {
        cVar3 = FUN_148e07696(lVar4);
        if (cVar3 == '\0') goto LAB_14607197c;
        FUN_148e076a2(lVar4);
      }
      if (((*(longlong *)(param_1 + 0x80) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x88) + 8))) {
        FUN_1401cb356();
        local_28 = *(undefined8 *)(param_1 + 0x80);
        local_20 = *(longlong *)(param_1 + 0x88);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
          UNLOCK();
        }
        FUN_140d61352(&local_28);
        plVar2 = *(longlong **)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
      uVar5 = 0;
      goto LAB_146071945;
    }
  }
LAB_14607197c:
  FUN_1441ec50e(&local_30);
  uVar5 = 1;
LAB_146071945:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460719fc FUN_1460719fc body=89 status=ok
// SIG undefined FUN_1460719fc(void)

ulonglong FUN_1460719fc(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined7 uVar7;
  
  param_1 = param_1 + 0x38;
  cVar1 = FUN_144729dda(param_1);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1);
    bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3);
    if (5 < bVar2) {
      uVar4 = FUN_14479d2ce(param_1);
      lVar5 = FUN_140d27a2a(uVar4);
      uVar6 = CONCAT71(uVar7,(byte)(*(char *)(lVar5 + 0xb0) - 9U) < 0xf8);
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146071a56 FUN_146071a56 body=377 status=ok
// SIG undefined FUN_146071a56(void)

longlong FUN_146071a56(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_14479d2ce(param_1 + 0x38);
  if (*(longlong *)(lVar5 + 0x30) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
  }
  FUN_1410d53f0(&local_50,uVar7);
  if (local_48 != (longlong *)0x0) {
    iVar4 = (int)local_48[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_48[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_48 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_48;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_50 == 0) {
LAB_146071b3f:
        lVar5 = 0;
      }
      else {
        local_78 = 0;
        local_70 = 0x6000;
        local_68 = 0;
        local_58 = DAT_14cbd4088;
        local_60 = DAT_14cbd4080;
        FUN_1448075d0(&local_50);
        FUN_145aa4638(local_50,&local_50,&local_78);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        lVar5 = FUN_141446784(local_50,&local_78);
        if (lVar5 == 0) goto LAB_146071b3f;
        lVar6 = FUN_1459ba0f6();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_146071b3f;
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_146071b47;
    }
  }
  lVar5 = 0;
LAB_146071b47:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 146071bd0 FUN_146071bd0 body=40 status=ok
// SIG undefined FUN_146071bd0(void)

undefined8 FUN_146071bd0(undefined8 param_1,int param_2)

{
  FUN_146071bf8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146071bf8 FUN_146071bf8 body=450 status=ok
// SIG undefined FUN_146071bf8(void)

void FUN_146071bf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aedc6b0;
  param_1[5] = &PTR_FUN_14aedca50;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_146071dba(param_1 + 0x20);
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146071dba FUN_146071dba body=53 status=ok
// SIG undefined FUN_146071dba(void)

void FUN_146071dba(longlong *param_1)

{
  FUN_146071df0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146071df0 FUN_146071df0 body=345 status=ok
// SIG undefined FUN_146071df0(void)

void FUN_146071df0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146071f56 FUN_146071f56 body=581 status=ok
// SIG undefined FUN_146071f56(void)

undefined8 * FUN_146071f56(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0567c0;
  *(undefined4 *)(param_1 + 0x16) = 0xc5daac38;
  param_1[0x17] = "effect_collection";
  lVar5 = FUN_140e0c454();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607202d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14607202d:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Effects.Collections");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460721a8 FUN_1460721a8 body=581 status=ok
// SIG undefined FUN_1460721a8(void)

undefined8 * FUN_1460721a8(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b069720;
  *(undefined4 *)(param_1 + 0x16) = 0x47f9c778;
  param_1[0x17] = "firing_pattern";
  lVar5 = FUN_14120b6b4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607227f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14607227f:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Firing Pattern");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460723fa FUN_1460723fa body=581 status=ok
// SIG undefined FUN_1460723fa(void)

undefined8 * FUN_1460723fa(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1271c0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb08;
  param_1[0x17] = "gbx_discovery_in_world_indicator_def";
  lVar5 = FUN_145a4fed4();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1460724d1;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_1460724d1:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.In World Indicator Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607264c FUN_14607264c body=581 status=ok
// SIG undefined FUN_14607264c(void)

undefined8 * FUN_14607264c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b127a80;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb05;
  param_1[0x17] = "gbx_discovery_location_type_def";
  lVar5 = FUN_14050c9fe();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146072723;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146072723:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Location Type Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607289e FUN_14607289e body=581 status=ok
// SIG undefined FUN_14607289e(void)

undefined8 * FUN_14607289e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b134aa0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb06;
  param_1[0x17] = "gbx_discovery_presentation_def";
  lVar5 = FUN_140bd9786();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146072975;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146072975:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Presentation Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146072af0 FUN_146072af0 body=581 status=ok
// SIG undefined FUN_146072af0(void)

undefined8 * FUN_146072af0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1362e0;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0a;
  param_1[0x17] = "gbx_discovery_viewable_map_def";
  lVar5 = FUN_14067c594();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146072bc7;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146072bc7:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Viewable Map Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146072d42 FUN_146072d42 body=581 status=ok
// SIG undefined FUN_146072d42(void)

undefined8 * FUN_146072d42(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36c680;
  *(undefined4 *)(param_1 + 0x16) = 0x3003;
  param_1[0x17] = "damagesource";
  lVar5 = FUN_140b473a6();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146072e19;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146072e19:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Sources");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146072f94 FUN_146072f94 body=581 status=ok
// SIG undefined FUN_146072f94(void)

undefined8 * FUN_146072f94(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36d510;
  *(undefined4 *)(param_1 + 0x16) = 0x3007;
  param_1[0x17] = "damage_filter";
  lVar5 = FUN_140fb984a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607306b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14607306b:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Damage.Filters");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460731e6 FUN_1460731e6 body=581 status=ok
// SIG undefined FUN_1460731e6(void)

undefined8 * FUN_1460731e6(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b373e60;
  *(undefined4 *)(param_1 + 0x16) = 0x1611ea48;
  param_1[0x17] = "gbx_material_parameter";
  lVar5 = FUN_1405bc036();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1460732bd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_1460732bd:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"MaterialParameters.GbxMaterialParameter");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146073438 FUN_146073438 body=581 status=ok
// SIG undefined FUN_146073438(void)

undefined8 * FUN_146073438(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b380e20;
  *(undefined4 *)(param_1 + 0x16) = 0x1ef617e1;
  param_1[0x17] = &DAT_14b40f038;
  lVar5 = FUN_14570285a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607350f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14607350f:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Gore.Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607368a FUN_14607368a body=581 status=ok
// SIG undefined FUN_14607368a(void)

undefined8 * FUN_14607368a(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b386460;
  *(undefined4 *)(param_1 + 0x16) = 0x1050;
  param_1[0x17] = "inv_stat";
  lVar5 = FUN_140ae74fa();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146073761;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146073761:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Inv_Stats");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460738dc FUN_1460738dc body=581 status=ok
// SIG undefined FUN_1460738dc(void)

undefined8 * FUN_1460738dc(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b38d990;
  *(undefined4 *)(param_1 + 0x16) = 0x3860a972;
  param_1[0x17] = "game_region";
  lVar5 = FUN_141030812();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1460739b3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_1460739b3:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"World Region");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146073b2e FUN_146073b2e body=581 status=ok
// SIG undefined FUN_146073b2e(void)

undefined8 * FUN_146073b2e(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b4791b0;
  *(undefined4 *)(param_1 + 0x16) = 0x101010;
  param_1[0x17] = "uicomponent";
  lVar5 = FUN_1410c886a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146073c05;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146073c05:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.Component");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146073d80 FUN_146073d80 body=581 status=ok
// SIG undefined FUN_146073d80(void)

undefined8 * FUN_146073d80(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b479a90;
  *(undefined4 *)(param_1 + 0x16) = 0x101015;
  param_1[0x17] = "uiview";
  lVar5 = FUN_14106339a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146073e57;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_146073e57:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"GbxUI.View");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146073fc6 FUN_146073fc6 body=314 status=ok
// SIG undefined FUN_146073fc6(void)

void FUN_146073fc6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4eb630;
  plVar1 = plVar3 + 2;
  local_48 = (longlong *)*param_3;
  *param_3 = 0;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_146074102(plVar1,*param_2,&local_48);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_146074176(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145837c4c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145837c4c(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146074102 FUN_146074102 body=116 status=ok
// SIG undefined FUN_146074102(void)

undefined8 * FUN_146074102(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = param_2;
  *param_1 = &PTR_FUN_14b4e82b0;
  param_1[4] = &PTR_LAB_14b4e82d8;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14114e6dc(param_1 + 8,param_3);
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 146074176 FUN_146074176 body=162 status=ok
// SIG undefined FUN_146074176(void)

void FUN_146074176(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1460741b5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1460741b5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1460741b5:
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
                    /* WARNING: Could not recover jumptable at 0x000146074214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146074224 FUN_146074224 body=581 status=ok
// SIG undefined FUN_146074224(void)

undefined8 * FUN_146074224(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b5f8d90;
  *(undefined4 *)(param_1 + 0x16) = 0xdead0001;
  param_1[0x17] = "ffyldata";
  lVar5 = FUN_14034fc00();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1460742fb;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_1460742fb:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,&DAT_14b702c08);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607446a FUN_14607446a body=12 status=ok
// SIG undefined FUN_14607446a(void)

void FUN_14607446a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1800) = param_2;
  FUN_146074476();
  return;
}



// FUNCTION 146074476 FUN_146074476 body=284 status=ok
// SIG undefined FUN_146074476(void)

void FUN_146074476(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x1710);
  lVar2 = param_1 + 0x1720;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x1738) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x1738);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (local_48 != lVar2)) {
    do {
      do {
        FUN_140a2b886(param_1,(longlong)iStack_5c * 0x14 + *local_78);
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460745a2 FUN_1460745a2 body=283 status=ok
// SIG undefined FUN_1460745a2(void)

undefined8 FUN_1460745a2(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = (**(code **)(*param_1 + 8))();
  bVar5 = false;
  FUN_1402057ac(param_2,param_1,uVar3,0);
  local_60 = DAT_14cb94878;
  local_68 = DAT_14cb94870;
  FUN_1448075d0(local_58);
  puVar4 = (undefined8 *)FUN_144a06846(param_2,local_58);
  if ((byte *)*puVar4 != (byte *)0x0) {
    bVar1 = *(byte *)*puVar4;
    bVar5 = (bVar1 & 0x68) == 0 && (bVar1 & 3) != 0;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (bVar5) {
    local_60 = DAT_14cb94878;
    local_68 = DAT_14cb94870;
    FUN_1448075d0(local_58);
    uVar3 = FUN_144a06846(param_2,local_58);
    cVar2 = FUN_148a19008(uVar3,param_1 + 6);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') {
      FUN_148a191e2(param_1 + 6);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460746be FUN_1460746be body=150 status=ok
// SIG undefined FUN_1460746be(void)

void FUN_1460746be(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146074756(local_14 != 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146074756 FUN_146074756 body=145 status=ok
// SIG undefined FUN_146074756(void)

void FUN_146074756(char param_1)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 == '\0') {
    pcVar2 = "AnyMenu_Closed";
  }
  else {
    pcVar2 = "AnyMenu_Open";
  }
  FUN_1400b22c2(&local_18,pcVar2);
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460747e8 FUN_1460747e8 body=172 status=ok
// SIG undefined FUN_1460747e8(void)

longlong *
FUN_1460747e8(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,char param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_7 == '\0') {
    param_7 = FUN_146074894();
  }
  uVar1 = DAT_14c760be8;
  lVar2 = FUN_14001cc68(0x108,0x10);
  FUN_146074974(lVar2,**(undefined8 **)(param_1 + 0x1b0),param_3,param_4,param_5,param_6,param_7,
                uVar1);
  FUN_1415ce774(lVar2);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146074894 FUN_146074894 body=165 status=ok
// SIG undefined FUN_146074894(void)

void FUN_146074894(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca77518) {
    FUN_144b3d300(&DAT_14ca77518);
    if (DAT_14ca77518 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14ca77510 = (undefined4 *)0x0;
      }
      else {
        DAT_14ca77510 = (undefined4 *)(**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14ca77518);
    }
  }
  uVar1 = FUN_146074939(*DAT_14ca77510);
  FUN_146074956(uVar1);
  return;
}



// FUNCTION 146074939 FUN_146074939 body=29 status=ok
// SIG undefined FUN_146074939(void)

undefined4 FUN_146074939(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 4;
  if ((int)param_1 < 4) {
    uVar1 = param_1;
  }
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)uVar1;
  }
  return (&DAT_14aa61900)[uVar2];
}



// FUNCTION 146074956 FUN_146074956 body=29 status=ok
// SIG undefined FUN_146074956(void)

undefined8 FUN_146074956(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 4;
  if ((int)param_1 < 4) {
    uVar1 = param_1;
  }
  uVar2 = 0;
  if (0 < (int)uVar1) {
    uVar2 = (ulonglong)uVar1;
  }
  return CONCAT71(0x14aa618,(&DAT_14aa618f0)[uVar2]);
}



// FUNCTION 146074974 FUN_146074974 body=339 status=ok
// SIG undefined FUN_146074974(void)

undefined8 *
FUN_146074974(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x1e;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14a351870;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_5;
  *(undefined1 *)(param_1 + 5) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_6;
  *(undefined2 *)((longlong)param_1 + 0x2a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar3 = FUN_14054d46e(&DAT_14c846b20,L"RenderOffScreen");
  *(byte *)((longlong)param_1 + 0x2d) = bVar3 ^ 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_8;
  param_1[0x11] = 0;
  param_1[0x12] = 0x300000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1c),4000);
  FUN_146074b4c(param_1 + 0xb,*(undefined4 *)((longlong)param_1 + 0x54));
  lVar2 = param_1[2];
  iVar1 = *(int *)(lVar2 + 0x528);
  *(uint *)(lVar2 + 0x528) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x52c) < iVar1 + 1U) {
    FUN_146074ac8((longlong *)(lVar2 + 0x520),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x520) + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 146074ac8 FUN_146074ac8 body=132 status=ok
// SIG undefined FUN_146074ac8(void)

void FUN_146074ac8(longlong param_1,int param_2)

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



// FUNCTION 146074b4c FUN_146074b4c body=161 status=ok
// SIG undefined FUN_146074b4c(void)

void FUN_146074b4c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < uVar3) {
      FUN_14738cd82(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + lVar2);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      puVar4 = puVar4 + 2;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 < iVar1) {
    FUN_14738ce76(param_1,param_2,iVar1 - param_2);
    FUN_14738ceda(param_1);
    return;
  }
  return;
}



// FUNCTION 146074bfa FUN_146074bfa body=1127 status=ok
// SIG undefined FUN_146074bfa(void)

undefined8 * FUN_146074bfa(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_e8 [8];
  undefined4 local_e0;
  undefined3 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  wchar_t *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  longlong *local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a5162a0;
  param_1[5] = &PTR_FUN_14a5165b0;
  FUN_140ca8d78(param_1 + 0x2e);
  FUN_140a581a0(param_1 + 0x9c);
  FUN_146075062(param_1 + 0xf8);
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  FUN_144a5dc74(param_1 + 0xfe);
  FUN_144a5dc74(param_1 + 0x100);
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  uVar4 = FUN_140bcc93a();
  FUN_141254448(param_1 + 0x2e,uVar4);
  lVar5 = FUN_140bcc93a();
  FUN_140a5e6b8(param_1 + 0x9c,lVar5 + 0x45e0);
  local_c0 = L"DefaultKeySelectionText";
  local_b8._0_4_ = 0x17;
  FUN_1446e940c(&local_e0,&local_c0);
  local_c0 = L"InputKeySelector";
  local_b8 = CONCAT44(local_b8._4_4_,0x10);
  FUN_1446e940c(local_e8,&local_c0);
  FUN_140208bae(&local_c0,local_e8,&local_e0,&DAT_149e30fc2);
  FUN_140008f88(param_1 + 0xfe,&local_c0);
  if (local_c0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c0 + 0x10))();
  }
  local_c0 = L"DefaultEmptyText";
  local_b8._0_4_ = 0x10;
  FUN_1446e940c(&local_e0,&local_c0);
  local_c0 = L"InputKeySelector";
  local_b8 = CONCAT44(local_b8._4_4_,0x10);
  FUN_1446e940c(local_e8,&local_c0);
  FUN_140208bae(&local_c0,local_e8,&local_e0,L"Empty");
  FUN_140008f88(param_1 + 0x100,&local_c0);
  if (local_c0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c0 + 0x10))();
  }
  plVar2 = DAT_14c966e90;
  local_b8 = DAT_14c966e88;
  local_c0 = DAT_14c966e80;
  local_b0 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_c0 = DAT_14c966e80;
    local_b8 = DAT_14c966e88;
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    local_a8 = local_a8 & 0xfffffff0;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1413a4742(param_1 + 0xf8,&local_c0);
  plVar2 = local_b0;
  *(undefined1 *)(param_1 + 0xfb) = (undefined1)local_a8;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x102) = 1;
  FUN_14011b67e(param_1 + 0x103,&DAT_14c965890);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab7c60) && (FUN_144b3d300(&DAT_14cab7c60), DAT_14cab7c60 == -1)) {
    FUN_140056680(&local_c0,L"/Engine/EngineFonts/Roboto");
    local_f8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_c0);
    pwVar6 = local_c0;
    if ((int)local_b8 == 0) {
      pwVar6 = L"";
    }
    FUN_145b0497c(&DAT_14cab7c48,pwVar6,0);
    if (local_c0 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_1433341c3);
    _Init_thread_footer(&DAT_14cab7c60);
  }
  local_d8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0x3f800000;
  FUN_1446ddc76(local_e8,&DAT_149eea5a7,1);
  local_f8 = (undefined8 *)&local_e0;
  FUN_140324f46(&local_c0,DAT_14cab7c58,0x41c00000,local_e8);
  FUN_1412cc59c(param_1 + 0x9d,&local_c0);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)local_88 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146075062 FUN_146075062 body=51 status=ok
// SIG undefined FUN_146075062(void)

void FUN_146075062(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = DAT_14c966e80;
  param_1[1] = DAT_14c966e88;
  lVar2 = DAT_14c966e90;
  param_1[2] = DAT_14c966e90;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf0;
  return;
}



// FUNCTION 14607509e FUN_14607509e body=290 status=ok
// SIG undefined FUN_14607509e(void)

undefined8 * FUN_14607509e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aecb470;
  param_1[5] = &PTR_FUN_14aecb750;
  param_1[7] = &PTR_FUN_14aecb770;
  param_1[8] = &PTR_FUN_14aecb7b0;
  param_1[0x16] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b) = 0;
  param_1[0x18] = &PTR_LAB_14aeb6a30;
  param_1[0x19] = &LAB_14844e1e2;
  param_1[0x14] = FUN_146bd3274;
  param_1[0x1e] = 0;
  param_1[0x20] = &PTR_LAB_14aedb570;
  param_1[0x21] = &LAB_14844e1e6;
  param_1[0x1c] = &LAB_14844e1ea;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x3b] = 0x3ff0000000000000;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x46] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x44] = DAT_14c8464e0;
  param_1[0x45] = uVar1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  return param_1;
}



// FUNCTION 1460751c0 FUN_1460751c0 body=560 status=ok
// SIG undefined FUN_1460751c0(void)

undefined8 * FUN_1460751c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = param_1[-3];
  local_50 = lVar8;
  if (lVar8 != 0) {
    lVar7 = FUN_1409220ae();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      (**(code **)(*(longlong *)(lVar8 + 0x3b0) + 0x18))(lVar8 + 0x3b0,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
  }
  local_58 = (longlong *)0x0;
  FUN_14485c47a(&local_58,lVar8);
  local_48 = local_58;
  iVar6 = FUN_146075408((uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58);
  lVar8 = (longlong)iVar6 * 0x20 + DAT_14cb71148;
  if (lVar8 == 0 || iVar6 == -1) {
    local_60 = (longlong *)FUN_14001cc68(0x98,0x10);
    local_60[1] = (longlong)&DAT_100000001;
    *local_60 = (longlong)&PTR_FUN_14a1b6cc0;
    local_68 = local_60 + 2;
    local_60[2] = (longlong)&PTR_FUN_14a18e458;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    local_60[8] = 0;
    local_60[9] = 0;
    local_60[10] = 0;
    local_60[0xb] = 0;
    local_60[0xc] = 0;
    local_60[0xd] = 0;
    local_60[0xe] = 0;
    local_60[0xf] = 0;
    local_60[0x10] = 0;
    local_60[0x11] = 0;
    local_60[0x12] = 0;
    FUN_1404e24cc(&local_68);
    local_48 = &local_50;
    local_40 = &local_68;
    FUN_1460754d4(&local_34);
    plVar2 = local_60;
    uVar4 = *(undefined8 *)(DAT_14cb71148 + 8 + (longlong)local_34 * 0x20);
    plVar5 = *(longlong **)(DAT_14cb71148 + 0x10 + (longlong)local_34 * 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    (**(code **)(*param_1 + 0x20))(param_1,uVar4);
    *param_2 = uVar4;
    param_2[1] = plVar5;
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
  }
  else {
    *param_2 = *(undefined8 *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar8 + 0x10);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460753f6 FUN_1460753f6 body=18 status=ok
// SIG undefined FUN_1460753f6(void)

void FUN_1460753f6(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146075405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2a8))(param_1 + -0x28);
  return;
}



// FUNCTION 146075408 FUN_146075408 body=202 status=ok
// SIG undefined FUN_146075408(void)

int FUN_146075408(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb71150 != DAT_14cb7117c) {
    puVar2 = &DAT_14cb71180;
    if (DAT_14cb71188 != (undefined *)0x0) {
      puVar2 = DAT_14cb71188;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb71190 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb71148 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_14476110a(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_146075496;
        iVar3 = *(int *)(DAT_14cb71148 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146075496:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460754d4 FUN_1460754d4 body=340 status=ok
// SIG undefined FUN_1460754d4(void)

undefined4 * FUN_1460754d4(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460756f2(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = 0;
  FUN_14485c47a(local_38,uVar2);
  local_38[1] = *puVar1;
  lVar3 = puVar1[1];
  local_38[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)*local_38 >> 0x20) ^ (uint)*local_38;
  cVar5 = FUN_14607562a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb71150 - DAT_14cb7117c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb71190)) {
      uVar10 = DAT_14cb71190 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x1c) = uVar10;
      puVar7 = DAT_14cb71188;
      if (DAT_14cb71188 == (undefined *)0x0) {
        puVar7 = &DAT_14cb71180;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb71190 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb71188;
      if (DAT_14cb71188 == (undefined *)0x0) {
        puVar7 = &DAT_14cb71180;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb71190 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb71190 = iVar9;
      FUN_146075800();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607562a FUN_14607562a body=198 status=ok
// SIG undefined FUN_14607562a(void)

undefined8 FUN_14607562a(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb71150 - DAT_14cb7117c != 1) {
    local_38 = *param_2;
    iVar9 = FUN_146075408();
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(DAT_14cb71148 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(DAT_14cb71148 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      uVar5 = *(undefined4 *)param_2;
      uVar6 = *(undefined4 *)((longlong)param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 1);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_2[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_1487c02f8(*param_3);
      *param_3 = iVar9;
      uVar10 = 1;
      goto LAB_146075657;
    }
  }
  uVar10 = 0;
LAB_146075657:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460756f2 FUN_1460756f2 body=269 status=ok
// SIG undefined FUN_1460756f2(void)

int * FUN_1460756f2(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb71178;
  iVar3 = DAT_14cb71150;
  if (DAT_14cb7117c == 0) {
    iVar2 = DAT_14cb71150 + 1;
    bVar7 = DAT_14cb71154 == DAT_14cb71150;
    DAT_14cb71150 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb71148,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb71158,1);
    puVar4 = DAT_14cb71168;
    if (DAT_14cb71168 == (undefined *)0x0) {
      puVar4 = &DAT_14cb71158;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb71178;
    DAT_14cb71178 = *(int *)(DAT_14cb71148 + 4 + lVar6 * 0x20);
    DAT_14cb7117c = DAT_14cb7117c + -1;
    if (DAT_14cb7117c != 0) {
      *(undefined4 *)(DAT_14cb71148 + (longlong)DAT_14cb71178 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb71158;
  if (DAT_14cb71168 != (undefined *)0x0) {
    puVar4 = DAT_14cb71168;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb71148;
  return param_1;
}



// FUNCTION 146075800 FUN_146075800 body=489 status=ok
// SIG undefined FUN_146075800(void)

void FUN_146075800(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14cb71188 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb71188,0,0,4);
  }
  uVar2 = DAT_14cb71190;
  uVar3 = local_50;
  if (DAT_14cb71190 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb71180,0,DAT_14cb71190,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb71188;
        if (DAT_14cb71188 == (undefined *)0x0) {
          puVar5 = &DAT_14cb71180;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb71190 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb71158;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb71170 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb71148;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb71190 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb71188;
        if (DAT_14cb71188 == (undefined *)0x0) {
          puVar5 = &DAT_14cb71180;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb71190 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb71188;
        if (DAT_14cb71188 == (undefined *)0x0) {
          puVar5 = &DAT_14cb71180;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb71190 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460759ea FUN_1460759ea body=40 status=ok
// SIG undefined FUN_1460759ea(void)

undefined8 FUN_1460759ea(undefined8 param_1,int param_2)

{
  FUN_146075a12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146075a12 FUN_146075a12 body=258 status=ok
// SIG undefined FUN_146075a12(void)

void FUN_146075a12(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4732a0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146075b2a FUN_146075b2a body=102 status=ok
// SIG undefined FUN_146075b2a(void)

void FUN_146075b2a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  byte bVar13;
  uint uVar14;
  undefined1 auStack_1a8 [32];
  undefined1 uStack_188;
  longlong lStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  undefined1 auStack_160 [32];
  longlong lStack_140;
  longlong lStack_130;
  longlong lStack_108;
  byte bStack_e7;
  longlong *plStack_88;
  int iStack_80;
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  lVar4 = FUN_1404281d6();
  if (lVar4 != 0) {
    lVar5 = FUN_144a7a5f4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      *(undefined1 *)(lVar4 + 0xf69) = *(undefined1 *)(param_1 + 0x62fb);
      if (*(char *)(lVar4 + 0xf68) != '\0') {
        return;
      }
      uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
      if (*(char *)(lVar4 + 0xf68) == '\x01') {
        if (*(char *)(lVar4 + 0xf6a) != '\0') {
          lVar5 = FUN_14011c349();
          lVar9 = 0;
          bVar3 = true;
          do {
            bVar12 = bVar3;
            if ((*(byte *)(lVar4 + 0xf6a) >> (int)lVar9 & 1) != 0) {
              FUN_140994e4c(lVar4,*(undefined8 *)(lVar5 + 0x498 + lVar9 * 0xd8),0,0);
            }
            lVar9 = 1;
            bVar3 = false;
          } while (bVar12);
          *(undefined1 *)(lVar4 + 0xf6a) = 0;
        }
      }
      else if (*(char *)(lVar4 + 0xf69) != *(char *)(lVar4 + 0xf6a)) {
        lVar5 = FUN_14011c349();
        lVar9 = lVar5 + 0x498;
        bVar13 = *(byte *)(lVar4 + 0xf6a);
        plStack_170 = (longlong *)(lVar4 + 0x8c0);
        lVar11 = 0;
        bVar3 = true;
        do {
          bVar12 = bVar3;
          uVar14 = 1 << (sbyte)lVar11;
          if (((*(byte *)(lVar4 + 0xf69) >> (int)lVar11 & 1) != 0) !=
              ((bVar13 >> (int)lVar11 & 1) != 0)) {
            bVar13 = (byte)uVar14;
            if ((uVar14 & *(byte *)(lVar4 + 0xf69)) == 0) {
              FUN_140994e4c(lVar4,*(undefined8 *)(lVar9 + lVar11 * 0xd8),0,0);
              bVar13 = ~bVar13 & *(byte *)(lVar4 + 0xf6a);
            }
            else {
              if ((uVar14 & *(byte *)(lVar4 + 0xf6b)) == 0) {
                if (((*(int *)(lVar4 + 0xbf0) < 1) ||
                    (plVar7 = *(longlong **)(*(longlong *)(lVar4 + 0xbe8) + 8),
                    plVar7 == (longlong *)0x0)) ||
                   (lStack_178 = lVar11 * 0xd8, (*(byte *)(lVar5 + 0x511 + lStack_178) & 1) == 0)) {
                  (**(code **)(*plStack_170 + 0x18))(plStack_170,lVar11 * 0xd8 + lVar9);
                }
                else {
                  puStack_58 = (undefined1 *)0x0;
                  uStack_50 = 0x400000000;
                  (**(code **)(*plVar7 + 0x340))(plVar7,&plStack_88);
                  if ((longlong)iStack_80 != 0) {
                    lStack_178 = lStack_178 + lVar9;
                    plStack_168 = plStack_88 + iStack_80;
                    plVar7 = plStack_88;
                    do {
                      uVar2 = uStack_50;
                      lVar1 = *plVar7;
                      puVar6 = puStack_58;
                      if (puStack_58 == (undefined1 *)0x0) {
                        puVar6 = auStack_78;
                      }
                      lVar8 = (longlong)(int)uStack_50;
                      if (lVar8 != 0) {
                        lVar10 = 0;
                        do {
                          if (*(longlong *)(puVar6 + lVar10) == lVar1) goto LAB_146075d77;
                          lVar10 = lVar10 + 8;
                        } while (lVar8 * 8 - lVar10 != 0);
                      }
                      uVar14 = (int)uStack_50 + 1;
                      uStack_50 = CONCAT44(uStack_50._4_4_,uVar14);
                      if (uStack_50._4_4_ < uVar14) {
                        FUN_1456af342(auStack_78,uVar2 & 0xffffffff);
                      }
                      puVar6 = puStack_58;
                      if (puStack_58 == (undefined1 *)0x0) {
                        puVar6 = auStack_78;
                      }
                      *(longlong *)(puVar6 + lVar8 * 8) = lVar1;
                      FUN_140da8e32(auStack_160,lStack_178);
                      bStack_e7 = bStack_e7 & 0xfe;
                      lStack_108 = lVar1;
                      (**(code **)(*plStack_170 + 0x18))(plStack_170,auStack_160);
                      if (lStack_130 != 0) {
                        FUN_1400020a8();
                      }
                      if (lStack_140 != 0) {
                        FUN_1400020a8();
                      }
LAB_146075d77:
                      plVar7 = plVar7 + 1;
                    } while (plVar7 != plStack_168);
                  }
                  if (puStack_58 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                *(byte *)(lVar4 + 0xf6b) = *(byte *)(lVar4 + 0xf6b) | bVar13;
              }
              uStack_188 = 0;
              FUN_140980406(lVar4,*(undefined8 *)(lVar9 + lVar11 * 0xd8),0);
              bVar13 = bVar13 | *(byte *)(lVar4 + 0xf6a);
            }
            *(byte *)(lVar4 + 0xf6a) = bVar13;
          }
          lVar11 = 1;
          bVar3 = false;
        } while (bVar12);
      }
      if ((uStack_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  return;
}



// FUNCTION 146075b90 FUN_146075b90 body=919 status=ok
// SIG undefined FUN_146075b90(void)

void FUN_146075b90(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  undefined1 local_160 [32];
  longlong local_140;
  longlong local_130;
  longlong local_108;
  byte local_e7;
  longlong *local_88;
  int local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + 0xf68) == '\x01') {
    if (*(char *)(param_1 + 0xf6a) != '\0') {
      lVar4 = FUN_14011c349();
      lVar8 = 0;
      bVar3 = true;
      do {
        bVar11 = bVar3;
        if ((*(byte *)(param_1 + 0xf6a) >> (int)lVar8 & 1) != 0) {
          FUN_140994e4c(param_1,*(undefined8 *)(lVar4 + 0x498 + lVar8 * 0xd8),0,0);
        }
        lVar8 = 1;
        bVar3 = false;
      } while (bVar11);
      *(undefined1 *)(param_1 + 0xf6a) = 0;
    }
  }
  else if (*(char *)(param_1 + 0xf69) != *(char *)(param_1 + 0xf6a)) {
    lVar4 = FUN_14011c349();
    lVar8 = lVar4 + 0x498;
    bVar12 = *(byte *)(param_1 + 0xf6a);
    local_170 = (longlong *)(param_1 + 0x8c0);
    lVar10 = 0;
    bVar3 = true;
    do {
      bVar11 = bVar3;
      uVar13 = 1 << (sbyte)lVar10;
      if (((*(byte *)(param_1 + 0xf69) >> (int)lVar10 & 1) != 0) !=
          ((bVar12 >> (int)lVar10 & 1) != 0)) {
        bVar12 = (byte)uVar13;
        if ((uVar13 & *(byte *)(param_1 + 0xf69)) == 0) {
          FUN_140994e4c(param_1,*(undefined8 *)(lVar8 + lVar10 * 0xd8),0,0);
          bVar12 = ~bVar12 & *(byte *)(param_1 + 0xf6a);
        }
        else {
          if ((uVar13 & *(byte *)(param_1 + 0xf6b)) == 0) {
            if (((*(int *)(param_1 + 0xbf0) < 1) ||
                (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 8),
                plVar6 == (longlong *)0x0)) ||
               (local_178 = lVar10 * 0xd8, (*(byte *)(lVar4 + 0x511 + local_178) & 1) == 0)) {
              (**(code **)(*local_170 + 0x18))(local_170,lVar10 * 0xd8 + lVar8);
            }
            else {
              local_58 = (undefined1 *)0x0;
              local_50 = 0x400000000;
              (**(code **)(*plVar6 + 0x340))(plVar6,&local_88);
              if ((longlong)local_80 != 0) {
                local_178 = local_178 + lVar8;
                local_168 = local_88 + local_80;
                plVar6 = local_88;
                do {
                  uVar2 = local_50;
                  lVar1 = *plVar6;
                  puVar5 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar5 = local_78;
                  }
                  lVar7 = (longlong)(int)local_50;
                  if (lVar7 != 0) {
                    lVar9 = 0;
                    do {
                      if (*(longlong *)(puVar5 + lVar9) == lVar1) goto LAB_146075d77;
                      lVar9 = lVar9 + 8;
                    } while (lVar7 * 8 - lVar9 != 0);
                  }
                  uVar13 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,uVar13);
                  if (local_50._4_4_ < uVar13) {
                    FUN_1456af342(local_78,uVar2 & 0xffffffff);
                  }
                  puVar5 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar5 = local_78;
                  }
                  *(longlong *)(puVar5 + lVar7 * 8) = lVar1;
                  FUN_140da8e32(local_160,local_178);
                  local_e7 = local_e7 & 0xfe;
                  local_108 = lVar1;
                  (**(code **)(*local_170 + 0x18))(local_170,local_160);
                  if (local_130 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_140 != 0) {
                    FUN_1400020a8();
                  }
LAB_146075d77:
                  plVar6 = plVar6 + 1;
                } while (plVar6 != local_168);
              }
              if (local_58 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
            *(byte *)(param_1 + 0xf6b) = *(byte *)(param_1 + 0xf6b) | bVar12;
          }
          local_188 = 0;
          FUN_140980406(param_1,*(undefined8 *)(lVar8 + lVar10 * 0xd8),0);
          bVar12 = bVar12 | *(byte *)(param_1 + 0xf6a);
        }
        *(byte *)(param_1 + 0xf6a) = bVar12;
      }
      lVar10 = 1;
      bVar3 = false;
    } while (bVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146075f28 FUN_146075f28 body=38 status=ok
// SIG undefined FUN_146075f28(void)

undefined8 FUN_146075f28(undefined8 param_1,int param_2)

{
  FUN_146075f4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146075f4e FUN_146075f4e body=260 status=ok
// SIG undefined FUN_146075f4e(void)

void FUN_146075f4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a1d80;
  FUN_140d4710a(param_1 + 0x4c);
  FUN_140d4710a(param_1 + 0x3c);
  FUN_145f8d037(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_14071621b(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x10))();
  }
  FUN_14071621b(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x10))();
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 14607605a FUN_14607605a body=290 status=ok
// SIG undefined FUN_14607605a(void)

undefined8 * FUN_14607605a(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bab5010;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  return param_1;
}



// FUNCTION 146076184 FUN_146076184 body=997 status=ok
// SIG undefined FUN_146076184(void)

undefined8 * FUN_146076184(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc4df10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"VertexCount");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"PolygonCount");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"BoundingBox");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"HasVertexNormal");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"HasVertexBinormal");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"HasVertexTangent");
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 0x18,L"HasSmoothGroup");
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_14020fad6(param_1 + 0x1a,L"HasVertexColor");
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_14020fad6(param_1 + 0x1c);
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  memset(param_1 + 0x1e,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_14607656a();
  pvVar4 = DAT_14cc0d3d0;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0d3d8;
  local_58 = DAT_14cc0d3d8;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0d3d8,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  puVar1 = param_1 + 5;
  FUN_1410835a0(param_1 + 0x1e,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1460765e4();
  pvVar4 = DAT_14cc0d3e8;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0d3f0;
  local_58 = DAT_14cc0d3f0;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0d3f0,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x26,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14607665e();
  pvVar4 = DAT_14cc0d400;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0d408;
  local_58 = DAT_14cc0d408;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0d408,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  FUN_1410835a0(param_1 + 0x2a,puVar1,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1460766d8();
  pvVar4 = DAT_14cc0d418;
  local_60 = (void *)0x0;
  lVar6 = (longlong)DAT_14cc0d420;
  local_58 = DAT_14cc0d420;
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cc0d420,0);
    memcpy(local_60,pvVar4,lVar6 * 2);
  }
  local_70 = param_1[5];
  local_68 = (longlong *)param_1[6];
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x2e,&local_70,&local_60);
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607656a FUN_14607656a body=121 status=ok
// SIG undefined FUN_14607656a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607656a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d3e0) {
    FUN_144b3d300(&DAT_14cc0d3e0);
    if (DAT_14cc0d3e0 == -1) {
      DAT_14cc0d3d0 = 0;
      _DAT_14cc0d3d8 = 0;
      FUN_14020fad6(&DAT_14cc0d3d0,L"__MeshSkeletonDependencies__");
      atexit((_func_5014 *)&LAB_1444c4e42);
      _Init_thread_footer(&DAT_14cc0d3e0);
      return;
    }
  }
  return;
}



// FUNCTION 1460765e4 FUN_1460765e4 body=121 status=ok
// SIG undefined FUN_1460765e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460765e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d3f8) {
    FUN_144b3d300(&DAT_14cc0d3f8);
    if (DAT_14cc0d3f8 == -1) {
      DAT_14cc0d3e8 = 0;
      _DAT_14cc0d3f0 = 0;
      FUN_14020fad6(&DAT_14cc0d3e8,L"__MeshMorphTargetDependencies__");
      atexit((_func_5014 *)&LAB_1444c4e53);
      _Init_thread_footer(&DAT_14cc0d3f8);
      return;
    }
  }
  return;
}



// FUNCTION 14607665e FUN_14607665e body=121 status=ok
// SIG undefined FUN_14607665e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607665e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d410) {
    FUN_144b3d300(&DAT_14cc0d410);
    if (DAT_14cc0d410 == -1) {
      DAT_14cc0d400 = 0;
      _DAT_14cc0d408 = 0;
      FUN_14020fad6(&DAT_14cc0d400,L"__MeshSceneInstancesUids__");
      atexit((_func_5014 *)&LAB_1444c4e64);
      _Init_thread_footer(&DAT_14cc0d410);
      return;
    }
  }
  return;
}



// FUNCTION 1460766d8 FUN_1460766d8 body=121 status=ok
// SIG undefined FUN_1460766d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460766d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d428) {
    FUN_144b3d300(&DAT_14cc0d428);
    if (DAT_14cc0d428 == -1) {
      DAT_14cc0d418 = 0;
      _DAT_14cc0d420 = 0;
      FUN_14020fad6(&DAT_14cc0d418,L"__SlotMaterialDependencies__");
      atexit((_func_5014 *)&LAB_1444c4e75);
      _Init_thread_footer(&DAT_14cc0d428);
      return;
    }
  }
  return;
}



// FUNCTION 146076752 FUN_146076752 body=74 status=ok
// SIG undefined FUN_146076752(void)

void FUN_146076752(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar1 == '\0') {
    FUN_14607679c(param_1,param_2);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = DAT_14cbe0d70;
  *(undefined4 *)((longlong)param_1 + 0x364) = param_2;
  FUN_14615d7d6(param_1);
  return;
}



// FUNCTION 14607679c FUN_14607679c body=220 status=ok
// SIG undefined FUN_14607679c(void)

void FUN_14607679c(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((((lVar3 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar3 + 200))) &&
     ((lVar3 = (ulonglong)param_2 * 0xb0 + *(longlong *)(lVar3 + 0xc0), lVar3 != 0 &&
      (*(char *)(lVar3 + 8) == '\0')))) {
    uVar1 = FUN_14607687a(param_1);
    local_1c = uVar1;
    uVar2 = FUN_1412e481c(param_1);
    if ((-1 < (int)uVar2) && (((int)uVar2 < *(int *)(param_1 + 0x2b8) && (-1 < (int)uVar1)))) {
      if ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x2b0) + 0x18 + (ulonglong)uVar2 * 0x30)) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x10 + (ulonglong)uVar2 * 0x30);
        if ((*(char *)(lVar3 + 0x80 + (ulonglong)uVar1 * 0xb0) == '\0') &&
           (*(char *)(lVar3 + (ulonglong)uVar1 * 0xb0 + 8) == '\0')) {
          FUN_1460768f0(param_1,&local_1c);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607687a FUN_14607687a body=117 status=ok
// SIG undefined FUN_14607687a(void)

int FUN_14607687a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = FUN_1412e481c();
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x2b8))) {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x18 + (ulonglong)uVar1 * 0x30);
    if (lVar3 != 0) {
      uVar2 = 0;
      do {
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x10 + (ulonglong)uVar1 * 0x30) + uVar2
             ) == *param_2) {
          return (int)(uVar2 >> 4) * -0x45d1745d;
        }
        uVar2 = uVar2 + 0xb0;
      } while (lVar3 * 0xb0 - uVar2 != 0);
    }
  }
  return -1;
}



// FUNCTION 1460768f0 FUN_1460768f0 body=333 status=ok
// SIG undefined FUN_1460768f0(void)

void FUN_1460768f0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined4 *)(param_1 + 800) = *param_2;
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x324) = 0xffffffff;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveNavItemByIndex",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_140c7f7d4(uVar2,local_38,param_2);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146076a3e FUN_146076a3e body=398 status=ok
// SIG undefined FUN_146076a3e(void)

void FUN_146076a3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14158cbd4();
  cVar3 = FUN_146076bce(param_1 + 0x30,0);
  if (cVar3 == '\0') {
    local_78 = param_1;
    FUN_146076dda(&local_70,param_1);
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    plVar5 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b4f0e40;
    plVar1 = plVar5 + 2;
    local_50 = local_70;
    local_70 = (longlong *)0x0;
    local_48 = (longlong *)CONCAT44(local_48._4_4_,local_68);
    local_68 = 0;
    FUN_146076bde(plVar1,uVar4,*(undefined4 *)(param_1 + 0x48),&local_50);
    local_60 = plVar1;
    local_58 = plVar5;
    FUN_1461443cc(&local_60,plVar1);
    local_50 = plVar1;
    local_48 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_146076d0e(param_1 + 0x20,&local_50);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_146076d0e(param_1 + 0x20);
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
    }
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_70);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146076bce FUN_146076bce body=16 status=ok
// SIG undefined FUN_146076bce(void)

byte FUN_146076bce(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 146076bde FUN_146076bde body=178 status=ok
// SIG undefined FUN_146076bde(void)

undefined8 *
FUN_146076bde(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_14b4f0350;
  param_1[4] = &PTR_LAB_14b4f0378;
  FUN_14485c47a(param_1 + 6);
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14b4f0e60;
  param_1[4] = &PTR_FUN_14b4f0e88;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_146076c90(param_1 + 10,param_4);
  *(undefined4 *)(param_1 + 0xc) = 7;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 146076c90 FUN_146076c90 body=124 status=ok
// SIG undefined FUN_146076c90(void)

void FUN_146076c90(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
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



// FUNCTION 146076d0e FUN_146076d0e body=202 status=ok
// SIG undefined FUN_146076d0e(void)

void FUN_146076d0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar4 = FUN_1413da074(&local_38);
    *(longlong *)(param_1 + 8) = lVar4;
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
      lVar4 = *(longlong *)(param_1 + 8);
    }
    if (lVar4 == 0) goto LAB_146076d90;
  }
  local_38 = *param_2;
  plStack_30 = (longlong *)param_2[1];
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(lVar4,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_146076d90:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146076dda FUN_146076dda body=422 status=ok
// SIG undefined FUN_146076dda(void)

longlong * FUN_146076dda(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_146076eb4:
    *puVar3 = &PTR_LAB_14b4f3a70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0f40;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146076eb4;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4f3a70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0f40;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 146076f80 FUN_146076f80 body=307 status=ok
// SIG undefined FUN_146076f80(void)

void FUN_146076f80(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  int local_38 [2];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *(uint *)(param_1 + 3);
  iVar8 = 0;
  if (0 < (int)uVar5) {
    iVar8 = 0;
    uVar6 = (ulonglong)uVar5;
    do {
      uVar6 = uVar6 >> 1;
      uVar7 = (uint)uVar6 + iVar8;
      if (param_3 < *(int *)(param_1[2] + (ulonglong)uVar7 * 0x18)) {
        iVar8 = uVar7 + (uVar5 & 1);
      }
      bVar4 = 1 < uVar5;
      uVar5 = (uint)uVar6;
    } while (bVar4);
  }
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_38[0] = param_3;
  FUN_1460770b4(param_1 + 2,local_38,iVar8);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)*param_2;
  local_48 = *param_1;
  local_40 = param_1[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 8))(plVar3,&local_48);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460770b4 FUN_1460770b4 body=142 status=ok
// SIG undefined FUN_1460770b4(void)

int FUN_1460770b4(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146077142(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar4 + 0x18),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar4) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar4) = *(undefined8 *)(param_2 + 2);
  lVar3 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar2 + 0x10 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 146077142 FUN_146077142 body=147 status=ok
// SIG undefined FUN_146077142(void)

void FUN_146077142(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1460771d6 FUN_1460771d6 body=50 status=ok
// SIG undefined FUN_1460771d6(void)

void FUN_1460771d6(longlong *param_1,undefined4 param_2)

{
  if ((char)param_1[0x6e] == '\x01') {
    (**(code **)(*param_1 + 0x488))(param_1,param_2);
  }
  FUN_1406f1454(param_1,param_2);
  return;
}



// FUNCTION 146077208 FUN_146077208 body=500 status=ok
// SIG undefined FUN_146077208(void)

void FUN_146077208(longlong *param_1,char param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined1 auStack_158 [32];
  undefined8 *local_138 [2];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8;
  undefined **local_b8;
  longlong local_b0;
  undefined *local_a8 [4];
  int local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_1412af310(uVar2);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else if (((param_2 == '\0') && (param_1[0x6d] != 0)) &&
          ((*(byte *)(param_1[0x6d] + 0x16c) & 4) != 0)) {
    local_c8 = 0;
    local_b8 = &PTR_DAT_14b414cb0;
    local_d8[0] = &LAB_143dcca28;
    local_b0 = param_1[6];
    FUN_1458e8594(lVar3,local_78);
    FUN_1458e842a(local_78,local_d8);
    FUN_1458e84aa(local_78,local_138);
    uVar5 = 0;
    if (local_88 != local_e8) {
      uVar1 = 0;
      do {
        uVar5 = uVar1;
        if (local_88 < 0) {
          if ((local_e8 < 0) || (*(int *)(local_138[0] + 0x73) <= local_e8)) break;
        }
        else if (local_e8 < 0) {
          if (*(int *)(local_d8[0] + 0x398) <= local_88) break;
        }
        else if (local_e8 < *(int *)(local_138[0] + 0x73) ==
                 local_88 < *(int *)(local_d8[0] + 0x398)) break;
        uVar5 = 1;
        FUN_1460773fe(local_80,1);
        local_88 = local_88 + 1;
        FUN_14131935c(local_d8);
        uVar1 = 1;
      } while (local_88 != local_e8);
    }
    if (local_128 != 0) {
      if (local_118 == (longlong *)0x0) {
        local_118 = local_108;
      }
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_c8 != 0) {
      ppuVar4 = local_b8;
      if (local_b8 == (undefined **)0x0) {
        ppuVar4 = local_a8;
      }
      (**(code **)(*ppuVar4 + 0x10))();
    }
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  else {
    uVar5 = 0;
    FUN_14127ea9c(lVar3,param_1[6],0);
  }
  *(undefined1 *)(param_1 + 0x6e) = uVar5;
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460773fe FUN_1460773fe body=46 status=ok
// SIG undefined FUN_1460773fe(void)

void FUN_1460773fe(longlong param_1,char param_2)

{
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x16c) & 4) != 0)) {
    *(undefined2 *)(param_1 + 0x312) = 0x100;
    *(byte *)(param_1 + 0x311) = *(byte *)(param_1 + 0x311) & 0xfd | param_2 * '\x02';
  }
  return;
}



// FUNCTION 146077438 FUN_146077438 body=288 status=ok
// SIG undefined FUN_146077438(void)

undefined8 * FUN_146077438(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6e4bf0;
  param_1[6] = 0;
  param_1[0x23] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x85) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_144a78564(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  param_1[0x17] = 0;
  *(byte *)((longlong)param_1 + 0xc2) = *(byte *)((longlong)param_1 + 0xc2) & 0xfd;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x19] = &DAT_100000001;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) | 2;
  param_1[0x24] = 500;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x4059000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3ff0000000000000;
  *(byte *)((longlong)param_1 + 0x73) = *(byte *)((longlong)param_1 + 0x73) & 0xf2 | 5;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x100;
  *(undefined4 *)(param_1 + 0x22) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 146077564 FUN_146077564 body=287 status=ok
// SIG undefined FUN_146077564(void)

undefined8 * FUN_146077564(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14130963a();
  *param_1 = &PTR_FUN_14adcda00;
  param_1[7] = DAT_14c967818;
  param_1[8] = 0;
  uVar2 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add35e0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146077684 FUN_146077684 body=111 status=ok
// SIG undefined FUN_146077684(void)

void FUN_146077684(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1460776f4(local_20,param_1);
  uVar1 = FUN_144a52528();
  FUN_1446f470e(&local_28,L"GeometryFramework",1);
  FUN_1405f3750(uVar1,local_28,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460776f4 FUN_1460776f4 body=186 status=ok
// SIG undefined FUN_1460776f4(void)

undefined8 FUN_1460776f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14af12820;
  puVar1[3] = param_2;
  puVar1[4] = FUN_1461a567e;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460777b0 FUN_1460777b0 body=68 status=ok
// SIG undefined FUN_1460777b0(void)

void FUN_1460777b0(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1e0);
  memset(_Dst,0,0x1e0);
  FUN_1460777f4(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1460777f4 FUN_1460777f4 body=401 status=ok
// SIG undefined FUN_1460777f4(void)

undefined8 * FUN_1460777f4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8cb970;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_146077986(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  uVar3 = DAT_14c846328._4_4_;
  uVar2 = (undefined4)DAT_14c846328;
  uVar1 = DAT_14c846320._4_4_;
  *(undefined4 *)(param_1 + 0x2b) = (undefined4)DAT_14c846320;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar3;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_1400b22c2(&local_40,"#FFFFFF");
  param_1[0x2e] = local_40;
  *(undefined4 *)(param_1 + 0x2f) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x17c) = local_34;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0x3f800000;
  FUN_1400b22c2(&local_40,"#FFFFFF");
  param_1[0x32] = local_40;
  *(undefined4 *)(param_1 + 0x33) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x19c) = local_34;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0x3f800000;
  FUN_1400b22c2(&local_40,"#000000");
  param_1[0x36] = local_40;
  *(undefined4 *)(param_1 + 0x37) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = local_34;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146077986 FUN_146077986 body=128 status=ok
// SIG undefined FUN_146077986(void)

undefined8 * FUN_146077986(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  FUN_140056680(param_1,L"#FFFFFF");
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff;
  return param_1;
}



// FUNCTION 146077a0e FUN_146077a0e body=291 status=ok
// SIG undefined FUN_146077a0e(void)

undefined8 * FUN_146077a0e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba589c0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 2;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 2;
  return param_1;
}



// FUNCTION 146077b32 FUN_146077b32 body=296 status=ok
// SIG undefined FUN_146077b32(void)

undefined4 * FUN_146077b32(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146077cf2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar5;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1415cecbb(local_40);
  cVar6 = FUN_146077c5c(param_1,uVar7,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146077dda(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146077c5c FUN_146077c5c body=150 status=ok
// SIG undefined FUN_146077c5c(void)

undefined8 FUN_146077c5c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
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
      while( true ) {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if ((*plVar8 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar9 * 0x28) == param_3[1])) break;
        iVar9 = (int)plVar8[4];
        if (iVar9 == -1) {
          return 0;
        }
      }
      lVar5 = *param_3;
      uVar1 = *(undefined4 *)((longlong)param_3 + 4);
      lVar6 = param_3[1];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar7 = param_3[3];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(int *)(plVar8 + 2) = (int)param_3[2];
      *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
      *(int *)(plVar8 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
      *(int *)plVar8 = (int)lVar5;
      *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
      *(int *)(plVar8 + 1) = (int)lVar6;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
      FUN_1479676ee((int)lVar5,*param_4);
      *param_4 = iVar9;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146077cf2 FUN_146077cf2 body=231 status=ok
// SIG undefined FUN_146077cf2(void)

int * FUN_146077cf2(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146077dda FUN_146077dda body=447 status=ok
// SIG undefined FUN_146077dda(void)

void FUN_146077dda(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1415cecbb(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 146077f9a FUN_146077f9a body=310 status=ok
// SIG undefined FUN_146077f9a(void)

void FUN_146077f9a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_60 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = (undefined4)uStack_20;
  uStack_54 = uStack_20._4_4_;
  uStack_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  FUN_1460780d2(&local_60,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460780d2 FUN_1460780d2 body=124 status=ok
// SIG undefined FUN_1460780d2(void)

void FUN_1460780d2(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146078160(param_1,&local_28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(local_28 + 0x1d0) = *param_2;
  *(undefined4 *)(local_28 + 0x1d4) = uVar2;
  *(undefined4 *)(local_28 + 0x1d8) = uVar3;
  *(undefined4 *)(local_28 + 0x1dc) = uVar4;
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078160 FUN_146078160 body=144 status=ok
// SIG undefined FUN_146078160(void)

undefined8 * FUN_146078160(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460781f4 FUN_1460781f4 body=325 status=ok
// SIG undefined FUN_1460781f4(void)

void FUN_1460781f4(longlong param_1)

{
  void *_Dst;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_144a9374a(&local_128);
  local_128 = DAT_14c846330;
  local_120 = DAT_14c846338;
  local_118 = DAT_14c846350;
  local_110 = DAT_14c846358;
  local_108 = DAT_14c846330;
  local_100 = DAT_14c846338;
  local_f8 = DAT_14c846350;
  local_f0 = DAT_14c846358;
  local_e8 = 0;
  puStack_e0 = &DAT_3f8000003f800000;
  local_d8 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_48 = *(undefined8 *)(DAT_14ca94db8 + 0x10);
  local_38 = *(undefined8 *)(DAT_14ca94db8 + 0x10);
  local_30 = *(undefined8 *)(DAT_14ca94db8 + 0x18);
  local_20 = *(undefined8 *)(DAT_14ca94db8 + 0x18);
  _Dst = *(void **)(param_1 + 0x20);
  local_40 = local_48;
  local_28 = local_30;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x110,0x10);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  memcpy(_Dst,&local_128,0x110);
  FUN_14607833a(param_1);
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607833a FUN_14607833a body=224 status=ok
// SIG undefined FUN_14607833a(void)

void FUN_14607833a(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1415cee2e(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_14607839d;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14607839d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078426 FUN_146078426 body=288 status=ok
// SIG undefined FUN_146078426(void)

undefined8 * FUN_146078426(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14a4d8e90;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_145990b9a();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1458d4322();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078552 FUN_146078552 body=288 status=ok
// SIG undefined FUN_146078552(void)

undefined8 * FUN_146078552(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined3 uStack_78;
  undefined4 uStack_75;
  undefined4 uStack_71;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14591edf8();
  *param_1 = &PTR_FUN_14abb6c20;
  FUN_145be65b2(&local_98);
  local_58 = 0;
  uStack_50 = 0x4059000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xc059000000000000;
  uStack_30 = 0;
  iVar3 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
    FUN_145be6626(param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x70;
  lVar1 = lVar4 + lVar5;
  puVar2 = (undefined4 *)(lVar4 + 0x1b + lVar5);
  *puVar2 = CONCAT31((undefined3)uStack_7c,uStack_80._3_1_);
  puVar2[1] = CONCAT31(uStack_78,uStack_7c._3_1_);
  puVar2[2] = uStack_75;
  puVar2[3] = uStack_71;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5);
  *puVar2 = local_88;
  puVar2[1] = uStack_84;
  puVar2[2] = uStack_80;
  puVar2[3] = uStack_7c;
  puVar2 = (undefined4 *)(lVar4 + lVar5);
  *puVar2 = local_98;
  puVar2[1] = uStack_94;
  puVar2[2] = uStack_90;
  puVar2[3] = uStack_8c;
  *(longlong *)(lVar4 + 0x30 + lVar5) = local_68;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(lVar1 + 0x38) = local_60;
  *(undefined4 *)(lVar1 + 0x40) = (undefined4)local_58;
  *(undefined4 *)(lVar1 + 0x44) = local_58._4_4_;
  *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_50;
  *(undefined4 *)(lVar1 + 0x4c) = uStack_50._4_4_;
  *(undefined4 *)(lVar1 + 0x50) = (undefined4)local_48;
  *(undefined4 *)(lVar1 + 0x54) = local_48._4_4_;
  *(undefined4 *)(lVar1 + 0x58) = (undefined4)uStack_40;
  *(undefined4 *)(lVar1 + 0x5c) = uStack_40._4_4_;
  *(undefined4 *)(lVar1 + 0x60) = (undefined4)local_38;
  *(undefined4 *)(lVar1 + 100) = local_38._4_4_;
  *(undefined4 *)(lVar1 + 0x68) = (undefined4)uStack_30;
  *(undefined4 *)(lVar1 + 0x6c) = uStack_30._4_4_;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078674 FUN_146078674 body=59 status=ok
// SIG undefined FUN_146078674(void)

void FUN_146078674(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1460786b0(local_10,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460786b0 FUN_1460786b0 body=239 status=ok
// SIG undefined FUN_1460786b0(void)

undefined8 FUN_1460786b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  *local_30 = &PTR_FUN_14ae8c2a0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_14021cc28;
  FUN_1448b6402(&DAT_14c867408,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460787ac FUN_1460787ac body=588 status=ok
// SIG undefined FUN_1460787ac(void)

undefined8 * FUN_1460787ac(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b388620;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x1001;
  param_1[0x17] = "manufacturer";
  lVar5 = FUN_140428d10();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14607888a;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14607888a:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Inventory.Manufacturers");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460789fa FUN_1460789fa body=9 status=ok
// SIG undefined FUN_1460789fa(void)

void FUN_1460789fa(longlong param_1)

{
  FUN_146078a04(param_1 + 0x10);
  return;
}



// FUNCTION 146078a04 FUN_146078a04 body=66 status=ok
// SIG undefined FUN_146078a04(void)

void FUN_146078a04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b348f70;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1);
  return;
}



// FUNCTION 146078a52 FUN_146078a52 body=288 status=ok
// SIG undefined FUN_146078a52(void)

undefined8 * FUN_146078a52(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14b4ca690;
  lVar1 = FUN_1459f173a();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x74] = lVar1;
    if (lVar1 != 0) goto LAB_146078aa3;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x74] = lVar1;
LAB_146078aa3:
    lVar2 = FUN_1411bcc5e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = param_1[0x74];
      goto LAB_146078ad3;
    }
  }
  lVar1 = 0;
LAB_146078ad3:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if (param_1 + 0x72 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x72] != 0) {
      FUN_1400020a8();
    }
    param_1[0x72] = local_30;
    *(undefined4 *)(param_1 + 0x73) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x39c) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078b7e FUN_146078b7e body=288 status=ok
// SIG undefined FUN_146078b7e(void)

undefined8 * FUN_146078b7e(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14b4cbcb0;
  lVar1 = FUN_145a86872();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x74] = lVar1;
    if (lVar1 != 0) goto LAB_146078bcf;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x74] = lVar1;
LAB_146078bcf:
    lVar2 = FUN_1411bcc5e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = param_1[0x74];
      goto LAB_146078bff;
    }
  }
  lVar1 = 0;
LAB_146078bff:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if (param_1 + 0x72 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x72] != 0) {
      FUN_1400020a8();
    }
    param_1[0x72] = local_30;
    *(undefined4 *)(param_1 + 0x73) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x39c) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078ca0 FUN_146078ca0 body=109 status=ok
// SIG undefined FUN_146078ca0(void)

void FUN_146078ca0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1457e1a6a();
  if (lVar1 != 0) {
    FUN_146078d0e(lVar1 + 0x1e0,local_20,param_1);
    FUN_146078e04(lVar1 + 0x578,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078d0e FUN_146078d0e body=244 status=ok
// SIG undefined FUN_146078d0e(void)

undefined8 FUN_146078d0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b990b10;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1458eab98;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078e04 FUN_146078e04 body=244 status=ok
// SIG undefined FUN_146078e04(void)

undefined8 FUN_146078e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f78e0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b990b80;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_145f9dcda;
  FUN_145d158ee(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146078efa FUN_146078efa body=44 status=ok
// SIG undefined FUN_146078efa(void)

int FUN_146078efa(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,1);
  }
  return iVar2 + -1;
}



// FUNCTION 146078f26 FUN_146078f26 body=89 status=ok
// SIG undefined FUN_146078f26(void)

undefined8 * FUN_146078f26(undefined8 *param_1,int param_2)

{
  param_1[-1] = &PTR_FUN_14bea6570;
  *param_1 = &PTR_FUN_14bea66b8;
  (**(code **)(*(longlong *)param_1[4] + 8))((longlong *)param_1[4],param_1 + 2);
  *param_1 = &PTR_FUN_149e002e8;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1 + -1,0x30);
  }
  return param_1 + -1;
}



// FUNCTION 146078f92 FUN_146078f92 body=175 status=ok
// SIG undefined FUN_146078f92(void)

bool FUN_146078f92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607904a FUN_14607904a body=293 status=ok
// SIG undefined FUN_14607904a(void)

undefined8 * FUN_14607904a(undefined8 *param_1)

{
  FUN_14584580a();
  *param_1 = &PTR_FUN_14ba2b630;
  param_1[6] = &PTR_FUN_14ba2b940;
  param_1[7] = &PTR_FUN_14ba2b950;
  param_1[8] = &PTR_FUN_14ba2b980;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_141300fc0(param_1 + 0x2a);
  FUN_141300fc0(param_1 + 0x4e);
  *(undefined4 *)(param_1 + 0x72) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x394) = 0;
  *(undefined1 *)((longlong)param_1 + 0x396) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x41000000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  return param_1;
}



// FUNCTION 146079170 FUN_146079170 body=150 status=ok
// SIG undefined FUN_146079170(void)

void FUN_146079170(longlong param_1)

{
  void *_Dst;
  undefined1 auStack_128 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140ee1f3a(local_108);
  FUN_140ee1f64(DAT_14c760db4,local_108,0);
  _Dst = *(void **)(param_1 + 0x20);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0xf0,0x10);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  memcpy(_Dst,local_108,0xf0);
  FUN_146079208(param_1);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146079208 FUN_146079208 body=208 status=ok
// SIG undefined FUN_146079208(void)

void FUN_146079208(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1415cf666(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_20 != 0) {
        LOCK();
        puVar1 = (uint *)(local_20 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460792da FUN_1460792da body=210 status=ok
// SIG undefined FUN_1460792da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460792da(void)

{
  if ((DAT_14cc1f26f & 2) == 0) {
    DAT_14cc1f26f = DAT_14cc1f26f | 2;
    _DAT_14cc1f210 = L"FNiagaraDataInterfaceParametersCS_Houdini";
    _DAT_14cc1f228 = FUN_146826540;
    _DAT_14cc1f230 = FUN_146825d77;
    _DAT_14cc1f238 = FUN_146825fd6;
    _DAT_14cc1f240 = FUN_1407e02ea;
    _DAT_14cc1f248 = FUN_146826273;
    _DAT_14cc1f220 = FUN_1495ddf38;
    _DAT_14cc1f260 = 0xffffffff00000010;
    _DAT_14cc1f268 = 8;
    DAT_14cc1f26c = 0;
    _DAT_14cc1f250 = &LAB_1495ddf5e;
    FUN_146079428();
    FUN_1460793ac();
    FUN_1407e00cc(&DAT_14cc1f208);
    return;
  }
  return;
}



// FUNCTION 1460793ac FUN_1460793ac body=123 status=ok
// SIG undefined FUN_1460793ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460793ac(void)

{
  _DAT_14cc1f4f0 = L"BASE";
  DAT_14cc1f51a = 4;
  _DAT_14cc1f4f8 = FUN_145d493dc();
  _DAT_14cc1f500 = DAT_14cc1f218;
  _DAT_14cc1f508 = &LAB_14682652b;
  DAT_14cc1f218 = &DAT_14cc1f4f0;
  DAT_14cc1f26d = DAT_14cc1f26d + '\x01';
  _DAT_14cc1f510 = 0x100000000;
  if (*(char *)(_DAT_14cc1f4f8 + 100) != '\0') {
    DAT_14cc1f26e = DAT_14cc1f26e + '\x01';
  }
  return;
}



// FUNCTION 146079428 FUN_146079428 body=270 status=ok
// SIG undefined FUN_146079428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146079428(void)

{
  _DAT_14cc1f4c0 = L"FunctionIndexToAttribute";
  DAT_14cc1f4ea = FUN_140850cc5();
  if ((DAT_14cb3c0df & 2) == 0) {
    DAT_14cb3c0df = DAT_14cb3c0df | 3;
    _DAT_14cb3c080 = L"(TArray<T, AllocatorType>)";
    _DAT_14cb3c098 = &LAB_14816c644;
    _DAT_14cb3c0a0 = FUN_14816c652;
    _DAT_14cb3c0a8 = &LAB_14816c672;
    _DAT_14cb3c0b0 = &LAB_14816c680;
    _DAT_14cb3c0b8 = &LAB_14816c68e;
    _DAT_14cb3c090 = FUN_14816c69a;
    _DAT_14cb3c0d0 = 0x1000000010;
    _DAT_14cb3c0d8 = 8;
    DAT_14cb3c0dc = 0;
  }
  _DAT_14cc1f4c8 = &DAT_14cb3c078;
  _DAT_14cc1f4d8 = &LAB_14682652b;
  _DAT_14cc1f4e0 = 0x100000000;
  _DAT_14cc1f4e8 = 0;
  _DAT_14cc1f4d0 = DAT_14cc1f218;
  DAT_14cc1f218 = &DAT_14cc1f4c0;
  return;
}



// FUNCTION 146079536 FUN_146079536 body=38 status=ok
// SIG undefined FUN_146079536(void)

undefined8 FUN_146079536(undefined8 param_1,int param_2)

{
  FUN_14607955c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14607955c FUN_14607955c body=70 status=ok
// SIG undefined FUN_14607955c(void)

void FUN_14607955c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2e8320;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1460795a2(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1460795a2 FUN_1460795a2 body=43 status=ok
// SIG undefined FUN_1460795a2(void)

void FUN_1460795a2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1460795d8 FUN_1460795d8 body=290 status=ok
// SIG undefined FUN_1460795d8(void)

undefined8 * FUN_1460795d8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a3a6400;
  param_1[0x79] = &PTR_FUN_14a3a6a68;
  param_1[0x7a] = 0;
  FUN_1446f470e(&local_28,L"ProceduralFoliageComponent",1);
  local_48 = FUN_14598edce();
  local_38 = 0;
  local_40 = 1;
  lVar3 = FUN_140486aac(param_2,param_1,local_28,local_48);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar2 = DAT_14c950c29;
  param_1[0x7a] = lVar3;
  if ((param_1 != (undefined8 *)0x0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(undefined8 **)(lVar3 + 0x120) = param_1;
  plVar1 = (longlong *)param_1[0x75];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x730))(plVar1,0);
    (**(code **)(*plVar1 + 0x940))(plVar1,0);
    FUN_14127091c(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460796fc FUN_1460796fc body=205 status=ok
// SIG undefined FUN_1460796fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460796fc(void)

{
  if ((DAT_14caefba7 & 2) == 0) {
    DAT_14caefba7 = DAT_14caefba7 | 2;
    _DAT_14caefb48 = L"FMaterialTextureCollectionParameterInfo";
    _DAT_14caefb60 = FUN_146826540;
    _DAT_14caefb68 = FUN_146825d77;
    _DAT_14caefb70 = FUN_146825fd6;
    _DAT_14caefb78 = FUN_1407e02ea;
    _DAT_14caefb80 = FUN_146826273;
    _DAT_14caefb58 = &LAB_147bc00be;
    _DAT_14caefb98 = 0xffffffff00000018;
    _DAT_14caefba0 = 4;
    DAT_14caefba4 = 0;
    _DAT_14caefb88 = &LAB_147bc00d8;
    FUN_1460797ca();
    FUN_1407e00cc(&DAT_14caefb40);
    return;
  }
  return;
}



// FUNCTION 1460797ca FUN_1460797ca body=128 status=ok
// SIG undefined FUN_1460797ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460797ca(void)

{
  FUN_14607984a();
  _DAT_14caf1088 = L"ParameterInfo";
  DAT_14caf10b2 = FUN_140850cc5();
  FUN_145eebb9a();
  _DAT_14caf1090 = &DAT_14caef6e0;
  _DAT_14caf10a0 = &LAB_14682652b;
  _DAT_14caf10a8 = 0x100000000;
  _DAT_14caf10b0 = 0;
  _DAT_14caf1098 = DAT_14caefb50;
  DAT_14caefb50 = &DAT_14caf1088;
  return;
}



// FUNCTION 14607984a FUN_14607984a body=271 status=ok
// SIG undefined FUN_14607984a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14607984a(void)

{
  _DAT_14caf10b8 = L"TextureCollectionIndex";
  DAT_14caf10e2 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf10c0 = &DAT_14c951bf8;
  _DAT_14caf10d0 = &LAB_14682652b;
  _DAT_14caf10d8 = &DAT_100000014;
  _DAT_14caf10e0 = 0;
  _DAT_14caf10c8 = DAT_14caefb50;
  DAT_14caefb50 = &DAT_14caf10b8;
  return;
}



// FUNCTION 146079964 FUN_146079964 body=290 status=ok
// SIG undefined FUN_146079964(void)

undefined8 * FUN_146079964(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14add6bd0;
  param_1[7] = &PTR_LAB_14add7010;
  *(undefined1 *)((longlong)param_1 + 0x4d) = 3;
  param_1[10] = 0;
  uVar2 = FUN_144830b78(param_1 + 0xb,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14addc5a0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146079a88 FUN_146079a88 body=62 status=ok
// SIG undefined FUN_146079a88(void)

void FUN_146079a88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146079ac6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146079ac6 FUN_146079ac6 body=89 status=ok
// SIG undefined FUN_146079ac6(void)

ulonglong FUN_146079ac6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 146079b2a FUN_146079b2a body=592 status=ok
// SIG undefined FUN_146079b2a(void)

undefined8 * FUN_146079b2a(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar5);
  *param_1 = &PTR_FUN_14b135a60;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0e;
  param_1[0x17] = "gbx_discovery_region_map_def";
  lVar6 = FUN_145733170();
  if (lVar6 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146079c0c;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar6);
  }
LAB_146079c0c:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Discovery.Region Map Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146079d86 FUN_146079d86 body=592 status=ok
// SIG undefined FUN_146079d86(void)

undefined8 * FUN_146079d86(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar5);
  *param_1 = &PTR_FUN_14b36f9e0;
  *(undefined4 *)(param_1 + 0x16) = 0x4fc71eb6;
  param_1[0x17] = "effect_relevance";
  lVar6 = FUN_140f7f092();
  if (lVar6 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar6);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_146079e68;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar6);
  }
LAB_146079e68:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_58,"Effects.Relevance");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146079fde FUN_146079fde body=158 status=ok
// SIG undefined FUN_146079fde(void)

bool FUN_146079fde(longlong param_1,undefined8 param_2)

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



// FUNCTION 14607a07e FUN_14607a07e body=293 status=ok
// SIG undefined FUN_14607a07e(void)

void FUN_14607a07e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  int local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_14607a0ce;
  }
  lVar4 = 0;
LAB_14607a0ce:
  cVar3 = FUN_14011bf50(lVar4);
  if (cVar3 != '\0') {
    FUN_1403adc5e(&local_50,lVar4);
    lVar4 = *(longlong *)(CONCAT44(uStack_4c,local_50) + 0x60);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
    *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
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
    FUN_1403fa066(param_2,&local_50,0);
    if ((local_50 != *(int *)(lVar4 + 0x28)) || (*(int *)(lVar4 + 0x50) == 0)) {
      FUN_1404e49fa(lVar4 + 0x28,&local_50);
      *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xb0));
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14607a1a4 FUN_14607a1a4 body=248 status=ok
// SIG undefined FUN_14607a1a4(void)

undefined4 FUN_14607a1a4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_188 [32];
  void *local_168;
  ulonglong uStack_160;
  undefined1 local_150 [256];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar1 = FUN_14607a29e();
  local_168 = (void *)0x0;
  uStack_160 = (ulonglong)(iVar1 + 1U);
  iVar4 = 0;
  FUN_144761492(&local_168);
  memset(local_168,0,(longlong)(int)(iVar1 + 1U));
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  uVar2 = FUN_1415cf884(puVar3,iVar4,local_168,param_3);
  if ((char)uVar2 != '\0') {
    FUN_144a81018(local_150,local_168);
    FUN_14020fad6(param_2,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14607a29e FUN_14607a29e body=84 status=ok
// SIG undefined FUN_14607a29e(void)

int FUN_14607a29e(undefined8 *param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  if (uVar3 < 2) {
    return 0;
  }
  uVar2 = (ulonglong)(uVar3 - 1);
  do {
    bVar5 = uVar2 == 0;
    uVar2 = uVar2 - 1;
    if (bVar5) {
      uVar3 = 0;
      break;
    }
    uVar3 = uVar3 - 1;
  } while (puVar1[uVar2] == 0x3d);
  iVar4 = (uVar3 >> 2) * 3 + 2;
  if ((uVar3 & 3) != 3) {
    iVar4 = (uVar3 >> 2) * 3;
  }
  return (uint)((uVar3 & 3) == 2) + iVar4;
}



// FUNCTION 14607a2f2 FUN_14607a2f2 body=63 status=ok
// SIG undefined FUN_14607a2f2(void)

void FUN_14607a2f2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x498);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x490);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_14607a332();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14607a332 FUN_14607a332 body=208 status=ok
// SIG undefined FUN_14607a332(void)

void FUN_14607a332(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448c1924(param_1,&local_38);
  if (local_38 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a67cdc(local_38,2,&local_48);
    lVar3 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        (**(code **)(*param_1 + 0xa68))(param_1,*(undefined8 *)(lVar3 + lVar5));
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14607a404 FUN_14607a404 body=199 status=ok
// SIG undefined FUN_14607a404(void)

void FUN_14607a404(longlong param_1)

{
  DWORD DVar1;
  undefined1 auStack_58 [40];
  PSRWLOCK local_30;
  char local_28;
  char local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DVar1 = GetCurrentThreadId();
  FUN_1405043e4(&local_30,*(undefined8 *)(param_1 + 0x10));
  if (local_27 == '\x01') {
    if (*(DWORD *)(*(longlong *)(param_1 + 0x10) + 0xa4) != DVar1) {
      *(DWORD *)(*(longlong *)(param_1 + 0x10) + 0xa4) = DVar1;
      FUN_14050447c(*(undefined8 *)(param_1 + 0x10));
      if (local_27 == '\x01') {
        *(undefined4 *)&local_30[0x14].Ptr = 0xffffffff;
      }
      if (local_28 == '\x01') {
        ReleaseSRWLockExclusive(local_30);
      }
      FUN_14607a4cc(*(undefined8 *)(param_1 + 0x10));
      goto LAB_14607a4ad;
    }
    *(undefined4 *)&local_30[0x14].Ptr = 0xffffffff;
  }
  if (local_28 == '\x01') {
    ReleaseSRWLockExclusive(local_30);
  }
LAB_14607a4ad:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14607a4cc FUN_14607a4cc body=103 status=ok
// SIG undefined FUN_14607a4cc(void)

undefined8 FUN_14607a4cc(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  bVar2 = *(byte *)(param_1 + 0xac);
  *(byte *)(param_1 + 0xac) = 0;
  UNLOCK();
  if ((bVar2 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x9c);
    if ((uVar4 & 1) != 0) {
      puVar1 = (uint *)(param_1 + 0x9c);
      LOCK();
      uVar3 = *puVar1;
      if (uVar4 == uVar3) {
        *puVar1 = uVar4 + 1;
      }
      UNLOCK();
      if (uVar4 == uVar3) {
        FUN_1447458da(puVar1,0xffffffff);
      }
    }
    FUN_140f14a8a(param_1 + 0x80);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  return 1;
}



// FUNCTION 14607a53e FUN_14607a53e body=292 status=ok
// SIG undefined FUN_14607a53e(void)

undefined8 * FUN_14607a53e(undefined8 *param_1)

{
  FUN_14587747c();
  *param_1 = &PTR_FUN_14a6ed9b0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf33a0) {
    FUN_144b3d300(&DAT_14caf33a0);
    if (DAT_14caf33a0 == -1) {
      FUN_1446f470e(&DAT_14caf3398,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf33a0);
    }
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_41200000;
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x54) = DAT_14caf3398;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(uint *)(param_1 + 0x1f) = (*(uint *)(param_1 + 0x1f) & 0xfffffff0) + 1;
  return param_1;
}



// FUNCTION 14607a66a FUN_14607a66a body=294 status=ok
// SIG undefined FUN_14607a66a(void)

undefined8 * FUN_14607a66a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b521dd0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"GbxAnimTextureComponent",1);
  uVar1 = FUN_14595d14a();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  param_1[0x72] = plVar2;
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x72] + 0x1fb) = 0;
  FUN_14127091c(param_1[0x72],0);
  *(byte *)(param_1[0x72] + 0x675) = *(byte *)(param_1[0x72] + 0x675) | 0x40;
  lVar3 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


