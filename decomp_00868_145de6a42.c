// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145de6a42 FUN_145de6a42 body=165 status=ok
// SIG undefined FUN_145de6a42(void)

undefined8 * FUN_145de6a42(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a319be();
  *param_1 = &PTR_FUN_14abeaa60;
  param_1[5] = &PTR_FUN_14abeada0;
  FUN_1400b22c2(&local_28,"Sequence");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de6af4 FUN_145de6af4 body=753 status=ok
// SIG undefined FUN_145de6af4(void)

undefined8 * FUN_145de6af4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af166b0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 4;
  param_1[0xc] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = &DAT_100000004;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = &DAT_100000004;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = &DAT_100000004;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_145de6de6(param_1 + 0x58,&DAT_14cb4d800);
  *(undefined4 *)(param_1 + 0x5e) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5f) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xff000000;
  param_1[0x60] = 0;
  FUN_145de6de6(param_1 + 0x61,&DAT_14cb4d830);
  param_1[0x67] = 0x40c0000041200000;
  param_1[0x68] = 0xff00000041200000;
  param_1[0x69] = 0;
  FUN_145de6de6(param_1 + 0x6a,&DAT_14cb4d860);
  param_1[0x70] = 0x40c0000041200000;
  param_1[0x71] = 0xff00000041200000;
  param_1[0x72] = 0;
  FUN_145de6de6(param_1 + 0x73,&DAT_14cb4d890);
  param_1[0x79] = 0x40c0000040c00000;
  param_1[0x7a] = 0xff00000041200000;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0x400000000;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 1;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  return param_1;
}



// FUNCTION 145de6de6 FUN_145de6de6 body=121 status=ok
// SIG undefined FUN_145de6de6(void)

longlong FUN_145de6de6(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 8 + lVar2);
    _Src = *(void **)(param_2 + lVar2);
    *(int *)(param_1 + 8 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc + lVar2) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + lVar2),iVar1,0);
      memcpy(*(void **)(param_1 + lVar2),_Src,(longlong)iVar1 * 2);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x30);
  return param_1;
}



// FUNCTION 145de6e68 FUN_145de6e68 body=169 status=ok
// SIG undefined FUN_145de6e68(void)

undefined8 * FUN_145de6e68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ead26(param_1,uVar1);
  *param_1 = &PTR_FUN_14b5f27f0;
  param_1[5] = &PTR_LAB_14b5f2dd0;
  param_1[6] = &PTR_LAB_14b5f2e10;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 1;
  FUN_1446ddc76(param_1 + 0x59,"EridiumEncasing",1);
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 145de6f12 FUN_145de6f12 body=45 status=ok
// SIG undefined FUN_145de6f12(void)

undefined8 FUN_145de6f12(undefined8 param_1,int param_2)

{
  FUN_145de6f40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 145de6f40 FUN_145de6f40 body=132 status=ok
// SIG undefined FUN_145de6f40(void)

void FUN_145de6f40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b60aec0;
  FUN_144a2da94(param_1 + 0x53);
  FUN_144a2da94(param_1 + 0x4c);
  FUN_144a2da94(param_1 + 0x45);
  FUN_144a2da94(param_1 + 0x3e);
  FUN_144a2da94(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145de6fd0 FUN_145de6fd0 body=178 status=ok
// SIG undefined FUN_145de6fd0(void)

undefined8 * FUN_145de6fd0(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bca9640;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13830) {
    FUN_144b3d300(&DAT_14cc13830);
    if (DAT_14cc13830 == -1) {
      FUN_14155d6be();
      atexit((_func_5014 *)&LAB_1444f20a7);
      _Init_thread_footer(&DAT_14cc13830);
    }
  }
  return param_1;
}



// FUNCTION 145de708e FUN_145de708e body=178 status=ok
// SIG undefined FUN_145de708e(void)

undefined8 * FUN_145de708e(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaf0d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13bc0) {
    FUN_144b3d300(&DAT_14cc13bc0);
    if (DAT_14cc13bc0 == -1) {
      FUN_14155d764();
      atexit((_func_5014 *)&LAB_1444f225a);
      _Init_thread_footer(&DAT_14cc13bc0);
    }
  }
  return param_1;
}



// FUNCTION 145de714c FUN_145de714c body=178 status=ok
// SIG undefined FUN_145de714c(void)

undefined8 * FUN_145de714c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14bcaf5b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13bf0) {
    FUN_144b3d300(&DAT_14cc13bf0);
    if (DAT_14cc13bf0 == -1) {
      FUN_14155d80a();
      atexit((_func_5014 *)&LAB_1444f226e);
      _Init_thread_footer(&DAT_14cc13bf0);
    }
  }
  return param_1;
}



// FUNCTION 145de7206 FUN_145de7206 body=181 status=ok
// SIG undefined FUN_145de7206(void)

undefined8 * FUN_145de7206(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140f188b8(param_1,uVar1);
  *param_1 = &PTR_FUN_14be7f280;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc26a28) {
    FUN_144b3d300(&DAT_14cc26a28);
    if (DAT_14cc26a28 == -1) {
      FUN_14155d8b0();
      atexit((_func_5014 *)&LAB_144620742);
      _Init_thread_footer(&DAT_14cc26a28);
    }
  }
  return param_1;
}



// FUNCTION 145de72bc FUN_145de72bc body=108 status=ok
// SIG undefined FUN_145de72bc(void)

undefined4 * FUN_145de72bc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145de732a();
  FUN_145de732a();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9c5f38,0);
  FUN_145de732a();
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



// FUNCTION 145de732a FUN_145de732a body=292 status=ok
// SIG undefined FUN_145de732a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145de732a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5fe0) {
    FUN_144b3d300(&DAT_14c9c5fe0);
    if (DAT_14c9c5fe0 == -1) {
      FUN_145de7598();
      FUN_145de744e();
      FUN_140db5666(&DAT_14c9c5f38,0,&DAT_14c9c5ed0,L"FGeometryAwareUpsamplePS",
                    L"/Engine/Private/DistanceFieldLightingPost.usf",L"GeometryAwareUpsamplePS",3,1,
                    FUN_14714eb08,FUN_14714eaa8,FUN_1462bdbe0,&LAB_14714eaa4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c81f0);
      _DAT_14c9c5f38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd5f0c);
      _Init_thread_footer(&DAT_14c9c5fe0);
    }
  }
  return &DAT_14c9c5f38;
}



// FUNCTION 145de744e FUN_145de744e body=205 status=ok
// SIG undefined FUN_145de744e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de744e(void)

{
  if ((DAT_14c9c5f37 & 2) == 0) {
    DAT_14c9c5f37 = DAT_14c9c5f37 | 2;
    _DAT_14c9c5ed8 = L"FGeometryAwareUpsamplePS";
    _DAT_14c9c5ef0 = FUN_146826540;
    _DAT_14c9c5ef8 = FUN_146825d77;
    _DAT_14c9c5f00 = FUN_146825fd6;
    _DAT_14c9c5f08 = FUN_1407e02ea;
    _DAT_14c9c5f10 = FUN_146826273;
    _DAT_14c9c5ee8 = FUN_14714ea76;
    _DAT_14c9c5f28 = 0xffffffff000000e0;
    _DAT_14c9c5f30 = 8;
    DAT_14c9c5f34 = 0;
    _DAT_14c9c5f18 = &LAB_14714eaa0;
    FUN_145de751c();
    FUN_1407e00cc(&DAT_14c9c5ed0);
    return;
  }
  return;
}



// FUNCTION 145de751c FUN_145de751c body=123 status=ok
// SIG undefined FUN_145de751c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de751c(void)

{
  _DAT_14c9c9450 = L"BASE";
  DAT_14c9c947a = 4;
  _DAT_14c9c9458 = FUN_140b35ae4();
  _DAT_14c9c9460 = DAT_14c9c5ee0;
  _DAT_14c9c9468 = &LAB_14682652b;
  DAT_14c9c5ee0 = &DAT_14c9c9450;
  DAT_14c9c5f35 = DAT_14c9c5f35 + '\x01';
  _DAT_14c9c9470 = 0x100000000;
  if (*(char *)(_DAT_14c9c9458 + 100) != '\0') {
    DAT_14c9c5f36 = DAT_14c9c5f36 + '\x01';
  }
  return;
}



// FUNCTION 145de7598 FUN_145de7598 body=261 status=ok
// SIG undefined FUN_145de7598(void)

void FUN_145de7598(void)

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
              0x110) < DAT_14c9c8270) {
    FUN_144b3d300(&DAT_14c9c8270);
    if (DAT_14c9c8270 == -1) {
      FUN_145de769e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c81f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7652);
      _Init_thread_footer(&DAT_14c9c8270);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de769e FUN_145de769e body=226 status=ok
// SIG undefined FUN_145de769e(void)

longlong * FUN_145de769e(longlong *param_1)

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
  pcVar13 = FUN_1462beae2;
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



// FUNCTION 145de7786 FUN_145de7786 body=138 status=ok
// SIG undefined FUN_145de7786(void)

undefined1 * FUN_145de7786(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145de7782;
}



// FUNCTION 145de7810 FUN_145de7810 body=146 status=ok
// SIG undefined FUN_145de7810(void)

code * FUN_145de7810(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd725a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GeometryAwareUpsampleParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGeometryAwareUpsampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c80e0;
  return FUN_1462beb6a;
}



// FUNCTION 145de78a2 FUN_145de78a2 body=330 status=ok
// SIG undefined FUN_145de78a2(void)

void FUN_145de78a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_145de79ee(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de79ee FUN_145de79ee body=155 status=ok
// SIG undefined FUN_145de79ee(void)

void FUN_145de79ee(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  local_18 = 4;
  FUN_1414d6f82(local_38,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de7a8a FUN_145de7a8a body=83 status=ok
// SIG undefined FUN_145de7a8a(void)

void FUN_145de7a8a(longlong param_1)

{
  FUN_145de7add(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_141478002(param_1 + 0x18);
  FUN_1449db362(param_1 + 8);
  return;
}



// FUNCTION 145de7add FUN_145de7add body=50 status=ok
// SIG undefined FUN_145de7add(void)

void FUN_145de7add(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140d5fbf2(param_1 + 0x60);
    FUN_141478002(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 145de7b10 FUN_145de7b10 body=79 status=ok
// SIG undefined FUN_145de7b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de7b10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b631de();
  if (DAT_14c998098 != 0) {
    FUN_14480f766(uVar1);
  }
  FUN_145de7b60();
  _DAT_14c998058 = 0;
  if (DAT_14c998050 != 0) {
    FUN_1400020a8();
  }
  FUN_145de7b96(&DAT_14c998010);
  return;
}



// FUNCTION 145de7b60 FUN_145de7b60 body=54 status=ok
// SIG undefined FUN_145de7b60(void)

void FUN_145de7b60(void)

{
  FUN_145de7c50();
  if (DAT_14c998080 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c998060 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de7b96 FUN_145de7b96 body=55 status=ok
// SIG undefined FUN_145de7b96(void)

void FUN_145de7b96(longlong *param_1)

{
  FUN_145de7bce(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de7bce FUN_145de7bce body=129 status=ok
// SIG undefined FUN_145de7bce(void)

void FUN_145de7bce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145de7c50 FUN_145de7c50 body=392 status=ok
// SIG undefined FUN_145de7c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de7c50(void)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c998070;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c998088 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c998060;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60 + (longlong)iStack_44 * 0x68;
      FUN_140c7042a(lVar1 + 0x28);
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  _DAT_14c998068 = 0;
  if (DAT_14c99806c != 0) {
    FUN_14059f004(&DAT_14c998060,0);
  }
  _DAT_14c998090 = 0xffffffff;
  DAT_14c998088 = 0;
  if (0x80 < DAT_14c99808c) {
    DAT_14c99808c = 0x80;
    FUN_1446efbd8(&DAT_14c998070,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de7dda FUN_145de7dda body=140 status=ok
// SIG undefined FUN_145de7dda(void)

undefined1 * FUN_145de7dda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145de7e66();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DenoiserParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionDenoiserParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x327;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6bf0;
  return &LAB_1471f92dc;
}



// FUNCTION 145de7e66 FUN_145de7e66 body=261 status=ok
// SIG undefined FUN_145de7e66(void)

void FUN_145de7e66(void)

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
              0x110) < DAT_14c9f6c70) {
    FUN_144b3d300(&DAT_14c9f6c70);
    if (DAT_14c9f6c70 == -1) {
      FUN_145de7f6c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenReflectionDenoiserParameters";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x315;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6bf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595a9);
      _Init_thread_footer(&DAT_14c9f6c70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de7f6c FUN_145de7f6c body=226 status=ok
// SIG undefined FUN_145de7f6c(void)

longlong * FUN_145de7f6c(longlong *param_1)

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
  pcVar13 = FUN_1462de6f4;
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



// FUNCTION 145de8050 FUN_145de8050 body=144 status=ok
// SIG undefined FUN_145de8050(void)

code * FUN_145de8050(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTexturesStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000318;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462de92c;
}



// FUNCTION 145de80e0 FUN_145de80e0 body=146 status=ok
// SIG undefined FUN_145de80e0(void)

code * FUN_145de80e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7627c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrontLayerTranslucencyGBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenFrontLayerTranslucencyGBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000319;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6948;
  return FUN_145de8050;
}



// FUNCTION 145de8172 FUN_145de8172 body=146 status=ok
// SIG undefined FUN_145de8172(void)

code * FUN_145de8172(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c0149c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTileParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenReflectionTileParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000031c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f66a0;
  return FUN_1462de80e;
}



// FUNCTION 145de8204 FUN_145de8204 body=122 status=ok
// SIG undefined FUN_145de8204(void)

void FUN_145de8204(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145de8280(param_1,iVar1);
    }
    FUN_14155d955((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147cd575a(param_1,param_2,iVar1 - param_2);
    FUN_147cd57bc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145de8280 FUN_145de8280 body=147 status=ok
// SIG undefined FUN_145de8280(void)

void FUN_145de8280(longlong param_1,int param_2)

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



// FUNCTION 145de831c FUN_145de831c body=255 status=ok
// SIG undefined FUN_145de831c(void)

undefined8 * FUN_145de831c(undefined8 *param_1)

{
  FUN_145de841c();
  *param_1 = &PTR_FUN_14af027b0;
  param_1[5] = &PTR_FUN_14af02a60;
  param_1[6] = &PTR_FUN_14af02a80;
  param_1[7] = &PTR_FUN_14af02aa0;
  param_1[0x27] = 0;
  FUN_1411b354a(param_1 + 0x28,0,0,0,0);
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3ff00000;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0x3ff0000000000000;
  param_1[0x8c] = 0x3ff0000000000000;
  param_1[0x8d] = 0;
  return param_1;
}



// FUNCTION 145de841c FUN_145de841c body=92 status=ok
// SIG undefined FUN_145de841c(void)

undefined8 * FUN_145de841c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14af13580;
  param_1[5] = &PTR_LAB_14af13830;
  param_1[6] = &PTR_LAB_14af13850;
  param_1[7] = &PTR_LAB_14af13870;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1457e37e0(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 145de8488 FUN_145de8488 body=70 status=ok
// SIG undefined FUN_145de8488(void)

void FUN_145de8488(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  if (DAT_14c9a7c68 != 0) {
    FUN_145de84ce(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145de84ce FUN_145de84ce body=417 status=ok
// SIG undefined FUN_145de84ce(void)

void FUN_145de84ce(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_145de8890();
  if (((lVar5 != 0) && ((byte *)*param_2 != (byte *)0x0)) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    plVar6 = (longlong *)FUN_1412446d2(param_2);
    plVar1 = plVar6 + 3;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)plVar6[6] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar8 = (int)plVar6[6];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar4 = local_78._4_4_;
    local_90 = plVar6;
    if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, uStack_60 != plVar1)) {
      do {
        local_78 = uVar3;
        lVar9 = (longlong)iVar4 * 0x40 + *local_90;
        FUN_1447325ac(lVar9,&local_68,1);
        lVar7 = FUN_144a8e29b(uVar2,local_68,3);
        if (lVar7 != 0) {
          local_a0 = 0;
          local_a8 = 0;
          FUN_1446e0fc6(lVar9 + 0x28,lVar5,lVar7,0xffffffff);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar6 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar8));
    }
    FUN_145de8670(lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de8670 FUN_145de8670 body=276 status=ok
// SIG undefined FUN_145de8670(void)

void FUN_145de8670(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2c0))();
  uVar1 = param_1[2];
  if (uVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(uVar1);
  }
  local_20 = uVar1;
  if ((~DAT_14c950c29 & 1) == 0 && uVar1 != 0) {
    FUN_14689c22e(uVar1);
  }
  if ((uVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_145de8786(uVar2 >> 0x10 ^ uVar2,&local_20);
  lVar4 = (longlong)iVar3 * 0x28 + DAT_14c967bb8;
  if (lVar4 != 0 && iVar3 != -1) {
    FUN_145de8dcc(lVar4 + 8,param_1);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de8786 FUN_145de8786 body=266 status=ok
// SIG undefined FUN_145de8786(void)

int FUN_145de8786(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_14c967bc0 != DAT_14c967bec) {
    puVar3 = &DAT_14c967bf0;
    if (DAT_14c967bf8 != (undefined *)0x0) {
      puVar3 = DAT_14c967bf8;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c967c00 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14c967bb8 + 0x20 + (longlong)iVar1 * 0x28)) {
      lVar4 = *param_2;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar4);
      }
      lVar5 = *(longlong *)(DAT_14c967bb8 + (longlong)iVar1 * 0x28);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_145de8849;
LAB_145de8820:
        lVar5 = 0;
      }
      else {
        FUN_14689c22e(lVar5);
LAB_145de8849:
        lVar2 = FUN_145956fe8();
        if (((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_145de8820;
      }
      if (((lVar4 == 0) || (lVar2 = FUN_145956fe8(), lVar2 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 145de8890 FUN_145de8890 body=291 status=ok
// SIG undefined FUN_145de8890(void)

longlong FUN_145de8890(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar4 = param_1 + 0x18;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_145956fe8(), lVar4 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    if (*(longlong *)(lVar3 + 0x110) == 0) {
      FUN_140aa6c08(lVar3);
      return *(longlong *)(lVar3 + 0x110);
    }
    return *(longlong *)(lVar3 + 0x110);
  }
  return 0;
}



// FUNCTION 145de89b4 FUN_145de89b4 body=205 status=ok
// SIG undefined FUN_145de89b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de89b4(void)

{
  if ((DAT_14ca5c3bf & 2) == 0) {
    DAT_14ca5c3bf = DAT_14ca5c3bf | 2;
    _DAT_14ca5c360 = L"FWaterTileVS";
    _DAT_14ca5c378 = FUN_146826540;
    _DAT_14ca5c380 = FUN_146825d77;
    _DAT_14ca5c388 = FUN_146825fd6;
    _DAT_14ca5c390 = FUN_1407e02ea;
    _DAT_14ca5c398 = FUN_146826273;
    _DAT_14ca5c370 = FUN_14731578a;
    _DAT_14ca5c3b0 = 0xffffffff000000e0;
    _DAT_14ca5c3b8 = 8;
    DAT_14ca5c3bc = 0;
    _DAT_14ca5c3a0 = &LAB_1473157b4;
    FUN_145de8a82();
    FUN_1407e00cc(&DAT_14ca5c358);
    return;
  }
  return;
}



// FUNCTION 145de8a82 FUN_145de8a82 body=123 status=ok
// SIG undefined FUN_145de8a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145de8a82(void)

{
  _DAT_14ca5f740 = L"BASE";
  DAT_14ca5f76a = 4;
  _DAT_14ca5f748 = FUN_140b35ae4();
  _DAT_14ca5f750 = DAT_14ca5c368;
  _DAT_14ca5f758 = &LAB_14682652b;
  DAT_14ca5c368 = &DAT_14ca5f740;
  DAT_14ca5c3bd = DAT_14ca5c3bd + '\x01';
  _DAT_14ca5f760 = 0x100000000;
  if (*(char *)(_DAT_14ca5f748 + 100) != '\0') {
    DAT_14ca5c3be = DAT_14ca5c3be + '\x01';
  }
  return;
}



// FUNCTION 145de8afe FUN_145de8afe body=226 status=ok
// SIG undefined FUN_145de8afe(void)

longlong * FUN_145de8afe(longlong *param_1)

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
  pcVar13 = FUN_14630b090;
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



// FUNCTION 145de8be6 FUN_145de8be6 body=138 status=ok
// SIG undefined FUN_145de8be6(void)

undefined1 * FUN_145de8be6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x38;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145de8be2;
}



// FUNCTION 145de8c70 FUN_145de8c70 body=76 status=ok
// SIG undefined FUN_145de8c70(void)

void FUN_145de8c70(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145de8cbe();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    FUN_145de8e6e(local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de8cbe FUN_145de8cbe body=130 status=ok
// SIG undefined FUN_145de8cbe(void)

void FUN_145de8cbe(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_144a63f30();
  cVar2 = FUN_144a792c0(param_1,0x30);
  if ((cVar2 == '\0') || (lVar4 = *(longlong *)(param_1 + 0x10), (*(byte *)(lVar4 + 0xd4) & 1) != 0)
     ) {
    return;
  }
  if ((param_1 != 0) && (lVar3 = FUN_145956fe8(), lVar4 == lVar3)) {
    return;
  }
  iVar1 = DAT_14c967c28;
  lVar4 = (longlong)(int)DAT_14c967c28;
  DAT_14c967c28 = DAT_14c967c28 + 1;
  if (DAT_14c967c2c < DAT_14c967c28) {
    FUN_145de8d40(iVar1);
  }
  *(longlong *)(DAT_14c967c20 + lVar4 * 8) = param_1;
  FUN_145de8dcc(&DAT_14c967c08,param_1);
  return;
}



// FUNCTION 145de8d40 FUN_145de8d40 body=140 status=ok
// SIG undefined FUN_145de8d40(void)

void FUN_145de8d40(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c967c28;
  if (param_1 <= (int)DAT_14c967c28) {
    if (DAT_14c967c2c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c967c28) {
        uVar2 = DAT_14c967c28;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c967c28 + ((ulonglong)((longlong)(int)DAT_14c967c28 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14c967c2c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c967c20,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145de8dcc FUN_145de8dcc body=162 status=ok
// SIG undefined FUN_145de8dcc(void)

void FUN_145de8dcc(longlong *param_1,undefined8 param_2)

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
        goto LAB_145de8e59;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145de8e59:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145de8e6e FUN_145de8e6e body=201 status=ok
// SIG undefined FUN_145de8e6e(void)

undefined8 FUN_145de8e6e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a1855d0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = &LAB_14584ebe4;
  FUN_1448b6402(&DAT_14c867390,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de8f38 FUN_145de8f38 body=296 status=ok
// SIG undefined FUN_145de8f38(void)

void FUN_145de8f38(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *_Str;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38,L"SpectatorOnly=1");
  _Str = L"";
  if (local_30 != 0) {
    _Str = local_38;
  }
  if (_Str == (wchar_t *)0x0) {
LAB_145de8fbb:
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    sVar2 = wcslen(_Str);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar1 = FUN_1447ee042(param_3,_Str,sVar2 & 0xffffffff,1);
    if (iVar1 == -1) goto LAB_145de8fbb;
    lVar3 = param_1[0x7b];
    bVar5 = true;
    if ((((lVar3 != 0) && (lVar4 = FUN_144a75eb4(), lVar4 != 0)) &&
        (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      bVar5 = param_1[0x7b] == 0;
    }
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = 0x790;
    if (!bVar5) goto LAB_145de8fca;
  }
  lVar3 = 0x780;
LAB_145de8fca:
  (**(code **)(*param_1 + lVar3))(param_1,param_2,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145de9062 FUN_145de9062 body=132 status=ok
// SIG undefined FUN_145de9062(void)

void FUN_145de9062(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1[0x76];
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = &local_30;
  (**(code **)(*param_1 + 0x830))(param_1,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de90e8 FUN_145de90e8 body=458 status=ok
// SIG undefined FUN_145de90e8(void)

longlong FUN_145de90e8(longlong param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                      longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined1 local_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = 0x100;
  local_95 = 0;
  lVar2 = 0;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  uStack_b0 = *(undefined8 *)(param_1 + 0x1b0);
  local_94 = 0x48;
  local_96 = 4;
  uVar1 = FUN_1447210f0();
  lVar3 = *param_5;
  if (lVar3 != 0) {
    lVar2 = FUN_144a75eb4();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_5;
    }
  }
  local_138 = &local_c8;
  lVar3 = FUN_141137228(uVar1,lVar2,param_3,param_4);
  if (lVar3 != 0) {
    if (param_2 == 1) {
      *(undefined1 *)(lVar3 + 0x7ac) = 1;
    }
    FUN_144a7484c(param_4,local_128);
    local_108 = *param_3;
    uStack_104 = param_3[1];
    uStack_100 = (undefined4)*(undefined8 *)(param_3 + 2);
    uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
    local_f8 = *(undefined8 *)(param_3 + 4);
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    local_138 = (undefined8 *)CONCAT71(local_138._1_7_,1);
    FUN_14113775c(lVar3,local_128,0,0);
  }
  if (local_88 != 0) {
    plVar4 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar4 = local_68;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de92b4 FUN_145de92b4 body=87 status=ok
// SIG undefined FUN_145de92b4(void)

void FUN_145de92b4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_145de930c(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 145de930c FUN_145de930c body=90 status=ok
// SIG undefined FUN_145de930c(void)

void FUN_145de930c(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 != 0 || *param_1 != 0) {
    if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afa99(0x20,(longlong)(int)param_3,param_4);
    }
    lVar1 = FUN_1456c5272((char)param_1[1],*param_1,(ulonglong)param_3 * param_4,0);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 145de9368 FUN_145de9368 body=45 status=ok
// SIG undefined FUN_145de9368(void)

longlong FUN_145de9368(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145de9396(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145de9396 FUN_145de9396 body=445 status=ok
// SIG undefined FUN_145de9396(void)

void FUN_145de9396(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_14a597a20;
  param_1[2] = &PTR_FUN_14a597aa0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar5 = param_1[0x25];
  if (lVar5 != 0) {
    FUN_14781409a(lVar5);
    FUN_1400020a8(lVar5);
  }
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x24] + 0x38))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  plVar6 = (longlong *)param_1[0x1e];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_1[0x1c];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_1[0x1a];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (param_1[0x13] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x13] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x12] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x11] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x11] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c04d8(param_1 + 2);
  FUN_145de9554(param_1);
  return;
}



// FUNCTION 145de9554 FUN_145de9554 body=44 status=ok
// SIG undefined FUN_145de9554(void)

void FUN_145de9554(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14aadd7d0;
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 145de958c FUN_145de958c body=180 status=ok
// SIG undefined FUN_145de958c(void)

undefined8 * FUN_145de958c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a686190;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebbc0) {
    FUN_144b3d300(&DAT_14caebbc0);
    if (DAT_14caebbc0 == -1) {
      FUN_14155dbd0();
      atexit((_func_5014 *)&LAB_14356efcd);
      _Init_thread_footer(&DAT_14caebbc0);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  return param_1;
}



// FUNCTION 145de964c FUN_145de964c body=180 status=ok
// SIG undefined FUN_145de964c(void)

undefined8 * FUN_145de964c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a686640;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebbd8) {
    FUN_144b3d300(&DAT_14caebbd8);
    if (DAT_14caebbd8 == -1) {
      FUN_14155dc76();
      atexit((_func_5014 *)&LAB_14356efe1);
      _Init_thread_footer(&DAT_14caebbd8);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xd9) = 5;
  return param_1;
}



// FUNCTION 145de970c FUN_145de970c body=180 status=ok
// SIG undefined FUN_145de970c(void)

undefined8 * FUN_145de970c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a686b00;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebbf0) {
    FUN_144b3d300(&DAT_14caebbf0);
    if (DAT_14caebbf0 == -1) {
      FUN_14155dd1c();
      atexit((_func_5014 *)&LAB_14356eff5);
      _Init_thread_footer(&DAT_14caebbf0);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  return param_1;
}



// FUNCTION 145de97cc FUN_145de97cc body=166 status=ok
// SIG undefined FUN_145de97cc(void)

undefined8 * FUN_145de97cc(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a8bd240;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de987e FUN_145de987e body=166 status=ok
// SIG undefined FUN_145de987e(void)

undefined8 * FUN_145de987e(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"Sprite",1);
  FUN_140486538(param_2,local_28);
  FUN_14048646a(param_2 + 0x20,local_28,0,0);
  FUN_1405ba846(param_1,param_2);
  *param_1 = &PTR_FUN_14ab215c0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de9930 FUN_145de9930 body=323 status=ok
// SIG undefined FUN_145de9930(void)

undefined8 * FUN_145de9930(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Sprite",1);
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,0,0);
  FUN_1446f470e(&local_38,L"ArrowComponent0",1);
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,0,0);
  FUN_140c3c140(param_1,param_2);
  *param_1 = &PTR_FUN_14adf9a40;
  param_1[0x74] = &PTR_LAB_14adfa080;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x76;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x82) = 0x42a00000;
  *(byte *)((longlong)param_1 + 0x414) = *(byte *)((longlong)param_1 + 0x414) & 0xfc | 2;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  FUN_145de9a74(param_1,1);
  lVar1 = param_1[0x72];
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x2d5) = *(byte *)(lVar1 + 0x2d5) | 4;
    *(byte *)(lVar1 + 0x9e) = *(byte *)(lVar1 + 0x9e) & 0xf7;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145de9a74 FUN_145de9a74 body=21 status=ok
// SIG undefined FUN_145de9a74(void)

void FUN_145de9a74(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x398) = *(uint *)(param_1 + 0x398) & 0xfffffffe | (uint)param_2;
  return;
}



// FUNCTION 145de9a92 FUN_145de9a92 body=170 status=ok
// SIG undefined FUN_145de9a92(void)

undefined8 * FUN_145de9a92(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af0beb0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1411b354a(param_1 + 0x17,0,0,0,0);
  FUN_1457e37e0(param_1 + 0x5c);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3ff00000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3ff0000000000000;
  param_1[0x7f] = 0x3ff0000000000000;
  param_1[0x80] = 0x3ff0000000000000;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 145de9b48 FUN_145de9b48 body=167 status=ok
// SIG undefined FUN_145de9b48(void)

undefined8 * FUN_145de9b48(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_145cb68e0();
  *param_1 = &PTR_FUN_14b277480;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x77] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x75] = DAT_14c8464e0;
  param_1[0x76] = uVar1;
  param_1[0x7a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x78] = DAT_14c8464e0;
  param_1[0x79] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x7b] = DAT_14c8464e0;
  param_1[0x7c] = uVar1;
  param_1[0x7d] = DAT_14c8464f0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  return param_1;
}



// FUNCTION 145de9bf0 FUN_145de9bf0 body=178 status=ok
// SIG undefined FUN_145de9bf0(void)

void FUN_145de9bf0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  *param_2 = &PTR_FUN_14b28b490;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0xf00000d0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0x3f800000;
  return;
}



// FUNCTION 145de9ca4 FUN_145de9ca4 body=58 status=ok
// SIG undefined FUN_145de9ca4(void)

undefined1 FUN_145de9ca4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_14155ddc2(lVar1);
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_140457ffc(*(longlong *)(lVar1 + 8) + 0x28,lVar1);
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined1 *)(lVar1 + 0x31) = 0;
  return 1;
}



// FUNCTION 145de9cde FUN_145de9cde body=148 status=ok
// SIG undefined FUN_145de9cde(void)

bool FUN_145de9cde(longlong param_1)

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



// FUNCTION 145de9d92 FUN_145de9d92 body=68 status=ok
// SIG undefined FUN_145de9d92(void)

void FUN_145de9d92(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x220);
  memset(_Dst,0,0x220);
  FUN_145de9dd6(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145de9dd6 FUN_145de9dd6 body=110 status=ok
// SIG undefined FUN_145de9dd6(void)

undefined8 * FUN_145de9dd6(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8adad0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_14124e07a(param_1 + 0x20);
  FUN_1413f03d2(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
  return param_1;
}



// FUNCTION 145de9e44 FUN_145de9e44 body=209 status=ok
// SIG undefined FUN_145de9e44(void)

void FUN_145de9e44(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        (**(code **)(*plVar4 + 0xc0))(plVar4,lVar3,1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_145de9f16(param_1 + 8);
  }
  lVar2 = DAT_14cbf65b8;
  if (DAT_14cbf65b8 != 0) {
    FUN_145de9f46(DAT_14cbf65b8);
    thunk_FUN_1400020a8(lVar2,0x50);
  }
  DAT_14cbf65b8 = 0;
  plVar4 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x000145de9f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,DAT_14cbf65a0,param_1 + 0x20,*(code **)(*plVar4 + 0x30));
  return;
}



// FUNCTION 145de9f16 FUN_145de9f16 body=48 status=ok
// SIG undefined FUN_145de9f16(void)

void FUN_145de9f16(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145de9f46 FUN_145de9f46 body=99 status=ok
// SIG undefined FUN_145de9f46(void)

void FUN_145de9f46(longlong *param_1)

{
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145de9fb2 FUN_145de9fb2 body=169 status=ok
// SIG undefined FUN_145de9fb2(void)

undefined8 * FUN_145de9fb2(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc34cd0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"FrameRate");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_140056680(local_40,L"AnimationTrackUids");
  FUN_1410835a0(param_1 + 0xe,param_1 + 5,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dea064 FUN_145dea064 body=170 status=ok
// SIG undefined FUN_145dea064(void)

undefined8 * FUN_145dea064(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc73a20;
  puVar2 = (undefined8 *)FUN_145a9bbfa();
  param_1[0x2a] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"SkeletalMeshUid");
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 145dea10e FUN_145dea10e body=205 status=ok
// SIG undefined FUN_145dea10e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dea10e(void)

{
  if ((DAT_14c9ec727 & 2) == 0) {
    DAT_14c9ec727 = DAT_14c9ec727 | 2;
    _DAT_14c9ec6c8 = L"FLocalFogVolumeTiledRenderVS";
    _DAT_14c9ec6e0 = FUN_146826540;
    _DAT_14c9ec6e8 = FUN_146825d77;
    _DAT_14c9ec6f0 = FUN_146825fd6;
    _DAT_14c9ec6f8 = FUN_1407e02ea;
    _DAT_14c9ec700 = FUN_146826273;
    _DAT_14c9ec6d8 = FUN_1471dc424;
    _DAT_14c9ec718 = 0xffffffff000000e0;
    _DAT_14c9ec720 = 8;
    DAT_14c9ec724 = 0;
    _DAT_14c9ec708 = &LAB_1471dc44e;
    FUN_145dea1dc();
    FUN_1407e00cc(&DAT_14c9ec6c0);
    return;
  }
  return;
}



// FUNCTION 145dea1dc FUN_145dea1dc body=123 status=ok
// SIG undefined FUN_145dea1dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dea1dc(void)

{
  _DAT_14c9f15f0 = L"BASE";
  DAT_14c9f161a = 4;
  _DAT_14c9f15f8 = FUN_140b35ae4();
  _DAT_14c9f1600 = DAT_14c9ec6d0;
  _DAT_14c9f1608 = &LAB_14682652b;
  DAT_14c9ec6d0 = &DAT_14c9f15f0;
  DAT_14c9ec725 = DAT_14c9ec725 + '\x01';
  _DAT_14c9f1610 = 0x100000000;
  if (*(char *)(_DAT_14c9f15f8 + 100) != '\0') {
    DAT_14c9ec726 = DAT_14c9ec726 + '\x01';
  }
  return;
}



// FUNCTION 145dea258 FUN_145dea258 body=226 status=ok
// SIG undefined FUN_145dea258(void)

longlong * FUN_145dea258(longlong *param_1)

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
  pcVar13 = FUN_1462d79ee;
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



// FUNCTION 145dea340 FUN_145dea340 body=138 status=ok
// SIG undefined FUN_145dea340(void)

code * FUN_145dea340(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000029f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d7a76;
}



// FUNCTION 145dea3ca FUN_145dea3ca body=138 status=ok
// SIG undefined FUN_145dea3ca(void)

undefined1 * FUN_145dea3ca(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x29d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dea33c;
}



// FUNCTION 145dea454 FUN_145dea454 body=146 status=ok
// SIG undefined FUN_145dea454(void)

void FUN_145dea454(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x50);
  uVar5 = 0;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      lVar2 = *plVar7;
      if (*plVar7 != 0) {
        while( true ) {
          do {
            lVar4 = lVar2;
            lVar2 = 0;
          } while (lVar4 == 0);
          plVar1 = *(longlong **)(lVar4 + 0x70);
          cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
          if (cVar3 != '\0') break;
          lVar2 = *plVar7;
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    plVar7 = *(longlong **)(param_1 + 0x50);
  }
  FUN_145dea4e6(plVar7,uVar5);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    return;
  }
  FUN_148852262(param_1 + 0x50);
  return;
}



// FUNCTION 145dea4e6 FUN_145dea4e6 body=77 status=ok
// SIG undefined FUN_145dea4e6(void)

void FUN_145dea4e6(longlong param_1,int param_2)

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



// FUNCTION 145dea53e FUN_145dea53e body=180 status=ok
// SIG undefined FUN_145dea53e(void)

undefined8 * FUN_145dea53e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a66a540;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb040) {
    FUN_144b3d300(&DAT_14caeb040);
    if (DAT_14caeb040 == -1) {
      FUN_14155e060();
      atexit((_func_5014 *)&LAB_14356dc23);
      _Init_thread_footer(&DAT_14caeb040);
    }
  }
  return param_1;
}



// FUNCTION 145dea5f2 FUN_145dea5f2 body=40 status=ok
// SIG undefined FUN_145dea5f2(void)

undefined8 FUN_145dea5f2(undefined8 param_1,int param_2)

{
  FUN_145dea61a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dea61a FUN_145dea61a body=609 status=ok
// SIG undefined FUN_145dea61a(void)

void FUN_145dea61a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bb66560;
  param_1[5] = &PTR_FUN_14bb66f90;
  param_1[6] = &PTR_LAB_14bb66fd0;
  param_1[0x55] = &PTR_FUN_14bb67020;
  param_1[0x56] = &PTR_FUN_14bb670a0;
  param_1[0x57] = &PTR_FUN_14bb670b0;
  plVar3 = (longlong *)param_1[0xef];
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
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe4],*(undefined4 *)(param_1 + 0xe5));
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  FUN_145dea8be(param_1 + 0xda);
  lVar4 = param_1[0xd9];
  if (lVar4 != 0) {
    FUN_1447166b4(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_145dea87b(param_1[0xd3],*(undefined4 *)(param_1 + 0xd4));
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  FUN_145dea87b(param_1[0xd1],*(undefined4 *)(param_1 + 0xd2));
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145dea87b FUN_145dea87b body=66 status=ok
// SIG undefined FUN_145dea87b(void)

void FUN_145dea87b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145dea8be FUN_145dea8be body=55 status=ok
// SIG undefined FUN_145dea8be(void)

void FUN_145dea8be(longlong *param_1)

{
  FUN_145dea8f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dea8f6 FUN_145dea8f6 body=123 status=ok
// SIG undefined FUN_145dea8f6(void)

void FUN_145dea8f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145dea972 FUN_145dea972 body=144 status=ok
// SIG undefined FUN_145dea972(void)

code * FUN_145dea972(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14155e106();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"WorkingColorSpace";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FWorkingColorSpaceShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147290fce;
}



// FUNCTION 145deaa02 FUN_145deaa02 body=226 status=ok
// SIG undefined FUN_145deaa02(void)

longlong * FUN_145deaa02(longlong *param_1)

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
  pcVar13 = FUN_1463fe71e;
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



// FUNCTION 145deaaea FUN_145deaaea body=132 status=ok
// SIG undefined FUN_145deaaea(void)

undefined1 * FUN_145deaaea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToXYZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145deaae6;
}



// FUNCTION 145deab6e FUN_145deab6e body=138 status=ok
// SIG undefined FUN_145deab6e(void)

code * FUN_145deab6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToAP1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fe7a6;
}



// FUNCTION 145deac02 FUN_145deac02 body=125 status=ok
// SIG undefined FUN_145deac02(void)

void FUN_145deac02(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99d190;
  param_1[4] = &PTR_FUN_14b99d1d0;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99d1e0;
  param_1[4] = &PTR_LAB_14b99d220;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145deac8a FUN_145deac8a body=125 status=ok
// SIG undefined FUN_145deac8a(void)

void FUN_145deac8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99e510;
  param_1[4] = &PTR_FUN_14b99e550;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b42a830;
  param_1[4] = &PTR_LAB_14b42a870;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145dead08 FUN_145dead08 body=246 status=ok
// SIG undefined FUN_145dead08(void)

undefined8 *
FUN_145dead08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145deae00(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deae00 FUN_145deae00 body=423 status=ok
// SIG undefined FUN_145deae00(void)

void FUN_145deae00(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145deaed6:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cced0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145deaed6;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cced0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145deaf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145deafa8 FUN_145deafa8 body=205 status=ok
// SIG undefined FUN_145deafa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145deafa8(void)

{
  if ((DAT_14ca30aa7 & 2) == 0) {
    DAT_14ca30aa7 = DAT_14ca30aa7 | 2;
    _DAT_14ca30a48 = L"FTonemapPS";
    _DAT_14ca30a60 = FUN_146826540;
    _DAT_14ca30a68 = FUN_146825d77;
    _DAT_14ca30a70 = FUN_146825fd6;
    _DAT_14ca30a78 = FUN_1407e02ea;
    _DAT_14ca30a80 = FUN_146826273;
    _DAT_14ca30a58 = FUN_14729a55e;
    _DAT_14ca30a98 = 0xffffffff000000e0;
    _DAT_14ca30aa0 = 8;
    DAT_14ca30aa4 = 0;
    _DAT_14ca30a88 = &LAB_14729a58a;
    FUN_145deb076();
    FUN_1407e00cc(&DAT_14ca30a40);
    return;
  }
  return;
}



// FUNCTION 145deb076 FUN_145deb076 body=123 status=ok
// SIG undefined FUN_145deb076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145deb076(void)

{
  _DAT_14ca34e00 = L"BASE";
  DAT_14ca34e2a = 4;
  _DAT_14ca34e08 = FUN_140b35ae4();
  _DAT_14ca34e10 = DAT_14ca30a50;
  _DAT_14ca34e18 = &LAB_14682652b;
  DAT_14ca30a50 = &DAT_14ca34e00;
  DAT_14ca30aa5 = DAT_14ca30aa5 + '\x01';
  _DAT_14ca34e20 = 0x100000000;
  if (*(char *)(_DAT_14ca34e08 + 100) != '\0') {
    DAT_14ca30aa6 = DAT_14ca30aa6 + '\x01';
  }
  return;
}



// FUNCTION 145deb0f2 FUN_145deb0f2 body=226 status=ok
// SIG undefined FUN_145deb0f2(void)

longlong * FUN_145deb0f2(longlong *param_1)

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
  pcVar13 = FUN_1462ff406;
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



// FUNCTION 145deb1da FUN_145deb1da body=140 status=ok
// SIG undefined FUN_145deb1da(void)

undefined1 * FUN_145deb1da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155e4d8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Tonemap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FTonemapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca34008;
  return &LAB_145deb1d6;
}



// FUNCTION 145deb266 FUN_145deb266 body=138 status=ok
// SIG undefined FUN_145deb266(void)

code * FUN_145deb266(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BloomDirtMaskTint";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000014b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a11e2;
}



// FUNCTION 145deb2f0 FUN_145deb2f0 body=138 status=ok
// SIG undefined FUN_145deb2f0(void)

code * FUN_145deb2f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LUTSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d000000150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0fba;
}



// FUNCTION 145deb37a FUN_145deb37a body=138 status=ok
// SIG undefined FUN_145deb37a(void)

code * FUN_145deb37a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LUTOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3dc00000153;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a0f30;
}



// FUNCTION 145deb404 FUN_145deb404 body=90 status=ok
// SIG undefined FUN_145deb404(void)

void FUN_145deb404(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145deb658(local_18,param_1);
  FUN_145deb748(local_18,param_1);
  FUN_145deb460(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deb460 FUN_145deb460 body=232 status=ok
// SIG undefined FUN_145deb460(void)

undefined8 FUN_145deb460(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14aa6eba0;
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
  *local_30 = &PTR_FUN_14aa6eb30;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1462176f4;
  FUN_145deb54a(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deb54a FUN_145deb54a body=233 status=ok
// SIG undefined FUN_145deb54a(void)

undefined8 * FUN_145deb54a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb103c0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb103c8;
      lVar6 = (longlong)(int)DAT_14cb103c8;
      DAT_14cb103c8 = DAT_14cb103c8 + 1;
      if (DAT_14cb103cc < DAT_14cb103c8) {
        FUN_1447a71f6(&DAT_14cb103c0,uVar3);
      }
      lVar2 = DAT_14cb103c0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb103c0 + lVar6) = 0;
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



// FUNCTION 145deb640 FUN_145deb640 body=24 status=ok
// SIG undefined FUN_145deb640(void)

bool FUN_145deb640(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145deb658 FUN_145deb658 body=239 status=ok
// SIG undefined FUN_145deb658(void)

undefined8 FUN_145deb658(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14aa6ea50;
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
  *local_30 = &PTR_FUN_14aa6e9e0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_146211c08;
  FUN_1412b4546(&DAT_14cb10968,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deb748 FUN_145deb748 body=239 status=ok
// SIG undefined FUN_145deb748(void)

undefined8 FUN_145deb748(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1e1a40;
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
  *local_30 = &PTR_FUN_14aa6eac0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_145ed9efa;
  FUN_141211c46(&DAT_14cb103a8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deb838 FUN_145deb838 body=292 status=ok
// SIG undefined FUN_145deb838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145deb838(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad6a68) {
    FUN_144b3d300(&DAT_14cad6a68);
    if (DAT_14cad6a68 == -1) {
      FUN_145debaa6();
      FUN_145deb95c();
      FUN_140db5666(&DAT_14cad69c0,0,&DAT_14cad6958,L"FUploadHeightFieldToAtlasCS",
                    L"/Engine/Private/HeightFieldAtlasManagement.usf",L"UploadHeightFieldToAtlasCS",
                    5,1,FUN_147a65ed4,FUN_147a65e74,&LAB_14582a304,&LAB_147a65e70,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cad6c10);
      _DAT_14cad69c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1434d0ddc);
      _Init_thread_footer(&DAT_14cad6a68);
    }
  }
  return &DAT_14cad69c0;
}



// FUNCTION 145deb95c FUN_145deb95c body=205 status=ok
// SIG undefined FUN_145deb95c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145deb95c(void)

{
  if ((DAT_14cad69bf & 2) == 0) {
    DAT_14cad69bf = DAT_14cad69bf | 2;
    _DAT_14cad6960 = L"FUploadHeightFieldToAtlasCS";
    _DAT_14cad6978 = FUN_146826540;
    _DAT_14cad6980 = FUN_146825d77;
    _DAT_14cad6988 = FUN_146825fd6;
    _DAT_14cad6990 = FUN_1407e02ea;
    _DAT_14cad6998 = FUN_146826273;
    _DAT_14cad6970 = FUN_147a65e42;
    _DAT_14cad69b0 = 0xffffffff000000e0;
    _DAT_14cad69b8 = 8;
    DAT_14cad69bc = 0;
    _DAT_14cad69a0 = &LAB_147a65e6c;
    FUN_145deba2a();
    FUN_1407e00cc(&DAT_14cad6958);
    return;
  }
  return;
}



// FUNCTION 145deba2a FUN_145deba2a body=123 status=ok
// SIG undefined FUN_145deba2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145deba2a(void)

{
  _DAT_14cad6da8 = L"BASE";
  DAT_14cad6dd2 = 4;
  _DAT_14cad6db0 = FUN_140b35ae4();
  _DAT_14cad6db8 = DAT_14cad6968;
  _DAT_14cad6dc0 = &LAB_14682652b;
  DAT_14cad6968 = &DAT_14cad6da8;
  DAT_14cad69bd = DAT_14cad69bd + '\x01';
  _DAT_14cad6dc8 = 0x100000000;
  if (*(char *)(_DAT_14cad6db0 + 100) != '\0') {
    DAT_14cad69be = DAT_14cad69be + '\x01';
  }
  return;
}



// FUNCTION 145debaa6 FUN_145debaa6 body=261 status=ok
// SIG undefined FUN_145debaa6(void)

void FUN_145debaa6(void)

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
              0x110) < DAT_14cad6c90) {
    FUN_144b3d300(&DAT_14cad6c90);
    if (DAT_14cad6c90 == -1) {
      FUN_145debbac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x407;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cad6c10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1434d4733);
      _Init_thread_footer(&DAT_14cad6c90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145debbac FUN_145debbac body=226 status=ok
// SIG undefined FUN_145debbac(void)

longlong * FUN_145debbac(longlong *param_1)

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
  pcVar13 = FUN_1463c4a54;
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



// FUNCTION 145debc94 FUN_145debc94 body=140 status=ok
// SIG undefined FUN_145debc94(void)

undefined1 * FUN_145debc94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145debd20();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FUploadLandscapeTextureToAtlasCS::FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x408;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cad6c98;
  return &LAB_145debc90;
}



// FUNCTION 145debd20 FUN_145debd20 body=261 status=ok
// SIG undefined FUN_145debd20(void)

void FUN_145debd20(void)

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
              0x110) < DAT_14cad6d18) {
    FUN_144b3d300(&DAT_14cad6d18);
    if (DAT_14cad6d18 == -1) {
      FUN_145debe26(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSharedParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x3e2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cad6c98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1434d473f);
      _Init_thread_footer(&DAT_14cad6d18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145debe26 FUN_145debe26 body=226 status=ok
// SIG undefined FUN_145debe26(void)

longlong * FUN_145debe26(longlong *param_1)

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
  pcVar13 = FUN_1463c4adc;
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



// FUNCTION 145debf0a FUN_145debf0a body=130 status=ok
// SIG undefined FUN_145debf0a(void)

undefined1 * FUN_145debf0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UpdateRegionOffsetAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147a6da8c;
}



// FUNCTION 145debf8c FUN_145debf8c body=138 status=ok
// SIG undefined FUN_145debf8c(void)

code * FUN_145debf8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145debf0a;
}



// FUNCTION 145dec016 FUN_145dec016 body=138 status=ok
// SIG undefined FUN_145dec016(void)

code * FUN_145dec016(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000003e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147a6da02;
}



// FUNCTION 145dec0ac FUN_145dec0ac body=182 status=ok
// SIG undefined FUN_145dec0ac(void)

undefined8 * FUN_145dec0ac(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a683960;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebab8) {
    FUN_144b3d300(&DAT_14caebab8);
    if (DAT_14caebab8 == -1) {
      FUN_14155e6c0();
      atexit((_func_5014 *)&LAB_14356eef1);
      _Init_thread_footer(&DAT_14caebab8);
    }
  }
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  return param_1;
}



// FUNCTION 145dec16e FUN_145dec16e body=168 status=ok
// SIG undefined FUN_145dec16e(void)

undefined8 * FUN_145dec16e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6d99f0;
  param_1[6] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5140) {
    FUN_144b3d300(&DAT_14caf5140);
    if (DAT_14caf5140 == -1) {
      FUN_1446f470e(&DAT_14caf5138,&DAT_149e01fe8,1);
      _Init_thread_footer(&DAT_14caf5140);
    }
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  param_1[6] = DAT_14caf5138;
  return param_1;
}



// FUNCTION 145dec221 FUN_145dec221 body=61 status=ok
// SIG undefined FUN_145dec221(void)

void FUN_145dec221(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a31890(puVar1);
  *puVar1 = &PTR_FUN_14aaaa960;
  FUN_145dec25e(puVar1 + 0x1e);
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



// FUNCTION 145dec25e FUN_145dec25e body=118 status=ok
// SIG undefined FUN_145dec25e(void)

undefined8 * FUN_145dec25e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e9e0) {
    FUN_144b3d300(&DAT_14c99e9e0);
    if (DAT_14c99e9e0 == -1) {
      FUN_1446f470e(&DAT_14c99e9d8,L"Inherited Encoding",1);
      _Init_thread_footer(&DAT_14c99e9e0);
    }
  }
  *param_1 = DAT_14c99e9d8;
  return param_1;
}



// FUNCTION 145dec2dc FUN_145dec2dc body=171 status=ok
// SIG undefined FUN_145dec2dc(void)

undefined8 * FUN_145dec2dc(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14aba7710;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145dec392 FUN_145dec392 body=168 status=ok
// SIG undefined FUN_145dec392(void)

undefined8 * FUN_145dec392(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14ac21f70;
  param_1[5] = &PTR_FUN_14ac22480;
  param_1[6] = &PTR_LAB_14ac224c0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x22] = 0x452f000044af0000;
  *(undefined4 *)(param_1 + 0x23) = 0x459c4000;
  param_1[0x2a] = 0xb33bbd2e42b40000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x3f8000003f000000;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xf7;
  *(byte *)((longlong)param_1 + 0x124) = *(byte *)((longlong)param_1 + 0x124) | 0xf;
  return param_1;
}



// FUNCTION 145dec446 FUN_145dec446 body=649 status=ok
// SIG undefined FUN_145dec446(void)

undefined8 * FUN_145dec446(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36cb60;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3004;
  param_1[0x17] = "damage_modifier";
  lVar5 = FUN_145dec6d0();
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
    FUN_1400bbfc4(&local_60,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
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
        goto LAB_145dec55f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145dec55f:
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
  FUN_1400b22c2(local_70,"Damage.Modifiers");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dec6d0 FUN_145dec6d0 body=55 status=ok
// SIG undefined FUN_145dec6d0(void)

void FUN_145dec6d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56760 = FUN_140002ddd(FUN_1464b82e0,uVar1,L"DamageModifierDef");
  }
  return;
}



// FUNCTION 145dec708 FUN_145dec708 body=205 status=ok
// SIG undefined FUN_145dec708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dec708(void)

{
  if ((DAT_14ca26537 & 2) == 0) {
    DAT_14ca26537 = DAT_14ca26537 | 2;
    _DAT_14ca264d8 = L"FLUTBlenderPS";
    _DAT_14ca264f0 = FUN_146826540;
    _DAT_14ca264f8 = FUN_146825d77;
    _DAT_14ca26500 = FUN_146825fd6;
    _DAT_14ca26508 = FUN_1407e02ea;
    _DAT_14ca26510 = FUN_146826273;
    _DAT_14ca264e8 = FUN_14728aada;
    _DAT_14ca26528 = 0xffffffff000000e0;
    _DAT_14ca26530 = 8;
    DAT_14ca26534 = 0;
    _DAT_14ca26518 = &LAB_14728ab06;
    FUN_145dec7d6();
    FUN_1407e00cc(&DAT_14ca264d0);
    return;
  }
  return;
}



// FUNCTION 145dec7d6 FUN_145dec7d6 body=123 status=ok
// SIG undefined FUN_145dec7d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dec7d6(void)

{
  _DAT_14ca2c000 = L"BASE";
  DAT_14ca2c02a = 4;
  _DAT_14ca2c008 = FUN_140b35ae4();
  _DAT_14ca2c010 = DAT_14ca264e0;
  _DAT_14ca2c018 = &LAB_14682652b;
  DAT_14ca264e0 = &DAT_14ca2c000;
  DAT_14ca26535 = DAT_14ca26535 + '\x01';
  _DAT_14ca2c020 = 0x100000000;
  if (*(char *)(_DAT_14ca2c008 + 100) != '\0') {
    DAT_14ca26536 = DAT_14ca26536 + '\x01';
  }
  return;
}



// FUNCTION 145dec852 FUN_145dec852 body=226 status=ok
// SIG undefined FUN_145dec852(void)

longlong * FUN_145dec852(longlong *param_1)

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
  pcVar13 = FUN_1462f988a;
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



// FUNCTION 145dec93a FUN_145dec93a body=140 status=ok
// SIG undefined FUN_145dec93a(void)

undefined1 * FUN_145dec93a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dec9c6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CombineLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCombineLUTParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28cf0;
  return &LAB_145dec936;
}



// FUNCTION 145dec9c6 FUN_145dec9c6 body=261 status=ok
// SIG undefined FUN_145dec9c6(void)

void FUN_145dec9c6(void)

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
              0x110) < DAT_14ca28d70) {
    FUN_144b3d300(&DAT_14ca28d70);
    if (DAT_14ca28d70 == -1) {
      FUN_14155ea34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCombineLUTParameters";
      local_38 = 0;
      local_50 = 0x2b0;
      local_58 = 0x8f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28cf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf81);
      _Init_thread_footer(&DAT_14ca28d70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145decacc FUN_145decacc body=138 status=ok
// SIG undefined FUN_145decacc(void)

code * FUN_145decacc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IsPhotoMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x278000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728fa44;
}



// FUNCTION 145decb56 FUN_145decb56 body=138 status=ok
// SIG undefined FUN_145decb56(void)

code * FUN_145decb56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorCorrectionHighlightsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x244000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728ffa8;
}



// FUNCTION 145decbe0 FUN_145decbe0 body=138 status=ok
// SIG undefined FUN_145decbe0(void)

code * FUN_145decbe0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmBlackClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x260000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728fc6c;
}



// FUNCTION 145decc6a FUN_145decc6a body=205 status=ok
// SIG undefined FUN_145decc6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145decc6a(void)

{
  if ((DAT_14c9ec84f & 2) == 0) {
    DAT_14c9ec84f = DAT_14c9ec84f | 2;
    _DAT_14c9ec7f0 = L"FLocalFogVolumeTiledRenderPS";
    _DAT_14c9ec808 = FUN_146826540;
    _DAT_14c9ec810 = FUN_146825d77;
    _DAT_14c9ec818 = FUN_146825fd6;
    _DAT_14c9ec820 = FUN_1407e02ea;
    _DAT_14c9ec828 = FUN_146826273;
    _DAT_14c9ec800 = FUN_1471dc502;
    _DAT_14c9ec840 = 0xffffffff000000e0;
    _DAT_14c9ec848 = 8;
    DAT_14c9ec84c = 0;
    _DAT_14c9ec830 = &LAB_1471dc52c;
    FUN_145decd38();
    FUN_1407e00cc(&DAT_14c9ec7e8);
    return;
  }
  return;
}



// FUNCTION 145decd38 FUN_145decd38 body=123 status=ok
// SIG undefined FUN_145decd38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145decd38(void)

{
  _DAT_14c9f1620 = L"BASE";
  DAT_14c9f164a = 4;
  _DAT_14c9f1628 = FUN_140b35ae4();
  _DAT_14c9f1630 = DAT_14c9ec7f8;
  _DAT_14c9f1638 = &LAB_14682652b;
  DAT_14c9ec7f8 = &DAT_14c9f1620;
  DAT_14c9ec84d = DAT_14c9ec84d + '\x01';
  _DAT_14c9f1640 = 0x100000000;
  if (*(char *)(_DAT_14c9f1628 + 100) != '\0') {
    DAT_14c9ec84e = DAT_14c9ec84e + '\x01';
  }
  return;
}



// FUNCTION 145decdb4 FUN_145decdb4 body=226 status=ok
// SIG undefined FUN_145decdb4(void)

longlong * FUN_145decdb4(longlong *param_1)

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
  pcVar13 = FUN_1462d7b06;
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



// FUNCTION 145dece9c FUN_145dece9c body=138 status=ok
// SIG undefined FUN_145dece9c(void)

undefined1 * FUN_145dece9c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dece98;
}



// FUNCTION 145decf26 FUN_145decf26 body=144 status=ok
// SIG undefined FUN_145decf26(void)

code * FUN_145decf26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140048c7e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fa5fe;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalFogVolumeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dece9c;
}



// FUNCTION 145decfb6 FUN_145decfb6 body=63 status=ok
// SIG undefined FUN_145decfb6(void)

undefined1 FUN_145decfb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145decff6(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 145decff6 FUN_145decff6 body=113 status=ok
// SIG undefined FUN_145decff6(void)

longlong FUN_145decff6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_145ded068(param_1 + 0x110,param_2 + 0x110);
  return param_1;
}



// FUNCTION 145ded068 FUN_145ded068 body=93 status=ok
// SIG undefined FUN_145ded068(void)

undefined8 * FUN_145ded068(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458454e0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486c45b6(param_1,iVar1);
      FUN_1486c4629(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ded0d0 FUN_145ded0d0 body=183 status=ok
// SIG undefined FUN_145ded0d0(void)

undefined8 * FUN_145ded0d0(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a678ad0;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb3e8) {
    FUN_144b3d300(&DAT_14caeb3e8);
    if (DAT_14caeb3e8 == -1) {
      FUN_14155ed3e();
      atexit((_func_5014 *)&LAB_14356e037);
      _Init_thread_footer(&DAT_14caeb3e8);
    }
  }
  param_1[0x2f] = 0x3727c5ac;
  return param_1;
}



// FUNCTION 145ded188 FUN_145ded188 body=297 status=ok
// SIG undefined FUN_145ded188(void)

void FUN_145ded188(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cadac68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x2a8))();
    param_1[9] = 0;
  }
  if (0 < (longlong)(int)param_1[8]) {
    uVar2 = (longlong)(int)param_1[8] + 1;
    do {
      if (*(longlong *)(param_1[7] + -0x10 + uVar2 * 8) != 0) {
        (**(code **)(*param_1 + 0x338))(param_1);
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  FUN_140790e84(param_1 + 0x20);
  if ((DAT_14caf27c8 != 0) && (DAT_14caf27c0 != (undefined8 *)0x0)) {
    (**(code **)*DAT_14caf27c0)(DAT_14caf27c0,0);
    FUN_1446efa72(&DAT_14caf27c0,0,0,0x10);
    DAT_14caf27c8 = 0;
  }
  if ((DAT_14caf27b8 != 0) && (DAT_14caf27b0 != (undefined8 *)0x0)) {
    (**(code **)*DAT_14caf27b0)(DAT_14caf27b0,0);
    FUN_1446efa72(&DAT_14caf27b0,0,0,0x10);
    DAT_14caf27b8 = 0;
  }
  FUN_144a81a0a();
  FUN_140457ffc(&DAT_14c967070,param_1);
  FUN_140457ffc(&DAT_14c967088,param_1);
  param_1[6] = 0;
  return;
}



// FUNCTION 145ded2b2 FUN_145ded2b2 body=31 status=ok
// SIG undefined FUN_145ded2b2(void)

undefined8 FUN_145ded2b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ded2d2 FUN_145ded2d2 body=31 status=ok
// SIG undefined FUN_145ded2d2(void)

undefined8 FUN_145ded2d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ded2f2 FUN_145ded2f2 body=121 status=ok
// SIG undefined FUN_145ded2f2(void)

void FUN_145ded2f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x360);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_1 + 0x360);
    }
  }
  *param_2 = lVar1;
  local_20 = param_2;
  FUN_145ded36c(param_1 + 0x350);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ded36c FUN_145ded36c body=105 status=ok
// SIG undefined FUN_145ded36c(void)

ulonglong FUN_145ded36c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_145ded3a4;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ded3d6(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar5 * 8) = *param_2;
LAB_145ded3a4:
  return uVar5 & 0xffffffff;
}



// FUNCTION 145ded3d6 FUN_145ded3d6 body=132 status=ok
// SIG undefined FUN_145ded3d6(void)

void FUN_145ded3d6(longlong param_1,int param_2)

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



// FUNCTION 145ded45a FUN_145ded45a body=158 status=ok
// SIG undefined FUN_145ded45a(void)

bool FUN_145ded45a(longlong param_1,undefined8 param_2)

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



// FUNCTION 145ded4fa FUN_145ded4fa body=199 status=ok
// SIG undefined FUN_145ded4fa(void)

void FUN_145ded4fa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x480);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
  *(int *)(lVar3 + 0xb8) = *(int *)(lVar3 + 0xb8) + 1;
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
  iVar4 = FUN_1411eec94(param_2);
  if ((bool)*(char *)(lVar3 + 0x10) == (iVar4 == 2)) {
    if (*(int *)(lVar3 + 0x14) != 0) goto LAB_145ded574;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x14) + 1;
  }
  *(bool *)(lVar3 + 0x10) = iVar4 == 2;
  *(int *)(lVar3 + 0x14) = iVar5;
LAB_145ded574:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145ded591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xc0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ded5c2 FUN_145ded5c2 body=205 status=ok
// SIG undefined FUN_145ded5c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ded5c2(void)

{
  if ((DAT_14ca5c047 & 2) == 0) {
    DAT_14ca5c047 = DAT_14ca5c047 | 2;
    _DAT_14ca5bfe8 = L"FSingleLayerWaterCompositePS";
    _DAT_14ca5c000 = FUN_146826540;
    _DAT_14ca5c008 = FUN_146825d77;
    _DAT_14ca5c010 = FUN_146825fd6;
    _DAT_14ca5c018 = FUN_1407e02ea;
    _DAT_14ca5c020 = FUN_146826273;
    _DAT_14ca5bff8 = FUN_147315500;
    _DAT_14ca5c038 = 0xffffffff000000e0;
    _DAT_14ca5c040 = 8;
    DAT_14ca5c044 = 0;
    _DAT_14ca5c028 = &LAB_14731552a;
    FUN_145ded690();
    FUN_1407e00cc(&DAT_14ca5bfe0);
    return;
  }
  return;
}



// FUNCTION 145ded690 FUN_145ded690 body=123 status=ok
// SIG undefined FUN_145ded690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ded690(void)

{
  _DAT_14ca5f6b0 = L"BASE";
  DAT_14ca5f6da = 4;
  _DAT_14ca5f6b8 = FUN_140b35ae4();
  _DAT_14ca5f6c0 = DAT_14ca5bff0;
  _DAT_14ca5f6c8 = &LAB_14682652b;
  DAT_14ca5bff0 = &DAT_14ca5f6b0;
  DAT_14ca5c045 = DAT_14ca5c045 + '\x01';
  _DAT_14ca5f6d0 = 0x100000000;
  if (*(char *)(_DAT_14ca5f6b8 + 100) != '\0') {
    DAT_14ca5c046 = DAT_14ca5c046 + '\x01';
  }
  return;
}



// FUNCTION 145ded70c FUN_145ded70c body=226 status=ok
// SIG undefined FUN_145ded70c(void)

longlong * FUN_145ded70c(longlong *param_1)

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
  pcVar13 = FUN_145df474e;
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



// FUNCTION 145ded7f4 FUN_145ded7f4 body=140 status=ok
// SIG undefined FUN_145ded7f4(void)

undefined1 * FUN_145ded7f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ded880();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSingleLayerWaterCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x137;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5e8e0;
  return &LAB_145ded7f0;
}



// FUNCTION 145ded880 FUN_145ded880 body=261 status=ok
// SIG undefined FUN_145ded880(void)

void FUN_145ded880(void)

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
              0x110) < DAT_14ca5e960) {
    FUN_144b3d300(&DAT_14ca5e960);
    if (DAT_14ca5e960 == -1) {
      FUN_14155f00a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSingleLayerWaterCommonShaderParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x114;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5e8e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d729);
      _Init_thread_footer(&DAT_14ca5e960);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ded986 FUN_145ded986 body=138 status=ok
// SIG undefined FUN_145ded986(void)

code * FUN_145ded986(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneNoWaterTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731800e;
}



// FUNCTION 145deda10 FUN_145deda10 body=138 status=ok
// SIG undefined FUN_145deda10(void)

code * FUN_145deda10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenSpaceReflectionsSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731834a;
}



// FUNCTION 145deda9a FUN_145deda9a body=144 status=ok
// SIG undefined FUN_145deda9a(void)

code * FUN_145deda9a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a89262();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionsParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FReflectionUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000123;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630ac22;
}



// FUNCTION 145dedb2a FUN_145dedb2a body=140 status=ok
// SIG undefined FUN_145dedb2a(void)

undefined1 * FUN_145dedb2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dedbb6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Shared";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSharedBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ac898;
  return &LAB_1456d3426;
}



// FUNCTION 145dedbb6 FUN_145dedbb6 body=278 status=ok
// SIG undefined FUN_145dedbb6(void)

undefined * FUN_145dedbb6(void)

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
              0x110) < DAT_14c9ac918) {
    FUN_144b3d300(&DAT_14c9ac918);
    if (DAT_14c9ac918 == -1) {
      FUN_145dedcce(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"BasePass";
      local_78 = L"FSharedBasePassUniformParameters";
      local_50 = 0x9e0;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ac898,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b7c217);
      _Init_thread_footer(&DAT_14c9ac918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ac898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dedcce FUN_145dedcce body=226 status=ok
// SIG undefined FUN_145dedcce(void)

longlong * FUN_145dedcce(longlong *param_1)

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
  pcVar13 = FUN_145ee67f8;
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



// FUNCTION 145deddb2 FUN_145deddb2 body=144 status=ok
// SIG undefined FUN_145deddb2(void)

code * FUN_145deddb2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a80e70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1f75d8;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FFogUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c9e274;
}



// FUNCTION 145dede42 FUN_145dede42 body=144 status=ok
// SIG undefined FUN_145dede42(void)

code * FUN_145dede42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a12b9e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ForwardISR";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FForwardLightData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2b000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b65c6;
}



// FUNCTION 145deded2 FUN_145deded2 body=144 status=ok
// SIG undefined FUN_145deded2(void)

code * FUN_145deded2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1449863e6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightFunctionAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LightFunctionAtlas::FLightFunctionAtlasGlobalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9900000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b6280;
}



// FUNCTION 145dedf62 FUN_145dedf62 body=40 status=ok
// SIG undefined FUN_145dedf62(void)

undefined8 FUN_145dedf62(undefined8 param_1,int param_2)

{
  FUN_145dedf8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dedf8a FUN_145dedf8a body=72 status=ok
// SIG undefined FUN_145dedf8a(void)

void FUN_145dedf8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b75cb60;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145dedfd2(param_1 + 0x1a);
  FUN_14583530c(param_1);
  return;
}



// FUNCTION 145dedfd2 FUN_145dedfd2 body=53 status=ok
// SIG undefined FUN_145dedfd2(void)

void FUN_145dedfd2(longlong *param_1)

{
  FUN_145dee008();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dee008 FUN_145dee008 body=373 status=ok
// SIG undefined FUN_145dee008(void)

void FUN_145dee008(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x30;
      FUN_140368c45(*(undefined8 *)(lVar2 + 0x10 + lVar3),*(undefined4 *)(lVar2 + 0x18 + lVar3));
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145dee17e FUN_145dee17e body=254 status=ok
// SIG undefined FUN_145dee17e(void)

longlong *
FUN_145dee17e(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_145dee280(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145dee2f8(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dee280 FUN_145dee280 body=120 status=ok
// SIG undefined FUN_145dee280(void)

undefined8 * FUN_145dee280(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99d330;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99d350;
  param_1[6] = &PTR_FUN_14b99d390;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145dee2f8 FUN_145dee2f8 body=162 status=ok
// SIG undefined FUN_145dee2f8(void)

void FUN_145dee2f8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_145dee337;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_145dee337;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145dee337:
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
                    /* WARNING: Could not recover jumptable at 0x000145dee396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145dee39a FUN_145dee39a body=284 status=ok
// SIG undefined FUN_145dee39a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dee39a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3018) {
    FUN_144b3d300(&DAT_14caa3018);
    if (DAT_14caa3018 == -1) {
      FUN_145dee4b6();
      FUN_140db5666(&DAT_14caa2f70,0,&DAT_14caa2f08,L"FLandscapeLayersWeightmapPS",
                    L"/Engine/Private/LandscapeLayersPS.usf",L"PSWeightmapMain",3,1,FUN_14745e8b6,
                    FUN_14745e894,&LAB_146324914,&LAB_14745e890,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14caa2f70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e064);
      _Init_thread_footer(&DAT_14caa3018);
    }
  }
  return &DAT_14caa2f70;
}



// FUNCTION 145dee4b6 FUN_145dee4b6 body=210 status=ok
// SIG undefined FUN_145dee4b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee4b6(void)

{
  if ((DAT_14caa2f6f & 2) == 0) {
    DAT_14caa2f6f = DAT_14caa2f6f | 2;
    _DAT_14caa2f10 = L"FLandscapeLayersWeightmapPS";
    _DAT_14caa2f28 = FUN_146826540;
    _DAT_14caa2f30 = FUN_146825d77;
    _DAT_14caa2f38 = FUN_146825fd6;
    _DAT_14caa2f40 = FUN_1407e02ea;
    _DAT_14caa2f48 = FUN_146826273;
    _DAT_14caa2f20 = FUN_14745e862;
    _DAT_14caa2f60 = 0xffffffff00000108;
    _DAT_14caa2f68 = 8;
    DAT_14caa2f6c = 0;
    _DAT_14caa2f50 = &LAB_14745e88c;
    FUN_145dee588();
    FUN_145dee7ea();
    FUN_1407e00cc(&DAT_14caa2f08);
    return;
  }
  return;
}



// FUNCTION 145dee588 FUN_145dee588 body=121 status=ok
// SIG undefined FUN_145dee588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee588(void)

{
  FUN_145dee602();
  _DAT_14caa4b30 = L"ReadTexture1Param";
  DAT_14caa4b5a = FUN_140850cc5();
  _DAT_14caa4b38 = FUN_140fb78d0();
  _DAT_14caa4b48 = &LAB_14682652b;
  _DAT_14caa4b50 = 0x1000000e0;
  _DAT_14caa4b58 = 0;
  _DAT_14caa4b40 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4b30;
  return;
}



// FUNCTION 145dee602 FUN_145dee602 body=121 status=ok
// SIG undefined FUN_145dee602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee602(void)

{
  FUN_145dee67c();
  _DAT_14caa4b60 = L"ReadTexture2Param";
  DAT_14caa4b8a = FUN_140850cc5();
  _DAT_14caa4b68 = FUN_140fb78d0();
  _DAT_14caa4b78 = &LAB_14682652b;
  _DAT_14caa4b80 = 0x1000000e4;
  _DAT_14caa4b88 = 0;
  _DAT_14caa4b70 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4b60;
  return;
}



// FUNCTION 145dee67c FUN_145dee67c body=121 status=ok
// SIG undefined FUN_145dee67c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee67c(void)

{
  FUN_145dee6f6();
  _DAT_14caa4b90 = L"ReadTexture1SamplerParam";
  DAT_14caa4bba = FUN_140850cc5();
  _DAT_14caa4b98 = FUN_140fb78d0();
  _DAT_14caa4ba8 = &LAB_14682652b;
  _DAT_14caa4bb0 = 0x1000000e8;
  _DAT_14caa4bb8 = 0;
  _DAT_14caa4ba0 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4b90;
  return;
}



// FUNCTION 145dee6f6 FUN_145dee6f6 body=121 status=ok
// SIG undefined FUN_145dee6f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee6f6(void)

{
  FUN_145dee770();
  _DAT_14caa4bc0 = L"ReadTexture2SamplerParam";
  DAT_14caa4bea = FUN_140850cc5();
  _DAT_14caa4bc8 = FUN_140fb78d0();
  _DAT_14caa4bd8 = &LAB_14682652b;
  _DAT_14caa4be0 = 0x1000000ec;
  _DAT_14caa4be8 = 0;
  _DAT_14caa4bd0 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4bc0;
  return;
}



// FUNCTION 145dee770 FUN_145dee770 body=121 status=ok
// SIG undefined FUN_145dee770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee770(void)

{
  FUN_145dee866();
  _DAT_14caa4bf0 = L"LayerInfoParam";
  DAT_14caa4c1a = FUN_140850cc5();
  _DAT_14caa4bf8 = FUN_140ec6960();
  _DAT_14caa4c08 = &LAB_14682652b;
  _DAT_14caa4c10 = 0x1000000f0;
  _DAT_14caa4c18 = 0;
  _DAT_14caa4c00 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4bf0;
  return;
}



// FUNCTION 145dee7ea FUN_145dee7ea body=123 status=ok
// SIG undefined FUN_145dee7ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee7ea(void)

{
  _DAT_14caa58f8 = L"BASE";
  DAT_14caa5922 = 4;
  _DAT_14caa5900 = FUN_140b35ae4();
  _DAT_14caa5908 = DAT_14caa2f18;
  _DAT_14caa5910 = &LAB_14682652b;
  DAT_14caa2f18 = &DAT_14caa58f8;
  DAT_14caa2f6d = DAT_14caa2f6d + '\x01';
  _DAT_14caa5918 = 0x100000000;
  if (*(char *)(_DAT_14caa5900 + 100) != '\0') {
    DAT_14caa2f6e = DAT_14caa2f6e + '\x01';
  }
  return;
}



// FUNCTION 145dee866 FUN_145dee866 body=216 status=ok
// SIG undefined FUN_145dee866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dee866(void)

{
  _DAT_14caa4c50 = L"ComponentVertexCountParam";
  DAT_14caa4c7a = FUN_140850cc5();
  _DAT_14caa4c58 = FUN_140ec6960();
  _DAT_14caa4c68 = &LAB_14682652b;
  _DAT_14caa4c70 = 0x1000000fc;
  _DAT_14caa4c78 = 0;
  _DAT_14caa4c60 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4c50;
  _DAT_14caa4c20 = L"OutputConfigParam";
  DAT_14caa4c4a = FUN_140850cc5();
  _DAT_14caa4c28 = FUN_140ec6960();
  _DAT_14caa4c38 = &LAB_14682652b;
  _DAT_14caa4c40 = 0x1000000f6;
  _DAT_14caa4c48 = 0;
  _DAT_14caa4c30 = DAT_14caa2f18;
  DAT_14caa2f18 = &DAT_14caa4c20;
  return;
}



// FUNCTION 145dee94a FUN_145dee94a body=890 status=ok
// SIG undefined FUN_145dee94a(void)

undefined8 * FUN_145dee94a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140312256();
  FUN_145deecc6(param_1 + 0x72);
  *param_1 = &PTR_FUN_14a3edb60;
  param_1[0x72] = &PTR_FUN_14a3ee1a0;
  FUN_145a22922(param_1 + 0x73);
  *(undefined8 *)((longlong)param_1 + 0x404) = 0x13f800000;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x200000003;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x83) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 1;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  FUN_145deecd4(param_1 + 0x9b);
  param_1[0x9b] = &PTR_FUN_14a3ef280;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_145deeaa3;
  lVar4 = FUN_14001cc68(0x388,0x10);
  FUN_1405f3fce(lVar4,param_1);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a3ef3b0;
  plVar5[2] = lVar4;
  param_1[0x99] = lVar4;
  plVar3 = (longlong *)param_1[0x9a];
  if (plVar5 == plVar3) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar5;
        goto joined_r0x000145deec9b;
      }
    }
  }
  else {
    param_1[0x9a] = plVar5;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000145deec9b:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  param_1[0xaa] = *(undefined8 *)(param_1[0x99] + 0x38);
  *(undefined1 *)(param_1 + 7) = 4;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
LAB_145deeaa3:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa8bf0) && (FUN_144b3d300(&DAT_14caa8bf0), DAT_14caa8bf0 == -1)) {
    FUN_14155faee();
    atexit(FUN_143277211);
    _Init_thread_footer(&DAT_14caa8bf0);
  }
  FUN_1446f470e(&local_48,L"SceneComp",1);
  local_68 = FUN_144a799b0();
  local_58 = 0;
  local_60 = 1;
  lVar4 = FUN_140486aac(param_2,param_1,local_48,local_68);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x39] = lVar4;
  *(undefined1 *)(lVar4 + 0x1fb) = 0;
  FUN_1446f470e(&local_50,L"GameplayEventDispatcher",1);
  local_68 = FUN_140deaa76();
  local_58 = 0;
  local_60 = 1;
  lVar4 = FUN_140486aac(param_2,param_1,local_50,local_68);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0xad] = lVar4;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deecc6 FUN_145deecc6 body=14 status=ok
// SIG undefined FUN_145deecc6(void)

void FUN_145deecc6(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a3e7d50;
  return;
}



// FUNCTION 145deecd4 FUN_145deecd4 body=72 status=ok
// SIG undefined FUN_145deecd4(void)

void FUN_145deecd4(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0x8000000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a3e7d20;
  return;
}



// FUNCTION 145deed1c FUN_145deed1c body=566 status=ok
// SIG undefined FUN_145deed1c(void)

void FUN_145deed1c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_268 [40];
  undefined8 local_240;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_22c [4];
  undefined4 *local_228;
  undefined4 *local_220;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    FUN_145deef92(param_1 + 0xac,param_3);
    lVar1 = param_1[7];
    if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x48), lVar2 != 0)) {
      lVar4 = FUN_140b7066c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_240 = param_3;
        plVar5 = (longlong *)FUN_144a7c8f0(lVar1);
        lVar1 = plVar5[1];
        if ((longlong)(int)lVar1 != 0) {
          lVar4 = *plVar5;
          lVar6 = 0;
          do {
            lVar3 = *(longlong *)(lVar4 + lVar6);
            local_230 = FUN_1458ff3f0(lVar2,*(undefined4 *)(lVar3 + 0xe0));
            local_234 = *(undefined4 *)(lVar3 + 0xe0);
            local_228 = &local_234;
            local_220 = &local_230;
            FUN_145def010(&local_b8,local_22c,&local_228);
            lVar6 = lVar6 + 8;
          } while ((longlong)(int)lVar1 * 8 != lVar6);
        }
        (**(code **)(*param_1 + 0xe0))(param_1,param_2);
        FUN_14589e2aa(&local_228,param_2);
        local_110 = *(undefined4 *)(param_2 + 0x118);
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_145def498(&local_108,&local_b8);
        FUN_145def13a(param_1,&local_228);
        FUN_145deef54(&local_228);
        param_3 = local_240;
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_14585786c(&local_b8);
        goto LAB_145deeefe;
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1,0xe);
  }
LAB_145deeefe:
  FUN_1449db362(param_3);
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deef54 FUN_145deef54 body=62 status=ok
// SIG undefined FUN_145deef54(void)

void FUN_145deef54(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14585786c(param_1 + 0x120);
  FUN_14124efea(param_1);
  return;
}



// FUNCTION 145deef92 FUN_145deef92 body=124 status=ok
// SIG undefined FUN_145deef92(void)

void FUN_145deef92(longlong *param_1,longlong *param_2)

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



// FUNCTION 145def010 FUN_145def010 body=297 status=ok
// SIG undefined FUN_145def010(void)

undefined4 * FUN_145def010(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ec91a2(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_145ec910a(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145ec9288(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145def13a FUN_145def13a body=615 status=ok
// SIG undefined FUN_145def13a(void)

void FUN_145def13a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined4 local_b4;
  longlong local_b0 [2];
  longlong local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68 [6];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    lVar2 = FUN_14119d4d6(param_1[7]);
    if (lVar2 != 0) {
      local_38 = FUN_14119d510(param_1,*(undefined4 *)(lVar2 + 0xe0));
      if (local_38 != 0) {
        if (*(int *)((longlong)param_1 + 0x54) != 2) {
          *(undefined4 *)((longlong)param_1 + 0x54) = 2;
          (**(code **)(*param_1 + 0x90))(param_1,2);
        }
        if (param_1 + 0x3a != param_2) {
          FUN_145def3fc(param_1 + 0x3a,param_2);
        }
        FUN_14155fbfe(param_1,0);
        FUN_145def956(param_1);
        FUN_1446f470e(&local_90,L"SHIFT",1);
        local_68[0] = local_90;
        plVar3 = (longlong *)FUN_1401e3228();
        if (plVar3 == (longlong *)0x0) {
          local_88 = 0;
          uStack_80 = 0;
        }
        else {
          (**(code **)(*plVar3 + 0x80))(plVar3,&local_88);
        }
        FUN_145df038c(param_2,&local_78,&local_88);
        FUN_1414f3eb8(local_68,param_1 + 5,&DAT_14cb976c0,&local_78);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        lVar2 = param_1[8];
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,2,0x10);
        local_70 = 2;
        *local_78 = &PTR_LAB_14b4f0d80;
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar4 == 0) {
          LOCK();
          UNLOCK();
          lVar4 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_78[2] = lVar4;
        *local_78 = &PTR_FUN_14b4f0d10;
        local_78[3] = param_1;
        FUN_141551f14(param_2,local_b0);
        FUN_145829440(local_68,local_a0,local_b0);
        local_b4 = FUN_145def3a2(param_2);
        local_c8 = &local_78;
        FUN_145def586(lVar2,&local_38,&local_b4,local_a0);
        if (local_a0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_78);
        FUN_14119d498(local_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145def3a2 FUN_145def3a2 body=88 status=ok
// SIG undefined FUN_145def3a2(void)

undefined4 FUN_145def3a2(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141551f14(param_1,local_28);
  uVar1 = FUN_14119d5f0(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145def3fc FUN_145def3fc body=155 status=ok
// SIG undefined FUN_145def3fc(void)

longlong FUN_145def3fc(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x170) == '\x01') {
    FUN_145deef54(param_1);
  }
  FUN_14589e2aa(param_1,param_2);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  FUN_145def498(param_1 + 0x120,param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x170) = 1;
  return param_1;
}



// FUNCTION 145def498 FUN_145def498 body=120 status=ok
// SIG undefined FUN_145def498(void)

longlong FUN_145def498(longlong param_1,longlong param_2)

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
    FUN_145def510(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145def510 FUN_145def510 body=117 status=ok
// SIG undefined FUN_145def510(void)

undefined8 * FUN_145def510(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145857902(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 145def586 FUN_145def586 body=240 status=ok
// SIG undefined FUN_145def586(void)

void FUN_145def586(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_145def72a(param_2,param_3,param_4,param_5);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_145def688(&local_40,plVar1);
  local_30 = plVar1;
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145def688 FUN_145def688 body=162 status=ok
// SIG undefined FUN_145def688(void)

void FUN_145def688(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145def6c7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145def6c7;
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
LAB_145def6c7:
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
                    /* WARNING: Could not recover jumptable at 0x000145def726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145def72a FUN_145def72a body=172 status=ok
// SIG undefined FUN_145def72a(void)

undefined8 *
FUN_145def72a(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4f0df0;
  local_40 = *param_4;
  local_48 = &local_40;
  *param_4 = 0;
  local_38 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_145def7d8(puVar1 + 2,*param_1,*param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145def7d8 FUN_145def7d8 body=255 status=ok
// SIG undefined FUN_145def7d8(void)

undefined8 *
FUN_145def7d8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  void *_Src;
  
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
  *param_1 = &PTR_FUN_14b4f0e10;
  param_1[4] = &PTR_FUN_14b4f0e38;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[10] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_145def8d8(param_1 + 0xc,param_5);
  *(undefined4 *)(param_1 + 0xe) = 0xe;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  FUN_1449db362(param_5);
  return param_1;
}



// FUNCTION 145def8d8 FUN_145def8d8 body=124 status=ok
// SIG undefined FUN_145def8d8(void)

void FUN_145def8d8(longlong *param_1,longlong *param_2)

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



// FUNCTION 145def956 FUN_145def956 body=295 status=ok
// SIG undefined FUN_145def956(void)

void FUN_145def956(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x130) == 0) && (*(longlong *)(param_1 + 0x138) == 0)) {
    lVar1 = FUN_14119d4d6(*(undefined8 *)(param_1 + 0x38));
    if (lVar1 != 0) {
      lVar1 = FUN_14119d510(param_1,*(undefined4 *)(lVar1 + 0xe0));
      if (lVar1 != 0) {
        FUN_145defa7e(lVar1 + 0x1c8,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x130) = local_28;
        FUN_145defc4e(lVar1 + 0x188,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x138) = local_28;
        FUN_145defe1c(lVar1 + 0x1e0,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x148) = local_28;
        FUN_145deffec(lVar1 + 0x1f8,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x150) = local_28;
        FUN_145df01bc(lVar1 + 0x1b0,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x140) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145defa7e FUN_145defa7e body=228 status=ok
// SIG undefined FUN_145defa7e(void)

undefined8 FUN_145defa7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f1510;
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
  *local_38 = &PTR_FUN_14b4f14a0;
  local_38[3] = param_3;
  local_38[4] = &LAB_140ea600e;
  FUN_145defb64(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145defb64 FUN_145defb64 body=216 status=ok
// SIG undefined FUN_145defb64(void)

undefined8 * FUN_145defb64(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145defc4e FUN_145defc4e body=228 status=ok
// SIG undefined FUN_145defc4e(void)

undefined8 FUN_145defc4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f3990;
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
  *local_38 = &PTR_FUN_14b4f1580;
  local_38[3] = param_3;
  local_38[4] = &LAB_140c057e6;
  FUN_145defd34(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145defd34 FUN_145defd34 body=214 status=ok
// SIG undefined FUN_145defd34(void)

undefined8 * FUN_145defd34(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145defe1c FUN_145defe1c body=228 status=ok
// SIG undefined FUN_145defe1c(void)

undefined8 FUN_145defe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f1660;
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
  *local_38 = &PTR_FUN_14b4f15f0;
  local_38[3] = param_3;
  local_38[4] = FUN_1413f529e;
  FUN_145deff02(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deff02 FUN_145deff02 body=216 status=ok
// SIG undefined FUN_145deff02(void)

undefined8 * FUN_145deff02(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145deffec FUN_145deffec body=228 status=ok
// SIG undefined FUN_145deffec(void)

undefined8 FUN_145deffec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f1740;
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
  *local_38 = &PTR_FUN_14b4f16d0;
  local_38[3] = param_3;
  local_38[4] = FUN_145925b14;
  FUN_145df00d2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df00d2 FUN_145df00d2 body=216 status=ok
// SIG undefined FUN_145df00d2(void)

undefined8 * FUN_145df00d2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df01bc FUN_145df01bc body=228 status=ok
// SIG undefined FUN_145df01bc(void)

undefined8 FUN_145df01bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f1820;
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
  *local_38 = &PTR_FUN_14b4f17b0;
  local_38[3] = param_3;
  local_38[4] = FUN_143f3aa7c;
  FUN_145df02a2(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df02a2 FUN_145df02a2 body=216 status=ok
// SIG undefined FUN_145df02a2(void)

undefined8 * FUN_145df02a2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df038c FUN_145df038c body=1023 status=ok
// SIG undefined FUN_145df038c(void)

undefined8 * FUN_145df038c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  void *_Src;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  wchar_t *pwVar18;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined8 *local_d8;
  undefined2 *local_d0;
  int local_c8;
  longlong local_c0;
  int local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = param_2;
  if (*param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14101d2ea();
    if (DAT_14cb97778 < 2) {
      puVar11 = &DAT_14cb976a0;
    }
    else {
      FUN_14101d2ea();
      puVar11 = &DAT_14cb97770;
    }
    local_78 = (undefined2 *)0x0;
    local_70 = *(int *)(puVar11 + 1);
    lVar15 = (longlong)local_70;
    _Src = (void *)*puVar11;
    if (lVar15 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar15 * 2);
    }
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    FUN_145e34e2c(param_1 + 0x28,DAT_14cb97810,&local_88);
    puVar14 = local_88;
    if ((int)uStack_80 < 2) {
      FUN_144a787a6(&local_88,&DAT_14cb976b0);
      puVar14 = local_88;
      if ((int)uStack_80 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
    }
    puVar17 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar17 = local_78;
    }
    puVar16 = &DAT_149dfb77a;
    if (DAT_14cb97698 != 0) {
      puVar16 = DAT_14cb97690;
    }
    plVar3 = (longlong *)(param_1 + 0x120);
    iVar13 = *(int *)(param_1 + 0x128);
    iVar10 = *(int *)(param_1 + 0x154);
    uVar8 = FUN_14155fe6d();
    uVar9 = FUN_1414a827a();
    local_f8 = iVar13 - iVar10;
    local_f0 = puVar16;
    local_e8 = puVar17;
    local_e0 = puVar14;
    FUN_140002266(local_d8,L"%d %d %d %s %s %s",uVar9,uVar8);
    plVar4 = (longlong *)(param_1 + 0x130);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar4;
    if (*(int *)(param_1 + 0x148) == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = *(int *)(param_1 + 0x148);
    }
    uStack_90 = CONCAT44(uStack_4c,uStack_50);
    local_98 = local_58;
    uVar7 = local_98;
    local_a8 = (undefined4)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar10 = local_98._4_4_;
    local_b0 = plVar3;
    if ((local_98._4_4_ != iVar13) || (local_98 = uVar7, uStack_60 != plVar4)) {
      do {
        local_98 = uVar7;
        iVar5 = *(int *)(*local_b0 + 4 + (longlong)iVar10 * 0x10);
        (**(code **)(*(longlong *)*param_3 + 0x110))
                  ((longlong *)*param_3,&local_68,
                   *(undefined4 *)(*local_b0 + (longlong)iVar10 * 0x10));
        if (local_68 != (longlong *)0x0) {
          pwVar12 = L"Disabled";
          if (iVar5 != 0) {
            pwVar12 = L"";
          }
          pwVar18 = L"Enabled";
          if (iVar5 != 1) {
            pwVar18 = pwVar12;
          }
          (**(code **)(*local_68 + 0x30))(local_68,&local_d0);
          puVar14 = &DAT_149dfb77a;
          if (local_c8 != 0) {
            puVar14 = local_d0;
          }
          FUN_140002266(&local_c0,L" %s %s",puVar14,pwVar18);
          if (local_d0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar10 = local_b8 + -1;
          if (local_b8 == 0) {
            iVar10 = 0;
          }
          FUN_1400020e8(local_d8,local_c0,iVar10);
          if (local_c0 != 0) {
            FUN_1400020a8();
          }
        }
        plVar6 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_60)(uStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
        FUN_1449c0562(&local_a8);
        iVar10 = local_98._4_4_;
        uVar7 = local_98;
      } while (((local_98._4_4_ != iVar13) || ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar4))
              || (local_b0 != plVar3));
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_d8;
}



// FUNCTION 145df078c FUN_145df078c body=9 status=ok
// SIG undefined FUN_145df078c(void)

void FUN_145df078c(longlong param_1)

{
  FUN_145df0796(param_1 + 0x10);
  return;
}



// FUNCTION 145df0796 FUN_145df0796 body=351 status=ok
// SIG undefined FUN_145df0796(void)

void FUN_145df0796(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb770;
  param_1[0xe2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xf6];
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
  param_1[0xcc] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xe0];
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
  param_1[0xb6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xca];
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
  param_1[0xa0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb4];
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
  param_1[0x8a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9e];
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
  FUN_14130c426(param_1 + 2);
  return;
}



// FUNCTION 145df08f6 FUN_145df08f6 body=306 status=ok
// SIG undefined FUN_145df08f6(void)

void FUN_145df08f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_40;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_145df0982;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_145df0982;
    local_40 = *puVar3;
    local_38 = 0xffffffff;
    puVar3 = &local_40;
  }
LAB_145df0982:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145df0a2a(puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145df0a2a FUN_145df0a2a body=8 status=ok
// SIG undefined FUN_145df0a2a(void)

bool FUN_145df0a2a(longlong param_1)

{
  return 0 < *(int *)(param_1 + 8);
}



// FUNCTION 145df0a3e FUN_145df0a3e body=184 status=ok
// SIG undefined FUN_145df0a3e(void)

undefined8 * FUN_145df0a3e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6800b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebda0) {
    FUN_144b3d300(&DAT_14caebda0);
    if (DAT_14caebda0 == -1) {
      FUN_14155fed4();
      atexit((_func_5014 *)&LAB_14356f1d2);
      _Init_thread_footer(&DAT_14caebda0);
    }
  }
  return param_1;
}



// FUNCTION 145df0b02 FUN_145df0b02 body=184 status=ok
// SIG undefined FUN_145df0b02(void)

undefined8 * FUN_145df0b02(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a689480;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebe18) {
    FUN_144b3d300(&DAT_14caebe18);
    if (DAT_14caebe18 == -1) {
      FUN_14155ff7a();
      atexit((_func_5014 *)&LAB_14356f236);
      _Init_thread_footer(&DAT_14caebe18);
    }
  }
  return param_1;
}



// FUNCTION 145df0bc6 FUN_145df0bc6 body=184 status=ok
// SIG undefined FUN_145df0bc6(void)

undefined8 * FUN_145df0bc6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a5310;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeab28) {
    FUN_144b3d300(&DAT_14caeab28);
    if (DAT_14caeab28 == -1) {
      FUN_141560020();
      atexit((_func_5014 *)&LAB_14356d5d0);
      _Init_thread_footer(&DAT_14caeab28);
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 145df0c8a FUN_145df0c8a body=184 status=ok
// SIG undefined FUN_145df0c8a(void)

undefined8 * FUN_145df0c8a(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6ad150;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebdd0) {
    FUN_144b3d300(&DAT_14caebdd0);
    if (DAT_14caebdd0 == -1) {
      FUN_1415600c6();
      atexit((_func_5014 *)&LAB_14356f1fa);
      _Init_thread_footer(&DAT_14caebdd0);
    }
  }
  return param_1;
}



// FUNCTION 145df0d42 FUN_145df0d42 body=40 status=ok
// SIG undefined FUN_145df0d42(void)

undefined8 FUN_145df0d42(undefined8 param_1,int param_2)

{
  FUN_145df0d6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df0d6a FUN_145df0d6a body=140 status=ok
// SIG undefined FUN_145df0d6a(void)

void FUN_145df0d6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6cfc10;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df0df6 FUN_145df0df6 body=40 status=ok
// SIG undefined FUN_145df0df6(void)

undefined8 FUN_145df0df6(undefined8 param_1,int param_2)

{
  FUN_145df0e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df0e1e FUN_145df0e1e body=140 status=ok
// SIG undefined FUN_145df0e1e(void)

void FUN_145df0e1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a85c9e0;
  param_1[5] = &PTR_FUN_14a85d620;
  param_1[6] = &PTR_LAB_14a85d660;
  param_1[0x55] = &PTR_FUN_14a85d6b0;
  param_1[0x56] = &PTR_FUN_14a85d730;
  param_1[0x57] = &PTR_FUN_14a85d740;
  param_1[0xca] = &PTR_FUN_14a85d770;
  FUN_1406cb64a(param_1 + 0x15c);
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c5b3e(param_1);
  return;
}



// FUNCTION 145df0eaa FUN_145df0eaa body=40 status=ok
// SIG undefined FUN_145df0eaa(void)

undefined8 FUN_145df0eaa(undefined8 param_1,int param_2)

{
  FUN_145df0ed2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df0ed2 FUN_145df0ed2 body=140 status=ok
// SIG undefined FUN_145df0ed2(void)

void FUN_145df0ed2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a905ab0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x25);
  FUN_1449db362(param_1 + 0x23);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df0f5e FUN_145df0f5e body=40 status=ok
// SIG undefined FUN_145df0f5e(void)

undefined8 FUN_145df0f5e(undefined8 param_1,int param_2)

{
  FUN_145df0f86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df0f86 FUN_145df0f86 body=140 status=ok
// SIG undefined FUN_145df0f86(void)

void FUN_145df0f86(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac01c50;
  param_1[5] = &PTR_FUN_14ac01ef0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[8];
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



// FUNCTION 145df101a FUN_145df101a body=172 status=ok
// SIG undefined FUN_145df101a(void)

undefined8 * FUN_145df101a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af07df0;
  param_1[8] = 0;
  param_1[10] = &PTR_LAB_14aeb6a30;
  param_1[0xb] = &LAB_148516a4c;
  param_1[6] = FUN_146bd3274;
  *(undefined1 *)(param_1 + 0xe) = 1;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 145df10c6 FUN_145df10c6 body=40 status=ok
// SIG undefined FUN_145df10c6(void)

undefined8 FUN_145df10c6(undefined8 param_1,int param_2)

{
  FUN_145df10ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df10ee FUN_145df10ee body=140 status=ok
// SIG undefined FUN_145df10ee(void)

void FUN_145df10ee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af00dc0;
  param_1[5] = &PTR_FUN_14af01840;
  param_1[6] = &PTR_LAB_14af01880;
  param_1[0x55] = &PTR_FUN_14af018d0;
  param_1[0x56] = &PTR_FUN_14af01950;
  param_1[0x57] = &PTR_FUN_14af01960;
  plVar3 = (longlong *)param_1[0xde];
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
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 145df117a FUN_145df117a body=74 status=ok
// SIG undefined FUN_145df117a(void)

void FUN_145df117a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x140))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145df11b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



// FUNCTION 145df11d6 FUN_145df11d6 body=28 status=ok
// SIG undefined FUN_145df11d6(void)

void FUN_145df11d6(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_145df11f2();
  FUN_14101dc7e(param_1,uVar1);
  return;
}



// FUNCTION 145df11f2 FUN_145df11f2 body=62 status=ok
// SIG undefined FUN_145df11f2(void)

undefined8 FUN_145df11f2(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78);
  if ((lVar2 != 0) && (param_1 = *(longlong *)(lVar2 + 0x80), param_1 != 0)) {
    lVar2 = FUN_1459b10c6();
    if (lVar2 != 0) {
      uVar3 = FUN_145d42d7c(lVar2);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_145df1225;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_145df1225:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 145df1230 FUN_145df1230 body=74 status=ok
// SIG undefined FUN_145df1230(void)

undefined8 * FUN_145df1230(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 extraout_XMM0_Da;
  
  lVar1 = FUN_140e44844();
  if ((lVar1 != 0) && (lVar1 = FUN_14156016c(lVar1), lVar1 != 0)) {
    FUN_1414c6652(extraout_XMM0_Da,param_2,lVar1,param_1 + 0x88);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145df127a FUN_145df127a body=40 status=ok
// SIG undefined FUN_145df127a(void)

undefined8 FUN_145df127a(undefined8 param_1,int param_2)

{
  FUN_145df12a2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df12a2 FUN_145df12a2 body=140 status=ok
// SIG undefined FUN_145df12a2(void)

void FUN_145df12a2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba29a40;
  param_1[6] = &PTR_FUN_14ba29d68;
  param_1[7] = &PTR_FUN_14ba29d80;
  param_1[8] = &PTR_FUN_14ba29da0;
  FUN_1456c3cc8(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145df132e FUN_145df132e body=38 status=ok
// SIG undefined FUN_145df132e(void)

undefined8 FUN_145df132e(undefined8 param_1,int param_2)

{
  FUN_145df1354();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df1354 FUN_145df1354 body=109 status=ok
// SIG undefined FUN_145df1354(void)

void FUN_145df1354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba42400;
  FUN_145cca029(param_1[0x7d],*(undefined4 *)(param_1 + 0x7e));
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145df13c2(param_1 + 0x73);
  FUN_145858e14(param_1);
  return;
}



// FUNCTION 145df13c2 FUN_145df13c2 body=53 status=ok
// SIG undefined FUN_145df13c2(void)

void FUN_145df13c2(longlong *param_1)

{
  FUN_145df13f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df13f8 FUN_145df13f8 body=339 status=ok
// SIG undefined FUN_145df13f8(void)

void FUN_145df13f8(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1458ed8f1(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145df154c FUN_145df154c body=24 status=ok
// SIG undefined FUN_145df154c(void)

void FUN_145df154c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145df1560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145df1564 FUN_145df1564 body=68 status=ok
// SIG undefined FUN_145df1564(void)

undefined8 * FUN_145df1564(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba479c0;
  if (param_1[0x19] != 0) {
    FUN_145df15a8();
  }
  FUN_145df163e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df15a8 FUN_145df15a8 body=149 status=ok
// SIG undefined FUN_145df15a8(void)

void FUN_145df15a8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  iVar2 = *(int *)(param_1 + 0xf0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_148fbd3f0(lVar1);
        FUN_1400020a8(lVar1);
        iVar2 = *(int *)(param_1 + 0xf0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_148fc42d4((longlong *)(param_1 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x000145df15f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  return;
}



// FUNCTION 145df163e FUN_145df163e body=299 status=ok
// SIG undefined FUN_145df163e(void)

void FUN_145df163e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b437310;
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
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145df176a FUN_145df176a body=40 status=ok
// SIG undefined FUN_145df176a(void)

undefined8 FUN_145df176a(undefined8 param_1,int param_2)

{
  FUN_145df1792();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145df1792 FUN_145df1792 body=140 status=ok
// SIG undefined FUN_145df1792(void)

void FUN_145df1792(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba80380;
  param_1[5] = &PTR_FUN_14ba80960;
  param_1[6] = &PTR_LAB_14ba809a0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x55);
  FUN_14006e79a(param_1);
  return;
}


