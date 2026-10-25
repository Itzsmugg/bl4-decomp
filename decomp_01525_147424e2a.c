// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147424e2a FUN_147424e2a body=138 status=ok
// SIG undefined FUN_147424e2a(void)

code * FUN_147424e2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IsARGBFmt";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c00000282;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424eb4;
}



// FUNCTION 147424eb4 FUN_147424eb4 body=138 status=ok
// SIG undefined FUN_147424eb4(void)

code * FUN_147424eb4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IsCbY0CrY1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000281;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3de94;
}



// FUNCTION 147424f3e FUN_147424f3e body=138 status=ok
// SIG undefined FUN_147424f3e(void)

code * FUN_147424f3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000027f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424fc8;
}



// FUNCTION 147424fc8 FUN_147424fc8 body=138 status=ok
// SIG undefined FUN_147424fc8(void)

code * FUN_147424fc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000027e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425052;
}



// FUNCTION 147425052 FUN_147425052 body=132 status=ok
// SIG undefined FUN_147425052(void)

undefined1 * FUN_147425052(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3de08;
}



// FUNCTION 1474250d6 FUN_1474250d6 body=138 status=ok
// SIG undefined FUN_1474250d6(void)

code * FUN_1474250d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDimX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c000002af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbede;
}



// FUNCTION 147425160 FUN_147425160 body=138 status=ok
// SIG undefined FUN_147425160(void)

code * FUN_147425160(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbff2;
}



// FUNCTION 1474251ea FUN_1474251ea body=132 status=ok
// SIG undefined FUN_1474251ea(void)

undefined1 * FUN_1474251ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742526e;
}



// FUNCTION 147425272 FUN_147425272 body=138 status=ok
// SIG undefined FUN_147425272(void)

code * FUN_147425272(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474252fc;
}



// FUNCTION 1474252fc FUN_1474252fc body=138 status=ok
// SIG undefined FUN_1474252fc(void)

code * FUN_1474252fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BilinearClampedSamplerUV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000002d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d564;
}



// FUNCTION 147425386 FUN_147425386 body=132 status=ok
// SIG undefined FUN_147425386(void)

undefined1 * FUN_147425386(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e406c4;
}



// FUNCTION 14742540a FUN_14742540a body=132 status=ok
// SIG undefined FUN_14742540a(void)

undefined1 * FUN_14742540a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742548e;
}



// FUNCTION 147425492 FUN_147425492 body=138 status=ok
// SIG undefined FUN_147425492(void)

code * FUN_147425492(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000315;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742551c;
}



// FUNCTION 14742551c FUN_14742551c body=138 status=ok
// SIG undefined FUN_14742551c(void)

code * FUN_14742551c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000314;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d784;
}



// FUNCTION 1474255a6 FUN_1474255a6 body=138 status=ok
// SIG undefined FUN_1474255a6(void)

code * FUN_1474255a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000312;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3871c;
}



// FUNCTION 147425630 FUN_147425630 body=138 status=ok
// SIG undefined FUN_147425630(void)

code * FUN_147425630(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000336;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e409dc;
}



// FUNCTION 1474256ba FUN_1474256ba body=132 status=ok
// SIG undefined FUN_1474256ba(void)

undefined1 * FUN_1474256ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x333;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e409d8;
}



// FUNCTION 14742573e FUN_14742573e body=138 status=ok
// SIG undefined FUN_14742573e(void)

code * FUN_14742573e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000356;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e38aae;
}



// FUNCTION 1474257c8 FUN_1474257c8 body=138 status=ok
// SIG undefined FUN_1474257c8(void)

code * FUN_1474257c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000299;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631db3c;
}



// FUNCTION 147425852 FUN_147425852 body=138 status=ok
// SIG undefined FUN_147425852(void)

code * FUN_147425852(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000003d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474258dc;
}



// FUNCTION 1474258dc FUN_1474258dc body=138 status=ok
// SIG undefined FUN_1474258dc(void)

code * FUN_1474258dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000003d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9d07a;
}



// FUNCTION 147425966 FUN_147425966 body=138 status=ok
// SIG undefined FUN_147425966(void)

code * FUN_147425966(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000003cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9cf6e;
}



// FUNCTION 1474259f4 FUN_1474259f4 body=98 status=ok
// SIG undefined FUN_1474259f4(void)

longlong FUN_1474259f4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147425a56 FUN_147425a56 body=136 status=ok
// SIG undefined FUN_147425a56(void)

longlong FUN_147425a56(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTextureCube",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"CubeFaceIndex",0);
  return param_1;
}



// FUNCTION 147425ade FUN_147425ade body=56 status=ok
// SIG undefined FUN_147425ade(void)

undefined8 * FUN_147425ade(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387230;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147425b16 FUN_147425b16 body=38 status=ok
// SIG undefined FUN_147425b16(void)

undefined8 FUN_147425b16(undefined8 param_1,int param_2)

{
  FUN_14631c35e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147425b42 FUN_147425b42 body=38 status=ok
// SIG undefined FUN_147425b42(void)

undefined8 FUN_147425b42(undefined8 param_1,int param_2)

{
  FUN_14631c3a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147425b6e FUN_147425b6e body=44 status=ok
// SIG undefined FUN_147425b6e(void)

void FUN_147425b6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425b9e FUN_147425b9e body=44 status=ok
// SIG undefined FUN_147425b9e(void)

void FUN_147425b9e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425bce FUN_147425bce body=109 status=ok
// SIG undefined FUN_147425bce(void)

longlong FUN_147425bce(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 147425c3c FUN_147425c3c body=92 status=ok
// SIG undefined FUN_147425c3c(void)

longlong FUN_147425c3c(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"Depth",1);
  return param_1;
}



// FUNCTION 147425c98 FUN_147425c98 body=44 status=ok
// SIG undefined FUN_147425c98(void)

void FUN_147425c98(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425cc8 FUN_147425cc8 body=44 status=ok
// SIG undefined FUN_147425cc8(void)

void FUN_147425cc8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425cf8 FUN_147425cf8 body=145 status=ok
// SIG undefined FUN_147425cf8(void)

longlong FUN_147425cf8(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 147425d8a FUN_147425d8a body=44 status=ok
// SIG undefined FUN_147425d8a(void)

void FUN_147425d8a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425dba FUN_147425dba body=145 status=ok
// SIG undefined FUN_147425dba(void)

longlong FUN_147425dba(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 147425e4c FUN_147425e4c body=44 status=ok
// SIG undefined FUN_147425e4c(void)

void FUN_147425e4c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425e7c FUN_147425e7c body=114 status=ok
// SIG undefined FUN_147425e7c(void)

longlong FUN_147425e7c(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147425eee FUN_147425eee body=44 status=ok
// SIG undefined FUN_147425eee(void)

void FUN_147425eee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425f1e FUN_147425f1e body=145 status=ok
// SIG undefined FUN_147425f1e(void)

longlong FUN_147425f1e(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 147425fb0 FUN_147425fb0 body=44 status=ok
// SIG undefined FUN_147425fb0(void)

void FUN_147425fb0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147425fe0 FUN_147425fe0 body=145 status=ok
// SIG undefined FUN_147425fe0(void)

longlong FUN_147425fe0(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 147426072 FUN_147426072 body=114 status=ok
// SIG undefined FUN_147426072(void)

longlong FUN_147426072(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 1474260e4 FUN_1474260e4 body=114 status=ok
// SIG undefined FUN_1474260e4(void)

longlong FUN_1474260e4(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426156 FUN_147426156 body=44 status=ok
// SIG undefined FUN_147426156(void)

void FUN_147426156(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147426186 FUN_147426186 body=85 status=ok
// SIG undefined FUN_147426186(void)

longlong FUN_147426186(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 1474261dc FUN_1474261dc body=85 status=ok
// SIG undefined FUN_1474261dc(void)

longlong FUN_1474261dc(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426232 FUN_147426232 body=85 status=ok
// SIG undefined FUN_147426232(void)

longlong FUN_147426232(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426288 FUN_147426288 body=44 status=ok
// SIG undefined FUN_147426288(void)

void FUN_147426288(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1474262b8 FUN_1474262b8 body=114 status=ok
// SIG undefined FUN_1474262b8(void)

longlong FUN_1474262b8(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 14742632a FUN_14742632a body=114 status=ok
// SIG undefined FUN_14742632a(void)

longlong FUN_14742632a(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 14742639c FUN_14742639c body=114 status=ok
// SIG undefined FUN_14742639c(void)

longlong FUN_14742639c(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 14742640e FUN_14742640e body=114 status=ok
// SIG undefined FUN_14742640e(void)

longlong FUN_14742640e(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426480 FUN_147426480 body=114 status=ok
// SIG undefined FUN_147426480(void)

longlong FUN_147426480(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 1474264f2 FUN_1474264f2 body=114 status=ok
// SIG undefined FUN_1474264f2(void)

longlong FUN_1474264f2(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426564 FUN_147426564 body=114 status=ok
// SIG undefined FUN_147426564(void)

longlong FUN_147426564(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 1474265d6 FUN_1474265d6 body=114 status=ok
// SIG undefined FUN_1474265d6(void)

longlong FUN_1474265d6(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 147426648 FUN_147426648 body=114 status=ok
// SIG undefined FUN_147426648(void)

longlong FUN_147426648(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 1474266ba FUN_1474266ba body=114 status=ok
// SIG undefined FUN_1474266ba(void)

longlong FUN_1474266ba(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"ClearResource",1);
  return param_1;
}



// FUNCTION 14742672c FUN_14742672c body=44 status=ok
// SIG undefined FUN_14742672c(void)

void FUN_14742672c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 14742675c FUN_14742675c body=145 status=ok
// SIG undefined FUN_14742675c(void)

longlong FUN_14742675c(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"ClearValue",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinBounds",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"MaxBounds",1);
  return param_1;
}



// FUNCTION 1474267ee FUN_1474267ee body=56 status=ok
// SIG undefined FUN_1474267ee(void)

undefined8 * FUN_1474267ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3873d0;
  FUN_144725486();
  FUN_14631deea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426854 FUN_147426854 body=38 status=ok
// SIG undefined FUN_147426854(void)

undefined8 FUN_147426854(undefined8 param_1,int param_2)

{
  FUN_14631deea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742687a FUN_14742687a body=56 status=ok
// SIG undefined FUN_14742687a(void)

undefined8 * FUN_14742687a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387430;
  FUN_144725486();
  FUN_14631e008(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474268e0 FUN_1474268e0 body=38 status=ok
// SIG undefined FUN_1474268e0(void)

undefined8 FUN_1474268e0(undefined8 param_1,int param_2)

{
  FUN_14631e008();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426906 FUN_147426906 body=56 status=ok
// SIG undefined FUN_147426906(void)

undefined8 * FUN_147426906(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387490;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742693e FUN_14742693e body=56 status=ok
// SIG undefined FUN_14742693e(void)

undefined8 * FUN_14742693e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3874c0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426976 FUN_147426976 body=215 status=ok
// SIG undefined FUN_147426976(void)

longlong FUN_147426976(longlong param_1,longlong param_2)

{
  FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"DstOffset",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"SrcOffset",1);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"Dimensions",1);
  FUN_147440a6c(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"SrcResource",1);
  FUN_147440a6c(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"DstResource",1);
  return param_1;
}



// FUNCTION 147426a4e FUN_147426a4e body=65 status=ok
// SIG undefined FUN_147426a4e(void)

undefined8 * FUN_147426a4e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3875e8;
  FUN_14011fb0c(param_1 + 1);
  FUN_140038ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426a90 FUN_147426a90 body=96 status=ok
// SIG undefined FUN_147426a90(void)

void FUN_147426a90(longlong param_1,int param_2)

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



// FUNCTION 147426af0 FUN_147426af0 body=29 status=ok
// SIG undefined FUN_147426af0(void)

undefined8 FUN_147426af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426b0e FUN_147426b0e body=31 status=ok
// SIG undefined FUN_147426b0e(void)

undefined8 FUN_147426b0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426b2e FUN_147426b2e body=71 status=ok
// SIG undefined FUN_147426b2e(void)

longlong FUN_147426b2e(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 8);
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



// FUNCTION 147426b76 FUN_147426b76 body=29 status=ok
// SIG undefined FUN_147426b76(void)

undefined8 FUN_147426b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426b94 FUN_147426b94 body=258 status=ok
// SIG undefined FUN_147426b94(void)

void FUN_147426b94(void)

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
              0x110) < DAT_14ca94420) {
    FUN_144b3d300(&DAT_14ca94420);
    if (DAT_14ca94420 == -1) {
      FUN_147426c98(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGenerateMipsRHIImplParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca943a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431faddc);
      _Init_thread_footer(&DAT_14ca94420);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147426c98 FUN_147426c98 body=226 status=ok
// SIG undefined FUN_147426c98(void)

longlong * FUN_147426c98(longlong *param_1)

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
  pcVar13 = FUN_147426d7c;
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



// FUNCTION 147426d7c FUN_147426d7c body=130 status=ok
// SIG undefined FUN_147426d7c(void)

undefined1 * FUN_147426d7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147426dfe;
}



// FUNCTION 147426e02 FUN_147426e02 body=56 status=ok
// SIG undefined FUN_147426e02(void)

undefined8 * FUN_147426e02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3876f0;
  FUN_144725486();
  FUN_14742fb4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426e46 FUN_147426e46 body=29 status=ok
// SIG undefined FUN_147426e46(void)

undefined8 FUN_147426e46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426e76 FUN_147426e76 body=56 status=ok
// SIG undefined FUN_147426e76(void)

undefined8 * FUN_147426e76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3877b0;
  FUN_144725486();
  FUN_14742fb4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426eba FUN_147426eba body=56 status=ok
// SIG undefined FUN_147426eba(void)

undefined8 * FUN_147426eba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387800;
  FUN_144725486();
  FUN_14742fb4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426efe FUN_147426efe body=56 status=ok
// SIG undefined FUN_147426efe(void)

undefined8 * FUN_147426efe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387850;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426f36 FUN_147426f36 body=56 status=ok
// SIG undefined FUN_147426f36(void)

undefined8 * FUN_147426f36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3878b0;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426f6e FUN_147426f6e body=56 status=ok
// SIG undefined FUN_147426f6e(void)

undefined8 * FUN_147426f6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387910;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426fa6 FUN_147426fa6 body=56 status=ok
// SIG undefined FUN_147426fa6(void)

undefined8 * FUN_147426fa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387980;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147426fde FUN_147426fde body=56 status=ok
// SIG undefined FUN_147426fde(void)

undefined8 * FUN_147426fde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3879e0;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427016 FUN_147427016 body=56 status=ok
// SIG undefined FUN_147427016(void)

undefined8 * FUN_147427016(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387a40;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742704e FUN_14742704e body=56 status=ok
// SIG undefined FUN_14742704e(void)

undefined8 * FUN_14742704e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387aa0;
  FUN_144725486();
  FUN_14742fcbe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427086 FUN_147427086 body=56 status=ok
// SIG undefined FUN_147427086(void)

undefined8 * FUN_147427086(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387b10;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474270ca FUN_1474270ca body=56 status=ok
// SIG undefined FUN_1474270ca(void)

undefined8 * FUN_1474270ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387be0;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742710e FUN_14742710e body=56 status=ok
// SIG undefined FUN_14742710e(void)

undefined8 * FUN_14742710e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387c30;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427152 FUN_147427152 body=56 status=ok
// SIG undefined FUN_147427152(void)

undefined8 * FUN_147427152(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387c80;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427196 FUN_147427196 body=56 status=ok
// SIG undefined FUN_147427196(void)

undefined8 * FUN_147427196(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387d20;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474271da FUN_1474271da body=56 status=ok
// SIG undefined FUN_1474271da(void)

undefined8 * FUN_1474271da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387dc0;
  FUN_144725486();
  FUN_1401c051c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742721e FUN_14742721e body=56 status=ok
// SIG undefined FUN_14742721e(void)

undefined8 * FUN_14742721e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387e60;
  FUN_144725486();
  FUN_14742fb4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427262 FUN_147427262 body=196 status=ok
// SIG undefined FUN_147427262(void)

void FUN_147427262(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18 [3];
  
  local_18[2] = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar1 = DAT_14c873d28 / DAT_14c873d2c;
  uVar4 = (longlong)DAT_14c873d28 % (longlong)DAT_14c873d2c & 0xffffffff;
  if (iVar1 == 4) {
    local_18[0] = 0;
    local_18[1] = 0;
    if (0 < DAT_14c873d2c) {
      lVar2 = 0;
      do {
        *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)((longlong)local_18 + lVar2 * 4);
        lVar2 = lVar2 + 1;
        uVar4 = (ulonglong)DAT_14c873d2c;
      } while (lVar2 < (longlong)uVar4);
    }
  }
  else if (iVar1 == 2) {
    local_18[0] = 0;
    if (0 < DAT_14c873d2c) {
      lVar2 = 0;
      do {
        *(undefined2 *)(param_1 + lVar2 * 2) = *(undefined2 *)((longlong)local_18 + lVar2 * 2);
        lVar2 = lVar2 + 1;
        uVar4 = (ulonglong)DAT_14c873d2c;
      } while (lVar2 < (longlong)uVar4);
    }
  }
  else if ((iVar1 == 1) && (local_18[0] = local_18[0] & 0xffffffff00000000, 0 < DAT_14c873d2c)) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)((longlong)local_18 + lVar2);
      lVar2 = lVar2 + 1;
      uVar4 = (ulonglong)DAT_14c873d2c;
    } while (lVar2 < (longlong)uVar4);
  }
  uVar3 = local_18[2] ^ (ulonglong)auStack_38;
  if (uVar3 != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar3,uVar4);
  }
  return;
}



// FUNCTION 147427328 FUN_147427328 body=56 status=ok
// SIG undefined FUN_147427328(void)

undefined8 * FUN_147427328(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387ee0;
  FUN_144725486();
  FUN_14631bd2e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427360 FUN_147427360 body=56 status=ok
// SIG undefined FUN_147427360(void)

undefined8 * FUN_147427360(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387f10;
  FUN_144725486();
  FUN_14631bdb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427398 FUN_147427398 body=56 status=ok
// SIG undefined FUN_147427398(void)

undefined8 * FUN_147427398(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387f40;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474273d0 FUN_1474273d0 body=56 status=ok
// SIG undefined FUN_1474273d0(void)

undefined8 * FUN_1474273d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387f70;
  FUN_144725486();
  FUN_14631c116(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427408 FUN_147427408 body=56 status=ok
// SIG undefined FUN_147427408(void)

undefined8 * FUN_147427408(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387fa0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427440 FUN_147427440 body=56 status=ok
// SIG undefined FUN_147427440(void)

undefined8 * FUN_147427440(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a387fd0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427478 FUN_147427478 body=56 status=ok
// SIG undefined FUN_147427478(void)

undefined8 * FUN_147427478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a388000;
  FUN_144725486();
  FUN_14631e8c2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474274b0 FUN_1474274b0 body=38 status=ok
// SIG undefined FUN_1474274b0(void)

undefined8 FUN_1474274b0(undefined8 param_1,int param_2)

{
  FUN_14631e8c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474274d6 FUN_1474274d6 body=38 status=ok
// SIG undefined FUN_1474274d6(void)

undefined8 FUN_1474274d6(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474274fc FUN_1474274fc body=56 status=ok
// SIG undefined FUN_1474274fc(void)

undefined8 * FUN_1474274fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3880b0;
  FUN_144725486();
  FUN_14631e968(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427534 FUN_147427534 body=38 status=ok
// SIG undefined FUN_147427534(void)

undefined8 FUN_147427534(undefined8 param_1,int param_2)

{
  FUN_14631e968();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742755a FUN_14742755a body=38 status=ok
// SIG undefined FUN_14742755a(void)

undefined8 FUN_14742755a(undefined8 param_1,int param_2)

{
  FUN_14003f39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427580 FUN_147427580 body=65 status=ok
// SIG undefined FUN_147427580(void)

void FUN_147427580(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1474275c2(puVar1 + -0x12);
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474275c2 FUN_1474275c2 body=52 status=ok
// SIG undefined FUN_1474275c2(void)

void FUN_1474275c2(longlong *param_1)

{
  FUN_1474275f6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474275f6 FUN_1474275f6 body=337 status=ok
// SIG undefined FUN_1474275f6(void)

void FUN_1474275f6(longlong *param_1)

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
      FUN_147427748(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 147427748 FUN_147427748 body=61 status=ok
// SIG undefined FUN_147427748(void)

void FUN_147427748(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147427785 FUN_147427785 body=828 status=ok
// SIG undefined FUN_147427785(void)

void FUN_147427785(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int extraout_EAX;
  int iVar6;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  size_t sVar7;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  size_t sVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_358 = param_4;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_348;
    do {
      plVar14 = (longlong *)*plVar9;
      plVar12 = (longlong *)plVar9[1];
      iVar6 = (int)plVar9[2];
      iVar10 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar14) >> 3);
      local_368 = plVar9;
      if (iVar6 != 0) {
LAB_147427828:
        if (8 < (int)(iVar10 + 1U)) {
          local_360 = (longlong *)CONCAT44(local_360._4_4_,iVar6);
          uVar11 = iVar10 + 1U >> 1;
          lVar2 = plVar14[uVar11];
          plVar14[uVar11] = *plVar14;
          *plVar14 = lVar2;
          plVar16 = plVar12 + 1;
          plVar15 = plVar14;
          local_350 = plVar12;
          do {
            plVar15 = plVar15 + 1;
            if (plVar15 <= plVar12) {
              pwVar3 = *(wchar_t **)(*plVar14 + 0x18);
              sVar7 = wcslen(pwVar3);
              extraout_EAX_00 = (int)sVar7;
              do {
                pwVar4 = *(wchar_t **)(*plVar15 + 0x18);
                sVar7 = wcslen(pwVar4);
                extraout_EAX_01 = (int)sVar7;
                iVar6 = extraout_EAX_00 - extraout_EAX_01;
                bVar17 = extraout_EAX_00 == extraout_EAX_01;
                bVar5 = !bVar17;
                if (!bVar5) {
                  iVar6 = wcsncmp(pwVar3,pwVar4,(longlong)extraout_EAX_00);
                  bVar17 = iVar6 == 0;
                }
              } while ((bVar17 || (bVar5 && SBORROW4(extraout_EAX_00,extraout_EAX_01)) != iVar6 < 0)
                      && (plVar15 = plVar15 + 1, plVar15 <= plVar12));
            }
            plVar9 = plVar16 + -1;
            plVar13 = plVar16;
            if (plVar14 < plVar9) {
              pwVar3 = *(wchar_t **)(*plVar14 + 0x18);
              sVar7 = wcslen(pwVar3);
              do {
                pwVar4 = *(wchar_t **)(plVar16[-1] + 0x18);
                sVar8 = wcslen(pwVar4);
                extraout_EAX = (int)sVar8;
                if (extraout_EAX == (int)sVar7) {
                  iVar6 = wcsncmp(pwVar4,pwVar3,(longlong)extraout_EAX);
                  plVar13 = plVar16;
                  if (0 < iVar6) break;
                }
                else if ((int)sVar7 < extraout_EAX) {
                  plVar13 = plVar9 + 1;
                  break;
                }
                plVar1 = plVar9 + -1;
                plVar13 = plVar9;
                plVar16 = plVar9;
                plVar9 = plVar1;
              } while (plVar14 < plVar1);
            }
            plVar16 = plVar9;
            if (plVar16 < plVar15) goto LAB_14742792a;
            lVar2 = *plVar15;
            *plVar15 = *plVar16;
            *plVar16 = lVar2;
          } while( true );
        }
        plVar9 = local_368;
        if (plVar14 < plVar12) {
          local_360 = plVar14 + 1;
          plVar16 = plVar14;
          plVar15 = local_360;
          do {
            for (; local_368 = plVar9, plVar15 <= plVar12; plVar15 = plVar15 + 1) {
              lVar2 = *plVar15;
              pwVar3 = *(wchar_t **)(*plVar16 + 0x18);
              sVar7 = wcslen(pwVar3);
              extraout_EAX_02 = (int)sVar7;
              pwVar4 = *(wchar_t **)(lVar2 + 0x18);
              sVar7 = wcslen(pwVar4);
              extraout_EAX_03 = (int)sVar7;
              iVar6 = extraout_EAX_02 - extraout_EAX_03;
              bVar17 = extraout_EAX_02 == extraout_EAX_03;
              bVar5 = !bVar17;
              if (!bVar5) {
                iVar6 = wcsncmp(pwVar3,pwVar4,(longlong)extraout_EAX_02);
                bVar17 = iVar6 == 0;
              }
              plVar9 = plVar15;
              if (bVar17 || (bVar5 && SBORROW4(extraout_EAX_02,extraout_EAX_03)) != iVar6 < 0) {
                plVar9 = plVar16;
              }
              plVar16 = plVar9;
              plVar9 = local_368;
            }
            lVar2 = *plVar16;
            *plVar16 = *plVar12;
            *plVar12 = lVar2;
            plVar12 = plVar12 + -1;
            plVar16 = plVar14;
            plVar15 = local_360;
          } while (plVar14 < plVar12);
        }
        goto LAB_147427a82;
      }
LAB_1474279d4:
      FUN_147427ac2(plVar14);
      plVar9 = local_368;
LAB_147427a82:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14742792a:
  lVar2 = *plVar14;
  *plVar14 = *plVar16;
  *plVar16 = lVar2;
  iVar6 = (int)local_360 + -1;
  plVar13 = plVar13 + -2;
  if ((longlong)plVar13 - (longlong)plVar14 < (longlong)local_350 - (longlong)plVar15) {
    if (plVar15 < plVar12) {
      *local_368 = (longlong)plVar15;
      local_368[1] = (longlong)plVar12;
      *(int *)(local_368 + 2) = iVar6;
      local_368 = local_368 + 3;
    }
    plVar9 = local_368;
    if (plVar16 <= plVar14 + 1) goto LAB_147427a82;
  }
  else {
    plVar9 = local_368;
    if (plVar14 + 1 < plVar16) {
      *local_368 = (longlong)plVar14;
      local_368[1] = (longlong)plVar13;
      *(int *)(local_368 + 2) = iVar6;
      plVar9 = local_368 + 3;
    }
    plVar13 = plVar12;
    plVar14 = plVar15;
    if (plVar12 <= plVar15) goto LAB_147427a82;
  }
  local_368 = plVar9;
  iVar10 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar14) >> 3);
  plVar12 = plVar13;
  if (iVar6 == 0) goto LAB_1474279d4;
  goto LAB_147427828;
}



// FUNCTION 147427ac2 FUN_147427ac2 body=632 status=ok
// SIG undefined FUN_147427ac2(void)

void FUN_147427ac2(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int extraout_EAX;
  int extraout_EAX_00;
  int iVar7;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int iVar8;
  int extraout_EAX_04;
  int extraout_EAX_05;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  size_t sVar9;
  size_t sVar10;
  
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar6;
joined_r0x000147427aff:
    do {
      iVar8 = iVar6 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar13 = iVar6 * 2 + 2;
        if (iVar13 < (int)param_2) {
          lVar1 = param_1[iVar8];
          pwVar2 = *(wchar_t **)(param_1[iVar13] + 0x18);
          sVar9 = wcslen(pwVar2);
          extraout_EAX = (int)sVar9;
          pwVar3 = *(wchar_t **)(lVar1 + 0x18);
          sVar9 = wcslen(pwVar3);
          extraout_EAX_00 = (int)sVar9;
          iVar7 = extraout_EAX - extraout_EAX_00;
          bVar16 = extraout_EAX == extraout_EAX_00;
          bVar15 = !bVar16;
          if (!bVar15) {
            iVar7 = wcsncmp(pwVar2,pwVar3,(longlong)extraout_EAX);
            bVar16 = iVar7 == 0;
          }
          if (bVar16 || (bVar15 && SBORROW4(extraout_EAX,extraout_EAX_00)) != iVar7 < 0) {
            iVar8 = iVar13;
          }
        }
        lVar1 = param_1[iVar8];
        lVar4 = param_1[iVar6];
        pwVar2 = *(wchar_t **)(lVar4 + 0x18);
        sVar9 = wcslen(pwVar2);
        pwVar3 = *(wchar_t **)(lVar1 + 0x18);
        sVar10 = wcslen(pwVar3);
        extraout_EAX_01 = (int)sVar10;
        iVar7 = (int)sVar9;
        iVar13 = iVar7 - extraout_EAX_01;
        bVar16 = iVar7 == extraout_EAX_01;
        bVar15 = !bVar16;
        if (!bVar15) {
          iVar13 = wcsncmp(pwVar2,pwVar3,(longlong)iVar7);
          bVar16 = iVar13 == 0;
        }
        if (!bVar16 && (bVar15 && SBORROW4(iVar7,extraout_EAX_01)) == iVar13 < 0) {
          param_1[iVar6] = lVar1;
          param_1[iVar8] = lVar4;
          iVar6 = iVar8;
          goto joined_r0x000147427aff;
        }
      }
      bVar15 = iVar14 != 0;
      iVar6 = iVar14 + -1;
      iVar14 = iVar6;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar11 = (ulonglong)param_2;
      uVar5 = *param_1;
      *param_1 = param_1[uVar11 - 1];
      param_1[uVar11 - 1] = uVar5;
      if (param_2 != 2) {
        do {
          uVar12 = uVar11 - 1;
          iVar6 = 0;
          iVar8 = 1;
          iVar14 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar13 = iVar8;
            if ((longlong)iVar6 < (longlong)uVar12) {
              lVar1 = param_1[iVar8];
              pwVar2 = *(wchar_t **)(param_1[iVar6] + 0x18);
              sVar9 = wcslen(pwVar2);
              extraout_EAX_02 = (int)sVar9;
              pwVar3 = *(wchar_t **)(lVar1 + 0x18);
              sVar9 = wcslen(pwVar3);
              extraout_EAX_03 = (int)sVar9;
              iVar8 = extraout_EAX_02 - extraout_EAX_03;
              bVar16 = extraout_EAX_02 == extraout_EAX_03;
              bVar15 = !bVar16;
              if (!bVar15) {
                iVar8 = wcsncmp(pwVar2,pwVar3,(longlong)extraout_EAX_02);
                bVar16 = iVar8 == 0;
              }
              if (bVar16 || (bVar15 && SBORROW4(extraout_EAX_02,extraout_EAX_03)) != iVar8 < 0) {
                iVar13 = iVar6;
              }
            }
            lVar1 = param_1[iVar13];
            lVar4 = param_1[iVar14];
            pwVar2 = *(wchar_t **)(lVar4 + 0x18);
            sVar9 = wcslen(pwVar2);
            extraout_EAX_04 = (int)sVar9;
            pwVar3 = *(wchar_t **)(lVar1 + 0x18);
            sVar9 = wcslen(pwVar3);
            extraout_EAX_05 = (int)sVar9;
            iVar6 = extraout_EAX_04 - extraout_EAX_05;
            bVar16 = extraout_EAX_04 == extraout_EAX_05;
            bVar15 = !bVar16;
            if (!bVar15) {
              iVar6 = wcsncmp(pwVar2,pwVar3,(longlong)extraout_EAX_04);
              bVar16 = iVar6 == 0;
            }
            if (bVar16 || (bVar15 && SBORROW4(extraout_EAX_04,extraout_EAX_05)) != iVar6 < 0) break;
            param_1[iVar14] = lVar1;
            param_1[iVar13] = lVar4;
            iVar6 = iVar13 * 2;
            iVar8 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar8 < (longlong)uVar12);
          uVar5 = *param_1;
          *param_1 = param_1[uVar11 - 2];
          param_1[uVar11 - 2] = uVar5;
          uVar11 = uVar12;
        } while (2 < uVar12);
      }
    }
  }
  return;
}



// FUNCTION 147427d3a FUN_147427d3a body=114 status=ok
// SIG undefined FUN_147427d3a(void)

void FUN_147427d3a(longlong *param_1,int param_2)

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



// FUNCTION 147427dac FUN_147427dac body=56 status=ok
// SIG undefined FUN_147427dac(void)

undefined8 * FUN_147427dac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a388140;
  FUN_144725486();
  FUN_14601f84c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427de4 FUN_147427de4 body=38 status=ok
// SIG undefined FUN_147427de4(void)

undefined8 FUN_147427de4(undefined8 param_1,int param_2)

{
  FUN_14601f84c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427e0a FUN_147427e0a body=314 status=ok
// SIG undefined FUN_147427e0a(void)

void FUN_147427e0a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar11 = FUN_144821ef4();
  local_3c = *param_4;
  FUN_1447e4b92(lVar11,*param_2 + 0xe0,&local_3c,0);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147427f46 FUN_147427f46 body=56 status=ok
// SIG undefined FUN_147427f46(void)

undefined8 * FUN_147427f46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3881a0;
  FUN_144725486();
  FUN_14631c272(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147427f7e FUN_147427f7e body=121 status=ok
// SIG undefined FUN_147427f7e(void)

void FUN_147427f7e(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x57) = 0;
  iVar1 = *(int *)(param_3 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_14742d27e((longlong *)(param_3 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
  *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 1;
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | 6;
                    /* WARNING: Could not recover jumptable at 0x000147427fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,*(undefined4 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 147427ff8 FUN_147427ff8 body=157 status=ok
// SIG undefined FUN_147427ff8(void)

void FUN_147427ff8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa4) != -1) {
    (**(code **)(*DAT_14ca964f8 + 0x10))();
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  }
  *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xf9;
  iVar1 = *(int *)(param_2 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
    FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 1;
  *(undefined1 *)(param_1 + 0x57) = 1;
                    /* WARNING: Could not recover jumptable at 0x000147428085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,*(undefined4 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 147428096 FUN_147428096 body=55 status=ok
// SIG undefined FUN_147428096(void)

void FUN_147428096(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    uVar1 = (**(code **)(*DAT_14ca964f8 + 8))(DAT_14ca964f8,param_1,param_3,0);
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) & 0xfe;
  }
  return;
}



// FUNCTION 1474280ce FUN_1474280ce body=184 status=ok
// SIG undefined FUN_1474280ce(void)

void FUN_1474280ce(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa4) != -1) {
    (**(code **)(*DAT_14ca964f8 + 0x10))();
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  uVar2 = *(uint *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = uVar2 | 8;
  if ((uVar2 & 4) != 0) {
    *(uint *)(param_1 + 0xa0) = uVar2 & 0xfffffff9 | 8;
    *(undefined1 *)(param_1 + 0x57) = 1;
  }
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,*(undefined4 *)(param_1 + 0xa8));
  if (*(int *)(param_1 + 0x98) != -1) {
                    /* WARNING: Could not recover jumptable at 0x00014742817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca964f8 + 0x50))();
    return;
  }
  return;
}



// FUNCTION 147428186 FUN_147428186 body=581 status=ok
// SIG undefined FUN_147428186(void)

void FUN_147428186(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))();
  if ((int)param_1[4] != 0) {
    param_1[0xd] = (longlong)(param_1 + 2);
  }
  lVar9 = DAT_14ca94e30;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar3 ^ 1);
  }
  if ((*(int *)(lVar9 + uVar7 * 4) != 0) && ((longlong *)param_1[0xd] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x18))();
    param_1[0xd] = 0;
  }
  lVar9 = (longlong)(int)param_1[0xc];
  if (lVar9 < 1) {
    bVar11 = param_1[0xd] != 0;
    if ((int)param_1[0xc] != 0) {
      plVar8 = (longlong *)param_1[0xb];
      plVar10 = plVar8 + lVar9 * 5;
      goto LAB_147428229;
    }
  }
  else {
    plVar8 = (longlong *)param_1[0xb];
    plVar10 = plVar8 + lVar9 * 5;
    bVar11 = true;
LAB_147428229:
    do {
      if (*plVar8 == 0) goto LAB_147428354;
      plVar8 = plVar8 + 5;
    } while (plVar8 != plVar10);
  }
  if (!bVar11) goto LAB_147428354;
  cVar5 = *(char *)((longlong)param_1 + 0x57);
  if (cVar5 != '\x01') {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
  }
  cVar4 = FUN_144a7ebcb();
  if (cVar4 == '\0') {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 8;
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_38,param_2,param_1 + 8);
    plVar10 = param_1 + 0x12;
    if (plVar10 != &local_38) {
      lVar9 = *plVar10;
      *plVar10 = local_38;
      local_38 = 0;
      if (lVar9 == 0) goto LAB_14742830c;
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_38 != 0) {
      LOCK();
      puVar1 = (uint *)(local_38 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14742830c:
  if (param_1[0xd] == 0) {
    if ((char)param_3 == '\x04') {
      if (cVar5 != '\x01') {
        *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
      }
    }
    else {
      if (param_1[0x12] != 0) {
        uVar6 = (**(code **)(*DAT_14ca964f8 + 8))(DAT_14ca964f8,param_1,param_3,0);
        *(undefined4 *)((longlong)param_1 + 0xa4) = uVar6;
      }
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
    }
  }
  else {
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      cVar5 = (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*DAT_14ca964f8 + 8))(DAT_14ca964f8,param_1,param_3,0);
        *(undefined4 *)((longlong)param_1 + 0xa4) = uVar6;
      }
    }
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfe;
    param_1[0xd] = 0;
  }
LAB_147428354:
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,(int)param_1[0x15]);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474283cc FUN_1474283cc body=11 status=ok
// SIG undefined FUN_1474283cc(void)

byte FUN_1474283cc(longlong param_1)

{
  return (*(byte *)(param_1 + 0xa0) & 2) >> 1;
}



// FUNCTION 1474283d8 FUN_1474283d8 body=12 status=ok
// SIG undefined FUN_1474283d8(void)

byte FUN_1474283d8(longlong param_1)

{
  return (*(byte *)(param_1 + 0xa0) & 8) >> 3;
}



// FUNCTION 147428402 FUN_147428402 body=128 status=ok
// SIG undefined FUN_147428402(void)

void FUN_147428402(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa4) != -1) {
    (**(code **)(*DAT_14ca964f8 + 0x10))();
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014742847f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca964f8 + 0x58))(DAT_14ca964f8,*(undefined4 *)(param_1 + 0xa8));
  return;
}



// FUNCTION 147428482 FUN_147428482 body=11 status=ok
// SIG undefined FUN_147428482(void)

bool FUN_147428482(longlong param_1)

{
  return *(int *)(param_1 + 0xa4) != -1;
}



// FUNCTION 14742848e FUN_14742848e body=50 status=ok
// SIG undefined FUN_14742848e(void)

void FUN_14742848e(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_14006bf18();
  if (*(int *)(param_1 + 0xa8) == -1) {
    uVar1 = (**(code **)(*DAT_14ca964f8 + 0x30))(DAT_14ca964f8,param_1);
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
  }
  return;
}



// FUNCTION 1474284c0 FUN_1474284c0 body=29 status=ok
// SIG undefined FUN_1474284c0(void)

void FUN_1474284c0(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001474284da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca964f8 + 0x18))(DAT_14ca964f8,*(undefined4 *)(param_1 + 0xa4),param_2);
  return;
}



// FUNCTION 1474284de FUN_1474284de body=42 status=ok
// SIG undefined FUN_1474284de(void)

void FUN_1474284de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147428510 FUN_147428510 body=39 status=ok
// SIG undefined FUN_147428510(void)

void FUN_147428510(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14742bd2c(uVar1,param_1);
  return;
}



// FUNCTION 147428538 FUN_147428538 body=80 status=ok
// SIG undefined FUN_147428538(void)

void * FUN_147428538(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_147432e26(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xfc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x104) = 0;
  return _Dst;
}



// FUNCTION 147428588 FUN_147428588 body=42 status=ok
// SIG undefined FUN_147428588(void)

void FUN_147428588(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1474285ba FUN_1474285ba body=39 status=ok
// SIG undefined FUN_1474285ba(void)

void FUN_1474285ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14742be60(uVar1,param_1);
  return;
}



// FUNCTION 1474285e2 FUN_1474285e2 body=73 status=ok
// SIG undefined FUN_1474285e2(void)

void * FUN_1474285e2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_147432e26(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xec) = 0;
  *(undefined8 *)((longlong)_Dst + 0xf4) = 0;
  return _Dst;
}



// FUNCTION 14742862b FUN_14742862b body=212 status=ok
// SIG undefined FUN_14742862b(void)

void FUN_14742862b(longlong param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  longlong *local_30;
  undefined4 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  lVar1 = DAT_14ca951d0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1;
  if (param_1 != 0) {
    local_3c = (uint)param_4;
    local_48 = param_2;
    local_44 = param_3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    local_40 = *(undefined4 *)(lVar1 + uVar3 * 4);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca95288);
    local_30 = &local_38;
    local_28 = &local_48;
    FUN_14742d574(&DAT_14ca95238,local_1c,&local_30,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca95288);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147428700 FUN_147428700 body=61 status=ok
// SIG undefined FUN_147428700(void)

void FUN_147428700(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca95288);
  FUN_14742da98(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147428736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca95288);
  return;
}



// FUNCTION 14742873d FUN_14742873d body=284 status=ok
// SIG undefined FUN_14742873d(void)

void FUN_14742873d(byte param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  float fVar9;
  
  param_1 = param_1 & DAT_14ca84f23;
  uVar5 = 0;
  uVar4 = (ulonglong)param_2;
  if (param_1 == 0) {
    uVar4 = uVar5;
  }
  uVar7 = (ulonglong)((param_2 != 1000) + 3);
  if (param_1 == 0) {
    uVar7 = uVar5;
  }
  FUN_140635eb8(DAT_14ca951c8,uVar4,0xd000000,0);
  FUN_140635eb8(DAT_14ca95180,uVar7,0x6000000,0);
  FUN_140635eb8(DAT_14ca95168,(uint)param_1 + (uint)param_1,0x6000000,0);
  lVar6 = DAT_14ca951a0;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 != 0x40000002) {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  fVar9 = powf(10.0,*(float *)(lVar6 + uVar5 * 4));
  piVar2 = DAT_14ca951d0;
  if (*piVar1 == 0x40000002) {
    iVar8 = *DAT_14ca951d0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    lVar6 = DAT_14ca951b8;
    iVar8 = piVar2[bVar3 ^ 1];
    if (*piVar1 != 0x40000002) {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
      goto LAB_147428814;
    }
  }
  uVar4 = 0;
  lVar6 = DAT_14ca951b8;
LAB_147428814:
  FUN_147428859(fVar9,*(undefined4 *)(lVar6 + uVar4 * 4),(float)iVar8);
  return;
}



// FUNCTION 147428859 FUN_147428859 body=447 status=ok
// SIG undefined FUN_147428859(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147428859(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  double dVar2;
  undefined4 *puVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [76];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_147429309(local_9c,param_1,param_3,0);
  fVar7 = (float)FUN_14742968d(param_2,local_9c);
  dVar2 = (double)log2(SUB84((double)fVar7,0));
  FUN_147429309(&local_e8,param_1,param_3,(float)(dVar2 + 2.473931188332412));
  puVar3 = DAT_14ca951e8;
  _DAT_14ca952b0 = local_e8;
  _DAT_14ca952b8 = local_d0;
  DAT_14ca952c0 = local_dc;
  _DAT_14ca952c4 = local_d8;
  _DAT_14ca952d0 = local_c4;
  _DAT_14ca952d8 = uStack_bc;
  DAT_14ca952f0 = local_b4;
  _DAT_14ca952e0 = local_b0;
  DAT_14ca952e8 = local_a8;
  DAT_14ca952ec = local_a4;
  DAT_14ca952f4 = local_a0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    DAT_14ca952f8 = *DAT_14ca951e8;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar6 = DAT_14ca95200;
    DAT_14ca952f8 = puVar3[bVar4 ^ 1];
    if (*(int *)(lVar1 + 0xc60) != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
      goto LAB_147428994;
    }
  }
  uVar5 = 0;
  lVar6 = DAT_14ca95200;
LAB_147428994:
  DAT_14ca952fc = *(undefined4 *)(lVar6 + uVar5 * 4);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147428a19 FUN_147428a19 body=666 status=ok
// SIG undefined FUN_147428a19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_147428a19(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95340) {
    FUN_144b3d300(&DAT_14ca95340);
    if (DAT_14ca95340 == -1) {
      _DAT_14ca95300 = 0x3eb714373ed32d7c;
      uRam000000014ca95308 = 0x3e38c49c;
      _DAT_14ca95310 = 0x3f3714373e59c6ed;
      uRam000000014ca95318 = 0x3d93d07d;
      _DAT_14ca95320 = 0x3df41aef3c9e6221;
      _DAT_14ca95328 = 0x3f734721;
      _DAT_14ca9532c = 0;
      _DAT_14ca95330 = 0;
      uRam000000014ca95334 = 0;
      uRam000000014ca95338 = 0;
      _DAT_14ca9533c = 0x3f800000;
      _Init_thread_footer(&DAT_14ca95340);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95390) {
    FUN_144b3d300(&DAT_14ca95390);
    if (DAT_14ca95390 == -1) {
      _DAT_14ca95350 = 0x3e1416883f2310b4;
      uRam000000014ca95358 = 0x3e2ce93e;
      _DAT_14ca95360 = 0x3f2d91623e86817b;
      uRam000000014ca95368 = 0x3d72de0e;
      _DAT_14ca95370 = 0x3ce5f8ee00000000;
      _DAT_14ca95378 = 0x3f87c9ba;
      _DAT_14ca9537c = 0;
      _DAT_14ca95380 = 0;
      uRam000000014ca95384 = 0;
      uRam000000014ca95388 = 0;
      _DAT_14ca9538c = 0x3f800000;
      _Init_thread_footer(&DAT_14ca95390);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca953e0) {
    FUN_144b3d300(&DAT_14ca953e0);
    if (DAT_14ca953e0 == -1) {
      _DAT_14ca953a0 = 0x3e8805ad3ef92267;
      uRam000000014ca953a8 = 0x3e4af273;
      _DAT_14ca953b0 = 0x3f3115e33e6a7abb;
      uRam000000014ca953b8 = 0x3da25b8f;
      _DAT_14ca953c0 = 0x3d38c8ef00000000;
      _DAT_14ca953c8 = 0x3f859b57;
      _DAT_14ca953cc = 0;
      _DAT_14ca953d0 = 0;
      uRam000000014ca953d4 = 0;
      uRam000000014ca953d8 = 0;
      _DAT_14ca953dc = 0x3f800000;
      _Init_thread_footer(&DAT_14ca953e0);
    }
  }
  uVar1 = _DAT_14c846288;
  if (param_2 == 2) {
    uVar1 = CONCAT44(_DAT_14ca9538c,uRam000000014ca95388);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uRam000000014ca95384,_DAT_14ca95380);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    uVar1 = CONCAT44(_DAT_14ca9537c,_DAT_14ca95378);
    *(undefined8 *)(param_1 + 8) = _DAT_14ca95370;
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = uRam000000014ca95368;
    *(undefined8 *)(param_1 + 4) = _DAT_14ca95360;
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar2 = _DAT_14ca95350;
    uVar3 = DAT_14ca95350_4;
    uVar4 = (undefined4)uRam000000014ca95358;
    uVar5 = uRam000000014ca95358._4_4_;
  }
  else if (param_2 == 1) {
    uVar1 = CONCAT44(_DAT_14ca953dc,uRam000000014ca953d8);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uRam000000014ca953d4,_DAT_14ca953d0);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    uVar1 = CONCAT44(_DAT_14ca953cc,_DAT_14ca953c8);
    *(undefined8 *)(param_1 + 8) = _DAT_14ca953c0;
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = uRam000000014ca953b8;
    *(undefined8 *)(param_1 + 4) = _DAT_14ca953b0;
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar2 = _DAT_14ca953a0;
    uVar3 = DAT_14ca953a0_4;
    uVar4 = (undefined4)uRam000000014ca953a8;
    uVar5 = uRam000000014ca953a8._4_4_;
  }
  else if (param_2 == 0) {
    uVar1 = CONCAT44(_DAT_14ca9533c,uRam000000014ca95338);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uRam000000014ca95334,_DAT_14ca95330);
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    uVar1 = CONCAT44(_DAT_14ca9532c,_DAT_14ca95328);
    *(undefined8 *)(param_1 + 8) = _DAT_14ca95320;
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = uRam000000014ca95318;
    *(undefined8 *)(param_1 + 4) = _DAT_14ca95310;
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar2 = _DAT_14ca95300;
    uVar3 = DAT_14ca95300_4;
    uVar4 = (undefined4)uRam000000014ca95308;
    uVar5 = uRam000000014ca95308._4_4_;
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = _DAT_14c846280;
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    uVar1 = _DAT_14c846278;
    *(undefined8 *)(param_1 + 8) = _DAT_14c846270;
    *(undefined8 *)(param_1 + 10) = uVar1;
    uVar1 = _DAT_14c846268;
    *(undefined8 *)(param_1 + 4) = _DAT_14c846260;
    *(undefined8 *)(param_1 + 6) = uVar1;
    uVar2 = DAT_14c846250;
    uVar3 = DAT_14c846254;
    uVar4 = (undefined4)DAT_14c846258;
    uVar5 = DAT_14c846258._4_4_;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return param_1;
}



// FUNCTION 147428cb3 FUN_147428cb3 body=518 status=ok
// SIG undefined FUN_147428cb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147428cb3(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95430) {
    FUN_144b3d300(&DAT_14ca95430);
    if (DAT_14ca95430 == -1) {
      _DAT_14ca953f0 = 0xbfc4c8f9404f6c0d;
      uRam000000014ca953f8 = 0xbeff49e9;
      _DAT_14ca95400 = 0x3ff01fb4bf78205a;
      uRam000000014ca95408 = 0x3d2a35a3;
      _DAT_14ca95410 = 0xbe50df563d63dc5e;
      _DAT_14ca95418 = 0x3f874ad8;
      _DAT_14ca9541c = 0;
      _DAT_14ca95420 = 0;
      uRam000000014ca95424 = 0;
      uRam000000014ca95428 = 0;
      _DAT_14ca9542c = 0x3f800000;
      _Init_thread_footer(&DAT_14ca95430);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95480) {
    FUN_144b3d300(&DAT_14ca95480);
    if (DAT_14ca95480 == -1) {
      _DAT_14ca95440 = 0xbeb619583fdbb9d3;
      uRam000000014ca95448 = 0xbe81b86a;
      _DAT_14ca95450 = 0x3fcee8bdbf2aabbb;
      uRam000000014ca95458 = 0x3c812cf1;
      _DAT_14ca95460 = 0xbd2f36343c908660;
      _DAT_14ca95468 = 0x3f7135e6;
      _DAT_14ca9546c = 0;
      uRam000000014ca95474 = 0;
      _DAT_14ca9547c = 0x3f800000;
      _Init_thread_footer(&DAT_14ca95480);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca954d0) {
    FUN_144b3d300(&DAT_14ca954d0);
    if (DAT_14ca954d0 == -1) {
      _DAT_14ca95490 = 0xbf6e6caf401f93ce;
      uRam000000014ca95498 = 0xbece2df9;
      _DAT_14ca954a0 = 0x3fe19ed5bf54593f;
      uRam000000014ca954a8 = 0x3cc18861;
      _DAT_14ca954b0 = 0xbd9c05ad3d12d82f;
      _DAT_14ca954b8 = 0x3f74fedf;
      _DAT_14ca954bc = 0;
      uRam000000014ca954c4 = 0;
      _DAT_14ca954cc = 0x3f800000;
      _Init_thread_footer(&DAT_14ca954d0);
    }
  }
  uVar1 = CONCAT44(_DAT_14ca9542c,uRam000000014ca95428);
  param_1[6] = CONCAT44(uRam000000014ca95424,_DAT_14ca95420);
  param_1[7] = uVar1;
  uVar1 = CONCAT44(_DAT_14ca9541c,_DAT_14ca95418);
  param_1[4] = _DAT_14ca95410;
  param_1[5] = uVar1;
  uVar1 = uRam000000014ca95408;
  param_1[2] = _DAT_14ca95400;
  param_1[3] = uVar1;
  uVar1 = uRam000000014ca953f8;
  *param_1 = _DAT_14ca953f0;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 147428eb9 FUN_147428eb9 body=578 status=ok
// SIG undefined FUN_147428eb9(void)

void FUN_147428eb9(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  fVar1 = logf(*param_1);
  fVar8 = (-0.74472743 - fVar1 / 2.3025851) / 3.0;
  fVar1 = param_1[2];
  fVar2 = logf(*param_1);
  fVar6 = fVar8 * -0.5;
  fVar3 = logf(param_1[1]);
  fVar5 = param_1[2];
  fVar4 = logf(*param_1);
  *param_2 = (fVar3 / 2.3025851 - (fVar4 / 2.3025851) * fVar5) + (fVar2 / 2.3025851 + fVar6) * fVar1
  ;
  fVar1 = param_1[2];
  fVar2 = logf(*param_1);
  fVar8 = fVar8 * 0.5;
  fVar3 = logf(param_1[1]);
  fVar5 = param_1[2];
  fVar4 = logf(*param_1);
  param_2[1] = (fVar3 / 2.3025851 - (fVar4 / 2.3025851) * fVar5) +
               (fVar2 / 2.3025851 + fVar8) * fVar1;
  param_2[3] = (fVar6 + -0.74472743) * 1.55 + 1.8355687;
  param_2[4] = (fVar8 + -0.74472743) * 1.55 + 1.8355687;
  dVar7 = (double)log2((double)*param_1 / 0.18);
  fVar1 = ((float)dVar7 + 15.0) / 8.5;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar5 = logf(param_1[1]);
  fVar6 = logf(param_1[1]);
  param_2[2] = (0.6812412 - fVar6 / 2.3025851) * (fVar1 * 0.16999999 + 0.18) + fVar5 / 2.3025851;
  return;
}



// FUNCTION 1474290fb FUN_1474290fb body=526 status=ok
// SIG undefined FUN_1474290fb(void)

void FUN_1474290fb(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  fVar1 = logf(*param_1);
  fVar2 = (fVar1 / 2.3025851 + 0.74472743) / 3.0;
  fVar6 = fVar2 * -0.5;
  *param_2 = (fVar6 + -0.74472743) * 1.55 + 1.8355687;
  fVar2 = fVar2 * 0.5;
  param_2[1] = (fVar2 + -0.74472743) * 1.55 + 1.8355687;
  fVar1 = param_1[2];
  fVar3 = logf(*param_1);
  fVar4 = logf(param_1[1]);
  fVar7 = param_1[2];
  fVar5 = logf(*param_1);
  param_2[3] = (fVar4 / 2.3025851 - (fVar5 / 2.3025851) * fVar7) +
               (fVar3 / 2.3025851 + fVar6) * fVar1;
  fVar1 = param_1[2];
  fVar6 = logf(*param_1);
  fVar3 = logf(param_1[1]);
  fVar7 = param_1[2];
  fVar4 = logf(*param_1);
  param_2[4] = (fVar3 / 2.3025851 - (fVar4 / 2.3025851) * fVar7) +
               (fVar6 / 2.3025851 + fVar2) * fVar1;
  dVar8 = (double)log2((double)*param_1 / 0.18);
  fVar1 = ((float)dVar8 + -6.5) / 11.5;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar7 = logf(param_1[1]);
  param_2[2] = (fVar7 / 2.3025851 + -0.6812412) * (fVar1 * 0.00999999 + 0.89) + 0.6812412;
  return;
}



// FUNCTION 147429309 FUN_147429309 body=899 status=ok
// SIG undefined FUN_147429309(void)

float * FUN_147429309(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_158 [36];
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_134 = param_4;
  fVar1 = logf(param_2);
  fVar1 = (fVar1 / 2.3025851 + 4.0) / 2.3010302;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  dVar2 = (double)exp2((double)(fVar1 * 8.5 + -15.0));
  local_124 = (float)(dVar2 * 0.18);
  local_11c = 0;
  local_120 = param_2;
  fVar1 = logf(param_3);
  fVar1 = (fVar1 / 2.3025851 + -1.6812413) / 2.3187587;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  dVar2 = (double)exp2((double)(fVar1 * 11.5 + 6.5));
  local_130 = (float)(dVar2 * 0.18);
  local_128 = 0;
  local_12c = param_3;
  FUN_147428eb9(&local_124,&local_f8);
  FUN_1474290fb(&local_130,&local_118);
  fVar1 = logf(param_2);
  fVar1 = (fVar1 / 2.3025851 + 4.0) / 2.3010302;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  dVar2 = (double)exp2((double)(fVar1 * 8.5 + -15.0));
  dVar3 = (double)log2((double)(float)(dVar2 * 0.18));
  dVar2 = (double)local_134;
  dVar3 = (double)exp2(dVar3 - dVar2);
  dVar4 = (double)exp2(-2.4739311310048633 - dVar2);
  fVar1 = logf(param_3);
  fVar1 = (fVar1 / 2.3025851 + -1.6812413) / 2.3187587;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  dVar5 = (double)exp2((double)(fVar1 * 11.5 + 6.5));
  dVar5 = (double)log2((double)(float)(dVar5 * 0.18));
  dVar2 = (double)exp2(dVar5 - dVar2);
  *param_1 = (float)dVar3;
  param_1[1] = param_2;
  param_1[2] = 0.0;
  param_1[3] = (float)dVar4;
  param_1[4] = 4.8;
  param_1[5] = 1.55;
  param_1[6] = (float)dVar2;
  param_1[7] = param_3;
  param_1[8] = 0.0;
  param_1[9] = local_f8;
  param_1[10] = local_f4;
  param_1[0xb] = local_f0;
  param_1[0xc] = local_ec;
  param_1[0xd] = local_e8;
  param_1[0xe] = local_118;
  param_1[0xf] = local_114;
  param_1[0x10] = local_110;
  param_1[0x11] = local_10c;
  param_1[0x12] = local_108;
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742968d FUN_14742968d body=1353 status=ok
// SIG undefined FUN_14742968d(void)

void FUN_14742968d(float param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  fVar6 = logf(param_2[3]);
  fVar7 = logf(*param_2);
  fVar8 = logf(param_2[6]);
  fVar9 = logf(param_2[3]);
  auVar1 = *(undefined1 (*) [16])(param_2 + 10);
  auVar17 = insertps(auVar1,param_2[9],0x30);
  auVar2 = *(undefined1 (*) [16])(param_2 + 0xf);
  auVar16 = insertps(auVar2,param_2[0xe],0x30);
  dVar11 = (double)param_1;
  if (dVar11 <= 1e-10) {
    dVar11 = 1e-10;
  }
  dVar11 = log(dVar11);
  fVar15 = (float)(dVar11 / 2.302585092994046);
  fVar10 = logf(param_2[1]);
  if (fVar15 <= fVar10 / 2.3025851) {
    fVar6 = *param_2;
  }
  else {
    fVar10 = logf(param_2[1]);
    if (fVar10 / 2.3025851 < fVar15) {
      fVar10 = logf(param_2[4]);
      if (fVar15 <= fVar10 / 2.3025851) {
        fVar8 = (auVar17._0_4_ + auVar1._4_4_) * 0.5;
        fVar9 = (auVar17._4_4_ + auVar1._8_4_) * 0.5;
        if ((fVar15 <= (auVar17._12_4_ + auVar1._0_4_) * 0.5) || (fVar8 < fVar15)) {
          if ((fVar8 < fVar15) && (fVar15 <= fVar9)) {
            pfVar3 = param_2 + 10;
            fVar13 = 1.0;
            lVar4 = 0x30;
            lVar5 = 0x2c;
            goto LAB_147429997;
          }
          fVar8 = 0.0;
          if (fVar15 <= fVar9) {
            fVar9 = 0.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
          }
          else {
            fVar9 = 0.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
            if (fVar15 <= (auVar17._8_4_ + auVar1._12_4_) * 0.5) {
              pfVar3 = param_2 + 0xb;
              fVar13 = 2.0;
              lVar4 = 0x34;
              lVar5 = 0x30;
              goto LAB_147429997;
            }
          }
        }
        else {
          pfVar3 = param_2 + 9;
          fVar13 = 0.0;
          lVar4 = 0x2c;
          lVar5 = 0x28;
LAB_147429997:
          fVar8 = *pfVar3;
          fVar9 = *(float *)((longlong)param_2 + lVar5);
          fVar10 = *(float *)((longlong)param_2 + lVar4);
        }
        fVar14 = fVar10 * 0.0 + (fVar9 - fVar8);
        dVar11 = (double)((fVar9 * 0.5 + fVar8 * 0.5 + fVar10 * 0.0) - fVar15);
        dVar12 = (double)(fVar10 * 0.5 + (fVar8 * 0.5 - fVar9)) * -4.0 * dVar11 +
                 (double)(fVar14 * fVar14);
        if (dVar12 < 0.0) {
          dVar12 = sqrt(dVar12);
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        fVar8 = logf(*param_2);
        fVar6 = fVar8 / 2.3025851 +
                (fVar13 + (float)((dVar11 + dVar11) / (double)(-(float)dVar12 - fVar14))) *
                ((fVar6 / 2.3025851 - fVar7 / 2.3025851) / 3.0);
        goto LAB_1474298e8;
      }
    }
    fVar6 = logf(param_2[4]);
    if (fVar6 / 2.3025851 < fVar15) {
      fVar6 = logf(param_2[7]);
      if (fVar15 < fVar6 / 2.3025851) {
        fVar6 = (auVar16._0_4_ + auVar2._4_4_) * 0.5;
        fVar7 = (auVar16._4_4_ + auVar2._8_4_) * 0.5;
        if ((fVar15 < (auVar16._12_4_ + auVar2._0_4_) * 0.5) || (fVar6 < fVar15)) {
          if ((fVar6 < fVar15) && (fVar15 <= fVar7)) {
            pfVar3 = param_2 + 0xf;
            fVar13 = 1.0;
            lVar4 = 0x44;
            lVar5 = 0x40;
            goto LAB_147429834;
          }
          fVar6 = 0.0;
          if (fVar15 <= fVar7) {
            fVar7 = 0.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
          }
          else {
            fVar7 = 0.0;
            fVar10 = 0.0;
            fVar13 = 0.0;
            if (fVar15 <= (auVar16._8_4_ + auVar2._12_4_) * 0.5) {
              pfVar3 = param_2 + 0x10;
              fVar13 = 2.0;
              lVar4 = 0x48;
              lVar5 = 0x44;
              goto LAB_147429834;
            }
          }
        }
        else {
          pfVar3 = param_2 + 0xe;
          fVar13 = 0.0;
          lVar4 = 0x40;
          lVar5 = 0x3c;
LAB_147429834:
          fVar6 = *pfVar3;
          fVar7 = *(float *)((longlong)param_2 + lVar5);
          fVar10 = *(float *)((longlong)param_2 + lVar4);
        }
        fVar14 = fVar10 * 0.0 + (fVar7 - fVar6);
        dVar11 = (double)((fVar7 * 0.5 + fVar6 * 0.5 + fVar10 * 0.0) - fVar15);
        dVar12 = (double)(fVar10 * 0.5 + (fVar6 * 0.5 - fVar7)) * -4.0 * dVar11 +
                 (double)(fVar14 * fVar14);
        if (dVar12 < 0.0) {
          dVar12 = sqrt(dVar12);
        }
        else {
          dVar12 = SQRT(dVar12);
        }
        fVar6 = logf(param_2[3]);
        fVar6 = fVar6 / 2.3025851 +
                (fVar13 + (float)((dVar11 + dVar11) / (double)(-(float)dVar12 - fVar14))) *
                ((fVar8 / 2.3025851 - fVar9 / 2.3025851) / 3.0);
        goto LAB_1474298e8;
      }
    }
    fVar6 = param_2[6];
  }
  fVar6 = logf(fVar6);
  fVar6 = fVar6 / 2.3025851;
LAB_1474298e8:
                    /* WARNING: Could not recover jumptable at 0x00014742993f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  powf(10.0,fVar6);
  return;
}



// FUNCTION 147429bd6 FUN_147429bd6 body=882 status=ok
// SIG undefined FUN_147429bd6(void)

void FUN_147429bd6(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_2 - 3U < 2) {
    uVar1 = *(uint *)(param_1 + 1);
    FUN_147428cb3(local_158);
    FUN_147428a19(local_198,2);
    FUN_144afeb32(&local_118,local_158,local_198);
    if (0 < (int)uVar1) {
      auVar10._4_4_ = uStack_114;
      auVar10._0_4_ = local_118;
      auVar10._8_4_ = uStack_110;
      auVar10._12_4_ = uStack_10c;
      auVar10 = insertps(auVar10,local_108,0x10);
      _local_1a8 = insertps(auVar10,local_f8,0x20);
      auVar4._4_4_ = uStack_110;
      auVar4._0_4_ = uStack_114;
      auVar4._8_4_ = uStack_10c;
      auVar4._12_4_ = local_108;
      auVar10 = insertps(auVar4,local_104,0x10);
      _local_1b8 = insertps(auVar10,local_f4,0x20);
      auVar5._4_4_ = uStack_10c;
      auVar5._0_4_ = uStack_110;
      auVar5._8_4_ = local_108;
      auVar5._12_4_ = local_104;
      auVar10 = insertps(auVar5,local_100,0x10);
      _local_1c8 = insertps(auVar10,local_f0,0x20);
      auVar6._4_4_ = local_108;
      auVar6._0_4_ = uStack_10c;
      auVar6._8_4_ = local_104;
      auVar6._12_4_ = local_100;
      auVar10 = insertps(auVar6,ZEXT416(local_fc),0x10);
      auVar10 = insertps(auVar10,ZEXT416(local_ec),0x20);
      local_1d8 = auVar10._0_4_ * 0.0;
      fStack_1d4 = auVar10._4_4_ * 0.0;
      fStack_1d0 = auVar10._8_4_ * 0.0;
      fStack_1cc = auVar10._12_4_ * 0.0;
      lVar7 = 0;
      do {
        lVar2 = *param_1;
        fVar8 = *(float *)(lVar2 + 4 + lVar7);
        fVar14 = *(float *)(lVar2 + 8 + lVar7);
        dVar9 = pow((double)*(float *)(lVar2 + lVar7),0.012683313515655966);
        fVar12 = (float)dVar9 + -0.8359375;
        fVar13 = 0.0;
        if (0.0 <= fVar12) {
          fVar13 = fVar12;
        }
        dVar9 = pow((double)(fVar13 / ((float)dVar9 * -18.6875 + 18.851562)),6.277394636015326);
        fVar12 = ((float)dVar9 * 10000.0) / 80.0;
        dVar9 = pow((double)fVar8,0.012683313515655966);
        fVar13 = (float)dVar9 + -0.8359375;
        fVar8 = 0.0;
        if (0.0 <= fVar13) {
          fVar8 = fVar13;
        }
        dVar9 = pow((double)(fVar8 / ((float)dVar9 * -18.6875 + 18.851562)),6.277394636015326);
        fVar13 = ((float)dVar9 * 10000.0) / 80.0;
        dVar9 = pow((double)fVar14,0.012683313515655966);
        fVar14 = (float)dVar9 + -0.8359375;
        fVar8 = 0.0;
        if (0.0 <= fVar14) {
          fVar8 = fVar14;
        }
        dVar9 = pow((double)(fVar8 / ((float)dVar9 * -18.6875 + 18.851562)),6.277394636015326);
        fVar8 = ((float)dVar9 * 10000.0) / 80.0;
        auVar11._0_4_ =
             fVar8 * (float)local_1c8._0_4_ +
             fVar13 * (float)local_1b8._0_4_ + fVar12 * (float)local_1a8._0_4_ + local_1d8;
        auVar11._4_4_ =
             fVar8 * (float)local_1c8._4_4_ +
             fVar13 * (float)local_1b8._4_4_ + fVar12 * (float)local_1a8._4_4_ + fStack_1d4;
        auVar11._8_4_ = fVar8 * fStack_1c0 + fVar13 * fStack_1b0 + fVar12 * fStack_1a0 + fStack_1d0;
        auVar11._12_4_ = fVar8 * fStack_1bc + fVar13 * fStack_1ac + fVar12 * fStack_19c + fStack_1cc
        ;
        *(float *)(lVar2 + lVar7) = auVar11._0_4_;
        uVar3 = extractps(auVar11,1);
        *(undefined8 *)(lVar2 + 4 + lVar7) = uVar3;
        uVar3 = extractps(auVar11,2);
        *(undefined8 *)(lVar2 + 8 + lVar7) = uVar3;
        lVar7 = lVar7 + 0x10;
      } while ((ulonglong)uVar1 << 4 != lVar7);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147429f4a FUN_147429f4a body=23 status=ok
// SIG undefined FUN_147429f4a(void)

void FUN_147429f4a(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147429f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))(param_1,&DAT_14ca85100,param_2);
  return;
}



// FUNCTION 147429f61 FUN_147429f61 body=233 status=ok
// SIG undefined FUN_147429f61(void)

bool FUN_147429f61(void)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = DAT_14ca95218;
  if (DAT_14ca84f23 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar2 ^ 1);
    }
    if ((*(int *)(lVar1 + uVar5 * 4) != 0) && (cVar3 = FUN_146161cb3(), cVar3 != '\0')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca954e0) && (FUN_144b3d300(&DAT_14ca954e0), DAT_14ca954e0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14ca954d8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Display.OutputDevice",1);
        _Init_thread_footer(&DAT_14ca954e0);
      }
      iVar4 = (**(code **)(*DAT_14ca954d8 + 0xb0))();
      return iVar4 != 0;
    }
  }
  return false;
}



// FUNCTION 14742a04a FUN_14742a04a body=63 status=ok
// SIG undefined FUN_14742a04a(void)

undefined8 FUN_14742a04a(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x3c);
  if (bVar1 == 0) {
    FUN_143204bc8(param_2 + 0x18,param_1);
    bVar1 = *(byte *)(param_2 + 0x3c);
  }
  if (((bVar1 & 1) == 0) &&
     (*(undefined1 *)(param_2 + 0x3c) = 1, *(longlong *)(param_2 + 0x10) == 0)) {
    FUN_143204dc0(param_2);
  }
  return *(undefined8 *)(param_2 + 0x10);
}



// FUNCTION 14742a08a FUN_14742a08a body=294 status=ok
// SIG undefined FUN_14742a08a(void)

void FUN_14742a08a(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((longlong)*(int *)(param_3 + 0x68) != 0) {
    uVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_3 + 0x60) + uVar6) == param_2) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)*(int *)(param_3 + 0x68) * 8 != uVar6);
  }
  if (*(char *)(param_2 + 0x2b) != *(char *)(param_3 + 0x2b)) {
    uVar3 = *(uint *)(param_3 + 0x2c);
    uVar4 = *(uint *)(param_2 + 0x58);
    uVar6 = (ulonglong)uVar4;
    lVar5 = *(longlong *)(param_2 + 0x50);
    uVar9 = 0;
    if (0 < (int)uVar4) {
      do {
        uVar8 = (int)(uVar6 >> 1) + uVar9;
        uVar7 = (uint)uVar6;
        if (*(uint *)(lVar5 + (ulonglong)uVar8 * 4) < uVar3) {
          uVar9 = uVar8 + (uVar7 & 1);
        }
        uVar6 = uVar6 >> 1;
      } while (1 < uVar7);
    }
    uVar6 = (ulonglong)uVar9;
    if ((uVar4 - uVar9 == 0 || (int)uVar4 < (int)uVar9) || (*(uint *)(lVar5 + uVar6 * 4) != uVar3))
    {
      plVar1 = (longlong *)(param_2 + 0x50);
      *(uint *)(param_2 + 0x58) = uVar4 + 1;
      if (*(uint *)(param_2 + 0x5c) < uVar4 + 1) {
        FUN_14470e864(plVar1);
        lVar5 = *plVar1;
      }
      memmove((void *)(lVar5 + uVar6 * 4 + 4),(void *)(lVar5 + uVar6 * 4),
              (ulonglong)(uVar4 - uVar9) << 2);
      *(uint *)(*plVar1 + uVar6 * 4) = uVar3;
    }
    if (*(uint *)(param_3 + 0x3c) < *(uint *)(param_2 + 0x2c) ||
        *(uint *)(param_3 + 0x3c) == 0xffffffff) {
      *(uint *)(param_3 + 0x3c) = *(uint *)(param_2 + 0x2c);
    }
  }
  iVar2 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar2 + 1U) {
    FUN_14470e57a((longlong *)(param_3 + 0x60),iVar2);
  }
  *(longlong *)(*(longlong *)(param_3 + 0x60) + (longlong)iVar2 * 8) = param_2;
  return;
}



// FUNCTION 14742a1b0 FUN_14742a1b0 body=290 status=ok
// SIG undefined FUN_14742a1b0(void)

undefined8 FUN_14742a1b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x12;
  do {
    if (*(longlong *)(param_1 + -0x12 + lVar1) != *(longlong *)(param_2 + -0x12 + lVar1)) {
      return 0;
    }
    if (*(longlong *)(param_1 + -10 + lVar1) != *(longlong *)(param_2 + -10 + lVar1)) {
      return 0;
    }
    if (*(char *)(param_2 + -2 + lVar1) == '\x02') {
      return 0;
    }
    if (*(char *)(param_1 + -1 + lVar1) != *(char *)(param_2 + -1 + lVar1)) {
      return 0;
    }
    if (*(short *)(param_1 + lVar1) != *(short *)(param_2 + lVar1)) {
      return 0;
    }
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd2);
  if (*(longlong *)(param_1 + 0xc0) == *(longlong *)(param_2 + 0xc0)) {
    if (*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) {
      return 0;
    }
    if (*(char *)(param_2 + 0xd0) == '\x02') {
      return 0;
    }
    if (*(char *)(param_2 + 0xd1) == '\x02') {
      return 0;
    }
    if (((((*(int *)(param_1 + 0xd4) == *(int *)(param_2 + 0xd4)) &&
          (*(int *)(param_1 + 0xd8) == *(int *)(param_2 + 0xd8))) &&
         (*(int *)(param_1 + 0xdc) == *(int *)(param_2 + 0xdc))) &&
        ((*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 0xe0) &&
         (*(int *)(param_1 + 0xe4) == *(int *)(param_2 + 0xe4))))) &&
       ((*(int *)(param_1 + 0xe8) == *(int *)(param_2 + 0xe8) || *(int *)(param_2 + 0xe8) == 0 &&
        ((*(char *)(param_1 + 0xec) == *(char *)(param_2 + 0xec) &&
         (*(char *)(param_1 + 0xed) == *(char *)(param_2 + 0xed))))))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xf0) >> 8),
                      *(longlong *)(param_1 + 0xf0) == *(longlong *)(param_2 + 0xf0));
    }
  }
  return 0;
}



// FUNCTION 14742a2d2 FUN_14742a2d2 body=2174 status=ok
// SIG undefined FUN_14742a2d2(void)

void FUN_14742a2d2(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  size_t _Size;
  void *_Src;
  uint uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  void *_Dst;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  uint local_1d8;
  uint local_1d4;
  int local_1d0;
  int local_1cc;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined1 local_1b5;
  undefined1 local_1b4 [4];
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  int local_188;
  uint local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_150;
  uint local_148;
  longlong local_140;
  int local_118;
  longlong local_d8;
  uint local_d0;
  longlong local_c8;
  int local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14742e848(&local_d8);
  FUN_14742aba0(&local_d8,(longlong)(*(int *)(param_1 + 600) - *(int *)(param_1 + 0x288)));
  uVar4 = *(uint *)(param_1 + 600);
  uVar16 = 0;
  do {
    uVar14 = uVar16;
    if (uVar4 == uVar14) goto LAB_14742a359;
    uVar16 = uVar14 + 1;
  } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x260) + (longlong)(int)uVar14 * 4)));
  if (uVar4 + 1 != uVar14 + 1) {
    uVar16 = uVar4;
    do {
      local_150 = *(ulonglong *)(*(longlong *)(param_1 + 0x250) + (longlong)(int)uVar14 * 0x10);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 8 + (longlong)(int)uVar14 * 0x10);
      if ((*(byte *)(lVar9 + 0x6a) & 6) == 0) {
        lVar11 = 0;
        do {
          lVar12 = *(longlong *)(lVar9 + 0xa8 + lVar11);
          if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x38) & 0x20) == 0)) {
            local_1b0._0_5_ = CONCAT14(1,*(undefined4 *)(lVar12 + 0x1ac));
            uVar16 = ((uint)(local_150 >> 0x14) & 0xffff ^ (uint)(local_150 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            local_1e0 = local_1b4;
            local_1e8 = &local_1b0;
            FUN_14742e9a0(&local_d8,&local_168,uVar16 & 0x7fffffff ^ uVar16 >> 0x10);
            uVar16 = *(uint *)(param_1 + 600);
            break;
          }
          lVar11 = lVar11 + 0x20;
        } while (lVar11 != 0x40);
      }
      uVar7 = uVar14 + 1;
      if (uVar14 + 1 < uVar16) {
        uVar7 = uVar16;
      }
      uVar10 = uVar14;
      do {
        uVar14 = uVar7;
        if (uVar7 - 1 == uVar10) break;
        uVar14 = uVar10 + 1;
        uVar10 = uVar14;
      } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x260) + (longlong)(int)uVar14 * 4)));
    } while (uVar14 != uVar4);
  }
LAB_14742a359:
  FUN_14742ed14(&local_150);
  FUN_14742ad92(&local_150,(longlong)(*(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x210)));
  uVar4 = *(uint *)(param_1 + 0x1e0);
  uVar16 = 0;
  do {
    uVar14 = uVar16;
    if (uVar4 == uVar14) goto LAB_14742a4df;
    uVar16 = uVar14 + 1;
  } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar14 * 4)));
  if (uVar4 + 1 != uVar14 + 1) {
    uVar16 = uVar4;
    do {
      local_1b0 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)(int)uVar14 * 0x10);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + (longlong)(int)uVar14 * 0x10);
      if (((*(byte *)(lVar9 + 100) & 8) == 0) && ((longlong)*(int *)(lVar9 + 0xf0) != 0)) {
        lVar11 = *(longlong *)(lVar9 + 0xe8);
        lVar9 = (longlong)*(int *)(lVar9 + 0xf0) * 0x40 + lVar11;
        do {
          lVar12 = 0;
          do {
            lVar2 = *(longlong *)(lVar11 + lVar12);
            if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x38) & 0x20) == 0)) {
              local_168._0_5_ = CONCAT14(1,*(undefined4 *)(lVar2 + 0x1ac));
              uVar16 = ((uint)(local_1b0 >> 0x14) & 0xffff ^ (uint)(local_1b0 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              local_1e0 = &local_1b5;
              local_1e8 = &local_168;
              FUN_14742ee6c(&local_150,local_1b4,uVar16 & 0x7fffffff ^ uVar16 >> 0x10);
              uVar16 = *(uint *)(param_1 + 0x1e0);
              goto LAB_14742a4ac;
            }
            lVar12 = lVar12 + 0x20;
          } while (lVar12 != 0x40);
          lVar11 = lVar11 + 0x40;
        } while (lVar11 != lVar9);
      }
LAB_14742a4ac:
      uVar7 = uVar14 + 1;
      if (uVar14 + 1 < uVar16) {
        uVar7 = uVar16;
      }
      do {
        uVar10 = uVar7;
        if (uVar7 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar10 = uVar14;
      } while (SBORROW4(0,*(int *)(*(longlong *)(param_1 + 0x1e8) + (longlong)(int)uVar14 * 4)));
      uVar14 = uVar10;
    } while (uVar14 != uVar4);
  }
LAB_14742a4df:
  local_168 = (void *)0x0;
  uStack_160 = 0;
  iVar8 = (local_148 - local_118) + (local_d0 - local_a0);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_14742f1e0(&local_168);
  }
  uVar13 = (ulonglong)local_d0;
  local_1cc = DAT_14c760da4;
  local_1d8 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar4 = 0;
  do {
    uVar16 = uVar4;
    if (local_d0 == uVar16) goto LAB_14742a56a;
    uVar4 = uVar16 + 1;
  } while (SBORROW4(0,*(int *)(local_c8 + (longlong)(int)uVar16 * 4)));
  if (local_d0 + 1 != uVar16 + 1) {
    local_1d4 = 0x20;
    lVar9 = local_c8;
    uVar4 = local_d0;
    local_1c8 = uVar13;
    if ((local_1d8 != 0) && (local_1d4 = 0, local_1d8 != 0)) {
      for (; (local_1d8 >> local_1d4 & 1) == 0; local_1d4 = local_1d4 + 1) {
      }
    }
    do {
      if (local_1cc != 0) {
        uVar14 = *(uint *)(local_d8 + 8 + (longlong)(int)uVar16 * 0x10);
        if (uVar14 == 0) {
          local_1d0 = 0x20;
        }
        else {
          local_1d0 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> local_1d0 & 1) == 0; local_1d0 = local_1d0 + 1) {
            }
          }
        }
        lVar11 = *(longlong *)(local_d8 + (longlong)(int)uVar16 * 0x10);
        uVar7 = local_1d4;
        uVar10 = local_1d8;
        local_1c0 = lVar11;
        do {
          uVar13 = uStack_160;
          if ((uVar14 >> (uVar7 & 0x1f) & 1) == 0) {
            local_1b0 = 0;
            if (lVar11 != 0) {
              LOCK();
              *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
              UNLOCK();
            }
            uStack_1a0 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_188 = local_1d0;
            local_180 = CONCAT22(local_180._2_2_,0x100);
            uStack_178 = 0;
            uStack_170 = 0;
            lVar9 = (longlong)(int)uStack_160;
            uVar4 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
            local_1a8 = lVar11;
            local_184 = uVar7;
            if (uStack_160._4_4_ < uVar4) {
              FUN_14742f2e4(&local_168,uVar13 & 0xffffffff);
            }
            *(ulonglong *)((longlong)local_168 + lVar9 * 0x48) = local_1b0;
            local_1b0 = 0;
            *(longlong *)((longlong)local_168 + lVar9 * 0x48 + 8) = local_1a8;
            local_1a8 = 0;
            *(undefined8 *)((longlong)local_168 + lVar9 * 0x48 + 0x40) = uStack_170;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x30);
            *puVar1 = local_180;
            puVar1[1] = uStack_17c;
            puVar1[2] = (undefined4)uStack_178;
            puVar1[3] = uStack_178._4_4_;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x20);
            *puVar1 = (undefined4)uStack_190;
            puVar1[1] = uStack_190._4_4_;
            puVar1[2] = local_188;
            puVar1[3] = local_184;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x10);
            *puVar1 = (undefined4)uStack_1a0;
            puVar1[1] = uStack_1a0._4_4_;
            puVar1[2] = (undefined4)local_198;
            puVar1[3] = local_198._4_4_;
            FUN_1472030c8(&local_1b0);
            lVar11 = local_1c0;
          }
          uVar10 = uVar10 & ~(1 << ((byte)uVar7 & 0x1f));
          if (uVar10 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar7 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
          }
          lVar9 = local_c8;
          uVar13 = local_1c8;
          uVar4 = local_d0;
        } while (uVar10 != 0);
      }
      uVar14 = uVar16 + 1;
      if (uVar16 + 1 < uVar4) {
        uVar14 = uVar4;
      }
      uVar7 = uVar16;
      do {
        uVar16 = uVar14;
        if (uVar14 - 1 == uVar7) break;
        uVar16 = uVar7 + 1;
        uVar7 = uVar16;
      } while (SBORROW4(0,*(int *)(lVar9 + (longlong)(int)uVar16 * 4)));
    } while (uVar16 != (uint)uVar13);
  }
LAB_14742a56a:
  uVar13 = (ulonglong)local_148;
  uVar4 = 0;
  do {
    uVar16 = uVar4;
    if (local_148 == uVar16) goto LAB_14742a59c;
    uVar4 = uVar16 + 1;
  } while (SBORROW4(0,*(int *)(local_140 + (longlong)(int)uVar16 * 4)));
  if (local_148 + 1 != uVar16 + 1) {
    local_1d4 = 0x20;
    lVar9 = local_140;
    uVar4 = local_148;
    local_1c8 = uVar13;
    if ((local_1d8 != 0) && (local_1d4 = 0, local_1d8 != 0)) {
      for (; (local_1d8 >> local_1d4 & 1) == 0; local_1d4 = local_1d4 + 1) {
      }
    }
    do {
      if (local_1cc != 0) {
        uVar14 = *(uint *)(local_150 + 8 + (longlong)(int)uVar16 * 0x10);
        if (uVar14 == 0) {
          local_1d0 = 0x20;
        }
        else {
          local_1d0 = 0;
          if (uVar14 != 0) {
            for (; (uVar14 >> local_1d0 & 1) == 0; local_1d0 = local_1d0 + 1) {
            }
          }
        }
        lVar11 = *(longlong *)(local_150 + (longlong)(int)uVar16 * 0x10);
        uVar10 = local_1d8;
        uVar7 = local_1d4;
        local_1c0 = lVar11;
        do {
          uVar13 = uStack_160;
          if ((uVar14 >> (uVar7 & 0x1f) & 1) == 0) {
            if (lVar11 != 0) {
              LOCK();
              *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
              UNLOCK();
            }
            local_198 = 0;
            uStack_190 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_188 = local_1d0;
            local_180 = CONCAT22(local_180._2_2_,0x100);
            uStack_178 = 0;
            uStack_170 = 0;
            lVar9 = (longlong)(int)uStack_160;
            uVar4 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
            local_1b0 = lVar11;
            local_184 = uVar7;
            if (uStack_160._4_4_ < uVar4) {
              FUN_14742f2e4(&local_168,uVar13 & 0xffffffff);
            }
            *(ulonglong *)((longlong)local_168 + lVar9 * 0x48) = local_1b0;
            local_1b0 = 0;
            *(longlong *)((longlong)local_168 + lVar9 * 0x48 + 8) = local_1a8;
            local_1a8 = 0;
            *(undefined8 *)((longlong)local_168 + lVar9 * 0x48 + 0x40) = uStack_170;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x30);
            *puVar1 = local_180;
            puVar1[1] = uStack_17c;
            puVar1[2] = (undefined4)uStack_178;
            puVar1[3] = uStack_178._4_4_;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x20);
            *puVar1 = (undefined4)uStack_190;
            puVar1[1] = uStack_190._4_4_;
            puVar1[2] = local_188;
            puVar1[3] = local_184;
            puVar1 = (undefined4 *)((longlong)local_168 + lVar9 * 0x48 + 0x10);
            *puVar1 = (undefined4)uStack_1a0;
            puVar1[1] = uStack_1a0._4_4_;
            puVar1[2] = (undefined4)local_198;
            puVar1[3] = local_198._4_4_;
            FUN_1472030c8(&local_1b0);
            lVar11 = local_1c0;
          }
          uVar10 = uVar10 & ~(1 << ((byte)uVar7 & 0x1f));
          if (uVar10 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar7 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
              }
            }
          }
          lVar9 = local_140;
          uVar13 = local_1c8;
          uVar4 = local_148;
        } while (uVar10 != 0);
      }
      uVar14 = uVar16 + 1;
      if (uVar16 + 1 < uVar4) {
        uVar14 = uVar4;
      }
      do {
        uVar7 = uVar14;
        if (uVar14 - 1 == uVar16) break;
        uVar16 = uVar16 + 1;
        uVar7 = uVar16;
      } while (SBORROW4(0,*(int *)(lVar9 + (longlong)(int)uVar16 * 4)));
      uVar16 = uVar7;
    } while (uVar16 != (uint)uVar13);
  }
LAB_14742a59c:
  uVar13 = uStack_160;
  _Src = local_168;
  iVar8 = (int)uStack_160;
  lVar9 = (longlong)(int)uStack_160;
  if (lVar9 != 0) {
    puVar3 = *(ulonglong **)(param_1 + 0x18);
    puVar15 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar15 + 4;
    if ((undefined8 *)puVar3[1] < puVar5) {
      FUN_140023dd8(puVar3,0x28);
      puVar15 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar15 + 4;
    }
    *puVar3 = (ulonglong)puVar5;
    *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
    *(undefined8 **)puVar3[6] = puVar15;
    puVar3[6] = (ulonglong)(puVar15 + 1);
    _Size = lVar9 * 0x48;
    _Dst = (void *)(*puVar3 + 7 & 0xfffffffffffffff8);
    pvVar6 = (void *)((longlong)_Dst + _Size);
    if ((void *)puVar3[1] < pvVar6) {
      FUN_140023dd8(puVar3,(int)_Size + 8);
      _Dst = (void *)(*puVar3 + 7 & 0xfffffffffffffff8);
      pvVar6 = (void *)((longlong)_Dst + _Size);
    }
    *puVar3 = (ulonglong)pvVar6;
    memcpy(_Dst,_Src,_Size);
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a2687f0;
    puVar15[2] = _Dst;
    *(int *)(puVar15 + 3) = iVar8;
  }
  FUN_142d62ffc(_Src,uVar13 & 0xffffffff);
  FUN_14742c85e(&local_150);
  FUN_14742c9aa(&local_d8);
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14742ab52 FUN_14742ab52 body=77 status=ok
// SIG undefined FUN_14742ab52(void)

void FUN_14742ab52(longlong *param_1,undefined8 param_2)

{
  if (*(int *)(*param_1 + 0x6c) == 1) {
    (**(code **)(*DAT_14ca955b8 + 0x30))(DAT_14ca955b8,*(undefined8 *)(*param_1 + 0x20),param_2);
    FUN_143211cc6(*param_1);
    if (*param_1 != 0) {
      *param_1 = 0;
      FUN_14047a298();
      return;
    }
  }
  return;
}



// FUNCTION 14742aba0 FUN_14742aba0 body=495 status=ok
// SIG undefined FUN_14742aba0(void)

void FUN_14742aba0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((ulonglong)((longlong)*(int *)(param_1 + 8) - (longlong)*(int *)(param_1 + 0x38)) < param_2) {
    if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0xc) < (int)param_2) {
      FUN_14742c9fa(param_1,param_2 & 0xffffffff);
    }
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar5 = uVar1;
    if ((ulonglong)(uVar1 * 3) <= param_2 * 5) {
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 * 2 + 1;
      } while ((ulonglong)(uVar5 * 3) <= param_2 * 5);
      uVar4 = uVar4 * 2;
      if (uVar1 <= uVar4) {
        puVar8 = (undefined4 *)(param_1 + 0x40);
        puVar2 = *(undefined4 **)(param_1 + 0x48);
        if (puVar2 == (undefined4 *)0x0) {
          local_58[0] = *puVar8;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        local_48 = *(undefined4 *)(param_1 + 0x50);
        local_44 = *(undefined4 *)(param_1 + 0x54);
        *(undefined8 *)(param_1 + 0x50) = 0x100000000;
        puVar7 = (undefined4 *)(param_1 + 0x58);
        puVar3 = *(undefined4 **)(param_1 + 0x60);
        if (puVar3 == (undefined4 *)0x0) {
          local_70[0] = *puVar7;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_60 = *(undefined4 *)(param_1 + 0x68);
        local_5c = *(undefined4 *)(param_1 + 0x6c);
        *(undefined8 *)(param_1 + 0x68) = 0x100000000;
        *(uint *)(param_1 + 0x70) = uVar5;
        *(undefined4 *)(param_1 + 0x74) = 0;
        iVar6 = uVar4 + 2;
        local_68 = puVar3;
        local_50 = puVar2;
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          uVar5 = 0;
        }
        else {
          FUN_144736f2a(puVar8);
          iVar6 = *(int *)(param_1 + 0x50);
          uVar5 = *(int *)(param_1 + 0x70) + 1;
          *(int *)(param_1 + 0x50) = iVar6 + *(int *)(param_1 + 0x70) + 1;
          if ((uint)(*(int *)(param_1 + 0x54) - iVar6) < uVar5) {
            FUN_14742dd0c(puVar8,iVar6);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar5);
          }
          if (*(int *)(param_1 + 0x6c) < (int)uVar5) {
            FUN_144737024(puVar7);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
        }
        FUN_14742e0a8(puVar7,uVar5);
        puVar8 = local_70;
        if (puVar3 != (undefined4 *)0x0) {
          puVar8 = puVar3;
        }
        puVar7 = local_58;
        if (puVar2 != (undefined4 *)0x0) {
          puVar7 = puVar2;
        }
        uVar5 = 0;
        do {
          if (!SBORROW4(0,puVar8[(int)uVar5])) {
            FUN_14742e8ae(param_1,puVar7[(int)uVar5]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14742ad92 FUN_14742ad92 body=495 status=ok
// SIG undefined FUN_14742ad92(void)

void FUN_14742ad92(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((ulonglong)((longlong)*(int *)(param_1 + 8) - (longlong)*(int *)(param_1 + 0x38)) < param_2) {
    if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0xc) < (int)param_2) {
      FUN_14742c8ae(param_1,param_2 & 0xffffffff);
    }
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar5 = uVar1;
    if ((ulonglong)(uVar1 * 3) <= param_2 * 5) {
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 * 2 + 1;
      } while ((ulonglong)(uVar5 * 3) <= param_2 * 5);
      uVar4 = uVar4 * 2;
      if (uVar1 <= uVar4) {
        puVar8 = (undefined4 *)(param_1 + 0x40);
        puVar2 = *(undefined4 **)(param_1 + 0x48);
        if (puVar2 == (undefined4 *)0x0) {
          local_58[0] = *puVar8;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        local_48 = *(undefined4 *)(param_1 + 0x50);
        local_44 = *(undefined4 *)(param_1 + 0x54);
        *(undefined8 *)(param_1 + 0x50) = 0x100000000;
        puVar7 = (undefined4 *)(param_1 + 0x58);
        puVar3 = *(undefined4 **)(param_1 + 0x60);
        if (puVar3 == (undefined4 *)0x0) {
          local_70[0] = *puVar7;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_60 = *(undefined4 *)(param_1 + 0x68);
        local_5c = *(undefined4 *)(param_1 + 0x6c);
        *(undefined8 *)(param_1 + 0x68) = 0x100000000;
        *(uint *)(param_1 + 0x70) = uVar5;
        *(undefined4 *)(param_1 + 0x74) = 0;
        iVar6 = uVar4 + 2;
        local_68 = puVar3;
        local_50 = puVar2;
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          uVar5 = 0;
        }
        else {
          FUN_144736f2a(puVar8);
          iVar6 = *(int *)(param_1 + 0x50);
          uVar5 = *(int *)(param_1 + 0x70) + 1;
          *(int *)(param_1 + 0x50) = iVar6 + *(int *)(param_1 + 0x70) + 1;
          if ((uint)(*(int *)(param_1 + 0x54) - iVar6) < uVar5) {
            FUN_14742dd0c(puVar8,iVar6);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar5);
          }
          if (*(int *)(param_1 + 0x6c) < (int)uVar5) {
            FUN_144737024(puVar7);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
        }
        FUN_14742e0a8(puVar7,uVar5);
        puVar8 = local_70;
        if (puVar3 != (undefined4 *)0x0) {
          puVar8 = puVar3;
        }
        puVar7 = local_58;
        if (puVar2 != (undefined4 *)0x0) {
          puVar7 = puVar2;
        }
        uVar5 = 0;
        do {
          if (!SBORROW4(0,puVar8[(int)uVar5])) {
            FUN_14742ed7a(param_1,puVar7[(int)uVar5]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14742af83 FUN_14742af83 body=7 status=ok
// SIG undefined FUN_14742af83(void)

undefined1 FUN_14742af83(void)

{
  return DAT_14ca84e02;
}



// FUNCTION 14742af8a thunk_FUN_14742af90 body=5 status=ok
// SIG undefined thunk_FUN_14742af90(void)

void thunk_FUN_14742af90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong lStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14742caf6(&DAT_14ca95628,0);
  plVar3 = (longlong *)FUN_144b1c610();
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = param_1;
  }
  do {
    plVar3 = (longlong *)*plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14742b055;
  } while (*(char *)(lVar5 + *(int *)(plVar3[2] + 100)) != '\x01');
  if (DAT_14ca95638 == 0) {
    FUN_1456ef0d1(&lStack_28,2,0xffffffff);
    lVar5 = DAT_14ca95638;
    DAT_14ca95638 = lStack_28;
    lStack_28 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (lStack_28 != 0) {
        LOCK();
        puVar1 = (uint *)(lStack_28 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  uVar4 = FUN_14001cc68(0xc0,0x10);
  FUN_1432149f4(uVar4,DAT_14ca95638);
  DAT_14ca95640 = uVar4;
  FUN_14742cfde(param_1);
LAB_14742b055:
  if ((uStack_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742af90 FUN_14742af90 body=292 status=ok
// SIG undefined FUN_14742af90(void)

void FUN_14742af90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14742caf6(&DAT_14ca95628,0);
  plVar3 = (longlong *)FUN_144b1c610();
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = param_1;
  }
  do {
    plVar3 = (longlong *)*plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_14742b055;
  } while (*(char *)(lVar5 + *(int *)(plVar3[2] + 100)) != '\x01');
  if (DAT_14ca95638 == 0) {
    FUN_1456ef0d1(&local_28,2,0xffffffff);
    lVar5 = DAT_14ca95638;
    DAT_14ca95638 = local_28;
    local_28 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_28 != 0) {
        LOCK();
        puVar1 = (uint *)(local_28 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  uVar4 = FUN_14001cc68(0xc0,0x10);
  FUN_1432149f4(uVar4,DAT_14ca95638);
  DAT_14ca95640 = uVar4;
  FUN_14742cfde(param_1);
LAB_14742b055:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742b0b5 thunk_FUN_14742b0ba body=5 status=ok
// SIG undefined thunk_FUN_14742b0ba(void)

void thunk_FUN_14742b0ba(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_48 [40];
  undefined8 *puStack_20;
  undefined4 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca95640 == 0) goto LAB_14742b1a5;
  FUN_14494c7ac(&DAT_14ca85100,&puStack_20,0);
  ppuVar3 = (undefined8 **)(DAT_14ca95640 + 0x20);
  if (ppuVar3 == &puStack_20) {
LAB_14742b12c:
    if (puStack_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_20)(puStack_20,1);
      }
    }
  }
  else {
    puVar2 = *ppuVar3;
    *ppuVar3 = puStack_20;
    puStack_20 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      goto LAB_14742b12c;
    }
  }
  puStack_20 = (undefined8 *)0x0;
  uStack_18 = 0;
  FUN_14007658c(&DAT_14ca850c8,&puStack_20,1);
  if (DAT_14ca95650 == 0) {
    DAT_14ca95650 = DAT_14ca95640;
  }
  if (DAT_14ca95648 != 0) {
    *(longlong *)(DAT_14ca95648 + 0x28) = DAT_14ca95640;
  }
  DAT_14ca95648 = DAT_14ca95640;
  DAT_14ca95640 = 0;
LAB_14742b1a5:
  if ((uStack_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742b0ba FUN_14742b0ba body=263 status=ok
// SIG undefined FUN_14742b0ba(void)

void FUN_14742b0ba(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca95640 == 0) goto LAB_14742b1a5;
  FUN_14494c7ac(&DAT_14ca85100,&local_20,0);
  ppuVar3 = (undefined8 **)(DAT_14ca95640 + 0x20);
  if (ppuVar3 == &local_20) {
LAB_14742b12c:
    if (local_20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_20)(local_20,1);
      }
    }
  }
  else {
    puVar2 = *ppuVar3;
    *ppuVar3 = local_20;
    local_20 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      goto LAB_14742b12c;
    }
  }
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_20,1);
  if (DAT_14ca95650 == 0) {
    DAT_14ca95650 = DAT_14ca95640;
  }
  if (DAT_14ca95648 != 0) {
    *(longlong *)(DAT_14ca95648 + 0x28) = DAT_14ca95640;
  }
  DAT_14ca95648 = DAT_14ca95640;
  DAT_14ca95640 = 0;
LAB_14742b1a5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742b1c2 FUN_14742b1c2 body=8 status=ok
// SIG undefined FUN_14742b1c2(void)

undefined * FUN_14742b1c2(void)

{
  return &DAT_14ca95658;
}



// FUNCTION 14742b1ca FUN_14742b1ca body=188 status=ok
// SIG undefined FUN_14742b1ca(void)

uint FUN_14742b1ca(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar5 == 0) {
    uVar5 = 0;
    if (0x3f < (int)uVar3) goto LAB_14742b207;
    iVar4 = 0x40;
  }
  else {
    if (uVar5 != uVar3) goto LAB_14742b207;
    iVar4 = uVar5 * 2;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    uVar3 = uVar5;
    if (iVar4 <= (int)uVar5) goto LAB_14742b207;
  }
  FUN_14742d132(param_1 + 1,iVar4);
  uVar5 = *(uint *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
LAB_14742b207:
  *(uint *)(param_1 + 2) = uVar5 + 1;
  if (uVar3 < uVar5 + 1) {
    FUN_14742d19a(param_1 + 1,uVar5);
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + (longlong)(int)uVar5 * 0x30) = param_2;
  (**(code **)(*plVar1 + 8))(plVar1);
  lVar2 = lVar2 + (longlong)(int)uVar5 * 0x30;
  (**(code **)(*plVar1 + 8))(plVar1,lVar2 + 0x18);
  *(undefined1 *)(lVar2 + 0x28) = 0;
  return uVar5;
}



// FUNCTION 14742b288 FUN_14742b288 body=73 status=ok
// SIG undefined FUN_14742b288(void)

void FUN_14742b288(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(char *)(param_2 + 0x69) == '\x01')) {
    lVar2 = (longlong)(int)param_1[1] * 0x30;
    (**(code **)(*DAT_14ca83900 + 0x2b0))
              (DAT_14ca83900,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 8 + lVar2));
    *(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x28 + lVar2) = 1;
  }
  return;
}



// FUNCTION 14742b2d2 FUN_14742b2d2 body=73 status=ok
// SIG undefined FUN_14742b2d2(void)

void FUN_14742b2d2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(char *)(param_2 + 0x69) == '\x01')) {
    lVar2 = (longlong)(int)param_1[1] * 0x30;
    (**(code **)(*DAT_14ca83900 + 0x2b0))
              (DAT_14ca83900,param_2,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x18 + lVar2));
    *(undefined1 *)(*(longlong *)(lVar1 + 8) + 0x28 + lVar2) = 1;
  }
  return;
}



// FUNCTION 14742b320 FUN_14742b320 body=1409 status=ok
// SIG undefined FUN_14742b320(void)

void FUN_14742b320(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_3b8 [32];
  int local_398;
  int local_390;
  undefined2 *local_388;
  int local_380;
  longlong local_378;
  int local_370;
  undefined4 local_36c;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_1468161aa();
  FUN_14490b2fc(&DAT_14ca95570);
  iVar13 = DAT_14ca95580;
  uVar2 = DAT_14ca95578;
  local_378 = 0;
  local_370 = DAT_14ca95580;
  if (DAT_14ca95580 == 0) {
    local_36c = 0;
  }
  else {
    FUN_14742f454(&local_378,DAT_14ca95580);
    FUN_14742f4ad(local_378,uVar2,iVar13);
  }
  FUN_144a6a7be(&DAT_14ca95570);
  iVar13 = local_370;
  lVar20 = local_378;
  lVar6 = (longlong)local_370;
  if (1 < lVar6) {
    memset(local_358,0,0x2f0);
    local_368 = lVar20;
    local_360 = lVar20 + lVar6 * 8 + -8;
    fVar26 = logf((float)iVar13);
    local_358[0] = (int)(longlong)(fVar26 + fVar26);
    plVar4 = &local_368;
    do {
      plVar5 = (longlong *)*plVar4;
      plVar7 = (longlong *)plVar4[1];
      iVar13 = (int)plVar4[2];
      iVar9 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar5) >> 3);
      uVar18 = (ulonglong)(iVar9 + 1);
      plVar11 = plVar7;
      plVar22 = plVar5;
      if (iVar13 != 0) {
LAB_14742b41a:
        plVar8 = plVar5;
        if (8 < (int)(uint)uVar18) {
          uVar17 = (uint)uVar18 >> 1;
          lVar20 = plVar8[uVar17];
          plVar8[uVar17] = *plVar8;
          *plVar8 = lVar20;
          plVar19 = plVar11 + 1;
          plVar5 = plVar8;
          do {
            plVar3 = plVar5 + 1;
            plVar12 = plVar5 + 1;
            do {
              plVar23 = plVar12;
              plVar5 = plVar3;
              if (plVar11 < plVar5) break;
              plVar3 = plVar5 + 1;
              plVar12 = plVar23 + 1;
            } while ((uint)(*(int *)(*plVar8 + 0x98) * *(int *)(*plVar8 + 0x10)) <=
                     (uint)(*(int *)(*plVar5 + 0x98) * *(int *)(*plVar5 + 0x10)));
            plVar3 = plVar19 + -2;
            do {
              plVar12 = plVar19;
              plVar21 = plVar3;
              plVar19 = plVar12 + -1;
              if (plVar19 <= plVar8) break;
              plVar3 = plVar21 + -1;
            } while ((uint)(*(int *)(*plVar19 + 0x98) * *(int *)(*plVar19 + 0x10)) <=
                     (uint)(*(int *)(*plVar8 + 0x98) * *(int *)(*plVar8 + 0x10)));
            if (plVar19 < plVar5) goto LAB_14742b4d6;
            lVar20 = *plVar5;
            *plVar5 = *plVar19;
            *plVar19 = lVar20;
          } while( true );
        }
        if (plVar8 < plVar11) {
          do {
            plVar5 = plVar8;
            if (plVar8 + 1 <= plVar11) {
              lVar20 = *plVar8;
              plVar7 = plVar8 + 1;
              do {
                lVar6 = *plVar7;
                plVar22 = plVar7;
                if ((uint)(*(int *)(lVar20 + 0x98) * *(int *)(lVar20 + 0x10)) <=
                    (uint)(*(int *)(lVar6 + 0x98) * *(int *)(lVar6 + 0x10))) {
                  plVar22 = plVar5;
                  lVar6 = lVar20;
                }
                lVar20 = lVar6;
                plVar5 = plVar22;
                plVar7 = plVar7 + 1;
              } while (plVar7 <= plVar11);
            }
            lVar20 = *plVar5;
            *plVar5 = *plVar11;
            *plVar11 = lVar20;
            plVar11 = plVar11 + -1;
          } while (plVar8 < plVar11);
        }
        goto LAB_14742b76a;
      }
LAB_14742b56a:
      iVar13 = (int)uVar18;
      if (iVar13 != 0) {
        iVar9 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
        iVar16 = iVar9;
joined_r0x00014742b591:
        do {
          iVar15 = iVar9 * 2 + 1;
          if (iVar15 < iVar13) {
            iVar14 = iVar9 * 2 + 2;
            if ((iVar14 < iVar13) &&
               ((uint)(*(int *)(plVar5[iVar14] + 0x98) * *(int *)(plVar5[iVar14] + 0x10)) <=
                (uint)(*(int *)(plVar5[iVar15] + 0x98) * *(int *)(plVar5[iVar15] + 0x10)))) {
              iVar15 = iVar14;
            }
            lVar20 = plVar5[iVar9];
            lVar6 = plVar5[iVar15];
            if ((uint)(*(int *)(lVar6 + 0x98) * *(int *)(lVar6 + 0x10)) <
                (uint)(*(int *)(lVar20 + 0x98) * *(int *)(lVar20 + 0x10))) {
              plVar5[iVar9] = lVar6;
              plVar5[iVar15] = lVar20;
              iVar9 = iVar15;
              goto joined_r0x00014742b591;
            }
          }
          bVar25 = iVar16 != 0;
          iVar9 = iVar16 + -1;
          iVar16 = iVar9;
        } while (bVar25);
        if (1 < iVar13) {
          lVar20 = *plVar5;
          *plVar5 = plVar5[uVar18 - 1];
          plVar5[uVar18 - 1] = lVar20;
          if (iVar13 != 2) {
            do {
              uVar10 = uVar18 - 1;
              iVar13 = 0;
              iVar16 = 1;
              iVar9 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar15 = iVar16;
                if (((longlong)iVar13 < (longlong)uVar10) &&
                   ((uint)(*(int *)(plVar5[iVar13] + 0x98) * *(int *)(plVar5[iVar13] + 0x10)) <=
                    (uint)(*(int *)(plVar5[iVar16] + 0x98) * *(int *)(plVar5[iVar16] + 0x10)))) {
                  iVar15 = iVar13;
                }
                lVar20 = plVar5[iVar9];
                lVar6 = plVar5[iVar15];
                if ((uint)(*(int *)(lVar20 + 0x98) * *(int *)(lVar20 + 0x10)) <=
                    (uint)(*(int *)(lVar6 + 0x98) * *(int *)(lVar6 + 0x10))) break;
                plVar5[iVar9] = lVar6;
                plVar5[iVar15] = lVar20;
                iVar13 = iVar15 * 2;
                iVar16 = iVar15 * 2 + 1;
                iVar9 = iVar15;
              } while ((longlong)iVar16 < (longlong)uVar10);
              lVar20 = *plVar5;
              *plVar5 = plVar5[uVar18 - 2];
              plVar5[uVar18 - 2] = lVar20;
              uVar18 = uVar10;
            } while (2 < uVar10);
          }
        }
      }
LAB_14742b76a:
      plVar4 = plVar4 + -3;
    } while (&local_368 <= plVar4);
  }
  lVar20 = local_378;
  if (local_370 == 0) {
    iVar13 = 0;
  }
  else {
    lVar6 = (longlong)local_370;
    lVar24 = 0;
    do {
      lVar1 = *(longlong *)(lVar20 + lVar24);
      local_390 = *(int *)(lVar1 + 0x10);
      local_398 = *(int *)(lVar1 + 0x98);
      local_380 = DAT_14ca95598 - *(int *)(lVar1 + 0x9c);
      local_388 = &DAT_149e06384;
      if ((*(byte *)(lVar1 + 0x18) & 8) == 0) {
        local_388 = &DAT_149e06338;
      }
      FUN_140047918(param_1,
                    L"  %6.3fMB Name: %s, NumElements: %u, BytesPerElement: %u, UAV: %s, Frames Since Requested: %u"
                    ,(double)((float)(uint)(local_398 * local_390) * 9.536743e-07),
                    *(undefined8 *)(lVar1 + 0x88));
      lVar24 = lVar24 + 8;
      iVar13 = local_370;
    } while (lVar6 * 8 != lVar24);
  }
  FUN_144a88358(local_378,iVar13);
  if (local_378 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14742b4d6:
  lVar20 = *plVar8;
  *plVar8 = *plVar19;
  *plVar19 = lVar20;
  iVar13 = iVar13 + -1;
  plVar12 = plVar12 + -2;
  if ((longlong)plVar21 - (longlong)plVar22 < (longlong)plVar7 - (longlong)plVar23) {
    if (plVar5 < plVar11) {
      *plVar4 = (longlong)plVar5;
      plVar4[1] = (longlong)plVar11;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    plVar5 = plVar8;
    plVar7 = plVar21;
    if (plVar19 <= plVar8 + 1) goto LAB_14742b76a;
  }
  else {
    if (plVar8 + 1 < plVar19) {
      *plVar4 = (longlong)plVar8;
      plVar4[1] = (longlong)plVar12;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    plVar8 = plVar23;
    plVar12 = plVar11;
    plVar7 = plVar11;
    if (plVar11 <= plVar5) goto LAB_14742b76a;
  }
  iVar9 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar8) >> 3);
  uVar18 = (ulonglong)(iVar9 + 1);
  plVar11 = plVar12;
  plVar22 = plVar8;
  if (iVar13 == 0) goto LAB_14742b56a;
  goto LAB_14742b41a;
}



// FUNCTION 14742b8a2 FUN_14742b8a2 body=34 status=ok
// SIG undefined FUN_14742b8a2(void)

void FUN_14742b8a2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*DAT_14ca83900 + 0xd8))();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 14742b8c8 FUN_14742b8c8 body=149 status=ok
// SIG undefined FUN_14742b8c8(void)

undefined8
FUN_14742b8c8(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_2;
  *param_2 = 0;
  local_30 = param_5;
  local_38 = param_4;
  FUN_14004772e(param_1,&DAT_14ca85100,&local_20,param_3);
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742b95e FUN_14742b95e body=42 status=ok
// SIG undefined FUN_14742b95e(void)

void FUN_14742b95e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14742b994 FUN_14742b994 body=96 status=ok
// SIG undefined FUN_14742b994(void)

undefined8 FUN_14742b994(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5ff90();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca95ed0,1);
  return uVar3;
}



// FUNCTION 14742b9f4 FUN_14742b9f4 body=52 status=ok
// SIG undefined FUN_14742b9f4(void)

void FUN_14742b9f4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14742ba28 FUN_14742ba28 body=44 status=ok
// SIG undefined FUN_14742ba28(void)

void FUN_14742ba28(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_143211d72(param_1,param_2,0,param_3,0,*(int *)(param_3 + 0x60) * *(int *)(param_3 + 100));
  return;
}



// FUNCTION 14742ba54 FUN_14742ba54 body=64 status=ok
// SIG undefined FUN_14742ba54(void)

void FUN_14742ba54(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_140c4fe69();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742ba95 FUN_14742ba95 body=74 status=ok
// SIG undefined FUN_14742ba95(void)

void FUN_14742ba95(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  local_14 = param_3;
  local_10 = param_3;
  local_c = param_3;
  FUN_14042f6c6(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742bae0 FUN_14742bae0 body=98 status=ok
// SIG undefined FUN_14742bae0(void)

void FUN_14742bae0(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_38 [32];
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = (float)*param_3;
  local_14 = (float)param_3[1];
  local_10 = (float)param_3[2];
  local_c = 0;
  FUN_140c4fe69();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742bb44 FUN_14742bb44 body=42 status=ok
// SIG undefined FUN_14742bb44(void)

void FUN_14742bb44(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14742bb8e FUN_14742bb8e body=96 status=ok
// SIG undefined FUN_14742bb8e(void)

undefined8 FUN_14742bb8e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14155d24c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca95f58,1);
  return uVar3;
}



// FUNCTION 14742bbee FUN_14742bbee body=52 status=ok
// SIG undefined FUN_14742bbee(void)

void FUN_14742bbee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14742bc22 FUN_14742bc22 body=42 status=ok
// SIG undefined FUN_14742bc22(void)

void FUN_14742bc22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14742bc58 FUN_14742bc58 body=96 status=ok
// SIG undefined FUN_14742bc58(void)

undefined8 FUN_14742bc58(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141599598();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca95fe0,1);
  return uVar3;
}



// FUNCTION 14742bcb8 FUN_14742bcb8 body=52 status=ok
// SIG undefined FUN_14742bcb8(void)

void FUN_14742bcb8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14742bcf8 FUN_14742bcf8 body=51 status=ok
// SIG undefined FUN_14742bcf8(void)

longlong FUN_14742bcf8(longlong param_1,int param_2)

{
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742bd2c FUN_14742bd2c body=307 status=ok
// SIG undefined FUN_14742bd2c(void)

longlong FUN_14742bd2c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"IndexBuffer",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"VertexBuffer",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"VertexBufferStride",0);
  FUN_1474409b8(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"VertexBufferOffsetInBytes",0);
  FUN_1474409b8(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"IndexBufferOffsetInBytes",0);
  FUN_1474409b8(param_1 + 0xfa,*(undefined8 *)(param_2 + 0x28),L"IndexBufferStride",0);
  FUN_1474409b8(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),L"NumPrimitives",0);
  FUN_1474409b8(param_1 + 0x106,*(undefined8 *)(param_2 + 0x28),L"MaxVertices",0);
  return param_1;
}



// FUNCTION 14742be60 FUN_14742be60 body=200 status=ok
// SIG undefined FUN_14742be60(void)

longlong FUN_14742be60(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InstanceBuffer",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InstanceBufferOffsetInBytes",0);
  FUN_1474409b8(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"InstanceBufferStrideInBytes",0);
  FUN_1474409b8(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"NumInstances",0);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"NumHitGroups",0);
  return param_1;
}



// FUNCTION 14742bf28 FUN_14742bf28 body=89 status=ok
// SIG undefined FUN_14742bf28(void)

void FUN_14742bf28(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_14178eaf4(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x1c) + 0x1fU >> 5);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 14742bf82 FUN_14742bf82 body=227 status=ok
// SIG undefined FUN_14742bf82(void)

void FUN_14742bf82(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bd9fc(param_3,4);
  }
  _Src = (void *)*param_1;
  iVar4 = param_3 * 4;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
  lVar1 = uVar3 + 7;
  uVar3 = uVar3 ^ 0xfffffffffffffff8;
  _Dst = (void *)(*puVar2 + lVar1 & uVar3);
  uVar5 = (longlong)_Dst + (longlong)iVar4;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
    _Dst = (void *)(lVar1 + *puVar2 & uVar3);
    uVar5 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar5;
  *param_1 = _Dst;
  if (param_2 == 0 || _Src == (void *)0x0) {
    return;
  }
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  memcpy(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742c066 FUN_14742c066 body=65 status=ok
// SIG undefined FUN_14742c066(void)

void FUN_14742c066(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 1) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      FUN_143214216((longlong)param_1 + 8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14742c0a8 FUN_14742c0a8 body=124 status=ok
// SIG undefined FUN_14742c0a8(void)

void FUN_14742c0a8(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_143214216((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_143214216((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14742c124 FUN_14742c124 body=98 status=ok
// SIG undefined FUN_14742c124(void)

void FUN_14742c124(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  FUN_14742c0a8();
  return;
}



// FUNCTION 14742c188 FUN_14742c188 body=99 status=ok
// SIG undefined FUN_14742c188(void)

void FUN_14742c188(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar3 = 0;
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_14742c1ec(param_1);
    iVar3 = *(int *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (uVar1 < iVar3 + 1U) {
    FUN_14742c358(param_1,iVar3);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + (longlong)iVar3 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14742c1ec FUN_14742c1ec body=36 status=ok
// SIG undefined FUN_14742c1ec(void)

void FUN_14742c1ec(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 1) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14742c210 FUN_14742c210 body=100 status=ok
// SIG undefined FUN_14742c210(void)

void FUN_14742c210(void *param_1,int param_2,uint param_3)

{
  void *_Dst;
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742c274((longlong)param_1 + 8,param_2);
      return;
    }
    FUN_14742c274((longlong)param_1 + 8,0);
    _Dst = *(void **)((longlong)param_1 + 8);
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 3);
  return;
}



// FUNCTION 14742c274 FUN_14742c274 body=226 status=ok
// SIG undefined FUN_14742c274(void)

void FUN_14742c274(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bd9fc(param_3,8);
  }
  _Src = (void *)*param_1;
  iVar4 = param_3 * 8;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
  lVar1 = uVar3 + 7;
  uVar3 = uVar3 ^ 0xfffffffffffffff8;
  _Dst = (void *)(*puVar2 + lVar1 & uVar3);
  uVar5 = (longlong)_Dst + (longlong)iVar4;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
    _Dst = (void *)(lVar1 + *puVar2 & uVar3);
    uVar5 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar5;
  *param_1 = _Dst;
  if (param_2 != 0 && _Src != (void *)0x0) {
    if (param_3 < param_2) {
      param_2 = param_3;
    }
    memcpy(_Dst,_Src,(longlong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14742c358 FUN_14742c358 body=98 status=ok
// SIG undefined FUN_14742c358(void)

void FUN_14742c358(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  FUN_14742c210();
  return;
}



// FUNCTION 14742c3bc FUN_14742c3bc body=227 status=ok
// SIG undefined FUN_14742c3bc(void)

void FUN_14742c3bc(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bd9fc(param_3,4);
  }
  _Src = (void *)*param_1;
  iVar4 = param_3 * 4;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
  lVar1 = uVar3 + 7;
  uVar3 = uVar3 ^ 0xfffffffffffffff8;
  _Dst = (void *)(*puVar2 + lVar1 & uVar3);
  uVar5 = (longlong)_Dst + (longlong)iVar4;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
    _Dst = (void *)(lVar1 + *puVar2 & uVar3);
    uVar5 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar5;
  *param_1 = _Dst;
  if (param_2 == 0 || _Src == (void *)0x0) {
    return;
  }
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  memcpy(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742c4a0 FUN_14742c4a0 body=227 status=ok
// SIG undefined FUN_14742c4a0(void)

void FUN_14742c4a0(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bd9fc(param_3,4);
  }
  _Src = (void *)*param_1;
  iVar4 = param_3 * 4;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
  lVar1 = uVar3 + 7;
  uVar3 = uVar3 ^ 0xfffffffffffffff8;
  _Dst = (void *)(*puVar2 + lVar1 & uVar3);
  uVar5 = (longlong)_Dst + (longlong)iVar4;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
    _Dst = (void *)(lVar1 + *puVar2 & uVar3);
    uVar5 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar5;
  *param_1 = _Dst;
  if (param_2 == 0 || _Src == (void *)0x0) {
    return;
  }
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  memcpy(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742c584 FUN_14742c584 body=20 status=ok
// SIG undefined FUN_14742c584(void)

void FUN_14742c584(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  FUN_14742c598(param_1,*(undefined4 *)(param_1 + 0x10),param_2);
  return;
}



// FUNCTION 14742c598 FUN_14742c598 body=100 status=ok
// SIG undefined FUN_14742c598(void)

void FUN_14742c598(void *param_1,int param_2,uint param_3)

{
  void *_Dst;
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742c5fc((longlong)param_1 + 8,param_2);
      return;
    }
    FUN_14742c5fc((longlong)param_1 + 8,0);
    _Dst = *(void **)((longlong)param_1 + 8);
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 3);
  return;
}



// FUNCTION 14742c5fc FUN_14742c5fc body=227 status=ok
// SIG undefined FUN_14742c5fc(void)

void FUN_14742c5fc(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bd9fc(param_3,8);
  }
  _Src = (void *)*param_1;
  iVar4 = param_3 * 8;
  puVar2 = TlsGetValue(DAT_14ca954e4);
  uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
  lVar1 = uVar3 + 7;
  uVar3 = uVar3 ^ 0xfffffffffffffff8;
  _Dst = (void *)(*puVar2 + lVar1 & uVar3);
  uVar5 = (longlong)_Dst + (longlong)iVar4;
  if (puVar2[1] < uVar5) {
    FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
    _Dst = (void *)(lVar1 + *puVar2 & uVar3);
    uVar5 = (longlong)iVar4 + (longlong)_Dst;
  }
  *puVar2 = uVar5;
  *param_1 = _Dst;
  if (param_2 == 0 || _Src == (void *)0x0) {
    return;
  }
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  memcpy(_Dst,_Src,(longlong)param_2 << 3);
  return;
}



// FUNCTION 14742c6e0 FUN_14742c6e0 body=48 status=ok
// SIG undefined FUN_14742c6e0(void)

void FUN_14742c6e0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 2);
      return;
    }
  }
  return;
}



// FUNCTION 14742c710 FUN_14742c710 body=109 status=ok
// SIG undefined FUN_14742c710(void)

void FUN_14742c710(void *param_1,int param_2,uint param_3)

{
  void *_Dst;
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if (param_3 < 0x21) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742c4a0((longlong)param_1 + 0x80,param_2);
      return;
    }
    FUN_14742c4a0((longlong)param_1 + 0x80,0);
    _Dst = *(void **)((longlong)param_1 + 0x80);
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742c77e FUN_14742c77e body=38 status=ok
// SIG undefined FUN_14742c77e(void)

undefined8 FUN_14742c77e(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742c7a4 FUN_14742c7a4 body=14 status=ok
// SIG undefined FUN_14742c7a4(void)

void FUN_14742c7a4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14742c7b2 FUN_14742c7b2 body=14 status=ok
// SIG undefined FUN_14742c7b2(void)

void FUN_14742c7b2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14742c7c0 FUN_14742c7c0 body=48 status=ok
// SIG undefined FUN_14742c7c0(void)

void FUN_14742c7c0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x200),
              (longlong)*(int *)((longlong)param_1 + 0x208) << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14742c7f0 FUN_14742c7f0 body=109 status=ok
// SIG undefined FUN_14742c7f0(void)

void FUN_14742c7f0(void *param_1,int param_2,uint param_3)

{
  void *_Dst;
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if (param_3 < 0x41) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742c5fc((longlong)param_1 + 0x200,param_2);
      return;
    }
    FUN_14742c5fc((longlong)param_1 + 0x200,0);
    _Dst = *(void **)((longlong)param_1 + 0x200);
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 3);
  return;
}



// FUNCTION 14742c85e FUN_14742c85e body=79 status=ok
// SIG undefined FUN_14742c85e(void)

void FUN_14742c85e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14742c8ae(param_1,0);
  }
  FUN_14742c188(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14321444a(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14742c8ae FUN_14742c8ae body=20 status=ok
// SIG undefined FUN_14742c8ae(void)

void FUN_14742c8ae(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14742c8c2(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14742c8c2 FUN_14742c8c2 body=231 status=ok
// SIG undefined FUN_14742c8c2(void)

void FUN_14742c8c2(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14742c9aa FUN_14742c9aa body=79 status=ok
// SIG undefined FUN_14742c9aa(void)

void FUN_14742c9aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14742c9fa(param_1,0);
  }
  FUN_14742c188(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14321444a(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14742c9fa FUN_14742c9fa body=20 status=ok
// SIG undefined FUN_14742c9fa(void)

void FUN_14742c9fa(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14742ca0e(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14742ca0e FUN_14742ca0e body=231 status=ok
// SIG undefined FUN_14742ca0e(void)

void FUN_14742ca0e(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14742caf6 FUN_14742caf6 body=118 status=ok
// SIG undefined FUN_14742caf6(void)

void FUN_14742caf6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    do {
      cVar2 = FUN_14742cb6c(lVar3,param_2);
      if (cVar2 == '\0') {
        return;
      }
      lVar1 = *(longlong *)(param_1 + 0x28);
      FUN_14742cd1a(param_1 + 0x30,lVar1 + 0x30);
      if (*(longlong *)(param_1 + 0x20) == lVar1) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      lVar3 = *(longlong *)(lVar1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar3;
      if (lVar1 != 0) {
        FUN_14742ccc2(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14742cb6c FUN_14742cb6c body=341 status=ok
// SIG undefined FUN_14742cb6c(void)

ulonglong FUN_14742cb6c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    unaff_RDI = (longlong *)(param_1 + 0x20);
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0xa0) & 1) == 0) {
      if ((char)param_2 == '\0') {
LAB_14742cc97:
        uVar7 = 0;
        goto LAB_14742cc99;
      }
      FUN_1431eb6a8(unaff_RDI);
    }
    puVar2 = (undefined8 *)*unaff_RDI;
    if (puVar2 != (undefined8 *)0x0) {
      *unaff_RDI = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (iVar5 < iVar4) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x28 + (longlong)iVar5 * 0x30) == '\x01') {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x30);
        local_58 = 0xffffffff;
        cVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,plVar8[1],&local_48,param_2);
        if (cVar3 == '\0') goto LAB_14742cc97;
        local_58 = 0xffffffff;
        cVar3 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,plVar8[3],&local_50,param_2);
        if (cVar3 == '\0') goto LAB_14742cc97;
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar6 = param_1 + 0x30;
        }
        plVar8 = (longlong *)(lVar6 + (longlong)*(int *)(*plVar8 + 100) * 8);
        *plVar8 = *plVar8 + (local_50 - local_48);
        iVar4 = *(int *)(param_1 + 0x10);
        iVar5 = *(int *)(param_1 + 0x18);
      }
      iVar5 = iVar5 + 1;
      *(int *)(param_1 + 0x18) = iVar5;
    } while (iVar5 < iVar4);
  }
LAB_14742cc99:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14742ccc2 FUN_14742ccc2 body=88 status=ok
// SIG undefined FUN_14742ccc2(void)

void FUN_14742ccc2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14742ce83(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14742cd1a FUN_14742cd1a body=122 status=ok
// SIG undefined FUN_14742cd1a(void)

void * FUN_14742cd1a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
    }
    else {
      FUN_14742cd94(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14742cd94 FUN_14742cd94 body=98 status=ok
// SIG undefined FUN_14742cd94(void)

void FUN_14742cd94(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14742cdf6(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 14742cdf6 FUN_14742cdf6 body=141 status=ok
// SIG undefined FUN_14742cdf6(void)

void FUN_14742cdf6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14742ce83 FUN_14742ce83 body=51 status=ok
// SIG undefined FUN_14742ce83(void)

void FUN_14742ce83(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1449cc82a(param_1);
      FUN_1449cc82a(param_1 + -0x10);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14742ceb6 FUN_14742ceb6 body=119 status=ok
// SIG undefined FUN_14742ceb6(void)

void FUN_14742ceb6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14742cdf6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14742cf2e FUN_14742cf2e body=67 status=ok
// SIG undefined FUN_14742cf2e(void)

void FUN_14742cf2e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14742cf72(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_14742cdf6(param_1,*(undefined4 *)(param_1 + 0x88),iVar1);
  return;
}



// FUNCTION 14742cf72 FUN_14742cf72 body=108 status=ok
// SIG undefined FUN_14742cf72(void)

ulonglong FUN_14742cf72(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14742cfde FUN_14742cfde body=116 status=ok
// SIG undefined FUN_14742cfde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14742cfde(undefined *param_1)

{
  int iVar1;
  undefined *_Dst;
  undefined *_Src;
  
  if (param_1 != &DAT_14ca956e8) {
    _Src = *(undefined **)(param_1 + 0x10);
    if (*(undefined **)(param_1 + 0x10) == (undefined *)0x0) {
      _Src = param_1;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    _DAT_14ca95700 = iVar1;
    if (iVar1 == 0 && DAT_14ca95704 == 0) {
      DAT_14ca95704 = 0x10;
    }
    else {
      FUN_14742d052(iVar1);
      if (iVar1 != 0) {
        _Dst = &DAT_14ca956e8;
        if (DAT_14ca956f8 != (undefined *)0x0) {
          _Dst = DAT_14ca956f8;
        }
        memcpy(_Dst,_Src,(longlong)iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14742d052 FUN_14742d052 body=94 status=ok
// SIG undefined FUN_14742d052(void)

void FUN_14742d052(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0x10;
    if (0x10 < param_1) {
      iVar1 = FUN_144a3809e((longlong)(int)param_1,0);
      iVar2 = 0x7fffffff;
      if ((int)param_1 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (param_2 < iVar2) {
    FUN_14742d0b0(&DAT_14ca956e8,0,iVar2,1);
    param_2 = iVar2;
  }
  DAT_14ca95704 = param_2;
  return;
}



// FUNCTION 14742d0b0 FUN_14742d0b0 body=129 status=ok
// SIG undefined FUN_14742d0b0(void)

void FUN_14742d0b0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14742d132 FUN_14742d132 body=103 status=ok
// SIG undefined FUN_14742d132(void)

undefined8 FUN_14742d132(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x30)) {
    uVar4 = uVar2 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar3;
}



// FUNCTION 14742d19a FUN_14742d19a body=147 status=ok
// SIG undefined FUN_14742d19a(void)

void FUN_14742d19a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14742d234 FUN_14742d234 body=52 status=ok
// SIG undefined FUN_14742d234(void)

undefined8 * FUN_14742d234(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a38c150;
  FUN_1449b67f0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742d27e FUN_14742d27e body=147 status=ok
// SIG undefined FUN_14742d27e(void)

void FUN_14742d27e(longlong param_1,int param_2)

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



// FUNCTION 14742d312 FUN_14742d312 body=229 status=ok
// SIG undefined FUN_14742d312(void)

void FUN_14742d312(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,8);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 8;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 14742d3f8 FUN_14742d3f8 body=78 status=ok
// SIG undefined FUN_14742d3f8(void)

void FUN_14742d3f8(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x1ffffffffffff800U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_14742d312(param_1,iVar1,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14742d446 FUN_14742d446 body=31 status=ok
// SIG undefined FUN_14742d446(void)

undefined8 FUN_14742d446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742d482 FUN_14742d482 body=93 status=ok
// SIG undefined FUN_14742d482(void)

void FUN_14742d482(longlong param_1,longlong *param_2)

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



// FUNCTION 14742d4e0 FUN_14742d4e0 body=126 status=ok
// SIG undefined FUN_14742d4e0(void)

void FUN_14742d4e0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a38b610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014742d54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14742d55e FUN_14742d55e body=21 status=ok
// SIG undefined FUN_14742d55e(void)

undefined8 FUN_14742d55e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14742d574 FUN_14742d574 body=340 status=ok
// SIG undefined FUN_14742d574(void)

undefined4 *
FUN_14742d574(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14742d6ca(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_48 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar2;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_68 = param_4;
  cVar5 = FUN_14742d7b0(param_1,uVar6,local_48,&local_54);
  uVar2 = local_54;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14742d8ba(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742d6ca FUN_14742d6ca body=229 status=ok
// SIG undefined FUN_14742d6ca(void)

int * FUN_14742d6ca(longlong *param_1,int *param_2)

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



// FUNCTION 14742d7b0 FUN_14742d7b0 body=151 status=ok
// SIG undefined FUN_14742d7b0(void)

void FUN_14742d7b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14742d848((int)lVar4,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_14742d81b;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_14742d81b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14742d848 FUN_14742d848 body=114 status=ok
// SIG undefined FUN_14742d848(void)

void FUN_14742d848(longlong *param_1,int param_2)

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



// FUNCTION 14742d8ba FUN_14742d8ba body=477 status=ok
// SIG undefined FUN_14742d8ba(void)

void FUN_14742d8ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14742da98 FUN_14742da98 body=245 status=ok
// SIG undefined FUN_14742da98(void)

void FUN_14742da98(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  if (DAT_14ca95240 != DAT_14ca9526c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14ca95270;
    if (DAT_14ca95278 != (undefined *)0x0) {
      puVar5 = DAT_14ca95278;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14ca95280 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14ca95238 + 0x18)) {
      if (*(ulonglong *)(DAT_14ca95238 + (longlong)iVar1 * 0x20) == param_1) {
        puVar5 = &DAT_14ca95270;
        if (DAT_14ca95278 != (undefined *)0x0) {
          puVar5 = DAT_14ca95278;
        }
        lVar6 = (longlong)*(int *)(DAT_14ca95238 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar5 + lVar6 * 4);
        if (iVar4 == iVar1) {
          puVar3 = (undefined4 *)(puVar5 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14ca95238 + 0x18 + lVar6 * 0x20);
          } while (iVar4 != iVar1);
          puVar3 = (undefined4 *)(DAT_14ca95238 + lVar6 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14ca95238 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_14742d848(&DAT_14ca95238);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14742db8e FUN_14742db8e body=48 status=ok
// SIG undefined FUN_14742db8e(void)

void FUN_14742db8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14742dbbe FUN_14742dbbe body=67 status=ok
// SIG undefined FUN_14742dbbe(void)

void FUN_14742dbbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14742de7a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  FUN_14471858a(lVar2 + (longlong)iVar1 * 4,1);
  return;
}



// FUNCTION 14742dc02 FUN_14742dc02 body=266 status=ok
// SIG undefined FUN_14742dc02(void)

void FUN_14742dc02(void *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Dst;
  void *_Src;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742bf82((longlong)param_1 + 8,param_2,param_3);
      return;
    }
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,4);
    }
    iVar3 = param_3 * 4;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar4);
    uVar5 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar3 + (uint)(0xf < iVar3) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar4);
      uVar5 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *(void **)((longlong)param_1 + 8) = _Dst;
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742dd0c FUN_14742dd0c body=98 status=ok
// SIG undefined FUN_14742dd0c(void)

void FUN_14742dd0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  FUN_14742dc02();
  return;
}



// FUNCTION 14742dd70 FUN_14742dd70 body=266 status=ok
// SIG undefined FUN_14742dd70(void)

void FUN_14742dd70(void *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Dst;
  void *_Src;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    _Dst = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
  }
  else {
    if (_Src != (void *)0x0) {
      FUN_14742c3bc((longlong)param_1 + 8,param_2,param_3);
      return;
    }
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,4);
    }
    iVar3 = param_3 * 4;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar4);
    uVar5 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar3 + (uint)(0xf < iVar3) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar4);
      uVar5 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *(void **)((longlong)param_1 + 8) = _Dst;
    _Src = param_1;
  }
  memmove(_Dst,_Src,(longlong)param_2 << 2);
  return;
}



// FUNCTION 14742de7a FUN_14742de7a body=98 status=ok
// SIG undefined FUN_14742de7a(void)

void FUN_14742de7a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  FUN_14742dd70();
  return;
}



// FUNCTION 14742dede FUN_14742dede body=132 status=ok
// SIG undefined FUN_14742dede(void)

void FUN_14742dede(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_140047396((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_140047396((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 14742df62 FUN_14742df62 body=98 status=ok
// SIG undefined FUN_14742df62(void)

void FUN_14742df62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  FUN_14742dede();
  return;
}



// FUNCTION 14742dfc6 FUN_14742dfc6 body=125 status=ok
// SIG undefined FUN_14742dfc6(void)

void FUN_14742dfc6(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 2);
      FUN_1400471d4((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_1400471d4((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  return;
}


