// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147163462 FUN_147163462 body=138 status=ok
// SIG undefined FUN_147163462(void)

code * FUN_147163462(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndexNumBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000651;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471634ec;
}



// FUNCTION 1471634ec FUN_1471634ec body=138 status=ok
// SIG undefined FUN_1471634ec(void)

code * FUN_1471634ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000650;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163576;
}



// FUNCTION 147163576 FUN_147163576 body=138 status=ok
// SIG undefined FUN_147163576(void)

code * FUN_147163576(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000064f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163600;
}



// FUNCTION 147163600 FUN_147163600 body=138 status=ok
// SIG undefined FUN_147163600(void)

code * FUN_147163600(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridIndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000064e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716368a;
}



// FUNCTION 14716368a FUN_14716368a body=138 status=ok
// SIG undefined FUN_14716368a(void)

code * FUN_14716368a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCullGridObjectArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000064d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163714;
}



// FUNCTION 147163714 FUN_147163714 body=138 status=ok
// SIG undefined FUN_147163714(void)

code * FUN_147163714(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCullGridObjectHeader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000064c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716379e;
}



// FUNCTION 14716379e FUN_14716379e body=132 status=ok
// SIG undefined FUN_14716379e(void)

undefined1 * FUN_14716379e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCullGridAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4fdba;
}



// FUNCTION 147163822 FUN_147163822 body=138 status=ok
// SIG undefined FUN_147163822(void)

code * FUN_147163822(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectHeader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2180000068e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471638ac;
}



// FUNCTION 1471638ac FUN_1471638ac body=138 status=ok
// SIG undefined FUN_1471638ac(void)

code * FUN_1471638ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2100000068d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dda40c;
}



// FUNCTION 147163936 FUN_147163936 body=138 status=ok
// SIG undefined FUN_147163936(void)

code * FUN_147163936(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000067c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471639c0;
}



// FUNCTION 1471639c0 FUN_1471639c0 body=138 status=ok
// SIG undefined FUN_1471639c0(void)

code * FUN_1471639c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableClipmapOffsetZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc0000067b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dda62c;
}



// FUNCTION 147163a4a FUN_147163a4a body=138 status=ok
// SIG undefined FUN_147163a4a(void)

code * FUN_147163a4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToPageTranslatedWorldCenterBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000677;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163ad4;
}



// FUNCTION 147163ad4 FUN_147163ad4 body=138 status=ok
// SIG undefined FUN_147163ad4(void)

code * FUN_147163ad4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToPageTranslatedWorldCenterScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000676;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163b5e;
}



// FUNCTION 147163b5e FUN_147163b5e body=138 status=ok
// SIG undefined FUN_147163b5e(void)

code * FUN_147163b5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToVoxelTranslatedCenterBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000675;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163be8;
}



// FUNCTION 147163be8 FUN_147163be8 body=138 status=ok
// SIG undefined FUN_147163be8(void)

code * FUN_147163be8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToVoxelTranslatedCenterScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000674;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163c72;
}



// FUNCTION 147163c72 FUN_147163c72 body=138 status=ok
// SIG undefined FUN_147163c72(void)

code * FUN_147163c72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000673;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163cfc;
}



// FUNCTION 147163cfc FUN_147163cfc body=138 status=ok
// SIG undefined FUN_147163cfc(void)

code * FUN_147163cfc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000672;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163d86;
}



// FUNCTION 147163d86 FUN_147163d86 body=138 status=ok
// SIG undefined FUN_147163d86(void)

code * FUN_147163d86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvPageGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000671;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163e10;
}



// FUNCTION 147163e10 FUN_147163e10 body=138 status=ok
// SIG undefined FUN_147163e10(void)

code * FUN_147163e10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldInvPageAtlasSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000670;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dda6b6;
}



// FUNCTION 147163e9a FUN_147163e9a body=138 status=ok
// SIG undefined FUN_147163e9a(void)

code * FUN_147163e9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InfluenceRadiusSq";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000066e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163f24;
}



// FUNCTION 147163f24 FUN_147163f24 body=138 status=ok
// SIG undefined FUN_147163f24(void)

code * FUN_147163f24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InfluenceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000066d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163fae;
}



// FUNCTION 147163fae FUN_147163fae body=132 status=ok
// SIG undefined FUN_147163fae(void)

undefined1 * FUN_147163fae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapVoxelExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x66c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147164032;
}



// FUNCTION 147164036 FUN_147164036 body=138 status=ok
// SIG undefined FUN_147164036(void)

code * FUN_147164036(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000688;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471640c0;
}



// FUNCTION 1471640c0 FUN_1471640c0 body=138 status=ok
// SIG undefined FUN_1471640c0(void)

code * FUN_1471640c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000687;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716414a;
}



// FUNCTION 14716414a FUN_14716414a body=132 status=ok
// SIG undefined FUN_14716414a(void)

undefined1 * FUN_14716414a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageObjectGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x686;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471641ce;
}



// FUNCTION 1471641d2 FUN_1471641d2 body=138 status=ok
// SIG undefined FUN_1471641d2(void)

code * FUN_1471641d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWGbxGIMesh_PageTableCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x230000006c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c492a;
}



// FUNCTION 14716425c FUN_14716425c body=138 status=ok
// SIG undefined FUN_14716425c(void)

code * FUN_14716425c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000006bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471642e6;
}



// FUNCTION 1471642e6 FUN_1471642e6 body=138 status=ok
// SIG undefined FUN_1471642e6(void)

code * FUN_1471642e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectHeader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000006bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164370;
}



// FUNCTION 147164370 FUN_147164370 body=138 status=ok
// SIG undefined FUN_147164370(void)

code * FUN_147164370(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParentPageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000006bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5018e;
}



// FUNCTION 1471643fa FUN_1471643fa body=138 status=ok
// SIG undefined FUN_1471643fa(void)

code * FUN_1471643fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldMarkedPageBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000006b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e50104;
}



// FUNCTION 147164484 FUN_147164484 body=138 status=ok
// SIG undefined FUN_147164484(void)

code * FUN_147164484(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeIndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000006b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716450e;
}



// FUNCTION 14716450e FUN_14716450e body=138 status=ok
// SIG undefined FUN_14716450e(void)

code * FUN_14716450e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCoverageAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164598;
}



// FUNCTION 147164598 FUN_147164598 body=132 status=ok
// SIG undefined FUN_147164598(void)

undefined1 * FUN_147164598(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e50100;
}



// FUNCTION 14716461c FUN_14716461c body=138 status=ok
// SIG undefined FUN_14716461c(void)

code * FUN_14716461c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWGbxGIMesh_PageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22800000728;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e47f50;
}



// FUNCTION 1471646a6 FUN_1471646a6 body=138 status=ok
// SIG undefined FUN_1471646a6(void)

code * FUN_1471646a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000725;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e47ec8;
}



// FUNCTION 147164730 FUN_147164730 body=138 status=ok
// SIG undefined FUN_147164730(void)

code * FUN_147164730(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000721;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471647ba;
}



// FUNCTION 1471647ba FUN_1471647ba body=138 status=ok
// SIG undefined FUN_1471647ba(void)

code * FUN_1471647ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000720;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164844;
}



// FUNCTION 147164844 FUN_147164844 body=138 status=ok
// SIG undefined FUN_147164844(void)

code * FUN_147164844(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectHeader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000071f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471648ce;
}



// FUNCTION 1471648ce FUN_1471648ce body=138 status=ok
// SIG undefined FUN_1471648ce(void)

code * FUN_1471648ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapVolumeTranslatedWorldToUVAddAndMul";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000071e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164958;
}



// FUNCTION 147164958 FUN_147164958 body=138 status=ok
// SIG undefined FUN_147164958(void)

code * FUN_147164958(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToPageTranslatedWorldCenterBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000071d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471649e2;
}



// FUNCTION 1471649e2 FUN_1471649e2 body=138 status=ok
// SIG undefined FUN_1471649e2(void)

code * FUN_1471649e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageCoordToPageTranslatedWorldCenterScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000071c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164a6c;
}



// FUNCTION 147164a6c FUN_147164a6c body=138 status=ok
// SIG undefined FUN_147164a6c(void)

code * FUN_147164a6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapInfluenceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000071b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164af6;
}



// FUNCTION 147164af6 FUN_147164af6 body=138 status=ok
// SIG undefined FUN_147164af6(void)

code * FUN_147164af6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageWorldRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac0000071a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164b80;
}



// FUNCTION 147164b80 FUN_147164b80 body=138 status=ok
// SIG undefined FUN_147164b80(void)

code * FUN_147164b80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageWorldExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000719;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164c0a;
}



// FUNCTION 147164c0a FUN_147164c0a body=138 status=ok
// SIG undefined FUN_147164c0a(void)

code * FUN_147164c0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableClipmapOffsetZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000718;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164c94;
}



// FUNCTION 147164c94 FUN_147164c94 body=138 status=ok
// SIG undefined FUN_147164c94(void)

code * FUN_147164c94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldMaxPageNum";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c00000717;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164d1e;
}



// FUNCTION 147164d1e FUN_147164d1e body=138 status=ok
// SIG undefined FUN_147164d1e(void)

code * FUN_147164d1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000716;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164da8;
}



// FUNCTION 147164da8 FUN_147164da8 body=138 status=ok
// SIG undefined FUN_147164da8(void)

code * FUN_147164da8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvPageGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000715;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164e32;
}



// FUNCTION 147164e32 FUN_147164e32 body=138 status=ok
// SIG undefined FUN_147164e32(void)

code * FUN_147164e32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParentPageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000714;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164ebc;
}



// FUNCTION 147164ebc FUN_147164ebc body=138 status=ok
// SIG undefined FUN_147164ebc(void)

code * FUN_147164ebc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBuildObjectGridIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000713;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164f46;
}



// FUNCTION 147164f46 FUN_147164f46 body=138 status=ok
// SIG undefined FUN_147164f46(void)

code * FUN_147164f46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageComposeIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000712;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164fd0;
}



// FUNCTION 147164fd0 FUN_147164fd0 body=138 status=ok
// SIG undefined FUN_147164fd0(void)

code * FUN_147164fd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageComposeTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000711;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c4d0a;
}



// FUNCTION 14716505a FUN_14716505a body=138 status=ok
// SIG undefined FUN_14716505a(void)

code * FUN_14716505a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListReturnAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000070f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471650e4;
}



// FUNCTION 1471650e4 FUN_1471650e4 body=138 status=ok
// SIG undefined FUN_1471650e4(void)

code * FUN_1471650e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageFreeListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000070e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716516e;
}



// FUNCTION 14716516e FUN_14716516e body=138 status=ok
// SIG undefined FUN_14716516e(void)

code * FUN_14716516e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000070d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471651f8;
}



// FUNCTION 1471651f8 FUN_1471651f8 body=138 status=ok
// SIG undefined FUN_1471651f8(void)

code * FUN_1471651f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000070c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165282;
}



// FUNCTION 147165282 FUN_147165282 body=138 status=ok
// SIG undefined FUN_147165282(void)

code * FUN_147165282(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageTableCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000070b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716530c;
}



// FUNCTION 14716530c FUN_14716530c body=138 status=ok
// SIG undefined FUN_14716530c(void)

code * FUN_14716530c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MarkedHeightfieldPageBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000070a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165396;
}



// FUNCTION 147165396 FUN_147165396 body=138 status=ok
// SIG undefined FUN_147165396(void)

code * FUN_147165396(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageUpdateTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000709;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165420;
}



// FUNCTION 147165420 FUN_147165420 body=132 status=ok
// SIG undefined FUN_147165420(void)

undefined1 * FUN_147165420(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageUpdateIndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x708;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e47ec4;
}



// FUNCTION 1471654a4 FUN_1471654a4 body=138 status=ok
// SIG undefined FUN_1471654a4(void)

code * FUN_1471654a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000786;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c4ea2;
}



// FUNCTION 14716552e FUN_14716552e body=138 status=ok
// SIG undefined FUN_14716552e(void)

code * FUN_14716552e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWGbxGIMesh_MipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000007b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471655b8;
}



// FUNCTION 1471655b8 FUN_1471655b8 body=138 status=ok
// SIG undefined FUN_1471655b8(void)

code * FUN_1471655b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CoarseDistanceFieldValueBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000007b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c4fac;
}



// FUNCTION 147165642 FUN_147165642 body=138 status=ok
// SIG undefined FUN_147165642(void)

code * FUN_147165642(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapUVScrollOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000007b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471656cc;
}



// FUNCTION 1471656cc FUN_1471656cc body=138 status=ok
// SIG undefined FUN_1471656cc(void)

code * FUN_1471656cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapOffsetZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000007b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165756;
}



// FUNCTION 147165756 FUN_147165756 body=138 status=ok
// SIG undefined FUN_147165756(void)

code * FUN_147165756(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevClipmapOffsetZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000007b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471657e0;
}



// FUNCTION 1471657e0 FUN_1471657e0 body=138 status=ok
// SIG undefined FUN_1471657e0(void)

code * FUN_1471657e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000007b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716586a;
}



// FUNCTION 14716586a FUN_14716586a body=138 status=ok
// SIG undefined FUN_14716586a(void)

code * FUN_14716586a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OneOverClipmapMipResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000007af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f132fe;
}



// FUNCTION 1471658f4 FUN_1471658f4 body=138 status=ok
// SIG undefined FUN_1471658f4(void)

code * FUN_1471658f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldClipmapSizeInPages";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000007ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f131ea;
}



// FUNCTION 14716597e FUN_14716597e body=138 status=ok
// SIG undefined FUN_14716597e(void)

code * FUN_14716597e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000007ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165a08;
}



// FUNCTION 147165a08 FUN_147165a08 body=138 status=ok
// SIG undefined FUN_147165a08(void)

code * FUN_147165a08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000007aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165a92;
}



// FUNCTION 147165a92 FUN_147165a92 body=138 status=ok
// SIG undefined FUN_147165a92(void)

code * FUN_147165a92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000007a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165b1c;
}



// FUNCTION 147165b1c FUN_147165b1c body=138 status=ok
// SIG undefined FUN_147165b1c(void)

code * FUN_147165b1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevMipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000007a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165ba6;
}



// FUNCTION 147165ba6 FUN_147165ba6 body=132 status=ok
// SIG undefined FUN_147165ba6(void)

undefined1 * FUN_147165ba6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWMipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147165c2a;
}



// FUNCTION 147165c2e FUN_147165c2e body=138 status=ok
// SIG undefined FUN_147165c2e(void)

code * FUN_147165c2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapSizeInPages";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000007f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165cb8;
}



// FUNCTION 147165cb8 FUN_147165cb8 body=138 status=ok
// SIG undefined FUN_147165cb8(void)

code * FUN_147165cb8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000007f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c5144;
}



// FUNCTION 147165d4a FUN_147165d4a body=67 status=ok
// SIG undefined FUN_147165d4a(void)

undefined8 * FUN_147165d4a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a217cb0;
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147165d98 FUN_147165d98 body=99 status=ok
// SIG undefined FUN_147165d98(void)

void FUN_147165d98(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x18) = param_2;
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (param_2 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147165df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147165e28 FUN_147165e28 body=205 status=ok
// SIG undefined FUN_147165e28(void)

void FUN_147165e28(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000038;
  
  lVar1 = *(longlong *)(param_1 + 0x10) + 0x37a0;
  if (in_stack_00000038 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x3a40;
  }
  FUN_14797cb3e(lVar1);
  return;
}



// FUNCTION 147165ef6 FUN_147165ef6 body=113 status=ok
// SIG undefined FUN_147165ef6(void)

void FUN_147165ef6(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = *(longlong *)(param_1 + 0x10) + 0x37a0;
  if (in_stack_00000028 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x3a40;
  }
  FUN_14095857a(lVar1);
  return;
}



// FUNCTION 147165f68 FUN_147165f68 body=113 status=ok
// SIG undefined FUN_147165f68(void)

void FUN_147165f68(longlong param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = *(longlong *)(param_1 + 0x10) + 0x37a0;
  if (in_stack_00000028 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10) + 0x3a40;
  }
  FUN_14797c64a(lVar1);
  return;
}



// FUNCTION 147165fda FUN_147165fda body=144 status=ok
// SIG undefined FUN_147165fda(void)

void FUN_147165fda(longlong param_1,double param_2,undefined8 param_3,float param_4,char param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (1.0 < *(double *)(lVar1 + 0x8a8) || *(double *)(lVar1 + 0x8a8) == 1.0) {
    fVar4 = (float)*(double *)(*(longlong *)(param_1 + 8) + 0x830);
    param_2 = *(double *)(*(longlong *)(param_1 + 8) + 0x858);
    if (param_2 <= (double)fVar4) {
      fVar4 = (float)param_2;
    }
    param_4 = param_4 / fVar4;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18);
  }
  lVar3 = lVar1 + 0x37a0;
  if (param_5 != '\0') {
    lVar3 = lVar1 + 0x3a40;
  }
  FUN_14797c942(lVar3,param_2,param_4,param_3,uVar2);
  return;
}



// FUNCTION 14716606a FUN_14716606a body=93 status=ok
// SIG undefined FUN_14716606a(void)

void FUN_14716606a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x3d08);
  *(uint *)(lVar2 + 0x3d08) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x3d0c) < iVar1 + 1U) {
    FUN_14716616c((longlong *)(lVar2 + 0x3d00),iVar1);
  }
  puVar3 = (undefined8 *)param_1[1];
  *(undefined8 **)(*(longlong *)(lVar2 + 0x3d00) + (longlong)iVar1 * 8) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0001471660b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,param_2);
  return;
}



// FUNCTION 1471660d8 FUN_1471660d8 body=12 status=ok
// SIG undefined FUN_1471660d8(void)

void FUN_1471660d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001471660e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1471660e4 FUN_1471660e4 body=29 status=ok
// SIG undefined FUN_1471660e4(void)

undefined8 FUN_1471660e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166102 FUN_147166102 body=105 status=ok
// SIG undefined FUN_147166102(void)

void FUN_147166102(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14716606a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14716606a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147166161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14716616c FUN_14716616c body=93 status=ok
// SIG undefined FUN_14716616c(void)

void FUN_14716616c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142c1f1fa();
  return;
}



// FUNCTION 1471661ca FUN_1471661ca body=216 status=ok
// SIG undefined FUN_1471661ca(void)

void FUN_1471661ca(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  cVar1 = *(char *)(*(longlong *)(lVar5 + 0xb8) + 0x128);
  uVar6 = (undefined4)param_1[2];
  cVar3 = FUN_144a798df(DAT_14ca85550,uVar6);
  if (((-1 < cVar1) && (cVar3 != '\0')) && (0 < *(int *)(lVar5 + 0xb0))) {
    lVar7 = 0xa4;
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + 0xa8);
      if (*(longlong *)(lVar5 + 0xa8) == 0) {
        lVar4 = lVar5;
      }
      lVar2 = *(longlong *)(lVar4 + -0x9c + lVar7);
      if (lVar2 != 0) {
        lVar5 = lVar4 + lVar7;
        *(uint *)(lVar5 + -0x50) = (*(uint *)(lVar5 + -0x50) & 0xfffffff8) + 1;
        (*(code *)**(undefined8 **)param_1[1])
                  ((undefined8 *)param_1[1],*(undefined8 *)(lVar5 + -0xc),
                   *(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar5 + -0x44),lVar5 + -4,
                   lVar4 + lVar7);
        lVar5 = *param_1;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (lVar8 < *(int *)(lVar5 + 0xb0));
    uVar6 = (undefined4)param_1[2];
  }
  FUN_1417e138e(*(undefined8 *)(lVar5 + 0xc0),uVar6);
  return;
}



// FUNCTION 1471662b2 FUN_1471662b2 body=12 status=ok
// SIG undefined FUN_1471662b2(void)

void FUN_1471662b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001471662bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1471662be FUN_1471662be body=29 status=ok
// SIG undefined FUN_1471662be(void)

undefined8 FUN_1471662be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471662dc FUN_1471662dc body=105 status=ok
// SIG undefined FUN_1471662dc(void)

void FUN_1471662dc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1471661ca(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1471661ca(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014716633b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147166345 FUN_147166345 body=597 status=ok
// SIG undefined FUN_147166345(void)

void FUN_147166345(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  longlong *plVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar8 = &local_348;
    do {
      pfVar3 = (float *)*plVar8;
      pfVar9 = (float *)plVar8[1];
      iVar11 = (int)plVar8[2];
      uVar5 = (int)((ulonglong)((longlong)pfVar9 - (longlong)pfVar3) >> 2) + 1;
      pfVar7 = pfVar9;
      pfVar12 = pfVar3;
      if (iVar11 != 0) {
LAB_14716640c:
        if (8 < (int)uVar5) {
          fVar15 = pfVar3[uVar5 >> 1];
          pfVar3[uVar5 >> 1] = *pfVar3;
          *pfVar3 = fVar15;
          pfVar6 = pfVar9 + 1;
          pfVar4 = pfVar3;
          do {
            pfVar1 = pfVar4 + 1;
            pfVar10 = pfVar4 + 1;
            do {
              pfVar13 = pfVar10;
              pfVar4 = pfVar1;
              if (pfVar9 < pfVar4) break;
              pfVar1 = pfVar4 + 1;
              pfVar10 = pfVar13 + 1;
            } while (*pfVar4 < *pfVar3 || *pfVar4 == *pfVar3);
            pfVar1 = pfVar6 + -2;
            do {
              pfVar10 = pfVar6;
              pfVar14 = pfVar1;
              pfVar6 = pfVar10 + -1;
              if (pfVar6 <= pfVar3) break;
              pfVar1 = pfVar14 + -1;
            } while (*pfVar3 < *pfVar6 || *pfVar3 == *pfVar6);
            if (pfVar6 < pfVar4) goto LAB_147166494;
            fVar15 = *pfVar4;
            *pfVar4 = *pfVar6;
            *pfVar6 = fVar15;
          } while( true );
        }
        if (pfVar3 < pfVar9) {
          do {
            pfVar7 = pfVar3;
            if (pfVar3 + 1 <= pfVar9) {
              fVar15 = *pfVar3;
              pfVar12 = pfVar3 + 1;
              do {
                fVar2 = *pfVar12;
                pfVar6 = pfVar12;
                if (*pfVar12 <= fVar15) {
                  fVar2 = fVar15;
                  pfVar6 = pfVar7;
                }
                pfVar7 = pfVar6;
                fVar15 = fVar2;
                pfVar12 = pfVar12 + 1;
              } while (pfVar12 <= pfVar9);
            }
            fVar15 = *pfVar7;
            *pfVar7 = *pfVar9;
            *pfVar9 = fVar15;
            pfVar9 = pfVar9 + -1;
          } while (pfVar3 < pfVar9);
        }
        goto LAB_147166576;
      }
LAB_14716658b:
      FUN_14716659b(pfVar3,uVar5,pfVar9,param_4);
LAB_147166576:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147166494:
  fVar15 = *pfVar3;
  *pfVar3 = *pfVar6;
  *pfVar6 = fVar15;
  iVar11 = iVar11 + -1;
  pfVar10 = pfVar10 + -2;
  if ((longlong)pfVar14 - (longlong)pfVar12 < (longlong)pfVar7 - (longlong)pfVar13) {
    if (pfVar4 < pfVar9) {
      *plVar8 = (longlong)pfVar4;
      plVar8[1] = (longlong)pfVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    pfVar13 = pfVar3;
    if (pfVar6 <= pfVar3 + 1) goto LAB_147166576;
  }
  else {
    if (pfVar3 + 1 < pfVar6) {
      *plVar8 = (longlong)pfVar3;
      plVar8[1] = (longlong)pfVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    pfVar3 = pfVar4;
    pfVar10 = pfVar9;
    pfVar14 = pfVar9;
    if (pfVar9 <= pfVar4) goto LAB_147166576;
  }
  uVar5 = (int)((ulonglong)((longlong)pfVar14 - (longlong)pfVar13) >> 2) + 1;
  pfVar9 = pfVar10;
  pfVar7 = pfVar14;
  pfVar12 = pfVar13;
  if (iVar11 == 0) goto LAB_14716658b;
  goto LAB_14716640c;
}



// FUNCTION 14716659b FUN_14716659b body=318 status=ok
// SIG undefined FUN_14716659b(void)

void FUN_14716659b(undefined4 *param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
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
joined_r0x0001471665bc:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((float)param_1[iVar6] < (float)param_1[iVar7] ||
            (float)param_1[iVar6] == (float)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        fVar1 = (float)param_1[iVar3];
        if (fVar1 < (float)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = fVar1;
          iVar3 = iVar6;
          goto joined_r0x0001471665bc;
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
               ((float)param_1[iVar6] < (float)param_1[iVar3] ||
                (float)param_1[iVar6] == (float)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            fVar1 = (float)param_1[iVar8];
            if ((float)param_1[iVar7] <= fVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = fVar1;
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



// FUNCTION 1471666da FUN_1471666da body=62 status=ok
// SIG undefined FUN_1471666da(void)

void FUN_1471666da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147166718(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147166718 FUN_147166718 body=93 status=ok
// SIG undefined FUN_147166718(void)

ulonglong FUN_147166718(uint param_1,uint param_2)

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



// FUNCTION 147166776 FUN_147166776 body=29 status=ok
// SIG undefined FUN_147166776(void)

undefined8 FUN_147166776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166794 FUN_147166794 body=29 status=ok
// SIG undefined FUN_147166794(void)

undefined8 FUN_147166794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471667b6 FUN_1471667b6 body=38 status=ok
// SIG undefined FUN_1471667b6(void)

undefined8 FUN_1471667b6(undefined8 param_1,int param_2)

{
  FUN_1462c2070();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166810 FUN_147166810 body=38 status=ok
// SIG undefined FUN_147166810(void)

undefined8 FUN_147166810(undefined8 param_1,int param_2)

{
  FUN_1462c20b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14716686a FUN_14716686a body=38 status=ok
// SIG undefined FUN_14716686a(void)

undefined8 FUN_14716686a(undefined8 param_1,int param_2)

{
  FUN_1462c2100();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471668c4 FUN_1471668c4 body=38 status=ok
// SIG undefined FUN_1471668c4(void)

undefined8 FUN_1471668c4(undefined8 param_1,int param_2)

{
  FUN_1462c2148();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471668f0 FUN_1471668f0 body=38 status=ok
// SIG undefined FUN_1471668f0(void)

undefined8 FUN_1471668f0(undefined8 param_1,int param_2)

{
  FUN_1462c2190();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14716691c FUN_14716691c body=95 status=ok
// SIG undefined FUN_14716691c(void)

void FUN_14716691c(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_14715ddfa(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14716697c FUN_14716697c body=56 status=ok
// SIG undefined FUN_14716697c(void)

undefined8 * FUN_14716697c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a216e70;
  FUN_144725486();
  FUN_1462c541e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471669e2 FUN_1471669e2 body=38 status=ok
// SIG undefined FUN_1471669e2(void)

undefined8 FUN_1471669e2(undefined8 param_1,int param_2)

{
  FUN_1462c541e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166a08 FUN_147166a08 body=38 status=ok
// SIG undefined FUN_147166a08(void)

undefined8 FUN_147166a08(undefined8 param_1,int param_2)

{
  FUN_1462c21d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166a34 FUN_147166a34 body=38 status=ok
// SIG undefined FUN_147166a34(void)

undefined8 FUN_147166a34(undefined8 param_1,int param_2)

{
  FUN_1462c2220();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166a8e FUN_147166a8e body=38 status=ok
// SIG undefined FUN_147166a8e(void)

undefined8 FUN_147166a8e(undefined8 param_1,int param_2)

{
  FUN_1462c2268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166aba FUN_147166aba body=147 status=ok
// SIG undefined FUN_147166aba(void)

void FUN_147166aba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147166b4e FUN_147166b4e body=38 status=ok
// SIG undefined FUN_147166b4e(void)

undefined8 FUN_147166b4e(undefined8 param_1,int param_2)

{
  FUN_1462c1fae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166b74 FUN_147166b74 body=76 status=ok
// SIG undefined FUN_147166b74(void)

undefined8 * FUN_147166b74(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a2170d0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166bc0 FUN_147166bc0 body=29 status=ok
// SIG undefined FUN_147166bc0(void)

undefined8 FUN_147166bc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166bde FUN_147166bde body=29 status=ok
// SIG undefined FUN_147166bde(void)

undefined8 FUN_147166bde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166bfc FUN_147166bfc body=384 status=ok
// SIG undefined FUN_147166bfc(void)

void FUN_147166bfc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9ce098;
  if (DAT_14c9ce098 != 0) {
    LOCK();
    *(int *)(DAT_14c9ce098 + 8) = *(int *)(DAT_14c9ce098 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9ce050;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a217140;
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



// FUNCTION 147166d7e FUN_147166d7e body=38 status=ok
// SIG undefined FUN_147166d7e(void)

undefined8 FUN_147166d7e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166da4 FUN_147166da4 body=163 status=ok
// SIG undefined FUN_147166da4(void)

void FUN_147166da4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c21b0a();
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
  FUN_142c21bf2(param_1,param_2);
  return;
}



// FUNCTION 147166e47 FUN_147166e47 body=374 status=ok
// SIG undefined FUN_147166e47(void)

void FUN_147166e47(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147166fbe FUN_147166fbe body=29 status=ok
// SIG undefined FUN_147166fbe(void)

undefined8 FUN_147166fbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147166fdc FUN_147166fdc body=384 status=ok
// SIG undefined FUN_147166fdc(void)

void FUN_147166fdc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9ce120;
  if (DAT_14c9ce120 != 0) {
    LOCK();
    *(int *)(DAT_14c9ce120 + 8) = *(int *)(DAT_14c9ce120 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9ce0d8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a217160;
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



// FUNCTION 14716715e FUN_14716715e body=38 status=ok
// SIG undefined FUN_14716715e(void)

undefined8 FUN_14716715e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147167184 FUN_147167184 body=163 status=ok
// SIG undefined FUN_147167184(void)

void FUN_147167184(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c21e26();
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
  FUN_142c21f0e(param_1,param_2);
  return;
}



// FUNCTION 147167227 FUN_147167227 body=374 status=ok
// SIG undefined FUN_147167227(void)

void FUN_147167227(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14716739e FUN_14716739e body=38 status=ok
// SIG undefined FUN_14716739e(void)

undefined8 FUN_14716739e(undefined8 param_1,int param_2)

{
  FUN_1462c22b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471673f8 FUN_1471673f8 body=135 status=ok
// SIG undefined FUN_1471673f8(void)

void FUN_1471673f8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1570);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x1574)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x390,0);
      iVar4 = (int)(uVar3 / 0x390);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x1574) = iVar5;
    FUN_147167480(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147167480 FUN_147167480 body=147 status=ok
// SIG undefined FUN_147167480(void)

void FUN_147167480(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1560);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x390);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1560,0,param_3,0x390);
    memmove(*(void **)((longlong)param_1 + 0x1560),param_1,(longlong)param_2 * 0x390);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1560,param_2,param_3,0x390);
  return;
}



// FUNCTION 147167514 FUN_147167514 body=114 status=ok
// SIG undefined FUN_147167514(void)

void FUN_147167514(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14716758c FUN_14716758c body=29 status=ok
// SIG undefined FUN_14716758c(void)

undefined8 FUN_14716758c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471675aa FUN_1471675aa body=384 status=ok
// SIG undefined FUN_1471675aa(void)

void FUN_1471675aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9ced58;
  if (DAT_14c9ced58 != 0) {
    LOCK();
    *(int *)(DAT_14c9ced58 + 8) = *(int *)(DAT_14c9ced58 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9ced10;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a217300;
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



// FUNCTION 14716772c FUN_14716772c body=38 status=ok
// SIG undefined FUN_14716772c(void)

undefined8 FUN_14716772c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147167752 FUN_147167752 body=163 status=ok
// SIG undefined FUN_147167752(void)

void FUN_147167752(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c261b0();
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
  FUN_142c26298(param_1,param_2);
  return;
}



// FUNCTION 1471677f5 FUN_1471677f5 body=374 status=ok
// SIG undefined FUN_1471677f5(void)

void FUN_1471677f5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14716796c FUN_14716796c body=31 status=ok
// SIG undefined FUN_14716796c(void)

undefined8 FUN_14716796c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14716798c FUN_14716798c body=29 status=ok
// SIG undefined FUN_14716798c(void)

undefined8 FUN_14716798c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471679aa FUN_1471679aa body=384 status=ok
// SIG undefined FUN_1471679aa(void)

void FUN_1471679aa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9cede0;
  if (DAT_14c9cede0 != 0) {
    LOCK();
    *(int *)(DAT_14c9cede0 + 8) = *(int *)(DAT_14c9cede0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9ced98;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2173e0;
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



// FUNCTION 147167b2c FUN_147167b2c body=38 status=ok
// SIG undefined FUN_147167b2c(void)

undefined8 FUN_147167b2c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147167b52 FUN_147167b52 body=163 status=ok
// SIG undefined FUN_147167b52(void)

void FUN_147167b52(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c281d4();
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
  FUN_142c282bc(param_1,param_2);
  return;
}



// FUNCTION 147167bf5 FUN_147167bf5 body=374 status=ok
// SIG undefined FUN_147167bf5(void)

void FUN_147167bf5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147167d6c FUN_147167d6c body=29 status=ok
// SIG undefined FUN_147167d6c(void)

undefined8 FUN_147167d6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147167d8a FUN_147167d8a body=384 status=ok
// SIG undefined FUN_147167d8a(void)

void FUN_147167d8a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9cee68;
  if (DAT_14c9cee68 != 0) {
    LOCK();
    *(int *)(DAT_14c9cee68 + 8) = *(int *)(DAT_14c9cee68 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9cee20;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a217400;
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



// FUNCTION 147167f0c FUN_147167f0c body=38 status=ok
// SIG undefined FUN_147167f0c(void)

undefined8 FUN_147167f0c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147167f32 FUN_147167f32 body=163 status=ok
// SIG undefined FUN_147167f32(void)

void FUN_147167f32(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c284f0();
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
  FUN_142c285d8(param_1,param_2);
  return;
}



// FUNCTION 147167fd5 FUN_147167fd5 body=374 status=ok
// SIG undefined FUN_147167fd5(void)

void FUN_147167fd5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14716814c FUN_14716814c body=95 status=ok
// SIG undefined FUN_14716814c(void)

longlong FUN_14716814c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 1471681ac FUN_1471681ac body=95 status=ok
// SIG undefined FUN_1471681ac(void)

longlong FUN_1471681ac(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 14716820c FUN_14716820c body=95 status=ok
// SIG undefined FUN_14716820c(void)

longlong FUN_14716820c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 14716826c FUN_14716826c body=95 status=ok
// SIG undefined FUN_14716826c(void)

longlong FUN_14716826c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 1471682cc FUN_1471682cc body=95 status=ok
// SIG undefined FUN_1471682cc(void)

longlong FUN_1471682cc(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 14716832c FUN_14716832c body=95 status=ok
// SIG undefined FUN_14716832c(void)

longlong FUN_14716832c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InputTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InputTextureSampler",0);
  return param_1;
}



// FUNCTION 14716838c FUN_14716838c body=56 status=ok
// SIG undefined FUN_14716838c(void)

undefined8 * FUN_14716838c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a217440;
  FUN_144725486();
  FUN_1462c5b84(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471683f2 FUN_1471683f2 body=38 status=ok
// SIG undefined FUN_1471683f2(void)

undefined8 FUN_1471683f2(undefined8 param_1,int param_2)

{
  FUN_1462c5b84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147168418 FUN_147168418 body=327 status=ok
// SIG undefined FUN_147168418(void)

void FUN_147168418(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14716855f FUN_14716855f body=258 status=ok
// SIG undefined FUN_14716855f(void)

void FUN_14716855f(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

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
  FUN_1447e4d96(*param_2,lVar11,*(undefined8 *)(param_4 + 0x18));
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 147168661 FUN_147168661 body=327 status=ok
// SIG undefined FUN_147168661(void)

void FUN_147168661(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1471687a8 FUN_1471687a8 body=327 status=ok
// SIG undefined FUN_1471687a8(void)

void FUN_1471687a8(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1471688ef FUN_1471688ef body=327 status=ok
// SIG undefined FUN_1471688ef(void)

void FUN_1471688ef(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147168a36 FUN_147168a36 body=327 status=ok
// SIG undefined FUN_147168a36(void)

void FUN_147168a36(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147168b7d FUN_147168b7d body=327 status=ok
// SIG undefined FUN_147168b7d(void)

void FUN_147168b7d(ulonglong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  FUN_1447e4d96(lVar5,lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar6 = DAT_14c9c0d80;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*(undefined8 *)(*param_5 + 8));
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147168cc4 FUN_147168cc4 body=258 status=ok
// SIG undefined FUN_147168cc4(void)

void FUN_147168cc4(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

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
  FUN_1447e4d96(*param_2,lVar11,*(undefined8 *)(param_4 + 0x18));
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 147168dc6 FUN_147168dc6 body=258 status=ok
// SIG undefined FUN_147168dc6(void)

void FUN_147168dc6(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

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
  FUN_1447e4d96(*param_2,lVar11,*(undefined8 *)(param_4 + 0x18));
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 147168ec8 FUN_147168ec8 body=56 status=ok
// SIG undefined FUN_147168ec8(void)

longlong FUN_147168ec8(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147168f18 FUN_147168f18 body=59 status=ok
// SIG undefined FUN_147168f18(void)

int FUN_147168f18(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x3333334) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0x50;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x50);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147168f7c FUN_147168f7c body=21 status=ok
// SIG undefined FUN_147168f7c(void)

undefined * FUN_147168f7c(void)

{
  FUN_14716900e();
  return &DAT_14c9cfb50;
}



// FUNCTION 147168f9e FUN_147168f9e body=112 status=ok
// SIG undefined FUN_147168f9e(void)

void FUN_147168f9e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,0x10);
  }
  return;
}



// FUNCTION 14716900e FUN_14716900e body=205 status=ok
// SIG undefined FUN_14716900e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14716900e(void)

{
  if ((DAT_14c9cfbb7 & 2) != 0) {
    return;
  }
  DAT_14c9cfbb7 = DAT_14c9cfbb7 | 2;
  _DAT_14c9cfb58 = L"TResourceArray";
  _DAT_14c9cfb70 = FUN_146826540;
  _DAT_14c9cfb78 = FUN_146825d77;
  _DAT_14c9cfb80 = FUN_146825fd6;
  _DAT_14c9cfb88 = FUN_1407e02ea;
  _DAT_14c9cfb90 = FUN_146826273;
  _DAT_14c9cfb68 = FUN_1471690dc;
  _DAT_14c9cfba8 = 0xffffffff00000020;
  _DAT_14c9cfbb0 = 8;
  DAT_14c9cfbb4 = 1;
  _DAT_14c9cfb98 = FUN_147169108;
  FUN_14716911e();
  FUN_14716922c();
  FUN_1407e00cc(&DAT_14c9cfb50);
  return;
}



// FUNCTION 1471690dc FUN_1471690dc body=43 status=ok
// SIG undefined FUN_1471690dc(void)

void FUN_1471690dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147169108 FUN_147169108 body=21 status=ok
// SIG undefined FUN_147169108(void)

undefined * FUN_147169108(void)

{
  FUN_147169405();
  return &DAT_14c9cfbb8;
}



// FUNCTION 14716911e FUN_14716911e body=270 status=ok
// SIG undefined FUN_14716911e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14716911e(void)

{
  _DAT_14c9cfbe0 = L"bNeedsCPUAccess";
  DAT_14c9cfc0a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14c9cfbe8 = &DAT_14c9cfcf0;
  _DAT_14c9cfbf8 = &LAB_14682652b;
  _DAT_14c9cfc00 = &DAT_100000018;
  _DAT_14c9cfc08 = 0;
  _DAT_14c9cfbf0 = DAT_14c9cfb60;
  DAT_14c9cfb60 = &DAT_14c9cfbe0;
  return;
}



// FUNCTION 14716922c FUN_14716922c body=473 status=ok
// SIG undefined FUN_14716922c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14716922c(void)

{
  _DAT_14c9cfc10 = L"BASE";
  DAT_14c9cfc3a = 4;
  if ((DAT_14c9cfca7 & 2) == 0) {
    DAT_14c9cfca7 = DAT_14c9cfca7 | 3;
    _DAT_14c9cfc48 = L"(TArray<T, AllocatorType>)";
    _DAT_14c9cfc60 = FUN_1471694ac;
    _DAT_14c9cfc68 = &LAB_14716950c;
    _DAT_14c9cfc70 = &LAB_14716951a;
    _DAT_14c9cfc78 = &LAB_147169528;
    _DAT_14c9cfc80 = &DAT_147169536;
    _DAT_14c9cfc58 = FUN_147169538;
    _DAT_14c9cfc98 = 0x1000000010;
    _DAT_14c9cfca0 = 8;
    DAT_14c9cfca4 = '\0';
  }
  else if (DAT_14c9cfca4 != '\0') {
    DAT_14c9cfbb6 = DAT_14c9cfbb6 + '\x01';
  }
  _DAT_14c9cfc20 = DAT_14c9cfb60;
  _DAT_14c9cfc30 = &DAT_100000008;
  _DAT_14c9cfc28 = &LAB_14682652b;
  _DAT_14c9cfc18 = &DAT_14c9cfc40;
  DAT_14c9cfbb5 = DAT_14c9cfbb5 + '\x01';
  DAT_14c9cfb60 = &DAT_14c9cfc10;
  _DAT_14c9cfca8 = L"BASE";
  DAT_14c9cfcd2 = 4;
  _DAT_14c9cfcb0 = FUN_146268212();
  _DAT_14c9cfcb8 = DAT_14c9cfb60;
  _DAT_14c9cfcc0 = &LAB_14682652b;
  DAT_14c9cfb60 = &DAT_14c9cfca8;
  DAT_14c9cfbb5 = DAT_14c9cfbb5 + '\x01';
  _DAT_14c9cfcc8 = 0x100000000;
  if (*(char *)(_DAT_14c9cfcb0 + 100) != '\0') {
    DAT_14c9cfbb6 = DAT_14c9cfbb6 + '\x01';
  }
  return;
}



// FUNCTION 147169405 FUN_147169405 body=122 status=ok
// SIG undefined FUN_147169405(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147169405(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cfbd8) {
    FUN_144b3d300(&DAT_14c9cfbd8);
    if (DAT_14c9cfbd8 == -1) {
      DAT_14c9cfbc0 = 0;
      uRam000000014c9cfbc8 = 0;
      _DAT_14c9cfbb8 = &PTR_FUN_14a2174a0;
      DAT_14c9cfbd0 = 0;
      atexit((_func_5014 *)&LAB_142c28629);
      _Init_thread_footer(&DAT_14c9cfbd8);
      return;
    }
  }
  return;
}



// FUNCTION 1471694ac FUN_1471694ac body=95 status=ok
// SIG undefined FUN_1471694ac(void)

void FUN_1471694ac(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147169538 FUN_147169538 body=51 status=ok
// SIG undefined FUN_147169538(void)

void FUN_147169538(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14716956c FUN_14716956c body=147 status=ok
// SIG undefined FUN_14716956c(void)

void FUN_14716956c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147169600 FUN_147169600 body=38 status=ok
// SIG undefined FUN_147169600(void)

void FUN_147169600(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449cc82a(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 147169626 FUN_147169626 body=19 status=ok
// SIG undefined FUN_147169626(void)

void FUN_147169626(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 14716963a FUN_14716963a body=132 status=ok
// SIG undefined FUN_14716963a(void)

void FUN_14716963a(longlong param_1,int param_2)

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



// FUNCTION 1471696c0 FUN_1471696c0 body=89 status=ok
// SIG undefined FUN_1471696c0(void)

void FUN_1471696c0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_147169600(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14716971a FUN_14716971a body=62 status=ok
// SIG undefined FUN_14716971a(void)

void FUN_14716971a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147169758(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147169758 FUN_147169758 body=93 status=ok
// SIG undefined FUN_147169758(void)

ulonglong FUN_147169758(uint param_1,uint param_2)

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



// FUNCTION 1471697b5 FUN_1471697b5 body=492 status=ok
// SIG undefined FUN_1471697b5(void)

void FUN_1471697b5(longlong param_1,undefined8 param_2,int *param_3,char param_4,undefined8 param_5,
                  int *param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  int *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined2 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  int local_78;
  undefined2 local_74;
  uint local_70;
  int local_6c;
  int local_68;
  undefined2 local_64;
  undefined2 local_60;
  uint uStack_5e;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar6 = param_4 == '\0';
  if (bVar6) {
    local_7c = *param_3;
    local_6c = param_3[1];
    iVar4 = local_6c;
    iVar5 = local_7c;
  }
  else {
    local_6c = *param_3;
    local_7c = param_3[1];
    iVar4 = local_7c;
    iVar5 = local_6c;
  }
  local_80 = (uint)!bVar6;
  local_70 = (uint)bVar6;
  local_64 = 2;
  local_74 = 2;
  local_78 = local_6c + 2;
  iVar4 = iVar4 + 2;
  iVar1 = param_6[2] - *param_6;
  if (param_4 != '\0') {
    iVar4 = param_6[3] - param_6[1];
    iVar1 = iVar5 + 2;
  }
  local_88 = CONCAT44(iVar4,iVar1);
  local_90 = 0;
  local_68 = local_7c;
  lVar2 = FUN_14472bf7a(param_1,param_7 + 0x60,*(undefined8 *)(param_7 + 8),0);
  local_a0 = &local_60;
  local_60 = 0xffff;
  uStack_5e = 0xffff7f7f;
  uStack_5a = 0x7f;
  uStack_59 = 0xff;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_56 = 0;
  uStack_55 = 0;
  local_98 = 0;
  local_b8 = param_6;
  local_b0 = lVar2;
  local_a8 = &local_90;
  FUN_142c2d03a(param_1,param_2,&local_70,param_5);
  local_60 = 0;
  uStack_56 = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_5e = (uint)*(byte *)(lVar2 + 0x90);
  if ((*(char *)(lVar2 + 0x92) == '\x04') || (*(char *)(lVar2 + 0x92) == '\x01')) {
    uStack_5a = (undefined1)*(undefined2 *)(lVar2 + 0x8e);
    uStack_59 = (undefined1)((ushort)*(undefined2 *)(lVar2 + 0x8e) >> 8);
  }
  local_50 = lVar2;
  uVar3 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lVar2 + 8,&local_60);
  local_b0 = param_7;
  local_a8 = (undefined8 *)0x0;
  local_b8 = (int *)&local_90;
  FUN_142c2b0e8(param_1,param_2,&local_80,uVar3);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471699a2 FUN_1471699a2 body=891 status=ok
// SIG undefined FUN_1471699a2(void)

void FUN_1471699a2(longlong param_1,undefined2 param_2,undefined8 param_3,uint *param_4,byte param_5
                  ,undefined8 param_6,undefined8 param_7,int *param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,ulonglong param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_128 [32];
  int *local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  undefined2 local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined2 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined4 local_95;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 local_8e;
  longlong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d0 = param_8[3] - param_8[1];
  uVar1 = *param_4;
  uVar2 = param_4[1];
  local_d4 = uVar2;
  if (param_5 != 0) {
    local_d4 = uVar1;
  }
  local_c0 = local_d4 + 2;
  uVar3 = local_c0;
  if (param_5 != 0) {
    uVar3 = local_d0;
  }
  uVar4 = local_c0;
  local_c4 = uVar2;
  if (param_5 == 0) {
    uVar4 = param_8[2] - *param_8;
    local_d0 = param_8[2] - *param_8;
    local_c4 = uVar1;
  }
  if (local_c4 < 0x1001) {
    uVar1 = local_d0;
    uVar2 = local_d0;
  }
  uVar5 = local_c0;
  if (param_5 != 0) {
    uVar1 = local_c0;
    uVar5 = uVar2;
  }
  local_68 = DAT_14ca85098;
  local_78 = DAT_14ca85088;
  uStack_74 = DAT_14ca8508c;
  uStack_70 = DAT_14ca85090;
  uStack_6c = DAT_14ca85094;
  local_5c = CONCAT44(uVar5,uVar1);
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_54 = 0x100010100010001;
  local_80 = param_13 | 0x20008;
  local_4c = 0xff00;
  local_a8 = (uint)(param_5 ^ 1);
  local_b0 = CONCAT44(uVar3,uVar4);
  local_b8 = 0;
  local_c8 = (uint)param_5;
  local_d8 = local_c8 ^ 3;
  local_cc = param_2;
  local_bc = param_2;
  local_a4 = local_d4;
  local_a0 = local_d0;
  local_9c = param_2;
  lVar6 = FUN_14472bf7a(param_1,&local_80,L"FFT.TwoForOne",0);
  local_e8 = 0;
  local_f0 = param_11;
  local_108 = param_8;
  local_100 = lVar6;
  local_f8 = &local_b8;
  FUN_142c2d03a(param_1,param_3,&local_a8,param_7);
  lVar7 = FUN_14472bf7a(param_1,&local_80,L"FFT.Convolution",0);
  local_98 = 0;
  local_8e = 0;
  local_95 = 0;
  uStack_91 = 0;
  uStack_90 = 0;
  local_96 = *(undefined1 *)(lVar6 + 0x90);
  if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
    local_95._3_1_ = (byte)*(undefined2 *)(lVar6 + 0x8e);
    local_95 = (uint)local_95._3_1_ << 0x18;
    uStack_91 = (undefined1)((ushort)*(undefined2 *)(lVar6 + 0x8e) >> 8);
  }
  local_88 = lVar6;
  uVar8 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lVar6 + 8,&local_98);
  local_100 = param_6;
  local_108 = (int *)&local_b8;
  local_f8 = (undefined8 *)lVar7;
  FUN_142c2e77a(param_1,param_3,&local_c8,uVar8);
  local_98 = 0;
  local_8e = 0;
  uStack_91 = 0;
  uStack_90 = 0;
  local_95 = 0;
  local_96 = *(undefined1 *)(lVar7 + 0x90);
  if ((*(char *)(lVar7 + 0x92) == '\x04') || (*(char *)(lVar7 + 0x92) == '\x01')) {
    local_95._3_1_ = (byte)*(undefined2 *)(lVar7 + 0x8e);
    local_95 = (uint)local_95._3_1_ << 0x18;
    uStack_91 = (undefined1)((ushort)*(undefined2 *)(lVar7 + 0x8e) >> 8);
  }
  local_88 = lVar7;
  uVar8 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lVar7 + 8,&local_98);
  local_e8 = param_12;
  local_f0 = param_11;
  local_f8 = (undefined8 *)param_10;
  local_100 = param_9;
  local_108 = (int *)&local_b8;
  FUN_142c2d03a(param_1,param_3,&local_d8,uVar8);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147169d1e FUN_147169d1e body=44 status=ok
// SIG undefined FUN_147169d1e(void)

void FUN_147169d1e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147169d52 FUN_147169d52 body=96 status=ok
// SIG undefined FUN_147169d52(void)

undefined8 FUN_147169d52(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f40f3e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3838,1);
  return uVar3;
}



// FUNCTION 147169db2 FUN_147169db2 body=138 status=ok
// SIG undefined FUN_147169db2(void)

void * FUN_147169db2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147169e3c FUN_147169e3c body=108 status=ok
// SIG undefined FUN_147169e3c(void)

undefined4 * FUN_147169e3c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f40cd0();
  FUN_145f40cd0();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9cff50,0);
  FUN_145f40cd0();
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



// FUNCTION 147169ea9 FUN_147169ea9 body=177 status=ok
// SIG undefined FUN_147169ea9(void)

void FUN_147169ea9(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f40f3e();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d3838,param_4);
  local_78 = &DAT_14c9d3838;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14717a532(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147169f5c FUN_147169f5c body=44 status=ok
// SIG undefined FUN_147169f5c(void)

void FUN_147169f5c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147169f90 FUN_147169f90 body=96 status=ok
// SIG undefined FUN_147169f90(void)

undefined8 FUN_147169f90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1401d0eb4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d38c0,1);
  return uVar3;
}



// FUNCTION 147169ff0 FUN_147169ff0 body=138 status=ok
// SIG undefined FUN_147169ff0(void)

void * FUN_147169ff0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716a07a FUN_14716a07a body=132 status=ok
// SIG undefined FUN_14716a07a(void)

undefined8 FUN_14716a07a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_518 [32];
  undefined1 local_4f8 [1240];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_518;
  memset(local_4f8,0,0x4d0);
  FUN_144a8b74e(local_4f8);
  FUN_144787006(param_2,local_4f8);
  uVar1 = FUN_144788782(local_4f8);
  FUN_14716a100(param_1,uVar1);
  if ((local_20 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14716a100 FUN_14716a100 body=1134 status=ok
// SIG undefined FUN_14716a100(void)

void FUN_14716a100(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
  undefined8 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  
  uVar15 = 0;
  uVar17 = 0;
  if (DAT_14c760e18 == '\x01') {
    *param_1 = &DAT_3f8000003f800000;
    param_1[1] = 0;
    param_1[2] = &DAT_3f8000003f800000;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar17 = 3;
  }
  puVar16 = (undefined4 *)((longlong)param_1 + (ulonglong)(uVar17 << 4));
  *puVar16 = param_2[4];
  puVar16[1] = param_2[5];
  puVar16[2] = param_2[6];
  puVar16[3] = *param_2;
  uVar3 = param_2[0xc];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x14];
  uVar6 = param_2[9];
  uVar7 = param_2[0xd];
  uVar8 = param_2[0x11];
  uVar9 = param_2[0x15];
  uVar10 = param_2[10];
  uVar11 = param_2[0xe];
  uVar12 = param_2[0x12];
  uVar13 = param_2[0x16];
  puVar16[4] = param_2[8];
  puVar16[5] = uVar3;
  puVar16[6] = uVar4;
  puVar16[7] = uVar5;
  puVar16[8] = uVar6;
  puVar16[9] = uVar7;
  puVar16[10] = uVar8;
  puVar16[0xb] = uVar9;
  puVar16[0xc] = uVar10;
  puVar16[0xd] = uVar11;
  puVar16[0xe] = uVar12;
  puVar16[0xf] = uVar13;
  uVar3 = param_2[0x5a];
  *(undefined8 *)(puVar16 + 0x10) = *(undefined8 *)(param_2 + 0x58);
  puVar16[0x12] = uVar3;
  puVar16[0x13] = 0;
  uVar14 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(puVar16 + 0x14) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(puVar16 + 0x16) = uVar14;
  uVar3 = param_2[0x62];
  *(undefined8 *)(puVar16 + 0x18) = *(undefined8 *)(param_2 + 0x60);
  puVar16[0x1a] = uVar3;
  puVar16[0x1b] = 0;
  uVar3 = param_2[0x66];
  *(undefined8 *)(puVar16 + 0x1c) = *(undefined8 *)(param_2 + 100);
  puVar16[0x1e] = uVar3;
  puVar16[0x1f] = 0;
  uVar3 = param_2[0x6a];
  *(undefined8 *)(puVar16 + 0x20) = *(undefined8 *)(param_2 + 0x68);
  puVar16[0x22] = uVar3;
  puVar16[0x23] = 0;
  uVar3 = param_2[0x5b];
  uVar4 = param_2[0x6e];
  *(undefined8 *)(puVar16 + 0x24) = *(undefined8 *)(param_2 + 0x6c);
  puVar16[0x26] = uVar4;
  puVar16[0x27] = uVar3;
  uVar14 = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(puVar16 + 0x28) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(puVar16 + 0x2a) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x82);
  *(undefined8 *)(puVar16 + 0x2c) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(puVar16 + 0x2e) = uVar14;
  uVar3 = param_2[0x1c];
  uVar4 = param_2[0x20];
  uVar5 = param_2[0x24];
  uVar6 = param_2[0x19];
  uVar7 = param_2[0x1d];
  uVar8 = param_2[0x21];
  uVar9 = param_2[0x25];
  uVar10 = param_2[0x1a];
  uVar11 = param_2[0x1e];
  uVar12 = param_2[0x22];
  uVar13 = param_2[0x26];
  puVar16[0x30] = param_2[0x18];
  puVar16[0x31] = uVar3;
  puVar16[0x32] = uVar4;
  puVar16[0x33] = uVar5;
  puVar16[0x34] = uVar6;
  puVar16[0x35] = uVar7;
  puVar16[0x36] = uVar8;
  puVar16[0x37] = uVar9;
  puVar16[0x38] = uVar10;
  puVar16[0x39] = uVar11;
  puVar16[0x3a] = uVar12;
  puVar16[0x3b] = uVar13;
  uVar3 = param_2[0x2c];
  uVar4 = param_2[0x30];
  uVar5 = param_2[0x34];
  uVar6 = param_2[0x29];
  uVar7 = param_2[0x2d];
  uVar8 = param_2[0x31];
  uVar9 = param_2[0x35];
  uVar10 = param_2[0x2a];
  uVar11 = param_2[0x2e];
  uVar12 = param_2[0x32];
  uVar13 = param_2[0x36];
  puVar16[0x3c] = param_2[0x28];
  puVar16[0x3d] = uVar3;
  puVar16[0x3e] = uVar4;
  puVar16[0x3f] = uVar5;
  puVar16[0x40] = uVar6;
  puVar16[0x41] = uVar7;
  puVar16[0x42] = uVar8;
  puVar16[0x43] = uVar9;
  puVar16[0x44] = uVar10;
  puVar16[0x45] = uVar11;
  puVar16[0x46] = uVar12;
  puVar16[0x47] = uVar13;
  uVar3 = param_2[0x3c];
  uVar4 = param_2[0x40];
  uVar5 = param_2[0x44];
  uVar6 = param_2[0x39];
  uVar7 = param_2[0x3d];
  uVar8 = param_2[0x41];
  uVar9 = param_2[0x45];
  uVar10 = param_2[0x3a];
  uVar11 = param_2[0x3e];
  uVar12 = param_2[0x42];
  uVar13 = param_2[0x46];
  puVar16[0x48] = param_2[0x38];
  puVar16[0x49] = uVar3;
  puVar16[0x4a] = uVar4;
  puVar16[0x4b] = uVar5;
  puVar16[0x4c] = uVar6;
  puVar16[0x4d] = uVar7;
  puVar16[0x4e] = uVar8;
  puVar16[0x4f] = uVar9;
  puVar16[0x50] = uVar10;
  puVar16[0x51] = uVar11;
  puVar16[0x52] = uVar12;
  puVar16[0x53] = uVar13;
  uVar18 = 9;
  if ((uVar17 ^ 0xb) < 9) {
    uVar18 = uVar17 ^ 0xb;
  }
  do {
    puVar1 = (undefined8 *)((longlong)param_2 + uVar15 + 0x280);
    uVar14 = puVar1[1];
    puVar2 = (undefined8 *)((longlong)puVar16 + uVar15 + 0x150);
    *puVar2 = *puVar1;
    puVar2[1] = uVar14;
    uVar15 = uVar15 + 0x10;
  } while (uVar18 << 4 != uVar15);
  return;
}



// FUNCTION 14716a56e FUN_14716a56e body=44 status=ok
// SIG undefined FUN_14716a56e(void)

void FUN_14716a56e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716a5a2 FUN_14716a5a2 body=96 status=ok
// SIG undefined FUN_14716a5a2(void)

undefined8 FUN_14716a5a2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f66dd4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d39d0,1);
  return uVar3;
}



// FUNCTION 14716a602 FUN_14716a602 body=138 status=ok
// SIG undefined FUN_14716a602(void)

void * FUN_14716a602(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716a68c FUN_14716a68c body=44 status=ok
// SIG undefined FUN_14716a68c(void)

void FUN_14716a68c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716a6c0 FUN_14716a6c0 body=96 status=ok
// SIG undefined FUN_14716a6c0(void)

undefined8 FUN_14716a6c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2892e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3a58,1);
  return uVar3;
}



// FUNCTION 14716a720 FUN_14716a720 body=138 status=ok
// SIG undefined FUN_14716a720(void)

void * FUN_14716a720(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716a7aa FUN_14716a7aa body=44 status=ok
// SIG undefined FUN_14716a7aa(void)

void FUN_14716a7aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716a7de FUN_14716a7de body=96 status=ok
// SIG undefined FUN_14716a7de(void)

undefined8 FUN_14716a7de(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea51d6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3ae0,1);
  return uVar3;
}



// FUNCTION 14716a83e FUN_14716a83e body=138 status=ok
// SIG undefined FUN_14716a83e(void)

void * FUN_14716a83e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716a8c8 FUN_14716a8c8 body=44 status=ok
// SIG undefined FUN_14716a8c8(void)

void FUN_14716a8c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716a8fc FUN_14716a8fc body=96 status=ok
// SIG undefined FUN_14716a8fc(void)

undefined8 FUN_14716a8fc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e80fb4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3b68,1);
  return uVar3;
}



// FUNCTION 14716a95c FUN_14716a95c body=138 status=ok
// SIG undefined FUN_14716a95c(void)

void * FUN_14716a95c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716a9e6 FUN_14716a9e6 body=44 status=ok
// SIG undefined FUN_14716a9e6(void)

void FUN_14716a9e6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716aa1a FUN_14716aa1a body=96 status=ok
// SIG undefined FUN_14716aa1a(void)

undefined8 FUN_14716aa1a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eab482();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3bf0,1);
  return uVar3;
}



// FUNCTION 14716aa7a FUN_14716aa7a body=138 status=ok
// SIG undefined FUN_14716aa7a(void)

void * FUN_14716aa7a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716ab04 FUN_14716ab04 body=21 status=ok
// SIG undefined FUN_14716ab04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14716ab04(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  ulonglong uStack_b8;
  ulonglong *puStack_b0;
  undefined8 *puStack_a8;
  ulonglong uStack_a0;
  longlong *plStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined2 uStack_4d;
  undefined1 uStack_4b;
  ulonglong uStack_48;
  
  if ((*(longlong *)(param_2 + 8) == 0) || (*(char *)(param_2 + 0x11a08) != '\x01')) {
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_2 + 0x11ab0) != 0) {
    puStack_d8 = (undefined8 *)param_5;
    puStack_e8 = (undefined8 *)param_4;
    puStack_e0 = (undefined8 *)param_3;
    FUN_142c3b047(param_1,param_2,param_4 + 0x84,param_2 + 0x11a10);
LAB_142c32b6a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_108);
  }
  if (*(longlong *)(param_2 + 0x11a20) != 0) {
    if ((*(byte *)(param_2 + 0x2b5c) & 1) == 0) {
      uVar8 = 0;
    }
    else {
      uStack_b8 = *(ulonglong *)(param_3 + 0x84);
      uStack_68 = DAT_14ca83a40;
      uStack_78 = _DAT_14ca83a30;
      uStack_70 = _DAT_14ca83a38;
      uStack_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_4e = 0;
      uStack_80 = 9;
      uStack_4d = 0xd;
      uStack_54 = 0x10001;
      uStack_50 = 0x101;
      uStack_60 = 0;
      uStack_4b = 0xff;
      iStack_5c = DAT_14ca84e40;
      if ((int)uStack_b8 < DAT_14ca84e40) {
        iStack_5c = (int)uStack_b8;
      }
      if (iStack_5c < 2) {
        iStack_5c = 1;
      }
      iVar12 = (int)(uStack_b8 >> 0x20);
      iStack_58 = DAT_14ca84e40;
      if (iVar12 < DAT_14ca84e40) {
        iStack_58 = iVar12;
      }
      if (iStack_58 < 2) {
        iStack_58 = 1;
      }
      plVar1 = (longlong *)(param_1 + 0x70);
      uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar8 = uVar11 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(plVar1,0x128);
        uVar11 = *plVar1 + 7U & 0xfffffffffffffff8;
        uVar8 = uVar11 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bbb8c(uVar11,L"Hair.DOFDepth",&uStack_80,0);
      iVar12 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar12);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar11;
      *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar14 + 0x30;
      uStack_a0 = uVar11;
      if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
        FUN_140023dd8(plVar1,400);
        puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar7 = puVar14 + 0x30;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar7;
      *puVar14 = &PTR_FUN_14a21c868;
      FUN_14716f018(puVar14 + 2);
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar12);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar14;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (*(char *)(lVar9 + 0x41) == '\x03') {
        cVar6 = '\x02';
      }
      puVar14[0xe] = uVar2;
      *(char *)(puVar14 + 0xf) = cVar6;
      puVar14[10] = *(undefined8 *)(param_2 + 0x11b60);
      puVar14[0xb] = param_3;
      puVar14[0xc] = param_4;
      lVar9 = FUN_1447e4f80();
      uVar8 = uStack_a0;
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar14[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar14 + 3) = cVar6;
      puVar14[0x10] = uStack_a0;
      puVar14[0x11] = 0;
      *(undefined4 *)(puVar14 + 0x12) = 0xffff0000;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145ea4f68();
      FUN_1448e935e(uVar2,&uStack_80,&DAT_14c9d0420,0);
      FUN_145ea4f68();
      puStack_e8 = (undefined8 *)(param_2 + 0x11ad0);
      puStack_e0 = &uStack_80;
      puStack_d8 = puVar14 + 2;
      FUN_14716eee2(param_1,&uStack_81,param_2,uStack_b8);
    }
    uVar10 = *(uint *)(param_2 + 0x11f60);
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    uStack_a0 = uVar8;
    puStack_a8 = (undefined8 *)FUN_144a97bef(param_1,param_2);
    puStack_b0 = (ulonglong *)(param_1 + 0x70);
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar14 + 0x34;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(puStack_b0,0x1b0);
      puVar14 = (undefined8 *)(*puStack_b0 + 0xf & 0xfffffffffffffff0);
      puVar7 = puVar14 + 0x34;
    }
    uStack_b8 = CONCAT44(uStack_b8._4_4_,CONCAT31((int3)(uStack_b8 >> 8),uVar8 != 0));
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    *puVar14 = &PTR_FUN_14a21c888;
    puStack_90 = puVar14 + 2;
    FUN_14716f394();
    plStack_98 = (longlong *)(param_1 + 0x98);
    iVar12 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
      FUN_1448cfae8(plStack_98,iVar12);
    }
    uVar10 = uVar10 & 8;
    *(undefined8 **)(*plStack_98 + (longlong)iVar12 * 8) = puVar14;
    *(undefined4 *)(puVar14 + 0xb) = (undefined4)uStack_b8;
    puVar14[0xe] = *(undefined8 *)(param_2 + 0x11b60);
    uVar8 = uStack_a0;
    if (uStack_a0 == 0) {
      uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    }
    puVar14[0xf] = uVar8;
    puVar14[10] = *(undefined8 *)(param_3 + 0x84);
    lVar9 = FUN_1447e4f80();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (*(char *)(lVar9 + 0x41) == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[2] = *(undefined8 *)(param_2 + 0x18);
    *(char *)(puVar14 + 3) = cVar6;
    uVar2 = *(undefined8 *)(param_2 + 0x11a00);
    lVar9 = FUN_144a81af4();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[0xc] = uVar2;
    *(char *)(puVar14 + 0xd) = cVar6;
    lVar9 = FUN_144a80e70();
    cVar6 = *(char *)(lVar9 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar14[0x12] = puStack_a8;
    *(char *)(puVar14 + 0x13) = cVar6;
    *(uint *)((longlong)puVar14 + 0x5c) = uVar10 >> 3;
    puVar14[0x14] = param_3;
    puVar14[0x15] = 0;
    *(undefined4 *)(puVar14 + 0x16) = 0xffff0001;
    puVar14[0x2c] = param_4;
    puVar14[0x2d] = 0;
    *(undefined2 *)(puVar14 + 0x2e) = 0x101;
    *(undefined4 *)((longlong)puVar14 + 0x174) = 0x12;
    uVar2 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145f286c0();
    FUN_1448e935e(uVar2,&uStack_80,&DAT_14c9d02f8,0);
    FUN_145f286c0();
    puVar7 = (undefined8 *)(param_2 + 0x11ad0);
    puStack_d0 = puStack_90;
    puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,uVar10 != 0);
    puStack_e0 = puVar7;
    puStack_d8 = &uStack_80;
    FUN_14716f258(param_1,&uStack_81,param_2,*(undefined8 *)(param_3 + 0x84));
    if (uVar10 != 0) {
      puStack_90 = (undefined8 *)FUN_144a97bef(param_1,param_2);
      puVar5 = puStack_b0;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x32;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puStack_b0,0x1a0);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x32;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar13 = &PTR_FUN_14a21c8a8;
      puStack_a8 = puVar13 + 2;
      FUN_14716f718();
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(plStack_98,iVar12);
      }
      *(undefined8 **)(*plStack_98 + (longlong)iVar12 * 8) = puVar13;
      *(undefined4 *)(puVar13 + 0xb) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = 0;
      uVar8 = uStack_a0;
      if (uStack_a0 == 0) {
        uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
      }
      puVar13[0x10] = uVar8;
      puVar13[10] = *(undefined8 *)(param_3 + 0x84);
      lVar9 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar13 + 3) = cVar6;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xc] = uVar2;
      *(char *)(puVar13 + 0xd) = cVar6;
      lVar9 = FUN_144a80e70();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xe] = puStack_90;
      *(char *)(puVar13 + 0xf) = cVar6;
      puVar13[0x12] = param_3;
      puVar13[0x13] = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0xffff0001;
      puVar13[0x2a] = param_4;
      puVar13[0x2b] = 0;
      *(undefined2 *)(puVar13 + 0x2c) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x164) = 0x12;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f66b66();
      FUN_1448e935e(uVar2,&uStack_80,&DAT_14c9d01d0,0);
      FUN_145f66b66();
      puStack_d0 = puStack_a8;
      puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,5);
      puStack_e0 = puVar7;
      puStack_d8 = &uStack_80;
      FUN_14716f5e0(param_1,&uStack_81,param_2,*(undefined8 *)(param_3 + 0x84));
      puVar5 = puStack_b0;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x32;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puStack_b0,0x1a0);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x32;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar14;
      *puVar13 = &PTR_FUN_14a21c8a8;
      puStack_a8 = puVar13 + 2;
      FUN_14716f718();
      plVar1 = plStack_98;
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(plStack_98,iVar12);
      }
      *(undefined8 **)(*plVar1 + (longlong)iVar12 * 8) = puVar13;
      *(undefined4 *)(puVar13 + 0xb) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar13 + 0x5c) = 1;
      uVar8 = uStack_a0;
      if (uStack_a0 == 0) {
        uVar8 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
      }
      puVar13[0x10] = uVar8;
      puVar13[10] = *(undefined8 *)(param_3 + 0x84);
      lVar9 = FUN_1447e4f80();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[2] = *(undefined8 *)(param_2 + 0x18);
      *(char *)(puVar13 + 3) = cVar6;
      uVar2 = *(undefined8 *)(param_2 + 0x11a00);
      lVar9 = FUN_144a81af4();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xc] = uVar2;
      *(char *)(puVar13 + 0xd) = cVar6;
      lVar9 = FUN_144a80e70();
      cVar6 = *(char *)(lVar9 + 0x41);
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      puVar13[0xe] = puStack_90;
      *(char *)(puVar13 + 0xf) = cVar6;
      puVar13[0x12] = param_3;
      puVar13[0x13] = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0xffff0001;
      puVar13[0x2a] = param_4;
      puVar13[0x2b] = 0;
      *(undefined2 *)(puVar13 + 0x2c) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x164) = 0x12;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145f66b66();
      FUN_1448e935e(uVar2,&uStack_80,&DAT_14c9d01d0,0);
      FUN_145f66b66();
      puStack_d0 = puStack_a8;
      puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,6);
      puStack_e0 = puVar7;
      puStack_d8 = &uStack_80;
      FUN_14716f5e0(param_1,&uStack_81,param_2,*(undefined8 *)(param_3 + 0x84));
    }
    puVar5 = puStack_b0;
    if (*(longlong *)(param_2 + 0x11a18) != 0) {
      uStack_b8 = *(ulonglong *)(param_4 + 0x84);
      uStack_68 = DAT_14ca83a40;
      iStack_5c = DAT_14ca84e40;
      if ((int)uStack_b8 < DAT_14ca84e40) {
        iStack_5c = (int)uStack_b8;
      }
      if (iStack_5c < 2) {
        iStack_5c = 1;
      }
      iVar12 = (int)(uStack_b8 >> 0x20);
      iStack_58 = DAT_14ca84e40;
      if (iVar12 < DAT_14ca84e40) {
        iStack_58 = iVar12;
      }
      uStack_78 = _DAT_14ca83a30;
      uStack_70 = _DAT_14ca83a38;
      uStack_4e = 0;
      uStack_80 = 1;
      uStack_4d = 0x25;
      uStack_54 = 0x10001;
      uStack_50 = CONCAT11(*(undefined1 *)(param_4 + 0x91),1);
      uStack_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      uStack_60 = 0;
      uStack_4b = 0xff;
      if (iStack_58 < 2) {
        iStack_58 = 1;
      }
      uVar11 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar8 = uVar11 + 0x120;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(puStack_b0,0x128);
        uVar11 = *puVar5 + 7 & 0xfffffffffffffff8;
        uVar8 = uVar11 + 0x120;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bbb8c(uVar11,L"Hair.DummyTexture",&uStack_80,0);
      iVar12 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
        FUN_14472c0f6(param_1 + 0x178,iVar12);
      }
      puVar5 = puStack_b0;
      *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar11;
      *(int *)(uVar11 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar14 = puVar13 + 0x2a;
      if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
        FUN_140023dd8(puStack_b0,0x160);
        puVar13 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar14 = puVar13 + 0x2a;
      }
      *puStack_b0 = (ulonglong)puVar14;
      *puVar13 = &PTR_FUN_14a21c8f0;
      *(undefined1 (*) [16])(puVar13 + 5) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar13 + 7) = 4;
      puVar13[8] = 0;
      lVar9 = 0x62;
      do {
        *(undefined1 (*) [16])((longlong)puVar13 + lVar9 + -0x12) = (undefined1  [16])0x0;
        *(undefined4 *)((longlong)puVar13 + lVar9 + -2) = 0xffff0000;
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != 0x122);
      *(undefined4 *)((longlong)puVar13 + 0x124) = 0;
      *(undefined1 (*) [16])(puVar13 + 0x22) = (undefined1  [16])0x0;
      *(undefined2 *)(puVar13 + 0x24) = 0;
      *(undefined4 *)(puVar13 + 0x25) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 300) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x26) = 0xffffffff;
      *(undefined4 *)((longlong)puVar13 + 0x134) = 0xffffffff;
      *(undefined4 *)(puVar13 + 0x27) = 0;
      *(undefined2 *)((longlong)puVar13 + 0x13c) = 0;
      puVar13[0x28] = 0;
      iVar12 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
        FUN_1448cfae8(plStack_98,iVar12);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar13;
      puVar13[8] = *(undefined8 *)(param_2 + 0x11a18);
      puVar13[10] = uVar11;
      puVar13[0xb] = 0;
      *(undefined4 *)(puVar13 + 0xc) = 0xffff0000;
      puVar13[0x22] = param_4;
      puVar13[0x23] = 0;
      *(undefined2 *)(puVar13 + 0x24) = 0x101;
      *(undefined4 *)((longlong)puVar13 + 0x124) = 0x21;
      uVar2 = *(undefined8 *)(param_2 + 0x13818);
      FUN_145e80d46();
      FUN_1448e935e(uVar2,&uStack_80,&DAT_14c9d0548,0);
      FUN_145e80d46();
      puStack_e8 = puVar7;
      puStack_e0 = &uStack_80;
      puStack_d8 = puVar13 + 2;
      FUN_14716f95a(param_1,&uStack_81,param_2,uStack_b8);
    }
    iVar12 = *(int *)(*(longlong *)(param_2 + 8) + 0x28);
    bVar15 = iVar12 != 0xc;
    if (DAT_14c760290 - 1U < 2 || (DAT_14c760290 == 3 || !bVar15)) {
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x348);
      lVar3 = *(longlong *)(lVar9 + 0x2a8);
      lVar4 = *(longlong *)(lVar9 + 0x2b0);
      if (lVar4 == 0 || ((iVar12 == 0xc || 1 < DAT_14c760290 - 1U) || lVar3 == 0)) {
        if ((((param_4 == 0) || (DAT_14c760290 != 3 && bVar15 || lVar3 == 0)) || (lVar4 == 0)) ||
           (*(longlong *)(lVar9 + 0x2b8) == 0)) goto LAB_142c32b86;
        bVar15 = bVar15 && DAT_14c760290 == 1;
        puStack_d0 = *(undefined8 **)(lVar9 + 0x2c0);
        uStack_c8 = *(undefined8 *)(lVar9 + 0x2c8);
        puStack_d8 = (undefined8 *)*(longlong *)(lVar9 + 0x2b8);
        lStack_c0 = param_4;
      }
      else {
        bVar15 = DAT_14c760290 == 1;
        uStack_c8 = 0;
        lStack_c0 = 0;
        puStack_d8 = (undefined8 *)0x0;
        puStack_d0 = (undefined8 *)0x0;
      }
      puStack_e8 = (undefined8 *)lVar3;
      puStack_e0 = (undefined8 *)lVar4;
      FUN_142c46e0d(param_1,param_2,bVar15,puVar7);
      goto LAB_142c32b6a;
    }
  }
LAB_142c32b86:
  if ((uStack_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14716ab1a FUN_14716ab1a body=682 status=ok
// SIG undefined FUN_14716ab1a(void)

undefined8 * FUN_14716ab1a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  wchar_t **local_88;
  undefined8 *local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_49 = 0;
  local_58 = L"Hair.DebugShadingPoint";
  uVar7 = 0x30;
  if (DAT_14ca84e48 < 0x30) {
    uVar7 = DAT_14ca84e48;
  }
  uStack_68 = 0x10109;
  local_70 = uVar7 + (uVar7 == 0);
  uVar7 = DAT_14ca84e48;
  if (0x1f < DAT_14ca84e48) {
    uVar7 = 0x20;
  }
  local_60 = 0;
  local_6c = uVar7 + (uVar7 == 0);
  lVar2 = param_2 + 0x188;
  lVar1 = param_2 + 0x70;
  local_88 = (wchar_t **)&local_49;
  local_78 = param_2;
  uVar4 = FUN_144738de6(lVar2,lVar1,&local_58,&local_70);
  *param_1 = uVar4;
  local_58 = L"Hair.DebugShadingPointCounter";
  uVar7 = DAT_14ca84e48;
  if (3 < DAT_14ca84e48) {
    uVar7 = 4;
  }
  local_49 = 0;
  local_70 = uVar7 + (uVar7 == 0);
  local_60 = 0;
  local_6c = 1;
  uStack_68 = 0x4109;
  local_88 = (wchar_t **)&local_49;
  lVar5 = FUN_144738de6(lVar2,lVar1,&local_58,&local_70);
  param_1[1] = lVar5;
  local_49 = 0;
  local_58 = L"Hair.DebugSample";
  uStack_68 = 0x10109;
  local_60 = 0;
  uVar7 = 0x20;
  if (DAT_14ca84e48 < 0x20) {
    uVar7 = DAT_14ca84e48;
  }
  local_70 = uVar7 + (uVar7 == 0);
  uVar7 = 0x8000;
  if (DAT_14ca84e48 < 0x8000) {
    uVar7 = DAT_14ca84e48;
  }
  local_6c = uVar7 + (uVar7 == 0);
  local_88 = (wchar_t **)&local_49;
  uVar4 = FUN_144738de6(lVar2,lVar1,&local_58,&local_70);
  param_1[2] = uVar4;
  local_49 = 0;
  local_58 = L"Hair.DebugSampleCounter";
  local_60 = 0;
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_70 = uVar7 + (uVar7 == 0);
  local_6c = 1;
  uStack_68 = 0x4109;
  local_88 = (wchar_t **)&local_49;
  lVar6 = FUN_144738de6(lVar2,lVar1,&local_58,&local_70);
  lVar3 = local_78;
  param_1[3] = lVar6;
  local_70._0_3_ = 0x1c;
  uStack_68 = (undefined4)lVar5;
  uStack_64 = (undefined4)((ulonglong)lVar5 >> 0x20);
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffffffff00);
  lVar2 = local_78 + 0x198;
  local_88 = &local_58;
  local_80 = param_1;
  uVar4 = FUN_144a23c98(lVar2,lVar1,lVar5 + 8,&local_70);
  FUN_1405bfba3(lVar3,uVar4,0,2);
  local_70 = CONCAT13(local_70._3_1_,0x1c);
  uStack_68 = (undefined4)lVar6;
  uStack_64 = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_88 = &local_58;
  uVar4 = FUN_144a23c98(lVar2,lVar1,lVar6 + 8,&local_70);
  FUN_1405bfba3(lVar3,uVar4,0,2);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14716adc6 FUN_14716adc6 body=349 status=ok
// SIG undefined FUN_14716adc6(void)

void FUN_14716adc6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined2 local_58;
  undefined1 local_56;
  longlong local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = 0x800000000020;
  local_50 = *param_2;
  local_58 = 0;
  local_56 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_58 = 0x1c;
  }
  local_41 = 0;
  lVar1 = param_1 + 0x198;
  param_1 = param_1 + 0x70;
  local_68 = &local_41;
  uVar2 = FUN_144a23c98(lVar1,param_1,local_50 + 8,&local_58);
  param_3[1] = uVar2;
  local_50 = param_2[1];
  local_58 = 0x1c;
  local_56 = 0;
  local_41 = 0;
  local_68 = &local_41;
  uVar2 = FUN_144a23c98(lVar1,param_1,local_50 + 8,&local_58);
  param_3[2] = uVar2;
  local_50 = param_2[2];
  local_58 = 0;
  local_56 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_58 = 0x1c;
  }
  local_41 = 0;
  local_68 = &local_41;
  uVar2 = FUN_144a23c98(lVar1,param_1,local_50 + 8,&local_58);
  param_3[3] = uVar2;
  local_50 = param_2[3];
  local_58 = 0x1c;
  local_56 = 0;
  local_41 = 0;
  local_68 = &local_41;
  uVar2 = FUN_144a23c98(lVar1,param_1,local_50 + 8,&local_58);
  param_3[4] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14716af24 FUN_14716af24 body=334 status=ok
// SIG undefined FUN_14716af24(void)

void FUN_14716af24(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_3 = 0x800000000020;
  local_48 = *param_2;
  local_60[0] = 0;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  if ((*(byte *)(local_48 + 0x68) & 0x80) != 0) {
    local_60[0] = 0x1c;
  }
  lVar1 = param_1 + 0x198;
  param_1 = param_1 + 0x70;
  uVar2 = FUN_14475683e(lVar1,param_1,local_48 + 8,local_60);
  param_3[1] = uVar2;
  local_48 = param_2[1];
  local_60[0] = 0x1c;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  uVar2 = FUN_14475683e(lVar1,param_1,local_48 + 8,local_60);
  param_3[2] = uVar2;
  local_48 = param_2[2];
  local_60[0] = 0;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  if ((*(byte *)(local_48 + 0x68) & 0x80) != 0) {
    local_60[0] = 0x1c;
  }
  uVar2 = FUN_14475683e(lVar1,param_1,local_48 + 8,local_60);
  param_3[3] = uVar2;
  local_48 = param_2[3];
  local_60[0] = 0x1c;
  local_5c = 0xffffffff00000000;
  local_50 = 0;
  uVar2 = FUN_14475683e(lVar1,param_1,local_48 + 8,local_60);
  param_3[4] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14716b074 FUN_14716b074 body=44 status=ok
// SIG undefined FUN_14716b074(void)

void FUN_14716b074(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b0a8 FUN_14716b0a8 body=96 status=ok
// SIG undefined FUN_14716b0a8(void)

undefined8 FUN_14716b0a8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f024ca();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3c78,1);
  return uVar3;
}



// FUNCTION 14716b108 FUN_14716b108 body=138 status=ok
// SIG undefined FUN_14716b108(void)

void * FUN_14716b108(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b192 FUN_14716b192 body=44 status=ok
// SIG undefined FUN_14716b192(void)

void FUN_14716b192(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b1c6 FUN_14716b1c6 body=96 status=ok
// SIG undefined FUN_14716b1c6(void)

undefined8 FUN_14716b1c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f673ce();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3d00,1);
  return uVar3;
}



// FUNCTION 14716b226 FUN_14716b226 body=138 status=ok
// SIG undefined FUN_14716b226(void)

void * FUN_14716b226(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b2b0 FUN_14716b2b0 body=44 status=ok
// SIG undefined FUN_14716b2b0(void)

void FUN_14716b2b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b2e4 FUN_14716b2e4 body=96 status=ok
// SIG undefined FUN_14716b2e4(void)

undefined8 FUN_14716b2e4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f28f22();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3d88,1);
  return uVar3;
}



// FUNCTION 14716b344 FUN_14716b344 body=138 status=ok
// SIG undefined FUN_14716b344(void)

void * FUN_14716b344(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b3ce FUN_14716b3ce body=44 status=ok
// SIG undefined FUN_14716b3ce(void)

void FUN_14716b3ce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b402 FUN_14716b402 body=96 status=ok
// SIG undefined FUN_14716b402(void)

undefined8 FUN_14716b402(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f02ab8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3e10,1);
  return uVar3;
}



// FUNCTION 14716b462 FUN_14716b462 body=138 status=ok
// SIG undefined FUN_14716b462(void)

void * FUN_14716b462(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b4ec FUN_14716b4ec body=44 status=ok
// SIG undefined FUN_14716b4ec(void)

void FUN_14716b4ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b520 FUN_14716b520 body=96 status=ok
// SIG undefined FUN_14716b520(void)

undefined8 FUN_14716b520(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e507cc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3e98,1);
  return uVar3;
}



// FUNCTION 14716b580 FUN_14716b580 body=138 status=ok
// SIG undefined FUN_14716b580(void)

void * FUN_14716b580(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b60a FUN_14716b60a body=44 status=ok
// SIG undefined FUN_14716b60a(void)

void FUN_14716b60a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b63e FUN_14716b63e body=96 status=ok
// SIG undefined FUN_14716b63e(void)

undefined8 FUN_14716b63e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f678e4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3f20,1);
  return uVar3;
}



// FUNCTION 14716b69e FUN_14716b69e body=138 status=ok
// SIG undefined FUN_14716b69e(void)

void * FUN_14716b69e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b728 FUN_14716b728 body=44 status=ok
// SIG undefined FUN_14716b728(void)

void FUN_14716b728(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b75c FUN_14716b75c body=96 status=ok
// SIG undefined FUN_14716b75c(void)

undefined8 FUN_14716b75c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6e988();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d3fa8,1);
  return uVar3;
}



// FUNCTION 14716b7bc FUN_14716b7bc body=138 status=ok
// SIG undefined FUN_14716b7bc(void)

void * FUN_14716b7bc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b846 FUN_14716b846 body=44 status=ok
// SIG undefined FUN_14716b846(void)

void FUN_14716b846(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b87a FUN_14716b87a body=96 status=ok
// SIG undefined FUN_14716b87a(void)

undefined8 FUN_14716b87a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e81524();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d4030,1);
  return uVar3;
}



// FUNCTION 14716b8da FUN_14716b8da body=138 status=ok
// SIG undefined FUN_14716b8da(void)

void * FUN_14716b8da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716b964 FUN_14716b964 body=44 status=ok
// SIG undefined FUN_14716b964(void)

void FUN_14716b964(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716b998 FUN_14716b998 body=96 status=ok
// SIG undefined FUN_14716b998(void)

undefined8 FUN_14716b998(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f41534();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d40b8,1);
  return uVar3;
}



// FUNCTION 14716b9f8 FUN_14716b9f8 body=138 status=ok
// SIG undefined FUN_14716b9f8(void)

void * FUN_14716b9f8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716ba82 FUN_14716ba82 body=44 status=ok
// SIG undefined FUN_14716ba82(void)

void FUN_14716ba82(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716bab6 FUN_14716bab6 body=96 status=ok
// SIG undefined FUN_14716bab6(void)

undefined8 FUN_14716bab6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f67ede();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d4140,1);
  return uVar3;
}



// FUNCTION 14716bb16 FUN_14716bb16 body=138 status=ok
// SIG undefined FUN_14716bb16(void)

void * FUN_14716bb16(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716bba0 FUN_14716bba0 body=44 status=ok
// SIG undefined FUN_14716bba0(void)

void FUN_14716bba0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716bbd4 FUN_14716bbd4 body=96 status=ok
// SIG undefined FUN_14716bbd4(void)

undefined8 FUN_14716bbd4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f41b2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d4250,1);
  return uVar3;
}



// FUNCTION 14716bc34 FUN_14716bc34 body=138 status=ok
// SIG undefined FUN_14716bc34(void)

void * FUN_14716bc34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716bcbe FUN_14716bcbe body=44 status=ok
// SIG undefined FUN_14716bcbe(void)

void FUN_14716bcbe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716bcf2 FUN_14716bcf2 body=96 status=ok
// SIG undefined FUN_14716bcf2(void)

undefined8 FUN_14716bcf2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f901b8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d42d8,1);
  return uVar3;
}



// FUNCTION 14716bd52 FUN_14716bd52 body=138 status=ok
// SIG undefined FUN_14716bd52(void)

void * FUN_14716bd52(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716bddc FUN_14716bddc body=44 status=ok
// SIG undefined FUN_14716bddc(void)

void FUN_14716bddc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716be10 FUN_14716be10 body=96 status=ok
// SIG undefined FUN_14716be10(void)

undefined8 FUN_14716be10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f9061a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d43e8,1);
  return uVar3;
}



// FUNCTION 14716be70 FUN_14716be70 body=138 status=ok
// SIG undefined FUN_14716be70(void)

void * FUN_14716be70(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14716befa FUN_14716befa body=44 status=ok
// SIG undefined FUN_14716befa(void)

void FUN_14716befa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14716bf2e FUN_14716bf2e body=96 status=ok
// SIG undefined FUN_14716bf2e(void)

undefined8 FUN_14716bf2e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e81a94();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d4470,1);
  return uVar3;
}


