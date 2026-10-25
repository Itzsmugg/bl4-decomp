// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d2abbc FUN_147d2abbc body=42 status=ok
// SIG undefined FUN_147d2abbc(void)

undefined8 FUN_147d2abbc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xa8,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetSkeleton");
  return 0;
}



// FUNCTION 147d2abe6 FUN_147d2abe6 body=41 status=ok
// SIG undefined FUN_147d2abe6(void)

void FUN_147d2abe6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xac,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::SetSkeleton");
  return;
}



// FUNCTION 147d2ac10 FUN_147d2ac10 body=42 status=ok
// SIG undefined FUN_147d2ac10(void)

undefined8 FUN_147d2ac10(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xaf,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetDefaultMeshDeformer");
  return 0;
}



// FUNCTION 147d2ac3a FUN_147d2ac3a body=42 status=ok
// SIG undefined FUN_147d2ac3a(void)

undefined8 FUN_147d2ac3a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xb2,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetOverlayMaterial");
  return 0;
}



// FUNCTION 147d2ac64 FUN_147d2ac64 body=43 status=ok
// SIG undefined FUN_147d2ac64(void)

undefined8 FUN_147d2ac64(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xb4,
                L"Pure virtual not implemented (%s)",
                L"USkinnedAsset::GetOverlayMaterialMaxDrawDistance");
  return 0;
}



// FUNCTION 147d2ac90 FUN_147d2ac90 body=42 status=ok
// SIG undefined FUN_147d2ac90(void)

undefined8 FUN_147d2ac90(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xb8,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::IsValidLODIndex");
  return 0;
}



// FUNCTION 147d2acba FUN_147d2acba body=42 status=ok
// SIG undefined FUN_147d2acba(void)

undefined8 FUN_147d2acba(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xbb,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetMinLodIdx");
  return 0;
}



// FUNCTION 147d2ace4 FUN_147d2ace4 body=106 status=ok
// SIG undefined FUN_147d2ace4(void)

undefined8 * FUN_147d2ace4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb086c0) {
    FUN_144b3d300(&DAT_14cb086c0);
    if (DAT_14cb086c0 == -1) {
      DAT_14cb086b0 = 0;
      uRam000000014cb086b8 = 0;
      atexit((_func_5014 *)&LAB_1436f8718);
      _Init_thread_footer(&DAT_14cb086c0);
    }
  }
  return &DAT_14cb086b0;
}



// FUNCTION 147d2ad4e FUN_147d2ad4e body=106 status=ok
// SIG undefined FUN_147d2ad4e(void)

undefined8 * FUN_147d2ad4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb086d8) {
    FUN_144b3d300(&DAT_14cb086d8);
    if (DAT_14cb086d8 == -1) {
      DAT_14cb086c8 = 0;
      uRam000000014cb086d0 = 0;
      atexit((_func_5014 *)&LAB_1436f8729);
      _Init_thread_footer(&DAT_14cb086d8);
    }
  }
  return &DAT_14cb086c8;
}



// FUNCTION 147d2adbc FUN_147d2adbc body=42 status=ok
// SIG undefined FUN_147d2adbc(void)

undefined8 FUN_147d2adbc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xc9,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::NeedCPUData");
  return 0;
}



// FUNCTION 147d2ade6 FUN_147d2ade6 body=42 status=ok
// SIG undefined FUN_147d2ade6(void)

undefined8 FUN_147d2ade6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xcd,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetHasVertexColors");
  return 0;
}



// FUNCTION 147d2ae10 FUN_147d2ae10 body=42 status=ok
// SIG undefined FUN_147d2ae10(void)

undefined8 FUN_147d2ae10(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xd0,
                L"Pure virtual not implemented (%s)",L"USkinnedAsset::GetPlatformMinLODIdx");
  return 0;
}



// FUNCTION 147d2ae3a FUN_147d2ae3a body=122 status=ok
// SIG undefined FUN_147d2ae3a(void)

undefined * FUN_147d2ae3a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0xd3,
                L"Pure virtual not implemented (%s)",
                L"USkinnedAsset::GetDisableBelowMinLodStripping");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb086e0) {
    FUN_144b3d300(&DAT_14cb086e0);
    if (DAT_14cb086e0 == -1) {
      DAT_14cb086dc = 0;
      _Init_thread_footer(&DAT_14cb086e0);
    }
  }
  return &DAT_14cb086dc;
}



// FUNCTION 147d2aec0 FUN_147d2aec0 body=32 status=ok
// SIG undefined FUN_147d2aec0(void)

undefined8 FUN_147d2aec0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147d2aee0 FUN_147d2aee0 body=42 status=ok
// SIG undefined FUN_147d2aee0(void)

undefined8 FUN_147d2aee0(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x169,
                L"Pure virtual not implemented (%s)",
                L"USkinnedAsset::ShouldDeleteLODFromMemoryForDeviceProfile");
  return 0;
}



// FUNCTION 147d2af0a FUN_147d2af0a body=52 status=ok
// SIG undefined FUN_147d2af0a(void)

longlong FUN_147d2af0a(undefined8 param_1,longlong param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine\\SkinnedAsset.h",0x16b,
                L"Pure virtual not implemented (%s)",
                L"USkinnedAsset::GetMinLODForActiveDeviceProfile");
  *(undefined1 *)(param_2 + 4) = 0;
  return param_2;
}



// FUNCTION 147d2af3e FUN_147d2af3e body=48 status=ok
// SIG undefined FUN_147d2af3e(void)

longlong FUN_147d2af3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_1402161e2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2af76 FUN_147d2af76 body=63 status=ok
// SIG undefined FUN_147d2af76(void)

undefined8 * FUN_147d2af76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa95080;
  FUN_1449db362(param_1 + 0x3e);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b020 FUN_147d2b020 body=47 status=ok
// SIG undefined FUN_147d2b020(void)

undefined8 * FUN_147d2b020(longlong *param_1,undefined8 *param_2)

{
  if (*(int *)((longlong)param_1 + 0x29c) == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2);
  }
  else {
    *param_2 = *(undefined8 *)((longlong)param_1 + 0x29c);
  }
  return param_2;
}



// FUNCTION 147d2b050 FUN_147d2b050 body=45 status=ok
// SIG undefined FUN_147d2b050(void)

longlong FUN_147d2b050(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1461e2780(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b07e FUN_147d2b07e body=32 status=ok
// SIG undefined FUN_147d2b07e(void)

undefined8 FUN_147d2b07e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSlateSceneViewport");
  return param_2;
}



// FUNCTION 147d2b09e FUN_147d2b09e body=48 status=ok
// SIG undefined FUN_147d2b09e(void)

longlong FUN_147d2b09e(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_1461e2780(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b0e4 FUN_147d2b0e4 body=38 status=ok
// SIG undefined FUN_147d2b0e4(void)

undefined8 FUN_147d2b0e4(undefined8 param_1,int param_2)

{
  FUN_147d28b20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b118 FUN_147d2b118 body=45 status=ok
// SIG undefined FUN_147d2b118(void)

longlong FUN_147d2b118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1411b8a0e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b146 FUN_147d2b146 body=45 status=ok
// SIG undefined FUN_147d2b146(void)

longlong FUN_147d2b146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1411b8a0e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2b210 FUN_147d2b210 body=59 status=ok
// SIG undefined FUN_147d2b210(void)

undefined8 FUN_147d2b210(longlong *param_1)

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



// FUNCTION 147d2b2d8 FUN_147d2b2d8 body=63 status=ok
// SIG undefined FUN_147d2b2d8(void)

undefined1 FUN_147d2b2d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2b402(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 147d2b340 FUN_147d2b340 body=59 status=ok
// SIG undefined FUN_147d2b340(void)

undefined8 FUN_147d2b340(longlong *param_1)

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



// FUNCTION 147d2b38c FUN_147d2b38c body=40 status=ok
// SIG undefined FUN_147d2b38c(void)

void FUN_147d2b38c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_145aa9dd0(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147d2b402 FUN_147d2b402 body=150 status=ok
// SIG undefined FUN_147d2b402(void)

undefined8 * FUN_147d2b402(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_147d2b498(param_1 + 2,param_2 + 2);
  FUN_1406fa324(param_1 + 4,param_2 + 4);
  FUN_14054c6c4(param_1 + 6,param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar8 = param_2[9];
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[9];
    }
  }
  param_1[9] = lVar8;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x7d);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x85);
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x7d) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x85) = uVar7;
  return param_1;
}



// FUNCTION 147d2b498 FUN_147d2b498 body=89 status=ok
// SIG undefined FUN_147d2b498(void)

undefined8 * FUN_147d2b498(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d2b4f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d2b4f2 FUN_147d2b4f2 body=115 status=ok
// SIG undefined FUN_147d2b4f2(void)

void FUN_147d2b4f2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2b5c0 FUN_147d2b5c0 body=46 status=ok
// SIG undefined FUN_147d2b5c0(void)

void FUN_147d2b5c0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_2 + 8);
  return;
}



// FUNCTION 147d2b604 FUN_147d2b604 body=73 status=ok
// SIG undefined FUN_147d2b604(void)

undefined1 FUN_147d2b604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140816cc4();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d2b676 FUN_147d2b676 body=59 status=ok
// SIG undefined FUN_147d2b676(void)

undefined8 FUN_147d2b676(longlong *param_1)

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



// FUNCTION 147d2b6bc FUN_147d2b6bc body=54 status=ok
// SIG undefined FUN_147d2b6bc(void)

void FUN_147d2b6bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147d2b776 FUN_147d2b776 body=54 status=ok
// SIG undefined FUN_147d2b776(void)

undefined1 FUN_147d2b776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147d2b7d4 FUN_147d2b7d4 body=59 status=ok
// SIG undefined FUN_147d2b7d4(void)

undefined8 FUN_147d2b7d4(longlong *param_1)

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



// FUNCTION 147d2b81a FUN_147d2b81a body=37 status=ok
// SIG undefined FUN_147d2b81a(void)

void FUN_147d2b81a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147d2b8c4 FUN_147d2b8c4 body=54 status=ok
// SIG undefined FUN_147d2b8c4(void)

undefined1 FUN_147d2b8c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147d2b922 FUN_147d2b922 body=59 status=ok
// SIG undefined FUN_147d2b922(void)

undefined8 FUN_147d2b922(longlong *param_1)

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



// FUNCTION 147d2b968 FUN_147d2b968 body=37 status=ok
// SIG undefined FUN_147d2b968(void)

void FUN_147d2b968(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147d2b9ee FUN_147d2b9ee body=44 status=ok
// SIG undefined FUN_147d2b9ee(void)

void FUN_147d2b9ee(undefined8 param_1,longlong *param_2)

{
  FUN_147d2bb2a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2ba30 FUN_147d2ba30 body=54 status=ok
// SIG undefined FUN_147d2ba30(void)

undefined1 FUN_147d2ba30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2bb56(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147d2ba8e FUN_147d2ba8e body=59 status=ok
// SIG undefined FUN_147d2ba8e(void)

undefined8 FUN_147d2ba8e(longlong *param_1)

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



// FUNCTION 147d2bb2a FUN_147d2bb2a body=43 status=ok
// SIG undefined FUN_147d2bb2a(void)

void FUN_147d2bb2a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147d2bb56 FUN_147d2bb56 body=95 status=ok
// SIG undefined FUN_147d2bb56(void)

undefined8 * FUN_147d2bb56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147d2bb2a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d2bbb6(param_1,iVar1);
      FUN_147d2bc18(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d2bbb6 FUN_147d2bbb6 body=98 status=ok
// SIG undefined FUN_147d2bbb6(void)

void FUN_147d2bbb6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d2bc18 FUN_147d2bc18 body=120 status=ok
// SIG undefined FUN_147d2bc18(void)

void FUN_147d2bc18(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144756262(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d2bc92 FUN_147d2bc92 body=50 status=ok
// SIG undefined FUN_147d2bc92(void)

void FUN_147d2bc92(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147d2bb2a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147d2bd12 FUN_147d2bd12 body=54 status=ok
// SIG undefined FUN_147d2bd12(void)

undefined1 FUN_147d2bd12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2be6a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147d2bd70 FUN_147d2bd70 body=59 status=ok
// SIG undefined FUN_147d2bd70(void)

undefined8 FUN_147d2bd70(longlong *param_1)

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



// FUNCTION 147d2bdb6 FUN_147d2bdb6 body=32 status=ok
// SIG undefined FUN_147d2bdb6(void)

void FUN_147d2bdb6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_147d2be24(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147d2be24 FUN_147d2be24 body=70 status=ok
// SIG undefined FUN_147d2be24(void)

void FUN_147d2be24(longlong *param_1)

{
  FUN_140296a6e(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2be6a FUN_147d2be6a body=103 status=ok
// SIG undefined FUN_147d2be6a(void)

longlong FUN_147d2be6a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14054c6c4();
  FUN_14054c6c4(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x20,param_2 + 0x20);
  FUN_147d2bed2(param_1 + 0x38,param_2 + 0x38);
  FUN_147d2bf12(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 147d2bed2 FUN_147d2bed2 body=63 status=ok
// SIG undefined FUN_147d2bed2(void)

ulonglong * FUN_147d2bed2(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_147d2bf52(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 147d2bf12 FUN_147d2bf12 body=63 status=ok
// SIG undefined FUN_147d2bf12(void)

ulonglong * FUN_147d2bf12(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_147d2bfb8(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 147d2bf52 FUN_147d2bf52 body=102 status=ok
// SIG undefined FUN_147d2bf52(void)

void FUN_147d2bf52(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *pvVar1;
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14746620a(param_1,param_3,param_4);
    if (param_3 != 0) {
      pvVar1 = (void *)*param_1;
      _Dst = (void *)(((longlong)pvVar1 >> 0x18) + (longlong)param_1);
      if (((ulonglong)pvVar1 & 1) == 0) {
        _Dst = pvVar1;
      }
      memcpy(_Dst,param_2,(longlong)param_3 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 147d2bfb8 FUN_147d2bfb8 body=102 status=ok
// SIG undefined FUN_147d2bfb8(void)

void FUN_147d2bfb8(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *pvVar1;
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147cd6866(param_1,param_3,param_4);
    if (param_3 != 0) {
      pvVar1 = (void *)*param_1;
      _Dst = (void *)(((longlong)pvVar1 >> 0x18) + (longlong)param_1);
      if (((ulonglong)pvVar1 & 1) == 0) {
        _Dst = pvVar1;
      }
      memcpy(_Dst,param_2,(longlong)param_3 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 147d2c062 FUN_147d2c062 body=99 status=ok
// SIG undefined FUN_147d2c062(void)

undefined8 FUN_147d2c062(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_147d2bed2(param_2 + -0x10,param_3 + -0x10);
      FUN_147d2bf12(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0x1c);
      uVar2 = *(undefined4 *)(param_3 + 0x20);
      uVar3 = *(undefined4 *)(param_3 + 0x24);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
      *(undefined4 *)(param_2 + 0x20) = uVar2;
      *(undefined4 *)(param_2 + 0x24) = uVar3;
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d2c0ee FUN_147d2c0ee body=59 status=ok
// SIG undefined FUN_147d2c0ee(void)

undefined8 FUN_147d2c0ee(longlong *param_1)

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



// FUNCTION 147d2c134 FUN_147d2c134 body=32 status=ok
// SIG undefined FUN_147d2c134(void)

void FUN_147d2c134(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140296a6e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147d2c1da FUN_147d2c1da body=87 status=ok
// SIG undefined FUN_147d2c1da(void)

undefined1 FUN_147d2c1da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2c356(param_2,param_3);
    FUN_147d2c3b4(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147d2c25a FUN_147d2c25a body=59 status=ok
// SIG undefined FUN_147d2c25a(void)

undefined8 FUN_147d2c25a(longlong *param_1)

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



// FUNCTION 147d2c2a0 FUN_147d2c2a0 body=32 status=ok
// SIG undefined FUN_147d2c2a0(void)

void FUN_147d2c2a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_147d2c30e(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147d2c30e FUN_147d2c30e body=72 status=ok
// SIG undefined FUN_147d2c30e(void)

void FUN_147d2c30e(longlong *param_1)

{
  FUN_14074f529(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f4c0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2c356 FUN_147d2c356 body=93 status=ok
// SIG undefined FUN_147d2c356(void)

undefined8 * FUN_147d2c356(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14074f4c0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d2c412(param_1,iVar1);
      FUN_147d2c485(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d2c3b4 FUN_147d2c3b4 body=93 status=ok
// SIG undefined FUN_147d2c3b4(void)

undefined8 * FUN_147d2c3b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14074f529(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d2c5e2(param_1,iVar1);
      FUN_147d2c651(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d2c412 FUN_147d2c412 body=115 status=ok
// SIG undefined FUN_147d2c412(void)

void FUN_147d2c412(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2c485 FUN_147d2c485 body=80 status=ok
// SIG undefined FUN_147d2c485(void)

void FUN_147d2c485(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d2c4d6(param_1,param_2);
    *param_1 = &PTR_LAB_14aa91ce0;
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
    *(undefined4 *)(param_1 + 7) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
    param_1 = param_1 + 9;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147d2c4d6 FUN_147d2c4d6 body=266 status=ok
// SIG undefined FUN_147d2c4d6(void)

undefined8 * FUN_147d2c4d6(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  *param_1 = &PTR_LAB_14aa9a7a0;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  pvVar3 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    puVar1 = param_1 + 1;
    pvVar5 = (void *)(((longlong)pvVar3 >> 0x18) + param_2 + 8);
    if (((ulonglong)pvVar3 & 1) == 0) {
      pvVar5 = pvVar3;
    }
    FUN_14746620a(puVar1,iVar2,0);
    pvVar3 = (void *)*puVar1;
    pvVar4 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)puVar1);
    if (((ulonglong)pvVar3 & 1) == 0) {
      pvVar4 = pvVar3;
    }
    memcpy(pvVar4,pvVar5,(longlong)iVar2 << 2);
  }
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 0x20);
  pvVar3 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    puVar1 = param_1 + 3;
    pvVar5 = (void *)(((longlong)pvVar3 >> 0x18) + param_2 + 0x18);
    if (((ulonglong)pvVar3 & 1) == 0) {
      pvVar5 = pvVar3;
    }
    FUN_147cd6866(puVar1,iVar2,0);
    pvVar3 = (void *)*puVar1;
    pvVar4 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)puVar1);
    if (((ulonglong)pvVar3 & 1) == 0) {
      pvVar4 = pvVar3;
    }
    memcpy(pvVar4,pvVar5,(longlong)iVar2 << 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 147d2c5e2 FUN_147d2c5e2 body=111 status=ok
// SIG undefined FUN_147d2c5e2(void)

void FUN_147d2c5e2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2c651 FUN_147d2c651 body=52 status=ok
// SIG undefined FUN_147d2c651(void)

void FUN_147d2c651(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d2c686(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 147d2c686 FUN_147d2c686 body=268 status=ok
// SIG undefined FUN_147d2c686(void)

undefined8 * FUN_147d2c686(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  FUN_147d2c4d6(param_1 + 6,param_2 + 6);
  param_1[6] = &PTR_LAB_14aa91ce0;
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 147d2c804 FUN_147d2c804 body=59 status=ok
// SIG undefined FUN_147d2c804(void)

undefined8 FUN_147d2c804(longlong *param_1)

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



// FUNCTION 147d2c912 FUN_147d2c912 body=59 status=ok
// SIG undefined FUN_147d2c912(void)

undefined8 FUN_147d2c912(longlong *param_1)

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



// FUNCTION 147d2c9d2 FUN_147d2c9d2 body=48 status=ok
// SIG undefined FUN_147d2c9d2(void)

void FUN_147d2c9d2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2ca18 FUN_147d2ca18 body=91 status=ok
// SIG undefined FUN_147d2ca18(void)

undefined8 FUN_147d2ca18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_147d2cb38(param_2,param_3);
      FUN_147d2cb90(param_2 + 0x10,param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d2ca9c FUN_147d2ca9c body=59 status=ok
// SIG undefined FUN_147d2ca9c(void)

undefined8 FUN_147d2ca9c(longlong *param_1)

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



// FUNCTION 147d2cb38 FUN_147d2cb38 body=88 status=ok
// SIG undefined FUN_147d2cb38(void)

undefined8 * FUN_147d2cb38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d2cbea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d2cb90 FUN_147d2cb90 body=89 status=ok
// SIG undefined FUN_147d2cb90(void)

undefined8 * FUN_147d2cb90(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d2cc4c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d2cbea FUN_147d2cbea body=98 status=ok
// SIG undefined FUN_147d2cbea(void)

void FUN_147d2cbea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2cc4c FUN_147d2cc4c body=115 status=ok
// SIG undefined FUN_147d2cc4c(void)

void FUN_147d2cc4c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2ccc0 FUN_147d2ccc0 body=52 status=ok
// SIG undefined FUN_147d2ccc0(void)

void FUN_147d2ccc0(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147d2cd32 FUN_147d2cd32 body=100 status=ok
// SIG undefined FUN_147d2cd32(void)

undefined1 FUN_147d2cd32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2ce72(param_2,param_3);
    FUN_147d2c356(param_2 + 0x10,param_3 + 0x10);
    FUN_147d2c3b4(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147d2cdbe FUN_147d2cdbe body=59 status=ok
// SIG undefined FUN_147d2cdbe(void)

undefined8 FUN_147d2cdbe(longlong *param_1)

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



// FUNCTION 147d2ce04 FUN_147d2ce04 body=32 status=ok
// SIG undefined FUN_147d2ce04(void)

void FUN_147d2ce04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1417f0b0e(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147d2ce72 FUN_147d2ce72 body=93 status=ok
// SIG undefined FUN_147d2ce72(void)

undefined8 * FUN_147d2ce72(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14074f4e6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147d2ced0(param_1,iVar1);
      FUN_147d2cf43(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d2ced0 FUN_147d2ced0 body=115 status=ok
// SIG undefined FUN_147d2ced0(void)

void FUN_147d2ced0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2cf43 FUN_147d2cf43 body=52 status=ok
// SIG undefined FUN_147d2cf43(void)

void FUN_147d2cf43(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d2cf78(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 147d2cf78 FUN_147d2cf78 body=183 status=ok
// SIG undefined FUN_147d2cf78(void)

undefined8 * FUN_147d2cf78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  uVar2 = *param_2;
  *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 5);
  *param_1 = uVar2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147d2cbea(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_147d2cc4c(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 147d2d030 FUN_147d2d030 body=122 status=ok
// SIG undefined FUN_147d2d030(void)

longlong FUN_147d2d030(longlong param_1,longlong param_2)

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
    FUN_147d2d0aa(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147d2d0aa FUN_147d2d0aa body=119 status=ok
// SIG undefined FUN_147d2d0aa(void)

undefined8 * FUN_147d2d0aa(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403c621e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 147d2d122 FUN_147d2d122 body=38 status=ok
// SIG undefined FUN_147d2d122(void)

undefined8 FUN_147d2d122(undefined8 param_1,int param_2)

{
  FUN_1436ef5d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2d148 FUN_147d2d148 body=32 status=ok
// SIG undefined FUN_147d2d148(void)

undefined8 FUN_147d2d148(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Morph target mesh vertices");
  return param_2;
}



// FUNCTION 147d2d168 FUN_147d2d168 body=132 status=ok
// SIG undefined FUN_147d2d168(void)

void FUN_147d2d168(longlong param_1,int param_2)

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



// FUNCTION 147d2d1ee FUN_147d2d1ee body=289 status=ok
// SIG undefined FUN_147d2d1ee(void)

void FUN_147d2d1ee(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2d310 FUN_147d2d310 body=111 status=ok
// SIG undefined FUN_147d2d310(void)

void FUN_147d2d310(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14484255c(param_2,0x2f0);
  FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x1c) << 6);
  lVar1 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0xa0)) {
    lVar1 = (longlong)*(int *)(param_1 + 0xa0) * 4;
  }
  FUN_140347a44(param_2,lVar1 + (ulonglong)(*(int *)(param_1 + 0x84) + 0x1fU >> 5) * 4 +
                                (longlong)*(int *)(param_1 + 100) * 0x18);
  return;
}



// FUNCTION 147d2d380 FUN_147d2d380 body=114 status=ok
// SIG undefined FUN_147d2d380(void)

undefined8 * FUN_147d2d380(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 147d2d45e FUN_147d2d45e body=59 status=ok
// SIG undefined FUN_147d2d45e(void)

undefined8 FUN_147d2d45e(longlong *param_1)

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



// FUNCTION 147d2d53c FUN_147d2d53c body=62 status=ok
// SIG undefined FUN_147d2d53c(void)

undefined1 FUN_147d2d53c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147d2d5a2 FUN_147d2d5a2 body=59 status=ok
// SIG undefined FUN_147d2d5a2(void)

undefined8 FUN_147d2d5a2(longlong *param_1)

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



// FUNCTION 147d2d5e8 FUN_147d2d5e8 body=37 status=ok
// SIG undefined FUN_147d2d5e8(void)

void FUN_147d2d5e8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 147d2d684 FUN_147d2d684 body=63 status=ok
// SIG undefined FUN_147d2d684(void)

undefined1 FUN_147d2d684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d2d7ac(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 147d2d6ec FUN_147d2d6ec body=59 status=ok
// SIG undefined FUN_147d2d6ec(void)

undefined8 FUN_147d2d6ec(longlong *param_1)

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



// FUNCTION 147d2d738 FUN_147d2d738 body=38 status=ok
// SIG undefined FUN_147d2d738(void)

void FUN_147d2d738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_147d157c2(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147d2d7ac FUN_147d2d7ac body=311 status=ok
// SIG undefined FUN_147d2d7ac(void)

undefined8 * FUN_147d2d7ac(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  FUN_14054c6c4(param_1 + 1,param_2 + 1);
  puVar3 = param_2 + 3;
  puVar4 = param_1 + 3;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  FUN_140e00d48(param_1 + 0xe,param_2 + 0xe);
  FUN_140e00d48(param_1 + 0x10,param_2 + 0x10);
  FUN_147d1583e(param_1 + 0x12,param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  lVar2 = param_2[0x15];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[0x15];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[0x15] = lVar2;
  lVar2 = param_2[0x16];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[0x16];
    }
  }
  param_1[0x16] = lVar2;
  FUN_144a787a6(param_1 + 0x17,param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  FUN_147d2d8e4(param_1 + 0x1b,param_2 + 0x1b);
  *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe | *(byte *)(param_2 + 0x1d) & 1;
  return param_1;
}



// FUNCTION 147d2d8e4 FUN_147d2d8e4 body=88 status=ok
// SIG undefined FUN_147d2d8e4(void)

undefined8 * FUN_147d2d8e4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d1f04c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d2d97a FUN_147d2d97a body=113 status=ok
// SIG undefined FUN_147d2d97a(void)

undefined1 FUN_147d2d97a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x14 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)(plVar1 + 4) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d2da14 FUN_147d2da14 body=59 status=ok
// SIG undefined FUN_147d2da14(void)

undefined8 FUN_147d2da14(longlong *param_1)

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



// FUNCTION 147d2dab6 FUN_147d2dab6 body=107 status=ok
// SIG undefined FUN_147d2dab6(void)

undefined8 * FUN_147d2dab6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb082f0) {
    FUN_144b3d300(&DAT_14cb082f0);
    if (DAT_14cb082f0 == -1) {
      DAT_14cb082e8 = 0;
      atexit(FUN_1436efd6d);
      _Init_thread_footer(&DAT_14cb082f0);
    }
  }
  return &DAT_14cb082e8;
}



// FUNCTION 147d2db22 FUN_147d2db22 body=38 status=ok
// SIG undefined FUN_147d2db22(void)

undefined8 FUN_147d2db22(undefined8 param_1,int param_2)

{
  FUN_147d2dbac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2db4e FUN_147d2db4e body=45 status=ok
// SIG undefined FUN_147d2db4e(void)

longlong FUN_147d2db4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_147d2dbac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2db7c FUN_147d2db7c body=45 status=ok
// SIG undefined FUN_147d2db7c(void)

longlong FUN_147d2db7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_147d2dbac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2dbac FUN_147d2dbac body=118 status=ok
// SIG undefined FUN_147d2dbac(void)

void FUN_147d2dbac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aa98130;
  param_1[1] = &PTR_FUN_14aa98140;
  param_1[2] = &PTR_FUN_14aa98150;
  param_1[4] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x18];
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
  param_1[2] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 2);
  return;
}



// FUNCTION 147d2dc22 FUN_147d2dc22 body=29 status=ok
// SIG undefined FUN_147d2dc22(void)

undefined8 FUN_147d2dc22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2dc40 FUN_147d2dc40 body=32 status=ok
// SIG undefined FUN_147d2dc40(void)

bool FUN_147d2dc40(undefined8 param_1,longlong *param_2)

{
  FUN_147d2dc60();
  return DAT_14cb082f8 == *param_2;
}



// FUNCTION 147d2dc60 FUN_147d2dc60 body=104 status=ok
// SIG undefined FUN_147d2dc60(void)

void FUN_147d2dc60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb08300) {
    FUN_144b3d300(&DAT_14cb08300);
    if (DAT_14cb08300 == -1) {
      FUN_1446f470e(&DAT_14cb082f8,L"FInvisibleToWidgetReflectorMetaData",1);
      _Init_thread_footer(&DAT_14cb08300);
      return;
    }
  }
  return;
}



// FUNCTION 147d2dcc8 FUN_147d2dcc8 body=52 status=ok
// SIG undefined FUN_147d2dcc8(void)

void FUN_147d2dcc8(longlong *param_1)

{
  FUN_147d2dcfc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2dcfc FUN_147d2dcfc body=343 status=ok
// SIG undefined FUN_147d2dcfc(void)

void FUN_147d2dcfc(longlong *param_1)

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



// FUNCTION 147d2de54 FUN_147d2de54 body=98 status=ok
// SIG undefined FUN_147d2de54(void)

void FUN_147d2de54(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2deb6 FUN_147d2deb6 body=132 status=ok
// SIG undefined FUN_147d2deb6(void)

void FUN_147d2deb6(longlong param_1,int param_2)

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



// FUNCTION 147d2df3c FUN_147d2df3c body=147 status=ok
// SIG undefined FUN_147d2df3c(void)

void FUN_147d2df3c(longlong param_1,int param_2)

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



// FUNCTION 147d2dfd0 FUN_147d2dfd0 body=81 status=ok
// SIG undefined FUN_147d2dfd0(void)

void FUN_147d2dfd0(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x308;
    do {
      FUN_140137a98(param_1);
      FUN_140296ab8(param_1 + -0x50);
      FUN_140296d44(param_1 + -0xd8);
      FUN_1412b7f2a(param_1 + -0x2f8);
      param_1 = param_1 + 0x3c0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147d2e022 FUN_147d2e022 body=146 status=ok
// SIG undefined FUN_147d2e022(void)

void FUN_147d2e022(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x3c0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x3c0)) {
      uVar5 = uVar4 / 0x3c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x3c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d2e0b6 FUN_147d2e0b6 body=48 status=ok
// SIG undefined FUN_147d2e0b6(void)

void FUN_147d2e0b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147d2e0e6 FUN_147d2e0e6 body=132 status=ok
// SIG undefined FUN_147d2e0e6(void)

void FUN_147d2e0e6(longlong param_1,int param_2)

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



// FUNCTION 147d2e16c FUN_147d2e16c body=112 status=ok
// SIG undefined FUN_147d2e16c(void)

void FUN_147d2e16c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 147d2e1dc FUN_147d2e1dc body=147 status=ok
// SIG undefined FUN_147d2e1dc(void)

void FUN_147d2e1dc(longlong param_1,int param_2)

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



// FUNCTION 147d2e270 FUN_147d2e270 body=147 status=ok
// SIG undefined FUN_147d2e270(void)

void FUN_147d2e270(longlong param_1,int param_2)

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



// FUNCTION 147d2e304 FUN_147d2e304 body=147 status=ok
// SIG undefined FUN_147d2e304(void)

void FUN_147d2e304(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d2e398 FUN_147d2e398 body=346 status=ok
// SIG undefined FUN_147d2e398(void)

void FUN_147d2e398(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d22f44(*param_2,lVar11,param_4,param_5,param_6,*param_7,param_8,param_9,param_10);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147d2e4f2 FUN_147d2e4f2 body=292 status=ok
// SIG undefined FUN_147d2e4f2(void)

void FUN_147d2e4f2(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147d23422(*param_2,lVar11,param_4,param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147d2e616 FUN_147d2e616 body=95 status=ok
// SIG undefined FUN_147d2e616(void)

void FUN_147d2e616(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147d2e675 FUN_147d2e675 body=60 status=ok
// SIG undefined FUN_147d2e675(void)

void FUN_147d2e675(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[10] = 0;
    param_1[0xb] = 0;
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
    param_1[0xc] = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 147d2e6b2 FUN_147d2e6b2 body=143 status=ok
// SIG undefined FUN_147d2e6b2(void)

void FUN_147d2e6b2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d2e742 FUN_147d2e742 body=48 status=ok
// SIG undefined FUN_147d2e742(void)

void FUN_147d2e742(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 147d2e772 FUN_147d2e772 body=311 status=ok
// SIG undefined FUN_147d2e772(void)

void FUN_147d2e772(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2e8aa FUN_147d2e8aa body=64 status=ok
// SIG undefined FUN_147d2e8aa(void)

void FUN_147d2e8aa(void)

{
  if (DAT_14cb07ddc != 0) {
    DAT_14cb07ddc = 0;
    FUN_1446f8d3c(&DAT_14cb07dd0,DAT_14cb07dd8,0,8,8);
  }
  return;
}



// FUNCTION 147d2e8ea FUN_147d2e8ea body=411 status=ok
// SIG undefined FUN_147d2e8ea(void)

void FUN_147d2e8ea(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 147d2ea86 FUN_147d2ea86 body=62 status=ok
// SIG undefined FUN_147d2ea86(void)

void FUN_147d2ea86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d2eac4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 147d2eac4 FUN_147d2eac4 body=112 status=ok
// SIG undefined FUN_147d2eac4(void)

ulonglong FUN_147d2eac4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d2eafe;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,0x10);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147d2eafe:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d2eb34 FUN_147d2eb34 body=115 status=ok
// SIG undefined FUN_147d2eb34(void)

void FUN_147d2eb34(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,0x10);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d2eba7 FUN_147d2eba7 body=38 status=ok
// SIG undefined FUN_147d2eba7(void)

void FUN_147d2eba7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147d2ebce(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 147d2ebce FUN_147d2ebce body=72 status=ok
// SIG undefined FUN_147d2ebce(void)

void FUN_147d2ebce(longlong param_1)

{
  FUN_1401d38b5(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1448d20d1(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d2ec16 FUN_147d2ec16 body=143 status=ok
// SIG undefined FUN_147d2ec16(void)

void FUN_147d2ec16(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d2eca6 FUN_147d2eca6 body=60 status=ok
// SIG undefined FUN_147d2eca6(void)

void FUN_147d2eca6(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x238;
    do {
      FUN_140137a98(param_1);
      FUN_1412b7f2a(param_1 + -0x228);
      param_1 = param_1 + 0x2f0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147d2ece2 FUN_147d2ece2 body=150 status=ok
// SIG undefined FUN_147d2ece2(void)

void FUN_147d2ece2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2f0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2f0)) {
      uVar5 = uVar4 / 0x2f0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2f0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d2ed7a FUN_147d2ed7a body=31 status=ok
// SIG undefined FUN_147d2ed7a(void)

undefined8 FUN_147d2ed7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2edb6 FUN_147d2edb6 body=93 status=ok
// SIG undefined FUN_147d2edb6(void)

void FUN_147d2edb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa98f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d2ee14 FUN_147d2ee14 body=93 status=ok
// SIG undefined FUN_147d2ee14(void)

void FUN_147d2ee14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa98f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d2ee72 FUN_147d2ee72 body=126 status=ok
// SIG undefined FUN_147d2ee72(void)

void FUN_147d2ee72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ee9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa98f40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d2eee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2eefe FUN_147d2eefe body=21 status=ok
// SIG undefined FUN_147d2eefe(void)

undefined8 FUN_147d2eefe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147d2ef14 FUN_147d2ef14 body=31 status=ok
// SIG undefined FUN_147d2ef14(void)

undefined8 FUN_147d2ef14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2ef4c FUN_147d2ef4c body=101 status=ok
// SIG undefined FUN_147d2ef4c(void)

void FUN_147d2ef4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa99190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d2efb2 FUN_147d2efb2 body=101 status=ok
// SIG undefined FUN_147d2efb2(void)

void FUN_147d2efb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa9a7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa99190;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147d2f018 FUN_147d2f018 body=134 status=ok
// SIG undefined FUN_147d2f018(void)

void FUN_147d2f018(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa9a7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa99190;
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
                    /* WARNING: Could not recover jumptable at 0x000147d2f08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2f0b0 FUN_147d2f0b0 body=25 status=ok
// SIG undefined FUN_147d2f0b0(void)

undefined8 FUN_147d2f0b0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147d2f0cc FUN_147d2f0cc body=62 status=ok
// SIG undefined FUN_147d2f0cc(void)

void FUN_147d2f0cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d2f10a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d2f10a FUN_147d2f10a body=93 status=ok
// SIG undefined FUN_147d2f10a(void)

ulonglong FUN_147d2f10a(uint param_1,uint param_2)

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



// FUNCTION 147d2f168 FUN_147d2f168 body=68 status=ok
// SIG undefined FUN_147d2f168(void)

undefined8 * FUN_147d2f168(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aa992d0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2f1b0 FUN_147d2f1b0 body=81 status=ok
// SIG undefined FUN_147d2f1b0(void)

undefined8 FUN_147d2f1b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147d2f208 FUN_147d2f208 body=89 status=ok
// SIG undefined FUN_147d2f208(void)

bool FUN_147d2f208(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147d2f253;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147d2f253:
  return lVar6 == param_2;
}



// FUNCTION 147d2f262 FUN_147d2f262 body=118 status=ok
// SIG undefined FUN_147d2f262(void)

void FUN_147d2f262(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa992d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147d2f2d8 FUN_147d2f2d8 body=156 status=ok
// SIG undefined FUN_147d2f2d8(void)

void FUN_147d2f2d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa992d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d2f364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2f374 FUN_147d2f374 body=100 status=ok
// SIG undefined FUN_147d2f374(void)

ulonglong FUN_147d2f374(longlong param_1)

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
LAB_147d2f3cd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147d2f3cd;
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



// FUNCTION 147d2f3d8 FUN_147d2f3d8 body=45 status=ok
// SIG undefined FUN_147d2f3d8(void)

void FUN_147d2f3d8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aa95080;
  FUN_1449db362(param_1 + 0x200);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 147d2f406 FUN_147d2f406 body=29 status=ok
// SIG undefined FUN_147d2f406(void)

undefined8 FUN_147d2f406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2f424 FUN_147d2f424 body=1 status=ok
// SIG undefined FUN_147d2f424(void)

void FUN_147d2f424(void)

{
  return;
}



// FUNCTION 147d2f426 FUN_147d2f426 body=29 status=ok
// SIG undefined FUN_147d2f426(void)

undefined8 FUN_147d2f426(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2f444 FUN_147d2f444 body=68 status=ok
// SIG undefined FUN_147d2f444(void)

undefined8 * FUN_147d2f444(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aa993a0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2f48c FUN_147d2f48c body=81 status=ok
// SIG undefined FUN_147d2f48c(void)

undefined8 FUN_147d2f48c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147d2f4e4 FUN_147d2f4e4 body=89 status=ok
// SIG undefined FUN_147d2f4e4(void)

bool FUN_147d2f4e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147d2f52f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147d2f52f:
  return lVar6 == param_2;
}



// FUNCTION 147d2f55a FUN_147d2f55a body=118 status=ok
// SIG undefined FUN_147d2f55a(void)

void FUN_147d2f55a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa993a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147d2f5d0 FUN_147d2f5d0 body=156 status=ok
// SIG undefined FUN_147d2f5d0(void)

void FUN_147d2f5d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa993a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d2f65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2f66c FUN_147d2f66c body=105 status=ok
// SIG undefined FUN_147d2f66c(void)

undefined8 FUN_147d2f66c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147d2f6c0:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147d2f6c0;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 147d2f6d6 FUN_147d2f6d6 body=143 status=ok
// SIG undefined FUN_147d2f6d6(void)

ulonglong FUN_147d2f6d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147d2f744:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147d2f744;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_1c);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147d2f766 FUN_147d2f766 body=68 status=ok
// SIG undefined FUN_147d2f766(void)

undefined8 * FUN_147d2f766(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aa99410;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d2f7ae FUN_147d2f7ae body=81 status=ok
// SIG undefined FUN_147d2f7ae(void)

undefined8 FUN_147d2f7ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147d2f806 FUN_147d2f806 body=89 status=ok
// SIG undefined FUN_147d2f806(void)

bool FUN_147d2f806(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147d2f851;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147d2f851:
  return lVar6 == param_2;
}



// FUNCTION 147d2f87c FUN_147d2f87c body=118 status=ok
// SIG undefined FUN_147d2f87c(void)

void FUN_147d2f87c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa99410;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147d2f8f2 FUN_147d2f8f2 body=156 status=ok
// SIG undefined FUN_147d2f8f2(void)

void FUN_147d2f8f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa99410;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d2f97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d2f98e FUN_147d2f98e body=100 status=ok
// SIG undefined FUN_147d2f98e(void)

void FUN_147d2f98e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147d2f9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147d2f9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147d2f9f2 FUN_147d2f9f2 body=100 status=ok
// SIG undefined FUN_147d2f9f2(void)

ulonglong FUN_147d2f9f2(longlong param_1)

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
LAB_147d2fa4b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147d2fa4b;
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



// FUNCTION 147d2fa56 FUN_147d2fa56 body=352 status=ok
// SIG undefined FUN_147d2fa56(void)

undefined4 * FUN_147d2fa56(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d2fbb8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147d2fc9e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d2fdd0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d2fbb8 FUN_147d2fbb8 body=229 status=ok
// SIG undefined FUN_147d2fbb8(void)

int * FUN_147d2fbb8(longlong *param_1,int *param_2)

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



// FUNCTION 147d2fc9e FUN_147d2fc9e body=191 status=ok
// SIG undefined FUN_147d2fc9e(void)

undefined8 FUN_147d2fc9e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147d2fd5e(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d2fd5e FUN_147d2fd5e body=114 status=ok
// SIG undefined FUN_147d2fd5e(void)

void FUN_147d2fd5e(longlong *param_1,int param_2)

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



// FUNCTION 147d2fdd0 FUN_147d2fdd0 body=476 status=ok
// SIG undefined FUN_147d2fdd0(void)

void FUN_147d2fdd0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147d2ffae FUN_147d2ffae body=127 status=ok
// SIG undefined FUN_147d2ffae(void)

void FUN_147d2ffae(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_145716b16(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d3002e FUN_147d3002e body=322 status=ok
// SIG undefined FUN_147d3002e(void)

void FUN_147d3002e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 147d302aa FUN_147d302aa body=24 status=ok
// SIG undefined FUN_147d302aa(void)

void FUN_147d302aa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d302be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147d302c2 FUN_147d302c2 body=38 status=ok
// SIG undefined FUN_147d302c2(void)

undefined8 FUN_147d302c2(undefined8 param_1,int param_2)

{
  FUN_140a58a56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d302e8 FUN_147d302e8 body=131 status=ok
// SIG undefined FUN_147d302e8(void)

void FUN_147d302e8(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14571752e(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_1457174ba(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 147d3036c FUN_147d3036c body=102 status=ok
// SIG undefined FUN_147d3036c(void)

undefined8 * FUN_147d3036c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_147d3041f(*param_1,*(undefined4 *)(param_1 + 1));
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 5) * -0x49249249;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147d30448(param_1,iVar2);
    FUN_147d304ba(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 147d303d2 FUN_147d303d2 body=77 status=ok
// SIG undefined FUN_147d303d2(void)

void FUN_147d303d2(longlong *param_1)

{
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  FUN_147046490(param_1 + 5);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d30414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 147d3041f FUN_147d3041f body=41 status=ok
// SIG undefined FUN_147d3041f(void)

void FUN_147d3041f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147d303d2(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 147d30448 FUN_147d30448 body=114 status=ok
// SIG undefined FUN_147d30448(void)

void FUN_147d30448(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d304ba FUN_147d304ba body=60 status=ok
// SIG undefined FUN_147d304ba(void)

void FUN_147d304ba(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147d304f6(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 147d304f6 FUN_147d304f6 body=140 status=ok
// SIG undefined FUN_147d304f6(void)

longlong * FUN_147d304f6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_1[4] = param_2[4];
  FUN_1477cfa06(param_1 + 5,param_2 + 5);
  plVar1 = (longlong *)param_2[0x19];
  param_1[0x19] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = (int)param_2[0x1b];
  return param_1;
}



// FUNCTION 147d30582 FUN_147d30582 body=63 status=ok
// SIG undefined FUN_147d30582(void)

void FUN_147d30582(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147d305c1 FUN_147d305c1 body=74 status=ok
// SIG undefined FUN_147d305c1(void)

void FUN_147d305c1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[6] + 0x10))();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x10))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 147d3060c FUN_147d3060c body=112 status=ok
// SIG undefined FUN_147d3060c(void)

void FUN_147d3060c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147d30582(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_147d305c1(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_147d3041f(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d3067c FUN_147d3067c body=156 status=ok
// SIG undefined FUN_147d3067c(void)

void FUN_147d3067c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    lVar1 = 0x130;
  }
  else {
    lVar1 = (ulonglong)
            *(uint *)(*(longlong *)
                       (**(longlong **)(lVar2 + 0x60) + (longlong)*(int *)(lVar2 + 0x54) * 8) + 0xec
                     ) * 0x18 + 0x130;
  }
  if (*(longlong *)(lVar2 + 0x78) == 0) {
    lVar2 = 0x58;
  }
  else {
    lVar2 = (ulonglong)
            *(uint *)(*(longlong *)
                       (**(longlong **)(lVar2 + 0xb8) + (longlong)*(int *)(lVar2 + 0xac) * 8) + 0xec
                     ) * 0x18 + 0x58;
  }
  FUN_140347a44(param_2,lVar2 + lVar1);
  FUN_140347a44(param_2,((longlong)*(int *)(param_1 + 0x34) + (longlong)*(int *)(param_1 + 0x24)) *
                        8);
  return;
}



// FUNCTION 147d3071c FUN_147d3071c body=41 status=ok
// SIG undefined FUN_147d3071c(void)

void FUN_147d3071c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x388))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d30778 FUN_147d30778 body=103 status=ok
// SIG undefined FUN_147d30778(void)

void FUN_147d30778(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147d307e0 FUN_147d307e0 body=99 status=ok
// SIG undefined FUN_147d307e0(void)

void FUN_147d307e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d30876 FUN_147d30876 body=20 status=ok
// SIG undefined FUN_147d30876(void)

ulonglong FUN_147d30876(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x300))();
  return uVar1 ^ 1;
}



// FUNCTION 147d3088a FUN_147d3088a body=28 status=ok
// SIG undefined FUN_147d3088a(void)

bool FUN_147d3088a(longlong *param_1)

{
  float extraout_XMM0_Da;
  
  (**(code **)(*param_1 + 0x2c8))();
  return 10000.0 <= extraout_XMM0_Da;
}



// FUNCTION 147d308a6 FUN_147d308a6 body=35 status=ok
// SIG undefined FUN_147d308a6(void)

undefined8 FUN_147d308a6(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x318))();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x48)) &
            0xffffffffffffff20;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
  }
  return uVar3;
}



// FUNCTION 147d308ca FUN_147d308ca body=80 status=ok
// SIG undefined FUN_147d308ca(void)

longlong FUN_147d308ca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 == 0) &&
     (((plVar1 = (longlong *)FUN_145b54fcc(), plVar1[0x22] == 0 &&
       ((**(code **)(*plVar1 + 1000))(plVar1), plVar1[0x22] == 0)) ||
      (lVar2 = FUN_147975464(), lVar2 == 0)))) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147d30922 FUN_147d30922 body=18 status=ok
// SIG undefined FUN_147d30922(void)

void FUN_147d30922(longlong param_1,undefined8 param_2)

{
  FUN_1477daebe(param_2,param_1 + 0x120);
  return;
}



// FUNCTION 147d30934 FUN_147d30934 body=29 status=ok
// SIG undefined FUN_147d30934(void)

void FUN_147d30934(longlong param_1,char param_2,undefined8 param_3)

{
  FUN_1477daf1e(param_3,(ulonglong)(param_2 == '\0') * 0x10 + param_1 + 0x138);
  return;
}



// FUNCTION 147d30bae FUN_147d30bae body=269 status=ok
// SIG undefined FUN_147d30bae(void)

void FUN_147d30bae(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 0x26);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x27];
    *(uint *)(param_1 + 0x27) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x13c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x26,iVar1);
    }
    *(longlong *)(param_1[0x26] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d30cbc FUN_147d30cbc body=181 status=ok
// SIG undefined FUN_147d30cbc(void)

longlong FUN_147d30cbc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147d30d05:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_147d30d27;
        }
        else {
          if (lVar3 != 0) goto LAB_147d30d05;
LAB_147d30d27:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x138));
  }
  return 0;
}



// FUNCTION 147d30d72 FUN_147d30d72 body=281 status=ok
// SIG undefined FUN_147d30d72(void)

void FUN_147d30d72(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x138);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d30dc5:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147d30de7;
        }
        else {
          if (lVar5 != 0) goto LAB_147d30dc5;
LAB_147d30de7:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x138);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x138);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x130) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x130) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x138);
            }
            *(int *)(param_1 + 0x138) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x130));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147d30e9e FUN_147d30e9e body=106 status=ok
// SIG undefined FUN_147d30e9e(void)

void FUN_147d30e9e(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)(int)param_2[1];
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 * 0xa0;
    do {
      lVar4 = lVar4 + -0xa0;
      cVar2 = (**(code **)(*param_1 + 0x370))(param_1,*param_2 + lVar4);
      if (cVar2 == '\0') {
        FUN_147d44f34(param_2,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 147d30f52 FUN_147d30f52 body=80 status=ok
// SIG undefined FUN_147d30f52(void)

undefined8 * FUN_147d30f52(undefined8 *param_1)

{
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = 0x3f800000469c4000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0x80 | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  FUN_1458d7850(param_1 + 5);
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 147d30fae FUN_147d30fae body=198 status=ok
// SIG undefined FUN_147d30fae(void)

void FUN_147d30fae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  longlong lStack_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  longlong local_178;
  undefined4 local_170;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  lStack_1b0 = param_2;
  switchD_143c3d4dc::caseD_20();
  if (*(int *)(param_2 + 0x40) < 0x107) {
    local_198 = 0;
    local_190 = 0;
    local_1b8 = (undefined **)0x0;
    lStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = 0;
    local_170 = 0;
    FUN_147d44fa8(param_2,&local_1b8);
    local_170 = 0;
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    FUN_147d432b2(&local_1b8);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d31076 FUN_147d31076 body=57 status=ok
// SIG undefined FUN_147d31076(void)

void FUN_147d31076(undefined8 param_1)

{
  FUN_1446e0b6e();
  if ((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) {
    FUN_147973676(*(longlong *)(DAT_14cb0d2b0 + 0xf50),param_1);
    return;
  }
  return;
}



// FUNCTION 147d310b0 FUN_147d310b0 body=39 status=ok
// SIG undefined FUN_147d310b0(void)

undefined8 FUN_147d310b0(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Children: %d",*(undefined4 *)(param_1 + 0x1c8));
  return param_2;
}



// FUNCTION 147d310e8 FUN_147d310e8 body=14 status=ok
// SIG undefined FUN_147d310e8(void)

undefined4 FUN_147d310e8(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 5) - 7;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0xfffffffd);
}



// FUNCTION 147d310f6 FUN_147d310f6 body=21 status=ok
// SIG undefined FUN_147d310f6(void)

void FUN_147d310f6(longlong *param_1,longlong param_2)

{
  *param_1 = param_2 + 0x28;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 147d3110c FUN_147d3110c body=11 status=ok
// SIG undefined FUN_147d3110c(void)

void FUN_147d3110c(longlong param_1,float param_2)

{
  *(float *)(param_1 + 8) = param_2 + *(float *)(param_1 + 8);
  return;
}



// FUNCTION 147d31118 FUN_147d31118 body=151 status=ok
// SIG undefined FUN_147d31118(void)

undefined8 FUN_147d31118(longlong param_1,char param_2)

{
  float fVar1;
  uint extraout_XMM0_Db;
  float fVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  if (fVar1 <= 1e-08) {
    fVar1 = 1e-08;
  }
  fVar1 = *(float *)(param_1 + 8) / fVar1;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  fVar2 = 0.0;
  uVar3 = 0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10)) * fVar1 +
          *(float *)(param_1 + 0x10);
  if (param_2 == '\0') {
    fVar1 = powf(10.0,fVar1 / 20.0);
    if (DAT_14c761b4c <= fVar1) {
      fVar2 = (float)(~-(uint)(ABS(fVar1 - DAT_14c761b4c) <= 1e-08) & (uint)fVar1);
      uVar3 = ~(extraout_XMM0_Db & 0x7fffffff) & extraout_XMM0_Db;
    }
  }
  else {
    uVar3 = 0;
    fVar2 = fVar1;
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 147d311b0 FUN_147d311b0 body=2550 status=ok
// SIG undefined FUN_147d311b0(void)

void FUN_147d311b0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_3e8 [40];
  longlong *local_3c0;
  ulonglong local_3b8;
  longlong *local_3b0;
  int local_3a4;
  longlong local_3a0;
  longlong local_398;
  longlong *local_390;
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [190];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar17 = *(uint *)(param_1 + 1);
  iVar14 = (int)param_1[3];
  if (iVar14 < (int)uVar17) {
    if (1 < (int)uVar17) {
      bVar1 = *(byte *)((longlong)param_1 + 0x1d);
      lVar19 = *param_1;
      local_390 = param_1;
      memset(local_378,0,0x2f0);
      local_380 = lVar19 + (ulonglong)uVar17 * 8 + -8;
      local_388 = lVar19;
      fVar23 = logf((float)(int)uVar17);
      local_378[0] = (int)(longlong)(fVar23 + fVar23);
      local_3a4 = bVar1 - 4;
      plVar13 = &local_388;
      do {
        plVar9 = (longlong *)*plVar13;
        plVar10 = (longlong *)plVar13[1];
        iVar14 = (int)plVar13[2];
        iVar2 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar9) >> 3);
        uVar18 = (ulonglong)(iVar2 + 1);
        local_3c0 = plVar13;
        if (iVar14 != 0) {
LAB_147d31296:
          if (8 < (int)(uint)uVar18) {
            local_3b8 = CONCAT44(local_3b8._4_4_,iVar14);
            uVar17 = (uint)uVar18 >> 1;
            lVar19 = plVar9[uVar17];
            plVar9[uVar17] = *plVar9;
            *plVar9 = lVar19;
            plVar6 = plVar10 + 1;
            plVar11 = plVar9;
            local_3b0 = plVar10;
            do {
              plVar11 = plVar11 + 1;
              if ((plVar11 <= plVar10) && ((byte)local_3a4 < 3)) {
                do {
                  lVar19 = *plVar11;
                  lVar5 = *plVar9;
                  if (bVar1 == 5) {
                    if (ABS(*(float *)(lVar5 + 0x220) - *(float *)(lVar19 + 0x220)) <= 0.0001) {
                      if (*(uint *)(lVar19 + 0x54) < *(uint *)(lVar5 + 0x54)) break;
                    }
                    else if (*(float *)(lVar5 + 0x220) < *(float *)(lVar19 + 0x220)) break;
                  }
                  else {
                    fVar23 = (float)FUN_1478b3d66(lVar5);
                    fVar24 = (float)FUN_1478b3d66(lVar19);
                    if (ABS(fVar23 - fVar24) <= 0.0001) {
                      if (bVar1 == 6) {
                        if (*(uint *)(lVar19 + 0x54) < *(uint *)(lVar5 + 0x54)) break;
                      }
                      else if (*(uint *)(lVar5 + 0x54) < *(uint *)(lVar19 + 0x54)) break;
                    }
                    else if (fVar23 < fVar24) break;
                  }
                  plVar11 = plVar11 + 1;
                } while (plVar11 <= plVar10);
              }
              plVar3 = plVar6 + -1;
              if ((plVar9 < plVar3) && ((byte)local_3a4 < 3)) {
                do {
                  plVar13 = plVar3;
                  lVar19 = *plVar9;
                  lVar5 = plVar6[-1];
                  plVar3 = plVar13;
                  if (bVar1 == 5) {
                    if (ABS(*(float *)(lVar5 + 0x220) - *(float *)(lVar19 + 0x220)) <= 0.0001) {
                      if (*(uint *)(lVar19 + 0x54) < *(uint *)(lVar5 + 0x54)) break;
                    }
                    else if (*(float *)(lVar5 + 0x220) < *(float *)(lVar19 + 0x220)) break;
                  }
                  else {
                    fVar23 = (float)FUN_1478b3d66(lVar5);
                    fVar24 = (float)FUN_1478b3d66(lVar19);
                    if (ABS(fVar23 - fVar24) <= 0.0001) {
                      if (bVar1 == 6) {
                        if (*(uint *)(lVar19 + 0x54) < *(uint *)(lVar5 + 0x54)) break;
                      }
                      else if (*(uint *)(lVar5 + 0x54) < *(uint *)(lVar19 + 0x54)) {
                        plVar6 = plVar13 + 1;
                        break;
                      }
                    }
                    else if (fVar23 < fVar24) break;
                  }
                  plVar3 = plVar13 + -1;
                  plVar6 = plVar13;
                } while (plVar9 < plVar3);
              }
              if (plVar3 < plVar11) goto LAB_147d31433;
              lVar19 = *plVar11;
              *plVar11 = *plVar3;
              *plVar3 = lVar19;
              plVar6 = plVar3;
            } while( true );
          }
          goto joined_r0x000147d31a0f;
        }
LAB_147d314ec:
        plVar13 = local_3c0;
        if ((int)uVar18 != 0) {
          uVar17 = (iVar2 - (iVar2 + -1 >> 0x1f)) + -1 >> 1;
          local_3b8 = uVar18;
          do {
            plVar13 = (longlong *)(ulonglong)uVar17;
            uVar7 = uVar17 * 2 + 1;
            plVar10 = plVar13;
            if ((int)uVar7 < (int)uVar18) {
              do {
                uVar17 = uVar17 * 2 + 2;
                plVar6 = (longlong *)(ulonglong)uVar17;
                iVar14 = (int)plVar10;
                if ((int)uVar18 <= (int)uVar17) {
                  lVar19 = (longlong)(int)uVar7;
LAB_147d31564:
                  lVar15 = lVar19;
                  plVar11 = (longlong *)(ulonglong)uVar7;
                  goto LAB_147d31567;
                }
                lVar12 = (longlong)(int)uVar17;
                plVar10 = plVar9 + lVar12;
                lVar15 = (longlong)(int)uVar7;
                lVar5 = plVar9[lVar15];
                lVar4 = *plVar10;
                if (bVar1 == 5) {
                  fVar23 = *(float *)(lVar4 + 0x220);
                  if (ABS(fVar23 - *(float *)(lVar5 + 0x220)) <= 0.0001) {
                    plVar11 = (longlong *)(ulonglong)uVar7;
                    if (*(uint *)(lVar4 + 0x54) <= *(uint *)(lVar5 + 0x54)) goto LAB_147d3164e;
LAB_147d31567:
                    plVar6 = plVar11;
                    plVar11 = plVar9 + iVar14;
                    plVar10 = plVar9 + lVar15;
                    lVar4 = *plVar10;
                    lVar19 = *plVar11;
                    if (bVar1 != 5) {
                      if ((bVar1 == 4) || (bVar1 == 6)) goto LAB_147d31664;
                      goto LAB_147d315a0;
                    }
                    fVar23 = *(float *)(lVar4 + 0x220);
                  }
                  else {
                    plVar11 = (longlong *)(ulonglong)uVar7;
                    if (fVar23 < *(float *)(lVar5 + 0x220)) goto LAB_147d31567;
LAB_147d3164e:
                    plVar11 = plVar9 + iVar14;
                    lVar19 = *plVar11;
                  }
                  if (ABS(*(float *)(lVar19 + 0x220) - fVar23) <= 0.0001) {
                    if (*(uint *)(lVar19 + 0x54) <= *(uint *)(lVar4 + 0x54)) break;
                  }
                  else if (fVar23 <= *(float *)(lVar19 + 0x220)) break;
                }
                else {
                  if ((bVar1 != 4) && (lVar19 = lVar15, bVar1 != 6)) goto LAB_147d31564;
                  local_3b0 = plVar13;
                  local_3a0 = lVar15;
                  local_398 = lVar4;
                  fVar23 = (float)FUN_1478b3d66();
                  fVar24 = (float)FUN_1478b3d66(lVar5);
                  plVar13 = local_3b0;
                  lVar15 = lVar12;
                  lVar19 = local_3a0;
                  uVar18 = local_3b8;
                  plVar11 = plVar6;
                  if (0.0001 < ABS(fVar23 - fVar24)) {
                    if (fVar23 < fVar24) goto LAB_147d31564;
                    goto LAB_147d31567;
                  }
                  if (bVar1 != 6) {
                    if (*(uint *)(local_398 + 0x54) < *(uint *)(lVar5 + 0x54)) goto LAB_147d31564;
                    goto LAB_147d31567;
                  }
                  lVar15 = local_3a0;
                  plVar11 = (longlong *)(ulonglong)uVar7;
                  if (*(uint *)(lVar5 + 0x54) < *(uint *)(local_398 + 0x54)) goto LAB_147d31567;
                  plVar11 = plVar9 + iVar14;
                  lVar4 = *plVar10;
                  lVar19 = *plVar11;
LAB_147d31664:
                  fVar23 = (float)FUN_1478b3d66(lVar19);
                  fVar24 = (float)FUN_1478b3d66(lVar4);
                  uVar18 = local_3b8;
                  if (ABS(fVar23 - fVar24) <= 0.0001) {
                    uVar17 = *(uint *)(lVar19 + 0x54);
                    uVar7 = *(uint *)(lVar4 + 0x54);
                    if (bVar1 != 6) {
                      if (uVar17 < uVar7) goto LAB_147d315a0;
                      break;
                    }
                    bVar21 = uVar17 < uVar7;
                    bVar22 = uVar17 == uVar7;
                  }
                  else {
                    bVar22 = fVar24 == fVar23;
                    bVar21 = fVar24 < fVar23;
                  }
                  if (bVar21 || bVar22) break;
                }
LAB_147d315a0:
                lVar19 = *plVar11;
                *plVar11 = *plVar10;
                *plVar10 = lVar19;
                uVar17 = (uint)plVar6;
                uVar7 = uVar17 * 2 + 1;
                plVar10 = plVar6;
              } while ((int)uVar7 < (int)uVar18);
            }
            uVar17 = (int)plVar13 - 1;
          } while ((int)plVar13 != 0);
          plVar13 = local_3c0;
          if (1 < (int)uVar18) {
            uVar16 = uVar18 & 0xffffffff;
            lVar19 = *plVar9;
            *plVar9 = plVar9[uVar16 - 1];
            plVar9[uVar16 - 1] = lVar19;
            if ((int)uVar18 != 2) {
              do {
                uVar16 = uVar16 - 1;
                iVar2 = 0;
                iVar14 = 1;
                iVar8 = 0;
                do {
                  iVar20 = iVar2 + 2;
                  plVar13 = (longlong *)(longlong)iVar20;
                  iVar2 = iVar14;
                  if ((longlong)uVar16 <= (longlong)plVar13) {
                    plVar10 = (longlong *)(longlong)iVar14;
LAB_147d317e0:
                    plVar6 = plVar10;
                    iVar2 = iVar14;
                    goto LAB_147d317e2;
                  }
                  plVar11 = plVar9 + (longlong)plVar13;
                  plVar6 = (longlong *)(longlong)iVar14;
                  lVar19 = plVar9[(longlong)plVar6];
                  lVar5 = *plVar11;
                  if (bVar1 == 5) {
                    fVar23 = *(float *)(lVar5 + 0x220);
                    if (ABS(fVar23 - *(float *)(lVar19 + 0x220)) <= 0.0001) {
                      if (*(uint *)(lVar5 + 0x54) <= *(uint *)(lVar19 + 0x54)) goto LAB_147d318cb;
LAB_147d317e2:
                      iVar20 = iVar2;
                      plVar13 = plVar9 + iVar8;
                      plVar11 = plVar9 + (longlong)plVar6;
                      lVar5 = *plVar11;
                      lVar19 = *plVar13;
                      if (bVar1 != 5) {
                        if ((bVar1 == 4) || (bVar1 == 6)) goto LAB_147d318e2;
                        goto LAB_147d3181c;
                      }
                      fVar23 = *(float *)(lVar5 + 0x220);
                    }
                    else {
                      if (fVar23 < *(float *)(lVar19 + 0x220)) goto LAB_147d317e2;
LAB_147d318cb:
                      plVar13 = plVar9 + iVar8;
                      lVar19 = *plVar13;
                    }
                    if (ABS(*(float *)(lVar19 + 0x220) - fVar23) <= 0.0001) {
                      if (*(uint *)(lVar19 + 0x54) <= *(uint *)(lVar5 + 0x54)) break;
                    }
                    else if (fVar23 <= *(float *)(lVar19 + 0x220)) break;
                  }
                  else {
                    if ((bVar1 != 4) && (plVar10 = plVar6, bVar1 != 6)) goto LAB_147d317e0;
                    local_3b8 = uVar16;
                    local_3b0 = plVar6;
                    local_398 = lVar5;
                    fVar23 = (float)FUN_1478b3d66();
                    local_3a0 = lVar19;
                    fVar24 = (float)FUN_1478b3d66(lVar19);
                    plVar6 = plVar13;
                    plVar10 = local_3b0;
                    uVar16 = local_3b8;
                    iVar2 = iVar20;
                    if (0.0001 < ABS(fVar23 - fVar24)) {
                      if (fVar23 < fVar24) goto LAB_147d317e0;
                      goto LAB_147d317e2;
                    }
                    if (bVar1 != 6) {
                      if (*(uint *)(local_398 + 0x54) < *(uint *)(local_3a0 + 0x54))
                      goto LAB_147d317e0;
                      goto LAB_147d317e2;
                    }
                    plVar6 = local_3b0;
                    iVar2 = iVar14;
                    if (*(uint *)(local_3a0 + 0x54) < *(uint *)(local_398 + 0x54))
                    goto LAB_147d317e2;
                    plVar13 = plVar9 + iVar8;
                    lVar5 = *plVar11;
                    lVar19 = *plVar13;
LAB_147d318e2:
                    fVar23 = (float)FUN_1478b3d66(lVar19);
                    fVar24 = (float)FUN_1478b3d66(lVar5);
                    if (ABS(fVar23 - fVar24) <= 0.0001) {
                      uVar17 = *(uint *)(lVar19 + 0x54);
                      uVar7 = *(uint *)(lVar5 + 0x54);
                      if (bVar1 != 6) {
                        if (uVar17 < uVar7) goto LAB_147d3181c;
                        break;
                      }
                      bVar21 = uVar17 < uVar7;
                      bVar22 = uVar17 == uVar7;
                    }
                    else {
                      bVar22 = fVar24 == fVar23;
                      bVar21 = fVar24 < fVar23;
                    }
                    if (bVar21 || bVar22) break;
                  }
LAB_147d3181c:
                  lVar19 = *plVar13;
                  *plVar13 = *plVar11;
                  *plVar11 = lVar19;
                  iVar2 = iVar20 * 2;
                  iVar14 = iVar20 * 2 + 1;
                  iVar8 = iVar20;
                } while ((longlong)iVar14 < (longlong)uVar16);
                lVar19 = *plVar9;
                *plVar9 = plVar9[uVar16 - 1];
                plVar9[uVar16 - 1] = lVar19;
                plVar13 = local_3c0;
              } while (2 < uVar16);
            }
          }
        }
LAB_147d31ae6:
        plVar13 = plVar13 + -3;
      } while (&local_388 <= plVar13);
      uVar17 = *(uint *)(local_390 + 1);
      iVar14 = (int)local_390[3];
      param_1 = local_390;
    }
    if (0 < (int)uVar17) {
      lVar19 = 0;
      do {
        lVar5 = *(longlong *)(*param_1 + lVar19 * 8);
        *(byte *)(lVar5 + 0x198) =
             *(byte *)(lVar5 + 0x198) & 0xbf | (lVar19 < (int)(uVar17 - iVar14)) << 6;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)param_1[1]);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147d31433:
  lVar19 = *plVar9;
  *plVar9 = *plVar3;
  *plVar3 = lVar19;
  iVar14 = (int)local_3b8 + -1;
  plVar6 = plVar6 + -2;
  if ((longlong)plVar6 - (longlong)plVar9 < (longlong)local_3b0 - (longlong)plVar11) {
    if (plVar11 < plVar10) {
      *local_3c0 = (longlong)plVar11;
      local_3c0[1] = (longlong)plVar10;
      *(int *)(local_3c0 + 2) = iVar14;
      local_3c0 = local_3c0 + 3;
    }
    plVar13 = local_3c0;
    if (plVar3 <= plVar9 + 1) goto LAB_147d31ae6;
  }
  else {
    plVar13 = local_3c0;
    if (plVar9 + 1 < plVar3) {
      *local_3c0 = (longlong)plVar9;
      local_3c0[1] = (longlong)plVar6;
      *(int *)(local_3c0 + 2) = iVar14;
      plVar13 = local_3c0 + 3;
    }
    plVar9 = plVar11;
    plVar6 = plVar10;
    if (plVar10 <= plVar11) goto LAB_147d31ae6;
  }
  local_3c0 = plVar13;
  iVar2 = (int)((ulonglong)((longlong)plVar6 - (longlong)plVar9) >> 3);
  uVar18 = (ulonglong)(iVar2 + 1);
  plVar10 = plVar6;
  if (iVar14 == 0) goto LAB_147d314ec;
  goto LAB_147d31296;
joined_r0x000147d31a0f:
  plVar13 = local_3c0;
  plVar11 = plVar9;
  plVar6 = plVar9;
  if (plVar9 < plVar10) {
joined_r0x000147d31a1f:
    plVar6 = plVar6 + 1;
    if (plVar10 < plVar6) goto LAB_147d31a21;
    lVar19 = *plVar6;
    lVar5 = *plVar11;
    if (bVar1 == 5) {
      if (ABS(*(float *)(lVar5 + 0x220) - *(float *)(lVar19 + 0x220)) <= 0.0001) goto LAB_147d31a95;
      if (*(float *)(lVar5 + 0x220) < *(float *)(lVar19 + 0x220)) goto LAB_147d31a60;
      goto joined_r0x000147d31a1f;
    }
    if ((bVar1 != 4) && (bVar1 != 6)) goto LAB_147d31a60;
    fVar23 = (float)FUN_1478b3d66(lVar5);
    fVar24 = (float)FUN_1478b3d66(lVar19);
    if (ABS(fVar23 - fVar24) <= 0.0001) {
      if (bVar1 == 6) {
        if (*(uint *)(lVar5 + 0x54) <= *(uint *)(lVar19 + 0x54)) goto joined_r0x000147d31a1f;
      }
      else if (*(uint *)(lVar19 + 0x54) <= *(uint *)(lVar5 + 0x54)) goto joined_r0x000147d31a1f;
    }
    else if (fVar24 <= fVar23) goto joined_r0x000147d31a1f;
    goto LAB_147d31a60;
  }
  goto LAB_147d31ae6;
LAB_147d31a21:
  lVar19 = *plVar11;
  *plVar11 = *plVar10;
  *plVar10 = lVar19;
  plVar10 = plVar10 + -1;
  goto joined_r0x000147d31a0f;
LAB_147d31a95:
  if (*(uint *)(lVar5 + 0x54) <= *(uint *)(lVar19 + 0x54)) goto joined_r0x000147d31a1f;
LAB_147d31a60:
  plVar11 = plVar6;
  goto joined_r0x000147d31a1f;
}



// FUNCTION 147d31ba8 FUN_147d31ba8 body=225 status=ok
// SIG undefined FUN_147d31ba8(void)

void FUN_147d31ba8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return;
}



// FUNCTION 147d31c8a FUN_147d31c8a body=213 status=ok
// SIG undefined FUN_147d31c8a(void)

void FUN_147d31c8a(longlong param_1)

{
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_147d434dc(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_147d4356a(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_147d436fc(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 8);
  return;
}



// FUNCTION 147d31d60 FUN_147d31d60 body=1883 status=ok
// SIG undefined FUN_147d31d60(void)

void FUN_147d31d60(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint *local_d0;
  uint **local_c8;
  uint local_bc;
  uint *local_b8;
  uint *puStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((longlong)(int)param_3[1] == 0) {
LAB_147d32457:
    if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar6 = (longlong *)*param_3;
  plVar5 = plVar6 + (longlong)(int)param_3[1] * 2;
  local_120 = (longlong *)(param_1 + 0x58);
  local_f0 = param_1 + 0x90;
  local_118 = (longlong *)(param_1 + 0xa8);
  local_f8 = param_1 + 0xe0;
  local_108 = (longlong *)(param_1 + 8);
  local_e8 = param_1 + 0x40;
  local_128 = (longlong *)(param_1 + 0xf8);
  local_100 = param_1 + 0x130;
  local_130 = plVar5;
  local_110 = param_4;
LAB_147d31e11:
  uVar1 = *(uint *)(param_2 + 0x40);
  if (uVar1 != 0 && (*(byte *)(*plVar6 + 4) & 1) != 0) {
    if ((*(byte *)((longlong)plVar6 + 0xc) & *(longlong *)(param_2 + 0x18) != 0) == 0) {
      local_dc = uVar1;
      if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
        lVar2 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar2 = local_f0;
        }
        iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar1) * 4);
        if (iVar4 != -1) {
          do {
            lVar2 = *local_120 + (longlong)iVar4 * 0x60;
            if (*(uint *)(*local_120 + (longlong)iVar4 * 0x60) == uVar1) {
              if ((lVar2 != 0) && (plVar7 = (longlong *)(lVar2 + 8), plVar7 != (longlong *)0x0)) {
                if (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) goto LAB_147d3232f;
                lVar3 = lVar2 + 0x40;
                if (*(longlong *)(lVar2 + 0x48) != 0) {
                  lVar3 = *(longlong *)(lVar2 + 0x48);
                }
                iVar4 = *(int *)(lVar3 + (ulonglong)
                                         (*(int *)(lVar2 + 0x50) - 1U & *(uint *)(plVar6 + 1)) * 4);
                if (iVar4 == -1) goto LAB_147d3232f;
                goto LAB_147d32318;
              }
              break;
            }
            iVar4 = *(int *)(lVar2 + 0x58);
          } while (iVar4 != -1);
        }
      }
      local_138 = FUN_147d324bc(param_1,plVar6);
      local_d4 = *(uint *)(local_138 + 0x10);
      local_d8 = *(uint *)(plVar6 + 1);
      local_98 = 0;
      local_90 = 0;
      local_b8 = (uint *)0x0;
      puStack_b0 = (uint *)0x0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_d0 = &local_d8;
      local_c8 = (uint **)&local_d4;
      FUN_14499e2d8(&local_b8,&local_bc,&local_d0);
      local_d0 = &local_dc;
      local_c8 = &local_b8;
      FUN_147d45b58(local_120,&local_bc,&local_d0);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140201ac2(&local_b8);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      lVar2 = local_138;
      plVar5 = local_130;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) goto LAB_147d3249d;
      goto LAB_147d32397;
    }
    local_dc = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xc);
    local_e0 = uVar1;
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar2 = local_f8;
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar1) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *local_118 + (longlong)iVar4 * 0x60;
          if (*(uint *)(*local_118 + (longlong)iVar4 * 0x60) == uVar1) {
            if ((lVar2 != 0) && (plVar7 = (longlong *)(lVar2 + 8), plVar7 != (longlong *)0x0)) {
              if (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) goto LAB_147d32262;
              lVar3 = lVar2 + 0x40;
              if (*(longlong *)(lVar2 + 0x48) != 0) {
                lVar3 = *(longlong *)(lVar2 + 0x48);
              }
              iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & local_dc) * 4);
              if (iVar4 == -1) goto LAB_147d32262;
              goto LAB_147d32247;
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x58);
        } while (iVar4 != -1);
      }
    }
    local_138 = FUN_147d324bc(param_1,plVar6);
    local_d4 = *(uint *)(local_138 + 0x10);
    local_d8 = local_dc;
    local_98 = 0;
    local_90 = 0;
    local_b8 = (uint *)0x0;
    puStack_b0 = (uint *)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_d0 = &local_d8;
    local_c8 = (uint **)&local_d4;
    FUN_14499e2d8(&local_b8,&local_bc,&local_d0);
    local_d0 = &local_e0;
    local_c8 = &local_b8;
    FUN_147d46042(local_118,&local_bc,&local_d0);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(&local_b8);
    iVar4 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar4 + 1U;
    plVar5 = local_130;
    lVar2 = local_138;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) goto LAB_147d3248d;
    goto LAB_147d322c6;
  }
  uVar1 = *(uint *)(plVar6 + 1);
  if (uVar1 == 0) {
    local_bc = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xc);
    if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar2 = local_100;
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & local_bc) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*local_128 + (longlong)iVar4 * 0x10) == local_bc) goto LAB_147d323a6;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *local_128 + 8);
        } while (iVar4 != -1);
      }
    }
    lVar2 = FUN_147d324bc(param_1,plVar6);
    local_d4 = *(uint *)(lVar2 + 0x10);
    local_b8 = &local_bc;
    puStack_b0 = &local_d4;
    plVar7 = local_128;
  }
  else {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar2 = local_e8;
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*local_108 + (longlong)iVar4 * 0x10) == uVar1) goto LAB_147d323a6;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *local_108 + 8);
        } while (iVar4 != -1);
      }
    }
    lVar2 = FUN_147d324bc(param_1,plVar6);
    local_bc = *(uint *)(lVar2 + 0x10);
    puStack_b0 = &local_bc;
    plVar7 = local_108;
    local_b8 = (uint *)(plVar6 + 1);
  }
  FUN_1409a12da(plVar7,&local_d0,&local_b8,0);
  iVar4 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
    FUN_147d45ad2(param_4,iVar4);
  }
  *(longlong *)(*param_4 + (longlong)iVar4 * 8) = lVar2;
  goto LAB_147d323a6;
  while (iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar7 + 8), iVar4 != -1) {
LAB_147d32318:
    param_4 = local_110;
    if (*(uint *)(*plVar7 + (longlong)iVar4 * 0x10) == *(uint *)(plVar6 + 1)) goto LAB_147d323a6;
  }
LAB_147d3232f:
  lVar2 = FUN_147d324bc(param_1,plVar6);
  local_bc = *(uint *)(lVar2 + 0x10);
  puStack_b0 = &local_bc;
  local_b8 = (uint *)(plVar6 + 1);
  FUN_1409a12da(plVar7,&local_d0,&local_b8,0);
  iVar4 = (int)local_110[1];
  *(uint *)(local_110 + 1) = iVar4 + 1U;
  param_4 = local_110;
  if (*(uint *)((longlong)local_110 + 0xc) < iVar4 + 1U) {
LAB_147d3249d:
    FUN_147d45ad2(param_4,iVar4);
  }
LAB_147d32397:
  *(longlong *)(*param_4 + (longlong)iVar4 * 8) = lVar2;
  param_4 = local_110;
  goto LAB_147d323a6;
  while (iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar7 + 8), iVar4 != -1) {
LAB_147d32247:
    if (*(uint *)(*plVar7 + (longlong)iVar4 * 0x10) == local_dc) goto LAB_147d323a6;
  }
LAB_147d32262:
  lVar2 = FUN_147d324bc(param_1,plVar6);
  local_bc = *(uint *)(lVar2 + 0x10);
  local_b8 = &local_dc;
  puStack_b0 = &local_bc;
  FUN_1409a12da(plVar7,&local_d0,&local_b8,0);
  iVar4 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
LAB_147d3248d:
    FUN_147d45ad2(param_4,iVar4);
  }
LAB_147d322c6:
  *(longlong *)(*param_4 + (longlong)iVar4 * 8) = lVar2;
LAB_147d323a6:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar5) goto LAB_147d32457;
  goto LAB_147d31e11;
}



// FUNCTION 147d324bc FUN_147d324bc body=344 status=ok
// SIG undefined FUN_147d324bc(void)

undefined8 FUN_147d324bc(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  uint local_54;
  LARGE_INTEGER local_50;
  undefined8 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar13 = DAT_14cb08830 + 1;
  DAT_14cb08830 = uVar13;
  local_54 = uVar13;
  puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(uint *)(puVar10 + 2) = uVar13;
  *(int *)((longlong)puVar10 + 0x14) = (int)param_2[1];
  puVar2 = (undefined4 *)*param_2;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  uVar6 = puVar2[4];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  *(undefined4 *)(puVar10 + 3) = *puVar2;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar3;
  *(undefined4 *)(puVar10 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar10 + 0x24) = uVar5;
  *(undefined4 *)(puVar10 + 5) = uVar6;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar7;
  *(undefined4 *)(puVar10 + 6) = uVar8;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar9;
  QueryPerformanceCounter(&local_50);
  *(float *)(puVar10 + 7) =
       (float)((((double)CONCAT44(0x43300000,local_50.s.LowPart) - 4503599627370496.0) +
               ((double)CONCAT44(0x45300000,local_50.s.HighPart) - 1.9342813113834067e+25)) *
              DAT_14c83f418);
  local_48 = &local_60;
  local_60 = puVar10;
  local_50.QuadPart = (LONGLONG)&local_54;
  FUN_147d4652c((longlong *)(param_1 + 0x148),local_3c,&local_50);
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar12 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x188);
    }
    uVar13 = *(uint *)(lVar12 + (ulonglong)(*(int *)(param_1 + 400) - 1U & local_54) * 4);
    if (uVar13 != 0xffffffff) {
      uVar11 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x148) + (longlong)(int)uVar13 * 0x18);
        if (*puVar1 == local_54) {
          if (puVar1 == (uint *)0x0) goto LAB_147d32596;
          uVar11 = *(undefined8 *)(puVar1 + 2);
          break;
        }
        uVar13 = puVar1[4];
      } while (uVar13 != 0xffffffff);
      goto LAB_147d32598;
    }
  }
LAB_147d32596:
  uVar11 = 0;
LAB_147d32598:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147d32616 FUN_147d32616 body=1010 status=ok
// SIG undefined FUN_147d32616(void)

undefined8 FUN_147d32616(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_81;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_81 = param_4;
  local_80 = param_3;
  if ((longlong)(int)param_3[1] == 0) {
LAB_147d3298e:
    FUN_147d31d60(param_1,param_2,local_80,&local_68);
    uVar4 = FUN_1436f9f34(param_1,param_2,&local_68,local_58);
LAB_147d329bc:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_58[2] ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar4;
  }
  plVar10 = (longlong *)*param_3;
  plVar8 = plVar10 + (longlong)(int)param_3[1] * 2;
  lVar3 = param_1 + 0x90;
  lVar9 = param_1 + 0x130;
  local_78 = lVar9;
  local_70 = lVar3;
LAB_147d32691:
  uVar1 = *(uint *)(param_2 + 0x40);
  if (uVar1 == 0 || (*(byte *)(*plVar10 + 4) & 1) == 0) {
    uVar1 = *(uint *)(plVar10 + 1);
    if (uVar1 == 0) {
      if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
        uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xc);
        lVar5 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar5 = lVar9;
        }
        iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & uVar1) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0xf8) + (longlong)iVar7 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar7 * 0x10) == uVar1)
            goto LAB_147d32914;
            iVar7 = *(int *)(lVar6 + 8);
          } while (iVar7 != -1);
        }
      }
    }
    else if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar5 = param_1 + 0x40;
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar1) * 4);
      if (iVar7 != -1) {
        do {
          lVar6 = *(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x10;
          if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x10) == uVar1)
          goto LAB_147d32914;
          iVar7 = *(int *)(lVar6 + 8);
        } while (iVar7 != -1);
      }
    }
  }
  else if ((*(byte *)((longlong)plVar10 + 0xc) & *(longlong *)(param_2 + 0x18) != 0) == 0) {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar5 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar5 = lVar3;
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar1) * 4);
      if (iVar7 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x60) == uVar1) {
            if (((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) &&
               (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 0x3c))) {
              lVar6 = lVar5 + 0x40;
              if (*(longlong *)(lVar5 + 0x48) != 0) {
                lVar6 = *(longlong *)(lVar5 + 0x48);
              }
              iVar7 = *(int *)(lVar6 + (ulonglong)
                                       (*(int *)(lVar5 + 0x50) - 1U & *(uint *)(plVar10 + 1)) * 4);
              if (iVar7 != -1) {
                lVar5 = *(longlong *)(lVar5 + 8);
                goto LAB_147d328f6;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar5 + 0x58);
        } while (iVar7 != -1);
      }
    }
  }
  else if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar5 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar5 = param_1 + 0xe0;
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar1) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0x60) == uVar1) {
          if (((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) &&
             (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 0x3c))) {
            uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + 0xc);
            lVar6 = lVar5 + 0x40;
            if (*(longlong *)(lVar5 + 0x48) != 0) {
              lVar6 = *(longlong *)(lVar5 + 0x48);
            }
            iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar5 + 0x50) - 1U & uVar1) * 4);
            if (iVar7 != -1) {
              lVar5 = *(longlong *)(lVar5 + 8);
              goto LAB_147d32886;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x58);
      } while (iVar7 != -1);
    }
  }
  goto LAB_147d327da;
  while (iVar7 = *(int *)(lVar6 + 8), iVar7 != -1) {
LAB_147d328f6:
    lVar6 = lVar5 + (longlong)iVar7 * 0x10;
    if (*(uint *)(lVar5 + (longlong)iVar7 * 0x10) == *(uint *)(plVar10 + 1)) goto LAB_147d32914;
  }
  goto LAB_147d327da;
  while (iVar7 = *(int *)(lVar6 + 8), iVar7 != -1) {
LAB_147d32886:
    lVar6 = lVar5 + (longlong)iVar7 * 0x10;
    if (*(uint *)(lVar5 + (longlong)iVar7 * 0x10) == uVar1) goto LAB_147d32914;
  }
  goto LAB_147d327da;
LAB_147d32914:
  if ((undefined4 *)(lVar6 + 4) != (undefined4 *)0x0 && lVar6 != 0) {
    local_98 = local_81;
    lVar3 = FUN_1436f9dd4(param_1,param_2,*(undefined4 *)(lVar6 + 4),local_58);
    uVar2 = uStack_60;
    if (lVar3 == 0) {
      uVar4 = 0;
      goto LAB_147d329bc;
    }
    iVar7 = (int)uStack_60;
    uVar1 = (int)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
    if (uStack_60._4_4_ < uVar1) {
      FUN_147d45ad2(&local_68,uVar2 & 0xffffffff);
    }
    *(longlong *)(local_68 + (longlong)iVar7 * 8) = lVar3;
    lVar3 = local_70;
    lVar9 = local_78;
  }
LAB_147d327da:
  plVar10 = plVar10 + 2;
  if (plVar10 == plVar8) goto LAB_147d3298e;
  goto LAB_147d32691;
}



// FUNCTION 147d32a0a FUN_147d32a0a body=113 status=ok
// SIG undefined FUN_147d32a0a(void)

longlong FUN_147d32a0a(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [46];
  char cStack_7a;
  char cStack_79;
  longlong lStack_78;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float fStack_4c;
  ulonglong uStack_48;
  
  if (*(byte *)((longlong)param_3 + 0x1d) == 1) {
    if ((longlong)(int)param_3[1] != 0) {
      lVar6 = 0;
      lVar4 = 0;
      do {
        if ((lVar4 == 0) ||
           (fVar1 = *(float *)(*(longlong *)(*param_3 + lVar6) + 0x1a8),
           *(float *)(lVar4 + 0x1a8) <= fVar1 && fVar1 != *(float *)(lVar4 + 0x1a8))) {
          lVar4 = *(longlong *)(*param_3 + lVar6);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)param_3[1] * 8 != lVar6);
      if (((param_4 == '\0') || (lVar4 == 0)) ||
         (*(float *)(param_2 + 0x1a8) < *(float *)(lVar4 + 0x1a8) ||
          *(float *)(param_2 + 0x1a8) == *(float *)(lVar4 + 0x1a8))) {
        return lVar4;
      }
    }
  }
  else if (*(byte *)((longlong)param_3 + 0x1d) - 2 < 2) {
    uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
    cStack_79 = *(char *)((longlong)param_3 + 0x1d);
    uStack_68 = *(undefined8 *)(param_2 + 0x250);
    uStack_60 = *(undefined8 *)(param_2 + 600);
    uStack_58 = *(undefined8 *)(param_2 + 0x260);
    cStack_7a = param_4;
    lStack_78 = param_2;
    FUN_1479629ac(*param_1,&uStack_68,&fStack_4c,1);
    lVar4 = param_3[1];
    if ((longlong)(int)lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar2 = *param_3;
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        uStack_68 = *(undefined8 *)(lVar3 + 0x250);
        uStack_60 = *(undefined8 *)(lVar3 + 600);
        uStack_58 = *(undefined8 *)(lVar3 + 0x260);
        FUN_1479629ac(*param_1,&uStack_68,&fStack_6c,1);
        if (fStack_6c <= fStack_4c) {
          if (cStack_79 == '\x03') {
            if ((((fStack_6c == fStack_4c) && (!NAN(fStack_6c) && !NAN(fStack_4c))) &&
                ((lVar6 == 0 ||
                 (*(float *)(lVar6 + 0x1a8) <= *(float *)(lVar3 + 0x1a8) &&
                  *(float *)(lVar3 + 0x1a8) != *(float *)(lVar6 + 0x1a8))))) &&
               ((cStack_7a == '\0' ||
                (*(float *)(lStack_78 + 0x1a8) <= *(float *)(lVar3 + 0x1a8) &&
                 *(float *)(lVar3 + 0x1a8) != *(float *)(lStack_78 + 0x1a8))))) goto LAB_147d32b47;
          }
        }
        else {
LAB_147d32b47:
          fStack_4c = fStack_6c;
          lVar6 = lVar3;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar5);
    }
    if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 147d32a7c FUN_147d32a7c body=336 status=ok
// SIG undefined FUN_147d32a7c(void)

longlong FUN_147d32a7c(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [46];
  char local_7a;
  char local_79;
  longlong local_78;
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = *(char *)((longlong)param_3 + 0x1d);
  local_68 = *(undefined8 *)(param_2 + 0x250);
  uStack_60 = *(undefined8 *)(param_2 + 600);
  local_58 = *(undefined8 *)(param_2 + 0x260);
  local_7a = param_4;
  local_78 = param_2;
  FUN_1479629ac(*param_1,&local_68,&local_4c,1);
  lVar3 = param_3[1];
  if ((longlong)(int)lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = *param_3;
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      local_68 = *(undefined8 *)(lVar2 + 0x250);
      uStack_60 = *(undefined8 *)(lVar2 + 600);
      local_58 = *(undefined8 *)(lVar2 + 0x260);
      FUN_1479629ac(*param_1,&local_68,&local_6c,1);
      if (local_6c <= local_4c) {
        if (local_79 == '\x03') {
          if ((((local_6c == local_4c) && (!NAN(local_6c) && !NAN(local_4c))) &&
              ((lVar4 == 0 ||
               (*(float *)(lVar4 + 0x1a8) <= *(float *)(lVar2 + 0x1a8) &&
                *(float *)(lVar2 + 0x1a8) != *(float *)(lVar4 + 0x1a8))))) &&
             ((local_7a == '\0' ||
              (*(float *)(local_78 + 0x1a8) <= *(float *)(lVar2 + 0x1a8) &&
               *(float *)(lVar2 + 0x1a8) != *(float *)(local_78 + 0x1a8))))) goto LAB_147d32b47;
        }
      }
      else {
LAB_147d32b47:
        local_4c = local_6c;
        lVar4 = lVar2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 147d32bce FUN_147d32bce body=264 status=ok
// SIG undefined FUN_147d32bce(void)

void FUN_147d32bce(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar2 = param_1 + 0x158;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x170);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_1436f9076(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18),0);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d32cd8 FUN_147d32cd8 body=262 status=ok
// SIG undefined FUN_147d32cd8(void)

void FUN_147d32cd8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar2 = param_1 + 0x158;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x170) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x170);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_147d311b0(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18));
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d32e04 FUN_147d32e04 body=99 status=ok
// SIG undefined FUN_147d32e04(void)

void FUN_147d32e04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  FUN_147d32e68(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d32e68 FUN_147d32e68 body=234 status=ok
// SIG undefined FUN_147d32e68(void)

void FUN_147d32e68(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(*param_2 + 8);
  if (((*(byte *)(lVar1 + 0x28) & 4) != 0) ||
     ((local_1a8 = lVar1, *(longlong *)(lVar1 + 0x68) != 0 &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x68) + 0x10) != 0)))) {
    uVar2 = 0;
    if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x2b8))();
    }
    *(undefined4 *)(param_1 + 0x100) = uVar2;
    FUN_147d32f54(param_1);
    local_1a8 = *(longlong *)(*param_2 + 8);
  }
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  switchD_143c3d4dc::caseD_20(param_1);
  if (0x1e4 < *(int *)(lVar1 + 0x40)) {
    FUN_147a90fa6(&local_1b0,param_2,0,&DAT_14c896044);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d32f54 FUN_147d32f54 body=187 status=ok
// SIG undefined FUN_147d32f54(void)

void FUN_147d32f54(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1[0x2d] != 0) {
    FUN_1400337aa();
    uVar2 = (**(code **)(*param_1 + 0x390))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
    cVar1 = (**(code **)(*(longlong *)param_1[0x2d] + 0x2c0))();
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xdf | cVar1 << 5;
    cVar1 = (**(code **)(*(longlong *)param_1[0x2d] + 0x2c8))();
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xbf | cVar1 << 6;
    cVar1 = (**(code **)(*(longlong *)param_1[0x2d] + 0x2d8))();
    *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xf7 | cVar1 << 3;
    cVar1 = (**(code **)(*(longlong *)param_1[0x2d] + 0x2d0))();
    *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xef | cVar1 << 4;
  }
  return;
}



// FUNCTION 147d33010 FUN_147d33010 body=28 status=ok
// SIG undefined FUN_147d33010(void)

void FUN_147d33010(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d33028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 800))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147d3302c FUN_147d3302c body=248 status=ok
// SIG undefined FUN_147d3302c(void)

undefined8 FUN_147d3302c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14aaafd80;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d33126 FUN_147d33126 body=58 status=ok
// SIG undefined FUN_147d33126(void)

void FUN_147d33126(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_14480f766(&DAT_14c872cf8);
  }
  *(undefined8 *)(param_1 + 0x558) = 0;
  FUN_1436faea0(param_1,1);
  return;
}



// FUNCTION 147d33168 FUN_147d33168 body=59 status=ok
// SIG undefined FUN_147d33168(void)

void FUN_147d33168(void)

{
  longlong lVar1;
  
  if (DAT_14c761b50 == -1) {
    DAT_14c761b50 = FUN_14795d196();
    if (DAT_14c761b50 < 0) {
      lVar1 = FUN_141283ace(DAT_14cb0d2b0);
      DAT_14c761b50 = *(int *)(lVar1 + 0xb0);
    }
  }
  return;
}



// FUNCTION 147d331a4 FUN_147d331a4 body=159 status=ok
// SIG undefined FUN_147d331a4(void)

ulonglong FUN_147d331a4(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  float fVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) goto LAB_147d331c8;
    fVar2 = (float)FUN_147959fa6(lVar1);
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar2;
    }
  }
  if (((longlong *)param_1[0x2d] != (longlong *)0x0) &&
     (fVar2 = (float)(**(code **)(*(longlong *)param_1[0x2d] + 0x2a8))(), fVar4 <= fVar2)) {
    fVar4 = fVar2;
  }
  if (0.0001 < fVar4) {
    return (ulonglong)(uint)fVar4;
  }
  lVar1 = param_1[0x22];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xe8) & 1) != 0)) {
    uVar3 = FUN_147959fa6(lVar1 + 0x28);
    return uVar3;
  }
LAB_147d331c8:
  uVar3 = FUN_1458b9a10();
  return uVar3;
}



// FUNCTION 147d33244 FUN_147d33244 body=232 status=ok
// SIG undefined FUN_147d33244(void)

void FUN_147d33244(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c761b50 != param_1) {
    local_20 = 0;
    FUN_14340dba2(&local_20);
    FUN_14340da64(&local_20,0);
    DAT_14c761b50 = param_1;
    if (DAT_14cb0d2b0 != 0) {
      FUN_147d3332e(&local_38);
      uVar1 = (ulonglong)local_28;
      if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
        do {
          FUN_147d3339a(*(undefined8 *)(local_38 + (uVar1 & 0xffffffff) * 8));
          uVar1 = (longlong)(int)local_28;
          do {
            uVar2 = uVar1;
            uVar1 = uVar2 + 1;
            local_28 = (uint)uVar1;
            if ((longlong)local_30 <= (longlong)uVar1) break;
          } while (*(longlong *)(local_38 + uVar1 * 8) == 0);
        } while ((-2 < (longlong)uVar2) && ((int)local_28 < local_30));
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14340cba6(&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d3332e FUN_147d3332e body=107 status=ok
// SIG undefined FUN_147d3332e(void)

longlong * FUN_147d3332e(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_145992be8();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147d3339a FUN_147d3339a body=229 status=ok
// SIG undefined FUN_147d3339a(void)

void FUN_147d3339a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  uStack_30 = 1;
  FUN_147d46f0c(&local_38,0);
  *local_38 = uVar1;
  if (0 < (int)(uint)uStack_30) {
    uVar3 = (uint)uStack_30;
    do {
      plVar2 = (longlong *)local_38[(ulonglong)uVar3 - 1];
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar3 - 1);
      uVar3 = uVar3 - 1;
      if (plVar2 != (longlong *)0x0) {
        lVar4 = FUN_145a7318a();
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          FUN_147d33480(&local_38,plVar2 + 5);
        }
        else {
          (**(code **)(*plVar2 + 0x358))(plVar2);
        }
        uVar3 = (uint)uStack_30;
      }
    } while (0 < (int)uVar3);
  }
  FUN_1436faea0(param_1,0);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d33480 FUN_147d33480 body=94 status=ok
// SIG undefined FUN_147d33480(void)

void FUN_147d33480(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147d46f0c(param_1,iVar2);
  }
  FUN_147d46f91((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147d334de FUN_147d334de body=359 status=ok
// SIG undefined FUN_147d334de(void)

wchar_t ** FUN_147d334de(longlong *param_1,wchar_t **param_2)

{
  longlong lVar1;
  size_t sVar2;
  wchar_t *_Str;
  float fVar3;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(param_2,&DAT_149dfb77a);
  fVar3 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  if (10000.0 <= fVar3) {
    FUN_14020fad6(param_2,L"Forever");
  }
  else {
    FUN_140002266(&local_40,L"%3.2fs",(double)fVar3);
    if (&local_40 == param_2) {
      if (local_40 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_40;
      local_40 = (wchar_t *)0x0;
      *(int *)(param_2 + 1) = local_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
    }
  }
  FUN_1400020e8(param_2,&DAT_149e26da8,2);
  lVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  local_30 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_30,&local_40);
  _Str = L"";
  if (local_38 != 0) {
    _Str = local_40;
  }
  sVar2 = wcslen(_Str);
  FUN_1400020e8(param_2,_Str,sVar2 & 0xffffffff);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(param_2,&DAT_149e2b50c,1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d33646 FUN_147d33646 body=160 status=ok
// SIG undefined FUN_147d33646(void)

int FUN_147d33646(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14795b132(0,*(undefined8 *)(param_1 + 0x168),&local_38);
  if ((int)uStack_30 < 1) {
    iVar4 = 0;
  }
  else {
    lVar3 = 0;
    iVar4 = 0;
    iVar2 = (int)uStack_30;
    do {
      plVar1 = *(longlong **)(*(longlong *)(local_38 + lVar3 * 8) + 0x70);
      if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x3b8))(plVar1,param_2);
        iVar4 = iVar4 + iVar2;
        iVar2 = (int)uStack_30;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d336f2 FUN_147d336f2 body=59 status=ok
// SIG undefined FUN_147d336f2(void)

float FUN_147d336f2(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x100);
  if ((fVar1 < 1e-08) || ((*(byte *)(param_1 + 0x38) & 0x20) != 0)) {
    FUN_147d32f54(param_1);
    fVar1 = *(float *)(param_1 + 0x100);
  }
  return fVar1;
}


