// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1471754fc FUN_1471754fc body=138 status=ok
// SIG undefined FUN_1471754fc(void)

code * FUN_1471754fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairDistanceThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x274000000ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175586;
}



// FUNCTION 147175586 FUN_147175586 body=138 status=ok
// SIG undefined FUN_147175586(void)

code * FUN_147175586(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransmissionDensityScaleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x270000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175610;
}



// FUNCTION 147175610 FUN_147175610 body=138 status=ok
// SIG undefined FUN_147175610(void)

code * FUN_147175610(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairDualScatteringRoughnessOverride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26c000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f42930;
}



// FUNCTION 14717569a FUN_14717569a body=138 status=ok
// SIG undefined FUN_14717569a(void)

code * FUN_14717569a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bDynamicSkyLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x260000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c8a7a;
}



// FUNCTION 147175724 FUN_147175724 body=138 status=ok
// SIG undefined FUN_147175724(void)

code * FUN_147175724(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_SampleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000014d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfc38c;
}



// FUNCTION 1471757ae FUN_1471757ae body=138 status=ok
// SIG undefined FUN_1471757ae(void)

code * FUN_1471757ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_ShadingPointBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000014b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfc304;
}



// FUNCTION 147175838 FUN_147175838 body=132 status=ok
// SIG undefined FUN_147175838(void)

undefined1 * FUN_147175838(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Debug_MaxShadingPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x149;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dfc300;
}



// FUNCTION 1471758c0 FUN_1471758c0 body=138 status=ok
// SIG undefined FUN_1471758c0(void)

code * FUN_1471758c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ApplyBentNormalAO";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c8dca;
}



// FUNCTION 14717594e FUN_14717594e body=137 status=ok
// SIG undefined FUN_14717594e(void)

undefined4 * FUN_14717594e(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 1);
  bVar2 = *(byte *)((longlong)param_3 + 5);
  bVar3 = *(byte *)((longlong)param_3 + 6);
  iVar4 = *param_3;
  FUN_145f424a8();
  FUN_1448e935e(param_2,&local_38,&DAT_14c9d1a90,
                ((uint)bVar1 * 4 + (uint)bVar2 * 8 | (uint)bVar3 << 4) + iVar4);
  FUN_145f424a8();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471759d8 FUN_1471759d8 body=394 status=ok
// SIG undefined FUN_1471759d8(void)

void FUN_1471759d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar2 = 0x11c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x17c);
  lVar2 = 0x17c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0xc);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1dc);
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0x4a] = 0;
  *(undefined1 (*) [16])(param_1 + 0x42) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x45) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x47) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 (*) [16])(param_1 + 0x52) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x29c) = (undefined1  [16])0x0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3f800000;
  *(undefined1 (*) [16])(param_1 + 0x56) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 1;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 99) = 1;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 1;
  param_1[0x66] = 0;
  lVar2 = 0x340;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar2) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x10) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x400);
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined2 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x86] = 0;
  return;
}



// FUNCTION 147175b62 FUN_147175b62 body=29 status=ok
// SIG undefined FUN_147175b62(void)

undefined8 FUN_147175b62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147175b80 FUN_147175b80 body=212 status=ok
// SIG undefined FUN_147175b80(void)

void FUN_147175b80(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
  lVar1 = 0xf0;
  do {
    *(undefined1 (*) [16])(param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1b0);
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1b0) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 147175c54 FUN_147175c54 body=29 status=ok
// SIG undefined FUN_147175c54(void)

undefined8 FUN_147175c54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147175c72 FUN_147175c72 body=138 status=ok
// SIG undefined FUN_147175c72(void)

code * FUN_147175c72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d800000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f42e12;
}



// FUNCTION 147175cfc FUN_147175cfc body=138 status=ok
// SIG undefined FUN_147175cfc(void)

code * FUN_147175cfc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullingIndirectBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dfbb6c;
}



// FUNCTION 147175d86 FUN_147175d86 body=138 status=ok
// SIG undefined FUN_147175d86(void)

code * FUN_147175d86(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointToCurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175e10;
}



// FUNCTION 147175e10 FUN_147175e10 body=138 status=ok
// SIG undefined FUN_147175e10(void)

code * FUN_147175e10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c918a;
}



// FUNCTION 147175e9a FUN_147175e9a body=138 status=ok
// SIG undefined FUN_147175e9a(void)

code * FUN_147175e9a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToTranslatedWorldPrimitiveTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471760c6;
}



// FUNCTION 147175f24 FUN_147175f24 body=138 status=ok
// SIG undefined FUN_147175f24(void)

code * FUN_147175f24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175fae;
}



// FUNCTION 147175fae FUN_147175fae body=138 status=ok
// SIG undefined FUN_147175fae(void)

code * FUN_147175fae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointAttributeChunkStrideInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd99a0;
}



// FUNCTION 147176038 FUN_147176038 body=138 status=ok
// SIG undefined FUN_147176038(void)

code * FUN_147176038(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeChunkElementCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd991c;
}



// FUNCTION 1471760c6 FUN_1471760c6 body=138 status=ok
// SIG undefined FUN_1471760c6(void)

code * FUN_1471760c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorldPrimitiveTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176150;
}



// FUNCTION 147176150 FUN_147176150 body=138 status=ok
// SIG undefined FUN_147176150(void)

code * FUN_147176150(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevPositionOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9322;
}



// FUNCTION 1471761da FUN_1471761da body=138 status=ok
// SIG undefined FUN_1471761da(void)

code * FUN_1471761da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bSimulation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176264;
}



// FUNCTION 147176264 FUN_147176264 body=138 status=ok
// SIG undefined FUN_147176264(void)

code * FUN_147176264(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Flags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471762ee;
}



// FUNCTION 1471762ee FUN_1471762ee body=138 status=ok
// SIG undefined FUN_1471762ee(void)

code * FUN_1471762ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RaytracingProceduralSplits";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176378;
}



// FUNCTION 147176378 FUN_147176378 body=138 status=ok
// SIG undefined FUN_147176378(void)

code * FUN_147176378(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176402;
}



// FUNCTION 147176402 FUN_147176402 body=138 status=ok
// SIG undefined FUN_147176402(void)

code * FUN_147176402(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717648c;
}



// FUNCTION 14717648c FUN_14717648c body=138 status=ok
// SIG undefined FUN_14717648c(void)

code * FUN_14717648c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176516;
}



// FUNCTION 147176516 FUN_147176516 body=138 status=ok
// SIG undefined FUN_147176516(void)

code * FUN_147176516(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroupIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471765a0;
}



// FUNCTION 1471765a0 FUN_1471765a0 body=138 status=ok
// SIG undefined FUN_1471765a0(void)

code * FUN_1471765a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RegisteredIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717662a;
}



// FUNCTION 14717662a FUN_14717662a body=138 status=ok
// SIG undefined FUN_14717662a(void)

code * FUN_14717662a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RaytracingRadiusScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cf5b0a;
}



// FUNCTION 1471766b4 FUN_1471766b4 body=138 status=ok
// SIG undefined FUN_1471766b4(void)

code * FUN_1471766b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Length";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717673e;
}



// FUNCTION 14717673e FUN_14717673e body=138 status=ok
// SIG undefined FUN_14717673e(void)

code * FUN_14717673e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TipScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471767c8;
}



// FUNCTION 1471767c8 FUN_1471767c8 body=138 status=ok
// SIG undefined FUN_1471767c8(void)

code * FUN_1471767c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RootScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176852;
}



// FUNCTION 147176852 FUN_147176852 body=138 status=ok
// SIG undefined FUN_147176852(void)

code * FUN_147176852(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Radius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cf5a86;
}



// FUNCTION 1471768e0 FUN_1471768e0 body=138 status=ok
// SIG undefined FUN_1471768e0(void)

code * FUN_1471768e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ControlPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717696a;
}



// FUNCTION 14717696a FUN_14717696a body=138 status=ok
// SIG undefined FUN_14717696a(void)

code * FUN_14717696a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairMaterialId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471769f4;
}



// FUNCTION 1471769f4 FUN_1471769f4 body=132 status=ok
// SIG undefined FUN_1471769f4(void)

undefined1 * FUN_1471769f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147176a78;
}



// FUNCTION 147176a7c FUN_147176a7c body=138 status=ok
// SIG undefined FUN_147176a7c(void)

code * FUN_147176a7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ControlPoints";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176b06;
}



// FUNCTION 147176b06 FUN_147176b06 body=138 status=ok
// SIG undefined FUN_147176b06(void)

code * FUN_147176b06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxControlPointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176b90;
}



// FUNCTION 147176b90 FUN_147176b90 body=138 status=ok
// SIG undefined FUN_147176b90(void)

code * FUN_147176b90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiusAtDepth1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c94ba;
}



// FUNCTION 147176c1a FUN_147176c1a body=138 status=ok
// SIG undefined FUN_147176c1a(void)

code * FUN_147176c1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumBinners";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d143d2;
}



// FUNCTION 147176ca4 FUN_147176ca4 body=138 status=ok
// SIG undefined FUN_147176ca4(void)

code * FUN_147176ca4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RasterTileRes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176d2e;
}



// FUNCTION 147176d2e FUN_147176d2e body=138 status=ok
// SIG undefined FUN_147176d2e(void)

code * FUN_147176d2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BinTileRes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176db8;
}



// FUNCTION 147176db8 FUN_147176db8 body=138 status=ok
// SIG undefined FUN_147176db8(void)

code * FUN_147176db8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolutionf";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d142c4;
}



// FUNCTION 147176e46 FUN_147176e46 body=138 status=ok
// SIG undefined FUN_147176e46(void)

code * FUN_147176e46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileBinningGridTex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c95d0;
}



// FUNCTION 147176ed0 FUN_147176ed0 body=138 status=ok
// SIG undefined FUN_147176ed0(void)

code * FUN_147176ed0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29700;
}



// FUNCTION 147176f5a FUN_147176f5a body=138 status=ok
// SIG undefined FUN_147176f5a(void)

code * FUN_147176f5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileDepthGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176fe4;
}



// FUNCTION 147176fe4 FUN_147176fe4 body=138 status=ok
// SIG undefined FUN_147176fe4(void)

code * FUN_147176fe4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileBinningGridMaxZ";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29788;
}



// FUNCTION 14717706e FUN_14717706e body=138 status=ok
// SIG undefined FUN_14717706e(void)

code * FUN_14717706e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTilePrimDepths";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471770f8;
}



// FUNCTION 1471770f8 FUN_1471770f8 body=138 status=ok
// SIG undefined FUN_1471770f8(void)

code * FUN_1471770f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTilePrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177182;
}



// FUNCTION 147177182 FUN_147177182 body=138 status=ok
// SIG undefined FUN_147177182(void)

code * FUN_147177182(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileBinningGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9660;
}



// FUNCTION 147177210 FUN_147177210 body=138 status=ok
// SIG undefined FUN_147177210(void)

code * FUN_147177210(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutWorkCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000000b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e821f2;
}



// FUNCTION 14717729a FUN_14717729a body=138 status=ok
// SIG undefined FUN_14717729a(void)

code * FUN_14717729a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e8227c;
}



// FUNCTION 147177324 FUN_147177324 body=138 status=ok
// SIG undefined FUN_147177324(void)

code * FUN_147177324(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471773ae;
}



// FUNCTION 1471773ae FUN_1471773ae body=138 status=ok
// SIG undefined FUN_1471773ae(void)

code * FUN_1471773ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177438;
}



// FUNCTION 147177438 FUN_147177438 body=138 status=ok
// SIG undefined FUN_147177438(void)

code * FUN_147177438(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InDepths";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471774c2;
}



// FUNCTION 1471774c2 FUN_1471774c2 body=138 status=ok
// SIG undefined FUN_1471774c2(void)

code * FUN_1471774c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717754c;
}



// FUNCTION 14717754c FUN_14717754c body=138 status=ok
// SIG undefined FUN_14717754c(void)

code * FUN_14717754c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9892;
}



// FUNCTION 1471775d6 FUN_1471775d6 body=138 status=ok
// SIG undefined FUN_1471775d6(void)

code * FUN_1471775d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWWorkCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177660;
}



// FUNCTION 147177660 FUN_147177660 body=138 status=ok
// SIG undefined FUN_147177660(void)

code * FUN_147177660(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSceneVelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9a3c;
}



// FUNCTION 1471776ea FUN_1471776ea body=138 status=ok
// SIG undefined FUN_1471776ea(void)

code * FUN_1471776ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutHairPixelCountPerTile_ForDebug";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177774;
}



// FUNCTION 147177774 FUN_147177774 body=138 status=ok
// SIG undefined FUN_147177774(void)

code * FUN_147177774(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutHairCountTexture_ForDebug";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000000e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471777fe;
}



// FUNCTION 1471777fe FUN_1471777fe body=138 status=ok
// SIG undefined FUN_1471777fe(void)

code * FUN_1471777fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177888;
}



// FUNCTION 147177888 FUN_147177888 body=138 status=ok
// SIG undefined FUN_147177888(void)

code * FUN_147177888(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileWorkCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000000e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177912;
}



// FUNCTION 147177912 FUN_147177912 body=138 status=ok
// SIG undefined FUN_147177912(void)

code * FUN_147177912(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileWork";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717799c;
}



// FUNCTION 14717799c FUN_14717799c body=138 status=ok
// SIG undefined FUN_14717799c(void)

code * FUN_14717799c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f43438;
}



// FUNCTION 147177a26 FUN_147177a26 body=138 status=ok
// SIG undefined FUN_147177a26(void)

code * FUN_147177a26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f43324;
}



// FUNCTION 147177ab0 FUN_147177ab0 body=138 status=ok
// SIG undefined FUN_147177ab0(void)

code * FUN_147177ab0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleLightingTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f433ae;
}



// FUNCTION 147177b3e FUN_147177b3e body=138 status=ok
// SIG undefined FUN_147177b3e(void)

code * FUN_147177b3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedVisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f439a4;
}



// FUNCTION 147177bc8 FUN_147177bc8 body=138 status=ok
// SIG undefined FUN_147177bc8(void)

code * FUN_147177bc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000011a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177c52;
}



// FUNCTION 147177c52 FUN_147177c52 body=138 status=ok
// SIG undefined FUN_147177c52(void)

code * FUN_147177c52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairPixelCountPerTile_ForDebug";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f43a2e;
}



// FUNCTION 147177cdc FUN_147177cdc body=138 status=ok
// SIG undefined FUN_147177cdc(void)

code * FUN_147177cdc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUAllocatedTileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5400000116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177d66;
}



// FUNCTION 147177d66 FUN_147177d66 body=138 status=ok
// SIG undefined FUN_147177d66(void)

code * FUN_147177d66(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000115;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9cf6;
}



// FUNCTION 147177df4 FUN_147177df4 body=138 status=ok
// SIG undefined FUN_147177df4(void)

code * FUN_147177df4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177e7e;
}



// FUNCTION 147177e7e FUN_147177e7e body=138 status=ok
// SIG undefined FUN_147177e7e(void)

code * FUN_147177e7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleCountScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177f08;
}



// FUNCTION 147177f08 FUN_147177f08 body=138 status=ok
// SIG undefined FUN_147177f08(void)

code * FUN_147177f08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ThetaCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dcefb4;
}



// FUNCTION 147177f92 FUN_147177f92 body=31 status=ok
// SIG undefined FUN_147177f92(void)

undefined8 FUN_147177f92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147177fb1 FUN_147177fb1 body=177 status=ok
// SIG undefined FUN_147177fb1(void)

void FUN_147177fb1(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e50d36();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d4b58,param_4);
  local_78 = &DAT_14c9d4b58;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14717830e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147178064 FUN_147178064 body=29 status=ok
// SIG undefined FUN_147178064(void)

undefined8 FUN_147178064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147178082 FUN_147178082 body=258 status=ok
// SIG undefined FUN_147178082(void)

void FUN_147178082(void)

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
              0x110) < DAT_14c9d4c60) {
    FUN_144b3d300(&DAT_14c9d4c60);
    if (DAT_14c9d4c60 == -1) {
      FUN_147178186(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FUploadParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x10a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4be0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4eb85);
      _Init_thread_footer(&DAT_14c9d4c60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147178186 FUN_147178186 body=226 status=ok
// SIG undefined FUN_147178186(void)

longlong * FUN_147178186(longlong *param_1)

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
  pcVar13 = FUN_14717826a;
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



// FUNCTION 14717826a FUN_14717826a body=130 status=ok
// SIG undefined FUN_14717826a(void)

undefined1 * FUN_14717826a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UploadBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471782ec;
}



// FUNCTION 1471782f0 FUN_1471782f0 body=29 status=ok
// SIG undefined FUN_1471782f0(void)

undefined8 FUN_1471782f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717830e FUN_14717830e body=384 status=ok
// SIG undefined FUN_14717830e(void)

void FUN_14717830e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  uVar14 = (undefined4)CONCAT62(uVar15,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x14);
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
  local_50 = DAT_14c9d4ba0;
  if (DAT_14c9d4ba0 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4ba0 + 8) = *(int *)(DAT_14c9d4ba0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4b58;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222170;
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



// FUNCTION 147178490 FUN_147178490 body=38 status=ok
// SIG undefined FUN_147178490(void)

undefined8 FUN_147178490(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471784b6 FUN_1471784b6 body=163 status=ok
// SIG undefined FUN_1471784b6(void)

void FUN_1471784b6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c4ed74();
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
  FUN_142c4ee5c(param_1,param_2);
  return;
}



// FUNCTION 147178559 FUN_147178559 body=374 status=ok
// SIG undefined FUN_147178559(void)

void FUN_147178559(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1471786d0 FUN_1471786d0 body=85 status=ok
// SIG undefined FUN_1471786d0(void)

undefined8 * FUN_1471786d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14a222c38;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147178726 FUN_147178726 body=138 status=ok
// SIG undefined FUN_147178726(void)

code * FUN_147178726(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471787b0;
}



// FUNCTION 1471787b0 FUN_1471787b0 body=138 status=ok
// SIG undefined FUN_1471787b0(void)

code * FUN_1471787b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneFrameNumber";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717883a;
}



// FUNCTION 14717883a FUN_14717883a body=138 status=ok
// SIG undefined FUN_14717883a(void)

code * FUN_14717883a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceDataSOAStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145712de2;
}



// FUNCTION 1471788c4 FUN_1471788c4 body=138 status=ok
// SIG undefined FUN_1471788c4(void)

code * FUN_1471788c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneLightmapData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145712e6a;
}



// FUNCTION 14717894e FUN_14717894e body=132 status=ok
// SIG undefined FUN_14717894e(void)

undefined1 * FUN_14717894e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstanceSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471789d2;
}



// FUNCTION 1471789d6 FUN_1471789d6 body=87 status=ok
// SIG undefined FUN_1471789d6(void)

void FUN_1471789d6(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e(param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 147178a2e FUN_147178a2e body=98 status=ok
// SIG undefined FUN_147178a2e(void)

void FUN_147178a2e(longlong param_1,int param_2)

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
  FUN_147178a92();
  return;
}



// FUNCTION 147178a92 FUN_147178a92 body=124 status=ok
// SIG undefined FUN_147178a92(void)

void FUN_147178a92(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_142c4fe26((longlong)param_1 + 8,0);
      return;
    }
  }
  else {
    FUN_142c4fe26((longlong)param_1 + 8,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 147178b0e FUN_147178b0e body=75 status=ok
// SIG undefined FUN_147178b0e(void)

void FUN_147178b0e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x1ffffffffffff800U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_140149cb8();
      return;
    }
  }
  return;
}



// FUNCTION 147178b5a FUN_147178b5a body=98 status=ok
// SIG undefined FUN_147178b5a(void)

void FUN_147178b5a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc08);
  if (param_2 <= (int)uVar1) {
    uVar2 = 0x100;
    if (0x100 < uVar1) {
      uVar3 = uVar1;
      if (0x100 < *(uint *)(param_1 + 0xc0c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0xc0c) = uVar2;
    FUN_1401916ce();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147178bbe FUN_147178bbe body=127 status=ok
// SIG undefined FUN_147178bbe(void)

void FUN_147178bbe(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_147178df2(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147178c3e FUN_147178c3e body=72 status=ok
// SIG undefined FUN_147178c3e(void)

void FUN_147178c3e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_147178df2(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147178c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147178c86 FUN_147178c86 body=119 status=ok
// SIG undefined FUN_147178c86(void)

void FUN_147178c86(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147178cfe(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1 + 0x40);
  do {
    puVar2[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar2[-2] = 0;
    puVar2[-1] = 0xe800000000000020;
    *puVar2 = 0xffffffffffffffff;
    puVar2 = puVar2 + 9;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 147178cfe FUN_147178cfe body=85 status=ok
// SIG undefined FUN_147178cfe(void)

void FUN_147178cfe(longlong param_1,int param_2)

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
  FUN_142c5051c();
  return;
}



// FUNCTION 147178d54 FUN_147178d54 body=110 status=ok
// SIG undefined FUN_147178d54(void)

void FUN_147178d54(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a222420;
  lVar1 = param_1[0xb];
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0xc) != 0) {
    lVar3 = 0;
    do {
      param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = param_1[0xb];
  }
  FUN_147178dc2(lVar1,uVar2,param_3);
  FUN_142c50788(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 147178dc2 FUN_147178dc2 body=47 status=ok
// SIG undefined FUN_147178dc2(void)

void FUN_147178dc2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147178df2 FUN_147178df2 body=184 status=ok
// SIG undefined FUN_147178df2(void)

void FUN_147178df2(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48;
  lVar5 = *param_1;
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined1 *)(lVar5 + 0x50);
  LOCK();
  *(undefined8 *)(lVar2 + 0x40) = 0xffffffffffffffff;
  UNLOCK();
  local_28 = *param_1;
  *param_1 = 0;
  local_1c = 0;
  local_20 = param_2;
  FUN_147178ec2(lVar2,uVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar4),&local_28);
  FUN_147178c3e(&local_28);
  LOCK();
  puVar1 = (ulonglong *)(lVar2 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar3 >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147178ec2 FUN_147178ec2 body=270 status=ok
// SIG undefined FUN_147178ec2(void)

void FUN_147178ec2(undefined8 *param_1,ulonglong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  uVar3 = (ulonglong)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_4;
  *param_4 = 0;
  local_3c = *(undefined1 *)((longlong)param_4 + 0xc);
  local_40 = *(undefined4 *)(param_4 + 1);
  (**(code **)(param_1[5] + 0x18))(param_1 + 5,param_1);
  param_1[5] = &PTR_FUN_14a222430;
  *param_1 = uVar2;
  local_48 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = local_3c;
  *(undefined4 *)(param_1 + 1) = local_40;
  FUN_147178c3e(&local_48);
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    uVar3 = 1;
    if ((char)param_3 != '\x06') {
      uVar3 = (ulonglong)(param_3 & 0xff);
    }
    uVar2 = 0;
  }
  else {
    if ((char)param_3 == '\x06') {
      uVar3 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  param_1[6] = uVar2;
  param_1[7] = uVar3 << 0x3b | (param_2 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147178fd2 FUN_147178fd2 body=95 status=ok
// SIG undefined FUN_147178fd2(void)

void FUN_147178fd2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a222430;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_142c50834(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 147179032 FUN_147179032 body=26 status=ok
// SIG undefined FUN_147179032(void)

undefined8 FUN_147179032(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c4ffe8(param_2,0);
  }
  return 0;
}



// FUNCTION 14717904c FUN_14717904c body=115 status=ok
// SIG undefined FUN_14717904c(void)

undefined8
FUN_14717904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_c;
  local_28 = &local_18;
  local_38 = param_1;
  local_30 = param_2;
  local_18 = param_3;
  local_c = param_4;
  if (param_5 != '\0') {
    FUN_142c4ffe8(param_3,0);
  }
  FUN_147179160(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471790f2 FUN_1471790f2 body=26 status=ok
// SIG undefined FUN_1471790f2(void)

undefined8 FUN_1471790f2(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c4ffe8(*param_2,0);
  }
  return 0;
}



// FUNCTION 14717910c FUN_14717910c body=70 status=ok
// SIG undefined FUN_14717910c(void)

undefined8
FUN_14717910c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142c4ffe8(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a222470;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 147179160 FUN_147179160 body=105 status=ok
// SIG undefined FUN_147179160(void)

void FUN_147179160(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar3 = *(undefined8 **)param_1[2];
  if (((ulonglong)puVar2 & 7) == 0 && 0xf < *(uint *)param_1[3]) {
    puVar2[5] = &PTR_FUN_14a222430;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    FUN_142c50834(puVar2 + 5);
  }
  *puVar1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
            TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1471791ca FUN_1471791ca body=127 status=ok
// SIG undefined FUN_1471791ca(void)

void FUN_1471791ca(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_1471793fe(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717924a FUN_14717924a body=72 status=ok
// SIG undefined FUN_14717924a(void)

void FUN_14717924a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_1471793fe(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147179276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147179292 FUN_147179292 body=119 status=ok
// SIG undefined FUN_147179292(void)

void FUN_147179292(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14717930a(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1 + 0x40);
  do {
    puVar2[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar2[-2] = 0;
    puVar2[-1] = 0xe800000000000020;
    *puVar2 = 0xffffffffffffffff;
    puVar2 = puVar2 + 9;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14717930a FUN_14717930a body=85 status=ok
// SIG undefined FUN_14717930a(void)

void FUN_14717930a(longlong param_1,int param_2)

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
  FUN_142c50eb2();
  return;
}



// FUNCTION 147179360 FUN_147179360 body=110 status=ok
// SIG undefined FUN_147179360(void)

void FUN_147179360(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2224a8;
  lVar1 = param_1[0xb];
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0xc) != 0) {
    lVar3 = 0;
    do {
      param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = param_1[0xb];
  }
  FUN_1471793ce(lVar1,uVar2,param_3);
  FUN_142c5111e(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 1471793ce FUN_1471793ce body=47 status=ok
// SIG undefined FUN_1471793ce(void)

void FUN_1471793ce(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1471793fe FUN_1471793fe body=184 status=ok
// SIG undefined FUN_1471793fe(void)

void FUN_1471793fe(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48;
  lVar5 = *param_1;
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined1 *)(lVar5 + 0x50);
  LOCK();
  *(undefined8 *)(lVar2 + 0x40) = 0xffffffffffffffff;
  UNLOCK();
  local_28 = *param_1;
  *param_1 = 0;
  local_1c = 0;
  local_20 = param_2;
  FUN_1471794ce(lVar2,uVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar4),&local_28);
  FUN_14717924a(&local_28);
  LOCK();
  puVar1 = (ulonglong *)(lVar2 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar3 >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471794ce FUN_1471794ce body=270 status=ok
// SIG undefined FUN_1471794ce(void)

void FUN_1471794ce(undefined8 *param_1,ulonglong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  uVar3 = (ulonglong)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_4;
  *param_4 = 0;
  local_3c = *(undefined1 *)((longlong)param_4 + 0xc);
  local_40 = *(undefined4 *)(param_4 + 1);
  (**(code **)(param_1[5] + 0x18))(param_1 + 5,param_1);
  param_1[5] = &PTR_FUN_14a2224b0;
  *param_1 = uVar2;
  local_48 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = local_3c;
  *(undefined4 *)(param_1 + 1) = local_40;
  FUN_14717924a(&local_48);
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    uVar3 = 1;
    if ((char)param_3 != '\x06') {
      uVar3 = (ulonglong)(param_3 & 0xff);
    }
    uVar2 = 0;
  }
  else {
    if ((char)param_3 == '\x06') {
      uVar3 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  param_1[6] = uVar2;
  param_1[7] = uVar3 << 0x3b | (param_2 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471795de FUN_1471795de body=95 status=ok
// SIG undefined FUN_1471795de(void)

void FUN_1471795de(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a2224b0;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_142c511ca(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14717963e FUN_14717963e body=26 status=ok
// SIG undefined FUN_14717963e(void)

undefined8 FUN_14717963e(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c50a58(param_2,0);
  }
  return 0;
}



// FUNCTION 147179658 FUN_147179658 body=115 status=ok
// SIG undefined FUN_147179658(void)

undefined8
FUN_147179658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_c;
  local_28 = &local_18;
  local_38 = param_1;
  local_30 = param_2;
  local_18 = param_3;
  local_c = param_4;
  if (param_5 != '\0') {
    FUN_142c50a58(param_3,0);
  }
  FUN_14717976c(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471796fe FUN_1471796fe body=26 status=ok
// SIG undefined FUN_1471796fe(void)

undefined8 FUN_1471796fe(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c50a58(*param_2,0);
  }
  return 0;
}



// FUNCTION 147179718 FUN_147179718 body=70 status=ok
// SIG undefined FUN_147179718(void)

undefined8
FUN_147179718(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142c50a58(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2224f0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14717976c FUN_14717976c body=105 status=ok
// SIG undefined FUN_14717976c(void)

void FUN_14717976c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar3 = *(undefined8 **)param_1[2];
  if (((ulonglong)puVar2 & 7) == 0 && 0xf < *(uint *)param_1[3]) {
    puVar2[5] = &PTR_FUN_14a2224b0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    FUN_142c511ca(puVar2 + 5);
  }
  *puVar1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
            TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1471797d6 FUN_1471797d6 body=38 status=ok
// SIG undefined FUN_1471797d6(void)

undefined8 FUN_1471797d6(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471797fc FUN_1471797fc body=84 status=ok
// SIG undefined FUN_1471797fc(void)

void FUN_1471797fc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x3ffffffffffff000U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_140064110(param_1,iVar1,iVar1,4);
      return;
    }
  }
  return;
}



// FUNCTION 147179850 FUN_147179850 body=127 status=ok
// SIG undefined FUN_147179850(void)

void FUN_147179850(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_147179a84(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471798d0 FUN_1471798d0 body=72 status=ok
// SIG undefined FUN_1471798d0(void)

void FUN_1471798d0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_147179a84(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001471798fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147179918 FUN_147179918 body=119 status=ok
// SIG undefined FUN_147179918(void)

void FUN_147179918(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147179990(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1 + 0x40);
  do {
    puVar2[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar2[-2] = 0;
    puVar2[-1] = 0xe800000000000020;
    *puVar2 = 0xffffffffffffffff;
    puVar2 = puVar2 + 9;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 147179990 FUN_147179990 body=85 status=ok
// SIG undefined FUN_147179990(void)

void FUN_147179990(longlong param_1,int param_2)

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
  FUN_142c51974();
  return;
}



// FUNCTION 1471799e6 FUN_1471799e6 body=110 status=ok
// SIG undefined FUN_1471799e6(void)

void FUN_1471799e6(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a222558;
  lVar1 = param_1[0xb];
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0xc) != 0) {
    lVar3 = 0;
    do {
      param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = param_1[0xb];
  }
  FUN_147179a54(lVar1,uVar2,param_3);
  FUN_142c51be0(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 147179a54 FUN_147179a54 body=47 status=ok
// SIG undefined FUN_147179a54(void)

void FUN_147179a54(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147179a84 FUN_147179a84 body=184 status=ok
// SIG undefined FUN_147179a84(void)

void FUN_147179a84(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48;
  lVar5 = *param_1;
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined1 *)(lVar5 + 0x50);
  LOCK();
  *(undefined8 *)(lVar2 + 0x40) = 0xffffffffffffffff;
  UNLOCK();
  local_28 = *param_1;
  *param_1 = 0;
  local_1c = 0;
  local_20 = param_2;
  FUN_147179b54(lVar2,uVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar4),&local_28);
  FUN_1471798d0(&local_28);
  LOCK();
  puVar1 = (ulonglong *)(lVar2 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar3 >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147179b54 FUN_147179b54 body=270 status=ok
// SIG undefined FUN_147179b54(void)

void FUN_147179b54(undefined8 *param_1,ulonglong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  uVar3 = (ulonglong)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_4;
  *param_4 = 0;
  local_3c = *(undefined1 *)((longlong)param_4 + 0xc);
  local_40 = *(undefined4 *)(param_4 + 1);
  (**(code **)(param_1[5] + 0x18))(param_1 + 5,param_1);
  param_1[5] = &PTR_FUN_14a222560;
  *param_1 = uVar2;
  local_48 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = local_3c;
  *(undefined4 *)(param_1 + 1) = local_40;
  FUN_1471798d0(&local_48);
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    uVar3 = 1;
    if ((char)param_3 != '\x06') {
      uVar3 = (ulonglong)(param_3 & 0xff);
    }
    uVar2 = 0;
  }
  else {
    if ((char)param_3 == '\x06') {
      uVar3 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  param_1[6] = uVar2;
  param_1[7] = uVar3 << 0x3b | (param_2 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147179c64 FUN_147179c64 body=95 status=ok
// SIG undefined FUN_147179c64(void)

void FUN_147179c64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a222560;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_142c51c8c(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 147179cc4 FUN_147179cc4 body=26 status=ok
// SIG undefined FUN_147179cc4(void)

undefined8 FUN_147179cc4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c5151a(param_2,0);
  }
  return 0;
}



// FUNCTION 147179cde FUN_147179cde body=115 status=ok
// SIG undefined FUN_147179cde(void)

undefined8
FUN_147179cde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_c;
  local_28 = &local_18;
  local_38 = param_1;
  local_30 = param_2;
  local_18 = param_3;
  local_c = param_4;
  if (param_5 != '\0') {
    FUN_142c5151a(param_3,0);
  }
  FUN_147179df2(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147179d84 FUN_147179d84 body=26 status=ok
// SIG undefined FUN_147179d84(void)

undefined8 FUN_147179d84(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c5151a(*param_2,0);
  }
  return 0;
}



// FUNCTION 147179d9e FUN_147179d9e body=70 status=ok
// SIG undefined FUN_147179d9e(void)

undefined8
FUN_147179d9e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142c5151a(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a2225a0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 147179df2 FUN_147179df2 body=105 status=ok
// SIG undefined FUN_147179df2(void)

void FUN_147179df2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar3 = *(undefined8 **)param_1[2];
  if (((ulonglong)puVar2 & 7) == 0 && 0xf < *(uint *)param_1[3]) {
    puVar2[5] = &PTR_FUN_14a222560;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    FUN_142c51c8c(puVar2 + 5);
  }
  *puVar1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
            TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 147179e5c FUN_147179e5c body=127 status=ok
// SIG undefined FUN_147179e5c(void)

void FUN_147179e5c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_14717a090(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147179edc FUN_147179edc body=72 status=ok
// SIG undefined FUN_147179edc(void)

void FUN_147179edc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_14717a090(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147179f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147179f24 FUN_147179f24 body=119 status=ok
// SIG undefined FUN_147179f24(void)

void FUN_147179f24(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147179f9c(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1 + 0x40);
  do {
    puVar2[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar2[-2] = 0;
    puVar2[-1] = 0xe800000000000020;
    *puVar2 = 0xffffffffffffffff;
    puVar2 = puVar2 + 9;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 147179f9c FUN_147179f9c body=85 status=ok
// SIG undefined FUN_147179f9c(void)

void FUN_147179f9c(longlong param_1,int param_2)

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
  FUN_142c54156();
  return;
}



// FUNCTION 147179ff2 FUN_147179ff2 body=110 status=ok
// SIG undefined FUN_147179ff2(void)

void FUN_147179ff2(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2225d8;
  lVar1 = param_1[0xb];
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0xc) != 0) {
    lVar3 = 0;
    do {
      param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar1 + 0x40 + lVar3);
      }
      lVar3 = lVar3 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = param_1[0xb];
  }
  FUN_14717a060(lVar1,uVar2,param_3);
  FUN_142c543c2(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 14717a060 FUN_14717a060 body=47 status=ok
// SIG undefined FUN_14717a060(void)

void FUN_14717a060(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14717a090 FUN_14717a090 body=184 status=ok
// SIG undefined FUN_14717a090(void)

void FUN_14717a090(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48;
  lVar5 = *param_1;
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  uVar4 = *(undefined1 *)(lVar5 + 0x50);
  LOCK();
  *(undefined8 *)(lVar2 + 0x40) = 0xffffffffffffffff;
  UNLOCK();
  local_28 = *param_1;
  *param_1 = 0;
  local_1c = 0;
  local_20 = param_2;
  FUN_14717a160(lVar2,uVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),uVar4),&local_28);
  FUN_147179edc(&local_28);
  LOCK();
  puVar1 = (ulonglong *)(lVar2 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar3 >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717a160 FUN_14717a160 body=270 status=ok
// SIG undefined FUN_14717a160(void)

void FUN_14717a160(undefined8 *param_1,ulonglong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  uVar3 = (ulonglong)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_4;
  *param_4 = 0;
  local_3c = *(undefined1 *)((longlong)param_4 + 0xc);
  local_40 = *(undefined4 *)(param_4 + 1);
  (**(code **)(param_1[5] + 0x18))(param_1 + 5,param_1);
  param_1[5] = &PTR_FUN_14a2225e0;
  *param_1 = uVar2;
  local_48 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = local_3c;
  *(undefined4 *)(param_1 + 1) = local_40;
  FUN_147179edc(&local_48);
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    uVar3 = 1;
    if ((char)param_3 != '\x06') {
      uVar3 = (ulonglong)(param_3 & 0xff);
    }
    uVar2 = 0;
  }
  else {
    if ((char)param_3 == '\x06') {
      uVar3 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  param_1[6] = uVar2;
  param_1[7] = uVar3 << 0x3b | (param_2 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717a270 FUN_14717a270 body=95 status=ok
// SIG undefined FUN_14717a270(void)

void FUN_14717a270(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_14a2225e0;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_142c5446e(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14717a2d0 FUN_14717a2d0 body=26 status=ok
// SIG undefined FUN_14717a2d0(void)

undefined8 FUN_14717a2d0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c51eb0(param_2,0);
  }
  return 0;
}



// FUNCTION 14717a2ea FUN_14717a2ea body=115 status=ok
// SIG undefined FUN_14717a2ea(void)

undefined8
FUN_14717a2ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_c;
  local_28 = &local_18;
  local_38 = param_1;
  local_30 = param_2;
  local_18 = param_3;
  local_c = param_4;
  if (param_5 != '\0') {
    FUN_142c51eb0(param_3,0);
  }
  FUN_14717a3fe(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717a390 FUN_14717a390 body=26 status=ok
// SIG undefined FUN_14717a390(void)

undefined8 FUN_14717a390(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142c51eb0(*param_2,0);
  }
  return 0;
}



// FUNCTION 14717a3aa FUN_14717a3aa body=70 status=ok
// SIG undefined FUN_14717a3aa(void)

undefined8
FUN_14717a3aa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142c51eb0(*param_3,0);
  }
  param_2[5] = &PTR_LAB_14a222620;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 14717a3fe FUN_14717a3fe body=105 status=ok
// SIG undefined FUN_14717a3fe(void)

void FUN_14717a3fe(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar3 = *(undefined8 **)param_1[2];
  if (((ulonglong)puVar2 & 7) == 0 && 0xf < *(uint *)param_1[3]) {
    puVar2[5] = &PTR_FUN_14a2225e0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    FUN_142c5446e(puVar2 + 5);
  }
  *puVar1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
            TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14717a468 FUN_14717a468 body=38 status=ok
// SIG undefined FUN_14717a468(void)

undefined8 FUN_14717a468(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717a48e FUN_14717a48e body=132 status=ok
// SIG undefined FUN_14717a48e(void)

void FUN_14717a48e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14717a514 FUN_14717a514 body=29 status=ok
// SIG undefined FUN_14717a514(void)

undefined8 FUN_14717a514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717a532 FUN_14717a532 body=384 status=ok
// SIG undefined FUN_14717a532(void)

void FUN_14717a532(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d3880;
  if (DAT_14c9d3880 != 0) {
    LOCK();
    *(int *)(DAT_14c9d3880 + 8) = *(int *)(DAT_14c9d3880 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d3838;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222690;
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



// FUNCTION 14717a6b4 FUN_14717a6b4 body=38 status=ok
// SIG undefined FUN_14717a6b4(void)

undefined8 FUN_14717a6b4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717a6da FUN_14717a6da body=163 status=ok
// SIG undefined FUN_14717a6da(void)

void FUN_14717a6da(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c54874();
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
  FUN_142c5495c(param_1,param_2);
  return;
}



// FUNCTION 14717a77d FUN_14717a77d body=374 status=ok
// SIG undefined FUN_14717a77d(void)

void FUN_14717a77d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717a8f4 FUN_14717a8f4 body=48 status=ok
// SIG undefined FUN_14717a8f4(void)

void FUN_14717a8f4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14717a924 FUN_14717a924 body=98 status=ok
// SIG undefined FUN_14717a924(void)

void FUN_14717a924(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    uVar2 = 0x80;
    if (0x80 < uVar1) {
      uVar3 = uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0x40c) = uVar2;
    FUN_1400f5bba();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14717a988 FUN_14717a988 body=38 status=ok
// SIG undefined FUN_14717a988(void)

undefined8 FUN_14717a988(undefined8 param_1,int param_2)

{
  FUN_1462c5fb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717a9b4 FUN_14717a9b4 body=38 status=ok
// SIG undefined FUN_14717a9b4(void)

undefined8 FUN_14717a9b4(undefined8 param_1,int param_2)

{
  FUN_1462c5ff8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717a9e0 FUN_14717a9e0 body=38 status=ok
// SIG undefined FUN_14717a9e0(void)

undefined8 FUN_14717a9e0(undefined8 param_1,int param_2)

{
  FUN_1462c6040();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aa0c FUN_14717aa0c body=38 status=ok
// SIG undefined FUN_14717aa0c(void)

undefined8 FUN_14717aa0c(undefined8 param_1,int param_2)

{
  FUN_1462c6088();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aa38 FUN_14717aa38 body=38 status=ok
// SIG undefined FUN_14717aa38(void)

undefined8 FUN_14717aa38(undefined8 param_1,int param_2)

{
  FUN_1462c60d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aa64 FUN_14717aa64 body=38 status=ok
// SIG undefined FUN_14717aa64(void)

undefined8 FUN_14717aa64(undefined8 param_1,int param_2)

{
  FUN_1462c6118();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aa90 FUN_14717aa90 body=29 status=ok
// SIG undefined FUN_14717aa90(void)

undefined8 FUN_14717aa90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aaae FUN_14717aaae body=38 status=ok
// SIG undefined FUN_14717aaae(void)

undefined8 FUN_14717aaae(undefined8 param_1,int param_2)

{
  FUN_1462c6160();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717aada FUN_14717aada body=38 status=ok
// SIG undefined FUN_14717aada(void)

undefined8 FUN_14717aada(undefined8 param_1,int param_2)

{
  FUN_1462c61a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717ab34 FUN_14717ab34 body=31 status=ok
// SIG undefined FUN_14717ab34(void)

void FUN_14717ab34(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_142c55812(param_1,*(undefined4 *)(param_1 + 8),0,0x88);
    return;
  }
  return;
}



// FUNCTION 14717ab54 FUN_14717ab54 body=93 status=ok
// SIG undefined FUN_14717ab54(void)

void FUN_14717ab54(longlong param_1,int param_2)

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
  FUN_142c55812();
  return;
}



// FUNCTION 14717abb2 FUN_14717abb2 body=29 status=ok
// SIG undefined FUN_14717abb2(void)

undefined8 FUN_14717abb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717abd0 FUN_14717abd0 body=384 status=ok
// SIG undefined FUN_14717abd0(void)

void FUN_14717abd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d44b8;
  if (DAT_14c9d44b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9d44b8 + 8) = *(int *)(DAT_14c9d44b8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4470;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222820;
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



// FUNCTION 14717ad52 FUN_14717ad52 body=38 status=ok
// SIG undefined FUN_14717ad52(void)

undefined8 FUN_14717ad52(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717ad78 FUN_14717ad78 body=163 status=ok
// SIG undefined FUN_14717ad78(void)

void FUN_14717ad78(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c55d8a();
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
  FUN_142c55e72(param_1,param_2);
  return;
}



// FUNCTION 14717ae1b FUN_14717ae1b body=374 status=ok
// SIG undefined FUN_14717ae1b(void)

void FUN_14717ae1b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717af92 FUN_14717af92 body=163 status=ok
// SIG undefined FUN_14717af92(void)

void FUN_14717af92(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 8;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 14717b036 FUN_14717b036 body=29 status=ok
// SIG undefined FUN_14717b036(void)

undefined8 FUN_14717b036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b054 FUN_14717b054 body=29 status=ok
// SIG undefined FUN_14717b054(void)

undefined8 FUN_14717b054(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b072 FUN_14717b072 body=221 status=ok
// SIG undefined FUN_14717b072(void)

undefined8 *
FUN_14717b072(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar4;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  lVar5 = FUN_145fcfb38();
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar5;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a222840;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 14717b150 FUN_14717b150 body=38 status=ok
// SIG undefined FUN_14717b150(void)

undefined8 FUN_14717b150(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b176 FUN_14717b176 body=38 status=ok
// SIG undefined FUN_14717b176(void)

undefined8 FUN_14717b176(undefined8 param_1,int param_2)

{
  FUN_1462c61f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b1a2 FUN_14717b1a2 body=38 status=ok
// SIG undefined FUN_14717b1a2(void)

undefined8 FUN_14717b1a2(undefined8 param_1,int param_2)

{
  FUN_1462c6238();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b1ce FUN_14717b1ce body=29 status=ok
// SIG undefined FUN_14717b1ce(void)

undefined8 FUN_14717b1ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b1ec FUN_14717b1ec body=384 status=ok
// SIG undefined FUN_14717b1ec(void)

void FUN_14717b1ec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d4760;
  if (DAT_14c9d4760 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4760 + 8) = *(int *)(DAT_14c9d4760 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4718;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222890;
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



// FUNCTION 14717b36e FUN_14717b36e body=38 status=ok
// SIG undefined FUN_14717b36e(void)

undefined8 FUN_14717b36e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b394 FUN_14717b394 body=163 status=ok
// SIG undefined FUN_14717b394(void)

void FUN_14717b394(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c560a6();
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
  FUN_142c5618e(param_1,param_2);
  return;
}



// FUNCTION 14717b437 FUN_14717b437 body=374 status=ok
// SIG undefined FUN_14717b437(void)

void FUN_14717b437(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717b5ae FUN_14717b5ae body=29 status=ok
// SIG undefined FUN_14717b5ae(void)

undefined8 FUN_14717b5ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b5cc FUN_14717b5cc body=384 status=ok
// SIG undefined FUN_14717b5cc(void)

void FUN_14717b5cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d47e8;
  if (DAT_14c9d47e8 != 0) {
    LOCK();
    *(int *)(DAT_14c9d47e8 + 8) = *(int *)(DAT_14c9d47e8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d47a0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2228b0;
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



// FUNCTION 14717b74e FUN_14717b74e body=38 status=ok
// SIG undefined FUN_14717b74e(void)

undefined8 FUN_14717b74e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b774 FUN_14717b774 body=163 status=ok
// SIG undefined FUN_14717b774(void)

void FUN_14717b774(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c563c2();
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
  FUN_142c564aa(param_1,param_2);
  return;
}



// FUNCTION 14717b817 FUN_14717b817 body=374 status=ok
// SIG undefined FUN_14717b817(void)

void FUN_14717b817(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717b98e FUN_14717b98e body=29 status=ok
// SIG undefined FUN_14717b98e(void)

undefined8 FUN_14717b98e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717b9ac FUN_14717b9ac body=384 status=ok
// SIG undefined FUN_14717b9ac(void)

void FUN_14717b9ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d48f8;
  if (DAT_14c9d48f8 != 0) {
    LOCK();
    *(int *)(DAT_14c9d48f8 + 8) = *(int *)(DAT_14c9d48f8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d48b0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2228d0;
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



// FUNCTION 14717bb2e FUN_14717bb2e body=38 status=ok
// SIG undefined FUN_14717bb2e(void)

undefined8 FUN_14717bb2e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717bb54 FUN_14717bb54 body=163 status=ok
// SIG undefined FUN_14717bb54(void)

void FUN_14717bb54(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c566de();
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
  FUN_142c567c6(param_1,param_2);
  return;
}



// FUNCTION 14717bbf7 FUN_14717bbf7 body=374 status=ok
// SIG undefined FUN_14717bbf7(void)

void FUN_14717bbf7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717bd6e FUN_14717bd6e body=29 status=ok
// SIG undefined FUN_14717bd6e(void)

undefined8 FUN_14717bd6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717bd8c FUN_14717bd8c body=384 status=ok
// SIG undefined FUN_14717bd8c(void)

void FUN_14717bd8c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d4980;
  if (DAT_14c9d4980 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4980 + 8) = *(int *)(DAT_14c9d4980 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4938;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2228f0;
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



// FUNCTION 14717bf0e FUN_14717bf0e body=38 status=ok
// SIG undefined FUN_14717bf0e(void)

undefined8 FUN_14717bf0e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717bf34 FUN_14717bf34 body=163 status=ok
// SIG undefined FUN_14717bf34(void)

void FUN_14717bf34(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c569fa();
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
  FUN_142c56ae2(param_1,param_2);
  return;
}



// FUNCTION 14717bfd7 FUN_14717bfd7 body=374 status=ok
// SIG undefined FUN_14717bfd7(void)

void FUN_14717bfd7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717c14e FUN_14717c14e body=29 status=ok
// SIG undefined FUN_14717c14e(void)

undefined8 FUN_14717c14e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717c16c FUN_14717c16c body=384 status=ok
// SIG undefined FUN_14717c16c(void)

void FUN_14717c16c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d4a08;
  if (DAT_14c9d4a08 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4a08 + 8) = *(int *)(DAT_14c9d4a08 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d49c0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222910;
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



// FUNCTION 14717c2ee FUN_14717c2ee body=38 status=ok
// SIG undefined FUN_14717c2ee(void)

undefined8 FUN_14717c2ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717c314 FUN_14717c314 body=163 status=ok
// SIG undefined FUN_14717c314(void)

void FUN_14717c314(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c56d16();
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
  FUN_142c56dfe(param_1,param_2);
  return;
}



// FUNCTION 14717c3b7 FUN_14717c3b7 body=374 status=ok
// SIG undefined FUN_14717c3b7(void)

void FUN_14717c3b7(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717c52e FUN_14717c52e body=29 status=ok
// SIG undefined FUN_14717c52e(void)

undefined8 FUN_14717c52e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717c54c FUN_14717c54c body=384 status=ok
// SIG undefined FUN_14717c54c(void)

void FUN_14717c54c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14c9d4a90;
  if (DAT_14c9d4a90 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4a90 + 8) = *(int *)(DAT_14c9d4a90 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4a48;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a222930;
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



// FUNCTION 14717c6ce FUN_14717c6ce body=38 status=ok
// SIG undefined FUN_14717c6ce(void)

undefined8 FUN_14717c6ce(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14717c6f4 FUN_14717c6f4 body=163 status=ok
// SIG undefined FUN_14717c6f4(void)

void FUN_14717c6f4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c57032();
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
  FUN_142c5711a(param_1,param_2);
  return;
}



// FUNCTION 14717c797 FUN_14717c797 body=374 status=ok
// SIG undefined FUN_14717c797(void)

void FUN_14717c797(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14717c90d FUN_14717c90d body=75 status=ok
// SIG undefined FUN_14717c90d(void)

void FUN_14717c90d(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0x600000000;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0x800000000;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  return;
}



// FUNCTION 14717c958 FUN_14717c958 body=149 status=ok
// SIG undefined FUN_14717c958(void)

void FUN_14717c958(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x350,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x350)) {
      uVar5 = uVar4 / 0x350 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x350,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14717c9ee FUN_14717c9ee body=147 status=ok
// SIG undefined FUN_14717c9ee(void)

void FUN_14717c9ee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14717ca82 FUN_14717ca82 body=87 status=ok
// SIG undefined FUN_14717ca82(void)

void FUN_14717ca82(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e(param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 14717cada FUN_14717cada body=124 status=ok
// SIG undefined FUN_14717cada(void)

void FUN_14717cada(longlong param_1,int param_2)

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
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14717cb58 FUN_14717cb58 body=95 status=ok
// SIG undefined FUN_14717cb58(void)

void FUN_14717cb58(longlong param_1,uint param_2)

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



// FUNCTION 14717cbb8 FUN_14717cbb8 body=132 status=ok
// SIG undefined FUN_14717cbb8(void)

void FUN_14717cbb8(longlong param_1,int param_2)

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



// FUNCTION 14717cc3d FUN_14717cc3d body=54 status=ok
// SIG undefined FUN_14717cc3d(void)

void FUN_14717cc3d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0x600000000;
  param_1[0x3e] = 0;
  param_1[0x40] = 0x800000000;
  return;
}



// FUNCTION 14717cc74 FUN_14717cc74 body=146 status=ok
// SIG undefined FUN_14717cc74(void)

void FUN_14717cc74(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x210,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x210)) {
      uVar5 = uVar4 / 0x210 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x210,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14717cd08 FUN_14717cd08 body=74 status=ok
// SIG undefined FUN_14717cd08(void)

void FUN_14717cd08(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14717cd52(param_1,*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
  if (iVar1 == *(int *)(param_1 + 0xd4)) {
    return;
  }
  *(int *)(param_1 + 0xd4) = iVar1;
  FUN_141763ab0(param_1,*(undefined4 *)(param_1 + 0xd0),iVar1,0x20);
  return;
}



// FUNCTION 14717cd52 FUN_14717cd52 body=105 status=ok
// SIG undefined FUN_14717cd52(void)

ulonglong FUN_14717cd52(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14717cdbc FUN_14717cdbc body=132 status=ok
// SIG undefined FUN_14717cdbc(void)

void FUN_14717cdbc(longlong param_1,int param_2)

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



// FUNCTION 14717ce42 FUN_14717ce42 body=42 status=ok
// SIG undefined FUN_14717ce42(void)

void FUN_14717ce42(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14717ce74 FUN_14717ce74 body=96 status=ok
// SIG undefined FUN_14717ce74(void)

undefined8 FUN_14717ce74(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e512a0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9d9e88,1);
  return uVar3;
}



// FUNCTION 14717ced4 FUN_14717ced4 body=52 status=ok
// SIG undefined FUN_14717ced4(void)

void FUN_14717ced4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14717cf08 FUN_14717cf08 body=883 status=ok
// SIG undefined FUN_14717cf08(void)

int * FUN_14717cf08(int *param_1,undefined8 *param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  int iVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  double local_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168 [6];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_90;
  double dVar3;
  double dVar5;
  double dVar7;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_168[4] = (double)param_2[2];
  local_168[2] = (double)*param_2;
  local_168[3] = (double)param_2[1];
  local_130 = param_2[5];
  local_168[5] = (double)*param_2;
  local_138 = param_2[1];
  local_118 = param_2[2];
  local_120 = param_2[4];
  local_128 = local_168[5];
  local_110 = param_2[3];
  local_108 = local_138;
  local_100 = local_118;
  local_f8 = local_110;
  local_f0 = local_120;
  local_e8 = local_118;
  local_e0 = local_110;
  local_d8 = local_138;
  local_d0 = local_130;
  local_c8 = local_168[5];
  local_c0 = local_120;
  local_b8 = local_130;
  local_a0 = param_2[5];
  local_b0 = param_2[3];
  uStack_a8 = param_2[4];
  dVar10 = (double)(*(float *)(param_3 + 0x2170) + 1e-08);
  uVar16 = 0xe0000000;
  uVar17 = 0xc7efffff;
  uVar20 = 0xe0000000;
  uVar21 = 0x47efffff;
  lVar15 = 0x10;
  uVar18 = uVar16;
  uVar19 = uVar17;
  uVar23 = uVar20;
  uVar25 = uVar21;
  do {
    dVar2 = *(double *)((longlong)local_168 + lVar15);
    dVar3 = *(double *)((longlong)local_168 + lVar15);
    pdVar1 = (double *)((longlong)local_168 + lVar15 + 8);
    dVar4 = *pdVar1;
    dVar5 = *pdVar1;
    pdVar1 = (double *)((longlong)local_168 + lVar15 + 0x10);
    dVar6 = *pdVar1;
    dVar7 = *pdVar1;
    dVar9 = *(double *)(param_3 + 0x9f8) * dVar7 +
            *(double *)(param_3 + 0x9d8) * dVar5 + *(double *)(param_3 + 0x9b8) * dVar3 +
            *(double *)(param_3 + 0xa18);
    local_168[0] = dVar6 * *(double *)(param_3 + 0xa00) +
                   dVar4 * *(double *)(param_3 + 0x9e0) + dVar2 * *(double *)(param_3 + 0x9c0) +
                   *(double *)(param_3 + 0xa20);
    local_168[1] = dVar7 * *(double *)(param_3 + 0xa08) +
                   dVar5 * *(double *)(param_3 + 0x9e8) + dVar3 * *(double *)(param_3 + 0x9c8) +
                   *(double *)(param_3 + 0xa28);
    local_178._8_4_ = SUB84(dVar9,0);
    local_178._0_8_ =
         *(double *)(param_3 + 0x9f0) * dVar6 +
         *(double *)(param_3 + 0x9d0) * dVar4 + *(double *)(param_3 + 0x9b0) * dVar2 +
         *(double *)(param_3 + 0xa10);
    local_178._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    if (local_168[0] <= dVar10) {
      local_168[0] = dVar10;
    }
    local_198 = 0;
    cVar11 = FUN_1401ca69e(local_178,param_3 + 0x30f8,param_3 + 0x830,&local_188);
    if (cVar11 != '\0') {
      uVar24 = (undefined4)((ulonglong)local_188 >> 0x20);
      if (local_188 <= (double)CONCAT44(uVar25,uVar23)) {
        uVar23 = SUB84(local_188,0);
        uVar25 = uVar24;
      }
      uVar22 = (undefined4)((ulonglong)local_180 >> 0x20);
      if (local_180 <= (double)CONCAT44(uVar21,uVar20)) {
        uVar20 = SUB84(local_180,0);
        uVar21 = uVar22;
      }
      if ((double)CONCAT44(uVar19,uVar18) <= local_188) {
        uVar18 = SUB84(local_188,0);
        uVar19 = uVar24;
      }
      if ((double)CONCAT44(uVar17,uVar16) <= local_180) {
        uVar16 = SUB84(local_180,0);
        uVar17 = uVar22;
      }
    }
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd0);
  iVar8 = *(int *)(param_3 + 0x3100);
  iVar13 = (int)((ulonglong)
                 (longlong)
                 ROUND((double)CONCAT44(uVar25,uVar23) + (double)CONCAT44(uVar25,uVar23) + -0.5) >>
                1);
  if (iVar8 <= iVar13) {
    iVar13 = iVar8;
  }
  iVar12 = *(int *)(param_3 + 0x30f8);
  if (iVar13 < iVar12) {
    iVar13 = iVar12;
  }
  iVar14 = -(int)((ulonglong)
                  (longlong)
                  ROUND(-0.5 - ((double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar19,uVar18)))
                 >> 1);
  if (iVar8 <= iVar14) {
    iVar14 = iVar8;
  }
  if (iVar14 < iVar12) {
    iVar14 = iVar12;
  }
  *param_1 = iVar13;
  param_1[2] = iVar14;
  iVar8 = *(int *)(param_3 + 0x30fc);
  iVar13 = *(int *)(param_3 + 0x3104);
  iVar12 = (int)((ulonglong)
                 (longlong)
                 ROUND((double)CONCAT44(uVar21,uVar20) + (double)CONCAT44(uVar21,uVar20) + -0.5) >>
                1);
  if (iVar13 <= iVar12) {
    iVar12 = iVar13;
  }
  if (iVar12 < iVar8) {
    iVar12 = iVar8;
  }
  param_1[1] = iVar12;
  iVar12 = (int)(((longlong)
                  ROUND(-0.5 - ((double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar17,uVar16)))
                 & 0xfffffffffffffffeU) * -0x80000000 >> 0x20);
  if (iVar12 < iVar13) {
    iVar13 = iVar12;
  }
  if (iVar13 < iVar8) {
    iVar13 = iVar8;
  }
  param_1[3] = iVar13;
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14717d27c FUN_14717d27c body=54 status=ok
// SIG undefined FUN_14717d27c(void)

void FUN_14717d27c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14717d2ba FUN_14717d2ba body=39 status=ok
// SIG undefined FUN_14717d2ba(void)

void FUN_14717d2ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14717d2e2 FUN_14717d2e2 body=60 status=ok
// SIG undefined FUN_14717d2e2(void)

longlong FUN_14717d2e2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14717d31e FUN_14717d31e body=54 status=ok
// SIG undefined FUN_14717d31e(void)

void FUN_14717d31e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14717d35c FUN_14717d35c body=39 status=ok
// SIG undefined FUN_14717d35c(void)

void FUN_14717d35c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14717d384 FUN_14717d384 body=60 status=ok
// SIG undefined FUN_14717d384(void)

longlong FUN_14717d384(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14717d3c0 FUN_14717d3c0 body=54 status=ok
// SIG undefined FUN_14717d3c0(void)

void FUN_14717d3c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14717d3fe FUN_14717d3fe body=39 status=ok
// SIG undefined FUN_14717d3fe(void)

void FUN_14717d3fe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14717d426 FUN_14717d426 body=60 status=ok
// SIG undefined FUN_14717d426(void)

longlong FUN_14717d426(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14717d462 FUN_14717d462 body=54 status=ok
// SIG undefined FUN_14717d462(void)

void FUN_14717d462(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14717d4a0 FUN_14717d4a0 body=39 status=ok
// SIG undefined FUN_14717d4a0(void)

void FUN_14717d4a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14717d4c8 FUN_14717d4c8 body=60 status=ok
// SIG undefined FUN_14717d4c8(void)

longlong FUN_14717d4c8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14717d504 FUN_14717d504 body=132 status=ok
// SIG undefined FUN_14717d504(void)

void FUN_14717d504(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0xc0);
  while ((plVar3 != (longlong *)0x0 &&
         ((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)), lVar2 == 0
          || (cVar1 = FUN_14717d588(param_1,param_2,param_3,param_4,param_5,plVar3,lVar2),
             cVar1 == '\0'))))) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14717d588 FUN_14717d588 body=361 status=ok
// SIG undefined FUN_14717d588(void)

ulonglong FUN_14717d588(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined4 param_5,undefined8 param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((param_7 == (longlong *)0x0) || (*(int *)(param_1 + 0x20) < 3)) ||
     (cVar1 = (**(code **)(*param_7 + 0x1d8))(param_7), cVar1 == '\0')) goto LAB_14717d5d7;
  cVar1 = FUN_144a7cdf8(param_7);
  if ((param_4 == 0 || cVar1 != '\x01') || (1 < *(byte *)(param_1 + 0x40))) {
    if (cVar1 == '\0') goto LAB_14717d5d7;
    if (param_4 != 0) goto LAB_14717d62e;
  }
  else {
    if ((*(byte *)(param_4 + 0x70) & 1) == 0) goto LAB_14717d5d7;
LAB_14717d62e:
    if ((*(byte *)(param_4 + 0x6e) & 8) == 0) goto LAB_14717d5d7;
  }
  iVar2 = (**(code **)(*param_7 + 0x30))(param_7);
  if (iVar2 != 3) {
    local_48 = FUN_144b13a0e(param_2);
    uVar3 = FUN_144a875de(param_7);
    cVar1 = *(char *)(param_1 + 0x40);
    uVar4 = 0;
    if (cVar1 == '\0') {
      uVar4 = FUN_144a53bf0(param_7,&local_48);
      cVar1 = *(char *)(param_1 + 0x40);
    }
    if (cVar1 == '\x01') {
      local_68 = param_7;
      local_70 = param_6;
      local_78 = param_5;
      local_60 = uVar3;
      local_58 = uVar4;
      uVar5 = FUN_14717d9dc(param_1,param_2,param_3,param_4);
    }
    else {
      if (cVar1 != '\0') goto LAB_14717d5d7;
      local_68 = param_7;
      local_70 = param_6;
      local_78 = param_5;
      local_60 = uVar3;
      local_58 = uVar4;
      uVar5 = FUN_14717d6f2(param_1,param_2,param_3,param_4);
    }
    uVar6 = (ulonglong)uVar5;
  }
LAB_14717d5d7:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}


