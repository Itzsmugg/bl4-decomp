// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484003d8 FUN_1484003d8 body=138 status=ok
// SIG undefined FUN_1484003d8(void)

code * FUN_1484003d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400462;
}



// FUNCTION 148400462 FUN_148400462 body=138 status=ok
// SIG undefined FUN_148400462(void)

code * FUN_148400462(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484004ec;
}



// FUNCTION 1484004ec FUN_1484004ec body=138 status=ok
// SIG undefined FUN_1484004ec(void)

code * FUN_1484004ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRenderData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400576;
}



// FUNCTION 148400576 FUN_148400576 body=138 status=ok
// SIG undefined FUN_148400576(void)

code * FUN_148400576(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZBoundsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400600;
}



// FUNCTION 148400600 FUN_148400600 body=138 status=ok
// SIG undefined FUN_148400600(void)

code * FUN_148400600(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5d600;
}



// FUNCTION 14840068a FUN_14840068a body=138 status=ok
// SIG undefined FUN_14840068a(void)

code * FUN_14840068a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionVisibility";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5d714;
}



// FUNCTION 148400714 FUN_148400714 body=138 status=ok
// SIG undefined FUN_148400714(void)

code * FUN_148400714(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNodes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488b30;
}



// FUNCTION 1484007a2 FUN_1484007a2 body=138 status=ok
// SIG undefined FUN_1484007a2(void)

code * FUN_1484007a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumQuadsLOD0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000012c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840082c;
}



// FUNCTION 14840082c FUN_14840082c body=138 status=ok
// SIG undefined FUN_14840082c(void)

code * FUN_14840082c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDensities";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000012b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9c692;
}



// FUNCTION 1484008b6 FUN_1484008b6 body=138 status=ok
// SIG undefined FUN_1484008b6(void)

code * FUN_1484008b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNodes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000128;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400940;
}



// FUNCTION 148400940 FUN_148400940 body=138 status=ok
// SIG undefined FUN_148400940(void)

code * FUN_148400940(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRenderData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000127;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9c608;
}



// FUNCTION 1484009ca FUN_1484009ca body=132 status=ok
// SIG undefined FUN_1484009ca(void)

undefined1 * FUN_1484009ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9c604;
}



// FUNCTION 148400a4e FUN_148400a4e body=138 status=ok
// SIG undefined FUN_148400a4e(void)

code * FUN_148400a4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBuckets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000144;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0edda;
}



// FUNCTION 148400adc FUN_148400adc body=138 status=ok
// SIG undefined FUN_148400adc(void)

code * FUN_148400adc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bLODMorphingEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb400000176;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400b66;
}



// FUNCTION 148400b66 FUN_148400b66 body=138 status=ok
// SIG undefined FUN_148400b66(void)

code * FUN_148400b66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bWithWaterSelectionSupport";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000175;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400bf0;
}



// FUNCTION 148400bf0 FUN_148400bf0 body=138 status=ok
// SIG undefined FUN_148400bf0(void)

code * FUN_148400bf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StereoPassInstanceFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac00000174;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488ee8;
}



// FUNCTION 148400c7a FUN_148400c7a body=138 status=ok
// SIG undefined FUN_148400c7a(void)

code * FUN_148400c7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LODScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa400000172;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400d04;
}



// FUNCTION 148400d04 FUN_148400d04 body=138 status=ok
// SIG undefined FUN_148400d04(void)

code * FUN_148400d04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LeafSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400d8e;
}



// FUNCTION 148400d8e FUN_148400d8e body=138 status=ok
// SIG undefined FUN_148400d8e(void)

code * FUN_148400d8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumQuadsPerDraw";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c00000170;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400e18;
}



// FUNCTION 148400e18 FUN_148400e18 body=138 status=ok
// SIG undefined FUN_148400e18(void)

code * FUN_148400e18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumQuadsLOD0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400ea2;
}



// FUNCTION 148400ea2 FUN_148400ea2 body=138 status=ok
// SIG undefined FUN_148400ea2(void)

code * FUN_148400ea2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumLODs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x940000016e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400f2c;
}



// FUNCTION 148400f2c FUN_148400f2c body=138 status=ok
// SIG undefined FUN_148400f2c(void)

code * FUN_148400f2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400fb6;
}



// FUNCTION 148400fb6 FUN_148400fb6 body=138 status=ok
// SIG undefined FUN_148400fb6(void)

code * FUN_148400fb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchedThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c0000016c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401040;
}



// FUNCTION 148401040 FUN_148401040 body=138 status=ok
// SIG undefined FUN_148401040(void)

code * FUN_148401040(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumMaterials";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000016b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484010ca;
}



// FUNCTION 1484010ca FUN_1484010ca body=138 status=ok
// SIG undefined FUN_1484010ca(void)

code * FUN_1484010ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDensities";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x840000016a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401154;
}



// FUNCTION 148401154 FUN_148401154 body=138 status=ok
// SIG undefined FUN_148401154(void)

code * FUN_148401154(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeResolutionY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484011de;
}



// FUNCTION 1484011de FUN_1484011de body=138 status=ok
// SIG undefined FUN_1484011de(void)

code * FUN_1484011de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeResolutionX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c00000168;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401268;
}



// FUNCTION 148401268 FUN_148401268 body=138 status=ok
// SIG undefined FUN_148401268(void)

code * FUN_148401268(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObserverPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000167;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e79758;
}



// FUNCTION 1484012f2 FUN_1484012f2 body=138 status=ok
// SIG undefined FUN_1484012f2(void)

code * FUN_1484012f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionResults";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840137c;
}



// FUNCTION 14840137c FUN_14840137c body=138 status=ok
// SIG undefined FUN_14840137c(void)

code * FUN_14840137c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceDataOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401406;
}



// FUNCTION 148401406 FUN_148401406 body=138 status=ok
// SIG undefined FUN_148401406(void)

code * FUN_148401406(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNodes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000163;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401490;
}



// FUNCTION 148401490 FUN_148401490 body=138 status=ok
// SIG undefined FUN_148401490(void)

code * FUN_148401490(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRenderData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000162;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840151a;
}



// FUNCTION 14840151a FUN_14840151a body=138 status=ok
// SIG undefined FUN_14840151a(void)

code * FUN_14840151a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZBoundsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000161;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484015a4;
}



// FUNCTION 1484015a4 FUN_1484015a4 body=138 status=ok
// SIG undefined FUN_1484015a4(void)

code * FUN_1484015a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000160;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e796d0;
}



// FUNCTION 14840162e FUN_14840162e body=138 status=ok
// SIG undefined FUN_14840162e(void)

code * FUN_14840162e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceData2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000015e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484016b8;
}



// FUNCTION 1484016b8 FUN_1484016b8 body=138 status=ok
// SIG undefined FUN_1484016b8(void)

code * FUN_1484016b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceData1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000015d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401742;
}



// FUNCTION 148401742 FUN_148401742 body=138 status=ok
// SIG undefined FUN_148401742(void)

code * FUN_148401742(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceData0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000015c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484017cc;
}



// FUNCTION 1484017cc FUN_1484017cc body=132 status=ok
// SIG undefined FUN_1484017cc(void)

undefined1 * FUN_1484017cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e796cc;
}



// FUNCTION 148401850 FUN_148401850 body=138 status=ok
// SIG undefined FUN_148401850(void)

code * FUN_148401850(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LeafSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000194;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484018da;
}



// FUNCTION 1484018da FUN_1484018da body=138 status=ok
// SIG undefined FUN_1484018da(void)

code * FUN_1484018da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchedThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000193;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401964;
}



// FUNCTION 148401964 FUN_148401964 body=138 status=ok
// SIG undefined FUN_148401964(void)

code * FUN_148401964(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreePosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000192;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3a75a;
}



// FUNCTION 1484019ee FUN_1484019ee body=138 status=ok
// SIG undefined FUN_1484019ee(void)

code * FUN_1484019ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNodes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000190;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401a78;
}



// FUNCTION 148401a78 FUN_148401a78 body=138 status=ok
// SIG undefined FUN_148401a78(void)

code * FUN_148401a78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyRenderData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000018f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3a7e2;
}



// FUNCTION 148401b02 FUN_148401b02 body=138 status=ok
// SIG undefined FUN_148401b02(void)

code * FUN_148401b02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000018d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3a86c;
}



// FUNCTION 148401b90 FUN_148401b90 body=48 status=ok
// SIG undefined FUN_148401b90(void)

void FUN_148401b90(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148401bc0 FUN_148401bc0 body=48 status=ok
// SIG undefined FUN_148401bc0(void)

void FUN_148401bc0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148401bf0 FUN_148401bf0 body=54 status=ok
// SIG undefined FUN_148401bf0(void)

void FUN_148401bf0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400d7e1b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148401c26 FUN_148401c26 body=132 status=ok
// SIG undefined FUN_148401c26(void)

void FUN_148401c26(longlong param_1,int param_2)

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



// FUNCTION 148401cac FUN_148401cac body=132 status=ok
// SIG undefined FUN_148401cac(void)

void FUN_148401cac(longlong param_1,int param_2)

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



// FUNCTION 148401d32 FUN_148401d32 body=96 status=ok
// SIG undefined FUN_148401d32(void)

void FUN_148401d32(longlong param_1,int param_2)

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



// FUNCTION 148401d92 FUN_148401d92 body=132 status=ok
// SIG undefined FUN_148401d92(void)

void FUN_148401d92(longlong param_1,int param_2)

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



// FUNCTION 148401e1c FUN_148401e1c body=132 status=ok
// SIG undefined FUN_148401e1c(void)

void FUN_148401e1c(longlong param_1,int param_2)

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



// FUNCTION 148401ea2 FUN_148401ea2 body=89 status=ok
// SIG undefined FUN_148401ea2(void)

void FUN_148401ea2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148401efc FUN_148401efc body=110 status=ok
// SIG undefined FUN_148401efc(void)

void FUN_148401efc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar1);
  FUN_148401f6a(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148401f6a FUN_148401f6a body=43 status=ok
// SIG undefined FUN_148401f6a(void)

void FUN_148401f6a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148401f96 FUN_148401f96 body=115 status=ok
// SIG undefined FUN_148401f96(void)

void FUN_148401f96(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14840200a FUN_14840200a body=113 status=ok
// SIG undefined FUN_14840200a(void)

void FUN_14840200a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 14840207c FUN_14840207c body=145 status=ok
// SIG undefined FUN_14840207c(void)

void FUN_14840207c(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x400;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e40];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x400,8);
  }
  uVar2 = 0x7fffffff;
  if (0x3f < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14840210e FUN_14840210e body=132 status=ok
// SIG undefined FUN_14840210e(void)

void FUN_14840210e(longlong param_1,int param_2)

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



// FUNCTION 148402194 FUN_148402194 body=132 status=ok
// SIG undefined FUN_148402194(void)

void FUN_148402194(longlong param_1,int param_2)

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



// FUNCTION 14840221a FUN_14840221a body=227 status=ok
// SIG undefined FUN_14840221a(void)

undefined8 * FUN_14840221a(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1446ddc76(&local_20,"Landscape",1);
  plVar2 = (longlong *)FUN_1447c1074(local_20);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
    if (local_30 != 0) {
      uVar3 = FUN_14746bd56();
      param_1[1] = uVar3;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  FUN_148402332(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484022fe FUN_1484022fe body=51 status=ok
// SIG undefined FUN_1484022fe(void)

void FUN_1484022fe(longlong param_1)

{
  FUN_148402b3c();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_148402ce2(param_1 + 0x10);
  return;
}



// FUNCTION 148402332 FUN_148402332 body=648 status=ok
// SIG undefined FUN_148402332(void)

void FUN_148402332(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_94 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = local_c8;
  if (param_1[1] != 0) {
    uVar6 = (**(code **)(**(longlong **)(*param_1 + 0x28) + 0x38))();
    uVar7 = (**(code **)(**(longlong **)(*param_1 + 0x28) + 0x30))();
    if (uVar7 < uVar6) {
      uVar6 = uVar7;
    }
    plVar3 = (longlong *)param_1[1];
    dVar13 = *(double *)(*param_1 + 0x30);
    uVar14 = SUB84(dVar13,0);
    uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar2 = *(double *)(*param_1 + 0x38);
    if (dVar13 <= dVar2) {
      uVar14 = SUB84(dVar2,0);
      uVar15 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    plVar1 = plVar3 + 2;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = plVar1;
    if ((int)plVar3[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar9 = (int)plVar3[5];
    }
    uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
    local_c8 = local_a8;
    uVar5 = local_c8;
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = plVar3;
    if ((local_c8._4_4_ != iVar9) || (uStack_b0 != plVar1)) {
      iVar8 = local_c8._4_4_;
      local_c8 = uVar5;
      do {
        local_e8 = *(longlong *)(*local_e0 + 8 + (longlong)iVar8 * 0x18);
        iVar8 = *(int *)(local_e8 + 0x40);
        uVar10 = 0xff;
        if ((longlong)iVar8 != 0) {
          lVar11 = *(longlong *)(local_e8 + 0x38);
          lVar12 = 0;
          do {
            plVar4 = *(longlong **)(lVar11 + lVar12);
            if (plVar4 != (longlong *)0x0) {
              dVar13 = (double)(**(code **)(*plVar4 + 0x28))();
              if (0.0 < dVar13 + dVar13) {
                dVar13 = log(((double)CONCAT44(uVar15,uVar14) / (double)uVar6) / (dVar13 + dVar13));
                lVar11 = (longlong)
                         ROUND(dVar13 * 1.4426950408889634 + dVar13 * 1.4426950408889634 + -0.5) >>
                         1;
                if (lVar11 <= DAT_14cb47418) {
                  lVar11 = (longlong)DAT_14cb47418;
                }
                uVar10 = (undefined1)lVar11;
                break;
              }
            }
            lVar12 = lVar12 + 8;
            uVar10 = 0xff;
          } while ((longlong)iVar8 * 8 != lVar12);
        }
        uStack_b0 = (longlong *)(local_e8 + 0x1a8);
        local_b8 = &local_e8;
        FUN_1484025bc(param_1 + 2,local_94,&local_b8);
        *(undefined1 *)(local_e8 + 0x1a8) = uVar10;
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
        FUN_1449c0562(&local_d8);
        iVar8 = local_c8._4_4_;
        uVar5 = local_c8;
      } while (local_e0 != plVar3 ||
               ((longlong *)CONCAT44(uStack_cc,uStack_d0) != plVar1 || local_c8._4_4_ != iVar9));
    }
  }
  local_c8 = uVar5;
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484025bc FUN_1484025bc body=324 status=ok
// SIG undefined FUN_1484025bc(void)

undefined4 * FUN_1484025bc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
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
  FUN_148402702(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1484027e8(param_1,uVar4,local_40,&local_4c);
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
      FUN_1484028da(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148402702 FUN_148402702 body=230 status=ok
// SIG undefined FUN_148402702(void)

int * FUN_148402702(longlong *param_1,int *param_2)

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



// FUNCTION 1484027e8 FUN_1484027e8 body=128 status=ok
// SIG undefined FUN_1484027e8(void)

undefined8 FUN_1484027e8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148402868((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148402868 FUN_148402868 body=114 status=ok
// SIG undefined FUN_148402868(void)

void FUN_148402868(longlong *param_1,int param_2)

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



// FUNCTION 1484028da FUN_1484028da body=474 status=ok
// SIG undefined FUN_1484028da(void)

void FUN_1484028da(longlong *param_1)

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



// FUNCTION 148402ab6 FUN_148402ab6 body=132 status=ok
// SIG undefined FUN_148402ab6(void)

void FUN_148402ab6(longlong param_1,int param_2)

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



// FUNCTION 148402b3c FUN_148402b3c body=420 status=ok
// SIG undefined FUN_148402b3c(void)

void FUN_148402b3c(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 8);
  uVar5 = local_68;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)plVar3[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar9 = (int)plVar3[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar5 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar3;
    if ((local_68._4_4_ != iVar9) || (uStack_50 != plVar1)) {
      iVar6 = local_68._4_4_;
      local_68 = uVar5;
      do {
        if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
          uVar4 = *(ulonglong *)(*local_80 + 8 + (longlong)iVar6 * 0x18);
          uVar7 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          lVar8 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar8 = param_1 + 0x48;
          }
          iVar6 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(param_1 + 0x58) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar6 != -1) {
            do {
              puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
              if (*puVar2 == uVar4) {
                if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                  *(char *)(uVar4 + 0x1a8) = (char)puVar2[1];
                }
                break;
              }
              iVar6 = (int)puVar2[2];
            } while (iVar6 != -1);
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar5 = local_68;
      } while (local_80 != plVar3 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar9));
    }
  }
  local_68 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148402ce2 FUN_148402ce2 body=52 status=ok
// SIG undefined FUN_148402ce2(void)

void FUN_148402ce2(longlong *param_1)

{
  FUN_148402d16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148402d16 FUN_148402d16 body=89 status=ok
// SIG undefined FUN_148402d16(void)

void FUN_148402d16(longlong param_1)

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



// FUNCTION 148402d70 FUN_148402d70 body=147 status=ok
// SIG undefined FUN_148402d70(void)

void FUN_148402d70(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x240,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x240)) {
      uVar5 = uVar4 / 0x240 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x240,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148402e04 FUN_148402e04 body=100 status=ok
// SIG undefined FUN_148402e04(void)

void FUN_148402e04(longlong *param_1,short *param_2)

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
      if (*(short *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 1) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 2;
    } while (lVar4 * 2 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1405b572a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(short *)(lVar2 + lVar4 * 2) = *param_2;
  return;
}



// FUNCTION 148402e68 FUN_148402e68 body=586 status=ok
// SIG undefined FUN_148402e68(void)

void FUN_148402e68(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  longlong *plVar8;
  short *psVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 2 + -2;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar8 = &local_348;
    do {
      psVar3 = (short *)*plVar8;
      psVar9 = (short *)plVar8[1];
      iVar12 = (int)plVar8[2];
      uVar5 = (int)((ulonglong)((longlong)psVar9 - (longlong)psVar3) >> 1) + 1;
      psVar7 = psVar9;
      psVar13 = psVar9;
      psVar15 = psVar3;
      if (iVar12 != 0) {
LAB_148402f30:
        if (8 < (int)uVar5) {
          sVar10 = *(short *)((longlong)psVar3 + (ulonglong)(uVar5 & 0xfffffffe));
          *(short *)((longlong)psVar3 + (ulonglong)(uVar5 & 0xfffffffe)) = *psVar3;
          *psVar3 = sVar10;
          psVar6 = psVar9 + 1;
          psVar4 = psVar3;
          do {
            psVar7 = psVar4 + 1;
            psVar2 = psVar4 + 1;
            do {
              psVar14 = psVar2;
              psVar4 = psVar7;
              if (psVar9 < psVar4) break;
              psVar7 = psVar4 + 1;
              psVar2 = psVar14 + 1;
            } while (*psVar4 <= *psVar3);
            psVar2 = psVar6 + -2;
            do {
              psVar7 = psVar6;
              psVar16 = psVar2;
              psVar6 = psVar7 + -1;
              if (psVar6 <= psVar3) break;
              psVar2 = psVar16 + -1;
            } while (*psVar3 <= *psVar6);
            if (psVar6 < psVar4) goto LAB_148402fb3;
            sVar10 = *psVar4;
            *psVar4 = *psVar6;
            *psVar6 = sVar10;
          } while( true );
        }
        if (psVar3 < psVar9) {
          do {
            psVar7 = psVar3;
            if (psVar3 + 1 <= psVar9) {
              psVar13 = psVar3 + 1;
              sVar10 = *psVar3;
              do {
                sVar1 = *psVar13;
                sVar11 = sVar10;
                if (sVar10 <= sVar1) {
                  sVar11 = sVar1;
                }
                if (sVar10 < sVar1) {
                  psVar7 = psVar13;
                }
                psVar13 = psVar13 + 1;
                sVar10 = sVar11;
              } while (psVar13 <= psVar9);
            }
            sVar10 = *psVar7;
            *psVar7 = *psVar9;
            *psVar9 = sVar10;
            psVar9 = psVar9 + -1;
          } while (psVar3 < psVar9);
        }
        goto LAB_14840308e;
      }
LAB_1484030a3:
      FUN_1484030b3(psVar3,uVar5,psVar7,param_4);
LAB_14840308e:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148402fb3:
  sVar10 = *psVar3;
  *psVar3 = *psVar6;
  *psVar6 = sVar10;
  iVar12 = iVar12 + -1;
  psVar7 = psVar7 + -2;
  if ((longlong)psVar16 - (longlong)psVar15 < (longlong)psVar13 - (longlong)psVar14) {
    if (psVar4 < psVar9) {
      *plVar8 = (longlong)psVar4;
      plVar8[1] = (longlong)psVar9;
      *(int *)(plVar8 + 2) = iVar12;
      plVar8 = plVar8 + 3;
    }
    psVar14 = psVar3;
    if (psVar6 <= psVar3 + 1) goto LAB_14840308e;
  }
  else {
    if (psVar3 + 1 < psVar6) {
      *plVar8 = (longlong)psVar3;
      plVar8[1] = (longlong)psVar7;
      *(int *)(plVar8 + 2) = iVar12;
      plVar8 = plVar8 + 3;
    }
    psVar3 = psVar4;
    psVar7 = psVar9;
    psVar16 = psVar9;
    if (psVar9 <= psVar4) goto LAB_14840308e;
  }
  uVar5 = (int)((ulonglong)((longlong)psVar16 - (longlong)psVar14) >> 1) + 1;
  psVar9 = psVar7;
  psVar13 = psVar16;
  psVar15 = psVar14;
  if (iVar12 == 0) goto LAB_1484030a3;
  goto LAB_148402f30;
}



// FUNCTION 1484030b3 FUN_1484030b3 body=309 status=ok
// SIG undefined FUN_1484030b3(void)

void FUN_1484030b3(undefined2 *param_1,uint param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001484030d4:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((short)param_1[iVar6] <= (short)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        sVar1 = param_1[iVar3];
        if (sVar1 < (short)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = sVar1;
          iVar3 = iVar6;
          goto joined_r0x0001484030d4;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((short)param_1[iVar6] <= (short)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            sVar1 = param_1[iVar8];
            if ((short)param_1[iVar7] <= sVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = sVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1484031e8 FUN_1484031e8 body=207 status=ok
// SIG undefined FUN_1484031e8(void)

int FUN_1484031e8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1484032b8 FUN_1484032b8 body=351 status=ok
// SIG undefined FUN_1484032b8(void)

undefined4 * FUN_1484032b8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148403418(param_1,local_48);
  FUN_1484035a2(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1484034fe(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14840366c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148403418 FUN_148403418 body=230 status=ok
// SIG undefined FUN_148403418(void)

int * FUN_148403418(longlong *param_1,int *param_2)

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



// FUNCTION 1484034fe FUN_1484034fe body=162 status=ok
// SIG undefined FUN_1484034fe(void)

undefined8 FUN_1484034fe(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1484031e8(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1484035fa(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148403522;
    }
  }
  uVar6 = 0;
LAB_148403522:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484035a2 FUN_1484035a2 body=87 status=ok
// SIG undefined FUN_1484035a2(void)

longlong * FUN_1484035a2(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1484035fa FUN_1484035fa body=114 status=ok
// SIG undefined FUN_1484035fa(void)

void FUN_1484035fa(longlong *param_1,int param_2)

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



// FUNCTION 14840366c FUN_14840366c body=510 status=ok
// SIG undefined FUN_14840366c(void)

void FUN_14840366c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840386c FUN_14840386c body=114 status=ok
// SIG undefined FUN_14840386c(void)

void FUN_14840386c(longlong *param_1,int param_2)

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



// FUNCTION 1484038de FUN_1484038de body=143 status=ok
// SIG undefined FUN_1484038de(void)

void FUN_1484038de(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14840396e FUN_14840396e body=48 status=ok
// SIG undefined FUN_14840396e(void)

void FUN_14840396e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14840399e FUN_14840399e body=411 status=ok
// SIG undefined FUN_14840399e(void)

void FUN_14840399e(longlong *param_1,uint param_2)

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



// FUNCTION 148403b3a FUN_148403b3a body=351 status=ok
// SIG undefined FUN_148403b3a(void)

undefined4 * FUN_148403b3a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148403418(param_1,local_48);
  FUN_148403c9a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1484034fe(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14840366c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148403c9a FUN_148403c9a body=87 status=ok
// SIG undefined FUN_148403c9a(void)

longlong * FUN_148403c9a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148403cf2 FUN_148403cf2 body=38 status=ok
// SIG undefined FUN_148403cf2(void)

undefined8 FUN_148403cf2(undefined8 param_1,int param_2)

{
  FUN_1484042d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148403d18 FUN_148403d18 body=249 status=ok
// SIG undefined FUN_148403d18(void)

void FUN_148403d18(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  ulonglong local_b8 [17];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148404346();
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(*(longlong **)(param_1 + 0x130),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))(*(longlong **)(param_1 + 0x138),param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_14472e0ae(param_1 + 0x10,iVar1);
  }
  lVar4 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
  }
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar4 + lVar3) = uVar2;
  *(undefined8 *)(lVar4 + 8 + lVar3) = 0x1000000000;
  local_30 = 0x1100000001;
  local_b8[0] = (longlong)iVar1 & 0xffU | 0x1000040000;
  FUN_1447f9616(param_1,local_b8,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148403e12 FUN_148403e12 body=105 status=ok
// SIG undefined FUN_148403e12(void)

void FUN_148403e12(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))();
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
  }
  FUN_144846d14(param_1);
  return;
}



// FUNCTION 148403e7c FUN_148403e7c body=1113 status=ok
// SIG undefined FUN_148403e7c(void)

longlong * FUN_148403e7c(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined **local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  int local_9c [3];
  undefined8 local_90;
  undefined ***local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined1 local_68;
  undefined4 local_64;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = &PTR_FUN_14a355380;
  local_a8 = 0;
  iVar7 = *(int *)(param_1 + 0x1c);
  local_d8 = param_1;
  local_d0 = param_3;
  local_c8 = param_2;
  if (iVar7 != 0) {
    FUN_14024fde8(&local_b8,iVar7 * iVar7 * 6);
    iVar7 = *(int *)(local_d8 + 0x1c);
    if (iVar7 != 0) {
      uVar6 = 0;
      do {
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uVar3 = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < uVar3) {
          uVar4 = uStack_b0 & 0xffffffff;
          uStack_b0._0_4_ = uVar3;
          FUN_14042c7ac(&local_b8,uVar4);
          uVar3 = (uint)uStack_b0;
        }
        uStack_b0._0_4_ = uVar3;
        uVar3 = ((uVar6 & 0x55555555) >> 1 | uVar6 & 0x55555555) & 0x33333333;
        uVar3 = (uVar3 >> 2 | uVar3) & 0xf0f0f0f;
        uVar3 = uVar3 >> 4 | uVar3;
        uVar5 = uVar3 & 0xff | uVar3 >> 8 & 0xff00;
        uVar3 = uVar6 & 0x22222222 | uVar6 >> 1 & 0x4444444;
        uVar3 = (uVar3 >> 3 | uVar3 >> 1) & 0x70f0f0f;
        uVar3 = uVar3 >> 4 | uVar3;
        iVar10 = (iVar7 + 1) * (uVar3 & 0xff | uVar3 >> 8 & 0x7f00);
        iVar1 = uVar5 + iVar10;
        iVar9 = iVar7 + iVar1 + 2;
        uVar4 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar9;
        uVar3 = (uint)uStack_b0;
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_14042c7ac(&local_b8,uVar3);
        }
        bVar8 = (byte)uVar6 >> 1 ^ (byte)uVar6;
        iVar10 = uVar5 + iVar10 + 1;
        iVar7 = iVar7 + iVar1 + 1;
        uVar4 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar10;
        uVar3 = (uint)uStack_b0;
        iVar11 = iVar1;
        if ((bVar8 & 1) != 0) {
          iVar11 = iVar7;
        }
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_14042c7ac(&local_b8,uVar3);
        }
        uVar4 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar11;
        uVar3 = (uint)uStack_b0;
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_14042c7ac(&local_b8,uVar3);
        }
        uVar4 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar1;
        uVar3 = (uint)uStack_b0;
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_14042c7ac(&local_b8,uVar3);
        }
        uVar4 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar7;
        uVar3 = (uint)uStack_b0;
        if ((bVar8 & 1) != 0) {
          iVar9 = iVar10;
        }
        lVar12 = (longlong)(int)(uint)uStack_b0;
        uStack_b0._0_4_ = (uint)uStack_b0 + 1;
        if (uStack_b0._4_4_ < (uint)uStack_b0) {
          FUN_14042c7ac(&local_b8,uVar3);
        }
        uVar4 = (longlong)&local_b8 + ((longlong)local_b8 >> 0x18);
        if ((local_b8 & 1) == 0) {
          uVar4 = local_b8;
        }
        *(int *)(uVar4 + lVar12 * 4) = iVar9;
        uVar6 = uVar6 + 1;
        iVar7 = *(int *)(local_d8 + 0x1c);
      } while (uVar6 < (uint)(iVar7 * iVar7));
    }
  }
  *(uint *)(local_d8 + 0x18) = (uint)uStack_b0;
  if ((uint)uStack_b0 < 0x40000000) {
    local_9c[0] = (uint)uStack_b0 << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    local_9c[0] = 0;
  }
  plVar2 = local_c8;
  lVar12 = local_d0;
  local_90 = 0;
  local_80 = 1;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_68 = 0;
  local_64 = 0;
  local_60 = L"FWaterMeshIndexBuffer";
  local_58 = 0;
  uStack_50 = 0;
  local_88 = &local_c0;
  local_9c[1] = 4;
  local_9c[2] = 0x8001;
  if (local_9c[0] == 0) {
    FUN_14570b4be(local_d0,&local_90,0x8001,4);
  }
  if (*(char *)(lVar12 + 0x69) == '\0') {
    FUN_14002049c(lVar12,1);
    local_e0 = &local_90;
    local_e8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,plVar2,lVar12,local_9c);
    *(undefined4 *)(*plVar2 + 0x18) = 8;
    FUN_14002049c(lVar12,0);
  }
  else {
    local_e0 = &local_90;
    local_e8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,plVar2,lVar12,local_9c);
    *(undefined4 *)(*plVar2 + 0x18) = 8;
  }
  if (local_b8 != 0 && (local_b8 & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484042d6 FUN_1484042d6 body=112 status=ok
// SIG undefined FUN_1484042d6(void)

void FUN_1484042d6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14ae98f00;
  puVar3 = (undefined8 *)param_1[0x26];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x27];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 148404346 FUN_148404346 body=239 status=ok
// SIG undefined FUN_148404346(void)

void FUN_148404346(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = *(undefined4 *)(param_1 + 0x160);
  local_38 = *(undefined4 *)(param_1 + 0x164);
  local_34 = *(undefined4 *)(param_1 + 0x168);
  local_48 = *(undefined4 *)(param_1 + 0x170);
  local_44 = *(undefined4 *)(param_1 + 0x16c);
  local_40 = *(undefined4 *)(param_1 + 0x174);
  local_30 = &DAT_100000001;
  FUN_140de78ee(&local_50);
  lVar3 = *(longlong *)(param_1 + 0x140);
  *(longlong *)(param_1 + 0x140) = local_50;
  local_50 = 0;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148404436 FUN_148404436 body=38 status=ok
// SIG undefined FUN_148404436(void)

undefined8 FUN_148404436(undefined8 param_1,int param_2)

{
  FUN_148404678();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840445c FUN_14840445c body=433 status=ok
// SIG undefined FUN_14840445c(void)

void FUN_14840445c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  ulonglong local_d8 [17];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1484046e8();
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(*(longlong **)(param_1 + 0x130),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))(*(longlong **)(param_1 + 0x138),param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  lVar1 = param_1 + 0x10;
  iVar7 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar7 + 1U) {
    FUN_14472e0ae(lVar1,iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar8 = lVar1;
  }
  lVar6 = (longlong)iVar7 * 0x10;
  *(undefined8 *)(lVar8 + lVar6) = uVar3;
  *(undefined8 *)(lVar8 + 8 + lVar6) = 0x1000000000;
  local_50 = 0x1100000001;
  local_d8[0] = (longlong)iVar7 & 0xffU | 0x1000040000;
  iVar7 = 0;
  do {
    uVar2 = *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x9c) < uVar2 + 1) {
      FUN_14472e0ae(lVar1,uVar2);
    }
    uVar4 = local_50;
    lVar8 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar8 = lVar1;
    }
    *(undefined8 *)(lVar8 + (longlong)(int)uVar2 * 0x10) = 0;
    *(undefined8 *)(lVar8 + 8 + (longlong)(int)uVar2 * 0x10) = 0x1000400000000;
    lVar8 = (longlong)(int)local_50;
    uVar5 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar5);
    if (local_50._4_4_ < uVar5) {
      FUN_14738ac8a(local_d8,uVar4 & 0xffffffff);
    }
    local_d8[lVar8] = (ulonglong)((uVar2 & 0xff) + iVar7) | 0x1000408140000;
    iVar7 = iVar7 + 0x1000000;
  } while (iVar7 != 0x3000000);
  FUN_1447f9616(param_1,local_d8,0);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840460e FUN_14840460e body=105 status=ok
// SIG undefined FUN_14840460e(void)

void FUN_14840460e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))();
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
  }
  FUN_144846d14(param_1);
  return;
}



// FUNCTION 148404678 FUN_148404678 body=112 status=ok
// SIG undefined FUN_148404678(void)

void FUN_148404678(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14ae99020;
  puVar3 = (undefined8 *)param_1[0x26];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x27];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 1484046e8 FUN_1484046e8 body=239 status=ok
// SIG undefined FUN_1484046e8(void)

void FUN_1484046e8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = *(undefined4 *)(param_1 + 0x160);
  local_38 = *(undefined4 *)(param_1 + 0x164);
  local_34 = *(undefined4 *)(param_1 + 0x168);
  local_48 = *(undefined4 *)(param_1 + 0x170);
  local_44 = *(undefined4 *)(param_1 + 0x16c);
  local_40 = *(undefined4 *)(param_1 + 0x174);
  local_30 = &DAT_100000001;
  FUN_140de78ee(&local_50);
  lVar3 = *(longlong *)(param_1 + 0x140);
  *(longlong *)(param_1 + 0x140) = local_50;
  local_50 = 0;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484047d8 FUN_1484047d8 body=132 status=ok
// SIG undefined FUN_1484047d8(void)

void FUN_1484047d8(longlong param_1,int param_2)

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



// FUNCTION 148404862 FUN_148404862 body=105 status=ok
// SIG undefined FUN_148404862(void)

void FUN_148404862(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14100c782(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14100c782(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484048a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484048cc FUN_1484048cc body=89 status=ok
// SIG undefined FUN_1484048cc(void)

void FUN_1484048cc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140cbac7e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148404926 FUN_148404926 body=62 status=ok
// SIG undefined FUN_148404926(void)

void FUN_148404926(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148404964(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148404964 FUN_148404964 body=93 status=ok
// SIG undefined FUN_148404964(void)

ulonglong FUN_148404964(uint param_1,uint param_2)

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



// FUNCTION 1484049c2 FUN_1484049c2 body=159 status=ok
// SIG undefined FUN_1484049c2(void)

void FUN_1484049c2(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb4a4e0;
  if (param_1 <= (int)DAT_14cb4a4e0) {
    if (DAT_14cb4a4e4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb4a4e0) {
        uVar2 = DAT_14cb4a4e0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb4a4e0 * 3) >> 3) + (longlong)(int)DAT_14cb4a4e0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    DAT_14cb4a4e4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb4a4d8,param_1,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148404a62 FUN_148404a62 body=76 status=ok
// SIG undefined FUN_148404a62(void)

void FUN_148404a62(void)

{
  int iVar1;
  
  iVar1 = FUN_148404b3c(DAT_14cb4a4e0,DAT_14cb4a4e4);
  if (iVar1 != DAT_14cb4a4e4) {
    DAT_14cb4a4e4 = iVar1;
    FUN_1446f8d3c(&DAT_14cb4a4d8,DAT_14cb4a4e0,iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 148404aae FUN_148404aae body=141 status=ok
// SIG undefined FUN_148404aae(void)

void FUN_148404aae(uint param_1)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = DAT_14cb4a4d8;
  _Dst = (void *)(DAT_14cb4a4d8 + (longlong)(int)param_1 * 0x50);
  if (*(longlong *)(DAT_14cb4a4d8 + 0x10 + (longlong)(int)param_1 * 0x50) != 0) {
    plVar3 = (longlong *)((longlong)_Dst + 0x30);
    if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)_Dst + 0x20);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar4 = ~param_1 + DAT_14cb4a4e0;
  if (iVar4 != 0) {
    iVar2 = 1;
    if (iVar4 < 1) {
      iVar2 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(DAT_14cb4a4e0 - iVar2) * 0x50),(longlong)iVar2 * 0x50);
  }
  DAT_14cb4a4e0 = DAT_14cb4a4e0 + -1;
  return;
}



// FUNCTION 148404b3c FUN_148404b3c body=112 status=ok
// SIG undefined FUN_148404b3c(void)

ulonglong FUN_148404b3c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148404b76;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      param_2 = param_2 / 0x50;
    }
  }
LAB_148404b76:
  return param_2 & 0xffffffff;
}



// FUNCTION 148404bac FUN_148404bac body=78 status=ok
// SIG undefined FUN_148404bac(void)

longlong FUN_148404bac(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae99170;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148404bfa FUN_148404bfa body=77 status=ok
// SIG undefined FUN_148404bfa(void)

undefined8 * FUN_148404bfa(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae99170;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148404c48 FUN_148404c48 body=108 status=ok
// SIG undefined FUN_148404c48(void)

void FUN_148404c48(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar3 = param_1;
  }
  _Dst = (void *)(lVar3 + 0xa8);
  FUN_1446fc26f(_Dst);
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0xa8 + (longlong)_Dst),(longlong)iVar2 * 0xa8);
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  *(uint *)(param_1 + 0xb0) = iVar1 - param_2;
  return;
}



// FUNCTION 148404cb4 FUN_148404cb4 body=67 status=ok
// SIG undefined FUN_148404cb4(void)

void FUN_148404cb4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148404cf8(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
  if (iVar1 == *(int *)(param_1 + 0xb4)) {
    return;
  }
  *(int *)(param_1 + 0xb4) = iVar1;
  FUN_14183f3d6(param_1,*(undefined4 *)(param_1 + 0xb0),iVar1);
  return;
}



// FUNCTION 148404cf8 FUN_148404cf8 body=127 status=ok
// SIG undefined FUN_148404cf8(void)

ulonglong FUN_148404cf8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0xa8) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xa8,0);
      uVar1 = uVar1 / 0xa8;
    }
  }
  return uVar1;
}



// FUNCTION 148404d78 FUN_148404d78 body=136 status=ok
// SIG undefined FUN_148404d78(void)

void FUN_148404d78(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0xac)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xac) = iVar5;
    FUN_148404e02(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148404e02 FUN_148404e02 body=149 status=ok
// SIG undefined FUN_148404e02(void)

void FUN_148404e02(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa0,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0xa0),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa0,param_2,param_3,0x28);
  return;
}



// FUNCTION 148404e98 FUN_148404e98 body=112 status=ok
// SIG undefined FUN_148404e98(void)

void FUN_148404e98(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 148404f08 FUN_148404f08 body=93 status=ok
// SIG undefined FUN_148404f08(void)

void FUN_148404f08(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_148404f66(param_1,param_2,1);
  return;
}



// FUNCTION 148404f66 FUN_148404f66 body=87 status=ok
// SIG undefined FUN_148404f66(void)

void FUN_148404f66(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28 + 0x10);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_148404fbe(param_1,param_2,param_3);
  return;
}



// FUNCTION 148404fbe FUN_148404fbe body=138 status=ok
// SIG undefined FUN_148404fbe(void)

void FUN_148404fbe(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148405048 FUN_148405048 body=75 status=ok
// SIG undefined FUN_148405048(void)

void FUN_148405048(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_143268f94(param_1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 148405094 FUN_148405094 body=146 status=ok
// SIG undefined FUN_148405094(void)

void FUN_148405094(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148405128 FUN_148405128 body=98 status=ok
// SIG undefined FUN_148405128(void)

void FUN_148405128(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xe0 + *param_1);
  FUN_140cbacb6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xe0 + (longlong)_Dst),(longlong)iVar2 * 0xe0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14840518a FUN_14840518a body=62 status=ok
// SIG undefined FUN_14840518a(void)

void FUN_14840518a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484051c8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe0,8);
  }
  return;
}



// FUNCTION 1484051c8 FUN_1484051c8 body=110 status=ok
// SIG undefined FUN_1484051c8(void)

ulonglong FUN_1484051c8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148405201;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe0,8);
      param_2 = param_2 / 0xe0;
    }
  }
LAB_148405201:
  return param_2 & 0xffffffff;
}



// FUNCTION 148405236 FUN_148405236 body=111 status=ok
// SIG undefined FUN_148405236(void)

void FUN_148405236(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,8);
  }
  return;
}



// FUNCTION 1484052a6 FUN_1484052a6 body=103 status=ok
// SIG undefined FUN_1484052a6(void)

undefined8 FUN_1484052a6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x28,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x28)) {
    uVar4 = uVar2 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,4);
  }
  return uVar3;
}



// FUNCTION 14840530d FUN_14840530d body=30 status=ok
// SIG undefined FUN_14840530d(void)

void FUN_14840530d(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)(param_1 + 6) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14840532c FUN_14840532c body=147 status=ok
// SIG undefined FUN_14840532c(void)

void FUN_14840532c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484053c0 FUN_1484053c0 body=85 status=ok
// SIG undefined FUN_1484053c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484053c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_14c846288;
  param_1[6] = _DAT_14c846280;
  param_1[7] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[4] = _DAT_14c846270;
  param_1[5] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[2] = _DAT_14c846260;
  param_1[3] = uVar1;
  uVar1 = DAT_14c846258;
  *param_1 = _DAT_14c846250;
  param_1[1] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 148405416 FUN_148405416 body=132 status=ok
// SIG undefined FUN_148405416(void)

void FUN_148405416(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14840549c FUN_14840549c body=31 status=ok
// SIG undefined FUN_14840549c(void)

undefined8 FUN_14840549c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484054d8 FUN_1484054d8 body=93 status=ok
// SIG undefined FUN_1484054d8(void)

void FUN_1484054d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae99180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148405536 FUN_148405536 body=126 status=ok
// SIG undefined FUN_148405536(void)

void FUN_148405536(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae99180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484055a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484055b4 FUN_1484055b4 body=21 status=ok
// SIG undefined FUN_1484055b4(void)

undefined8 FUN_1484055b4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1484055cc FUN_1484055cc body=143 status=ok
// SIG undefined FUN_1484055cc(void)

void FUN_1484055cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14840565c FUN_14840565c body=48 status=ok
// SIG undefined FUN_14840565c(void)

void FUN_14840565c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,0x10);
  }
  return;
}



// FUNCTION 14840568c FUN_14840568c body=118 status=ok
// SIG undefined FUN_14840568c(void)

void FUN_14840568c(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_14c846520;
  uVar3 = (undefined4)DAT_14c846518;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar4 = DAT_14c846510._4_4_ ^ 0x80000000;
    uVar5 = DAT_14c846518._4_4_ ^ 0x80000000;
    DAT_14c846518._0_4_ = uVar3;
    DAT_14c846520 = uVar2;
    *param_1 = (undefined4)DAT_14c846510;
    param_1[1] = uVar4;
    param_1[2] = uVar3;
    param_1[3] = uVar5;
    *(ulonglong *)(param_1 + 4) = uVar2 ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 10) = DAT_14c846520;
    uVar1 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
    *(ulonglong *)(param_1 + 6) = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
    param_1[0xe] = 0;
    param_1[0xf] = param_1[0xf] & 0x80000000 | 0x3fffffff;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    param_1[0x14] = 0xffffffff;
    param_1 = param_1 + 0x16;
    uVar2 = DAT_14c846520;
    uVar3 = (undefined4)DAT_14c846518;
  }
  DAT_14c846518._0_4_ = uVar3;
  DAT_14c846520 = uVar2;
  return;
}



// FUNCTION 148405702 FUN_148405702 body=62 status=ok
// SIG undefined FUN_148405702(void)

void FUN_148405702(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148405740(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 148405740 FUN_148405740 body=93 status=ok
// SIG undefined FUN_148405740(void)

ulonglong FUN_148405740(uint param_1,uint param_2)

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



// FUNCTION 14840579e FUN_14840579e body=56 status=ok
// SIG undefined FUN_14840579e(void)

undefined8 * FUN_14840579e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae99250;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484057d6 FUN_1484057d6 body=56 status=ok
// SIG undefined FUN_1484057d6(void)

undefined8 * FUN_1484057d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae993b0;
  FUN_144725486();
  FUN_14648945c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840583c FUN_14840583c body=38 status=ok
// SIG undefined FUN_14840583c(void)

undefined8 FUN_14840583c(undefined8 param_1,int param_2)

{
  FUN_14648945c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405862 FUN_148405862 body=56 status=ok
// SIG undefined FUN_148405862(void)

undefined8 * FUN_148405862(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae99410;
  FUN_144725486();
  FUN_1464895aa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484058c8 FUN_1484058c8 body=38 status=ok
// SIG undefined FUN_1484058c8(void)

undefined8 FUN_1484058c8(undefined8 param_1,int param_2)

{
  FUN_1464895aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484058ee FUN_1484058ee body=29 status=ok
// SIG undefined FUN_1484058ee(void)

undefined8 FUN_1484058ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840590c FUN_14840590c body=38 status=ok
// SIG undefined FUN_14840590c(void)

undefined8 FUN_14840590c(undefined8 param_1,int param_2)

{
  FUN_146488156();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405938 FUN_148405938 body=258 status=ok
// SIG undefined FUN_148405938(void)

void FUN_148405938(void)

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
              0x110) < DAT_14cb494b8) {
    FUN_144b3d300(&DAT_14cb494b8);
    if (DAT_14cb494b8 == -1) {
      FUN_148405a3c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FWaterQuadTreeParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x5e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb49438,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b466ec);
      _Init_thread_footer(&DAT_14cb494b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148405a3c FUN_148405a3c body=226 status=ok
// SIG undefined FUN_148405a3c(void)

longlong * FUN_148405a3c(longlong *param_1)

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
  pcVar13 = FUN_148405b20;
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



// FUNCTION 148405b20 FUN_148405b20 body=144 status=ok
// SIG undefined FUN_148405b20(void)

code * FUN_148405b20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e79058();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWaterQuadTreePS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb48b00;
  return FUN_148405bb0;
}



// FUNCTION 148405bb0 FUN_148405bb0 body=138 status=ok
// SIG undefined FUN_148405bb0(void)

undefined1 * FUN_148405bb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e67142();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWaterQuadTreeVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb48a78;
  return &LAB_148405c3a;
}



// FUNCTION 148405c3e FUN_148405c3e body=29 status=ok
// SIG undefined FUN_148405c3e(void)

undefined8 FUN_148405c3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405c5c FUN_148405c5c body=354 status=ok
// SIG undefined FUN_148405c5c(void)

void FUN_148405c5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  local_48 = DAT_14cb48bd0;
  if (DAT_14cb48bd0 != 0) {
    LOCK();
    *(int *)(DAT_14cb48bd0 + 8) = *(int *)(DAT_14cb48bd0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14cb48b88;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14ae995a0;
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



// FUNCTION 148405dc0 FUN_148405dc0 body=38 status=ok
// SIG undefined FUN_148405dc0(void)

undefined8 FUN_148405dc0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405de6 FUN_148405de6 body=29 status=ok
// SIG undefined FUN_148405de6(void)

undefined8 FUN_148405de6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405e04 FUN_148405e04 body=354 status=ok
// SIG undefined FUN_148405e04(void)

void FUN_148405e04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  local_48 = DAT_14cb48c58;
  if (DAT_14cb48c58 != 0) {
    LOCK();
    *(int *)(DAT_14cb48c58 + 8) = *(int *)(DAT_14cb48c58 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14cb48c10;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14ae995c0;
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



// FUNCTION 148405f68 FUN_148405f68 body=38 status=ok
// SIG undefined FUN_148405f68(void)

undefined8 FUN_148405f68(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405f8e FUN_148405f8e body=29 status=ok
// SIG undefined FUN_148405f8e(void)

undefined8 FUN_148405f8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148405fac FUN_148405fac body=384 status=ok
// SIG undefined FUN_148405fac(void)

void FUN_148405fac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb48ce0;
  if (DAT_14cb48ce0 != 0) {
    LOCK();
    *(int *)(DAT_14cb48ce0 + 8) = *(int *)(DAT_14cb48ce0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb48c98;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae995e0;
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



// FUNCTION 14840612e FUN_14840612e body=38 status=ok
// SIG undefined FUN_14840612e(void)

undefined8 FUN_14840612e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148406154 FUN_148406154 body=163 status=ok
// SIG undefined FUN_148406154(void)

void FUN_148406154(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b473f2();
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
  FUN_143b474da(param_1,param_2);
  return;
}



// FUNCTION 1484061f7 FUN_1484061f7 body=374 status=ok
// SIG undefined FUN_1484061f7(void)

void FUN_1484061f7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14840636e FUN_14840636e body=29 status=ok
// SIG undefined FUN_14840636e(void)

undefined8 FUN_14840636e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840638c FUN_14840638c body=384 status=ok
// SIG undefined FUN_14840638c(void)

void FUN_14840638c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb48d68;
  if (DAT_14cb48d68 != 0) {
    LOCK();
    *(int *)(DAT_14cb48d68 + 8) = *(int *)(DAT_14cb48d68 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb48d20;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae99600;
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



// FUNCTION 14840650e FUN_14840650e body=38 status=ok
// SIG undefined FUN_14840650e(void)

undefined8 FUN_14840650e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148406534 FUN_148406534 body=163 status=ok
// SIG undefined FUN_148406534(void)

void FUN_148406534(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b4770e();
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
  FUN_143b477f6(param_1,param_2);
  return;
}



// FUNCTION 1484065d7 FUN_1484065d7 body=374 status=ok
// SIG undefined FUN_1484065d7(void)

void FUN_1484065d7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14840674e FUN_14840674e body=29 status=ok
// SIG undefined FUN_14840674e(void)

undefined8 FUN_14840674e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840676c FUN_14840676c body=384 status=ok
// SIG undefined FUN_14840676c(void)

void FUN_14840676c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb48df0;
  if (DAT_14cb48df0 != 0) {
    LOCK();
    *(int *)(DAT_14cb48df0 + 8) = *(int *)(DAT_14cb48df0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb48da8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae99620;
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



// FUNCTION 1484068ee FUN_1484068ee body=38 status=ok
// SIG undefined FUN_1484068ee(void)

undefined8 FUN_1484068ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148406914 FUN_148406914 body=163 status=ok
// SIG undefined FUN_148406914(void)

void FUN_148406914(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b47a2a();
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
  FUN_143b47b12(param_1,param_2);
  return;
}



// FUNCTION 1484069b7 FUN_1484069b7 body=374 status=ok
// SIG undefined FUN_1484069b7(void)

void FUN_1484069b7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 148406b2e FUN_148406b2e body=29 status=ok
// SIG undefined FUN_148406b2e(void)

undefined8 FUN_148406b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148406b4c FUN_148406b4c body=258 status=ok
// SIG undefined FUN_148406b4c(void)

void FUN_148406b4c(void)

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
              0x110) < DAT_14cb49540) {
    FUN_144b3d300(&DAT_14cb49540);
    if (DAT_14cb49540 == -1) {
      FUN_148406c50(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FWaterQuadTreeOcclusionQueryParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x115;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb494c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b481b5);
      _Init_thread_footer(&DAT_14cb49540);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148406c50 FUN_148406c50 body=226 status=ok
// SIG undefined FUN_148406c50(void)

longlong * FUN_148406c50(longlong *param_1)

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
  pcVar13 = FUN_148406d34;
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



// FUNCTION 148406d34 FUN_148406d34 body=144 status=ok
// SIG undefined FUN_148406d34(void)

code * FUN_148406d34(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ed6118();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWaterQuadTreeOcclusionQueryPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb48eb8;
  return FUN_148406dc4;
}



// FUNCTION 148406dc4 FUN_148406dc4 body=144 status=ok
// SIG undefined FUN_148406dc4(void)

code * FUN_148406dc4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ee037e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FWaterQuadTreeOcclusionQueryVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb48e30;
  return FUN_148406e54;
}



// FUNCTION 148406e54 FUN_148406e54 body=130 status=ok
// SIG undefined FUN_148406e54(void)

undefined1 * FUN_148406e54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDrawArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148406ed6;
}



// FUNCTION 148406eda FUN_148406eda body=29 status=ok
// SIG undefined FUN_148406eda(void)

undefined8 FUN_148406eda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148406ef8 FUN_148406ef8 body=384 status=ok
// SIG undefined FUN_148406ef8(void)

void FUN_148406ef8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb48f88;
  if (DAT_14cb48f88 != 0) {
    LOCK();
    *(int *)(DAT_14cb48f88 + 8) = *(int *)(DAT_14cb48f88 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb48f40;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae99760;
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



// FUNCTION 14840707a FUN_14840707a body=38 status=ok
// SIG undefined FUN_14840707a(void)

undefined8 FUN_14840707a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484070a0 FUN_1484070a0 body=163 status=ok
// SIG undefined FUN_1484070a0(void)

void FUN_1484070a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b483a4();
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
  FUN_143b4848c(param_1,param_2);
  return;
}



// FUNCTION 148407143 FUN_148407143 body=374 status=ok
// SIG undefined FUN_148407143(void)

void FUN_148407143(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1484072ba FUN_1484072ba body=29 status=ok
// SIG undefined FUN_1484072ba(void)

undefined8 FUN_1484072ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484072d8 FUN_1484072d8 body=384 status=ok
// SIG undefined FUN_1484072d8(void)

void FUN_1484072d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb49010;
  if (DAT_14cb49010 != 0) {
    LOCK();
    *(int *)(DAT_14cb49010 + 8) = *(int *)(DAT_14cb49010 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb48fc8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae99780;
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



// FUNCTION 14840745a FUN_14840745a body=38 status=ok
// SIG undefined FUN_14840745a(void)

undefined8 FUN_14840745a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148407480 FUN_148407480 body=163 status=ok
// SIG undefined FUN_148407480(void)

void FUN_148407480(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b486c0();
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
  FUN_143b487a8(param_1,param_2);
  return;
}



// FUNCTION 148407523 FUN_148407523 body=374 status=ok
// SIG undefined FUN_148407523(void)

void FUN_148407523(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14840769a FUN_14840769a body=29 status=ok
// SIG undefined FUN_14840769a(void)

undefined8 FUN_14840769a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484076b8 FUN_1484076b8 body=384 status=ok
// SIG undefined FUN_1484076b8(void)

void FUN_1484076b8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb49098;
  if (DAT_14cb49098 != 0) {
    LOCK();
    *(int *)(DAT_14cb49098 + 8) = *(int *)(DAT_14cb49098 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb49050;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae997a0;
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



// FUNCTION 14840783a FUN_14840783a body=38 status=ok
// SIG undefined FUN_14840783a(void)

undefined8 FUN_14840783a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148407860 FUN_148407860 body=163 status=ok
// SIG undefined FUN_148407860(void)

void FUN_148407860(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b489dc();
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
  FUN_143b48ac4(param_1,param_2);
  return;
}



// FUNCTION 148407903 FUN_148407903 body=374 status=ok
// SIG undefined FUN_148407903(void)

void FUN_148407903(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 148407a7a FUN_148407a7a body=29 status=ok
// SIG undefined FUN_148407a7a(void)

undefined8 FUN_148407a7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148407a98 FUN_148407a98 body=384 status=ok
// SIG undefined FUN_148407a98(void)

void FUN_148407a98(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb49120;
  if (DAT_14cb49120 != 0) {
    LOCK();
    *(int *)(DAT_14cb49120 + 8) = *(int *)(DAT_14cb49120 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb490d8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ae997c0;
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



// FUNCTION 148407c1a FUN_148407c1a body=38 status=ok
// SIG undefined FUN_148407c1a(void)

undefined8 FUN_148407c1a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148407c40 FUN_148407c40 body=163 status=ok
// SIG undefined FUN_148407c40(void)

void FUN_148407c40(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143b48cf8();
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
  FUN_143b48de0(param_1,param_2);
  return;
}



// FUNCTION 148407ce3 FUN_148407ce3 body=374 status=ok
// SIG undefined FUN_148407ce3(void)

void FUN_148407ce3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 148407e6e FUN_148407e6e body=99 status=ok
// SIG undefined FUN_148407e6e(void)

void FUN_148407e6e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  FUN_140e4633e(param_1,plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148407ee2 FUN_148407ee2 body=58 status=ok
// SIG undefined FUN_148407ee2(void)

undefined8 FUN_148407ee2(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144a7a908();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x3a8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x3a8) + 0x1038);
  }
  return uVar1;
}



// FUNCTION 148407f1c FUN_148407f1c body=60 status=ok
// SIG undefined FUN_148407f1c(void)

undefined8 * FUN_148407f1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 4;
  FUN_147a3aa74(param_2,4,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0x100000000;
  puVar1[1] = 0x400000003;
  return param_2;
}



// FUNCTION 148407f5c FUN_148407f5c body=841 status=ok
// SIG undefined FUN_148407f5c(void)

void FUN_148407f5c(longlong *param_1,int param_2,float param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = (float)param_2;
  iVar1 = (int)param_1[6];
  if (iVar1 - param_2 != 0 && param_2 <= iVar1) {
    iVar5 = param_2;
    if (param_4 != '\0') {
      iVar5 = iVar1;
    }
    if (param_2 != 0) {
      iVar5 = param_2;
    }
    lVar4 = param_1[5];
    lVar3 = (longlong)param_2 * 0x14;
    fVar11 = *(float *)(lVar4 + 4 + lVar3);
    fVar10 = *(float *)(param_1[0xb] + 4 + lVar3);
    fVar9 = *(float *)(param_1[8] + 4 + lVar3);
    fVar8 = *(float *)(param_1[0xe] + 4 + lVar3);
    if (0 < iVar5) {
      lVar2 = (ulonglong)(iVar5 - 1) * 0x14;
      fVar6 = 1.0 - param_3;
      fVar11 = fVar11 * param_3 + *(float *)(lVar4 + 4 + lVar2) * fVar6;
      fVar10 = fVar10 * param_3 + *(float *)(param_1[0xb] + 4 + lVar2) * fVar6;
      fVar9 = fVar9 * param_3 + *(float *)(param_1[8] + 4 + lVar2) * fVar6;
      fVar8 = fVar8 * param_3 + fVar6 * *(float *)(param_1[0xe] + 4 + lVar2);
    }
    *(uint *)(param_1 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
      FUN_147a3a88c(param_1 + 5);
      lVar4 = param_1[5];
    }
    memmove((void *)(lVar4 + lVar3 + 0x14),(void *)(lVar4 + lVar3),
            (ulonglong)(uint)(iVar1 - param_2) * 0x14);
    lVar4 = param_1[5];
    *(float *)(lVar4 + lVar3) = fVar7;
    *(float *)(lVar4 + 4 + lVar3) = fVar11;
    *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar3) = 0;
    iVar1 = (int)param_1[0xc];
    *(uint *)(param_1 + 0xc) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 100) < iVar1 + 1U) {
      FUN_147a3a88c(param_1 + 0xb,iVar1);
    }
    memmove((void *)(param_1[0xb] + lVar3 + 0x14),(void *)(param_1[0xb] + lVar3),
            (ulonglong)(uint)(iVar1 - param_2) * 0x14);
    lVar4 = param_1[0xb];
    *(float *)(lVar4 + lVar3) = fVar7;
    *(float *)(lVar4 + 4 + lVar3) = fVar10;
    *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar3) = 0;
    iVar1 = (int)param_1[9];
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_147a3a88c(param_1 + 8,iVar1);
    }
    memmove((void *)(param_1[8] + lVar3 + 0x14),(void *)(param_1[8] + lVar3),
            (ulonglong)(uint)(iVar1 - param_2) * 0x14);
    lVar4 = param_1[8];
    *(float *)(lVar4 + lVar3) = fVar7;
    *(float *)(lVar4 + 4 + lVar3) = fVar9;
    *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar3) = 0;
    iVar1 = (int)param_1[0xf];
    *(uint *)(param_1 + 0xf) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x7c) < iVar1 + 1U) {
      FUN_147a3a88c(param_1 + 0xe,iVar1);
    }
    memmove((void *)(param_1[0xe] + lVar3 + 0x14),(void *)(param_1[0xe] + lVar3),
            (ulonglong)(uint)(iVar1 - param_2) * 0x14);
    lVar4 = param_1[0xe];
    *(float *)(lVar4 + lVar3) = fVar7;
    *(float *)(lVar4 + 4 + lVar3) = fVar8;
    *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar3) = 0;
    if (param_2 + 1 < (int)param_1[6]) {
      lVar3 = (longlong)(param_2 + 1);
      lVar4 = lVar3 * 0x14;
      do {
        *(float *)(param_1[5] + lVar4) = *(float *)(param_1[5] + lVar4) + 1.0;
        *(float *)(param_1[0xb] + lVar4) = *(float *)(param_1[0xb] + lVar4) + 1.0;
        *(float *)(param_1[8] + lVar4) = *(float *)(param_1[8] + lVar4) + 1.0;
        *(float *)(param_1[0xe] + lVar4) = *(float *)(param_1[0xe] + lVar4) + 1.0;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x14;
      } while (lVar3 < (int)param_1[6]);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014840825e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,fVar7);
  return;
}



// FUNCTION 1484082a6 FUN_1484082a6 body=278 status=ok
// SIG undefined FUN_1484082a6(void)

void FUN_1484082a6(longlong param_1,int param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  
  iVar7 = *(int *)(param_1 + 0x30);
  iVar12 = param_2;
  if (param_4 != '\0') {
    iVar12 = iVar7;
  }
  uVar13 = 0;
  if (param_4 == '\0') {
    uVar13 = param_2 + 1U;
  }
  if (param_2 != 0) {
    iVar12 = param_2;
  }
  if (param_2 < iVar7) {
    uVar13 = param_2 + 1U;
  }
  if ((iVar12 <= iVar7 && 0 < iVar12) && ((int)uVar13 < iVar7 && -1 < (int)uVar13)) {
    lVar9 = (ulonglong)(iVar12 - 1) * 0x14;
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar10 = (ulonglong)uVar13 * 0x14;
    fVar14 = 1.0 - param_3;
    lVar11 = (longlong)param_2 * 0x14;
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x58) + 4 + lVar10);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x58) + 4 + lVar9);
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x40) + 4 + lVar10);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x40) + 4 + lVar9);
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x70) + 4 + lVar10);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x70) + 4 + lVar9);
    *(float *)(lVar8 + 4 + lVar11) =
         *(float *)(lVar8 + 4 + lVar9) * fVar14 + *(float *)(lVar8 + 4 + lVar10) * param_3;
    *(float *)(*(longlong *)(param_1 + 0x58) + 4 + lVar11) = fVar2 * fVar14 + fVar1 * param_3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4 + lVar11) = fVar4 * fVar14 + fVar3 * param_3;
    *(float *)(*(longlong *)(param_1 + 0x70) + 4 + lVar11) = fVar14 * fVar6 + param_3 * fVar5;
  }
  return;
}



// FUNCTION 1484083bc FUN_1484083bc body=410 status=ok
// SIG undefined FUN_1484083bc(void)

void FUN_1484083bc(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = ~param_2;
  lVar4 = (longlong)(int)param_2;
  if (iVar1 + uVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x28) + lVar4 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x28) + lVar4 * 0x14 + 0x14),
            (longlong)(int)(iVar1 + uVar3) * 0x14);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar1 + -1;
  FUN_147a8b84c(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 + uVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x58) + lVar4 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x58) + lVar4 * 0x14 + 0x14),
            (longlong)(int)(iVar1 + uVar3) * 0x14);
    iVar1 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar1 + -1;
  FUN_147a8b84c(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 + uVar3 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x40) + lVar4 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x40) + lVar4 * 0x14 + 0x14),
            (longlong)(int)(iVar1 + uVar3) * 0x14);
    iVar1 = *(int *)(param_1 + 0x48);
  }
  *(int *)(param_1 + 0x48) = iVar1 + -1;
  FUN_147a8b84c(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x78);
  if (uVar3 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x70) + lVar4 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x70) + lVar4 * 0x14 + 0x14),
            (longlong)(int)(uVar3 + iVar1) * 0x14);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar1 + -1;
  FUN_147a8b84c(param_1 + 0x70);
  if ((int)param_2 < *(int *)(param_1 + 0x30)) {
    lVar2 = lVar4 * 0x14;
    do {
      *(float *)(*(longlong *)(param_1 + 0x28) + lVar2) =
           *(float *)(*(longlong *)(param_1 + 0x28) + lVar2) + -1.0;
      *(float *)(*(longlong *)(param_1 + 0x58) + lVar2) =
           *(float *)(*(longlong *)(param_1 + 0x58) + lVar2) + -1.0;
      *(float *)(*(longlong *)(param_1 + 0x40) + lVar2) =
           *(float *)(*(longlong *)(param_1 + 0x40) + lVar2) + -1.0;
      *(float *)(*(longlong *)(param_1 + 0x70) + lVar2) =
           *(float *)(*(longlong *)(param_1 + 0x70) + lVar2) + -1.0;
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x14;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 148408556 FUN_148408556 body=653 status=ok
// SIG undefined FUN_148408556(void)

void FUN_148408556(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)param_2;
  local_48 = *(undefined4 *)(lVar4 + 0x10 + lVar5 * 0x14);
  puVar1 = (undefined4 *)(lVar4 + lVar5 * 0x14);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_147a3a88c((longlong *)(param_1 + 0x28),iVar3);
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  lVar5 = lVar5 * 0x14;
  memmove((void *)(lVar4 + lVar5 + 0x14),(void *)(lVar4 + lVar5),
          (ulonglong)(uint)(iVar3 - param_2) * 0x14);
  lVar4 = *(longlong *)(param_1 + 0x28);
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  *puVar2 = CONCAT44(uStack_54,local_58);
  puVar2[1] = CONCAT44(uStack_4c,uStack_50);
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = local_48;
  lVar4 = *(longlong *)(param_1 + 0x58);
  local_48 = *(undefined4 *)(lVar4 + 0x10 + lVar5);
  puVar1 = (undefined4 *)(lVar4 + lVar5);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
    FUN_147a3a88c((longlong *)(param_1 + 0x58),iVar3);
    lVar4 = *(longlong *)(param_1 + 0x58);
  }
  memmove((void *)(lVar4 + lVar5 + 0x14),(void *)(lVar4 + lVar5),
          (ulonglong)(uint)(iVar3 - param_2) * 0x14);
  lVar4 = *(longlong *)(param_1 + 0x58);
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  *puVar2 = CONCAT44(uStack_54,local_58);
  puVar2[1] = CONCAT44(uStack_4c,uStack_50);
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = local_48;
  lVar4 = *(longlong *)(param_1 + 0x40);
  local_48 = *(undefined4 *)(lVar4 + 0x10 + lVar5);
  puVar1 = (undefined4 *)(lVar4 + lVar5);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  iVar3 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
    FUN_147a3a88c((longlong *)(param_1 + 0x40),iVar3);
    lVar4 = *(longlong *)(param_1 + 0x40);
  }
  memmove((void *)(lVar4 + lVar5 + 0x14),(void *)(lVar4 + lVar5),
          (ulonglong)(uint)(iVar3 - param_2) * 0x14);
  lVar4 = *(longlong *)(param_1 + 0x40);
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  *puVar2 = CONCAT44(uStack_54,local_58);
  puVar2[1] = CONCAT44(uStack_4c,uStack_50);
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = local_48;
  lVar4 = *(longlong *)(param_1 + 0x70);
  local_48 = *(undefined4 *)(lVar4 + 0x10 + lVar5);
  puVar1 = (undefined4 *)(lVar4 + lVar5);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  iVar3 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
    FUN_147a3a88c((longlong *)(param_1 + 0x70),iVar3);
    lVar4 = *(longlong *)(param_1 + 0x70);
  }
  memmove((void *)(lVar4 + lVar5 + 0x14),(void *)(lVar4 + lVar5),
          (ulonglong)(uint)(iVar3 - param_2) * 0x14);
  lVar4 = *(longlong *)(param_1 + 0x70);
  puVar1 = (undefined4 *)(lVar4 + lVar5);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = local_48;
  if (param_2 + 1 < *(int *)(param_1 + 0x30)) {
    lVar5 = (longlong)(param_2 + 1);
    lVar4 = lVar5 * 0x14;
    do {
      *(float *)(*(longlong *)(param_1 + 0x28) + lVar4) =
           *(float *)(*(longlong *)(param_1 + 0x28) + lVar4) + 1.0;
      *(float *)(*(longlong *)(param_1 + 0x58) + lVar4) =
           *(float *)(*(longlong *)(param_1 + 0x58) + lVar4) + 1.0;
      *(float *)(*(longlong *)(param_1 + 0x40) + lVar4) =
           *(float *)(*(longlong *)(param_1 + 0x40) + lVar4) + 1.0;
      *(float *)(*(longlong *)(param_1 + 0x70) + lVar4) =
           *(float *)(*(longlong *)(param_1 + 0x70) + lVar4) + 1.0;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x14;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484087e4 FUN_1484087e4 body=172 status=ok
// SIG undefined FUN_1484087e4(void)

void FUN_1484087e4(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_140720906();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = (longlong)param_3 * 0x14;
      lVar1 = (longlong)param_4 * 0x14;
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4 + lVar1) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 4 + lVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 4 + lVar1) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 4 + lVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4 + lVar1) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 4 + lVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4 + lVar1) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4 + lVar2);
    }
  }
  return;
}



// FUNCTION 1484088b4 FUN_1484088b4 body=81 status=ok
// SIG undefined FUN_1484088b4(void)

void FUN_1484088b4(longlong param_1,longlong param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0x78);
  if (cVar1 == '\0') {
    fVar3 = -3.4028235e+38;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x78);
    fVar3 = (float)*(double *)(lVar2 + 0x270);
  }
  *param_3 = fVar3;
  return;
}



// FUNCTION 148408924 FUN_148408924 body=91 status=ok
// SIG undefined FUN_148408924(void)

void FUN_148408924(longlong param_1,longlong param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0x78);
  if (cVar1 == '\0') {
    fVar3 = -3.4028235e+38;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x78);
    fVar3 = (float)*(double *)(lVar2 + 0x270);
  }
  *param_3 = fVar3 + *(float *)(param_1 + 0x98);
  return;
}



// FUNCTION 148408a02 FUN_148408a02 body=39 status=ok
// SIG undefined FUN_148408a02(void)

void FUN_148408a02(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1402446bc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148408a94 FUN_148408a94 body=228 status=ok
// SIG undefined FUN_148408a94(void)

void FUN_148408a94(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148408b7a FUN_148408b7a body=156 status=ok
// SIG undefined FUN_148408b7a(void)

void FUN_148408b7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148408c18(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148408c18 FUN_148408c18 body=200 status=ok
// SIG undefined FUN_148408c18(void)

void FUN_148408c18(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_144a126be();
  if (lVar2 != 0) {
    fVar4 = 0.0;
    if (0.0 <= param_2) {
      fVar4 = param_2;
    }
    if ((*(float *)(param_1 + 0x98) != fVar4) || (NAN(*(float *)(param_1 + 0x98)) || NAN(fVar4))) {
      *(float *)(param_1 + 0x98) = fVar4;
      FUN_148408d4e(param_1);
      cVar1 = FUN_144729dda(param_1 + 0x78);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x78);
        (**(code **)(*plVar3 + 0xa50))(plVar3,param_2);
      }
      local_38 = &local_48;
      local_40 = FUN_143b4b3ba;
      local_48 = param_1;
      FUN_1407028fe(param_1 + 200);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148408cfa FUN_148408cfa body=82 status=ok
// SIG undefined FUN_148408cfa(void)

void FUN_148408cfa(longlong param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_143b4b3d2;
  FUN_1407028fe(param_1 + 200);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148408d4e FUN_148408d4e body=302 status=ok
// SIG undefined FUN_148408d4e(void)

void FUN_148408d4e(void)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0 [2];
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  undefined8 local_50;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = FUN_144a126be();
  if (lVar1 != 0) {
    local_b0 = FUN_1402445d6();
    if (local_b0 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_b0);
    }
    local_c0[0] = 5;
    local_b8 = lVar1;
    if ((local_b0 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(local_b0);
    }
    FUN_1402444a4(local_80,local_c0);
    if (local_5c == '\0') {
      do {
        local_98 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        uStack_90 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        local_a8 = (undefined4)DAT_14c8463f0;
        uStack_a4 = DAT_14c8463f0._4_4_;
        uStack_a0 = (undefined4)DAT_14c8463f8;
        uStack_9c = DAT_14c8463f8._4_4_;
        local_88 = 0;
        FUN_140aab646(local_50,0xffffffff,&local_a8);
        FUN_140244da6(local_80);
      } while (local_5c == '\0');
    }
    if ((local_28 & 1) != 0) {
      FUN_14024445c(local_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148408ecc FUN_148408ecc body=148 status=ok
// SIG undefined FUN_148408ecc(void)

void FUN_148408ecc(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  if (lVar3 == 0) {
    dVar6 = 1.0;
    dVar5 = 1.0;
    pdVar4 = (double *)&DAT_14c8464e0;
  }
  else {
    dVar6 = *(double *)(lVar3 + 0x280);
    dVar5 = *(double *)(lVar3 + 0x288);
    pdVar4 = (double *)(lVar3 + 0x260);
  }
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  dVar5 = dVar5 * *(double *)(param_1 + 0x3d0) * 0.5;
  dVar6 = *(double *)(param_1 + 0x3c8) * dVar6 * 0.5;
  *param_2 = dVar1 - dVar6;
  param_2[1] = dVar2 - dVar5;
  param_2[2] = dVar1 + dVar6;
  param_2[3] = dVar2 + dVar5;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}



// FUNCTION 148408f60 FUN_148408f60 body=2022 status=ok
// SIG undefined FUN_148408f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_148408f60(undefined8 *param_1,uint *param_2,double *param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_11d8 [32];
  undefined8 *local_11b8;
  longlong local_11b0;
  longlong *local_11a8;
  uint *local_11a0;
  longlong *local_1198;
  longlong local_1190;
  longlong *local_1188;
  undefined8 local_1180;
  uint *local_1178;
  undefined8 local_1170;
  uint local_1168;
  undefined4 local_1164;
  undefined4 local_115c;
  longlong local_1158;
  longlong *local_1150;
  undefined4 *local_1148;
  undefined1 local_113c [4];
  undefined8 local_1138;
  uint *local_1130;
  undefined1 *local_1128;
  uint local_1120;
  undefined4 local_111c;
  uint local_1118 [14];
  byte local_10e0;
  undefined1 local_902 [2];
  uint *local_900;
  undefined8 local_8f8;
  uint *local_8f0;
  undefined8 local_8e8;
  uint local_8e0;
  undefined4 local_8dc;
  longlong local_8d0;
  char local_8a8;
  undefined1 local_ca [2];
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x148408f76;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_11d8;
  if (param_2 == (uint *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    FUN_1446f8bcc(param_1 + 3,0);
    goto LAB_148408fc8;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_1178 = (uint *)FUN_1402445d6();
  if (local_1178 != (uint *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_1178);
  }
  local_1188 = (longlong *)CONCAT44(local_1188._4_4_,1);
  local_1180 = param_2;
  if ((local_1178 != (uint *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(local_1178);
  }
  FUN_1402444a4(&local_900,&local_1188);
  local_1138 = (uint *)((ulonglong)local_1138._4_4_ << 0x20);
  local_10e0 = 0;
  if ((char)local_8dc == '\0') {
    local_11b8 = param_1;
    local_11b0 = param_4;
    do {
      local_1158 = local_8d0;
      lVar1 = *(longlong *)(local_8d0 + 0x1c8);
      pdVar9 = (double *)(lVar1 + 0x260);
      if (lVar1 == 0) {
        pdVar9 = (double *)&DAT_14c8464e0;
        dVar14 = 1.0;
        dVar13 = 1.0;
      }
      else {
        dVar14 = *(double *)(lVar1 + 0x280);
        dVar13 = *(double *)(lVar1 + 0x288);
      }
      dVar14 = *(double *)(local_8d0 + 0x3c8) * dVar14 * 0.5;
      if ((((*param_3 <= *pdVar9 + dVar14) &&
           (dVar14 = *pdVar9 - dVar14, dVar14 < param_3[2] || dVar14 == param_3[2])) &&
          (dVar14 = dVar13 * *(double *)(local_8d0 + 0x3d0) * 0.5, param_3[1] <= pdVar9[1] + dVar14)
          ) && (dVar14 = pdVar9[1] - dVar14, dVar14 < param_3[3] || dVar14 == param_3[3])) {
        local_115c = *(undefined4 *)(local_8d0 + 0x400);
        local_1150 = &local_1158;
        local_1148 = &local_115c;
        FUN_14840a99a(&local_c8,local_113c,&local_1150);
      }
      FUN_140244da6(&local_900);
      param_4 = local_11b0;
      param_1 = local_11b8;
    } while ((char)local_8dc == '\0');
    if ((local_10e0 & 1) != 0) {
      FUN_14024445c(&local_1130);
    }
  }
  if (local_8a8 == '\x01') {
    FUN_14024445c(&local_8f8);
  }
  if ((int)uStack_c0 == local_94) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    FUN_1446f8bcc(param_1 + 3,0);
  }
  else {
    if ((1 < (int)uStack_c0 - local_94) && (*(longlong *)(param_4 + 8) != 0)) {
      local_1198 = param_1 + 3;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      local_11b0 = param_4;
      FUN_1446f8bcc(local_1198,0);
      local_900 = &local_8e0;
      local_8e8 = (undefined1 *)((ulonglong)local_8e8 & 0xffffffffffffff00);
      local_8f0 = (uint *)local_ca;
      local_8f8 = local_900;
      thunk_FUN_140007958(param_4 + 8,&local_900);
      puVar3 = local_8f8;
      local_11a0 = local_900;
      local_1138 = (uint *)&DAT_100000000;
      local_1128 = &DAT_ffffffff;
      local_1120 = 0;
      iVar11 = 0;
      local_1130 = local_b8;
      if (local_a0 != 0) {
        FUN_1449c0562(&local_1138);
        iVar11 = local_a0;
      }
      local_11a8 = param_1 + 1;
      local_1170 = local_1128;
      puVar4 = local_1170;
      local_1168 = local_1120;
      local_1164 = local_111c;
      local_1180 = local_1138;
      local_1178 = local_1130;
      local_1170._4_4_ = (int)((ulonglong)local_1128 >> 0x20);
      local_11b8 = param_1;
      local_1188 = &local_c8;
      if ((local_1170._4_4_ != iVar11) || (local_1130 != local_b8)) {
        iVar10 = (int)((ulonglong)((longlong)puVar3 - (longlong)local_11a0) >> 1);
        local_1190 = (longlong)iVar10;
        iVar5 = -0x80000000;
        iVar6 = local_1170._4_4_;
        local_1170 = puVar4;
        do {
          if ((*local_11a8 == 0) || (iVar5 < *(int *)(*local_1188 + 0x28 + (longlong)iVar6 * 0x38)))
          {
            puVar12 = (undefined8 *)(*local_1188 + (longlong)iVar6 * 0x38);
            local_1120 = local_1120 & 0xffffff00;
            local_1138 = local_1118;
            local_1128 = local_902;
            local_1130 = local_1138;
            thunk_FUN_140007958(puVar12 + 1,&local_1138);
            iVar6 = (int)((ulonglong)((longlong)local_1130 - (longlong)local_1138) >> 1);
            if (iVar10 < iVar6) {
              iVar6 = iVar10;
            }
            iVar8 = 0;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            if ((iVar8 == iVar10) &&
               (((iVar10 == 0 || (iVar6 < 1)) ||
                (iVar6 = FUN_144a54874(local_11a0,local_1138,local_1190), iVar6 == 0)))) {
              *local_11b8 = *puVar12;
              lVar1 = puVar12[2];
              *local_11a8 = puVar12[1];
              local_11a8[1] = lVar1;
              FUN_144a787a6(local_1198,puVar12 + 3);
              iVar5 = *(int *)(puVar12 + 5);
            }
            if ((char)local_1120 == '\x01') {
              FUN_1400020a8(local_1138);
            }
          }
          local_1170 = (undefined1 *)CONCAT44(local_1170._4_4_,(uint)local_1170 & ~local_1180._4_4_)
          ;
          FUN_1449c0562(&local_1180);
          iVar6 = local_1170._4_4_;
          puVar4 = local_1170;
        } while (local_1188 != &local_c8 || (local_1178 != local_b8 || local_1170._4_4_ != iVar11));
      }
      local_1170 = puVar4;
      lVar1 = *local_11a8;
      if ((char)local_8e8 == '\x01') {
        FUN_1400020a8(local_900);
      }
      param_4 = local_11b0;
      param_1 = local_11b8;
      if (lVar1 != 0) goto LAB_14840912b;
      if (*local_1198 != 0) {
        FUN_1400020a8();
      }
    }
    local_1138 = (uint *)&DAT_100000000;
    local_1128 = &DAT_ffffffff;
    local_1120 = 0;
    iVar11 = 0;
    local_1130 = local_b8;
    if (local_a0 != 0) {
      FUN_1449c0562(&local_1138);
      iVar11 = local_a0;
    }
    local_8e8 = local_1128;
    puVar4 = local_8e8;
    local_8e0 = local_1120;
    local_8dc = local_111c;
    local_8f8 = local_1138;
    local_8f0 = local_1130;
    local_8e8._4_4_ = (int)((ulonglong)local_1128 >> 0x20);
    local_900 = (uint *)&local_c8;
    local_8e8 = puVar4;
    if ((local_8e8._4_4_ == iVar11) && (local_1130 == local_b8)) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)0x0;
      iVar5 = local_8e8._4_4_;
      do {
        puVar7 = (undefined8 *)((longlong)iVar5 * 0x38 + *(longlong *)local_900);
        if ((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 5) < *(int *)(puVar7 + 5))) {
          puVar12 = puVar7;
        }
        local_8e8 = (undefined1 *)CONCAT44(local_8e8._4_4_,(uint)local_8e8 & ~local_8f8._4_4_);
        FUN_1449c0562(&local_8f8);
        iVar5 = local_8e8._4_4_;
      } while (local_900 != (uint *)&local_c8 ||
               (local_8f0 != local_b8 || local_8e8._4_4_ != iVar11));
    }
    *param_1 = *puVar12;
    uVar2 = puVar12[2];
    param_1[1] = puVar12[1];
    param_1[2] = uVar2;
    param_1[3] = 0;
    iVar11 = *(int *)(puVar12 + 4);
    _Src = (void *)puVar12[3];
    *(int *)(param_1 + 4) = iVar11;
    if ((longlong)iVar11 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar11,0);
      memcpy((void *)param_1[3],_Src,(longlong)iVar11 * 2);
    }
  }
LAB_14840912b:
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_14840a110(&local_c8);
LAB_148408fc8:
  if (*(longlong *)(param_4 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_11d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148409748 FUN_148409748 body=276 status=ok
// SIG undefined FUN_148409748(void)

undefined4 * FUN_148409748(undefined4 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined1 local_110 [88];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_145c422f6(local_110);
  FUN_145c4230c(local_110,local_30,(longlong)local_28);
  FUN_1414fe9a8(local_110,&local_128);
  local_124 = local_124 | 0x80000000;
  *param_1 = local_128;
  param_1[1] = local_124;
  *(undefined8 *)(param_1 + 2) = local_120;
  FUN_145c422f4(local_110);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840985e FUN_14840985e body=66 status=ok
// SIG undefined FUN_14840985e(void)

undefined1 FUN_14840985e(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cb49988;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined1 *)(lVar1 + uVar3);
}



// FUNCTION 1484098f0 FUN_1484098f0 body=66 status=ok
// SIG undefined FUN_1484098f0(void)

void FUN_1484098f0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar1 + 1U) {
    FUN_14738ac8a(param_2,iVar1);
  }
  *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = 0x1000040000;
  return;
}



// FUNCTION 14840993a FUN_14840993a body=284 status=ok
// SIG undefined FUN_14840993a(void)

void FUN_14840993a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [56];
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    local_c0 = FUN_1402445d6();
    if (local_c0 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_c0);
    }
    local_d0[0] = 5;
    local_c8 = param_2;
    if ((local_c0 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(local_c0);
    }
    FUN_1402444a4(local_80,local_d0);
    if (local_5c == '\0') {
      do {
        lVar1 = local_50;
        *(undefined8 *)(local_50 + 0x398) = 0;
        FUN_1401e2262(local_50,local_b8);
        *(undefined1 *)(lVar1 + 0x420) = 1;
        FUN_140244da6(local_80);
      } while (local_5c == '\0');
    }
    if ((local_28 & 1) != 0) {
      FUN_14024445c(local_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148409a68 FUN_148409a68 body=97 status=ok
// SIG undefined FUN_148409a68(void)

undefined8 FUN_148409a68(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148409ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148409ae4 FUN_148409ae4 body=156 status=ok
// SIG undefined FUN_148409ae4(void)

void FUN_148409ae4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148409b82(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148409b82 FUN_148409b82 body=303 status=ok
// SIG undefined FUN_148409b82(void)

void FUN_148409b82(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb49ef8) {
    FUN_144b3d300(&DAT_14cb49ef8);
    if (DAT_14cb49ef8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb49ef0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.Water.WaterMesh.gbxDisableWaterFarMesh",1);
      _Init_thread_footer(&DAT_14cb49ef8);
    }
  }
  if (DAT_14cb49ef0 != (longlong *)0x0) {
    cVar2 = (**(code **)(*DAT_14cb49ef0 + 0xa8))();
    if (cVar2 != '\0') goto LAB_148409c2d;
  }
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x658) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(lVar1 + 0x658) = param_2;
    local_38 = (undefined4)DAT_14c8463f0;
    uStack_34 = DAT_14c8463f0._4_4_;
    uStack_30 = (undefined4)DAT_14c8463f8;
    uStack_2c = DAT_14c8463f8._4_4_;
    local_48 = (undefined4)DAT_14c8463f0;
    uStack_44 = DAT_14c8463f0._4_4_;
    uStack_40 = (undefined4)DAT_14c8463f8;
    uStack_3c = DAT_14c8463f8._4_4_;
    local_28 = 0;
    FUN_140aab646(param_1,4);
  }
LAB_148409c2d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148409cce FUN_148409cce body=164 status=ok
// SIG undefined FUN_148409cce(void)

void FUN_148409cce(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.WaterInfo.RenderMethod",1);
  lVar1 = DAT_14cb49ee8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  uVar5 = DAT_14c763020;
  if (*(int *)(lVar1 + uVar4 * 4) == 0) {
    DAT_14c763020 = (**(code **)(*plVar3 + 0xb0))(plVar3);
    uVar5 = 2;
  }
  FUN_140635eb8(plVar3,uVar5,0xd000000,0);
  return;
}



// FUNCTION 148409d76 FUN_148409d76 body=45 status=ok
// SIG undefined FUN_148409d76(void)

longlong FUN_148409d76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148409da4 FUN_148409da4 body=48 status=ok
// SIG undefined FUN_148409da4(void)

longlong FUN_148409da4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148409dd4 FUN_148409dd4 body=48 status=ok
// SIG undefined FUN_148409dd4(void)

longlong FUN_148409dd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148409e04 FUN_148409e04 body=48 status=ok
// SIG undefined FUN_148409e04(void)

longlong FUN_148409e04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140c72176(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148409e34 FUN_148409e34 body=45 status=ok
// SIG undefined FUN_148409e34(void)

longlong FUN_148409e34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14592c098(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148409e66 FUN_148409e66 body=43 status=ok
// SIG undefined FUN_148409e66(void)

undefined8 FUN_148409e66(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x11,
                L"Pure virtual not implemented (%s)",L"UWaterWavesBase::GetMaxWaveHeight");
  return 0;
}



// FUNCTION 148409e92 FUN_148409e92 body=42 status=ok
// SIG undefined FUN_148409e92(void)

undefined8 FUN_148409e92(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x15,
                L"Pure virtual not implemented (%s)",L"UWaterWavesBase::GetWaterWaves");
  return 0;
}



// FUNCTION 148409ebc FUN_148409ebc body=42 status=ok
// SIG undefined FUN_148409ebc(void)

undefined8 FUN_148409ebc(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x14,
                L"Pure virtual not implemented (%s)",L"UWaterWavesBase::GetWaterWaves");
  return 0;
}



// FUNCTION 148409ee6 FUN_148409ee6 body=43 status=ok
// SIG undefined FUN_148409ee6(void)

undefined8 FUN_148409ee6(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x18,
                L"Pure virtual not implemented (%s)",L"UWaterWavesBase::GetWaveHeightAtPosition");
  return 0;
}



// FUNCTION 148409f12 FUN_148409f12 body=43 status=ok
// SIG undefined FUN_148409f12(void)

undefined8 FUN_148409f12(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x1b,
                L"Pure virtual not implemented (%s)",
                L"UWaterWavesBase::GetSimpleWaveHeightAtPosition");
  return 0;
}



// FUNCTION 148409f3e FUN_148409f3e body=43 status=ok
// SIG undefined FUN_148409f3e(void)

undefined8 FUN_148409f3e(void)

{
  FUN_140033559("..\\Plugins\\Experimental\\Water\\Source\\Runtime\\Public\\WaterWaves.h",0x1e,
                L"Pure virtual not implemented (%s)",L"UWaterWavesBase::GetWaveAttenuationFactor");
  return 0;
}



// FUNCTION 148409fc2 FUN_148409fc2 body=59 status=ok
// SIG undefined FUN_148409fc2(void)

undefined8 FUN_148409fc2(longlong *param_1)

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



// FUNCTION 14840a064 FUN_14840a064 body=29 status=ok
// SIG undefined FUN_14840a064(void)

undefined8 FUN_14840a064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840a0a6 FUN_14840a0a6 body=73 status=ok
// SIG undefined FUN_14840a0a6(void)

undefined8 * FUN_14840a0a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840a0f0 FUN_14840a0f0 body=32 status=ok
// SIG undefined FUN_14840a0f0(void)

undefined8 FUN_14840a0f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinderOptional");
  return param_2;
}



// FUNCTION 14840a110 FUN_14840a110 body=52 status=ok
// SIG undefined FUN_14840a110(void)

void FUN_14840a110(longlong *param_1)

{
  FUN_14840a144();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14840a144 FUN_14840a144 body=313 status=ok
// SIG undefined FUN_14840a144(void)

void FUN_14840a144(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 14840a27e FUN_14840a27e body=138 status=ok
// SIG undefined FUN_14840a27e(void)

code * FUN_14840a27e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRenderUnselected";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146028b3a;
}



// FUNCTION 14840a308 FUN_14840a308 body=138 status=ok
// SIG undefined FUN_14840a308(void)

code * FUN_14840a308(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDensities";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146028ab2;
}



// FUNCTION 14840a392 FUN_14840a392 body=138 status=ok
// SIG undefined FUN_14840a392(void)

code * FUN_14840a392(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumQuadsPerTileSide";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146028bc4;
}



// FUNCTION 14840a41c FUN_14840a41c body=138 status=ok
// SIG undefined FUN_14840a41c(void)

code * FUN_14840a41c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LeafSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840a4a6;
}



// FUNCTION 14840a4a6 FUN_14840a4a6 body=132 status=ok
// SIG undefined FUN_14840a4a6(void)

undefined1 * FUN_14840a4a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LODScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14840a52a;
}



// FUNCTION 14840a52d FUN_14840a52d body=60 status=ok
// SIG undefined FUN_14840a52d(void)

void FUN_14840a52d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14840a56a FUN_14840a56a body=31 status=ok
// SIG undefined FUN_14840a56a(void)

undefined8 FUN_14840a56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840a5a4 FUN_14840a5a4 body=29 status=ok
// SIG undefined FUN_14840a5a4(void)

bool FUN_14840a5a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14840a5c2 FUN_14840a5c2 body=26 status=ok
// SIG undefined FUN_14840a5c2(void)

bool FUN_14840a5c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


