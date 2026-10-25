// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14631d234 FUN_14631d234 body=136 status=ok
// SIG undefined FUN_14631d234(void)

code * FUN_14631d234(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000025e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424956;
}



// FUNCTION 14631d2bc FUN_14631d2bc body=136 status=ok
// SIG undefined FUN_14631d2bc(void)

code * FUN_14631d2bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000025a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424a6a;
}



// FUNCTION 14631d344 FUN_14631d344 body=136 status=ok
// SIG undefined FUN_14631d344(void)

code * FUN_14631d344(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"YUVTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000288;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424c02;
}



// FUNCTION 14631d3cc FUN_14631d3cc body=136 status=ok
// SIG undefined FUN_14631d3cc(void)

code * FUN_14631d3cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"YUVTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000002b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbf68;
}



// FUNCTION 14631d454 FUN_14631d454 body=136 status=ok
// SIG undefined FUN_14631d454(void)

code * FUN_14631d454(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000002ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425160;
}



// FUNCTION 14631d4dc FUN_14631d4dc body=136 status=ok
// SIG undefined FUN_14631d4dc(void)

code * FUN_14631d4dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bIsARGBFmt";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000002d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e40752;
}



// FUNCTION 14631d564 FUN_14631d564 body=136 status=ok
// SIG undefined FUN_14631d564(void)

code * FUN_14631d564(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_Y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e406c8;
}



// FUNCTION 14631d5ec FUN_14631d5ec body=136 status=ok
// SIG undefined FUN_14631d5ec(void)

code * FUN_14631d5ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000002f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcc38c;
}



// FUNCTION 14631d674 FUN_14631d674 body=136 status=ok
// SIG undefined FUN_14631d674(void)

code * FUN_14631d674(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742540a;
}



// FUNCTION 14631d6fc FUN_14631d6fc body=136 status=ok
// SIG undefined FUN_14631d6fc(void)

code * FUN_14631d6fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000317;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e387a0;
}



// FUNCTION 14631d784 FUN_14631d784 body=136 status=ok
// SIG undefined FUN_14631d784(void)

code * FUN_14631d784(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000313;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474255a6;
}



// FUNCTION 14631d80c FUN_14631d80c body=136 status=ok
// SIG undefined FUN_14631d80c(void)

code * FUN_14631d80c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000338;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e40a66;
}



// FUNCTION 14631d894 FUN_14631d894 body=136 status=ok
// SIG undefined FUN_14631d894(void)

code * FUN_14631d894(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000334;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474256ba;
}



// FUNCTION 14631d91c FUN_14631d91c body=136 status=ok
// SIG undefined FUN_14631d91c(void)

code * FUN_14631d91c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000357;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742573e;
}



// FUNCTION 14631d9a4 FUN_14631d9a4 body=136 status=ok
// SIG undefined FUN_14631d9a4(void)

code * FUN_14631d9a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Offset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000373;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e38dbc;
}



// FUNCTION 14631da2c FUN_14631da2c body=136 status=ok
// SIG undefined FUN_14631da2c(void)

code * FUN_14631da2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dc4a8e;
}



// FUNCTION 14631dab4 FUN_14631dab4 body=136 status=ok
// SIG undefined FUN_14631dab4(void)

code * FUN_14631dab4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OnePixelDeltaX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x540000029c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dc4d08;
}



// FUNCTION 14631db3c FUN_14631db3c body=130 status=ok
// SIG undefined FUN_14631db3c(void)

undefined1 * FUN_14631db3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x298;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dc4d04;
}



// FUNCTION 14631dbbe FUN_14631dbbe body=136 status=ok
// SIG undefined FUN_14631dbbe(void)

code * FUN_14631dbbe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ebad7e;
}



// FUNCTION 14631dc46 FUN_14631dc46 body=136 status=ok
// SIG undefined FUN_14631dc46(void)

code * FUN_14631dc46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea7cd6;
}



// FUNCTION 14631dcce FUN_14631dcce body=136 status=ok
// SIG undefined FUN_14631dcce(void)

code * FUN_14631dcce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000003d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425852;
}



// FUNCTION 14631dd56 FUN_14631dd56 body=71 status=ok
// SIG undefined FUN_14631dd56(void)

void FUN_14631dd56(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca85ce5 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca85cd8 + 0x18))(&DAT_14ca85cd8,uVar1,*(code **)(DAT_14ca85cd8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca85cd8,0);
  return;
}



// FUNCTION 14631ddfa FUN_14631ddfa body=71 status=ok
// SIG undefined FUN_14631ddfa(void)

void FUN_14631ddfa(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca94df5 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631de2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca94de8 + 0x18))(&DAT_14ca94de8,uVar1,*(code **)(DAT_14ca94de8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca94de8,0);
  return;
}



// FUNCTION 14631de42 FUN_14631de42 body=167 status=ok
// SIG undefined FUN_14631de42(void)

void FUN_14631de42(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x2000040000;
  local_18 = 0x1100000002;
  local_98 = 0x2001021000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631deea FUN_14631deea body=67 status=ok
// SIG undefined FUN_14631deea(void)

void FUN_14631deea(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a387400;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631df2e FUN_14631df2e body=71 status=ok
// SIG undefined FUN_14631df2e(void)

void FUN_14631df2e(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca94ddd = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631df60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca94dd0 + 0x18))(&DAT_14ca94dd0,uVar1,*(code **)(DAT_14ca94dd0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca94dd0,0);
  return;
}



// FUNCTION 14631df76 FUN_14631df76 body=144 status=ok
// SIG undefined FUN_14631df76(void)

void FUN_14631df76(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [176];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631e008 FUN_14631e008 body=67 status=ok
// SIG undefined FUN_14631e008(void)

void FUN_14631e008(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a387460;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631e04c FUN_14631e04c body=71 status=ok
// SIG undefined FUN_14631e04c(void)

void FUN_14631e04c(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8923d = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e07e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca89230 + 0x18))(&DAT_14ca89230,uVar1,*(code **)(DAT_14ca89230 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca89230,0);
  return;
}



// FUNCTION 14631e094 FUN_14631e094 body=71 status=ok
// SIG undefined FUN_14631e094(void)

void FUN_14631e094(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca89255 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca89248 + 0x18))(&DAT_14ca89248,uVar1,*(code **)(DAT_14ca89248 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca89248,0);
  return;
}



// FUNCTION 14631e0dc FUN_14631e0dc body=40 status=ok
// SIG undefined FUN_14631e0dc(void)

undefined8 FUN_14631e0dc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631e104 FUN_14631e104 body=62 status=ok
// SIG undefined FUN_14631e104(void)

void FUN_14631e104(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e142 FUN_14631e142 body=62 status=ok
// SIG undefined FUN_14631e142(void)

void FUN_14631e142(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e16e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e180 FUN_14631e180 body=62 status=ok
// SIG undefined FUN_14631e180(void)

void FUN_14631e180(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e1be FUN_14631e1be body=62 status=ok
// SIG undefined FUN_14631e1be(void)

void FUN_14631e1be(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e1fc FUN_14631e1fc body=62 status=ok
// SIG undefined FUN_14631e1fc(void)

void FUN_14631e1fc(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e23a FUN_14631e23a body=62 status=ok
// SIG undefined FUN_14631e23a(void)

void FUN_14631e23a(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e278 FUN_14631e278 body=62 status=ok
// SIG undefined FUN_14631e278(void)

void FUN_14631e278(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e2b6 FUN_14631e2b6 body=62 status=ok
// SIG undefined FUN_14631e2b6(void)

void FUN_14631e2b6(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e2f4 FUN_14631e2f4 body=62 status=ok
// SIG undefined FUN_14631e2f4(void)

void FUN_14631e2f4(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e332 FUN_14631e332 body=62 status=ok
// SIG undefined FUN_14631e332(void)

void FUN_14631e332(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e370 FUN_14631e370 body=423 status=ok
// SIG undefined FUN_14631e370(void)

void FUN_14631e370(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_14631e474;
  ppuVar6 = (undefined8 **)(param_1 + 0x10);
  local_38 = 0;
  local_40 = 0x4109;
  local_48 = &DAT_100000010;
  FUN_14490af1f(&local_30,&local_48,L"WhiteVertexBufferWithRDG",1);
  if (ppuVar6 == &local_30) {
LAB_14631e4a4:
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_30)(local_30,1);
      }
    }
  }
  else {
    puVar3 = *ppuVar6;
    *ppuVar6 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      goto LAB_14631e4a4;
    }
  }
  uVar4 = (*ppuVar6)[5];
  cVar2 = *(char *)(param_2 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_50 = 1;
  local_58 = 0x10;
  puVar5 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar5 = 0x3f800000;
  puVar5[1] = 0x3f800000;
  puVar5[2] = 0x3f800000;
  puVar5[3] = 0x3f800000;
  uVar4 = (*ppuVar6)[5];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
  }
LAB_14631e474:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631e518 FUN_14631e518 body=62 status=ok
// SIG undefined FUN_14631e518(void)

void FUN_14631e518(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e556 FUN_14631e556 body=62 status=ok
// SIG undefined FUN_14631e556(void)

void FUN_14631e556(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e594 FUN_14631e594 body=62 status=ok
// SIG undefined FUN_14631e594(void)

void FUN_14631e594(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e5d2 FUN_14631e5d2 body=62 status=ok
// SIG undefined FUN_14631e5d2(void)

void FUN_14631e5d2(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e610 FUN_14631e610 body=62 status=ok
// SIG undefined FUN_14631e610(void)

void FUN_14631e610(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e64e FUN_14631e64e body=62 status=ok
// SIG undefined FUN_14631e64e(void)

void FUN_14631e64e(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e68c FUN_14631e68c body=62 status=ok
// SIG undefined FUN_14631e68c(void)

void FUN_14631e68c(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 14631e6ca FUN_14631e6ca body=71 status=ok
// SIG undefined FUN_14631e6ca(void)

void FUN_14631e6ca(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca94da5 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca94d98 + 0x18))(&DAT_14ca94d98,uVar1,*(code **)(DAT_14ca94d98 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca94d98,0);
  return;
}



// FUNCTION 14631e712 FUN_14631e712 body=71 status=ok
// SIG undefined FUN_14631e712(void)

void FUN_14631e712(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c0a5 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c098 + 0x18))(&DAT_14ca8c098,uVar1,*(code **)(DAT_14ca8c098 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c098,0);
  return;
}



// FUNCTION 14631e75a FUN_14631e75a body=71 status=ok
// SIG undefined FUN_14631e75a(void)

void FUN_14631e75a(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c0f5 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c0e8 + 0x18))(&DAT_14ca8c0e8,uVar1,*(code **)(DAT_14ca8c0e8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c0e8,0);
  return;
}



// FUNCTION 14631e7a2 FUN_14631e7a2 body=71 status=ok
// SIG undefined FUN_14631e7a2(void)

void FUN_14631e7a2(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca94e0d = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca94e00 + 0x18))(&DAT_14ca94e00,uVar1,*(code **)(DAT_14ca94e00 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca94e00,0);
  return;
}



// FUNCTION 14631e7ea FUN_14631e7ea body=71 status=ok
// SIG undefined FUN_14631e7ea(void)

void FUN_14631e7ea(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c10d = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c100 + 0x18))(&DAT_14ca8c100,uVar1,*(code **)(DAT_14ca8c100 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c100,0);
  return;
}



// FUNCTION 14631e832 FUN_14631e832 body=71 status=ok
// SIG undefined FUN_14631e832(void)

void FUN_14631e832(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c125 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c118 + 0x18))(&DAT_14ca8c118,uVar1,*(code **)(DAT_14ca8c118 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c118,0);
  return;
}



// FUNCTION 14631e87a FUN_14631e87a body=71 status=ok
// SIG undefined FUN_14631e87a(void)

void FUN_14631e87a(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c13d = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c130 + 0x18))(&DAT_14ca8c130,uVar1,*(code **)(DAT_14ca8c130 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c130,0);
  return;
}



// FUNCTION 14631e8c2 FUN_14631e8c2 body=93 status=ok
// SIG undefined FUN_14631e8c2(void)

void FUN_14631e8c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a388030;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631e920 FUN_14631e920 body=71 status=ok
// SIG undefined FUN_14631e920(void)

void FUN_14631e920(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8c19d = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631e952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8c190 + 0x18))(&DAT_14ca8c190,uVar1,*(code **)(DAT_14ca8c190 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8c190,0);
  return;
}



// FUNCTION 14631e968 FUN_14631e968 body=93 status=ok
// SIG undefined FUN_14631e968(void)

void FUN_14631e968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3880e0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631e9c6 FUN_14631e9c6 body=191 status=ok
// SIG undefined FUN_14631e9c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631e9c6(void)

{
  _DAT_14ca8cb60 = 0xffffffff;
  _DAT_14ca8cb64 = 0x105;
  DAT_14ca8cb66 = 0;
  DAT_14ca8cb58 = &PTR_FUN_14a388170;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca8cb68);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca8cb68,4000);
  _DAT_14ca8cbb0 = 0;
  _DAT_14ca8cbb8 = 0;
  _DAT_14ca8cb90 = 0;
  uRam000000014ca8cb98 = 0;
  _DAT_14ca8cbbc = 0xffffffff00000080;
  _DAT_14ca8cbc4 = 0;
  _DAT_14ca8cbd0 = 0;
  _DAT_14ca8cbd8 = 0;
  _DAT_14ca8cc20 = 0;
  _DAT_14ca8cc28 = 0x800000000;
  _DAT_14ca8cc70 = 0;
  _DAT_14ca8cc78 = 0x800000000;
  _DAT_14ca8cc80 = 0;
  _DAT_14ca8cc88 = 0;
  return;
}



// FUNCTION 14631ea86 FUN_14631ea86 body=71 status=ok
// SIG undefined FUN_14631ea86(void)

void FUN_14631ea86(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8cb65 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631eab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8cb58 + 0x18))(&DAT_14ca8cb58,uVar1,*(code **)(DAT_14ca8cb58 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8cb58,0);
  return;
}



// FUNCTION 14631eace FUN_14631eace body=71 status=ok
// SIG undefined FUN_14631eace(void)

void FUN_14631eace(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca8cdcd = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631eb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca8cdc0 + 0x18))(&DAT_14ca8cdc0,uVar1,*(code **)(DAT_14ca8cdc0 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca8cdc0,0);
  return;
}



// FUNCTION 14631eb16 FUN_14631eb16 body=52 status=ok
// SIG undefined FUN_14631eb16(void)

undefined8 FUN_14631eb16(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14019108b(*param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     ((&DAT_14ca814cd)[(ulonglong)*param_1 * 0x3c] & 3) != 0);
  }
  return uVar2;
}



// FUNCTION 14631eb4a FUN_14631eb4a body=52 status=ok
// SIG undefined FUN_14631eb4a(void)

undefined8 FUN_14631eb4a(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14019108b(*param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     ((&DAT_14ca814cd)[(ulonglong)*param_1 * 0x3c] & 3) != 0);
  }
  return uVar2;
}



// FUNCTION 14631eb7e FUN_14631eb7e body=134 status=ok
// SIG undefined FUN_14631eb7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631eb7e(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca950b0) {
    FUN_144b3d300(&DAT_14ca950b0);
    if (DAT_14ca950b0 == -1) {
      FUN_140056680(&DAT_14ca95098,L"r.Mobile.EarlyZPass");
      _DAT_14ca950a8 = 0;
      atexit((_func_5014 *)&LAB_143202a4c);
      _Init_thread_footer(&DAT_14ca950b0);
    }
  }
  FUN_144a7e43e(&DAT_14ca95098,param_1);
  return;
}



// FUNCTION 14631ec04 FUN_14631ec04 body=134 status=ok
// SIG undefined FUN_14631ec04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631ec04(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca950d0) {
    FUN_144b3d300(&DAT_14ca950d0);
    if (DAT_14ca950d0 == -1) {
      FUN_140056680(&DAT_14ca950b8,L"r.Mobile.Forward.EnableLocalLights");
      _DAT_14ca950c8 = 0;
      atexit((_func_5014 *)&LAB_143202a5d);
      _Init_thread_footer(&DAT_14ca950d0);
    }
  }
  FUN_144a7e43e(&DAT_14ca950b8,param_1);
  return;
}



// FUNCTION 14631ec8a FUN_14631ec8a body=134 status=ok
// SIG undefined FUN_14631ec8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631ec8a(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca950f0) {
    FUN_144b3d300(&DAT_14ca950f0);
    if (DAT_14ca950f0 == -1) {
      FUN_140056680(&DAT_14ca950d8,L"r.Mobile.Forward.EnableParticleLights");
      _DAT_14ca950e8 = 0;
      atexit((_func_5014 *)&LAB_143202a6e);
      _Init_thread_footer(&DAT_14ca950f0);
    }
  }
  FUN_144a847a6(&DAT_14ca950d8,param_1);
  return;
}



// FUNCTION 14631ed10 FUN_14631ed10 body=392 status=ok
// SIG undefined FUN_14631ed10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14631ed10(uint param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95110) {
    FUN_144b3d300(&DAT_14ca95110);
    if (DAT_14ca95110 == -1) {
      FUN_140056680(&DAT_14ca950f8,L"r.Mobile.ShadingPath");
      _DAT_14ca95108 = 0;
      atexit((_func_5014 *)&LAB_143202a7f);
      _Init_thread_footer(&DAT_14ca95110);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95120) {
    FUN_144b3d300(&DAT_14ca95120);
    if (DAT_14ca95120 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Mobile.AllowDeferredShadingOpenGL",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca95118 = 0;
      }
      else {
        DAT_14ca95118 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca95120);
    }
  }
  lVar1 = DAT_14ca95118;
  bVar5 = true;
  if (*(longlong *)(&DAT_14ca814b0 + ((ulonglong)param_1 & 0xffff) * 0x3c) == DAT_14ca81490) {
    if (DAT_14ca95118 == 0) {
      bVar5 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      bVar5 = *(int *)(lVar1 + uVar4 * 4) != 0;
    }
  }
  bVar2 = FUN_144a847a6(&DAT_14ca950f8,(ulonglong)param_1);
  return bVar2 & bVar5;
}



// FUNCTION 14631ee98 FUN_14631ee98 body=134 status=ok
// SIG undefined FUN_14631ee98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631ee98(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95140) {
    FUN_144b3d300(&DAT_14ca95140);
    if (DAT_14ca95140 == -1) {
      FUN_140056680(&DAT_14ca95128,L"r.Mobile.EnableMovableSpotlightsShadow");
      _DAT_14ca95138 = 0;
      atexit((_func_5014 *)&LAB_143202a90);
      _Init_thread_footer(&DAT_14ca95140);
    }
  }
  FUN_144a847a6(&DAT_14ca95128,param_1);
  return;
}



// FUNCTION 14631ef1e FUN_14631ef1e body=231 status=ok
// SIG undefined FUN_14631ef1e(void)

void FUN_14631ef1e(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a38b610;
  local_28[3] = &DAT_14ca95144;
  local_28[4] = FUN_1459cec60;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631f006 FUN_14631f006 body=136 status=ok
// SIG undefined FUN_14631f006(void)

code * FUN_14631f006(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Buffers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000361;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df5d78;
}



// FUNCTION 14631f08e FUN_14631f08e body=136 status=ok
// SIG undefined FUN_14631f08e(void)

code * FUN_14631f08e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e60202;
}



// FUNCTION 14631f116 FUN_14631f116 body=136 status=ok
// SIG undefined FUN_14631f116(void)

code * FUN_14631f116(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClearResource";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000221;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de636c;
}



// FUNCTION 14631f19e FUN_14631f19e body=136 status=ok
// SIG undefined FUN_14631f19e(void)

code * FUN_14631f19e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchArgsOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000035a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1ec42;
}



// FUNCTION 14631f226 FUN_14631f226 body=130 status=ok
// SIG undefined FUN_14631f226(void)

undefined1 * FUN_14631f226(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x355;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742d27a;
}



// FUNCTION 14631f2a8 FUN_14631f2a8 body=93 status=ok
// SIG undefined FUN_14631f2a8(void)

void FUN_14631f2a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a38b610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14631f306 FUN_14631f306 body=29 status=ok
// SIG undefined FUN_14631f306(void)

undefined8 FUN_14631f306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631f336 FUN_14631f336 body=71 status=ok
// SIG undefined FUN_14631f336(void)

void FUN_14631f336(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca95635 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631f368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca95628 + 0x18))(&DAT_14ca95628,uVar1,*(code **)(DAT_14ca95628 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca95628,0);
  return;
}



// FUNCTION 14631f37e FUN_14631f37e body=105 status=ok
// SIG undefined FUN_14631f37e(void)

void FUN_14631f37e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38bad0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631f3e8 FUN_14631f3e8 body=71 status=ok
// SIG undefined FUN_14631f3e8(void)

void FUN_14631f3e8(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca9556d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631f41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca95560 + 0x18))(&DAT_14ca95560,uVar1,*(code **)(DAT_14ca95560 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca95560,0);
  return;
}



// FUNCTION 14631f430 FUN_14631f430 body=75 status=ok
// SIG undefined FUN_14631f430(void)

void FUN_14631f430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a38bc80;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144a88358(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631f47c FUN_14631f47c body=71 status=ok
// SIG undefined FUN_14631f47c(void)

void FUN_14631f47c(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca955b5 = 0;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631f4ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca955a8 + 0x18))(&DAT_14ca955a8,uVar1,*(code **)(DAT_14ca955a8 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca955a8,0);
  return;
}



// FUNCTION 14631f4c4 FUN_14631f4c4 body=87 status=ok
// SIG undefined FUN_14631f4c4(void)

void FUN_14631f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a38bce0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631f51c FUN_14631f51c body=136 status=ok
// SIG undefined FUN_14631f51c(void)

code * FUN_14631f51c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df5ee4;
}



// FUNCTION 14631f5a4 FUN_14631f5a4 body=130 status=ok
// SIG undefined FUN_14631f5a4(void)

undefined1 * FUN_14631f5a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 400;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145fddfc0;
}



// FUNCTION 14631f626 FUN_14631f626 body=130 status=ok
// SIG undefined FUN_14631f626(void)

undefined1 * FUN_14631f626(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14600581e;
}



// FUNCTION 14631f6a8 FUN_14631f6a8 body=136 status=ok
// SIG undefined FUN_14631f6a8(void)

code * FUN_14631f6a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000023b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dcc4b0;
}



// FUNCTION 14631f730 FUN_14631f730 body=130 status=ok
// SIG undefined FUN_14631f730(void)

undefined1 * FUN_14631f730(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Buffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145fde0ae;
}



// FUNCTION 14631f7b2 FUN_14631f7b2 body=130 status=ok
// SIG undefined FUN_14631f7b2(void)

undefined8 *
FUN_14631f7b2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x18))(DAT_14c8407a8,param_2,param_3,param_4,0);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e70e40;
  (**(code **)(*(longlong *)param_1[1] + 200))((longlong *)param_1[1],param_5);
  return param_1;
}



// FUNCTION 14631f834 FUN_14631f834 body=80 status=ok
// SIG undefined FUN_14631f834(void)

void FUN_14631f834(void)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_14470efbc(&DAT_14ca96680);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14631f884 FUN_14631f884 body=157 status=ok
// SIG undefined FUN_14631f884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631f884(void)

{
  char cVar1;
  
  _DAT_14ca96790 = 0xffffffff;
  _DAT_14ca96794 = 0x105;
  DAT_14ca96796 = 0;
  _DAT_14ca967b8 = 0;
  _DAT_14ca967c0 = 0;
  _DAT_14ca96798 = 0;
  uRam000000014ca967a0 = 0;
  _DAT_14ca967c4 = 0xffffffff00000080;
  _DAT_14ca967cc = 0;
  _DAT_14ca967d8 = 0;
  _DAT_14ca967e0 = 0;
  DAT_14ca96788 = &PTR_FUN_14a392cc0;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca96788[3])(&DAT_14ca96788,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca96788,0);
  return;
}



// FUNCTION 14631f922 FUN_14631f922 body=103 status=ok
// SIG undefined FUN_14631f922(void)

void FUN_14631f922(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38d040;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 14631f98a FUN_14631f98a body=145 status=ok
// SIG undefined FUN_14631f98a(void)

void FUN_14631f98a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14631fa1c FUN_14631fa1c body=127 status=ok
// SIG undefined FUN_14631fa1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fa1c(void)

{
  char cVar1;
  
  _DAT_14ca9a3f0 = 0xffffffff;
  _DAT_14ca9a3f4 = 0x105;
  DAT_14ca9a3f6 = 0;
  _DAT_14ca9a3f8 = 0;
  DAT_14ca9a400 = 0;
  _DAT_14ca9a408 = 0;
  DAT_14ca9a410 = 0;
  _DAT_14ca9a418 = 0;
  uRam000000014ca9a420 = 0;
  _DAT_14ca9a425 = 0;
  uRam000000014ca9a428 = 0;
  uRam000000014ca9a42d = 0;
  DAT_14ca9a3e8 = &PTR_FUN_14a392d20;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca9a3e8[3])(&DAT_14ca9a3e8,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca9a3e8,0);
  return;
}



// FUNCTION 14631fa9c FUN_14631fa9c body=107 status=ok
// SIG undefined FUN_14631fa9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fa9c(void)

{
  char cVar1;
  
  _DAT_14ca968b8 = 0xffffffff;
  _DAT_14ca968bc = 0x105;
  DAT_14ca968be = 0;
  DAT_14ca968c0 = 0;
  DAT_14ca968b0 = &PTR_FUN_14a392d80;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca968b0[3])(&DAT_14ca968b0,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca968b0,0);
  return;
}



// FUNCTION 14631fb08 FUN_14631fb08 body=107 status=ok
// SIG undefined FUN_14631fb08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fb08(void)

{
  char cVar1;
  
  _DAT_14ca968d0 = 0xffffffff;
  _DAT_14ca968d4 = 0x105;
  DAT_14ca968d6 = 0;
  DAT_14ca968d8 = 0;
  DAT_14ca968c8 = &PTR_FUN_14a392de0;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca968c8[3])(&DAT_14ca968c8,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca968c8,0);
  return;
}



// FUNCTION 14631fb74 FUN_14631fb74 body=107 status=ok
// SIG undefined FUN_14631fb74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fb74(void)

{
  char cVar1;
  
  _DAT_14ca968e8 = 0xffffffff;
  _DAT_14ca968ec = 0x105;
  DAT_14ca968ee = 0;
  _DAT_14ca968f0 = 0;
  DAT_14ca968e0 = &PTR_FUN_14a392e40;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca968e0[3])(&DAT_14ca968e0,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca968e0,0);
  return;
}



// FUNCTION 14631fbe0 FUN_14631fbe0 body=107 status=ok
// SIG undefined FUN_14631fbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fbe0(void)

{
  char cVar1;
  
  DAT_14ca96e28 = 0xffffffff;
  _DAT_14ca96e2c = 0x105;
  DAT_14ca96e2e = 0;
  DAT_14ca96e30 = 0;
  DAT_14ca96e20 = &PTR_FUN_14a392ea0;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca96e20[3])(&DAT_14ca96e20,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca96e20,0);
  return;
}



// FUNCTION 14631fc4c FUN_14631fc4c body=107 status=ok
// SIG undefined FUN_14631fc4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fc4c(void)

{
  char cVar1;
  
  _DAT_14ca96e40 = 0xffffffff;
  _DAT_14ca96e44 = 0x105;
  DAT_14ca96e46 = 0;
  DAT_14ca96e48 = 0;
  DAT_14ca96e38 = &PTR_FUN_14a392f00;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca96e38[3])(&DAT_14ca96e38,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca96e38,0);
  return;
}



// FUNCTION 14631fcb8 FUN_14631fcb8 body=107 status=ok
// SIG undefined FUN_14631fcb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631fcb8(void)

{
  char cVar1;
  
  DAT_14ca96e58 = 0xffffffff;
  _DAT_14ca96e5c = 0x105;
  DAT_14ca96e5e = 0;
  DAT_14ca96e60 = 0;
  DAT_14ca96e50 = &PTR_FUN_14a392f60;
  cVar1 = FUN_144a5d717();
  if (cVar1 != '\0') {
    (*(code *)DAT_14ca96e50[3])(&DAT_14ca96e50,&DAT_14ca85100);
    return;
  }
  FUN_140308182(&DAT_14ca96e50,0);
  return;
}



// FUNCTION 14631fd24 FUN_14631fd24 body=70 status=ok
// SIG undefined FUN_14631fd24(void)

undefined8 FUN_14631fd24(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff02;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631fd6c FUN_14631fd6c body=70 status=ok
// SIG undefined FUN_14631fd6c(void)

undefined8 FUN_14631fd6c(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff02;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631fdb4 FUN_14631fdb4 body=70 status=ok
// SIG undefined FUN_14631fdb4(void)

undefined8 FUN_14631fdb4(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff02;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631fdfc FUN_14631fdfc body=70 status=ok
// SIG undefined FUN_14631fdfc(void)

undefined8 FUN_14631fdfc(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff02;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631fe44 FUN_14631fe44 body=213 status=ok
// SIG undefined FUN_14631fe44(void)

void FUN_14631fe44(void)

{
  longlong *plVar1;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if (DAT_14ca985f8 != (longlong *)0x0) {
    plVar1 = DAT_14ca985f8;
    do {
      local_80 = *(undefined8 *)(plVar1[2] + 8);
      FUN_144a13f80(&local_78,local_84,&local_80,0);
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14472eaf0(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631ff1a FUN_14631ff1a body=117 status=ok
// SIG undefined FUN_14631ff1a(void)

void FUN_14631ff1a(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14631ff8f FUN_14631ff8f body=276 status=ok
// SIG undefined FUN_14631ff8f(void)

int FUN_14631ff8f(int param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if (param_1 == 2) {
    bVar2 = true;
    iVar4 = param_1;
  }
  else {
    bVar2 = false;
    iVar4 = 0;
    if (param_1 == 1) {
      bVar2 = false;
      iVar4 = param_1;
    }
  }
  bVar3 = FUN_1447e0190();
  iVar1 = (bVar3 & DAT_14ca9a438) + 1;
  if (!bVar2) {
    iVar1 = iVar4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    bVar3 = DAT_14c8442b8 & 1;
  }
  if ((bVar3 == 0) && ((&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf] != 1)) {
    return iVar1;
  }
  return 0;
}



// FUNCTION 1463200a4 FUN_1463200a4 body=60 status=ok
// SIG undefined FUN_1463200a4(void)

undefined8 * FUN_1463200a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a391960;
  FUN_14018802a(param_1[1]);
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463200e0 FUN_1463200e0 body=29 status=ok
// SIG undefined FUN_1463200e0(void)

undefined8 FUN_1463200e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463200fe FUN_1463200fe body=149 status=ok
// SIG undefined FUN_1463200fe(void)

void FUN_1463200fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a392d50;
  FUN_1413ef4ca(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1413ef4ca(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 146320194 FUN_146320194 body=157 status=ok
// SIG undefined FUN_146320194(void)

void FUN_146320194(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0x1000040000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146320232 FUN_146320232 body=157 status=ok
// SIG undefined FUN_146320232(void)

void FUN_146320232(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0xc00030000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463202d0 FUN_1463202d0 body=157 status=ok
// SIG undefined FUN_1463202d0(void)

void FUN_1463202d0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0x800020000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14632036e FUN_14632036e body=744 status=ok
// SIG undefined FUN_14632036e(void)

void FUN_14632036e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_d0;
  longlong local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined **local_a0;
  longlong local_98;
  int local_90;
  int local_84 [3];
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_140330574();
  uVar6 = uStack_b0;
  local_98 = local_b8;
  lVar8 = 0;
  bVar7 = true;
  do {
    bVar4 = bVar7;
    uVar13 = 0x3f800000;
    if (!bVar4) {
      uVar13 = 0xbf800000;
    }
    lVar8 = lVar8 * 0x10;
    lVar9 = 0;
    bVar7 = true;
    do {
      bVar3 = bVar7;
      uVar14 = 0x3f800000;
      if (!bVar3) {
        uVar14 = 0xbf800000;
      }
      lVar11 = 0;
      bVar7 = true;
      do {
        bVar12 = bVar7;
        lVar11 = lVar11 + local_b8 + lVar9;
        uVar15 = 0x3f800000;
        if (!bVar12) {
          uVar15 = 0xbf800000;
        }
        *(undefined4 *)(lVar8 + lVar11) = uVar15;
        *(undefined4 *)(lVar8 + 4 + lVar11) = uVar14;
        *(undefined4 *)(lVar8 + 8 + lVar11) = uVar13;
        *(undefined4 *)(lVar8 + 0xc + lVar11) = 0x3f800000;
        lVar11 = 0x40;
        bVar7 = false;
      } while (bVar12);
      lVar9 = 0x20;
      bVar7 = false;
    } while (bVar3);
    lVar8 = 1;
    bVar7 = false;
  } while (bVar4);
  iVar5 = (int)uStack_b0;
  uVar13 = FUN_1414e3242(0x4001,0);
  local_70 = &local_a0;
  local_a0 = &PTR_FUN_14a249130;
  local_90 = iVar5 << 4;
  local_78 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FUnitCubeVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84[1] = 0;
  local_84[2] = 0x4001;
  local_84[0] = local_90;
  if ((uVar6 & 0xfffffff) == 0) {
    FUN_14570b4be(param_2,&local_78,0x4001,0);
  }
  local_d8 = uVar13;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar13;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar13;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 != &local_c0) {
    lVar8 = *plVar10;
    *plVar10 = local_c0;
    local_c0 = 0;
    if (lVar8 == 0) goto LAB_146320569;
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146320569:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146320658 FUN_146320658 body=493 status=ok
// SIG undefined FUN_146320658(void)

void FUN_146320658(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined2 *local_90;
  undefined4 local_88;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = FUN_1414e3242(0x8001,0);
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_90 = &DAT_14a393200;
  local_88 = 0x48;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FUnitCubeIndexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c = 0x200000048;
  local_74 = 0x8001;
  local_b8 = uVar4;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)local_68 >> 8),1));
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar4;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = uVar4;
  }
  plVar5 = (longlong *)(param_1 + 0x10);
  if (plVar5 != &local_a0) {
    lVar3 = *plVar5;
    *plVar5 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_146320789;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146320789:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146320846 FUN_146320846 body=519 status=ok
// SIG undefined FUN_146320846(void)

void FUN_146320846(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined **local_b0;
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0xbf000000;
  uStack_84 = 0xbf000000;
  uStack_80 = 0xbf000000;
  uStack_7c = 0x3f000000;
  local_78 = 0x3f0000003f000000;
  uVar4 = FUN_1414e3242(0x4001,0);
  local_68 = &local_b0;
  local_b0 = &PTR_FUN_14a249130;
  local_a0 = 0x18;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FUnitCubeAABBVertexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_94 = 0x18;
  local_8c = 0x4001;
  local_c8 = uVar4;
  local_a8 = &local_88;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)local_68 >> 8),1));
    local_c0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_2,&local_94);
    *(undefined4 *)(local_b8 + 0x18) = uVar4;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_2,&local_94);
    *(undefined4 *)(local_b8 + 0x18) = uVar4;
  }
  plVar5 = (longlong *)(param_1 + 0x10);
  if (plVar5 != &local_b8) {
    lVar3 = *plVar5;
    *plVar5 = local_b8;
    local_b8 = 0;
    if (lVar3 == 0) goto LAB_146320991;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146320991:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146320a4e FUN_146320a4e body=111 status=ok
// SIG undefined FUN_146320a4e(void)

undefined1 FUN_146320a4e(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9a59c) {
    FUN_144b3d300(&DAT_14ca9a59c);
    if (DAT_14ca9a59c == -1) {
      uVar1 = FUN_1400dbadc();
      lVar2 = FUN_145aa0930(uVar1,L"PakFile");
      DAT_14ca9a598 = lVar2 != 0;
      _Init_thread_footer(&DAT_14ca9a59c);
    }
  }
  return DAT_14ca9a598;
}



// FUNCTION 146320abd FUN_146320abd body=205 status=ok
// SIG undefined FUN_146320abd(void)

ulonglong FUN_146320abd(void)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_14ca9ecc4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < (int)DAT_14ca9ecc4) {
    uVar2 = FUN_144b3d300(&DAT_14ca9ecc4);
    if (DAT_14ca9ecc4 == 0xffffffff) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_14054d46e(&DAT_14c846b20,L"NoShaderCompile");
      if (cVar1 == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        DAT_14ca9ecc0 = FUN_14054d46e(&DAT_14c846b20,L"PrecompiledShadersOnly");
      }
      else {
        DAT_14ca9ecc0 = 1;
      }
      uVar2 = _Init_thread_footer(&DAT_14ca9ecc4);
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),DAT_14ca9ecc0) ^ 1;
}



// FUNCTION 146320b8a FUN_146320b8a body=169 status=ok
// SIG undefined FUN_146320b8a(void)

undefined1 FUN_146320b8a(void)

{
  undefined1 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9eccc) {
    FUN_144b3d300(&DAT_14ca9eccc);
    if (DAT_14ca9eccc == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca9ecc8 = FUN_14054d46e(&DAT_14c846b20,L"NoShaderCompile");
      _Init_thread_footer(&DAT_14ca9eccc);
    }
  }
  if (DAT_14ca9ecc8 == '\0') {
    uVar1 = 1;
    if (DAT_14c872bf0 == '\x01') {
      uVar1 = DAT_14c872bf1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146320c34 FUN_146320c34 body=132 status=ok
// SIG undefined FUN_146320c34(void)

void FUN_146320c34(longlong param_1,int param_2)

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



// FUNCTION 146320cb8 FUN_146320cb8 body=63 status=ok
// SIG undefined FUN_146320cb8(void)

void FUN_146320cb8(void)

{
  FUN_141539a3e(&DAT_14ca9a5b0,0);
  if (DAT_14ca9a5d0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca9a5b0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146320cf8 FUN_146320cf8 body=132 status=ok
// SIG undefined FUN_146320cf8(void)

void FUN_146320cf8(longlong param_1,int param_2)

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



// FUNCTION 146320d7e FUN_146320d7e body=80 status=ok
// SIG undefined FUN_146320d7e(void)

longlong * FUN_146320d7e(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1415146de(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146320e5a FUN_146320e5a body=136 status=ok
// SIG undefined FUN_146320e5a(void)

code * FUN_146320e5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147442f00;
}



// FUNCTION 146320ee2 FUN_146320ee2 body=136 status=ok
// SIG undefined FUN_146320ee2(void)

code * FUN_146320ee2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Float4sPerLine";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14744309e;
}



// FUNCTION 146320f6a FUN_146320f6a body=136 status=ok
// SIG undefined FUN_146320f6a(void)

code * FUN_146320f6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474431b2;
}



// FUNCTION 146320ff2 FUN_146320ff2 body=136 status=ok
// SIG undefined FUN_146320ff2(void)

code * FUN_146320ff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterStructuredBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474432c6;
}



// FUNCTION 14632107a FUN_14632107a body=140 status=ok
// SIG undefined FUN_14632107a(void)

undefined1 * FUN_14632107a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cdfd0a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FByteBufferShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caa0b68;
  return &LAB_145eb7280;
}



// FUNCTION 146321106 FUN_146321106 body=136 status=ok
// SIG undefined FUN_146321106(void)

code * FUN_146321106(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474433da;
}



// FUNCTION 14632118e FUN_14632118e body=136 status=ok
// SIG undefined FUN_14632118e(void)

code * FUN_14632118e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443578;
}



// FUNCTION 146321216 FUN_146321216 body=136 status=ok
// SIG undefined FUN_146321216(void)

code * FUN_146321216(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000010b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474437a4;
}



// FUNCTION 14632129e FUN_14632129e body=136 status=ok
// SIG undefined FUN_14632129e(void)

code * FUN_14632129e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000107;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474438b8;
}



// FUNCTION 146321326 FUN_146321326 body=136 status=ok
// SIG undefined FUN_146321326(void)

code * FUN_146321326(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterStructuredBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000011e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443946;
}



// FUNCTION 1463213ae FUN_1463213ae body=136 status=ok
// SIG undefined FUN_1463213ae(void)

code * FUN_1463213ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UploadStructuredBuffer4x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000011a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146163c74;
}



// FUNCTION 146321436 FUN_146321436 body=71 status=ok
// SIG undefined FUN_146321436(void)

void FUN_146321436(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caa097d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000146321468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caa0970 + 0x18))(&DAT_14caa0970,uVar1,*(code **)(DAT_14caa0970 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caa0970,0);
  return;
}



// FUNCTION 14632147e FUN_14632147e body=63 status=ok
// SIG undefined FUN_14632147e(void)

void FUN_14632147e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
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
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 1463214be FUN_1463214be body=67 status=ok
// SIG undefined FUN_1463214be(void)

void FUN_1463214be(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a399e80;
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
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 146321502 FUN_146321502 body=71 status=ok
// SIG undefined FUN_146321502(void)

void FUN_146321502(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caa099d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000146321534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caa0990 + 0x18))(&DAT_14caa0990,uVar1,*(code **)(DAT_14caa0990 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caa0990,0);
  return;
}



// FUNCTION 146321549 FUN_146321549 body=47 status=ok
// SIG undefined FUN_146321549(void)

longlong FUN_146321549(void)

{
  if (DAT_14caa1328 == 0) {
    FUN_14000fc22(&DAT_14caa1328,&PTR_FUN_14a39a478);
  }
  return DAT_14caa1328;
}



// FUNCTION 146321578 FUN_146321578 body=47 status=ok
// SIG undefined FUN_146321578(void)

longlong FUN_146321578(void)

{
  if (DAT_14caa1330 == 0) {
    FUN_14000fc22(&DAT_14caa1330,&PTR_FUN_14a39a770);
  }
  return DAT_14caa1330;
}



// FUNCTION 1463215b1 FUN_1463215b1 body=47 status=ok
// SIG undefined FUN_1463215b1(void)

longlong FUN_1463215b1(void)

{
  if (DAT_14caa1340 == 0) {
    FUN_14073dd9a(&DAT_14caa1340,&PTR_LAB_14a39a988);
  }
  return DAT_14caa1340;
}



// FUNCTION 1463215e0 FUN_1463215e0 body=47 status=ok
// SIG undefined FUN_1463215e0(void)

longlong FUN_1463215e0(void)

{
  if (DAT_14caa1350 == 0) {
    FUN_1409ce572(&DAT_14caa1350,&PTR_FUN_14a39b830);
  }
  return DAT_14caa1350;
}



// FUNCTION 14632160f FUN_14632160f body=47 status=ok
// SIG undefined FUN_14632160f(void)

longlong FUN_14632160f(void)

{
  if (DAT_14caa1368 == 0) {
    FUN_1409ce572(&DAT_14caa1368,&PTR_FUN_14a39b8d0);
  }
  return DAT_14caa1368;
}



// FUNCTION 14632163e FUN_14632163e body=47 status=ok
// SIG undefined FUN_14632163e(void)

longlong FUN_14632163e(void)

{
  if (DAT_14caa1380 == 0) {
    FUN_14086a14e(&DAT_14caa1380,&PTR_FUN_14a39ba58);
  }
  return DAT_14caa1380;
}



// FUNCTION 14632166e FUN_14632166e body=48 status=ok
// SIG undefined FUN_14632166e(void)

void FUN_14632166e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a3a1860;
  return;
}



// FUNCTION 14632169e FUN_14632169e body=47 status=ok
// SIG undefined FUN_14632169e(void)

longlong FUN_14632169e(void)

{
  if (DAT_14caa1398 == 0) {
    FUN_1409ce572(&DAT_14caa1398,&PTR_FUN_14a39baf0);
  }
  return DAT_14caa1398;
}



// FUNCTION 1463216ce FUN_1463216ce body=55 status=ok
// SIG undefined FUN_1463216ce(void)

void FUN_1463216ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa13b8 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa13b8 = FUN_140002ddd(FUN_146321705,uVar1,L"FoliageDensityFalloff");
  }
  return;
}



// FUNCTION 146321705 FUN_146321705 body=49 status=ok
// SIG undefined FUN_146321705(void)

longlong FUN_146321705(void)

{
  if (DAT_14caa13b0 == 0) {
    FUN_14086a14e(&DAT_14caa13b0,&PTR_FUN_14a39bc18);
  }
  return DAT_14caa13b0;
}



// FUNCTION 146321736 FUN_146321736 body=48 status=ok
// SIG undefined FUN_146321736(void)

void FUN_146321736(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14a3a1a60;
  return;
}



// FUNCTION 146321776 FUN_146321776 body=47 status=ok
// SIG undefined FUN_146321776(void)

longlong FUN_146321776(void)

{
  if (DAT_14caa13d0 == 0) {
    FUN_14073dd9a(&DAT_14caa13d0,&PTR_LAB_14a39dec8);
  }
  return DAT_14caa13d0;
}



// FUNCTION 1463217a5 FUN_1463217a5 body=47 status=ok
// SIG undefined FUN_1463217a5(void)

longlong FUN_1463217a5(void)

{
  if (DAT_14caa13e8 == 0) {
    FUN_14073dd9a(&DAT_14caa13e8,&PTR_LAB_14a39e458);
  }
  return DAT_14caa13e8;
}



// FUNCTION 1463217d9 FUN_1463217d9 body=47 status=ok
// SIG undefined FUN_1463217d9(void)

longlong FUN_1463217d9(void)

{
  if (DAT_14caa1400 == 0) {
    FUN_14073dd9a(&DAT_14caa1400,&PTR_LAB_14a39e998);
  }
  return DAT_14caa1400;
}



// FUNCTION 146321808 FUN_146321808 body=39 status=ok
// SIG undefined FUN_146321808(void)

void FUN_146321808(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a39edb0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 146321835 FUN_146321835 body=47 status=ok
// SIG undefined FUN_146321835(void)

longlong FUN_146321835(void)

{
  if (DAT_14caa1418 == 0) {
    FUN_14073dd9a(&DAT_14caa1418,&PTR_LAB_14a39ed68);
  }
  return DAT_14caa1418;
}



// FUNCTION 146321864 FUN_146321864 body=47 status=ok
// SIG undefined FUN_146321864(void)

longlong FUN_146321864(void)

{
  if (DAT_14caa1430 == 0) {
    FUN_14073dd9a(&DAT_14caa1430,&PTR_LAB_14a39f0e8);
  }
  return DAT_14caa1430;
}



// FUNCTION 146321893 FUN_146321893 body=99 status=ok
// SIG undefined FUN_146321893(void)

void FUN_146321893(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea704(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a39f8f0;
  puVar1[5] = &PTR_FUN_14a3a03f0;
  puVar1[6] = &PTR_FUN_14a3a0430;
  puVar1[0x55] = &PTR_FUN_14a3a0480;
  puVar1[0x56] = &PTR_FUN_14a3a0500;
  puVar1[0x57] = &PTR_FUN_14a3a0510;
  return;
}



// FUNCTION 1463218f6 FUN_1463218f6 body=47 status=ok
// SIG undefined FUN_1463218f6(void)

longlong FUN_1463218f6(void)

{
  if (DAT_14caa1448 == 0) {
    FUN_14073dd9a(&DAT_14caa1448,&PTR_LAB_14a39f8a8);
  }
  return DAT_14caa1448;
}



// FUNCTION 146321926 FUN_146321926 body=231 status=ok
// SIG undefined FUN_146321926(void)

void FUN_146321926(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a3a2230;
  local_28[3] = &DAT_14caa1458;
  local_28[4] = FUN_14744918e;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146321a0e FUN_146321a0e body=49 status=ok
// SIG undefined FUN_146321a0e(void)

longlong FUN_146321a0e(void)

{
  if (DAT_14caa1480 == 0) {
    FUN_14073dd9a(&DAT_14caa1480,&PTR_LAB_14a3a0b40);
  }
  return DAT_14caa1480;
}



// FUNCTION 146321a3f FUN_146321a3f body=47 status=ok
// SIG undefined FUN_146321a3f(void)

longlong FUN_146321a3f(void)

{
  if (DAT_14caa1460 == 0) {
    FUN_14000fc22(&DAT_14caa1460,&PTR_FUN_14a3a06a0);
  }
  return DAT_14caa1460;
}



// FUNCTION 146321a6e FUN_146321a6e body=47 status=ok
// SIG undefined FUN_146321a6e(void)

longlong FUN_146321a6e(void)

{
  if (DAT_14caa1468 == 0) {
    FUN_14000fc22(&DAT_14caa1468,&PTR_FUN_14a3a0878);
  }
  return DAT_14caa1468;
}



// FUNCTION 146321a9d FUN_146321a9d body=47 status=ok
// SIG undefined FUN_146321a9d(void)

longlong FUN_146321a9d(void)

{
  if (DAT_14caa1470 == 0) {
    FUN_14000fc22(&DAT_14caa1470,&PTR_FUN_14a3a0a48);
  }
  return DAT_14caa1470;
}



// FUNCTION 146321acc FUN_146321acc body=34 status=ok
// SIG undefined FUN_146321acc(void)

void FUN_146321acc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a64f24();
  FUN_14069c8d6(uVar1,&PTR_s_FoliageOverlappingBoxCount_14a3a0a90,3);
  return;
}



// FUNCTION 146321aee FUN_146321aee body=35 status=ok
// SIG undefined FUN_146321aee(void)

void FUN_146321aee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3a0b80;
  return;
}



// FUNCTION 146321b12 FUN_146321b12 body=55 status=ok
// SIG undefined FUN_146321b12(void)

void FUN_146321b12(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1498 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa1498 = FUN_140002ddd(FUN_146321b49,uVar1,L"FoliageTypeObject");
  }
  return;
}



// FUNCTION 146321b49 FUN_146321b49 body=47 status=ok
// SIG undefined FUN_146321b49(void)

longlong FUN_146321b49(void)

{
  if (DAT_14caa1490 == 0) {
    FUN_14086a14e(&DAT_14caa1490,&PTR_FUN_14a3a0fd0);
  }
  return DAT_14caa1490;
}



// FUNCTION 146321b78 FUN_146321b78 body=48 status=ok
// SIG undefined FUN_146321b78(void)

void FUN_146321b78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3a1ea0;
  return;
}



// FUNCTION 146321ba8 FUN_146321ba8 body=47 status=ok
// SIG undefined FUN_146321ba8(void)

longlong FUN_146321ba8(void)

{
  if (DAT_14caa14b0 == 0) {
    FUN_14073dd9a(&DAT_14caa14b0,&PTR_LAB_14a3a1098);
  }
  return DAT_14caa14b0;
}



// FUNCTION 146321bd8 FUN_146321bd8 body=40 status=ok
// SIG undefined FUN_146321bd8(void)

undefined8 FUN_146321bd8(undefined8 param_1,int param_2)

{
  FUN_14101184a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321c00 FUN_146321c00 body=40 status=ok
// SIG undefined FUN_146321c00(void)

undefined8 FUN_146321c00(undefined8 param_1,int param_2)

{
  FUN_14101184a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321c28 FUN_146321c28 body=40 status=ok
// SIG undefined FUN_146321c28(void)

undefined8 FUN_146321c28(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321c50 FUN_146321c50 body=40 status=ok
// SIG undefined FUN_146321c50(void)

undefined8 FUN_146321c50(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321c78 FUN_146321c78 body=40 status=ok
// SIG undefined FUN_146321c78(void)

undefined8 FUN_146321c78(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321ca0 FUN_146321ca0 body=29 status=ok
// SIG undefined FUN_146321ca0(void)

undefined8 FUN_146321ca0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321cbe FUN_146321cbe body=29 status=ok
// SIG undefined FUN_146321cbe(void)

undefined8 FUN_146321cbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321cdc FUN_146321cdc body=29 status=ok
// SIG undefined FUN_146321cdc(void)

undefined8 FUN_146321cdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146321cfa FUN_146321cfa body=93 status=ok
// SIG undefined FUN_146321cfa(void)

void FUN_146321cfa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3a2230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146321d57 FUN_146321d57 body=47 status=ok
// SIG undefined FUN_146321d57(void)

longlong FUN_146321d57(void)

{
  if (DAT_14caa1580 == 0) {
    FUN_14073dd9a(&DAT_14caa1580,&PTR_LAB_14a3a3cf0);
  }
  return DAT_14caa1580;
}



// FUNCTION 146321d86 FUN_146321d86 body=47 status=ok
// SIG undefined FUN_146321d86(void)

longlong FUN_146321d86(void)

{
  if (DAT_14caa1570 == 0) {
    FUN_14000fc22(&DAT_14caa1570,&PTR_FUN_14a3a3770);
  }
  return DAT_14caa1570;
}



// FUNCTION 146321db6 FUN_146321db6 body=34 status=ok
// SIG undefined FUN_146321db6(void)

void FUN_146321db6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a65010();
  FUN_14069c8d6(uVar1,&PTR_s_CapsuleTouched_14a3a37b0,1);
  return;
}



// FUNCTION 146321de2 FUN_146321de2 body=47 status=ok
// SIG undefined FUN_146321de2(void)

longlong FUN_146321de2(void)

{
  if (DAT_14caa15a8 == 0) {
    FUN_14073dd9a(&DAT_14caa15a8,&PTR_LAB_14a3a44d8);
  }
  return DAT_14caa15a8;
}



// FUNCTION 146321e11 FUN_146321e11 body=155 status=ok
// SIG undefined FUN_146321e11(void)

void FUN_146321e11(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3a4df0;
  puVar1[5] = &PTR_FUN_14a3a5270;
  puVar1[6] = &PTR_LAB_14a3a52b0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(puVar1 + 0x25) = local_28;
  *(undefined4 *)((longlong)puVar1 + 300) = uStack_24;
  *(undefined4 *)(puVar1 + 0x26) = uStack_20;
  *(undefined4 *)((longlong)puVar1 + 0x134) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146321eb2 FUN_146321eb2 body=47 status=ok
// SIG undefined FUN_146321eb2(void)

longlong FUN_146321eb2(void)

{
  if (DAT_14caa15c8 == 0) {
    FUN_14073dd9a(&DAT_14caa15c8,&PTR_LAB_14a3a4da8);
  }
  return DAT_14caa15c8;
}



// FUNCTION 146321ee1 FUN_146321ee1 body=47 status=ok
// SIG undefined FUN_146321ee1(void)

longlong FUN_146321ee1(void)

{
  if (DAT_14caa15d8 == 0) {
    FUN_1409ce572(&DAT_14caa15d8,&PTR_FUN_14a3a5390);
  }
  return DAT_14caa15d8;
}



// FUNCTION 146321f10 FUN_146321f10 body=47 status=ok
// SIG undefined FUN_146321f10(void)

longlong FUN_146321f10(void)

{
  if (DAT_14caa15f0 == 0) {
    FUN_1409ce572(&DAT_14caa15f0,&PTR_FUN_14a3a5430);
  }
  return DAT_14caa15f0;
}



// FUNCTION 146321f40 FUN_146321f40 body=55 status=ok
// SIG undefined FUN_146321f40(void)

void FUN_146321f40(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1610 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa1610 = FUN_140002ddd(FUN_146321f77,uVar1,L"ProceduralFoliageInstance");
  }
  return;
}



// FUNCTION 146321f77 FUN_146321f77 body=47 status=ok
// SIG undefined FUN_146321f77(void)

longlong FUN_146321f77(void)

{
  if (DAT_14caa1608 == 0) {
    FUN_14086a14e(&DAT_14caa1608,&PTR_FUN_14a3a5660);
  }
  return DAT_14caa1608;
}



// FUNCTION 146321fa6 FUN_146321fa6 body=48 status=ok
// SIG undefined FUN_146321fa6(void)

void FUN_146321fa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14a3a6c00;
  return;
}



// FUNCTION 146321fd6 FUN_146321fd6 body=47 status=ok
// SIG undefined FUN_146321fd6(void)

longlong FUN_146321fd6(void)

{
  if (DAT_14caa1630 == 0) {
    FUN_14073dd9a(&DAT_14caa1630,&PTR_LAB_14a3a5b00);
  }
  return DAT_14caa1630;
}



// FUNCTION 146322005 FUN_146322005 body=47 status=ok
// SIG undefined FUN_146322005(void)

longlong FUN_146322005(void)

{
  if (DAT_14caa1620 == 0) {
    FUN_14000fc22(&DAT_14caa1620,&PTR_FUN_14a3a5758);
  }
  return DAT_14caa1620;
}



// FUNCTION 146322034 FUN_146322034 body=34 status=ok
// SIG undefined FUN_146322034(void)

void FUN_146322034(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459091b4();
  FUN_14069c8d6(uVar1,&PTR_s_Simulate_14a3a57a0,1);
  return;
}



// FUNCTION 14632205b FUN_14632205b body=80 status=ok
// SIG undefined FUN_14632205b(void)

void FUN_14632205b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3a5b40;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[5] = 0x461c40000000002a;
  puVar1[6] = 0x42c800000000000a;
  return;
}



// FUNCTION 1463220ab FUN_1463220ab body=47 status=ok
// SIG undefined FUN_1463220ab(void)

longlong FUN_1463220ab(void)

{
  if (DAT_14caa1658 == 0) {
    FUN_14073dd9a(&DAT_14caa1658,&PTR_LAB_14a3a5fe8);
  }
  return DAT_14caa1658;
}



// FUNCTION 1463220da FUN_1463220da body=47 status=ok
// SIG undefined FUN_1463220da(void)

longlong FUN_1463220da(void)

{
  if (DAT_14caa1670 == 0) {
    FUN_14073dd9a(&DAT_14caa1670,&PTR_LAB_14a3a63b8);
  }
  return DAT_14caa1670;
}



// FUNCTION 14632211a FUN_14632211a body=40 status=ok
// SIG undefined FUN_14632211a(void)

undefined8 FUN_14632211a(undefined8 param_1,int param_2)

{
  FUN_14006e852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146322142 FUN_146322142 body=40 status=ok
// SIG undefined FUN_146322142(void)

undefined8 FUN_146322142(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632216a FUN_14632216a body=29 status=ok
// SIG undefined FUN_14632216a(void)

undefined8 FUN_14632216a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632218d FUN_14632218d body=47 status=ok
// SIG undefined FUN_14632218d(void)

longlong FUN_14632218d(void)

{
  if (DAT_14caa1688 == 0) {
    FUN_14073dd9a(&DAT_14caa1688,&PTR_LAB_14a3a6f28);
  }
  return DAT_14caa1688;
}



// FUNCTION 1463221bc FUN_1463221bc body=35 status=ok
// SIG undefined FUN_1463221bc(void)

void FUN_1463221bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3a7070;
  return;
}



// FUNCTION 1463221df FUN_1463221df body=47 status=ok
// SIG undefined FUN_1463221df(void)

longlong FUN_1463221df(void)

{
  if (DAT_14caa16a0 == 0) {
    FUN_14073dd9a(&DAT_14caa16a0,&PTR_LAB_14a3a7028);
  }
  return DAT_14caa16a0;
}



// FUNCTION 146322213 FUN_146322213 body=47 status=ok
// SIG undefined FUN_146322213(void)

longlong FUN_146322213(void)

{
  if (DAT_14caa16b8 == 0) {
    FUN_14073dd9a(&DAT_14caa16b8,&PTR_LAB_14a3a7388);
  }
  return DAT_14caa16b8;
}



// FUNCTION 146322242 FUN_146322242 body=47 status=ok
// SIG undefined FUN_146322242(void)

longlong FUN_146322242(void)

{
  if (DAT_14caa16c8 == 0) {
    FUN_1409ce572(&DAT_14caa16c8,&PTR_FUN_14a3a7460);
  }
  return DAT_14caa16c8;
}



// FUNCTION 146322271 FUN_146322271 body=47 status=ok
// SIG undefined FUN_146322271(void)

longlong FUN_146322271(void)

{
  if (DAT_14caa16e0 == 0) {
    FUN_1409ce572(&DAT_14caa16e0,&PTR_FUN_14a3a7590);
  }
  return DAT_14caa16e0;
}



// FUNCTION 1463222a0 FUN_1463222a0 body=47 status=ok
// SIG undefined FUN_1463222a0(void)

longlong FUN_1463222a0(void)

{
  if (DAT_14caa16f8 == 0) {
    FUN_1409ce572(&DAT_14caa16f8,&PTR_FUN_14a3a76b0);
  }
  return DAT_14caa16f8;
}



// FUNCTION 1463222d0 FUN_1463222d0 body=55 status=ok
// SIG undefined FUN_1463222d0(void)

void FUN_1463222d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1718 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1718 = FUN_140002ddd(FUN_146322307,uVar1,L"LandscapeLayerBrush");
  }
  return;
}



// FUNCTION 146322307 FUN_146322307 body=47 status=ok
// SIG undefined FUN_146322307(void)

longlong FUN_146322307(void)

{
  if (DAT_14caa1710 == 0) {
    FUN_14086a14e(&DAT_14caa1710,&PTR_FUN_14a3a7720);
  }
  return DAT_14caa1710;
}



// FUNCTION 146322336 FUN_146322336 body=48 status=ok
// SIG undefined FUN_146322336(void)

void FUN_146322336(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a3ae520;
  return;
}



// FUNCTION 146322366 FUN_146322366 body=47 status=ok
// SIG undefined FUN_146322366(void)

longlong FUN_146322366(void)

{
  if (DAT_14caa1728 == 0) {
    FUN_1409ce572(&DAT_14caa1728,&PTR_FUN_14a3a77a0);
  }
  return DAT_14caa1728;
}



// FUNCTION 146322396 FUN_146322396 body=55 status=ok
// SIG undefined FUN_146322396(void)

void FUN_146322396(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1748 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1748 = FUN_140002ddd(FUN_1463223cd,uVar1,L"LandscapeLayer");
  }
  return;
}



// FUNCTION 1463223cd FUN_1463223cd body=47 status=ok
// SIG undefined FUN_1463223cd(void)

longlong FUN_1463223cd(void)

{
  if (DAT_14caa1740 == 0) {
    FUN_14086a14e(&DAT_14caa1740,&PTR_FUN_14a3a7bf8);
  }
  return DAT_14caa1740;
}



// FUNCTION 146322402 FUN_146322402 body=48 status=ok
// SIG undefined FUN_146322402(void)

void FUN_146322402(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14a3ae6e0;
  return;
}



// FUNCTION 146322432 FUN_146322432 body=49 status=ok
// SIG undefined FUN_146322432(void)

longlong FUN_146322432(void)

{
  if (DAT_14caa1780 == 0) {
    FUN_14073dd9a(&DAT_14caa1780,&PTR_LAB_14a3a83b0);
  }
  return DAT_14caa1780;
}



// FUNCTION 146322463 FUN_146322463 body=47 status=ok
// SIG undefined FUN_146322463(void)

longlong FUN_146322463(void)

{
  if (DAT_14caa1758 == 0) {
    FUN_14000fc22(&DAT_14caa1758,&PTR_FUN_14a3a7d30);
  }
  return DAT_14caa1758;
}



// FUNCTION 146322492 FUN_146322492 body=47 status=ok
// SIG undefined FUN_146322492(void)

longlong FUN_146322492(void)

{
  if (DAT_14caa1760 == 0) {
    FUN_14000fc22(&DAT_14caa1760,&PTR_FUN_14a3a7ee0);
  }
  return DAT_14caa1760;
}



// FUNCTION 1463224c1 FUN_1463224c1 body=47 status=ok
// SIG undefined FUN_1463224c1(void)

longlong FUN_1463224c1(void)

{
  if (DAT_14caa1768 == 0) {
    FUN_14000fc22(&DAT_14caa1768,&PTR_FUN_14a3a8098);
  }
  return DAT_14caa1768;
}



// FUNCTION 1463224f0 FUN_1463224f0 body=47 status=ok
// SIG undefined FUN_1463224f0(void)

longlong FUN_1463224f0(void)

{
  if (DAT_14caa1770 == 0) {
    FUN_14000fc22(&DAT_14caa1770,&PTR_FUN_14a3a82a8);
  }
  return DAT_14caa1770;
}



// FUNCTION 146322520 FUN_146322520 body=34 status=ok
// SIG undefined FUN_146322520(void)

void FUN_146322520(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406c3de4();
  FUN_14069c8d6(uVar1,&PTR_s_GetTargetLayerNames_14a3a82f0,4);
  return;
}



// FUNCTION 14632254c FUN_14632254c body=55 status=ok
// SIG undefined FUN_14632254c(void)

void FUN_14632254c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa17b0 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa17b0 = FUN_140002ddd(FUN_146322583,uVar1,L"LandscapeEditToolRenderData");
  }
  return;
}



// FUNCTION 146322583 FUN_146322583 body=47 status=ok
// SIG undefined FUN_146322583(void)

longlong FUN_146322583(void)

{
  if (DAT_14caa17a8 == 0) {
    FUN_14086a14e(&DAT_14caa17a8,&PTR_FUN_14a3a8878);
  }
  return DAT_14caa17a8;
}



// FUNCTION 1463225b2 FUN_1463225b2 body=48 status=ok
// SIG undefined FUN_1463225b2(void)

void FUN_1463225b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14a3ae850;
  return;
}



// FUNCTION 1463225e2 FUN_1463225e2 body=55 status=ok
// SIG undefined FUN_1463225e2(void)

void FUN_1463225e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa17c8 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa17c8 = FUN_140002ddd(FUN_146322619,uVar1,L"WeightmapLayerAllocationInfo");
  }
  return;
}



// FUNCTION 146322619 FUN_146322619 body=49 status=ok
// SIG undefined FUN_146322619(void)

longlong FUN_146322619(void)

{
  if (DAT_14caa17c0 == 0) {
    FUN_14086a14e(&DAT_14caa17c0,&PTR_FUN_14a3a8a28);
  }
  return DAT_14caa17c0;
}



// FUNCTION 14632264a FUN_14632264a body=48 status=ok
// SIG undefined FUN_14632264a(void)

void FUN_14632264a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3ae9b0;
  return;
}



// FUNCTION 14632267a FUN_14632267a body=55 status=ok
// SIG undefined FUN_14632267a(void)

void FUN_14632267a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa17e0 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa17e0 = FUN_140002ddd(FUN_1463226b1,uVar1,L"LandscapeComponentMaterialOverride");
  }
  return;
}



// FUNCTION 1463226b1 FUN_1463226b1 body=47 status=ok
// SIG undefined FUN_1463226b1(void)

longlong FUN_1463226b1(void)

{
  if (DAT_14caa17d8 == 0) {
    FUN_14086a14e(&DAT_14caa17d8,&PTR_FUN_14a3a8b68);
  }
  return DAT_14caa17d8;
}



// FUNCTION 1463226e0 FUN_1463226e0 body=48 status=ok
// SIG undefined FUN_1463226e0(void)

void FUN_1463226e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3aeb20;
  return;
}



// FUNCTION 146322710 FUN_146322710 body=55 status=ok
// SIG undefined FUN_146322710(void)

void FUN_146322710(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa17f8 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa17f8 = FUN_140002ddd(FUN_146322747,uVar1,L"LandscapePerLODMaterialOverride");
  }
  return;
}



// FUNCTION 146322747 FUN_146322747 body=49 status=ok
// SIG undefined FUN_146322747(void)

longlong FUN_146322747(void)

{
  if (DAT_14caa17f0 == 0) {
    FUN_14086a14e(&DAT_14caa17f0,&PTR_FUN_14a3a8c90);
  }
  return DAT_14caa17f0;
}



// FUNCTION 146322778 FUN_146322778 body=48 status=ok
// SIG undefined FUN_146322778(void)

void FUN_146322778(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3aec80;
  return;
}



// FUNCTION 1463227a8 FUN_1463227a8 body=55 status=ok
// SIG undefined FUN_1463227a8(void)

void FUN_1463227a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1810 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1810 = FUN_140002ddd(FUN_1463227df,uVar1,L"WeightmapData");
  }
  return;
}



// FUNCTION 1463227df FUN_1463227df body=47 status=ok
// SIG undefined FUN_1463227df(void)

longlong FUN_1463227df(void)

{
  if (DAT_14caa1808 == 0) {
    FUN_14086a14e(&DAT_14caa1808,&PTR_FUN_14a3a8ec0);
  }
  return DAT_14caa1808;
}



// FUNCTION 14632280e FUN_14632280e body=48 status=ok
// SIG undefined FUN_14632280e(void)

void FUN_14632280e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a3aede0;
  return;
}



// FUNCTION 14632283e FUN_14632283e body=55 status=ok
// SIG undefined FUN_14632283e(void)

void FUN_14632283e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1828 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1828 = FUN_140002ddd(FUN_146322875,uVar1,L"HeightmapData");
  }
  return;
}



// FUNCTION 146322875 FUN_146322875 body=47 status=ok
// SIG undefined FUN_146322875(void)

longlong FUN_146322875(void)

{
  if (DAT_14caa1820 == 0) {
    FUN_14086a14e(&DAT_14caa1820,&PTR_FUN_14a3a8f70);
  }
  return DAT_14caa1820;
}



// FUNCTION 1463228a4 FUN_1463228a4 body=48 status=ok
// SIG undefined FUN_1463228a4(void)

void FUN_1463228a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a3aef40;
  return;
}



// FUNCTION 1463228d4 FUN_1463228d4 body=55 status=ok
// SIG undefined FUN_1463228d4(void)

void FUN_1463228d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1840 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa1840 = FUN_140002ddd(FUN_14632290b,uVar1,L"LandscapeLayerComponentData");
  }
  return;
}



// FUNCTION 14632290b FUN_14632290b body=47 status=ok
// SIG undefined FUN_14632290b(void)

longlong FUN_14632290b(void)

{
  if (DAT_14caa1838 == 0) {
    FUN_14086a14e(&DAT_14caa1838,&PTR_FUN_14a3a9090);
  }
  return DAT_14caa1838;
}



// FUNCTION 14632293a FUN_14632293a body=48 status=ok
// SIG undefined FUN_14632293a(void)

void FUN_14632293a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14a3af0b0;
  return;
}



// FUNCTION 14632296a FUN_14632296a body=47 status=ok
// SIG undefined FUN_14632296a(void)

longlong FUN_14632296a(void)

{
  if (DAT_14caa1850 == 0) {
    FUN_1409ce572(&DAT_14caa1850,&PTR_FUN_14a3a9110);
  }
  return DAT_14caa1850;
}



// FUNCTION 146322999 FUN_146322999 body=47 status=ok
// SIG undefined FUN_146322999(void)

longlong FUN_146322999(void)

{
  if (DAT_14caa1870 == 0) {
    FUN_14073dd9a(&DAT_14caa1870,&PTR_LAB_14a3a91a8);
  }
  return DAT_14caa1870;
}



// FUNCTION 1463229c8 FUN_1463229c8 body=49 status=ok
// SIG undefined FUN_1463229c8(void)

longlong FUN_1463229c8(void)

{
  if (DAT_14caa18b0 == 0) {
    FUN_14073dd9a(&DAT_14caa18b0,&PTR_LAB_14a3aa690);
  }
  return DAT_14caa18b0;
}



// FUNCTION 1463229f9 FUN_1463229f9 body=47 status=ok
// SIG undefined FUN_1463229f9(void)

longlong FUN_1463229f9(void)

{
  if (DAT_14caa1880 == 0) {
    FUN_14000fc22(&DAT_14caa1880,&PTR_FUN_14a3a92e0);
  }
  return DAT_14caa1880;
}



// FUNCTION 146322a28 FUN_146322a28 body=47 status=ok
// SIG undefined FUN_146322a28(void)

longlong FUN_146322a28(void)

{
  if (DAT_14caa1888 == 0) {
    FUN_14000fc22(&DAT_14caa1888,&PTR_FUN_14a3a9438);
  }
  return DAT_14caa1888;
}



// FUNCTION 146322a57 FUN_146322a57 body=47 status=ok
// SIG undefined FUN_146322a57(void)

longlong FUN_146322a57(void)

{
  if (DAT_14caa1890 == 0) {
    FUN_14000fc22(&DAT_14caa1890,&PTR_FUN_14a3a9530);
  }
  return DAT_14caa1890;
}



// FUNCTION 146322a86 FUN_146322a86 body=47 status=ok
// SIG undefined FUN_146322a86(void)

longlong FUN_146322a86(void)

{
  if (DAT_14caa1898 == 0) {
    FUN_14000fc22(&DAT_14caa1898,&PTR_FUN_14a3a95d0);
  }
  return DAT_14caa1898;
}



// FUNCTION 146322ab5 FUN_146322ab5 body=47 status=ok
// SIG undefined FUN_146322ab5(void)

longlong FUN_146322ab5(void)

{
  if (DAT_14caa18a0 == 0) {
    FUN_14000fc22(&DAT_14caa18a0,&PTR_FUN_14a3a9670);
  }
  return DAT_14caa18a0;
}



// FUNCTION 146322ae4 FUN_146322ae4 body=34 status=ok
// SIG undefined FUN_146322ae4(void)

void FUN_146322ae4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401e2408();
  FUN_14069c8d6(uVar1,&PTR_s_EditorGetPaintLayerWeightAtLocat_14a3a96b0,5);
  return;
}



// FUNCTION 146322b10 FUN_146322b10 body=43 status=ok
// SIG undefined FUN_146322b10(void)

void FUN_146322b10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3aa950;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146322b3b FUN_146322b3b body=47 status=ok
// SIG undefined FUN_146322b3b(void)

longlong FUN_146322b3b(void)

{
  if (DAT_14caa18c8 == 0) {
    FUN_14073dd9a(&DAT_14caa18c8,&PTR_LAB_14a3aa908);
  }
  return DAT_14caa18c8;
}



// FUNCTION 146322b6a FUN_146322b6a body=54 status=ok
// SIG undefined FUN_146322b6a(void)

void FUN_146322b6a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14a3aad00;
  puVar1[6] = &PTR_FUN_14a3aaff8;
  return;
}


