// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d07daa FUN_147d07daa body=138 status=ok
// SIG undefined FUN_147d07daa(void)

code * FUN_147d07daa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToPrevClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x144000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d07e34;
}



// FUNCTION 147d07e34 FUN_147d07e34 body=138 status=ok
// SIG undefined FUN_147d07e34(void)

code * FUN_147d07e34(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevScreenToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13c000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d07ebe;
}



// FUNCTION 147d07ebe FUN_147d07ebe body=138 status=ok
// SIG undefined FUN_147d07ebe(void)

code * FUN_147d07ebe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevClipToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x134000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d07f48;
}



// FUNCTION 147d07f48 FUN_147d07f48 body=138 status=ok
// SIG undefined FUN_147d07f48(void)

code * FUN_147d07f48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativePrevPreViewTranslationTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x132000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d07fd2;
}



// FUNCTION 147d07fd2 FUN_147d07fd2 body=138 status=ok
// SIG undefined FUN_147d07fd2(void)

code * FUN_147d07fd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevRelativeWorldViewOriginTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0805c;
}



// FUNCTION 147d0805c FUN_147d0805c body=138 status=ok
// SIG undefined FUN_147d0805c(void)

code * FUN_147d0805c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevRelativeWorldCameraOriginTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12e000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d080e6;
}



// FUNCTION 147d080e6 FUN_147d080e6 body=138 status=ok
// SIG undefined FUN_147d080e6(void)

code * FUN_147d080e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativePreViewTranslationTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12c000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08170;
}



// FUNCTION 147d08170 FUN_147d08170 body=138 status=ok
// SIG undefined FUN_147d08170(void)

code * FUN_147d08170(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeWorldViewOriginTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12a000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d081fa;
}



// FUNCTION 147d081fa FUN_147d081fa body=138 status=ok
// SIG undefined FUN_147d081fa(void)

code * FUN_147d081fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeWorldCameraOriginTO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x128000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08284;
}



// FUNCTION 147d08284 FUN_147d08284 body=138 status=ok
// SIG undefined FUN_147d08284(void)

code * FUN_147d08284(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewTilePosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x126000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0830e;
}



// FUNCTION 147d0830e FUN_147d0830e body=138 status=ok
// SIG undefined FUN_147d0830e(void)

code * FUN_147d0830e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevPreViewTranslationLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x124000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08398;
}



// FUNCTION 147d08398 FUN_147d08398 body=138 status=ok
// SIG undefined FUN_147d08398(void)

code * FUN_147d08398(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevPreViewTranslationHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x122000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08422;
}



// FUNCTION 147d08422 FUN_147d08422 body=138 status=ok
// SIG undefined FUN_147d08422(void)

code * FUN_147d08422(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldViewOriginLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x120000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d084ac;
}



// FUNCTION 147d084ac FUN_147d084ac body=138 status=ok
// SIG undefined FUN_147d084ac(void)

code * FUN_147d084ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldViewOriginHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11e000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08536;
}



// FUNCTION 147d08536 FUN_147d08536 body=138 status=ok
// SIG undefined FUN_147d08536(void)

code * FUN_147d08536(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldCameraOriginLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d085c0;
}



// FUNCTION 147d085c0 FUN_147d085c0 body=138 status=ok
// SIG undefined FUN_147d085c0(void)

code * FUN_147d085c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWorldCameraOriginHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11a000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0864a;
}



// FUNCTION 147d0864a FUN_147d0864a body=138 status=ok
// SIG undefined FUN_147d0864a(void)

code * FUN_147d0864a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevTranslatedWorldCameraOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x118000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d086d4;
}



// FUNCTION 147d086d4 FUN_147d086d4 body=138 status=ok
// SIG undefined FUN_147d086d4(void)

code * FUN_147d086d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevCameraViewToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x110000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0875e;
}



// FUNCTION 147d0875e FUN_147d0875e body=138 status=ok
// SIG undefined FUN_147d0875e(void)

code * FUN_147d0875e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevTranslatedWorldToCameraView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x108000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d087e8;
}



// FUNCTION 147d087e8 FUN_147d087e8 body=138 status=ok
// SIG undefined FUN_147d087e8(void)

code * FUN_147d087e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevViewToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08872;
}



// FUNCTION 147d08872 FUN_147d08872 body=138 status=ok
// SIG undefined FUN_147d08872(void)

code * FUN_147d08872(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevTranslatedWorldToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d088fc;
}



// FUNCTION 147d088fc FUN_147d088fc body=138 status=ok
// SIG undefined FUN_147d088fc(void)

code * FUN_147d088fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevTranslatedWorldToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf0000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08986;
}



// FUNCTION 147d08986 FUN_147d08986 body=138 status=ok
// SIG undefined FUN_147d08986(void)

code * FUN_147d08986(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevClipToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08a10;
}



// FUNCTION 147d08a10 FUN_147d08a10 body=138 status=ok
// SIG undefined FUN_147d08a10(void)

code * FUN_147d08a10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevViewToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08a9a;
}



// FUNCTION 147d08a9a FUN_147d08a9a body=138 status=ok
// SIG undefined FUN_147d08a9a(void)

code * FUN_147d08a9a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xde000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08b24;
}



// FUNCTION 147d08b24 FUN_147d08b24 body=138 status=ok
// SIG undefined FUN_147d08b24(void)

code * FUN_147d08b24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xdc000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08bae;
}



// FUNCTION 147d08bae FUN_147d08bae body=138 status=ok
// SIG undefined FUN_147d08bae(void)

code * FUN_147d08bae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldViewOriginLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xda000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08c38;
}



// FUNCTION 147d08c38 FUN_147d08c38 body=138 status=ok
// SIG undefined FUN_147d08c38(void)

code * FUN_147d08c38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldViewOriginHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08cc2;
}



// FUNCTION 147d08cc2 FUN_147d08cc2 body=138 status=ok
// SIG undefined FUN_147d08cc2(void)

code * FUN_147d08cc2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldCameraOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd6000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08d4c;
}



// FUNCTION 147d08d4c FUN_147d08d4c body=138 status=ok
// SIG undefined FUN_147d08d4c(void)

code * FUN_147d08d4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewOriginLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd4000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08dd6;
}



// FUNCTION 147d08dd6 FUN_147d08dd6 body=138 status=ok
// SIG undefined FUN_147d08dd6(void)

code * FUN_147d08dd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPositionScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd2000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08e60;
}



// FUNCTION 147d08e60 FUN_147d08e60 body=138 status=ok
// SIG undefined FUN_147d08e60(void)

code * FUN_147d08e60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvDeviceZToWorldZTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08eea;
}



// FUNCTION 147d08eea FUN_147d08eea body=138 status=ok
// SIG undefined FUN_147d08eea(void)

code * FUN_147d08eea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HMDViewNoRollRight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xce000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08f74;
}



// FUNCTION 147d08f74 FUN_147d08f74 body=138 status=ok
// SIG undefined FUN_147d08f74(void)

code * FUN_147d08f74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HMDViewNoRollUp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d08ffe;
}



// FUNCTION 147d08ffe FUN_147d08ffe body=138 status=ok
// SIG undefined FUN_147d08ffe(void)

code * FUN_147d08ffe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewRight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcb000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09088;
}



// FUNCTION 147d09088 FUN_147d09088 body=138 status=ok
// SIG undefined FUN_147d09088(void)

code * FUN_147d09088(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewUp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xca000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09112;
}



// FUNCTION 147d09112 FUN_147d09112 body=138 status=ok
// SIG undefined FUN_147d09112(void)

code * FUN_147d09112(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewForward";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc9000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0919c;
}



// FUNCTION 147d0919c FUN_147d0919c body=138 status=ok
// SIG undefined FUN_147d0919c(void)

code * FUN_147d0919c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewOriginHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09226;
}



// FUNCTION 147d09226 FUN_147d09226 body=138 status=ok
// SIG undefined FUN_147d09226(void)

code * FUN_147d09226(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevGbxForegroundInvProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d092b0;
}



// FUNCTION 147d092b0 FUN_147d092b0 body=138 status=ok
// SIG undefined FUN_147d092b0(void)

code * FUN_147d092b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevGbxForegroundProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463ff4ee;
}



// FUNCTION 147d0933a FUN_147d0933a body=138 status=ok
// SIG undefined FUN_147d0933a(void)

code * FUN_147d0933a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundInvProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d093c4;
}



// FUNCTION 147d093c4 FUN_147d093c4 body=138 status=ok
// SIG undefined FUN_147d093c4(void)

code * FUN_147d093c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0944e;
}



// FUNCTION 147d0944e FUN_147d0944e body=138 status=ok
// SIG undefined FUN_147d0944e(void)

code * FUN_147d0944e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundTranslatedWorldToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d094d8;
}



// FUNCTION 147d094d8 FUN_147d094d8 body=138 status=ok
// SIG undefined FUN_147d094d8(void)

code * FUN_147d094d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundScreenToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09562;
}



// FUNCTION 147d09562 FUN_147d09562 body=138 status=ok
// SIG undefined FUN_147d09562(void)

code * FUN_147d09562(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevFirstPersonTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d095ec;
}



// FUNCTION 147d095ec FUN_147d095ec body=138 status=ok
// SIG undefined FUN_147d095ec(void)

code * FUN_147d095ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FirstPersonTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09676;
}



// FUNCTION 147d09676 FUN_147d09676 body=138 status=ok
// SIG undefined FUN_147d09676(void)

code * FUN_147d09676(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MobileMultiviewDecalTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09700;
}



// FUNCTION 147d09700 FUN_147d09700 body=138 status=ok
// SIG undefined FUN_147d09700(void)

code * FUN_147d09700(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MobileMultiviewShadowTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0978a;
}



// FUNCTION 147d0978a FUN_147d0978a body=138 status=ok
// SIG undefined FUN_147d0978a(void)

code * FUN_147d0978a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09814;
}



// FUNCTION 147d09814 FUN_147d09814 body=138 status=ok
// SIG undefined FUN_147d09814(void)

code * FUN_147d09814(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0989e;
}



// FUNCTION 147d0989e FUN_147d0989e body=138 status=ok
// SIG undefined FUN_147d0989e(void)

code * FUN_147d0989e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SVPositionToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09928;
}



// FUNCTION 147d09928 FUN_147d09928 body=138 status=ok
// SIG undefined FUN_147d09928(void)

code * FUN_147d09928(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d099b2;
}



// FUNCTION 147d099b2 FUN_147d099b2 body=138 status=ok
// SIG undefined FUN_147d099b2(void)

code * FUN_147d099b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09a3c;
}



// FUNCTION 147d09a3c FUN_147d09a3c body=138 status=ok
// SIG undefined FUN_147d09a3c(void)

code * FUN_147d09a3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToClipNoAA";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09ac6;
}



// FUNCTION 147d09ac6 FUN_147d09ac6 body=138 status=ok
// SIG undefined FUN_147d09ac6(void)

code * FUN_147d09ac6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09b50;
}



// FUNCTION 147d09b50 FUN_147d09b50 body=138 status=ok
// SIG undefined FUN_147d09b50(void)

code * FUN_147d09b50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CameraViewToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09bda;
}



// FUNCTION 147d09bda FUN_147d09bda body=138 status=ok
// SIG undefined FUN_147d09bda(void)

code * FUN_147d09bda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToCameraView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09c64;
}



// FUNCTION 147d09c64 FUN_147d09c64 body=138 status=ok
// SIG undefined FUN_147d09c64(void)

code * FUN_147d09c64(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewToTranslatedWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09cee;
}



// FUNCTION 147d09cee FUN_147d09cee body=138 status=ok
// SIG undefined FUN_147d09cee(void)

code * FUN_147d09cee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09d78;
}



// FUNCTION 147d09d78 FUN_147d09d78 body=138 status=ok
// SIG undefined FUN_147d09d78(void)

code * FUN_147d09d78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClipToRelativeWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09e02;
}



// FUNCTION 147d09e02 FUN_147d09e02 body=138 status=ok
// SIG undefined FUN_147d09e02(void)

code * FUN_147d09e02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RelativeWorldToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09e8c;
}



// FUNCTION 147d09e8c FUN_147d09e8c body=132 status=ok
// SIG undefined FUN_147d09e8c(void)

undefined1 * FUN_147d09e8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldToClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147d09f10;
}



// FUNCTION 147d09f14 FUN_147d09f14 body=138 status=ok
// SIG undefined FUN_147d09f14(void)

code * FUN_147d09f14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000376;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d09f9e;
}



// FUNCTION 147d09f9e FUN_147d09f9e body=138 status=ok
// SIG undefined FUN_147d09f9e(void)

code * FUN_147d09f9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowMapChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15400000375;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1460260fa;
}



// FUNCTION 147d0a028 FUN_147d0a028 body=138 status=ok
// SIG undefined FUN_147d0a028(void)

code * FUN_147d0a028(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowDistances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000372;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0a0b2;
}



// FUNCTION 147d0a0b2 FUN_147d0a0b2 body=138 status=ok
// SIG undefined FUN_147d0a0b2(void)

code * FUN_147d0a0b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDistanceFadeMADAndSpecularScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000371;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0a13c;
}



// FUNCTION 147d0a13c FUN_147d0a13c body=138 status=ok
// SIG undefined FUN_147d0a13c(void)

code * FUN_147d0a13c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000370;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d0a1c6;
}



// FUNCTION 147d0a1c6 FUN_147d0a1c6 body=138 status=ok
// SIG undefined FUN_147d0a1c6(void)

code * FUN_147d0a1c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDirectionAndShadowTransition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000036f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146025fee;
}



// FUNCTION 147d0a254 FUN_147d0a254 body=140 status=ok
// SIG undefined FUN_147d0a254(void)

void FUN_147d0a254(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_1 + 0x990;
  uVar1 = *(uint *)(param_1 + 0xa1c);
  iVar3 = 0;
  if ((int)uVar1 < 0) {
    *(undefined4 *)(param_1 + 0xa18) = 0;
    FUN_147d0a310(lVar2,0);
    iVar3 = *(int *)(param_1 + 0xa18);
    uVar1 = *(uint *)(param_1 + 0xa1c);
  }
  *(uint *)(param_1 + 0xa18) = iVar3 + 1U;
  if (uVar1 < iVar3 + 1U) {
    FUN_147d0a340(lVar2,iVar3);
  }
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa10);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar3 * 0x10) = 0x3f800000;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar3 * 0x10) = param_2;
  return;
}



// FUNCTION 147d0a2e0 FUN_147d0a2e0 body=47 status=ok
// SIG undefined FUN_147d0a2e0(void)

void FUN_147d0a2e0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 3;
  if (iVar1 == *(int *)(param_1 + 0xcc)) {
    return;
  }
  *(int *)(param_1 + 0xcc) = iVar1;
  FUN_14021e55a(param_1,*(undefined4 *)(param_1 + 200),(ulonglong)(param_2 != 0) << 3,0x18);
  return;
}



// FUNCTION 147d0a310 FUN_147d0a310 body=47 status=ok
// SIG undefined FUN_147d0a310(void)

void FUN_147d0a310(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 3;
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14021e0b6(param_1,*(undefined4 *)(param_1 + 0x88),(ulonglong)(param_2 != 0) << 3,0x10);
  return;
}



// FUNCTION 147d0a340 FUN_147d0a340 body=125 status=ok
// SIG undefined FUN_147d0a340(void)

void FUN_147d0a340(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14021e0b6(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d0a3be FUN_147d0a3be body=142 status=ok
// SIG undefined FUN_147d0a3be(void)

void FUN_147d0a3be(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_14021e55a(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d0a44e FUN_147d0a44e body=98 status=ok
// SIG undefined FUN_147d0a44e(void)

longlong FUN_147d0a44e(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147d0a4b0 FUN_147d0a4b0 body=98 status=ok
// SIG undefined FUN_147d0a4b0(void)

longlong FUN_147d0a4b0(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147d0a512 FUN_147d0a512 body=98 status=ok
// SIG undefined FUN_147d0a512(void)

longlong FUN_147d0a512(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147d0a574 FUN_147d0a574 body=136 status=ok
// SIG undefined FUN_147d0a574(void)

longlong FUN_147d0a574(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"MipLevel",0);
  return param_1;
}



// FUNCTION 147d0a5fc FUN_147d0a5fc body=136 status=ok
// SIG undefined FUN_147d0a5fc(void)

longlong FUN_147d0a5fc(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"MipLevel",0);
  return param_1;
}



// FUNCTION 147d0a684 FUN_147d0a684 body=98 status=ok
// SIG undefined FUN_147d0a684(void)

longlong FUN_147d0a684(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147d0a6e6 FUN_147d0a6e6 body=89 status=ok
// SIG undefined FUN_147d0a6e6(void)

void FUN_147d0a6e6(longlong param_1,int param_2)

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



// FUNCTION 147d0a73f FUN_147d0a73f body=33 status=ok
// SIG undefined FUN_147d0a73f(void)

void FUN_147d0a73f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 147d0a760 FUN_147d0a760 body=54 status=ok
// SIG undefined FUN_147d0a760(void)

void FUN_147d0a760(longlong *param_1)

{
  FUN_147d0a936(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d0a796 FUN_147d0a796 body=54 status=ok
// SIG undefined FUN_147d0a796(void)

void FUN_147d0a796(longlong *param_1)

{
  FUN_147d0a7cc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d0a7cc FUN_147d0a7cc body=359 status=ok
// SIG undefined FUN_147d0a7cc(void)

void FUN_147d0a7cc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d0a936 FUN_147d0a936 body=392 status=ok
// SIG undefined FUN_147d0a936(void)

void FUN_147d0a936(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x50;
      *(undefined4 *)(lVar2 + 0x48 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x40 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_147d0aac0(lVar2 + lVar5);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e9549c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d0aac0 FUN_147d0aac0 body=54 status=ok
// SIG undefined FUN_147d0aac0(void)

void FUN_147d0aac0(longlong *param_1)

{
  FUN_147d0aaf6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d0aaf6 FUN_147d0aaf6 body=347 status=ok
// SIG undefined FUN_147d0aaf6(void)

void FUN_147d0aaf6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_147d0ac54((longlong)iStack_54 * 0x40 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140b7ce44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d0ac54 FUN_147d0ac54 body=59 status=ok
// SIG undefined FUN_147d0ac54(void)

void FUN_147d0ac54(longlong *param_1)

{
  FUN_1478a0260(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d0ac90 FUN_147d0ac90 body=61 status=ok
// SIG undefined FUN_147d0ac90(void)

void FUN_147d0ac90(longlong *param_1)

{
  FUN_147d0acce();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d0acce FUN_147d0acce body=66 status=ok
// SIG undefined FUN_147d0acce(void)

void FUN_147d0acce(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1405ed516(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 147d0ad10 FUN_147d0ad10 body=60 status=ok
// SIG undefined FUN_147d0ad10(void)

undefined8 * FUN_147d0ad10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa810a0;
  FUN_147cec876(param_1 + 10);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0ad4c FUN_147d0ad4c body=9 status=ok
// SIG undefined FUN_147d0ad4c(void)

void FUN_147d0ad4c(longlong param_1)

{
  FUN_147cec8dc(param_1 + 0x50);
  return;
}



// FUNCTION 147d0ad56 FUN_147d0ad56 body=48 status=ok
// SIG undefined FUN_147d0ad56(void)

undefined8 FUN_147d0ad56(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x30) = 5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return 1;
}



// FUNCTION 147d0adba FUN_147d0adba body=29 status=ok
// SIG undefined FUN_147d0adba(void)

undefined8 FUN_147d0adba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0add8 FUN_147d0add8 body=116 status=ok
// SIG undefined FUN_147d0add8(void)

void FUN_147d0add8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar4;
    FUN_144b287d6(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d0ae4e FUN_147d0ae4e body=74 status=ok
// SIG undefined FUN_147d0ae4e(void)

void FUN_147d0ae4e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 2);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 147d0ae98 FUN_147d0ae98 body=56 status=ok
// SIG undefined FUN_147d0ae98(void)

undefined8 * FUN_147d0ae98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa81330;
  FUN_144725486();
  FUN_1463ff674(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0aed0 FUN_147d0aed0 body=38 status=ok
// SIG undefined FUN_147d0aed0(void)

undefined8 FUN_147d0aed0(undefined8 param_1,int param_2)

{
  FUN_1463ff674();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0aef6 FUN_147d0aef6 body=26 status=ok
// SIG undefined FUN_147d0aef6(void)

void FUN_147d0aef6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142c1f1fa(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
  return;
}



// FUNCTION 147d0af10 FUN_147d0af10 body=164 status=ok
// SIG undefined FUN_147d0af10(void)

void FUN_147d0af10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  return;
}



// FUNCTION 147d0afb4 FUN_147d0afb4 body=132 status=ok
// SIG undefined FUN_147d0afb4(void)

void FUN_147d0afb4(longlong param_1,int param_2)

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



// FUNCTION 147d0b03a FUN_147d0b03a body=26 status=ok
// SIG undefined FUN_147d0b03a(void)

void FUN_147d0b03a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_143441ed4(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
  return;
}



// FUNCTION 147d0b054 FUN_147d0b054 body=98 status=ok
// SIG undefined FUN_147d0b054(void)

void FUN_147d0b054(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
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
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  FUN_147d0b0b8();
  return;
}



// FUNCTION 147d0b0b8 FUN_147d0b0b8 body=124 status=ok
// SIG undefined FUN_147d0b0b8(void)

void FUN_147d0b0b8(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_1436aa8c0((longlong)param_1 + 0x10,0);
      return;
    }
  }
  else {
    FUN_1436aa8c0((longlong)param_1 + 0x10,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 147d0b134 FUN_147d0b134 body=98 status=ok
// SIG undefined FUN_147d0b134(void)

void FUN_147d0b134(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 3) {
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
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_147d0b198();
  return;
}



// FUNCTION 147d0b198 FUN_147d0b198 body=122 status=ok
// SIG undefined FUN_147d0b198(void)

void FUN_147d0b198(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 * 2);
      FUN_1436aaa82((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_1436aaa82((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  return;
}



// FUNCTION 147d0b212 FUN_147d0b212 body=98 status=ok
// SIG undefined FUN_147d0b212(void)

void FUN_147d0b212(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
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
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  FUN_147d0b276();
  return;
}



// FUNCTION 147d0b276 FUN_147d0b276 body=124 status=ok
// SIG undefined FUN_147d0b276(void)

void FUN_147d0b276(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_1436aac4a((longlong)param_1 + 0x10,0);
      return;
    }
  }
  else {
    FUN_1436aac4a((longlong)param_1 + 0x10,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 147d0b2f2 FUN_147d0b2f2 body=98 status=ok
// SIG undefined FUN_147d0b2f2(void)

void FUN_147d0b2f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 3) {
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
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_147d0b356();
  return;
}



// FUNCTION 147d0b356 FUN_147d0b356 body=132 status=ok
// SIG undefined FUN_147d0b356(void)

void FUN_147d0b356(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_14008d210((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_14008d210((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 147d0b3da FUN_147d0b3da body=98 status=ok
// SIG undefined FUN_147d0b3da(void)

void FUN_147d0b3da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
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
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  FUN_147d0b43e();
  return;
}



// FUNCTION 147d0b43e FUN_147d0b43e body=124 status=ok
// SIG undefined FUN_147d0b43e(void)

void FUN_147d0b43e(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_1436aae0c((longlong)param_1 + 0x10,0);
      return;
    }
  }
  else {
    FUN_1436aae0c((longlong)param_1 + 0x10,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 147d0b4ba FUN_147d0b4ba body=98 status=ok
// SIG undefined FUN_147d0b4ba(void)

void FUN_147d0b4ba(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
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
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  FUN_147d0b51e();
  return;
}



// FUNCTION 147d0b51e FUN_147d0b51e body=124 status=ok
// SIG undefined FUN_147d0b51e(void)

void FUN_147d0b51e(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 3) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_1436aafce((longlong)param_1 + 0x10,0);
      return;
    }
  }
  else {
    FUN_1436aafce((longlong)param_1 + 0x10,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 147d0b59a FUN_147d0b59a body=38 status=ok
// SIG undefined FUN_147d0b59a(void)

void FUN_147d0b59a(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  FUN_147d0b0b8(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 147d0b5c0 FUN_147d0b5c0 body=38 status=ok
// SIG undefined FUN_147d0b5c0(void)

void FUN_147d0b5c0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  FUN_147d0b198(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147d0b5e6 FUN_147d0b5e6 body=38 status=ok
// SIG undefined FUN_147d0b5e6(void)

void FUN_147d0b5e6(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  FUN_147d0b276(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 147d0b60c FUN_147d0b60c body=38 status=ok
// SIG undefined FUN_147d0b60c(void)

void FUN_147d0b60c(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  FUN_147d0b356(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147d0b632 FUN_147d0b632 body=38 status=ok
// SIG undefined FUN_147d0b632(void)

void FUN_147d0b632(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  FUN_147d0b43e(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 147d0b658 FUN_147d0b658 body=38 status=ok
// SIG undefined FUN_147d0b658(void)

void FUN_147d0b658(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  if (2 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  FUN_147d0b51e(param_1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 147d0b67e FUN_147d0b67e body=19 status=ok
// SIG undefined FUN_147d0b67e(void)

void FUN_147d0b67e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1436ab190();
    return;
  }
  return;
}



// FUNCTION 147d0b692 FUN_147d0b692 body=38 status=ok
// SIG undefined FUN_147d0b692(void)

undefined8 FUN_147d0b692(undefined8 param_1,int param_2)

{
  FUN_1463fe5c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b6ec FUN_147d0b6ec body=38 status=ok
// SIG undefined FUN_147d0b6ec(void)

undefined8 FUN_147d0b6ec(undefined8 param_1,int param_2)

{
  FUN_1463fe60e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b746 FUN_147d0b746 body=56 status=ok
// SIG undefined FUN_147d0b746(void)

undefined8 * FUN_147d0b746(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa813f0;
  FUN_144725486();
  FUN_1463ff73c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b77e FUN_147d0b77e body=38 status=ok
// SIG undefined FUN_147d0b77e(void)

undefined8 FUN_147d0b77e(undefined8 param_1,int param_2)

{
  FUN_1463ff73c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b7a4 FUN_147d0b7a4 body=56 status=ok
// SIG undefined FUN_147d0b7a4(void)

undefined8 * FUN_147d0b7a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa81450;
  FUN_144725486();
  FUN_1463ff804(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b7dc FUN_147d0b7dc body=38 status=ok
// SIG undefined FUN_147d0b7dc(void)

undefined8 FUN_147d0b7dc(undefined8 param_1,int param_2)

{
  FUN_1463ff804();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b802 FUN_147d0b802 body=56 status=ok
// SIG undefined FUN_147d0b802(void)

undefined8 * FUN_147d0b802(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa814b0;
  FUN_144725486();
  FUN_14006f2ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0b83a FUN_147d0b83a body=86 status=ok
// SIG undefined FUN_147d0b83a(void)

void FUN_147d0b83a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147d0b890 FUN_147d0b890 body=88 status=ok
// SIG undefined FUN_147d0b890(void)

void FUN_147d0b890(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147d0b8e8 FUN_147d0b8e8 body=40 status=ok
// SIG undefined FUN_147d0b8e8(void)

void FUN_147d0b8e8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147d0b910 FUN_147d0b910 body=547 status=ok
// SIG undefined FUN_147d0b910(void)

void FUN_147d0b910(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar10 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar10;
joined_r0x000147d0b957:
    do {
      iVar7 = iVar10 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar11 = iVar10 * 2 + 2;
        if (iVar11 < (int)param_2) {
          iVar5 = FUN_1446f8bba(param_1[(longlong)iVar11 * 2]);
          iVar6 = FUN_1446f8bba(param_1[(longlong)iVar7 * 2]);
          if (iVar5 <= iVar6) {
            iVar7 = iVar11;
          }
        }
        iVar11 = FUN_1446f8bba(param_1[(longlong)iVar10 * 2]);
        iVar5 = FUN_1446f8bba(param_1[(longlong)iVar7 * 2]);
        if (iVar5 < iVar11) {
          puVar13 = param_1 + (longlong)iVar10 * 2;
          puVar9 = param_1 + (longlong)iVar7 * 2;
          uVar2 = *puVar13;
          uVar3 = puVar13[1];
          uVar4 = puVar9[1];
          *puVar13 = *puVar9;
          puVar13[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar9 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar9 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_50._4_4_;
          iVar10 = iVar7;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x000147d0b957;
        }
      }
      bVar14 = iVar12 != 0;
      iVar10 = iVar12 + -1;
      iVar12 = iVar10;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar8 * 2)[1];
      *param_1 = param_1[uVar8 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar9 = param_1 + uVar8 * 2;
      *(undefined4 *)puVar9 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar9 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar10 = 0;
          iVar7 = 1;
          iVar12 = 0;
          do {
            iVar10 = iVar10 + 2;
            iVar11 = iVar7;
            if ((longlong)iVar10 < (longlong)uVar8) {
              iVar5 = FUN_1446f8bba(param_1[(longlong)iVar10 * 2]);
              iVar7 = FUN_1446f8bba(param_1[(longlong)iVar7 * 2]);
              if (iVar5 <= iVar7) {
                iVar11 = iVar10;
              }
            }
            iVar10 = FUN_1446f8bba(param_1[(longlong)iVar12 * 2]);
            iVar7 = FUN_1446f8bba(param_1[(longlong)iVar11 * 2]);
            if (iVar10 <= iVar7) break;
            puVar9 = param_1 + (longlong)iVar12 * 2;
            puVar13 = param_1 + (longlong)iVar11 * 2;
            uVar2 = *puVar9;
            uVar3 = puVar9[1];
            uVar4 = puVar13[1];
            *puVar9 = *puVar13;
            puVar9[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar13 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
            iVar10 = iVar11 * 2;
            iVar7 = iVar11 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar12 = iVar11;
          } while ((longlong)iVar7 < (longlong)uVar8);
          uVar1 = uVar8 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar9 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar9 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar9 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_50._4_4_;
          bVar14 = 2 < uVar8;
          uVar8 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d0bb34 FUN_147d0bb34 body=56 status=ok
// SIG undefined FUN_147d0bb34(void)

undefined8 * FUN_147d0bb34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa814e0;
  FUN_144725486();
  FUN_1463ff8e6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0bb6c FUN_147d0bb6c body=227 status=ok
// SIG undefined FUN_147d0bb6c(void)

void FUN_147d0bb6c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [40];
  longlong local_b0 [18];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[1] = 0x1000020000;
  local_20 = 0x1100000002;
  local_b0[2] = 0x1001020800;
  (**(code **)(*DAT_14ca83900 + 0x68))(DAT_14ca83900,local_b0);
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != local_b0) {
    lVar3 = *plVar4;
    *plVar4 = local_b0[0];
    local_b0[0] = 0;
    if (lVar3 == 0) goto LAB_147d0bbee;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b0[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147d0bbee:
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0bc7e FUN_147d0bc7e body=38 status=ok
// SIG undefined FUN_147d0bc7e(void)

undefined8 FUN_147d0bc7e(undefined8 param_1,int param_2)

{
  FUN_1463ff8e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d0bca4 FUN_147d0bca4 body=132 status=ok
// SIG undefined FUN_147d0bca4(void)

void FUN_147d0bca4(longlong param_1,int param_2)

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



// FUNCTION 147d0bd2a FUN_147d0bd2a body=132 status=ok
// SIG undefined FUN_147d0bd2a(void)

void FUN_147d0bd2a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d0bdb0 FUN_147d0bdb0 body=62 status=ok
// SIG undefined FUN_147d0bdb0(void)

void FUN_147d0bdb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d0bdee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147d0bdee FUN_147d0bdee body=93 status=ok
// SIG undefined FUN_147d0bdee(void)

ulonglong FUN_147d0bdee(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147d0be4c FUN_147d0be4c body=132 status=ok
// SIG undefined FUN_147d0be4c(void)

void FUN_147d0be4c(longlong param_1,int param_2)

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



// FUNCTION 147d0bed2 FUN_147d0bed2 body=132 status=ok
// SIG undefined FUN_147d0bed2(void)

void FUN_147d0bed2(longlong param_1,int param_2)

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



// FUNCTION 147d0bf58 FUN_147d0bf58 body=96 status=ok
// SIG undefined FUN_147d0bf58(void)

void FUN_147d0bf58(longlong param_1,int param_2)

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



// FUNCTION 147d0bfb8 FUN_147d0bfb8 body=114 status=ok
// SIG undefined FUN_147d0bfb8(void)

void FUN_147d0bfb8(longlong *param_1,int param_2)

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



// FUNCTION 147d0c02a FUN_147d0c02a body=132 status=ok
// SIG undefined FUN_147d0c02a(void)

void FUN_147d0c02a(longlong param_1,int param_2)

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



// FUNCTION 147d0c0b0 FUN_147d0c0b0 body=291 status=ok
// SIG undefined FUN_147d0c0b0(void)

undefined4 * FUN_147d0c0b0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147d0c1d4(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_147cf2af8(local_40 + 2,uVar1);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_147d0c2b6(param_1,uVar5,local_40,&local_4c);
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
      local_40[0xd] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0xc] =
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
      FUN_147d0c3e0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0c1d4 FUN_147d0c1d4 body=226 status=ok
// SIG undefined FUN_147d0c1d4(void)

int * FUN_147d0c1d4(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147d0c2b6 FUN_147d0c2b6 body=182 status=ok
// SIG undefined FUN_147d0c2b6(void)

undefined8 FUN_147d0c2b6(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          FUN_144b25a0f(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
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
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147d0c36c(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d0c36c FUN_147d0c36c body=116 status=ok
// SIG undefined FUN_147d0c36c(void)

void FUN_147d0c36c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 147d0c3e0 FUN_147d0c3e0 body=419 status=ok
// SIG undefined FUN_147d0c3e0(void)

void FUN_147d0c3e0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 147d0c584 FUN_147d0c584 body=81 status=ok
// SIG undefined FUN_147d0c584(void)

void FUN_147d0c584(longlong *param_1,int param_2)

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
          FUN_147d0c5d6(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d0c5d6 FUN_147d0c5d6 body=87 status=ok
// SIG undefined FUN_147d0c5d6(void)

void FUN_147d0c5d6(longlong *param_1,int param_2)

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
  FUN_147d0c62e();
  return;
}



// FUNCTION 147d0c62e FUN_147d0c62e body=63 status=ok
// SIG undefined FUN_147d0c62e(void)

void FUN_147d0c62e(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_147d0bfb8(param_1,param_2);
  return;
}



// FUNCTION 147d0c66e FUN_147d0c66e body=180 status=ok
// SIG undefined FUN_147d0c66e(void)

longlong FUN_147d0c66e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_147d0c705;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147d0c724(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_147d0c705:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147d0c724 FUN_147d0c724 body=272 status=ok
// SIG undefined FUN_147d0c724(void)

undefined4 * FUN_147d0c724(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147d0c1d4(param_1,local_48);
  FUN_147d0c836(param_4,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  cVar1 = FUN_147d0c2b6(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
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
      FUN_147d0c3e0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0c836 FUN_147d0c836 body=149 status=ok
// SIG undefined FUN_147d0c836(void)

undefined4 * FUN_147d0c836(undefined8 *param_1,undefined4 *param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  QueryPerformanceCounter(&local_28);
  dVar1 = (double)local_28.QuadPart * DAT_14c83f420;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[6] = local_30;
  *(undefined2 *)(param_2 + 7) = 1;
  *(double *)(param_2 + 8) = dVar1 + 16777216.0;
  *(undefined1 *)(param_2 + 10) = 0;
  FUN_144b25a0f(0,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0c8cc FUN_147d0c8cc body=96 status=ok
// SIG undefined FUN_147d0c8cc(void)

void FUN_147d0c8cc(longlong param_1,int param_2)

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



// FUNCTION 147d0c92c FUN_147d0c92c body=7 status=ok
// SIG undefined FUN_147d0c92c(void)

undefined4 FUN_147d0c92c(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0x68);
}



// FUNCTION 147d0c934 FUN_147d0c934 body=59 status=ok
// SIG undefined FUN_147d0c934(void)

int FUN_147d0c934(longlong *param_1)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  SRWLock = (PSRWLOCK)(lVar1 + 8);
  AcquireSRWLockShared(SRWLock);
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *(int *)(lVar1 + 0x38 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  ReleaseSRWLockShared(SRWLock);
  return iVar3;
}



// FUNCTION 147d0c970 FUN_147d0c970 body=76 status=ok
// SIG undefined FUN_147d0c970(void)

void FUN_147d0c970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1 + 6);
    FUN_144a886ae(param_1 + 4);
    FUN_144a886ae(param_1 + 2);
    FUN_144a886ae(param_1);
  }
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147d0c9d0 FUN_147d0c9d0 body=196 status=ok
// SIG undefined FUN_147d0c9d0(void)

void FUN_147d0c9d0(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar2 = (int)param_1[0x21];
  *(uint *)(param_1 + 0x21) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x10c) < iVar2 + 1U) {
    FUN_147d13022(param_1,iVar2);
  }
  lVar4 = *param_1;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  puVar1 = (undefined4 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = param_2[4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x20);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  uVar3 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  iVar2 = (int)param_1[99];
  *(uint *)(param_1 + 99) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0x31c) - iVar2) < uVar3) {
    FUN_147d12c5e(param_1 + 0x22,iVar2);
  }
  else if (uVar3 == 0) {
    return;
  }
  memcpy((void *)((longlong)iVar2 * 8 + param_1[0x22]),_Src,(longlong)(int)uVar3 << 3);
  return;
}



// FUNCTION 147d0ca94 FUN_147d0ca94 body=22 status=ok
// SIG undefined FUN_147d0ca94(void)

undefined8 FUN_147d0ca94(undefined8 param_1)

{
  FUN_147d0d4ba();
  return param_1;
}



// FUNCTION 147d0caaa FUN_147d0caaa body=22 status=ok
// SIG undefined FUN_147d0caaa(void)

undefined8 FUN_147d0caaa(undefined8 param_1)

{
  FUN_147d0d834();
  return param_1;
}



// FUNCTION 147d0cac0 FUN_147d0cac0 body=22 status=ok
// SIG undefined FUN_147d0cac0(void)

undefined8 FUN_147d0cac0(undefined8 param_1)

{
  FUN_147d0dbae();
  return param_1;
}



// FUNCTION 147d0cad6 FUN_147d0cad6 body=22 status=ok
// SIG undefined FUN_147d0cad6(void)

undefined8 FUN_147d0cad6(undefined8 param_1)

{
  FUN_147d0df29();
  return param_1;
}



// FUNCTION 147d0caec FUN_147d0caec body=22 status=ok
// SIG undefined FUN_147d0caec(void)

undefined8 FUN_147d0caec(undefined8 param_1)

{
  FUN_147d0e2de();
  return param_1;
}



// FUNCTION 147d0cb02 FUN_147d0cb02 body=22 status=ok
// SIG undefined FUN_147d0cb02(void)

undefined8 FUN_147d0cb02(undefined8 param_1)

{
  FUN_147d0e60b();
  return param_1;
}



// FUNCTION 147d0cb18 FUN_147d0cb18 body=22 status=ok
// SIG undefined FUN_147d0cb18(void)

undefined8 FUN_147d0cb18(undefined8 param_1)

{
  FUN_147d0e938();
  return param_1;
}



// FUNCTION 147d0cb2e FUN_147d0cb2e body=22 status=ok
// SIG undefined FUN_147d0cb2e(void)

undefined8 FUN_147d0cb2e(undefined8 param_1)

{
  FUN_147d0ec65();
  return param_1;
}



// FUNCTION 147d0cb44 FUN_147d0cb44 body=22 status=ok
// SIG undefined FUN_147d0cb44(void)

undefined8 FUN_147d0cb44(undefined8 param_1)

{
  FUN_147d0ef92();
  return param_1;
}



// FUNCTION 147d0cb5a FUN_147d0cb5a body=22 status=ok
// SIG undefined FUN_147d0cb5a(void)

undefined8 FUN_147d0cb5a(undefined8 param_1)

{
  FUN_147d0f267();
  return param_1;
}



// FUNCTION 147d0cb70 FUN_147d0cb70 body=22 status=ok
// SIG undefined FUN_147d0cb70(void)

undefined8 FUN_147d0cb70(undefined8 param_1)

{
  FUN_144b2885a();
  return param_1;
}



// FUNCTION 147d0cb86 FUN_147d0cb86 body=22 status=ok
// SIG undefined FUN_147d0cb86(void)

undefined8 FUN_147d0cb86(undefined8 param_1)

{
  FUN_144b28e2a();
  return param_1;
}



// FUNCTION 147d0cb9c FUN_147d0cb9c body=22 status=ok
// SIG undefined FUN_147d0cb9c(void)

undefined8 FUN_147d0cb9c(undefined8 param_1)

{
  FUN_147d0f619();
  return param_1;
}



// FUNCTION 147d0cbb2 FUN_147d0cbb2 body=1425 status=ok
// SIG undefined FUN_147d0cbb2(void)

undefined8 * FUN_147d0cbb2(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a1;
  uint local_a0 [8];
  uint local_80 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar3 = *(byte *)(param_2 + 0x10);
  if ((bVar3 == 0x19) || (bVar4 = *(byte *)(param_3 + 0x10), bVar4 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar13 = (uint)bVar3;
    if (0x1b < bVar3) {
      uVar13 = 0x1c;
    }
    uVar21 = (uint)bVar4;
    if (0x1b < bVar4) {
      uVar21 = 0x1c;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    cVar5 = (&DAT_14aa842ba)[uVar13 << 4];
    uVar18 = (ulonglong)(uint)(int)cVar5;
    cVar6 = (&DAT_14aa842ba)[uVar21 << 4];
    uVar16 = (ulonglong)(uint)(int)cVar6;
    uVar15 = (int)cVar5 + (int)cVar6;
    local_c0 = 4;
    if ((int)uVar15 < 4) {
      local_c0 = (ulonglong)uVar15;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    cVar12 = (&DAT_14aa842b9)[uVar13 << 4];
    cVar7 = (&DAT_14aa842b9)[uVar21 << 4];
    if (cVar12 == cVar7) {
      local_b8 = param_3;
      local_b0 = uVar16;
      uVar10 = FUN_14484659f(CONCAT31((int3)(uVar15 >> 8),cVar12),local_c0);
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      puVar1 = param_1 + 3;
      uVar16 = local_c0;
      if ('\0' < cVar5) {
        uVar17 = 0;
        do {
          iVar8 = *(int *)(param_1 + 0x14);
          if ((int)uVar16 <= iVar8) break;
          lVar19 = *(longlong *)(param_2 + 0x98);
          if (*(longlong *)(param_2 + 0x98) == 0) {
            lVar19 = param_2 + 0x18;
          }
          *(uint *)(param_1 + 0x14) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
            FUN_147bcda28(puVar1,iVar8);
            uVar16 = local_c0;
          }
          puVar14 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar14 = puVar1;
          }
          puVar14[iVar8] = *(undefined8 *)(lVar19 + uVar17 * 8);
          uVar17 = uVar17 + 1;
        } while (uVar18 != uVar17);
      }
      lVar19 = local_b8;
      if ('\0' < (char)local_b0) {
        lVar2 = local_b8 + 0x18;
        uVar17 = local_b0 & 0xffffffff;
        uVar18 = 0;
        do {
          iVar8 = *(int *)(param_1 + 0x14);
          if ((int)uVar16 <= iVar8) break;
          lVar20 = *(longlong *)(lVar19 + 0x98);
          if (*(longlong *)(lVar19 + 0x98) == 0) {
            lVar20 = lVar2;
          }
          *(uint *)(param_1 + 0x14) = iVar8 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
            FUN_147bcda28(puVar1,iVar8);
            uVar16 = local_c0;
          }
          puVar14 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar14 = puVar1;
          }
          puVar14[iVar8] = *(undefined8 *)(lVar20 + uVar18 * 8);
          uVar18 = uVar18 + 1;
        } while (uVar17 != uVar18);
      }
    }
    else {
      uVar13 = (uint)local_c0;
      cVar11 = (char)local_c0;
      if ((cVar12 == '\x02') || (cVar7 == '\x02')) {
        uVar10 = (char)(0x807060500 >> (cVar11 * '\b' & 0x3fU));
        if (4 < uVar13) {
          uVar10 = 0;
        }
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = uVar10;
        FUN_14013e547(local_a0,param_2,local_80);
        FUN_14013e547(&local_a1,param_3,local_a0);
        puVar1 = param_1 + 3;
        uVar17 = local_c0;
        if ('\0' < cVar5) {
          uVar22 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar9 = *(undefined8 *)(local_80 + uVar22 * 2);
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            puVar14[iVar8] = uVar9;
            uVar22 = uVar22 + 1;
          } while (uVar18 != uVar22);
        }
        if ('\0' < cVar6) {
          uVar18 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar9 = *(undefined8 *)(local_a0 + uVar18 * 2);
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            puVar14[iVar8] = uVar9;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
        }
      }
      else if ((cVar12 == '\x01') || (cVar7 == '\x01')) {
        cVar12 = '\0';
        if (uVar13 < 5) {
          cVar12 = cVar11;
        }
        *param_1 = 0;
        param_1[1] = 0;
        *(char *)(param_1 + 2) = cVar12;
        FUN_14614b3b8(param_2,local_80);
        FUN_14614b3b8(param_3,local_a0);
        puVar1 = param_1 + 3;
        uVar17 = local_c0;
        if ('\0' < cVar5) {
          uVar22 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar13 = local_80[uVar22];
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            *(uint *)(puVar14 + iVar8) = uVar13;
            *(undefined4 *)((longlong)puVar14 + (longlong)iVar8 * 8 + 4) = 0;
            uVar22 = uVar22 + 1;
          } while (uVar18 != uVar22);
        }
        if ('\0' < cVar6) {
          uVar18 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar13 = local_a0[uVar18];
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            *(uint *)(puVar14 + iVar8) = uVar13;
            *(undefined4 *)((longlong)puVar14 + (longlong)iVar8 * 8 + 4) = 0;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
        }
      }
      else {
        uVar10 = (char)(0xc0b0a0900 >> (cVar11 * '\b' & 0x3fU));
        if (4 < uVar13) {
          uVar10 = 0;
        }
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = uVar10;
        FUN_147d0d1b6(param_2,local_80);
        FUN_147d0d1b6(param_3,local_a0);
        puVar1 = param_1 + 3;
        uVar17 = local_c0;
        if ('\0' < cVar5) {
          uVar22 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar13 = local_80[uVar22];
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            puVar14[iVar8] = (ulonglong)uVar13;
            uVar22 = uVar22 + 1;
          } while (uVar18 != uVar22);
        }
        if ('\0' < cVar6) {
          uVar18 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x14);
            if ((int)uVar17 <= iVar8) break;
            uVar13 = local_a0[uVar18];
            *(uint *)(param_1 + 0x14) = iVar8 + 1U;
            if (*(uint *)((longlong)param_1 + 0xa4) < iVar8 + 1U) {
              FUN_147bcda28(puVar1,iVar8);
              uVar17 = local_c0;
            }
            puVar14 = (undefined8 *)param_1[0x13];
            if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
              puVar14 = puVar1;
            }
            puVar14[iVar8] = (ulonglong)uVar13;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0d144 FUN_147d0d144 body=91 status=ok
// SIG undefined FUN_147d0d144(void)

undefined4 * FUN_147d0d144(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14013e547(&local_39,param_1,&local_38);
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  param_2[4] = local_28;
  param_2[5] = uStack_24;
  param_2[6] = uStack_20;
  param_2[7] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0d1a0 FUN_147d0d1a0 body=22 status=ok
// SIG undefined FUN_147d0d1a0(void)

undefined8 FUN_147d0d1a0(undefined8 param_1,undefined8 param_2)

{
  FUN_147d0d1b6();
  return param_2;
}



// FUNCTION 147d0d1b6 FUN_147d0d1b6 body=304 status=ok
// SIG undefined FUN_147d0d1b6(void)

void FUN_147d0d1b6(longlong param_1,float *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 == 1) {
    pdVar5 = (double *)(param_1 + 0x18);
    if (*(double **)(param_1 + 0x98) != (double *)0x0) {
      pdVar5 = *(double **)(param_1 + 0x98);
    }
    switch((&DAT_14aa842b9)[uVar3]) {
    case 1:
      fVar4 = (float)(int)*(float *)pdVar5;
      break;
    case 2:
      fVar4 = (float)(int)*pdVar5;
      break;
    case 3:
      fVar4 = *(float *)pdVar5;
      break;
    case 4:
      fVar4 = (float)(uint)(*(char *)pdVar5 != '\0');
      break;
    default:
      fVar4 = 0.0;
    }
    *param_2 = fVar4;
    param_2[1] = fVar4;
    param_2[2] = fVar4;
    param_2[3] = fVar4;
    return;
  }
  uVar8 = 4;
  if (cVar1 < '\x04') {
    uVar8 = (int)cVar1;
  }
  if ('\0' < cVar1) {
    uVar2 = (&DAT_14aa842b9)[uVar3];
    uVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar6 = param_1 + 0x18;
      }
      fVar4 = 0.0;
      switch(uVar2) {
      case 1:
        fVar4 = (float)(int)*(float *)(lVar6 + uVar7 * 8);
        break;
      case 2:
        fVar4 = (float)(int)*(double *)(lVar6 + uVar7 * 8);
        break;
      case 3:
        fVar4 = *(float *)(lVar6 + uVar7 * 8);
        break;
      case 4:
        fVar4 = (float)(uint)(*(char *)(lVar6 + uVar7 * 8) != '\0');
      }
      param_2[uVar7] = fVar4;
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
    if ('\x03' < cVar1) {
      return;
    }
  }
  memset(param_2 + cVar1,0,(ulonglong)(3 - uVar8) * 4 + 4);
  return;
}



// FUNCTION 147d0d2e6 FUN_147d0d2e6 body=22 status=ok
// SIG undefined FUN_147d0d2e6(void)

undefined8 FUN_147d0d2e6(undefined8 param_1,undefined8 param_2)

{
  FUN_147d0d2fc();
  return param_2;
}



// FUNCTION 147d0d2fc FUN_147d0d2fc body=349 status=ok
// SIG undefined FUN_147d0d2fc(void)

void FUN_147d0d2fc(longlong param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 != 1) {
    uVar7 = 4;
    if (cVar1 < '\x04') {
      uVar7 = (int)cVar1;
    }
    if ('\0' < cVar1) {
      uVar2 = (&DAT_14aa842b9)[uVar3];
      uVar6 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar5 = param_1 + 0x18;
        }
        switch(uVar2) {
        case 1:
          bVar8 = *(float *)(lVar5 + uVar6 * 8) != 0.0;
          break;
        case 2:
          bVar8 = *(double *)(lVar5 + uVar6 * 8) != 0.0;
          break;
        case 3:
          bVar8 = *(int *)(lVar5 + uVar6 * 8) == 0;
          goto LAB_147d0d3dc;
        case 4:
          bVar8 = *(char *)(lVar5 + uVar6 * 8) == '\0';
LAB_147d0d3dc:
          bVar8 = !bVar8;
          goto LAB_147d0d3f3;
        default:
          bVar8 = false;
          goto LAB_147d0d3f3;
        }
        bVar8 = (bool)(-bVar8 & 1);
LAB_147d0d3f3:
        *(bool *)((longlong)param_2 + uVar6) = bVar8;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
      if ('\x03' < cVar1) {
        return;
      }
    }
    memset((void *)((longlong)param_2 + (longlong)cVar1),0,(ulonglong)(3 - uVar7) + 1);
    return;
  }
  pdVar4 = (double *)(param_1 + 0x18);
  if (*(double **)(param_1 + 0x98) != (double *)0x0) {
    pdVar4 = *(double **)(param_1 + 0x98);
  }
  switch((&DAT_14aa842b9)[uVar3]) {
  case 1:
    bVar8 = *(float *)pdVar4 != 0.0;
    break;
  case 2:
    bVar8 = *pdVar4 != 0.0;
    break;
  case 3:
    bVar8 = *(float *)pdVar4 == 0.0;
    goto LAB_147d0d42e;
  case 4:
    bVar8 = *(char *)pdVar4 == '\0';
LAB_147d0d42e:
    uVar3 = (uint)!bVar8;
    goto LAB_147d0d444;
  default:
    uVar3 = 0;
    goto LAB_147d0d444;
  }
  uVar3 = -(uint)bVar8 & 1;
LAB_147d0d444:
  *param_2 = uVar3 * 0x1010101;
  return;
}



// FUNCTION 147d0d45a FUN_147d0d45a body=86 status=ok
// SIG undefined FUN_147d0d45a(void)

undefined1 FUN_147d0d45a(undefined8 param_1)

{
  undefined1 uVar1;
  undefined1 auStack_38 [36];
  char local_14;
  char local_13;
  char local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147d0d2fc(param_1,&local_14);
  uVar1 = 1;
  if (((local_14 == '\0') && (local_13 == '\0')) && (local_12 == '\0')) {
    uVar1 = local_11;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d0d4b1 FUN_147d0d4b1 body=9 status=ok
// SIG undefined FUN_147d0d4b1(void)

int FUN_147d0d4b1(int param_1)

{
  return param_1 + (uint)(param_1 == 0);
}



// FUNCTION 147d0d4ba FUN_147d0d4ba body=889 status=ok
// SIG undefined FUN_147d0d4ba(void)

undefined8 * FUN_147d0d4ba(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  undefined8 *puVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  double local_90 [4];
  double local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar15 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar15 = 0x1c;
    }
    uVar13 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar13 = 0x1c;
    }
    cVar11 = (&DAT_14aa842ba)[uVar13 << 4];
    cVar14 = (&DAT_14aa842ba)[uVar15 << 4];
    if ((cVar11 == '\x01') || (cVar14 == '\x01')) {
      if (cVar14 < cVar11) {
        cVar14 = cVar11;
      }
    }
    else if (cVar11 <= cVar14) {
      cVar14 = cVar11;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar15 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x02')) {
      switch(cVar14) {
      case '\x01':
        uVar10 = 5;
        break;
      case '\x02':
        uVar10 = 6;
        break;
      case '\x03':
        uVar10 = 7;
        break;
      case '\x04':
        uVar10 = 8;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x16;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_14013e547(local_90,param_2,local_70);
      FUN_14013e547(&local_91,param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          dVar3 = local_90[lVar16];
          dVar4 = local_70[lVar16];
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar7] = dVar3 + dVar4;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else if (((&DAT_14aa842b9)[uVar15 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x01'))
    {
      cVar11 = cVar14;
      switch(cVar14) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar14 == '\x10') {
          cVar11 = '\x15';
        }
        else {
          cVar11 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar11;
      FUN_14614b3b8(param_2,local_70);
      FUN_14614b3b8(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          fVar1 = *(float *)((longlong)local_90 + lVar16 * 4);
          fVar2 = *(float *)((longlong)local_70 + lVar16 * 4);
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          *(float *)(puVar12 + iVar7) = fVar1 + fVar2;
          *(undefined4 *)((longlong)puVar12 + (longlong)iVar7 * 8 + 4) = 0;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else {
      switch(cVar14) {
      case '\x01':
        uVar10 = 9;
        break;
      case '\x02':
        uVar10 = 10;
        break;
      case '\x03':
        uVar10 = 0xb;
        break;
      case '\x04':
        uVar10 = 0xc;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x15;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_147d0d1b6(param_2,local_70);
      FUN_147d0d1b6(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          iVar7 = *(int *)((longlong)local_70 + lVar16 * 4);
          iVar8 = *(int *)((longlong)local_90 + lVar16 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar9] = (ulonglong)(uint)(iVar7 + iVar8);
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0d834 FUN_147d0d834 body=889 status=ok
// SIG undefined FUN_147d0d834(void)

undefined8 * FUN_147d0d834(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  undefined8 *puVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  double local_90 [4];
  double local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar15 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar15 = 0x1c;
    }
    uVar13 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar13 = 0x1c;
    }
    cVar11 = (&DAT_14aa842ba)[uVar13 << 4];
    cVar14 = (&DAT_14aa842ba)[uVar15 << 4];
    if ((cVar11 == '\x01') || (cVar14 == '\x01')) {
      if (cVar14 < cVar11) {
        cVar14 = cVar11;
      }
    }
    else if (cVar11 <= cVar14) {
      cVar14 = cVar11;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar15 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x02')) {
      switch(cVar14) {
      case '\x01':
        uVar10 = 5;
        break;
      case '\x02':
        uVar10 = 6;
        break;
      case '\x03':
        uVar10 = 7;
        break;
      case '\x04':
        uVar10 = 8;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x16;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_14013e547(local_90,param_2,local_70);
      FUN_14013e547(&local_91,param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          dVar3 = local_70[lVar16];
          dVar4 = local_90[lVar16];
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar7] = dVar3 - dVar4;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else if (((&DAT_14aa842b9)[uVar15 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x01'))
    {
      cVar11 = cVar14;
      switch(cVar14) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar14 == '\x10') {
          cVar11 = '\x15';
        }
        else {
          cVar11 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar11;
      FUN_14614b3b8(param_2,local_70);
      FUN_14614b3b8(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          fVar1 = *(float *)((longlong)local_70 + lVar16 * 4);
          fVar2 = *(float *)((longlong)local_90 + lVar16 * 4);
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          *(float *)(puVar12 + iVar7) = fVar1 - fVar2;
          *(undefined4 *)((longlong)puVar12 + (longlong)iVar7 * 8 + 4) = 0;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else {
      switch(cVar14) {
      case '\x01':
        uVar10 = 9;
        break;
      case '\x02':
        uVar10 = 10;
        break;
      case '\x03':
        uVar10 = 0xb;
        break;
      case '\x04':
        uVar10 = 0xc;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x15;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_147d0d1b6(param_2,local_70);
      FUN_147d0d1b6(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          iVar7 = *(int *)((longlong)local_70 + lVar16 * 4);
          iVar8 = *(int *)((longlong)local_90 + lVar16 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar9] = (ulonglong)(uint)(iVar7 - iVar8);
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0dbae FUN_147d0dbae body=890 status=ok
// SIG undefined FUN_147d0dbae(void)

undefined8 * FUN_147d0dbae(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  char cVar11;
  undefined8 *puVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  double local_90 [4];
  double local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar15 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar15 = 0x1c;
    }
    uVar13 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar13 = 0x1c;
    }
    cVar11 = (&DAT_14aa842ba)[uVar13 << 4];
    cVar14 = (&DAT_14aa842ba)[uVar15 << 4];
    if ((cVar11 == '\x01') || (cVar14 == '\x01')) {
      if (cVar14 < cVar11) {
        cVar14 = cVar11;
      }
    }
    else if (cVar11 <= cVar14) {
      cVar14 = cVar11;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar15 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x02')) {
      switch(cVar14) {
      case '\x01':
        uVar10 = 5;
        break;
      case '\x02':
        uVar10 = 6;
        break;
      case '\x03':
        uVar10 = 7;
        break;
      case '\x04':
        uVar10 = 8;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x16;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_14013e547(local_90,param_2,local_70);
      FUN_14013e547(&local_91,param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          dVar3 = local_90[lVar16];
          dVar4 = local_70[lVar16];
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar7] = dVar3 * dVar4;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else if (((&DAT_14aa842b9)[uVar15 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar13 << 4] == '\x01'))
    {
      cVar11 = cVar14;
      switch(cVar14) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar14 == '\x10') {
          cVar11 = '\x15';
        }
        else {
          cVar11 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar11;
      FUN_14614b3b8(param_2,local_70);
      FUN_14614b3b8(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          fVar1 = *(float *)((longlong)local_90 + lVar16 * 4);
          fVar2 = *(float *)((longlong)local_70 + lVar16 * 4);
          iVar7 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar7 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar7);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          *(float *)(puVar12 + iVar7) = fVar1 * fVar2;
          *(undefined4 *)((longlong)puVar12 + (longlong)iVar7 * 8 + 4) = 0;
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
    else {
      switch(cVar14) {
      case '\x01':
        uVar10 = 9;
        break;
      case '\x02':
        uVar10 = 10;
        break;
      case '\x03':
        uVar10 = 0xb;
        break;
      case '\x04':
        uVar10 = 0xc;
        break;
      default:
        if (cVar14 == '\x10') {
          uVar10 = 0x15;
        }
        else {
          uVar10 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar10;
      FUN_147d0d1b6(param_2,local_70);
      FUN_147d0d1b6(param_3,local_90);
      if ('\0' < cVar14) {
        lVar16 = 0;
        do {
          iVar7 = *(int *)((longlong)local_70 + lVar16 * 4);
          iVar8 = *(int *)((longlong)local_90 + lVar16 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar12 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar12 = param_1 + 3;
          }
          puVar12[iVar9] = (ulonglong)(uint)(iVar7 * iVar8);
          lVar16 = lVar16 + 1;
        } while (cVar14 != lVar16);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0df29 FUN_147d0df29 body=948 status=ok
// SIG undefined FUN_147d0df29(void)

undefined8 * FUN_147d0df29(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined8 local_a0 [4];
  double local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar3 = *(byte *)(param_2 + 0x10);
  if ((bVar3 == 0x19) || (bVar4 = *(byte *)(param_3 + 0x10), bVar4 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar14 = (uint)bVar3;
    if (0x1b < bVar3) {
      uVar14 = 0x1c;
    }
    uVar12 = (uint)bVar4;
    if (0x1b < bVar4) {
      uVar12 = 0x1c;
    }
    cVar9 = (&DAT_14aa842ba)[uVar12 << 4];
    cVar13 = (&DAT_14aa842ba)[uVar14 << 4];
    if ((cVar9 == '\x01') || (cVar13 == '\x01')) {
      if (cVar13 < cVar9) {
        cVar13 = cVar9;
      }
    }
    else if (cVar9 <= cVar13) {
      cVar13 = cVar9;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar14 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar12 << 4] == '\x02')) {
      switch(cVar13) {
      case '\x01':
        uVar8 = 5;
        break;
      case '\x02':
        uVar8 = 6;
        break;
      case '\x03':
        uVar8 = 7;
        break;
      case '\x04':
        uVar8 = 8;
        break;
      default:
        if (cVar13 == '\x10') {
          uVar8 = 0x16;
        }
        else {
          uVar8 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar8;
      FUN_14013e547(local_a0,param_2,local_80);
      FUN_14013e547(&local_a1,param_3,local_a0);
      if ('\0' < cVar13) {
        lVar15 = 0;
        do {
          dVar2 = local_80[lVar15];
          dVar7 = (double)FUN_147d1309a((int)local_a0[lVar15]);
          iVar5 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar5 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar5);
          }
          puVar11 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar11 = param_1 + 3;
          }
          puVar11[iVar5] = dVar2 / dVar7;
          lVar15 = lVar15 + 1;
        } while (cVar13 != lVar15);
      }
    }
    else if (((&DAT_14aa842b9)[uVar14 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar12 << 4] == '\x01'))
    {
      cVar9 = cVar13;
      switch(cVar13) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar13 == '\x10') {
          cVar9 = '\x15';
        }
        else {
          cVar9 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar9;
      FUN_14614b3b8(param_2,local_80);
      FUN_14614b3b8(param_3,local_a0);
      if ('\0' < cVar13) {
        lVar15 = 0;
        do {
          fVar1 = *(float *)((longlong)local_80 + lVar15 * 4);
          fVar16 = (float)FUN_144b293fa(*(undefined4 *)((longlong)local_a0 + lVar15 * 4));
          iVar5 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar5 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar5);
          }
          puVar11 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar11 = param_1 + 3;
          }
          *(float *)(puVar11 + iVar5) = fVar1 / fVar16;
          *(undefined4 *)((longlong)puVar11 + (longlong)iVar5 * 8 + 4) = 0;
          lVar15 = lVar15 + 1;
        } while (cVar13 != lVar15);
      }
    }
    else {
      switch(cVar13) {
      case '\x01':
        uVar8 = 9;
        break;
      case '\x02':
        uVar8 = 10;
        break;
      case '\x03':
        uVar8 = 0xb;
        break;
      case '\x04':
        uVar8 = 0xc;
        break;
      default:
        if (cVar13 == '\x10') {
          uVar8 = 0x15;
        }
        else {
          uVar8 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar8;
      FUN_147d0d1b6(param_2,local_80);
      FUN_147d0d1b6(param_3,local_a0);
      if ('\0' < cVar13) {
        lVar15 = 0;
        do {
          iVar5 = *(int *)((longlong)local_80 + lVar15 * 4);
          iVar10 = FUN_147d0d4b1(*(undefined4 *)((longlong)local_a0 + lVar15 * 4));
          iVar6 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar6 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar6 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar6);
          }
          puVar11 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar11 = param_1 + 3;
          }
          puVar11[iVar6] = (longlong)iVar5 / (longlong)iVar10 & 0xffffffff;
          lVar15 = lVar15 + 1;
        } while (cVar13 != lVar15);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0e2de FUN_147d0e2de body=812 status=ok
// SIG undefined FUN_147d0e2de(void)

undefined8 * FUN_147d0e2de(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  double local_a0 [4];
  double local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar12 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar12 = 0x1c;
    }
    uVar16 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar16 = 0x1c;
    }
    cVar7 = (&DAT_14aa842ba)[uVar16 << 4];
    cVar8 = (&DAT_14aa842ba)[uVar12 << 4];
    if ((cVar7 == '\x01') || (cVar8 == '\x01')) {
      cVar14 = cVar8;
      if (cVar8 < cVar7) {
        cVar14 = cVar7;
      }
    }
    else {
      cVar14 = cVar7;
      if (cVar8 < cVar7) {
        cVar14 = cVar8;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    switch(cVar14) {
    case '\x01':
      uVar17 = 0xd;
      break;
    case '\x02':
      uVar17 = 0xe;
      break;
    case '\x03':
      uVar17 = 0xf;
      break;
    case '\x04':
      uVar17 = 0x10;
      break;
    default:
      if (cVar14 == '\x10') {
        uVar17 = 0x15;
      }
      else {
        uVar17 = 0;
      }
    }
    uVar15 = (uint)cVar14;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar17;
    if (((&DAT_14aa842b9)[uVar12 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x02')) {
      FUN_14013e547(local_a0,param_2,local_80);
      FUN_14013e547(&local_a1,param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          dVar3 = local_a0[uVar18];
          dVar4 = local_80[uVar18];
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(dVar4 < dVar3);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else if (((&DAT_14aa842b9)[uVar12 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x01'))
    {
      FUN_14614b3b8(param_2,local_80);
      FUN_14614b3b8(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          fVar1 = *(float *)((longlong)local_a0 + uVar18 * 4);
          fVar2 = *(float *)((longlong)local_80 + uVar18 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(fVar2 < fVar1);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else {
      FUN_147d0d1b6(param_2,local_80);
      FUN_147d0d1b6(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          iVar9 = *(int *)((longlong)local_a0 + uVar18 * 4);
          iVar10 = *(int *)((longlong)local_80 + uVar18 * 4);
          iVar11 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar11 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar11);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar11] = (ulonglong)(iVar10 < iVar9);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0e60b FUN_147d0e60b body=812 status=ok
// SIG undefined FUN_147d0e60b(void)

undefined8 * FUN_147d0e60b(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  double local_a0 [4];
  double local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar12 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar12 = 0x1c;
    }
    uVar16 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar16 = 0x1c;
    }
    cVar7 = (&DAT_14aa842ba)[uVar16 << 4];
    cVar8 = (&DAT_14aa842ba)[uVar12 << 4];
    if ((cVar7 == '\x01') || (cVar8 == '\x01')) {
      cVar14 = cVar8;
      if (cVar8 < cVar7) {
        cVar14 = cVar7;
      }
    }
    else {
      cVar14 = cVar7;
      if (cVar8 < cVar7) {
        cVar14 = cVar8;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    switch(cVar14) {
    case '\x01':
      uVar17 = 0xd;
      break;
    case '\x02':
      uVar17 = 0xe;
      break;
    case '\x03':
      uVar17 = 0xf;
      break;
    case '\x04':
      uVar17 = 0x10;
      break;
    default:
      if (cVar14 == '\x10') {
        uVar17 = 0x15;
      }
      else {
        uVar17 = 0;
      }
    }
    uVar15 = (uint)cVar14;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar17;
    if (((&DAT_14aa842b9)[uVar12 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x02')) {
      FUN_14013e547(local_a0,param_2,local_80);
      FUN_14013e547(&local_a1,param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          dVar3 = local_a0[uVar18];
          dVar4 = local_80[uVar18];
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(dVar3 < dVar4);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else if (((&DAT_14aa842b9)[uVar12 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x01'))
    {
      FUN_14614b3b8(param_2,local_80);
      FUN_14614b3b8(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          fVar1 = *(float *)((longlong)local_a0 + uVar18 * 4);
          fVar2 = *(float *)((longlong)local_80 + uVar18 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(fVar1 < fVar2);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else {
      FUN_147d0d1b6(param_2,local_80);
      FUN_147d0d1b6(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          iVar9 = *(int *)((longlong)local_a0 + uVar18 * 4);
          iVar10 = *(int *)((longlong)local_80 + uVar18 * 4);
          iVar11 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar11 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar11);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar11] = (ulonglong)(iVar9 < iVar10);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0e938 FUN_147d0e938 body=812 status=ok
// SIG undefined FUN_147d0e938(void)

undefined8 * FUN_147d0e938(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  double local_a0 [4];
  double local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar12 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar12 = 0x1c;
    }
    uVar16 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar16 = 0x1c;
    }
    cVar7 = (&DAT_14aa842ba)[uVar16 << 4];
    cVar8 = (&DAT_14aa842ba)[uVar12 << 4];
    if ((cVar7 == '\x01') || (cVar8 == '\x01')) {
      cVar14 = cVar8;
      if (cVar8 < cVar7) {
        cVar14 = cVar7;
      }
    }
    else {
      cVar14 = cVar7;
      if (cVar8 < cVar7) {
        cVar14 = cVar8;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    switch(cVar14) {
    case '\x01':
      uVar17 = 0xd;
      break;
    case '\x02':
      uVar17 = 0xe;
      break;
    case '\x03':
      uVar17 = 0xf;
      break;
    case '\x04':
      uVar17 = 0x10;
      break;
    default:
      if (cVar14 == '\x10') {
        uVar17 = 0x15;
      }
      else {
        uVar17 = 0;
      }
    }
    uVar15 = (uint)cVar14;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar17;
    if (((&DAT_14aa842b9)[uVar12 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x02')) {
      FUN_14013e547(local_a0,param_2,local_80);
      FUN_14013e547(&local_a1,param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          dVar3 = local_a0[uVar18];
          dVar4 = local_80[uVar18];
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(dVar4 <= dVar3);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else if (((&DAT_14aa842b9)[uVar12 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x01'))
    {
      FUN_14614b3b8(param_2,local_80);
      FUN_14614b3b8(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          fVar1 = *(float *)((longlong)local_a0 + uVar18 * 4);
          fVar2 = *(float *)((longlong)local_80 + uVar18 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(fVar2 <= fVar1);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else {
      FUN_147d0d1b6(param_2,local_80);
      FUN_147d0d1b6(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          iVar9 = *(int *)((longlong)local_a0 + uVar18 * 4);
          iVar10 = *(int *)((longlong)local_80 + uVar18 * 4);
          iVar11 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar11 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar11);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar11] = (ulonglong)(iVar10 <= iVar9);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0ec65 FUN_147d0ec65 body=812 status=ok
// SIG undefined FUN_147d0ec65(void)

undefined8 * FUN_147d0ec65(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  double local_a0 [4];
  double local_80 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar5 = *(byte *)(param_2 + 0x10);
  if ((bVar5 == 0x19) || (bVar6 = *(byte *)(param_3 + 0x10), bVar6 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar12 = (uint)bVar5;
    if (0x1b < bVar5) {
      uVar12 = 0x1c;
    }
    uVar16 = (uint)bVar6;
    if (0x1b < bVar6) {
      uVar16 = 0x1c;
    }
    cVar7 = (&DAT_14aa842ba)[uVar16 << 4];
    cVar8 = (&DAT_14aa842ba)[uVar12 << 4];
    if ((cVar7 == '\x01') || (cVar8 == '\x01')) {
      cVar14 = cVar8;
      if (cVar8 < cVar7) {
        cVar14 = cVar7;
      }
    }
    else {
      cVar14 = cVar7;
      if (cVar8 < cVar7) {
        cVar14 = cVar8;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    switch(cVar14) {
    case '\x01':
      uVar17 = 0xd;
      break;
    case '\x02':
      uVar17 = 0xe;
      break;
    case '\x03':
      uVar17 = 0xf;
      break;
    case '\x04':
      uVar17 = 0x10;
      break;
    default:
      if (cVar14 == '\x10') {
        uVar17 = 0x15;
      }
      else {
        uVar17 = 0;
      }
    }
    uVar15 = (uint)cVar14;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar17;
    if (((&DAT_14aa842b9)[uVar12 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x02')) {
      FUN_14013e547(local_a0,param_2,local_80);
      FUN_14013e547(&local_a1,param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          dVar3 = local_a0[uVar18];
          dVar4 = local_80[uVar18];
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(dVar3 <= dVar4);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else if (((&DAT_14aa842b9)[uVar12 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar16 << 4] == '\x01'))
    {
      FUN_14614b3b8(param_2,local_80);
      FUN_14614b3b8(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          fVar1 = *(float *)((longlong)local_a0 + uVar18 * 4);
          fVar2 = *(float *)((longlong)local_80 + uVar18 * 4);
          iVar9 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar9 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar9);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar9] = (ulonglong)(fVar1 <= fVar2);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
    else {
      FUN_147d0d1b6(param_2,local_80);
      FUN_147d0d1b6(param_3,local_a0);
      if ('\0' < cVar14) {
        uVar18 = 0;
        do {
          iVar9 = *(int *)((longlong)local_a0 + uVar18 * 4);
          iVar10 = *(int *)((longlong)local_80 + uVar18 * 4);
          iVar11 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar11 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar11);
          }
          puVar13 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar13 = param_1 + 3;
          }
          puVar13[iVar11] = (ulonglong)(iVar9 <= iVar10);
          uVar18 = uVar18 + 1;
        } while (uVar15 != uVar18);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0ef92 FUN_147d0ef92 body=724 status=ok
// SIG undefined FUN_147d0ef92(void)

undefined8 * FUN_147d0ef92(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  undefined8 local_80 [4];
  undefined8 local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar2 = *(byte *)(param_2 + 0x10);
  if ((bVar2 == 0x19) || (bVar3 = *(byte *)(param_3 + 0x10), bVar3 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar11 = (uint)bVar2;
    if (0x1b < bVar2) {
      uVar11 = 0x1c;
    }
    uVar9 = (uint)bVar3;
    if (0x1b < bVar3) {
      uVar9 = 0x1c;
    }
    cVar6 = (&DAT_14aa842ba)[uVar9 << 4];
    cVar4 = (&DAT_14aa842ba)[uVar11 << 4];
    if ((cVar6 == '\x01') || (cVar4 == '\x01')) {
      cVar10 = cVar4;
      if (cVar4 < cVar6) {
        cVar10 = cVar6;
      }
    }
    else {
      cVar10 = cVar6;
      if (cVar4 < cVar6) {
        cVar10 = cVar4;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar11 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar9 << 4] == '\x02')) {
      switch(cVar10) {
      case '\x01':
        uVar7 = 5;
        break;
      case '\x02':
        uVar7 = 6;
        break;
      case '\x03':
        uVar7 = 7;
        break;
      case '\x04':
        uVar7 = 8;
        break;
      default:
        if (cVar10 == '\x10') {
          uVar7 = 0x16;
        }
        else {
          uVar7 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar7;
      FUN_14013e547(local_80,param_2,local_60);
      FUN_14013e547(&local_81,param_3,local_80);
      if ('\0' < cVar10) {
        lVar12 = 0;
        do {
          uVar1 = local_60[lVar12];
          uVar14 = FUN_147d1309a((int)local_80[lVar12]);
          uVar1 = FUN_144719204((int)uVar1,uVar14);
          iVar5 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar5 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar5);
          }
          puVar8 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar8 = param_1 + 3;
          }
          puVar8[iVar5] = uVar1;
          lVar12 = lVar12 + 1;
        } while (cVar10 != lVar12);
      }
    }
    else {
      cVar6 = cVar10;
      switch(cVar10) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar10 == '\x10') {
          cVar6 = '\x15';
        }
        else {
          cVar6 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar6;
      FUN_14614b3b8(param_2,local_60);
      FUN_14614b3b8(param_3,local_80);
      if ('\0' < cVar10) {
        lVar12 = 0;
        do {
          uVar14 = *(undefined4 *)((longlong)local_60 + lVar12 * 4);
          uVar13 = FUN_144b293fa(*(undefined4 *)((longlong)local_80 + lVar12 * 4));
          uVar14 = FUN_1447c7e44(uVar14,uVar13);
          iVar5 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar5 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar5);
          }
          puVar8 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar8 = param_1 + 3;
          }
          *(undefined4 *)(puVar8 + iVar5) = uVar14;
          *(undefined4 *)((longlong)puVar8 + (longlong)iVar5 * 8 + 4) = 0;
          lVar12 = lVar12 + 1;
        } while (cVar10 != lVar12);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0f267 FUN_147d0f267 body=945 status=ok
// SIG undefined FUN_147d0f267(void)

undefined8 * FUN_147d0f267(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  undefined8 local_90 [4];
  int local_70 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar2 = *(byte *)(param_2 + 0x10);
  if ((bVar2 == 0x19) || (bVar3 = *(byte *)(param_3 + 0x10), bVar3 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar12 = (uint)bVar2;
    if (0x1b < bVar2) {
      uVar12 = 0x1c;
    }
    uVar10 = (uint)bVar3;
    if (0x1b < bVar3) {
      uVar10 = 0x1c;
    }
    cVar7 = (&DAT_14aa842ba)[uVar10 << 4];
    cVar11 = (&DAT_14aa842ba)[uVar12 << 4];
    if ((cVar7 == '\x01') || (cVar11 == '\x01')) {
      if (cVar11 < cVar7) {
        cVar11 = cVar7;
      }
    }
    else if (cVar7 <= cVar11) {
      cVar11 = cVar7;
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar12 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar10 << 4] == '\x02')) {
      switch(cVar11) {
      case '\x01':
        uVar6 = 5;
        break;
      case '\x02':
        uVar6 = 6;
        break;
      case '\x03':
        uVar6 = 7;
        break;
      case '\x04':
        uVar6 = 8;
        break;
      default:
        if (cVar11 == '\x10') {
          uVar6 = 0x16;
        }
        else {
          uVar6 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar6;
      FUN_14013e547(local_90,param_2,local_70);
      FUN_14013e547(&local_91,param_3,local_90);
      if ('\0' < cVar11) {
        lVar13 = 0;
        do {
          uVar1 = *(undefined8 *)(local_70 + lVar13 * 2);
          uVar14 = FUN_147d1309a((int)local_90[lVar13]);
          uVar1 = FUN_144719204((int)uVar1,uVar14);
          iVar4 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar4);
          }
          puVar9 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar9 = param_1 + 3;
          }
          puVar9[iVar4] = uVar1;
          lVar13 = lVar13 + 1;
        } while (cVar11 != lVar13);
      }
    }
    else if (((&DAT_14aa842b9)[uVar12 << 4] == '\x01') || ((&DAT_14aa842b9)[uVar10 << 4] == '\x01'))
    {
      cVar7 = cVar11;
      switch(cVar11) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar11 == '\x10') {
          cVar7 = '\x15';
        }
        else {
          cVar7 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar7;
      FUN_14614b3b8(param_2,local_70);
      FUN_14614b3b8(param_3,local_90);
      if ('\0' < cVar11) {
        lVar13 = 0;
        do {
          iVar4 = local_70[lVar13];
          uVar14 = FUN_144b293fa(*(undefined4 *)((longlong)local_90 + lVar13 * 4));
          uVar14 = FUN_1447c7e44(iVar4,uVar14);
          iVar4 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar4);
          }
          puVar9 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar9 = param_1 + 3;
          }
          *(undefined4 *)(puVar9 + iVar4) = uVar14;
          *(undefined4 *)((longlong)puVar9 + (longlong)iVar4 * 8 + 4) = 0;
          lVar13 = lVar13 + 1;
        } while (cVar11 != lVar13);
      }
    }
    else {
      switch(cVar11) {
      case '\x01':
        uVar6 = 9;
        break;
      case '\x02':
        uVar6 = 10;
        break;
      case '\x03':
        uVar6 = 0xb;
        break;
      case '\x04':
        uVar6 = 0xc;
        break;
      default:
        if (cVar11 == '\x10') {
          uVar6 = 0x15;
        }
        else {
          uVar6 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar6;
      FUN_147d0d1b6(param_2,local_70);
      FUN_147d0d1b6(param_3,local_90);
      if ('\0' < cVar11) {
        lVar13 = 0;
        do {
          iVar4 = local_70[lVar13];
          iVar8 = FUN_147d0d4b1(*(undefined4 *)((longlong)local_90 + lVar13 * 4));
          iVar5 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar5 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar5);
          }
          puVar9 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar9 = param_1 + 3;
          }
          puVar9[iVar5] = (longlong)iVar4 % (longlong)iVar8 & 0xffffffff;
          lVar13 = lVar13 + 1;
        } while (cVar11 != lVar13);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0f619 FUN_147d0f619 body=702 status=ok
// SIG undefined FUN_147d0f619(void)

undefined8 * FUN_147d0f619(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  undefined8 local_80 [4];
  undefined8 local_60 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_2 + 0x10);
  if ((bVar1 == 0x19) || (bVar2 = *(byte *)(param_3 + 0x10), bVar2 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
  }
  else {
    uVar11 = (uint)bVar1;
    if (0x1b < bVar1) {
      uVar11 = 0x1c;
    }
    uVar9 = (uint)bVar2;
    if (0x1b < bVar2) {
      uVar9 = 0x1c;
    }
    cVar6 = (&DAT_14aa842ba)[uVar9 << 4];
    cVar3 = (&DAT_14aa842ba)[uVar11 << 4];
    if ((cVar6 == '\x01') || (cVar3 == '\x01')) {
      cVar10 = cVar3;
      if (cVar3 < cVar6) {
        cVar10 = cVar6;
      }
    }
    else {
      cVar10 = cVar6;
      if (cVar3 < cVar6) {
        cVar10 = cVar3;
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0x1000000000;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    if (((&DAT_14aa842b9)[uVar11 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar9 << 4] == '\x02')) {
      switch(cVar10) {
      case '\x01':
        uVar7 = 5;
        break;
      case '\x02':
        uVar7 = 6;
        break;
      case '\x03':
        uVar7 = 7;
        break;
      case '\x04':
        uVar7 = 8;
        break;
      default:
        if (cVar10 == '\x10') {
          uVar7 = 0x16;
        }
        else {
          uVar7 = 0;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar7;
      FUN_14013e547(local_80,param_2,local_60);
      FUN_14013e547(&local_81,param_3,local_80);
      if ('\0' < cVar10) {
        lVar12 = 0;
        do {
          uVar5 = FUN_144afd35e((int)local_60[lVar12],local_80[lVar12]);
          iVar4 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar4);
          }
          puVar8 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar8 = param_1 + 3;
          }
          puVar8[iVar4] = uVar5;
          lVar12 = lVar12 + 1;
        } while (cVar10 != lVar12);
      }
    }
    else {
      cVar6 = cVar10;
      switch(cVar10) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
        break;
      default:
        if (cVar10 == '\x10') {
          cVar6 = '\x15';
        }
        else {
          cVar6 = '\0';
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = cVar6;
      FUN_14614b3b8(param_2,local_60);
      FUN_14614b3b8(param_3,local_80);
      if ('\0' < cVar10) {
        lVar12 = 0;
        do {
          uVar13 = FUN_144a7ed88(*(undefined4 *)((longlong)local_60 + lVar12 * 4),
                                 *(undefined4 *)((longlong)local_80 + lVar12 * 4));
          iVar4 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
            FUN_147bcda28(param_1 + 3,iVar4);
          }
          puVar8 = (undefined8 *)param_1[0x13];
          if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
            puVar8 = param_1 + 3;
          }
          *(undefined4 *)(puVar8 + iVar4) = uVar13;
          *(undefined4 *)((longlong)puVar8 + (longlong)iVar4 * 8 + 4) = 0;
          lVar12 = lVar12 + 1;
        } while (cVar10 != lVar12);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d0f8d8 FUN_147d0f8d8 body=301 status=ok
// SIG undefined FUN_147d0f8d8(void)

ulonglong FUN_147d0f8d8(ulonglong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  
  uVar4 = param_1 & 0xffffffff;
  bVar8 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    bVar8 = (byte)param_1;
  }
  bVar1 = (&DAT_14aa842ba)[(ulonglong)bVar8 * 0x10];
  cVar2 = (&DAT_14aa842b9)[(ulonglong)bVar8 * 0x10];
  if (cVar2 == '\x01') {
    if ('\0' < (char)bVar1) {
      uVar6 = 0;
      do {
        *(uint *)(*param_2 + uVar6 * 8) = *(uint *)(*param_2 + uVar6 * 8) ^ 0x80000000;
        uVar6 = uVar6 + 1;
      } while (bVar1 != uVar6);
    }
  }
  else if (cVar2 == '\x02') {
    if ('\0' < (char)bVar1) {
      uVar6 = 0;
      do {
        *(ulonglong *)(*param_2 + uVar6 * 8) =
             *(ulonglong *)(*param_2 + uVar6 * 8) ^ 0x8000000000000000;
        uVar6 = uVar6 + 1;
      } while (bVar1 != uVar6);
    }
  }
  else {
    uVar5 = (undefined7)
            ((ulonglong)
             ((longlong)&switchD_147d0f98f::switchdataD_14aa863a4 +
             (longlong)(int)(&switchD_147d0f98f::switchdataD_14aa863a4)[bVar1 - 1]) >> 8);
    switch((uint)bVar1) {
    case 1:
      uVar4 = CONCAT71(uVar5,9);
      break;
    case 2:
      uVar4 = CONCAT71(uVar5,10);
      break;
    case 3:
      uVar4 = CONCAT71(uVar5,0xb);
      break;
    case 4:
      uVar4 = CONCAT71(uVar5,0xc);
      break;
    default:
      if (bVar1 == 0x10) {
        uVar4 = 0x15;
      }
      else {
        uVar4 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar9 = 0;
    do {
      lVar3 = *param_2;
      uVar7 = 0;
      switch(cVar2) {
      case '\x01':
        uVar7 = (uint)*(float *)(lVar3 + lVar9 * 8);
        break;
      case '\x02':
        uVar7 = (uint)*(double *)(lVar3 + lVar9 * 8);
        break;
      case '\x03':
        uVar7 = *(uint *)(lVar3 + lVar9 * 8);
        break;
      case '\x04':
        uVar7 = (uint)(*(char *)(lVar3 + lVar9 * 8) != '\0');
      }
      *(uint *)(lVar3 + lVar9 * 8) = -uVar7;
      lVar9 = lVar9 + 1;
    } while ((char)bVar1 != lVar9);
  }
  return uVar4;
}



// FUNCTION 147d0fa05 FUN_147d0fa05 body=304 status=ok
// SIG undefined FUN_147d0fa05(void)

uint FUN_147d0fa05(uint param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  
  uVar5 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar5 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar5 << 4];
  lVar4 = (longlong)(char)bVar1;
  cVar2 = (&DAT_14aa842b9)[uVar5 << 4];
  if (cVar2 == '\x01') {
    if ('\0' < (char)bVar1) {
      lVar6 = 0;
      do {
        auVar7 = ZEXT416(*(uint *)(*param_2 + lVar6 * 8));
        auVar7 = roundps(auVar7,auVar7,3);
        *(int *)(*param_2 + lVar6 * 8) = auVar7._0_4_;
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
    }
  }
  else if (cVar2 == '\x02') {
    if ('\0' < (char)bVar1) {
      lVar6 = 0;
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(*param_2 + lVar6 * 8);
        auVar7 = roundpd(auVar7,auVar7,3);
        *(longlong *)(*param_2 + lVar6 * 8) = auVar7._0_8_;
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
    }
  }
  else {
    param_1 = (uint)bVar1;
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        param_1 = 0x15;
      }
      else {
        param_1 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      switch(cVar2) {
      case '\x01':
        auVar7 = ZEXT416(*(uint *)(lVar3 + lVar6 * 8));
        break;
      case '\x02':
        auVar7 = ZEXT416((uint)(float)*(double *)(lVar3 + lVar6 * 8));
        break;
      case '\x03':
        auVar7 = ZEXT416((uint)(float)*(int *)(lVar3 + lVar6 * 8));
        break;
      case '\x04':
        auVar7 = ZEXT416((uint)(float)*(byte *)(lVar3 + lVar6 * 8));
        break;
      default:
        auVar7 = ZEXT816(0);
      }
      auVar7 = blendps(auVar7,ZEXT816(0),0xe);
      auVar7 = roundps(auVar7,auVar7,3);
      *(int *)(lVar3 + lVar6 * 8) = auVar7._0_4_;
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
  }
  return param_1;
}



// FUNCTION 147d0fb35 FUN_147d0fb35 body=316 status=ok
// SIG undefined FUN_147d0fb35(void)

uint FUN_147d0fb35(uint param_1,longlong *param_2)

{
  double dVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  uVar6 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar6 = param_1 & 0xff;
  }
  bVar2 = (&DAT_14aa842ba)[uVar6 << 4];
  lVar5 = (longlong)(char)bVar2;
  cVar3 = (&DAT_14aa842b9)[uVar6 << 4];
  if (cVar3 == '\x01') {
    if ('\0' < (char)bVar2) {
      lVar7 = 0;
      do {
        fVar8 = *(float *)(*param_2 + lVar7 * 8);
        auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar8),0xb);
        *(float *)(*param_2 + lVar7 * 8) = fVar8 - auVar9._0_4_;
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
  }
  else if (cVar3 == '\x02') {
    if ('\0' < (char)bVar2) {
      lVar7 = 0;
      do {
        dVar1 = *(double *)(*param_2 + lVar7 * 8);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar1;
        auVar9 = roundsd(ZEXT816(0),auVar9,0xb);
        *(double *)(*param_2 + lVar7 * 8) = dVar1 - auVar9._0_8_;
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
  }
  else {
    param_1 = (uint)bVar2;
    if (3 < bVar2 - 1) {
      if (bVar2 == 0x10) {
        param_1 = 0x15;
      }
      else {
        param_1 = 0;
        if ((char)bVar2 < '\x01') {
          return 0;
        }
      }
    }
    lVar7 = 0;
    do {
      lVar4 = *param_2;
      switch(cVar3) {
      case '\x01':
        fVar8 = *(float *)(lVar4 + lVar7 * 8);
        break;
      case '\x02':
        fVar8 = (float)*(double *)(lVar4 + lVar7 * 8);
        break;
      case '\x03':
        fVar8 = (float)*(int *)(lVar4 + lVar7 * 8);
        break;
      case '\x04':
        fVar8 = (float)*(byte *)(lVar4 + lVar7 * 8);
        break;
      default:
        fVar8 = 0.0;
      }
      auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar8),0xb);
      *(float *)(lVar4 + lVar7 * 8) = fVar8 - auVar9._0_4_;
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
  }
  return param_1;
}



// FUNCTION 147d0fc71 FUN_147d0fc71 body=393 status=ok
// SIG undefined FUN_147d0fc71(void)

uint FUN_147d0fc71(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = *(float *)(*param_2 + lVar8 * 8);
        if (fVar9 < 0.0) {
          fVar9 = sqrtf(fVar9);
        }
        else {
          fVar9 = SQRT(fVar9);
        }
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = *(double *)(*param_2 + lVar8 * 8);
        if (dVar10 < 0.0) {
          dVar10 = sqrt(dVar10);
        }
        else {
          dVar10 = SQRT(dVar10);
        }
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      fVar9 = 0.0;
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      if (fVar9 < 0.0) {
        fVar9 = sqrtf(fVar9);
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d0fdfa FUN_147d0fdfa body=328 status=ok
// SIG undefined FUN_147d0fdfa(void)

uint FUN_147d0fdfa(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = expf(*(float *)(*param_2 + lVar8 * 8));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = exp(*(double *)(*param_2 + lVar8 * 8));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = expf(fVar9);
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d0ff42 FUN_147d0ff42 body=314 status=ok
// SIG undefined FUN_147d0ff42(void)

uint FUN_147d0ff42(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        uVar10 = exp2f(*(undefined4 *)(*param_2 + lVar8 * 8));
        *(undefined4 *)(*param_2 + lVar8 * 8) = uVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        uVar11 = exp2(*(undefined8 *)(*param_2 + lVar8 * 8));
        *(undefined8 *)(*param_2 + lVar8 * 8) = uVar11;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      uVar10 = exp2f(fVar9);
      *(undefined4 *)(*param_2 + lVar8 * 8) = uVar10;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d1007c FUN_147d1007c body=328 status=ok
// SIG undefined FUN_147d1007c(void)

uint FUN_147d1007c(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = logf(*(float *)(*param_2 + lVar8 * 8));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = log(*(double *)(*param_2 + lVar8 * 8));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = logf(fVar9);
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d101c4 FUN_147d101c4 body=384 status=ok
// SIG undefined FUN_147d101c4(void)

uint FUN_147d101c4(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = logf(*(float *)(*param_2 + lVar8 * 8));
        *(float *)(*param_2 + lVar8 * 8) = fVar9 * 1.442695;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = log(*(double *)(*param_2 + lVar8 * 8));
        *(double *)(*param_2 + lVar8 * 8) = dVar10 * 1.4426950408889634;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = logf(fVar9);
      *(float *)(*param_2 + lVar8 * 8) = fVar9 * 1.442695;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d10344 FUN_147d10344 body=314 status=ok
// SIG undefined FUN_147d10344(void)

uint FUN_147d10344(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        uVar10 = FUN_147d13158(*(undefined4 *)(*param_2 + lVar8 * 8));
        *(undefined4 *)(*param_2 + lVar8 * 8) = uVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        uVar11 = FUN_147d130da(*(undefined8 *)(*param_2 + lVar8 * 8));
        *(undefined8 *)(*param_2 + lVar8 * 8) = uVar11;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      uVar10 = FUN_147d13158(fVar9);
      *(undefined4 *)(*param_2 + lVar8 * 8) = uVar10;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d1047e FUN_147d1047e body=328 status=ok
// SIG undefined FUN_147d1047e(void)

uint FUN_147d1047e(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = tanf(*(float *)(*param_2 + lVar8 * 8));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = tan(*(double *)(*param_2 + lVar8 * 8));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = tanf(fVar9);
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d105c6 FUN_147d105c6 body=487 status=ok
// SIG undefined FUN_147d105c6(void)

uint FUN_147d105c6(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = *(float *)(*param_2 + lVar8 * 8);
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
        fVar9 = asinf((float)(-(uint)(fVar9 < -1.0) & 0xbf800000 |
                             ~-(uint)(fVar9 < -1.0) & (uint)fVar11));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = *(double *)(*param_2 + lVar8 * 8);
        dVar12 = dVar10;
        if (1.0 <= dVar10) {
          dVar12 = 1.0;
        }
        dVar10 = asin((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar12));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar11 = fVar9;
      if (1.0 <= fVar9) {
        fVar11 = 1.0;
      }
      fVar9 = asinf((float)(~-(uint)(fVar9 < -1.0) & (uint)fVar11 |
                           -(uint)(fVar9 < -1.0) & 0xbf800000));
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d107ad FUN_147d107ad body=487 status=ok
// SIG undefined FUN_147d107ad(void)

uint FUN_147d107ad(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = *(float *)(*param_2 + lVar8 * 8);
        fVar11 = fVar9;
        if (1.0 <= fVar9) {
          fVar11 = 1.0;
        }
        fVar9 = acosf((float)(-(uint)(fVar9 < -1.0) & 0xbf800000 |
                             ~-(uint)(fVar9 < -1.0) & (uint)fVar11));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = *(double *)(*param_2 + lVar8 * 8);
        dVar12 = dVar10;
        if (1.0 <= dVar10) {
          dVar12 = 1.0;
        }
        dVar10 = acos((double)(-(ulonglong)(dVar10 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar10 < -1.0) & (ulonglong)dVar12));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar11 = fVar9;
      if (1.0 <= fVar9) {
        fVar11 = 1.0;
      }
      fVar9 = acosf((float)(~-(uint)(fVar9 < -1.0) & (uint)fVar11 |
                           -(uint)(fVar9 < -1.0) & 0xbf800000));
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d10994 FUN_147d10994 body=328 status=ok
// SIG undefined FUN_147d10994(void)

uint FUN_147d10994(uint param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  undefined7 uVar6;
  
  uVar3 = 0x1c;
  if ((byte)param_1 < 0x1c) {
    uVar3 = param_1 & 0xff;
  }
  bVar1 = (&DAT_14aa842ba)[uVar3 << 4];
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (uint)CONCAT71(uVar6,bVar1);
  lVar4 = (longlong)(char)bVar1;
  uVar7 = (uint)(byte)(&DAT_14aa842b9)[uVar3 << 4];
  if ((&DAT_14aa842b9)[uVar3 << 4] == 1) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        fVar9 = atanf(*(float *)(*param_2 + lVar8 * 8));
        *(float *)(*param_2 + lVar8 * 8) = fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else if (uVar7 == 2) {
    if ('\0' < (char)bVar1) {
      lVar8 = 0;
      do {
        dVar10 = atan(*(double *)(*param_2 + lVar8 * 8));
        *(double *)(*param_2 + lVar8 * 8) = dVar10;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
  }
  else {
    if (3 < bVar1 - 1) {
      if (bVar1 == 0x10) {
        uVar5 = (uint)CONCAT71(uVar6,0x15);
      }
      else {
        uVar5 = 0;
        if ((char)bVar1 < '\x01') {
          return 0;
        }
      }
    }
    lVar8 = 0;
    do {
      if (uVar7 - 1 < 4) {
        lVar2 = *param_2;
        switch(uVar7) {
        case 1:
          fVar9 = *(float *)(lVar2 + lVar8 * 8);
          break;
        case 2:
          fVar9 = (float)*(double *)(lVar2 + lVar8 * 8);
          break;
        case 3:
          fVar9 = (float)*(int *)(lVar2 + lVar8 * 8);
          break;
        case 4:
          fVar9 = (float)*(byte *)(lVar2 + lVar8 * 8);
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = atanf(fVar9);
      *(float *)(*param_2 + lVar8 * 8) = fVar9;
      lVar8 = lVar8 + 1;
      param_1 = uVar5;
    } while (lVar4 != lVar8);
  }
  return param_1;
}



// FUNCTION 147d10adc FUN_147d10adc body=985 status=ok
// SIG undefined FUN_147d10adc(void)

ulonglong FUN_147d10adc(undefined8 param_1,uint param_2,longlong *param_3,int *param_4)

{
  float fVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  uint local_d0;
  longlong local_c8;
  uint local_c0;
  longlong local_b8;
  uint local_b0;
  longlong local_a8;
  uint local_a0;
  longlong local_98;
  uint local_90;
  double local_88 [4];
  double local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar9 = (uint)param_1 & 0xff;
  if (0x1b < (byte)param_1) {
    uVar9 = 0x1c;
  }
  uVar16 = 0x1c;
  if ((byte)param_2 < 0x1c) {
    uVar16 = param_2 & 0xff;
  }
  cVar2 = (&DAT_14aa842ba)[uVar16 << 4];
  uVar17 = (uint)cVar2;
  cVar3 = (&DAT_14aa842ba)[uVar9 << 4];
  uVar19 = (ulonglong)cVar3;
  uVar10 = (uint)cVar3;
  if ((uVar17 == 1) || (cVar3 == '\x01')) {
    uVar13 = uVar19 & 0xffffffff;
    if (cVar3 < cVar2) {
      uVar13 = (ulonglong)uVar17;
    }
  }
  else {
    uVar12 = uVar17;
    if (cVar3 < cVar2) {
      uVar12 = uVar10;
    }
    uVar13 = (ulonglong)uVar12;
  }
  uVar12 = (uint)uVar13;
  cVar11 = (char)uVar13;
  uVar18 = (uint)cVar11;
  *param_4 = (uVar10 + uVar17) - uVar18;
  cVar4 = (&DAT_14aa842b9)[uVar9 << 4];
  cVar5 = (&DAT_14aa842b9)[uVar16 << 4];
  if ((cVar4 != '\x01') || (cVar5 != '\x01')) {
    if ((cVar4 == '\x02') || (cVar5 == '\x02')) {
      switch(uVar12 & 0xff) {
      case 1:
        uVar13 = 5;
        break;
      case 2:
        uVar13 = 6;
        break;
      case 3:
        uVar13 = 7;
        break;
      case 4:
        uVar13 = 8;
        break;
      default:
        if ((uVar12 & 0xff) == 0x10) {
          uVar13 = 0x16;
        }
        else {
          uVar13 = 0;
        }
      }
      lVar8 = *param_3;
      local_98 = lVar8;
      local_90 = uVar10;
      FUN_147d131cd(param_1,&local_98,local_68);
      local_a8 = uVar19 * 8 + lVar8;
      local_a0 = uVar17;
      FUN_147d131cd(param_2,&local_a8,local_88);
      if ('\0' < cVar11) {
        uVar19 = 0;
        do {
          dVar21 = local_68[uVar19];
          if (local_88[uVar19] <= local_68[uVar19]) {
            dVar21 = local_88[uVar19];
          }
          *(double *)(*param_3 + uVar19 * 8) = dVar21;
          uVar19 = uVar19 + 1;
        } while (uVar18 != uVar19);
      }
    }
    else if ((cVar4 == '\x01') || (cVar5 == '\x01')) {
      switch(uVar12 & 0xff) {
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      default:
        if ((uVar12 & 0xff) == 0x10) {
          uVar13 = 0x15;
        }
        else {
          uVar13 = 0;
        }
      }
      lVar8 = *param_3;
      local_d8 = lVar8;
      local_d0 = uVar10;
      FUN_147d133ed(param_1,&local_d8,local_68);
      local_e8 = uVar19 * 8 + lVar8;
      local_e0 = uVar17;
      FUN_147d133ed(param_2,&local_e8,local_88);
      if ('\0' < cVar11) {
        uVar19 = 0;
        do {
          fVar1 = *(float *)((longlong)local_68 + uVar19 * 4);
          fVar20 = *(float *)((longlong)local_88 + uVar19 * 4);
          if (fVar20 <= fVar1) {
            fVar1 = fVar20;
          }
          *(float *)(*param_3 + uVar19 * 8) = fVar1;
          uVar19 = uVar19 + 1;
        } while (uVar18 != uVar19);
      }
    }
    else {
      switch(uVar12 & 0xff) {
      case 1:
        uVar13 = 9;
        break;
      case 2:
        uVar13 = 10;
        break;
      case 3:
        uVar13 = 0xb;
        break;
      case 4:
        uVar13 = 0xc;
        break;
      default:
        if ((uVar12 & 0xff) == 0x10) {
          uVar13 = 0x15;
        }
        else {
          uVar13 = 0;
        }
      }
      lVar8 = *param_3;
      local_b8 = lVar8;
      local_b0 = uVar10;
      FUN_147d132e5(param_1,&local_b8,local_68);
      local_c8 = uVar19 * 8 + lVar8;
      local_c0 = uVar17;
      FUN_147d132e5(param_2,&local_c8,local_88);
      if ('\0' < cVar11) {
        uVar19 = 0;
        do {
          iVar6 = *(int *)((longlong)local_88 + uVar19 * 4);
          iVar7 = *(int *)((longlong)local_68 + uVar19 * 4);
          if (iVar7 < iVar6) {
            iVar6 = iVar7;
          }
          *(int *)(*param_3 + uVar19 * 8) = iVar6;
          uVar19 = uVar19 + 1;
        } while (uVar18 != uVar19);
      }
    }
    goto LAB_147d10c0c;
  }
  if ((uVar12 & 0xff) - 1 < 4) {
LAB_147d10ba8:
    uVar9 = uVar12;
    pfVar14 = (float *)*param_3;
    pfVar15 = pfVar14 + uVar19 * 2;
    uVar19 = 0;
    do {
      fVar20 = *pfVar14;
      if (*pfVar15 <= *pfVar14) {
        fVar20 = *pfVar15;
      }
      *(float *)((longlong)local_68 + uVar19 * 4) = fVar20;
      uVar19 = uVar19 + 1;
      pfVar14 = pfVar14 + (ulonglong)(cVar3 != '\x01') * 2;
      pfVar15 = pfVar15 + (ulonglong)(cVar2 != '\x01') * 2;
    } while (uVar18 != uVar19);
    uVar19 = 0;
    do {
      *(undefined4 *)(*param_3 + uVar19 * 8) = *(undefined4 *)((longlong)local_68 + uVar19 * 4);
      uVar19 = uVar19 + 1;
    } while (uVar18 != uVar19);
  }
  else {
    if ((uVar12 & 0xff) == 0x10) {
      uVar12 = (uint)CONCAT71((int7)(uVar13 >> 8),0x15);
      goto LAB_147d10ba8;
    }
    uVar9 = 0;
    uVar12 = 0;
    if ('\0' < cVar11) goto LAB_147d10ba8;
  }
  uVar13 = (ulonglong)uVar9;
LAB_147d10c0c:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 147d10eb6 FUN_147d10eb6 body=1058 status=ok
// SIG undefined FUN_147d10eb6(void)

ulonglong FUN_147d10eb6(undefined8 param_1,uint param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auStack_128 [40];
  longlong local_100;
  uint local_f8;
  longlong local_f0;
  uint local_e8;
  longlong local_e0;
  uint local_d8;
  longlong local_d0;
  uint local_c8;
  longlong local_c0;
  uint local_b8;
  longlong local_b0;
  uint local_a8;
  undefined8 local_a0 [4];
  int local_80 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = (uint)param_1 & 0xff;
  if (0x1b < (byte)param_1) {
    uVar5 = 0x1c;
  }
  uVar11 = 0x1c;
  if ((byte)param_2 < 0x1c) {
    uVar11 = param_2 & 0xff;
  }
  cVar1 = (&DAT_14aa842ba)[uVar11 << 4];
  uVar12 = (uint)cVar1;
  cVar2 = (&DAT_14aa842ba)[uVar5 << 4];
  lVar13 = (longlong)cVar2;
  uVar6 = (uint)cVar2;
  if ((uVar12 == 1) || (cVar2 == '\x01')) {
    uVar10 = (ulonglong)(uint)(int)cVar2;
    if (cVar2 < cVar1) {
      uVar10 = (ulonglong)uVar12;
    }
  }
  else {
    uVar9 = uVar12;
    if (cVar2 < cVar1) {
      uVar9 = uVar6;
    }
    uVar10 = (ulonglong)uVar9;
  }
  uVar9 = (uint)uVar10;
  cVar8 = (char)uVar10;
  uVar14 = (uint)cVar8;
  *param_4 = (uVar6 + uVar12) - uVar14;
  cVar3 = (&DAT_14aa842b9)[uVar5 << 4];
  cVar4 = (&DAT_14aa842b9)[uVar11 << 4];
  if ((cVar3 != '\x01') || (cVar4 != '\x01')) {
    if ((cVar3 == '\x02') || (cVar4 == '\x02')) {
      switch(uVar9 & 0xff) {
      case 1:
        uVar10 = 5;
        break;
      case 2:
        uVar10 = 6;
        break;
      case 3:
        uVar10 = 7;
        break;
      case 4:
        uVar10 = 8;
        break;
      default:
        if ((uVar9 & 0xff) == 0x10) {
          uVar10 = 0x16;
        }
        else {
          uVar10 = 0;
        }
      }
      lVar15 = *param_3;
      local_b0 = lVar15;
      local_a8 = uVar6;
      FUN_147d131cd(param_1,&local_b0,local_80);
      local_c0 = lVar13 * 8 + lVar15;
      local_b8 = uVar12;
      FUN_147d131cd(param_2,&local_c0,local_a0);
      if ('\0' < cVar8) {
        uVar16 = 0;
        do {
          uVar20 = *(undefined8 *)(local_80 + uVar16 * 2);
          uVar19 = FUN_147d1309a(local_a0[uVar16]);
          uVar20 = FUN_144719204(uVar20,uVar19);
          *(undefined8 *)(*param_3 + uVar16 * 8) = uVar20;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
    }
    else if ((cVar3 == '\x01') || (cVar4 == '\x01')) {
      switch(uVar9 & 0xff) {
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      default:
        if ((uVar9 & 0xff) == 0x10) {
          uVar10 = 0x15;
        }
        else {
          uVar10 = 0;
        }
      }
      lVar15 = *param_3;
      local_f0 = lVar15;
      local_e8 = uVar6;
      FUN_147d133ed(param_1,&local_f0,local_80);
      local_100 = lVar13 * 8 + lVar15;
      local_f8 = uVar12;
      FUN_147d133ed(param_2,&local_100,local_a0);
      if ('\0' < cVar8) {
        uVar16 = 0;
        do {
          iVar18 = local_80[uVar16];
          uVar19 = FUN_144b293fa(*(undefined4 *)((longlong)local_a0 + uVar16 * 4));
          uVar19 = FUN_1447c7e44(iVar18,uVar19);
          *(undefined4 *)(*param_3 + uVar16 * 8) = uVar19;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
    }
    else {
      switch(uVar9 & 0xff) {
      case 1:
        uVar10 = 9;
        break;
      case 2:
        uVar10 = 10;
        break;
      case 3:
        uVar10 = 0xb;
        break;
      case 4:
        uVar10 = 0xc;
        break;
      default:
        if ((uVar9 & 0xff) == 0x10) {
          uVar10 = 0x15;
        }
        else {
          uVar10 = 0;
        }
      }
      lVar15 = *param_3;
      local_d0 = lVar15;
      local_c8 = uVar6;
      FUN_147d132e5(param_1,&local_d0,local_80);
      local_e0 = lVar13 * 8 + lVar15;
      local_d8 = uVar12;
      FUN_147d132e5(param_2,&local_e0,local_a0);
      if ('\0' < cVar8) {
        uVar16 = 0;
        do {
          iVar18 = local_80[uVar16];
          iVar7 = FUN_147d0d4b1(*(undefined4 *)((longlong)local_a0 + uVar16 * 4));
          *(int *)(*param_3 + uVar16 * 8) = iVar18 % iVar7;
          uVar16 = uVar16 + 1;
        } while (uVar14 != uVar16);
      }
    }
    goto LAB_147d1100d;
  }
  if ((uVar9 & 0xff) - 1 < 4) {
LAB_147d10f91:
    uVar5 = uVar9;
    lVar13 = lVar13 << 3;
    lVar15 = 0;
    uVar10 = 0;
    do {
      uVar19 = *(undefined4 *)(*param_3 + lVar15);
      uVar17 = FUN_144b293fa(*(undefined4 *)(*param_3 + lVar13));
      iVar18 = FUN_1447c7e44(uVar19,uVar17);
      local_80[uVar10] = iVar18;
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + (ulonglong)(cVar2 != '\x01') * 8;
      lVar13 = lVar13 + (ulonglong)(cVar1 != '\x01') * 8;
    } while (uVar14 != uVar10);
    uVar10 = 0;
    do {
      *(int *)(*param_3 + uVar10 * 8) = local_80[uVar10];
      uVar10 = uVar10 + 1;
    } while (uVar14 != uVar10);
  }
  else {
    if ((uVar9 & 0xff) == 0x10) {
      uVar9 = (uint)CONCAT71((int7)(uVar10 >> 8),0x15);
      goto LAB_147d10f91;
    }
    uVar5 = 0;
    uVar9 = 0;
    if ('\0' < cVar8) goto LAB_147d10f91;
  }
  uVar10 = (ulonglong)uVar5;
LAB_147d1100d:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147d112d9 FUN_147d112d9 body=779 status=ok
// SIG undefined FUN_147d112d9(void)

ulonglong FUN_147d112d9(undefined8 param_1,uint param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  uint local_c0;
  longlong local_b8;
  uint local_b0;
  longlong local_a8;
  uint local_a0;
  longlong local_98;
  uint local_90;
  undefined8 local_88 [4];
  undefined8 local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = (uint)param_1 & 0xff;
  if (0x1b < (byte)param_1) {
    uVar3 = 0x1c;
  }
  uVar8 = 0x1c;
  if ((byte)param_2 < 0x1c) {
    uVar8 = param_2 & 0xff;
  }
  cVar1 = (&DAT_14aa842ba)[uVar8 << 4];
  uVar13 = (uint)cVar1;
  cVar2 = (&DAT_14aa842ba)[uVar3 << 4];
  lVar11 = (longlong)cVar2;
  uVar4 = (uint)cVar2;
  if ((uVar13 == 1) || (cVar2 == '\x01')) {
    uVar7 = (ulonglong)(uint)(int)cVar2;
    if (cVar2 < cVar1) {
      uVar7 = (ulonglong)uVar13;
    }
  }
  else {
    uVar6 = uVar13;
    if (cVar2 < cVar1) {
      uVar6 = uVar4;
    }
    uVar7 = (ulonglong)uVar6;
  }
  uVar6 = (uint)uVar7;
  cVar5 = (char)uVar7;
  uVar9 = (uint)cVar5;
  *param_4 = (uVar4 + uVar13) - uVar9;
  if (((&DAT_14aa842b9)[uVar3 << 4] != '\x01') || ((&DAT_14aa842b9)[uVar8 << 4] != '\x01')) {
    if (((&DAT_14aa842b9)[uVar3 << 4] == '\x02') || ((&DAT_14aa842b9)[uVar8 << 4] == '\x02')) {
      switch(uVar6 & 0xff) {
      case 1:
        uVar7 = 5;
        break;
      case 2:
        uVar7 = 6;
        break;
      case 3:
        uVar7 = 7;
        break;
      case 4:
        uVar7 = 8;
        break;
      default:
        if ((uVar6 & 0xff) == 0x10) {
          uVar7 = 0x16;
        }
        else {
          uVar7 = 0;
        }
      }
      lVar10 = *param_3;
      local_98 = lVar10;
      local_90 = uVar4;
      FUN_147d131cd(param_1,&local_98,local_68);
      local_a8 = lVar11 * 8 + lVar10;
      local_a0 = uVar13;
      FUN_147d131cd(param_2,&local_a8,local_88);
      if ('\0' < cVar5) {
        uVar12 = 0;
        do {
          uVar15 = FUN_144afd35e(local_68[uVar12],local_88[uVar12]);
          *(undefined8 *)(*param_3 + uVar12 * 8) = uVar15;
          uVar12 = uVar12 + 1;
        } while (uVar9 != uVar12);
      }
    }
    else {
      switch(uVar6 & 0xff) {
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      default:
        if ((uVar6 & 0xff) == 0x10) {
          uVar7 = 0x15;
        }
        else {
          uVar7 = 0;
        }
      }
      lVar10 = *param_3;
      local_b8 = lVar10;
      local_b0 = uVar4;
      FUN_147d133ed(param_1,&local_b8,local_68);
      local_c8 = lVar11 * 8 + lVar10;
      local_c0 = uVar13;
      FUN_147d133ed(param_2,&local_c8,local_88);
      if ('\0' < cVar5) {
        uVar12 = 0;
        do {
          uVar14 = FUN_144a7ed88(*(undefined4 *)((longlong)local_68 + uVar12 * 4),
                                 *(undefined4 *)((longlong)local_88 + uVar12 * 4));
          *(undefined4 *)(*param_3 + uVar12 * 8) = uVar14;
          uVar12 = uVar12 + 1;
        } while (uVar9 != uVar12);
      }
    }
    goto LAB_147d1141d;
  }
  if ((uVar6 & 0xff) - 1 < 4) {
LAB_147d113ac:
    uVar3 = uVar6;
    lVar11 = lVar11 << 3;
    lVar10 = 0;
    uVar7 = 0;
    do {
      uVar14 = FUN_144a7ed88(*(undefined4 *)(*param_3 + lVar10),*(undefined4 *)(*param_3 + lVar11));
      *(undefined4 *)((longlong)local_68 + uVar7 * 4) = uVar14;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + (ulonglong)(cVar2 != '\x01') * 8;
      lVar11 = lVar11 + (ulonglong)(cVar1 != '\x01') * 8;
    } while (uVar9 != uVar7);
    uVar7 = 0;
    do {
      *(undefined4 *)(*param_3 + uVar7 * 8) = *(undefined4 *)((longlong)local_68 + uVar7 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar7);
  }
  else {
    if ((uVar6 & 0xff) == 0x10) {
      uVar6 = (uint)CONCAT71((int7)(uVar7 >> 8),0x15);
      goto LAB_147d113ac;
    }
    uVar3 = 0;
    uVar6 = 0;
    if ('\0' < cVar5) goto LAB_147d113ac;
  }
  uVar7 = (ulonglong)uVar3;
LAB_147d1141d:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147d115fc FUN_147d115fc body=5 status=ok
// SIG undefined FUN_147d115fc(void)

undefined8 FUN_147d115fc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 147d11620 FUN_147d11620 body=345 status=ok
// SIG undefined FUN_147d11620(void)

void FUN_147d11620(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146ed6908(param_2,param_1 + 8);
  lVar4 = param_2[0xd];
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0xb8))(*(longlong **)(lVar4 + 8),1);
    if (cVar2 == '\0') {
      local_30 = 0;
      (**(code **)(*param_2 + 0x150))(param_2);
      goto LAB_147d11684;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x20);
LAB_147d11684:
  uVar3 = FUN_14010abd4(param_2,param_1 + 0x28);
  FUN_14010abd4(uVar3,param_1 + 0x38);
  lVar4 = 0;
  do {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_30 = CONCAT44(local_30._4_4_,(uint)*(byte *)(param_1 + 0x48 + lVar4));
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      if (1 < (uint)local_30) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x48 + lVar4) = (uint)local_30 != 0;
    }
    else {
      *(bool *)(param_1 + 0x48 + lVar4) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  if ((int)param_2[8] < 0x1d4) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0x41a00000;
      *(undefined4 *)(param_1 + 0x54) = 0x41a00000;
      *(undefined4 *)(param_1 + 0x58) = 0x41a00000;
      *(undefined4 *)(param_1 + 0x5c) = 0x41a00000;
    }
  }
  else {
    FUN_1447e46aa(param_2,param_1 + 0x50);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d117c7 FUN_147d117c7 body=348 status=ok
// SIG undefined FUN_147d117c7(void)

longlong * FUN_147d117c7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if (((*(byte *)(param_1 + 5) & 4) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    if (lVar4 != 0) {
      local_1c = 2;
    }
  }
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147d11850:
    plVar5 = (longlong *)*param_2;
LAB_147d11853:
    if (plVar5 == (longlong *)0x0) goto LAB_147d118f1;
    (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
    if (((*(byte *)(param_1 + 5) & 1) == 0) || (0x130 < (int)param_1[8])) goto LAB_147d118f1;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else if (local_1c != 0) {
    if (local_1c != 2) goto LAB_147d11850;
    plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar5[1] = 0;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    *plVar5 = (longlong)&PTR_FUN_14a3ca300;
    plVar5[10] = 0;
    plVar5[0xb] = 0x3f80000000000000;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    *(undefined4 *)(plVar5 + 9) = 0;
    *param_2 = (longlong)plVar5;
    goto LAB_147d11853;
  }
  *param_2 = 0;
LAB_147d118f1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d11924 FUN_147d11924 body=70 status=ok
// SIG undefined FUN_147d11924(void)

ulonglong FUN_147d11924(int param_1)

{
  bool bVar1;
  undefined8 unaff_RBX;
  
  FUN_147d11ca0();
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  FUN_141518296();
  bVar1 = param_1 < DAT_14cb05a00;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1 && -1 < param_1) & 0xffffffff;
}



// FUNCTION 147d1196a FUN_147d1196a body=214 status=ok
// SIG undefined FUN_147d1196a(void)

void FUN_147d1196a(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_147d11ca0();
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  uVar6 = *(uint *)(param_1 + 0x38);
  FUN_147d11d00();
  if ((int)uVar6 < DAT_14cb05a38) {
    do {
      FUN_147d11d00();
      puVar2 = DAT_14cb05a30;
      if (DAT_14cb05a30 == (undefined *)0x0) {
        puVar2 = &DAT_14cb05a20;
      }
      uVar3 = uVar6 + 0x1f;
      if (-1 < (int)uVar6) {
        uVar3 = uVar6;
      }
      uVar3 = *(uint *)(puVar2 + (longlong)((int)uVar3 >> 5) * 4);
      iVar1 = FUN_144a54ea4(param_1 + 0x20,1);
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar5 = param_1 + 0x20;
      }
      iVar4 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      *(uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4) =
           (uint)((uVar3 >> (uVar6 & 0x1f) & 1) != 0) << ((byte)(iVar1 % 0x20) & 0x1f) |
           *(uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4) & ~(1 << (iVar1 % 0x20 & 0x1fU));
      uVar6 = uVar6 + 1;
      FUN_147d11d00();
    } while ((int)uVar6 < DAT_14cb05a38);
  }
                    /* WARNING: Could not recover jumptable at 0x000147d11a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  return;
}



// FUNCTION 147d11a40 FUN_147d11a40 body=128 status=ok
// SIG undefined FUN_147d11a40(void)

undefined4 FUN_147d11a40(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  FUN_147d11ca0();
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  FUN_147d11c08();
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_147d1353c(uVar2,param_1);
  lVar4 = (longlong)iVar3 * 0x20 + DAT_14cb059a0;
  uVar2 = 0xffffffff;
  if (lVar4 != 0 && iVar3 != -1) {
    uVar2 = *(undefined4 *)(lVar4 + 0x10);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  return uVar2;
}



// FUNCTION 147d11ac0 FUN_147d11ac0 body=328 status=ok
// SIG undefined FUN_147d11ac0(void)

wchar_t * FUN_147d11ac0(int param_1)

{
  switch(param_1) {
  case 0:
    return L"BrushWireframe";
  case 1:
    return L"Wireframe";
  case 2:
    return L"Unlit";
  case 3:
    return L"Lit";
  case 4:
    return L"Lit_DetailLighting";
  case 5:
    return L"LightingOnly";
  case 6:
    return L"LightComplexity";
  case 7:
  case 0xd:
  case 0x11:
  case 0x18:
  case 0x24:
    goto switchD_147d11ad5_caseD_7;
  case 8:
    return L"ShaderComplexity";
  case 9:
    return L"LightmapDensity";
  case 10:
    return L"LitLightmapDensity";
  case 0xb:
    return L"ReflectionOverride";
  case 0xc:
    return L"VisualizeBuffer";
  case 0xe:
    return L"StationaryLightOverlap";
  case 0xf:
    return L"CollisionPawn";
  case 0x10:
    return L"CollisionVis";
  case 0x12:
    return L"LODColoration";
  case 0x13:
    return L"QuadOverdraw";
  case 0x14:
    return L"PrimitiveDistanceAccuracy";
  case 0x15:
    return L"MeshUVDensityAccuracy";
  case 0x16:
    return L"ShaderComplexityWithQuadOverdraw";
  case 0x17:
    return L"HLODColoration";
  case 0x19:
    return L"MaterialTextureScaleAccuracy";
  case 0x1a:
    return L"RequiredTextureResolution";
  case 0x1b:
    return L"PathTracing";
  case 0x1c:
    return L"RayTracingDebug";
  case 0x1d:
    return L"VisualizeNanite";
  case 0x1e:
    return L"VirtualTexturePendingMips";
  case 0x1f:
    return L"VisualizeLumen";
  case 0x20:
    return L"VisualizeVirtualShadowMap";
  case 0x21:
    return L"VisualizeGPUSkinCache";
  case 0x22:
    return L"VisualizeSubstrate";
  case 0x23:
    return L"VisualizeGroom";
  case 0x25:
    return L"Lit_Wireframe";
  default:
    if (param_1 == 100) {
      return L"GameDifficultyHeatMap";
    }
    if (param_1 == 0xff) {
      return L"Unknown";
    }
switchD_147d11ad5_caseD_7:
    return L"";
  }
}



// FUNCTION 147d11c08 FUN_147d11c08 body=152 status=ok
// SIG undefined FUN_147d11c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d11c08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb059f0) {
    FUN_144b3d300(&DAT_14cb059f0);
    if (DAT_14cb059f0 == -1) {
      DAT_14cb059c0 = 0;
      DAT_14cb059c8 = 0;
      DAT_14cb059a0 = 0;
      _DAT_14cb059a8 = 0;
      _DAT_14cb059cc = 0xffffffff00000080;
      DAT_14cb059d4 = 0;
      DAT_14cb059e0 = 0;
      DAT_14cb059e8 = 0;
      atexit(FUN_1436af511);
      _Init_thread_footer(&DAT_14cb059f0);
      return;
    }
  }
  return;
}



// FUNCTION 147d11ca0 FUN_147d11ca0 body=96 status=ok
// SIG undefined FUN_147d11ca0(void)

undefined * FUN_147d11ca0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05a18) {
    FUN_144b3d300(&DAT_14cb05a18);
    if (DAT_14cb05a18 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14cb05a10);
      _Init_thread_footer(&DAT_14cb05a18);
    }
  }
  return &DAT_14cb05a10;
}



// FUNCTION 147d11d00 FUN_147d11d00 body=119 status=ok
// SIG undefined FUN_147d11d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d11d00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05a40) {
    FUN_144b3d300(&DAT_14cb05a40);
    if (DAT_14cb05a40 == -1) {
      DAT_14cb05a30 = 0;
      _DAT_14cb05a38 = 0x8000000000;
      atexit((_func_5014 *)&LAB_1436af56b);
      _Init_thread_footer(&DAT_14cb05a40);
      return;
    }
  }
  return;
}



// FUNCTION 147d11d7c FUN_147d11d7c body=124 status=ok
// SIG undefined FUN_147d11d7c(void)

void FUN_147d11d7c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e38ef4);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d11dfa FUN_147d11dfa body=75 status=ok
// SIG undefined FUN_147d11dfa(void)

void FUN_147d11dfa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144b00dc8();
  FUN_1427ff290(lVar2 + 0x240,param_1);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      FUN_147cf2784(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147d11e46 FUN_147d11e46 body=57 status=ok
// SIG undefined FUN_147d11e46(void)

longlong FUN_147d11e46(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147d11e80 FUN_147d11e80 body=94 status=ok
// SIG undefined FUN_147d11e80(void)

void FUN_147d11e80(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147d0bed2(param_1,iVar2);
    }
    FUN_147d13618((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 147d11ede FUN_147d11ede body=148 status=ok
// SIG undefined FUN_147d11ede(void)

undefined8 FUN_147d11ede(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_144a799b0();
  FUN_144a5c54a(local_a8,uVar1);
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



// FUNCTION 147d11f74 FUN_147d11f74 body=129 status=ok
// SIG undefined FUN_147d11f74(void)

longlong FUN_147d11f74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147d11ff5();
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
      FUN_140b7fdd8(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147d11ff5 FUN_147d11ff5 body=647 status=ok
// SIG undefined FUN_147d11ff5(void)

longlong * FUN_147d11ff5(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
        thunk_FUN_14572512c(param_1,&local_64);
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
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x28);
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x28 + 0x10);
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
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1407a3aa0(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_140ac5f02(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 4) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_14021219d(param_1,puVar3);
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



// FUNCTION 147d1228c FUN_147d1228c body=31 status=ok
// SIG undefined FUN_147d1228c(void)

undefined8
FUN_147d1228c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147d12410(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147d122d4 FUN_147d122d4 body=37 status=ok
// SIG undefined FUN_147d122d4(void)

void FUN_147d122d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147d122fa FUN_147d122fa body=234 status=ok
// SIG undefined FUN_147d122fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d122fa(longlong param_1,undefined8 param_2)

{
  if ((DAT_14cb05c07 & 2) == 0) {
    DAT_14cb05c07 = DAT_14cb05c07 | 3;
    _DAT_14cb05ba8 = L"UE::Shader::EValueComponentType";
    _DAT_14cb05bc0 = &LAB_147d123e4;
    _DAT_14cb05bc8 = &LAB_147d123f0;
    _DAT_14cb05bd0 = &LAB_147d123fc;
    _DAT_14cb05bd8 = &LAB_147d12402;
    _DAT_14cb05be0 = &LAB_147d12406;
    _DAT_14cb05bb8 = &LAB_147d1240c;
    _DAT_14cb05bf8 = &DAT_100000001;
    _DAT_14cb05c00 = 1;
    DAT_14cb05c04 = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14cb05ba0,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147d12410 FUN_147d12410 body=245 status=ok
// SIG undefined FUN_147d12410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d12410(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147d12506(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14cb05c07 & 2) == 0) {
    DAT_14cb05c07 = DAT_14cb05c07 | 3;
    _DAT_14cb05ba8 = L"UE::Shader::EValueComponentType";
    _DAT_14cb05bc0 = &LAB_147d123e4;
    _DAT_14cb05bc8 = &LAB_147d123f0;
    _DAT_14cb05bd0 = &LAB_147d123fc;
    _DAT_14cb05bd8 = &LAB_147d12402;
    _DAT_14cb05be0 = &LAB_147d12406;
    _DAT_14cb05bb8 = &LAB_147d1240c;
    _DAT_14cb05bf8 = &DAT_100000001;
    _DAT_14cb05c00 = 1;
    DAT_14cb05c04 = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14cb05ba0,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147d12506 FUN_147d12506 body=59 status=ok
// SIG undefined FUN_147d12506(void)

void FUN_147d12506(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147d12542(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147d12612();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d12542 FUN_147d12542 body=82 status=ok
// SIG undefined FUN_147d12542(void)

void FUN_147d12542(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147d12594(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(int)param_2);
  return;
}



// FUNCTION 147d12594 FUN_147d12594 body=124 status=ok
// SIG undefined FUN_147d12594(void)

void FUN_147d12594(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_144a7f90c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d12612 FUN_147d12612 body=119 status=ok
// SIG undefined FUN_147d12612(void)

void FUN_147d12612(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 147d1268a FUN_147d1268a body=203 status=ok
// SIG undefined FUN_147d1268a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d1268a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14cb05c07 & 2) == 0) {
    DAT_14cb05c07 = DAT_14cb05c07 | 3;
    _DAT_14cb05ba8 = L"UE::Shader::EValueComponentType";
    _DAT_14cb05bc0 = &LAB_147d123e4;
    _DAT_14cb05bc8 = &LAB_147d123f0;
    _DAT_14cb05bd0 = &LAB_147d123fc;
    _DAT_14cb05bd8 = &LAB_147d12402;
    _DAT_14cb05be0 = &LAB_147d12406;
    _DAT_14cb05bb8 = &LAB_147d1240c;
    _DAT_14cb05bf8 = &DAT_100000001;
    _DAT_14cb05c00 = 1;
    DAT_14cb05c04 = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14cb05ba0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147d12764 FUN_147d12764 body=31 status=ok
// SIG undefined FUN_147d12764(void)

undefined8
FUN_147d12764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147d12872(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147d127a0 FUN_147d127a0 body=74 status=ok
// SIG undefined FUN_147d127a0(void)

void FUN_147d127a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_146121074();
  FUN_1467ac8f2(param_1,&DAT_14cb058c8,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147d127ea FUN_147d127ea body=37 status=ok
// SIG undefined FUN_147d127ea(void)

void FUN_147d127ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147d12810 FUN_147d12810 body=97 status=ok
// SIG undefined FUN_147d12810(void)

void FUN_147d12810(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146121074();
  FUN_1467ac78e(param_1,param_2,&DAT_14cb058c8,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147d12872 FUN_147d12872 body=100 status=ok
// SIG undefined FUN_147d12872(void)

void FUN_147d12872(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147d128d6(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146121074();
  FUN_1467ac844(param_1,param_2,&DAT_14cb058c8,uVar1,uVar3);
  return;
}



// FUNCTION 147d128d6 FUN_147d128d6 body=59 status=ok
// SIG undefined FUN_147d128d6(void)

void FUN_147d128d6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147d12912(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147d129f6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d12912 FUN_147d12912 body=93 status=ok
// SIG undefined FUN_147d12912(void)

void FUN_147d12912(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147d12970(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x10 + uVar3),0,(longlong)(int)param_2 << 4);
  return;
}



// FUNCTION 147d12970 FUN_147d12970 body=132 status=ok
// SIG undefined FUN_147d12970(void)

void FUN_147d12970(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d129f6 FUN_147d129f6 body=62 status=ok
// SIG undefined FUN_147d129f6(void)

void FUN_147d129f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d12a34(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147d12a34 FUN_147d12a34 body=93 status=ok
// SIG undefined FUN_147d12a34(void)

ulonglong FUN_147d12a34(uint param_1,uint param_2)

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



// FUNCTION 147d12a92 FUN_147d12a92 body=103 status=ok
// SIG undefined FUN_147d12a92(void)

void FUN_147d12a92(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x40;
    if (0x40 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar3;
    FUN_147d12afa(param_1,*(undefined4 *)(param_1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 147d12afa FUN_147d12afa body=141 status=ok
// SIG undefined FUN_147d12afa(void)

void FUN_147d12afa(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 147d12b88 FUN_147d12b88 body=119 status=ok
// SIG undefined FUN_147d12b88(void)

void FUN_147d12b88(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147d12afa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d12c00 FUN_147d12c00 body=93 status=ok
// SIG undefined FUN_147d12c00(void)

void FUN_147d12c00(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x41) {
    iVar3 = 0x40;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_147d12c31;
  }
  iVar2 = iVar3;
  FUN_147d12afa(param_1,0,iVar2);
LAB_147d12c31:
  *(int *)(param_1 + 0x20c) = iVar2;
  return;
}



// FUNCTION 147d12c5e FUN_147d12c5e body=119 status=ok
// SIG undefined FUN_147d12c5e(void)

void FUN_147d12c5e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (*(int *)(param_1 + 0x20c) != 0) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147d12cd6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d12cd6 FUN_147d12cd6 body=139 status=ok
// SIG undefined FUN_147d12cd6(void)

void FUN_147d12cd6(undefined8 *param_1,int param_2,uint param_3)

{
  undefined8 *_Src;
  undefined8 uVar1;
  void *pvVar2;
  
  _Src = param_1 + 1;
  pvVar2 = (void *)*param_1;
  if (param_3 < 0x41) {
    if (pvVar2 != _Src) {
      memmove(_Src,pvVar2,(longlong)param_2 << 3);
      FUN_1400020a8(pvVar2);
      *param_1 = _Src;
    }
  }
  else {
    if (pvVar2 == _Src) {
      pvVar2 = (void *)FUN_14001fdce(0,(longlong)(int)param_3 << 3,0);
      *param_1 = pvVar2;
      memcpy(pvVar2,_Src,(longlong)param_2 << 3);
      return;
    }
    uVar1 = FUN_14001fdce(pvVar2,(longlong)(int)param_3 << 3,0);
    *param_1 = uVar1;
  }
  return;
}


