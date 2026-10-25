// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d4590e FUN_145d4590e body=141 status=ok
// SIG undefined FUN_145d4590e(void)

undefined8 * FUN_145d4590e(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f06();
  *param_1 = &PTR_FUN_14acff680;
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  uVar2 = FUN_1459e097e();
  *(undefined4 *)(param_1 + 7) = uVar2;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    FUN_14122166c(&local_20,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4599c FUN_145d4599c body=40 status=ok
// SIG undefined FUN_145d4599c(void)

undefined8 FUN_145d4599c(undefined8 param_1,int param_2)

{
  FUN_145d459c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d459c4 FUN_145d459c4 body=113 status=ok
// SIG undefined FUN_145d459c4(void)

void FUN_145d459c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad942a0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad92a20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d45a40 FUN_145d45a40 body=142 status=ok
// SIG undefined FUN_145d45a40(void)

undefined8 * FUN_145d45a40(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14afb1d80;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 145d45ace FUN_145d45ace body=40 status=ok
// SIG undefined FUN_145d45ace(void)

undefined8 FUN_145d45ace(undefined8 param_1,int param_2)

{
  FUN_145d45af6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d45af6 FUN_145d45af6 body=113 status=ok
// SIG undefined FUN_145d45af6(void)

void FUN_145d45af6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b52d5b0;
  param_1[5] = &PTR_FUN_14b52da50;
  param_1[0x2d] = &PTR_FUN_14b52da90;
  plVar3 = (longlong *)param_1[0x6e];
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
  FUN_14122e0b2(param_1 + 0x5b);
  FUN_140cdcea6(param_1);
  return;
}



// FUNCTION 145d45b67 FUN_145d45b67 body=46 status=ok
// SIG undefined FUN_145d45b67(void)

void FUN_145d45b67(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d45b96(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b56e220;
  puVar1[5] = &PTR_FUN_14b56e540;
  return;
}



// FUNCTION 145d45b96 FUN_145d45b96 body=106 status=ok
// SIG undefined FUN_145d45b96(void)

undefined8 * FUN_145d45b96(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14117d212();
  *param_1 = &PTR_FUN_14ae4bfb0;
  param_1[5] = &PTR_FUN_14ae4c2d0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_145a1c3aa(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d45c01 FUN_145d45c01 body=46 status=ok
// SIG undefined FUN_145d45c01(void)

void FUN_145d45c01(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d45c30(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b595220;
  puVar1[5] = &PTR_FUN_14b595540;
  return;
}



// FUNCTION 145d45c30 FUN_145d45c30 body=107 status=ok
// SIG undefined FUN_145d45c30(void)

undefined8 * FUN_145d45c30(undefined8 *param_1)

{
  FUN_141219ba0();
  *param_1 = &PTR_FUN_14a5492c0;
  param_1[5] = &PTR_FUN_14a5495e0;
  *(undefined1 *)((longlong)param_1 + 0x196) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  *(undefined4 *)(param_1 + 0x32) = 0x43fa0000;
  *(undefined2 *)((longlong)param_1 + 0x194) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x196) = 0;
  return param_1;
}



// FUNCTION 145d45c9c FUN_145d45c9c body=149 status=ok
// SIG undefined FUN_145d45c9c(void)

void FUN_145d45c9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aab56();
  FUN_1446f470e(&local_38,L"PrimedEnemyList",1);
  uVar1 = FUN_1458ad644();
  FUN_1458ad644();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 2;
  local_30 = 0;
  local_28 = FUN_145d45d32();
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d45d32 FUN_145d45d32 body=3 status=ok
// SIG undefined FUN_145d45d32(void)

undefined8 FUN_145d45d32(void)

{
  return 0;
}



// FUNCTION 145d45d40 FUN_145d45d40 body=142 status=ok
// SIG undefined FUN_145d45d40(void)

undefined8 * FUN_145d45d40(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14ba88950;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  param_1[0x13] = &PTR_FUN_14ba88c90;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_144a78564(param_1 + 0x17);
  param_1[0xb] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 145d45dd6 FUN_145d45dd6 body=213 status=ok
// SIG undefined FUN_145d45dd6(void)

undefined8 * FUN_145d45dd6(undefined8 *param_1)

{
  FUN_14589b34c();
  *param_1 = &PTR_FUN_14bd75b20;
  param_1[5] = &PTR_FUN_14bd75ec0;
  param_1[0x13] = &PTR_FUN_14bd75ee0;
  param_1[0x17] = &PTR_FUN_14bd75f10;
  param_1[0x18] = &PTR_FUN_14bd75f20;
  param_1[0x35] = &PTR_FUN_14bd75f38;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x100000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x202) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x4040000000000004;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22e) = 0;
  FUN_145d45eac(param_1 + 0x46);
  return param_1;
}



// FUNCTION 145d45eac FUN_145d45eac body=85 status=ok
// SIG undefined FUN_145d45eac(void)

void FUN_145d45eac(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x4040000000000004;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  return;
}



// FUNCTION 145d45f02 FUN_145d45f02 body=40 status=ok
// SIG undefined FUN_145d45f02(void)

undefined8 FUN_145d45f02(undefined8 param_1,int param_2)

{
  FUN_145d45f2a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d45f2a FUN_145d45f2a body=113 status=ok
// SIG undefined FUN_145d45f2a(void)

void FUN_145d45f2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdba430;
  param_1[5] = &PTR_FUN_14bdba7d0;
  param_1[0x13] = &PTR_FUN_14bdba7f0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145d45f9c FUN_145d45f9c body=40 status=ok
// SIG undefined FUN_145d45f9c(void)

undefined8 FUN_145d45f9c(undefined8 param_1,int param_2)

{
  FUN_14153f82e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d45fc4 FUN_145d45fc4 body=292 status=ok
// SIG undefined FUN_145d45fc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d45fc4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df000) {
    FUN_144b3d300(&DAT_14c9df000);
    if (DAT_14c9df000 == -1) {
      FUN_145d46232();
      FUN_145d460e8();
      FUN_140db5666(&DAT_14c9def58,0,&DAT_14c9deef0,L"FRenderLightingCacheWithPreshadingRGS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesHardwareRayTracing.usf"
                    ,L"RenderLightingCacheWithPreshadingRGS",6,2,FUN_14719bcb0,FUN_14719bc6c,
                    &LAB_145a3310e,&LAB_14719bc68,&LAB_14719bc62,&LAB_14712ac08,0xe0,&DAT_14c9e0b58)
      ;
      _DAT_14c9def58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9a35e);
      _Init_thread_footer(&DAT_14c9df000);
    }
  }
  return &DAT_14c9def58;
}



// FUNCTION 145d460e8 FUN_145d460e8 body=205 status=ok
// SIG undefined FUN_145d460e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d460e8(void)

{
  if ((DAT_14c9def57 & 2) == 0) {
    DAT_14c9def57 = DAT_14c9def57 | 2;
    _DAT_14c9deef8 = L"FRenderLightingCacheWithPreshadingRGS";
    _DAT_14c9def10 = FUN_146826540;
    _DAT_14c9def18 = FUN_146825d77;
    _DAT_14c9def20 = FUN_146825fd6;
    _DAT_14c9def28 = FUN_1407e02ea;
    _DAT_14c9def30 = FUN_146826273;
    _DAT_14c9def08 = FUN_14719bc34;
    _DAT_14c9def48 = 0xffffffff000000e0;
    _DAT_14c9def50 = 8;
    DAT_14c9def54 = 0;
    _DAT_14c9def38 = &LAB_14719bc5e;
    FUN_145d461b6();
    FUN_1407e00cc(&DAT_14c9deef0);
    return;
  }
  return;
}



// FUNCTION 145d461b6 FUN_145d461b6 body=123 status=ok
// SIG undefined FUN_145d461b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d461b6(void)

{
  _DAT_14c9e1aa8 = L"BASE";
  DAT_14c9e1ad2 = 4;
  _DAT_14c9e1ab0 = FUN_140b35ae4();
  _DAT_14c9e1ab8 = DAT_14c9def00;
  _DAT_14c9e1ac0 = &LAB_14682652b;
  DAT_14c9def00 = &DAT_14c9e1aa8;
  DAT_14c9def55 = DAT_14c9def55 + '\x01';
  _DAT_14c9e1ac8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1ab0 + 100) != '\0') {
    DAT_14c9def56 = DAT_14c9def56 + '\x01';
  }
  return;
}



// FUNCTION 145d46232 FUN_145d46232 body=261 status=ok
// SIG undefined FUN_145d46232(void)

void FUN_145d46232(void)

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
              0x110) < DAT_14c9e0bd8) {
    FUN_144b3d300(&DAT_14c9e0bd8);
    if (DAT_14c9e0bd8 == -1) {
      FUN_14153f8a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3f0;
      local_58 = 0x149;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0b58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e8d);
      _Init_thread_footer(&DAT_14c9e0bd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d46338 FUN_145d46338 body=138 status=ok
// SIG undefined FUN_145d46338(void)

code * FUN_145d46338(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bApplyShadowTransmittance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a8c46;
}



// FUNCTION 145d463c2 FUN_145d463c2 body=144 status=ok
// SIG undefined FUN_145d463c2(void)

code * FUN_145d463c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14127a7f2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000014d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cfa24;
}



// FUNCTION 145d46452 FUN_145d46452 body=146 status=ok
// SIG undefined FUN_145d46452(void)

code * FUN_145d46452(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d464e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightingCache";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLightingCacheParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9e0938;
  return FUN_1471a842c;
}



// FUNCTION 145d464e4 FUN_145d464e4 body=258 status=ok
// SIG undefined FUN_145d464e4(void)

void FUN_145d464e4(void)

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
              0x110) < DAT_14c9e09b8) {
    FUN_144b3d300(&DAT_14c9e09b8);
    if (DAT_14c9e09b8 == -1) {
      FUN_145d465e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLightingCacheParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xd7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e51);
      _Init_thread_footer(&DAT_14c9e09b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d465e8 FUN_145d465e8 body=226 status=ok
// SIG undefined FUN_145d465e8(void)

longlong * FUN_145d465e8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cf31c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d466d0 FUN_145d466d0 body=132 status=ok
// SIG undefined FUN_145d466d0(void)

undefined1 * FUN_145d466d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightingCacheResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d466cc;
}



// FUNCTION 145d46754 FUN_145d46754 body=138 status=ok
// SIG undefined FUN_145d46754(void)

code * FUN_145d46754(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightingCacheVoxelBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d466d0;
}



// FUNCTION 145d467de FUN_145d467de body=220 status=ok
// SIG undefined FUN_145d467de(void)

undefined8 FUN_145d467de(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_3 + 0x30);
  plVar3 = *(longlong **)(param_3 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_30 = plVar3;
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
  local_48 = 0;
  FUN_14153f984(param_1,param_2,&local_38,param_4);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d468bc FUN_145d468bc body=125 status=ok
// SIG undefined FUN_145d468bc(void)

void FUN_145d468bc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        lVar2 = FUN_14030d4a0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_145d4693a(lVar1,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145d4693a FUN_145d4693a body=142 status=ok
// SIG undefined FUN_145d4693a(void)

void FUN_145d4693a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = DAT_14cbcf46c;
  local_50 = DAT_14cbcf474;
  FUN_1448075d0(local_48);
  uVar2 = FUN_144a06846(param_2,local_48);
  uVar1 = FUN_1410451c0(uVar2,*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d469ca FUN_145d469ca body=144 status=ok
// SIG undefined FUN_145d469ca(void)

code * FUN_145d469ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d46a5a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SubstratePublic";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstratePublicParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1700000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1456ea9b6;
}



// FUNCTION 145d46a5a FUN_145d46a5a body=268 status=ok
// SIG undefined FUN_145d46a5a(void)

undefined * FUN_145d46a5a(void)

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
              0x110) < DAT_14c9c0688) {
    FUN_144b3d300(&DAT_14c9c0688);
    if (DAT_14c9c0688 == -1) {
      FUN_145d46b68(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstratePublicParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x4b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90979);
      _Init_thread_footer(&DAT_14c9c0688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d46b68 FUN_145d46b68 body=226 status=ok
// SIG undefined FUN_145d46b68(void)

longlong * FUN_145d46b68(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b9e90;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d46c50 FUN_145d46c50 body=138 status=ok
// SIG undefined FUN_145d46c50(void)

code * FUN_145d46c50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<SUBSTRATE_TOP_LAYER_TYPE>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d46cda;
}



// FUNCTION 145d46cda FUN_145d46cda body=138 status=ok
// SIG undefined FUN_145d46cda(void)

code * FUN_145d46cda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstSliceStoringSubstrateSSSData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b9f18;
}



// FUNCTION 145d46d64 FUN_145d46d64 body=144 status=ok
// SIG undefined FUN_145d46d64(void)

code * FUN_145d46d64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d46df4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam28";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInitializeParticleModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa00000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ddc6e6;
}



// FUNCTION 145d46df4 FUN_145d46df4 body=268 status=ok
// SIG undefined FUN_145d46df4(void)

undefined * FUN_145d46df4(void)

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
              0x110) < DAT_14cb34fe8) {
    FUN_144b3d300(&DAT_14cb34fe8);
    if (DAT_14cb34fe8 == -1) {
      FUN_145d46f02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInitializeParticleModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0xb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34f68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb954);
      _Init_thread_footer(&DAT_14cb34fe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34f68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d46f02 FUN_145d46f02 body=226 status=ok
// SIG undefined FUN_145d46f02(void)

longlong * FUN_145d46f02(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464631bc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d46fea FUN_145d46fea body=138 status=ok
// SIG undefined FUN_145d46fea(void)

code * FUN_145d46fea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitializeParticle_SpriteRotationScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480579a8;
}



// FUNCTION 145d47074 FUN_145d47074 body=138 status=ok
// SIG undefined FUN_145d47074(void)

code * FUN_145d47074(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitializeParticle_InitialPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148057bd0;
}



// FUNCTION 145d470fe FUN_145d470fe body=63 status=ok
// SIG undefined FUN_145d470fe(void)

undefined8 * FUN_145d470fe(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  uVar2 = FUN_14475a8dc();
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e6f1c0;
  return puVar1;
}



// FUNCTION 145d4713e FUN_145d4713e body=71 status=ok
// SIG undefined FUN_145d4713e(void)

undefined8 * FUN_145d4713e(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
  uVar2 = FUN_144a7add4();
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70830;
  puVar1[0xf] = 0;
  return puVar1;
}



// FUNCTION 145d47186 FUN_145d47186 body=89 status=ok
// SIG undefined FUN_145d47186(void)

void FUN_145d47186(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (1 < *(int *)(param_3 + 8))) {
    (**(code **)(**(longlong **)(param_2 + 0x398) + 0x688))(*(longlong **)(param_2 + 0x398),param_3)
    ;
    FUN_145d471e0(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 145d471e0 FUN_145d471e0 body=140 status=ok
// SIG undefined FUN_145d471e0(void)

void FUN_145d471e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_40 = param_2;
  FUN_144a787a6(local_38,param_3);
  local_28 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cadae48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4726e FUN_145d4726e body=103 status=ok
// SIG undefined FUN_145d4726e(void)

ulonglong FUN_145d4726e(longlong param_1)

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
LAB_145d472b8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145d472b8;
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



// FUNCTION 145d472dc FUN_145d472dc body=329 status=ok
// SIG undefined FUN_145d472dc(void)

void FUN_145d472dc(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar4 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18);
        if (*puVar4 == param_2) break;
        iVar6 = (int)puVar4[2];
        puVar4 = (ulonglong *)0x0;
      } while (iVar6 != -1);
      goto LAB_145d47358;
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_145d47358:
  if (puVar4 + 1 == (ulonglong *)0x0 || puVar4 == (ulonglong *)0x0) {
    return;
  }
  uVar2 = puVar4[1];
  if ((uVar2 != 0) && (*(longlong *)(uVar2 + 0x30) != 0)) {
    FUN_14480f766(param_2 + 0x2d0);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                             (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18) == param_2) {
          FUN_145d47426(plVar1,iVar6);
          return;
        }
        iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 145d47426 FUN_145d47426 body=85 status=ok
// SIG undefined FUN_145d47426(void)

void FUN_145d47426(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145d4747c();
  return;
}



// FUNCTION 145d4747c FUN_145d4747c body=52 status=ok
// SIG undefined FUN_145d4747c(void)

void FUN_145d4747c(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145d474b0(param_1,param_2);
  return;
}



// FUNCTION 145d474b0 FUN_145d474b0 body=116 status=ok
// SIG undefined FUN_145d474b0(void)

void FUN_145d474b0(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145d4752c FUN_145d4752c body=313 status=ok
// SIG undefined FUN_145d4752c(void)

undefined8 * FUN_145d4752c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b6c0810;
  param_1[5] = &PTR_FUN_14b6c0b10;
  param_1[6] = &PTR_FUN_14b6c0b40;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc1) = 0x10101;
  *(undefined4 *)(param_1 + 0x19) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x40000000;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 2;
  FUN_145d47666(param_1 + 0x21);
  puVar1 = (undefined8 *)param_1[0x21];
  *puVar1 = 0x3f80000000000004;
  puVar1[1] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x40000000;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x40000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 2;
  FUN_145d47666(param_1 + 0x28);
  puVar1 = (undefined8 *)param_1[0x28];
  *puVar1 = 4;
  puVar1[1] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x40000000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 145d47666 FUN_145d47666 body=139 status=ok
// SIG undefined FUN_145d47666(void)

void FUN_145d47666(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,4);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,4);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 145d476f2 FUN_145d476f2 body=205 status=ok
// SIG undefined FUN_145d476f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d476f2(void)

{
  if ((DAT_14c9e8507 & 2) == 0) {
    DAT_14c9e8507 = DAT_14c9e8507 | 2;
    _DAT_14c9e84a8 = L"FLightGridFeedbackStatusCS";
    _DAT_14c9e84c0 = FUN_146826540;
    _DAT_14c9e84c8 = FUN_146825d77;
    _DAT_14c9e84d0 = FUN_146825fd6;
    _DAT_14c9e84d8 = FUN_1407e02ea;
    _DAT_14c9e84e0 = FUN_146826273;
    _DAT_14c9e84b8 = FUN_1471d0f5e;
    _DAT_14c9e84f8 = 0xffffffff000000e0;
    _DAT_14c9e8500 = 8;
    DAT_14c9e8504 = 0;
    _DAT_14c9e84e8 = &LAB_1471d0f88;
    FUN_145d477c0();
    FUN_1407e00cc(&DAT_14c9e84a0);
    return;
  }
  return;
}



// FUNCTION 145d477c0 FUN_145d477c0 body=123 status=ok
// SIG undefined FUN_145d477c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d477c0(void)

{
  _DAT_14c9eb2e0 = L"BASE";
  DAT_14c9eb30a = 4;
  _DAT_14c9eb2e8 = FUN_140b35ae4();
  _DAT_14c9eb2f0 = DAT_14c9e84b0;
  _DAT_14c9eb2f8 = &LAB_14682652b;
  DAT_14c9e84b0 = &DAT_14c9eb2e0;
  DAT_14c9e8505 = DAT_14c9e8505 + '\x01';
  _DAT_14c9eb300 = 0x100000000;
  if (*(char *)(_DAT_14c9eb2e8 + 100) != '\0') {
    DAT_14c9e8506 = DAT_14c9e8506 + '\x01';
  }
  return;
}



// FUNCTION 145d4783c FUN_145d4783c body=226 status=ok
// SIG undefined FUN_145d4783c(void)

longlong * FUN_145d4783c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d568c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d47920 FUN_145d47920 body=136 status=ok
// SIG undefined FUN_145d47920(void)

code * FUN_145d47920(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledLightDataEntries";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000005f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6e82;
}



// FUNCTION 145d479a8 FUN_145d479a8 body=138 status=ok
// SIG undefined FUN_145d479a8(void)

code * FUN_145d479a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumAvailableLinks";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000005f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6df8;
}



// FUNCTION 145d47a32 FUN_145d47a32 body=144 status=ok
// SIG undefined FUN_145d47a32(void)

code * FUN_145d47a32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d47ac2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GPUMessageParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"GPUMessage::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000005f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d479a8;
}



// FUNCTION 145d47ac2 FUN_145d47ac2 body=265 status=ok
// SIG undefined FUN_145d47ac2(void)

undefined * FUN_145d47ac2(void)

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
              0x110) < DAT_14c9ebcb0) {
    FUN_144b3d300(&DAT_14c9ebcb0);
    if (DAT_14c9ebcb0 == -1) {
      FUN_145d47bcc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ebc30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4865);
      _Init_thread_footer(&DAT_14c9ebcb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ebc30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d47bcc FUN_145d47bcc body=226 status=ok
// SIG undefined FUN_145d47bcc(void)

longlong * FUN_145d47bcc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d5714;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d47cb4 FUN_145d47cb4 body=132 status=ok
// SIG undefined FUN_145d47cb4(void)

undefined1 * FUN_145d47cb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUMessageDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d47cb0;
}



// FUNCTION 145d47d44 FUN_145d47d44 body=296 status=ok
// SIG undefined FUN_145d47d44(void)

undefined8 * FUN_145d47d44(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144805d84();
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(uint *)(param_1 + 0x2a) = (*(uint *)(param_1 + 0x2a) & 0xfffffff8) + 1;
  param_1[0x2b] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0xc0;
  *param_1 = &PTR_FUN_14abc09e0;
  param_1[5] = &PTR_LAB_14abc0e70;
  param_1[6] = &PTR_LAB_14abc0eb0;
  param_1[0x22] = &PTR_LAB_14abc0f00;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3ff00000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3ff00000;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0;
  lVar1 = FUN_145c45f0e();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0x2c] = lVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x4059000000000000;
  param_1[0x2f] = 0x4059000000000000;
  param_1[0x30] = 0x4059000000000000;
  *(byte *)((longlong)param_1 + 0x189) = *(byte *)((longlong)param_1 + 0x189) | 1;
  *(undefined1 *)(param_1 + 0x31) = 3;
  return param_1;
}



// FUNCTION 145d47e6c FUN_145d47e6c body=276 status=ok
// SIG undefined FUN_145d47e6c(void)

void FUN_145d47e6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x380);
  SRWLock = (PSRWLOCK)(lVar3 + 0x6e0);
  AcquireSRWLockShared(SRWLock);
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
  if (*(char *)(lVar3 + 0x70) == '\0') {
    lVar3 = FUN_145d47f82();
    if (*(int *)(lVar3 + 0x148) == 0) {
      FUN_1402160b8(&local_38);
      if (60.0 < (double)(local_38 - *(longlong *)(param_1 + 0x1b8)) / 10000000.0) {
        FUN_1402160b8(&local_38);
        *(longlong *)(param_1 + 0x1b8) = local_38;
        uVar4 = FUN_1408bb964(param_1 + 0x44);
        FUN_141541152(lVar3,0,uVar4);
      }
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d47f82 FUN_145d47f82 body=108 status=ok
// SIG undefined FUN_145d47f82(void)

undefined8 * FUN_145d47f82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb96de0) {
    FUN_144b3d300(&DAT_14cb96de0);
    if (DAT_14cb96de0 == -1) {
      FUN_145d47fee(&DAT_14cb96c78);
      atexit((_func_5014 *)&LAB_143f02128);
      _Init_thread_footer(&DAT_14cb96de0);
    }
  }
  return &DAT_14cb96c78;
}



// FUNCTION 145d47fee FUN_145d47fee body=522 status=ok
// SIG undefined FUN_145d47fee(void)

undefined8 * FUN_145d47fee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x157) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15f) = 0;
  uVar4 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
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
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14b4db4e0;
  local_50[3] = param_1;
  local_50[4] = FUN_1403ac78e;
  local_58 = 0;
  FUN_1405f67fc(uVar4,&local_40,&local_50,L"FGbxPatchManager_Tick");
  if (param_1 + 0xf != &local_40) {
    param_1[0xf] = local_40;
    local_40 = 0;
    plVar2 = (longlong *)param_1[0x10];
    param_1[0x10] = local_38;
    local_38 = (longlong *)0x0;
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1449db362(&local_50);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d481fa FUN_145d481fa body=317 status=ok
// SIG undefined FUN_145d481fa(void)

void FUN_145d481fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141541220(local_18,local_20,local_21);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48338 FUN_145d48338 body=321 status=ok
// SIG undefined FUN_145d48338(void)

void FUN_145d48338(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d4847a(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4847a FUN_145d4847a body=176 status=ok
// SIG undefined FUN_145d4847a(void)

void FUN_145d4847a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,param_3);
  local_28 = 7;
  FUN_14125081c(param_1,param_2,local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4852c FUN_145d4852c body=292 status=ok
// SIG undefined FUN_145d4852c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d4852c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13358) {
    FUN_144b3d300(&DAT_14ca13358);
    if (DAT_14ca13358 == -1) {
      FUN_145d48650();
      FUN_145d48756();
      FUN_140db5666(&DAT_14ca132b0,0,&DAT_14ca13248,L"FEmitCubemapShadowVS",
                    L"/Engine/Private/Nanite/NaniteEmitShadow.usf",L"EmitCubemapShadowVS",0,2,
                    FUN_1472507cc,FUN_14725076c,FUN_1462eec30,&LAB_147250768,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17138);
      _DAT_14ca132b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e015c8);
      _Init_thread_footer(&DAT_14ca13358);
    }
  }
  return &DAT_14ca132b0;
}



// FUNCTION 145d48650 FUN_145d48650 body=261 status=ok
// SIG undefined FUN_145d48650(void)

void FUN_145d48650(void)

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
              0x110) < DAT_14ca171b8) {
    FUN_144b3d300(&DAT_14ca171b8);
    if (DAT_14ca171b8 == -1) {
      FUN_145d488a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEmitCubemapShadowParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x79;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17138,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27567);
      _Init_thread_footer(&DAT_14ca171b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48756 FUN_145d48756 body=205 status=ok
// SIG undefined FUN_145d48756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d48756(void)

{
  if ((DAT_14ca132af & 2) == 0) {
    DAT_14ca132af = DAT_14ca132af | 2;
    _DAT_14ca13250 = L"FEmitCubemapShadowVS";
    _DAT_14ca13268 = FUN_146826540;
    _DAT_14ca13270 = FUN_146825d77;
    _DAT_14ca13278 = FUN_146825fd6;
    _DAT_14ca13280 = FUN_1407e02ea;
    _DAT_14ca13288 = FUN_146826273;
    _DAT_14ca13260 = FUN_147250738;
    _DAT_14ca132a0 = 0xffffffff000000e0;
    _DAT_14ca132a8 = 8;
    DAT_14ca132ac = 0;
    _DAT_14ca13290 = &LAB_147250764;
    FUN_145d48824();
    FUN_1407e00cc(&DAT_14ca13248);
    return;
  }
  return;
}



// FUNCTION 145d48824 FUN_145d48824 body=123 status=ok
// SIG undefined FUN_145d48824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d48824(void)

{
  _DAT_14ca18ba8 = L"BASE";
  DAT_14ca18bd2 = 4;
  _DAT_14ca18bb0 = FUN_140b35ae4();
  _DAT_14ca18bb8 = DAT_14ca13258;
  _DAT_14ca18bc0 = &LAB_14682652b;
  DAT_14ca13258 = &DAT_14ca18ba8;
  DAT_14ca132ad = DAT_14ca132ad + '\x01';
  _DAT_14ca18bc8 = 0x100000000;
  if (*(char *)(_DAT_14ca18bb0 + 100) != '\0') {
    DAT_14ca132ae = DAT_14ca132ae + '\x01';
  }
  return;
}



// FUNCTION 145d488a0 FUN_145d488a0 body=226 status=ok
// SIG undefined FUN_145d488a0(void)

longlong * FUN_145d488a0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef9d8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48988 FUN_145d48988 body=132 status=ok
// SIG undefined FUN_145d48988(void)

undefined1 * FUN_145d48988(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d48984;
}



// FUNCTION 145d48a0c FUN_145d48a0c body=138 status=ok
// SIG undefined FUN_145d48a0c(void)

code * FUN_145d48a0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CubemapFaceIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d48988;
}



// FUNCTION 145d48a96 FUN_145d48a96 body=37 status=ok
// SIG undefined FUN_145d48a96(void)

void FUN_145d48a96(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xc0);
  FUN_145d48abc(param_2);
  return;
}



// FUNCTION 145d48abc FUN_145d48abc body=154 status=ok
// SIG undefined FUN_145d48abc(void)

undefined8 * FUN_145d48abc(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac44de0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_1446ddc76(local_28,"SpawnAnims.AIChosenStance",1);
  FUN_1447683ea(param_1 + 0x17,local_28,0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48b58 FUN_145d48b58 body=156 status=ok
// SIG undefined FUN_145d48b58(void)

void FUN_145d48b58(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x8c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) &
                             (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar3 = param_1;
      }
      do {
        if (*(ulonglong *)(lVar3 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_145d48bf4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(lVar3 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145d48bf4 FUN_145d48bf4 body=99 status=ok
// SIG undefined FUN_145d48bf4(void)

void FUN_145d48bf4(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  lVar4 = param_1 + 0x90;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar3 = *(int *)(lVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)(lVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar2 + (longlong)iVar3 * 0x18 + 0x10);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + 0x10);
  FUN_145d48c58();
  return;
}



// FUNCTION 145d48c58 FUN_145d48c58 body=65 status=ok
// SIG undefined FUN_145d48c58(void)

void FUN_145d48c58(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar2 = param_1;
  }
  puVar1 = *(undefined8 **)(lVar2 + 8 + (longlong)param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145d48c9a(param_1,param_2);
  return;
}



// FUNCTION 145d48c9a FUN_145d48c9a body=141 status=ok
// SIG undefined FUN_145d48c9a(void)

void FUN_145d48c9a(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x88) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x8c)) {
    uVar6 = *(undefined4 *)(param_1 + 0x88);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x88) = param_2;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  lVar5 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145d48d28 FUN_145d48d28 body=198 status=ok
// SIG undefined FUN_145d48d28(void)

void FUN_145d48d28(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140495e96();
  if (lVar5 != 0) {
    lVar5 = FUN_1403ca91c(lVar5);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x80);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar5 + 0x78);
        lVar6 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar6) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + lVar6), plVar3 != (longlong *)0x0)) {
            cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1 + -0x30);
            if (cVar4 != '\0') goto LAB_145d48dcc;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      local_48 = FUN_140f560b8;
      local_40 = 0;
      FUN_145d48df0(lVar5 + 0x78,local_38,param_1 + -0x30);
    }
  }
LAB_145d48dcc:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48df0 FUN_145d48df0 body=254 status=ok
// SIG undefined FUN_145d48df0(void)

undefined8
FUN_145d48df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
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
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ad830;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d48ef8 FUN_145d48ef8 body=153 status=ok
// SIG undefined FUN_145d48ef8(void)

void FUN_145d48ef8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145d48f92();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1c060;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 145d48f92 FUN_145d48f92 body=261 status=ok
// SIG undefined FUN_145d48f92(void)

void FUN_145d48f92(void)

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
              0x110) < DAT_14cc1c0e0) {
    FUN_144b3d300(&DAT_14cc1c0e0);
    if (DAT_14cc1c0e0 == -1) {
      FUN_145d49098(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHalfEdgeDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x6f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1c060,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144527cd1);
      _Init_thread_footer(&DAT_14cc1c0e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d49098 FUN_145d49098 body=226 status=ok
// SIG undefined FUN_145d49098(void)

longlong * FUN_145d49098(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146737fe4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d49180 FUN_145d49180 body=132 status=ok
// SIG undefined FUN_145d49180(void)

undefined1 * FUN_145d49180(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4917c;
}



// FUNCTION 145d49204 FUN_145d49204 body=138 status=ok
// SIG undefined FUN_145d49204(void)

code * FUN_145d49204(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndexBufferStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485c1e;
}



// FUNCTION 145d4928e FUN_145d4928e body=210 status=ok
// SIG undefined FUN_145d4928e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4928e(void)

{
  if ((DAT_14cb3b48f & 2) == 0) {
    DAT_14cb3b48f = DAT_14cb3b48f | 2;
    _DAT_14cb3b430 = L"FNiagaraDataInterfaceParametersCS_Grid2DCollection";
    _DAT_14cb3b448 = FUN_146826540;
    _DAT_14cb3b450 = FUN_146825d77;
    _DAT_14cb3b458 = FUN_146825fd6;
    _DAT_14cb3b460 = FUN_1407e02ea;
    _DAT_14cb3b468 = FUN_146826273;
    _DAT_14cb3b440 = FUN_1481631a0;
    _DAT_14cb3b480 = 0xffffffff00000020;
    _DAT_14cb3b488 = 8;
    DAT_14cb3b48c = 0;
    _DAT_14cb3b470 = &LAB_1481631ee;
    FUN_145d494a2();
    FUN_145d49360();
    FUN_1407e00cc(&DAT_14cb3b428);
    return;
  }
  return;
}



// FUNCTION 145d49360 FUN_145d49360 body=123 status=ok
// SIG undefined FUN_145d49360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d49360(void)

{
  _DAT_14cb3bed8 = L"BASE";
  DAT_14cb3bf02 = 4;
  _DAT_14cb3bee0 = FUN_145d493dc();
  _DAT_14cb3bee8 = DAT_14cb3b438;
  _DAT_14cb3bef0 = &LAB_14682652b;
  DAT_14cb3b438 = &DAT_14cb3bed8;
  DAT_14cb3b48d = DAT_14cb3b48d + '\x01';
  _DAT_14cb3bef8 = 0x100000000;
  if (*(char *)(_DAT_14cb3bee0 + 100) != '\0') {
    DAT_14cb3b48e = DAT_14cb3b48e + '\x01';
  }
  return;
}



// FUNCTION 145d493dc FUN_145d493dc body=197 status=ok
// SIG undefined FUN_145d493dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d493dc(void)

{
  if ((DAT_14cb2bdc7 & 2) == 0) {
    DAT_14cb2bdc7 = DAT_14cb2bdc7 | 2;
    _DAT_14cb2bd68 = L"FNiagaraDataInterfaceParametersCS";
    _DAT_14cb2bd80 = FUN_146826540;
    _DAT_14cb2bd88 = FUN_146825d77;
    _DAT_14cb2bd90 = FUN_146825fd6;
    _DAT_14cb2bd98 = FUN_1407e02ea;
    _DAT_14cb2bda0 = FUN_146826273;
    _DAT_14cb2bd78 = &LAB_148042408;
    _DAT_14cb2bdb8 = 0xffffffff00000001;
    _DAT_14cb2bdc0 = 1;
    DAT_14cb2bdc4 = 0;
    _DAT_14cb2bda8 = &LAB_14804240c;
    FUN_1407e00cc(&DAT_14cb2bd60);
  }
  return &DAT_14cb2bd60;
}



// FUNCTION 145d494a2 FUN_145d494a2 body=276 status=ok
// SIG undefined FUN_145d494a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d494a2(void)

{
  FUN_145d495b6();
  _DAT_14cb3b9b0 = L"AttributeNames";
  DAT_14cb3b9da = FUN_140850cc5();
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
  _DAT_14cb3b9b8 = &DAT_14cb3c078;
  _DAT_14cb3b9c8 = &LAB_14682652b;
  _DAT_14cb3b9d0 = 0x100000000;
  _DAT_14cb3b9d8 = 0;
  _DAT_14cb3b9c0 = DAT_14cb3b438;
  DAT_14cb3b438 = &DAT_14cb3b9b0;
  return;
}



// FUNCTION 145d495b6 FUN_145d495b6 body=271 status=ok
// SIG undefined FUN_145d495b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d495b6(void)

{
  _DAT_14cb3b9e0 = L"AttributeChannelCount";
  DAT_14cb3ba0a = FUN_140850cc5();
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
  _DAT_14cb3b9e8 = &DAT_14ca77828;
  _DAT_14cb3b9f8 = &LAB_14682652b;
  _DAT_14cb3ba00 = &DAT_100000010;
  _DAT_14cb3ba08 = 0;
  _DAT_14cb3b9f0 = DAT_14cb3b438;
  DAT_14cb3b438 = &DAT_14cb3b9e0;
  return;
}



// FUNCTION 145d496d2 FUN_145d496d2 body=143 status=ok
// SIG undefined FUN_145d496d2(void)

undefined8 * FUN_145d496d2(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  FUN_14118b488(puVar1);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14a158810;
  puVar1[1] = &PTR_FUN_14a158840;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xb] = 2;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 145d49762 FUN_145d49762 body=63 status=ok
// SIG undefined FUN_145d49762(void)

void FUN_145d49762(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d497a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145d497a2 FUN_145d497a2 body=91 status=ok
// SIG undefined FUN_145d497a2(void)

ulonglong FUN_145d497a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145d497fe FUN_145d497fe body=40 status=ok
// SIG undefined FUN_145d497fe(void)

undefined8 FUN_145d497fe(undefined8 param_1,int param_2)

{
  FUN_145d49826();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49826 FUN_145d49826 body=114 status=ok
// SIG undefined FUN_145d49826(void)

void FUN_145d49826(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a852510;
  param_1[5] = &PTR_FUN_14a852f10;
  param_1[6] = &PTR_LAB_14a852f50;
  param_1[0x55] = &PTR_FUN_14a852fa0;
  param_1[0x56] = &PTR_FUN_14a853020;
  param_1[0x57] = &PTR_FUN_14a853030;
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145d498a4 FUN_145d498a4 body=143 status=ok
// SIG undefined FUN_145d498a4(void)

undefined8 * FUN_145d498a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8a1120;
  param_1[5] = &PTR_FUN_14a8a13d0;
  lVar2 = 0xa0;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x34) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x7f7fffff;
    *(undefined2 *)((longlong)param_1 + lVar2 + -4) = 0x404;
    *(undefined **)((longlong)param_1 + lVar2 + -0x70) = &DAT_14a176f00;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x220);
  return param_1;
}



// FUNCTION 145d49934 FUN_145d49934 body=160 status=ok
// SIG undefined FUN_145d49934(void)

void FUN_145d49934(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0xffffffffffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 2000))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d499d6 FUN_145d499d6 body=70 status=ok
// SIG undefined FUN_145d499d6(void)

void FUN_145d499d6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144800528();
  if (plVar1[0x22] == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
  }
  *(undefined1 *)(param_1 + 0x934) = 1;
  *(int *)(param_1 + 0x930) = (int)param_2 - (int)((ulonglong)param_2 >> 0x20);
  return;
}



// FUNCTION 145d49a1c FUN_145d49a1c body=40 status=ok
// SIG undefined FUN_145d49a1c(void)

undefined8 FUN_145d49a1c(undefined8 param_1,int param_2)

{
  FUN_145d49a44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49a44 FUN_145d49a44 body=114 status=ok
// SIG undefined FUN_145d49a44(void)

void FUN_145d49a44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14abaf660;
  FUN_1449db362(param_1 + 0xe);
  plVar3 = (longlong *)param_1[0xd];
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
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d49ab6 FUN_145d49ab6 body=40 status=ok
// SIG undefined FUN_145d49ab6(void)

undefined8 FUN_145d49ab6(undefined8 param_1,int param_2)

{
  FUN_145d49ade();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49ade FUN_145d49ade body=114 status=ok
// SIG undefined FUN_145d49ade(void)

void FUN_145d49ade(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abed200;
  param_1[5] = &PTR_FUN_14abed530;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d49b50 FUN_145d49b50 body=40 status=ok
// SIG undefined FUN_145d49b50(void)

undefined8 FUN_145d49b50(undefined8 param_1,int param_2)

{
  FUN_145d49b78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49b78 FUN_145d49b78 body=114 status=ok
// SIG undefined FUN_145d49b78(void)

void FUN_145d49b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac16340;
  param_1[0x72] = &PTR_FUN_14ac16980;
  param_1[0x73] = &PTR_FUN_14ac169a0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145d49bea FUN_145d49bea body=40 status=ok
// SIG undefined FUN_145d49bea(void)

undefined8 FUN_145d49bea(undefined8 param_1,int param_2)

{
  FUN_145d49c12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49c12 FUN_145d49c12 body=114 status=ok
// SIG undefined FUN_145d49c12(void)

void FUN_145d49c12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adad300;
  param_1[5] = &PTR_FUN_14adaddd0;
  param_1[6] = &PTR_LAB_14adade10;
  param_1[0x55] = &PTR_FUN_14adade60;
  param_1[0x56] = &PTR_FUN_14adadee0;
  param_1[0x57] = &PTR_FUN_14adadef0;
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_1403aec46(param_1);
  return;
}



// FUNCTION 145d49c84 FUN_145d49c84 body=40 status=ok
// SIG undefined FUN_145d49c84(void)

undefined8 FUN_145d49c84(undefined8 param_1,int param_2)

{
  FUN_145d49cac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49cac FUN_145d49cac body=114 status=ok
// SIG undefined FUN_145d49cac(void)

void FUN_145d49cac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b073ac0;
  param_1[5] = &PTR_FUN_14b0744c0;
  param_1[6] = &PTR_LAB_14b074500;
  param_1[0x55] = &PTR_FUN_14b074550;
  param_1[0x56] = &PTR_FUN_14b0745d0;
  param_1[0x57] = &PTR_FUN_14b0745e0;
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145d49d1e FUN_145d49d1e body=40 status=ok
// SIG undefined FUN_145d49d1e(void)

undefined8 FUN_145d49d1e(undefined8 param_1,int param_2)

{
  FUN_145d49d46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49d46 FUN_145d49d46 body=114 status=ok
// SIG undefined FUN_145d49d46(void)

void FUN_145d49d46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b081770;
  plVar3 = (longlong *)param_1[0x7b];
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
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145d49db8 FUN_145d49db8 body=40 status=ok
// SIG undefined FUN_145d49db8(void)

undefined8 FUN_145d49db8(undefined8 param_1,int param_2)

{
  FUN_145d49de0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49de0 FUN_145d49de0 body=114 status=ok
// SIG undefined FUN_145d49de0(void)

void FUN_145d49de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2ed090;
  param_1[5] = &PTR_FUN_14b2eda90;
  param_1[6] = &PTR_LAB_14b2edad0;
  param_1[0x55] = &PTR_FUN_14b2edb20;
  param_1[0x56] = &PTR_FUN_14b2edba0;
  param_1[0x57] = &PTR_FUN_14b2edbb0;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145d49e52 FUN_145d49e52 body=40 status=ok
// SIG undefined FUN_145d49e52(void)

undefined8 FUN_145d49e52(undefined8 param_1,int param_2)

{
  FUN_145d49e7a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d49e7a FUN_145d49e7a body=114 status=ok
// SIG undefined FUN_145d49e7a(void)

void FUN_145d49e7a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4b15d0;
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_1449db362(param_1 + 0xb);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d49eec FUN_145d49eec body=46 status=ok
// SIG undefined FUN_145d49eec(void)

void FUN_145d49eec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d49f1a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b577970;
  puVar1[5] = &PTR_FUN_14b577ce0;
  return;
}



// FUNCTION 145d49f1a FUN_145d49f1a body=108 status=ok
// SIG undefined FUN_145d49f1a(void)

undefined8 * FUN_145d49f1a(undefined8 *param_1)

{
  FUN_14584feea();
  *param_1 = &PTR_FUN_14ae4e590;
  param_1[5] = &PTR_FUN_14ae4e900;
  FUN_140ca8f8e(param_1 + 0x56);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 2;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  return param_1;
}



// FUNCTION 145d49f86 FUN_145d49f86 body=85 status=ok
// SIG undefined FUN_145d49f86(void)

void FUN_145d49f86(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d49fdc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58b2d0;
  puVar1[5] = &PTR_FUN_14b58b870;
  puVar1[0x2d] = &PTR_FUN_14b58b8b0;
  puVar1[0x279] = &PTR_FUN_14b58b8e0;
  puVar1[0x27a] = 0;
  return;
}



// FUNCTION 145d49fdc FUN_145d49fdc body=69 status=ok
// SIG undefined FUN_145d49fdc(void)

undefined8 * FUN_145d49fdc(undefined8 *param_1)

{
  FUN_145791474();
  *param_1 = &PTR_FUN_14b567900;
  param_1[5] = &PTR_LAB_14b567ea0;
  param_1[0x2d] = &PTR_LAB_14b567ee0;
  FUN_144a5dc74(param_1 + 0x277);
  return param_1;
}



// FUNCTION 145d4a02a FUN_145d4a02a body=145 status=ok
// SIG undefined FUN_145d4a02a(void)

undefined8 * FUN_145d4a02a(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc74300;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_140056680(local_30,L"VariantSetUids");
  FUN_1410835a0(param_1 + 0x2a,param_1 + 5,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4a0c4 FUN_145d4a0c4 body=26 status=ok
// SIG undefined FUN_145d4a0c4(void)

void FUN_145d4a0c4(undefined8 param_1)

{
  FUN_145d4a0de();
  FUN_140cef0ca(param_1);
  return;
}



// FUNCTION 145d4a0de FUN_145d4a0de body=254 status=ok
// SIG undefined FUN_145d4a0de(void)

void FUN_145d4a0de(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x58);
  }
  local_40 = (undefined8 *)0x0;
  FUN_14485c47a(&local_40,uVar2);
  local_38 = local_40;
  iVar1 = FUN_145d4a1de((uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
  lVar3 = (longlong)iVar1 * 0x20 + DAT_14cb7d128;
  if (lVar3 != 0 && iVar1 != -1) {
    local_48 = 0;
    FUN_14485c47a(&local_48,param_1);
    local_38 = &local_48;
    FUN_145d4a4c4(lVar3 + 8);
    if (*(int *)(lVar3 + 0x10) == 0) {
      local_50 = 0;
      FUN_14485c47a(&local_50,uVar2);
      FUN_145d4a2a4(local_50);
    }
  }
  *(undefined8 *)(param_1 + 0x8c) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4a1de FUN_145d4a1de body=196 status=ok
// SIG undefined FUN_145d4a1de(void)

int FUN_145d4a1de(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d130 != DAT_14cb7d15c) {
    puVar2 = &DAT_14cb7d160;
    if (DAT_14cb7d168 != (undefined *)0x0) {
      puVar2 = DAT_14cb7d168;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7d170 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7d128 + (longlong)iVar3 * 0x20);
        cVar1 = FUN_140d09c9e(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_145d4a27e;
        iVar3 = *(int *)(DAT_14cb7d128 + 0x18 + (longlong)iVar3 * 0x20);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145d4a27e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4a2a4 FUN_145d4a2a4 body=261 status=ok
// SIG undefined FUN_145d4a2a4(void)

void FUN_145d4a2a4(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb7d128;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7d130 != DAT_14cb7d15c) {
    puVar4 = &DAT_14cb7d160;
    if (DAT_14cb7d168 != (undefined *)0x0) {
      puVar4 = DAT_14cb7d168;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb7d170 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x20;
      local_38 = *(undefined8 *)(DAT_14cb7d128 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_140d09c9e();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 0x18);
          if (lVar6 == -1) goto LAB_145d4a33b;
          lVar6 = lVar6 * 0x20;
          lVar1 = DAT_14cb7d128 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb7d128 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_140d09c9e(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 0x18);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_145d4a3aa(*puVar7);
    }
  }
LAB_145d4a33b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4a3aa FUN_145d4a3aa body=96 status=ok
// SIG undefined FUN_145d4a3aa(void)

void FUN_145d4a3aa(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar2 = &DAT_14cb7d160;
  if (DAT_14cb7d168 != (undefined *)0x0) {
    puVar2 = DAT_14cb7d168;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb7d128 + 0x1c + (longlong)param_1 * 0x20);
  iVar1 = *(int *)(puVar2 + lVar4 * 4);
  if (iVar1 == param_1) {
    piVar3 = (int *)(puVar2 + lVar4 * 4);
  }
  else {
    do {
      piVar3 = (int *)(DAT_14cb7d128 + (longlong)iVar1 * 0x20 + 0x18);
      iVar1 = *piVar3;
    } while (iVar1 != param_1);
  }
  *piVar3 = *(int *)(DAT_14cb7d128 + (longlong)param_1 * 0x20 + 0x18);
  FUN_145d4a40a();
  return;
}



// FUNCTION 145d4a40a FUN_145d4a40a body=48 status=ok
// SIG undefined FUN_145d4a40a(void)

void FUN_145d4a40a(int param_1)

{
  if (*(longlong *)(DAT_14cb7d128 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145d4a43a(param_1);
  return;
}



// FUNCTION 145d4a43a FUN_145d4a43a body=137 status=ok
// SIG undefined FUN_145d4a43a(void)

void FUN_145d4a43a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_14cb7d128;
  if (DAT_14cb7d15c != 0) {
    *(int *)(DAT_14cb7d128 + (longlong)DAT_14cb7d158 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb7d15c) {
    iVar3 = DAT_14cb7d158;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb7d15c = DAT_14cb7d15c + 1;
  puVar4 = &DAT_14cb7d138;
  if (DAT_14cb7d148 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7d148;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7d158 = param_1;
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145d4a4c4 FUN_145d4a4c4 body=273 status=ok
// SIG undefined FUN_145d4a4c4(void)

void FUN_145d4a4c4(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_145d4a5d6(lVar2);
    uVar7 = 0;
    uVar8 = 0;
    do {
      uVar11 = (ulonglong)uVar8;
      uVar3 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar9 = uVar8;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar10 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_145d4a5d6(lVar12,*param_2);
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        uVar10 = uVar9;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar7 != uVar8) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar7 = uVar7 + (uVar10 - uVar8);
      }
      uVar8 = uVar10;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 145d4a5d6 FUN_145d4a5d6 body=55 status=ok
// SIG undefined FUN_145d4a5d6(void)

ulonglong FUN_145d4a5d6(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 145d4a60e FUN_145d4a60e body=284 status=ok
// SIG undefined FUN_145d4a60e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d4a60e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51398) {
    FUN_144b3d300(&DAT_14ca51398);
    if (DAT_14ca51398 == -1) {
      FUN_145d4a72a();
      FUN_140db5666(&DAT_14ca512f0,0,&DAT_14ca51288,L"FShadowProjectionPS5truefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472efbb8,
                    FUN_1472efb90,&LAB_1472efb44,&LAB_1472efb40,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca512f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b86);
      _Init_thread_footer(&DAT_14ca51398);
    }
  }
  return &DAT_14ca512f0;
}



// FUNCTION 145d4a72a FUN_145d4a72a body=205 status=ok
// SIG undefined FUN_145d4a72a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4a72a(void)

{
  if ((DAT_14ca512ef & 2) != 0) {
    return;
  }
  DAT_14ca512ef = DAT_14ca512ef | 2;
  _DAT_14ca51290 = L"FShadowProjectionPS5truefalsefalse";
  _DAT_14ca512a8 = FUN_146826540;
  _DAT_14ca512b0 = FUN_146825d77;
  _DAT_14ca512b8 = FUN_146825fd6;
  _DAT_14ca512c0 = FUN_1407e02ea;
  _DAT_14ca512c8 = FUN_146826273;
  _DAT_14ca512a0 = FUN_1472efb10;
  _DAT_14ca512e0 = 0xffffffff00000148;
  _DAT_14ca512e8 = 8;
  DAT_14ca512ec = 0;
  _DAT_14ca512d0 = &LAB_1472efb3c;
  FUN_145d4a7f8();
  FUN_145d4a8ec();
  FUN_1407e00cc(&DAT_14ca51288);
  return;
}



// FUNCTION 145d4a7f8 FUN_145d4a7f8 body=121 status=ok
// SIG undefined FUN_145d4a7f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4a7f8(void)

{
  FUN_145d4a872();
  _DAT_14ca58050 = L"ProjectionParameters";
  DAT_14ca5807a = FUN_140850cc5();
  _DAT_14ca58058 = FUN_14142e7bc();
  _DAT_14ca58068 = &LAB_14682652b;
  _DAT_14ca58070 = 0x1000000e0;
  _DAT_14ca58078 = 0;
  _DAT_14ca58060 = DAT_14ca51298;
  DAT_14ca51298 = &DAT_14ca58050;
  return;
}



// FUNCTION 145d4a872 FUN_145d4a872 body=121 status=ok
// SIG undefined FUN_145d4a872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4a872(void)

{
  FUN_145d4a972();
  _DAT_14ca58080 = L"ShadowFadeFraction";
  DAT_14ca580aa = FUN_140850cc5();
  _DAT_14ca58088 = FUN_140ec6960();
  _DAT_14ca58098 = &LAB_14682652b;
  _DAT_14ca580a0 = 0x100000130;
  _DAT_14ca580a8 = 0;
  _DAT_14ca58090 = DAT_14ca51298;
  DAT_14ca51298 = &DAT_14ca58080;
  return;
}



// FUNCTION 145d4a8ec FUN_145d4a8ec body=133 status=ok
// SIG undefined FUN_145d4a8ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4a8ec(void)

{
  _DAT_14ca58110 = L"BASE";
  DAT_14ca5813a = 4;
  FUN_1411c95a0();
  _DAT_14ca58120 = DAT_14ca51298;
  _DAT_14ca58118 = &DAT_14ca4ff98;
  _DAT_14ca58128 = &LAB_14682652b;
  DAT_14ca51298 = &DAT_14ca58110;
  DAT_14ca512ed = DAT_14ca512ed + '\x01';
  _DAT_14ca58130 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca512ee = DAT_14ca512ee + '\x01';
  }
  return;
}



// FUNCTION 145d4a972 FUN_145d4a972 body=216 status=ok
// SIG undefined FUN_145d4a972(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4a972(void)

{
  _DAT_14ca580e0 = L"LightPosition";
  DAT_14ca5810a = FUN_140850cc5();
  _DAT_14ca580e8 = FUN_140ec6960();
  _DAT_14ca580f8 = &LAB_14682652b;
  _DAT_14ca58100 = 0x10000013c;
  _DAT_14ca58108 = 0;
  _DAT_14ca580f0 = DAT_14ca51298;
  DAT_14ca51298 = &DAT_14ca580e0;
  _DAT_14ca580b0 = L"ShadowSharpen";
  DAT_14ca580da = FUN_140850cc5();
  _DAT_14ca580b8 = FUN_140ec6960();
  _DAT_14ca580c8 = &LAB_14682652b;
  _DAT_14ca580d0 = 0x100000136;
  _DAT_14ca580d8 = 0;
  _DAT_14ca580c0 = DAT_14ca51298;
  DAT_14ca51298 = &DAT_14ca580b0;
  return;
}



// FUNCTION 145d4aa4a FUN_145d4aa4a body=54 status=ok
// SIG undefined FUN_145d4aa4a(void)

void FUN_145d4aa4a(void)

{
  FUN_145d4aa80();
  if (DAT_14cb915e0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb915c0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d4aa80 FUN_145d4aa80 body=341 status=ok
// SIG undefined FUN_145d4aa80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4aa80(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb915d0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb915e8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb915c0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_145d4abd6((longlong)iStack_3c * 0x50 + *local_58);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb915c8 = 0;
  if (DAT_14cb915cc != 0) {
    FUN_140e9549c(&DAT_14cb915c0,0);
  }
  _DAT_14cb915f0 = 0xffffffff;
  DAT_14cb915e8 = 0;
  if (0x80 < DAT_14cb915ec) {
    DAT_14cb915ec = 0x80;
    FUN_1446efbd8(&DAT_14cb915d0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4abd6 FUN_145d4abd6 body=67 status=ok
// SIG undefined FUN_145d4abd6(void)

void FUN_145d4abd6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145e3ca82(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145d4ac15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d4ac1a FUN_145d4ac1a body=218 status=ok
// SIG undefined FUN_145d4ac1a(void)

void FUN_145d4ac1a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar4 != 0) {
    FUN_141085fe4(param_1,&local_40);
    local_30 = local_40;
    local_28 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_145d4acf6(lVar4 + 0x6c48,&local_30);
    plVar2 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4acf6 FUN_145d4acf6 body=173 status=ok
// SIG undefined FUN_145d4acf6(void)

void FUN_145d4acf6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  if (*(char *)(param_1 + 0x318) == '\x01') {
    FUN_145d4aeb8(param_1,param_2);
    return;
  }
  cVar5 = FUN_145d4ada4(param_1 + 0x2f8,param_2);
  if (cVar5 == '\0') {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x300);
    *(uint *)(param_1 + 0x300) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x304) < iVar1 + 1U) {
      FUN_145d4ae34(param_1 + 0x2f8,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x2f8);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    FUN_145d4b532(param_1);
    return;
  }
  return;
}



// FUNCTION 145d4ada4 FUN_145d4ada4 body=143 status=ok
// SIG undefined FUN_145d4ada4(void)

bool FUN_145d4ada4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar10 = false;
  }
  else {
    plVar8 = (longlong *)*param_1;
    plVar6 = plVar8 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
LAB_145d4ae07:
        lVar9 = *param_2;
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_145d4ae07;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar7 = *plVar8;
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
      bVar10 = lVar7 == lVar9;
    } while ((!bVar10) && (plVar8 = plVar8 + 2, plVar8 != plVar6));
  }
  return bVar10;
}



// FUNCTION 145d4ae34 FUN_145d4ae34 body=132 status=ok
// SIG undefined FUN_145d4ae34(void)

void FUN_145d4ae34(longlong param_1,int param_2)

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



// FUNCTION 145d4aeb8 FUN_145d4aeb8 body=599 status=ok
// SIG undefined FUN_145d4aeb8(void)

void FUN_145d4aeb8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar12 = *(longlong **)(param_1 + 0x2c8);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    else if (0 < (int)plVar12[1]) goto LAB_145d4b040;
  }
  *(longlong *)(param_1 + 0x2c0) = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar12 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 0x2c8);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2c8) = plVar2;
  }
  FUN_145d4b1cc(param_1);
  if (*(char *)(param_1 + 0x318) != '\x01') goto LAB_145d4b040;
  lVar3 = *param_2;
  local_40 = 0;
  local_38 = *(longlong **)(param_1 + 0x2d8);
  if (local_38 != (longlong *)0x0) {
    iVar7 = (int)local_38[1];
    do {
      if (iVar7 == 0) {
        local_38 = (longlong *)0x0;
        goto LAB_145d4af56;
      }
      LOCK();
      iVar6 = (int)local_38[1];
      bVar13 = iVar7 == iVar6;
      if (bVar13) {
        *(int *)(local_38 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar13);
    if (local_38 != (longlong *)0x0) {
      local_40 = *(longlong *)(param_1 + 0x2d0);
    }
  }
LAB_145d4af56:
  FUN_145d4b110(lVar3,&local_40);
  plVar12 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  if (lVar3 == 0) goto LAB_145d4b040;
  uVar4 = *(undefined8 *)(*param_2 + 0x68);
  local_50 = 0;
  uStack_48 = 0;
  uVar8 = FUN_140feeb70();
  lVar9 = FUN_14477b664(uVar8);
  lVar10 = FUN_140feeb70();
  uVar8 = FUN_140feeb70();
  FUN_1402d1bfa(&local_40,uVar8,uVar4);
  lVar5 = local_40;
  if (local_40 != 0) {
    uStack_48 = 0;
  }
  local_58 = local_40;
  lVar11 = FUN_140feeb70();
  if (lVar10 == 0) {
LAB_145d4b003:
    lVar11 = lVar10;
  }
  else if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)) goto LAB_145d4b003;
  if (lVar9 != lVar11) {
    uStack_48 = 0;
  }
  uVar8 = FUN_14477b664(lVar11);
  local_50 = FUN_14477b664(uVar8);
  if ((lVar5 != 0) && (local_50 != 0)) {
    uStack_48 = uVar4;
  }
  FUN_145d4b146(lVar3,&local_58);
LAB_145d4b040:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d4b110 FUN_145d4b110 body=54 status=ok
// SIG undefined FUN_145d4b110(void)

void FUN_145d4b110(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == param_1 || *param_2 == 0) {
    return;
  }
  uVar1 = FUN_148dcfade();
  FUN_148dcfa62(param_1,uVar1);
  return;
}



// FUNCTION 145d4b146 FUN_145d4b146 body=132 status=ok
// SIG undefined FUN_145d4b146(void)

void FUN_145d4b146(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  uVar1 = FUN_14477b072(param_1,DAT_14cba7c80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4b1cc FUN_145d4b1cc body=210 status=ok
// SIG undefined FUN_145d4b1cc(void)

void FUN_145d4b1cc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14150ea58(param_1,&local_28);
  if (local_28 != 0) {
    local_38 = 0;
    local_30 = *(longlong *)(param_1 + 0x2c8);
    if (local_30 != 0) {
      iVar3 = *(int *)(local_30 + 8);
      do {
        if (iVar3 == 0) {
          local_30 = 0;
          goto LAB_145d4b23e;
        }
        LOCK();
        iVar2 = *(int *)(local_30 + 8);
        bVar4 = iVar3 == iVar2;
        if (bVar4) {
          *(int *)(local_30 + 8) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar4);
      if (local_30 != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x2c0);
      }
    }
LAB_145d4b23e:
    FUN_145d4b2b0(local_28,&local_38);
  }
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d4b2b0 FUN_145d4b2b0 body=300 status=ok
// SIG undefined FUN_145d4b2b0(void)

void FUN_145d4b2b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    lStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((undefined8 *)(param_1 + 0x48) != &local_68) {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_48._4_4_ = 0;
        local_48._0_4_ = 0;
        lStack_50 = 0;
      }
      else {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x60) = lStack_50;
      *(undefined4 *)(param_1 + 0x68) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x6c) = local_48._4_4_;
    }
    local_48 = 0;
    lStack_50 = 0;
    FUN_144a450dc(param_1 + 0x70,&uStack_40);
    *(undefined2 *)(param_1 + 0x80) = (undefined2)uStack_30;
    FUN_1449db362(&uStack_40);
    if (lStack_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,param_1 + 0x48);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4b3de FUN_145d4b3de body=23 status=ok
// SIG undefined FUN_145d4b3de(void)

void FUN_145d4b3de(undefined8 param_1,longlong param_2)

{
  FUN_145d4b3f6();
  *(undefined1 *)(param_2 + 0x39) = 1;
  return;
}



// FUNCTION 145d4b3f6 FUN_145d4b3f6 body=315 status=ok
// SIG undefined FUN_145d4b3f6(void)

void FUN_145d4b3f6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[0xb];
  if (lVar1 == 0) goto LAB_145d4b44d;
  lVar9 = *(longlong *)(lVar1 + 0x150);
  if (lVar9 == 0) {
    uVar7 = FUN_14020fa9c();
    lVar9 = FUN_14477b664(uVar7);
    *(longlong *)(lVar1 + 0x150) = lVar9;
  }
  lVar8 = *(longlong *)(lVar1 + 0x158);
  if (lVar8 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(lVar1 + 0x148) == 0)) goto LAB_145d4b44d;
    plVar2 = *(longlong **)(lVar9 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar6 != '\0') {
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar1 + 0x148));
        *(longlong *)(lVar1 + 0x158) = lVar8;
        if (lVar8 == 0) goto LAB_145d4b44d;
        goto LAB_145d4b4ba;
      }
    }
    *(undefined8 *)(lVar1 + 0x158) = 0;
  }
  else {
LAB_145d4b4ba:
    *param_2 = *(undefined8 *)(lVar8 + 0x18);
    uVar3 = *(undefined4 *)(lVar8 + 0x24);
    uVar4 = *(undefined4 *)(lVar8 + 0x28);
    uVar5 = *(undefined4 *)(lVar8 + 0x2c);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar8 + 0x20);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 2) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
    FUN_144a787a6(param_2 + 3,lVar8 + 0x30);
    (**(code **)(*param_1 + 0x78))(param_1,local_40);
    FUN_144a450dc(param_2 + 5,local_40);
    FUN_1449db362(local_40);
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(lVar8 + 0x240);
  }
LAB_145d4b44d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4b532 FUN_145d4b532 body=1087 status=ok
// SIG undefined FUN_145d4b532(void)

void FUN_145d4b532(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = *(longlong **)(param_1 + 0x2c8);
  bVar5 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    iVar8 = (int)plVar13[1];
    lVar16 = 0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_145d4b56c;
      }
      LOCK();
      iVar6 = (int)plVar13[1];
      bVar17 = iVar8 == iVar6;
      if (bVar17) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar17);
    lVar16 = *(longlong *)(param_1 + 0x2c0);
    bVar5 = false;
  }
LAB_145d4b56c:
  lVar12 = *(longlong *)(param_1 + 0x2e8);
  if (lVar12 == 0) {
    uVar9 = FUN_140feeb70();
    lVar12 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x2e8) = lVar12;
  }
  plVar15 = (longlong *)(param_1 + 0x2e0);
  lVar10 = *(longlong *)(param_1 + 0x2f0);
  if (lVar10 == 0) {
    if ((lVar12 != 0) && (*plVar15 != 0)) {
      plVar14 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar14 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x2f0) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar14 + 0x110))(plVar14);
        lVar10 = FUN_144aff482(uVar9,plVar15);
        *(longlong *)(param_1 + 0x2f0) = lVar10;
        if (lVar10 != 0) goto LAB_145d4b638;
      }
    }
    if (lVar16 != 0) {
      if (!bVar5) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_58 = lVar16;
      local_50 = plVar13;
      FUN_145e1ce2c(param_1,&local_58);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar13 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  else {
LAB_145d4b638:
    local_68 = plVar15;
    if (lVar16 != 0) {
      lVar16 = *(longlong *)(lVar16 + 0x68);
      if (*(longlong *)(param_1 + 0x2e8) == 0) {
        uVar9 = FUN_140feeb70();
        lVar12 = FUN_14477b664(uVar9);
        *(longlong *)(param_1 + 0x2e8) = lVar12;
        lVar10 = *(longlong *)(param_1 + 0x2f0);
        if (((lVar10 == 0) && (lVar10 = 0, lVar12 != 0)) && (*local_68 != 0)) {
          plVar15 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar15 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar15 + 0x110))(plVar15);
            lVar10 = FUN_144aff482(uVar9,local_68);
          }
          *(longlong *)(param_1 + 0x2f0) = lVar10;
        }
      }
      if (lVar16 == lVar10) goto LAB_145d4b5a3;
    }
    if ((longlong)*(int *)(param_1 + 0x300) != 0) {
      plVar15 = *(longlong **)(param_1 + 0x2f8);
      plVar14 = plVar15 + (longlong)*(int *)(param_1 + 0x300) * 2;
      do {
        plVar4 = (longlong *)plVar15[1];
        if (plVar4 != (longlong *)0x0) {
          iVar8 = (int)plVar4[1];
          do {
            if (iVar8 == 0) goto LAB_145d4b711;
            LOCK();
            iVar6 = (int)plVar4[1];
            bVar17 = iVar8 == iVar6;
            if (bVar17) {
              *(int *)(plVar4 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar17);
          lVar16 = *plVar15;
          if (lVar16 == 0) {
            iVar8 = 3;
          }
          else {
            lVar12 = *(longlong *)(lVar16 + 0x68);
            lVar10 = *(longlong *)(param_1 + 0x2e8);
            if (lVar10 == 0) {
              uVar9 = FUN_140feeb70();
              lVar10 = FUN_14477b664(uVar9);
              *(longlong *)(param_1 + 0x2e8) = lVar10;
            }
            lVar11 = *(longlong *)(param_1 + 0x2f0);
            if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*local_68 != 0)) {
              local_60 = *(longlong **)(lVar10 + 0xb8);
              if ((local_60 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*local_60 + 0x108))(), cVar7 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar9 = (**(code **)(*local_60 + 0x110))();
                lVar11 = FUN_144aff482(uVar9,local_68);
              }
              *(longlong *)(param_1 + 0x2f0) = lVar11;
            }
            if (lVar12 == lVar11) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              local_58 = lVar16;
              local_50 = plVar4;
              FUN_145d4aeb8(param_1,&local_58);
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
              iVar8 = 2;
            }
            else {
              iVar8 = 0;
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
          if ((iVar8 != 3) && (iVar8 != 0)) break;
        }
LAB_145d4b711:
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar14);
    }
  }
LAB_145d4b5a3:
  if (!bVar5) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d4b98c FUN_145d4b98c body=205 status=ok
// SIG undefined FUN_145d4b98c(void)

void FUN_145d4b98c(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar1 = FUN_1449ce97a(plVar2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*plVar2 + 0x700))(plVar2);
        if ((cVar1 != '\0') && ((char)plVar2[0x2f] != '\x03')) {
          FUN_1447a97f4(local_58,param_2);
          FUN_145d4ba5a(plVar2,local_58,param_3,param_4);
        }
      }
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4ba5a FUN_145d4ba5a body=179 status=ok
// SIG undefined FUN_145d4ba5a(void)

void FUN_145d4ba5a(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1447715ec(&local_68);
  local_40 = param_3;
  local_38 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cba8030);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4bb0e FUN_145d4bb0e body=85 status=ok
// SIG undefined FUN_145d4bb0e(void)

void FUN_145d4bb0e(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      lVar2 = FUN_1449baec6(lVar2);
      if (lVar2 != 0) {
        FUN_141542080(param_1,*(undefined1 *)(lVar2 + 0x70));
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d4bb64 FUN_145d4bb64 body=206 status=ok
// SIG undefined FUN_145d4bb64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d4bb64(void)

{
  if ((DAT_14c9e9657 & 2) == 0) {
    DAT_14c9e9657 = DAT_14c9e9657 | 2;
    _DAT_14c9e95f8 = L"FDeferredLightVS";
    _DAT_14c9e9610 = FUN_146826540;
    _DAT_14c9e9618 = FUN_146825d77;
    _DAT_14c9e9620 = FUN_146825fd6;
    _DAT_14c9e9628 = FUN_1407e02ea;
    _DAT_14c9e9630 = FUN_146826273;
    _DAT_14c9e9608 = FUN_1471d2a76;
    _DAT_14c9e9648 = 0xffffffff000000e0;
    _DAT_14c9e9650 = 8;
    DAT_14c9e9654 = 0;
    _DAT_14c9e9638 = &LAB_1471d2aa0;
    FUN_145d4bc32();
    FUN_1407e00cc(&DAT_14c9e95f0);
  }
  return &DAT_14c9e95f0;
}



// FUNCTION 145d4bc32 FUN_145d4bc32 body=123 status=ok
// SIG undefined FUN_145d4bc32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4bc32(void)

{
  _DAT_14c9eb850 = L"BASE";
  DAT_14c9eb87a = 4;
  _DAT_14c9eb858 = FUN_140b35ae4();
  _DAT_14c9eb860 = DAT_14c9e9600;
  _DAT_14c9eb868 = &LAB_14682652b;
  DAT_14c9e9600 = &DAT_14c9eb850;
  DAT_14c9e9655 = DAT_14c9e9655 + '\x01';
  _DAT_14c9eb870 = 0x100000000;
  if (*(char *)(_DAT_14c9eb858 + 100) != '\0') {
    DAT_14c9e9656 = DAT_14c9e9656 + '\x01';
  }
  return;
}



// FUNCTION 145d4bcae FUN_145d4bcae body=226 status=ok
// SIG undefined FUN_145d4bcae(void)

longlong * FUN_145d4bcae(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145dfbc7a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4bd96 FUN_145d4bd96 body=138 status=ok
// SIG undefined FUN_145d4bd96(void)

undefined1 * FUN_145d4bd96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x134;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d4bd92;
}



// FUNCTION 145d4be20 FUN_145d4be20 body=144 status=ok
// SIG undefined FUN_145d4be20(void)

code * FUN_145d4be20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4beb0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FullScreenRect";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDrawFullScreenRectangleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000135;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d4bd96;
}



// FUNCTION 145d4beb0 FUN_145d4beb0 body=268 status=ok
// SIG undefined FUN_145d4beb0(void)

undefined * FUN_145d4beb0(void)

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
              0x110) < DAT_14c9ebb88) {
    FUN_144b3d300(&DAT_14c9ebb88);
    if (DAT_14c9ebb88 == -1) {
      FUN_145d4bfbe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDrawFullScreenRectangleParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x124;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ebb08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4895);
      _Init_thread_footer(&DAT_14c9ebb88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ebb08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4bfbe FUN_145d4bfbe body=226 status=ok
// SIG undefined FUN_145d4bfbe(void)

longlong * FUN_145d4bfbe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d5bdc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4c0a6 FUN_145d4c0a6 body=132 status=ok
// SIG undefined FUN_145d4c0a6(void)

undefined1 * FUN_145d4c0a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PosScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4c0a2;
}



// FUNCTION 145d4c12a FUN_145d4c12a body=138 status=ok
// SIG undefined FUN_145d4c12a(void)

code * FUN_145d4c12a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d4c0a6;
}



// FUNCTION 145d4c1b4 FUN_145d4c1b4 body=26 status=ok
// SIG undefined FUN_145d4c1b4(void)

undefined8 FUN_145d4c1b4(longlong param_1,undefined8 param_2)

{
  FUN_145d4c1ce(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145d4c1ce FUN_145d4c1ce body=456 status=ok
// SIG undefined FUN_145d4c1ce(void)

undefined8 * FUN_145d4c1ce(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb72600 != (longlong *)0x0 && DAT_14cb72608 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb72600 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb72600;
    if (DAT_14cb72608 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145d4c2c1;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar3 = 0;
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
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  FUN_145d4c398(puVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3ef720;
  plVar4[2] = (longlong)puVar3;
  local_30 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_38 = (undefined8 *)0x0;
    goto LAB_145d4c2c1;
  }
  local_38 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_145d4c2c1;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_145d4c33c:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145d4c2b7;
    }
    local_30 = (longlong *)0x0;
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
      if (plVar5 != (longlong *)0x0) goto LAB_145d4c33c;
      puVar3[3] = plVar4;
    }
LAB_145d4c2b7:
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
LAB_145d4c2c1:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d4c398 FUN_145d4c398 body=135 status=ok
// SIG undefined FUN_145d4c398(void)

undefined8 * FUN_145d4c398(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3ef700;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1412cbb62(param_1 + 6);
  *param_1 = &PTR_FUN_14b3ef650;
  param_1[4] = &PTR_FUN_14b3ef680;
  param_1[6] = &PTR_FUN_14b3ef6a0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 145d4c420 FUN_145d4c420 body=130 status=ok
// SIG undefined FUN_145d4c420(void)

void FUN_145d4c420(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145d4c4a4();
  if (*(longlong *)(param_1 + 0x24c8) == 0) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      local_30 = FUN_145d80db2;
      local_28 = 0;
      FUN_145d4c4dc(&local_20,param_1);
      *(undefined8 *)(param_1 + 0x24c8) = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4c4a4 FUN_145d4c4a4 body=56 status=ok
// SIG undefined FUN_145d4c4a4(void)

void FUN_145d4c4a4(longlong param_1)

{
  int iVar1;
  
  FUN_141542a20();
  iVar1 = FUN_14487fd02(param_1);
  if ((iVar1 != 3) && (*(longlong *)(param_1 + 0x398) != 0)) {
    FUN_145bd04ee(param_1);
    return;
  }
  return;
}



// FUNCTION 145d4c4dc FUN_145d4c4dc body=248 status=ok
// SIG undefined FUN_145d4c4dc(void)

undefined8 FUN_145d4c4dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b961ce0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9953c0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127be6a(&DAT_14cbd0b78,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4c5d6 FUN_145d4c5d6 body=142 status=ok
// SIG undefined FUN_145d4c5d6(void)

code * FUN_145d4c5d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4c664();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Culling";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCullingRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x170000002e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145daf100;
}



// FUNCTION 145d4c664 FUN_145d4c664 body=268 status=ok
// SIG undefined FUN_145d4c664(void)

undefined * FUN_145d4c664(void)

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
              0x110) < DAT_14cbfa6a8) {
    FUN_144b3d300(&DAT_14cbfa6a8);
    if (DAT_14cbfa6a8 == -1) {
      FUN_145d4c772(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceCullingRawParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x72;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa628,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144439701);
      _Init_thread_footer(&DAT_14cbfa6a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfa628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4c772 FUN_145d4c772 body=226 status=ok
// SIG undefined FUN_145d4c772(void)

longlong * FUN_145d4c772(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667c582;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4c85a FUN_145d4c85a body=132 status=ok
// SIG undefined FUN_145d4c85a(void)

undefined1 * FUN_145d4c85a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bCullingEnable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4c856;
}



// FUNCTION 145d4c8de FUN_145d4c8de body=103 status=ok
// SIG undefined FUN_145d4c8de(void)

ulonglong FUN_145d4c8de(longlong param_1)

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
LAB_145d4c928:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145d4c928;
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



// FUNCTION 145d4c954 FUN_145d4c954 body=26 status=ok
// SIG undefined FUN_145d4c954(void)

undefined8 FUN_145d4c954(longlong param_1,undefined8 param_2)

{
  FUN_145d4c96e(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145d4c96e FUN_145d4c96e body=438 status=ok
// SIG undefined FUN_145d4c96e(void)

undefined8 * FUN_145d4c96e(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb71818 != (longlong *)0x0 && DAT_14cb71820 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb71818 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cb71818;
    if (DAT_14cb71820 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_145d4ca4f;
  }
  _Dst = (void *)FUN_14001cc68(0xb8);
  memset(_Dst,0,0xb8);
  FUN_145d4cb26(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b3e9ed0;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_145d4ca4f;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_145d4ca4f;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_145d4caca:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_145d4ca45;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_145d4caca;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_145d4ca45:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145d4ca4f:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d4cb26 FUN_145d4cb26 body=154 status=ok
// SIG undefined FUN_145d4cb26(void)

undefined8 * FUN_145d4cb26(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3e9eb0;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b3e9e00;
  param_1[4] = &PTR_LAB_14b3e9e60;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145d4cbc0 FUN_145d4cbc0 body=144 status=ok
// SIG undefined FUN_145d4cbc0(void)

code * FUN_145d4cbc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d4cc50();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca40de8;
  return FUN_146303838;
}



// FUNCTION 145d4cc50 FUN_145d4cc50 body=278 status=ok
// SIG undefined FUN_145d4cc50(void)

undefined * FUN_145d4cc50(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca40e68) {
    FUN_144b3d300(&DAT_14ca40e68);
    if (DAT_14ca40e68 == -1) {
      FUN_145d4cd68(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SkyLight";
      local_78 = L"FSkyLightData";
      local_50 = 0x20;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca40de8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f7dc4a);
      _Init_thread_footer(&DAT_14ca40e68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca40de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4cd68 FUN_145d4cd68 body=226 status=ok
// SIG undefined FUN_145d4cd68(void)

longlong * FUN_145d4cd68(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146303588;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4ce50 FUN_145d4ce50 body=138 status=ok
// SIG undefined FUN_145d4ce50(void)

code * FUN_145d4ce50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxShadowThickness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cb26e;
}



// FUNCTION 145d4ceda FUN_145d4ceda body=138 status=ok
// SIG undefined FUN_145d4ceda(void)

code * FUN_145d4ceda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRayDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146303610;
}



// FUNCTION 145d4cf64 FUN_145d4cf64 body=144 status=ok
// SIG undefined FUN_145d4cf64(void)

code * FUN_145d4cf64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4cff4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ScreenBentNormalParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenScreenSpaceBentNormalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145b200d4;
}



// FUNCTION 145d4cff4 FUN_145d4cff4 body=268 status=ok
// SIG undefined FUN_145d4cff4(void)

undefined * FUN_145d4cff4(void)

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
              0x110) < DAT_14c9e7258) {
    FUN_144b3d300(&DAT_14c9e7258);
    if (DAT_14c9e7258 == -1) {
      FUN_145d4d102(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenScreenSpaceBentNormalParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x8d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e71d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd91c);
      _Init_thread_footer(&DAT_14c9e7258);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e71d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d102 FUN_145d4d102 body=226 status=ok
// SIG undefined FUN_145d4d102(void)

longlong * FUN_145d4d102(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d35a8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d1ea FUN_145d4d1ea body=132 status=ok
// SIG undefined FUN_145d4d1ea(void)

undefined1 * FUN_145d4d1ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenBentNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4d1e6;
}



// FUNCTION 145d4d26e FUN_145d4d26e body=144 status=ok
// SIG undefined FUN_145d4d26e(void)

code * FUN_145d4d26e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4d2fe();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightingChannelParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneLightingChannelParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462eb1b4;
}



// FUNCTION 145d4d2fe FUN_145d4d2fe body=268 status=ok
// SIG undefined FUN_145d4d2fe(void)

undefined * FUN_145d4d2fe(void)

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
              0x110) < DAT_14ca085a8) {
    FUN_144b3d300(&DAT_14ca085a8);
    if (DAT_14ca085a8 == -1) {
      FUN_145d4d40c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSceneLightingChannelParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x22;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca08528,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4123);
      _Init_thread_footer(&DAT_14ca085a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca08528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d40c FUN_145d4d40c body=226 status=ok
// SIG undefined FUN_145d4d40c(void)

longlong * FUN_145d4d40c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eb244;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d4f4 FUN_145d4d4f4 body=132 status=ok
// SIG undefined FUN_145d4d4f4(void)

undefined1 * FUN_145d4d4f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bSceneLightingChannelsValid";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4d4f0;
}



// FUNCTION 145d4d578 FUN_145d4d578 body=144 status=ok
// SIG undefined FUN_145d4d578(void)

code * FUN_145d4d578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4d608();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam39";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleSpriteSizeModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3e000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d871e0;
}



// FUNCTION 145d4d608 FUN_145d4d608 body=268 status=ok
// SIG undefined FUN_145d4d608(void)

undefined * FUN_145d4d608(void)

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
              0x110) < DAT_14cb34b20) {
    FUN_144b3d300(&DAT_14cb34b20);
    if (DAT_14cb34b20 == -1) {
      FUN_145d4d716(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScaleSpriteSizeModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x65;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34aa0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb8e8);
      _Init_thread_footer(&DAT_14cb34b20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d716 FUN_145d4d716 body=226 status=ok
// SIG undefined FUN_145d4d716(void)

longlong * FUN_145d4d716(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146462b68;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4d7fe FUN_145d4d7fe body=132 status=ok
// SIG undefined FUN_145d4d7fe(void)

undefined1 * FUN_145d4d7fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleSpriteSize_Distribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x66;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d4d7fa;
}



// FUNCTION 145d4d882 FUN_145d4d882 body=40 status=ok
// SIG undefined FUN_145d4d882(void)

undefined8 FUN_145d4d882(undefined8 param_1,int param_2)

{
  FUN_145d4d8aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4d8aa FUN_145d4d8aa body=115 status=ok
// SIG undefined FUN_145d4d8aa(void)

void FUN_145d4d8aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1d30d0;
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d4d91e FUN_145d4d91e body=123 status=ok
// SIG undefined FUN_145d4d91e(void)

void FUN_145d4d91e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  FUN_1409dad52();
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_14689c22e(lVar3);
LAB_145d4d973:
        FUN_145d4d99a(param_1,lVar3);
        bVar4 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_145d4d973;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 145d4d99a FUN_145d4d99a body=496 status=ok
// SIG undefined FUN_145d4d99a(void)

void FUN_145d4d99a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  int local_74;
  undefined1 local_70;
  int local_6c;
  undefined1 local_68 [4];
  int local_64 [2];
  int local_5c;
  undefined1 local_58 [4];
  int local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = (**(code **)(*param_2 + 0x2f8))(param_2,param_1 + 0xf8,0,0);
  if (lVar6 != 0) {
    do {
      FUN_14073c474(lVar6,local_58);
      FUN_14073c474(param_2,local_68);
      cVar5 = FUN_1400a246c(local_58,local_64);
      if (cVar5 == '\0') {
        cVar5 = FUN_1400a246c(local_58,&local_5c);
        if (cVar5 == '\0') {
          local_74 = local_64[0];
          if (local_5c - local_4c < local_54 - local_64[0]) {
            local_6c = local_54;
          }
          else {
            local_74 = local_4c;
            local_6c = local_5c;
          }
        }
        else {
          local_74 = local_64[0];
          local_6c = local_54;
        }
      }
      else {
        local_74 = local_4c;
        local_6c = local_5c;
      }
      local_70 = 0;
      local_78[0] = 1;
      (**(code **)(*param_2 + 0x2a0))(param_2,local_78);
      lVar6 = (**(code **)(*param_2 + 0x2f8))(param_2,param_1 + 0xf8,0,0);
    } while (lVar6 != 0);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar1 = *(int *)((longlong)param_2 + 0x9c);
    iVar2 = *(int *)((longlong)param_2 + 0xa4);
    lVar7 = FUN_14073751e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      iVar3 = *(int *)(lVar6 + 0x10c);
      iVar4 = *(int *)(lVar6 + 0x114);
      if ((iVar4 <= iVar2) || (iVar4 <= iVar1)) {
        *(int *)((longlong)param_2 + 0xa4) = iVar4 + -1;
        *(int *)((longlong)param_2 + 0x9c) = ~(iVar2 - iVar1) + iVar4;
      }
      if ((iVar1 < iVar3) || (iVar2 < iVar3)) {
        *(int *)((longlong)param_2 + 0x9c) = iVar3;
        *(int *)((longlong)param_2 + 0xa4) = (iVar2 - iVar1) + iVar3;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d4db8c FUN_145d4db8c body=40 status=ok
// SIG undefined FUN_145d4db8c(void)

undefined8 FUN_145d4db8c(undefined8 param_1,int param_2)

{
  FUN_145d4dbb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4dbb4 FUN_145d4dbb4 body=115 status=ok
// SIG undefined FUN_145d4dbb4(void)

void FUN_145d4dbb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b52c680;
  if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2c] + 0x10))();
  }
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b52c2e0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 145d4dc28 FUN_145d4dc28 body=40 status=ok
// SIG undefined FUN_145d4dc28(void)

undefined8 FUN_145d4dc28(undefined8 param_1,int param_2)

{
  FUN_145d4dc50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4dc50 FUN_145d4dc50 body=115 status=ok
// SIG undefined FUN_145d4dc50(void)

void FUN_145d4dc50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b545560;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d4dcc4 FUN_145d4dcc4 body=37 status=ok
// SIG undefined FUN_145d4dcc4(void)

void FUN_145d4dcc4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_145d4dcea(param_2);
  return;
}



// FUNCTION 145d4dcea FUN_145d4dcea body=118 status=ok
// SIG undefined FUN_145d4dcea(void)

undefined8 * FUN_145d4dcea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b6a0f30;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145d4dd60 FUN_145d4dd60 body=37 status=ok
// SIG undefined FUN_145d4dd60(void)

void FUN_145d4dd60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d4dd86();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d4dd86 FUN_145d4dd86 body=66 status=ok
// SIG undefined FUN_145d4dd86(void)

undefined8 FUN_145d4dd86(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) != 0)) {
    lVar1 = FUN_1459b10c6();
    if (lVar1 != 0) {
      uVar2 = FUN_141542cf4(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145d4ddd0 FUN_145d4ddd0 body=147 status=ok
// SIG undefined FUN_145d4ddd0(void)

undefined8 * FUN_145d4ddd0(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bd3b9b0;
  FUN_140056680(param_1 + 5,L"TCHour");
  FUN_140056680(param_1 + 7,L"TCMinute");
  FUN_140056680(param_1 + 9,L"TCSecond");
  FUN_140056680(param_1 + 0xb,L"TCFrame");
  FUN_140056680(param_1 + 0xd,L"TCSubframe");
  FUN_140056680(param_1 + 0xf,L"TCRate");
  FUN_140056680(param_1 + 0x11,L"TCSlate");
  return param_1;
}



// FUNCTION 145d4de64 FUN_145d4de64 body=40 status=ok
// SIG undefined FUN_145d4de64(void)

undefined8 FUN_145d4de64(undefined8 param_1,int param_2)

{
  FUN_145d4de8c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4de8c FUN_145d4de8c body=115 status=ok
// SIG undefined FUN_145d4de8c(void)

void FUN_145d4de8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3b350;
  FUN_14156b236(param_1 + 0xe7);
  FUN_1404dbc70(param_1 + 0xc5);
  FUN_1404dbc70(param_1 + 0xa3);
  FUN_14581ef76(param_1 + 0x82);
  FUN_14581ef76(param_1 + 0x61);
  FUN_14581ef76(param_1 + 0x40);
  FUN_14581ef76(param_1 + 0x1f);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145d4df00 FUN_145d4df00 body=40 status=ok
// SIG undefined FUN_145d4df00(void)

undefined8 FUN_145d4df00(undefined8 param_1,int param_2)

{
  FUN_145d4df28();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4df28 FUN_145d4df28 body=115 status=ok
// SIG undefined FUN_145d4df28(void)

void FUN_145d4df28(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdb8e70;
  param_1[5] = &PTR_FUN_14bdb9220;
  param_1[0x13] = &PTR_FUN_14bdb9240;
  param_1[0x16] = &PTR_FUN_14bdb9270;
  plVar3 = (longlong *)param_1[0x1a];
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
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145d4df9c FUN_145d4df9c body=602 status=ok
// SIG undefined FUN_145d4df9c(void)

void FUN_145d4df9c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_60 = 0xffffffffffffffff;
  uStack_58 = 0;
  lStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (undefined4)local_60;
  uStack_74 = local_60._4_4_;
  uStack_70 = (undefined4)uStack_58;
  uStack_6c = uStack_58._4_4_;
  local_68 = lStack_50;
  if ((lStack_50 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  uVar2 = uStack_40;
  lVar1 = local_48;
  local_88 = 0;
  local_80 = (int)uStack_40;
  if ((int)uStack_40 == 0) {
    local_7c = 0;
  }
  else {
    FUN_140b57a8a(&local_88,uStack_40 & 0xffffffff,0);
    FUN_140b579f5(local_88,lVar1,uVar2 & 0xffffffff);
  }
  FUN_141542d28(local_28,local_30,&local_88,&local_78);
  FUN_1403d8100(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4e1f8 FUN_145d4e1f8 body=210 status=ok
// SIG undefined FUN_145d4e1f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e1f8(void)

{
  if ((DAT_14cb49b67 & 2) == 0) {
    DAT_14cb49b67 = DAT_14cb49b67 | 2;
    _DAT_14cb49b08 = L"FWaterVertexFactoryParametersNoSelectionNonIndirect";
    _DAT_14cb49b20 = FUN_146826540;
    _DAT_14cb49b28 = FUN_146825d77;
    _DAT_14cb49b30 = FUN_146825fd6;
    _DAT_14cb49b38 = FUN_1407e02ea;
    _DAT_14cb49b40 = FUN_146826273;
    _DAT_14cb49b18 = &LAB_1484098a0;
    _DAT_14cb49b58 = 0xffffffff00000030;
    _DAT_14cb49b60 = 4;
    DAT_14cb49b64 = 0;
    _DAT_14cb49b48 = &LAB_1484098b4;
    FUN_145d4e2ca();
    FUN_145d4e620();
    FUN_1407e00cc(&DAT_14cb49b00);
    return;
  }
  return;
}



// FUNCTION 145d4e2ca FUN_145d4e2ca body=121 status=ok
// SIG undefined FUN_145d4e2ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e2ca(void)

{
  FUN_145d4e344();
  _DAT_14cb49f10 = L"QuadTreePositionParameter";
  DAT_14cb49f3a = FUN_140850cc5();
  _DAT_14cb49f18 = FUN_140ec6960();
  _DAT_14cb49f28 = &LAB_14682652b;
  _DAT_14cb49f30 = &DAT_100000004;
  _DAT_14cb49f38 = 0;
  _DAT_14cb49f20 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb49f10;
  return;
}



// FUNCTION 145d4e344 FUN_145d4e344 body=121 status=ok
// SIG undefined FUN_145d4e344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e344(void)

{
  FUN_145d4e3be();
  _DAT_14cb49f40 = L"LODMorphingEnabledParameter";
  DAT_14cb49f6a = FUN_140850cc5();
  _DAT_14cb49f48 = FUN_140ec6960();
  _DAT_14cb49f58 = &LAB_14682652b;
  _DAT_14cb49f60 = &DAT_10000000a;
  _DAT_14cb49f68 = 0;
  _DAT_14cb49f50 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb49f40;
  return;
}



// FUNCTION 145d4e3be FUN_145d4e3be body=121 status=ok
// SIG undefined FUN_145d4e3be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e3be(void)

{
  FUN_145d4e438();
  _DAT_14cb49f70 = L"InstanceDataOffsetsBufferParameter";
  DAT_14cb49f9a = FUN_140850cc5();
  _DAT_14cb49f78 = FUN_140fb78d0();
  _DAT_14cb49f88 = &LAB_14682652b;
  _DAT_14cb49f90 = &DAT_100000010;
  _DAT_14cb49f98 = 0;
  _DAT_14cb49f80 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb49f70;
  return;
}



// FUNCTION 145d4e438 FUN_145d4e438 body=121 status=ok
// SIG undefined FUN_145d4e438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e438(void)

{
  FUN_145d4e4b2();
  _DAT_14cb49fa0 = L"InstanceData0BufferParameter";
  DAT_14cb49fca = FUN_140850cc5();
  _DAT_14cb49fa8 = FUN_140fb78d0();
  _DAT_14cb49fb8 = &LAB_14682652b;
  _DAT_14cb49fc0 = &DAT_100000014;
  _DAT_14cb49fc8 = 0;
  _DAT_14cb49fb0 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb49fa0;
  return;
}



// FUNCTION 145d4e4b2 FUN_145d4e4b2 body=121 status=ok
// SIG undefined FUN_145d4e4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e4b2(void)

{
  FUN_145d4e52c();
  _DAT_14cb49fd0 = L"InstanceData1BufferParameter";
  DAT_14cb49ffa = FUN_140850cc5();
  _DAT_14cb49fd8 = FUN_140fb78d0();
  _DAT_14cb49fe8 = &LAB_14682652b;
  _DAT_14cb49ff0 = &DAT_100000018;
  _DAT_14cb49ff8 = 0;
  _DAT_14cb49fe0 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb49fd0;
  return;
}



// FUNCTION 145d4e52c FUN_145d4e52c body=121 status=ok
// SIG undefined FUN_145d4e52c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e52c(void)

{
  FUN_145d4e5a6();
  _DAT_14cb4a000 = L"InstanceData2BufferParameter";
  DAT_14cb4a02a = FUN_140850cc5();
  _DAT_14cb4a008 = FUN_140fb78d0();
  _DAT_14cb4a018 = &LAB_14682652b;
  _DAT_14cb4a020 = &DAT_10000001c;
  _DAT_14cb4a028 = 0;
  _DAT_14cb4a010 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb4a000;
  return;
}



// FUNCTION 145d4e5a6 FUN_145d4e5a6 body=121 status=ok
// SIG undefined FUN_145d4e5a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e5a6(void)

{
  FUN_145d4e69c();
  _DAT_14cb4a030 = L"InstanceData3BufferParameter";
  DAT_14cb4a05a = FUN_140850cc5();
  _DAT_14cb4a038 = FUN_140fb78d0();
  _DAT_14cb4a048 = &LAB_14682652b;
  _DAT_14cb4a050 = &DAT_100000020;
  _DAT_14cb4a058 = 0;
  _DAT_14cb4a040 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb4a030;
  return;
}



// FUNCTION 145d4e620 FUN_145d4e620 body=123 status=ok
// SIG undefined FUN_145d4e620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e620(void)

{
  _DAT_14cb4a0c0 = L"BASE";
  DAT_14cb4a0ea = 4;
  _DAT_14cb4a0c8 = FUN_1412f7d22();
  _DAT_14cb4a0d0 = DAT_14cb49b10;
  _DAT_14cb4a0d8 = &LAB_14682652b;
  DAT_14cb49b10 = &DAT_14cb4a0c0;
  DAT_14cb49b65 = DAT_14cb49b65 + '\x01';
  _DAT_14cb4a0e0 = 0x100000000;
  if (*(char *)(_DAT_14cb4a0c8 + 100) != '\0') {
    DAT_14cb49b66 = DAT_14cb49b66 + '\x01';
  }
  return;
}



// FUNCTION 145d4e69c FUN_145d4e69c body=216 status=ok
// SIG undefined FUN_145d4e69c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e69c(void)

{
  _DAT_14cb4a090 = L"StereoPassInstanceFactorParameter";
  DAT_14cb4a0ba = FUN_140850cc5();
  _DAT_14cb4a098 = FUN_140ec6960();
  _DAT_14cb4a0a8 = &LAB_14682652b;
  _DAT_14cb4a0b0 = 0x10000002a;
  _DAT_14cb4a0b8 = 0;
  _DAT_14cb4a0a0 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb4a090;
  _DAT_14cb4a060 = L"DrawBucketIndexParameter";
  DAT_14cb4a08a = FUN_140850cc5();
  _DAT_14cb4a068 = FUN_140ec6960();
  _DAT_14cb4a078 = &LAB_14682652b;
  _DAT_14cb4a080 = &DAT_100000024;
  _DAT_14cb4a088 = 0;
  _DAT_14cb4a070 = DAT_14cb49b10;
  DAT_14cb49b10 = &DAT_14cb4a060;
  return;
}



// FUNCTION 145d4e774 FUN_145d4e774 body=210 status=ok
// SIG undefined FUN_145d4e774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e774(void)

{
  if ((DAT_14cb49c47 & 2) == 0) {
    DAT_14cb49c47 = DAT_14cb49c47 | 2;
    _DAT_14cb49be8 = L"FWaterVertexFactoryParametersNoSelectionWithIndirect";
    _DAT_14cb49c00 = FUN_146826540;
    _DAT_14cb49c08 = FUN_146825d77;
    _DAT_14cb49c10 = FUN_146825fd6;
    _DAT_14cb49c18 = FUN_1407e02ea;
    _DAT_14cb49c20 = FUN_146826273;
    _DAT_14cb49bf8 = &LAB_1484098b8;
    _DAT_14cb49c38 = 0xffffffff00000030;
    _DAT_14cb49c40 = 4;
    DAT_14cb49c44 = 0;
    _DAT_14cb49c28 = &LAB_1484098cc;
    FUN_145d4e846();
    FUN_145d4eb9c();
    FUN_1407e00cc(&DAT_14cb49be0);
    return;
  }
  return;
}



// FUNCTION 145d4e846 FUN_145d4e846 body=121 status=ok
// SIG undefined FUN_145d4e846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e846(void)

{
  FUN_145d4e8c0();
  _DAT_14cb4a0f0 = L"QuadTreePositionParameter";
  DAT_14cb4a11a = FUN_140850cc5();
  _DAT_14cb4a0f8 = FUN_140ec6960();
  _DAT_14cb4a108 = &LAB_14682652b;
  _DAT_14cb4a110 = &DAT_100000004;
  _DAT_14cb4a118 = 0;
  _DAT_14cb4a100 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a0f0;
  return;
}



// FUNCTION 145d4e8c0 FUN_145d4e8c0 body=121 status=ok
// SIG undefined FUN_145d4e8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e8c0(void)

{
  FUN_145d4e93a();
  _DAT_14cb4a120 = L"LODMorphingEnabledParameter";
  DAT_14cb4a14a = FUN_140850cc5();
  _DAT_14cb4a128 = FUN_140ec6960();
  _DAT_14cb4a138 = &LAB_14682652b;
  _DAT_14cb4a140 = &DAT_10000000a;
  _DAT_14cb4a148 = 0;
  _DAT_14cb4a130 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a120;
  return;
}



// FUNCTION 145d4e93a FUN_145d4e93a body=121 status=ok
// SIG undefined FUN_145d4e93a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e93a(void)

{
  FUN_145d4e9b4();
  _DAT_14cb4a150 = L"InstanceDataOffsetsBufferParameter";
  DAT_14cb4a17a = FUN_140850cc5();
  _DAT_14cb4a158 = FUN_140fb78d0();
  _DAT_14cb4a168 = &LAB_14682652b;
  _DAT_14cb4a170 = &DAT_100000010;
  _DAT_14cb4a178 = 0;
  _DAT_14cb4a160 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a150;
  return;
}



// FUNCTION 145d4e9b4 FUN_145d4e9b4 body=121 status=ok
// SIG undefined FUN_145d4e9b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4e9b4(void)

{
  FUN_145d4ea2e();
  _DAT_14cb4a180 = L"InstanceData0BufferParameter";
  DAT_14cb4a1aa = FUN_140850cc5();
  _DAT_14cb4a188 = FUN_140fb78d0();
  _DAT_14cb4a198 = &LAB_14682652b;
  _DAT_14cb4a1a0 = &DAT_100000014;
  _DAT_14cb4a1a8 = 0;
  _DAT_14cb4a190 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a180;
  return;
}



// FUNCTION 145d4ea2e FUN_145d4ea2e body=121 status=ok
// SIG undefined FUN_145d4ea2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4ea2e(void)

{
  FUN_145d4eaa8();
  _DAT_14cb4a1b0 = L"InstanceData1BufferParameter";
  DAT_14cb4a1da = FUN_140850cc5();
  _DAT_14cb4a1b8 = FUN_140fb78d0();
  _DAT_14cb4a1c8 = &LAB_14682652b;
  _DAT_14cb4a1d0 = &DAT_100000018;
  _DAT_14cb4a1d8 = 0;
  _DAT_14cb4a1c0 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a1b0;
  return;
}



// FUNCTION 145d4eaa8 FUN_145d4eaa8 body=121 status=ok
// SIG undefined FUN_145d4eaa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4eaa8(void)

{
  FUN_145d4eb22();
  _DAT_14cb4a1e0 = L"InstanceData2BufferParameter";
  DAT_14cb4a20a = FUN_140850cc5();
  _DAT_14cb4a1e8 = FUN_140fb78d0();
  _DAT_14cb4a1f8 = &LAB_14682652b;
  _DAT_14cb4a200 = &DAT_10000001c;
  _DAT_14cb4a208 = 0;
  _DAT_14cb4a1f0 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a1e0;
  return;
}



// FUNCTION 145d4eb22 FUN_145d4eb22 body=121 status=ok
// SIG undefined FUN_145d4eb22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4eb22(void)

{
  FUN_145d4ec18();
  _DAT_14cb4a210 = L"InstanceData3BufferParameter";
  DAT_14cb4a23a = FUN_140850cc5();
  _DAT_14cb4a218 = FUN_140fb78d0();
  _DAT_14cb4a228 = &LAB_14682652b;
  _DAT_14cb4a230 = &DAT_100000020;
  _DAT_14cb4a238 = 0;
  _DAT_14cb4a220 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a210;
  return;
}



// FUNCTION 145d4eb9c FUN_145d4eb9c body=123 status=ok
// SIG undefined FUN_145d4eb9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4eb9c(void)

{
  _DAT_14cb4a2a0 = L"BASE";
  DAT_14cb4a2ca = 4;
  _DAT_14cb4a2a8 = FUN_1412f7d22();
  _DAT_14cb4a2b0 = DAT_14cb49bf0;
  _DAT_14cb4a2b8 = &LAB_14682652b;
  DAT_14cb49bf0 = &DAT_14cb4a2a0;
  DAT_14cb49c45 = DAT_14cb49c45 + '\x01';
  _DAT_14cb4a2c0 = 0x100000000;
  if (*(char *)(_DAT_14cb4a2a8 + 100) != '\0') {
    DAT_14cb49c46 = DAT_14cb49c46 + '\x01';
  }
  return;
}



// FUNCTION 145d4ec18 FUN_145d4ec18 body=216 status=ok
// SIG undefined FUN_145d4ec18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4ec18(void)

{
  _DAT_14cb4a270 = L"StereoPassInstanceFactorParameter";
  DAT_14cb4a29a = FUN_140850cc5();
  _DAT_14cb4a278 = FUN_140ec6960();
  _DAT_14cb4a288 = &LAB_14682652b;
  _DAT_14cb4a290 = 0x10000002a;
  _DAT_14cb4a298 = 0;
  _DAT_14cb4a280 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a270;
  _DAT_14cb4a240 = L"DrawBucketIndexParameter";
  DAT_14cb4a26a = FUN_140850cc5();
  _DAT_14cb4a248 = FUN_140ec6960();
  _DAT_14cb4a258 = &LAB_14682652b;
  _DAT_14cb4a260 = &DAT_100000024;
  _DAT_14cb4a268 = 0;
  _DAT_14cb4a250 = DAT_14cb49bf0;
  DAT_14cb49bf0 = &DAT_14cb4a240;
  return;
}



// FUNCTION 145d4ecf0 FUN_145d4ecf0 body=210 status=ok
// SIG undefined FUN_145d4ecf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4ecf0(void)

{
  if ((DAT_14cb49d27 & 2) == 0) {
    DAT_14cb49d27 = DAT_14cb49d27 | 2;
    _DAT_14cb49cc8 = L"FWaterVertexFactoryParametersNoSelectionWithIndirectISR";
    _DAT_14cb49ce0 = FUN_146826540;
    _DAT_14cb49ce8 = FUN_146825d77;
    _DAT_14cb49cf0 = FUN_146825fd6;
    _DAT_14cb49cf8 = FUN_1407e02ea;
    _DAT_14cb49d00 = FUN_146826273;
    _DAT_14cb49cd8 = &LAB_1484098d8;
    _DAT_14cb49d18 = 0xffffffff00000030;
    _DAT_14cb49d20 = 4;
    DAT_14cb49d24 = 0;
    _DAT_14cb49d08 = &LAB_1484098ec;
    FUN_145d4edc2();
    FUN_145d4f118();
    FUN_1407e00cc(&DAT_14cb49cc0);
    return;
  }
  return;
}



// FUNCTION 145d4edc2 FUN_145d4edc2 body=121 status=ok
// SIG undefined FUN_145d4edc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4edc2(void)

{
  FUN_145d4ee3c();
  _DAT_14cb4a2e0 = L"QuadTreePositionParameter";
  DAT_14cb4a30a = FUN_140850cc5();
  _DAT_14cb4a2e8 = FUN_140ec6960();
  _DAT_14cb4a2f8 = &LAB_14682652b;
  _DAT_14cb4a300 = &DAT_100000004;
  _DAT_14cb4a308 = 0;
  _DAT_14cb4a2f0 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a2e0;
  return;
}



// FUNCTION 145d4ee3c FUN_145d4ee3c body=121 status=ok
// SIG undefined FUN_145d4ee3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4ee3c(void)

{
  FUN_145d4eeb6();
  _DAT_14cb4a310 = L"LODMorphingEnabledParameter";
  DAT_14cb4a33a = FUN_140850cc5();
  _DAT_14cb4a318 = FUN_140ec6960();
  _DAT_14cb4a328 = &LAB_14682652b;
  _DAT_14cb4a330 = &DAT_10000000a;
  _DAT_14cb4a338 = 0;
  _DAT_14cb4a320 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a310;
  return;
}



// FUNCTION 145d4eeb6 FUN_145d4eeb6 body=121 status=ok
// SIG undefined FUN_145d4eeb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4eeb6(void)

{
  FUN_145d4ef30();
  _DAT_14cb4a340 = L"InstanceDataOffsetsBufferParameter";
  DAT_14cb4a36a = FUN_140850cc5();
  _DAT_14cb4a348 = FUN_140fb78d0();
  _DAT_14cb4a358 = &LAB_14682652b;
  _DAT_14cb4a360 = &DAT_100000010;
  _DAT_14cb4a368 = 0;
  _DAT_14cb4a350 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a340;
  return;
}



// FUNCTION 145d4ef30 FUN_145d4ef30 body=121 status=ok
// SIG undefined FUN_145d4ef30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4ef30(void)

{
  FUN_145d4efaa();
  _DAT_14cb4a370 = L"InstanceData0BufferParameter";
  DAT_14cb4a39a = FUN_140850cc5();
  _DAT_14cb4a378 = FUN_140fb78d0();
  _DAT_14cb4a388 = &LAB_14682652b;
  _DAT_14cb4a390 = &DAT_100000014;
  _DAT_14cb4a398 = 0;
  _DAT_14cb4a380 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a370;
  return;
}



// FUNCTION 145d4efaa FUN_145d4efaa body=121 status=ok
// SIG undefined FUN_145d4efaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4efaa(void)

{
  FUN_145d4f024();
  _DAT_14cb4a3a0 = L"InstanceData1BufferParameter";
  DAT_14cb4a3ca = FUN_140850cc5();
  _DAT_14cb4a3a8 = FUN_140fb78d0();
  _DAT_14cb4a3b8 = &LAB_14682652b;
  _DAT_14cb4a3c0 = &DAT_100000018;
  _DAT_14cb4a3c8 = 0;
  _DAT_14cb4a3b0 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a3a0;
  return;
}



// FUNCTION 145d4f024 FUN_145d4f024 body=121 status=ok
// SIG undefined FUN_145d4f024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4f024(void)

{
  FUN_145d4f09e();
  _DAT_14cb4a3d0 = L"InstanceData2BufferParameter";
  DAT_14cb4a3fa = FUN_140850cc5();
  _DAT_14cb4a3d8 = FUN_140fb78d0();
  _DAT_14cb4a3e8 = &LAB_14682652b;
  _DAT_14cb4a3f0 = &DAT_10000001c;
  _DAT_14cb4a3f8 = 0;
  _DAT_14cb4a3e0 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a3d0;
  return;
}



// FUNCTION 145d4f09e FUN_145d4f09e body=121 status=ok
// SIG undefined FUN_145d4f09e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4f09e(void)

{
  FUN_145d4f194();
  _DAT_14cb4a400 = L"InstanceData3BufferParameter";
  DAT_14cb4a42a = FUN_140850cc5();
  _DAT_14cb4a408 = FUN_140fb78d0();
  _DAT_14cb4a418 = &LAB_14682652b;
  _DAT_14cb4a420 = &DAT_100000020;
  _DAT_14cb4a428 = 0;
  _DAT_14cb4a410 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a400;
  return;
}



// FUNCTION 145d4f118 FUN_145d4f118 body=123 status=ok
// SIG undefined FUN_145d4f118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4f118(void)

{
  _DAT_14cb4a490 = L"BASE";
  DAT_14cb4a4ba = 4;
  _DAT_14cb4a498 = FUN_1412f7d22();
  _DAT_14cb4a4a0 = DAT_14cb49cd0;
  _DAT_14cb4a4a8 = &LAB_14682652b;
  DAT_14cb49cd0 = &DAT_14cb4a490;
  DAT_14cb49d25 = DAT_14cb49d25 + '\x01';
  _DAT_14cb4a4b0 = 0x100000000;
  if (*(char *)(_DAT_14cb4a498 + 100) != '\0') {
    DAT_14cb49d26 = DAT_14cb49d26 + '\x01';
  }
  return;
}



// FUNCTION 145d4f194 FUN_145d4f194 body=216 status=ok
// SIG undefined FUN_145d4f194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4f194(void)

{
  _DAT_14cb4a460 = L"StereoPassInstanceFactorParameter";
  DAT_14cb4a48a = FUN_140850cc5();
  _DAT_14cb4a468 = FUN_140ec6960();
  _DAT_14cb4a478 = &LAB_14682652b;
  _DAT_14cb4a480 = 0x10000002a;
  _DAT_14cb4a488 = 0;
  _DAT_14cb4a470 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a460;
  _DAT_14cb4a430 = L"DrawBucketIndexParameter";
  DAT_14cb4a45a = FUN_140850cc5();
  _DAT_14cb4a438 = FUN_140ec6960();
  _DAT_14cb4a448 = &LAB_14682652b;
  _DAT_14cb4a450 = &DAT_100000024;
  _DAT_14cb4a458 = 0;
  _DAT_14cb4a440 = DAT_14cb49cd0;
  DAT_14cb49cd0 = &DAT_14cb4a430;
  return;
}



// FUNCTION 145d4f26c FUN_145d4f26c body=595 status=ok
// SIG undefined FUN_145d4f26c(void)

void FUN_145d4f26c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_145d4f93e();
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    if (lVar6 != 0) {
      lVar3 = *(longlong *)(lVar6 + 0x158);
      plVar4 = *(longlong **)(lVar6 + 0x160);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        FUN_145d4f88c(lVar3,param_1);
      }
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
    }
    lVar6 = *(longlong *)(param_1 + 0x48);
    local_a9 = 2;
    local_b8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_78);
    local_a8[0] = 0;
    local_80 = 0;
    FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_1447c3578(lVar6 + 0x1d8,&local_78,local_a8);
    fVar9 = (float)FUN_144a7ecd0(&local_78);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar8 = &local_78;
      if (0x18 < local_60) {
        ppppuVar8 = (undefined8 ****)local_78;
      }
      (*pcVar5)(ppppuVar8);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
    FUN_144a5ac3a(local_a8);
    fVar10 = (float)FUN_141236616(param_1);
    *(float *)(param_1 + 0x1a4) = fVar10 + fVar9;
    if (*(char *)(lVar6 + 0x230) == '\x01') {
      local_d0 = lVar6 + 0x234;
      local_c8 = 1;
      local_d8 = 0x19;
      FUN_1461a06de(param_1,&DAT_14cb80ad8,1,fVar9);
    }
    if (0.0 < fVar9) {
      uVar7 = FUN_14889aae0(lVar6);
    }
    else {
      uVar7 = FUN_145d4f604();
    }
    FUN_145d4f4c0(param_1,uVar7);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4f4c0 FUN_145d4f4c0 body=190 status=ok
// SIG undefined FUN_145d4f4c0(void)

void FUN_145d4f4c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x158);
      plVar4 = *(longlong **)(lVar5 + 0x160);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        FUN_14495448a(local_30,L"GbxMomentNodeState_PlayCutscene",*(undefined4 *)(param_1 + 0x1ac));
        FUN_145d4f580(lVar3,param_2,local_30);
      }
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4f580 FUN_145d4f580 body=130 status=ok
// SIG undefined FUN_145d4f580(void)

void FUN_145d4f580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3f2650;
  local_58[0] = FUN_143cdb86c;
  local_30 = param_1;
  local_28 = param_3;
  local_20 = param_2;
  FUN_1457eb61a(param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4f604 FUN_145d4f604 body=306 status=ok
// SIG undefined FUN_145d4f604(void)

void FUN_145d4f604(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x238) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x248);
    if (lVar5 == 0) {
      uVar4 = FUN_145cd7928();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x248) = lVar5;
    }
    if (*(longlong *)(param_1 + 0x250) != 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x240) != 0) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x240));
      }
      *(undefined8 *)(param_1 + 0x250) = uVar4;
      return;
    }
    return;
  }
  lVar3 = FUN_145d4f736();
  lVar5 = *(longlong *)(lVar3 + 0x70);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd7928();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x70) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x78) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x68) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x68));
    }
    *(undefined8 *)(lVar3 + 0x78) = uVar4;
    return;
  }
  return;
}



// FUNCTION 145d4f736 FUN_145d4f736 body=340 status=ok
// SIG undefined FUN_145d4f736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145d4f736(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb80890 == (longlong *)0x0) {
    memset(&DAT_14cb808a8,0,0x90);
    _DAT_14cb808a0 = 0;
    _DAT_14cb808b0 = 0xffffffff;
    _DAT_14cb80898 = &PTR_FUN_14b181a70;
    _DAT_14cb808c0 = 0xf00000d0;
    _DAT_14cb808c8 = 0;
    uRam000000014cb808d0 = 0;
    _DAT_14cb808d8 = 0xf00000d0;
    _DAT_14cb808e0 = 0;
    uRam000000014cb808e8 = 0;
    _DAT_14cb808f0 = 0x4000;
    _DAT_14cb808f8 = 0;
    uRam000000014cb80900 = 0;
    _DAT_14cb80908 = 0;
    uRam000000014cb80910 = 0;
    _DAT_14cb80918 = 0;
    uRam000000014cb80920 = 0;
    _DAT_14cb80924 = 0;
    uRam000000014cb80928 = 0;
    uRam000000014cb8092c = 0;
    DAT_14cb80890 = (longlong *)&DAT_14cb80898;
  }
  plVar1 = DAT_14cb80890;
  lVar3 = FUN_144a7b9b0(DAT_14cb80890 + 1);
  if (lVar3 == 0) {
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_145d4f779;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_moment",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1449e3c20(plVar1);
    if (cVar2 == '\0') goto LAB_145d4f779;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_145d4f779:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4f88c FUN_145d4f88c body=176 status=ok
// SIG undefined FUN_145d4f88c(void)

void FUN_145d4f88c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a7bec8(param_2,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x80) = local_28;
  plVar2 = *(longlong **)(param_1 + 0x88);
  *(longlong **)(param_1 + 0x88) = local_20;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


