// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146461df0 FUN_146461df0 body=136 status=ok
// SIG undefined FUN_146461df0(void)

code * FUN_146461df0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputSegments";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e24394;
}



// FUNCTION 146461e78 FUN_146461e78 body=136 status=ok
// SIG undefined FUN_146461e78(void)

code * FUN_146461e78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FinalizationThreadBlockSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xdc000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480517b8;
}



// FUNCTION 146461f00 FUN_146461f00 body=138 status=ok
// SIG undefined FUN_146461f00(void)

undefined1 * FUN_146461f00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b6d2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRibbonComputeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_148051a6a;
}



// FUNCTION 146461f8a FUN_146461f8a body=136 status=ok
// SIG undefined FUN_146461f8a(void)

code * FUN_146461f8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TotalNumRibbons";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x124000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051a6e;
}



// FUNCTION 146462012 FUN_146462012 body=136 status=ok
// SIG undefined FUN_146462012(void)

code * FUN_146462012(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnablePerParticleVRangeOverride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dda176;
}



// FUNCTION 14646209a FUN_14646209a body=138 status=ok
// SIG undefined FUN_14646209a(void)

undefined1 * FUN_14646209a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b6d2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRibbonComputeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_148051e38;
}



// FUNCTION 146462124 FUN_146462124 body=136 status=ok
// SIG undefined FUN_146462124(void)

code * FUN_146462124(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GNiagaraRibbonTessellationMinDisplacementError";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051e3c;
}



// FUNCTION 1464621ac FUN_1464621ac body=136 status=ok
// SIG undefined FUN_1464621ac(void)

code * FUN_1464621ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GNiagaraRibbonMaxTessellation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051f50;
}



// FUNCTION 146462234 FUN_146462234 body=136 status=ok
// SIG undefined FUN_146462234(void)

code * FUN_146462234(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubSegmentBitMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c0000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480526da;
}



// FUNCTION 1464622bc FUN_1464622bc body=136 status=ok
// SIG undefined FUN_1464622bc(void)

code * FUN_1464622bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BitMaskForShape";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480527ee;
}



// FUNCTION 146462344 FUN_146462344 body=29 status=ok
// SIG undefined FUN_146462344(void)

undefined8 FUN_146462344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462362 FUN_146462362 body=136 status=ok
// SIG undefined FUN_146462362(void)

code * FUN_146462362(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumExistingElements";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14574aaec;
}



// FUNCTION 1464623ea FUN_1464623ea body=136 status=ok
// SIG undefined FUN_1464623ea(void)

code * FUN_1464623ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FreeIDListIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461ef46a;
}



// FUNCTION 146462472 FUN_146462472 body=136 status=ok
// SIG undefined FUN_146462472(void)

code * FUN_146462472(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FillValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461ec2a6;
}



// FUNCTION 1464624fa FUN_1464624fa body=29 status=ok
// SIG undefined FUN_1464624fa(void)

undefined8 FUN_1464624fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462518 FUN_146462518 body=29 status=ok
// SIG undefined FUN_146462518(void)

undefined8 FUN_146462518(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462536 FUN_146462536 body=29 status=ok
// SIG undefined FUN_146462536(void)

undefined8 FUN_146462536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462554 FUN_146462554 body=29 status=ok
// SIG undefined FUN_146462554(void)

undefined8 FUN_146462554(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462572 FUN_146462572 body=29 status=ok
// SIG undefined FUN_146462572(void)

undefined8 FUN_146462572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146462590 FUN_146462590 body=136 status=ok
// SIG undefined FUN_146462590(void)

code * FUN_146462590(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c00000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805536e;
}



// FUNCTION 146462618 FUN_146462618 body=136 status=ok
// SIG undefined FUN_146462618(void)

code * FUN_146462618(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SparseVolumeTextureA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f78102;
}



// FUNCTION 1464626a0 FUN_1464626a0 body=136 status=ok
// SIG undefined FUN_1464626a0(void)

code * FUN_1464626a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousVelocityComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52c0000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805550a;
}



// FUNCTION 146462728 FUN_146462728 body=136 status=ok
// SIG undefined FUN_146462728(void)

code * FUN_146462728(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousSpriteSizeComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x51c00000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480556a8;
}



// FUNCTION 1464627b0 FUN_1464627b0 body=136 status=ok
// SIG undefined FUN_1464627b0(void)

code * FUN_1464627b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_ColorComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4cc00000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148055f48;
}



// FUNCTION 146462838 FUN_146462838 body=136 status=ok
// SIG undefined FUN_146462838(void)

code * FUN_146462838(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubUVAnimation_RateScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480560e6;
}



// FUNCTION 1464628c0 FUN_1464628c0 body=136 status=ok
// SIG undefined FUN_1464628c0(void)

code * FUN_1464628c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpriteRotationRate_Bias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e34038;
}



// FUNCTION 146462948 FUN_146462948 body=136 status=ok
// SIG undefined FUN_146462948(void)

code * FUN_146462948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpriteFacingAndAlignment_SpriteAlignment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e34342;
}



// FUNCTION 1464629d0 FUN_1464629d0 body=136 status=ok
// SIG undefined FUN_1464629d0(void)

code * FUN_1464629d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSizeBySpeed_VelocityNorm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e05bec;
}



// FUNCTION 146462a58 FUN_146462a58 body=136 status=ok
// SIG undefined FUN_146462a58(void)

code * FUN_146462a58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleMeshSize_CurveScaleOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfe7a8;
}



// FUNCTION 146462ae0 FUN_146462ae0 body=136 status=ok
// SIG undefined FUN_146462ae0(void)

code * FUN_146462ae0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleSpriteSizeBySpeed_VelocityNorm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfeb3c;
}



// FUNCTION 146462b68 FUN_146462b68 body=136 status=ok
// SIG undefined FUN_146462b68(void)

code * FUN_146462b68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleSpriteSize_CurveScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d4d7fe;
}



// FUNCTION 146462bf0 FUN_146462bf0 body=130 status=ok
// SIG undefined FUN_146462bf0(void)

undefined1 * FUN_146462bf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleColor_Distribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x49;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d87468;
}



// FUNCTION 146462c72 FUN_146462c72 body=136 status=ok
// SIG undefined FUN_146462c72(void)

code * FUN_146462c72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshRotationRate_Bias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfeed0;
}



// FUNCTION 146462cfa FUN_146462cfa body=136 status=ok
// SIG undefined FUN_146462cfa(void)

code * FUN_146462cfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndex_TableNumElements";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dff264;
}



// FUNCTION 146462d82 FUN_146462d82 body=136 status=ok
// SIG undefined FUN_146462d82(void)

code * FUN_146462d82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicMaterialParameters_Parameter3W";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480564a0;
}



// FUNCTION 146462e0a FUN_146462e0a body=136 status=ok
// SIG undefined FUN_146462e0a(void)

code * FUN_146462e0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicMaterialParameters_Parameter2W";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480565b4;
}



// FUNCTION 146462e92 FUN_146462e92 body=130 status=ok
// SIG undefined FUN_146462e92(void)

undefined1 * FUN_146462e92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CameraOffset_Distribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x45;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145f015ba;
}



// FUNCTION 146462f14 FUN_146462f14 body=136 status=ok
// SIG undefined FUN_146462f14(void)

code * FUN_146462f14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_NoiseLUTChannelWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148056b1c;
}



// FUNCTION 146462f9c FUN_146462f9c body=136 status=ok
// SIG undefined FUN_146462f9c(void)

code * FUN_146462f9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_NoiseSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148056cba;
}



// FUNCTION 146463024 FUN_146463024 body=136 status=ok
// SIG undefined FUN_146463024(void)

code * FUN_146463024(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SolveVelocitiesAndForces_VelocityBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805755a;
}



// FUNCTION 1464630ac FUN_1464630ac body=136 status=ok
// SIG undefined FUN_1464630ac(void)

code * FUN_1464630ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShapeLocation_Parameters1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3f7d8;
}



// FUNCTION 146463134 FUN_146463134 body=136 status=ok
// SIG undefined FUN_146463134(void)

code * FUN_146463134(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitialMeshOrientation_RotationBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3464c;
}



// FUNCTION 1464631bc FUN_1464631bc body=136 status=ok
// SIG undefined FUN_1464631bc(void)

code * FUN_1464631bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitializeParticle_RibbonWidthBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805780a;
}



// FUNCTION 146463244 FUN_146463244 body=136 status=ok
// SIG undefined FUN_146463244(void)

code * FUN_146463244(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InitializeParticle_SpriteRotationBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5400000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d46fea;
}



// FUNCTION 1464632cc FUN_1464632cc body=136 status=ok
// SIG undefined FUN_1464632cc(void)

code * FUN_1464632cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpawnInfo_Rate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee5048;
}



// FUNCTION 146463354 FUN_146463354 body=136 status=ok
// SIG undefined FUN_146463354(void)

code * FUN_146463354(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Common_IntOutputBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddca76;
}



// FUNCTION 1464633dc FUN_1464633dc body=136 status=ok
// SIG undefined FUN_1464633dc(void)

code * FUN_1464633dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousVelocityComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d40000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148058134;
}



// FUNCTION 146463464 FUN_146463464 body=136 status=ok
// SIG undefined FUN_146463464(void)

code * FUN_146463464(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Permutation_PreviousRibbonWidthComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c400000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148058248;
}



// FUNCTION 1464634ec FUN_1464634ec body=144 status=ok
// SIG undefined FUN_1464634ec(void)

code * FUN_1464634ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145de160c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam91";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSolveVelocitiesAndForcesModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b00000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dff2ee;
}



// FUNCTION 14646357c FUN_14646357c body=144 status=ok
// SIG undefined FUN_14646357c(void)

code * FUN_14646357c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam89";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleSpriteSizeModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x17000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14646371c;
}



// FUNCTION 14646360c FUN_14646360c body=136 status=ok
// SIG undefined FUN_14646360c(void)

code * FUN_14646360c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotateAroundPoint_InitialPhaseBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148058698;
}



// FUNCTION 146463694 FUN_146463694 body=136 status=ok
// SIG undefined FUN_146463694(void)

code * FUN_146463694(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotateAroundPoint_RateBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dff574;
}



// FUNCTION 14646371c FUN_14646371c body=144 status=ok
// SIG undefined FUN_14646371c(void)

code * FUN_14646371c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d87270();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam88";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScaleColorModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x16000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1464637ac;
}



// FUNCTION 1464637ac FUN_1464637ac body=144 status=ok
// SIG undefined FUN_1464637ac(void)

code * FUN_1464637ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3f55e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam87";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FShapeLocationModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f7d684;
}



// FUNCTION 14646383c FUN_14646383c body=138 status=ok
// SIG undefined FUN_14646383c(void)

undefined1 * FUN_14646383c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ddc770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1480587ac;
}



// FUNCTION 1464638f4 FUN_1464638f4 body=93 status=ok
// SIG undefined FUN_1464638f4(void)

void FUN_1464638f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ad4f360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146463952 FUN_146463952 body=61 status=ok
// SIG undefined FUN_146463952(void)

undefined8 * FUN_146463952(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad4f3d0;
  FUN_1449db362(param_1 + 3);
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146463990 FUN_146463990 body=144 status=ok
// SIG undefined FUN_146463990(void)

code * FUN_146463990(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x690000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146463a20;
}



// FUNCTION 146463a20 FUN_146463a20 body=144 status=ok
// SIG undefined FUN_146463a20(void)

code * FUN_146463a20(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x680000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ee9572;
}



// FUNCTION 146463ab0 FUN_146463ab0 body=136 status=ok
// SIG undefined FUN_146463ab0(void)

code * FUN_146463ab0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Emitter_Pad1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480595de;
}



// FUNCTION 146463b38 FUN_146463b38 body=136 status=ok
// SIG undefined FUN_146463b38(void)

code * FUN_146463b38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Emitter_Age";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480596f2;
}



// FUNCTION 146463bc0 FUN_146463bc0 body=136 status=ok
// SIG undefined FUN_146463bc0(void)

code * FUN_146463bc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148059bca;
}



// FUNCTION 146463c48 FUN_146463c48 body=136 status=ok
// SIG undefined FUN_146463c48(void)

code * FUN_146463c48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Owner_SystemZAxis";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee71be;
}



// FUNCTION 146463cd0 FUN_146463cd0 body=136 status=ok
// SIG undefined FUN_146463cd0(void)

code * FUN_146463cd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Engine_Owner_SystemZAxis";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805a608;
}



// FUNCTION 146463d58 FUN_146463d58 body=136 status=ok
// SIG undefined FUN_146463d58(void)

code * FUN_146463d58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_System_Pad1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c0000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805ae1c;
}



// FUNCTION 146463de0 FUN_146463de0 body=136 status=ok
// SIG undefined FUN_146463de0(void)

code * FUN_146463de0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_NumTimeSteps";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee9aca;
}



// FUNCTION 146463e68 FUN_146463e68 body=136 status=ok
// SIG undefined FUN_146463e68(void)

code * FUN_146463e68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Engine_System_NumEmittersAlive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805b85a;
}



// FUNCTION 146463ef0 FUN_146463ef0 body=136 status=ok
// SIG undefined FUN_146463ef0(void)

code * FUN_146463ef0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PREV_Engine_Pad1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805bca8;
}



// FUNCTION 146463f78 FUN_146463f78 body=136 status=ok
// SIG undefined FUN_146463f78(void)

code * FUN_146463f78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWOutputHalf";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<half>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805caaa;
}



// FUNCTION 146464000 FUN_146464000 body=55 status=ok
// SIG undefined FUN_146464000(void)

void FUN_146464000(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35b90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35b90 = FUN_140002ddd(FUN_146464037,uVar1,L"NDIRenderTargetVolumeSimCacheFrame");
  }
  return;
}



// FUNCTION 146464037 FUN_146464037 body=47 status=ok
// SIG undefined FUN_146464037(void)

longlong FUN_146464037(void)

{
  if (DAT_14cb35b88 == 0) {
    FUN_14086a14e(&DAT_14cb35b88,&PTR_FUN_14ad51348);
  }
  return DAT_14cb35b88;
}



// FUNCTION 146464066 FUN_146464066 body=43 status=ok
// SIG undefined FUN_146464066(void)

void FUN_146464066(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ad5a290;
  return;
}



// FUNCTION 146464091 FUN_146464091 body=50 status=ok
// SIG undefined FUN_146464091(void)

void FUN_146464091(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad51510;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1464640c3 FUN_1464640c3 body=47 status=ok
// SIG undefined FUN_1464640c3(void)

longlong FUN_1464640c3(void)

{
  if (DAT_14cb35ba8 == 0) {
    FUN_14073dd9a(&DAT_14cb35ba8,&PTR_LAB_14ad514c8);
  }
  return DAT_14cb35ba8;
}



// FUNCTION 1464640f2 FUN_1464640f2 body=47 status=ok
// SIG undefined FUN_1464640f2(void)

longlong FUN_1464640f2(void)

{
  if (DAT_14cb35bd0 == 0) {
    FUN_1409ce572(&DAT_14cb35bd0,&PTR_FUN_14ad518a0);
  }
  return DAT_14cb35bd0;
}



// FUNCTION 146464121 FUN_146464121 body=47 status=ok
// SIG undefined FUN_146464121(void)

longlong FUN_146464121(void)

{
  if (DAT_14cb35be8 == 0) {
    FUN_1409ce572(&DAT_14cb35be8,&PTR_FUN_14ad51930);
  }
  return DAT_14cb35be8;
}



// FUNCTION 146464150 FUN_146464150 body=55 status=ok
// SIG undefined FUN_146464150(void)

void FUN_146464150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c08 = FUN_140002ddd(FUN_146464187,uVar1,L"NiagaraAssetTagDefinition");
  }
  return;
}



// FUNCTION 146464187 FUN_146464187 body=47 status=ok
// SIG undefined FUN_146464187(void)

longlong FUN_146464187(void)

{
  if (DAT_14cb35c00 == 0) {
    FUN_14086a14e(&DAT_14cb35c00,&PTR_FUN_14ad51bc8);
  }
  return DAT_14cb35c00;
}



// FUNCTION 1464641b6 FUN_1464641b6 body=43 status=ok
// SIG undefined FUN_1464641b6(void)

void FUN_1464641b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad5a580;
  return;
}



// FUNCTION 1464641e2 FUN_1464641e2 body=55 status=ok
// SIG undefined FUN_1464641e2(void)

void FUN_1464641e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35c20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35c20 = FUN_140002ddd(FUN_146464219,uVar1,L"NiagaraAssetTagDefinitionReference");
  }
  return;
}



// FUNCTION 146464219 FUN_146464219 body=47 status=ok
// SIG undefined FUN_146464219(void)

longlong FUN_146464219(void)

{
  if (DAT_14cb35c18 == 0) {
    FUN_14086a14e(&DAT_14cb35c18,&PTR_FUN_14ad51cd0);
  }
  return DAT_14cb35c18;
}



// FUNCTION 146464248 FUN_146464248 body=43 status=ok
// SIG undefined FUN_146464248(void)

void FUN_146464248(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ad5a6f0;
  return;
}



// FUNCTION 146464273 FUN_146464273 body=71 status=ok
// SIG undefined FUN_146464273(void)

void FUN_146464273(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad51f60;
  FUN_144a5dc74(puVar1 + 5);
  FUN_144a5dc74(puVar1 + 7);
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0xffffffff;
  return;
}



// FUNCTION 1464642ba FUN_1464642ba body=47 status=ok
// SIG undefined FUN_1464642ba(void)

longlong FUN_1464642ba(void)

{
  if (DAT_14cb35c38 == 0) {
    FUN_14073dd9a(&DAT_14cb35c38,&PTR_LAB_14ad51f18);
  }
  return DAT_14cb35c38;
}



// FUNCTION 1464642e9 FUN_1464642e9 body=47 status=ok
// SIG undefined FUN_1464642e9(void)

longlong FUN_1464642e9(void)

{
  if (DAT_14cb35c48 == 0) {
    FUN_1409ce572(&DAT_14cb35c48,&PTR_FUN_14ad52310);
  }
  return DAT_14cb35c48;
}



// FUNCTION 146464318 FUN_146464318 body=47 status=ok
// SIG undefined FUN_146464318(void)

longlong FUN_146464318(void)

{
  if (DAT_14cb35c60 == 0) {
    FUN_1409ce572(&DAT_14cb35c60,&PTR_FUN_14ad523b0);
  }
  return DAT_14cb35c60;
}



// FUNCTION 146464347 FUN_146464347 body=49 status=ok
// SIG undefined FUN_146464347(void)

longlong FUN_146464347(void)

{
  if (DAT_14cb35c78 == 0) {
    FUN_1409ce572(&DAT_14cb35c78,&PTR_FUN_14ad52440);
  }
  return DAT_14cb35c78;
}



// FUNCTION 146464378 FUN_146464378 body=49 status=ok
// SIG undefined FUN_146464378(void)

longlong FUN_146464378(void)

{
  if (DAT_14cb35c90 == 0) {
    FUN_1409ce572(&DAT_14cb35c90,&PTR_FUN_14ad524d0);
  }
  return DAT_14cb35c90;
}



// FUNCTION 1464643a9 FUN_1464643a9 body=47 status=ok
// SIG undefined FUN_1464643a9(void)

longlong FUN_1464643a9(void)

{
  if (DAT_14cb35ca8 == 0) {
    FUN_1409ce572(&DAT_14cb35ca8,&PTR_FUN_14ad52550);
  }
  return DAT_14cb35ca8;
}



// FUNCTION 1464643d8 FUN_1464643d8 body=47 status=ok
// SIG undefined FUN_1464643d8(void)

longlong FUN_1464643d8(void)

{
  if (DAT_14cb35cc0 == 0) {
    FUN_1409ce572(&DAT_14cb35cc0,&PTR_FUN_14ad525e0);
  }
  return DAT_14cb35cc0;
}



// FUNCTION 146464407 FUN_146464407 body=47 status=ok
// SIG undefined FUN_146464407(void)

longlong FUN_146464407(void)

{
  if (DAT_14cb35cd8 == 0) {
    FUN_1409ce572(&DAT_14cb35cd8,&PTR_FUN_14ad52660);
  }
  return DAT_14cb35cd8;
}



// FUNCTION 146464436 FUN_146464436 body=47 status=ok
// SIG undefined FUN_146464436(void)

longlong FUN_146464436(void)

{
  if (DAT_14cb35cf0 == 0) {
    FUN_1409ce572(&DAT_14cb35cf0,&PTR_FUN_14ad52700);
  }
  return DAT_14cb35cf0;
}



// FUNCTION 146464465 FUN_146464465 body=49 status=ok
// SIG undefined FUN_146464465(void)

longlong FUN_146464465(void)

{
  if (DAT_14cb35d08 == 0) {
    FUN_1409ce572(&DAT_14cb35d08,&PTR_FUN_14ad52770);
  }
  return DAT_14cb35d08;
}



// FUNCTION 146464496 FUN_146464496 body=49 status=ok
// SIG undefined FUN_146464496(void)

longlong FUN_146464496(void)

{
  if (DAT_14cb35d20 == 0) {
    FUN_1409ce572(&DAT_14cb35d20,&PTR_FUN_14ad527f0);
  }
  return DAT_14cb35d20;
}



// FUNCTION 1464644c7 FUN_1464644c7 body=47 status=ok
// SIG undefined FUN_1464644c7(void)

longlong FUN_1464644c7(void)

{
  if (DAT_14cb35d38 == 0) {
    FUN_1409ce572(&DAT_14cb35d38,&PTR_FUN_14ad52860);
  }
  return DAT_14cb35d38;
}



// FUNCTION 1464644f6 FUN_1464644f6 body=47 status=ok
// SIG undefined FUN_1464644f6(void)

longlong FUN_1464644f6(void)

{
  if (DAT_14cb35d50 == 0) {
    FUN_1409ce572(&DAT_14cb35d50,&PTR_FUN_14ad528d0);
  }
  return DAT_14cb35d50;
}



// FUNCTION 146464525 FUN_146464525 body=47 status=ok
// SIG undefined FUN_146464525(void)

longlong FUN_146464525(void)

{
  if (DAT_14cb35d68 == 0) {
    FUN_1409ce572(&DAT_14cb35d68,&PTR_FUN_14ad52950);
  }
  return DAT_14cb35d68;
}



// FUNCTION 146464554 FUN_146464554 body=47 status=ok
// SIG undefined FUN_146464554(void)

longlong FUN_146464554(void)

{
  if (DAT_14cb35d80 == 0) {
    FUN_1409ce572(&DAT_14cb35d80,&PTR_FUN_14ad52a00);
  }
  return DAT_14cb35d80;
}



// FUNCTION 146464583 FUN_146464583 body=47 status=ok
// SIG undefined FUN_146464583(void)

longlong FUN_146464583(void)

{
  if (DAT_14cb35d98 == 0) {
    FUN_1409ce572(&DAT_14cb35d98,&PTR_FUN_14ad52ad0);
  }
  return DAT_14cb35d98;
}



// FUNCTION 1464645b2 FUN_1464645b2 body=55 status=ok
// SIG undefined FUN_1464645b2(void)

void FUN_1464645b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35db8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35db8 = FUN_140002ddd(FUN_1464645e9,uVar1,L"NiagaraDataSetID");
  }
  return;
}



// FUNCTION 1464645e9 FUN_1464645e9 body=49 status=ok
// SIG undefined FUN_1464645e9(void)

longlong FUN_1464645e9(void)

{
  if (DAT_14cb35db0 == 0) {
    FUN_14086a14e(&DAT_14cb35db0,&PTR_FUN_14ad52c10);
  }
  return DAT_14cb35db0;
}



// FUNCTION 14646461a FUN_14646461a body=43 status=ok
// SIG undefined FUN_14646461a(void)

void FUN_14646461a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ad5b340;
  return;
}



// FUNCTION 146464646 FUN_146464646 body=55 status=ok
// SIG undefined FUN_146464646(void)

void FUN_146464646(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35dd0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35dd0 = FUN_140002ddd(FUN_14646467d,uVar1,L"NiagaraDataSetProperties");
  }
  return;
}



// FUNCTION 14646467d FUN_14646467d body=47 status=ok
// SIG undefined FUN_14646467d(void)

longlong FUN_14646467d(void)

{
  if (DAT_14cb35dc8 == 0) {
    FUN_14086a14e(&DAT_14cb35dc8,&PTR_FUN_14ad52d78);
  }
  return DAT_14cb35dc8;
}



// FUNCTION 1464646ac FUN_1464646ac body=43 status=ok
// SIG undefined FUN_1464646ac(void)

void FUN_1464646ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad5b4b0;
  return;
}



// FUNCTION 1464646d8 FUN_1464646d8 body=55 status=ok
// SIG undefined FUN_1464646d8(void)

void FUN_1464646d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35de8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35de8 = FUN_140002ddd(FUN_14646470f,uVar1,L"NiagaraScriptDataUsageInfo");
  }
  return;
}



// FUNCTION 14646470f FUN_14646470f body=47 status=ok
// SIG undefined FUN_14646470f(void)

longlong FUN_14646470f(void)

{
  if (DAT_14cb35de0 == 0) {
    FUN_14086a14e(&DAT_14cb35de0,&PTR_FUN_14ad52e68);
  }
  return DAT_14cb35de0;
}



// FUNCTION 14646473e FUN_14646473e body=43 status=ok
// SIG undefined FUN_14646473e(void)

void FUN_14646473e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ad5b610;
  return;
}



// FUNCTION 14646476a FUN_14646476a body=55 status=ok
// SIG undefined FUN_14646476a(void)

void FUN_14646476a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e00 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e00 = FUN_140002ddd(FUN_1464647a1,uVar1,L"NiagaraFunctionSignature");
  }
  return;
}



// FUNCTION 1464647a1 FUN_1464647a1 body=47 status=ok
// SIG undefined FUN_1464647a1(void)

longlong FUN_1464647a1(void)

{
  if (DAT_14cb35df8 == 0) {
    FUN_14086a14e(&DAT_14cb35df8,&PTR_FUN_14ad53708);
  }
  return DAT_14cb35df8;
}



// FUNCTION 1464647d0 FUN_1464647d0 body=43 status=ok
// SIG undefined FUN_1464647d0(void)

void FUN_1464647d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14ad5b770;
  return;
}



// FUNCTION 1464647fc FUN_1464647fc body=55 status=ok
// SIG undefined FUN_1464647fc(void)

void FUN_1464647fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e18 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e18 = FUN_140002ddd(FUN_146464833,uVar1,L"NiagaraScriptUObjectCompileInfo");
  }
  return;
}



// FUNCTION 146464833 FUN_146464833 body=47 status=ok
// SIG undefined FUN_146464833(void)

longlong FUN_146464833(void)

{
  if (DAT_14cb35e10 == 0) {
    FUN_14086a14e(&DAT_14cb35e10,&PTR_FUN_14ad53980);
  }
  return DAT_14cb35e10;
}



// FUNCTION 146464862 FUN_146464862 body=43 status=ok
// SIG undefined FUN_146464862(void)

void FUN_146464862(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad5b8d0;
  return;
}



// FUNCTION 14646488e FUN_14646488e body=55 status=ok
// SIG undefined FUN_14646488e(void)

void FUN_14646488e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e30 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e30 = FUN_140002ddd(FUN_1464648c5,uVar1,L"NiagaraResolvedUObjectInfo");
  }
  return;
}



// FUNCTION 1464648c5 FUN_1464648c5 body=47 status=ok
// SIG undefined FUN_1464648c5(void)

longlong FUN_1464648c5(void)

{
  if (DAT_14cb35e28 == 0) {
    FUN_14086a14e(&DAT_14cb35e28,&PTR_FUN_14ad53b08);
  }
  return DAT_14cb35e28;
}



// FUNCTION 1464648f4 FUN_1464648f4 body=43 status=ok
// SIG undefined FUN_1464648f4(void)

void FUN_1464648f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad5ba30;
  return;
}



// FUNCTION 146464920 FUN_146464920 body=55 status=ok
// SIG undefined FUN_146464920(void)

void FUN_146464920(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e48 = FUN_140002ddd(FUN_146464957,uVar1,L"NiagaraExternalUObjectInfo");
  }
  return;
}



// FUNCTION 146464957 FUN_146464957 body=47 status=ok
// SIG undefined FUN_146464957(void)

longlong FUN_146464957(void)

{
  if (DAT_14cb35e40 == 0) {
    FUN_14086a14e(&DAT_14cb35e40,&PTR_FUN_14ad53c30);
  }
  return DAT_14cb35e40;
}



// FUNCTION 146464986 FUN_146464986 body=43 status=ok
// SIG undefined FUN_146464986(void)

void FUN_146464986(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ad5bb90;
  return;
}



// FUNCTION 1464649b2 FUN_1464649b2 body=55 status=ok
// SIG undefined FUN_1464649b2(void)

void FUN_1464649b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e60 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e60 = FUN_140002ddd(FUN_1464649e9,uVar1,L"NiagaraScriptDataInterfaceInfo");
  }
  return;
}



// FUNCTION 1464649e9 FUN_1464649e9 body=47 status=ok
// SIG undefined FUN_1464649e9(void)

longlong FUN_1464649e9(void)

{
  if (DAT_14cb35e58 == 0) {
    FUN_14086a14e(&DAT_14cb35e58,&PTR_FUN_14ad53f40);
  }
  return DAT_14cb35e58;
}



// FUNCTION 146464a18 FUN_146464a18 body=43 status=ok
// SIG undefined FUN_146464a18(void)

void FUN_146464a18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad5bcf0;
  return;
}



// FUNCTION 146464a44 FUN_146464a44 body=55 status=ok
// SIG undefined FUN_146464a44(void)

void FUN_146464a44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e78 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e78 = FUN_140002ddd(FUN_146464a7b,uVar1,L"NiagaraResolvedUserDataInterfaceBinding");
  }
  return;
}



// FUNCTION 146464a7b FUN_146464a7b body=47 status=ok
// SIG undefined FUN_146464a7b(void)

longlong FUN_146464a7b(void)

{
  if (DAT_14cb35e70 == 0) {
    FUN_14086a14e(&DAT_14cb35e70,&PTR_FUN_14ad540c8);
  }
  return DAT_14cb35e70;
}



// FUNCTION 146464aaa FUN_146464aaa body=43 status=ok
// SIG undefined FUN_146464aaa(void)

void FUN_146464aaa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ad5be50;
  return;
}



// FUNCTION 146464ad6 FUN_146464ad6 body=55 status=ok
// SIG undefined FUN_146464ad6(void)

void FUN_146464ad6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35e90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35e90 = FUN_140002ddd(FUN_146464b0d,uVar1,L"NiagaraScriptResolvedDataInterfaceInfo");
  }
  return;
}



// FUNCTION 146464b0d FUN_146464b0d body=47 status=ok
// SIG undefined FUN_146464b0d(void)

longlong FUN_146464b0d(void)

{
  if (DAT_14cb35e88 == 0) {
    FUN_14086a14e(&DAT_14cb35e88,&PTR_FUN_14ad543f8);
  }
  return DAT_14cb35e88;
}



// FUNCTION 146464b3c FUN_146464b3c body=43 status=ok
// SIG undefined FUN_146464b3c(void)

void FUN_146464b3c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad5bfb0;
  return;
}



// FUNCTION 146464b68 FUN_146464b68 body=55 status=ok
// SIG undefined FUN_146464b68(void)

void FUN_146464b68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ea8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ea8 = FUN_140002ddd(FUN_146464b9f,uVar1,L"NiagaraScriptDataInterfaceCompileInfo");
  }
  return;
}



// FUNCTION 146464b9f FUN_146464b9f body=47 status=ok
// SIG undefined FUN_146464b9f(void)

longlong FUN_146464b9f(void)

{
  if (DAT_14cb35ea0 == 0) {
    FUN_14086a14e(&DAT_14cb35ea0,&PTR_FUN_14ad54690);
  }
  return DAT_14cb35ea0;
}



// FUNCTION 146464bce FUN_146464bce body=43 status=ok
// SIG undefined FUN_146464bce(void)

void FUN_146464bce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ad5c110;
  return;
}



// FUNCTION 146464bfa FUN_146464bfa body=55 status=ok
// SIG undefined FUN_146464bfa(void)

void FUN_146464bfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ec0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ec0 = FUN_140002ddd(FUN_146464c31,uVar1,L"NiagaraStatScope");
  }
  return;
}



// FUNCTION 146464c31 FUN_146464c31 body=47 status=ok
// SIG undefined FUN_146464c31(void)

longlong FUN_146464c31(void)

{
  if (DAT_14cb35eb8 == 0) {
    FUN_14086a14e(&DAT_14cb35eb8,&PTR_FUN_14ad54798);
  }
  return DAT_14cb35eb8;
}



// FUNCTION 146464c60 FUN_146464c60 body=43 status=ok
// SIG undefined FUN_146464c60(void)

void FUN_146464c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ad5c270;
  return;
}



// FUNCTION 146464c8c FUN_146464c8c body=55 status=ok
// SIG undefined FUN_146464c8c(void)

void FUN_146464c8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ed8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ed8 = FUN_140002ddd(FUN_146464cc3,uVar1,L"VMFunctionSpecifier");
  }
  return;
}



// FUNCTION 146464cc3 FUN_146464cc3 body=47 status=ok
// SIG undefined FUN_146464cc3(void)

longlong FUN_146464cc3(void)

{
  if (DAT_14cb35ed0 == 0) {
    FUN_14086a14e(&DAT_14cb35ed0,&PTR_FUN_14ad54898);
  }
  return DAT_14cb35ed0;
}



// FUNCTION 146464cf2 FUN_146464cf2 body=43 status=ok
// SIG undefined FUN_146464cf2(void)

void FUN_146464cf2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ad5c3d0;
  return;
}



// FUNCTION 146464d1d FUN_146464d1d body=47 status=ok
// SIG undefined FUN_146464d1d(void)

longlong FUN_146464d1d(void)

{
  if (DAT_14cb35ee8 == 0) {
    FUN_14086a14e(&DAT_14cb35ee8,&PTR_FUN_14ad54c38);
  }
  return DAT_14cb35ee8;
}



// FUNCTION 146464d4c FUN_146464d4c body=43 status=ok
// SIG undefined FUN_146464d4c(void)

void FUN_146464d4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14ad5c530;
  return;
}



// FUNCTION 146464d78 FUN_146464d78 body=55 status=ok
// SIG undefined FUN_146464d78(void)

void FUN_146464d78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f08 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f08 = FUN_140002ddd(FUN_146464daf,uVar1,L"NiagaraSystemUpdateContext");
  }
  return;
}



// FUNCTION 146464daf FUN_146464daf body=47 status=ok
// SIG undefined FUN_146464daf(void)

longlong FUN_146464daf(void)

{
  if (DAT_14cb35f00 == 0) {
    FUN_14086a14e(&DAT_14cb35f00,&PTR_FUN_14ad55090);
  }
  return DAT_14cb35f00;
}



// FUNCTION 146464dde FUN_146464dde body=43 status=ok
// SIG undefined FUN_146464dde(void)

void FUN_146464dde(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14ad5c6a0;
  return;
}



// FUNCTION 146464e09 FUN_146464e09 body=47 status=ok
// SIG undefined FUN_146464e09(void)

longlong FUN_146464e09(void)

{
  if (DAT_14cb35f18 == 0) {
    FUN_1409ce572(&DAT_14cb35f18,&PTR_FUN_14ad551b0);
  }
  return DAT_14cb35f18;
}



// FUNCTION 146464e38 FUN_146464e38 body=47 status=ok
// SIG undefined FUN_146464e38(void)

longlong FUN_146464e38(void)

{
  if (DAT_14cb35f30 == 0) {
    FUN_1409ce572(&DAT_14cb35f30,&PTR_FUN_14ad55260);
  }
  return DAT_14cb35f30;
}



// FUNCTION 146464e67 FUN_146464e67 body=47 status=ok
// SIG undefined FUN_146464e67(void)

longlong FUN_146464e67(void)

{
  if (DAT_14cb35f48 == 0) {
    FUN_1409ce572(&DAT_14cb35f48,&PTR_FUN_14ad552f0);
  }
  return DAT_14cb35f48;
}



// FUNCTION 146464e96 FUN_146464e96 body=47 status=ok
// SIG undefined FUN_146464e96(void)

longlong FUN_146464e96(void)

{
  if (DAT_14cb35f60 == 0) {
    FUN_1409ce572(&DAT_14cb35f60,&PTR_FUN_14ad55380);
  }
  return DAT_14cb35f60;
}



// FUNCTION 146464ec5 FUN_146464ec5 body=47 status=ok
// SIG undefined FUN_146464ec5(void)

longlong FUN_146464ec5(void)

{
  if (DAT_14cb35f78 == 0) {
    FUN_1409ce572(&DAT_14cb35f78,&PTR_FUN_14ad55430);
  }
  return DAT_14cb35f78;
}



// FUNCTION 146464ef4 FUN_146464ef4 body=55 status=ok
// SIG undefined FUN_146464ef4(void)

void FUN_146464ef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f98 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f98 = FUN_140002ddd(FUN_146464f2b,uVar1,L"NiagaraVariableInfo");
  }
  return;
}



// FUNCTION 146464f2b FUN_146464f2b body=47 status=ok
// SIG undefined FUN_146464f2b(void)

longlong FUN_146464f2b(void)

{
  if (DAT_14cb35f90 == 0) {
    FUN_14086a14e(&DAT_14cb35f90,&PTR_FUN_14ad55580);
  }
  return DAT_14cb35f90;
}



// FUNCTION 146464f5a FUN_146464f5a body=43 status=ok
// SIG undefined FUN_146464f5a(void)

void FUN_146464f5a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ad5cd40;
  return;
}



// FUNCTION 146464f85 FUN_146464f85 body=49 status=ok
// SIG undefined FUN_146464f85(void)

longlong FUN_146464f85(void)

{
  if (DAT_14cb35fa8 == 0) {
    FUN_1409ce572(&DAT_14cb35fa8,&PTR_FUN_14ad55600);
  }
  return DAT_14cb35fa8;
}



// FUNCTION 146464fb6 FUN_146464fb6 body=55 status=ok
// SIG undefined FUN_146464fb6(void)

void FUN_146464fb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35fc8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35fc8 = FUN_140002ddd(FUN_14181d592,uVar1,L"NiagaraVariableAttributeBinding");
  }
  return;
}



// FUNCTION 146464fee FUN_146464fee body=43 status=ok
// SIG undefined FUN_146464fee(void)

void FUN_146464fee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ad5cf30;
  return;
}



// FUNCTION 14646501a FUN_14646501a body=55 status=ok
// SIG undefined FUN_14646501a(void)

void FUN_14646501a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35fe0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35fe0 = FUN_140002ddd(FUN_146465051,uVar1,L"NiagaraMaterialAttributeBinding");
  }
  return;
}



// FUNCTION 146465051 FUN_146465051 body=47 status=ok
// SIG undefined FUN_146465051(void)

longlong FUN_146465051(void)

{
  if (DAT_14cb35fd8 == 0) {
    FUN_14086a14e(&DAT_14cb35fd8,&PTR_FUN_14ad55ad0);
  }
  return DAT_14cb35fd8;
}



// FUNCTION 146465080 FUN_146465080 body=43 status=ok
// SIG undefined FUN_146465080(void)

void FUN_146465080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000002c;
  *puVar1 = &PTR_FUN_14ad5d090;
  return;
}



// FUNCTION 1464650ac FUN_1464650ac body=55 status=ok
// SIG undefined FUN_1464650ac(void)

void FUN_1464650ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ff8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ff8 = FUN_140002ddd(FUN_1464650e3,uVar1,L"NiagaraVariableDataInterfaceBinding");
  }
  return;
}



// FUNCTION 1464650e3 FUN_1464650e3 body=47 status=ok
// SIG undefined FUN_1464650e3(void)

longlong FUN_1464650e3(void)

{
  if (DAT_14cb35ff0 == 0) {
    FUN_14086a14e(&DAT_14cb35ff0,&PTR_FUN_14ad55bd0);
  }
  return DAT_14cb35ff0;
}



// FUNCTION 146465112 FUN_146465112 body=43 status=ok
// SIG undefined FUN_146465112(void)

void FUN_146465112(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad5d1f0;
  return;
}



// FUNCTION 14646513e FUN_14646513e body=55 status=ok
// SIG undefined FUN_14646513e(void)

void FUN_14646513e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36010 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36010 = FUN_140002ddd(FUN_146465175,uVar1,L"NiagaraScriptVariableBinding");
  }
  return;
}



// FUNCTION 146465175 FUN_146465175 body=47 status=ok
// SIG undefined FUN_146465175(void)

longlong FUN_146465175(void)

{
  if (DAT_14cb36008 == 0) {
    FUN_14086a14e(&DAT_14cb36008,&PTR_FUN_14ad55ca8);
  }
  return DAT_14cb36008;
}



// FUNCTION 1464651a4 FUN_1464651a4 body=43 status=ok
// SIG undefined FUN_1464651a4(void)

void FUN_1464651a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14ad5d350;
  return;
}



// FUNCTION 1464651d0 FUN_1464651d0 body=55 status=ok
// SIG undefined FUN_1464651d0(void)

void FUN_1464651d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36028 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36028 = FUN_140002ddd(FUN_14181d5c3,uVar1,L"NiagaraUserParameterBinding");
  }
  return;
}



// FUNCTION 146465208 FUN_146465208 body=43 status=ok
// SIG undefined FUN_146465208(void)

void FUN_146465208(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad5d4c0;
  return;
}



// FUNCTION 146465233 FUN_146465233 body=47 status=ok
// SIG undefined FUN_146465233(void)

longlong FUN_146465233(void)

{
  if (DAT_14cb36038 == 0) {
    FUN_1409ce572(&DAT_14cb36038,&PTR_FUN_14ad55e10);
  }
  return DAT_14cb36038;
}



// FUNCTION 146465262 FUN_146465262 body=55 status=ok
// SIG undefined FUN_146465262(void)

void FUN_146465262(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36058 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36058 = FUN_140002ddd(FUN_146465299,uVar1,L"NiagaraCompileDependency");
  }
  return;
}



// FUNCTION 146465299 FUN_146465299 body=47 status=ok
// SIG undefined FUN_146465299(void)

longlong FUN_146465299(void)

{
  if (DAT_14cb36050 == 0) {
    FUN_14086a14e(&DAT_14cb36050,&PTR_FUN_14ad560d8);
  }
  return DAT_14cb36050;
}



// FUNCTION 1464652c8 FUN_1464652c8 body=43 status=ok
// SIG undefined FUN_1464652c8(void)

void FUN_1464652c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad5d6f0;
  return;
}



// FUNCTION 1464652f3 FUN_1464652f3 body=47 status=ok
// SIG undefined FUN_1464652f3(void)

longlong FUN_1464652f3(void)

{
  if (DAT_14cb36068 == 0) {
    FUN_1409ce572(&DAT_14cb36068,&PTR_FUN_14ad561a0);
  }
  return DAT_14cb36068;
}



// FUNCTION 146465322 FUN_146465322 body=47 status=ok
// SIG undefined FUN_146465322(void)

longlong FUN_146465322(void)

{
  if (DAT_14cb36080 == 0) {
    FUN_1409ce572(&DAT_14cb36080,&PTR_FUN_14ad56210);
  }
  return DAT_14cb36080;
}



// FUNCTION 146465351 FUN_146465351 body=47 status=ok
// SIG undefined FUN_146465351(void)

longlong FUN_146465351(void)

{
  if (DAT_14cb36098 == 0) {
    FUN_1409ce572(&DAT_14cb36098,&PTR_FUN_14ad562e0);
  }
  return DAT_14cb36098;
}



// FUNCTION 146465380 FUN_146465380 body=47 status=ok
// SIG undefined FUN_146465380(void)

longlong FUN_146465380(void)

{
  if (DAT_14cb360b0 == 0) {
    FUN_1409ce572(&DAT_14cb360b0,&PTR_FUN_14ad563a0);
  }
  return DAT_14cb360b0;
}



// FUNCTION 1464653b0 FUN_1464653b0 body=55 status=ok
// SIG undefined FUN_1464653b0(void)

void FUN_1464653b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb360e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb360e0 = FUN_140002ddd(FUN_1464653e7,uVar1,L"NiagaraScriptAsyncCompileData");
  }
  return;
}



// FUNCTION 1464653e7 FUN_1464653e7 body=47 status=ok
// SIG undefined FUN_1464653e7(void)

longlong FUN_1464653e7(void)

{
  if (DAT_14cb360d8 == 0) {
    FUN_14086a14e(&DAT_14cb360d8,&PTR_FUN_14ad56c58);
  }
  return DAT_14cb360d8;
}



// FUNCTION 146465416 FUN_146465416 body=43 status=ok
// SIG undefined FUN_146465416(void)

void FUN_146465416(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000110;
  *puVar1 = &PTR_FUN_14ad5dc90;
  return;
}



// FUNCTION 146465442 FUN_146465442 body=55 status=ok
// SIG undefined FUN_146465442(void)

void FUN_146465442(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb360f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb360f8 = FUN_140002ddd(FUN_146465479,uVar1,L"NiagaraSystemAsyncCompileResults");
  }
  return;
}



// FUNCTION 146465479 FUN_146465479 body=47 status=ok
// SIG undefined FUN_146465479(void)

longlong FUN_146465479(void)

{
  if (DAT_14cb360f0 == 0) {
    FUN_14086a14e(&DAT_14cb360f0,&PTR_FUN_14ad56e38);
  }
  return DAT_14cb360f0;
}



// FUNCTION 1464654a8 FUN_1464654a8 body=43 status=ok
// SIG undefined FUN_1464654a8(void)

void FUN_1464654a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14ad5ddf0;
  return;
}



// FUNCTION 1464654d4 FUN_1464654d4 body=55 status=ok
// SIG undefined FUN_1464654d4(void)

void FUN_1464654d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36110 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36110 = FUN_140002ddd(FUN_14646550b,uVar1,L"NiagaraCompileHashVisitorDebugInfo");
  }
  return;
}



// FUNCTION 14646550b FUN_14646550b body=47 status=ok
// SIG undefined FUN_14646550b(void)

longlong FUN_14646550b(void)

{
  if (DAT_14cb36108 == 0) {
    FUN_14086a14e(&DAT_14cb36108,&PTR_FUN_14ad57090);
  }
  return DAT_14cb36108;
}



// FUNCTION 14646553a FUN_14646553a body=43 status=ok
// SIG undefined FUN_14646553a(void)

void FUN_14646553a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad5df50;
  return;
}



// FUNCTION 146465565 FUN_146465565 body=49 status=ok
// SIG undefined FUN_146465565(void)

longlong FUN_146465565(void)

{
  if (DAT_14cb36120 == 0) {
    FUN_1409ce572(&DAT_14cb36120,&PTR_FUN_14ad57160);
  }
  return DAT_14cb36120;
}



// FUNCTION 146465596 FUN_146465596 body=35 status=ok
// SIG undefined FUN_146465596(void)

void FUN_146465596(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad57240;
  return;
}



// FUNCTION 1464655b9 FUN_1464655b9 body=47 status=ok
// SIG undefined FUN_1464655b9(void)

longlong FUN_1464655b9(void)

{
  if (DAT_14cb36140 == 0) {
    FUN_14073dd9a(&DAT_14cb36140,&PTR_LAB_14ad571f8);
  }
  return DAT_14cb36140;
}



// FUNCTION 1464655e8 FUN_1464655e8 body=49 status=ok
// SIG undefined FUN_1464655e8(void)

longlong FUN_1464655e8(void)

{
  if (DAT_14cb361c8 == 0) {
    FUN_14073dd9a(&DAT_14cb361c8,&PTR_LAB_14ad589c0);
  }
  return DAT_14cb361c8;
}



// FUNCTION 146465619 FUN_146465619 body=47 status=ok
// SIG undefined FUN_146465619(void)

longlong FUN_146465619(void)

{
  if (DAT_14cb36150 == 0) {
    FUN_14000fc22(&DAT_14cb36150,&PTR_FUN_14ad57628);
  }
  return DAT_14cb36150;
}



// FUNCTION 146465648 FUN_146465648 body=47 status=ok
// SIG undefined FUN_146465648(void)

longlong FUN_146465648(void)

{
  if (DAT_14cb36158 == 0) {
    FUN_14000fc22(&DAT_14cb36158,&PTR_FUN_14ad576a8);
  }
  return DAT_14cb36158;
}



// FUNCTION 146465677 FUN_146465677 body=47 status=ok
// SIG undefined FUN_146465677(void)

longlong FUN_146465677(void)

{
  if (DAT_14cb36160 == 0) {
    FUN_14000fc22(&DAT_14cb36160,&PTR_FUN_14ad57810);
  }
  return DAT_14cb36160;
}



// FUNCTION 1464656a6 FUN_1464656a6 body=47 status=ok
// SIG undefined FUN_1464656a6(void)

longlong FUN_1464656a6(void)

{
  if (DAT_14cb36168 == 0) {
    FUN_14000fc22(&DAT_14cb36168,&PTR_FUN_14ad57970);
  }
  return DAT_14cb36168;
}



// FUNCTION 1464656d5 FUN_1464656d5 body=47 status=ok
// SIG undefined FUN_1464656d5(void)

longlong FUN_1464656d5(void)

{
  if (DAT_14cb36170 == 0) {
    FUN_14000fc22(&DAT_14cb36170,&PTR_FUN_14ad57ad0);
  }
  return DAT_14cb36170;
}



// FUNCTION 146465704 FUN_146465704 body=47 status=ok
// SIG undefined FUN_146465704(void)

longlong FUN_146465704(void)

{
  if (DAT_14cb36178 == 0) {
    FUN_14000fc22(&DAT_14cb36178,&PTR_FUN_14ad57c28);
  }
  return DAT_14cb36178;
}



// FUNCTION 146465733 FUN_146465733 body=47 status=ok
// SIG undefined FUN_146465733(void)

longlong FUN_146465733(void)

{
  if (DAT_14cb36180 == 0) {
    FUN_14000fc22(&DAT_14cb36180,&PTR_FUN_14ad57d78);
  }
  return DAT_14cb36180;
}



// FUNCTION 146465762 FUN_146465762 body=47 status=ok
// SIG undefined FUN_146465762(void)

longlong FUN_146465762(void)

{
  if (DAT_14cb36188 == 0) {
    FUN_14000fc22(&DAT_14cb36188,&PTR_FUN_14ad57ee0);
  }
  return DAT_14cb36188;
}



// FUNCTION 146465791 FUN_146465791 body=47 status=ok
// SIG undefined FUN_146465791(void)

longlong FUN_146465791(void)

{
  if (DAT_14cb36190 == 0) {
    FUN_14000fc22(&DAT_14cb36190,&PTR_FUN_14ad58040);
  }
  return DAT_14cb36190;
}



// FUNCTION 1464657c0 FUN_1464657c0 body=47 status=ok
// SIG undefined FUN_1464657c0(void)

longlong FUN_1464657c0(void)

{
  if (DAT_14cb36198 == 0) {
    FUN_14000fc22(&DAT_14cb36198,&PTR_FUN_14ad581a0);
  }
  return DAT_14cb36198;
}



// FUNCTION 1464657ef FUN_1464657ef body=47 status=ok
// SIG undefined FUN_1464657ef(void)

longlong FUN_1464657ef(void)

{
  if (DAT_14cb361a0 == 0) {
    FUN_14000fc22(&DAT_14cb361a0,&PTR_FUN_14ad58300);
  }
  return DAT_14cb361a0;
}



// FUNCTION 14646581e FUN_14646581e body=47 status=ok
// SIG undefined FUN_14646581e(void)

longlong FUN_14646581e(void)

{
  if (DAT_14cb361a8 == 0) {
    FUN_14000fc22(&DAT_14cb361a8,&PTR_FUN_14ad58460);
  }
  return DAT_14cb361a8;
}



// FUNCTION 14646584d FUN_14646584d body=47 status=ok
// SIG undefined FUN_14646584d(void)

longlong FUN_14646584d(void)

{
  if (DAT_14cb361b0 == 0) {
    FUN_14000fc22(&DAT_14cb361b0,&PTR_FUN_14ad585c0);
  }
  return DAT_14cb361b0;
}



// FUNCTION 14646587c FUN_14646587c body=47 status=ok
// SIG undefined FUN_14646587c(void)

longlong FUN_14646587c(void)

{
  if (DAT_14cb361b8 == 0) {
    FUN_14000fc22(&DAT_14cb361b8,&PTR_FUN_14ad58720);
  }
  return DAT_14cb361b8;
}



// FUNCTION 1464658ac FUN_1464658ac body=34 status=ok
// SIG undefined FUN_1464658ac(void)

void FUN_1464658ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458cbf68();
  FUN_14069c8d6(uVar1,&PTR_s_InitAccess_14ad58760,0xe);
  return;
}



// FUNCTION 1464658d3 FUN_1464658d3 body=54 status=ok
// SIG undefined FUN_1464658d3(void)

void FUN_1464658d3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad58a00;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 146465909 FUN_146465909 body=49 status=ok
// SIG undefined FUN_146465909(void)

longlong FUN_146465909(void)

{
  if (DAT_14cb36250 == 0) {
    FUN_14073dd9a(&DAT_14cb36250,&PTR_LAB_14ad59f60);
  }
  return DAT_14cb36250;
}



// FUNCTION 14646593a FUN_14646593a body=47 status=ok
// SIG undefined FUN_14646593a(void)

longlong FUN_14646593a(void)

{
  if (DAT_14cb361d8 == 0) {
    FUN_14000fc22(&DAT_14cb361d8,&PTR_FUN_14ad58ed8);
  }
  return DAT_14cb361d8;
}



// FUNCTION 146465969 FUN_146465969 body=47 status=ok
// SIG undefined FUN_146465969(void)

longlong FUN_146465969(void)

{
  if (DAT_14cb361e0 == 0) {
    FUN_14000fc22(&DAT_14cb361e0,&PTR_FUN_14ad58f58);
  }
  return DAT_14cb361e0;
}



// FUNCTION 146465998 FUN_146465998 body=47 status=ok
// SIG undefined FUN_146465998(void)

longlong FUN_146465998(void)

{
  if (DAT_14cb361e8 == 0) {
    FUN_14000fc22(&DAT_14cb361e8,&PTR_FUN_14ad59078);
  }
  return DAT_14cb361e8;
}



// FUNCTION 1464659c7 FUN_1464659c7 body=47 status=ok
// SIG undefined FUN_1464659c7(void)

longlong FUN_1464659c7(void)

{
  if (DAT_14cb361f0 == 0) {
    FUN_14000fc22(&DAT_14cb361f0,&PTR_FUN_14ad59198);
  }
  return DAT_14cb361f0;
}



// FUNCTION 1464659f6 FUN_1464659f6 body=47 status=ok
// SIG undefined FUN_1464659f6(void)

longlong FUN_1464659f6(void)

{
  if (DAT_14cb361f8 == 0) {
    FUN_14000fc22(&DAT_14cb361f8,&PTR_FUN_14ad592a8);
  }
  return DAT_14cb361f8;
}



// FUNCTION 146465a25 FUN_146465a25 body=47 status=ok
// SIG undefined FUN_146465a25(void)

longlong FUN_146465a25(void)

{
  if (DAT_14cb36200 == 0) {
    FUN_14000fc22(&DAT_14cb36200,&PTR_FUN_14ad593c0);
  }
  return DAT_14cb36200;
}



// FUNCTION 146465a54 FUN_146465a54 body=47 status=ok
// SIG undefined FUN_146465a54(void)

longlong FUN_146465a54(void)

{
  if (DAT_14cb36208 == 0) {
    FUN_14000fc22(&DAT_14cb36208,&PTR_FUN_14ad594d8);
  }
  return DAT_14cb36208;
}



// FUNCTION 146465a83 FUN_146465a83 body=47 status=ok
// SIG undefined FUN_146465a83(void)

longlong FUN_146465a83(void)

{
  if (DAT_14cb36210 == 0) {
    FUN_14000fc22(&DAT_14cb36210,&PTR_FUN_14ad59600);
  }
  return DAT_14cb36210;
}



// FUNCTION 146465ab2 FUN_146465ab2 body=47 status=ok
// SIG undefined FUN_146465ab2(void)

longlong FUN_146465ab2(void)

{
  if (DAT_14cb36218 == 0) {
    FUN_14000fc22(&DAT_14cb36218,&PTR_FUN_14ad59718);
  }
  return DAT_14cb36218;
}



// FUNCTION 146465ae1 FUN_146465ae1 body=47 status=ok
// SIG undefined FUN_146465ae1(void)

longlong FUN_146465ae1(void)

{
  if (DAT_14cb36220 == 0) {
    FUN_14000fc22(&DAT_14cb36220,&PTR_FUN_14ad59838);
  }
  return DAT_14cb36220;
}



// FUNCTION 146465b10 FUN_146465b10 body=47 status=ok
// SIG undefined FUN_146465b10(void)

longlong FUN_146465b10(void)

{
  if (DAT_14cb36228 == 0) {
    FUN_14000fc22(&DAT_14cb36228,&PTR_FUN_14ad59958);
  }
  return DAT_14cb36228;
}



// FUNCTION 146465b3f FUN_146465b3f body=47 status=ok
// SIG undefined FUN_146465b3f(void)

longlong FUN_146465b3f(void)

{
  if (DAT_14cb36230 == 0) {
    FUN_14000fc22(&DAT_14cb36230,&PTR_FUN_14ad59a78);
  }
  return DAT_14cb36230;
}



// FUNCTION 146465b6e FUN_146465b6e body=47 status=ok
// SIG undefined FUN_146465b6e(void)

longlong FUN_146465b6e(void)

{
  if (DAT_14cb36238 == 0) {
    FUN_14000fc22(&DAT_14cb36238,&PTR_FUN_14ad59b98);
  }
  return DAT_14cb36238;
}



// FUNCTION 146465b9d FUN_146465b9d body=47 status=ok
// SIG undefined FUN_146465b9d(void)

longlong FUN_146465b9d(void)

{
  if (DAT_14cb36240 == 0) {
    FUN_14000fc22(&DAT_14cb36240,&PTR_FUN_14ad59cb8);
  }
  return DAT_14cb36240;
}



// FUNCTION 146465bcc FUN_146465bcc body=34 status=ok
// SIG undefined FUN_146465bcc(void)

void FUN_146465bcc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458cc04c();
  FUN_14069c8d6(uVar1,&PTR_s_InitWrite_14ad59d00,0xe);
  return;
}



// FUNCTION 146465bf3 FUN_146465bf3 body=50 status=ok
// SIG undefined FUN_146465bf3(void)

void FUN_146465bf3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad59fa0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 146465c26 FUN_146465c26 body=137 status=ok
// SIG undefined FUN_146465c26(void)

void FUN_146465c26(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  switchD_143c3d4dc::caseD_1d();
  lVar3 = *(longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + 0x40 + lVar4) != 0) {
        FUN_1400020a8();
        *(undefined8 *)(lVar3 + 0x40 + lVar4) = 0;
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  FUN_145a3a8fb(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_148063610(param_1 + 0x30);
  return;
}



// FUNCTION 146465cb0 FUN_146465cb0 body=40 status=ok
// SIG undefined FUN_146465cb0(void)

undefined8 FUN_146465cb0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146465cd8 FUN_146465cd8 body=34 status=ok
// SIG undefined FUN_146465cd8(void)

undefined8 FUN_146465cd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465cfa FUN_146465cfa body=34 status=ok
// SIG undefined FUN_146465cfa(void)

undefined8 FUN_146465cfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465d1c FUN_146465d1c body=34 status=ok
// SIG undefined FUN_146465d1c(void)

undefined8 FUN_146465d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465d3e FUN_146465d3e body=34 status=ok
// SIG undefined FUN_146465d3e(void)

undefined8 FUN_146465d3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465d60 FUN_146465d60 body=34 status=ok
// SIG undefined FUN_146465d60(void)

undefined8 FUN_146465d60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465d82 FUN_146465d82 body=34 status=ok
// SIG undefined FUN_146465d82(void)

undefined8 FUN_146465d82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465da4 FUN_146465da4 body=34 status=ok
// SIG undefined FUN_146465da4(void)

undefined8 FUN_146465da4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465dc6 FUN_146465dc6 body=34 status=ok
// SIG undefined FUN_146465dc6(void)

undefined8 FUN_146465dc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465de8 FUN_146465de8 body=81 status=ok
// SIG undefined FUN_146465de8(void)

void FUN_146465de8(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 146465e3a FUN_146465e3a body=34 status=ok
// SIG undefined FUN_146465e3a(void)

undefined8 FUN_146465e3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465e5c FUN_146465e5c body=51 status=ok
// SIG undefined FUN_146465e5c(void)

void FUN_146465e5c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_144830b78(param_2 + 2,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 2) = uVar1;
  param_2[3] = 0;
  return;
}



// FUNCTION 146465e90 FUN_146465e90 body=34 status=ok
// SIG undefined FUN_146465e90(void)

undefined8 FUN_146465e90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465eb2 FUN_146465eb2 body=34 status=ok
// SIG undefined FUN_146465eb2(void)

undefined8 FUN_146465eb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465ed4 FUN_146465ed4 body=34 status=ok
// SIG undefined FUN_146465ed4(void)

undefined8 FUN_146465ed4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465ef6 FUN_146465ef6 body=34 status=ok
// SIG undefined FUN_146465ef6(void)

undefined8 FUN_146465ef6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465f18 FUN_146465f18 body=34 status=ok
// SIG undefined FUN_146465f18(void)

undefined8 FUN_146465f18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465f3a FUN_146465f3a body=34 status=ok
// SIG undefined FUN_146465f3a(void)

undefined8 FUN_146465f3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465f5c FUN_146465f5c body=34 status=ok
// SIG undefined FUN_146465f5c(void)

undefined8 FUN_146465f5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465f7e FUN_146465f7e body=34 status=ok
// SIG undefined FUN_146465f7e(void)

undefined8 FUN_146465f7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465fa0 FUN_146465fa0 body=34 status=ok
// SIG undefined FUN_146465fa0(void)

undefined8 FUN_146465fa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465fc2 FUN_146465fc2 body=34 status=ok
// SIG undefined FUN_146465fc2(void)

undefined8 FUN_146465fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146465fe4 FUN_146465fe4 body=34 status=ok
// SIG undefined FUN_146465fe4(void)

undefined8 FUN_146465fe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146466006 FUN_146466006 body=34 status=ok
// SIG undefined FUN_146466006(void)

undefined8 FUN_146466006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146466028 FUN_146466028 body=34 status=ok
// SIG undefined FUN_146466028(void)

undefined8 FUN_146466028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14646604a FUN_14646604a body=34 status=ok
// SIG undefined FUN_14646604a(void)

undefined8 FUN_14646604a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14646606c FUN_14646606c body=34 status=ok
// SIG undefined FUN_14646606c(void)

undefined8 FUN_14646606c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14646608e FUN_14646608e body=34 status=ok
// SIG undefined FUN_14646608e(void)

undefined8 FUN_14646608e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464660b0 FUN_1464660b0 body=34 status=ok
// SIG undefined FUN_1464660b0(void)

undefined8 FUN_1464660b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1464660d2 FUN_1464660d2 body=34 status=ok
// SIG undefined FUN_1464660d2(void)

undefined8 FUN_1464660d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}


