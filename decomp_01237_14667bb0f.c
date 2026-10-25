// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14667bb0f FUN_14667bb0f body=47 status=ok
// SIG undefined FUN_14667bb0f(void)

longlong FUN_14667bb0f(void)

{
  if (DAT_14cbf9538 == 0) {
    FUN_14073dd9a(&DAT_14cbf9538,&PTR_LAB_14baa50f8);
  }
  return DAT_14cbf9538;
}



// FUNCTION 14667bb4c FUN_14667bb4c body=55 status=ok
// SIG undefined FUN_14667bb4c(void)

void FUN_14667bb4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf9730 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf9730 = FUN_140002ddd(FUN_14667b94f,uVar1,L"GroomConversionSettings");
  }
  return;
}



// FUNCTION 14667bb84 FUN_14667bb84 body=48 status=ok
// SIG undefined FUN_14667bb84(void)

void FUN_14667bb84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14baa9880;
  return;
}



// FUNCTION 14667bbb4 FUN_14667bbb4 body=47 status=ok
// SIG undefined FUN_14667bbb4(void)

longlong FUN_14667bbb4(void)

{
  if (DAT_14cbf9740 == 0) {
    FUN_1409ce572(&DAT_14cbf9740,&PTR_FUN_14baa8d40);
  }
  return DAT_14cbf9740;
}



// FUNCTION 14667bbe3 FUN_14667bbe3 body=47 status=ok
// SIG undefined FUN_14667bbe3(void)

longlong FUN_14667bbe3(void)

{
  if (DAT_14cbf9758 == 0) {
    FUN_1409ce572(&DAT_14cbf9758,&PTR_FUN_14baa8dd0);
  }
  return DAT_14cbf9758;
}



// FUNCTION 14667bc12 FUN_14667bc12 body=55 status=ok
// SIG undefined FUN_14667bc12(void)

void FUN_14667bc12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf9778 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf9778 = FUN_140002ddd(FUN_14667bc49,uVar1,L"GroomBuildSettings");
  }
  return;
}



// FUNCTION 14667bc49 FUN_14667bc49 body=47 status=ok
// SIG undefined FUN_14667bc49(void)

longlong FUN_14667bc49(void)

{
  if (DAT_14cbf9770 == 0) {
    FUN_14086a14e(&DAT_14cbf9770,&PTR_FUN_14baa9078);
  }
  return DAT_14cbf9770;
}



// FUNCTION 14667bc78 FUN_14667bc78 body=48 status=ok
// SIG undefined FUN_14667bc78(void)

void FUN_14667bc78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14baa9b60;
  return;
}



// FUNCTION 14667bca8 FUN_14667bca8 body=59 status=ok
// SIG undefined FUN_14667bca8(void)

void FUN_14667bca8(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  while (puVar3 = DAT_14cbf9798, DAT_14cbf9798 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*DAT_14cbf9798;
    plVar1 = DAT_14cbf9798 + 1;
    DAT_14cbf9798 = puVar2;
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14667bd38 FUN_14667bd38 body=75 status=ok
// SIG undefined FUN_14667bd38(void)

void FUN_14667bd38(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  while (puVar3 = DAT_14cbf9e98, DAT_14cbf9e98 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*DAT_14cbf9e98;
    plVar1 = DAT_14cbf9e98 + 0xb;
    DAT_14cbf9e98 = puVar2;
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    if (puVar3[9] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 14667bd84 FUN_14667bd84 body=69 status=ok
// SIG undefined FUN_14667bd84(void)

undefined8 * FUN_14667bd84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa3ed0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667bdca FUN_14667bdca body=69 status=ok
// SIG undefined FUN_14667bdca(void)

undefined8 * FUN_14667bdca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa4550;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667be10 FUN_14667be10 body=40 status=ok
// SIG undefined FUN_14667be10(void)

undefined8 FUN_14667be10(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667be38 FUN_14667be38 body=29 status=ok
// SIG undefined FUN_14667be38(void)

undefined8 FUN_14667be38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667be56 FUN_14667be56 body=142 status=ok
// SIG undefined FUN_14667be56(void)

code * FUN_14667be56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000019d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149092f8a;
}



// FUNCTION 14667bee4 FUN_14667bee4 body=144 status=ok
// SIG undefined FUN_14667bee4(void)

code * FUN_14667bee4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"UniqueMeshNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_149093014;
}



// FUNCTION 14667bf74 FUN_14667bf74 body=136 status=ok
// SIG undefined FUN_14667bf74(void)

code * FUN_14667bf74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000011e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149094c3e;
}



// FUNCTION 14667bffc FUN_14667bffc body=136 status=ok
// SIG undefined FUN_14667bffc(void)

code * FUN_14667bffc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UncompressedTotalSizeInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149094d52;
}



// FUNCTION 14667c084 FUN_14667c084 body=29 status=ok
// SIG undefined FUN_14667c084(void)

undefined8 FUN_14667c084(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667c0a2 FUN_14667c0a2 body=29 status=ok
// SIG undefined FUN_14667c0a2(void)

undefined8 FUN_14667c0a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667c0c0 FUN_14667c0c0 body=136 status=ok
// SIG undefined FUN_14667c0c0(void)

code * FUN_14667c0c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e69776;
}



// FUNCTION 14667c148 FUN_14667c148 body=136 status=ok
// SIG undefined FUN_14667c148(void)

code * FUN_14667c148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000020f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9d658;
}



// FUNCTION 14667c1d0 FUN_14667c1d0 body=130 status=ok
// SIG undefined FUN_14667c1d0(void)

undefined1 * FUN_14667c1d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9d654;
}



// FUNCTION 14667c252 FUN_14667c252 body=136 status=ok
// SIG undefined FUN_14667c252(void)

code * FUN_14667c252(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetTriangleMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000024b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909571a;
}



// FUNCTION 14667c2da FUN_14667c2da body=136 status=ok
// SIG undefined FUN_14667c2da(void)

code * FUN_14667c2da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095a54;
}



// FUNCTION 14667c362 FUN_14667c362 body=136 status=ok
// SIG undefined FUN_14667c362(void)

code * FUN_14667c362(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095c76;
}



// FUNCTION 14667c3ea FUN_14667c3ea body=136 status=ok
// SIG undefined FUN_14667c3ea(void)

code * FUN_14667c3ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095d8a;
}



// FUNCTION 14667c472 FUN_14667c472 body=136 status=ok
// SIG undefined FUN_14667c472(void)

code * FUN_14667c472(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2700000030b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095e98;
}



// FUNCTION 14667c4fa FUN_14667c4fa body=136 status=ok
// SIG undefined FUN_14667c4fa(void)

code * FUN_14667c4fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25000000307;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5f0f6;
}



// FUNCTION 14667c582 FUN_14667c582 body=136 status=ok
// SIG undefined FUN_14667c582(void)

code * FUN_14667c582(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullingIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d4c85a;
}



// FUNCTION 14667c60a FUN_14667c60a body=136 status=ok
// SIG undefined FUN_14667c60a(void)

code * FUN_14667c60a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointAttributeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daf494;
}



// FUNCTION 14667c692 FUN_14667c692 body=136 status=ok
// SIG undefined FUN_14667c692(void)

code * FUN_14667c692(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000002ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490969e8;
}



// FUNCTION 14667c71a FUN_14667c71a body=138 status=ok
// SIG undefined FUN_14667c71a(void)

undefined1 * FUN_14667c71a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_149096b86;
}



// FUNCTION 14667c7b8 FUN_14667c7b8 body=192 status=ok
// SIG undefined FUN_14667c7b8(void)

void FUN_14667c7b8(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bab2b40;
  puVar1[3] = &DAT_14cbfab30;
  puVar1[4] = FUN_1459d0f4c;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14667c95c FUN_14667c95c body=55 status=ok
// SIG undefined FUN_14667c95c(void)

void FUN_14667c95c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfc3d0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbfc3d0 = FUN_140002ddd(FUN_14667c993,uVar1,L"MovieSceneGroomCacheParams");
  }
  return;
}



// FUNCTION 14667c993 FUN_14667c993 body=49 status=ok
// SIG undefined FUN_14667c993(void)

longlong FUN_14667c993(void)

{
  if (DAT_14cbfc3c8 == 0) {
    FUN_14086a14e(&DAT_14cbfc3c8,&PTR_FUN_14baabf40);
  }
  return DAT_14cbfc3c8;
}



// FUNCTION 14667c9c4 FUN_14667c9c4 body=48 status=ok
// SIG undefined FUN_14667c9c4(void)

void FUN_14667c9c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14baaff10;
  return;
}



// FUNCTION 14667c9f4 FUN_14667c9f4 body=84 status=ok
// SIG undefined FUN_14667c9f4(void)

void FUN_14667c9f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baac060;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0x3f80000000000000;
  *(byte *)(puVar1 + 0x22) = *(byte *)(puVar1 + 0x22) & 0xfe;
  *(undefined2 *)((longlong)puVar1 + 0xd9) = 0x101;
  *(undefined2 *)(puVar1 + 0xb) = 0x201;
  return;
}



// FUNCTION 14667ca48 FUN_14667ca48 body=47 status=ok
// SIG undefined FUN_14667ca48(void)

longlong FUN_14667ca48(void)

{
  if (DAT_14cbfc3e8 == 0) {
    FUN_14073dd9a(&DAT_14cbfc3e8,&PTR_LAB_14baac018);
  }
  return DAT_14cbfc3e8;
}



// FUNCTION 14667ca78 FUN_14667ca78 body=55 status=ok
// SIG undefined FUN_14667ca78(void)

void FUN_14667ca78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfc400 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbfc400 =
         FUN_140002ddd(FUN_14667caaf,uVar1,L"MovieSceneGroomCacheSectionTemplateParameters");
  }
  return;
}



// FUNCTION 14667caaf FUN_14667caaf body=47 status=ok
// SIG undefined FUN_14667caaf(void)

longlong FUN_14667caaf(void)

{
  if (DAT_14cbfc3f8 == 0) {
    FUN_14086a14e(&DAT_14cbfc3f8,&PTR_FUN_14baac550);
  }
  return DAT_14cbfc3f8;
}



// FUNCTION 14667cade FUN_14667cade body=48 status=ok
// SIG undefined FUN_14667cade(void)

void FUN_14667cade(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bab0070;
  return;
}



// FUNCTION 14667cb0e FUN_14667cb0e body=55 status=ok
// SIG undefined FUN_14667cb0e(void)

void FUN_14667cb0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfc418 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbfc418 = FUN_140002ddd(FUN_14667cb45,uVar1,L"MovieSceneGroomCacheSectionTemplate");
  }
  return;
}



// FUNCTION 14667cb45 FUN_14667cb45 body=47 status=ok
// SIG undefined FUN_14667cb45(void)

longlong FUN_14667cb45(void)

{
  if (DAT_14cbfc410 == 0) {
    FUN_14086a14e(&DAT_14cbfc410,&PTR_FUN_14baac640);
  }
  return DAT_14cbfc410;
}



// FUNCTION 14667cb74 FUN_14667cb74 body=48 status=ok
// SIG undefined FUN_14667cb74(void)

void FUN_14667cb74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14bab01e0;
  return;
}



// FUNCTION 14667cba4 FUN_14667cba4 body=74 status=ok
// SIG undefined FUN_14667cba4(void)

void FUN_14667cba4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078b6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baac850;
  puVar1[0x1f] = &PTR_LAB_14baacba0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  FUN_140ff5708(puVar1 + 0xd,1);
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 5;
  return;
}



// FUNCTION 14667cbee FUN_14667cbee body=47 status=ok
// SIG undefined FUN_14667cbee(void)

longlong FUN_14667cbee(void)

{
  if (DAT_14cbfc430 == 0) {
    FUN_14073dd9a(&DAT_14cbfc430,&PTR_LAB_14baac808);
  }
  return DAT_14cbfc430;
}



// FUNCTION 14667cc1d FUN_14667cc1d body=47 status=ok
// SIG undefined FUN_14667cc1d(void)

longlong FUN_14667cc1d(void)

{
  if (DAT_14cbfc448 == 0) {
    FUN_14073dd9a(&DAT_14cbfc448,&PTR_LAB_14baaccf8);
  }
  return DAT_14cbfc448;
}



// FUNCTION 14667cc5a FUN_14667cc5a body=125 status=ok
// SIG undefined FUN_14667cc5a(void)

void FUN_14667cc5a(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14667ccd8 FUN_14667ccd8 body=40 status=ok
// SIG undefined FUN_14667ccd8(void)

undefined8 FUN_14667ccd8(undefined8 param_1,int param_2)

{
  FUN_1404db908();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667cd00 FUN_14667cd00 body=86 status=ok
// SIG undefined FUN_14667cd00(void)

undefined8 * FUN_14667cd00(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baac850;
  param_1[0x1f] = &PTR_LAB_14baacba0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667cd56 FUN_14667cd56 body=40 status=ok
// SIG undefined FUN_14667cd56(void)

undefined8 FUN_14667cd56(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667cd7e FUN_14667cd7e body=136 status=ok
// SIG undefined FUN_14667cd7e(void)

code * FUN_14667cd7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture5Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a69d2;
}



// FUNCTION 14667ce06 FUN_14667ce06 body=136 status=ok
// SIG undefined FUN_14667ce06(void)

code * FUN_14667ce06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture3Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a6b70;
}



// FUNCTION 14667ce8e FUN_14667ce8e body=142 status=ok
// SIG undefined FUN_14667ce8e(void)

code * FUN_14667ce8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x800000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14667cf1c;
}



// FUNCTION 14667cf1c FUN_14667cf1c body=144 status=ok
// SIG undefined FUN_14667cf1c(void)

code * FUN_14667cf1c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f27000;
}



// FUNCTION 14667cfac FUN_14667cfac body=136 status=ok
// SIG undefined FUN_14667cfac(void)

code * FUN_14667cfac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPointCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7542;
}



// FUNCTION 14667d034 FUN_14667d034 body=136 status=ok
// SIG undefined FUN_14667d034(void)

code * FUN_14667d034(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDispatchArgsGlobalBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3b964;
}



// FUNCTION 14667d0bc FUN_14667d0bc body=136 status=ok
// SIG undefined FUN_14667d0bc(void)

code * FUN_14667d0bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f78812;
}



// FUNCTION 14667d144 FUN_14667d144 body=130 status=ok
// SIG undefined FUN_14667d144(void)

undefined1 * FUN_14667d144(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490a7aa2;
}



// FUNCTION 14667d1c6 FUN_14667d1c6 body=136 status=ok
// SIG undefined FUN_14667d1c6(void)

code * FUN_14667d1c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutDeformedBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7aa6;
}



// FUNCTION 14667d24e FUN_14667d24e body=136 status=ok
// SIG undefined FUN_14667d24e(void)

code * FUN_14667d24e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InRestPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7c44;
}



// FUNCTION 14667d2d6 FUN_14667d2d6 body=136 status=ok
// SIG undefined FUN_14667d2d6(void)

code * FUN_14667d2d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BoneDeformedPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000015e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a81a2;
}



// FUNCTION 14667d35e FUN_14667d35e body=136 status=ok
// SIG undefined FUN_14667d35e(void)

code * FUN_14667d35e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSimDeformedPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000158;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a82b6;
}



// FUNCTION 14667d3e6 FUN_14667d3e6 body=136 status=ok
// SIG undefined FUN_14667d3e6(void)

code * FUN_14667d3e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrandsVFTODO_CullingIndirectBufferArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000219;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a8704;
}



// FUNCTION 14667d46e FUN_14667d46e body=136 status=ok
// SIG undefined FUN_14667d46e(void)

code * FUN_14667d46e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSimHairPositionOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12800000214;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a8818;
}



// FUNCTION 14667d4f6 FUN_14667d4f6 body=136 status=ok
// SIG undefined FUN_14667d4f6(void)

code * FUN_14667d4f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSimHairPositionOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000001f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9142;
}



// FUNCTION 14667d57e FUN_14667d57e body=138 status=ok
// SIG undefined FUN_14667d57e(void)

undefined1 * FUN_14667d57e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderDrawParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1490a947e;
}



// FUNCTION 14667d608 FUN_14667d608 body=136 status=ok
// SIG undefined FUN_14667d608(void)

code * FUN_14667d608(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutRenAttributeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9482;
}



// FUNCTION 14667d690 FUN_14667d690 body=144 status=ok
// SIG undefined FUN_14667d690(void)

code * FUN_14667d690(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd972a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RenAttributes";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceAttributeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1490a9596;
}



// FUNCTION 14667d720 FUN_14667d720 body=136 status=ok
// SIG undefined FUN_14667d720(void)

code * FUN_14667d720(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutGroupAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000353;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9624;
}



// FUNCTION 14667d7a8 FUN_14667d7a8 body=136 status=ok
// SIG undefined FUN_14667d7a8(void)

code * FUN_14667d7a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RenPointLODBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000034f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a97c2;
}



// FUNCTION 14667d830 FUN_14667d830 body=138 status=ok
// SIG undefined FUN_14667d830(void)

undefined1 * FUN_14667d830(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderDrawParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x344;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1490a9b88;
}



// FUNCTION 14667d8ba FUN_14667d8ba body=142 status=ok
// SIG undefined FUN_14667d8ba(void)

code * FUN_14667d8ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderDrawParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe0000003ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1490a9b8c;
}



// FUNCTION 14667d948 FUN_14667d948 body=136 status=ok
// SIG undefined FUN_14667d948(void)

code * FUN_14667d948(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GuideRootBarycentricBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000003c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9ca0;
}



// FUNCTION 14667d9d0 FUN_14667d9d0 body=136 status=ok
// SIG undefined FUN_14667d9d0(void)

code * FUN_14667d9d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectBufferArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000463;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aa316;
}



// FUNCTION 14667da58 FUN_14667da58 body=142 status=ok
// SIG undefined FUN_14667da58(void)

code * FUN_14667da58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70000004bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1490aa538;
}



// FUNCTION 14667dae6 FUN_14667dae6 body=136 status=ok
// SIG undefined FUN_14667dae6(void)

code * FUN_14667dae6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000004bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9e56a;
}



// FUNCTION 14667db6e FUN_14667db6e body=136 status=ok
// SIG undefined FUN_14667db6e(void)

code * FUN_14667db6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AABBCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000051c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ee0b14;
}



// FUNCTION 14667dbf6 FUN_14667dbf6 body=136 status=ok
// SIG undefined FUN_14667dbf6(void)

code * FUN_14667dbf6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedTangents";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aac62;
}



// FUNCTION 14667dc7e FUN_14667dc7e body=136 status=ok
// SIG undefined FUN_14667dc7e(void)

code * FUN_14667dc7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutUniqueTriangleCurrPosition";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ab254;
}



// FUNCTION 14667dd06 FUN_14667dd06 body=136 status=ok
// SIG undefined FUN_14667dd06(void)

code * FUN_14667dd06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ab368;
}



// FUNCTION 14667dd8e FUN_14667dd8e body=136 status=ok
// SIG undefined FUN_14667dd8e(void)

code * FUN_14667dd8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutDeformedPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abbbe;
}



// FUNCTION 14667de16 FUN_14667de16 body=136 status=ok
// SIG undefined FUN_14667de16(void)

code * FUN_14667de16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSamplePositionsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000219;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abcd6;
}



// FUNCTION 14667de9e FUN_14667de9e body=136 status=ok
// SIG undefined FUN_14667de9e(void)

code * FUN_14667de9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RDGMeshPositionBuffer0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000215;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abe74;
}



// FUNCTION 14667df26 FUN_14667df26 body=136 status=ok
// SIG undefined FUN_14667df26(void)

code * FUN_14667df26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSampleDeformationsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000028e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f610fa;
}



// FUNCTION 14667dfae FUN_14667dfae body=130 status=ok
// SIG undefined FUN_14667dfae(void)

undefined1 * FUN_14667dfae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x289;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490abf86;
}



// FUNCTION 14667e030 FUN_14667e030 body=136 status=ok
// SIG undefined FUN_14667e030(void)

code * FUN_14667e030(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3dc8a;
}



// FUNCTION 14667e0b8 FUN_14667e0b8 body=136 status=ok
// SIG undefined FUN_14667e0b8(void)

code * FUN_14667e0b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RootToUniqueTriangleIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac014;
}



// FUNCTION 14667e140 FUN_14667e140 body=138 status=ok
// SIG undefined FUN_14667e140(void)

undefined1 * FUN_14667e140(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3da12();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairFollicleMaskParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cbfd1e8;
  return &LAB_145f95286;
}



// FUNCTION 14667e1ca FUN_14667e1ca body=136 status=ok
// SIG undefined FUN_14667e1ca(void)

code * FUN_14667e1ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000003c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac368;
}



// FUNCTION 14667e252 FUN_14667e252 body=136 status=ok
// SIG undefined FUN_14667e252(void)

code * FUN_14667e252(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrevOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000411;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac47a;
}



// FUNCTION 14667e2da FUN_14667e2da body=136 status=ok
// SIG undefined FUN_14667e2da(void)

code * FUN_14667e2da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUPrevPositionOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000040d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac618;
}



// FUNCTION 14667e362 FUN_14667e362 body=142 status=ok
// SIG undefined FUN_14667e362(void)

code * FUN_14667e362(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4c664();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Culling";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCullingRawParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1800000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e07b2e;
}



// FUNCTION 14667e3f0 FUN_14667e3f0 body=136 status=ok
// SIG undefined FUN_14667e3f0(void)

code * FUN_14667e3f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousPositionOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e07dae;
}



// FUNCTION 14667e478 FUN_14667e478 body=29 status=ok
// SIG undefined FUN_14667e478(void)

undefined8 FUN_14667e478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667e496 FUN_14667e496 body=29 status=ok
// SIG undefined FUN_14667e496(void)

undefined8 FUN_14667e496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667e4b4 FUN_14667e4b4 body=29 status=ok
// SIG undefined FUN_14667e4b4(void)

undefined8 FUN_14667e4b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667e4d2 FUN_14667e4d2 body=136 status=ok
// SIG undefined FUN_14667e4d2(void)

code * FUN_14667e4d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RestPositionComponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000003a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490acf58;
}



// FUNCTION 14667e55a FUN_14667e55a body=136 status=ok
// SIG undefined FUN_14667e55a(void)

code * FUN_14667e55a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumPoints";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa4000003a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61696;
}



// FUNCTION 14667e5e2 FUN_14667e5e2 body=93 status=ok
// SIG undefined FUN_14667e5e2(void)

void FUN_14667e5e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bab2b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14667e640 FUN_14667e640 body=29 status=ok
// SIG undefined FUN_14667e640(void)

undefined8 FUN_14667e640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667e65e FUN_14667e65e body=71 status=ok
// SIG undefined FUN_14667e65e(void)

void FUN_14667e65e(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14cbfc20d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014667e690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14cbfc200 + 0x18))(&DAT_14cbfc200,uVar1,*(code **)(DAT_14cbfc200 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14cbfc200,0);
  return;
}



// FUNCTION 14667e6a6 FUN_14667e6a6 body=332 status=ok
// SIG undefined FUN_14667e6a6(void)

void FUN_14667e6a6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
    }
  }
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
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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



// FUNCTION 14667e7f2 FUN_14667e7f2 body=279 status=ok
// SIG undefined FUN_14667e7f2(void)

void FUN_14667e7f2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14bab2fa0;
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[6] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 14667e909 FUN_14667e909 body=47 status=ok
// SIG undefined FUN_14667e909(void)

longlong FUN_14667e909(void)

{
  if (DAT_14cbfdd40 == 0) {
    FUN_14073dd9a(&DAT_14cbfdd40,&PTR_LAB_14bab3bb8);
  }
  return DAT_14cbfdd40;
}



// FUNCTION 14667e938 FUN_14667e938 body=47 status=ok
// SIG undefined FUN_14667e938(void)

longlong FUN_14667e938(void)

{
  if (DAT_14cbfdbb8 == 0) {
    FUN_14073dd9a(&DAT_14cbfdbb8,&PTR_LAB_14bab3458);
  }
  return DAT_14cbfdbb8;
}



// FUNCTION 14667e972 FUN_14667e972 body=125 status=ok
// SIG undefined FUN_14667e972(void)

void FUN_14667e972(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14667e9f0 FUN_14667e9f0 body=40 status=ok
// SIG undefined FUN_14667e9f0(void)

undefined8 FUN_14667e9f0(undefined8 param_1,int param_2)

{
  thunk_FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ea18 FUN_14667ea18 body=40 status=ok
// SIG undefined FUN_14667ea18(void)

undefined8 FUN_14667ea18(undefined8 param_1,int param_2)

{
  thunk_FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ea40 FUN_14667ea40 body=75 status=ok
// SIG undefined FUN_14667ea40(void)

undefined8 * FUN_14667ea40(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab4340;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dbdd6(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667ea8c FUN_14667ea8c body=136 status=ok
// SIG undefined FUN_14667ea8c(void)

code * FUN_14667ea8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridDestinationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490bf11c;
}



// FUNCTION 14667eb14 FUN_14667eb14 body=136 status=ok
// SIG undefined FUN_14667eb14(void)

code * FUN_14667eb14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridDestinationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000258;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ed691e;
}



// FUNCTION 14667eb9c FUN_14667eb9c body=136 status=ok
// SIG undefined FUN_14667eb9c(void)

code * FUN_14667eb9c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridDestinationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000028d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6a7b4;
}



// FUNCTION 14667ec24 FUN_14667ec24 body=47 status=ok
// SIG undefined FUN_14667ec24(void)

longlong FUN_14667ec24(void)

{
  if (DAT_14cbfe298 == 0) {
    FUN_14073dd9a(&DAT_14cbfe298,&PTR_LAB_14bab4fc8);
  }
  return DAT_14cbfe298;
}



// FUNCTION 14667ec53 FUN_14667ec53 body=47 status=ok
// SIG undefined FUN_14667ec53(void)

longlong FUN_14667ec53(void)

{
  if (DAT_14cbfe2a8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2a8,&PTR_FUN_14bab53f0);
  }
  return DAT_14cbfe2a8;
}



// FUNCTION 14667ec82 FUN_14667ec82 body=47 status=ok
// SIG undefined FUN_14667ec82(void)

longlong FUN_14667ec82(void)

{
  if (DAT_14cbfe2b0 == 0) {
    FUN_14000fc22(&DAT_14cbfe2b0,&PTR_FUN_14bab5518);
  }
  return DAT_14cbfe2b0;
}



// FUNCTION 14667ecb1 FUN_14667ecb1 body=47 status=ok
// SIG undefined FUN_14667ecb1(void)

longlong FUN_14667ecb1(void)

{
  if (DAT_14cbfe2b8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2b8,&PTR_FUN_14bab55f0);
  }
  return DAT_14cbfe2b8;
}



// FUNCTION 14667ece0 FUN_14667ece0 body=47 status=ok
// SIG undefined FUN_14667ece0(void)

longlong FUN_14667ece0(void)

{
  if (DAT_14cbfe2c0 == 0) {
    FUN_14000fc22(&DAT_14cbfe2c0,&PTR_FUN_14bab56c8);
  }
  return DAT_14cbfe2c0;
}



// FUNCTION 14667ed0f FUN_14667ed0f body=47 status=ok
// SIG undefined FUN_14667ed0f(void)

longlong FUN_14667ed0f(void)

{
  if (DAT_14cbfe2c8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2c8,&PTR_FUN_14bab57a8);
  }
  return DAT_14cbfe2c8;
}



// FUNCTION 14667ed3e FUN_14667ed3e body=47 status=ok
// SIG undefined FUN_14667ed3e(void)

longlong FUN_14667ed3e(void)

{
  if (DAT_14cbfe2d0 == 0) {
    FUN_14000fc22(&DAT_14cbfe2d0,&PTR_FUN_14bab5888);
  }
  return DAT_14cbfe2d0;
}



// FUNCTION 14667ed6d FUN_14667ed6d body=47 status=ok
// SIG undefined FUN_14667ed6d(void)

longlong FUN_14667ed6d(void)

{
  if (DAT_14cbfe2d8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2d8,&PTR_FUN_14bab5960);
  }
  return DAT_14cbfe2d8;
}



// FUNCTION 14667ed9c FUN_14667ed9c body=47 status=ok
// SIG undefined FUN_14667ed9c(void)

longlong FUN_14667ed9c(void)

{
  if (DAT_14cbfe2e0 == 0) {
    FUN_14000fc22(&DAT_14cbfe2e0,&PTR_FUN_14bab5a40);
  }
  return DAT_14cbfe2e0;
}



// FUNCTION 14667edcb FUN_14667edcb body=47 status=ok
// SIG undefined FUN_14667edcb(void)

longlong FUN_14667edcb(void)

{
  if (DAT_14cbfe2e8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2e8,&PTR_FUN_14bab5ad0);
  }
  return DAT_14cbfe2e8;
}



// FUNCTION 14667edfa FUN_14667edfa body=47 status=ok
// SIG undefined FUN_14667edfa(void)

longlong FUN_14667edfa(void)

{
  if (DAT_14cbfe2f0 == 0) {
    FUN_14000fc22(&DAT_14cbfe2f0,&PTR_FUN_14bab5bb8);
  }
  return DAT_14cbfe2f0;
}



// FUNCTION 14667ee29 FUN_14667ee29 body=47 status=ok
// SIG undefined FUN_14667ee29(void)

longlong FUN_14667ee29(void)

{
  if (DAT_14cbfe2f8 == 0) {
    FUN_14000fc22(&DAT_14cbfe2f8,&PTR_FUN_14bab5c08);
  }
  return DAT_14cbfe2f8;
}



// FUNCTION 14667ee58 FUN_14667ee58 body=47 status=ok
// SIG undefined FUN_14667ee58(void)

longlong FUN_14667ee58(void)

{
  if (DAT_14cbfe300 == 0) {
    FUN_14000fc22(&DAT_14cbfe300,&PTR_FUN_14bab5d00);
  }
  return DAT_14cbfe300;
}



// FUNCTION 14667ee87 FUN_14667ee87 body=47 status=ok
// SIG undefined FUN_14667ee87(void)

longlong FUN_14667ee87(void)

{
  if (DAT_14cbfe308 == 0) {
    FUN_14000fc22(&DAT_14cbfe308,&PTR_FUN_14bab5de0);
  }
  return DAT_14cbfe308;
}



// FUNCTION 14667eeb6 FUN_14667eeb6 body=47 status=ok
// SIG undefined FUN_14667eeb6(void)

longlong FUN_14667eeb6(void)

{
  if (DAT_14cbfe310 == 0) {
    FUN_14000fc22(&DAT_14cbfe310,&PTR_FUN_14bab5f10);
  }
  return DAT_14cbfe310;
}



// FUNCTION 14667eee5 FUN_14667eee5 body=47 status=ok
// SIG undefined FUN_14667eee5(void)

longlong FUN_14667eee5(void)

{
  if (DAT_14cbfe318 == 0) {
    FUN_14000fc22(&DAT_14cbfe318,&PTR_FUN_14bab5f50);
  }
  return DAT_14cbfe318;
}



// FUNCTION 14667ef14 FUN_14667ef14 body=47 status=ok
// SIG undefined FUN_14667ef14(void)

longlong FUN_14667ef14(void)

{
  if (DAT_14cbfe320 == 0) {
    FUN_14000fc22(&DAT_14cbfe320,&PTR_FUN_14bab6078);
  }
  return DAT_14cbfe320;
}



// FUNCTION 14667ef44 FUN_14667ef44 body=34 status=ok
// SIG undefined FUN_14667ef44(void)

void FUN_14667ef44(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14590a384();
  FUN_14069c8d6(uVar1,&PTR_s_AddAssetReference_14bab60c0,0x10);
  return;
}



// FUNCTION 14667ef6b FUN_14667ef6b body=47 status=ok
// SIG undefined FUN_14667ef6b(void)

longlong FUN_14667ef6b(void)

{
  if (DAT_14cbfe340 == 0) {
    FUN_14000fc22(&DAT_14cbfe340,&PTR_FUN_14bab68c0);
  }
  return DAT_14cbfe340;
}



// FUNCTION 14667ef9a FUN_14667ef9a body=47 status=ok
// SIG undefined FUN_14667ef9a(void)

longlong FUN_14667ef9a(void)

{
  if (DAT_14cbfe348 == 0) {
    FUN_14000fc22(&DAT_14cbfe348,&PTR_FUN_14bab69d8);
  }
  return DAT_14cbfe348;
}



// FUNCTION 14667efc9 FUN_14667efc9 body=47 status=ok
// SIG undefined FUN_14667efc9(void)

longlong FUN_14667efc9(void)

{
  if (DAT_14cbfe350 == 0) {
    FUN_14000fc22(&DAT_14cbfe350,&PTR_FUN_14bab6a98);
  }
  return DAT_14cbfe350;
}



// FUNCTION 14667eff8 FUN_14667eff8 body=47 status=ok
// SIG undefined FUN_14667eff8(void)

longlong FUN_14667eff8(void)

{
  if (DAT_14cbfe358 == 0) {
    FUN_14000fc22(&DAT_14cbfe358,&PTR_FUN_14bab6b08);
  }
  return DAT_14cbfe358;
}



// FUNCTION 14667f027 FUN_14667f027 body=47 status=ok
// SIG undefined FUN_14667f027(void)

longlong FUN_14667f027(void)

{
  if (DAT_14cbfe360 == 0) {
    FUN_14000fc22(&DAT_14cbfe360,&PTR_FUN_14bab6c30);
  }
  return DAT_14cbfe360;
}



// FUNCTION 14667f056 FUN_14667f056 body=47 status=ok
// SIG undefined FUN_14667f056(void)

longlong FUN_14667f056(void)

{
  if (DAT_14cbfe368 == 0) {
    FUN_14000fc22(&DAT_14cbfe368,&PTR_FUN_14bab6d00);
  }
  return DAT_14cbfe368;
}



// FUNCTION 14667f085 FUN_14667f085 body=47 status=ok
// SIG undefined FUN_14667f085(void)

longlong FUN_14667f085(void)

{
  if (DAT_14cbfe370 == 0) {
    FUN_14000fc22(&DAT_14cbfe370,&PTR_FUN_14bab6de8);
  }
  return DAT_14cbfe370;
}



// FUNCTION 14667f0b4 FUN_14667f0b4 body=47 status=ok
// SIG undefined FUN_14667f0b4(void)

longlong FUN_14667f0b4(void)

{
  if (DAT_14cbfe378 == 0) {
    FUN_14000fc22(&DAT_14cbfe378,&PTR_FUN_14bab6eb0);
  }
  return DAT_14cbfe378;
}



// FUNCTION 14667f0e3 FUN_14667f0e3 body=47 status=ok
// SIG undefined FUN_14667f0e3(void)

longlong FUN_14667f0e3(void)

{
  if (DAT_14cbfe380 == 0) {
    FUN_14000fc22(&DAT_14cbfe380,&PTR_FUN_14bab6f30);
  }
  return DAT_14cbfe380;
}



// FUNCTION 14667f112 FUN_14667f112 body=47 status=ok
// SIG undefined FUN_14667f112(void)

longlong FUN_14667f112(void)

{
  if (DAT_14cbfe388 == 0) {
    FUN_14000fc22(&DAT_14cbfe388,&PTR_FUN_14bab71b0);
  }
  return DAT_14cbfe388;
}



// FUNCTION 14667f141 FUN_14667f141 body=47 status=ok
// SIG undefined FUN_14667f141(void)

longlong FUN_14667f141(void)

{
  if (DAT_14cbfe390 == 0) {
    FUN_14000fc22(&DAT_14cbfe390,&PTR_FUN_14bab7298);
  }
  return DAT_14cbfe390;
}



// FUNCTION 14667f170 FUN_14667f170 body=47 status=ok
// SIG undefined FUN_14667f170(void)

longlong FUN_14667f170(void)

{
  if (DAT_14cbfe398 == 0) {
    FUN_14000fc22(&DAT_14cbfe398,&PTR_FUN_14bab7388);
  }
  return DAT_14cbfe398;
}



// FUNCTION 14667f19f FUN_14667f19f body=47 status=ok
// SIG undefined FUN_14667f19f(void)

longlong FUN_14667f19f(void)

{
  if (DAT_14cbfe3a0 == 0) {
    FUN_14000fc22(&DAT_14cbfe3a0,&PTR_FUN_14bab74b8);
  }
  return DAT_14cbfe3a0;
}



// FUNCTION 14667f1ce FUN_14667f1ce body=47 status=ok
// SIG undefined FUN_14667f1ce(void)

longlong FUN_14667f1ce(void)

{
  if (DAT_14cbfe3a8 == 0) {
    FUN_14000fc22(&DAT_14cbfe3a8,&PTR_FUN_14bab7560);
  }
  return DAT_14cbfe3a8;
}



// FUNCTION 14667f1fd FUN_14667f1fd body=47 status=ok
// SIG undefined FUN_14667f1fd(void)

longlong FUN_14667f1fd(void)

{
  if (DAT_14cbfe3b0 == 0) {
    FUN_14000fc22(&DAT_14cbfe3b0,&PTR_FUN_14bab7650);
  }
  return DAT_14cbfe3b0;
}



// FUNCTION 14667f22c FUN_14667f22c body=47 status=ok
// SIG undefined FUN_14667f22c(void)

longlong FUN_14667f22c(void)

{
  if (DAT_14cbfe3b8 == 0) {
    FUN_14000fc22(&DAT_14cbfe3b8,&PTR_FUN_14bab7740);
  }
  return DAT_14cbfe3b8;
}



// FUNCTION 14667f25b FUN_14667f25b body=47 status=ok
// SIG undefined FUN_14667f25b(void)

longlong FUN_14667f25b(void)

{
  if (DAT_14cbfe3c0 == 0) {
    FUN_14000fc22(&DAT_14cbfe3c0,&PTR_FUN_14bab7870);
  }
  return DAT_14cbfe3c0;
}



// FUNCTION 14667f28a FUN_14667f28a body=47 status=ok
// SIG undefined FUN_14667f28a(void)

longlong FUN_14667f28a(void)

{
  if (DAT_14cbfe3c8 == 0) {
    FUN_14000fc22(&DAT_14cbfe3c8,&PTR_FUN_14bab78c8);
  }
  return DAT_14cbfe3c8;
}



// FUNCTION 14667f2b9 FUN_14667f2b9 body=47 status=ok
// SIG undefined FUN_14667f2b9(void)

longlong FUN_14667f2b9(void)

{
  if (DAT_14cbfe3d0 == 0) {
    FUN_14000fc22(&DAT_14cbfe3d0,&PTR_FUN_14bab79c8);
  }
  return DAT_14cbfe3d0;
}



// FUNCTION 14667f2e8 FUN_14667f2e8 body=47 status=ok
// SIG undefined FUN_14667f2e8(void)

longlong FUN_14667f2e8(void)

{
  if (DAT_14cbfe3d8 == 0) {
    FUN_14000fc22(&DAT_14cbfe3d8,&PTR_FUN_14bab7aa8);
  }
  return DAT_14cbfe3d8;
}



// FUNCTION 14667f318 FUN_14667f318 body=34 status=ok
// SIG undefined FUN_14667f318(void)

void FUN_14667f318(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14590a468();
  FUN_14069c8d6(uVar1,&PTR_s_AddAssetReferencer_14bab7af0,0x14);
  return;
}



// FUNCTION 14667f33f FUN_14667f33f body=50 status=ok
// SIG undefined FUN_14667f33f(void)

void FUN_14667f33f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bab8600;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14667f371 FUN_14667f371 body=47 status=ok
// SIG undefined FUN_14667f371(void)

longlong FUN_14667f371(void)

{
  if (DAT_14cbfe400 == 0) {
    FUN_14073dd9a(&DAT_14cbfe400,&PTR_LAB_14bab85b8);
  }
  return DAT_14cbfe400;
}



// FUNCTION 14667f3a0 FUN_14667f3a0 body=57 status=ok
// SIG undefined FUN_14667f3a0(void)

void FUN_14667f3a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14bab89a0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



// FUNCTION 14667f3d9 FUN_14667f3d9 body=47 status=ok
// SIG undefined FUN_14667f3d9(void)

longlong FUN_14667f3d9(void)

{
  if (DAT_14cbfe418 == 0) {
    FUN_14073dd9a(&DAT_14cbfe418,&PTR_LAB_14bab8958);
  }
  return DAT_14cbfe418;
}



// FUNCTION 14667f408 FUN_14667f408 body=89 status=ok
// SIG undefined FUN_14667f408(void)

void FUN_14667f408(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14bab8de0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return;
}



// FUNCTION 14667f461 FUN_14667f461 body=49 status=ok
// SIG undefined FUN_14667f461(void)

longlong FUN_14667f461(void)

{
  if (DAT_14cbfe470 == 0) {
    FUN_14086a14e(&DAT_14cbfe470,&PTR_FUN_14bab9a70);
  }
  return DAT_14cbfe470;
}



// FUNCTION 14667f492 FUN_14667f492 body=47 status=ok
// SIG undefined FUN_14667f492(void)

longlong FUN_14667f492(void)

{
  if (DAT_14cbfe430 == 0) {
    FUN_14073dd9a(&DAT_14cbfe430,&PTR_LAB_14bab8d98);
  }
  return DAT_14cbfe430;
}



// FUNCTION 14667f4c1 FUN_14667f4c1 body=89 status=ok
// SIG undefined FUN_14667f4c1(void)

void FUN_14667f4c1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bab9360;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14667f51a FUN_14667f51a body=47 status=ok
// SIG undefined FUN_14667f51a(void)

longlong FUN_14667f51a(void)

{
  if (DAT_14cbfe628 == 0) {
    FUN_14086a14e(&DAT_14cbfe628,&PTR_FUN_14babd6c0);
  }
  return DAT_14cbfe628;
}



// FUNCTION 14667f549 FUN_14667f549 body=49 status=ok
// SIG undefined FUN_14667f549(void)

longlong FUN_14667f549(void)

{
  if (DAT_14cbfe448 == 0) {
    FUN_14073dd9a(&DAT_14cbfe448,&PTR_LAB_14bab9318);
  }
  return DAT_14cbfe448;
}



// FUNCTION 14667f57a FUN_14667f57a body=95 status=ok
// SIG undefined FUN_14667f57a(void)

void FUN_14667f57a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_14bab9700;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  return;
}



// FUNCTION 14667f5d9 FUN_14667f5d9 body=47 status=ok
// SIG undefined FUN_14667f5d9(void)

longlong FUN_14667f5d9(void)

{
  if (DAT_14cbfe460 == 0) {
    FUN_14073dd9a(&DAT_14cbfe460,&PTR_LAB_14bab96b8);
  }
  return DAT_14cbfe460;
}



// FUNCTION 14667f608 FUN_14667f608 body=48 status=ok
// SIG undefined FUN_14667f608(void)

void FUN_14667f608(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14babd780;
  return;
}



// FUNCTION 14667f638 FUN_14667f638 body=47 status=ok
// SIG undefined FUN_14667f638(void)

longlong FUN_14667f638(void)

{
  if (DAT_14cbfe490 == 0) {
    FUN_14073dd9a(&DAT_14cbfe490,&PTR_LAB_14bab9cd8);
  }
  return DAT_14cbfe490;
}



// FUNCTION 14667f667 FUN_14667f667 body=47 status=ok
// SIG undefined FUN_14667f667(void)

longlong FUN_14667f667(void)

{
  if (DAT_14cbfe4a8 == 0) {
    FUN_14073dd9a(&DAT_14cbfe4a8,&PTR_LAB_14baba1a8);
  }
  return DAT_14cbfe4a8;
}



// FUNCTION 14667f696 FUN_14667f696 body=45 status=ok
// SIG undefined FUN_14667f696(void)

void FUN_14667f696(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c26ef0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baba590;
  *(undefined4 *)(puVar1 + 0x27) = 0;
  return;
}



// FUNCTION 14667f6c3 FUN_14667f6c3 body=47 status=ok
// SIG undefined FUN_14667f6c3(void)

longlong FUN_14667f6c3(void)

{
  if (DAT_14cbfe4c0 == 0) {
    FUN_14073dd9a(&DAT_14cbfe4c0,&PTR_LAB_14baba548);
  }
  return DAT_14cbfe4c0;
}



// FUNCTION 14667f6f2 FUN_14667f6f2 body=82 status=ok
// SIG undefined FUN_14667f6f2(void)

void FUN_14667f6f2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14baba9f0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 14667f744 FUN_14667f744 body=47 status=ok
// SIG undefined FUN_14667f744(void)

longlong FUN_14667f744(void)

{
  if (DAT_14cbfe4d8 == 0) {
    FUN_14073dd9a(&DAT_14cbfe4d8,&PTR_LAB_14baba9a8);
  }
  return DAT_14cbfe4d8;
}



// FUNCTION 14667f773 FUN_14667f773 body=47 status=ok
// SIG undefined FUN_14667f773(void)

longlong FUN_14667f773(void)

{
  if (DAT_14cbfe4f0 == 0) {
    FUN_14073dd9a(&DAT_14cbfe4f0,&PTR_LAB_14babaf68);
  }
  return DAT_14cbfe4f0;
}



// FUNCTION 14667f7a2 FUN_14667f7a2 body=47 status=ok
// SIG undefined FUN_14667f7a2(void)

longlong FUN_14667f7a2(void)

{
  if (DAT_14cbfe518 == 0) {
    FUN_1409ce572(&DAT_14cbfe518,&PTR_FUN_14babb450);
  }
  return DAT_14cbfe518;
}



// FUNCTION 14667f7d1 FUN_14667f7d1 body=47 status=ok
// SIG undefined FUN_14667f7d1(void)

longlong FUN_14667f7d1(void)

{
  if (DAT_14cbfe530 == 0) {
    FUN_1409ce572(&DAT_14cbfe530,&PTR_FUN_14babb4d0);
  }
  return DAT_14cbfe530;
}



// FUNCTION 14667f800 FUN_14667f800 body=47 status=ok
// SIG undefined FUN_14667f800(void)

longlong FUN_14667f800(void)

{
  if (DAT_14cbfe548 == 0) {
    FUN_1409ce572(&DAT_14cbfe548,&PTR_FUN_14babb590);
  }
  return DAT_14cbfe548;
}



// FUNCTION 14667f82f FUN_14667f82f body=49 status=ok
// SIG undefined FUN_14667f82f(void)

longlong FUN_14667f82f(void)

{
  if (DAT_14cbfe5d0 == 0) {
    FUN_14073dd9a(&DAT_14cbfe5d0,&PTR_LAB_14babc6a0);
  }
  return DAT_14cbfe5d0;
}



// FUNCTION 14667f860 FUN_14667f860 body=47 status=ok
// SIG undefined FUN_14667f860(void)

longlong FUN_14667f860(void)

{
  if (DAT_14cbfe560 == 0) {
    FUN_14000fc22(&DAT_14cbfe560,&PTR_FUN_14babb6b0);
  }
  return DAT_14cbfe560;
}



// FUNCTION 14667f88f FUN_14667f88f body=47 status=ok
// SIG undefined FUN_14667f88f(void)

longlong FUN_14667f88f(void)

{
  if (DAT_14cbfe568 == 0) {
    FUN_14000fc22(&DAT_14cbfe568,&PTR_FUN_14babb748);
  }
  return DAT_14cbfe568;
}



// FUNCTION 14667f8be FUN_14667f8be body=47 status=ok
// SIG undefined FUN_14667f8be(void)

longlong FUN_14667f8be(void)

{
  if (DAT_14cbfe570 == 0) {
    FUN_14000fc22(&DAT_14cbfe570,&PTR_FUN_14babb7e8);
  }
  return DAT_14cbfe570;
}



// FUNCTION 14667f8ed FUN_14667f8ed body=47 status=ok
// SIG undefined FUN_14667f8ed(void)

longlong FUN_14667f8ed(void)

{
  if (DAT_14cbfe578 == 0) {
    FUN_14000fc22(&DAT_14cbfe578,&PTR_FUN_14babb888);
  }
  return DAT_14cbfe578;
}



// FUNCTION 14667f91c FUN_14667f91c body=47 status=ok
// SIG undefined FUN_14667f91c(void)

longlong FUN_14667f91c(void)

{
  if (DAT_14cbfe580 == 0) {
    FUN_14000fc22(&DAT_14cbfe580,&PTR_FUN_14babb970);
  }
  return DAT_14cbfe580;
}



// FUNCTION 14667f94b FUN_14667f94b body=47 status=ok
// SIG undefined FUN_14667f94b(void)

longlong FUN_14667f94b(void)

{
  if (DAT_14cbfe588 == 0) {
    FUN_14000fc22(&DAT_14cbfe588,&PTR_FUN_14babba10);
  }
  return DAT_14cbfe588;
}



// FUNCTION 14667f97a FUN_14667f97a body=47 status=ok
// SIG undefined FUN_14667f97a(void)

longlong FUN_14667f97a(void)

{
  if (DAT_14cbfe590 == 0) {
    FUN_14000fc22(&DAT_14cbfe590,&PTR_FUN_14babbab0);
  }
  return DAT_14cbfe590;
}



// FUNCTION 14667f9a9 FUN_14667f9a9 body=47 status=ok
// SIG undefined FUN_14667f9a9(void)

longlong FUN_14667f9a9(void)

{
  if (DAT_14cbfe598 == 0) {
    FUN_14000fc22(&DAT_14cbfe598,&PTR_FUN_14babbb50);
  }
  return DAT_14cbfe598;
}



// FUNCTION 14667f9d8 FUN_14667f9d8 body=47 status=ok
// SIG undefined FUN_14667f9d8(void)

longlong FUN_14667f9d8(void)

{
  if (DAT_14cbfe5a0 == 0) {
    FUN_14000fc22(&DAT_14cbfe5a0,&PTR_FUN_14babbbf0);
  }
  return DAT_14cbfe5a0;
}



// FUNCTION 14667fa07 FUN_14667fa07 body=47 status=ok
// SIG undefined FUN_14667fa07(void)

longlong FUN_14667fa07(void)

{
  if (DAT_14cbfe5a8 == 0) {
    FUN_14000fc22(&DAT_14cbfe5a8,&PTR_FUN_14babbc90);
  }
  return DAT_14cbfe5a8;
}



// FUNCTION 14667fa36 FUN_14667fa36 body=47 status=ok
// SIG undefined FUN_14667fa36(void)

longlong FUN_14667fa36(void)

{
  if (DAT_14cbfe5b0 == 0) {
    FUN_14000fc22(&DAT_14cbfe5b0,&PTR_FUN_14babbd30);
  }
  return DAT_14cbfe5b0;
}



// FUNCTION 14667fa65 FUN_14667fa65 body=47 status=ok
// SIG undefined FUN_14667fa65(void)

longlong FUN_14667fa65(void)

{
  if (DAT_14cbfe5b8 == 0) {
    FUN_14000fc22(&DAT_14cbfe5b8,&PTR_FUN_14babbe20);
  }
  return DAT_14cbfe5b8;
}



// FUNCTION 14667fa94 FUN_14667fa94 body=47 status=ok
// SIG undefined FUN_14667fa94(void)

longlong FUN_14667fa94(void)

{
  if (DAT_14cbfe5c0 == 0) {
    FUN_14000fc22(&DAT_14cbfe5c0,&PTR_FUN_14babbf50);
  }
  return DAT_14cbfe5c0;
}



// FUNCTION 14667fac4 FUN_14667fac4 body=34 status=ok
// SIG undefined FUN_14667fac4(void)

void FUN_14667fac4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a92240();
  FUN_14069c8d6(uVar1,&PTR_s_GetTextureForFace_14babbf90,0xd);
  return;
}



// FUNCTION 14667fae6 FUN_14667fae6 body=47 status=ok
// SIG undefined FUN_14667fae6(void)

longlong FUN_14667fae6(void)

{
  if (DAT_14cbfe5e0 == 0) {
    FUN_1409ce572(&DAT_14cbfe5e0,&PTR_FUN_14babd300);
  }
  return DAT_14cbfe5e0;
}



// FUNCTION 14667fb16 FUN_14667fb16 body=55 status=ok
// SIG undefined FUN_14667fb16(void)

void FUN_14667fb16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe600 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe600 = FUN_140002ddd(FUN_14667fb4d,uVar1,L"UsdMetadataValue");
  }
  return;
}



// FUNCTION 14667fb4d FUN_14667fb4d body=47 status=ok
// SIG undefined FUN_14667fb4d(void)

longlong FUN_14667fb4d(void)

{
  if (DAT_14cbfe5f8 == 0) {
    FUN_14086a14e(&DAT_14cbfe5f8,&PTR_FUN_14babd408);
  }
  return DAT_14cbfe5f8;
}



// FUNCTION 14667fb7c FUN_14667fb7c body=48 status=ok
// SIG undefined FUN_14667fb7c(void)

void FUN_14667fb7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14babdb50;
  return;
}



// FUNCTION 14667fbac FUN_14667fbac body=55 status=ok
// SIG undefined FUN_14667fbac(void)

void FUN_14667fbac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe618 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe618 = FUN_140002ddd(FUN_14667fbe3,uVar1,L"UsdPrimMetadata");
  }
  return;
}



// FUNCTION 14667fbe3 FUN_14667fbe3 body=47 status=ok
// SIG undefined FUN_14667fbe3(void)

longlong FUN_14667fbe3(void)

{
  if (DAT_14cbfe610 == 0) {
    FUN_14086a14e(&DAT_14cbfe610,&PTR_FUN_14babd548);
  }
  return DAT_14cbfe610;
}



// FUNCTION 14667fc12 FUN_14667fc12 body=48 status=ok
// SIG undefined FUN_14667fc12(void)

void FUN_14667fc12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14babdcb0;
  return;
}



// FUNCTION 14667fc42 FUN_14667fc42 body=55 status=ok
// SIG undefined FUN_14667fc42(void)

void FUN_14667fc42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe630 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe630 = FUN_140002ddd(FUN_14667f51a,uVar1,L"UsdCombinedPrimMetadata");
  }
  return;
}



// FUNCTION 14667fc7a FUN_14667fc7a body=48 status=ok
// SIG undefined FUN_14667fc7a(void)

void FUN_14667fc7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14babde10;
  return;
}



// FUNCTION 14667fcaa FUN_14667fcaa body=69 status=ok
// SIG undefined FUN_14667fcaa(void)

undefined8 * FUN_14667fcaa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab8600;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667fcf0 FUN_14667fcf0 body=69 status=ok
// SIG undefined FUN_14667fcf0(void)

undefined8 * FUN_14667fcf0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bab8600;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667fd36 FUN_14667fd36 body=40 status=ok
// SIG undefined FUN_14667fd36(void)

undefined8 FUN_14667fd36(undefined8 param_1,int param_2)

{
  FUN_1458c1a06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667fd5e FUN_14667fd5e body=40 status=ok
// SIG undefined FUN_14667fd5e(void)

undefined8 FUN_14667fd5e(undefined8 param_1,int param_2)

{
  FUN_1458c1a06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667fd86 FUN_14667fd86 body=40 status=ok
// SIG undefined FUN_14667fd86(void)

undefined8 FUN_14667fd86(undefined8 param_1,int param_2)

{
  FUN_1458c195a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14667fdae FUN_14667fdae body=34 status=ok
// SIG undefined FUN_14667fdae(void)

undefined8 FUN_14667fdae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14667fdd0 FUN_14667fdd0 body=34 status=ok
// SIG undefined FUN_14667fdd0(void)

undefined8 FUN_14667fdd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14667fdf2 FUN_14667fdf2 body=34 status=ok
// SIG undefined FUN_14667fdf2(void)

undefined8 FUN_14667fdf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14667fe14 FUN_14667fe14 body=34 status=ok
// SIG undefined FUN_14667fe14(void)

undefined8 FUN_14667fe14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14667fe36 FUN_14667fe36 body=55 status=ok
// SIG undefined FUN_14667fe36(void)

void FUN_14667fe36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe648 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe648 = FUN_140002ddd(FUN_14667fe6d,uVar1,L"UsdMetadataImportOptions");
  }
  return;
}



// FUNCTION 14667fe6d FUN_14667fe6d body=47 status=ok
// SIG undefined FUN_14667fe6d(void)

longlong FUN_14667fe6d(void)

{
  if (DAT_14cbfe640 == 0) {
    FUN_14086a14e(&DAT_14cbfe640,&PTR_FUN_14babe280);
  }
  return DAT_14cbfe640;
}



// FUNCTION 14667fe9c FUN_14667fe9c body=48 status=ok
// SIG undefined FUN_14667fe9c(void)

void FUN_14667fe9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bac1170;
  return;
}



// FUNCTION 14667fecc FUN_14667fecc body=47 status=ok
// SIG undefined FUN_14667fecc(void)

longlong FUN_14667fecc(void)

{
  if (DAT_14cbfe658 == 0) {
    FUN_1409ce572(&DAT_14cbfe658,&PTR_FUN_14babe330);
  }
  return DAT_14cbfe658;
}



// FUNCTION 14667fefb FUN_14667fefb body=47 status=ok
// SIG undefined FUN_14667fefb(void)

longlong FUN_14667fefb(void)

{
  if (DAT_14cbfe670 == 0) {
    FUN_1409ce572(&DAT_14cbfe670,&PTR_FUN_14babe3b0);
  }
  return DAT_14cbfe670;
}



// FUNCTION 14667ff2a FUN_14667ff2a body=47 status=ok
// SIG undefined FUN_14667ff2a(void)

longlong FUN_14667ff2a(void)

{
  if (DAT_14cbfe690 == 0) {
    FUN_14073dd9a(&DAT_14cbfe690,&PTR_LAB_14babf380);
  }
  return DAT_14cbfe690;
}



// FUNCTION 14667ff59 FUN_14667ff59 body=68 status=ok
// SIG undefined FUN_14667ff59(void)

void FUN_14667ff59(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bac0190;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x3f80000000000000;
  return;
}



// FUNCTION 14667ff9d FUN_14667ff9d body=47 status=ok
// SIG undefined FUN_14667ff9d(void)

longlong FUN_14667ff9d(void)

{
  if (DAT_14cbfe6a8 == 0) {
    FUN_14073dd9a(&DAT_14cbfe6a8,&PTR_LAB_14bac0148);
  }
  return DAT_14cbfe6a8;
}



// FUNCTION 14667ffcc FUN_14667ffcc body=47 status=ok
// SIG undefined FUN_14667ffcc(void)

longlong FUN_14667ffcc(void)

{
  if (DAT_14cbfe6b8 == 0) {
    FUN_1409ce572(&DAT_14cbfe6b8,&PTR_FUN_14bac0490);
  }
  return DAT_14cbfe6b8;
}



// FUNCTION 14667fffc FUN_14667fffc body=55 status=ok
// SIG undefined FUN_14667fffc(void)

void FUN_14667fffc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe6d8 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe6d8 = FUN_140002ddd(FUN_146680033,uVar1,L"UsdStageOptions");
  }
  return;
}



// FUNCTION 146680033 FUN_146680033 body=47 status=ok
// SIG undefined FUN_146680033(void)

longlong FUN_146680033(void)

{
  if (DAT_14cbfe6d0 == 0) {
    FUN_14086a14e(&DAT_14cbfe6d0,&PTR_FUN_14bac05d8);
  }
  return DAT_14cbfe6d0;
}



// FUNCTION 146680062 FUN_146680062 body=48 status=ok
// SIG undefined FUN_146680062(void)

void FUN_146680062(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14bac1460;
  return;
}



// FUNCTION 146680092 FUN_146680092 body=55 status=ok
// SIG undefined FUN_146680092(void)

void FUN_146680092(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe6f0 == 0) {
    uVar1 = FUN_14125ebe1();
    DAT_14cbfe6f0 = FUN_140002ddd(FUN_1466800c9,uVar1,L"UsdUnrealAssetInfo");
  }
  return;
}



// FUNCTION 1466800c9 FUN_1466800c9 body=47 status=ok
// SIG undefined FUN_1466800c9(void)

longlong FUN_1466800c9(void)

{
  if (DAT_14cbfe6e8 == 0) {
    FUN_14086a14e(&DAT_14cbfe6e8,&PTR_FUN_14bac08b0);
  }
  return DAT_14cbfe6e8;
}



// FUNCTION 1466800f8 FUN_1466800f8 body=48 status=ok
// SIG undefined FUN_1466800f8(void)

void FUN_1466800f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14bac15d0;
  return;
}



// FUNCTION 146680128 FUN_146680128 body=157 status=ok
// SIG undefined FUN_146680128(void)

void FUN_146680128(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1466801a0;
  }
  FUN_1446f470e(&local_20,L"AssetRegistry",1);
  plVar2 = (longlong *)FUN_1447c1074(local_20);
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
    uVar3 = (**(code **)(*plVar2 + 0x348))(plVar2);
    FUN_14126849c(uVar3,param_1);
  }
LAB_1466801a0:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466801c6 FUN_1466801c6 body=192 status=ok
// SIG undefined FUN_1466801c6(void)

void FUN_1466801c6(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bac2c50;
  puVar1[3] = &DAT_14cbfe7a8;
  puVar1[4] = FUN_145a25b5a;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146680288 FUN_146680288 body=29 status=ok
// SIG undefined FUN_146680288(void)

undefined8 FUN_146680288(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466802a6 FUN_1466802a6 body=29 status=ok
// SIG undefined FUN_1466802a6(void)

undefined8 FUN_1466802a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466802c4 FUN_1466802c4 body=29 status=ok
// SIG undefined FUN_1466802c4(void)

undefined8 FUN_1466802c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466802e2 FUN_1466802e2 body=93 status=ok
// SIG undefined FUN_1466802e2(void)

void FUN_1466802e2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bac2c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146680340 FUN_146680340 body=29 status=ok
// SIG undefined FUN_146680340(void)

undefined8 FUN_146680340(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14668035e FUN_14668035e body=62 status=ok
// SIG undefined FUN_14668035e(void)

void FUN_14668035e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14480f766(&DAT_14c951bc8);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14480f766(&DAT_14c951be0);
    return;
  }
  return;
}



// FUNCTION 14668039c FUN_14668039c body=47 status=ok
// SIG undefined FUN_14668039c(void)

longlong FUN_14668039c(void)

{
  if (DAT_14cbfe828 == 0) {
    FUN_1409ce572(&DAT_14cbfe828,&PTR_FUN_14bac2fb0);
  }
  return DAT_14cbfe828;
}



// FUNCTION 1466803cb FUN_1466803cb body=47 status=ok
// SIG undefined FUN_1466803cb(void)

longlong FUN_1466803cb(void)

{
  if (DAT_14cbfe840 == 0) {
    FUN_1409ce572(&DAT_14cbfe840,&PTR_FUN_14bac3050);
  }
  return DAT_14cbfe840;
}



// FUNCTION 1466803fa FUN_1466803fa body=47 status=ok
// SIG undefined FUN_1466803fa(void)

longlong FUN_1466803fa(void)

{
  if (DAT_14cbfe858 == 0) {
    FUN_1409ce572(&DAT_14cbfe858,&PTR_FUN_14bac30b0);
  }
  return DAT_14cbfe858;
}



// FUNCTION 146680429 FUN_146680429 body=47 status=ok
// SIG undefined FUN_146680429(void)

longlong FUN_146680429(void)

{
  if (DAT_14cbfe870 == 0) {
    FUN_1409ce572(&DAT_14cbfe870,&PTR_FUN_14bac3120);
  }
  return DAT_14cbfe870;
}



// FUNCTION 146680458 FUN_146680458 body=49 status=ok
// SIG undefined FUN_146680458(void)

longlong FUN_146680458(void)

{
  if (DAT_14cbfe888 == 0) {
    FUN_1409ce572(&DAT_14cbfe888,&PTR_FUN_14bac3190);
  }
  return DAT_14cbfe888;
}



// FUNCTION 146680489 FUN_146680489 body=47 status=ok
// SIG undefined FUN_146680489(void)

longlong FUN_146680489(void)

{
  if (DAT_14cbfe8a0 == 0) {
    FUN_1409ce572(&DAT_14cbfe8a0,&PTR_FUN_14bac3210);
  }
  return DAT_14cbfe8a0;
}



// FUNCTION 1466804b8 FUN_1466804b8 body=47 status=ok
// SIG undefined FUN_1466804b8(void)

longlong FUN_1466804b8(void)

{
  if (DAT_14cbfe8b8 == 0) {
    FUN_1409ce572(&DAT_14cbfe8b8,&PTR_FUN_14bac3290);
  }
  return DAT_14cbfe8b8;
}



// FUNCTION 1466804e7 FUN_1466804e7 body=47 status=ok
// SIG undefined FUN_1466804e7(void)

longlong FUN_1466804e7(void)

{
  if (DAT_14cbfe8d0 == 0) {
    FUN_1409ce572(&DAT_14cbfe8d0,&PTR_FUN_14bac3320);
  }
  return DAT_14cbfe8d0;
}



// FUNCTION 146680516 FUN_146680516 body=47 status=ok
// SIG undefined FUN_146680516(void)

longlong FUN_146680516(void)

{
  if (DAT_14cbfe8e8 == 0) {
    FUN_14086a14e(&DAT_14cbfe8e8,&PTR_FUN_14bac3410);
  }
  return DAT_14cbfe8e8;
}



// FUNCTION 146680546 FUN_146680546 body=43 status=ok
// SIG undefined FUN_146680546(void)

void FUN_146680546(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = UScriptStruct::TCppStructOps<FMatrix2D>::vftable;
  return;
}



// FUNCTION 146680572 FUN_146680572 body=55 status=ok
// SIG undefined FUN_146680572(void)

void FUN_146680572(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe908 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe908 = FUN_140002ddd(FUN_1466805a9,uVar1,L"Matrix3D");
  }
  return;
}



// FUNCTION 1466805a9 FUN_1466805a9 body=47 status=ok
// SIG undefined FUN_1466805a9(void)

longlong FUN_1466805a9(void)

{
  if (DAT_14cbfe900 == 0) {
    FUN_14086a14e(&DAT_14cbfe900,&PTR_FUN_14bac3548);
  }
  return DAT_14cbfe900;
}



// FUNCTION 1466805d8 FUN_1466805d8 body=43 status=ok
// SIG undefined FUN_1466805d8(void)

void FUN_1466805d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = UScriptStruct::TCppStructOps<FMatrix3D>::vftable;
  return;
}



// FUNCTION 146680604 FUN_146680604 body=192 status=ok
// SIG undefined FUN_146680604(void)

void FUN_146680604(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUnrealUSDWrapperModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[3] = &DAT_14cbfeac0;
  puVar1[4] = FUN_145a0a620;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466806c6 FUN_1466806c6 body=29 status=ok
// SIG undefined FUN_1466806c6(void)

undefined8 FUN_1466806c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466806e4 FUN_1466806e4 body=29 status=ok
// SIG undefined FUN_1466806e4(void)

undefined8 FUN_1466806e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146680702 FUN_146680702 body=93 status=ok
// SIG undefined FUN_146680702(void)

void FUN_146680702(longlong param_1,longlong *param_2)

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
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUnrealUSDWrapperModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146680760 FUN_146680760 body=29 status=ok
// SIG undefined FUN_146680760(void)

undefined8 FUN_146680760(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


