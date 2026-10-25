// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147152b28 FUN_147152b28 body=138 status=ok
// SIG undefined FUN_147152b28(void)

code * FUN_147152b28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalVolumeTranslatedCenterAndExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 6;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152bb2;
}



// FUNCTION 147152bb2 FUN_147152bb2 body=138 status=ok
// SIG undefined FUN_147152bb2(void)

code * FUN_147152bb2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldMipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bfbc6;
}



// FUNCTION 147152c3c FUN_147152c3c body=138 status=ok
// SIG undefined FUN_147152c3c(void)

code * FUN_147152c3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldCoverageAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152cc6;
}



// FUNCTION 147152cc6 FUN_147152cc6 body=132 status=ok
// SIG undefined FUN_147152cc6(void)

undefined1 * FUN_147152cc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldPageAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147152d4a;
}



// FUNCTION 147152d4e FUN_147152d4e body=132 status=ok
// SIG undefined FUN_147152d4e(void)

undefined1 * FUN_147152d4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldNormalTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x77;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145cdbae4;
}



// FUNCTION 147152dd6 FUN_147152dd6 body=138 status=ok
// SIG undefined FUN_147152dd6(void)

code * FUN_147152dd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileConeDepthRanges";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<FVector4f>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x410000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3e9d6;
}



// FUNCTION 147152e68 FUN_147152e68 body=138 status=ok
// SIG undefined FUN_147152e68(void)

code * FUN_147152e68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowBoundingSphere";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152ef2;
}



// FUNCTION 147152ef2 FUN_147152ef2 body=138 status=ok
// SIG undefined FUN_147152ef2(void)

code * FUN_147152ef2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bCullHeighfieldsNotInAtlas";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147152f7c;
}



// FUNCTION 147152f7c FUN_147152f7c body=138 status=ok
// SIG undefined FUN_147152f7c(void)

code * FUN_147152f7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bDrawNaniteMeshes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc4000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f663c4;
}



// FUNCTION 147153006 FUN_147153006 body=138 status=ok
// SIG undefined FUN_147153006(void)

code * FUN_147153006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153090;
}



// FUNCTION 147153090 FUN_147153090 body=138 status=ok
// SIG undefined FUN_147153090(void)

code * FUN_147153090(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectBoundingGeometryIndexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6644c;
}



// FUNCTION 147153122 FUN_147153122 body=138 status=ok
// SIG undefined FUN_147153122(void)

code * FUN_147153122(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d371ac;
}



// FUNCTION 1471531ac FUN_1471531ac body=138 status=ok
// SIG undefined FUN_1471531ac(void)

code * FUN_1471531ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTileListGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153236;
}



// FUNCTION 147153236 FUN_147153236 body=138 status=ok
// SIG undefined FUN_147153236(void)

code * FUN_147153236(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldShadowTileArrayData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471532c0;
}



// FUNCTION 1471532c0 FUN_1471532c0 body=138 status=ok
// SIG undefined FUN_1471532c0(void)

code * FUN_1471532c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldShadowTileStartOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c098c;
}



// FUNCTION 14715334a FUN_14715334a body=138 status=ok
// SIG undefined FUN_14715334a(void)

code * FUN_14715334a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTileArrayData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d375ce;
}



// FUNCTION 1471533d4 FUN_1471533d4 body=138 status=ok
// SIG undefined FUN_1471533d4(void)

code * FUN_1471533d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTileNumCulledObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715345e;
}



// FUNCTION 14715345e FUN_14715345e body=138 status=ok
// SIG undefined FUN_14715345e(void)

code * FUN_14715345e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowTileArrayData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d37544;
}



// FUNCTION 1471534e8 FUN_1471534e8 body=138 status=ok
// SIG undefined FUN_1471534e8(void)

code * FUN_1471534e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowTileStartOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153572;
}



// FUNCTION 147153572 FUN_147153572 body=132 status=ok
// SIG undefined FUN_147153572(void)

undefined1 * FUN_147153572(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowTileNumCulledObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x76;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471535f6;
}



// FUNCTION 1471535fa FUN_1471535fa body=138 status=ok
// SIG undefined FUN_1471535fa(void)

code * FUN_1471535fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a00000013d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef964a;
}



// FUNCTION 147153684 FUN_147153684 body=138 status=ok
// SIG undefined FUN_147153684(void)

code * FUN_147153684(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvOutputBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2900000013b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef95c2;
}



// FUNCTION 14715370e FUN_14715370e body=138 status=ok
// SIG undefined FUN_14715370e(void)

code * FUN_14715370e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28800000139;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153798;
}



// FUNCTION 147153798 FUN_147153798 body=138 status=ok
// SIG undefined FUN_147153798(void)

code * FUN_147153798(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28400000138;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153822;
}



// FUNCTION 147153822 FUN_147153822 body=138 status=ok
// SIG undefined FUN_147153822(void)

code * FUN_147153822(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TwoSidedMeshDistanceBiasScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000137;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471538ac;
}



// FUNCTION 1471538ac FUN_1471538ac body=138 status=ok
// SIG undefined FUN_1471538ac(void)

code * FUN_1471538ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e2cd46;
}



// FUNCTION 147153936 FUN_147153936 body=138 status=ok
// SIG undefined FUN_147153936(void)

code * FUN_147153936(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScissorRectMinAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000130;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471539c0;
}



// FUNCTION 1471539c0 FUN_1471539c0 body=138 status=ok
// SIG undefined FUN_1471539c0(void)

code * FUN_1471539c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TanLightAngleAndNormalThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000012f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153a4a;
}



// FUNCTION 147153a4a FUN_147153a4a body=138 status=ok
// SIG undefined FUN_147153a4a(void)

code * FUN_147153a4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RayStartOffsetDepthScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x840000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153ad4;
}



// FUNCTION 147153ad4 FUN_147153ad4 body=138 status=ok
// SIG undefined FUN_147153ad4(void)

code * FUN_147153ad4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightSourceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000012d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153b5e;
}



// FUNCTION 147153b5e FUN_147153b5e body=138 status=ok
// SIG undefined FUN_147153b5e(void)

code * FUN_147153b5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightTranslatedPositionAndInvRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000012c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153be8;
}



// FUNCTION 147153be8 FUN_147153be8 body=138 status=ok
// SIG undefined FUN_147153be8(void)

code * FUN_147153be8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000012b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153c72;
}



// FUNCTION 147153c72 FUN_147153c72 body=138 status=ok
// SIG undefined FUN_147153c72(void)

code * FUN_147153c72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000012a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c0e7c;
}



// FUNCTION 147153d00 FUN_147153d00 body=138 status=ok
// SIG undefined FUN_147153d00(void)

code * FUN_147153d00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000196;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153d8a;
}



// FUNCTION 147153d8a FUN_147153d8a body=138 status=ok
// SIG undefined FUN_147153d8a(void)

code * FUN_147153d8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OneOverDownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153e14;
}



// FUNCTION 147153e14 FUN_147153e14 body=138 status=ok
// SIG undefined FUN_147153e14(void)

code * FUN_147153e14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvNearFadePlaneLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000194;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee8866;
}



// FUNCTION 147153e9e FUN_147153e9e body=138 status=ok
// SIG undefined FUN_147153e9e(void)

code * FUN_147153e9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvFadePlaneLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000192;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153f28;
}



// FUNCTION 147153f28 FUN_147153f28 body=138 status=ok
// SIG undefined FUN_147153f28(void)

code * FUN_147153f28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FadePlaneOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000191;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153fb2;
}



// FUNCTION 147153fb2 FUN_147153fb2 body=138 status=ok
// SIG undefined FUN_147153fb2(void)

code * FUN_147153fb2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsUVBilinearMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000190;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715403c;
}



// FUNCTION 14715403c FUN_14715403c body=138 status=ok
// SIG undefined FUN_14715403c(void)

code * FUN_14715403c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScissorRectMinAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000018f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee88ee;
}



// FUNCTION 1471540c6 FUN_1471540c6 body=138 status=ok
// SIG undefined FUN_1471540c6(void)

code * FUN_1471540c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000018d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee8978;
}



// FUNCTION 147154154 FUN_147154154 body=138 status=ok
// SIG undefined FUN_147154154(void)

code * FUN_147154154(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBrickUploads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471541de;
}



// FUNCTION 1471541de FUN_1471541de body=138 status=ok
// SIG undefined FUN_1471541de(void)

code * FUN_1471541de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StartBrickIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145efa6b6;
}



// FUNCTION 14715426c FUN_14715426c body=138 status=ok
// SIG undefined FUN_14715426c(void)

code * FUN_14715426c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionUploadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f01e62;
}



// FUNCTION 1471542fa FUN_1471542fa body=132 status=ok
// SIG undefined FUN_1471542fa(void)

undefined1 * FUN_1471542fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectionAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14715437e;
}



// FUNCTION 147154382 FUN_147154382 body=138 status=ok
// SIG undefined FUN_147154382(void)

code * FUN_147154382(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Mip2WorldTranslatedCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c1584;
}



// FUNCTION 14715440c FUN_14715440c body=138 status=ok
// SIG undefined FUN_14715440c(void)

code * FUN_14715440c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugForceNumMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c160c;
}



// FUNCTION 147154496 FUN_147154496 body=138 status=ok
// SIG undefined FUN_147154496(void)

code * FUN_147154496(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldAssetStreamingRequests";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147154520;
}



// FUNCTION 147154520 FUN_147154520 body=138 status=ok
// SIG undefined FUN_147154520(void)

code * FUN_147154520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldAssetWantedNumMips";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c169c;
}



// FUNCTION 1471545ae FUN_1471545ae body=138 status=ok
// SIG undefined FUN_1471545ae(void)

code * FUN_1471545ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDistanceFieldAssets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000123;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4f554;
}



// FUNCTION 147154638 FUN_147154638 body=146 status=ok
// SIG undefined FUN_147154638(void)

longlong * FUN_147154638(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1471546ca FUN_1471546ca body=148 status=ok
// SIG undefined FUN_1471546ca(void)

void FUN_1471546ca(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  if (param_2 <= (int)uVar1) {
    uVar4 = 5;
    if (5 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x9c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x1c,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x1c)) {
        uVar4 = uVar3 / 0x1c & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x9c) = (int)uVar4;
    FUN_147154760(param_1,param_2,uVar4,0x1c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147154760 FUN_147154760 body=156 status=ok
// SIG undefined FUN_147154760(void)

void FUN_147154760(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x90);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x1c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x90,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x90),param_1,(longlong)param_2 * 0x1c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x90,param_2,param_3,param_4);
  return;
}



// FUNCTION 1471547fc FUN_1471547fc body=134 status=ok
// SIG undefined FUN_1471547fc(void)

ulonglong FUN_1471547fc(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  
  lVar5 = param_1 + 0x20;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = lVar5;
  }
  lVar1 = (longlong)param_2 * 0x1c;
  if (*(int *)(lVar4 + lVar1) != -1) {
    cVar2 = FUN_1471547fc(param_1);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (cVar2 != '\0') goto LAB_147154840;
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = lVar5;
    }
    cVar2 = FUN_1471547fc(param_1,*(undefined4 *)(lVar3 + 4 + lVar1));
    if (cVar2 != '\0') goto LAB_147154840;
    lVar3 = *(longlong *)(param_1 + 0xb0);
  }
  if (lVar3 != 0) {
    lVar5 = lVar3;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar5 + 0x18 + lVar1));
LAB_147154840:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 147154882 FUN_147154882 body=525 status=ok
// SIG undefined FUN_147154882(void)

void FUN_147154882(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar1 = param_1 + 0x20;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar5 = lVar1;
  }
  lVar3 = (longlong)param_2 * 0x1c;
  if (*(int *)(lVar5 + lVar3) != -1) {
    FUN_147154882(param_1);
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = lVar1;
    }
    FUN_147154882(param_1,*(undefined4 *)(lVar5 + 4 + lVar3));
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = lVar1;
    }
    iVar7 = *(int *)(lVar5 + lVar3);
    iVar9 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar9 + 1U) {
      FUN_1446f48e2(param_1 + 0xc0,iVar9);
    }
    *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar9 * 4) = iVar7;
    plVar2 = (longlong *)(param_1 + 0xd0);
    uVar4 = *(uint *)(param_1 + 0xd8);
    if (0 < (int)uVar4) {
      uVar8 = 0;
      pvVar6 = (void *)*plVar2;
      do {
        if (*(int *)((longlong)pvVar6 + 0xc) == iVar7) {
          if (uVar4 - 1 != (int)uVar8) {
            iVar9 = (uVar4 - 1) - (int)uVar8;
            iVar7 = 1;
            if (iVar9 < 1) {
              iVar7 = iVar9;
            }
            memmove(pvVar6,(void *)(*plVar2 + (ulonglong)(uVar4 - iVar7) * 0x10),
                    (longlong)iVar7 << 4);
            uVar4 = *(uint *)(param_1 + 0xd8);
          }
          *(uint *)(param_1 + 0xd8) = uVar4 - 1;
          FUN_147154c7e(plVar2);
          break;
        }
        uVar8 = uVar8 + 1;
        pvVar6 = (void *)((longlong)pvVar6 + 0x10);
      } while (uVar4 != uVar8);
    }
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = lVar1;
    }
    iVar7 = *(int *)(lVar5 + 4 + lVar3);
    iVar9 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0xcc) < iVar9 + 1U) {
      FUN_1446f48e2(param_1 + 0xc0,iVar9);
    }
    *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar9 * 4) = iVar7;
    uVar4 = *(uint *)(param_1 + 0xd8);
    if (0 < (int)uVar4) {
      uVar8 = 0;
      pvVar6 = (void *)*plVar2;
      do {
        if (*(int *)((longlong)pvVar6 + 0xc) == iVar7) {
          if (uVar4 - 1 != (int)uVar8) {
            iVar9 = (uVar4 - 1) - (int)uVar8;
            iVar7 = 1;
            if (iVar9 < 1) {
              iVar7 = iVar9;
            }
            memmove(pvVar6,(void *)(*plVar2 + (ulonglong)(uVar4 - iVar7) * 0x10),
                    (longlong)iVar7 << 4);
            uVar4 = *(uint *)(param_1 + 0xd8);
          }
          *(uint *)(param_1 + 0xd8) = uVar4 - 1;
          FUN_147154c7e(plVar2);
          break;
        }
        uVar8 = uVar8 + 1;
        pvVar6 = (void *)((longlong)pvVar6 + 0x10);
      } while (uVar4 != uVar8);
    }
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = lVar1;
    }
    *(undefined4 *)(lVar5 + lVar3) = 0xffffffff;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = lVar1;
    }
    *(undefined4 *)(lVar5 + 4 + lVar3) = 0xffffffff;
  }
  return;
}



// FUNCTION 147154a90 FUN_147154a90 body=159 status=ok
// SIG undefined FUN_147154a90(void)

void FUN_147154a90(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = (ulonglong)((param_2 - 1) + (uint)(param_2 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar3 <= *(uint *)(param_1 + 0xc)) {
      uVar3 = *(uint *)(param_1 + 0xc);
    }
    uVar1 = (ulonglong)((param_3 - 1) + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar4 <= *(uint *)(param_1 + 0x10)) {
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 0x10) = uVar4;
    uVar1 = (ulonglong)((param_4 - 1) + (uint)(param_4 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_4 = 1 << ((byte)lVar2 & 0x1f);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0xc) < param_2) {
      uVar3 = param_2;
    }
    *(uint *)(param_1 + 0xc) = uVar3;
    uVar3 = *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x10) < param_3) {
      uVar3 = param_3;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) < param_4) {
    uVar3 = param_4;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  return;
}



// FUNCTION 147154b30 FUN_147154b30 body=101 status=ok
// SIG undefined FUN_147154b30(void)

int FUN_147154b30(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147154b96 FUN_147154b96 body=93 status=ok
// SIG undefined FUN_147154b96(void)

void FUN_147154b96(longlong *param_1,int param_2)

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
  FUN_147154bf4(param_1,param_2,1);
  return;
}



// FUNCTION 147154bf4 FUN_147154bf4 body=138 status=ok
// SIG undefined FUN_147154bf4(void)

void FUN_147154bf4(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147154c7e FUN_147154c7e body=63 status=ok
// SIG undefined FUN_147154c7e(void)

void FUN_147154c7e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147154cbe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147154cbe FUN_147154cbe body=97 status=ok
// SIG undefined FUN_147154cbe(void)

ulonglong FUN_147154cbe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147154d20 FUN_147154d20 body=137 status=ok
// SIG undefined FUN_147154d20(void)

void * FUN_147154d20(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x90) == 0) {
      memmove(param_1,param_2,0x8c);
    }
    if (*(longlong *)((longlong)param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_2 + 0x90) = 0;
    *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(undefined8 *)((longlong)param_2 + 0x98) = 0x500000000;
  }
  return param_1;
}



// FUNCTION 147154daa FUN_147154daa body=93 status=ok
// SIG undefined FUN_147154daa(void)

longlong FUN_147154daa(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147154638(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147154e08 FUN_147154e08 body=1304 status=ok
// SIG undefined FUN_147154e08(void)

ulonglong FUN_147154e08(longlong param_1,uint param_2,uint param_3,ulonglong param_4,uint param_5,
                       char param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  short sVar7;
  longlong lVar8;
  short sVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ushort uVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  short local_60;
  short local_5c;
  
  uVar17 = (ulonglong)param_2;
  lVar1 = param_1 + 0x20;
  uVar6 = param_4;
  while( true ) {
    while( true ) {
      lVar8 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar8 = lVar1;
      }
      iVar16 = (int)uVar17;
      lVar13 = (longlong)iVar16 * 0x1c;
      if (*(int *)(lVar8 + lVar13) == -1) break;
      uVar6 = FUN_147154e08(param_1,*(int *)(lVar8 + lVar13),param_3,uVar6,param_5,param_6);
      if ((int)uVar6 != -1) {
        return uVar6;
      }
      lVar8 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar8 = lVar1;
      }
      uVar17 = (ulonglong)*(uint *)(lVar8 + 4 + lVar13);
      uVar6 = param_4 & 0xffffffff;
    }
    lVar8 = lVar8 + lVar13;
    if (*(char *)(lVar8 + 0x18) != '\0') {
      return 0xffffffff;
    }
    uVar18 = *(ushort *)(lVar8 + 0x12);
    uVar14 = (uint)uVar18;
    if (uVar14 < param_3) break;
    uVar20 = *(ushort *)(lVar8 + 0x14);
    uVar21 = (uint)uVar20;
    uVar15 = (uint)uVar6;
    if (uVar21 < uVar15) {
      return 0xffffffff;
    }
    uVar11 = *(ushort *)(lVar8 + 0x16);
    uVar19 = (uint)uVar11;
    if (uVar19 < param_5) {
      return 0xffffffff;
    }
    if (param_6 == '\0') {
      if (*(uint *)(param_1 + 0xc) < *(ushort *)(lVar8 + 0xc) + param_3) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x10) < *(ushort *)(lVar8 + 0xe) + uVar15) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x14) < *(ushort *)(lVar8 + 0x10) + param_5) {
        return 0xffffffff;
      }
    }
    if (uVar19 == param_5 && (uVar21 == uVar15 && uVar14 == param_3)) {
      return uVar17;
    }
    local_60 = *(short *)(lVar8 + 0xc);
    local_5c = *(short *)(lVar8 + 0xe);
    sVar7 = *(short *)(lVar8 + 0x10);
    iVar2 = *(int *)(param_1 + 200);
    if ((longlong)iVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = uVar3 + 1;
      if (*(uint *)(param_1 + 0xbc) < uVar3 + 1) {
        FUN_1471546ca(lVar1,uVar3);
      }
    }
    else {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0xc0) + -4 + (longlong)iVar2 * 4);
      *(int *)(param_1 + 200) = iVar2 + -1;
      FUN_14479f406(param_1 + 0xc0);
    }
    iVar2 = *(int *)(param_1 + 200);
    if ((longlong)iVar2 == 0) {
      iVar12 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar12 + 1U) {
        FUN_1471546ca(lVar1,iVar12);
      }
    }
    else {
      iVar12 = *(int *)(*(longlong *)(param_1 + 0xc0) + -4 + (longlong)iVar2 * 4);
      *(int *)(param_1 + 200) = iVar2 + -1;
      FUN_14479f406(param_1 + 0xc0);
    }
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar8 = lVar1;
    }
    *(uint *)(lVar8 + lVar13) = uVar3;
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar8 = lVar1;
    }
    *(int *)(lVar8 + 4 + lVar13) = iVar12;
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar8 = lVar1;
    }
    lVar10 = (longlong)(int)uVar3 * 0x1c;
    lVar13 = lVar8 + lVar10;
    *(undefined8 *)(lVar8 + lVar10) = 0xffffffffffffffff;
    *(int *)(lVar8 + 8 + lVar10) = iVar16;
    *(short *)(lVar8 + 0xc + lVar10) = local_60;
    *(short *)(lVar8 + 0xe + lVar10) = local_5c;
    *(short *)(lVar8 + 0x10 + lVar10) = sVar7;
    lVar8 = (longlong)iVar12;
    sVar9 = (short)param_5;
    if (uVar21 - uVar15 < uVar14 - param_3) {
      if (uVar19 - param_5 < uVar14 - param_3) {
        sVar9 = (short)param_3;
        *(short *)(lVar13 + 0x12) = sVar9;
        *(ushort *)(lVar13 + 0x14) = uVar20;
        *(ushort *)(lVar13 + 0x16) = uVar11;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = lVar1;
        }
        puVar5 = (undefined8 *)(lVar13 + lVar8 * 0x1c);
        uVar18 = uVar18 - sVar9;
        local_60 = local_60 + sVar9;
      }
      else {
        *(ushort *)(lVar13 + 0x12) = uVar18;
        *(ushort *)(lVar13 + 0x14) = uVar20;
        *(short *)(lVar13 + 0x16) = sVar9;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = lVar1;
        }
        puVar5 = (undefined8 *)(lVar13 + lVar8 * 0x1c);
        uVar11 = uVar11 - sVar9;
        sVar7 = sVar7 + sVar9;
      }
    }
    else {
      *(ushort *)(lVar13 + 0x12) = uVar18;
      if (uVar19 - param_5 < uVar21 - uVar15) {
        sVar9 = (short)param_4;
        *(short *)(lVar13 + 0x14) = sVar9;
        *(ushort *)(lVar13 + 0x16) = uVar11;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = lVar1;
        }
        puVar5 = (undefined8 *)(lVar13 + lVar8 * 0x1c);
        uVar20 = uVar20 - sVar9;
        local_5c = local_5c + sVar9;
      }
      else {
        *(ushort *)(lVar13 + 0x14) = uVar20;
        *(short *)(lVar13 + 0x16) = sVar9;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        lVar13 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar13 = lVar1;
        }
        puVar5 = (undefined8 *)(lVar13 + lVar8 * 0x1c);
        uVar11 = uVar11 - sVar9;
        sVar7 = sVar7 + sVar9;
      }
    }
    *puVar5 = 0xffffffffffffffff;
    *(int *)(puVar5 + 1) = iVar16;
    *(short *)((longlong)puVar5 + 0xc) = local_60;
    *(short *)((longlong)puVar5 + 0xe) = local_5c;
    *(short *)(puVar5 + 2) = sVar7;
    *(ushort *)((longlong)puVar5 + 0x12) = uVar18;
    *(ushort *)((longlong)puVar5 + 0x14) = uVar20;
    *(ushort *)((longlong)puVar5 + 0x16) = uVar11;
    *(undefined1 *)(puVar5 + 3) = 0;
    lVar13 = *(longlong *)(param_1 + 0xb0);
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar13 = lVar1;
    }
    iVar16 = *(int *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = iVar16 + 1U;
    if (*(uint *)(param_1 + 0xdc) < iVar16 + 1U) {
      FUN_145904ea4((longlong *)(param_1 + 0xd0),iVar16);
    }
    uVar6 = param_4 & 0xffffffff;
    lVar13 = lVar13 + lVar8 * 0x1c;
    lVar8 = *(longlong *)(param_1 + 0xd0);
    lVar10 = (longlong)iVar16 * 0x10;
    uVar4 = *(undefined4 *)(lVar13 + 0x14);
    *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(lVar13 + 0xc);
    *(undefined4 *)(lVar8 + 8 + lVar10) = uVar4;
    *(int *)(lVar8 + 0xc + lVar10) = iVar12;
    uVar17 = (ulonglong)uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 147155320 FUN_147155320 body=334 status=ok
// SIG undefined FUN_147155320(void)

undefined4 *
FUN_147155320(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147155470(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = *puVar2;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = FUN_1448eb174(local_48,0xc,0);
  local_68 = param_4;
  cVar3 = FUN_147155556(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1471555c2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147155470 FUN_147155470 body=230 status=ok
// SIG undefined FUN_147155470(void)

int * FUN_147155470(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 147155556 FUN_147155556 body=107 status=ok
// SIG undefined FUN_147155556(void)

void FUN_147155556(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar6 = FUN_147154b30();
    if (iVar6 != -1) {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_147154bf4(param_1,*param_4,1);
      *param_4 = iVar6;
      uVar5 = 1;
      goto LAB_147155572;
    }
  }
  uVar5 = 0;
LAB_147155572:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1471555c2 FUN_1471555c2 body=446 status=ok
// SIG undefined FUN_1471555c2(void)

void FUN_1471555c2(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
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



// FUNCTION 147155782 FUN_147155782 body=29 status=ok
// SIG undefined FUN_147155782(void)

undefined8 FUN_147155782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471557a0 FUN_1471557a0 body=384 status=ok
// SIG undefined FUN_1471557a0(void)

void FUN_1471557a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9c7d10;
  if (DAT_14c9c7d10 != 0) {
    LOCK();
    *(int *)(DAT_14c9c7d10 + 8) = *(int *)(DAT_14c9c7d10 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c7cc8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a20aaf0;
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



// FUNCTION 147155922 FUN_147155922 body=38 status=ok
// SIG undefined FUN_147155922(void)

undefined8 FUN_147155922(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155948 FUN_147155948 body=163 status=ok
// SIG undefined FUN_147155948(void)

void FUN_147155948(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142be79b4();
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
  FUN_142be7a9c(param_1,param_2);
  return;
}



// FUNCTION 1471559eb FUN_1471559eb body=374 status=ok
// SIG undefined FUN_1471559eb(void)

void FUN_1471559eb(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147155b62 FUN_147155b62 body=38 status=ok
// SIG undefined FUN_147155b62(void)

undefined8 FUN_147155b62(undefined8 param_1,int param_2)

{
  FUN_1462bdd00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155b8e FUN_147155b8e body=38 status=ok
// SIG undefined FUN_147155b8e(void)

undefined8 FUN_147155b8e(undefined8 param_1,int param_2)

{
  FUN_1462bdd48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155bba FUN_147155bba body=38 status=ok
// SIG undefined FUN_147155bba(void)

undefined8 FUN_147155bba(undefined8 param_1,int param_2)

{
  FUN_1462bdd90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155c14 FUN_147155c14 body=29 status=ok
// SIG undefined FUN_147155c14(void)

undefined8 FUN_147155c14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155c32 FUN_147155c32 body=354 status=ok
// SIG undefined FUN_147155c32(void)

void FUN_147155c32(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14c9c7d98;
  if (DAT_14c9c7d98 != 0) {
    LOCK();
    *(int *)(DAT_14c9c7d98 + 8) = *(int *)(DAT_14c9c7d98 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14c9c7d50;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a20abb0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147155d96 FUN_147155d96 body=38 status=ok
// SIG undefined FUN_147155d96(void)

undefined8 FUN_147155d96(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155dbc FUN_147155dbc body=29 status=ok
// SIG undefined FUN_147155dbc(void)

undefined8 FUN_147155dbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147155dda FUN_147155dda body=564 status=ok
// SIG undefined FUN_147155dda(void)

void FUN_147155dda(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9c7e20;
    if (DAT_14c9c7e20 != 0) {
      LOCK();
      *(int *)(DAT_14c9c7e20 + 8) = *(int *)(DAT_14c9c7e20 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9c7dd8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a20abf0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9c7e20;
    if (DAT_14c9c7e20 != 0) {
      LOCK();
      *(int *)(DAT_14c9c7e20 + 8) = *(int *)(DAT_14c9c7e20 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9c7dd8;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a20abf0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a20abd0;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147156010 FUN_147156010 body=38 status=ok
// SIG undefined FUN_147156010(void)

undefined8 FUN_147156010(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156036 FUN_147156036 body=219 status=ok
// SIG undefined FUN_147156036(void)

void FUN_147156036(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142be84fc(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147156112 FUN_147156112 body=38 status=ok
// SIG undefined FUN_147156112(void)

undefined8 FUN_147156112(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156138 FUN_147156138 body=163 status=ok
// SIG undefined FUN_147156138(void)

void FUN_147156138(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142be86de();
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
  FUN_142be87c6(param_1,param_2);
  return;
}



// FUNCTION 1471561db FUN_1471561db body=374 status=ok
// SIG undefined FUN_1471561db(void)

void FUN_1471561db(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147156352 FUN_147156352 body=38 status=ok
// SIG undefined FUN_147156352(void)

undefined8 FUN_147156352(undefined8 param_1,int param_2)

{
  FUN_1462bddd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471563ac FUN_1471563ac body=38 status=ok
// SIG undefined FUN_1471563ac(void)

undefined8 FUN_1471563ac(undefined8 param_1,int param_2)

{
  FUN_1462bde20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471563dc FUN_1471563dc body=38 status=ok
// SIG undefined FUN_1471563dc(void)

undefined8 FUN_1471563dc(undefined8 param_1,int param_2)

{
  FUN_1462bde68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156436 FUN_147156436 body=149 status=ok
// SIG undefined FUN_147156436(void)

void FUN_147156436(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xd8);
  if ((uint)param_3 < 10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xd8,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xd8),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xd8,param_2,param_3,0x18);
  return;
}



// FUNCTION 1471564cc FUN_1471564cc body=136 status=ok
// SIG undefined FUN_1471564cc(void)

void FUN_1471564cc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (param_2 <= (int)uVar1) {
    iVar5 = 9;
    if (9 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (9 < *(uint *)(param_1 + 0xe4)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xe4) = iVar5;
    FUN_147156436(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147156556 FUN_147156556 body=29 status=ok
// SIG undefined FUN_147156556(void)

undefined8 FUN_147156556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156574 FUN_147156574 body=384 status=ok
// SIG undefined FUN_147156574(void)

void FUN_147156574(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9c8018;
  if (DAT_14c9c8018 != 0) {
    LOCK();
    *(int *)(DAT_14c9c8018 + 8) = *(int *)(DAT_14c9c8018 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c7fd0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a20ad40;
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



// FUNCTION 1471566f6 FUN_1471566f6 body=38 status=ok
// SIG undefined FUN_1471566f6(void)

undefined8 FUN_1471566f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14715671c FUN_14715671c body=163 status=ok
// SIG undefined FUN_14715671c(void)

void FUN_14715671c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142beb64e();
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
  FUN_142beb736(param_1,param_2);
  return;
}



// FUNCTION 1471567bf FUN_1471567bf body=374 status=ok
// SIG undefined FUN_1471567bf(void)

void FUN_1471567bf(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147156936 FUN_147156936 body=96 status=ok
// SIG undefined FUN_147156936(void)

void FUN_147156936(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147156996 FUN_147156996 body=140 status=ok
// SIG undefined FUN_147156996(void)

void FUN_147156996(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = 0xa2;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x162);
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2a) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  return;
}



// FUNCTION 147156a22 FUN_147156a22 body=31 status=ok
// SIG undefined FUN_147156a22(void)

undefined8 FUN_147156a22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156a42 FUN_147156a42 body=137 status=ok
// SIG undefined FUN_147156a42(void)

void FUN_147156a42(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 147156acc FUN_147156acc body=29 status=ok
// SIG undefined FUN_147156acc(void)

undefined8 FUN_147156acc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156aea FUN_147156aea body=38 status=ok
// SIG undefined FUN_147156aea(void)

undefined8 FUN_147156aea(undefined8 param_1,int param_2)

{
  FUN_1462bdeb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156b16 FUN_147156b16 body=138 status=ok
// SIG undefined FUN_147156b16(void)

code * FUN_147156b16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndirectArguments";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x310000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c1b16;
}



// FUNCTION 147156ba0 FUN_147156ba0 body=38 status=ok
// SIG undefined FUN_147156ba0(void)

undefined8 FUN_147156ba0(undefined8 param_1,int param_2)

{
  FUN_1462bdef8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156bfa FUN_147156bfa body=48 status=ok
// SIG undefined FUN_147156bfa(void)

void FUN_147156bfa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147156c2a FUN_147156c2a body=141 status=ok
// SIG undefined FUN_147156c2a(void)

void FUN_147156c2a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x40);
  return;
}



// FUNCTION 147156cb8 FUN_147156cb8 body=48 status=ok
// SIG undefined FUN_147156cb8(void)

void FUN_147156cb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 147156cec FUN_147156cec body=38 status=ok
// SIG undefined FUN_147156cec(void)

undefined8 FUN_147156cec(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156d12 FUN_147156d12 body=219 status=ok
// SIG undefined FUN_147156d12(void)

void FUN_147156d12(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142bf2374(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147156dee FUN_147156dee body=138 status=ok
// SIG undefined FUN_147156dee(void)

void FUN_147156dee(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147156e78 FUN_147156e78 body=38 status=ok
// SIG undefined FUN_147156e78(void)

undefined8 FUN_147156e78(undefined8 param_1,int param_2)

{
  FUN_1462bdf40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156ea4 FUN_147156ea4 body=31 status=ok
// SIG undefined FUN_147156ea4(void)

undefined8 FUN_147156ea4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156ec4 FUN_147156ec4 body=147 status=ok
// SIG undefined FUN_147156ec4(void)

void FUN_147156ec4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147156f58 FUN_147156f58 body=29 status=ok
// SIG undefined FUN_147156f58(void)

undefined8 FUN_147156f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147156f76 FUN_147156f76 body=384 status=ok
// SIG undefined FUN_147156f76(void)

void FUN_147156f76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9c9008;
  if (DAT_14c9c9008 != 0) {
    LOCK();
    *(int *)(DAT_14c9c9008 + 8) = *(int *)(DAT_14c9c9008 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c8fc0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a20b330;
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



// FUNCTION 1471570f8 FUN_1471570f8 body=38 status=ok
// SIG undefined FUN_1471570f8(void)

undefined8 FUN_1471570f8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14715711e FUN_14715711e body=163 status=ok
// SIG undefined FUN_14715711e(void)

void FUN_14715711e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142bf3dda();
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
  FUN_142bf3ec2(param_1,param_2);
  return;
}



// FUNCTION 1471571c1 FUN_1471571c1 body=374 status=ok
// SIG undefined FUN_1471571c1(void)

void FUN_1471571c1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147157338 FUN_147157338 body=119 status=ok
// SIG undefined FUN_147157338(void)

void FUN_147157338(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 6,0);
      iVar2 = (int)(uVar3 >> 6);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147156c2a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1471573b0 FUN_1471573b0 body=29 status=ok
// SIG undefined FUN_1471573b0(void)

undefined8 FUN_1471573b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471573ce FUN_1471573ce body=384 status=ok
// SIG undefined FUN_1471573ce(void)

void FUN_1471573ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9c8f80;
  if (DAT_14c9c8f80 != 0) {
    LOCK();
    *(int *)(DAT_14c9c8f80 + 8) = *(int *)(DAT_14c9c8f80 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c8f38;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a20b3e0;
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



// FUNCTION 147157550 FUN_147157550 body=38 status=ok
// SIG undefined FUN_147157550(void)

undefined8 FUN_147157550(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147157576 FUN_147157576 body=163 status=ok
// SIG undefined FUN_147157576(void)

void FUN_147157576(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142bf51fa();
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
  FUN_142bf52e2(param_1,param_2);
  return;
}



// FUNCTION 147157619 FUN_147157619 body=374 status=ok
// SIG undefined FUN_147157619(void)

void FUN_147157619(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147157790 FUN_147157790 body=42 status=ok
// SIG undefined FUN_147157790(void)

void FUN_147157790(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471577be FUN_1471577be body=96 status=ok
// SIG undefined FUN_1471577be(void)

undefined8 FUN_1471577be(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7be18();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdb88,1);
  return uVar3;
}



// FUNCTION 14715781e FUN_14715781e body=52 status=ok
// SIG undefined FUN_14715781e(void)

void FUN_14715781e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147157852 FUN_147157852 body=42 status=ok
// SIG undefined FUN_147157852(void)

void FUN_147157852(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147157884 FUN_147157884 body=96 status=ok
// SIG undefined FUN_147157884(void)

undefined8 FUN_147157884(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3f69c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdc10,1);
  return uVar3;
}



// FUNCTION 1471578e4 FUN_1471578e4 body=52 status=ok
// SIG undefined FUN_1471578e4(void)

void FUN_1471578e4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147157918 FUN_147157918 body=42 status=ok
// SIG undefined FUN_147157918(void)

void FUN_147157918(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147157970 FUN_147157970 body=96 status=ok
// SIG undefined FUN_147157970(void)

undefined8 FUN_147157970(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141555c14();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdc98,1);
  return uVar3;
}



// FUNCTION 1471579d0 FUN_1471579d0 body=52 status=ok
// SIG undefined FUN_1471579d0(void)

void FUN_1471579d0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147157a04 FUN_147157a04 body=42 status=ok
// SIG undefined FUN_147157a04(void)

void FUN_147157a04(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147157a5c FUN_147157a5c body=96 status=ok
// SIG undefined FUN_147157a5c(void)

undefined8 FUN_147157a5c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141555c14();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdc98,1);
  return uVar3;
}



// FUNCTION 147157abc FUN_147157abc body=52 status=ok
// SIG undefined FUN_147157abc(void)

void FUN_147157abc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147157af0 FUN_147157af0 body=68 status=ok
// SIG undefined FUN_147157af0(void)

void FUN_147157af0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147157b38 FUN_147157b38 body=284 status=ok
// SIG undefined FUN_147157b38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147157b38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca4a0) {
    FUN_144b3d300(&DAT_14c9ca4a0);
    if (DAT_14c9ca4a0 == -1) {
      FUN_1456bdc0e();
      FUN_140db5666(&DAT_14c9ca3f8,2,&DAT_14c9ca390,L"FDistortionMeshVS",
                    L"/Engine/Private/DistortAccumulateVS.usf",L"Main",0,1,FUN_147157c80,
                    FUN_147157c58,&LAB_142bf7e6c,&LAB_147157c54,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14c9ca3f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bf7e80);
      _Init_thread_footer(&DAT_14c9ca4a0);
    }
  }
  return &DAT_14c9ca3f8;
}



// FUNCTION 147157c58 FUN_147157c58 body=39 status=ok
// SIG undefined FUN_147157c58(void)

void FUN_147157c58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147157c80 FUN_147157c80 body=76 status=ok
// SIG undefined FUN_147157c80(void)

void * FUN_147157c80(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147157ccc FUN_147157ccc body=68 status=ok
// SIG undefined FUN_147157ccc(void)

void FUN_147157ccc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147157d14 FUN_147157d14 body=284 status=ok
// SIG undefined FUN_147157d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147157d14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca5c8) {
    FUN_144b3d300(&DAT_14c9ca5c8);
    if (DAT_14c9ca5c8 == -1) {
      FUN_1456bdd58();
      FUN_140db5666(&DAT_14c9ca520,2,&DAT_14c9ca4b8,L"FDistortionMeshPS",
                    L"/Engine/Private/DistortAccumulatePS.usf",L"Main",3,1,FUN_147157e5c,
                    FUN_147157e34,&LAB_142bf7e8c,&LAB_147157e30,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14c9ca520 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bf7ea0);
      _Init_thread_footer(&DAT_14c9ca5c8);
    }
  }
  return &DAT_14c9ca520;
}



// FUNCTION 147157e34 FUN_147157e34 body=39 status=ok
// SIG undefined FUN_147157e34(void)

void FUN_147157e34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147157e5c FUN_147157e5c body=76 status=ok
// SIG undefined FUN_147157e5c(void)

void * FUN_147157e5c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147157ea8 FUN_147157ea8 body=42 status=ok
// SIG undefined FUN_147157ea8(void)

void FUN_147157ea8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147157ede FUN_147157ede body=96 status=ok
// SIG undefined FUN_147157ede(void)

undefined8 FUN_147157ede(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7f484();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdd20,1);
  return uVar3;
}



// FUNCTION 147157f3e FUN_147157f3e body=52 status=ok
// SIG undefined FUN_147157f3e(void)

void FUN_147157f3e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147157f72 FUN_147157f72 body=42 status=ok
// SIG undefined FUN_147157f72(void)

void FUN_147157f72(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147157fbc FUN_147157fbc body=96 status=ok
// SIG undefined FUN_147157fbc(void)

undefined8 FUN_147157fbc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f12382();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdda8,1);
  return uVar3;
}



// FUNCTION 14715801c FUN_14715801c body=52 status=ok
// SIG undefined FUN_14715801c(void)

void FUN_14715801c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147158050 FUN_147158050 body=42 status=ok
// SIG undefined FUN_147158050(void)

void FUN_147158050(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715809a FUN_14715809a body=96 status=ok
// SIG undefined FUN_14715809a(void)

undefined8 FUN_14715809a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7f9f4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cde30,1);
  return uVar3;
}



// FUNCTION 1471580fa FUN_1471580fa body=52 status=ok
// SIG undefined FUN_1471580fa(void)

void FUN_1471580fa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715812e FUN_14715812e body=367 status=ok
// SIG undefined FUN_14715812e(void)

undefined8 FUN_14715812e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  fVar6 = -5.0;
  lVar2 = 4;
  iVar1 = -4;
  do {
    fVar3 = expf(ABS(fVar6) * 0.5 * ABS(fVar6) * 0.5 * -0.5);
    fVar4 = 0.0;
    if ((fVar6 != 5.0) || (NAN(fVar6))) {
      fVar4 = expf(ABS((float)iVar1) * 0.5 * ABS((float)iVar1) * 0.5 * -0.5);
    }
    fVar3 = fVar3 + fVar4;
    *(double *)(param_1 + -8 + lVar2 * 2) = (double)(fVar6 + fVar4 / fVar3);
    *(double *)(param_1 + lVar2 * 2) = (double)fVar3;
    fVar6 = (float)(iVar1 + 1);
    fVar5 = fVar5 + fVar3;
    lVar2 = lVar2 + 8;
    iVar1 = iVar1 + 2;
  } while (lVar2 != 0x34);
  lVar2 = 8;
  do {
    *(double *)(param_1 + lVar2) = *(double *)(param_1 + lVar2) * (double)(1.0 / fVar5);
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x68);
  return 6;
}



// FUNCTION 14715829e FUN_14715829e body=66 status=ok
// SIG undefined FUN_14715829e(void)

void FUN_14715829e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2 * 0x58;
  if (*(char *)(param_1 + 0x50 + lVar1) == '\x01') {
    *(undefined1 *)(param_1 + 0x50 + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x48 + lVar1) = 0;
    if (*(int *)(param_1 + 0x4c + lVar1) != 0) {
      FUN_14716691c(lVar1 + param_1,0);
    }
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
  }
  return;
}



// FUNCTION 1471582e0 FUN_1471582e0 body=92 status=ok
// SIG undefined FUN_1471582e0(void)

void FUN_1471582e0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (((param_2 & 0xffffffff) * 0x58 - lVar1 != 0) &&
       (*(char *)(param_1 + 0x50 + lVar1) == '\x01')) {
      *(undefined1 *)(param_1 + 0x50 + lVar1) = 0;
      *(undefined4 *)(param_1 + 0x48 + lVar1) = 0;
      if (*(int *)(param_1 + 0x4c + lVar1) != 0) {
        FUN_14716691c(param_1 + lVar1,0);
      }
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + -1;
    }
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x160);
  return;
}



// FUNCTION 14715833c FUN_14715833c body=801 status=ok
// SIG undefined FUN_14715833c(void)

void FUN_14715833c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_3 == 0) || (plVar2 = *(longlong **)(param_3 + 0x28), plVar2 == (longlong *)0x0)) ||
     (((*(byte *)(plVar2 + 0x3a) & 0x10) == 0 && (plVar2[0x38] == 0)))) {
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1471582e0(param_1,0xffffffff);
    return;
  }
  bVar8 = 2;
  if ((*(byte *)(plVar2 + 0x3a) & 8) == 0) {
    bVar8 = (char)plVar2[0x3d] == '\0';
  }
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_68);
  plStack_c0 = param_2 + 2;
  local_c8 = 0x100000000;
  local_b8 = 0xffffffff;
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_c8);
  }
  local_88 = local_c8;
  local_80 = plStack_c0;
  local_78 = local_b8;
  uVar4 = local_78;
  local_70 = (undefined4)local_b0;
  local_6c = local_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
  local_90 = param_2;
  if (local_78._4_4_ < (int)plStack_c0[3]) {
    iVar6 = local_78._4_4_;
    local_78 = uVar4;
    do {
      lVar3 = *(longlong *)(*local_90 + 0x30 + (longlong)iVar6 * 0x40);
      if (lVar3 != 0) {
        if ((*(byte *)(*(longlong *)(lVar3 + 0x28) + 0x1d0) & 0x10) == 0) {
          if ((lVar3 != param_3) && (*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x1c0) != 0)) {
LAB_147158495:
            iVar6 = FUN_142cfe0de(lVar3);
            if (((iVar6 != -1) &&
                ((lVar7 = (longlong)iVar6 * 0x58, *(char *)(param_1 + 0x50 + lVar7) == '\x01' &&
                 (plVar2 = *(longlong **)(lVar3 + 0x28), plVar2 != (longlong *)0x0)))) &&
               (((*(byte *)(plVar2 + 0x3a) & 0x10) != 0 || (plVar2[0x38] != 0)))) {
              if ((*(byte *)(plVar2 + 0x3a) & 8) == 0) {
                bVar9 = (char)plVar2[0x3d] == '\0';
              }
              else {
                bVar9 = 2;
                if (1 < bVar8) goto LAB_147158586;
              }
              local_b8 = local_58;
              local_c8 = local_68;
              plStack_c0 = plStack_60;
              local_98 = local_50;
              local_b0 = local_50;
              local_a8 = local_50;
              local_a0 = local_50;
              cVar5 = (**(code **)(*plVar2 + 8))(plVar2,&local_c8);
              if (cVar5 != '\0') {
                if (bVar9 < bVar8) {
                  lVar1 = param_1 + lVar7;
                  iVar6 = *(int *)(param_1 + 0x48 + lVar7);
                  *(uint *)(param_1 + 0x48 + lVar7) = iVar6 + 1U;
                  if (*(uint *)(param_1 + 0x4c + lVar7) < iVar6 + 1U) {
                    FUN_14715dd8a(lVar1,iVar6);
                  }
                  lVar7 = *(longlong *)(lVar1 + 0x40);
                  if (*(longlong *)(lVar1 + 0x40) == 0) {
                    lVar7 = lVar1;
                  }
                  *(longlong *)(lVar7 + (longlong)iVar6 * 8) = lVar3;
                }
                else {
                  if (*(char *)(param_1 + lVar7 + 0x50) == '\0') {
                    iVar6 = *(int *)(param_1 + 0x160);
                  }
                  else {
                    *(undefined1 *)(param_1 + 0x50 + lVar7) = 0;
                    *(undefined4 *)(param_1 + 0x48 + lVar7) = 0;
                    if (*(int *)(param_1 + 0x4c + lVar7) != 0) {
                      FUN_14716691c(lVar7 + param_1,0);
                    }
                    iVar6 = *(int *)(param_1 + 0x160) + -1;
                    *(int *)(param_1 + 0x160) = iVar6;
                  }
                  uVar4 = local_78;
                  if (iVar6 < 1) break;
                }
              }
            }
          }
        }
        else if (lVar3 != param_3) goto LAB_147158495;
      }
LAB_147158586:
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      uVar4 = local_78;
    } while (local_78._4_4_ < (int)local_80[3]);
  }
  local_78 = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 147158674 FUN_147158674 body=85 status=ok
// SIG undefined FUN_147158674(void)

ulonglong FUN_147158674(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x160) < 1) {
    return 0xffffffff;
  }
  pcVar3 = (char *)(param_1 + 0x50);
  uVar4 = 0;
  uVar1 = 0xffffffff;
  do {
    uVar2 = uVar1;
    if (*pcVar3 == '\x01') {
      if ((int)uVar1 == -1) {
        uVar2 = uVar4 & 0xffffffff;
      }
      else {
        uVar2 = uVar4 & 0xffffffff;
        if (*(int *)(param_1 + 0x48 + (longlong)(int)uVar1 * 0x58) <= *(int *)(pcVar3 + -8)) {
          uVar2 = uVar1;
        }
      }
    }
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 0x58;
    uVar1 = uVar2;
  } while (uVar4 != 4);
  return uVar2;
}



// FUNCTION 1471586ca FUN_1471586ca body=1846 status=ok
// SIG undefined FUN_1471586ca(void)

void FUN_1471586ca(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar15 = *(int *)(param_1 + 0x48 + (longlong)param_2 * 0x58);
  if (1 < (longlong)iVar15) {
    param_1 = param_1 + (longlong)param_2 * 0x58;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      param_1 = lVar1;
    }
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (longlong)iVar15 * 8 + -8;
    local_348 = param_1;
    fVar25 = logf((float)iVar15);
    local_338[0] = (int)(longlong)(fVar25 + fVar25);
    plVar4 = &local_348;
    do {
      plVar6 = (longlong *)*plVar4;
      plVar9 = (longlong *)plVar4[1];
      iVar15 = (int)plVar4[2];
      iVar10 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar6) >> 3);
      uVar19 = (ulonglong)(iVar10 + 1);
      plVar11 = plVar6;
      plVar13 = plVar9;
      if (iVar15 != 0) {
LAB_147158780:
        if (8 < (int)(uint)uVar19) {
          uVar18 = (uint)uVar19 >> 1;
          lVar1 = plVar11[uVar18];
          plVar11[uVar18] = *plVar11;
          *plVar11 = lVar1;
          plVar20 = plVar13 + 1;
          plVar5 = plVar11;
          do {
            plVar3 = plVar5 + 1;
            plVar14 = plVar5 + 1;
            do {
              plVar23 = plVar14;
              plVar5 = plVar3;
              if (plVar13 < plVar5) break;
              lVar1 = *(longlong *)(*plVar11 + 0x28);
              uVar18 = 0xffffffff;
              uVar22 = 0xffffffff;
              if ((lVar1 != 0) &&
                 ((((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))
                  && (uVar22 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)))) {
                uVar22 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              lVar1 = *(longlong *)(*plVar5 + 0x28);
              if (((lVar1 != 0) &&
                  (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))))
                 && (uVar18 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
                uVar18 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              plVar3 = plVar5 + 1;
              plVar14 = plVar23 + 1;
            } while ((int)uVar22 < (int)uVar18);
            plVar3 = plVar20 + -2;
            do {
              plVar14 = plVar20;
              plVar21 = plVar3;
              plVar20 = plVar14 + -1;
              if (plVar20 <= plVar11) break;
              lVar1 = *(longlong *)(*plVar20 + 0x28);
              uVar18 = 0xffffffff;
              uVar22 = 0xffffffff;
              if (((lVar1 != 0) &&
                  (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))))
                 && (uVar22 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
                uVar22 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              lVar1 = *(longlong *)(*plVar11 + 0x28);
              if ((lVar1 != 0) &&
                 ((((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))
                  && (uVar18 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)))) {
                uVar18 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              plVar3 = plVar21 + -1;
            } while ((int)uVar22 < (int)uVar18);
            if (plVar20 < plVar5) goto LAB_14715891e;
            lVar1 = *plVar5;
            *plVar5 = *plVar20;
            *plVar20 = lVar1;
          } while( true );
        }
        for (; plVar9 = plVar11, plVar6 = plVar11, plVar11 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar6 = plVar6 + 1, plVar6 <= plVar13) {
            lVar1 = *(longlong *)(*plVar9 + 0x28);
            uVar18 = 0xffffffff;
            uVar22 = 0xffffffff;
            if (((lVar1 != 0) &&
                (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))))
               && (uVar22 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
              uVar22 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
            }
            lVar1 = *(longlong *)(*plVar6 + 0x28);
            if (((lVar1 != 0) &&
                (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))))
               && (uVar18 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
              uVar18 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
            }
            if ((int)uVar18 <= (int)uVar22) {
              plVar9 = plVar6;
            }
          }
          lVar1 = *plVar9;
          *plVar9 = *plVar13;
          *plVar13 = lVar1;
        }
        goto LAB_147158dc6;
      }
LAB_1471589b1:
      iVar15 = (int)uVar19;
      if (iVar15 != 0) {
        iVar10 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
        iVar17 = iVar10;
joined_r0x0001471589d8:
        do {
          iVar7 = iVar10 * 2 + 1;
          if (iVar7 < iVar15) {
            iVar16 = iVar10 * 2 + 2;
            iVar8 = iVar7;
            if (iVar16 < iVar15) {
              lVar1 = *(longlong *)(plVar11[iVar16] + 0x28);
              uVar22 = 0xffffffff;
              uVar18 = 0xffffffff;
              if ((lVar1 != 0) &&
                 ((((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))
                  && (uVar18 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)))) {
                uVar18 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              lVar1 = *(longlong *)(plVar11[iVar7] + 0x28);
              if (((lVar1 != 0) &&
                  (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar1 + 0x1c0) != 0))))
                 && (uVar22 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
                uVar22 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
              }
              iVar8 = iVar16;
              if ((int)uVar22 <= (int)uVar18) {
                iVar8 = iVar7;
              }
            }
            lVar1 = plVar11[iVar10];
            lVar2 = *(longlong *)(lVar1 + 0x28);
            uVar22 = 0xffffffff;
            uVar18 = 0xffffffff;
            if (((lVar2 != 0) &&
                (((*(byte *)(lVar2 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar2 + 0x1c0) != 0))))
               && (uVar18 = 2, (*(byte *)(lVar2 + 0x1d0) & 8) == 0)) {
              uVar18 = (uint)(*(char *)(lVar2 + 0x1e8) == '\0');
            }
            lVar2 = *(longlong *)(plVar11[iVar8] + 0x28);
            if ((lVar2 != 0) &&
               ((((*(byte *)(lVar2 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar2 + 0x1c0) != 0)) &&
                (uVar22 = 2, (*(byte *)(lVar2 + 0x1d0) & 8) == 0)))) {
              uVar22 = (uint)(*(char *)(lVar2 + 0x1e8) == '\0');
            }
            if ((int)uVar22 <= (int)uVar18) {
              plVar11[iVar10] = plVar11[iVar8];
              plVar11[iVar8] = lVar1;
              iVar10 = iVar8;
              goto joined_r0x0001471589d8;
            }
          }
          bVar24 = iVar17 != 0;
          iVar10 = iVar17 + -1;
          iVar17 = iVar10;
        } while (bVar24);
        if (1 < iVar15) {
          lVar1 = *plVar11;
          *plVar11 = plVar11[uVar19 - 1];
          plVar11[uVar19 - 1] = lVar1;
          if (iVar15 != 2) {
            do {
              uVar12 = uVar19 - 1;
              iVar15 = 0;
              iVar17 = 1;
              iVar10 = 0;
              do {
                iVar15 = iVar15 + 2;
                iVar7 = iVar17;
                if ((longlong)iVar15 < (longlong)uVar12) {
                  lVar1 = *(longlong *)(plVar11[iVar15] + 0x28);
                  uVar18 = 0xffffffff;
                  uVar22 = 0xffffffff;
                  if (((lVar1 != 0) &&
                      (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 ||
                       (*(longlong *)(lVar1 + 0x1c0) != 0)))) &&
                     (uVar22 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
                    uVar22 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
                  }
                  lVar1 = *(longlong *)(plVar11[iVar17] + 0x28);
                  if (((lVar1 != 0) &&
                      (((*(byte *)(lVar1 + 0x1d0) & 0x10) != 0 ||
                       (*(longlong *)(lVar1 + 0x1c0) != 0)))) &&
                     (uVar18 = 2, (*(byte *)(lVar1 + 0x1d0) & 8) == 0)) {
                    uVar18 = (uint)(*(char *)(lVar1 + 0x1e8) == '\0');
                  }
                  iVar7 = iVar15;
                  if ((int)uVar18 <= (int)uVar22) {
                    iVar7 = iVar17;
                  }
                }
                lVar1 = plVar11[iVar10];
                lVar2 = *(longlong *)(lVar1 + 0x28);
                uVar22 = 0xffffffff;
                uVar18 = 0xffffffff;
                if ((lVar2 != 0) &&
                   ((((*(byte *)(lVar2 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar2 + 0x1c0) != 0))
                    && (uVar18 = 2, (*(byte *)(lVar2 + 0x1d0) & 8) == 0)))) {
                  uVar18 = (uint)(*(char *)(lVar2 + 0x1e8) == '\0');
                }
                lVar2 = *(longlong *)(plVar11[iVar7] + 0x28);
                if (((lVar2 != 0) &&
                    (((*(byte *)(lVar2 + 0x1d0) & 0x10) != 0 || (*(longlong *)(lVar2 + 0x1c0) != 0))
                    )) && (uVar22 = 2, (*(byte *)(lVar2 + 0x1d0) & 8) == 0)) {
                  uVar22 = (uint)(*(char *)(lVar2 + 0x1e8) == '\0');
                }
                if ((int)uVar18 < (int)uVar22) break;
                plVar11[iVar10] = plVar11[iVar7];
                plVar11[iVar7] = lVar1;
                iVar15 = iVar7 * 2;
                iVar17 = iVar7 * 2 + 1;
                iVar10 = iVar7;
              } while ((longlong)iVar17 < (longlong)uVar12);
              lVar1 = *plVar11;
              *plVar11 = plVar11[uVar19 - 2];
              plVar11[uVar19 - 2] = lVar1;
              uVar19 = uVar12;
            } while (2 < uVar12);
          }
        }
      }
LAB_147158dc6:
      plVar4 = plVar4 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14715891e:
  lVar1 = *plVar11;
  *plVar11 = *plVar20;
  *plVar20 = lVar1;
  iVar15 = iVar15 + -1;
  plVar14 = plVar14 + -2;
  if ((longlong)plVar21 - (longlong)plVar6 < (longlong)plVar9 - (longlong)plVar23) {
    if (plVar5 < plVar13) {
      *plVar4 = (longlong)plVar5;
      plVar4[1] = (longlong)plVar13;
      *(int *)(plVar4 + 2) = iVar15;
      plVar4 = plVar4 + 3;
    }
    plVar6 = plVar11;
    plVar9 = plVar21;
    if (plVar20 <= plVar11 + 1) goto LAB_147158dc6;
  }
  else {
    if (plVar11 + 1 < plVar20) {
      *plVar4 = (longlong)plVar11;
      plVar4[1] = (longlong)plVar14;
      *(int *)(plVar4 + 2) = iVar15;
      plVar4 = plVar4 + 3;
    }
    plVar6 = plVar23;
    plVar11 = plVar5;
    plVar14 = plVar13;
    plVar9 = plVar13;
    if (plVar13 <= plVar5) goto LAB_147158dc6;
  }
  iVar10 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar6) >> 3);
  uVar19 = (ulonglong)(iVar10 + 1);
  plVar13 = plVar14;
  if (iVar15 == 0) goto LAB_1471589b1;
  goto LAB_147158780;
}



// FUNCTION 147158e02 FUN_147158e02 body=153 status=ok
// SIG undefined FUN_147158e02(void)

void FUN_147158e02(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 0xe5) & 2) != 0) {
    plVar3 = *(longlong **)(param_2 + 0xc0);
    while ((plVar3 != (longlong *)0x0 &&
           (((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)),
             lVar2 == 0 || (*(longlong *)(lVar2 + 0x18) == 0)) ||
            (cVar1 = FUN_147158e9c(param_1,param_2,param_3,param_4,param_5,plVar3,lVar2),
            cVar1 == '\0'))))) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 147158e9c FUN_147158e9c body=176 status=ok
// SIG undefined FUN_147158e9c(void)

undefined8
FUN_147158e9c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,undefined8 param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144b25ad0(param_7);
  if ((*(char *)(param_1 + 0x80) == cVar1) &&
     (((param_4 == 0 || ((*(byte *)(param_4 + 0x6e) & 8) != 0)) &&
      (iVar2 = (**(code **)(*param_7 + 0x30))(param_7), iVar2 != 3)))) {
    if (*(int *)(param_1 + 0x20) < 3) {
      uVar3 = FUN_147158f4c(param_1,param_2,param_3,param_7,param_6,param_4,param_5);
      return uVar3;
    }
    uVar3 = FUN_14715916e(param_1,param_2,param_3,param_7,param_6,param_4,param_5);
    return uVar3;
  }
  return 1;
}



// FUNCTION 147158f4c FUN_147158f4c body=545 status=ok
// SIG undefined FUN_147158f4c(void)

undefined4
FUN_147158f4c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  undefined4 *local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 local_130;
  ulonglong local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined8 local_e8;
  undefined2 local_da;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  longlong local_98 [11];
  
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
  local_158 = local_98;
  local_150 = local_98 + 2;
  uVar1 = FUN_14723c8e2(0,0,param_4,uVar4);
  if ((char)uVar1 != '\0') {
    local_d8 = *(undefined4 *)(param_1 + 0x40);
    uStack_d4 = *(undefined4 *)(param_1 + 0x44);
    uStack_d0 = *(undefined4 *)(param_1 + 0x48);
    uStack_cc = *(undefined4 *)(param_1 + 0x4c);
    local_c8 = *(undefined4 *)(param_1 + 0x50);
    uStack_c4 = *(undefined4 *)(param_1 + 0x54);
    uStack_c0 = *(undefined4 *)(param_1 + 0x58);
    uStack_bc = *(undefined4 *)(param_1 + 0x5c);
    local_b8 = *(undefined4 *)(param_1 + 0x60);
    uStack_b4 = *(undefined4 *)(param_1 + 100);
    uStack_b0 = *(undefined4 *)(param_1 + 0x68);
    uStack_ac = *(undefined4 *)(param_1 + 0x6c);
    local_a8 = *(undefined4 *)(param_1 + 0x70);
    uStack_a4 = *(undefined4 *)(param_1 + 0x74);
    uStack_a0 = *(undefined4 *)(param_1 + 0x78);
    uStack_9c = *(undefined4 *)(param_1 + 0x7c);
    local_110 = param_3;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      (**(code **)(*param_4 + 0x288))(param_4,&local_da);
      FUN_14723cfad(&local_d8,param_4,local_da);
    }
    local_e8 = FUN_144b13a0e(param_2);
    uVar2 = FUN_144a875de(param_4,&local_e8);
    uVar3 = FUN_144a53bf0(param_4,&local_e8);
    uStack_f8 = 0;
    uStack_f7 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_7);
    local_150 = (longlong *)((ulonglong)local_150 & 0xffffffffffffff00);
    FUN_144b17a9a(&local_108,*(undefined8 *)(param_1 + 0x28),param_6,param_2);
    if (local_98[0] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)*(uint *)(local_98[0] + 0xdc);
    }
    if (local_98[2] == 0) {
      local_128 = 0;
    }
    else {
      local_128 = (ulonglong)*(uint *)(local_98[2] + 0xdc) << 0x20;
    }
    local_128 = local_128 | uVar5;
    local_148 = &local_d8;
    local_158 = param_5;
    local_120 = 0;
    local_150 = param_4;
    local_140 = local_98;
    local_138 = uVar2;
    local_130 = uVar3;
    local_118 = &local_108;
    FUN_142bfc9e0(param_1,param_2,local_110,param_6);
  }
  if ((local_98[10] ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14715916e FUN_14715916e body=579 status=ok
// SIG undefined FUN_14715916e(void)

undefined4
FUN_14715916e(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  undefined4 *local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  ulonglong local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  longlong local_98 [11];
  
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
  local_118 = local_118 & 0xffffffffffffff00;
  local_138 = (undefined4 *)((ulonglong)local_138 & 0xffffffffffffff00);
  local_140 = local_140 & 0xffffffffffffff00;
  local_148 = local_148 & 0xffffffffffffff00;
  local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
  local_128 = local_98;
  local_120 = local_98 + 2;
  uVar1 = FUN_1403113c0(param_4,uVar4,0,uVar1);
  if ((char)uVar1 != '\0') {
    local_d8 = *(undefined4 *)(param_1 + 0x40);
    uStack_d4 = *(undefined4 *)(param_1 + 0x44);
    uStack_d0 = *(undefined4 *)(param_1 + 0x48);
    uStack_cc = *(undefined4 *)(param_1 + 0x4c);
    local_c8 = *(undefined4 *)(param_1 + 0x50);
    uStack_c4 = *(undefined4 *)(param_1 + 0x54);
    uStack_c0 = *(undefined4 *)(param_1 + 0x58);
    uStack_bc = *(undefined4 *)(param_1 + 0x5c);
    local_b8 = *(undefined4 *)(param_1 + 0x60);
    uStack_b4 = *(undefined4 *)(param_1 + 100);
    uStack_b0 = *(undefined4 *)(param_1 + 0x68);
    uStack_ac = *(undefined4 *)(param_1 + 0x6c);
    local_a8 = *(undefined4 *)(param_1 + 0x70);
    uStack_a4 = *(undefined4 *)(param_1 + 0x74);
    uStack_a0 = *(undefined4 *)(param_1 + 0x78);
    uStack_9c = *(undefined4 *)(param_1 + 0x7c);
    local_100 = param_3;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      FUN_140286f51(&local_d8,param_4,
                    *(undefined2 *)
                     (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8) * 2),0)
      ;
    }
    local_e0 = FUN_144b13a0e(param_2);
    uVar2 = FUN_144a875de(param_4,&local_e0);
    uVar3 = FUN_144a53bf0(param_4,&local_e0);
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_148 = CONCAT44(local_148._4_4_,param_7);
    local_140 = local_140 & 0xffffffffffffff00;
    FUN_144b17a9a(&local_f8,*(undefined8 *)(param_1 + 0x28),param_6,param_2);
    if (local_98[0] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)*(uint *)(local_98[0] + 0xdc);
    }
    if (local_98[2] == 0) {
      local_118 = 0;
    }
    else {
      local_118 = (ulonglong)*(uint *)(local_98[2] + 0xdc) << 0x20;
    }
    local_118 = local_118 | uVar5;
    local_120 = (longlong *)CONCAT44(local_120._4_4_,uVar3);
    local_128 = (longlong *)CONCAT44(local_128._4_4_,uVar2);
    local_138 = &local_d8;
    local_148 = param_5;
    local_110 = 0;
    local_140 = param_4;
    local_130 = local_98;
    local_108 = &local_f8;
    FUN_140077a6a(param_1,param_2,local_100,param_6);
  }
  if ((local_98[10] ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471593b2 FUN_1471593b2 body=42 status=ok
// SIG undefined FUN_1471593b2(void)

void FUN_1471593b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471593fc FUN_1471593fc body=96 status=ok
// SIG undefined FUN_1471593fc(void)

undefined8 FUN_1471593fc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141568818();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdeb8,1);
  return uVar3;
}



// FUNCTION 14715945c FUN_14715945c body=52 status=ok
// SIG undefined FUN_14715945c(void)

void FUN_14715945c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147159490 FUN_147159490 body=42 status=ok
// SIG undefined FUN_147159490(void)

void FUN_147159490(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471594c2 FUN_1471594c2 body=96 status=ok
// SIG undefined FUN_1471594c2(void)

undefined8 FUN_1471594c2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141569a2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdf40,1);
  return uVar3;
}



// FUNCTION 147159522 FUN_147159522 body=52 status=ok
// SIG undefined FUN_147159522(void)

void FUN_147159522(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147159556 FUN_147159556 body=539 status=ok
// SIG undefined FUN_147159556(void)

float * FUN_147159556(float *param_1,longlong param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = 16.0 / (float)(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc));
  fVar6 = 16.0 / (float)(*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8));
  fVar2 = fVar7 / (float)*(double *)(param_2 + 0x858);
  fVar8 = fVar6 / (float)*(double *)(param_2 + 0x830);
  dVar1 = *(double *)(param_2 + 0x8a8);
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  dVar5 = *(double *)(param_2 + 0x888);
  fVar4 = (float)((double)(float)(dVar1 - *(double *)(param_2 + 0x8a0)) /
                 (*(double *)(param_2 + 0x880) - dVar5));
  param_1[0xd] = fVar4;
  fVar2 = (float)((double)fVar8 * dVar5) + 1.0;
  param_1[0xc] = fVar2;
  param_1[0xb] = 1.0 / fVar4;
  fVar2 = logf(fVar2);
  param_1[10] = 1.0 / (fVar2 * 1.442695);
  param_1[0x11] = fVar8;
  param_1[0x12] = 1.0 / fVar8;
  param_1[0x13] = (float)(uint)(1.0 <= dVar1);
  param_1[0x14] = 0.0;
  param_1[0x15] = 5.60519e-45;
  dVar5 = *(double *)(param_2 + 0x880);
  dVar3 = *(double *)(param_2 + 0x8a0);
  if (dVar1 < 1.0) {
    dVar3 = dVar5;
    dVar5 = *(double *)(param_2 + 0x8a0);
  }
  param_1[0xe] = (float)dVar5;
  param_1[0xf] = (float)(1.0 / dVar5);
  param_1[0x10] = (float)(-dVar3 / dVar5);
  fVar8 = (float)*(double *)(param_2 + 0x958);
  fVar7 = -fVar7;
  fVar2 = (float)*(double *)(param_2 + 0x930);
  *param_1 = fVar6 * fVar2;
  param_1[1] = fVar7 * fVar8;
  param_1[2] = -fVar2;
  param_1[3] = fVar8;
  param_1[4] = fVar6;
  param_1[5] = fVar7;
  param_1[6] = -1.0;
  param_1[7] = 1.0;
  param_1[8] = fVar2;
  param_1[9] = fVar8;
  return param_1;
}



// FUNCTION 147159772 FUN_147159772 body=258 status=ok
// SIG undefined FUN_147159772(void)

undefined8 * FUN_147159772(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = param_2;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_58 = *(longlong *)(param_1 + 8);
  local_60 = 0;
  local_5e = 0;
  if ((*(byte *)(local_58 + 0x68) & 0x80) != 0) {
    local_60 = 0x1c;
  }
  local_49 = 0;
  local_68 = &local_49;
  uVar1 = FUN_144a23c98(param_3 + 0x198,param_3 + 0x70,local_58 + 8,&local_60);
  param_2[0xc] = uVar1;
  local_58 = *(longlong *)(param_1 + 0x10);
  local_60 = 0;
  local_5e = 0;
  if ((*(byte *)(local_58 + 0x68) & 0x80) != 0) {
    local_60 = 0x1c;
  }
  local_49 = 0;
  local_68 = &local_49;
  uVar1 = FUN_144a23c98(param_3 + 0x198,param_3 + 0x70,local_58 + 8,&local_60);
  param_2[0xd] = uVar1;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147159876 FUN_147159876 body=253 status=ok
// SIG undefined FUN_147159876(void)

undefined8 * FUN_147159876(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = param_2;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_48 = *(longlong *)(param_1 + 8);
  local_60[0] = 0;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  if ((*(byte *)(local_48 + 0x68) & 0x80) != 0) {
    local_60[0] = 0x1c;
  }
  uVar1 = FUN_14475683e(param_3 + 0x198,param_3 + 0x70,local_48 + 8,local_60);
  param_2[0xc] = uVar1;
  local_48 = *(longlong *)(param_1 + 0x10);
  local_60[0] = 0;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  if ((*(byte *)(local_48 + 0x68) & 0x80) != 0) {
    local_60[0] = 0x1c;
  }
  uVar1 = FUN_14475683e(param_3 + 0x198,param_3 + 0x70,local_48 + 8,local_60);
  param_2[0xd] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147159974 FUN_147159974 body=65 status=ok
// SIG undefined FUN_147159974(void)

void FUN_147159974(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((((0 < *(int *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) &&
      (lVar1 = *(longlong *)(*param_2 + 8), *(char *)(lVar1 + 0xd0) == '\x01')) &&
     (((lVar1 = *(longlong *)(lVar1 + 0x348), lVar1 != 0 && (*(char *)(lVar1 + 8) != '\0')) &&
      (*(longlong *)(lVar1 + 0x1a0) != 0)))) {
    return;
  }
  FUN_1472e1757(param_1,0);
  return;
}



// FUNCTION 1471599b5 FUN_1471599b5 body=46 status=ok
// SIG undefined FUN_1471599b5(void)

bool FUN_1471599b5(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40), plVar1 == (longlong *)0x0)) {
    bVar3 = false;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x3e0))();
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}



// FUNCTION 1471599e3 FUN_1471599e3 body=278 status=ok
// SIG undefined FUN_1471599e3(void)

void FUN_1471599e3(longlong param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 uStack_54;
  uint uStack_4c;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (uint *)0x0) {
    if (((param_3 != 0) && (*(longlong *)(param_3 + 8) != 0)) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x40), plVar1 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*plVar1 + 0x3e0))();
      if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x4588))) {
        FUN_141760f26(&local_58,param_1,(int *)(lVar3 + 0x4588));
        *(undefined8 *)(param_2 + 8) = local_38;
        *(undefined8 *)(param_2 + 10) = uStack_30;
        *(undefined8 *)(param_2 + 4) = local_48;
        *(longlong *)(param_2 + 6) = lStack_40;
        *param_2 = local_58;
        param_2[1] = (uint)uStack_54;
        param_2[2] = uStack_54._4_4_;
        param_2[3] = uStack_4c;
        goto LAB_147159adb;
      }
    }
    lStack_40 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
    uVar2 = local_58 >> 8;
    local_58 = local_58 & 0xffffff00;
    uStack_54 = 0xffffffff00000000;
    local_48 = 0;
    if ((*(byte *)(lStack_40 + 0x68) & 0x80) != 0) {
      local_58 = CONCAT31((int3)uVar2,0x1c);
    }
    uVar4 = FUN_14475683e(param_1 + 0x198,param_1 + 0x70,lStack_40 + 8,&local_58);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 2) = uVar4;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = uVar4;
    *(undefined8 *)(param_2 + 8) = uVar4;
    param_2[10] = 0;
  }
LAB_147159adb:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147159afa FUN_147159afa body=615 status=ok
// SIG undefined FUN_147159afa(void)

void FUN_147159afa(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined8 local_104;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != (undefined8 *)0x0) {
    if (((param_3 != 0) && (*(longlong *)(param_3 + 8) != 0)) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x40), plVar1 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*plVar1 + 0x3e0))();
      if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x4588))) {
        FUN_141761529(local_108,param_1,(int *)(lVar2 + 0x4588));
        memcpy(param_2,local_108,0xc0);
        goto LAB_147159d35;
      }
    }
    local_f0 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
    local_108[0] = 0;
    local_104 = 0xffffffff00000000;
    local_f8 = 0;
    if ((*(byte *)(local_f0 + 0x68) & 0x80) != 0) {
      local_108[0] = 0x1c;
    }
    uVar3 = FUN_14475683e(param_1 + 0x198,param_1 + 0x70,local_f0 + 8,local_108);
    local_f0 = FUN_144735dd8(param_1,&DAT_14c9cade8,2);
    local_108[0] = 0;
    local_104 = 0xffffffff00000000;
    local_f8 = 0;
    if ((*(byte *)(local_f0 + 0x68) & 0x80) != 0) {
      local_108[0] = 0x1c;
    }
    uVar4 = FUN_14475683e(param_1 + 0x198,param_1 + 0x70,local_f0 + 8,local_108);
    lVar2 = FUN_144a8d736(param_1);
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar3;
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    param_2[3] = uVar3;
    param_2[4] = uVar3;
    param_2[5] = DAT_14c9c9d38;
    *(undefined4 *)(param_2 + 7) = DAT_14c846338;
    param_2[6] = DAT_14c846330;
    *(undefined4 *)(param_2 + 9) = DAT_14c846338;
    param_2[8] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0xb) = DAT_14c9a52a0;
    param_2[10] = DAT_14c9a5298;
    *(undefined4 *)(param_2 + 0xd) = DAT_14c9a52a0;
    param_2[0xc] = DAT_14c9a5298;
    *(undefined4 *)(param_2 + 0xf) = DAT_14c9a52a0;
    param_2[0xe] = DAT_14c9a5298;
    param_2[0x10] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x11) = DAT_14c846338;
    param_2[0x12] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x13) = DAT_14c846338;
    param_2[0x14] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x15) = DAT_14c846338;
    param_2[0x16] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x17) = DAT_14c846338;
  }
LAB_147159d35:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147159d62 FUN_147159d62 body=52 status=ok
// SIG undefined FUN_147159d62(void)

ulonglong FUN_147159d62(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x3d8))();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = (longlong *)(lVar2 + 0x4298);
    bVar1 = FUN_1472bb4e8(param_1);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 147159d96 FUN_147159d96 body=141 status=ok
// SIG undefined FUN_147159d96(void)

longlong FUN_147159d96(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = (**(code **)(*param_2 + 0x3d8))(param_2);
  if (lVar3 == 0) {
    local_20 = 0;
  }
  else {
    FUN_142f6f294(lVar3 + 0x4298,&local_20,param_1,0);
    if (local_20 != 0) {
      LOCK();
      puVar1 = (uint *)(local_20 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147159e24 FUN_147159e24 body=112 status=ok
// SIG undefined FUN_147159e24(void)

undefined8 *
FUN_147159e24(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_3 + 0x3d8))(param_3);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1472c3ac0(lVar1 + 0x43f8,param_1,param_2,2,0,*(undefined4 *)(lVar1 + 0x429c),
                  *(undefined4 *)(lVar1 + 0x42a0),param_4);
  }
  return param_1;
}



// FUNCTION 147159e94 FUN_147159e94 body=23 status=ok
// SIG undefined FUN_147159e94(void)

void FUN_147159e94(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x11700);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x11708);
  return;
}



// FUNCTION 147159eac FUN_147159eac body=42 status=ok
// SIG undefined FUN_147159eac(void)

void FUN_147159eac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147159ede FUN_147159ede body=96 status=ok
// SIG undefined FUN_147159ede(void)

undefined8 FUN_147159ede(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7ff64();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cdfc8,1);
  return uVar3;
}



// FUNCTION 147159f3e FUN_147159f3e body=52 status=ok
// SIG undefined FUN_147159f3e(void)

void FUN_147159f3e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147159f72 FUN_147159f72 body=42 status=ok
// SIG undefined FUN_147159f72(void)

void FUN_147159f72(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147159fa8 FUN_147159fa8 body=96 status=ok
// SIG undefined FUN_147159fa8(void)

undefined8 FUN_147159fa8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eaaf0c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce050,1);
  return uVar3;
}



// FUNCTION 14715a008 FUN_14715a008 body=52 status=ok
// SIG undefined FUN_14715a008(void)

void FUN_14715a008(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a03c FUN_14715a03c body=177 status=ok
// SIG undefined FUN_14715a03c(void)

void FUN_14715a03c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145eaaf0c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9ce050,param_4);
  local_78 = &DAT_14c9ce050;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147166bfc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14715a0ee FUN_14715a0ee body=42 status=ok
// SIG undefined FUN_14715a0ee(void)

void FUN_14715a0ee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a124 FUN_14715a124 body=96 status=ok
// SIG undefined FUN_14715a124(void)

undefined8 FUN_14715a124(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f667da();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce0d8,1);
  return uVar3;
}



// FUNCTION 14715a184 FUN_14715a184 body=52 status=ok
// SIG undefined FUN_14715a184(void)

void FUN_14715a184(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a1b8 FUN_14715a1b8 body=177 status=ok
// SIG undefined FUN_14715a1b8(void)

void FUN_14715a1b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f667da();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9ce0d8,param_4);
  local_78 = &DAT_14c9ce0d8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147166fdc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14715a26a FUN_14715a26a body=42 status=ok
// SIG undefined FUN_14715a26a(void)

void FUN_14715a26a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a2a4 FUN_14715a2a4 body=96 status=ok
// SIG undefined FUN_14715a2a4(void)

undefined8 FUN_14715a2a4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3fc92();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce160,1);
  return uVar3;
}



// FUNCTION 14715a304 FUN_14715a304 body=52 status=ok
// SIG undefined FUN_14715a304(void)

void FUN_14715a304(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a338 FUN_14715a338 body=42 status=ok
// SIG undefined FUN_14715a338(void)

void FUN_14715a338(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a372 FUN_14715a372 body=96 status=ok
// SIG undefined FUN_14715a372(void)

undefined8 FUN_14715a372(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e804d4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce1e8,1);
  return uVar3;
}



// FUNCTION 14715a3d2 FUN_14715a3d2 body=52 status=ok
// SIG undefined FUN_14715a3d2(void)

void FUN_14715a3d2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a406 FUN_14715a406 body=42 status=ok
// SIG undefined FUN_14715a406(void)

void FUN_14715a406(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a440 FUN_14715a440 body=96 status=ok
// SIG undefined FUN_14715a440(void)

undefined8 FUN_14715a440(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e80a44();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce270,1);
  return uVar3;
}



// FUNCTION 14715a4a0 FUN_14715a4a0 body=52 status=ok
// SIG undefined FUN_14715a4a0(void)

void FUN_14715a4a0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a4d4 FUN_14715a4d4 body=42 status=ok
// SIG undefined FUN_14715a4d4(void)

void FUN_14715a4d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a50e FUN_14715a50e body=96 status=ok
// SIG undefined FUN_14715a50e(void)

undefined8 FUN_14715a50e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6e41a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce2f8,1);
  return uVar3;
}



// FUNCTION 14715a56e FUN_14715a56e body=52 status=ok
// SIG undefined FUN_14715a56e(void)

void FUN_14715a56e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a5a2 FUN_14715a5a2 body=42 status=ok
// SIG undefined FUN_14715a5a2(void)

void FUN_14715a5a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a5ec FUN_14715a5ec body=96 status=ok
// SIG undefined FUN_14715a5ec(void)

undefined8 FUN_14715a5ec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141576424();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce380,1);
  return uVar3;
}



// FUNCTION 14715a64c FUN_14715a64c body=52 status=ok
// SIG undefined FUN_14715a64c(void)

void FUN_14715a64c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a680 FUN_14715a680 body=42 status=ok
// SIG undefined FUN_14715a680(void)

void FUN_14715a680(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a6b2 FUN_14715a6b2 body=96 status=ok
// SIG undefined FUN_14715a6b2(void)

undefined8 FUN_14715a6b2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141590dd8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce408,1);
  return uVar3;
}



// FUNCTION 14715a712 FUN_14715a712 body=52 status=ok
// SIG undefined FUN_14715a712(void)

void FUN_14715a712(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a746 FUN_14715a746 body=42 status=ok
// SIG undefined FUN_14715a746(void)

void FUN_14715a746(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a778 FUN_14715a778 body=96 status=ok
// SIG undefined FUN_14715a778(void)

undefined8 FUN_14715a778(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141571e2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce490,1);
  return uVar3;
}



// FUNCTION 14715a7d8 FUN_14715a7d8 body=52 status=ok
// SIG undefined FUN_14715a7d8(void)

void FUN_14715a7d8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a80c FUN_14715a80c body=42 status=ok
// SIG undefined FUN_14715a80c(void)

void FUN_14715a80c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a83e FUN_14715a83e body=96 status=ok
// SIG undefined FUN_14715a83e(void)

undefined8 FUN_14715a83e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157664a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce518,1);
  return uVar3;
}



// FUNCTION 14715a89e FUN_14715a89e body=52 status=ok
// SIG undefined FUN_14715a89e(void)

void FUN_14715a89e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a8d2 FUN_14715a8d2 body=42 status=ok
// SIG undefined FUN_14715a8d2(void)

void FUN_14715a8d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a904 FUN_14715a904 body=96 status=ok
// SIG undefined FUN_14715a904(void)

undefined8 FUN_14715a904(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141594278();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce5a0,1);
  return uVar3;
}



// FUNCTION 14715a964 FUN_14715a964 body=52 status=ok
// SIG undefined FUN_14715a964(void)

void FUN_14715a964(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715a998 FUN_14715a998 body=42 status=ok
// SIG undefined FUN_14715a998(void)

void FUN_14715a998(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715a9ca FUN_14715a9ca body=96 status=ok
// SIG undefined FUN_14715a9ca(void)

undefined8 FUN_14715a9ca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141594582();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce628,1);
  return uVar3;
}



// FUNCTION 14715aa2a FUN_14715aa2a body=52 status=ok
// SIG undefined FUN_14715aa2a(void)

void FUN_14715aa2a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715aa5e FUN_14715aa5e body=42 status=ok
// SIG undefined FUN_14715aa5e(void)

void FUN_14715aa5e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715aa90 FUN_14715aa90 body=96 status=ok
// SIG undefined FUN_14715aa90(void)

undefined8 FUN_14715aa90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159bc18();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce6b0,1);
  return uVar3;
}



// FUNCTION 14715aaf0 FUN_14715aaf0 body=52 status=ok
// SIG undefined FUN_14715aaf0(void)

void FUN_14715aaf0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715ab24 FUN_14715ab24 body=42 status=ok
// SIG undefined FUN_14715ab24(void)

void FUN_14715ab24(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715ab56 FUN_14715ab56 body=96 status=ok
// SIG undefined FUN_14715ab56(void)

undefined8 FUN_14715ab56(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158f102();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce738,1);
  return uVar3;
}



// FUNCTION 14715abb6 FUN_14715abb6 body=52 status=ok
// SIG undefined FUN_14715abb6(void)

void FUN_14715abb6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715abea FUN_14715abea body=42 status=ok
// SIG undefined FUN_14715abea(void)

void FUN_14715abea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715ac1c FUN_14715ac1c body=96 status=ok
// SIG undefined FUN_14715ac1c(void)

undefined8 FUN_14715ac1c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159488c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce7c0,1);
  return uVar3;
}



// FUNCTION 14715ac7c FUN_14715ac7c body=52 status=ok
// SIG undefined FUN_14715ac7c(void)

void FUN_14715ac7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715acb0 FUN_14715acb0 body=42 status=ok
// SIG undefined FUN_14715acb0(void)

void FUN_14715acb0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715ace2 FUN_14715ace2 body=96 status=ok
// SIG undefined FUN_14715ace2(void)

undefined8 FUN_14715ace2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141576870();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce848,1);
  return uVar3;
}



// FUNCTION 14715ad42 FUN_14715ad42 body=52 status=ok
// SIG undefined FUN_14715ad42(void)

void FUN_14715ad42(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715ad76 FUN_14715ad76 body=42 status=ok
// SIG undefined FUN_14715ad76(void)

void FUN_14715ad76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715ada4 FUN_14715ada4 body=96 status=ok
// SIG undefined FUN_14715ada4(void)

undefined8 FUN_14715ada4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159be3e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce8d0,1);
  return uVar3;
}



// FUNCTION 14715ae04 FUN_14715ae04 body=52 status=ok
// SIG undefined FUN_14715ae04(void)

void FUN_14715ae04(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715ae38 FUN_14715ae38 body=42 status=ok
// SIG undefined FUN_14715ae38(void)

void FUN_14715ae38(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715ae66 FUN_14715ae66 body=96 status=ok
// SIG undefined FUN_14715ae66(void)

undefined8 FUN_14715ae66(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141576b7a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ce9e0,1);
  return uVar3;
}



// FUNCTION 14715aec6 FUN_14715aec6 body=52 status=ok
// SIG undefined FUN_14715aec6(void)

void FUN_14715aec6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715aefa FUN_14715aefa body=42 status=ok
// SIG undefined FUN_14715aefa(void)

void FUN_14715aefa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715af2c FUN_14715af2c body=96 status=ok
// SIG undefined FUN_14715af2c(void)

undefined8 FUN_14715af2c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145cc5ac8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cea68,1);
  return uVar3;
}



// FUNCTION 14715af8c FUN_14715af8c body=52 status=ok
// SIG undefined FUN_14715af8c(void)

void FUN_14715af8c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715afc0 FUN_14715afc0 body=42 status=ok
// SIG undefined FUN_14715afc0(void)

void FUN_14715afc0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715afee FUN_14715afee body=96 status=ok
// SIG undefined FUN_14715afee(void)

undefined8 FUN_14715afee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415736f0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ceaf0,1);
  return uVar3;
}



// FUNCTION 14715b04e FUN_14715b04e body=52 status=ok
// SIG undefined FUN_14715b04e(void)

void FUN_14715b04e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715b082 FUN_14715b082 body=42 status=ok
// SIG undefined FUN_14715b082(void)

void FUN_14715b082(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715b0b4 FUN_14715b0b4 body=96 status=ok
// SIG undefined FUN_14715b0b4(void)

undefined8 FUN_14715b0b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141572050();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ceb78,1);
  return uVar3;
}



// FUNCTION 14715b114 FUN_14715b114 body=52 status=ok
// SIG undefined FUN_14715b114(void)

void FUN_14715b114(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14715b148 FUN_14715b148 body=42 status=ok
// SIG undefined FUN_14715b148(void)

void FUN_14715b148(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14715b17a FUN_14715b17a body=96 status=ok
// SIG undefined FUN_14715b17a(void)

undefined8 FUN_14715b17a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141576da0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9cec00,1);
  return uVar3;
}


